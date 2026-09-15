#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void bawasher_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000A8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808000AC: lw          $t6, 0x14C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14C);
    // 0x808000B0: jr          $ra
    // 0x808000B4: swc1        $f12, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x808000B4: swc1        $f12, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void bawasher_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000C0: jal         0x800F53D0
    // 0x808000C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x808000C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808000C8: lw          $v1, 0x14C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14C);
    // 0x808000CC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x808000D0: addiu       $a0, $v1, 0x10
    ctx->r4 = ADD32(ctx->r3, 0X10);
    // 0x808000D4: addiu       $a1, $v1, 0x1C
    ctx->r5 = ADD32(ctx->r3, 0X1C);
    // 0x808000D8: jal         0x80087298
    // 0x808000DC: addiu       $a2, $v1, 0x28
    ctx->r6 = ADD32(ctx->r3, 0X28);
    _chlaundry_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x808000DC: addiu       $a2, $v1, 0x28
    ctx->r6 = ADD32(ctx->r3, 0X28);
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
RECOMP_FUNC void bawasher_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x808000F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000F8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808000FC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800100: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800104: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80800108: jal         0x80092CDC
    // 0x8080010C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80092CDC(rdram, ctx);
        goto after_0;
    // 0x8080010C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x80800110: beq         $v0, $zero, L_80800150
    if (ctx->r2 == 0) {
        // 0x80800114: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80800150;
    }
    // 0x80800114: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800118: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8080011C: jal         0x80092CDC
    // 0x80800120: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_80092CDC(rdram, ctx);
        goto after_1;
    // 0x80800120: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x80800124: beq         $v0, $zero, L_80800150
    if (ctx->r2 == 0) {
        // 0x80800128: addiu       $s0, $sp, 0x24
        ctx->r16 = ADD32(ctx->r29, 0X24);
            goto L_80800150;
    }
    // 0x80800128: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800130: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80800134: jal         0x800EFB24
    // 0x80800138: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_800EFB24(rdram, ctx);
        goto after_2;
    // 0x80800138: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x8080013C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800140: jal         0x800EF368
    // 0x80800144: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    func_800EF368(rdram, ctx);
        goto after_3;
    // 0x80800144: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_3:
    // 0x80800148: b           L_80800198
    // 0x8080014C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_80800198;
    // 0x8080014C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80800150:
    // 0x80800150: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x80800154: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80800158: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080015C: jal         0x80084B28
    // 0x80800160: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    _baeggfire_entrypoint_3(rdram, ctx);
        goto after_4;
    // 0x80800160: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800168: jal         0x800EF368
    // 0x8080016C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_800EF368(rdram, ctx);
        goto after_5;
    // 0x8080016C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_5:
    // 0x80800170: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80800174: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80800178: jal         0x800EE780
    // 0x8080017C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800EE780(rdram, ctx);
        goto after_6;
    // 0x8080017C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_6:
    // 0x80800180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800184: jal         0x800EF368
    // 0x80800188: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    func_800EF368(rdram, ctx);
        goto after_7;
    // 0x80800188: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_7:
    // 0x8080018C: jal         0x80084AF0
    // 0x80800190: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _baeggcursor_entrypoint_8(rdram, ctx);
        goto after_8;
    // 0x80800190: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x80800194: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80800198:
    // 0x80800198: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8080019C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x808001A0: jal         0x800001BC
    // 0x808001A4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    bawasher_entrypoint_8(rdram, ctx);
        goto after_9;
    // 0x808001A4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_9:
    // 0x808001A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808001AC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808001B0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808001B4: jr          $ra
    // 0x808001B8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x808001B8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void bawasher_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808001C8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x808001CC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x808001D0: lw          $a0, 0x14C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14C);
    // 0x808001D4: jal         0x800EE7F8
    // 0x808001D8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x808001D8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x808001DC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x808001E0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x808001E4: lw          $a0, 0x14C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14C);
    // 0x808001E8: jal         0x800EE7F8
    // 0x808001EC: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x808001EC: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_1:
    // 0x808001F0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x808001F4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x808001F8: lw          $a0, 0x14C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14C);
    // 0x808001FC: jal         0x800EE7F8
    // 0x80800200: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x80800200: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_2:
    // 0x80800204: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80800208: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8080020C: addiu       $a0, $a0, 0x5420
    ctx->r4 = ADD32(ctx->r4, 0X5420);
    // 0x80800210: jal         0x80086D30
    // 0x80800214: lw          $a1, 0x184($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X184);
    _chbaddiesetup_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x80800214: lw          $a1, 0x184($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X184);
    after_3:
    // 0x80800218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080021C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800220: jr          $ra
    // 0x80800224: nop

    return;
    // 0x80800224: nop

;}
RECOMP_FUNC void bawasher_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800228: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8080022C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80800230: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80800234: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800238: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8080023C: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80800240: jal         0x800D8FF8
    // 0x80800244: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80800244: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    after_0:
    // 0x80800248: lw          $v0, 0x14C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14C);
    // 0x8080024C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80800250: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800254: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80800258: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8080025C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80800260: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80800264: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80800268: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x8080026C: lw          $v0, 0x14C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14C);
    // 0x80800270: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80800274: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80800278: jal         0x800F15F8
    // 0x8080027C: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    func_800F15F8(rdram, ctx);
        goto after_1;
    // 0x8080027C: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    after_1:
    // 0x80800280: lw          $t6, 0x14C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14C);
    // 0x80800284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800288: jal         0x80092AD8
    // 0x8080028C: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    func_80092AD8(rdram, ctx);
        goto after_2;
    // 0x8080028C: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    after_2:
    // 0x80800290: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800294: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80800298: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8080029C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808002A0: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x808002A4: jal         0x800E0AF0
    // 0x808002A8: nop

    func_800E0AF0(rdram, ctx);
        goto after_3;
    // 0x808002A8: nop

    after_3:
    // 0x808002AC: lw          $t7, 0x14C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14C);
    // 0x808002B0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x808002B4: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x808002B8: lwc1        $f6, 0x0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X0);
    // 0x808002BC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x808002C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808002C4: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x808002C8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x808002CC: jal         0x800E0AFC
    // 0x808002D0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800E0AFC(rdram, ctx);
        goto after_4;
    // 0x808002D0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x808002D4: lw          $t8, 0x14C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14C);
    // 0x808002D8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x808002DC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x808002E0: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x808002E4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x808002E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808002EC: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x808002F0: jal         0x800E0AFC
    // 0x808002F4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800E0AFC(rdram, ctx);
        goto after_5;
    // 0x808002F4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x808002F8: lw          $t9, 0x14C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14C);
    // 0x808002FC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80800300: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80800304: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80800308: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8080030C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800310: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    // 0x80800314: jal         0x800E0AFC
    // 0x80800318: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800E0AFC(rdram, ctx);
        goto after_6;
    // 0x80800318: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x8080031C: lw          $t0, 0x14C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14C);
    // 0x80800320: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80800324: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80800328: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8080032C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80800330: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800334: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    // 0x80800338: jal         0x800E0AFC
    // 0x8080033C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800E0AFC(rdram, ctx);
        goto after_7;
    // 0x8080033C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x80800340: lw          $t1, 0x14C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14C);
    // 0x80800344: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80800348: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080034C: lw          $a3, 0x8($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X8);
    // 0x80800350: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80800354: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x80800358: jal         0x800E0AFC
    // 0x8080035C: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    func_800E0AFC(rdram, ctx);
        goto after_8;
    // 0x8080035C: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    after_8:
    // 0x80800360: lw          $t2, 0x14C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14C);
    // 0x80800364: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80800368: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080036C: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x80800370: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80800374: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x80800378: jal         0x800E0AFC
    // 0x8080037C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    func_800E0AFC(rdram, ctx);
        goto after_9;
    // 0x8080037C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_9:
    // 0x80800380: lw          $t3, 0x14C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14C);
    // 0x80800384: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80800388: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080038C: lw          $a3, 0x8($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X8);
    // 0x80800390: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80800394: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x80800398: jal         0x800E0AFC
    // 0x8080039C: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    func_800E0AFC(rdram, ctx);
        goto after_10;
    // 0x8080039C: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    after_10:
    // 0x808003A0: lw          $t4, 0x14C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14C);
    // 0x808003A4: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x808003A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808003AC: lw          $a3, 0x8($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X8);
    // 0x808003B0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x808003B4: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x808003B8: jal         0x800E0AFC
    // 0x808003BC: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
    func_800E0AFC(rdram, ctx);
        goto after_11;
    // 0x808003BC: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
    after_11:
    // 0x808003C0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x808003C4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x808003C8: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x808003CC: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x808003D0: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x808003D4: jr          $ra
    // 0x808003D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x808003D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808003DC: nop

;}
RECOMP_FUNC void bawobble_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
;}
RECOMP_FUNC void func_80800008_bawobble(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080000C: beq         $a1, $at, L_80800024
    if (ctx->r5 == ctx->r1) {
        // 0x80800010: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800024;
    }
    // 0x80800010: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800014: beql        $a1, $at, L_80800038
    if (ctx->r5 == ctx->r1) {
        // 0x80800018: lw          $v0, 0x154($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X154);
            goto L_80800038;
    }
    goto skip_0;
    // 0x80800018: lw          $v0, 0x154($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X154);
    skip_0:
    // 0x8080001C: b           L_80800044
    // 0x80800020: lw          $t6, 0x154($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X154);
        goto L_80800044;
    // 0x80800020: lw          $t6, 0x154($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X154);
L_80800024:
    // 0x80800024: lw          $v0, 0x154($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X154);
    // 0x80800028: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8080002C: b           L_80800040
    // 0x80800030: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
        goto L_80800040;
    // 0x80800030: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
    // 0x80800034: lw          $v0, 0x154($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X154);
L_80800038:
    // 0x80800038: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8080003C: swc1        $f6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f6.u32l;
L_80800040:
    // 0x80800040: lw          $t6, 0x154($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X154);
L_80800044:
    // 0x80800044: jr          $ra
    // 0x80800048: sb          $a1, 0x1C($t6)
    MEM_B(0X1C, ctx->r14) = ctx->r5;
    return;
    // 0x80800048: sb          $a1, 0x1C($t6)
    MEM_B(0X1C, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_8080004C_bawobble(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080004C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800050: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800058: beq         $a1, $at, L_8080009C
    if (ctx->r5 == ctx->r1) {
        // 0x8080005C: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_8080009C;
    }
    // 0x8080005C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80800060: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80800064: bnel        $a1, $v1, L_808000A0
    if (ctx->r5 != ctx->r3) {
        // 0x80800068: lw          $t7, 0x154($a0)
        ctx->r15 = MEM_W(ctx->r4, 0X154);
            goto L_808000A0;
    }
    goto skip_0;
    // 0x80800068: lw          $t7, 0x154($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X154);
    skip_0:
    // 0x8080006C: lw          $v0, 0x154($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X154);
    // 0x80800070: lbu         $t6, 0xC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XC);
    // 0x80800074: beql        $v1, $t6, L_808000A8
    if (ctx->r3 == ctx->r14) {
        // 0x80800078: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808000A8;
    }
    goto skip_1;
    // 0x80800078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8080007C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800080: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800084: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x80800088: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8080008C: jal         0x80000008
    // 0x80800090: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800008_bawobble(rdram, ctx);
        goto after_0;
    // 0x80800090: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800094: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800098: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
L_8080009C:
    // 0x8080009C: lw          $t7, 0x154($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X154);
L_808000A0:
    // 0x808000A0: sb          $a2, 0xC($t7)
    MEM_B(0XC, ctx->r15) = ctx->r6;
    // 0x808000A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808000A8:
    // 0x808000A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000AC: jr          $ra
    // 0x808000B0: nop

    return;
    // 0x808000B0: nop

;}
RECOMP_FUNC void bawobble_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000BC: lw          $t6, 0x154($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X154);
    // 0x808000C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000C4: sb          $zero, 0x1D($t6)
    MEM_B(0X1D, ctx->r14) = 0;
    // 0x808000C8: jal         0x80000008
    // 0x808000CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800008_bawobble(rdram, ctx);
        goto after_0;
    // 0x808000CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808000D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808000D4: jal         0x8000004C
    // 0x808000D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8080004C_bawobble(rdram, ctx);
        goto after_1;
    // 0x808000D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808000DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808000E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808000E4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808000E8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808000EC: jal         0x80000158
    // 0x808000F0: nop

    bawobble_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x808000F0: nop

    after_2:
    // 0x808000F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000FC: jr          $ra
    // 0x80800100: nop

    return;
    // 0x80800100: nop

;}
RECOMP_FUNC void bawobble_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800104: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800108: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080010C: jal         0x8000004C
    // 0x80800110: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8080004C_bawobble(rdram, ctx);
        goto after_0;
    // 0x80800110: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080011C: jr          $ra
    // 0x80800120: nop

    return;
    // 0x80800120: nop

;}
RECOMP_FUNC void bawobble_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800124: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800128: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080012C: lw          $t6, 0x154($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X154);
    // 0x80800130: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800134: sb          $zero, 0xC($t6)
    MEM_B(0XC, ctx->r14) = 0;
    // 0x80800138: jal         0x8000004C
    // 0x8080013C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8080004C_bawobble(rdram, ctx);
        goto after_0;
    // 0x8080013C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800140: jal         0x800000B4
    // 0x80800144: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bawobble_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800144: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080014C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800150: jr          $ra
    // 0x80800154: nop

    return;
    // 0x80800154: nop

;}
RECOMP_FUNC void bawobble_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800158: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8080015C: lw          $t6, 0x154($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X154);
    // 0x80800160: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80800164: swc1        $f12, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f12.u32l;
    // 0x80800168: lw          $t7, 0x154($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X154);
    // 0x8080016C: jr          $ra
    // 0x80800170: swc1        $f14, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f14.u32l;
    return;
    // 0x80800170: swc1        $f14, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f14.u32l;
;}
RECOMP_FUNC void bawobble_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800174: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80800178: lw          $t6, 0x154($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X154);
    // 0x8080017C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80800180: swc1        $f12, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f12.u32l;
    // 0x80800184: lw          $t7, 0x154($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X154);
    // 0x80800188: jr          $ra
    // 0x8080018C: swc1        $f14, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f14.u32l;
    return;
    // 0x8080018C: swc1        $f14, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f14.u32l;
;}
RECOMP_FUNC void bawobble_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800190: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800194: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800198: jal         0x8000004C
    // 0x8080019C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8080004C_bawobble(rdram, ctx);
        goto after_0;
    // 0x8080019C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x808001A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001A8: jr          $ra
    // 0x808001AC: nop

    return;
    // 0x808001AC: nop

;}
RECOMP_FUNC void bawobble_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001B0: lw          $t7, 0x154($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X154);
    // 0x808001B4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808001B8: jr          $ra
    // 0x808001BC: sb          $t6, 0x1D($t7)
    MEM_B(0X1D, ctx->r15) = ctx->r14;
    return;
    // 0x808001BC: sb          $t6, 0x1D($t7)
    MEM_B(0X1D, ctx->r15) = ctx->r14;
;}
RECOMP_FUNC void func_808001C0_bawobble(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x808001C4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x808001C8: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x808001CC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x808001D0: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x808001D4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x808001D8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x808001DC: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x808001E0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x808001E4: jal         0x80092AD8
    // 0x808001E8: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    func_80092AD8(rdram, ctx);
        goto after_0;
    // 0x808001E8: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808001EC: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x808001F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808001F4: jal         0x800E0AF0
    // 0x808001F8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_800E0AF0(rdram, ctx);
        goto after_1;
    // 0x808001F8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x808001FC: lw          $a0, 0x154($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X154);
    // 0x80800200: jal         0x800D91B8
    // 0x80800204: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_800D91B8(rdram, ctx);
        goto after_2;
    // 0x80800204: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_2:
    // 0x80800208: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8080020C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80800210: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(61, 0X3E0) << 16);
    // 0x80800214: lwc1        $f20, 0x3E0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(61, 0X3E0));
    // 0x80800218: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8080021C: addiu       $s1, $sp, 0x4C
    ctx->r17 = ADD32(ctx->r29, 0X4C);
    // 0x80800220: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
L_80800224:
    // 0x80800224: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x80800228: lw          $t6, 0x154($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X154);
    // 0x8080022C: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x80800230: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80800234: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80800238: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x8080023C: nop

    // 0x80800240: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80800244: jal         0x800F101C
    // 0x80800248: add.s       $f12, $f4, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f16.fl;
    func_800F101C(rdram, ctx);
        goto after_3;
    // 0x80800248: add.s       $f12, $f4, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f16.fl;
    after_3:
    // 0x8080024C: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x80800250: lw          $v0, 0x154($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X154);
    // 0x80800254: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800258: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8080025C: jal         0x800F1214
    // 0x80800260: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    func_800F1214(rdram, ctx);
        goto after_4;
    // 0x80800260: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    after_4:
    // 0x80800264: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800268: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8080026C: bne         $s0, $s3, L_80800224
    if (ctx->r16 != ctx->r19) {
        // 0x80800270: swc1        $f0, -0x4($s1)
        MEM_W(-0X4, ctx->r17) = ctx->f0.u32l;
            goto L_80800224;
    }
    // 0x80800270: swc1        $f0, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->f0.u32l;
    // 0x80800274: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80800278: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8080027C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800280: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80800284: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x80800288: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x8080028C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80800290: jal         0x800E0B8C
    // 0x80800294: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800E0B8C(rdram, ctx);
        goto after_5;
    // 0x80800294: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x80800298: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8080029C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x808002A0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x808002A4: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x808002A8: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x808002AC: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x808002B0: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x808002B4: jr          $ra
    // 0x808002B8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x808002B8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void bawobble_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808002C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808002C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808002C8: lw          $v0, 0x154($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X154);
    // 0x808002CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808002D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808002D4: lbu         $t6, 0xC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XC);
    // 0x808002D8: bnel        $a1, $t6, L_808003C8
    if (ctx->r5 != ctx->r14) {
        // 0x808002DC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_808003C8;
    }
    goto skip_0;
    // 0x808002DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x808002E0: lbu         $v1, 0x1C($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1C);
    // 0x808002E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808002E8: beq         $v1, $a1, L_80800300
    if (ctx->r3 == ctx->r5) {
        // 0x808002EC: nop
    
            goto L_80800300;
    }
    // 0x808002EC: nop

    // 0x808002F0: beq         $v1, $at, L_80800368
    if (ctx->r3 == ctx->r1) {
        // 0x808002F4: nop
    
            goto L_80800368;
    }
    // 0x808002F4: nop

    // 0x808002F8: b           L_808003BC
    // 0x808002FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808003BC;
    // 0x808002FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800300:
    // 0x80800300: jal         0x800D9078
    // 0x80800304: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    func_800D9078(rdram, ctx);
        goto after_0;
    // 0x80800304: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    after_0:
    // 0x80800308: lw          $v0, 0x154($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X154);
    // 0x8080030C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800310: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800314: lwc1        $f12, 0x18($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80800318: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    // 0x8080031C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80800320: jal         0x800F10B4
    // 0x80800324: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_1;
    // 0x80800324: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80800328: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080032C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800330: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800334: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80800338: nop

    // 0x8080033C: bc1fl       L_808003BC
    if (!c1cs) {
        // 0x80800340: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003BC;
    }
    goto skip_1;
    // 0x80800340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800344: lw          $t7, 0x154($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X154);
    // 0x80800348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080034C: lbu         $t8, 0x1D($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1D);
    // 0x80800350: beql        $t8, $zero, L_808003BC
    if (ctx->r24 == 0) {
        // 0x80800354: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003BC;
    }
    goto skip_2;
    // 0x80800354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80800358: jal         0x80000008
    // 0x8080035C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80800008_bawobble(rdram, ctx);
        goto after_2;
    // 0x8080035C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x80800360: b           L_808003BC
    // 0x80800364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808003BC;
    // 0x80800364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800368:
    // 0x80800368: jal         0x800D9078
    // 0x8080036C: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    func_800D9078(rdram, ctx);
        goto after_3;
    // 0x8080036C: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    after_3:
    // 0x80800370: lw          $v0, 0x154($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X154);
    // 0x80800374: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800378: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8080037C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800380: lwc1        $f12, 0x18($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80800384: lw          $a2, 0x14($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X14);
    // 0x80800388: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8080038C: jal         0x800F10B4
    // 0x80800390: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_4;
    // 0x80800390: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x80800394: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80800398: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8080039C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003A0: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x808003A4: nop

    // 0x808003A8: bc1fl       L_808003BC
    if (!c1cs) {
        // 0x808003AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003BC;
    }
    goto skip_3;
    // 0x808003AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x808003B0: jal         0x8000004C
    // 0x808003B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8080004C_bawobble(rdram, ctx);
        goto after_5;
    // 0x808003B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x808003B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808003BC:
    // 0x808003BC: jal         0x800001C0
    // 0x808003C0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_808001C0_bawobble(rdram, ctx);
        goto after_6;
    // 0x808003C0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_6:
    // 0x808003C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808003C8:
    // 0x808003C8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808003CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808003D0: jr          $ra
    // 0x808003D4: nop

    return;
    // 0x808003D4: nop

;}
RECOMP_FUNC void bsbabykaz_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8080000C: jal         0x8009C128
    // 0x80800010: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800010: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x80800014: jal         0x8009C984
    // 0x80800018: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8009C984(rdram, ctx);
        goto after_1;
    // 0x80800018: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x8080001C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80800020: jal         0x80084490
    // 0x80800024: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    _bababykaz_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x80800024: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_2:
    // 0x80800028: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8080002C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80800030: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800034: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80800038: jal         0x800871D8
    // 0x8080003C: lw          $a3, 0x160($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X160);
    _cheggclockwork_entrypoint_3(rdram, ctx);
        goto after_3;
    // 0x8080003C: lw          $a3, 0x160($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X160);
    after_3:
    // 0x80800040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800044: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800048: jr          $ra
    // 0x8080004C: nop

    return;
    // 0x8080004C: nop

;}
RECOMP_FUNC void func_80800050_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800050: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800054: jr          $ra
    // 0x80800058: swc1        $f4, 0x170($a0)
    MEM_W(0X170, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x80800058: swc1        $f4, 0x170($a0)
    MEM_W(0X170, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8080005C_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080005C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800060: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800064: jal         0x80092AD8
    // 0x80800068: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_80092AD8(rdram, ctx);
        goto after_0;
    // 0x80800068: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080006C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800070: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800074: jal         0x800E0AF0
    // 0x80800078: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_800E0AF0(rdram, ctx);
        goto after_1;
    // 0x80800078: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x8080007C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80800080: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80800084: addiu       $a1, $zero, 0x5B
    ctx->r5 = ADD32(0, 0X5B);
    // 0x80800088: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8080008C: lui         $a3, 0xC248
    ctx->r7 = S32(0XC248 << 16);
    // 0x80800090: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80800094: jal         0x800E0AFC
    // 0x80800098: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_800E0AFC(rdram, ctx);
        goto after_2;
    // 0x80800098: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x8080009C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x808000A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808000A4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x808000A8: lwc1        $f4, 0x170($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X170);
    // 0x808000AC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x808000B0: addiu       $a1, $zero, 0x5D
    ctx->r5 = ADD32(0, 0X5D);
    // 0x808000B4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808000B8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x808000BC: jal         0x800E0AFC
    // 0x808000C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800E0AFC(rdram, ctx);
        goto after_3;
    // 0x808000C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x808000C4: jal         0x800D8FF8
    // 0x808000C8: nop

    func_800D8FF8(rdram, ctx);
        goto after_4;
    // 0x808000C8: nop

    after_4:
    // 0x808000CC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x808000D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808000D4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x808000D8: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x808000DC: lwc1        $f6, 0x170($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X170);
    // 0x808000E0: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x808000E4: swc1        $f16, 0x170($t7)
    MEM_W(0X170, ctx->r15) = ctx->f16.u32l;
    // 0x808000E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808000F0: jr          $ra
    // 0x808000F4: nop

    return;
    // 0x808000F4: nop

;}
RECOMP_FUNC void func_808000F8_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800100: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800104: jal         0x80091A58
    // 0x80800108: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80800108: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x8080010C: beq         $v0, $zero, L_8080011C
    if (ctx->r2 == 0) {
        // 0x80800110: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8080011C;
    }
    // 0x80800110: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800114: jal         0x800844A8
    // 0x80800118: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bababykaz_entrypoint_7(rdram, ctx);
        goto after_1;
    // 0x80800118: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_8080011C:
    // 0x8080011C: jal         0x80084488
    // 0x80800120: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bababykaz_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x80800120: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
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
RECOMP_FUNC void func_80800134_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800134: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080013C: jal         0x8009EF1C
    // 0x80800140: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x80800140: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800144: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80800148: jal         0x8009EF10
    // 0x8080014C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x8080014C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800150: beq         $v0, $zero, L_8080016C
    if (ctx->r2 == 0) {
        // 0x80800154: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8080016C;
    }
    // 0x80800154: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800158: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080015C: beq         $v0, $at, L_8080017C
    if (ctx->r2 == ctx->r1) {
        // 0x80800160: lwc1        $f12, 0x1C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_8080017C;
    }
    // 0x80800160: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80800164: b           L_8080019C
    // 0x80800168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080019C;
    // 0x80800168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080016C:
    // 0x8080016C: jal         0x8009B9B0
    // 0x80800170: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800170: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800174: b           L_8080019C
    // 0x80800178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080019C;
    // 0x80800178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080017C:
    // 0x8080017C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80800180: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800184: jal         0x800F1214
    // 0x80800188: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x80800188: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    after_3:
    // 0x8080018C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800190: jal         0x8009B9B0
    // 0x80800194: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800194: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080019C:
    // 0x8080019C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001A0: jr          $ra
    // 0x808001A4: nop

    return;
    // 0x808001A4: nop

;}
RECOMP_FUNC void func_808001A8_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808001B4: jal         0x8009EF10
    // 0x808001B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8009EF10(rdram, ctx);
        goto after_0;
    // 0x808001B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808001BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808001C0: bne         $v0, $at, L_808001CC
    if (ctx->r2 != ctx->r1) {
        // 0x808001C4: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_808001CC;
    }
    // 0x808001C4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808001C8: addiu       $v1, $zero, 0x135
    ctx->r3 = ADD32(0, 0X135);
L_808001CC:
    // 0x808001CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001D0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x808001D4: jal         0x80091A58
    // 0x808001D8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80091A58(rdram, ctx);
        goto after_1;
    // 0x808001D8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x808001DC: beq         $v0, $zero, L_808001E8
    if (ctx->r2 == 0) {
        // 0x808001E0: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_808001E8;
    }
    // 0x808001E0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808001E4: addiu       $v1, $zero, 0x134
    ctx->r3 = ADD32(0, 0X134);
L_808001E8:
    // 0x808001E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001EC: jal         0x800000F8
    // 0x808001F0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_808000F8_bsbabykaz(rdram, ctx);
        goto after_2;
    // 0x808001F0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x808001F4: beq         $v0, $zero, L_80800200
    if (ctx->r2 == 0) {
        // 0x808001F8: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_80800200;
    }
    // 0x808001F8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808001FC: addiu       $v1, $zero, 0x94
    ctx->r3 = ADD32(0, 0X94);
L_80800200:
    // 0x80800200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800208: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8080020C: jr          $ra
    // 0x80800210: nop

    return;
    // 0x80800210: nop

;}
RECOMP_FUNC void func_80800214_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800214: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080021C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80800220: jal         0x8009C128
    // 0x80800224: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800224: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80800228: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x8080022C: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    // 0x80800230: jal         0x801013A8
    // 0x80800234: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801013A8(rdram, ctx);
        goto after_1;
    // 0x80800234: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80800238: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8080023C: jal         0x8009E5C8
    // 0x80800240: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80800240: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_2:
    // 0x80800244: jal         0x800844B8
    // 0x80800248: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    _bababykaz_entrypoint_9(rdram, ctx);
        goto after_3;
    // 0x80800248: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x8080024C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80800250: jal         0x800F82C0
    // 0x80800254: lw          $a0, 0x184($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X184);
    func_800F82C0(rdram, ctx);
        goto after_4;
    // 0x80800254: lw          $a0, 0x184($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X184);
    after_4:
    // 0x80800258: jal         0x800F9AFC
    // 0x8080025C: nop

    func_800F9AFC(rdram, ctx);
        goto after_5;
    // 0x8080025C: nop

    after_5:
    // 0x80800260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800264: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800268: jr          $ra
    // 0x8080026C: nop

    return;
    // 0x8080026C: nop

;}
RECOMP_FUNC void bsbabykaz_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800270: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800274: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800278: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080027C: jal         0x8009E6EC
    // 0x80800280: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800280: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800284: slti        $at, $v0, 0x88
    ctx->r1 = SIGNED(ctx->r2) < 0X88 ? 1 : 0;
    // 0x80800288: bne         $at, $zero, L_808002B0
    if (ctx->r1 != 0) {
        // 0x8080028C: addiu       $t6, $v0, -0x1F
        ctx->r14 = ADD32(ctx->r2, -0X1F);
            goto L_808002B0;
    }
    // 0x8080028C: addiu       $t6, $v0, -0x1F
    ctx->r14 = ADD32(ctx->r2, -0X1F);
    // 0x80800290: addiu       $at, $zero, 0x8E
    ctx->r1 = ADD32(0, 0X8E);
    // 0x80800294: beq         $v0, $at, L_80800384
    if (ctx->r2 == ctx->r1) {
        // 0x80800298: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800384;
    }
    // 0x80800298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080029C: addiu       $at, $zero, 0x91
    ctx->r1 = ADD32(0, 0X91);
    // 0x808002A0: beql        $v0, $at, L_8080030C
    if (ctx->r2 == ctx->r1) {
        // 0x808002A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080030C;
    }
    goto skip_0;
    // 0x808002A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808002A8: b           L_808003B4
    // 0x808002AC: nop

        goto L_808003B4;
    // 0x808002AC: nop

L_808002B0:
    // 0x808002B0: slti        $at, $v0, 0x87
    ctx->r1 = SIGNED(ctx->r2) < 0X87 ? 1 : 0;
    // 0x808002B4: bne         $at, $zero, L_808002CC
    if (ctx->r1 != 0) {
        // 0x808002B8: addiu       $at, $zero, 0x87
        ctx->r1 = ADD32(0, 0X87);
            goto L_808002CC;
    }
    // 0x808002B8: addiu       $at, $zero, 0x87
    ctx->r1 = ADD32(0, 0X87);
    // 0x808002BC: beq         $v0, $at, L_8080033C
    if (ctx->r2 == ctx->r1) {
        // 0x808002C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080033C;
    }
    // 0x808002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C4: b           L_808003B4
    // 0x808002C8: nop

        goto L_808003B4;
    // 0x808002C8: nop

L_808002CC:
    // 0x808002CC: slti        $at, $v0, 0x67
    ctx->r1 = SIGNED(ctx->r2) < 0X67 ? 1 : 0;
    // 0x808002D0: bne         $at, $zero, L_808002E8
    if (ctx->r1 != 0) {
        // 0x808002D4: addiu       $at, $zero, 0x86
        ctx->r1 = ADD32(0, 0X86);
            goto L_808002E8;
    }
    // 0x808002D4: addiu       $at, $zero, 0x86
    ctx->r1 = ADD32(0, 0X86);
    // 0x808002D8: beq         $v0, $at, L_80800368
    if (ctx->r2 == ctx->r1) {
        // 0x808002DC: nop
    
            goto L_80800368;
    }
    // 0x808002DC: nop

    // 0x808002E0: b           L_808003B4
    // 0x808002E4: nop

        goto L_808003B4;
    // 0x808002E4: nop

L_808002E8:
    // 0x808002E8: sltiu       $at, $t6, 0x48
    ctx->r1 = ctx->r14 < 0X48 ? 1 : 0;
    // 0x808002EC: beq         $at, $zero, L_808003B4
    if (ctx->r1 == 0) {
        // 0x808002F0: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_808003B4;
    }
    // 0x808002F0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x808002F4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(62, 0X1600) << 16);
    // 0x808002F8: addu        $at, $at, $t6
    gpr jr_addend_80800300 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x808002FC: lw          $t6, 0x1600($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(62, 0X1600));
    // 0x80800300: jr          $t6
    // 0x80800304: nop

    switch (jr_addend_80800300 >> 2) {
        case 0: goto L_80800308; break;
        case 1: goto L_80800308; break;
        case 2: goto L_80800308; break;
        case 3: goto L_808003B4; break;
        case 4: goto L_80800308; break;
        case 5: goto L_80800308; break;
        case 6: goto L_808003B4; break;
        case 7: goto L_808003B4; break;
        case 8: goto L_808003B4; break;
        case 9: goto L_808003B4; break;
        case 10: goto L_808003B4; break;
        case 11: goto L_808003B4; break;
        case 12: goto L_808003B4; break;
        case 13: goto L_808003B4; break;
        case 14: goto L_80800308; break;
        case 15: goto L_80800308; break;
        case 16: goto L_808003B4; break;
        case 17: goto L_808003B4; break;
        case 18: goto L_808003B4; break;
        case 19: goto L_808003B4; break;
        case 20: goto L_808003B4; break;
        case 21: goto L_808003B4; break;
        case 22: goto L_808003B4; break;
        case 23: goto L_808003B4; break;
        case 24: goto L_808003B4; break;
        case 25: goto L_808003B4; break;
        case 26: goto L_808003B4; break;
        case 27: goto L_808003B4; break;
        case 28: goto L_808003B4; break;
        case 29: goto L_808003B4; break;
        case 30: goto L_808003B4; break;
        case 31: goto L_808003B4; break;
        case 32: goto L_808003B4; break;
        case 33: goto L_808003B4; break;
        case 34: goto L_808003B4; break;
        case 35: goto L_808003B4; break;
        case 36: goto L_808003B4; break;
        case 37: goto L_808003B4; break;
        case 38: goto L_80800308; break;
        case 39: goto L_808003B4; break;
        case 40: goto L_808003B4; break;
        case 41: goto L_808003B4; break;
        case 42: goto L_808003B4; break;
        case 43: goto L_808003B4; break;
        case 44: goto L_808003B4; break;
        case 45: goto L_808003B4; break;
        case 46: goto L_808003B4; break;
        case 47: goto L_80800308; break;
        case 48: goto L_808003B4; break;
        case 49: goto L_808003B4; break;
        case 50: goto L_80800308; break;
        case 51: goto L_80800308; break;
        case 52: goto L_808003B4; break;
        case 53: goto L_808003B4; break;
        case 54: goto L_808003B4; break;
        case 55: goto L_808003B4; break;
        case 56: goto L_808003B4; break;
        case 57: goto L_808003B4; break;
        case 58: goto L_80800308; break;
        case 59: goto L_80800308; break;
        case 60: goto L_80800308; break;
        case 61: goto L_80800308; break;
        case 62: goto L_808003B4; break;
        case 63: goto L_808003B4; break;
        case 64: goto L_808003B4; break;
        case 65: goto L_808003B4; break;
        case 66: goto L_808003B4; break;
        case 67: goto L_808003B4; break;
        case 68: goto L_808003B4; break;
        case 69: goto L_808003B4; break;
        case 70: goto L_808003B4; break;
        case 71: goto L_80800328; break;
        default: switch_error(__func__, 0x80800300, 0x80801600);
    }
    // 0x80800304: nop

L_80800308:
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080030C:
    // 0x8080030C: jal         0x8009E5C8
    // 0x80800310: addiu       $a1, $zero, 0x94
    ctx->r5 = ADD32(0, 0X94);
    func_8009E5C8(rdram, ctx);
        goto after_1;
    // 0x80800310: addiu       $a1, $zero, 0x94
    ctx->r5 = ADD32(0, 0X94);
    after_1:
    // 0x80800314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800318: jal         0x8009E830
    // 0x8080031C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_2;
    // 0x8080031C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80800320: b           L_808003C0
    // 0x80800324: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808003C0;
    // 0x80800324: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800328:
    // 0x80800328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080032C: jal         0x8009E830
    // 0x80800330: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E830(rdram, ctx);
        goto after_3;
    // 0x80800330: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80800334: b           L_808003C0
    // 0x80800338: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808003C0;
    // 0x80800338: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080033C:
    // 0x8080033C: jal         0x8009E5C8
    // 0x80800340: addiu       $a1, $zero, 0x94
    ctx->r5 = ADD32(0, 0X94);
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x80800340: addiu       $a1, $zero, 0x94
    ctx->r5 = ADD32(0, 0X94);
    after_4:
    // 0x80800344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800348: jal         0x8009E830
    // 0x8080034C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_5;
    // 0x8080034C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x80800350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800354: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800358: jal         0x80085338
    // 0x8080035C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    _batimer_set(rdram, ctx);
        goto after_6;
    // 0x8080035C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_6:
    // 0x80800360: b           L_808003C0
    // 0x80800364: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808003C0;
    // 0x80800364: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800368:
    // 0x80800368: jal         0x80000214
    // 0x8080036C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800214_bsbabykaz(rdram, ctx);
        goto after_7;
    // 0x8080036C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800374: jal         0x8009E830
    // 0x80800378: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_8;
    // 0x80800378: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x8080037C: b           L_808003C0
    // 0x80800380: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808003C0;
    // 0x80800380: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800384:
    // 0x80800384: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    // 0x80800388: jal         0x8009E5C8
    // 0x8080038C: addiu       $a1, $zero, 0x94
    ctx->r5 = ADD32(0, 0X94);
    func_8009E5C8(rdram, ctx);
        goto after_9;
    // 0x8080038C: addiu       $a1, $zero, 0x94
    ctx->r5 = ADD32(0, 0X94);
    after_9:
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800394: jal         0x8009E830
    // 0x80800398: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_10;
    // 0x80800398: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x8080039C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808003A4: jal         0x80085338
    // 0x808003A8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    _batimer_set(rdram, ctx);
        goto after_11;
    // 0x808003A8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_11:
    // 0x808003AC: b           L_808003C0
    // 0x808003B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808003C0;
    // 0x808003B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808003B4:
    // 0x808003B4: jal         0x80099B94
    // 0x808003B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099B94(rdram, ctx);
        goto after_12;
    // 0x808003B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808003BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808003C0:
    // 0x808003C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808003C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808003C8: jr          $ra
    // 0x808003CC: nop

    return;
    // 0x808003CC: nop

;}
RECOMP_FUNC void func_808003D0_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003D8: jal         0x800004B8
    // 0x808003DC: nop

    bsbabykaz_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x808003DC: nop

    after_0:
    // 0x808003E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003E8: jr          $ra
    // 0x808003EC: nop

    return;
    // 0x808003EC: nop

;}
RECOMP_FUNC void func_808003F0_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808003F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808003F8: jal         0x8000055C
    // 0x808003FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    bsbabykaz_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x808003FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800400: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800404: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800408: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080040C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800410: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800414: jal         0x8009FFD8
    // 0x80800418: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800418: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8080041C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800420: jal         0x8009B9B0
    // 0x80800424: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800424: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800428: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080042C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800430: jr          $ra
    // 0x80800434: nop

    return;
    // 0x80800434: nop

;}
RECOMP_FUNC void func_80800438_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800438: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080043C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800440: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800444: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800448: jal         0x80000694
    // 0x8080044C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    bsbabykaz_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x8080044C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800450: jal         0x8008CAEC
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_1;
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800458: beq         $v0, $zero, L_80800464
    if (ctx->r2 == 0) {
        // 0x8080045C: addiu       $t6, $zero, 0x136
        ctx->r14 = ADD32(0, 0X136);
            goto L_80800464;
    }
    // 0x8080045C: addiu       $t6, $zero, 0x136
    ctx->r14 = ADD32(0, 0X136);
    // 0x80800460: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800464:
    // 0x80800464: jal         0x8008DD04
    // 0x80800468: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_2;
    // 0x80800468: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080046C: beq         $v0, $zero, L_8080047C
    if (ctx->r2 == 0) {
        // 0x80800470: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080047C;
    }
    // 0x80800470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800474: addiu       $t7, $zero, 0x133
    ctx->r15 = ADD32(0, 0X133);
    // 0x80800478: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_8080047C:
    // 0x8080047C: jal         0x800001A8
    // 0x80800480: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_808001A8_bsbabykaz(rdram, ctx);
        goto after_3;
    // 0x80800480: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x80800484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800488: jal         0x8009E5C8
    // 0x8080048C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x8080048C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_4:
    // 0x80800490: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800494: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800498: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080049C: jr          $ra
    // 0x808004A0: nop

    return;
    // 0x808004A0: nop

;}
RECOMP_FUNC void bsbabykaz_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004A4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808004A8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(62, 0X1730) << 16);
    // 0x808004AC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808004B0: jr          $ra
    // 0x808004B4: lw          $v0, 0x1730($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(62, 0X1730));
    return;
    // 0x808004B4: lw          $v0, 0x1730($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(62, 0X1730));
;}
RECOMP_FUNC void bsbabykaz_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808004BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808004C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808004C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808004C8: jal         0x8009E69C
    // 0x808004CC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_8009E69C(rdram, ctx);
        goto after_0;
    // 0x808004CC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_0:
    // 0x808004D0: bnel        $v0, $zero, L_8080054C
    if (ctx->r2 != 0) {
        // 0x808004D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8080054C;
    }
    goto skip_0;
    // 0x808004D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808004D8: jal         0x8009EF60
    // 0x808004DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF60(rdram, ctx);
        goto after_1;
    // 0x808004DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808004E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808004E4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x808004E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808004F0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808004F4: jal         0x800A4D6C
    // 0x808004F8: nop

    func_800A4D6C(rdram, ctx);
        goto after_2;
    // 0x808004F8: nop

    after_2:
    // 0x808004FC: jal         0x80095A40
    // 0x80800500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095A40(rdram, ctx);
        goto after_3;
    // 0x80800500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800508: jal         0x8009590C
    // 0x8080050C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009590C(rdram, ctx);
        goto after_4;
    // 0x8080050C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800510: jal         0x800A1040
    // 0x80800514: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1040(rdram, ctx);
        goto after_5;
    // 0x80800514: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800518: jal         0x8009E474
    // 0x8080051C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E474(rdram, ctx);
        goto after_6;
    // 0x8080051C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800524: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800528: jal         0x800947EC
    // 0x8080052C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_7;
    // 0x8080052C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80800530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800534: jal         0x80092864
    // 0x80800538: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_80092864(rdram, ctx);
        goto after_8;
    // 0x80800538: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_8:
    // 0x8080053C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800540: jal         0x80095A74
    // 0x80800544: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80095A74(rdram, ctx);
        goto after_9;
    // 0x80800544: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80800548: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080054C:
    // 0x8080054C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800550: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800554: jr          $ra
    // 0x80800558: nop

    return;
    // 0x80800558: nop

;}
RECOMP_FUNC void bsbabykaz_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080055C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800560: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800564: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800568: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080056C: jal         0x8009E6C4
    // 0x80800570: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_8009E6C4(rdram, ctx);
        goto after_0;
    // 0x80800570: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_0:
    // 0x80800574: bne         $v0, $zero, L_80800680
    if (ctx->r2 != 0) {
        // 0x80800578: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800680;
    }
    // 0x80800578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080057C: jal         0x800844A8
    // 0x80800580: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bababykaz_entrypoint_7(rdram, ctx);
        goto after_1;
    // 0x80800580: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800588: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x8080058C: jal         0x800A106C
    // 0x80800590: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    func_800A106C(rdram, ctx);
        goto after_2;
    // 0x80800590: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    after_2:
    // 0x80800594: jal         0x8009EFA8
    // 0x80800598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EFA8(rdram, ctx);
        goto after_3;
    // 0x80800598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080059C: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x808005A0: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x808005A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005A8: jal         0x8009F1C8
    // 0x808005AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_4;
    // 0x808005AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x808005B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808005B8: jal         0x8009F1C8
    // 0x808005BC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_5;
    // 0x808005BC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_5:
    // 0x808005C0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(62, 0X1720) << 16);
    // 0x808005C4: lwc1        $f0, 0x1720($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(62, 0X1720));
    // 0x808005C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005CC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808005D0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808005D4: jal         0x800A4D6C
    // 0x808005D8: nop

    func_800A4D6C(rdram, ctx);
        goto after_6;
    // 0x808005D8: nop

    after_6:
    // 0x808005DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005E0: lui         $a1, 0x420C
    ctx->r5 = S32(0X420C << 16);
    // 0x808005E4: jal         0x800959C8
    // 0x808005E8: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_800959C8(rdram, ctx);
        goto after_7;
    // 0x808005E8: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_7:
    // 0x808005EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005F0: jal         0x8009590C
    // 0x808005F4: lui         $a1, 0x420C
    ctx->r5 = S32(0X420C << 16);
    func_8009590C(rdram, ctx);
        goto after_8;
    // 0x808005F4: lui         $a1, 0x420C
    ctx->r5 = S32(0X420C << 16);
    after_8:
    // 0x808005F8: jal         0x8009E4AC
    // 0x808005FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_9;
    // 0x808005FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800604: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800608: jal         0x8009E55C
    // 0x8080060C: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    func_8009E55C(rdram, ctx);
        goto after_10;
    // 0x8080060C: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    after_10:
    // 0x80800610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800614: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800618: jal         0x8009E53C
    // 0x8080061C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E53C(rdram, ctx);
        goto after_11;
    // 0x8080061C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_11:
    // 0x80800620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800624: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800628: jal         0x8009E55C
    // 0x8080062C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E55C(rdram, ctx);
        goto after_12;
    // 0x8080062C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_12:
    // 0x80800630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800634: jal         0x800844C0
    // 0x80800638: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    _bababykaz_entrypoint_10(rdram, ctx);
        goto after_13;
    // 0x80800638: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_13:
    // 0x8080063C: jal         0x800844A0
    // 0x80800640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bababykaz_entrypoint_6(rdram, ctx);
        goto after_14;
    // 0x80800640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800648: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080064C: jal         0x800947EC
    // 0x80800650: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_15;
    // 0x80800650: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x80800654: jal         0x80000050
    // 0x80800658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800050_bsbabykaz(rdram, ctx);
        goto after_16;
    // 0x80800658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x8080065C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800660: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800664: sw          $t6, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r14;
    // 0x80800668: ori         $a1, $a1, 0x9800
    ctx->r5 = ctx->r5 | 0X9800;
    // 0x8080066C: jal         0x80092864
    // 0x80800670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092864(rdram, ctx);
        goto after_17;
    // 0x80800670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800678: jal         0x80095A74
    // 0x8080067C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80095A74(rdram, ctx);
        goto after_18;
    // 0x8080067C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
L_80800680:
    // 0x80800680: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800684: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800688: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080068C: jr          $ra
    // 0x80800690: nop

    return;
    // 0x80800690: nop

;}
RECOMP_FUNC void bsbabykaz_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800694: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800698: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080069C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808006A0: jal         0x8008DD70
    // 0x808006A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008DD70(rdram, ctx);
        goto after_0;
    // 0x808006A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808006A8: bne         $v0, $zero, L_80800708
    if (ctx->r2 != 0) {
        // 0x808006AC: nop
    
            goto L_80800708;
    }
    // 0x808006AC: nop

    // 0x808006B0: jal         0x80084498
    // 0x808006B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bababykaz_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x808006B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808006B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x808006BC: beq         $v0, $at, L_808006DC
    if (ctx->r2 == ctx->r1) {
        // 0x808006C0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_808006DC;
    }
    // 0x808006C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808006C4: jal         0x800F7180
    // 0x808006C8: nop

    func_800F7180(rdram, ctx);
        goto after_2;
    // 0x808006C8: nop

    after_2:
    // 0x808006CC: bne         $v0, $zero, L_808006DC
    if (ctx->r2 != 0) {
        // 0x808006D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006DC;
    }
    // 0x808006D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006D4: jal         0x800844A8
    // 0x808006D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bababykaz_entrypoint_7(rdram, ctx);
        goto after_3;
    // 0x808006D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_808006DC:
    // 0x808006DC: jal         0x8008E078
    // 0x808006E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_4;
    // 0x808006E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808006E4: beq         $v0, $zero, L_80800708
    if (ctx->r2 == 0) {
        // 0x808006E8: nop
    
            goto L_80800708;
    }
    // 0x808006E8: nop

    // 0x808006EC: jal         0x80096694
    // 0x808006F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096694(rdram, ctx);
        goto after_5;
    // 0x808006F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808006F4: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x808006F8: bne         $v0, $at, L_80800708
    if (ctx->r2 != ctx->r1) {
        // 0x808006FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800708;
    }
    // 0x808006FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800700: jal         0x800844A8
    // 0x80800704: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bababykaz_entrypoint_7(rdram, ctx);
        goto after_6;
    // 0x80800704: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
L_80800708:
    // 0x80800708: jal         0x8000005C
    // 0x8080070C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080005C_bsbabykaz(rdram, ctx);
        goto after_7;
    // 0x8080070C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800710: jal         0x800844C8
    // 0x80800714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bababykaz_entrypoint_11(rdram, ctx);
        goto after_8;
    // 0x80800714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800718: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080071C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800720: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800724: jr          $ra
    // 0x80800728: nop

    return;
    // 0x80800728: nop

;}
RECOMP_FUNC void func_8080072C_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080072C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800730: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800734: jal         0x800004B8
    // 0x80800738: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bsbabykaz_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800738: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080073C: jal         0x80082FF0
    // 0x80800740: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800740: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800748: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080074C: jr          $ra
    // 0x80800750: nop

    return;
    // 0x80800750: nop

;}
RECOMP_FUNC void func_80800754_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800754: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080075C: jal         0x8000055C
    // 0x80800760: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bsbabykaz_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80800760: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800764: jal         0x80082FE0
    // 0x80800768: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800768: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080076C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800774: jr          $ra
    // 0x80800778: nop

    return;
    // 0x80800778: nop

;}
RECOMP_FUNC void func_8080077C_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080077C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800780: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800784: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800788: jal         0x80082FE8
    // 0x8080078C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080078C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800790: jal         0x80000694
    // 0x80800794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bsbabykaz_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800798: jal         0x80084488
    // 0x8080079C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bababykaz_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x8080079C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808007A0: beql        $v0, $zero, L_808007C8
    if (ctx->r2 == 0) {
        // 0x808007A4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808007C8;
    }
    goto skip_0;
    // 0x808007A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808007A8: jal         0x80084800
    // 0x808007AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_3(rdram, ctx);
        goto after_3;
    // 0x808007AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808007B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808007B4: beq         $v0, $at, L_808007C4
    if (ctx->r2 == ctx->r1) {
        // 0x808007B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007C4;
    }
    // 0x808007B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007BC: jal         0x8009E5C8
    // 0x808007C0: addiu       $a1, $zero, 0x94
    ctx->r5 = ADD32(0, 0X94);
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x808007C0: addiu       $a1, $zero, 0x94
    ctx->r5 = ADD32(0, 0X94);
    after_4:
L_808007C4:
    // 0x808007C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808007C8:
    // 0x808007C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808007CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808007D0: jr          $ra
    // 0x808007D4: nop

    return;
    // 0x808007D4: nop

;}
RECOMP_FUNC void bsbabykaz_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007D8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808007DC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(62, 0X1740) << 16);
    // 0x808007E0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808007E4: jr          $ra
    // 0x808007E8: lw          $v0, 0x1740($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(62, 0X1740));
    return;
    // 0x808007E8: lw          $v0, 0x1740($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(62, 0X1740));
;}
RECOMP_FUNC void func_808007EC_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808007F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808007F4: jal         0x800004B8
    // 0x808007F8: nop

    bsbabykaz_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x808007F8: nop

    after_0:
    // 0x808007FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800800: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800804: jr          $ra
    // 0x80800808: nop

    return;
    // 0x80800808: nop

;}
RECOMP_FUNC void func_8080080C_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080080C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800810: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800814: jal         0x8000055C
    // 0x80800818: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    bsbabykaz_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80800818: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080081C: lui         $a2, 0x3EC2
    ctx->r6 = S32(0X3EC2 << 16);
    // 0x80800820: ori         $a2, $a2, 0x8F5C
    ctx->r6 = ctx->r6 | 0X8F5C;
    // 0x80800824: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800828: jal         0x8008CB3C
    // 0x8080082C: addiu       $a1, $zero, 0xA9
    ctx->r5 = ADD32(0, 0XA9);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x8080082C: addiu       $a1, $zero, 0xA9
    ctx->r5 = ADD32(0, 0XA9);
    after_1:
    // 0x80800830: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800834: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800838: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080083C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800840: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800844: jal         0x8009FFD8
    // 0x80800848: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800848: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x8080084C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80800850: sw          $zero, 0x15C($t7)
    MEM_W(0X15C, ctx->r15) = 0;
    // 0x80800854: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800858: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080085C: jr          $ra
    // 0x80800860: nop

    return;
    // 0x80800860: nop

;}
RECOMP_FUNC void func_80800864_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800864: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800868: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080086C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800870: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800874: jal         0x8008CABC
    // 0x80800878: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800878: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x8080087C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80800880: jal         0x80000694
    // 0x80800884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bsbabykaz_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080088C: jal         0x80095738
    // 0x80800890: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095738(rdram, ctx);
        goto after_2;
    // 0x80800890: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_2:
    // 0x80800894: beq         $v0, $zero, L_808008AC
    if (ctx->r2 == 0) {
        // 0x80800898: nop
    
            goto L_808008AC;
    }
    // 0x80800898: nop

    // 0x8080089C: jal         0x8009B7C0
    // 0x808008A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B7C0(rdram, ctx);
        goto after_3;
    // 0x808008A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808008A4: b           L_808008B8
    // 0x808008A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808008B8;
    // 0x808008A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808008AC:
    // 0x808008AC: jal         0x80000134
    // 0x808008B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800134_bsbabykaz(rdram, ctx);
        goto after_4;
    // 0x808008B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808008B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808008B8:
    // 0x808008B8: jal         0x8009BB24
    // 0x808008BC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_5;
    // 0x808008BC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_5:
    // 0x808008C0: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x808008C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808008C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008CC: beq         $v0, $zero, L_808008E4
    if (ctx->r2 == 0) {
        // 0x808008D0: nop
    
            goto L_808008E4;
    }
    // 0x808008D0: nop

    // 0x808008D4: beq         $v0, $at, L_80800940
    if (ctx->r2 == ctx->r1) {
        // 0x808008D8: nop
    
            goto L_80800940;
    }
    // 0x808008D8: nop

    // 0x808008DC: b           L_80800940
    // 0x808008E0: nop

        goto L_80800940;
    // 0x808008E0: nop

L_808008E4:
    // 0x808008E4: jal         0x8008DF8C
    // 0x808008E8: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    func_8008DF8C(rdram, ctx);
        goto after_6;
    // 0x808008E8: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_6:
    // 0x808008EC: beq         $v0, $zero, L_80800940
    if (ctx->r2 == 0) {
        // 0x808008F0: nop
    
            goto L_80800940;
    }
    // 0x808008F0: nop

    // 0x808008F4: jal         0x8008AF24
    // 0x808008F8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008AF24(rdram, ctx);
        goto after_7;
    // 0x808008F8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_7:
    // 0x808008FC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80800900: jal         0x8008AED4
    // 0x80800904: addiu       $a1, $zero, 0xA9
    ctx->r5 = ADD32(0, 0XA9);
    func_8008AED4(rdram, ctx);
        goto after_8;
    // 0x80800904: addiu       $a1, $zero, 0xA9
    ctx->r5 = ADD32(0, 0XA9);
    after_8:
    // 0x80800908: lui         $a1, 0x3F2A
    ctx->r5 = S32(0X3F2A << 16);
    // 0x8080090C: ori         $a1, $a1, 0xACDA
    ctx->r5 = ctx->r5 | 0XACDA;
    // 0x80800910: jal         0x8008B24C
    // 0x80800914: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B24C(rdram, ctx);
        goto after_9;
    // 0x80800914: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_9:
    // 0x80800918: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8080091C: jal         0x8008B1BC
    // 0x80800920: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_10;
    // 0x80800920: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_10:
    // 0x80800924: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80800928: jal         0x8008B134
    // 0x8080092C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_11;
    // 0x8080092C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x80800930: jal         0x8008B064
    // 0x80800934: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B064(rdram, ctx);
        goto after_12;
    // 0x80800934: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_12:
    // 0x80800938: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8080093C: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_80800940:
    // 0x80800940: jal         0x8008E078
    // 0x80800944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_13;
    // 0x80800944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800948: beq         $v0, $zero, L_8080097C
    if (ctx->r2 == 0) {
        // 0x8080094C: nop
    
            goto L_8080097C;
    }
    // 0x8080094C: nop

    // 0x80800950: jal         0x8009FE58
    // 0x80800954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE58(rdram, ctx);
        goto after_14;
    // 0x80800954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800958: jal         0x8008B284
    // 0x8080095C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B284(rdram, ctx);
        goto after_15;
    // 0x8080095C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_15:
    // 0x80800960: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800964: bne         $v0, $at, L_80800978
    if (ctx->r2 != ctx->r1) {
        // 0x80800968: addiu       $t8, $zero, 0x136
        ctx->r24 = ADD32(0, 0X136);
            goto L_80800978;
    }
    // 0x80800968: addiu       $t8, $zero, 0x136
    ctx->r24 = ADD32(0, 0X136);
    // 0x8080096C: addiu       $t7, $zero, 0x132
    ctx->r15 = ADD32(0, 0X132);
    // 0x80800970: b           L_8080097C
    // 0x80800974: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
        goto L_8080097C;
    // 0x80800974: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_80800978:
    // 0x80800978: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_8080097C:
    // 0x8080097C: jal         0x800000F8
    // 0x80800980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000F8_bsbabykaz(rdram, ctx);
        goto after_16;
    // 0x80800980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800984: beq         $v0, $zero, L_80800994
    if (ctx->r2 == 0) {
        // 0x80800988: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800994;
    }
    // 0x80800988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080098C: addiu       $t9, $zero, 0x94
    ctx->r25 = ADD32(0, 0X94);
    // 0x80800990: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_80800994:
    // 0x80800994: jal         0x8009E5C8
    // 0x80800998: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_17;
    // 0x80800998: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_17:
    // 0x8080099C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808009A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808009A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808009A8: jr          $ra
    // 0x808009AC: nop

    return;
    // 0x808009AC: nop

;}
RECOMP_FUNC void bsbabykaz_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009B0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808009B4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(62, 0X1750) << 16);
    // 0x808009B8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808009BC: jr          $ra
    // 0x808009C0: lw          $v0, 0x1750($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(62, 0X1750));
    return;
    // 0x808009C0: lw          $v0, 0x1750($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(62, 0X1750));
;}
RECOMP_FUNC void func_808009C4_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808009C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808009CC: jal         0x8009BC6C
    // 0x808009D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x808009D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808009D4: jal         0x800004B8
    // 0x808009D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsbabykaz_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x808009D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808009DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808009E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808009E4: jr          $ra
    // 0x808009E8: nop

    return;
    // 0x808009E8: nop

;}
RECOMP_FUNC void func_808009EC_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009EC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808009F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808009F4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x808009F8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808009FC: jal         0x8008CABC
    // 0x80800A00: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800A00: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800A04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800A08: jal         0x8000055C
    // 0x80800A0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    bsbabykaz_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80800A0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80800A10: jal         0x8008AF24
    // 0x80800A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x80800A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A1C: jal         0x8008AED4
    // 0x80800A20: addiu       $a1, $zero, 0xA9
    ctx->r5 = ADD32(0, 0XA9);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x80800A20: addiu       $a1, $zero, 0xA9
    ctx->r5 = ADD32(0, 0XA9);
    after_3:
    // 0x80800A24: lui         $a1, 0x3FF3
    ctx->r5 = S32(0X3FF3 << 16);
    // 0x80800A28: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80800A2C: jal         0x8008B1BC
    // 0x80800A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_4;
    // 0x80800A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800A34: lui         $a1, 0x3E09
    ctx->r5 = S32(0X3E09 << 16);
    // 0x80800A38: ori         $a1, $a1, 0x374C
    ctx->r5 = ctx->r5 | 0X374C;
    // 0x80800A3C: jal         0x8008B1C8
    // 0x80800A40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1C8(rdram, ctx);
        goto after_5;
    // 0x80800A40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800A44: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800A48: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800A4C: jal         0x8008B24C
    // 0x80800A50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_6;
    // 0x80800A50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800A54: lui         $a2, 0x3F01
    ctx->r6 = S32(0X3F01 << 16);
    // 0x80800A58: ori         $a2, $a2, 0x1340
    ctx->r6 = ctx->r6 | 0X1340;
    // 0x80800A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A60: jal         0x8008B1D4
    // 0x80800A64: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_7;
    // 0x80800A64: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_7:
    // 0x80800A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A6C: jal         0x8008B134
    // 0x80800A70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x80800A70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80800A74: jal         0x8008B064
    // 0x80800A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_9;
    // 0x80800A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800A7C: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800A80: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800A84: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800A88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800A8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800A90: jal         0x8009FFD8
    // 0x80800A94: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_10;
    // 0x80800A94: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_10:
    // 0x80800A98: jal         0x8009EF04
    // 0x80800A9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EF04(rdram, ctx);
        goto after_11;
    // 0x80800A9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x80800AA0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800AA4: nop

    // 0x80800AA8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800AAC: nop

    // 0x80800AB0: bc1t        L_80800ACC
    if (c1cs) {
        // 0x80800AB4: nop
    
            goto L_80800ACC;
    }
    // 0x80800AB4: nop

    // 0x80800AB8: jal         0x8009EEB8
    // 0x80800ABC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_12;
    // 0x80800ABC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x80800AC0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800AC4: jal         0x8009C914
    // 0x80800AC8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C914(rdram, ctx);
        goto after_13;
    // 0x80800AC8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
L_80800ACC:
    // 0x80800ACC: jal         0x8009C990
    // 0x80800AD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_14;
    // 0x80800AD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x80800AD4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800AD8: jal         0x8009B9C0
    // 0x80800ADC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_15;
    // 0x80800ADC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x80800AE0: jal         0x80000134
    // 0x80800AE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800134_bsbabykaz(rdram, ctx);
        goto after_16;
    // 0x80800AE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x80800AE8: jal         0x8009C990
    // 0x80800AEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_17;
    // 0x80800AEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x80800AF0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800AF4: jal         0x8009BB00
    // 0x80800AF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BB00(rdram, ctx);
        goto after_18;
    // 0x80800AF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_18:
    // 0x80800AFC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800B00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800B04: jal         0x8009BA68
    // 0x80800B08: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_19;
    // 0x80800B08: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_19:
    // 0x80800B0C: lui         $a1, 0x43ED
    ctx->r5 = S32(0X43ED << 16);
    // 0x80800B10: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80800B14: jal         0x8009BA58
    // 0x80800B18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BA58(rdram, ctx);
        goto after_20;
    // 0x80800B18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_20:
    // 0x80800B1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800B20: jal         0x8009BCB4
    // 0x80800B24: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_21;
    // 0x80800B24: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    after_21:
    // 0x80800B28: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x80800B2C: sw          $zero, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = 0;
    // 0x80800B30: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800B34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800B38: jal         0x8009DE38
    // 0x80800B3C: addiu       $a1, $zero, 0x432
    ctx->r5 = ADD32(0, 0X432);
    func_8009DE38(rdram, ctx);
        goto after_22;
    // 0x80800B3C: addiu       $a1, $zero, 0x432
    ctx->r5 = ADD32(0, 0X432);
    after_22:
    // 0x80800B40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800B44: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800B48: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800B4C: jr          $ra
    // 0x80800B50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80800B50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80800B54_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B54: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800B58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800B5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800B60: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800B64: jal         0x8008CABC
    // 0x80800B68: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800B68: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x80800B6C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80800B70: jal         0x80000694
    // 0x80800B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bsbabykaz_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B7C: jal         0x80095738
    // 0x80800B80: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095738(rdram, ctx);
        goto after_2;
    // 0x80800B80: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_2:
    // 0x80800B84: beq         $v0, $zero, L_80800B9C
    if (ctx->r2 == 0) {
        // 0x80800B88: nop
    
            goto L_80800B9C;
    }
    // 0x80800B88: nop

    // 0x80800B8C: jal         0x8009B7C0
    // 0x80800B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B7C0(rdram, ctx);
        goto after_3;
    // 0x80800B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800B94: b           L_80800BA8
    // 0x80800B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800BA8;
    // 0x80800B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800B9C:
    // 0x80800B9C: jal         0x80000134
    // 0x80800BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800134_bsbabykaz(rdram, ctx);
        goto after_4;
    // 0x80800BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800BA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800BA8:
    // 0x80800BA8: jal         0x8009BB24
    // 0x80800BAC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_5;
    // 0x80800BAC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_5:
    // 0x80800BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BB4: jal         0x80091A30
    // 0x80800BB8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_6;
    // 0x80800BB8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_6:
    // 0x80800BBC: beq         $v0, $zero, L_80800BDC
    if (ctx->r2 == 0) {
        // 0x80800BC0: lwc1        $f6, 0x28($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
            goto L_80800BDC;
    }
    // 0x80800BC0: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800BC4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800BC8: nop

    // 0x80800BCC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800BD0: nop

    // 0x80800BD4: bc1t        L_80800BEC
    if (c1cs) {
        // 0x80800BD8: nop
    
            goto L_80800BEC;
    }
    // 0x80800BD8: nop

L_80800BDC:
    // 0x80800BDC: jal         0x8008D544
    // 0x80800BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D544(rdram, ctx);
        goto after_7;
    // 0x80800BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800BE4: bnel        $v0, $zero, L_80800BF8
    if (ctx->r2 != 0) {
        // 0x80800BE8: lw          $v0, 0x15C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X15C);
            goto L_80800BF8;
    }
    goto skip_0;
    // 0x80800BE8: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    skip_0:
L_80800BEC:
    // 0x80800BEC: jal         0x8009BC6C
    // 0x80800BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_8;
    // 0x80800BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800BF4: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
L_80800BF8:
    // 0x80800BF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800BFC: beq         $v0, $zero, L_80800C1C
    if (ctx->r2 == 0) {
        // 0x80800C00: nop
    
            goto L_80800C1C;
    }
    // 0x80800C00: nop

    // 0x80800C04: beq         $v0, $at, L_80800C74
    if (ctx->r2 == ctx->r1) {
        // 0x80800C08: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800C74;
    }
    // 0x80800C08: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800C0C: beq         $v0, $at, L_80800CB0
    if (ctx->r2 == ctx->r1) {
        // 0x80800C10: nop
    
            goto L_80800CB0;
    }
    // 0x80800C10: nop

    // 0x80800C14: b           L_80800CB0
    // 0x80800C18: nop

        goto L_80800CB0;
    // 0x80800C18: nop

L_80800C1C:
    // 0x80800C1C: jal         0x8008B324
    // 0x80800C20: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_9;
    // 0x80800C20: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_9:
    // 0x80800C24: beq         $v0, $zero, L_80800C44
    if (ctx->r2 == 0) {
        // 0x80800C28: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800C44;
    }
    // 0x80800C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C2C: lui         $a1, 0x3F2A
    ctx->r5 = S32(0X3F2A << 16);
    // 0x80800C30: ori         $a1, $a1, 0xACDA
    ctx->r5 = ctx->r5 | 0XACDA;
    // 0x80800C34: jal         0x8008CF1C
    // 0x80800C38: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_10;
    // 0x80800C38: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_10:
    // 0x80800C3C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800C40: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_80800C44:
    // 0x80800C44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C48: jal         0x8008DF8C
    // 0x80800C4C: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_11;
    // 0x80800C4C: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_11:
    // 0x80800C50: beq         $v0, $zero, L_80800CB0
    if (ctx->r2 == 0) {
        // 0x80800C54: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800CB0;
    }
    // 0x80800C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C58: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x80800C5C: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800C60: jal         0x8008CF1C
    // 0x80800C64: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_12;
    // 0x80800C64: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_12:
    // 0x80800C68: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80800C6C: b           L_80800CB0
    // 0x80800C70: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
        goto L_80800CB0;
    // 0x80800C70: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_80800C74:
    // 0x80800C74: jal         0x8008CAEC
    // 0x80800C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_13;
    // 0x80800C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800C7C: beq         $v0, $zero, L_80800C8C
    if (ctx->r2 == 0) {
        // 0x80800C80: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800C8C;
    }
    // 0x80800C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C84: addiu       $t8, $zero, 0x133
    ctx->r24 = ADD32(0, 0X133);
    // 0x80800C88: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_80800C8C:
    // 0x80800C8C: jal         0x8008DF8C
    // 0x80800C90: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    func_8008DF8C(rdram, ctx);
        goto after_14;
    // 0x80800C90: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_14:
    // 0x80800C94: beq         $v0, $zero, L_80800CB0
    if (ctx->r2 == 0) {
        // 0x80800C98: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800CB0;
    }
    // 0x80800C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C9C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80800CA0: jal         0x8008CF1C
    // 0x80800CA4: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_15;
    // 0x80800CA4: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_15:
    // 0x80800CA8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80800CAC: sw          $t9, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r25;
L_80800CB0:
    // 0x80800CB0: jal         0x8008E078
    // 0x80800CB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_16;
    // 0x80800CB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800CB8: beq         $v0, $zero, L_80800CD0
    if (ctx->r2 == 0) {
        // 0x80800CBC: nop
    
            goto L_80800CD0;
    }
    // 0x80800CBC: nop

    // 0x80800CC0: jal         0x8009FE58
    // 0x80800CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE58(rdram, ctx);
        goto after_17;
    // 0x80800CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800CC8: addiu       $t0, $zero, 0x132
    ctx->r8 = ADD32(0, 0X132);
    // 0x80800CCC: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_80800CD0:
    // 0x80800CD0: jal         0x800000F8
    // 0x80800CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000F8_bsbabykaz(rdram, ctx);
        goto after_18;
    // 0x80800CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800CD8: beq         $v0, $zero, L_80800CE8
    if (ctx->r2 == 0) {
        // 0x80800CDC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800CE8;
    }
    // 0x80800CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CE0: addiu       $t1, $zero, 0x94
    ctx->r9 = ADD32(0, 0X94);
    // 0x80800CE4: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_80800CE8:
    // 0x80800CE8: jal         0x8009E5C8
    // 0x80800CEC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_19;
    // 0x80800CEC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_19:
    // 0x80800CF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800CF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800CF8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800CFC: jr          $ra
    // 0x80800D00: nop

    return;
    // 0x80800D00: nop

;}
RECOMP_FUNC void bsbabykaz_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D04: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800D08: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(62, 0X1760) << 16);
    // 0x80800D0C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800D10: jr          $ra
    // 0x80800D14: lw          $v0, 0x1760($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(62, 0X1760));
    return;
    // 0x80800D14: lw          $v0, 0x1760($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(62, 0X1760));
;}
RECOMP_FUNC void func_80800D18_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D20: jal         0x800839B8
    // 0x80800D24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80800D24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D28: jal         0x800004B8
    // 0x80800D2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsbabykaz_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x80800D2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800D30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D38: jr          $ra
    // 0x80800D3C: nop

    return;
    // 0x80800D3C: nop

;}
RECOMP_FUNC void func_80800D40_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D48: jal         0x8000055C
    // 0x80800D4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bsbabykaz_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80800D4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D50: jal         0x800839C8
    // 0x80800D54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x80800D54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D60: jr          $ra
    // 0x80800D64: nop

    return;
    // 0x80800D64: nop

;}
RECOMP_FUNC void func_80800D68_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800D6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D70: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800D74: jal         0x800839E8
    // 0x80800D78: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x80800D78: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800D7C: beq         $v0, $zero, L_80800D88
    if (ctx->r2 == 0) {
        // 0x80800D80: addiu       $t6, $zero, 0x136
        ctx->r14 = ADD32(0, 0X136);
            goto L_80800D88;
    }
    // 0x80800D80: addiu       $t6, $zero, 0x136
    ctx->r14 = ADD32(0, 0X136);
    // 0x80800D84: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80800D88:
    // 0x80800D88: jal         0x80000694
    // 0x80800D8C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    bsbabykaz_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800D8C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800D90: jal         0x80084488
    // 0x80800D94: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bababykaz_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x80800D94: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800D98: beq         $v0, $zero, L_80800DA4
    if (ctx->r2 == 0) {
        // 0x80800D9C: addiu       $t7, $zero, 0x94
        ctx->r15 = ADD32(0, 0X94);
            goto L_80800DA4;
    }
    // 0x80800D9C: addiu       $t7, $zero, 0x94
    ctx->r15 = ADD32(0, 0X94);
    // 0x80800DA0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_80800DA4:
    // 0x80800DA4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800DA8: jal         0x8009E5C8
    // 0x80800DAC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x80800DAC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x80800DB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800DB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800DB8: jr          $ra
    // 0x80800DBC: nop

    return;
    // 0x80800DBC: nop

;}
RECOMP_FUNC void bsbabykaz_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DC0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800DC4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(62, 0X1770) << 16);
    // 0x80800DC8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800DCC: jr          $ra
    // 0x80800DD0: lw          $v0, 0x1770($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(62, 0X1770));
    return;
    // 0x80800DD0: lw          $v0, 0x1770($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(62, 0X1770));
;}
RECOMP_FUNC void func_80800DD4_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800DD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800DDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800DE0: jal         0x8009BF5C
    // 0x80800DE4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_0;
    // 0x80800DE4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x80800DE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800DEC: jal         0x8009C4CC
    // 0x80800DF0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_1;
    // 0x80800DF0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80800DF4: jal         0x800004B8
    // 0x80800DF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsbabykaz_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x80800DF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800DFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800E00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800E04: jr          $ra
    // 0x80800E08: nop

    return;
    // 0x80800E08: nop

;}
RECOMP_FUNC void func_80800E0C_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800E10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800E14: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800E18: jal         0x8000055C
    // 0x80800E1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bsbabykaz_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80800E1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800E20: lui         $a2, 0x3F28
    ctx->r6 = S32(0X3F28 << 16);
    // 0x80800E24: ori         $a2, $a2, 0xF5C3
    ctx->r6 = ctx->r6 | 0XF5C3;
    // 0x80800E28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E2C: jal         0x8008CB3C
    // 0x80800E30: addiu       $a1, $zero, 0xA6
    ctx->r5 = ADD32(0, 0XA6);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80800E30: addiu       $a1, $zero, 0xA6
    ctx->r5 = ADD32(0, 0XA6);
    after_1:
    // 0x80800E34: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800E38: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800E3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800E44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800E48: jal         0x8009FFD8
    // 0x80800E4C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800E4C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80800E50: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800E54: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800E58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E5C: jal         0x8008C9BC
    // 0x80800E60: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_3;
    // 0x80800E60: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_3:
    // 0x80800E64: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(62, 0X1724) << 16);
    // 0x80800E68: lwc1        $f4, 0x1724($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(62, 0X1724));
    // 0x80800E6C: lui         $a3, 0x3F0A
    ctx->r7 = S32(0X3F0A << 16);
    // 0x80800E70: ori         $a3, $a3, 0x3D71
    ctx->r7 = ctx->r7 | 0X3D71;
    // 0x80800E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E78: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80800E7C: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    // 0x80800E80: jal         0x8008C9F0
    // 0x80800E84: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_4;
    // 0x80800E84: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x80800E88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E8C: jal         0x8008CA30
    // 0x80800E90: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CA30(rdram, ctx);
        goto after_5;
    // 0x80800E90: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_5:
    // 0x80800E94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E98: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800E9C: jal         0x8009BFE4
    // 0x80800EA0: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_6;
    // 0x80800EA0: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_6:
    // 0x80800EA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EA8: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800EAC: jal         0x8009C554
    // 0x80800EB0: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009C554(rdram, ctx);
        goto after_7;
    // 0x80800EB0: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_7:
    // 0x80800EB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800EB8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800EBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800EC0: jr          $ra
    // 0x80800EC4: nop

    return;
    // 0x80800EC4: nop

;}
RECOMP_FUNC void func_80800EC8_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EC8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800ECC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800ED0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800ED4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800ED8: jal         0x80000694
    // 0x80800EDC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    bsbabykaz_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x80800EDC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x80800EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800EE8: jal         0x8009D2F0
    // 0x80800EEC: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009D2F0(rdram, ctx);
        goto after_1;
    // 0x80800EEC: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_1:
    // 0x80800EF0: lui         $a1, 0x3EF0
    ctx->r5 = S32(0X3EF0 << 16);
    // 0x80800EF4: ori         $a1, $a1, 0xA3D7
    ctx->r5 = ctx->r5 | 0XA3D7;
    // 0x80800EF8: jal         0x8008CB10
    // 0x80800EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x80800EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800F00: beq         $v0, $zero, L_80800F24
    if (ctx->r2 == 0) {
        // 0x80800F04: lui         $a3, 0x3FAC
        ctx->r7 = S32(0X3FAC << 16);
            goto L_80800F24;
    }
    // 0x80800F04: lui         $a3, 0x3FAC
    ctx->r7 = S32(0X3FAC << 16);
    // 0x80800F08: addiu       $t6, $zero, 0x2710
    ctx->r14 = ADD32(0, 0X2710);
    // 0x80800F0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800F10: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F18: addiu       $a1, $zero, 0x555
    ctx->r5 = ADD32(0, 0X555);
    // 0x80800F1C: jal         0x8009DBB0
    // 0x80800F20: lui         $a2, 0x3FA0
    ctx->r6 = S32(0X3FA0 << 16);
    func_8009DBB0(rdram, ctx);
        goto after_3;
    // 0x80800F20: lui         $a2, 0x3FA0
    ctx->r6 = S32(0X3FA0 << 16);
    after_3:
L_80800F24:
    // 0x80800F24: lui         $a1, 0x3F78
    ctx->r5 = S32(0X3F78 << 16);
    // 0x80800F28: ori         $a1, $a1, 0x51EC
    ctx->r5 = ctx->r5 | 0X51EC;
    // 0x80800F2C: jal         0x8008CB10
    // 0x80800F30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_4;
    // 0x80800F30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800F34: beq         $v0, $zero, L_80800F58
    if (ctx->r2 == 0) {
        // 0x80800F38: lui         $a3, 0x3FAC
        ctx->r7 = S32(0X3FAC << 16);
            goto L_80800F58;
    }
    // 0x80800F38: lui         $a3, 0x3FAC
    ctx->r7 = S32(0X3FAC << 16);
    // 0x80800F3C: addiu       $t7, $zero, 0x2710
    ctx->r15 = ADD32(0, 0X2710);
    // 0x80800F40: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800F44: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F4C: addiu       $a1, $zero, 0x556
    ctx->r5 = ADD32(0, 0X556);
    // 0x80800F50: jal         0x8009DBB0
    // 0x80800F54: lui         $a2, 0x3FA0
    ctx->r6 = S32(0X3FA0 << 16);
    func_8009DBB0(rdram, ctx);
        goto after_5;
    // 0x80800F54: lui         $a2, 0x3FA0
    ctx->r6 = S32(0X3FA0 << 16);
    after_5:
L_80800F58:
    // 0x80800F58: jal         0x80000134
    // 0x80800F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800134_bsbabykaz(rdram, ctx);
        goto after_6;
    // 0x80800F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800F60: jal         0x8009EF10
    // 0x80800F64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_7;
    // 0x80800F64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800F68: bne         $v0, $zero, L_80800F84
    if (ctx->r2 != 0) {
        // 0x80800F6C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800F84;
    }
    // 0x80800F6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F70: jal         0x8009BCD4
    // 0x80800F74: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_8;
    // 0x80800F74: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_8:
    // 0x80800F78: beq         $v0, $zero, L_80800F84
    if (ctx->r2 == 0) {
        // 0x80800F7C: addiu       $t8, $zero, 0x136
        ctx->r24 = ADD32(0, 0X136);
            goto L_80800F84;
    }
    // 0x80800F7C: addiu       $t8, $zero, 0x136
    ctx->r24 = ADD32(0, 0X136);
    // 0x80800F80: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_80800F84:
    // 0x80800F84: jal         0x8008E148
    // 0x80800F88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_9;
    // 0x80800F88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800F8C: beq         $v0, $zero, L_80800FA0
    if (ctx->r2 == 0) {
        // 0x80800F90: nop
    
            goto L_80800FA0;
    }
    // 0x80800F90: nop

    // 0x80800F94: jal         0x800848B0
    // 0x80800F98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_10;
    // 0x80800F98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800F9C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_80800FA0:
    // 0x80800FA0: jal         0x8008DD04
    // 0x80800FA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_11;
    // 0x80800FA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800FA8: beq         $v0, $zero, L_80800FB8
    if (ctx->r2 == 0) {
        // 0x80800FAC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800FB8;
    }
    // 0x80800FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FB0: addiu       $t9, $zero, 0x133
    ctx->r25 = ADD32(0, 0X133);
    // 0x80800FB4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_80800FB8:
    // 0x80800FB8: jal         0x80091A58
    // 0x80800FBC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_12;
    // 0x80800FBC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_12:
    // 0x80800FC0: beq         $v0, $zero, L_80800FCC
    if (ctx->r2 == 0) {
        // 0x80800FC4: addiu       $t0, $zero, 0x134
        ctx->r8 = ADD32(0, 0X134);
            goto L_80800FCC;
    }
    // 0x80800FC4: addiu       $t0, $zero, 0x134
    ctx->r8 = ADD32(0, 0X134);
    // 0x80800FC8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_80800FCC:
    // 0x80800FCC: jal         0x800000F8
    // 0x80800FD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000F8_bsbabykaz(rdram, ctx);
        goto after_13;
    // 0x80800FD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800FD4: beq         $v0, $zero, L_80800FE4
    if (ctx->r2 == 0) {
        // 0x80800FD8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800FE4;
    }
    // 0x80800FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FDC: addiu       $t1, $zero, 0x94
    ctx->r9 = ADD32(0, 0X94);
    // 0x80800FE0: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_80800FE4:
    // 0x80800FE4: jal         0x8009E5C8
    // 0x80800FE8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_14;
    // 0x80800FE8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_14:
    // 0x80800FEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800FF0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800FF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800FF8: jr          $ra
    // 0x80800FFC: nop

    return;
    // 0x80800FFC: nop

;}
RECOMP_FUNC void bsbabykaz_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801000: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801004: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(62, 0X1780) << 16);
    // 0x80801008: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080100C: jr          $ra
    // 0x80801010: lw          $v0, 0x1780($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(62, 0X1780));
    return;
    // 0x80801010: lw          $v0, 0x1780($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(62, 0X1780));
;}
RECOMP_FUNC void func_80801014_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801014: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801018: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080101C: jal         0x80090A2C
    // 0x80801020: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80090A2C(rdram, ctx);
        goto after_0;
    // 0x80801020: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801024: jal         0x800951B4
    // 0x80801028: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800951B4(rdram, ctx);
        goto after_1;
    // 0x80801028: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080102C: jal         0x800004B8
    // 0x80801030: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsbabykaz_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x80801030: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80801034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080103C: jr          $ra
    // 0x80801040: nop

    return;
    // 0x80801040: nop

;}
RECOMP_FUNC void func_80801044_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801044: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801048: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080104C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801050: jal         0x8000055C
    // 0x80801054: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bsbabykaz_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80801054: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080105C: addiu       $a1, $zero, 0xA4
    ctx->r5 = ADD32(0, 0XA4);
    // 0x80801060: jal         0x8008CB3C
    // 0x80801064: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80801064: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_1:
    // 0x80801068: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8080106C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801074: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801078: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080107C: jal         0x8009FFD8
    // 0x80801080: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80801080: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80801084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801088: jal         0x8009B9B0
    // 0x8080108C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x8080108C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80801090: jal         0x800909CC
    // 0x80801094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800909CC(rdram, ctx);
        goto after_4;
    // 0x80801094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801098: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080109C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808010A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808010A4: jr          $ra
    // 0x808010A8: nop

    return;
    // 0x808010A8: nop

;}
RECOMP_FUNC void func_808010AC_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808010B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808010B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808010B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808010BC: jal         0x80000694
    // 0x808010C0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    bsbabykaz_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x808010C0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808010C4: jal         0x8008E148
    // 0x808010C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_1;
    // 0x808010C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808010CC: beq         $v0, $zero, L_808010E0
    if (ctx->r2 == 0) {
        // 0x808010D0: nop
    
            goto L_808010E0;
    }
    // 0x808010D0: nop

    // 0x808010D4: jal         0x800848B0
    // 0x808010D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_2;
    // 0x808010D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808010DC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_808010E0:
    // 0x808010E0: jal         0x8008DD04
    // 0x808010E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_3;
    // 0x808010E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808010E8: beq         $v0, $zero, L_808010F8
    if (ctx->r2 == 0) {
        // 0x808010EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808010F8;
    }
    // 0x808010EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010F0: addiu       $t6, $zero, 0x133
    ctx->r14 = ADD32(0, 0X133);
    // 0x808010F4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_808010F8:
    // 0x808010F8: jal         0x800001A8
    // 0x808010FC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_808001A8_bsbabykaz(rdram, ctx);
        goto after_4;
    // 0x808010FC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x80801100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801104: jal         0x8009E5C8
    // 0x80801108: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_5;
    // 0x80801108: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_5:
    // 0x8080110C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801110: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801114: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801118: jr          $ra
    // 0x8080111C: nop

    return;
    // 0x8080111C: nop

;}
RECOMP_FUNC void bsbabykaz_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801120: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801124: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(62, 0X1790) << 16);
    // 0x80801128: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080112C: jr          $ra
    // 0x80801130: lw          $v0, 0x1790($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(62, 0X1790));
    return;
    // 0x80801130: lw          $v0, 0x1790($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(62, 0X1790));
;}
RECOMP_FUNC void func_80801134_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801134: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801138: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080113C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801140: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80801144: beq         $a1, $at, L_80801160
    if (ctx->r5 == ctx->r1) {
        // 0x80801148: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80801160;
    }
    // 0x80801148: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8080114C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80801150: beq         $a1, $at, L_8080119C
    if (ctx->r5 == ctx->r1) {
        // 0x80801154: nop
    
            goto L_8080119C;
    }
    // 0x80801154: nop

    // 0x80801158: b           L_808011D4
    // 0x8080115C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
        goto L_808011D4;
    // 0x8080115C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
L_80801160:
    // 0x80801160: jal         0x800EA068
    // 0x80801164: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    func_800EA068(rdram, ctx);
        goto after_0;
    // 0x80801164: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    after_0:
    // 0x80801168: beq         $v0, $zero, L_8080117C
    if (ctx->r2 == 0) {
        // 0x8080116C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8080117C;
    }
    // 0x8080116C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801170: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(62, 0X1728) << 16);
    // 0x80801174: b           L_80801188
    // 0x80801178: lwc1        $f0, 0x1728($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(62, 0X1728));
        goto L_80801188;
    // 0x80801178: lwc1        $f0, 0x1728($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(62, 0X1728));
L_8080117C:
    // 0x8080117C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80801180: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80801184: nop

L_80801188:
    // 0x80801188: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080118C: jal         0x80085338
    // 0x80801190: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_set(rdram, ctx);
        goto after_1;
    // 0x80801190: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80801194: b           L_808011D4
    // 0x80801198: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
        goto L_808011D4;
    // 0x80801198: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
L_8080119C:
    // 0x8080119C: jal         0x800EA068
    // 0x808011A0: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    func_800EA068(rdram, ctx);
        goto after_2;
    // 0x808011A0: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    after_2:
    // 0x808011A4: beq         $v0, $zero, L_808011B8
    if (ctx->r2 == 0) {
        // 0x808011A8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808011B8;
    }
    // 0x808011A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808011AC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(62, 0X172C) << 16);
    // 0x808011B0: b           L_808011C4
    // 0x808011B4: lwc1        $f0, 0x172C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(62, 0X172C));
        goto L_808011C4;
    // 0x808011B4: lwc1        $f0, 0x172C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(62, 0X172C));
L_808011B8:
    // 0x808011B8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x808011BC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x808011C0: nop

L_808011C4:
    // 0x808011C4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808011C8: jal         0x80085338
    // 0x808011CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_set(rdram, ctx);
        goto after_3;
    // 0x808011CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x808011D0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
L_808011D4:
    // 0x808011D4: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x808011D8: sw          $t7, 0x15C($t8)
    MEM_W(0X15C, ctx->r24) = ctx->r15;
    // 0x808011DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808011E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808011E4: jr          $ra
    // 0x808011E8: nop

    return;
    // 0x808011E8: nop

;}
RECOMP_FUNC void func_808011EC_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808011F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808011F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808011F8: jal         0x8009E6EC
    // 0x808011FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x808011FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801200: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x80801204: beq         $v0, $at, L_80801250
    if (ctx->r2 == ctx->r1) {
        // 0x80801208: addiu       $at, $zero, 0x86
        ctx->r1 = ADD32(0, 0X86);
            goto L_80801250;
    }
    // 0x80801208: addiu       $at, $zero, 0x86
    ctx->r1 = ADD32(0, 0X86);
    // 0x8080120C: beq         $v0, $at, L_808012B0
    if (ctx->r2 == ctx->r1) {
        // 0x80801210: addiu       $at, $zero, 0x87
        ctx->r1 = ADD32(0, 0X87);
            goto L_808012B0;
    }
    // 0x80801210: addiu       $at, $zero, 0x87
    ctx->r1 = ADD32(0, 0X87);
    // 0x80801214: beq         $v0, $at, L_80801230
    if (ctx->r2 == ctx->r1) {
        // 0x80801218: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801230;
    }
    // 0x80801218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080121C: addiu       $at, $zero, 0x94
    ctx->r1 = ADD32(0, 0X94);
    // 0x80801220: beql        $v0, $at, L_80801290
    if (ctx->r2 == ctx->r1) {
        // 0x80801224: lw          $t6, 0x15C($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X15C);
            goto L_80801290;
    }
    goto skip_0;
    // 0x80801224: lw          $t6, 0x15C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X15C);
    skip_0:
    // 0x80801228: b           L_808012B4
    // 0x8080122C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808012B4;
    // 0x8080122C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80801230:
    // 0x80801230: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80801234: jal         0x80085338
    // 0x80801238: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    _batimer_set(rdram, ctx);
        goto after_1;
    // 0x80801238: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_1:
    // 0x8080123C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801240: jal         0x8009E830
    // 0x80801244: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_2;
    // 0x80801244: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80801248: b           L_808012B4
    // 0x8080124C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808012B4;
    // 0x8080124C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80801250:
    // 0x80801250: jal         0x80099A58
    // 0x80801254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099A58(rdram, ctx);
        goto after_3;
    // 0x80801254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801258: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080125C: bnel        $v0, $at, L_808012B4
    if (ctx->r2 != ctx->r1) {
        // 0x80801260: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808012B4;
    }
    goto skip_1;
    // 0x80801260: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80801264: jal         0x800F9BA4
    // 0x80801268: nop

    func_800F9BA4(rdram, ctx);
        goto after_4;
    // 0x80801268: nop

    after_4:
    // 0x8080126C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801270: jal         0x80001134
    // 0x80801274: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80801134_bsbabykaz(rdram, ctx);
        goto after_5;
    // 0x80801274: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x80801278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080127C: jal         0x8009E830
    // 0x80801280: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_6;
    // 0x80801280: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x80801284: b           L_808012B4
    // 0x80801288: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808012B4;
    // 0x80801288: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080128C: lw          $t6, 0x15C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X15C);
L_80801290:
    // 0x80801290: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80801294: bnel        $t6, $at, L_808012B4
    if (ctx->r14 != ctx->r1) {
        // 0x80801298: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808012B4;
    }
    goto skip_2;
    // 0x80801298: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x8080129C: jal         0x800F9B54
    // 0x808012A0: nop

    func_800F9B54(rdram, ctx);
        goto after_7;
    // 0x808012A0: nop

    after_7:
    // 0x808012A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012A8: jal         0x80001134
    // 0x808012AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80801134_bsbabykaz(rdram, ctx);
        goto after_8;
    // 0x808012AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
L_808012B0:
    // 0x808012B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808012B4:
    // 0x808012B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808012B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808012BC: jr          $ra
    // 0x808012C0: nop

    return;
    // 0x808012C0: nop

;}
RECOMP_FUNC void func_808012C4_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808012C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808012CC: jal         0x80091E6C
    // 0x808012D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80091E6C(rdram, ctx);
        goto after_0;
    // 0x808012D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808012D4: jal         0x800004B8
    // 0x808012D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsbabykaz_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x808012D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808012DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808012E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808012E4: jr          $ra
    // 0x808012E8: nop

    return;
    // 0x808012E8: nop

;}
RECOMP_FUNC void func_808012EC_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808012F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808012F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808012F8: jal         0x8000055C
    // 0x808012FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bsbabykaz_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x808012FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801300: jal         0x80084498
    // 0x80801304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bababykaz_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80801304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801308: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8080130C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801310: jal         0x800844C0
    // 0x80801314: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    _bababykaz_entrypoint_10(rdram, ctx);
        goto after_2;
    // 0x80801314: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x80801318: jal         0x80000000
    // 0x8080131C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bsbabykaz_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x8080131C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801320: jal         0x800844B8
    // 0x80801324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bababykaz_entrypoint_9(rdram, ctx);
        goto after_4;
    // 0x80801324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080132C: jal         0x80091E48
    // 0x80801330: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_80091E48(rdram, ctx);
        goto after_5;
    // 0x80801330: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_5:
    // 0x80801334: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80801338: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080133C: bgez        $a0, L_80801354
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80801340: nop
    
            goto L_80801354;
    }
    // 0x80801340: nop

    // 0x80801344: jal         0x80001134
    // 0x80801348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80801134_bsbabykaz(rdram, ctx);
        goto after_6;
    // 0x80801348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080134C: b           L_80801374
    // 0x80801350: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80801374;
    // 0x80801350: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80801354:
    // 0x80801354: jal         0x800F80D8
    // 0x80801358: nop

    func_800F80D8(rdram, ctx);
        goto after_7;
    // 0x80801358: nop

    after_7:
    // 0x8080135C: jal         0x800F8EBC
    // 0x80801360: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800F8EBC(rdram, ctx);
        goto after_8;
    // 0x80801360: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x80801364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801368: jal         0x80001134
    // 0x8080136C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80801134_bsbabykaz(rdram, ctx);
        goto after_9;
    // 0x8080136C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x80801370: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80801374:
    // 0x80801374: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801378: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080137C: jr          $ra
    // 0x80801380: nop

    return;
    // 0x80801380: nop

;}
RECOMP_FUNC void func_80801384_bsbabykaz(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801384: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80801388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080138C: lw          $t6, 0x15C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X15C);
    // 0x80801390: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80801394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80801398: beql        $t6, $at, L_808014BC
    if (ctx->r14 == ctx->r1) {
        // 0x8080139C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808014BC;
    }
    goto skip_0;
    // 0x8080139C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808013A0: jal         0x800852F0
    // 0x808013A4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    _batimer_decrement(rdram, ctx);
        goto after_0;
    // 0x808013A4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_0:
    // 0x808013A8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x808013AC: jal         0x80085330
    // 0x808013B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_isZero(rdram, ctx);
        goto after_1;
    // 0x808013B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x808013B4: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x808013B8: jal         0x8009CC68
    // 0x808013BC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_8009CC68(rdram, ctx);
        goto after_2;
    // 0x808013BC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_2:
    // 0x808013C0: bnel        $v0, $zero, L_808014BC
    if (ctx->r2 != 0) {
        // 0x808013C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808014BC;
    }
    goto skip_1;
    // 0x808013C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x808013C8: jal         0x800DB9B0
    // 0x808013CC: nop

    func_800DB9B0(rdram, ctx);
        goto after_3;
    // 0x808013CC: nop

    after_3:
    // 0x808013D0: bnel        $v0, $zero, L_808014BC
    if (ctx->r2 != 0) {
        // 0x808013D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808014BC;
    }
    goto skip_2;
    // 0x808013D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x808013D8: jal         0x800F54E4
    // 0x808013DC: nop

    func_800F54E4(rdram, ctx);
        goto after_4;
    // 0x808013DC: nop

    after_4:
    // 0x808013E0: jal         0x800F6D24
    // 0x808013E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F6D24(rdram, ctx);
        goto after_5;
    // 0x808013E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x808013E8: bne         $v0, $zero, L_808014B8
    if (ctx->r2 != 0) {
        // 0x808013EC: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_808014B8;
    }
    // 0x808013EC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x808013F0: lw          $v0, 0x15C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X15C);
    // 0x808013F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808013F8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x808013FC: beq         $v0, $at, L_80801420
    if (ctx->r2 == ctx->r1) {
        // 0x80801400: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80801420;
    }
    // 0x80801400: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80801404: beq         $v0, $at, L_80801484
    if (ctx->r2 == ctx->r1) {
        // 0x80801408: lw          $t9, 0x3C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X3C);
            goto L_80801484;
    }
    // 0x80801408: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8080140C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80801410: beql        $v0, $at, L_808014BC
    if (ctx->r2 == ctx->r1) {
        // 0x80801414: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808014BC;
    }
    goto skip_3;
    // 0x80801414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x80801418: b           L_808014BC
    // 0x8080141C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808014BC;
    // 0x8080141C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801420:
    // 0x80801420: beql        $t7, $zero, L_808014BC
    if (ctx->r15 == 0) {
        // 0x80801424: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808014BC;
    }
    goto skip_4;
    // 0x80801424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x80801428: jal         0x800F3BB0
    // 0x8080142C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_800F3BB0(rdram, ctx);
        goto after_6;
    // 0x8080142C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_6:
    // 0x80801430: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80801434: lbu         $t8, 0x762C($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X762C);
    // 0x80801438: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x8080143C: addiu       $a0, $zero, 0x418
    ctx->r4 = ADD32(0, 0X418);
    // 0x80801440: bne         $t8, $at, L_8080145C
    if (ctx->r24 != ctx->r1) {
        // 0x80801444: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8080145C;
    }
    // 0x80801444: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80801448: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    // 0x8080144C: jal         0x80101180
    // 0x80801450: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80101180(rdram, ctx);
        goto after_7;
    // 0x80801450: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80801454: b           L_8080145C
    // 0x80801458: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8080145C;
    // 0x80801458: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8080145C:
    // 0x8080145C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80801460: beql        $v1, $at, L_80801474
    if (ctx->r3 == ctx->r1) {
        // 0x80801464: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_80801474;
    }
    goto skip_5;
    // 0x80801464: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    skip_5:
    // 0x80801468: jal         0x800F9ADC
    // 0x8080146C: nop

    func_800F9ADC(rdram, ctx);
        goto after_8;
    // 0x8080146C: nop

    after_8:
    // 0x80801470: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
L_80801474:
    // 0x80801474: jal         0x80001134
    // 0x80801478: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80801134_bsbabykaz(rdram, ctx);
        goto after_9;
    // 0x80801478: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
    // 0x8080147C: b           L_808014BC
    // 0x80801480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808014BC;
    // 0x80801480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801484:
    // 0x80801484: beql        $t9, $zero, L_808014BC
    if (ctx->r25 == 0) {
        // 0x80801488: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808014BC;
    }
    goto skip_6;
    // 0x80801488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x8080148C: jal         0x800F3BB0
    // 0x80801490: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800F3BB0(rdram, ctx);
        goto after_10;
    // 0x80801490: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_10:
    // 0x80801494: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80801498: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    // 0x8080149C: jal         0x801013A8
    // 0x808014A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801013A8(rdram, ctx);
        goto after_11;
    // 0x808014A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x808014A4: jal         0x800F9ADC
    // 0x808014A8: nop

    func_800F9ADC(rdram, ctx);
        goto after_12;
    // 0x808014A8: nop

    after_12:
    // 0x808014AC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x808014B0: jal         0x80001134
    // 0x808014B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80801134_bsbabykaz(rdram, ctx);
        goto after_13;
    // 0x808014B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_13:
L_808014B8:
    // 0x808014B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808014BC:
    // 0x808014BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x808014C0: jr          $ra
    // 0x808014C4: nop

    return;
    // 0x808014C4: nop

;}
RECOMP_FUNC void bsbabykaz_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808014C8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808014CC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(62, 0X17A0) << 16);
    // 0x808014D0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808014D4: jr          $ra
    // 0x808014D8: lw          $v0, 0x17A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(62, 0X17A0));
    return;
    // 0x808014D8: lw          $v0, 0x17A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(62, 0X17A0));
;}
RECOMP_FUNC void bsbabykaz_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808014DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808014E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808014E4: jal         0x800844A8
    // 0x808014E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bababykaz_entrypoint_7(rdram, ctx);
        goto after_0;
    // 0x808014E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x808014EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808014F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808014F4: jr          $ra
    // 0x808014F8: nop

    return;
    // 0x808014F8: nop

;}
RECOMP_FUNC void bsbabykaz_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808014FC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80801500: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80801504: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801508: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080150C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80801510: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80801514: jal         0x800EE7F8
    // 0x80801518: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80801518: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_0:
    // 0x8080151C: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x80801520: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80801524: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80801528: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x8080152C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801530: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80801534: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80801538: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x8080153C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80801540: jal         0x800EFA4C
    // 0x80801544: nop

    func_800EFA4C(rdram, ctx);
        goto after_1;
    // 0x80801544: nop

    after_1:
    // 0x80801548: lui         $a3, 0x40
    ctx->r7 = S32(0X40 << 16);
    // 0x8080154C: ori         $a3, $a3, 0x5
    ctx->r7 = ctx->r7 | 0X5;
    // 0x80801550: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801554: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80801558: jal         0x800C6A7C
    // 0x8080155C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    func_800C6A7C(rdram, ctx);
        goto after_2;
    // 0x8080155C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_2:
    // 0x80801560: beq         $v0, $zero, L_80801570
    if (ctx->r2 == 0) {
        // 0x80801564: addiu       $a0, $sp, 0x48
        ctx->r4 = ADD32(ctx->r29, 0X48);
            goto L_80801570;
    }
    // 0x80801564: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80801568: b           L_808015E4
    // 0x8080156C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808015E4;
    // 0x8080156C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80801570:
    // 0x80801570: jal         0x800EE7F8
    // 0x80801574: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x80801574: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x80801578: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x8080157C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801580: jal         0x800EE7F8
    // 0x80801584: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_4;
    // 0x80801584: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x80801588: lui         $a3, 0x40
    ctx->r7 = S32(0X40 << 16);
    // 0x8080158C: ori         $a3, $a3, 0x5
    ctx->r7 = ctx->r7 | 0X5;
    // 0x80801590: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80801594: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80801598: jal         0x800C6A7C
    // 0x8080159C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    func_800C6A7C(rdram, ctx);
        goto after_5;
    // 0x8080159C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_5:
    // 0x808015A0: beq         $v0, $zero, L_808015B0
    if (ctx->r2 == 0) {
        // 0x808015A4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_808015B0;
    }
    // 0x808015A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808015A8: b           L_808015E4
    // 0x808015AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808015E4;
    // 0x808015AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808015B0:
    // 0x808015B0: jal         0x800EE7F8
    // 0x808015B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_6;
    // 0x808015B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x808015B8: lui         $a3, 0x40
    ctx->r7 = S32(0X40 << 16);
    // 0x808015BC: ori         $a3, $a3, 0x5
    ctx->r7 = ctx->r7 | 0X5;
    // 0x808015C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808015C4: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    // 0x808015C8: jal         0x800C6C94
    // 0x808015CC: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    func_800C6C94(rdram, ctx);
        goto after_7;
    // 0x808015CC: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_7:
    // 0x808015D0: beql        $v0, $zero, L_808015E4
    if (ctx->r2 == 0) {
        // 0x808015D4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_808015E4;
    }
    goto skip_0;
    // 0x808015D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x808015D8: b           L_808015E4
    // 0x808015DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808015E4;
    // 0x808015DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808015E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808015E4:
    // 0x808015E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808015E8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808015EC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808015F0: jr          $ra
    // 0x808015F4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x808015F4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x808015F8: nop

    // 0x808015FC: nop

;}
RECOMP_FUNC void func_80800000_bsbanbflip(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800038: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
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
RECOMP_FUNC void func_80800064_bsbanbflip(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800064: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800068: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080006C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800070: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800074: jal         0x8008CABC
    // 0x80800078: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800078: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8080007C: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x80800080: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x80800084: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800088: beq         $v1, $zero, L_808000B0
    if (ctx->r3 == 0) {
        // 0x8080008C: nop
    
            goto L_808000B0;
    }
    // 0x8080008C: nop

    // 0x80800090: beq         $v1, $at, L_808000E4
    if (ctx->r3 == ctx->r1) {
        // 0x80800094: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808000E4;
    }
    // 0x80800094: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800098: beq         $v1, $at, L_8080019C
    if (ctx->r3 == ctx->r1) {
        // 0x8080009C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8080019C;
    }
    // 0x8080009C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808000A0: beq         $v1, $at, L_808002C0
    if (ctx->r3 == ctx->r1) {
        // 0x808000A4: nop
    
            goto L_808002C0;
    }
    // 0x808000A4: nop

    // 0x808000A8: b           L_80800350
    // 0x808000AC: sw          $v1, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r3;
        goto L_80800350;
    // 0x808000AC: sw          $v1, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r3;
L_808000B0:
    // 0x808000B0: jal         0x800C6DA0
    // 0x808000B4: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    func_800C6DA0(rdram, ctx);
        goto after_1;
    // 0x808000B4: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    after_1:
    // 0x808000B8: jal         0x8009BC6C
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_2;
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808000C0: jal         0x8009BC90
    // 0x808000C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC90(rdram, ctx);
        goto after_3;
    // 0x808000C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000CC: jal         0x800A0D44
    // 0x808000D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0D44(rdram, ctx);
        goto after_4;
    // 0x808000D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x808000D4: jal         0x8009F1E0
    // 0x808000D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F1E0(rdram, ctx);
        goto after_5;
    // 0x808000D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808000DC: b           L_8080034C
    // 0x808000E0: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
        goto L_8080034C;
    // 0x808000E0: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
L_808000E4:
    // 0x808000E4: jal         0x8008AF24
    // 0x808000E8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    func_8008AF24(rdram, ctx);
        goto after_6;
    // 0x808000E8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    after_6:
    // 0x808000EC: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x808000F0: jal         0x8008B1A0
    // 0x808000F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_7;
    // 0x808000F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x808000F8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x808000FC: jal         0x8008AED4
    // 0x80800100: addiu       $a1, $zero, 0x27B
    ctx->r5 = ADD32(0, 0X27B);
    func_8008AED4(rdram, ctx);
        goto after_8;
    // 0x80800100: addiu       $a1, $zero, 0x27B
    ctx->r5 = ADD32(0, 0X27B);
    after_8:
    // 0x80800104: lui         $a1, 0x4013
    ctx->r5 = S32(0X4013 << 16);
    // 0x80800108: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x8080010C: jal         0x8008B1BC
    // 0x80800110: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    func_8008B1BC(rdram, ctx);
        goto after_9;
    // 0x80800110: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    after_9:
    // 0x80800114: lui         $a2, 0x3F49
    ctx->r6 = S32(0X3F49 << 16);
    // 0x80800118: ori         $a2, $a2, 0x5E9E
    ctx->r6 = ctx->r6 | 0X5E9E;
    // 0x8080011C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80800120: jal         0x8008B1D4
    // 0x80800124: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_10;
    // 0x80800124: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_10:
    // 0x80800128: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8080012C: jal         0x8008B24C
    // 0x80800130: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B24C(rdram, ctx);
        goto after_11;
    // 0x80800130: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_11:
    // 0x80800134: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80800138: jal         0x8008B134
    // 0x8080013C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_12;
    // 0x8080013C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x80800140: jal         0x8008B064
    // 0x80800144: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    func_8008B064(rdram, ctx);
        goto after_13;
    // 0x80800144: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    after_13:
    // 0x80800148: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8080014C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800154: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800158: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080015C: jal         0x8009FFD8
    // 0x80800160: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_14;
    // 0x80800160: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_14:
    // 0x80800164: lui         $a2, 0x3CF5
    ctx->r6 = S32(0X3CF5 << 16);
    // 0x80800168: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x8080016C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800170: jal         0x8009F1C8
    // 0x80800174: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_15;
    // 0x80800174: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x80800178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080017C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800180: jal         0x8009F1C8
    // 0x80800184: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_16;
    // 0x80800184: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_16:
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080018C: jal         0x800A0CF4
    // 0x80800190: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_17;
    // 0x80800190: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x80800194: b           L_8080034C
    // 0x80800198: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
        goto L_8080034C;
    // 0x80800198: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
L_8080019C:
    // 0x8080019C: jal         0x8009EF04
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_18;
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x808001A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808001A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x808001B4: nop

    // 0x808001B8: bc1t        L_8080025C
    if (c1cs) {
        // 0x808001BC: nop
    
            goto L_8080025C;
    }
    // 0x808001BC: nop

    // 0x808001C0: jal         0x8009C908
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C908(rdram, ctx);
        goto after_19;
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x808001C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001CC: jal         0x8009D2D8
    // 0x808001D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009D2D8(rdram, ctx);
        goto after_20;
    // 0x808001D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_20:
    // 0x808001D4: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x808001D8: addiu       $t7, $t7, -0x10FC
    ctx->r15 = ADD32(ctx->r15, -0X10FC);
    // 0x808001DC: beql        $t7, $zero, L_808001FC
    if (ctx->r15 == 0) {
        // 0x808001E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001FC;
    }
    goto skip_0;
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808001E4: jal         0x8009EEB8
    // 0x808001E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_21;
    // 0x808001E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x808001EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808001F0: jal         0x8009C914
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_22;
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808001FC:
    // 0x808001FC: jal         0x8009C9C8
    // 0x80800200: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009C9C8(rdram, ctx);
        goto after_23;
    // 0x80800200: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_23:
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800208: jal         0x8009B800
    // 0x8080020C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8009B800(rdram, ctx);
        goto after_24;
    // 0x8080020C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_24:
    // 0x80800210: jal         0x8009C990
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_25;
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x80800218: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080021C: jal         0x8009B9C0
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_26;
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x80800224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800228: jal         0x8009B9B0
    // 0x8080022C: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    func_8009B9B0(rdram, ctx);
        goto after_27;
    // 0x8080022C: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    after_27:
    // 0x80800230: jal         0x8009C990
    // 0x80800234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_28;
    // 0x80800234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x80800238: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8080023C: jal         0x8009BB00
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_29;
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x80800244: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080024C: jal         0x8009BA68
    // 0x80800250: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_30;
    // 0x80800250: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_30:
    // 0x80800254: b           L_80800274
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800274;
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080025C:
    // 0x8080025C: jal         0x8009B800
    // 0x80800260: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8009B800(rdram, ctx);
        goto after_31;
    // 0x80800260: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_31:
    // 0x80800264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800268: jal         0x8009B9B0
    // 0x8080026C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_32;
    // 0x8080026C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_32:
    // 0x80800270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800274:
    // 0x80800274: jal         0x8009BA58
    // 0x80800278: lui         $a1, 0x4448
    ctx->r5 = S32(0X4448 << 16);
    func_8009BA58(rdram, ctx);
        goto after_33;
    // 0x80800278: lui         $a1, 0x4448
    ctx->r5 = S32(0X4448 << 16);
    after_33:
    // 0x8080027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800280: jal         0x8009BCB4
    // 0x80800284: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_34;
    // 0x80800284: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    after_34:
    // 0x80800288: lui         $a1, 0xC405
    ctx->r5 = S32(0XC405 << 16);
    // 0x8080028C: ori         $a1, $a1, 0x5333
    ctx->r5 = ctx->r5 | 0X5333;
    // 0x80800290: jal         0x8009BCC4
    // 0x80800294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_35;
    // 0x80800294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x80800298: lui         $a1, 0x3FF3
    ctx->r5 = S32(0X3FF3 << 16);
    // 0x8080029C: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x808002A0: jal         0x8008B1BC
    // 0x808002A4: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    func_8008B1BC(rdram, ctx);
        goto after_36;
    // 0x808002A4: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    after_36:
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002AC: addiu       $a1, $zero, 0x5A6
    ctx->r5 = ADD32(0, 0X5A6);
    // 0x808002B0: jal         0x8009DE38
    // 0x808002B4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_37;
    // 0x808002B4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_37:
    // 0x808002B8: b           L_8080034C
    // 0x808002BC: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
        goto L_8080034C;
    // 0x808002BC: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
L_808002C0:
    // 0x808002C0: jal         0x8008AF24
    // 0x808002C4: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    func_8008AF24(rdram, ctx);
        goto after_38;
    // 0x808002C4: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    after_38:
    // 0x808002C8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x808002CC: jal         0x8008AED4
    // 0x808002D0: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    func_8008AED4(rdram, ctx);
        goto after_39;
    // 0x808002D0: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    after_39:
    // 0x808002D4: lui         $a1, 0x400C
    ctx->r5 = S32(0X400C << 16);
    // 0x808002D8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808002DC: jal         0x8008B1BC
    // 0x808002E0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    func_8008B1BC(rdram, ctx);
        goto after_40;
    // 0x808002E0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    after_40:
    // 0x808002E4: lui         $a1, 0x3F5B
    ctx->r5 = S32(0X3F5B << 16);
    // 0x808002E8: ori         $a1, $a1, 0x4A23
    ctx->r5 = ctx->r5 | 0X4A23;
    // 0x808002EC: jal         0x8008B24C
    // 0x808002F0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    func_8008B24C(rdram, ctx);
        goto after_41;
    // 0x808002F0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    after_41:
    // 0x808002F4: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x808002F8: jal         0x8008B134
    // 0x808002FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_42;
    // 0x808002FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_42:
    // 0x80800300: jal         0x8008B064
    // 0x80800304: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    func_8008B064(rdram, ctx);
        goto after_43;
    // 0x80800304: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    after_43:
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080030C: jal         0x8009B800
    // 0x80800310: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009B800(rdram, ctx);
        goto after_44;
    // 0x80800310: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_44:
    // 0x80800314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800318: jal         0x8009B9B0
    // 0x8080031C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_45;
    // 0x8080031C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_45:
    // 0x80800320: jal         0x800EFD24
    // 0x80800324: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_800EFD24(rdram, ctx);
        goto after_46;
    // 0x80800324: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_46:
    // 0x80800328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080032C: jal         0x8009BA9C
    // 0x80800330: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8009BA9C(rdram, ctx);
        goto after_47;
    // 0x80800330: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_47:
    // 0x80800334: jal         0x8009FE58
    // 0x80800338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE58(rdram, ctx);
        goto after_48;
    // 0x80800338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_48:
    // 0x8080033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800340: jal         0x800A0CF4
    // 0x80800344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_49;
    // 0x80800344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_49:
    // 0x80800348: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
L_8080034C:
    // 0x8080034C: sw          $v1, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r3;
L_80800350:
    // 0x80800350: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800354: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800358: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8080035C: jr          $ra
    // 0x80800360: nop

    return;
    // 0x80800360: nop

;}
RECOMP_FUNC void func_80800364_bsbanbflip(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800364: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080036C: jal         0x80000064
    // 0x80800370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800064_bsbanbflip(rdram, ctx);
        goto after_0;
    // 0x80800370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080037C: jr          $ra
    // 0x80800380: nop

    return;
    // 0x80800380: nop

;}
RECOMP_FUNC void func_80800384_bsbanbflip(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800384: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080038C: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    // 0x80800390: jal         0x80000064
    // 0x80800394: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800064_bsbanbflip(rdram, ctx);
        goto after_0;
    // 0x80800394: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080039C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003A0: jr          $ra
    // 0x808003A4: nop

    return;
    // 0x808003A4: nop

;}
RECOMP_FUNC void func_808003A8_bsbanbflip(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808003AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003B0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808003B4: jal         0x8008CABC
    // 0x808003B8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808003B8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x808003BC: lui         $a1, 0x3E75
    ctx->r5 = S32(0X3E75 << 16);
    // 0x808003C0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x808003C4: ori         $a1, $a1, 0x2546
    ctx->r5 = ctx->r5 | 0X2546;
    // 0x808003C8: jal         0x8008B348
    // 0x808003CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B348(rdram, ctx);
        goto after_1;
    // 0x808003CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808003D0: beql        $v0, $zero, L_80800418
    if (ctx->r2 == 0) {
        // 0x808003D4: lw          $a2, 0x20($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X20);
            goto L_80800418;
    }
    goto skip_0;
    // 0x808003D4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x808003D8: jal         0x8008B284
    // 0x808003DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008B284(rdram, ctx);
        goto after_2;
    // 0x808003DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808003E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808003E4: beql        $v0, $at, L_80800418
    if (ctx->r2 == ctx->r1) {
        // 0x808003E8: lw          $a2, 0x20($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X20);
            goto L_80800418;
    }
    goto skip_1;
    // 0x808003E8: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    skip_1:
    // 0x808003EC: jal         0x8008B264
    // 0x808003F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008B264(rdram, ctx);
        goto after_3;
    // 0x808003F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x808003F4: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    // 0x808003F8: bne         $v0, $at, L_80800414
    if (ctx->r2 != ctx->r1) {
        // 0x808003FC: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800414;
    }
    // 0x808003FC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800400: lui         $a2, 0x3F0E
    ctx->r6 = S32(0X3F0E << 16);
    // 0x80800404: ori         $a2, $a2, 0xD917
    ctx->r6 = ctx->r6 | 0XD917;
    // 0x80800408: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    // 0x8080040C: jal         0x8009DF94
    // 0x80800410: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DF94(rdram, ctx);
        goto after_4;
    // 0x80800410: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_4:
L_80800414:
    // 0x80800414: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
L_80800418:
    // 0x80800418: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080041C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800420: lw          $v0, 0x15C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X15C);
    // 0x80800424: lui         $a1, 0x3E3C
    ctx->r5 = S32(0X3E3C << 16);
    // 0x80800428: beq         $v0, $at, L_80800448
    if (ctx->r2 == ctx->r1) {
        // 0x8080042C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800448;
    }
    // 0x8080042C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800430: beq         $v0, $at, L_80800468
    if (ctx->r2 == ctx->r1) {
        // 0x80800434: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800468;
    }
    // 0x80800434: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800438: beq         $v0, $at, L_808004A0
    if (ctx->r2 == ctx->r1) {
        // 0x8080043C: nop
    
            goto L_808004A0;
    }
    // 0x8080043C: nop

    // 0x80800440: b           L_808004C8
    // 0x80800444: nop

        goto L_808004C8;
    // 0x80800444: nop

L_80800448:
    // 0x80800448: jal         0x8008B348
    // 0x8080044C: ori         $a1, $a1, 0x1BDA
    ctx->r5 = ctx->r5 | 0X1BDA;
    func_8008B348(rdram, ctx);
        goto after_5;
    // 0x8080044C: ori         $a1, $a1, 0x1BDA
    ctx->r5 = ctx->r5 | 0X1BDA;
    after_5:
    // 0x80800450: beq         $v0, $zero, L_80800460
    if (ctx->r2 == 0) {
        // 0x80800454: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800460;
    }
    // 0x80800454: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800458: jal         0x80000064
    // 0x8080045C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800064_bsbanbflip(rdram, ctx);
        goto after_6;
    // 0x8080045C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
L_80800460:
    // 0x80800460: b           L_808004C8
    // 0x80800464: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
        goto L_808004C8;
    // 0x80800464: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
L_80800468:
    // 0x80800468: jal         0x80000000
    // 0x8080046C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80800000_bsbanbflip(rdram, ctx);
        goto after_7;
    // 0x8080046C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_7:
    // 0x80800470: jal         0x8008B324
    // 0x80800474: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008B324(rdram, ctx);
        goto after_8;
    // 0x80800474: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_8:
    // 0x80800478: beq         $v0, $zero, L_80800484
    if (ctx->r2 == 0) {
        // 0x8080047C: addiu       $t6, $zero, 0x2F
        ctx->r14 = ADD32(0, 0X2F);
            goto L_80800484;
    }
    // 0x8080047C: addiu       $t6, $zero, 0x2F
    ctx->r14 = ADD32(0, 0X2F);
    // 0x80800480: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80800484:
    // 0x80800484: jal         0x8008DA24
    // 0x80800488: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008DA24(rdram, ctx);
        goto after_9;
    // 0x80800488: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_9:
    // 0x8080048C: beq         $v0, $zero, L_80800498
    if (ctx->r2 == 0) {
        // 0x80800490: addiu       $t7, $zero, 0xA8
        ctx->r15 = ADD32(0, 0XA8);
            goto L_80800498;
    }
    // 0x80800490: addiu       $t7, $zero, 0xA8
    ctx->r15 = ADD32(0, 0XA8);
    // 0x80800494: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_80800498:
    // 0x80800498: b           L_808004C8
    // 0x8080049C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
        goto L_808004C8;
    // 0x8080049C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
L_808004A0:
    // 0x808004A0: jal         0x8008B324
    // 0x808004A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008B324(rdram, ctx);
        goto after_10;
    // 0x808004A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_10:
    // 0x808004A8: beq         $v0, $zero, L_808004B4
    if (ctx->r2 == 0) {
        // 0x808004AC: addiu       $t8, $zero, 0x2
        ctx->r24 = ADD32(0, 0X2);
            goto L_808004B4;
    }
    // 0x808004AC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x808004B0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_808004B4:
    // 0x808004B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808004B8: jal         0x800A01F8
    // 0x808004BC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800A01F8(rdram, ctx);
        goto after_11;
    // 0x808004BC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_11:
    // 0x808004C0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x808004C4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
L_808004C8:
    // 0x808004C8: jal         0x8008E35C
    // 0x808004CC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8008E35C(rdram, ctx);
        goto after_12;
    // 0x808004CC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_12:
    // 0x808004D0: beq         $v0, $zero, L_808004DC
    if (ctx->r2 == 0) {
        // 0x808004D4: addiu       $t9, $zero, 0x4C
        ctx->r25 = ADD32(0, 0X4C);
            goto L_808004DC;
    }
    // 0x808004D4: addiu       $t9, $zero, 0x4C
    ctx->r25 = ADD32(0, 0X4C);
    // 0x808004D8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_808004DC:
    // 0x808004DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808004E0: jal         0x8009E5C8
    // 0x808004E4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_13;
    // 0x808004E4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_13:
    // 0x808004E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808004F0: jr          $ra
    // 0x808004F4: nop

    return;
    // 0x808004F4: nop

;}
RECOMP_FUNC void bsbanbflip_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004F8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808004FC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(63, 0X510) << 16);
    // 0x80800500: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800504: jr          $ra
    // 0x80800508: lw          $v0, 0x510($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(63, 0X510));
    return;
    // 0x80800508: lw          $v0, 0x510($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(63, 0X510));
    // 0x8080050C: nop

    // 0x80800510: lb          $t0, 0x2670($zero)
    ctx->r8 = MEM_B(0, 0X2670);
    // 0x80800514: lb          $t0, 0x2678($zero)
    ctx->r8 = MEM_B(0, 0X2678);
    // 0x80800518: lb          $t0, 0x2680($zero)
    ctx->r8 = MEM_B(0, 0X2680);
    // 0x8080051C: lb          $t1, -0x646C($zero)
    ctx->r9 = MEM_B(0, -0X646C);
;}
RECOMP_FUNC void func_80800000_bsbanpackwhack(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800010: jal         0x800B5BE4
    // 0x80800014: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800B5BE4(rdram, ctx);
        goto after_0;
    // 0x80800014: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80800018: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8080001C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800020: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800024: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80800028: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8080002C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80800030: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80800034: nop

    // 0x80800038: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x8080003C: jal         0x800BA77C
    // 0x80800040: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    func_800BA77C(rdram, ctx);
        goto after_1;
    // 0x80800040: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    after_1:
    // 0x80800044: lui         $t9, 0x0
    ctx->r25 = S32(RELOC_HI16(64, 0X4D0) << 16);
    // 0x80800048: addiu       $t9, $t9, 0x4D0
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(64, 0X4D0));
    // 0x8080004C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80800050: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80800054: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80800058: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8080005C: jal         0x800BABB8
    // 0x80800060: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_2;
    // 0x80800060: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x80800064: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800068: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080006C: jr          $ra
    // 0x80800070: nop

    return;
    // 0x80800070: nop

;}
RECOMP_FUNC void func_80800074_bsbanpackwhack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800074: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080007C: jal         0x8009C984
    // 0x80800080: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8009C984(rdram, ctx);
        goto after_0;
    // 0x80800080: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800084: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800088: jal         0x80000000
    // 0x8080008C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_80800000_bsbanpackwhack(rdram, ctx);
        goto after_1;
    // 0x8080008C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80800090: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800094: jal         0x800BA22C
    // 0x80800098: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_2;
    // 0x80800098: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8080009C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000A4: jr          $ra
    // 0x808000A8: nop

    return;
    // 0x808000A8: nop

;}
RECOMP_FUNC void bsbanpackwhack_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000BC: jal         0x80095774
    // 0x808000C0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80095774(rdram, ctx);
        goto after_0;
    // 0x808000C0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_0:
    // 0x808000C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C8: jal         0x80084538
    // 0x808000CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babackpack_set_state(rdram, ctx);
        goto after_1;
    // 0x808000CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D4: jal         0x800A0CD0
    // 0x808000D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CD0(rdram, ctx);
        goto after_2;
    // 0x808000D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x808000DC: jal         0x8009BC90
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC90(rdram, ctx);
        goto after_3;
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808000E4: jal         0x8009E474
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E474(rdram, ctx);
        goto after_4;
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808000EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000F8: jr          $ra
    // 0x808000FC: nop

    return;
    // 0x808000FC: nop

;}
RECOMP_FUNC void bsbanpackwhack_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800100: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800104: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800108: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080010C: lui         $a2, 0x3FD9
    ctx->r6 = S32(0X3FD9 << 16);
    // 0x80800110: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800114: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800118: jal         0x8008CCBC
    // 0x8080011C: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    func_8008CCBC(rdram, ctx);
        goto after_0;
    // 0x8080011C: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    after_0:
    // 0x80800120: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800124: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080012C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800130: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800134: jal         0x8009FFD8
    // 0x80800138: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800138: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x8080013C: jal         0x8009BB00
    // 0x80800140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_2;
    // 0x80800140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800144: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x80800148: jal         0x8008E078
    // 0x8080014C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_3;
    // 0x8080014C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800150: beq         $v0, $zero, L_8080016C
    if (ctx->r2 == 0) {
        // 0x80800154: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080016C;
    }
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800158: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(64, 0X4B0) << 16);
    // 0x8080015C: lwc1        $f6, 0x4B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(64, 0X4B0));
    // 0x80800160: lwc1        $f4, 0x16C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800164: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80800168: swc1        $f8, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f8.u32l;
L_8080016C:
    // 0x8080016C: jal         0x8009B9B0
    // 0x80800170: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800170: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_4:
    // 0x80800174: jal         0x8009C990
    // 0x80800178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_5;
    // 0x80800178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080017C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800180: jal         0x8009B9C0
    // 0x80800184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_6;
    // 0x80800184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080018C: jal         0x8009BCC4
    // 0x80800190: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    func_8009BCC4(rdram, ctx);
        goto after_7;
    // 0x80800190: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    after_7:
    // 0x80800194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800198: jal         0x80095760
    // 0x8080019C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80095760(rdram, ctx);
        goto after_8;
    // 0x8080019C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_8:
    // 0x808001A0: jal         0x8009E4AC
    // 0x808001A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_9;
    // 0x808001A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808001A8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x808001AC: nop

    // 0x808001B0: swc1        $f10, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f10.u32l;
    // 0x808001B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808001B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808001BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808001C0: jr          $ra
    // 0x808001C4: nop

    return;
    // 0x808001C4: nop

;}
RECOMP_FUNC void bsbanpackwhack_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x808001CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001D8: jal         0x8008CABC
    // 0x808001DC: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808001DC: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    after_0:
    // 0x808001E0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x808001E4: jal         0x8008E078
    // 0x808001E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_1;
    // 0x808001E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808001EC: beq         $v0, $zero, L_80800224
    if (ctx->r2 == 0) {
        // 0x808001F0: lui         $at, 0x0
        ctx->r1 = S32(RELOC_HI16(64, 0X4B4) << 16);
            goto L_80800224;
    }
    // 0x808001F0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(64, 0X4B4) << 16);
    // 0x808001F4: lwc1        $f6, 0x4B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(64, 0X4B4));
    // 0x808001F8: lwc1        $f4, 0x16C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x808001FC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80800200: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800204: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80800208: jal         0x800F0E00
    // 0x8080020C: nop

    func_800F0E00(rdram, ctx);
        goto after_2;
    // 0x8080020C: nop

    after_2:
    // 0x80800210: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800214: jal         0x800F1574
    // 0x80800218: addiu       $a0, $s0, 0x16C
    ctx->r4 = ADD32(ctx->r16, 0X16C);
    func_800F1574(rdram, ctx);
        goto after_3;
    // 0x80800218: addiu       $a0, $s0, 0x16C
    ctx->r4 = ADD32(ctx->r16, 0X16C);
    after_3:
    // 0x8080021C: b           L_80800254
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800254;
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800224:
    // 0x80800224: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(64, 0X4B8) << 16);
    // 0x80800228: lwc1        $f10, 0x4B8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(64, 0X4B8));
    // 0x8080022C: lwc1        $f8, 0x16C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800230: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80800234: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800238: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8080023C: jal         0x800F0E00
    // 0x80800240: nop

    func_800F0E00(rdram, ctx);
        goto after_4;
    // 0x80800240: nop

    after_4:
    // 0x80800244: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800248: jal         0x800F1574
    // 0x8080024C: addiu       $a0, $s0, 0x16C
    ctx->r4 = ADD32(ctx->r16, 0X16C);
    func_800F1574(rdram, ctx);
        goto after_5;
    // 0x8080024C: addiu       $a0, $s0, 0x16C
    ctx->r4 = ADD32(ctx->r16, 0X16C);
    after_5:
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800254:
    // 0x80800254: jal         0x8009B9B0
    // 0x80800258: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_6;
    // 0x80800258: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_6:
    // 0x8080025C: lui         $a1, 0x3E6B
    ctx->r5 = S32(0X3E6B << 16);
    // 0x80800260: ori         $a1, $a1, 0x851F
    ctx->r5 = ctx->r5 | 0X851F;
    // 0x80800264: jal         0x8008B348
    // 0x80800268: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x80800268: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_7:
    // 0x8080026C: beq         $v0, $zero, L_80800280
    if (ctx->r2 == 0) {
        // 0x80800270: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800280;
    }
    // 0x80800270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800274: addiu       $a1, $zero, 0x587
    ctx->r5 = ADD32(0, 0X587);
    // 0x80800278: jal         0x8009DE38
    // 0x8080027C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_8;
    // 0x8080027C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_8:
L_80800280:
    // 0x80800280: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80800284: jal         0x8008B348
    // 0x80800288: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    func_8008B348(rdram, ctx);
        goto after_9;
    // 0x80800288: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    after_9:
    // 0x8080028C: beq         $v0, $zero, L_808002A4
    if (ctx->r2 == 0) {
        // 0x80800290: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002A4;
    }
    // 0x80800290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800294: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    // 0x80800298: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8080029C: jal         0x8009DF94
    // 0x808002A0: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DF94(rdram, ctx);
        goto after_10;
    // 0x808002A0: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_10:
L_808002A4:
    // 0x808002A4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x808002A8: jal         0x8008B348
    // 0x808002AC: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8008B348(rdram, ctx);
        goto after_11;
    // 0x808002AC: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_11:
    // 0x808002B0: beq         $v0, $zero, L_808002CC
    if (ctx->r2 == 0) {
        // 0x808002B4: lui         $a2, 0x3F4C
        ctx->r6 = S32(0X3F4C << 16);
            goto L_808002CC;
    }
    // 0x808002B4: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x808002B8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C0: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    // 0x808002C4: jal         0x8009DF94
    // 0x808002C8: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DF94(rdram, ctx);
        goto after_12;
    // 0x808002C8: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_12:
L_808002CC:
    // 0x808002CC: jal         0x80084508
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babackpack_get_state(rdram, ctx);
        goto after_13;
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808002D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808002D8: bnel        $v0, $at, L_80800338
    if (ctx->r2 != ctx->r1) {
        // 0x808002DC: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_80800338;
    }
    goto skip_0;
    // 0x808002DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x808002E0: jal         0x8008B2B4
    // 0x808002E4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_8008B2B4(rdram, ctx);
        goto after_14;
    // 0x808002E4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_14:
    // 0x808002E8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(64, 0X4BC) << 16);
    // 0x808002EC: lwc1        $f16, 0x4BC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(64, 0X4BC));
    // 0x808002F0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(64, 0X4C0) << 16);
    // 0x808002F4: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x808002F8: nop

    // 0x808002FC: bc1fl       L_80800338
    if (!c1cs) {
        // 0x80800300: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_80800338;
    }
    goto skip_1;
    // 0x80800300: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_1:
    // 0x80800304: lwc1        $f18, 0x4C0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(64, 0X4C0));
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080030C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80800310: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80800314: nop

    // 0x80800318: bc1fl       L_80800338
    if (!c1cs) {
        // 0x8080031C: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_80800338;
    }
    goto skip_2;
    // 0x8080031C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_2:
    // 0x80800320: jal         0x80084518
    // 0x80800324: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    _babackpack_entrypoint_6(rdram, ctx);
        goto after_15;
    // 0x80800324: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x80800328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080032C: jal         0x80000074
    // 0x80800330: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_80800074_bsbanpackwhack(rdram, ctx);
        goto after_16;
    // 0x80800330: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_16:
    // 0x80800334: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_80800338:
    // 0x80800338: lwc1        $f4, 0x170($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X170);
    // 0x8080033C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800340: nop

    // 0x80800344: bc1tl       L_80800388
    if (c1cs) {
        // 0x80800348: lui         $a1, 0x3E28
        ctx->r5 = S32(0X3E28 << 16);
            goto L_80800388;
    }
    goto skip_3;
    // 0x80800348: lui         $a1, 0x3E28
    ctx->r5 = S32(0X3E28 << 16);
    skip_3:
    // 0x8080034C: swc1        $f0, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f0.u32l;
    // 0x80800350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800354: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800358: jal         0x8009E55C
    // 0x8080035C: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    func_8009E55C(rdram, ctx);
        goto after_17;
    // 0x8080035C: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    after_17:
    // 0x80800360: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80800364: addiu       $a2, $a2, 0x4510
    ctx->r6 = ADD32(ctx->r6, 0X4510);
    // 0x80800368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080036C: jal         0x8009E4E0
    // 0x80800370: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E4E0(rdram, ctx);
        goto after_18;
    // 0x80800370: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_18:
    // 0x80800374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800378: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8080037C: jal         0x8009E5A4
    // 0x80800380: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8009E5A4(rdram, ctx);
        goto after_19;
    // 0x80800380: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_19:
    // 0x80800384: lui         $a1, 0x3E28
    ctx->r5 = S32(0X3E28 << 16);
L_80800388:
    // 0x80800388: ori         $a1, $a1, 0xDB8C
    ctx->r5 = ctx->r5 | 0XDB8C;
    // 0x8080038C: jal         0x8008B348
    // 0x80800390: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_8008B348(rdram, ctx);
        goto after_20;
    // 0x80800390: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_20:
    // 0x80800394: beq         $v0, $zero, L_808003CC
    if (ctx->r2 == 0) {
        // 0x80800398: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003CC;
    }
    // 0x80800398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080039C: jal         0x80095760
    // 0x808003A0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80095760(rdram, ctx);
        goto after_21;
    // 0x808003A0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_21:
    // 0x808003A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003A8: jal         0x80084538
    // 0x808003AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _babackpack_set_state(rdram, ctx);
        goto after_22;
    // 0x808003AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_22:
    // 0x808003B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003B4: jal         0x800A0CD0
    // 0x808003B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CD0(rdram, ctx);
        goto after_23;
    // 0x808003B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_23:
    // 0x808003BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808003C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808003C4: nop

    // 0x808003C8: swc1        $f6, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f6.u32l;
L_808003CC:
    // 0x808003CC: lui         $a1, 0x3F53
    ctx->r5 = S32(0X3F53 << 16);
    // 0x808003D0: ori         $a1, $a1, 0x1F8A
    ctx->r5 = ctx->r5 | 0X1F8A;
    // 0x808003D4: jal         0x8008B348
    // 0x808003D8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_8008B348(rdram, ctx);
        goto after_24;
    // 0x808003D8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_24:
    // 0x808003DC: beq         $v0, $zero, L_80800414
    if (ctx->r2 == 0) {
        // 0x808003E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800414;
    }
    // 0x808003E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003E4: jal         0x80095774
    // 0x808003E8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80095774(rdram, ctx);
        goto after_25;
    // 0x808003E8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_25:
    // 0x808003EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808003F4: jal         0x8009E4E0
    // 0x808003F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8009E4E0(rdram, ctx);
        goto after_26;
    // 0x808003F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_26:
    // 0x808003FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800400: jal         0x80084538
    // 0x80800404: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babackpack_set_state(rdram, ctx);
        goto after_27;
    // 0x80800404: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_27:
    // 0x80800408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080040C: jal         0x800A0CD0
    // 0x80800410: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CD0(rdram, ctx);
        goto after_28;
    // 0x80800410: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_28:
L_80800414:
    // 0x80800414: lui         $a1, 0x3F31
    ctx->r5 = S32(0X3F31 << 16);
    // 0x80800418: ori         $a1, $a1, 0xEB85
    ctx->r5 = ctx->r5 | 0XEB85;
    // 0x8080041C: jal         0x8008B348
    // 0x80800420: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_8008B348(rdram, ctx);
        goto after_29;
    // 0x80800420: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_29:
    // 0x80800424: beq         $v0, $zero, L_80800434
    if (ctx->r2 == 0) {
        // 0x80800428: nop
    
            goto L_80800434;
    }
    // 0x80800428: nop

    // 0x8080042C: jal         0x8009BC90
    // 0x80800430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC90(rdram, ctx);
        goto after_30;
    // 0x80800430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
L_80800434:
    // 0x80800434: jal         0x8008B324
    // 0x80800438: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_8008B324(rdram, ctx);
        goto after_31;
    // 0x80800438: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_31:
    // 0x8080043C: beq         $v0, $zero, L_80800448
    if (ctx->r2 == 0) {
        // 0x80800440: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80800448;
    }
    // 0x80800440: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800444: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
L_80800448:
    // 0x80800448: jal         0x8008E35C
    // 0x8080044C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_32;
    // 0x8080044C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x80800450: beq         $v0, $zero, L_80800460
    if (ctx->r2 == 0) {
        // 0x80800454: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800460;
    }
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800458: addiu       $t7, $zero, 0x4C
    ctx->r15 = ADD32(0, 0X4C);
    // 0x8080045C: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
L_80800460:
    // 0x80800460: jal         0x80091A58
    // 0x80800464: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_33;
    // 0x80800464: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_33:
    // 0x80800468: beql        $v0, $zero, L_80800480
    if (ctx->r2 == 0) {
        // 0x8080046C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800480;
    }
    goto skip_4;
    // 0x8080046C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_4:
    // 0x80800470: jal         0x8009FE84
    // 0x80800474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE84(rdram, ctx);
        goto after_34;
    // 0x80800474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x80800478: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8080047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800480:
    // 0x80800480: jal         0x8009E5C8
    // 0x80800484: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_8009E5C8(rdram, ctx);
        goto after_35;
    // 0x80800484: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_35:
    // 0x80800488: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080048C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800490: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80800494: jr          $ra
    // 0x80800498: nop

    return;
    // 0x80800498: nop

;}
RECOMP_FUNC void bsbanpackwhack_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080049C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808004A0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(64, 0X50C) << 16);
    // 0x808004A4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808004A8: jr          $ra
    // 0x808004AC: lw          $v0, 0x50C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(64, 0X50C));
    return;
    // 0x808004AC: lw          $v0, 0x50C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(64, 0X50C));
;}
RECOMP_FUNC void func_80800000_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080000C: beq         $a2, $zero, L_8080002C
    if (ctx->r6 == 0) {
        // 0x80800010: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_8080002C;
    }
    // 0x80800010: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80800014: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80800018: jal         0x80091A58
    // 0x8080001C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x8080001C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80800020: beq         $v0, $zero, L_8080002C
    if (ctx->r2 == 0) {
        // 0x80800024: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_8080002C;
    }
    // 0x80800024: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80800028: addiu       $a3, $zero, 0x169
    ctx->r7 = ADD32(0, 0X169);
L_8080002C:
    // 0x8080002C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800030: jal         0x8008E148
    // 0x80800034: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_8008E148(rdram, ctx);
        goto after_1;
    // 0x80800034: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_1:
    // 0x80800038: beq         $v0, $zero, L_80800044
    if (ctx->r2 == 0) {
        // 0x8080003C: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_80800044;
    }
    // 0x8080003C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80800040: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80800044:
    // 0x80800044: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800048: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080004C: lbu         $t7, 0x15F($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X15F);
    // 0x80800050: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80800054: bnel        $t7, $zero, L_80800074
    if (ctx->r15 != 0) {
        // 0x80800058: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800074;
    }
    goto skip_0;
    // 0x80800058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8080005C: jal         0x80091A30
    // 0x80800060: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80091A30(rdram, ctx);
        goto after_2;
    // 0x80800060: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_2:
    // 0x80800064: beq         $v0, $zero, L_80800070
    if (ctx->r2 == 0) {
        // 0x80800068: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_80800070;
    }
    // 0x80800068: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8080006C: addiu       $a3, $zero, 0x164
    ctx->r7 = ADD32(0, 0X164);
L_80800070:
    // 0x80800070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800074:
    // 0x80800074: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800078: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x8080007C: jr          $ra
    // 0x80800080: nop

    return;
    // 0x80800080: nop

;}
RECOMP_FUNC void func_80800084_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800084: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800088: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080008C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800090: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800094: jal         0x80091A58
    // 0x80800098: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80800098: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x8080009C: beq         $v0, $zero, L_808000A8
    if (ctx->r2 == 0) {
        // 0x808000A0: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_808000A8;
    }
    // 0x808000A0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808000A4: addiu       $v1, $zero, 0x169
    ctx->r3 = ADD32(0, 0X169);
L_808000A8:
    // 0x808000A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808000AC: jal         0x8008E148
    // 0x808000B0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8008E148(rdram, ctx);
        goto after_1;
    // 0x808000B0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x808000B4: beq         $v0, $zero, L_808000C0
    if (ctx->r2 == 0) {
        // 0x808000B8: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_808000C0;
    }
    // 0x808000B8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808000BC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_808000C0:
    // 0x808000C0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x808000C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000C8: lbu         $t7, 0x15F($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X15F);
    // 0x808000CC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x808000D0: bnel        $t7, $zero, L_808000F0
    if (ctx->r15 != 0) {
        // 0x808000D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808000F0;
    }
    goto skip_0;
    // 0x808000D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808000D8: jal         0x80091A30
    // 0x808000DC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80091A30(rdram, ctx);
        goto after_2;
    // 0x808000DC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x808000E0: beq         $v0, $zero, L_808000EC
    if (ctx->r2 == 0) {
        // 0x808000E4: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_808000EC;
    }
    // 0x808000E4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808000E8: addiu       $v1, $zero, 0x164
    ctx->r3 = ADD32(0, 0X164);
L_808000EC:
    // 0x808000EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808000F0:
    // 0x808000F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x808000F8: jr          $ra
    // 0x808000FC: nop

    return;
    // 0x808000FC: nop

;}
RECOMP_FUNC void func_80800100_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800100: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800108: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8080010C: jal         0x8009E6EC
    // 0x80800110: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800110: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800114: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80800118: beq         $v0, $at, L_80800158
    if (ctx->r2 == ctx->r1) {
        // 0x8080011C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800158;
    }
    // 0x8080011C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800120: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x80800124: beq         $v0, $at, L_80800140
    if (ctx->r2 == ctx->r1) {
        // 0x80800128: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80800140;
    }
    // 0x80800128: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8080012C: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x80800130: beq         $v0, $at, L_80800148
    if (ctx->r2 == ctx->r1) {
        // 0x80800134: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_80800148;
    }
    // 0x80800134: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80800138: b           L_80800150
    // 0x8080013C: nop

        goto L_80800150;
    // 0x8080013C: nop

L_80800140:
    // 0x80800140: b           L_80800158
    // 0x80800144: sb          $t6, 0x15F($a0)
    MEM_B(0X15F, ctx->r4) = ctx->r14;
        goto L_80800158;
    // 0x80800144: sb          $t6, 0x15F($a0)
    MEM_B(0X15F, ctx->r4) = ctx->r14;
L_80800148:
    // 0x80800148: b           L_80800158
    // 0x8080014C: sb          $zero, 0x15F($a0)
    MEM_B(0X15F, ctx->r4) = 0;
        goto L_80800158;
    // 0x8080014C: sb          $zero, 0x15F($a0)
    MEM_B(0X15F, ctx->r4) = 0;
L_80800150:
    // 0x80800150: jalr        $t9
    // 0x80800154: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80800154: nop

    after_1:
L_80800158:
    // 0x80800158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080015C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800160: jr          $ra
    // 0x80800164: nop

    return;
    // 0x80800164: nop

;}
RECOMP_FUNC void func_80800168_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080016C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800170: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80800174: jal         0x80000100
    // 0x80800178: addiu       $a1, $a1, -0x646C
    ctx->r5 = ADD32(ctx->r5, -0X646C);
    func_80800100_bsbansack(rdram, ctx);
        goto after_0;
    // 0x80800178: addiu       $a1, $a1, -0x646C
    ctx->r5 = ADD32(ctx->r5, -0X646C);
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
RECOMP_FUNC void func_8080018C_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080018C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800190: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800194: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80800198: jal         0x80000100
    // 0x8080019C: addiu       $a1, $a1, 0x2FF8
    ctx->r5 = ADD32(ctx->r5, 0X2FF8);
    func_80800100_bsbansack(rdram, ctx);
        goto after_0;
    // 0x8080019C: addiu       $a1, $a1, 0x2FF8
    ctx->r5 = ADD32(ctx->r5, 0X2FF8);
    after_0:
    // 0x808001A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001A8: jr          $ra
    // 0x808001AC: nop

    return;
    // 0x808001AC: nop

;}
RECOMP_FUNC void func_808001B0_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001B8: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x808001BC: jal         0x80000100
    // 0x808001C0: addiu       $a1, $a1, -0x6558
    ctx->r5 = ADD32(ctx->r5, -0X6558);
    func_80800100_bsbansack(rdram, ctx);
        goto after_0;
    // 0x808001C0: addiu       $a1, $a1, -0x6558
    ctx->r5 = ADD32(ctx->r5, -0X6558);
    after_0:
    // 0x808001C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001CC: jr          $ra
    // 0x808001D0: nop

    return;
    // 0x808001D0: nop

;}
RECOMP_FUNC void func_808001D4_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001DC: jal         0x8009EF1C
    // 0x808001E0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x808001E0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001E4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x808001E8: jal         0x8009EF10
    // 0x808001EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x808001EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808001F0: bne         $v0, $zero, L_8080020C
    if (ctx->r2 != 0) {
        // 0x808001F4: lwc1        $f12, 0x1C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_8080020C;
    }
    // 0x808001F4: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x808001F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808001FC: jal         0x8009B9B0
    // 0x80800200: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800200: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800204: b           L_8080022C
    // 0x80800208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080022C;
    // 0x80800208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080020C:
    // 0x8080020C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80800210: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800214: jal         0x800F1214
    // 0x80800218: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x80800218: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    after_3:
    // 0x8080021C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800220: jal         0x8009B9B0
    // 0x80800224: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800224: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080022C:
    // 0x8080022C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800230: jr          $ra
    // 0x80800234: nop

    return;
    // 0x80800234: nop

;}
RECOMP_FUNC void func_80800238_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800238: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080023C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800240: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800244: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800248: jal         0x8009E74C
    // 0x8080024C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x8080024C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_0:
    // 0x80800250: beq         $v0, $zero, L_80800288
    if (ctx->r2 == 0) {
        // 0x80800254: nop
    
            goto L_80800288;
    }
    // 0x80800254: nop

    // 0x80800258: jal         0x80084508
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babackpack_get_state(rdram, ctx);
        goto after_1;
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800260: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800264: beq         $v0, $at, L_808002C0
    if (ctx->r2 == ctx->r1) {
        // 0x80800268: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002C0;
    }
    // 0x80800268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080026C: jal         0x800A0CD0
    // 0x80800270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CD0(rdram, ctx);
        goto after_2;
    // 0x80800270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800278: jal         0x80084538
    // 0x8080027C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    _babackpack_set_state(rdram, ctx);
        goto after_3;
    // 0x8080027C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x80800280: b           L_808002C4
    // 0x80800284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808002C4;
    // 0x80800284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800288:
    // 0x80800288: jal         0x80084508
    // 0x8080028C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babackpack_get_state(rdram, ctx);
        goto after_4;
    // 0x8080028C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800290: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800294: beq         $v0, $at, L_808002A4
    if (ctx->r2 == ctx->r1) {
        // 0x80800298: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002A4;
    }
    // 0x80800298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080029C: jal         0x80084538
    // 0x808002A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babackpack_set_state(rdram, ctx);
        goto after_5;
    // 0x808002A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_808002A4:
    // 0x808002A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002A8: jal         0x800A0CD0
    // 0x808002AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CD0(rdram, ctx);
        goto after_6;
    // 0x808002AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x808002B0: jal         0x8009EF60
    // 0x808002B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF60(rdram, ctx);
        goto after_7;
    // 0x808002B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808002B8: jal         0x800A1040
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1040(rdram, ctx);
        goto after_8;
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_808002C0:
    // 0x808002C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808002C4:
    // 0x808002C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808002CC: jr          $ra
    // 0x808002D0: nop

    return;
    // 0x808002D0: nop

;}
RECOMP_FUNC void func_808002D4_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808002D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808002E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808002E4: jal         0x8009E77C
    // 0x808002E8: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_8009E77C(rdram, ctx);
        goto after_0;
    // 0x808002E8: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_0:
    // 0x808002EC: bne         $v0, $zero, L_80800354
    if (ctx->r2 != 0) {
        // 0x808002F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800354;
    }
    // 0x808002F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002F4: jal         0x800A0CD0
    // 0x808002F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CD0(rdram, ctx);
        goto after_1;
    // 0x808002F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x808002FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800300: jal         0x80084538
    // 0x80800304: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    _babackpack_set_state(rdram, ctx);
        goto after_2;
    // 0x80800304: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x80800308: jal         0x8009EFA8
    // 0x8080030C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EFA8(rdram, ctx);
        goto after_3;
    // 0x8080030C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800310: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x80800314: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080031C: jal         0x8009F1C8
    // 0x80800320: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_4;
    // 0x80800320: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80800324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800328: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080032C: jal         0x8009F1C8
    // 0x80800330: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_5;
    // 0x80800330: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_5:
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800338: lui         $a1, 0xC120
    ctx->r5 = S32(0XC120 << 16);
    // 0x8080033C: jal         0x800A106C
    // 0x80800340: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    func_800A106C(rdram, ctx);
        goto after_6;
    // 0x80800340: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_6:
    // 0x80800344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800348: jal         0x8009B9B0
    // 0x8080034C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_7;
    // 0x8080034C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_7:
    // 0x80800350: sb          $zero, 0x15F($s0)
    MEM_B(0X15F, ctx->r16) = 0;
L_80800354:
    // 0x80800354: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800358: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080035C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800360: jr          $ra
    // 0x80800364: nop

    return;
    // 0x80800364: nop

;}
RECOMP_FUNC void func_80800368_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800368: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080036C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800370: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800374: jal         0x8008DF8C
    // 0x80800378: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_8008DF8C(rdram, ctx);
        goto after_0;
    // 0x80800378: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_0:
    // 0x8080037C: beq         $v0, $zero, L_8080039C
    if (ctx->r2 == 0) {
        // 0x80800380: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8080039C;
    }
    // 0x80800380: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800384: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800388: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8080038C: jal         0x8009D2F0
    // 0x80800390: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009D2F0(rdram, ctx);
        goto after_1;
    // 0x80800390: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_1:
    // 0x80800394: b           L_808003B4
    // 0x80800398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808003B4;
    // 0x80800398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080039C:
    // 0x8080039C: jal         0x8009BF5C
    // 0x808003A0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_2;
    // 0x808003A0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x808003A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808003A8: jal         0x8009C4CC
    // 0x808003AC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_3;
    // 0x808003AC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x808003B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808003B4:
    // 0x808003B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003B8: jr          $ra
    // 0x808003BC: nop

    return;
    // 0x808003BC: nop

;}
RECOMP_FUNC void func_808003C0_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808003CC: jal         0x8009BCB4
    // 0x808003D0: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_0;
    // 0x808003D0: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_0:
    // 0x808003D4: lui         $a1, 0x4305
    ctx->r5 = S32(0X4305 << 16);
    // 0x808003D8: ori         $a1, $a1, 0x547B
    ctx->r5 = ctx->r5 | 0X547B;
    // 0x808003DC: jal         0x8009BCC4
    // 0x808003E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BCC4(rdram, ctx);
        goto after_1;
    // 0x808003E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808003E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808003E8: jal         0x800961AC
    // 0x808003EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800961AC(rdram, ctx);
        goto after_2;
    // 0x808003EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x808003F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003F8: jr          $ra
    // 0x808003FC: nop

    return;
    // 0x808003FC: nop

;}
RECOMP_FUNC void func_80800400_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800404: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800408: jal         0x8009BC90
    // 0x8080040C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC90(rdram, ctx);
        goto after_0;
    // 0x8080040C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800410: jal         0x8009BC6C
    // 0x80800414: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BC6C(rdram, ctx);
        goto after_1;
    // 0x80800414: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800418: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080041C: jal         0x800961AC
    // 0x80800420: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_2;
    // 0x80800420: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80800424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080042C: jr          $ra
    // 0x80800430: nop

    return;
    // 0x80800430: nop

;}
RECOMP_FUNC void func_80800434_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800434: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080043C: jal         0x80000400
    // 0x80800440: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800400_bsbansack(rdram, ctx);
        goto after_0;
    // 0x80800440: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800444: jal         0x80000238
    // 0x80800448: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800238_bsbansack(rdram, ctx);
        goto after_1;
    // 0x80800448: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080044C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800450: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800454: jr          $ra
    // 0x80800458: nop

    return;
    // 0x80800458: nop

;}
RECOMP_FUNC void func_8080045C_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080045C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800460: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800464: jal         0x800002D4
    // 0x80800468: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_808002D4_bsbansack(rdram, ctx);
        goto after_0;
    // 0x80800468: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080046C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800470: addiu       $a1, $zero, 0x28B
    ctx->r5 = ADD32(0, 0X28B);
    // 0x80800474: jal         0x8008CB3C
    // 0x80800478: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80800478: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_1:
    // 0x8080047C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800480: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800484: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800488: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080048C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800490: jal         0x8009FFD8
    // 0x80800494: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800494: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80800498: jal         0x800003C0
    // 0x8080049C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_808003C0_bsbansack(rdram, ctx);
        goto after_3;
    // 0x8080049C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x808004A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808004A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808004A8: jr          $ra
    // 0x808004AC: nop

    return;
    // 0x808004AC: nop

;}
RECOMP_FUNC void func_808004B0_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808004B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808004BC: jal         0x8009EF10
    // 0x808004C0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8009EF10(rdram, ctx);
        goto after_0;
    // 0x808004C0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x808004C4: blez        $v0, L_808004D0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x808004C8: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_808004D0;
    }
    // 0x808004C8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x808004CC: addiu       $a1, $zero, 0x166
    ctx->r5 = ADD32(0, 0X166);
L_808004D0:
    // 0x808004D0: jal         0x80000084
    // 0x808004D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80800084_bsbansack(rdram, ctx);
        goto after_1;
    // 0x808004D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808004D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808004DC: jal         0x8009E5C8
    // 0x808004E0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x808004E0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x808004E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808004EC: jr          $ra
    // 0x808004F0: nop

    return;
    // 0x808004F0: nop

;}
RECOMP_FUNC void bsbansack_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004F4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808004F8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(65, 0X1E10) << 16);
    // 0x808004FC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800500: jr          $ra
    // 0x80800504: lw          $v0, 0x1E10($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1E10));
    return;
    // 0x80800504: lw          $v0, 0x1E10($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1E10));
;}
RECOMP_FUNC void func_80800508_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800508: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080050C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800510: lbu         $t6, 0x15E($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X15E);
    // 0x80800514: bne         $t6, $zero, L_80800528
    if (ctx->r14 != 0) {
        // 0x80800518: nop
    
            goto L_80800528;
    }
    // 0x80800518: nop

    // 0x8080051C: jal         0x800002D4
    // 0x80800520: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808002D4_bsbansack(rdram, ctx);
        goto after_0;
    // 0x80800520: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800524: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_80800528:
    // 0x80800528: jal         0x80000238
    // 0x8080052C: nop

    func_80800238_bsbansack(rdram, ctx);
        goto after_1;
    // 0x8080052C: nop

    after_1:
    // 0x80800530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800534: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800538: jr          $ra
    // 0x8080053C: nop

    return;
    // 0x8080053C: nop

;}
RECOMP_FUNC void func_80800540_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800540: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800544: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800548: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080054C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800550: sb          $zero, 0x15E($a0)
    MEM_B(0X15E, ctx->r4) = 0;
    // 0x80800554: addiu       $a1, $zero, 0x143
    ctx->r5 = ADD32(0, 0X143);
    // 0x80800558: jal         0x8008CCBC
    // 0x8080055C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_0;
    // 0x8080055C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
    // 0x80800560: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800564: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080056C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800570: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800574: jal         0x8009FFD8
    // 0x80800578: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800578: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x8080057C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800580: jal         0x8009B9B0
    // 0x80800584: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800584: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080058C: addiu       $a1, $zero, 0x583
    ctx->r5 = ADD32(0, 0X583);
    // 0x80800590: jal         0x8009DE38
    // 0x80800594: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_3;
    // 0x80800594: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
    // 0x80800598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080059C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808005A0: jal         0x80098140
    // 0x808005A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098140(rdram, ctx);
        goto after_4;
    // 0x808005A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x808005A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808005AC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808005B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808005B4: jr          $ra
    // 0x808005B8: nop

    return;
    // 0x808005B8: nop

;}
RECOMP_FUNC void func_808005BC_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808005C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808005C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808005C8: jal         0x8008CABC
    // 0x808005CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808005CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808005D0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x808005D4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x808005D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808005E0: jal         0x80098140
    // 0x808005E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098140(rdram, ctx);
        goto after_1;
    // 0x808005E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x808005E8: lui         $a1, 0x3E42
    ctx->r5 = S32(0X3E42 << 16);
    // 0x808005EC: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    // 0x808005F0: jal         0x8008B348
    // 0x808005F4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_2;
    // 0x808005F4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x808005F8: beq         $v0, $zero, L_8080060C
    if (ctx->r2 == 0) {
        // 0x808005FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080060C;
    }
    // 0x808005FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800600: addiu       $a1, $zero, 0x57C
    ctx->r5 = ADD32(0, 0X57C);
    // 0x80800604: jal         0x8009DE38
    // 0x80800608: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_3;
    // 0x80800608: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
L_8080060C:
    // 0x8080060C: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80800610: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800614: jal         0x8008B348
    // 0x80800618: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_4;
    // 0x80800618: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x8080061C: beq         $v0, $zero, L_80800634
    if (ctx->r2 == 0) {
        // 0x80800620: lui         $a2, 0x3F66
        ctx->r6 = S32(0X3F66 << 16);
            goto L_80800634;
    }
    // 0x80800620: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x80800624: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080062C: jal         0x8009DBF0
    // 0x80800630: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    func_8009DBF0(rdram, ctx);
        goto after_5;
    // 0x80800630: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    after_5:
L_80800634:
    // 0x80800634: lui         $a1, 0x3EF5
    ctx->r5 = S32(0X3EF5 << 16);
    // 0x80800638: ori         $a1, $a1, 0xC28F
    ctx->r5 = ctx->r5 | 0XC28F;
    // 0x8080063C: jal         0x8008B348
    // 0x80800640: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_6;
    // 0x80800640: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x80800644: beql        $v0, $zero, L_80800658
    if (ctx->r2 == 0) {
        // 0x80800648: lui         $a1, 0x3F05
        ctx->r5 = S32(0X3F05 << 16);
            goto L_80800658;
    }
    goto skip_0;
    // 0x80800648: lui         $a1, 0x3F05
    ctx->r5 = S32(0X3F05 << 16);
    skip_0:
    // 0x8080064C: jal         0x8009FE58
    // 0x80800650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE58(rdram, ctx);
        goto after_7;
    // 0x80800650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800654: lui         $a1, 0x3F05
    ctx->r5 = S32(0X3F05 << 16);
L_80800658:
    // 0x80800658: ori         $a1, $a1, 0x1EB8
    ctx->r5 = ctx->r5 | 0X1EB8;
    // 0x8080065C: jal         0x8008B348
    // 0x80800660: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_8;
    // 0x80800660: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x80800664: beq         $v0, $zero, L_80800678
    if (ctx->r2 == 0) {
        // 0x80800668: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800678;
    }
    // 0x80800668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080066C: addiu       $a1, $zero, 0x584
    ctx->r5 = ADD32(0, 0X584);
    // 0x80800670: jal         0x8009DE38
    // 0x80800674: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_9;
    // 0x80800674: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_9:
L_80800678:
    // 0x80800678: lui         $a1, 0x3DFB
    ctx->r5 = S32(0X3DFB << 16);
    // 0x8080067C: ori         $a1, $a1, 0xE76D
    ctx->r5 = ctx->r5 | 0XE76D;
    // 0x80800680: jal         0x8008B348
    // 0x80800684: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_10;
    // 0x80800684: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_10:
    // 0x80800688: beq         $v0, $zero, L_808006A4
    if (ctx->r2 == 0) {
        // 0x8080068C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006A4;
    }
    // 0x8080068C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800690: jal         0x800A0CD0
    // 0x80800694: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CD0(rdram, ctx);
        goto after_11;
    // 0x80800694: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x80800698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080069C: jal         0x80084538
    // 0x808006A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _babackpack_set_state(rdram, ctx);
        goto after_12;
    // 0x808006A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
L_808006A4:
    // 0x808006A4: lui         $a1, 0x3F03
    ctx->r5 = S32(0X3F03 << 16);
    // 0x808006A8: ori         $a1, $a1, 0xB646
    ctx->r5 = ctx->r5 | 0XB646;
    // 0x808006AC: jal         0x8008B348
    // 0x808006B0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_13;
    // 0x808006B0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_13:
    // 0x808006B4: beq         $v0, $zero, L_808006C8
    if (ctx->r2 == 0) {
        // 0x808006B8: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_808006C8;
    }
    // 0x808006B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808006BC: sb          $t6, 0x15E($s0)
    MEM_B(0X15E, ctx->r16) = ctx->r14;
    // 0x808006C0: jal         0x800002D4
    // 0x808006C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808002D4_bsbansack(rdram, ctx);
        goto after_14;
    // 0x808006C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
L_808006C8:
    // 0x808006C8: jal         0x8008CAEC
    // 0x808006CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_15;
    // 0x808006CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808006D0: beq         $v0, $zero, L_808006E0
    if (ctx->r2 == 0) {
        // 0x808006D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006E0;
    }
    // 0x808006D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006D8: addiu       $t7, $zero, 0x165
    ctx->r15 = ADD32(0, 0X165);
    // 0x808006DC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
L_808006E0:
    // 0x808006E0: jal         0x8009E5C8
    // 0x808006E4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_16;
    // 0x808006E4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_16:
    // 0x808006E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808006EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808006F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808006F4: jr          $ra
    // 0x808006F8: nop

    return;
    // 0x808006F8: nop

;}
RECOMP_FUNC void bsbansack_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006FC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800700: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(65, 0X1E20) << 16);
    // 0x80800704: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800708: jr          $ra
    // 0x8080070C: lw          $v0, 0x1E20($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1E20));
    return;
    // 0x8080070C: lw          $v0, 0x1E20($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1E20));
;}
RECOMP_FUNC void func_80800710_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800710: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800718: jal         0x8009E6EC
    // 0x8080071C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x8080071C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800720: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80800724: bne         $v0, $at, L_80800764
    if (ctx->r2 != ctx->r1) {
        // 0x80800728: nop
    
            goto L_80800764;
    }
    // 0x80800728: nop

    // 0x8080072C: jal         0x8008CABC
    // 0x80800730: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008CABC(rdram, ctx);
        goto after_1;
    // 0x80800730: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800734: jal         0x8008B2B4
    // 0x80800738: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B2B4(rdram, ctx);
        goto after_2;
    // 0x80800738: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x8080073C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(65, 0X1DB0) << 16);
    // 0x80800740: lwc1        $f4, 0x1DB0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X1DB0));
    // 0x80800744: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800748: nop

    // 0x8080074C: bc1fl       L_80800770
    if (!c1cs) {
        // 0x80800750: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800770;
    }
    goto skip_0;
    // 0x80800750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800754: jal         0x80099B94
    // 0x80800758: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80099B94(rdram, ctx);
        goto after_3;
    // 0x80800758: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x8080075C: b           L_80800770
    // 0x80800760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800770;
    // 0x80800760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800764:
    // 0x80800764: jal         0x80000168
    // 0x80800768: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800168_bsbansack(rdram, ctx);
        goto after_4;
    // 0x80800768: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
    // 0x8080076C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800770:
    // 0x80800770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800774: jr          $ra
    // 0x80800778: nop

    return;
    // 0x80800778: nop

;}
RECOMP_FUNC void func_8080077C_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080077C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800780: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800784: jal         0x8009BC6C
    // 0x80800788: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x80800788: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080078C: jal         0x80000238
    // 0x80800790: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800238_bsbansack(rdram, ctx);
        goto after_1;
    // 0x80800790: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080079C: jr          $ra
    // 0x808007A0: nop

    return;
    // 0x808007A0: nop

;}
RECOMP_FUNC void func_808007A4_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808007A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808007AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808007B0: jal         0x800002D4
    // 0x808007B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808002D4_bsbansack(rdram, ctx);
        goto after_0;
    // 0x808007B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808007B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007BC: addiu       $a1, $zero, 0x28A
    ctx->r5 = ADD32(0, 0X28A);
    // 0x808007C0: jal         0x8008CCBC
    // 0x808007C4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x808007C4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x808007C8: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x808007CC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808007D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808007D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808007DC: jal         0x8009FFD8
    // 0x808007E0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x808007E0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x808007E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007E8: jal         0x8009BCB4
    // 0x808007EC: lui         $a1, 0xC448
    ctx->r5 = S32(0XC448 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_3;
    // 0x808007EC: lui         $a1, 0xC448
    ctx->r5 = S32(0XC448 << 16);
    after_3:
    // 0x808007F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007F4: jal         0x8009BA58
    // 0x808007F8: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_8009BA58(rdram, ctx);
        goto after_4;
    // 0x808007F8: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_4:
    // 0x808007FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800800: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800804: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800808: jr          $ra
    // 0x8080080C: nop

    return;
    // 0x8080080C: nop

;}
RECOMP_FUNC void func_80800810_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800810: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800814: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800818: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080081C: jal         0x8008CABC
    // 0x80800820: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800820: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800824: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80800828: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8080082C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x80800830: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800834: jal         0x8008B348
    // 0x80800838: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B348(rdram, ctx);
        goto after_1;
    // 0x80800838: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8080083C: beq         $v0, $zero, L_80800854
    if (ctx->r2 == 0) {
        // 0x80800840: lui         $a2, 0x3F8C
        ctx->r6 = S32(0X3F8C << 16);
            goto L_80800854;
    }
    // 0x80800840: lui         $a2, 0x3F8C
    ctx->r6 = S32(0X3F8C << 16);
    // 0x80800844: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800848: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080084C: jal         0x8009DE38
    // 0x80800850: addiu       $a1, $zero, 0x583
    ctx->r5 = ADD32(0, 0X583);
    func_8009DE38(rdram, ctx);
        goto after_2;
    // 0x80800850: addiu       $a1, $zero, 0x583
    ctx->r5 = ADD32(0, 0X583);
    after_2:
L_80800854:
    // 0x80800854: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80800858: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8080085C: jal         0x8008B348
    // 0x80800860: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008B348(rdram, ctx);
        goto after_3;
    // 0x80800860: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x80800864: beq         $v0, $zero, L_8080087C
    if (ctx->r2 == 0) {
        // 0x80800868: lui         $a2, 0x3F66
        ctx->r6 = S32(0X3F66 << 16);
            goto L_8080087C;
    }
    // 0x80800868: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x8080086C: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800874: jal         0x8009DBF0
    // 0x80800878: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    func_8009DBF0(rdram, ctx);
        goto after_4;
    // 0x80800878: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    after_4:
L_8080087C:
    // 0x8080087C: lui         $a1, 0x3F3A
    ctx->r5 = S32(0X3F3A << 16);
    // 0x80800880: ori         $a1, $a1, 0xE148
    ctx->r5 = ctx->r5 | 0XE148;
    // 0x80800884: jal         0x8008B348
    // 0x80800888: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008B348(rdram, ctx);
        goto after_5;
    // 0x80800888: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x8080088C: beql        $v0, $zero, L_808008A0
    if (ctx->r2 == 0) {
        // 0x80800890: lui         $a1, 0x3F45
        ctx->r5 = S32(0X3F45 << 16);
            goto L_808008A0;
    }
    goto skip_0;
    // 0x80800890: lui         $a1, 0x3F45
    ctx->r5 = S32(0X3F45 << 16);
    skip_0:
    // 0x80800894: jal         0x8009FE58
    // 0x80800898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE58(rdram, ctx);
        goto after_6;
    // 0x80800898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080089C: lui         $a1, 0x3F45
    ctx->r5 = S32(0X3F45 << 16);
L_808008A0:
    // 0x808008A0: ori         $a1, $a1, 0x1EB8
    ctx->r5 = ctx->r5 | 0X1EB8;
    // 0x808008A4: jal         0x8008B348
    // 0x808008A8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x808008A8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_7:
    // 0x808008AC: beq         $v0, $zero, L_808008C4
    if (ctx->r2 == 0) {
        // 0x808008B0: lui         $a2, 0x3F8C
        ctx->r6 = S32(0X3F8C << 16);
            goto L_808008C4;
    }
    // 0x808008B0: lui         $a2, 0x3F8C
    ctx->r6 = S32(0X3F8C << 16);
    // 0x808008B4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808008B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008BC: jal         0x8009DE38
    // 0x808008C0: addiu       $a1, $zero, 0x584
    ctx->r5 = ADD32(0, 0X584);
    func_8009DE38(rdram, ctx);
        goto after_8;
    // 0x808008C0: addiu       $a1, $zero, 0x584
    ctx->r5 = ADD32(0, 0X584);
    after_8:
L_808008C4:
    // 0x808008C4: jal         0x8008B2B4
    // 0x808008C8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008B2B4(rdram, ctx);
        goto after_9;
    // 0x808008C8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_9:
    // 0x808008CC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(65, 0X1DB4) << 16);
    // 0x808008D0: lwc1        $f4, 0x1DB4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X1DB4));
    // 0x808008D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008D8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x808008DC: nop

    // 0x808008E0: bc1f        L_808008F8
    if (!c1cs) {
        // 0x808008E4: nop
    
            goto L_808008F8;
    }
    // 0x808008E4: nop

    // 0x808008E8: jal         0x800001D4
    // 0x808008EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808001D4_bsbansack(rdram, ctx);
        goto after_10;
    // 0x808008EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808008F0: b           L_80800904
    // 0x808008F4: lui         $a1, 0x3F3B
    ctx->r5 = S32(0X3F3B << 16);
        goto L_80800904;
    // 0x808008F4: lui         $a1, 0x3F3B
    ctx->r5 = S32(0X3F3B << 16);
L_808008F8:
    // 0x808008F8: jal         0x8009B9B0
    // 0x808008FC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_11;
    // 0x808008FC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_11:
    // 0x80800900: lui         $a1, 0x3F3B
    ctx->r5 = S32(0X3F3B << 16);
L_80800904:
    // 0x80800904: ori         $a1, $a1, 0xF28
    ctx->r5 = ctx->r5 | 0XF28;
    // 0x80800908: jal         0x8008B348
    // 0x8080090C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008B348(rdram, ctx);
        goto after_12;
    // 0x8080090C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_12:
    // 0x80800910: beq         $v0, $zero, L_8080092C
    if (ctx->r2 == 0) {
        // 0x80800914: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080092C;
    }
    // 0x80800914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800918: jal         0x80084538
    // 0x8080091C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babackpack_set_state(rdram, ctx);
        goto after_13;
    // 0x8080091C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x80800920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800924: jal         0x800A0CD0
    // 0x80800928: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CD0(rdram, ctx);
        goto after_14;
    // 0x80800928: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
L_8080092C:
    // 0x8080092C: jal         0x8008CAEC
    // 0x80800930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_15;
    // 0x80800930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800934: beq         $v0, $zero, L_80800940
    if (ctx->r2 == 0) {
        // 0x80800938: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80800940;
    }
    // 0x80800938: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8080093C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
L_80800940:
    // 0x80800940: jal         0x8008B2B4
    // 0x80800944: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008B2B4(rdram, ctx);
        goto after_16;
    // 0x80800944: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_16:
    // 0x80800948: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(65, 0X1DB8) << 16);
    // 0x8080094C: lwc1        $f6, 0x1DB8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X1DB8));
    // 0x80800950: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80800954: nop

    // 0x80800958: bc1f        L_80800974
    if (!c1cs) {
        // 0x8080095C: nop
    
            goto L_80800974;
    }
    // 0x8080095C: nop

    // 0x80800960: jal         0x8009EF10
    // 0x80800964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_17;
    // 0x80800964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800968: blez        $v0, L_80800974
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8080096C: addiu       $t7, $zero, 0x4
        ctx->r15 = ADD32(0, 0X4);
            goto L_80800974;
    }
    // 0x8080096C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80800970: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
L_80800974:
    // 0x80800974: jal         0x8008B2B4
    // 0x80800978: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008B2B4(rdram, ctx);
        goto after_18;
    // 0x80800978: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_18:
    // 0x8080097C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(65, 0X1DBC) << 16);
    // 0x80800980: lwc1        $f8, 0x1DBC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X1DBC));
    // 0x80800984: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80800988: nop

    // 0x8080098C: bc1fl       L_808009E4
    if (!c1cs) {
        // 0x80800990: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009E4;
    }
    goto skip_1;
    // 0x80800990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800994: jal         0x8008E35C
    // 0x80800998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_19;
    // 0x80800998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x8080099C: beql        $v0, $zero, L_808009E4
    if (ctx->r2 == 0) {
        // 0x808009A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009E4;
    }
    goto skip_2;
    // 0x808009A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x808009A4: jal         0x800964DC
    // 0x808009A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800964DC(rdram, ctx);
        goto after_20;
    // 0x808009A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x808009AC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x808009B0: jal         0x80096364
    // 0x808009B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096364(rdram, ctx);
        goto after_21;
    // 0x808009B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x808009B8: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x808009BC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x808009C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808009C4: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x808009C8: addiu       $t8, $zero, 0x4C
    ctx->r24 = ADD32(0, 0X4C);
    // 0x808009CC: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x808009D0: nop

    // 0x808009D4: bc1fl       L_808009E4
    if (!c1cs) {
        // 0x808009D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009E4;
    }
    goto skip_3;
    // 0x808009D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x808009DC: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x808009E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808009E4:
    // 0x808009E4: jal         0x8009E5C8
    // 0x808009E8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009E5C8(rdram, ctx);
        goto after_22;
    // 0x808009E8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_22:
    // 0x808009EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808009F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808009F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808009F8: jr          $ra
    // 0x808009FC: nop

    return;
    // 0x808009FC: nop

;}
RECOMP_FUNC void bsbansack_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A00: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800A04: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(65, 0X1E30) << 16);
    // 0x80800A08: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800A0C: jr          $ra
    // 0x80800A10: lw          $v0, 0x1E30($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1E30));
    return;
    // 0x80800A10: lw          $v0, 0x1E30($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1E30));
;}
RECOMP_FUNC void func_80800A14_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800A18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A1C: lbu         $t6, 0x15D($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X15D);
    // 0x80800A20: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80800A24: bnel        $t6, $zero, L_80800A6C
    if (ctx->r14 != 0) {
        // 0x80800A28: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800A6C;
    }
    goto skip_0;
    // 0x80800A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800A2C: sb          $t7, 0x15D($a0)
    MEM_B(0X15D, ctx->r4) = ctx->r15;
    // 0x80800A30: jal         0x8009BB50
    // 0x80800A34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BB50(rdram, ctx);
        goto after_0;
    // 0x80800A34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800A38: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80800A3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800A40: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80800A44: nop

    // 0x80800A48: bc1f        L_80800A60
    if (!c1cs) {
        // 0x80800A4C: nop
    
            goto L_80800A60;
    }
    // 0x80800A4C: nop

    // 0x80800A50: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80800A54: jal         0x8009BA58
    // 0x80800A58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BA58(rdram, ctx);
        goto after_1;
    // 0x80800A58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80800A5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_80800A60:
    // 0x80800A60: jal         0x800003C0
    // 0x80800A64: nop

    func_808003C0_bsbansack(rdram, ctx);
        goto after_2;
    // 0x80800A64: nop

    after_2:
    // 0x80800A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800A6C:
    // 0x80800A6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A70: jr          $ra
    // 0x80800A74: nop

    return;
    // 0x80800A74: nop

;}
RECOMP_FUNC void func_80800A78_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800A7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A80: lbu         $t6, 0x15D($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X15D);
    // 0x80800A84: beql        $t6, $zero, L_80800A98
    if (ctx->r14 == 0) {
        // 0x80800A88: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800A98;
    }
    goto skip_0;
    // 0x80800A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800A8C: jal         0x80000400
    // 0x80800A90: sb          $zero, 0x15D($a0)
    MEM_B(0X15D, ctx->r4) = 0;
    func_80800400_bsbansack(rdram, ctx);
        goto after_0;
    // 0x80800A90: sb          $zero, 0x15D($a0)
    MEM_B(0X15D, ctx->r4) = 0;
    after_0:
    // 0x80800A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800A98:
    // 0x80800A98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A9C: jr          $ra
    // 0x80800AA0: nop

    return;
    // 0x80800AA0: nop

;}
RECOMP_FUNC void func_80800AA4_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800AA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800AAC: jal         0x8008E35C
    // 0x80800AB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008E35C(rdram, ctx);
        goto after_0;
    // 0x80800AB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800AB4: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80800AB8: beq         $t6, $zero, L_80800AE4
    if (ctx->r14 == 0) {
        // 0x80800ABC: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80800AE4;
    }
    // 0x80800ABC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80800AC0: jal         0x8009BB50
    // 0x80800AC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BB50(rdram, ctx);
        goto after_1;
    // 0x80800AC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800AC8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800ACC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800AD0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80800AD4: nop

    // 0x80800AD8: bc1fl       L_80800AE8
    if (!c1cs) {
        // 0x80800ADC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800AE8;
    }
    goto skip_0;
    // 0x80800ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800AE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800AE4:
    // 0x80800AE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800AE8:
    // 0x80800AE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800AEC: jr          $ra
    // 0x80800AF0: nop

    return;
    // 0x80800AF0: nop

;}
RECOMP_FUNC void func_80800AF4_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AF4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800AF8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800AFC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800B00: sltiu       $at, $a1, 0x5
    ctx->r1 = ctx->r5 < 0X5 ? 1 : 0;
    // 0x80800B04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800B08: beq         $at, $zero, L_80800D38
    if (ctx->r1 == 0) {
        // 0x80800B0C: sb          $a1, 0x15C($a0)
        MEM_B(0X15C, ctx->r4) = ctx->r5;
            goto L_80800D38;
    }
    // 0x80800B0C: sb          $a1, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = ctx->r5;
    // 0x80800B10: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80800B14: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(65, 0X1DC0) << 16);
    // 0x80800B18: addu        $at, $at, $t6
    gpr jr_addend_80800B20 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800B1C: lw          $t6, 0x1DC0($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(65, 0X1DC0));
    // 0x80800B20: jr          $t6
    // 0x80800B24: nop

    switch (jr_addend_80800B20 >> 2) {
        case 0: goto L_80800D10; break;
        case 1: goto L_80800B28; break;
        case 2: goto L_80800C6C; break;
        case 3: goto L_80800C88; break;
        case 4: goto L_80800CC0; break;
        default: switch_error(__func__, 0x80800B20, 0x80801DC0);
    }
    // 0x80800B24: nop

L_80800B28:
    // 0x80800B28: jal         0x8008CABC
    // 0x80800B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80800B30: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80800B34: jal         0x80000A78
    // 0x80800B38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800A78_bsbansack(rdram, ctx);
        goto after_1;
    // 0x80800B38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800B3C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(65, 0X1DD4) << 16);
    // 0x80800B40: lwc1        $f12, 0x1DD4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X1DD4));
    // 0x80800B44: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(65, 0X1DD8) << 16);
    // 0x80800B48: jal         0x800DC178
    // 0x80800B4C: lwc1        $f14, 0x1DD8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X1DD8));
    func_800DC178(rdram, ctx);
        goto after_2;
    // 0x80800B4C: lwc1        $f14, 0x1DD8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X1DD8));
    after_2:
    // 0x80800B50: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800B54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B58: addiu       $a1, $zero, 0x3F0
    ctx->r5 = ADD32(0, 0X3F0);
    // 0x80800B5C: jal         0x8009DB04
    // 0x80800B60: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    func_8009DB04(rdram, ctx);
        goto after_3;
    // 0x80800B60: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    after_3:
    // 0x80800B64: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80800B68: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800B6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800B74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800B78: jal         0x8009FFD8
    // 0x80800B7C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_4;
    // 0x80800B7C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x80800B80: lui         $a1, 0xC4A8
    ctx->r5 = S32(0XC4A8 << 16);
    // 0x80800B84: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x80800B88: jal         0x8009BCB4
    // 0x80800B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCB4(rdram, ctx);
        goto after_5;
    // 0x80800B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800B90: jal         0x8009EF04
    // 0x80800B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_6;
    // 0x80800B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800B98: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800B9C: nop

    // 0x80800BA0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800BA4: nop

    // 0x80800BA8: bc1t        L_80800BC4
    if (c1cs) {
        // 0x80800BAC: nop
    
            goto L_80800BC4;
    }
    // 0x80800BAC: nop

    // 0x80800BB0: jal         0x8009EEB8
    // 0x80800BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_7;
    // 0x80800BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800BB8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800BBC: jal         0x8009C914
    // 0x80800BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_8;
    // 0x80800BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_80800BC4:
    // 0x80800BC4: jal         0x8009BB5C
    // 0x80800BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_9;
    // 0x80800BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800BCC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800BD0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80800BD4: jal         0x8009B9B0
    // 0x80800BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_10;
    // 0x80800BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800BDC: jal         0x8009C990
    // 0x80800BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_11;
    // 0x80800BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800BE4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800BE8: jal         0x8009B9C0
    // 0x80800BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_12;
    // 0x80800BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800BF0: jal         0x8009C990
    // 0x80800BF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_13;
    // 0x80800BF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800BF8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C00: jal         0x8009BA68
    // 0x80800C04: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_8009BA68(rdram, ctx);
        goto after_14;
    // 0x80800C04: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_14:
    // 0x80800C08: jal         0x8008AF24
    // 0x80800C0C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008AF24(rdram, ctx);
        goto after_15;
    // 0x80800C0C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_15:
    // 0x80800C10: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80800C14: jal         0x8008AED4
    // 0x80800C18: addiu       $a1, $zero, 0x144
    ctx->r5 = ADD32(0, 0X144);
    func_8008AED4(rdram, ctx);
        goto after_16;
    // 0x80800C18: addiu       $a1, $zero, 0x144
    ctx->r5 = ADD32(0, 0X144);
    after_16:
    // 0x80800C1C: lui         $a2, 0x3EB3
    ctx->r6 = S32(0X3EB3 << 16);
    // 0x80800C20: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800C24: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80800C28: jal         0x8008B1D4
    // 0x80800C2C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_17;
    // 0x80800C2C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_17:
    // 0x80800C30: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x80800C34: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80800C38: jal         0x8008B1BC
    // 0x80800C3C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008B1BC(rdram, ctx);
        goto after_18;
    // 0x80800C3C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_18:
    // 0x80800C40: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80800C44: jal         0x8008B134
    // 0x80800C48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_19;
    // 0x80800C48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x80800C4C: jal         0x8008B064
    // 0x80800C50: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008B064(rdram, ctx);
        goto after_20;
    // 0x80800C50: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_20:
    // 0x80800C54: lui         $a1, 0x4431
    ctx->r5 = S32(0X4431 << 16);
    // 0x80800C58: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80800C5C: jal         0x8009BA58
    // 0x80800C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_21;
    // 0x80800C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800C64: b           L_80800D3C
    // 0x80800C68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800D3C;
    // 0x80800C68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800C6C:
    // 0x80800C6C: lui         $a1, 0x3F26
    ctx->r5 = S32(0X3F26 << 16);
    // 0x80800C70: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80800C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C78: jal         0x8008CF1C
    // 0x80800C7C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_22;
    // 0x80800C7C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_22:
    // 0x80800C80: b           L_80800D3C
    // 0x80800C84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800D3C;
    // 0x80800C84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800C88:
    // 0x80800C88: jal         0x8008E35C
    // 0x80800C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_23;
    // 0x80800C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80800C90: beql        $v0, $zero, L_80800CA4
    if (ctx->r2 == 0) {
        // 0x80800C94: lui         $a1, 0x3F7A
        ctx->r5 = S32(0X3F7A << 16);
            goto L_80800CA4;
    }
    goto skip_0;
    // 0x80800C94: lui         $a1, 0x3F7A
    ctx->r5 = S32(0X3F7A << 16);
    skip_0:
    // 0x80800C98: jal         0x80000A14
    // 0x80800C9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800A14_bsbansack(rdram, ctx);
        goto after_24;
    // 0x80800C9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x80800CA0: lui         $a1, 0x3F7A
    ctx->r5 = S32(0X3F7A << 16);
L_80800CA4:
    // 0x80800CA4: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80800CA8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800CAC: ori         $a1, $a1, 0xE148
    ctx->r5 = ctx->r5 | 0XE148;
    // 0x80800CB0: jal         0x8008CF1C
    // 0x80800CB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CF1C(rdram, ctx);
        goto after_25;
    // 0x80800CB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x80800CB8: b           L_80800D3C
    // 0x80800CBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800D3C;
    // 0x80800CBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800CC0:
    // 0x80800CC0: jal         0x8008E35C
    // 0x80800CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_26;
    // 0x80800CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x80800CC8: beql        $v0, $zero, L_80800CDC
    if (ctx->r2 == 0) {
        // 0x80800CCC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800CDC;
    }
    goto skip_1;
    // 0x80800CCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800CD0: jal         0x80000A14
    // 0x80800CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800A14_bsbansack(rdram, ctx);
        goto after_27;
    // 0x80800CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x80800CD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800CDC:
    // 0x80800CDC: jal         0x8009D2D8
    // 0x80800CE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009D2D8(rdram, ctx);
        goto after_28;
    // 0x80800CE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_28:
    // 0x80800CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CE8: jal         0x800A2FCC
    // 0x80800CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A2FCC(rdram, ctx);
        goto after_29;
    // 0x80800CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_29:
    // 0x80800CF0: lui         $a1, 0x3F7A
    ctx->r5 = S32(0X3F7A << 16);
    // 0x80800CF4: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80800CF8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800CFC: ori         $a1, $a1, 0xE148
    ctx->r5 = ctx->r5 | 0XE148;
    // 0x80800D00: jal         0x8008CF1C
    // 0x80800D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CF1C(rdram, ctx);
        goto after_30;
    // 0x80800D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x80800D08: b           L_80800D3C
    // 0x80800D0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800D3C;
    // 0x80800D0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800D10:
    // 0x80800D10: jal         0x80000A78
    // 0x80800D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800A78_bsbansack(rdram, ctx);
        goto after_31;
    // 0x80800D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x80800D18: jal         0x8009BC6C
    // 0x80800D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_32;
    // 0x80800D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x80800D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D24: jal         0x8009BF5C
    // 0x80800D28: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_33;
    // 0x80800D28: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_33:
    // 0x80800D2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D30: jal         0x8009C4CC
    // 0x80800D34: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_34;
    // 0x80800D34: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_34:
L_80800D38:
    // 0x80800D38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800D3C:
    // 0x80800D3C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800D40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800D44: jr          $ra
    // 0x80800D48: nop

    return;
    // 0x80800D48: nop

;}
RECOMP_FUNC void func_80800D4C_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800D58: jal         0x80000AF4
    // 0x80800D5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800AF4_bsbansack(rdram, ctx);
        goto after_0;
    // 0x80800D5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800D60: jal         0x80000238
    // 0x80800D64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800238_bsbansack(rdram, ctx);
        goto after_1;
    // 0x80800D64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D70: jr          $ra
    // 0x80800D74: nop

    return;
    // 0x80800D74: nop

;}
RECOMP_FUNC void func_80800D78_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D80: jal         0x800002D4
    // 0x80800D84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808002D4_bsbansack(rdram, ctx);
        goto after_0;
    // 0x80800D84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D88: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800D8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800D90: sb          $zero, 0x15D($a0)
    MEM_B(0X15D, ctx->r4) = 0;
    // 0x80800D94: jal         0x80000AF4
    // 0x80800D98: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
    func_80800AF4_bsbansack(rdram, ctx);
        goto after_1;
    // 0x80800D98: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
    after_1:
    // 0x80800D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800DA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800DA4: jr          $ra
    // 0x80800DA8: nop

    return;
    // 0x80800DA8: nop

;}
RECOMP_FUNC void func_80800DAC_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800DB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800DB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800DB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800DBC: jal         0x8008CABC
    // 0x80800DC0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800DC0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800DC4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800DC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DCC: jal         0x80091A30
    // 0x80800DD0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_1;
    // 0x80800DD0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x80800DD4: beq         $v0, $zero, L_80800E04
    if (ctx->r2 == 0) {
        // 0x80800DD8: nop
    
            goto L_80800E04;
    }
    // 0x80800DD8: nop

    // 0x80800DDC: jal         0x8009BB50
    // 0x80800DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_2;
    // 0x80800DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800DE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800DE8: nop

    // 0x80800DEC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800DF0: nop

    // 0x80800DF4: bc1f        L_80800E04
    if (!c1cs) {
        // 0x80800DF8: nop
    
            goto L_80800E04;
    }
    // 0x80800DF8: nop

    // 0x80800DFC: jal         0x8009BC6C
    // 0x80800E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_3;
    // 0x80800E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80800E04:
    // 0x80800E04: jal         0x800001D4
    // 0x80800E08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808001D4_bsbansack(rdram, ctx);
        goto after_4;
    // 0x80800E08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800E0C: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
    // 0x80800E10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800E14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E18: beq         $v0, $at, L_80800E48
    if (ctx->r2 == ctx->r1) {
        // 0x80800E1C: lui         $a1, 0x3DCC
        ctx->r5 = S32(0X3DCC << 16);
            goto L_80800E48;
    }
    // 0x80800E1C: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80800E20: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800E24: beq         $v0, $at, L_80800ED0
    if (ctx->r2 == ctx->r1) {
        // 0x80800E28: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800ED0;
    }
    // 0x80800E28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E2C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800E30: beq         $v0, $at, L_80800F10
    if (ctx->r2 == ctx->r1) {
        // 0x80800E34: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80800F10;
    }
    // 0x80800E34: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800E38: beq         $v0, $at, L_80800F58
    if (ctx->r2 == ctx->r1) {
        // 0x80800E3C: nop
    
            goto L_80800F58;
    }
    // 0x80800E3C: nop

    // 0x80800E40: b           L_80800FD4
    // 0x80800E44: nop

        goto L_80800FD4;
    // 0x80800E44: nop

L_80800E48:
    // 0x80800E48: jal         0x8008CB10
    // 0x80800E4C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_8008CB10(rdram, ctx);
        goto after_5;
    // 0x80800E4C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_5:
    // 0x80800E50: beq         $v0, $zero, L_80800E6C
    if (ctx->r2 == 0) {
        // 0x80800E54: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E6C;
    }
    // 0x80800E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E58: lui         $a1, 0x3F73
    ctx->r5 = S32(0X3F73 << 16);
    // 0x80800E5C: lui         $a2, 0x3F86
    ctx->r6 = S32(0X3F86 << 16);
    // 0x80800E60: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800E64: jal         0x8009D7A4
    // 0x80800E68: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    func_8009D7A4(rdram, ctx);
        goto after_6;
    // 0x80800E68: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    after_6:
L_80800E6C:
    // 0x80800E6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E70: jal         0x8008DF8C
    // 0x80800E74: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_7;
    // 0x80800E74: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_7:
    // 0x80800E78: bnel        $v0, $zero, L_80800E90
    if (ctx->r2 != 0) {
        // 0x80800E7C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E90;
    }
    goto skip_0;
    // 0x80800E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800E80: jal         0x80000AA4
    // 0x80800E84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800AA4_bsbansack(rdram, ctx);
        goto after_8;
    // 0x80800E84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800E88: beq         $v0, $zero, L_80800EA0
    if (ctx->r2 == 0) {
        // 0x80800E8C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800EA0;
    }
    // 0x80800E8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800E90:
    // 0x80800E90: jal         0x80000AF4
    // 0x80800E94: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80800AF4_bsbansack(rdram, ctx);
        goto after_9;
    // 0x80800E94: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
    // 0x80800E98: b           L_80800EBC
    // 0x80800E9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800EBC;
    // 0x80800E9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800EA0:
    // 0x80800EA0: jal         0x8008B324
    // 0x80800EA4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_10;
    // 0x80800EA4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_10:
    // 0x80800EA8: beq         $v0, $zero, L_80800EB8
    if (ctx->r2 == 0) {
        // 0x80800EAC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800EB8;
    }
    // 0x80800EAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EB0: jal         0x80000AF4
    // 0x80800EB4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800AF4_bsbansack(rdram, ctx);
        goto after_11;
    // 0x80800EB4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
L_80800EB8:
    // 0x80800EB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800EBC:
    // 0x80800EBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800EC0: jal         0x80000000
    // 0x80800EC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80800000_bsbansack(rdram, ctx);
        goto after_12;
    // 0x80800EC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x80800EC8: b           L_80800FD4
    // 0x80800ECC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
        goto L_80800FD4;
    // 0x80800ECC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_80800ED0:
    // 0x80800ED0: jal         0x8008DF8C
    // 0x80800ED4: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    func_8008DF8C(rdram, ctx);
        goto after_13;
    // 0x80800ED4: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_13:
    // 0x80800ED8: bnel        $v0, $zero, L_80800EF0
    if (ctx->r2 != 0) {
        // 0x80800EDC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800EF0;
    }
    goto skip_1;
    // 0x80800EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800EE0: jal         0x80000AA4
    // 0x80800EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800AA4_bsbansack(rdram, ctx);
        goto after_14;
    // 0x80800EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800EE8: beq         $v0, $zero, L_80800EF8
    if (ctx->r2 == 0) {
        // 0x80800EEC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800EF8;
    }
    // 0x80800EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800EF0:
    // 0x80800EF0: jal         0x80000AF4
    // 0x80800EF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80800AF4_bsbansack(rdram, ctx);
        goto after_15;
    // 0x80800EF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_15:
L_80800EF8:
    // 0x80800EF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800F00: jal         0x80000000
    // 0x80800F04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80800000_bsbansack(rdram, ctx);
        goto after_16;
    // 0x80800F04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x80800F08: b           L_80800FD4
    // 0x80800F0C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
        goto L_80800FD4;
    // 0x80800F0C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_80800F10:
    // 0x80800F10: jal         0x80000368
    // 0x80800F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800368_bsbansack(rdram, ctx);
        goto after_17;
    // 0x80800F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800F18: jal         0x8008E078
    // 0x80800F1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_18;
    // 0x80800F1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800F20: bnel        $v0, $zero, L_80800F38
    if (ctx->r2 != 0) {
        // 0x80800F24: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800F38;
    }
    goto skip_2;
    // 0x80800F24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80800F28: jal         0x8008E35C
    // 0x80800F2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_19;
    // 0x80800F2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800F30: beq         $v0, $zero, L_80800F40
    if (ctx->r2 == 0) {
        // 0x80800F34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800F40;
    }
    // 0x80800F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800F38:
    // 0x80800F38: jal         0x80000AF4
    // 0x80800F3C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80800AF4_bsbansack(rdram, ctx);
        goto after_20;
    // 0x80800F3C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_20:
L_80800F40:
    // 0x80800F40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800F48: jal         0x80000000
    // 0x80800F4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80800000_bsbansack(rdram, ctx);
        goto after_21;
    // 0x80800F4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_21:
    // 0x80800F50: b           L_80800FD4
    // 0x80800F54: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
        goto L_80800FD4;
    // 0x80800F54: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_80800F58:
    // 0x80800F58: jal         0x80000368
    // 0x80800F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800368_bsbansack(rdram, ctx);
        goto after_22;
    // 0x80800F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80800F60: jal         0x8008B324
    // 0x80800F64: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_23;
    // 0x80800F64: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_23:
    // 0x80800F68: beq         $v0, $zero, L_80800FBC
    if (ctx->r2 == 0) {
        // 0x80800F6C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800FBC;
    }
    // 0x80800F6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F70: jal         0x8009BB00
    // 0x80800F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_24;
    // 0x80800F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x80800F78: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80800F7C: addiu       $t6, $zero, 0x166
    ctx->r14 = ADD32(0, 0X166);
    // 0x80800F80: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80800F84: nop

    // 0x80800F88: bc1f        L_80800F98
    if (!c1cs) {
        // 0x80800F8C: nop
    
            goto L_80800F98;
    }
    // 0x80800F8C: nop

    // 0x80800F90: b           L_80800FC4
    // 0x80800F94: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
        goto L_80800FC4;
    // 0x80800F94: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800F98:
    // 0x80800F98: jal         0x8008E35C
    // 0x80800F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_25;
    // 0x80800F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x80800FA0: beq         $v0, $zero, L_80800FB4
    if (ctx->r2 == 0) {
        // 0x80800FA4: addiu       $t8, $zero, 0x165
        ctx->r24 = ADD32(0, 0X165);
            goto L_80800FB4;
    }
    // 0x80800FA4: addiu       $t8, $zero, 0x165
    ctx->r24 = ADD32(0, 0X165);
    // 0x80800FA8: addiu       $t7, $zero, 0x167
    ctx->r15 = ADD32(0, 0X167);
    // 0x80800FAC: b           L_80800FC4
    // 0x80800FB0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
        goto L_80800FC4;
    // 0x80800FB0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80800FB4:
    // 0x80800FB4: b           L_80800FC4
    // 0x80800FB8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
        goto L_80800FC4;
    // 0x80800FB8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80800FBC:
    // 0x80800FBC: jal         0x8009B9B0
    // 0x80800FC0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_26;
    // 0x80800FC0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_26:
L_80800FC4:
    // 0x80800FC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FC8: jal         0x80000084
    // 0x80800FCC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_80800084_bsbansack(rdram, ctx);
        goto after_27;
    // 0x80800FCC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_27:
    // 0x80800FD0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_80800FD4:
    // 0x80800FD4: jal         0x8008E260
    // 0x80800FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_28;
    // 0x80800FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x80800FDC: beq         $v0, $zero, L_80800FEC
    if (ctx->r2 == 0) {
        // 0x80800FE0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800FEC;
    }
    // 0x80800FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FE4: addiu       $t9, $zero, 0x3D
    ctx->r25 = ADD32(0, 0X3D);
    // 0x80800FE8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80800FEC:
    // 0x80800FEC: jal         0x8009E5C8
    // 0x80800FF0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_29;
    // 0x80800FF0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_29:
    // 0x80800FF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800FF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800FFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801000: jr          $ra
    // 0x80801004: nop

    return;
    // 0x80801004: nop

;}
RECOMP_FUNC void bsbansack_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801008: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080100C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(65, 0X1E40) << 16);
    // 0x80801010: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801014: jr          $ra
    // 0x80801018: lw          $v0, 0x1E40($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1E40));
    return;
    // 0x80801018: lw          $v0, 0x1E40($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1E40));
;}
RECOMP_FUNC void func_8080101C_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080101C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801020: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801024: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801028: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080102C: beq         $a1, $zero, L_80801050
    if (ctx->r5 == 0) {
        // 0x80801030: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_80801050;
    }
    // 0x80801030: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80801034: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80801038: beq         $a1, $at, L_80801078
    if (ctx->r5 == ctx->r1) {
        // 0x8080103C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80801078;
    }
    // 0x8080103C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80801040: beq         $a1, $at, L_808010B8
    if (ctx->r5 == ctx->r1) {
        // 0x80801044: nop
    
            goto L_808010B8;
    }
    // 0x80801044: nop

    // 0x80801048: b           L_80801140
    // 0x8080104C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
        goto L_80801140;
    // 0x8080104C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_80801050:
    // 0x80801050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801054: jal         0x8009C914
    // 0x80801058: lw          $a1, 0x174($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X174);
    func_8009C914(rdram, ctx);
        goto after_0;
    // 0x80801058: lw          $a1, 0x174($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X174);
    after_0:
    // 0x8080105C: jal         0x8009C974
    // 0x80801060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_1;
    // 0x80801060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801068: jal         0x800931AC
    // 0x8080106C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800931AC(rdram, ctx);
        goto after_2;
    // 0x8080106C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80801070: b           L_80801140
    // 0x80801074: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
        goto L_80801140;
    // 0x80801074: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_80801078:
    // 0x80801078: jal         0x8009C984
    // 0x8080107C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_3;
    // 0x8080107C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801080: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80801084: swc1        $f0, 0x174($s0)
    MEM_W(0X174, ctx->r16) = ctx->f0.u32l;
    // 0x80801088: jal         0x8009328C
    // 0x8080108C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009328C(rdram, ctx);
        goto after_4;
    // 0x8080108C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801094: jal         0x800931AC
    // 0x80801098: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800931AC(rdram, ctx);
        goto after_5;
    // 0x80801098: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x8080109C: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x808010A0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x808010A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010A8: jal         0x80085338
    // 0x808010AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_set(rdram, ctx);
        goto after_6;
    // 0x808010AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x808010B0: b           L_80801140
    // 0x808010B4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
        goto L_80801140;
    // 0x808010B4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_808010B8:
    // 0x808010B8: jal         0x80092BE8
    // 0x808010BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092BE8(rdram, ctx);
        goto after_7;
    // 0x808010BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808010C0: swc1        $f0, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f0.u32l;
    // 0x808010C4: lwc1        $f12, 0x174($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X174);
    // 0x808010C8: jal         0x800F1DCC
    // 0x808010CC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_800F1DCC(rdram, ctx);
        goto after_8;
    // 0x808010CC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_8:
    // 0x808010D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808010D4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x808010D8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x808010DC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x808010E0: nop

    // 0x808010E4: bc1fl       L_808010FC
    if (!c1cs) {
        // 0x808010E8: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_808010FC;
    }
    goto skip_0;
    // 0x808010E8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    skip_0:
    // 0x808010EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808010F0: nop

    // 0x808010F4: add.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x808010F8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
L_808010FC:
    // 0x808010FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80801100: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80801104: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x80801108: nop

    // 0x8080110C: bc1fl       L_80801124
    if (!c1cs) {
        // 0x80801110: lwc1        $f16, 0x170($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X170);
            goto L_80801124;
    }
    goto skip_1;
    // 0x80801110: lwc1        $f16, 0x170($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X170);
    skip_1:
    // 0x80801114: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80801118: nop

    // 0x8080111C: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x80801120: lwc1        $f16, 0x170($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X170);
L_80801124:
    // 0x80801124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8080112C: add.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x80801130: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x80801134: jal         0x80085338
    // 0x80801138: swc1        $f18, 0x174($s0)
    MEM_W(0X174, ctx->r16) = ctx->f18.u32l;
    _batimer_set(rdram, ctx);
        goto after_9;
    // 0x80801138: swc1        $f18, 0x174($s0)
    MEM_W(0X174, ctx->r16) = ctx->f18.u32l;
    after_9:
    // 0x8080113C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_80801140:
    // 0x80801140: sb          $t7, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r15;
    // 0x80801144: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801148: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080114C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801150: jr          $ra
    // 0x80801154: nop

    return;
    // 0x80801154: nop

;}
RECOMP_FUNC void func_80801158_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801158: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080115C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801160: jal         0x8000101C
    // 0x80801164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8080101C_bsbansack(rdram, ctx);
        goto after_0;
    // 0x80801164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80801168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080116C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801170: jr          $ra
    // 0x80801174: nop

    return;
    // 0x80801174: nop

;}
RECOMP_FUNC void func_80801178_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801178: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080117C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801180: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
    // 0x80801184: jal         0x8000101C
    // 0x80801188: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8080101C_bsbansack(rdram, ctx);
        goto after_0;
    // 0x80801188: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8080118C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801190: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801194: jr          $ra
    // 0x80801198: nop

    return;
    // 0x80801198: nop

;}
RECOMP_FUNC void func_8080119C_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080119C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x808011A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808011A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808011A8: jal         0x80092BE8
    // 0x808011AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80092BE8(rdram, ctx);
        goto after_0;
    // 0x808011AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808011B0: jal         0x800D8FF8
    // 0x808011B4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x808011B4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x808011B8: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x808011BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011C0: jal         0x800852F0
    // 0x808011C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_2;
    // 0x808011C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808011C8: lbu         $v1, 0x15C($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X15C);
    // 0x808011CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808011D0: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x808011D4: beq         $v1, $at, L_808011F0
    if (ctx->r3 == ctx->r1) {
        // 0x808011D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808011F0;
    }
    // 0x808011D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808011E0: beq         $v1, $at, L_80801270
    if (ctx->r3 == ctx->r1) {
        // 0x808011E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801270;
    }
    // 0x808011E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011E8: b           L_80801304
    // 0x808011EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80801304;
    // 0x808011EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808011F0:
    // 0x808011F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808011F4: jal         0x80085300
    // 0x808011F8: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    _batimer_get(rdram, ctx);
        goto after_3;
    // 0x808011F8: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x808011FC: lui         $at, 0x44AF
    ctx->r1 = S32(0X44AF << 16);
    // 0x80801200: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80801204: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80801208: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x8080120C: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80801210: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80801214: lui         $a3, 0x442F
    ctx->r7 = S32(0X442F << 16);
    // 0x80801218: jal         0x800F10B4
    // 0x8080121C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_4;
    // 0x8080121C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x80801220: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80801224: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80801228: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x8080122C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80801230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801234: add.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x80801238: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8080123C: jal         0x8009328C
    // 0x80801240: nop

    func_8009328C(rdram, ctx);
        goto after_5;
    // 0x80801240: nop

    after_5:
    // 0x80801244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801248: jal         0x8008DF8C
    // 0x8080124C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008DF8C(rdram, ctx);
        goto after_6;
    // 0x8080124C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x80801250: beq         $v0, $zero, L_80801268
    if (ctx->r2 == 0) {
        // 0x80801254: lwc1        $f10, 0x34($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
            goto L_80801268;
    }
    // 0x80801254: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80801258: swc1        $f10, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f10.u32l;
    // 0x8080125C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801260: jal         0x8000101C
    // 0x80801264: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8080101C_bsbansack(rdram, ctx);
        goto after_7;
    // 0x80801264: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
L_80801268:
    // 0x80801268: b           L_80801304
    // 0x8080126C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80801304;
    // 0x8080126C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80801270:
    // 0x80801270: jal         0x80085300
    // 0x80801274: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_get(rdram, ctx);
        goto after_8;
    // 0x80801274: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80801278: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8080127C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80801280: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x80801284: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80801288: jal         0x800F10B4
    // 0x8080128C: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    func_800F10B4(rdram, ctx);
        goto after_9;
    // 0x8080128C: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    after_9:
    // 0x80801290: lwc1        $f16, 0x174($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X174);
    // 0x80801294: lwc1        $f18, 0x170($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X170);
    // 0x80801298: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8080129C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808012A0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x808012A4: mul.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x808012A8: jal         0x80013970
    // 0x808012AC: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    func_80013970(rdram, ctx);
        goto after_10;
    // 0x808012AC: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x808012B0: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x808012B4: lwc1        $f16, 0x170($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X170);
    // 0x808012B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012BC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x808012C0: add.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x808012C4: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x808012C8: jal         0x8009328C
    // 0x808012CC: nop

    func_8009328C(rdram, ctx);
        goto after_11;
    // 0x808012CC: nop

    after_11:
    // 0x808012D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012D4: jal         0x80085300
    // 0x808012D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_get(rdram, ctx);
        goto after_12;
    // 0x808012D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x808012DC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x808012E0: nop

    // 0x808012E4: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x808012E8: nop

    // 0x808012EC: bc1t        L_808012FC
    if (c1cs) {
        // 0x808012F0: nop
    
            goto L_808012FC;
    }
    // 0x808012F0: nop

    // 0x808012F4: b           L_80801304
    // 0x808012F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80801304;
    // 0x808012F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808012FC:
    // 0x808012FC: b           L_80801304
    // 0x80801300: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80801304;
    // 0x80801300: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80801304:
    // 0x80801304: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801308: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080130C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80801310: jr          $ra
    // 0x80801314: nop

    return;
    // 0x80801314: nop

;}
RECOMP_FUNC void func_80801318_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080131C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801320: jal         0x80001158
    // 0x80801324: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80801158_bsbansack(rdram, ctx);
        goto after_0;
    // 0x80801324: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801328: jal         0x800845D0
    // 0x8080132C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _babounce_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x8080132C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801330: jal         0x80000238
    // 0x80801334: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800238_bsbansack(rdram, ctx);
        goto after_2;
    // 0x80801334: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80801338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080133C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801340: jr          $ra
    // 0x80801344: nop

    return;
    // 0x80801344: nop

;}
RECOMP_FUNC void func_80801348_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801348: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080134C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801350: jal         0x800002D4
    // 0x80801354: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808002D4_bsbansack(rdram, ctx);
        goto after_0;
    // 0x80801354: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801358: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x8080135C: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80801360: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801364: jal         0x8008CCBC
    // 0x80801368: addiu       $a1, $zero, 0x28C
    ctx->r5 = ADD32(0, 0X28C);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x80801368: addiu       $a1, $zero, 0x28C
    ctx->r5 = ADD32(0, 0X28C);
    after_1:
    // 0x8080136C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801370: jal         0x800845D8
    // 0x80801374: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x80801374: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80801378: jal         0x80001178
    // 0x8080137C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80801178_bsbansack(rdram, ctx);
        goto after_3;
    // 0x8080137C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80801380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801388: jr          $ra
    // 0x8080138C: nop

    return;
    // 0x8080138C: nop

;}
RECOMP_FUNC void func_80801390_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801390: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801394: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801398: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8080139C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808013A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808013A4: jal         0x800845C8
    // 0x808013A8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    _babounce_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808013A8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x808013AC: beq         $v0, $zero, L_808013BC
    if (ctx->r2 == 0) {
        // 0x808013B0: nop
    
            goto L_808013BC;
    }
    // 0x808013B0: nop

    // 0x808013B4: jal         0x800001D4
    // 0x808013B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808001D4_bsbansack(rdram, ctx);
        goto after_1;
    // 0x808013B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_808013BC:
    // 0x808013BC: jal         0x80084608
    // 0x808013C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babounce_entrypoint_10(rdram, ctx);
        goto after_2;
    // 0x808013C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808013C4: jal         0x8000119C
    // 0x808013C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080119C_bsbansack(rdram, ctx);
        goto after_3;
    // 0x808013C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808013CC: beq         $v0, $zero, L_808013D8
    if (ctx->r2 == 0) {
        // 0x808013D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808013D8;
    }
    // 0x808013D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808013D4: addiu       $s1, $zero, 0x165
    ctx->r17 = ADD32(0, 0X165);
L_808013D8:
    // 0x808013D8: jal         0x8008DF8C
    // 0x808013DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008DF8C(rdram, ctx);
        goto after_4;
    // 0x808013DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x808013E0: beql        $v0, $zero, L_8080140C
    if (ctx->r2 == 0) {
        // 0x808013E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080140C;
    }
    goto skip_0;
    // 0x808013E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808013E8: jal         0x8009EF10
    // 0x808013EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_5;
    // 0x808013EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808013F0: blez        $v0, L_808013FC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x808013F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808013FC;
    }
    // 0x808013F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808013F8: addiu       $s1, $zero, 0x166
    ctx->r17 = ADD32(0, 0X166);
L_808013FC:
    // 0x808013FC: jal         0x80000084
    // 0x80801400: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80800084_bsbansack(rdram, ctx);
        goto after_6;
    // 0x80801400: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x80801404: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80801408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080140C:
    // 0x8080140C: jal         0x8009E5C8
    // 0x80801410: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_7;
    // 0x80801410: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x80801414: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801418: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8080141C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80801420: jr          $ra
    // 0x80801424: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80801424: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bsbansack_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801428: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080142C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(65, 0X1E50) << 16);
    // 0x80801430: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801434: jr          $ra
    // 0x80801438: lw          $v0, 0x1E50($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1E50));
    return;
    // 0x80801438: lw          $v0, 0x1E50($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1E50));
;}
RECOMP_FUNC void func_8080143C_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080143C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801440: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801444: jal         0x80001158
    // 0x80801448: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80801158_bsbansack(rdram, ctx);
        goto after_0;
    // 0x80801448: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080144C: jal         0x800845D0
    // 0x80801450: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _babounce_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x80801450: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801454: jal         0x80000238
    // 0x80801458: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800238_bsbansack(rdram, ctx);
        goto after_2;
    // 0x80801458: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8080145C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801464: jr          $ra
    // 0x80801468: nop

    return;
    // 0x80801468: nop

;}
RECOMP_FUNC void func_8080146C_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080146C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801474: jal         0x800002D4
    // 0x80801478: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808002D4_bsbansack(rdram, ctx);
        goto after_0;
    // 0x80801478: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080147C: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x80801480: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80801484: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801488: jal         0x8008CCBC
    // 0x8080148C: addiu       $a1, $zero, 0x28C
    ctx->r5 = ADD32(0, 0X28C);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x8080148C: addiu       $a1, $zero, 0x28C
    ctx->r5 = ADD32(0, 0X28C);
    after_1:
    // 0x80801490: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801494: jal         0x800845D8
    // 0x80801498: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x80801498: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x8080149C: jal         0x80001178
    // 0x808014A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80801178_bsbansack(rdram, ctx);
        goto after_3;
    // 0x808014A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x808014A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808014A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808014AC: jr          $ra
    // 0x808014B0: nop

    return;
    // 0x808014B0: nop

;}
RECOMP_FUNC void func_808014B4_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808014B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808014B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808014BC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808014C0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808014C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808014C8: jal         0x800845C8
    // 0x808014CC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    _babounce_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808014CC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x808014D0: beq         $v0, $zero, L_808014E0
    if (ctx->r2 == 0) {
        // 0x808014D4: nop
    
            goto L_808014E0;
    }
    // 0x808014D4: nop

    // 0x808014D8: jal         0x800001D4
    // 0x808014DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808001D4_bsbansack(rdram, ctx);
        goto after_1;
    // 0x808014DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_808014E0:
    // 0x808014E0: jal         0x80084608
    // 0x808014E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babounce_entrypoint_10(rdram, ctx);
        goto after_2;
    // 0x808014E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808014E8: jal         0x8000119C
    // 0x808014EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080119C_bsbansack(rdram, ctx);
        goto after_3;
    // 0x808014EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808014F0: beq         $v0, $zero, L_808014FC
    if (ctx->r2 == 0) {
        // 0x808014F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808014FC;
    }
    // 0x808014F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014F8: addiu       $s1, $zero, 0x165
    ctx->r17 = ADD32(0, 0X165);
L_808014FC:
    // 0x808014FC: jal         0x8008DF8C
    // 0x80801500: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008DF8C(rdram, ctx);
        goto after_4;
    // 0x80801500: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80801504: beql        $v0, $zero, L_80801530
    if (ctx->r2 == 0) {
        // 0x80801508: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801530;
    }
    goto skip_0;
    // 0x80801508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8080150C: jal         0x8009EF10
    // 0x80801510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_5;
    // 0x80801510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801514: blez        $v0, L_80801520
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80801518: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801520;
    }
    // 0x80801518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080151C: addiu       $s1, $zero, 0x166
    ctx->r17 = ADD32(0, 0X166);
L_80801520:
    // 0x80801520: jal         0x80000084
    // 0x80801524: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80800084_bsbansack(rdram, ctx);
        goto after_6;
    // 0x80801524: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x80801528: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8080152C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801530:
    // 0x80801530: jal         0x8009E5C8
    // 0x80801534: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_7;
    // 0x80801534: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x80801538: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080153C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80801540: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80801544: jr          $ra
    // 0x80801548: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80801548: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bsbansack_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080154C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801550: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(65, 0X1E60) << 16);
    // 0x80801554: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801558: jr          $ra
    // 0x8080155C: lw          $v0, 0x1E60($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1E60));
    return;
    // 0x8080155C: lw          $v0, 0x1E60($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1E60));
;}
RECOMP_FUNC void func_80801560_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801564: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801568: jal         0x80082FF0
    // 0x8080156C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x8080156C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801570: jal         0x80000238
    // 0x80801574: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800238_bsbansack(rdram, ctx);
        goto after_1;
    // 0x80801574: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801578: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080157C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801580: jr          $ra
    // 0x80801584: nop

    return;
    // 0x80801584: nop

;}
RECOMP_FUNC void func_80801588_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801588: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080158C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801590: jal         0x800002D4
    // 0x80801594: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808002D4_bsbansack(rdram, ctx);
        goto after_0;
    // 0x80801594: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801598: jal         0x80082FE0
    // 0x8080159C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x8080159C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808015A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808015A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808015A8: jr          $ra
    // 0x808015AC: nop

    return;
    // 0x808015AC: nop

;}
RECOMP_FUNC void func_808015B0_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808015B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808015B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808015B8: jal         0x80082FE8
    // 0x808015BC: nop

    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808015BC: nop

    after_0:
    // 0x808015C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808015C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808015C8: jr          $ra
    // 0x808015CC: nop

    return;
    // 0x808015CC: nop

;}
RECOMP_FUNC void bsbansack_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808015D0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808015D4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(65, 0X1E70) << 16);
    // 0x808015D8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808015DC: jr          $ra
    // 0x808015E0: lw          $v0, 0x1E70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1E70));
    return;
    // 0x808015E0: lw          $v0, 0x1E70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1E70));
;}
RECOMP_FUNC void func_808015E4_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808015E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808015E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808015EC: jal         0x800839B8
    // 0x808015F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x808015F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808015F4: jal         0x80000238
    // 0x808015F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800238_bsbansack(rdram, ctx);
        goto after_1;
    // 0x808015F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808015FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801604: jr          $ra
    // 0x80801608: nop

    return;
    // 0x80801608: nop

;}
RECOMP_FUNC void func_8080160C_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080160C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801610: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801614: jal         0x800002D4
    // 0x80801618: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808002D4_bsbansack(rdram, ctx);
        goto after_0;
    // 0x80801618: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080161C: jal         0x800839C8
    // 0x80801620: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x80801620: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080162C: jr          $ra
    // 0x80801630: nop

    return;
    // 0x80801630: nop

;}
RECOMP_FUNC void func_80801634_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801634: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801638: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080163C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80801640: jal         0x800839E8
    // 0x80801644: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x80801644: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80801648: beq         $v0, $zero, L_80801654
    if (ctx->r2 == 0) {
        // 0x8080164C: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80801654;
    }
    // 0x8080164C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80801650: addiu       $a1, $zero, 0x165
    ctx->r5 = ADD32(0, 0X165);
L_80801654:
    // 0x80801654: jal         0x8009E5C8
    // 0x80801658: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_1;
    // 0x80801658: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x8080165C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801660: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801664: jr          $ra
    // 0x80801668: nop

    return;
    // 0x80801668: nop

;}
RECOMP_FUNC void bsbansack_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080166C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801670: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(65, 0X1E80) << 16);
    // 0x80801674: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801678: jr          $ra
    // 0x8080167C: lw          $v0, 0x1E80($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1E80));
    return;
    // 0x8080167C: lw          $v0, 0x1E80($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1E80));
;}
RECOMP_FUNC void func_80801680_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801680: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80801684: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801688: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080168C: sltiu       $at, $a1, 0x5
    ctx->r1 = ctx->r5 < 0X5 ? 1 : 0;
    // 0x80801690: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801694: beq         $at, $zero, L_808019F0
    if (ctx->r1 == 0) {
        // 0x80801698: sb          $a1, 0x15C($a0)
        MEM_B(0X15C, ctx->r4) = ctx->r5;
            goto L_808019F0;
    }
    // 0x80801698: sb          $a1, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = ctx->r5;
    // 0x8080169C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x808016A0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(65, 0X1DDC) << 16);
    // 0x808016A4: addu        $at, $at, $t6
    gpr jr_addend_808016AC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x808016A8: lw          $t6, 0x1DDC($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(65, 0X1DDC));
    // 0x808016AC: jr          $t6
    // 0x808016B0: nop

    switch (jr_addend_808016AC >> 2) {
        case 0: goto L_808019D0; break;
        case 1: goto L_808016B4; break;
        case 2: goto L_808018E0; break;
        case 3: goto L_808018FC; break;
        case 4: goto L_80801934; break;
        default: switch_error(__func__, 0x808016AC, 0x80801DDC);
    }
    // 0x808016B0: nop

L_808016B4:
    // 0x808016B4: jal         0x8008CABC
    // 0x808016B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808016B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x808016BC: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x808016C0: jal         0x8008E35C
    // 0x808016C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_1;
    // 0x808016C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808016C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016CC: jal         0x8008E078
    // 0x808016D0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    func_8008E078(rdram, ctx);
        goto after_2;
    // 0x808016D0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_2:
    // 0x808016D4: sltu        $a2, $zero, $v0
    ctx->r6 = 0 < ctx->r2 ? 1 : 0;
    // 0x808016D8: bne         $a2, $zero, L_808016E4
    if (ctx->r6 != 0) {
        // 0x808016DC: lw          $a1, 0x3C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X3C);
            goto L_808016E4;
    }
    // 0x808016DC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x808016E0: sltu        $a2, $zero, $a1
    ctx->r6 = 0 < ctx->r5 ? 1 : 0;
L_808016E4:
    // 0x808016E4: sltu        $t7, $zero, $a1
    ctx->r15 = 0 < ctx->r5 ? 1 : 0;
    // 0x808016E8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x808016EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016F0: jal         0x80000A78
    // 0x808016F4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    func_80800A78_bsbansack(rdram, ctx);
        goto after_3;
    // 0x808016F4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    after_3:
    // 0x808016F8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(65, 0X1DF0) << 16);
    // 0x808016FC: lwc1        $f12, 0x1DF0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X1DF0));
    // 0x80801700: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(65, 0X1DF4) << 16);
    // 0x80801704: jal         0x800DC178
    // 0x80801708: lwc1        $f14, 0x1DF4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X1DF4));
    func_800DC178(rdram, ctx);
        goto after_4;
    // 0x80801708: lwc1        $f14, 0x1DF4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X1DF4));
    after_4:
    // 0x8080170C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80801710: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801714: addiu       $a1, $zero, 0x3F0
    ctx->r5 = ADD32(0, 0X3F0);
    // 0x80801718: jal         0x8009DB04
    // 0x8080171C: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    func_8009DB04(rdram, ctx);
        goto after_5;
    // 0x8080171C: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    after_5:
    // 0x80801720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801724: jal         0x800A2EEC
    // 0x80801728: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800A2EEC(rdram, ctx);
        goto after_6;
    // 0x80801728: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x8080172C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80801730: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80801734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801738: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080173C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80801740: jal         0x8009FFD8
    // 0x80801744: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_7;
    // 0x80801744: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x80801748: jal         0x8009EF04
    // 0x8080174C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_8;
    // 0x8080174C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80801750: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80801754: nop

    // 0x80801758: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8080175C: nop

    // 0x80801760: bc1t        L_8080177C
    if (c1cs) {
        // 0x80801764: nop
    
            goto L_8080177C;
    }
    // 0x80801764: nop

    // 0x80801768: jal         0x8009EEB8
    // 0x8080176C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_9;
    // 0x8080176C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80801770: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80801774: jal         0x8009C914
    // 0x80801778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_10;
    // 0x80801778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
L_8080177C:
    // 0x8080177C: jal         0x800001D4
    // 0x80801780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808001D4_bsbansack(rdram, ctx);
        goto after_11;
    // 0x80801780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80801784: jal         0x8009BB00
    // 0x80801788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_12;
    // 0x80801788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8080178C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80801790: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80801794: beq         $t9, $zero, L_808017F4
    if (ctx->r25 == 0) {
        // 0x80801798: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_808017F4;
    }
    // 0x80801798: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8080179C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808017A0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(65, 0X1DF8) << 16);
    // 0x808017A4: lwc1        $f6, 0x1DF8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X1DF8));
    // 0x808017A8: lui         $a3, 0x3EB3
    ctx->r7 = S32(0X3EB3 << 16);
    // 0x808017AC: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x808017B0: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    // 0x808017B4: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x808017B8: jal         0x800F10B4
    // 0x808017BC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_13;
    // 0x808017BC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_13:
    // 0x808017C0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x808017C4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808017C8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(65, 0X1DFC) << 16);
    // 0x808017CC: lwc1        $f8, 0x1DFC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X1DFC));
    // 0x808017D0: lui         $a3, 0x43AD
    ctx->r7 = S32(0X43AD << 16);
    // 0x808017D4: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x808017D8: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x808017DC: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x808017E0: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    // 0x808017E4: jal         0x800F10B4
    // 0x808017E8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_14;
    // 0x808017E8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_14:
    // 0x808017EC: b           L_8080184C
    // 0x808017F0: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
        goto L_8080184C;
    // 0x808017F0: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
L_808017F4:
    // 0x808017F4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x808017F8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808017FC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(65, 0X1E00) << 16);
    // 0x80801800: lwc1        $f10, 0x1E00($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X1E00));
    // 0x80801804: lui         $a3, 0x3EB3
    ctx->r7 = S32(0X3EB3 << 16);
    // 0x80801808: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x8080180C: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    // 0x80801810: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x80801814: jal         0x800F10B4
    // 0x80801818: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800F10B4(rdram, ctx);
        goto after_15;
    // 0x80801818: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_15:
    // 0x8080181C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80801820: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80801824: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(65, 0X1E04) << 16);
    // 0x80801828: lwc1        $f16, 0x1E04($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X1E04));
    // 0x8080182C: lui         $a3, 0x43AD
    ctx->r7 = S32(0X43AD << 16);
    // 0x80801830: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x80801834: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x80801838: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8080183C: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    // 0x80801840: jal         0x800F10B4
    // 0x80801844: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800F10B4(rdram, ctx);
        goto after_16;
    // 0x80801844: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_16:
    // 0x80801848: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
L_8080184C:
    // 0x8080184C: jal         0x8009C990
    // 0x80801850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_17;
    // 0x80801850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80801854: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80801858: jal         0x8009B9C0
    // 0x8080185C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_18;
    // 0x8080185C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80801860: jal         0x8009C990
    // 0x80801864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_19;
    // 0x80801864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80801868: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080186C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801870: jal         0x8009BA68
    // 0x80801874: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    func_8009BA68(rdram, ctx);
        goto after_20;
    // 0x80801874: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    after_20:
    // 0x80801878: jal         0x8008AF24
    // 0x8080187C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_8008AF24(rdram, ctx);
        goto after_21;
    // 0x8080187C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_21:
    // 0x80801880: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80801884: jal         0x8008AED4
    // 0x80801888: addiu       $a1, $zero, 0x144
    ctx->r5 = ADD32(0, 0X144);
    func_8008AED4(rdram, ctx);
        goto after_22;
    // 0x80801888: addiu       $a1, $zero, 0x144
    ctx->r5 = ADD32(0, 0X144);
    after_22:
    // 0x8080188C: lui         $a2, 0x3F25
    ctx->r6 = S32(0X3F25 << 16);
    // 0x80801890: ori         $a2, $a2, 0x8794
    ctx->r6 = ctx->r6 | 0X8794;
    // 0x80801894: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80801898: jal         0x8008B1D4
    // 0x8080189C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_23;
    // 0x8080189C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_23:
    // 0x808018A0: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x808018A4: jal         0x8008B1BC
    // 0x808018A8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_8008B1BC(rdram, ctx);
        goto after_24;
    // 0x808018A8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_24:
    // 0x808018AC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x808018B0: jal         0x8008B134
    // 0x808018B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_25;
    // 0x808018B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_25:
    // 0x808018B8: jal         0x8008B064
    // 0x808018BC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_8008B064(rdram, ctx);
        goto after_26;
    // 0x808018BC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_26:
    // 0x808018C0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x808018C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808018C8: beql        $t0, $zero, L_808019F4
    if (ctx->r8 == 0) {
        // 0x808018CC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_808019F4;
    }
    goto skip_0;
    // 0x808018CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x808018D0: jal         0x8009BA58
    // 0x808018D4: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    func_8009BA58(rdram, ctx);
        goto after_27;
    // 0x808018D4: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    after_27:
    // 0x808018D8: b           L_808019F4
    // 0x808018DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808019F4;
    // 0x808018DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808018E0:
    // 0x808018E0: lui         $a1, 0x3F4B
    ctx->r5 = S32(0X3F4B << 16);
    // 0x808018E4: ori         $a1, $a1, 0xE76D
    ctx->r5 = ctx->r5 | 0XE76D;
    // 0x808018E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808018EC: jal         0x8008CF1C
    // 0x808018F0: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_28;
    // 0x808018F0: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_28:
    // 0x808018F4: b           L_808019F4
    // 0x808018F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808019F4;
    // 0x808018F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808018FC:
    // 0x808018FC: jal         0x8008E35C
    // 0x80801900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_29;
    // 0x80801900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x80801904: beql        $v0, $zero, L_80801918
    if (ctx->r2 == 0) {
        // 0x80801908: lui         $a1, 0x3F7A
        ctx->r5 = S32(0X3F7A << 16);
            goto L_80801918;
    }
    goto skip_1;
    // 0x80801908: lui         $a1, 0x3F7A
    ctx->r5 = S32(0X3F7A << 16);
    skip_1:
    // 0x8080190C: jal         0x80000A14
    // 0x80801910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800A14_bsbansack(rdram, ctx);
        goto after_30;
    // 0x80801910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x80801914: lui         $a1, 0x3F7A
    ctx->r5 = S32(0X3F7A << 16);
L_80801918:
    // 0x80801918: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x8080191C: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80801920: ori         $a1, $a1, 0xE148
    ctx->r5 = ctx->r5 | 0XE148;
    // 0x80801924: jal         0x8008CF1C
    // 0x80801928: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CF1C(rdram, ctx);
        goto after_31;
    // 0x80801928: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x8080192C: b           L_808019F4
    // 0x80801930: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808019F4;
    // 0x80801930: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80801934:
    // 0x80801934: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80801938: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8080193C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801940: jal         0x8009BB5C
    // 0x80801944: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    func_8009BB5C(rdram, ctx);
        goto after_32;
    // 0x80801944: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    after_32:
    // 0x80801948: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8080194C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80801950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801954: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80801958: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8080195C: jal         0x8009D2D8
    // 0x80801960: swc1        $f6, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f6.u32l;
    func_8009D2D8(rdram, ctx);
        goto after_33;
    // 0x80801960: swc1        $f6, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f6.u32l;
    after_33:
    // 0x80801964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801968: jal         0x8009B9B0
    // 0x8080196C: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_34;
    // 0x8080196C: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_34:
    // 0x80801970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801974: jal         0x800A2FCC
    // 0x80801978: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A2FCC(rdram, ctx);
        goto after_35;
    // 0x80801978: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_35:
    // 0x8080197C: jal         0x8008E35C
    // 0x80801980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_36;
    // 0x80801980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x80801984: beq         $v0, $zero, L_808019A0
    if (ctx->r2 == 0) {
        // 0x80801988: nop
    
            goto L_808019A0;
    }
    // 0x80801988: nop

    // 0x8080198C: jal         0x80000A14
    // 0x80801990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800A14_bsbansack(rdram, ctx);
        goto after_37;
    // 0x80801990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_37:
    // 0x80801994: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(65, 0X1E08) << 16);
    // 0x80801998: lwc1        $f8, 0x1E08($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X1E08));
    // 0x8080199C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
L_808019A0:
    // 0x808019A0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(65, 0X1E0C) << 16);
    // 0x808019A4: lwc1        $f10, 0x1E0C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(65, 0X1E0C));
    // 0x808019A8: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x808019AC: lui         $a1, 0x3F7A
    ctx->r5 = S32(0X3F7A << 16);
    // 0x808019B0: ori         $a1, $a1, 0xE148
    ctx->r5 = ctx->r5 | 0XE148;
    // 0x808019B4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x808019B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019BC: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x808019C0: jal         0x8008CF1C
    // 0x808019C4: nop

    func_8008CF1C(rdram, ctx);
        goto after_38;
    // 0x808019C4: nop

    after_38:
    // 0x808019C8: b           L_808019F4
    // 0x808019CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808019F4;
    // 0x808019CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808019D0:
    // 0x808019D0: jal         0x80000A78
    // 0x808019D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800A78_bsbansack(rdram, ctx);
        goto after_39;
    // 0x808019D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_39:
    // 0x808019D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019DC: jal         0x8009BF5C
    // 0x808019E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_40;
    // 0x808019E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_40:
    // 0x808019E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019E8: jal         0x8009C4CC
    // 0x808019EC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_41;
    // 0x808019EC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_41:
L_808019F0:
    // 0x808019F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808019F4:
    // 0x808019F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808019F8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x808019FC: jr          $ra
    // 0x80801A00: nop

    return;
    // 0x80801A00: nop

;}
RECOMP_FUNC void func_80801A04_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801A04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801A08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801A0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80801A10: jal         0x80001680
    // 0x80801A14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80801680_bsbansack(rdram, ctx);
        goto after_0;
    // 0x80801A14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80801A18: jal         0x80000238
    // 0x80801A1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800238_bsbansack(rdram, ctx);
        goto after_1;
    // 0x80801A1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801A24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801A28: jr          $ra
    // 0x80801A2C: nop

    return;
    // 0x80801A2C: nop

;}
RECOMP_FUNC void func_80801A30_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801A30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801A34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801A38: jal         0x800002D4
    // 0x80801A3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808002D4_bsbansack(rdram, ctx);
        goto after_0;
    // 0x80801A3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801A40: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801A44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801A48: sb          $zero, 0x15D($a0)
    MEM_B(0X15D, ctx->r4) = 0;
    // 0x80801A4C: jal         0x80001680
    // 0x80801A50: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
    func_80801680_bsbansack(rdram, ctx);
        goto after_1;
    // 0x80801A50: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
    after_1:
    // 0x80801A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801A5C: jr          $ra
    // 0x80801A60: nop

    return;
    // 0x80801A60: nop

;}
RECOMP_FUNC void func_80801A64_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801A64: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80801A68: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801A6C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801A70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801A74: jal         0x8008CABC
    // 0x80801A78: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80801A78: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x80801A7C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80801A80: jal         0x800001D4
    // 0x80801A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808001D4_bsbansack(rdram, ctx);
        goto after_1;
    // 0x80801A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801A88: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
    // 0x80801A8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80801A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A94: beq         $v0, $at, L_80801AC4
    if (ctx->r2 == ctx->r1) {
        // 0x80801A98: lui         $a1, 0x3D4C
        ctx->r5 = S32(0X3D4C << 16);
            goto L_80801AC4;
    }
    // 0x80801A98: lui         $a1, 0x3D4C
    ctx->r5 = S32(0X3D4C << 16);
    // 0x80801A9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80801AA0: beq         $v0, $at, L_80801B60
    if (ctx->r2 == ctx->r1) {
        // 0x80801AA4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801B60;
    }
    // 0x80801AA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801AA8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80801AAC: beq         $v0, $at, L_80801BA0
    if (ctx->r2 == ctx->r1) {
        // 0x80801AB0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80801BA0;
    }
    // 0x80801AB0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80801AB4: beq         $v0, $at, L_80801BE8
    if (ctx->r2 == ctx->r1) {
        // 0x80801AB8: nop
    
            goto L_80801BE8;
    }
    // 0x80801AB8: nop

    // 0x80801ABC: b           L_80801C6C
    // 0x80801AC0: nop

        goto L_80801C6C;
    // 0x80801AC0: nop

L_80801AC4:
    // 0x80801AC4: jal         0x8008CB10
    // 0x80801AC8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x80801AC8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_2:
    // 0x80801ACC: beq         $v0, $zero, L_80801AFC
    if (ctx->r2 == 0) {
        // 0x80801AD0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801AFC;
    }
    // 0x80801AD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801AD4: lui         $a2, 0x3F73
    ctx->r6 = S32(0X3F73 << 16);
    // 0x80801AD8: lui         $a3, 0x3F86
    ctx->r7 = S32(0X3F86 << 16);
    // 0x80801ADC: addiu       $t6, $zero, 0x2328
    ctx->r14 = ADD32(0, 0X2328);
    // 0x80801AE0: addiu       $t7, $zero, 0x2AF8
    ctx->r15 = ADD32(0, 0X2AF8);
    // 0x80801AE4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80801AE8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801AEC: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80801AF0: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80801AF4: jal         0x8009DEC0
    // 0x80801AF8: addiu       $a1, $zero, 0x58A
    ctx->r5 = ADD32(0, 0X58A);
    func_8009DEC0(rdram, ctx);
        goto after_3;
    // 0x80801AF8: addiu       $a1, $zero, 0x58A
    ctx->r5 = ADD32(0, 0X58A);
    after_3:
L_80801AFC:
    // 0x80801AFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801B00: jal         0x8008DF8C
    // 0x80801B04: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_4;
    // 0x80801B04: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_4:
    // 0x80801B08: bnel        $v0, $zero, L_80801B20
    if (ctx->r2 != 0) {
        // 0x80801B0C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801B20;
    }
    goto skip_0;
    // 0x80801B0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80801B10: jal         0x80000AA4
    // 0x80801B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800AA4_bsbansack(rdram, ctx);
        goto after_5;
    // 0x80801B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801B18: beq         $v0, $zero, L_80801B30
    if (ctx->r2 == 0) {
        // 0x80801B1C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801B30;
    }
    // 0x80801B1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801B20:
    // 0x80801B20: jal         0x80001680
    // 0x80801B24: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80801680_bsbansack(rdram, ctx);
        goto after_6;
    // 0x80801B24: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x80801B28: b           L_80801B4C
    // 0x80801B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80801B4C;
    // 0x80801B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801B30:
    // 0x80801B30: jal         0x8008B324
    // 0x80801B34: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B324(rdram, ctx);
        goto after_7;
    // 0x80801B34: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_7:
    // 0x80801B38: beq         $v0, $zero, L_80801B48
    if (ctx->r2 == 0) {
        // 0x80801B3C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801B48;
    }
    // 0x80801B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801B40: jal         0x80001680
    // 0x80801B44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80801680_bsbansack(rdram, ctx);
        goto after_8;
    // 0x80801B44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
L_80801B48:
    // 0x80801B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801B4C:
    // 0x80801B4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80801B50: jal         0x80000000
    // 0x80801B54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80800000_bsbansack(rdram, ctx);
        goto after_9;
    // 0x80801B54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x80801B58: b           L_80801C6C
    // 0x80801B5C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
        goto L_80801C6C;
    // 0x80801B5C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_80801B60:
    // 0x80801B60: jal         0x8008DF8C
    // 0x80801B64: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_10;
    // 0x80801B64: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_10:
    // 0x80801B68: bnel        $v0, $zero, L_80801B80
    if (ctx->r2 != 0) {
        // 0x80801B6C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801B80;
    }
    goto skip_1;
    // 0x80801B6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80801B70: jal         0x80000AA4
    // 0x80801B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800AA4_bsbansack(rdram, ctx);
        goto after_11;
    // 0x80801B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80801B78: beq         $v0, $zero, L_80801B88
    if (ctx->r2 == 0) {
        // 0x80801B7C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801B88;
    }
    // 0x80801B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801B80:
    // 0x80801B80: jal         0x80001680
    // 0x80801B84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80801680_bsbansack(rdram, ctx);
        goto after_12;
    // 0x80801B84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_12:
L_80801B88:
    // 0x80801B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801B8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80801B90: jal         0x80000000
    // 0x80801B94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80800000_bsbansack(rdram, ctx);
        goto after_13;
    // 0x80801B94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x80801B98: b           L_80801C6C
    // 0x80801B9C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
        goto L_80801C6C;
    // 0x80801B9C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_80801BA0:
    // 0x80801BA0: jal         0x80000368
    // 0x80801BA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800368_bsbansack(rdram, ctx);
        goto after_14;
    // 0x80801BA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80801BA8: jal         0x8008E078
    // 0x80801BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_15;
    // 0x80801BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80801BB0: bnel        $v0, $zero, L_80801BC8
    if (ctx->r2 != 0) {
        // 0x80801BB4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801BC8;
    }
    goto skip_2;
    // 0x80801BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80801BB8: jal         0x8008E35C
    // 0x80801BBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_16;
    // 0x80801BBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80801BC0: beq         $v0, $zero, L_80801BD0
    if (ctx->r2 == 0) {
        // 0x80801BC4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801BD0;
    }
    // 0x80801BC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801BC8:
    // 0x80801BC8: jal         0x80001680
    // 0x80801BCC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80801680_bsbansack(rdram, ctx);
        goto after_17;
    // 0x80801BCC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_17:
L_80801BD0:
    // 0x80801BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80801BD8: jal         0x80000000
    // 0x80801BDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80800000_bsbansack(rdram, ctx);
        goto after_18;
    // 0x80801BDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_18:
    // 0x80801BE0: b           L_80801C6C
    // 0x80801BE4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
        goto L_80801C6C;
    // 0x80801BE4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_80801BE8:
    // 0x80801BE8: jal         0x80000368
    // 0x80801BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800368_bsbansack(rdram, ctx);
        goto after_19;
    // 0x80801BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80801BF0: jal         0x8008B324
    // 0x80801BF4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B324(rdram, ctx);
        goto after_20;
    // 0x80801BF4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_20:
    // 0x80801BF8: beq         $v0, $zero, L_80801C54
    if (ctx->r2 == 0) {
        // 0x80801BFC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801C54;
    }
    // 0x80801BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C00: jal         0x8009BB00
    // 0x80801C04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_21;
    // 0x80801C04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80801C08: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80801C0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C10: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80801C14: nop

    // 0x80801C18: bc1f        L_80801C30
    if (!c1cs) {
        // 0x80801C1C: nop
    
            goto L_80801C30;
    }
    // 0x80801C1C: nop

    // 0x80801C20: jal         0x80001680
    // 0x80801C24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80801680_bsbansack(rdram, ctx);
        goto after_22;
    // 0x80801C24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_22:
    // 0x80801C28: b           L_80801C60
    // 0x80801C2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80801C60;
    // 0x80801C2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801C30:
    // 0x80801C30: jal         0x8008E35C
    // 0x80801C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_23;
    // 0x80801C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80801C38: beq         $v0, $zero, L_80801C4C
    if (ctx->r2 == 0) {
        // 0x80801C3C: addiu       $t9, $zero, 0x165
        ctx->r25 = ADD32(0, 0X165);
            goto L_80801C4C;
    }
    // 0x80801C3C: addiu       $t9, $zero, 0x165
    ctx->r25 = ADD32(0, 0X165);
    // 0x80801C40: addiu       $t8, $zero, 0x167
    ctx->r24 = ADD32(0, 0X167);
    // 0x80801C44: b           L_80801C5C
    // 0x80801C48: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
        goto L_80801C5C;
    // 0x80801C48: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_80801C4C:
    // 0x80801C4C: b           L_80801C5C
    // 0x80801C50: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
        goto L_80801C5C;
    // 0x80801C50: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_80801C54:
    // 0x80801C54: jal         0x8009B9B0
    // 0x80801C58: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_24;
    // 0x80801C58: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_24:
L_80801C5C:
    // 0x80801C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801C60:
    // 0x80801C60: jal         0x80000084
    // 0x80801C64: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_80800084_bsbansack(rdram, ctx);
        goto after_25;
    // 0x80801C64: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_25:
    // 0x80801C68: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_80801C6C:
    // 0x80801C6C: jal         0x8008E260
    // 0x80801C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_26;
    // 0x80801C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x80801C74: beq         $v0, $zero, L_80801C84
    if (ctx->r2 == 0) {
        // 0x80801C78: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801C84;
    }
    // 0x80801C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C7C: addiu       $t0, $zero, 0x3D
    ctx->r8 = ADD32(0, 0X3D);
    // 0x80801C80: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_80801C84:
    // 0x80801C84: jal         0x8009E5C8
    // 0x80801C88: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_27;
    // 0x80801C88: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_27:
    // 0x80801C8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801C90: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801C94: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80801C98: jr          $ra
    // 0x80801C9C: nop

    return;
    // 0x80801C9C: nop

;}
RECOMP_FUNC void bsbansack_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801CA0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801CA4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(65, 0X1E90) << 16);
    // 0x80801CA8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801CAC: jr          $ra
    // 0x80801CB0: lw          $v0, 0x1E90($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1E90));
    return;
    // 0x80801CB0: lw          $v0, 0x1E90($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1E90));
;}
RECOMP_FUNC void func_80801CB4_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801CB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801CB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801CBC: jal         0x80000238
    // 0x80801CC0: nop

    func_80800238_bsbansack(rdram, ctx);
        goto after_0;
    // 0x80801CC0: nop

    after_0:
    // 0x80801CC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801CC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801CCC: jr          $ra
    // 0x80801CD0: nop

    return;
    // 0x80801CD0: nop

;}
RECOMP_FUNC void func_80801CD4_bsbansack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801CD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801CD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801CDC: jal         0x800002D4
    // 0x80801CE0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_808002D4_bsbansack(rdram, ctx);
        goto after_0;
    // 0x80801CE0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801CE4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80801CE8: addiu       $a1, $zero, 0x289
    ctx->r5 = ADD32(0, 0X289);
    // 0x80801CEC: jal         0x8008CB3C
    // 0x80801CF0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80801CF0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x80801CF4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80801CF8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801CFC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80801D00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801D04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80801D08: jal         0x8009FFD8
    // 0x80801D0C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80801D0C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80801D10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801D14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801D18: jr          $ra
    // 0x80801D1C: nop

    return;
    // 0x80801D1C: nop

;}
RECOMP_FUNC void func_80801D20_bsbansack(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80801D34: jal         0x8009EF10
    // 0x80801D38: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_8009EF10(rdram, ctx);
        goto after_0;
    // 0x80801D38: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_0:
    // 0x80801D3C: blez        $v0, L_80801D48
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80801D40: nop
    
            goto L_80801D48;
    }
    // 0x80801D40: nop

    // 0x80801D44: addiu       $s0, $zero, 0x166
    ctx->r16 = ADD32(0, 0X166);
L_80801D48:
    // 0x80801D48: jal         0x8008E35C
    // 0x80801D4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008E35C(rdram, ctx);
        goto after_1;
    // 0x80801D4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80801D50: beq         $v0, $zero, L_80801D5C
    if (ctx->r2 == 0) {
        // 0x80801D54: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80801D5C;
    }
    // 0x80801D54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801D58: addiu       $s0, $zero, 0x167
    ctx->r16 = ADD32(0, 0X167);
L_80801D5C:
    // 0x80801D5C: jal         0x80000084
    // 0x80801D60: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80800084_bsbansack(rdram, ctx);
        goto after_2;
    // 0x80801D60: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80801D64: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80801D68: jal         0x8008E260
    // 0x80801D6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008E260(rdram, ctx);
        goto after_3;
    // 0x80801D6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x80801D70: beq         $v0, $zero, L_80801D7C
    if (ctx->r2 == 0) {
        // 0x80801D74: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80801D7C;
    }
    // 0x80801D74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801D78: addiu       $s0, $zero, 0x3D
    ctx->r16 = ADD32(0, 0X3D);
L_80801D7C:
    // 0x80801D7C: jal         0x8009E5C8
    // 0x80801D80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x80801D80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x80801D84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801D88: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80801D8C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80801D90: jr          $ra
    // 0x80801D94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80801D94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bsbansack_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801D98: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801D9C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(65, 0X1EA0) << 16);
    // 0x80801DA0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801DA4: jr          $ra
    // 0x80801DA8: lw          $v0, 0x1EA0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1EA0));
    return;
    // 0x80801DA8: lw          $v0, 0x1EA0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(65, 0X1EA0));
    // 0x80801DAC: nop

;}
RECOMP_FUNC void func_80800000_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800004: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800008: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8080000C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800014: jal         0x80091A58
    // 0x80800018: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80800018: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x8080001C: beq         $v0, $zero, L_80800028
    if (ctx->r2 == 0) {
        // 0x80800020: nop
    
            goto L_80800028;
    }
    // 0x80800020: nop

    // 0x80800024: addiu       $s0, $zero, 0x16E
    ctx->r16 = ADD32(0, 0X16E);
L_80800028:
    // 0x80800028: jal         0x8008E148
    // 0x8080002C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008E148(rdram, ctx);
        goto after_1;
    // 0x8080002C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800030: beq         $v0, $zero, L_8080003C
    if (ctx->r2 == 0) {
        // 0x80800034: nop
    
            goto L_8080003C;
    }
    // 0x80800034: nop

    // 0x80800038: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_8080003C:
    // 0x8080003C: jal         0x8008E260
    // 0x80800040: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008E260(rdram, ctx);
        goto after_2;
    // 0x80800040: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800044: beq         $v0, $zero, L_80800050
    if (ctx->r2 == 0) {
        // 0x80800048: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800050;
    }
    // 0x80800048: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080004C: addiu       $s0, $zero, 0x3D
    ctx->r16 = ADD32(0, 0X3D);
L_80800050:
    // 0x80800050: jal         0x80091A30
    // 0x80800054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A30(rdram, ctx);
        goto after_3;
    // 0x80800054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80800058: beq         $v0, $zero, L_80800064
    if (ctx->r2 == 0) {
        // 0x8080005C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800064;
    }
    // 0x8080005C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800060: addiu       $s0, $zero, 0x16B
    ctx->r16 = ADD32(0, 0X16B);
L_80800064:
    // 0x80800064: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80800068: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080006C: jr          $ra
    // 0x80800070: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800070: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80800074_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800074: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800078: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080007C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800080: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800084: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800088: jal         0x8009EF10
    // 0x8080008C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_8009EF10(rdram, ctx);
        goto after_0;
    // 0x8080008C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x80800090: blez        $v0, L_8080009C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80800094: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080009C;
    }
    // 0x80800094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800098: addiu       $s1, $zero, 0x16D
    ctx->r17 = ADD32(0, 0X16D);
L_8080009C:
    // 0x8080009C: jal         0x80091A58
    // 0x808000A0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_1;
    // 0x808000A0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x808000A4: beq         $v0, $zero, L_808000B0
    if (ctx->r2 == 0) {
        // 0x808000A8: nop
    
            goto L_808000B0;
    }
    // 0x808000A8: nop

    // 0x808000AC: addiu       $s1, $zero, 0x16E
    ctx->r17 = ADD32(0, 0X16E);
L_808000B0:
    // 0x808000B0: jal         0x8008E148
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_2;
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808000B8: beq         $v0, $zero, L_808000C4
    if (ctx->r2 == 0) {
        // 0x808000BC: nop
    
            goto L_808000C4;
    }
    // 0x808000BC: nop

    // 0x808000C0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_808000C4:
    // 0x808000C4: jal         0x8008E260
    // 0x808000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_3;
    // 0x808000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808000CC: beq         $v0, $zero, L_808000D8
    if (ctx->r2 == 0) {
        // 0x808000D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000D8;
    }
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D4: addiu       $s1, $zero, 0x3D
    ctx->r17 = ADD32(0, 0X3D);
L_808000D8:
    // 0x808000D8: jal         0x80091A30
    // 0x808000DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A30(rdram, ctx);
        goto after_4;
    // 0x808000DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x808000E0: beq         $v0, $zero, L_808000EC
    if (ctx->r2 == 0) {
        // 0x808000E4: lw          $s0, 0x14($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X14);
            goto L_808000EC;
    }
    // 0x808000E4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808000E8: addiu       $s1, $zero, 0x16B
    ctx->r17 = ADD32(0, 0X16B);
L_808000EC:
    // 0x808000EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000F0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x808000F4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808000F8: jr          $ra
    // 0x808000FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x808000FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80800100_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800100: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800108: jal         0x8009EF1C
    // 0x8080010C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x8080010C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800110: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80800114: jal         0x8009EF10
    // 0x80800118: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x80800118: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x8080011C: bne         $v0, $zero, L_80800138
    if (ctx->r2 != 0) {
        // 0x80800120: lwc1        $f12, 0x1C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_80800138;
    }
    // 0x80800120: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80800124: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800128: jal         0x8009B9B0
    // 0x8080012C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x8080012C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800130: b           L_80800158
    // 0x80800134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800158;
    // 0x80800134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800138:
    // 0x80800138: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8080013C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800140: jal         0x800F1214
    // 0x80800144: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x80800144: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    after_3:
    // 0x80800148: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080014C: jal         0x8009B9B0
    // 0x80800150: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800150: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800158:
    // 0x80800158: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080015C: jr          $ra
    // 0x80800160: nop

    return;
    // 0x80800160: nop

;}
RECOMP_FUNC void func_80800164_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800164: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800168: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080016C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800170: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800174: jal         0x8009E74C
    // 0x80800178: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x80800178: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_0:
    // 0x8080017C: beq         $v0, $zero, L_808001A8
    if (ctx->r2 == 0) {
        // 0x80800180: nop
    
            goto L_808001A8;
    }
    // 0x80800180: nop

    // 0x80800184: jal         0x80084508
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babackpack_get_state(rdram, ctx);
        goto after_1;
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080018C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80800190: beq         $v0, $at, L_80800208
    if (ctx->r2 == ctx->r1) {
        // 0x80800194: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800208;
    }
    // 0x80800194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800198: jal         0x80084538
    // 0x8080019C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    _babackpack_set_state(rdram, ctx);
        goto after_2;
    // 0x8080019C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x808001A0: b           L_8080020C
    // 0x808001A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080020C;
    // 0x808001A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808001A8:
    // 0x808001A8: jal         0x80084508
    // 0x808001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babackpack_get_state(rdram, ctx);
        goto after_3;
    // 0x808001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808001B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808001B4: beq         $v0, $at, L_808001C4
    if (ctx->r2 == ctx->r1) {
        // 0x808001B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001C4;
    }
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001BC: jal         0x80084538
    // 0x808001C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babackpack_set_state(rdram, ctx);
        goto after_4;
    // 0x808001C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_808001C4:
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001C8: jal         0x800A0CD0
    // 0x808001CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CD0(rdram, ctx);
        goto after_5;
    // 0x808001CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x808001D0: jal         0x8009E6F8
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E6F8(rdram, ctx);
        goto after_6;
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808001D8: addiu       $at, $zero, 0x16B
    ctx->r1 = ADD32(0, 0X16B);
    // 0x808001DC: beq         $v0, $at, L_808001F8
    if (ctx->r2 == ctx->r1) {
        // 0x808001E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001F8;
    }
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E4: addiu       $a1, $zero, 0x6F
    ctx->r5 = ADD32(0, 0X6F);
    // 0x808001E8: jal         0x8008CDB8
    // 0x808001EC: lui         $a2, 0x40B0
    ctx->r6 = S32(0X40B0 << 16);
    func_8008CDB8(rdram, ctx);
        goto after_7;
    // 0x808001EC: lui         $a2, 0x40B0
    ctx->r6 = S32(0X40B0 << 16);
    after_7:
    // 0x808001F0: jal         0x8008CA98
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CA98(rdram, ctx);
        goto after_8;
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_808001F8:
    // 0x808001F8: jal         0x80095A40
    // 0x808001FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095A40(rdram, ctx);
        goto after_9;
    // 0x808001FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800200: jal         0x8009EF60
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF60(rdram, ctx);
        goto after_10;
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
L_80800208:
    // 0x80800208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080020C:
    // 0x8080020C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800210: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800214: jr          $ra
    // 0x80800218: nop

    return;
    // 0x80800218: nop

;}
RECOMP_FUNC void func_8080021C_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080021C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800220: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800224: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800228: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080022C: jal         0x8009E77C
    // 0x80800230: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_8009E77C(rdram, ctx);
        goto after_0;
    // 0x80800230: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_0:
    // 0x80800234: bne         $v0, $zero, L_80800298
    if (ctx->r2 != 0) {
        // 0x80800238: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800298;
    }
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080023C: jal         0x80084538
    // 0x80800240: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    _babackpack_set_state(rdram, ctx);
        goto after_1;
    // 0x80800240: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x80800244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800248: jal         0x800A0CD0
    // 0x8080024C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CD0(rdram, ctx);
        goto after_2;
    // 0x8080024C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800250: jal         0x8009EFA8
    // 0x80800254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EFA8(rdram, ctx);
        goto after_3;
    // 0x80800254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800258: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x8080025C: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800264: jal         0x8009F1C8
    // 0x80800268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_4;
    // 0x80800268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800270: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800274: jal         0x8009F1C8
    // 0x80800278: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_5;
    // 0x80800278: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_5:
    // 0x8080027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800280: lui         $a1, 0x4254
    ctx->r5 = S32(0X4254 << 16);
    // 0x80800284: jal         0x800959C8
    // 0x80800288: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    func_800959C8(rdram, ctx);
        goto after_6;
    // 0x80800288: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    after_6:
    // 0x8080028C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800290: jal         0x8009590C
    // 0x80800294: lui         $a1, 0x4254
    ctx->r5 = S32(0X4254 << 16);
    func_8009590C(rdram, ctx);
        goto after_7;
    // 0x80800294: lui         $a1, 0x4254
    ctx->r5 = S32(0X4254 << 16);
    after_7:
L_80800298:
    // 0x80800298: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080029C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808002A4: jr          $ra
    // 0x808002A8: nop

    return;
    // 0x808002A8: nop

;}
RECOMP_FUNC void func_808002AC_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002B4: lbu         $t6, 0x15D($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X15D);
    // 0x808002B8: beq         $t6, $zero, L_808002D0
    if (ctx->r14 == 0) {
        // 0x808002BC: nop
    
            goto L_808002D0;
    }
    // 0x808002BC: nop

    // 0x808002C0: jal         0x80000164
    // 0x808002C4: nop

    func_80800164_bsbanshack(rdram, ctx);
        goto after_0;
    // 0x808002C4: nop

    after_0:
    // 0x808002C8: b           L_80800300
    // 0x808002CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800300;
    // 0x808002CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808002D0:
    // 0x808002D0: jal         0x80084508
    // 0x808002D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babackpack_get_state(rdram, ctx);
        goto after_1;
    // 0x808002D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x808002D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808002DC: beq         $v0, $at, L_808002FC
    if (ctx->r2 == ctx->r1) {
        // 0x808002E0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808002FC;
    }
    // 0x808002E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808002E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808002E8: jal         0x800A0CD0
    // 0x808002EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A0CD0(rdram, ctx);
        goto after_2;
    // 0x808002EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x808002F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808002F4: jal         0x80084538
    // 0x808002F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babackpack_set_state(rdram, ctx);
        goto after_3;
    // 0x808002F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_808002FC:
    // 0x808002FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800300:
    // 0x80800300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800304: jr          $ra
    // 0x80800308: nop

    return;
    // 0x80800308: nop

;}
RECOMP_FUNC void func_8080030C_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080030C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800310: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800314: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800318: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x8080031C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800320: sb          $zero, 0x15D($a0)
    MEM_B(0X15D, ctx->r4) = 0;
    // 0x80800324: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800328: jal         0x8008CCBC
    // 0x8080032C: addiu       $a1, $zero, 0x145
    ctx->r5 = ADD32(0, 0X145);
    func_8008CCBC(rdram, ctx);
        goto after_0;
    // 0x8080032C: addiu       $a1, $zero, 0x145
    ctx->r5 = ADD32(0, 0X145);
    after_0:
    // 0x80800330: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800334: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080033C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800340: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800344: jal         0x8009FFD8
    // 0x80800348: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800348: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x8080034C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800350: jal         0x8009B9B0
    // 0x80800354: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800354: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080035C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80800360: jal         0x80098140
    // 0x80800364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098140(rdram, ctx);
        goto after_3;
    // 0x80800364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
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

;}
RECOMP_FUNC void func_8080037C_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080037C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800380: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800384: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800388: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080038C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80800390: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80800394: jal         0x80098140
    // 0x80800398: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098140(rdram, ctx);
        goto after_0;
    // 0x80800398: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8080039C: lui         $a1, 0x3E9E
    ctx->r5 = S32(0X3E9E << 16);
    // 0x808003A0: ori         $a1, $a1, 0xB852
    ctx->r5 = ctx->r5 | 0XB852;
    // 0x808003A4: jal         0x8008CB10
    // 0x808003A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_1;
    // 0x808003A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808003AC: beq         $v0, $zero, L_808003C4
    if (ctx->r2 == 0) {
        // 0x808003B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003C4;
    }
    // 0x808003B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003B4: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x808003B8: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808003BC: jal         0x8009DBF0
    // 0x808003C0: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    func_8009DBF0(rdram, ctx);
        goto after_2;
    // 0x808003C0: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    after_2:
L_808003C4:
    // 0x808003C4: lui         $a1, 0x3E4A
    ctx->r5 = S32(0X3E4A << 16);
    // 0x808003C8: ori         $a1, $a1, 0x57A8
    ctx->r5 = ctx->r5 | 0X57A8;
    // 0x808003CC: jal         0x8008CB10
    // 0x808003D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_3;
    // 0x808003D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808003D4: beq         $v0, $zero, L_808003E8
    if (ctx->r2 == 0) {
        // 0x808003D8: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_808003E8;
    }
    // 0x808003D8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808003DC: sb          $t6, 0x15D($s0)
    MEM_B(0X15D, ctx->r16) = ctx->r14;
    // 0x808003E0: jal         0x8000021C
    // 0x808003E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080021C_bsbanshack(rdram, ctx);
        goto after_4;
    // 0x808003E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_808003E8:
    // 0x808003E8: jal         0x8008CAEC
    // 0x808003EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_5;
    // 0x808003EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808003F0: beq         $v0, $zero, L_80800400
    if (ctx->r2 == 0) {
        // 0x808003F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800400;
    }
    // 0x808003F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003F8: addiu       $t7, $zero, 0x16C
    ctx->r15 = ADD32(0, 0X16C);
    // 0x808003FC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80800400:
    // 0x80800400: jal         0x8009E5C8
    // 0x80800404: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x80800404: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x80800408: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080040C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800410: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800414: jr          $ra
    // 0x80800418: nop

    return;
    // 0x80800418: nop

;}
RECOMP_FUNC void bsbanshack_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080041C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800420: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(66, 0XCB0) << 16);
    // 0x80800424: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800428: jr          $ra
    // 0x8080042C: lw          $v0, 0xCB0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(66, 0XCB0));
    return;
    // 0x8080042C: lw          $v0, 0xCB0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(66, 0XCB0));
;}
RECOMP_FUNC void func_80800430_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800434: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800438: jal         0x80000164
    // 0x8080043C: nop

    func_80800164_bsbanshack(rdram, ctx);
        goto after_0;
    // 0x8080043C: nop

    after_0:
    // 0x80800440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800448: jr          $ra
    // 0x8080044C: nop

    return;
    // 0x8080044C: nop

;}
RECOMP_FUNC void func_80800450_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800450: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800454: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800458: jal         0x8000021C
    // 0x8080045C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8080021C_bsbanshack(rdram, ctx);
        goto after_0;
    // 0x8080045C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800460: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x80800464: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800468: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080046C: jal         0x8008CCBC
    // 0x80800470: addiu       $a1, $zero, 0x295
    ctx->r5 = ADD32(0, 0X295);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x80800470: addiu       $a1, $zero, 0x295
    ctx->r5 = ADD32(0, 0X295);
    after_1:
    // 0x80800474: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800478: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080047C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800480: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800484: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800488: jal         0x8009FFD8
    // 0x8080048C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x8080048C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80800490: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800494: jal         0x8009B9B0
    // 0x80800498: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80800498: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x8080049C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808004A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808004A4: jr          $ra
    // 0x808004A8: nop

    return;
    // 0x808004A8: nop

;}
RECOMP_FUNC void func_808004AC_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808004B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808004B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808004B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808004BC: jal         0x8008CABC
    // 0x808004C0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808004C0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x808004C4: lui         $a1, 0x3E94
    ctx->r5 = S32(0X3E94 << 16);
    // 0x808004C8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x808004CC: ori         $a1, $a1, 0x7AE1
    ctx->r5 = ctx->r5 | 0X7AE1;
    // 0x808004D0: jal         0x8008B348
    // 0x808004D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B348(rdram, ctx);
        goto after_1;
    // 0x808004D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808004D8: beq         $v0, $zero, L_80800508
    if (ctx->r2 == 0) {
        // 0x808004DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800508;
    }
    // 0x808004DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004E0: lui         $a2, 0x3F73
    ctx->r6 = S32(0X3F73 << 16);
    // 0x808004E4: lui         $a3, 0x3F86
    ctx->r7 = S32(0X3F86 << 16);
    // 0x808004E8: addiu       $t6, $zero, 0x55F0
    ctx->r14 = ADD32(0, 0X55F0);
    // 0x808004EC: addiu       $t7, $zero, 0x55F0
    ctx->r15 = ADD32(0, 0X55F0);
    // 0x808004F0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x808004F4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808004F8: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x808004FC: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800500: jal         0x8009DEC0
    // 0x80800504: addiu       $a1, $zero, 0x583
    ctx->r5 = ADD32(0, 0X583);
    func_8009DEC0(rdram, ctx);
        goto after_2;
    // 0x80800504: addiu       $a1, $zero, 0x583
    ctx->r5 = ADD32(0, 0X583);
    after_2:
L_80800508:
    // 0x80800508: lui         $a1, 0x3F3D
    ctx->r5 = S32(0X3F3D << 16);
    // 0x8080050C: ori         $a1, $a1, 0x70A4
    ctx->r5 = ctx->r5 | 0X70A4;
    // 0x80800510: jal         0x8008B348
    // 0x80800514: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_3;
    // 0x80800514: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x80800518: beq         $v0, $zero, L_80800548
    if (ctx->r2 == 0) {
        // 0x8080051C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800548;
    }
    // 0x8080051C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800520: lui         $a2, 0x3F73
    ctx->r6 = S32(0X3F73 << 16);
    // 0x80800524: lui         $a3, 0x3F86
    ctx->r7 = S32(0X3F86 << 16);
    // 0x80800528: addiu       $t8, $zero, 0x55F0
    ctx->r24 = ADD32(0, 0X55F0);
    // 0x8080052C: addiu       $t9, $zero, 0x55F0
    ctx->r25 = ADD32(0, 0X55F0);
    // 0x80800530: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80800534: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80800538: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x8080053C: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800540: jal         0x8009DEC0
    // 0x80800544: addiu       $a1, $zero, 0x584
    ctx->r5 = ADD32(0, 0X584);
    func_8009DEC0(rdram, ctx);
        goto after_4;
    // 0x80800544: addiu       $a1, $zero, 0x584
    ctx->r5 = ADD32(0, 0X584);
    after_4:
L_80800548:
    // 0x80800548: lui         $a1, 0x3E0A
    ctx->r5 = S32(0X3E0A << 16);
    // 0x8080054C: ori         $a1, $a1, 0x57A8
    ctx->r5 = ctx->r5 | 0X57A8;
    // 0x80800550: jal         0x8008CB10
    // 0x80800554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_5;
    // 0x80800554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800558: beq         $v0, $zero, L_80800568
    if (ctx->r2 == 0) {
        // 0x8080055C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800568;
    }
    // 0x8080055C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800560: jal         0x8009BA58
    // 0x80800564: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8009BA58(rdram, ctx);
        goto after_6;
    // 0x80800564: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_6:
L_80800568:
    // 0x80800568: lui         $a1, 0x3F2C
    ctx->r5 = S32(0X3F2C << 16);
    // 0x8080056C: ori         $a1, $a1, 0xFAAD
    ctx->r5 = ctx->r5 | 0XFAAD;
    // 0x80800570: jal         0x8008CB10
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_7;
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800578: beq         $v0, $zero, L_80800594
    if (ctx->r2 == 0) {
        // 0x8080057C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800594;
    }
    // 0x8080057C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800580: jal         0x80084538
    // 0x80800584: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babackpack_set_state(rdram, ctx);
        goto after_8;
    // 0x80800584: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80800588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080058C: jal         0x800A0CD0
    // 0x80800590: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CD0(rdram, ctx);
        goto after_9;
    // 0x80800590: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
L_80800594:
    // 0x80800594: jal         0x8008CAEC
    // 0x80800598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_10;
    // 0x80800598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8080059C: beq         $v0, $zero, L_808005AC
    if (ctx->r2 == 0) {
        // 0x808005A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005AC;
    }
    // 0x808005A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005A4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x808005A8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_808005AC:
    // 0x808005AC: jal         0x8009E5C8
    // 0x808005B0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_11;
    // 0x808005B0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_11:
    // 0x808005B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808005B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808005BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808005C0: jr          $ra
    // 0x808005C4: nop

    return;
    // 0x808005C4: nop

;}
RECOMP_FUNC void bsbanshack_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005C8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808005CC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(66, 0XCC0) << 16);
    // 0x808005D0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808005D4: jr          $ra
    // 0x808005D8: lw          $v0, 0xCC0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(66, 0XCC0));
    return;
    // 0x808005D8: lw          $v0, 0xCC0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(66, 0XCC0));
;}
RECOMP_FUNC void func_808005DC_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808005E0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x808005E4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808005E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808005EC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x808005F0: beq         $a1, $zero, L_80800620
    if (ctx->r5 == 0) {
        // 0x808005F4: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_80800620;
    }
    // 0x808005F4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x808005F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808005FC: beq         $a1, $at, L_80800630
    if (ctx->r5 == ctx->r1) {
        // 0x80800600: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800630;
    }
    // 0x80800600: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800604: beq         $a1, $at, L_808006FC
    if (ctx->r5 == ctx->r1) {
        // 0x80800608: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_808006FC;
    }
    // 0x80800608: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080060C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800610: beq         $a1, $at, L_80800718
    if (ctx->r5 == ctx->r1) {
        // 0x80800614: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80800718;
    }
    // 0x80800614: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800618: b           L_8080072C
    // 0x8080061C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_8080072C;
    // 0x8080061C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_80800620:
    // 0x80800620: jal         0x8009BC6C
    // 0x80800624: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x80800624: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x80800628: b           L_8080072C
    // 0x8080062C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_8080072C;
    // 0x8080062C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_80800630:
    // 0x80800630: jal         0x8008CABC
    // 0x80800634: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008CABC(rdram, ctx);
        goto after_1;
    // 0x80800634: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80800638: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8080063C: sw          $zero, 0x160($s1)
    MEM_W(0X160, ctx->r17) = 0;
    // 0x80800640: jal         0x8008AF24
    // 0x80800644: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x80800644: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80800648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080064C: jal         0x8008AED4
    // 0x80800650: addiu       $a1, $zero, 0x294
    ctx->r5 = ADD32(0, 0X294);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x80800650: addiu       $a1, $zero, 0x294
    ctx->r5 = ADD32(0, 0X294);
    after_3:
    // 0x80800654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800658: jal         0x8008B1BC
    // 0x8080065C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_4;
    // 0x8080065C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_4:
    // 0x80800660: lui         $a1, 0x3E09
    ctx->r5 = S32(0X3E09 << 16);
    // 0x80800664: ori         $a1, $a1, 0x374C
    ctx->r5 = ctx->r5 | 0X374C;
    // 0x80800668: jal         0x8008B1C8
    // 0x8080066C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1C8(rdram, ctx);
        goto after_5;
    // 0x8080066C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800670: lui         $a1, 0x3E0F
    ctx->r5 = S32(0X3E0F << 16);
    // 0x80800674: ori         $a1, $a1, 0x5C29
    ctx->r5 = ctx->r5 | 0X5C29;
    // 0x80800678: jal         0x8008B24C
    // 0x8080067C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_6;
    // 0x8080067C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800680: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80800684: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080068C: jal         0x8008B1D4
    // 0x80800690: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_7;
    // 0x80800690: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_7:
    // 0x80800694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800698: jal         0x8008B134
    // 0x8080069C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x8080069C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x808006A0: jal         0x8008B064
    // 0x808006A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_9;
    // 0x808006A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808006A8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x808006AC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x808006B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808006B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808006B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808006BC: jal         0x8009FFD8
    // 0x808006C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_10;
    // 0x808006C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x808006C4: lui         $a1, 0x4418
    ctx->r5 = S32(0X4418 << 16);
    // 0x808006C8: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x808006CC: jal         0x8009BA58
    // 0x808006D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BA58(rdram, ctx);
        goto after_11;
    // 0x808006D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x808006D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808006D8: jal         0x8009BCB4
    // 0x808006DC: lui         $a1, 0xC47A
    ctx->r5 = S32(0XC47A << 16);
    func_8009BCB4(rdram, ctx);
        goto after_12;
    // 0x808006DC: lui         $a1, 0xC47A
    ctx->r5 = S32(0XC47A << 16);
    after_12:
    // 0x808006E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808006E4: addiu       $a1, $zero, 0x589
    ctx->r5 = ADD32(0, 0X589);
    // 0x808006E8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808006EC: jal         0x8009DF18
    // 0x808006F0: addiu       $a3, $zero, 0x3A98
    ctx->r7 = ADD32(0, 0X3A98);
    func_8009DF18(rdram, ctx);
        goto after_13;
    // 0x808006F0: addiu       $a3, $zero, 0x3A98
    ctx->r7 = ADD32(0, 0X3A98);
    after_13:
    // 0x808006F4: b           L_8080072C
    // 0x808006F8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_8080072C;
    // 0x808006F8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_808006FC:
    // 0x808006FC: lui         $a1, 0x3F4F
    ctx->r5 = S32(0X3F4F << 16);
    // 0x80800700: lui         $a2, 0x404C
    ctx->r6 = S32(0X404C << 16);
    // 0x80800704: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800708: jal         0x8008CF1C
    // 0x8080070C: ori         $a1, $a1, 0x5C29
    ctx->r5 = ctx->r5 | 0X5C29;
    func_8008CF1C(rdram, ctx);
        goto after_14;
    // 0x8080070C: ori         $a1, $a1, 0x5C29
    ctx->r5 = ctx->r5 | 0X5C29;
    after_14:
    // 0x80800710: b           L_8080072C
    // 0x80800714: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_8080072C;
    // 0x80800714: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_80800718:
    // 0x80800718: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x8080071C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800720: jal         0x8008CF1C
    // 0x80800724: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_15;
    // 0x80800724: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_15:
    // 0x80800728: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_8080072C:
    // 0x8080072C: sb          $t8, 0x15C($s1)
    MEM_B(0X15C, ctx->r17) = ctx->r24;
    // 0x80800730: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800734: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800738: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8080073C: jr          $ra
    // 0x80800740: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80800740: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80800744_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800744: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800748: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080074C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800750: jal         0x800005DC
    // 0x80800754: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_808005DC_bsbanshack(rdram, ctx);
        goto after_0;
    // 0x80800754: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800758: jal         0x80000164
    // 0x8080075C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800164_bsbanshack(rdram, ctx);
        goto after_1;
    // 0x8080075C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800768: jr          $ra
    // 0x8080076C: nop

    return;
    // 0x8080076C: nop

;}
RECOMP_FUNC void func_80800770_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800774: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800778: jal         0x8000021C
    // 0x8080077C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8080021C_bsbanshack(rdram, ctx);
        goto after_0;
    // 0x8080077C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800780: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800784: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800788: jal         0x800005DC
    // 0x8080078C: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
    func_808005DC_bsbanshack(rdram, ctx);
        goto after_1;
    // 0x8080078C: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
    after_1:
    // 0x80800790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800798: jr          $ra
    // 0x8080079C: nop

    return;
    // 0x8080079C: nop

;}
RECOMP_FUNC void func_808007A0_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808007A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808007A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808007AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808007B0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x808007B4: jal         0x80091A30
    // 0x808007B8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_0;
    // 0x808007B8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x808007BC: beql        $v0, $zero, L_808007F0
    if (ctx->r2 == 0) {
        // 0x808007C0: lbu         $v0, 0x15C($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X15C);
            goto L_808007F0;
    }
    goto skip_0;
    // 0x808007C0: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
    skip_0:
    // 0x808007C4: jal         0x8009BB50
    // 0x808007C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_1;
    // 0x808007C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808007CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808007D0: nop

    // 0x808007D4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x808007D8: nop

    // 0x808007DC: bc1fl       L_808007F0
    if (!c1cs) {
        // 0x808007E0: lbu         $v0, 0x15C($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X15C);
            goto L_808007F0;
    }
    goto skip_1;
    // 0x808007E0: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
    skip_1:
    // 0x808007E4: jal         0x8009BC6C
    // 0x808007E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_2;
    // 0x808007E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808007EC: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
L_808007F0:
    // 0x808007F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808007F4: beq         $v0, $at, L_80800814
    if (ctx->r2 == ctx->r1) {
        // 0x808007F8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800814;
    }
    // 0x808007F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808007FC: beq         $v0, $at, L_80800858
    if (ctx->r2 == ctx->r1) {
        // 0x80800800: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800858;
    }
    // 0x80800800: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800804: beq         $v0, $at, L_80800884
    if (ctx->r2 == ctx->r1) {
        // 0x80800808: nop
    
            goto L_80800884;
    }
    // 0x80800808: nop

    // 0x8080080C: b           L_808008E0
    // 0x80800810: nop

        goto L_808008E0;
    // 0x80800810: nop

L_80800814:
    // 0x80800814: jal         0x80000100
    // 0x80800818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800100_bsbanshack(rdram, ctx);
        goto after_3;
    // 0x80800818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080081C: jal         0x8008CAEC
    // 0x80800820: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_4;
    // 0x80800820: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800824: beq         $v0, $zero, L_80800834
    if (ctx->r2 == 0) {
        // 0x80800828: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800834;
    }
    // 0x80800828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080082C: jal         0x800005DC
    // 0x80800830: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_808005DC_bsbanshack(rdram, ctx);
        goto after_5;
    // 0x80800830: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
L_80800834:
    // 0x80800834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800838: jal         0x8008DF8C
    // 0x8080083C: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    func_8008DF8C(rdram, ctx);
        goto after_6;
    // 0x8080083C: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_6:
    // 0x80800840: beq         $v0, $zero, L_808008E0
    if (ctx->r2 == 0) {
        // 0x80800844: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008E0;
    }
    // 0x80800844: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800848: jal         0x800005DC
    // 0x8080084C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_808005DC_bsbanshack(rdram, ctx);
        goto after_7;
    // 0x8080084C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x80800850: b           L_808008E0
    // 0x80800854: nop

        goto L_808008E0;
    // 0x80800854: nop

L_80800858:
    // 0x80800858: jal         0x80000100
    // 0x8080085C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800100_bsbanshack(rdram, ctx);
        goto after_8;
    // 0x8080085C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800864: jal         0x8008DF8C
    // 0x80800868: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    func_8008DF8C(rdram, ctx);
        goto after_9;
    // 0x80800868: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_9:
    // 0x8080086C: beq         $v0, $zero, L_808008E0
    if (ctx->r2 == 0) {
        // 0x80800870: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008E0;
    }
    // 0x80800870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800874: jal         0x800005DC
    // 0x80800878: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_808005DC_bsbanshack(rdram, ctx);
        goto after_10;
    // 0x80800878: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x8080087C: b           L_808008E0
    // 0x80800880: nop

        goto L_808008E0;
    // 0x80800880: nop

L_80800884:
    // 0x80800884: jal         0x8008E078
    // 0x80800888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_11;
    // 0x80800888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8080088C: beq         $v0, $zero, L_808008E0
    if (ctx->r2 == 0) {
        // 0x80800890: nop
    
            goto L_808008E0;
    }
    // 0x80800890: nop

    // 0x80800894: lw          $v0, 0x160($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X160);
    // 0x80800898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080089C: bne         $v0, $zero, L_808008AC
    if (ctx->r2 != 0) {
        // 0x808008A0: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_808008AC;
    }
    // 0x808008A0: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x808008A4: jal         0x8009FE58
    // 0x808008A8: sw          $t6, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r14;
    func_8009FE58(rdram, ctx);
        goto after_12;
    // 0x808008A8: sw          $t6, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r14;
    after_12:
L_808008AC:
    // 0x808008AC: jal         0x8008CAEC
    // 0x808008B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_13;
    // 0x808008B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808008B4: beq         $v0, $zero, L_808008C4
    if (ctx->r2 == 0) {
        // 0x808008B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008C4;
    }
    // 0x808008B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008BC: addiu       $t7, $zero, 0x16C
    ctx->r15 = ADD32(0, 0X16C);
    // 0x808008C0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_808008C4:
    // 0x808008C4: jal         0x80000074
    // 0x808008C8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_80800074_bsbanshack(rdram, ctx);
        goto after_14;
    // 0x808008C8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_14:
    // 0x808008CC: bne         $v0, $zero, L_808008E0
    if (ctx->r2 != 0) {
        // 0x808008D0: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_808008E0;
    }
    // 0x808008D0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x808008D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008D8: jal         0x8009B9B0
    // 0x808008DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_15;
    // 0x808008DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_15:
L_808008E0:
    // 0x808008E0: jal         0x8008E260
    // 0x808008E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_16;
    // 0x808008E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808008E8: beq         $v0, $zero, L_808008F8
    if (ctx->r2 == 0) {
        // 0x808008EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008F8;
    }
    // 0x808008EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008F0: addiu       $t8, $zero, 0x3D
    ctx->r24 = ADD32(0, 0X3D);
    // 0x808008F4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_808008F8:
    // 0x808008F8: jal         0x8009E5C8
    // 0x808008FC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_17;
    // 0x808008FC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_17:
    // 0x80800900: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800904: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800908: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080090C: jr          $ra
    // 0x80800910: nop

    return;
    // 0x80800910: nop

;}
RECOMP_FUNC void bsbanshack_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800914: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800918: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(66, 0XCD0) << 16);
    // 0x8080091C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800920: jr          $ra
    // 0x80800924: lw          $v0, 0xCD0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(66, 0XCD0));
    return;
    // 0x80800924: lw          $v0, 0xCD0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(66, 0XCD0));
;}
RECOMP_FUNC void func_80800928_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080092C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800930: jal         0x80000164
    // 0x80800934: nop

    func_80800164_bsbanshack(rdram, ctx);
        goto after_0;
    // 0x80800934: nop

    after_0:
    // 0x80800938: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080093C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800940: jr          $ra
    // 0x80800944: nop

    return;
    // 0x80800944: nop

;}
RECOMP_FUNC void func_80800948_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800948: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080094C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800950: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800954: jal         0x8000021C
    // 0x80800958: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8080021C_bsbanshack(rdram, ctx);
        goto after_0;
    // 0x80800958: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080095C: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80800960: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800968: jal         0x8008CB3C
    // 0x8080096C: addiu       $a1, $zero, 0x146
    ctx->r5 = ADD32(0, 0X146);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x8080096C: addiu       $a1, $zero, 0x146
    ctx->r5 = ADD32(0, 0X146);
    after_1:
    // 0x80800970: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800974: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080097C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800980: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800984: jal         0x8009FFD8
    // 0x80800988: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800988: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8080098C: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80800990: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800998: jal         0x8008C9BC
    // 0x8080099C: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_3;
    // 0x8080099C: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_3:
    // 0x808009A0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808009A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808009A8: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x808009AC: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x808009B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009B4: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x808009B8: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x808009BC: jal         0x8008C9F0
    // 0x808009C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_4;
    // 0x808009C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x808009C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009C8: jal         0x8008CA30
    // 0x808009CC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CA30(rdram, ctx);
        goto after_5;
    // 0x808009CC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_5:
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
RECOMP_FUNC void func_808009E4_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808009E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808009EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808009F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808009F4: jal         0x80000100
    // 0x808009F8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_80800100_bsbanshack(rdram, ctx);
        goto after_0;
    // 0x808009F8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808009FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A00: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    // 0x80800A04: jal         0x800A2CE8
    // 0x80800A08: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_1;
    // 0x80800A08: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x80800A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A10: lui         $a1, 0x3F40
    ctx->r5 = S32(0X3F40 << 16);
    // 0x80800A14: jal         0x800A2CE8
    // 0x80800A18: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_2;
    // 0x80800A18: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x80800A1C: lui         $a1, 0x3F02
    ctx->r5 = S32(0X3F02 << 16);
    // 0x80800A20: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    // 0x80800A24: jal         0x8008CB10
    // 0x80800A28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_3;
    // 0x80800A28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800A2C: beq         $v0, $zero, L_80800A6C
    if (ctx->r2 == 0) {
        // 0x80800A30: nop
    
            goto L_80800A6C;
    }
    // 0x80800A30: nop

    // 0x80800A34: jal         0x800DC0C0
    // 0x80800A38: nop

    func_800DC0C0(rdram, ctx);
        goto after_4;
    // 0x80800A38: nop

    after_4:
    // 0x80800A3C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800A40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800A44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A48: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800A4C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80800A50: addiu       $a1, $zero, 0x58B
    ctx->r5 = ADD32(0, 0X58B);
    // 0x80800A54: bc1f        L_80800A64
    if (!c1cs) {
        // 0x80800A58: nop
    
            goto L_80800A64;
    }
    // 0x80800A58: nop

    // 0x80800A5C: b           L_80800A64
    // 0x80800A60: addiu       $a1, $zero, 0x58A
    ctx->r5 = ADD32(0, 0X58A);
        goto L_80800A64;
    // 0x80800A60: addiu       $a1, $zero, 0x58A
    ctx->r5 = ADD32(0, 0X58A);
L_80800A64:
    // 0x80800A64: jal         0x8009DF18
    // 0x80800A68: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    func_8009DF18(rdram, ctx);
        goto after_5;
    // 0x80800A68: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    after_5:
L_80800A6C:
    // 0x80800A6C: jal         0x8009EF10
    // 0x80800A70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_6;
    // 0x80800A70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800A74: bne         $v0, $zero, L_80800A90
    if (ctx->r2 != 0) {
        // 0x80800A78: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A90;
    }
    // 0x80800A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A7C: jal         0x8009BCD4
    // 0x80800A80: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_7;
    // 0x80800A80: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_7:
    // 0x80800A84: beq         $v0, $zero, L_80800A90
    if (ctx->r2 == 0) {
        // 0x80800A88: addiu       $t6, $zero, 0x16C
        ctx->r14 = ADD32(0, 0X16C);
            goto L_80800A90;
    }
    // 0x80800A88: addiu       $t6, $zero, 0x16C
    ctx->r14 = ADD32(0, 0X16C);
    // 0x80800A8C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800A90:
    // 0x80800A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A94: jal         0x80000000
    // 0x80800A98: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_80800000_bsbanshack(rdram, ctx);
        goto after_8;
    // 0x80800A98: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x80800A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AA0: jal         0x8009E5C8
    // 0x80800AA4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_9;
    // 0x80800AA4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_9:
    // 0x80800AA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800AAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800AB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800AB4: jr          $ra
    // 0x80800AB8: nop

    return;
    // 0x80800AB8: nop

;}
RECOMP_FUNC void bsbanshack_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800ABC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800AC0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(66, 0XCE0) << 16);
    // 0x80800AC4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800AC8: jr          $ra
    // 0x80800ACC: lw          $v0, 0xCE0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(66, 0XCE0));
    return;
    // 0x80800ACC: lw          $v0, 0xCE0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(66, 0XCE0));
;}
RECOMP_FUNC void func_80800AD0_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800AD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800AD8: jal         0x80082FF0
    // 0x80800ADC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800ADC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800AE0: jal         0x80000164
    // 0x80800AE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800164_bsbanshack(rdram, ctx);
        goto after_1;
    // 0x80800AE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800AE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800AEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800AF0: jr          $ra
    // 0x80800AF4: nop

    return;
    // 0x80800AF4: nop

;}
RECOMP_FUNC void func_80800AF8_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800AFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B00: jal         0x8000021C
    // 0x80800B04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8080021C_bsbanshack(rdram, ctx);
        goto after_0;
    // 0x80800B04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800B08: jal         0x80082FE0
    // 0x80800B0C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800B0C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800B10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800B18: jr          $ra
    // 0x80800B1C: nop

    return;
    // 0x80800B1C: nop

;}
RECOMP_FUNC void func_80800B20_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800B24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B28: jal         0x80082FE8
    // 0x80800B2C: nop

    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800B2C: nop

    after_0:
    // 0x80800B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800B38: jr          $ra
    // 0x80800B3C: nop

    return;
    // 0x80800B3C: nop

;}
RECOMP_FUNC void bsbanshack_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B40: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800B44: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(66, 0XCF0) << 16);
    // 0x80800B48: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800B4C: jr          $ra
    // 0x80800B50: lw          $v0, 0xCF0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(66, 0XCF0));
    return;
    // 0x80800B50: lw          $v0, 0xCF0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(66, 0XCF0));
;}
RECOMP_FUNC void func_80800B54_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800B58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B5C: jal         0x800839B8
    // 0x80800B60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80800B60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800B64: jal         0x80000164
    // 0x80800B68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800164_bsbanshack(rdram, ctx);
        goto after_1;
    // 0x80800B68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800B6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800B74: jr          $ra
    // 0x80800B78: nop

    return;
    // 0x80800B78: nop

;}
RECOMP_FUNC void func_80800B7C_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800B80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B84: jal         0x8000021C
    // 0x80800B88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8080021C_bsbanshack(rdram, ctx);
        goto after_0;
    // 0x80800B88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800B8C: jal         0x800839C8
    // 0x80800B90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x80800B90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800B9C: jr          $ra
    // 0x80800BA0: nop

    return;
    // 0x80800BA0: nop

;}
RECOMP_FUNC void func_80800BA4_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800BA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BAC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800BB0: jal         0x800839E8
    // 0x80800BB4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x80800BB4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800BB8: beq         $v0, $zero, L_80800BC4
    if (ctx->r2 == 0) {
        // 0x80800BBC: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80800BC4;
    }
    // 0x80800BBC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800BC0: addiu       $a1, $zero, 0x16C
    ctx->r5 = ADD32(0, 0X16C);
L_80800BC4:
    // 0x80800BC4: jal         0x8009E5C8
    // 0x80800BC8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_1;
    // 0x80800BC8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800BCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800BD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800BD4: jr          $ra
    // 0x80800BD8: nop

    return;
    // 0x80800BD8: nop

;}
RECOMP_FUNC void bsbanshack_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BDC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800BE0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(66, 0XD00) << 16);
    // 0x80800BE4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800BE8: jr          $ra
    // 0x80800BEC: lw          $v0, 0xD00($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(66, 0XD00));
    return;
    // 0x80800BEC: lw          $v0, 0xD00($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(66, 0XD00));
;}
RECOMP_FUNC void func_80800BF0_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800BF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BF8: jal         0x80000164
    // 0x80800BFC: nop

    func_80800164_bsbanshack(rdram, ctx);
        goto after_0;
    // 0x80800BFC: nop

    after_0:
    // 0x80800C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C08: jr          $ra
    // 0x80800C0C: nop

    return;
    // 0x80800C0C: nop

;}
RECOMP_FUNC void func_80800C10_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800C14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800C18: jal         0x8000021C
    // 0x80800C1C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8080021C_bsbanshack(rdram, ctx);
        goto after_0;
    // 0x80800C1C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800C20: lui         $a2, 0x40AC
    ctx->r6 = S32(0X40AC << 16);
    // 0x80800C24: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800C28: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800C2C: jal         0x8008CB3C
    // 0x80800C30: addiu       $a1, $zero, 0x293
    ctx->r5 = ADD32(0, 0X293);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80800C30: addiu       $a1, $zero, 0x293
    ctx->r5 = ADD32(0, 0X293);
    after_1:
    // 0x80800C34: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800C38: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800C3C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800C40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800C44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800C48: jal         0x8009FFD8
    // 0x80800C4C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800C4C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80800C50: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800C54: jal         0x8009B9B0
    // 0x80800C58: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80800C58: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800C5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800C60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800C64: jr          $ra
    // 0x80800C68: nop

    return;
    // 0x80800C68: nop

;}
RECOMP_FUNC void func_80800C6C_bsbanshack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800C70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800C74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800C78: jal         0x80000074
    // 0x80800C7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800074_bsbanshack(rdram, ctx);
        goto after_0;
    // 0x80800C7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800C80: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800C84: jal         0x8009E5C8
    // 0x80800C88: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_1;
    // 0x80800C88: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x80800C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C94: jr          $ra
    // 0x80800C98: nop

    return;
    // 0x80800C98: nop

;}
RECOMP_FUNC void bsbanshack_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C9C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800CA0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(66, 0XD10) << 16);
    // 0x80800CA4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800CA8: jr          $ra
    // 0x80800CAC: lw          $v0, 0xD10($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(66, 0XD10));
    return;
    // 0x80800CAC: lw          $v0, 0xD10($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(66, 0XD10));
;}
RECOMP_FUNC void func_80800000_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800014: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x80800014: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_0:
    // 0x80800018: beq         $v0, $zero, L_80800044
    if (ctx->r2 == 0) {
        // 0x8080001C: nop
    
            goto L_80800044;
    }
    // 0x8080001C: nop

    // 0x80800020: jal         0x80084508
    // 0x80800024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babackpack_get_state(rdram, ctx);
        goto after_1;
    // 0x80800024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800028: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8080002C: beq         $v0, $at, L_80800084
    if (ctx->r2 == ctx->r1) {
        // 0x80800030: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800084;
    }
    // 0x80800030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800034: jal         0x80084538
    // 0x80800038: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    _babackpack_set_state(rdram, ctx);
        goto after_2;
    // 0x80800038: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x8080003C: b           L_80800088
    // 0x80800040: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800088;
    // 0x80800040: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800044:
    // 0x80800044: jal         0x80084508
    // 0x80800048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babackpack_get_state(rdram, ctx);
        goto after_3;
    // 0x80800048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080004C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800050: beq         $v0, $at, L_80800060
    if (ctx->r2 == ctx->r1) {
        // 0x80800054: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800060;
    }
    // 0x80800054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800058: jal         0x80084538
    // 0x8080005C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babackpack_set_state(rdram, ctx);
        goto after_4;
    // 0x8080005C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_80800060:
    // 0x80800060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800064: jal         0x800A0CD0
    // 0x80800068: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CD0(rdram, ctx);
        goto after_5;
    // 0x80800068: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8080006C: jal         0x80095A40
    // 0x80800070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095A40(rdram, ctx);
        goto after_6;
    // 0x80800070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800074: jal         0x8009EF60
    // 0x80800078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF60(rdram, ctx);
        goto after_7;
    // 0x80800078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080007C: jal         0x800A4E30
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4E30(rdram, ctx);
        goto after_8;
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_80800084:
    // 0x80800084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800088:
    // 0x80800088: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080008C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800090: jr          $ra
    // 0x80800094: nop

    return;
    // 0x80800094: nop

;}
RECOMP_FUNC void func_80800098_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800098: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080009C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000A8: jal         0x8009E77C
    // 0x808000AC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_8009E77C(rdram, ctx);
        goto after_0;
    // 0x808000AC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_0:
    // 0x808000B0: bne         $v0, $zero, L_80800114
    if (ctx->r2 != 0) {
        // 0x808000B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800114;
    }
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B8: jal         0x800A0CD0
    // 0x808000BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CD0(rdram, ctx);
        goto after_1;
    // 0x808000BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C4: jal         0x80084538
    // 0x808000C8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    _babackpack_set_state(rdram, ctx);
        goto after_2;
    // 0x808000C8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x808000CC: jal         0x8009EFA8
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EFA8(rdram, ctx);
        goto after_3;
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808000D4: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x808000D8: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E0: jal         0x8009F1C8
    // 0x808000E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_4;
    // 0x808000E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000F0: jal         0x8009F1C8
    // 0x808000F4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_5;
    // 0x808000F4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_5:
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000FC: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x80800100: jal         0x800959C8
    // 0x80800104: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    func_800959C8(rdram, ctx);
        goto after_6;
    // 0x80800104: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    after_6:
    // 0x80800108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080010C: jal         0x800A4DA4
    // 0x80800110: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800A4DA4(rdram, ctx);
        goto after_7;
    // 0x80800110: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_7:
L_80800114:
    // 0x80800114: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800118: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080011C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800120: jr          $ra
    // 0x80800124: nop

    return;
    // 0x80800124: nop

;}
RECOMP_FUNC void func_80800128_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800128: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080012C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800130: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800134: jal         0x8009EF1C
    // 0x80800138: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x80800138: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8080013C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80800140: jal         0x8009EF10
    // 0x80800144: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x80800144: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800148: bne         $v0, $zero, L_80800164
    if (ctx->r2 != 0) {
        // 0x8080014C: lwc1        $f12, 0x1C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_80800164;
    }
    // 0x8080014C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80800150: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800154: jal         0x8009B9B0
    // 0x80800158: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800158: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x8080015C: b           L_80800190
    // 0x80800160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800190;
    // 0x80800160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800164:
    // 0x80800164: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80800168: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8080016C: jal         0x800F1214
    // 0x80800170: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x80800170: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    after_3:
    // 0x80800174: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80800178: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080017C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80800180: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80800184: jal         0x8009B9B0
    // 0x80800188: nop

    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800188: nop

    after_4:
    // 0x8080018C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800190:
    // 0x80800190: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800194: jr          $ra
    // 0x80800198: nop

    return;
    // 0x80800198: nop

;}
RECOMP_FUNC void func_8080019C_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080019C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001A4: lbu         $t6, 0x15D($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X15D);
    // 0x808001A8: beq         $t6, $zero, L_808001C0
    if (ctx->r14 == 0) {
        // 0x808001AC: nop
    
            goto L_808001C0;
    }
    // 0x808001AC: nop

    // 0x808001B0: jal         0x80000000
    // 0x808001B4: nop

    func_80800000_bsbansnooze(rdram, ctx);
        goto after_0;
    // 0x808001B4: nop

    after_0:
    // 0x808001B8: b           L_808001F0
    // 0x808001BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808001F0;
    // 0x808001BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808001C0:
    // 0x808001C0: jal         0x80084508
    // 0x808001C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babackpack_get_state(rdram, ctx);
        goto after_1;
    // 0x808001C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x808001C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808001CC: beq         $v0, $at, L_808001EC
    if (ctx->r2 == ctx->r1) {
        // 0x808001D0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808001EC;
    }
    // 0x808001D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808001D8: jal         0x800A0CD0
    // 0x808001DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A0CD0(rdram, ctx);
        goto after_2;
    // 0x808001DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x808001E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001E4: jal         0x80084538
    // 0x808001E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babackpack_set_state(rdram, ctx);
        goto after_3;
    // 0x808001E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_808001EC:
    // 0x808001EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808001F0:
    // 0x808001F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001F4: jr          $ra
    // 0x808001F8: nop

    return;
    // 0x808001F8: nop

;}
RECOMP_FUNC void func_808001FC_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800200: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800204: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800208: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080020C: sb          $zero, 0x15D($a0)
    MEM_B(0X15D, ctx->r4) = 0;
    // 0x80800210: addiu       $a1, $zero, 0x276
    ctx->r5 = ADD32(0, 0X276);
    // 0x80800214: jal         0x8008CCBC
    // 0x80800218: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_0;
    // 0x80800218: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_0:
    // 0x8080021C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800220: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800228: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080022C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800230: jal         0x8009FFD8
    // 0x80800234: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800234: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080023C: jal         0x8009B9B0
    // 0x80800240: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800240: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800248: addiu       $a1, $zero, 0x583
    ctx->r5 = ADD32(0, 0X583);
    // 0x8080024C: jal         0x8009DE38
    // 0x80800250: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_3;
    // 0x80800250: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
    // 0x80800254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800258: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080025C: jal         0x80098140
    // 0x80800260: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098140(rdram, ctx);
        goto after_4;
    // 0x80800260: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80800264: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800268: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080026C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800270: jr          $ra
    // 0x80800274: nop

    return;
    // 0x80800274: nop

;}
RECOMP_FUNC void func_80800278_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800278: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080027C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800280: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800284: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800288: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8080028C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800290: jal         0x80098140
    // 0x80800294: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098140(rdram, ctx);
        goto after_0;
    // 0x80800294: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80800298: lui         $a1, 0x3E38
    ctx->r5 = S32(0X3E38 << 16);
    // 0x8080029C: ori         $a1, $a1, 0x51EC
    ctx->r5 = ctx->r5 | 0X51EC;
    // 0x808002A0: jal         0x8008CB10
    // 0x808002A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_1;
    // 0x808002A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808002A8: beq         $v0, $zero, L_808002BC
    if (ctx->r2 == 0) {
        // 0x808002AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002BC;
    }
    // 0x808002AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002B0: addiu       $a1, $zero, 0x58C
    ctx->r5 = ADD32(0, 0X58C);
    // 0x808002B4: jal         0x8009DF58
    // 0x808002B8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DF58(rdram, ctx);
        goto after_2;
    // 0x808002B8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_2:
L_808002BC:
    // 0x808002BC: lui         $a1, 0x3E61
    ctx->r5 = S32(0X3E61 << 16);
    // 0x808002C0: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    // 0x808002C4: jal         0x8008CB10
    // 0x808002C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_3;
    // 0x808002C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808002CC: beq         $v0, $zero, L_808002E4
    if (ctx->r2 == 0) {
        // 0x808002D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002E4;
    }
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002D4: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    // 0x808002D8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808002DC: jal         0x8009DB04
    // 0x808002E0: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DB04(rdram, ctx);
        goto after_4;
    // 0x808002E0: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_4:
L_808002E4:
    // 0x808002E4: lui         $a1, 0x3DF2
    ctx->r5 = S32(0X3DF2 << 16);
    // 0x808002E8: ori         $a1, $a1, 0x7BB3
    ctx->r5 = ctx->r5 | 0X7BB3;
    // 0x808002EC: jal         0x8008CB10
    // 0x808002F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_5;
    // 0x808002F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808002F4: beq         $v0, $zero, L_80800310
    if (ctx->r2 == 0) {
        // 0x808002F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800310;
    }
    // 0x808002F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002FC: jal         0x800A0CD0
    // 0x80800300: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CD0(rdram, ctx);
        goto after_6;
    // 0x80800300: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80800304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800308: jal         0x80084538
    // 0x8080030C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _babackpack_set_state(rdram, ctx);
        goto after_7;
    // 0x8080030C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
L_80800310:
    // 0x80800310: lui         $a1, 0x3EBD
    ctx->r5 = S32(0X3EBD << 16);
    // 0x80800314: ori         $a1, $a1, 0x97F6
    ctx->r5 = ctx->r5 | 0X97F6;
    // 0x80800318: jal         0x8008CB10
    // 0x8080031C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_8;
    // 0x8080031C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800320: beq         $v0, $zero, L_80800334
    if (ctx->r2 == 0) {
        // 0x80800324: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80800334;
    }
    // 0x80800324: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800328: sb          $t6, 0x15D($s0)
    MEM_B(0X15D, ctx->r16) = ctx->r14;
    // 0x8080032C: jal         0x80000098
    // 0x80800330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800098_bsbansnooze(rdram, ctx);
        goto after_9;
    // 0x80800330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_80800334:
    // 0x80800334: jal         0x8008CAEC
    // 0x80800338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_10;
    // 0x80800338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8080033C: beq         $v0, $zero, L_8080034C
    if (ctx->r2 == 0) {
        // 0x80800340: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080034C;
    }
    // 0x80800340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800344: addiu       $t7, $zero, 0x16F
    ctx->r15 = ADD32(0, 0X16F);
    // 0x80800348: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_8080034C:
    // 0x8080034C: jal         0x8009E5C8
    // 0x80800350: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_11;
    // 0x80800350: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_11:
    // 0x80800354: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800358: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080035C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800360: jr          $ra
    // 0x80800364: nop

    return;
    // 0x80800364: nop

;}
RECOMP_FUNC void bsbansnooze_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800368: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080036C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(67, 0XA40) << 16);
    // 0x80800370: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800374: jr          $ra
    // 0x80800378: lw          $v0, 0xA40($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(67, 0XA40));
    return;
    // 0x80800378: lw          $v0, 0xA40($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(67, 0XA40));
;}
RECOMP_FUNC void func_8080037C_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080037C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800380: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800384: jal         0x80000000
    // 0x80800388: nop

    func_80800000_bsbansnooze(rdram, ctx);
        goto after_0;
    // 0x80800388: nop

    after_0:
    // 0x8080038C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800394: jr          $ra
    // 0x80800398: nop

    return;
    // 0x80800398: nop

;}
RECOMP_FUNC void func_8080039C_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080039C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808003A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808003A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808003A8: jal         0x80000098
    // 0x808003AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800098_bsbansnooze(rdram, ctx);
        goto after_0;
    // 0x808003AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808003B0: lui         $a2, 0x3FCC
    ctx->r6 = S32(0X3FCC << 16);
    // 0x808003B4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808003B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003BC: jal         0x8008CCBC
    // 0x808003C0: addiu       $a1, $zero, 0x279
    ctx->r5 = ADD32(0, 0X279);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x808003C0: addiu       $a1, $zero, 0x279
    ctx->r5 = ADD32(0, 0X279);
    after_1:
    // 0x808003C4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808003C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808003CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808003D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808003D8: jal         0x8009FFD8
    // 0x808003DC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x808003DC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x808003E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003E4: jal         0x8009B9B0
    // 0x808003E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x808003E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x808003EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003F0: addiu       $a1, $zero, 0x58D
    ctx->r5 = ADD32(0, 0X58D);
    // 0x808003F4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808003F8: jal         0x8009DF94
    // 0x808003FC: addiu       $a3, $zero, 0x7530
    ctx->r7 = ADD32(0, 0X7530);
    func_8009DF94(rdram, ctx);
        goto after_4;
    // 0x808003FC: addiu       $a3, $zero, 0x7530
    ctx->r7 = ADD32(0, 0X7530);
    after_4:
    // 0x80800400: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800404: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800408: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080040C: jr          $ra
    // 0x80800410: nop

    return;
    // 0x80800410: nop

;}
RECOMP_FUNC void func_80800414_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800414: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800418: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080041C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800420: lui         $a1, 0x3F45
    ctx->r5 = S32(0X3F45 << 16);
    // 0x80800424: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800428: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8080042C: jal         0x8008CB10
    // 0x80800430: ori         $a1, $a1, 0x1EB8
    ctx->r5 = ctx->r5 | 0X1EB8;
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x80800430: ori         $a1, $a1, 0x1EB8
    ctx->r5 = ctx->r5 | 0X1EB8;
    after_0:
    // 0x80800434: beq         $v0, $zero, L_8080044C
    if (ctx->r2 == 0) {
        // 0x80800438: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080044C;
    }
    // 0x80800438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080043C: lui         $a2, 0x3F8C
    ctx->r6 = S32(0X3F8C << 16);
    // 0x80800440: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800444: jal         0x8009DE38
    // 0x80800448: addiu       $a1, $zero, 0x584
    ctx->r5 = ADD32(0, 0X584);
    func_8009DE38(rdram, ctx);
        goto after_1;
    // 0x80800448: addiu       $a1, $zero, 0x584
    ctx->r5 = ADD32(0, 0X584);
    after_1:
L_8080044C:
    // 0x8080044C: lui         $a1, 0x3F27
    ctx->r5 = S32(0X3F27 << 16);
    // 0x80800450: ori         $a1, $a1, 0xD567
    ctx->r5 = ctx->r5 | 0XD567;
    // 0x80800454: jal         0x8008CB10
    // 0x80800458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x80800458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080045C: beq         $v0, $zero, L_80800478
    if (ctx->r2 == 0) {
        // 0x80800460: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800478;
    }
    // 0x80800460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800464: jal         0x80084538
    // 0x80800468: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babackpack_set_state(rdram, ctx);
        goto after_3;
    // 0x80800468: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8080046C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800470: jal         0x800A0CD0
    // 0x80800474: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CD0(rdram, ctx);
        goto after_4;
    // 0x80800474: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_80800478:
    // 0x80800478: jal         0x8008CAEC
    // 0x8080047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_5;
    // 0x8080047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800480: beq         $v0, $zero, L_80800490
    if (ctx->r2 == 0) {
        // 0x80800484: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800490;
    }
    // 0x80800484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800488: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8080048C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800490:
    // 0x80800490: jal         0x8009E5C8
    // 0x80800494: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x80800494: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x80800498: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080049C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808004A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808004A4: jr          $ra
    // 0x808004A8: nop

    return;
    // 0x808004A8: nop

;}
RECOMP_FUNC void bsbansnooze_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004AC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808004B0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(67, 0XA50) << 16);
    // 0x808004B4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808004B8: jr          $ra
    // 0x808004BC: lw          $v0, 0xA50($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(67, 0XA50));
    return;
    // 0x808004BC: lw          $v0, 0xA50($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(67, 0XA50));
;}
RECOMP_FUNC void func_808004C0_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004C8: jal         0x80000000
    // 0x808004CC: nop

    func_80800000_bsbansnooze(rdram, ctx);
        goto after_0;
    // 0x808004CC: nop

    after_0:
    // 0x808004D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004D8: jr          $ra
    // 0x808004DC: nop

    return;
    // 0x808004DC: nop

;}
RECOMP_FUNC void func_808004E0_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808004E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808004E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808004EC: jal         0x80000098
    // 0x808004F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800098_bsbansnooze(rdram, ctx);
        goto after_0;
    // 0x808004F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808004F4: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x808004F8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808004FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800500: jal         0x8008CB3C
    // 0x80800504: addiu       $a1, $zero, 0x278
    ctx->r5 = ADD32(0, 0X278);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80800504: addiu       $a1, $zero, 0x278
    ctx->r5 = ADD32(0, 0X278);
    after_1:
    // 0x80800508: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x8080050C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800514: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800518: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8080051C: jal         0x8009FFD8
    // 0x80800520: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800520: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_2:
    // 0x80800524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800528: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x8080052C: jal         0x8009C99C
    // 0x80800530: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x80800530: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    after_3:
    // 0x80800534: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80800538: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8080053C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800540: jal         0x8008C9BC
    // 0x80800544: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_4;
    // 0x80800544: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_4:
    // 0x80800548: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(67, 0XA30) << 16);
    // 0x8080054C: lwc1        $f0, 0xA30($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(67, 0XA30));
    // 0x80800550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800554: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x80800558: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8080055C: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x80800560: jal         0x8008C9F0
    // 0x80800564: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_5;
    // 0x80800564: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x80800568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080056C: jal         0x8008CA30
    // 0x80800570: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CA30(rdram, ctx);
        goto after_6;
    // 0x80800570: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_6:
    // 0x80800574: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800578: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080057C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800580: jr          $ra
    // 0x80800584: nop

    return;
    // 0x80800584: nop

;}
RECOMP_FUNC void func_80800588_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800588: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080058C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800590: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800594: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800598: jal         0x8008CABC
    // 0x8080059C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080059C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    after_0:
    // 0x808005A0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x808005A4: jal         0x8008B2B4
    // 0x808005A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B2B4(rdram, ctx);
        goto after_1;
    // 0x808005A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808005AC: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(67, 0XA60) << 16);
    // 0x808005B0: addiu       $a1, $a1, 0xA60
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(67, 0XA60));
    // 0x808005B4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x808005B8: jal         0x800F3780
    // 0x808005BC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800F3780(rdram, ctx);
        goto after_2;
    // 0x808005BC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x808005C0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808005C4: jal         0x80000128
    // 0x808005C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800128_bsbansnooze(rdram, ctx);
        goto after_3;
    // 0x808005C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808005CC: jal         0x8009EF10
    // 0x808005D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_4;
    // 0x808005D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808005D4: bne         $v0, $zero, L_808005F0
    if (ctx->r2 != 0) {
        // 0x808005D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005F0;
    }
    // 0x808005D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005DC: jal         0x8009BCD4
    // 0x808005E0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_5;
    // 0x808005E0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_5:
    // 0x808005E4: beql        $v0, $zero, L_808005F4
    if (ctx->r2 == 0) {
        // 0x808005E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005F4;
    }
    goto skip_0;
    // 0x808005E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808005EC: addiu       $s1, $zero, 0x16F
    ctx->r17 = ADD32(0, 0X16F);
L_808005F0:
    // 0x808005F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808005F4:
    // 0x808005F4: jal         0x80091A30
    // 0x808005F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A30(rdram, ctx);
        goto after_6;
    // 0x808005F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x808005FC: beq         $v0, $zero, L_80800608
    if (ctx->r2 == 0) {
        // 0x80800600: nop
    
            goto L_80800608;
    }
    // 0x80800600: nop

    // 0x80800604: addiu       $s1, $zero, 0x172
    ctx->r17 = ADD32(0, 0X172);
L_80800608:
    // 0x80800608: jal         0x8008E35C
    // 0x8080060C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_7;
    // 0x8080060C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800610: beq         $v0, $zero, L_8080061C
    if (ctx->r2 == 0) {
        // 0x80800614: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080061C;
    }
    // 0x80800614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800618: addiu       $s1, $zero, 0x4C
    ctx->r17 = ADD32(0, 0X4C);
L_8080061C:
    // 0x8080061C: jal         0x8009E5C8
    // 0x80800620: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_8;
    // 0x80800620: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
    // 0x80800624: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800628: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8080062C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800630: jr          $ra
    // 0x80800634: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800634: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bsbansnooze_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800638: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080063C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(67, 0XA78) << 16);
    // 0x80800640: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800644: jr          $ra
    // 0x80800648: lw          $v0, 0xA78($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(67, 0XA78));
    return;
    // 0x80800648: lw          $v0, 0xA78($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(67, 0XA78));
;}
RECOMP_FUNC void func_8080064C_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080064C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800650: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800654: jal         0x80082FF0
    // 0x80800658: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800658: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080065C: jal         0x80000000
    // 0x80800660: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800000_bsbansnooze(rdram, ctx);
        goto after_1;
    // 0x80800660: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800668: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080066C: jr          $ra
    // 0x80800670: nop

    return;
    // 0x80800670: nop

;}
RECOMP_FUNC void func_80800674_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800674: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800678: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080067C: jal         0x80000098
    // 0x80800680: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800098_bsbansnooze(rdram, ctx);
        goto after_0;
    // 0x80800680: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800684: jal         0x80082FE0
    // 0x80800688: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800688: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080068C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800694: jr          $ra
    // 0x80800698: nop

    return;
    // 0x80800698: nop

;}
RECOMP_FUNC void func_8080069C_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080069C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808006A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808006A4: jal         0x80082FE8
    // 0x808006A8: nop

    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808006A8: nop

    after_0:
    // 0x808006AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808006B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808006B4: jr          $ra
    // 0x808006B8: nop

    return;
    // 0x808006B8: nop

;}
RECOMP_FUNC void bsbansnooze_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006BC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808006C0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(67, 0XA88) << 16);
    // 0x808006C4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808006C8: jr          $ra
    // 0x808006CC: lw          $v0, 0xA88($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(67, 0XA88));
    return;
    // 0x808006CC: lw          $v0, 0xA88($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(67, 0XA88));
;}
RECOMP_FUNC void func_808006D0_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808006D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808006D8: jal         0x800839B8
    // 0x808006DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x808006DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808006E0: jal         0x80000000
    // 0x808006E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800000_bsbansnooze(rdram, ctx);
        goto after_1;
    // 0x808006E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808006E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808006EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808006F0: jr          $ra
    // 0x808006F4: nop

    return;
    // 0x808006F4: nop

;}
RECOMP_FUNC void func_808006F8_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808006FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800700: jal         0x80000098
    // 0x80800704: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800098_bsbansnooze(rdram, ctx);
        goto after_0;
    // 0x80800704: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800708: jal         0x800839C8
    // 0x8080070C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x8080070C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800714: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800718: jr          $ra
    // 0x8080071C: nop

    return;
    // 0x8080071C: nop

;}
RECOMP_FUNC void func_80800720_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800720: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800724: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800728: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8080072C: jal         0x800839E8
    // 0x80800730: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x80800730: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800734: beq         $v0, $zero, L_80800740
    if (ctx->r2 == 0) {
        // 0x80800738: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80800740;
    }
    // 0x80800738: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8080073C: addiu       $a1, $zero, 0x16F
    ctx->r5 = ADD32(0, 0X16F);
L_80800740:
    // 0x80800740: jal         0x8009E5C8
    // 0x80800744: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_1;
    // 0x80800744: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080074C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800750: jr          $ra
    // 0x80800754: nop

    return;
    // 0x80800754: nop

;}
RECOMP_FUNC void bsbansnooze_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800758: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080075C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(67, 0XA98) << 16);
    // 0x80800760: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800764: jr          $ra
    // 0x80800768: lw          $v0, 0xA98($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(67, 0XA98));
    return;
    // 0x80800768: lw          $v0, 0xA98($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(67, 0XA98));
;}
RECOMP_FUNC void func_8080076C_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080076C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800770: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800774: jal         0x800951B4
    // 0x80800778: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800951B4(rdram, ctx);
        goto after_0;
    // 0x80800778: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080077C: jal         0x80000000
    // 0x80800780: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800000_bsbansnooze(rdram, ctx);
        goto after_1;
    // 0x80800780: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080078C: jr          $ra
    // 0x80800790: nop

    return;
    // 0x80800790: nop

;}
RECOMP_FUNC void func_80800794_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800794: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800798: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080079C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x808007A0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808007A4: jal         0x8008CABC
    // 0x808007A8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808007A8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x808007AC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808007B0: jal         0x80000098
    // 0x808007B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800098_bsbansnooze(rdram, ctx);
        goto after_1;
    // 0x808007B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x808007B8: jal         0x8008AF24
    // 0x808007BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x808007BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808007C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007C4: jal         0x8008AED4
    // 0x808007C8: addiu       $a1, $zero, 0x277
    ctx->r5 = ADD32(0, 0X277);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x808007C8: addiu       $a1, $zero, 0x277
    ctx->r5 = ADD32(0, 0X277);
    after_3:
    // 0x808007CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007D0: jal         0x8008B1BC
    // 0x808007D4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_4;
    // 0x808007D4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_4:
    // 0x808007D8: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x808007DC: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x808007E0: jal         0x8008B1C8
    // 0x808007E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1C8(rdram, ctx);
        goto after_5;
    // 0x808007E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808007E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007EC: jal         0x8008B134
    // 0x808007F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_6;
    // 0x808007F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x808007F4: jal         0x8008B064
    // 0x808007F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x808007F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808007FC: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80800800: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800804: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800808: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080080C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800810: jal         0x8009FFD8
    // 0x80800814: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_8009FFD8(rdram, ctx);
        goto after_8;
    // 0x80800814: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_8:
    // 0x80800818: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080081C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x80800820: jal         0x8009C99C
    // 0x80800824: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    func_8009C99C(rdram, ctx);
        goto after_9;
    // 0x80800824: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    after_9:
    // 0x80800828: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080082C: jal         0x8009B9B0
    // 0x80800830: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_10;
    // 0x80800830: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_10:
    // 0x80800834: jal         0x8009514C
    // 0x80800838: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009514C(rdram, ctx);
        goto after_11;
    // 0x80800838: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x8080083C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800840: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800844: jal         0x80085338
    // 0x80800848: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    _batimer_set(rdram, ctx);
        goto after_12;
    // 0x80800848: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_12:
    // 0x8080084C: jal         0x800A1718
    // 0x80800850: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A1718(rdram, ctx);
        goto after_13;
    // 0x80800850: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x80800854: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800858: jal         0x800A1760
    // 0x8080085C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A1760(rdram, ctx);
        goto after_14;
    // 0x8080085C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x80800860: bne         $v0, $s0, L_80800870
    if (ctx->r2 != ctx->r16) {
        // 0x80800864: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80800870;
    }
    // 0x80800864: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800868: jal         0x800A17A8
    // 0x8080086C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A17A8(rdram, ctx);
        goto after_15;
    // 0x8080086C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
L_80800870:
    // 0x80800870: jal         0x8009E710
    // 0x80800874: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009E710(rdram, ctx);
        goto after_16;
    // 0x80800874: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x80800878: addiu       $at, $zero, 0x170
    ctx->r1 = ADD32(0, 0X170);
    // 0x8080087C: bne         $v0, $at, L_8080088C
    if (ctx->r2 != ctx->r1) {
        // 0x80800880: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8080088C;
    }
    // 0x80800880: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80800884: b           L_80800890
    // 0x80800888: sb          $zero, 0x15C($s1)
    MEM_B(0X15C, ctx->r17) = 0;
        goto L_80800890;
    // 0x80800888: sb          $zero, 0x15C($s1)
    MEM_B(0X15C, ctx->r17) = 0;
L_8080088C:
    // 0x8080088C: sb          $t7, 0x15C($s1)
    MEM_B(0X15C, ctx->r17) = ctx->r15;
L_80800890:
    // 0x80800890: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800894: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800898: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8080089C: jr          $ra
    // 0x808008A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x808008A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_808008A4_bsbansnooze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808008A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808008AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808008B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808008B4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x808008B8: jal         0x800852F0
    // 0x808008BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_0;
    // 0x808008BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808008C0: beq         $v0, $zero, L_8080090C
    if (ctx->r2 == 0) {
        // 0x808008C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080090C;
    }
    // 0x808008C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808008CC: jal         0x80085338
    // 0x808008D0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    _batimer_set(rdram, ctx);
        goto after_1;
    // 0x808008D0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x808008D4: jal         0x800A1718
    // 0x808008D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1718(rdram, ctx);
        goto after_2;
    // 0x808008D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808008DC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x808008E0: jal         0x800A1760
    // 0x808008E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1760(rdram, ctx);
        goto after_3;
    // 0x808008E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808008E8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x808008EC: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x808008F0: beql        $at, $zero, L_80800910
    if (ctx->r1 == 0) {
        // 0x808008F4: lbu         $v0, 0x15C($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X15C);
            goto L_80800910;
    }
    goto skip_0;
    // 0x808008F4: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
    skip_0:
    // 0x808008F8: jal         0x800FC660
    // 0x808008FC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800FC660(rdram, ctx);
        goto after_4;
    // 0x808008FC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_4:
    // 0x80800900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800904: jal         0x800A17A8
    // 0x80800908: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A17A8(rdram, ctx);
        goto after_5;
    // 0x80800908: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_8080090C:
    // 0x8080090C: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
L_80800910:
    // 0x80800910: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800914: beql        $v0, $zero, L_808009B0
    if (ctx->r2 == 0) {
        // 0x80800918: lui         $a1, 0x3F7D
        ctx->r5 = S32(0X3F7D << 16);
            goto L_808009B0;
    }
    goto skip_1;
    // 0x80800918: lui         $a1, 0x3F7D
    ctx->r5 = S32(0X3F7D << 16);
    skip_1:
    // 0x8080091C: bne         $v0, $at, L_8080092C
    if (ctx->r2 != ctx->r1) {
        // 0x80800920: lui         $at, 0x0
        ctx->r1 = S32(RELOC_HI16(67, 0XA34) << 16);
            goto L_8080092C;
    }
    // 0x80800920: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(67, 0XA34) << 16);
    // 0x80800924: b           L_80800934
    // 0x80800928: lwc1        $f0, 0xA34($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(67, 0XA34));
        goto L_80800934;
    // 0x80800928: lwc1        $f0, 0xA34($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(67, 0XA34));
L_8080092C:
    // 0x8080092C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(67, 0XA38) << 16);
    // 0x80800930: lwc1        $f0, 0xA38($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(67, 0XA38));
L_80800934:
    // 0x80800934: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800938: jal         0x8008CB10
    // 0x8080093C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_6;
    // 0x8080093C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800940: beq         $v0, $zero, L_80800970
    if (ctx->r2 == 0) {
        // 0x80800944: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800970;
    }
    // 0x80800944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800948: lui         $a2, 0x3F6E
    ctx->r6 = S32(0X3F6E << 16);
    // 0x8080094C: lui         $a3, 0x3F8A
    ctx->r7 = S32(0X3F8A << 16);
    // 0x80800950: addiu       $t7, $zero, 0x4E20
    ctx->r15 = ADD32(0, 0X4E20);
    // 0x80800954: addiu       $t8, $zero, 0x55F0
    ctx->r24 = ADD32(0, 0X55F0);
    // 0x80800958: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8080095C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800960: ori         $a3, $a3, 0x3D71
    ctx->r7 = ctx->r7 | 0X3D71;
    // 0x80800964: ori         $a2, $a2, 0x147B
    ctx->r6 = ctx->r6 | 0X147B;
    // 0x80800968: jal         0x8009DEC0
    // 0x8080096C: addiu       $a1, $zero, 0x441
    ctx->r5 = ADD32(0, 0X441);
    func_8009DEC0(rdram, ctx);
        goto after_7;
    // 0x8080096C: addiu       $a1, $zero, 0x441
    ctx->r5 = ADD32(0, 0X441);
    after_7:
L_80800970:
    // 0x80800970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800974: jal         0x8008CB10
    // 0x80800978: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8008CB10(rdram, ctx);
        goto after_8;
    // 0x80800978: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_8:
    // 0x8080097C: beq         $v0, $zero, L_808009AC
    if (ctx->r2 == 0) {
        // 0x80800980: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009AC;
    }
    // 0x80800980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800984: lui         $a2, 0x3F6E
    ctx->r6 = S32(0X3F6E << 16);
    // 0x80800988: lui         $a3, 0x3F8A
    ctx->r7 = S32(0X3F8A << 16);
    // 0x8080098C: addiu       $t9, $zero, 0x4E20
    ctx->r25 = ADD32(0, 0X4E20);
    // 0x80800990: addiu       $t0, $zero, 0x55F0
    ctx->r8 = ADD32(0, 0X55F0);
    // 0x80800994: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80800998: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8080099C: ori         $a3, $a3, 0x3D71
    ctx->r7 = ctx->r7 | 0X3D71;
    // 0x808009A0: ori         $a2, $a2, 0x147B
    ctx->r6 = ctx->r6 | 0X147B;
    // 0x808009A4: jal         0x8009DFD4
    // 0x808009A8: addiu       $a1, $zero, 0x442
    ctx->r5 = ADD32(0, 0X442);
    func_8009DFD4(rdram, ctx);
        goto after_9;
    // 0x808009A8: addiu       $a1, $zero, 0x442
    ctx->r5 = ADD32(0, 0X442);
    after_9:
L_808009AC:
    // 0x808009AC: lui         $a1, 0x3F7D
    ctx->r5 = S32(0X3F7D << 16);
L_808009B0:
    // 0x808009B0: ori         $a1, $a1, 0x70A4
    ctx->r5 = ctx->r5 | 0X70A4;
    // 0x808009B4: jal         0x8008CB10
    // 0x808009B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_10;
    // 0x808009B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808009BC: beq         $v0, $zero, L_808009CC
    if (ctx->r2 == 0) {
        // 0x808009C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009CC;
    }
    // 0x808009C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009C4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x808009C8: sb          $t1, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r9;
L_808009CC:
    // 0x808009CC: jal         0x80091A30
    // 0x808009D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A30(rdram, ctx);
        goto after_11;
    // 0x808009D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x808009D4: beq         $v0, $zero, L_808009E0
    if (ctx->r2 == 0) {
        // 0x808009D8: addiu       $t2, $zero, 0x172
        ctx->r10 = ADD32(0, 0X172);
            goto L_808009E0;
    }
    // 0x808009D8: addiu       $t2, $zero, 0x172
    ctx->r10 = ADD32(0, 0X172);
    // 0x808009DC: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
L_808009E0:
    // 0x808009E0: jal         0x8008E35C
    // 0x808009E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_12;
    // 0x808009E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808009E8: beq         $v0, $zero, L_808009F8
    if (ctx->r2 == 0) {
        // 0x808009EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009F8;
    }
    // 0x808009EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009F0: addiu       $t3, $zero, 0x4C
    ctx->r11 = ADD32(0, 0X4C);
    // 0x808009F4: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
L_808009F8:
    // 0x808009F8: jal         0x8009E5C8
    // 0x808009FC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_13;
    // 0x808009FC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_13:
    // 0x80800A00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800A04: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800A08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800A0C: jr          $ra
    // 0x80800A10: nop

    return;
    // 0x80800A10: nop

;}
RECOMP_FUNC void bsbansnooze_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A14: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800A18: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(67, 0XAA8) << 16);
    // 0x80800A1C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800A20: jr          $ra
    // 0x80800A24: lw          $v0, 0xAA8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(67, 0XAA8));
    return;
    // 0x80800A24: lw          $v0, 0xAA8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(67, 0XAA8));
    // 0x80800A28: nop

    // 0x80800A2C: nop

;}
RECOMP_FUNC void func_80800000_bsbanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
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
RECOMP_FUNC void func_80800030_bsbanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800030: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800034: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800038: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080003C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800040: jal         0x8009E77C
    // 0x80800044: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8009E77C(rdram, ctx);
        goto after_0;
    // 0x80800044: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x80800048: bnel        $v0, $zero, L_808000F4
    if (ctx->r2 != 0) {
        // 0x8080004C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808000F4;
    }
    goto skip_0;
    // 0x8080004C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800050: jal         0x80085290
    // 0x80800054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800058: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x8080005C: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800064: jal         0x8009C554
    // 0x80800068: lui         $a1, 0x4302
    ctx->r5 = S32(0X4302 << 16);
    func_8009C554(rdram, ctx);
        goto after_2;
    // 0x80800068: lui         $a1, 0x4302
    ctx->r5 = S32(0X4302 << 16);
    after_2:
    // 0x8080006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800070: jal         0x8009BCB4
    // 0x80800074: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BCB4(rdram, ctx);
        goto after_3;
    // 0x80800074: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800078: lui         $a1, 0xC3C7
    ctx->r5 = S32(0XC3C7 << 16);
    // 0x8080007C: ori         $a1, $a1, 0xFEB8
    ctx->r5 = ctx->r5 | 0XFEB8;
    // 0x80800080: jal         0x8009BCC4
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_4;
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800088: jal         0x800F8B88
    // 0x8080008C: nop

    func_800F8B88(rdram, ctx);
        goto after_5;
    // 0x8080008C: nop

    after_5:
    // 0x80800090: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800094: beq         $v0, $at, L_808000A4
    if (ctx->r2 == ctx->r1) {
        // 0x80800098: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000A4;
    }
    // 0x80800098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080009C: jal         0x800A0CF4
    // 0x808000A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_6;
    // 0x808000A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
L_808000A4:
    // 0x808000A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000A8: jal         0x800961AC
    // 0x808000AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800961AC(rdram, ctx);
        goto after_7;
    // 0x808000AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x808000B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B4: jal         0x80093360
    // 0x808000B8: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_80093360(rdram, ctx);
        goto after_8;
    // 0x808000B8: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_8:
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C0: jal         0x8009BC5C
    // 0x808000C4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8009BC5C(rdram, ctx);
        goto after_9;
    // 0x808000C4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_9:
    // 0x808000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000CC: jal         0x80085298
    // 0x808000D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _baswim_entrypoint_6(rdram, ctx);
        goto after_10;
    // 0x808000D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x808000D4: jal         0x8009E6F8
    // 0x808000D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E6F8(rdram, ctx);
        goto after_11;
    // 0x808000D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808000DC: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x808000E0: beq         $v0, $at, L_808000F0
    if (ctx->r2 == ctx->r1) {
        // 0x808000E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000F0;
    }
    // 0x808000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E8: jal         0x80085558
    // 0x808000EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _baairbar_entrypoint_0(rdram, ctx);
        goto after_12;
    // 0x808000EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
L_808000F0:
    // 0x808000F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000F4:
    // 0x808000F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000FC: jr          $ra
    // 0x80800100: nop

    return;
    // 0x80800100: nop

;}
RECOMP_FUNC void func_80800104_bsbanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800104: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800108: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080010C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800110: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800114: jal         0x8009E74C
    // 0x80800118: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x80800118: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x8080011C: bne         $v0, $zero, L_80800194
    if (ctx->r2 != 0) {
        // 0x80800120: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800194;
    }
    // 0x80800120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800124: jal         0x8009BF5C
    // 0x80800128: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_1;
    // 0x80800128: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800130: jal         0x8009C4CC
    // 0x80800134: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_2;
    // 0x80800134: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800138: jal         0x8009BC34
    // 0x8080013C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC34(rdram, ctx);
        goto after_3;
    // 0x8080013C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800144: jal         0x800A0CF4
    // 0x80800148: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_4;
    // 0x80800148: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8080014C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800150: jal         0x800961AC
    // 0x80800154: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_5;
    // 0x80800154: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080015C: jal         0x80093360
    // 0x80800160: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80093360(rdram, ctx);
        goto after_6;
    // 0x80800160: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800168: jal         0x80085298
    // 0x8080016C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _baswim_entrypoint_6(rdram, ctx);
        goto after_7;
    // 0x8080016C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80800170: jal         0x8009E6F8
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E6F8(rdram, ctx);
        goto after_8;
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800178: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x8080017C: beq         $v0, $at, L_8080018C
    if (ctx->r2 == ctx->r1) {
        // 0x80800180: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080018C;
    }
    // 0x80800180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800184: jal         0x80085558
    // 0x80800188: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _baairbar_entrypoint_0(rdram, ctx);
        goto after_9;
    // 0x80800188: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
L_8080018C:
    // 0x8080018C: jal         0x80085288
    // 0x80800190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_4(rdram, ctx);
        goto after_10;
    // 0x80800190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
L_80800194:
    // 0x80800194: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800198: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080019C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001A0: jr          $ra
    // 0x808001A4: nop

    return;
    // 0x808001A4: nop

;}
RECOMP_FUNC void func_808001A8_bsbanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001B0: jal         0x80000104
    // 0x808001B4: nop

    func_80800104_bsbanswim(rdram, ctx);
        goto after_0;
    // 0x808001B4: nop

    after_0:
    // 0x808001B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001C0: jr          $ra
    // 0x808001C4: nop

    return;
    // 0x808001C4: nop

;}
RECOMP_FUNC void func_808001C8_bsbanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001D8: jal         0x800C6DA0
    // 0x808001DC: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    func_800C6DA0(rdram, ctx);
        goto after_0;
    // 0x808001DC: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    after_0:
    // 0x808001E0: lui         $a2, 0x3FD9
    ctx->r6 = S32(0X3FD9 << 16);
    // 0x808001E4: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x808001E8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x808001EC: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F4: jal         0x8008CD30
    // 0x808001F8: addiu       $a1, $zero, 0x27D
    ctx->r5 = ADD32(0, 0X27D);
    func_8008CD30(rdram, ctx);
        goto after_1;
    // 0x808001F8: addiu       $a1, $zero, 0x27D
    ctx->r5 = ADD32(0, 0X27D);
    after_1:
    // 0x808001FC: jal         0x80000000
    // 0x80800200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbanswim(rdram, ctx);
        goto after_2;
    // 0x80800200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800208: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x8080020C: jal         0x8009C99C
    // 0x80800210: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x80800210: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_3:
    // 0x80800214: jal         0x80000030
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800030_bsbanswim(rdram, ctx);
        goto after_4;
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800220: jal         0x800852B8
    // 0x80800224: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    _baswim_entrypoint_10(rdram, ctx);
        goto after_5;
    // 0x80800224: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080022C: jal         0x800852A8
    // 0x80800230: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    _baswim_entrypoint_8(rdram, ctx);
        goto after_6;
    // 0x80800230: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_6:
    // 0x80800234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800238: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x8080023C: jal         0x8009BFE4
    // 0x80800240: lui         $a2, 0x4020
    ctx->r6 = S32(0X4020 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_7;
    // 0x80800240: lui         $a2, 0x4020
    ctx->r6 = S32(0X4020 << 16);
    after_7:
    // 0x80800244: sb          $zero, 0x164($s0)
    MEM_B(0X164, ctx->r16) = 0;
    // 0x80800248: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080024C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800250: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800254: jr          $ra
    // 0x80800258: nop

    return;
    // 0x80800258: nop

;}
RECOMP_FUNC void func_8080025C_bsbanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080025C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800260: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800264: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800268: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080026C: jal         0x8008CABC
    // 0x80800270: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800270: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800274: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800278: lbu         $v1, 0x164($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X164);
    // 0x8080027C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800284: beq         $v1, $zero, L_8080029C
    if (ctx->r3 == 0) {
        // 0x80800288: nop
    
            goto L_8080029C;
    }
    // 0x80800288: nop

    // 0x8080028C: beq         $v1, $at, L_808002F8
    if (ctx->r3 == ctx->r1) {
        // 0x80800290: nop
    
            goto L_808002F8;
    }
    // 0x80800290: nop

    // 0x80800294: b           L_80800328
    // 0x80800298: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
        goto L_80800328;
    // 0x80800298: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
L_8080029C:
    // 0x8080029C: jal         0x8009BF5C
    // 0x808002A0: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    func_8009BF5C(rdram, ctx);
        goto after_1;
    // 0x808002A0: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_1:
    // 0x808002A4: lui         $a1, 0x3EBD
    ctx->r5 = S32(0X3EBD << 16);
    // 0x808002A8: ori         $a1, $a1, 0x70A4
    ctx->r5 = ctx->r5 | 0X70A4;
    // 0x808002AC: jal         0x8008B348
    // 0x808002B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_2;
    // 0x808002B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x808002B4: beql        $v0, $zero, L_80800328
    if (ctx->r2 == 0) {
        // 0x808002B8: lui         $a1, 0x3F19
        ctx->r5 = S32(0X3F19 << 16);
            goto L_80800328;
    }
    goto skip_0;
    // 0x808002B8: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    skip_0:
    // 0x808002BC: jal         0x80085270
    // 0x808002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x808002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808002C4: beql        $v0, $zero, L_808002D8
    if (ctx->r2 == 0) {
        // 0x808002C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002D8;
    }
    goto skip_1;
    // 0x808002C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808002CC: jal         0x800A0E64
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A0E64(rdram, ctx);
        goto after_4;
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808002D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808002D8:
    // 0x808002D8: jal         0x800852B8
    // 0x808002DC: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    _baswim_entrypoint_10(rdram, ctx);
        goto after_5;
    // 0x808002DC: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_5:
    // 0x808002E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002E4: jal         0x800852A8
    // 0x808002E8: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    _baswim_entrypoint_8(rdram, ctx);
        goto after_6;
    // 0x808002E8: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    after_6:
    // 0x808002EC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808002F0: b           L_80800324
    // 0x808002F4: sb          $t6, 0x164($s0)
    MEM_B(0X164, ctx->r16) = ctx->r14;
        goto L_80800324;
    // 0x808002F4: sb          $t6, 0x164($s0)
    MEM_B(0X164, ctx->r16) = ctx->r14;
L_808002F8:
    // 0x808002F8: jal         0x800852C0
    // 0x808002FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_11(rdram, ctx);
        goto after_7;
    // 0x808002FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800300: jal         0x800852D0
    // 0x80800304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_13(rdram, ctx);
        goto after_8;
    // 0x80800304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800308: lui         $a1, 0x3F42
    ctx->r5 = S32(0X3F42 << 16);
    // 0x8080030C: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    // 0x80800310: jal         0x8008B348
    // 0x80800314: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_9;
    // 0x80800314: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_9:
    // 0x80800318: beq         $v0, $zero, L_80800324
    if (ctx->r2 == 0) {
        // 0x8080031C: addiu       $t7, $zero, 0x2B
        ctx->r15 = ADD32(0, 0X2B);
            goto L_80800324;
    }
    // 0x8080031C: addiu       $t7, $zero, 0x2B
    ctx->r15 = ADD32(0, 0X2B);
    // 0x80800320: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80800324:
    // 0x80800324: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
L_80800328:
    // 0x80800328: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x8080032C: jal         0x8008B348
    // 0x80800330: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_10;
    // 0x80800330: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_10:
    // 0x80800334: beq         $v0, $zero, L_80800348
    if (ctx->r2 == 0) {
        // 0x80800338: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800348;
    }
    // 0x80800338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080033C: addiu       $a1, $zero, 0x3FD
    ctx->r5 = ADD32(0, 0X3FD);
    // 0x80800340: jal         0x8009DE38
    // 0x80800344: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_11;
    // 0x80800344: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_11:
L_80800348:
    // 0x80800348: jal         0x8008E35C
    // 0x8080034C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_12;
    // 0x8080034C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800350: bne         $v0, $zero, L_80800360
    if (ctx->r2 != 0) {
        // 0x80800354: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800360;
    }
    // 0x80800354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800358: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8080035C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80800360:
    // 0x80800360: jal         0x8009E5C8
    // 0x80800364: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_13;
    // 0x80800364: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_13:
    // 0x80800368: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080036C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800374: jr          $ra
    // 0x80800378: nop

    return;
    // 0x80800378: nop

;}
RECOMP_FUNC void bsbanswim_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080037C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800380: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(68, 0XA30) << 16);
    // 0x80800384: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800388: jr          $ra
    // 0x8080038C: lw          $v0, 0xA30($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(68, 0XA30));
    return;
    // 0x8080038C: lw          $v0, 0xA30($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(68, 0XA30));
;}
RECOMP_FUNC void func_80800390_bsbanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800390: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
    // 0x80800394: beq         $a0, $at, L_808003AC
    if (ctx->r4 == ctx->r1) {
        // 0x80800398: addiu       $at, $zero, 0x82
        ctx->r1 = ADD32(0, 0X82);
            goto L_808003AC;
    }
    // 0x80800398: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
    // 0x8080039C: beq         $a0, $at, L_808003AC
    if (ctx->r4 == ctx->r1) {
        // 0x808003A0: addiu       $at, $zero, 0x90
        ctx->r1 = ADD32(0, 0X90);
            goto L_808003AC;
    }
    // 0x808003A0: addiu       $at, $zero, 0x90
    ctx->r1 = ADD32(0, 0X90);
    // 0x808003A4: bne         $a0, $at, L_808003B4
    if (ctx->r4 != ctx->r1) {
        // 0x808003A8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_808003B4;
    }
    // 0x808003A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808003AC:
    // 0x808003AC: jr          $ra
    // 0x808003B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x808003B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808003B4:
    // 0x808003B4: jr          $ra
    // 0x808003B8: nop

    return;
    // 0x808003B8: nop

;}
RECOMP_FUNC void func_808003BC_bsbanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003C4: jal         0x8009E704
    // 0x808003C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E704(rdram, ctx);
        goto after_0;
    // 0x808003C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808003CC: jal         0x80000390
    // 0x808003D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80800390_bsbanswim(rdram, ctx);
        goto after_1;
    // 0x808003D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808003D4: bnel        $v0, $zero, L_80800400
    if (ctx->r2 != 0) {
        // 0x808003D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800400;
    }
    goto skip_0;
    // 0x808003D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808003DC: jal         0x8008E0E8
    // 0x808003E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E0E8(rdram, ctx);
        goto after_2;
    // 0x808003E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808003E4: beq         $v0, $zero, L_808003F4
    if (ctx->r2 == 0) {
        // 0x808003E8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808003F4;
    }
    // 0x808003E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808003EC: jal         0x80084788
    // 0x808003F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_3;
    // 0x808003F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
L_808003F4:
    // 0x808003F4: jal         0x80000104
    // 0x808003F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800104_bsbanswim(rdram, ctx);
        goto after_4;
    // 0x808003F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
    // 0x808003FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800400:
    // 0x80800400: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800404: jr          $ra
    // 0x80800408: nop

    return;
    // 0x80800408: nop

;}
RECOMP_FUNC void func_8080040C_bsbanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080040C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800410: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800414: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800418: jal         0x8009E710
    // 0x8080041C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E710(rdram, ctx);
        goto after_0;
    // 0x8080041C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800420: jal         0x80000390
    // 0x80800424: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80800390_bsbanswim(rdram, ctx);
        goto after_1;
    // 0x80800424: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800428: bne         $v0, $zero, L_80800488
    if (ctx->r2 != 0) {
        // 0x8080042C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800488;
    }
    // 0x8080042C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800430: addiu       $a1, $zero, 0x27E
    ctx->r5 = ADD32(0, 0X27E);
    // 0x80800434: jal         0x8008CB3C
    // 0x80800438: lui         $a2, 0x3F40
    ctx->r6 = S32(0X3F40 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_2;
    // 0x80800438: lui         $a2, 0x3F40
    ctx->r6 = S32(0X3F40 << 16);
    after_2:
    // 0x8080043C: jal         0x80000000
    // 0x80800440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbanswim(rdram, ctx);
        goto after_3;
    // 0x80800440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800444: jal         0x80000030
    // 0x80800448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800030_bsbanswim(rdram, ctx);
        goto after_4;
    // 0x80800448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080044C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800450: jal         0x800852B8
    // 0x80800454: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    _baswim_entrypoint_10(rdram, ctx);
        goto after_5;
    // 0x80800454: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x80800458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080045C: jal         0x800852A8
    // 0x80800460: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    _baswim_entrypoint_8(rdram, ctx);
        goto after_6;
    // 0x80800460: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_6:
    // 0x80800464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800468: jal         0x8009BC5C
    // 0x8080046C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8009BC5C(rdram, ctx);
        goto after_7;
    // 0x8080046C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_7:
    // 0x80800470: jal         0x8008E0E8
    // 0x80800474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E0E8(rdram, ctx);
        goto after_8;
    // 0x80800474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800478: beq         $v0, $zero, L_80800488
    if (ctx->r2 == 0) {
        // 0x8080047C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800488;
    }
    // 0x8080047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800480: jal         0x80084788
    // 0x80800484: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_9;
    // 0x80800484: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_9:
L_80800488:
    // 0x80800488: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080048C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800490: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800494: jr          $ra
    // 0x80800498: nop

    return;
    // 0x80800498: nop

;}
RECOMP_FUNC void func_8080049C_bsbanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080049C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004A4: jal         0x800003BC
    // 0x808004A8: nop

    func_808003BC_bsbanswim(rdram, ctx);
        goto after_0;
    // 0x808004A8: nop

    after_0:
    // 0x808004AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004B4: jr          $ra
    // 0x808004B8: nop

    return;
    // 0x808004B8: nop

;}
RECOMP_FUNC void func_808004BC_bsbanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808004C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004C4: jal         0x8008CABC
    // 0x808004C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808004C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x808004CC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x808004D0: jal         0x8000040C
    // 0x808004D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8080040C_bsbanswim(rdram, ctx);
        goto after_1;
    // 0x808004D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808004D8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x808004DC: jal         0x8008B1BC
    // 0x808004E0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_2;
    // 0x808004E0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_2:
    // 0x808004E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808004EC: jr          $ra
    // 0x808004F0: nop

    return;
    // 0x808004F0: nop

;}
RECOMP_FUNC void func_808004F4_bsbanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808004F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808004FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800500: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800504: jal         0x8008CABC
    // 0x80800508: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800508: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x8080050C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800510: jal         0x800852C0
    // 0x80800514: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_11(rdram, ctx);
        goto after_1;
    // 0x80800514: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800518: jal         0x800852C8
    // 0x8080051C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_12(rdram, ctx);
        goto after_2;
    // 0x8080051C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800520: jal         0x800852D0
    // 0x80800524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_13(rdram, ctx);
        goto after_3;
    // 0x80800524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800528: lui         $a1, 0x3F03
    ctx->r5 = S32(0X3F03 << 16);
    // 0x8080052C: ori         $a1, $a1, 0x126F
    ctx->r5 = ctx->r5 | 0X126F;
    // 0x80800530: jal         0x8008B348
    // 0x80800534: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_4;
    // 0x80800534: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800538: beq         $v0, $zero, L_80800550
    if (ctx->r2 == 0) {
        // 0x8080053C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800550;
    }
    // 0x8080053C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800540: jal         0x800852B8
    // 0x80800544: lui         $a1, 0x43A0
    ctx->r5 = S32(0X43A0 << 16);
    _baswim_entrypoint_10(rdram, ctx);
        goto after_5;
    // 0x80800544: lui         $a1, 0x43A0
    ctx->r5 = S32(0X43A0 << 16);
    after_5:
    // 0x80800548: b           L_80800560
    // 0x8080054C: lui         $a1, 0x3E2E
    ctx->r5 = S32(0X3E2E << 16);
        goto L_80800560;
    // 0x8080054C: lui         $a1, 0x3E2E
    ctx->r5 = S32(0X3E2E << 16);
L_80800550:
    // 0x80800550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800554: jal         0x800852B8
    // 0x80800558: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    _baswim_entrypoint_10(rdram, ctx);
        goto after_6;
    // 0x80800558: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    after_6:
    // 0x8080055C: lui         $a1, 0x3E2E
    ctx->r5 = S32(0X3E2E << 16);
L_80800560:
    // 0x80800560: ori         $a1, $a1, 0x147B
    ctx->r5 = ctx->r5 | 0X147B;
    // 0x80800564: jal         0x8008B348
    // 0x80800568: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x80800568: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_7:
    // 0x8080056C: beq         $v0, $zero, L_80800588
    if (ctx->r2 == 0) {
        // 0x80800570: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800588;
    }
    // 0x80800570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800574: lui         $a2, 0x3FF3
    ctx->r6 = S32(0X3FF3 << 16);
    // 0x80800578: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8080057C: addiu       $a1, $zero, 0x3FD
    ctx->r5 = ADD32(0, 0X3FD);
    // 0x80800580: jal         0x8009DF18
    // 0x80800584: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    func_8009DF18(rdram, ctx);
        goto after_8;
    // 0x80800584: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    after_8:
L_80800588:
    // 0x80800588: lui         $a1, 0x3F2B
    ctx->r5 = S32(0X3F2B << 16);
    // 0x8080058C: ori         $a1, $a1, 0x851F
    ctx->r5 = ctx->r5 | 0X851F;
    // 0x80800590: jal         0x8008B348
    // 0x80800594: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_9;
    // 0x80800594: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_9:
    // 0x80800598: beq         $v0, $zero, L_808005B4
    if (ctx->r2 == 0) {
        // 0x8080059C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005B4;
    }
    // 0x8080059C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005A0: lui         $a2, 0x3FD9
    ctx->r6 = S32(0X3FD9 << 16);
    // 0x808005A4: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x808005A8: addiu       $a1, $zero, 0x3FD
    ctx->r5 = ADD32(0, 0X3FD);
    // 0x808005AC: jal         0x8009DF18
    // 0x808005B0: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    func_8009DF18(rdram, ctx);
        goto after_10;
    // 0x808005B0: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    after_10:
L_808005B4:
    // 0x808005B4: jal         0x80085280
    // 0x808005B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_3(rdram, ctx);
        goto after_11;
    // 0x808005B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808005BC: beq         $v0, $zero, L_808005EC
    if (ctx->r2 == 0) {
        // 0x808005C0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808005EC;
    }
    // 0x808005C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808005C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808005C8: beq         $v0, $at, L_80800614
    if (ctx->r2 == ctx->r1) {
        // 0x808005CC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800614;
    }
    // 0x808005CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808005D0: beq         $v0, $at, L_80800608
    if (ctx->r2 == ctx->r1) {
        // 0x808005D4: addiu       $t7, $zero, 0x82
        ctx->r15 = ADD32(0, 0X82);
            goto L_80800608;
    }
    // 0x808005D4: addiu       $t7, $zero, 0x82
    ctx->r15 = ADD32(0, 0X82);
    // 0x808005D8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808005DC: beq         $v0, $at, L_80800610
    if (ctx->r2 == ctx->r1) {
        // 0x808005E0: addiu       $t8, $zero, 0x90
        ctx->r24 = ADD32(0, 0X90);
            goto L_80800610;
    }
    // 0x808005E0: addiu       $t8, $zero, 0x90
    ctx->r24 = ADD32(0, 0X90);
    // 0x808005E4: b           L_80800614
    // 0x808005E8: nop

        goto L_80800614;
    // 0x808005E8: nop

L_808005EC:
    // 0x808005EC: lui         $a1, 0x3F7D
    ctx->r5 = S32(0X3F7D << 16);
    // 0x808005F0: jal         0x8008B348
    // 0x808005F4: ori         $a1, $a1, 0x70A4
    ctx->r5 = ctx->r5 | 0X70A4;
    func_8008B348(rdram, ctx);
        goto after_12;
    // 0x808005F4: ori         $a1, $a1, 0x70A4
    ctx->r5 = ctx->r5 | 0X70A4;
    after_12:
    // 0x808005F8: beq         $v0, $zero, L_80800614
    if (ctx->r2 == 0) {
        // 0x808005FC: addiu       $t6, $zero, 0x2B
        ctx->r14 = ADD32(0, 0X2B);
            goto L_80800614;
    }
    // 0x808005FC: addiu       $t6, $zero, 0x2B
    ctx->r14 = ADD32(0, 0X2B);
    // 0x80800600: b           L_80800614
    // 0x80800604: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
        goto L_80800614;
    // 0x80800604: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800608:
    // 0x80800608: b           L_80800614
    // 0x8080060C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
        goto L_80800614;
    // 0x8080060C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80800610:
    // 0x80800610: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80800614:
    // 0x80800614: jal         0x80085278
    // 0x80800618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_2(rdram, ctx);
        goto after_13;
    // 0x80800618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x8080061C: beq         $v0, $zero, L_80800628
    if (ctx->r2 == 0) {
        // 0x80800620: addiu       $t9, $zero, 0x2D
        ctx->r25 = ADD32(0, 0X2D);
            goto L_80800628;
    }
    // 0x80800620: addiu       $t9, $zero, 0x2D
    ctx->r25 = ADD32(0, 0X2D);
    // 0x80800624: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80800628:
    // 0x80800628: jal         0x8008E35C
    // 0x8080062C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_14;
    // 0x8080062C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800630: bne         $v0, $zero, L_80800640
    if (ctx->r2 != 0) {
        // 0x80800634: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800640;
    }
    // 0x80800634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800638: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8080063C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_80800640:
    // 0x80800640: jal         0x8009E5C8
    // 0x80800644: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_15;
    // 0x80800644: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_15:
    // 0x80800648: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080064C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800650: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800654: jr          $ra
    // 0x80800658: nop

    return;
    // 0x80800658: nop

;}
RECOMP_FUNC void bsbanswim_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080065C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800660: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(68, 0XA40) << 16);
    // 0x80800664: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800668: jr          $ra
    // 0x8080066C: lw          $v0, 0xA40($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(68, 0XA40));
    return;
    // 0x8080066C: lw          $v0, 0xA40($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(68, 0XA40));
;}
RECOMP_FUNC void func_80800670_bsbanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800678: jal         0x800003BC
    // 0x8080067C: nop

    func_808003BC_bsbanswim(rdram, ctx);
        goto after_0;
    // 0x8080067C: nop

    after_0:
    // 0x80800680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800688: jr          $ra
    // 0x8080068C: nop

    return;
    // 0x8080068C: nop

;}
RECOMP_FUNC void func_80800690_bsbanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800690: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800698: jal         0x8008CABC
    // 0x8080069C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080069C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x808006A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x808006A4: jal         0x8000040C
    // 0x808006A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8080040C_bsbanswim(rdram, ctx);
        goto after_1;
    // 0x808006A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808006AC: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x808006B0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808006B4: jal         0x8008B1BC
    // 0x808006B8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8008B1BC(rdram, ctx);
        goto after_2;
    // 0x808006B8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x808006BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808006C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808006C4: jr          $ra
    // 0x808006C8: nop

    return;
    // 0x808006C8: nop

;}
RECOMP_FUNC void func_808006CC_bsbanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808006D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808006D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808006D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808006DC: jal         0x8008CABC
    // 0x808006E0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808006E0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808006E4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x808006E8: jal         0x800852C0
    // 0x808006EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_11(rdram, ctx);
        goto after_1;
    // 0x808006EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808006F0: jal         0x800852C8
    // 0x808006F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_12(rdram, ctx);
        goto after_2;
    // 0x808006F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808006F8: jal         0x800852D0
    // 0x808006FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_13(rdram, ctx);
        goto after_3;
    // 0x808006FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800700: lui         $a1, 0x3F03
    ctx->r5 = S32(0X3F03 << 16);
    // 0x80800704: ori         $a1, $a1, 0x126F
    ctx->r5 = ctx->r5 | 0X126F;
    // 0x80800708: jal         0x8008B348
    // 0x8080070C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_4;
    // 0x8080070C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800710: beq         $v0, $zero, L_80800728
    if (ctx->r2 == 0) {
        // 0x80800714: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800728;
    }
    // 0x80800714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800718: jal         0x800852B8
    // 0x8080071C: lui         $a1, 0x43E1
    ctx->r5 = S32(0X43E1 << 16);
    _baswim_entrypoint_10(rdram, ctx);
        goto after_5;
    // 0x8080071C: lui         $a1, 0x43E1
    ctx->r5 = S32(0X43E1 << 16);
    after_5:
    // 0x80800720: b           L_80800738
    // 0x80800724: lui         $a1, 0x3E2E
    ctx->r5 = S32(0X3E2E << 16);
        goto L_80800738;
    // 0x80800724: lui         $a1, 0x3E2E
    ctx->r5 = S32(0X3E2E << 16);
L_80800728:
    // 0x80800728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080072C: jal         0x800852B8
    // 0x80800730: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    _baswim_entrypoint_10(rdram, ctx);
        goto after_6;
    // 0x80800730: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_6:
    // 0x80800734: lui         $a1, 0x3E2E
    ctx->r5 = S32(0X3E2E << 16);
L_80800738:
    // 0x80800738: ori         $a1, $a1, 0x147B
    ctx->r5 = ctx->r5 | 0X147B;
    // 0x8080073C: jal         0x8008B348
    // 0x80800740: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x80800740: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_7:
    // 0x80800744: beq         $v0, $zero, L_80800760
    if (ctx->r2 == 0) {
        // 0x80800748: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800760;
    }
    // 0x80800748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080074C: lui         $a2, 0x3FF3
    ctx->r6 = S32(0X3FF3 << 16);
    // 0x80800750: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800754: addiu       $a1, $zero, 0x3FD
    ctx->r5 = ADD32(0, 0X3FD);
    // 0x80800758: jal         0x8009DF18
    // 0x8080075C: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    func_8009DF18(rdram, ctx);
        goto after_8;
    // 0x8080075C: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    after_8:
L_80800760:
    // 0x80800760: lui         $a1, 0x3F2B
    ctx->r5 = S32(0X3F2B << 16);
    // 0x80800764: ori         $a1, $a1, 0x851F
    ctx->r5 = ctx->r5 | 0X851F;
    // 0x80800768: jal         0x8008B348
    // 0x8080076C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_9;
    // 0x8080076C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_9:
    // 0x80800770: beq         $v0, $zero, L_8080078C
    if (ctx->r2 == 0) {
        // 0x80800774: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080078C;
    }
    // 0x80800774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800778: lui         $a2, 0x3FD9
    ctx->r6 = S32(0X3FD9 << 16);
    // 0x8080077C: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800780: addiu       $a1, $zero, 0x3FD
    ctx->r5 = ADD32(0, 0X3FD);
    // 0x80800784: jal         0x8009DF18
    // 0x80800788: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    func_8009DF18(rdram, ctx);
        goto after_10;
    // 0x80800788: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    after_10:
L_8080078C:
    // 0x8080078C: jal         0x80085280
    // 0x80800790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_3(rdram, ctx);
        goto after_11;
    // 0x80800790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800794: beq         $v0, $zero, L_808007C4
    if (ctx->r2 == 0) {
        // 0x80800798: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808007C4;
    }
    // 0x80800798: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080079C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808007A0: beq         $v0, $at, L_808007E0
    if (ctx->r2 == ctx->r1) {
        // 0x808007A4: addiu       $t7, $zero, 0x81
        ctx->r15 = ADD32(0, 0X81);
            goto L_808007E0;
    }
    // 0x808007A4: addiu       $t7, $zero, 0x81
    ctx->r15 = ADD32(0, 0X81);
    // 0x808007A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808007AC: beq         $v0, $at, L_808007EC
    if (ctx->r2 == ctx->r1) {
        // 0x808007B0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_808007EC;
    }
    // 0x808007B0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808007B4: beq         $v0, $at, L_808007E8
    if (ctx->r2 == ctx->r1) {
        // 0x808007B8: addiu       $t8, $zero, 0x90
        ctx->r24 = ADD32(0, 0X90);
            goto L_808007E8;
    }
    // 0x808007B8: addiu       $t8, $zero, 0x90
    ctx->r24 = ADD32(0, 0X90);
    // 0x808007BC: b           L_808007EC
    // 0x808007C0: nop

        goto L_808007EC;
    // 0x808007C0: nop

L_808007C4:
    // 0x808007C4: lui         $a1, 0x3F7D
    ctx->r5 = S32(0X3F7D << 16);
    // 0x808007C8: jal         0x8008B348
    // 0x808007CC: ori         $a1, $a1, 0x70A4
    ctx->r5 = ctx->r5 | 0X70A4;
    func_8008B348(rdram, ctx);
        goto after_12;
    // 0x808007CC: ori         $a1, $a1, 0x70A4
    ctx->r5 = ctx->r5 | 0X70A4;
    after_12:
    // 0x808007D0: beq         $v0, $zero, L_808007EC
    if (ctx->r2 == 0) {
        // 0x808007D4: addiu       $t6, $zero, 0x2B
        ctx->r14 = ADD32(0, 0X2B);
            goto L_808007EC;
    }
    // 0x808007D4: addiu       $t6, $zero, 0x2B
    ctx->r14 = ADD32(0, 0X2B);
    // 0x808007D8: b           L_808007EC
    // 0x808007DC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
        goto L_808007EC;
    // 0x808007DC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_808007E0:
    // 0x808007E0: b           L_808007EC
    // 0x808007E4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
        goto L_808007EC;
    // 0x808007E4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_808007E8:
    // 0x808007E8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_808007EC:
    // 0x808007EC: jal         0x80085278
    // 0x808007F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_2(rdram, ctx);
        goto after_13;
    // 0x808007F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808007F4: beq         $v0, $zero, L_80800800
    if (ctx->r2 == 0) {
        // 0x808007F8: addiu       $t9, $zero, 0x2D
        ctx->r25 = ADD32(0, 0X2D);
            goto L_80800800;
    }
    // 0x808007F8: addiu       $t9, $zero, 0x2D
    ctx->r25 = ADD32(0, 0X2D);
    // 0x808007FC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80800800:
    // 0x80800800: jal         0x8008E35C
    // 0x80800804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_14;
    // 0x80800804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800808: bne         $v0, $zero, L_80800818
    if (ctx->r2 != 0) {
        // 0x8080080C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800818;
    }
    // 0x8080080C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800810: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80800814: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_80800818:
    // 0x80800818: jal         0x8009E5C8
    // 0x8080081C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_15;
    // 0x8080081C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_15:
    // 0x80800820: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800824: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800828: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080082C: jr          $ra
    // 0x80800830: nop

    return;
    // 0x80800830: nop

;}
RECOMP_FUNC void bsbanswim_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800834: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800838: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(68, 0XA50) << 16);
    // 0x8080083C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800840: jr          $ra
    // 0x80800844: lw          $v0, 0xA50($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(68, 0XA50));
    return;
    // 0x80800844: lw          $v0, 0xA50($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(68, 0XA50));
;}
RECOMP_FUNC void func_80800848_bsbanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800848: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080084C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800850: jal         0x800003BC
    // 0x80800854: nop

    func_808003BC_bsbanswim(rdram, ctx);
        goto after_0;
    // 0x80800854: nop

    after_0:
    // 0x80800858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080085C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800860: jr          $ra
    // 0x80800864: nop

    return;
    // 0x80800864: nop

;}
RECOMP_FUNC void func_80800868_bsbanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800868: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080086C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800870: jal         0x8008CABC
    // 0x80800874: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800874: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800878: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8080087C: jal         0x8000040C
    // 0x80800880: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8080040C_bsbanswim(rdram, ctx);
        goto after_1;
    // 0x80800880: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800884: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x80800888: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x8080088C: jal         0x8008B1BC
    // 0x80800890: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8008B1BC(rdram, ctx);
        goto after_2;
    // 0x80800890: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80800894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800898: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080089C: jr          $ra
    // 0x808008A0: nop

    return;
    // 0x808008A0: nop

;}
RECOMP_FUNC void func_808008A4_bsbanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808008A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808008AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808008B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808008B4: jal         0x8008CABC
    // 0x808008B8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808008B8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808008BC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x808008C0: jal         0x800852C0
    // 0x808008C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_11(rdram, ctx);
        goto after_1;
    // 0x808008C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808008C8: jal         0x800852C8
    // 0x808008CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_12(rdram, ctx);
        goto after_2;
    // 0x808008CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808008D0: jal         0x800852D0
    // 0x808008D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_13(rdram, ctx);
        goto after_3;
    // 0x808008D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808008D8: lui         $a1, 0x3F03
    ctx->r5 = S32(0X3F03 << 16);
    // 0x808008DC: ori         $a1, $a1, 0x126F
    ctx->r5 = ctx->r5 | 0X126F;
    // 0x808008E0: jal         0x8008B348
    // 0x808008E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_4;
    // 0x808008E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x808008E8: beq         $v0, $zero, L_80800900
    if (ctx->r2 == 0) {
        // 0x808008EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800900;
    }
    // 0x808008EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008F0: jal         0x800852B8
    // 0x808008F4: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    _baswim_entrypoint_10(rdram, ctx);
        goto after_5;
    // 0x808008F4: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_5:
    // 0x808008F8: b           L_80800910
    // 0x808008FC: lui         $a1, 0x3E2E
    ctx->r5 = S32(0X3E2E << 16);
        goto L_80800910;
    // 0x808008FC: lui         $a1, 0x3E2E
    ctx->r5 = S32(0X3E2E << 16);
L_80800900:
    // 0x80800900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800904: jal         0x800852B8
    // 0x80800908: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    _baswim_entrypoint_10(rdram, ctx);
        goto after_6;
    // 0x80800908: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    after_6:
    // 0x8080090C: lui         $a1, 0x3E2E
    ctx->r5 = S32(0X3E2E << 16);
L_80800910:
    // 0x80800910: ori         $a1, $a1, 0x147B
    ctx->r5 = ctx->r5 | 0X147B;
    // 0x80800914: jal         0x8008B348
    // 0x80800918: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x80800918: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_7:
    // 0x8080091C: beq         $v0, $zero, L_80800938
    if (ctx->r2 == 0) {
        // 0x80800920: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800938;
    }
    // 0x80800920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800924: lui         $a2, 0x3FF3
    ctx->r6 = S32(0X3FF3 << 16);
    // 0x80800928: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8080092C: addiu       $a1, $zero, 0x3FD
    ctx->r5 = ADD32(0, 0X3FD);
    // 0x80800930: jal         0x8009DF18
    // 0x80800934: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    func_8009DF18(rdram, ctx);
        goto after_8;
    // 0x80800934: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    after_8:
L_80800938:
    // 0x80800938: lui         $a1, 0x3F2B
    ctx->r5 = S32(0X3F2B << 16);
    // 0x8080093C: ori         $a1, $a1, 0x851F
    ctx->r5 = ctx->r5 | 0X851F;
    // 0x80800940: jal         0x8008B348
    // 0x80800944: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_9;
    // 0x80800944: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_9:
    // 0x80800948: beq         $v0, $zero, L_80800964
    if (ctx->r2 == 0) {
        // 0x8080094C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800964;
    }
    // 0x8080094C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800950: lui         $a2, 0x3FD9
    ctx->r6 = S32(0X3FD9 << 16);
    // 0x80800954: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800958: addiu       $a1, $zero, 0x3FD
    ctx->r5 = ADD32(0, 0X3FD);
    // 0x8080095C: jal         0x8009DF18
    // 0x80800960: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    func_8009DF18(rdram, ctx);
        goto after_10;
    // 0x80800960: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    after_10:
L_80800964:
    // 0x80800964: jal         0x80085280
    // 0x80800968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_3(rdram, ctx);
        goto after_11;
    // 0x80800968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8080096C: beq         $v0, $zero, L_808009A0
    if (ctx->r2 == 0) {
        // 0x80800970: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808009A0;
    }
    // 0x80800970: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800974: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800978: beq         $v0, $at, L_808009BC
    if (ctx->r2 == ctx->r1) {
        // 0x8080097C: addiu       $t7, $zero, 0x81
        ctx->r15 = ADD32(0, 0X81);
            goto L_808009BC;
    }
    // 0x8080097C: addiu       $t7, $zero, 0x81
    ctx->r15 = ADD32(0, 0X81);
    // 0x80800980: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800984: beq         $v0, $at, L_808009C4
    if (ctx->r2 == ctx->r1) {
        // 0x80800988: addiu       $t8, $zero, 0x82
        ctx->r24 = ADD32(0, 0X82);
            goto L_808009C4;
    }
    // 0x80800988: addiu       $t8, $zero, 0x82
    ctx->r24 = ADD32(0, 0X82);
    // 0x8080098C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800990: beq         $v0, $at, L_808009C8
    if (ctx->r2 == ctx->r1) {
        // 0x80800994: nop
    
            goto L_808009C8;
    }
    // 0x80800994: nop

    // 0x80800998: b           L_808009C8
    // 0x8080099C: nop

        goto L_808009C8;
    // 0x8080099C: nop

L_808009A0:
    // 0x808009A0: lui         $a1, 0x3F7D
    ctx->r5 = S32(0X3F7D << 16);
    // 0x808009A4: jal         0x8008B348
    // 0x808009A8: ori         $a1, $a1, 0x70A4
    ctx->r5 = ctx->r5 | 0X70A4;
    func_8008B348(rdram, ctx);
        goto after_12;
    // 0x808009A8: ori         $a1, $a1, 0x70A4
    ctx->r5 = ctx->r5 | 0X70A4;
    after_12:
    // 0x808009AC: beq         $v0, $zero, L_808009C8
    if (ctx->r2 == 0) {
        // 0x808009B0: addiu       $t6, $zero, 0x2B
        ctx->r14 = ADD32(0, 0X2B);
            goto L_808009C8;
    }
    // 0x808009B0: addiu       $t6, $zero, 0x2B
    ctx->r14 = ADD32(0, 0X2B);
    // 0x808009B4: b           L_808009C8
    // 0x808009B8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
        goto L_808009C8;
    // 0x808009B8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_808009BC:
    // 0x808009BC: b           L_808009C8
    // 0x808009C0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
        goto L_808009C8;
    // 0x808009C0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_808009C4:
    // 0x808009C4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_808009C8:
    // 0x808009C8: jal         0x80085278
    // 0x808009CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_2(rdram, ctx);
        goto after_13;
    // 0x808009CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808009D0: beq         $v0, $zero, L_808009DC
    if (ctx->r2 == 0) {
        // 0x808009D4: addiu       $t9, $zero, 0x2D
        ctx->r25 = ADD32(0, 0X2D);
            goto L_808009DC;
    }
    // 0x808009D4: addiu       $t9, $zero, 0x2D
    ctx->r25 = ADD32(0, 0X2D);
    // 0x808009D8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_808009DC:
    // 0x808009DC: jal         0x8008E35C
    // 0x808009E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_14;
    // 0x808009E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808009E4: bne         $v0, $zero, L_808009F4
    if (ctx->r2 != 0) {
        // 0x808009E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009F4;
    }
    // 0x808009E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009EC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x808009F0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_808009F4:
    // 0x808009F4: jal         0x8009E5C8
    // 0x808009F8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_15;
    // 0x808009F8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_15:
    // 0x808009FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800A00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800A04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800A08: jr          $ra
    // 0x80800A0C: nop

    return;
    // 0x80800A0C: nop

;}
RECOMP_FUNC void bsbanswim_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A10: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800A14: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(68, 0XA60) << 16);
    // 0x80800A18: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800A1C: jr          $ra
    // 0x80800A20: lw          $v0, 0xA60($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(68, 0XA60));
    return;
    // 0x80800A20: lw          $v0, 0xA60($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(68, 0XA60));
    // 0x80800A24: nop

    // 0x80800A28: nop

    // 0x80800A2C: nop

;}
RECOMP_FUNC void bsbbarge_setSubstate(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800004: addiu       $t7, $a1, -0x1
    ctx->r15 = ADD32(ctx->r5, -0X1);
    // 0x80800008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080000C: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800014: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800018: beq         $at, $zero, L_80800164
    if (ctx->r1 == 0) {
        // 0x8080001C: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_80800164;
    }
    // 0x8080001C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80800020: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80800024: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(69, 0X600) << 16);
    // 0x80800028: addu        $at, $at, $t7
    gpr jr_addend_80800030 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8080002C: lw          $t7, 0x600($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(69, 0X600));
    // 0x80800030: jr          $t7
    // 0x80800034: nop

    switch (jr_addend_80800030 >> 2) {
        case 0: goto L_80800164; break;
        case 1: goto L_80800038; break;
        case 2: goto L_80800090; break;
        case 3: goto L_80800118; break;
        case 4: goto L_80800148; break;
        default: switch_error(__func__, 0x80800030, 0x80800600);
    }
    // 0x80800034: nop

L_80800038:
    // 0x80800038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080003C: jal         0x80095748
    // 0x80800040: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_80095748(rdram, ctx);
        goto after_0;
    // 0x80800040: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x80800044: beq         $v0, $zero, L_80800068
    if (ctx->r2 == 0) {
        // 0x80800048: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_80800068;
    }
    // 0x80800048: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8080004C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800050: jal         0x80095760
    // 0x80800054: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_80095760(rdram, ctx);
        goto after_1;
    // 0x80800054: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_1:
    // 0x80800058: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(69, 0X614) << 16);
    // 0x8080005C: lwc1        $f4, 0x614($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(69, 0X614));
    // 0x80800060: b           L_80800074
    // 0x80800064: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
        goto L_80800074;
    // 0x80800064: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
L_80800068:
    // 0x80800068: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080006C: nop

    // 0x80800070: swc1        $f6, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f6.u32l;
L_80800074:
    // 0x80800074: lui         $a2, 0x3C23
    ctx->r6 = S32(0X3C23 << 16);
    // 0x80800078: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x8080007C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800080: jal         0x80085338
    // 0x80800084: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_set(rdram, ctx);
        goto after_2;
    // 0x80800084: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80800088: b           L_80800168
    // 0x8080008C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_80800168;
    // 0x8080008C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_80800090:
    // 0x80800090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800094: jal         0x8009D2D8
    // 0x80800098: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D2D8(rdram, ctx);
        goto after_3;
    // 0x80800098: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8080009C: lui         $a1, 0x3F10
    ctx->r5 = S32(0X3F10 << 16);
    // 0x808000A0: ori         $a1, $a1, 0xA3D7
    ctx->r5 = ctx->r5 | 0XA3D7;
    // 0x808000A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000A8: jal         0x8008CF1C
    // 0x808000AC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_4;
    // 0x808000AC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_4:
    // 0x808000B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B4: jal         0x8009B9B0
    // 0x808000B8: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_5;
    // 0x808000B8: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_5:
    // 0x808000BC: jal         0x8009C990
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_6;
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808000C4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x808000C8: jal         0x8009BB00
    // 0x808000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_7;
    // 0x808000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808000D0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808000D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D8: jal         0x8009BA68
    // 0x808000DC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_8009BA68(rdram, ctx);
        goto after_8;
    // 0x808000DC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_8:
    // 0x808000E0: lui         $a2, 0x3F0E
    ctx->r6 = S32(0X3F0E << 16);
    // 0x808000E4: ori         $a2, $a2, 0xD917
    ctx->r6 = ctx->r6 | 0XD917;
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000EC: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    // 0x808000F0: jal         0x8009DF18
    // 0x808000F4: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DF18(rdram, ctx);
        goto after_9;
    // 0x808000F4: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_9:
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000FC: jal         0x80084A28
    // 0x80800100: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _badust_entrypoint_12(rdram, ctx);
        goto after_10;
    // 0x80800100: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x80800104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800108: jal         0x80095760
    // 0x8080010C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_80095760(rdram, ctx);
        goto after_11;
    // 0x8080010C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_11:
    // 0x80800110: b           L_80800168
    // 0x80800114: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_80800168;
    // 0x80800114: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_80800118:
    // 0x80800118: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x8080011C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800124: jal         0x8008CF1C
    // 0x80800128: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_12;
    // 0x80800128: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_12:
    // 0x8080012C: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x80800130: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800138: jal         0x80085338
    // 0x8080013C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_set(rdram, ctx);
        goto after_13;
    // 0x8080013C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x80800140: b           L_80800168
    // 0x80800144: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_80800168;
    // 0x80800144: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_80800148:
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080014C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80800150: jal         0x8008CF1C
    // 0x80800154: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_14;
    // 0x80800154: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_14:
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080015C: jal         0x80084A28
    // 0x80800160: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _badust_entrypoint_12(rdram, ctx);
        goto after_15;
    // 0x80800160: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
L_80800164:
    // 0x80800164: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_80800168:
    // 0x80800168: sw          $t8, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r24;
    // 0x8080016C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800170: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800174: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800178: jr          $ra
    // 0x8080017C: nop

    return;
    // 0x8080017C: nop

L_80800180:
    // 0x80800180: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800184: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800188: jal         0x8009E474
    // 0x8080018C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E474(rdram, ctx);
        goto after_16;
    // 0x8080018C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_16:
    // 0x80800190: jal         0x800C6DA0
    // 0x80800194: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    func_800C6DA0(rdram, ctx);
        goto after_17;
    // 0x80800194: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    after_17:
    // 0x80800198: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080019C: jal         0x800A0CF4
    // 0x808001A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_18;
    // 0x808001A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x808001A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001A8: jal         0x80095774
    // 0x808001AC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_80095774(rdram, ctx);
        goto after_19;
    // 0x808001AC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_19:
    // 0x808001B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001B4: jal         0x80084A28
    // 0x808001B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _badust_entrypoint_12(rdram, ctx);
        goto after_20;
    // 0x808001B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x808001BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001C4: jr          $ra
    // 0x808001C8: nop

    return;
    // 0x808001C8: nop

L_808001CC:
    // 0x808001CC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808001D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808001D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808001D8: jal         0x8008CABC
    // 0x808001DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_21;
    // 0x808001DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_21:
    // 0x808001E0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x808001E4: jal         0x8008AF24
    // 0x808001E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_22;
    // 0x808001E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_22:
    // 0x808001EC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x808001F0: jal         0x8008B1A0
    // 0x808001F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_23;
    // 0x808001F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_23:
    // 0x808001F8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x808001FC: jal         0x8008AED4
    // 0x80800200: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    func_8008AED4(rdram, ctx);
        goto after_24;
    // 0x80800200: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_24:
    // 0x80800204: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800208: jal         0x8008B1BC
    // 0x8080020C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_25;
    // 0x8080020C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_25:
    // 0x80800210: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800214: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80800218: jal         0x8008B1D4
    // 0x8080021C: lui         $a2, 0x3EC0
    ctx->r6 = S32(0X3EC0 << 16);
    func_8008B1D4(rdram, ctx);
        goto after_26;
    // 0x8080021C: lui         $a2, 0x3EC0
    ctx->r6 = S32(0X3EC0 << 16);
    after_26:
    // 0x80800220: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800224: jal         0x8008B134
    // 0x80800228: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_27;
    // 0x80800228: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_27:
    // 0x8080022C: jal         0x8008B064
    // 0x80800230: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B064(rdram, ctx);
        goto after_28;
    // 0x80800230: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_28:
    // 0x80800234: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80800238: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800240: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800244: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800248: jal         0x8009FFD8
    // 0x8080024C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_29;
    // 0x8080024C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_29:
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800254: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x80800258: jal         0x8009C99C
    // 0x8080025C: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_30;
    // 0x8080025C: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_30:
    // 0x80800260: jal         0x8009C990
    // 0x80800264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_31;
    // 0x80800264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x80800268: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080026C: jal         0x8009B9C0
    // 0x80800270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_32;
    // 0x80800270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x80800274: jal         0x8009BB00
    // 0x80800278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_33;
    // 0x80800278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x8080027C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(69, 0X618) << 16);
    // 0x80800280: lwc1        $f4, 0x618($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(69, 0X618));
    // 0x80800284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800288: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8080028C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80800290: jal         0x8009B9B0
    // 0x80800294: nop

    func_8009B9B0(rdram, ctx);
        goto after_34;
    // 0x80800294: nop

    after_34:
    // 0x80800298: jal         0x8009C990
    // 0x8080029C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_35;
    // 0x8080029C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x808002A0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x808002A4: jal         0x8009BB00
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_36;
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x808002AC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808002B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002B4: jal         0x8009BA68
    // 0x808002B8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_37;
    // 0x808002B8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_37:
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C0: jal         0x800A0CF4
    // 0x808002C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_38;
    // 0x808002C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_38:
    // 0x808002C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002CC: jal         0x80095774
    // 0x808002D0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_80095774(rdram, ctx);
        goto after_39;
    // 0x808002D0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_39:
    // 0x808002D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002D8: jal         0x80095774
    // 0x808002DC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_80095774(rdram, ctx);
        goto after_40;
    // 0x808002DC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_40:
    // 0x808002E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002E4: jal         0x80095774
    // 0x808002E8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_80095774(rdram, ctx);
        goto after_41;
    // 0x808002E8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_41:
    // 0x808002EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002F0: jal         0x80095774
    // 0x808002F4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_80095774(rdram, ctx);
        goto after_42;
    // 0x808002F4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_42:
    // 0x808002F8: jal         0x8009E4AC
    // 0x808002FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_43;
    // 0x808002FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_43:
    // 0x80800300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800304: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800308: jal         0x8009E5A4
    // 0x8080030C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8009E5A4(rdram, ctx);
        goto after_44;
    // 0x8080030C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_44:
    // 0x80800310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800314: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800318: jal         0x8009E55C
    // 0x8080031C: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    func_8009E55C(rdram, ctx);
        goto after_45;
    // 0x8080031C: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    after_45:
    // 0x80800320: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    // 0x80800324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800328: jal         0x80000000
    // 0x8080032C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    bsbbarge_setSubstate(rdram, ctx);
        goto after_46;
    // 0x8080032C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_46:
    // 0x80800330: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800334: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800338: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8080033C: jr          $ra
    // 0x80800340: nop

    return;
    // 0x80800340: nop

L_80800344:
    // 0x80800344: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800348: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080034C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800350: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800354: jal         0x8008CABC
    // 0x80800358: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_47;
    // 0x80800358: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_47:
    // 0x8080035C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800364: jal         0x80091A30
    // 0x80800368: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A30(rdram, ctx);
        goto after_48;
    // 0x80800368: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_48:
    // 0x8080036C: beq         $v0, $zero, L_8080037C
    if (ctx->r2 == 0) {
        // 0x80800370: addiu       $a1, $zero, 0xA
        ctx->r5 = ADD32(0, 0XA);
            goto L_8080037C;
    }
    // 0x80800370: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80800374: jal         0x80095760
    // 0x80800378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095760(rdram, ctx);
        goto after_49;
    // 0x80800378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_49:
L_8080037C:
    // 0x8080037C: lw          $t6, 0x160($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X160);
    // 0x80800380: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80800384: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x80800388: beq         $at, $zero, L_80800594
    if (ctx->r1 == 0) {
        // 0x8080038C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80800594;
    }
    // 0x8080038C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80800390: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(69, 0X61C) << 16);
    // 0x80800394: addu        $at, $at, $t7
    gpr jr_addend_8080039C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80800398: lw          $t7, 0x61C($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(69, 0X61C));
    // 0x8080039C: jr          $t7
    // 0x808003A0: nop

    switch (jr_addend_8080039C >> 2) {
        case 0: goto L_808003A4; break;
        case 1: goto L_808003E4; break;
        case 2: goto L_80800488; break;
        case 3: goto L_808004B4; break;
        case 4: goto L_80800530; break;
        case 5: goto L_80800180; break;
        case 6: goto L_808001CC; break;
        case 7: goto L_80800344; break;
        default: switch_error(__func__, 0x8080039C, 0x8080061C);
    }
    // 0x808003A0: nop

L_808003A4:
    // 0x808003A4: lui         $a1, 0x3E0E
    ctx->r5 = S32(0X3E0E << 16);
    // 0x808003A8: ori         $a1, $a1, 0x8A72
    ctx->r5 = ctx->r5 | 0X8A72;
    // 0x808003AC: jal         0x8008B348
    // 0x808003B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_50;
    // 0x808003B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_50:
    // 0x808003B4: beq         $v0, $zero, L_808003C4
    if (ctx->r2 == 0) {
        // 0x808003B8: nop
    
            goto L_808003C4;
    }
    // 0x808003B8: nop

    // 0x808003BC: jal         0x8009D874
    // 0x808003C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D874(rdram, ctx);
        goto after_51;
    // 0x808003C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_51:
L_808003C4:
    // 0x808003C4: jal         0x8008B324
    // 0x808003C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_52;
    // 0x808003C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_52:
    // 0x808003CC: beq         $v0, $zero, L_80800594
    if (ctx->r2 == 0) {
        // 0x808003D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800594;
    }
    // 0x808003D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003D4: jal         0x80000000
    // 0x808003D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    bsbbarge_setSubstate(rdram, ctx);
        goto after_53;
    // 0x808003D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_53:
    // 0x808003DC: b           L_80800598
    // 0x808003E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800598;
    // 0x808003E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808003E4:
    // 0x808003E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003E8: jal         0x800852F0
    // 0x808003EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_decrement(rdram, ctx);
        goto after_54;
    // 0x808003EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_54:
    // 0x808003F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003F4: jal         0x80095748
    // 0x808003F8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_80095748(rdram, ctx);
        goto after_55;
    // 0x808003F8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_55:
    // 0x808003FC: beq         $v0, $zero, L_80800464
    if (ctx->r2 == 0) {
        // 0x80800400: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800464;
    }
    // 0x80800400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800404: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x80800408: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080040C: jal         0x80085318
    // 0x80800410: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_isLessThan(rdram, ctx);
        goto after_56;
    // 0x80800410: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_56:
    // 0x80800414: beq         $v0, $zero, L_80800464
    if (ctx->r2 == 0) {
        // 0x80800418: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800464;
    }
    // 0x80800418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080041C: jal         0x80095738
    // 0x80800420: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_80095738(rdram, ctx);
        goto after_57;
    // 0x80800420: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_57:
    // 0x80800424: beq         $v0, $zero, L_80800448
    if (ctx->r2 == 0) {
        // 0x80800428: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800448;
    }
    // 0x80800428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080042C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800430: addiu       $a1, $zero, 0x4400
    ctx->r5 = ADD32(0, 0X4400);
    // 0x80800434: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800438: jal         0x8009DF94
    // 0x8080043C: addiu       $a3, $zero, 0x7530
    ctx->r7 = ADD32(0, 0X7530);
    func_8009DF94(rdram, ctx);
        goto after_58;
    // 0x8080043C: addiu       $a3, $zero, 0x7530
    ctx->r7 = ADD32(0, 0X7530);
    after_58:
    // 0x80800440: b           L_8080045C
    // 0x80800444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080045C;
    // 0x80800444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800448:
    // 0x80800448: addiu       $a1, $zero, 0x442D
    ctx->r5 = ADD32(0, 0X442D);
    // 0x8080044C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800450: jal         0x8009DF94
    // 0x80800454: addiu       $a3, $zero, 0x7530
    ctx->r7 = ADD32(0, 0X7530);
    func_8009DF94(rdram, ctx);
        goto after_59;
    // 0x80800454: addiu       $a3, $zero, 0x7530
    ctx->r7 = ADD32(0, 0X7530);
    after_59:
    // 0x80800458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080045C:
    // 0x8080045C: jal         0x80095760
    // 0x80800460: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_80095760(rdram, ctx);
        goto after_60;
    // 0x80800460: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_60:
L_80800464:
    // 0x80800464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800468: jal         0x80085330
    // 0x8080046C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_isZero(rdram, ctx);
        goto after_61;
    // 0x8080046C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_61:
    // 0x80800470: beq         $v0, $zero, L_80800594
    if (ctx->r2 == 0) {
        // 0x80800474: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800594;
    }
    // 0x80800474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800478: jal         0x80000000
    // 0x8080047C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    bsbbarge_setSubstate(rdram, ctx);
        goto after_62;
    // 0x8080047C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_62:
    // 0x80800480: b           L_80800598
    // 0x80800484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800598;
    // 0x80800484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800488:
    // 0x80800488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080048C: jal         0x8009B9B0
    // 0x80800490: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_63;
    // 0x80800490: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_63:
    // 0x80800494: jal         0x8008B324
    // 0x80800498: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_64;
    // 0x80800498: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_64:
    // 0x8080049C: beq         $v0, $zero, L_80800594
    if (ctx->r2 == 0) {
        // 0x808004A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800594;
    }
    // 0x808004A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004A4: jal         0x80000000
    // 0x808004A8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    bsbbarge_setSubstate(rdram, ctx);
        goto after_65;
    // 0x808004A8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_65:
    // 0x808004AC: b           L_80800598
    // 0x808004B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800598;
    // 0x808004B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808004B4:
    // 0x808004B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004B8: jal         0x800852F0
    // 0x808004BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_66;
    // 0x808004BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_66:
    // 0x808004C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004C4: jal         0x80095748
    // 0x808004C8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_80095748(rdram, ctx);
        goto after_67;
    // 0x808004C8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_67:
    // 0x808004CC: bne         $v0, $zero, L_808004E0
    if (ctx->r2 != 0) {
        // 0x808004D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004E0;
    }
    // 0x808004D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004D4: jal         0x80085330
    // 0x808004D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_isZero(rdram, ctx);
        goto after_68;
    // 0x808004D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_68:
    // 0x808004DC: beq         $v0, $zero, L_808004F4
    if (ctx->r2 == 0) {
        // 0x808004E0: lui         $at, 0x42A0
        ctx->r1 = S32(0X42A0 << 16);
            goto L_808004F4;
    }
L_808004E0:
    // 0x808004E0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x808004E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808004E8: lwc1        $f4, 0x16C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x808004EC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x808004F0: swc1        $f8, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f8.u32l;
L_808004F4:
    // 0x808004F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004F8: jal         0x8009B9B0
    // 0x808004FC: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_69;
    // 0x808004FC: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_69:
    // 0x80800500: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80800504: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800508: lwc1        $f10, 0x16C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x8080050C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800510: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80800514: nop

    // 0x80800518: bc1fl       L_80800598
    if (!c1cs) {
        // 0x8080051C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800598;
    }
    goto skip_0;
    // 0x8080051C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800520: jal         0x80000000
    // 0x80800524: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    bsbbarge_setSubstate(rdram, ctx);
        goto after_70;
    // 0x80800524: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_70:
    // 0x80800528: b           L_80800598
    // 0x8080052C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800598;
    // 0x8080052C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800530:
    // 0x80800530: jal         0x8008E078
    // 0x80800534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_71;
    // 0x80800534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_71:
    // 0x80800538: bne         $v0, $zero, L_80800548
    if (ctx->r2 != 0) {
        // 0x8080053C: lui         $a1, 0x3F33
        ctx->r5 = S32(0X3F33 << 16);
            goto L_80800548;
    }
    // 0x8080053C: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x80800540: addiu       $t8, $zero, 0x2F
    ctx->r24 = ADD32(0, 0X2F);
    // 0x80800544: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80800548:
    // 0x80800548: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080054C: jal         0x8008B348
    // 0x80800550: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    func_8008B348(rdram, ctx);
        goto after_72;
    // 0x80800550: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    after_72:
    // 0x80800554: beq         $v0, $zero, L_8080056C
    if (ctx->r2 == 0) {
        // 0x80800558: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080056C;
    }
    // 0x80800558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080055C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80800560: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80800564: jal         0x80095774
    // 0x80800568: swc1        $f18, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f18.u32l;
    func_80095774(rdram, ctx);
        goto after_73;
    // 0x80800568: swc1        $f18, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f18.u32l;
    after_73:
L_8080056C:
    // 0x8080056C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800570: jal         0x8009B9B0
    // 0x80800574: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_74;
    // 0x80800574: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_74:
    // 0x80800578: lui         $a1, 0x3F6B
    ctx->r5 = S32(0X3F6B << 16);
    // 0x8080057C: ori         $a1, $a1, 0x573F
    ctx->r5 = ctx->r5 | 0X573F;
    // 0x80800580: jal         0x8008B348
    // 0x80800584: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_75;
    // 0x80800584: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_75:
    // 0x80800588: beq         $v0, $zero, L_80800594
    if (ctx->r2 == 0) {
        // 0x8080058C: addiu       $t9, $zero, 0x20
        ctx->r25 = ADD32(0, 0X20);
            goto L_80800594;
    }
    // 0x8080058C: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x80800590: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80800594:
    // 0x80800594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800598:
    // 0x80800598: jal         0x80095738
    // 0x8080059C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_80095738(rdram, ctx);
        goto after_76;
    // 0x8080059C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_76:
    // 0x808005A0: beq         $v0, $zero, L_808005B0
    if (ctx->r2 == 0) {
        // 0x808005A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005B0;
    }
    // 0x808005A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005A8: jal         0x8008EE88
    // 0x808005AC: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    func_8008EE88(rdram, ctx);
        goto after_77;
    // 0x808005AC: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_77:
L_808005B0:
    // 0x808005B0: jal         0x8008E35C
    // 0x808005B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_78;
    // 0x808005B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_78:
    // 0x808005B8: beq         $v0, $zero, L_808005C8
    if (ctx->r2 == 0) {
        // 0x808005BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005C8;
    }
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005C0: addiu       $t0, $zero, 0x4C
    ctx->r8 = ADD32(0, 0X4C);
    // 0x808005C4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_808005C8:
    // 0x808005C8: jal         0x8009E5C8
    // 0x808005CC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_79;
    // 0x808005CC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_79:
    // 0x808005D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808005D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808005D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808005DC: jr          $ra
    // 0x808005E0: nop

    return;
    // 0x808005E0: nop

;}
RECOMP_FUNC void bsbbarge_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005E4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808005E8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(69, 0X630) << 16);
    // 0x808005EC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808005F0: jr          $ra
    // 0x808005F4: lw          $v0, 0x630($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(69, 0X630));
    return;
    // 0x808005F4: lw          $v0, 0x630($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(69, 0X630));
    // 0x808005F8: nop

    // 0x808005FC: nop

;}
RECOMP_FUNC void func_80800000_bsbbilldrill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: sw          $zero, 0x168($a0)
    MEM_W(0X168, ctx->r4) = 0;
    return;
    // 0x80800004: sw          $zero, 0x168($a0)
    MEM_W(0X168, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80800008_bsbbilldrill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8080000C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800014: jal         0x800BF8E4
    // 0x80800018: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800BF8E4(rdram, ctx);
        goto after_0;
    // 0x80800018: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080001C: blezl       $v0, L_808000B0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80800020: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808000B0;
    }
    goto skip_0;
    // 0x80800020: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800024: lw          $t6, 0x168($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X168);
    // 0x80800028: bnel        $t6, $zero, L_8080005C
    if (ctx->r14 != 0) {
        // 0x8080002C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080005C;
    }
    goto skip_1;
    // 0x8080002C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800030: jal         0x800C8A98
    // 0x80800034: nop

    func_800C8A98(rdram, ctx);
        goto after_1;
    // 0x80800034: nop

    after_1:
    // 0x80800038: sw          $v0, 0x168($s0)
    MEM_W(0X168, ctx->r16) = ctx->r2;
    // 0x8080003C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800040: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80800044: jal         0x800C8E54
    // 0x80800048: lui         $a2, 0x43AF
    ctx->r6 = S32(0X43AF << 16);
    func_800C8E54(rdram, ctx);
        goto after_2;
    // 0x80800048: lui         $a2, 0x43AF
    ctx->r6 = S32(0X43AF << 16);
    after_2:
    // 0x8080004C: lw          $a0, 0x168($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X168);
    // 0x80800050: jal         0x800C8F64
    // 0x80800054: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_800C8F64(rdram, ctx);
        goto after_3;
    // 0x80800054: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_3:
    // 0x80800058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080005C:
    // 0x8080005C: jal         0x8009C128
    // 0x80800060: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_4;
    // 0x80800060: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_4:
    // 0x80800064: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80800068: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080006C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800070: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80800074: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80800078: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x8080007C: jal         0x800C8CB8
    // 0x80800080: lw          $a0, 0x168($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X168);
    func_800C8CB8(rdram, ctx);
        goto after_5;
    // 0x80800080: lw          $a0, 0x168($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X168);
    after_5:
    // 0x80800084: jal         0x8001210C
    // 0x80800088: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001210C(rdram, ctx);
        goto after_6;
    // 0x80800088: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x8080008C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80800090: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x80800094: lui         $t8, 0x0
    ctx->r24 = S32(RELOC_HI16(70, 0XAB0) << 16);
    // 0x80800098: addiu       $t8, $t8, 0xAB0
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(70, 0XAB0));
    // 0x8080009C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x808000A0: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x808000A4: jal         0x800C8E84
    // 0x808000A8: lw          $a0, 0x168($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X168);
    func_800C8E84(rdram, ctx);
        goto after_7;
    // 0x808000A8: lw          $a0, 0x168($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X168);
    after_7:
    // 0x808000AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000B0:
    // 0x808000B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808000B8: jr          $ra
    // 0x808000BC: nop

    return;
    // 0x808000BC: nop

;}
RECOMP_FUNC void func_808000C0_bsbbilldrill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808000CC: lw          $a3, 0x168($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X168);
    // 0x808000D0: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x808000D4: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x808000D8: beq         $a3, $zero, L_808000F0
    if (ctx->r7 == 0) {
        // 0x808000DC: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_808000F0;
    }
    // 0x808000DC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x808000E0: jal         0x800863E8
    // 0x808000E4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    _chlightfader_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808000E4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x808000E8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x808000EC: sw          $v0, 0x168($t7)
    MEM_W(0X168, ctx->r15) = ctx->r2;
L_808000F0:
    // 0x808000F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000F8: jr          $ra
    // 0x808000FC: nop

    return;
    // 0x808000FC: nop

;}
RECOMP_FUNC void func_80800100_bsbbilldrill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800100: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800108: jal         0x80092BF4
    // 0x8080010C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80092BF4(rdram, ctx);
        goto after_0;
    // 0x8080010C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800110: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800114: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80800118: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8080011C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800120: nop

    // 0x80800124: bc1fl       L_80800138
    if (!c1cs) {
        // 0x80800128: neg.s       $f2, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
            goto L_80800138;
    }
    goto skip_0;
    // 0x80800128: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    skip_0:
    // 0x8080012C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800130: nop

    // 0x80800134: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_80800138:
    // 0x80800138: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080013C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80800140: jal         0x80093300
    // 0x80800144: nop

    func_80093300(rdram, ctx);
        goto after_1;
    // 0x80800144: nop

    after_1:
    // 0x80800148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080014C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800150: jr          $ra
    // 0x80800154: nop

    return;
    // 0x80800154: nop

;}
RECOMP_FUNC void func_80800158_bsbbilldrill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800158: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080015C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800160: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800164: jal         0x800B5BE4
    // 0x80800168: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_800B5BE4(rdram, ctx);
        goto after_0;
    // 0x80800168: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_0:
    // 0x8080016C: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(70, 0XAC8) << 16);
    // 0x80800170: addiu       $t6, $t6, 0xAC8
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(70, 0XAC8));
    // 0x80800174: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800178: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080017C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80800180: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80800184: jal         0x800BABB8
    // 0x80800188: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_1;
    // 0x80800188: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_1:
    // 0x8080018C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800190: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800194: jr          $ra
    // 0x80800198: nop

    return;
    // 0x80800198: nop

;}
RECOMP_FUNC void func_8080019C_bsbbilldrill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080019C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808001A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001A4: jal         0x800DC0C0
    // 0x808001A8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_800DC0C0(rdram, ctx);
        goto after_0;
    // 0x808001A8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001AC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(70, 0XA60) << 16);
    // 0x808001B0: lwc1        $f4, 0xA60($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(70, 0XA60));
    // 0x808001B4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(70, 0XA68) << 16);
    // 0x808001B8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808001BC: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x808001C0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x808001C4: bc1f        L_808001D8
    if (!c1cs) {
        // 0x808001C8: nop
    
            goto L_808001D8;
    }
    // 0x808001C8: nop

    // 0x808001CC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(70, 0XA64) << 16);
    // 0x808001D0: b           L_808001DC
    // 0x808001D4: lwc1        $f0, 0xA64($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(70, 0XA64));
        goto L_808001DC;
    // 0x808001D4: lwc1        $f0, 0xA64($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(70, 0XA64));
L_808001D8:
    // 0x808001D8: lwc1        $f0, 0xA68($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(70, 0XA68));
L_808001DC:
    // 0x808001DC: jal         0x8009C128
    // 0x808001E0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x808001E0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x808001E4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x808001E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808001EC: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x808001F0: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x808001F4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x808001F8: jal         0x80000158
    // 0x808001FC: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    func_80800158_bsbbilldrill(rdram, ctx);
        goto after_2;
    // 0x808001FC: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x80800200: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80800204: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80800208: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080020C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800210: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800214: jal         0x800BA7C4
    // 0x80800218: nop

    func_800BA7C4(rdram, ctx);
        goto after_3;
    // 0x80800218: nop

    after_3:
    // 0x8080021C: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80800220: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80800224: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800228: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080022C: jal         0x800BA7FC
    // 0x80800230: nop

    func_800BA7FC(rdram, ctx);
        goto after_4;
    // 0x80800230: nop

    after_4:
    // 0x80800234: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80800238: jal         0x800BA22C
    // 0x8080023C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800BA22C(rdram, ctx);
        goto after_5;
    // 0x8080023C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x80800240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800244: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800248: jr          $ra
    // 0x8080024C: nop

    return;
    // 0x8080024C: nop

;}
RECOMP_FUNC void func_80800250_bsbbilldrill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800250: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800258: jal         0x8009C128
    // 0x8080025C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8080025C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80800260: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80800264: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800268: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8080026C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x80800270: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80800274: jal         0x80088970
    // 0x80800278: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    _fxdlsmoke_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800278: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x8080027C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800280: jal         0x800BA22C
    // 0x80800284: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_2;
    // 0x80800284: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80800288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080028C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800290: jr          $ra
    // 0x80800294: nop

    return;
    // 0x80800294: nop

;}
RECOMP_FUNC void func_80800298_bsbbilldrill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800298: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080029C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002A0: jal         0x800841D8
    // 0x808002A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bswalk_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808002A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808002A8: jal         0x8009BB00
    // 0x808002AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BB00(rdram, ctx);
        goto after_1;
    // 0x808002AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808002B0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(70, 0XA6C) << 16);
    // 0x808002B4: lwc1        $f4, 0xA6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(70, 0XA6C));
    // 0x808002B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808002BC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x808002C0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x808002C4: jal         0x8009B9B0
    // 0x808002C8: nop

    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x808002C8: nop

    after_2:
    // 0x808002CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002D4: jr          $ra
    // 0x808002D8: nop

    return;
    // 0x808002D8: nop

;}
RECOMP_FUNC void func_808002DC_bsbbilldrill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002DC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x808002E0: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x808002E4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x808002E8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x808002EC: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x808002F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808002F4: beq         $at, $zero, L_808005AC
    if (ctx->r1 == 0) {
        // 0x808002F8: sb          $a1, 0x15C($a0)
        MEM_B(0X15C, ctx->r4) = ctx->r5;
            goto L_808005AC;
    }
    // 0x808002F8: sb          $a1, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = ctx->r5;
    // 0x808002FC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800300: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(70, 0XA70) << 16);
    // 0x80800304: addu        $at, $at, $t6
    gpr jr_addend_8080030C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800308: lw          $t6, 0xA70($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(70, 0XA70));
    // 0x8080030C: jr          $t6
    // 0x80800310: nop

    switch (jr_addend_8080030C >> 2) {
        case 0: goto L_80800314; break;
        case 1: goto L_80800390; break;
        case 2: goto L_808003C4; break;
        case 3: goto L_80800430; break;
        case 4: goto L_80800540; break;
        default: switch_error(__func__, 0x8080030C, 0x80800A70);
    }
    // 0x80800310: nop

L_80800314:
    // 0x80800314: jal         0x8009C984
    // 0x80800318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_0;
    // 0x80800318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8080031C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80800320: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x80800324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800328: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8080032C: jal         0x80098520
    // 0x80800330: swc1        $f2, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f2.u32l;
    func_80098520(rdram, ctx);
        goto after_1;
    // 0x80800330: swc1        $f2, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f2.u32l;
    after_1:
    // 0x80800334: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x80800338: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x8080033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800340: jal         0x80085338
    // 0x80800344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_set(rdram, ctx);
        goto after_2;
    // 0x80800344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800348: jal         0x8009EA2C
    // 0x8080034C: nop

    func_8009EA2C(rdram, ctx);
        goto after_3;
    // 0x8080034C: nop

    after_3:
    // 0x80800350: beq         $v0, $zero, L_80800374
    if (ctx->r2 == 0) {
        // 0x80800354: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800374;
    }
    // 0x80800354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800358: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(70, 0XB30) << 16);
    // 0x8080035C: addiu       $a2, $a2, 0xB30
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(70, 0XB30));
    // 0x80800360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800364: jal         0x8009D454
    // 0x80800368: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D454(rdram, ctx);
        goto after_4;
    // 0x80800368: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8080036C: b           L_80800388
    // 0x80800370: sb          $v0, 0x164($s0)
    MEM_B(0X164, ctx->r16) = ctx->r2;
        goto L_80800388;
    // 0x80800370: sb          $v0, 0x164($s0)
    MEM_B(0X164, ctx->r16) = ctx->r2;
L_80800374:
    // 0x80800374: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(70, 0XB10) << 16);
    // 0x80800378: addiu       $a2, $a2, 0xB10
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(70, 0XB10));
    // 0x8080037C: jal         0x8009D454
    // 0x80800380: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D454(rdram, ctx);
        goto after_5;
    // 0x80800380: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80800384: sb          $v0, 0x164($s0)
    MEM_B(0X164, ctx->r16) = ctx->r2;
L_80800388:
    // 0x80800388: b           L_808005AC
    // 0x8080038C: sb          $zero, 0x15D($s0)
    MEM_B(0X15D, ctx->r16) = 0;
        goto L_808005AC;
    // 0x8080038C: sb          $zero, 0x15D($s0)
    MEM_B(0X15D, ctx->r16) = 0;
L_80800390:
    // 0x80800390: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(70, 0XA84) << 16);
    // 0x80800394: lwc1        $f4, 0xA84($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(70, 0XA84));
    // 0x80800398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080039C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x808003A0: jal         0x80098520
    // 0x808003A4: swc1        $f4, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f4.u32l;
    func_80098520(rdram, ctx);
        goto after_6;
    // 0x808003A4: swc1        $f4, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f4.u32l;
    after_6:
    // 0x808003A8: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x808003AC: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x808003B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003B4: jal         0x80085338
    // 0x808003B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_set(rdram, ctx);
        goto after_7;
    // 0x808003B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x808003BC: b           L_808005B0
    // 0x808003C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_808005B0;
    // 0x808003C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_808003C4:
    // 0x808003C4: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x808003C8: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x808003CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003D0: addiu       $a1, $zero, 0x442F
    ctx->r5 = ADD32(0, 0X442F);
    // 0x808003D4: jal         0x8009DF18
    // 0x808003D8: addiu       $a3, $zero, 0x7530
    ctx->r7 = ADD32(0, 0X7530);
    func_8009DF18(rdram, ctx);
        goto after_8;
    // 0x808003D8: addiu       $a3, $zero, 0x7530
    ctx->r7 = ADD32(0, 0X7530);
    after_8:
    // 0x808003DC: lui         $a1, 0xC59C
    ctx->r5 = S32(0XC59C << 16);
    // 0x808003E0: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x808003E4: jal         0x8009BCC4
    // 0x808003E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_9;
    // 0x808003E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808003EC: lui         $a1, 0xC69C
    ctx->r5 = S32(0XC69C << 16);
    // 0x808003F0: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x808003F4: jal         0x8009BCB4
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCB4(rdram, ctx);
        goto after_10;
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808003FC: lui         $a1, 0x450F
    ctx->r5 = S32(0X450F << 16);
    // 0x80800400: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x80800404: jal         0x8009BA58
    // 0x80800408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_11;
    // 0x80800408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8080040C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800410: jal         0x8009B9B0
    // 0x80800414: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_12;
    // 0x80800414: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_12:
    // 0x80800418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080041C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800420: jal         0x8009E53C
    // 0x80800424: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    func_8009E53C(rdram, ctx);
        goto after_13;
    // 0x80800424: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    after_13:
    // 0x80800428: b           L_808005B0
    // 0x8080042C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_808005B0;
    // 0x8080042C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80800430:
    // 0x80800430: jal         0x800962D4
    // 0x80800434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800962D4(rdram, ctx);
        goto after_14;
    // 0x80800434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800438: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8080043C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800440: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80800444: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80800448: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8080044C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80800450: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80800454: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80800458: jal         0x800EFA4C
    // 0x8080045C: nop

    func_800EFA4C(rdram, ctx);
        goto after_15;
    // 0x8080045C: nop

    after_15:
    // 0x80800460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800464: jal         0x8009C1F8
    // 0x80800468: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_8009C1F8(rdram, ctx);
        goto after_16;
    // 0x80800468: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_16:
    // 0x8080046C: jal         0x800962D4
    // 0x80800470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800962D4(rdram, ctx);
        goto after_17;
    // 0x80800470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800474: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x80800478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080047C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80800480: jal         0x80084A18
    // 0x80800484: nop

    _badust_entrypoint_10(rdram, ctx);
        goto after_18;
    // 0x80800484: nop

    after_18:
    // 0x80800488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080048C: jal         0x80095760
    // 0x80800490: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    func_80095760(rdram, ctx);
        goto after_19;
    // 0x80800490: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_19:
    // 0x80800494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800498: jal         0x8009BCB4
    // 0x8080049C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BCB4(rdram, ctx);
        goto after_20;
    // 0x8080049C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_20:
    // 0x808004A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004A4: jal         0x8009BA9C
    // 0x808004A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_21;
    // 0x808004A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_21:
    // 0x808004AC: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x808004B0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808004B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004B8: jal         0x80085338
    // 0x808004BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_set(rdram, ctx);
        goto after_22;
    // 0x808004BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_22:
    // 0x808004C0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(70, 0XA88) << 16);
    // 0x808004C4: lwc1        $f16, 0xA88($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(70, 0XA88));
    // 0x808004C8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(70, 0XA8C) << 16);
    // 0x808004CC: lwc1        $f18, 0xA8C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(70, 0XA8C));
    // 0x808004D0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(70, 0XA90) << 16);
    // 0x808004D4: lwc1        $f4, 0xA90($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(70, 0XA90));
    // 0x808004D8: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x808004DC: lui         $a3, 0x3C23
    ctx->r7 = S32(0X3C23 << 16);
    // 0x808004E0: ori         $a3, $a3, 0xD70A
    ctx->r7 = ctx->r7 | 0XD70A;
    // 0x808004E4: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808004E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004EC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x808004F0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x808004F4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x808004F8: jal         0x800854A0
    // 0x808004FC: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    _bamotor_entrypoint_3(rdram, ctx);
        goto after_23;
    // 0x808004FC: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_23:
    // 0x80800500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800504: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80800508: jal         0x80084FD0
    // 0x8080050C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    _bashake_entrypoint_1(rdram, ctx);
        goto after_24;
    // 0x8080050C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_24:
    // 0x80800510: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(70, 0XB50) << 16);
    // 0x80800514: addiu       $a2, $a2, 0xB50
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(70, 0XB50));
    // 0x80800518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080051C: jal         0x8009D454
    // 0x80800520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D454(rdram, ctx);
        goto after_25;
    // 0x80800520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_25:
    // 0x80800524: sb          $v0, 0x160($s0)
    MEM_B(0X160, ctx->r16) = ctx->r2;
    // 0x80800528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080052C: addiu       $a1, $zero, 0x40D
    ctx->r5 = ADD32(0, 0X40D);
    // 0x80800530: jal         0x8009DE38
    // 0x80800534: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_26;
    // 0x80800534: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_26:
    // 0x80800538: b           L_808005B0
    // 0x8080053C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_808005B0;
    // 0x8080053C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80800540:
    // 0x80800540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800544: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800548: jal         0x8009E53C
    // 0x8080054C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E53C(rdram, ctx);
        goto after_27;
    // 0x8080054C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_27:
    // 0x80800550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800554: jal         0x80095774
    // 0x80800558: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    func_80095774(rdram, ctx);
        goto after_28;
    // 0x80800558: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    after_28:
    // 0x8080055C: jal         0x8009C984
    // 0x80800560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_29;
    // 0x80800560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x80800564: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800568: jal         0x8009328C
    // 0x8080056C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009328C(rdram, ctx);
        goto after_30;
    // 0x8080056C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x80800570: lui         $a1, 0x4436
    ctx->r5 = S32(0X4436 << 16);
    // 0x80800574: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80800578: jal         0x8009BA58
    // 0x8080057C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_31;
    // 0x8080057C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x80800580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800584: jal         0x8009BCB4
    // 0x80800588: lui         $a1, 0xC516
    ctx->r5 = S32(0XC516 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_32;
    // 0x80800588: lui         $a1, 0xC516
    ctx->r5 = S32(0XC516 << 16);
    after_32:
    // 0x8080058C: lui         $a1, 0x3F3A
    ctx->r5 = S32(0X3F3A << 16);
    // 0x80800590: lui         $a2, 0x4006
    ctx->r6 = S32(0X4006 << 16);
    // 0x80800594: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800598: ori         $a1, $a1, 0xDABA
    ctx->r5 = ctx->r5 | 0XDABA;
    // 0x8080059C: jal         0x8008CF1C
    // 0x808005A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CF1C(rdram, ctx);
        goto after_33;
    // 0x808005A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x808005A4: jal         0x800000C0
    // 0x808005A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000C0_bsbbilldrill(rdram, ctx);
        goto after_34;
    // 0x808005A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
L_808005AC:
    // 0x808005AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_808005B0:
    // 0x808005B0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x808005B4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x808005B8: jr          $ra
    // 0x808005BC: nop

    return;
    // 0x808005BC: nop

;}
RECOMP_FUNC void func_808005C0_bsbbilldrill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005C8: jal         0x800D8FF8
    // 0x808005CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x808005CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808005D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808005D4: lwc1        $f6, 0x170($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X170);
    // 0x808005D8: lwc1        $f4, 0x16C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X16C);
    // 0x808005DC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x808005E0: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x808005E4: swc1        $f10, 0x16C($a0)
    MEM_W(0X16C, ctx->r4) = ctx->f10.u32l;
    // 0x808005E8: jal         0x8009328C
    // 0x808005EC: lw          $a1, 0x16C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X16C);
    func_8009328C(rdram, ctx);
        goto after_1;
    // 0x808005EC: lw          $a1, 0x16C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X16C);
    after_1:
    // 0x808005F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808005F8: jr          $ra
    // 0x808005FC: nop

    return;
    // 0x808005FC: nop

;}
RECOMP_FUNC void bsbbilldrill_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800600: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800604: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800608: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080060C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800610: jal         0x800931AC
    // 0x80800614: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800931AC(rdram, ctx);
        goto after_0;
    // 0x80800614: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080061C: jal         0x80093300
    // 0x80800620: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80093300(rdram, ctx);
        goto after_1;
    // 0x80800620: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80800624: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800628: jal         0x80098520
    // 0x8080062C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_80098520(rdram, ctx);
        goto after_2;
    // 0x8080062C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_2:
    // 0x80800630: jal         0x8009BC6C
    // 0x80800634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_3;
    // 0x80800634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800638: jal         0x8009BC90
    // 0x8080063C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC90(rdram, ctx);
        goto after_4;
    // 0x8080063C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800644: jal         0x800A0CF4
    // 0x80800648: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_5;
    // 0x80800648: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8080064C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800650: jal         0x80095774
    // 0x80800654: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    func_80095774(rdram, ctx);
        goto after_6;
    // 0x80800654: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    after_6:
    // 0x80800658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080065C: jal         0x80095774
    // 0x80800660: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    func_80095774(rdram, ctx);
        goto after_7;
    // 0x80800660: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_7:
    // 0x80800664: jal         0x8009E474
    // 0x80800668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E474(rdram, ctx);
        goto after_8;
    // 0x80800668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8080066C: jal         0x800000C0
    // 0x80800670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000C0_bsbbilldrill(rdram, ctx);
        goto after_9;
    // 0x80800670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800674: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800678: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080067C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800680: jr          $ra
    // 0x80800684: nop

    return;
    // 0x80800684: nop

;}
RECOMP_FUNC void bsbbilldrill_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800688: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080068C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800690: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800694: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800698: jal         0x8008CABC
    // 0x8080069C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080069C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x808006A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808006A4: jal         0x8008AF24
    // 0x808006A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x808006A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808006AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006B0: jal         0x8008B1A0
    // 0x808006B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_2;
    // 0x808006B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808006B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006BC: jal         0x8008AED4
    // 0x808006C0: addiu       $a1, $zero, 0x61
    ctx->r5 = ADD32(0, 0X61);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x808006C0: addiu       $a1, $zero, 0x61
    ctx->r5 = ADD32(0, 0X61);
    after_3:
    // 0x808006C4: lui         $a1, 0x3F82
    ctx->r5 = S32(0X3F82 << 16);
    // 0x808006C8: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    // 0x808006CC: jal         0x8008B1BC
    // 0x808006D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_4;
    // 0x808006D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808006D4: lui         $a1, 0x3EBA
    ctx->r5 = S32(0X3EBA << 16);
    // 0x808006D8: ori         $a1, $a1, 0x36E3
    ctx->r5 = ctx->r5 | 0X36E3;
    // 0x808006DC: jal         0x8008B24C
    // 0x808006E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_5;
    // 0x808006E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808006E4: lui         $a2, 0x3EE8
    ctx->r6 = S32(0X3EE8 << 16);
    // 0x808006E8: ori         $a2, $a2, 0xC155
    ctx->r6 = ctx->r6 | 0XC155;
    // 0x808006EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006F0: jal         0x8008B1D4
    // 0x808006F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_6;
    // 0x808006F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x808006F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006FC: jal         0x8008B134
    // 0x80800700: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_7;
    // 0x80800700: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80800704: jal         0x8008B064
    // 0x80800708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_8;
    // 0x80800708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8080070C: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800710: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800714: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800718: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080071C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800720: jal         0x8009FFD8
    // 0x80800724: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_9;
    // 0x80800724: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_9:
    // 0x80800728: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080072C: jal         0x8009BCB4
    // 0x80800730: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BCB4(rdram, ctx);
        goto after_10;
    // 0x80800730: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_10:
    // 0x80800734: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800738: jal         0x8009B9B0
    // 0x8080073C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_11;
    // 0x8080073C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_11:
    // 0x80800740: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800744: jal         0x800A0CF4
    // 0x80800748: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_12;
    // 0x80800748: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x8080074C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800750: jal         0x80095774
    // 0x80800754: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    func_80095774(rdram, ctx);
        goto after_13;
    // 0x80800754: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    after_13:
    // 0x80800758: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080075C: jal         0x80095774
    // 0x80800760: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    func_80095774(rdram, ctx);
        goto after_14;
    // 0x80800760: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_14:
    // 0x80800764: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800768: jal         0x800931AC
    // 0x8080076C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800931AC(rdram, ctx);
        goto after_15;
    // 0x8080076C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_15:
    // 0x80800770: jal         0x8009E4AC
    // 0x80800774: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_16;
    // 0x80800774: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x80800778: sb          $zero, 0x164($s1)
    MEM_B(0X164, ctx->r17) = 0;
    // 0x8080077C: sb          $zero, 0x160($s1)
    MEM_B(0X160, ctx->r17) = 0;
    // 0x80800780: sb          $zero, 0x15C($s1)
    MEM_B(0X15C, ctx->r17) = 0;
    // 0x80800784: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800788: jal         0x800002DC
    // 0x8080078C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_808002DC_bsbbilldrill(rdram, ctx);
        goto after_17;
    // 0x8080078C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x80800790: jal         0x80000000
    // 0x80800794: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800000_bsbbilldrill(rdram, ctx);
        goto after_18;
    // 0x80800794: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_18:
    // 0x80800798: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080079C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x808007A0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808007A4: jr          $ra
    // 0x808007A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x808007A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void bsbbilldrill_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007AC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x808007B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808007B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808007B8: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x808007BC: lbu         $t6, 0x15C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X15C);
    // 0x808007C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808007C4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x808007C8: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x808007CC: beq         $at, $zero, L_80800A2C
    if (ctx->r1 == 0) {
        // 0x808007D0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80800A2C;
    }
    // 0x808007D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x808007D4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(70, 0XA94) << 16);
    // 0x808007D8: addu        $at, $at, $t7
    gpr jr_addend_808007E0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x808007DC: lw          $t7, 0xA94($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(70, 0XA94));
    // 0x808007E0: jr          $t7
    // 0x808007E4: nop

    switch (jr_addend_808007E0 >> 2) {
        case 0: goto L_808007E8; break;
        case 1: goto L_80800880; break;
        case 2: goto L_808008B4; break;
        case 3: goto L_80800990; break;
        case 4: goto L_808009E8; break;
        default: switch_error(__func__, 0x808007E0, 0x80800A94);
    }
    // 0x808007E4: nop

L_808007E8:
    // 0x808007E8: jal         0x80000298
    // 0x808007EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800298_bsbbilldrill(rdram, ctx);
        goto after_0;
    // 0x808007EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x808007F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007F4: jal         0x80085300
    // 0x808007F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_get(rdram, ctx);
        goto after_1;
    // 0x808007F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x808007FC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80800800: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800804: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800808: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x8080080C: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x80800810: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x80800814: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80800818: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x8080081C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800820: jal         0x800F10B4
    // 0x80800824: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_2;
    // 0x80800824: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80800828: swc1        $f0, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f0.u32l;
    // 0x8080082C: jal         0x800005C0
    // 0x80800830: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808005C0_bsbbilldrill(rdram, ctx);
        goto after_3;
    // 0x80800830: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800834: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800838: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x8080083C: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800840: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800844: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80800848: jal         0x800F10B4
    // 0x8080084C: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    func_800F10B4(rdram, ctx);
        goto after_4;
    // 0x8080084C: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    after_4:
    // 0x80800850: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800854: jal         0x80098520
    // 0x80800858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80098520(rdram, ctx);
        goto after_5;
    // 0x80800858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080085C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800860: jal         0x800852F0
    // 0x80800864: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_6;
    // 0x80800864: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80800868: beq         $v0, $zero, L_80800A2C
    if (ctx->r2 == 0) {
        // 0x8080086C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A2C;
    }
    // 0x8080086C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800870: jal         0x800002DC
    // 0x80800874: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_808002DC_bsbbilldrill(rdram, ctx);
        goto after_7;
    // 0x80800874: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x80800878: b           L_80800A30
    // 0x8080087C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800A30;
    // 0x8080087C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800880:
    // 0x80800880: jal         0x80000298
    // 0x80800884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800298_bsbbilldrill(rdram, ctx);
        goto after_8;
    // 0x80800884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800888: jal         0x800005C0
    // 0x8080088C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808005C0_bsbbilldrill(rdram, ctx);
        goto after_9;
    // 0x8080088C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800894: jal         0x800852F0
    // 0x80800898: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_10;
    // 0x80800898: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x8080089C: beq         $v0, $zero, L_80800A2C
    if (ctx->r2 == 0) {
        // 0x808008A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A2C;
    }
    // 0x808008A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008A4: jal         0x800002DC
    // 0x808008A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_808002DC_bsbbilldrill(rdram, ctx);
        goto after_11;
    // 0x808008A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_11:
    // 0x808008AC: b           L_80800A30
    // 0x808008B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800A30;
    // 0x808008B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808008B4:
    // 0x808008B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008B8: jal         0x80096394
    // 0x808008BC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_80096394(rdram, ctx);
        goto after_12;
    // 0x808008BC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_12:
    // 0x808008C0: jal         0x800F2100
    // 0x808008C4: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    func_800F2100(rdram, ctx);
        goto after_13;
    // 0x808008C4: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    after_13:
    // 0x808008C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808008CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808008D0: nop

    // 0x808008D4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x808008D8: nop

    // 0x808008DC: bc1fl       L_808008F8
    if (!c1cs) {
        // 0x808008E0: sb          $zero, 0x15D($s0)
        MEM_B(0X15D, ctx->r16) = 0;
            goto L_808008F8;
    }
    goto skip_0;
    // 0x808008E0: sb          $zero, 0x15D($s0)
    MEM_B(0X15D, ctx->r16) = 0;
    skip_0:
    // 0x808008E4: lbu         $t8, 0x15D($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X15D);
    // 0x808008E8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x808008EC: b           L_808008F8
    // 0x808008F0: sb          $t9, 0x15D($s0)
    MEM_B(0X15D, ctx->r16) = ctx->r25;
        goto L_808008F8;
    // 0x808008F0: sb          $t9, 0x15D($s0)
    MEM_B(0X15D, ctx->r16) = ctx->r25;
    // 0x808008F4: sb          $zero, 0x15D($s0)
    MEM_B(0X15D, ctx->r16) = 0;
L_808008F8:
    // 0x808008F8: jal         0x800005C0
    // 0x808008FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808005C0_bsbbilldrill(rdram, ctx);
        goto after_14;
    // 0x808008FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800900: jal         0x8009BB50
    // 0x80800904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_15;
    // 0x80800904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800908: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8080090C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800910: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80800914: nop

    // 0x80800918: bc1f        L_80800928
    if (!c1cs) {
        // 0x8080091C: nop
    
            goto L_80800928;
    }
    // 0x8080091C: nop

    // 0x80800920: jal         0x80095760
    // 0x80800924: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    func_80095760(rdram, ctx);
        goto after_16;
    // 0x80800924: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    after_16:
L_80800928:
    // 0x80800928: jal         0x8008E35C
    // 0x8080092C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_17;
    // 0x8080092C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800930: beq         $v0, $zero, L_80800944
    if (ctx->r2 == 0) {
        // 0x80800934: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800944;
    }
    // 0x80800934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800938: addiu       $t0, $zero, 0x4C
    ctx->r8 = ADD32(0, 0X4C);
    // 0x8080093C: b           L_80800A2C
    // 0x80800940: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
        goto L_80800A2C;
    // 0x80800940: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
L_80800944:
    // 0x80800944: jal         0x8008DF8C
    // 0x80800948: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    func_8008DF8C(rdram, ctx);
        goto after_18;
    // 0x80800948: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_18:
    // 0x8080094C: bne         $v0, $zero, L_80800964
    if (ctx->r2 != 0) {
        // 0x80800950: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800964;
    }
    // 0x80800950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800954: lbu         $t1, 0x15D($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X15D);
    // 0x80800958: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x8080095C: bnel        $at, $zero, L_80800A30
    if (ctx->r1 != 0) {
        // 0x80800960: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A30;
    }
    goto skip_1;
    // 0x80800960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
L_80800964:
    // 0x80800964: jal         0x800954E8
    // 0x80800968: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_800954E8(rdram, ctx);
        goto after_19;
    // 0x80800968: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_19:
    // 0x8080096C: beq         $v0, $zero, L_80800980
    if (ctx->r2 == 0) {
        // 0x80800970: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800980;
    }
    // 0x80800970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800974: addiu       $t2, $zero, 0x72
    ctx->r10 = ADD32(0, 0X72);
    // 0x80800978: b           L_80800A2C
    // 0x8080097C: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
        goto L_80800A2C;
    // 0x8080097C: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
L_80800980:
    // 0x80800980: jal         0x800002DC
    // 0x80800984: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_808002DC_bsbbilldrill(rdram, ctx);
        goto after_20;
    // 0x80800984: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_20:
    // 0x80800988: b           L_80800A30
    // 0x8080098C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800A30;
    // 0x8080098C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800990:
    // 0x80800990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800994: jal         0x80095774
    // 0x80800998: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    func_80095774(rdram, ctx);
        goto after_21;
    // 0x80800998: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_21:
    // 0x8080099C: jal         0x800005C0
    // 0x808009A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808005C0_bsbbilldrill(rdram, ctx);
        goto after_22;
    // 0x808009A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x808009A4: jal         0x80000250
    // 0x808009A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800250_bsbbilldrill(rdram, ctx);
        goto after_23;
    // 0x808009A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x808009AC: jal         0x80000100
    // 0x808009B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800100_bsbbilldrill(rdram, ctx);
        goto after_24;
    // 0x808009B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x808009B4: jal         0x8000019C
    // 0x808009B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080019C_bsbbilldrill(rdram, ctx);
        goto after_25;
    // 0x808009B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x808009BC: jal         0x80000008
    // 0x808009C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800008_bsbbilldrill(rdram, ctx);
        goto after_26;
    // 0x808009C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x808009C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009C8: jal         0x800852F0
    // 0x808009CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_27;
    // 0x808009CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_27:
    // 0x808009D0: beq         $v0, $zero, L_80800A2C
    if (ctx->r2 == 0) {
        // 0x808009D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A2C;
    }
    // 0x808009D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009D8: jal         0x800002DC
    // 0x808009DC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_808002DC_bsbbilldrill(rdram, ctx);
        goto after_28;
    // 0x808009DC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_28:
    // 0x808009E0: b           L_80800A30
    // 0x808009E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800A30;
    // 0x808009E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808009E8:
    // 0x808009E8: jal         0x800841D8
    // 0x808009EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bswalk_entrypoint_1(rdram, ctx);
        goto after_29;
    // 0x808009EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x808009F0: jal         0x8008E35C
    // 0x808009F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_30;
    // 0x808009F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x808009F8: beq         $v0, $zero, L_80800A04
    if (ctx->r2 == 0) {
        // 0x808009FC: addiu       $t3, $zero, 0x4C
        ctx->r11 = ADD32(0, 0X4C);
            goto L_80800A04;
    }
    // 0x808009FC: addiu       $t3, $zero, 0x4C
    ctx->r11 = ADD32(0, 0X4C);
    // 0x80800A00: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
L_80800A04:
    // 0x80800A04: jal         0x8008E078
    // 0x80800A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_31;
    // 0x80800A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x80800A0C: beq         $v0, $zero, L_80800A2C
    if (ctx->r2 == 0) {
        // 0x80800A10: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A2C;
    }
    // 0x80800A10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A14: lui         $a2, 0x3FF3
    ctx->r6 = S32(0X3FF3 << 16);
    // 0x80800A18: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800A1C: jal         0x8008CF1C
    // 0x80800A20: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_32;
    // 0x80800A20: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_32:
    // 0x80800A24: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x80800A28: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
L_80800A2C:
    // 0x80800A2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800A30:
    // 0x80800A30: jal         0x8009E5C8
    // 0x80800A34: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_8009E5C8(rdram, ctx);
        goto after_33;
    // 0x80800A34: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_33:
    // 0x80800A38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800A3C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800A40: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80800A44: jr          $ra
    // 0x80800A48: nop

    return;
    // 0x80800A48: nop

;}
RECOMP_FUNC void bsbbilldrill_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A4C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800A50: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(70, 0XB68) << 16);
    // 0x80800A54: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800A58: jr          $ra
    // 0x80800A5C: lw          $v0, 0xB68($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(70, 0XB68));
    return;
    // 0x80800A5C: lw          $v0, 0xB68($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(70, 0XB68));
;}
RECOMP_FUNC void bsbbuster_setSubstate(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800010: jal         0x8008CABC
    // 0x80800014: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800014: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800018: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8080001C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800020: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x80800024: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x80800028: beq         $at, $zero, L_80800190
    if (ctx->r1 == 0) {
        // 0x8080002C: sb          $v1, 0x161($s0)
        MEM_B(0X161, ctx->r16) = ctx->r3;
            goto L_80800190;
    }
    // 0x8080002C: sb          $v1, 0x161($s0)
    MEM_B(0X161, ctx->r16) = ctx->r3;
    // 0x80800030: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800034: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(71, 0X700) << 16);
    // 0x80800038: addu        $at, $at, $t6
    gpr jr_addend_80800040 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8080003C: lw          $t6, 0x700($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(71, 0X700));
    // 0x80800040: jr          $t6
    // 0x80800044: nop

    switch (jr_addend_80800040 >> 2) {
        case 0: goto L_80800190; break;
        case 1: goto L_80800048; break;
        case 2: goto L_8080005C; break;
        case 3: goto L_808000AC; break;
        case 4: goto L_80800128; break;
        default: switch_error(__func__, 0x80800040, 0x80800700);
    }
    // 0x80800044: nop

L_80800048:
    // 0x80800048: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x8080004C: jal         0x8008B1BC
    // 0x80800050: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_8008B1BC(rdram, ctx);
        goto after_1;
    // 0x80800050: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_1:
    // 0x80800054: b           L_80800194
    // 0x80800058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800194;
    // 0x80800058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080005C:
    // 0x8080005C: jal         0x8009BC6C
    // 0x80800060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_2;
    // 0x80800060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800064: lui         $a1, 0xC59C
    ctx->r5 = S32(0XC59C << 16);
    // 0x80800068: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x8080006C: jal         0x8009BCC4
    // 0x80800070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_3;
    // 0x80800070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800074: lui         $a1, 0xC69C
    ctx->r5 = S32(0XC69C << 16);
    // 0x80800078: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x8080007C: jal         0x8009BCB4
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCB4(rdram, ctx);
        goto after_4;
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800084: lui         $a1, 0x450F
    ctx->r5 = S32(0X450F << 16);
    // 0x80800088: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x8080008C: jal         0x8009BA58
    // 0x80800090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_5;
    // 0x80800090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800098: jal         0x8009B9B0
    // 0x8080009C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_6;
    // 0x8080009C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x808000A0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x808000A4: b           L_80800190
    // 0x808000A8: sb          $t7, 0x15E($s0)
    MEM_B(0X15E, ctx->r16) = ctx->r15;
        goto L_80800190;
    // 0x808000A8: sb          $t7, 0x15E($s0)
    MEM_B(0X15E, ctx->r16) = ctx->r15;
L_808000AC:
    // 0x808000AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B0: jal         0x80095760
    // 0x808000B4: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    func_80095760(rdram, ctx);
        goto after_7;
    // 0x808000B4: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    after_7:
    // 0x808000B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x808000C0: jal         0x80084FD0
    // 0x808000C4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    _bashake_entrypoint_1(rdram, ctx);
        goto after_8;
    // 0x808000C4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_8:
    // 0x808000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000CC: jal         0x800A2EEC
    // 0x808000D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A2EEC(rdram, ctx);
        goto after_9;
    // 0x808000D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x808000D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D8: jal         0x80084A18
    // 0x808000DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    _badust_entrypoint_10(rdram, ctx);
        goto after_10;
    // 0x808000DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_10:
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E4: jal         0x8009BA9C
    // 0x808000E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_11;
    // 0x808000E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x808000EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F0: jal         0x8009BCB4
    // 0x808000F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BCB4(rdram, ctx);
        goto after_12;
    // 0x808000F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_12:
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000FC: jal         0x8009B9B0
    // 0x80800100: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_13;
    // 0x80800100: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_13:
    // 0x80800104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800108: jal         0x8008EE88
    // 0x8080010C: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    func_8008EE88(rdram, ctx);
        goto after_14;
    // 0x8080010C: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    after_14:
    // 0x80800110: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80800114: sb          $t8, 0x15E($s0)
    MEM_B(0X15E, ctx->r16) = ctx->r24;
    // 0x80800118: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(71, 0X714) << 16);
    // 0x8080011C: lwc1        $f4, 0x714($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(71, 0X714));
    // 0x80800120: b           L_80800190
    // 0x80800124: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
        goto L_80800190;
    // 0x80800124: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
L_80800128:
    // 0x80800128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080012C: jal         0x80095738
    // 0x80800130: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    func_80095738(rdram, ctx);
        goto after_15;
    // 0x80800130: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    after_15:
    // 0x80800134: beq         $v0, $zero, L_8080015C
    if (ctx->r2 == 0) {
        // 0x80800138: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080015C;
    }
    // 0x80800138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080013C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800140: jal         0x8009BA58
    // 0x80800144: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    func_8009BA58(rdram, ctx);
        goto after_16;
    // 0x80800144: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    after_16:
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080014C: jal         0x8009BCB4
    // 0x80800150: lui         $a1, 0xC448
    ctx->r5 = S32(0XC448 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_17;
    // 0x80800150: lui         $a1, 0xC448
    ctx->r5 = S32(0XC448 << 16);
    after_17:
    // 0x80800154: b           L_8080017C
    // 0x80800158: lui         $a1, 0x3F3A
    ctx->r5 = S32(0X3F3A << 16);
        goto L_8080017C;
    // 0x80800158: lui         $a1, 0x3F3A
    ctx->r5 = S32(0X3F3A << 16);
L_8080015C:
    // 0x8080015C: lui         $a1, 0x4436
    ctx->r5 = S32(0X4436 << 16);
    // 0x80800160: jal         0x8009BA58
    // 0x80800164: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    func_8009BA58(rdram, ctx);
        goto after_18;
    // 0x80800164: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    after_18:
    // 0x80800168: lui         $a1, 0xC503
    ctx->r5 = S32(0XC503 << 16);
    // 0x8080016C: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x80800170: jal         0x8009BCB4
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCB4(rdram, ctx);
        goto after_19;
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800178: lui         $a1, 0x3F3A
    ctx->r5 = S32(0X3F3A << 16);
L_8080017C:
    // 0x8080017C: lui         $a2, 0x3FF3
    ctx->r6 = S32(0X3FF3 << 16);
    // 0x80800180: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800184: ori         $a1, $a1, 0xDABA
    ctx->r5 = ctx->r5 | 0XDABA;
    // 0x80800188: jal         0x8008CF1C
    // 0x8080018C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CF1C(rdram, ctx);
        goto after_20;
    // 0x8080018C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
L_80800190:
    // 0x80800190: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800194:
    // 0x80800194: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800198: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080019C: jr          $ra
    // 0x808001A0: nop

    return;
    // 0x808001A0: nop

L_808001A4:
    // 0x808001A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001B0: jal         0x8009BC6C
    // 0x808001B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_21;
    // 0x808001B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_21:
    // 0x808001B8: jal         0x8009BC90
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC90(rdram, ctx);
        goto after_22;
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x808001C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001C4: jal         0x800A0CF4
    // 0x808001C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_23;
    // 0x808001C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_23:
    // 0x808001CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D0: jal         0x80095774
    // 0x808001D4: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    func_80095774(rdram, ctx);
        goto after_24;
    // 0x808001D4: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_24:
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001DC: jal         0x80095774
    // 0x808001E0: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    func_80095774(rdram, ctx);
        goto after_25;
    // 0x808001E0: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    after_25:
    // 0x808001E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808001E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808001EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001F0: jr          $ra
    // 0x808001F4: nop

    return;
    // 0x808001F4: nop

L_808001F8:
    // 0x808001F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808001FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800200: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80800204: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800208: jal         0x8008CABC
    // 0x8080020C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    func_8008CABC(rdram, ctx);
        goto after_26;
    // 0x8080020C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    after_26:
    // 0x80800210: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80800214: jal         0x8008AF24
    // 0x80800218: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_27;
    // 0x80800218: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_27:
    // 0x8080021C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800220: jal         0x8008B1A0
    // 0x80800224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_28;
    // 0x80800224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_28:
    // 0x80800228: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080022C: jal         0x8008AED4
    // 0x80800230: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    func_8008AED4(rdram, ctx);
        goto after_29;
    // 0x80800230: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    after_29:
    // 0x80800234: lui         $a1, 0x3F82
    ctx->r5 = S32(0X3F82 << 16);
    // 0x80800238: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    // 0x8080023C: jal         0x8008B1BC
    // 0x80800240: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_30;
    // 0x80800240: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_30:
    // 0x80800244: lui         $a2, 0x3EE8
    ctx->r6 = S32(0X3EE8 << 16);
    // 0x80800248: ori         $a2, $a2, 0xF5C3
    ctx->r6 = ctx->r6 | 0XF5C3;
    // 0x8080024C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800250: jal         0x8008B1D4
    // 0x80800254: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_31;
    // 0x80800254: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_31:
    // 0x80800258: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080025C: jal         0x8008B134
    // 0x80800260: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_32;
    // 0x80800260: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_32:
    // 0x80800264: jal         0x8008B064
    // 0x80800268: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B064(rdram, ctx);
        goto after_33;
    // 0x80800268: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_33:
    // 0x8080026C: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800270: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080027C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800280: jal         0x8009FFD8
    // 0x80800284: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_34;
    // 0x80800284: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_34:
    // 0x80800288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080028C: jal         0x8009BCB4
    // 0x80800290: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BCB4(rdram, ctx);
        goto after_35;
    // 0x80800290: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_35:
    // 0x80800294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800298: jal         0x8009B9B0
    // 0x8080029C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_36;
    // 0x8080029C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_36:
    // 0x808002A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002A4: jal         0x8009BA9C
    // 0x808002A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_37;
    // 0x808002A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_37:
    // 0x808002AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002B0: jal         0x800A0CF4
    // 0x808002B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_38;
    // 0x808002B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_38:
    // 0x808002B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002BC: jal         0x80095774
    // 0x808002C0: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    func_80095774(rdram, ctx);
        goto after_39;
    // 0x808002C0: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    after_39:
    // 0x808002C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C8: jal         0x80095774
    // 0x808002CC: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    func_80095774(rdram, ctx);
        goto after_40;
    // 0x808002CC: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_40:
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002D4: jal         0x80095774
    // 0x808002D8: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    func_80095774(rdram, ctx);
        goto after_41;
    // 0x808002D8: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    after_41:
    // 0x808002DC: sb          $zero, 0x15D($s0)
    MEM_B(0X15D, ctx->r16) = 0;
    // 0x808002E0: sb          $zero, 0x15E($s0)
    MEM_B(0X15E, ctx->r16) = 0;
    // 0x808002E4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(71, 0X718) << 16);
    // 0x808002E8: lwc1        $f4, 0x718($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(71, 0X718));
    // 0x808002EC: sb          $zero, 0x162($s0)
    MEM_B(0X162, ctx->r16) = 0;
    // 0x808002F0: sb          $zero, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = 0;
    // 0x808002F4: sb          $zero, 0x15F($s0)
    MEM_B(0X15F, ctx->r16) = 0;
    // 0x808002F8: sb          $zero, 0x160($s0)
    MEM_B(0X160, ctx->r16) = 0;
    // 0x808002FC: sb          $zero, 0x161($s0)
    MEM_B(0X161, ctx->r16) = 0;
    // 0x80800300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800304: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800308: jal         0x80000000
    // 0x8080030C: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
    bsbbuster_setSubstate(rdram, ctx);
        goto after_42;
    // 0x8080030C: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
    after_42:
    // 0x80800310: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800314: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800318: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8080031C: jr          $ra
    // 0x80800320: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80800320: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
L_80800324:
    // 0x80800324: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800328: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080032C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800330: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800334: jal         0x8008CABC
    // 0x80800338: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_43;
    // 0x80800338: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    after_43:
    // 0x8080033C: lui         $a1, 0x3E75
    ctx->r5 = S32(0X3E75 << 16);
    // 0x80800340: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80800344: ori         $a1, $a1, 0xC28F
    ctx->r5 = ctx->r5 | 0XC28F;
    // 0x80800348: jal         0x8008CB10
    // 0x8080034C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_44;
    // 0x8080034C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_44:
    // 0x80800350: beql        $v0, $zero, L_80800364
    if (ctx->r2 == 0) {
        // 0x80800354: lbu         $t6, 0x161($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X161);
            goto L_80800364;
    }
    goto skip_0;
    // 0x80800354: lbu         $t6, 0x161($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X161);
    skip_0:
    // 0x80800358: jal         0x8009D874
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D874(rdram, ctx);
        goto after_45;
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_45:
    // 0x80800360: lbu         $t6, 0x161($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X161);
L_80800364:
    // 0x80800364: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80800368: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x8080036C: beq         $at, $zero, L_80800684
    if (ctx->r1 == 0) {
        // 0x80800370: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80800684;
    }
    // 0x80800370: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80800374: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(71, 0X71C) << 16);
    // 0x80800378: addu        $at, $at, $t7
    gpr jr_addend_80800380 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8080037C: lw          $t7, 0x71C($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(71, 0X71C));
    // 0x80800380: jr          $t7
    // 0x80800384: nop

    switch (jr_addend_80800380 >> 2) {
        case 0: goto L_80800388; break;
        case 1: goto L_808003E8; break;
        case 2: goto L_80800430; break;
        case 3: goto L_808005AC; break;
        case 4: goto L_8080061C; break;
        case 5: goto L_808001A4; break;
        case 6: goto L_808001F8; break;
        case 7: goto L_80800324; break;
        default: switch_error(__func__, 0x80800380, 0x8080071C);
    }
    // 0x80800384: nop

L_80800388:
    // 0x80800388: jal         0x800841D8
    // 0x8080038C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bswalk_entrypoint_1(rdram, ctx);
        goto after_46;
    // 0x8080038C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_46:
    // 0x80800390: jal         0x8008CAEC
    // 0x80800394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_47;
    // 0x80800394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_47:
    // 0x80800398: beq         $v0, $zero, L_808003A8
    if (ctx->r2 == 0) {
        // 0x8080039C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003A8;
    }
    // 0x8080039C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003A0: jal         0x80000000
    // 0x808003A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    bsbbuster_setSubstate(rdram, ctx);
        goto after_48;
    // 0x808003A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_48:
L_808003A8:
    // 0x808003A8: lui         $a1, 0x3EBA
    ctx->r5 = S32(0X3EBA << 16);
    // 0x808003AC: ori         $a1, $a1, 0x36E3
    ctx->r5 = ctx->r5 | 0X36E3;
    // 0x808003B0: jal         0x8008CB10
    // 0x808003B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_49;
    // 0x808003B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_49:
    // 0x808003B8: beq         $v0, $zero, L_80800684
    if (ctx->r2 == 0) {
        // 0x808003BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800684;
    }
    // 0x808003BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003C0: jal         0x800919F4
    // 0x808003C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_50;
    // 0x808003C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_50:
    // 0x808003C8: beq         $v0, $zero, L_80800684
    if (ctx->r2 == 0) {
        // 0x808003CC: nop
    
            goto L_80800684;
    }
    // 0x808003CC: nop

    // 0x808003D0: jal         0x800C6E38
    // 0x808003D4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_800C6E38(rdram, ctx);
        goto after_51;
    // 0x808003D4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_51:
    // 0x808003D8: beq         $v0, $zero, L_80800684
    if (ctx->r2 == 0) {
        // 0x808003DC: addiu       $t8, $zero, 0xB6
        ctx->r24 = ADD32(0, 0XB6);
            goto L_80800684;
    }
    // 0x808003DC: addiu       $t8, $zero, 0xB6
    ctx->r24 = ADD32(0, 0XB6);
    // 0x808003E0: b           L_80800684
    // 0x808003E4: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
        goto L_80800684;
    // 0x808003E4: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
L_808003E8:
    // 0x808003E8: jal         0x800841D8
    // 0x808003EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bswalk_entrypoint_1(rdram, ctx);
        goto after_52;
    // 0x808003EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_52:
    // 0x808003F0: jal         0x800D8FF8
    // 0x808003F4: nop

    func_800D8FF8(rdram, ctx);
        goto after_53;
    // 0x808003F4: nop

    after_53:
    // 0x808003F8: lwc1        $f4, 0x16C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x808003FC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80800400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800404: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x80800408: swc1        $f6, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f6.u32l;
    // 0x8080040C: lwc1        $f10, 0x16C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800410: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80800414: nop

    // 0x80800418: bc1f        L_80800684
    if (!c1cs) {
        // 0x8080041C: nop
    
            goto L_80800684;
    }
    // 0x8080041C: nop

    // 0x80800420: jal         0x80000000
    // 0x80800424: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    bsbbuster_setSubstate(rdram, ctx);
        goto after_54;
    // 0x80800424: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_54:
    // 0x80800428: b           L_80800684
    // 0x8080042C: nop

        goto L_80800684;
    // 0x8080042C: nop

L_80800430:
    // 0x80800430: lbu         $t9, 0x15C($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X15C);
    // 0x80800434: bnel        $t9, $zero, L_8080047C
    if (ctx->r25 != 0) {
        // 0x80800438: lbu         $t2, 0x162($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X162);
            goto L_8080047C;
    }
    goto skip_1;
    // 0x80800438: lbu         $t2, 0x162($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X162);
    skip_1:
    // 0x8080043C: jal         0x8009BB50
    // 0x80800440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_55;
    // 0x80800440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_55:
    // 0x80800444: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80800448: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x8080044C: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800450: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800458: addiu       $a1, $zero, 0x442F
    ctx->r5 = ADD32(0, 0X442F);
    // 0x8080045C: bc1fl       L_8080047C
    if (!c1cs) {
        // 0x80800460: lbu         $t2, 0x162($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X162);
            goto L_8080047C;
    }
    goto skip_2;
    // 0x80800460: lbu         $t2, 0x162($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X162);
    skip_2:
    // 0x80800464: jal         0x8009DF94
    // 0x80800468: addiu       $a3, $zero, 0x7530
    ctx->r7 = ADD32(0, 0X7530);
    func_8009DF94(rdram, ctx);
        goto after_56;
    // 0x80800468: addiu       $a3, $zero, 0x7530
    ctx->r7 = ADD32(0, 0X7530);
    after_56:
    // 0x8080046C: lbu         $t0, 0x15C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X15C);
    // 0x80800470: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80800474: sb          $t1, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r9;
    // 0x80800478: lbu         $t2, 0x162($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X162);
L_8080047C:
    // 0x8080047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800480: bnel        $t2, $zero, L_808004B4
    if (ctx->r10 != 0) {
        // 0x80800484: lbu         $t5, 0x15F($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X15F);
            goto L_808004B4;
    }
    goto skip_3;
    // 0x80800484: lbu         $t5, 0x15F($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X15F);
    skip_3:
    // 0x80800488: jal         0x8008DF8C
    // 0x8080048C: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    func_8008DF8C(rdram, ctx);
        goto after_57;
    // 0x8080048C: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    after_57:
    // 0x80800490: beq         $v0, $zero, L_808004B0
    if (ctx->r2 == 0) {
        // 0x80800494: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004B0;
    }
    // 0x80800494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800498: addiu       $a1, $zero, 0x40D
    ctx->r5 = ADD32(0, 0X40D);
    // 0x8080049C: jal         0x8009DE38
    // 0x808004A0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_58;
    // 0x808004A0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_58:
    // 0x808004A4: lbu         $t3, 0x162($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X162);
    // 0x808004A8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x808004AC: sb          $t4, 0x162($s0)
    MEM_B(0X162, ctx->r16) = ctx->r12;
L_808004B0:
    // 0x808004B0: lbu         $t5, 0x15F($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X15F);
L_808004B4:
    // 0x808004B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004B8: bnel        $t5, $zero, L_808004F8
    if (ctx->r13 != 0) {
        // 0x808004BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004F8;
    }
    goto skip_4;
    // 0x808004BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_4:
    // 0x808004C0: jal         0x8008DF8C
    // 0x808004C4: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    func_8008DF8C(rdram, ctx);
        goto after_59;
    // 0x808004C4: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    after_59:
    // 0x808004C8: beq         $v0, $zero, L_808004F4
    if (ctx->r2 == 0) {
        // 0x808004CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004F4;
    }
    // 0x808004CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004D0: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x808004D4: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x808004D8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x808004DC: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808004E0: jal         0x80085490
    // 0x808004E4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    _bamotor_entrypoint_1(rdram, ctx);
        goto after_60;
    // 0x808004E4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_60:
    // 0x808004E8: lbu         $t6, 0x15F($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X15F);
    // 0x808004EC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x808004F0: sb          $t7, 0x15F($s0)
    MEM_B(0X15F, ctx->r16) = ctx->r15;
L_808004F4:
    // 0x808004F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808004F8:
    // 0x808004F8: jal         0x80095738
    // 0x808004FC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80095738(rdram, ctx);
        goto after_61;
    // 0x808004FC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_61:
    // 0x80800500: sb          $v0, 0x15D($s0)
    MEM_B(0X15D, ctx->r16) = ctx->r2;
    // 0x80800504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800508: jal         0x80096394
    // 0x8080050C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_80096394(rdram, ctx);
        goto after_62;
    // 0x8080050C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_62:
    // 0x80800510: jal         0x800F2100
    // 0x80800514: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    func_800F2100(rdram, ctx);
        goto after_63;
    // 0x80800514: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    after_63:
    // 0x80800518: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080051C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80800520: nop

    // 0x80800524: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80800528: nop

    // 0x8080052C: bc1fl       L_80800548
    if (!c1cs) {
        // 0x80800530: sb          $zero, 0x160($s0)
        MEM_B(0X160, ctx->r16) = 0;
            goto L_80800548;
    }
    goto skip_5;
    // 0x80800530: sb          $zero, 0x160($s0)
    MEM_B(0X160, ctx->r16) = 0;
    skip_5:
    // 0x80800534: lbu         $t8, 0x160($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X160);
    // 0x80800538: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8080053C: b           L_80800548
    // 0x80800540: sb          $t9, 0x160($s0)
    MEM_B(0X160, ctx->r16) = ctx->r25;
        goto L_80800548;
    // 0x80800540: sb          $t9, 0x160($s0)
    MEM_B(0X160, ctx->r16) = ctx->r25;
    // 0x80800544: sb          $zero, 0x160($s0)
    MEM_B(0X160, ctx->r16) = 0;
L_80800548:
    // 0x80800548: lbu         $t0, 0x15E($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X15E);
    // 0x8080054C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800550: bne         $t0, $at, L_8080055C
    if (ctx->r8 != ctx->r1) {
        // 0x80800554: nop
    
            goto L_8080055C;
    }
    // 0x80800554: nop

    // 0x80800558: sb          $zero, 0x15E($s0)
    MEM_B(0X15E, ctx->r16) = 0;
L_8080055C:
    // 0x8080055C: jal         0x8008E078
    // 0x80800560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_64;
    // 0x80800560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_64:
    // 0x80800564: bne         $v0, $zero, L_80800588
    if (ctx->r2 != 0) {
        // 0x80800568: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800588;
    }
    // 0x80800568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080056C: lbu         $t1, 0x15D($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X15D);
    // 0x80800570: bne         $t1, $zero, L_80800588
    if (ctx->r9 != 0) {
        // 0x80800574: nop
    
            goto L_80800588;
    }
    // 0x80800574: nop

    // 0x80800578: lbu         $t2, 0x160($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X160);
    // 0x8080057C: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x80800580: bne         $at, $zero, L_80800684
    if (ctx->r1 != 0) {
        // 0x80800584: nop
    
            goto L_80800684;
    }
    // 0x80800584: nop

L_80800588:
    // 0x80800588: jal         0x80000000
    // 0x8080058C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    bsbbuster_setSubstate(rdram, ctx);
        goto after_65;
    // 0x8080058C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_65:
    // 0x80800590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800594: jal         0x800954E8
    // 0x80800598: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800954E8(rdram, ctx);
        goto after_66;
    // 0x80800598: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_66:
    // 0x8080059C: beq         $v0, $zero, L_80800684
    if (ctx->r2 == 0) {
        // 0x808005A0: addiu       $t3, $zero, 0x72
        ctx->r11 = ADD32(0, 0X72);
            goto L_80800684;
    }
    // 0x808005A0: addiu       $t3, $zero, 0x72
    ctx->r11 = ADD32(0, 0X72);
    // 0x808005A4: b           L_80800684
    // 0x808005A8: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
        goto L_80800684;
    // 0x808005A8: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
L_808005AC:
    // 0x808005AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005B0: jal         0x80095774
    // 0x808005B4: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    func_80095774(rdram, ctx);
        goto after_67;
    // 0x808005B4: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    after_67:
    // 0x808005B8: sb          $zero, 0x15E($s0)
    MEM_B(0X15E, ctx->r16) = 0;
    // 0x808005BC: jal         0x8009BD44
    // 0x808005C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BD44(rdram, ctx);
        goto after_68;
    // 0x808005C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_68:
    // 0x808005C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808005C8: bne         $v0, $at, L_808005DC
    if (ctx->r2 != ctx->r1) {
        // 0x808005CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005DC;
    }
    // 0x808005CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005D0: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x808005D4: jal         0x8009BDAC
    // 0x808005D8: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    func_8009BDAC(rdram, ctx);
        goto after_69;
    // 0x808005D8: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    after_69:
L_808005DC:
    // 0x808005DC: jal         0x800D8FF8
    // 0x808005E0: nop

    func_800D8FF8(rdram, ctx);
        goto after_70;
    // 0x808005E0: nop

    after_70:
    // 0x808005E4: lwc1        $f4, 0x16C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x808005E8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x808005EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005F0: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x808005F4: swc1        $f6, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f6.u32l;
    // 0x808005F8: lwc1        $f10, 0x16C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x808005FC: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80800600: nop

    // 0x80800604: bc1f        L_80800684
    if (!c1cs) {
        // 0x80800608: nop
    
            goto L_80800684;
    }
    // 0x80800608: nop

    // 0x8080060C: jal         0x80000000
    // 0x80800610: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    bsbbuster_setSubstate(rdram, ctx);
        goto after_71;
    // 0x80800610: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_71:
    // 0x80800614: b           L_80800684
    // 0x80800618: nop

        goto L_80800684;
    // 0x80800618: nop

L_8080061C:
    // 0x8080061C: jal         0x800841D8
    // 0x80800620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bswalk_entrypoint_1(rdram, ctx);
        goto after_72;
    // 0x80800620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_72:
    // 0x80800624: jal         0x8008CAEC
    // 0x80800628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_73;
    // 0x80800628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_73:
    // 0x8080062C: beq         $v0, $zero, L_80800644
    if (ctx->r2 == 0) {
        // 0x80800630: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800644;
    }
    // 0x80800630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800634: lui         $a1, 0x3F3D
    ctx->r5 = S32(0X3F3D << 16);
    // 0x80800638: ori         $a1, $a1, 0x70A4
    ctx->r5 = ctx->r5 | 0X70A4;
    // 0x8080063C: jal         0x8008CF1C
    // 0x80800640: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_74;
    // 0x80800640: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    after_74:
L_80800644:
    // 0x80800644: jal         0x8008E078
    // 0x80800648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_75;
    // 0x80800648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_75:
    // 0x8080064C: beq         $v0, $zero, L_80800684
    if (ctx->r2 == 0) {
        // 0x80800650: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_80800684;
    }
    // 0x80800650: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80800654: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80800658: jal         0x8008B1D4
    // 0x8080065C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008B1D4(rdram, ctx);
        goto after_76;
    // 0x8080065C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_76:
    // 0x80800660: lui         $a1, 0x3FF3
    ctx->r5 = S32(0X3FF3 << 16);
    // 0x80800664: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80800668: jal         0x8008B1BC
    // 0x8080066C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_8008B1BC(rdram, ctx);
        goto after_77;
    // 0x8080066C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_77:
    // 0x80800670: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80800674: jal         0x8008B134
    // 0x80800678: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_78;
    // 0x80800678: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_78:
    // 0x8080067C: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x80800680: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
L_80800684:
    // 0x80800684: jal         0x8008E35C
    // 0x80800688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_79;
    // 0x80800688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_79:
    // 0x8080068C: beq         $v0, $zero, L_80800698
    if (ctx->r2 == 0) {
        // 0x80800690: addiu       $t5, $zero, 0x4C
        ctx->r13 = ADD32(0, 0X4C);
            goto L_80800698;
    }
    // 0x80800690: addiu       $t5, $zero, 0x4C
    ctx->r13 = ADD32(0, 0X4C);
    // 0x80800694: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
L_80800698:
    // 0x80800698: lbu         $t6, 0x15E($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X15E);
    // 0x8080069C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x808006A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006A4: beq         $t6, $zero, L_808006BC
    if (ctx->r14 == 0) {
        // 0x808006A8: nop
    
            goto L_808006BC;
    }
    // 0x808006A8: nop

    // 0x808006AC: jal         0x80095760
    // 0x808006B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095760(rdram, ctx);
        goto after_80;
    // 0x808006B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_80:
    // 0x808006B4: b           L_808006C8
    // 0x808006B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808006C8;
    // 0x808006B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808006BC:
    // 0x808006BC: jal         0x80095774
    // 0x808006C0: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    func_80095774(rdram, ctx);
        goto after_81;
    // 0x808006C0: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_81:
    // 0x808006C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808006C8:
    // 0x808006C8: jal         0x8009E5C8
    // 0x808006CC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_8009E5C8(rdram, ctx);
        goto after_82;
    // 0x808006CC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_82:
    // 0x808006D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808006D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808006D8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x808006DC: jr          $ra
    // 0x808006E0: nop

    return;
    // 0x808006E0: nop

;}
RECOMP_FUNC void bsbbuster_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006E4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808006E8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(71, 0X730) << 16);
    // 0x808006EC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808006F0: jr          $ra
    // 0x808006F4: lw          $v0, 0x730($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(71, 0X730));
    return;
    // 0x808006F4: lw          $v0, 0x730($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(71, 0X730));
;}
RECOMP_FUNC void bsbee_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800014: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x80800014: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800018: bne         $v0, $zero, L_808000A0
    if (ctx->r2 != 0) {
        // 0x8080001C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000A0;
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
    // 0x8080002C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800030: jal         0x8009BF5C
    // 0x80800034: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_2;
    // 0x80800034: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080003C: jal         0x8009C4CC
    // 0x80800040: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_3;
    // 0x80800040: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800044: jal         0x8009EF60
    // 0x80800048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF60(rdram, ctx);
        goto after_4;
    // 0x80800048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080004C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800050: jal         0x800A0CF4
    // 0x80800054: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_5;
    // 0x80800054: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80800058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080005C: jal         0x800A0CE8
    // 0x80800060: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CE8(rdram, ctx);
        goto after_6;
    // 0x80800060: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80800064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800068: jal         0x80095774
    // 0x8080006C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80095774(rdram, ctx);
        goto after_7;
    // 0x8080006C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x80800070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800074: jal         0x80095774
    // 0x80800078: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80095774(rdram, ctx);
        goto after_8;
    // 0x80800078: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_8:
    // 0x8080007C: jal         0x8009E474
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E474(rdram, ctx);
        goto after_9;
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800084: jal         0x80095A40
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095A40(rdram, ctx);
        goto after_10;
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8080008C: jal         0x80084558
    // 0x80800090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babee_entrypoint_3(rdram, ctx);
        goto after_11;
    // 0x80800090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800098: jal         0x80092864
    // 0x8080009C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_80092864(rdram, ctx);
        goto after_12;
    // 0x8080009C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_12:
L_808000A0:
    // 0x808000A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000AC: jr          $ra
    // 0x808000B0: nop

    return;
    // 0x808000B0: nop

;}
RECOMP_FUNC void bsbee_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000C4: jal         0x8009E77C
    // 0x808000C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E77C(rdram, ctx);
        goto after_0;
    // 0x808000C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x808000CC: bnel        $v0, $zero, L_808001B8
    if (ctx->r2 != 0) {
        // 0x808000D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808001B8;
    }
    goto skip_0;
    // 0x808000D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808000D4: jal         0x80084560
    // 0x808000D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babee_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x808000D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E0: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x808000E4: jal         0x8009BFE4
    // 0x808000E8: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_2;
    // 0x808000E8: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_2:
    // 0x808000EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F0: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x808000F4: jal         0x8009C554
    // 0x808000F8: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009C554(rdram, ctx);
        goto after_3;
    // 0x808000F8: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_3:
    // 0x808000FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800100: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x80800104: jal         0x800959C8
    // 0x80800108: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    func_800959C8(rdram, ctx);
        goto after_4;
    // 0x80800108: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    after_4:
    // 0x8080010C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800110: jal         0x80095760
    // 0x80800114: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80095760(rdram, ctx);
        goto after_5;
    // 0x80800114: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080011C: jal         0x80095760
    // 0x80800120: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80095760(rdram, ctx);
        goto after_6;
    // 0x80800120: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x80800124: jal         0x8009EFA8
    // 0x80800128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EFA8(rdram, ctx);
        goto after_7;
    // 0x80800128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080012C: lui         $a2, 0x3CF5
    ctx->r6 = S32(0X3CF5 << 16);
    // 0x80800130: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800138: jal         0x8009F1C8
    // 0x8080013C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_8;
    // 0x8080013C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80800140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800144: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800148: jal         0x8009F1C8
    // 0x8080014C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_9;
    // 0x8080014C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_9:
    // 0x80800150: jal         0x8009E4AC
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_10;
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080015C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800160: jal         0x8009E55C
    // 0x80800164: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    func_8009E55C(rdram, ctx);
        goto after_11;
    // 0x80800164: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    after_11:
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080016C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800170: jal         0x8009E55C
    // 0x80800174: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    func_8009E55C(rdram, ctx);
        goto after_12;
    // 0x80800174: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    after_12:
    // 0x80800178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080017C: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    // 0x80800180: jal         0x800959C8
    // 0x80800184: lui         $a2, 0x422C
    ctx->r6 = S32(0X422C << 16);
    func_800959C8(rdram, ctx);
        goto after_13;
    // 0x80800184: lui         $a2, 0x422C
    ctx->r6 = S32(0X422C << 16);
    after_13:
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080018C: jal         0x8009590C
    // 0x80800190: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    func_8009590C(rdram, ctx);
        goto after_14;
    // 0x80800190: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    after_14:
    // 0x80800194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800198: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080019C: jal         0x800947EC
    // 0x808001A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_15;
    // 0x808001A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x808001A4: lui         $a1, 0x3F8C
    ctx->r5 = S32(0X3F8C << 16);
    // 0x808001A8: ori         $a1, $a1, 0xCC80
    ctx->r5 = ctx->r5 | 0XCC80;
    // 0x808001AC: jal         0x80092864
    // 0x808001B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092864(rdram, ctx);
        goto after_16;
    // 0x808001B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808001B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808001B8:
    // 0x808001B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808001BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001C0: jr          $ra
    // 0x808001C4: nop

    return;
    // 0x808001C4: nop

;}
RECOMP_FUNC void bsbee_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001D0: jal         0x80084580
    // 0x808001D4: nop

    _babee_entrypoint_8(rdram, ctx);
        goto after_0;
    // 0x808001D4: nop

    after_0:
    // 0x808001D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001E0: jr          $ra
    // 0x808001E4: nop

    return;
    // 0x808001E4: nop

    // 0x808001E8: nop

    // 0x808001EC: nop

;}
RECOMP_FUNC void func_80800000_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x8009C128
    // 0x8080000C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8080000C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x80800010: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80800014: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80800018: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8080001C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800020: jal         0x800DC178
    // 0x80800024: nop

    func_800DC178(rdram, ctx);
        goto after_1;
    // 0x80800024: nop

    after_1:
    // 0x80800028: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8080002C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80800030: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800034: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x80800038: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8080003C: jal         0x800DC178
    // 0x80800040: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    func_800DC178(rdram, ctx);
        goto after_2;
    // 0x80800040: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80800044: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80800048: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8080004C: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800050: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80800054: add.s       $f10, $f14, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f0.fl;
    // 0x80800058: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8080005C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80800060: jal         0x800DC178
    // 0x80800064: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    func_800DC178(rdram, ctx);
        goto after_3;
    // 0x80800064: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x80800068: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8080006C: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(73, 0XDC0) << 16);
    // 0x80800070: addiu       $t6, $t6, 0xDC0
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(73, 0XDC0));
    // 0x80800074: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x80800078: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080007C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80800080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800084: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x80800088: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8080008C: jal         0x800BBCB8
    // 0x80800090: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800BBCB8(rdram, ctx);
        goto after_4;
    // 0x80800090: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x80800094: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800098: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080009C: jr          $ra
    // 0x808000A0: nop

    return;
    // 0x808000A0: nop

;}
RECOMP_FUNC void func_808000A4_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808000A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000AC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x808000B0: jal         0x800B5BE4
    // 0x808000B4: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    func_800B5BE4(rdram, ctx);
        goto after_0;
    // 0x808000B4: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_0:
    // 0x808000B8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x808000BC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808000C0: jal         0x8009C128
    // 0x808000C4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x808000C4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x808000C8: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x808000CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808000D0: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x808000D4: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(73, 0XDE8) << 16);
    // 0x808000D8: addiu       $t6, $t6, 0xDE8
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(73, 0XDE8));
    // 0x808000DC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x808000E0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808000E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808000E8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x808000EC: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x808000F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x808000F4: jal         0x800BABB8
    // 0x808000F8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_2;
    // 0x808000F8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x808000FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800100: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800104: jr          $ra
    // 0x80800108: nop

    return;
    // 0x80800108: nop

;}
RECOMP_FUNC void func_8080010C_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080010C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800110: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800114: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800118: jal         0x80082838
    // 0x8080011C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bsbee_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080011C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800124: addiu       $a1, $zero, 0x1DF
    ctx->r5 = ADD32(0, 0X1DF);
    // 0x80800128: jal         0x8008CDB8
    // 0x8080012C: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008CDB8(rdram, ctx);
        goto after_1;
    // 0x8080012C: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_1:
    // 0x80800130: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800134: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080013C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800140: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800144: jal         0x8009FFD8
    // 0x80800148: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800148: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x8080014C: jal         0x8009EF04
    // 0x80800150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_3;
    // 0x80800150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800154: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800158: nop

    // 0x8080015C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800160: nop

    // 0x80800164: bc1t        L_80800180
    if (c1cs) {
        // 0x80800168: nop
    
            goto L_80800180;
    }
    // 0x80800168: nop

    // 0x8080016C: jal         0x8009EEB8
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_4;
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800174: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800178: jal         0x8009C914
    // 0x8080017C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_5;
    // 0x8080017C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_80800180:
    // 0x80800180: jal         0x8009C990
    // 0x80800184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_6;
    // 0x80800184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800188: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080018C: jal         0x8009B9C0
    // 0x80800190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_7;
    // 0x80800190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800198: jal         0x8009B9B0
    // 0x8080019C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_8;
    // 0x8080019C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_8:
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A4: jal         0x8009BCB4
    // 0x808001A8: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_9;
    // 0x808001A8: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    after_9:
    // 0x808001AC: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x808001B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808001B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808001B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808001BC: jr          $ra
    // 0x808001C0: nop

    return;
    // 0x808001C0: nop

;}
RECOMP_FUNC void func_808001C4_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808001C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001D4: jal         0x8008CABC
    // 0x808001D8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808001D8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808001DC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x808001E0: jal         0x80082840
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsbee_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808001E8: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x808001EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808001F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808001F4: beq         $v0, $zero, L_8080020C
    if (ctx->r2 == 0) {
        // 0x808001F8: lui         $a1, 0x3E88
        ctx->r5 = S32(0X3E88 << 16);
            goto L_8080020C;
    }
    // 0x808001F8: lui         $a1, 0x3E88
    ctx->r5 = S32(0X3E88 << 16);
    // 0x808001FC: beq         $v0, $at, L_80800244
    if (ctx->r2 == ctx->r1) {
        // 0x80800200: nop
    
            goto L_80800244;
    }
    // 0x80800200: nop

    // 0x80800204: b           L_80800294
    // 0x80800208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800294;
    // 0x80800208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080020C:
    // 0x8080020C: jal         0x8008B348
    // 0x80800210: ori         $a1, $a1, 0x3127
    ctx->r5 = ctx->r5 | 0X3127;
    func_8008B348(rdram, ctx);
        goto after_2;
    // 0x80800210: ori         $a1, $a1, 0x3127
    ctx->r5 = ctx->r5 | 0X3127;
    after_2:
    // 0x80800214: beq         $v0, $zero, L_80800290
    if (ctx->r2 == 0) {
        // 0x80800218: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800290;
    }
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080021C: jal         0x8009BA58
    // 0x80800220: lui         $a1, 0x44C8
    ctx->r5 = S32(0X44C8 << 16);
    func_8009BA58(rdram, ctx);
        goto after_3;
    // 0x80800220: lui         $a1, 0x44C8
    ctx->r5 = S32(0X44C8 << 16);
    after_3:
    // 0x80800224: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80800228: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800230: jal         0x8009DE38
    // 0x80800234: addiu       $a1, $zero, 0x406
    ctx->r5 = ADD32(0, 0X406);
    func_8009DE38(rdram, ctx);
        goto after_4;
    // 0x80800234: addiu       $a1, $zero, 0x406
    ctx->r5 = ADD32(0, 0X406);
    after_4:
    // 0x80800238: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8080023C: b           L_80800290
    // 0x80800240: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
        goto L_80800290;
    // 0x80800240: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_80800244:
    // 0x80800244: jal         0x80000000
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbeefly(rdram, ctx);
        goto after_5;
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080024C: jal         0x8008B324
    // 0x80800250: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_6;
    // 0x80800250: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_6:
    // 0x80800254: beq         $v0, $zero, L_8080026C
    if (ctx->r2 == 0) {
        // 0x80800258: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080026C;
    }
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080025C: lui         $a2, 0x3EC2
    ctx->r6 = S32(0X3EC2 << 16);
    // 0x80800260: ori         $a2, $a2, 0x8F5C
    ctx->r6 = ctx->r6 | 0X8F5C;
    // 0x80800264: jal         0x8008CB3C
    // 0x80800268: addiu       $a1, $zero, 0x1DC
    ctx->r5 = ADD32(0, 0X1DC);
    func_8008CB3C(rdram, ctx);
        goto after_7;
    // 0x80800268: addiu       $a1, $zero, 0x1DC
    ctx->r5 = ADD32(0, 0X1DC);
    after_7:
L_8080026C:
    // 0x8080026C: jal         0x8009BB50
    // 0x80800270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_8;
    // 0x80800270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800274: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800278: addiu       $t7, $zero, 0x8C
    ctx->r15 = ADD32(0, 0X8C);
    // 0x8080027C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80800280: nop

    // 0x80800284: bc1fl       L_80800294
    if (!c1cs) {
        // 0x80800288: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800294;
    }
    goto skip_0;
    // 0x80800288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8080028C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80800290:
    // 0x80800290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800294:
    // 0x80800294: jal         0x8009E5C8
    // 0x80800298: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_9;
    // 0x80800298: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_9:
    // 0x8080029C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808002A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808002A8: jr          $ra
    // 0x808002AC: nop

    return;
    // 0x808002AC: nop

;}
RECOMP_FUNC void func_808002B0_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002B8: jal         0x80082830
    // 0x808002BC: nop

    _bsbee_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x808002BC: nop

    after_0:
    // 0x808002C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002C8: jr          $ra
    // 0x808002CC: nop

    return;
    // 0x808002CC: nop

;}
RECOMP_FUNC void bsbeefly_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002D0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808002D4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(73, 0XE18) << 16);
    // 0x808002D8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808002DC: jr          $ra
    // 0x808002E0: lw          $v0, 0xE18($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(73, 0XE18));
    return;
    // 0x808002E0: lw          $v0, 0xE18($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(73, 0XE18));
;}
RECOMP_FUNC void func_808002E4_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808002E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808002F0: jal         0x8009E704
    // 0x808002F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E704(rdram, ctx);
        goto after_0;
    // 0x808002F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808002F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002FC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80800300: jal         0x8009CA70
    // 0x80800304: addiu       $a2, $zero, 0x4000
    ctx->r6 = ADD32(0, 0X4000);
    func_8009CA70(rdram, ctx);
        goto after_1;
    // 0x80800304: addiu       $a2, $zero, 0x4000
    ctx->r6 = ADD32(0, 0X4000);
    after_1:
    // 0x80800308: bne         $v0, $zero, L_80800388
    if (ctx->r2 != 0) {
        // 0x8080030C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800388;
    }
    // 0x8080030C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800310: jal         0x80093360
    // 0x80800314: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80093360(rdram, ctx);
        goto after_2;
    // 0x80800314: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080031C: jal         0x8009C4CC
    // 0x80800320: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_3;
    // 0x80800320: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800328: jal         0x8009BF5C
    // 0x8080032C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_4;
    // 0x8080032C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800330: jal         0x800A4E30
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4E30(rdram, ctx);
        goto after_5;
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800338: jal         0x8009BC6C
    // 0x8080033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_6;
    // 0x8080033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800340: jal         0x8009BC90
    // 0x80800344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC90(rdram, ctx);
        goto after_7;
    // 0x80800344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080034C: jal         0x800845A8
    // 0x80800350: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _baboost_entrypoint_4(rdram, ctx);
        goto after_8;
    // 0x80800350: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80800354: jal         0x80084798
    // 0x80800358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babuzz_entrypoint_1(rdram, ctx);
        goto after_9;
    // 0x80800358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080035C: jal         0x80084568
    // 0x80800360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babee_entrypoint_5(rdram, ctx);
        goto after_10;
    // 0x80800360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800364: jal         0x80084BE8
    // 0x80800368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_4(rdram, ctx);
        goto after_11;
    // 0x80800368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8080036C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800370: jal         0x80084D08
    // 0x80800374: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bafpctrl_entrypoint_18(rdram, ctx);
        goto after_12;
    // 0x80800374: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x80800378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080037C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800380: jal         0x800947EC
    // 0x80800384: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_13;
    // 0x80800384: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
L_80800388:
    // 0x80800388: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080038C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800390: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800394: jr          $ra
    // 0x80800398: nop

    return;
    // 0x80800398: nop

;}
RECOMP_FUNC void func_8080039C_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080039C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808003A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808003A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808003A8: jal         0x8009E710
    // 0x808003AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E710(rdram, ctx);
        goto after_0;
    // 0x808003AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808003B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003B4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x808003B8: jal         0x8009CA70
    // 0x808003BC: addiu       $a2, $zero, 0x4000
    ctx->r6 = ADD32(0, 0X4000);
    func_8009CA70(rdram, ctx);
        goto after_1;
    // 0x808003BC: addiu       $a2, $zero, 0x4000
    ctx->r6 = ADD32(0, 0X4000);
    after_1:
    // 0x808003C0: bnel        $v0, $zero, L_80800470
    if (ctx->r2 != 0) {
        // 0x808003C4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800470;
    }
    goto skip_0;
    // 0x808003C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808003C8: jal         0x80084BF0
    // 0x808003CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x808003CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808003D0: jal         0x80084570
    // 0x808003D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babee_entrypoint_6(rdram, ctx);
        goto after_3;
    // 0x808003D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808003D8: lui         $a1, 0x45BB
    ctx->r5 = S32(0X45BB << 16);
    // 0x808003DC: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x808003E0: lui         $a3, 0x463B
    ctx->r7 = S32(0X463B << 16);
    // 0x808003E4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x808003E8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808003EC: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x808003F0: jal         0x80084578
    // 0x808003F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babee_entrypoint_7(rdram, ctx);
        goto after_4;
    // 0x808003F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003FC: jal         0x80093360
    // 0x80800400: lui         $a1, 0x4282
    ctx->r5 = S32(0X4282 << 16);
    func_80093360(rdram, ctx);
        goto after_5;
    // 0x80800400: lui         $a1, 0x4282
    ctx->r5 = S32(0X4282 << 16);
    after_5:
    // 0x80800404: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800408: jal         0x8009C908
    // 0x8080040C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009C908(rdram, ctx);
        goto after_6;
    // 0x8080040C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x80800410: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800414: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x80800418: jal         0x8009C554
    // 0x8080041C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8009C554(rdram, ctx);
        goto after_7;
    // 0x8080041C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_7:
    // 0x80800420: jal         0x80084C68
    // 0x80800424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_20(rdram, ctx);
        goto after_8;
    // 0x80800424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080042C: jal         0x8009BCB4
    // 0x80800430: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_9;
    // 0x80800430: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    after_9:
    // 0x80800434: lui         $a1, 0xC2C7
    ctx->r5 = S32(0XC2C7 << 16);
    // 0x80800438: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8080043C: jal         0x8009BCC4
    // 0x80800440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_10;
    // 0x80800440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800444: jal         0x800845A0
    // 0x80800448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baboost_entrypoint_3(rdram, ctx);
        goto after_11;
    // 0x80800448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8080044C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800450: jal         0x800845A8
    // 0x80800454: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _baboost_entrypoint_4(rdram, ctx);
        goto after_12;
    // 0x80800454: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x80800458: jal         0x800847A0
    // 0x8080045C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babuzz_entrypoint_2(rdram, ctx);
        goto after_13;
    // 0x8080045C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800464: jal         0x80084D08
    // 0x80800468: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bafpctrl_entrypoint_18(rdram, ctx);
        goto after_14;
    // 0x80800468: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x8080046C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800470:
    // 0x80800470: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800474: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800478: jr          $ra
    // 0x8080047C: nop

    return;
    // 0x8080047C: nop

;}
RECOMP_FUNC void func_80800480_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800480: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800484: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800488: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080048C: jal         0x8009EF28
    // 0x80800490: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009EF28(rdram, ctx);
        goto after_0;
    // 0x80800490: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800494: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80800498: jal         0x800A4CA8
    // 0x8080049C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_1;
    // 0x8080049C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808004A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808004A4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x808004A8: lui         $a2, 0x44FA
    ctx->r6 = S32(0X44FA << 16);
    // 0x808004AC: jal         0x800892E0
    // 0x808004B0: lui         $a3, 0x43AF
    ctx->r7 = S32(0X43AF << 16);
    _ncbafly_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x808004B0: lui         $a3, 0x43AF
    ctx->r7 = S32(0X43AF << 16);
    after_2:
    // 0x808004B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004B8: jal         0x800919F4
    // 0x808004BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800919F4(rdram, ctx);
        goto after_3;
    // 0x808004BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x808004C0: beq         $v0, $zero, L_808004F0
    if (ctx->r2 == 0) {
        // 0x808004C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004F0;
    }
    // 0x808004C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004CC: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x808004D0: jal         0x8009C99C
    // 0x808004D4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_4;
    // 0x808004D4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    after_4:
    // 0x808004D8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x808004DC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x808004E0: lui         $at, 0x42AA
    ctx->r1 = S32(0X42AA << 16);
    // 0x808004E4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x808004E8: b           L_80800514
    // 0x808004EC: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
        goto L_80800514;
    // 0x808004EC: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
L_808004F0:
    // 0x808004F0: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x808004F4: jal         0x8009C99C
    // 0x808004F8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8009C99C(rdram, ctx);
        goto after_5;
    // 0x808004F8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_5:
    // 0x808004FC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80800500: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800504: lui         $at, 0x4282
    ctx->r1 = S32(0X4282 << 16);
    // 0x80800508: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8080050C: nop

    // 0x80800510: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
L_80800514:
    // 0x80800514: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80800518: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8080051C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80800520: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800524: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800528: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x8080052C: jal         0x800F10B4
    // 0x80800530: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    func_800F10B4(rdram, ctx);
        goto after_6;
    // 0x80800530: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    after_6:
    // 0x80800534: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800538: jal         0x8009C4CC
    // 0x8080053C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C4CC(rdram, ctx);
        goto after_7;
    // 0x8080053C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800540: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80800544: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80800548: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8080054C: neg.s       $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = -ctx->f2.fl;
    // 0x80800550: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80800554: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80800558: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8080055C: jal         0x800F10B4
    // 0x80800560: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_800F10B4(rdram, ctx);
        goto after_8;
    // 0x80800560: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_8:
    // 0x80800564: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80800568: jal         0x80084C90
    // 0x8080056C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_3(rdram, ctx);
        goto after_9;
    // 0x8080056C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800570: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800578: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8080057C: jal         0x8009C990
    // 0x80800580: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    func_8009C990(rdram, ctx);
        goto after_10;
    // 0x80800580: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    after_10:
    // 0x80800584: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80800588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080058C: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x80800590: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80800594: jal         0x8009C914
    // 0x80800598: nop

    func_8009C914(rdram, ctx);
        goto after_11;
    // 0x80800598: nop

    after_11:
    // 0x8080059C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808005A0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808005A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808005A8: jr          $ra
    // 0x808005AC: nop

    return;
    // 0x808005AC: nop

;}
RECOMP_FUNC void func_808005B0_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005B8: jal         0x8009E6EC
    // 0x808005BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x808005BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808005C0: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x808005C4: bne         $v0, $at, L_808005E8
    if (ctx->r2 != ctx->r1) {
        // 0x808005C8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808005E8;
    }
    // 0x808005C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808005CC: jal         0x80084598
    // 0x808005D0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    _baboost_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x808005D0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x808005D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808005D8: jal         0x8009E830
    // 0x808005DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_2;
    // 0x808005DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x808005E0: b           L_808005F4
    // 0x808005E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808005F4;
    // 0x808005E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808005E8:
    // 0x808005E8: jal         0x80099B94
    // 0x808005EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80099B94(rdram, ctx);
        goto after_3;
    // 0x808005EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
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
RECOMP_FUNC void func_80800600_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800600: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800604: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800608: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080060C: jal         0x80082838
    // 0x80800610: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bsbee_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800610: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800614: jal         0x8009E710
    // 0x80800618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E710(rdram, ctx);
        goto after_1;
    // 0x80800618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080061C: lui         $a2, 0x3EC2
    ctx->r6 = S32(0X3EC2 << 16);
    // 0x80800620: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80800624: ori         $a2, $a2, 0x8F5C
    ctx->r6 = ctx->r6 | 0X8F5C;
    // 0x80800628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080062C: jal         0x8008CB3C
    // 0x80800630: addiu       $a1, $zero, 0x1DC
    ctx->r5 = ADD32(0, 0X1DC);
    func_8008CB3C(rdram, ctx);
        goto after_2;
    // 0x80800630: addiu       $a1, $zero, 0x1DC
    ctx->r5 = ADD32(0, 0X1DC);
    after_2:
    // 0x80800634: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80800638: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080063C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800640: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800644: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800648: jal         0x8009FFD8
    // 0x8080064C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_3;
    // 0x8080064C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_3:
    // 0x80800650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800654: jal         0x80095738
    // 0x80800658: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80095738(rdram, ctx);
        goto after_4;
    // 0x80800658: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_4:
    // 0x8080065C: beq         $v0, $zero, L_80800678
    if (ctx->r2 == 0) {
        // 0x80800660: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800678;
    }
    // 0x80800660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800668: jal         0x8009B9B0
    // 0x8080066C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_5;
    // 0x8080066C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x80800670: b           L_80800680
    // 0x80800674: nop

        goto L_80800680;
    // 0x80800674: nop

L_80800678:
    // 0x80800678: jal         0x8009B9B0
    // 0x8080067C: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8009B9B0(rdram, ctx);
        goto after_6;
    // 0x8080067C: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_6:
L_80800680:
    // 0x80800680: jal         0x8009C990
    // 0x80800684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_7;
    // 0x80800684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800688: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8080068C: jal         0x8009BB00
    // 0x80800690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_8;
    // 0x80800690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800694: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080069C: jal         0x8009BA68
    // 0x808006A0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_9;
    // 0x808006A0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_9:
    // 0x808006A4: jal         0x8009C990
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_10;
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808006AC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808006B0: jal         0x8009B9C0
    // 0x808006B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_11;
    // 0x808006B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808006B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006BC: jal         0x800A4DA4
    // 0x808006C0: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    func_800A4DA4(rdram, ctx);
        goto after_12;
    // 0x808006C0: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_12:
    // 0x808006C4: jal         0x8000039C
    // 0x808006C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080039C_bsbeefly(rdram, ctx);
        goto after_13;
    // 0x808006C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808006CC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x808006D0: addiu       $at, $zero, 0x8B
    ctx->r1 = ADD32(0, 0X8B);
    // 0x808006D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006D8: beq         $t7, $at, L_808006F0
    if (ctx->r15 == ctx->r1) {
        // 0x808006DC: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_808006F0;
    }
    // 0x808006DC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x808006E0: jal         0x80084598
    // 0x808006E4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    _baboost_entrypoint_2(rdram, ctx);
        goto after_14;
    // 0x808006E4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_14:
    // 0x808006E8: b           L_808006F4
    // 0x808006EC: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
        goto L_808006F4;
    // 0x808006EC: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
L_808006F0:
    // 0x808006F0: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
L_808006F4:
    // 0x808006F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808006F8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808006FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800700: jr          $ra
    // 0x80800704: nop

    return;
    // 0x80800704: nop

;}
RECOMP_FUNC void func_80800708_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800708: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8080070C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800710: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80800714: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800718: jal         0x8008CABC
    // 0x8080071C: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080071C: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    after_0:
    // 0x80800720: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x80800724: jal         0x80082840
    // 0x80800728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsbee_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080072C: jal         0x80084C68
    // 0x80800730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_20(rdram, ctx);
        goto after_2;
    // 0x80800730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800734: jal         0x80000480
    // 0x80800738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800480_bsbeefly(rdram, ctx);
        goto after_3;
    // 0x80800738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080073C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800740: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x80800744: jal         0x80084C18
    // 0x80800748: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    _bafly_entrypoint_10(rdram, ctx);
        goto after_4;
    // 0x80800748: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    after_4:
    // 0x8080074C: jal         0x80084C20
    // 0x80800750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_11(rdram, ctx);
        goto after_5;
    // 0x80800750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800754: jal         0x8009BFCC
    // 0x80800758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BFCC(rdram, ctx);
        goto after_6;
    // 0x80800758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080075C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800760: jal         0x80091A58
    // 0x80800764: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_7;
    // 0x80800764: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_7:
    // 0x80800768: beq         $v0, $zero, L_8080079C
    if (ctx->r2 == 0) {
        // 0x8080076C: nop
    
            goto L_8080079C;
    }
    // 0x8080076C: nop

    // 0x80800770: jal         0x8009C150
    // 0x80800774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C150(rdram, ctx);
        goto after_8;
    // 0x80800774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800778: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(73, 0XDA0) << 16);
    // 0x8080077C: lwc1        $f4, 0xDA0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(73, 0XDA0));
    // 0x80800780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800784: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80800788: nop

    // 0x8080078C: bc1f        L_8080079C
    if (!c1cs) {
        // 0x80800790: nop
    
            goto L_8080079C;
    }
    // 0x80800790: nop

    // 0x80800794: jal         0x80084598
    // 0x80800798: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    _baboost_entrypoint_2(rdram, ctx);
        goto after_9;
    // 0x80800798: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_9:
L_8080079C:
    // 0x8080079C: jal         0x80084590
    // 0x808007A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baboost_entrypoint_1(rdram, ctx);
        goto after_10;
    // 0x808007A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808007A4: bne         $v0, $zero, L_808007C4
    if (ctx->r2 != 0) {
        // 0x808007A8: nop
    
            goto L_808007C4;
    }
    // 0x808007A8: nop

    // 0x808007AC: jal         0x8008E35C
    // 0x808007B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_11;
    // 0x808007B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808007B4: beq         $v0, $zero, L_808007C4
    if (ctx->r2 == 0) {
        // 0x808007B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007C4;
    }
    // 0x808007B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007BC: jal         0x80084598
    // 0x808007C0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    _baboost_entrypoint_2(rdram, ctx);
        goto after_12;
    // 0x808007C0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_12:
L_808007C4:
    // 0x808007C4: jal         0x80084590
    // 0x808007C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baboost_entrypoint_1(rdram, ctx);
        goto after_13;
    // 0x808007C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808007CC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x808007D0: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(73, 0XE28) << 16);
    // 0x808007D4: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x808007D8: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x808007DC: lw          $a1, 0xE28($a1)
    ctx->r5 = MEM_W(ctx->r5, (int16_t)RELOC_LO16(73, 0XE28));
    // 0x808007E0: jal         0x8008B1BC
    // 0x808007E4: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_8008B1BC(rdram, ctx);
        goto after_14;
    // 0x808007E4: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_14:
    // 0x808007E8: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x808007EC: lui         $t9, 0x0
    ctx->r25 = S32(RELOC_HI16(73, 0XE3C) << 16);
    // 0x808007F0: addiu       $t9, $t9, 0xE3C
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(73, 0XE3C));
    // 0x808007F4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x808007F8: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x808007FC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(73, 0XDA4) << 16);
    // 0x80800800: lwc1        $f6, 0xDA4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(73, 0XDA4));
    // 0x80800804: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80800808: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8080080C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800810: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80800814: jal         0x8009BFCC
    // 0x80800818: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    func_8009BFCC(rdram, ctx);
        goto after_15;
    // 0x80800818: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    after_15:
    // 0x8080081C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80800820: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800824: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x80800828: jal         0x8009BB50
    // 0x8080082C: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    func_8009BB50(rdram, ctx);
        goto after_16;
    // 0x8080082C: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    after_16:
    // 0x80800830: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800834: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80800838: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8080083C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80800840: nop

    // 0x80800844: bc1f        L_808008B8
    if (!c1cs) {
        // 0x80800848: lui         $at, 0x4396
        ctx->r1 = S32(0X4396 << 16);
            goto L_808008B8;
    }
    // 0x80800848: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8080084C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800850: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(73, 0XDA8) << 16);
    // 0x80800854: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x80800858: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8080085C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80800860: bc1fl       L_80800884
    if (!c1cs) {
        // 0x80800864: lui         $at, 0x42A0
        ctx->r1 = S32(0X42A0 << 16);
            goto L_80800884;
    }
    goto skip_0;
    // 0x80800864: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    skip_0:
    // 0x80800868: lwc1        $f18, 0xDA8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(73, 0XDA8));
    // 0x8080086C: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    // 0x80800870: jal         0x800F10B4
    // 0x80800874: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800F10B4(rdram, ctx);
        goto after_17;
    // 0x80800874: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_17:
    // 0x80800878: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8080087C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80800880: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
L_80800884:
    // 0x80800884: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800888: lui         $a3, 0xBE4C
    ctx->r7 = S32(0XBE4C << 16);
    // 0x8080088C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800890: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x80800894: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80800898: lui         $a2, 0x43B4
    ctx->r6 = S32(0X43B4 << 16);
    // 0x8080089C: bc1fl       L_808008BC
    if (!c1cs) {
        // 0x808008A0: lwc1        $f8, 0x50($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
            goto L_808008BC;
    }
    goto skip_1;
    // 0x808008A0: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    skip_1:
    // 0x808008A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x808008A8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808008AC: jal         0x800F10B4
    // 0x808008B0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_18;
    // 0x808008B0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_18:
    // 0x808008B4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_808008B8:
    // 0x808008B8: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
L_808008BC:
    // 0x808008BC: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x808008C0: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x808008C4: bne         $t0, $zero, L_808008F0
    if (ctx->r8 != 0) {
        // 0x808008C8: swc1        $f10, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
            goto L_808008F0;
    }
    // 0x808008C8: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x808008CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008D0: jal         0x800919F4
    // 0x808008D4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800919F4(rdram, ctx);
        goto after_19;
    // 0x808008D4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_19:
    // 0x808008D8: beq         $v0, $zero, L_808008F0
    if (ctx->r2 == 0) {
        // 0x808008DC: lwc1        $f16, 0x50($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
            goto L_808008F0;
    }
    // 0x808008DC: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x808008E0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(73, 0XDAC) << 16);
    // 0x808008E4: lwc1        $f18, 0xDAC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(73, 0XDAC));
    // 0x808008E8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x808008EC: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
L_808008F0:
    // 0x808008F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008F4: jal         0x800847B0
    // 0x808008F8: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    _babuzz_entrypoint_4(rdram, ctx);
        goto after_20;
    // 0x808008F8: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    after_20:
    // 0x808008FC: jal         0x800847A8
    // 0x80800900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babuzz_entrypoint_3(rdram, ctx);
        goto after_21;
    // 0x80800900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800904: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x80800908: beq         $v0, $zero, L_80800920
    if (ctx->r2 == 0) {
        // 0x8080090C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80800920;
    }
    // 0x8080090C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800910: beq         $v0, $at, L_8080093C
    if (ctx->r2 == ctx->r1) {
        // 0x80800914: nop
    
            goto L_8080093C;
    }
    // 0x80800914: nop

    // 0x80800918: b           L_80800A04
    // 0x8080091C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800A04;
    // 0x8080091C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800920:
    // 0x80800920: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80800924: lui         $t2, 0x0
    ctx->r10 = S32(RELOC_HI16(73, 0XE3C) << 16);
    // 0x80800928: addiu       $t2, $t2, 0xE3C
    ctx->r10 = ADD32(ctx->r10, (int16_t)RELOC_LO16(73, 0XE3C));
    // 0x8080092C: beq         $t1, $t2, L_80800A00
    if (ctx->r9 == ctx->r10) {
        // 0x80800930: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_80800A00;
    }
    // 0x80800930: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80800934: b           L_80800A00
    // 0x80800938: sw          $t3, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r11;
        goto L_80800A00;
    // 0x80800938: sw          $t3, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r11;
L_8080093C:
    // 0x8080093C: jal         0x8009BFD8
    // 0x80800940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BFD8(rdram, ctx);
        goto after_22;
    // 0x80800940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80800944: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80800948: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080094C: jal         0x800136E4
    // 0x80800950: sub.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f6.fl;
    func_800136E4(rdram, ctx);
        goto after_23;
    // 0x80800950: sub.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f6.fl;
    after_23:
    // 0x80800954: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80800958: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8080095C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80800960: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80800964: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80800968: nop

    // 0x8080096C: bc1fl       L_80800998
    if (!c1cs) {
        // 0x80800970: mfc1        $a1, $f2
        ctx->r5 = (int32_t)ctx->f2.u32l;
            goto L_80800998;
    }
    goto skip_2;
    // 0x80800970: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    skip_2:
    // 0x80800974: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800978: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8080097C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80800980: nop

    // 0x80800984: bc1fl       L_80800998
    if (!c1cs) {
        // 0x80800988: mfc1        $a1, $f2
        ctx->r5 = (int32_t)ctx->f2.u32l;
            goto L_80800998;
    }
    goto skip_3;
    // 0x80800988: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    skip_3:
    // 0x8080098C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800990: nop

    // 0x80800994: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_80800998:
    // 0x80800998: jal         0x8009BF5C
    // 0x8080099C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BF5C(rdram, ctx);
        goto after_24;
    // 0x8080099C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x808009A0: jal         0x80084C70
    // 0x808009A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_21(rdram, ctx);
        goto after_25;
    // 0x808009A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x808009A8: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x808009AC: beql        $t4, $zero, L_808009E4
    if (ctx->r12 == 0) {
        // 0x808009B0: lw          $t5, 0x30($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X30);
            goto L_808009E4;
    }
    goto skip_4;
    // 0x808009B0: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    skip_4:
    // 0x808009B4: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x808009B8: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x808009BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808009C0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x808009C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009C8: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x808009CC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x808009D0: jal         0x8009BA58
    // 0x808009D4: nop

    func_8009BA58(rdram, ctx);
        goto after_26;
    // 0x808009D4: nop

    after_26:
    // 0x808009D8: jal         0x80000000
    // 0x808009DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbeefly(rdram, ctx);
        goto after_27;
    // 0x808009DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x808009E0: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
L_808009E4:
    // 0x808009E4: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(73, 0XE3C) << 16);
    // 0x808009E8: addiu       $t6, $t6, 0xE3C
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(73, 0XE3C));
    // 0x808009EC: bnel        $t5, $t6, L_80800A04
    if (ctx->r13 != ctx->r14) {
        // 0x808009F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A04;
    }
    goto skip_5;
    // 0x808009F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_5:
    // 0x808009F4: jal         0x80084C68
    // 0x808009F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_20(rdram, ctx);
        goto after_28;
    // 0x808009F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x808009FC: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
L_80800A00:
    // 0x80800A00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800A04:
    // 0x80800A04: jal         0x800919F4
    // 0x80800A08: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800919F4(rdram, ctx);
        goto after_29;
    // 0x80800A08: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_29:
    // 0x80800A0C: beq         $v0, $zero, L_80800A2C
    if (ctx->r2 == 0) {
        // 0x80800A10: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A2C;
    }
    // 0x80800A10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A14: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(73, 0XDB0) << 16);
    // 0x80800A18: lwc1        $f0, 0xDB0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(73, 0XDB0));
    // 0x80800A1C: lui         $at, 0xC4E1
    ctx->r1 = S32(0XC4E1 << 16);
    // 0x80800A20: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800A24: b           L_80800A44
    // 0x80800A28: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
        goto L_80800A44;
    // 0x80800A28: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
L_80800A2C:
    // 0x80800A2C: lui         $at, 0xC42F
    ctx->r1 = S32(0XC42F << 16);
    // 0x80800A30: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800A34: lui         $at, 0xC47A
    ctx->r1 = S32(0XC47A << 16);
    // 0x80800A38: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800A3C: nop

    // 0x80800A40: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
L_80800A44:
    // 0x80800A44: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800A48: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(73, 0XDB4) << 16);
    // 0x80800A4C: lwc1        $f10, 0xDB4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(73, 0XDB4));
    // 0x80800A50: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x80800A54: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x80800A58: lui         $a3, 0x4416
    ctx->r7 = S32(0X4416 << 16);
    // 0x80800A5C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80800A60: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x80800A64: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80800A68: jal         0x80084C08
    // 0x80800A6C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    _bafly_entrypoint_8(rdram, ctx);
        goto after_30;
    // 0x80800A6C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_30:
    // 0x80800A70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A74: jal         0x800919F4
    // 0x80800A78: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800919F4(rdram, ctx);
        goto after_31;
    // 0x80800A78: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_31:
    // 0x80800A7C: beql        $v0, $zero, L_80800AB4
    if (ctx->r2 == 0) {
        // 0x80800A80: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800AB4;
    }
    goto skip_6;
    // 0x80800A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_6:
    // 0x80800A84: jal         0x800000A4
    // 0x80800A88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000A4_bsbeefly(rdram, ctx);
        goto after_32;
    // 0x80800A88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x80800A8C: jal         0x8009BB00
    // 0x80800A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_33;
    // 0x80800A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x80800A94: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x80800A98: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AA0: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80800AA4: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80800AA8: jal         0x8009B9B0
    // 0x80800AAC: nop

    func_8009B9B0(rdram, ctx);
        goto after_34;
    // 0x80800AAC: nop

    after_34:
    // 0x80800AB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800AB4:
    // 0x80800AB4: jal         0x800919F4
    // 0x80800AB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_35;
    // 0x80800AB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_35:
    // 0x80800ABC: beq         $v0, $zero, L_80800ACC
    if (ctx->r2 == 0) {
        // 0x80800AC0: nop
    
            goto L_80800ACC;
    }
    // 0x80800AC0: nop

    // 0x80800AC4: jal         0x80084550
    // 0x80800AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babee_entrypoint_2(rdram, ctx);
        goto after_36;
    // 0x80800AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
L_80800ACC:
    // 0x80800ACC: jal         0x80084BD8
    // 0x80800AD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_2(rdram, ctx);
        goto after_37;
    // 0x80800AD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_37:
    // 0x80800AD4: beq         $v0, $zero, L_80800AF0
    if (ctx->r2 == 0) {
        // 0x80800AD8: nop
    
            goto L_80800AF0;
    }
    // 0x80800AD8: nop

    // 0x80800ADC: jal         0x8008E35C
    // 0x80800AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_38;
    // 0x80800AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_38:
    // 0x80800AE4: bne         $v0, $zero, L_80800AF0
    if (ctx->r2 != 0) {
        // 0x80800AE8: addiu       $t7, $zero, 0x85
        ctx->r15 = ADD32(0, 0X85);
            goto L_80800AF0;
    }
    // 0x80800AE8: addiu       $t7, $zero, 0x85
    ctx->r15 = ADD32(0, 0X85);
    // 0x80800AEC: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
L_80800AF0:
    // 0x80800AF0: jal         0x800845B0
    // 0x80800AF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baboost_entrypoint_5(rdram, ctx);
        goto after_39;
    // 0x80800AF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_39:
    // 0x80800AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AFC: jal         0x8009E5C8
    // 0x80800B00: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    func_8009E5C8(rdram, ctx);
        goto after_40;
    // 0x80800B00: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    after_40:
    // 0x80800B04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80800B08: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80800B0C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80800B10: jr          $ra
    // 0x80800B14: nop

    return;
    // 0x80800B14: nop

;}
RECOMP_FUNC void func_80800B18_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800B1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B20: jal         0x800002E4
    // 0x80800B24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808002E4_bsbeefly(rdram, ctx);
        goto after_0;
    // 0x80800B24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800B28: jal         0x80082830
    // 0x80800B2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsbee_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800B2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800B38: jr          $ra
    // 0x80800B3C: nop

    return;
    // 0x80800B3C: nop

;}
RECOMP_FUNC void bsbeefly_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B40: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800B44: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(73, 0XE50) << 16);
    // 0x80800B48: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800B4C: jr          $ra
    // 0x80800B50: lw          $v0, 0xE50($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(73, 0XE50));
    return;
    // 0x80800B50: lw          $v0, 0xE50($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(73, 0XE50));
;}
