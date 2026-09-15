#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80098590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80098594: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80098598: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009859C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800985A0: jal         0x800EE7F8
    // 0x800985A4: lw          $a1, 0xE0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XE0);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800985A4: lw          $a1, 0xE0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XE0);
    after_0:
    // 0x800985A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800985AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800985B0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800985B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800985B8: lw          $t6, 0xE0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE0);
    // 0x800985BC: jr          $ra
    // 0x800985C0: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
    return;
    // 0x800985C0: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
;}
RECOMP_FUNC void func_800985C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800985C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800985C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800985CC: jal         0x8009C128
    // 0x800985D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x800985D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800985D4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800985D8: addiu       $a0, $a0, 0x7EB0
    ctx->r4 = ADD32(ctx->r4, 0X7EB0);
    // 0x800985DC: jal         0x800882A8
    // 0x800985E0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    _gccubesearch_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x800985E0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800985E4: bne         $v0, $zero, L_800985F4
    if (ctx->r2 != 0) {
        // 0x800985E8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800985F4;
    }
    // 0x800985E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800985EC: b           L_80098600
    // 0x800985F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80098600;
    // 0x800985F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800985F4:
    // 0x800985F4: jal         0x80088C00
    // 0x800985F8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    _gspropctrl_entrypoint_11(rdram, ctx);
        goto after_2;
    // 0x800985F8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x800985FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80098600:
    // 0x80098600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80098604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80098608: jr          $ra
    return;
;}
RECOMP_FUNC void func_80098610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098610: lw          $t6, 0xE0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE0);
    // 0x80098614: jr          $ra
    // 0x80098618: lwc1        $f0, 0x30($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X30);
    return;
    // 0x80098618: lwc1        $f0, 0x30($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X30);
;}
RECOMP_FUNC void func_8009861C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009861C: lw          $t6, 0xE0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE0);
    // 0x80098620: jr          $ra
    // 0x80098624: lbu         $v0, 0x2E($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2E);
    return;
    // 0x80098624: lbu         $v0, 0x2E($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2E);
;}
RECOMP_FUNC void func_80098628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098628: lw          $t6, 0xE0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE0);
    // 0x8009862C: jr          $ra
    // 0x80098630: lwc1        $f0, 0x18($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X18);
    return;
    // 0x80098630: lwc1        $f0, 0x18($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X18);
;}
RECOMP_FUNC void func_80098634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098634: lw          $t6, 0xE0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE0);
    // 0x80098638: jr          $ra
    // 0x8009863C: lbu         $v0, 0x2F($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2F);
    return;
    // 0x8009863C: lbu         $v0, 0x2F($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2F);
;}
RECOMP_FUNC void func_80098640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098640: lw          $t6, 0xE0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE0);
    // 0x80098644: jr          $ra
    // 0x80098648: lbu         $v0, 0x2D($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2D);
    return;
    // 0x80098648: lbu         $v0, 0x2D($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2D);
;}
RECOMP_FUNC void func_8009864C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009864C: lw          $t6, 0xE0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE0);
    // 0x80098650: jr          $ra
    // 0x80098654: lwc1        $f0, 0x10($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X10);
    return;
    // 0x80098654: lwc1        $f0, 0x10($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X10);
;}
RECOMP_FUNC void func_80098658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098658: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009865C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80098660: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80098664: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80098668: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8009866C: lw          $a3, 0xE0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XE0);
    // 0x80098670: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80098674: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80098678: lwc1        $f6, 0x28($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X28);
    // 0x8009867C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80098680: nop

    // 0x80098684: bc1f        L_800986D4
    if (!c1cs) {
        // 0x80098688: nop
    
            goto L_800986D4;
    }
    // 0x80098688: nop

    // 0x8009868C: lwc1        $f8, 0x1C($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x80098690: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80098694: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80098698: nop

    // 0x8009869C: bc1f        L_800986D4
    if (!c1cs) {
        // 0x800986A0: nop
    
            goto L_800986D4;
    }
    // 0x800986A0: nop

    // 0x800986A4: lwc1        $f16, 0x20($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X20);
    // 0x800986A8: lwc1        $f18, 0x4($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800986AC: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x800986B0: nop

    // 0x800986B4: bc1f        L_800986D4
    if (!c1cs) {
        // 0x800986B8: nop
    
            goto L_800986D4;
    }
    // 0x800986B8: nop

    // 0x800986BC: lwc1        $f4, 0x24($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X24);
    // 0x800986C0: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800986C4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800986C8: nop

    // 0x800986CC: bc1tl       L_80098720
    if (c1cs) {
        // 0x800986D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80098720;
    }
    goto skip_0;
    // 0x800986D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_800986D4:
    // 0x800986D4: jal         0x800EE7F8
    // 0x800986D8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800986D8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x800986DC: lw          $a0, 0xE0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0);
    // 0x800986E0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x800986E4: jal         0x800EE7F8
    // 0x800986E8: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800986E8: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_1:
    // 0x800986EC: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800986F0: lw          $t6, 0xE0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XE0);
    // 0x800986F4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800986F8: swc1        $f8, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f8.u32l;
    // 0x800986FC: lw          $t8, 0xE0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XE0);
    // 0x80098700: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80098704: sb          $t7, 0x2D($t8)
    MEM_B(0X2D, ctx->r24) = ctx->r15;
    // 0x80098708: lw          $t0, 0xE0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XE0);
    // 0x8009870C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80098710: sb          $t9, 0x2F($t0)
    MEM_B(0X2F, ctx->r8) = ctx->r25;
    // 0x80098714: lw          $t2, 0xE0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XE0);
    // 0x80098718: sb          $t1, 0x2C($t2)
    MEM_B(0X2C, ctx->r10) = ctx->r9;
    // 0x8009871C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80098720:
    // 0x80098720: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80098724: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80098728: jr          $ra
    return;
;}
RECOMP_FUNC void func_80098730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098730: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80098734: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x80098738: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8009873C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80098740: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80098744: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x80098748: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8009874C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80098750: jal         0x80098658
    // 0x80098754: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_80098658(rdram, ctx);
        goto after_0;
    // 0x80098754: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x80098758: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8009875C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80098760: lw          $t0, 0xE0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XE0);
    // 0x80098764: sb          $t8, 0x2E($t0)
    MEM_B(0X2E, ctx->r8) = ctx->r24;
    // 0x80098768: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009876C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80098770: jr          $ra
    return;
;}
RECOMP_FUNC void func_80098778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098778: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009877C: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x80098780: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80098784: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80098788: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009878C: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x80098790: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80098794: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80098798: jal         0x80098658
    // 0x8009879C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_80098658(rdram, ctx);
        goto after_0;
    // 0x8009879C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x800987A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800987A4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800987A8: lw          $t9, 0xE0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XE0);
    // 0x800987AC: sb          $t8, 0x2E($t9)
    MEM_B(0X2E, ctx->r25) = ctx->r24;
    // 0x800987B0: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800987B4: lw          $t0, 0xE0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XE0);
    // 0x800987B8: swc1        $f4, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->f4.u32l;
    // 0x800987BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800987C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800987C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800987CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800987CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800987D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800987D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800987D8: jal         0x800D8FF8
    // 0x800987DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x800987DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800987E0: lw          $t6, 0xE0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XE0);
    // 0x800987E4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800987E8: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x800987EC: jal         0x800F0E00
    // 0x800987F0: sub.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f0.fl;
    func_800F0E00(rdram, ctx);
        goto after_1;
    // 0x800987F0: sub.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f0.fl;
    after_1:
    // 0x800987F4: lw          $t7, 0xE0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XE0);
    // 0x800987F8: swc1        $f0, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f0.u32l;
    // 0x800987FC: lw          $t8, 0xE0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XE0);
    // 0x80098800: lbu         $t9, 0x2C($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X2C);
    // 0x80098804: beql        $t9, $zero, L_80098828
    if (ctx->r25 == 0) {
        // 0x80098808: lw          $t0, 0xE0($s0)
        ctx->r8 = MEM_W(ctx->r16, 0XE0);
            goto L_80098828;
    }
    goto skip_0;
    // 0x80098808: lw          $t0, 0xE0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XE0);
    skip_0:
    // 0x8009880C: jal         0x800C6E38
    // 0x80098810: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_800C6E38(rdram, ctx);
        goto after_2;
    // 0x80098810: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_2:
    // 0x80098814: beq         $v0, $zero, L_80098824
    if (ctx->r2 == 0) {
        // 0x80098818: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80098824;
    }
    // 0x80098818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009881C: jal         0x8009E7C8
    // 0x80098820: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_8009E7C8(rdram, ctx);
        goto after_3;
    // 0x80098820: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_3:
L_80098824:
    // 0x80098824: lw          $t0, 0xE0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XE0);
L_80098828:
    // 0x80098828: sb          $zero, 0x2C($t0)
    MEM_B(0X2C, ctx->r8) = 0;
    // 0x8009882C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80098830: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80098834: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80098838: jr          $ra
    return;
;}
RECOMP_FUNC void func_80098840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80098844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80098848: lw          $t6, 0xE0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE0);
    // 0x8009884C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80098850: sb          $zero, 0x2C($t6)
    MEM_B(0X2C, ctx->r14) = 0;
    // 0x80098854: lw          $a1, 0xE0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XE0);
    // 0x80098858: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8009885C: jal         0x800EE7F8
    // 0x80098860: addiu       $a0, $a1, 0x1C
    ctx->r4 = ADD32(ctx->r5, 0X1C);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80098860: addiu       $a0, $a1, 0x1C
    ctx->r4 = ADD32(ctx->r5, 0X1C);
    after_0:
    // 0x80098864: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80098868: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009886C: lwc1        $f4, 0x4E20($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4E20);
    // 0x80098870: lw          $t7, 0xE0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0XE0);
    // 0x80098874: swc1        $f4, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f4.u32l;
    // 0x80098878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009887C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80098880: jr          $ra
    return;
;}
RECOMP_FUNC void func_80098890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098890: jr          $ra
    // 0x80098894: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    return;
    // 0x80098894: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void func_80098898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098898: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8009889C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800988A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800988A4: jal         0x800EA05C
    // 0x800988A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800EA05C(rdram, ctx);
        goto after_0;
    // 0x800988A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800988AC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800988B0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x800988B4: jal         0x800BED18
    // 0x800988B8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_800BED18(rdram, ctx);
        goto after_1;
    // 0x800988B8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800988BC: lw          $a0, 0xBC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XBC);
    // 0x800988C0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x800988C4: jal         0x800EE84C
    // 0x800988C8: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EE84C(rdram, ctx);
        goto after_2;
    // 0x800988C8: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_2:
    // 0x800988CC: lw          $a0, 0xBC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XBC);
    // 0x800988D0: jal         0x800EE84C
    // 0x800988D4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_800EE84C(rdram, ctx);
        goto after_3;
    // 0x800988D4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x800988D8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800988DC: addiu       $v1, $v0, 0x7EC0
    ctx->r3 = ADD32(ctx->r2, 0X7EC0);
    // 0x800988E0: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    // 0x800988E4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800988E8: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800988EC: beql        $t6, $zero, L_8009891C
    if (ctx->r14 == 0) {
        // 0x800988F0: lh          $t8, 0x2($v1)
        ctx->r24 = MEM_H(ctx->r3, 0X2);
            goto L_8009891C;
    }
    goto skip_0;
    // 0x800988F0: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    skip_0:
    // 0x800988F4: lh          $t7, 0x7EC0($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7EC0);
    // 0x800988F8: beql        $a2, $t7, L_8009891C
    if (ctx->r6 == ctx->r15) {
        // 0x800988FC: lh          $t8, 0x2($v1)
        ctx->r24 = MEM_H(ctx->r3, 0X2);
            goto L_8009891C;
    }
    goto skip_1;
    // 0x800988FC: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    skip_1:
    // 0x80098900: lh          $v0, 0xE($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XE);
L_80098904:
    // 0x80098904: addiu       $v1, $v1, 0xE
    ctx->r3 = ADD32(ctx->r3, 0XE);
    // 0x80098908: beql        $v0, $zero, L_8009891C
    if (ctx->r2 == 0) {
        // 0x8009890C: lh          $t8, 0x2($v1)
        ctx->r24 = MEM_H(ctx->r3, 0X2);
            goto L_8009891C;
    }
    goto skip_2;
    // 0x8009890C: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    skip_2:
    // 0x80098910: bnel        $a2, $v0, L_80098904
    if (ctx->r6 != ctx->r2) {
        // 0x80098914: lh          $v0, 0xE($v1)
        ctx->r2 = MEM_H(ctx->r3, 0XE);
            goto L_80098904;
    }
    goto skip_3;
    // 0x80098914: lh          $v0, 0xE($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XE);
    skip_3:
    // 0x80098918: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
L_8009891C:
    // 0x8009891C: lw          $v0, 0xBC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XBC);
    // 0x80098920: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80098924: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80098928: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009892C: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80098930: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x80098934: lh          $t9, 0x4($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X4);
    // 0x80098938: lw          $v0, 0xBC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XBC);
    // 0x8009893C: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x80098940: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80098944: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80098948: sub.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x8009894C: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x80098950: lh          $t0, 0x6($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X6);
    // 0x80098954: lw          $v0, 0xBC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XBC);
    // 0x80098958: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8009895C: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80098960: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80098964: sub.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x80098968: swc1        $f16, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f16.u32l;
    // 0x8009896C: lh          $t1, 0x8($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X8);
    // 0x80098970: lw          $v0, 0xBC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XBC);
    // 0x80098974: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80098978: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8009897C: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80098980: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80098984: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x80098988: lh          $t2, 0xA($v1)
    ctx->r10 = MEM_H(ctx->r3, 0XA);
    // 0x8009898C: lw          $v0, 0xBC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XBC);
    // 0x80098990: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80098994: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80098998: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009899C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800989A0: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x800989A4: lh          $t3, 0xC($v1)
    ctx->r11 = MEM_H(ctx->r3, 0XC);
    // 0x800989A8: lw          $v0, 0xBC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XBC);
    // 0x800989AC: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x800989B0: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800989B4: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800989B8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800989BC: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    // 0x800989C0: lw          $t4, 0xBC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XBC);
    // 0x800989C4: sb          $zero, 0x18($t4)
    MEM_B(0X18, ctx->r12) = 0;
    // 0x800989C8: lw          $t5, 0xBC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XBC);
    // 0x800989CC: sb          $zero, 0x19($t5)
    MEM_B(0X19, ctx->r13) = 0;
    // 0x800989D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800989D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800989D8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800989DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800989E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800989E4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800989E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800989EC: jal         0x8008DAA8
    // 0x800989F0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_8008DAA8(rdram, ctx);
        goto after_0;
    // 0x800989F0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x800989F4: beq         $v0, $zero, L_80098B3C
    if (ctx->r2 == 0) {
        // 0x800989F8: lw          $t6, 0x38($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X38);
            goto L_80098B3C;
    }
    // 0x800989F8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800989FC: lw          $t7, 0xBC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XBC);
    // 0x80098A00: lbu         $t8, 0x19($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X19);
    // 0x80098A04: bnel        $t8, $zero, L_80098B40
    if (ctx->r24 != 0) {
        // 0x80098A08: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80098B40;
    }
    goto skip_0;
    // 0x80098A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80098A0C: jal         0x800BF6B8
    // 0x80098A10: nop

    func_800BF6B8(rdram, ctx);
        goto after_1;
    // 0x80098A10: nop

    after_1:
    // 0x80098A14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80098A18: beq         $v0, $at, L_80098B3C
    if (ctx->r2 == ctx->r1) {
        // 0x80098A1C: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_80098B3C;
    }
    // 0x80098A1C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80098A20: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80098A24: jal         0x8009C128
    // 0x80098A28: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_8009C128(rdram, ctx);
        goto after_2;
    // 0x80098A28: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_2:
    // 0x80098A2C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80098A30: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80098A34: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80098A38: beql        $v1, $at, L_80098A5C
    if (ctx->r3 == ctx->r1) {
        // 0x80098A3C: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_80098A5C;
    }
    goto skip_1;
    // 0x80098A3C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    skip_1:
    // 0x80098A40: lw          $a1, 0xBC($t9)
    ctx->r5 = MEM_W(ctx->r25, 0XBC);
    // 0x80098A44: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80098A48: jal         0x800EFED0
    // 0x80098A4C: addiu       $a0, $a1, 0xC
    ctx->r4 = ADD32(ctx->r5, 0XC);
    func_800EFED0(rdram, ctx);
        goto after_3;
    // 0x80098A4C: addiu       $a0, $a1, 0xC
    ctx->r4 = ADD32(ctx->r5, 0XC);
    after_3:
    // 0x80098A50: bnel        $v0, $zero, L_80098B40
    if (ctx->r2 != 0) {
        // 0x80098A54: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80098B40;
    }
    goto skip_2;
    // 0x80098A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x80098A58: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_80098A5C:
    // 0x80098A5C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80098A60: lw          $a1, 0xBC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XBC);
    // 0x80098A64: lbu         $t0, 0x18($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X18);
    // 0x80098A68: bne         $t0, $zero, L_80098B34
    if (ctx->r8 != 0) {
        // 0x80098A6C: nop
    
            goto L_80098B34;
    }
    // 0x80098A6C: nop

    // 0x80098A70: jal         0x800D3948
    // 0x80098A74: sb          $t1, 0x18($a1)
    MEM_B(0X18, ctx->r5) = ctx->r9;
    func_800D3948(rdram, ctx);
        goto after_4;
    // 0x80098A74: sb          $t1, 0x18($a1)
    MEM_B(0X18, ctx->r5) = ctx->r9;
    after_4:
    // 0x80098A78: bne         $v0, $zero, L_80098A90
    if (ctx->r2 != 0) {
        // 0x80098A7C: nop
    
            goto L_80098A90;
    }
    // 0x80098A7C: nop

    // 0x80098A80: jal         0x800D395C
    // 0x80098A84: nop

    func_800D395C(rdram, ctx);
        goto after_5;
    // 0x80098A84: nop

    after_5:
    // 0x80098A88: beql        $v0, $zero, L_80098AA4
    if (ctx->r2 == 0) {
        // 0x80098A8C: sw          $zero, 0x24($sp)
        MEM_W(0X24, ctx->r29) = 0;
            goto L_80098AA4;
    }
    goto skip_3;
    // 0x80098A8C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    skip_3:
L_80098A90:
    // 0x80098A90: jal         0x80088190
    // 0x80098A94: nop

    _gcfrontend_entrypoint_12(rdram, ctx);
        goto after_6;
    // 0x80098A94: nop

    after_6:
    // 0x80098A98: b           L_80098B40
    // 0x80098A9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80098B40;
    // 0x80098A9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80098AA0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80098AA4:
    // 0x80098AA4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80098AA8: jal         0x800A3274
    // 0x80098AAC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_800A3274(rdram, ctx);
        goto after_7;
    // 0x80098AAC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_7:
    // 0x80098AB0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80098AB4: beq         $v0, $at, L_80098ACC
    if (ctx->r2 == ctx->r1) {
        // 0x80098AB8: addiu       $at, $zero, 0x11
        ctx->r1 = ADD32(0, 0X11);
            goto L_80098ACC;
    }
    // 0x80098AB8: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x80098ABC: bne         $v0, $at, L_80098AE4
    if (ctx->r2 != ctx->r1) {
        // 0x80098AC0: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_80098AE4;
    }
    // 0x80098AC0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80098AC4: b           L_80098AE4
    // 0x80098AC8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
        goto L_80098AE4;
    // 0x80098AC8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_80098ACC:
    // 0x80098ACC: jal         0x800F8B88
    // 0x80098AD0: nop

    func_800F8B88(rdram, ctx);
        goto after_8;
    // 0x80098AD0: nop

    after_8:
    // 0x80098AD4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80098AD8: bne         $v0, $at, L_80098AE4
    if (ctx->r2 != ctx->r1) {
        // 0x80098ADC: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_80098AE4;
    }
    // 0x80098ADC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80098AE0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
L_80098AE4:
    // 0x80098AE4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80098AE8: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80098AEC: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x80098AF0: beq         $t4, $zero, L_80098B08
    if (ctx->r12 == 0) {
        // 0x80098AF4: lw          $t6, 0x20($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X20);
            goto L_80098B08;
    }
    // 0x80098AF4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80098AF8: jal         0x800F7B9C
    // 0x80098AFC: lw          $a0, 0x184($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X184);
    func_800F7B9C(rdram, ctx);
        goto after_9;
    // 0x80098AFC: lw          $a0, 0x184($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X184);
    after_9:
    // 0x80098B00: b           L_80098B40
    // 0x80098B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80098B40;
    // 0x80098B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80098B08:
    // 0x80098B08: beq         $t6, $zero, L_80098B24
    if (ctx->r14 == 0) {
        // 0x80098B0C: lw          $t7, 0x38($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X38);
            goto L_80098B24;
    }
    // 0x80098B0C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80098B10: lw          $a0, 0x184($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X184);
    // 0x80098B14: jal         0x800F7B9C
    // 0x80098B18: addiu       $a1, $zero, 0x88
    ctx->r5 = ADD32(0, 0X88);
    func_800F7B9C(rdram, ctx);
        goto after_10;
    // 0x80098B18: addiu       $a1, $zero, 0x88
    ctx->r5 = ADD32(0, 0X88);
    after_10:
    // 0x80098B1C: b           L_80098B40
    // 0x80098B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80098B40;
    // 0x80098B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80098B24:
    // 0x80098B24: jal         0x800A05DC
    // 0x80098B28: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_800A05DC(rdram, ctx);
        goto after_11;
    // 0x80098B28: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_11:
    // 0x80098B2C: b           L_80098B40
    // 0x80098B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80098B40;
    // 0x80098B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80098B34:
    // 0x80098B34: jal         0x8009B800
    // 0x80098B38: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8009B800(rdram, ctx);
        goto after_12;
    // 0x80098B38: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_12:
L_80098B3C:
    // 0x80098B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80098B40:
    // 0x80098B40: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80098B44: jr          $ra
    return;
;}
RECOMP_FUNC void func_80098B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098B4C: lw          $t7, 0xBC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XBC);
    // 0x80098B50: sltiu       $t6, $a1, 0x1
    ctx->r14 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80098B54: jr          $ra
    // 0x80098B58: sb          $t6, 0x19($t7)
    MEM_B(0X19, ctx->r15) = ctx->r14;
    return;
    // 0x80098B58: sb          $t6, 0x19($t7)
    MEM_B(0X19, ctx->r15) = ctx->r14;
;}
RECOMP_FUNC void func_80098B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098B5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80098B60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80098B64: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80098B68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80098B6C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80098B70: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80098B74: lw          $a1, 0xBC($t6)
    ctx->r5 = MEM_W(ctx->r14, 0XBC);
    // 0x80098B78: jal         0x800EE7F8
    // 0x80098B7C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80098B7C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_0:
    // 0x80098B80: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80098B84: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80098B88: jal         0x800EE7F8
    // 0x80098B8C: lw          $a1, 0xBC($t7)
    ctx->r5 = MEM_W(ctx->r15, 0XBC);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x80098B8C: lw          $a1, 0xBC($t7)
    ctx->r5 = MEM_W(ctx->r15, 0XBC);
    after_1:
    // 0x80098B90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80098B94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80098B98: jr          $ra
    return;
;}
RECOMP_FUNC void func_80098BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098BA0: jr          $ra
    // 0x80098BA4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    return;
    // 0x80098BA4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
;}
RECOMP_FUNC void func_80098BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    tooie_rt64_player_scope(rdram, ctx, 1);
    // 0x80098BA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80098BAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80098BB0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80098BB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80098BB8: jal         0x80091E80
    // 0x80098BBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091E80(rdram, ctx);
        goto after_0;
    // 0x80098BBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80098BC0: beq         $v0, $zero, L_80098BD0
    if (ctx->r2 == 0) {
        // 0x80098BC4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80098BD0;
    }
    // 0x80098BC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80098BC8: jal         0x80092444
    // 0x80098BCC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_80092444(rdram, ctx);
        goto after_1;
    // 0x80098BCC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_80098BD0:
    tooie_rt64_player_scope(rdram, ctx, 2);
    // 0x80098BD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80098BD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80098BD8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80098BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098BE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80098BE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80098BE8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80098BEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80098BF0: jal         0x800A9420
    // 0x80098BF4: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    func_800A9420(rdram, ctx);
        goto after_0;
    // 0x80098BF4: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    after_0:
    // 0x80098BF8: beq         $v0, $zero, L_80098C34
    if (ctx->r2 == 0) {
        // 0x80098BFC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80098C34;
    }
    // 0x80098BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80098C00: jal         0x8009AD78
    // 0x80098C04: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8009AD78(rdram, ctx);
        goto after_1;
    // 0x80098C04: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x80098C08: beql        $v0, $zero, L_80098C1C
    if (ctx->r2 == 0) {
        // 0x80098C0C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80098C1C;
    }
    goto skip_0;
    // 0x80098C0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80098C10: jal         0x80084AB8
    // 0x80098C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baeggcursor_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80098C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80098C18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80098C1C:
    // 0x80098C1C: jal         0x8009AD78
    // 0x80098C20: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8009AD78(rdram, ctx);
        goto after_3;
    // 0x80098C20: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_3:
    // 0x80098C24: beql        $v0, $zero, L_80098C38
    if (ctx->r2 == 0) {
        // 0x80098C28: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80098C38;
    }
    goto skip_1;
    // 0x80098C28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80098C2C: jal         0x800843B0
    // 0x80098C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsfirstp_entrypoint_37(rdram, ctx);
        goto after_4;
    // 0x80098C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_80098C34:
    // 0x80098C34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80098C38:
    // 0x80098C38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80098C3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80098C40: jr          $ra
    // 0x80098C44: nop

    return;
    // 0x80098C44: nop

;}
RECOMP_FUNC void func_80098C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098C48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80098C4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80098C50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80098C54: lw          $t7, 0xB8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XB8);
    // 0x80098C58: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80098C5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80098C60: jal         0x8009AD90
    // 0x80098C64: sb          $t6, 0x8($t7)
    MEM_B(0X8, ctx->r15) = ctx->r14;
    func_8009AD90(rdram, ctx);
        goto after_0;
    // 0x80098C64: sb          $t6, 0x8($t7)
    MEM_B(0X8, ctx->r15) = ctx->r14;
    after_0:
    // 0x80098C68: jal         0x80084910
    // 0x80098C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badronemem_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x80098C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80098C70: jal         0x80085178
    // 0x80098C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bastatemem_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x80098C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80098C78: jal         0x800A3820
    // 0x80098C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3820(rdram, ctx);
        goto after_3;
    // 0x80098C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80098C80: lw          $t8, 0xB8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XB8);
    // 0x80098C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80098C88: jal         0x80091B10
    // 0x80098C8C: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    func_80091B10(rdram, ctx);
        goto after_4;
    // 0x80098C8C: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    after_4:
    // 0x80098C90: jal         0x8009FE78
    // 0x80098C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE78(rdram, ctx);
        goto after_5;
    // 0x80098C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80098C98: jal         0x8009C038
    // 0x80098C9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C038(rdram, ctx);
        goto after_6;
    // 0x80098C9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80098CA0: jal         0x800848E8
    // 0x80098CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_32(rdram, ctx);
        goto after_7;
    // 0x80098CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80098CA8: jal         0x80084A20
    // 0x80098CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_11(rdram, ctx);
        goto after_8;
    // 0x80098CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80098CB0: jal         0x800955CC
    // 0x80098CB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800955CC(rdram, ctx);
        goto after_9;
    // 0x80098CB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80098CB8: jal         0x800956E8
    // 0x80098CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800956E8(rdram, ctx);
        goto after_10;
    // 0x80098CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80098CC0: jal         0x800A0FF0
    // 0x80098CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A0FF0(rdram, ctx);
        goto after_11;
    // 0x80098CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80098CC8: jal         0x8009F114
    // 0x80098CCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F114(rdram, ctx);
        goto after_12;
    // 0x80098CCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80098CD0: jal         0x8009811C
    // 0x80098CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009811C(rdram, ctx);
        goto after_13;
    // 0x80098CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80098CD8: jal         0x800854C0
    // 0x80098CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bainvisible_entrypoint_3(rdram, ctx);
        goto after_14;
    // 0x80098CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80098CE0: jal         0x80098408
    // 0x80098CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80098408(rdram, ctx);
        goto after_15;
    // 0x80098CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80098CE8: jal         0x8009CBFC
    // 0x80098CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009CBFC(rdram, ctx);
        goto after_16;
    // 0x80098CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80098CF0: jal         0x8009E7AC
    // 0x80098CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E7AC(rdram, ctx);
        goto after_17;
    // 0x80098CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80098CF8: jal         0x800A16F4
    // 0x80098CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A16F4(rdram, ctx);
        goto after_18;
    // 0x80098CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80098D00: jal         0x80091E20
    // 0x80098D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80091E20(rdram, ctx);
        goto after_19;
    // 0x80098D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80098D08: jal         0x80094644
    // 0x80098D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094644(rdram, ctx);
        goto after_20;
    // 0x80098D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80098D10: jal         0x80084AD8
    // 0x80098D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baeggcursor_entrypoint_5(rdram, ctx);
        goto after_21;
    // 0x80098D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80098D18: jal         0x80084CB8
    // 0x80098D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_8(rdram, ctx);
        goto after_22;
    // 0x80098D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80098D20: jal         0x80084778
    // 0x80098D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bapackctrl_entrypoint_3(rdram, ctx);
        goto after_23;
    // 0x80098D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80098D28: jal         0x80084480
    // 0x80098D2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bababykaz_entrypoint_2(rdram, ctx);
        goto after_24;
    // 0x80098D2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x80098D30: jal         0x800A4168
    // 0x80098D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4168(rdram, ctx);
        goto after_25;
    // 0x80098D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x80098D38: jal         0x80084628
    // 0x80098D3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bacough_entrypoint_3(rdram, ctx);
        goto after_26;
    // 0x80098D3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x80098D40: jal         0x80091EC8
    // 0x80098D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80091EC8(rdram, ctx);
        goto after_27;
    // 0x80098D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x80098D48: jal         0x80085500
    // 0x80098D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badeathmatch_entrypoint_1(rdram, ctx);
        goto after_28;
    // 0x80098D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x80098D50: jal         0x80084948
    // 0x80098D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baduo_entrypoint_6(rdram, ctx);
        goto after_29;
    // 0x80098D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x80098D58: jal         0x80084458
    // 0x80098D5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baattach_entrypoint_4(rdram, ctx);
        goto after_30;
    // 0x80098D5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x80098D60: jal         0x80098898
    // 0x80098D64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80098898(rdram, ctx);
        goto after_31;
    // 0x80098D64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x80098D68: jal         0x8009AC6C
    // 0x80098D6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009AC6C(rdram, ctx);
        goto after_32;
    // 0x80098D6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x80098D70: jal         0x8009B4FC
    // 0x80098D74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B4FC(rdram, ctx);
        goto after_33;
    // 0x80098D74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x80098D78: jal         0x8009BD50
    // 0x80098D7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BD50(rdram, ctx);
        goto after_34;
    // 0x80098D7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x80098D80: jal         0x8009BF04
    // 0x80098D84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BF04(rdram, ctx);
        goto after_35;
    // 0x80098D84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x80098D88: jal         0x80098538
    // 0x80098D8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80098538(rdram, ctx);
        goto after_36;
    // 0x80098D8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x80098D90: jal         0x8009CC90
    // 0x80098D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009CC90(rdram, ctx);
        goto after_37;
    // 0x80098D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_37:
    // 0x80098D98: jal         0x8009C474
    // 0x80098D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C474(rdram, ctx);
        goto after_38;
    // 0x80098D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_38:
    // 0x80098DA0: jal         0x8009CF98
    // 0x80098DA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009CF98(rdram, ctx);
        goto after_39;
    // 0x80098DA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_39:
    // 0x80098DA8: jal         0x80094F38
    // 0x80098DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094F38(rdram, ctx);
        goto after_40;
    // 0x80098DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_40:
    // 0x80098DB0: jal         0x800A0C44
    // 0x80098DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A0C44(rdram, ctx);
        goto after_41;
    // 0x80098DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_41:
    // 0x80098DB8: jal         0x80095068
    // 0x80098DBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095068(rdram, ctx);
        goto after_42;
    // 0x80098DBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_42:
    // 0x80098DC0: jal         0x80090938
    // 0x80098DC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80090938(rdram, ctx);
        goto after_43;
    // 0x80098DC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_43:
    // 0x80098DC8: jal         0x8009105C
    // 0x80098DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009105C(rdram, ctx);
        goto after_44;
    // 0x80098DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_44:
    // 0x80098DD0: jal         0x80091650
    // 0x80098DD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80091650(rdram, ctx);
        goto after_45;
    // 0x80098DD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_45:
    // 0x80098DD8: jal         0x80084D20
    // 0x80098DDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bahold_entrypoint_1(rdram, ctx);
        goto after_46;
    // 0x80098DDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_46:
    // 0x80098DE0: jal         0x80095AD0
    // 0x80098DE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095AD0(rdram, ctx);
        goto after_47;
    // 0x80098DE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_47:
    // 0x80098DE8: jal         0x80084F18
    // 0x80098DEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamum_entrypoint_2(rdram, ctx);
        goto after_48;
    // 0x80098DEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_48:
    // 0x80098DF0: jal         0x8008C764
    // 0x80098DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008C764(rdram, ctx);
        goto after_49;
    // 0x80098DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_49:
    // 0x80098DF8: jal         0x800A21C8
    // 0x80098DFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A21C8(rdram, ctx);
        goto after_50;
    // 0x80098DFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_50:
    // 0x80098E00: jal         0x80092898
    // 0x80098E04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092898(rdram, ctx);
        goto after_51;
    // 0x80098E04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_51:
    // 0x80098E08: jal         0x8008E618
    // 0x80098E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E618(rdram, ctx);
        goto after_52;
    // 0x80098E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_52:
    // 0x80098E10: jal         0x80084FC0
    // 0x80098E14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basetup_entrypoint_4(rdram, ctx);
        goto after_53;
    // 0x80098E14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_53:
    // 0x80098E18: jal         0x8009D4D8
    // 0x80098E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D4D8(rdram, ctx);
        goto after_54;
    // 0x80098E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_54:
    // 0x80098E20: jal         0x800A1F78
    // 0x80098E24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1F78(rdram, ctx);
        goto after_55;
    // 0x80098E24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_55:
    // 0x80098E28: jal         0x80084FF8
    // 0x80098E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_4(rdram, ctx);
        goto after_56;
    // 0x80098E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_56:
    // 0x80098E30: jal         0x8009E390
    // 0x80098E34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E390(rdram, ctx);
        goto after_57;
    // 0x80098E34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_57:
    // 0x80098E38: jal         0x800850C0
    // 0x80098E3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basquash_entrypoint_2(rdram, ctx);
        goto after_58;
    // 0x80098E3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_58:
    // 0x80098E40: jal         0x800A2D94
    // 0x80098E44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2D94(rdram, ctx);
        goto after_59;
    // 0x80098E44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_59:
    // 0x80098E48: jal         0x80085350
    // 0x80098E4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _batranslate_entrypoint_2(rdram, ctx);
        goto after_60;
    // 0x80098E4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_60:
    // 0x80098E50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80098E54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80098E58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80098E5C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80098E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098E64: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80098E68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80098E6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80098E70: jal         0x800A3274
    // 0x80098E74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800A3274(rdram, ctx);
        goto after_0;
    // 0x80098E74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80098E78: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80098E7C: bne         $v0, $at, L_80098EA4
    if (ctx->r2 != ctx->r1) {
        // 0x80098E80: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80098EA4;
    }
    // 0x80098E80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80098E84: jal         0x80095738
    // 0x80098E88: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80095738(rdram, ctx);
        goto after_1;
    // 0x80098E88: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
    // 0x80098E8C: beq         $v0, $zero, L_80098EA4
    if (ctx->r2 == 0) {
        // 0x80098E90: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80098EA4;
    }
    // 0x80098E90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80098E94: jal         0x800A3410
    // 0x80098E98: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_800A3410(rdram, ctx);
        goto after_2;
    // 0x80098E98: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_2:
    // 0x80098E9C: jal         0x800F8EBC
    // 0x80098EA0: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F8EBC(rdram, ctx);
        goto after_3;
    // 0x80098EA0: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_3:
L_80098EA4:
    // 0x80098EA4: jal         0x8009E6F8
    // 0x80098EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E6F8(rdram, ctx);
        goto after_4;
    // 0x80098EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80098EAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80098EB0: jal         0x8009CBDC
    // 0x80098EB4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009CBDC(rdram, ctx);
        goto after_5;
    // 0x80098EB4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_5:
    // 0x80098EB8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80098EBC: jal         0x8008DAA8
    // 0x80098EC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DAA8(rdram, ctx);
        goto after_6;
    // 0x80098EC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80098EC4: beql        $v0, $zero, L_80099024
    if (ctx->r2 == 0) {
        // 0x80098EC8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80099024;
    }
    goto skip_0;
    // 0x80098EC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80098ECC: jal         0x8009E880
    // 0x80098ED0: nop

    func_8009E880(rdram, ctx);
        goto after_7;
    // 0x80098ED0: nop

    after_7:
    // 0x80098ED4: jal         0x800A81C4
    // 0x80098ED8: nop

    func_800A81C4(rdram, ctx);
        goto after_8;
    // 0x80098ED8: nop

    after_8:
    // 0x80098EDC: bnel        $v0, $zero, L_80098EF4
    if (ctx->r2 != 0) {
        // 0x80098EE0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80098EF4;
    }
    goto skip_1;
    // 0x80098EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80098EE4: jal         0x800EA068
    // 0x80098EE8: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    func_800EA068(rdram, ctx);
        goto after_9;
    // 0x80098EE8: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    after_9:
    // 0x80098EEC: beq         $v0, $zero, L_80098EFC
    if (ctx->r2 == 0) {
        // 0x80098EF0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80098EFC;
    }
    // 0x80098EF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80098EF4:
    // 0x80098EF4: jal         0x80085008
    // 0x80098EF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bashoes_entrypoint_6(rdram, ctx);
        goto after_10;
    // 0x80098EF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
L_80098EFC:
    // 0x80098EFC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80098F00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80098F04: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x80098F08: jal         0x8008E39C
    // 0x80098F0C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    func_8008E39C(rdram, ctx);
        goto after_11;
    // 0x80098F0C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x80098F10: beq         $v0, $zero, L_80098F30
    if (ctx->r2 == 0) {
        // 0x80098F14: lw          $v1, 0x28($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X28);
            goto L_80098F30;
    }
    // 0x80098F14: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80098F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80098F1C: jal         0x80091538
    // 0x80098F20: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80091538(rdram, ctx);
        goto after_12;
    // 0x80098F20: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_12:
    // 0x80098F24: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80098F28: b           L_80098F4C
    // 0x80098F2C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80098F4C;
    // 0x80098F2C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80098F30:
    // 0x80098F30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80098F34: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80098F38: jal         0x8009E674
    // 0x80098F3C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_8009E674(rdram, ctx);
        goto after_13;
    // 0x80098F3C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_13:
    // 0x80098F40: beq         $v0, $zero, L_80098F4C
    if (ctx->r2 == 0) {
        // 0x80098F44: lw          $v1, 0x28($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X28);
            goto L_80098F4C;
    }
    // 0x80098F44: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80098F48: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80098F4C:
    // 0x80098F4C: beq         $v1, $zero, L_80098F5C
    if (ctx->r3 == 0) {
        // 0x80098F50: nop
    
            goto L_80098F5C;
    }
    // 0x80098F50: nop

    // 0x80098F54: jal         0x8009EAD0
    // 0x80098F58: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8009EAD0(rdram, ctx);
        goto after_14;
    // 0x80098F58: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_14:
L_80098F5C:
    // 0x80098F5C: jal         0x8009EB0C
    // 0x80098F60: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    func_8009EB0C(rdram, ctx);
        goto after_15;
    // 0x80098F60: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    after_15:
    // 0x80098F64: jal         0x80084FE0
    // 0x80098F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_1(rdram, ctx);
        goto after_16;
    // 0x80098F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80098F6C: jal         0x8009EAF4
    // 0x80098F70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8009EAF4(rdram, ctx);
        goto after_17;
    // 0x80098F70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_17:
    // 0x80098F74: jal         0x800A3274
    // 0x80098F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3274(rdram, ctx);
        goto after_18;
    // 0x80098F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80098F7C: jal         0x8009E9D8
    // 0x80098F80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8009E9D8(rdram, ctx);
        goto after_19;
    // 0x80098F80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_19:
    // 0x80098F84: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80098F88: jal         0x8009E9FC
    // 0x80098F8C: nop

    func_8009E9FC(rdram, ctx);
        goto after_20;
    // 0x80098F8C: nop

    after_20:
    // 0x80098F90: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80098F94: addiu       $t7, $t6, -0x8
    ctx->r15 = ADD32(ctx->r14, -0X8);
    // 0x80098F98: sltiu       $at, $t7, 0xD
    ctx->r1 = ctx->r15 < 0XD ? 1 : 0;
    // 0x80098F9C: beq         $at, $zero, L_80099020
    if (ctx->r1 == 0) {
        // 0x80098FA0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80099020;
    }
    // 0x80098FA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80098FA4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80098FA8: addu        $at, $at, $t7
    gpr jr_addend_80098FB0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80098FAC: lw          $t7, 0x4E30($at)
    ctx->r15 = ADD32(ctx->r1, 0X4E30);
    // 0x80098FB0: jr          $t7
    // 0x80098FB4: nop

    switch (jr_addend_80098FB0 >> 2) {
        case 0: goto L_80098FB8; break;
        case 1: goto L_80098FD4; break;
        case 2: goto L_80099020; break;
        case 3: goto L_80099020; break;
        case 4: goto L_80099020; break;
        case 5: goto L_80099020; break;
        case 6: goto L_80099020; break;
        case 7: goto L_80099020; break;
        case 8: goto L_80099020; break;
        case 9: goto L_80099020; break;
        case 10: goto L_80098FF8; break;
        case 11: goto L_80099008; break;
        case 12: goto L_80099018; break;
        default: switch_error(__func__, 0x80098FB0, 0x80124E30);
    }
    // 0x80098FB4: nop

L_80098FB8:
    // 0x80098FB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80098FBC: jal         0x80091538
    // 0x80098FC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80091538(rdram, ctx);
        goto after_21;
    // 0x80098FC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_21:
    // 0x80098FC4: jal         0x8009E9FC
    // 0x80098FC8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_8009E9FC(rdram, ctx);
        goto after_22;
    // 0x80098FC8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_22:
    // 0x80098FCC: b           L_80099024
    // 0x80098FD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80099024;
    // 0x80098FD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80098FD4:
    // 0x80098FD4: jal         0x800A3274
    // 0x80098FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3274(rdram, ctx);
        goto after_23;
    // 0x80098FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80098FDC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80098FE0: bnel        $v0, $at, L_80099024
    if (ctx->r2 != ctx->r1) {
        // 0x80098FE4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80099024;
    }
    goto skip_2;
    // 0x80098FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80098FE8: jal         0x8009EAD0
    // 0x80098FEC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8009EAD0(rdram, ctx);
        goto after_24;
    // 0x80098FEC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_24:
    // 0x80098FF0: b           L_80099024
    // 0x80098FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80099024;
    // 0x80098FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80098FF8:
    // 0x80098FF8: jal         0x8009EAD0
    // 0x80098FFC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8009EAD0(rdram, ctx);
        goto after_25;
    // 0x80098FFC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_25:
    // 0x80099000: b           L_80099024
    // 0x80099004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80099024;
    // 0x80099004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80099008:
    // 0x80099008: jal         0x8009EAD0
    // 0x8009900C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8009EAD0(rdram, ctx);
        goto after_26;
    // 0x8009900C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_26:
    // 0x80099010: b           L_80099024
    // 0x80099014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80099024;
    // 0x80099014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80099018:
    // 0x80099018: jal         0x8009EAD0
    // 0x8009901C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8009EAD0(rdram, ctx);
        goto after_27;
    // 0x8009901C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_27:
L_80099020:
    // 0x80099020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80099024:
    // 0x80099024: jal         0x8009E71C
    // 0x80099028: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8009E71C(rdram, ctx);
        goto after_28;
    // 0x80099028: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_28:
    // 0x8009902C: beq         $v0, $zero, L_8009903C
    if (ctx->r2 == 0) {
        // 0x80099030: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_8009903C;
    }
    // 0x80099030: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80099034: b           L_80099040
    // 0x80099038: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80099040;
    // 0x80099038: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8009903C:
    // 0x8009903C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80099040:
    // 0x80099040: jal         0x800EA068
    // 0x80099044: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800EA068(rdram, ctx);
        goto after_29;
    // 0x80099044: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_29:
    // 0x80099048: beq         $v0, $zero, L_80099058
    if (ctx->r2 == 0) {
        // 0x8009904C: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_80099058;
    }
    // 0x8009904C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80099050: b           L_8009905C
    // 0x80099054: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8009905C;
    // 0x80099054: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80099058:
    // 0x80099058: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8009905C:
    // 0x8009905C: jal         0x8009EB18
    // 0x80099060: and         $a0, $a1, $v0
    ctx->r4 = ctx->r5 & ctx->r2;
    func_8009EB18(rdram, ctx);
        goto after_30;
    // 0x80099060: and         $a0, $a1, $v0
    ctx->r4 = ctx->r5 & ctx->r2;
    after_30:
    // 0x80099064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099068: jal         0x8009E5C8
    // 0x8009906C: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    func_8009E5C8(rdram, ctx);
        goto after_31;
    // 0x8009906C: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_31:
    // 0x80099070: jal         0x80084450
    // 0x80099074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baattach_entrypoint_3(rdram, ctx);
        goto after_32;
    // 0x80099074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x80099078: jal         0x8008E6BC
    // 0x8009907C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E6BC(rdram, ctx);
        goto after_33;
    // 0x8009907C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x80099080: jal         0x80091054
    // 0x80099084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80091054(rdram, ctx);
        goto after_34;
    // 0x80099084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x80099088: jal         0x80084478
    // 0x8009908C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bababykaz_entrypoint_1(rdram, ctx);
        goto after_35;
    // 0x8009908C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x80099090: jal         0x80091648
    // 0x80099094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80091648(rdram, ctx);
        goto after_36;
    // 0x80099094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x80099098: jal         0x80084AD0
    // 0x8009909C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baeggcursor_entrypoint_4(rdram, ctx);
        goto after_37;
    // 0x8009909C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_37:
    // 0x800990A0: jal         0x80094538
    // 0x800990A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094538(rdram, ctx);
        goto after_38;
    // 0x800990A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_38:
    // 0x800990A8: jal         0x80092A1C
    // 0x800990AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092A1C(rdram, ctx);
        goto after_39;
    // 0x800990AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_39:
    // 0x800990B0: jal         0x800A22A8
    // 0x800990B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A22A8(rdram, ctx);
        goto after_40;
    // 0x800990B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_40:
    // 0x800990B8: jal         0x8008C864
    // 0x800990BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008C864(rdram, ctx);
        goto after_41;
    // 0x800990BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_41:
    // 0x800990C0: jal         0x80095C10
    // 0x800990C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095C10(rdram, ctx);
        goto after_42;
    // 0x800990C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_42:
    // 0x800990C8: jal         0x80084D28
    // 0x800990CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bahold_entrypoint_2(rdram, ctx);
        goto after_43;
    // 0x800990CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_43:
    // 0x800990D0: jal         0x80084F10
    // 0x800990D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamum_entrypoint_1(rdram, ctx);
        goto after_44;
    // 0x800990D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_44:
    // 0x800990D8: jal         0x80084FB8
    // 0x800990DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basetup_entrypoint_3(rdram, ctx);
        goto after_45;
    // 0x800990DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_45:
    // 0x800990E0: jal         0x8009D5E0
    // 0x800990E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D5E0(rdram, ctx);
        goto after_46;
    // 0x800990E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_46:
    // 0x800990E8: jal         0x800A2058
    // 0x800990EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2058(rdram, ctx);
        goto after_47;
    // 0x800990EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_47:
    // 0x800990F0: jal         0x80084FF0
    // 0x800990F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_3(rdram, ctx);
        goto after_48;
    // 0x800990F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_48:
    // 0x800990F8: jal         0x800850B8
    // 0x800990FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basquash_entrypoint_1(rdram, ctx);
        goto after_49;
    // 0x800990FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_49:
    // 0x80099100: jal         0x800A2D70
    // 0x80099104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2D70(rdram, ctx);
        goto after_50;
    // 0x80099104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_50:
    // 0x80099108: jal         0x80085348
    // 0x8009910C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _batranslate_entrypoint_1(rdram, ctx);
        goto after_51;
    // 0x8009910C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_51:
    // 0x80099110: jal         0x80085170
    // 0x80099114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bastatemem_entrypoint_2(rdram, ctx);
        goto after_52;
    // 0x80099114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_52:
    // 0x80099118: jal         0x80084908
    // 0x8009911C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badronemem_entrypoint_2(rdram, ctx);
        goto after_53;
    // 0x8009911C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_53:
    // 0x80099120: jal         0x80084770
    // 0x80099124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bapackctrl_entrypoint_2(rdram, ctx);
        goto after_54;
    // 0x80099124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_54:
    // 0x80099128: jal         0x80084940
    // 0x8009912C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baduo_entrypoint_5(rdram, ctx);
        goto after_55;
    // 0x8009912C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_55:
    // 0x80099130: jal         0x8009E388
    // 0x80099134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E388(rdram, ctx);
        goto after_56;
    // 0x80099134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_56:
    // 0x80099138: jal         0x80084CB0
    // 0x8009913C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_7(rdram, ctx);
        goto after_57;
    // 0x8009913C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_57:
    // 0x80099140: jal         0x80091E18
    // 0x80099144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80091E18(rdram, ctx);
        goto after_58;
    // 0x80099144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_58:
    // 0x80099148: jal         0x80091AB8
    // 0x8009914C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80091AB8(rdram, ctx);
        goto after_59;
    // 0x8009914C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_59:
    // 0x80099150: jal         0x80084620
    // 0x80099154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bacough_entrypoint_2(rdram, ctx);
        goto after_60;
    // 0x80099154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_60:
    // 0x80099158: jal         0x80085508
    // 0x8009915C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badeathmatch_entrypoint_2(rdram, ctx);
        goto after_61;
    // 0x8009915C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_61:
    // 0x80099160: jal         0x80091EA8
    // 0x80099164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80091EA8(rdram, ctx);
        goto after_62;
    // 0x80099164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_62:
    // 0x80099168: jal         0x800854C8
    // 0x8009916C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bainvisible_entrypoint_4(rdram, ctx);
        goto after_63;
    // 0x8009916C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_63:
    // 0x80099170: jal         0x8009AD88
    // 0x80099174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009AD88(rdram, ctx);
        goto after_64;
    // 0x80099174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_64:
    // 0x80099178: jal         0x800A4160
    // 0x8009917C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4160(rdram, ctx);
        goto after_65;
    // 0x8009917C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_65:
    // 0x80099180: lw          $t8, 0xB8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XB8);
    // 0x80099184: sb          $zero, 0x8($t8)
    MEM_B(0X8, ctx->r24) = 0;
    // 0x80099188: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009918C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80099190: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80099194: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009919C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009919C: lw          $t6, 0xB8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB8);
    // 0x800991A0: sw          $a1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r5;
    // 0x800991A4: lw          $t7, 0xB8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XB8);
    // 0x800991A8: jr          $ra
    // 0x800991AC: sw          $a2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r6;
    return;
    // 0x800991AC: sw          $a2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r6;
;}
RECOMP_FUNC void func_800991B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800991B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800991B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800991B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800991BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800991C0: jal         0x800EA068
    // 0x800991C4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800EA068(rdram, ctx);
        goto after_0;
    // 0x800991C4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x800991C8: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800991CC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x800991D0: jal         0x800DA298
    // 0x800991D4: addiu       $a0, $zero, 0x6B5
    ctx->r4 = ADD32(0, 0X6B5);
    func_800DA298(rdram, ctx);
        goto after_1;
    // 0x800991D4: addiu       $a0, $zero, 0x6B5
    ctx->r4 = ADD32(0, 0X6B5);
    after_1:
    // 0x800991D8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800991DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800991E0: jal         0x80091E80
    // 0x800991E4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_80091E80(rdram, ctx);
        goto after_2;
    // 0x800991E4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_2:
    // 0x800991E8: beql        $v0, $zero, L_80099534
    if (ctx->r2 == 0) {
        // 0x800991EC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80099534;
    }
    goto skip_0;
    // 0x800991EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800991F0: jal         0x80092AB0
    // 0x800991F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092AB0(rdram, ctx);
        goto after_3;
    // 0x800991F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800991F8: jal         0x80099970
    // 0x800991FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099970(rdram, ctx);
        goto after_4;
    // 0x800991FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80099200: jal         0x8009CF04
    // 0x80099204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009CF04(rdram, ctx);
        goto after_5;
    // 0x80099204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80099208: jal         0x800917D4
    // 0x8009920C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800917D4(rdram, ctx);
        goto after_6;
    // 0x8009920C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80099210: jal         0x800A0DDC
    // 0x80099214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A0DDC(rdram, ctx);
        goto after_7;
    // 0x80099214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80099218: jal         0x80091D14
    // 0x8009921C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80091D14(rdram, ctx);
        goto after_8;
    // 0x8009921C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80099220: jal         0x8009EFF8
    // 0x80099224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EFF8(rdram, ctx);
        goto after_9;
    // 0x80099224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80099228: jal         0x8009819C
    // 0x8009922C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009819C(rdram, ctx);
        goto after_10;
    // 0x8009922C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80099230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099234: jal         0x8009AD78
    // 0x80099238: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009AD78(rdram, ctx);
        goto after_11;
    // 0x80099238: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
    // 0x8009923C: beq         $v0, $zero, L_8009924C
    if (ctx->r2 == 0) {
        // 0x80099240: nop
    
            goto L_8009924C;
    }
    // 0x80099240: nop

    // 0x80099244: jal         0x80084980
    // 0x80099248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baduo_entrypoint_13(rdram, ctx);
        goto after_12;
    // 0x80099248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
L_8009924C:
    // 0x8009924C: jal         0x8009E83C
    // 0x80099250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E83C(rdram, ctx);
        goto after_13;
    // 0x80099250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80099254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099258: jal         0x80091E80
    // 0x8009925C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80091E80(rdram, ctx);
        goto after_14;
    // 0x8009925C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_14:
    // 0x80099260: beql        $v0, $zero, L_80099284
    if (ctx->r2 == 0) {
        // 0x80099264: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80099284;
    }
    goto skip_1;
    // 0x80099264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80099268: jal         0x8008E454
    // 0x8009926C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E454(rdram, ctx);
        goto after_15;
    // 0x8009926C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80099270: beql        $v0, $zero, L_80099284
    if (ctx->r2 == 0) {
        // 0x80099274: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80099284;
    }
    goto skip_2;
    // 0x80099274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80099278: jal         0x8009B590
    // 0x8009927C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B590(rdram, ctx);
        goto after_16;
    // 0x8009927C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80099280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80099284:
    // 0x80099284: jal         0x8009AD78
    // 0x80099288: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8009AD78(rdram, ctx);
        goto after_17;
    // 0x80099288: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_17:
    // 0x8009928C: beq         $v0, $zero, L_8009929C
    if (ctx->r2 == 0) {
        // 0x80099290: nop
    
            goto L_8009929C;
    }
    // 0x80099290: nop

    // 0x80099294: jal         0x80085360
    // 0x80099298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _batranslate_entrypoint_4(rdram, ctx);
        goto after_18;
    // 0x80099298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
L_8009929C:
    // 0x8009929C: jal         0x8009C25C
    // 0x800992A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C25C(rdram, ctx);
        goto after_19;
    // 0x800992A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x800992A4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800992A8: beq         $t7, $zero, L_800992B8
    if (ctx->r15 == 0) {
        // 0x800992AC: nop
    
            goto L_800992B8;
    }
    // 0x800992AC: nop

    // 0x800992B0: jal         0x8009561C
    // 0x800992B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009561C(rdram, ctx);
        goto after_20;
    // 0x800992B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
L_800992B8:
    // 0x800992B8: jal         0x80095C94
    // 0x800992BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095C94(rdram, ctx);
        goto after_21;
    // 0x800992BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x800992C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800992C4: jal         0x80091E80
    // 0x800992C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80091E80(rdram, ctx);
        goto after_22;
    // 0x800992C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_22:
    // 0x800992CC: beql        $v0, $zero, L_800992F0
    if (ctx->r2 == 0) {
        // 0x800992D0: lw          $t8, 0x20($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X20);
            goto L_800992F0;
    }
    goto skip_3;
    // 0x800992D0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    skip_3:
    // 0x800992D4: jal         0x8009BF34
    // 0x800992D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BF34(rdram, ctx);
        goto after_23;
    // 0x800992D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x800992DC: jal         0x8009C4A4
    // 0x800992E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C4A4(rdram, ctx);
        goto after_24;
    // 0x800992E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x800992E4: jal         0x8009D088
    // 0x800992E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D088(rdram, ctx);
        goto after_25;
    // 0x800992E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x800992EC: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
L_800992F0:
    // 0x800992F0: beql        $t8, $zero, L_80099304
    if (ctx->r24 == 0) {
        // 0x800992F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80099304;
    }
    goto skip_4;
    // 0x800992F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_4:
    // 0x800992F8: jal         0x80091110
    // 0x800992FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80091110(rdram, ctx);
        goto after_26;
    // 0x800992FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x80099300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80099304:
    // 0x80099304: jal         0x80091E80
    // 0x80099308: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80091E80(rdram, ctx);
        goto after_27;
    // 0x80099308: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_27:
    // 0x8009930C: beq         $v0, $zero, L_8009931C
    if (ctx->r2 == 0) {
        // 0x80099310: nop
    
            goto L_8009931C;
    }
    // 0x80099310: nop

    // 0x80099314: jal         0x8008C894
    // 0x80099318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008C894(rdram, ctx);
        goto after_28;
    // 0x80099318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
L_8009931C:
    // 0x8009931C: jal         0x800A2060
    // 0x80099320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2060(rdram, ctx);
        goto after_29;
    // 0x80099320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x80099324: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80099328: beql        $t9, $zero, L_8009933C
    if (ctx->r25 == 0) {
        // 0x8009932C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009933C;
    }
    goto skip_5;
    // 0x8009932C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_5:
    // 0x80099330: jal         0x800987CC
    // 0x80099334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800987CC(rdram, ctx);
        goto after_30;
    // 0x80099334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x80099338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8009933C:
    // 0x8009933C: jal         0x8009AD78
    // 0x80099340: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8009AD78(rdram, ctx);
        goto after_31;
    // 0x80099340: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_31:
    // 0x80099344: beql        $v0, $zero, L_80099358
    if (ctx->r2 == 0) {
        // 0x80099348: lw          $t0, 0x24($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X24);
            goto L_80099358;
    }
    goto skip_6;
    // 0x80099348: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    skip_6:
    // 0x8009934C: jal         0x80090A4C
    // 0x80099350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80090A4C(rdram, ctx);
        goto after_32;
    // 0x80099350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x80099354: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
L_80099358:
    // 0x80099358: beql        $t0, $zero, L_8009936C
    if (ctx->r8 == 0) {
        // 0x8009935C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009936C;
    }
    goto skip_7;
    // 0x8009935C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_7:
    // 0x80099360: jal         0x800951F4
    // 0x80099364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951F4(rdram, ctx);
        goto after_33;
    // 0x80099364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x80099368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8009936C:
    // 0x8009936C: jal         0x8009AD78
    // 0x80099370: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009AD78(rdram, ctx);
        goto after_34;
    // 0x80099370: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_34:
    // 0x80099374: beq         $v0, $zero, L_80099384
    if (ctx->r2 == 0) {
        // 0x80099378: nop
    
            goto L_80099384;
    }
    // 0x80099378: nop

    // 0x8009937C: jal         0x80084A30
    // 0x80099380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_13(rdram, ctx);
        goto after_35;
    // 0x80099380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
L_80099384:
    // 0x80099384: jal         0x8009C08C
    // 0x80099388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C08C(rdram, ctx);
        goto after_36;
    // 0x80099388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x8009938C: jal         0x8008E6F0
    // 0x80099390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E6F0(rdram, ctx);
        goto after_37;
    // 0x80099390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_37:
    // 0x80099394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099398: jal         0x8009AD78
    // 0x8009939C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_8009AD78(rdram, ctx);
        goto after_38;
    // 0x8009939C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_38:
    // 0x800993A0: beq         $v0, $zero, L_800993B0
    if (ctx->r2 == 0) {
        // 0x800993A4: nop
    
            goto L_800993B0;
    }
    // 0x800993A4: nop

    // 0x800993A8: jal         0x80084D30
    // 0x800993AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bahold_entrypoint_3(rdram, ctx);
        goto after_39;
    // 0x800993AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_39:
L_800993B0:
    // 0x800993B0: jal         0x800A10A0
    // 0x800993B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A10A0(rdram, ctx);
        goto after_40;
    // 0x800993B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_40:
    // 0x800993B8: jal         0x8009BDE4
    // 0x800993BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BDE4(rdram, ctx);
        goto after_41;
    // 0x800993BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_41:
    // 0x800993C0: jal         0x800A3A80
    // 0x800993C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3A80(rdram, ctx);
        goto after_42;
    // 0x800993C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_42:
    // 0x800993C8: jal         0x800A4B08
    // 0x800993CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4B08(rdram, ctx);
        goto after_43;
    // 0x800993CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_43:
    // 0x800993D0: lw          $t1, 0x158($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X158);
    // 0x800993D4: bne         $t1, $zero, L_800993EC
    if (ctx->r9 != 0) {
        // 0x800993D8: nop
    
            goto L_800993EC;
    }
    // 0x800993D8: nop

    // 0x800993DC: jal         0x80094864
    // 0x800993E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094864(rdram, ctx);
        goto after_44;
    // 0x800993E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_44:
    // 0x800993E4: b           L_800993F8
    // 0x800993E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_800993F8;
    // 0x800993E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800993EC:
    // 0x800993EC: jal         0x80085510
    // 0x800993F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badeathmatch_entrypoint_3(rdram, ctx);
        goto after_45;
    // 0x800993F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_45:
    // 0x800993F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800993F8:
    // 0x800993F8: jal         0x8009AD78
    // 0x800993FC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8009AD78(rdram, ctx);
        goto after_46;
    // 0x800993FC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_46:
    // 0x80099400: beql        $v0, $zero, L_80099414
    if (ctx->r2 == 0) {
        // 0x80099404: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80099414;
    }
    goto skip_8;
    // 0x80099404: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_8:
    // 0x80099408: jal         0x80084638
    // 0x8009940C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bacough_entrypoint_5(rdram, ctx);
        goto after_47;
    // 0x8009940C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_47:
    // 0x80099410: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80099414:
    // 0x80099414: jal         0x8009AD78
    // 0x80099418: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8009AD78(rdram, ctx);
        goto after_48;
    // 0x80099418: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_48:
    // 0x8009941C: beql        $v0, $zero, L_80099430
    if (ctx->r2 == 0) {
        // 0x80099420: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80099430;
    }
    goto skip_9;
    // 0x80099420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_9:
    // 0x80099424: jal         0x80084B08
    // 0x80099428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baeggcursor_entrypoint_11(rdram, ctx);
        goto after_49;
    // 0x80099428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_49:
    // 0x8009942C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80099430:
    // 0x80099430: jal         0x8009AD78
    // 0x80099434: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_8009AD78(rdram, ctx);
        goto after_50;
    // 0x80099434: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_50:
    // 0x80099438: beql        $v0, $zero, L_8009944C
    if (ctx->r2 == 0) {
        // 0x8009943C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009944C;
    }
    goto skip_10;
    // 0x8009943C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_10:
    // 0x80099440: jal         0x800854D8
    // 0x80099444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bainvisible_entrypoint_6(rdram, ctx);
        goto after_51;
    // 0x80099444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_51:
    // 0x80099448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8009944C:
    // 0x8009944C: jal         0x8009AD78
    // 0x80099450: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8009AD78(rdram, ctx);
        goto after_52;
    // 0x80099450: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_52:
    // 0x80099454: beql        $v0, $zero, L_80099468
    if (ctx->r2 == 0) {
        // 0x80099458: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80099468;
    }
    goto skip_11;
    // 0x80099458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_11:
    // 0x8009945C: jal         0x80084F20
    // 0x80099460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamum_entrypoint_3(rdram, ctx);
        goto after_53;
    // 0x80099460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_53:
    // 0x80099464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80099468:
    // 0x80099468: jal         0x8009AD78
    // 0x8009946C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8009AD78(rdram, ctx);
        goto after_54;
    // 0x8009946C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_54:
    // 0x80099470: beql        $v0, $zero, L_80099484
    if (ctx->r2 == 0) {
        // 0x80099474: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80099484;
    }
    goto skip_12;
    // 0x80099474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_12:
    // 0x80099478: jal         0x80084CF0
    // 0x8009947C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_15(rdram, ctx);
        goto after_55;
    // 0x8009947C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_55:
    // 0x80099480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80099484:
    // 0x80099484: jal         0x8009AD78
    // 0x80099488: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8009AD78(rdram, ctx);
        goto after_56;
    // 0x80099488: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_56:
    // 0x8009948C: beql        $v0, $zero, L_800994A0
    if (ctx->r2 == 0) {
        // 0x80099490: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800994A0;
    }
    goto skip_13;
    // 0x80099490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_13:
    // 0x80099494: jal         0x800850D0
    // 0x80099498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basquash_entrypoint_4(rdram, ctx);
        goto after_57;
    // 0x80099498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_57:
    // 0x8009949C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800994A0:
    // 0x800994A0: jal         0x8009AD78
    // 0x800994A4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_8009AD78(rdram, ctx);
        goto after_58;
    // 0x800994A4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_58:
    // 0x800994A8: beq         $v0, $zero, L_800994B8
    if (ctx->r2 == 0) {
        // 0x800994AC: nop
    
            goto L_800994B8;
    }
    // 0x800994AC: nop

    // 0x800994B0: jal         0x80085040
    // 0x800994B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_13(rdram, ctx);
        goto after_59;
    // 0x800994B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_59:
L_800994B8:
    // 0x800994B8: jal         0x80093448
    // 0x800994BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80093448(rdram, ctx);
        goto after_60;
    // 0x800994BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_60:
    // 0x800994C0: jal         0x800A2534
    // 0x800994C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2534(rdram, ctx);
        goto after_61;
    // 0x800994C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_61:
    // 0x800994C8: jal         0x800D3E40
    // 0x800994CC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800D3E40(rdram, ctx);
        goto after_62;
    // 0x800994CC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_62:
    // 0x800994D0: beq         $v0, $zero, L_80099500
    if (ctx->r2 == 0) {
        // 0x800994D4: nop
    
            goto L_80099500;
    }
    // 0x800994D4: nop

    // 0x800994D8: jal         0x8008DAA8
    // 0x800994DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DAA8(rdram, ctx);
        goto after_63;
    // 0x800994DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_63:
    // 0x800994E0: beq         $v0, $zero, L_80099500
    if (ctx->r2 == 0) {
        // 0x800994E4: nop
    
            goto L_80099500;
    }
    // 0x800994E4: nop

    // 0x800994E8: jal         0x8008E124
    // 0x800994EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E124(rdram, ctx);
        goto after_64;
    // 0x800994EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_64:
    // 0x800994F0: bne         $v0, $zero, L_80099500
    if (ctx->r2 != 0) {
        // 0x800994F4: nop
    
            goto L_80099500;
    }
    // 0x800994F4: nop

    // 0x800994F8: jal         0x800A18E8
    // 0x800994FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A18E8(rdram, ctx);
        goto after_65;
    // 0x800994FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_65:
L_80099500:
    // 0x80099500: jal         0x80091F30
    // 0x80099504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80091F30(rdram, ctx);
        goto after_66;
    // 0x80099504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_66:
    // 0x80099508: lw          $v0, 0xB8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB8);
    // 0x8009950C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80099510: beq         $v1, $zero, L_80099528
    if (ctx->r3 == 0) {
        // 0x80099514: nop
    
            goto L_80099528;
    }
    // 0x80099514: nop

    // 0x80099518: jalr        $v1
    // 0x8009951C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_67;
    // 0x8009951C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    after_67:
    // 0x80099520: lw          $t2, 0xB8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XB8);
    // 0x80099524: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
L_80099528:
    // 0x80099528: jal         0x800989E4
    // 0x8009952C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800989E4(rdram, ctx);
        goto after_68;
    // 0x8009952C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_68:
    // 0x80099530: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80099534:
    // 0x80099534: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80099538: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009953C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80099544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80099544: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80099548: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009954C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80099550: lw          $t6, 0xB8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB8);
    // 0x80099554: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80099558: lbu         $t7, 0x8($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X8);
    // 0x8009955C: beql        $t7, $zero, L_80099598
    if (ctx->r15 == 0) {
        // 0x80099560: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80099598;
    }
    goto skip_0;
    // 0x80099560: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80099564: jal         0x8008C924
    // 0x80099568: nop

    func_8008C924(rdram, ctx);
        goto after_0;
    // 0x80099568: nop

    after_0:
    // 0x8009956C: jal         0x800934C4
    // 0x80099570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800934C4(rdram, ctx);
        goto after_1;
    // 0x80099570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80099574: jal         0x80096728
    // 0x80099578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096728(rdram, ctx);
        goto after_2;
    // 0x80099578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8009957C: jal         0x800A300C
    // 0x80099580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A300C(rdram, ctx);
        goto after_3;
    // 0x80099580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80099584: jal         0x80091ADC
    // 0x80099588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80091ADC(rdram, ctx);
        goto after_4;
    // 0x80099588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8009958C: jal         0x800A266C
    // 0x80099590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A266C(rdram, ctx);
        goto after_5;
    // 0x80099590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80099594: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80099598:
    // 0x80099598: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009959C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800995A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800995B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800995B0: jr          $ra
    // 0x800995B4: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    return;
    // 0x800995B4: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
;}
RECOMP_FUNC void func_800995B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800995B8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800995BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800995C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800995C4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800995C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800995CC: sw          $a2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r6;
    // 0x800995D0: jal         0x800A34CC
    // 0x800995D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A34CC(rdram, ctx);
        goto after_0;
    // 0x800995D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800995D8: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x800995DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800995E0: beql        $a2, $zero, L_8009960C
    if (ctx->r6 == 0) {
        // 0x800995E4: lw          $t6, 0xC0($s0)
        ctx->r14 = MEM_W(ctx->r16, 0XC0);
            goto L_8009960C;
    }
    goto skip_0;
    // 0x800995E4: lw          $t6, 0xC0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC0);
    skip_0:
    // 0x800995E8: beq         $a2, $at, L_8009962C
    if (ctx->r6 == ctx->r1) {
        // 0x800995EC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8009962C;
    }
    // 0x800995EC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800995F0: beq         $a2, $at, L_80099644
    if (ctx->r6 == ctx->r1) {
        // 0x800995F4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80099644;
    }
    // 0x800995F4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800995F8: beql        $a2, $at, L_800996C0
    if (ctx->r6 == ctx->r1) {
        // 0x800995FC: lw          $a1, 0xC0($s0)
        ctx->r5 = MEM_W(ctx->r16, 0XC0);
            goto L_800996C0;
    }
    goto skip_1;
    // 0x800995FC: lw          $a1, 0xC0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC0);
    skip_1:
    // 0x80099600: b           L_800996D0
    // 0x80099604: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800996D0;
    // 0x80099604: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80099608: lw          $t6, 0xC0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC0);
L_8009960C:
    // 0x8009960C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80099610: jal         0x800EC398
    // 0x80099614: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    func_800EC398(rdram, ctx);
        goto after_1;
    // 0x80099614: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    after_1:
    // 0x80099618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009961C: jal         0x800A34AC
    // 0x80099620: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800A34AC(rdram, ctx);
        goto after_2;
    // 0x80099620: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x80099624: b           L_800996D0
    // 0x80099628: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800996D0;
    // 0x80099628: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009962C:
    // 0x8009962C: lw          $a1, 0xC0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC0);
    // 0x80099630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099634: jal         0x800A34AC
    // 0x80099638: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_800A34AC(rdram, ctx);
        goto after_3;
    // 0x80099638: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_3:
    // 0x8009963C: b           L_800996D0
    // 0x80099640: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800996D0;
    // 0x80099640: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80099644:
    // 0x80099644: jal         0x8008FE68
    // 0x80099648: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_8008FE68(rdram, ctx);
        goto after_4;
    // 0x80099648: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_4:
    // 0x8009964C: jal         0x80090010
    // 0x80099650: nop

    func_80090010(rdram, ctx);
        goto after_5;
    // 0x80099650: nop

    after_5:
    // 0x80099654: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80099658: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8009965C: jal         0x800EFCD8
    // 0x80099660: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    func_800EFCD8(rdram, ctx);
        goto after_6;
    // 0x80099660: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    after_6:
    // 0x80099664: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80099668: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8009966C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80099670: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80099674: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80099678: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8009967C: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80099680: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x80099684: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x80099688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009968C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80099690: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x80099694: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80099698: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8009969C: jal         0x800A34AC
    // 0x800996A0: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    func_800A34AC(rdram, ctx);
        goto after_7;
    // 0x800996A0: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x800996A4: lw          $t7, 0xC0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC0);
    // 0x800996A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800996AC: jal         0x800A34CC
    // 0x800996B0: lw          $a1, 0x1C($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X1C);
    func_800A34CC(rdram, ctx);
        goto after_8;
    // 0x800996B0: lw          $a1, 0x1C($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X1C);
    after_8:
    // 0x800996B4: b           L_800996D0
    // 0x800996B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800996D0;
    // 0x800996B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800996BC: lw          $a1, 0xC0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC0);
L_800996C0:
    // 0x800996C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800996C4: jal         0x800A34AC
    // 0x800996C8: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_800A34AC(rdram, ctx);
        goto after_9;
    // 0x800996C8: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_9:
    // 0x800996CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800996D0:
    // 0x800996D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800996D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800996D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800996E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800996E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800996E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800996E8: jal         0x800A1718
    // 0x800996EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A1718(rdram, ctx);
        goto after_0;
    // 0x800996EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800996F0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x800996F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800996F8: beq         $at, $zero, L_80099710
    if (ctx->r1 == 0) {
        // 0x800996FC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80099710;
    }
    // 0x800996FC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80099700: jal         0x800A17A8
    // 0x80099704: negu        $a1, $v0
    ctx->r5 = SUB32(0, ctx->r2);
    func_800A17A8(rdram, ctx);
        goto after_1;
    // 0x80099704: negu        $a1, $v0
    ctx->r5 = SUB32(0, ctx->r2);
    after_1:
    // 0x80099708: b           L_80099720
    // 0x8009970C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80099720;
    // 0x8009970C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80099710:
    // 0x80099710: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80099714: jal         0x800A17A8
    // 0x80099718: subu        $a1, $t6, $v1
    ctx->r5 = SUB32(ctx->r14, ctx->r3);
    func_800A17A8(rdram, ctx);
        goto after_2;
    // 0x80099718: subu        $a1, $t6, $v1
    ctx->r5 = SUB32(ctx->r14, ctx->r3);
    after_2:
    // 0x8009971C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80099720:
    // 0x80099720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80099724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80099728: jr          $ra
    return;
;}
RECOMP_FUNC void func_80099730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80099730: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80099734: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80099738: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009973C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80099740: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80099744: jal         0x8009AD20
    // 0x80099748: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_8009AD20(rdram, ctx);
        goto after_0;
    // 0x80099748: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_0:
    // 0x8009974C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099750: jal         0x800995B8
    // 0x80099754: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800995B8(rdram, ctx);
        goto after_1;
    // 0x80099754: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80099758: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8009975C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099760: beq         $t6, $zero, L_80099778
    if (ctx->r14 == 0) {
        // 0x80099764: nop
    
            goto L_80099778;
    }
    // 0x80099764: nop

    // 0x80099768: jal         0x800996E0
    // 0x8009976C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800996E0(rdram, ctx);
        goto after_2;
    // 0x8009976C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80099770: b           L_80099780
    // 0x80099774: nop

        goto L_80099780;
    // 0x80099774: nop

L_80099778:
    // 0x80099778: jal         0x800A17A8
    // 0x8009977C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800A17A8(rdram, ctx);
        goto after_3;
    // 0x8009977C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_3:
L_80099780:
    // 0x80099780: jal         0x800A1718
    // 0x80099784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1718(rdram, ctx);
        goto after_4;
    // 0x80099784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80099788: beq         $v0, $zero, L_800997A0
    if (ctx->r2 == 0) {
        // 0x8009978C: nop
    
            goto L_800997A0;
    }
    // 0x8009978C: nop

    // 0x80099790: jal         0x80084710
    // 0x80099794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badata_entrypoint_26(rdram, ctx);
        goto after_5;
    // 0x80099794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80099798: b           L_800997AC
    // 0x8009979C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800997AC;
    // 0x8009979C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800997A0:
    // 0x800997A0: jal         0x800846E0
    // 0x800997A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badata_entrypoint_20(rdram, ctx);
        goto after_6;
    // 0x800997A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x800997A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800997AC:
    // 0x800997AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800997B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800997B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800997BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800997BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800997C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800997C4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800997C8: jal         0x8009C128
    // 0x800997CC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x800997CC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x800997D0: jal         0x8009C984
    // 0x800997D4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_8009C984(rdram, ctx);
        goto after_1;
    // 0x800997D4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_1:
    // 0x800997D8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800997DC: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x800997E0: jal         0x800EEB9C
    // 0x800997E4: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    func_800EEB9C(rdram, ctx);
        goto after_2;
    // 0x800997E4: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    after_2:
    // 0x800997E8: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800997EC: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800997F0: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800997F4: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800997F8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800997FC: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80099800: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80099804: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80099808: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x8009980C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80099810: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80099814: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x80099818: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8009981C: jal         0x800A34AC
    // 0x80099820: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    func_800A34AC(rdram, ctx);
        goto after_3;
    // 0x80099820: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80099824: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80099828: jal         0x800A17A8
    // 0x8009982C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800A17A8(rdram, ctx);
        goto after_4;
    // 0x8009982C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_4:
    // 0x80099830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80099834: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80099838: jr          $ra
    return;
;}
RECOMP_FUNC void func_80099840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80099840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80099844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80099848: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8009984C: jal         0x800A1718
    // 0x80099850: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A1718(rdram, ctx);
        goto after_0;
    // 0x80099850: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80099854: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80099858: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8009985C: sltiu       $a0, $v1, 0x1
    ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80099860: beq         $a0, $zero, L_8009986C
    if (ctx->r4 == 0) {
        // 0x80099864: nop
    
            goto L_8009986C;
    }
    // 0x80099864: nop

    // 0x80099868: sltu        $a0, $zero, $v0
    ctx->r4 = 0 < ctx->r2 ? 1 : 0;
L_8009986C:
    // 0x8009986C: beq         $a0, $zero, L_80099884
    if (ctx->r4 == 0) {
        // 0x80099870: nop
    
            goto L_80099884;
    }
    // 0x80099870: nop

    // 0x80099874: jal         0x80084710
    // 0x80099878: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    _badata_entrypoint_26(rdram, ctx);
        goto after_1;
    // 0x80099878: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x8009987C: b           L_80099890
    // 0x80099880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80099890;
    // 0x80099880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80099884:
    // 0x80099884: jal         0x800846E0
    // 0x80099888: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    _badata_entrypoint_20(rdram, ctx);
        goto after_2;
    // 0x80099888: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x8009988C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80099890:
    // 0x80099890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80099894: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009989C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009989C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800998A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800998A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800998A8: lw          $a2, 0xC0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC0);
    // 0x800998AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800998B0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800998B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800998B8: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
L_800998BC:
    // 0x800998BC: lw          $t6, 0x4C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4C);
    // 0x800998C0: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x800998C4: slti        $at, $v0, 0xC8
    ctx->r1 = SIGNED(ctx->r2) < 0XC8 ? 1 : 0;
    // 0x800998C8: beql        $a3, $t6, L_80099960
    if (ctx->r7 == ctx->r14) {
        // 0x800998CC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80099960;
    }
    goto skip_0;
    // 0x800998CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800998D0: bne         $at, $zero, L_800998BC
    if (ctx->r1 != 0) {
        // 0x800998D4: addiu       $v1, $v1, 0x28
        ctx->r3 = ADD32(ctx->r3, 0X28);
            goto L_800998BC;
    }
    // 0x800998D4: addiu       $v1, $v1, 0x28
    ctx->r3 = ADD32(ctx->r3, 0X28);
    // 0x800998D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800998DC: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x800998E0: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
L_800998E4:
    // 0x800998E4: lw          $t7, 0x4C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4C);
    // 0x800998E8: bnel        $t7, $zero, L_80099954
    if (ctx->r15 != 0) {
        // 0x800998EC: addiu       $v0, $v0, 0x28
        ctx->r2 = ADD32(ctx->r2, 0X28);
            goto L_80099954;
    }
    goto skip_1;
    // 0x800998EC: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    skip_1:
    // 0x800998F0: sw          $a3, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->r7;
    // 0x800998F4: lw          $a2, 0xC0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC0);
    // 0x800998F8: lw          $t8, 0x18($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X18);
    // 0x800998FC: addu        $t9, $a2, $v0
    ctx->r25 = ADD32(ctx->r6, ctx->r2);
    // 0x80099900: sw          $t8, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->r24;
    // 0x80099904: lw          $a2, 0xC0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC0);
    // 0x80099908: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8009990C: addu        $t1, $a2, $v0
    ctx->r9 = ADD32(ctx->r6, ctx->r2);
    // 0x80099910: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
    // 0x80099914: lw          $a2, 0xC0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC0);
    // 0x80099918: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8009991C: addu        $t2, $a2, $v0
    ctx->r10 = ADD32(ctx->r6, ctx->r2);
    // 0x80099920: swc1        $f6, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f6.u32l;
    // 0x80099924: lw          $a2, 0xC0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC0);
    // 0x80099928: lw          $t3, 0x14($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X14);
    // 0x8009992C: addu        $t4, $a2, $v0
    ctx->r12 = ADD32(ctx->r6, ctx->r2);
    // 0x80099930: sw          $t3, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->r11;
    // 0x80099934: lw          $a2, 0xC0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC0);
    // 0x80099938: addu        $a0, $a2, $v0
    ctx->r4 = ADD32(ctx->r6, ctx->r2);
    // 0x8009993C: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    // 0x80099940: jal         0x800EE7F8
    // 0x80099944: addiu       $a1, $a2, 0x8
    ctx->r5 = ADD32(ctx->r6, 0X8);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80099944: addiu       $a1, $a2, 0x8
    ctx->r5 = ADD32(ctx->r6, 0X8);
    after_0:
    // 0x80099948: b           L_80099960
    // 0x8009994C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80099960;
    // 0x8009994C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80099950: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
L_80099954:
    // 0x80099954: bne         $v0, $a0, L_800998E4
    if (ctx->r2 != ctx->r4) {
        // 0x80099958: addiu       $v1, $v1, 0x28
        ctx->r3 = ADD32(ctx->r3, 0X28);
            goto L_800998E4;
    }
    // 0x80099958: addiu       $v1, $v1, 0x28
    ctx->r3 = ADD32(ctx->r3, 0X28);
    // 0x8009995C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80099960:
    // 0x80099960: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80099964: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80099968: jr          $ra
    return;
;}
RECOMP_FUNC void func_80099970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80099970: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80099974: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80099978: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8009997C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80099980: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80099984: lw          $v0, 0xC0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC0);
    // 0x80099988: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8009998C: addiu       $v1, $zero, 0xC8
    ctx->r3 = ADD32(0, 0XC8);
L_80099990:
    // 0x80099990: lw          $t6, 0x4C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4C);
    // 0x80099994: beq         $t6, $zero, L_80099A14
    if (ctx->r14 == 0) {
        // 0x80099998: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80099A14;
    }
    // 0x80099998: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8009999C: jal         0x8009ACF4
    // 0x800999A0: lw          $a1, 0x28($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X28);
    func_8009ACF4(rdram, ctx);
        goto after_0;
    // 0x800999A0: lw          $a1, 0x28($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X28);
    after_0:
    // 0x800999A4: lw          $t7, 0xC0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XC0);
    // 0x800999A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800999AC: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x800999B0: jal         0x8009AD04
    // 0x800999B4: lw          $a1, 0x2C($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X2C);
    func_8009AD04(rdram, ctx);
        goto after_1;
    // 0x800999B4: lw          $a1, 0x2C($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X2C);
    after_1:
    // 0x800999B8: lw          $t9, 0xC0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XC0);
    // 0x800999BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800999C0: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x800999C4: jal         0x8009AD14
    // 0x800999C8: lw          $a1, 0x3C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X3C);
    func_8009AD14(rdram, ctx);
        goto after_2;
    // 0x800999C8: lw          $a1, 0x3C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X3C);
    after_2:
    // 0x800999CC: lw          $t1, 0xC0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC0);
    // 0x800999D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800999D4: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x800999D8: jal         0x8009AD20
    // 0x800999DC: lw          $a1, 0x40($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X40);
    func_8009AD20(rdram, ctx);
        goto after_3;
    // 0x800999DC: lw          $a1, 0x40($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X40);
    after_3:
    // 0x800999E0: lw          $t3, 0xC0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC0);
    // 0x800999E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800999E8: addu        $a1, $t3, $s0
    ctx->r5 = ADD32(ctx->r11, ctx->r16);
    // 0x800999EC: jal         0x8009AD44
    // 0x800999F0: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    func_8009AD44(rdram, ctx);
        goto after_4;
    // 0x800999F0: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    after_4:
    // 0x800999F4: lw          $t4, 0xC0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0XC0);
    // 0x800999F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800999FC: addu        $v0, $t4, $s0
    ctx->r2 = ADD32(ctx->r12, ctx->r16);
    // 0x80099A00: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x80099A04: jal         0x8009E7C8
    // 0x80099A08: sw          $zero, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = 0;
    func_8009E7C8(rdram, ctx);
        goto after_5;
    // 0x80099A08: sw          $zero, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = 0;
    after_5:
    // 0x80099A0C: b           L_80099A24
    // 0x80099A10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80099A24;
    // 0x80099A10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80099A14:
    // 0x80099A14: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x80099A18: bne         $s0, $v1, L_80099990
    if (ctx->r16 != ctx->r3) {
        // 0x80099A1C: addiu       $v0, $v0, 0x28
        ctx->r2 = ADD32(ctx->r2, 0X28);
            goto L_80099990;
    }
    // 0x80099A1C: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x80099A20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80099A24:
    // 0x80099A24: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80099A28: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80099A2C: jr          $ra
    // 0x80099A30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80099A30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80099A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80099A34: lw          $t6, 0xC0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC0);
    // 0x80099A38: jr          $ra
    // 0x80099A3C: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    return;
    // 0x80099A3C: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
;}
RECOMP_FUNC void func_80099A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80099A40: lw          $t6, 0xC0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC0);
    // 0x80099A44: jr          $ra
    // 0x80099A48: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
    return;
    // 0x80099A48: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
;}
RECOMP_FUNC void func_80099A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80099A4C: lw          $t6, 0xC0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC0);
    // 0x80099A50: jr          $ra
    // 0x80099A54: lw          $v0, 0x14($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X14);
    return;
    // 0x80099A54: lw          $v0, 0x14($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X14);
;}
RECOMP_FUNC void func_80099A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80099A58: lw          $t6, 0xC0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC0);
    // 0x80099A5C: jr          $ra
    // 0x80099A60: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    return;
    // 0x80099A60: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
;}
RECOMP_FUNC void func_80099A64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80099A64: lw          $t6, 0xC0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC0);
    // 0x80099A68: jr          $ra
    // 0x80099A6C: lw          $v0, 0x1C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X1C);
    return;
    // 0x80099A6C: lw          $v0, 0x1C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X1C);
;}
RECOMP_FUNC void func_80099A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80099A70: lw          $t6, 0xC0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC0);
    // 0x80099A74: jr          $ra
    // 0x80099A78: lw          $v0, 0x20($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X20);
    return;
    // 0x80099A78: lw          $v0, 0x20($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X20);
;}
RECOMP_FUNC void func_80099A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80099A7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80099A80: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80099A84: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80099A88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80099A8C: lw          $a1, 0xC0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC0);
    // 0x80099A90: jal         0x800EE7F8
    // 0x80099A94: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80099A94: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_0:
    // 0x80099A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80099A9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80099AA0: jr          $ra
    return;
;}
RECOMP_FUNC void func_80099AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80099AA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80099AAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80099AB0: jal         0x8009E6EC
    // 0x80099AB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80099AB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80099AB8: slti        $at, $v0, 0x34
    ctx->r1 = SIGNED(ctx->r2) < 0X34 ? 1 : 0;
    // 0x80099ABC: bne         $at, $zero, L_80099AE8
    if (ctx->r1 != 0) {
        // 0x80099AC0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80099AE8;
    }
    // 0x80099AC0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80099AC4: addiu       $t6, $v0, -0x4D
    ctx->r14 = ADD32(ctx->r2, -0X4D);
    // 0x80099AC8: sltiu       $at, $t6, 0x4E
    ctx->r1 = ctx->r14 < 0X4E ? 1 : 0;
    // 0x80099ACC: beq         $at, $zero, L_80099B2C
    if (ctx->r1 == 0) {
        // 0x80099AD0: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80099B2C;
    }
    // 0x80099AD0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80099AD4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80099AD8: addu        $at, $at, $t6
    gpr jr_addend_80099AE0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80099ADC: lw          $t6, 0x4E70($at)
    ctx->r14 = ADD32(ctx->r1, 0X4E70);
    // 0x80099AE0: jr          $t6
    // 0x80099AE4: nop

    switch (jr_addend_80099AE0 >> 2) {
        case 0: goto L_80099B1C; break;
        case 1: goto L_80099B2C; break;
        case 2: goto L_80099B2C; break;
        case 3: goto L_80099B2C; break;
        case 4: goto L_80099B2C; break;
        case 5: goto L_80099B2C; break;
        case 6: goto L_80099B2C; break;
        case 7: goto L_80099B2C; break;
        case 8: goto L_80099B2C; break;
        case 9: goto L_80099B2C; break;
        case 10: goto L_80099B2C; break;
        case 11: goto L_80099B2C; break;
        case 12: goto L_80099B2C; break;
        case 13: goto L_80099B2C; break;
        case 14: goto L_80099B2C; break;
        case 15: goto L_80099B2C; break;
        case 16: goto L_80099B2C; break;
        case 17: goto L_80099B2C; break;
        case 18: goto L_80099B2C; break;
        case 19: goto L_80099B2C; break;
        case 20: goto L_80099B2C; break;
        case 21: goto L_80099B1C; break;
        case 22: goto L_80099B1C; break;
        case 23: goto L_80099B2C; break;
        case 24: goto L_80099B2C; break;
        case 25: goto L_80099B2C; break;
        case 26: goto L_80099B2C; break;
        case 27: goto L_80099B2C; break;
        case 28: goto L_80099B2C; break;
        case 29: goto L_80099B2C; break;
        case 30: goto L_80099B1C; break;
        case 31: goto L_80099B1C; break;
        case 32: goto L_80099B2C; break;
        case 33: goto L_80099B2C; break;
        case 34: goto L_80099B2C; break;
        case 35: goto L_80099B2C; break;
        case 36: goto L_80099B2C; break;
        case 37: goto L_80099B2C; break;
        case 38: goto L_80099B2C; break;
        case 39: goto L_80099B2C; break;
        case 40: goto L_80099B2C; break;
        case 41: goto L_80099B2C; break;
        case 42: goto L_80099B2C; break;
        case 43: goto L_80099B2C; break;
        case 44: goto L_80099B2C; break;
        case 45: goto L_80099B2C; break;
        case 46: goto L_80099B2C; break;
        case 47: goto L_80099B1C; break;
        case 48: goto L_80099B1C; break;
        case 49: goto L_80099B2C; break;
        case 50: goto L_80099B2C; break;
        case 51: goto L_80099B2C; break;
        case 52: goto L_80099B1C; break;
        case 53: goto L_80099B2C; break;
        case 54: goto L_80099B2C; break;
        case 55: goto L_80099B2C; break;
        case 56: goto L_80099B2C; break;
        case 57: goto L_80099B2C; break;
        case 58: goto L_80099B2C; break;
        case 59: goto L_80099B2C; break;
        case 60: goto L_80099B1C; break;
        case 61: goto L_80099B2C; break;
        case 62: goto L_80099B2C; break;
        case 63: goto L_80099B2C; break;
        case 64: goto L_80099B2C; break;
        case 65: goto L_80099B2C; break;
        case 66: goto L_80099B2C; break;
        case 67: goto L_80099B2C; break;
        case 68: goto L_80099B1C; break;
        case 69: goto L_80099B2C; break;
        case 70: goto L_80099B2C; break;
        case 71: goto L_80099B2C; break;
        case 72: goto L_80099B2C; break;
        case 73: goto L_80099B2C; break;
        case 74: goto L_80099B2C; break;
        case 75: goto L_80099B1C; break;
        case 76: goto L_80099B2C; break;
        case 77: goto L_80099B1C; break;
        default: switch_error(__func__, 0x80099AE0, 0x80124E70);
    }
    // 0x80099AE4: nop

L_80099AE8:
    // 0x80099AE8: addiu       $t7, $v0, -0xF
    ctx->r15 = ADD32(ctx->r2, -0XF);
    // 0x80099AEC: sltiu       $at, $t7, 0x25
    ctx->r1 = ctx->r15 < 0X25 ? 1 : 0;
    // 0x80099AF0: beq         $at, $zero, L_80099B2C
    if (ctx->r1 == 0) {
        // 0x80099AF4: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80099B2C;
    }
    // 0x80099AF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80099AF8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80099AFC: addu        $at, $at, $t7
    gpr jr_addend_80099B04 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80099B00: lw          $t7, 0x4FA8($at)
    ctx->r15 = ADD32(ctx->r1, 0X4FA8);
    // 0x80099B04: jr          $t7
    // 0x80099B08: nop

    switch (jr_addend_80099B04 >> 2) {
        case 0: goto L_80099B0C; break;
        case 1: goto L_80099B2C; break;
        case 2: goto L_80099B2C; break;
        case 3: goto L_80099B2C; break;
        case 4: goto L_80099B0C; break;
        case 5: goto L_80099B2C; break;
        case 6: goto L_80099B2C; break;
        case 7: goto L_80099B2C; break;
        case 8: goto L_80099B2C; break;
        case 9: goto L_80099B2C; break;
        case 10: goto L_80099B2C; break;
        case 11: goto L_80099B2C; break;
        case 12: goto L_80099B2C; break;
        case 13: goto L_80099B2C; break;
        case 14: goto L_80099B2C; break;
        case 15: goto L_80099B2C; break;
        case 16: goto L_80099B2C; break;
        case 17: goto L_80099B2C; break;
        case 18: goto L_80099B2C; break;
        case 19: goto L_80099B2C; break;
        case 20: goto L_80099B2C; break;
        case 21: goto L_80099B2C; break;
        case 22: goto L_80099B2C; break;
        case 23: goto L_80099B0C; break;
        case 24: goto L_80099B1C; break;
        case 25: goto L_80099B2C; break;
        case 26: goto L_80099B2C; break;
        case 27: goto L_80099B0C; break;
        case 28: goto L_80099B2C; break;
        case 29: goto L_80099B2C; break;
        case 30: goto L_80099B2C; break;
        case 31: goto L_80099B2C; break;
        case 32: goto L_80099B2C; break;
        case 33: goto L_80099B0C; break;
        case 34: goto L_80099B1C; break;
        case 35: goto L_80099B1C; break;
        case 36: goto L_80099B1C; break;
        default: switch_error(__func__, 0x80099B04, 0x80124FA8);
    }
    // 0x80099B08: nop

L_80099B0C:
    // 0x80099B0C: jal         0x8009989C
    // 0x80099B10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009989C(rdram, ctx);
        goto after_1;
    // 0x80099B10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80099B14: b           L_80099B30
    // 0x80099B18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
        goto L_80099B30;
    // 0x80099B18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_80099B1C:
    // 0x80099B1C: jal         0x80099B94
    // 0x80099B20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80099B94(rdram, ctx);
        goto after_2;
    // 0x80099B20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80099B24: b           L_80099B48
    // 0x80099B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80099B48;
    // 0x80099B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80099B2C:
    // 0x80099B2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_80099B30:
    // 0x80099B30: jal         0x8009E830
    // 0x80099B34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E830(rdram, ctx);
        goto after_3;
    // 0x80099B34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80099B38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80099B3C: jal         0x8009E5C8
    // 0x80099B40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x80099B40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80099B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80099B48:
    // 0x80099B48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80099B4C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80099B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80099B54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80099B58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80099B5C: jal         0x80099A4C
    // 0x80099B60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80099A4C(rdram, ctx);
        goto after_0;
    // 0x80099B60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80099B64: jal         0x80106790
    // 0x80099B68: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80106790(rdram, ctx);
        goto after_1;
    // 0x80099B68: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80099B6C: lw          $a0, 0x6C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X6C);
    // 0x80099B70: sll         $t6, $a0, 11
    ctx->r14 = S32(ctx->r4 << 11);
    // 0x80099B74: jal         0x8009EAE8
    // 0x80099B78: srl         $a0, $t6, 20
    ctx->r4 = S32(U32(ctx->r14) >> 20);
    func_8009EAE8(rdram, ctx);
        goto after_2;
    // 0x80099B78: srl         $a0, $t6, 20
    ctx->r4 = S32(U32(ctx->r14) >> 20);
    after_2:
    // 0x80099B7C: jal         0x80084748
    // 0x80099B80: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _badata_entrypoint_33(rdram, ctx);
        goto after_3;
    // 0x80099B80: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80099B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80099B88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80099B8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80099B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80099B94: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80099B98: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80099B9C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80099BA0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80099BA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80099BA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80099BAC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80099BB0: jal         0x8009E6F8
    // 0x80099BB4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    func_8009E6F8(rdram, ctx);
        goto after_0;
    // 0x80099BB4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_0:
    // 0x80099BB8: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x80099BBC: jal         0x8009E6EC
    // 0x80099BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E6EC(rdram, ctx);
        goto after_1;
    // 0x80099BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80099BC4: addiu       $t6, $v0, -0x4
    ctx->r14 = ADD32(ctx->r2, -0X4);
    // 0x80099BC8: sltiu       $at, $t6, 0x97
    ctx->r1 = ctx->r14 < 0X97 ? 1 : 0;
    // 0x80099BCC: beq         $at, $zero, L_8009AB48
    if (ctx->r1 == 0) {
        // 0x80099BD0: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8009AB48;
    }
    // 0x80099BD0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80099BD4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80099BD8: addu        $at, $at, $t6
    gpr jr_addend_80099BE0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80099BDC: lw          $t6, 0x503C($at)
    ctx->r14 = ADD32(ctx->r1, 0X503C);
    // 0x80099BE0: jr          $t6
    // 0x80099BE4: nop

    switch (jr_addend_80099BE0 >> 2) {
        case 0: goto L_8009A5EC; break;
        case 1: goto L_8009A5EC; break;
        case 2: goto L_8009AB48; break;
        case 3: goto L_8009AB48; break;
        case 4: goto L_8009AB48; break;
        case 5: goto L_8009AB48; break;
        case 6: goto L_80099CC8; break;
        case 7: goto L_8009A098; break;
        case 8: goto L_8009A758; break;
        case 9: goto L_8009AB48; break;
        case 10: goto L_8009AB48; break;
        case 11: goto L_8009A9B8; break;
        case 12: goto L_8009AB48; break;
        case 13: goto L_8009A0F0; break;
        case 14: goto L_8009AB48; break;
        case 15: goto L_8009A08C; break;
        case 16: goto L_8009A580; break;
        case 17: goto L_8009A834; break;
        case 18: goto L_8009AB48; break;
        case 19: goto L_8009AB48; break;
        case 20: goto L_8009AB48; break;
        case 21: goto L_8009A0DC; break;
        case 22: goto L_8009A22C; break;
        case 23: goto L_8009A274; break;
        case 24: goto L_8009A814; break;
        case 25: goto L_8009A7F4; break;
        case 26: goto L_8009A7D4; break;
        case 27: goto L_8009A33C; break;
        case 28: goto L_8009A4C8; break;
        case 29: goto L_8009A39C; break;
        case 30: goto L_8009AB48; break;
        case 31: goto L_80099F70; break;
        case 32: goto L_80099F44; break;
        case 33: goto L_8009A8DC; break;
        case 34: goto L_8009A0B8; break;
        case 35: goto L_8009A730; break;
        case 36: goto L_8009AB48; break;
        case 37: goto L_8009A1E4; break;
        case 38: goto L_8009AA18; break;
        case 39: goto L_8009A19C; break;
        case 40: goto L_8009AB48; break;
        case 41: goto L_80099F9C; break;
        case 42: goto L_8009A508; break;
        case 43: goto L_80099EF8; break;
        case 44: goto L_8009A9D8; break;
        case 45: goto L_8009A36C; break;
        case 46: goto L_8009AB48; break;
        case 47: goto L_8009A3BC; break;
        case 48: goto L_8009A744; break;
        case 49: goto L_8009A5CC; break;
        case 50: goto L_8009AB48; break;
        case 51: goto L_8009AA04; break;
        case 52: goto L_8009A918; break;
        case 53: goto L_80099BE8; break;
        case 54: goto L_8009A60C; break;
        case 55: goto L_8009A674; break;
        case 56: goto L_8009A150; break;
        case 57: goto L_8009A7C4; break;
        case 58: goto L_8009A138; break;
        case 59: goto L_8009A168; break;
        case 60: goto L_8009A54C; break;
        case 61: goto L_8009A6A4; break;
        case 62: goto L_8009AB48; break;
        case 63: goto L_8009AB48; break;
        case 64: goto L_8009A080; break;
        case 65: goto L_8009A024; break;
        case 66: goto L_8009AB48; break;
        case 67: goto L_8009A2A4; break;
        case 68: goto L_8009AB48; break;
        case 69: goto L_8009AA3C; break;
        case 70: goto L_8009AA50; break;
        case 71: goto L_8009AB48; break;
        case 72: goto L_8009A120; break;
        case 73: goto L_8009A0FC; break;
        case 74: goto L_8009A408; break;
        case 75: goto L_8009AB48; break;
        case 76: goto L_8009AB48; break;
        case 77: goto L_80099CDC; break;
        case 78: goto L_80099D44; break;
        case 79: goto L_8009AB48; break;
        case 80: goto L_8009AB48; break;
        case 81: goto L_8009AB48; break;
        case 82: goto L_8009A06C; break;
        case 83: goto L_8009A058; break;
        case 84: goto L_8009AB48; break;
        case 85: goto L_8009A924; break;
        case 86: goto L_8009A944; break;
        case 87: goto L_8009A978; break;
        case 88: goto L_8009A998; break;
        case 89: goto L_80099EC0; break;
        case 90: goto L_80099C20; break;
        case 91: goto L_8009A184; break;
        case 92: goto L_8009A58C; break;
        case 93: goto L_8009AA64; break;
        case 94: goto L_8009AA80; break;
        case 95: goto L_8009AAA0; break;
        case 96: goto L_8009AB48; break;
        case 97: goto L_8009AB48; break;
        case 98: goto L_8009AAC0; break;
        case 99: goto L_8009AADC; break;
        case 100: goto L_80099FFC; break;
        case 101: goto L_80099C68; break;
        case 102: goto L_80099CF4; break;
        case 103: goto L_80099DBC; break;
        case 104: goto L_80099E48; break;
        case 105: goto L_8009AB48; break;
        case 106: goto L_8009AB48; break;
        case 107: goto L_80099DA0; break;
        case 108: goto L_8009AB48; break;
        case 109: goto L_8009AB48; break;
        case 110: goto L_8009AB48; break;
        case 111: goto L_8009AB48; break;
        case 112: goto L_8009AB48; break;
        case 113: goto L_8009AB48; break;
        case 114: goto L_8009AB48; break;
        case 115: goto L_8009AB48; break;
        case 116: goto L_8009AB48; break;
        case 117: goto L_8009AB48; break;
        case 118: goto L_8009AB48; break;
        case 119: goto L_8009AB48; break;
        case 120: goto L_8009A10C; break;
        case 121: goto L_8009AAF4; break;
        case 122: goto L_8009AB48; break;
        case 123: goto L_8009AB48; break;
        case 124: goto L_8009AB48; break;
        case 125: goto L_8009AB48; break;
        case 126: goto L_8009AB48; break;
        case 127: goto L_8009AB48; break;
        case 128: goto L_8009A560; break;
        case 129: goto L_8009AB48; break;
        case 130: goto L_8009AB48; break;
        case 131: goto L_8009AB48; break;
        case 132: goto L_8009AB48; break;
        case 133: goto L_80099FE4; break;
        case 134: goto L_8009A900; break;
        case 135: goto L_8009AA74; break;
        case 136: goto L_8009AB40; break;
        case 137: goto L_8009AB48; break;
        case 138: goto L_8009AB48; break;
        case 139: goto L_8009AB48; break;
        case 140: goto L_8009AB48; break;
        case 141: goto L_8009A538; break;
        case 142: goto L_80099F18; break;
        case 143: goto L_8009A8F0; break;
        case 144: goto L_8009AB48; break;
        case 145: goto L_8009A6B8; break;
        case 146: goto L_8009A710; break;
        case 147: goto L_8009A720; break;
        case 148: goto L_80099F9C; break;
        case 149: goto L_8009AB48; break;
        case 150: goto L_8009A964; break;
        default: switch_error(__func__, 0x80099BE0, 0x8012503C);
    }
    // 0x80099BE4: nop

L_80099BE8:
    // 0x80099BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099BEC: jal         0x80095760
    // 0x80099BF0: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    func_80095760(rdram, ctx);
        goto after_2;
    // 0x80099BF0: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_2:
    // 0x80099BF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099BF8: jal         0x80095760
    // 0x80099BFC: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    func_80095760(rdram, ctx);
        goto after_3;
    // 0x80099BFC: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    after_3:
    // 0x80099C00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099C04: jal         0x80095760
    // 0x80099C08: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    func_80095760(rdram, ctx);
        goto after_4;
    // 0x80099C08: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_4:
    // 0x80099C0C: jal         0x800848A8
    // 0x80099C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_5;
    // 0x80099C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80099C14: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80099C18: b           L_8009AB48
    // 0x80099C1C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099C1C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099C20:
    // 0x80099C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099C24: jal         0x80095760
    // 0x80099C28: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    func_80095760(rdram, ctx);
        goto after_6;
    // 0x80099C28: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_6:
    // 0x80099C2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099C30: jal         0x80095760
    // 0x80099C34: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    func_80095760(rdram, ctx);
        goto after_7;
    // 0x80099C34: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    after_7:
    // 0x80099C38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099C3C: jal         0x80095760
    // 0x80099C40: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    func_80095760(rdram, ctx);
        goto after_8;
    // 0x80099C40: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_8:
    // 0x80099C44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099C48: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80099C4C: jal         0x80084CD0
    // 0x80099C50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    _bafpctrl_entrypoint_11(rdram, ctx);
        goto after_9;
    // 0x80099C50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x80099C54: jal         0x800848A8
    // 0x80099C58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_10;
    // 0x80099C58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80099C5C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80099C60: b           L_8009AB48
    // 0x80099C64: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099C64: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099C68:
    // 0x80099C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099C6C: jal         0x80095760
    // 0x80099C70: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    func_80095760(rdram, ctx);
        goto after_11;
    // 0x80099C70: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_11:
    // 0x80099C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099C78: jal         0x8009E71C
    // 0x80099C7C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8009E71C(rdram, ctx);
        goto after_12;
    // 0x80099C7C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_12:
    // 0x80099C80: beq         $v0, $zero, L_80099CB4
    if (ctx->r2 == 0) {
        // 0x80099C84: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80099CB4;
    }
    // 0x80099C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099C88: jal         0x80095760
    // 0x80099C8C: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    func_80095760(rdram, ctx);
        goto after_13;
    // 0x80099C8C: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    after_13:
    // 0x80099C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099C94: jal         0x80095760
    // 0x80099C98: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_80095760(rdram, ctx);
        goto after_14;
    // 0x80099C98: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_14:
    // 0x80099C9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099CA0: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x80099CA4: jal         0x80084CD0
    // 0x80099CA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    _bafpctrl_entrypoint_11(rdram, ctx);
        goto after_15;
    // 0x80099CA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x80099CAC: b           L_8009AB48
    // 0x80099CB0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099CB0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099CB4:
    // 0x80099CB4: jal         0x800848A8
    // 0x80099CB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_16;
    // 0x80099CB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80099CBC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80099CC0: b           L_8009AB48
    // 0x80099CC4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099CC4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099CC8:
    // 0x80099CC8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x80099CCC: jal         0x800848C8
    // 0x80099CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_28(rdram, ctx);
        goto after_17;
    // 0x80099CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80099CD4: b           L_8009AB48
    // 0x80099CD8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_8009AB48;
    // 0x80099CD8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_80099CDC:
    // 0x80099CDC: jal         0x8008DD90
    // 0x80099CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD90(rdram, ctx);
        goto after_18;
    // 0x80099CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80099CE4: bne         $v0, $zero, L_8009AB48
    if (ctx->r2 != 0) {
        // 0x80099CE8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB48;
    }
    // 0x80099CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099CEC: jal         0x8009AD20
    // 0x80099CF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009AD20(rdram, ctx);
        goto after_19;
    // 0x80099CF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
L_80099CF4:
    // 0x80099CF4: jal         0x80099A58
    // 0x80099CF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099A58(rdram, ctx);
        goto after_20;
    // 0x80099CF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80099CFC: beq         $v0, $zero, L_80099D0C
    if (ctx->r2 == 0) {
        // 0x80099D00: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80099D0C;
    }
    // 0x80099D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099D04: jal         0x800A17A8
    // 0x80099D08: negu        $a1, $v0
    ctx->r5 = SUB32(0, ctx->r2);
    func_800A17A8(rdram, ctx);
        goto after_21;
    // 0x80099D08: negu        $a1, $v0
    ctx->r5 = SUB32(0, ctx->r2);
    after_21:
L_80099D0C:
    // 0x80099D0C: jal         0x800A1718
    // 0x80099D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1718(rdram, ctx);
        goto after_22;
    // 0x80099D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80099D14: bne         $v0, $zero, L_80099D30
    if (ctx->r2 != 0) {
        // 0x80099D18: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80099D30;
    }
    // 0x80099D18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099D1C: jal         0x80099840
    // 0x80099D20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80099840(rdram, ctx);
        goto after_23;
    // 0x80099D20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
    // 0x80099D24: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80099D28: b           L_8009AB48
    // 0x80099D2C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099D2C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099D30:
    // 0x80099D30: jal         0x80084870
    // 0x80099D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_17(rdram, ctx);
        goto after_24;
    // 0x80099D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x80099D38: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80099D3C: b           L_8009AB48
    // 0x80099D40: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099D40: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099D44:
    // 0x80099D44: jal         0x80099A58
    // 0x80099D48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099A58(rdram, ctx);
        goto after_25;
    // 0x80099D48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x80099D4C: beq         $v0, $zero, L_80099D5C
    if (ctx->r2 == 0) {
        // 0x80099D50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80099D5C;
    }
    // 0x80099D50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099D54: jal         0x800A17A8
    // 0x80099D58: negu        $a1, $v0
    ctx->r5 = SUB32(0, ctx->r2);
    func_800A17A8(rdram, ctx);
        goto after_26;
    // 0x80099D58: negu        $a1, $v0
    ctx->r5 = SUB32(0, ctx->r2);
    after_26:
L_80099D5C:
    // 0x80099D5C: jal         0x800A1718
    // 0x80099D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1718(rdram, ctx);
        goto after_27;
    // 0x80099D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x80099D64: bne         $v0, $zero, L_80099D84
    if (ctx->r2 != 0) {
        // 0x80099D68: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80099D84;
    }
    // 0x80099D68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099D6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099D70: jal         0x80099840
    // 0x80099D74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80099840(rdram, ctx);
        goto after_28;
    // 0x80099D74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_28:
    // 0x80099D78: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80099D7C: b           L_8009AB48
    // 0x80099D80: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099D80: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099D84:
    // 0x80099D84: lw          $a1, 0xC0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC0);
    // 0x80099D88: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80099D8C: jal         0x80084888
    // 0x80099D90: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    _badrone_entrypoint_20(rdram, ctx);
        goto after_29;
    // 0x80099D90: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_29:
    // 0x80099D94: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80099D98: b           L_8009AB48
    // 0x80099D9C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099D9C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099DA0:
    // 0x80099DA0: lw          $t7, 0xC0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC0);
    // 0x80099DA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099DA8: jal         0x80084878
    // 0x80099DAC: lw          $a1, 0x14($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X14);
    _badrone_entrypoint_18(rdram, ctx);
        goto after_30;
    // 0x80099DAC: lw          $a1, 0x14($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X14);
    after_30:
    // 0x80099DB0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80099DB4: b           L_8009AB48
    // 0x80099DB8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099DB8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099DBC:
    // 0x80099DBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099DC0: jal         0x80084CE0
    // 0x80099DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bafpctrl_entrypoint_13(rdram, ctx);
        goto after_31;
    // 0x80099DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_31:
    // 0x80099DC8: jal         0x800A3404
    // 0x80099DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3404(rdram, ctx);
        goto after_32;
    // 0x80099DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x80099DD0: beq         $v0, $zero, L_80099DE0
    if (ctx->r2 == 0) {
        // 0x80099DD4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80099DE0;
    }
    // 0x80099DD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099DD8: jal         0x8009337C
    // 0x80099DDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009337C(rdram, ctx);
        goto after_33;
    // 0x80099DDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_33:
L_80099DE0:
    // 0x80099DE0: jal         0x8008DAA8
    // 0x80099DE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DAA8(rdram, ctx);
        goto after_34;
    // 0x80099DE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x80099DE8: beq         $v0, $zero, L_80099E40
    if (ctx->r2 == 0) {
        // 0x80099DEC: nop
    
            goto L_80099E40;
    }
    // 0x80099DEC: nop

    // 0x80099DF0: jal         0x800A3274
    // 0x80099DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3274(rdram, ctx);
        goto after_35;
    // 0x80099DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x80099DF8: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x80099DFC: beq         $v0, $at, L_80099E40
    if (ctx->r2 == ctx->r1) {
        // 0x80099E00: nop
    
            goto L_80099E40;
    }
    // 0x80099E00: nop

    // 0x80099E04: jal         0x8008DD70
    // 0x80099E08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD70(rdram, ctx);
        goto after_36;
    // 0x80099E08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x80099E0C: bne         $v0, $zero, L_80099E40
    if (ctx->r2 != 0) {
        // 0x80099E10: nop
    
            goto L_80099E40;
    }
    // 0x80099E10: nop

    // 0x80099E14: jal         0x800A9420
    // 0x80099E18: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800A9420(rdram, ctx);
        goto after_37;
    // 0x80099E18: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_37:
    // 0x80099E1C: bne         $v0, $zero, L_80099E40
    if (ctx->r2 != 0) {
        // 0x80099E20: nop
    
            goto L_80099E40;
    }
    // 0x80099E20: nop

    // 0x80099E24: jal         0x800878A0
    // 0x80099E28: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_38;
    // 0x80099E28: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_38:
    // 0x80099E2C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80099E30: beq         $v0, $at, L_80099E40
    if (ctx->r2 == ctx->r1) {
        // 0x80099E34: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80099E40;
    }
    // 0x80099E34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80099E38: jal         0x800F7B9C
    // 0x80099E3C: addiu       $a1, $zero, 0x94
    ctx->r5 = ADD32(0, 0X94);
    func_800F7B9C(rdram, ctx);
        goto after_39;
    // 0x80099E3C: addiu       $a1, $zero, 0x94
    ctx->r5 = ADD32(0, 0X94);
    after_39:
L_80099E40:
    // 0x80099E40: b           L_8009AB48
    // 0x80099E44: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099E44: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099E48:
    // 0x80099E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099E4C: jal         0x80084CE0
    // 0x80099E50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bafpctrl_entrypoint_13(rdram, ctx);
        goto after_40;
    // 0x80099E50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_40:
    // 0x80099E54: jal         0x800A3404
    // 0x80099E58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3404(rdram, ctx);
        goto after_41;
    // 0x80099E58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_41:
    // 0x80099E5C: beq         $v0, $zero, L_80099E6C
    if (ctx->r2 == 0) {
        // 0x80099E60: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80099E6C;
    }
    // 0x80099E60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099E64: jal         0x8009337C
    // 0x80099E68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009337C(rdram, ctx);
        goto after_42;
    // 0x80099E68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_42:
L_80099E6C:
    // 0x80099E6C: jal         0x8008E124
    // 0x80099E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E124(rdram, ctx);
        goto after_43;
    // 0x80099E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_43:
    // 0x80099E74: bne         $v0, $zero, L_80099EB8
    if (ctx->r2 != 0) {
        // 0x80099E78: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80099EB8;
    }
    // 0x80099E78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099E7C: jal         0x8009E674
    // 0x80099E80: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8009E674(rdram, ctx);
        goto after_44;
    // 0x80099E80: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_44:
    // 0x80099E84: bne         $v0, $zero, L_80099EB8
    if (ctx->r2 != 0) {
        // 0x80099E88: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80099EB8;
    }
    // 0x80099E88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099E8C: jal         0x8009E674
    // 0x80099E90: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8009E674(rdram, ctx);
        goto after_45;
    // 0x80099E90: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_45:
    // 0x80099E94: bne         $v0, $zero, L_80099EB8
    if (ctx->r2 != 0) {
        // 0x80099E98: nop
    
            goto L_80099EB8;
    }
    // 0x80099E98: nop

    // 0x80099E9C: jal         0x80084C98
    // 0x80099EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_4(rdram, ctx);
        goto after_46;
    // 0x80099EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_46:
    // 0x80099EA4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80099EA8: bne         $v0, $at, L_80099EB8
    if (ctx->r2 != ctx->r1) {
        // 0x80099EAC: nop
    
            goto L_80099EB8;
    }
    // 0x80099EAC: nop

    // 0x80099EB0: jal         0x80084D10
    // 0x80099EB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_19(rdram, ctx);
        goto after_47;
    // 0x80099EB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_47:
L_80099EB8:
    // 0x80099EB8: b           L_8009AB48
    // 0x80099EBC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099EBC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099EC0:
    // 0x80099EC0: lw          $t8, 0xC0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC0);
    // 0x80099EC4: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    // 0x80099EC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099ECC: lw          $t9, 0x18($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X18);
    // 0x80099ED0: beq         $t9, $zero, L_80099EE8
    if (ctx->r25 == 0) {
        // 0x80099ED4: nop
    
            goto L_80099EE8;
    }
    // 0x80099ED4: nop

    // 0x80099ED8: jal         0x80095760
    // 0x80099EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095760(rdram, ctx);
        goto after_48;
    // 0x80099EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_48:
    // 0x80099EE0: b           L_8009AB48
    // 0x80099EE4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099EE4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099EE8:
    // 0x80099EE8: jal         0x80095774
    // 0x80099EEC: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    func_80095774(rdram, ctx);
        goto after_49;
    // 0x80099EEC: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    after_49:
    // 0x80099EF0: b           L_8009AB48
    // 0x80099EF4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099EF4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099EF8:
    // 0x80099EF8: lw          $a1, 0xC0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC0);
    // 0x80099EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099F00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80099F04: jal         0x80084888
    // 0x80099F08: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    _badrone_entrypoint_20(rdram, ctx);
        goto after_50;
    // 0x80099F08: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_50:
    // 0x80099F0C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80099F10: b           L_8009AB48
    // 0x80099F14: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099F14: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099F18:
    // 0x80099F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099F1C: jal         0x800A17A8
    // 0x80099F20: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800A17A8(rdram, ctx);
        goto after_51;
    // 0x80099F20: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_51:
    // 0x80099F24: lw          $a1, 0xC0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC0);
    // 0x80099F28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099F2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80099F30: jal         0x80084888
    // 0x80099F34: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    _badrone_entrypoint_20(rdram, ctx);
        goto after_52;
    // 0x80099F34: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_52:
    // 0x80099F38: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80099F3C: b           L_8009AB48
    // 0x80099F40: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099F40: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099F44:
    // 0x80099F44: jal         0x8008DD90
    // 0x80099F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD90(rdram, ctx);
        goto after_53;
    // 0x80099F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_53:
    // 0x80099F4C: bne         $v0, $zero, L_8009AB48
    if (ctx->r2 != 0) {
        // 0x80099F50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB48;
    }
    // 0x80099F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099F54: jal         0x800995B8
    // 0x80099F58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800995B8(rdram, ctx);
        goto after_54;
    // 0x80099F58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_54:
    // 0x80099F5C: jal         0x80084718
    // 0x80099F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badata_entrypoint_27(rdram, ctx);
        goto after_55;
    // 0x80099F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_55:
    // 0x80099F64: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80099F68: b           L_8009AB48
    // 0x80099F6C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099F6C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099F70:
    // 0x80099F70: jal         0x8008DD90
    // 0x80099F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD90(rdram, ctx);
        goto after_56;
    // 0x80099F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_56:
    // 0x80099F78: bne         $v0, $zero, L_8009AB48
    if (ctx->r2 != 0) {
        // 0x80099F7C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB48;
    }
    // 0x80099F7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099F80: jal         0x800995B8
    // 0x80099F84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800995B8(rdram, ctx);
        goto after_57;
    // 0x80099F84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_57:
    // 0x80099F88: jal         0x80084718
    // 0x80099F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badata_entrypoint_27(rdram, ctx);
        goto after_58;
    // 0x80099F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_58:
    // 0x80099F90: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80099F94: b           L_8009AB48
    // 0x80099F98: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099F98: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099F9C:
    // 0x80099F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099FA0: jal         0x800995B8
    // 0x80099FA4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800995B8(rdram, ctx);
        goto after_59;
    // 0x80099FA4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_59:
    // 0x80099FA8: jal         0x8008E35C
    // 0x80099FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_60;
    // 0x80099FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_60:
    // 0x80099FB0: beq         $v0, $zero, L_80099FD0
    if (ctx->r2 == 0) {
        // 0x80099FB4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80099FD0;
    }
    // 0x80099FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099FB8: jal         0x8009E71C
    // 0x80099FBC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8009E71C(rdram, ctx);
        goto after_61;
    // 0x80099FBC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_61:
    // 0x80099FC0: beq         $v0, $zero, L_80099FD0
    if (ctx->r2 == 0) {
        // 0x80099FC4: addiu       $s2, $zero, 0xA2
        ctx->r18 = ADD32(0, 0XA2);
            goto L_80099FD0;
    }
    // 0x80099FC4: addiu       $s2, $zero, 0xA2
    ctx->r18 = ADD32(0, 0XA2);
    // 0x80099FC8: b           L_8009AB48
    // 0x80099FCC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099FCC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099FD0:
    // 0x80099FD0: jal         0x80084718
    // 0x80099FD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badata_entrypoint_27(rdram, ctx);
        goto after_62;
    // 0x80099FD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_62:
    // 0x80099FD8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80099FDC: b           L_8009AB48
    // 0x80099FE0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099FE0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099FE4:
    // 0x80099FE4: lw          $t0, 0xC0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC0);
    // 0x80099FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80099FEC: jal         0x800845F0
    // 0x80099FF0: lw          $a1, 0x14($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X14);
    _babounce_entrypoint_7(rdram, ctx);
        goto after_63;
    // 0x80099FF0: lw          $a1, 0x14($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X14);
    after_63:
    // 0x80099FF4: b           L_8009AB48
    // 0x80099FF8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x80099FF8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80099FFC:
    // 0x80099FFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A000: jal         0x800995B8
    // 0x8009A004: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800995B8(rdram, ctx);
        goto after_64;
    // 0x8009A004: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_64:
    // 0x8009A008: lw          $a1, 0xC0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC0);
    // 0x8009A00C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A010: jal         0x80084898
    // 0x8009A014: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    _badrone_entrypoint_22(rdram, ctx);
        goto after_65;
    // 0x8009A014: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_65:
    // 0x8009A018: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A01C: b           L_8009AB48
    // 0x8009A020: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A020: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A024:
    // 0x8009A024: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    // 0x8009A028: jal         0x800F64A4
    // 0x8009A02C: addiu       $a1, $zero, 0x201
    ctx->r5 = ADD32(0, 0X201);
    func_800F64A4(rdram, ctx);
        goto after_66;
    // 0x8009A02C: addiu       $a1, $zero, 0x201
    ctx->r5 = ADD32(0, 0X201);
    after_66:
    // 0x8009A030: beq         $v0, $zero, L_8009A044
    if (ctx->r2 == 0) {
        // 0x8009A034: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009A044;
    }
    // 0x8009A034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A038: addiu       $s2, $zero, 0x120
    ctx->r18 = ADD32(0, 0X120);
    // 0x8009A03C: b           L_8009AB48
    // 0x8009A040: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A040: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A044:
    // 0x8009A044: jal         0x80099840
    // 0x8009A048: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80099840(rdram, ctx);
        goto after_67;
    // 0x8009A048: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_67:
    // 0x8009A04C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A050: b           L_8009AB48
    // 0x8009A054: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A054: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A058:
    // 0x8009A058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A05C: jal         0x80084630
    // 0x8009A060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bacough_entrypoint_4(rdram, ctx);
        goto after_68;
    // 0x8009A060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_68:
    // 0x8009A064: b           L_8009AB48
    // 0x8009A068: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A068: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A06C:
    // 0x8009A06C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A070: jal         0x80084630
    // 0x8009A074: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bacough_entrypoint_4(rdram, ctx);
        goto after_69;
    // 0x8009A074: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_69:
    // 0x8009A078: b           L_8009AB48
    // 0x8009A07C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A07C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A080:
    // 0x8009A080: addiu       $s2, $zero, 0x11F
    ctx->r18 = ADD32(0, 0X11F);
    // 0x8009A084: b           L_8009AB48
    // 0x8009A088: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A088: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A08C:
    // 0x8009A08C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A090: jal         0x800A17A8
    // 0x8009A094: addiu       $a1, $zero, -0x3E7
    ctx->r5 = ADD32(0, -0X3E7);
    func_800A17A8(rdram, ctx);
        goto after_70;
    // 0x8009A094: addiu       $a1, $zero, -0x3E7
    ctx->r5 = ADD32(0, -0X3E7);
    after_70:
L_8009A098:
    // 0x8009A098: jal         0x800997BC
    // 0x8009A09C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800997BC(rdram, ctx);
        goto after_71;
    // 0x8009A09C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_71:
    // 0x8009A0A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A0A4: jal         0x80099840
    // 0x8009A0A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80099840(rdram, ctx);
        goto after_72;
    // 0x8009A0A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_72:
    // 0x8009A0AC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A0B0: b           L_8009AB48
    // 0x8009A0B4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A0B4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A0B8:
    // 0x8009A0B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A0BC: jal         0x800A17A8
    // 0x8009A0C0: addiu       $a1, $zero, -0x3E7
    ctx->r5 = ADD32(0, -0X3E7);
    func_800A17A8(rdram, ctx);
        goto after_73;
    // 0x8009A0C0: addiu       $a1, $zero, -0x3E7
    ctx->r5 = ADD32(0, -0X3E7);
    after_73:
    // 0x8009A0C4: jal         0x80085208
    // 0x8009A0C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_1(rdram, ctx);
        goto after_74;
    // 0x8009A0C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_74:
    // 0x8009A0CC: jal         0x80085200
    // 0x8009A0D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_0(rdram, ctx);
        goto after_75;
    // 0x8009A0D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_75:
    // 0x8009A0D4: b           L_8009AB48
    // 0x8009A0D8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A0D8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A0DC:
    // 0x8009A0DC: jal         0x8009F354
    // 0x8009A0E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F354(rdram, ctx);
        goto after_76;
    // 0x8009A0E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_76:
    // 0x8009A0E4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A0E8: b           L_8009AB48
    // 0x8009A0EC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A0EC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A0F0:
    // 0x8009A0F0: addiu       $s2, $zero, 0x54
    ctx->r18 = ADD32(0, 0X54);
    // 0x8009A0F4: b           L_8009AB48
    // 0x8009A0F8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A0F8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A0FC:
    // 0x8009A0FC: jal         0x800844E0
    // 0x8009A100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bababykaz_entrypoint_14(rdram, ctx);
        goto after_77;
    // 0x8009A100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_77:
    // 0x8009A104: b           L_8009AB48
    // 0x8009A108: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A108: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A10C:
    // 0x8009A10C: jal         0x80084880
    // 0x8009A110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_19(rdram, ctx);
        goto after_78;
    // 0x8009A110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_78:
    // 0x8009A114: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A118: b           L_8009AB48
    // 0x8009A11C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A11C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A120:
    // 0x8009A120: lw          $a1, 0xC0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC0);
    // 0x8009A124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A128: jal         0x80084990
    // 0x8009A12C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    _baduo_entrypoint_15(rdram, ctx);
        goto after_79;
    // 0x8009A12C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_79:
    // 0x8009A130: b           L_8009AB48
    // 0x8009A134: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A134: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A138:
    // 0x8009A138: lw          $a1, 0xC0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC0);
    // 0x8009A13C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A140: jal         0x800849A0
    // 0x8009A144: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    _baduo_entrypoint_17(rdram, ctx);
        goto after_80;
    // 0x8009A144: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_80:
    // 0x8009A148: b           L_8009AB48
    // 0x8009A14C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A14C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A150:
    // 0x8009A150: lw          $a1, 0xC0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC0);
    // 0x8009A154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A158: jal         0x800849A8
    // 0x8009A15C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    _baduo_entrypoint_18(rdram, ctx);
        goto after_81;
    // 0x8009A15C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_81:
    // 0x8009A160: b           L_8009AB48
    // 0x8009A164: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A164: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A168:
    // 0x8009A168: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
    // 0x8009A16C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A170: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x8009A174: jal         0x800849B8
    // 0x8009A178: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    _baduo_entrypoint_20(rdram, ctx);
        goto after_82;
    // 0x8009A178: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    after_82:
    // 0x8009A17C: b           L_8009AB48
    // 0x8009A180: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A180: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A184:
    // 0x8009A184: lw          $t1, 0xC0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC0);
    // 0x8009A188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A18C: jal         0x80094430
    // 0x8009A190: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    func_80094430(rdram, ctx);
        goto after_83;
    // 0x8009A190: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    after_83:
    // 0x8009A194: b           L_8009AB48
    // 0x8009A198: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A198: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A19C:
    // 0x8009A19C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A1A0: jal         0x80095760
    // 0x8009A1A4: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    func_80095760(rdram, ctx);
        goto after_84;
    // 0x8009A1A4: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    after_84:
    // 0x8009A1A8: lw          $t2, 0xC0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC0);
    // 0x8009A1AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A1B0: jal         0x80085038
    // 0x8009A1B4: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    _bashoes_entrypoint_12(rdram, ctx);
        goto after_85;
    // 0x8009A1B4: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    after_85:
    // 0x8009A1B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A1BC: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x8009A1C0: jal         0x8009CA70
    // 0x8009A1C4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8009CA70(rdram, ctx);
        goto after_86;
    // 0x8009A1C4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_86:
    // 0x8009A1C8: bne         $v0, $zero, L_8009A1DC
    if (ctx->r2 != 0) {
        // 0x8009A1CC: nop
    
            goto L_8009A1DC;
    }
    // 0x8009A1CC: nop

    // 0x8009A1D0: jal         0x8009F354
    // 0x8009A1D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F354(rdram, ctx);
        goto after_87;
    // 0x8009A1D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_87:
    // 0x8009A1D8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8009A1DC:
    // 0x8009A1DC: b           L_8009AB48
    // 0x8009A1E0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A1E0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A1E4:
    // 0x8009A1E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A1E8: jal         0x80095760
    // 0x8009A1EC: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    func_80095760(rdram, ctx);
        goto after_88;
    // 0x8009A1EC: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    after_88:
    // 0x8009A1F0: lw          $t3, 0xC0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC0);
    // 0x8009A1F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A1F8: jal         0x80085038
    // 0x8009A1FC: lw          $a1, 0x0($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X0);
    _bashoes_entrypoint_12(rdram, ctx);
        goto after_89;
    // 0x8009A1FC: lw          $a1, 0x0($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X0);
    after_89:
    // 0x8009A200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A204: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x8009A208: jal         0x8009CA70
    // 0x8009A20C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8009CA70(rdram, ctx);
        goto after_90;
    // 0x8009A20C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_90:
    // 0x8009A210: bne         $v0, $zero, L_8009A224
    if (ctx->r2 != 0) {
        // 0x8009A214: nop
    
            goto L_8009A224;
    }
    // 0x8009A214: nop

    // 0x8009A218: jal         0x8009F354
    // 0x8009A21C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F354(rdram, ctx);
        goto after_91;
    // 0x8009A21C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_91:
    // 0x8009A220: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8009A224:
    // 0x8009A224: b           L_8009AB48
    // 0x8009A228: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A228: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A22C:
    // 0x8009A22C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A230: jal         0x80095760
    // 0x8009A234: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80095760(rdram, ctx);
        goto after_92;
    // 0x8009A234: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_92:
    // 0x8009A238: lw          $t4, 0xC0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC0);
    // 0x8009A23C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A240: jal         0x80085038
    // 0x8009A244: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    _bashoes_entrypoint_12(rdram, ctx);
        goto after_93;
    // 0x8009A244: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    after_93:
    // 0x8009A248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A24C: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x8009A250: jal         0x8009CA70
    // 0x8009A254: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8009CA70(rdram, ctx);
        goto after_94;
    // 0x8009A254: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_94:
    // 0x8009A258: bne         $v0, $zero, L_8009A26C
    if (ctx->r2 != 0) {
        // 0x8009A25C: nop
    
            goto L_8009A26C;
    }
    // 0x8009A25C: nop

    // 0x8009A260: jal         0x8009F354
    // 0x8009A264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F354(rdram, ctx);
        goto after_95;
    // 0x8009A264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_95:
    // 0x8009A268: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8009A26C:
    // 0x8009A26C: b           L_8009AB48
    // 0x8009A270: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A270: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A274:
    // 0x8009A274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A278: jal         0x80095760
    // 0x8009A27C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80095760(rdram, ctx);
        goto after_96;
    // 0x8009A27C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_96:
    // 0x8009A280: lw          $t5, 0xC0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC0);
    // 0x8009A284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A288: jal         0x800A391C
    // 0x8009A28C: lw          $a1, 0x0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X0);
    func_800A391C(rdram, ctx);
        goto after_97;
    // 0x8009A28C: lw          $a1, 0x0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X0);
    after_97:
    // 0x8009A290: jal         0x8009F354
    // 0x8009A294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F354(rdram, ctx);
        goto after_98;
    // 0x8009A294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_98:
    // 0x8009A298: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A29C: b           L_8009AB48
    // 0x8009A2A0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A2A0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A2A4:
    // 0x8009A2A4: jal         0x80099A4C
    // 0x8009A2A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099A4C(rdram, ctx);
        goto after_99;
    // 0x8009A2A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_99:
    // 0x8009A2AC: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x8009A2B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8009A2B4: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x8009A2B8: jal         0x8008A3A8
    // 0x8009A2BC: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    _suegg_entrypoint_6(rdram, ctx);
        goto after_100;
    // 0x8009A2BC: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_100:
    // 0x8009A2C0: jal         0x800883F0
    // 0x8009A2C4: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    _gcegg_entrypoint_7(rdram, ctx);
        goto after_101;
    // 0x8009A2C4: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    after_101:
    // 0x8009A2C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A2CC: jal         0x8009AD20
    // 0x8009A2D0: addiu       $a1, $v0, 0x2
    ctx->r5 = ADD32(ctx->r2, 0X2);
    func_8009AD20(rdram, ctx);
        goto after_102;
    // 0x8009A2D0: addiu       $a1, $v0, 0x2
    ctx->r5 = ADD32(ctx->r2, 0X2);
    after_102:
    // 0x8009A2D4: jal         0x8009BD44
    // 0x8009A2D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BD44(rdram, ctx);
        goto after_103;
    // 0x8009A2D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_103:
    // 0x8009A2DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8009A2E0: beql        $v0, $at, L_8009AB4C
    if (ctx->r2 == ctx->r1) {
        // 0x8009A2E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB4C;
    }
    goto skip_0;
    // 0x8009A2E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8009A2E8: jal         0x8008DD90
    // 0x8009A2EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD90(rdram, ctx);
        goto after_104;
    // 0x8009A2EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_104:
    // 0x8009A2F0: bne         $v0, $zero, L_8009AB48
    if (ctx->r2 != 0) {
        // 0x8009A2F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB48;
    }
    // 0x8009A2F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A2F8: jal         0x800995B8
    // 0x8009A2FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800995B8(rdram, ctx);
        goto after_105;
    // 0x8009A2FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_105:
    // 0x8009A300: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8009A304: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x8009A308: jal         0x8010114C
    // 0x8009A30C: lw          $a2, 0x184($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X184);
    func_8010114C(rdram, ctx);
        goto after_106;
    // 0x8009A30C: lw          $a2, 0x184($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X184);
    after_106:
    // 0x8009A310: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009A314: beq         $v0, $at, L_8009A324
    if (ctx->r2 == ctx->r1) {
        // 0x8009A318: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009A324;
    }
    // 0x8009A318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A31C: jal         0x800A17A8
    // 0x8009A320: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800A17A8(rdram, ctx);
        goto after_107;
    // 0x8009A320: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_107:
L_8009A324:
    // 0x8009A324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A328: jal         0x80099840
    // 0x8009A32C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80099840(rdram, ctx);
        goto after_108;
    // 0x8009A32C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_108:
    // 0x8009A330: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A334: b           L_8009AB48
    // 0x8009A338: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A338: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A33C:
    // 0x8009A33C: jal         0x8009BD44
    // 0x8009A340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BD44(rdram, ctx);
        goto after_109;
    // 0x8009A340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_109:
    // 0x8009A344: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8009A348: beql        $v0, $at, L_8009AB4C
    if (ctx->r2 == ctx->r1) {
        // 0x8009A34C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB4C;
    }
    goto skip_1;
    // 0x8009A34C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x8009A350: jal         0x8008DD90
    // 0x8009A354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD90(rdram, ctx);
        goto after_110;
    // 0x8009A354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_110:
    // 0x8009A358: bnel        $v0, $zero, L_8009AB4C
    if (ctx->r2 != 0) {
        // 0x8009A35C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB4C;
    }
    goto skip_2;
    // 0x8009A35C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x8009A360: jal         0x8008E974
    // 0x8009A364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E974(rdram, ctx);
        goto after_111;
    // 0x8009A364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_111:
    // 0x8009A368: beq         $v0, $zero, L_8009AB48
    if (ctx->r2 == 0) {
        // 0x8009A36C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB48;
    }
L_8009A36C:
    // 0x8009A36C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A370: jal         0x800995B8
    // 0x8009A374: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800995B8(rdram, ctx);
        goto after_112;
    // 0x8009A374: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_112:
    // 0x8009A378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A37C: jal         0x800A17A8
    // 0x8009A380: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800A17A8(rdram, ctx);
        goto after_113;
    // 0x8009A380: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_113:
    // 0x8009A384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A388: jal         0x80099840
    // 0x8009A38C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80099840(rdram, ctx);
        goto after_114;
    // 0x8009A38C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_114:
    // 0x8009A390: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A394: b           L_8009AB48
    // 0x8009A398: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A398: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A39C:
    // 0x8009A39C: jal         0x8009BD44
    // 0x8009A3A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BD44(rdram, ctx);
        goto after_115;
    // 0x8009A3A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_115:
    // 0x8009A3A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8009A3A8: beql        $v0, $at, L_8009AB4C
    if (ctx->r2 == ctx->r1) {
        // 0x8009A3AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB4C;
    }
    goto skip_3;
    // 0x8009A3AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x8009A3B0: jal         0x8008DD90
    // 0x8009A3B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD90(rdram, ctx);
        goto after_116;
    // 0x8009A3B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_116:
    // 0x8009A3B8: bne         $v0, $zero, L_8009AB48
    if (ctx->r2 != 0) {
        // 0x8009A3BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB48;
    }
L_8009A3BC:
    // 0x8009A3BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A3C0: jal         0x800995B8
    // 0x8009A3C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800995B8(rdram, ctx);
        goto after_117;
    // 0x8009A3C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_117:
    // 0x8009A3C8: lw          $t6, 0xC0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC0);
    // 0x8009A3CC: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x8009A3D0: lw          $a2, 0x184($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X184);
    // 0x8009A3D4: jal         0x8010114C
    // 0x8009A3D8: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    func_8010114C(rdram, ctx);
        goto after_118;
    // 0x8009A3D8: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    after_118:
    // 0x8009A3DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009A3E0: beq         $v0, $at, L_8009A3F0
    if (ctx->r2 == ctx->r1) {
        // 0x8009A3E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009A3F0;
    }
    // 0x8009A3E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A3E8: jal         0x800A17A8
    // 0x8009A3EC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800A17A8(rdram, ctx);
        goto after_119;
    // 0x8009A3EC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_119:
L_8009A3F0:
    // 0x8009A3F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A3F4: jal         0x80099840
    // 0x8009A3F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80099840(rdram, ctx);
        goto after_120;
    // 0x8009A3F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_120:
    // 0x8009A3FC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A400: b           L_8009AB48
    // 0x8009A404: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A404: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A408:
    // 0x8009A408: jal         0x8009BD44
    // 0x8009A40C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BD44(rdram, ctx);
        goto after_121;
    // 0x8009A40C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_121:
    // 0x8009A410: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8009A414: beq         $v0, $at, L_8009AB48
    if (ctx->r2 == ctx->r1) {
        // 0x8009A418: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB48;
    }
    // 0x8009A418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A41C: jal         0x800995B8
    // 0x8009A420: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800995B8(rdram, ctx);
        goto after_122;
    // 0x8009A420: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_122:
    // 0x8009A424: jal         0x80099A58
    // 0x8009A428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099A58(rdram, ctx);
        goto after_123;
    // 0x8009A428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_123:
    // 0x8009A42C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A430: jal         0x800A17A8
    // 0x8009A434: negu        $a1, $v0
    ctx->r5 = SUB32(0, ctx->r2);
    func_800A17A8(rdram, ctx);
        goto after_124;
    // 0x8009A434: negu        $a1, $v0
    ctx->r5 = SUB32(0, ctx->r2);
    after_124:
    // 0x8009A438: lw          $t7, 0x158($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X158);
    // 0x8009A43C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A440: beq         $t7, $zero, L_8009A4B4
    if (ctx->r15 == 0) {
        // 0x8009A444: nop
    
            goto L_8009A4B4;
    }
    // 0x8009A444: nop

    // 0x8009A448: jal         0x800A1718
    // 0x8009A44C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1718(rdram, ctx);
        goto after_125;
    // 0x8009A44C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_125:
    // 0x8009A450: bne         $v0, $zero, L_8009A478
    if (ctx->r2 != 0) {
        // 0x8009A454: nop
    
            goto L_8009A478;
    }
    // 0x8009A454: nop

    // 0x8009A458: jal         0x80099A70
    // 0x8009A45C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099A70(rdram, ctx);
        goto after_126;
    // 0x8009A45C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_126:
    // 0x8009A460: lw          $t8, 0x184($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X184);
    // 0x8009A464: addiu       $a0, $zero, 0x2C4
    ctx->r4 = ADD32(0, 0X2C4);
    // 0x8009A468: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x8009A46C: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8009A470: jal         0x80101180
    // 0x8009A474: or          $a2, $v0, $t9
    ctx->r6 = ctx->r2 | ctx->r25;
    func_80101180(rdram, ctx);
        goto after_127;
    // 0x8009A474: or          $a2, $v0, $t9
    ctx->r6 = ctx->r2 | ctx->r25;
    after_127:
L_8009A478:
    // 0x8009A478: jal         0x800A3274
    // 0x8009A47C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3274(rdram, ctx);
        goto after_128;
    // 0x8009A47C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_128:
    // 0x8009A480: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8009A484: bne         $v0, $at, L_8009A4A0
    if (ctx->r2 != ctx->r1) {
        // 0x8009A488: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009A4A0;
    }
    // 0x8009A488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A48C: jal         0x80084710
    // 0x8009A490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badata_entrypoint_26(rdram, ctx);
        goto after_129;
    // 0x8009A490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_129:
    // 0x8009A494: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A498: b           L_8009AB48
    // 0x8009A49C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A49C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A4A0:
    // 0x8009A4A0: jal         0x80099840
    // 0x8009A4A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80099840(rdram, ctx);
        goto after_130;
    // 0x8009A4A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_130:
    // 0x8009A4A8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A4AC: b           L_8009AB48
    // 0x8009A4B0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A4B0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A4B4:
    // 0x8009A4B4: jal         0x80099840
    // 0x8009A4B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80099840(rdram, ctx);
        goto after_131;
    // 0x8009A4B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_131:
    // 0x8009A4BC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A4C0: b           L_8009AB48
    // 0x8009A4C4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A4C4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A4C8:
    // 0x8009A4C8: jal         0x8009BD44
    // 0x8009A4CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BD44(rdram, ctx);
        goto after_132;
    // 0x8009A4CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_132:
    // 0x8009A4D0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8009A4D4: beq         $v0, $at, L_8009AB48
    if (ctx->r2 == ctx->r1) {
        // 0x8009A4D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB48;
    }
    // 0x8009A4D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A4DC: jal         0x800995B8
    // 0x8009A4E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800995B8(rdram, ctx);
        goto after_133;
    // 0x8009A4E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_133:
    // 0x8009A4E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A4E8: jal         0x800A17A8
    // 0x8009A4EC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800A17A8(rdram, ctx);
        goto after_134;
    // 0x8009A4EC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_134:
    // 0x8009A4F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A4F4: jal         0x80099840
    // 0x8009A4F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80099840(rdram, ctx);
        goto after_135;
    // 0x8009A4F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_135:
    // 0x8009A4FC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A500: b           L_8009AB48
    // 0x8009A504: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A504: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A508:
    // 0x8009A508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A50C: jal         0x800995B8
    // 0x8009A510: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800995B8(rdram, ctx);
        goto after_136;
    // 0x8009A510: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_136:
    // 0x8009A514: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A518: jal         0x800A17A8
    // 0x8009A51C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800A17A8(rdram, ctx);
        goto after_137;
    // 0x8009A51C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_137:
    // 0x8009A520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A524: jal         0x80099840
    // 0x8009A528: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80099840(rdram, ctx);
        goto after_138;
    // 0x8009A528: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_138:
    // 0x8009A52C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A530: b           L_8009AB48
    // 0x8009A534: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A534: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A538:
    // 0x8009A538: jal         0x80084890
    // 0x8009A53C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_21(rdram, ctx);
        goto after_139;
    // 0x8009A53C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_139:
    // 0x8009A540: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A544: b           L_8009AB48
    // 0x8009A548: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A548: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A54C:
    // 0x8009A54C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A550: jal         0x80084970
    // 0x8009A554: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _baduo_entrypoint_11(rdram, ctx);
        goto after_140;
    // 0x8009A554: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_140:
    // 0x8009A558: b           L_8009AB48
    // 0x8009A55C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A55C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A560:
    // 0x8009A560: lw          $t0, 0xC0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC0);
    // 0x8009A564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A568: jal         0x800A3970
    // 0x8009A56C: lw          $a1, 0x18($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X18);
    func_800A3970(rdram, ctx);
        goto after_141;
    // 0x8009A56C: lw          $a1, 0x18($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X18);
    after_141:
    // 0x8009A570: beql        $v0, $zero, L_8009AB4C
    if (ctx->r2 == 0) {
        // 0x8009A574: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB4C;
    }
    goto skip_4;
    // 0x8009A574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_4:
    // 0x8009A578: b           L_8009AB48
    // 0x8009A57C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A57C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A580:
    // 0x8009A580: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
    // 0x8009A584: b           L_8009AB48
    // 0x8009A588: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A588: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A58C:
    // 0x8009A58C: jal         0x800F911C
    // 0x8009A590: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800F911C(rdram, ctx);
        goto after_142;
    // 0x8009A590: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_142:
    // 0x8009A594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A598: jal         0x80084950
    // 0x8009A59C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _baduo_entrypoint_7(rdram, ctx);
        goto after_143;
    // 0x8009A59C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_143:
    // 0x8009A5A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A5A4: jal         0x800A0CF4
    // 0x8009A5A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_144;
    // 0x8009A5A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_144:
    // 0x8009A5AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A5B0: jal         0x800A3410
    // 0x8009A5B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A3410(rdram, ctx);
        goto after_145;
    // 0x8009A5B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_145:
    // 0x8009A5B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A5BC: jal         0x800A3904
    // 0x8009A5C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A3904(rdram, ctx);
        goto after_146;
    // 0x8009A5C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_146:
    // 0x8009A5C4: b           L_8009AB4C
    // 0x8009A5C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8009AB4C;
    // 0x8009A5C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8009A5CC:
    // 0x8009A5CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A5D0: jal         0x80095760
    // 0x8009A5D4: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    func_80095760(rdram, ctx);
        goto after_147;
    // 0x8009A5D4: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_147:
    // 0x8009A5D8: jal         0x8009F354
    // 0x8009A5DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F354(rdram, ctx);
        goto after_148;
    // 0x8009A5DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_148:
    // 0x8009A5E0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A5E4: b           L_8009AB48
    // 0x8009A5E8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A5E8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A5EC:
    // 0x8009A5EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A5F0: jal         0x80084968
    // 0x8009A5F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _baduo_entrypoint_10(rdram, ctx);
        goto after_149;
    // 0x8009A5F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_149:
    // 0x8009A5F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A5FC: jal         0x80084970
    // 0x8009A600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _baduo_entrypoint_11(rdram, ctx);
        goto after_150;
    // 0x8009A600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_150:
    // 0x8009A604: b           L_8009AB48
    // 0x8009A608: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A608: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A60C:
    // 0x8009A60C: jal         0x8008E23C
    // 0x8009A610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E23C(rdram, ctx);
        goto after_151;
    // 0x8009A610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_151:
    // 0x8009A614: beq         $v0, $zero, L_8009A62C
    if (ctx->r2 == 0) {
        // 0x8009A618: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009A62C;
    }
    // 0x8009A618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A61C: jal         0x80084970
    // 0x8009A620: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _baduo_entrypoint_11(rdram, ctx);
        goto after_152;
    // 0x8009A620: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_152:
    // 0x8009A624: b           L_8009AB48
    // 0x8009A628: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A628: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A62C:
    // 0x8009A62C: lw          $a1, 0xC0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC0);
    // 0x8009A630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A634: jal         0x80084958
    // 0x8009A638: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    _baduo_entrypoint_8(rdram, ctx);
        goto after_153;
    // 0x8009A638: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_153:
    // 0x8009A63C: lw          $t1, 0xC0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC0);
    // 0x8009A640: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8009A644: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009A648: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8009A64C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A650: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8009A654: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8009A658: jal         0x80084960
    // 0x8009A65C: nop

    _baduo_entrypoint_9(rdram, ctx);
        goto after_154;
    // 0x8009A65C: nop

    after_154:
    // 0x8009A660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A664: jal         0x80084968
    // 0x8009A668: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _baduo_entrypoint_10(rdram, ctx);
        goto after_155;
    // 0x8009A668: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_155:
    // 0x8009A66C: b           L_8009AB48
    // 0x8009A670: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A670: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A674:
    // 0x8009A674: jal         0x8008E23C
    // 0x8009A678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E23C(rdram, ctx);
        goto after_156;
    // 0x8009A678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_156:
    // 0x8009A67C: beq         $v0, $zero, L_8009AB48
    if (ctx->r2 == 0) {
        // 0x8009A680: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB48;
    }
    // 0x8009A680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A684: jal         0x80084970
    // 0x8009A688: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _baduo_entrypoint_11(rdram, ctx);
        goto after_157;
    // 0x8009A688: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_157:
    // 0x8009A68C: lw          $a1, 0xC0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC0);
    // 0x8009A690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A694: jal         0x80084958
    // 0x8009A698: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    _baduo_entrypoint_8(rdram, ctx);
        goto after_158;
    // 0x8009A698: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_158:
    // 0x8009A69C: b           L_8009AB48
    // 0x8009A6A0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A6A0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A6A4:
    // 0x8009A6A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A6A8: jal         0x80084970
    // 0x8009A6AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _baduo_entrypoint_11(rdram, ctx);
        goto after_159;
    // 0x8009A6AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_159:
    // 0x8009A6B0: b           L_8009AB48
    // 0x8009A6B4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A6B4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A6B8:
    // 0x8009A6B8: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x8009A6BC: jal         0x8009EC08
    // 0x8009A6C0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8009EC08(rdram, ctx);
        goto after_160;
    // 0x8009A6C0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_160:
    // 0x8009A6C4: jal         0x80099A58
    // 0x8009A6C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099A58(rdram, ctx);
        goto after_161;
    // 0x8009A6C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_161:
    // 0x8009A6CC: sh          $v0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r2;
    // 0x8009A6D0: jal         0x80099A64
    // 0x8009A6D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099A64(rdram, ctx);
        goto after_162;
    // 0x8009A6D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_162:
    // 0x8009A6D8: lh          $t2, 0x3C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X3C);
    // 0x8009A6DC: lh          $t3, 0x3E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X3E);
    // 0x8009A6E0: sh          $v0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r2;
    // 0x8009A6E4: lh          $t4, 0x38($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X38);
    // 0x8009A6E8: bne         $t2, $t3, L_8009A6FC
    if (ctx->r10 != ctx->r11) {
        // 0x8009A6EC: sll         $t5, $v0, 16
        ctx->r13 = S32(ctx->r2 << 16);
            goto L_8009A6FC;
    }
    // 0x8009A6EC: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x8009A6F0: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8009A6F4: beq         $t4, $t6, L_8009A708
    if (ctx->r12 == ctx->r14) {
        // 0x8009A6F8: nop
    
            goto L_8009A708;
    }
    // 0x8009A6F8: nop

L_8009A6FC:
    // 0x8009A6FC: lh          $a0, 0x3E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3E);
    // 0x8009A700: jal         0x8009EB24
    // 0x8009A704: lh          $a1, 0x3A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3A);
    func_8009EB24(rdram, ctx);
        goto after_163;
    // 0x8009A704: lh          $a1, 0x3A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3A);
    after_163:
L_8009A708:
    // 0x8009A708: b           L_8009AB48
    // 0x8009A70C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A70C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A710:
    // 0x8009A710: jal         0x8009EBD0
    // 0x8009A714: nop

    func_8009EBD0(rdram, ctx);
        goto after_164;
    // 0x8009A714: nop

    after_164:
    // 0x8009A718: b           L_8009AB48
    // 0x8009A71C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A71C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A720:
    // 0x8009A720: jal         0x800A05DC
    // 0x8009A724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A05DC(rdram, ctx);
        goto after_165;
    // 0x8009A724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_165:
    // 0x8009A728: b           L_8009AB48
    // 0x8009A72C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A72C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A730:
    // 0x8009A730: jal         0x80099B54
    // 0x8009A734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099B54(rdram, ctx);
        goto after_166;
    // 0x8009A734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_166:
    // 0x8009A738: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A73C: b           L_8009AB48
    // 0x8009A740: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A740: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A744:
    // 0x8009A744: jal         0x800848B8
    // 0x8009A748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_26(rdram, ctx);
        goto after_167;
    // 0x8009A748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_167:
    // 0x8009A74C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A750: b           L_8009AB48
    // 0x8009A754: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A754: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A758:
    // 0x8009A758: jal         0x8008FD48
    // 0x8009A75C: nop

    func_8008FD48(rdram, ctx);
        goto after_168;
    // 0x8009A75C: nop

    after_168:
    // 0x8009A760: xori        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 ^ 0X1;
    // 0x8009A764: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8009A768: sltiu       $a1, $v1, 0x1
    ctx->r5 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8009A76C: beq         $a1, $zero, L_8009A780
    if (ctx->r5 == 0) {
        // 0x8009A770: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009A780;
    }
    // 0x8009A770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A774: xori        $a1, $v0, 0xA
    ctx->r5 = ctx->r2 ^ 0XA;
    // 0x8009A778: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x8009A77C: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
L_8009A780:
    // 0x8009A780: jal         0x8009CC68
    // 0x8009A784: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_8009CC68(rdram, ctx);
        goto after_169;
    // 0x8009A784: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_169:
    // 0x8009A788: bne         $v0, $zero, L_8009AB48
    if (ctx->r2 != 0) {
        // 0x8009A78C: lw          $a1, 0x2C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X2C);
            goto L_8009AB48;
    }
    // 0x8009A78C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8009A790: bne         $a1, $zero, L_8009AB48
    if (ctx->r5 != 0) {
        // 0x8009A794: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB48;
    }
    // 0x8009A794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A798: jal         0x80095738
    // 0x8009A79C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095738(rdram, ctx);
        goto after_170;
    // 0x8009A79C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_170:
    // 0x8009A7A0: bnel        $v0, $zero, L_8009AB4C
    if (ctx->r2 != 0) {
        // 0x8009A7A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB4C;
    }
    goto skip_5;
    // 0x8009A7A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_5:
    // 0x8009A7A8: jal         0x8008E078
    // 0x8009A7AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_171;
    // 0x8009A7AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_171:
    // 0x8009A7B0: bnel        $v0, $zero, L_8009AB4C
    if (ctx->r2 != 0) {
        // 0x8009A7B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB4C;
    }
    goto skip_6;
    // 0x8009A7B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_6:
    // 0x8009A7B8: addiu       $s2, $zero, 0x4F
    ctx->r18 = ADD32(0, 0X4F);
    // 0x8009A7BC: b           L_8009AB48
    // 0x8009A7C0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A7C0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A7C4:
    // 0x8009A7C4: jal         0x800849B0
    // 0x8009A7C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baduo_entrypoint_19(rdram, ctx);
        goto after_172;
    // 0x8009A7C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_172:
    // 0x8009A7CC: b           L_8009AB48
    // 0x8009A7D0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A7D0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A7D4:
    // 0x8009A7D4: jal         0x8008D630
    // 0x8009A7D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D630(rdram, ctx);
        goto after_173;
    // 0x8009A7D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_173:
    // 0x8009A7DC: beq         $v0, $zero, L_8009AB48
    if (ctx->r2 == 0) {
        // 0x8009A7E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB48;
    }
    // 0x8009A7E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A7E4: jal         0x80084728
    // 0x8009A7E8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    _badata_entrypoint_29(rdram, ctx);
        goto after_174;
    // 0x8009A7E8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    after_174:
    // 0x8009A7EC: b           L_8009AB48
    // 0x8009A7F0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_8009AB48;
    // 0x8009A7F0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8009A7F4:
    // 0x8009A7F4: jal         0x8008D630
    // 0x8009A7F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D630(rdram, ctx);
        goto after_175;
    // 0x8009A7F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_175:
    // 0x8009A7FC: beq         $v0, $zero, L_8009AB48
    if (ctx->r2 == 0) {
        // 0x8009A800: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB48;
    }
    // 0x8009A800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A804: jal         0x80084738
    // 0x8009A808: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    _badata_entrypoint_31(rdram, ctx);
        goto after_176;
    // 0x8009A808: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    after_176:
    // 0x8009A80C: b           L_8009AB48
    // 0x8009A810: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_8009AB48;
    // 0x8009A810: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8009A814:
    // 0x8009A814: jal         0x8008D630
    // 0x8009A818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D630(rdram, ctx);
        goto after_177;
    // 0x8009A818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_177:
    // 0x8009A81C: beq         $v0, $zero, L_8009AB48
    if (ctx->r2 == 0) {
        // 0x8009A820: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AB48;
    }
    // 0x8009A820: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A824: jal         0x80084740
    // 0x8009A828: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    _badata_entrypoint_32(rdram, ctx);
        goto after_178;
    // 0x8009A828: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    after_178:
    // 0x8009A82C: b           L_8009AB48
    // 0x8009A830: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_8009AB48;
    // 0x8009A830: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8009A834:
    // 0x8009A834: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x8009A838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A83C: jal         0x8009CBDC
    // 0x8009A840: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    func_8009CBDC(rdram, ctx);
        goto after_179;
    // 0x8009A840: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    after_179:
    // 0x8009A844: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8009A848: bne         $v0, $at, L_8009A858
    if (ctx->r2 != ctx->r1) {
        // 0x8009A84C: nop
    
            goto L_8009A858;
    }
    // 0x8009A84C: nop

    // 0x8009A850: b           L_8009A8BC
    // 0x8009A854: addiu       $s2, $zero, 0x24
    ctx->r18 = ADD32(0, 0X24);
        goto L_8009A8BC;
    // 0x8009A854: addiu       $s2, $zero, 0x24
    ctx->r18 = ADD32(0, 0X24);
L_8009A858:
    // 0x8009A858: jal         0x800F40EC
    // 0x8009A85C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F40EC(rdram, ctx);
        goto after_180;
    // 0x8009A85C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_180:
    // 0x8009A860: beq         $v0, $zero, L_8009A890
    if (ctx->r2 == 0) {
        // 0x8009A864: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8009A890;
    }
    // 0x8009A864: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009A868: beq         $v0, $at, L_8009A880
    if (ctx->r2 == ctx->r1) {
        // 0x8009A86C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8009A880;
    }
    // 0x8009A86C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009A870: beq         $v0, $at, L_8009A888
    if (ctx->r2 == ctx->r1) {
        // 0x8009A874: nop
    
            goto L_8009A888;
    }
    // 0x8009A874: nop

    // 0x8009A878: b           L_8009A8C0
    // 0x8009A87C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8009A8C0;
    // 0x8009A87C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8009A880:
    // 0x8009A880: b           L_8009A8BC
    // 0x8009A884: addiu       $s2, $zero, 0x2D
    ctx->r18 = ADD32(0, 0X2D);
        goto L_8009A8BC;
    // 0x8009A884: addiu       $s2, $zero, 0x2D
    ctx->r18 = ADD32(0, 0X2D);
L_8009A888:
    // 0x8009A888: b           L_8009A8BC
    // 0x8009A88C: addiu       $s2, $zero, 0x2B
    ctx->r18 = ADD32(0, 0X2B);
        goto L_8009A8BC;
    // 0x8009A88C: addiu       $s2, $zero, 0x2B
    ctx->r18 = ADD32(0, 0X2B);
L_8009A890:
    // 0x8009A890: jal         0x8008E078
    // 0x8009A894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_181;
    // 0x8009A894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_181:
    // 0x8009A898: beq         $v0, $zero, L_8009A8B0
    if (ctx->r2 == 0) {
        // 0x8009A89C: nop
    
            goto L_8009A8B0;
    }
    // 0x8009A89C: nop

    // 0x8009A8A0: jal         0x80084750
    // 0x8009A8A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badata_entrypoint_34(rdram, ctx);
        goto after_182;
    // 0x8009A8A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_182:
    // 0x8009A8A8: b           L_8009A8BC
    // 0x8009A8AC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_8009A8BC;
    // 0x8009A8AC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8009A8B0:
    // 0x8009A8B0: jal         0x80084700
    // 0x8009A8B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badata_entrypoint_24(rdram, ctx);
        goto after_183;
    // 0x8009A8B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_183:
    // 0x8009A8B8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8009A8BC:
    // 0x8009A8BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8009A8C0:
    // 0x8009A8C0: jal         0x8009B9B0
    // 0x8009A8C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_184;
    // 0x8009A8C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_184:
    // 0x8009A8C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A8CC: jal         0x8009BA9C
    // 0x8009A8D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_185;
    // 0x8009A8D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_185:
    // 0x8009A8D4: b           L_8009AB4C
    // 0x8009A8D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8009AB4C;
    // 0x8009A8D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8009A8DC:
    // 0x8009A8DC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x8009A8E0: jal         0x80084740
    // 0x8009A8E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badata_entrypoint_32(rdram, ctx);
        goto after_186;
    // 0x8009A8E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_186:
    // 0x8009A8E8: b           L_8009AB48
    // 0x8009A8EC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_8009AB48;
    // 0x8009A8EC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8009A8F0:
    // 0x8009A8F0: jal         0x80084D10
    // 0x8009A8F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_19(rdram, ctx);
        goto after_187;
    // 0x8009A8F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_187:
    // 0x8009A8F8: b           L_8009AB48
    // 0x8009A8FC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A8FC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A900:
    // 0x8009A900: lw          $t7, 0xC0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC0);
    // 0x8009A904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A908: jal         0x80094574
    // 0x8009A90C: lw          $a1, 0x18($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X18);
    func_80094574(rdram, ctx);
        goto after_188;
    // 0x8009A90C: lw          $a1, 0x18($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X18);
    after_188:
    // 0x8009A910: b           L_8009AB48
    // 0x8009A914: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A914: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A918:
    // 0x8009A918: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x8009A91C: b           L_8009AB48
    // 0x8009A920: addiu       $s2, $zero, 0xB5
    ctx->r18 = ADD32(0, 0XB5);
        goto L_8009AB48;
    // 0x8009A920: addiu       $s2, $zero, 0xB5
    ctx->r18 = ADD32(0, 0XB5);
L_8009A924:
    // 0x8009A924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A928: jal         0x800850C8
    // 0x8009A92C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _basquash_entrypoint_3(rdram, ctx);
        goto after_189;
    // 0x8009A92C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_189:
    // 0x8009A930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A934: jal         0x80099730
    // 0x8009A938: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80099730(rdram, ctx);
        goto after_190;
    // 0x8009A938: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_190:
    // 0x8009A93C: b           L_8009AB48
    // 0x8009A940: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_8009AB48;
    // 0x8009A940: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8009A944:
    // 0x8009A944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A948: jal         0x800850C8
    // 0x8009A94C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _basquash_entrypoint_3(rdram, ctx);
        goto after_191;
    // 0x8009A94C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_191:
    // 0x8009A950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A954: jal         0x80099730
    // 0x8009A958: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80099730(rdram, ctx);
        goto after_192;
    // 0x8009A958: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_192:
    // 0x8009A95C: b           L_8009AB48
    // 0x8009A960: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_8009AB48;
    // 0x8009A960: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8009A964:
    // 0x8009A964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A968: jal         0x800850C8
    // 0x8009A96C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _basquash_entrypoint_3(rdram, ctx);
        goto after_193;
    // 0x8009A96C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_193:
    // 0x8009A970: b           L_8009AB4C
    // 0x8009A974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8009AB4C;
    // 0x8009A974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8009A978:
    // 0x8009A978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A97C: jal         0x800850C8
    // 0x8009A980: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _basquash_entrypoint_3(rdram, ctx);
        goto after_194;
    // 0x8009A980: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_194:
    // 0x8009A984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A988: jal         0x80099730
    // 0x8009A98C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80099730(rdram, ctx);
        goto after_195;
    // 0x8009A98C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_195:
    // 0x8009A990: b           L_8009AB48
    // 0x8009A994: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_8009AB48;
    // 0x8009A994: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8009A998:
    // 0x8009A998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A99C: jal         0x800850C8
    // 0x8009A9A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _basquash_entrypoint_3(rdram, ctx);
        goto after_196;
    // 0x8009A9A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_196:
    // 0x8009A9A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A9A8: jal         0x80099730
    // 0x8009A9AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80099730(rdram, ctx);
        goto after_197;
    // 0x8009A9AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_197:
    // 0x8009A9B0: b           L_8009AB48
    // 0x8009A9B4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_8009AB48;
    // 0x8009A9B4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8009A9B8:
    // 0x8009A9B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A9BC: jal         0x80095760
    // 0x8009A9C0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80095760(rdram, ctx);
        goto after_198;
    // 0x8009A9C0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_198:
    // 0x8009A9C4: jal         0x8009F354
    // 0x8009A9C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F354(rdram, ctx);
        goto after_199;
    // 0x8009A9C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_199:
    // 0x8009A9CC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A9D0: b           L_8009AB48
    // 0x8009A9D4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009A9D4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009A9D8:
    // 0x8009A9D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A9DC: jal         0x800A17A8
    // 0x8009A9E0: addiu       $a1, $zero, -0x3E7
    ctx->r5 = ADD32(0, -0X3E7);
    func_800A17A8(rdram, ctx);
        goto after_200;
    // 0x8009A9E0: addiu       $a1, $zero, -0x3E7
    ctx->r5 = ADD32(0, -0X3E7);
    after_200:
    // 0x8009A9E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009A9E8: jal         0x80095760
    // 0x8009A9EC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80095760(rdram, ctx);
        goto after_201;
    // 0x8009A9EC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_201:
    // 0x8009A9F0: jal         0x8009F354
    // 0x8009A9F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F354(rdram, ctx);
        goto after_202;
    // 0x8009A9F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_202:
    // 0x8009A9F8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009A9FC: b           L_8009AB48
    // 0x8009AA00: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009AA00: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009AA04:
    // 0x8009AA04: jal         0x800848C0
    // 0x8009AA08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_27(rdram, ctx);
        goto after_203;
    // 0x8009AA08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_203:
    // 0x8009AA0C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009AA10: b           L_8009AB48
    // 0x8009AA14: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009AA14: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009AA18:
    // 0x8009AA18: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x8009AA1C: jal         0x8009F354
    // 0x8009AA20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F354(rdram, ctx);
        goto after_204;
    // 0x8009AA20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_204:
    // 0x8009AA24: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8009AA28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009AA2C: jal         0x80095760
    // 0x8009AA30: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_80095760(rdram, ctx);
        goto after_205;
    // 0x8009AA30: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_205:
    // 0x8009AA34: b           L_8009AB4C
    // 0x8009AA38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8009AB4C;
    // 0x8009AA38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8009AA3C:
    // 0x8009AA3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009AA40: jal         0x80095760
    // 0x8009AA44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80095760(rdram, ctx);
        goto after_206;
    // 0x8009AA44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_206:
    // 0x8009AA48: b           L_8009AB48
    // 0x8009AA4C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009AA4C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009AA50:
    // 0x8009AA50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009AA54: jal         0x80095760
    // 0x8009AA58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80095760(rdram, ctx);
        goto after_207;
    // 0x8009AA58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_207:
    // 0x8009AA5C: b           L_8009AB48
    // 0x8009AA60: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009AA60: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009AA64:
    // 0x8009AA64: jal         0x80084358
    // 0x8009AA68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsfirstp_entrypoint_26(rdram, ctx);
        goto after_208;
    // 0x8009AA68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_208:
    // 0x8009AA6C: b           L_8009AB64
    // 0x8009AA70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8009AB64;
    // 0x8009AA70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8009AA74:
    // 0x8009AA74: addiu       $s2, $zero, 0x42
    ctx->r18 = ADD32(0, 0X42);
    // 0x8009AA78: b           L_8009AB48
    // 0x8009AA7C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009AA7C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009AA80:
    // 0x8009AA80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009AA84: jal         0x800A3544
    // 0x8009AA88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A3544(rdram, ctx);
        goto after_209;
    // 0x8009AA88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_209:
    // 0x8009AA8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009AA90: jal         0x8009337C
    // 0x8009AA94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009337C(rdram, ctx);
        goto after_210;
    // 0x8009AA94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_210:
    // 0x8009AA98: b           L_8009AB48
    // 0x8009AA9C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009AA9C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009AAA0:
    // 0x8009AAA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009AAA4: jal         0x800A3544
    // 0x8009AAA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A3544(rdram, ctx);
        goto after_211;
    // 0x8009AAA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_211:
    // 0x8009AAAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009AAB0: jal         0x8009337C
    // 0x8009AAB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009337C(rdram, ctx);
        goto after_212;
    // 0x8009AAB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_212:
    // 0x8009AAB8: b           L_8009AB48
    // 0x8009AABC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009AABC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009AAC0:
    // 0x8009AAC0: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
    // 0x8009AAC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009AAC8: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x8009AACC: jal         0x8008ED88
    // 0x8009AAD0: lw          $a2, 0x14($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X14);
    func_8008ED88(rdram, ctx);
        goto after_213;
    // 0x8009AAD0: lw          $a2, 0x14($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X14);
    after_213:
    // 0x8009AAD4: b           L_8009AB48
    // 0x8009AAD8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009AAD8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009AADC:
    // 0x8009AADC: lw          $t8, 0xC0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC0);
    // 0x8009AAE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009AAE4: jal         0x800854D0
    // 0x8009AAE8: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    _bainvisible_entrypoint_5(rdram, ctx);
        goto after_214;
    // 0x8009AAE8: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    after_214:
    // 0x8009AAEC: b           L_8009AB48
    // 0x8009AAF0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009AAF0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009AAF4:
    // 0x8009AAF4: lw          $t9, 0x158($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X158);
    // 0x8009AAF8: beql        $t9, $zero, L_8009AB2C
    if (ctx->r25 == 0) {
        // 0x8009AAFC: lw          $v0, 0xC0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XC0);
            goto L_8009AB2C;
    }
    goto skip_7;
    // 0x8009AAFC: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
    skip_7:
    // 0x8009AB00: lw          $t0, 0xC0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC0);
    // 0x8009AB04: jal         0x80085518
    // 0x8009AB08: lw          $a0, 0x18($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18);
    _badeathmatch_entrypoint_4(rdram, ctx);
        goto after_215;
    // 0x8009AB08: lw          $a0, 0x18($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18);
    after_215:
    // 0x8009AB0C: lw          $t1, 0xC0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC0);
    // 0x8009AB10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009AB14: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8009AB18: jal         0x80085520
    // 0x8009AB1C: lw          $a2, 0x1C($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X1C);
    _badeathmatch_entrypoint_5(rdram, ctx);
        goto after_216;
    // 0x8009AB1C: lw          $a2, 0x1C($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X1C);
    after_216:
    // 0x8009AB20: b           L_8009AB48
    // 0x8009AB24: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009AB24: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x8009AB28: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
L_8009AB2C:
    // 0x8009AB2C: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x8009AB30: jal         0x800D175C
    // 0x8009AB34: lw          $a1, 0x1C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C);
    func_800D175C(rdram, ctx);
        goto after_217;
    // 0x8009AB34: lw          $a1, 0x1C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C);
    after_217:
    // 0x8009AB38: b           L_8009AB48
    // 0x8009AB3C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_8009AB48;
    // 0x8009AB3C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8009AB40:
    // 0x8009AB40: jal         0x800956B8
    // 0x8009AB44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800956B8(rdram, ctx);
        goto after_218;
    // 0x8009AB44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_218:
L_8009AB48:
    // 0x8009AB48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8009AB4C:
    // 0x8009AB4C: jal         0x8009E830
    // 0x8009AB50: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E830(rdram, ctx);
        goto after_219;
    // 0x8009AB50: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_219:
    // 0x8009AB54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009AB58: jal         0x8009E5C8
    // 0x8009AB5C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_220;
    // 0x8009AB5C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_220:
    // 0x8009AB60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8009AB64:
    // 0x8009AB64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009AB68: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8009AB6C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8009AB70: jr          $ra
    // 0x8009AB74: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8009AB74: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8009AB78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009AB78: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009AB7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009AB80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009AB84: jal         0x800A3274
    // 0x8009AB88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800A3274(rdram, ctx);
        goto after_0;
    // 0x8009AB88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8009AB8C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8009AB90: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8009AB94: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x8009AB98: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8009AB9C: jal         0x8009E6EC
    // 0x8009ABA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E6EC(rdram, ctx);
        goto after_1;
    // 0x8009ABA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8009ABA4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8009ABA8: beq         $v0, $at, L_8009AC18
    if (ctx->r2 == ctx->r1) {
        // 0x8009ABAC: addiu       $t8, $zero, 0x3C
        ctx->r24 = ADD32(0, 0X3C);
            goto L_8009AC18;
    }
    // 0x8009ABAC: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x8009ABB0: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x8009ABB4: bne         $v0, $at, L_8009AC28
    if (ctx->r2 != ctx->r1) {
        // 0x8009ABB8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AC28;
    }
    // 0x8009ABB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009ABBC: jal         0x80095748
    // 0x8009ABC0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095748(rdram, ctx);
        goto after_2;
    // 0x8009ABC0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_2:
    // 0x8009ABC4: beq         $v0, $zero, L_8009AC40
    if (ctx->r2 == 0) {
        // 0x8009ABC8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AC40;
    }
    // 0x8009ABC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009ABCC: jal         0x800915AC
    // 0x8009ABD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800915AC(rdram, ctx);
        goto after_3;
    // 0x8009ABD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8009ABD4: beql        $v0, $zero, L_8009AC44
    if (ctx->r2 == 0) {
        // 0x8009ABD8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AC44;
    }
    goto skip_0;
    // 0x8009ABD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8009ABDC: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8009ABE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009ABE4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8009ABE8: beq         $v0, $at, L_8009ABFC
    if (ctx->r2 == ctx->r1) {
        // 0x8009ABEC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009ABFC;
    }
    // 0x8009ABEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009ABF0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8009ABF4: bnel        $v0, $at, L_8009AC44
    if (ctx->r2 != ctx->r1) {
        // 0x8009ABF8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AC44;
    }
    goto skip_1;
    // 0x8009ABF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
L_8009ABFC:
    // 0x8009ABFC: jal         0x8008E9AC
    // 0x8009AC00: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    func_8008E9AC(rdram, ctx);
        goto after_4;
    // 0x8009AC00: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_4:
    // 0x8009AC04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009AC08: jal         0x8008F6B8
    // 0x8009AC0C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8008F6B8(rdram, ctx);
        goto after_5;
    // 0x8009AC0C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_5:
    // 0x8009AC10: b           L_8009AC44
    // 0x8009AC14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8009AC44;
    // 0x8009AC14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8009AC18:
    // 0x8009AC18: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8009AC1C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8009AC20: b           L_8009AC40
    // 0x8009AC24: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
        goto L_8009AC40;
    // 0x8009AC24: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
L_8009AC28:
    // 0x8009AC28: jal         0x80084D38
    // 0x8009AC2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bahold_entrypoint_4(rdram, ctx);
        goto after_6;
    // 0x8009AC2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8009AC30: jal         0x80099B94
    // 0x8009AC34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099B94(rdram, ctx);
        goto after_7;
    // 0x8009AC34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8009AC38: b           L_8009AC5C
    // 0x8009AC3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8009AC5C;
    // 0x8009AC3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009AC40:
    // 0x8009AC40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8009AC44:
    // 0x8009AC44: jal         0x8009E5C8
    // 0x8009AC48: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_8;
    // 0x8009AC48: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x8009AC4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009AC50: jal         0x8009E830
    // 0x8009AC54: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009E830(rdram, ctx);
        goto after_9;
    // 0x8009AC54: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_9:
    // 0x8009AC58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009AC5C:
    // 0x8009AC5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009AC60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8009AC64: jr          $ra
    // 0x8009AC68: nop

    return;
    // 0x8009AC68: nop

;}
RECOMP_FUNC void func_8009AC6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009AC6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009AC70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009AC74: lw          $t6, 0xC0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC0);
    // 0x8009AC78: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8009AC7C: sw          $zero, 0x18($t6)
    MEM_W(0X18, ctx->r14) = 0;
    // 0x8009AC80: lw          $t7, 0xC0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC0);
    // 0x8009AC84: sw          $zero, 0x14($t7)
    MEM_W(0X14, ctx->r15) = 0;
    // 0x8009AC88: lw          $a0, 0xC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC0);
    // 0x8009AC8C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x8009AC90: jal         0x800EFD24
    // 0x8009AC94: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x8009AC94: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x8009AC98: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8009AC9C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8009ACA0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8009ACA4: lw          $t8, 0xC0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0XC0);
    // 0x8009ACA8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8009ACAC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8009ACB0: sw          $zero, 0x4C($t8)
    MEM_W(0X4C, ctx->r24) = 0;
    // 0x8009ACB4: lw          $t9, 0xC0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0XC0);
    // 0x8009ACB8: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x8009ACBC: sw          $zero, 0x4C($t0)
    MEM_W(0X4C, ctx->r8) = 0;
    // 0x8009ACC0: lw          $t1, 0xC0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0XC0);
    // 0x8009ACC4: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x8009ACC8: sw          $zero, 0x74($t2)
    MEM_W(0X74, ctx->r10) = 0;
    // 0x8009ACCC: lw          $t3, 0xC0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0XC0);
    // 0x8009ACD0: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x8009ACD4: sw          $zero, 0x9C($t4)
    MEM_W(0X9C, ctx->r12) = 0;
    // 0x8009ACD8: lw          $t5, 0xC0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0XC0);
    // 0x8009ACDC: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x8009ACE0: sw          $zero, 0xC4($t6)
    MEM_W(0XC4, ctx->r14) = 0;
    // 0x8009ACE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009ACE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009ACEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009ACF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009ACF4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009ACF8: lw          $t6, 0xC0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC0);
    // 0x8009ACFC: jr          $ra
    // 0x8009AD00: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x8009AD00: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009AD04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009AD04: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009AD08: lw          $t6, 0xC0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC0);
    // 0x8009AD0C: jr          $ra
    // 0x8009AD10: swc1        $f12, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x8009AD10: swc1        $f12, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009AD14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009AD14: lw          $t6, 0xC0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC0);
    // 0x8009AD18: jr          $ra
    // 0x8009AD1C: sw          $a1, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r5;
    return;
    // 0x8009AD1C: sw          $a1, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_8009AD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009AD20: lw          $t6, 0xC0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC0);
    // 0x8009AD24: jr          $ra
    // 0x8009AD28: sw          $a1, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->r5;
    return;
    // 0x8009AD28: sw          $a1, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_8009AD2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009AD2C: lw          $t6, 0xC0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC0);
    // 0x8009AD30: jr          $ra
    // 0x8009AD34: sw          $a1, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->r5;
    return;
    // 0x8009AD34: sw          $a1, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_8009AD38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009AD38: lw          $t6, 0xC0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC0);
    // 0x8009AD3C: jr          $ra
    // 0x8009AD40: sw          $a1, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->r5;
    return;
    // 0x8009AD40: sw          $a1, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_8009AD44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009AD44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009AD48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009AD4C: lw          $a0, 0xC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC0);
    // 0x8009AD50: jal         0x800EE7F8
    // 0x8009AD54: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009AD54: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x8009AD58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009AD5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009AD60: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009AD70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009AD70: jr          $ra
    // 0x8009AD74: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    return;
    // 0x8009AD74: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
;}
RECOMP_FUNC void func_8009AD78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009AD78: lw          $t6, 0xC4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC4);
    // 0x8009AD7C: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8009AD80: jr          $ra
    // 0x8009AD84: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
    return;
    // 0x8009AD84: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
;}
RECOMP_FUNC void func_8009AD88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009AD88: jr          $ra
    // 0x8009AD8C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8009AD8C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8009AD90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009AD90: lw          $t6, 0xC4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC4);
    // 0x8009AD94: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8009AD98: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x8009AD9C: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x8009ADA0: lw          $t7, 0xC4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC4);
    // 0x8009ADA4: sb          $zero, 0x1($t7)
    MEM_B(0X1, ctx->r15) = 0;
    // 0x8009ADA8: lw          $t8, 0xC4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC4);
    // 0x8009ADAC: sb          $zero, 0x2($t8)
    MEM_B(0X2, ctx->r24) = 0;
L_8009ADB0:
    // 0x8009ADB0: lw          $t9, 0xC4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC4);
    // 0x8009ADB4: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x8009ADB8: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    // 0x8009ADBC: lw          $t1, 0xC4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC4);
    // 0x8009ADC0: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x8009ADC4: sb          $zero, 0x1($t2)
    MEM_B(0X1, ctx->r10) = 0;
    // 0x8009ADC8: lw          $t3, 0xC4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC4);
    // 0x8009ADCC: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x8009ADD0: sb          $zero, 0x2($t4)
    MEM_B(0X2, ctx->r12) = 0;
    // 0x8009ADD4: lw          $t5, 0xC4($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC4);
    // 0x8009ADD8: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x8009ADDC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8009ADE0: bne         $v0, $v1, L_8009ADB0
    if (ctx->r2 != ctx->r3) {
        // 0x8009ADE4: sb          $zero, 0x3($t6)
        MEM_B(0X3, ctx->r14) = 0;
            goto L_8009ADB0;
    }
    // 0x8009ADE4: sb          $zero, 0x3($t6)
    MEM_B(0X3, ctx->r14) = 0;
    // 0x8009ADE8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009ADF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009ADF0: lw          $t6, 0xC4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC4);
    // 0x8009ADF4: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8009ADF8: jr          $ra
    // 0x8009ADFC: sb          $a2, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r6;
    return;
    // 0x8009ADFC: sb          $a2, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r6;
;}
RECOMP_FUNC void func_8009AE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009AE00: jr          $ra
    // 0x8009AE04: addiu       $v0, $zero, 0xC4
    ctx->r2 = ADD32(0, 0XC4);
    return;
    // 0x8009AE04: addiu       $v0, $zero, 0xC4
    ctx->r2 = ADD32(0, 0XC4);
;}
RECOMP_FUNC void func_8009AE08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009AE08: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8009AE0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8009AE10: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8009AE14: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8009AE18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009AE1C: lwc1        $f4, 0x3C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x8009AE20: lwc1        $f6, 0x50($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X50);
    // 0x8009AE24: addiu       $a0, $v0, 0x1C
    ctx->r4 = ADD32(ctx->r2, 0X1C);
    // 0x8009AE28: lw          $a1, 0x40($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X40);
    // 0x8009AE2C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8009AE30: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8009AE34: jal         0x800EEB9C
    // 0x8009AE38: nop

    func_800EEB9C(rdram, ctx);
        goto after_0;
    // 0x8009AE38: nop

    after_0:
    // 0x8009AE3C: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x8009AE40: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009AE44: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x8009AE48: lwc1        $f10, 0x10($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X10);
    // 0x8009AE4C: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x8009AE50: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x8009AE54: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x8009AE58: lwc1        $f18, 0x18($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X18);
    // 0x8009AE5C: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x8009AE60: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x8009AE64: jal         0x800EE7F8
    // 0x8009AE68: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x8009AE68: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    after_1:
    // 0x8009AE6C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009AE70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009AE74: jal         0x80096518
    // 0x8009AE78: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    func_80096518(rdram, ctx);
        goto after_2;
    // 0x8009AE78: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x8009AE7C: beq         $v0, $zero, L_8009AF88
    if (ctx->r2 == 0) {
        // 0x8009AE80: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009AF88;
    }
    // 0x8009AE80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009AE84: jal         0x800963C0
    // 0x8009AE88: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_800963C0(rdram, ctx);
        goto after_3;
    // 0x8009AE88: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_3:
    // 0x8009AE8C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8009AE90: jal         0x800EF410
    // 0x8009AE94: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_800EF410(rdram, ctx);
        goto after_4;
    // 0x8009AE94: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_4:
    // 0x8009AE98: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8009AE9C: jal         0x800EEAA4
    // 0x8009AEA0: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_800EEAA4(rdram, ctx);
        goto after_5;
    // 0x8009AEA0: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_5:
    // 0x8009AEA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009AEA8: jal         0x800A3378
    // 0x8009AEAC: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    func_800A3378(rdram, ctx);
        goto after_6;
    // 0x8009AEAC: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x8009AEB0: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8009AEB4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8009AEB8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8009AEBC: c.eq.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl == ctx->f14.fl;
    // 0x8009AEC0: nop

    // 0x8009AEC4: bc1t        L_8009AF88
    if (c1cs) {
        // 0x8009AEC8: nop
    
            goto L_8009AF88;
    }
    // 0x8009AEC8: nop

    // 0x8009AECC: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x8009AED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009AED4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8009AED8: bc1fl       L_8009AF68
    if (!c1cs) {
        // 0x8009AEDC: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_8009AF68;
    }
    goto skip_0;
    // 0x8009AEDC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_0:
    // 0x8009AEE0: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x8009AEE4: jal         0x8008E1C4
    // 0x8009AEE8: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    func_8008E1C4(rdram, ctx);
        goto after_7;
    // 0x8009AEE8: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    after_7:
    // 0x8009AEEC: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8009AEF0: beq         $v0, $zero, L_8009AF2C
    if (ctx->r2 == 0) {
        // 0x8009AEF4: lwc1        $f12, 0x38($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
            goto L_8009AF2C;
    }
    // 0x8009AEF4: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8009AEF8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8009AEFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009AF00: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8009AF04: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8009AF08: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x8009AF0C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8009AF10: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8009AF14: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009AF18: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x8009AF1C: jal         0x800F10B4
    // 0x8009AF20: nop

    func_800F10B4(rdram, ctx);
        goto after_8;
    // 0x8009AF20: nop

    after_8:
    // 0x8009AF24: b           L_8009AF40
    // 0x8009AF28: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_8009AF40;
    // 0x8009AF28: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8009AF2C:
    // 0x8009AF2C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8009AF30: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009AF34: nop

    // 0x8009AF38: mul.s       $f12, $f2, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8009AF3C: nop

L_8009AF40:
    // 0x8009AF40: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8009AF44: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8009AF48: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x8009AF4C: add.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x8009AF50: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8009AF54: jal         0x800EF334
    // 0x8009AF58: nop

    func_800EF334(rdram, ctx);
        goto after_9;
    // 0x8009AF58: nop

    after_9:
    // 0x8009AF5C: b           L_8009AF88
    // 0x8009AF60: nop

        goto L_8009AF88;
    // 0x8009AF60: nop

    // 0x8009AF64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_8009AF68:
    // 0x8009AF68: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009AF6C: lwc1        $f8, 0x52A0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X52A0);
    // 0x8009AF70: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x8009AF74: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8009AF78: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8009AF7C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8009AF80: jal         0x800EF334
    // 0x8009AF84: nop

    func_800EF334(rdram, ctx);
        goto after_10;
    // 0x8009AF84: nop

    after_10:
L_8009AF88:
    // 0x8009AF88: jal         0x80094E98
    // 0x8009AF8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094E98(rdram, ctx);
        goto after_11;
    // 0x8009AF8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8009AF90: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8009AF94: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x8009AF98: jal         0x800EFA20
    // 0x8009AF9C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_800EFA20(rdram, ctx);
        goto after_12;
    // 0x8009AF9C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_12:
    // 0x8009AFA0: jal         0x80094E98
    // 0x8009AFA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094E98(rdram, ctx);
        goto after_13;
    // 0x8009AFA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x8009AFA8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8009AFAC: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x8009AFB0: jal         0x800EFA20
    // 0x8009AFB4: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_800EFA20(rdram, ctx);
        goto after_14;
    // 0x8009AFB4: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_14:
    // 0x8009AFB8: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x8009AFBC: jal         0x800EF3DC
    // 0x8009AFC0: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    func_800EF3DC(rdram, ctx);
        goto after_15;
    // 0x8009AFC0: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    after_15:
    // 0x8009AFC4: jal         0x800D8FF8
    // 0x8009AFC8: nop

    func_800D8FF8(rdram, ctx);
        goto after_16;
    // 0x8009AFC8: nop

    after_16:
    // 0x8009AFCC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8009AFD0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8009AFD4: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x8009AFD8: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8009AFDC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8009AFE0: jal         0x800EF334
    // 0x8009AFE4: nop

    func_800EF334(rdram, ctx);
        goto after_17;
    // 0x8009AFE4: nop

    after_17:
    // 0x8009AFE8: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x8009AFEC: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x8009AFF0: jal         0x800EF04C
    // 0x8009AFF4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EF04C(rdram, ctx);
        goto after_18;
    // 0x8009AFF4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_18:
    // 0x8009AFF8: jal         0x800D8FF8
    // 0x8009AFFC: nop

    func_800D8FF8(rdram, ctx);
        goto after_19;
    // 0x8009AFFC: nop

    after_19:
    // 0x8009B000: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B004: lwc1        $f6, 0x34($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8009B008: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8009B00C: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8009B010: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8009B014: swc1        $f16, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f16.u32l;
    // 0x8009B018: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B01C: lwc1        $f2, 0x38($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8009B020: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8009B024: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x8009B028: nop

    // 0x8009B02C: bc1f        L_8009B038
    if (!c1cs) {
        // 0x8009B030: nop
    
            goto L_8009B038;
    }
    // 0x8009B030: nop

    // 0x8009B034: swc1        $f2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f2.u32l;
L_8009B038:
    // 0x8009B038: jal         0x800D8FF8
    // 0x8009B03C: nop

    func_800D8FF8(rdram, ctx);
        goto after_20;
    // 0x8009B03C: nop

    after_20:
    // 0x8009B040: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B044: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8009B048: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x8009B04C: jal         0x800EFA20
    // 0x8009B050: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    func_800EFA20(rdram, ctx);
        goto after_21;
    // 0x8009B050: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    after_21:
    // 0x8009B054: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B058: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x8009B05C: jal         0x800EF04C
    // 0x8009B060: addiu       $a1, $v0, 0x28
    ctx->r5 = ADD32(ctx->r2, 0X28);
    func_800EF04C(rdram, ctx);
        goto after_22;
    // 0x8009B060: addiu       $a1, $v0, 0x28
    ctx->r5 = ADD32(ctx->r2, 0X28);
    after_22:
    // 0x8009B064: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B068: lui         $a1, 0x38D1
    ctx->r5 = S32(0X38D1 << 16);
    // 0x8009B06C: ori         $a1, $a1, 0xB717
    ctx->r5 = ctx->r5 | 0XB717;
    // 0x8009B070: jal         0x800F2168
    // 0x8009B074: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800F2168(rdram, ctx);
        goto after_23;
    // 0x8009B074: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_23:
    // 0x8009B078: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8009B07C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8009B080: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x8009B084: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009B08C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B08C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8009B090: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009B094: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009B098: jal         0x800D8FF8
    // 0x8009B09C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x8009B09C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8009B0A0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8009B0A4: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B0A8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8009B0AC: addiu       $a1, $v0, 0x1C
    ctx->r5 = ADD32(ctx->r2, 0X1C);
    // 0x8009B0B0: jal         0x800EFB24
    // 0x8009B0B4: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
    func_800EFB24(rdram, ctx);
        goto after_1;
    // 0x8009B0B4: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
    after_1:
    // 0x8009B0B8: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B0BC: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8009B0C0: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8009B0C4: lwc1        $f4, 0x44($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X44);
    // 0x8009B0C8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8009B0CC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8009B0D0: jal         0x800EF334
    // 0x8009B0D4: nop

    func_800EF334(rdram, ctx);
        goto after_2;
    // 0x8009B0D4: nop

    after_2:
    // 0x8009B0D8: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8009B0DC: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8009B0E0: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8009B0E4: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8009B0E8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009B0EC: lwc1        $f8, 0x52A4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X52A4);
    // 0x8009B0F0: mul.s       $f16, $f12, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8009B0F4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8009B0F8: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8009B0FC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8009B100: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x8009B104: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8009B108: nop

    // 0x8009B10C: bc1fl       L_8009B130
    if (!c1cs) {
        // 0x8009B110: lw          $a0, 0xC8($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XC8);
            goto L_8009B130;
    }
    goto skip_0;
    // 0x8009B110: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    skip_0:
    // 0x8009B114: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B118: addiu       $a0, $v0, 0x10
    ctx->r4 = ADD32(ctx->r2, 0X10);
    // 0x8009B11C: jal         0x800EE7F8
    // 0x8009B120: addiu       $a1, $v0, 0x1C
    ctx->r5 = ADD32(ctx->r2, 0X1C);
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x8009B120: addiu       $a1, $v0, 0x1C
    ctx->r5 = ADD32(ctx->r2, 0X1C);
    after_3:
    // 0x8009B124: b           L_8009B13C
    // 0x8009B128: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B13C;
    // 0x8009B128: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B12C: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
L_8009B130:
    // 0x8009B130: jal         0x800EF04C
    // 0x8009B134: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EF04C(rdram, ctx);
        goto after_4;
    // 0x8009B134: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_4:
    // 0x8009B138: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B13C:
    // 0x8009B13C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8009B140: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x8009B144: jal         0x800EFA20
    // 0x8009B148: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    func_800EFA20(rdram, ctx);
        goto after_5;
    // 0x8009B148: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    after_5:
    // 0x8009B14C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B150: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x8009B154: jal         0x800EF04C
    // 0x8009B158: addiu       $a1, $v0, 0x28
    ctx->r5 = ADD32(ctx->r2, 0X28);
    func_800EF04C(rdram, ctx);
        goto after_6;
    // 0x8009B158: addiu       $a1, $v0, 0x28
    ctx->r5 = ADD32(ctx->r2, 0X28);
    after_6:
    // 0x8009B15C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009B160: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009B164: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8009B168: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009B170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009B174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009B178: jal         0x800D8FF8
    // 0x8009B17C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x8009B17C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009B180: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8009B184: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8009B188: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8009B18C: lw          $v0, 0xC8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC8);
    // 0x8009B190: lwc1        $f6, 0x34($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8009B194: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8009B198: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8009B19C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8009B1A0: swc1        $f10, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f10.u32l;
    // 0x8009B1A4: lw          $v0, 0xC8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC8);
    // 0x8009B1A8: lwc1        $f2, 0x38($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8009B1AC: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8009B1B0: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x8009B1B4: nop

    // 0x8009B1B8: bc1fl       L_8009B1CC
    if (!c1cs) {
        // 0x8009B1BC: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_8009B1CC;
    }
    goto skip_0;
    // 0x8009B1BC: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    skip_0:
    // 0x8009B1C0: swc1        $f2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f2.u32l;
    // 0x8009B1C4: lw          $v0, 0xC8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC8);
    // 0x8009B1C8: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
L_8009B1CC:
    // 0x8009B1CC: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    // 0x8009B1D0: jal         0x800EFA20
    // 0x8009B1D4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_800EFA20(rdram, ctx);
        goto after_1;
    // 0x8009B1D4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x8009B1D8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8009B1DC: lw          $v0, 0xC8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC8);
    // 0x8009B1E0: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x8009B1E4: jal         0x800EF04C
    // 0x8009B1E8: addiu       $a1, $v0, 0x28
    ctx->r5 = ADD32(ctx->r2, 0X28);
    func_800EF04C(rdram, ctx);
        goto after_2;
    // 0x8009B1E8: addiu       $a1, $v0, 0x28
    ctx->r5 = ADD32(ctx->r2, 0X28);
    after_2:
    // 0x8009B1EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009B1F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009B1F4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009B1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B1FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009B200: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009B204: jal         0x800D8FF8
    // 0x8009B208: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x8009B208: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009B20C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009B210: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8009B214: lwc1        $f6, 0x34($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8009B218: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8009B21C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8009B220: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8009B224: swc1        $f10, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f10.u32l;
    // 0x8009B228: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8009B22C: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8009B230: lwc1        $f12, 0x38($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8009B234: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8009B238: nop

    // 0x8009B23C: bc1f        L_8009B250
    if (!c1cs) {
        // 0x8009B240: nop
    
            goto L_8009B250;
    }
    // 0x8009B240: nop

    // 0x8009B244: swc1        $f12, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f12.u32l;
    // 0x8009B248: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8009B24C: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
L_8009B250:
    // 0x8009B250: mul.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8009B254: swc1        $f16, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f16.u32l;
    // 0x8009B258: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8009B25C: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8009B260: lwc1        $f6, 0x2C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x8009B264: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8009B268: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x8009B26C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009B270: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009B274: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009B27C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B27C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8009B280: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009B284: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009B288: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009B28C: jal         0x80098590
    // 0x8009B290: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_80098590(rdram, ctx);
        goto after_0;
    // 0x8009B290: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x8009B294: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8009B298: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B29C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009B2A0: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
    // 0x8009B2A4: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B2A8: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8009B2AC: jal         0x8009861C
    // 0x8009B2B0: swc1        $f6, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f6.u32l;
    func_8009861C(rdram, ctx);
        goto after_1;
    // 0x8009B2B0: swc1        $f6, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f6.u32l;
    after_1:
    // 0x8009B2B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009B2B8: bne         $v0, $at, L_8009B308
    if (ctx->r2 != ctx->r1) {
        // 0x8009B2BC: nop
    
            goto L_8009B308;
    }
    // 0x8009B2BC: nop

    // 0x8009B2C0: jal         0x80098610
    // 0x8009B2C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80098610(rdram, ctx);
        goto after_2;
    // 0x8009B2C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8009B2C8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8009B2CC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009B2D0: jal         0x800136E4
    // 0x8009B2D4: add.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f8.fl;
    func_800136E4(rdram, ctx);
        goto after_3;
    // 0x8009B2D4: add.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f8.fl;
    after_3:
    // 0x8009B2D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009B2DC: jal         0x80098628
    // 0x8009B2E0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_80098628(rdram, ctx);
        goto after_4;
    // 0x8009B2E0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x8009B2E4: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8009B2E8: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x8009B2EC: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x8009B2F0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8009B2F4: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8009B2F8: jal         0x800EEB9C
    // 0x8009B2FC: nop

    func_800EEB9C(rdram, ctx);
        goto after_5;
    // 0x8009B2FC: nop

    after_5:
    // 0x8009B300: b           L_8009B33C
    // 0x8009B304: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B33C;
    // 0x8009B304: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B308:
    // 0x8009B308: jal         0x8009C984
    // 0x8009B30C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_6;
    // 0x8009B30C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8009B310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009B314: jal         0x80098628
    // 0x8009B318: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_80098628(rdram, ctx);
        goto after_7;
    // 0x8009B318: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x8009B31C: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8009B320: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
    // 0x8009B324: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x8009B328: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8009B32C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8009B330: jal         0x800EEB9C
    // 0x8009B334: nop

    func_800EEB9C(rdram, ctx);
        goto after_8;
    // 0x8009B334: nop

    after_8:
    // 0x8009B338: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B33C:
    // 0x8009B33C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8009B340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009B344: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8009B348: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8009B34C: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x8009B350: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B354: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8009B358: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8009B35C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8009B360: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009B364: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    // 0x8009B368: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B36C: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8009B370: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8009B374: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8009B378: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x8009B37C: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B380: swc1        $f8, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f8.u32l;
    // 0x8009B384: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B388: lwc1        $f2, 0x18($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8009B38C: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x8009B390: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B394: swc1        $f2, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f2.u32l;
    // 0x8009B398: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B39C: jal         0x8009B08C
    // 0x8009B3A0: swc1        $f2, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f2.u32l;
    func_8009B08C(rdram, ctx);
        goto after_9;
    // 0x8009B3A0: swc1        $f2, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f2.u32l;
    after_9:
    // 0x8009B3A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009B3A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009B3AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8009B3B0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009B3B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B3B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009B3BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009B3C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009B3C4: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8009B3C8: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x8009B3CC: jal         0x800EE7F8
    // 0x8009B3D0: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009B3D0: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    after_0:
    // 0x8009B3D4: jal         0x800D8FF8
    // 0x8009B3D8: nop

    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x8009B3D8: nop

    after_1:
    // 0x8009B3DC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8009B3E0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8009B3E4: lw          $a0, 0xC8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC8);
    // 0x8009B3E8: jal         0x800EF334
    // 0x8009B3EC: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_800EF334(rdram, ctx);
        goto after_2;
    // 0x8009B3EC: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_2:
    // 0x8009B3F0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8009B3F4: lw          $v0, 0xC8($t8)
    ctx->r2 = MEM_W(ctx->r24, 0XC8);
    // 0x8009B3F8: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x8009B3FC: jal         0x800EF04C
    // 0x8009B400: addiu       $a1, $v0, 0x28
    ctx->r5 = ADD32(ctx->r2, 0X28);
    func_800EF04C(rdram, ctx);
        goto after_3;
    // 0x8009B400: addiu       $a1, $v0, 0x28
    ctx->r5 = ADD32(ctx->r2, 0X28);
    after_3:
    // 0x8009B404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009B408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009B40C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009B414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B414: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009B418: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009B41C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8009B420: jal         0x8009C128
    // 0x8009B424: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8009B424: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8009B428: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8009B42C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x8009B430: lw          $v0, 0xC8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XC8);
    // 0x8009B434: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x8009B438: jal         0x800EFB24
    // 0x8009B43C: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    func_800EFB24(rdram, ctx);
        goto after_1;
    // 0x8009B43C: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    after_1:
    // 0x8009B440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009B444: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009B448: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009B450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009B454: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009B458: jal         0x800D8FF8
    // 0x8009B45C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x8009B45C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009B460: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8009B464: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009B468: lw          $v0, 0xC8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC8);
    // 0x8009B46C: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8009B470: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8009B474: swc1        $f6, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f6.u32l;
    // 0x8009B478: lw          $t6, 0xC8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC8);
    // 0x8009B47C: lwc1        $f14, 0x52A8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X52A8);
    // 0x8009B480: jal         0x800F0F9C
    // 0x8009B484: lwc1        $f12, 0x4C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X4C);
    func_800F0F9C(rdram, ctx);
        goto after_1;
    // 0x8009B484: lwc1        $f12, 0x4C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X4C);
    after_1:
    // 0x8009B488: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8009B48C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009B490: nop

    // 0x8009B494: mul.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8009B498: jal         0x80013970
    // 0x8009B49C: nop

    func_80013970(rdram, ctx);
        goto after_2;
    // 0x8009B49C: nop

    after_2:
    // 0x8009B4A0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8009B4A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8009B4A8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8009B4AC: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8009B4B0: lw          $v0, 0xC8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0XC8);
    // 0x8009B4B4: lwc1        $f18, 0x48($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X48);
    // 0x8009B4B8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8009B4BC: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x8009B4C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009B4C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009B4C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009B4D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B4D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009B4D4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8009B4D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009B4DC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8009B4E0: lw          $a1, 0xC8($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC8);
    // 0x8009B4E4: jal         0x800EE7F8
    // 0x8009B4E8: addiu       $a1, $a1, 0x28
    ctx->r5 = ADD32(ctx->r5, 0X28);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009B4E8: addiu       $a1, $a1, 0x28
    ctx->r5 = ADD32(ctx->r5, 0X28);
    after_0:
    // 0x8009B4EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009B4F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009B4F4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009B4FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B4FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009B500: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009B504: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009B508: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8009B50C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8009B510: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009B514: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x8009B518: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x8009B51C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8009B520: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009B524: swc1        $f4, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->f4.u32l;
    // 0x8009B528: lw          $a0, 0xC8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC8);
    // 0x8009B52C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8009B530: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8009B534: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x8009B538: jal         0x800EFA4C
    // 0x8009B53C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x8009B53C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x8009B540: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B544: jal         0x800EFD24
    // 0x8009B548: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x8009B548: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_1:
    // 0x8009B54C: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B550: jal         0x800EFD24
    // 0x8009B554: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    func_800EFD24(rdram, ctx);
        goto after_2;
    // 0x8009B554: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_2:
    // 0x8009B558: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B55C: jal         0x800EFD24
    // 0x8009B560: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800EFD24(rdram, ctx);
        goto after_3;
    // 0x8009B560: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_3:
    // 0x8009B564: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8009B568: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009B56C: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009B574: jal         0x8009BC34
    // 0x8009B578: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    func_8009BC34(rdram, ctx);
        goto after_4;
    // 0x8009B578: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    after_4:
    // 0x8009B57C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009B580: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009B584: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009B588: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009B590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B590: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009B594: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009B598: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009B59C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009B5A0: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B5A4: jal         0x8009C128
    // 0x8009B5A8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8009B5A8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_0:
    // 0x8009B5AC: jal         0x800A3048
    // 0x8009B5B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3048(rdram, ctx);
        goto after_1;
    // 0x8009B5B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8009B5B4: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B5B8: lwc1        $f4, 0x50($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X50);
    // 0x8009B5BC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8009B5C0: swc1        $f6, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f6.u32l;
    // 0x8009B5C4: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B5C8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8009B5CC: sltiu       $at, $t6, 0x14
    ctx->r1 = ctx->r14 < 0X14 ? 1 : 0;
    // 0x8009B5D0: beq         $at, $zero, L_8009B790
    if (ctx->r1 == 0) {
        // 0x8009B5D4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8009B790;
    }
    // 0x8009B5D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8009B5D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009B5DC: addu        $at, $at, $t6
    gpr jr_addend_8009B5E4 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8009B5E0: lw          $t6, 0x52AC($at)
    ctx->r14 = ADD32(ctx->r1, 0X52AC);
    // 0x8009B5E4: jr          $t6
    // 0x8009B5E8: nop

    switch (jr_addend_8009B5E4 >> 2) {
        case 0: goto L_8009B790; break;
        case 1: goto L_8009B61C; break;
        case 2: goto L_8009B63C; break;
        case 3: goto L_8009B694; break;
        case 4: goto L_8009B790; break;
        case 5: goto L_8009B660; break;
        case 6: goto L_8009B6B4; break;
        case 7: goto L_8009B790; break;
        case 8: goto L_8009B60C; break;
        case 9: goto L_8009B62C; break;
        case 10: goto L_8009B6F8; break;
        case 11: goto L_8009B5FC; break;
        case 12: goto L_8009B5EC; break;
        case 13: goto L_8009B6A4; break;
        case 14: goto L_8009B740; break;
        case 15: goto L_8009B764; break;
        case 16: goto L_8009B708; break;
        case 17: goto L_8009B728; break;
        case 18: goto L_8009B774; break;
        case 19: goto L_8009B784; break;
        default: switch_error(__func__, 0x8009B5E4, 0x801252AC);
    }
    // 0x8009B5E8: nop

L_8009B5EC:
    // 0x8009B5EC: jal         0x80084E28
    // 0x8009B5F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovegoto_entrypoint_14(rdram, ctx);
        goto after_2;
    // 0x8009B5F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8009B5F4: b           L_8009B790
    // 0x8009B5F8: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B790;
    // 0x8009B5F8: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B5FC:
    // 0x8009B5FC: jal         0x8009B450
    // 0x8009B600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B450(rdram, ctx);
        goto after_3;
    // 0x8009B600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8009B604: b           L_8009B790
    // 0x8009B608: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B790;
    // 0x8009B608: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B60C:
    // 0x8009B60C: jal         0x8009B3B8
    // 0x8009B610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B3B8(rdram, ctx);
        goto after_4;
    // 0x8009B610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8009B614: b           L_8009B790
    // 0x8009B618: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B790;
    // 0x8009B618: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B61C:
    // 0x8009B61C: jal         0x8009B170
    // 0x8009B620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B170(rdram, ctx);
        goto after_5;
    // 0x8009B620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8009B624: b           L_8009B790
    // 0x8009B628: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B790;
    // 0x8009B628: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B62C:
    // 0x8009B62C: jal         0x8009B08C
    // 0x8009B630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B08C(rdram, ctx);
        goto after_6;
    // 0x8009B630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8009B634: b           L_8009B790
    // 0x8009B638: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B790;
    // 0x8009B638: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B63C:
    // 0x8009B63C: jal         0x8009C990
    // 0x8009B640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_7;
    // 0x8009B640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8009B644: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8009B648: jal         0x8009B9C0
    // 0x8009B64C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_8;
    // 0x8009B64C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8009B650: jal         0x8009AE08
    // 0x8009B654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009AE08(rdram, ctx);
        goto after_9;
    // 0x8009B654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8009B658: b           L_8009B790
    // 0x8009B65C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B790;
    // 0x8009B65C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B660:
    // 0x8009B660: jal         0x8009C990
    // 0x8009B664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_10;
    // 0x8009B664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8009B668: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8009B66C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009B670: jal         0x800136E4
    // 0x8009B674: add.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f8.fl;
    func_800136E4(rdram, ctx);
        goto after_11;
    // 0x8009B674: add.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f8.fl;
    after_11:
    // 0x8009B678: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8009B67C: jal         0x8009B9C0
    // 0x8009B680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_12;
    // 0x8009B680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8009B684: jal         0x8009AE08
    // 0x8009B688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009AE08(rdram, ctx);
        goto after_13;
    // 0x8009B688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x8009B68C: b           L_8009B790
    // 0x8009B690: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B790;
    // 0x8009B690: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B694:
    // 0x8009B694: jal         0x8009AE08
    // 0x8009B698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009AE08(rdram, ctx);
        goto after_14;
    // 0x8009B698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x8009B69C: b           L_8009B790
    // 0x8009B6A0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B790;
    // 0x8009B6A0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B6A4:
    // 0x8009B6A4: jal         0x80084E70
    // 0x8009B6A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamoveledge_entrypoint_3(rdram, ctx);
        goto after_15;
    // 0x8009B6A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x8009B6AC: b           L_8009B790
    // 0x8009B6B0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B790;
    // 0x8009B6B0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B6B4:
    // 0x8009B6B4: jal         0x8009EF04
    // 0x8009B6B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_16;
    // 0x8009B6B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x8009B6BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009B6C0: nop

    // 0x8009B6C4: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8009B6C8: nop

    // 0x8009B6CC: bc1f        L_8009B6E8
    if (!c1cs) {
        // 0x8009B6D0: nop
    
            goto L_8009B6E8;
    }
    // 0x8009B6D0: nop

    // 0x8009B6D4: jal         0x8009EEB8
    // 0x8009B6D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_17;
    // 0x8009B6D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x8009B6DC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8009B6E0: jal         0x8009B9C0
    // 0x8009B6E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_18;
    // 0x8009B6E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
L_8009B6E8:
    // 0x8009B6E8: jal         0x8009AE08
    // 0x8009B6EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009AE08(rdram, ctx);
        goto after_19;
    // 0x8009B6EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x8009B6F0: b           L_8009B790
    // 0x8009B6F4: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B790;
    // 0x8009B6F4: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B6F8:
    // 0x8009B6F8: jal         0x8009B27C
    // 0x8009B6FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B27C(rdram, ctx);
        goto after_20;
    // 0x8009B6FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x8009B700: b           L_8009B790
    // 0x8009B704: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B790;
    // 0x8009B704: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B708:
    // 0x8009B708: jal         0x80084360
    // 0x8009B70C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsfirstp_entrypoint_27(rdram, ctx);
        goto after_21;
    // 0x8009B70C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x8009B710: jal         0x8009AE08
    // 0x8009B714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009AE08(rdram, ctx);
        goto after_22;
    // 0x8009B714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x8009B718: jal         0x8009B414
    // 0x8009B71C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B414(rdram, ctx);
        goto after_23;
    // 0x8009B71C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x8009B720: b           L_8009B790
    // 0x8009B724: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B790;
    // 0x8009B724: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B728:
    // 0x8009B728: jal         0x80084360
    // 0x8009B72C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsfirstp_entrypoint_27(rdram, ctx);
        goto after_24;
    // 0x8009B72C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x8009B730: jal         0x8009B1FC
    // 0x8009B734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B1FC(rdram, ctx);
        goto after_25;
    // 0x8009B734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x8009B738: b           L_8009B790
    // 0x8009B73C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B790;
    // 0x8009B73C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B740:
    // 0x8009B740: jal         0x8009C984
    // 0x8009B744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_26;
    // 0x8009B744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x8009B748: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8009B74C: jal         0x8009B9C0
    // 0x8009B750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_27;
    // 0x8009B750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x8009B754: jal         0x8009AE08
    // 0x8009B758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009AE08(rdram, ctx);
        goto after_28;
    // 0x8009B758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x8009B75C: b           L_8009B790
    // 0x8009B760: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B790;
    // 0x8009B760: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B764:
    // 0x8009B764: jal         0x80084EF8
    // 0x8009B768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovethrust_entrypoint_5(rdram, ctx);
        goto after_29;
    // 0x8009B768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x8009B76C: b           L_8009B790
    // 0x8009B770: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B790;
    // 0x8009B770: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B774:
    // 0x8009B774: jal         0x80084EC8
    // 0x8009B778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovespline_entrypoint_10(rdram, ctx);
        goto after_30;
    // 0x8009B778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x8009B77C: b           L_8009B790
    // 0x8009B780: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B790;
    // 0x8009B780: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B784:
    // 0x8009B784: jal         0x80084E40
    // 0x8009B788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovehover_entrypoint_2(rdram, ctx);
        goto after_31;
    // 0x8009B788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x8009B78C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B790:
    // 0x8009B790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009B794: jal         0x8009C0F8
    // 0x8009B798: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    func_8009C0F8(rdram, ctx);
        goto after_32;
    // 0x8009B798: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    after_32:
    // 0x8009B79C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8009B7A0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009B7A4: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B7A8: swc1        $f16, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->f16.u32l;
    // 0x8009B7AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009B7B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009B7B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009B7B8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009B7C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B7C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009B7C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009B7C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009B7CC: jal         0x8009B9B0
    // 0x8009B7D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_0;
    // 0x8009B7D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x8009B7D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009B7D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009B7DC: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8009B7E0: swc1        $f4, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f4.u32l;
    // 0x8009B7E4: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8009B7E8: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8009B7EC: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x8009B7F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009B7F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009B7F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009B800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B800: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009B804: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009B808: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009B80C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8009B810: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8009B814: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009B818: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8009B81C: beq         $t6, $a1, L_8009B938
    if (ctx->r14 == ctx->r5) {
        // 0x8009B820: sw          $t6, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r14;
            goto L_8009B938;
    }
    // 0x8009B820: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8009B824: addiu       $t0, $t6, -0xC
    ctx->r8 = ADD32(ctx->r14, -0XC);
    // 0x8009B828: sltiu       $at, $t0, 0x8
    ctx->r1 = ctx->r8 < 0X8 ? 1 : 0;
    // 0x8009B82C: beq         $at, $zero, L_8009B894
    if (ctx->r1 == 0) {
        // 0x8009B830: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_8009B894;
    }
    // 0x8009B830: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8009B834: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009B838: addu        $at, $at, $t0
    gpr jr_addend_8009B840 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8009B83C: lw          $t0, 0x52FC($at)
    ctx->r8 = ADD32(ctx->r1, 0X52FC);
    // 0x8009B840: jr          $t0
    // 0x8009B844: nop

    switch (jr_addend_8009B840 >> 2) {
        case 0: goto L_8009B868; break;
        case 1: goto L_8009B848; break;
        case 2: goto L_8009B894; break;
        case 3: goto L_8009B858; break;
        case 4: goto L_8009B894; break;
        case 5: goto L_8009B894; break;
        case 6: goto L_8009B878; break;
        case 7: goto L_8009B888; break;
        default: switch_error(__func__, 0x8009B840, 0x801252FC);
    }
    // 0x8009B844: nop

L_8009B848:
    // 0x8009B848: jal         0x80084E60
    // 0x8009B84C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamoveledge_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8009B84C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8009B850: b           L_8009B894
    // 0x8009B854: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B894;
    // 0x8009B854: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B858:
    // 0x8009B858: jal         0x80084ED0
    // 0x8009B85C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovethrust_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x8009B85C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8009B860: b           L_8009B894
    // 0x8009B864: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B894;
    // 0x8009B864: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B868:
    // 0x8009B868: jal         0x80084DE0
    // 0x8009B86C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovegoto_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x8009B86C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8009B870: b           L_8009B894
    // 0x8009B874: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B894;
    // 0x8009B874: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B878:
    // 0x8009B878: jal         0x80084EA0
    // 0x8009B87C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovespline_entrypoint_5(rdram, ctx);
        goto after_3;
    // 0x8009B87C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8009B880: b           L_8009B894
    // 0x8009B884: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
        goto L_8009B894;
    // 0x8009B884: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B888:
    // 0x8009B888: jal         0x80084E30
    // 0x8009B88C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovehover_entrypoint_0(rdram, ctx);
        goto after_4;
    // 0x8009B88C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8009B890: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
L_8009B894:
    // 0x8009B894: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8009B898: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x8009B89C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8009B8A0: addiu       $t3, $t2, -0xB
    ctx->r11 = ADD32(ctx->r10, -0XB);
    // 0x8009B8A4: sltiu       $at, $t3, 0x9
    ctx->r1 = ctx->r11 < 0X9 ? 1 : 0;
    // 0x8009B8A8: beq         $at, $zero, L_8009B938
    if (ctx->r1 == 0) {
        // 0x8009B8AC: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_8009B938;
    }
    // 0x8009B8AC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8009B8B0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009B8B4: addu        $at, $at, $t3
    gpr jr_addend_8009B8BC = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8009B8B8: lw          $t3, 0x531C($at)
    ctx->r11 = ADD32(ctx->r1, 0X531C);
    // 0x8009B8BC: jr          $t3
    // 0x8009B8C0: nop

    switch (jr_addend_8009B8BC >> 2) {
        case 0: goto L_8009B8E4; break;
        case 1: goto L_8009B8C4; break;
        case 2: goto L_8009B8D4; break;
        case 3: goto L_8009B938; break;
        case 4: goto L_8009B910; break;
        case 5: goto L_8009B938; break;
        case 6: goto L_8009B938; break;
        case 7: goto L_8009B920; break;
        case 8: goto L_8009B930; break;
        default: switch_error(__func__, 0x8009B8BC, 0x8012531C);
    }
    // 0x8009B8C0: nop

L_8009B8C4:
    // 0x8009B8C4: jal         0x80084DE8
    // 0x8009B8C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovegoto_entrypoint_6(rdram, ctx);
        goto after_5;
    // 0x8009B8C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8009B8CC: b           L_8009B93C
    // 0x8009B8D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8009B93C;
    // 0x8009B8D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009B8D4:
    // 0x8009B8D4: jal         0x80084E68
    // 0x8009B8D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamoveledge_entrypoint_2(rdram, ctx);
        goto after_6;
    // 0x8009B8D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8009B8DC: b           L_8009B93C
    // 0x8009B8E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8009B93C;
    // 0x8009B8E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009B8E4:
    // 0x8009B8E4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8009B8E8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8009B8EC: beql        $t4, $t5, L_8009B93C
    if (ctx->r12 == ctx->r13) {
        // 0x8009B8F0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8009B93C;
    }
    goto skip_0;
    // 0x8009B8F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8009B8F4: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B8F8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009B8FC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8009B900: swc1        $f4, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f4.u32l;
    // 0x8009B904: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x8009B908: b           L_8009B938
    // 0x8009B90C: swc1        $f6, 0x4C($t6)
    MEM_W(0X4C, ctx->r14) = ctx->f6.u32l;
        goto L_8009B938;
    // 0x8009B90C: swc1        $f6, 0x4C($t6)
    MEM_W(0X4C, ctx->r14) = ctx->f6.u32l;
L_8009B910:
    // 0x8009B910: jal         0x80084ED8
    // 0x8009B914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovethrust_entrypoint_1(rdram, ctx);
        goto after_7;
    // 0x8009B914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8009B918: b           L_8009B93C
    // 0x8009B91C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8009B93C;
    // 0x8009B91C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009B920:
    // 0x8009B920: jal         0x80084EA8
    // 0x8009B924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovespline_entrypoint_6(rdram, ctx);
        goto after_8;
    // 0x8009B924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8009B928: b           L_8009B93C
    // 0x8009B92C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8009B93C;
    // 0x8009B92C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009B930:
    // 0x8009B930: jal         0x80084E38
    // 0x8009B934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovehover_entrypoint_1(rdram, ctx);
        goto after_9;
    // 0x8009B934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_8009B938:
    // 0x8009B938: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009B93C:
    // 0x8009B93C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009B940: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009B944: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009B94C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B94C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009B950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009B954: beq         $a1, $zero, L_8009B970
    if (ctx->r5 == 0) {
        // 0x8009B958: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8009B970;
    }
    // 0x8009B958: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8009B95C: lw          $a0, 0xC8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC8);
    // 0x8009B960: jal         0x800EE7F8
    // 0x8009B964: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009B964: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_0:
    // 0x8009B968: b           L_8009B980
    // 0x8009B96C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8009B980;
    // 0x8009B96C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009B970:
    // 0x8009B970: lw          $a0, 0xC8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XC8);
    // 0x8009B974: jal         0x800EFD24
    // 0x8009B978: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x8009B978: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_1:
    // 0x8009B97C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009B980:
    // 0x8009B980: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009B984: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009B98C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B98C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009B990: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009B994: lw          $a0, 0xC8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC8);
    // 0x8009B998: jal         0x800EE7F8
    // 0x8009B99C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009B99C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x8009B9A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009B9A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009B9A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009B9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B9B0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009B9B4: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8009B9B8: jr          $ra
    // 0x8009B9BC: swc1        $f12, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x8009B9BC: swc1        $f12, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009B9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B9C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009B9C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009B9C8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009B9CC: jal         0x800136E4
    // 0x8009B9D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800136E4(rdram, ctx);
        goto after_0;
    // 0x8009B9D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009B9D4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8009B9D8: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x8009B9DC: swc1        $f0, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f0.u32l;
    // 0x8009B9E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009B9E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009B9E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009B9F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B9F0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009B9F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009B9F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009B9FC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8009BA00: jal         0x8009B9B0
    // 0x8009BA04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009B9B0(rdram, ctx);
        goto after_0;
    // 0x8009BA04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009BA08: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8009BA0C: lw          $v0, 0xC8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC8);
    // 0x8009BA10: addiu       $a0, $v0, 0x1C
    ctx->r4 = ADD32(ctx->r2, 0X1C);
    // 0x8009BA14: lw          $a1, 0x40($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X40);
    // 0x8009BA18: jal         0x800EEB9C
    // 0x8009BA1C: lw          $a2, 0x3C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X3C);
    func_800EEB9C(rdram, ctx);
        goto after_1;
    // 0x8009BA1C: lw          $a2, 0x3C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X3C);
    after_1:
    // 0x8009BA20: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8009BA24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009BA28: lw          $t6, 0xC8($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XC8);
    // 0x8009BA2C: swc1        $f4, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f4.u32l;
    // 0x8009BA30: lw          $v0, 0xC8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC8);
    // 0x8009BA34: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8009BA38: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x8009BA3C: lw          $v0, 0xC8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC8);
    // 0x8009BA40: lwc1        $f8, 0x24($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8009BA44: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
    // 0x8009BA48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009BA4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009BA50: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009BA58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BA58: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009BA5C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8009BA60: jr          $ra
    // 0x8009BA64: swc1        $f12, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x8009BA64: swc1        $f12, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009BA68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BA68: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009BA6C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8009BA70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009BA74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009BA78: lw          $a0, 0xC8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC8);
    // 0x8009BA7C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8009BA80: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x8009BA84: jal         0x800EEB9C
    // 0x8009BA88: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EEB9C(rdram, ctx);
        goto after_0;
    // 0x8009BA88: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x8009BA8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009BA90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009BA94: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009BA9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BA9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009BAA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009BAA4: beq         $a1, $zero, L_8009BAC0
    if (ctx->r5 == 0) {
        // 0x8009BAA8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8009BAC0;
    }
    // 0x8009BAA8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8009BAAC: lw          $a0, 0xC8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC8);
    // 0x8009BAB0: jal         0x800EE7F8
    // 0x8009BAB4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009BAB4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x8009BAB8: b           L_8009BAD0
    // 0x8009BABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8009BAD0;
    // 0x8009BABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009BAC0:
    // 0x8009BAC0: lw          $a0, 0xC8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XC8);
    // 0x8009BAC4: jal         0x800EFD24
    // 0x8009BAC8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x8009BAC8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_1:
    // 0x8009BACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009BAD0:
    // 0x8009BAD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009BAD4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009BADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BADC: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8009BAE0: jr          $ra
    // 0x8009BAE4: lwc1        $f0, 0x34($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X34);
    return;
    // 0x8009BAE4: lwc1        $f0, 0x34($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X34);
;}
RECOMP_FUNC void func_8009BAE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BAE8: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8009BAEC: jr          $ra
    // 0x8009BAF0: lwc1        $f0, 0x38($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X38);
    return;
    // 0x8009BAF0: lwc1        $f0, 0x38($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X38);
;}
RECOMP_FUNC void func_8009BAF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BAF4: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8009BAF8: jr          $ra
    // 0x8009BAFC: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    return;
    // 0x8009BAFC: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
;}
RECOMP_FUNC void func_8009BB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BB00: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8009BB04: jr          $ra
    // 0x8009BB08: lwc1        $f0, 0x3C($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X3C);
    return;
    // 0x8009BB08: lwc1        $f0, 0x3C($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X3C);
;}
RECOMP_FUNC void func_8009BB0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BB0C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8009BB10: jr          $ra
    // 0x8009BB14: lwc1        $f0, 0x20($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X20);
    return;
    // 0x8009BB14: lwc1        $f0, 0x20($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X20);
;}
RECOMP_FUNC void func_8009BB18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BB18: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8009BB1C: jr          $ra
    // 0x8009BB20: lwc1        $f0, 0x40($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X40);
    return;
    // 0x8009BB20: lwc1        $f0, 0x40($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X40);
;}
RECOMP_FUNC void func_8009BB24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BB24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009BB28: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8009BB2C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8009BB30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009BB34: lw          $a1, 0xC8($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC8);
    // 0x8009BB38: jal         0x800EE7F8
    // 0x8009BB3C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009BB3C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_0:
    // 0x8009BB40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009BB44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009BB48: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009BB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BB50: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8009BB54: jr          $ra
    // 0x8009BB58: lwc1        $f0, 0x14($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X14);
    return;
    // 0x8009BB58: lwc1        $f0, 0x14($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X14);
;}
RECOMP_FUNC void func_8009BB5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BB5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009BB60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009BB64: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x8009BB68: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8009BB6C: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8009BB70: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8009BB74: nop

    // 0x8009BB78: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8009BB7C: jal         0x8002DCA0
    // 0x8009BB80: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x8009BB80: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x8009BB84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009BB88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009BB8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009BB94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BB94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009BB98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009BB9C: lw          $a0, 0xC8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC8);
    // 0x8009BBA0: jal         0x800EEF94
    // 0x8009BBA4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_800EEF94(rdram, ctx);
        goto after_0;
    // 0x8009BBA4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_0:
    // 0x8009BBA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009BBAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009BBB0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009BBB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BBB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009BBBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009BBC0: jal         0x8009BB5C
    // 0x8009BBC4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009BB5C(rdram, ctx);
        goto after_0;
    // 0x8009BBC4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009BBC8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8009BBCC: jal         0x8009BB00
    // 0x8009BBD0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_8009BB00(rdram, ctx);
        goto after_1;
    // 0x8009BBD0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8009BBD4: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8009BBD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009BBDC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8009BBE0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8009BBE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009BBE8: bc1fl       L_8009BBFC
    if (!c1cs) {
        // 0x8009BBEC: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_8009BBFC;
    }
    goto skip_0;
    // 0x8009BBEC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_0:
    // 0x8009BBF0: b           L_8009BC00
    // 0x8009BBF4: div.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
        goto L_8009BC00;
    // 0x8009BBF4: div.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8009BBF8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_8009BBFC:
    // 0x8009BBFC: nop

L_8009BC00:
    // 0x8009BC00: jr          $ra
    // 0x8009BC04: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x8009BC04: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
;}
RECOMP_FUNC void func_8009BC08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BC08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009BC0C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8009BC10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009BC14: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8009BC18: lw          $a1, 0xC8($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC8);
    // 0x8009BC1C: jal         0x800EE7F8
    // 0x8009BC20: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009BC20: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_0:
    // 0x8009BC24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009BC28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009BC2C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009BC34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BC34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009BC38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009BC3C: jal         0x8009BC6C
    // 0x8009BC40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x8009BC40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009BC44: jal         0x8009BC90
    // 0x8009BC48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BC90(rdram, ctx);
        goto after_1;
    // 0x8009BC48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8009BC4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009BC50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009BC54: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009BC5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BC5C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009BC60: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8009BC64: jr          $ra
    // 0x8009BC68: swc1        $f12, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x8009BC68: swc1        $f12, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009BC6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BC6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009BC70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009BC74: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009BC78: jal         0x8009BCB4
    // 0x8009BC7C: lw          $a1, 0x7EF0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7EF0);
    func_8009BCB4(rdram, ctx);
        goto after_0;
    // 0x8009BC7C: lw          $a1, 0x7EF0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7EF0);
    after_0:
    // 0x8009BC80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009BC84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009BC88: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009BC90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BC90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009BC94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009BC98: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009BC9C: jal         0x8009BCC4
    // 0x8009BCA0: lw          $a1, 0x7EF4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7EF4);
    func_8009BCC4(rdram, ctx);
        goto after_0;
    // 0x8009BCA0: lw          $a1, 0x7EF4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7EF4);
    after_0:
    // 0x8009BCA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009BCA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009BCAC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009BCB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BCB4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009BCB8: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8009BCBC: jr          $ra
    // 0x8009BCC0: swc1        $f12, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x8009BCC0: swc1        $f12, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009BCC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BCC4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009BCC8: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8009BCCC: jr          $ra
    // 0x8009BCD0: swc1        $f12, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x8009BCD0: swc1        $f12, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009BCD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BCD4: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x8009BCD8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009BCDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8009BCE0: lwc1        $f0, 0x18($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X18);
    // 0x8009BCE4: lwc1        $f2, 0x10($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8009BCE8: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8009BCEC: nop

    // 0x8009BCF0: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8009BCF4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8009BCF8: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8009BCFC: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x8009BD00: nop

    // 0x8009BD04: bc1f        L_8009BD10
    if (!c1cs) {
        // 0x8009BD08: nop
    
            goto L_8009BD10;
    }
    // 0x8009BD08: nop

    // 0x8009BD0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8009BD10:
    // 0x8009BD10: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009BD18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BD18: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009BD1C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8009BD20: jr          $ra
    // 0x8009BD24: swc1        $f12, 0x50($t6)
    MEM_W(0X50, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x8009BD24: swc1        $f12, 0x50($t6)
    MEM_W(0X50, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009BD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BD30: jr          $ra
    // 0x8009BD34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8009BD34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8009BD38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BD38: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x8009BD3C: jr          $ra
    // 0x8009BD40: sb          $a1, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r5;
    return;
    // 0x8009BD40: sb          $a1, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_8009BD44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BD44: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x8009BD48: jr          $ra
    // 0x8009BD4C: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
    return;
    // 0x8009BD4C: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
;}
RECOMP_FUNC void func_8009BD50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BD50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009BD54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009BD58: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x8009BD5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8009BD60: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x8009BD64: jal         0x8009BD38
    // 0x8009BD68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BD38(rdram, ctx);
        goto after_0;
    // 0x8009BD68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009BD6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009BD70: jal         0x80091788
    // 0x8009BD74: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80091788(rdram, ctx);
        goto after_1;
    // 0x8009BD74: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x8009BD78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009BD7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009BD80: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009BD88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BD88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009BD8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009BD90: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x8009BD94: jal         0x8009BDAC
    // 0x8009BD98: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    func_8009BDAC(rdram, ctx);
        goto after_0;
    // 0x8009BD98: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    after_0:
    // 0x8009BD9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009BDA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009BDA4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009BDAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BDAC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009BDB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009BDB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009BDB8: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8009BDBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009BDC0: jal         0x800917A8
    // 0x8009BDC4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800917A8(rdram, ctx);
        goto after_0;
    // 0x8009BDC4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x8009BDC8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009BDCC: jal         0x8009BD38
    // 0x8009BDD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009BD38(rdram, ctx);
        goto after_1;
    // 0x8009BDD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8009BDD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009BDD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009BDDC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009BDE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BDE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009BDE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009BDEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009BDF0: jal         0x800915AC
    // 0x8009BDF4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800915AC(rdram, ctx);
        goto after_0;
    // 0x8009BDF4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x8009BDF8: beq         $v0, $zero, L_8009BE08
    if (ctx->r2 == 0) {
        // 0x8009BDFC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8009BE08;
    }
    // 0x8009BDFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009BE00: jal         0x8009BD38
    // 0x8009BE04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009BD38(rdram, ctx);
        goto after_1;
    // 0x8009BE04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_8009BE08:
    // 0x8009BE08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009BE0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009BE10: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009BE20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BE20: jr          $ra
    // 0x8009BE24: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    return;
    // 0x8009BE24: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
;}
RECOMP_FUNC void func_8009BE28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BE28: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8009BE2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8009BE30: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8009BE34: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8009BE38: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8009BE3C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8009BE40: jal         0x800D8FF8
    // 0x8009BE44: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x8009BE44: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_0:
    // 0x8009BE48: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8009BE4C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8009BE50: lw          $s0, 0xDC($t6)
    ctx->r16 = MEM_W(ctx->r14, 0XDC);
    // 0x8009BE54: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8009BE58: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8009BE5C: jal         0x80013728
    // 0x8009BE60: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_80013728(rdram, ctx);
        goto after_1;
    // 0x8009BE60: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_1:
    // 0x8009BE64: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8009BE68: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8009BE6C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8009BE70: mul.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8009BE74: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
    // 0x8009BE78: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x8009BE7C: bc1tl       L_8009BEC8
    if (c1cs) {
        // 0x8009BE80: lwc1        $f10, 0x28($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
            goto L_8009BEC8;
    }
    goto skip_0;
    // 0x8009BE80: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    skip_0:
    // 0x8009BE84: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8009BE88: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8009BE8C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8009BE90: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8009BE94: bc1fl       L_8009BEB8
    if (!c1cs) {
        // 0x8009BE98: mtc1        $at, $f14
        ctx->f14.u32l = ctx->r1;
            goto L_8009BEB8;
    }
    goto skip_1;
    // 0x8009BE98: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    skip_1:
    // 0x8009BE9C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x8009BEA0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x8009BEA4: jal         0x800F0D50
    // 0x8009BEA8: lui         $a2, 0xC040
    ctx->r6 = S32(0XC040 << 16);
    func_800F0D50(rdram, ctx);
        goto after_2;
    // 0x8009BEA8: lui         $a2, 0xC040
    ctx->r6 = S32(0XC040 << 16);
    after_2:
    // 0x8009BEAC: b           L_8009BEC4
    // 0x8009BEB0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_8009BEC4;
    // 0x8009BEB0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8009BEB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
L_8009BEB8:
    // 0x8009BEB8: jal         0x800F0D50
    // 0x8009BEBC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_800F0D50(rdram, ctx);
        goto after_3;
    // 0x8009BEBC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x8009BEC0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_8009BEC4:
    // 0x8009BEC4: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
L_8009BEC8:
    // 0x8009BEC8: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8009BECC: mul.s       $f12, $f20, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x8009BED0: jal         0x800F212C
    // 0x8009BED4: nop

    func_800F212C(rdram, ctx);
        goto after_4;
    // 0x8009BED4: nop

    after_4:
    // 0x8009BED8: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8009BEDC: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x8009BEE0: swc1        $f18, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f18.u32l;
    // 0x8009BEE4: jal         0x800136E4
    // 0x8009BEE8: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    func_800136E4(rdram, ctx);
        goto after_5;
    // 0x8009BEE8: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    after_5:
    // 0x8009BEEC: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x8009BEF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8009BEF4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8009BEF8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8009BEFC: jr          $ra
    // 0x8009BF00: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8009BF00: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8009BF04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BF04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009BF08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009BF0C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8009BF10: lw          $t6, 0xDC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XDC);
    // 0x8009BF14: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x8009BF18: lw          $t7, 0xDC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XDC);
    // 0x8009BF1C: jal         0x8009C000
    // 0x8009BF20: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    func_8009C000(rdram, ctx);
        goto after_0;
    // 0x8009BF20: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    after_0:
    // 0x8009BF24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009BF28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009BF2C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009BF34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BF34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009BF38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009BF3C: lw          $v0, 0xDC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XDC);
    // 0x8009BF40: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x8009BF44: jal         0x8009BE28
    // 0x8009BF48: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    func_8009BE28(rdram, ctx);
        goto after_0;
    // 0x8009BF48: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    after_0:
    // 0x8009BF4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009BF50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009BF54: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009BF5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BF5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009BF60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009BF64: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009BF68: jal         0x800136E4
    // 0x8009BF6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800136E4(rdram, ctx);
        goto after_0;
    // 0x8009BF6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009BF70: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8009BF74: lw          $t7, 0xDC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XDC);
    // 0x8009BF78: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x8009BF7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009BF80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009BF84: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009BF8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BF8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009BF90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009BF94: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009BF98: jal         0x800136E4
    // 0x8009BF9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800136E4(rdram, ctx);
        goto after_0;
    // 0x8009BF9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009BFA0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8009BFA4: lw          $t7, 0xDC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XDC);
    // 0x8009BFA8: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x8009BFAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009BFB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009BFB4: jr          $ra
    // 0x8009BFB8: nop

    return;
    // 0x8009BFB8: nop

;}
RECOMP_FUNC void func_8009BFBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BFBC: lw          $v0, 0xDC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XDC);
    // 0x8009BFC0: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8009BFC4: jr          $ra
    // 0x8009BFC8: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    return;
    // 0x8009BFC8: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8009BFCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BFCC: lw          $t6, 0xDC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XDC);
    // 0x8009BFD0: jr          $ra
    // 0x8009BFD4: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    return;
    // 0x8009BFD4: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
;}
RECOMP_FUNC void func_8009BFD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BFD8: lw          $t6, 0xDC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XDC);
    // 0x8009BFDC: jr          $ra
    // 0x8009BFE0: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
    return;
    // 0x8009BFE0: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
;}
RECOMP_FUNC void func_8009BFE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BFE4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009BFE8: lw          $t6, 0xDC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XDC);
    // 0x8009BFEC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8009BFF0: swc1        $f12, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f12.u32l;
    // 0x8009BFF4: lw          $t7, 0xDC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XDC);
    // 0x8009BFF8: jr          $ra
    // 0x8009BFFC: swc1        $f14, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f14.u32l;
    return;
    // 0x8009BFFC: swc1        $f14, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_8009C000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C008: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x8009C00C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8009C010: jal         0x8009BFE4
    // 0x8009C014: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    func_8009BFE4(rdram, ctx);
        goto after_0;
    // 0x8009C014: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    after_0:
    // 0x8009C018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C01C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C020: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C030: jr          $ra
    // 0x8009C034: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    return;
    // 0x8009C034: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
;}
RECOMP_FUNC void func_8009C038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C038: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C03C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C040: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009C044: lw          $a0, 0xE4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE4);
    // 0x8009C048: jal         0x800EFD24
    // 0x8009C04C: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x8009C04C: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    after_0:
    // 0x8009C050: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8009C054: jal         0x800EFD24
    // 0x8009C058: lw          $a0, 0xE4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XE4);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x8009C058: lw          $a0, 0xE4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XE4);
    after_1:
    // 0x8009C05C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8009C060: lw          $a0, 0xE4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XE4);
    // 0x8009C064: jal         0x800EFD24
    // 0x8009C068: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EFD24(rdram, ctx);
        goto after_2;
    // 0x8009C068: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_2:
    // 0x8009C06C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8009C070: lw          $a0, 0xE4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XE4);
    // 0x8009C074: jal         0x800EFD24
    // 0x8009C078: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_800EFD24(rdram, ctx);
        goto after_3;
    // 0x8009C078: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_3:
    // 0x8009C07C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C084: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C08C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C08C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C090: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C094: jal         0x8009C21C
    // 0x8009C098: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009C21C(rdram, ctx);
        goto after_0;
    // 0x8009C098: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009C09C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8009C0A0: lw          $a0, 0xE4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XE4);
    // 0x8009C0A4: jal         0x800EFD24
    // 0x8009C0A8: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x8009C0A8: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    after_1:
    // 0x8009C0AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C0B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C0B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C0BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C0BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C0C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C0C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009C0C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8009C0CC: jal         0x800EE7F8
    // 0x8009C0D0: lw          $a0, 0xE4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE4);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009C0D0: lw          $a0, 0xE4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE4);
    after_0:
    // 0x8009C0D4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8009C0D8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8009C0DC: lw          $a0, 0xE4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XE4);
    // 0x8009C0E0: jal         0x800EE7F8
    // 0x8009C0E4: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x8009C0E4: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_1:
    // 0x8009C0E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C0EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C0F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C0F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C0F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C0FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C100: jal         0x800EE7F8
    // 0x8009C104: lw          $a0, 0xE4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE4);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009C104: lw          $a0, 0xE4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE4);
    after_0:
    // 0x8009C108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C10C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C110: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C118: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009C11C: lw          $t6, 0xE4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE4);
    // 0x8009C120: jr          $ra
    // 0x8009C124: swc1        $f12, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x8009C124: swc1        $f12, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009C128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C12C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8009C130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C134: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8009C138: jal         0x800EE7F8
    // 0x8009C13C: lw          $a1, 0xE4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XE4);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009C13C: lw          $a1, 0xE4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XE4);
    after_0:
    // 0x8009C140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C148: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C150: lw          $t6, 0xE4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XE4);
    // 0x8009C154: jr          $ra
    // 0x8009C158: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
    return;
    // 0x8009C158: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
;}
RECOMP_FUNC void func_8009C15C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C15C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C160: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8009C164: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8009C168: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C16C: lw          $a1, 0xE4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XE4);
    // 0x8009C170: jal         0x800EE7F8
    // 0x8009C174: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009C174: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_0:
    // 0x8009C178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C17C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C180: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C188: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C18C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8009C190: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C194: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8009C198: lw          $a1, 0xE4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XE4);
    // 0x8009C19C: jal         0x800EE7F8
    // 0x8009C1A0: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009C1A0: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    after_0:
    // 0x8009C1A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C1A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C1AC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C1B4: lw          $v0, 0xE4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE4);
    // 0x8009C1B8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009C1BC: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8009C1C0: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x8009C1C4: jr          $ra
    // 0x8009C1C8: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    return;
    // 0x8009C1C8: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_8009C1CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C1CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C1D0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8009C1D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C1D8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8009C1DC: lw          $a1, 0xE4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XE4);
    // 0x8009C1E0: jal         0x800EE7F8
    // 0x8009C1E4: addiu       $a1, $a1, 0x24
    ctx->r5 = ADD32(ctx->r5, 0X24);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009C1E4: addiu       $a1, $a1, 0x24
    ctx->r5 = ADD32(ctx->r5, 0X24);
    after_0:
    // 0x8009C1E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C1EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C1F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C1F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C1F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C1FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C200: lw          $a0, 0xE4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE4);
    // 0x8009C204: jal         0x800EE7F8
    // 0x8009C208: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009C208: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    after_0:
    // 0x8009C20C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C210: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C214: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C21C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C21C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C224: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009C228: lw          $a2, 0xE4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XE4);
    // 0x8009C22C: addiu       $a0, $a2, 0x18
    ctx->r4 = ADD32(ctx->r6, 0X18);
    // 0x8009C230: jal         0x800EE7F8
    // 0x8009C234: addiu       $a1, $a2, 0xC
    ctx->r5 = ADD32(ctx->r6, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009C234: addiu       $a1, $a2, 0xC
    ctx->r5 = ADD32(ctx->r6, 0XC);
    after_0:
    // 0x8009C238: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8009C23C: lw          $a2, 0xE4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0XE4);
    // 0x8009C240: addiu       $a0, $a2, 0xC
    ctx->r4 = ADD32(ctx->r6, 0XC);
    // 0x8009C244: jal         0x800EE7F8
    // 0x8009C248: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x8009C248: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_1:
    // 0x8009C24C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C254: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C25C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C264: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009C268: lw          $a0, 0xE4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE4);
    // 0x8009C26C: jal         0x800EF04C
    // 0x8009C270: addiu       $a1, $a0, 0x24
    ctx->r5 = ADD32(ctx->r4, 0X24);
    func_800EF04C(rdram, ctx);
        goto after_0;
    // 0x8009C270: addiu       $a1, $a0, 0x24
    ctx->r5 = ADD32(ctx->r4, 0X24);
    after_0:
    // 0x8009C274: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8009C278: lw          $a0, 0xE4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XE4);
    // 0x8009C27C: jal         0x800EFD24
    // 0x8009C280: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x8009C280: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    after_1:
    // 0x8009C284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C28C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C2A0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8009C2A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C2A8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009C2AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C2B0: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x8009C2B4: jal         0x800DBEFC
    // 0x8009C2B8: lh          $a1, 0x7F02($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X7F02);
    func_800DBEFC(rdram, ctx);
        goto after_0;
    // 0x8009C2B8: lh          $a1, 0x7F02($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X7F02);
    after_0:
    // 0x8009C2BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C2C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C2C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C2D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C2D0: jr          $ra
    // 0x8009C2D4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    return;
    // 0x8009C2D4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
;}
RECOMP_FUNC void func_8009C2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C2D8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8009C2DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009C2E0: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x8009C2E4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8009C2E8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8009C2EC: jal         0x800D8FF8
    // 0x8009C2F0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x8009C2F0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_0:
    // 0x8009C2F4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8009C2F8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8009C2FC: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8009C300: lw          $v0, 0xF4($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XF4);
    // 0x8009C304: mul.s       $f16, $f4, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8009C308: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8009C30C: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8009C310: sub.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8009C314: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x8009C318: jal         0x800F2100
    // 0x8009C31C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_800F2100(rdram, ctx);
        goto after_1;
    // 0x8009C31C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x8009C320: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8009C324: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8009C328: lui         $a2, 0xBDCC
    ctx->r6 = S32(0XBDCC << 16);
    // 0x8009C32C: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8009C330: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8009C334: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8009C338: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8009C33C: bc1f        L_8009C378
    if (!c1cs) {
        // 0x8009C340: nop
    
            goto L_8009C378;
    }
    // 0x8009C340: nop

    // 0x8009C344: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009C348: lui         $at, 0xC3B4
    ctx->r1 = S32(0XC3B4 << 16);
    // 0x8009C34C: c.lt.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl < ctx->f18.fl;
    // 0x8009C350: nop

    // 0x8009C354: bc1fl       L_8009C370
    if (!c1cs) {
        // 0x8009C358: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_8009C370;
    }
    goto skip_0;
    // 0x8009C358: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_0:
    // 0x8009C35C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8009C360: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8009C364: b           L_8009C378
    // 0x8009C368: add.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f2.fl;
        goto L_8009C378;
    // 0x8009C368: add.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f2.fl;
    // 0x8009C36C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_8009C370:
    // 0x8009C370: nop

    // 0x8009C374: add.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f2.fl;
L_8009C378:
    // 0x8009C378: mul.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x8009C37C: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8009C380: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009C384: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009C388: mul.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8009C38C: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x8009C390: nop

    // 0x8009C394: bc1fl       L_8009C3B0
    if (!c1cs) {
        // 0x8009C398: mfc1        $a2, $f16
        ctx->r6 = (int32_t)ctx->f16.u32l;
            goto L_8009C3B0;
    }
    goto skip_1;
    // 0x8009C398: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    skip_1:
    // 0x8009C39C: jal         0x800F0D50
    // 0x8009C3A0: neg.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = -ctx->f16.fl;
    func_800F0D50(rdram, ctx);
        goto after_2;
    // 0x8009C3A0: neg.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = -ctx->f16.fl;
    after_2:
    // 0x8009C3A4: b           L_8009C3BC
    // 0x8009C3A8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_8009C3BC;
    // 0x8009C3A8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x8009C3AC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
L_8009C3B0:
    // 0x8009C3B0: jal         0x800F0D50
    // 0x8009C3B4: lwc1        $f14, 0x5340($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X5340);
    func_800F0D50(rdram, ctx);
        goto after_3;
    // 0x8009C3B4: lwc1        $f14, 0x5340($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X5340);
    after_3:
    // 0x8009C3B8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_8009C3BC:
    // 0x8009C3BC: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x8009C3C0: jal         0x800F2100
    // 0x8009C3C4: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
    func_800F2100(rdram, ctx);
        goto after_4;
    // 0x8009C3C4: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
    after_4:
    // 0x8009C3C8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x8009C3CC: jal         0x800F2100
    // 0x8009C3D0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_800F2100(rdram, ctx);
        goto after_5;
    // 0x8009C3D0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x8009C3D4: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8009C3D8: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8009C3DC: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8009C3E0: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x8009C3E4: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8009C3E8: bc1fl       L_8009C408
    if (!c1cs) {
        // 0x8009C3EC: lw          $v0, 0xF4($t8)
        ctx->r2 = MEM_W(ctx->r24, 0XF4);
            goto L_8009C408;
    }
    goto skip_2;
    // 0x8009C3EC: lw          $v0, 0xF4($t8)
    ctx->r2 = MEM_W(ctx->r24, 0XF4);
    skip_2:
    // 0x8009C3F0: lw          $v0, 0xF4($t7)
    ctx->r2 = MEM_W(ctx->r15, 0XF4);
    // 0x8009C3F4: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8009C3F8: add.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f14.fl;
    // 0x8009C3FC: b           L_8009C410
    // 0x8009C400: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
        goto L_8009C410;
    // 0x8009C400: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x8009C404: lw          $v0, 0xF4($t8)
    ctx->r2 = MEM_W(ctx->r24, 0XF4);
L_8009C408:
    // 0x8009C408: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8009C40C: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
L_8009C410:
    // 0x8009C410: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8009C414: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8009C418: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8009C41C: lw          $v0, 0xF4($t9)
    ctx->r2 = MEM_W(ctx->r25, 0XF4);
    // 0x8009C420: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8009C424: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8009C428: nop

    // 0x8009C42C: bc1fl       L_8009C45C
    if (!c1cs) {
        // 0x8009C430: sub.s       $f18, $f0, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_8009C45C;
    }
    goto skip_3;
    // 0x8009C430: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
    skip_3:
    // 0x8009C434: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009C438: nop

    // 0x8009C43C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8009C440: nop

    // 0x8009C444: bc1fl       L_8009C464
    if (!c1cs) {
        // 0x8009C448: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8009C464;
    }
    goto skip_4;
    // 0x8009C448: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x8009C44C: add.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x8009C450: b           L_8009C460
    // 0x8009C454: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
        goto L_8009C460;
    // 0x8009C454: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x8009C458: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
L_8009C45C:
    // 0x8009C45C: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
L_8009C460:
    // 0x8009C460: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009C464:
    // 0x8009C464: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8009C468: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8009C46C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C474: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C47C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8009C480: lw          $t6, 0xF4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XF4);
    // 0x8009C484: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x8009C488: lw          $t7, 0xF4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XF4);
    // 0x8009C48C: jal         0x8009C570
    // 0x8009C490: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    func_8009C570(rdram, ctx);
        goto after_0;
    // 0x8009C490: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    after_0:
    // 0x8009C494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C49C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C4A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C4A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C4A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C4AC: lw          $v0, 0xF4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF4);
    // 0x8009C4B0: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x8009C4B4: jal         0x8009C2D8
    // 0x8009C4B8: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    func_8009C2D8(rdram, ctx);
        goto after_0;
    // 0x8009C4B8: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    after_0:
    // 0x8009C4BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C4C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C4C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C4CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C4D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C4D4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009C4D8: jal         0x800136E4
    // 0x8009C4DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800136E4(rdram, ctx);
        goto after_0;
    // 0x8009C4DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009C4E0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8009C4E4: lw          $t7, 0xF4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XF4);
    // 0x8009C4E8: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x8009C4EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C4F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C4F4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C4FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C4FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C504: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009C508: jal         0x800136E4
    // 0x8009C50C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800136E4(rdram, ctx);
        goto after_0;
    // 0x8009C50C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009C510: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8009C514: lw          $t7, 0xF4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XF4);
    // 0x8009C518: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x8009C51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C524: jr          $ra
    // 0x8009C528: nop

    return;
    // 0x8009C528: nop

;}
RECOMP_FUNC void func_8009C52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C52C: lw          $v0, 0xF4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF4);
    // 0x8009C530: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8009C534: jr          $ra
    // 0x8009C538: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    return;
    // 0x8009C538: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8009C53C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C53C: lw          $t6, 0xF4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XF4);
    // 0x8009C540: jr          $ra
    // 0x8009C544: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    return;
    // 0x8009C544: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
;}
RECOMP_FUNC void func_8009C548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C548: lw          $t6, 0xF4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XF4);
    // 0x8009C54C: jr          $ra
    // 0x8009C550: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
    return;
    // 0x8009C550: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
;}
RECOMP_FUNC void func_8009C554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C554: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009C558: lw          $t6, 0xF4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XF4);
    // 0x8009C55C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8009C560: swc1        $f12, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f12.u32l;
    // 0x8009C564: lw          $t7, 0xF4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XF4);
    // 0x8009C568: jr          $ra
    // 0x8009C56C: swc1        $f14, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f14.u32l;
    return;
    // 0x8009C56C: swc1        $f14, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_8009C570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C570: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C574: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C578: lui         $a1, 0x442F
    ctx->r5 = S32(0X442F << 16);
    // 0x8009C57C: jal         0x8009C554
    // 0x8009C580: lui         $a2, 0x40F0
    ctx->r6 = S32(0X40F0 << 16);
    func_8009C554(rdram, ctx);
        goto after_0;
    // 0x8009C580: lui         $a2, 0x40F0
    ctx->r6 = S32(0X40F0 << 16);
    after_0:
    // 0x8009C584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C58C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C5A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C5A0: jr          $ra
    // 0x8009C5A4: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    return;
    // 0x8009C5A4: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void func_8009C5A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C5A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009C5AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C5B0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8009C5B4: jal         0x800D8FF8
    // 0x8009C5B8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x8009C5B8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8009C5BC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8009C5C0: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8009C5C4: lw          $v0, 0xF8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XF8);
    // 0x8009C5C8: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8009C5CC: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8009C5D0: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8009C5D4: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8009C5D8: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x8009C5DC: jal         0x800F2100
    // 0x8009C5E0: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    func_800F2100(rdram, ctx);
        goto after_1;
    // 0x8009C5E0: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x8009C5E4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8009C5E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009C5EC: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8009C5F0: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8009C5F4: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8009C5F8: nop

    // 0x8009C5FC: bc1fl       L_8009C63C
    if (!c1cs) {
        // 0x8009C600: mov.s       $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
            goto L_8009C63C;
    }
    goto skip_0;
    // 0x8009C600: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    skip_0:
    // 0x8009C604: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009C608: lui         $at, 0xC3B4
    ctx->r1 = S32(0XC3B4 << 16);
    // 0x8009C60C: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x8009C610: nop

    // 0x8009C614: bc1fl       L_8009C630
    if (!c1cs) {
        // 0x8009C618: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_8009C630;
    }
    goto skip_1;
    // 0x8009C618: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_1:
    // 0x8009C61C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8009C620: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8009C624: b           L_8009C638
    // 0x8009C628: add.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f2.fl;
        goto L_8009C638;
    // 0x8009C628: add.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x8009C62C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_8009C630:
    // 0x8009C630: nop

    // 0x8009C634: add.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f2.fl;
L_8009C638:
    // 0x8009C638: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_8009C63C:
    // 0x8009C63C: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x8009C640: jal         0x800F2100
    // 0x8009C644: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    func_800F2100(rdram, ctx);
        goto after_2;
    // 0x8009C644: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x8009C648: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8009C64C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8009C650: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8009C654: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8009C658: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x8009C65C: nop

    // 0x8009C660: bc1fl       L_8009C674
    if (!c1cs) {
        // 0x8009C664: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_8009C674;
    }
    goto skip_2;
    // 0x8009C664: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_2:
    // 0x8009C668: b           L_8009C698
    // 0x8009C66C: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
        goto L_8009C698;
    // 0x8009C66C: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x8009C670: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_8009C674:
    // 0x8009C674: nop

    // 0x8009C678: c.lt.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl < ctx->f4.fl;
    // 0x8009C67C: nop

    // 0x8009C680: bc1fl       L_8009C694
    if (!c1cs) {
        // 0x8009C684: mov.s       $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
            goto L_8009C694;
    }
    goto skip_3;
    // 0x8009C684: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    skip_3:
    // 0x8009C688: b           L_8009C694
    // 0x8009C68C: neg.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = -ctx->f16.fl;
        goto L_8009C694;
    // 0x8009C68C: neg.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = -ctx->f16.fl;
    // 0x8009C690: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
L_8009C694:
    // 0x8009C694: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
L_8009C698:
    // 0x8009C698: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8009C69C: jal         0x800F2100
    // 0x8009C6A0: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    func_800F2100(rdram, ctx);
        goto after_3;
    // 0x8009C6A0: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    after_3:
    // 0x8009C6A4: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8009C6A8: jal         0x800F2100
    // 0x8009C6AC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_800F2100(rdram, ctx);
        goto after_4;
    // 0x8009C6AC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x8009C6B0: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8009C6B4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8009C6B8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8009C6BC: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x8009C6C0: nop

    // 0x8009C6C4: bc1fl       L_8009C6E8
    if (!c1cs) {
        // 0x8009C6C8: lw          $v0, 0xF8($t8)
        ctx->r2 = MEM_W(ctx->r24, 0XF8);
            goto L_8009C6E8;
    }
    goto skip_4;
    // 0x8009C6C8: lw          $v0, 0xF8($t8)
    ctx->r2 = MEM_W(ctx->r24, 0XF8);
    skip_4:
    // 0x8009C6CC: lw          $v0, 0xF8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0XF8);
    // 0x8009C6D0: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8009C6D4: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8009C6D8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8009C6DC: b           L_8009C6F0
    // 0x8009C6E0: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
        goto L_8009C6F0;
    // 0x8009C6E0: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x8009C6E4: lw          $v0, 0xF8($t8)
    ctx->r2 = MEM_W(ctx->r24, 0XF8);
L_8009C6E8:
    // 0x8009C6E8: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8009C6EC: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
L_8009C6F0:
    // 0x8009C6F0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8009C6F4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8009C6F8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8009C6FC: lw          $v0, 0xF8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0XF8);
    // 0x8009C700: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8009C704: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8009C708: nop

    // 0x8009C70C: bc1fl       L_8009C73C
    if (!c1cs) {
        // 0x8009C710: sub.s       $f8, $f0, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_8009C73C;
    }
    goto skip_5;
    // 0x8009C710: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    skip_5:
    // 0x8009C714: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009C718: nop

    // 0x8009C71C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8009C720: nop

    // 0x8009C724: bc1fl       L_8009C744
    if (!c1cs) {
        // 0x8009C728: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8009C744;
    }
    goto skip_6;
    // 0x8009C728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x8009C72C: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x8009C730: b           L_8009C740
    // 0x8009C734: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
        goto L_8009C740;
    // 0x8009C734: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x8009C738: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
L_8009C73C:
    // 0x8009C73C: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
L_8009C740:
    // 0x8009C740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009C744:
    // 0x8009C744: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009C748: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C750: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8009C754: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8009C758: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8009C75C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8009C760: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8009C764: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8009C768: jal         0x800D8FF8
    // 0x8009C76C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x8009C76C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_0:
    // 0x8009C770: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8009C774: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8009C778: lw          $s0, 0xF8($t6)
    ctx->r16 = MEM_W(ctx->r14, 0XF8);
    // 0x8009C77C: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8009C780: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8009C784: jal         0x80013728
    // 0x8009C788: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_80013728(rdram, ctx);
        goto after_1;
    // 0x8009C788: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_1:
    // 0x8009C78C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8009C790: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8009C794: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8009C798: mul.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8009C79C: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
    // 0x8009C7A0: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x8009C7A4: bc1tl       L_8009C7F0
    if (c1cs) {
        // 0x8009C7A8: swc1        $f20, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
            goto L_8009C7F0;
    }
    goto skip_0;
    // 0x8009C7A8: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
    skip_0:
    // 0x8009C7AC: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8009C7B0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8009C7B4: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8009C7B8: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8009C7BC: bc1fl       L_8009C7E0
    if (!c1cs) {
        // 0x8009C7C0: mtc1        $at, $f14
        ctx->f14.u32l = ctx->r1;
            goto L_8009C7E0;
    }
    goto skip_1;
    // 0x8009C7C0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    skip_1:
    // 0x8009C7C4: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x8009C7C8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x8009C7CC: jal         0x800F0D50
    // 0x8009C7D0: lui         $a2, 0xC040
    ctx->r6 = S32(0XC040 << 16);
    func_800F0D50(rdram, ctx);
        goto after_2;
    // 0x8009C7D0: lui         $a2, 0xC040
    ctx->r6 = S32(0XC040 << 16);
    after_2:
    // 0x8009C7D4: b           L_8009C7EC
    // 0x8009C7D8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_8009C7EC;
    // 0x8009C7D8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8009C7DC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
L_8009C7E0:
    // 0x8009C7E0: jal         0x800F0D50
    // 0x8009C7E4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_800F0D50(rdram, ctx);
        goto after_3;
    // 0x8009C7E4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x8009C7E8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_8009C7EC:
    // 0x8009C7EC: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
L_8009C7F0:
    // 0x8009C7F0: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8009C7F4: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8009C7F8: mul.s       $f12, $f20, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x8009C7FC: jal         0x800F212C
    // 0x8009C800: nop

    func_800F212C(rdram, ctx);
        goto after_4;
    // 0x8009C800: nop

    after_4:
    // 0x8009C804: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8009C808: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x8009C80C: swc1        $f18, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f18.u32l;
    // 0x8009C810: jal         0x800136E4
    // 0x8009C814: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    func_800136E4(rdram, ctx);
        goto after_5;
    // 0x8009C814: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    after_5:
    // 0x8009C818: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x8009C81C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8009C820: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8009C824: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8009C828: jr          $ra
    // 0x8009C82C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8009C82C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8009C830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C830: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C838: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8009C83C: lw          $t6, 0xF8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XF8);
    // 0x8009C840: lui         $a1, 0x442F
    ctx->r5 = S32(0X442F << 16);
    // 0x8009C844: lui         $a2, 0x40F0
    ctx->r6 = S32(0X40F0 << 16);
    // 0x8009C848: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x8009C84C: lw          $t7, 0xF8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XF8);
    // 0x8009C850: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x8009C854: jal         0x8009C99C
    // 0x8009C858: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009C99C(rdram, ctx);
        goto after_0;
    // 0x8009C858: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009C85C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009C860: jal         0x8009C9B8
    // 0x8009C864: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    func_8009C9B8(rdram, ctx);
        goto after_1;
    // 0x8009C864: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    after_1:
    // 0x8009C868: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009C86C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8009C870: lw          $t8, 0xF8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XF8);
    // 0x8009C874: jal         0x8009C908
    // 0x8009C878: sw          $zero, 0xC($t8)
    MEM_W(0XC, ctx->r24) = 0;
    func_8009C908(rdram, ctx);
        goto after_2;
    // 0x8009C878: sw          $zero, 0xC($t8)
    MEM_W(0XC, ctx->r24) = 0;
    after_2:
    // 0x8009C87C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C884: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C88C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C88C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C894: lw          $v1, 0xF8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XF8);
    // 0x8009C898: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009C89C: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x8009C8A0: beql        $v0, $zero, L_8009C8FC
    if (ctx->r2 == 0) {
        // 0x8009C8A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8009C8FC;
    }
    goto skip_0;
    // 0x8009C8A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8009C8A8: beq         $v0, $at, L_8009C8CC
    if (ctx->r2 == ctx->r1) {
        // 0x8009C8AC: lui         $a1, 0x442F
        ctx->r5 = S32(0X442F << 16);
            goto L_8009C8CC;
    }
    // 0x8009C8AC: lui         $a1, 0x442F
    ctx->r5 = S32(0X442F << 16);
    // 0x8009C8B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009C8B4: beq         $v0, $at, L_8009C8DC
    if (ctx->r2 == ctx->r1) {
        // 0x8009C8B8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8009C8DC;
    }
    // 0x8009C8B8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8009C8BC: beql        $v0, $at, L_8009C8F0
    if (ctx->r2 == ctx->r1) {
        // 0x8009C8C0: lw          $a1, 0x14($v1)
        ctx->r5 = MEM_W(ctx->r3, 0X14);
            goto L_8009C8F0;
    }
    goto skip_1;
    // 0x8009C8C0: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    skip_1:
    // 0x8009C8C4: b           L_8009C8FC
    // 0x8009C8C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8009C8FC;
    // 0x8009C8C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009C8CC:
    // 0x8009C8CC: jal         0x8009C750
    // 0x8009C8D0: lui         $a2, 0x40F0
    ctx->r6 = S32(0X40F0 << 16);
    func_8009C750(rdram, ctx);
        goto after_0;
    // 0x8009C8D0: lui         $a2, 0x40F0
    ctx->r6 = S32(0X40F0 << 16);
    after_0:
    // 0x8009C8D4: b           L_8009C8FC
    // 0x8009C8D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8009C8FC;
    // 0x8009C8D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009C8DC:
    // 0x8009C8DC: jal         0x8009C5A8
    // 0x8009C8E0: lw          $a1, 0x10($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X10);
    func_8009C5A8(rdram, ctx);
        goto after_1;
    // 0x8009C8E0: lw          $a1, 0x10($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X10);
    after_1:
    // 0x8009C8E4: b           L_8009C8FC
    // 0x8009C8E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8009C8FC;
    // 0x8009C8E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C8EC: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
L_8009C8F0:
    // 0x8009C8F0: jal         0x8009C750
    // 0x8009C8F4: lw          $a2, 0x18($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X18);
    func_8009C750(rdram, ctx);
        goto after_2;
    // 0x8009C8F4: lw          $a2, 0x18($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X18);
    after_2:
    // 0x8009C8F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009C8FC:
    // 0x8009C8FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C900: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C908: lw          $t6, 0xF8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XF8);
    // 0x8009C90C: jr          $ra
    // 0x8009C910: sw          $a1, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r5;
    return;
    // 0x8009C910: sw          $a1, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_8009C914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C914: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C918: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C91C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009C920: jal         0x800136E4
    // 0x8009C924: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800136E4(rdram, ctx);
        goto after_0;
    // 0x8009C924: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009C928: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8009C92C: lw          $t7, 0xF8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XF8);
    // 0x8009C930: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x8009C934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C938: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C93C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C944: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009C948: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C94C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009C950: jal         0x800136E4
    // 0x8009C954: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800136E4(rdram, ctx);
        goto after_0;
    // 0x8009C954: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009C958: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8009C95C: lw          $t7, 0xF8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XF8);
    // 0x8009C960: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x8009C964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009C96C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009C974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C974: lw          $v0, 0xF8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF8);
    // 0x8009C978: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8009C97C: jr          $ra
    // 0x8009C980: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    return;
    // 0x8009C980: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8009C984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C984: lw          $t6, 0xF8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XF8);
    // 0x8009C988: jr          $ra
    // 0x8009C98C: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    return;
    // 0x8009C98C: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
;}
RECOMP_FUNC void func_8009C990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C990: lw          $t6, 0xF8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XF8);
    // 0x8009C994: jr          $ra
    // 0x8009C998: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
    return;
    // 0x8009C998: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
;}
RECOMP_FUNC void func_8009C99C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C99C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009C9A0: lw          $t6, 0xF8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XF8);
    // 0x8009C9A4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8009C9A8: swc1        $f12, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f12.u32l;
    // 0x8009C9AC: lw          $t7, 0xF8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XF8);
    // 0x8009C9B0: jr          $ra
    // 0x8009C9B4: swc1        $f14, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f14.u32l;
    return;
    // 0x8009C9B4: swc1        $f14, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_8009C9B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C9B8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009C9BC: lw          $t6, 0xF8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XF8);
    // 0x8009C9C0: jr          $ra
    // 0x8009C9C4: swc1        $f12, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x8009C9C4: swc1        $f12, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009C9C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C9C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009C9CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C9D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8009C9D4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8009C9D8: lw          $v0, 0xF8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF8);
    // 0x8009C9DC: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8009C9E0: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8009C9E4: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8009C9E8: jal         0x800F2100
    // 0x8009C9EC: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_800F2100(rdram, ctx);
        goto after_0;
    // 0x8009C9EC: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8009C9F0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8009C9F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009C9F8: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8009C9FC: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8009CA00: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8009CA04: nop

    // 0x8009CA08: bc1f        L_8009CA44
    if (!c1cs) {
        // 0x8009CA0C: nop
    
            goto L_8009CA44;
    }
    // 0x8009CA0C: nop

    // 0x8009CA10: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8009CA14: lui         $at, 0xC3B4
    ctx->r1 = S32(0XC3B4 << 16);
    // 0x8009CA18: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x8009CA1C: nop

    // 0x8009CA20: bc1fl       L_8009CA3C
    if (!c1cs) {
        // 0x8009CA24: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_8009CA3C;
    }
    goto skip_0;
    // 0x8009CA24: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x8009CA28: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8009CA2C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8009CA30: b           L_8009CA44
    // 0x8009CA34: add.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f0.fl;
        goto L_8009CA44;
    // 0x8009CA34: add.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f0.fl;
    // 0x8009CA38: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_8009CA3C:
    // 0x8009CA3C: nop

    // 0x8009CA40: add.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f0.fl;
L_8009CA44:
    // 0x8009CA44: jal         0x800F2100
    // 0x8009CA48: div.s       $f12, $f14, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f16.fl);
    func_800F2100(rdram, ctx);
        goto after_1;
    // 0x8009CA48: div.s       $f12, $f14, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f16.fl);
    after_1:
    // 0x8009CA4C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8009CA50: lw          $t8, 0xF8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XF8);
    // 0x8009CA54: swc1        $f0, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f0.u32l;
    // 0x8009CA58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009CA5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009CA60: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009CA70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CA70: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8009CA74: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8009CA78: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8009CA7C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8009CA80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009CA84: lw          $t7, 0x7F34($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7F34);
    // 0x8009CA88: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8009CA8C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8009CA90: and         $t8, $t7, $a2
    ctx->r24 = ctx->r15 & ctx->r6;
    // 0x8009CA94: beq         $t8, $zero, L_8009CAA4
    if (ctx->r24 == 0) {
            // 0x8009CA98: nop

    func_8009CAA4(rdram, ctx);
    return;
    }
    // 0x8009CA98: nop

    // 0x8009CA9C: jr          $ra
    // 0x8009CAA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8009CAA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8009CAA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CAA4: jr          $ra
    // 0x8009CAA8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8009CAA8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8009CAAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CAAC: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8009CAB0: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8009CAB4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8009CAB8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8009CABC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8009CAC0: lw          $v0, 0x7F38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F38);
    // 0x8009CAC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009CAC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009CACC: beq         $v0, $zero, L_8009CAE4
    if (ctx->r2 == 0) {
        // 0x8009CAD0: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8009CAE4;
    }
    // 0x8009CAD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009CAD4: jalr        $v0
    // 0x8009CAD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8009CAD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8009CADC: b           L_8009CAEC
    // 0x8009CAE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8009CAEC;
    // 0x8009CAE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009CAE4:
    // 0x8009CAE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8009CAE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009CAEC:
    // 0x8009CAEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009CAF0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009CAF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CAF8: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8009CAFC: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8009CB00: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8009CB04: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8009CB08: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8009CB0C: lw          $v0, 0x7F38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F38);
    // 0x8009CB10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009CB14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009CB18: beq         $v0, $zero, L_8009CB30
    if (ctx->r2 == 0) {
        // 0x8009CB1C: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8009CB30;
    }
    // 0x8009CB1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009CB20: jalr        $v0
    // 0x8009CB24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8009CB24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8009CB28: b           L_8009CB38
    // 0x8009CB2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8009CB38;
    // 0x8009CB2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009CB30:
    // 0x8009CB30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8009CB34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009CB38:
    // 0x8009CB38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009CB3C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009CB44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CB44: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8009CB48: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8009CB4C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8009CB50: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8009CB54: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8009CB58: lw          $v0, 0x7F38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F38);
    // 0x8009CB5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009CB60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009CB64: beq         $v0, $zero, L_8009CB7C
    if (ctx->r2 == 0) {
        // 0x8009CB68: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8009CB7C;
    }
    // 0x8009CB68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009CB6C: jalr        $v0
    // 0x8009CB70: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8009CB70: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x8009CB74: b           L_8009CB84
    // 0x8009CB78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8009CB84;
    // 0x8009CB78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009CB7C:
    // 0x8009CB7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8009CB80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009CB84:
    // 0x8009CB84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009CB88: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009CB90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CB90: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8009CB94: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8009CB98: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8009CB9C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8009CBA0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8009CBA4: lw          $v0, 0x7F38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7F38);
    // 0x8009CBA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009CBAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009CBB0: beq         $v0, $zero, L_8009CBC8
    if (ctx->r2 == 0) {
        // 0x8009CBB4: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8009CBC8;
    }
    // 0x8009CBB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009CBB8: jalr        $v0
    // 0x8009CBBC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8009CBBC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x8009CBC0: b           L_8009CBD0
    // 0x8009CBC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8009CBD0;
    // 0x8009CBC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009CBC8:
    // 0x8009CBC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8009CBCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009CBD0:
    // 0x8009CBD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009CBD4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009CBDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CBDC: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8009CBE0: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8009CBE4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8009CBE8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8009CBEC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8009CBF0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8009CBF4: jr          $ra
    // 0x8009CBF8: lh          $v0, 0x7F32($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7F32);
    return;
    // 0x8009CBF8: lh          $v0, 0x7F32($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7F32);
;}
RECOMP_FUNC void func_8009CBFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CBFC: jr          $ra
    // 0x8009CC00: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8009CC00: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8009CC10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CC10: jr          $ra
    // 0x8009CC14: addiu       $v0, $zero, 0x84
    ctx->r2 = ADD32(0, 0X84);
    return;
    // 0x8009CC14: addiu       $v0, $zero, 0x84
    ctx->r2 = ADD32(0, 0X84);
;}
RECOMP_FUNC void func_8009CC18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CC18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009CC1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009CC20: lw          $v0, 0xF0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF0);
    // 0x8009CC24: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8009CC28: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8009CC2C: lbu         $t6, 0x80($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X80);
    // 0x8009CC30: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8009CC34: addu        $v1, $v0, $t7
    ctx->r3 = ADD32(ctx->r2, ctx->r15);
    // 0x8009CC38: lbu         $t8, -0xF($v1)
    ctx->r24 = MEM_BU(ctx->r3, -0XF);
    // 0x8009CC3C: bne         $t8, $zero, L_8009CC4C
    if (ctx->r24 != 0) {
        // 0x8009CC40: nop
    
            goto L_8009CC4C;
    }
    // 0x8009CC40: nop

    // 0x8009CC44: b           L_8009CC58
    // 0x8009CC48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8009CC58;
    // 0x8009CC48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8009CC4C:
    // 0x8009CC4C: jal         0x800EE7F8
    // 0x8009CC50: addiu       $a1, $v1, -0xC
    ctx->r5 = ADD32(ctx->r3, -0XC);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009CC50: addiu       $a1, $v1, -0xC
    ctx->r5 = ADD32(ctx->r3, -0XC);
    after_0:
    // 0x8009CC54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8009CC58:
    // 0x8009CC58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009CC5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009CC60: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009CC68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    tooie_probe_ea(rdram, ctx, 0xF0);
    // 0x8009CC68: lw          $v1, 0xF0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XF0);
    // 0x8009CC6C: lbu         $a1, 0x80($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X80);
    // 0x8009CC70: bne         $a1, $zero, L_8009CC80
    if (ctx->r5 != 0) {
            // 0x8009CC74: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    func_8009CC80(rdram, ctx);
    return;
    }
    // 0x8009CC74: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x8009CC78: jr          $ra
    // 0x8009CC7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8009CC7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8009CC80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CC80: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x8009CC84: lbu         $v0, -0x10($t7)
    ctx->r2 = MEM_BU(ctx->r15, -0X10);
    // 0x8009CC88: jr          $ra
    // 0x8009CC8C: nop

    return;
    // 0x8009CC8C: nop

;}
RECOMP_FUNC void func_8009CC90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CC90: lw          $t6, 0xF0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XF0);
    // 0x8009CC94: sb          $zero, 0x81($t6)
    MEM_B(0X81, ctx->r14) = 0;
    // 0x8009CC98: lw          $t7, 0xF0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XF0);
    // 0x8009CC9C: jr          $ra
    // 0x8009CCA0: sb          $zero, 0x80($t7)
    MEM_B(0X80, ctx->r15) = 0;
    return;
    // 0x8009CCA0: sb          $zero, 0x80($t7)
    MEM_B(0X80, ctx->r15) = 0;
;}
RECOMP_FUNC void func_8009CCA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CCA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009CCA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009CCAC: lw          $v0, 0xF0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF0);
    // 0x8009CCB0: lbu         $v1, 0x80($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X80);
    // 0x8009CCB4: beq         $v1, $zero, L_8009CCEC
    if (ctx->r3 == 0) {
        // 0x8009CCB8: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_8009CCEC;
    }
    // 0x8009CCB8: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x8009CCBC: sb          $t6, 0x80($v0)
    MEM_B(0X80, ctx->r2) = ctx->r14;
    // 0x8009CCC0: lw          $t7, 0xF0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XF0);
    // 0x8009CCC4: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x8009CCC8: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x8009CCCC: lbu         $t8, 0x80($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X80);
    // 0x8009CCD0: bnel        $t8, $zero, L_8009CCF0
    if (ctx->r24 != 0) {
        // 0x8009CCD4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8009CCF0;
    }
    goto skip_0;
    // 0x8009CCD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8009CCD8: jal         0x8009BDAC
    // 0x8009CCDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BDAC(rdram, ctx);
        goto after_0;
    // 0x8009CCDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009CCE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009CCE4: lw          $t9, 0xF0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XF0);
    // 0x8009CCE8: sb          $zero, 0x81($t9)
    MEM_B(0X81, ctx->r25) = 0;
L_8009CCEC:
    // 0x8009CCEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009CCF0:
    // 0x8009CCF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009CCF4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009CCFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CCFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009CD00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009CD04: lw          $v0, 0xF0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF0);
    // 0x8009CD08: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8009CD0C: lbu         $t6, 0x80($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X80);
    // 0x8009CD10: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8009CD14: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x8009CD18: sb          $a1, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r5;
    // 0x8009CD1C: lw          $v0, 0xF0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF0);
    // 0x8009CD20: lbu         $t9, 0x80($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X80);
    // 0x8009CD24: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x8009CD28: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x8009CD2C: sb          $zero, 0x1($t1)
    MEM_B(0X1, ctx->r9) = 0;
    // 0x8009CD30: lw          $v0, 0xF0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF0);
    // 0x8009CD34: lbu         $t2, 0x80($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X80);
    // 0x8009CD38: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8009CD3C: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x8009CD40: addu        $a0, $v0, $t3
    ctx->r4 = ADD32(ctx->r2, ctx->r11);
    // 0x8009CD44: jal         0x800EFD24
    // 0x8009CD48: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x8009CD48: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x8009CD4C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8009CD50: lw          $v0, 0xF0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XF0);
    // 0x8009CD54: lbu         $t4, 0x80($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X80);
    // 0x8009CD58: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8009CD5C: sb          $t5, 0x80($v0)
    MEM_B(0X80, ctx->r2) = ctx->r13;
    // 0x8009CD60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009CD64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009CD68: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009CD70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CD70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009CD74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009CD78: lw          $v0, 0xF0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF0);
    // 0x8009CD7C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8009CD80: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8009CD84: lbu         $t7, 0x80($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X80);
    // 0x8009CD88: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x8009CD8C: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x8009CD90: beq         $a1, $zero, L_8009CDB8
    if (ctx->r5 == 0) {
        // 0x8009CD94: sb          $t6, -0xF($t9)
        MEM_B(-0XF, ctx->r25) = ctx->r14;
            goto L_8009CDB8;
    }
    // 0x8009CD94: sb          $t6, -0xF($t9)
    MEM_B(-0XF, ctx->r25) = ctx->r14;
    // 0x8009CD98: lw          $v0, 0xF0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF0);
    // 0x8009CD9C: lbu         $t0, 0x80($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X80);
    // 0x8009CDA0: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x8009CDA4: addu        $a0, $v0, $t1
    ctx->r4 = ADD32(ctx->r2, ctx->r9);
    // 0x8009CDA8: jal         0x800EE7F8
    // 0x8009CDAC: addiu       $a0, $a0, -0xC
    ctx->r4 = ADD32(ctx->r4, -0XC);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8009CDAC: addiu       $a0, $a0, -0xC
    ctx->r4 = ADD32(ctx->r4, -0XC);
    after_0:
    // 0x8009CDB0: b           L_8009CDD4
    // 0x8009CDB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8009CDD4;
    // 0x8009CDB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009CDB8:
    // 0x8009CDB8: lw          $v0, 0xF0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XF0);
    // 0x8009CDBC: lbu         $t2, 0x80($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X80);
    // 0x8009CDC0: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x8009CDC4: addu        $a0, $v0, $t3
    ctx->r4 = ADD32(ctx->r2, ctx->r11);
    // 0x8009CDC8: jal         0x800EFD24
    // 0x8009CDCC: addiu       $a0, $a0, -0xC
    ctx->r4 = ADD32(ctx->r4, -0XC);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x8009CDCC: addiu       $a0, $a0, -0xC
    ctx->r4 = ADD32(ctx->r4, -0XC);
    after_1:
    // 0x8009CDD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009CDD4:
    // 0x8009CDD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009CDD8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009CDE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CDE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009CDE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009CDE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009CDEC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8009CDF0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8009CDF4: beq         $a1, $at, L_8009CE28
    if (ctx->r5 == ctx->r1) {
        // 0x8009CDF8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8009CE28;
    }
    // 0x8009CDF8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8009CDFC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009CE00: beq         $a1, $at, L_8009CE54
    if (ctx->r5 == ctx->r1) {
        // 0x8009CE04: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8009CE54;
    }
    // 0x8009CE04: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8009CE08: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8009CE0C: beq         $a1, $at, L_8009CE7C
    if (ctx->r5 == ctx->r1) {
        // 0x8009CE10: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8009CE7C;
    }
    // 0x8009CE10: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8009CE14: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8009CE18: beq         $a1, $at, L_8009CEA4
    if (ctx->r5 == ctx->r1) {
        // 0x8009CE1C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8009CEA4;
    }
    // 0x8009CE1C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8009CE20: b           L_8009CEC8
    // 0x8009CE24: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8009CEC8;
    // 0x8009CE24: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8009CE28:
    // 0x8009CE28: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8009CE2C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x8009CE30: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8009CE34: jal         0x8009E7C8
    // 0x8009CE38: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_8009E7C8(rdram, ctx);
        goto after_0;
    // 0x8009CE38: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_0:
    // 0x8009CE3C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009CE40: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8009CE44: bne         $v0, $at, L_8009CEC8
    if (ctx->r2 != ctx->r1) {
        // 0x8009CE48: lw          $a2, 0x24($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X24);
            goto L_8009CEC8;
    }
    // 0x8009CE48: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8009CE4C: b           L_8009CEC8
    // 0x8009CE50: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8009CEC8;
    // 0x8009CE50: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8009CE54:
    // 0x8009CE54: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x8009CE58: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8009CE5C: jal         0x8009E7C8
    // 0x8009CE60: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_8009E7C8(rdram, ctx);
        goto after_1;
    // 0x8009CE60: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_1:
    // 0x8009CE64: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009CE68: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8009CE6C: bne         $v0, $at, L_8009CEC8
    if (ctx->r2 != ctx->r1) {
        // 0x8009CE70: lw          $a2, 0x24($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X24);
            goto L_8009CEC8;
    }
    // 0x8009CE70: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8009CE74: b           L_8009CEC8
    // 0x8009CE78: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8009CEC8;
    // 0x8009CE78: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8009CE7C:
    // 0x8009CE7C: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x8009CE80: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8009CE84: jal         0x8009E7C8
    // 0x8009CE88: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_8009E7C8(rdram, ctx);
        goto after_2;
    // 0x8009CE88: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_2:
    // 0x8009CE8C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009CE90: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8009CE94: bne         $v0, $at, L_8009CEC8
    if (ctx->r2 != ctx->r1) {
        // 0x8009CE98: lw          $a2, 0x24($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X24);
            goto L_8009CEC8;
    }
    // 0x8009CE98: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8009CE9C: b           L_8009CEC8
    // 0x8009CEA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8009CEC8;
    // 0x8009CEA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8009CEA4:
    // 0x8009CEA4: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x8009CEA8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8009CEAC: jal         0x8009E7C8
    // 0x8009CEB0: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_8009E7C8(rdram, ctx);
        goto after_3;
    // 0x8009CEB0: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_3:
    // 0x8009CEB4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009CEB8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8009CEBC: bne         $v0, $at, L_8009CEC8
    if (ctx->r2 != ctx->r1) {
        // 0x8009CEC0: lw          $a2, 0x24($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X24);
            goto L_8009CEC8;
    }
    // 0x8009CEC0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8009CEC4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8009CEC8:
    // 0x8009CEC8: beq         $v1, $zero, L_8009CED8
    if (ctx->r3 == 0) {
        // 0x8009CECC: lw          $t6, 0x20($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X20);
            goto L_8009CED8;
    }
    // 0x8009CECC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8009CED0: lw          $t7, 0xF0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XF0);
    // 0x8009CED4: sb          $a2, 0x81($t7)
    MEM_B(0X81, ctx->r15) = ctx->r6;
L_8009CED8:
    // 0x8009CED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009CEDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009CEE0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009CEE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CEE8: lw          $v0, 0xF0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XF0);
    // 0x8009CEEC: lbu         $t6, 0x80($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X80);
    // 0x8009CEF0: beq         $t6, $zero, L_8009CEFC
    if (ctx->r14 == 0) {
        // 0x8009CEF4: nop
    
            goto L_8009CEFC;
    }
    // 0x8009CEF4: nop

    // 0x8009CEF8: sb          $zero, 0x81($v0)
    MEM_B(0X81, ctx->r2) = 0;
L_8009CEFC:
    // 0x8009CEFC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009CF04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CF04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009CF08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009CF0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009CF10: lw          $a3, 0xF0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XF0);
    // 0x8009CF14: lbu         $v0, 0x80($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X80);
    // 0x8009CF18: beq         $v0, $zero, L_8009CF78
    if (ctx->r2 == 0) {
        // 0x8009CF1C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8009CF78;
    }
    // 0x8009CF1C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8009CF20: sll         $t7, $v0, 4
    ctx->r15 = S32(ctx->r2 << 4);
    // 0x8009CF24: addu        $t8, $a3, $t7
    ctx->r24 = ADD32(ctx->r7, ctx->r15);
    // 0x8009CF28: blez        $v0, L_8009CF60
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8009CF2C: lbu         $a2, -0x10($t8)
        ctx->r6 = MEM_BU(ctx->r24, -0X10);
            goto L_8009CF60;
    }
    // 0x8009CF2C: lbu         $a2, -0x10($t8)
    ctx->r6 = MEM_BU(ctx->r24, -0X10);
    // 0x8009CF30: sll         $a0, $a1, 4
    ctx->r4 = S32(ctx->r5 << 4);
    // 0x8009CF34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8009CF38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8009CF3C: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_8009CF40:
    // 0x8009CF40: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x8009CF44: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8009CF48: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8009CF4C: bne         $a1, $t9, L_8009CF58
    if (ctx->r5 != ctx->r25) {
        // 0x8009CF50: nop
    
            goto L_8009CF58;
    }
    // 0x8009CF50: nop

    // 0x8009CF54: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
L_8009CF58:
    // 0x8009CF58: bne         $at, $zero, L_8009CF40
    if (ctx->r1 != 0) {
        // 0x8009CF5C: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_8009CF40;
    }
    // 0x8009CF5C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
L_8009CF60:
    // 0x8009CF60: lbu         $t0, 0x81($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X81);
    // 0x8009CF64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009CF68: beql        $a2, $t0, L_8009CF7C
    if (ctx->r6 == ctx->r8) {
        // 0x8009CF6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8009CF7C;
    }
    goto skip_0;
    // 0x8009CF6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8009CF70: jal         0x8009CDE0
    // 0x8009CF74: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_8009CDE0(rdram, ctx);
        goto after_0;
    // 0x8009CF74: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
L_8009CF78:
    // 0x8009CF78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009CF7C:
    // 0x8009CF7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009CF80: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009CF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CF90: jr          $ra
    // 0x8009CF94: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x8009CF94: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
;}
RECOMP_FUNC void func_8009CF98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CF98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009CF9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009CFA0: jal         0x8009C830
    // 0x8009CFA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009C830(rdram, ctx);
        goto after_0;
    // 0x8009CFA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009CFA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009CFAC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009CFB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8009CFB4: lw          $t6, 0xFC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XFC);
    // 0x8009CFB8: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
    // 0x8009CFBC: lw          $t7, 0xFC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XFC);
    // 0x8009CFC0: jal         0x8009D2D8
    // 0x8009CFC4: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    func_8009D2D8(rdram, ctx);
        goto after_1;
    // 0x8009CFC4: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    after_1:
    // 0x8009CFC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009CFCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009CFD0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009CFD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CFD8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009CFDC: lw          $t6, 0xFC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XFC);
    // 0x8009CFE0: jr          $ra
    // 0x8009CFE4: swc1        $f12, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f12.u32l;
    return;
    // 0x8009CFE4: swc1        $f12, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009CFE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CFE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009CFEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009CFF0: jal         0x8009EF28
    // 0x8009CFF4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8009EF28(rdram, ctx);
        goto after_0;
    // 0x8009CFF4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009CFF8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8009CFFC: jal         0x800F2100
    // 0x8009D000: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_1;
    // 0x8009D000: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x8009D004: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009D008: lwc1        $f4, 0x5350($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5350);
    // 0x8009D00C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8009D010: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8009D014: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8009D018: nop

    // 0x8009D01C: bc1fl       L_8009D050
    if (!c1cs) {
        // 0x8009D020: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_8009D050;
    }
    goto skip_0;
    // 0x8009D020: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_0:
    // 0x8009D024: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8009D028: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8009D02C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009D030: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8009D034: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8009D038: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8009D03C: jal         0x800F1344
    // 0x8009D040: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F1344(rdram, ctx);
        goto after_2;
    // 0x8009D040: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x8009D044: b           L_8009D054
    // 0x8009D048: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_8009D054;
    // 0x8009D048: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8009D04C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_8009D050:
    // 0x8009D050: nop

L_8009D054:
    // 0x8009D054: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8009D058: jal         0x8009C990
    // 0x8009D05C: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    func_8009C990(rdram, ctx);
        goto after_3;
    // 0x8009D05C: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x8009D060: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8009D064: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8009D068: add.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x8009D06C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8009D070: jal         0x8009C914
    // 0x8009D074: nop

    func_8009C914(rdram, ctx);
        goto after_4;
    // 0x8009D074: nop

    after_4:
    // 0x8009D078: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D07C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009D080: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009D088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D088: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009D08C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009D090: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009D094: lw          $t6, 0xFC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XFC);
    // 0x8009D098: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009D09C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8009D0A0: sltiu       $at, $t7, 0xA
    ctx->r1 = ctx->r15 < 0XA ? 1 : 0;
    // 0x8009D0A4: beq         $at, $zero, L_8009D2C4
    if (ctx->r1 == 0) {
        // 0x8009D0A8: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8009D2C4;
    }
    // 0x8009D0A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009D0AC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009D0B0: addu        $at, $at, $t7
    gpr jr_addend_8009D0B8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8009D0B4: lw          $t7, 0x5354($at)
    ctx->r15 = ADD32(ctx->r1, 0X5354);
    // 0x8009D0B8: jr          $t7
    // 0x8009D0BC: nop

    switch (jr_addend_8009D0B8 >> 2) {
        case 0: goto L_8009D2C4; break;
        case 1: goto L_8009D0C0; break;
        case 2: goto L_8009D2C4; break;
        case 3: goto L_8009D158; break;
        case 4: goto L_8009D180; break;
        case 5: goto L_8009D104; break;
        case 6: goto L_8009D168; break;
        case 7: goto L_8009D1D8; break;
        case 8: goto L_8009D25C; break;
        case 9: goto L_8009D2BC; break;
        default: switch_error(__func__, 0x8009D0B8, 0x80125354);
    }
    // 0x8009D0BC: nop

L_8009D0C0:
    // 0x8009D0C0: jal         0x8009EF04
    // 0x8009D0C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_0;
    // 0x8009D0C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8009D0C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009D0CC: nop

    // 0x8009D0D0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8009D0D4: nop

    // 0x8009D0D8: bc1t        L_8009D0F4
    if (c1cs) {
        // 0x8009D0DC: nop
    
            goto L_8009D0F4;
    }
    // 0x8009D0DC: nop

    // 0x8009D0E0: jal         0x8009EEB8
    // 0x8009D0E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_1;
    // 0x8009D0E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8009D0E8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8009D0EC: jal         0x8009C914
    // 0x8009D0F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_2;
    // 0x8009D0F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_8009D0F4:
    // 0x8009D0F4: jal         0x8009C88C
    // 0x8009D0F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C88C(rdram, ctx);
        goto after_3;
    // 0x8009D0F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8009D0FC: b           L_8009D2C8
    // 0x8009D100: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8009D2C8;
    // 0x8009D100: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009D104:
    // 0x8009D104: jal         0x8009EF04
    // 0x8009D108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_4;
    // 0x8009D108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8009D10C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009D110: nop

    // 0x8009D114: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x8009D118: nop

    // 0x8009D11C: bc1t        L_8009D148
    if (c1cs) {
        // 0x8009D120: nop
    
            goto L_8009D148;
    }
    // 0x8009D120: nop

    // 0x8009D124: jal         0x8009EEB8
    // 0x8009D128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_5;
    // 0x8009D128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8009D12C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8009D130: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009D134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009D138: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x8009D13C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8009D140: jal         0x8009C914
    // 0x8009D144: nop

    func_8009C914(rdram, ctx);
        goto after_6;
    // 0x8009D144: nop

    after_6:
L_8009D148:
    // 0x8009D148: jal         0x8009C88C
    // 0x8009D14C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C88C(rdram, ctx);
        goto after_7;
    // 0x8009D14C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8009D150: b           L_8009D2C8
    // 0x8009D154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8009D2C8;
    // 0x8009D154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009D158:
    // 0x8009D158: jal         0x8009C88C
    // 0x8009D15C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C88C(rdram, ctx);
        goto after_8;
    // 0x8009D15C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8009D160: b           L_8009D2C8
    // 0x8009D164: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8009D2C8;
    // 0x8009D164: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009D168:
    // 0x8009D168: jal         0x8009CFE8
    // 0x8009D16C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009CFE8(rdram, ctx);
        goto after_9;
    // 0x8009D16C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8009D170: jal         0x8009C88C
    // 0x8009D174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C88C(rdram, ctx);
        goto after_10;
    // 0x8009D174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8009D178: b           L_8009D2C8
    // 0x8009D17C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8009D2C8;
    // 0x8009D17C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009D180:
    // 0x8009D180: jal         0x8009EF04
    // 0x8009D184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_11;
    // 0x8009D184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8009D188: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009D18C: nop

    // 0x8009D190: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x8009D194: nop

    // 0x8009D198: bc1t        L_8009D1C8
    if (c1cs) {
        // 0x8009D19C: nop
    
            goto L_8009D1C8;
    }
    // 0x8009D19C: nop

    // 0x8009D1A0: jal         0x8009EEB8
    // 0x8009D1A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_12;
    // 0x8009D1A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8009D1A8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8009D1AC: jal         0x8009C914
    // 0x8009D1B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_13;
    // 0x8009D1B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x8009D1B4: jal         0x8009C990
    // 0x8009D1B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_14;
    // 0x8009D1B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x8009D1BC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8009D1C0: jal         0x8009C944
    // 0x8009D1C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C944(rdram, ctx);
        goto after_15;
    // 0x8009D1C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
L_8009D1C8:
    // 0x8009D1C8: jal         0x8009C88C
    // 0x8009D1CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C88C(rdram, ctx);
        goto after_16;
    // 0x8009D1CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x8009D1D0: b           L_8009D2C8
    // 0x8009D1D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8009D2C8;
    // 0x8009D1D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009D1D8:
    // 0x8009D1D8: jal         0x8009EF04
    // 0x8009D1DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_17;
    // 0x8009D1DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x8009D1E0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009D1E4: nop

    // 0x8009D1E8: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x8009D1EC: nop

    // 0x8009D1F0: bc1t        L_8009D24C
    if (c1cs) {
        // 0x8009D1F4: nop
    
            goto L_8009D24C;
    }
    // 0x8009D1F4: nop

    // 0x8009D1F8: jal         0x8009EEB8
    // 0x8009D1FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_18;
    // 0x8009D1FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x8009D200: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8009D204: jal         0x8009C990
    // 0x8009D208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_19;
    // 0x8009D208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x8009D20C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8009D210: jal         0x800F1DCC
    // 0x8009D214: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    func_800F1DCC(rdram, ctx);
        goto after_20;
    // 0x8009D214: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    after_20:
    // 0x8009D218: jal         0x800F2100
    // 0x8009D21C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_21;
    // 0x8009D21C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_21:
    // 0x8009D220: lw          $t8, 0xFC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XFC);
    // 0x8009D224: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8009D228: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x8009D22C: nop

    // 0x8009D230: bc1f        L_8009D24C
    if (!c1cs) {
        // 0x8009D234: nop
    
            goto L_8009D24C;
    }
    // 0x8009D234: nop

    // 0x8009D238: jal         0x8009EEB8
    // 0x8009D23C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_22;
    // 0x8009D23C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x8009D240: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8009D244: jal         0x8009C914
    // 0x8009D248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_23;
    // 0x8009D248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
L_8009D24C:
    // 0x8009D24C: jal         0x8009C88C
    // 0x8009D250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C88C(rdram, ctx);
        goto after_24;
    // 0x8009D250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x8009D254: b           L_8009D2C8
    // 0x8009D258: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8009D2C8;
    // 0x8009D258: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009D25C:
    // 0x8009D25C: jal         0x8009EF04
    // 0x8009D260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_25;
    // 0x8009D260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x8009D264: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009D268: nop

    // 0x8009D26C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x8009D270: nop

    // 0x8009D274: bc1t        L_8009D298
    if (c1cs) {
        // 0x8009D278: nop
    
            goto L_8009D298;
    }
    // 0x8009D278: nop

    // 0x8009D27C: jal         0x8009EEB8
    // 0x8009D280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_26;
    // 0x8009D280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x8009D284: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8009D288: jal         0x8009C914
    // 0x8009D28C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_27;
    // 0x8009D28C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x8009D290: b           L_8009D2AC
    // 0x8009D294: nop

        goto L_8009D2AC;
    // 0x8009D294: nop

L_8009D298:
    // 0x8009D298: jal         0x8009C984
    // 0x8009D29C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_28;
    // 0x8009D29C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x8009D2A0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8009D2A4: jal         0x8009C914
    // 0x8009D2A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_29;
    // 0x8009D2A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
L_8009D2AC:
    // 0x8009D2AC: jal         0x8009C88C
    // 0x8009D2B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C88C(rdram, ctx);
        goto after_30;
    // 0x8009D2B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x8009D2B4: b           L_8009D2C8
    // 0x8009D2B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8009D2C8;
    // 0x8009D2B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009D2BC:
    // 0x8009D2BC: jal         0x8009C88C
    // 0x8009D2C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C88C(rdram, ctx);
        goto after_31;
    // 0x8009D2C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
L_8009D2C4:
    // 0x8009D2C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009D2C8:
    // 0x8009D2C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009D2CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009D2D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009D2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D2D8: lw          $t6, 0xFC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XFC);
    // 0x8009D2DC: jr          $ra
    // 0x8009D2E0: sw          $a1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r5;
    return;
    // 0x8009D2E0: sw          $a1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_8009D2E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D2E4: lw          $t6, 0xFC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XFC);
    // 0x8009D2E8: jr          $ra
    // 0x8009D2EC: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    return;
    // 0x8009D2EC: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
;}
RECOMP_FUNC void func_8009D2F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D2F0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8009D2F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009D2F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009D2FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009D300: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8009D304: jal         0x80096628
    // 0x8009D308: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    func_80096628(rdram, ctx);
        goto after_0;
    // 0x8009D308: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    after_0:
    // 0x8009D30C: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x8009D310: bne         $t6, $zero, L_8009D394
    if (ctx->r14 != 0) {
        // 0x8009D314: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009D394;
    }
    // 0x8009D314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009D318: jal         0x800963C0
    // 0x8009D31C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800963C0(rdram, ctx);
        goto after_1;
    // 0x8009D31C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x8009D320: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8009D324: beq         $t7, $zero, L_8009D360
    if (ctx->r15 == 0) {
        // 0x8009D328: nop
    
            goto L_8009D360;
    }
    // 0x8009D328: nop

    // 0x8009D32C: jal         0x8009C984
    // 0x8009D330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_2;
    // 0x8009D330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8009D334: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8009D338: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009D33C: jal         0x800136E4
    // 0x8009D340: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    func_800136E4(rdram, ctx);
        goto after_3;
    // 0x8009D340: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    after_3:
    // 0x8009D344: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8009D348: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8009D34C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8009D350: jal         0x800F1B78
    // 0x8009D354: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    func_800F1B78(rdram, ctx);
        goto after_4;
    // 0x8009D354: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    after_4:
    // 0x8009D358: b           L_8009D380
    // 0x8009D35C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8009D380;
    // 0x8009D35C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8009D360:
    // 0x8009D360: jal         0x8009C984
    // 0x8009D364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_5;
    // 0x8009D364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8009D368: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8009D36C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8009D370: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8009D374: jal         0x800F1B78
    // 0x8009D378: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    func_800F1B78(rdram, ctx);
        goto after_6;
    // 0x8009D378: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    after_6:
    // 0x8009D37C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8009D380:
    // 0x8009D380: jal         0x8009BF5C
    // 0x8009D384: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009BF5C(rdram, ctx);
        goto after_7;
    // 0x8009D384: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_7:
    // 0x8009D388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009D38C: jal         0x8009C4CC
    // 0x8009D390: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_8009C4CC(rdram, ctx);
        goto after_8;
    // 0x8009D390: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_8:
L_8009D394:
    // 0x8009D394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D398: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009D39C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8009D3A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009D3A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D3A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009D3AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009D3B0: jal         0x8009D2F0
    // 0x8009D3B4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009D2F0(rdram, ctx);
        goto after_0;
    // 0x8009D3B4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_0:
    // 0x8009D3B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009D3BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009D3C0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009D3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D3D0: jr          $ra
    // 0x8009D3D4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    return;
    // 0x8009D3D4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
;}
RECOMP_FUNC void func_8009D3D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D3D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009D3DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009D3E0: jal         0x8009E674
    // 0x8009D3E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E674(rdram, ctx);
        goto after_0;
    // 0x8009D3E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8009D3E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009D3EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009D3F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009D3F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D3F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009D3FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009D400: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8009D404: jal         0x800F53D0
    // 0x8009D408: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x8009D408: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8009D40C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8009D410: lw          $t6, 0x104($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X104);
    // 0x8009D414: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8009D418: addiu       $a1, $zero, 0x411
    ctx->r5 = ADD32(0, 0X411);
    // 0x8009D41C: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    // 0x8009D420: jal         0x8009DB04
    // 0x8009D424: lw          $a2, 0x14($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X14);
    func_8009DB04(rdram, ctx);
        goto after_1;
    // 0x8009D424: lw          $a2, 0x14($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X14);
    after_1:
    // 0x8009D428: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D42C: lw          $t8, 0x104($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X104);
    // 0x8009D430: jal         0x800C2FDC
    // 0x8009D434: lbu         $a0, 0x1($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X1);
    func_800C2FDC(rdram, ctx);
        goto after_2;
    // 0x8009D434: lbu         $a0, 0x1($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X1);
    after_2:
    // 0x8009D438: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D43C: lw          $t0, 0x104($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X104);
    // 0x8009D440: sb          $zero, 0x1($t0)
    MEM_B(0X1, ctx->r8) = 0;
    // 0x8009D444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009D448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009D44C: jr          $ra
    // 0x8009D450: nop

    return;
    // 0x8009D450: nop

;}
RECOMP_FUNC void func_8009D454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D454: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009D458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009D45C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8009D460: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8009D464: jal         0x8009C128
    // 0x8009D468: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8009D468: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8009D46C: lbu         $a0, 0x2F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2F);
    // 0x8009D470: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x8009D474: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8009D478: bnel        $a0, $zero, L_8009D490
    if (ctx->r4 != 0) {
        // 0x8009D47C: addiu       $a1, $sp, 0x1C
        ctx->r5 = ADD32(ctx->r29, 0X1C);
            goto L_8009D490;
    }
    goto skip_0;
    // 0x8009D47C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    skip_0:
    // 0x8009D480: jal         0x800C4350
    // 0x8009D484: addiu       $a2, $a2, -0x6DF0
    ctx->r6 = ADD32(ctx->r6, -0X6DF0);
    func_800C4350(rdram, ctx);
        goto after_1;
    // 0x8009D484: addiu       $a2, $a2, -0x6DF0
    ctx->r6 = ADD32(ctx->r6, -0X6DF0);
    after_1:
    // 0x8009D488: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x8009D48C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
L_8009D490:
    // 0x8009D490: jal         0x800C4350
    // 0x8009D494: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    func_800C4350(rdram, ctx);
        goto after_2;
    // 0x8009D494: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_2:
    // 0x8009D498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009D49C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009D4A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009D4A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D4A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009D4AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009D4B0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8009D4B4: jal         0x8009C128
    // 0x8009D4B8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8009D4B8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8009D4BC: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x8009D4C0: jal         0x800C4AF0
    // 0x8009D4C4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800C4AF0(rdram, ctx);
        goto after_1;
    // 0x8009D4C4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x8009D4C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009D4CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009D4D0: jr          $ra
    // 0x8009D4D4: nop

    return;
    // 0x8009D4D4: nop

;}
RECOMP_FUNC void func_8009D4D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D4D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009D4DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009D4E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009D4E4: lw          $t6, 0x104($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X104);
    // 0x8009D4E8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8009D4EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009D4F0: sw          $zero, 0x18($t6)
    MEM_W(0X18, ctx->r14) = 0;
    // 0x8009D4F4: lw          $t8, 0x104($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X104);
    // 0x8009D4F8: sb          $t7, 0x1C($t8)
    MEM_B(0X1C, ctx->r24) = ctx->r15;
    // 0x8009D4FC: lw          $t9, 0x104($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X104);
    // 0x8009D500: sw          $zero, 0x8($t9)
    MEM_W(0X8, ctx->r25) = 0;
    // 0x8009D504: lw          $t0, 0x104($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X104);
    // 0x8009D508: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
    // 0x8009D50C: lw          $t1, 0x104($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X104);
    // 0x8009D510: jal         0x800C2E04
    // 0x8009D514: sw          $zero, 0x10($t1)
    MEM_W(0X10, ctx->r9) = 0;
    func_800C2E04(rdram, ctx);
        goto after_0;
    // 0x8009D514: sw          $zero, 0x10($t1)
    MEM_W(0X10, ctx->r9) = 0;
    after_0:
    // 0x8009D518: lw          $t2, 0x104($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X104);
    // 0x8009D51C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8009D520: sb          $v0, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r2;
    // 0x8009D524: lw          $t3, 0x104($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X104);
    // 0x8009D528: jal         0x800C330C
    // 0x8009D52C: lbu         $a0, 0x0($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X0);
    func_800C330C(rdram, ctx);
        goto after_1;
    // 0x8009D52C: lbu         $a0, 0x0($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X0);
    after_1:
    // 0x8009D530: lw          $t4, 0x104($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X104);
    // 0x8009D534: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009D538: jal         0x800C3418
    // 0x8009D53C: lbu         $a0, 0x0($t4)
    ctx->r4 = MEM_BU(ctx->r12, 0X0);
    func_800C3418(rdram, ctx);
        goto after_2;
    // 0x8009D53C: lbu         $a0, 0x0($t4)
    ctx->r4 = MEM_BU(ctx->r12, 0X0);
    after_2:
    // 0x8009D540: lw          $t5, 0x104($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X104);
    // 0x8009D544: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009D548: jal         0x800C431C
    // 0x8009D54C: lbu         $a0, 0x0($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X0);
    func_800C431C(rdram, ctx);
        goto after_3;
    // 0x8009D54C: lbu         $a0, 0x0($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X0);
    after_3:
    // 0x8009D550: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8009D554: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009D558: lw          $t6, 0x104($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X104);
    // 0x8009D55C: swc1        $f4, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f4.u32l;
    // 0x8009D560: lw          $t7, 0x104($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X104);
    // 0x8009D564: jal         0x800C2E04
    // 0x8009D568: sb          $zero, 0x1($t7)
    MEM_B(0X1, ctx->r15) = 0;
    func_800C2E04(rdram, ctx);
        goto after_4;
    // 0x8009D568: sb          $zero, 0x1($t7)
    MEM_B(0X1, ctx->r15) = 0;
    after_4:
    // 0x8009D56C: lw          $t8, 0x104($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X104);
    // 0x8009D570: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009D574: sb          $v0, 0x2($t8)
    MEM_B(0X2, ctx->r24) = ctx->r2;
    // 0x8009D578: lw          $t9, 0x104($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X104);
    // 0x8009D57C: jal         0x800C3418
    // 0x8009D580: lbu         $a0, 0x2($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X2);
    func_800C3418(rdram, ctx);
        goto after_5;
    // 0x8009D580: lbu         $a0, 0x2($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X2);
    after_5:
    // 0x8009D584: lw          $t0, 0x104($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X104);
    // 0x8009D588: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009D58C: jal         0x800C431C
    // 0x8009D590: lbu         $a0, 0x2($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X2);
    func_800C431C(rdram, ctx);
        goto after_6;
    // 0x8009D590: lbu         $a0, 0x2($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X2);
    after_6:
    // 0x8009D594: jal         0x800C2E04
    // 0x8009D598: nop

    func_800C2E04(rdram, ctx);
        goto after_7;
    // 0x8009D598: nop

    after_7:
    // 0x8009D59C: lw          $t1, 0x104($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X104);
    // 0x8009D5A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009D5A4: sb          $v0, 0x3($t1)
    MEM_B(0X3, ctx->r9) = ctx->r2;
    // 0x8009D5A8: lw          $t2, 0x104($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X104);
    // 0x8009D5AC: jal         0x800C3418
    // 0x8009D5B0: lbu         $a0, 0x3($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X3);
    func_800C3418(rdram, ctx);
        goto after_8;
    // 0x8009D5B0: lbu         $a0, 0x3($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X3);
    after_8:
    // 0x8009D5B4: lw          $t3, 0x104($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X104);
    // 0x8009D5B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009D5BC: jal         0x800C431C
    // 0x8009D5C0: lbu         $a0, 0x3($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X3);
    func_800C431C(rdram, ctx);
        goto after_9;
    // 0x8009D5C0: lbu         $a0, 0x3($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X3);
    after_9:
    // 0x8009D5C4: lw          $t4, 0x104($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X104);
    // 0x8009D5C8: sb          $zero, 0x4($t4)
    MEM_B(0X4, ctx->r12) = 0;
    // 0x8009D5CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D5D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009D5D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009D5D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009D5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D5E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009D5E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009D5E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009D5EC: lw          $v0, 0x104($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X104);
    // 0x8009D5F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009D5F4: lbu         $a1, 0x1($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X1);
    // 0x8009D5F8: beq         $a1, $zero, L_8009D60C
    if (ctx->r5 == 0) {
        // 0x8009D5FC: nop
    
            goto L_8009D60C;
    }
    // 0x8009D5FC: nop

    // 0x8009D600: jal         0x800C2FDC
    // 0x8009D604: andi        $a0, $a1, 0xFF
    ctx->r4 = ctx->r5 & 0XFF;
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x8009D604: andi        $a0, $a1, 0xFF
    ctx->r4 = ctx->r5 & 0XFF;
    after_0:
    // 0x8009D608: lw          $v0, 0x104($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X104);
L_8009D60C:
    // 0x8009D60C: jal         0x800C2FDC
    // 0x8009D610: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    func_800C2FDC(rdram, ctx);
        goto after_1;
    // 0x8009D610: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    after_1:
    // 0x8009D614: lw          $t6, 0x104($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X104);
    // 0x8009D618: jal         0x800C2FDC
    // 0x8009D61C: lbu         $a0, 0x3($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X3);
    func_800C2FDC(rdram, ctx);
        goto after_2;
    // 0x8009D61C: lbu         $a0, 0x3($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X3);
    after_2:
    // 0x8009D620: lw          $t7, 0x104($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X104);
    // 0x8009D624: jal         0x800C2FDC
    // 0x8009D628: lbu         $a0, 0x2($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X2);
    func_800C2FDC(rdram, ctx);
        goto after_3;
    // 0x8009D628: lbu         $a0, 0x2($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X2);
    after_3:
    // 0x8009D62C: lw          $t8, 0x104($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X104);
    // 0x8009D630: lbu         $a0, 0x4($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X4);
    // 0x8009D634: beql        $a0, $zero, L_8009D648
    if (ctx->r4 == 0) {
        // 0x8009D638: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8009D648;
    }
    goto skip_0;
    // 0x8009D638: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8009D63C: jal         0x800C2FDC
    // 0x8009D640: nop

    func_800C2FDC(rdram, ctx);
        goto after_4;
    // 0x8009D640: nop

    after_4:
    // 0x8009D644: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009D648:
    // 0x8009D648: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009D64C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009D650: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009D658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D658: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8009D65C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009D660: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009D664: lw          $t6, 0x104($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X104);
    // 0x8009D668: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009D66C: lbu         $t7, 0x1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1);
    // 0x8009D670: bnel        $t7, $zero, L_8009D6F4
    if (ctx->r15 != 0) {
        // 0x8009D674: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8009D6F4;
    }
    goto skip_0;
    // 0x8009D674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8009D678: jal         0x800C2E04
    // 0x8009D67C: nop

    func_800C2E04(rdram, ctx);
        goto after_0;
    // 0x8009D67C: nop

    after_0:
    // 0x8009D680: lw          $t8, 0x104($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X104);
    // 0x8009D684: addiu       $a1, $zero, 0x410
    ctx->r5 = ADD32(0, 0X410);
    // 0x8009D688: sb          $v0, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r2;
    // 0x8009D68C: lw          $t9, 0x104($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X104);
    // 0x8009D690: jal         0x800C301C
    // 0x8009D694: lbu         $a0, 0x1($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X1);
    func_800C301C(rdram, ctx);
        goto after_1;
    // 0x8009D694: lbu         $a0, 0x1($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X1);
    after_1:
    // 0x8009D698: lw          $t0, 0x104($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X104);
    // 0x8009D69C: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x8009D6A0: addiu       $a1, $a1, -0x2C08
    ctx->r5 = ADD32(ctx->r5, -0X2C08);
    // 0x8009D6A4: lw          $a2, 0x184($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X184);
    // 0x8009D6A8: jal         0x800C3394
    // 0x8009D6AC: lbu         $a0, 0x1($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X1);
    func_800C3394(rdram, ctx);
        goto after_2;
    // 0x8009D6AC: lbu         $a0, 0x1($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X1);
    after_2:
    // 0x8009D6B0: lw          $t1, 0x104($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X104);
    // 0x8009D6B4: addiu       $a1, $zero, 0x6D60
    ctx->r5 = ADD32(0, 0X6D60);
    // 0x8009D6B8: jal         0x800C3058
    // 0x8009D6BC: lbu         $a0, 0x1($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X1);
    func_800C3058(rdram, ctx);
        goto after_3;
    // 0x8009D6BC: lbu         $a0, 0x1($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X1);
    after_3:
    // 0x8009D6C0: lw          $t2, 0x104($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X104);
    // 0x8009D6C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8009D6C8: jal         0x800C330C
    // 0x8009D6CC: lbu         $a0, 0x1($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X1);
    func_800C330C(rdram, ctx);
        goto after_4;
    // 0x8009D6CC: lbu         $a0, 0x1($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X1);
    after_4:
    // 0x8009D6D0: lw          $t3, 0x104($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X104);
    // 0x8009D6D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009D6D8: jal         0x800C3418
    // 0x8009D6DC: lbu         $a0, 0x1($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X1);
    func_800C3418(rdram, ctx);
        goto after_5;
    // 0x8009D6DC: lbu         $a0, 0x1($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X1);
    after_5:
    // 0x8009D6E0: lw          $t4, 0x104($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X104);
    // 0x8009D6E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009D6E8: jal         0x800C431C
    // 0x8009D6EC: lbu         $a0, 0x1($t4)
    ctx->r4 = MEM_BU(ctx->r12, 0X1);
    func_800C431C(rdram, ctx);
        goto after_6;
    // 0x8009D6EC: lbu         $a0, 0x1($t4)
    ctx->r4 = MEM_BU(ctx->r12, 0X1);
    after_6:
    // 0x8009D6F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8009D6F4:
    // 0x8009D6F4: jal         0x8009C128
    // 0x8009D6F8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009C128(rdram, ctx);
        goto after_7;
    // 0x8009D6F8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_7:
    // 0x8009D6FC: jal         0x800DC0C0
    // 0x8009D700: nop

    func_800DC0C0(rdram, ctx);
        goto after_8;
    // 0x8009D700: nop

    after_8:
    // 0x8009D704: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009D708: lwc1        $f4, 0x5380($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5380);
    // 0x8009D70C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009D710: lwc1        $f8, 0x5384($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5384);
    // 0x8009D714: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8009D718: lw          $v0, 0x104($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X104);
    // 0x8009D71C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009D720: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8009D724: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8009D728: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x8009D72C: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
    // 0x8009D730: lw          $t5, 0x104($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X104);
    // 0x8009D734: lwc1        $f14, 0x5388($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X5388);
    // 0x8009D738: jal         0x800F0E00
    // 0x8009D73C: lwc1        $f12, 0x14($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X14);
    func_800F0E00(rdram, ctx);
        goto after_9;
    // 0x8009D73C: lwc1        $f12, 0x14($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X14);
    after_9:
    // 0x8009D740: lw          $t6, 0x104($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X104);
    // 0x8009D744: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8009D748: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8009D74C: swc1        $f0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f0.u32l;
    // 0x8009D750: lw          $t7, 0x104($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X104);
    // 0x8009D754: jal         0x800F13F0
    // 0x8009D758: lwc1        $f12, 0x14($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X14);
    func_800F13F0(rdram, ctx);
        goto after_10;
    // 0x8009D758: lwc1        $f12, 0x14($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X14);
    after_10:
    // 0x8009D75C: lw          $t8, 0x104($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X104);
    // 0x8009D760: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8009D764: swc1        $f0, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f0.u32l;
    // 0x8009D768: lw          $t9, 0x104($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X104);
    // 0x8009D76C: jal         0x800C35E8
    // 0x8009D770: lbu         $a0, 0x1($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X1);
    func_800C35E8(rdram, ctx);
        goto after_11;
    // 0x8009D770: lbu         $a0, 0x1($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X1);
    after_11:
    // 0x8009D774: lw          $v0, 0x104($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X104);
    // 0x8009D778: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x8009D77C: jal         0x800C31DC
    // 0x8009D780: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    func_800C31DC(rdram, ctx);
        goto after_12;
    // 0x8009D780: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    after_12:
    // 0x8009D784: lw          $t0, 0x104($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X104);
    // 0x8009D788: jal         0x800C3BDC
    // 0x8009D78C: lbu         $a0, 0x1($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X1);
    func_800C3BDC(rdram, ctx);
        goto after_13;
    // 0x8009D78C: lbu         $a0, 0x1($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X1);
    after_13:
    // 0x8009D790: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D794: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009D798: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8009D79C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009D7A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D7A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009D7A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009D7AC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8009D7B0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8009D7B4: jal         0x800DC178
    // 0x8009D7B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800DC178(rdram, ctx);
        goto after_0;
    // 0x8009D7B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009D7BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009D7C0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8009D7C4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8009D7C8: lw          $t6, 0x104($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X104);
    // 0x8009D7CC: addiu       $a3, $zero, 0x61A8
    ctx->r7 = ADD32(0, 0X61A8);
    // 0x8009D7D0: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x8009D7D4: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8009D7D8: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x8009D7DC: jal         0x8009DF18
    // 0x8009D7E0: lh          $a1, -0x6DF8($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X6DF8);
    func_8009DF18(rdram, ctx);
        goto after_1;
    // 0x8009D7E0: lh          $a1, -0x6DF8($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X6DF8);
    after_1:
    // 0x8009D7E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009D7E8: lw          $v0, 0x104($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X104);
    // 0x8009D7EC: lw          $t9, 0x18($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X18);
    // 0x8009D7F0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8009D7F4: sw          $t0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r8;
    // 0x8009D7F8: lw          $v0, 0x104($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X104);
    // 0x8009D7FC: lw          $t1, 0x18($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X18);
    // 0x8009D800: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x8009D804: bnel        $at, $zero, L_8009D814
    if (ctx->r1 != 0) {
        // 0x8009D808: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8009D814;
    }
    goto skip_0;
    // 0x8009D808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8009D80C: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x8009D810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009D814:
    // 0x8009D814: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009D818: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009D820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009D824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009D828: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009D82C: jal         0x800DC0C0
    // 0x8009D830: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800DC0C0(rdram, ctx);
        goto after_0;
    // 0x8009D830: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8009D834: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8009D838: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009D83C: addiu       $a1, $zero, 0x586
    ctx->r5 = ADD32(0, 0X586);
    // 0x8009D840: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009D844: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8009D848: nop

    // 0x8009D84C: bc1f        L_8009D85C
    if (!c1cs) {
        // 0x8009D850: nop
    
            goto L_8009D85C;
    }
    // 0x8009D850: nop

    // 0x8009D854: b           L_8009D85C
    // 0x8009D858: addiu       $a1, $zero, 0x585
    ctx->r5 = ADD32(0, 0X585);
        goto L_8009D85C;
    // 0x8009D858: addiu       $a1, $zero, 0x585
    ctx->r5 = ADD32(0, 0X585);
L_8009D85C:
    // 0x8009D85C: jal         0x8009DE38
    // 0x8009D860: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_8009DE38(rdram, ctx);
        goto after_1;
    // 0x8009D860: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x8009D864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009D868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009D86C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009D874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D874: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009D878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009D87C: lui         $a2, 0x3F8E
    ctx->r6 = S32(0X3F8E << 16);
    // 0x8009D880: ori         $a2, $a2, 0xF9DB
    ctx->r6 = ctx->r6 | 0XF9DB;
    // 0x8009D884: jal         0x8009DE38
    // 0x8009D888: addiu       $a1, $zero, 0x442E
    ctx->r5 = ADD32(0, 0X442E);
    func_8009DE38(rdram, ctx);
        goto after_0;
    // 0x8009D888: addiu       $a1, $zero, 0x442E
    ctx->r5 = ADD32(0, 0X442E);
    after_0:
    // 0x8009D88C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009D890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009D894: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009D89C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D89C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009D8A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009D8A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009D8A8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8009D8AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009D8B0: jal         0x8009C128
    // 0x8009D8B4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8009D8B4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x8009D8B8: lw          $t6, 0x104($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X104);
    // 0x8009D8BC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8009D8C0: jal         0x800C35E8
    // 0x8009D8C4: lbu         $a0, 0x0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X0);
    func_800C35E8(rdram, ctx);
        goto after_1;
    // 0x8009D8C4: lbu         $a0, 0x0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X0);
    after_1:
    // 0x8009D8C8: lw          $v0, 0x104($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X104);
    // 0x8009D8CC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8009D8D0: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x8009D8D4: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8009D8D8: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8009D8DC: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x8009D8E0: jal         0x800C301C
    // 0x8009D8E4: lh          $a1, -0x6E00($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X6E00);
    func_800C301C(rdram, ctx);
        goto after_2;
    // 0x8009D8E4: lh          $a1, -0x6E00($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X6E00);
    after_2:
    // 0x8009D8E8: lw          $t9, 0x104($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X104);
    // 0x8009D8EC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8009D8F0: jal         0x800C31DC
    // 0x8009D8F4: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
    func_800C31DC(rdram, ctx);
        goto after_3;
    // 0x8009D8F4: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
    after_3:
    // 0x8009D8F8: lw          $t0, 0x104($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X104);
    // 0x8009D8FC: jal         0x800C3BDC
    // 0x8009D900: lbu         $a0, 0x0($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X0);
    func_800C3BDC(rdram, ctx);
        goto after_4;
    // 0x8009D900: lbu         $a0, 0x0($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X0);
    after_4:
    // 0x8009D904: lw          $v0, 0x104($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X104);
    // 0x8009D908: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x8009D90C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8009D910: sw          $t2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r10;
    // 0x8009D914: lw          $v0, 0x104($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X104);
    // 0x8009D918: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x8009D91C: sltiu       $at, $t3, 0x4
    ctx->r1 = ctx->r11 < 0X4 ? 1 : 0;
    // 0x8009D920: bnel        $at, $zero, L_8009D930
    if (ctx->r1 != 0) {
        // 0x8009D924: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8009D930;
    }
    goto skip_0;
    // 0x8009D924: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8009D928: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x8009D92C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009D930:
    // 0x8009D930: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009D934: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8009D938: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009D940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D940: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009D944: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009D948: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009D94C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009D950: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8009D954: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8009D958: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8009D95C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8009D960: jal         0x8009DAAC
    // 0x8009D964: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_8009DAAC(rdram, ctx);
        goto after_0;
    // 0x8009D964: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x8009D968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009D96C: jal         0x8009C128
    // 0x8009D970: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x8009D970: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x8009D974: lw          $t6, 0x104($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X104);
    // 0x8009D978: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8009D97C: jal         0x800C35E8
    // 0x8009D980: lbu         $a0, 0x0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X0);
    func_800C35E8(rdram, ctx);
        goto after_2;
    // 0x8009D980: lbu         $a0, 0x0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X0);
    after_2:
    // 0x8009D984: lw          $t7, 0x104($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X104);
    // 0x8009D988: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8009D98C: jal         0x800C301C
    // 0x8009D990: lbu         $a0, 0x0($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X0);
    func_800C301C(rdram, ctx);
        goto after_3;
    // 0x8009D990: lbu         $a0, 0x0($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X0);
    after_3:
    // 0x8009D994: lw          $t8, 0x104($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X104);
    // 0x8009D998: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8009D99C: jal         0x800C31DC
    // 0x8009D9A0: lbu         $a0, 0x0($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X0);
    func_800C31DC(rdram, ctx);
        goto after_4;
    // 0x8009D9A0: lbu         $a0, 0x0($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X0);
    after_4:
    // 0x8009D9A4: lw          $t9, 0x104($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X104);
    // 0x8009D9A8: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8009D9AC: jal         0x800C3058
    // 0x8009D9B0: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
    func_800C3058(rdram, ctx);
        goto after_5;
    // 0x8009D9B0: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
    after_5:
    // 0x8009D9B4: lw          $t0, 0x104($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X104);
    // 0x8009D9B8: jal         0x800C3BDC
    // 0x8009D9BC: lbu         $a0, 0x0($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X0);
    func_800C3BDC(rdram, ctx);
        goto after_6;
    // 0x8009D9BC: lbu         $a0, 0x0($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X0);
    after_6:
    // 0x8009D9C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D9C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009D9C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8009D9CC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009D9D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D9D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009D9D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009D9DC: lw          $t6, 0x104($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X104);
    // 0x8009D9E0: addiu       $t7, $sp, 0x24
    ctx->r15 = ADD32(ctx->r29, 0X24);
    // 0x8009D9E4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x8009D9E8: lw          $a1, 0xC($t6)
    ctx->r5 = MEM_W(ctx->r14, 0XC);
    // 0x8009D9EC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8009D9F0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8009D9F4: jal         0x800846C8
    // 0x8009D9F8: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    _badata_entrypoint_17(rdram, ctx);
        goto after_0;
    // 0x8009D9F8: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x8009D9FC: bne         $v0, $zero, L_8009DA10
    if (ctx->r2 != 0) {
        // 0x8009DA00: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_8009DA10;
    }
    // 0x8009DA00: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009DA04: lw          $t8, 0x104($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X104);
    // 0x8009DA08: b           L_8009DA20
    // 0x8009DA0C: sw          $zero, 0xC($t8)
    MEM_W(0XC, ctx->r24) = 0;
        goto L_8009DA20;
    // 0x8009DA0C: sw          $zero, 0xC($t8)
    MEM_W(0XC, ctx->r24) = 0;
L_8009DA10:
    // 0x8009DA10: lw          $v0, 0x104($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X104);
    // 0x8009DA14: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x8009DA18: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8009DA1C: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
L_8009DA20:
    // 0x8009DA20: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8009DA24: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8009DA28: jal         0x8009D940
    // 0x8009DA2C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    func_8009D940(rdram, ctx);
        goto after_1;
    // 0x8009DA2C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x8009DA30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009DA34: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8009DA38: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009DA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009DA40: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009DA44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009DA48: lw          $t6, 0x104($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X104);
    // 0x8009DA4C: addiu       $t7, $sp, 0x24
    ctx->r15 = ADD32(ctx->r29, 0X24);
    // 0x8009DA50: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x8009DA54: lw          $a1, 0xC($t6)
    ctx->r5 = MEM_W(ctx->r14, 0XC);
    // 0x8009DA58: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8009DA5C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8009DA60: jal         0x800846D8
    // 0x8009DA64: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    _badata_entrypoint_19(rdram, ctx);
        goto after_0;
    // 0x8009DA64: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x8009DA68: bne         $v0, $zero, L_8009DA7C
    if (ctx->r2 != 0) {
        // 0x8009DA6C: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_8009DA7C;
    }
    // 0x8009DA6C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009DA70: lw          $t8, 0x104($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X104);
    // 0x8009DA74: b           L_8009DA8C
    // 0x8009DA78: sw          $zero, 0xC($t8)
    MEM_W(0XC, ctx->r24) = 0;
        goto L_8009DA8C;
    // 0x8009DA78: sw          $zero, 0xC($t8)
    MEM_W(0XC, ctx->r24) = 0;
L_8009DA7C:
    // 0x8009DA7C: lw          $v0, 0x104($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X104);
    // 0x8009DA80: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x8009DA84: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8009DA88: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
L_8009DA8C:
    // 0x8009DA8C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8009DA90: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8009DA94: jal         0x8009D940
    // 0x8009DA98: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    func_8009D940(rdram, ctx);
        goto after_1;
    // 0x8009DA98: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x8009DA9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009DAA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8009DAA4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009DAAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009DAAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009DAB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009DAB4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8009DAB8: addiu       $at, $zero, -0x1000
    ctx->r1 = ADD32(0, -0X1000);
    // 0x8009DABC: and         $v1, $v0, $at
    ctx->r3 = ctx->r2 & ctx->r1;
    // 0x8009DAC0: addiu       $at, $zero, 0x4000
    ctx->r1 = ADD32(0, 0X4000);
    // 0x8009DAC4: andi        $t6, $v0, 0xFFF
    ctx->r14 = ctx->r2 & 0XFFF;
    // 0x8009DAC8: bne         $v1, $at, L_8009DAF4
    if (ctx->r3 != ctx->r1) {
        // 0x8009DACC: sw          $t6, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r14;
            goto L_8009DAF4;
    }
    // 0x8009DACC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8009DAD0: jal         0x8009EA2C
    // 0x8009DAD4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8009EA2C(rdram, ctx);
        goto after_0;
    // 0x8009DAD4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8009DAD8: beq         $v0, $zero, L_8009DAF4
    if (ctx->r2 == 0) {
        // 0x8009DADC: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_8009DAF4;
    }
    // 0x8009DADC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8009DAE0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009DAE4: lwc1        $f6, 0x538C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X538C);
    // 0x8009DAE8: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8009DAEC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8009DAF0: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
L_8009DAF4:
    // 0x8009DAF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009DAF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009DAFC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009DB04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009DB04: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009DB08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009DB0C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8009DB10: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8009DB14: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8009DB18: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8009DB1C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8009DB20: jal         0x8009DAAC
    // 0x8009DB24: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_8009DAAC(rdram, ctx);
        goto after_0;
    // 0x8009DB24: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x8009DB28: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009DB2C: jal         0x8009C128
    // 0x8009DB30: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x8009DB30: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x8009DB34: jal         0x8009D3D8
    // 0x8009DB38: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8009D3D8(rdram, ctx);
        goto after_2;
    // 0x8009DB38: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_2:
    // 0x8009DB3C: beq         $v0, $zero, L_8009DB78
    if (ctx->r2 == 0) {
        // 0x8009DB40: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_8009DB78;
    }
    // 0x8009DB40: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8009DB44: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x8009DB48: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009DB4C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009DB50: lwc1        $f6, 0x5390($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5390);
    // 0x8009DB54: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8009DB58: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8009DB5C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8009DB60: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    // 0x8009DB64: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8009DB68: jal         0x800C4208
    // 0x8009DB6C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800C4208(rdram, ctx);
        goto after_3;
    // 0x8009DB6C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x8009DB70: b           L_8009DBA4
    // 0x8009DB74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8009DBA4;
    // 0x8009DB74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009DB78:
    // 0x8009DB78: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x8009DB7C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009DB80: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009DB84: lwc1        $f10, 0x5394($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5394);
    // 0x8009DB88: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8009DB8C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8009DB90: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    // 0x8009DB94: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8009DB98: jal         0x800C4244
    // 0x8009DB9C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800C4244(rdram, ctx);
        goto after_4;
    // 0x8009DB9C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x8009DBA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009DBA4:
    // 0x8009DBA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8009DBA8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009DBB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009DBB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009DBB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009DBB8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8009DBBC: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8009DBC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009DBC4: jal         0x800DC178
    // 0x8009DBC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800DC178(rdram, ctx);
        goto after_0;
    // 0x8009DBC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8009DBCC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8009DBD0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009DBD4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8009DBD8: jal         0x8009DB04
    // 0x8009DBDC: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    func_8009DB04(rdram, ctx);
        goto after_1;
    // 0x8009DBDC: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x8009DBE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009DBE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009DBE8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009DBF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009DBF0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009DBF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009DBF8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8009DBFC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8009DC00: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8009DC04: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8009DC08: jal         0x8009DAAC
    // 0x8009DC0C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_8009DAAC(rdram, ctx);
        goto after_0;
    // 0x8009DC0C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x8009DC10: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009DC14: jal         0x8009C128
    // 0x8009DC18: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x8009DC18: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x8009DC1C: jal         0x8009D3D8
    // 0x8009DC20: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8009D3D8(rdram, ctx);
        goto after_2;
    // 0x8009DC20: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_2:
    // 0x8009DC24: beq         $v0, $zero, L_8009DC60
    if (ctx->r2 == 0) {
        // 0x8009DC28: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_8009DC60;
    }
    // 0x8009DC28: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8009DC2C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x8009DC30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009DC34: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009DC38: lwc1        $f6, 0x5398($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5398);
    // 0x8009DC3C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8009DC40: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8009DC44: addiu       $a2, $zero, 0x55F0
    ctx->r6 = ADD32(0, 0X55F0);
    // 0x8009DC48: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    // 0x8009DC4C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8009DC50: jal         0x800C4208
    // 0x8009DC54: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800C4208(rdram, ctx);
        goto after_3;
    // 0x8009DC54: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x8009DC58: b           L_8009DC8C
    // 0x8009DC5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8009DC8C;
    // 0x8009DC5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009DC60:
    // 0x8009DC60: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x8009DC64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009DC68: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009DC6C: lwc1        $f10, 0x539C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X539C);
    // 0x8009DC70: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8009DC74: addiu       $a2, $zero, 0x55F0
    ctx->r6 = ADD32(0, 0X55F0);
    // 0x8009DC78: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    // 0x8009DC7C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8009DC80: jal         0x800C4244
    // 0x8009DC84: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800C4244(rdram, ctx);
        goto after_4;
    // 0x8009DC84: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x8009DC88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009DC8C:
    // 0x8009DC8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8009DC90: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009DC98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009DC98: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8009DC9C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8009DCA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009DCA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009DCA8: addiu       $t6, $zero, 0x55F0
    ctx->r14 = ADD32(0, 0X55F0);
    // 0x8009DCAC: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8009DCB0: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x8009DCB4: jal         0x8009DBB0
    // 0x8009DCB8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8009DBB0(rdram, ctx);
        goto after_0;
    // 0x8009DCB8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x8009DCBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009DCC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009DCC4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009DCCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009DCCC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009DCD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009DCD4: andi        $s0, $a1, 0xFF
    ctx->r16 = ctx->r5 & 0XFF;
    // 0x8009DCD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009DCDC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8009DCE0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8009DCE4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8009DCE8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8009DCEC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8009DCF0: jal         0x8009DAAC
    // 0x8009DCF4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_8009DAAC(rdram, ctx);
        goto after_0;
    // 0x8009DCF4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x8009DCF8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8009DCFC: jal         0x8009C128
    // 0x8009DD00: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x8009DD00: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x8009DD04: jal         0x800C2E40
    // 0x8009DD08: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_800C2E40(rdram, ctx);
        goto after_2;
    // 0x8009DD08: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_2:
    // 0x8009DD0C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x8009DD10: jal         0x800C431C
    // 0x8009DD14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C431C(rdram, ctx);
        goto after_3;
    // 0x8009DD14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8009DD18: jal         0x8009D3D8
    // 0x8009DD1C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8009D3D8(rdram, ctx);
        goto after_4;
    // 0x8009DD1C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_4:
    // 0x8009DD20: beq         $v0, $zero, L_8009DD3C
    if (ctx->r2 == 0) {
        // 0x8009DD24: andi        $a0, $s0, 0xFF
        ctx->r4 = ctx->r16 & 0XFF;
            goto L_8009DD3C;
    }
    // 0x8009DD24: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x8009DD28: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x8009DD2C: jal         0x800C3418
    // 0x8009DD30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C3418(rdram, ctx);
        goto after_5;
    // 0x8009DD30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8009DD34: b           L_8009DD48
    // 0x8009DD38: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
        goto L_8009DD48;
    // 0x8009DD38: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
L_8009DD3C:
    // 0x8009DD3C: jal         0x800C3418
    // 0x8009DD40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C3418(rdram, ctx);
        goto after_6;
    // 0x8009DD40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8009DD44: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
L_8009DD48:
    // 0x8009DD48: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8009DD4C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x8009DD50: lw          $t7, 0x104($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X104);
    // 0x8009DD54: lbu         $t8, 0x1C($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1C);
    // 0x8009DD58: beq         $t8, $zero, L_8009DD70
    if (ctx->r24 == 0) {
        // 0x8009DD5C: nop
    
            goto L_8009DD70;
    }
    // 0x8009DD5C: nop

    // 0x8009DD60: jal         0x800C35E8
    // 0x8009DD64: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_800C35E8(rdram, ctx);
        goto after_7;
    // 0x8009DD64: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_7:
    // 0x8009DD68: b           L_8009DD7C
    // 0x8009DD6C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
        goto L_8009DD7C;
    // 0x8009DD6C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
L_8009DD70:
    // 0x8009DD70: jal         0x800C368C
    // 0x8009DD74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C368C(rdram, ctx);
        goto after_8;
    // 0x8009DD74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x8009DD78: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
L_8009DD7C:
    // 0x8009DD7C: jal         0x800C33DC
    // 0x8009DD80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C33DC(rdram, ctx);
        goto after_9;
    // 0x8009DD80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x8009DD84: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x8009DD88: jal         0x800C330C
    // 0x8009DD8C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800C330C(rdram, ctx);
        goto after_10;
    // 0x8009DD8C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x8009DD90: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x8009DD94: jal         0x800C301C
    // 0x8009DD98: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_800C301C(rdram, ctx);
        goto after_11;
    // 0x8009DD98: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_11:
    // 0x8009DD9C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x8009DDA0: jal         0x800C31DC
    // 0x8009DDA4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_800C31DC(rdram, ctx);
        goto after_12;
    // 0x8009DDA4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_12:
    // 0x8009DDA8: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x8009DDAC: jal         0x800C3058
    // 0x8009DDB0: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    func_800C3058(rdram, ctx);
        goto after_13;
    // 0x8009DDB0: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    after_13:
    // 0x8009DDB4: jal         0x800C3BDC
    // 0x8009DDB8: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_800C3BDC(rdram, ctx);
        goto after_14;
    // 0x8009DDB8: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_14:
    // 0x8009DDBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009DDC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009DDC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8009DDC8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009DDD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009DDD0: lw          $t6, 0x104($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X104);
    // 0x8009DDD4: jr          $ra
    // 0x8009DDD8: lbu         $v0, 0x2($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2);
    return;
    // 0x8009DDD8: lbu         $v0, 0x2($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X2);
;}
RECOMP_FUNC void func_8009DDDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009DDDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009DDE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009DDE4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8009DDE8: jal         0x8009C128
    // 0x8009DDEC: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8009DDEC: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8009DDF0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8009DDF4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x8009DDF8: lw          $t7, 0x104($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X104);
    // 0x8009DDFC: jal         0x800C35E8
    // 0x8009DE00: lbu         $a0, 0x3($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X3);
    func_800C35E8(rdram, ctx);
        goto after_1;
    // 0x8009DE00: lbu         $a0, 0x3($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X3);
    after_1:
    // 0x8009DE04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009DE08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009DE0C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009DE14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009DE14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009DE18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009DE1C: lw          $t6, 0x104($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X104);
    // 0x8009DE20: jal         0x800C3D78
    // 0x8009DE24: lbu         $a0, 0x2($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X2);
    func_800C3D78(rdram, ctx);
        goto after_0;
    // 0x8009DE24: lbu         $a0, 0x2($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X2);
    after_0:
    // 0x8009DE28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009DE2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009DE30: jr          $ra
    // 0x8009DE34: nop

    return;
    // 0x8009DE34: nop

;}
RECOMP_FUNC void func_8009DE38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009DE38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009DE3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009DE40: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8009DE44: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8009DE48: lw          $t6, 0x104($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X104);
    // 0x8009DE4C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8009DE50: addiu       $t7, $zero, 0x55F0
    ctx->r15 = ADD32(0, 0X55F0);
    // 0x8009DE54: lbu         $a1, 0x2($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X2);
    // 0x8009DE58: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x8009DE5C: jal         0x8009DCCC
    // 0x8009DE60: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_8009DCCC(rdram, ctx);
        goto after_0;
    // 0x8009DE60: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x8009DE64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009DE68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009DE6C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009DE74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009DE74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009DE78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009DE7C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8009DE80: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8009DE84: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8009DE88: jal         0x800DC178
    // 0x8009DE8C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800DC178(rdram, ctx);
        goto after_0;
    // 0x8009DE8C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8009DE90: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8009DE94: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8009DE98: addiu       $t7, $zero, 0x55F0
    ctx->r15 = ADD32(0, 0X55F0);
    // 0x8009DE9C: lw          $t6, 0x104($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X104);
    // 0x8009DEA0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8009DEA4: lbu         $a1, 0x2($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X2);
    // 0x8009DEA8: jal         0x8009DCCC
    // 0x8009DEAC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_8009DCCC(rdram, ctx);
        goto after_1;
    // 0x8009DEAC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x8009DEB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009DEB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009DEB8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009DEC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009DEC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009DEC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009DEC8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8009DECC: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8009DED0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8009DED4: jal         0x800DC178
    // 0x8009DED8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_800DC178(rdram, ctx);
        goto after_0;
    // 0x8009DED8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8009DEDC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8009DEE0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8009DEE4: jal         0x800DC128
    // 0x8009DEE8: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_800DC128(rdram, ctx);
        goto after_1;
    // 0x8009DEE8: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_1:
    // 0x8009DEEC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8009DEF0: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8009DEF4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8009DEF8: lw          $t6, 0x104($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X104);
    // 0x8009DEFC: lbu         $a1, 0x2($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X2);
    // 0x8009DF00: jal         0x8009DCCC
    // 0x8009DF04: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8009DCCC(rdram, ctx);
        goto after_2;
    // 0x8009DF04: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8009DF08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009DF0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009DF10: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009DF18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009DF18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009DF1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009DF20: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8009DF24: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8009DF28: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8009DF2C: lw          $t6, 0x104($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X104);
    // 0x8009DF30: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8009DF34: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8009DF38: lbu         $a1, 0x2($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X2);
    // 0x8009DF3C: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x8009DF40: jal         0x8009DCCC
    // 0x8009DF44: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_8009DCCC(rdram, ctx);
        goto after_0;
    // 0x8009DF44: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x8009DF48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009DF4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009DF50: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009DF58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009DF58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009DF5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009DF60: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8009DF64: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8009DF68: lw          $t6, 0x104($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X104);
    // 0x8009DF6C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8009DF70: addiu       $t7, $zero, 0x55F0
    ctx->r15 = ADD32(0, 0X55F0);
    // 0x8009DF74: lbu         $a1, 0x3($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X3);
    // 0x8009DF78: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x8009DF7C: jal         0x8009DCCC
    // 0x8009DF80: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_8009DCCC(rdram, ctx);
        goto after_0;
    // 0x8009DF80: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x8009DF84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009DF88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009DF8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009DF94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009DF94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009DF98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009DF9C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8009DFA0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8009DFA4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8009DFA8: lw          $t6, 0x104($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X104);
    // 0x8009DFAC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8009DFB0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8009DFB4: lbu         $a1, 0x3($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X3);
    // 0x8009DFB8: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x8009DFBC: jal         0x8009DCCC
    // 0x8009DFC0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_8009DCCC(rdram, ctx);
        goto after_0;
    // 0x8009DFC0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x8009DFC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009DFC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009DFCC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009DFD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009DFD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009DFD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009DFDC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8009DFE0: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8009DFE4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8009DFE8: jal         0x800DC178
    // 0x8009DFEC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_800DC178(rdram, ctx);
        goto after_0;
    // 0x8009DFEC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8009DFF0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8009DFF4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8009DFF8: jal         0x800DC128
    // 0x8009DFFC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_800DC128(rdram, ctx);
        goto after_1;
    // 0x8009DFFC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_1:
    // 0x8009E000: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8009E004: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8009E008: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8009E00C: lw          $t6, 0x104($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X104);
    // 0x8009E010: lbu         $a1, 0x3($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X3);
    // 0x8009E014: jal         0x8009DCCC
    // 0x8009E018: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8009DCCC(rdram, ctx);
        goto after_2;
    // 0x8009E018: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8009E01C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E020: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009E024: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009E02C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E02C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E030: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E034: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x8009E038: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8009E03C: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x8009E040: jal         0x8009DF18
    // 0x8009E044: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DF18(rdram, ctx);
        goto after_0;
    // 0x8009E044: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_0:
    // 0x8009E048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E04C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E050: jr          $ra
    // 0x8009E054: nop

    return;
    // 0x8009E054: nop

;}
RECOMP_FUNC void func_8009E058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E058: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E05C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E060: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x8009E064: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8009E068: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x8009E06C: jal         0x8009DF18
    // 0x8009E070: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_0;
    // 0x8009E070: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_0:
    // 0x8009E074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E078: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E07C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009E084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E084: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E088: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E08C: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x8009E090: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8009E094: jal         0x8009DF18
    // 0x8009E098: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    func_8009DF18(rdram, ctx);
        goto after_0;
    // 0x8009E098: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    after_0:
    // 0x8009E09C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E0A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E0A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009E0AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E0AC: lw          $t6, 0x104($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X104);
    // 0x8009E0B0: jr          $ra
    // 0x8009E0B4: sb          $a1, 0x1C($t6)
    MEM_B(0X1C, ctx->r14) = ctx->r5;
    return;
    // 0x8009E0B4: sb          $a1, 0x1C($t6)
    MEM_B(0X1C, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_8009E0B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E0B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E0BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E0C0: lw          $t6, 0x104($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X104);
    // 0x8009E0C4: jal         0x800C3CE8
    // 0x8009E0C8: lbu         $a0, 0x0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X0);
    func_800C3CE8(rdram, ctx);
        goto after_0;
    // 0x8009E0C8: lbu         $a0, 0x0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X0);
    after_0:
    // 0x8009E0CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E0D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E0D4: jr          $ra
    // 0x8009E0D8: nop

    return;
    // 0x8009E0D8: nop

;}
RECOMP_FUNC void func_8009E0DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E0DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E0E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E0E4: lw          $t6, 0x104($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X104);
    // 0x8009E0E8: jal         0x800C3CE8
    // 0x8009E0EC: lbu         $a0, 0x2($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X2);
    func_800C3CE8(rdram, ctx);
        goto after_0;
    // 0x8009E0EC: lbu         $a0, 0x2($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X2);
    after_0:
    // 0x8009E0F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E0F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E0F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009E100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E100: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E108: lw          $t6, 0x104($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X104);
    // 0x8009E10C: jal         0x800C3CE8
    // 0x8009E110: lbu         $a0, 0x3($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X3);
    func_800C3CE8(rdram, ctx);
        goto after_0;
    // 0x8009E110: lbu         $a0, 0x3($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X3);
    after_0:
    // 0x8009E114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E11C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009E130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E130: jr          $ra
    // 0x8009E134: addiu       $v0, $zero, 0xF4
    ctx->r2 = ADD32(0, 0XF4);
    return;
    // 0x8009E134: addiu       $v0, $zero, 0xF4
    ctx->r2 = ADD32(0, 0XF4);
;}
RECOMP_FUNC void func_8009E138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E138: lw          $t6, 0x114($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X114);
    // 0x8009E13C: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8009E140: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x8009E144: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8009E148: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8009E14C: jr          $ra
    // 0x8009E150: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
    return;
    // 0x8009E150: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
;}
RECOMP_FUNC void func_8009E154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E154: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8009E158: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8009E15C: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x8009E160: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8009E164: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8009E168: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8009E16C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8009E170: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x8009E174: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8009E178: lw          $t7, 0x114($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X114);
    // 0x8009E17C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8009E180: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x8009E184: addu        $v0, $t7, $t6
    ctx->r2 = ADD32(ctx->r15, ctx->r14);
    // 0x8009E188: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x8009E18C: beql        $v1, $zero, L_8009E1AC
    if (ctx->r3 == 0) {
        // 0x8009E190: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8009E1AC;
    }
    goto skip_0;
    // 0x8009E190: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x8009E194: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x8009E198: jalr        $v1
    // 0x8009E19C: lh          $a2, 0x4($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X4);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x8009E19C: lh          $a2, 0x4($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X4);
    after_0:
    // 0x8009E1A0: b           L_8009E2B4
    // 0x8009E1A4: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
        goto L_8009E2B4;
    // 0x8009E1A4: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x8009E1A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_8009E1AC:
    // 0x8009E1AC: jal         0x80092CDC
    // 0x8009E1B0: lh          $a2, 0x4($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X4);
    func_80092CDC(rdram, ctx);
        goto after_1;
    // 0x8009E1B0: lh          $a2, 0x4($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X4);
    after_1:
    // 0x8009E1B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8009E1B8: jal         0x8009C128
    // 0x8009E1BC: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_8009C128(rdram, ctx);
        goto after_2;
    // 0x8009E1BC: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_2:
    // 0x8009E1C0: addiu       $s0, $sp, 0x4C
    ctx->r16 = ADD32(ctx->r29, 0X4C);
    // 0x8009E1C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8009E1C8: jal         0x80092D18
    // 0x8009E1CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80092D18(rdram, ctx);
        goto after_3;
    // 0x8009E1CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x8009E1D0: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x8009E1D4: jal         0x800EF04C
    // 0x8009E1D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EF04C(rdram, ctx);
        goto after_4;
    // 0x8009E1D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x8009E1DC: jal         0x800EEEA8
    // 0x8009E1E0: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    func_800EEEA8(rdram, ctx);
        goto after_5;
    // 0x8009E1E0: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    after_5:
    // 0x8009E1E4: beq         $v0, $zero, L_8009E250
    if (ctx->r2 == 0) {
        // 0x8009E1E8: addiu       $s0, $sp, 0x58
        ctx->r16 = ADD32(ctx->r29, 0X58);
            goto L_8009E250;
    }
    // 0x8009E1E8: addiu       $s0, $sp, 0x58
    ctx->r16 = ADD32(ctx->r29, 0X58);
    // 0x8009E1EC: lw          $t9, 0x114($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X114);
    // 0x8009E1F0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8009E1F4: addiu       $s0, $sp, 0x58
    ctx->r16 = ADD32(ctx->r29, 0X58);
    // 0x8009E1F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009E1FC: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x8009E200: jal         0x800EE7F8
    // 0x8009E204: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_6;
    // 0x8009E204: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_6:
    // 0x8009E208: jal         0x8009BFCC
    // 0x8009E20C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BFCC(rdram, ctx);
        goto after_7;
    // 0x8009E20C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x8009E210: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8009E214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009E218: jal         0x800EF8BC
    // 0x8009E21C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EF8BC(rdram, ctx);
        goto after_8;
    // 0x8009E21C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x8009E220: jal         0x8009C984
    // 0x8009E224: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C984(rdram, ctx);
        goto after_9;
    // 0x8009E224: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x8009E228: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8009E22C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009E230: jal         0x800EF934
    // 0x8009E234: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EF934(rdram, ctx);
        goto after_10;
    // 0x8009E234: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x8009E238: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x8009E23C: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x8009E240: jal         0x800EE780
    // 0x8009E244: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800EE780(rdram, ctx);
        goto after_11;
    // 0x8009E244: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_11:
    // 0x8009E248: b           L_8009E2B4
    // 0x8009E24C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
        goto L_8009E2B4;
    // 0x8009E24C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
L_8009E250:
    // 0x8009E250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009E254: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x8009E258: jal         0x800EFB24
    // 0x8009E25C: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_800EFB24(rdram, ctx);
        goto after_12;
    // 0x8009E25C: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_12:
    // 0x8009E260: jal         0x8009C984
    // 0x8009E264: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C984(rdram, ctx);
        goto after_13;
    // 0x8009E264: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x8009E268: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x8009E26C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009E270: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009E274: jal         0x800EF934
    // 0x8009E278: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EF934(rdram, ctx);
        goto after_14;
    // 0x8009E278: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_14:
    // 0x8009E27C: jal         0x8009BFCC
    // 0x8009E280: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BFCC(rdram, ctx);
        goto after_15;
    // 0x8009E280: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x8009E284: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x8009E288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009E28C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8009E290: jal         0x800EF8BC
    // 0x8009E294: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EF8BC(rdram, ctx);
        goto after_16;
    // 0x8009E294: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_16:
    // 0x8009E298: lw          $t1, 0x114($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X114);
    // 0x8009E29C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8009E2A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8009E2A4: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x8009E2A8: jal         0x800EE7F8
    // 0x8009E2AC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_800EE7F8(rdram, ctx);
        goto after_17;
    // 0x8009E2AC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_17:
    // 0x8009E2B0: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
L_8009E2B4:
    // 0x8009E2B4: lw          $t3, 0x114($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X114);
    // 0x8009E2B8: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8009E2BC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009E2C0: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x8009E2C4: lwc1        $f10, 0x18($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X18);
    // 0x8009E2C8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8009E2CC: swc1        $f16, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f16.u32l;
    // 0x8009E2D0: lw          $t5, 0x114($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X114);
    // 0x8009E2D4: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x8009E2D8: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8009E2DC: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x8009E2E0: nop

    // 0x8009E2E4: bc1tl       L_8009E350
    if (c1cs) {
        // 0x8009E2E8: addiu       $s0, $sp, 0x40
        ctx->r16 = ADD32(ctx->r29, 0X40);
            goto L_8009E350;
    }
    goto skip_1;
    // 0x8009E2E8: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
    skip_1:
    // 0x8009E2EC: jal         0x8009C984
    // 0x8009E2F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C984(rdram, ctx);
        goto after_18;
    // 0x8009E2F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_18:
    // 0x8009E2F4: lw          $t7, 0x114($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X114);
    // 0x8009E2F8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8009E2FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009E300: lwc1        $f6, 0x24($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X24);
    // 0x8009E304: jal         0x800136E4
    // 0x8009E308: add.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f0.fl;
    func_800136E4(rdram, ctx);
        goto after_19;
    // 0x8009E308: add.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f0.fl;
    after_19:
    // 0x8009E30C: lw          $t0, 0x114($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X114);
    // 0x8009E310: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8009E314: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8009E318: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x8009E31C: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x8009E320: lw          $a1, 0x20($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X20);
    // 0x8009E324: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x8009E328: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8009E32C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8009E330: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x8009E334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009E338: jal         0x800EF4E4
    // 0x8009E33C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800EF4E4(rdram, ctx);
        goto after_20;
    // 0x8009E33C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_20:
    // 0x8009E340: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x8009E344: jal         0x800EF04C
    // 0x8009E348: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EF04C(rdram, ctx);
        goto after_21;
    // 0x8009E348: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_21:
    // 0x8009E34C: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
L_8009E350:
    // 0x8009E350: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8009E354: jal         0x80096394
    // 0x8009E358: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80096394(rdram, ctx);
        goto after_22;
    // 0x8009E358: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_22:
    // 0x8009E35C: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x8009E360: jal         0x800EF04C
    // 0x8009E364: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EF04C(rdram, ctx);
        goto after_23;
    // 0x8009E364: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_23:
    // 0x8009E368: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x8009E36C: jal         0x800EE7F8
    // 0x8009E370: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    func_800EE7F8(rdram, ctx);
        goto after_24;
    // 0x8009E370: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    after_24:
    // 0x8009E374: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8009E378: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E37C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8009E380: jr          $ra
    // 0x8009E384: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x8009E384: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_8009E388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E388: jr          $ra
    // 0x8009E38C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8009E38C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8009E390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E390: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009E394: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8009E398: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8009E39C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8009E3A0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8009E3A4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8009E3A8: lw          $t6, 0x114($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X114);
    // 0x8009E3AC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8009E3B0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8009E3B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8009E3B8: addiu       $s1, $zero, 0x78
    ctx->r17 = ADD32(0, 0X78);
    // 0x8009E3BC: sb          $zero, 0xF0($t6)
    MEM_B(0XF0, ctx->r14) = 0;
    // 0x8009E3C0: lw          $t7, 0x114($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X114);
L_8009E3C4:
    // 0x8009E3C4: addu        $v0, $t7, $s0
    ctx->r2 = ADD32(ctx->r15, ctx->r16);
    // 0x8009E3C8: swc1        $f20, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f20.u32l;
    // 0x8009E3CC: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x8009E3D0: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x8009E3D4: swc1        $f20, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f20.u32l;
    // 0x8009E3D8: swc1        $f20, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f20.u32l;
    // 0x8009E3DC: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x8009E3E0: swc1        $f20, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f20.u32l;
    // 0x8009E3E4: jal         0x800EFD24
    // 0x8009E3E8: addiu       $a0, $v0, 0xC
    ctx->r4 = ADD32(ctx->r2, 0XC);
    func_800EFD24(rdram, ctx);
        goto after_0;
    // 0x8009E3E8: addiu       $a0, $v0, 0xC
    ctx->r4 = ADD32(ctx->r2, 0XC);
    after_0:
    // 0x8009E3EC: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8009E3F0: bnel        $s0, $s1, L_8009E3C4
    if (ctx->r16 != ctx->r17) {
        // 0x8009E3F4: lw          $t7, 0x114($s2)
        ctx->r15 = MEM_W(ctx->r18, 0X114);
            goto L_8009E3C4;
    }
    goto skip_0;
    // 0x8009E3F4: lw          $t7, 0x114($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X114);
    skip_0:
    // 0x8009E3F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8009E3FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009E400: jal         0x8009E5A4
    // 0x8009E404: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8009E5A4(rdram, ctx);
        goto after_1;
    // 0x8009E404: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8009E408: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8009E40C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8009E410: jal         0x8009E5A4
    // 0x8009E414: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8009E5A4(rdram, ctx);
        goto after_2;
    // 0x8009E414: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x8009E418: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8009E41C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8009E420: jal         0x8009E5A4
    // 0x8009E424: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8009E5A4(rdram, ctx);
        goto after_3;
    // 0x8009E424: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x8009E428: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8009E42C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009E430: jal         0x8009E55C
    // 0x8009E434: lui         $a2, 0x4200
    ctx->r6 = S32(0X4200 << 16);
    func_8009E55C(rdram, ctx);
        goto after_4;
    // 0x8009E434: lui         $a2, 0x4200
    ctx->r6 = S32(0X4200 << 16);
    after_4:
    // 0x8009E438: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8009E43C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8009E440: jal         0x8009E55C
    // 0x8009E444: lui         $a2, 0x41E0
    ctx->r6 = S32(0X41E0 << 16);
    func_8009E55C(rdram, ctx);
        goto after_5;
    // 0x8009E444: lui         $a2, 0x41E0
    ctx->r6 = S32(0X41E0 << 16);
    after_5:
    // 0x8009E448: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8009E44C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8009E450: jal         0x8009E55C
    // 0x8009E454: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E55C(rdram, ctx);
        goto after_6;
    // 0x8009E454: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_6:
    // 0x8009E458: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8009E45C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8009E460: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8009E464: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8009E468: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8009E46C: jr          $ra
    // 0x8009E470: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8009E470: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8009E474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E474: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E47C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009E480: lw          $a0, 0x114($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X114);
    // 0x8009E484: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x8009E488: jal         0x8001BBA0
    // 0x8009E48C: addiu       $a1, $a0, 0x78
    ctx->r5 = ADD32(ctx->r4, 0X78);
    rare_memcpy(rdram, ctx);
        goto after_0;
    // 0x8009E48C: addiu       $a1, $a0, 0x78
    ctx->r5 = ADD32(ctx->r4, 0X78);
    after_0:
    // 0x8009E490: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8009E494: lw          $t8, 0x114($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X114);
    // 0x8009E498: sb          $zero, 0xF0($t8)
    MEM_B(0XF0, ctx->r24) = 0;
    // 0x8009E49C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E4A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E4A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009E4AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E4AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E4B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E4B4: lw          $t7, 0x114($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X114);
    // 0x8009E4B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8009E4BC: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x8009E4C0: sb          $t6, 0xF0($t7)
    MEM_B(0XF0, ctx->r15) = ctx->r14;
    // 0x8009E4C4: lw          $a1, 0x114($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X114);
    // 0x8009E4C8: jal         0x8001BBA0
    // 0x8009E4CC: addiu       $a0, $a1, 0x78
    ctx->r4 = ADD32(ctx->r5, 0X78);
    rare_memcpy(rdram, ctx);
        goto after_0;
    // 0x8009E4CC: addiu       $a0, $a1, 0x78
    ctx->r4 = ADD32(ctx->r5, 0X78);
    after_0:
    // 0x8009E4D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E4D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E4D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009E4E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E4E0: lw          $t6, 0x114($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X114);
    // 0x8009E4E4: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8009E4E8: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x8009E4EC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8009E4F0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8009E4F4: jr          $ra
    // 0x8009E4F8: sw          $a2, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r6;
    return;
    // 0x8009E4F8: sw          $a2, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r6;
;}
RECOMP_FUNC void func_8009E4FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E4FC: lw          $t6, 0x114($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X114);
    // 0x8009E500: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x8009E504: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8009E508: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8009E50C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8009E510: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8009E514: swc1        $f12, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f12.u32l;
    // 0x8009E518: lw          $t8, 0x114($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X114);
    // 0x8009E51C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8009E520: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8009E524: swc1        $f14, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f14.u32l;
    // 0x8009E528: lw          $t0, 0x114($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X114);
    // 0x8009E52C: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8009E530: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x8009E534: jr          $ra
    // 0x8009E538: swc1        $f4, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f4.u32l;
    return;
    // 0x8009E538: swc1        $f4, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8009E53C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E53C: lw          $t6, 0x114($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X114);
    // 0x8009E540: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8009E544: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x8009E548: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8009E54C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8009E550: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8009E554: jr          $ra
    // 0x8009E558: swc1        $f12, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f12.u32l;
    return;
    // 0x8009E558: swc1        $f12, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8009E55C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E55C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8009E560: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009E564: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E56C: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x8009E570: lw          $t6, 0x114($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X114);
    // 0x8009E574: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8009E578: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x8009E57C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8009E580: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8009E584: bc1f        L_8009E594
    if (!c1cs) {
        // 0x8009E588: swc1        $f12, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->f12.u32l;
            goto L_8009E594;
    }
    // 0x8009E588: swc1        $f12, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f12.u32l;
    // 0x8009E58C: jal         0x8009E4E0
    // 0x8009E590: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8009E4E0(rdram, ctx);
        goto after_0;
    // 0x8009E590: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_8009E594:
    // 0x8009E594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E598: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E59C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009E5A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E5A4: lw          $t6, 0x114($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X114);
    // 0x8009E5A8: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8009E5AC: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x8009E5B0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8009E5B4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8009E5B8: jr          $ra
    // 0x8009E5BC: sh          $a2, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r6;
    return;
    // 0x8009E5BC: sh          $a2, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r6;
;}
RECOMP_FUNC void func_8009E5C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E5C0: jr          $ra
    // 0x8009E5C4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    return;
    // 0x8009E5C4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
;}
RECOMP_FUNC void func_8009E5C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E5C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009E5CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009E5D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009E5D4: beq         $a1, $zero, L_8009E660
    if (ctx->r5 == 0) {
        // 0x8009E5D8: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_8009E660;
    }
    // 0x8009E5D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009E5DC: lw          $t6, 0x120($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X120);
    // 0x8009E5E0: sw          $a1, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r5;
    // 0x8009E5E4: lw          $t7, 0x120($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X120);
    // 0x8009E5E8: jal         0x8009CAAC
    // 0x8009E5EC: lw          $a1, 0x4($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X4);
    func_8009CAAC(rdram, ctx);
        goto after_0;
    // 0x8009E5EC: lw          $a1, 0x4($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X4);
    after_0:
    // 0x8009E5F0: beql        $v0, $zero, L_8009E614
    if (ctx->r2 == 0) {
        // 0x8009E5F4: lw          $v0, 0x120($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X120);
            goto L_8009E614;
    }
    goto skip_0;
    // 0x8009E5F4: lw          $v0, 0x120($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X120);
    skip_0:
    // 0x8009E5F8: lw          $t8, 0x120($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X120);
    // 0x8009E5FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009E600: jal         0x8009CAAC
    // 0x8009E604: lw          $a1, 0x4($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X4);
    func_8009CAAC(rdram, ctx);
        goto after_1;
    // 0x8009E604: lw          $a1, 0x4($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X4);
    after_1:
    // 0x8009E608: jalr        $v0
    // 0x8009E60C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8009E60C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8009E610: lw          $v0, 0x120($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X120);
L_8009E614:
    // 0x8009E614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009E618: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x8009E61C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8009E620: lw          $v0, 0x120($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X120);
    // 0x8009E624: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x8009E628: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x8009E62C: lw          $t1, 0x120($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X120);
    // 0x8009E630: sw          $zero, 0x8($t1)
    MEM_W(0X8, ctx->r9) = 0;
    // 0x8009E634: lw          $t2, 0x120($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X120);
    // 0x8009E638: jal         0x8009CAF8
    // 0x8009E63C: lw          $a1, 0x4($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X4);
    func_8009CAF8(rdram, ctx);
        goto after_3;
    // 0x8009E63C: lw          $a1, 0x4($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X4);
    after_3:
    // 0x8009E640: beql        $v0, $zero, L_8009E664
    if (ctx->r2 == 0) {
        // 0x8009E644: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8009E664;
    }
    goto skip_1;
    // 0x8009E644: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x8009E648: lw          $t3, 0x120($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X120);
    // 0x8009E64C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009E650: jal         0x8009CAF8
    // 0x8009E654: lw          $a1, 0x4($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X4);
    func_8009CAF8(rdram, ctx);
        goto after_4;
    // 0x8009E654: lw          $a1, 0x4($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X4);
    after_4:
    // 0x8009E658: jalr        $v0
    // 0x8009E65C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8009E65C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_8009E660:
    // 0x8009E660: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009E664:
    // 0x8009E664: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009E668: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009E66C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009E674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E674: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E678: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E67C: lw          $t6, 0x120($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X120);
    // 0x8009E680: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8009E684: jal         0x8009CA70
    // 0x8009E688: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    func_8009CA70(rdram, ctx);
        goto after_0;
    // 0x8009E688: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    after_0:
    // 0x8009E68C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E694: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009E69C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E69C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E6A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E6A4: lw          $t6, 0x120($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X120);
    // 0x8009E6A8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8009E6AC: jal         0x8009CA70
    // 0x8009E6B0: lw          $a1, 0x8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8);
    func_8009CA70(rdram, ctx);
        goto after_0;
    // 0x8009E6B0: lw          $a1, 0x8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8);
    after_0:
    // 0x8009E6B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E6B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E6BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009E6C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E6C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E6C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E6CC: lw          $t6, 0x120($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X120);
    // 0x8009E6D0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8009E6D4: jal         0x8009CA70
    // 0x8009E6D8: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    func_8009CA70(rdram, ctx);
        goto after_0;
    // 0x8009E6D8: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8009E6DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E6E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E6E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009E6EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E6EC: lw          $t6, 0x120($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X120);
    // 0x8009E6F0: jr          $ra
    // 0x8009E6F4: lh          $v0, 0xC($t6)
    ctx->r2 = MEM_H(ctx->r14, 0XC);
    return;
    // 0x8009E6F4: lh          $v0, 0xC($t6)
    ctx->r2 = MEM_H(ctx->r14, 0XC);
;}
RECOMP_FUNC void func_8009E6F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E6F8: lw          $t6, 0x120($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X120);
    // 0x8009E6FC: jr          $ra
    // 0x8009E700: lw          $v0, 0x4($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X4);
    return;
    // 0x8009E700: lw          $v0, 0x4($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X4);
;}
RECOMP_FUNC void func_8009E704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E704: lw          $t6, 0x120($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X120);
    // 0x8009E708: jr          $ra
    // 0x8009E70C: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    return;
    // 0x8009E70C: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
;}
RECOMP_FUNC void func_8009E710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E710: lw          $t6, 0x120($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X120);
    // 0x8009E714: jr          $ra
    // 0x8009E718: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    return;
    // 0x8009E718: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
;}
RECOMP_FUNC void func_8009E71C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E71C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E720: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E724: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8009E728: lw          $t6, 0x120($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X120);
    // 0x8009E72C: jal         0x8009CBDC
    // 0x8009E730: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    func_8009CBDC(rdram, ctx);
        goto after_0;
    // 0x8009E730: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    after_0:
    // 0x8009E734: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E73C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E740: xor         $v0, $v0, $t7
    ctx->r2 = ctx->r2 ^ ctx->r15;
    // 0x8009E744: jr          $ra
    // 0x8009E748: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x8009E748: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_8009E74C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E74C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E750: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E754: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8009E758: lw          $t6, 0x120($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X120);
    // 0x8009E75C: jal         0x8009CBDC
    // 0x8009E760: lw          $a1, 0x8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8);
    func_8009CBDC(rdram, ctx);
        goto after_0;
    // 0x8009E760: lw          $a1, 0x8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8);
    after_0:
    // 0x8009E764: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E76C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E770: xor         $v0, $v0, $t7
    ctx->r2 = ctx->r2 ^ ctx->r15;
    // 0x8009E774: jr          $ra
    // 0x8009E778: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x8009E778: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_8009E77C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E77C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E780: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E784: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8009E788: lw          $t6, 0x120($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X120);
    // 0x8009E78C: jal         0x8009CBDC
    // 0x8009E790: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    func_8009CBDC(rdram, ctx);
        goto after_0;
    // 0x8009E790: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8009E794: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E79C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E7A0: xor         $v0, $v0, $t7
    ctx->r2 = ctx->r2 ^ ctx->r15;
    // 0x8009E7A4: jr          $ra
    // 0x8009E7A8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x8009E7A8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_8009E7AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E7AC: lw          $t6, 0x120($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X120);
    // 0x8009E7B0: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x8009E7B4: lw          $t7, 0x120($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X120);
    // 0x8009E7B8: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8009E7BC: lw          $t8, 0x120($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X120);
    // 0x8009E7C0: jr          $ra
    // 0x8009E7C4: sw          $zero, 0x8($t8)
    MEM_W(0X8, ctx->r24) = 0;
    return;
    // 0x8009E7C4: sw          $zero, 0x8($t8)
    MEM_W(0X8, ctx->r24) = 0;
;}
RECOMP_FUNC void func_8009E7C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E7C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009E7CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009E7D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009E7D4: lw          $t6, 0x120($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X120);
    // 0x8009E7D8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8009E7DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009E7E0: sh          $a1, 0xC($t6)
    MEM_H(0XC, ctx->r14) = ctx->r5;
    // 0x8009E7E4: lw          $t8, 0x120($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X120);
    // 0x8009E7E8: sh          $t7, 0xE($t8)
    MEM_H(0XE, ctx->r24) = ctx->r15;
    // 0x8009E7EC: lw          $t9, 0x120($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X120);
    // 0x8009E7F0: jal         0x8009CB44
    // 0x8009E7F4: lw          $a1, 0x4($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X4);
    func_8009CB44(rdram, ctx);
        goto after_0;
    // 0x8009E7F4: lw          $a1, 0x4($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X4);
    after_0:
    // 0x8009E7F8: beql        $v0, $zero, L_8009E81C
    if (ctx->r2 == 0) {
        // 0x8009E7FC: lw          $t1, 0x120($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X120);
            goto L_8009E81C;
    }
    goto skip_0;
    // 0x8009E7FC: lw          $t1, 0x120($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X120);
    skip_0:
    // 0x8009E800: lw          $t0, 0x120($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X120);
    // 0x8009E804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009E808: jal         0x8009CB44
    // 0x8009E80C: lw          $a1, 0x4($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4);
    func_8009CB44(rdram, ctx);
        goto after_1;
    // 0x8009E80C: lw          $a1, 0x4($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4);
    after_1:
    // 0x8009E810: jalr        $v0
    // 0x8009E814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8009E814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8009E818: lw          $t1, 0x120($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X120);
L_8009E81C:
    // 0x8009E81C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E820: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009E824: lh          $v0, 0xE($t1)
    ctx->r2 = MEM_H(ctx->r9, 0XE);
    // 0x8009E828: jr          $ra
    // 0x8009E82C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8009E82C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8009E830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E830: lw          $t6, 0x120($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X120);
    // 0x8009E834: jr          $ra
    // 0x8009E838: sh          $a1, 0xE($t6)
    MEM_H(0XE, ctx->r14) = ctx->r5;
    return;
    // 0x8009E838: sh          $a1, 0xE($t6)
    MEM_H(0XE, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_8009E83C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E83C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E840: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E844: lw          $t6, 0x120($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X120);
    // 0x8009E848: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x8009E84C: jal         0x8009CB90
    // 0x8009E850: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009CB90(rdram, ctx);
        goto after_0;
    // 0x8009E850: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009E854: beq         $v0, $zero, L_8009E864
    if (ctx->r2 == 0) {
        // 0x8009E858: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8009E864;
    }
    // 0x8009E858: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009E85C: jalr        $v0
    // 0x8009E860: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8009E860: nop

    after_1:
L_8009E864:
    // 0x8009E864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E86C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009E880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E880: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8009E884: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8009E888: addiu       $a0, $a0, 0x7040
    ctx->r4 = ADD32(ctx->r4, 0X7040);
    // 0x8009E88C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8009E890: addiu       $v0, $v0, 0x7068
    ctx->r2 = ADD32(ctx->r2, 0X7068);
    // 0x8009E894: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8009E898: sb          $v1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r3;
    // 0x8009E89C: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x8009E8A0: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x8009E8A4: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x8009E8A8: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x8009E8AC: jr          $ra
    // 0x8009E8B0: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x8009E8B0: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_8009E8B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E8B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009E8B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E8BC: jal         0x800C6E58
    // 0x8009E8C0: nop

    func_800C6E58(rdram, ctx);
        goto after_0;
    // 0x8009E8C0: nop

    after_0:
    // 0x8009E8C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E8C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009E8CC: jr          $ra
    return;
;}
