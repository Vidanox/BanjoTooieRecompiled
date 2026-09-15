#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void bskazjump_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080046C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800474: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800478: jal         0x800C6E38
    // 0x8080047C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8080047C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80800480: beq         $v0, $zero, L_80800490
    if (ctx->r2 == 0) {
        // 0x80800484: nop
    
            goto L_80800490;
    }
    // 0x80800484: nop

    // 0x80800488: jal         0x800C6DA0
    // 0x8080048C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    func_800C6DA0(rdram, ctx);
        goto after_1;
    // 0x8080048C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_1:
L_80800490:
    // 0x80800490: jal         0x8009BC6C
    // 0x80800494: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BC6C(rdram, ctx);
        goto after_2;
    // 0x80800494: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800498: jal         0x800832E8
    // 0x8080049C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bskaz_entrypoint_2(rdram, ctx);
        goto after_3;
    // 0x8080049C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x808004A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004A8: jr          $ra
    // 0x808004AC: nop

    return;
    // 0x808004AC: nop

;}
RECOMP_FUNC void bskazjump_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004B0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808004B4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(120, 0XC40) << 16);
    // 0x808004B8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808004BC: jr          $ra
    // 0x808004C0: lw          $v0, 0xC40($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(120, 0XC40));
    return;
    // 0x808004C0: lw          $v0, 0xC40($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(120, 0XC40));
;}
RECOMP_FUNC void func_808004C4_bskazjump(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808004C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808004CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808004D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808004D4: jal         0x8008CABC
    // 0x808004D8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808004D8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x808004DC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x808004E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808004E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808004E8: beq         $v1, $at, L_80800504
    if (ctx->r3 == ctx->r1) {
        // 0x808004EC: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800504;
    }
    // 0x808004EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808004F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808004F4: beq         $v1, $at, L_8080051C
    if (ctx->r3 == ctx->r1) {
        // 0x808004F8: nop
    
            goto L_8080051C;
    }
    // 0x808004F8: nop

    // 0x808004FC: b           L_80800568
    // 0x80800500: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
        goto L_80800568;
    // 0x80800500: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
L_80800504:
    // 0x80800504: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x80800508: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080050C: jal         0x8008CB3C
    // 0x80800510: addiu       $a1, $zero, 0x13B
    ctx->r5 = ADD32(0, 0X13B);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80800510: addiu       $a1, $zero, 0x13B
    ctx->r5 = ADD32(0, 0X13B);
    after_1:
    // 0x80800514: b           L_80800564
    // 0x80800518: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
        goto L_80800564;
    // 0x80800518: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_8080051C:
    // 0x8080051C: jal         0x8008AF24
    // 0x80800520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x80800520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800528: jal         0x8008AED4
    // 0x8080052C: addiu       $a1, $zero, 0xA9
    ctx->r5 = ADD32(0, 0XA9);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x8080052C: addiu       $a1, $zero, 0xA9
    ctx->r5 = ADD32(0, 0XA9);
    after_3:
    // 0x80800530: lui         $a1, 0x3F31
    ctx->r5 = S32(0X3F31 << 16);
    // 0x80800534: ori         $a1, $a1, 0x3405
    ctx->r5 = ctx->r5 | 0X3405;
    // 0x80800538: jal         0x8008B24C
    // 0x8080053C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_4;
    // 0x8080053C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800544: jal         0x8008B1BC
    // 0x80800548: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_5;
    // 0x80800548: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_5:
    // 0x8080054C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800550: jal         0x8008B134
    // 0x80800554: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_6;
    // 0x80800554: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x80800558: jal         0x8008B064
    // 0x8080055C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x8080055C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800560: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_80800564:
    // 0x80800564: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
L_80800568:
    // 0x80800568: sw          $v1, 0x15C($t6)
    MEM_W(0X15C, ctx->r14) = ctx->r3;
    // 0x8080056C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800570: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800574: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800578: jr          $ra
    // 0x8080057C: nop

    return;
    // 0x8080057C: nop

;}
RECOMP_FUNC void bskazjump_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800580: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800588: jal         0x800832E8
    // 0x8080058C: nop

    _bskaz_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x8080058C: nop

    after_0:
    // 0x80800590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800598: jr          $ra
    // 0x8080059C: nop

    return;
    // 0x8080059C: nop

;}
RECOMP_FUNC void bskazjump_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808005A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808005A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808005AC: jal         0x800832E0
    // 0x808005B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808005B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808005B4: jal         0x8009E710
    // 0x808005B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E710(rdram, ctx);
        goto after_1;
    // 0x808005B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808005BC: xori        $t6, $v0, 0xC6
    ctx->r14 = ctx->r2 ^ 0XC6;
    // 0x808005C0: sltiu       $t6, $t6, 0x1
    ctx->r14 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x808005C4: sw          $t6, 0x168($s0)
    MEM_W(0X168, ctx->r16) = ctx->r14;
    // 0x808005C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005CC: jal         0x80095738
    // 0x808005D0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_80095738(rdram, ctx);
        goto after_2;
    // 0x808005D0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_2:
    // 0x808005D4: beql        $v0, $zero, L_80800610
    if (ctx->r2 == 0) {
        // 0x808005D8: addiu       $t7, $zero, 0x6
        ctx->r15 = ADD32(0, 0X6);
            goto L_80800610;
    }
    goto skip_0;
    // 0x808005D8: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    skip_0:
    // 0x808005DC: jal         0x8009BB50
    // 0x808005E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_3;
    // 0x808005E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808005E4: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x808005E8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x808005EC: nop

    // 0x808005F0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x808005F4: nop

    // 0x808005F8: bc1fl       L_80800610
    if (!c1cs) {
        // 0x808005FC: addiu       $t7, $zero, 0x6
        ctx->r15 = ADD32(0, 0X6);
            goto L_80800610;
    }
    goto skip_1;
    // 0x808005FC: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    skip_1:
    // 0x80800600: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80800604: jal         0x8009BA58
    // 0x80800608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_4;
    // 0x80800608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080060C: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
L_80800610:
    // 0x80800610: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800618: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080061C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800620: jal         0x8009FFD8
    // 0x80800624: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_5;
    // 0x80800624: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_5:
    // 0x80800628: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x8080062C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800630: jal         0x8008DF8C
    // 0x80800634: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    func_8008DF8C(rdram, ctx);
        goto after_6;
    // 0x80800634: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    after_6:
    // 0x80800638: beq         $v0, $zero, L_80800654
    if (ctx->r2 == 0) {
        // 0x8080063C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800654;
    }
    // 0x8080063C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800644: jal         0x800004C4
    // 0x80800648: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_808004C4_bskazjump(rdram, ctx);
        goto after_7;
    // 0x80800648: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x8080064C: b           L_80800660
    // 0x80800650: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800660;
    // 0x80800650: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800654:
    // 0x80800654: jal         0x800004C4
    // 0x80800658: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_808004C4_bskazjump(rdram, ctx);
        goto after_8;
    // 0x80800658: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x8080065C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800660:
    // 0x80800660: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800664: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800668: jr          $ra
    // 0x8080066C: nop

    return;
    // 0x8080066C: nop

;}
RECOMP_FUNC void bskazjump_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800670: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800674: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800678: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080067C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800680: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80800684: jal         0x80095738
    // 0x80800688: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095738(rdram, ctx);
        goto after_0;
    // 0x80800688: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x8080068C: beq         $v0, $zero, L_808006A4
    if (ctx->r2 == 0) {
        // 0x80800690: nop
    
            goto L_808006A4;
    }
    // 0x80800690: nop

    // 0x80800694: jal         0x8009B7C0
    // 0x80800698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B7C0(rdram, ctx);
        goto after_1;
    // 0x80800698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080069C: b           L_808006B0
    // 0x808006A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808006B0;
    // 0x808006A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808006A4:
    // 0x808006A4: jal         0x800834B0
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskazmove_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808006AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808006B0:
    // 0x808006B0: jal         0x8009BB24
    // 0x808006B4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8009BB24(rdram, ctx);
        goto after_3;
    // 0x808006B4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x808006B8: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x808006BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808006C0: beq         $v0, $at, L_808006D8
    if (ctx->r2 == ctx->r1) {
        // 0x808006C4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808006D8;
    }
    // 0x808006C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808006C8: beql        $v0, $at, L_80800760
    if (ctx->r2 == ctx->r1) {
        // 0x808006CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800760;
    }
    goto skip_0;
    // 0x808006CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808006D0: b           L_80800760
    // 0x808006D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800760;
    // 0x808006D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808006D8:
    // 0x808006D8: jal         0x8008E260
    // 0x808006DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_4;
    // 0x808006DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808006E0: beq         $v0, $zero, L_808006EC
    if (ctx->r2 == 0) {
        // 0x808006E4: addiu       $t6, $zero, 0xE0
        ctx->r14 = ADD32(0, 0XE0);
            goto L_808006EC;
    }
    // 0x808006E4: addiu       $t6, $zero, 0xE0
    ctx->r14 = ADD32(0, 0XE0);
    // 0x808006E8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_808006EC:
    // 0x808006EC: jal         0x80097E74
    // 0x808006F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097E74(rdram, ctx);
        goto after_5;
    // 0x808006F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808006F4: beq         $v0, $zero, L_8080072C
    if (ctx->r2 == 0) {
        // 0x808006F8: nop
    
            goto L_8080072C;
    }
    // 0x808006F8: nop

    // 0x808006FC: lw          $t7, 0x168($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X168);
    // 0x80800700: addiu       $t8, $zero, 0xBE
    ctx->r24 = ADD32(0, 0XBE);
    // 0x80800704: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800708: bne         $t7, $zero, L_80800718
    if (ctx->r15 != 0) {
        // 0x8080070C: nop
    
            goto L_80800718;
    }
    // 0x8080070C: nop

    // 0x80800710: b           L_8080072C
    // 0x80800714: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
        goto L_8080072C;
    // 0x80800714: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_80800718:
    // 0x80800718: jal         0x80091A58
    // 0x8080071C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A58(rdram, ctx);
        goto after_6;
    // 0x8080071C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x80800720: beq         $v0, $zero, L_8080072C
    if (ctx->r2 == 0) {
        // 0x80800724: addiu       $t9, $zero, 0xBE
        ctx->r25 = ADD32(0, 0XBE);
            goto L_8080072C;
    }
    // 0x80800724: addiu       $t9, $zero, 0xBE
    ctx->r25 = ADD32(0, 0XBE);
    // 0x80800728: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_8080072C:
    // 0x8080072C: jal         0x80097D9C
    // 0x80800730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097D9C(rdram, ctx);
        goto after_7;
    // 0x80800730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800734: beq         $v0, $zero, L_80800744
    if (ctx->r2 == 0) {
        // 0x80800738: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800744;
    }
    // 0x80800738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080073C: addiu       $t0, $zero, 0x15C
    ctx->r8 = ADD32(0, 0X15C);
    // 0x80800740: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_80800744:
    // 0x80800744: jal         0x8008DF8C
    // 0x80800748: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    func_8008DF8C(rdram, ctx);
        goto after_8;
    // 0x80800748: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    after_8:
    // 0x8080074C: beq         $v0, $zero, L_8080075C
    if (ctx->r2 == 0) {
        // 0x80800750: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080075C;
    }
    // 0x80800750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800754: jal         0x800004C4
    // 0x80800758: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_808004C4_bskazjump(rdram, ctx);
        goto after_9;
    // 0x80800758: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
L_8080075C:
    // 0x8080075C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800760:
    // 0x80800760: jal         0x80095748
    // 0x80800764: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095748(rdram, ctx);
        goto after_10;
    // 0x80800764: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_10:
    // 0x80800768: beq         $v0, $zero, L_808007AC
    if (ctx->r2 == 0) {
        // 0x8080076C: nop
    
            goto L_808007AC;
    }
    // 0x8080076C: nop

    // 0x80800770: jal         0x8008E078
    // 0x80800774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_11;
    // 0x80800774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800778: bne         $v0, $zero, L_80800794
    if (ctx->r2 != 0) {
        // 0x8080077C: nop
    
            goto L_80800794;
    }
    // 0x8080077C: nop

    // 0x80800780: jal         0x80097FB8
    // 0x80800784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097FB8(rdram, ctx);
        goto after_12;
    // 0x80800784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800788: beq         $v0, $zero, L_80800794
    if (ctx->r2 == 0) {
        // 0x8080078C: addiu       $t1, $zero, 0xC4
        ctx->r9 = ADD32(0, 0XC4);
            goto L_80800794;
    }
    // 0x8080078C: addiu       $t1, $zero, 0xC4
    ctx->r9 = ADD32(0, 0XC4);
    // 0x80800790: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_80800794:
    // 0x80800794: jal         0x8008E35C
    // 0x80800798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_13;
    // 0x80800798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x8080079C: beq         $v0, $zero, L_808007C4
    if (ctx->r2 == 0) {
        // 0x808007A0: addiu       $t2, $zero, 0x160
        ctx->r10 = ADD32(0, 0X160);
            goto L_808007C4;
    }
    // 0x808007A0: addiu       $t2, $zero, 0x160
    ctx->r10 = ADD32(0, 0X160);
    // 0x808007A4: b           L_808007C4
    // 0x808007A8: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
        goto L_808007C4;
    // 0x808007A8: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_808007AC:
    // 0x808007AC: jal         0x8008E35C
    // 0x808007B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_14;
    // 0x808007B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808007B4: beq         $v0, $zero, L_808007C4
    if (ctx->r2 == 0) {
        // 0x808007B8: nop
    
            goto L_808007C4;
    }
    // 0x808007B8: nop

    // 0x808007BC: jal         0x800A046C
    // 0x808007C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A046C(rdram, ctx);
        goto after_15;
    // 0x808007C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
L_808007C4:
    // 0x808007C4: jal         0x8008E078
    // 0x808007C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_16;
    // 0x808007C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808007CC: beql        $v0, $zero, L_80800818
    if (ctx->r2 == 0) {
        // 0x808007D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800818;
    }
    goto skip_1;
    // 0x808007D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808007D4: jal         0x8009FE58
    // 0x808007D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE58(rdram, ctx);
        goto after_17;
    // 0x808007D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x808007DC: jal         0x8009EF10
    // 0x808007E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_18;
    // 0x808007E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x808007E4: bne         $v0, $zero, L_808007F4
    if (ctx->r2 != 0) {
        // 0x808007E8: addiu       $t3, $zero, 0xDE
        ctx->r11 = ADD32(0, 0XDE);
            goto L_808007F4;
    }
    // 0x808007E8: addiu       $t3, $zero, 0xDE
    ctx->r11 = ADD32(0, 0XDE);
    // 0x808007EC: b           L_80800814
    // 0x808007F0: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
        goto L_80800814;
    // 0x808007F0: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
L_808007F4:
    // 0x808007F4: jal         0x8008E39C
    // 0x808007F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E39C(rdram, ctx);
        goto after_19;
    // 0x808007F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x808007FC: beq         $v0, $zero, L_80800810
    if (ctx->r2 == 0) {
        // 0x80800800: addiu       $t5, $zero, 0xBC
        ctx->r13 = ADD32(0, 0XBC);
            goto L_80800810;
    }
    // 0x80800800: addiu       $t5, $zero, 0xBC
    ctx->r13 = ADD32(0, 0XBC);
    // 0x80800804: addiu       $t4, $zero, 0xC7
    ctx->r12 = ADD32(0, 0XC7);
    // 0x80800808: b           L_80800814
    // 0x8080080C: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
        goto L_80800814;
    // 0x8080080C: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
L_80800810:
    // 0x80800810: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
L_80800814:
    // 0x80800814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800818:
    // 0x80800818: jal         0x8009E5C8
    // 0x8080081C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_20;
    // 0x8080081C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_20:
    // 0x80800820: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800824: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800828: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8080082C: jr          $ra
    // 0x80800830: nop

    return;
    // 0x80800830: nop

;}
RECOMP_FUNC void bskazjump_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800834: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800838: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(120, 0XC50) << 16);
    // 0x8080083C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800840: jr          $ra
    // 0x80800844: lw          $v0, 0xC50($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(120, 0XC50));
    return;
    // 0x80800844: lw          $v0, 0xC50($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(120, 0XC50));
;}
RECOMP_FUNC void bskazjump_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800848: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080084C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800850: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800854: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800858: jal         0x8008CABC
    // 0x8080085C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080085C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800860: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800864: jal         0x800832E0
    // 0x80800868: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800868: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x8080086C: jal         0x8008AF24
    // 0x80800870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x80800870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800878: jal         0x8008AED4
    // 0x8080087C: addiu       $a1, $zero, 0xA9
    ctx->r5 = ADD32(0, 0XA9);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x8080087C: addiu       $a1, $zero, 0xA9
    ctx->r5 = ADD32(0, 0XA9);
    after_3:
    // 0x80800880: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800884: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800888: jal         0x8008B1C8
    // 0x8080088C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1C8(rdram, ctx);
        goto after_4;
    // 0x8080088C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800890: lui         $a1, 0x3FF3
    ctx->r5 = S32(0X3FF3 << 16);
    // 0x80800894: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80800898: jal         0x8008B1BC
    // 0x8080089C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_5;
    // 0x8080089C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808008A0: lui         $a1, 0x3F2A
    ctx->r5 = S32(0X3F2A << 16);
    // 0x808008A4: ori         $a1, $a1, 0xACDA
    ctx->r5 = ctx->r5 | 0XACDA;
    // 0x808008A8: jal         0x8008B24C
    // 0x808008AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_6;
    // 0x808008AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808008B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008B4: jal         0x8008B134
    // 0x808008B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008B134(rdram, ctx);
        goto after_7;
    // 0x808008B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x808008BC: jal         0x8008B064
    // 0x808008C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_8;
    // 0x808008C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808008C4: jal         0x8009F308
    // 0x808008C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009F308(rdram, ctx);
        goto after_9;
    // 0x808008C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x808008CC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808008D0: jal         0x8009C914
    // 0x808008D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C914(rdram, ctx);
        goto after_10;
    // 0x808008D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x808008D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808008DC: jal         0x8008CA4C
    // 0x808008E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008CA4C(rdram, ctx);
        goto after_11;
    // 0x808008E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x808008E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808008E8: jal         0x8009C908
    // 0x808008EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009C908(rdram, ctx);
        goto after_12;
    // 0x808008EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x808008F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808008F4: jal         0x8009D2D8
    // 0x808008F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009D2D8(rdram, ctx);
        goto after_13;
    // 0x808008F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_13:
    // 0x808008FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800900: jal         0x8009B800
    // 0x80800904: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8009B800(rdram, ctx);
        goto after_14;
    // 0x80800904: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_14:
    // 0x80800908: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080090C: jal         0x8009B9B0
    // 0x80800910: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_15;
    // 0x80800910: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_15:
    // 0x80800914: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800918: jal         0x8009BA9C
    // 0x8080091C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_16;
    // 0x8080091C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x80800920: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800924: sw          $t6, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = ctx->r14;
    // 0x80800928: jal         0x8008E944
    // 0x8080092C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008E944(rdram, ctx);
        goto after_17;
    // 0x8080092C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x80800930: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800934: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800938: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8080093C: jr          $ra
    // 0x80800940: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800940: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bskazjump_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800944: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800948: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080094C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800950: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800954: jal         0x8008CABC
    // 0x80800958: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800958: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x8080095C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80800960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800964: jal         0x8009BB24
    // 0x80800968: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_1;
    // 0x80800968: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x8080096C: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x80800970: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800978: beq         $v0, $at, L_80800990
    if (ctx->r2 == ctx->r1) {
        // 0x8080097C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800990;
    }
    // 0x8080097C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800980: beq         $v0, $at, L_808009CC
    if (ctx->r2 == ctx->r1) {
        // 0x80800984: nop
    
            goto L_808009CC;
    }
    // 0x80800984: nop

    // 0x80800988: b           L_808009CC
    // 0x8080098C: nop

        goto L_808009CC;
    // 0x8080098C: nop

L_80800990:
    // 0x80800990: jal         0x8008DF8C
    // 0x80800994: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    func_8008DF8C(rdram, ctx);
        goto after_2;
    // 0x80800994: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_2:
    // 0x80800998: beq         $v0, $zero, L_808009CC
    if (ctx->r2 == 0) {
        // 0x8080099C: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_808009CC;
    }
    // 0x8080099C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808009A0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x808009A4: jal         0x8008B1D4
    // 0x808009A8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008B1D4(rdram, ctx);
        goto after_3;
    // 0x808009A8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
    // 0x808009AC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808009B0: jal         0x8008B1BC
    // 0x808009B4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_4;
    // 0x808009B4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_4:
    // 0x808009B8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808009BC: jal         0x8008B134
    // 0x808009C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x808009C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x808009C4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808009C8: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_808009CC:
    // 0x808009CC: jal         0x8008E078
    // 0x808009D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_6;
    // 0x808009D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808009D4: beq         $v0, $zero, L_808009E4
    if (ctx->r2 == 0) {
        // 0x808009D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009E4;
    }
    // 0x808009D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009DC: addiu       $t7, $zero, 0xBB
    ctx->r15 = ADD32(0, 0XBB);
    // 0x808009E0: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_808009E4:
    // 0x808009E4: jal         0x8009E5C8
    // 0x808009E8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_7;
    // 0x808009E8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_7:
    // 0x808009EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808009F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808009F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808009F8: jr          $ra
    // 0x808009FC: nop

    return;
    // 0x808009FC: nop

;}
RECOMP_FUNC void bskazjump_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800A04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A08: jal         0x8008E95C
    // 0x80800A0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008E95C(rdram, ctx);
        goto after_0;
    // 0x80800A0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800A10: jal         0x800832E8
    // 0x80800A14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bskaz_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800A14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A20: jr          $ra
    // 0x80800A24: nop

    return;
    // 0x80800A24: nop

;}
RECOMP_FUNC void bskazjump_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A28: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800A2C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(120, 0XC60) << 16);
    // 0x80800A30: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800A34: jr          $ra
    // 0x80800A38: lw          $v0, 0xC60($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(120, 0XC60));
    return;
    // 0x80800A38: lw          $v0, 0xC60($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(120, 0XC60));
;}
RECOMP_FUNC void bskazjump_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800A40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A44: jal         0x800A042C
    // 0x80800A48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A042C(rdram, ctx);
        goto after_0;
    // 0x80800A48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800A4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800A50: jal         0x80093360
    // 0x80800A54: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80093360(rdram, ctx);
        goto after_1;
    // 0x80800A54: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80800A58: jal         0x8009E0DC
    // 0x80800A5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009E0DC(rdram, ctx);
        goto after_2;
    // 0x80800A5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800A60: jal         0x800832E8
    // 0x80800A64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bskaz_entrypoint_2(rdram, ctx);
        goto after_3;
    // 0x80800A64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80800A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A70: jr          $ra
    // 0x80800A74: nop

    return;
    // 0x80800A74: nop

;}
RECOMP_FUNC void bskazjump_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800A7C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800A80: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800A84: jal         0x800832E0
    // 0x80800A88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800A88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800A8C: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x80800A90: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800A94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A98: jal         0x8008CBB0
    // 0x80800A9C: addiu       $a1, $zero, 0x13C
    ctx->r5 = ADD32(0, 0X13C);
    func_8008CBB0(rdram, ctx);
        goto after_1;
    // 0x80800A9C: addiu       $a1, $zero, 0x13C
    ctx->r5 = ADD32(0, 0X13C);
    after_1:
    // 0x80800AA0: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800AA4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800AB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800AB4: jal         0x8009FFD8
    // 0x80800AB8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800AB8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x80800ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AC0: jal         0x80093360
    // 0x80800AC4: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_80093360(rdram, ctx);
        goto after_3;
    // 0x80800AC4: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_3:
    // 0x80800AC8: jal         0x8009557C
    // 0x80800ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009557C(rdram, ctx);
        goto after_4;
    // 0x80800ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800AD0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800AD4: bne         $v0, $at, L_80800B1C
    if (ctx->r2 != ctx->r1) {
        // 0x80800AD8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800B1C;
    }
    // 0x80800AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800ADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800AE4: jal         0x80085338
    // 0x80800AE8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    _batimer_set(rdram, ctx);
        goto after_5;
    // 0x80800AE8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_5:
    // 0x80800AEC: lui         $a2, 0x3ED1
    ctx->r6 = S32(0X3ED1 << 16);
    // 0x80800AF0: ori         $a2, $a2, 0xEB85
    ctx->r6 = ctx->r6 | 0XEB85;
    // 0x80800AF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AF8: jal         0x80085338
    // 0x80800AFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_set(rdram, ctx);
        goto after_6;
    // 0x80800AFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x80800B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B04: addiu       $a1, $zero, 0x4668
    ctx->r5 = ADD32(0, 0X4668);
    // 0x80800B08: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800B0C: jal         0x8009DF18
    // 0x80800B10: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DF18(rdram, ctx);
        goto after_7;
    // 0x80800B10: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_7:
    // 0x80800B14: b           L_80800B40
    // 0x80800B18: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
        goto L_80800B40;
    // 0x80800B18: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_80800B1C:
    // 0x80800B1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800B20: jal         0x80085338
    // 0x80800B24: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    _batimer_set(rdram, ctx);
        goto after_8;
    // 0x80800B24: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_8:
    // 0x80800B28: lui         $a2, 0x3C23
    ctx->r6 = S32(0X3C23 << 16);
    // 0x80800B2C: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x80800B30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B34: jal         0x80085338
    // 0x80800B38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_set(rdram, ctx);
        goto after_9;
    // 0x80800B38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x80800B3C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_80800B40:
    // 0x80800B40: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
    // 0x80800B44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800B48: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800B4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800B50: jr          $ra
    // 0x80800B54: nop

    return;
    // 0x80800B54: nop

;}
RECOMP_FUNC void bskazjump_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B58: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800B5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800B60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800B64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800B68: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80800B6C: jal         0x800852F0
    // 0x80800B70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_decrement(rdram, ctx);
        goto after_0;
    // 0x80800B70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800B74: beq         $v0, $zero, L_80800B8C
    if (ctx->r2 == 0) {
        // 0x80800B78: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800B8C;
    }
    // 0x80800B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B7C: addiu       $a1, $zero, 0x4667
    ctx->r5 = ADD32(0, 0X4667);
    // 0x80800B80: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800B84: jal         0x8009DF18
    // 0x80800B88: addiu       $a3, $zero, 0x7D00
    ctx->r7 = ADD32(0, 0X7D00);
    func_8009DF18(rdram, ctx);
        goto after_1;
    // 0x80800B88: addiu       $a3, $zero, 0x7D00
    ctx->r7 = ADD32(0, 0X7D00);
    after_1:
L_80800B8C:
    // 0x80800B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B90: jal         0x800852F0
    // 0x80800B94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_2;
    // 0x80800B94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800B98: jal         0x800834B0
    // 0x80800B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskazmove_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x80800B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BA4: jal         0x80085330
    // 0x80800BA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_isZero(rdram, ctx);
        goto after_4;
    // 0x80800BA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80800BAC: beq         $v0, $zero, L_80800BD8
    if (ctx->r2 == 0) {
        // 0x80800BB0: nop
    
            goto L_80800BD8;
    }
    // 0x80800BB0: nop

    // 0x80800BB4: jal         0x8009BFD8
    // 0x80800BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BFD8(rdram, ctx);
        goto after_5;
    // 0x80800BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800BBC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80800BC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800BC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BC8: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x80800BCC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80800BD0: jal         0x8009BF5C
    // 0x80800BD4: nop

    func_8009BF5C(rdram, ctx);
        goto after_6;
    // 0x80800BD4: nop

    after_6:
L_80800BD8:
    // 0x80800BD8: jal         0x8008E35C
    // 0x80800BDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_7;
    // 0x80800BDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800BE0: beq         $v0, $zero, L_80800BEC
    if (ctx->r2 == 0) {
        // 0x80800BE4: addiu       $t6, $zero, 0x160
        ctx->r14 = ADD32(0, 0X160);
            goto L_80800BEC;
    }
    // 0x80800BE4: addiu       $t6, $zero, 0x160
    ctx->r14 = ADD32(0, 0X160);
    // 0x80800BE8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800BEC:
    // 0x80800BEC: jal         0x8008E078
    // 0x80800BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_8;
    // 0x80800BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800BF4: beq         $v0, $zero, L_80800C04
    if (ctx->r2 == 0) {
        // 0x80800BF8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800C04;
    }
    // 0x80800BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BFC: addiu       $t7, $zero, 0x176
    ctx->r15 = ADD32(0, 0X176);
    // 0x80800C00: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80800C04:
    // 0x80800C04: jal         0x8009E5C8
    // 0x80800C08: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_9;
    // 0x80800C08: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_9:
    // 0x80800C0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800C10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800C14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800C18: jr          $ra
    // 0x80800C1C: nop

    return;
    // 0x80800C1C: nop

;}
RECOMP_FUNC void bskazjump_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C20: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800C24: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(120, 0XC70) << 16);
    // 0x80800C28: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800C2C: jr          $ra
    // 0x80800C30: lw          $v0, 0xC70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(120, 0XC70));
    return;
    // 0x80800C30: lw          $v0, 0xC70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(120, 0XC70));
    // 0x80800C34: nop

    // 0x80800C38: nop

    // 0x80800C3C: nop

;}
RECOMP_FUNC void func_80800000_bskazmove(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8080000C: jal         0x80084FE0
    // 0x80800010: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    _bashoes_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800010: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800014: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800018: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8080001C: beq         $v0, $at, L_80800040
    if (ctx->r2 == ctx->r1) {
        // 0x80800020: lw          $a2, 0x20($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X20);
            goto L_80800040;
    }
    // 0x80800020: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80800024: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800028: beq         $v0, $at, L_8080005C
    if (ctx->r2 == ctx->r1) {
        // 0x8080002C: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8080005C;
    }
    // 0x8080002C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80800030: beql        $v0, $at, L_8080007C
    if (ctx->r2 == ctx->r1) {
        // 0x80800034: lui         $at, 0x437A
        ctx->r1 = S32(0X437A << 16);
            goto L_8080007C;
    }
    goto skip_0;
    // 0x80800034: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    skip_0:
    // 0x80800038: b           L_80800094
    // 0x8080003C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800094;
    // 0x8080003C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800040:
    // 0x80800040: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80800044: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800048: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x8080004C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800050: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80800054: b           L_80800090
    // 0x80800058: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
        goto L_80800090;
    // 0x80800058: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
L_8080005C:
    // 0x8080005C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80800060: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800064: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80800068: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8080006C: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
    // 0x80800070: b           L_80800090
    // 0x80800074: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
        goto L_80800090;
    // 0x80800074: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x80800078: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
L_8080007C:
    // 0x8080007C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800080: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80800084: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80800088: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
    // 0x8080008C: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
L_80800090:
    // 0x80800090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800094:
    // 0x80800094: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800098: jr          $ra
    // 0x8080009C: nop

    return;
    // 0x8080009C: nop

;}
RECOMP_FUNC void bskazmove_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808000A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000A8: jal         0x8009EF1C
    // 0x808000AC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x808000AC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x808000B0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x808000B4: jal         0x8009EF10
    // 0x808000B8: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x808000B8: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x808000BC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x808000C0: jal         0x8008E39C
    // 0x808000C4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_8008E39C(rdram, ctx);
        goto after_2;
    // 0x808000C4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x808000C8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x808000CC: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x808000D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808000D4: beql        $v1, $zero, L_808000F8
    if (ctx->r3 == 0) {
        // 0x808000D8: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_808000F8;
    }
    goto skip_0;
    // 0x808000D8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_0:
    // 0x808000DC: beq         $v1, $at, L_80800108
    if (ctx->r3 == ctx->r1) {
        // 0x808000E0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800108;
    }
    // 0x808000E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808000E4: beq         $v1, $at, L_80800154
    if (ctx->r3 == ctx->r1) {
        // 0x808000E8: nop
    
            goto L_80800154;
    }
    // 0x808000E8: nop

    // 0x808000EC: b           L_808001A0
    // 0x808000F0: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
        goto L_808001A0;
    // 0x808000F0: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x808000F4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_808000F8:
    // 0x808000F8: nop

    // 0x808000FC: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x80800100: b           L_8080019C
    // 0x80800104: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
        goto L_8080019C;
    // 0x80800104: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
L_80800108:
    // 0x80800108: beq         $v0, $zero, L_8080013C
    if (ctx->r2 == 0) {
        // 0x8080010C: lui         $at, 0x42A0
        ctx->r1 = S32(0X42A0 << 16);
            goto L_8080013C;
    }
    // 0x8080010C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80800110: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80800114: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80800118: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x8080011C: jal         0x80000000
    // 0x80800120: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    func_80800000_bskazmove(rdram, ctx);
        goto after_3;
    // 0x80800120: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    after_3:
    // 0x80800124: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800128: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8080012C: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80800130: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80800134: b           L_808001A0
    // 0x80800138: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
        goto L_808001A0;
    // 0x80800138: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
L_8080013C:
    // 0x8080013C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800140: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80800144: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800148: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x8080014C: b           L_8080019C
    // 0x80800150: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
        goto L_8080019C;
    // 0x80800150: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
L_80800154:
    // 0x80800154: beq         $v0, $zero, L_80800188
    if (ctx->r2 == 0) {
        // 0x80800158: lui         $at, 0x437A
        ctx->r1 = S32(0X437A << 16);
            goto L_80800188;
    }
    // 0x80800158: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x8080015C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80800160: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80800164: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80800168: jal         0x80000000
    // 0x8080016C: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    func_80800000_bskazmove(rdram, ctx);
        goto after_4;
    // 0x8080016C: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    after_4:
    // 0x80800170: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800174: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800178: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8080017C: mul.s       $f8, $f12, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80800180: b           L_8080019C
    // 0x80800184: add.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f0.fl;
        goto L_8080019C;
    // 0x80800184: add.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f0.fl;
L_80800188:
    // 0x80800188: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8080018C: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80800190: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800194: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80800198: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
L_8080019C:
    // 0x8080019C: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
L_808001A0:
    // 0x808001A0: jal         0x800F1214
    // 0x808001A4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_800F1214(rdram, ctx);
        goto after_5;
    // 0x808001A4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x808001A8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808001AC: jal         0x8009B9B0
    // 0x808001B0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_8009B9B0(rdram, ctx);
        goto after_6;
    // 0x808001B0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_6:
    // 0x808001B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808001BC: jr          $ra
    // 0x808001C0: nop

    return;
    // 0x808001C0: nop

;}
RECOMP_FUNC void func_808001C4_bskazmove(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001D4: jal         0x8008E39C
    // 0x808001D8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8008E39C(rdram, ctx);
        goto after_0;
    // 0x808001D8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x808001DC: beq         $v0, $zero, L_808001EC
    if (ctx->r2 == 0) {
        // 0x808001E0: nop
    
            goto L_808001EC;
    }
    // 0x808001E0: nop

    // 0x808001E4: b           L_80800248
    // 0x808001E8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
        goto L_80800248;
    // 0x808001E8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_808001EC:
    // 0x808001EC: jal         0x8009BB00
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_1;
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808001F4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x808001F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808001FC: nop

    // 0x80800200: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800204: nop

    // 0x80800208: bc1f        L_80800228
    if (!c1cs) {
        // 0x8080020C: nop
    
            goto L_80800228;
    }
    // 0x8080020C: nop

    // 0x80800210: jal         0x80097FB8
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097FB8(rdram, ctx);
        goto after_2;
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800218: beq         $v0, $zero, L_80800244
    if (ctx->r2 == 0) {
        // 0x8080021C: addiu       $t6, $zero, 0xC4
        ctx->r14 = ADD32(0, 0XC4);
            goto L_80800244;
    }
    // 0x8080021C: addiu       $t6, $zero, 0xC4
    ctx->r14 = ADD32(0, 0XC4);
    // 0x80800220: b           L_80800244
    // 0x80800224: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
        goto L_80800244;
    // 0x80800224: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800228:
    // 0x80800228: jal         0x80097FB8
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097FB8(rdram, ctx);
        goto after_3;
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800230: beql        $v0, $zero, L_80800248
    if (ctx->r2 == 0) {
        // 0x80800234: lw          $v0, 0x24($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X24);
            goto L_80800248;
    }
    goto skip_0;
    // 0x80800234: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80800238: jal         0x800832F8
    // 0x8080023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskaz_entrypoint_4(rdram, ctx);
        goto after_4;
    // 0x8080023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800240: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_80800244:
    // 0x80800244: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_80800248:
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
RECOMP_FUNC void func_8080025C_bskazmove(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080025C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800264: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800268: jal         0x80091A58
    // 0x8080026C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x8080026C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x80800270: beq         $v0, $zero, L_80800280
    if (ctx->r2 == 0) {
        // 0x80800274: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800280;
    }
    // 0x80800274: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800278: jal         0x80085008
    // 0x8080027C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bashoes_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x8080027C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
L_80800280:
    // 0x80800280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800284: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800288: jr          $ra
    // 0x8080028C: nop

    return;
    // 0x8080028C: nop

;}
RECOMP_FUNC void bskazmove_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800290: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800294: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800298: jal         0x800832E8
    // 0x8080029C: nop

    _bskaz_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x8080029C: nop

    after_0:
    // 0x808002A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002A8: jr          $ra
    // 0x808002AC: nop

    return;
    // 0x808002AC: nop

;}
RECOMP_FUNC void bskazmove_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808002B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808002B8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x808002BC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808002C0: jal         0x8008CABC
    // 0x808002C4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808002C4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x808002C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808002CC: jal         0x800832E0
    // 0x808002D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x808002D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x808002D4: jal         0x8009E710
    // 0x808002D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009E710(rdram, ctx);
        goto after_2;
    // 0x808002D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x808002DC: addiu       $at, $zero, 0xC7
    ctx->r1 = ADD32(0, 0XC7);
    // 0x808002E0: bnel        $v0, $at, L_808002FC
    if (ctx->r2 != ctx->r1) {
        // 0x808002E4: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_808002FC;
    }
    goto skip_0;
    // 0x808002E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_0:
    // 0x808002E8: jal         0x8008CAC8
    // 0x808002EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_3;
    // 0x808002EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x808002F0: b           L_80800304
    // 0x808002F4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
        goto L_80800304;
    // 0x808002F4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x808002F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_808002FC:
    // 0x808002FC: nop

    // 0x80800300: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
L_80800304:
    // 0x80800304: jal         0x8008AF24
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_4;
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080030C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800310: jal         0x8008AED4
    // 0x80800314: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    func_8008AED4(rdram, ctx);
        goto after_5;
    // 0x80800314: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    after_5:
    // 0x80800318: lui         $a1, 0x3EDC
    ctx->r5 = S32(0X3EDC << 16);
    // 0x8080031C: ori         $a1, $a1, 0x28F6
    ctx->r5 = ctx->r5 | 0X28F6;
    // 0x80800320: jal         0x8008B1BC
    // 0x80800324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_6;
    // 0x80800324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080032C: jal         0x8008B24C
    // 0x80800330: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8008B24C(rdram, ctx);
        goto after_7;
    // 0x80800330: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_7:
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800338: jal         0x8008B134
    // 0x8080033C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x8080033C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x80800340: jal         0x8008B064
    // 0x80800344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_9;
    // 0x80800344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800348: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8080034C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800350: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800354: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800358: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080035C: jal         0x8009FFD8
    // 0x80800360: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_10;
    // 0x80800360: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x80800364: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800368: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x8080036C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800370: jal         0x8008C9BC
    // 0x80800374: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_11;
    // 0x80800374: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_11:
    // 0x80800378: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(121, 0XC40) << 16);
    // 0x8080037C: lwc1        $f6, 0xC40($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(121, 0XC40));
    // 0x80800380: lui         $a3, 0x3FA6
    ctx->r7 = S32(0X3FA6 << 16);
    // 0x80800384: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80800388: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080038C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80800390: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    // 0x80800394: jal         0x8008C9F0
    // 0x80800398: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_12;
    // 0x80800398: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x8080039C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808003A0: jal         0x8008CA30
    // 0x808003A4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CA30(rdram, ctx);
        goto after_13;
    // 0x808003A4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_13:
    // 0x808003A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808003AC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x808003B0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808003B4: jr          $ra
    // 0x808003B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x808003B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void bskazmove_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808003C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808003C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808003C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808003CC: jal         0x8009EF04
    // 0x808003D0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8009EF04(rdram, ctx);
        goto after_0;
    // 0x808003D0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808003D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808003D8: nop

    // 0x808003DC: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x808003E0: nop

    // 0x808003E4: bc1fl       L_80800404
    if (!c1cs) {
        // 0x808003E8: lui         $a1, 0x3EF0
        ctx->r5 = S32(0X3EF0 << 16);
            goto L_80800404;
    }
    goto skip_0;
    // 0x808003E8: lui         $a1, 0x3EF0
    ctx->r5 = S32(0X3EF0 << 16);
    skip_0:
    // 0x808003EC: jal         0x8009C984
    // 0x808003F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_1;
    // 0x808003F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808003F4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808003F8: jal         0x8009C914
    // 0x808003FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_2;
    // 0x808003FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800400: lui         $a1, 0x3EF0
    ctx->r5 = S32(0X3EF0 << 16);
L_80800404:
    // 0x80800404: ori         $a1, $a1, 0xA3D7
    ctx->r5 = ctx->r5 | 0XA3D7;
    // 0x80800408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080040C: jal         0x800A2CE8
    // 0x80800410: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_3;
    // 0x80800410: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x80800414: lui         $a1, 0x3F78
    ctx->r5 = S32(0X3F78 << 16);
    // 0x80800418: ori         $a1, $a1, 0x51EC
    ctx->r5 = ctx->r5 | 0X51EC;
    // 0x8080041C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800420: jal         0x800A2CE8
    // 0x80800424: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_4;
    // 0x80800424: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_4:
    // 0x80800428: jal         0x800000A0
    // 0x8080042C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bskazmove_entrypoint_0(rdram, ctx);
        goto after_5;
    // 0x8080042C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800430: jal         0x8009EF10
    // 0x80800434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_6;
    // 0x80800434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800438: beq         $v0, $zero, L_80800450
    if (ctx->r2 == 0) {
        // 0x8080043C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800450;
    }
    // 0x8080043C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800440: beq         $v0, $at, L_8080046C
    if (ctx->r2 == ctx->r1) {
        // 0x80800444: addiu       $t7, $zero, 0xC7
        ctx->r15 = ADD32(0, 0XC7);
            goto L_8080046C;
    }
    // 0x80800444: addiu       $t7, $zero, 0xC7
    ctx->r15 = ADD32(0, 0XC7);
    // 0x80800448: b           L_80800470
    // 0x8080044C: nop

        goto L_80800470;
    // 0x8080044C: nop

L_80800450:
    // 0x80800450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800454: jal         0x8009BCD4
    // 0x80800458: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_7;
    // 0x80800458: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_7:
    // 0x8080045C: beq         $v0, $zero, L_80800470
    if (ctx->r2 == 0) {
        // 0x80800460: addiu       $t6, $zero, 0xBB
        ctx->r14 = ADD32(0, 0XBB);
            goto L_80800470;
    }
    // 0x80800460: addiu       $t6, $zero, 0xBB
    ctx->r14 = ADD32(0, 0XBB);
    // 0x80800464: b           L_80800470
    // 0x80800468: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
        goto L_80800470;
    // 0x80800468: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_8080046C:
    // 0x8080046C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80800470:
    // 0x80800470: jal         0x8008E39C
    // 0x80800474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E39C(rdram, ctx);
        goto after_8;
    // 0x80800474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800478: beq         $v0, $zero, L_80800484
    if (ctx->r2 == 0) {
        // 0x8080047C: addiu       $t8, $zero, 0xC7
        ctx->r24 = ADD32(0, 0XC7);
            goto L_80800484;
    }
    // 0x8080047C: addiu       $t8, $zero, 0xC7
    ctx->r24 = ADD32(0, 0XC7);
    // 0x80800480: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80800484:
    // 0x80800484: jal         0x8008DD04
    // 0x80800488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_9;
    // 0x80800488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080048C: beq         $v0, $zero, L_8080049C
    if (ctx->r2 == 0) {
        // 0x80800490: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080049C;
    }
    // 0x80800490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800494: addiu       $t9, $zero, 0xDF
    ctx->r25 = ADD32(0, 0XDF);
    // 0x80800498: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_8080049C:
    // 0x8080049C: jal         0x800919F4
    // 0x808004A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_10;
    // 0x808004A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x808004A4: beq         $v0, $zero, L_808004C0
    if (ctx->r2 == 0) {
        // 0x808004A8: nop
    
            goto L_808004C0;
    }
    // 0x808004A8: nop

    // 0x808004AC: jal         0x8008E39C
    // 0x808004B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E39C(rdram, ctx);
        goto after_11;
    // 0x808004B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808004B4: bne         $v0, $zero, L_808004C0
    if (ctx->r2 != 0) {
        // 0x808004B8: addiu       $t0, $zero, 0xDD
        ctx->r8 = ADD32(0, 0XDD);
            goto L_808004C0;
    }
    // 0x808004B8: addiu       $t0, $zero, 0xDD
    ctx->r8 = ADD32(0, 0XDD);
    // 0x808004BC: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_808004C0:
    // 0x808004C0: jal         0x8008E39C
    // 0x808004C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E39C(rdram, ctx);
        goto after_12;
    // 0x808004C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808004C8: beq         $v0, $zero, L_808004E0
    if (ctx->r2 == 0) {
        // 0x808004CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004E0;
    }
    // 0x808004CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004D0: jal         0x8000025C
    // 0x808004D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080025C_bskazmove(rdram, ctx);
        goto after_13;
    // 0x808004D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808004D8: b           L_808004F0
    // 0x808004DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808004F0;
    // 0x808004DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808004E0:
    // 0x808004E0: jal         0x800001C4
    // 0x808004E4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_808001C4_bskazmove(rdram, ctx);
        goto after_14;
    // 0x808004E4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_14:
    // 0x808004E8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x808004EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808004F0:
    // 0x808004F0: jal         0x80091A58
    // 0x808004F4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_15;
    // 0x808004F4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_15:
    // 0x808004F8: beq         $v0, $zero, L_8080054C
    if (ctx->r2 == 0) {
        // 0x808004FC: nop
    
            goto L_8080054C;
    }
    // 0x808004FC: nop

    // 0x80800500: jal         0x800832F0
    // 0x80800504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskaz_entrypoint_3(rdram, ctx);
        goto after_16;
    // 0x80800504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800508: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8080050C: jal         0x8009BB00
    // 0x80800510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_17;
    // 0x80800510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800514: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80800518: nop

    // 0x8080051C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80800520: nop

    // 0x80800524: bc1f        L_8080054C
    if (!c1cs) {
        // 0x80800528: nop
    
            goto L_8080054C;
    }
    // 0x80800528: nop

    // 0x8080052C: jal         0x8008D790
    // 0x80800530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D790(rdram, ctx);
        goto after_18;
    // 0x80800530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800534: beq         $v0, $zero, L_8080054C
    if (ctx->r2 == 0) {
        // 0x80800538: nop
    
            goto L_8080054C;
    }
    // 0x80800538: nop

    // 0x8080053C: jal         0x80084978
    // 0x80800540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baduo_entrypoint_12(rdram, ctx);
        goto after_19;
    // 0x80800540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800544: b           L_80800598
    // 0x80800548: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800598;
    // 0x80800548: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080054C:
    // 0x8080054C: jal         0x8008DF18
    // 0x80800550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DF18(rdram, ctx);
        goto after_20;
    // 0x80800550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80800554: beq         $v0, $zero, L_80800568
    if (ctx->r2 == 0) {
        // 0x80800558: nop
    
            goto L_80800568;
    }
    // 0x80800558: nop

    // 0x8080055C: jal         0x800848B0
    // 0x80800560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_21;
    // 0x80800560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800564: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_80800568:
    // 0x80800568: jal         0x8008E35C
    // 0x8080056C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_22;
    // 0x8080056C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80800570: beq         $v0, $zero, L_80800580
    if (ctx->r2 == 0) {
        // 0x80800574: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800580;
    }
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800578: addiu       $t1, $zero, 0x15D
    ctx->r9 = ADD32(0, 0X15D);
    // 0x8080057C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_80800580:
    // 0x80800580: jal         0x800A02DC
    // 0x80800584: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800A02DC(rdram, ctx);
        goto after_23;
    // 0x80800584: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_23:
    // 0x80800588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080058C: jal         0x8009E5C8
    // 0x80800590: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_24;
    // 0x80800590: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_24:
    // 0x80800594: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800598:
    // 0x80800598: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080059C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808005A0: jr          $ra
    // 0x808005A4: nop

    return;
    // 0x808005A4: nop

;}
RECOMP_FUNC void bskazmove_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005A8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808005AC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(121, 0XC70) << 16);
    // 0x808005B0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808005B4: jr          $ra
    // 0x808005B8: lw          $v0, 0xC70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(121, 0XC70));
    return;
    // 0x808005B8: lw          $v0, 0xC70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(121, 0XC70));
;}
RECOMP_FUNC void bskazmove_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808005C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808005C4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x808005C8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808005CC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x808005D0: jal         0x8008CABC
    // 0x808005D4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808005D4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808005D8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808005DC: jal         0x8008CAC8
    // 0x808005E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_1;
    // 0x808005E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x808005E4: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x808005E8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808005EC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x808005F0: beq         $v0, $at, L_80800618
    if (ctx->r2 == ctx->r1) {
        // 0x808005F4: addiu       $t6, $zero, 0xA6
        ctx->r14 = ADD32(0, 0XA6);
            goto L_80800618;
    }
    // 0x808005F4: addiu       $t6, $zero, 0xA6
    ctx->r14 = ADD32(0, 0XA6);
    // 0x808005F8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808005FC: beq         $v0, $at, L_80800648
    if (ctx->r2 == ctx->r1) {
        // 0x80800600: addiu       $t7, $zero, 0x24F
        ctx->r15 = ADD32(0, 0X24F);
            goto L_80800648;
    }
    // 0x80800600: addiu       $t7, $zero, 0x24F
    ctx->r15 = ADD32(0, 0X24F);
    // 0x80800604: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80800608: beq         $v0, $at, L_80800678
    if (ctx->r2 == ctx->r1) {
        // 0x8080060C: addiu       $t8, $zero, 0x24D
        ctx->r24 = ADD32(0, 0X24D);
            goto L_80800678;
    }
    // 0x8080060C: addiu       $t8, $zero, 0x24D
    ctx->r24 = ADD32(0, 0X24D);
    // 0x80800610: b           L_808006A8
    // 0x80800614: addiu       $t9, $zero, 0xA6
    ctx->r25 = ADD32(0, 0XA6);
        goto L_808006A8;
    // 0x80800614: addiu       $t9, $zero, 0xA6
    ctx->r25 = ADD32(0, 0XA6);
L_80800618:
    // 0x80800618: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(121, 0XC44) << 16);
    // 0x8080061C: lwc1        $f4, 0xC44($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(121, 0XC44));
    // 0x80800620: lui         $a3, 0x3F0A
    ctx->r7 = S32(0X3F0A << 16);
    // 0x80800624: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80800628: ori         $a3, $a3, 0x3D71
    ctx->r7 = ctx->r7 | 0X3D71;
    // 0x8080062C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800630: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    // 0x80800634: lui         $a2, 0x4496
    ctx->r6 = S32(0X4496 << 16);
    // 0x80800638: jal         0x8008C9F0
    // 0x8080063C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_2;
    // 0x8080063C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80800640: b           L_808006D0
    // 0x80800644: nop

        goto L_808006D0;
    // 0x80800644: nop

L_80800648:
    // 0x80800648: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(121, 0XC48) << 16);
    // 0x8080064C: lwc1        $f6, 0xC48($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(121, 0XC48));
    // 0x80800650: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x80800654: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x80800658: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x8080065C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800660: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    // 0x80800664: lui         $a2, 0x4448
    ctx->r6 = S32(0X4448 << 16);
    // 0x80800668: jal         0x8008C9F0
    // 0x8080066C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_3;
    // 0x8080066C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80800670: b           L_808006D0
    // 0x80800674: nop

        goto L_808006D0;
    // 0x80800674: nop

L_80800678:
    // 0x80800678: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(121, 0XC4C) << 16);
    // 0x8080067C: lwc1        $f8, 0xC4C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(121, 0XC4C));
    // 0x80800680: lui         $a3, 0x3F8C
    ctx->r7 = S32(0X3F8C << 16);
    // 0x80800684: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x80800688: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x8080068C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800690: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    // 0x80800694: lui         $a2, 0x4448
    ctx->r6 = S32(0X4448 << 16);
    // 0x80800698: jal         0x8008C9F0
    // 0x8080069C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_4;
    // 0x8080069C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x808006A0: b           L_808006D0
    // 0x808006A4: nop

        goto L_808006D0;
    // 0x808006A4: nop

L_808006A8:
    // 0x808006A8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(121, 0XC50) << 16);
    // 0x808006AC: lwc1        $f10, 0xC50($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(121, 0XC50));
    // 0x808006B0: lui         $a3, 0x3F0A
    ctx->r7 = S32(0X3F0A << 16);
    // 0x808006B4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x808006B8: ori         $a3, $a3, 0x3D71
    ctx->r7 = ctx->r7 | 0X3D71;
    // 0x808006BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808006C0: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    // 0x808006C4: lui         $a2, 0x4448
    ctx->r6 = S32(0X4448 << 16);
    // 0x808006C8: jal         0x8008C9F0
    // 0x808006CC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_5;
    // 0x808006CC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_5:
L_808006D0:
    // 0x808006D0: jal         0x8008AF24
    // 0x808006D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_6;
    // 0x808006D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808006D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006DC: jal         0x8008AED4
    // 0x808006E0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8008AED4(rdram, ctx);
        goto after_7;
    // 0x808006E0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_7:
    // 0x808006E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006E8: jal         0x8008B1BC
    // 0x808006EC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_8;
    // 0x808006EC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_8:
    // 0x808006F0: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x808006F4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808006F8: jal         0x8008B1C8
    // 0x808006FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1C8(rdram, ctx);
        goto after_9;
    // 0x808006FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800704: jal         0x8008B24C
    // 0x80800708: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8008B24C(rdram, ctx);
        goto after_10;
    // 0x80800708: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_10:
    // 0x8080070C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800710: jal         0x8008B134
    // 0x80800714: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_11;
    // 0x80800714: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
    // 0x80800718: jal         0x8008B064
    // 0x8080071C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_12;
    // 0x8080071C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800720: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800724: jal         0x8008CA30
    // 0x80800728: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CA30(rdram, ctx);
        goto after_13;
    // 0x80800728: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_13:
    // 0x8080072C: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800730: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800734: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800738: jal         0x8008C9BC
    // 0x8080073C: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_14;
    // 0x8080073C: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_14:
    // 0x80800740: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800744: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800748: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8080074C: jr          $ra
    // 0x80800750: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80800750: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80800754_bskazmove(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800754: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080075C: jal         0x80084FE0
    // 0x80800760: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bashoes_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800760: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800764: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800768: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8080076C: lw          $t6, 0x15C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X15C);
    // 0x80800770: beql        $v0, $t6, L_80800784
    if (ctx->r2 == ctx->r14) {
        // 0x80800774: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800784;
    }
    goto skip_0;
    // 0x80800774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800778: jal         0x800005BC
    // 0x8080077C: sw          $v0, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = ctx->r2;
    bskazmove_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x8080077C: sw          $v0, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = ctx->r2;
    after_1:
    // 0x80800780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800784:
    // 0x80800784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800788: jr          $ra
    // 0x8080078C: nop

    return;
    // 0x8080078C: nop

;}
RECOMP_FUNC void bskazmove_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800790: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800794: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800798: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080079C: jal         0x8008CABC
    // 0x808007A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808007A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808007A4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(121, 0XC54) << 16);
    // 0x808007A8: lwc1        $f4, 0xC54($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(121, 0XC54));
    // 0x808007AC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(121, 0XC58) << 16);
    // 0x808007B0: lwc1        $f6, 0xC58($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(121, 0XC58));
    // 0x808007B4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808007B8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x808007BC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x808007C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007C4: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x808007C8: jal         0x80084FE0
    // 0x808007CC: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    _bashoes_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x808007CC: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x808007D0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808007D4: beq         $v0, $at, L_808007F4
    if (ctx->r2 == ctx->r1) {
        // 0x808007D8: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_808007F4;
    }
    // 0x808007D8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808007DC: beq         $v0, $at, L_80800804
    if (ctx->r2 == ctx->r1) {
        // 0x808007E0: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_80800804;
    }
    // 0x808007E0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x808007E4: beq         $v0, $at, L_8080080C
    if (ctx->r2 == ctx->r1) {
        // 0x808007E8: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_8080080C;
    }
    // 0x808007E8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x808007EC: b           L_80800868
    // 0x808007F0: lui         $a1, 0x3E58
    ctx->r5 = S32(0X3E58 << 16);
        goto L_80800868;
    // 0x808007F0: lui         $a1, 0x3E58
    ctx->r5 = S32(0X3E58 << 16);
L_808007F4:
    // 0x808007F4: jal         0x80085078
    // 0x808007F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_20(rdram, ctx);
        goto after_2;
    // 0x808007F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808007FC: b           L_80800898
    // 0x80800800: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
        goto L_80800898;
    // 0x80800800: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
L_80800804:
    // 0x80800804: b           L_80800894
    // 0x80800808: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
        goto L_80800894;
    // 0x80800808: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_8080080C:
    // 0x8080080C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(121, 0XC5C) << 16);
    // 0x80800810: lwc1        $f0, 0xC5C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(121, 0XC5C));
    // 0x80800814: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(121, 0XC60) << 16);
    // 0x80800818: lwc1        $f8, 0xC60($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(121, 0XC60));
    // 0x8080081C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800820: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80800824: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80800828: jal         0x8008B348
    // 0x8080082C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    func_8008B348(rdram, ctx);
        goto after_3;
    // 0x8080082C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80800830: beql        $v0, $zero, L_80800844
    if (ctx->r2 == 0) {
        // 0x80800834: lui         $a1, 0x3DCC
        ctx->r5 = S32(0X3DCC << 16);
            goto L_80800844;
    }
    goto skip_0;
    // 0x80800834: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    skip_0:
    // 0x80800838: jal         0x80085070
    // 0x8080083C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_19(rdram, ctx);
        goto after_4;
    // 0x8080083C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800840: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
L_80800844:
    // 0x80800844: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800848: jal         0x8008B348
    // 0x8080084C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008B348(rdram, ctx);
        goto after_5;
    // 0x8080084C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x80800850: beql        $v0, $zero, L_80800898
    if (ctx->r2 == 0) {
        // 0x80800854: lw          $t7, 0x20($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X20);
            goto L_80800898;
    }
    goto skip_1;
    // 0x80800854: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    skip_1:
    // 0x80800858: jal         0x80085068
    // 0x8080085C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_18(rdram, ctx);
        goto after_6;
    // 0x8080085C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800860: b           L_80800898
    // 0x80800864: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
        goto L_80800898;
    // 0x80800864: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
L_80800868:
    // 0x80800868: jal         0x8008B348
    // 0x8080086C: ori         $a1, $a1, 0x9375
    ctx->r5 = ctx->r5 | 0X9375;
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x8080086C: ori         $a1, $a1, 0x9375
    ctx->r5 = ctx->r5 | 0X9375;
    after_7:
    // 0x80800870: bne         $v0, $zero, L_8080088C
    if (ctx->r2 != 0) {
        // 0x80800874: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_8080088C;
    }
    // 0x80800874: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80800878: lui         $a1, 0x3F36
    ctx->r5 = S32(0X3F36 << 16);
    // 0x8080087C: jal         0x8008B348
    // 0x80800880: ori         $a1, $a1, 0x24DD
    ctx->r5 = ctx->r5 | 0X24DD;
    func_8008B348(rdram, ctx);
        goto after_8;
    // 0x80800880: ori         $a1, $a1, 0x24DD
    ctx->r5 = ctx->r5 | 0X24DD;
    after_8:
    // 0x80800884: beql        $v0, $zero, L_80800898
    if (ctx->r2 == 0) {
        // 0x80800888: lw          $t7, 0x20($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X20);
            goto L_80800898;
    }
    goto skip_2;
    // 0x80800888: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    skip_2:
L_8080088C:
    // 0x8080088C: jal         0x800849D0
    // 0x80800890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_1(rdram, ctx);
        goto after_9;
    // 0x80800890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_80800894:
    // 0x80800894: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
L_80800898:
    // 0x80800898: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8080089C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008A0: beq         $t7, $zero, L_808008CC
    if (ctx->r15 == 0) {
        // 0x808008A4: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_808008CC;
    }
    // 0x808008A4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x808008A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008AC: jal         0x800A2CE8
    // 0x808008B0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800A2CE8(rdram, ctx);
        goto after_10;
    // 0x808008B0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_10:
    // 0x808008B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008B8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x808008BC: jal         0x800A2CE8
    // 0x808008C0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_11;
    // 0x808008C0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_11:
    // 0x808008C4: b           L_808008E8
    // 0x808008C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808008E8;
    // 0x808008C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808008CC:
    // 0x808008CC: jal         0x800A2D2C
    // 0x808008D0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2D2C(rdram, ctx);
        goto after_12;
    // 0x808008D0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_12:
    // 0x808008D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008D8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x808008DC: jal         0x800A2D2C
    // 0x808008E0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2D2C(rdram, ctx);
        goto after_13;
    // 0x808008E0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_13:
    // 0x808008E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808008E8:
    // 0x808008E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808008EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808008F0: jr          $ra
    // 0x808008F4: nop

    return;
    // 0x808008F4: nop

;}
RECOMP_FUNC void bskazmove_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808008FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800900: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800904: jal         0x8009BF5C
    // 0x80800908: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_0;
    // 0x80800908: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x8080090C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800910: jal         0x8009C4CC
    // 0x80800914: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_1;
    // 0x80800914: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80800918: jal         0x800832E8
    // 0x8080091C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bskaz_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x8080091C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800928: jr          $ra
    // 0x8080092C: nop

    return;
    // 0x8080092C: nop

;}
RECOMP_FUNC void bskazmove_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800930: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800934: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800938: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080093C: jal         0x800832E0
    // 0x80800940: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800940: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800944: jal         0x8009E710
    // 0x80800948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E710(rdram, ctx);
        goto after_1;
    // 0x80800948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080094C: addiu       $at, $zero, 0xBC
    ctx->r1 = ADD32(0, 0XBC);
    // 0x80800950: bnel        $v0, $at, L_80800998
    if (ctx->r2 != ctx->r1) {
        // 0x80800954: sw          $zero, 0x15C($s0)
        MEM_W(0X15C, ctx->r16) = 0;
            goto L_80800998;
    }
    goto skip_0;
    // 0x80800954: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    skip_0:
    // 0x80800958: jal         0x8009BB5C
    // 0x8080095C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_2;
    // 0x8080095C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800960: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80800964: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800968: nop

    // 0x8080096C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80800970: nop

    // 0x80800974: bc1fl       L_80800998
    if (!c1cs) {
        // 0x80800978: sw          $zero, 0x15C($s0)
        MEM_W(0X15C, ctx->r16) = 0;
            goto L_80800998;
    }
    goto skip_1;
    // 0x80800978: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    skip_1:
    // 0x8080097C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80800980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800984: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800988: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080098C: jal         0x800849E0
    // 0x80800990: nop

    _badust_entrypoint_3(rdram, ctx);
        goto after_3;
    // 0x80800990: nop

    after_3:
    // 0x80800994: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
L_80800998:
    // 0x80800998: jal         0x80000754
    // 0x8080099C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800754_bskazmove(rdram, ctx);
        goto after_4;
    // 0x8080099C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808009A0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808009A4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808009A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808009B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808009B4: jal         0x8009FFD8
    // 0x808009B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_5;
    // 0x808009B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x808009BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009C0: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x808009C4: jal         0x8009BFE4
    // 0x808009C8: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_6;
    // 0x808009C8: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_6:
    // 0x808009CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009D0: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x808009D4: jal         0x8009C554
    // 0x808009D8: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009C554(rdram, ctx);
        goto after_7;
    // 0x808009D8: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_7:
    // 0x808009DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808009E0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808009E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808009E8: jr          $ra
    // 0x808009EC: nop

    return;
    // 0x808009EC: nop

;}
RECOMP_FUNC void bskazmove_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808009F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808009F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808009FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800A00: jal         0x8008E39C
    // 0x80800A04: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008E39C(rdram, ctx);
        goto after_0;
    // 0x80800A04: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800A08: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800A0C: jal         0x80000754
    // 0x80800A10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800754_bskazmove(rdram, ctx);
        goto after_1;
    // 0x80800A10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800A14: jal         0x80000790
    // 0x80800A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bskazmove_entrypoint_6(rdram, ctx);
        goto after_2;
    // 0x80800A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800A24: jal         0x8009D2F0
    // 0x80800A28: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009D2F0(rdram, ctx);
        goto after_3;
    // 0x80800A28: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_3:
    // 0x80800A2C: jal         0x800000A0
    // 0x80800A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bskazmove_entrypoint_0(rdram, ctx);
        goto after_4;
    // 0x80800A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800A34: jal         0x8009EF10
    // 0x80800A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_5;
    // 0x80800A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800A3C: beq         $v0, $zero, L_80800A58
    if (ctx->r2 == 0) {
        // 0x80800A40: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A58;
    }
    // 0x80800A40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800A48: beq         $v0, $at, L_80800A70
    if (ctx->r2 == ctx->r1) {
        // 0x80800A4C: lw          $t7, 0x20($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X20);
            goto L_80800A70;
    }
    // 0x80800A4C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80800A50: b           L_80800A8C
    // 0x80800A54: nop

        goto L_80800A8C;
    // 0x80800A54: nop

L_80800A58:
    // 0x80800A58: jal         0x8009BCD4
    // 0x80800A5C: lui         $a1, 0x4190
    ctx->r5 = S32(0X4190 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_6;
    // 0x80800A5C: lui         $a1, 0x4190
    ctx->r5 = S32(0X4190 << 16);
    after_6:
    // 0x80800A60: beq         $v0, $zero, L_80800A8C
    if (ctx->r2 == 0) {
        // 0x80800A64: addiu       $t6, $zero, 0xBB
        ctx->r14 = ADD32(0, 0XBB);
            goto L_80800A8C;
    }
    // 0x80800A64: addiu       $t6, $zero, 0xBB
    ctx->r14 = ADD32(0, 0XBB);
    // 0x80800A68: b           L_80800A8C
    // 0x80800A6C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
        goto L_80800A8C;
    // 0x80800A6C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800A70:
    // 0x80800A70: bne         $t7, $zero, L_80800A8C
    if (ctx->r15 != 0) {
        // 0x80800A74: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A8C;
    }
    // 0x80800A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A78: jal         0x8009BCD4
    // 0x80800A7C: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    func_8009BCD4(rdram, ctx);
        goto after_7;
    // 0x80800A7C: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    after_7:
    // 0x80800A80: beq         $v0, $zero, L_80800A8C
    if (ctx->r2 == 0) {
        // 0x80800A84: addiu       $t8, $zero, 0xBC
        ctx->r24 = ADD32(0, 0XBC);
            goto L_80800A8C;
    }
    // 0x80800A84: addiu       $t8, $zero, 0xBC
    ctx->r24 = ADD32(0, 0XBC);
    // 0x80800A88: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80800A8C:
    // 0x80800A8C: jal         0x8008DD04
    // 0x80800A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_8;
    // 0x80800A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800A94: beq         $v0, $zero, L_80800AA4
    if (ctx->r2 == 0) {
        // 0x80800A98: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800AA4;
    }
    // 0x80800A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A9C: addiu       $t9, $zero, 0xDF
    ctx->r25 = ADD32(0, 0XDF);
    // 0x80800AA0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80800AA4:
    // 0x80800AA4: jal         0x800919F4
    // 0x80800AA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_9;
    // 0x80800AA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x80800AAC: beql        $v0, $zero, L_80800ACC
    if (ctx->r2 == 0) {
        // 0x80800AB0: lw          $t1, 0x20($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X20);
            goto L_80800ACC;
    }
    goto skip_0;
    // 0x80800AB0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x80800AB4: jal         0x8008E39C
    // 0x80800AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E39C(rdram, ctx);
        goto after_10;
    // 0x80800AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800ABC: bne         $v0, $zero, L_80800AC8
    if (ctx->r2 != 0) {
        // 0x80800AC0: addiu       $t0, $zero, 0xDD
        ctx->r8 = ADD32(0, 0XDD);
            goto L_80800AC8;
    }
    // 0x80800AC0: addiu       $t0, $zero, 0xDD
    ctx->r8 = ADD32(0, 0XDD);
    // 0x80800AC4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_80800AC8:
    // 0x80800AC8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
L_80800ACC:
    // 0x80800ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AD0: beq         $t1, $zero, L_80800AE8
    if (ctx->r9 == 0) {
        // 0x80800AD4: nop
    
            goto L_80800AE8;
    }
    // 0x80800AD4: nop

    // 0x80800AD8: jal         0x8000025C
    // 0x80800ADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080025C_bskazmove(rdram, ctx);
        goto after_11;
    // 0x80800ADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800AE0: b           L_80800AF8
    // 0x80800AE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800AF8;
    // 0x80800AE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800AE8:
    // 0x80800AE8: jal         0x800001C4
    // 0x80800AEC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_808001C4_bskazmove(rdram, ctx);
        goto after_12;
    // 0x80800AEC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_12:
    // 0x80800AF0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800AF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800AF8:
    // 0x80800AF8: jal         0x80091A58
    // 0x80800AFC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_13;
    // 0x80800AFC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_13:
    // 0x80800B00: beq         $v0, $zero, L_80800B54
    if (ctx->r2 == 0) {
        // 0x80800B04: nop
    
            goto L_80800B54;
    }
    // 0x80800B04: nop

    // 0x80800B08: jal         0x800832F0
    // 0x80800B0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskaz_entrypoint_3(rdram, ctx);
        goto after_14;
    // 0x80800B0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800B10: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800B14: jal         0x8009BB00
    // 0x80800B18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_15;
    // 0x80800B18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800B1C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800B20: nop

    // 0x80800B24: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800B28: nop

    // 0x80800B2C: bc1f        L_80800B54
    if (!c1cs) {
        // 0x80800B30: nop
    
            goto L_80800B54;
    }
    // 0x80800B30: nop

    // 0x80800B34: jal         0x8008D790
    // 0x80800B38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D790(rdram, ctx);
        goto after_16;
    // 0x80800B38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800B3C: beq         $v0, $zero, L_80800B54
    if (ctx->r2 == 0) {
        // 0x80800B40: nop
    
            goto L_80800B54;
    }
    // 0x80800B40: nop

    // 0x80800B44: jal         0x80084978
    // 0x80800B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baduo_entrypoint_12(rdram, ctx);
        goto after_17;
    // 0x80800B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800B4C: b           L_80800BA0
    // 0x80800B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800BA0;
    // 0x80800B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800B54:
    // 0x80800B54: jal         0x8008DF18
    // 0x80800B58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DF18(rdram, ctx);
        goto after_18;
    // 0x80800B58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800B5C: beq         $v0, $zero, L_80800B70
    if (ctx->r2 == 0) {
        // 0x80800B60: nop
    
            goto L_80800B70;
    }
    // 0x80800B60: nop

    // 0x80800B64: jal         0x800848B0
    // 0x80800B68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_19;
    // 0x80800B68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800B6C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_80800B70:
    // 0x80800B70: jal         0x8008E35C
    // 0x80800B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_20;
    // 0x80800B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80800B78: beq         $v0, $zero, L_80800B88
    if (ctx->r2 == 0) {
        // 0x80800B7C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800B88;
    }
    // 0x80800B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B80: addiu       $t2, $zero, 0x15D
    ctx->r10 = ADD32(0, 0X15D);
    // 0x80800B84: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_80800B88:
    // 0x80800B88: jal         0x800A02DC
    // 0x80800B8C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800A02DC(rdram, ctx);
        goto after_21;
    // 0x80800B8C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_21:
    // 0x80800B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B94: jal         0x8009E5C8
    // 0x80800B98: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_22;
    // 0x80800B98: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_22:
    // 0x80800B9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800BA0:
    // 0x80800BA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800BA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800BA8: jr          $ra
    // 0x80800BAC: nop

    return;
    // 0x80800BAC: nop

;}
RECOMP_FUNC void bskazmove_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BB0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800BB4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(121, 0XC80) << 16);
    // 0x80800BB8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800BBC: jr          $ra
    // 0x80800BC0: lw          $v0, 0xC80($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(121, 0XC80));
    return;
    // 0x80800BC0: lw          $v0, 0xC80($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(121, 0XC80));
;}
RECOMP_FUNC void bskazmove_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800BC8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800BCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BD0: bne         $a1, $at, L_80800C20
    if (ctx->r5 != ctx->r1) {
        // 0x80800BD4: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80800C20;
    }
    // 0x80800BD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800BD8: jal         0x8009EF10
    // 0x80800BDC: nop

    func_8009EF10(rdram, ctx);
        goto after_0;
    // 0x80800BDC: nop

    after_0:
    // 0x80800BE0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800BE4: bnel        $v0, $at, L_80800C24
    if (ctx->r2 != ctx->r1) {
        // 0x80800BE8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800C24;
    }
    goto skip_0;
    // 0x80800BE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x80800BEC: jal         0x8009EF1C
    // 0x80800BF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009EF1C(rdram, ctx);
        goto after_1;
    // 0x80800BF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800BF4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(121, 0XC64) << 16);
    // 0x80800BF8: lwc1        $f4, 0xC64($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(121, 0XC64));
    // 0x80800BFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800C00: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800C04: nop

    // 0x80800C08: bc1fl       L_80800C24
    if (!c1cs) {
        // 0x80800C0C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800C24;
    }
    goto skip_1;
    // 0x80800C0C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_1:
    // 0x80800C10: jal         0x800962B0
    // 0x80800C14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800962B0(rdram, ctx);
        goto after_2;
    // 0x80800C14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80800C18: b           L_80800C30
    // 0x80800C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800C30;
    // 0x80800C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800C20:
    // 0x80800C20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_80800C24:
    // 0x80800C24: jal         0x800962B0
    // 0x80800C28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800962B0(rdram, ctx);
        goto after_3;
    // 0x80800C28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800C30:
    // 0x80800C30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C34: jr          $ra
    // 0x80800C38: nop

    return;
    // 0x80800C38: nop

    // 0x80800C3C: nop

;}
RECOMP_FUNC void func_80800000_bskazow(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x800845D0
    // 0x8080000C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x8080000C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800010: jal         0x800832E8
    // 0x80800014: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bskaz_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800014: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080001C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800020: jr          $ra
    // 0x80800024: nop

    return;
    // 0x80800024: nop

;}
RECOMP_FUNC void func_80800028_bskazow(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800028: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080002C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800030: jal         0x8008CABC
    // 0x80800034: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800034: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800038: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8080003C: jal         0x800832E0
    // 0x80800040: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800040: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x80800044: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800048: jal         0x800845D8
    // 0x8080004C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x8080004C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80800050: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(122, 0X2C0) << 16);
    // 0x80800054: lwc1        $f4, 0x2C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(122, 0X2C0));
    // 0x80800058: lui         $a2, 0x3EF0
    ctx->r6 = S32(0X3EF0 << 16);
    // 0x8080005C: lui         $a3, 0x4006
    ctx->r7 = S32(0X4006 << 16);
    // 0x80800060: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80800064: ori         $a2, $a2, 0x3AFB
    ctx->r6 = ctx->r6 | 0X3AFB;
    // 0x80800068: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8080006C: addiu       $a1, $zero, 0xC9
    ctx->r5 = ADD32(0, 0XC9);
    // 0x80800070: jal         0x800845E8
    // 0x80800074: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    _babounce_entrypoint_6(rdram, ctx);
        goto after_3;
    // 0x80800074: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80800078: lui         $a1, 0x3E37
    ctx->r5 = S32(0X3E37 << 16);
    // 0x8080007C: ori         $a1, $a1, 0x8034
    ctx->r5 = ctx->r5 | 0X8034;
    // 0x80800080: jal         0x8008B10C
    // 0x80800084: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B10C(rdram, ctx);
        goto after_4;
    // 0x80800084: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x80800088: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080008C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800090: jr          $ra
    // 0x80800094: nop

    return;
    // 0x80800094: nop

;}
RECOMP_FUNC void func_80800098_bskazow(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800098: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080009C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000A4: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x808000A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000AC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x808000B0: jal         0x8008CB10
    // 0x808000B4: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x808000B4: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    after_0:
    // 0x808000B8: beq         $v0, $zero, L_808000C8
    if (ctx->r2 == 0) {
        // 0x808000BC: nop
    
            goto L_808000C8;
    }
    // 0x808000BC: nop

    // 0x808000C0: jal         0x800951B4
    // 0x808000C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_1;
    // 0x808000C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_808000C8:
    // 0x808000C8: jal         0x800845C8
    // 0x808000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babounce_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x808000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808000D0: beq         $v0, $zero, L_808000E0
    if (ctx->r2 == 0) {
        // 0x808000D4: nop
    
            goto L_808000E0;
    }
    // 0x808000D4: nop

    // 0x808000D8: jal         0x800834B0
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskazmove_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_808000E0:
    // 0x808000E0: jal         0x80084600
    // 0x808000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babounce_entrypoint_9(rdram, ctx);
        goto after_4;
    // 0x808000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808000E8: beq         $v0, $zero, L_808000F4
    if (ctx->r2 == 0) {
        // 0x808000EC: addiu       $t6, $zero, 0xBB
        ctx->r14 = ADD32(0, 0XBB);
            goto L_808000F4;
    }
    // 0x808000EC: addiu       $t6, $zero, 0xBB
    ctx->r14 = ADD32(0, 0XBB);
    // 0x808000F0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_808000F4:
    // 0x808000F4: jal         0x8008E35C
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_5;
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808000FC: beql        $v0, $zero, L_8080012C
    if (ctx->r2 == 0) {
        // 0x80800100: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080012C;
    }
    goto skip_0;
    // 0x80800100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800104: jal         0x8009BB50
    // 0x80800108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_6;
    // 0x80800108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080010C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800110: addiu       $t7, $zero, 0x160
    ctx->r15 = ADD32(0, 0X160);
    // 0x80800114: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x80800118: nop

    // 0x8080011C: bc1fl       L_8080012C
    if (!c1cs) {
        // 0x80800120: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080012C;
    }
    goto skip_1;
    // 0x80800120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800124: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80800128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080012C:
    // 0x8080012C: jal         0x8009E5C8
    // 0x80800130: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_7;
    // 0x80800130: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_7:
    // 0x80800134: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800138: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080013C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800140: jr          $ra
    // 0x80800144: nop

    return;
    // 0x80800144: nop

;}
RECOMP_FUNC void bskazow_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800148: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080014C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(122, 0X2D0) << 16);
    // 0x80800150: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800154: jr          $ra
    // 0x80800158: lw          $v0, 0x2D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(122, 0X2D0));
    return;
    // 0x80800158: lw          $v0, 0x2D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(122, 0X2D0));
;}
RECOMP_FUNC void func_8080015C_bskazow(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080015C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800160: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800164: jal         0x800845D0
    // 0x80800168: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800168: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080016C: jal         0x800832E8
    // 0x80800170: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bskaz_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800170: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080017C: jr          $ra
    // 0x80800180: nop

    return;
    // 0x80800180: nop

;}
RECOMP_FUNC void func_80800184_bskazow(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800184: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800188: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080018C: jal         0x8008CABC
    // 0x80800190: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800190: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800194: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800198: jal         0x800832E0
    // 0x8080019C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x8080019C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x808001A0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808001A4: jal         0x800845D8
    // 0x808001A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x808001A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x808001AC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(122, 0X2C4) << 16);
    // 0x808001B0: lwc1        $f4, 0x2C4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(122, 0X2C4));
    // 0x808001B4: lui         $a2, 0x3EF0
    ctx->r6 = S32(0X3EF0 << 16);
    // 0x808001B8: ori         $a2, $a2, 0x3AFB
    ctx->r6 = ctx->r6 | 0X3AFB;
    // 0x808001BC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808001C0: addiu       $a1, $zero, 0xC9
    ctx->r5 = ADD32(0, 0XC9);
    // 0x808001C4: lui         $a3, 0x4020
    ctx->r7 = S32(0X4020 << 16);
    // 0x808001C8: jal         0x800845E8
    // 0x808001CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    _babounce_entrypoint_6(rdram, ctx);
        goto after_3;
    // 0x808001CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x808001D0: lui         $a1, 0x3E37
    ctx->r5 = S32(0X3E37 << 16);
    // 0x808001D4: ori         $a1, $a1, 0x8034
    ctx->r5 = ctx->r5 | 0X8034;
    // 0x808001D8: jal         0x8008B10C
    // 0x808001DC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B10C(rdram, ctx);
        goto after_4;
    // 0x808001DC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x808001E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808001E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808001E8: jr          $ra
    // 0x808001EC: nop

    return;
    // 0x808001EC: nop

;}
RECOMP_FUNC void func_808001F0_bskazow(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808001F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001FC: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800200: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800204: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80800208: jal         0x8008CB10
    // 0x8080020C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x8080020C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    after_0:
    // 0x80800210: beq         $v0, $zero, L_80800220
    if (ctx->r2 == 0) {
        // 0x80800214: nop
    
            goto L_80800220;
    }
    // 0x80800214: nop

    // 0x80800218: jal         0x800951B4
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_1;
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_80800220:
    // 0x80800220: jal         0x800845C8
    // 0x80800224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babounce_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80800224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800228: beq         $v0, $zero, L_80800238
    if (ctx->r2 == 0) {
        // 0x8080022C: nop
    
            goto L_80800238;
    }
    // 0x8080022C: nop

    // 0x80800230: jal         0x800834B0
    // 0x80800234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskazmove_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x80800234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80800238:
    // 0x80800238: jal         0x80084600
    // 0x8080023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babounce_entrypoint_9(rdram, ctx);
        goto after_4;
    // 0x8080023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800240: beq         $v0, $zero, L_8080024C
    if (ctx->r2 == 0) {
        // 0x80800244: addiu       $t6, $zero, 0xBB
        ctx->r14 = ADD32(0, 0XBB);
            goto L_8080024C;
    }
    // 0x80800244: addiu       $t6, $zero, 0xBB
    ctx->r14 = ADD32(0, 0XBB);
    // 0x80800248: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_8080024C:
    // 0x8080024C: jal         0x8008E35C
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_5;
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800254: beql        $v0, $zero, L_80800284
    if (ctx->r2 == 0) {
        // 0x80800258: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800284;
    }
    goto skip_0;
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8080025C: jal         0x8009BB50
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_6;
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800264: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800268: addiu       $t7, $zero, 0x160
    ctx->r15 = ADD32(0, 0X160);
    // 0x8080026C: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x80800270: nop

    // 0x80800274: bc1fl       L_80800284
    if (!c1cs) {
        // 0x80800278: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800284;
    }
    goto skip_1;
    // 0x80800278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x8080027C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80800280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800284:
    // 0x80800284: jal         0x8009E5C8
    // 0x80800288: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_7;
    // 0x80800288: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_7:
    // 0x8080028C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800290: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800294: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800298: jr          $ra
    // 0x8080029C: nop

    return;
    // 0x8080029C: nop

;}
RECOMP_FUNC void bskazow_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002A0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808002A4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(122, 0X2E0) << 16);
    // 0x808002A8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808002AC: jr          $ra
    // 0x808002B0: lw          $v0, 0x2E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(122, 0X2E0));
    return;
    // 0x808002B0: lw          $v0, 0x2E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(122, 0X2E0));
    // 0x808002B4: nop

    // 0x808002B8: nop

    // 0x808002BC: nop

;}
RECOMP_FUNC void func_80800000_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800010: jal         0x8009E69C
    // 0x80800014: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E69C(rdram, ctx);
        goto after_0;
    // 0x80800014: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800018: bnel        $v0, $zero, L_80800058
    if (ctx->r2 != 0) {
        // 0x8080001C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800058;
    }
    goto skip_0;
    // 0x8080001C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800020: jal         0x8009BC90
    // 0x80800024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC90(rdram, ctx);
        goto after_1;
    // 0x80800024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800028: jal         0x8009BC6C
    // 0x8080002C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_2;
    // 0x8080002C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800034: jal         0x800961AC
    // 0x80800038: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_3;
    // 0x80800038: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8080003C: jal         0x8009F258
    // 0x80800040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F258(rdram, ctx);
        goto after_4;
    // 0x80800040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800044: jal         0x800A1040
    // 0x80800048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1040(rdram, ctx);
        goto after_5;
    // 0x80800048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080004C: jal         0x800832E8
    // 0x80800050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskaz_entrypoint_2(rdram, ctx);
        goto after_6;
    // 0x80800050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800054: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800058:
    // 0x80800058: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080005C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800060: jr          $ra
    // 0x80800064: nop

    return;
    // 0x80800064: nop

;}
RECOMP_FUNC void func_80800068_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800068: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080006C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800070: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800074: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800078: jal         0x8009E6C4
    // 0x8080007C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E6C4(rdram, ctx);
        goto after_0;
    // 0x8080007C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800080: bnel        $v0, $zero, L_808000F0
    if (ctx->r2 != 0) {
        // 0x80800084: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808000F0;
    }
    goto skip_0;
    // 0x80800084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800088: jal         0x800832E0
    // 0x8080008C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x8080008C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800094: jal         0x8009BCB4
    // 0x80800098: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_2;
    // 0x80800098: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_2:
    // 0x8080009C: lui         $a1, 0x4305
    ctx->r5 = S32(0X4305 << 16);
    // 0x808000A0: ori         $a1, $a1, 0x547B
    ctx->r5 = ctx->r5 | 0X547B;
    // 0x808000A4: jal         0x8009BCC4
    // 0x808000A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_3;
    // 0x808000A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808000AC: lui         $a2, 0x3CF5
    ctx->r6 = S32(0X3CF5 << 16);
    // 0x808000B0: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B8: jal         0x8009F1C8
    // 0x808000BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_4;
    // 0x808000BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000C8: jal         0x8009F1C8
    // 0x808000CC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_5;
    // 0x808000CC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_5:
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D4: jal         0x800961AC
    // 0x808000D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800961AC(rdram, ctx);
        goto after_6;
    // 0x808000D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E0: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x808000E4: jal         0x800A106C
    // 0x808000E8: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    func_800A106C(rdram, ctx);
        goto after_7;
    // 0x808000E8: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    after_7:
    // 0x808000EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000F0:
    // 0x808000F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000F8: jr          $ra
    // 0x808000FC: nop

    return;
    // 0x808000FC: nop

;}
RECOMP_FUNC void func_80800100_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800144: lui         $a2, 0x43AF
    ctx->r6 = S32(0X43AF << 16);
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x80800144: lui         $a2, 0x43AF
    ctx->r6 = S32(0X43AF << 16);
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
RECOMP_FUNC void func_80800164_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800164: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800168: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080016C: jal         0x8009BC34
    // 0x80800170: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC34(rdram, ctx);
        goto after_0;
    // 0x80800170: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800174: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800178: jal         0x800961AC
    // 0x8080017C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_1;
    // 0x8080017C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800188: jr          $ra
    // 0x8080018C: nop

    return;
    // 0x8080018C: nop

;}
RECOMP_FUNC void func_80800190_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800190: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800194: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800198: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8080019C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001A0: jal         0x8008CABC
    // 0x808001A4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808001A4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    after_0:
    // 0x808001A8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x808001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B0: jal         0x8009BCB4
    // 0x808001B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BCB4(rdram, ctx);
        goto after_1;
    // 0x808001B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x808001B8: lui         $a1, 0xC3C7
    ctx->r5 = S32(0XC3C7 << 16);
    // 0x808001BC: ori         $a1, $a1, 0xFEB8
    ctx->r5 = ctx->r5 | 0XFEB8;
    // 0x808001C0: jal         0x8009BCC4
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_2;
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808001C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001CC: jal         0x800961AC
    // 0x808001D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800961AC(rdram, ctx);
        goto after_3;
    // 0x808001D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D8: jal         0x8009BC5C
    // 0x808001DC: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8009BC5C(rdram, ctx);
        goto after_4;
    // 0x808001DC: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_4:
    // 0x808001E0: jal         0x800A046C
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A046C(rdram, ctx);
        goto after_5;
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808001E8: jal         0x800A3298
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3298(rdram, ctx);
        goto after_6;
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808001F0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x808001F4: jal         0x8008AF24
    // 0x808001F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008AF24(rdram, ctx);
        goto after_7;
    // 0x808001F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x808001FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800200: jal         0x8008AED4
    // 0x80800204: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    func_8008AED4(rdram, ctx);
        goto after_8;
    // 0x80800204: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    after_8:
    // 0x80800208: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080020C: jal         0x8008B134
    // 0x80800210: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_9;
    // 0x80800210: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x80800214: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x80800218: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x8080021C: jal         0x8008B1BC
    // 0x80800220: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_10;
    // 0x80800220: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x80800224: lui         $a1, 0x3F24
    ctx->r5 = S32(0X3F24 << 16);
    // 0x80800228: ori         $a1, $a1, 0x25AF
    ctx->r5 = ctx->r5 | 0X25AF;
    // 0x8080022C: jal         0x8008B24C
    // 0x80800230: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B24C(rdram, ctx);
        goto after_11;
    // 0x80800230: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x80800234: jal         0x8008B064
    // 0x80800238: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B064(rdram, ctx);
        goto after_12;
    // 0x80800238: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x8080023C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80800240: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800244: lui         $at, 0xC496
    ctx->r1 = S32(0XC496 << 16);
    // 0x80800248: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080024C: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800250: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x80800254: lui         $a3, 0xC396
    ctx->r7 = S32(0XC396 << 16);
    // 0x80800258: jal         0x800F10B4
    // 0x8080025C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_13;
    // 0x8080025C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_13:
    // 0x80800260: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800264: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x80800268: jal         0x8009BA58
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_14;
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800270: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800274: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080027C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800280: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800284: jal         0x8009FFD8
    // 0x80800288: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_15;
    // 0x80800288: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_15:
    // 0x8080028C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800290: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800294: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800298: jr          $ra
    // 0x8080029C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8080029C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_808002A0_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002A0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x808002A4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x808002A8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x808002AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808002B0: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x808002B4: jal         0x8009C128
    // 0x808002B8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x808002B8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x808002BC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x808002C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808002C4: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x808002C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002CC: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x808002D0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x808002D4: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x808002D8: jal         0x8009FBB0
    // 0x808002DC: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    func_8009FBB0(rdram, ctx);
        goto after_1;
    // 0x808002DC: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x808002E0: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x808002E4: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x808002E8: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x808002EC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x808002F0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x808002F4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x808002F8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808002FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800300: addiu       $a1, $zero, -0x1E
    ctx->r5 = ADD32(0, -0X1E);
    // 0x80800304: addiu       $a2, $zero, -0x1E
    ctx->r6 = ADD32(0, -0X1E);
    // 0x80800308: jal         0x800BA930
    // 0x8080030C: addiu       $a3, $zero, -0x1E
    ctx->r7 = ADD32(0, -0X1E);
    func_800BA930(rdram, ctx);
        goto after_2;
    // 0x8080030C: addiu       $a3, $zero, -0x1E
    ctx->r7 = ADD32(0, -0X1E);
    after_2:
    // 0x80800310: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80800314: jal         0x800BA22C
    // 0x80800318: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_3;
    // 0x80800318: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8080031C: lwc1        $f12, 0x16C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800320: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80800324: nop

    // 0x80800328: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x8080032C: nop

    // 0x80800330: bc1f        L_80800374
    if (!c1cs) {
        // 0x80800334: nop
    
            goto L_80800374;
    }
    // 0x80800334: nop

    // 0x80800338: jal         0x800F2100
    // 0x8080033C: nop

    func_800F2100(rdram, ctx);
        goto after_4;
    // 0x8080033C: nop

    after_4:
    // 0x80800340: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(123, 0XA40) << 16);
    // 0x80800344: lwc1        $f16, 0xA40($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(123, 0XA40));
    // 0x80800348: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8080034C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800350: mul.s       $f12, $f0, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80800354: jal         0x800F0E00
    // 0x80800358: nop

    func_800F0E00(rdram, ctx);
        goto after_5;
    // 0x80800358: nop

    after_5:
    // 0x8080035C: lwc1        $f18, 0x16C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800364: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x80800368: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
    // 0x8080036C: jal         0x8009BA58
    // 0x80800370: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009BA58(rdram, ctx);
        goto after_6;
    // 0x80800370: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_6:
L_80800374:
    // 0x80800374: jal         0x8008E078
    // 0x80800378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_7;
    // 0x80800378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080037C: beq         $v0, $zero, L_80800388
    if (ctx->r2 == 0) {
        // 0x80800380: addiu       $t9, $zero, 0x15D
        ctx->r25 = ADD32(0, 0X15D);
            goto L_80800388;
    }
    // 0x80800380: addiu       $t9, $zero, 0x15D
    ctx->r25 = ADD32(0, 0X15D);
    // 0x80800384: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
L_80800388:
    // 0x80800388: jal         0x8008E35C
    // 0x8080038C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_8;
    // 0x8080038C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800390: bne         $v0, $zero, L_8080039C
    if (ctx->r2 != 0) {
        // 0x80800394: addiu       $t0, $zero, 0xBB
        ctx->r8 = ADD32(0, 0XBB);
            goto L_8080039C;
    }
    // 0x80800394: addiu       $t0, $zero, 0xBB
    ctx->r8 = ADD32(0, 0XBB);
    // 0x80800398: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
L_8080039C:
    // 0x8080039C: jal         0x8009BB50
    // 0x808003A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_9;
    // 0x808003A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808003A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x808003A8: addiu       $t1, $zero, 0x15D
    ctx->r9 = ADD32(0, 0X15D);
    // 0x808003AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003B0: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x808003B4: nop

    // 0x808003B8: bc1f        L_808003C4
    if (!c1cs) {
        // 0x808003BC: nop
    
            goto L_808003C4;
    }
    // 0x808003BC: nop

    // 0x808003C0: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
L_808003C4:
    // 0x808003C4: jal         0x8009E5C8
    // 0x808003C8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009E5C8(rdram, ctx);
        goto after_10;
    // 0x808003C8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_10:
    // 0x808003CC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x808003D0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x808003D4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x808003D8: jr          $ra
    // 0x808003DC: nop

    return;
    // 0x808003DC: nop

;}
RECOMP_FUNC void bskazpaddle_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003E0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808003E4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(123, 0XA50) << 16);
    // 0x808003E8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808003EC: jr          $ra
    // 0x808003F0: lw          $v0, 0xA50($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(123, 0XA50));
    return;
    // 0x808003F0: lw          $v0, 0xA50($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(123, 0XA50));
;}
RECOMP_FUNC void func_808003F4_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808003F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808003FC: jal         0x8009FBB0
    // 0x80800400: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    func_8009FBB0(rdram, ctx);
        goto after_0;
    // 0x80800400: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    after_0:
    // 0x80800404: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x80800408: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8080040C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80800410: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800414: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800418: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x8080041C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80800420: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80800424: jal         0x800BA930
    // 0x80800428: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_800BA930(rdram, ctx);
        goto after_1;
    // 0x80800428: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_1:
    // 0x8080042C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80800430: jal         0x800BA22C
    // 0x80800434: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_2;
    // 0x80800434: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80800438: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080043C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800440: jr          $ra
    // 0x80800444: nop

    return;
    // 0x80800444: nop

;}
RECOMP_FUNC void func_80800448_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800448: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080044C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800450: jal         0x80000000
    // 0x80800454: nop

    func_80800000_bskazpaddle(rdram, ctx);
        goto after_0;
    // 0x80800454: nop

    after_0:
    // 0x80800458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080045C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800460: jr          $ra
    // 0x80800464: nop

    return;
    // 0x80800464: nop

;}
RECOMP_FUNC void func_80800468_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800468: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080046C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800470: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800474: jal         0x80000068
    // 0x80800478: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800068_bskazpaddle(rdram, ctx);
        goto after_0;
    // 0x80800478: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080047C: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80800480: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800488: jal         0x8008CB3C
    // 0x8080048C: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x8080048C: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    after_1:
    // 0x80800490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800494: jal         0x8008CA4C
    // 0x80800498: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008CA4C(rdram, ctx);
        goto after_2;
    // 0x80800498: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x8080049C: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x808004A0: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x808004A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004A8: jal         0x8008C9BC
    // 0x808004AC: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_3;
    // 0x808004AC: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_3:
    // 0x808004B0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808004B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808004B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004BC: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x808004C0: lui         $a2, 0x43AF
    ctx->r6 = S32(0X43AF << 16);
    // 0x808004C4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x808004C8: jal         0x8008C9F0
    // 0x808004CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_4;
    // 0x808004CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x808004D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004D4: jal         0x8009C908
    // 0x808004D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009C908(rdram, ctx);
        goto after_5;
    // 0x808004D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x808004DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004E0: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x808004E4: jal         0x8009C99C
    // 0x808004E8: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_6;
    // 0x808004E8: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_6:
    // 0x808004EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004F0: jal         0x8009D2D8
    // 0x808004F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D2D8(rdram, ctx);
        goto after_7;
    // 0x808004F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x808004F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004FC: jal         0x8009B800
    // 0x80800500: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009B800(rdram, ctx);
        goto after_8;
    // 0x80800500: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x80800504: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800508: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080050C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800510: jr          $ra
    // 0x80800514: nop

    return;
    // 0x80800514: nop

;}
RECOMP_FUNC void func_80800518_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800518: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8080051C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800520: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800524: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800528: jal         0x8008CABC
    // 0x8080052C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080052C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x80800530: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80800534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800538: jal         0x80092C24
    // 0x8080053C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80092C24(rdram, ctx);
        goto after_1;
    // 0x8080053C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x80800540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800544: jal         0x800003F4
    // 0x80800548: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_808003F4_bskazpaddle(rdram, ctx);
        goto after_2;
    // 0x80800548: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x8080054C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800550: jal         0x80092C00
    // 0x80800554: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80092C00(rdram, ctx);
        goto after_3;
    // 0x80800554: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x80800558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080055C: jal         0x800003F4
    // 0x80800560: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_808003F4_bskazpaddle(rdram, ctx);
        goto after_4;
    // 0x80800560: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_4:
    // 0x80800564: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80800568: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8080056C: jal         0x8008B348
    // 0x80800570: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B348(rdram, ctx);
        goto after_5;
    // 0x80800570: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_5:
    // 0x80800574: beq         $v0, $zero, L_80800594
    if (ctx->r2 == 0) {
        // 0x80800578: lui         $a2, 0x3F66
        ctx->r6 = S32(0X3F66 << 16);
            goto L_80800594;
    }
    // 0x80800578: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x8080057C: lui         $a3, 0x3F8C
    ctx->r7 = S32(0X3F8C << 16);
    // 0x80800580: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800584: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080058C: jal         0x8009DE74
    // 0x80800590: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    func_8009DE74(rdram, ctx);
        goto after_6;
    // 0x80800590: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    after_6:
L_80800594:
    // 0x80800594: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x80800598: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x8080059C: jal         0x8008B348
    // 0x808005A0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x808005A0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_7:
    // 0x808005A4: beq         $v0, $zero, L_808005C4
    if (ctx->r2 == 0) {
        // 0x808005A8: lui         $a2, 0x3F66
        ctx->r6 = S32(0X3F66 << 16);
            goto L_808005C4;
    }
    // 0x808005A8: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x808005AC: lui         $a3, 0x3F8C
    ctx->r7 = S32(0X3F8C << 16);
    // 0x808005B0: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x808005B4: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808005B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005BC: jal         0x8009DE74
    // 0x808005C0: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    func_8009DE74(rdram, ctx);
        goto after_8;
    // 0x808005C0: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    after_8:
L_808005C4:
    // 0x808005C4: jal         0x80000100
    // 0x808005C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800100_bskazpaddle(rdram, ctx);
        goto after_9;
    // 0x808005C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808005CC: jal         0x8009EF10
    // 0x808005D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_10;
    // 0x808005D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808005D4: bne         $v0, $zero, L_808005E0
    if (ctx->r2 != 0) {
        // 0x808005D8: addiu       $t6, $zero, 0x15D
        ctx->r14 = ADD32(0, 0X15D);
            goto L_808005E0;
    }
    // 0x808005D8: addiu       $t6, $zero, 0x15D
    ctx->r14 = ADD32(0, 0X15D);
    // 0x808005DC: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_808005E0:
    // 0x808005E0: jal         0x8008E35C
    // 0x808005E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_11;
    // 0x808005E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808005E8: bne         $v0, $zero, L_808005F8
    if (ctx->r2 != 0) {
        // 0x808005EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005F8;
    }
    // 0x808005EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005F0: addiu       $t7, $zero, 0xBB
    ctx->r15 = ADD32(0, 0XBB);
    // 0x808005F4: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_808005F8:
    // 0x808005F8: jal         0x80091A58
    // 0x808005FC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_12;
    // 0x808005FC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_12:
    // 0x80800600: beq         $v0, $zero, L_8080060C
    if (ctx->r2 == 0) {
        // 0x80800604: addiu       $t8, $zero, 0x15F
        ctx->r24 = ADD32(0, 0X15F);
            goto L_8080060C;
    }
    // 0x80800604: addiu       $t8, $zero, 0x15F
    ctx->r24 = ADD32(0, 0X15F);
    // 0x80800608: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_8080060C:
    // 0x8080060C: jal         0x80096500
    // 0x80800610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096500(rdram, ctx);
        goto after_13;
    // 0x80800610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800614: beq         $v0, $zero, L_80800630
    if (ctx->r2 == 0) {
        // 0x80800618: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800630;
    }
    // 0x80800618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080061C: jal         0x80091A58
    // 0x80800620: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_14;
    // 0x80800620: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_14:
    // 0x80800624: beq         $v0, $zero, L_80800630
    if (ctx->r2 == 0) {
        // 0x80800628: addiu       $t9, $zero, 0xBD
        ctx->r25 = ADD32(0, 0XBD);
            goto L_80800630;
    }
    // 0x80800628: addiu       $t9, $zero, 0xBD
    ctx->r25 = ADD32(0, 0XBD);
    // 0x8080062C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_80800630:
    // 0x80800630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800634: jal         0x8009E5C8
    // 0x80800638: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_15;
    // 0x80800638: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_15:
    // 0x8080063C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800640: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800644: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800648: jr          $ra
    // 0x8080064C: nop

    return;
    // 0x8080064C: nop

;}
RECOMP_FUNC void bskazpaddle_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800650: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800654: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(123, 0XA60) << 16);
    // 0x80800658: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080065C: jr          $ra
    // 0x80800660: lw          $v0, 0xA60($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(123, 0XA60));
    return;
    // 0x80800660: lw          $v0, 0xA60($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(123, 0XA60));
;}
RECOMP_FUNC void func_80800664_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800664: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800668: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080066C: jal         0x80000000
    // 0x80800670: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800000_bskazpaddle(rdram, ctx);
        goto after_0;
    // 0x80800670: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800674: jal         0x800A4E30
    // 0x80800678: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4E30(rdram, ctx);
        goto after_1;
    // 0x80800678: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080067C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800684: jr          $ra
    // 0x80800688: nop

    return;
    // 0x80800688: nop

;}
RECOMP_FUNC void func_8080068C_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080068C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800690: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800694: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800698: jal         0x80000068
    // 0x8080069C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800068_bskazpaddle(rdram, ctx);
        goto after_0;
    // 0x8080069C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808006A0: lui         $a2, 0x4033
    ctx->r6 = S32(0X4033 << 16);
    // 0x808006A4: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006AC: jal         0x8008CB3C
    // 0x808006B0: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x808006B0: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    after_1:
    // 0x808006B4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808006B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808006BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808006C4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x808006C8: jal         0x8009FFD8
    // 0x808006CC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x808006CC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x808006D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006D4: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x808006D8: jal         0x8009C99C
    // 0x808006DC: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x808006DC: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_3:
    // 0x808006E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006E4: jal         0x8009B9B0
    // 0x808006E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x808006E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x808006EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006F0: jal         0x800A4DA4
    // 0x808006F4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800A4DA4(rdram, ctx);
        goto after_5;
    // 0x808006F4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_5:
    // 0x808006F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808006FC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800700: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800704: jr          $ra
    // 0x80800708: nop

    return;
    // 0x80800708: nop

;}
RECOMP_FUNC void func_8080070C_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080070C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800710: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800714: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800718: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080071C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800720: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80800724: jal         0x8001210C
    // 0x80800728: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001210C(rdram, ctx);
        goto after_0;
    // 0x80800728: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x8080072C: bne         $v0, $zero, L_80800760
    if (ctx->r2 != 0) {
        // 0x80800730: nop
    
            goto L_80800760;
    }
    // 0x80800730: nop

    // 0x80800734: jal         0x800DC0C0
    // 0x80800738: nop

    func_800DC0C0(rdram, ctx);
        goto after_1;
    // 0x80800738: nop

    after_1:
    // 0x8080073C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800740: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800748: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8080074C: nop

    // 0x80800750: bc1f        L_80800760
    if (!c1cs) {
        // 0x80800754: nop
    
            goto L_80800760;
    }
    // 0x80800754: nop

    // 0x80800758: jal         0x8009FC34
    // 0x8080075C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009FC34(rdram, ctx);
        goto after_2;
    // 0x8080075C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_80800760:
    // 0x80800760: jal         0x8009EF10
    // 0x80800764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_3;
    // 0x80800764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800768: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080076C: bne         $v0, $at, L_80800778
    if (ctx->r2 != ctx->r1) {
        // 0x80800770: nop
    
            goto L_80800778;
    }
    // 0x80800770: nop

    // 0x80800774: addiu       $s1, $zero, 0x15E
    ctx->r17 = ADD32(0, 0X15E);
L_80800778:
    // 0x80800778: jal         0x8008E35C
    // 0x8080077C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_4;
    // 0x8080077C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800780: bne         $v0, $zero, L_8080078C
    if (ctx->r2 != 0) {
        // 0x80800784: nop
    
            goto L_8080078C;
    }
    // 0x80800784: nop

    // 0x80800788: addiu       $s1, $zero, 0xBB
    ctx->r17 = ADD32(0, 0XBB);
L_8080078C:
    // 0x8080078C: jal         0x80097AD0
    // 0x80800790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097AD0(rdram, ctx);
        goto after_5;
    // 0x80800790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800794: beql        $v0, $zero, L_808007AC
    if (ctx->r2 == 0) {
        // 0x80800798: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007AC;
    }
    goto skip_0;
    // 0x80800798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8080079C: jal         0x800848A8
    // 0x808007A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_6;
    // 0x808007A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808007A4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x808007A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808007AC:
    // 0x808007AC: jal         0x80091A58
    // 0x808007B0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_7;
    // 0x808007B0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_7:
    // 0x808007B4: beq         $v0, $zero, L_808007C0
    if (ctx->r2 == 0) {
        // 0x808007B8: nop
    
            goto L_808007C0;
    }
    // 0x808007B8: nop

    // 0x808007BC: addiu       $s1, $zero, 0x15F
    ctx->r17 = ADD32(0, 0X15F);
L_808007C0:
    // 0x808007C0: jal         0x80096500
    // 0x808007C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096500(rdram, ctx);
        goto after_8;
    // 0x808007C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808007C8: beq         $v0, $zero, L_808007E4
    if (ctx->r2 == 0) {
        // 0x808007CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007E4;
    }
    // 0x808007CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007D0: jal         0x80091A58
    // 0x808007D4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_9;
    // 0x808007D4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_9:
    // 0x808007D8: beql        $v0, $zero, L_808007E8
    if (ctx->r2 == 0) {
        // 0x808007DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007E8;
    }
    goto skip_1;
    // 0x808007DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808007E0: addiu       $s1, $zero, 0xBD
    ctx->r17 = ADD32(0, 0XBD);
L_808007E4:
    // 0x808007E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808007E8:
    // 0x808007E8: jal         0x8009E5C8
    // 0x808007EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_10;
    // 0x808007EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_10:
    // 0x808007F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808007F4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808007F8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808007FC: jr          $ra
    // 0x80800800: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800800: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bskazpaddle_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800804: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800808: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(123, 0XA70) << 16);
    // 0x8080080C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800810: jr          $ra
    // 0x80800814: lw          $v0, 0xA70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(123, 0XA70));
    return;
    // 0x80800814: lw          $v0, 0xA70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(123, 0XA70));
;}
RECOMP_FUNC void func_80800818_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080081C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800820: jal         0x80000000
    // 0x80800824: nop

    func_80800000_bskazpaddle(rdram, ctx);
        goto after_0;
    // 0x80800824: nop

    after_0:
    // 0x80800828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080082C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800830: jr          $ra
    // 0x80800834: nop

    return;
    // 0x80800834: nop

;}
RECOMP_FUNC void func_80800838_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800838: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080083C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800840: jal         0x80000068
    // 0x80800844: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80800068_bskazpaddle(rdram, ctx);
        goto after_0;
    // 0x80800844: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800848: lui         $a2, 0x4019
    ctx->r6 = S32(0X4019 << 16);
    // 0x8080084C: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800850: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800854: jal         0x8008CCBC
    // 0x80800858: addiu       $a1, $zero, 0x13A
    ctx->r5 = ADD32(0, 0X13A);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x80800858: addiu       $a1, $zero, 0x13A
    ctx->r5 = ADD32(0, 0X13A);
    after_1:
    // 0x8080085C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800860: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800864: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800868: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080086C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800870: jal         0x8009FFD8
    // 0x80800874: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800874: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x80800878: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080087C: jal         0x8009B9B0
    // 0x80800880: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80800880: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800884: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800888: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080088C: jr          $ra
    // 0x80800890: nop

    return;
    // 0x80800890: nop

;}
RECOMP_FUNC void func_80800894_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800894: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080089C: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x808008A0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808008A4: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x808008A8: jal         0x8008CB10
    // 0x808008AC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x808008AC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x808008B0: beq         $v0, $zero, L_808008BC
    if (ctx->r2 == 0) {
        // 0x808008B4: lw          $a2, 0x1C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X1C);
            goto L_808008BC;
    }
    // 0x808008B4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x808008B8: addiu       $a2, $zero, 0x15D
    ctx->r6 = ADD32(0, 0X15D);
L_808008BC:
    // 0x808008BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808008C0: jal         0x8009E5C8
    // 0x808008C4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_1;
    // 0x808008C4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_1:
    // 0x808008C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808008CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808008D0: jr          $ra
    // 0x808008D4: nop

    return;
    // 0x808008D4: nop

;}
RECOMP_FUNC void bskazpaddle_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008D8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808008DC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(123, 0XA80) << 16);
    // 0x808008E0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808008E4: jr          $ra
    // 0x808008E8: lw          $v0, 0xA80($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(123, 0XA80));
    return;
    // 0x808008E8: lw          $v0, 0xA80($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(123, 0XA80));
;}
RECOMP_FUNC void func_808008EC_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808008F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808008F4: jal         0x800839B8
    // 0x808008F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x808008F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808008FC: jal         0x80000000
    // 0x80800900: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800000_bskazpaddle(rdram, ctx);
        goto after_1;
    // 0x80800900: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080090C: jr          $ra
    // 0x80800910: nop

    return;
    // 0x80800910: nop

;}
RECOMP_FUNC void func_80800914_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800914: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800918: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080091C: jal         0x80000068
    // 0x80800920: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800068_bskazpaddle(rdram, ctx);
        goto after_0;
    // 0x80800920: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800924: jal         0x800839C8
    // 0x80800928: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x80800928: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080092C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800934: jr          $ra
    // 0x80800938: nop

    return;
    // 0x80800938: nop

;}
RECOMP_FUNC void func_8080093C_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080093C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800940: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800944: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800948: jal         0x800839E8
    // 0x8080094C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x8080094C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800950: beq         $v0, $zero, L_80800964
    if (ctx->r2 == 0) {
        // 0x80800954: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80800964;
    }
    // 0x80800954: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800958: jal         0x800839B0
    // 0x8080095C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsrest_entrypoint_13(rdram, ctx);
        goto after_1;
    // 0x8080095C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800960: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80800964:
    // 0x80800964: jal         0x8009E5C8
    // 0x80800968: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80800968: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x8080096C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800970: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800974: jr          $ra
    // 0x80800978: nop

    return;
    // 0x80800978: nop

;}
RECOMP_FUNC void bskazpaddle_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080097C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800980: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(123, 0XA90) << 16);
    // 0x80800984: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800988: jr          $ra
    // 0x8080098C: lw          $v0, 0xA90($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(123, 0XA90));
    return;
    // 0x8080098C: lw          $v0, 0xA90($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(123, 0XA90));
;}
RECOMP_FUNC void func_80800990_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800998: jal         0x80000068
    // 0x8080099C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800068_bskazpaddle(rdram, ctx);
        goto after_0;
    // 0x8080099C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808009A0: jal         0x80082FE0
    // 0x808009A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x808009A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808009A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808009AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808009B0: jr          $ra
    // 0x808009B4: nop

    return;
    // 0x808009B4: nop

;}
RECOMP_FUNC void func_808009B8_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808009BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808009C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808009C4: jal         0x800848D8
    // 0x808009C8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _badrone_entrypoint_30(rdram, ctx);
        goto after_0;
    // 0x808009C8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x808009CC: beq         $v0, $zero, L_808009D8
    if (ctx->r2 == 0) {
        // 0x808009D0: addiu       $t6, $zero, 0xBB
        ctx->r14 = ADD32(0, 0XBB);
            goto L_808009D8;
    }
    // 0x808009D0: addiu       $t6, $zero, 0xBB
    ctx->r14 = ADD32(0, 0XBB);
    // 0x808009D4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_808009D8:
    // 0x808009D8: jal         0x80082FE8
    // 0x808009DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x808009DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808009E0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808009E4: jal         0x8009E5C8
    // 0x808009E8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x808009E8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x808009EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808009F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808009F4: jr          $ra
    // 0x808009F8: nop

    return;
    // 0x808009F8: nop

;}
RECOMP_FUNC void func_808009FC_bskazpaddle(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800A00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A04: jal         0x80082FF0
    // 0x80800A08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800A08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800A0C: jal         0x80000000
    // 0x80800A10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800000_bskazpaddle(rdram, ctx);
        goto after_1;
    // 0x80800A10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A1C: jr          $ra
    // 0x80800A20: nop

    return;
    // 0x80800A20: nop

;}
RECOMP_FUNC void bskazpaddle_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A24: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800A28: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(123, 0XAA0) << 16);
    // 0x80800A2C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800A30: jr          $ra
    // 0x80800A34: lw          $v0, 0xAA0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(123, 0XAA0));
    return;
    // 0x80800A34: lw          $v0, 0xAA0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(123, 0XAA0));
    // 0x80800A38: nop

    // 0x80800A3C: nop

;}
RECOMP_FUNC void bskazshock_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x80092C24
    // 0x8080000C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80092C24(rdram, ctx);
        goto after_0;
    // 0x8080000C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x80800010: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(124, 0X770) << 16);
    // 0x80800014: addiu       $t6, $t6, 0x770
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(124, 0X770));
    // 0x80800018: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080001C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80800020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800024: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800028: jal         0x800BBCB8
    // 0x8080002C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800BBCB8(rdram, ctx);
        goto after_1;
    // 0x8080002C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80800030: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800034: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800038: jr          $ra
    // 0x8080003C: nop

    return;
    // 0x8080003C: nop

;}
RECOMP_FUNC void bskazshock_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800040: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800044: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800048: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8080004C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800050: jal         0x8008CABC
    // 0x80800054: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800054: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800058: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8080005C: jal         0x800832E0
    // 0x80800060: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800060: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80800064: jal         0x8008AF24
    // 0x80800068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x80800068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800070: jal         0x8008AED4
    // 0x80800074: addiu       $a1, $zero, 0x27C
    ctx->r5 = ADD32(0, 0X27C);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x80800074: addiu       $a1, $zero, 0x27C
    ctx->r5 = ADD32(0, 0X27C);
    after_3:
    // 0x80800078: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x8080007C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800080: jal         0x8008B1C8
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1C8(rdram, ctx);
        goto after_4;
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080008C: jal         0x8008B1BC
    // 0x80800090: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_5;
    // 0x80800090: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_5:
    // 0x80800094: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x80800098: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080009C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000A0: jal         0x8008B1D4
    // 0x808000A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_6;
    // 0x808000A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x808000A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000AC: jal         0x8008B134
    // 0x808000B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_7;
    // 0x808000B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x808000B4: jal         0x8008B064
    // 0x808000B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_8;
    // 0x808000B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808000BC: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x808000C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808000C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808000C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808000D0: jal         0x8009FFD8
    // 0x808000D4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_9;
    // 0x808000D4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_9:
    // 0x808000D8: jal         0x8009EF04
    // 0x808000DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EF04(rdram, ctx);
        goto after_10;
    // 0x808000DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x808000E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808000E4: nop

    // 0x808000E8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x808000EC: nop

    // 0x808000F0: bc1t        L_8080010C
    if (c1cs) {
        // 0x808000F4: nop
    
            goto L_8080010C;
    }
    // 0x808000F4: nop

    // 0x808000F8: jal         0x8009EEB8
    // 0x808000FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_11;
    // 0x808000FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x80800100: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800104: jal         0x8009C914
    // 0x80800108: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C914(rdram, ctx);
        goto after_12;
    // 0x80800108: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
L_8080010C:
    // 0x8080010C: jal         0x8009C990
    // 0x80800110: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_13;
    // 0x80800110: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x80800114: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800118: jal         0x8009B9C0
    // 0x8080011C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_14;
    // 0x8080011C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x80800120: jal         0x800834B0
    // 0x80800124: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _bskazmove_entrypoint_0(rdram, ctx);
        goto after_15;
    // 0x80800124: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x80800128: jal         0x8009C990
    // 0x8080012C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_16;
    // 0x8080012C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x80800130: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800134: jal         0x8009BB00
    // 0x80800138: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BB00(rdram, ctx);
        goto after_17;
    // 0x80800138: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x8080013C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800140: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800144: jal         0x8009BA68
    // 0x80800148: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_18;
    // 0x80800148: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_18:
    // 0x8080014C: jal         0x800C2E04
    // 0x80800150: nop

    func_800C2E04(rdram, ctx);
        goto after_19;
    // 0x80800150: nop

    after_19:
    // 0x80800154: sb          $v0, 0x164($s1)
    MEM_B(0X164, ctx->r17) = ctx->r2;
    // 0x80800158: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x8080015C: jal         0x800C3418
    // 0x80800160: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C3418(rdram, ctx);
        goto after_20;
    // 0x80800160: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_20:
    // 0x80800164: jal         0x800C2E40
    // 0x80800168: lbu         $a0, 0x164($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X164);
    func_800C2E40(rdram, ctx);
        goto after_21;
    // 0x80800168: lbu         $a0, 0x164($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X164);
    after_21:
    // 0x8080016C: lbu         $a0, 0x164($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X164);
    // 0x80800170: jal         0x800C330C
    // 0x80800174: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800C330C(rdram, ctx);
        goto after_22;
    // 0x80800174: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_22:
    // 0x80800178: lbu         $a0, 0x164($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X164);
    // 0x8080017C: jal         0x800C301C
    // 0x80800180: addiu       $a1, $zero, 0x41D
    ctx->r5 = ADD32(0, 0X41D);
    func_800C301C(rdram, ctx);
        goto after_23;
    // 0x80800180: addiu       $a1, $zero, 0x41D
    ctx->r5 = ADD32(0, 0X41D);
    after_23:
    // 0x80800184: lui         $a1, 0x3FB3
    ctx->r5 = S32(0X3FB3 << 16);
    // 0x80800188: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x8080018C: lui         $a3, 0xBF99
    ctx->r7 = S32(0XBF99 << 16);
    // 0x80800190: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x80800194: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800198: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x8080019C: jal         0x800C3730
    // 0x808001A0: lbu         $a0, 0x164($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X164);
    func_800C3730(rdram, ctx);
        goto after_24;
    // 0x808001A0: lbu         $a0, 0x164($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X164);
    after_24:
    // 0x808001A4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x808001A8: sw          $t7, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = ctx->r15;
    // 0x808001AC: sw          $zero, 0x160($s1)
    MEM_W(0X160, ctx->r17) = 0;
    // 0x808001B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808001B4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808001B8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x808001BC: jr          $ra
    // 0x808001C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x808001C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void bskazshock_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808001C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001D4: jal         0x8008CABC
    // 0x808001D8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808001D8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x808001DC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x808001E0: jal         0x8008E078
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_1;
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808001E8: beq         $v0, $zero, L_80800224
    if (ctx->r2 == 0) {
        // 0x808001EC: nop
    
            goto L_80800224;
    }
    // 0x808001EC: nop

    // 0x808001F0: jal         0x8001211C
    // 0x808001F4: nop

    func_8001211C(rdram, ctx);
        goto after_2;
    // 0x808001F4: nop

    after_2:
    // 0x808001F8: bgez        $v0, L_8080020C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x808001FC: andi        $t6, $v0, 0x1
        ctx->r14 = ctx->r2 & 0X1;
            goto L_8080020C;
    }
    // 0x808001FC: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80800200: beq         $t6, $zero, L_8080020C
    if (ctx->r14 == 0) {
        // 0x80800204: nop
    
            goto L_8080020C;
    }
    // 0x80800204: nop

    // 0x80800208: addiu       $t6, $t6, -0x2
    ctx->r14 = ADD32(ctx->r14, -0X2);
L_8080020C:
    // 0x8080020C: beq         $t6, $zero, L_8080022C
    if (ctx->r14 == 0) {
        // 0x80800210: nop
    
            goto L_8080022C;
    }
    // 0x80800210: nop

    // 0x80800214: jal         0x80000000
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bskazshock_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080021C: b           L_8080022C
    // 0x80800220: nop

        goto L_8080022C;
    // 0x80800220: nop

L_80800224:
    // 0x80800224: jal         0x80000000
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bskazshock_entrypoint_0(rdram, ctx);
        goto after_4;
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_8080022C:
    // 0x8080022C: jal         0x800834B0
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskazmove_entrypoint_0(rdram, ctx);
        goto after_5;
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800238: jal         0x8009BB24
    // 0x8080023C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_6;
    // 0x8080023C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_6:
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800244: jal         0x80091A30
    // 0x80800248: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_7;
    // 0x80800248: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_7:
    // 0x8080024C: beq         $v0, $zero, L_80800274
    if (ctx->r2 == 0) {
        // 0x80800250: lwc1        $f6, 0x28($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
            goto L_80800274;
    }
    // 0x80800250: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800254: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800258: nop

    // 0x8080025C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800260: nop

    // 0x80800264: bc1fl       L_80800278
    if (!c1cs) {
        // 0x80800268: lw          $v0, 0x160($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X160);
            goto L_80800278;
    }
    goto skip_0;
    // 0x80800268: lw          $v0, 0x160($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X160);
    skip_0:
    // 0x8080026C: jal         0x8009BC6C
    // 0x80800270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_8;
    // 0x80800270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_80800274:
    // 0x80800274: lw          $v0, 0x160($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X160);
L_80800278:
    // 0x80800278: beq         $v0, $zero, L_80800290
    if (ctx->r2 == 0) {
        // 0x8080027C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80800290;
    }
    // 0x8080027C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800280: beq         $v0, $at, L_808002EC
    if (ctx->r2 == ctx->r1) {
        // 0x80800284: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_808002EC;
    }
    // 0x80800284: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80800288: b           L_80800344
    // 0x8080028C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800344;
    // 0x8080028C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800290:
    // 0x80800290: jal         0x8008E260
    // 0x80800294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_9;
    // 0x80800294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800298: beq         $v0, $zero, L_808002A8
    if (ctx->r2 == 0) {
        // 0x8080029C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002A8;
    }
    // 0x8080029C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002A0: addiu       $t7, $zero, 0xE0
    ctx->r15 = ADD32(0, 0XE0);
    // 0x808002A4: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_808002A8:
    // 0x808002A8: jal         0x8008DF8C
    // 0x808002AC: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_10;
    // 0x808002AC: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_10:
    // 0x808002B0: beq         $v0, $zero, L_80800340
    if (ctx->r2 == 0) {
        // 0x808002B4: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_80800340;
    }
    // 0x808002B4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808002B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x808002BC: jal         0x8008B1D4
    // 0x808002C0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008B1D4(rdram, ctx);
        goto after_11;
    // 0x808002C0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_11:
    // 0x808002C4: lui         $a1, 0x4033
    ctx->r5 = S32(0X4033 << 16);
    // 0x808002C8: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x808002CC: jal         0x8008B1BC
    // 0x808002D0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B1BC(rdram, ctx);
        goto after_12;
    // 0x808002D0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_12:
    // 0x808002D4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808002D8: jal         0x8008B134
    // 0x808002DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_13;
    // 0x808002DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x808002E0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x808002E4: b           L_80800340
    // 0x808002E8: sw          $t8, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r24;
        goto L_80800340;
    // 0x808002E8: sw          $t8, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r24;
L_808002EC:
    // 0x808002EC: lui         $a1, 0x3DE1
    ctx->r5 = S32(0X3DE1 << 16);
    // 0x808002F0: jal         0x8008B348
    // 0x808002F4: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    func_8008B348(rdram, ctx);
        goto after_14;
    // 0x808002F4: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    after_14:
    // 0x808002F8: beql        $v0, $zero, L_8080030C
    if (ctx->r2 == 0) {
        // 0x808002FC: lui         $a1, 0x3ECE
        ctx->r5 = S32(0X3ECE << 16);
            goto L_8080030C;
    }
    goto skip_1;
    // 0x808002FC: lui         $a1, 0x3ECE
    ctx->r5 = S32(0X3ECE << 16);
    skip_1:
    // 0x80800300: jal         0x800C3BDC
    // 0x80800304: lbu         $a0, 0x164($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X164);
    func_800C3BDC(rdram, ctx);
        goto after_15;
    // 0x80800304: lbu         $a0, 0x164($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X164);
    after_15:
    // 0x80800308: lui         $a1, 0x3ECE
    ctx->r5 = S32(0X3ECE << 16);
L_8080030C:
    // 0x8080030C: ori         $a1, $a1, 0xA4A9
    ctx->r5 = ctx->r5 | 0XA4A9;
    // 0x80800310: jal         0x8008B348
    // 0x80800314: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B348(rdram, ctx);
        goto after_16;
    // 0x80800314: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_16:
    // 0x80800318: beq         $v0, $zero, L_8080032C
    if (ctx->r2 == 0) {
        // 0x8080031C: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_8080032C;
    }
    // 0x8080031C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80800320: lui         $a1, 0x3FB3
    ctx->r5 = S32(0X3FB3 << 16);
    // 0x80800324: jal         0x8008B1BC
    // 0x80800328: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    func_8008B1BC(rdram, ctx);
        goto after_17;
    // 0x80800328: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    after_17:
L_8080032C:
    // 0x8080032C: jal         0x8008B324
    // 0x80800330: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_18;
    // 0x80800330: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_18:
    // 0x80800334: beq         $v0, $zero, L_80800340
    if (ctx->r2 == 0) {
        // 0x80800338: addiu       $t9, $zero, 0xBB
        ctx->r25 = ADD32(0, 0XBB);
            goto L_80800340;
    }
    // 0x80800338: addiu       $t9, $zero, 0xBB
    ctx->r25 = ADD32(0, 0XBB);
    // 0x8080033C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_80800340:
    // 0x80800340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800344:
    // 0x80800344: jal         0x8008DF8C
    // 0x80800348: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    func_8008DF8C(rdram, ctx);
        goto after_19;
    // 0x80800348: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_19:
    // 0x8080034C: beql        $v0, $zero, L_808003A8
    if (ctx->r2 == 0) {
        // 0x80800350: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_808003A8;
    }
    goto skip_2;
    // 0x80800350: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    skip_2:
    // 0x80800354: jal         0x8008B2B4
    // 0x80800358: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B2B4(rdram, ctx);
        goto after_20;
    // 0x80800358: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_20:
    // 0x8080035C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800360: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800368: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8080036C: nop

    // 0x80800370: bc1f        L_8080038C
    if (!c1cs) {
        // 0x80800374: nop
    
            goto L_8080038C;
    }
    // 0x80800374: nop

    // 0x80800378: jal         0x80091A30
    // 0x8080037C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_21;
    // 0x8080037C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_21:
    // 0x80800380: beq         $v0, $zero, L_8080038C
    if (ctx->r2 == 0) {
        // 0x80800384: nop
    
            goto L_8080038C;
    }
    // 0x80800384: nop

    // 0x80800388: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
L_8080038C:
    // 0x8080038C: jal         0x8008E078
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_22;
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80800394: beq         $v0, $zero, L_808003A4
    if (ctx->r2 == 0) {
        // 0x80800398: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003A4;
    }
    // 0x80800398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080039C: jal         0x8009B9B0
    // 0x808003A0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_23;
    // 0x808003A0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_23:
L_808003A4:
    // 0x808003A4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
L_808003A8:
    // 0x808003A8: jal         0x8008B348
    // 0x808003AC: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8008B348(rdram, ctx);
        goto after_24;
    // 0x808003AC: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_24:
    // 0x808003B0: beq         $v0, $zero, L_808003CC
    if (ctx->r2 == 0) {
        // 0x808003B4: lui         $a1, 0x3F0E
        ctx->r5 = S32(0X3F0E << 16);
            goto L_808003CC;
    }
    // 0x808003B4: lui         $a1, 0x3F0E
    ctx->r5 = S32(0X3F0E << 16);
    // 0x808003B8: lw          $t0, 0x15C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X15C);
    // 0x808003BC: addiu       $t1, $zero, 0xC1
    ctx->r9 = ADD32(0, 0XC1);
    // 0x808003C0: beql        $t0, $zero, L_808003D0
    if (ctx->r8 == 0) {
        // 0x808003C4: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_808003D0;
    }
    goto skip_3;
    // 0x808003C4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    skip_3:
    // 0x808003C8: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_808003CC:
    // 0x808003CC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
L_808003D0:
    // 0x808003D0: jal         0x8008B348
    // 0x808003D4: ori         $a1, $a1, 0x1B09
    ctx->r5 = ctx->r5 | 0X1B09;
    func_8008B348(rdram, ctx);
        goto after_25;
    // 0x808003D4: ori         $a1, $a1, 0x1B09
    ctx->r5 = ctx->r5 | 0X1B09;
    after_25:
    // 0x808003D8: beq         $v0, $zero, L_808003E8
    if (ctx->r2 == 0) {
        // 0x808003DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003E8;
    }
    // 0x808003DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003E0: jal         0x8009BA58
    // 0x808003E4: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    func_8009BA58(rdram, ctx);
        goto after_26;
    // 0x808003E4: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_26:
L_808003E8:
    // 0x808003E8: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x808003EC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x808003F0: nop

    // 0x808003F4: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x808003F8: nop

    // 0x808003FC: bc1fl       L_8080041C
    if (!c1cs) {
        // 0x80800400: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080041C;
    }
    goto skip_4;
    // 0x80800400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_4:
    // 0x80800404: jal         0x8008E35C
    // 0x80800408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_27;
    // 0x80800408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x8080040C: beq         $v0, $zero, L_80800418
    if (ctx->r2 == 0) {
        // 0x80800410: addiu       $t2, $zero, 0x160
        ctx->r10 = ADD32(0, 0X160);
            goto L_80800418;
    }
    // 0x80800410: addiu       $t2, $zero, 0x160
    ctx->r10 = ADD32(0, 0X160);
    // 0x80800414: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_80800418:
    // 0x80800418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080041C:
    // 0x8080041C: jal         0x8009E5C8
    // 0x80800420: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_28;
    // 0x80800420: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_28:
    // 0x80800424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800428: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080042C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800430: jr          $ra
    // 0x80800434: nop

    return;
    // 0x80800434: nop

;}
RECOMP_FUNC void bskazshock_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800438: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080043C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800440: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800444: jal         0x800C2FDC
    // 0x80800448: lbu         $a0, 0x164($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X164);
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x80800448: lbu         $a0, 0x164($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X164);
    after_0:
    // 0x8080044C: jal         0x80092BF4
    // 0x80800450: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80092BF4(rdram, ctx);
        goto after_1;
    // 0x80800450: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800454: jal         0x800832E8
    // 0x80800458: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bskaz_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80800458: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8080045C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800464: jr          $ra
    // 0x80800468: nop

    return;
    // 0x80800468: nop

;}
RECOMP_FUNC void bskazshock_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080046C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800470: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(124, 0X7A4) << 16);
    // 0x80800474: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800478: jr          $ra
    // 0x8080047C: lw          $v0, 0x7A4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(124, 0X7A4));
    return;
    // 0x8080047C: lw          $v0, 0x7A4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(124, 0X7A4));
;}
RECOMP_FUNC void bskazshock_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800480: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800484: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800488: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8080048C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800490: jal         0x8008CABC
    // 0x80800494: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800494: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800498: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8080049C: jal         0x800832E0
    // 0x808004A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x808004A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x808004A4: jal         0x8008AF24
    // 0x808004A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x808004A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808004AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004B0: jal         0x8008B1A0
    // 0x808004B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_3;
    // 0x808004B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x808004B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004BC: jal         0x8008AED4
    // 0x808004C0: addiu       $a1, $zero, 0x27A
    ctx->r5 = ADD32(0, 0X27A);
    func_8008AED4(rdram, ctx);
        goto after_4;
    // 0x808004C0: addiu       $a1, $zero, 0x27A
    ctx->r5 = ADD32(0, 0X27A);
    after_4:
    // 0x808004C4: lui         $a1, 0x3FCC
    ctx->r5 = S32(0X3FCC << 16);
    // 0x808004C8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808004CC: jal         0x8008B1BC
    // 0x808004D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_5;
    // 0x808004D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808004D4: lui         $a1, 0x3F14
    ctx->r5 = S32(0X3F14 << 16);
    // 0x808004D8: ori         $a1, $a1, 0xD6A1
    ctx->r5 = ctx->r5 | 0XD6A1;
    // 0x808004DC: jal         0x8008B24C
    // 0x808004E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_6;
    // 0x808004E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808004E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x808004EC: jal         0x8008B1D4
    // 0x808004F0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008B1D4(rdram, ctx);
        goto after_7;
    // 0x808004F0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_7:
    // 0x808004F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004F8: jal         0x8008B134
    // 0x808004FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x808004FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80800500: jal         0x8008B064
    // 0x80800504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_9;
    // 0x80800504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800508: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8080050C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800510: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800514: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800518: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080051C: jal         0x8009FFD8
    // 0x80800520: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_10;
    // 0x80800520: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_10:
    // 0x80800524: jal         0x8009EF04
    // 0x80800528: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EF04(rdram, ctx);
        goto after_11;
    // 0x80800528: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x8080052C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800530: nop

    // 0x80800534: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800538: nop

    // 0x8080053C: bc1t        L_80800558
    if (c1cs) {
        // 0x80800540: nop
    
            goto L_80800558;
    }
    // 0x80800540: nop

    // 0x80800544: jal         0x8009EEB8
    // 0x80800548: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_12;
    // 0x80800548: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x8080054C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800550: jal         0x8009C914
    // 0x80800554: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C914(rdram, ctx);
        goto after_13;
    // 0x80800554: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
L_80800558:
    // 0x80800558: jal         0x8009C990
    // 0x8080055C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_14;
    // 0x8080055C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x80800560: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800564: jal         0x8009B9C0
    // 0x80800568: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_15;
    // 0x80800568: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x8080056C: jal         0x800834B0
    // 0x80800570: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _bskazmove_entrypoint_0(rdram, ctx);
        goto after_16;
    // 0x80800570: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x80800574: jal         0x8009C990
    // 0x80800578: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_17;
    // 0x80800578: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x8080057C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800580: jal         0x8009BB00
    // 0x80800584: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BB00(rdram, ctx);
        goto after_18;
    // 0x80800584: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_18:
    // 0x80800588: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080058C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800590: jal         0x8009BA68
    // 0x80800594: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_19;
    // 0x80800594: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_19:
    // 0x80800598: lui         $a1, 0x44E3
    ctx->r5 = S32(0X44E3 << 16);
    // 0x8080059C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x808005A0: jal         0x8009BA58
    // 0x808005A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BA58(rdram, ctx);
        goto after_20;
    // 0x808005A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_20:
    // 0x808005A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808005AC: jal         0x8009BCB4
    // 0x808005B0: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_21;
    // 0x808005B0: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    after_21:
    // 0x808005B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808005B8: addiu       $a1, $zero, 0x408
    ctx->r5 = ADD32(0, 0X408);
    // 0x808005BC: jal         0x8009DBF0
    // 0x808005C0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DBF0(rdram, ctx);
        goto after_22;
    // 0x808005C0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_22:
    // 0x808005C4: jal         0x800C6DA0
    // 0x808005C8: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    func_800C6DA0(rdram, ctx);
        goto after_23;
    // 0x808005C8: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    after_23:
    // 0x808005CC: sw          $zero, 0x160($s1)
    MEM_W(0X160, ctx->r17) = 0;
    // 0x808005D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808005D4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808005D8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x808005DC: jr          $ra
    // 0x808005E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x808005E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void bskazshock_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005E4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808005E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808005EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808005F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808005F4: jal         0x8008CABC
    // 0x808005F8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808005F8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x808005FC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800600: jal         0x800834B0
    // 0x80800604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskazmove_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080060C: jal         0x8009BB24
    // 0x80800610: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8009BB24(rdram, ctx);
        goto after_2;
    // 0x80800610: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x80800614: lui         $a1, 0x3F1C
    ctx->r5 = S32(0X3F1C << 16);
    // 0x80800618: ori         $a1, $a1, 0x28F6
    ctx->r5 = ctx->r5 | 0X28F6;
    // 0x8080061C: jal         0x8008B348
    // 0x80800620: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_3;
    // 0x80800620: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x80800624: beq         $v0, $zero, L_80800638
    if (ctx->r2 == 0) {
        // 0x80800628: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800638;
    }
    // 0x80800628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080062C: addiu       $a1, $zero, 0x4598
    ctx->r5 = ADD32(0, 0X4598);
    // 0x80800630: jal         0x8009DF58
    // 0x80800634: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DF58(rdram, ctx);
        goto after_4;
    // 0x80800634: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_4:
L_80800638:
    // 0x80800638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080063C: jal         0x80091A30
    // 0x80800640: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_5;
    // 0x80800640: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_5:
    // 0x80800644: beq         $v0, $zero, L_8080066C
    if (ctx->r2 == 0) {
        // 0x80800648: lwc1        $f6, 0x2C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_8080066C;
    }
    // 0x80800648: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8080064C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800650: nop

    // 0x80800654: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800658: nop

    // 0x8080065C: bc1fl       L_80800670
    if (!c1cs) {
        // 0x80800660: lw          $t6, 0x160($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X160);
            goto L_80800670;
    }
    goto skip_0;
    // 0x80800660: lw          $t6, 0x160($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X160);
    skip_0:
    // 0x80800664: jal         0x8009BC6C
    // 0x80800668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_6;
    // 0x80800668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_8080066C:
    // 0x8080066C: lw          $t6, 0x160($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X160);
L_80800670:
    // 0x80800670: bne         $t6, $zero, L_808006A0
    if (ctx->r14 != 0) {
        // 0x80800674: nop
    
            goto L_808006A0;
    }
    // 0x80800674: nop

    // 0x80800678: jal         0x80000000
    // 0x8080067C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bskazshock_entrypoint_0(rdram, ctx);
        goto after_7;
    // 0x8080067C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800680: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800684: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80800688: addiu       $t7, $zero, 0xDF
    ctx->r15 = ADD32(0, 0XDF);
    // 0x8080068C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80800690: nop

    // 0x80800694: bc1f        L_808006A0
    if (!c1cs) {
        // 0x80800698: nop
    
            goto L_808006A0;
    }
    // 0x80800698: nop

    // 0x8080069C: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_808006A0:
    // 0x808006A0: jal         0x8008E078
    // 0x808006A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_8;
    // 0x808006A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808006A8: bnel        $v0, $zero, L_80800710
    if (ctx->r2 != 0) {
        // 0x808006AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800710;
    }
    goto skip_1;
    // 0x808006AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808006B0: jal         0x8008E260
    // 0x808006B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_9;
    // 0x808006B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808006B8: beq         $v0, $zero, L_808006C4
    if (ctx->r2 == 0) {
        // 0x808006BC: addiu       $t8, $zero, 0xE0
        ctx->r24 = ADD32(0, 0XE0);
            goto L_808006C4;
    }
    // 0x808006BC: addiu       $t8, $zero, 0xE0
    ctx->r24 = ADD32(0, 0XE0);
    // 0x808006C0: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_808006C4:
    // 0x808006C4: jal         0x80097D9C
    // 0x808006C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097D9C(rdram, ctx);
        goto after_10;
    // 0x808006C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808006CC: beq         $v0, $zero, L_808006D8
    if (ctx->r2 == 0) {
        // 0x808006D0: addiu       $t9, $zero, 0x15C
        ctx->r25 = ADD32(0, 0X15C);
            goto L_808006D8;
    }
    // 0x808006D0: addiu       $t9, $zero, 0x15C
    ctx->r25 = ADD32(0, 0X15C);
    // 0x808006D4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_808006D8:
    // 0x808006D8: jal         0x8009BB50
    // 0x808006DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_11;
    // 0x808006DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808006E0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x808006E4: nop

    // 0x808006E8: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x808006EC: nop

    // 0x808006F0: bc1fl       L_80800710
    if (!c1cs) {
        // 0x808006F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800710;
    }
    goto skip_2;
    // 0x808006F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x808006F8: jal         0x80097E74
    // 0x808006FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097E74(rdram, ctx);
        goto after_12;
    // 0x808006FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800700: beq         $v0, $zero, L_8080070C
    if (ctx->r2 == 0) {
        // 0x80800704: addiu       $t0, $zero, 0xBE
        ctx->r8 = ADD32(0, 0XBE);
            goto L_8080070C;
    }
    // 0x80800704: addiu       $t0, $zero, 0xBE
    ctx->r8 = ADD32(0, 0XBE);
    // 0x80800708: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_8080070C:
    // 0x8080070C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800710:
    // 0x80800710: jal         0x8009E5C8
    // 0x80800714: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_13;
    // 0x80800714: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_13:
    // 0x80800718: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080071C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800720: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800724: jr          $ra
    // 0x80800728: nop

    return;
    // 0x80800728: nop

;}
RECOMP_FUNC void bskazshock_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080072C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800730: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800734: jal         0x8009BC6C
    // 0x80800738: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x80800738: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080073C: jal         0x800832E8
    // 0x80800740: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bskaz_entrypoint_2(rdram, ctx);
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
RECOMP_FUNC void bskazshock_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800754: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800758: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(124, 0X7B4) << 16);
    // 0x8080075C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800760: jr          $ra
    // 0x80800764: lw          $v0, 0x7B4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(124, 0X7B4));
    return;
    // 0x80800764: lw          $v0, 0x7B4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(124, 0X7B4));
    // 0x80800768: nop

    // 0x8080076C: nop

;}
RECOMP_FUNC void func_80800000_bskazshoesspringjump(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800004: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800008: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080000C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800010: beq         $a1, $zero, L_80800038
    if (ctx->r5 == 0) {
        // 0x80800014: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_80800038;
    }
    // 0x80800014: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80800018: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080001C: beq         $a1, $at, L_80800048
    if (ctx->r5 == ctx->r1) {
        // 0x80800020: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800048;
    }
    // 0x80800020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800024: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800028: beq         $a1, $at, L_80800098
    if (ctx->r5 == ctx->r1) {
        // 0x8080002C: nop
    
            goto L_80800098;
    }
    // 0x8080002C: nop

    // 0x80800030: b           L_808000EC
    // 0x80800034: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
        goto L_808000EC;
    // 0x80800034: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_80800038:
    // 0x80800038: jal         0x8009BC6C
    // 0x8080003C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x8080003C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80800040: b           L_808000EC
    // 0x80800044: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
        goto L_808000EC;
    // 0x80800044: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_80800048:
    // 0x80800048: lui         $a2, 0x3FF3
    ctx->r6 = S32(0X3FF3 << 16);
    // 0x8080004C: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800050: jal         0x8008CCBC
    // 0x80800054: addiu       $a1, $zero, 0x24C
    ctx->r5 = ADD32(0, 0X24C);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x80800054: addiu       $a1, $zero, 0x24C
    ctx->r5 = ADD32(0, 0X24C);
    after_1:
    // 0x80800058: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x8080005C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800064: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800068: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080006C: jal         0x8009FFD8
    // 0x80800070: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800070: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x80800074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800078: jal         0x8009B9B0
    // 0x8080007C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x8080007C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800080: lui         $a1, 0xC528
    ctx->r5 = S32(0XC528 << 16);
    // 0x80800084: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x80800088: jal         0x8009BCB4
    // 0x8080008C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCB4(rdram, ctx);
        goto after_4;
    // 0x8080008C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800090: b           L_808000EC
    // 0x80800094: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
        goto L_808000EC;
    // 0x80800094: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_80800098:
    // 0x80800098: jal         0x80085060
    // 0x8080009C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_17(rdram, ctx);
        goto after_5;
    // 0x8080009C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808000A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000A4: jal         0x8009B800
    // 0x808000A8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8009B800(rdram, ctx);
        goto after_6;
    // 0x808000A8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_6:
    // 0x808000AC: lui         $a1, 0x4548
    ctx->r5 = S32(0X4548 << 16);
    // 0x808000B0: ori         $a1, $a1, 0x7000
    ctx->r5 = ctx->r5 | 0X7000;
    // 0x808000B4: jal         0x8009BA58
    // 0x808000B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_7;
    // 0x808000B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808000BC: lui         $a2, 0x3F73
    ctx->r6 = S32(0X3F73 << 16);
    // 0x808000C0: lui         $a3, 0x3F86
    ctx->r7 = S32(0X3F86 << 16);
    // 0x808000C4: addiu       $t8, $zero, 0x7FFF
    ctx->r24 = ADD32(0, 0X7FFF);
    // 0x808000C8: addiu       $t9, $zero, 0x7FFF
    ctx->r25 = ADD32(0, 0X7FFF);
    // 0x808000CC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x808000D0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x808000D4: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x808000D8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E0: jal         0x8009DEC0
    // 0x808000E4: addiu       $a1, $zero, 0x4598
    ctx->r5 = ADD32(0, 0X4598);
    func_8009DEC0(rdram, ctx);
        goto after_8;
    // 0x808000E4: addiu       $a1, $zero, 0x4598
    ctx->r5 = ADD32(0, 0X4598);
    after_8:
    // 0x808000E8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_808000EC:
    // 0x808000EC: sw          $t0, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r8;
    // 0x808000F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808000F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808000F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808000FC: jr          $ra
    // 0x80800100: nop

    return;
    // 0x80800100: nop

;}
RECOMP_FUNC void bskazshoesspringjump_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800104: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800108: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080010C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800110: jal         0x80000000
    // 0x80800114: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800000_bskazshoesspringjump(rdram, ctx);
        goto after_0;
    // 0x80800114: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800118: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080011C: jal         0x80085008
    // 0x80800120: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bashoes_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x80800120: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80800124: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800128: jal         0x80085000
    // 0x8080012C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bashoes_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x8080012C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800130: jal         0x800832E8
    // 0x80800134: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bskaz_entrypoint_2(rdram, ctx);
        goto after_3;
    // 0x80800134: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80800138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080013C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800140: jr          $ra
    // 0x80800144: nop

    return;
    // 0x80800144: nop

;}
RECOMP_FUNC void bskazshoesspringjump_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800148: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080014C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800150: jal         0x800832E0
    // 0x80800154: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800154: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800158: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080015C: jal         0x80085000
    // 0x80800160: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bashoes_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800160: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800164: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800168: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080016C: jal         0x80000000
    // 0x80800170: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    func_80800000_bskazshoesspringjump(rdram, ctx);
        goto after_2;
    // 0x80800170: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    after_2:
    // 0x80800174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080017C: jr          $ra
    // 0x80800180: nop

    return;
    // 0x80800180: nop

;}
RECOMP_FUNC void bskazshoesspringjump_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800184: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800188: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080018C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800190: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80800194: lw          $v0, 0x15C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X15C);
    // 0x80800198: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080019C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808001A0: beq         $v0, $at, L_808001BC
    if (ctx->r2 == ctx->r1) {
        // 0x808001A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001BC;
    }
    // 0x808001A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808001AC: beq         $v0, $at, L_808001E0
    if (ctx->r2 == ctx->r1) {
        // 0x808001B0: nop
    
            goto L_808001E0;
    }
    // 0x808001B0: nop

    // 0x808001B4: b           L_80800228
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800228;
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808001BC:
    // 0x808001BC: lui         $a1, 0x3EF2
    ctx->r5 = S32(0X3EF2 << 16);
    // 0x808001C0: jal         0x8008CB10
    // 0x808001C4: ori         $a1, $a1, 0xE48F
    ctx->r5 = ctx->r5 | 0XE48F;
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x808001C4: ori         $a1, $a1, 0xE48F
    ctx->r5 = ctx->r5 | 0XE48F;
    after_0:
    // 0x808001C8: beq         $v0, $zero, L_80800224
    if (ctx->r2 == 0) {
        // 0x808001CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800224;
    }
    // 0x808001CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D0: jal         0x80000000
    // 0x808001D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800000_bskazshoesspringjump(rdram, ctx);
        goto after_1;
    // 0x808001D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x808001D8: b           L_80800228
    // 0x808001DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800228;
    // 0x808001DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808001E0:
    // 0x808001E0: jal         0x8008CAC8
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_2;
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808001E8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(125, 0X260) << 16);
    // 0x808001EC: lwc1        $f4, 0x260($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(125, 0X260));
    // 0x808001F0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x808001F4: nop

    // 0x808001F8: bc1f        L_80800208
    if (!c1cs) {
        // 0x808001FC: nop
    
            goto L_80800208;
    }
    // 0x808001FC: nop

    // 0x80800200: jal         0x80085058
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_16(rdram, ctx);
        goto after_3;
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80800208:
    // 0x80800208: jal         0x800834B0
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskazmove_entrypoint_0(rdram, ctx);
        goto after_4;
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800210: jal         0x8008CAEC
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_5;
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800218: beq         $v0, $zero, L_80800224
    if (ctx->r2 == 0) {
        // 0x8080021C: addiu       $t6, $zero, 0xDF
        ctx->r14 = ADD32(0, 0XDF);
            goto L_80800224;
    }
    // 0x8080021C: addiu       $t6, $zero, 0xDF
    ctx->r14 = ADD32(0, 0XDF);
    // 0x80800220: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800224:
    // 0x80800224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800228:
    // 0x80800228: jal         0x8009E5C8
    // 0x8080022C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x8080022C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x80800230: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800234: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800238: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080023C: jr          $ra
    // 0x80800240: nop

    return;
    // 0x80800240: nop

;}
RECOMP_FUNC void bskazshoesspringjump_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800244: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800248: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(125, 0X270) << 16);
    // 0x8080024C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800250: jr          $ra
    // 0x80800254: lw          $v0, 0x270($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(125, 0X270));
    return;
    // 0x80800254: lw          $v0, 0x270($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(125, 0X270));
    // 0x80800258: nop

    // 0x8080025C: nop

;}
RECOMP_FUNC void bskazshoessuckspline_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080000C: jal         0x80084FE0
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bashoes_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800014: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800018: bne         $v0, $at, L_80800088
    if (ctx->r2 != ctx->r1) {
        // 0x8080001C: nop
    
            goto L_80800088;
    }
    // 0x8080001C: nop

    // 0x80800020: jal         0x8009E6EC
    // 0x80800024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E6EC(rdram, ctx);
        goto after_1;
    // 0x80800024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800028: addiu       $at, $zero, 0x58
    ctx->r1 = ADD32(0, 0X58);
    // 0x8080002C: bne         $v0, $at, L_80800088
    if (ctx->r2 != ctx->r1) {
        // 0x80800030: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800088;
    }
    // 0x80800030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800034: jal         0x80095738
    // 0x80800038: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    func_80095738(rdram, ctx);
        goto after_2;
    // 0x80800038: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    after_2:
    // 0x8080003C: bne         $v0, $zero, L_80800090
    if (ctx->r2 != 0) {
        // 0x80800040: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800090;
    }
    // 0x80800040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800044: jal         0x80099A7C
    // 0x80800048: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80099A7C(rdram, ctx);
        goto after_3;
    // 0x80800048: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x8080004C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800050: jal         0x800850A8
    // 0x80800054: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    _bashoessuck_entrypoint_5(rdram, ctx);
        goto after_4;
    // 0x80800054: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_4:
    // 0x80800058: beq         $v0, $zero, L_80800090
    if (ctx->r2 == 0) {
        // 0x8080005C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800090;
    }
    // 0x8080005C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800060: jal         0x80095760
    // 0x80800064: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    func_80095760(rdram, ctx);
        goto after_5;
    // 0x80800064: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    after_5:
    // 0x80800068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080006C: jal         0x8009E5C8
    // 0x80800070: addiu       $a1, $zero, 0x188
    ctx->r5 = ADD32(0, 0X188);
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x80800070: addiu       $a1, $zero, 0x188
    ctx->r5 = ADD32(0, 0X188);
    after_6:
    // 0x80800074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800078: jal         0x8009E830
    // 0x8080007C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_7;
    // 0x8080007C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x80800080: b           L_80800094
    // 0x80800084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800094;
    // 0x80800084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800088:
    // 0x80800088: jal         0x80099B94
    // 0x8080008C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099B94(rdram, ctx);
        goto after_8;
    // 0x8080008C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_80800090:
    // 0x80800090: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800094:
    // 0x80800094: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800098: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080009C: jr          $ra
    // 0x808000A0: nop

    return;
    // 0x808000A0: nop

;}
RECOMP_FUNC void func_808000A4_bskazshoessuckspline(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000B0: jal         0x8009E710
    // 0x808000B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E710(rdram, ctx);
        goto after_0;
    // 0x808000B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808000B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000BC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x808000C0: jal         0x8009CA70
    // 0x808000C4: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    func_8009CA70(rdram, ctx);
        goto after_1;
    // 0x808000C4: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    after_1:
    // 0x808000C8: bnel        $v0, $zero, L_80800100
    if (ctx->r2 != 0) {
        // 0x808000CC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800100;
    }
    goto skip_0;
    // 0x808000CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808000D0: jal         0x80085098
    // 0x808000D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoessuck_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x808000D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808000D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000DC: jal         0x80092880
    // 0x808000E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80092880(rdram, ctx);
        goto after_3;
    // 0x808000E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x808000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E8: jal         0x800A2018
    // 0x808000EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800A2018(rdram, ctx);
        goto after_4;
    // 0x808000EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x808000F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F4: jal         0x800A4DA4
    // 0x808000F8: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    func_800A4DA4(rdram, ctx);
        goto after_5;
    // 0x808000F8: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_5:
    // 0x808000FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800100:
    // 0x80800100: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800104: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800108: jr          $ra
    // 0x8080010C: nop

    return;
    // 0x8080010C: nop

;}
RECOMP_FUNC void func_80800110_bskazshoessuckspline(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800110: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800114: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800118: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080011C: jal         0x8009E704
    // 0x80800120: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E704(rdram, ctx);
        goto after_0;
    // 0x80800120: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800128: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8080012C: jal         0x8009CA70
    // 0x80800130: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    func_8009CA70(rdram, ctx);
        goto after_1;
    // 0x80800130: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    after_1:
    // 0x80800134: bnel        $v0, $zero, L_80800174
    if (ctx->r2 != 0) {
        // 0x80800138: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800174;
    }
    goto skip_0;
    // 0x80800138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8080013C: jal         0x80085090
    // 0x80800140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoessuck_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80800140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800148: jal         0x80095774
    // 0x8080014C: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    func_80095774(rdram, ctx);
        goto after_3;
    // 0x8080014C: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    after_3:
    // 0x80800150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800154: jal         0x80092880
    // 0x80800158: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80092880(rdram, ctx);
        goto after_4;
    // 0x80800158: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8080015C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800160: jal         0x800A2018
    // 0x80800164: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800A2018(rdram, ctx);
        goto after_5;
    // 0x80800164: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_5:
    // 0x80800168: jal         0x800A4E30
    // 0x8080016C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4E30(rdram, ctx);
        goto after_6;
    // 0x8080016C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800170: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800174:
    // 0x80800174: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800178: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080017C: jr          $ra
    // 0x80800180: nop

    return;
    // 0x80800180: nop

;}
RECOMP_FUNC void bskazshoessuckspline_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800184: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080018C: jal         0x80000110
    // 0x80800190: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800110_bskazshoessuckspline(rdram, ctx);
        goto after_0;
    // 0x80800190: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800194: jal         0x800832E8
    // 0x80800198: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bskaz_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800198: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080019C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001A4: jr          $ra
    // 0x808001A8: nop

    return;
    // 0x808001A8: nop

;}
RECOMP_FUNC void bskazshoessuckspline_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001B4: jal         0x800832E0
    // 0x808001B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808001B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001BC: jal         0x800000A4
    // 0x808001C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_808000A4_bskazshoessuckspline(rdram, ctx);
        goto after_1;
    // 0x808001C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808001C4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808001C8: jal         0x800834D8
    // 0x808001CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    _bskazmove_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x808001CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x808001D0: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x808001D4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808001D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808001DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808001E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808001E4: jal         0x8009FFD8
    // 0x808001E8: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_8009FFD8(rdram, ctx);
        goto after_3;
    // 0x808001E8: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_3:
    // 0x808001EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808001F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001F4: jr          $ra
    // 0x808001F8: nop

    return;
    // 0x808001F8: nop

;}
RECOMP_FUNC void bskazshoessuckspline_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800200: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800204: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800208: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080020C: jal         0x800956B8
    // 0x80800210: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_800956B8(rdram, ctx);
        goto after_0;
    // 0x80800210: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x80800214: jal         0x800834E0
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskazmove_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080021C: jal         0x800834B0
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskazmove_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800224: jal         0x800850A0
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoessuck_entrypoint_4(rdram, ctx);
        goto after_3;
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080022C: jal         0x8009EF10
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_4;
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800234: bne         $v0, $zero, L_80800250
    if (ctx->r2 != 0) {
        // 0x80800238: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800250;
    }
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080023C: jal         0x8009BCD4
    // 0x80800240: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_5;
    // 0x80800240: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_5:
    // 0x80800244: beq         $v0, $zero, L_80800250
    if (ctx->r2 == 0) {
        // 0x80800248: addiu       $t6, $zero, 0x187
        ctx->r14 = ADD32(0, 0X187);
            goto L_80800250;
    }
    // 0x80800248: addiu       $t6, $zero, 0x187
    ctx->r14 = ADD32(0, 0X187);
    // 0x8080024C: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
L_80800250:
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800254: jal         0x80091A58
    // 0x80800258: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_6;
    // 0x80800258: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_6:
    // 0x8080025C: beql        $v0, $zero, L_80800274
    if (ctx->r2 == 0) {
        // 0x80800260: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800274;
    }
    goto skip_0;
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800264: jal         0x800832F0
    // 0x80800268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskaz_entrypoint_3(rdram, ctx);
        goto after_7;
    // 0x80800268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080026C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80800270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800274:
    // 0x80800274: jal         0x80084E80
    // 0x80800278: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    _bamovespline_entrypoint_1(rdram, ctx);
        goto after_8;
    // 0x80800278: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_8:
    // 0x8080027C: bnel        $v0, $zero, L_80800298
    if (ctx->r2 != 0) {
        // 0x80800280: addiu       $t7, $zero, 0xDF
        ctx->r15 = ADD32(0, 0XDF);
            goto L_80800298;
    }
    goto skip_1;
    // 0x80800280: addiu       $t7, $zero, 0xDF
    ctx->r15 = ADD32(0, 0XDF);
    skip_1:
    // 0x80800284: jal         0x80084FE0
    // 0x80800288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_1(rdram, ctx);
        goto after_9;
    // 0x80800288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080028C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800290: beq         $v0, $at, L_8080029C
    if (ctx->r2 == ctx->r1) {
        // 0x80800294: addiu       $t7, $zero, 0xDF
        ctx->r15 = ADD32(0, 0XDF);
            goto L_8080029C;
    }
    // 0x80800294: addiu       $t7, $zero, 0xDF
    ctx->r15 = ADD32(0, 0XDF);
L_80800298:
    // 0x80800298: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
L_8080029C:
    // 0x8080029C: jal         0x80084E90
    // 0x808002A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovespline_entrypoint_3(rdram, ctx);
        goto after_10;
    // 0x808002A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808002A4: beq         $v0, $zero, L_808002B0
    if (ctx->r2 == 0) {
        // 0x808002A8: addiu       $t8, $zero, 0xC7
        ctx->r24 = ADD32(0, 0XC7);
            goto L_808002B0;
    }
    // 0x808002A8: addiu       $t8, $zero, 0xC7
    ctx->r24 = ADD32(0, 0XC7);
    // 0x808002AC: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_808002B0:
    // 0x808002B0: jal         0x80084E88
    // 0x808002B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovespline_entrypoint_2(rdram, ctx);
        goto after_11;
    // 0x808002B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808002B8: beql        $v0, $zero, L_808002FC
    if (ctx->r2 == 0) {
        // 0x808002BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002FC;
    }
    goto skip_2;
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x808002C0: jal         0x80084FE8
    // 0x808002C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_2(rdram, ctx);
        goto after_12;
    // 0x808002C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808002C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808002CC: bne         $v0, $at, L_808002F4
    if (ctx->r2 != ctx->r1) {
        // 0x808002D0: addiu       $t9, $zero, 0xC7
        ctx->r25 = ADD32(0, 0XC7);
            goto L_808002F4;
    }
    // 0x808002D0: addiu       $t9, $zero, 0xC7
    ctx->r25 = ADD32(0, 0XC7);
    // 0x808002D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002D8: jal         0x80085088
    // 0x808002DC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    _bashoessuck_entrypoint_1(rdram, ctx);
        goto after_13;
    // 0x808002DC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_13:
    // 0x808002E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002E4: jal         0x800848A0
    // 0x808002E8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    _badrone_entrypoint_23(rdram, ctx);
        goto after_14;
    // 0x808002E8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_14:
    // 0x808002EC: b           L_808002F8
    // 0x808002F0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
        goto L_808002F8;
    // 0x808002F0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_808002F4:
    // 0x808002F4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_808002F8:
    // 0x808002F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808002FC:
    // 0x808002FC: jal         0x8009E5C8
    // 0x80800300: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_15;
    // 0x80800300: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_15:
    // 0x80800304: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800308: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080030C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800310: jr          $ra
    // 0x80800314: nop

    return;
    // 0x80800314: nop

;}
RECOMP_FUNC void bskazshoessuckspline_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800318: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080031C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(126, 0X470) << 16);
    // 0x80800320: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800324: jr          $ra
    // 0x80800328: lw          $v0, 0x470($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(126, 0X470));
    return;
    // 0x80800328: lw          $v0, 0x470($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(126, 0X470));
;}
RECOMP_FUNC void bskazshoessuckspline_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080032C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800330: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800334: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800338: jal         0x800832E0
    // 0x8080033C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080033C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800340: jal         0x800000A4
    // 0x80800344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000A4_bskazshoessuckspline(rdram, ctx);
        goto after_1;
    // 0x80800344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080034C: addiu       $a1, $zero, 0xA4
    ctx->r5 = ADD32(0, 0XA4);
    // 0x80800350: jal         0x8008CB3C
    // 0x80800354: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_2;
    // 0x80800354: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_2:
    // 0x80800358: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x8080035C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800364: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800368: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080036C: jal         0x8009FFD8
    // 0x80800370: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_8009FFD8(rdram, ctx);
        goto after_3;
    // 0x80800370: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_3:
    // 0x80800374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800378: jal         0x8009B9B0
    // 0x8080037C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x8080037C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800380: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800384: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800388: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080038C: jr          $ra
    // 0x80800390: nop

    return;
    // 0x80800390: nop

;}
RECOMP_FUNC void bskazshoessuckspline_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800394: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800398: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080039C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808003A0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808003A4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808003A8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x808003AC: jal         0x80095738
    // 0x808003B0: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    func_80095738(rdram, ctx);
        goto after_0;
    // 0x808003B0: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    after_0:
    // 0x808003B4: beq         $v0, $zero, L_808003F0
    if (ctx->r2 == 0) {
        // 0x808003B8: nop
    
            goto L_808003F0;
    }
    // 0x808003B8: nop

    // 0x808003BC: jal         0x80084FE0
    // 0x808003C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _bashoes_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x808003C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x808003C4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808003C8: bne         $v0, $at, L_808003F0
    if (ctx->r2 != ctx->r1) {
        // 0x808003CC: nop
    
            goto L_808003F0;
    }
    // 0x808003CC: nop

    // 0x808003D0: jal         0x800850A0
    // 0x808003D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _bashoessuck_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x808003D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x808003D8: jal         0x8009EF10
    // 0x808003DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EF10(rdram, ctx);
        goto after_3;
    // 0x808003DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x808003E0: blezl       $v0, L_8080040C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x808003E4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8080040C;
    }
    goto skip_0;
    // 0x808003E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x808003E8: b           L_80800408
    // 0x808003EC: addiu       $s0, $zero, 0x188
    ctx->r16 = ADD32(0, 0X188);
        goto L_80800408;
    // 0x808003EC: addiu       $s0, $zero, 0x188
    ctx->r16 = ADD32(0, 0X188);
L_808003F0:
    // 0x808003F0: jal         0x8008DD04
    // 0x808003F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008DD04(rdram, ctx);
        goto after_4;
    // 0x808003F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x808003F8: beq         $v0, $zero, L_80800408
    if (ctx->r2 == 0) {
        // 0x808003FC: addiu       $s0, $zero, 0xBB
        ctx->r16 = ADD32(0, 0XBB);
            goto L_80800408;
    }
    // 0x808003FC: addiu       $s0, $zero, 0xBB
    ctx->r16 = ADD32(0, 0XBB);
    // 0x80800400: b           L_80800408
    // 0x80800404: addiu       $s0, $zero, 0xDF
    ctx->r16 = ADD32(0, 0XDF);
        goto L_80800408;
    // 0x80800404: addiu       $s0, $zero, 0xDF
    ctx->r16 = ADD32(0, 0XDF);
L_80800408:
    // 0x80800408: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_8080040C:
    // 0x8080040C: jal         0x8009E5C8
    // 0x80800410: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_5;
    // 0x80800410: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x80800414: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800418: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8080041C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800420: jr          $ra
    // 0x80800424: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800424: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bskazshoessuckspline_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800428: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080042C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800430: jal         0x80000110
    // 0x80800434: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800110_bskazshoessuckspline(rdram, ctx);
        goto after_0;
    // 0x80800434: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800438: jal         0x800832E8
    // 0x8080043C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bskaz_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x8080043C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800448: jr          $ra
    // 0x8080044C: nop

    return;
    // 0x8080044C: nop

;}
RECOMP_FUNC void bskazshoessuckspline_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800450: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800454: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(126, 0X480) << 16);
    // 0x80800458: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080045C: jr          $ra
    // 0x80800460: lw          $v0, 0x480($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(126, 0X480));
    return;
    // 0x80800460: lw          $v0, 0x480($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(126, 0X480));
    // 0x80800464: nop

    // 0x80800468: nop

    // 0x8080046C: nop

;}
RECOMP_FUNC void func_80800000_bskazspring(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x8080001C: beq         $v0, $zero, L_8080004C
    if (ctx->r2 == 0) {
        // 0x80800020: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8080004C;
    }
    // 0x80800020: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800024: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80800028: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8080002C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80800030: jal         0x800F1214
    // 0x80800034: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    func_800F1214(rdram, ctx);
        goto after_2;
    // 0x80800034: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    after_2:
    // 0x80800038: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080003C: jal         0x8009B9B0
    // 0x80800040: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80800040: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x80800044: b           L_80800058
    // 0x80800048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800058;
    // 0x80800048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080004C:
    // 0x8080004C: jal         0x8009B9B0
    // 0x80800050: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800050: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
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
RECOMP_FUNC void func_80800064_bskazspring(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800064: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800068: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080006C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800070: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800074: beq         $a1, $zero, L_808000A8
    if (ctx->r5 == 0) {
        // 0x80800078: sw          $a1, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r5;
            goto L_808000A8;
    }
    // 0x80800078: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8080007C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800080: beq         $a1, $at, L_808000C8
    if (ctx->r5 == ctx->r1) {
        // 0x80800084: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000C8;
    }
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800088: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080008C: beq         $a1, $at, L_80800168
    if (ctx->r5 == ctx->r1) {
        // 0x80800090: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800168;
    }
    // 0x80800090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800094: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800098: beq         $a1, $at, L_80800218
    if (ctx->r5 == ctx->r1) {
        // 0x8080009C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800218;
    }
    // 0x8080009C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000A0: b           L_8080022C
    // 0x808000A4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
        goto L_8080022C;
    // 0x808000A4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
L_808000A8:
    // 0x808000A8: jal         0x8009EF60
    // 0x808000AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF60(rdram, ctx);
        goto after_0;
    // 0x808000AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x808000B0: jal         0x8009BC6C
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_1;
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808000B8: jal         0x8009BC90
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC90(rdram, ctx);
        goto after_2;
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808000C0: b           L_8080022C
    // 0x808000C4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
        goto L_8080022C;
    // 0x808000C4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
L_808000C8:
    // 0x808000C8: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x808000CC: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808000D0: jal         0x8008CCBC
    // 0x808000D4: addiu       $a1, $zero, 0x142
    ctx->r5 = ADD32(0, 0X142);
    func_8008CCBC(rdram, ctx);
        goto after_3;
    // 0x808000D4: addiu       $a1, $zero, 0x142
    ctx->r5 = ADD32(0, 0X142);
    after_3:
    // 0x808000D8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x808000DC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808000EC: jal         0x8009FFD8
    // 0x808000F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_4;
    // 0x808000F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x808000F4: jal         0x8009BB00
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_5;
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808000FC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(127, 0X420) << 16);
    // 0x80800100: lwc1        $f4, 0x420($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(127, 0X420));
    // 0x80800104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800108: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8080010C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80800110: jal         0x8009B9B0
    // 0x80800114: nop

    func_8009B9B0(rdram, ctx);
        goto after_6;
    // 0x80800114: nop

    after_6:
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080011C: jal         0x8009BCB4
    // 0x80800120: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_7;
    // 0x80800120: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    after_7:
    // 0x80800124: lui         $a1, 0xC405
    ctx->r5 = S32(0XC405 << 16);
    // 0x80800128: ori         $a1, $a1, 0x5333
    ctx->r5 = ctx->r5 | 0X5333;
    // 0x8080012C: jal         0x8009BCC4
    // 0x80800130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_8;
    // 0x80800130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800134: jal         0x8009EFA8
    // 0x80800138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EFA8(rdram, ctx);
        goto after_9;
    // 0x80800138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080013C: lui         $a2, 0x3CF5
    ctx->r6 = S32(0X3CF5 << 16);
    // 0x80800140: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800148: jal         0x8009F1C8
    // 0x8080014C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_10;
    // 0x8080014C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80800150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800154: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800158: jal         0x8009F1C8
    // 0x8080015C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_11;
    // 0x8080015C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_11:
    // 0x80800160: b           L_80800228
    // 0x80800164: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
        goto L_80800228;
    // 0x80800164: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
L_80800168:
    // 0x80800168: jal         0x8009C908
    // 0x8080016C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009C908(rdram, ctx);
        goto after_12;
    // 0x8080016C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800174: jal         0x8009D2D8
    // 0x80800178: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009D2D8(rdram, ctx);
        goto after_13;
    // 0x80800178: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_13:
    // 0x8080017C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800180: jal         0x8009C9C8
    // 0x80800184: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009C9C8(rdram, ctx);
        goto after_14;
    // 0x80800184: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_14:
    // 0x80800188: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x8080018C: addiu       $t8, $t8, -0x10FC
    ctx->r24 = ADD32(ctx->r24, -0X10FC);
    // 0x80800190: beq         $t8, $zero, L_808001AC
    if (ctx->r24 == 0) {
        // 0x80800194: nop
    
            goto L_808001AC;
    }
    // 0x80800194: nop

    // 0x80800198: jal         0x8009EEB8
    // 0x8080019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_15;
    // 0x8080019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808001A0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808001A4: jal         0x8009C914
    // 0x808001A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_16;
    // 0x808001A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
L_808001AC:
    // 0x808001AC: jal         0x8009C990
    // 0x808001B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_17;
    // 0x808001B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x808001B4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808001B8: jal         0x8009B9C0
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_18;
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x808001C0: jal         0x8009C990
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_19;
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x808001C8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x808001CC: jal         0x8009BB00
    // 0x808001D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_20;
    // 0x808001D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x808001D4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001DC: jal         0x8009BA68
    // 0x808001E0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_21;
    // 0x808001E0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_21:
    // 0x808001E4: jal         0x80000000
    // 0x808001E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bskazspring(rdram, ctx);
        goto after_22;
    // 0x808001E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x808001EC: lui         $a1, 0x44A1
    ctx->r5 = S32(0X44A1 << 16);
    // 0x808001F0: ori         $a1, $a1, 0xA000
    ctx->r5 = ctx->r5 | 0XA000;
    // 0x808001F4: jal         0x8009BA58
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_23;
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x808001FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800200: addiu       $a1, $zero, 0x45A5
    ctx->r5 = ADD32(0, 0X45A5);
    // 0x80800204: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800208: jal         0x8009DF18
    // 0x8080020C: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DF18(rdram, ctx);
        goto after_24;
    // 0x8080020C: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_24:
    // 0x80800210: b           L_8080022C
    // 0x80800214: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
        goto L_8080022C;
    // 0x80800214: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
L_80800218:
    // 0x80800218: lui         $a2, 0x3E38
    ctx->r6 = S32(0X3E38 << 16);
    // 0x8080021C: ori         $a2, $a2, 0x51EC
    ctx->r6 = ctx->r6 | 0X51EC;
    // 0x80800220: jal         0x8008CB3C
    // 0x80800224: addiu       $a1, $zero, 0x288
    ctx->r5 = ADD32(0, 0X288);
    func_8008CB3C(rdram, ctx);
        goto after_25;
    // 0x80800224: addiu       $a1, $zero, 0x288
    ctx->r5 = ADD32(0, 0X288);
    after_25:
L_80800228:
    // 0x80800228: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
L_8080022C:
    // 0x8080022C: sb          $t9, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r25;
    // 0x80800230: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800234: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800238: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8080023C: jr          $ra
    // 0x80800240: nop

    return;
    // 0x80800240: nop

;}
RECOMP_FUNC void func_80800244_bskazspring(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800244: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800248: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080024C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800250: jal         0x80000064
    // 0x80800254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800064_bskazspring(rdram, ctx);
        goto after_0;
    // 0x80800254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800258: jal         0x800832E8
    // 0x8080025C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bskaz_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x8080025C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800264: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800268: jr          $ra
    // 0x8080026C: nop

    return;
    // 0x8080026C: nop

;}
RECOMP_FUNC void func_80800270_bskazspring(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800270: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800274: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800278: jal         0x800832E0
    // 0x8080027C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080027C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800280: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800284: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800288: jal         0x80000064
    // 0x8080028C: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
    func_80800064_bskazspring(rdram, ctx);
        goto after_1;
    // 0x8080028C: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
    after_1:
    // 0x80800290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800298: jr          $ra
    // 0x8080029C: nop

    return;
    // 0x8080029C: nop

;}
RECOMP_FUNC void func_808002A0_bskazspring(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808002A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808002AC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x808002B0: lbu         $v0, 0x15C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X15C);
    // 0x808002B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808002B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808002BC: beq         $v0, $at, L_808002E0
    if (ctx->r2 == ctx->r1) {
        // 0x808002C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002E0;
    }
    // 0x808002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808002C8: beq         $v0, $at, L_80800330
    if (ctx->r2 == ctx->r1) {
        // 0x808002CC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800330;
    }
    // 0x808002CC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808002D0: beq         $v0, $at, L_80800358
    if (ctx->r2 == ctx->r1) {
        // 0x808002D4: nop
    
            goto L_80800358;
    }
    // 0x808002D4: nop

    // 0x808002D8: b           L_80800390
    // 0x808002DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800390;
    // 0x808002DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808002E0:
    // 0x808002E0: lui         $a1, 0x3E61
    ctx->r5 = S32(0X3E61 << 16);
    // 0x808002E4: jal         0x8008CB10
    // 0x808002E8: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x808002E8: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    after_0:
    // 0x808002EC: beq         $v0, $zero, L_80800308
    if (ctx->r2 == 0) {
        // 0x808002F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800308;
    }
    // 0x808002F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002F4: lui         $a2, 0x3F0E
    ctx->r6 = S32(0X3F0E << 16);
    // 0x808002F8: ori         $a2, $a2, 0xD917
    ctx->r6 = ctx->r6 | 0XD917;
    // 0x808002FC: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    // 0x80800300: jal         0x8009DF94
    // 0x80800304: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DF94(rdram, ctx);
        goto after_1;
    // 0x80800304: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_1:
L_80800308:
    // 0x80800308: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x8080030C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800310: jal         0x8008CB10
    // 0x80800314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x80800314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800318: beq         $v0, $zero, L_8080038C
    if (ctx->r2 == 0) {
        // 0x8080031C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080038C;
    }
    // 0x8080031C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800320: jal         0x80000064
    // 0x80800324: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800064_bskazspring(rdram, ctx);
        goto after_3;
    // 0x80800324: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80800328: b           L_80800390
    // 0x8080032C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800390;
    // 0x8080032C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800330:
    // 0x80800330: jal         0x80000000
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bskazspring(rdram, ctx);
        goto after_4;
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800338: jal         0x8008CAEC
    // 0x8080033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_5;
    // 0x8080033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800340: beq         $v0, $zero, L_8080038C
    if (ctx->r2 == 0) {
        // 0x80800344: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080038C;
    }
    // 0x80800344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800348: jal         0x80000064
    // 0x8080034C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80800064_bskazspring(rdram, ctx);
        goto after_6;
    // 0x8080034C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x80800350: b           L_80800390
    // 0x80800354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800390;
    // 0x80800354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800358:
    // 0x80800358: jal         0x80000000
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bskazspring(rdram, ctx);
        goto after_7;
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800364: jal         0x80091A30
    // 0x80800368: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_8;
    // 0x80800368: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_8:
    // 0x8080036C: beq         $v0, $zero, L_80800378
    if (ctx->r2 == 0) {
        // 0x80800370: addiu       $t6, $zero, 0xDF
        ctx->r14 = ADD32(0, 0XDF);
            goto L_80800378;
    }
    // 0x80800370: addiu       $t6, $zero, 0xDF
    ctx->r14 = ADD32(0, 0XDF);
    // 0x80800374: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800378:
    // 0x80800378: jal         0x8008E078
    // 0x8080037C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_9;
    // 0x8080037C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800380: beq         $v0, $zero, L_8080038C
    if (ctx->r2 == 0) {
        // 0x80800384: addiu       $t7, $zero, 0xDF
        ctx->r15 = ADD32(0, 0XDF);
            goto L_8080038C;
    }
    // 0x80800384: addiu       $t7, $zero, 0xDF
    ctx->r15 = ADD32(0, 0XDF);
    // 0x80800388: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_8080038C:
    // 0x8080038C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800390:
    // 0x80800390: jal         0x80091A58
    // 0x80800394: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A58(rdram, ctx);
        goto after_10;
    // 0x80800394: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x80800398: beq         $v0, $zero, L_808003A4
    if (ctx->r2 == 0) {
        // 0x8080039C: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_808003A4;
    }
    // 0x8080039C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x808003A0: sw          $t8, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r24;
L_808003A4:
    // 0x808003A4: lw          $t9, 0x160($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X160);
    // 0x808003A8: beql        $t9, $zero, L_808003E8
    if (ctx->r25 == 0) {
        // 0x808003AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003E8;
    }
    goto skip_0;
    // 0x808003AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808003B0: jal         0x8009BB50
    // 0x808003B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_11;
    // 0x808003B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808003B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808003BC: nop

    // 0x808003C0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x808003C4: nop

    // 0x808003C8: bc1fl       L_808003E8
    if (!c1cs) {
        // 0x808003CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003E8;
    }
    goto skip_1;
    // 0x808003CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808003D0: jal         0x80097E74
    // 0x808003D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097E74(rdram, ctx);
        goto after_12;
    // 0x808003D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808003D8: beq         $v0, $zero, L_808003E4
    if (ctx->r2 == 0) {
        // 0x808003DC: addiu       $t0, $zero, 0xBE
        ctx->r8 = ADD32(0, 0XBE);
            goto L_808003E4;
    }
    // 0x808003DC: addiu       $t0, $zero, 0xBE
    ctx->r8 = ADD32(0, 0XBE);
    // 0x808003E0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_808003E4:
    // 0x808003E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808003E8:
    // 0x808003E8: jal         0x8009E5C8
    // 0x808003EC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_13;
    // 0x808003EC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_13:
    // 0x808003F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808003F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808003F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808003FC: jr          $ra
    // 0x80800400: nop

    return;
    // 0x80800400: nop

;}
RECOMP_FUNC void bskazspring_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800404: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800408: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(127, 0X430) << 16);
    // 0x8080040C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800410: jr          $ra
    // 0x80800414: lw          $v0, 0x430($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(127, 0X430));
    return;
    // 0x80800414: lw          $v0, 0x430($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(127, 0X430));
    // 0x80800418: nop

    // 0x8080041C: nop

;}
RECOMP_FUNC void func_80800000_bskazstill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: lw          $v1, 0x160($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X160);
    // 0x80800004: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(128, 0X8A0) << 16);
    // 0x80800008: sltiu       $at, $v1, 0x4
    ctx->r1 = ctx->r3 < 0X4 ? 1 : 0;
    // 0x8080000C: bnel        $at, $zero, L_80800020
    if (ctx->r1 != 0) {
        // 0x80800010: addu        $a1, $a1, $v1
        ctx->r5 = ADD32(ctx->r5, ctx->r3);
            goto L_80800020;
    }
    goto skip_0;
    // 0x80800010: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    skip_0:
    // 0x80800014: sw          $zero, 0x160($a0)
    MEM_W(0X160, ctx->r4) = 0;
    // 0x80800018: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8080001C: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
L_80800020:
    // 0x80800020: lbu         $v0, 0x8A0($a1)
    ctx->r2 = MEM_BU(ctx->r5, (int16_t)RELOC_LO16(128, 0X8A0));
    // 0x80800024: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x80800028: jr          $ra
    // 0x8080002C: sw          $t6, 0x160($a0)
    MEM_W(0X160, ctx->r4) = ctx->r14;
    return;
    // 0x8080002C: sw          $t6, 0x160($a0)
    MEM_W(0X160, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80800030_bskazstill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800030: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800034: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800038: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080003C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80800040: lw          $t6, 0x15C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X15C);
    // 0x80800044: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800048: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080004C: bne         $t6, $zero, L_80800088
    if (ctx->r14 != 0) {
        // 0x80800050: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_80800088;
    }
    // 0x80800050: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800054: sw          $zero, 0x160($a0)
    MEM_W(0X160, ctx->r4) = 0;
    // 0x80800058: sw          $zero, 0x164($a0)
    MEM_W(0X164, ctx->r4) = 0;
    // 0x8080005C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80800060: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800064: jal         0x8009FFD8
    // 0x80800068: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_0;
    // 0x80800068: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8080006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800070: jal         0x8009B9B0
    // 0x80800074: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_1;
    // 0x80800074: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80800078: jal         0x800909CC
    // 0x8080007C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800909CC(rdram, ctx);
        goto after_2;
    // 0x8080007C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800080: jal         0x8009F258
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F258(rdram, ctx);
        goto after_3;
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80800088:
    // 0x80800088: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8080008C: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
    // 0x80800090: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80800094: sltiu       $at, $t9, 0x6
    ctx->r1 = ctx->r25 < 0X6 ? 1 : 0;
    // 0x80800098: beq         $at, $zero, L_80800190
    if (ctx->r1 == 0) {
        // 0x8080009C: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_80800190;
    }
    // 0x8080009C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x808000A0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(128, 0X880) << 16);
    // 0x808000A4: addu        $at, $at, $t9
    gpr jr_addend_808000AC = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x808000A8: lw          $t9, 0x880($at)
    ctx->r25 = ADD32(ctx->r1, (int16_t)RELOC_LO16(128, 0X880));
    // 0x808000AC: jr          $t9
    // 0x808000B0: nop

    switch (jr_addend_808000AC >> 2) {
        case 0: goto L_80800190; break;
        case 1: goto L_808000B4; break;
        case 2: goto L_808000CC; break;
        case 3: goto L_808000E4; break;
        case 4: goto L_80800100; break;
        case 5: goto L_8080011C; break;
        default: switch_error(__func__, 0x808000AC, 0x80800880);
    }
    // 0x808000B0: nop

L_808000B4:
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B8: addiu       $a1, $zero, 0xA4
    ctx->r5 = ADD32(0, 0XA4);
    // 0x808000BC: jal         0x8008CCBC
    // 0x808000C0: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_4;
    // 0x808000C0: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_4:
    // 0x808000C4: b           L_80800194
    // 0x808000C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800194;
    // 0x808000C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808000CC:
    // 0x808000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D0: addiu       $a1, $zero, 0xA5
    ctx->r5 = ADD32(0, 0XA5);
    // 0x808000D4: jal         0x8008CCBC
    // 0x808000D8: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_5;
    // 0x808000D8: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_5:
    // 0x808000DC: b           L_80800194
    // 0x808000E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800194;
    // 0x808000E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808000E4:
    // 0x808000E4: lui         $a2, 0x40B6
    ctx->r6 = S32(0X40B6 << 16);
    // 0x808000E8: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808000EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F0: jal         0x8008CCBC
    // 0x808000F4: addiu       $a1, $zero, 0xAC
    ctx->r5 = ADD32(0, 0XAC);
    func_8008CCBC(rdram, ctx);
        goto after_6;
    // 0x808000F4: addiu       $a1, $zero, 0xAC
    ctx->r5 = ADD32(0, 0XAC);
    after_6:
    // 0x808000F8: b           L_80800194
    // 0x808000FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800194;
    // 0x808000FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800100:
    // 0x80800100: lui         $a2, 0x40A9
    ctx->r6 = S32(0X40A9 << 16);
    // 0x80800104: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080010C: jal         0x8008CCBC
    // 0x80800110: addiu       $a1, $zero, 0xAD
    ctx->r5 = ADD32(0, 0XAD);
    func_8008CCBC(rdram, ctx);
        goto after_7;
    // 0x80800110: addiu       $a1, $zero, 0xAD
    ctx->r5 = ADD32(0, 0XAD);
    after_7:
    // 0x80800114: b           L_80800194
    // 0x80800118: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800194;
    // 0x80800118: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8080011C:
    // 0x8080011C: jal         0x80084FE0
    // 0x80800120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_1(rdram, ctx);
        goto after_8;
    // 0x80800120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800124: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800128: beq         $v0, $at, L_80800150
    if (ctx->r2 == ctx->r1) {
        // 0x8080012C: sw          $v0, 0x168($s0)
        MEM_W(0X168, ctx->r16) = ctx->r2;
            goto L_80800150;
    }
    // 0x8080012C: sw          $v0, 0x168($s0)
    MEM_W(0X168, ctx->r16) = ctx->r2;
    // 0x80800130: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800134: beq         $v0, $at, L_80800168
    if (ctx->r2 == ctx->r1) {
        // 0x80800138: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800168;
    }
    // 0x80800138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080013C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80800140: beq         $v0, $at, L_80800180
    if (ctx->r2 == ctx->r1) {
        // 0x80800144: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800180;
    }
    // 0x80800144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800148: b           L_80800194
    // 0x8080014C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800194;
    // 0x8080014C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800150:
    // 0x80800150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800154: addiu       $a1, $zero, 0xA4
    ctx->r5 = ADD32(0, 0XA4);
    // 0x80800158: jal         0x8008CB3C
    // 0x8080015C: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_9;
    // 0x8080015C: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_9:
    // 0x80800160: b           L_80800194
    // 0x80800164: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800194;
    // 0x80800164: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800168:
    // 0x80800168: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x8080016C: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800170: jal         0x8008CB3C
    // 0x80800174: addiu       $a1, $zero, 0x24E
    ctx->r5 = ADD32(0, 0X24E);
    func_8008CB3C(rdram, ctx);
        goto after_10;
    // 0x80800174: addiu       $a1, $zero, 0x24E
    ctx->r5 = ADD32(0, 0X24E);
    after_10:
    // 0x80800178: b           L_80800194
    // 0x8080017C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800194;
    // 0x8080017C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800180:
    // 0x80800180: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x80800184: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800188: jal         0x8008CB3C
    // 0x8080018C: addiu       $a1, $zero, 0x24B
    ctx->r5 = ADD32(0, 0X24B);
    func_8008CB3C(rdram, ctx);
        goto after_11;
    // 0x8080018C: addiu       $a1, $zero, 0x24B
    ctx->r5 = ADD32(0, 0X24B);
    after_11:
L_80800190:
    // 0x80800190: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800194:
    // 0x80800194: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800198: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080019C: jr          $ra
    // 0x808001A0: nop

    return;
    // 0x808001A0: nop

;}
RECOMP_FUNC void func_808001A4_bskazstill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808001A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001B4: jal         0x8008E39C
    // 0x808001B8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_8008E39C(rdram, ctx);
        goto after_0;
    // 0x808001B8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001C0: jal         0x8009EF10
    // 0x808001C4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x808001C4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x808001C8: beq         $v0, $zero, L_8080020C
    if (ctx->r2 == 0) {
        // 0x808001CC: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_8080020C;
    }
    // 0x808001CC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x808001D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808001D4: beq         $v0, $at, L_808001EC
    if (ctx->r2 == ctx->r1) {
        // 0x808001D8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808001EC;
    }
    // 0x808001D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808001DC: beq         $v0, $at, L_80800208
    if (ctx->r2 == ctx->r1) {
        // 0x808001E0: addiu       $t8, $zero, 0xC7
        ctx->r24 = ADD32(0, 0XC7);
            goto L_80800208;
    }
    // 0x808001E0: addiu       $t8, $zero, 0xC7
    ctx->r24 = ADD32(0, 0XC7);
    // 0x808001E4: b           L_8080020C
    // 0x808001E8: nop

        goto L_8080020C;
    // 0x808001E8: nop

L_808001EC:
    // 0x808001EC: beq         $v1, $zero, L_80800200
    if (ctx->r3 == 0) {
        // 0x808001F0: addiu       $t7, $zero, 0xBC
        ctx->r15 = ADD32(0, 0XBC);
            goto L_80800200;
    }
    // 0x808001F0: addiu       $t7, $zero, 0xBC
    ctx->r15 = ADD32(0, 0XBC);
    // 0x808001F4: addiu       $t6, $zero, 0xC7
    ctx->r14 = ADD32(0, 0XC7);
    // 0x808001F8: b           L_8080020C
    // 0x808001FC: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
        goto L_8080020C;
    // 0x808001FC: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
L_80800200:
    // 0x80800200: b           L_8080020C
    // 0x80800204: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
        goto L_8080020C;
    // 0x80800204: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
L_80800208:
    // 0x80800208: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_8080020C:
    // 0x8080020C: beql        $v1, $zero, L_80800254
    if (ctx->r3 == 0) {
        // 0x80800210: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800254;
    }
    goto skip_0;
    // 0x80800210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800214: jal         0x8008E3E8
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E3E8(rdram, ctx);
        goto after_2;
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080021C: beql        $v0, $zero, L_80800230
    if (ctx->r2 == 0) {
        // 0x80800220: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800230;
    }
    goto skip_1;
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800224: jal         0x80085078
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_20(rdram, ctx);
        goto after_3;
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800230:
    // 0x80800230: jal         0x80091A58
    // 0x80800234: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_4;
    // 0x80800234: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_4:
    // 0x80800238: beq         $v0, $zero, L_80800284
    if (ctx->r2 == 0) {
        // 0x8080023C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800284;
    }
    // 0x8080023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800240: jal         0x80085008
    // 0x80800244: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bashoes_entrypoint_6(rdram, ctx);
        goto after_5;
    // 0x80800244: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x80800248: b           L_80800288
    // 0x8080024C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800288;
    // 0x8080024C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800254:
    // 0x80800254: jal         0x800919F4
    // 0x80800258: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_6;
    // 0x80800258: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x8080025C: beq         $v0, $zero, L_80800268
    if (ctx->r2 == 0) {
        // 0x80800260: addiu       $t9, $zero, 0xDD
        ctx->r25 = ADD32(0, 0XDD);
            goto L_80800268;
    }
    // 0x80800260: addiu       $t9, $zero, 0xDD
    ctx->r25 = ADD32(0, 0XDD);
    // 0x80800264: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_80800268:
    // 0x80800268: jal         0x80097FB8
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097FB8(rdram, ctx);
        goto after_7;
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800270: beql        $v0, $zero, L_80800288
    if (ctx->r2 == 0) {
        // 0x80800274: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800288;
    }
    goto skip_2;
    // 0x80800274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80800278: jal         0x800832F8
    // 0x8080027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskaz_entrypoint_4(rdram, ctx);
        goto after_8;
    // 0x8080027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800280: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_80800284:
    // 0x80800284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800288:
    // 0x80800288: jal         0x80091A58
    // 0x8080028C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_9;
    // 0x8080028C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_9:
    // 0x80800290: beq         $v0, $zero, L_808002C4
    if (ctx->r2 == 0) {
        // 0x80800294: nop
    
            goto L_808002C4;
    }
    // 0x80800294: nop

    // 0x80800298: jal         0x8008D790
    // 0x8080029C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D790(rdram, ctx);
        goto after_10;
    // 0x8080029C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808002A0: beq         $v0, $zero, L_808002B8
    if (ctx->r2 == 0) {
        // 0x808002A4: nop
    
            goto L_808002B8;
    }
    // 0x808002A4: nop

    // 0x808002A8: jal         0x80084978
    // 0x808002AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baduo_entrypoint_12(rdram, ctx);
        goto after_11;
    // 0x808002AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808002B0: b           L_808002C4
    // 0x808002B4: nop

        goto L_808002C4;
    // 0x808002B4: nop

L_808002B8:
    // 0x808002B8: jal         0x800832F0
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskaz_entrypoint_3(rdram, ctx);
        goto after_12;
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808002C0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_808002C4:
    // 0x808002C4: jal         0x80097AD0
    // 0x808002C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097AD0(rdram, ctx);
        goto after_13;
    // 0x808002C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808002CC: beq         $v0, $zero, L_808002E0
    if (ctx->r2 == 0) {
        // 0x808002D0: nop
    
            goto L_808002E0;
    }
    // 0x808002D0: nop

    // 0x808002D4: jal         0x800848A8
    // 0x808002D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_14;
    // 0x808002D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808002DC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_808002E0:
    // 0x808002E0: jal         0x8008DF18
    // 0x808002E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DF18(rdram, ctx);
        goto after_15;
    // 0x808002E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808002E8: beq         $v0, $zero, L_808002FC
    if (ctx->r2 == 0) {
        // 0x808002EC: nop
    
            goto L_808002FC;
    }
    // 0x808002EC: nop

    // 0x808002F0: jal         0x800848B0
    // 0x808002F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_16;
    // 0x808002F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808002F8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_808002FC:
    // 0x808002FC: jal         0x8008E35C
    // 0x80800300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_17;
    // 0x80800300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800304: beq         $v0, $zero, L_80800310
    if (ctx->r2 == 0) {
        // 0x80800308: addiu       $t0, $zero, 0x15D
        ctx->r8 = ADD32(0, 0X15D);
            goto L_80800310;
    }
    // 0x80800308: addiu       $t0, $zero, 0x15D
    ctx->r8 = ADD32(0, 0X15D);
    // 0x8080030C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_80800310:
    // 0x80800310: jal         0x8008DD04
    // 0x80800314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_18;
    // 0x80800314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800318: beq         $v0, $zero, L_80800328
    if (ctx->r2 == 0) {
        // 0x8080031C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800328;
    }
    // 0x8080031C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800320: addiu       $t1, $zero, 0xDF
    ctx->r9 = ADD32(0, 0XDF);
    // 0x80800324: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_80800328:
    // 0x80800328: jal         0x800A02DC
    // 0x8080032C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800A02DC(rdram, ctx);
        goto after_19;
    // 0x8080032C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_19:
    // 0x80800330: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800334: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800338: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080033C: jr          $ra
    // 0x80800340: nop

    return;
    // 0x80800340: nop

;}
RECOMP_FUNC void bskazstill_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800344: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800348: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080034C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800350: jal         0x80000030
    // 0x80800354: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800030_bskazstill(rdram, ctx);
        goto after_0;
    // 0x80800354: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800358: jal         0x80090A2C
    // 0x8080035C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80090A2C(rdram, ctx);
        goto after_1;
    // 0x8080035C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800360: jal         0x800951B4
    // 0x80800364: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800951B4(rdram, ctx);
        goto after_2;
    // 0x80800364: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800368: jal         0x800832E8
    // 0x8080036C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bskaz_entrypoint_2(rdram, ctx);
        goto after_3;
    // 0x8080036C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80800370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800378: jr          $ra
    // 0x8080037C: nop

    return;
    // 0x8080037C: nop

;}
RECOMP_FUNC void bskazstill_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800384: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800388: jal         0x800832E0
    // 0x8080038C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080038C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800390: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800394: jal         0x8008E39C
    // 0x80800398: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    func_8008E39C(rdram, ctx);
        goto after_1;
    // 0x80800398: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    after_1:
    // 0x8080039C: beq         $v0, $zero, L_808003B4
    if (ctx->r2 == 0) {
        // 0x808003A0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808003B4;
    }
    // 0x808003A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808003A4: jal         0x80000030
    // 0x808003A8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80800030_bskazstill(rdram, ctx);
        goto after_2;
    // 0x808003A8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x808003AC: b           L_808003C0
    // 0x808003B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808003C0;
    // 0x808003B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808003B4:
    // 0x808003B4: jal         0x80000030
    // 0x808003B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800030_bskazstill(rdram, ctx);
        goto after_3;
    // 0x808003B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x808003BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808003C0:
    // 0x808003C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003C4: jr          $ra
    // 0x808003C8: nop

    return;
    // 0x808003C8: nop

;}
RECOMP_FUNC void bskazstill_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808003D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808003D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808003D8: jal         0x8008CABC
    // 0x808003DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808003DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808003E0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x808003E4: jal         0x8009EF10
    // 0x808003E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x808003E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808003EC: bnel        $v0, $zero, L_8080043C
    if (ctx->r2 != 0) {
        // 0x808003F0: lw          $t7, 0x164($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X164);
            goto L_8080043C;
    }
    goto skip_0;
    // 0x808003F0: lw          $t7, 0x164($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X164);
    skip_0:
    // 0x808003F4: jal         0x8009EF04
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_2;
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808003FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800400: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800404: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800408: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8080040C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80800410: bc1fl       L_8080043C
    if (!c1cs) {
        // 0x80800414: lw          $t7, 0x164($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X164);
            goto L_8080043C;
    }
    goto skip_1;
    // 0x80800414: lw          $t7, 0x164($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X164);
    skip_1:
    // 0x80800418: jal         0x8009C908
    // 0x8080041C: sw          $t6, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->r14;
    func_8009C908(rdram, ctx);
        goto after_3;
    // 0x8080041C: sw          $t6, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->r14;
    after_3:
    // 0x80800420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800424: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x80800428: jal         0x8009C99C
    // 0x8080042C: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    func_8009C99C(rdram, ctx);
        goto after_4;
    // 0x8080042C: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    after_4:
    // 0x80800430: b           L_80800468
    // 0x80800434: nop

        goto L_80800468;
    // 0x80800434: nop

    // 0x80800438: lw          $t7, 0x164($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X164);
L_8080043C:
    // 0x8080043C: beql        $t7, $zero, L_8080045C
    if (ctx->r15 == 0) {
        // 0x80800440: sw          $zero, 0x164($s0)
        MEM_W(0X164, ctx->r16) = 0;
            goto L_8080045C;
    }
    goto skip_2;
    // 0x80800440: sw          $zero, 0x164($s0)
    MEM_W(0X164, ctx->r16) = 0;
    skip_2:
    // 0x80800444: jal         0x8009C984
    // 0x80800448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_5;
    // 0x80800448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080044C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800450: jal         0x8009C914
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_6;
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800458: sw          $zero, 0x164($s0)
    MEM_W(0X164, ctx->r16) = 0;
L_8080045C:
    // 0x8080045C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800460: jal         0x8009C908
    // 0x80800464: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009C908(rdram, ctx);
        goto after_7;
    // 0x80800464: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
L_80800468:
    // 0x80800468: jal         0x8008E39C
    // 0x8080046C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E39C(rdram, ctx);
        goto after_8;
    // 0x8080046C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800470: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800474: lw          $v1, 0x15C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X15C);
    // 0x80800478: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080047C: beq         $v1, $at, L_80800604
    if (ctx->r3 == ctx->r1) {
        // 0x80800480: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800604;
    }
    // 0x80800480: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800484: beq         $v1, $at, L_808004A0
    if (ctx->r3 == ctx->r1) {
        // 0x80800488: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_808004A0;
    }
    // 0x80800488: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8080048C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80800490: beq         $v1, $at, L_808005C4
    if (ctx->r3 == ctx->r1) {
        // 0x80800494: nop
    
            goto L_808005C4;
    }
    // 0x80800494: nop

    // 0x80800498: b           L_80800604
    // 0x8080049C: nop

        goto L_80800604;
    // 0x8080049C: nop

L_808004A0:
    // 0x808004A0: lui         $a1, 0x3EB7
    ctx->r5 = S32(0X3EB7 << 16);
    // 0x808004A4: jal         0x8008B348
    // 0x808004A8: ori         $a1, $a1, 0xA787
    ctx->r5 = ctx->r5 | 0XA787;
    func_8008B348(rdram, ctx);
        goto after_9;
    // 0x808004A8: ori         $a1, $a1, 0xA787
    ctx->r5 = ctx->r5 | 0XA787;
    after_9:
    // 0x808004AC: beq         $v0, $zero, L_808004C8
    if (ctx->r2 == 0) {
        // 0x808004B0: lui         $a2, 0x3FE6
        ctx->r6 = S32(0X3FE6 << 16);
            goto L_808004C8;
    }
    // 0x808004B0: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x808004B4: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808004B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004BC: addiu       $a1, $zero, 0x418
    ctx->r5 = ADD32(0, 0X418);
    // 0x808004C0: jal         0x8009DF18
    // 0x808004C4: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    func_8009DF18(rdram, ctx);
        goto after_10;
    // 0x808004C4: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    after_10:
L_808004C8:
    // 0x808004C8: lui         $a1, 0x3EC5
    ctx->r5 = S32(0X3EC5 << 16);
    // 0x808004CC: ori         $a1, $a1, 0x94AF
    ctx->r5 = ctx->r5 | 0X94AF;
    // 0x808004D0: jal         0x8008B348
    // 0x808004D4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_11;
    // 0x808004D4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_11:
    // 0x808004D8: beq         $v0, $zero, L_808004F4
    if (ctx->r2 == 0) {
        // 0x808004DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004F4;
    }
    // 0x808004DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004E0: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x808004E4: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808004E8: addiu       $a1, $zero, 0x418
    ctx->r5 = ADD32(0, 0X418);
    // 0x808004EC: jal         0x8009DF18
    // 0x808004F0: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    func_8009DF18(rdram, ctx);
        goto after_12;
    // 0x808004F0: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    after_12:
L_808004F4:
    // 0x808004F4: lui         $a1, 0x3F02
    ctx->r5 = S32(0X3F02 << 16);
    // 0x808004F8: ori         $a1, $a1, 0xCA58
    ctx->r5 = ctx->r5 | 0XCA58;
    // 0x808004FC: jal         0x8008B348
    // 0x80800500: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_13;
    // 0x80800500: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_13:
    // 0x80800504: beq         $v0, $zero, L_80800520
    if (ctx->r2 == 0) {
        // 0x80800508: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800520;
    }
    // 0x80800508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080050C: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x80800510: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800514: addiu       $a1, $zero, 0x418
    ctx->r5 = ADD32(0, 0X418);
    // 0x80800518: jal         0x8009DF18
    // 0x8080051C: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    func_8009DF18(rdram, ctx);
        goto after_14;
    // 0x8080051C: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    after_14:
L_80800520:
    // 0x80800520: lui         $a1, 0x3F0F
    ctx->r5 = S32(0X3F0F << 16);
    // 0x80800524: ori         $a1, $a1, 0x4F0E
    ctx->r5 = ctx->r5 | 0X4F0E;
    // 0x80800528: jal         0x8008B348
    // 0x8080052C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_15;
    // 0x8080052C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_15:
    // 0x80800530: beq         $v0, $zero, L_8080054C
    if (ctx->r2 == 0) {
        // 0x80800534: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080054C;
    }
    // 0x80800534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800538: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x8080053C: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800540: addiu       $a1, $zero, 0x418
    ctx->r5 = ADD32(0, 0X418);
    // 0x80800544: jal         0x8009DF18
    // 0x80800548: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    func_8009DF18(rdram, ctx);
        goto after_16;
    // 0x80800548: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    after_16:
L_8080054C:
    // 0x8080054C: lui         $a1, 0x3F5B
    ctx->r5 = S32(0X3F5B << 16);
    // 0x80800550: ori         $a1, $a1, 0xD3C3
    ctx->r5 = ctx->r5 | 0XD3C3;
    // 0x80800554: jal         0x8008B348
    // 0x80800558: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_17;
    // 0x80800558: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_17:
    // 0x8080055C: beq         $v0, $zero, L_80800578
    if (ctx->r2 == 0) {
        // 0x80800560: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800578;
    }
    // 0x80800560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800564: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x80800568: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x8080056C: addiu       $a1, $zero, 0x418
    ctx->r5 = ADD32(0, 0X418);
    // 0x80800570: jal         0x8009DF18
    // 0x80800574: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    func_8009DF18(rdram, ctx);
        goto after_18;
    // 0x80800574: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    after_18:
L_80800578:
    // 0x80800578: lui         $a1, 0x3F64
    ctx->r5 = S32(0X3F64 << 16);
    // 0x8080057C: ori         $a1, $a1, 0x2C3D
    ctx->r5 = ctx->r5 | 0X2C3D;
    // 0x80800580: jal         0x8008B348
    // 0x80800584: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_19;
    // 0x80800584: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_19:
    // 0x80800588: beq         $v0, $zero, L_808005A4
    if (ctx->r2 == 0) {
        // 0x8080058C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005A4;
    }
    // 0x8080058C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800590: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x80800594: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800598: addiu       $a1, $zero, 0x418
    ctx->r5 = ADD32(0, 0X418);
    // 0x8080059C: jal         0x8009DF18
    // 0x808005A0: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    func_8009DF18(rdram, ctx);
        goto after_20;
    // 0x808005A0: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    after_20:
L_808005A4:
    // 0x808005A4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x808005A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005AC: beq         $t8, $zero, L_80800614
    if (ctx->r24 == 0) {
        // 0x808005B0: nop
    
            goto L_80800614;
    }
    // 0x808005B0: nop

    // 0x808005B4: jal         0x80000030
    // 0x808005B8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80800030_bskazstill(rdram, ctx);
        goto after_21;
    // 0x808005B8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_21:
    // 0x808005BC: b           L_80800614
    // 0x808005C0: nop

        goto L_80800614;
    // 0x808005C0: nop

L_808005C4:
    // 0x808005C4: beq         $v0, $zero, L_808005F4
    if (ctx->r2 == 0) {
        // 0x808005C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005F4;
    }
    // 0x808005C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005CC: jal         0x80084FE0
    // 0x808005D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_1(rdram, ctx);
        goto after_22;
    // 0x808005D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x808005D4: lw          $t9, 0x168($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X168);
    // 0x808005D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005DC: beq         $v0, $t9, L_80800614
    if (ctx->r2 == ctx->r25) {
        // 0x808005E0: nop
    
            goto L_80800614;
    }
    // 0x808005E0: nop

    // 0x808005E4: jal         0x80000030
    // 0x808005E8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80800030_bskazstill(rdram, ctx);
        goto after_23;
    // 0x808005E8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_23:
    // 0x808005EC: b           L_80800614
    // 0x808005F0: nop

        goto L_80800614;
    // 0x808005F0: nop

L_808005F4:
    // 0x808005F4: jal         0x80000030
    // 0x808005F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800030_bskazstill(rdram, ctx);
        goto after_24;
    // 0x808005F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_24:
    // 0x808005FC: b           L_80800614
    // 0x80800600: nop

        goto L_80800614;
    // 0x80800600: nop

L_80800604:
    // 0x80800604: beq         $v0, $zero, L_80800614
    if (ctx->r2 == 0) {
        // 0x80800608: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800614;
    }
    // 0x80800608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080060C: jal         0x80000030
    // 0x80800610: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80800030_bskazstill(rdram, ctx);
        goto after_25;
    // 0x80800610: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_25:
L_80800614:
    // 0x80800614: jal         0x8008B324
    // 0x80800618: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B324(rdram, ctx);
        goto after_26;
    // 0x80800618: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_26:
    // 0x8080061C: beql        $v0, $zero, L_8080063C
    if (ctx->r2 == 0) {
        // 0x80800620: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080063C;
    }
    goto skip_3;
    // 0x80800620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x80800624: jal         0x80000000
    // 0x80800628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bskazstill(rdram, ctx);
        goto after_27;
    // 0x80800628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x8080062C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800630: jal         0x80000030
    // 0x80800634: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80800030_bskazstill(rdram, ctx);
        goto after_28;
    // 0x80800634: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_28:
    // 0x80800638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080063C:
    // 0x8080063C: jal         0x800001A4
    // 0x80800640: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_808001A4_bskazstill(rdram, ctx);
        goto after_29;
    // 0x80800640: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_29:
    // 0x80800644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800648: jal         0x8009E5C8
    // 0x8080064C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_30;
    // 0x8080064C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_30:
    // 0x80800650: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800654: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800658: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080065C: jr          $ra
    // 0x80800660: nop

    return;
    // 0x80800660: nop

;}
RECOMP_FUNC void bskazstill_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800664: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800668: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(128, 0X8A4) << 16);
    // 0x8080066C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800670: jr          $ra
    // 0x80800674: lw          $v0, 0x8A4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(128, 0X8A4));
    return;
    // 0x80800674: lw          $v0, 0x8A4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(128, 0X8A4));
;}
RECOMP_FUNC void bskazstill_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080067C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800680: jal         0x800001A4
    // 0x80800684: nop

    func_808001A4_bskazstill(rdram, ctx);
        goto after_0;
    // 0x80800684: nop

    after_0:
    // 0x80800688: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080068C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800690: jr          $ra
    // 0x80800694: nop

    return;
    // 0x80800694: nop

;}
RECOMP_FUNC void bskazstill_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800698: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080069C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808006A0: jal         0x800832E8
    // 0x808006A4: nop

    _bskaz_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808006A4: nop

    after_0:
    // 0x808006A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808006AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808006B0: jr          $ra
    // 0x808006B4: nop

    return;
    // 0x808006B4: nop

;}
RECOMP_FUNC void bskazstill_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808006BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808006C0: jal         0x800832E0
    // 0x808006C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808006C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x808006C8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808006CC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808006D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808006D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808006D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808006DC: jal         0x8009FFD8
    // 0x808006E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x808006E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x808006E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808006E8: jal         0x8009B9B0
    // 0x808006EC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x808006EC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x808006F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808006F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808006F8: jr          $ra
    // 0x808006FC: nop

    return;
    // 0x808006FC: nop

;}
RECOMP_FUNC void bskazstill_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800700: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800708: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8080070C: jal         0x8008CAEC
    // 0x80800710: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8008CAEC(rdram, ctx);
        goto after_0;
    // 0x80800710: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800714: beq         $v0, $zero, L_80800720
    if (ctx->r2 == 0) {
        // 0x80800718: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80800720;
    }
    // 0x80800718: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8080071C: addiu       $a1, $zero, 0xBB
    ctx->r5 = ADD32(0, 0XBB);
L_80800720:
    // 0x80800720: jal         0x800001A4
    // 0x80800724: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_808001A4_bskazstill(rdram, ctx);
        goto after_1;
    // 0x80800724: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800728: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080072C: jal         0x8009E5C8
    // 0x80800730: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80800730: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x80800734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800738: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080073C: jr          $ra
    // 0x80800740: nop

    return;
    // 0x80800740: nop

;}
RECOMP_FUNC void bskazstill_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800744: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800748: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(128, 0X8B4) << 16);
    // 0x8080074C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800750: jr          $ra
    // 0x80800754: lw          $v0, 0x8B4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(128, 0X8B4));
    return;
    // 0x80800754: lw          $v0, 0x8B4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(128, 0X8B4));
;}
RECOMP_FUNC void func_80800758_bskazstill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800758: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080075C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800760: jal         0x800832E8
    // 0x80800764: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bskaz_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800764: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800768: jal         0x80082FF0
    // 0x8080076C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x8080076C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800774: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800778: jr          $ra
    // 0x8080077C: nop

    return;
    // 0x8080077C: nop

;}
RECOMP_FUNC void func_80800780_bskazstill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800780: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800784: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800788: jal         0x800832E0
    // 0x8080078C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080078C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800790: jal         0x80082FE0
    // 0x80800794: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800794: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080079C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808007A0: jr          $ra
    // 0x808007A4: nop

    return;
    // 0x808007A4: nop

;}
RECOMP_FUNC void func_808007A8_bskazstill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808007AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808007B0: jal         0x80082FE8
    // 0x808007B4: nop

    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808007B4: nop

    after_0:
    // 0x808007B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808007BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808007C0: jr          $ra
    // 0x808007C4: nop

    return;
    // 0x808007C4: nop

;}
RECOMP_FUNC void bskazstill_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007C8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808007CC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(128, 0X8C4) << 16);
    // 0x808007D0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808007D4: jr          $ra
    // 0x808007D8: lw          $v0, 0x8C4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(128, 0X8C4));
    return;
    // 0x808007D8: lw          $v0, 0x8C4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(128, 0X8C4));
;}
RECOMP_FUNC void func_808007DC_bskazstill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808007E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808007E4: jal         0x800839B8
    // 0x808007E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x808007E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808007EC: jal         0x800832E8
    // 0x808007F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bskaz_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x808007F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808007F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808007F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808007FC: jr          $ra
    // 0x80800800: nop

    return;
    // 0x80800800: nop

;}
RECOMP_FUNC void func_80800804_bskazstill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800804: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080080C: jal         0x800832E0
    // 0x80800810: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800810: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800814: jal         0x800839C8
    // 0x80800818: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x80800818: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080081C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800820: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800824: jr          $ra
    // 0x80800828: nop

    return;
    // 0x80800828: nop

;}
RECOMP_FUNC void func_8080082C_bskazstill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080082C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800830: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800834: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800838: jal         0x800839E8
    // 0x8080083C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x8080083C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800840: beq         $v0, $zero, L_80800854
    if (ctx->r2 == 0) {
        // 0x80800844: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80800854;
    }
    // 0x80800844: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800848: jal         0x800839B0
    // 0x8080084C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsrest_entrypoint_13(rdram, ctx);
        goto after_1;
    // 0x8080084C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800850: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80800854:
    // 0x80800854: jal         0x8009E5C8
    // 0x80800858: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80800858: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x8080085C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800860: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800864: jr          $ra
    // 0x80800868: nop

    return;
    // 0x80800868: nop

;}
RECOMP_FUNC void bskazstill_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080086C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800870: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(128, 0X8D4) << 16);
    // 0x80800874: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800878: jr          $ra
    // 0x8080087C: lw          $v0, 0x8D4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(128, 0X8D4));
    return;
    // 0x8080087C: lw          $v0, 0x8D4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(128, 0X8D4));
;}
RECOMP_FUNC void func_80800000_bskazstilt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x8008E35C
    // 0x8080000C: nop

    func_8008E35C(rdram, ctx);
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
RECOMP_FUNC void func_80800020_bskazstilt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800024: beq         $a1, $zero, L_80800044
    if (ctx->r5 == 0) {
        // 0x80800028: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80800044;
    }
    // 0x80800028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080002C: lui         $a2, 0x3F61
    ctx->r6 = S32(0X3F61 << 16);
    // 0x80800030: ori         $a2, $a2, 0x47AE
    ctx->r6 = ctx->r6 | 0X47AE;
    // 0x80800034: jal         0x8009DE38
    // 0x80800038: addiu       $a1, $zero, 0x4433
    ctx->r5 = ADD32(0, 0X4433);
    func_8009DE38(rdram, ctx);
        goto after_0;
    // 0x80800038: addiu       $a1, $zero, 0x4433
    ctx->r5 = ADD32(0, 0X4433);
    after_0:
    // 0x8080003C: b           L_80800058
    // 0x80800040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800058;
    // 0x80800040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800044:
    // 0x80800044: lui         $a2, 0x3F75
    ctx->r6 = S32(0X3F75 << 16);
    // 0x80800048: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x8080004C: jal         0x8009DE38
    // 0x80800050: addiu       $a1, $zero, 0x4433
    ctx->r5 = ADD32(0, 0X4433);
    func_8009DE38(rdram, ctx);
        goto after_1;
    // 0x80800050: addiu       $a1, $zero, 0x4433
    ctx->r5 = ADD32(0, 0X4433);
    after_1:
    // 0x80800054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800058:
    // 0x80800058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080005C: jr          $ra
    // 0x80800060: nop

    return;
    // 0x80800060: nop

;}
RECOMP_FUNC void func_80800064_bskazstilt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800064: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800068: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080006C: jal         0x8009EF1C
    // 0x80800070: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x80800070: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800074: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80800078: jal         0x8009EF10
    // 0x8080007C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x8080007C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800080: bne         $v0, $zero, L_8080009C
    if (ctx->r2 != 0) {
        // 0x80800084: lwc1        $f12, 0x1C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_8080009C;
    }
    // 0x80800084: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80800088: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080008C: jal         0x8009B9B0
    // 0x80800090: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800090: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800094: b           L_808000BC
    // 0x80800098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808000BC;
    // 0x80800098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080009C:
    // 0x8080009C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x808000A0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808000A4: jal         0x800F1214
    // 0x808000A8: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x808000A8: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    after_3:
    // 0x808000AC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808000B0: jal         0x8009B9B0
    // 0x808000B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x808000B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x808000B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808000BC:
    // 0x808000BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000C0: jr          $ra
    // 0x808000C4: nop

    return;
    // 0x808000C4: nop

;}
RECOMP_FUNC void func_808000C8_bskazstilt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808000CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000D8: jal         0x80091554
    // 0x808000DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80091554(rdram, ctx);
        goto after_0;
    // 0x808000DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x808000E0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x808000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E8: jal         0x80091538
    // 0x808000EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80091538(rdram, ctx);
        goto after_1;
    // 0x808000EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x808000F0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F8: jal         0x80084430
    // 0x808000FC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    _baalarm_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x808000FC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800100: lui         $a2, 0x3C23
    ctx->r6 = S32(0X3C23 << 16);
    // 0x80800104: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x80800108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080010C: jal         0x800915E8
    // 0x80800110: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800915E8(rdram, ctx);
        goto after_3;
    // 0x80800110: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80800114: beq         $v0, $zero, L_80800128
    if (ctx->r2 == 0) {
        // 0x80800118: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800128;
    }
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080011C: addiu       $a1, $zero, 0x3EB
    ctx->r5 = ADD32(0, 0X3EB);
    // 0x80800120: jal         0x8009DE38
    // 0x80800124: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_4;
    // 0x80800124: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_4:
L_80800128:
    // 0x80800128: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080012C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800130: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800134: jr          $ra
    // 0x80800138: nop

    return;
    // 0x80800138: nop

;}
RECOMP_FUNC void func_8080013C_bskazstilt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080013C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800140: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800144: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800148: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080014C: jal         0x8009E77C
    // 0x80800150: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8009E77C(rdram, ctx);
        goto after_0;
    // 0x80800150: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x80800154: bnel        $v0, $zero, L_80800224
    if (ctx->r2 != 0) {
        // 0x80800158: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800224;
    }
    goto skip_0;
    // 0x80800158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8080015C: jal         0x800832E0
    // 0x80800160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800168: jal         0x80095774
    // 0x8080016C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80095774(rdram, ctx);
        goto after_2;
    // 0x8080016C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_2:
    // 0x80800170: jal         0x8009E4AC
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_3;
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080017C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800180: jal         0x8009E5A4
    // 0x80800184: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8009E5A4(rdram, ctx);
        goto after_4;
    // 0x80800184: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080018C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800190: jal         0x8009E55C
    // 0x80800194: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    func_8009E55C(rdram, ctx);
        goto after_5;
    // 0x80800194: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    after_5:
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080019C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808001A0: jal         0x8009E53C
    // 0x808001A4: lui         $a2, 0xC248
    ctx->r6 = S32(0XC248 << 16);
    func_8009E53C(rdram, ctx);
        goto after_6;
    // 0x808001A4: lui         $a2, 0xC248
    ctx->r6 = S32(0XC248 << 16);
    after_6:
    // 0x808001A8: jal         0x8009EFA8
    // 0x808001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EFA8(rdram, ctx);
        goto after_7;
    // 0x808001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808001B0: lui         $a2, 0x3CF5
    ctx->r6 = S32(0X3CF5 << 16);
    // 0x808001B4: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001BC: jal         0x8009F1C8
    // 0x808001C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_8;
    // 0x808001C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808001CC: jal         0x8009F1C8
    // 0x808001D0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_9;
    // 0x808001D0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_9:
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D8: jal         0x800A0CF4
    // 0x808001DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_10;
    // 0x808001DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E4: jal         0x800A0CE8
    // 0x808001E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CE8(rdram, ctx);
        goto after_11;
    // 0x808001E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F0: jal         0x800A0DD0
    // 0x808001F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0DD0(rdram, ctx);
        goto after_12;
    // 0x808001F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001FC: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800200: jal         0x8009BFE4
    // 0x80800204: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_13;
    // 0x80800204: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_13:
    // 0x80800208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080020C: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800210: jal         0x8009C554
    // 0x80800214: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009C554(rdram, ctx);
        goto after_14;
    // 0x80800214: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_14:
    // 0x80800218: jal         0x80084428
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baalarm_new(rdram, ctx);
        goto after_15;
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800220: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800224:
    // 0x80800224: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800228: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080022C: jr          $ra
    // 0x80800230: nop

    return;
    // 0x80800230: nop

;}
RECOMP_FUNC void func_80800234_bskazstilt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800234: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800238: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080023C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800240: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800244: jal         0x8009E74C
    // 0x80800248: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x80800248: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x8080024C: bnel        $v0, $zero, L_808002E0
    if (ctx->r2 != 0) {
        // 0x80800250: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808002E0;
    }
    goto skip_0;
    // 0x80800250: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800254: jal         0x80084420
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baalarm_free(rdram, ctx);
        goto after_1;
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080025C: jal         0x8009E474
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E474(rdram, ctx);
        goto after_2;
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800264: jal         0x8009EF60
    // 0x80800268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF60(rdram, ctx);
        goto after_3;
    // 0x80800268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800270: jal         0x800A0CF4
    // 0x80800274: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_4;
    // 0x80800274: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80800278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080027C: jal         0x800A0CE8
    // 0x80800280: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CE8(rdram, ctx);
        goto after_5;
    // 0x80800280: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80800284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800288: jal         0x800A0DD0
    // 0x8080028C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0DD0(rdram, ctx);
        goto after_6;
    // 0x8080028C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80800290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800294: jal         0x8009BF5C
    // 0x80800298: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_7;
    // 0x80800298: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_7:
    // 0x8080029C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002A0: jal         0x8009C4CC
    // 0x808002A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_8;
    // 0x808002A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_8:
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002AC: jal         0x80091788
    // 0x808002B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80091788(rdram, ctx);
        goto after_9;
    // 0x808002B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x808002B4: jal         0x800C77DC
    // 0x808002B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800C77DC(rdram, ctx);
        goto after_10;
    // 0x808002B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x808002C4: jal         0x800852E8
    // 0x808002C8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    _batimer_incrementBy(rdram, ctx);
        goto after_11;
    // 0x808002C8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_11:
    // 0x808002CC: jal         0x800000C8
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000C8_bskazstilt(rdram, ctx);
        goto after_12;
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808002D4: jal         0x800832E8
    // 0x808002D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskaz_entrypoint_2(rdram, ctx);
        goto after_13;
    // 0x808002D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808002DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808002E0:
    // 0x808002E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808002E8: jr          $ra
    // 0x808002EC: nop

    return;
    // 0x808002EC: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808002F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808002F8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808002FC: jal         0x8000013C
    // 0x80800300: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8080013C_bskazstilt(rdram, ctx);
        goto after_0;
    // 0x80800300: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800308: addiu       $a1, $zero, 0x27F
    ctx->r5 = ADD32(0, 0X27F);
    // 0x8080030C: jal         0x8008CDB8
    // 0x80800310: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CDB8(rdram, ctx);
        goto after_1;
    // 0x80800310: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x80800314: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800318: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080031C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800320: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800324: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800328: jal         0x8009FFD8
    // 0x8080032C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x8080032C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x80800330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800334: jal         0x8009B9B0
    // 0x80800338: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80800338: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x8080033C: jal         0x800A3394
    // 0x80800340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3394(rdram, ctx);
        goto after_4;
    // 0x80800340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800344: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080034C: jal         0x800917A8
    // 0x80800350: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800917A8(rdram, ctx);
        goto after_5;
    // 0x80800350: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x80800354: jal         0x800C77DC
    // 0x80800358: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800C77DC(rdram, ctx);
        goto after_6;
    // 0x80800358: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_6:
    // 0x8080035C: jal         0x800C2E04
    // 0x80800360: nop

    func_800C2E04(rdram, ctx);
        goto after_7;
    // 0x80800360: nop

    after_7:
    // 0x80800364: sb          $v0, 0x160($s0)
    MEM_B(0X160, ctx->r16) = ctx->r2;
    // 0x80800368: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x8080036C: jal         0x800C301C
    // 0x80800370: addiu       $a1, $zero, 0x41D
    ctx->r5 = ADD32(0, 0X41D);
    func_800C301C(rdram, ctx);
        goto after_8;
    // 0x80800370: addiu       $a1, $zero, 0x41D
    ctx->r5 = ADD32(0, 0X41D);
    after_8:
    // 0x80800374: lbu         $a0, 0x160($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X160);
    // 0x80800378: jal         0x800C330C
    // 0x8080037C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800C330C(rdram, ctx);
        goto after_9;
    // 0x8080037C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
    // 0x80800380: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x80800384: lui         $a2, 0x3FF3
    ctx->r6 = S32(0X3FF3 << 16);
    // 0x80800388: lui         $a3, 0x3F99
    ctx->r7 = S32(0X3F99 << 16);
    // 0x8080038C: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x80800390: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800394: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800398: jal         0x800C3730
    // 0x8080039C: lbu         $a0, 0x160($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X160);
    func_800C3730(rdram, ctx);
        goto after_10;
    // 0x8080039C: lbu         $a0, 0x160($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X160);
    after_10:
    // 0x808003A0: jal         0x800C3BDC
    // 0x808003A4: lbu         $a0, 0x160($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X160);
    func_800C3BDC(rdram, ctx);
        goto after_11;
    // 0x808003A4: lbu         $a0, 0x160($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X160);
    after_11:
    // 0x808003A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808003AC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808003B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808003B4: jr          $ra
    // 0x808003B8: nop

    return;
    // 0x808003B8: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808003C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808003C8: jal         0x800000C8
    // 0x808003CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_808000C8_bskazstilt(rdram, ctx);
        goto after_0;
    // 0x808003CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x808003D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808003D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808003D8: jal         0x8009D2F0
    // 0x808003DC: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009D2F0(rdram, ctx);
        goto after_1;
    // 0x808003DC: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_1:
    // 0x808003E0: jal         0x8008CAEC
    // 0x808003E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008CAEC(rdram, ctx);
        goto after_2;
    // 0x808003E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x808003E8: beq         $v0, $zero, L_808003F4
    if (ctx->r2 == 0) {
        // 0x808003EC: addiu       $t6, $zero, 0x48
        ctx->r14 = ADD32(0, 0X48);
            goto L_808003F4;
    }
    // 0x808003EC: addiu       $t6, $zero, 0x48
    ctx->r14 = ADD32(0, 0X48);
    // 0x808003F0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_808003F4:
    // 0x808003F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808003F8: jal         0x8009E5C8
    // 0x808003FC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x808003FC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x80800400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800404: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800408: jr          $ra
    // 0x8080040C: nop

    return;
    // 0x8080040C: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800414: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800418: jal         0x80000234
    // 0x8080041C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800234_bskazstilt(rdram, ctx);
        goto after_0;
    // 0x8080041C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800420: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800424: jal         0x800C2FDC
    // 0x80800428: lbu         $a0, 0x160($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X160);
    func_800C2FDC(rdram, ctx);
        goto after_1;
    // 0x80800428: lbu         $a0, 0x160($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X160);
    after_1:
    // 0x8080042C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800430: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800434: jr          $ra
    // 0x80800438: nop

    return;
    // 0x80800438: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080043C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800440: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(129, 0X1200) << 16);
    // 0x80800444: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800448: jr          $ra
    // 0x8080044C: lw          $v0, 0x1200($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(129, 0X1200));
    return;
    // 0x8080044C: lw          $v0, 0x1200($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(129, 0X1200));
;}
RECOMP_FUNC void bskazstilt_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800450: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800454: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800458: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8080045C: addiu       $a1, $zero, 0x149
    ctx->r5 = ADD32(0, 0X149);
    // 0x80800460: jal         0x8008CB3C
    // 0x80800464: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_0;
    // 0x80800464: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_0:
    // 0x80800468: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8080046C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800470: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800474: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800478: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080047C: jal         0x8009FFD8
    // 0x80800480: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800480: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80800484: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800488: jal         0x8009B9B0
    // 0x8080048C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x8080048C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800490: jal         0x8000013C
    // 0x80800494: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8080013C_bskazstilt(rdram, ctx);
        goto after_3;
    // 0x80800494: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x80800498: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080049C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808004A0: jr          $ra
    // 0x808004A4: nop

    return;
    // 0x808004A4: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808004AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808004B0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808004B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808004B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808004BC: jal         0x800000C8
    // 0x808004C0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_808000C8_bskazstilt(rdram, ctx);
        goto after_0;
    // 0x808004C0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x808004C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808004CC: jal         0x8009D2F0
    // 0x808004D0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009D2F0(rdram, ctx);
        goto after_1;
    // 0x808004D0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_1:
    // 0x808004D4: jal         0x80097AD0
    // 0x808004D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097AD0(rdram, ctx);
        goto after_2;
    // 0x808004D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808004DC: beql        $v0, $zero, L_808004F4
    if (ctx->r2 == 0) {
        // 0x808004E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004F4;
    }
    goto skip_0;
    // 0x808004E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808004E4: jal         0x800848A8
    // 0x808004E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_3;
    // 0x808004E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808004EC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x808004F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808004F4:
    // 0x808004F4: jal         0x80091A58
    // 0x808004F8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_4;
    // 0x808004F8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_4:
    // 0x808004FC: beq         $v0, $zero, L_8080050C
    if (ctx->r2 == 0) {
        // 0x80800500: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080050C;
    }
    // 0x80800500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800504: jal         0x80091788
    // 0x80800508: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80091788(rdram, ctx);
        goto after_5;
    // 0x80800508: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
L_8080050C:
    // 0x8080050C: jal         0x8009EF10
    // 0x80800510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_6;
    // 0x80800510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800514: blez        $v0, L_80800520
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80800518: nop
    
            goto L_80800520;
    }
    // 0x80800518: nop

    // 0x8080051C: addiu       $s1, $zero, 0x49
    ctx->r17 = ADD32(0, 0X49);
L_80800520:
    // 0x80800520: jal         0x8008DF18
    // 0x80800524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DF18(rdram, ctx);
        goto after_7;
    // 0x80800524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800528: beq         $v0, $zero, L_80800534
    if (ctx->r2 == 0) {
        // 0x8080052C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800534;
    }
    // 0x8080052C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800530: addiu       $s1, $zero, 0x4D
    ctx->r17 = ADD32(0, 0X4D);
L_80800534:
    // 0x80800534: jal         0x80091A58
    // 0x80800538: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_8;
    // 0x80800538: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_8:
    // 0x8080053C: beql        $v0, $zero, L_8080055C
    if (ctx->r2 == 0) {
        // 0x80800540: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080055C;
    }
    goto skip_1;
    // 0x80800540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800544: jal         0x8008E078
    // 0x80800548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_9;
    // 0x80800548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080054C: beql        $v0, $zero, L_8080055C
    if (ctx->r2 == 0) {
        // 0x80800550: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080055C;
    }
    goto skip_2;
    // 0x80800550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80800554: addiu       $s1, $zero, 0x4A
    ctx->r17 = ADD32(0, 0X4A);
    // 0x80800558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080055C:
    // 0x8080055C: jal         0x800915AC
    // 0x80800560: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800915AC(rdram, ctx);
        goto after_10;
    // 0x80800560: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x80800564: beq         $v0, $zero, L_80800570
    if (ctx->r2 == 0) {
        // 0x80800568: nop
    
            goto L_80800570;
    }
    // 0x80800568: nop

    // 0x8080056C: addiu       $s1, $zero, 0x4B
    ctx->r17 = ADD32(0, 0X4B);
L_80800570:
    // 0x80800570: jal         0x80000000
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bskazstilt(rdram, ctx);
        goto after_11;
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800578: beq         $v0, $zero, L_80800584
    if (ctx->r2 == 0) {
        // 0x8080057C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800584;
    }
    // 0x8080057C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800580: addiu       $s1, $zero, 0x160
    ctx->r17 = ADD32(0, 0X160);
L_80800584:
    // 0x80800584: jal         0x8009E5C8
    // 0x80800588: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_12;
    // 0x80800588: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_12:
    // 0x8080058C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800590: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800594: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800598: jr          $ra
    // 0x8080059C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8080059C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bskazstilt_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005A8: jal         0x80000234
    // 0x808005AC: nop

    func_80800234_bskazstilt(rdram, ctx);
        goto after_0;
    // 0x808005AC: nop

    after_0:
    // 0x808005B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808005B8: jr          $ra
    // 0x808005BC: nop

    return;
    // 0x808005BC: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005C0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808005C4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(129, 0X1210) << 16);
    // 0x808005C8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808005CC: jr          $ra
    // 0x808005D0: lw          $v0, 0x1210($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(129, 0X1210));
    return;
    // 0x808005D0: lw          $v0, 0x1210($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(129, 0X1210));
;}
RECOMP_FUNC void bskazstilt_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808005D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808005DC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808005E0: addiu       $a1, $zero, 0x280
    ctx->r5 = ADD32(0, 0X280);
    // 0x808005E4: jal         0x8008CB3C
    // 0x808005E8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_0;
    // 0x808005E8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_0:
    // 0x808005EC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808005F0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808005F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808005F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808005FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800600: jal         0x8009FFD8
    // 0x80800604: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800604: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80800608: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(129, 0X11F0) << 16);
    // 0x8080060C: lwc1        $f4, 0x11F0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(129, 0X11F0));
    // 0x80800610: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800614: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80800618: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    // 0x8080061C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80800620: jal         0x8008C9F0
    // 0x80800624: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_2;
    // 0x80800624: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80800628: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080062C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800630: jr          $ra
    // 0x80800634: nop

    return;
    // 0x80800634: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800638: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080063C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800640: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800644: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800648: jal         0x8008CABC
    // 0x8080064C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080064C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800650: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800654: jal         0x800000C8
    // 0x80800658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000C8_bskazstilt(rdram, ctx);
        goto after_1;
    // 0x80800658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080065C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800660: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800664: jal         0x8009D2F0
    // 0x80800668: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009D2F0(rdram, ctx);
        goto after_2;
    // 0x80800668: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_2:
    // 0x8080066C: lui         $a1, 0x3EF0
    ctx->r5 = S32(0X3EF0 << 16);
    // 0x80800670: ori         $a1, $a1, 0xA3D7
    ctx->r5 = ctx->r5 | 0XA3D7;
    // 0x80800674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800678: jal         0x800A2CE8
    // 0x8080067C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_3;
    // 0x8080067C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x80800680: lui         $a1, 0x3F78
    ctx->r5 = S32(0X3F78 << 16);
    // 0x80800684: ori         $a1, $a1, 0x51EC
    ctx->r5 = ctx->r5 | 0X51EC;
    // 0x80800688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080068C: jal         0x800A2CE8
    // 0x80800690: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_4;
    // 0x80800690: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_4:
    // 0x80800694: lui         $a1, 0x3F47
    ctx->r5 = S32(0X3F47 << 16);
    // 0x80800698: ori         $a1, $a1, 0x3190
    ctx->r5 = ctx->r5 | 0X3190;
    // 0x8080069C: jal         0x8008B348
    // 0x808006A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_5;
    // 0x808006A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x808006A4: beq         $v0, $zero, L_808006B4
    if (ctx->r2 == 0) {
        // 0x808006A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006B4;
    }
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006AC: jal         0x80000020
    // 0x808006B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800020_bskazstilt(rdram, ctx);
        goto after_6;
    // 0x808006B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_808006B4:
    // 0x808006B4: lui         $a1, 0x3E8E
    ctx->r5 = S32(0X3E8E << 16);
    // 0x808006B8: ori         $a1, $a1, 0x6320
    ctx->r5 = ctx->r5 | 0X6320;
    // 0x808006BC: jal         0x8008B348
    // 0x808006C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x808006C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_7:
    // 0x808006C4: beq         $v0, $zero, L_808006D4
    if (ctx->r2 == 0) {
        // 0x808006C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006D4;
    }
    // 0x808006C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006CC: jal         0x80000020
    // 0x808006D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800020_bskazstilt(rdram, ctx);
        goto after_8;
    // 0x808006D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
L_808006D4:
    // 0x808006D4: jal         0x80000064
    // 0x808006D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800064_bskazstilt(rdram, ctx);
        goto after_9;
    // 0x808006D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808006DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006E0: jal         0x80091A58
    // 0x808006E4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_10;
    // 0x808006E4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_10:
    // 0x808006E8: beq         $v0, $zero, L_80800718
    if (ctx->r2 == 0) {
        // 0x808006EC: nop
    
            goto L_80800718;
    }
    // 0x808006EC: nop

    // 0x808006F0: jal         0x8009BB00
    // 0x808006F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_11;
    // 0x808006F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808006F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808006FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800700: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800704: nop

    // 0x80800708: bc1f        L_80800718
    if (!c1cs) {
        // 0x8080070C: nop
    
            goto L_80800718;
    }
    // 0x8080070C: nop

    // 0x80800710: jal         0x80091788
    // 0x80800714: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80091788(rdram, ctx);
        goto after_12;
    // 0x80800714: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
L_80800718:
    // 0x80800718: jal         0x8009EF10
    // 0x8080071C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_13;
    // 0x8080071C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800720: bne         $v0, $zero, L_8080073C
    if (ctx->r2 != 0) {
        // 0x80800724: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080073C;
    }
    // 0x80800724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800728: jal         0x8009BCD4
    // 0x8080072C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_14;
    // 0x8080072C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_14:
    // 0x80800730: beq         $v0, $zero, L_8080073C
    if (ctx->r2 == 0) {
        // 0x80800734: addiu       $t6, $zero, 0x48
        ctx->r14 = ADD32(0, 0X48);
            goto L_8080073C;
    }
    // 0x80800734: addiu       $t6, $zero, 0x48
    ctx->r14 = ADD32(0, 0X48);
    // 0x80800738: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_8080073C:
    // 0x8080073C: jal         0x8008DF18
    // 0x80800740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DF18(rdram, ctx);
        goto after_15;
    // 0x80800740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800744: beq         $v0, $zero, L_80800754
    if (ctx->r2 == 0) {
        // 0x80800748: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800754;
    }
    // 0x80800748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080074C: addiu       $t7, $zero, 0x4D
    ctx->r15 = ADD32(0, 0X4D);
    // 0x80800750: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80800754:
    // 0x80800754: jal         0x80091A58
    // 0x80800758: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_16;
    // 0x80800758: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_16:
    // 0x8080075C: beql        $v0, $zero, L_8080077C
    if (ctx->r2 == 0) {
        // 0x80800760: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080077C;
    }
    goto skip_0;
    // 0x80800760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800764: jal         0x8008E078
    // 0x80800768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_17;
    // 0x80800768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x8080076C: beq         $v0, $zero, L_80800778
    if (ctx->r2 == 0) {
        // 0x80800770: addiu       $t8, $zero, 0x4A
        ctx->r24 = ADD32(0, 0X4A);
            goto L_80800778;
    }
    // 0x80800770: addiu       $t8, $zero, 0x4A
    ctx->r24 = ADD32(0, 0X4A);
    // 0x80800774: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80800778:
    // 0x80800778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080077C:
    // 0x8080077C: jal         0x800915AC
    // 0x80800780: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800915AC(rdram, ctx);
        goto after_18;
    // 0x80800780: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_18:
    // 0x80800784: beq         $v0, $zero, L_80800790
    if (ctx->r2 == 0) {
        // 0x80800788: addiu       $t9, $zero, 0x4B
        ctx->r25 = ADD32(0, 0X4B);
            goto L_80800790;
    }
    // 0x80800788: addiu       $t9, $zero, 0x4B
    ctx->r25 = ADD32(0, 0X4B);
    // 0x8080078C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80800790:
    // 0x80800790: jal         0x80000000
    // 0x80800794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bskazstilt(rdram, ctx);
        goto after_19;
    // 0x80800794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800798: beq         $v0, $zero, L_808007A8
    if (ctx->r2 == 0) {
        // 0x8080079C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007A8;
    }
    // 0x8080079C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007A0: addiu       $t0, $zero, 0x160
    ctx->r8 = ADD32(0, 0X160);
    // 0x808007A4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_808007A8:
    // 0x808007A8: jal         0x8009E5C8
    // 0x808007AC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_20;
    // 0x808007AC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_20:
    // 0x808007B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808007B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808007B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808007BC: jr          $ra
    // 0x808007C0: nop

    return;
    // 0x808007C0: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808007C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808007CC: jal         0x80000234
    // 0x808007D0: nop

    func_80800234_bskazstilt(rdram, ctx);
        goto after_0;
    // 0x808007D0: nop

    after_0:
    // 0x808007D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808007D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808007DC: jr          $ra
    // 0x808007E0: nop

    return;
    // 0x808007E0: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007E4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808007E8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(129, 0X1220) << 16);
    // 0x808007EC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808007F0: jr          $ra
    // 0x808007F4: lw          $v0, 0x1220($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(129, 0X1220));
    return;
    // 0x808007F4: lw          $v0, 0x1220($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(129, 0X1220));
;}
RECOMP_FUNC void bskazstilt_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808007FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800800: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800804: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800808: jal         0x8008CABC
    // 0x8080080C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080080C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800810: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800814: jal         0x8008AF24
    // 0x80800818: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80800818: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8080081C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800820: jal         0x8008B1A0
    // 0x80800824: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_2;
    // 0x80800824: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080082C: jal         0x8008B188
    // 0x80800830: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B188(rdram, ctx);
        goto after_3;
    // 0x80800830: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800838: jal         0x8008AED4
    // 0x8080083C: addiu       $a1, $zero, 0x27F
    ctx->r5 = ADD32(0, 0X27F);
    func_8008AED4(rdram, ctx);
        goto after_4;
    // 0x8080083C: addiu       $a1, $zero, 0x27F
    ctx->r5 = ADD32(0, 0X27F);
    after_4:
    // 0x80800840: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x80800844: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800848: jal         0x8008B1BC
    // 0x8080084C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_5;
    // 0x8080084C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800854: jal         0x8008B134
    // 0x80800858: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_6;
    // 0x80800858: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x8080085C: jal         0x8008B064
    // 0x80800860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x80800860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800864: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800868: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080086C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800870: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800874: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800878: jal         0x8009FFD8
    // 0x8080087C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_8;
    // 0x8080087C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_8:
    // 0x80800880: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800884: jal         0x8009B9B0
    // 0x80800888: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_9;
    // 0x80800888: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_9:
    // 0x8080088C: jal         0x800C2E04
    // 0x80800890: nop

    func_800C2E04(rdram, ctx);
        goto after_10;
    // 0x80800890: nop

    after_10:
    // 0x80800894: sb          $v0, 0x160($s1)
    MEM_B(0X160, ctx->r17) = ctx->r2;
    // 0x80800898: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x8080089C: jal         0x800C301C
    // 0x808008A0: addiu       $a1, $zero, 0x41D
    ctx->r5 = ADD32(0, 0X41D);
    func_800C301C(rdram, ctx);
        goto after_11;
    // 0x808008A0: addiu       $a1, $zero, 0x41D
    ctx->r5 = ADD32(0, 0X41D);
    after_11:
    // 0x808008A4: lbu         $a0, 0x160($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X160);
    // 0x808008A8: jal         0x800C330C
    // 0x808008AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800C330C(rdram, ctx);
        goto after_12;
    // 0x808008AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_12:
    // 0x808008B0: lui         $a1, 0x3FB3
    ctx->r5 = S32(0X3FB3 << 16);
    // 0x808008B4: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x808008B8: lui         $a3, 0xBF99
    ctx->r7 = S32(0XBF99 << 16);
    // 0x808008BC: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x808008C0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808008C4: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x808008C8: jal         0x800C3730
    // 0x808008CC: lbu         $a0, 0x160($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X160);
    func_800C3730(rdram, ctx);
        goto after_13;
    // 0x808008CC: lbu         $a0, 0x160($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X160);
    after_13:
    // 0x808008D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808008D4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x808008D8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808008DC: jr          $ra
    // 0x808008E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x808008E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void bskazstilt_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808008E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808008EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808008F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808008F4: jal         0x8008CABC
    // 0x808008F8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808008F8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808008FC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800904: jal         0x8009D3A8
    // 0x80800908: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D3A8(rdram, ctx);
        goto after_1;
    // 0x80800908: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8080090C: lui         $a1, 0x3F2E
    ctx->r5 = S32(0X3F2E << 16);
    // 0x80800910: ori         $a1, $a1, 0x147B
    ctx->r5 = ctx->r5 | 0X147B;
    // 0x80800914: jal         0x8008B348
    // 0x80800918: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_2;
    // 0x80800918: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x8080091C: beq         $v0, $zero, L_8080092C
    if (ctx->r2 == 0) {
        // 0x80800920: nop
    
            goto L_8080092C;
    }
    // 0x80800920: nop

    // 0x80800924: jal         0x800C3BDC
    // 0x80800928: lbu         $a0, 0x160($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X160);
    func_800C3BDC(rdram, ctx);
        goto after_3;
    // 0x80800928: lbu         $a0, 0x160($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X160);
    after_3:
L_8080092C:
    // 0x8080092C: jal         0x8008B324
    // 0x80800930: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_4;
    // 0x80800930: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800934: beq         $v0, $zero, L_80800940
    if (ctx->r2 == 0) {
        // 0x80800938: addiu       $t6, $zero, 0xBB
        ctx->r14 = ADD32(0, 0XBB);
            goto L_80800940;
    }
    // 0x80800938: addiu       $t6, $zero, 0xBB
    ctx->r14 = ADD32(0, 0XBB);
    // 0x8080093C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800940:
    // 0x80800940: jal         0x80000000
    // 0x80800944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bskazstilt(rdram, ctx);
        goto after_5;
    // 0x80800944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800948: beq         $v0, $zero, L_80800958
    if (ctx->r2 == 0) {
        // 0x8080094C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800958;
    }
    // 0x8080094C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800950: addiu       $t7, $zero, 0x160
    ctx->r15 = ADD32(0, 0X160);
    // 0x80800954: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80800958:
    // 0x80800958: jal         0x8009E5C8
    // 0x8080095C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x8080095C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x80800960: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800964: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800968: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080096C: jr          $ra
    // 0x80800970: nop

    return;
    // 0x80800970: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800974: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800978: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080097C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800980: jal         0x800C2FDC
    // 0x80800984: lbu         $a0, 0x160($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X160);
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x80800984: lbu         $a0, 0x160($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X160);
    after_0:
    // 0x80800988: jal         0x80000234
    // 0x8080098C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800234_bskazstilt(rdram, ctx);
        goto after_1;
    // 0x8080098C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800994: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800998: jr          $ra
    // 0x8080099C: nop

    return;
    // 0x8080099C: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009A0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808009A4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(129, 0X1230) << 16);
    // 0x808009A8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808009AC: jr          $ra
    // 0x808009B0: lw          $v0, 0x1230($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(129, 0X1230));
    return;
    // 0x808009B0: lw          $v0, 0x1230($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(129, 0X1230));
;}
RECOMP_FUNC void bskazstilt_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009B4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808009B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808009BC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x808009C0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808009C4: jal         0x8008CABC
    // 0x808009C8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808009C8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x808009CC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(129, 0X11F4) << 16);
    // 0x808009D0: lwc1        $f4, 0x11F4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(129, 0X11F4));
    // 0x808009D4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808009D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808009DC: jal         0x8008AF24
    // 0x808009E0: swc1        $f4, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f4.u32l;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x808009E0: swc1        $f4, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f4.u32l;
    after_1:
    // 0x808009E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009E8: jal         0x8008AED4
    // 0x808009EC: addiu       $a1, $zero, 0x14A
    ctx->r5 = ADD32(0, 0X14A);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x808009EC: addiu       $a1, $zero, 0x14A
    ctx->r5 = ADD32(0, 0X14A);
    after_2:
    // 0x808009F0: lui         $a1, 0x3E09
    ctx->r5 = S32(0X3E09 << 16);
    // 0x808009F4: ori         $a1, $a1, 0x374C
    ctx->r5 = ctx->r5 | 0X374C;
    // 0x808009F8: jal         0x8008B1C8
    // 0x808009FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1C8(rdram, ctx);
        goto after_3;
    // 0x808009FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800A00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A04: jal         0x8008B1BC
    // 0x80800A08: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_4;
    // 0x80800A08: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_4:
    // 0x80800A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A10: jal         0x8008B24C
    // 0x80800A14: lw          $a1, 0x16C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X16C);
    func_8008B24C(rdram, ctx);
        goto after_5;
    // 0x80800A14: lw          $a1, 0x16C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X16C);
    after_5:
    // 0x80800A18: lui         $a2, 0x3ED7
    ctx->r6 = S32(0X3ED7 << 16);
    // 0x80800A1C: ori         $a2, $a2, 0xA3D
    ctx->r6 = ctx->r6 | 0XA3D;
    // 0x80800A20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A24: jal         0x8008B1D4
    // 0x80800A28: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_6;
    // 0x80800A28: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x80800A2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A30: jal         0x8008B134
    // 0x80800A34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_7;
    // 0x80800A34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80800A38: jal         0x8008B064
    // 0x80800A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_8;
    // 0x80800A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800A40: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800A44: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800A48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800A4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800A50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800A54: jal         0x8009FFD8
    // 0x80800A58: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_9;
    // 0x80800A58: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_9:
    // 0x80800A5C: jal         0x8009EF04
    // 0x80800A60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EF04(rdram, ctx);
        goto after_10;
    // 0x80800A60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x80800A64: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80800A68: nop

    // 0x80800A6C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80800A70: nop

    // 0x80800A74: bc1t        L_80800A90
    if (c1cs) {
        // 0x80800A78: nop
    
            goto L_80800A90;
    }
    // 0x80800A78: nop

    // 0x80800A7C: jal         0x8009EEB8
    // 0x80800A80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_11;
    // 0x80800A80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x80800A84: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800A88: jal         0x8009C914
    // 0x80800A8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C914(rdram, ctx);
        goto after_12;
    // 0x80800A8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
L_80800A90:
    // 0x80800A90: jal         0x8009C990
    // 0x80800A94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_13;
    // 0x80800A94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x80800A98: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800A9C: jal         0x8009B9C0
    // 0x80800AA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_14;
    // 0x80800AA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x80800AA4: jal         0x80000064
    // 0x80800AA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800064_bskazstilt(rdram, ctx);
        goto after_15;
    // 0x80800AA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x80800AAC: jal         0x8009C990
    // 0x80800AB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_16;
    // 0x80800AB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x80800AB4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800AB8: jal         0x8009BB00
    // 0x80800ABC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BB00(rdram, ctx);
        goto after_17;
    // 0x80800ABC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x80800AC0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800AC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800AC8: jal         0x8009BA68
    // 0x80800ACC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_18;
    // 0x80800ACC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_18:
    // 0x80800AD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800AD4: jal         0x8009BA58
    // 0x80800AD8: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    func_8009BA58(rdram, ctx);
        goto after_19;
    // 0x80800AD8: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    after_19:
    // 0x80800ADC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800AE0: jal         0x8009BCB4
    // 0x80800AE4: lui         $a1, 0xC448
    ctx->r5 = S32(0XC448 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_20;
    // 0x80800AE4: lui         $a1, 0xC448
    ctx->r5 = S32(0XC448 << 16);
    after_20:
    // 0x80800AE8: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x80800AEC: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800AF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800AF4: jal         0x8009DE38
    // 0x80800AF8: addiu       $a1, $zero, 0x4432
    ctx->r5 = ADD32(0, 0X4432);
    func_8009DE38(rdram, ctx);
        goto after_21;
    // 0x80800AF8: addiu       $a1, $zero, 0x4432
    ctx->r5 = ADD32(0, 0X4432);
    after_21:
    // 0x80800AFC: sw          $zero, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = 0;
    // 0x80800B00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800B04: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800B08: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800B0C: jr          $ra
    // 0x80800B10: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80800B10: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void bskazstilt_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B14: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80800B18: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800B1C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800B20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800B24: jal         0x8008CABC
    // 0x80800B28: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800B28: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    after_0:
    // 0x80800B2C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x80800B30: jal         0x800000C8
    // 0x80800B34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000C8_bskazstilt(rdram, ctx);
        goto after_1;
    // 0x80800B34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800B38: jal         0x80000064
    // 0x80800B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800064_bskazstilt(rdram, ctx);
        goto after_2;
    // 0x80800B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800B40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B44: jal         0x8009BB24
    // 0x80800B48: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_8009BB24(rdram, ctx);
        goto after_3;
    // 0x80800B48: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x80800B4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B50: jal         0x80091A30
    // 0x80800B54: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_4;
    // 0x80800B54: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_4:
    // 0x80800B58: beq         $v0, $zero, L_80800B80
    if (ctx->r2 == 0) {
        // 0x80800B5C: lwc1        $f6, 0x40($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
            goto L_80800B80;
    }
    // 0x80800B5C: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800B60: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800B64: nop

    // 0x80800B68: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800B6C: nop

    // 0x80800B70: bc1f        L_80800B80
    if (!c1cs) {
        // 0x80800B74: nop
    
            goto L_80800B80;
    }
    // 0x80800B74: nop

    // 0x80800B78: jal         0x8009BC6C
    // 0x80800B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_5;
    // 0x80800B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_80800B80:
    // 0x80800B80: jal         0x8009C150
    // 0x80800B84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C150(rdram, ctx);
        goto after_6;
    // 0x80800B84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800B88: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80800B8C: jal         0x80096364
    // 0x80800B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096364(rdram, ctx);
        goto after_7;
    // 0x80800B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800B94: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80800B98: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x80800B9C: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800BA0: sub.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x80800BA4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80800BA8: beq         $v0, $zero, L_80800BDC
    if (ctx->r2 == 0) {
        // 0x80800BAC: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_80800BDC;
    }
    // 0x80800BAC: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x80800BB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800BB4: beq         $v0, $at, L_80800C5C
    if (ctx->r2 == ctx->r1) {
        // 0x80800BB8: lw          $a0, 0x48($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X48);
            goto L_80800C5C;
    }
    // 0x80800BB8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800BBC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800BC0: beq         $v0, $at, L_80800CC8
    if (ctx->r2 == ctx->r1) {
        // 0x80800BC4: lui         $a2, 0x3F80
        ctx->r6 = S32(0X3F80 << 16);
            goto L_80800CC8;
    }
    // 0x80800BC4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800BC8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800BCC: beq         $v0, $at, L_80800D4C
    if (ctx->r2 == ctx->r1) {
        // 0x80800BD0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800D4C;
    }
    // 0x80800BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BD4: b           L_80800D9C
    // 0x80800BD8: nop

        goto L_80800D9C;
    // 0x80800BD8: nop

L_80800BDC:
    // 0x80800BDC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800BE0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80800BE4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800BE8: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80800BEC: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x80800BF0: bc1t        L_80800C10
    if (c1cs) {
        // 0x80800BF4: nop
    
            goto L_80800C10;
    }
    // 0x80800BF4: nop

    // 0x80800BF8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80800BFC: nop

    // 0x80800C00: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x80800C04: nop

    // 0x80800C08: bc1f        L_80800C18
    if (!c1cs) {
        // 0x80800C0C: nop
    
            goto L_80800C18;
    }
    // 0x80800C0C: nop

L_80800C10:
    // 0x80800C10: jal         0x8008B1BC
    // 0x80800C14: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_8008B1BC(rdram, ctx);
        goto after_8;
    // 0x80800C14: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_8:
L_80800C18:
    // 0x80800C18: jal         0x8008B324
    // 0x80800C1C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_8008B324(rdram, ctx);
        goto after_9;
    // 0x80800C1C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_9:
    // 0x80800C20: beq         $v0, $zero, L_80800D9C
    if (ctx->r2 == 0) {
        // 0x80800C24: lw          $a0, 0x48($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X48);
            goto L_80800D9C;
    }
    // 0x80800C24: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800C28: lui         $a2, 0x3F07
    ctx->r6 = S32(0X3F07 << 16);
    // 0x80800C2C: ori         $a2, $a2, 0x381D
    ctx->r6 = ctx->r6 | 0X381D;
    // 0x80800C30: jal         0x8008B1D4
    // 0x80800C34: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_10;
    // 0x80800C34: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_10:
    // 0x80800C38: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800C3C: jal         0x8008B1BC
    // 0x80800C40: lui         $a1, 0x4090
    ctx->r5 = S32(0X4090 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_11;
    // 0x80800C40: lui         $a1, 0x4090
    ctx->r5 = S32(0X4090 << 16);
    after_11:
    // 0x80800C44: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800C48: jal         0x8008B134
    // 0x80800C4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_12;
    // 0x80800C4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x80800C50: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800C54: b           L_80800D9C
    // 0x80800C58: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
        goto L_80800D9C;
    // 0x80800C58: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_80800C5C:
    // 0x80800C5C: jal         0x8008B2B4
    // 0x80800C60: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    func_8008B2B4(rdram, ctx);
        goto after_13;
    // 0x80800C60: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    after_13:
    // 0x80800C64: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(129, 0X11F8) << 16);
    // 0x80800C68: lwc1        $f4, 0x11F8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(129, 0X11F8));
    // 0x80800C6C: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x80800C70: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800C74: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800C78: nop

    // 0x80800C7C: bc1f        L_80800D9C
    if (!c1cs) {
        // 0x80800C80: nop
    
            goto L_80800D9C;
    }
    // 0x80800C80: nop

    // 0x80800C84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800C88: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800C8C: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80800C90: nop

    // 0x80800C94: bc1f        L_80800D9C
    if (!c1cs) {
        // 0x80800C98: nop
    
            goto L_80800D9C;
    }
    // 0x80800C98: nop

    // 0x80800C9C: jal         0x8008B2B4
    // 0x80800CA0: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    func_8008B2B4(rdram, ctx);
        goto after_14;
    // 0x80800CA0: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    after_14:
    // 0x80800CA4: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800CA8: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x80800CAC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80800CB0: swc1        $f12, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f12.u32l;
    // 0x80800CB4: jal         0x8008B134
    // 0x80800CB8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_8008B134(rdram, ctx);
        goto after_15;
    // 0x80800CB8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_15:
    // 0x80800CBC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80800CC0: b           L_80800D9C
    // 0x80800CC4: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
        goto L_80800D9C;
    // 0x80800CC4: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_80800CC8:
    // 0x80800CC8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(129, 0X11FC) << 16);
    // 0x80800CCC: lwc1        $f8, 0x11FC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(129, 0X11FC));
    // 0x80800CD0: lwc1        $f14, 0x170($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X170);
    // 0x80800CD4: lw          $a3, 0x16C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X16C);
    // 0x80800CD8: jal         0x800F10B4
    // 0x80800CDC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_16;
    // 0x80800CDC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_16:
    // 0x80800CE0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800CE4: jal         0x8008B10C
    // 0x80800CE8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_8008B10C(rdram, ctx);
        goto after_17;
    // 0x80800CE8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_17:
    // 0x80800CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800CF4: jal         0x8009D2F0
    // 0x80800CF8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009D2F0(rdram, ctx);
        goto after_18;
    // 0x80800CF8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_18:
    // 0x80800CFC: jal         0x8008E078
    // 0x80800D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_19;
    // 0x80800D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800D04: beq         $v0, $zero, L_80800D9C
    if (ctx->r2 == 0) {
        // 0x80800D08: nop
    
            goto L_80800D9C;
    }
    // 0x80800D08: nop

    // 0x80800D0C: jal         0x8009FE58
    // 0x80800D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE58(rdram, ctx);
        goto after_20;
    // 0x80800D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80800D14: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800D18: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80800D1C: jal         0x8008B1D4
    // 0x80800D20: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008B1D4(rdram, ctx);
        goto after_21;
    // 0x80800D20: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_21:
    // 0x80800D24: lui         $a1, 0x3FA6
    ctx->r5 = S32(0X3FA6 << 16);
    // 0x80800D28: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80800D2C: jal         0x8008B1BC
    // 0x80800D30: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_8008B1BC(rdram, ctx);
        goto after_22;
    // 0x80800D30: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_22:
    // 0x80800D34: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800D38: jal         0x8008B134
    // 0x80800D3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_23;
    // 0x80800D3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
    // 0x80800D40: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80800D44: b           L_80800D9C
    // 0x80800D48: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
        goto L_80800D9C;
    // 0x80800D48: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
L_80800D4C:
    // 0x80800D4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800D50: jal         0x8009D2F0
    // 0x80800D54: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009D2F0(rdram, ctx);
        goto after_24;
    // 0x80800D54: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_24:
    // 0x80800D58: jal         0x8008B324
    // 0x80800D5C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_8008B324(rdram, ctx);
        goto after_25;
    // 0x80800D5C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_25:
    // 0x80800D60: beq         $v0, $zero, L_80800D70
    if (ctx->r2 == 0) {
        // 0x80800D64: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800D70;
    }
    // 0x80800D64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D68: addiu       $t9, $zero, 0x48
    ctx->r25 = ADD32(0, 0X48);
    // 0x80800D6C: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
L_80800D70:
    // 0x80800D70: jal         0x80091A58
    // 0x80800D74: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_26;
    // 0x80800D74: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_26:
    // 0x80800D78: beq         $v0, $zero, L_80800D88
    if (ctx->r2 == 0) {
        // 0x80800D7C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800D88;
    }
    // 0x80800D7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D80: addiu       $t0, $zero, 0x4A
    ctx->r8 = ADD32(0, 0X4A);
    // 0x80800D84: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
L_80800D88:
    // 0x80800D88: jal         0x800915AC
    // 0x80800D8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800915AC(rdram, ctx);
        goto after_27;
    // 0x80800D8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_27:
    // 0x80800D90: beq         $v0, $zero, L_80800D9C
    if (ctx->r2 == 0) {
        // 0x80800D94: addiu       $t1, $zero, 0x4B
        ctx->r9 = ADD32(0, 0X4B);
            goto L_80800D9C;
    }
    // 0x80800D94: addiu       $t1, $zero, 0x4B
    ctx->r9 = ADD32(0, 0X4B);
    // 0x80800D98: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
L_80800D9C:
    // 0x80800D9C: jal         0x80000000
    // 0x80800DA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bskazstilt(rdram, ctx);
        goto after_28;
    // 0x80800DA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x80800DA4: beq         $v0, $zero, L_80800DB4
    if (ctx->r2 == 0) {
        // 0x80800DA8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800DB4;
    }
    // 0x80800DA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DAC: addiu       $t2, $zero, 0x160
    ctx->r10 = ADD32(0, 0X160);
    // 0x80800DB0: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
L_80800DB4:
    // 0x80800DB4: jal         0x8009E5C8
    // 0x80800DB8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009E5C8(rdram, ctx);
        goto after_29;
    // 0x80800DB8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_29:
    // 0x80800DBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800DC0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800DC4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80800DC8: jr          $ra
    // 0x80800DCC: nop

    return;
    // 0x80800DCC: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800DD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800DD8: jal         0x8009BC6C
    // 0x80800DDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x80800DDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800DE0: jal         0x80000234
    // 0x80800DE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800234_bskazstilt(rdram, ctx);
        goto after_1;
    // 0x80800DE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800DEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800DF0: jr          $ra
    // 0x80800DF4: nop

    return;
    // 0x80800DF4: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DF8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800DFC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(129, 0X1240) << 16);
    // 0x80800E00: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800E04: jr          $ra
    // 0x80800E08: lw          $v0, 0x1240($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(129, 0X1240));
    return;
    // 0x80800E08: lw          $v0, 0x1240($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(129, 0X1240));
;}
RECOMP_FUNC void bskazstilt_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E0C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800E10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800E14: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80800E18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800E1C: jal         0x8008CABC
    // 0x80800E20: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800E20: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    after_0:
    // 0x80800E24: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80800E28: jal         0x8000013C
    // 0x80800E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080013C_bskazstilt(rdram, ctx);
        goto after_1;
    // 0x80800E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800E30: jal         0x8008AF24
    // 0x80800E34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x80800E34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80800E38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800E3C: jal         0x8008AED4
    // 0x80800E40: addiu       $a1, $zero, 0x14A
    ctx->r5 = ADD32(0, 0X14A);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x80800E40: addiu       $a1, $zero, 0x14A
    ctx->r5 = ADD32(0, 0X14A);
    after_3:
    // 0x80800E44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800E48: jal         0x8008B134
    // 0x80800E4C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008B134(rdram, ctx);
        goto after_4;
    // 0x80800E4C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80800E50: lui         $a1, 0x3DB1
    ctx->r5 = S32(0X3DB1 << 16);
    // 0x80800E54: ori         $a1, $a1, 0x26E9
    ctx->r5 = ctx->r5 | 0X26E9;
    // 0x80800E58: jal         0x8008B24C
    // 0x80800E5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B24C(rdram, ctx);
        goto after_5;
    // 0x80800E5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x80800E60: jal         0x8008B064
    // 0x80800E64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B064(rdram, ctx);
        goto after_6;
    // 0x80800E64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x80800E68: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80800E6C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800E78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800E7C: jal         0x8009FFD8
    // 0x80800E80: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_7;
    // 0x80800E80: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_7:
    // 0x80800E84: jal         0x8009C990
    // 0x80800E88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_8;
    // 0x80800E88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800E8C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800E90: jal         0x8009B9C0
    // 0x80800E94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_9;
    // 0x80800E94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800E98: jal         0x8009C990
    // 0x80800E9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_10;
    // 0x80800E9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800EA0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800EA4: jal         0x8009BB00
    // 0x80800EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_11;
    // 0x80800EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800EAC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800EB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EB4: jal         0x8009BA68
    // 0x80800EB8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_12;
    // 0x80800EB8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_12:
    // 0x80800EBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EC0: jal         0x800A0CF4
    // 0x80800EC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_13;
    // 0x80800EC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x80800EC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800ECC: jal         0x800A0CE8
    // 0x80800ED0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CE8(rdram, ctx);
        goto after_14;
    // 0x80800ED0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x80800ED4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800ED8: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800EDC: jal         0x8009BFE4
    // 0x80800EE0: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_15;
    // 0x80800EE0: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_15:
    // 0x80800EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EE8: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800EEC: jal         0x8009C554
    // 0x80800EF0: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009C554(rdram, ctx);
        goto after_16;
    // 0x80800EF0: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_16:
    // 0x80800EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EF8: jal         0x8009B9B0
    // 0x80800EFC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_17;
    // 0x80800EFC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_17:
    // 0x80800F00: jal         0x8009D658
    // 0x80800F04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D658(rdram, ctx);
        goto after_18;
    // 0x80800F04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800F08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800F10: jal         0x80085338
    // 0x80800F14: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    _batimer_set(rdram, ctx);
        goto after_19;
    // 0x80800F14: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_19:
    // 0x80800F18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800F1C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800F20: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800F24: jr          $ra
    // 0x80800F28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80800F28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void bskazstilt_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F2C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800F30: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800F34: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800F38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800F3C: jal         0x800000C8
    // 0x80800F40: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    func_808000C8_bskazstilt(rdram, ctx);
        goto after_0;
    // 0x80800F40: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    after_0:
    // 0x80800F44: jal         0x8009D658
    // 0x80800F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D658(rdram, ctx);
        goto after_1;
    // 0x80800F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800F4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F50: jal         0x800852F0
    // 0x80800F54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_2;
    // 0x80800F54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800F58: jal         0x8008DF18
    // 0x80800F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DF18(rdram, ctx);
        goto after_3;
    // 0x80800F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800F60: beq         $v0, $zero, L_80800FE8
    if (ctx->r2 == 0) {
        // 0x80800F64: addiu       $t6, $zero, 0x48
        ctx->r14 = ADD32(0, 0X48);
            goto L_80800FE8;
    }
    // 0x80800F64: addiu       $t6, $zero, 0x48
    ctx->r14 = ADD32(0, 0X48);
    // 0x80800F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F6C: jal         0x800963C0
    // 0x80800F70: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_800963C0(rdram, ctx);
        goto after_4;
    // 0x80800F70: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_4:
    // 0x80800F74: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80800F78: jal         0x800F1EA4
    // 0x80800F7C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800F1EA4(rdram, ctx);
        goto after_5;
    // 0x80800F7C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_5:
    // 0x80800F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800F88: jal         0x8009D2F0
    // 0x80800F8C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009D2F0(rdram, ctx);
        goto after_6;
    // 0x80800F8C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_6:
    // 0x80800F90: jal         0x8009BFD8
    // 0x80800F94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BFD8(rdram, ctx);
        goto after_7;
    // 0x80800F94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800F98: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80800F9C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800FA0: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x80800FA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800FA8: lui         $a3, 0x4409
    ctx->r7 = S32(0X4409 << 16);
    // 0x80800FAC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80800FB0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800FB4: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80800FB8: jal         0x800F10B4
    // 0x80800FBC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_8;
    // 0x80800FBC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x80800FC0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800FC4: jal         0x8009B9B0
    // 0x80800FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_9;
    // 0x80800FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800FCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FD0: jal         0x8009B9C0
    // 0x80800FD4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009B9C0(rdram, ctx);
        goto after_10;
    // 0x80800FD4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_10:
    // 0x80800FD8: jal         0x800849D0
    // 0x80800FDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_1(rdram, ctx);
        goto after_11;
    // 0x80800FDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800FE0: b           L_80800FF0
    // 0x80800FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800FF0;
    // 0x80800FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800FE8:
    // 0x80800FE8: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x80800FEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800FF0:
    // 0x80800FF0: jal         0x80085330
    // 0x80800FF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_isZero(rdram, ctx);
        goto after_12;
    // 0x80800FF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x80800FF8: beq         $v0, $zero, L_80801014
    if (ctx->r2 == 0) {
        // 0x80800FFC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801014;
    }
    // 0x80800FFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801000: jal         0x80091A58
    // 0x80801004: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_13;
    // 0x80801004: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_13:
    // 0x80801008: beq         $v0, $zero, L_80801014
    if (ctx->r2 == 0) {
        // 0x8080100C: addiu       $t7, $zero, 0x4A
        ctx->r15 = ADD32(0, 0X4A);
            goto L_80801014;
    }
    // 0x8080100C: addiu       $t7, $zero, 0x4A
    ctx->r15 = ADD32(0, 0X4A);
    // 0x80801010: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
L_80801014:
    // 0x80801014: jal         0x80000000
    // 0x80801018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bskazstilt(rdram, ctx);
        goto after_14;
    // 0x80801018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x8080101C: beq         $v0, $zero, L_8080102C
    if (ctx->r2 == 0) {
        // 0x80801020: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080102C;
    }
    // 0x80801020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801024: addiu       $t8, $zero, 0x160
    ctx->r24 = ADD32(0, 0X160);
    // 0x80801028: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
L_8080102C:
    // 0x8080102C: jal         0x8009E5C8
    // 0x80801030: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_8009E5C8(rdram, ctx);
        goto after_15;
    // 0x80801030: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_15:
    // 0x80801034: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801038: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080103C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80801040: jr          $ra
    // 0x80801044: nop

    return;
    // 0x80801044: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801048: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080104C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801050: jal         0x80000234
    // 0x80801054: nop

    func_80800234_bskazstilt(rdram, ctx);
        goto after_0;
    // 0x80801054: nop

    after_0:
    // 0x80801058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080105C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801060: jr          $ra
    // 0x80801064: nop

    return;
    // 0x80801064: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801068: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080106C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(129, 0X1250) << 16);
    // 0x80801070: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801074: jr          $ra
    // 0x80801078: lw          $v0, 0x1250($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(129, 0X1250));
    return;
    // 0x80801078: lw          $v0, 0x1250($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(129, 0X1250));
;}
RECOMP_FUNC void bskazstilt_entrypoint_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080107C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801084: jal         0x800839B8
    // 0x80801088: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80801088: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080108C: jal         0x80000234
    // 0x80801090: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800234_bskazstilt(rdram, ctx);
        goto after_1;
    // 0x80801090: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080109C: jr          $ra
    // 0x808010A0: nop

    return;
    // 0x808010A0: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808010A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808010AC: jal         0x8000013C
    // 0x808010B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8080013C_bskazstilt(rdram, ctx);
        goto after_0;
    // 0x808010B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808010B4: jal         0x800839C8
    // 0x808010B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x808010B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808010BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808010C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808010C4: jr          $ra
    // 0x808010C8: nop

    return;
    // 0x808010C8: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808010D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808010D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808010D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808010DC: jal         0x800000C8
    // 0x808010E0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_808000C8_bskazstilt(rdram, ctx);
        goto after_0;
    // 0x808010E0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808010E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010E8: jal         0x8009D3A8
    // 0x808010EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D3A8(rdram, ctx);
        goto after_1;
    // 0x808010EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808010F0: jal         0x800839E8
    // 0x808010F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_2;
    // 0x808010F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808010F8: beql        $v0, $zero, L_80801110
    if (ctx->r2 == 0) {
        // 0x808010FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801110;
    }
    goto skip_0;
    // 0x808010FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80801100: jal         0x800839B0
    // 0x80801104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsrest_entrypoint_13(rdram, ctx);
        goto after_3;
    // 0x80801104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801108: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8080110C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801110:
    // 0x80801110: jal         0x8009E5C8
    // 0x80801114: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x80801114: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x80801118: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080111C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801120: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801124: jr          $ra
    // 0x80801128: nop

    return;
    // 0x80801128: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080112C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801130: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(129, 0X1260) << 16);
    // 0x80801134: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801138: jr          $ra
    // 0x8080113C: lw          $v0, 0x1260($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(129, 0X1260));
    return;
    // 0x8080113C: lw          $v0, 0x1260($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(129, 0X1260));
;}
RECOMP_FUNC void bskazstilt_entrypoint_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801148: jal         0x8000013C
    // 0x8080114C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8080013C_bskazstilt(rdram, ctx);
        goto after_0;
    // 0x8080114C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801150: jal         0x80082FE0
    // 0x80801154: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80801154: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080115C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801160: jr          $ra
    // 0x80801164: nop

    return;
    // 0x80801164: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080116C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801170: jal         0x800000C8
    // 0x80801174: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808000C8_bskazstilt(rdram, ctx);
        goto after_0;
    // 0x80801174: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801178: jal         0x80082FE8
    // 0x8080117C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x8080117C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801180: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801184: jal         0x800915AC
    // 0x80801188: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800915AC(rdram, ctx);
        goto after_2;
    // 0x80801188: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x8080118C: beq         $v0, $zero, L_8080119C
    if (ctx->r2 == 0) {
        // 0x80801190: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8080119C;
    }
    // 0x80801190: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801194: jal         0x8009E5C8
    // 0x80801198: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x80801198: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    after_3:
L_8080119C:
    // 0x8080119C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808011A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808011A4: jr          $ra
    // 0x808011A8: nop

    return;
    // 0x808011A8: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808011B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808011B4: jal         0x80082FF0
    // 0x808011B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808011B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808011BC: jal         0x80000234
    // 0x808011C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800234_bskazstilt(rdram, ctx);
        goto after_1;
    // 0x808011C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808011C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808011C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808011CC: jr          $ra
    // 0x808011D0: nop

    return;
    // 0x808011D0: nop

;}
RECOMP_FUNC void bskazstilt_entrypoint_31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011D4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808011D8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(129, 0X1270) << 16);
    // 0x808011DC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808011E0: jr          $ra
    // 0x808011E4: lw          $v0, 0x1270($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(129, 0X1270));
    return;
    // 0x808011E4: lw          $v0, 0x1270($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(129, 0X1270));
    // 0x808011E8: nop

    // 0x808011EC: nop

;}
RECOMP_FUNC void func_80800000_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x8009BB94
    // 0x8080000C: nop

    func_8009BB94(rdram, ctx);
        goto after_0;
    // 0x8080000C: nop

    after_0:
    // 0x80800010: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80800014: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080001C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(130, 0X16A0) << 16);
    // 0x80800020: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80800024: lwc1        $f8, 0x16A0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(130, 0X16A0));
    // 0x80800028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080002C: jr          $ra
    // 0x80800030: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    return;
    // 0x80800030: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
;}
RECOMP_FUNC void func_80800034_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080003C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800040: lw          $t7, 0x15C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X15C);
    // 0x80800044: bnel        $t7, $zero, L_80800080
    if (ctx->r15 != 0) {
        // 0x80800048: lw          $t9, 0x18($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X18);
            goto L_80800080;
    }
    goto skip_0;
    // 0x80800048: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x8080004C: jal         0x80091A58
    // 0x80800050: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80800050: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x80800054: bnel        $v0, $zero, L_80800080
    if (ctx->r2 != 0) {
        // 0x80800058: lw          $t9, 0x18($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X18);
            goto L_80800080;
    }
    goto skip_1;
    // 0x80800058: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    skip_1:
    // 0x8080005C: jal         0x80084D78
    // 0x80800060: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bakaztorpedo_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800060: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800064: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800068: nop

    // 0x8080006C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800070: nop

    // 0x80800074: bc1fl       L_80800090
    if (!c1cs) {
        // 0x80800078: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800090;
    }
    goto skip_2;
    // 0x80800078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x8080007C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_80800080:
    // 0x80800080: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80800084: jal         0x800F9BC4
    // 0x80800088: sw          $t8, 0x15C($t9)
    MEM_W(0X15C, ctx->r25) = ctx->r24;
    func_800F9BC4(rdram, ctx);
        goto after_2;
    // 0x80800088: sw          $t8, 0x15C($t9)
    MEM_W(0X15C, ctx->r25) = ctx->r24;
    after_2:
    // 0x8080008C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800090:
    // 0x80800090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800094: jr          $ra
    // 0x80800098: nop

    return;
    // 0x80800098: nop

;}
RECOMP_FUNC void func_8080009C_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080009C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000A4: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x808000A8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808000AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000B0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x808000B4: jal         0x8009FFD8
    // 0x808000B8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_0;
    // 0x808000B8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x808000BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000C4: jr          $ra
    // 0x808000C8: nop

    return;
    // 0x808000C8: nop

;}
RECOMP_FUNC void func_808000CC_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000D8: jal         0x8008E35C
    // 0x808000DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008E35C(rdram, ctx);
        goto after_0;
    // 0x808000DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808000E0: beq         $v0, $zero, L_80800124
    if (ctx->r2 == 0) {
        // 0x808000E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800124;
    }
    // 0x808000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000EC: lui         $a1, 0x435C
    ctx->r5 = S32(0X435C << 16);
    // 0x808000F0: jal         0x8009BFE4
    // 0x808000F4: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_1;
    // 0x808000F4: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    after_1:
    // 0x808000F8: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x808000FC: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800104: jal         0x8009C554
    // 0x80800108: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    func_8009C554(rdram, ctx);
        goto after_2;
    // 0x80800108: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    after_2:
    // 0x8080010C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800110: lui         $a1, 0x4391
    ctx->r5 = S32(0X4391 << 16);
    // 0x80800114: jal         0x8009C99C
    // 0x80800118: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x80800118: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_3:
    // 0x8080011C: b           L_8080015C
    // 0x80800120: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080015C;
    // 0x80800120: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800124:
    // 0x80800124: lui         $a2, 0x4033
    ctx->r6 = S32(0X4033 << 16);
    // 0x80800128: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8080012C: jal         0x8009BFE4
    // 0x80800130: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    func_8009BFE4(rdram, ctx);
        goto after_4;
    // 0x80800130: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    after_4:
    // 0x80800134: lui         $a2, 0x4033
    ctx->r6 = S32(0X4033 << 16);
    // 0x80800138: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8080013C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800140: jal         0x8009C554
    // 0x80800144: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    func_8009C554(rdram, ctx);
        goto after_5;
    // 0x80800144: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    after_5:
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080014C: lui         $a1, 0x43AF
    ctx->r5 = S32(0X43AF << 16);
    // 0x80800150: jal         0x8009C99C
    // 0x80800154: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    func_8009C99C(rdram, ctx);
        goto after_6;
    // 0x80800154: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    after_6:
    // 0x80800158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080015C:
    // 0x8080015C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800160: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800164: jr          $ra
    // 0x80800168: nop

    return;
    // 0x80800168: nop

;}
RECOMP_FUNC void func_8080016C_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080016C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800170: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800174: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800178: jal         0x8009EF28
    // 0x8080017C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009EF28(rdram, ctx);
        goto after_0;
    // 0x8080017C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800180: jal         0x800D8FF8
    // 0x80800184: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x80800184: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80800188: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8080018C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800190: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80800194: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800198: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x8080019C: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x808001A0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808001A4: lui         $a3, 0xC234
    ctx->r7 = S32(0XC234 << 16);
    // 0x808001A8: jal         0x800F10B4
    // 0x808001AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_2;
    // 0x808001AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x808001B0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808001B4: jal         0x8009C4CC
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C4CC(rdram, ctx);
        goto after_3;
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808001BC: jal         0x8008E35C
    // 0x808001C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_4;
    // 0x808001C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808001C4: beq         $v0, $zero, L_808001DC
    if (ctx->r2 == 0) {
        // 0x808001C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001DC;
    }
    // 0x808001C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001CC: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x808001D0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x808001D4: b           L_808001E8
    // 0x808001D8: nop

        goto L_808001E8;
    // 0x808001D8: nop

L_808001DC:
    // 0x808001DC: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x808001E0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x808001E4: nop

L_808001E8:
    // 0x808001E8: jal         0x8009C990
    // 0x808001EC: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    func_8009C990(rdram, ctx);
        goto after_5;
    // 0x808001EC: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x808001F0: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x808001F4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x808001F8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808001FC: neg.s       $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = -ctx->f2.fl;
    // 0x80800200: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80800204: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80800208: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8080020C: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80800210: jal         0x800F10B4
    // 0x80800214: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_800F10B4(rdram, ctx);
        goto after_6;
    // 0x80800214: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_6:
    // 0x80800218: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8080021C: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800224: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80800228: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8080022C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80800230: jal         0x8009C914
    // 0x80800234: nop

    func_8009C914(rdram, ctx);
        goto after_7;
    // 0x80800234: nop

    after_7:
    // 0x80800238: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080023C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800240: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80800244: jr          $ra
    // 0x80800248: nop

    return;
    // 0x80800248: nop

;}
RECOMP_FUNC void func_8080024C_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080024C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800250: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800254: jal         0x8009EF34
    // 0x80800258: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009EF34(rdram, ctx);
        goto after_0;
    // 0x80800258: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080025C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800260: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800264: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800268: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8080026C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80800270: lui         $at, 0x42AA
    ctx->r1 = S32(0X42AA << 16);
    // 0x80800274: bc1fl       L_808002B8
    if (!c1cs) {
        // 0x80800278: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_808002B8;
    }
    goto skip_0;
    // 0x80800278: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_0:
    // 0x8080027C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80800280: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800284: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80800288: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080028C: lui         $a3, 0x4389
    ctx->r7 = S32(0X4389 << 16);
    // 0x80800290: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80800294: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80800298: jal         0x800F10B4
    // 0x8080029C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_1;
    // 0x8080029C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x808002A0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808002A4: jal         0x8009BF5C
    // 0x808002A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009BF5C(rdram, ctx);
        goto after_2;
    // 0x808002A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x808002AC: b           L_808002D4
    // 0x808002B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808002D4;
    // 0x808002B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808002B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_808002B8:
    // 0x808002B8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x808002BC: jal         0x800F10B4
    // 0x808002C0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_3;
    // 0x808002C0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x808002C4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808002C8: jal         0x8009BF5C
    // 0x808002CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009BF5C(rdram, ctx);
        goto after_4;
    // 0x808002CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x808002D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808002D4:
    // 0x808002D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808002D8: jr          $ra
    // 0x808002DC: nop

    return;
    // 0x808002DC: nop

;}
RECOMP_FUNC void func_808002E0_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002E0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x808002E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808002E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808002EC: jal         0x8008E35C
    // 0x808002F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008E35C(rdram, ctx);
        goto after_0;
    // 0x808002F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808002F4: beq         $v0, $zero, L_80800338
    if (ctx->r2 == 0) {
        // 0x808002F8: sw          $v0, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r2;
            goto L_80800338;
    }
    // 0x808002F8: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x808002FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800300: jal         0x8009BCB4
    // 0x80800304: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BCB4(rdram, ctx);
        goto after_1;
    // 0x80800304: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080030C: jal         0x8009BCC4
    // 0x80800310: lui         $a1, 0xC57A
    ctx->r5 = S32(0XC57A << 16);
    func_8009BCC4(rdram, ctx);
        goto after_2;
    // 0x80800310: lui         $a1, 0xC57A
    ctx->r5 = S32(0XC57A << 16);
    after_2:
    // 0x80800314: lui         $a1, 0x3F59
    ctx->r5 = S32(0X3F59 << 16);
    // 0x80800318: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x8080031C: jal         0x80084EF0
    // 0x80800320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovethrust_entrypoint_4(rdram, ctx);
        goto after_3;
    // 0x80800320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800328: jal         0x80084EE8
    // 0x8080032C: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    _bamovethrust_entrypoint_3(rdram, ctx);
        goto after_4;
    // 0x8080032C: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_4:
    // 0x80800330: b           L_80800384
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800384;
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800338:
    // 0x80800338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080033C: jal         0x8009BCB4
    // 0x80800340: lui         $a1, 0xC4E1
    ctx->r5 = S32(0XC4E1 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_5;
    // 0x80800340: lui         $a1, 0xC4E1
    ctx->r5 = S32(0XC4E1 << 16);
    after_5:
    // 0x80800344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800348: jal         0x8009BCC4
    // 0x8080034C: lui         $a1, 0xC57A
    ctx->r5 = S32(0XC57A << 16);
    func_8009BCC4(rdram, ctx);
        goto after_6;
    // 0x8080034C: lui         $a1, 0xC57A
    ctx->r5 = S32(0XC57A << 16);
    after_6:
    // 0x80800350: lui         $a1, 0x3F6E
    ctx->r5 = S32(0X3F6E << 16);
    // 0x80800354: ori         $a1, $a1, 0x147B
    ctx->r5 = ctx->r5 | 0X147B;
    // 0x80800358: jal         0x80084EF0
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovethrust_entrypoint_4(rdram, ctx);
        goto after_7;
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800360: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(130, 0X16A4) << 16);
    // 0x80800364: lwc1        $f6, 0x16A4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(130, 0X16A4));
    // 0x80800368: lwc1        $f4, 0x16C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x8080036C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800370: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80800374: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80800378: jal         0x80084EE8
    // 0x8080037C: nop

    _bamovethrust_entrypoint_3(rdram, ctx);
        goto after_8;
    // 0x8080037C: nop

    after_8:
    // 0x80800380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800384:
    // 0x80800384: jal         0x800919F4
    // 0x80800388: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800919F4(rdram, ctx);
        goto after_9;
    // 0x80800388: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_9:
    // 0x8080038C: beq         $v0, $zero, L_808003D0
    if (ctx->r2 == 0) {
        // 0x80800390: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003D0;
    }
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800394: jal         0x80084DA0
    // 0x80800398: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _bakaztorpedo_entrypoint_6(rdram, ctx);
        goto after_10;
    // 0x80800398: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x8080039C: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x808003A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808003A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003A8: jal         0x8009650C
    // 0x808003AC: swc1        $f10, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f10.u32l;
    func_8009650C(rdram, ctx);
        goto after_11;
    // 0x808003AC: swc1        $f10, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f10.u32l;
    after_11:
    // 0x808003B0: beq         $v0, $zero, L_808003EC
    if (ctx->r2 == 0) {
        // 0x808003B4: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_808003EC;
    }
    // 0x808003B4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808003B8: lwc1        $f16, 0x16C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x808003BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x808003C0: nop

    // 0x808003C4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x808003C8: b           L_808003EC
    // 0x808003CC: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
        goto L_808003EC;
    // 0x808003CC: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
L_808003D0:
    // 0x808003D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003D4: jal         0x80084DA0
    // 0x808003D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bakaztorpedo_entrypoint_6(rdram, ctx);
        goto after_12;
    // 0x808003D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
    // 0x808003DC: lui         $at, 0x41B4
    ctx->r1 = S32(0X41B4 << 16);
    // 0x808003E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808003E4: nop

    // 0x808003E8: swc1        $f6, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f6.u32l;
L_808003EC:
    // 0x808003EC: jal         0x800000CC
    // 0x808003F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000CC_bskaztorpedo(rdram, ctx);
        goto after_13;
    // 0x808003F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808003F4: jal         0x8009BB94
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB94(rdram, ctx);
        goto after_14;
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808003FC: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x80800400: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800404: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800408: lui         $a2, 0x44BB
    ctx->r6 = S32(0X44BB << 16);
    // 0x8080040C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80800410: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800414: lui         $a3, 0x4396
    ctx->r7 = S32(0X4396 << 16);
    // 0x80800418: jal         0x800F10B4
    // 0x8080041C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_15;
    // 0x8080041C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_15:
    // 0x80800420: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800424: jal         0x80084DA8
    // 0x80800428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bakaztorpedo_entrypoint_7(rdram, ctx);
        goto after_16;
    // 0x80800428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x8080042C: jal         0x8009BFD8
    // 0x80800430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BFD8(rdram, ctx);
        goto after_17;
    // 0x80800430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800434: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800438: jal         0x8009BFCC
    // 0x8080043C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BFCC(rdram, ctx);
        goto after_18;
    // 0x8080043C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800440: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800444: jal         0x80013728
    // 0x80800448: sub.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f0.fl;
    func_80013728(rdram, ctx);
        goto after_19;
    // 0x80800448: sub.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f0.fl;
    after_19:
    // 0x8080044C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80800450: jal         0x8009C990
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_20;
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80800458: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x8080045C: jal         0x8009C984
    // 0x80800460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_21;
    // 0x80800460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800464: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800468: jal         0x80013728
    // 0x8080046C: sub.s       $f12, $f16, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f0.fl;
    func_80013728(rdram, ctx);
        goto after_22;
    // 0x8080046C: sub.s       $f12, $f16, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f0.fl;
    after_22:
    // 0x80800470: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x80800474: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800478: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8080047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800480: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x80800484: nop

    // 0x80800488: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8080048C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80800490: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80800494: jal         0x80084D98
    // 0x80800498: nop

    _bakaztorpedo_entrypoint_5(rdram, ctx);
        goto after_23;
    // 0x80800498: nop

    after_23:
    // 0x8080049C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x808004A0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x808004A4: beql        $t6, $zero, L_808004F8
    if (ctx->r14 == 0) {
        // 0x808004A8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_808004F8;
    }
    goto skip_0;
    // 0x808004A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x808004AC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x808004B0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x808004B4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808004B8: jal         0x800DC178
    // 0x808004BC: nop

    func_800DC178(rdram, ctx);
        goto after_24;
    // 0x808004BC: nop

    after_24:
    // 0x808004C0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x808004C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808004C8: lwc1        $f12, 0x16C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x808004CC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x808004D0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x808004D4: lui         $a2, 0x4361
    ctx->r6 = S32(0X4361 << 16);
    // 0x808004D8: jal         0x800F10B4
    // 0x808004DC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_25;
    // 0x808004DC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_25:
    // 0x808004E0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808004E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x808004EC: jal         0x80091290
    // 0x808004F0: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    func_80091290(rdram, ctx);
        goto after_26;
    // 0x808004F0: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    after_26:
    // 0x808004F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808004F8:
    // 0x808004F8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808004FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80800500: jr          $ra
    // 0x80800504: nop

    return;
    // 0x80800504: nop

;}
RECOMP_FUNC void func_80800508_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800508: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080050C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800510: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800514: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800518: jal         0x8009E69C
    // 0x8080051C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E69C(rdram, ctx);
        goto after_0;
    // 0x8080051C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80800520: bne         $v0, $zero, L_808005DC
    if (ctx->r2 != 0) {
        // 0x80800524: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005DC;
    }
    // 0x80800524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800528: jal         0x800A0DC4
    // 0x8080052C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0DC4(rdram, ctx);
        goto after_1;
    // 0x8080052C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800534: jal         0x8008C984
    // 0x80800538: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008C984(rdram, ctx);
        goto after_2;
    // 0x80800538: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x8080053C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800540: jal         0x800961AC
    // 0x80800544: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_3;
    // 0x80800544: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80800548: jal         0x8009BC34
    // 0x8080054C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC34(rdram, ctx);
        goto after_4;
    // 0x8080054C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800554: jal         0x8009BF5C
    // 0x80800558: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_5;
    // 0x80800558: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x8080055C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800560: jal         0x8009C4CC
    // 0x80800564: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_6;
    // 0x80800564: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x80800568: jal         0x8009C000
    // 0x8080056C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C000(rdram, ctx);
        goto after_7;
    // 0x8080056C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800570: jal         0x8009C570
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C570(rdram, ctx);
        goto after_8;
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800578: jal         0x8009EF60
    // 0x8080057C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF60(rdram, ctx);
        goto after_9;
    // 0x8080057C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800580: jal         0x80095A40
    // 0x80800584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095A40(rdram, ctx);
        goto after_10;
    // 0x80800584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080058C: jal         0x80093360
    // 0x80800590: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80093360(rdram, ctx);
        goto after_11;
    // 0x80800590: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_11:
    // 0x80800594: jal         0x80084D80
    // 0x80800598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bakaztorpedo_entrypoint_2(rdram, ctx);
        goto after_12;
    // 0x80800598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8080059C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005A0: jal         0x800910BC
    // 0x808005A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800910BC(rdram, ctx);
        goto after_13;
    // 0x808005A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x808005A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808005B0: jal         0x800947EC
    // 0x808005B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_14;
    // 0x808005B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x808005B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005BC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x808005C0: jal         0x80084CD0
    // 0x808005C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    _bafpctrl_entrypoint_11(rdram, ctx);
        goto after_15;
    // 0x808005C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x808005C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005CC: jal         0x80084CE8
    // 0x808005D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bafpctrl_entrypoint_14(rdram, ctx);
        goto after_16;
    // 0x808005D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x808005D4: jal         0x8009E474
    // 0x808005D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E474(rdram, ctx);
        goto after_17;
    // 0x808005D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
L_808005DC:
    // 0x808005DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808005E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808005E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808005E8: jr          $ra
    // 0x808005EC: nop

    return;
    // 0x808005EC: nop

;}
RECOMP_FUNC void func_808005F0_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808005F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808005F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808005FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800600: jal         0x8009E6C4
    // 0x80800604: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E6C4(rdram, ctx);
        goto after_0;
    // 0x80800604: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80800608: bne         $v0, $zero, L_80800758
    if (ctx->r2 != 0) {
        // 0x8080060C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800758;
    }
    // 0x8080060C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800610: jal         0x800A0DC4
    // 0x80800614: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0DC4(rdram, ctx);
        goto after_1;
    // 0x80800614: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800618: jal         0x80084D90
    // 0x8080061C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bakaztorpedo_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x8080061C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800620: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800624: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800628: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
    // 0x8080062C: jal         0x8008C984
    // 0x80800630: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
    func_8008C984(rdram, ctx);
        goto after_3;
    // 0x80800630: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
    after_3:
    // 0x80800634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800638: jal         0x8009BCB4
    // 0x8080063C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BCB4(rdram, ctx);
        goto after_4;
    // 0x8080063C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800640: lui         $a1, 0xC3C7
    ctx->r5 = S32(0XC3C7 << 16);
    // 0x80800644: ori         $a1, $a1, 0xFEB8
    ctx->r5 = ctx->r5 | 0XFEB8;
    // 0x80800648: jal         0x8009BCC4
    // 0x8080064C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_5;
    // 0x8080064C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800654: jal         0x800961AC
    // 0x80800658: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800961AC(rdram, ctx);
        goto after_6;
    // 0x80800658: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_6:
    // 0x8080065C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800660: jal         0x8009BC5C
    // 0x80800664: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8009BC5C(rdram, ctx);
        goto after_7;
    // 0x80800664: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_7:
    // 0x80800668: jal         0x8009EFA8
    // 0x8080066C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EFA8(rdram, ctx);
        goto after_8;
    // 0x8080066C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800670: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x80800674: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080067C: jal         0x8009F1C8
    // 0x80800680: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_9;
    // 0x80800680: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80800684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800688: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080068C: jal         0x8009F1C8
    // 0x80800690: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_10;
    // 0x80800690: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_10:
    // 0x80800694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800698: lui         $a1, 0x428C
    ctx->r5 = S32(0X428C << 16);
    // 0x8080069C: jal         0x800959C8
    // 0x808006A0: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    func_800959C8(rdram, ctx);
        goto after_11;
    // 0x808006A0: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    after_11:
    // 0x808006A4: jal         0x8009E4AC
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_12;
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808006AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808006B4: jal         0x8009E55C
    // 0x808006B8: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    func_8009E55C(rdram, ctx);
        goto after_13;
    // 0x808006B8: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    after_13:
    // 0x808006BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808006C4: jal         0x8009E55C
    // 0x808006C8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E55C(rdram, ctx);
        goto after_14;
    // 0x808006C8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_14:
    // 0x808006CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808006D4: jal         0x8009E55C
    // 0x808006D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E55C(rdram, ctx);
        goto after_15;
    // 0x808006D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_15:
    // 0x808006DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006E0: jal         0x80093360
    // 0x808006E4: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    func_80093360(rdram, ctx);
        goto after_16;
    // 0x808006E4: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_16:
    // 0x808006E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006EC: jal         0x800910BC
    // 0x808006F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800910BC(rdram, ctx);
        goto after_17;
    // 0x808006F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_17:
    // 0x808006F4: jal         0x800000CC
    // 0x808006F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000CC_bskaztorpedo(rdram, ctx);
        goto after_18;
    // 0x808006F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x808006FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800700: jal         0x80084CE8
    // 0x80800704: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bafpctrl_entrypoint_14(rdram, ctx);
        goto after_19;
    // 0x80800704: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_19:
    // 0x80800708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080070C: jal         0x80084CC0
    // 0x80800710: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bafpctrl_entrypoint_9(rdram, ctx);
        goto after_20;
    // 0x80800710: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x80800714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800718: jal         0x80084CC8
    // 0x8080071C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bafpctrl_entrypoint_10(rdram, ctx);
        goto after_21;
    // 0x8080071C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x80800720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800724: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80800728: jal         0x80084CD0
    // 0x8080072C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    _bafpctrl_entrypoint_11(rdram, ctx);
        goto after_22;
    // 0x8080072C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_22:
    // 0x80800730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800734: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800738: jal         0x800A38F0
    // 0x8080073C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800A38F0(rdram, ctx);
        goto after_23;
    // 0x8080073C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_23:
    // 0x80800740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800744: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800748: jal         0x800947EC
    // 0x8080074C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_24;
    // 0x8080074C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_24:
    // 0x80800750: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x80800754: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
L_80800758:
    // 0x80800758: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080075C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800760: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800764: jr          $ra
    // 0x80800768: nop

    return;
    // 0x80800768: nop

;}
RECOMP_FUNC void func_8080076C_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080076C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800770: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800774: jal         0x80084DB0
    // 0x80800778: nop

    _bakaztorpedo_entrypoint_8(rdram, ctx);
        goto after_0;
    // 0x80800778: nop

    after_0:
    // 0x8080077C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800784: jr          $ra
    // 0x80800788: nop

    return;
    // 0x80800788: nop

;}
RECOMP_FUNC void func_8080078C_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080078C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800790: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800794: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800798: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080079C: jal         0x800878A0
    // 0x808007A0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808007A0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x808007A4: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x808007A8: jal         0x8008E078
    // 0x808007AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_1;
    // 0x808007AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808007B0: beql        $v0, $zero, L_808007D0
    if (ctx->r2 == 0) {
        // 0x808007B4: lw          $a0, 0x44($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X44);
            goto L_808007D0;
    }
    goto skip_0;
    // 0x808007B4: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x808007B8: jal         0x8008E35C
    // 0x808007BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_2;
    // 0x808007BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808007C0: bne         $v0, $zero, L_808007CC
    if (ctx->r2 != 0) {
        // 0x808007C4: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_808007CC;
    }
    // 0x808007C4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808007C8: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_808007CC:
    // 0x808007CC: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
L_808007D0:
    // 0x808007D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x808007D4: beql        $a0, $at, L_8080087C
    if (ctx->r4 == ctx->r1) {
        // 0x808007D8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8080087C;
    }
    goto skip_1;
    // 0x808007D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x808007DC: jal         0x800F5A00
    // 0x808007E0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_800F5A00(rdram, ctx);
        goto after_3;
    // 0x808007E0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x808007E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007E8: jal         0x8009C128
    // 0x808007EC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009C128(rdram, ctx);
        goto after_4;
    // 0x808007EC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_4:
    // 0x808007F0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x808007F4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x808007F8: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x808007FC: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80800800: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80800804: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x80800808: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8080080C: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x80800810: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x80800814: jal         0x800EEB40
    // 0x80800818: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    func_800EEB40(rdram, ctx);
        goto after_5;
    // 0x80800818: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x8080081C: lw          $v0, 0x160($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X160);
    // 0x80800820: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(130, 0X16A8) << 16);
    // 0x80800824: beq         $v0, $zero, L_8080085C
    if (ctx->r2 == 0) {
        // 0x80800828: nop
    
            goto L_8080085C;
    }
    // 0x80800828: nop

    // 0x8080082C: lui         $at, 0x4661
    ctx->r1 = S32(0X4661 << 16);
    // 0x80800830: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800834: nop

    // 0x80800838: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8080083C: nop

    // 0x80800840: bc1fl       L_8080087C
    if (!c1cs) {
        // 0x80800844: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8080087C;
    }
    goto skip_2;
    // 0x80800844: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x80800848: beq         $v0, $zero, L_80800854
    if (ctx->r2 == 0) {
        // 0x8080084C: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_80800854;
    }
    // 0x8080084C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80800850: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_80800854:
    // 0x80800854: b           L_80800878
    // 0x80800858: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
        goto L_80800878;
    // 0x80800858: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
L_8080085C:
    // 0x8080085C: lwc1        $f18, 0x16A8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(130, 0X16A8));
    // 0x80800860: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80800864: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x80800868: nop

    // 0x8080086C: bc1fl       L_8080087C
    if (!c1cs) {
        // 0x80800870: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8080087C;
    }
    goto skip_3;
    // 0x80800870: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x80800874: sw          $t8, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r24;
L_80800878:
    // 0x80800878: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080087C:
    // 0x8080087C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800880: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80800884: jr          $ra
    // 0x80800888: nop

    return;
    // 0x80800888: nop

;}
RECOMP_FUNC void func_8080088C_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080088C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800894: jal         0x800995B8
    // 0x80800898: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800995B8(rdram, ctx);
        goto after_0;
    // 0x80800898: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080089C: jal         0x8009E6F8
    // 0x808008A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009E6F8(rdram, ctx);
        goto after_1;
    // 0x808008A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808008A4: addiu       $at, $zero, 0x15A
    ctx->r1 = ADD32(0, 0X15A);
    // 0x808008A8: beq         $v0, $at, L_808008C4
    if (ctx->r2 == ctx->r1) {
        // 0x808008AC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808008C4;
    }
    // 0x808008AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808008B0: jal         0x8009E5C8
    // 0x808008B4: addiu       $a1, $zero, 0x15A
    ctx->r5 = ADD32(0, 0X15A);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x808008B4: addiu       $a1, $zero, 0x15A
    ctx->r5 = ADD32(0, 0X15A);
    after_2:
    // 0x808008B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808008BC: jal         0x8009E830
    // 0x808008C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_3;
    // 0x808008C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
L_808008C4:
    // 0x808008C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808008C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808008CC: jr          $ra
    // 0x808008D0: nop

    return;
    // 0x808008D0: nop

;}
RECOMP_FUNC void func_808008D4_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808008D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808008DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808008E0: jal         0x8009E6EC
    // 0x808008E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x808008E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808008E8: slti        $at, $v0, 0x52
    ctx->r1 = SIGNED(ctx->r2) < 0X52 ? 1 : 0;
    // 0x808008EC: bne         $at, $zero, L_8080091C
    if (ctx->r1 != 0) {
        // 0x808008F0: addiu       $t6, $v0, -0x1F
        ctx->r14 = ADD32(ctx->r2, -0X1F);
            goto L_8080091C;
    }
    // 0x808008F0: addiu       $t6, $v0, -0x1F
    ctx->r14 = ADD32(ctx->r2, -0X1F);
    // 0x808008F4: addiu       $at, $zero, 0x52
    ctx->r1 = ADD32(0, 0X52);
    // 0x808008F8: beq         $v0, $at, L_808009EC
    if (ctx->r2 == ctx->r1) {
        // 0x808008FC: addiu       $at, $zero, 0x6F
        ctx->r1 = ADD32(0, 0X6F);
            goto L_808009EC;
    }
    // 0x808008FC: addiu       $at, $zero, 0x6F
    ctx->r1 = ADD32(0, 0X6F);
    // 0x80800900: beq         $v0, $at, L_808009C8
    if (ctx->r2 == ctx->r1) {
        // 0x80800904: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009C8;
    }
    // 0x80800904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800908: addiu       $at, $zero, 0x88
    ctx->r1 = ADD32(0, 0X88);
    // 0x8080090C: beq         $v0, $at, L_80800A00
    if (ctx->r2 == ctx->r1) {
        // 0x80800910: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_80800A00;
    }
    // 0x80800910: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80800914: b           L_80800A18
    // 0x80800918: nop

        goto L_80800A18;
    // 0x80800918: nop

L_8080091C:
    // 0x8080091C: slti        $at, $v0, 0x4F
    ctx->r1 = SIGNED(ctx->r2) < 0X4F ? 1 : 0;
    // 0x80800920: bne         $at, $zero, L_80800940
    if (ctx->r1 != 0) {
        // 0x80800924: addiu       $at, $zero, 0x50
        ctx->r1 = ADD32(0, 0X50);
            goto L_80800940;
    }
    // 0x80800924: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x80800928: beq         $v0, $at, L_8080097C
    if (ctx->r2 == ctx->r1) {
        // 0x8080092C: addiu       $at, $zero, 0x51
        ctx->r1 = ADD32(0, 0X51);
            goto L_8080097C;
    }
    // 0x8080092C: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x80800930: beql        $v0, $at, L_808009F0
    if (ctx->r2 == ctx->r1) {
        // 0x80800934: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009F0;
    }
    goto skip_0;
    // 0x80800934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800938: b           L_80800A18
    // 0x8080093C: nop

        goto L_80800A18;
    // 0x8080093C: nop

L_80800940:
    // 0x80800940: slti        $at, $v0, 0x2F
    ctx->r1 = SIGNED(ctx->r2) < 0X2F ? 1 : 0;
    // 0x80800944: bne         $at, $zero, L_8080095C
    if (ctx->r1 != 0) {
        // 0x80800948: addiu       $at, $zero, 0x4E
        ctx->r1 = ADD32(0, 0X4E);
            goto L_8080095C;
    }
    // 0x80800948: addiu       $at, $zero, 0x4E
    ctx->r1 = ADD32(0, 0X4E);
    // 0x8080094C: beql        $v0, $at, L_808009F0
    if (ctx->r2 == ctx->r1) {
        // 0x80800950: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009F0;
    }
    goto skip_1;
    // 0x80800950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800954: b           L_80800A18
    // 0x80800958: nop

        goto L_80800A18;
    // 0x80800958: nop

L_8080095C:
    // 0x8080095C: sltiu       $at, $t6, 0x10
    ctx->r1 = ctx->r14 < 0X10 ? 1 : 0;
    // 0x80800960: beq         $at, $zero, L_80800A18
    if (ctx->r1 == 0) {
        // 0x80800964: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80800A18;
    }
    // 0x80800964: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800968: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(130, 0X16AC) << 16);
    // 0x8080096C: addu        $at, $at, $t6
    gpr jr_addend_80800974 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800970: lw          $t6, 0x16AC($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(130, 0X16AC));
    // 0x80800974: jr          $t6
    // 0x80800978: nop

    switch (jr_addend_80800974 >> 2) {
        case 0: goto L_808009EC; break;
        case 1: goto L_808009EC; break;
        case 2: goto L_808009D8; break;
        case 3: goto L_80800A18; break;
        case 4: goto L_80800A18; break;
        case 5: goto L_808009EC; break;
        case 6: goto L_80800A18; break;
        case 7: goto L_80800A18; break;
        case 8: goto L_80800A18; break;
        case 9: goto L_80800A18; break;
        case 10: goto L_80800A18; break;
        case 11: goto L_80800A18; break;
        case 12: goto L_80800A18; break;
        case 13: goto L_80800A18; break;
        case 14: goto L_808009EC; break;
        case 15: goto L_808009EC; break;
        default: switch_error(__func__, 0x80800974, 0x808016AC);
    }
    // 0x80800978: nop

L_8080097C:
    // 0x8080097C: jal         0x800878A0
    // 0x80800980: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800980: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x80800984: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800988: jal         0x800F7B9C
    // 0x8080098C: addiu       $a1, $zero, 0x71
    ctx->r5 = ADD32(0, 0X71);
    func_800F7B9C(rdram, ctx);
        goto after_2;
    // 0x8080098C: addiu       $a1, $zero, 0x71
    ctx->r5 = ADD32(0, 0X71);
    after_2:
    // 0x80800990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800994: jal         0x80099A7C
    // 0x80800998: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_80099A7C(rdram, ctx);
        goto after_3;
    // 0x80800998: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x8080099C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009A0: jal         0x800F452C
    // 0x808009A4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_800F452C(rdram, ctx);
        goto after_4;
    // 0x808009A4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x808009A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009AC: jal         0x8009E5C8
    // 0x808009B0: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    func_8009E5C8(rdram, ctx);
        goto after_5;
    // 0x808009B0: addiu       $a1, $zero, 0x158
    ctx->r5 = ADD32(0, 0X158);
    after_5:
    // 0x808009B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009B8: jal         0x8009E830
    // 0x808009BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_6;
    // 0x808009BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x808009C0: b           L_80800A24
    // 0x808009C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800A24;
    // 0x808009C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808009C8:
    // 0x808009C8: jal         0x8009E830
    // 0x808009CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E830(rdram, ctx);
        goto after_7;
    // 0x808009CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x808009D0: b           L_80800A24
    // 0x808009D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800A24;
    // 0x808009D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808009D8:
    // 0x808009D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009DC: jal         0x8000088C
    // 0x808009E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8080088C_bskaztorpedo(rdram, ctx);
        goto after_8;
    // 0x808009E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x808009E4: b           L_80800A24
    // 0x808009E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800A24;
    // 0x808009E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808009EC:
    // 0x808009EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808009F0:
    // 0x808009F0: jal         0x8000088C
    // 0x808009F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8080088C_bskaztorpedo(rdram, ctx);
        goto after_9;
    // 0x808009F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x808009F8: b           L_80800A24
    // 0x808009FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800A24;
    // 0x808009FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800A00:
    // 0x80800A00: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
    // 0x80800A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A08: jal         0x8009E830
    // 0x80800A0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_10;
    // 0x80800A0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x80800A10: b           L_80800A24
    // 0x80800A14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800A24;
    // 0x80800A14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800A18:
    // 0x80800A18: jal         0x80099B94
    // 0x80800A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099B94(rdram, ctx);
        goto after_11;
    // 0x80800A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800A20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800A24:
    // 0x80800A24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800A28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800A2C: jr          $ra
    // 0x80800A30: nop

    return;
    // 0x80800A30: nop

;}
RECOMP_FUNC void func_80800A34_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800A38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800A40: jal         0x80095748
    // 0x80800A44: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    func_80095748(rdram, ctx);
        goto after_0;
    // 0x80800A44: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    after_0:
    // 0x80800A48: beq         $v0, $zero, L_80800A58
    if (ctx->r2 == 0) {
        // 0x80800A4C: nop
    
            goto L_80800A58;
    }
    // 0x80800A4C: nop

    // 0x80800A50: jal         0x800008D4
    // 0x80800A54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808008D4_bskaztorpedo(rdram, ctx);
        goto after_1;
    // 0x80800A54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
L_80800A58:
    // 0x80800A58: jal         0x8009E6EC
    // 0x80800A5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009E6EC(rdram, ctx);
        goto after_2;
    // 0x80800A5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800A60: slti        $at, $v0, 0x4F
    ctx->r1 = SIGNED(ctx->r2) < 0X4F ? 1 : 0;
    // 0x80800A64: bne         $at, $zero, L_80800A88
    if (ctx->r1 != 0) {
        // 0x80800A68: addiu       $t6, $v0, -0x1F
        ctx->r14 = ADD32(ctx->r2, -0X1F);
            goto L_80800A88;
    }
    // 0x80800A68: addiu       $t6, $v0, -0x1F
    ctx->r14 = ADD32(ctx->r2, -0X1F);
    // 0x80800A6C: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x80800A70: beq         $v0, $at, L_80800AC4
    if (ctx->r2 == ctx->r1) {
        // 0x80800A74: addiu       $at, $zero, 0x52
        ctx->r1 = ADD32(0, 0X52);
            goto L_80800AC4;
    }
    // 0x80800A74: addiu       $at, $zero, 0x52
    ctx->r1 = ADD32(0, 0X52);
    // 0x80800A78: beql        $v0, $at, L_80800AC8
    if (ctx->r2 == ctx->r1) {
        // 0x80800A7C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800AC8;
    }
    goto skip_0;
    // 0x80800A7C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x80800A80: b           L_80800AD8
    // 0x80800A84: nop

        goto L_80800AD8;
    // 0x80800A84: nop

L_80800A88:
    // 0x80800A88: slti        $at, $v0, 0x2F
    ctx->r1 = SIGNED(ctx->r2) < 0X2F ? 1 : 0;
    // 0x80800A8C: bne         $at, $zero, L_80800AA4
    if (ctx->r1 != 0) {
        // 0x80800A90: addiu       $at, $zero, 0x4E
        ctx->r1 = ADD32(0, 0X4E);
            goto L_80800AA4;
    }
    // 0x80800A90: addiu       $at, $zero, 0x4E
    ctx->r1 = ADD32(0, 0X4E);
    // 0x80800A94: beql        $v0, $at, L_80800AC8
    if (ctx->r2 == ctx->r1) {
        // 0x80800A98: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800AC8;
    }
    goto skip_1;
    // 0x80800A98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_1:
    // 0x80800A9C: b           L_80800AD8
    // 0x80800AA0: nop

        goto L_80800AD8;
    // 0x80800AA0: nop

L_80800AA4:
    // 0x80800AA4: sltiu       $at, $t6, 0x10
    ctx->r1 = ctx->r14 < 0X10 ? 1 : 0;
    // 0x80800AA8: beq         $at, $zero, L_80800AD8
    if (ctx->r1 == 0) {
        // 0x80800AAC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80800AD8;
    }
    // 0x80800AAC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800AB0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(130, 0X16EC) << 16);
    // 0x80800AB4: addu        $at, $at, $t6
    gpr jr_addend_80800ABC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800AB8: lw          $t6, 0x16EC($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(130, 0X16EC));
    // 0x80800ABC: jr          $t6
    // 0x80800AC0: nop

    switch (jr_addend_80800ABC >> 2) {
        case 0: goto L_80800AC4; break;
        case 1: goto L_80800AC4; break;
        case 2: goto L_80800AC4; break;
        case 3: goto L_80800AD8; break;
        case 4: goto L_80800AD8; break;
        case 5: goto L_80800AC4; break;
        case 6: goto L_80800AD8; break;
        case 7: goto L_80800AD8; break;
        case 8: goto L_80800AD8; break;
        case 9: goto L_80800AD8; break;
        case 10: goto L_80800AD8; break;
        case 11: goto L_80800AD8; break;
        case 12: goto L_80800AD8; break;
        case 13: goto L_80800AD8; break;
        case 14: goto L_80800AC4; break;
        case 15: goto L_80800AC4; break;
        default: switch_error(__func__, 0x80800ABC, 0x808016EC);
    }
    // 0x80800AC0: nop

L_80800AC4:
    // 0x80800AC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_80800AC8:
    // 0x80800AC8: jal         0x8009E830
    // 0x80800ACC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_3;
    // 0x80800ACC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80800AD0: b           L_80800AE4
    // 0x80800AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800AE4;
    // 0x80800AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800AD8:
    // 0x80800AD8: jal         0x800008D4
    // 0x80800ADC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808008D4_bskaztorpedo(rdram, ctx);
        goto after_4;
    // 0x80800ADC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
    // 0x80800AE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800AE4:
    // 0x80800AE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800AE8: jr          $ra
    // 0x80800AEC: nop

    return;
    // 0x80800AEC: nop

;}
RECOMP_FUNC void func_80800AF0_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800AF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800AF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800AFC: jal         0x80085358
    // 0x80800B00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batranslate_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800B00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800B04: jal         0x80000508
    // 0x80800B08: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800508_bskaztorpedo(rdram, ctx);
        goto after_1;
    // 0x80800B08: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800B0C: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x80800B10: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800B14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800B18: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800B1C: jal         0x80084EE0
    // 0x80800B20: swc1        $f0, 0x16C($a0)
    MEM_W(0X16C, ctx->r4) = ctx->f0.u32l;
    _bamovethrust_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80800B20: swc1        $f0, 0x16C($a0)
    MEM_W(0X16C, ctx->r4) = ctx->f0.u32l;
    after_2:
    // 0x80800B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800B2C: jr          $ra
    // 0x80800B30: nop

    return;
    // 0x80800B30: nop

;}
RECOMP_FUNC void func_80800B34_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800B38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800B3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800B40: jal         0x800005F0
    // 0x80800B44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808005F0_bskaztorpedo(rdram, ctx);
        goto after_0;
    // 0x80800B44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800B48: lui         $a3, 0x3E6C
    ctx->r7 = S32(0X3E6C << 16);
    // 0x80800B4C: ori         $a3, $a3, 0x56D6
    ctx->r7 = ctx->r7 | 0X56D6;
    // 0x80800B50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B54: addiu       $a1, $zero, 0x133
    ctx->r5 = ADD32(0, 0X133);
    // 0x80800B58: jal         0x8008CD30
    // 0x80800B5C: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008CD30(rdram, ctx);
        goto after_1;
    // 0x80800B5C: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_1:
    // 0x80800B60: jal         0x8000009C
    // 0x80800B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080009C_bskaztorpedo(rdram, ctx);
        goto after_2;
    // 0x80800B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800B68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B6C: jal         0x8009B94C
    // 0x80800B70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009B94C(rdram, ctx);
        goto after_3;
    // 0x80800B70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B78: jal         0x8009BA9C
    // 0x80800B7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_4;
    // 0x80800B7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80800B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B84: jal         0x80085358
    // 0x80800B88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _batranslate_entrypoint_3(rdram, ctx);
        goto after_5;
    // 0x80800B88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x80800B8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800B90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800B94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800B98: jr          $ra
    // 0x80800B9C: nop

    return;
    // 0x80800B9C: nop

;}
RECOMP_FUNC void func_80800BA0_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800BA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BA8: lui         $a1, 0x3F71
    ctx->r5 = S32(0X3F71 << 16);
    // 0x80800BAC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800BB0: ori         $a1, $a1, 0x4120
    ctx->r5 = ctx->r5 | 0X4120;
    // 0x80800BB4: jal         0x8008CB10
    // 0x80800BB8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x80800BB8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800BBC: beq         $v0, $zero, L_80800BC8
    if (ctx->r2 == 0) {
        // 0x80800BC0: lw          $a2, 0x1C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X1C);
            goto L_80800BC8;
    }
    // 0x80800BC0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80800BC4: addiu       $a2, $zero, 0x154
    ctx->r6 = ADD32(0, 0X154);
L_80800BC8:
    // 0x80800BC8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800BCC: jal         0x8009E5C8
    // 0x80800BD0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_1;
    // 0x80800BD0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_1:
    // 0x80800BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800BD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800BDC: jr          $ra
    // 0x80800BE0: nop

    return;
    // 0x80800BE0: nop

;}
RECOMP_FUNC void bskaztorpedo_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BE4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800BE8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(130, 0X1730) << 16);
    // 0x80800BEC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800BF0: jr          $ra
    // 0x80800BF4: lw          $v0, 0x1730($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(130, 0X1730));
    return;
    // 0x80800BF4: lw          $v0, 0x1730($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(130, 0X1730));
;}
RECOMP_FUNC void func_80800BF8_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800BFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800C00: jal         0x80090A2C
    // 0x80800C04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80090A2C(rdram, ctx);
        goto after_0;
    // 0x80800C04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800C08: jal         0x80000508
    // 0x80800C0C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800508_bskaztorpedo(rdram, ctx);
        goto after_1;
    // 0x80800C0C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C18: jr          $ra
    // 0x80800C1C: nop

    return;
    // 0x80800C1C: nop

;}
RECOMP_FUNC void func_80800C20_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800C24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800C28: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800C2C: jal         0x800005F0
    // 0x80800C30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808005F0_bskaztorpedo(rdram, ctx);
        goto after_0;
    // 0x80800C30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800C34: jal         0x8000009C
    // 0x80800C38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080009C_bskaztorpedo(rdram, ctx);
        goto after_1;
    // 0x80800C38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800C3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C40: addiu       $a1, $zero, 0x132
    ctx->r5 = ADD32(0, 0X132);
    // 0x80800C44: jal         0x8008CB3C
    // 0x80800C48: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_2;
    // 0x80800C48: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_2:
    // 0x80800C4C: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800C50: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C58: jal         0x8008C9BC
    // 0x80800C5C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_3;
    // 0x80800C5C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_3:
    // 0x80800C60: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(130, 0X172C) << 16);
    // 0x80800C64: lwc1        $f4, 0x172C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(130, 0X172C));
    // 0x80800C68: lui         $a2, 0x44BB
    ctx->r6 = S32(0X44BB << 16);
    // 0x80800C6C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80800C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C74: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    // 0x80800C78: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80800C7C: jal         0x8008C9F0
    // 0x80800C80: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_4;
    // 0x80800C80: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x80800C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C88: jal         0x8008CA4C
    // 0x80800C8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008CA4C(rdram, ctx);
        goto after_5;
    // 0x80800C8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x80800C90: jal         0x800909CC
    // 0x80800C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800909CC(rdram, ctx);
        goto after_6;
    // 0x80800C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800C98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800C9C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800CA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800CA4: jr          $ra
    // 0x80800CA8: nop

    return;
    // 0x80800CA8: nop

;}
RECOMP_FUNC void func_80800CAC_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800CB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800CB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800CB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800CBC: jal         0x8000076C
    // 0x80800CC0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8080076C_bskaztorpedo(rdram, ctx);
        goto after_0;
    // 0x80800CC0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800CC4: jal         0x8000078C
    // 0x80800CC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080078C_bskaztorpedo(rdram, ctx);
        goto after_1;
    // 0x80800CC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800CCC: jal         0x8000016C
    // 0x80800CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080016C_bskaztorpedo(rdram, ctx);
        goto after_2;
    // 0x80800CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800CD4: jal         0x8000024C
    // 0x80800CD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080024C_bskaztorpedo(rdram, ctx);
        goto after_3;
    // 0x80800CD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800CDC: jal         0x800002E0
    // 0x80800CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808002E0_bskaztorpedo(rdram, ctx);
        goto after_4;
    // 0x80800CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800CE4: jal         0x80000034
    // 0x80800CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800034_bskaztorpedo(rdram, ctx);
        goto after_5;
    // 0x80800CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800CEC: jal         0x80000000
    // 0x80800CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bskaztorpedo(rdram, ctx);
        goto after_6;
    // 0x80800CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800CF4: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x80800CF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800CFC: addiu       $t6, $zero, 0x159
    ctx->r14 = ADD32(0, 0X159);
    // 0x80800D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D04: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800D08: nop

    // 0x80800D0C: bc1f        L_80800D18
    if (!c1cs) {
        // 0x80800D10: nop
    
            goto L_80800D18;
    }
    // 0x80800D10: nop

    // 0x80800D14: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800D18:
    // 0x80800D18: jal         0x8009E5C8
    // 0x80800D1C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_7;
    // 0x80800D1C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_7:
    // 0x80800D20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800D24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800D28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800D2C: jr          $ra
    // 0x80800D30: nop

    return;
    // 0x80800D30: nop

;}
RECOMP_FUNC void bskaztorpedo_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D34: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800D38: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(130, 0X1740) << 16);
    // 0x80800D3C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800D40: jr          $ra
    // 0x80800D44: lw          $v0, 0x1740($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(130, 0X1740));
    return;
    // 0x80800D44: lw          $v0, 0x1740($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(130, 0X1740));
;}
RECOMP_FUNC void func_80800D48_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D50: jal         0x800839B8
    // 0x80800D54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80800D54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D58: jal         0x80000508
    // 0x80800D5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800508_bskaztorpedo(rdram, ctx);
        goto after_1;
    // 0x80800D5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800D60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D68: jr          $ra
    // 0x80800D6C: nop

    return;
    // 0x80800D6C: nop

;}
RECOMP_FUNC void func_80800D70_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D78: jal         0x800005F0
    // 0x80800D7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808005F0_bskaztorpedo(rdram, ctx);
        goto after_0;
    // 0x80800D7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D80: jal         0x800839C8
    // 0x80800D84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x80800D84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800D88: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800D8C: jal         0x8009BA9C
    // 0x80800D90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_2;
    // 0x80800D90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800D94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D9C: jr          $ra
    // 0x80800DA0: nop

    return;
    // 0x80800DA0: nop

;}
RECOMP_FUNC void func_80800DA4_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800DA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800DAC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800DB0: jal         0x800839E8
    // 0x80800DB4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x80800DB4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800DB8: beq         $v0, $zero, L_80800DC4
    if (ctx->r2 == 0) {
        // 0x80800DBC: addiu       $t6, $zero, 0x154
        ctx->r14 = ADD32(0, 0X154);
            goto L_80800DC4;
    }
    // 0x80800DBC: addiu       $t6, $zero, 0x154
    ctx->r14 = ADD32(0, 0X154);
    // 0x80800DC0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80800DC4:
    // 0x80800DC4: jal         0x8000076C
    // 0x80800DC8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8080076C_bskaztorpedo(rdram, ctx);
        goto after_1;
    // 0x80800DC8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800DCC: jal         0x8000078C
    // 0x80800DD0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8080078C_bskaztorpedo(rdram, ctx);
        goto after_2;
    // 0x80800DD0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800DD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800DD8: jal         0x8009E5C8
    // 0x80800DDC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x80800DDC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x80800DE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800DE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800DE8: jr          $ra
    // 0x80800DEC: nop

    return;
    // 0x80800DEC: nop

;}
RECOMP_FUNC void bskaztorpedo_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DF0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800DF4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(130, 0X1750) << 16);
    // 0x80800DF8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800DFC: jr          $ra
    // 0x80800E00: lw          $v0, 0x1750($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(130, 0X1750));
    return;
    // 0x80800E00: lw          $v0, 0x1750($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(130, 0X1750));
;}
RECOMP_FUNC void func_80800E04_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800E08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800E0C: jal         0x80082FF0
    // 0x80800E10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800E10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800E14: jal         0x80000508
    // 0x80800E18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800508_bskaztorpedo(rdram, ctx);
        goto after_1;
    // 0x80800E18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800E1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800E20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800E24: jr          $ra
    // 0x80800E28: nop

    return;
    // 0x80800E28: nop

;}
RECOMP_FUNC void func_80800E2C_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800E30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800E34: jal         0x800005F0
    // 0x80800E38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808005F0_bskaztorpedo(rdram, ctx);
        goto after_0;
    // 0x80800E38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800E3C: jal         0x80082FE0
    // 0x80800E40: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800E40: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800E44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800E48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800E4C: jr          $ra
    // 0x80800E50: nop

    return;
    // 0x80800E50: nop

;}
RECOMP_FUNC void func_80800E54_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800E58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800E5C: jal         0x8000076C
    // 0x80800E60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8080076C_bskaztorpedo(rdram, ctx);
        goto after_0;
    // 0x80800E60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800E64: jal         0x800002E0
    // 0x80800E68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808002E0_bskaztorpedo(rdram, ctx);
        goto after_1;
    // 0x80800E68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800E6C: jal         0x80082FE8
    // 0x80800E70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80800E70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800E78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800E7C: jr          $ra
    // 0x80800E80: nop

    return;
    // 0x80800E80: nop

;}
RECOMP_FUNC void bskaztorpedo_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E84: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800E88: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(130, 0X1760) << 16);
    // 0x80800E8C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800E90: jr          $ra
    // 0x80800E94: lw          $v0, 0x1760($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(130, 0X1760));
    return;
    // 0x80800E94: lw          $v0, 0x1760($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(130, 0X1760));
;}
RECOMP_FUNC void func_80800E98_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800E9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800EA0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80800EA4: jal         0x800878A0
    // 0x80800EA8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800EA8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80800EAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800EB0: jal         0x800F5A00
    // 0x80800EB4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800F5A00(rdram, ctx);
        goto after_1;
    // 0x80800EB4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x80800EB8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80800EBC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800EC0: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80800EC4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800EC8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80800ECC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80800ED0: jal         0x80084E18
    // 0x80800ED4: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    _bamovegoto_entrypoint_12(rdram, ctx);
        goto after_2;
    // 0x80800ED4: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80800ED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800EDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800EE0: jr          $ra
    // 0x80800EE4: nop

    return;
    // 0x80800EE4: nop

;}
RECOMP_FUNC void func_80800EE8_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800EEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800EF0: jal         0x80000508
    // 0x80800EF4: nop

    func_80800508_bskaztorpedo(rdram, ctx);
        goto after_0;
    // 0x80800EF4: nop

    after_0:
    // 0x80800EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800EFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F00: jr          $ra
    // 0x80800F04: nop

    return;
    // 0x80800F04: nop

;}
RECOMP_FUNC void func_80800F08_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800F0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800F10: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800F14: jal         0x800005F0
    // 0x80800F18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808005F0_bskaztorpedo(rdram, ctx);
        goto after_0;
    // 0x80800F18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800F1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F20: addiu       $a1, $zero, 0x135
    ctx->r5 = ADD32(0, 0X135);
    // 0x80800F24: jal         0x8008CB3C
    // 0x80800F28: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80800F28: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_1:
    // 0x80800F2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800F34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800F38: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x80800F3C: jal         0x8009FFD8
    // 0x80800F40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800F40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80800F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F48: jal         0x800961AC
    // 0x80800F4C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800961AC(rdram, ctx);
        goto after_3;
    // 0x80800F4C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_3:
    // 0x80800F50: jal         0x80084DB8
    // 0x80800F54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovegoto_entrypoint_0(rdram, ctx);
        goto after_4;
    // 0x80800F54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800F58: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x80800F5C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800F60: jal         0x80084DF0
    // 0x80800F64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovegoto_entrypoint_7(rdram, ctx);
        goto after_5;
    // 0x80800F64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800F68: jal         0x80000E98
    // 0x80800F6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800E98_bskaztorpedo(rdram, ctx);
        goto after_6;
    // 0x80800F6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800F70: jal         0x80084E20
    // 0x80800F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovegoto_entrypoint_13(rdram, ctx);
        goto after_7;
    // 0x80800F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800F80: jal         0x800A38F0
    // 0x80800F84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800A38F0(rdram, ctx);
        goto after_8;
    // 0x80800F84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x80800F88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F8C: jal         0x80084CE8
    // 0x80800F90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bafpctrl_entrypoint_14(rdram, ctx);
        goto after_9;
    // 0x80800F90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x80800F94: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800F98: nop

    // 0x80800F9C: swc1        $f4, 0x174($s0)
    MEM_W(0X174, ctx->r16) = ctx->f4.u32l;
    // 0x80800FA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800FA4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800FA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800FAC: jr          $ra
    // 0x80800FB0: nop

    return;
    // 0x80800FB0: nop

;}
RECOMP_FUNC void func_80800FB4_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800FB4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80800FB8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800FBC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800FC0: jal         0x80000E98
    // 0x80800FC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800E98_bskaztorpedo(rdram, ctx);
        goto after_0;
    // 0x80800FC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800FC8: jal         0x80092AD8
    // 0x80800FCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092AD8(rdram, ctx);
        goto after_1;
    // 0x80800FCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800FD0: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x80800FD4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800FD8: jal         0x800E0AF0
    // 0x80800FDC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_800E0AF0(rdram, ctx);
        goto after_2;
    // 0x80800FDC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_2:
    // 0x80800FE0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80800FE4: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x80800FE8: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
    // 0x80800FEC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80800FF0: lwc1        $f4, 0x174($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X174);
    // 0x80800FF4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80800FF8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800FFC: jal         0x800E0AFC
    // 0x80801000: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800E0AFC(rdram, ctx);
        goto after_3;
    // 0x80801000: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80801004: lui         $a1, 0x38D1
    ctx->r5 = S32(0X38D1 << 16);
    // 0x80801008: ori         $a1, $a1, 0xB717
    ctx->r5 = ctx->r5 | 0XB717;
    // 0x8080100C: jal         0x8008CB10
    // 0x80801010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_4;
    // 0x80801010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801014: bne         $v0, $zero, L_80801028
    if (ctx->r2 != 0) {
        // 0x80801018: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801028;
    }
    // 0x80801018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080101C: jal         0x8008CB10
    // 0x80801020: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8008CB10(rdram, ctx);
        goto after_5;
    // 0x80801020: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_5:
    // 0x80801024: beq         $v0, $zero, L_8080103C
    if (ctx->r2 == 0) {
        // 0x80801028: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080103C;
    }
L_80801028:
    // 0x80801028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080102C: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    // 0x80801030: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801034: jal         0x8009DF18
    // 0x80801038: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    func_8009DF18(rdram, ctx);
        goto after_6;
    // 0x80801038: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    after_6:
L_8080103C:
    // 0x8080103C: jal         0x800D8FF8
    // 0x80801040: nop

    func_800D8FF8(rdram, ctx);
        goto after_7;
    // 0x80801040: nop

    after_7:
    // 0x80801044: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x80801048: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8080104C: lwc1        $f6, 0x174($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X174);
    // 0x80801050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801054: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80801058: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x8080105C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80801060: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    // 0x80801064: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80801068: jal         0x80091290
    // 0x8080106C: swc1        $f16, 0x174($s0)
    MEM_W(0X174, ctx->r16) = ctx->f16.u32l;
    func_80091290(rdram, ctx);
        goto after_8;
    // 0x8080106C: swc1        $f16, 0x174($s0)
    MEM_W(0X174, ctx->r16) = ctx->f16.u32l;
    after_8:
    // 0x80801070: jal         0x80084DD8
    // 0x80801074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovegoto_entrypoint_4(rdram, ctx);
        goto after_9;
    // 0x80801074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80801078: beq         $v0, $zero, L_8080117C
    if (ctx->r2 == 0) {
        // 0x8080107C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080117C;
    }
    // 0x8080107C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801080: jal         0x8009C128
    // 0x80801084: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_8009C128(rdram, ctx);
        goto after_10;
    // 0x80801084: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_10:
    // 0x80801088: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8080108C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80801090: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80801094: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80801098: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8080109C: sub.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x808010A0: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x808010A4: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x808010A8: jal         0x800EFA4C
    // 0x808010AC: nop

    func_800EFA4C(rdram, ctx);
        goto after_11;
    // 0x808010AC: nop

    after_11:
    // 0x808010B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010B4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x808010B8: jal         0x8009FBB0
    // 0x808010BC: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    func_8009FBB0(rdram, ctx);
        goto after_12;
    // 0x808010BC: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    after_12:
    // 0x808010C0: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(130, 0X1770) << 16);
    // 0x808010C4: addiu       $t6, $t6, 0x1770
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(130, 0X1770));
    // 0x808010C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808010CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808010D0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x808010D4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x808010D8: jal         0x800BABB8
    // 0x808010DC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_13;
    // 0x808010DC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_13:
    // 0x808010E0: jal         0x800F82C0
    // 0x808010E4: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F82C0(rdram, ctx);
        goto after_14;
    // 0x808010E4: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_14:
    // 0x808010E8: jal         0x800F911C
    // 0x808010EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800F911C(rdram, ctx);
        goto after_15;
    // 0x808010EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_15:
    // 0x808010F0: jal         0x800878A0
    // 0x808010F4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_16;
    // 0x808010F4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_16:
    // 0x808010F8: jal         0x800F53D0
    // 0x808010FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F53D0(rdram, ctx);
        goto after_17;
    // 0x808010FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_17:
    // 0x80801100: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80801104: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80801108: jal         0x80084950
    // 0x8080110C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _baduo_entrypoint_7(rdram, ctx);
        goto after_18;
    // 0x8080110C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x80801110: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80801114: jal         0x800A3410
    // 0x80801118: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A3410(rdram, ctx);
        goto after_19;
    // 0x80801118: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x8080111C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80801120: jal         0x800A3904
    // 0x80801124: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A3904(rdram, ctx);
        goto after_20;
    // 0x80801124: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x80801128: jal         0x800D5234
    // 0x8080112C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800D5234(rdram, ctx);
        goto after_21;
    // 0x8080112C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_21:
    // 0x80801130: jal         0x800A16BC
    // 0x80801134: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800A16BC(rdram, ctx);
        goto after_22;
    // 0x80801134: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_22:
    // 0x80801138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080113C: addiu       $a1, $zero, 0x45A5
    ctx->r5 = ADD32(0, 0X45A5);
    // 0x80801140: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801144: jal         0x8009DB04
    // 0x80801148: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DB04(rdram, ctx);
        goto after_23;
    // 0x80801148: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_23:
    // 0x8080114C: jal         0x8009E6F8
    // 0x80801150: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8009E6F8(rdram, ctx);
        goto after_24;
    // 0x80801150: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_24:
    // 0x80801154: addiu       $at, $zero, 0xED
    ctx->r1 = ADD32(0, 0XED);
    // 0x80801158: bne         $v0, $at, L_80801174
    if (ctx->r2 != ctx->r1) {
        // 0x8080115C: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_80801174;
    }
    // 0x8080115C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80801160: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80801164: jal         0x8009E5C8
    // 0x80801168: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    func_8009E5C8(rdram, ctx);
        goto after_25;
    // 0x80801168: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    after_25:
    // 0x8080116C: b           L_80801180
    // 0x80801170: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80801180;
    // 0x80801170: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80801174:
    // 0x80801174: jal         0x800A0CF4
    // 0x80801178: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_26;
    // 0x80801178: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
L_8080117C:
    // 0x8080117C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80801180:
    // 0x80801180: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801184: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80801188: jr          $ra
    // 0x8080118C: nop

    return;
    // 0x8080118C: nop

;}
RECOMP_FUNC void bskaztorpedo_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801190: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801194: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(130, 0X17E4) << 16);
    // 0x80801198: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080119C: jr          $ra
    // 0x808011A0: lw          $v0, 0x17E4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(130, 0X17E4));
    return;
    // 0x808011A0: lw          $v0, 0x17E4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(130, 0X17E4));
;}
RECOMP_FUNC void func_808011A4_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011A4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808011A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808011AC: addiu       $s0, $sp, 0x2C
    ctx->r16 = ADD32(ctx->r29, 0X2C);
    // 0x808011B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808011B4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x808011B8: jal         0x8009E154
    // 0x808011BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009E154(rdram, ctx);
        goto after_0;
    // 0x808011BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808011C0: jal         0x800B5BE4
    // 0x808011C4: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    func_800B5BE4(rdram, ctx);
        goto after_1;
    // 0x808011C4: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_1:
    // 0x808011C8: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(130, 0X17F4) << 16);
    // 0x808011CC: addiu       $t6, $t6, 0x17F4
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(130, 0X17F4));
    // 0x808011D0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808011D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808011D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x808011DC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x808011E0: jal         0x800BABB8
    // 0x808011E4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_2;
    // 0x808011E4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x808011E8: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(130, 0X1824) << 16);
    // 0x808011EC: addiu       $t7, $t7, 0x1824
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(130, 0X1824));
    // 0x808011F0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x808011F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808011F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x808011FC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80801200: jal         0x800BABB8
    // 0x80801204: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_3;
    // 0x80801204: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_3:
    // 0x80801208: lui         $t8, 0x0
    ctx->r24 = S32(RELOC_HI16(130, 0X1854) << 16);
    // 0x8080120C: addiu       $t8, $t8, 0x1854
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(130, 0X1854));
    // 0x80801210: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80801214: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80801218: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8080121C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80801220: jal         0x800BABB8
    // 0x80801224: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_4;
    // 0x80801224: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_4:
    // 0x80801228: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080122C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801230: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80801234: jr          $ra
    // 0x80801238: nop

    return;
    // 0x80801238: nop

;}
RECOMP_FUNC void func_8080123C_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080123C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801240: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801244: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80801248: jal         0x80095774
    // 0x8080124C: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    func_80095774(rdram, ctx);
        goto after_0;
    // 0x8080124C: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    after_0:
    // 0x80801250: jal         0x80000508
    // 0x80801254: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800508_bskaztorpedo(rdram, ctx);
        goto after_1;
    // 0x80801254: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080125C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801260: jr          $ra
    // 0x80801264: nop

    return;
    // 0x80801264: nop

;}
RECOMP_FUNC void func_80801268_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801268: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080126C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801270: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801274: jal         0x800005F0
    // 0x80801278: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808005F0_bskaztorpedo(rdram, ctx);
        goto after_0;
    // 0x80801278: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080127C: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x80801280: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80801284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801288: addiu       $a1, $zero, 0x132
    ctx->r5 = ADD32(0, 0X132);
    // 0x8080128C: jal         0x8008CD30
    // 0x80801290: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    func_8008CD30(rdram, ctx);
        goto after_1;
    // 0x80801290: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_1:
    // 0x80801294: jal         0x8008CABC
    // 0x80801298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CABC(rdram, ctx);
        goto after_2;
    // 0x80801298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080129C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808012A0: jal         0x8008B134
    // 0x808012A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008B134(rdram, ctx);
        goto after_3;
    // 0x808012A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x808012A8: jal         0x8000009C
    // 0x808012AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080009C_bskaztorpedo(rdram, ctx);
        goto after_4;
    // 0x808012AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808012B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012B4: jal         0x80095760
    // 0x808012B8: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    func_80095760(rdram, ctx);
        goto after_5;
    // 0x808012B8: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    after_5:
    // 0x808012BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808012C0: nop

    // 0x808012C4: swc1        $f4, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f4.u32l;
    // 0x808012C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808012CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808012D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808012D4: jr          $ra
    // 0x808012D8: nop

    return;
    // 0x808012D8: nop

;}
RECOMP_FUNC void func_808012DC_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808012E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808012E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808012E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808012EC: jal         0x8000076C
    // 0x808012F0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8080076C_bskaztorpedo(rdram, ctx);
        goto after_0;
    // 0x808012F0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808012F4: jal         0x8000078C
    // 0x808012F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080078C_bskaztorpedo(rdram, ctx);
        goto after_1;
    // 0x808012F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808012FC: jal         0x8000016C
    // 0x80801300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080016C_bskaztorpedo(rdram, ctx);
        goto after_2;
    // 0x80801300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801304: jal         0x8000024C
    // 0x80801308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080024C_bskaztorpedo(rdram, ctx);
        goto after_3;
    // 0x80801308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080130C: jal         0x800002E0
    // 0x80801310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808002E0_bskaztorpedo(rdram, ctx);
        goto after_4;
    // 0x80801310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801314: jal         0x800011A4
    // 0x80801318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808011A4_bskaztorpedo(rdram, ctx);
        goto after_5;
    // 0x80801318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080131C: jal         0x80000034
    // 0x80801320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800034_bskaztorpedo(rdram, ctx);
        goto after_6;
    // 0x80801320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80801324: jal         0x80000000
    // 0x80801328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bskaztorpedo(rdram, ctx);
        goto after_7;
    // 0x80801328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080132C: lui         $at, 0x422C
    ctx->r1 = S32(0X422C << 16);
    // 0x80801330: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80801334: addiu       $t6, $zero, 0x154
    ctx->r14 = ADD32(0, 0X154);
    // 0x80801338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080133C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80801340: nop

    // 0x80801344: bc1f        L_80801350
    if (!c1cs) {
        // 0x80801348: nop
    
            goto L_80801350;
    }
    // 0x80801348: nop

    // 0x8080134C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80801350:
    // 0x80801350: jal         0x8009E5C8
    // 0x80801354: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_8;
    // 0x80801354: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x80801358: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080135C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801360: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801364: jr          $ra
    // 0x80801368: nop

    return;
    // 0x80801368: nop

;}
RECOMP_FUNC void bskaztorpedo_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080136C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801370: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(130, 0X1884) << 16);
    // 0x80801374: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801378: jr          $ra
    // 0x8080137C: lw          $v0, 0x1884($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(130, 0X1884));
    return;
    // 0x8080137C: lw          $v0, 0x1884($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(130, 0X1884));
;}
RECOMP_FUNC void func_80801380_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801384: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801388: jal         0x80085148
    // 0x8080138C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _baspin_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080138C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801390: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801394: jal         0x80084DA0
    // 0x80801398: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bakaztorpedo_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x80801398: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8080139C: jal         0x80000508
    // 0x808013A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800508_bskaztorpedo(rdram, ctx);
        goto after_2;
    // 0x808013A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808013A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808013A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808013AC: jr          $ra
    // 0x808013B0: nop

    return;
    // 0x808013B0: nop

;}
RECOMP_FUNC void func_808013B4_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808013B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808013B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808013BC: jal         0x800005F0
    // 0x808013C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_808005F0_bskaztorpedo(rdram, ctx);
        goto after_0;
    // 0x808013C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x808013C4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808013C8: jal         0x80084DA0
    // 0x808013CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    _bakaztorpedo_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x808013CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x808013D0: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x808013D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808013D8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808013DC: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808013E0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808013E4: addiu       $a1, $zero, 0x134
    ctx->r5 = ADD32(0, 0X134);
    // 0x808013E8: jal         0x80085150
    // 0x808013EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    _baspin_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x808013EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x808013F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808013F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808013F8: jr          $ra
    // 0x808013FC: nop

    return;
    // 0x808013FC: nop

;}
RECOMP_FUNC void func_80801400_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801400: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801404: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801408: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8080140C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80801410: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80801414: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80801418: jal         0x80091290
    // 0x8080141C: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    func_80091290(rdram, ctx);
        goto after_0;
    // 0x8080141C: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    after_0:
    // 0x80801420: jal         0x80085158
    // 0x80801424: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _baspin_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x80801424: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80801428: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080142C: bnel        $v0, $at, L_80801458
    if (ctx->r2 != ctx->r1) {
        // 0x80801430: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80801458;
    }
    goto skip_0;
    // 0x80801430: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x80801434: jal         0x8008E124
    // 0x80801438: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008E124(rdram, ctx);
        goto after_2;
    // 0x80801438: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x8080143C: beq         $v0, $zero, L_80801450
    if (ctx->r2 == 0) {
        // 0x80801440: addiu       $t7, $zero, 0x154
        ctx->r15 = ADD32(0, 0X154);
            goto L_80801450;
    }
    // 0x80801440: addiu       $t7, $zero, 0x154
    ctx->r15 = ADD32(0, 0X154);
    // 0x80801444: addiu       $t6, $zero, 0x155
    ctx->r14 = ADD32(0, 0X155);
    // 0x80801448: b           L_80801454
    // 0x8080144C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
        goto L_80801454;
    // 0x8080144C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80801450:
    // 0x80801450: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_80801454:
    // 0x80801454: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_80801458:
    // 0x80801458: jal         0x8009E5C8
    // 0x8080145C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x8080145C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x80801460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801464: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801468: jr          $ra
    // 0x8080146C: nop

    return;
    // 0x8080146C: nop

;}
RECOMP_FUNC void bskaztorpedo_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801470: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801474: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(130, 0X1894) << 16);
    // 0x80801478: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080147C: jr          $ra
    // 0x80801480: lw          $v0, 0x1894($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(130, 0X1894));
    return;
    // 0x80801480: lw          $v0, 0x1894($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(130, 0X1894));
;}
RECOMP_FUNC void func_80801484_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801484: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801488: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080148C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801490: jal         0x8009BD88
    // 0x80801494: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009BD88(rdram, ctx);
        goto after_0;
    // 0x80801494: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801498: jal         0x8008E95C
    // 0x8080149C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E95C(rdram, ctx);
        goto after_1;
    // 0x8080149C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808014A0: jal         0x800951B4
    // 0x808014A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_2;
    // 0x808014A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808014A8: jal         0x80092BE8
    // 0x808014AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092BE8(rdram, ctx);
        goto after_3;
    // 0x808014AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808014B0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808014B4: jal         0x8009C914
    // 0x808014B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_4;
    // 0x808014B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808014BC: jal         0x8009C974
    // 0x808014C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_5;
    // 0x808014C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808014C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014C8: jal         0x800931AC
    // 0x808014CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800931AC(rdram, ctx);
        goto after_6;
    // 0x808014CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x808014D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014D4: jal         0x80084DA0
    // 0x808014D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bakaztorpedo_entrypoint_6(rdram, ctx);
        goto after_7;
    // 0x808014D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x808014DC: jal         0x80000508
    // 0x808014E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800508_bskaztorpedo(rdram, ctx);
        goto after_8;
    // 0x808014E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808014E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808014E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808014EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808014F0: jr          $ra
    // 0x808014F4: nop

    return;
    // 0x808014F4: nop

;}
RECOMP_FUNC void func_808014F8_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808014F8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x808014FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801500: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801504: jal         0x800005F0
    // 0x80801508: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808005F0_bskaztorpedo(rdram, ctx);
        goto after_0;
    // 0x80801508: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080150C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801510: jal         0x80084DA0
    // 0x80801514: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    _bakaztorpedo_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x80801514: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x80801518: jal         0x80099A58
    // 0x8080151C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099A58(rdram, ctx);
        goto after_2;
    // 0x8080151C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801524: jal         0x80084F78
    // 0x80801528: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    _bareact_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x80801528: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_3:
    // 0x8080152C: lui         $a2, 0x3F8C
    ctx->r6 = S32(0X3F8C << 16);
    // 0x80801530: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80801534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801538: jal         0x8008CDB8
    // 0x8080153C: addiu       $a1, $zero, 0x134
    ctx->r5 = ADD32(0, 0X134);
    func_8008CDB8(rdram, ctx);
        goto after_4;
    // 0x8080153C: addiu       $a1, $zero, 0x134
    ctx->r5 = ADD32(0, 0X134);
    after_4:
    // 0x80801540: jal         0x8009DA40
    // 0x80801544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009DA40(rdram, ctx);
        goto after_5;
    // 0x80801544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080154C: jal         0x8009C128
    // 0x80801550: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_8009C128(rdram, ctx);
        goto after_6;
    // 0x80801550: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_6:
    // 0x80801554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801558: jal         0x800A32C4
    // 0x8080155C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800A32C4(rdram, ctx);
        goto after_7;
    // 0x8080155C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_7:
    // 0x80801560: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80801564: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80801568: jal         0x800F1E6C
    // 0x8080156C: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    func_800F1E6C(rdram, ctx);
        goto after_8;
    // 0x8080156C: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_8:
    // 0x80801570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801574: jal         0x8009C914
    // 0x80801578: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009C914(rdram, ctx);
        goto after_9;
    // 0x80801578: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_9:
    // 0x8080157C: jal         0x8009C974
    // 0x80801580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_10;
    // 0x80801580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80801584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801588: jal         0x8009C4CC
    // 0x8080158C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_11;
    // 0x8080158C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_11:
    // 0x80801590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801594: jal         0x8009BF5C
    // 0x80801598: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_12;
    // 0x80801598: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_12:
    // 0x8080159C: jal         0x80084F90
    // 0x808015A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bareact_entrypoint_4(rdram, ctx);
        goto after_13;
    // 0x808015A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808015A4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808015A8: jal         0x8009B9B0
    // 0x808015AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_14;
    // 0x808015AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808015B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015B4: jal         0x8009B9C0
    // 0x808015B8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009B9C0(rdram, ctx);
        goto after_15;
    // 0x808015B8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_15:
    // 0x808015BC: jal         0x8009BB00
    // 0x808015C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_16;
    // 0x808015C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808015C4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808015C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015CC: jal         0x8009BA68
    // 0x808015D0: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009BA68(rdram, ctx);
        goto after_17;
    // 0x808015D0: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_17:
    // 0x808015D4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x808015D8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808015DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808015E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808015E8: jal         0x8009FFD8
    // 0x808015EC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_18;
    // 0x808015EC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_18:
    // 0x808015F0: jal         0x8008E944
    // 0x808015F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_19;
    // 0x808015F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x808015F8: jal         0x8009514C
    // 0x808015FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009514C(rdram, ctx);
        goto after_20;
    // 0x808015FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80801600: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801604: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801608: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8080160C: jr          $ra
    // 0x80801610: nop

    return;
    // 0x80801610: nop

;}
RECOMP_FUNC void func_80801614_bskaztorpedo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801614: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801618: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080161C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801620: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801624: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80801628: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x8080162C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80801630: jal         0x80091290
    // 0x80801634: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    func_80091290(rdram, ctx);
        goto after_0;
    // 0x80801634: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    after_0:
    // 0x80801638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080163C: jal         0x8008CB10
    // 0x80801640: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8008CB10(rdram, ctx);
        goto after_1;
    // 0x80801640: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_1:
    // 0x80801644: beq         $v0, $zero, L_80801654
    if (ctx->r2 == 0) {
        // 0x80801648: nop
    
            goto L_80801654;
    }
    // 0x80801648: nop

    // 0x8080164C: jal         0x800951B4
    // 0x80801650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_2;
    // 0x80801650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_80801654:
    // 0x80801654: jal         0x8008CAEC
    // 0x80801658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_3;
    // 0x80801658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080165C: beq         $v0, $zero, L_8080166C
    if (ctx->r2 == 0) {
        // 0x80801660: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080166C;
    }
    // 0x80801660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801664: addiu       $t6, $zero, 0x154
    ctx->r14 = ADD32(0, 0X154);
    // 0x80801668: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_8080166C:
    // 0x8080166C: jal         0x8009E5C8
    // 0x80801670: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x80801670: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x80801674: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801678: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080167C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801680: jr          $ra
    // 0x80801684: nop

    return;
    // 0x80801684: nop

;}
RECOMP_FUNC void bskaztorpedo_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801688: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080168C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(130, 0X18A4) << 16);
    // 0x80801690: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801694: jr          $ra
    // 0x80801698: lw          $v0, 0x18A4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(130, 0X18A4));
    return;
    // 0x80801698: lw          $v0, 0x18A4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(130, 0X18A4));
    // 0x8080169C: nop

;}
RECOMP_FUNC void func_80800000_bskazwingwhack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8080000C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800010: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80800014: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80800018: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8080001C: jal         0x800B5BE4
    // 0x80800020: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800B5BE4(rdram, ctx);
        goto after_0;
    // 0x80800020: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80800024: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800028: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8080002C: jal         0x8009C128
    // 0x80800030: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x80800030: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x80800034: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80800038: jal         0x800F1DF4
    // 0x8080003C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_800F1DF4(rdram, ctx);
        goto after_2;
    // 0x8080003C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_2:
    // 0x80800040: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80800044: jal         0x800136E4
    // 0x80800048: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    func_800136E4(rdram, ctx);
        goto after_3;
    // 0x80800048: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    after_3:
    // 0x8080004C: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80800050: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80800054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800058: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8080005C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80800060: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80800064: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80800068: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x8080006C: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80800070: sll         $t0, $a3, 16
    ctx->r8 = S32(ctx->r7 << 16);
    // 0x80800074: jal         0x800BA77C
    // 0x80800078: sra         $a3, $t0, 16
    ctx->r7 = S32(SIGNED(ctx->r8) >> 16);
    func_800BA77C(rdram, ctx);
        goto after_4;
    // 0x80800078: sra         $a3, $t0, 16
    ctx->r7 = S32(SIGNED(ctx->r8) >> 16);
    after_4:
    // 0x8080007C: jal         0x8009EA2C
    // 0x80800080: nop

    func_8009EA2C(rdram, ctx);
        goto after_5;
    // 0x80800080: nop

    after_5:
    // 0x80800084: beq         $v0, $zero, L_808000A0
    if (ctx->r2 == 0) {
        // 0x80800088: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000A0;
    }
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080008C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800090: jal         0x800BA670
    // 0x80800094: addiu       $a1, $zero, 0x619
    ctx->r5 = ADD32(0, 0X619);
    func_800BA670(rdram, ctx);
        goto after_6;
    // 0x80800094: addiu       $a1, $zero, 0x619
    ctx->r5 = ADD32(0, 0X619);
    after_6:
    // 0x80800098: b           L_808000A8
    // 0x8080009C: nop

        goto L_808000A8;
    // 0x8080009C: nop

L_808000A0:
    // 0x808000A0: jal         0x800BA670
    // 0x808000A4: addiu       $a1, $zero, 0x618
    ctx->r5 = ADD32(0, 0X618);
    func_800BA670(rdram, ctx);
        goto after_7;
    // 0x808000A4: addiu       $a1, $zero, 0x618
    ctx->r5 = ADD32(0, 0X618);
    after_7:
L_808000A8:
    // 0x808000A8: lui         $t2, 0x0
    ctx->r10 = S32(RELOC_HI16(131, 0XA80) << 16);
    // 0x808000AC: addiu       $t2, $t2, 0xA80
    ctx->r10 = ADD32(ctx->r10, (int16_t)RELOC_LO16(131, 0XA80));
    // 0x808000B0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x808000BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x808000C0: jal         0x800BABB8
    // 0x808000C4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_8;
    // 0x808000C4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_8:
    // 0x808000C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808000CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808000D0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x808000D4: jr          $ra
    // 0x808000D8: nop

    return;
    // 0x808000D8: nop

;}
RECOMP_FUNC void func_808000DC_bskazwingwhack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000E8: jal         0x8009E474
    // 0x808000EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E474(rdram, ctx);
        goto after_0;
    // 0x808000EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808000F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F4: jal         0x80095774
    // 0x808000F8: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    func_80095774(rdram, ctx);
        goto after_1;
    // 0x808000F8: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    after_1:
    // 0x808000FC: jal         0x8009BC6C
    // 0x80800100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_2;
    // 0x80800100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800104: jal         0x8009BC90
    // 0x80800108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC90(rdram, ctx);
        goto after_3;
    // 0x80800108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080010C: jal         0x80092BE8
    // 0x80800110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092BE8(rdram, ctx);
        goto after_4;
    // 0x80800110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800114: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800118: jal         0x8009C944
    // 0x8080011C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C944(rdram, ctx);
        goto after_5;
    // 0x8080011C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800124: jal         0x800931AC
    // 0x80800128: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800931AC(rdram, ctx);
        goto after_6;
    // 0x80800128: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x8080012C: jal         0x800832E8
    // 0x80800130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bskaz_entrypoint_2(rdram, ctx);
        goto after_7;
    // 0x80800130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800134: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800138: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080013C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800140: jr          $ra
    // 0x80800144: nop

    return;
    // 0x80800144: nop

;}
RECOMP_FUNC void func_80800148_bskazwingwhack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800148: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080014C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800150: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800154: jal         0x800832E0
    // 0x80800158: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800158: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080015C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800160: addiu       $a1, $zero, 0x138
    ctx->r5 = ADD32(0, 0X138);
    // 0x80800164: jal         0x8008CCBC
    // 0x80800168: lui         $a2, 0x3FA0
    ctx->r6 = S32(0X3FA0 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x80800168: lui         $a2, 0x3FA0
    ctx->r6 = S32(0X3FA0 << 16);
    after_1:
    // 0x8080016C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80800170: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800178: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080017C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800180: jal         0x8009FFD8
    // 0x80800184: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800184: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080018C: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    // 0x80800190: jal         0x8009C99C
    // 0x80800194: lui         $a2, 0x40F0
    ctx->r6 = S32(0X40F0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x80800194: lui         $a2, 0x40F0
    ctx->r6 = S32(0X40F0 << 16);
    after_3:
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080019C: jal         0x80095760
    // 0x808001A0: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    func_80095760(rdram, ctx);
        goto after_4;
    // 0x808001A0: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    after_4:
    // 0x808001A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A8: jal         0x80095760
    // 0x808001AC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80095760(rdram, ctx);
        goto after_5;
    // 0x808001AC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_5:
    // 0x808001B0: jal         0x8009BB5C
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_6;
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808001B8: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x808001BC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808001C0: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x808001C4: jal         0x800F13F0
    // 0x808001C8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F13F0(rdram, ctx);
        goto after_7;
    // 0x808001C8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_7:
    // 0x808001CC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808001D0: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x808001D4: jal         0x8009B9B0
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_8;
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808001DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E0: jal         0x800931AC
    // 0x808001E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800931AC(rdram, ctx);
        goto after_9;
    // 0x808001E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
    // 0x808001E8: jal         0x8009C984
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_10;
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808001F0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808001F4: jal         0x8009328C
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009328C(rdram, ctx);
        goto after_11;
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808001FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800200: jal         0x8009BA58
    // 0x80800204: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BA58(rdram, ctx);
        goto after_12;
    // 0x80800204: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_12:
    // 0x80800208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080020C: jal         0x8009BCB4
    // 0x80800210: lui         $a1, 0xC348
    ctx->r5 = S32(0XC348 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_13;
    // 0x80800210: lui         $a1, 0xC348
    ctx->r5 = S32(0XC348 << 16);
    after_13:
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800218: jal         0x8009BCC4
    // 0x8080021C: lui         $a1, 0xC270
    ctx->r5 = S32(0XC270 << 16);
    func_8009BCC4(rdram, ctx);
        goto after_14;
    // 0x8080021C: lui         $a1, 0xC270
    ctx->r5 = S32(0XC270 << 16);
    after_14:
    // 0x80800220: lui         $a2, 0x3F73
    ctx->r6 = S32(0X3F73 << 16);
    // 0x80800224: lui         $a3, 0x3F86
    ctx->r7 = S32(0X3F86 << 16);
    // 0x80800228: addiu       $t7, $zero, 0x6590
    ctx->r15 = ADD32(0, 0X6590);
    // 0x8080022C: addiu       $t8, $zero, 0x6590
    ctx->r24 = ADD32(0, 0X6590);
    // 0x80800230: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80800234: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800238: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x8080023C: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800244: jal         0x8009DEC0
    // 0x80800248: addiu       $a1, $zero, 0x459E
    ctx->r5 = ADD32(0, 0X459E);
    func_8009DEC0(rdram, ctx);
        goto after_15;
    // 0x80800248: addiu       $a1, $zero, 0x459E
    ctx->r5 = ADD32(0, 0X459E);
    after_15:
    // 0x8080024C: jal         0x8009E4AC
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_16;
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800258: jal         0x8009E138
    // 0x8080025C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E138(rdram, ctx);
        goto after_17;
    // 0x8080025C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x80800260: swc1        $f0, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f0.u32l;
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
RECOMP_FUNC void func_80800278_bskazwingwhack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800278: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8080027C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800280: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800284: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800288: jal         0x8009C984
    // 0x8080028C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    func_8009C984(rdram, ctx);
        goto after_0;
    // 0x8080028C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    after_0:
    // 0x80800290: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800294: jal         0x8009B9C0
    // 0x80800298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_1;
    // 0x80800298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080029C: jal         0x8008CAC8
    // 0x808002A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_2;
    // 0x808002A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808002A4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808002A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808002AC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x808002B0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x808002B4: nop

    // 0x808002B8: bc1f        L_808002E8
    if (!c1cs) {
        // 0x808002BC: lui         $at, 0x42A0
        ctx->r1 = S32(0X42A0 << 16);
            goto L_808002E8;
    }
    // 0x808002BC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x808002C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808002C4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x808002C8: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x808002CC: lw          $a3, 0x170($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X170);
    // 0x808002D0: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    // 0x808002D4: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x808002D8: jal         0x800F10B4
    // 0x808002DC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_3;
    // 0x808002DC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x808002E0: b           L_80800314
    // 0x808002E4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_80800314;
    // 0x808002E4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_808002E8:
    // 0x808002E8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(131, 0X8F0) << 16);
    // 0x808002EC: lwc1        $f14, 0x8F0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(131, 0X8F0));
    // 0x808002F0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x808002F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808002F8: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x808002FC: lw          $a3, 0x170($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X170);
    // 0x80800300: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    // 0x80800304: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800308: jal         0x800F10B4
    // 0x8080030C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_4;
    // 0x8080030C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x80800310: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80800314:
    // 0x80800314: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80800318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080031C: jal         0x8009E55C
    // 0x80800320: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E55C(rdram, ctx);
        goto after_5;
    // 0x80800320: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80800324: lui         $a1, 0x3D4C
    ctx->r5 = S32(0X3D4C << 16);
    // 0x80800328: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8080032C: jal         0x8008CB10
    // 0x80800330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_6;
    // 0x80800330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800334: beq         $v0, $zero, L_80800350
    if (ctx->r2 == 0) {
        // 0x80800338: lui         $a2, 0x3F8C
        ctx->r6 = S32(0X3F8C << 16);
            goto L_80800350;
    }
    // 0x80800338: lui         $a2, 0x3F8C
    ctx->r6 = S32(0X3F8C << 16);
    // 0x8080033C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800344: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    // 0x80800348: jal         0x8009DF94
    // 0x8080034C: addiu       $a3, $zero, 0x2EE0
    ctx->r7 = ADD32(0, 0X2EE0);
    func_8009DF94(rdram, ctx);
        goto after_7;
    // 0x8080034C: addiu       $a3, $zero, 0x2EE0
    ctx->r7 = ADD32(0, 0X2EE0);
    after_7:
L_80800350:
    // 0x80800350: lui         $a1, 0x3E75
    ctx->r5 = S32(0X3E75 << 16);
    // 0x80800354: ori         $a1, $a1, 0xC28F
    ctx->r5 = ctx->r5 | 0XC28F;
    // 0x80800358: jal         0x8008CB10
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_8;
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800360: beq         $v0, $zero, L_80800378
    if (ctx->r2 == 0) {
        // 0x80800364: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800378;
    }
    // 0x80800364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800368: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    // 0x8080036C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800370: jal         0x8009DF94
    // 0x80800374: addiu       $a3, $zero, 0x2EE0
    ctx->r7 = ADD32(0, 0X2EE0);
    func_8009DF94(rdram, ctx);
        goto after_9;
    // 0x80800374: addiu       $a3, $zero, 0x2EE0
    ctx->r7 = ADD32(0, 0X2EE0);
    after_9:
L_80800378:
    // 0x80800378: lui         $a1, 0x3EF5
    ctx->r5 = S32(0X3EF5 << 16);
    // 0x8080037C: ori         $a1, $a1, 0xC28F
    ctx->r5 = ctx->r5 | 0XC28F;
    // 0x80800380: jal         0x8008CB10
    // 0x80800384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_10;
    // 0x80800384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800388: beq         $v0, $zero, L_808003A4
    if (ctx->r2 == 0) {
        // 0x8080038C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003A4;
    }
    // 0x8080038C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800390: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x80800394: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800398: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    // 0x8080039C: jal         0x8009DF94
    // 0x808003A0: addiu       $a3, $zero, 0x2EE0
    ctx->r7 = ADD32(0, 0X2EE0);
    func_8009DF94(rdram, ctx);
        goto after_11;
    // 0x808003A0: addiu       $a3, $zero, 0x2EE0
    ctx->r7 = ADD32(0, 0X2EE0);
    after_11:
L_808003A4:
    // 0x808003A4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(131, 0X8F4) << 16);
    // 0x808003A8: lwc1        $f10, 0x8F4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(131, 0X8F4));
    // 0x808003AC: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x808003B0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(131, 0X8F8) << 16);
    // 0x808003B4: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x808003B8: nop

    // 0x808003BC: bc1fl       L_80800424
    if (!c1cs) {
        // 0x808003C0: lui         $a1, 0x3F23
        ctx->r5 = S32(0X3F23 << 16);
            goto L_80800424;
    }
    goto skip_0;
    // 0x808003C0: lui         $a1, 0x3F23
    ctx->r5 = S32(0X3F23 << 16);
    skip_0:
    // 0x808003C4: lwc1        $f18, 0x8F8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(131, 0X8F8));
    // 0x808003C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003CC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x808003D0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x808003D4: nop

    // 0x808003D8: bc1fl       L_80800424
    if (!c1cs) {
        // 0x808003DC: lui         $a1, 0x3F23
        ctx->r5 = S32(0X3F23 << 16);
            goto L_80800424;
    }
    goto skip_1;
    // 0x808003DC: lui         $a1, 0x3F23
    ctx->r5 = S32(0X3F23 << 16);
    skip_1:
    // 0x808003E0: jal         0x800F3BD0
    // 0x808003E4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_800F3BD0(rdram, ctx);
        goto after_12;
    // 0x808003E4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_12:
    // 0x808003E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003EC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x808003F0: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    // 0x808003F4: jal         0x80000000
    // 0x808003F8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80800000_bskazwingwhack(rdram, ctx);
        goto after_13;
    // 0x808003F8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_13:
    // 0x808003FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800400: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80800404: jal         0x800F3BD0
    // 0x80800408: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_800F3BD0(rdram, ctx);
        goto after_14;
    // 0x80800408: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_14:
    // 0x8080040C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800410: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80800414: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    // 0x80800418: jal         0x80000000
    // 0x8080041C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80800000_bskazwingwhack(rdram, ctx);
        goto after_15;
    // 0x8080041C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_15:
    // 0x80800420: lui         $a1, 0x3F23
    ctx->r5 = S32(0X3F23 << 16);
L_80800424:
    // 0x80800424: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    // 0x80800428: jal         0x8008CB10
    // 0x8080042C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_16;
    // 0x8080042C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800430: beq         $v0, $zero, L_8080044C
    if (ctx->r2 == 0) {
        // 0x80800434: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080044C;
    }
    // 0x80800434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800438: jal         0x8008DF8C
    // 0x8080043C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8008DF8C(rdram, ctx);
        goto after_17;
    // 0x8080043C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_17:
    // 0x80800440: bne         $v0, $zero, L_8080044C
    if (ctx->r2 != 0) {
        // 0x80800444: addiu       $t6, $zero, 0xDF
        ctx->r14 = ADD32(0, 0XDF);
            goto L_8080044C;
    }
    // 0x80800444: addiu       $t6, $zero, 0xDF
    ctx->r14 = ADD32(0, 0XDF);
    // 0x80800448: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
L_8080044C:
    // 0x8080044C: jal         0x8008CAEC
    // 0x80800450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_18;
    // 0x80800450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800454: beq         $v0, $zero, L_80800460
    if (ctx->r2 == 0) {
        // 0x80800458: addiu       $t7, $zero, 0xDF
        ctx->r15 = ADD32(0, 0XDF);
            goto L_80800460;
    }
    // 0x80800458: addiu       $t7, $zero, 0xDF
    ctx->r15 = ADD32(0, 0XDF);
    // 0x8080045C: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
L_80800460:
    // 0x80800460: jal         0x80097D9C
    // 0x80800464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097D9C(rdram, ctx);
        goto after_19;
    // 0x80800464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800468: beq         $v0, $zero, L_80800478
    if (ctx->r2 == 0) {
        // 0x8080046C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800478;
    }
    // 0x8080046C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800470: addiu       $t8, $zero, 0x15C
    ctx->r24 = ADD32(0, 0X15C);
    // 0x80800474: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
L_80800478:
    // 0x80800478: jal         0x8009E5C8
    // 0x8080047C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_8009E5C8(rdram, ctx);
        goto after_20;
    // 0x8080047C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_20:
    // 0x80800480: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800484: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800488: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8080048C: jr          $ra
    // 0x80800490: nop

    return;
    // 0x80800490: nop

;}
RECOMP_FUNC void bskazwingwhack_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800494: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800498: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(131, 0XAB8) << 16);
    // 0x8080049C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808004A0: jr          $ra
    // 0x808004A4: lw          $v0, 0xAB8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(131, 0XAB8));
    return;
    // 0x808004A4: lw          $v0, 0xAB8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(131, 0XAB8));
;}
RECOMP_FUNC void func_808004A8_bskazwingwhack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004B0: jal         0x8009E474
    // 0x808004B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E474(rdram, ctx);
        goto after_0;
    // 0x808004B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808004B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808004BC: jal         0x80095774
    // 0x808004C0: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    func_80095774(rdram, ctx);
        goto after_1;
    // 0x808004C0: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    after_1:
    // 0x808004C4: jal         0x800832E8
    // 0x808004C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bskaz_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x808004C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808004CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004D4: jr          $ra
    // 0x808004D8: nop

    return;
    // 0x808004D8: nop

;}
RECOMP_FUNC void func_808004DC_bskazwingwhack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808004E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808004E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808004E8: jal         0x800832E0
    // 0x808004EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bskaz_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808004EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808004F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004F4: addiu       $a1, $zero, 0x137
    ctx->r5 = ADD32(0, 0X137);
    // 0x808004F8: jal         0x8008CCBC
    // 0x808004FC: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x808004FC: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_1:
    // 0x80800500: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80800504: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080050C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800510: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800514: jal         0x8009FFD8
    // 0x80800518: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800518: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8080051C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800520: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x80800524: jal         0x8009C99C
    // 0x80800528: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x80800528: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_3:
    // 0x8080052C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800530: jal         0x8009BA9C
    // 0x80800534: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_4;
    // 0x80800534: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80800538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080053C: jal         0x8009B9B0
    // 0x80800540: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_5;
    // 0x80800540: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x80800544: jal         0x8009E4AC
    // 0x80800548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_6;
    // 0x80800548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080054C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800550: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800554: jal         0x8009E5A4
    // 0x80800558: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8009E5A4(rdram, ctx);
        goto after_7;
    // 0x80800558: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_7:
    // 0x8080055C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800560: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800564: jal         0x8009E55C
    // 0x80800568: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    func_8009E55C(rdram, ctx);
        goto after_8;
    // 0x80800568: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    after_8:
    // 0x8080056C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800570: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800574: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800578: jr          $ra
    // 0x8080057C: nop

    return;
    // 0x8080057C: nop

;}
RECOMP_FUNC void func_80800580_bskazwingwhack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800580: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800584: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800588: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080058C: jal         0x8008CABC
    // 0x80800590: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800590: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800594: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80800598: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x8080059C: jal         0x8008B2B4
    // 0x808005A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B2B4(rdram, ctx);
        goto after_1;
    // 0x808005A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808005A4: lui         $a1, 0x3E8A
    ctx->r5 = S32(0X3E8A << 16);
    // 0x808005A8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x808005AC: ori         $a1, $a1, 0x3D71
    ctx->r5 = ctx->r5 | 0X3D71;
    // 0x808005B0: jal         0x8008B348
    // 0x808005B4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_8008B348(rdram, ctx);
        goto after_2;
    // 0x808005B4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_2:
    // 0x808005B8: beq         $v0, $zero, L_808005CC
    if (ctx->r2 == 0) {
        // 0x808005BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005CC;
    }
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808005C4: jal         0x8009E5A4
    // 0x808005C8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8009E5A4(rdram, ctx);
        goto after_3;
    // 0x808005C8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_3:
L_808005CC:
    // 0x808005CC: lui         $a1, 0x3EE2
    ctx->r5 = S32(0X3EE2 << 16);
    // 0x808005D0: ori         $a1, $a1, 0x4DD3
    ctx->r5 = ctx->r5 | 0X4DD3;
    // 0x808005D4: jal         0x8008B348
    // 0x808005D8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_8008B348(rdram, ctx);
        goto after_4;
    // 0x808005D8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_4:
    // 0x808005DC: beq         $v0, $zero, L_808005F0
    if (ctx->r2 == 0) {
        // 0x808005E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005F0;
    }
    // 0x808005E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808005E8: jal         0x8009E5A4
    // 0x808005EC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8009E5A4(rdram, ctx);
        goto after_5;
    // 0x808005EC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_5:
L_808005F0:
    // 0x808005F0: lui         $a1, 0x3F35
    ctx->r5 = S32(0X3F35 << 16);
    // 0x808005F4: ori         $a1, $a1, 0xC28F
    ctx->r5 = ctx->r5 | 0XC28F;
    // 0x808005F8: jal         0x8008B348
    // 0x808005FC: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_8008B348(rdram, ctx);
        goto after_6;
    // 0x808005FC: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_6:
    // 0x80800600: beq         $v0, $zero, L_80800614
    if (ctx->r2 == 0) {
        // 0x80800604: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800614;
    }
    // 0x80800604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800608: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8080060C: jal         0x8009E55C
    // 0x80800610: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E55C(rdram, ctx);
        goto after_7;
    // 0x80800610: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_7:
L_80800614:
    // 0x80800614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800618: jal         0x80095774
    // 0x8080061C: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    func_80095774(rdram, ctx);
        goto after_8;
    // 0x8080061C: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    after_8:
    // 0x80800620: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(131, 0X920) << 16);
    // 0x80800624: addiu       $a1, $a1, 0x920
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(131, 0X920));
    // 0x80800628: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8080062C: jal         0x800F3780
    // 0x80800630: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    func_800F3780(rdram, ctx);
        goto after_9;
    // 0x80800630: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_9:
    // 0x80800634: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800638: jal         0x8009B9F0
    // 0x8080063C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9F0(rdram, ctx);
        goto after_10;
    // 0x8080063C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800640: lui         $a1, 0x3DD4
    ctx->r5 = S32(0X3DD4 << 16);
    // 0x80800644: ori         $a1, $a1, 0xFDF4
    ctx->r5 = ctx->r5 | 0XFDF4;
    // 0x80800648: jal         0x8008B348
    // 0x8080064C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_8008B348(rdram, ctx);
        goto after_11;
    // 0x8080064C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_11:
    // 0x80800650: beq         $v0, $zero, L_80800668
    if (ctx->r2 == 0) {
        // 0x80800654: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800668;
    }
    // 0x80800654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800658: addiu       $a1, $zero, 0x459F
    ctx->r5 = ADD32(0, 0X459F);
    // 0x8080065C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800660: jal         0x8009DF18
    // 0x80800664: addiu       $a3, $zero, 0x6590
    ctx->r7 = ADD32(0, 0X6590);
    func_8009DF18(rdram, ctx);
        goto after_12;
    // 0x80800664: addiu       $a3, $zero, 0x6590
    ctx->r7 = ADD32(0, 0X6590);
    after_12:
L_80800668:
    // 0x80800668: lui         $a1, 0x3E1D
    ctx->r5 = S32(0X3E1D << 16);
    // 0x8080066C: ori         $a1, $a1, 0xB22D
    ctx->r5 = ctx->r5 | 0XB22D;
    // 0x80800670: jal         0x8008B348
    // 0x80800674: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_8008B348(rdram, ctx);
        goto after_13;
    // 0x80800674: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_13:
    // 0x80800678: beq         $v0, $zero, L_80800690
    if (ctx->r2 == 0) {
        // 0x8080067C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800690;
    }
    // 0x8080067C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800680: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    // 0x80800684: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800688: jal         0x8009DF94
    // 0x8080068C: addiu       $a3, $zero, 0x3A98
    ctx->r7 = ADD32(0, 0X3A98);
    func_8009DF94(rdram, ctx);
        goto after_14;
    // 0x8080068C: addiu       $a3, $zero, 0x3A98
    ctx->r7 = ADD32(0, 0X3A98);
    after_14:
L_80800690:
    // 0x80800690: lui         $a1, 0x3EA2
    ctx->r5 = S32(0X3EA2 << 16);
    // 0x80800694: ori         $a1, $a1, 0x4DD3
    ctx->r5 = ctx->r5 | 0X4DD3;
    // 0x80800698: jal         0x8008B348
    // 0x8080069C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_8008B348(rdram, ctx);
        goto after_15;
    // 0x8080069C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_15:
    // 0x808006A0: beq         $v0, $zero, L_808006BC
    if (ctx->r2 == 0) {
        // 0x808006A4: lui         $a2, 0x3F86
        ctx->r6 = S32(0X3F86 << 16);
            goto L_808006BC;
    }
    // 0x808006A4: lui         $a2, 0x3F86
    ctx->r6 = S32(0X3F86 << 16);
    // 0x808006A8: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808006AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006B0: addiu       $a1, $zero, 0x45A0
    ctx->r5 = ADD32(0, 0X45A0);
    // 0x808006B4: jal         0x8009DF18
    // 0x808006B8: addiu       $a3, $zero, 0x6590
    ctx->r7 = ADD32(0, 0X6590);
    func_8009DF18(rdram, ctx);
        goto after_16;
    // 0x808006B8: addiu       $a3, $zero, 0x6590
    ctx->r7 = ADD32(0, 0X6590);
    after_16:
L_808006BC:
    // 0x808006BC: lui         $a1, 0x3EBB
    ctx->r5 = S32(0X3EBB << 16);
    // 0x808006C0: ori         $a1, $a1, 0xE76D
    ctx->r5 = ctx->r5 | 0XE76D;
    // 0x808006C4: jal         0x8008B348
    // 0x808006C8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_8008B348(rdram, ctx);
        goto after_17;
    // 0x808006C8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_17:
    // 0x808006CC: beq         $v0, $zero, L_808006E8
    if (ctx->r2 == 0) {
        // 0x808006D0: lui         $a2, 0x3F8C
        ctx->r6 = S32(0X3F8C << 16);
            goto L_808006E8;
    }
    // 0x808006D0: lui         $a2, 0x3F8C
    ctx->r6 = S32(0X3F8C << 16);
    // 0x808006D4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808006D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006DC: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    // 0x808006E0: jal         0x8009DF94
    // 0x808006E4: addiu       $a3, $zero, 0x3A98
    ctx->r7 = ADD32(0, 0X3A98);
    func_8009DF94(rdram, ctx);
        goto after_18;
    // 0x808006E4: addiu       $a3, $zero, 0x3A98
    ctx->r7 = ADD32(0, 0X3A98);
    after_18:
L_808006E8:
    // 0x808006E8: lui         $a1, 0x3F14
    ctx->r5 = S32(0X3F14 << 16);
    // 0x808006EC: ori         $a1, $a1, 0x7AE1
    ctx->r5 = ctx->r5 | 0X7AE1;
    // 0x808006F0: jal         0x8008B348
    // 0x808006F4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_8008B348(rdram, ctx);
        goto after_19;
    // 0x808006F4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_19:
    // 0x808006F8: beq         $v0, $zero, L_80800714
    if (ctx->r2 == 0) {
        // 0x808006FC: lui         $a2, 0x3F73
        ctx->r6 = S32(0X3F73 << 16);
            goto L_80800714;
    }
    // 0x808006FC: lui         $a2, 0x3F73
    ctx->r6 = S32(0X3F73 << 16);
    // 0x80800700: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800704: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800708: addiu       $a1, $zero, 0x45A1
    ctx->r5 = ADD32(0, 0X45A1);
    // 0x8080070C: jal         0x8009DF18
    // 0x80800710: addiu       $a3, $zero, 0x6590
    ctx->r7 = ADD32(0, 0X6590);
    func_8009DF18(rdram, ctx);
        goto after_20;
    // 0x80800710: addiu       $a3, $zero, 0x6590
    ctx->r7 = ADD32(0, 0X6590);
    after_20:
L_80800714:
    // 0x80800714: lui         $a1, 0x3F21
    ctx->r5 = S32(0X3F21 << 16);
    // 0x80800718: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    // 0x8080071C: jal         0x8008B348
    // 0x80800720: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_8008B348(rdram, ctx);
        goto after_21;
    // 0x80800720: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_21:
    // 0x80800724: beq         $v0, $zero, L_80800740
    if (ctx->r2 == 0) {
        // 0x80800728: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800740;
    }
    // 0x80800728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080072C: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x80800730: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800734: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    // 0x80800738: jal         0x8009DF94
    // 0x8080073C: addiu       $a3, $zero, 0x3A98
    ctx->r7 = ADD32(0, 0X3A98);
    func_8009DF94(rdram, ctx);
        goto after_22;
    // 0x8080073C: addiu       $a3, $zero, 0x3A98
    ctx->r7 = ADD32(0, 0X3A98);
    after_22:
L_80800740:
    // 0x80800740: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(131, 0X8FC) << 16);
    // 0x80800744: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80800748: lwc1        $f4, 0x8FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(131, 0X8FC));
    // 0x8080074C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(131, 0X900) << 16);
    // 0x80800750: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800754: nop

    // 0x80800758: bc1f        L_808007AC
    if (!c1cs) {
        // 0x8080075C: nop
    
            goto L_808007AC;
    }
    // 0x8080075C: nop

    // 0x80800760: lwc1        $f6, 0x900($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(131, 0X900));
    // 0x80800764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800768: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8080076C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80800770: nop

    // 0x80800774: bc1f        L_808007AC
    if (!c1cs) {
        // 0x80800778: nop
    
            goto L_808007AC;
    }
    // 0x80800778: nop

    // 0x8080077C: jal         0x800F3BD0
    // 0x80800780: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_800F3BD0(rdram, ctx);
        goto after_23;
    // 0x80800780: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_23:
    // 0x80800784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800788: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8080078C: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    // 0x80800790: jal         0x80000000
    // 0x80800794: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80800000_bskazwingwhack(rdram, ctx);
        goto after_24;
    // 0x80800794: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_24:
    // 0x80800798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080079C: jal         0x80095760
    // 0x808007A0: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    func_80095760(rdram, ctx);
        goto after_25;
    // 0x808007A0: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    after_25:
    // 0x808007A4: b           L_80800880
    // 0x808007A8: nop

        goto L_80800880;
    // 0x808007A8: nop

L_808007AC:
    // 0x808007AC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(131, 0X904) << 16);
    // 0x808007B0: lwc1        $f8, 0x904($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(131, 0X904));
    // 0x808007B4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(131, 0X908) << 16);
    // 0x808007B8: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x808007BC: nop

    // 0x808007C0: bc1f        L_80800820
    if (!c1cs) {
        // 0x808007C4: nop
    
            goto L_80800820;
    }
    // 0x808007C4: nop

    // 0x808007C8: lwc1        $f10, 0x908($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(131, 0X908));
    // 0x808007CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007D0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x808007D4: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x808007D8: nop

    // 0x808007DC: bc1f        L_80800820
    if (!c1cs) {
        // 0x808007E0: nop
    
            goto L_80800820;
    }
    // 0x808007E0: nop

    // 0x808007E4: jal         0x800F3BD0
    // 0x808007E8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_800F3BD0(rdram, ctx);
        goto after_26;
    // 0x808007E8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_26:
    // 0x808007EC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(131, 0X90C) << 16);
    // 0x808007F0: jal         0x800136E4
    // 0x808007F4: lwc1        $f12, 0x90C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(131, 0X90C));
    func_800136E4(rdram, ctx);
        goto after_27;
    // 0x808007F4: lwc1        $f12, 0x90C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(131, 0X90C));
    after_27:
    // 0x808007F8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808007FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800800: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80800804: jal         0x80000000
    // 0x80800808: lui         $a3, 0x4334
    ctx->r7 = S32(0X4334 << 16);
    func_80800000_bskazwingwhack(rdram, ctx);
        goto after_28;
    // 0x80800808: lui         $a3, 0x4334
    ctx->r7 = S32(0X4334 << 16);
    after_28:
    // 0x8080080C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800810: jal         0x80095760
    // 0x80800814: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    func_80095760(rdram, ctx);
        goto after_29;
    // 0x80800814: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    after_29:
    // 0x80800818: b           L_80800880
    // 0x8080081C: nop

        goto L_80800880;
    // 0x8080081C: nop

L_80800820:
    // 0x80800820: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(131, 0X910) << 16);
    // 0x80800824: lwc1        $f16, 0x910($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(131, 0X910));
    // 0x80800828: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(131, 0X914) << 16);
    // 0x8080082C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80800830: nop

    // 0x80800834: bc1f        L_80800880
    if (!c1cs) {
        // 0x80800838: nop
    
            goto L_80800880;
    }
    // 0x80800838: nop

    // 0x8080083C: lwc1        $f18, 0x914($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(131, 0X914));
    // 0x80800840: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800844: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80800848: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8080084C: nop

    // 0x80800850: bc1f        L_80800880
    if (!c1cs) {
        // 0x80800854: nop
    
            goto L_80800880;
    }
    // 0x80800854: nop

    // 0x80800858: jal         0x800F3BD0
    // 0x8080085C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_800F3BD0(rdram, ctx);
        goto after_30;
    // 0x8080085C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_30:
    // 0x80800860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800864: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80800868: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x8080086C: jal         0x80000000
    // 0x80800870: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    func_80800000_bskazwingwhack(rdram, ctx);
        goto after_31;
    // 0x80800870: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    after_31:
    // 0x80800874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800878: jal         0x80095760
    // 0x8080087C: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    func_80095760(rdram, ctx);
        goto after_32;
    // 0x8080087C: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    after_32:
L_80800880:
    // 0x80800880: jal         0x8008B324
    // 0x80800884: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_8008B324(rdram, ctx);
        goto after_33;
    // 0x80800884: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_33:
    // 0x80800888: beq         $v0, $zero, L_80800894
    if (ctx->r2 == 0) {
        // 0x8080088C: addiu       $t6, $zero, 0xBB
        ctx->r14 = ADD32(0, 0XBB);
            goto L_80800894;
    }
    // 0x8080088C: addiu       $t6, $zero, 0xBB
    ctx->r14 = ADD32(0, 0XBB);
    // 0x80800890: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
L_80800894:
    // 0x80800894: jal         0x8008E078
    // 0x80800898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_34;
    // 0x80800898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x8080089C: bne         $v0, $zero, L_808008A8
    if (ctx->r2 != 0) {
        // 0x808008A0: addiu       $t7, $zero, 0xDF
        ctx->r15 = ADD32(0, 0XDF);
            goto L_808008A8;
    }
    // 0x808008A0: addiu       $t7, $zero, 0xDF
    ctx->r15 = ADD32(0, 0XDF);
    // 0x808008A4: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
L_808008A8:
    // 0x808008A8: jal         0x8008E35C
    // 0x808008AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_35;
    // 0x808008AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x808008B0: beq         $v0, $zero, L_808008C0
    if (ctx->r2 == 0) {
        // 0x808008B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008C0;
    }
    // 0x808008B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008B8: addiu       $t8, $zero, 0x160
    ctx->r24 = ADD32(0, 0X160);
    // 0x808008BC: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
L_808008C0:
    // 0x808008C0: jal         0x8009E5C8
    // 0x808008C4: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_8009E5C8(rdram, ctx);
        goto after_36;
    // 0x808008C4: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_36:
    // 0x808008C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808008CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808008D0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x808008D4: jr          $ra
    // 0x808008D8: nop

    return;
    // 0x808008D8: nop

;}
RECOMP_FUNC void bskazwingwhack_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008DC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808008E0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(131, 0XAC8) << 16);
    // 0x808008E4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808008E8: jr          $ra
    // 0x808008EC: lw          $v0, 0xAC8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(131, 0XAC8));
    return;
    // 0x808008EC: lw          $v0, 0xAC8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(131, 0XAC8));
;}
RECOMP_FUNC void func_80800000_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x8008E23C
    // 0x8080000C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008E23C(rdram, ctx);
        goto after_0;
    // 0x8080000C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800010: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80800014: beq         $t6, $zero, L_80800030
    if (ctx->r14 == 0) {
        // 0x80800018: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80800030;
    }
    // 0x80800018: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8080001C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800020: jal         0x80091A58
    // 0x80800024: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_1;
    // 0x80800024: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_1:
    // 0x80800028: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8080002C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80800030:
    // 0x80800030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800038: jr          $ra
    // 0x8080003C: nop

    return;
    // 0x8080003C: nop

;}
RECOMP_FUNC void func_80800040_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800040: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800044: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800048: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080004C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800050: jal         0x8009EF04
    // 0x80800054: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_8009EF04(rdram, ctx);
        goto after_0;
    // 0x80800054: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800058: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080005C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80800060: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800064: nop

    // 0x80800068: bc1f        L_80800080
    if (!c1cs) {
        // 0x8080006C: nop
    
            goto L_80800080;
    }
    // 0x8080006C: nop

    // 0x80800070: jal         0x800EFD24
    // 0x80800074: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_800EFD24(rdram, ctx);
        goto after_1;
    // 0x80800074: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_1:
    // 0x80800078: b           L_80800198
    // 0x8080007C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800198;
    // 0x8080007C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800080:
    // 0x80800080: jal         0x8009EEB8
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_2;
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800088: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8080008C: jal         0x800974FC
    // 0x80800090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800974FC(rdram, ctx);
        goto after_3;
    // 0x80800090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800094: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80800098: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8080009C: jal         0x800F1DCC
    // 0x808000A0: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_800F1DCC(rdram, ctx);
        goto after_4;
    // 0x808000A0: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_4:
    // 0x808000A4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x808000A8: jal         0x800F2100
    // 0x808000AC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_5;
    // 0x808000AC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_5:
    // 0x808000B0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x808000B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808000B8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x808000BC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x808000C0: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x808000C4: nop

    // 0x808000C8: bc1f        L_808000DC
    if (!c1cs) {
        // 0x808000CC: nop
    
            goto L_808000DC;
    }
    // 0x808000CC: nop

    // 0x808000D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808000D4: nop

    // 0x808000D8: sub.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f0.fl;
L_808000DC:
    // 0x808000DC: jal         0x800F2100
    // 0x808000E0: nop

    func_800F2100(rdram, ctx);
        goto after_6;
    // 0x808000E0: nop

    after_6:
    // 0x808000E4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x808000E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808000EC: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x808000F0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x808000F4: nop

    // 0x808000F8: bc1fl       L_80800114
    if (!c1cs) {
        // 0x808000FC: mtc1        $zero, $f18
        ctx->f18.u32l = 0;
            goto L_80800114;
    }
    goto skip_0;
    // 0x808000FC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    skip_0:
    // 0x80800100: jal         0x800EFD24
    // 0x80800104: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_800EFD24(rdram, ctx);
        goto after_7;
    // 0x80800104: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_7:
    // 0x80800108: b           L_80800198
    // 0x8080010C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800198;
    // 0x8080010C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800110: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
L_80800114:
    // 0x80800114: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80800118: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8080011C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80800120: nop

    // 0x80800124: bc1fl       L_80800138
    if (!c1cs) {
        // 0x80800128: sw          $t7, 0x15C($s0)
        MEM_W(0X15C, ctx->r16) = ctx->r15;
            goto L_80800138;
    }
    goto skip_1;
    // 0x80800128: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
    skip_1:
    // 0x8080012C: b           L_80800138
    // 0x80800130: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
        goto L_80800138;
    // 0x80800130: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
    // 0x80800134: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_80800138:
    // 0x80800138: lw          $t8, 0x15C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X15C);
    // 0x8080013C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80800140: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800144: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x80800148: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8080014C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80800150: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800154: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800158: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8080015C: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x80800160: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80800164: jal         0x800F1214
    // 0x80800168: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    func_800F1214(rdram, ctx);
        goto after_8;
    // 0x80800168: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    after_8:
    // 0x8080016C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80800170: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80800174: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800178: swc1        $f16, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f16.u32l;
    // 0x8080017C: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80800180: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80800184: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80800188: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8080018C: jal         0x800EFCD8
    // 0x80800190: nop

    func_800EFCD8(rdram, ctx);
        goto after_9;
    // 0x80800190: nop

    after_9:
    // 0x80800194: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800198:
    // 0x80800198: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080019C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808001A0: jr          $ra
    // 0x808001A4: nop

    return;
    // 0x808001A4: nop

;}
RECOMP_FUNC void func_808001A8_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001B8: jal         0x8009E74C
    // 0x808001BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x808001BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x808001C0: bnel        $v0, $zero, L_80800228
    if (ctx->r2 != 0) {
        // 0x808001C4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800228;
    }
    goto skip_0;
    // 0x808001C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808001C8: jal         0x8009E474
    // 0x808001CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E474(rdram, ctx);
        goto after_1;
    // 0x808001CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808001D0: jal         0x80096388
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096388(rdram, ctx);
        goto after_2;
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808001D8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x808001DC: bne         $v0, $at, L_808001EC
    if (ctx->r2 != ctx->r1) {
        // 0x808001E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001EC;
    }
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E4: jal         0x800961AC
    // 0x808001E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_3;
    // 0x808001E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_808001EC:
    // 0x808001EC: jal         0x8008E0E8
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E0E8(rdram, ctx);
        goto after_4;
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808001F4: beq         $v0, $zero, L_80800204
    if (ctx->r2 == 0) {
        // 0x808001F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800204;
    }
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001FC: jal         0x80084788
    // 0x80800200: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_5;
    // 0x80800200: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
L_80800204:
    // 0x80800204: jal         0x800A4E30
    // 0x80800208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4E30(rdram, ctx);
        goto after_6;
    // 0x80800208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800210: jal         0x800A2018
    // 0x80800214: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800A2018(rdram, ctx);
        goto after_7;
    // 0x80800214: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_7:
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080021C: jal         0x80092880
    // 0x80800220: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80092880(rdram, ctx);
        goto after_8;
    // 0x80800220: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80800224: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800228:
    // 0x80800228: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080022C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800230: jr          $ra
    // 0x80800234: nop

    return;
    // 0x80800234: nop

;}
RECOMP_FUNC void func_80800238_bsledge(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800248: jal         0x8009E77C
    // 0x8080024C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E77C(rdram, ctx);
        goto after_0;
    // 0x8080024C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80800250: bnel        $v0, $zero, L_80800314
    if (ctx->r2 != 0) {
        // 0x80800254: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800314;
    }
    goto skip_0;
    // 0x80800254: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800258: jal         0x8009E4AC
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_1;
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800268: jal         0x8009E55C
    // 0x8080026C: lui         $a2, 0x4200
    ctx->r6 = S32(0X4200 << 16);
    func_8009E55C(rdram, ctx);
        goto after_2;
    // 0x8080026C: lui         $a2, 0x4200
    ctx->r6 = S32(0X4200 << 16);
    after_2:
    // 0x80800270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800274: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800278: jal         0x8009E53C
    // 0x8080027C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    func_8009E53C(rdram, ctx);
        goto after_3;
    // 0x8080027C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    after_3:
    // 0x80800280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800284: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800288: jal         0x8009E55C
    // 0x8080028C: lui         $a2, 0x41E0
    ctx->r6 = S32(0X41E0 << 16);
    func_8009E55C(rdram, ctx);
        goto after_4;
    // 0x8080028C: lui         $a2, 0x41E0
    ctx->r6 = S32(0X41E0 << 16);
    after_4:
    // 0x80800290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800294: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800298: jal         0x8009E53C
    // 0x8080029C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    func_8009E53C(rdram, ctx);
        goto after_5;
    // 0x8080029C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    after_5:
    // 0x808002A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002A4: jal         0x800961AC
    // 0x808002A8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_800961AC(rdram, ctx);
        goto after_6;
    // 0x808002A8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_6:
    // 0x808002AC: jal         0x800974FC
    // 0x808002B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800974FC(rdram, ctx);
        goto after_7;
    // 0x808002B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808002B4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808002B8: jal         0x8009C914
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_8;
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808002C0: jal         0x8009C974
    // 0x808002C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_9;
    // 0x808002C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808002C8: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x808002CC: jal         0x80000324
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800324_bsledge(rdram, ctx);
        goto after_10;
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808002D4: jal         0x8008E0E8
    // 0x808002D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E0E8(rdram, ctx);
        goto after_11;
    // 0x808002D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808002DC: beq         $v0, $zero, L_808002EC
    if (ctx->r2 == 0) {
        // 0x808002E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002EC;
    }
    // 0x808002E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002E4: jal         0x80084788
    // 0x808002E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_12;
    // 0x808002E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_12:
L_808002EC:
    // 0x808002EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002F0: jal         0x800A4DFC
    // 0x808002F4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_800A4DFC(rdram, ctx);
        goto after_13;
    // 0x808002F4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_13:
    // 0x808002F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002FC: jal         0x800A2018
    // 0x80800300: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800A2018(rdram, ctx);
        goto after_14;
    // 0x80800300: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_14:
    // 0x80800304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800308: jal         0x80092880
    // 0x8080030C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80092880(rdram, ctx);
        goto after_15;
    // 0x8080030C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x80800310: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800314:
    // 0x80800314: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800318: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080031C: jr          $ra
    // 0x80800320: nop

    return;
    // 0x80800320: nop

;}
RECOMP_FUNC void func_80800324_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800324: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800328: sb          $t6, 0x168($a0)
    MEM_B(0X168, ctx->r4) = ctx->r14;
    // 0x8080032C: jr          $ra
    // 0x80800330: sb          $zero, 0x169($a0)
    MEM_B(0X169, ctx->r4) = 0;
    return;
    // 0x80800330: sb          $zero, 0x169($a0)
    MEM_B(0X169, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80800334_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800334: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800338: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080033C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800340: lbu         $v0, 0x168($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X168);
    // 0x80800344: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800348: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8080034C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80800350: bne         $v0, $zero, L_808003BC
    if (ctx->r2 != 0) {
        // 0x80800354: sb          $t6, 0x168($a0)
        MEM_B(0X168, ctx->r4) = ctx->r14;
            goto L_808003BC;
    }
    // 0x80800354: sb          $t6, 0x168($a0)
    MEM_B(0X168, ctx->r4) = ctx->r14;
    // 0x80800358: jal         0x800DC128
    // 0x8080035C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800DC128(rdram, ctx);
        goto after_0;
    // 0x8080035C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80800360: lbu         $v1, 0x169($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X169);
    // 0x80800364: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(132, 0X1340) << 16);
    // 0x80800368: sb          $v0, 0x168($s0)
    MEM_B(0X168, ctx->r16) = ctx->r2;
    // 0x8080036C: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x80800370: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80800374: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x80800378: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x8080037C: lh          $a1, 0x1340($a1)
    ctx->r5 = MEM_H(ctx->r5, (int16_t)RELOC_LO16(132, 0X1340));
    // 0x80800380: sltiu       $at, $t9, 0x3
    ctx->r1 = ctx->r25 < 0X3 ? 1 : 0;
    // 0x80800384: bne         $at, $zero, L_80800390
    if (ctx->r1 != 0) {
        // 0x80800388: sb          $t8, 0x169($s0)
        MEM_B(0X169, ctx->r16) = ctx->r24;
            goto L_80800390;
    }
    // 0x80800388: sb          $t8, 0x169($s0)
    MEM_B(0X169, ctx->r16) = ctx->r24;
    // 0x8080038C: sb          $zero, 0x169($s0)
    MEM_B(0X169, ctx->r16) = 0;
L_80800390:
    // 0x80800390: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(132, 0X1310) << 16);
    // 0x80800394: lwc1        $f12, 0x1310($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(132, 0X1310));
    // 0x80800398: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080039C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808003A0: jal         0x800DC178
    // 0x808003A4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800DC178(rdram, ctx);
        goto after_1;
    // 0x808003A4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_1:
    // 0x808003A8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808003AC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x808003B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003B4: jal         0x8009DF18
    // 0x808003B8: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    func_8009DF18(rdram, ctx);
        goto after_2;
    // 0x808003B8: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    after_2:
L_808003BC:
    // 0x808003BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808003C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808003C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808003C8: jr          $ra
    // 0x808003CC: nop

    return;
    // 0x808003CC: nop

;}
RECOMP_FUNC void func_808003D0_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808003DC: jal         0x80091A58
    // 0x808003E0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x808003E0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x808003E4: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x808003E8: beq         $t6, $zero, L_80800400
    if (ctx->r14 == 0) {
        // 0x808003EC: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80800400;
    }
    // 0x808003EC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x808003F0: jal         0x80097530
    // 0x808003F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80097530(rdram, ctx);
        goto after_1;
    // 0x808003F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808003F8: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x808003FC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80800400:
    // 0x80800400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800408: jr          $ra
    // 0x8080040C: nop

    return;
    // 0x8080040C: nop

;}
RECOMP_FUNC void func_80800410_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800414: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800418: jal         0x80096388
    // 0x8080041C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80096388(rdram, ctx);
        goto after_0;
    // 0x8080041C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800420: xori        $t6, $v0, 0x7
    ctx->r14 = ctx->r2 ^ 0X7;
    // 0x80800424: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x80800428: beql        $v0, $zero, L_80800444
    if (ctx->r2 == 0) {
        // 0x8080042C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800444;
    }
    goto skip_0;
    // 0x8080042C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800430: jal         0x80097524
    // 0x80800434: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80097524(rdram, ctx);
        goto after_1;
    // 0x80800434: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800438: xori        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 ^ 0X4;
    // 0x8080043C: sltu        $v0, $zero, $t7
    ctx->r2 = 0 < ctx->r15 ? 1 : 0;
    // 0x80800440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800444:
    // 0x80800444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800448: jr          $ra
    // 0x8080044C: nop

    return;
    // 0x8080044C: nop

;}
RECOMP_FUNC void func_80800450_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800454: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800458: jal         0x8009BB5C
    // 0x8080045C: nop

    func_8009BB5C(rdram, ctx);
        goto after_0;
    // 0x8080045C: nop

    after_0:
    // 0x80800460: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800464: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080046C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800470: nop

    // 0x80800474: bc1f        L_80800480
    if (!c1cs) {
        // 0x80800478: nop
    
            goto L_80800480;
    }
    // 0x80800478: nop

    // 0x8080047C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800480:
    // 0x80800480: jr          $ra
    // 0x80800484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80800488_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800488: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080048C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800490: jal         0x8009BA9C
    // 0x80800494: nop

    func_8009BA9C(rdram, ctx);
        goto after_0;
    // 0x80800494: nop

    after_0:
    // 0x80800498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080049C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004A0: jr          $ra
    // 0x808004A4: nop

    return;
    // 0x808004A4: nop

;}
RECOMP_FUNC void func_808004A8_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808004AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004B0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x808004B4: jal         0x80000040
    // 0x808004B8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_80800040_bsledge(rdram, ctx);
        goto after_0;
    // 0x808004B8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x808004BC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808004C0: jal         0x8009BA9C
    // 0x808004C4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009BA9C(rdram, ctx);
        goto after_1;
    // 0x808004C4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x808004C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808004D0: jr          $ra
    // 0x808004D4: nop

    return;
    // 0x808004D4: nop

;}
RECOMP_FUNC void func_808004D8_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004E0: jal         0x800974FC
    // 0x808004E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800974FC(rdram, ctx);
        goto after_0;
    // 0x808004E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808004E8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808004EC: jal         0x8009C914
    // 0x808004F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009C914(rdram, ctx);
        goto after_1;
    // 0x808004F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808004F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004FC: jr          $ra
    // 0x80800500: nop

    return;
    // 0x80800500: nop

;}
RECOMP_FUNC void func_80800504_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800504: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800508: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080050C: jal         0x800001A8
    // 0x80800510: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808001A8_bsledge(rdram, ctx);
        goto after_0;
    // 0x80800510: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800514: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800518: jal         0x800A0CF4
    // 0x8080051C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_1;
    // 0x8080051C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800520: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800524: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800528: jal         0x8009E55C
    // 0x8080052C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E55C(rdram, ctx);
        goto after_2;
    // 0x8080052C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_2:
    // 0x80800530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800534: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800538: jr          $ra
    // 0x8080053C: nop

    return;
    // 0x8080053C: nop

;}
RECOMP_FUNC void func_80800540_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800540: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800544: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800548: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080054C: jal         0x80000238
    // 0x80800550: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800238_bsledge(rdram, ctx);
        goto after_0;
    // 0x80800550: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800554: lw          $t6, 0x15C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X15C);
    // 0x80800558: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8080055C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800560: bgez        $t6, L_80800570
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80800564: lui         $a2, 0x3FA6
        ctx->r6 = S32(0X3FA6 << 16);
            goto L_80800570;
    }
    // 0x80800564: lui         $a2, 0x3FA6
    ctx->r6 = S32(0X3FA6 << 16);
    // 0x80800568: b           L_80800570
    // 0x8080056C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
        goto L_80800570;
    // 0x8080056C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
L_80800570:
    // 0x80800570: jal         0x8008CCBC
    // 0x80800574: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x80800574: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    after_1:
    // 0x80800578: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x8080057C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800584: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800588: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080058C: jal         0x8009FFD8
    // 0x80800590: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800590: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x80800594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800598: jal         0x80000488
    // 0x8080059C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800488_bsledge(rdram, ctx);
        goto after_3;
    // 0x8080059C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x808005A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005A4: jal         0x800A0CF4
    // 0x808005A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_4;
    // 0x808005A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x808005AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808005B4: jal         0x8009E55C
    // 0x808005B8: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    func_8009E55C(rdram, ctx);
        goto after_5;
    // 0x808005B8: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    after_5:
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808005C4: jal         0x8009E53C
    // 0x808005C8: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    func_8009E53C(rdram, ctx);
        goto after_6;
    // 0x808005C8: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_6:
    // 0x808005CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808005D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808005D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808005D8: jr          $ra
    // 0x808005DC: nop

    return;
    // 0x808005DC: nop

;}
RECOMP_FUNC void func_808005E0_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808005E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808005E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808005EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808005F0: jal         0x800004D8
    // 0x808005F4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_808004D8_bsledge(rdram, ctx);
        goto after_0;
    // 0x808005F4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x808005F8: jal         0x8008CAEC
    // 0x808005FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_1;
    // 0x808005FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800600: beq         $v0, $zero, L_80800610
    if (ctx->r2 == 0) {
        // 0x80800604: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800610;
    }
    // 0x80800604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800608: addiu       $t6, $zero, 0xA6
    ctx->r14 = ADD32(0, 0XA6);
    // 0x8080060C: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
L_80800610:
    // 0x80800610: lui         $a1, 0x3DFC
    ctx->r5 = S32(0X3DFC << 16);
    // 0x80800614: jal         0x8008CB10
    // 0x80800618: ori         $a1, $a1, 0x84B6
    ctx->r5 = ctx->r5 | 0X84B6;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x80800618: ori         $a1, $a1, 0x84B6
    ctx->r5 = ctx->r5 | 0X84B6;
    after_2:
    // 0x8080061C: beq         $v0, $zero, L_80800638
    if (ctx->r2 == 0) {
        // 0x80800620: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800638;
    }
    // 0x80800620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800624: lui         $a2, 0x3F93
    ctx->r6 = S32(0X3F93 << 16);
    // 0x80800628: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8080062C: addiu       $a1, $zero, 0x442C
    ctx->r5 = ADD32(0, 0X442C);
    // 0x80800630: jal         0x8009DF94
    // 0x80800634: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DF94(rdram, ctx);
        goto after_3;
    // 0x80800634: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_3:
L_80800638:
    // 0x80800638: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x8080063C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800640: jal         0x8008CB10
    // 0x80800644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_4;
    // 0x80800644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800648: beq         $v0, $zero, L_80800664
    if (ctx->r2 == 0) {
        // 0x8080064C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800664;
    }
    // 0x8080064C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800650: lui         $a2, 0x3F8C
    ctx->r6 = S32(0X3F8C << 16);
    // 0x80800654: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800658: addiu       $a1, $zero, 0x442C
    ctx->r5 = ADD32(0, 0X442C);
    // 0x8080065C: jal         0x8009DF94
    // 0x80800660: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DF94(rdram, ctx);
        goto after_5;
    // 0x80800660: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_5:
L_80800664:
    // 0x80800664: jal         0x8008CAC8
    // 0x80800668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_6;
    // 0x80800668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080066C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(132, 0X1314) << 16);
    // 0x80800670: lwc1        $f4, 0x1314($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(132, 0X1314));
    // 0x80800674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800678: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8080067C: nop

    // 0x80800680: bc1f        L_808006E4
    if (!c1cs) {
        // 0x80800684: nop
    
            goto L_808006E4;
    }
    // 0x80800684: nop

    // 0x80800688: jal         0x80000040
    // 0x8080068C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_80800040_bsledge(rdram, ctx);
        goto after_7;
    // 0x8080068C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x80800690: jal         0x800EEF24
    // 0x80800694: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_800EEF24(rdram, ctx);
        goto after_8;
    // 0x80800694: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_8:
    // 0x80800698: beq         $v0, $zero, L_808006A4
    if (ctx->r2 == 0) {
        // 0x8080069C: addiu       $t7, $zero, 0xA7
        ctx->r15 = ADD32(0, 0XA7);
            goto L_808006A4;
    }
    // 0x8080069C: addiu       $t7, $zero, 0xA7
    ctx->r15 = ADD32(0, 0XA7);
    // 0x808006A0: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
L_808006A4:
    // 0x808006A4: jal         0x800003D0
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808003D0_bsledge(rdram, ctx);
        goto after_9;
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808006AC: beq         $v0, $zero, L_808006B8
    if (ctx->r2 == 0) {
        // 0x808006B0: addiu       $t8, $zero, 0xAA
        ctx->r24 = ADD32(0, 0XAA);
            goto L_808006B8;
    }
    // 0x808006B0: addiu       $t8, $zero, 0xAA
    ctx->r24 = ADD32(0, 0XAA);
    // 0x808006B4: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_808006B8:
    // 0x808006B8: jal         0x80000000
    // 0x808006BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsledge(rdram, ctx);
        goto after_10;
    // 0x808006BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808006C0: beq         $v0, $zero, L_808006D0
    if (ctx->r2 == 0) {
        // 0x808006C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006D0;
    }
    // 0x808006C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006C8: addiu       $t9, $zero, 0xA9
    ctx->r25 = ADD32(0, 0XA9);
    // 0x808006CC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_808006D0:
    // 0x808006D0: jal         0x80091A58
    // 0x808006D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A58(rdram, ctx);
        goto after_11;
    // 0x808006D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x808006D8: beq         $v0, $zero, L_808006E4
    if (ctx->r2 == 0) {
        // 0x808006DC: addiu       $t0, $zero, 0x2F
        ctx->r8 = ADD32(0, 0X2F);
            goto L_808006E4;
    }
    // 0x808006DC: addiu       $t0, $zero, 0x2F
    ctx->r8 = ADD32(0, 0X2F);
    // 0x808006E0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_808006E4:
    // 0x808006E4: jal         0x80000410
    // 0x808006E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800410_bsledge(rdram, ctx);
        goto after_12;
    // 0x808006E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808006EC: bne         $v0, $zero, L_808006FC
    if (ctx->r2 != 0) {
        // 0x808006F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006FC;
    }
    // 0x808006F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006F4: addiu       $t1, $zero, 0x2F
    ctx->r9 = ADD32(0, 0X2F);
    // 0x808006F8: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_808006FC:
    // 0x808006FC: jal         0x8009E5C8
    // 0x80800700: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_13;
    // 0x80800700: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_13:
    // 0x80800704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800708: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080070C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800710: jr          $ra
    // 0x80800714: nop

    return;
    // 0x80800714: nop

;}
RECOMP_FUNC void bsledge_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800718: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080071C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(132, 0X1348) << 16);
    // 0x80800720: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800724: jr          $ra
    // 0x80800728: lw          $v0, 0x1348($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(132, 0X1348));
    return;
    // 0x80800728: lw          $v0, 0x1348($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(132, 0X1348));
;}
RECOMP_FUNC void func_8080072C_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080072C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800730: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800734: jal         0x800001A8
    // 0x80800738: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808001A8_bsledge(rdram, ctx);
        goto after_0;
    // 0x80800738: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080073C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800740: jal         0x800961AC
    // 0x80800744: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_1;
    // 0x80800744: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800748: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080074C: jal         0x80085358
    // 0x80800750: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batranslate_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x80800750: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80800754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080075C: jr          $ra
    // 0x80800760: nop

    return;
    // 0x80800760: nop

;}
RECOMP_FUNC void func_80800764_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800764: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800768: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080076C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800770: jal         0x80000238
    // 0x80800774: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800238_bsledge(rdram, ctx);
        goto after_0;
    // 0x80800774: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800778: lui         $a2, 0x3FD9
    ctx->r6 = S32(0X3FD9 << 16);
    // 0x8080077C: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800784: jal         0x8008CCBC
    // 0x80800788: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x80800788: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_1:
    // 0x8080078C: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x80800790: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800798: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080079C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808007A0: jal         0x8009FFD8
    // 0x808007A4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x808007A4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x808007A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007AC: jal         0x800961AC
    // 0x808007B0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800961AC(rdram, ctx);
        goto after_3;
    // 0x808007B0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x808007B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007B8: jal         0x80085358
    // 0x808007BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _batranslate_entrypoint_3(rdram, ctx);
        goto after_4;
    // 0x808007BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x808007C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007C4: jal         0x80000488
    // 0x808007C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800488_bsledge(rdram, ctx);
        goto after_5;
    // 0x808007C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x808007CC: jal         0x800A4CA8
    // 0x808007D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_6;
    // 0x808007D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808007D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808007D8: jal         0x801124D0
    // 0x808007DC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_801124D0(rdram, ctx);
        goto after_7;
    // 0x808007DC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_7:
    // 0x808007E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808007E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808007E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808007EC: jr          $ra
    // 0x808007F0: nop

    return;
    // 0x808007F0: nop

;}
RECOMP_FUNC void func_808007F4_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808007F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808007FC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800800: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80800804: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800808: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8080080C: jal         0x8008CB10
    // 0x80800810: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x80800810: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_0:
    // 0x80800814: beq         $v0, $zero, L_80800844
    if (ctx->r2 == 0) {
        // 0x80800818: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800844;
    }
    // 0x80800818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080081C: lui         $a2, 0x3F73
    ctx->r6 = S32(0X3F73 << 16);
    // 0x80800820: lui         $a3, 0x3F86
    ctx->r7 = S32(0X3F86 << 16);
    // 0x80800824: addiu       $t6, $zero, 0x4E20
    ctx->r14 = ADD32(0, 0X4E20);
    // 0x80800828: addiu       $t7, $zero, 0x4E20
    ctx->r15 = ADD32(0, 0X4E20);
    // 0x8080082C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80800830: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800834: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80800838: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8080083C: jal         0x8009DEC0
    // 0x80800840: addiu       $a1, $zero, 0x583
    ctx->r5 = ADD32(0, 0X583);
    func_8009DEC0(rdram, ctx);
        goto after_1;
    // 0x80800840: addiu       $a1, $zero, 0x583
    ctx->r5 = ADD32(0, 0X583);
    after_1:
L_80800844:
    // 0x80800844: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x80800848: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x8080084C: jal         0x8008CB10
    // 0x80800850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x80800850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800854: beq         $v0, $zero, L_80800884
    if (ctx->r2 == 0) {
        // 0x80800858: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800884;
    }
    // 0x80800858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080085C: lui         $a2, 0x3F73
    ctx->r6 = S32(0X3F73 << 16);
    // 0x80800860: lui         $a3, 0x3F86
    ctx->r7 = S32(0X3F86 << 16);
    // 0x80800864: addiu       $t8, $zero, 0x2EE0
    ctx->r24 = ADD32(0, 0X2EE0);
    // 0x80800868: addiu       $t9, $zero, 0x2EE0
    ctx->r25 = ADD32(0, 0X2EE0);
    // 0x8080086C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80800870: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80800874: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80800878: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8080087C: jal         0x8009DEC0
    // 0x80800880: addiu       $a1, $zero, 0x584
    ctx->r5 = ADD32(0, 0X584);
    func_8009DEC0(rdram, ctx);
        goto after_3;
    // 0x80800880: addiu       $a1, $zero, 0x584
    ctx->r5 = ADD32(0, 0X584);
    after_3:
L_80800884:
    // 0x80800884: jal         0x800004D8
    // 0x80800888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004D8_bsledge(rdram, ctx);
        goto after_4;
    // 0x80800888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080088C: jal         0x8008CAEC
    // 0x80800890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_5;
    // 0x80800890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800894: beq         $v0, $zero, L_808008A4
    if (ctx->r2 == 0) {
        // 0x80800898: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008A4;
    }
    // 0x80800898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080089C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x808008A0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_808008A4:
    // 0x808008A4: jal         0x8009E5C8
    // 0x808008A8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x808008A8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_6:
    // 0x808008AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808008B0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808008B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808008B8: jr          $ra
    // 0x808008BC: nop

    return;
    // 0x808008BC: nop

;}
RECOMP_FUNC void bsledge_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008C0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808008C4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(132, 0X1358) << 16);
    // 0x808008C8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808008CC: jr          $ra
    // 0x808008D0: lw          $v0, 0x1358($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(132, 0X1358));
    return;
    // 0x808008D0: lw          $v0, 0x1358($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(132, 0X1358));
;}
RECOMP_FUNC void func_808008D4_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808008D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808008DC: jal         0x800001A8
    // 0x808008E0: nop

    func_808001A8_bsledge(rdram, ctx);
        goto after_0;
    // 0x808008E0: nop

    after_0:
    // 0x808008E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808008E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808008EC: jr          $ra
    // 0x808008F0: nop

    return;
    // 0x808008F0: nop

;}
RECOMP_FUNC void func_808008F4_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808008F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808008FC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800900: jal         0x80000238
    // 0x80800904: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800238_bsledge(rdram, ctx);
        goto after_0;
    // 0x80800904: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800908: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x8080090C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800914: jal         0x8008CCBC
    // 0x80800918: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x80800918: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_1:
    // 0x8080091C: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x80800920: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800928: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080092C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800930: jal         0x8009FFD8
    // 0x80800934: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800934: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x80800938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080093C: jal         0x80000488
    // 0x80800940: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800488_bsledge(rdram, ctx);
        goto after_3;
    // 0x80800940: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800944: jal         0x8009E710
    // 0x80800948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E710(rdram, ctx);
        goto after_4;
    // 0x80800948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080094C: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x80800950: bne         $v0, $at, L_8080098C
    if (ctx->r2 != ctx->r1) {
        // 0x80800954: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080098C;
    }
    // 0x80800954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800958: lui         $a2, 0x3F73
    ctx->r6 = S32(0X3F73 << 16);
    // 0x8080095C: lui         $a3, 0x3F86
    ctx->r7 = S32(0X3F86 << 16);
    // 0x80800960: addiu       $t7, $zero, 0x6590
    ctx->r15 = ADD32(0, 0X6590);
    // 0x80800964: addiu       $t8, $zero, 0x6590
    ctx->r24 = ADD32(0, 0X6590);
    // 0x80800968: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8080096C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800970: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80800974: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080097C: jal         0x8009DEC0
    // 0x80800980: addiu       $a1, $zero, 0x58E
    ctx->r5 = ADD32(0, 0X58E);
    func_8009DEC0(rdram, ctx);
        goto after_5;
    // 0x80800980: addiu       $a1, $zero, 0x58E
    ctx->r5 = ADD32(0, 0X58E);
    after_5:
    // 0x80800984: b           L_808009B8
    // 0x80800988: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808009B8;
    // 0x80800988: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8080098C:
    // 0x8080098C: lui         $a2, 0x3F73
    ctx->r6 = S32(0X3F73 << 16);
    // 0x80800990: lui         $a3, 0x3F86
    ctx->r7 = S32(0X3F86 << 16);
    // 0x80800994: addiu       $t9, $zero, 0x2EE0
    ctx->r25 = ADD32(0, 0X2EE0);
    // 0x80800998: addiu       $t0, $zero, 0x2EE0
    ctx->r8 = ADD32(0, 0X2EE0);
    // 0x8080099C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x808009A0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x808009A4: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x808009A8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808009AC: jal         0x8009DEC0
    // 0x808009B0: addiu       $a1, $zero, 0x584
    ctx->r5 = ADD32(0, 0X584);
    func_8009DEC0(rdram, ctx);
        goto after_6;
    // 0x808009B0: addiu       $a1, $zero, 0x584
    ctx->r5 = ADD32(0, 0X584);
    after_6:
    // 0x808009B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808009B8:
    // 0x808009B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808009BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808009C0: jr          $ra
    // 0x808009C4: nop

    return;
    // 0x808009C4: nop

;}
RECOMP_FUNC void func_808009C8_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808009CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808009D0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808009D4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808009D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808009DC: jal         0x800004A8
    // 0x808009E0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_808004A8_bsledge(rdram, ctx);
        goto after_0;
    // 0x808009E0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x808009E4: jal         0x800004D8
    // 0x808009E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004D8_bsledge(rdram, ctx);
        goto after_1;
    // 0x808009E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808009EC: jal         0x8008CAC8
    // 0x808009F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_2;
    // 0x808009F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808009F4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(132, 0X1318) << 16);
    // 0x808009F8: lwc1        $f4, 0x1318($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(132, 0X1318));
    // 0x808009FC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800A00: nop

    // 0x80800A04: bc1f        L_80800A5C
    if (!c1cs) {
        // 0x80800A08: nop
    
            goto L_80800A5C;
    }
    // 0x80800A08: nop

    // 0x80800A0C: jal         0x800003D0
    // 0x80800A10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808003D0_bsledge(rdram, ctx);
        goto after_3;
    // 0x80800A10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800A14: beq         $v0, $zero, L_80800A20
    if (ctx->r2 == 0) {
        // 0x80800A18: nop
    
            goto L_80800A20;
    }
    // 0x80800A18: nop

    // 0x80800A1C: addiu       $s1, $zero, 0xAA
    ctx->r17 = ADD32(0, 0XAA);
L_80800A20:
    // 0x80800A20: jal         0x80000450
    // 0x80800A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800450_bsledge(rdram, ctx);
        goto after_4;
    // 0x80800A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800A28: beq         $v0, $zero, L_80800A34
    if (ctx->r2 == 0) {
        // 0x80800A2C: nop
    
            goto L_80800A34;
    }
    // 0x80800A2C: nop

    // 0x80800A30: addiu       $s1, $zero, 0xA7
    ctx->r17 = ADD32(0, 0XA7);
L_80800A34:
    // 0x80800A34: jal         0x80000000
    // 0x80800A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsledge(rdram, ctx);
        goto after_5;
    // 0x80800A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800A3C: beq         $v0, $zero, L_80800A48
    if (ctx->r2 == 0) {
        // 0x80800A40: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A48;
    }
    // 0x80800A40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A44: addiu       $s1, $zero, 0xA9
    ctx->r17 = ADD32(0, 0XA9);
L_80800A48:
    // 0x80800A48: jal         0x80091A58
    // 0x80800A4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A58(rdram, ctx);
        goto after_6;
    // 0x80800A4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x80800A50: beq         $v0, $zero, L_80800A5C
    if (ctx->r2 == 0) {
        // 0x80800A54: nop
    
            goto L_80800A5C;
    }
    // 0x80800A54: nop

    // 0x80800A58: addiu       $s1, $zero, 0x2F
    ctx->r17 = ADD32(0, 0X2F);
L_80800A5C:
    // 0x80800A5C: jal         0x8008CAEC
    // 0x80800A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_7;
    // 0x80800A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800A64: beq         $v0, $zero, L_80800A70
    if (ctx->r2 == 0) {
        // 0x80800A68: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A70;
    }
    // 0x80800A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A6C: addiu       $s1, $zero, 0xA6
    ctx->r17 = ADD32(0, 0XA6);
L_80800A70:
    // 0x80800A70: jal         0x8009E5C8
    // 0x80800A74: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_8;
    // 0x80800A74: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
    // 0x80800A78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800A7C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800A80: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800A84: jr          $ra
    // 0x80800A88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800A88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bsledge_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A8C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800A90: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(132, 0X1368) << 16);
    // 0x80800A94: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800A98: jr          $ra
    // 0x80800A9C: lw          $v0, 0x1368($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(132, 0X1368));
    return;
    // 0x80800A9C: lw          $v0, 0x1368($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(132, 0X1368));
;}
RECOMP_FUNC void func_80800AA0_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AA0: lw          $t6, 0x15C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X15C);
    // 0x80800AA4: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80800AA8: bgez        $t6, L_80800AB8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80800AAC: nop
    
            goto L_80800AB8;
    }
    // 0x80800AAC: nop

    // 0x80800AB0: jr          $ra
    // 0x80800AB4: addiu       $v0, $zero, 0x51
    ctx->r2 = ADD32(0, 0X51);
    return;
    // 0x80800AB4: addiu       $v0, $zero, 0x51
    ctx->r2 = ADD32(0, 0X51);
L_80800AB8:
    // 0x80800AB8: jr          $ra
    // 0x80800ABC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80800ABC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80800AC0_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800AC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800AC8: jal         0x800001A8
    // 0x80800ACC: nop

    func_808001A8_bsledge(rdram, ctx);
        goto after_0;
    // 0x80800ACC: nop

    after_0:
    // 0x80800AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800AD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800AD8: jr          $ra
    // 0x80800ADC: nop

    return;
    // 0x80800ADC: nop

;}
RECOMP_FUNC void func_80800AE0_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800AE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800AE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800AEC: jal         0x80000238
    // 0x80800AF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800238_bsledge(rdram, ctx);
        goto after_0;
    // 0x80800AF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800AF4: jal         0x80000AA0
    // 0x80800AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800AA0_bsledge(rdram, ctx);
        goto after_1;
    // 0x80800AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800AFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B00: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80800B04: jal         0x8008CB3C
    // 0x80800B08: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_2;
    // 0x80800B08: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_2:
    // 0x80800B0C: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x80800B10: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800B1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800B20: jal         0x8009FFD8
    // 0x80800B24: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_3;
    // 0x80800B24: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_3:
    // 0x80800B28: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80800B2C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800B30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B34: jal         0x8008C9BC
    // 0x80800B38: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_4;
    // 0x80800B38: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_4:
    // 0x80800B3C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(132, 0X131C) << 16);
    // 0x80800B40: lwc1        $f4, 0x131C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(132, 0X131C));
    // 0x80800B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B48: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x80800B4C: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x80800B50: lui         $a3, 0x3FC0
    ctx->r7 = S32(0X3FC0 << 16);
    // 0x80800B54: jal         0x8008C9F0
    // 0x80800B58: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_5;
    // 0x80800B58: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x80800B5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800B60: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800B64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800B68: jr          $ra
    // 0x80800B6C: nop

    return;
    // 0x80800B6C: nop

;}
RECOMP_FUNC void func_80800B70_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800B74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800B78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800B7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800B80: jal         0x800004A8
    // 0x80800B84: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_808004A8_bsledge(rdram, ctx);
        goto after_0;
    // 0x80800B84: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800B88: jal         0x800004D8
    // 0x80800B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004D8_bsledge(rdram, ctx);
        goto after_1;
    // 0x80800B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800B90: jal         0x80000AA0
    // 0x80800B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800AA0_bsledge(rdram, ctx);
        goto after_2;
    // 0x80800B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800B98: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800B9C: jal         0x8008CABC
    // 0x80800BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CABC(rdram, ctx);
        goto after_3;
    // 0x80800BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800BA4: jal         0x8008B264
    // 0x80800BA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B264(rdram, ctx);
        goto after_4;
    // 0x80800BA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x80800BAC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80800BB0: beq         $v0, $a1, L_80800BC0
    if (ctx->r2 == ctx->r5) {
        // 0x80800BB4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800BC0;
    }
    // 0x80800BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BB8: jal         0x8008CB3C
    // 0x80800BBC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_5;
    // 0x80800BBC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_5:
L_80800BC0:
    // 0x80800BC0: lui         $a1, 0x3E19
    ctx->r5 = S32(0X3E19 << 16);
    // 0x80800BC4: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800BC8: jal         0x8008CB10
    // 0x80800BCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_6;
    // 0x80800BCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800BD0: beq         $v0, $zero, L_80800BEC
    if (ctx->r2 == 0) {
        // 0x80800BD4: lui         $a2, 0x3F45
        ctx->r6 = S32(0X3F45 << 16);
            goto L_80800BEC;
    }
    // 0x80800BD4: lui         $a2, 0x3F45
    ctx->r6 = S32(0X3F45 << 16);
    // 0x80800BD8: ori         $a2, $a2, 0x1EB8
    ctx->r6 = ctx->r6 | 0X1EB8;
    // 0x80800BDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BE0: addiu       $a1, $zero, 0x46E
    ctx->r5 = ADD32(0, 0X46E);
    // 0x80800BE4: jal         0x8009DF94
    // 0x80800BE8: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    func_8009DF94(rdram, ctx);
        goto after_7;
    // 0x80800BE8: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    after_7:
L_80800BEC:
    // 0x80800BEC: lui         $a1, 0x3E61
    ctx->r5 = S32(0X3E61 << 16);
    // 0x80800BF0: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    // 0x80800BF4: jal         0x8008CB10
    // 0x80800BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_8;
    // 0x80800BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800BFC: beql        $v0, $zero, L_80800C10
    if (ctx->r2 == 0) {
        // 0x80800C00: lui         $a1, 0x3F26
        ctx->r5 = S32(0X3F26 << 16);
            goto L_80800C10;
    }
    goto skip_0;
    // 0x80800C00: lui         $a1, 0x3F26
    ctx->r5 = S32(0X3F26 << 16);
    skip_0:
    // 0x80800C04: jal         0x80000334
    // 0x80800C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800334_bsledge(rdram, ctx);
        goto after_9;
    // 0x80800C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800C0C: lui         $a1, 0x3F26
    ctx->r5 = S32(0X3F26 << 16);
L_80800C10:
    // 0x80800C10: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80800C14: jal         0x8008CB10
    // 0x80800C18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_10;
    // 0x80800C18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800C1C: beq         $v0, $zero, L_80800C38
    if (ctx->r2 == 0) {
        // 0x80800C20: lui         $a2, 0x3F5E
        ctx->r6 = S32(0X3F5E << 16);
            goto L_80800C38;
    }
    // 0x80800C20: lui         $a2, 0x3F5E
    ctx->r6 = S32(0X3F5E << 16);
    // 0x80800C24: ori         $a2, $a2, 0xB852
    ctx->r6 = ctx->r6 | 0XB852;
    // 0x80800C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C2C: addiu       $a1, $zero, 0x46E
    ctx->r5 = ADD32(0, 0X46E);
    // 0x80800C30: jal         0x8009DF94
    // 0x80800C34: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    func_8009DF94(rdram, ctx);
        goto after_11;
    // 0x80800C34: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    after_11:
L_80800C38:
    // 0x80800C38: lui         $a1, 0x3F38
    ctx->r5 = S32(0X3F38 << 16);
    // 0x80800C3C: ori         $a1, $a1, 0x51EC
    ctx->r5 = ctx->r5 | 0X51EC;
    // 0x80800C40: jal         0x8008CB10
    // 0x80800C44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_12;
    // 0x80800C44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800C48: beq         $v0, $zero, L_80800C58
    if (ctx->r2 == 0) {
        // 0x80800C4C: nop
    
            goto L_80800C58;
    }
    // 0x80800C4C: nop

    // 0x80800C50: jal         0x80000334
    // 0x80800C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800334_bsledge(rdram, ctx);
        goto after_13;
    // 0x80800C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
L_80800C58:
    // 0x80800C58: jal         0x80000450
    // 0x80800C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800450_bsledge(rdram, ctx);
        goto after_14;
    // 0x80800C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800C60: bne         $v0, $zero, L_80800C6C
    if (ctx->r2 != 0) {
        // 0x80800C64: addiu       $t6, $zero, 0xA6
        ctx->r14 = ADD32(0, 0XA6);
            goto L_80800C6C;
    }
    // 0x80800C64: addiu       $t6, $zero, 0xA6
    ctx->r14 = ADD32(0, 0XA6);
    // 0x80800C68: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800C6C:
    // 0x80800C6C: jal         0x800003D0
    // 0x80800C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808003D0_bsledge(rdram, ctx);
        goto after_15;
    // 0x80800C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800C74: beq         $v0, $zero, L_80800C80
    if (ctx->r2 == 0) {
        // 0x80800C78: addiu       $t7, $zero, 0xAA
        ctx->r15 = ADD32(0, 0XAA);
            goto L_80800C80;
    }
    // 0x80800C78: addiu       $t7, $zero, 0xAA
    ctx->r15 = ADD32(0, 0XAA);
    // 0x80800C7C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80800C80:
    // 0x80800C80: jal         0x80000000
    // 0x80800C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsledge(rdram, ctx);
        goto after_16;
    // 0x80800C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800C88: beq         $v0, $zero, L_80800C98
    if (ctx->r2 == 0) {
        // 0x80800C8C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800C98;
    }
    // 0x80800C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C90: addiu       $t8, $zero, 0xA9
    ctx->r24 = ADD32(0, 0XA9);
    // 0x80800C94: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80800C98:
    // 0x80800C98: jal         0x80091A58
    // 0x80800C9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A58(rdram, ctx);
        goto after_17;
    // 0x80800C9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x80800CA0: beq         $v0, $zero, L_80800CAC
    if (ctx->r2 == 0) {
        // 0x80800CA4: addiu       $t9, $zero, 0x2F
        ctx->r25 = ADD32(0, 0X2F);
            goto L_80800CAC;
    }
    // 0x80800CA4: addiu       $t9, $zero, 0x2F
    ctx->r25 = ADD32(0, 0X2F);
    // 0x80800CA8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80800CAC:
    // 0x80800CAC: jal         0x80000410
    // 0x80800CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800410_bsledge(rdram, ctx);
        goto after_18;
    // 0x80800CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800CB4: bne         $v0, $zero, L_80800CC4
    if (ctx->r2 != 0) {
        // 0x80800CB8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800CC4;
    }
    // 0x80800CB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CBC: addiu       $t0, $zero, 0x2F
    ctx->r8 = ADD32(0, 0X2F);
    // 0x80800CC0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_80800CC4:
    // 0x80800CC4: jal         0x8009E5C8
    // 0x80800CC8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_19;
    // 0x80800CC8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_19:
    // 0x80800CCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800CD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800CD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800CD8: jr          $ra
    // 0x80800CDC: nop

    return;
    // 0x80800CDC: nop

;}
RECOMP_FUNC void bsledge_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CE0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800CE4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(132, 0X1378) << 16);
    // 0x80800CE8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800CEC: jr          $ra
    // 0x80800CF0: lw          $v0, 0x1378($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(132, 0X1378));
    return;
    // 0x80800CF0: lw          $v0, 0x1378($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(132, 0X1378));
;}
RECOMP_FUNC void func_80800CF4_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CF4: lw          $v1, 0x164($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X164);
    // 0x80800CF8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80800CFC: sltu        $at, $v1, $a2
    ctx->r1 = ctx->r3 < ctx->r6 ? 1 : 0;
    // 0x80800D00: bnel        $at, $zero, L_80800D14
    if (ctx->r1 != 0) {
        // 0x80800D04: addu        $t6, $v1, $a3
        ctx->r14 = ADD32(ctx->r3, ctx->r7);
            goto L_80800D14;
    }
    goto skip_0;
    // 0x80800D04: addu        $t6, $v1, $a3
    ctx->r14 = ADD32(ctx->r3, ctx->r7);
    skip_0:
    // 0x80800D08: sw          $zero, 0x164($a0)
    MEM_W(0X164, ctx->r4) = 0;
    // 0x80800D0C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80800D10: addu        $t6, $v1, $a3
    ctx->r14 = ADD32(ctx->r3, ctx->r7);
L_80800D14:
    // 0x80800D14: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
    // 0x80800D18: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x80800D1C: jr          $ra
    // 0x80800D20: sw          $t7, 0x164($a0)
    MEM_W(0X164, ctx->r4) = ctx->r15;
    return;
    // 0x80800D20: sw          $t7, 0x164($a0)
    MEM_W(0X164, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_80800D24_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D2C: jal         0x800A3274
    // 0x80800D30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A3274(rdram, ctx);
        goto after_0;
    // 0x80800D30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D34: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80800D38: bne         $v0, $at, L_80800D58
    if (ctx->r2 != ctx->r1) {
        // 0x80800D3C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800D58;
    }
    // 0x80800D3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800D40: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(132, 0X1390) << 16);
    // 0x80800D44: addiu       $a1, $a1, 0x1390
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(132, 0X1390));
    // 0x80800D48: jal         0x80000CF4
    // 0x80800D4C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_80800CF4_bsledge(rdram, ctx);
        goto after_1;
    // 0x80800D4C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x80800D50: b           L_80800D6C
    // 0x80800D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800D6C;
    // 0x80800D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800D58:
    // 0x80800D58: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(132, 0X1388) << 16);
    // 0x80800D5C: addiu       $a1, $a1, 0x1388
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(132, 0X1388));
    // 0x80800D60: jal         0x80000CF4
    // 0x80800D64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80800CF4_bsledge(rdram, ctx);
        goto after_2;
    // 0x80800D64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80800D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800D6C:
    // 0x80800D6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D70: jr          $ra
    // 0x80800D74: nop

    return;
    // 0x80800D74: nop

;}
RECOMP_FUNC void func_80800D78_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800D7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800D80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800D84: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800D88: lw          $v0, 0x160($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X160);
    // 0x80800D8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800D90: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800D94: beq         $v0, $at, L_80800DC0
    if (ctx->r2 == ctx->r1) {
        // 0x80800D98: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800DC0;
    }
    // 0x80800D98: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800D9C: beq         $v0, $at, L_80800E08
    if (ctx->r2 == ctx->r1) {
        // 0x80800DA0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800E08;
    }
    // 0x80800DA0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800DA4: beq         $v0, $at, L_80800DE0
    if (ctx->r2 == ctx->r1) {
        // 0x80800DA8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800DE0;
    }
    // 0x80800DA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DAC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800DB0: beq         $v0, $at, L_80800DF8
    if (ctx->r2 == ctx->r1) {
        // 0x80800DB4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800DF8;
    }
    // 0x80800DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DB8: b           L_80800E0C
    // 0x80800DBC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
        goto L_80800E0C;
    // 0x80800DBC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
L_80800DC0:
    // 0x80800DC0: jal         0x8008E0E8
    // 0x80800DC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E0E8(rdram, ctx);
        goto after_0;
    // 0x80800DC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80800DC8: bne         $v0, $zero, L_80800E08
    if (ctx->r2 != 0) {
        // 0x80800DCC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E08;
    }
    // 0x80800DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DD0: jal         0x80084788
    // 0x80800DD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800DD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800DD8: b           L_80800E0C
    // 0x80800DDC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
        goto L_80800E0C;
    // 0x80800DDC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
L_80800DE0:
    // 0x80800DE0: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x80800DE4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800DE8: jal         0x800A0D14
    // 0x80800DEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0D14(rdram, ctx);
        goto after_2;
    // 0x80800DEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800DF0: b           L_80800E0C
    // 0x80800DF4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
        goto L_80800E0C;
    // 0x80800DF4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
L_80800DF8:
    // 0x80800DF8: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x80800DFC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800E00: jal         0x800A0D14
    // 0x80800E04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0D14(rdram, ctx);
        goto after_3;
    // 0x80800E04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_80800E08:
    // 0x80800E08: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
L_80800E0C:
    // 0x80800E0C: sw          $t6, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r14;
    // 0x80800E10: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80800E14: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x80800E18: beq         $at, $zero, L_80800ECC
    if (ctx->r1 == 0) {
        // 0x80800E1C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80800ECC;
    }
    // 0x80800E1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80800E20: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(132, 0X1320) << 16);
    // 0x80800E24: addu        $at, $at, $t7
    gpr jr_addend_80800E2C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80800E28: lw          $t7, 0x1320($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(132, 0X1320));
    // 0x80800E2C: jr          $t7
    // 0x80800E30: nop

    switch (jr_addend_80800E2C >> 2) {
        case 0: goto L_80800ECC; break;
        case 1: goto L_80800E34; break;
        case 2: goto L_80800E74; break;
        case 3: goto L_80800E8C; break;
        case 4: goto L_80800EB0; break;
        default: switch_error(__func__, 0x80800E2C, 0x80801320);
    }
    // 0x80800E30: nop

L_80800E34:
    // 0x80800E34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E38: jal         0x800A0CF4
    // 0x80800E3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_4;
    // 0x80800E3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80800E40: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x80800E44: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E4C: jal         0x8008CCBC
    // 0x80800E50: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    func_8008CCBC(rdram, ctx);
        goto after_5;
    // 0x80800E50: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    after_5:
    // 0x80800E54: jal         0x8008E0E8
    // 0x80800E58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E0E8(rdram, ctx);
        goto after_6;
    // 0x80800E58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800E5C: bne         $v0, $zero, L_80800ECC
    if (ctx->r2 != 0) {
        // 0x80800E60: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800ECC;
    }
    // 0x80800E60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E64: jal         0x80084788
    // 0x80800E68: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_7;
    // 0x80800E68: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_7:
    // 0x80800E6C: b           L_80800ED0
    // 0x80800E70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800ED0;
    // 0x80800E70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800E74:
    // 0x80800E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E78: addiu       $a1, $zero, 0x55
    ctx->r5 = ADD32(0, 0X55);
    // 0x80800E7C: jal         0x8008CCBC
    // 0x80800E80: lui         $a2, 0x4090
    ctx->r6 = S32(0X4090 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_8;
    // 0x80800E80: lui         $a2, 0x4090
    ctx->r6 = S32(0X4090 << 16);
    after_8:
    // 0x80800E84: b           L_80800ED0
    // 0x80800E88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800ED0;
    // 0x80800E88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800E8C:
    // 0x80800E8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E90: jal         0x800A0CF4
    // 0x80800E94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_9;
    // 0x80800E94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x80800E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E9C: addiu       $a1, $zero, 0x56
    ctx->r5 = ADD32(0, 0X56);
    // 0x80800EA0: jal         0x8008CCBC
    // 0x80800EA4: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_10;
    // 0x80800EA4: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_10:
    // 0x80800EA8: b           L_80800ED0
    // 0x80800EAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800ED0;
    // 0x80800EAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800EB0:
    // 0x80800EB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EB4: jal         0x800A0CF4
    // 0x80800EB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_11;
    // 0x80800EB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x80800EBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EC0: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    // 0x80800EC4: jal         0x8008CCBC
    // 0x80800EC8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_12;
    // 0x80800EC8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_12:
L_80800ECC:
    // 0x80800ECC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800ED0:
    // 0x80800ED0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800ED4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800ED8: jr          $ra
    // 0x80800EDC: nop

    return;
    // 0x80800EDC: nop

;}
RECOMP_FUNC void func_80800EE0_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800EE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800EE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800EEC: jal         0x80000D78
    // 0x80800EF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800D78_bsledge(rdram, ctx);
        goto after_0;
    // 0x80800EF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800EF4: jal         0x800001A8
    // 0x80800EF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808001A8_bsledge(rdram, ctx);
        goto after_1;
    // 0x80800EF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F04: jr          $ra
    // 0x80800F08: nop

    return;
    // 0x80800F08: nop

;}
RECOMP_FUNC void func_80800F0C_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800F10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800F14: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800F18: jal         0x80000238
    // 0x80800F1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800238_bsledge(rdram, ctx);
        goto after_0;
    // 0x80800F1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800F20: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x80800F24: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800F28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800F30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800F34: jal         0x8009FFD8
    // 0x80800F38: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800F38: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x80800F3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F40: jal         0x80000488
    // 0x80800F44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800488_bsledge(rdram, ctx);
        goto after_2;
    // 0x80800F44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800F48: sw          $zero, 0x164($s0)
    MEM_W(0X164, ctx->r16) = 0;
    // 0x80800F4C: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    // 0x80800F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F54: jal         0x80000D78
    // 0x80800F58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800D78_bsledge(rdram, ctx);
        goto after_3;
    // 0x80800F58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80800F5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800F60: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800F64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800F68: jr          $ra
    // 0x80800F6C: nop

    return;
    // 0x80800F6C: nop

;}
RECOMP_FUNC void func_80800F70_bsledge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800F74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800F78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800F7C: jal         0x8008CABC
    // 0x80800F80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800F80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800F84: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800F88: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80800F8C: jal         0x800004A8
    // 0x80800F90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004A8_bsledge(rdram, ctx);
        goto after_1;
    // 0x80800F90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800F94: jal         0x800004D8
    // 0x80800F98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004D8_bsledge(rdram, ctx);
        goto after_2;
    // 0x80800F98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800F9C: lw          $v0, 0x160($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X160);
    // 0x80800FA0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800FA4: beq         $v0, $at, L_80800FD0
    if (ctx->r2 == ctx->r1) {
        // 0x80800FA8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800FD0;
    }
    // 0x80800FA8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800FAC: beq         $v0, $at, L_80800FFC
    if (ctx->r2 == ctx->r1) {
        // 0x80800FB0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800FFC;
    }
    // 0x80800FB0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800FB4: beq         $v0, $at, L_80801028
    if (ctx->r2 == ctx->r1) {
        // 0x80800FB8: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_80801028;
    }
    // 0x80800FB8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80800FBC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800FC0: beq         $v0, $at, L_80801190
    if (ctx->r2 == ctx->r1) {
        // 0x80800FC4: nop
    
            goto L_80801190;
    }
    // 0x80800FC4: nop

    // 0x80800FC8: b           L_808011B4
    // 0x80800FCC: nop

        goto L_808011B4;
    // 0x80800FCC: nop

L_80800FD0:
    // 0x80800FD0: jal         0x8008B324
    // 0x80800FD4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B324(rdram, ctx);
        goto after_3;
    // 0x80800FD4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x80800FD8: beq         $v0, $zero, L_808011B4
    if (ctx->r2 == 0) {
        // 0x80800FDC: nop
    
            goto L_808011B4;
    }
    // 0x80800FDC: nop

    // 0x80800FE0: jal         0x80000D24
    // 0x80800FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800D24_bsledge(rdram, ctx);
        goto after_4;
    // 0x80800FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FEC: jal         0x80000D78
    // 0x80800FF0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80800D78_bsledge(rdram, ctx);
        goto after_5;
    // 0x80800FF0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_5:
    // 0x80800FF4: b           L_808011B4
    // 0x80800FF8: nop

        goto L_808011B4;
    // 0x80800FF8: nop

L_80800FFC:
    // 0x80800FFC: jal         0x8008B324
    // 0x80801000: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B324(rdram, ctx);
        goto after_6;
    // 0x80801000: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x80801004: beq         $v0, $zero, L_808011B4
    if (ctx->r2 == 0) {
        // 0x80801008: nop
    
            goto L_808011B4;
    }
    // 0x80801008: nop

    // 0x8080100C: jal         0x80000D24
    // 0x80801010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800D24_bsledge(rdram, ctx);
        goto after_7;
    // 0x80801010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80801014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801018: jal         0x80000D78
    // 0x8080101C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80800D78_bsledge(rdram, ctx);
        goto after_8;
    // 0x8080101C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_8:
    // 0x80801020: b           L_808011B4
    // 0x80801024: nop

        goto L_808011B4;
    // 0x80801024: nop

L_80801028:
    // 0x80801028: lui         $a1, 0x3BE5
    ctx->r5 = S32(0X3BE5 << 16);
    // 0x8080102C: jal         0x8008B348
    // 0x80801030: ori         $a1, $a1, 0x6042
    ctx->r5 = ctx->r5 | 0X6042;
    func_8008B348(rdram, ctx);
        goto after_9;
    // 0x80801030: ori         $a1, $a1, 0x6042
    ctx->r5 = ctx->r5 | 0X6042;
    after_9:
    // 0x80801034: beql        $v0, $zero, L_80801048
    if (ctx->r2 == 0) {
        // 0x80801038: lui         $a1, 0x3E4B
        ctx->r5 = S32(0X3E4B << 16);
            goto L_80801048;
    }
    goto skip_0;
    // 0x80801038: lui         $a1, 0x3E4B
    ctx->r5 = S32(0X3E4B << 16);
    skip_0:
    // 0x8080103C: jal         0x8009D874
    // 0x80801040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D874(rdram, ctx);
        goto after_10;
    // 0x80801040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80801044: lui         $a1, 0x3E4B
    ctx->r5 = S32(0X3E4B << 16);
L_80801048:
    // 0x80801048: ori         $a1, $a1, 0xF28
    ctx->r5 = ctx->r5 | 0XF28;
    // 0x8080104C: jal         0x8008B348
    // 0x80801050: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_11;
    // 0x80801050: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_11:
    // 0x80801054: bne         $v0, $zero, L_8080106C
    if (ctx->r2 != 0) {
        // 0x80801058: lui         $a1, 0x3E6B
        ctx->r5 = S32(0X3E6B << 16);
            goto L_8080106C;
    }
    // 0x80801058: lui         $a1, 0x3E6B
    ctx->r5 = S32(0X3E6B << 16);
    // 0x8080105C: ori         $a1, $a1, 0xB98C
    ctx->r5 = ctx->r5 | 0XB98C;
    // 0x80801060: jal         0x8008B348
    // 0x80801064: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_12;
    // 0x80801064: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_12:
    // 0x80801068: beq         $v0, $zero, L_8080109C
    if (ctx->r2 == 0) {
        // 0x8080106C: lui         $a2, 0x3FE6
        ctx->r6 = S32(0X3FE6 << 16);
            goto L_8080109C;
    }
L_8080106C:
    // 0x8080106C: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x80801070: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80801074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801078: addiu       $a1, $zero, 0x418
    ctx->r5 = ADD32(0, 0X418);
    // 0x8080107C: jal         0x8009DF94
    // 0x80801080: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    func_8009DF94(rdram, ctx);
        goto after_13;
    // 0x80801080: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    after_13:
    // 0x80801084: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x80801088: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x8080108C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801090: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x80801094: jal         0x80085490
    // 0x80801098: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    _bamotor_entrypoint_1(rdram, ctx);
        goto after_14;
    // 0x80801098: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    after_14:
L_8080109C:
    // 0x8080109C: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    // 0x808010A0: ori         $a1, $a1, 0x1A37
    ctx->r5 = ctx->r5 | 0X1A37;
    // 0x808010A4: jal         0x8008B348
    // 0x808010A8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_15;
    // 0x808010A8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_15:
    // 0x808010AC: beq         $v0, $zero, L_808010C4
    if (ctx->r2 == 0) {
        // 0x808010B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808010C4;
    }
    // 0x808010B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010B4: addiu       $a1, $zero, 0x445
    ctx->r5 = ADD32(0, 0X445);
    // 0x808010B8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808010BC: jal         0x8009DF94
    // 0x808010C0: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    func_8009DF94(rdram, ctx);
        goto after_16;
    // 0x808010C0: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    after_16:
L_808010C4:
    // 0x808010C4: lui         $a1, 0x3EC0
    ctx->r5 = S32(0X3EC0 << 16);
    // 0x808010C8: ori         $a1, $a1, 0x8312
    ctx->r5 = ctx->r5 | 0X8312;
    // 0x808010CC: jal         0x8008B348
    // 0x808010D0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_17;
    // 0x808010D0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_17:
    // 0x808010D4: beq         $v0, $zero, L_808010EC
    if (ctx->r2 == 0) {
        // 0x808010D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808010EC;
    }
    // 0x808010D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010DC: lui         $a2, 0x3FCC
    ctx->r6 = S32(0X3FCC << 16);
    // 0x808010E0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808010E4: jal         0x8009DF58
    // 0x808010E8: addiu       $a1, $zero, 0x43EF
    ctx->r5 = ADD32(0, 0X43EF);
    func_8009DF58(rdram, ctx);
        goto after_18;
    // 0x808010E8: addiu       $a1, $zero, 0x43EF
    ctx->r5 = ADD32(0, 0X43EF);
    after_18:
L_808010EC:
    // 0x808010EC: lui         $a1, 0x3ED1
    ctx->r5 = S32(0X3ED1 << 16);
    // 0x808010F0: ori         $a1, $a1, 0xA9FC
    ctx->r5 = ctx->r5 | 0XA9FC;
    // 0x808010F4: jal         0x8008B348
    // 0x808010F8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_19;
    // 0x808010F8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_19:
    // 0x808010FC: beq         $v0, $zero, L_80801114
    if (ctx->r2 == 0) {
        // 0x80801100: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801114;
    }
    // 0x80801100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801104: lui         $a2, 0x3FB9
    ctx->r6 = S32(0X3FB9 << 16);
    // 0x80801108: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x8080110C: jal         0x8009DF58
    // 0x80801110: addiu       $a1, $zero, 0x43EF
    ctx->r5 = ADD32(0, 0X43EF);
    func_8009DF58(rdram, ctx);
        goto after_20;
    // 0x80801110: addiu       $a1, $zero, 0x43EF
    ctx->r5 = ADD32(0, 0X43EF);
    after_20:
L_80801114:
    // 0x80801114: lui         $a1, 0x3EE6
    ctx->r5 = S32(0X3EE6 << 16);
    // 0x80801118: ori         $a1, $a1, 0x24DD
    ctx->r5 = ctx->r5 | 0X24DD;
    // 0x8080111C: jal         0x8008B348
    // 0x80801120: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_21;
    // 0x80801120: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_21:
    // 0x80801124: beq         $v0, $zero, L_8080113C
    if (ctx->r2 == 0) {
        // 0x80801128: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080113C;
    }
    // 0x80801128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080112C: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x80801130: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80801134: jal         0x8009DF58
    // 0x80801138: addiu       $a1, $zero, 0x43EF
    ctx->r5 = ADD32(0, 0X43EF);
    func_8009DF58(rdram, ctx);
        goto after_22;
    // 0x80801138: addiu       $a1, $zero, 0x43EF
    ctx->r5 = ADD32(0, 0X43EF);
    after_22:
L_8080113C:
    // 0x8080113C: lui         $a1, 0x3F0A
    ctx->r5 = S32(0X3F0A << 16);
    // 0x80801140: ori         $a1, $a1, 0x1CAC
    ctx->r5 = ctx->r5 | 0X1CAC;
    // 0x80801144: jal         0x8008B348
    // 0x80801148: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_23;
    // 0x80801148: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_23:
    // 0x8080114C: beq         $v0, $zero, L_80801164
    if (ctx->r2 == 0) {
        // 0x80801150: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801164;
    }
    // 0x80801150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801154: addiu       $a1, $zero, 0x449
    ctx->r5 = ADD32(0, 0X449);
    // 0x80801158: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8080115C: jal         0x8009DF94
    // 0x80801160: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    func_8009DF94(rdram, ctx);
        goto after_24;
    // 0x80801160: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    after_24:
L_80801164:
    // 0x80801164: jal         0x8008B324
    // 0x80801168: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B324(rdram, ctx);
        goto after_25;
    // 0x80801168: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_25:
    // 0x8080116C: beq         $v0, $zero, L_808011B4
    if (ctx->r2 == 0) {
        // 0x80801170: nop
    
            goto L_808011B4;
    }
    // 0x80801170: nop

    // 0x80801174: jal         0x80000D24
    // 0x80801178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800D24_bsledge(rdram, ctx);
        goto after_26;
    // 0x80801178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x8080117C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801180: jal         0x80000D78
    // 0x80801184: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80800D78_bsledge(rdram, ctx);
        goto after_27;
    // 0x80801184: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_27:
    // 0x80801188: b           L_808011B4
    // 0x8080118C: nop

        goto L_808011B4;
    // 0x8080118C: nop

L_80801190:
    // 0x80801190: jal         0x8008B324
    // 0x80801194: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B324(rdram, ctx);
        goto after_28;
    // 0x80801194: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_28:
    // 0x80801198: beq         $v0, $zero, L_808011B4
    if (ctx->r2 == 0) {
        // 0x8080119C: nop
    
            goto L_808011B4;
    }
    // 0x8080119C: nop

    // 0x808011A0: jal         0x80000D24
    // 0x808011A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800D24_bsledge(rdram, ctx);
        goto after_29;
    // 0x808011A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x808011A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011AC: jal         0x80000D78
    // 0x808011B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80800D78_bsledge(rdram, ctx);
        goto after_30;
    // 0x808011B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_30:
L_808011B4:
    // 0x808011B4: jal         0x80000450
    // 0x808011B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800450_bsledge(rdram, ctx);
        goto after_31;
    // 0x808011B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x808011BC: beq         $v0, $zero, L_808011C8
    if (ctx->r2 == 0) {
        // 0x808011C0: addiu       $t6, $zero, 0xA7
        ctx->r14 = ADD32(0, 0XA7);
            goto L_808011C8;
    }
    // 0x808011C0: addiu       $t6, $zero, 0xA7
    ctx->r14 = ADD32(0, 0XA7);
    // 0x808011C4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
L_808011C8:
    // 0x808011C8: jal         0x800003D0
    // 0x808011CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808003D0_bsledge(rdram, ctx);
        goto after_32;
    // 0x808011CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x808011D0: beq         $v0, $zero, L_808011DC
    if (ctx->r2 == 0) {
        // 0x808011D4: addiu       $t7, $zero, 0xAA
        ctx->r15 = ADD32(0, 0XAA);
            goto L_808011DC;
    }
    // 0x808011D4: addiu       $t7, $zero, 0xAA
    ctx->r15 = ADD32(0, 0XAA);
    // 0x808011D8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
L_808011DC:
    // 0x808011DC: jal         0x80000000
    // 0x808011E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsledge(rdram, ctx);
        goto after_33;
    // 0x808011E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x808011E4: beq         $v0, $zero, L_808011F4
    if (ctx->r2 == 0) {
        // 0x808011E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808011F4;
    }
    // 0x808011E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011EC: addiu       $t8, $zero, 0xA9
    ctx->r24 = ADD32(0, 0XA9);
    // 0x808011F0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
L_808011F4:
    // 0x808011F4: jal         0x80091A58
    // 0x808011F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A58(rdram, ctx);
        goto after_34;
    // 0x808011F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_34:
    // 0x808011FC: beq         $v0, $zero, L_80801208
    if (ctx->r2 == 0) {
        // 0x80801200: addiu       $t9, $zero, 0x2F
        ctx->r25 = ADD32(0, 0X2F);
            goto L_80801208;
    }
    // 0x80801200: addiu       $t9, $zero, 0x2F
    ctx->r25 = ADD32(0, 0X2F);
    // 0x80801204: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
L_80801208:
    // 0x80801208: jal         0x80000410
    // 0x8080120C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800410_bsledge(rdram, ctx);
        goto after_35;
    // 0x8080120C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x80801210: bne         $v0, $zero, L_80801220
    if (ctx->r2 != 0) {
        // 0x80801214: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801220;
    }
    // 0x80801214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801218: addiu       $t0, $zero, 0x2F
    ctx->r8 = ADD32(0, 0X2F);
    // 0x8080121C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
L_80801220:
    // 0x80801220: jal         0x8009E5C8
    // 0x80801224: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_36;
    // 0x80801224: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_36:
    // 0x80801228: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080122C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801230: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801234: jr          $ra
    // 0x80801238: nop

    return;
    // 0x80801238: nop

;}
RECOMP_FUNC void bsledge_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080123C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801240: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(132, 0X1398) << 16);
    // 0x80801244: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801248: jr          $ra
    // 0x8080124C: lw          $v0, 0x1398($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(132, 0X1398));
    return;
    // 0x8080124C: lw          $v0, 0x1398($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(132, 0X1398));
;}
RECOMP_FUNC void bsledge_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801250: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801258: jal         0x800839B8
    // 0x8080125C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x8080125C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801260: jal         0x800001A8
    // 0x80801264: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808001A8_bsledge(rdram, ctx);
        goto after_1;
    // 0x80801264: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080126C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801270: jr          $ra
    // 0x80801274: nop

    return;
    // 0x80801274: nop

;}
RECOMP_FUNC void bsledge_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801278: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080127C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801280: jal         0x80000238
    // 0x80801284: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800238_bsledge(rdram, ctx);
        goto after_0;
    // 0x80801284: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801288: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080128C: jal         0x80000488
    // 0x80801290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800488_bsledge(rdram, ctx);
        goto after_1;
    // 0x80801290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80801294: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801298: jal         0x800839C0
    // 0x8080129C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bsrest_entrypoint_15(rdram, ctx);
        goto after_2;
    // 0x8080129C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808012A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808012A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808012A8: jr          $ra
    // 0x808012AC: nop

    return;
    // 0x808012AC: nop

;}
RECOMP_FUNC void bsledge_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808012B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808012B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808012BC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x808012C0: jal         0x800839E0
    // 0x808012C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bsrest_entrypoint_19(rdram, ctx);
        goto after_0;
    // 0x808012C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808012C8: beq         $v0, $zero, L_808012D4
    if (ctx->r2 == 0) {
        // 0x808012CC: lw          $a2, 0x1C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X1C);
            goto L_808012D4;
    }
    // 0x808012CC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x808012D0: addiu       $a2, $zero, 0xA6
    ctx->r6 = ADD32(0, 0XA6);
L_808012D4:
    // 0x808012D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808012D8: jal         0x8009E5C8
    // 0x808012DC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_1;
    // 0x808012DC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_1:
    // 0x808012E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808012E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808012E8: jr          $ra
    // 0x808012EC: nop

    return;
    // 0x808012EC: nop

;}
RECOMP_FUNC void bsledge_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012F0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808012F4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(132, 0X13A8) << 16);
    // 0x808012F8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808012FC: jr          $ra
    // 0x80801300: lw          $v0, 0x13A8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(132, 0X13A8));
    return;
    // 0x80801300: lw          $v0, 0x13A8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(132, 0X13A8));
    // 0x80801304: nop

    // 0x80801308: nop

    // 0x8080130C: nop

;}
RECOMP_FUNC void func_80800000_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(133, 0X1120) << 16);
    // 0x80800004: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800008: lwc1        $f12, 0x1120($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(133, 0X1120));
    // 0x8080000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800010: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(133, 0X1124) << 16);
    // 0x80800014: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800018: jal         0x800DC178
    // 0x8080001C: lwc1        $f14, 0x1124($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(133, 0X1124));
    func_800DC178(rdram, ctx);
        goto after_0;
    // 0x8080001C: lwc1        $f14, 0x1124($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(133, 0X1124));
    after_0:
    // 0x80800020: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800024: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800028: jal         0x8009DE38
    // 0x8080002C: addiu       $a1, $zero, 0x511
    ctx->r5 = ADD32(0, 0X511);
    func_8009DE38(rdram, ctx);
        goto after_1;
    // 0x8080002C: addiu       $a1, $zero, 0x511
    ctx->r5 = ADD32(0, 0X511);
    after_1:
    // 0x80800030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800038: jr          $ra
    // 0x8080003C: nop

    return;
    // 0x8080003C: nop

;}
RECOMP_FUNC void func_80800040_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800048: jal         0x800DC0C0
    // 0x8080004C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800DC0C0(rdram, ctx);
        goto after_0;
    // 0x8080004C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800050: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800054: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800058: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080005C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800060: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80800064: addiu       $a1, $zero, 0x510
    ctx->r5 = ADD32(0, 0X510);
    // 0x80800068: bc1f        L_80800080
    if (!c1cs) {
        // 0x8080006C: nop
    
            goto L_80800080;
    }
    // 0x8080006C: nop

    // 0x80800070: jal         0x8009DE38
    // 0x80800074: addiu       $a1, $zero, 0x50F
    ctx->r5 = ADD32(0, 0X50F);
    func_8009DE38(rdram, ctx);
        goto after_1;
    // 0x80800074: addiu       $a1, $zero, 0x50F
    ctx->r5 = ADD32(0, 0X50F);
    after_1:
    // 0x80800078: b           L_8080008C
    // 0x8080007C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080008C;
    // 0x8080007C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800080:
    // 0x80800080: jal         0x8009DE38
    // 0x80800084: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_2;
    // 0x80800084: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_2:
    // 0x80800088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080008C:
    // 0x8080008C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800090: jr          $ra
    // 0x80800094: nop

    return;
    // 0x80800094: nop

;}
RECOMP_FUNC void bsmum_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800098: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080009C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000A4: jal         0x8009E6EC
    // 0x808000A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x808000A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808000AC: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x808000B0: bne         $v0, $at, L_80800114
    if (ctx->r2 != ctx->r1) {
        // 0x808000B4: nop
    
            goto L_80800114;
    }
    // 0x808000B4: nop

    // 0x808000B8: jal         0x8009E6F8
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E6F8(rdram, ctx);
        goto after_1;
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808000C0: addiu       $at, $zero, 0xE5
    ctx->r1 = ADD32(0, 0XE5);
    // 0x808000C4: beq         $v0, $at, L_808000E8
    if (ctx->r2 == ctx->r1) {
        // 0x808000C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000E8;
    }
    // 0x808000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000CC: addiu       $at, $zero, 0xE6
    ctx->r1 = ADD32(0, 0XE6);
    // 0x808000D0: beq         $v0, $at, L_808000E8
    if (ctx->r2 == ctx->r1) {
        // 0x808000D4: addiu       $at, $zero, 0xE7
        ctx->r1 = ADD32(0, 0XE7);
            goto L_808000E8;
    }
    // 0x808000D4: addiu       $at, $zero, 0xE7
    ctx->r1 = ADD32(0, 0XE7);
    // 0x808000D8: beq         $v0, $at, L_808000E8
    if (ctx->r2 == ctx->r1) {
        // 0x808000DC: addiu       $at, $zero, 0xF7
        ctx->r1 = ADD32(0, 0XF7);
            goto L_808000E8;
    }
    // 0x808000DC: addiu       $at, $zero, 0xF7
    ctx->r1 = ADD32(0, 0XF7);
    // 0x808000E0: bne         $v0, $at, L_80800104
    if (ctx->r2 != ctx->r1) {
        // 0x808000E4: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80800104;
    }
    // 0x808000E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_808000E8:
    // 0x808000E8: jal         0x8009E5C8
    // 0x808000EC: addiu       $a1, $zero, 0x11E
    ctx->r5 = ADD32(0, 0X11E);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x808000EC: addiu       $a1, $zero, 0x11E
    ctx->r5 = ADD32(0, 0X11E);
    after_2:
    // 0x808000F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F4: jal         0x8009E830
    // 0x808000F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_3;
    // 0x808000F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x808000FC: b           L_80800120
    // 0x80800100: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800120;
    // 0x80800100: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800104:
    // 0x80800104: jal         0x8009E830
    // 0x80800108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E830(rdram, ctx);
        goto after_4;
    // 0x80800108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080010C: b           L_80800120
    // 0x80800110: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800120;
    // 0x80800110: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800114:
    // 0x80800114: jal         0x80099B94
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099B94(rdram, ctx);
        goto after_5;
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080011C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800120:
    // 0x80800120: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800128: jr          $ra
    // 0x8080012C: nop

    return;
    // 0x8080012C: nop

;}
