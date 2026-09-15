#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void recomp_entrypoint(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000400: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x80000404: addiu       $t0, $t0, 0x44E0
    ctx->r8 = ADD32(ctx->r8, 0X44E0);
    // 0x80000408: addiu       $t1, $zero, 0x3F90
    ctx->r9 = ADD32(0, 0X3F90);
L_8000040C:
    // 0x8000040C: addi        $t1, $t1, -0x8
    ctx->r9 = ADD32(ctx->r9, -0X8);
    // 0x80000410: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x80000414: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80000418: bne         $t1, $zero, L_8000040C
    if (ctx->r9 != 0) {
        // 0x8000041C: addi        $t0, $t0, 0x8
        ctx->r8 = ADD32(ctx->r8, 0X8);
            goto L_8000040C;
    }
    // 0x8000041C: addi        $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x80000420: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x80000424: lui         $sp, 0x8000
    ctx->r29 = S32(0X8000 << 16);
    // 0x80000428: addiu       $t2, $t2, 0x450
    ctx->r10 = ADD32(ctx->r10, 0X450);
    // 0x8000042C: jr          $t2
    // 0x80000430: addiu       $sp, $sp, 0x64E0
    ctx->r29 = ADD32(ctx->r29, 0X64E0);
    LOOKUP_FUNC(ctx->r10)(rdram, ctx);
    return;
    // 0x80000430: addiu       $sp, $sp, 0x64E0
    ctx->r29 = ADD32(ctx->r29, 0X64E0);
;}
RECOMP_FUNC void func_80000450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000450: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80000454: lui         $t7, 0x8001
    ctx->r15 = S32(0X8001 << 16);
    // 0x80000458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000045C: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x80000460: addiu       $t7, $t7, 0x2030
    ctx->r15 = ADD32(ctx->r15, 0X2030);
    // 0x80000464: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80000468: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8000046C: jal         0x800016F0
    // 0x80000470: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    boot_osInitialize(rdram, ctx);
        goto after_0;
    // 0x80000470: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_0:
    tooie_probe_slot(rdram, ctx, 10);
    // 0x80000474: lui         $v0, 0x1E3
    ctx->r2 = S32(0X1E3 << 16);
    // 0x80000478: lui         $t8, 0x1E4
    ctx->r24 = S32(0X1E4 << 16);
    // 0x8000047C: addiu       $a1, $v0, -0x64A0
    ctx->r5 = ADD32(ctx->r2, -0X64A0);
    // 0x80000480: addiu       $t8, $t8, 0x2550
    ctx->r24 = ADD32(ctx->r24, 0X2550);
    // 0x80000484: subu        $a3, $t8, $a1
    ctx->r7 = SUB32(ctx->r24, ctx->r5);
    // 0x80000488: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8000048C: jal         0x80001A40
    // 0x80000490: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    boot___osPiRawStartDma(rdram, ctx);
        goto after_1;
    // 0x80000490: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80000494: jal         0x80001B10
    // 0x80000498: nop

    boot_osPiGetStatus(rdram, ctx);
        goto after_2;
    // 0x80000498: nop

    after_2:
    tooie_probe_slot(rdram, ctx, 11);
    // 0x8000049C: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x800004A0: beq         $t9, $zero, L_800004BC
    if (ctx->r25 == 0) {
        // 0x800004A4: nop
    
            goto L_800004BC;
    }
    // 0x800004A4: nop

L_800004A8:
    // 0x800004A8: jal         0x80001B10
    // 0x800004AC: nop

    boot_osPiGetStatus(rdram, ctx);
        goto after_3;
    // 0x800004AC: nop

    after_3:
    // 0x800004B0: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x800004B4: bne         $t0, $zero, L_800004A8
    if (ctx->r8 != 0) {
        // 0x800004B8: nop
    
            goto L_800004A8;
    }
    // 0x800004B8: nop

L_800004BC:
    // 0x800004BC: jal         0x80000540
    // 0x800004C0: nop

    func_80000540(rdram, ctx);
        goto after_4;
    // 0x800004C0: nop

    after_4:
    tooie_probe_slot(rdram, ctx, 12);
    // 0x800004C4: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x800004C8: jal         0x80000560
    // 0x800004CC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80000560(rdram, ctx);
        goto after_5;
    // 0x800004CC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_5:
    tooie_probe_slot(rdram, ctx, 1);
    // 0x800004D0: jal         0x800005EC
    // 0x800004D4: nop

    func_800005EC(rdram, ctx);
        goto after_6;
    // 0x800004D4: nop

    after_6:
    tooie_probe_slot(rdram, ctx, 2);
    // 0x800004D8: lui         $at, 0x8001
    ctx->r1 = S32(0X8001 << 16);
    // 0x800004DC: jal         0x8000060C
    // 0x800004E0: sw          $v0, 0x2000($at)
    MEM_W(0X2000, ctx->r1) = ctx->r2;
    func_8000060C(rdram, ctx);
        goto after_7;
    // 0x800004E0: sw          $v0, 0x2000($at)
    MEM_W(0X2000, ctx->r1) = ctx->r2;
    after_7:
    tooie_probe_slot(rdram, ctx, 3);
    // 0x800004E4: lui         $at, 0x8001
    ctx->r1 = S32(0X8001 << 16);
    // 0x800004E8: sw          $v0, 0x2004($at)
    MEM_W(0X2004, ctx->r1) = ctx->r2;
    tooie_probe_slot(rdram, ctx, 4);
    // 0x800004EC: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x800004F0: jal         0x80000560
    // 0x800004F4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80000560(rdram, ctx);
        goto after_8;
    // 0x800004F4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_8:
    // 0x800004F8: jal         0x800005EC
    // 0x800004FC: nop

    func_800005EC(rdram, ctx);
        goto after_9;
    // 0x800004FC: nop

    after_9:
    // 0x80000500: lui         $at, 0x8001
    ctx->r1 = S32(0X8001 << 16);
    // 0x80000504: jal         0x8000060C
    // 0x80000508: sw          $v0, 0x2008($at)
    MEM_W(0X2008, ctx->r1) = ctx->r2;
    func_8000060C(rdram, ctx);
        goto after_10;
    // 0x80000508: sw          $v0, 0x2008($at)
    MEM_W(0X2008, ctx->r1) = ctx->r2;
    after_10:
    // 0x8000050C: lui         $at, 0x8001
    ctx->r1 = S32(0X8001 << 16);
    // 0x80000510: jal         0x80000670
    // 0x80000514: sw          $v0, 0x200C($at)
    MEM_W(0X200C, ctx->r1) = ctx->r2;
    func_80000670(rdram, ctx);
        goto after_11;
    // 0x80000514: sw          $v0, 0x200C($at)
    MEM_W(0X200C, ctx->r1) = ctx->r2;
    after_11:
    tooie_boot_register_core1(rdram, ctx);
    // 0x80000518: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x8000051C: addiu       $t9, $t9, 0x2030
    ctx->r25 = ADD32(ctx->r25, 0X2030);
    // 0x80000520: jalr        $t9
    // 0x80000524: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x80000524: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_12:
    // 0x80000528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000052C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80000530: jr          $ra
    return;
;}
RECOMP_FUNC void func_80000540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000544: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000548: jal         0x80001590
    // 0x8000054C: nop

    static_1_80001590(rdram, ctx);
        goto after_0;
    // 0x8000054C: nop

    after_0:
    // 0x80000550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000558: jr          $ra
    return;
;}
RECOMP_FUNC void func_80000560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000564: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000568: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8000056C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80000570: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x80000574: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80000578: lui         $a2, 0x8001
    ctx->r6 = S32(0X8001 << 16);
    // 0x8000057C: addiu       $a2, $a2, -0x1800
    ctx->r6 = ADD32(ctx->r6, -0X1800);
    // 0x80000580: jal         0x800006D4
    // 0x80000584: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_800006D4(rdram, ctx);
        goto after_0;
    // 0x80000584: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80000588: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8000058C: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80000590: addiu       $a1, $a1, 0x64F0
    ctx->r5 = ADD32(ctx->r5, 0X64F0);
    // 0x80000594: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80000598: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x8000059C: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x800005A0: addu        $t9, $t7, $v0
    ctx->r25 = ADD32(ctx->r15, ctx->r2);
    // 0x800005A4: andi        $t0, $t9, 0xF
    ctx->r8 = ctx->r25 & 0XF;
    // 0x800005A8: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x800005AC: beq         $t0, $zero, L_800005C4
    if (ctx->r8 == 0) {
        // 0x800005B0: sw          $t9, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r25;
            goto L_800005C4;
    }
    // 0x800005B0: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x800005B4: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x800005B8: addiu       $t2, $t1, 0x10
    ctx->r10 = ADD32(ctx->r9, 0X10);
    // 0x800005BC: b           L_800005C8
    // 0x800005C0: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
        goto L_800005C8;
    // 0x800005C0: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
L_800005C4:
    // 0x800005C4: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
L_800005C8:
    // 0x800005C8: jal         0x800016BC
    // 0x800005CC: nop

    static_1_800016BC(rdram, ctx);
        goto after_1;
    // 0x800005CC: nop

    after_1:
    // 0x800005D0: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x800005D4: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
    // 0x800005D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800005DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800005E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800005E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800005EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800005EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800005F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800005F4: jal         0x800016CC
    // 0x800005F8: nop

    static_1_800016CC(rdram, ctx);
        goto after_0;
    // 0x800005F8: nop

    after_0:
    // 0x800005FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000604: jr          $ra
    return;
;}
RECOMP_FUNC void func_8000060C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000060C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000610: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000614: jal         0x800016DC
    // 0x80000618: nop

    static_1_800016DC(rdram, ctx);
        goto after_0;
    // 0x80000618: nop

    after_0:
    // 0x8000061C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000624: jr          $ra
    return;
;}
RECOMP_FUNC void func_80000670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000670: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x80000674: lui         $t6, 0x1E4
    ctx->r14 = S32(0X1E4 << 16);
    // 0x80000678: lui         $t7, 0x1E9
    ctx->r15 = S32(0X1E9 << 16);
    // 0x8000067C: addiu       $v0, $v0, 0x2010
    ctx->r2 = ADD32(ctx->r2, 0X2010);
    // 0x80000680: addiu       $t6, $t6, 0x2550
    ctx->r14 = ADD32(ctx->r14, 0X2550);
    // 0x80000684: addiu       $t7, $t7, -0x6650
    ctx->r15 = ADD32(ctx->r15, -0X6650);
    // 0x80000688: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000068C: jr          $ra
    // 0x80000690: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    return;
    // 0x80000690: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_800006D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    tooie_probe(rdram, ctx, 1); tooie_dump(rdram, 0x80200000);
    // 0x800006D4: addiu       $sp, $sp, -0xA90
    ctx->r29 = ADD32(ctx->r29, -0XA90);
    // 0x800006D8: sw          $s0, 0xA48($sp)
    MEM_W(0XA48, ctx->r29) = ctx->r16;
    // 0x800006DC: sw          $s1, 0xA4C($sp)
    MEM_W(0XA4C, ctx->r29) = ctx->r17;
    // 0x800006E0: sw          $s2, 0xA50($sp)
    MEM_W(0XA50, ctx->r29) = ctx->r18;
    // 0x800006E4: sw          $s3, 0xA54($sp)
    MEM_W(0XA54, ctx->r29) = ctx->r19;
    // 0x800006E8: sw          $s4, 0xA58($sp)
    MEM_W(0XA58, ctx->r29) = ctx->r20;
    // 0x800006EC: sw          $s5, 0xA5C($sp)
    MEM_W(0XA5C, ctx->r29) = ctx->r21;
    // 0x800006F0: sw          $s6, 0xA60($sp)
    MEM_W(0XA60, ctx->r29) = ctx->r22;
    // 0x800006F4: sw          $s7, 0xA64($sp)
    MEM_W(0XA64, ctx->r29) = ctx->r23;
    // 0x800006F8: sw          $fp, 0xA78($sp)
    MEM_W(0XA78, ctx->r29) = ctx->r30;
    // 0x800006FC: sw          $gp, 0xA7C($sp)
    MEM_W(0XA7C, ctx->r29) = ctx->r28;
    // 0x80000700: sw          $ra, 0xA80($sp)
    MEM_W(0XA80, ctx->r29) = ctx->r31;
    // 0x80000704: sw          $zero, 0xA84($sp)
    MEM_W(0XA84, ctx->r29) = 0;
    // 0x80000708: sw          $zero, 0xA88($sp)
    MEM_W(0XA88, ctx->r29) = 0;
    // 0x8000070C: addiu       $s7, $a0, 0x2
    ctx->r23 = ADD32(ctx->r4, 0X2);
    // 0x80000710: mtc1        $a1, $f16
    ctx->f16.u32l = ctx->r5;
    // 0x80000714: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x80000718: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x8000071C: lui         $t2, 0x7000
    ctx->r10 = S32(0X7000 << 16);
    // 0x80000720: subu        $t0, $a0, $a1
    ctx->r8 = SUB32(ctx->r4, ctx->r5);
    // 0x80000724: bgtzl       $t0, L_8000072C
    if (SIGNED(ctx->r8) > 0) {
        // 0x80000728: or          $t2, $t0, $zero
        ctx->r10 = ctx->r8 | 0;
            goto L_8000072C;
    }
    goto skip_0;
    // 0x80000728: or          $t2, $t0, $zero
    ctx->r10 = ctx->r8 | 0;
    skip_0:
L_8000072C:
    // 0x8000072C: subu        $t0, $a2, $a1
    ctx->r8 = SUB32(ctx->r6, ctx->r5);
    // 0x80000730: bltz        $t0, L_80000744
    if (SIGNED(ctx->r8) < 0) {
        // 0x80000734: slt         $at, $t0, $t2
        ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_80000744;
    }
    // 0x80000734: slt         $at, $t0, $t2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80000738: beq         $at, $zero, L_80000744
    if (ctx->r1 == 0) {
        // 0x8000073C: nop
    
            goto L_80000744;
    }
    // 0x8000073C: nop

    // 0x80000740: or          $t2, $t0, $zero
    ctx->r10 = ctx->r8 | 0;
L_80000744:
    // 0x80000744: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x80000748: jal         0x800007AC
    // 0x8000074C: nop

    boot_inflate(rdram, ctx);
        goto after_0;
    // 0x8000074C: nop

    after_0:
    // 0x80000750: bne         $v0, $zero, L_800007A4
    if (ctx->r2 != 0) {
            // 0x80000754: mfc1        $v0, $f17
    ctx->r2 = (int32_t)ctx->f_odd[(17 - 1) * 2];
    static_1_800007A4(rdram, ctx);
    return;
    }
    // 0x80000754: mfc1        $v0, $f17
    ctx->r2 = (int32_t)ctx->f_odd[(17 - 1) * 2];
    // 0x80000758: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x8000075C: addiu       $t0, $t0, 0x4240
    ctx->r8 = ADD32(ctx->r8, 0X4240);
    // 0x80000760: lw          $t1, 0xA84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA84);
    // 0x80000764: lw          $t2, 0xA88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA88);
    // 0x80000768: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x8000076C: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x80000770: lw          $s0, 0xA48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA48);
    // 0x80000774: lw          $s1, 0xA4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4C);
    // 0x80000778: lw          $s2, 0xA50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA50);
    // 0x8000077C: lw          $s3, 0xA54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XA54);
    // 0x80000780: lw          $s4, 0xA58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA58);
    // 0x80000784: lw          $s5, 0xA5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XA5C);
    // 0x80000788: lw          $s6, 0xA60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA60);
    // 0x8000078C: lw          $s7, 0xA64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XA64);
    // 0x80000790: lw          $fp, 0xA78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA78);
    // 0x80000794: lw          $gp, 0xA7C($sp)
    ctx->r28 = MEM_W(ctx->r29, 0XA7C);
    // 0x80000798: lw          $ra, 0xA80($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA80);
    // 0x8000079C: jr          $ra
    // 0x800007A0: addiu       $sp, $sp, 0xA90
    ctx->r29 = ADD32(ctx->r29, 0XA90);
    return;
    // 0x800007A0: addiu       $sp, $sp, 0xA90
    ctx->r29 = ADD32(ctx->r29, 0XA90);
;}
RECOMP_FUNC void boot_inflate(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    tooie_probe(rdram, ctx, 2);
    // 0x800007AC: sw          $ra, 0xA6C($sp)
    MEM_W(0XA6C, ctx->r29) = ctx->r31;
    // 0x800007B0: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x800007B4: addiu       $gp, $zero, 0x0
    ctx->r28 = ADD32(0, 0X0);
    // 0x800007B8: addiu       $fp, $zero, 0x0
    ctx->r30 = ADD32(0, 0X0);
L_800007BC:
    // 0x800007BC: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x800007C0: jal         0x8000080C
    // 0x800007C4: addiu       $a0, $sp, 0xA70
    ctx->r4 = ADD32(ctx->r29, 0XA70);
    boot_inflate_block(rdram, ctx);
        goto after_0;
    // 0x800007C4: addiu       $a0, $sp, 0xA70
    ctx->r4 = ADD32(ctx->r29, 0XA70);
    after_0:
    tooie_probe_ret(rdram, ctx, 1);
    // 0x800007C8: bne         $v0, $zero, L_80000800
    if (ctx->r2 != 0) {
        // 0x800007CC: lw          $t3, 0xA70($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XA70);
            goto L_80000800;
    }
    // 0x800007CC: lw          $t3, 0xA70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA70);
    // 0x800007D0: beq         $t3, $zero, L_800007BC
    if (ctx->r11 == 0) {
        // 0x800007D4: slti        $at, $fp, 0x8
        ctx->r1 = SIGNED(ctx->r30) < 0X8 ? 1 : 0;
            goto L_800007BC;
    }
    // 0x800007D4: slti        $at, $fp, 0x8
    ctx->r1 = SIGNED(ctx->r30) < 0X8 ? 1 : 0;
    // 0x800007D8: bne         $at, $zero, L_800007F0
    if (ctx->r1 != 0) {
        // 0x800007DC: nop
    
            goto L_800007F0;
    }
    // 0x800007DC: nop

L_800007E0:
    // 0x800007E0: addiu       $fp, $fp, -0x8
    ctx->r30 = ADD32(ctx->r30, -0X8);
    // 0x800007E4: slti        $at, $fp, 0x8
    ctx->r1 = SIGNED(ctx->r30) < 0X8 ? 1 : 0;
    // 0x800007E8: beq         $at, $zero, L_800007E0
    if (ctx->r1 == 0) {
        // 0x800007EC: addiu       $s7, $s7, -0x1
        ctx->r23 = ADD32(ctx->r23, -0X1);
            goto L_800007E0;
    }
    // 0x800007EC: addiu       $s7, $s7, -0x1
    ctx->r23 = ADD32(ctx->r23, -0X1);
L_800007F0:
    // 0x800007F0: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    // 0x800007F4: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x800007F8: addiu       $t3, $t3, 0x6F48
    ctx->r11 = ADD32(ctx->r11, 0X6F48);
    tooie_probe_ret(rdram, ctx, 3);
    // 0x800007FC: sw          $s7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r23;
L_80000800:
    tooie_probe_ret(rdram, ctx, 2);
    // 0x80000800: lw          $ra, 0xA6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA6C);
    // 0x80000804: jr          $ra
    // 0x80000808: nop

    return;
    // 0x80000808: nop

;}
RECOMP_FUNC void boot_inflate_block(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000080C: sw          $ra, 0xA68($sp)
    MEM_W(0XA68, ctx->r29) = ctx->r31;
    // 0x80000810: slti        $at, $fp, 0x3
    ctx->r1 = SIGNED(ctx->r30) < 0X3 ? 1 : 0;
    // 0x80000814: beq         $at, $zero, L_8000083C
    if (ctx->r1 == 0) {
        // 0x80000818: nop
    
            goto L_8000083C;
    }
    // 0x80000818: nop

    // 0x8000081C: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_80000820:
    // 0x80000820: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80000824: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x80000828: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x8000082C: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x80000830: slti        $at, $fp, 0x3
    ctx->r1 = SIGNED(ctx->r30) < 0X3 ? 1 : 0;
    // 0x80000834: bnel        $at, $zero, L_80000820
    if (ctx->r1 != 0) {
        // 0x80000838: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_80000820;
    }
    goto skip_0;
    // 0x80000838: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_0:
L_8000083C:
    // 0x8000083C: andi        $at, $gp, 0x1
    ctx->r1 = ctx->r28 & 0X1;
    // 0x80000840: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x80000844: srl         $t3, $gp, 1
    ctx->r11 = S32(U32(ctx->r28) >> 1);
    // 0x80000848: andi        $t3, $t3, 0x3
    ctx->r11 = ctx->r11 & 0X3;
    // 0x8000084C: srl         $gp, $gp, 3
    ctx->r28 = S32(U32(ctx->r28) >> 3);
    // 0x80000850: addiu       $fp, $fp, -0x3
    ctx->r30 = ADD32(ctx->r30, -0X3);
    // 0x80000854: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80000858: bne         $t3, $at, L_80000870
    if (ctx->r11 != ctx->r1) {
        // 0x8000085C: nop
    
            goto L_80000870;
    }
    // 0x8000085C: nop

    // 0x80000860: jal         0x800008B0
    // 0x80000864: nop

    boot_inflate_dynamic(rdram, ctx);
        goto after_0;
    // 0x80000864: nop

    after_0:
    // 0x80000868: j           L_800008A4
    // 0x8000086C: nop

        goto L_800008A4;
    // 0x8000086C: nop

L_80000870:
    // 0x80000870: bne         $t3, $zero, L_80000888
    if (ctx->r11 != 0) {
        // 0x80000874: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80000888;
    }
    // 0x80000874: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80000878: jal         0x80000CB4
    // 0x8000087C: nop

    boot_inflate_stored(rdram, ctx);
        goto after_1;
    // 0x8000087C: nop

    after_1:
    // 0x80000880: j           L_800008A4
    // 0x80000884: nop

        goto L_800008A4;
    // 0x80000884: nop

L_80000888:
    // 0x80000888: bne         $t3, $at, L_800008A0
    if (ctx->r11 != ctx->r1) {
        // 0x8000088C: nop
    
            goto L_800008A0;
    }
    // 0x8000088C: nop

    // 0x80000890: jal         0x80000DDC
    // 0x80000894: nop

    boot_inflate_fixed(rdram, ctx);
        goto after_2;
    // 0x80000894: nop

    after_2:
    // 0x80000898: j           L_800008A4
    // 0x8000089C: nop

        goto L_800008A4;
    // 0x8000089C: nop

L_800008A0:
    // 0x800008A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800008A4:
    // 0x800008A4: lw          $ra, 0xA68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA68);
    // 0x800008A8: jr          $ra
    // 0x800008AC: nop

    return;
    // 0x800008AC: nop

;}
RECOMP_FUNC void boot_inflate_dynamic(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800008B0: sw          $ra, 0xA44($sp)
    MEM_W(0XA44, ctx->r29) = ctx->r31;
    // 0x800008B4: lui         $t5, 0x8000
    ctx->r13 = S32(0X8000 << 16);
    // 0x800008B8: addiu       $t5, $t5, 0x439C
    ctx->r13 = ADD32(ctx->r13, 0X439C);
    // 0x800008BC: slti        $at, $fp, 0xE
    ctx->r1 = SIGNED(ctx->r30) < 0XE ? 1 : 0;
    // 0x800008C0: beq         $at, $zero, L_800008E8
    if (ctx->r1 == 0) {
        // 0x800008C4: nop
    
            goto L_800008E8;
    }
    // 0x800008C4: nop

    // 0x800008C8: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_800008CC:
    // 0x800008CC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x800008D0: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x800008D4: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x800008D8: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x800008DC: slti        $at, $fp, 0xE
    ctx->r1 = SIGNED(ctx->r30) < 0XE ? 1 : 0;
    // 0x800008E0: bnel        $at, $zero, L_800008CC
    if (ctx->r1 != 0) {
        // 0x800008E4: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_800008CC;
    }
    goto skip_0;
    // 0x800008E4: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_0:
L_800008E8:
    // 0x800008E8: andi        $t2, $gp, 0x1F
    ctx->r10 = ctx->r28 & 0X1F;
    // 0x800008EC: addiu       $t2, $t2, 0x101
    ctx->r10 = ADD32(ctx->r10, 0X101);
    // 0x800008F0: andi        $t3, $gp, 0x3E0
    ctx->r11 = ctx->r28 & 0X3E0;
    // 0x800008F4: srl         $t3, $t3, 5
    ctx->r11 = S32(U32(ctx->r11) >> 5);
    // 0x800008F8: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x800008FC: andi        $t1, $gp, 0x3C00
    ctx->r9 = ctx->r28 & 0X3C00;
    // 0x80000900: srl         $t1, $t1, 10
    ctx->r9 = S32(U32(ctx->r9) >> 10);
    // 0x80000904: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x80000908: srl         $gp, $gp, 14
    ctx->r28 = S32(U32(ctx->r28) >> 14);
    // 0x8000090C: addiu       $fp, $fp, -0xE
    ctx->r30 = ADD32(ctx->r30, -0XE);
    // 0x80000910: slti        $at, $t2, 0x11F
    ctx->r1 = SIGNED(ctx->r10) < 0X11F ? 1 : 0;
    // 0x80000914: beq         $at, $zero, L_80000CA4
    if (ctx->r1 == 0) {
        // 0x80000918: slti        $at, $t3, 0x1F
        ctx->r1 = SIGNED(ctx->r11) < 0X1F ? 1 : 0;
            goto L_80000CA4;
    }
    // 0x80000918: slti        $at, $t3, 0x1F
    ctx->r1 = SIGNED(ctx->r11) < 0X1F ? 1 : 0;
    // 0x8000091C: beq         $at, $zero, L_80000CA4
    if (ctx->r1 == 0) {
        // 0x80000920: addiu       $s1, $zero, 0x0
        ctx->r17 = ADD32(0, 0X0);
            goto L_80000CA4;
    }
    // 0x80000920: addiu       $s1, $zero, 0x0
    ctx->r17 = ADD32(0, 0X0);
L_80000924:
    // 0x80000924: slti        $at, $fp, 0x3
    ctx->r1 = SIGNED(ctx->r30) < 0X3 ? 1 : 0;
    // 0x80000928: beq         $at, $zero, L_80000950
    if (ctx->r1 == 0) {
        // 0x8000092C: nop
    
            goto L_80000950;
    }
    // 0x8000092C: nop

    // 0x80000930: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_80000934:
    // 0x80000934: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80000938: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x8000093C: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x80000940: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x80000944: slti        $at, $fp, 0x3
    ctx->r1 = SIGNED(ctx->r30) < 0X3 ? 1 : 0;
    // 0x80000948: bnel        $at, $zero, L_80000934
    if (ctx->r1 != 0) {
        // 0x8000094C: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_80000934;
    }
    goto skip_1;
    // 0x8000094C: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_1:
L_80000950:
    // 0x80000950: addu        $t8, $t5, $s1
    ctx->r24 = ADD32(ctx->r13, ctx->r17);
    // 0x80000954: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x80000958: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000095C: addu        $t8, $t8, $sp
    ctx->r24 = ADD32(ctx->r24, ctx->r29);
    // 0x80000960: andi        $at, $gp, 0x7
    ctx->r1 = ctx->r28 & 0X7;
    // 0x80000964: sw          $at, 0x548($t8)
    MEM_W(0X548, ctx->r24) = ctx->r1;
    // 0x80000968: srl         $gp, $gp, 3
    ctx->r28 = S32(U32(ctx->r28) >> 3);
    // 0x8000096C: addiu       $fp, $fp, -0x3
    ctx->r30 = ADD32(ctx->r30, -0X3);
    // 0x80000970: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80000974: slt         $at, $s1, $t1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80000978: bne         $at, $zero, L_80000924
    if (ctx->r1 != 0) {
        // 0x8000097C: slti        $at, $s1, 0x13
        ctx->r1 = SIGNED(ctx->r17) < 0X13 ? 1 : 0;
            goto L_80000924;
    }
    // 0x8000097C: slti        $at, $s1, 0x13
    ctx->r1 = SIGNED(ctx->r17) < 0X13 ? 1 : 0;
    // 0x80000980: beq         $at, $zero, L_800009A4
    if (ctx->r1 == 0) {
        // 0x80000984: addu        $t8, $t5, $s1
        ctx->r24 = ADD32(ctx->r13, ctx->r17);
            goto L_800009A4;
    }
L_80000984:
    // 0x80000984: addu        $t8, $t5, $s1
    ctx->r24 = ADD32(ctx->r13, ctx->r17);
    // 0x80000988: lbu         $t8, 0x0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X0);
    // 0x8000098C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80000990: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80000994: addu        $t8, $t8, $sp
    ctx->r24 = ADD32(ctx->r24, ctx->r29);
    // 0x80000998: sw          $zero, 0x548($t8)
    MEM_W(0X548, ctx->r24) = 0;
    // 0x8000099C: slti        $at, $s1, 0x13
    ctx->r1 = SIGNED(ctx->r17) < 0X13 ? 1 : 0;
    // 0x800009A0: bne         $at, $zero, L_80000984
    if (ctx->r1 != 0) {
        // 0x800009A4: addiu       $t8, $zero, 0x7
        ctx->r24 = ADD32(0, 0X7);
            goto L_80000984;
    }
L_800009A4:
    // 0x800009A4: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x800009A8: sw          $t8, 0xA3C($sp)
    MEM_W(0XA3C, ctx->r29) = ctx->r24;
    // 0x800009AC: mtc1        $t2, $f0
    ctx->f0.u32l = ctx->r10;
    // 0x800009B0: mtc1        $t3, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r11;
    // 0x800009B4: addiu       $a0, $sp, 0x548
    ctx->r4 = ADD32(ctx->r29, 0X548);
    // 0x800009B8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x800009BC: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x800009C0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800009C4: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x800009C8: addiu       $t8, $sp, 0xA38
    ctx->r24 = ADD32(ctx->r29, 0XA38);
    // 0x800009CC: jal         0x80000E1C
    // 0x800009D0: addiu       $t9, $sp, 0xA3C
    ctx->r25 = ADD32(ctx->r29, 0XA3C);
    boot_huft_build(rdram, ctx);
        goto after_0;
    // 0x800009D0: addiu       $t9, $sp, 0xA3C
    ctx->r25 = ADD32(ctx->r29, 0XA3C);
    after_0:
    // 0x800009D4: mfc1        $t2, $f0
    ctx->r10 = (int32_t)ctx->f0.u32l;
    // 0x800009D8: mfc1        $t3, $f1
    ctx->r11 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x800009DC: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x800009E0: addiu       $t6, $t6, 0x4300
    ctx->r14 = ADD32(ctx->r14, 0X4300);
    // 0x800009E4: lhu         $s5, 0xA38($sp)
    ctx->r21 = MEM_HU(ctx->r29, 0XA38);
    // 0x800009E8: lw          $t0, 0xA3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA3C);
    // 0x800009EC: addu        $s4, $t2, $t3
    ctx->r20 = ADD32(ctx->r10, ctx->r11);
    // 0x800009F0: sll         $s3, $t0, 1
    ctx->r19 = S32(ctx->r8 << 1);
    // 0x800009F4: addu        $s3, $s3, $t6
    ctx->r19 = ADD32(ctx->r19, ctx->r14);
    // 0x800009F8: addiu       $t9, $zero, 0x0
    ctx->r25 = ADD32(0, 0X0);
    // 0x800009FC: addiu       $s2, $zero, 0x0
    ctx->r18 = ADD32(0, 0X0);
    // 0x80000A00: slt         $at, $t9, $s4
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x80000A04: beq         $at, $zero, L_80000BE8
    if (ctx->r1 == 0) {
        // 0x80000A08: lhu         $s3, 0x0($s3)
        ctx->r19 = MEM_HU(ctx->r19, 0X0);
            goto L_80000BE8;
    }
    // 0x80000A08: lhu         $s3, 0x0($s3)
    ctx->r19 = MEM_HU(ctx->r19, 0X0);
L_80000A0C:
    // 0x80000A0C: slt         $at, $fp, $t0
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80000A10: beq         $at, $zero, L_80000A38
    if (ctx->r1 == 0) {
        // 0x80000A14: nop
    
            goto L_80000A38;
    }
    // 0x80000A14: nop

    // 0x80000A18: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_80000A1C:
    // 0x80000A1C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80000A20: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x80000A24: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x80000A28: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x80000A2C: slt         $at, $fp, $t0
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80000A30: bnel        $at, $zero, L_80000A1C
    if (ctx->r1 != 0) {
        // 0x80000A34: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_80000A1C;
    }
    goto skip_2;
    // 0x80000A34: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_2:
L_80000A38:
    // 0x80000A38: and         $s0, $gp, $s3
    ctx->r16 = ctx->r28 & ctx->r19;
    // 0x80000A3C: addu        $s0, $s0, $s5
    ctx->r16 = ADD32(ctx->r16, ctx->r21);
    // 0x80000A40: sll         $s1, $s0, 2
    ctx->r17 = S32(ctx->r16 << 2);
    // 0x80000A44: addu        $s1, $s1, $s6
    ctx->r17 = ADD32(ctx->r17, ctx->r22);
    // 0x80000A48: lbu         $s1, 0x1($s1)
    ctx->r17 = MEM_BU(ctx->r17, 0X1);
    // 0x80000A4C: srlv        $gp, $gp, $s1
    ctx->r28 = S32(U32(ctx->r28) >> (ctx->r17 & 31));
    // 0x80000A50: subu        $fp, $fp, $s1
    ctx->r30 = SUB32(ctx->r30, ctx->r17);
    // 0x80000A54: sll         $s1, $s0, 2
    ctx->r17 = S32(ctx->r16 << 2);
    // 0x80000A58: addu        $s1, $s1, $s6
    ctx->r17 = ADD32(ctx->r17, ctx->r22);
    // 0x80000A5C: lhu         $s1, 0x2($s1)
    ctx->r17 = MEM_HU(ctx->r17, 0X2);
    // 0x80000A60: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x80000A64: beq         $at, $zero, L_80000A84
    if (ctx->r1 == 0) {
        // 0x80000A68: nop
    
            goto L_80000A84;
    }
    // 0x80000A68: nop

    // 0x80000A6C: sll         $s2, $t9, 2
    ctx->r18 = S32(ctx->r25 << 2);
    // 0x80000A70: addu        $s2, $s2, $sp
    ctx->r18 = ADD32(ctx->r18, ctx->r29);
    // 0x80000A74: sw          $s1, 0x548($s2)
    MEM_W(0X548, ctx->r18) = ctx->r17;
    // 0x80000A78: addiu       $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x80000A7C: j           L_80000BDC
    // 0x80000A80: or          $s2, $s1, $zero
    ctx->r18 = ctx->r17 | 0;
        goto L_80000BDC;
    // 0x80000A80: or          $s2, $s1, $zero
    ctx->r18 = ctx->r17 | 0;
L_80000A84:
    // 0x80000A84: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80000A88: bne         $s1, $at, L_80000AFC
    if (ctx->r17 != ctx->r1) {
        // 0x80000A8C: nop
    
            goto L_80000AFC;
    }
    // 0x80000A8C: nop

    // 0x80000A90: slti        $at, $fp, 0x2
    ctx->r1 = SIGNED(ctx->r30) < 0X2 ? 1 : 0;
    // 0x80000A94: beq         $at, $zero, L_80000ABC
    if (ctx->r1 == 0) {
        // 0x80000A98: nop
    
            goto L_80000ABC;
    }
    // 0x80000A98: nop

    // 0x80000A9C: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_80000AA0:
    // 0x80000AA0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80000AA4: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x80000AA8: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x80000AAC: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x80000AB0: slti        $at, $fp, 0x2
    ctx->r1 = SIGNED(ctx->r30) < 0X2 ? 1 : 0;
    // 0x80000AB4: bnel        $at, $zero, L_80000AA0
    if (ctx->r1 != 0) {
        // 0x80000AB8: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_80000AA0;
    }
    goto skip_3;
    // 0x80000AB8: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_3:
L_80000ABC:
    // 0x80000ABC: andi        $s1, $gp, 0x3
    ctx->r17 = ctx->r28 & 0X3;
    // 0x80000AC0: addiu       $s1, $s1, 0x3
    ctx->r17 = ADD32(ctx->r17, 0X3);
    // 0x80000AC4: srl         $gp, $gp, 2
    ctx->r28 = S32(U32(ctx->r28) >> 2);
    // 0x80000AC8: addiu       $fp, $fp, -0x2
    ctx->r30 = ADD32(ctx->r30, -0X2);
    // 0x80000ACC: addu        $t8, $t9, $s1
    ctx->r24 = ADD32(ctx->r25, ctx->r17);
    // 0x80000AD0: slt         $at, $s4, $t8
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80000AD4: bne         $at, $zero, L_80000CA4
    if (ctx->r1 != 0) {
        // 0x80000AD8: sll         $t8, $t9, 2
        ctx->r24 = S32(ctx->r25 << 2);
            goto L_80000CA4;
    }
    // 0x80000AD8: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80000ADC: addu        $t8, $t8, $sp
    ctx->r24 = ADD32(ctx->r24, ctx->r29);
L_80000AE0:
    // 0x80000AE0: sw          $s2, 0x548($t8)
    MEM_W(0X548, ctx->r24) = ctx->r18;
    // 0x80000AE4: addiu       $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x80000AE8: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x80000AEC: bne         $s1, $zero, L_80000AE0
    if (ctx->r17 != 0) {
        // 0x80000AF0: addiu       $t8, $t8, 0x4
        ctx->r24 = ADD32(ctx->r24, 0X4);
            goto L_80000AE0;
    }
    // 0x80000AF0: addiu       $t8, $t8, 0x4
    ctx->r24 = ADD32(ctx->r24, 0X4);
    // 0x80000AF4: j           L_80000BDC
    // 0x80000AF8: nop

        goto L_80000BDC;
    // 0x80000AF8: nop

L_80000AFC:
    // 0x80000AFC: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x80000B00: bne         $s1, $at, L_80000B74
    if (ctx->r17 != ctx->r1) {
        // 0x80000B04: nop
    
            goto L_80000B74;
    }
    // 0x80000B04: nop

    // 0x80000B08: slti        $at, $fp, 0x3
    ctx->r1 = SIGNED(ctx->r30) < 0X3 ? 1 : 0;
    // 0x80000B0C: beq         $at, $zero, L_80000B34
    if (ctx->r1 == 0) {
        // 0x80000B10: nop
    
            goto L_80000B34;
    }
    // 0x80000B10: nop

    // 0x80000B14: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_80000B18:
    // 0x80000B18: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80000B1C: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x80000B20: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x80000B24: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x80000B28: slti        $at, $fp, 0x3
    ctx->r1 = SIGNED(ctx->r30) < 0X3 ? 1 : 0;
    // 0x80000B2C: bnel        $at, $zero, L_80000B18
    if (ctx->r1 != 0) {
        // 0x80000B30: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_80000B18;
    }
    goto skip_4;
    // 0x80000B30: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_4:
L_80000B34:
    // 0x80000B34: andi        $s1, $gp, 0x7
    ctx->r17 = ctx->r28 & 0X7;
    // 0x80000B38: addiu       $s1, $s1, 0x3
    ctx->r17 = ADD32(ctx->r17, 0X3);
    // 0x80000B3C: srl         $gp, $gp, 3
    ctx->r28 = S32(U32(ctx->r28) >> 3);
    // 0x80000B40: addiu       $fp, $fp, -0x3
    ctx->r30 = ADD32(ctx->r30, -0X3);
    // 0x80000B44: addu        $t8, $t9, $s1
    ctx->r24 = ADD32(ctx->r25, ctx->r17);
    // 0x80000B48: slt         $at, $s4, $t8
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80000B4C: bne         $at, $zero, L_80000CA4
    if (ctx->r1 != 0) {
        // 0x80000B50: sll         $t8, $t9, 2
        ctx->r24 = S32(ctx->r25 << 2);
            goto L_80000CA4;
    }
    // 0x80000B50: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80000B54: addu        $t8, $t8, $sp
    ctx->r24 = ADD32(ctx->r24, ctx->r29);
L_80000B58:
    // 0x80000B58: sw          $zero, 0x548($t8)
    MEM_W(0X548, ctx->r24) = 0;
    // 0x80000B5C: addiu       $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x80000B60: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x80000B64: bne         $s1, $zero, L_80000B58
    if (ctx->r17 != 0) {
        // 0x80000B68: addiu       $t8, $t8, 0x4
        ctx->r24 = ADD32(ctx->r24, 0X4);
            goto L_80000B58;
    }
    // 0x80000B68: addiu       $t8, $t8, 0x4
    ctx->r24 = ADD32(ctx->r24, 0X4);
    // 0x80000B6C: j           L_80000BDC
    // 0x80000B70: addiu       $s2, $zero, 0x0
    ctx->r18 = ADD32(0, 0X0);
        goto L_80000BDC;
    // 0x80000B70: addiu       $s2, $zero, 0x0
    ctx->r18 = ADD32(0, 0X0);
L_80000B74:
    // 0x80000B74: slti        $at, $fp, 0x7
    ctx->r1 = SIGNED(ctx->r30) < 0X7 ? 1 : 0;
    // 0x80000B78: beq         $at, $zero, L_80000BA0
    if (ctx->r1 == 0) {
        // 0x80000B7C: nop
    
            goto L_80000BA0;
    }
    // 0x80000B7C: nop

    // 0x80000B80: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_80000B84:
    // 0x80000B84: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80000B88: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x80000B8C: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x80000B90: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x80000B94: slti        $at, $fp, 0x7
    ctx->r1 = SIGNED(ctx->r30) < 0X7 ? 1 : 0;
    // 0x80000B98: bnel        $at, $zero, L_80000B84
    if (ctx->r1 != 0) {
        // 0x80000B9C: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_80000B84;
    }
    goto skip_5;
    // 0x80000B9C: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_5:
L_80000BA0:
    // 0x80000BA0: andi        $s1, $gp, 0x7F
    ctx->r17 = ctx->r28 & 0X7F;
    // 0x80000BA4: addiu       $s1, $s1, 0xB
    ctx->r17 = ADD32(ctx->r17, 0XB);
    // 0x80000BA8: srl         $gp, $gp, 7
    ctx->r28 = S32(U32(ctx->r28) >> 7);
    // 0x80000BAC: addiu       $fp, $fp, -0x7
    ctx->r30 = ADD32(ctx->r30, -0X7);
    // 0x80000BB0: addu        $t8, $t9, $s1
    ctx->r24 = ADD32(ctx->r25, ctx->r17);
    // 0x80000BB4: slt         $at, $s4, $t8
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80000BB8: bne         $at, $zero, L_80000CA4
    if (ctx->r1 != 0) {
        // 0x80000BBC: sll         $t8, $t9, 2
        ctx->r24 = S32(ctx->r25 << 2);
            goto L_80000CA4;
    }
    // 0x80000BBC: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80000BC0: addu        $t8, $t8, $sp
    ctx->r24 = ADD32(ctx->r24, ctx->r29);
L_80000BC4:
    // 0x80000BC4: sw          $zero, 0x548($t8)
    MEM_W(0X548, ctx->r24) = 0;
    // 0x80000BC8: addiu       $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x80000BCC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x80000BD0: bne         $s1, $zero, L_80000BC4
    if (ctx->r17 != 0) {
        // 0x80000BD4: addiu       $t8, $t8, 0x4
        ctx->r24 = ADD32(ctx->r24, 0X4);
            goto L_80000BC4;
    }
    // 0x80000BD4: addiu       $t8, $t8, 0x4
    ctx->r24 = ADD32(ctx->r24, 0X4);
    // 0x80000BD8: addiu       $s2, $zero, 0x0
    ctx->r18 = ADD32(0, 0X0);
L_80000BDC:
    // 0x80000BDC: slt         $at, $t9, $s4
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x80000BE0: bne         $at, $zero, L_80000A0C
    if (ctx->r1 != 0) {
        // 0x80000BE4: nop
    
            goto L_80000A0C;
    }
    // 0x80000BE4: nop

L_80000BE8:
    // 0x80000BE8: sh          $s5, 0xA38($sp)
    MEM_H(0XA38, ctx->r29) = ctx->r21;
    // 0x80000BEC: sh          $s0, 0xA3A($sp)
    MEM_H(0XA3A, ctx->r29) = ctx->r16;
    // 0x80000BF0: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x80000BF4: sw          $t8, 0xA3C($sp)
    MEM_W(0XA3C, ctx->r29) = ctx->r24;
    // 0x80000BF8: mtc1        $t2, $f0
    ctx->f0.u32l = ctx->r10;
    // 0x80000BFC: mtc1        $t3, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r11;
    // 0x80000C00: addiu       $a0, $sp, 0x548
    ctx->r4 = ADD32(ctx->r29, 0X548);
    // 0x80000C04: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x80000C08: addiu       $a2, $zero, 0x101
    ctx->r6 = ADD32(0, 0X101);
    // 0x80000C0C: lui         $a3, 0x8000
    ctx->r7 = S32(0X8000 << 16);
    // 0x80000C10: addiu       $a3, $a3, 0x4322
    ctx->r7 = ADD32(ctx->r7, 0X4322);
    // 0x80000C14: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x80000C18: addiu       $t7, $t7, 0x43AF
    ctx->r15 = ADD32(ctx->r15, 0X43AF);
    // 0x80000C1C: addiu       $t8, $sp, 0xA38
    ctx->r24 = ADD32(ctx->r29, 0XA38);
    // 0x80000C20: jal         0x80000E1C
    // 0x80000C24: addiu       $t9, $sp, 0xA3C
    ctx->r25 = ADD32(ctx->r29, 0XA3C);
    boot_huft_build(rdram, ctx);
        goto after_1;
    // 0x80000C24: addiu       $t9, $sp, 0xA3C
    ctx->r25 = ADD32(ctx->r29, 0XA3C);
    after_1:
    // 0x80000C28: mfc1        $t2, $f0
    ctx->r10 = (int32_t)ctx->f0.u32l;
    // 0x80000C2C: mfc1        $t3, $f1
    ctx->r11 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x80000C30: bne         $v0, $zero, L_80000CA4
    if (ctx->r2 != 0) {
        // 0x80000C34: addiu       $t8, $zero, 0x6
        ctx->r24 = ADD32(0, 0X6);
            goto L_80000CA4;
    }
    // 0x80000C34: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x80000C38: sw          $t8, 0xA40($sp)
    MEM_W(0XA40, ctx->r29) = ctx->r24;
    // 0x80000C3C: sll         $a0, $t2, 2
    ctx->r4 = S32(ctx->r10 << 2);
    // 0x80000C40: addu        $a0, $a0, $sp
    ctx->r4 = ADD32(ctx->r4, ctx->r29);
    // 0x80000C44: addiu       $a0, $a0, 0x548
    ctx->r4 = ADD32(ctx->r4, 0X548);
    // 0x80000C48: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x80000C4C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80000C50: lui         $a3, 0x8000
    ctx->r7 = S32(0X8000 << 16);
    // 0x80000C54: addiu       $a3, $a3, 0x4360
    ctx->r7 = ADD32(ctx->r7, 0X4360);
    // 0x80000C58: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x80000C5C: addiu       $t7, $t7, 0x43CE
    ctx->r15 = ADD32(ctx->r15, 0X43CE);
    // 0x80000C60: addiu       $t8, $sp, 0xA3A
    ctx->r24 = ADD32(ctx->r29, 0XA3A);
    // 0x80000C64: jal         0x80000E1C
    // 0x80000C68: addiu       $t9, $sp, 0xA40
    ctx->r25 = ADD32(ctx->r29, 0XA40);
    boot_huft_build(rdram, ctx);
        goto after_2;
    // 0x80000C68: addiu       $t9, $sp, 0xA40
    ctx->r25 = ADD32(ctx->r29, 0XA40);
    after_2:
    // 0x80000C6C: bne         $v0, $zero, L_80000CA4
    if (ctx->r2 != 0) {
        // 0x80000C70: lhu         $a0, 0xA38($sp)
        ctx->r4 = MEM_HU(ctx->r29, 0XA38);
            goto L_80000CA4;
    }
    // 0x80000C70: lhu         $a0, 0xA38($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XA38);
    // 0x80000C74: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80000C78: addu        $a0, $a0, $s6
    ctx->r4 = ADD32(ctx->r4, ctx->r22);
    // 0x80000C7C: lhu         $a1, 0xA3A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XA3A);
    // 0x80000C80: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80000C84: addu        $a1, $a1, $s6
    ctx->r5 = ADD32(ctx->r5, ctx->r22);
    // 0x80000C88: lw          $a2, 0xA3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA3C);
    // 0x80000C8C: jal         0x800012B0
    // 0x80000C90: lw          $a3, 0xA40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA40);
    boot_inflate_codes(rdram, ctx);
        goto after_3;
    // 0x80000C90: lw          $a3, 0xA40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA40);
    after_3:
    // 0x80000C94: bne         $v0, $zero, L_80000CA4
    if (ctx->r2 != 0) {
        // 0x80000C98: nop
    
            goto L_80000CA4;
    }
    // 0x80000C98: nop

    // 0x80000C9C: j           L_80000CA8
    // 0x80000CA0: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
        goto L_80000CA8;
    // 0x80000CA0: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
L_80000CA4:
    // 0x80000CA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80000CA8:
    // 0x80000CA8: lw          $ra, 0xA44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA44);
    // 0x80000CAC: jr          $ra
    // 0x80000CB0: nop

    return;
    // 0x80000CB0: nop

;}
RECOMP_FUNC void boot_inflate_stored(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000CB4: mfc1        $t2, $f17
    ctx->r10 = (int32_t)ctx->f_odd[(17 - 1) * 2];
    // 0x80000CB8: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x80000CBC: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x80000CC0: andi        $t3, $fp, 0x7
    ctx->r11 = ctx->r30 & 0X7;
    // 0x80000CC4: srlv        $gp, $gp, $t3
    ctx->r28 = S32(U32(ctx->r28) >> (ctx->r11 & 31));
    // 0x80000CC8: subu        $fp, $fp, $t3
    ctx->r30 = SUB32(ctx->r30, ctx->r11);
    // 0x80000CCC: slti        $at, $fp, 0x10
    ctx->r1 = SIGNED(ctx->r30) < 0X10 ? 1 : 0;
    // 0x80000CD0: beq         $at, $zero, L_80000CF8
    if (ctx->r1 == 0) {
        // 0x80000CD4: nop
    
            goto L_80000CF8;
    }
    // 0x80000CD4: nop

    // 0x80000CD8: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_80000CDC:
    // 0x80000CDC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80000CE0: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x80000CE4: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x80000CE8: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x80000CEC: slti        $at, $fp, 0x10
    ctx->r1 = SIGNED(ctx->r30) < 0X10 ? 1 : 0;
    // 0x80000CF0: bnel        $at, $zero, L_80000CDC
    if (ctx->r1 != 0) {
        // 0x80000CF4: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_80000CDC;
    }
    goto skip_0;
    // 0x80000CF4: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_0:
L_80000CF8:
    // 0x80000CF8: andi        $t3, $gp, 0xFFFF
    ctx->r11 = ctx->r28 & 0XFFFF;
    // 0x80000CFC: srl         $gp, $gp, 16
    ctx->r28 = S32(U32(ctx->r28) >> 16);
    // 0x80000D00: addiu       $fp, $fp, -0x10
    ctx->r30 = ADD32(ctx->r30, -0X10);
    // 0x80000D04: slti        $at, $fp, 0x10
    ctx->r1 = SIGNED(ctx->r30) < 0X10 ? 1 : 0;
    // 0x80000D08: beq         $at, $zero, L_80000D30
    if (ctx->r1 == 0) {
        // 0x80000D0C: nop
    
            goto L_80000D30;
    }
    // 0x80000D0C: nop

    // 0x80000D10: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_80000D14:
    // 0x80000D14: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80000D18: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x80000D1C: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x80000D20: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x80000D24: slti        $at, $fp, 0x10
    ctx->r1 = SIGNED(ctx->r30) < 0X10 ? 1 : 0;
    // 0x80000D28: bnel        $at, $zero, L_80000D14
    if (ctx->r1 != 0) {
        // 0x80000D2C: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_80000D14;
    }
    goto skip_1;
    // 0x80000D2C: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_1:
L_80000D30:
    // 0x80000D30: nor         $t5, $gp, $zero
    ctx->r13 = ~(ctx->r28 | 0);
    // 0x80000D34: andi        $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 & 0XFFFF;
    // 0x80000D38: bne         $t3, $t5, L_80000DD4
    if (ctx->r11 != ctx->r13) {
        // 0x80000D3C: srl         $gp, $gp, 16
        ctx->r28 = S32(U32(ctx->r28) >> 16);
            goto L_80000DD4;
    }
    // 0x80000D3C: srl         $gp, $gp, 16
    ctx->r28 = S32(U32(ctx->r28) >> 16);
    // 0x80000D40: addiu       $fp, $fp, -0x10
    ctx->r30 = ADD32(ctx->r30, -0X10);
    // 0x80000D44: addu        $t5, $t2, $t3
    ctx->r13 = ADD32(ctx->r10, ctx->r11);
    // 0x80000D48: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80000D4C: beq         $at, $zero, L_80000DD4
    if (ctx->r1 == 0) {
        // 0x80000D50: addu        $t5, $t7, $t2
        ctx->r13 = ADD32(ctx->r15, ctx->r10);
            goto L_80000DD4;
    }
    // 0x80000D50: addu        $t5, $t7, $t2
    ctx->r13 = ADD32(ctx->r15, ctx->r10);
    // 0x80000D54: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80000D58: beq         $t3, $zero, L_80000DC8
    if (ctx->r11 == 0) {
        // 0x80000D5C: addiu       $t3, $t3, -0x1
        ctx->r11 = ADD32(ctx->r11, -0X1);
            goto L_80000DC8;
    }
    // 0x80000D5C: addiu       $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
L_80000D60:
    // 0x80000D60: slti        $at, $fp, 0x8
    ctx->r1 = SIGNED(ctx->r30) < 0X8 ? 1 : 0;
    // 0x80000D64: beq         $at, $zero, L_80000D8C
    if (ctx->r1 == 0) {
        // 0x80000D68: nop
    
            goto L_80000D8C;
    }
    // 0x80000D68: nop

    // 0x80000D6C: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_80000D70:
    // 0x80000D70: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80000D74: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x80000D78: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x80000D7C: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x80000D80: slti        $at, $fp, 0x8
    ctx->r1 = SIGNED(ctx->r30) < 0X8 ? 1 : 0;
    // 0x80000D84: bnel        $at, $zero, L_80000D70
    if (ctx->r1 != 0) {
        // 0x80000D88: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_80000D70;
    }
    goto skip_2;
    // 0x80000D88: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_2:
L_80000D8C:
    // 0x80000D8C: sb          $gp, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r28;
    // 0x80000D90: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x80000D94: lw          $v0, 0xA84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA84);
    // 0x80000D98: andi        $v1, $gp, 0xFF
    ctx->r3 = ctx->r28 & 0XFF;
    // 0x80000D9C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80000DA0: sw          $v0, 0xA84($sp)
    MEM_W(0XA84, ctx->r29) = ctx->r2;
    // 0x80000DA4: andi        $v0, $v0, 0x17
    ctx->r2 = ctx->r2 & 0X17;
    // 0x80000DA8: sllv        $v1, $v1, $v0
    ctx->r3 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x80000DAC: lw          $v0, 0xA88($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA88);
    // 0x80000DB0: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x80000DB4: sw          $v0, 0xA88($sp)
    MEM_W(0XA88, ctx->r29) = ctx->r2;
    // 0x80000DB8: srl         $gp, $gp, 8
    ctx->r28 = S32(U32(ctx->r28) >> 8);
    // 0x80000DBC: addiu       $fp, $fp, -0x8
    ctx->r30 = ADD32(ctx->r30, -0X8);
    // 0x80000DC0: bne         $t3, $zero, L_80000D60
    if (ctx->r11 != 0) {
        // 0x80000DC4: addiu       $t3, $t3, -0x1
        ctx->r11 = ADD32(ctx->r11, -0X1);
            goto L_80000D60;
    }
    // 0x80000DC4: addiu       $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
L_80000DC8:
    // 0x80000DC8: mtc1        $t2, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r10;
    // 0x80000DCC: jr          $ra
    // 0x80000DD0: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    return;
    // 0x80000DD0: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
L_80000DD4:
    // 0x80000DD4: jr          $ra
    // 0x80000DD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80000DD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void boot_inflate_fixed(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000DDC: sw          $ra, 0xA44($sp)
    MEM_W(0XA44, ctx->r29) = ctx->r31;
    // 0x80000DE0: sw          $s6, 0xA74($sp)
    MEM_W(0XA74, ctx->r29) = ctx->r22;
    // 0x80000DE4: lui         $s6, 0x8000
    ctx->r22 = S32(0X8000 << 16);
    // 0x80000DE8: addiu       $s6, $s6, 0x6500
    ctx->r22 = ADD32(ctx->r22, 0X6500);
    // 0x80000DEC: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x80000DF0: addiu       $a0, $a0, 0x6504
    ctx->r4 = ADD32(ctx->r4, 0X6504);
    // 0x80000DF4: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80000DF8: addiu       $a1, $a1, 0x6EC8
    ctx->r5 = ADD32(ctx->r5, 0X6EC8);
    // 0x80000DFC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80000E00: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x80000E04: jal         0x800012B0
    // 0x80000E08: nop

    boot_inflate_codes(rdram, ctx);
        goto after_0;
    // 0x80000E08: nop

    after_0:
    // 0x80000E0C: lw          $s6, 0xA74($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA74);
    // 0x80000E10: lw          $ra, 0xA44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA44);
    // 0x80000E14: jr          $ra
    // 0x80000E18: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    return;
    // 0x80000E18: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
;}
RECOMP_FUNC void boot_huft_build(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000E1C: beq         $a1, $zero, L_80001298
    if (ctx->r5 == 0) {
        // 0x80000E20: mtc1        $s0, $f2
        ctx->f2.u32l = ctx->r16;
            goto L_80001298;
    }
    // 0x80000E20: mtc1        $s0, $f2
    ctx->f2.u32l = ctx->r16;
    // 0x80000E24: mtc1        $s1, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r17;
    // 0x80000E28: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x80000E2C: mtc1        $s3, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r19;
    // 0x80000E30: mtc1        $s4, $f6
    ctx->f6.u32l = ctx->r20;
    // 0x80000E34: mtc1        $s5, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r21;
    // 0x80000E38: mtc1        $s6, $f8
    ctx->f8.u32l = ctx->r22;
    // 0x80000E3C: mtc1        $s7, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r23;
    // 0x80000E40: mtc1        $fp, $f10
    ctx->f10.u32l = ctx->r30;
    // 0x80000E44: mtc1        $gp, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r28;
    // 0x80000E48: mfc1        $s3, $f19
    ctx->r19 = (int32_t)ctx->f_odd[(19 - 1) * 2];
    // 0x80000E4C: sd          $zero, 0x0($sp)
    SD(0, 0X0, ctx->r29);
    // 0x80000E50: sd          $zero, 0x8($sp)
    SD(0, 0X8, ctx->r29);
    // 0x80000E54: sd          $zero, 0x10($sp)
    SD(0, 0X10, ctx->r29);
    // 0x80000E58: sd          $zero, 0x18($sp)
    SD(0, 0X18, ctx->r29);
    // 0x80000E5C: sd          $zero, 0x20($sp)
    SD(0, 0X20, ctx->r29);
    // 0x80000E60: sd          $zero, 0x28($sp)
    SD(0, 0X28, ctx->r29);
    // 0x80000E64: sd          $zero, 0x30($sp)
    SD(0, 0X30, ctx->r29);
    // 0x80000E68: sd          $zero, 0x38($sp)
    SD(0, 0X38, ctx->r29);
    // 0x80000E6C: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x80000E70: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80000E74: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
L_80000E78:
    // 0x80000E78: lw          $s7, 0x0($t0)
    ctx->r23 = MEM_W(ctx->r8, 0X0);
    // 0x80000E7C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80000E80: sll         $s7, $s7, 2
    ctx->r23 = S32(ctx->r23 << 2);
    // 0x80000E84: addu        $s7, $s7, $sp
    ctx->r23 = ADD32(ctx->r23, ctx->r29);
    // 0x80000E88: lw          $at, 0x0($s7)
    ctx->r1 = MEM_W(ctx->r23, 0X0);
    // 0x80000E8C: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x80000E90: addiu       $at, $at, 0x1
    ctx->r1 = ADD32(ctx->r1, 0X1);
    // 0x80000E94: bne         $t1, $zero, L_80000E78
    if (ctx->r9 != 0) {
        // 0x80000E98: sw          $at, 0x0($s7)
        MEM_W(0X0, ctx->r23) = ctx->r1;
            goto L_80000E78;
    }
    // 0x80000E98: sw          $at, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r1;
    // 0x80000E9C: lw          $s7, 0x0($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X0);
    // 0x80000EA0: beq         $s7, $a1, L_800012A0
    if (ctx->r23 == ctx->r5) {
        // 0x80000EA4: lw          $t2, 0x0($t9)
        ctx->r10 = MEM_W(ctx->r25, 0X0);
            goto L_800012A0;
    }
    // 0x80000EA4: lw          $t2, 0x0($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X0);
    // 0x80000EA8: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x80000EAC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80000EB0: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
L_80000EB4:
    // 0x80000EB4: addu        $s7, $t3, $sp
    ctx->r23 = ADD32(ctx->r11, ctx->r29);
    // 0x80000EB8: lw          $s7, 0x0($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X0);
    // 0x80000EBC: bne         $s7, $zero, L_80000ECC
    if (ctx->r23 != 0) {
        // 0x80000EC0: nop
    
            goto L_80000ECC;
    }
    // 0x80000EC0: nop

    // 0x80000EC4: bne         $t3, $at, L_80000EB4
    if (ctx->r11 != ctx->r1) {
        // 0x80000EC8: addiu       $t3, $t3, 0x4
        ctx->r11 = ADD32(ctx->r11, 0X4);
            goto L_80000EB4;
    }
    // 0x80000EC8: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
L_80000ECC:
    // 0x80000ECC: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80000ED0: beq         $at, $zero, L_80000EDC
    if (ctx->r1 == 0) {
        // 0x80000ED4: or          $t4, $t3, $zero
        ctx->r12 = ctx->r11 | 0;
            goto L_80000EDC;
    }
    // 0x80000ED4: or          $t4, $t3, $zero
    ctx->r12 = ctx->r11 | 0;
    // 0x80000ED8: or          $t2, $t3, $zero
    ctx->r10 = ctx->r11 | 0;
L_80000EDC:
    // 0x80000EDC: addiu       $t1, $zero, 0x40
    ctx->r9 = ADD32(0, 0X40);
L_80000EE0:
    // 0x80000EE0: addu        $s7, $t1, $sp
    ctx->r23 = ADD32(ctx->r9, ctx->r29);
    // 0x80000EE4: lw          $s7, 0x0($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X0);
    // 0x80000EE8: bne         $s7, $zero, L_80000EFC
    if (ctx->r23 != 0) {
        // 0x80000EEC: nop
    
            goto L_80000EFC;
    }
    // 0x80000EEC: nop

    // 0x80000EF0: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
    // 0x80000EF4: bne         $t1, $zero, L_80000EE0
    if (ctx->r9 != 0) {
        // 0x80000EF8: nop
    
            goto L_80000EE0;
    }
    // 0x80000EF8: nop

L_80000EFC:
    // 0x80000EFC: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80000F00: beq         $at, $zero, L_80000F0C
    if (ctx->r1 == 0) {
        // 0x80000F04: or          $t5, $t1, $zero
        ctx->r13 = ctx->r9 | 0;
            goto L_80000F0C;
    }
    // 0x80000F04: or          $t5, $t1, $zero
    ctx->r13 = ctx->r9 | 0;
    // 0x80000F08: or          $t2, $t1, $zero
    ctx->r10 = ctx->r9 | 0;
L_80000F0C:
    // 0x80000F0C: srl         $t2, $t2, 2
    ctx->r10 = S32(U32(ctx->r10) >> 2);
    // 0x80000F10: sw          $t2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r10;
    // 0x80000F14: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80000F18: srl         $s7, $t3, 2
    ctx->r23 = S32(U32(ctx->r11) >> 2);
    // 0x80000F1C: slt         $at, $t3, $t1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80000F20: beq         $at, $zero, L_80000F44
    if (ctx->r1 == 0) {
        // 0x80000F24: sllv        $t9, $t9, $s7
        ctx->r25 = S32(ctx->r25 << (ctx->r23 & 31));
            goto L_80000F44;
    }
    // 0x80000F24: sllv        $t9, $t9, $s7
    ctx->r25 = S32(ctx->r25 << (ctx->r23 & 31));
L_80000F28:
    // 0x80000F28: addu        $s7, $t3, $sp
    ctx->r23 = ADD32(ctx->r11, ctx->r29);
    // 0x80000F2C: lw          $s7, 0x0($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X0);
    // 0x80000F30: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x80000F34: subu        $t9, $t9, $s7
    ctx->r25 = SUB32(ctx->r25, ctx->r23);
    // 0x80000F38: slt         $at, $t3, $t1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80000F3C: bne         $at, $zero, L_80000F28
    if (ctx->r1 != 0) {
        // 0x80000F40: sll         $t9, $t9, 1
        ctx->r25 = S32(ctx->r25 << 1);
            goto L_80000F28;
    }
    // 0x80000F40: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
L_80000F44:
    // 0x80000F44: addu        $s7, $t1, $sp
    ctx->r23 = ADD32(ctx->r9, ctx->r29);
    // 0x80000F48: lw          $at, 0x0($s7)
    ctx->r1 = MEM_W(ctx->r23, 0X0);
    // 0x80000F4C: sw          $t9, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r25;
    // 0x80000F50: subu        $t9, $t9, $at
    ctx->r25 = SUB32(ctx->r25, ctx->r1);
    // 0x80000F54: sw          $zero, 0x508($sp)
    MEM_W(0X508, ctx->r29) = 0;
    // 0x80000F58: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
    // 0x80000F5C: addiu       $t0, $sp, 0x4
    ctx->r8 = ADD32(ctx->r29, 0X4);
    // 0x80000F60: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
    // 0x80000F64: beq         $t1, $zero, L_80000F88
    if (ctx->r9 == 0) {
        // 0x80000F68: addiu       $t6, $sp, 0x50C
        ctx->r14 = ADD32(ctx->r29, 0X50C);
            goto L_80000F88;
    }
    // 0x80000F68: addiu       $t6, $sp, 0x50C
    ctx->r14 = ADD32(ctx->r29, 0X50C);
L_80000F6C:
    // 0x80000F6C: lw          $s7, 0x0($t0)
    ctx->r23 = MEM_W(ctx->r8, 0X0);
    // 0x80000F70: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80000F74: addu        $t3, $t3, $s7
    ctx->r11 = ADD32(ctx->r11, ctx->r23);
    // 0x80000F78: sw          $t3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r11;
    // 0x80000F7C: addiu       $t1, $t1, -0x4
    ctx->r9 = ADD32(ctx->r9, -0X4);
    // 0x80000F80: bne         $t1, $zero, L_80000F6C
    if (ctx->r9 != 0) {
        // 0x80000F84: addiu       $t6, $t6, 0x4
        ctx->r14 = ADD32(ctx->r14, 0X4);
            goto L_80000F6C;
    }
    // 0x80000F84: addiu       $t6, $t6, 0x4
    ctx->r14 = ADD32(ctx->r14, 0X4);
L_80000F88:
    // 0x80000F88: srl         $t5, $t5, 2
    ctx->r13 = S32(U32(ctx->r13) >> 2);
    // 0x80000F8C: srl         $t4, $t4, 2
    ctx->r12 = S32(U32(ctx->r12) >> 2);
    // 0x80000F90: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80000F94: addiu       $t1, $zero, 0x0
    ctx->r9 = ADD32(0, 0X0);
    // 0x80000F98: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
L_80000F9C:
    // 0x80000F9C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80000FA0: beq         $t3, $zero, L_80000FC4
    if (ctx->r11 == 0) {
        // 0x80000FA4: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_80000FC4;
    }
    // 0x80000FA4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80000FA8: addu        $t3, $t3, $sp
    ctx->r11 = ADD32(ctx->r11, ctx->r29);
    // 0x80000FAC: lw          $s7, 0x504($t3)
    ctx->r23 = MEM_W(ctx->r11, 0X504);
    // 0x80000FB0: sll         $fp, $s7, 2
    ctx->r30 = S32(ctx->r23 << 2);
    // 0x80000FB4: addiu       $at, $s7, 0x1
    ctx->r1 = ADD32(ctx->r23, 0X1);
    // 0x80000FB8: sw          $at, 0x504($t3)
    MEM_W(0X504, ctx->r11) = ctx->r1;
    // 0x80000FBC: addu        $fp, $fp, $sp
    ctx->r30 = ADD32(ctx->r30, ctx->r29);
    // 0x80000FC0: sw          $t1, 0x84($fp)
    MEM_W(0X84, ctx->r30) = ctx->r9;
L_80000FC4:
    // 0x80000FC4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80000FC8: slt         $at, $t1, $a1
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80000FCC: bnel        $at, $zero, L_80000F9C
    if (ctx->r1 != 0) {
        // 0x80000FD0: lw          $t3, 0x0($t0)
        ctx->r11 = MEM_W(ctx->r8, 0X0);
            goto L_80000F9C;
    }
    goto skip_0;
    // 0x80000FD0: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    skip_0:
    // 0x80000FD4: sw          $zero, 0x504($sp)
    MEM_W(0X504, ctx->r29) = 0;
    // 0x80000FD8: addiu       $t1, $zero, 0x0
    ctx->r9 = ADD32(0, 0X0);
    // 0x80000FDC: addiu       $t0, $sp, 0x84
    ctx->r8 = ADD32(ctx->r29, 0X84);
    // 0x80000FE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80000FE4: negu        $s1, $t2
    ctx->r17 = SUB32(0, ctx->r10);
    // 0x80000FE8: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x80000FEC: j           L_80001224
    // 0x80000FF0: addiu       $s0, $zero, 0x0
    ctx->r16 = ADD32(0, 0X0);
        goto L_80001224;
    // 0x80000FF0: addiu       $s0, $zero, 0x0
    ctx->r16 = ADD32(0, 0X0);
    // 0x80000FF4: addu        $s1, $s1, $t2
    ctx->r17 = ADD32(ctx->r17, ctx->r10);
L_80000FF8:
    // 0x80000FF8: subu        $s0, $t5, $s1
    ctx->r16 = SUB32(ctx->r13, ctx->r17);
    // 0x80000FFC: slt         $at, $t2, $s0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80001000: beq         $at, $zero, L_8000100C
    if (ctx->r1 == 0) {
        // 0x80001004: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8000100C;
    }
    // 0x80001004: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80001008: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
L_8000100C:
    // 0x8000100C: subu        $t3, $t4, $s1
    ctx->r11 = SUB32(ctx->r12, ctx->r17);
    // 0x80001010: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80001014: sllv        $s2, $s2, $t3
    ctx->r18 = S32(ctx->r18 << (ctx->r11 & 31));
    // 0x80001018: addiu       $s7, $a0, 0x1
    ctx->r23 = ADD32(ctx->r4, 0X1);
    // 0x8000101C: slt         $at, $s7, $s2
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80001020: beq         $at, $zero, L_8000106C
    if (ctx->r1 == 0) {
        // 0x80001024: nop
    
            goto L_8000106C;
    }
    // 0x80001024: nop

    // 0x80001028: subu        $s2, $s2, $s7
    ctx->r18 = SUB32(ctx->r18, ctx->r23);
    // 0x8000102C: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80001030: addu        $t6, $t6, $sp
    ctx->r14 = ADD32(ctx->r14, ctx->r29);
    // 0x80001034: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80001038: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x8000103C: slt         $at, $t3, $s0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80001040: beq         $at, $zero, L_8000106C
    if (ctx->r1 == 0) {
        // 0x80001044: nop
    
            goto L_8000106C;
    }
    // 0x80001044: nop

L_80001048:
    // 0x80001048: lw          $s7, 0x4($t6)
    ctx->r23 = MEM_W(ctx->r14, 0X4);
    // 0x8000104C: sll         $s2, $s2, 1
    ctx->r18 = S32(ctx->r18 << 1);
    // 0x80001050: slt         $at, $s7, $s2
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80001054: beq         $at, $zero, L_8000106C
    if (ctx->r1 == 0) {
        // 0x80001058: addiu       $t6, $t6, 0x4
        ctx->r14 = ADD32(ctx->r14, 0X4);
            goto L_8000106C;
    }
    // 0x80001058: addiu       $t6, $t6, 0x4
    ctx->r14 = ADD32(ctx->r14, 0X4);
    // 0x8000105C: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80001060: slt         $at, $t3, $s0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80001064: bne         $at, $zero, L_80001048
    if (ctx->r1 != 0) {
        // 0x80001068: subu        $s2, $s2, $s7
        ctx->r18 = SUB32(ctx->r18, ctx->r23);
            goto L_80001048;
    }
    // 0x80001068: subu        $s2, $s2, $s7
    ctx->r18 = SUB32(ctx->r18, ctx->r23);
L_8000106C:
    // 0x8000106C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80001070: sllv        $s0, $s0, $t3
    ctx->r16 = S32(ctx->r16 << (ctx->r11 & 31));
    // 0x80001074: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x80001078: addu        $t6, $t6, $s6
    ctx->r14 = ADD32(ctx->r14, ctx->r22);
    // 0x8000107C: addiu       $s7, $s3, 0x1
    ctx->r23 = ADD32(ctx->r19, 0X1);
    // 0x80001080: sh          $s7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r23;
    // 0x80001084: addiu       $t8, $t6, 0x2
    ctx->r24 = ADD32(ctx->r14, 0X2);
    // 0x80001088: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    // 0x8000108C: addiu       $t6, $t6, 0x4
    ctx->r14 = ADD32(ctx->r14, 0X4);
    // 0x80001090: sll         $s7, $v0, 2
    ctx->r23 = S32(ctx->r2 << 2);
    // 0x80001094: addu        $s7, $s7, $sp
    ctx->r23 = ADD32(ctx->r23, ctx->r29);
    // 0x80001098: beq         $v0, $zero, L_800010E4
    if (ctx->r2 == 0) {
        // 0x8000109C: sw          $t6, 0x44($s7)
        MEM_W(0X44, ctx->r23) = ctx->r14;
            goto L_800010E4;
    }
    // 0x8000109C: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
    // 0x800010A0: sll         $s7, $v0, 2
    ctx->r23 = S32(ctx->r2 << 2);
    // 0x800010A4: addu        $s7, $s7, $sp
    ctx->r23 = ADD32(ctx->r23, ctx->r29);
    // 0x800010A8: sw          $t1, 0x504($s7)
    MEM_W(0X504, ctx->r23) = ctx->r9;
    // 0x800010AC: or          $s5, $t2, $zero
    ctx->r21 = ctx->r10 | 0;
    // 0x800010B0: addiu       $s4, $t3, 0x10
    ctx->r20 = ADD32(ctx->r11, 0X10);
    // 0x800010B4: addiu       $gp, $s3, 0x1
    ctx->r28 = ADD32(ctx->r19, 0X1);
    // 0x800010B8: subu        $t3, $s1, $t2
    ctx->r11 = SUB32(ctx->r17, ctx->r10);
    // 0x800010BC: srlv        $t3, $t1, $t3
    ctx->r11 = S32(U32(ctx->r9) >> (ctx->r11 & 31));
    // 0x800010C0: addiu       $s7, $v0, -0x1
    ctx->r23 = ADD32(ctx->r2, -0X1);
    // 0x800010C4: sll         $s7, $s7, 2
    ctx->r23 = S32(ctx->r23 << 2);
    // 0x800010C8: addu        $s7, $s7, $sp
    ctx->r23 = ADD32(ctx->r23, ctx->r29);
    // 0x800010CC: lw          $s7, 0x44($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X44);
    // 0x800010D0: sll         $at, $t3, 2
    ctx->r1 = S32(ctx->r11 << 2);
    // 0x800010D4: addu        $s7, $s7, $at
    ctx->r23 = ADD32(ctx->r23, ctx->r1);
    // 0x800010D8: sb          $s4, 0x0($s7)
    MEM_B(0X0, ctx->r23) = ctx->r20;
    // 0x800010DC: sb          $s5, 0x1($s7)
    MEM_B(0X1, ctx->r23) = ctx->r21;
    // 0x800010E0: sh          $gp, 0x2($s7)
    MEM_H(0X2, ctx->r23) = ctx->r28;
L_800010E4:
    // 0x800010E4: addu        $s3, $s3, $s0
    ctx->r19 = ADD32(ctx->r19, ctx->r16);
    // 0x800010E8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_800010EC:
    // 0x800010EC: addu        $s7, $s1, $t2
    ctx->r23 = ADD32(ctx->r17, ctx->r10);
L_800010F0:
    // 0x800010F0: slt         $at, $s7, $t4
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x800010F4: bnel        $at, $zero, L_80000FF8
    if (ctx->r1 != 0) {
        // 0x800010F8: addu        $s1, $s1, $t2
        ctx->r17 = ADD32(ctx->r17, ctx->r10);
            goto L_80000FF8;
    }
    goto skip_1;
    // 0x800010F8: addu        $s1, $s1, $t2
    ctx->r17 = ADD32(ctx->r17, ctx->r10);
    skip_1:
    // 0x800010FC: subu        $s5, $t4, $s1
    ctx->r21 = SUB32(ctx->r12, ctx->r17);
    // 0x80001100: sll         $s7, $a1, 2
    ctx->r23 = S32(ctx->r5 << 2);
    // 0x80001104: addu        $s7, $s7, $sp
    ctx->r23 = ADD32(ctx->r23, ctx->r29);
    // 0x80001108: addiu       $s7, $s7, 0x84
    ctx->r23 = ADD32(ctx->r23, 0X84);
    // 0x8000110C: slt         $at, $t0, $s7
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x80001110: bne         $at, $zero, L_80001120
    if (ctx->r1 != 0) {
        // 0x80001114: addiu       $s4, $zero, 0x63
        ctx->r20 = ADD32(0, 0X63);
            goto L_80001120;
    }
    // 0x80001114: addiu       $s4, $zero, 0x63
    ctx->r20 = ADD32(0, 0X63);
    // 0x80001118: j           L_8000116C
    // 0x8000111C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_8000116C;
    // 0x8000111C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_80001120:
    // 0x80001120: lw          $s7, 0x0($t0)
    ctx->r23 = MEM_W(ctx->r8, 0X0);
    // 0x80001124: slt         $at, $s7, $a2
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80001128: beq         $at, $zero, L_8000114C
    if (ctx->r1 == 0) {
        // 0x8000112C: nop
    
            goto L_8000114C;
    }
    // 0x8000112C: nop

    // 0x80001130: or          $gp, $s7, $zero
    ctx->r28 = ctx->r23 | 0;
    // 0x80001134: slti        $at, $s7, 0x100
    ctx->r1 = SIGNED(ctx->r23) < 0X100 ? 1 : 0;
    // 0x80001138: bnel        $at, $zero, L_80001144
    if (ctx->r1 != 0) {
        // 0x8000113C: addiu       $s4, $zero, 0x10
        ctx->r20 = ADD32(0, 0X10);
            goto L_80001144;
    }
    goto skip_2;
    // 0x8000113C: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    skip_2:
    // 0x80001140: addiu       $s4, $zero, 0xF
    ctx->r20 = ADD32(0, 0XF);
L_80001144:
    // 0x80001144: j           L_80001168
    // 0x80001148: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
        goto L_80001168;
    // 0x80001148: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
L_8000114C:
    // 0x8000114C: subu        $s7, $s7, $a2
    ctx->r23 = SUB32(ctx->r23, ctx->r6);
    // 0x80001150: addu        $s4, $s7, $t7
    ctx->r20 = ADD32(ctx->r23, ctx->r15);
    // 0x80001154: lbu         $s4, 0x0($s4)
    ctx->r20 = MEM_BU(ctx->r20, 0X0);
    // 0x80001158: sll         $s7, $s7, 1
    ctx->r23 = S32(ctx->r23 << 1);
    // 0x8000115C: addu        $s7, $s7, $a3
    ctx->r23 = ADD32(ctx->r23, ctx->r7);
    // 0x80001160: lhu         $gp, 0x0($s7)
    ctx->r28 = MEM_HU(ctx->r23, 0X0);
    // 0x80001164: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
L_80001168:
    // 0x80001168: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_8000116C:
    // 0x8000116C: subu        $s7, $t4, $s1
    ctx->r23 = SUB32(ctx->r12, ctx->r17);
    // 0x80001170: sllv        $s2, $s2, $s7
    ctx->r18 = S32(ctx->r18 << (ctx->r23 & 31));
    // 0x80001174: srlv        $t3, $t1, $s1
    ctx->r11 = S32(U32(ctx->r9) >> (ctx->r17 & 31));
    // 0x80001178: slt         $at, $t3, $s0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8000117C: beq         $at, $zero, L_800011C0
    if (ctx->r1 == 0) {
        // 0x80001180: sll         $s7, $s4, 24
        ctx->r23 = S32(ctx->r20 << 24);
            goto L_800011C0;
    }
    // 0x80001180: sll         $s7, $s4, 24
    ctx->r23 = S32(ctx->r20 << 24);
    // 0x80001184: andi        $s5, $s5, 0xFF
    ctx->r21 = ctx->r21 & 0XFF;
    // 0x80001188: sll         $s5, $s5, 16
    ctx->r21 = S32(ctx->r21 << 16);
    // 0x8000118C: or          $s7, $s7, $s5
    ctx->r23 = ctx->r23 | ctx->r21;
    // 0x80001190: andi        $s5, $gp, 0xFFFF
    ctx->r21 = ctx->r28 & 0XFFFF;
    // 0x80001194: or          $s5, $s5, $s7
    ctx->r21 = ctx->r21 | ctx->r23;
    // 0x80001198: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x8000119C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800011A0: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x800011A4: sll         $s7, $s0, 2
    ctx->r23 = S32(ctx->r16 << 2);
    // 0x800011A8: addu        $s7, $s7, $t6
    ctx->r23 = ADD32(ctx->r23, ctx->r14);
    // 0x800011AC: sw          $s5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r21;
L_800011B0:
    // 0x800011B0: addu        $t3, $t3, $s2
    ctx->r11 = ADD32(ctx->r11, ctx->r18);
    // 0x800011B4: slt         $at, $t3, $s7
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x800011B8: bnel        $at, $zero, L_800011B0
    if (ctx->r1 != 0) {
        // 0x800011BC: sw          $s5, 0x0($t3)
        MEM_W(0X0, ctx->r11) = ctx->r21;
            goto L_800011B0;
    }
    goto skip_3;
    // 0x800011BC: sw          $s5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r21;
    skip_3:
L_800011C0:
    // 0x800011C0: addiu       $s7, $t4, -0x1
    ctx->r23 = ADD32(ctx->r12, -0X1);
    // 0x800011C4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800011C8: sllv        $t3, $t3, $s7
    ctx->r11 = S32(ctx->r11 << (ctx->r23 & 31));
    // 0x800011CC: and         $s7, $t1, $t3
    ctx->r23 = ctx->r9 & ctx->r11;
    // 0x800011D0: beq         $s7, $zero, L_800011E8
    if (ctx->r23 == 0) {
        // 0x800011D4: xor         $t1, $t1, $t3
        ctx->r9 = ctx->r9 ^ ctx->r11;
            goto L_800011E8;
    }
    // 0x800011D4: xor         $t1, $t1, $t3
    ctx->r9 = ctx->r9 ^ ctx->r11;
L_800011D8:
    // 0x800011D8: srl         $t3, $t3, 1
    ctx->r11 = S32(U32(ctx->r11) >> 1);
    // 0x800011DC: and         $s7, $t1, $t3
    ctx->r23 = ctx->r9 & ctx->r11;
    // 0x800011E0: bne         $s7, $zero, L_800011D8
    if (ctx->r23 != 0) {
        // 0x800011E4: xor         $t1, $t1, $t3
        ctx->r9 = ctx->r9 ^ ctx->r11;
            goto L_800011D8;
    }
    // 0x800011E4: xor         $t1, $t1, $t3
    ctx->r9 = ctx->r9 ^ ctx->r11;
L_800011E8:
    // 0x800011E8: j           L_800011F8
    // 0x800011EC: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
        goto L_800011F8;
    // 0x800011EC: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x800011F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_800011F4:
    // 0x800011F4: subu        $s1, $s1, $t2
    ctx->r17 = SUB32(ctx->r17, ctx->r10);
L_800011F8:
    // 0x800011F8: sllv        $s7, $fp, $s1
    ctx->r23 = S32(ctx->r30 << (ctx->r17 & 31));
    // 0x800011FC: addiu       $s7, $s7, -0x1
    ctx->r23 = ADD32(ctx->r23, -0X1);
    // 0x80001200: sll         $at, $v0, 2
    ctx->r1 = S32(ctx->r2 << 2);
    // 0x80001204: addu        $at, $at, $sp
    ctx->r1 = ADD32(ctx->r1, ctx->r29);
    // 0x80001208: lw          $at, 0x504($at)
    ctx->r1 = MEM_W(ctx->r1, 0X504);
    // 0x8000120C: and         $s7, $s7, $t1
    ctx->r23 = ctx->r23 & ctx->r9;
    // 0x80001210: bnel        $s7, $at, L_800011F4
    if (ctx->r23 != ctx->r1) {
        // 0x80001214: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_800011F4;
    }
    goto skip_4;
    // 0x80001214: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    skip_4:
    // 0x80001218: bne         $a0, $zero, L_800010EC
    if (ctx->r4 != 0) {
        // 0x8000121C: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_800010EC;
    }
    // 0x8000121C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_80001220:
    // 0x80001220: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
L_80001224:
    // 0x80001224: slt         $at, $t5, $t4
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80001228: bne         $at, $zero, L_80001248
    if (ctx->r1 != 0) {
        // 0x8000122C: sll         $a0, $t4, 2
        ctx->r4 = S32(ctx->r12 << 2);
            goto L_80001248;
    }
    // 0x8000122C: sll         $a0, $t4, 2
    ctx->r4 = S32(ctx->r12 << 2);
    // 0x80001230: addu        $a0, $a0, $sp
    ctx->r4 = ADD32(ctx->r4, ctx->r29);
    // 0x80001234: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80001238: beq         $a0, $zero, L_80001220
    if (ctx->r4 == 0) {
        // 0x8000123C: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_80001220;
    }
    // 0x8000123C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80001240: j           L_800010F0
    // 0x80001244: addu        $s7, $s1, $t2
    ctx->r23 = ADD32(ctx->r17, ctx->r10);
        goto L_800010F0;
    // 0x80001244: addu        $s7, $s1, $t2
    ctx->r23 = ADD32(ctx->r17, ctx->r10);
L_80001248:
    // 0x80001248: bnel        $t9, $zero, L_80001254
    if (ctx->r25 != 0) {
        // 0x8000124C: addiu       $s7, $zero, 0x1
        ctx->r23 = ADD32(0, 0X1);
            goto L_80001254;
    }
    goto skip_5;
    // 0x8000124C: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    skip_5:
    // 0x80001250: addiu       $s7, $zero, 0x0
    ctx->r23 = ADD32(0, 0X0);
L_80001254:
    // 0x80001254: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80001258: bnel        $t5, $at, L_80001264
    if (ctx->r13 != ctx->r1) {
        // 0x8000125C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80001264;
    }
    goto skip_6;
    // 0x8000125C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_6:
    // 0x80001260: addiu       $at, $zero, 0x0
    ctx->r1 = ADD32(0, 0X0);
L_80001264:
    // 0x80001264: and         $v0, $s7, $at
    ctx->r2 = ctx->r23 & ctx->r1;
    // 0x80001268: mtc1        $s3, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r19;
L_8000126C:
    // 0x8000126C: mfc1        $s0, $f2
    ctx->r16 = (int32_t)ctx->f2.u32l;
    // 0x80001270: mfc1        $s1, $f3
    ctx->r17 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x80001274: mfc1        $s2, $f4
    ctx->r18 = (int32_t)ctx->f4.u32l;
    // 0x80001278: mfc1        $s3, $f5
    ctx->r19 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x8000127C: mfc1        $s4, $f6
    ctx->r20 = (int32_t)ctx->f6.u32l;
    // 0x80001280: mfc1        $s5, $f7
    ctx->r21 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x80001284: mfc1        $s6, $f8
    ctx->r22 = (int32_t)ctx->f8.u32l;
    // 0x80001288: mfc1        $s7, $f9
    ctx->r23 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x8000128C: mfc1        $fp, $f10
    ctx->r30 = (int32_t)ctx->f10.u32l;
    // 0x80001290: jr          $ra
    // 0x80001294: mfc1        $gp, $f11
    ctx->r28 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    return;
    // 0x80001294: mfc1        $gp, $f11
    ctx->r28 = (int32_t)ctx->f_odd[(11 - 1) * 2];
L_80001298:
    // 0x80001298: jr          $ra
    // 0x8000129C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8000129C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800012A0:
    // 0x800012A0: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    // 0x800012A4: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x800012A8: j           L_8000126C
    // 0x800012AC: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
        goto L_8000126C;
    // 0x800012AC: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
;}
RECOMP_FUNC void boot_inflate_codes(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800012B0: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x800012B4: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x800012B8: mfc1        $s4, $f17
    ctx->r20 = (int32_t)ctx->f_odd[(17 - 1) * 2];
    // 0x800012BC: lui         $s0, 0x8000
    ctx->r16 = S32(0X8000 << 16);
    // 0x800012C0: addiu       $s0, $s0, 0x4300
    ctx->r16 = ADD32(ctx->r16, 0X4300);
    // 0x800012C4: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x800012C8: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x800012CC: lhu         $t2, 0x0($t7)
    ctx->r10 = MEM_HU(ctx->r15, 0X0);
    // 0x800012D0: sll         $t7, $a3, 1
    ctx->r15 = S32(ctx->r7 << 1);
    // 0x800012D4: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x800012D8: lhu         $t0, 0x0($t7)
    ctx->r8 = MEM_HU(ctx->r15, 0X0);
L_800012DC:
    // 0x800012DC: slt         $at, $fp, $a2
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r6) ? 1 : 0;
L_800012E0:
    // 0x800012E0: beq         $at, $zero, L_80001308
    if (ctx->r1 == 0) {
        // 0x800012E4: and         $s5, $gp, $t2
        ctx->r21 = ctx->r28 & ctx->r10;
            goto L_80001308;
    }
    // 0x800012E4: and         $s5, $gp, $t2
    ctx->r21 = ctx->r28 & ctx->r10;
L_800012E8:
    // 0x800012E8: lbu         $s5, 0x0($s7)
    ctx->r21 = MEM_BU(ctx->r23, 0X0);
    // 0x800012EC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x800012F0: sllv        $s5, $s5, $fp
    ctx->r21 = S32(ctx->r21 << (ctx->r30 & 31));
    // 0x800012F4: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x800012F8: slt         $at, $fp, $a2
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x800012FC: bne         $at, $zero, L_800012E8
    if (ctx->r1 != 0) {
        // 0x80001300: or          $gp, $gp, $s5
        ctx->r28 = ctx->r28 | ctx->r21;
            goto L_800012E8;
    }
    // 0x80001300: or          $gp, $gp, $s5
    ctx->r28 = ctx->r28 | ctx->r21;
    // 0x80001304: and         $s5, $gp, $t2
    ctx->r21 = ctx->r28 & ctx->r10;
L_80001308:
    // 0x80001308: sll         $s5, $s5, 2
    ctx->r21 = S32(ctx->r21 << 2);
    // 0x8000130C: addu        $s5, $s5, $a0
    ctx->r21 = ADD32(ctx->r21, ctx->r4);
    // 0x80001310: lbu         $s1, 0x0($s5)
    ctx->r17 = MEM_BU(ctx->r21, 0X0);
    // 0x80001314: slti        $at, $s1, 0x11
    ctx->r1 = SIGNED(ctx->r17) < 0X11 ? 1 : 0;
    // 0x80001318: bne         $at, $zero, L_80001388
    if (ctx->r1 != 0) {
        // 0x8000131C: addiu       $t9, $zero, 0x63
        ctx->r25 = ADD32(0, 0X63);
            goto L_80001388;
    }
    // 0x8000131C: addiu       $t9, $zero, 0x63
    ctx->r25 = ADD32(0, 0X63);
    // 0x80001320: lbu         $t7, 0x1($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X1);
L_80001324:
    // 0x80001324: beq         $s1, $t9, L_80001588
    if (ctx->r17 == ctx->r25) {
        // 0x80001328: addiu       $s1, $s1, -0x10
        ctx->r17 = ADD32(ctx->r17, -0X10);
            goto L_80001588;
    }
    // 0x80001328: addiu       $s1, $s1, -0x10
    ctx->r17 = ADD32(ctx->r17, -0X10);
    // 0x8000132C: subu        $fp, $fp, $t7
    ctx->r30 = SUB32(ctx->r30, ctx->r15);
    // 0x80001330: slt         $at, $fp, $s1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80001334: beq         $at, $zero, L_80001358
    if (ctx->r1 == 0) {
        // 0x80001338: srlv        $gp, $gp, $t7
        ctx->r28 = S32(U32(ctx->r28) >> (ctx->r15 & 31));
            goto L_80001358;
    }
    // 0x80001338: srlv        $gp, $gp, $t7
    ctx->r28 = S32(U32(ctx->r28) >> (ctx->r15 & 31));
L_8000133C:
    // 0x8000133C: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    // 0x80001340: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80001344: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x80001348: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x8000134C: slt         $t7, $fp, $s1
    ctx->r15 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80001350: bne         $t7, $zero, L_8000133C
    if (ctx->r15 != 0) {
        // 0x80001354: or          $gp, $gp, $at
        ctx->r28 = ctx->r28 | ctx->r1;
            goto L_8000133C;
    }
    // 0x80001354: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
L_80001358:
    // 0x80001358: sll         $t7, $s1, 1
    ctx->r15 = S32(ctx->r17 << 1);
    // 0x8000135C: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x80001360: lhu         $t7, 0x0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X0);
    // 0x80001364: lhu         $t8, 0x2($s5)
    ctx->r24 = MEM_HU(ctx->r21, 0X2);
    // 0x80001368: and         $t7, $t7, $gp
    ctx->r15 = ctx->r15 & ctx->r28;
    // 0x8000136C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80001370: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80001374: addu        $s5, $s6, $t7
    ctx->r21 = ADD32(ctx->r22, ctx->r15);
    // 0x80001378: lbu         $s1, 0x0($s5)
    ctx->r17 = MEM_BU(ctx->r21, 0X0);
    // 0x8000137C: slti        $at, $s1, 0x11
    ctx->r1 = SIGNED(ctx->r17) < 0X11 ? 1 : 0;
    // 0x80001380: beql        $at, $zero, L_80001324
    if (ctx->r1 == 0) {
        // 0x80001384: lbu         $t7, 0x1($s5)
        ctx->r15 = MEM_BU(ctx->r21, 0X1);
            goto L_80001324;
    }
    goto skip_0;
    // 0x80001384: lbu         $t7, 0x1($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X1);
    skip_0:
L_80001388:
    // 0x80001388: lbu         $t7, 0x1($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X1);
    // 0x8000138C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80001390: srlv        $gp, $gp, $t7
    ctx->r28 = S32(U32(ctx->r28) >> (ctx->r15 & 31));
    // 0x80001394: bne         $s1, $at, L_800013D4
    if (ctx->r17 != ctx->r1) {
        // 0x80001398: subu        $fp, $fp, $t7
        ctx->r30 = SUB32(ctx->r30, ctx->r15);
            goto L_800013D4;
    }
    // 0x80001398: subu        $fp, $fp, $t7
    ctx->r30 = SUB32(ctx->r30, ctx->r15);
    // 0x8000139C: lhu         $t7, 0x2($s5)
    ctx->r15 = MEM_HU(ctx->r21, 0X2);
    // 0x800013A0: addu        $t8, $t3, $s4
    ctx->r24 = ADD32(ctx->r11, ctx->r20);
    // 0x800013A4: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x800013A8: lw          $t8, 0xA84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA84);
    // 0x800013AC: andi        $t9, $t7, 0xFF
    ctx->r25 = ctx->r15 & 0XFF;
    // 0x800013B0: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800013B4: sw          $t8, 0xA84($sp)
    MEM_W(0XA84, ctx->r29) = ctx->r24;
    // 0x800013B8: andi        $t8, $t8, 0x17
    ctx->r24 = ctx->r24 & 0X17;
    // 0x800013BC: sllv        $t9, $t9, $t8
    ctx->r25 = S32(ctx->r25 << (ctx->r24 & 31));
    // 0x800013C0: lw          $t8, 0xA88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA88);
    // 0x800013C4: xor         $t8, $t8, $t9
    ctx->r24 = ctx->r24 ^ ctx->r25;
    // 0x800013C8: sw          $t8, 0xA88($sp)
    MEM_W(0XA88, ctx->r29) = ctx->r24;
    // 0x800013CC: j           L_800012DC
    // 0x800013D0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_800012DC;
    // 0x800013D0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_800013D4:
    // 0x800013D4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x800013D8: beq         $s1, $at, L_8000157C
    if (ctx->r17 == ctx->r1) {
        // 0x800013DC: slt         $at, $fp, $s1
        ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_8000157C;
    }
    // 0x800013DC: slt         $at, $fp, $s1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800013E0: beq         $at, $zero, L_80001404
    if (ctx->r1 == 0) {
        // 0x800013E4: sll         $t7, $s1, 1
        ctx->r15 = S32(ctx->r17 << 1);
            goto L_80001404;
    }
    // 0x800013E4: sll         $t7, $s1, 1
    ctx->r15 = S32(ctx->r17 << 1);
L_800013E8:
    // 0x800013E8: lbu         $t9, 0x0($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X0);
    // 0x800013EC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x800013F0: sllv        $t9, $t9, $fp
    ctx->r25 = S32(ctx->r25 << (ctx->r30 & 31));
    // 0x800013F4: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x800013F8: slt         $at, $fp, $s1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800013FC: bne         $at, $zero, L_800013E8
    if (ctx->r1 != 0) {
        // 0x80001400: or          $gp, $gp, $t9
        ctx->r28 = ctx->r28 | ctx->r25;
            goto L_800013E8;
    }
    // 0x80001400: or          $gp, $gp, $t9
    ctx->r28 = ctx->r28 | ctx->r25;
L_80001404:
    // 0x80001404: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x80001408: lhu         $t7, 0x0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X0);
    // 0x8000140C: lhu         $t8, 0x2($s5)
    ctx->r24 = MEM_HU(ctx->r21, 0X2);
    // 0x80001410: and         $t7, $t7, $gp
    ctx->r15 = ctx->r15 & ctx->r28;
    // 0x80001414: addu        $s2, $t7, $t8
    ctx->r18 = ADD32(ctx->r15, ctx->r24);
    // 0x80001418: subu        $fp, $fp, $s1
    ctx->r30 = SUB32(ctx->r30, ctx->r17);
    // 0x8000141C: slt         $at, $fp, $a3
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80001420: beq         $at, $zero, L_80001444
    if (ctx->r1 == 0) {
        // 0x80001424: srlv        $gp, $gp, $s1
        ctx->r28 = S32(U32(ctx->r28) >> (ctx->r17 & 31));
            goto L_80001444;
    }
    // 0x80001424: srlv        $gp, $gp, $s1
    ctx->r28 = S32(U32(ctx->r28) >> (ctx->r17 & 31));
L_80001428:
    // 0x80001428: lbu         $t7, 0x0($s7)
    ctx->r15 = MEM_BU(ctx->r23, 0X0);
    // 0x8000142C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80001430: sllv        $t7, $t7, $fp
    ctx->r15 = S32(ctx->r15 << (ctx->r30 & 31));
    // 0x80001434: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x80001438: slt         $at, $fp, $a3
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8000143C: bne         $at, $zero, L_80001428
    if (ctx->r1 != 0) {
        // 0x80001440: or          $gp, $gp, $t7
        ctx->r28 = ctx->r28 | ctx->r15;
            goto L_80001428;
    }
    // 0x80001440: or          $gp, $gp, $t7
    ctx->r28 = ctx->r28 | ctx->r15;
L_80001444:
    // 0x80001444: and         $t7, $gp, $t0
    ctx->r15 = ctx->r28 & ctx->r8;
    // 0x80001448: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000144C: addu        $s5, $a1, $t7
    ctx->r21 = ADD32(ctx->r5, ctx->r15);
    // 0x80001450: lbu         $s1, 0x0($s5)
    ctx->r17 = MEM_BU(ctx->r21, 0X0);
    // 0x80001454: slti        $at, $s1, 0x11
    ctx->r1 = SIGNED(ctx->r17) < 0X11 ? 1 : 0;
    // 0x80001458: bne         $at, $zero, L_800014D0
    if (ctx->r1 != 0) {
        // 0x8000145C: addiu       $t7, $zero, 0x63
        ctx->r15 = ADD32(0, 0X63);
            goto L_800014D0;
    }
    // 0x8000145C: addiu       $t7, $zero, 0x63
    ctx->r15 = ADD32(0, 0X63);
L_80001460:
    // 0x80001460: beq         $s1, $t7, L_80001588
    if (ctx->r17 == ctx->r15) {
        // 0x80001464: lbu         $t7, 0x1($s5)
        ctx->r15 = MEM_BU(ctx->r21, 0X1);
            goto L_80001588;
    }
    // 0x80001464: lbu         $t7, 0x1($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X1);
    // 0x80001468: addiu       $s1, $s1, -0x10
    ctx->r17 = ADD32(ctx->r17, -0X10);
    // 0x8000146C: srlv        $gp, $gp, $t7
    ctx->r28 = S32(U32(ctx->r28) >> (ctx->r15 & 31));
    // 0x80001470: subu        $fp, $fp, $t7
    ctx->r30 = SUB32(ctx->r30, ctx->r15);
    // 0x80001474: slt         $at, $fp, $s1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80001478: beq         $at, $zero, L_800014A0
    if (ctx->r1 == 0) {
        // 0x8000147C: nop
    
            goto L_800014A0;
    }
    // 0x8000147C: nop

    // 0x80001480: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_80001484:
    // 0x80001484: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80001488: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x8000148C: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x80001490: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x80001494: slt         $at, $fp, $s1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80001498: bnel        $at, $zero, L_80001484
    if (ctx->r1 != 0) {
        // 0x8000149C: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_80001484;
    }
    goto skip_1;
    // 0x8000149C: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_1:
L_800014A0:
    // 0x800014A0: sll         $t7, $s1, 1
    ctx->r15 = S32(ctx->r17 << 1);
    // 0x800014A4: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x800014A8: lhu         $t7, 0x0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X0);
    // 0x800014AC: lhu         $t8, 0x2($s5)
    ctx->r24 = MEM_HU(ctx->r21, 0X2);
    // 0x800014B0: and         $t7, $t7, $gp
    ctx->r15 = ctx->r15 & ctx->r28;
    // 0x800014B4: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800014B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800014BC: addu        $s5, $s6, $t7
    ctx->r21 = ADD32(ctx->r22, ctx->r15);
    // 0x800014C0: lbu         $s1, 0x0($s5)
    ctx->r17 = MEM_BU(ctx->r21, 0X0);
    // 0x800014C4: slti        $at, $s1, 0x11
    ctx->r1 = SIGNED(ctx->r17) < 0X11 ? 1 : 0;
    // 0x800014C8: beq         $at, $zero, L_80001460
    if (ctx->r1 == 0) {
        // 0x800014CC: addiu       $t7, $zero, 0x63
        ctx->r15 = ADD32(0, 0X63);
            goto L_80001460;
    }
    // 0x800014CC: addiu       $t7, $zero, 0x63
    ctx->r15 = ADD32(0, 0X63);
L_800014D0:
    // 0x800014D0: lbu         $t7, 0x1($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X1);
    // 0x800014D4: sll         $t8, $s1, 1
    ctx->r24 = S32(ctx->r17 << 1);
    // 0x800014D8: subu        $fp, $fp, $t7
    ctx->r30 = SUB32(ctx->r30, ctx->r15);
    // 0x800014DC: slt         $at, $fp, $s1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800014E0: beq         $at, $zero, L_80001504
    if (ctx->r1 == 0) {
        // 0x800014E4: srlv        $gp, $gp, $t7
        ctx->r28 = S32(U32(ctx->r28) >> (ctx->r15 & 31));
            goto L_80001504;
    }
    // 0x800014E4: srlv        $gp, $gp, $t7
    ctx->r28 = S32(U32(ctx->r28) >> (ctx->r15 & 31));
L_800014E8:
    // 0x800014E8: lbu         $t7, 0x0($s7)
    ctx->r15 = MEM_BU(ctx->r23, 0X0);
    // 0x800014EC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x800014F0: sllv        $t7, $t7, $fp
    ctx->r15 = S32(ctx->r15 << (ctx->r30 & 31));
    // 0x800014F4: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x800014F8: slt         $at, $fp, $s1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800014FC: bne         $at, $zero, L_800014E8
    if (ctx->r1 != 0) {
        // 0x80001500: or          $gp, $gp, $t7
        ctx->r28 = ctx->r28 | ctx->r15;
            goto L_800014E8;
    }
    // 0x80001500: or          $gp, $gp, $t7
    ctx->r28 = ctx->r28 | ctx->r15;
L_80001504:
    // 0x80001504: addu        $t7, $t8, $s0
    ctx->r15 = ADD32(ctx->r24, ctx->r16);
    // 0x80001508: lhu         $t7, 0x0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X0);
    // 0x8000150C: lhu         $t8, 0x2($s5)
    ctx->r24 = MEM_HU(ctx->r21, 0X2);
    // 0x80001510: and         $t7, $t7, $gp
    ctx->r15 = ctx->r15 & ctx->r28;
    // 0x80001514: subu        $s3, $s4, $t7
    ctx->r19 = SUB32(ctx->r20, ctx->r15);
    // 0x80001518: subu        $s3, $s3, $t8
    ctx->r19 = SUB32(ctx->r19, ctx->r24);
    // 0x8000151C: srlv        $gp, $gp, $s1
    ctx->r28 = S32(U32(ctx->r28) >> (ctx->r17 & 31));
    // 0x80001520: subu        $fp, $fp, $s1
    ctx->r30 = SUB32(ctx->r30, ctx->r17);
    // 0x80001524: addu        $t7, $s4, $s2
    ctx->r15 = ADD32(ctx->r20, ctx->r18);
    // 0x80001528: slt         $at, $t7, $t5
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8000152C: beq         $at, $zero, L_80001588
    if (ctx->r1 == 0) {
        // 0x80001530: addu        $t8, $t3, $s3
        ctx->r24 = ADD32(ctx->r11, ctx->r19);
            goto L_80001588;
    }
    // 0x80001530: addu        $t8, $t3, $s3
    ctx->r24 = ADD32(ctx->r11, ctx->r19);
    // 0x80001534: addu        $t9, $t3, $s4
    ctx->r25 = ADD32(ctx->r11, ctx->r20);
    // 0x80001538: addu        $s4, $s4, $s2
    ctx->r20 = ADD32(ctx->r20, ctx->r18);
    // 0x8000153C: lw          $v0, 0xA84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA84);
    // 0x80001540: lw          $v1, 0xA88($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA88);
L_80001544:
    // 0x80001544: lbu         $t7, 0x0($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X0);
    // 0x80001548: addiu       $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x8000154C: sb          $t7, -0x1($t9)
    MEM_B(-0X1, ctx->r25) = ctx->r15;
    // 0x80001550: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80001554: andi        $at, $v0, 0x17
    ctx->r1 = ctx->r2 & 0X17;
    // 0x80001558: sllv        $t7, $t7, $at
    ctx->r15 = S32(ctx->r15 << (ctx->r1 & 31));
    // 0x8000155C: xor         $v1, $v1, $t7
    ctx->r3 = ctx->r3 ^ ctx->r15;
    // 0x80001560: addu        $at, $t3, $s4
    ctx->r1 = ADD32(ctx->r11, ctx->r20);
    // 0x80001564: bne         $t9, $at, L_80001544
    if (ctx->r25 != ctx->r1) {
        // 0x80001568: addiu       $t8, $t8, 0x1
        ctx->r24 = ADD32(ctx->r24, 0X1);
            goto L_80001544;
    }
    // 0x80001568: addiu       $t8, $t8, 0x1
    ctx->r24 = ADD32(ctx->r24, 0X1);
    // 0x8000156C: sw          $v0, 0xA84($sp)
    MEM_W(0XA84, ctx->r29) = ctx->r2;
    // 0x80001570: sw          $v1, 0xA88($sp)
    MEM_W(0XA88, ctx->r29) = ctx->r3;
    // 0x80001574: j           L_800012E0
    // 0x80001578: slt         $at, $fp, $a2
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r6) ? 1 : 0;
        goto L_800012E0;
    // 0x80001578: slt         $at, $fp, $a2
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r6) ? 1 : 0;
L_8000157C:
    // 0x8000157C: mtc1        $s4, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r20;
    // 0x80001580: jr          $ra
    // 0x80001584: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    return;
    // 0x80001584: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
L_80001588:
    // 0x80001588: jr          $ra
    // 0x8000158C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8000158C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80001590: addiu       $sp, $sp, -0xA90
    ctx->r29 = ADD32(ctx->r29, -0XA90);
    // 0x80001594: sw          $s0, 0xA48($sp)
    MEM_W(0XA48, ctx->r29) = ctx->r16;
    // 0x80001598: sw          $s1, 0xA4C($sp)
    MEM_W(0XA4C, ctx->r29) = ctx->r17;
    // 0x8000159C: sw          $s2, 0xA50($sp)
    MEM_W(0XA50, ctx->r29) = ctx->r18;
    // 0x800015A0: sw          $s3, 0xA54($sp)
    MEM_W(0XA54, ctx->r29) = ctx->r19;
    // 0x800015A4: sw          $s4, 0xA58($sp)
    MEM_W(0XA58, ctx->r29) = ctx->r20;
    // 0x800015A8: sw          $s5, 0xA5C($sp)
    MEM_W(0XA5C, ctx->r29) = ctx->r21;
    // 0x800015AC: sw          $s6, 0xA60($sp)
    MEM_W(0XA60, ctx->r29) = ctx->r22;
    // 0x800015B0: sw          $s7, 0xA64($sp)
    MEM_W(0XA64, ctx->r29) = ctx->r23;
    // 0x800015B4: sw          $ra, 0xA80($sp)
    MEM_W(0XA80, ctx->r29) = ctx->r31;
    // 0x800015B8: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x800015BC: lui         $s6, 0x8000
    ctx->r22 = S32(0X8000 << 16);
    // 0x800015C0: addiu       $s6, $s6, 0x6500
    ctx->r22 = ADD32(ctx->r22, 0X6500);
    // 0x800015C4: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x800015C8: addiu       $t2, $sp, 0x548
    ctx->r10 = ADD32(ctx->r29, 0X548);
    // 0x800015CC: addiu       $t1, $t2, 0x240
    ctx->r9 = ADD32(ctx->r10, 0X240);
L_800015D0:
    // 0x800015D0: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x800015D4: bne         $t2, $t1, L_800015D0
    if (ctx->r10 != ctx->r9) {
        // 0x800015D8: sw          $t0, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r8;
            goto L_800015D0;
    }
    // 0x800015D8: sw          $t0, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r8;
    // 0x800015DC: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x800015E0: addiu       $t1, $t2, 0x1C0
    ctx->r9 = ADD32(ctx->r10, 0X1C0);
L_800015E4:
    // 0x800015E4: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x800015E8: bne         $t2, $t1, L_800015E4
    if (ctx->r10 != ctx->r9) {
        // 0x800015EC: sw          $t0, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r8;
            goto L_800015E4;
    }
    // 0x800015EC: sw          $t0, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r8;
    // 0x800015F0: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x800015F4: addiu       $t1, $t2, 0x60
    ctx->r9 = ADD32(ctx->r10, 0X60);
L_800015F8:
    // 0x800015F8: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x800015FC: bne         $t2, $t1, L_800015F8
    if (ctx->r10 != ctx->r9) {
        // 0x80001600: sw          $t0, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r8;
            goto L_800015F8;
    }
    // 0x80001600: sw          $t0, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r8;
    // 0x80001604: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x80001608: addiu       $t1, $t2, 0x20
    ctx->r9 = ADD32(ctx->r10, 0X20);
L_8000160C:
    // 0x8000160C: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x80001610: bne         $t2, $t1, L_8000160C
    if (ctx->r10 != ctx->r9) {
        // 0x80001614: sw          $t0, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r8;
            goto L_8000160C;
    }
    // 0x80001614: sw          $t0, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r8;
    // 0x80001618: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x8000161C: sw          $t0, 0x9CC($sp)
    MEM_W(0X9CC, ctx->r29) = ctx->r8;
    // 0x80001620: addiu       $a0, $sp, 0x548
    ctx->r4 = ADD32(ctx->r29, 0X548);
    // 0x80001624: addiu       $a1, $zero, 0x120
    ctx->r5 = ADD32(0, 0X120);
    // 0x80001628: addiu       $a2, $zero, 0x101
    ctx->r6 = ADD32(0, 0X101);
    // 0x8000162C: lui         $a3, 0x8000
    ctx->r7 = S32(0X8000 << 16);
    // 0x80001630: addiu       $a3, $a3, 0x4322
    ctx->r7 = ADD32(ctx->r7, 0X4322);
    // 0x80001634: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x80001638: addiu       $t7, $t7, 0x43AF
    ctx->r15 = ADD32(ctx->r15, 0X43AF);
    // 0x8000163C: addiu       $t8, $sp, 0x9C8
    ctx->r24 = ADD32(ctx->r29, 0X9C8);
    // 0x80001640: jal         0x80000E1C
    // 0x80001644: addiu       $t9, $sp, 0x9CC
    ctx->r25 = ADD32(ctx->r29, 0X9CC);
    boot_huft_build(rdram, ctx);
        goto after_0;
    // 0x80001644: addiu       $t9, $sp, 0x9CC
    ctx->r25 = ADD32(ctx->r29, 0X9CC);
    after_0:
    // 0x80001648: addiu       $t0, $sp, 0x548
    ctx->r8 = ADD32(ctx->r29, 0X548);
    // 0x8000164C: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x80001650: addiu       $t2, $t0, 0x78
    ctx->r10 = ADD32(ctx->r8, 0X78);
L_80001654:
    // 0x80001654: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80001658: bne         $t0, $t2, L_80001654
    if (ctx->r8 != ctx->r10) {
        // 0x8000165C: sw          $t1, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r9;
            goto L_80001654;
    }
    // 0x8000165C: sw          $t1, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r9;
    // 0x80001660: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x80001664: sw          $t0, 0x9D4($sp)
    MEM_W(0X9D4, ctx->r29) = ctx->r8;
    // 0x80001668: addiu       $a0, $sp, 0x548
    ctx->r4 = ADD32(ctx->r29, 0X548);
    // 0x8000166C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x80001670: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80001674: lui         $a3, 0x8000
    ctx->r7 = S32(0X8000 << 16);
    // 0x80001678: addiu       $a3, $a3, 0x4360
    ctx->r7 = ADD32(ctx->r7, 0X4360);
    // 0x8000167C: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x80001680: addiu       $t7, $t7, 0x43CE
    ctx->r15 = ADD32(ctx->r15, 0X43CE);
    // 0x80001684: addiu       $t8, $sp, 0x9D0
    ctx->r24 = ADD32(ctx->r29, 0X9D0);
    // 0x80001688: jal         0x80000E1C
    // 0x8000168C: addiu       $t9, $sp, 0x9D4
    ctx->r25 = ADD32(ctx->r29, 0X9D4);
    boot_huft_build(rdram, ctx);
        goto after_1;
    // 0x8000168C: addiu       $t9, $sp, 0x9D4
    ctx->r25 = ADD32(ctx->r29, 0X9D4);
    after_1:
    // 0x80001690: lw          $s0, 0xA48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA48);
    // 0x80001694: lw          $s1, 0xA4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4C);
    // 0x80001698: lw          $s2, 0xA50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA50);
    // 0x8000169C: lw          $s3, 0xA54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XA54);
    // 0x800016A0: lw          $s4, 0xA58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA58);
    // 0x800016A4: lw          $s5, 0xA5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XA5C);
    // 0x800016A8: lw          $s6, 0xA60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA60);
    // 0x800016AC: lw          $s7, 0xA64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XA64);
    // 0x800016B0: lw          $ra, 0xA80($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA80);
    // 0x800016B4: jr          $ra
    // 0x800016B8: addiu       $sp, $sp, 0xA90
    ctx->r29 = ADD32(ctx->r29, 0XA90);
    return;
    // 0x800016B8: addiu       $sp, $sp, 0xA90
    ctx->r29 = ADD32(ctx->r29, 0XA90);
    // 0x800016BC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x800016C0: addiu       $v0, $v0, 0x6F48
    ctx->r2 = ADD32(ctx->r2, 0X6F48);
    // 0x800016C4: jr          $ra
    // 0x800016C8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    return;
    // 0x800016C8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800016CC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x800016D0: addiu       $v0, $v0, 0x4240
    ctx->r2 = ADD32(ctx->r2, 0X4240);
    // 0x800016D4: jr          $ra
    // 0x800016D8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    return;
    // 0x800016D8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800016DC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x800016E0: addiu       $v0, $v0, 0x4244
    ctx->r2 = ADD32(ctx->r2, 0X4244);
    // 0x800016E4: jr          $ra
    // 0x800016E8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    return;
    // 0x800016E8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800016EC: nop

;}
RECOMP_FUNC void boot_osInitialize(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800016F0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800016F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800016F8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800016FC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80001700: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80001704: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x80001708: jal         0x80001BC0
    // 0x8000170C: sw          $t6, 0x6F50($at)
    MEM_W(0X6F50, ctx->r1) = ctx->r14;
    boot___osGetSR(rdram, ctx);
        goto after_0;
    // 0x8000170C: sw          $t6, 0x6F50($at)
    MEM_W(0X6F50, ctx->r1) = ctx->r14;
    after_0:
    // 0x80001710: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80001714: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80001718: jal         0x80001BB0
    // 0x8000171C: or          $a0, $s0, $at
    ctx->r4 = ctx->r16 | ctx->r1;
    boot___osSetSR(rdram, ctx);
        goto after_1;
    // 0x8000171C: or          $a0, $s0, $at
    ctx->r4 = ctx->r16 | ctx->r1;
    after_1:
    // 0x80001720: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80001724: jal         0x80001BD0
    // 0x80001728: ori         $a0, $a0, 0x800
    ctx->r4 = ctx->r4 | 0X800;
    boot___osSetFpcCsr(rdram, ctx);
        goto after_2;
    // 0x80001728: ori         $a0, $a0, 0x800
    ctx->r4 = ctx->r4 | 0X800;
    after_2:
    // 0x8000172C: lui         $a0, 0x1FC0
    ctx->r4 = S32(0X1FC0 << 16);
    // 0x80001730: ori         $a0, $a0, 0x7FC
    ctx->r4 = ctx->r4 | 0X7FC;
    // 0x80001734: jal         0x80001BE0
    // 0x80001738: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    boot___osSiRawReadIo(rdram, ctx);
        goto after_3;
    // 0x80001738: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x8000173C: beq         $v0, $zero, L_8000175C
    if (ctx->r2 == 0) {
        // 0x80001740: nop
    
            goto L_8000175C;
    }
    // 0x80001740: nop

L_80001744:
    // 0x80001744: lui         $a0, 0x1FC0
    ctx->r4 = S32(0X1FC0 << 16);
    // 0x80001748: ori         $a0, $a0, 0x7FC
    ctx->r4 = ctx->r4 | 0X7FC;
    // 0x8000174C: jal         0x80001BE0
    // 0x80001750: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    boot___osSiRawReadIo(rdram, ctx);
        goto after_4;
    // 0x80001750: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_4:
    // 0x80001754: bne         $v0, $zero, L_80001744
    if (ctx->r2 != 0) {
        // 0x80001758: nop
    
            goto L_80001744;
    }
    // 0x80001758: nop

L_8000175C:
    // 0x8000175C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80001760: lui         $a0, 0x1FC0
    ctx->r4 = S32(0X1FC0 << 16);
    // 0x80001764: ori         $a0, $a0, 0x7FC
    ctx->r4 = ctx->r4 | 0X7FC;
    // 0x80001768: ori         $t7, $a1, 0x8
    ctx->r15 = ctx->r5 | 0X8;
    // 0x8000176C: jal         0x80001C30
    // 0x80001770: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    boot___osSiRawWriteIo(rdram, ctx);
        goto after_5;
    // 0x80001770: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_5:
    // 0x80001774: beq         $v0, $zero, L_8000179C
    if (ctx->r2 == 0) {
        // 0x80001778: nop
    
            goto L_8000179C;
    }
    // 0x80001778: nop

L_8000177C:
    // 0x8000177C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80001780: lui         $a0, 0x1FC0
    ctx->r4 = S32(0X1FC0 << 16);
    // 0x80001784: ori         $a0, $a0, 0x7FC
    ctx->r4 = ctx->r4 | 0X7FC;
    // 0x80001788: ori         $t8, $a1, 0x8
    ctx->r24 = ctx->r5 | 0X8;
    // 0x8000178C: jal         0x80001C30
    // 0x80001790: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    boot___osSiRawWriteIo(rdram, ctx);
        goto after_6;
    // 0x80001790: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_6:
    // 0x80001794: bne         $v0, $zero, L_8000177C
    if (ctx->r2 != 0) {
        // 0x80001798: nop
    
            goto L_8000177C;
    }
    // 0x80001798: nop

L_8000179C:
    // 0x8000179C: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x800017A0: addiu       $t0, $t0, 0x1C90
    ctx->r8 = ADD32(ctx->r8, 0X1C90);
    // 0x800017A4: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x800017A8: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x800017AC: lui         $t5, 0x8000
    ctx->r13 = S32(0X8000 << 16);
    // 0x800017B0: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x800017B4: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x800017B8: addiu       $t5, $t5, 0x1C90
    ctx->r13 = ADD32(ctx->r13, 0X1C90);
    // 0x800017BC: lui         $t4, 0x8000
    ctx->r12 = S32(0X8000 << 16);
    // 0x800017C0: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x800017C4: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x800017C8: ori         $t4, $t4, 0x80
    ctx->r12 = ctx->r12 | 0X80;
    // 0x800017CC: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x800017D0: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x800017D4: lw          $t3, 0xC($t0)
    ctx->r11 = MEM_W(ctx->r8, 0XC);
    // 0x800017D8: addiu       $t1, $t1, 0x1C90
    ctx->r9 = ADD32(ctx->r9, 0X1C90);
    // 0x800017DC: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x800017E0: sw          $t3, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r11;
    // 0x800017E4: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x800017E8: ori         $t2, $t2, 0x100
    ctx->r10 = ctx->r10 | 0X100;
    // 0x800017EC: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x800017F0: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x800017F4: lw          $t8, 0x4($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X4);
    // 0x800017F8: addiu       $t6, $t6, 0x1C90
    ctx->r14 = ADD32(ctx->r14, 0X1C90);
    // 0x800017FC: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x80001800: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x80001804: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x80001808: ori         $t7, $t7, 0x180
    ctx->r15 = ctx->r15 | 0X180;
    // 0x8000180C: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x80001810: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x80001814: lw          $t8, 0xC($t5)
    ctx->r24 = MEM_W(ctx->r13, 0XC);
    // 0x80001818: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x8000181C: sw          $t8, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r24;
    // 0x80001820: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x80001824: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x80001828: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x8000182C: sw          $t3, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r11;
    // 0x80001830: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x80001834: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x80001838: lw          $t3, 0xC($t1)
    ctx->r11 = MEM_W(ctx->r9, 0XC);
    // 0x8000183C: sw          $t3, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r11;
    // 0x80001840: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80001844: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x80001848: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x8000184C: sw          $t8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r24;
    // 0x80001850: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80001854: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x80001858: lw          $t8, 0xC($t6)
    ctx->r24 = MEM_W(ctx->r14, 0XC);
    // 0x8000185C: jal         0x80002660
    // 0x80001860: sw          $t8, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r24;
    boot_osWritebackDCache(rdram, ctx);
        goto after_7;
    // 0x80001860: sw          $t8, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r24;
    after_7:
    // 0x80001864: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x80001868: jal         0x800026E0
    // 0x8000186C: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    boot_osInvalICache(rdram, ctx);
        goto after_8;
    // 0x8000186C: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    after_8:
    // 0x80001870: jal         0x80001998
    // 0x80001874: nop

    boot___createSpeedParam(rdram, ctx);
        goto after_9;
    // 0x80001874: nop

    after_9:
    // 0x80001878: jal         0x80002760
    // 0x8000187C: nop

    boot_osUnmapTLBAll(rdram, ctx);
        goto after_10;
    // 0x8000187C: nop

    after_10:
    // 0x80001880: jal         0x800027B0
    // 0x80001884: nop

    boot_osMapTLBRdb(rdram, ctx);
        goto after_11;
    // 0x80001884: nop

    after_11:
    // 0x80001888: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x8000188C: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80001890: lw          $a1, 0x4254($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4254);
    // 0x80001894: lw          $a0, 0x4250($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4250);
    // 0x80001898: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8000189C: jal         0x80002978
    // 0x800018A0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    boot___ll_mul(rdram, ctx);
        goto after_12;
    // 0x800018A0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_12:
    // 0x800018A4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800018A8: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x800018AC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800018B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800018B4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800018B8: jal         0x80002878
    // 0x800018BC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    boot___ull_div(rdram, ctx);
        goto after_13;
    // 0x800018BC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_13:
    // 0x800018C0: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x800018C4: lw          $t0, 0x30C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X30C);
    // 0x800018C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800018CC: sw          $v0, 0x4250($at)
    MEM_W(0X4250, ctx->r1) = ctx->r2;
    // 0x800018D0: bne         $t0, $zero, L_800018E8
    if (ctx->r8 != 0) {
        // 0x800018D4: sw          $v1, 0x4254($at)
        MEM_W(0X4254, ctx->r1) = ctx->r3;
            goto L_800018E8;
    }
    // 0x800018D4: sw          $v1, 0x4254($at)
    MEM_W(0X4254, ctx->r1) = ctx->r3;
    // 0x800018D8: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x800018DC: addiu       $a0, $a0, 0x31C
    ctx->r4 = ADD32(ctx->r4, 0X31C);
    // 0x800018E0: jal         0x80002B30
    // 0x800018E4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    boot_bzero(rdram, ctx);
        goto after_14;
    // 0x800018E4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_14:
L_800018E8:
    // 0x800018E8: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x800018EC: lw          $t9, 0x300($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X300);
    // 0x800018F0: bne         $t9, $zero, L_8000190C
    if (ctx->r25 != 0) {
        // 0x800018F4: nop
    
            goto L_8000190C;
    }
    // 0x800018F4: nop

    // 0x800018F8: lui         $t2, 0x2F5
    ctx->r10 = S32(0X2F5 << 16);
    // 0x800018FC: ori         $t2, $t2, 0xB2D2
    ctx->r10 = ctx->r10 | 0XB2D2;
    // 0x80001900: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80001904: b           L_80001944
    // 0x80001908: sw          $t2, 0x4258($at)
    MEM_W(0X4258, ctx->r1) = ctx->r10;
        goto L_80001944;
    // 0x80001908: sw          $t2, 0x4258($at)
    MEM_W(0X4258, ctx->r1) = ctx->r10;
L_8000190C:
    // 0x8000190C: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x80001910: lw          $t1, 0x300($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X300);
    // 0x80001914: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80001918: bne         $t1, $at, L_80001934
    if (ctx->r9 != ctx->r1) {
        // 0x8000191C: nop
    
            goto L_80001934;
    }
    // 0x8000191C: nop

    // 0x80001920: lui         $t3, 0x2E6
    ctx->r11 = S32(0X2E6 << 16);
    // 0x80001924: ori         $t3, $t3, 0x25C
    ctx->r11 = ctx->r11 | 0X25C;
    // 0x80001928: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000192C: b           L_80001944
    // 0x80001930: sw          $t3, 0x4258($at)
    MEM_W(0X4258, ctx->r1) = ctx->r11;
        goto L_80001944;
    // 0x80001930: sw          $t3, 0x4258($at)
    MEM_W(0X4258, ctx->r1) = ctx->r11;
L_80001934:
    // 0x80001934: lui         $t5, 0x2E6
    ctx->r13 = S32(0X2E6 << 16);
    // 0x80001938: ori         $t5, $t5, 0xD354
    ctx->r13 = ctx->r13 | 0XD354;
    // 0x8000193C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80001940: sw          $t5, 0x4258($at)
    MEM_W(0X4258, ctx->r1) = ctx->r13;
L_80001944:
    // 0x80001944: jal         0x80002BD0
    // 0x80001948: nop

    boot___osGetCause(rdram, ctx);
        goto after_15;
    // 0x80001948: nop

    after_15:
    // 0x8000194C: andi        $t4, $v0, 0x1000
    ctx->r12 = ctx->r2 & 0X1000;
    // 0x80001950: beq         $t4, $zero, L_80001960
    if (ctx->r12 == 0) {
        // 0x80001954: nop
    
            goto L_80001960;
    }
    // 0x80001954: nop

L_80001958:
    // 0x80001958: b           L_80001958
    pause_self(rdram);
    // 0x8000195C: nop

L_80001960:
    // 0x80001960: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80001964: lui         $t6, 0xA450
    ctx->r14 = S32(0XA450 << 16);
    // 0x80001968: nop

    // 0x8000196C: addiu       $t8, $zero, 0x3FFF
    ctx->r24 = ADD32(0, 0X3FFF);
    // 0x80001970: lui         $t0, 0xA450
    ctx->r8 = S32(0XA450 << 16);
    // 0x80001974: nop

    // 0x80001978: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x8000197C: lui         $t2, 0xA450
    ctx->r10 = S32(0XA450 << 16);
    // 0x80001980: nop

    // 0x80001984: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80001988: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000198C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80001990: jr          $ra
    // 0x80001994: nop

    return;
    // 0x80001994: nop

;}
RECOMP_FUNC void boot___createSpeedParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osPiRawStartDma(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    tooie_boot_pi_raw_start_dma(rdram, ctx); return;
    // 0x80001A40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001A44: lui         $v1, 0xA460
    ctx->r3 = S32(0XA460 << 16);
    // 0x80001A48: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80001A4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001A50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80001A54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80001A58: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80001A5C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80001A60: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x80001A64: beq         $t6, $zero, L_80001A7C
    if (ctx->r14 == 0) {
        // 0x80001A68: nop
    
            goto L_80001A7C;
    }
    // 0x80001A68: nop

    // 0x80001A6C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_80001A70:
    // 0x80001A70: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x80001A74: bnel        $t7, $zero, L_80001A70
    if (ctx->r15 != 0) {
        // 0x80001A78: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_80001A70;
    }
    goto skip_0;
    // 0x80001A78: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_0:
L_80001A7C:
    // 0x80001A7C: jal         0x80002D50
    // 0x80001A80: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    boot_osVirtualToPhysical(rdram, ctx);
        goto after_0;
    // 0x80001A80: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x80001A84: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80001A88: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80001A8C: lui         $t8, 0xA460
    ctx->r24 = S32(0XA460 << 16);
    // 0x80001A90: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
    // 0x80001A94: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x80001A98: lw          $t9, 0x308($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X308);
    // 0x80001A9C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80001AA0: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80001AA4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80001AA8: or          $t1, $t9, $t0
    ctx->r9 = ctx->r25 | ctx->r8;
    // 0x80001AAC: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x80001AB0: lui         $t3, 0xA460
    ctx->r11 = S32(0XA460 << 16);
    // 0x80001AB4: beq         $v1, $zero, L_80001AD0
    if (ctx->r3 == 0) {
        // 0x80001AB8: sw          $t2, 0x4($t3)
        MEM_W(0X4, ctx->r11) = ctx->r10;
            goto L_80001AD0;
    }
    // 0x80001AB8: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x80001ABC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80001AC0: beq         $v1, $at, L_80001AE0
    if (ctx->r3 == ctx->r1) {
        // 0x80001AC4: addiu       $t6, $a3, -0x1
        ctx->r14 = ADD32(ctx->r7, -0X1);
            goto L_80001AE0;
    }
    // 0x80001AC4: addiu       $t6, $a3, -0x1
    ctx->r14 = ADD32(ctx->r7, -0X1);
    // 0x80001AC8: b           L_80001AF8
    // 0x80001ACC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80001AF8;
    // 0x80001ACC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80001AD0:
    // 0x80001AD0: addiu       $t4, $a3, -0x1
    ctx->r12 = ADD32(ctx->r7, -0X1);
    // 0x80001AD4: lui         $t5, 0xA460
    ctx->r13 = S32(0XA460 << 16);
    // 0x80001AD8: b           L_80001AF4
    // 0x80001ADC: sw          $t4, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r12;
        goto L_80001AF4;
    // 0x80001ADC: sw          $t4, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r12;
L_80001AE0:
    // 0x80001AE0: lui         $t7, 0xA460
    ctx->r15 = S32(0XA460 << 16);
    // 0x80001AE4: b           L_80001AF4
    // 0x80001AE8: sw          $t6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r14;
        goto L_80001AF4;
    // 0x80001AE8: sw          $t6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r14;
    // 0x80001AEC: b           L_80001AF8
    // 0x80001AF0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80001AF8;
    // 0x80001AF0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80001AF4:
    // 0x80001AF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80001AF8:
    // 0x80001AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001B00: jr          $ra
    // 0x80001B04: nop

    return;
    // 0x80001B04: nop

    // 0x80001B08: nop

    // 0x80001B0C: nop

;}
RECOMP_FUNC void boot_osPiGetStatus(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osDisableInt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osRestoreInt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osSetSR(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osGetSR(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osSetFpcCsr(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osSiRawReadIo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osSiRawWriteIo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osExceptionPreamble(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osEnqueueAndYield(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osEnqueueThread(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osPopThread(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osDispatchThread(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osCleanupThread(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot_osWritebackDCache(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot_osInvalICache(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot_osUnmapTLBAll(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot_osMapTLBRdb(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___ull_rshift(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___ull_rem(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___ull_div(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___ll_lshift(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___ll_rem(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___ll_div(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___ll_mul(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___ull_divremi(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___ll_mod(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___ll_rshift(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot_bzero(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002B30: slti        $at, $a1, 0xC
    ctx->r1 = SIGNED(ctx->r5) < 0XC ? 1 : 0;
    // 0x80002B34: bne         $at, $zero, L_80002BAC
    if (ctx->r1 != 0) {
        // 0x80002B38: negu        $v1, $a0
        ctx->r3 = SUB32(0, ctx->r4);
            goto L_80002BAC;
    }
    // 0x80002B38: negu        $v1, $a0
    ctx->r3 = SUB32(0, ctx->r4);
    // 0x80002B3C: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x80002B40: beq         $v1, $zero, L_80002B50
    if (ctx->r3 == 0) {
        // 0x80002B44: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_80002B50;
    }
    // 0x80002B44: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80002B48: swl         $zero, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, 0);
    // 0x80002B4C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
L_80002B50:
    // 0x80002B50: addiu       $at, $zero, -0x20
    ctx->r1 = ADD32(0, -0X20);
    // 0x80002B54: and         $a3, $a1, $at
    ctx->r7 = ctx->r5 & ctx->r1;
    // 0x80002B58: beq         $a3, $zero, L_80002B8C
    if (ctx->r7 == 0) {
        // 0x80002B5C: subu        $a1, $a1, $a3
        ctx->r5 = SUB32(ctx->r5, ctx->r7);
            goto L_80002B8C;
    }
    // 0x80002B5C: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x80002B60: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_80002B64:
    // 0x80002B64: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80002B68: sw          $zero, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = 0;
    // 0x80002B6C: sw          $zero, -0x1C($a0)
    MEM_W(-0X1C, ctx->r4) = 0;
    // 0x80002B70: sw          $zero, -0x18($a0)
    MEM_W(-0X18, ctx->r4) = 0;
    // 0x80002B74: sw          $zero, -0x14($a0)
    MEM_W(-0X14, ctx->r4) = 0;
    // 0x80002B78: sw          $zero, -0x10($a0)
    MEM_W(-0X10, ctx->r4) = 0;
    // 0x80002B7C: sw          $zero, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = 0;
    // 0x80002B80: sw          $zero, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = 0;
    // 0x80002B84: bne         $a0, $a3, L_80002B64
    if (ctx->r4 != ctx->r7) {
        // 0x80002B88: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_80002B64;
    }
    // 0x80002B88: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
L_80002B8C:
    // 0x80002B8C: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80002B90: and         $a3, $a1, $at
    ctx->r7 = ctx->r5 & ctx->r1;
    // 0x80002B94: beq         $a3, $zero, L_80002BAC
    if (ctx->r7 == 0) {
        // 0x80002B98: subu        $a1, $a1, $a3
        ctx->r5 = SUB32(ctx->r5, ctx->r7);
            goto L_80002BAC;
    }
    // 0x80002B98: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x80002B9C: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_80002BA0:
    // 0x80002BA0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80002BA4: bne         $a0, $a3, L_80002BA0
    if (ctx->r4 != ctx->r7) {
        // 0x80002BA8: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_80002BA0;
    }
    // 0x80002BA8: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
L_80002BAC:
    // 0x80002BAC: blez        $a1, L_80002BC4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80002BB0: nop
    
            goto L_80002BC4;
    }
    // 0x80002BB0: nop

    // 0x80002BB4: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
L_80002BB8:
    // 0x80002BB8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80002BBC: bne         $a0, $a1, L_80002BB8
    if (ctx->r4 != ctx->r5) {
        // 0x80002BC0: sb          $zero, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = 0;
            goto L_80002BB8;
    }
    // 0x80002BC0: sb          $zero, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = 0;
L_80002BC4:
    // 0x80002BC4: jr          $ra
    // 0x80002BC8: nop

    return;
    // 0x80002BC8: nop

    // 0x80002BCC: nop

;}
RECOMP_FUNC void boot___osGetCause(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot_osCreatePiManager(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot_osVirtualToPhysical(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osDequeueThread(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osSiDeviceBusy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot_osSetEventMesg(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot_osSetIntMask(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot_osDestroyThread(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot_osCreateMesgQueue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osPiCreateAccessQueue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot_osGetThreadPri(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot_osSetThreadPri(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osEPiRawStartDma(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot_osCreateThread(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osDevMgrMain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot_osStartThread(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osProbeTLB(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot_osSendMesg(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot_osRecvMesg(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osResetGlobalIntMask(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osEPiRawWriteIo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osEPiRawReadIo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot___osSetGlobalIntMask(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void boot_osYieldThread(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_80012030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80012034: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80012038: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8001203C: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80012040: addiu       $a0, $a0, 0x3380
    ctx->r4 = ADD32(ctx->r4, 0X3380);
    // 0x80012044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80012048: addiu       $t6, $t6, 0x15C0
    ctx->r14 = ADD32(ctx->r14, 0X15C0);
    // 0x8001204C: jal         0x8002D6E0
    // 0x80012050: subu        $a1, $t6, $a0
    ctx->r5 = SUB32(ctx->r14, ctx->r4);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x80012050: subu        $a1, $t6, $a0
    ctx->r5 = SUB32(ctx->r14, ctx->r4);
    after_0:
    // 0x80012054: jal         0x8002D780
    // 0x80012058: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_1;
    // 0x80012058: nop

    after_1:
    // 0x8001205C: jal         0x8002D7B0
    // 0x80012060: nop

    osInitialize_recomp(rdram, ctx);
        goto after_2;
    // 0x80012060: nop

    after_2:
    // 0x80012064: jal         0x80013620
    // 0x80012068: nop

    func_80013620(rdram, ctx);
        goto after_3;
    // 0x80012068: nop

    after_3:
    // 0x8001206C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80012070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80012074: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001207C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001207C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80012080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80012084: jal         0x800D5E74
    // 0x80012088: nop

    func_800D5E74(rdram, ctx);
        goto after_0;
    // 0x80012088: nop

    after_0:
    // 0x8001208C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80012090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80012094: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001209C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001209C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800120A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800120A4: jal         0x8001A2B0
    // 0x800120A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8001A2B0(rdram, ctx);
        goto after_0;
    // 0x800120A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800120AC: jal         0x800155BC
    // 0x800120B0: nop

    func_800155BC(rdram, ctx);
        goto after_1;
    // 0x800120B0: nop

    after_1:
    // 0x800120B4: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x800120B8: lw          $t6, 0x3380($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3380);
    // 0x800120BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800120C0: bne         $t6, $at, L_800120D0
    if (ctx->r14 != ctx->r1) {
        // 0x800120C4: nop
    
            goto L_800120D0;
    }
    // 0x800120C4: nop

    // 0x800120C8: jal         0x800A7B24
    // 0x800120CC: nop

    func_800A7B24(rdram, ctx);
        goto after_2;
    // 0x800120CC: nop

    after_2:
L_800120D0:
    // 0x800120D0: jal         0x8001207C
    // 0x800120D4: nop

    func_8001207C(rdram, ctx);
        goto after_3;
    // 0x800120D4: nop

    after_3:
    // 0x800120D8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800120DC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800120E0: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800120E4: sw          $t7, 0x3380($at)
    MEM_W(0X3380, ctx->r1) = ctx->r15;
    // 0x800120E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800120EC: bnel        $t7, $at, L_80012100
    if (ctx->r15 != ctx->r1) {
        // 0x800120F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80012100;
    }
    goto skip_0;
    // 0x800120F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800120F4: jal         0x800A7BB8
    // 0x800120F8: lw          $a0, 0x59CC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X59CC);
    func_800A7BB8(rdram, ctx);
        goto after_4;
    // 0x800120F8: lw          $a0, 0x59CC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X59CC);
    after_4:
    // 0x800120FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80012100:
    // 0x80012100: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80012104: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001210C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001210C: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x80012110: lw          $t6, 0x59C8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X59C8);
    // 0x80012114: jr          $ra
    // 0x80012118: and         $v0, $t6, $a0
    ctx->r2 = ctx->r14 & ctx->r4;
    return;
    // 0x80012118: and         $v0, $t6, $a0
    ctx->r2 = ctx->r14 & ctx->r4;
;}
RECOMP_FUNC void func_8001211C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001211C: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x80012120: jr          $ra
    // 0x80012124: lw          $v0, 0x59C8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X59C8);
    return;
    // 0x80012124: lw          $v0, 0x59C8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X59C8);
;}
RECOMP_FUNC void func_80012128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012128: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x8001212C: jr          $ra
    // 0x80012130: sw          $zero, 0x59C8($at)
    MEM_W(0X59C8, ctx->r1) = 0;
    return;
    // 0x80012130: sw          $zero, 0x59C8($at)
    MEM_W(0X59C8, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80012134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012134: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80012138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001213C: jal         0x80087890
    // 0x80012140: nop

    _cosection_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80012140: nop

    after_0:
    // 0x80012144: jal         0x8001253C
    // 0x80012148: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8001253C(rdram, ctx);
        goto after_1;
    // 0x80012148: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8001214C: jal         0x80012520
    // 0x80012150: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80012520(rdram, ctx);
        goto after_2;
    // 0x80012150: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80012154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80012158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001215C: jr          $ra
    // 0x80012160: nop

    return;
    // 0x80012160: nop

;}
RECOMP_FUNC void func_80012164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012164: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80012168: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001216C: jal         0x80087888
    // 0x80012170: nop

    _cosection_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80012170: nop

    after_0:
    // 0x80012174: jal         0x8001253C
    // 0x80012178: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8001253C(rdram, ctx);
        goto after_1;
    // 0x80012178: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8001217C: jal         0x80012520
    // 0x80012180: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80012520(rdram, ctx);
        goto after_2;
    // 0x80012180: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80012184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80012188: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001218C: jr          $ra
    // 0x80012190: nop

    return;
    // 0x80012190: nop

;}
RECOMP_FUNC void func_80012194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012194: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80012198: lw          $t6, -0x166C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X166C);
    // 0x8001219C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800121A0: addiu       $t7, $t7, 0x7390
    ctx->r15 = ADD32(ctx->r15, 0X7390);
    // 0x800121A4: jr          $ra
    // 0x800121A8: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
    return;
    // 0x800121A8: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
;}
RECOMP_FUNC void func_800121AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800121AC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800121B0: lui         $t7, 0x8001
    ctx->r15 = S32(0X8001 << 16);
    // 0x800121B4: addiu       $t7, $t7, 0x2030
    ctx->r15 = ADD32(ctx->r15, 0X2030);
    // 0x800121B8: addiu       $t6, $t6, 0x7390
    ctx->r14 = ADD32(ctx->r14, 0X7390);
    // 0x800121BC: lui         $at, 0xFFF2
    ctx->r1 = S32(0XFFF2 << 16);
    // 0x800121C0: ori         $at, $at, 0x1DD0
    ctx->r1 = ctx->r1 | 0X1DD0;
    // 0x800121C4: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
    // 0x800121C8: jr          $ra
    // 0x800121CC: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    return;
    // 0x800121CC: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
;}
RECOMP_FUNC void func_800121D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800121D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800121D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800121D8: jal         0x80012194
    // 0x800121DC: nop

    func_80012194(rdram, ctx);
        goto after_0;
    // 0x800121DC: nop

    after_0:
    // 0x800121E0: jal         0x8001E830
    // 0x800121E4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8001E830(rdram, ctx);
        goto after_1;
    // 0x800121E4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800121E8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800121EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800121F0: addu        $v1, $v0, $a1
    ctx->r3 = ADD32(ctx->r2, ctx->r5);
    // 0x800121F4: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x800121F8: beq         $t6, $zero, L_8001220C
    if (ctx->r14 == 0) {
        // 0x800121FC: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_8001220C;
    }
    // 0x800121FC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_80012200:
    // 0x80012200: andi        $t7, $v1, 0xF
    ctx->r15 = ctx->r3 & 0XF;
    // 0x80012204: bnel        $t7, $zero, L_80012200
    if (ctx->r15 != 0) {
        // 0x80012208: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_80012200;
    }
    goto skip_0;
    // 0x80012208: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    skip_0:
L_8001220C:
    // 0x8001220C: jr          $ra
    // 0x80012210: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80012210: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80012214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012214: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80012218: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8001221C: jal         0x8002DB00
    // 0x80012220: nop

    osGetMemSize_recomp(rdram, ctx);
        goto after_0;
    // 0x80012220: nop

    after_0:
    // 0x80012224: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80012228: jal         0x8001DDF0
    // 0x8001222C: sw          $v0, 0x59D0($at)
    MEM_W(0X59D0, ctx->r1) = ctx->r2;
    func_8001DDF0(rdram, ctx);
        goto after_1;
    // 0x8001222C: sw          $v0, 0x59D0($at)
    MEM_W(0X59D0, ctx->r1) = ctx->r2;
    after_1:
    // 0x80012230: jal         0x8001E840
    // 0x80012234: nop

    init_crc_check(rdram, ctx);
        goto after_2;
    // 0x80012234: nop

    after_2:
    // 0x80012238: jal         0x80014FE8
    // 0x8001223C: nop

    func_80014FE8(rdram, ctx);
        goto after_3;
    // 0x8001223C: nop

    after_3:
    // 0x80012240: jal         0x8001E7E8
    // 0x80012244: nop

    func_8001E7E8(rdram, ctx);
        goto after_4;
    // 0x80012244: nop

    after_4:
    // 0x80012248: jal         0x8001C1C0
    // 0x8001224C: nop

    func_8001C1C0(rdram, ctx);
        goto after_5;
    // 0x8001224C: nop

    after_5:
    // 0x80012250: lui         $t6, 0x1F0
    ctx->r14 = S32(0X1F0 << 16);
    // 0x80012254: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80012258: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8001225C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80012260: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80012264: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80012268: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8001226C: addiu       $t2, $t2, 0x7390
    ctx->r10 = ADD32(ctx->r10, 0X7390);
    // 0x80012270: addiu       $t1, $t1, 0x6730
    ctx->r9 = ADD32(ctx->r9, 0X6730);
    // 0x80012274: addiu       $t0, $t0, 0x6730
    ctx->r8 = ADD32(ctx->r8, 0X6730);
    // 0x80012278: addiu       $t9, $t9, 0x7C60
    ctx->r25 = ADD32(ctx->r25, 0X7C60);
    // 0x8001227C: addiu       $t8, $t8, 0x7C60
    ctx->r24 = ADD32(ctx->r24, 0X7C60);
    // 0x80012280: addiu       $t7, $t7, 0x15C0
    ctx->r15 = ADD32(ctx->r15, 0X15C0);
    // 0x80012284: addiu       $t6, $t6, 0x20
    ctx->r14 = ADD32(ctx->r14, 0X20);
    // 0x80012288: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8001228C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x80012290: lui         $a3, 0x1E6
    ctx->r7 = S32(0X1E6 << 16);
    // 0x80012294: addiu       $a3, $a3, -0x5150
    ctx->r7 = ADD32(ctx->r7, -0X5150);
    // 0x80012298: addiu       $a2, $a2, 0x7390
    ctx->r6 = ADD32(ctx->r6, 0X7390);
    // 0x8001229C: addiu       $a1, $a1, 0x15C0
    ctx->r5 = ADD32(ctx->r5, 0X15C0);
    // 0x800122A0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800122A4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800122A8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800122AC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800122B0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x800122B4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x800122B8: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x800122BC: jal         0x80019EC0
    // 0x800122C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80019EC0(rdram, ctx);
        goto after_6;
    // 0x800122C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    tooie_boot_register_core2(rdram, ctx);
    // 0x800122C4: jal         0x8001A8B4
    // 0x800122C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A8B4(rdram, ctx);
        goto after_7;
    // 0x800122C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x800122CC: jal         0x80014E6C
    // 0x800122D0: nop

    func_80014E6C(rdram, ctx);
        goto after_8;
    // 0x800122D0: nop

    after_8:
    // 0x800122D4: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x800122D8: addiu       $v0, $v0, 0x3388
    ctx->r2 = ADD32(ctx->r2, 0X3388);
    // 0x800122DC: lui         $t3, 0x102
    ctx->r11 = S32(0X102 << 16);
    // 0x800122E0: lui         $t4, 0x506
    ctx->r12 = S32(0X506 << 16);
    // 0x800122E4: ori         $t3, $t3, 0x304
    ctx->r11 = ctx->r11 | 0X304;
    // 0x800122E8: ori         $t4, $t4, 0x708
    ctx->r12 = ctx->r12 | 0X708;
    // 0x800122EC: sw          $t3, 0x400($v0)
    MEM_W(0X400, ctx->r2) = ctx->r11;
    // 0x800122F0: sw          $t4, 0x404($v0)
    MEM_W(0X404, ctx->r2) = ctx->r12;
    // 0x800122F4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800122F8: sw          $t3, 0x59D8($at)
    MEM_W(0X59D8, ctx->r1) = ctx->r11;
    // 0x800122FC: jal         0x801168F0
    // 0x80012300: sw          $t4, 0x59DC($at)
    MEM_W(0X59DC, ctx->r1) = ctx->r12;
    func_801168F0(rdram, ctx);
        goto after_9;
    // 0x80012300: sw          $t4, 0x59DC($at)
    MEM_W(0X59DC, ctx->r1) = ctx->r12;
    after_9:
    // 0x80012304: jal         0x800815CC
    // 0x80012308: nop

    func_800815CC(rdram, ctx);
        goto after_10;
    // 0x80012308: nop

    after_10:
    // 0x8001230C: jal         0x8001A080
    // 0x80012310: nop

    func_8001A080(rdram, ctx);
        goto after_11;
    // 0x80012310: nop

    after_11:
    // 0x80012314: jal         0x8001A2D0
    // 0x80012318: nop

    func_8001A2D0(rdram, ctx);
        goto after_12;
    // 0x80012318: nop

    after_12:
    // 0x8001231C: jal         0x800121D0
    // 0x80012320: nop

    func_800121D0(rdram, ctx);
        goto after_13;
    // 0x80012320: nop

    after_13:
    // 0x80012324: jal         0x80016734
    // 0x80012328: nop

    func_80016734(rdram, ctx);
        goto after_14;
    // 0x80012328: nop

    after_14:
    // 0x8001232C: jal         0x800184E8
    // 0x80012330: nop

    func_800184E8(rdram, ctx);
        goto after_15;
    // 0x80012330: nop

    after_15:
    // 0x80012334: jal         0x800125B0
    // 0x80012338: nop

    func_800125B0(rdram, ctx);
        goto after_16;
    // 0x80012338: nop

    after_16:
    // 0x8001233C: jal         0x8001A3A0
    // 0x80012340: nop

    func_8001A3A0(rdram, ctx);
        goto after_17;
    // 0x80012340: nop

    after_17:
    // 0x80012344: jal         0x800D66AC
    // 0x80012348: nop

    func_800D66AC(rdram, ctx);
        goto after_18;
    // 0x80012348: nop

    after_18:
    // 0x8001234C: jal         0x800D5D70
    // 0x80012350: nop

    func_800D5D70(rdram, ctx);
        goto after_19;
    // 0x80012350: nop

    after_19:
    // 0x80012354: jal         0x800E692C
    // 0x80012358: nop

    func_800E692C(rdram, ctx);
        goto after_20;
    // 0x80012358: nop

    after_20:
    // 0x8001235C: jal         0x80088310
    // 0x80012360: nop

    _gcstatusDll_entrypoint_0(rdram, ctx);
        goto after_21;
    // 0x80012360: nop

    after_21:
    // 0x80012364: jal         0x800C929C
    // 0x80012368: nop

    func_800C929C(rdram, ctx);
        goto after_22;
    // 0x80012368: nop

    after_22:
    // 0x8001236C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80012370: sw          $zero, 0x3380($at)
    MEM_W(0X3380, ctx->r1) = 0;
    // 0x80012374: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80012378: jal         0x800A5BE0
    // 0x8001237C: sw          $zero, 0x59C8($at)
    MEM_W(0X59C8, ctx->r1) = 0;
    func_800A5BE0(rdram, ctx);
        goto after_23;
    // 0x8001237C: sw          $zero, 0x59C8($at)
    MEM_W(0X59C8, ctx->r1) = 0;
    after_23:
    // 0x80012380: jal         0x800D740C
    // 0x80012384: nop

    func_800D740C(rdram, ctx);
        goto after_24;
    // 0x80012384: nop

    after_24:
    // 0x80012388: jal         0x80087890
    // 0x8001238C: nop

    _cosection_entrypoint_1(rdram, ctx);
        goto after_25;
    // 0x8001238C: nop

    after_25:
    // 0x80012390: jal         0x8001253C
    // 0x80012394: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8001253C(rdram, ctx);
        goto after_26;
    // 0x80012394: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_26:
    // 0x80012398: jal         0x8001209C
    // 0x8001239C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001209C(rdram, ctx);
        goto after_27;
    // 0x8001239C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_27:
    // 0x800123A0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800123A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800123A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800123B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800123B0: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x800123B4: jr          $ra
    // 0x800123B8: lw          $v0, 0x59D0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X59D0);
    return;
    // 0x800123B8: lw          $v0, 0x59D0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X59D0);
;}
RECOMP_FUNC void func_800123BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800123BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800123C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800123C4: jal         0x800A7D84
    // 0x800123C8: nop

    func_800A7D84(rdram, ctx);
        goto after_0;
    // 0x800123C8: nop

    after_0:
    // 0x800123CC: beq         $v0, $zero, L_800123DC
    if (ctx->r2 == 0) {
        // 0x800123D0: nop
    
            goto L_800123DC;
    }
    // 0x800123D0: nop

    // 0x800123D4: jal         0x800A7840
    // 0x800123D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800A7840(rdram, ctx);
        goto after_1;
    // 0x800123D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
L_800123DC:
    // 0x800123DC: jal         0x800A5D1C
    // 0x800123E0: nop

    func_800A5D1C(rdram, ctx);
        goto after_2;
    // 0x800123E0: nop

    after_2:
    // 0x800123E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800123E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800123EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800123F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800123F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800123F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800123FC: jal         0x8001207C
    // 0x80012400: nop

    func_8001207C(rdram, ctx);
        goto after_0;
    // 0x80012400: nop

    after_0:
    // 0x80012404: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x80012408: lw          $t6, 0x3380($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3380);
    // 0x8001240C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80012410: bne         $t6, $at, L_80012428
    if (ctx->r14 != ctx->r1) {
        // 0x80012414: nop
    
            goto L_80012428;
    }
    // 0x80012414: nop

    // 0x80012418: jal         0x800A8184
    // 0x8001241C: nop

    func_800A8184(rdram, ctx);
        goto after_1;
    // 0x8001241C: nop

    after_1:
    // 0x80012420: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80012424: beq         $v0, $at, L_8001243C
    if (ctx->r2 == ctx->r1) {
        // 0x80012428: lui         $v0, 0x8004
        ctx->r2 = S32(0X8004 << 16);
            goto L_8001243C;
    }
L_80012428:
    // 0x80012428: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x8001242C: addiu       $v0, $v0, 0x59C8
    ctx->r2 = ADD32(ctx->r2, 0X59C8);
    // 0x80012430: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80012434: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80012438: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_8001243C:
    // 0x8001243C: jal         0x80012530
    // 0x80012440: nop

    func_80012530(rdram, ctx);
        goto after_2;
    // 0x80012440: nop

    after_2:
    // 0x80012444: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80012448: bne         $v0, $at, L_80012458
    if (ctx->r2 != ctx->r1) {
        // 0x8001244C: nop
    
            goto L_80012458;
    }
    // 0x8001244C: nop

    // 0x80012450: jal         0x800A7D30
    // 0x80012454: nop

    func_800A7D30(rdram, ctx);
        goto after_3;
    // 0x80012454: nop

    after_3:
L_80012458:
    // 0x80012458: jal         0x8001608C
    // 0x8001245C: nop

    func_8001608C(rdram, ctx);
        goto after_4;
    // 0x8001245C: nop

    after_4:
    // 0x80012460: jal         0x80018444
    // 0x80012464: nop

    func_80018444(rdram, ctx);
        goto after_5;
    // 0x80012464: nop

    after_5:
    // 0x80012468: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x8001246C: lw          $t9, 0x3380($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3380);
    // 0x80012470: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80012474: bne         $t9, $at, L_80012484
    if (ctx->r25 != ctx->r1) {
        // 0x80012478: nop
    
            goto L_80012484;
    }
    // 0x80012478: nop

    // 0x8001247C: jal         0x800123BC
    // 0x80012480: nop

    func_800123BC(rdram, ctx);
        goto after_6;
    // 0x80012480: nop

    after_6:
L_80012484:
    // 0x80012484: jal         0x8008160C
    // 0x80012488: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8008160C(rdram, ctx);
        goto after_7;
    // 0x80012488: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x8001248C: jal         0x8001E010
    // 0x80012490: nop

    func_8001E010(rdram, ctx);
        goto after_8;
    // 0x80012490: nop

    after_8:
    // 0x80012494: jal         0x800D9004
    // 0x80012498: nop

    func_800D9004(rdram, ctx);
        goto after_9;
    // 0x80012498: nop

    after_9:
    // 0x8001249C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800124A0: lwc1        $f4, 0x16A0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X16A0);
    // 0x800124A4: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x800124A8: nop

    // 0x800124AC: bc1f        L_800124BC
    if (!c1cs) {
        // 0x800124B0: nop
    
            goto L_800124BC;
    }
    // 0x800124B0: nop

    // 0x800124B4: jal         0x8001EAB4
    // 0x800124B8: nop

    do_crc_check(rdram, ctx);
        goto after_10;
    // 0x800124B8: nop

    after_10:
L_800124BC:
    // 0x800124BC: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x800124C0: lw          $v0, 0x3384($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3384);
    // 0x800124C4: beql        $v0, $zero, L_800124E0
    if (ctx->r2 == 0) {
        // 0x800124C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800124E0;
    }
    goto skip_0;
    // 0x800124C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800124CC: jal         0x8001209C
    // 0x800124D0: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    func_8001209C(rdram, ctx);
        goto after_11;
    // 0x800124D0: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    after_11:
    // 0x800124D4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800124D8: sw          $zero, 0x3384($at)
    MEM_W(0X3384, ctx->r1) = 0;
    // 0x800124DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800124E0:
    // 0x800124E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800124E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800124EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800124EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800124F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800124F4: jal         0x80012214
    // 0x800124F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80012214(rdram, ctx);
        goto after_0;
    // 0x800124F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
L_800124FC:
    // 0x800124FC: jal         0x800123F4
    // 0x80012500: nop

    func_800123F4(rdram, ctx);
        goto after_1;
    // 0x80012500: nop

    after_1:
    // 0x80012504: b           L_800124FC
    // 0x80012508: nop

        goto L_800124FC;
    // 0x80012508: nop

    // 0x8001250C: nop

    // 0x80012510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80012514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80012518: jr          $ra
    return;
;}
RECOMP_FUNC void func_80012520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012520: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x80012524: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80012528: jr          $ra
    // 0x8001252C: sw          $t6, 0x3384($at)
    MEM_W(0X3384, ctx->r1) = ctx->r14;
    return;
    // 0x8001252C: sw          $t6, 0x3384($at)
    MEM_W(0X3384, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80012530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012530: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x80012534: jr          $ra
    // 0x80012538: lw          $v0, 0x3380($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3380);
    return;
    // 0x80012538: lw          $v0, 0x3380($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3380);
;}
RECOMP_FUNC void func_8001253C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001253C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80012540: jr          $ra
    // 0x80012544: sw          $a0, 0x59CC($at)
    MEM_W(0X59CC, ctx->r1) = ctx->r4;
    return;
    // 0x80012544: sw          $a0, 0x59CC($at)
    MEM_W(0X59CC, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80012548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012548: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001254C: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x80012550: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80012554: addiu       $t6, $t6, 0x5788
    ctx->r14 = ADD32(ctx->r14, 0X5788);
    // 0x80012558: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8001255C: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x80012560: lui         $a3, 0x8001
    ctx->r7 = S32(0X8001 << 16);
    // 0x80012564: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x80012568: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8001256C: addiu       $a3, $a3, 0x24EC
    ctx->r7 = ADD32(ctx->r7, 0X24EC);
    // 0x80012570: addiu       $a1, $a1, 0x5938
    ctx->r5 = ADD32(ctx->r5, 0X5938);
    // 0x80012574: addiu       $a0, $a0, 0x5788
    ctx->r4 = ADD32(ctx->r4, 0X5788);
    // 0x80012578: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8001257C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80012580: jal         0x8001DD28
    // 0x80012584: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8001DD28(rdram, ctx);
        goto after_0;
    // 0x80012584: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x80012588: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001258C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80012590: jr          $ra
    return;
;}
RECOMP_FUNC void func_80012598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012598: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x8001259C: jr          $ra
    // 0x800125A0: addiu       $v0, $v0, 0x5788
    ctx->r2 = ADD32(ctx->r2, 0X5788);
    return;
    // 0x800125A0: addiu       $v0, $v0, 0x5788
    ctx->r2 = ADD32(ctx->r2, 0X5788);
;}
RECOMP_FUNC void func_800125B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800125B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800125B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800125B8: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800125BC: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x800125C0: ori         $a1, $a1, 0x2A00
    ctx->r5 = ctx->r5 | 0X2A00;
    // 0x800125C4: jal         0x8002D6E0
    // 0x800125C8: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x800125C8: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    after_0:
    // 0x800125CC: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x800125D0: addiu       $v0, $v0, 0x6A78
    ctx->r2 = ADD32(ctx->r2, 0X6A78);
    // 0x800125D4: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x800125D8: addiu       $t6, $t6, 0x6A88
    ctx->r14 = ADD32(ctx->r14, 0X6A88);
    // 0x800125DC: lui         $t7, 0x2
    ctx->r15 = S32(0X2 << 16);
    // 0x800125E0: ori         $t7, $t7, 0x2A00
    ctx->r15 = ctx->r15 | 0X2A00;
    // 0x800125E4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800125E8: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x800125EC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800125F0: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x800125F4: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x800125F8: lw          $v1, 0x300($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X300);
    // 0x800125FC: lui         $t9, 0x2E6
    ctx->r25 = S32(0X2E6 << 16);
    // 0x80012600: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80012604: beq         $v1, $zero, L_80012624
    if (ctx->r3 == 0) {
        // 0x80012608: ori         $t9, $t9, 0xD354
        ctx->r25 = ctx->r25 | 0XD354;
            goto L_80012624;
    }
    // 0x80012608: ori         $t9, $t9, 0xD354
    ctx->r25 = ctx->r25 | 0XD354;
    // 0x8001260C: beq         $v1, $at, L_80012624
    if (ctx->r3 == ctx->r1) {
        // 0x80012610: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80012624;
    }
    // 0x80012610: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80012614: beq         $v1, $at, L_80012630
    if (ctx->r3 == ctx->r1) {
        // 0x80012618: lui         $t0, 0x2E6
        ctx->r8 = S32(0X2E6 << 16);
            goto L_80012630;
    }
    // 0x80012618: lui         $t0, 0x2E6
    ctx->r8 = S32(0X2E6 << 16);
    // 0x8001261C: b           L_8001263C
    // 0x80012620: nop

        goto L_8001263C;
    // 0x80012620: nop

L_80012624:
    // 0x80012624: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80012628: b           L_8001263C
    // 0x8001262C: sw          $t9, 0x1398($at)
    MEM_W(0X1398, ctx->r1) = ctx->r25;
        goto L_8001263C;
    // 0x8001262C: sw          $t9, 0x1398($at)
    MEM_W(0X1398, ctx->r1) = ctx->r25;
L_80012630:
    // 0x80012630: ori         $t0, $t0, 0x25C
    ctx->r8 = ctx->r8 | 0X25C;
    // 0x80012634: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80012638: sw          $t0, 0x1398($at)
    MEM_W(0X1398, ctx->r1) = ctx->r8;
L_8001263C:
    // 0x8001263C: jal         0x8001268C
    // 0x80012640: nop

    func_8001268C(rdram, ctx);
        goto after_1;
    // 0x80012640: nop

    after_1:
    // 0x80012644: jal         0x800DC380
    // 0x80012648: nop

    func_800DC380(rdram, ctx);
        goto after_2;
    // 0x80012648: nop

    after_2:
    // 0x8001264C: jal         0x80016C00
    // 0x80012650: nop

    func_80016C00(rdram, ctx);
        goto after_3;
    // 0x80012650: nop

    after_3:
    // 0x80012654: jal         0x80012F0C
    // 0x80012658: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80012F0C(rdram, ctx);
        goto after_4;
    // 0x80012658: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_4:
    // 0x8001265C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80012660: jal         0x80012F34
    // 0x80012664: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80012F34(rdram, ctx);
        goto after_5;
    // 0x80012664: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x80012668: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8001266C: jal         0x80012F34
    // 0x80012670: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80012F34(rdram, ctx);
        goto after_6;
    // 0x80012670: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x80012674: jal         0x80012EA0
    // 0x80012678: nop

    func_80012EA0(rdram, ctx);
        goto after_7;
    // 0x80012678: nop

    after_7:
    // 0x8001267C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80012680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80012684: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001268C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001268C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80012690: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80012694: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80012698: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x8001269C: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x800126A0: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x800126A4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800126A8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800126AC: addiu       $a1, $a1, -0x6B60
    ctx->r5 = ADD32(ctx->r5, -0X6B60);
    // 0x800126B0: addiu       $a0, $a0, -0x6B78
    ctx->r4 = ADD32(ctx->r4, -0X6B78);
    // 0x800126B4: jal         0x8002E070
    // 0x800126B8: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x800126B8: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    after_0:
    // 0x800126BC: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800126C0: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x800126C4: addiu       $a1, $a1, 0x5C08
    ctx->r5 = ADD32(ctx->r5, 0X5C08);
    // 0x800126C8: addiu       $a0, $a0, 0x5BF0
    ctx->r4 = ADD32(ctx->r4, 0X5BF0);
    // 0x800126CC: jal         0x8002E070
    // 0x800126D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x800126D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x800126D4: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800126D8: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x800126DC: addiu       $a1, $a1, 0x5BD0
    ctx->r5 = ADD32(ctx->r5, 0X5BD0);
    // 0x800126E0: addiu       $a0, $a0, 0x5BB8
    ctx->r4 = ADD32(ctx->r4, 0X5BB8);
    // 0x800126E4: jal         0x8002E070
    // 0x800126E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_2;
    // 0x800126E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x800126EC: lui         $s3, 0x8007
    ctx->r19 = S32(0X8007 << 16);
    // 0x800126F0: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x800126F4: addiu       $s3, $s3, -0x5E58
    ctx->r19 = ADD32(ctx->r19, -0X5E58);
    // 0x800126F8: sb          $zero, -0x5E2E($at)
    MEM_B(-0X5E2E, ctx->r1) = 0;
    // 0x800126FC: lui         $t8, 0x8001
    ctx->r24 = S32(0X8001 << 16);
    // 0x80012700: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x80012704: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x80012708: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8001270C: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x80012710: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80012714: addiu       $t8, $t8, 0x2D4C
    ctx->r24 = ADD32(ctx->r24, 0X2D4C);
    // 0x80012718: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x8001271C: addiu       $t0, $t0, -0x35BC
    ctx->r8 = ADD32(ctx->r8, -0X35BC);
    // 0x80012720: addiu       $t1, $t1, 0x6A78
    ctx->r9 = ADD32(ctx->r9, 0X6A78);
    // 0x80012724: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x80012728: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
    // 0x8001272C: sw          $t6, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r14;
    // 0x80012730: sw          $t7, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r15;
    // 0x80012734: sw          $t8, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r24;
    // 0x80012738: sb          $t9, 0x1C($s3)
    MEM_B(0X1C, ctx->r19) = ctx->r25;
    // 0x8001273C: sw          $t0, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r8;
    // 0x80012740: sw          $t1, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r9;
    // 0x80012744: jal         0x8002E0A0
    // 0x80012748: addiu       $a0, $zero, 0x5622
    ctx->r4 = ADD32(0, 0X5622);
    osAiSetFrequency_recomp(rdram, ctx);
        goto after_3;
    // 0x80012748: addiu       $a0, $zero, 0x5622
    ctx->r4 = ADD32(0, 0X5622);
    after_3:
    // 0x8001274C: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80012750: sw          $v0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r2;
    // 0x80012754: addiu       $a0, $a0, -0x5EA8
    ctx->r4 = ADD32(ctx->r4, -0X5EA8);
    // 0x80012758: jal         0x80020D80
    // 0x8001275C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80020D80(rdram, ctx);
        goto after_4;
    // 0x8001275C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_4:
    // 0x80012760: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x80012764: addiu       $v0, $v0, -0x65C0
    ctx->r2 = ADD32(ctx->r2, -0X65C0);
    // 0x80012768: lui         $s1, 0x8007
    ctx->r17 = S32(0X8007 << 16);
    // 0x8001276C: lui         $s0, 0x8007
    ctx->r16 = S32(0X8007 << 16);
    // 0x80012770: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80012774: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80012778: addiu       $s0, $s0, -0x65AC
    ctx->r16 = ADD32(ctx->r16, -0X65AC);
    // 0x8001277C: addiu       $s1, $s1, -0x65C0
    ctx->r17 = ADD32(ctx->r17, -0X65C0);
    // 0x80012780: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80012784:
    // 0x80012784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80012788: jal         0x80020E40
    // 0x8001278C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80020E40(rdram, ctx);
        goto after_5;
    // 0x8001278C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x80012790: addiu       $t2, $zero, 0x200
    ctx->r10 = ADD32(0, 0X200);
    // 0x80012794: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80012798: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001279C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800127A0: lw          $a2, 0x14($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X14);
    // 0x800127A4: jal         0x80020EE4
    // 0x800127A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80020EE4(rdram, ctx);
        goto after_6;
    // 0x800127A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x800127AC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800127B0: slti        $at, $s2, 0x59
    ctx->r1 = SIGNED(ctx->r18) < 0X59 ? 1 : 0;
    // 0x800127B4: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x800127B8: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x800127BC: bne         $at, $zero, L_80012784
    if (ctx->r1 != 0) {
        // 0x800127C0: sw          $v0, -0x4($s1)
        MEM_W(-0X4, ctx->r17) = ctx->r2;
            goto L_80012784;
    }
    // 0x800127C0: sw          $v0, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->r2;
    // 0x800127C4: addiu       $t3, $zero, 0x200
    ctx->r11 = ADD32(0, 0X200);
    // 0x800127C8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800127CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800127D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800127D4: lw          $a2, 0x14($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X14);
    // 0x800127D8: jal         0x80020EE4
    // 0x800127DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80020EE4(rdram, ctx);
        goto after_7;
    // 0x800127DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x800127E0: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x800127E4: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x800127E8: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x800127EC: lui         $v1, 0x8007
    ctx->r3 = S32(0X8007 << 16);
    // 0x800127F0: addiu       $v1, $v1, -0x5E28
    ctx->r3 = ADD32(ctx->r3, -0X5E28);
    // 0x800127F4: addiu       $s0, $s0, 0x59E0
    ctx->r16 = ADD32(ctx->r16, 0X59E0);
    // 0x800127F8: addiu       $v0, $v0, 0x3E18
    ctx->r2 = ADD32(ctx->r2, 0X3E18);
L_800127FC:
    // 0x800127FC: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x80012800: addiu       $v1, $v1, 0x4E20
    ctx->r3 = ADD32(ctx->r3, 0X4E20);
    // 0x80012804: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80012808: bne         $at, $zero, L_800127FC
    if (ctx->r1 != 0) {
        // 0x8001280C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800127FC;
    }
    // 0x8001280C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80012810: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x80012814: lui         $s1, 0x8007
    ctx->r17 = S32(0X8007 << 16);
    // 0x80012818: lui         $s2, 0x8007
    ctx->r18 = S32(0X8007 << 16);
    // 0x8001281C: addiu       $s2, $s2, 0x6938
    ctx->r18 = ADD32(ctx->r18, 0X6938);
    // 0x80012820: addiu       $s1, $s1, 0x3E18
    ctx->r17 = ADD32(ctx->r17, 0X3E18);
    // 0x80012824: addiu       $s0, $s0, 0x59E0
    ctx->r16 = ADD32(ctx->r16, 0X59E0);
    // 0x80012828: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
L_8001282C:
    // 0x8001282C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80012830: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80012834: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80012838: lw          $a2, 0x14($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X14);
    // 0x8001283C: jal         0x80020EE4
    // 0x80012840: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80020EE4(rdram, ctx);
        goto after_8;
    // 0x80012840: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
    // 0x80012844: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x80012848: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x8001284C: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x80012850: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80012854: sw          $v1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r3;
    // 0x80012858: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x8001285C: sw          $s1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r17;
    // 0x80012860: addiu       $s1, $s1, 0xE60
    ctx->r17 = ADD32(ctx->r17, 0XE60);
    // 0x80012864: bnel        $s1, $s2, L_8001282C
    if (ctx->r17 != ctx->r18) {
        // 0x80012868: addiu       $t4, $zero, 0x10
        ctx->r12 = ADD32(0, 0X10);
            goto L_8001282C;
    }
    goto skip_0;
    // 0x80012868: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    skip_0:
    // 0x8001286C: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x80012870: addiu       $t6, $t6, 0x6A78
    ctx->r14 = ADD32(ctx->r14, 0X6A78);
    // 0x80012874: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80012878: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x8001287C: lui         $a3, 0x8001
    ctx->r7 = S32(0X8001 << 16);
    // 0x80012880: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x80012884: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80012888: addiu       $a3, $a3, 0x28C0
    ctx->r7 = ADD32(ctx->r7, 0X28C0);
    // 0x8001288C: addiu       $a1, $a1, 0x5BA8
    ctx->r5 = ADD32(ctx->r5, 0X5BA8);
    // 0x80012890: addiu       $a0, $a0, 0x59F8
    ctx->r4 = ADD32(ctx->r4, 0X59F8);
    // 0x80012894: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80012898: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8001289C: jal         0x8001DCB0
    // 0x800128A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DCB0(rdram, ctx);
        goto after_9;
    // 0x800128A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x800128A4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800128A8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800128AC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800128B0: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x800128B4: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x800128B8: jr          $ra
    // 0x800128BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800128BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800128C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800128C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800128C4: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x800128C8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800128CC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800128D0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800128D4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800128D8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800128DC: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x800128E0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800128E4: lui         $s1, 0x8004
    ctx->r17 = S32(0X8004 << 16);
    // 0x800128E8: lui         $s2, 0x8004
    ctx->r18 = S32(0X8004 << 16);
    // 0x800128EC: lui         $s3, 0x8004
    ctx->r19 = S32(0X8004 << 16);
    // 0x800128F0: lui         $s4, 0x8004
    ctx->r20 = S32(0X8004 << 16);
    // 0x800128F4: lui         $s5, 0x8007
    ctx->r21 = S32(0X8007 << 16);
    // 0x800128F8: lui         $s7, 0x8004
    ctx->r23 = S32(0X8004 << 16);
    // 0x800128FC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80012900: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80012904: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80012908: addiu       $s7, $s7, 0x5BF0
    ctx->r23 = ADD32(ctx->r23, 0X5BF0);
    // 0x8001290C: addiu       $s5, $s5, -0x5EB8
    ctx->r21 = ADD32(ctx->r21, -0X5EB8);
    // 0x80012910: addiu       $s4, $s4, 0x59E0
    ctx->r20 = ADD32(ctx->r20, 0X59E0);
    // 0x80012914: addiu       $s3, $s3, 0x5BB8
    ctx->r19 = ADD32(ctx->r19, 0X5BB8);
    // 0x80012918: addiu       $s2, $s2, -0x33A0
    ctx->r18 = ADD32(ctx->r18, -0X33A0);
    // 0x8001291C: addiu       $s1, $s1, -0x33A4
    ctx->r17 = ADD32(ctx->r17, -0X33A4);
    // 0x80012920: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x80012924: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_80012928:
    // 0x80012928: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001292C: jal         0x8002E1F0
    // 0x80012930: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80012930: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80012934: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80012938: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x8001293C: div         $zero, $t6, $s6
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r22)));
    // 0x80012940: mfhi        $t7
    ctx->r15 = hi;
    // 0x80012944: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80012948: addu        $t9, $s4, $t8
    ctx->r25 = ADD32(ctx->r20, ctx->r24);
    // 0x8001294C: bne         $s6, $zero, L_80012958
    if (ctx->r22 != 0) {
        // 0x80012950: nop
    
            goto L_80012958;
    }
    // 0x80012950: nop

    // 0x80012954: break       7
    do_break(2147559764);
L_80012958:
    // 0x80012958: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001295C: bne         $s6, $at, L_80012970
    if (ctx->r22 != ctx->r1) {
        // 0x80012960: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80012970;
    }
    // 0x80012960: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80012964: bne         $t6, $at, L_80012970
    if (ctx->r14 != ctx->r1) {
        // 0x80012968: nop
    
            goto L_80012970;
    }
    // 0x80012968: nop

    // 0x8001296C: break       6
    do_break(2147559788);
L_80012970:
    // 0x80012970: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    // 0x80012974: jal         0x800129FC
    // 0x80012978: nop

    func_800129FC(rdram, ctx);
        goto after_1;
    // 0x80012978: nop

    after_1:
    // 0x8001297C: beq         $v0, $zero, L_800129B8
    if (ctx->r2 == 0) {
        // 0x80012980: nop
    
            goto L_800129B8;
    }
    // 0x80012980: nop

    // 0x80012984: bne         $s0, $zero, L_800129B4
    if (ctx->r16 != 0) {
        // 0x80012988: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_800129B4;
    }
    // 0x80012988: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x8001298C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80012990: jal         0x8002E1F0
    // 0x80012994: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x80012994: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80012998: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x8001299C: jal         0x80012B74
    // 0x800129A0: lw          $a0, 0x4($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X4);
    func_80012B74(rdram, ctx);
        goto after_3;
    // 0x800129A0: lw          $a0, 0x4($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X4);
    after_3:
    // 0x800129A4: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x800129A8: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x800129AC: b           L_800129B8
    // 0x800129B0: sw          $t2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r10;
        goto L_800129B8;
    // 0x800129B0: sw          $t2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r10;
L_800129B4:
    // 0x800129B4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_800129B8:
    // 0x800129B8: jal         0x800E96B0
    // 0x800129BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800E96B0(rdram, ctx);
        goto after_4;
    // 0x800129BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x800129C0: b           L_80012928
    // 0x800129C4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_80012928;
    // 0x800129C4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800129C8: nop

    // 0x800129CC: nop

    // 0x800129D0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800129D4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800129D8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800129DC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800129E0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800129E4: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800129E8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800129EC: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x800129F0: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x800129F4: jr          $ra
    // 0x800129F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800129F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800129FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800129FC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80012A00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80012A04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80012A08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80012A0C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80012A10: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80012A14: jal         0x8002E330
    // 0x80012A18: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x80012A18: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x80012A1C: jal         0x80012D84
    // 0x80012A20: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_80012D84(rdram, ctx);
        goto after_1;
    // 0x80012A20: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x80012A24: jal         0x8002E3B0
    // 0x80012A28: nop

    osAiGetLength_recomp(rdram, ctx);
        goto after_2;
    // 0x80012A28: nop

    after_2:
    // 0x80012A2C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80012A30: srl         $v1, $v0, 2
    ctx->r3 = S32(U32(ctx->r2) >> 2);
    // 0x80012A34: beql        $a2, $zero, L_80012A60
    if (ctx->r6 == 0) {
        // 0x80012A38: lw          $t7, 0x24($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X24);
            goto L_80012A60;
    }
    goto skip_0;
    // 0x80012A38: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80012A3C: lh          $a1, 0x4($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X4);
    // 0x80012A40: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x80012A44: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x80012A48: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80012A4C: jal         0x8002E3C0
    // 0x80012A50: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    osAiSetNextBuffer_recomp(rdram, ctx);
        goto after_3;
    // 0x80012A50: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_3:
    // 0x80012A54: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80012A58: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80012A5C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_80012A60:
    // 0x80012A60: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80012A64: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x80012A68: bne         $t7, $at, L_80012A78
    if (ctx->r15 != ctx->r1) {
        // 0x80012A6C: lui         $a0, 0x8004
        ctx->r4 = S32(0X8004 << 16);
            goto L_80012A78;
    }
    // 0x80012A6C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80012A70: b           L_80012B60
    // 0x80012A74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80012B60;
    // 0x80012A74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80012A78:
    // 0x80012A78: slti        $at, $v1, 0x5C
    ctx->r1 = SIGNED(ctx->r3) < 0X5C ? 1 : 0;
    // 0x80012A7C: beq         $at, $zero, L_80012AAC
    if (ctx->r1 == 0) {
        // 0x80012A80: addiu       $a1, $sp, 0x2C
        ctx->r5 = ADD32(ctx->r29, 0X2C);
            goto L_80012AAC;
    }
    // 0x80012A80: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80012A84: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x80012A88: lw          $v0, 0x6938($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6938);
    // 0x80012A8C: addiu       $t8, $zero, 0x398
    ctx->r24 = ADD32(0, 0X398);
    // 0x80012A90: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80012A94: bne         $v0, $zero, L_80012AAC
    if (ctx->r2 != 0) {
        // 0x80012A98: nop
    
            goto L_80012AAC;
    }
    // 0x80012A98: nop

    // 0x80012A9C: sh          $t8, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r24;
    // 0x80012AA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80012AA4: b           L_80012AF0
    // 0x80012AA8: sw          $v0, 0x6938($at)
    MEM_W(0X6938, ctx->r1) = ctx->r2;
        goto L_80012AF0;
    // 0x80012AA8: sw          $v0, 0x6938($at)
    MEM_W(0X6938, ctx->r1) = ctx->r2;
L_80012AAC:
    // 0x80012AAC: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x80012AB0: slti        $at, $v1, 0x115
    ctx->r1 = SIGNED(ctx->r3) < 0X115 ? 1 : 0;
    // 0x80012AB4: bne         $at, $zero, L_80012AD8
    if (ctx->r1 != 0) {
        // 0x80012AB8: lw          $v0, 0x6938($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X6938);
            goto L_80012AD8;
    }
    // 0x80012AB8: lw          $v0, 0x6938($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6938);
    // 0x80012ABC: bne         $v0, $zero, L_80012AD8
    if (ctx->r2 != 0) {
        // 0x80012AC0: addiu       $t9, $zero, 0x228
        ctx->r25 = ADD32(0, 0X228);
            goto L_80012AD8;
    }
    // 0x80012AC0: addiu       $t9, $zero, 0x228
    ctx->r25 = ADD32(0, 0X228);
    // 0x80012AC4: sh          $t9, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r25;
    // 0x80012AC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80012ACC: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80012AD0: b           L_80012AF0
    // 0x80012AD4: sw          $v0, 0x6938($at)
    MEM_W(0X6938, ctx->r1) = ctx->r2;
        goto L_80012AF0;
    // 0x80012AD4: sw          $v0, 0x6938($at)
    MEM_W(0X6938, ctx->r1) = ctx->r2;
L_80012AD8:
    // 0x80012AD8: addiu       $t0, $zero, 0x2E0
    ctx->r8 = ADD32(0, 0X2E0);
    // 0x80012ADC: beq         $v0, $zero, L_80012AF0
    if (ctx->r2 == 0) {
        // 0x80012AE0: sh          $t0, 0x4($s0)
        MEM_H(0X4, ctx->r16) = ctx->r8;
            goto L_80012AF0;
    }
    // 0x80012AE0: sh          $t0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r8;
    // 0x80012AE4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80012AE8: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80012AEC: sw          $v0, 0x6938($at)
    MEM_W(0X6938, ctx->r1) = ctx->r2;
L_80012AF0:
    // 0x80012AF0: lw          $t1, -0x5EB0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X5EB0);
    // 0x80012AF4: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80012AF8: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    // 0x80012AFC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80012B00: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x80012B04: jal         0x80021574
    // 0x80012B08: lw          $a0, 0x59E0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X59E0);
    func_80021574(rdram, ctx);
        goto after_4;
    // 0x80012B08: lw          $a0, 0x59E0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X59E0);
    after_4:
    // 0x80012B0C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80012B10: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80012B14: lui         $t4, 0x8007
    ctx->r12 = S32(0X8007 << 16);
    // 0x80012B18: bne         $t3, $zero, L_80012B28
    if (ctx->r11 != 0) {
        // 0x80012B1C: lui         $a0, 0x8004
        ctx->r4 = S32(0X8004 << 16);
            goto L_80012B28;
    }
    // 0x80012B1C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80012B20: b           L_80012B60
    // 0x80012B24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80012B60;
    // 0x80012B24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80012B28:
    // 0x80012B28: lw          $t4, -0x5EB0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X5EB0);
    // 0x80012B2C: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x80012B30: addiu       $a2, $a2, 0x5BF0
    ctx->r6 = ADD32(ctx->r6, 0X5BF0);
    // 0x80012B34: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80012B38: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x80012B3C: lw          $a0, 0x59E0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X59E0);
    // 0x80012B40: jal         0x8001A148
    // 0x80012B44: addiu       $a3, $s0, 0x8
    ctx->r7 = ADD32(ctx->r16, 0X8);
    func_8001A148(rdram, ctx);
        goto after_5;
    // 0x80012B44: addiu       $a3, $s0, 0x8
    ctx->r7 = ADD32(ctx->r16, 0X8);
    after_5:
    // 0x80012B48: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x80012B4C: lw          $t6, -0x5EB0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5EB0);
    // 0x80012B50: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80012B54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80012B58: xori        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 ^ 0X1;
    // 0x80012B5C: sw          $t7, -0x5EB0($at)
    MEM_W(-0X5EB0, ctx->r1) = ctx->r15;
L_80012B60:
    // 0x80012B60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80012B64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80012B68: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80012B6C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80012B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012B74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80012B78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80012B7C: jal         0x8002E3B0
    // 0x80012B80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    osAiGetLength_recomp(rdram, ctx);
        goto after_0;
    // 0x80012B80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80012B84: srl         $t6, $v0, 2
    ctx->r14 = S32(U32(ctx->r2) >> 2);
    // 0x80012B88: bne         $t6, $zero, L_80012BA4
    if (ctx->r14 != 0) {
        // 0x80012B8C: lui         $t7, 0x8004
        ctx->r15 = S32(0X8004 << 16);
            goto L_80012BA4;
    }
    // 0x80012B8C: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x80012B90: lw          $t7, -0x339C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X339C);
    // 0x80012B94: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80012B98: bnel        $t7, $zero, L_80012BA8
    if (ctx->r15 != 0) {
        // 0x80012B9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80012BA8;
    }
    goto skip_0;
    // 0x80012B9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80012BA0: sw          $zero, -0x339C($at)
    MEM_W(-0X339C, ctx->r1) = 0;
L_80012BA4:
    // 0x80012BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80012BA8:
    // 0x80012BA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80012BAC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80012BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012BB4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80012BB8: lui         $t0, 0x8007
    ctx->r8 = S32(0X8007 << 16);
    // 0x80012BBC: addiu       $t0, $t0, -0x65D0
    ctx->r8 = ADD32(ctx->r8, -0X65D0);
    // 0x80012BC0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80012BC4: lw          $s1, 0x4($t0)
    ctx->r17 = MEM_W(ctx->r8, 0X4);
    // 0x80012BC8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80012BCC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80012BD0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80012BD4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80012BD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80012BDC: beq         $s1, $zero, L_80012C34
    if (ctx->r17 == 0) {
        // 0x80012BE0: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80012C34;
    }
    // 0x80012BE0: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80012BE4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
L_80012BE8:
    // 0x80012BE8: addu        $t6, $a3, $a1
    ctx->r14 = ADD32(ctx->r7, ctx->r5);
    // 0x80012BEC: sltu        $at, $a3, $v0
    ctx->r1 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x80012BF0: bne         $at, $zero, L_80012C34
    if (ctx->r1 != 0) {
        // 0x80012BF4: addiu       $v1, $v0, 0x200
        ctx->r3 = ADD32(ctx->r2, 0X200);
            goto L_80012C34;
    }
    // 0x80012BF4: addiu       $v1, $v0, 0x200
    ctx->r3 = ADD32(ctx->r2, 0X200);
    // 0x80012BF8: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80012BFC: bne         $at, $zero, L_80012C28
    if (ctx->r1 != 0) {
        // 0x80012C00: or          $a2, $s0, $zero
        ctx->r6 = ctx->r16 | 0;
            goto L_80012C28;
    }
    // 0x80012C00: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80012C04: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x80012C08: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x80012C0C: lw          $t7, -0x5EB8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5EB8);
    // 0x80012C10: addu        $t9, $t8, $a3
    ctx->r25 = ADD32(ctx->r24, ctx->r7);
    // 0x80012C14: subu        $a0, $t9, $v0
    ctx->r4 = SUB32(ctx->r25, ctx->r2);
    // 0x80012C18: jal         0x8002E330
    // 0x80012C1C: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x80012C1C: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
    after_0:
    // 0x80012C20: b           L_80012D3C
    // 0x80012C24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80012D3C;
    // 0x80012C24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80012C28:
    // 0x80012C28: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80012C2C: bnel        $s0, $zero, L_80012BE8
    if (ctx->r16 != 0) {
        // 0x80012C30: lw          $v0, 0x8($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X8);
            goto L_80012BE8;
    }
    goto skip_0;
    // 0x80012C30: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    skip_0:
L_80012C34:
    // 0x80012C34: lw          $s0, 0x8($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X8);
    // 0x80012C38: bne         $s0, $zero, L_80012C50
    if (ctx->r16 != 0) {
        // 0x80012C3C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80012C50;
    }
    // 0x80012C3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80012C40: jal         0x8002E330
    // 0x80012C44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x80012C44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80012C48: b           L_80012D3C
    // 0x80012C4C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80012D3C;
    // 0x80012C4C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80012C50:
    // 0x80012C50: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x80012C54: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    // 0x80012C58: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80012C5C: jal         0x80020E74
    // 0x80012C60: sw          $t2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r10;
    func_80020E74(rdram, ctx);
        goto after_2;
    // 0x80012C60: sw          $t2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r10;
    after_2:
    // 0x80012C64: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80012C68: lui         $t0, 0x8007
    ctx->r8 = S32(0X8007 << 16);
    // 0x80012C6C: addiu       $t0, $t0, -0x65D0
    ctx->r8 = ADD32(ctx->r8, -0X65D0);
    // 0x80012C70: beq         $a2, $zero, L_80012C90
    if (ctx->r6 == 0) {
        // 0x80012C74: lw          $a3, 0x48($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X48);
            goto L_80012C90;
    }
    // 0x80012C74: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80012C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80012C7C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80012C80: jal         0x80020E40
    // 0x80012C84: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    func_80020E40(rdram, ctx);
        goto after_3;
    // 0x80012C84: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    after_3:
    // 0x80012C88: b           L_80012CBC
    // 0x80012C8C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
        goto L_80012CBC;
    // 0x80012C8C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
L_80012C90:
    // 0x80012C90: lw          $s1, 0x4($t0)
    ctx->r17 = MEM_W(ctx->r8, 0X4);
    // 0x80012C94: beql        $s1, $zero, L_80012CB4
    if (ctx->r17 == 0) {
        // 0x80012C98: sw          $s0, 0x4($t0)
        MEM_W(0X4, ctx->r8) = ctx->r16;
            goto L_80012CB4;
    }
    goto skip_1;
    // 0x80012C98: sw          $s0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r16;
    skip_1:
    // 0x80012C9C: sw          $s0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r16;
    // 0x80012CA0: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x80012CA4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80012CA8: b           L_80012CBC
    // 0x80012CAC: sw          $s0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r16;
        goto L_80012CBC;
    // 0x80012CAC: sw          $s0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r16;
    // 0x80012CB0: sw          $s0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r16;
L_80012CB4:
    // 0x80012CB4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80012CB8: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_80012CBC:
    // 0x80012CBC: andi        $s1, $a3, 0x1
    ctx->r17 = ctx->r7 & 0X1;
    // 0x80012CC0: subu        $a3, $a3, $s1
    ctx->r7 = SUB32(ctx->r7, ctx->r17);
    // 0x80012CC4: sw          $a3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r7;
    // 0x80012CC8: lui         $t3, 0x8007
    ctx->r11 = S32(0X8007 << 16);
    // 0x80012CCC: lw          $t3, -0x5EB8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X5EB8);
    // 0x80012CD0: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x80012CD4: addiu       $t1, $t1, -0x5EB4
    ctx->r9 = ADD32(ctx->r9, -0X5EB4);
    // 0x80012CD8: sw          $t3, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r11;
    // 0x80012CDC: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x80012CE0: lw          $t0, 0x10($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X10);
    // 0x80012CE4: lui         $t5, 0x8007
    ctx->r13 = S32(0X8007 << 16);
    // 0x80012CE8: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x80012CEC: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x80012CF0: subu        $t4, $t4, $v1
    ctx->r12 = SUB32(ctx->r12, ctx->r3);
    // 0x80012CF4: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x80012CF8: addiu       $t7, $t7, -0x6B78
    ctx->r15 = ADD32(ctx->r15, -0X6B78);
    // 0x80012CFC: addiu       $t5, $t5, -0x6A80
    ctx->r13 = ADD32(ctx->r13, -0X6A80);
    // 0x80012D00: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x80012D04: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80012D08: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x80012D0C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80012D10: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x80012D14: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80012D18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80012D1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80012D20: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80012D24: jal         0x8002E450
    // 0x80012D28: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    osPiStartDma_recomp(rdram, ctx);
        goto after_4;
    // 0x80012D28: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    after_4:
    // 0x80012D2C: jal         0x8002E330
    // 0x80012D30: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_5;
    // 0x80012D30: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    after_5:
    // 0x80012D34: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80012D38: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80012D3C:
    // 0x80012D3C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80012D40: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80012D44: jr          $ra
    // 0x80012D48: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80012D48: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80012D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012D4C: lui         $v1, 0x8007
    ctx->r3 = S32(0X8007 << 16);
    // 0x80012D50: addiu       $v1, $v1, -0x65D0
    ctx->r3 = ADD32(ctx->r3, -0X65D0);
    // 0x80012D54: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x80012D58: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x80012D5C: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x80012D60: bne         $t6, $zero, L_80012D7C
    if (ctx->r14 != 0) {
        // 0x80012D64: addiu       $v0, $v0, 0x2BB4
        ctx->r2 = ADD32(ctx->r2, 0X2BB4);
            goto L_80012D7C;
    }
    // 0x80012D64: addiu       $v0, $v0, 0x2BB4
    ctx->r2 = ADD32(ctx->r2, 0X2BB4);
    // 0x80012D68: addiu       $t7, $t7, -0x65C0
    ctx->r15 = ADD32(ctx->r15, -0X65C0);
    // 0x80012D6C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80012D70: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80012D74: sw          $t7, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r15;
    // 0x80012D78: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
L_80012D7C:
    // 0x80012D7C: jr          $ra
    // 0x80012D80: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    return;
    // 0x80012D80: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80012D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012D84: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80012D88: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80012D8C: lui         $s4, 0x8007
    ctx->r20 = S32(0X8007 << 16);
    // 0x80012D90: addiu       $s4, $s4, -0x5EB4
    ctx->r20 = ADD32(ctx->r20, -0X5EB4);
    // 0x80012D94: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x80012D98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80012D9C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80012DA0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80012DA4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80012DA8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80012DAC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x80012DB0: beq         $t6, $zero, L_80012DE8
    if (ctx->r14 == 0) {
        // 0x80012DB4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80012DE8;
    }
    // 0x80012DB4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80012DB8: lui         $s1, 0x8007
    ctx->r17 = S32(0X8007 << 16);
    // 0x80012DBC: addiu       $s1, $s1, -0x6B78
    ctx->r17 = ADD32(ctx->r17, -0X6B78);
    // 0x80012DC0: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x80012DC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80012DC8:
    // 0x80012DC8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80012DCC: jal         0x8002E1F0
    // 0x80012DD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80012DD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80012DD4: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x80012DD8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80012DDC: sltu        $at, $s0, $t7
    ctx->r1 = ctx->r16 < ctx->r15 ? 1 : 0;
    // 0x80012DE0: bnel        $at, $zero, L_80012DC8
    if (ctx->r1 != 0) {
        // 0x80012DE4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80012DC8;
    }
    goto skip_0;
    // 0x80012DE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
L_80012DE8:
    // 0x80012DE8: lui         $s2, 0x8007
    ctx->r18 = S32(0X8007 << 16);
    // 0x80012DEC: addiu       $s2, $s2, -0x65D0
    ctx->r18 = ADD32(ctx->r18, -0X65D0);
    // 0x80012DF0: lw          $s0, 0x4($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X4);
    // 0x80012DF4: lui         $s3, 0x8007
    ctx->r19 = S32(0X8007 << 16);
    // 0x80012DF8: addiu       $s3, $s3, -0x5EB8
    ctx->r19 = ADD32(ctx->r19, -0X5EB8);
    // 0x80012DFC: beq         $s0, $zero, L_80012E68
    if (ctx->r16 == 0) {
        // 0x80012E00: nop
    
            goto L_80012E68;
    }
    // 0x80012E00: nop

L_80012E04:
    // 0x80012E04: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x80012E08: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x80012E0C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80012E10: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80012E14: sltu        $at, $t0, $t8
    ctx->r1 = ctx->r8 < ctx->r24 ? 1 : 0;
    // 0x80012E18: beq         $at, $zero, L_80012E60
    if (ctx->r1 == 0) {
        // 0x80012E1C: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80012E60;
    }
    // 0x80012E1C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80012E20: lw          $t1, 0x4($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X4);
    // 0x80012E24: bne         $s0, $t1, L_80012E30
    if (ctx->r16 != ctx->r9) {
        // 0x80012E28: nop
    
            goto L_80012E30;
    }
    // 0x80012E28: nop

    // 0x80012E2C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
L_80012E30:
    // 0x80012E30: jal         0x80020E74
    // 0x80012E34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80020E74(rdram, ctx);
        goto after_1;
    // 0x80012E34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80012E38: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80012E3C: beql        $a1, $zero, L_80012E58
    if (ctx->r5 == 0) {
        // 0x80012E40: sw          $s0, 0x8($s2)
        MEM_W(0X8, ctx->r18) = ctx->r16;
            goto L_80012E58;
    }
    goto skip_1;
    // 0x80012E40: sw          $s0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r16;
    skip_1:
    // 0x80012E44: jal         0x80020E40
    // 0x80012E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80020E40(rdram, ctx);
        goto after_2;
    // 0x80012E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80012E4C: b           L_80012E60
    // 0x80012E50: nop

        goto L_80012E60;
    // 0x80012E50: nop

    // 0x80012E54: sw          $s0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r16;
L_80012E58:
    // 0x80012E58: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80012E5C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_80012E60:
    // 0x80012E60: bne         $s1, $zero, L_80012E04
    if (ctx->r17 != 0) {
        // 0x80012E64: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80012E04;
    }
    // 0x80012E64: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_80012E68:
    // 0x80012E68: lui         $s3, 0x8007
    ctx->r19 = S32(0X8007 << 16);
    // 0x80012E6C: addiu       $s3, $s3, -0x5EB8
    ctx->r19 = ADD32(ctx->r19, -0X5EB8);
    // 0x80012E70: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x80012E74: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80012E78: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x80012E7C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80012E80: sw          $t3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r11;
    // 0x80012E84: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80012E88: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80012E8C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80012E90: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80012E94: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80012E98: jr          $ra
    // 0x80012E9C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80012E9C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80012EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012EA0: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x80012EA4: addiu       $v0, $v0, -0x35C0
    ctx->r2 = ADD32(ctx->r2, -0X35C0);
    // 0x80012EA8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80012EAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80012EB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80012EB4: bne         $t6, $zero, L_80012ECC
    if (ctx->r14 != 0) {
        // 0x80012EB8: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_80012ECC;
    }
    // 0x80012EB8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80012EBC: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80012EC0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80012EC4: jal         0x8002E510
    // 0x80012EC8: addiu       $a0, $a0, 0x59F8
    ctx->r4 = ADD32(ctx->r4, 0X59F8);
    osStartThread_recomp(rdram, ctx);
        goto after_0;
    // 0x80012EC8: addiu       $a0, $a0, 0x59F8
    ctx->r4 = ADD32(ctx->r4, 0X59F8);
    after_0:
L_80012ECC:
    // 0x80012ECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80012ED0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80012ED4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80012EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012EDC: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x80012EE0: jr          $ra
    // 0x80012EE4: addiu       $v0, $v0, 0x6A78
    ctx->r2 = ADD32(ctx->r2, 0X6A78);
    return;
    // 0x80012EE4: addiu       $v0, $v0, 0x6A78
    ctx->r2 = ADD32(ctx->r2, 0X6A78);
;}
RECOMP_FUNC void func_80012EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012EE8: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x80012EEC: jr          $ra
    // 0x80012EF0: addiu       $v0, $v0, -0x6B78
    ctx->r2 = ADD32(ctx->r2, -0X6B78);
    return;
    // 0x80012EF0: addiu       $v0, $v0, -0x6B78
    ctx->r2 = ADD32(ctx->r2, -0X6B78);
;}
RECOMP_FUNC void func_80012EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012EF4: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x80012EF8: jr          $ra
    // 0x80012EFC: addiu       $v0, $v0, -0x6A98
    ctx->r2 = ADD32(ctx->r2, -0X6A98);
    return;
    // 0x80012EFC: addiu       $v0, $v0, -0x6A98
    ctx->r2 = ADD32(ctx->r2, -0X6A98);
;}
RECOMP_FUNC void func_80012F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012F00: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x80012F04: jr          $ra
    // 0x80012F08: addiu       $v0, $v0, 0x5BB8
    ctx->r2 = ADD32(ctx->r2, 0X5BB8);
    return;
    // 0x80012F08: addiu       $v0, $v0, 0x5BB8
    ctx->r2 = ADD32(ctx->r2, 0X5BB8);
;}
RECOMP_FUNC void func_80012F0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012F0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80012F10: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80012F14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80012F18: sh          $a0, -0x5E34($at)
    MEM_H(-0X5E34, ctx->r1) = ctx->r4;
    // 0x80012F1C: jal         0x80021A00
    // 0x80012F20: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    func_80021A00(rdram, ctx);
        goto after_0;
    // 0x80012F20: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    after_0:
    // 0x80012F24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80012F28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80012F2C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80012F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012F34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80012F38: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x80012F3C: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80012F40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80012F44: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80012F48: jal         0x80021AD0
    // 0x80012F4C: sh          $a1, -0x5E32($at)
    MEM_H(-0X5E32, ctx->r1) = ctx->r5;
    func_80021AD0(rdram, ctx);
        goto after_0;
    // 0x80012F4C: sh          $a1, -0x5E32($at)
    MEM_H(-0X5E32, ctx->r1) = ctx->r5;
    after_0:
    // 0x80012F50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80012F54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80012F58: jr          $ra
    return;
;}
RECOMP_FUNC void func_80012F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012F60: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x80012F64: jr          $ra
    // 0x80012F68: addiu       $v0, $v0, 0x695C
    ctx->r2 = ADD32(ctx->r2, 0X695C);
    return;
    // 0x80012F68: addiu       $v0, $v0, 0x695C
    ctx->r2 = ADD32(ctx->r2, 0X695C);
;}
RECOMP_FUNC void func_80012F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012F6C: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x80012F70: jr          $ra
    // 0x80012F74: addiu       $v0, $v0, 0x6940
    ctx->r2 = ADD32(ctx->r2, 0X6940);
    return;
    // 0x80012F74: addiu       $v0, $v0, 0x6940
    ctx->r2 = ADD32(ctx->r2, 0X6940);
;}
RECOMP_FUNC void rom_dma_read(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012F78: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80012F7C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80012F80: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80012F84: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80012F88: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80012F8C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80012F90: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80012F94: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80012F98: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80012F9C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80012FA0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80012FA4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80012FA8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80012FAC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80012FB0: jal         0x8002E660
    // 0x80012FB4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x80012FB4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x80012FB8: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x80012FBC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80012FC0: lui         $s7, 0x2
    ctx->r23 = S32(0X2 << 16);
    // 0x80012FC4: bgez        $v0, L_80012FDC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80012FC8: sra         $t6, $v0, 17
        ctx->r14 = S32(SIGNED(ctx->r2) >> 17);
            goto L_80012FDC;
    }
    // 0x80012FC8: sra         $t6, $v0, 17
    ctx->r14 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80012FCC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80012FD0: addiu       $at, $at, -0x1
    ctx->r1 = ADD32(ctx->r1, -0X1);
    // 0x80012FD4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80012FD8: sra         $t6, $at, 17
    ctx->r14 = S32(SIGNED(ctx->r1) >> 17);
L_80012FDC:
    // 0x80012FDC: blez        $t6, L_80013060
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80012FE0: or          $s5, $t6, $zero
        ctx->r21 = ctx->r14 | 0;
            goto L_80013060;
    }
    // 0x80012FE0: or          $s5, $t6, $zero
    ctx->r21 = ctx->r14 | 0;
    // 0x80012FE4: lui         $s6, 0x8007
    ctx->r22 = S32(0X8007 << 16);
    // 0x80012FE8: lui         $s4, 0x8007
    ctx->r20 = S32(0X8007 << 16);
    // 0x80012FEC: lui         $s1, 0x8004
    ctx->r17 = S32(0X8004 << 16);
    // 0x80012FF0: addiu       $s1, $s1, -0x3390
    ctx->r17 = ADD32(ctx->r17, -0X3390);
    // 0x80012FF4: addiu       $s4, $s4, 0x695C
    ctx->r20 = ADD32(ctx->r20, 0X695C);
    // 0x80012FF8: addiu       $s6, $s6, 0x6940
    ctx->r22 = ADD32(ctx->r22, 0X6940);
    // 0x80012FFC: lui         $fp, 0x2
    ctx->r30 = S32(0X2 << 16);
L_80013000:
    // 0x80013000: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80013004: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80013008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001300C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80013010: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x80013014: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80013018: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x8001301C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x80013020: sw          $s7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r23;
    // 0x80013024: jal         0x8002E450
    // 0x80013028: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    osPiStartDma_recomp(rdram, ctx);
        goto after_1;
    // 0x80013028: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    after_1:
    // 0x8001302C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80013030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80013034: jal         0x8002E1F0
    // 0x80013038: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x80013038: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8001303C: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80013040: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80013044: addu        $s3, $s3, $at
    ctx->r19 = ADD32(ctx->r19, ctx->r1);
    // 0x80013048: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8001304C: slt         $at, $s0, $s5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x80013050: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80013054: addu        $s2, $s2, $fp
    ctx->r18 = ADD32(ctx->r18, ctx->r30);
    // 0x80013058: bne         $at, $zero, L_80013000
    if (ctx->r1 != 0) {
        // 0x8001305C: sw          $t0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r8;
            goto L_80013000;
    }
    // 0x8001305C: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
L_80013060:
    // 0x80013060: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x80013064: lui         $s1, 0x8004
    ctx->r17 = S32(0X8004 << 16);
    // 0x80013068: addiu       $s1, $s1, -0x3390
    ctx->r17 = ADD32(ctx->r17, -0X3390);
    // 0x8001306C: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x80013070: lui         $s4, 0x8007
    ctx->r20 = S32(0X8007 << 16);
    // 0x80013074: lui         $s6, 0x8007
    ctx->r22 = S32(0X8007 << 16);
    // 0x80013078: addiu       $s6, $s6, 0x6940
    ctx->r22 = ADD32(ctx->r22, 0X6940);
    // 0x8001307C: addiu       $s4, $s4, 0x695C
    ctx->r20 = ADD32(ctx->r20, 0X695C);
    // 0x80013080: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80013084: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
    // 0x80013088: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x8001308C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80013090: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80013094: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80013098: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x8001309C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x800130A0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800130A4: addiu       $at, $at, -0x1
    ctx->r1 = ADD32(ctx->r1, -0X1);
    // 0x800130A8: bgez        $t3, L_800130BC
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800130AC: and         $t4, $t3, $at
        ctx->r12 = ctx->r11 & ctx->r1;
            goto L_800130BC;
    }
    // 0x800130AC: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x800130B0: beq         $t4, $zero, L_800130BC
    if (ctx->r12 == 0) {
        // 0x800130B4: addiu       $at, $at, 0x1
        ctx->r1 = ADD32(ctx->r1, 0X1);
            goto L_800130BC;
    }
    // 0x800130B4: addiu       $at, $at, 0x1
    ctx->r1 = ADD32(ctx->r1, 0X1);
    // 0x800130B8: subu        $t4, $t4, $at
    ctx->r12 = SUB32(ctx->r12, ctx->r1);
L_800130BC:
    // 0x800130BC: jal         0x8002E450
    // 0x800130C0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    osPiStartDma_recomp(rdram, ctx);
        goto after_3;
    // 0x800130C0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_3:
    // 0x800130C4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800130C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800130CC: jal         0x8002E1F0
    // 0x800130D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x800130D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x800130D4: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x800130D8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800130DC: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x800130E0: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800130E4: jal         0x8002E6E0
    // 0x800130E8: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    osInvalDCache_recomp(rdram, ctx);
        goto after_5;
    // 0x800130E8: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    after_5:
    // 0x800130EC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800130F0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800130F4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800130F8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x800130FC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80013100: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80013104: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80013108: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8001310C: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80013110: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80013114: jr          $ra
    // 0x80013118: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80013118: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8001311C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001311C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80013120: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80013124: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80013128: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001312C: jal         0x8002E660
    // 0x80013130: addiu       $a1, $zero, 0x1800
    ctx->r5 = ADD32(0, 0X1800);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x80013130: addiu       $a1, $zero, 0x1800
    ctx->r5 = ADD32(0, 0X1800);
    after_0:
    // 0x80013134: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x80013138: addiu       $v0, $v0, -0x3390
    ctx->r2 = ADD32(ctx->r2, -0X3390);
    // 0x8001313C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80013140: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80013144: lui         $t0, 0x8007
    ctx->r8 = S32(0X8007 << 16);
    // 0x80013148: addiu       $t0, $t0, 0x695C
    ctx->r8 = ADD32(ctx->r8, 0X695C);
    // 0x8001314C: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80013150: addiu       $t9, $zero, 0x1800
    ctx->r25 = ADD32(0, 0X1800);
    // 0x80013154: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80013158: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8001315C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80013160: addiu       $a0, $a0, 0x6940
    ctx->r4 = ADD32(ctx->r4, 0X6940);
    // 0x80013164: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80013168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001316C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80013170: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80013174: jal         0x8002E450
    // 0x80013178: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    osPiStartDma_recomp(rdram, ctx);
        goto after_1;
    // 0x80013178: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_1:
    // 0x8001317C: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80013180: addiu       $a0, $a0, 0x695C
    ctx->r4 = ADD32(ctx->r4, 0X695C);
    // 0x80013184: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80013188: jal         0x8002E1F0
    // 0x8001318C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x8001318C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80013190: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x80013194: addiu       $v0, $v0, -0x3390
    ctx->r2 = ADD32(ctx->r2, -0X3390);
    // 0x80013198: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x8001319C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800131A0: addiu       $a1, $zero, 0x1800
    ctx->r5 = ADD32(0, 0X1800);
    // 0x800131A4: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800131A8: jal         0x8002E6E0
    // 0x800131AC: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    osInvalDCache_recomp(rdram, ctx);
        goto after_3;
    // 0x800131AC: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    after_3:
    // 0x800131B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800131B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800131B8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800131C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800131C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800131C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800131C8: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x800131CC: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x800131D0: addiu       $a1, $a1, 0x6958
    ctx->r5 = ADD32(ctx->r5, 0X6958);
    // 0x800131D4: addiu       $a0, $a0, 0x695C
    ctx->r4 = ADD32(ctx->r4, 0X695C);
    // 0x800131D8: jal         0x8002E070
    // 0x800131DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x800131DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x800131E0: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x800131E4: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x800131E8: addiu       $a1, $a1, 0x6978
    ctx->r5 = ADD32(ctx->r5, 0X6978);
    // 0x800131EC: addiu       $a0, $a0, 0x69B8
    ctx->r4 = ADD32(ctx->r4, 0X69B8);
    // 0x800131F0: jal         0x8002E070
    // 0x800131F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x800131F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x800131F8: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x800131FC: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80013200: addiu       $a2, $a2, 0x6978
    ctx->r6 = ADD32(ctx->r6, 0X6978);
    // 0x80013204: addiu       $a1, $a1, 0x69B8
    ctx->r5 = ADD32(ctx->r5, 0X69B8);
    // 0x80013208: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    // 0x8001320C: jal         0x8002E790
    // 0x80013210: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    osCreatePiManager_recomp(rdram, ctx);
        goto after_2;
    // 0x80013210: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_2:
    // 0x80013214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80013218: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001321C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80013224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013224: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x80013228: addiu       $v1, $v1, -0x3390
    ctx->r3 = ADD32(ctx->r3, -0X3390);
    // 0x8001322C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80013230: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80013234: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80013238: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8001323C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80013240: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80013244: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80013248: sw          $a1, 0x69CC($at)
    MEM_W(0X69CC, ctx->r1) = ctx->r5;
    // 0x8001324C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80013250: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80013254: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80013258: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8001325C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80013260: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80013264: sw          $a2, 0x69D0($at)
    MEM_W(0X69D0, ctx->r1) = ctx->r6;
    // 0x80013268: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8001326C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80013270: jal         0x8002E660
    // 0x80013274: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x80013274: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    after_0:
    // 0x80013278: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8001327C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80013280: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x80013284: addiu       $t1, $t1, 0x695C
    ctx->r9 = ADD32(ctx->r9, 0X695C);
    // 0x80013288: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8001328C: addiu       $a0, $a0, 0x6940
    ctx->r4 = ADD32(ctx->r4, 0X6940);
    // 0x80013290: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80013294: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80013298: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8001329C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800132A0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800132A4: jal         0x8002E450
    // 0x800132A8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    osPiStartDma_recomp(rdram, ctx);
        goto after_1;
    // 0x800132A8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_1:
    // 0x800132AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800132B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800132B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800132BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800132BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800132C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800132C4: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x800132C8: addiu       $a0, $a0, 0x695C
    ctx->r4 = ADD32(ctx->r4, 0X695C);
    // 0x800132CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800132D0: jal         0x8002E1F0
    // 0x800132D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x800132D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x800132D8: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x800132DC: lw          $v0, -0x3390($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3390);
    // 0x800132E0: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x800132E4: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x800132E8: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800132EC: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800132F0: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x800132F4: lw          $a1, 0x69D0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X69D0);
    // 0x800132F8: lw          $a0, 0x69CC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X69CC);
    // 0x800132FC: jal         0x8002E6E0
    // 0x80013300: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    osInvalDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x80013300: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    after_1:
    // 0x80013304: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x80013308: addiu       $v0, $v0, -0x3390
    ctx->r2 = ADD32(ctx->r2, -0X3390);
    // 0x8001330C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80013310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80013314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80013318: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8001331C: jr          $ra
    // 0x80013320: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    return;
    // 0x80013320: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_80013324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013324: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80013328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001332C: jal         0x80013224
    // 0x80013330: nop

    func_80013224(rdram, ctx);
        goto after_0;
    // 0x80013330: nop

    after_0:
    // 0x80013334: jal         0x800132BC
    // 0x80013338: nop

    func_800132BC(rdram, ctx);
        goto after_1;
    // 0x80013338: nop

    after_1:
    // 0x8001333C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80013340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80013344: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001334C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001334C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80013350: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80013354: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x80013358: addiu       $s0, $s0, -0x3390
    ctx->r16 = ADD32(ctx->r16, -0X3390);
    // 0x8001335C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80013360: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80013364: blezl       $t6, L_80013384
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80013368: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80013384;
    }
    goto skip_0;
    // 0x80013368: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_8001336C:
    // 0x8001336C: jal         0x800132BC
    // 0x80013370: nop

    func_800132BC(rdram, ctx);
        goto after_0;
    // 0x80013370: nop

    after_0:
    // 0x80013374: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80013378: bgtz        $t7, L_8001336C
    if (SIGNED(ctx->r15) > 0) {
        // 0x8001337C: nop
    
            goto L_8001336C;
    }
    // 0x8001337C: nop

    // 0x80013380: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80013384:
    // 0x80013384: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80013388: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001338C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800133A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800133A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800133A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800133A8: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x800133AC: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x800133B0: addiu       $a1, $a1, 0x69F8
    ctx->r5 = ADD32(ctx->r5, 0X69F8);
    // 0x800133B4: addiu       $a0, $a0, 0x69E0
    ctx->r4 = ADD32(ctx->r4, 0X69E0);
    // 0x800133B8: jal         0x8002E070
    // 0x800133BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x800133BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x800133C0: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x800133C4: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x800133C8: addiu       $a1, $a1, 0x6A18
    ctx->r5 = ADD32(ctx->r5, 0X6A18);
    // 0x800133CC: addiu       $a0, $a0, 0x6A00
    ctx->r4 = ADD32(ctx->r4, 0X6A00);
    // 0x800133D0: jal         0x8002E070
    // 0x800133D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x800133D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x800133D8: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x800133DC: addiu       $t6, $t6, 0x73E0
    ctx->r14 = ADD32(ctx->r14, 0X73E0);
    // 0x800133E0: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x800133E4: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x800133E8: lui         $a3, 0x8001
    ctx->r7 = S32(0X8001 << 16);
    // 0x800133EC: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x800133F0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x800133F4: addiu       $a3, $a3, 0x3544
    ctx->r7 = ADD32(ctx->r7, 0X3544);
    // 0x800133F8: addiu       $a1, $a1, 0x6BD0
    ctx->r5 = ADD32(ctx->r5, 0X6BD0);
    // 0x800133FC: addiu       $a0, $a0, 0x6A20
    ctx->r4 = ADD32(ctx->r4, 0X6A20);
    // 0x80013400: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80013404: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80013408: jal         0x8001DCB0
    // 0x8001340C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DCB0(rdram, ctx);
        goto after_2;
    // 0x8001340C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80013410: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80013414: jal         0x8002E510
    // 0x80013418: addiu       $a0, $a0, 0x6A20
    ctx->r4 = ADD32(ctx->r4, 0X6A20);
    osStartThread_recomp(rdram, ctx);
        goto after_3;
    // 0x80013418: addiu       $a0, $a0, 0x6A20
    ctx->r4 = ADD32(ctx->r4, 0X6A20);
    after_3:
    // 0x8001341C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80013420: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x80013424: sw          $zero, 0x73E0($at)
    MEM_W(0X73E0, ctx->r1) = 0;
    // 0x80013428: jr          $ra
    // 0x8001342C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8001342C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80013430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80013434: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80013438: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8001343C: jal         0x8002E900
    // 0x80013440: addiu       $a0, $a0, 0x6A20
    ctx->r4 = ADD32(ctx->r4, 0X6A20);
    osStopThread_recomp(rdram, ctx);
        goto after_0;
    // 0x80013440: addiu       $a0, $a0, 0x6A20
    ctx->r4 = ADD32(ctx->r4, 0X6A20);
    after_0:
    // 0x80013444: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80013448: jal         0x8002E9C0
    // 0x8001344C: addiu       $a0, $a0, 0x6A20
    ctx->r4 = ADD32(ctx->r4, 0X6A20);
    __osSpSetPc_recomp(rdram, ctx);
        goto after_1;
    // 0x8001344C: addiu       $a0, $a0, 0x6A20
    ctx->r4 = ADD32(ctx->r4, 0X6A20);
    after_1:
    // 0x80013450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80013454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80013458: jr          $ra
    return;
;}
RECOMP_FUNC void func_80013460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013460: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x80013464: lw          $v0, 0x69E8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X69E8);
    // 0x80013468: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8001346C: jr          $ra
    // 0x80013470: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x80013470: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_80013474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013474: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x80013478: lw          $v0, 0x6A08($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6A08);
    // 0x8001347C: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80013480: jr          $ra
    // 0x80013484: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x80013484: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_80013488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013488: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001348C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80013490: jal         0x80012530
    // 0x80013494: nop

    func_80012530(rdram, ctx);
        goto after_0;
    // 0x80013494: nop

    after_0:
    // 0x80013498: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001349C: bne         $v0, $at, L_800134B4
    if (ctx->r2 != ctx->r1) {
        // 0x800134A0: lui         $a0, 0x8007
        ctx->r4 = S32(0X8007 << 16);
            goto L_800134B4;
    }
    // 0x800134A0: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x800134A4: addiu       $a0, $a0, 0x69E0
    ctx->r4 = ADD32(ctx->r4, 0X69E0);
    // 0x800134A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800134AC: jal         0x8002EAD0
    // 0x800134B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x800134B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_800134B4:
    // 0x800134B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800134B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800134BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800134C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800134C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800134C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800134CC: jal         0x80012530
    // 0x800134D0: nop

    func_80012530(rdram, ctx);
        goto after_0;
    // 0x800134D0: nop

    after_0:
    // 0x800134D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800134D8: bne         $v0, $at, L_800134F0
    if (ctx->r2 != ctx->r1) {
        // 0x800134DC: lui         $a0, 0x8007
        ctx->r4 = S32(0X8007 << 16);
            goto L_800134F0;
    }
    // 0x800134DC: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x800134E0: addiu       $a0, $a0, 0x6A00
    ctx->r4 = ADD32(ctx->r4, 0X6A00);
    // 0x800134E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800134E8: jal         0x8002EAD0
    // 0x800134EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x800134EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_800134F0:
    // 0x800134F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800134F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800134F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80013500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80013504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80013508: jal         0x80012530
    // 0x8001350C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80012530(rdram, ctx);
        goto after_0;
    // 0x8001350C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80013510: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80013514: bne         $v0, $at, L_80013528
    if (ctx->r2 != ctx->r1) {
        // 0x80013518: lui         $a0, 0x8007
        ctx->r4 = S32(0X8007 << 16);
            goto L_80013528;
    }
    // 0x80013518: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8001351C: addiu       $a0, $a0, 0x6A20
    ctx->r4 = ADD32(ctx->r4, 0X6A20);
    // 0x80013520: jal         0x8002EC20
    // 0x80013524: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    osSetThreadPri_recomp(rdram, ctx);
        goto after_1;
    // 0x80013524: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
L_80013528:
    // 0x80013528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001352C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80013530: jr          $ra
    return;
;}
RECOMP_FUNC void func_80013538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013538: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x8001353C: jr          $ra
    // 0x80013540: lw          $v0, 0x73E0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X73E0);
    return;
    // 0x80013540: lw          $v0, 0x73E0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X73E0);
;}
RECOMP_FUNC void func_80013544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013544: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80013548: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001354C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80013550: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80013554: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80013558: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001355C: lui         $s1, 0x8007
    ctx->r17 = S32(0X8007 << 16);
    // 0x80013560: lui         $s2, 0x8007
    ctx->r18 = S32(0X8007 << 16);
    // 0x80013564: lui         $s3, 0x8007
    ctx->r19 = S32(0X8007 << 16);
    // 0x80013568: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8001356C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80013570: addiu       $s3, $s3, 0x69E0
    ctx->r19 = ADD32(ctx->r19, 0X69E0);
    // 0x80013574: addiu       $s2, $s2, 0x73E0
    ctx->r18 = ADD32(ctx->r18, 0X73E0);
    // 0x80013578: addiu       $s1, $s1, 0x6A00
    ctx->r17 = ADD32(ctx->r17, 0X6A00);
    // 0x8001357C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80013580: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80013584: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_80013588:
    // 0x80013588: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001358C: jal         0x8002E1F0
    // 0x80013590: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80013590: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_0:
    // 0x80013594: lw          $t6, 0x8($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X8);
    // 0x80013598: sw          $s4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r20;
    // 0x8001359C: bnel        $t6, $zero, L_800135CC
    if (ctx->r14 != 0) {
        // 0x800135A0: sw          $zero, 0x0($s2)
        MEM_W(0X0, ctx->r18) = 0;
            goto L_800135CC;
    }
    goto skip_0;
    // 0x800135A0: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    skip_0:
L_800135A4:
    // 0x800135A4: jal         0x800A7FD4
    // 0x800135A8: nop

    func_800A7FD4(rdram, ctx);
        goto after_1;
    // 0x800135A8: nop

    after_1:
    // 0x800135AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800135B0: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x800135B4: beql        $at, $zero, L_800135CC
    if (ctx->r1 == 0) {
        // 0x800135B8: sw          $zero, 0x0($s2)
        MEM_W(0X0, ctx->r18) = 0;
            goto L_800135CC;
    }
    goto skip_1;
    // 0x800135B8: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    skip_1:
    // 0x800135BC: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x800135C0: beq         $t7, $zero, L_800135A4
    if (ctx->r15 == 0) {
        // 0x800135C4: nop
    
            goto L_800135A4;
    }
    // 0x800135C4: nop

    // 0x800135C8: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
L_800135CC:
    // 0x800135CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800135D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800135D4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x800135D8: jal         0x8002E1F0
    // 0x800135DC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x800135DC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_2:
    // 0x800135E0: b           L_80013588
    // 0x800135E4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_80013588;
    // 0x800135E4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800135E8: nop

    // 0x800135EC: nop

    // 0x800135F0: nop

    // 0x800135F4: nop

    // 0x800135F8: nop

    // 0x800135FC: nop

    // 0x80013600: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80013604: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80013608: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001360C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80013610: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80013614: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80013618: jr          $ra
    // 0x8001361C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8001361C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80013620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013620: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80013624: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x80013628: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001362C: addiu       $t6, $t6, 0x75F0
    ctx->r14 = ADD32(ctx->r14, 0X75F0);
    // 0x80013630: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80013634: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x80013638: lui         $a3, 0x8001
    ctx->r7 = S32(0X8001 << 16);
    // 0x8001363C: addiu       $a3, $a3, 0x3678
    ctx->r7 = ADD32(ctx->r7, 0X3678);
    // 0x80013640: addiu       $a1, $a1, 0x77A0
    ctx->r5 = ADD32(ctx->r5, 0X77A0);
    // 0x80013644: addiu       $a0, $a0, 0x75F0
    ctx->r4 = ADD32(ctx->r4, 0X75F0);
    // 0x80013648: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8001364C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80013650: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80013654: jal         0x8001DCB0
    // 0x80013658: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001DCB0(rdram, ctx);
        goto after_0;
    // 0x80013658: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8001365C: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80013660: jal         0x8002E510
    // 0x80013664: addiu       $a0, $a0, 0x75F0
    ctx->r4 = ADD32(ctx->r4, 0X75F0);
    osStartThread_recomp(rdram, ctx);
        goto after_1;
    // 0x80013664: addiu       $a0, $a0, 0x75F0
    ctx->r4 = ADD32(ctx->r4, 0X75F0);
    after_1:
    // 0x80013668: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001366C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80013670: jr          $ra
    return;
;}
RECOMP_FUNC void func_80013678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001367C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80013680: jal         0x800131C0
    // 0x80013684: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800131C0(rdram, ctx);
        goto after_0;
    // 0x80013684: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80013688: jal         0x80012548
    // 0x8001368C: nop

    func_80012548(rdram, ctx);
        goto after_1;
    // 0x8001368C: nop

    after_1:
    // 0x80013690: jal         0x80012598
    // 0x80013694: nop

    func_80012598(rdram, ctx);
        goto after_2;
    // 0x80013694: nop

    after_2:
    // 0x80013698: jal         0x8002E510
    // 0x8001369C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    osStartThread_recomp(rdram, ctx);
        goto after_3;
    // 0x8001369C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
L_800136A0:
    // 0x800136A0: b           L_800136A0
    pause_self(rdram);
    // 0x800136A4: nop

    // 0x800136A8: nop

    // 0x800136AC: nop

    // 0x800136B0: nop

    // 0x800136B4: nop

    // 0x800136B8: nop

    // 0x800136BC: nop

    // 0x800136C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800136C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800136C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800136D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800136D0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800136D4: lwc1        $f0, 0x16B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X16B0);
    // 0x800136D8: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800136DC: b           L_800136F8
    // 0x800136E0: lwc1        $f2, 0x16B4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X16B4);
    static_2_800136F8(rdram, ctx);
    return;
    // 0x800136E0: lwc1        $f2, 0x16B4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X16B4);
;}
RECOMP_FUNC void func_800136E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800136E4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800136E8: lwc1        $f0, 0x16B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X16B8);
    // 0x800136EC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800136F0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800136F4: nop

    // 0x800136F8: mul.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x800136FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80013700: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80013704: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x80013708: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8001370C: sub.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80013710: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80013714: bc1f        L_80013720
    if (!c1cs) {
        // 0x80013718: nop
    
            goto L_80013720;
    }
    // 0x80013718: nop

    // 0x8001371C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
L_80013720:
    // 0x80013720: jr          $ra
    return;
;}
RECOMP_FUNC void func_80013728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013728: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x8001372C: lwc1        $f0, 0x16BC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X16BC);
    // 0x80013730: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80013734: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80013738: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8001373C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80013740: nop

    // 0x80013744: mul.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x80013748: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8001374C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x80013750: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80013754: sub.s       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80013758: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8001375C: neg.s       $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = -ctx->f4.fl;
    // 0x80013760: bc1tl       L_80013774
    if (c1cs) {
        // 0x80013764: c.lt.s      $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
            goto L_80013774;
    }
    goto skip_0;
    // 0x80013764: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    skip_0:
    // 0x80013768: jr          $ra
    // 0x8001376C: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    return;
    // 0x8001376C: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x80013770: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
L_80013774:
    // 0x80013774: bc1f        L_80013780
    if (!c1cs) {
        // 0x80013778: nop
    
            goto L_80013780;
    }
    // 0x80013778: nop

    // 0x8001377C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
L_80013780:
    // 0x80013780: jr          $ra
    // 0x80013784: nop

    return;
    // 0x80013784: nop

;}
RECOMP_FUNC void func_80013788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013788: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x8001378C: addiu       $t0, $t0, -0x3370
    ctx->r8 = ADD32(ctx->r8, -0X3370);
    // 0x80013790: jr          $ra
    // 0x80013794: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
    return;
    // 0x80013794: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
;}
RECOMP_FUNC void func_80013798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013798: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x8001379C: lwc1        $f14, 0x16C0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X16C0);
    // 0x800137A0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800137A4: b           L_80013818
    // 0x800137A8: lwc1        $f16, 0x16C4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X16C4);
    func_80013818(rdram, ctx);
    return;
    // 0x800137A8: lwc1        $f16, 0x16C4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X16C4);
;}
RECOMP_FUNC void func_800137AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800137AC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800137B0: lwc1        $f14, 0x16C8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X16C8);
    // 0x800137B4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800137B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800137BC: b           L_80013818
    func_80013818(rdram, ctx);
    return;
;}
RECOMP_FUNC void func_800137C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800137C4: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x800137C8: addiu       $t0, $t0, -0x3370
    ctx->r8 = ADD32(ctx->r8, -0X3370);
    // 0x800137CC: jr          $ra
    // 0x800137D0: lwc1        $f0, 0x4($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X4);
    return;
    // 0x800137D0: lwc1        $f0, 0x4($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X4);
;}
RECOMP_FUNC void func_800137D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800137D4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800137D8: lwc1        $f14, 0x16CC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X16CC);
    // 0x800137DC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800137E0: or          $a1, $ra, $zero
    ctx->r5 = ctx->r31 | 0;
    // 0x800137E4: jal         0x80013818
    // 0x800137E8: lwc1        $f16, 0x16D0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X16D0);
    func_80013818(rdram, ctx);
        goto after_0;
    // 0x800137E8: lwc1        $f16, 0x16D0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X16D0);
    after_0:
    // 0x800137EC: jr          $ra
    // 0x800137F0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x800137F0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_800137F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800137F4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800137F8: lwc1        $f14, 0x16D4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X16D4);
    // 0x800137FC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80013800: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80013804: or          $a1, $ra, $zero
    ctx->r5 = ctx->r31 | 0;
    // 0x80013808: jal         0x80013818
    // 0x8001380C: nop

    func_80013818(rdram, ctx);
        goto after_0;
    // 0x8001380C: nop

    after_0:
    // 0x80013810: jr          $ra
    // 0x80013814: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x80013814: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_80013818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013818: mul.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x8001381C: lui         $at, 0x4B00
    ctx->r1 = S32(0X4B00 << 16);
    // 0x80013820: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x80013824: addiu       $t1, $t1, -0x2C60
    ctx->r9 = ADD32(ctx->r9, -0X2C60);
    // 0x80013828: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8001382C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x80013830: mul.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80013834: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80013838: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8001383C: mul.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x80013840: nop

    // 0x80013844: mul.s       $f4, $f12, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x80013848: round.w.s   $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = lroundf(ctx->f4.fl);
    // 0x8001384C: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x80013850: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80013854: lwc1        $f6, 0x16D8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X16D8);
    // 0x80013858: andi        $t2, $a0, 0xFFF
    ctx->r10 = ctx->r4 & 0XFFF;
    // 0x8001385C: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80013860: srl         $t0, $a0, 10
    ctx->r8 = S32(U32(ctx->r4) >> 10);
    // 0x80013864: andi        $t0, $t0, 0x1FFC
    ctx->r8 = ctx->r8 & 0X1FFC;
    // 0x80013868: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001386C: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x80013870: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80013874: lwc1        $f12, 0x4($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80013878: addiu       $t0, $t0, 0x800
    ctx->r8 = ADD32(ctx->r8, 0X800);
    // 0x8001387C: andi        $t0, $t0, 0x1FFC
    ctx->r8 = ctx->r8 & 0X1FFC;
    // 0x80013880: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80013884: sub.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x80013888: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x8001388C: lui         $t3, 0x8004
    ctx->r11 = S32(0X8004 << 16);
    // 0x80013890: addiu       $t3, $t3, -0x3370
    ctx->r11 = ADD32(ctx->r11, -0X3370);
    // 0x80013894: mul.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80013898: add.s       $f2, $f12, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x8001389C: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x800138A0: lwc1        $f12, 0x4($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800138A4: swc1        $f2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f2.u32l;
    // 0x800138A8: sub.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x800138AC: mul.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x800138B0: add.s       $f0, $f12, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x800138B4: jr          $ra
    // 0x800138B8: swc1        $f0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f0.u32l;
    return;
    // 0x800138B8: swc1        $f0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_800138BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800138BC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800138C0: lwc1        $f14, 0x16DC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X16DC);
    // 0x800138C4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800138C8: b           L_800138E4
    // 0x800138CC: lwc1        $f16, 0x16E0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X16E0);
    static_2_800138E4(rdram, ctx);
    return;
    // 0x800138CC: lwc1        $f16, 0x16E0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X16E0);
;}
RECOMP_FUNC void func_800138D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800138D0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800138D4: lwc1        $f14, 0x16E4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X16E4);
    // 0x800138D8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800138DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800138E0: nop

    // 0x800138E4: mul.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x800138E8: lui         $at, 0x4B00
    ctx->r1 = S32(0X4B00 << 16);
    // 0x800138EC: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x800138F0: addiu       $t1, $t1, -0x2C60
    ctx->r9 = ADD32(ctx->r9, -0X2C60);
    // 0x800138F4: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800138F8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x800138FC: mul.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80013900: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80013904: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80013908: mul.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x8001390C: nop

    // 0x80013910: mul.s       $f4, $f12, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x80013914: round.w.s   $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = lroundf(ctx->f4.fl);
    // 0x80013918: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x8001391C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80013920: lwc1        $f6, 0x16E8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X16E8);
    // 0x80013924: andi        $t2, $a0, 0xFFF
    ctx->r10 = ctx->r4 & 0XFFF;
    // 0x80013928: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8001392C: srl         $t0, $a0, 10
    ctx->r8 = S32(U32(ctx->r4) >> 10);
    // 0x80013930: addiu       $t0, $t0, 0x800
    ctx->r8 = ADD32(ctx->r8, 0X800);
    // 0x80013934: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80013938: andi        $t0, $t0, 0x1FFC
    ctx->r8 = ctx->r8 & 0X1FFC;
    // 0x8001393C: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x80013940: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80013944: lwc1        $f12, 0x4($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80013948: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8001394C: sub.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x80013950: mul.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80013954: jr          $ra
    // 0x80013958: add.s       $f0, $f12, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f10.fl;
    return;
    // 0x80013958: add.s       $f0, $f12, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f10.fl;
;}
RECOMP_FUNC void func_8001395C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001395C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80013960: lwc1        $f14, 0x16EC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X16EC);
    // 0x80013964: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80013968: b           L_80013984
    // 0x8001396C: lwc1        $f16, 0x16F0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X16F0);
    static_2_80013984(rdram, ctx);
    return;
    // 0x8001396C: lwc1        $f16, 0x16F0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X16F0);
;}
RECOMP_FUNC void func_80013970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013970: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80013974: lwc1        $f14, 0x16F4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X16F4);
    // 0x80013978: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8001397C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80013980: nop

    // 0x80013984: mul.s       $f0, $f12, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x80013988: lui         $at, 0x4B00
    ctx->r1 = S32(0X4B00 << 16);
    // 0x8001398C: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x80013990: addiu       $t1, $t1, -0x2C60
    ctx->r9 = ADD32(ctx->r9, -0X2C60);
    // 0x80013994: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80013998: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8001399C: mul.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800139A0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800139A4: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x800139A8: mul.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x800139AC: nop

    // 0x800139B0: mul.s       $f4, $f12, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x800139B4: round.w.s   $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = lroundf(ctx->f4.fl);
    // 0x800139B8: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x800139BC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800139C0: lwc1        $f6, 0x16F8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X16F8);
    // 0x800139C4: andi        $t2, $a0, 0xFFF
    ctx->r10 = ctx->r4 & 0XFFF;
    // 0x800139C8: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x800139CC: srl         $t0, $a0, 10
    ctx->r8 = S32(U32(ctx->r4) >> 10);
    // 0x800139D0: andi        $t0, $t0, 0x1FFC
    ctx->r8 = ctx->r8 & 0X1FFC;
    // 0x800139D4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800139D8: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x800139DC: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x800139E0: lwc1        $f12, 0x4($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800139E4: mul.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800139E8: sub.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x800139EC: mul.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x800139F0: jr          $ra
    // 0x800139F4: add.s       $f0, $f12, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f10.fl;
    return;
    // 0x800139F4: add.s       $f0, $f12, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f10.fl;
;}
RECOMP_FUNC void func_800139F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800139F8: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800139FC: lwc1        $f14, 0x16FC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X16FC);
    // 0x80013A00: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80013A04: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80013A08: or          $a3, $ra, $zero
    ctx->r7 = ctx->r31 | 0;
    // 0x80013A0C: jal         0x80013818
    // 0x80013A10: nop

    func_80013818(rdram, ctx);
        goto after_0;
    // 0x80013A10: nop

    after_0:
    // 0x80013A14: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80013A18: or          $ra, $a3, $zero
    ctx->r31 = ctx->r7 | 0;
    // 0x80013A1C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80013A20: bc1t        L_80013A30
    if (c1cs) {
            // 0x80013A24: nop

    func_80013A30(rdram, ctx);
    return;
    }
    // 0x80013A24: nop

    // 0x80013A28: jr          $ra
    // 0x80013A2C: div.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    return;
    // 0x80013A2C: div.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
;}
RECOMP_FUNC void func_80013A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013A30: c.olt.s     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x80013A34: bc1tl       L_80013A50
    if (c1cs) {
            // 0x80013A38: lui         $t0, 0xFF00
    ctx->r8 = S32(0XFF00 << 16);
    static_2_80013A50(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80013A38: lui         $t0, 0xFF00
    ctx->r8 = S32(0XFF00 << 16);
    skip_0:
    // 0x80013A3C: lui         $t0, 0x7F00
    ctx->r8 = S32(0X7F00 << 16);
    // 0x80013A40: mtc1        $t0, $f0
    ctx->f0.u32l = ctx->r8;
    // 0x80013A44: jr          $ra
    // 0x80013A48: nop

    return;
    // 0x80013A48: nop

;}
RECOMP_FUNC void func_80013A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013A4C: lui         $t0, 0xFF00
    ctx->r8 = S32(0XFF00 << 16);
    // 0x80013A50: mtc1        $t0, $f0
    ctx->f0.u32l = ctx->r8;
    // 0x80013A54: jr          $ra
    // 0x80013A58: nop

    return;
    // 0x80013A58: nop

;}
RECOMP_FUNC void func_80013A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013A5C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80013A60: or          $a3, $ra, $zero
    ctx->r7 = ctx->r31 | 0;
    // 0x80013A64: jal         0x80013ABC
    // 0x80013A68: lwc1        $f14, 0x1700($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X1700);
    func_80013ABC(rdram, ctx);
        goto after_0;
    // 0x80013A68: lwc1        $f14, 0x1700($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X1700);
    after_0:
    // 0x80013A6C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80013A70: lwc1        $f2, 0x1704($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X1704);
    // 0x80013A74: jr          $ra
    // 0x80013A78: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    return;
    // 0x80013A78: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
;}
RECOMP_FUNC void func_80013A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013A7C: lui         $at, 0x3E34
    ctx->r1 = S32(0X3E34 << 16);
    // 0x80013A80: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80013A84: or          $a3, $ra, $zero
    ctx->r7 = ctx->r31 | 0;
    // 0x80013A88: jal         0x80013ABC
    // 0x80013A8C: nop

    func_80013ABC(rdram, ctx);
        goto after_0;
    // 0x80013A8C: nop

    after_0:
    // 0x80013A90: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80013A94: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80013A98: jr          $ra
    // 0x80013A9C: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
    return;
    // 0x80013A9C: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
;}
RECOMP_FUNC void func_80013AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013AA0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80013AA4: b           L_80013ABC
    // 0x80013AA8: lwc1        $f14, 0x1708($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X1708);
    func_80013ABC(rdram, ctx);
    return;
    // 0x80013AA8: lwc1        $f14, 0x1708($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X1708);
;}
RECOMP_FUNC void func_80013AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013AAC: lui         $at, 0x3E34
    ctx->r1 = S32(0X3E34 << 16);
    // 0x80013AB0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80013AB4: b           L_80013ABC
    func_80013ABC(rdram, ctx);
    return;
;}
RECOMP_FUNC void func_80013ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013ABC: lui         $at, 0x4880
    ctx->r1 = S32(0X4880 << 16);
    // 0x80013AC0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80013AC4: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x80013AC8: addiu       $t8, $t8, -0x3360
    ctx->r24 = ADD32(ctx->r24, -0X3360);
    // 0x80013ACC: mul.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x80013AD0: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80013AD4: mfc1        $v0, $f0
    ctx->r2 = (int32_t)ctx->f0.u32l;
    // 0x80013AD8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x80013ADC: addiu       $t9, $t9, -0x2C60
    ctx->r25 = ADD32(ctx->r25, -0X2C60);
    // 0x80013AE0: bgtzl       $v0, L_80013AF8
    if (SIGNED(ctx->r2) > 0) {
        // 0x80013AE4: srl         $t1, $v0, 12
        ctx->r9 = S32(U32(ctx->r2) >> 12);
            goto L_80013AF8;
    }
    goto skip_0;
    // 0x80013AE4: srl         $t1, $v0, 12
    ctx->r9 = S32(U32(ctx->r2) >> 12);
    skip_0:
    // 0x80013AE8: abs.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = fabsf(ctx->f12.fl);
    // 0x80013AEC: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x80013AF0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80013AF4: srl         $t1, $v0, 12
    ctx->r9 = S32(U32(ctx->r2) >> 12);
L_80013AF8:
    // 0x80013AF8: addu        $t0, $t1, $t8
    ctx->r8 = ADD32(ctx->r9, ctx->r24);
    // 0x80013AFC: lb          $v1, 0x0($t0)
    ctx->r3 = MEM_B(ctx->r8, 0X0);
    // 0x80013B00: bgezl       $v1, L_80013B18
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80013B04: addu        $t0, $v1, $t8
        ctx->r8 = ADD32(ctx->r3, ctx->r24);
            goto L_80013B18;
    }
    goto skip_1;
    // 0x80013B04: addu        $t0, $v1, $t8
    ctx->r8 = ADD32(ctx->r3, ctx->r24);
    skip_1:
    // 0x80013B08: srl         $t1, $v0, 6
    ctx->r9 = S32(U32(ctx->r2) >> 6);
    // 0x80013B0C: addu        $t0, $t1, $t8
    ctx->r8 = ADD32(ctx->r9, ctx->r24);
    // 0x80013B10: lb          $v1, -0xF7F($t0)
    ctx->r3 = MEM_B(ctx->r8, -0XF7F);
    // 0x80013B14: addu        $t0, $v1, $t8
    ctx->r8 = ADD32(ctx->r3, ctx->r24);
L_80013B18:
    // 0x80013B18: lw          $a0, 0x84($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X84);
    // 0x80013B1C: lw          $a2, 0x8C($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8C);
    // 0x80013B20: lw          $a1, 0x88($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X88);
    // 0x80013B24: subu        $t1, $v0, $a0
    ctx->r9 = SUB32(ctx->r2, ctx->r4);
    // 0x80013B28: srlv        $t1, $t1, $a2
    ctx->r9 = S32(U32(ctx->r9) >> (ctx->r6 & 31));
    // 0x80013B2C: addu        $t1, $t1, $a1
    ctx->r9 = ADD32(ctx->r9, ctx->r5);
    // 0x80013B30: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x80013B34: addu        $t0, $t1, $t8
    ctx->r8 = ADD32(ctx->r9, ctx->r24);
    // 0x80013B38: lh          $v1, 0xF4($t0)
    ctx->r3 = MEM_H(ctx->r8, 0XF4);
    // 0x80013B3C: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x80013B40: addu        $t0, $t1, $t9
    ctx->r8 = ADD32(ctx->r9, ctx->r25);
    // 0x80013B44: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80013B48: lwc1        $f2, 0x4($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80013B4C: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x80013B50: sub.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80013B54: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x80013B58: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80013B5C: div.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80013B60: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x80013B64: mul.s       $f0, $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80013B68: jr          $ra
    return;
;}
RECOMP_FUNC void func_80013B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013B70: mtc1        $a2, $f16
    ctx->f16.u32l = ctx->r6;
    // 0x80013B74: j           L_80013B90
    static_2_80013B90(rdram, ctx);
    return;
;}
RECOMP_FUNC void func_80013B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013B7C: mul.s       $f16, $f12, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80013B80: nop

    // 0x80013B84: mul.s       $f0, $f14, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80013B88: add.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x80013B8C: sqrt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = sqrtf(ctx->f0.fl);
    // 0x80013B90: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80013B94: mov.s       $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = ctx->f14.fl;
    // 0x80013B98: c.eq.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl == ctx->f12.fl;
    // 0x80013B9C: bc1fl       L_80013BC8
    if (!c1cs) {
        // 0x80013BA0: c.eq.s      $f10, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl == ctx->f14.fl;
            goto L_80013BC8;
    }
    goto skip_0;
    // 0x80013BA0: c.eq.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl == ctx->f14.fl;
    skip_0:
    // 0x80013BA4: c.ole.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl <= ctx->f14.fl;
    // 0x80013BA8: bc1t        L_80013BBC
    if (c1cs) {
        // 0x80013BAC: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_80013BBC;
    }
    // 0x80013BAC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80013BB0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80013BB4: jr          $ra
    // 0x80013BB8: nop

    return;
    // 0x80013BB8: nop

L_80013BBC:
    // 0x80013BBC: jr          $ra
    // 0x80013BC0: mov.s       $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = ctx->f10.fl;
    return;
    // 0x80013BC0: mov.s       $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = ctx->f10.fl;
    // 0x80013BC4: c.eq.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl == ctx->f14.fl;
L_80013BC8:
    // 0x80013BC8: bc1fl       L_80013BFC
    if (!c1cs) {
        // 0x80013BCC: lui         $at, 0x3E34
        ctx->r1 = S32(0X3E34 << 16);
            goto L_80013BFC;
    }
    goto skip_1;
    // 0x80013BCC: lui         $at, 0x3E34
    ctx->r1 = S32(0X3E34 << 16);
    skip_1:
    // 0x80013BD0: c.olt.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x80013BD4: bc1t        L_80013BE8
    if (c1cs) {
        // 0x80013BD8: lui         $at, 0x4387
        ctx->r1 = S32(0X4387 << 16);
            goto L_80013BE8;
    }
    // 0x80013BD8: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80013BDC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80013BE0: jr          $ra
    // 0x80013BE4: nop

    return;
    // 0x80013BE4: nop

L_80013BE8:
    // 0x80013BE8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80013BEC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80013BF0: jr          $ra
    // 0x80013BF4: nop

    return;
    // 0x80013BF4: nop

    // 0x80013BF8: lui         $at, 0x3E34
    ctx->r1 = S32(0X3E34 << 16);
L_80013BFC:
    // 0x80013BFC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80013C00: or          $a3, $ra, $zero
    ctx->r7 = ctx->r31 | 0;
    // 0x80013C04: jal         0x80013ABC
    // 0x80013C08: div.s       $f12, $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f16.fl);
    func_80013ABC(rdram, ctx);
        goto after_0;
    // 0x80013C08: div.s       $f12, $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f16.fl);
    after_0:
    // 0x80013C0C: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x80013C10: or          $ra, $a3, $zero
    ctx->r31 = ctx->r7 | 0;
    // 0x80013C14: bc1f        L_80013C28
    if (!c1cs) {
        // 0x80013C18: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_80013C28;
    }
    // 0x80013C18: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80013C1C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80013C20: nop

    // 0x80013C24: sub.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f0.fl;
L_80013C28:
    // 0x80013C28: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80013C2C: bc1f        L_80013C40
    if (!c1cs) {
            // 0x80013C30: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    func_80013C40(rdram, ctx);
    return;
    }
    // 0x80013C30: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80013C34: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80013C38: jr          $ra
    // 0x80013C3C: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    return;
    // 0x80013C3C: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
;}
RECOMP_FUNC void func_80013C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013C40: jr          $ra
    // 0x80013C44: nop

    return;
    // 0x80013C44: nop

;}
RECOMP_FUNC void func_80013C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013C48: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80013C4C: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x80013C50: jal         0x80013B7C
    // 0x80013C54: nop

    func_80013B7C(rdram, ctx);
        goto after_0;
    // 0x80013C54: nop

    after_0:
    // 0x80013C58: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80013C5C: lwc1        $f2, 0x170C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X170C);
    // 0x80013C60: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x80013C64: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x80013C68: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80013C6C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80013C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013C80: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80013C84: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x80013C88: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80013C8C: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x80013C90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80013C94: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x80013C98: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80013C9C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80013CA0: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80013CA4: jal         0x800EFA4C
    // 0x80013CA8: lw          $a3, 0x98($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X98);
    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x80013CA8: lw          $a3, 0x98($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X98);
    after_0:
    // 0x80013CAC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80013CB0: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    // 0x80013CB4: lw          $a2, 0xA0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA0);
    // 0x80013CB8: jal         0x800EFA4C
    // 0x80013CBC: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    func_800EFA4C(rdram, ctx);
        goto after_1;
    // 0x80013CBC: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    after_1:
    // 0x80013CC0: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80013CC4: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    // 0x80013CC8: lw          $a2, 0xAC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XAC);
    // 0x80013CCC: jal         0x800EFA4C
    // 0x80013CD0: lw          $a3, 0xB0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB0);
    func_800EFA4C(rdram, ctx);
        goto after_2;
    // 0x80013CD0: lw          $a3, 0xB0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB0);
    after_2:
    // 0x80013CD4: addiu       $t6, $sp, 0x24
    ctx->r14 = ADD32(ctx->r29, 0X24);
    // 0x80013CD8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80013CDC: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80013CE0: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x80013CE4: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x80013CE8: jal         0x800F2984
    // 0x80013CEC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_800F2984(rdram, ctx);
        goto after_3;
    // 0x80013CEC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x80013CF0: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80013CF4: jal         0x8002ED00
    // 0x80013CF8: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    func_8002ED00(rdram, ctx);
        goto after_4;
    // 0x80013CF8: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    after_4:
    // 0x80013CFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80013D00: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x80013D04: jr          $ra
    return;
;}
RECOMP_FUNC void func_80013D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013D10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80013D14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80013D18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80013D1C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80013D20: addiu       $a0, $a0, -0x7C30
    ctx->r4 = ADD32(ctx->r4, -0X7C30);
    // 0x80013D24: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80013D28: jal         0x8002EAD0
    // 0x80013D2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80013D2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80013D30: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80013D34: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80013D38: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x80013D3C: bnel        $t6, $at, L_80013D88
    if (ctx->r14 != ctx->r1) {
        // 0x80013D40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80013D88;
    }
    goto skip_0;
    // 0x80013D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80013D44: lw          $t8, -0xBD0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0XBD0);
    // 0x80013D48: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x80013D4C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80013D50: beq         $t8, $zero, L_80013D68
    if (ctx->r24 == 0) {
        // 0x80013D54: sw          $t7, -0x70F4($at)
        MEM_W(-0X70F4, ctx->r1) = ctx->r15;
            goto L_80013D68;
    }
    // 0x80013D54: sw          $t7, -0x70F4($at)
    MEM_W(-0X70F4, ctx->r1) = ctx->r15;
    // 0x80013D58: jal         0x8002EF70
    // 0x80013D5C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    osDpSetStatus_recomp(rdram, ctx);
        goto after_1;
    // 0x80013D5C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x80013D60: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80013D64: sw          $zero, -0xBD0($at)
    MEM_W(-0XBD0, ctx->r1) = 0;
L_80013D68:
    // 0x80013D68: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80013D6C: addiu       $a0, $a0, -0x7BC8
    ctx->r4 = ADD32(ctx->r4, -0X7BC8);
    // 0x80013D70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80013D74: jal         0x8002E1F0
    // 0x80013D78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x80013D78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80013D7C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80013D80: sw          $zero, -0x70F4($at)
    MEM_W(-0X70F4, ctx->r1) = 0;
    // 0x80013D84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80013D88:
    // 0x80013D88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80013D8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80013D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013D94: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80013D98: addiu       $v1, $v1, -0x7100
    ctx->r3 = ADD32(ctx->r3, -0X7100);
    // 0x80013D9C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80013DA0: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80013DA4: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80013DA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80013DAC: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80013DB0: addiu       $t7, $t7, -0x70FC
    ctx->r15 = ADD32(ctx->r15, -0X70FC);
    // 0x80013DB4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80013DB8: mfhi        $v0
    ctx->r2 = hi;
    // 0x80013DBC: beq         $v0, $t8, L_80013DDC
    if (ctx->r2 == ctx->r24) {
        // 0x80013DC0: nop
    
            goto L_80013DDC;
    }
    // 0x80013DC0: nop

    // 0x80013DC4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80013DC8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80013DCC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80013DD0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80013DD4: sw          $a0, -0x7150($at)
    MEM_W(-0X7150, ctx->r1) = ctx->r4;
    // 0x80013DD8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80013DDC:
    // 0x80013DDC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80013DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013DE4: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80013DE8: addiu       $v1, $v1, -0x7158
    ctx->r3 = ADD32(ctx->r3, -0X7158);
    // 0x80013DEC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80013DF0: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80013DF4: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80013DF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80013DFC: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80013E00: addiu       $t7, $t7, -0x7154
    ctx->r15 = ADD32(ctx->r15, -0X7154);
    // 0x80013E04: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80013E08: mfhi        $v0
    ctx->r2 = hi;
    // 0x80013E0C: beq         $v0, $t8, L_80013E2C
    if (ctx->r2 == ctx->r24) {
        // 0x80013E10: nop
    
            goto L_80013E2C;
    }
    // 0x80013E10: nop

    // 0x80013E14: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80013E18: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80013E1C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80013E20: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80013E24: sw          $a0, -0x71A8($at)
    MEM_W(-0X71A8, ctx->r1) = ctx->r4;
    // 0x80013E28: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80013E2C:
    // 0x80013E2C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80013E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013E34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80013E38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80013E3C: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x80013E40: addiu       $s0, $s0, -0xC50
    ctx->r16 = ADD32(ctx->r16, -0XC50);
    // 0x80013E44: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x80013E48: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x80013E4C: addiu       $v0, $v0, -0x6FB0
    ctx->r2 = ADD32(ctx->r2, -0X6FB0);
    // 0x80013E50: addiu       $t6, $t6, -0x6EE0
    ctx->r14 = ADD32(ctx->r14, -0X6EE0);
    // 0x80013E54: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x80013E58: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x80013E5C: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x80013E60: addiu       $t8, $t8, 0x7880
    ctx->r24 = ADD32(ctx->r24, 0X7880);
    // 0x80013E64: addiu       $t9, $t9, 0x2010
    ctx->r25 = ADD32(ctx->r25, 0X2010);
    // 0x80013E68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80013E6C: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x80013E70: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
    // 0x80013E74: sw          $t8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r24;
    // 0x80013E78: sw          $t9, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r25;
    // 0x80013E7C: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x80013E80: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80013E84: sw          $t0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r8;
    // 0x80013E88: lw          $t2, 0x8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X8);
    // 0x80013E8C: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x80013E90: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80013E94: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80013E98: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x80013E9C: sra         $t4, $t3, 3
    ctx->r12 = S32(SIGNED(ctx->r11) >> 3);
    // 0x80013EA0: sll         $a1, $t4, 3
    ctx->r5 = S32(ctx->r12 << 3);
    // 0x80013EA4: jal         0x8002E660
    // 0x80013EA8: sw          $a1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r5;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x80013EA8: sw          $a1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r5;
    after_0:
    // 0x80013EAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80013EB0: jal         0x8002E660
    // 0x80013EB4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x80013EB4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
    // 0x80013EB8: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80013EBC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80013EC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80013EC4: jal         0x8002F08C
    // 0x80013EC8: sw          $a2, -0x7B88($at)
    MEM_W(-0X7B88, ctx->r1) = ctx->r6;
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_2;
    // 0x80013EC8: sw          $a2, -0x7B88($at)
    MEM_W(-0X7B88, ctx->r1) = ctx->r6;
    after_2:
    // 0x80013ECC: jal         0x8002F1F4
    // 0x80013ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_3;
    // 0x80013ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80013ED4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80013ED8: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80013EDC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80013EE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80013EE4: sw          $t6, -0x7B74($at)
    MEM_W(-0X7B74, ctx->r1) = ctx->r14;
    // 0x80013EE8: jr          $ra
    // 0x80013EEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80013EEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80013EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013EF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80013EF4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80013EF8: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x80013EFC: addiu       $s0, $s0, -0xC10
    ctx->r16 = ADD32(ctx->r16, -0XC10);
    // 0x80013F00: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x80013F04: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x80013F08: addiu       $v0, $v0, -0x6FB0
    ctx->r2 = ADD32(ctx->r2, -0X6FB0);
    // 0x80013F0C: addiu       $t6, $t6, -0x6EE0
    ctx->r14 = ADD32(ctx->r14, -0X6EE0);
    // 0x80013F10: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x80013F14: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x80013F18: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x80013F1C: addiu       $t8, $t8, -0x6EE0
    ctx->r24 = ADD32(ctx->r24, -0X6EE0);
    // 0x80013F20: addiu       $t9, $t9, 0x2750
    ctx->r25 = ADD32(ctx->r25, 0X2750);
    // 0x80013F24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80013F28: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80013F2C: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x80013F30: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
    // 0x80013F34: sw          $t8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r24;
    // 0x80013F38: sw          $t9, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r25;
    // 0x80013F3C: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x80013F40: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80013F44: sw          $t0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r8;
    // 0x80013F48: lw          $t2, 0x8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X8);
    // 0x80013F4C: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x80013F50: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80013F54: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x80013F58: sra         $t4, $t3, 3
    ctx->r12 = S32(SIGNED(ctx->r11) >> 3);
    // 0x80013F5C: sll         $a1, $t4, 3
    ctx->r5 = S32(ctx->r12 << 3);
    // 0x80013F60: jal         0x8002E660
    // 0x80013F64: sw          $a1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r5;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x80013F64: sw          $a1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r5;
    after_0:
    // 0x80013F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80013F6C: jal         0x8002E660
    // 0x80013F70: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x80013F70: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
    // 0x80013F74: jal         0x8002F08C
    // 0x80013F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_2;
    // 0x80013F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80013F7C: jal         0x8002F1F4
    // 0x80013F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_3;
    // 0x80013F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80013F84: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x80013F88: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80013F8C: lui         $s0, 0x8008
    ctx->r16 = S32(0X8008 << 16);
    // 0x80013F90: ori         $t7, $t6, 0x8
    ctx->r15 = ctx->r14 | 0X8;
    // 0x80013F94: sw          $t7, -0x7B74($at)
    MEM_W(-0X7B74, ctx->r1) = ctx->r15;
    // 0x80013F98: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x80013F9C: addiu       $s0, $s0, -0x7B78
    ctx->r16 = ADD32(ctx->r16, -0X7B78);
    // 0x80013FA0: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x80013FA4: jal         0x8002F240
    // 0x80013FA8: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    osDpGetStatus_recomp(rdram, ctx);
        goto after_4;
    // 0x80013FA8: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    after_4:
    // 0x80013FAC: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
    // 0x80013FB0: bnel        $t0, $zero, L_80013FD4
    if (ctx->r8 != 0) {
        // 0x80013FB4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80013FD4;
    }
    goto skip_0;
    // 0x80013FB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80013FB8: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x80013FBC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80013FC0: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x80013FC4: sw          $t1, -0x7B7C($at)
    MEM_W(-0X7B7C, ctx->r1) = ctx->r9;
    // 0x80013FC8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80013FCC: sw          $t2, -0x70F0($at)
    MEM_W(-0X70F0, ctx->r1) = ctx->r10;
    // 0x80013FD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80013FD4:
    // 0x80013FD4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80013FD8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80013FDC: jr          $ra
    // 0x80013FE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80013FE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80013FE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013FE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80013FE8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80013FEC: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x80013FF0: addiu       $s0, $s0, -0xC10
    ctx->r16 = ADD32(ctx->r16, -0XC10);
    // 0x80013FF4: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x80013FF8: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x80013FFC: addiu       $v0, $v0, -0x6FB0
    ctx->r2 = ADD32(ctx->r2, -0X6FB0);
    // 0x80014000: addiu       $t6, $t6, -0x6EE0
    ctx->r14 = ADD32(ctx->r14, -0X6EE0);
    // 0x80014004: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x80014008: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x8001400C: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x80014010: addiu       $t8, $t8, -0x47C0
    ctx->r24 = ADD32(ctx->r24, -0X47C0);
    // 0x80014014: addiu       $t9, $t9, 0x2F90
    ctx->r25 = ADD32(ctx->r25, 0X2F90);
    // 0x80014018: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001401C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80014020: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x80014024: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
    // 0x80014028: sw          $t8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r24;
    // 0x8001402C: sw          $t9, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r25;
    // 0x80014030: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x80014034: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80014038: sw          $t0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r8;
    // 0x8001403C: lw          $t2, 0x8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X8);
    // 0x80014040: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x80014044: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80014048: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x8001404C: sra         $t4, $t3, 3
    ctx->r12 = S32(SIGNED(ctx->r11) >> 3);
    // 0x80014050: sll         $a1, $t4, 3
    ctx->r5 = S32(ctx->r12 << 3);
    // 0x80014054: jal         0x8002E660
    // 0x80014058: sw          $a1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r5;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x80014058: sw          $a1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r5;
    after_0:
    // 0x8001405C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80014060: jal         0x8002E660
    // 0x80014064: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x80014064: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
    // 0x80014068: jal         0x8002F08C
    // 0x8001406C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_2;
    // 0x8001406C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80014070: jal         0x8002F1F4
    // 0x80014074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_3;
    // 0x80014074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80014078: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x8001407C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80014080: lui         $s0, 0x8008
    ctx->r16 = S32(0X8008 << 16);
    // 0x80014084: ori         $t7, $t6, 0x8
    ctx->r15 = ctx->r14 | 0X8;
    // 0x80014088: sw          $t7, -0x7B74($at)
    MEM_W(-0X7B74, ctx->r1) = ctx->r15;
    // 0x8001408C: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x80014090: addiu       $s0, $s0, -0x7B78
    ctx->r16 = ADD32(ctx->r16, -0X7B78);
    // 0x80014094: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x80014098: jal         0x8002F240
    // 0x8001409C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    osDpGetStatus_recomp(rdram, ctx);
        goto after_4;
    // 0x8001409C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    after_4:
    // 0x800140A0: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
    // 0x800140A4: bnel        $t0, $zero, L_800140C8
    if (ctx->r8 != 0) {
        // 0x800140A8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800140C8;
    }
    goto skip_0;
    // 0x800140A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800140AC: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x800140B0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800140B4: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x800140B8: sw          $t1, -0x7B7C($at)
    MEM_W(-0X7B7C, ctx->r1) = ctx->r9;
    // 0x800140BC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800140C0: sw          $t2, -0x70F0($at)
    MEM_W(-0X70F0, ctx->r1) = ctx->r10;
    // 0x800140C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800140C8:
    // 0x800140C8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800140CC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800140D0: jr          $ra
    // 0x800140D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800140D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800140D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800140D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800140DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800140E0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800140E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800140E8: beq         $v0, $at, L_80014100
    if (ctx->r2 == ctx->r1) {
        // 0x800140EC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80014100;
    }
    // 0x800140EC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800140F0: beq         $v0, $at, L_80014110
    if (ctx->r2 == ctx->r1) {
        // 0x800140F4: nop
    
            goto L_80014110;
    }
    // 0x800140F4: nop

    // 0x800140F8: b           L_8001411C
    // 0x800140FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001411C;
    // 0x800140FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80014100:
    // 0x80014100: jal         0x80013EF0
    // 0x80014104: nop

    func_80013EF0(rdram, ctx);
        goto after_0;
    // 0x80014104: nop

    after_0:
    // 0x80014108: b           L_8001411C
    // 0x8001410C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001411C;
    // 0x8001410C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80014110:
    // 0x80014110: jal         0x80013FE4
    // 0x80014114: nop

    func_80013FE4(rdram, ctx);
        goto after_1;
    // 0x80014114: nop

    after_1:
    // 0x80014118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001411C:
    // 0x8001411C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80014120: jr          $ra
    return;
;}
RECOMP_FUNC void func_80014128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001412C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80014130: jal         0x80013D94
    // 0x80014134: nop

    func_80013D94(rdram, ctx);
        goto after_0;
    // 0x80014134: nop

    after_0:
    // 0x80014138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001413C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80014140: jr          $ra
    return;
;}
RECOMP_FUNC void func_80014148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014148: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001414C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80014150: jal         0x80013DE4
    // 0x80014154: nop

    func_80013DE4(rdram, ctx);
        goto after_0;
    // 0x80014154: nop

    after_0:
    // 0x80014158: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8001415C: lw          $t6, -0x7B74($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7B74);
    // 0x80014160: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80014164: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80014168: bnel        $t6, $at, L_800141C4
    if (ctx->r14 != ctx->r1) {
        // 0x8001416C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800141C4;
    }
    goto skip_0;
    // 0x8001416C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80014170: lw          $t7, -0x7B80($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7B80);
    // 0x80014174: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x80014178: addiu       $t8, $t8, -0x7154
    ctx->r24 = ADD32(ctx->r24, -0X7154);
    // 0x8001417C: bnel        $t7, $zero, L_800141C4
    if (ctx->r15 != 0) {
        // 0x80014180: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800141C4;
    }
    goto skip_1;
    // 0x80014180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80014184: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80014188: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001418C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80014190: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80014194: jal         0x80013EF0
    // 0x80014198: lw          $a0, -0x71A8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X71A8);
    func_80013EF0(rdram, ctx);
        goto after_1;
    // 0x80014198: lw          $a0, -0x71A8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X71A8);
    after_1:
    // 0x8001419C: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x800141A0: addiu       $v0, $v0, -0x7154
    ctx->r2 = ADD32(ctx->r2, -0X7154);
    // 0x800141A4: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x800141A8: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x800141AC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800141B0: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x800141B4: mfhi        $t3
    ctx->r11 = hi;
    // 0x800141B8: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x800141BC: nop

    // 0x800141C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800141C4:
    // 0x800141C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800141C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800141D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800141D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800141D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800141D8: jal         0x80013DE4
    // 0x800141DC: nop

    func_80013DE4(rdram, ctx);
        goto after_0;
    // 0x800141DC: nop

    after_0:
    // 0x800141E0: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x800141E4: lw          $t6, -0x7B74($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7B74);
    // 0x800141E8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x800141EC: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x800141F0: bnel        $t6, $at, L_8001424C
    if (ctx->r14 != ctx->r1) {
        // 0x800141F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001424C;
    }
    goto skip_0;
    // 0x800141F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800141F8: lw          $t7, -0x7B80($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7B80);
    // 0x800141FC: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x80014200: addiu       $t8, $t8, -0x7154
    ctx->r24 = ADD32(ctx->r24, -0X7154);
    // 0x80014204: bnel        $t7, $zero, L_8001424C
    if (ctx->r15 != 0) {
        // 0x80014208: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001424C;
    }
    goto skip_1;
    // 0x80014208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8001420C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80014210: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80014214: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80014218: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x8001421C: jal         0x80013FE4
    // 0x80014220: lw          $a0, -0x71A8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X71A8);
    func_80013FE4(rdram, ctx);
        goto after_1;
    // 0x80014220: lw          $a0, -0x71A8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X71A8);
    after_1:
    // 0x80014224: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80014228: addiu       $v0, $v0, -0x7154
    ctx->r2 = ADD32(ctx->r2, -0X7154);
    // 0x8001422C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80014230: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80014234: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80014238: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x8001423C: mfhi        $t3
    ctx->r11 = hi;
    // 0x80014240: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80014244: nop

    // 0x80014248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001424C:
    // 0x8001424C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80014250: jr          $ra
    return;
;}
RECOMP_FUNC void func_80014258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014258: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8001425C: lw          $t6, -0x7B74($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7B74);
    // 0x80014260: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80014264: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80014268: bne         $t6, $at, L_800142CC
    if (ctx->r14 != ctx->r1) {
        // 0x8001426C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800142CC;
    }
    // 0x8001426C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80014270: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80014274: lw          $t7, -0x7B7C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7B7C);
    // 0x80014278: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001427C: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x80014280: bne         $t7, $at, L_800142CC
    if (ctx->r15 != ctx->r1) {
        // 0x80014284: addiu       $t8, $t8, -0x7158
        ctx->r24 = ADD32(ctx->r24, -0X7158);
            goto L_800142CC;
    }
    // 0x80014284: addiu       $t8, $t8, -0x7158
    ctx->r24 = ADD32(ctx->r24, -0X7158);
    // 0x80014288: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x8001428C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80014290: addiu       $t0, $t0, -0x7154
    ctx->r8 = ADD32(ctx->r8, -0X7154);
    // 0x80014294: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80014298: bne         $t9, $t1, L_800142CC
    if (ctx->r25 != ctx->r9) {
        // 0x8001429C: nop
    
            goto L_800142CC;
    }
    // 0x8001429C: nop

    // 0x800142A0: jal         0x8002F240
    // 0x800142A4: nop

    osDpGetStatus_recomp(rdram, ctx);
        goto after_0;
    // 0x800142A4: nop

    after_0:
    // 0x800142A8: andi        $t2, $v0, 0x2
    ctx->r10 = ctx->r2 & 0X2;
    // 0x800142AC: bne         $t2, $zero, L_800142CC
    if (ctx->r10 != 0) {
        // 0x800142B0: lui         $a0, 0x8008
        ctx->r4 = S32(0X8008 << 16);
            goto L_800142CC;
    }
    // 0x800142B0: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800142B4: addiu       $a0, $a0, -0x7BC8
    ctx->r4 = ADD32(ctx->r4, -0X7BC8);
    // 0x800142B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800142BC: jal         0x8002EAD0
    // 0x800142C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x800142C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800142C4: b           L_800142E4
    // 0x800142C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800142E4;
    // 0x800142C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800142CC:
    // 0x800142CC: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x800142D0: addiu       $v0, $v0, -0x7B84
    ctx->r2 = ADD32(ctx->r2, -0X7B84);
    // 0x800142D4: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x800142D8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800142DC: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x800142E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800142E4:
    // 0x800142E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800142E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800142F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800142F0: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x800142F4: lw          $t6, -0x7B7C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7B7C);
    // 0x800142F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800142FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80014300: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80014304: bgez        $t7, L_80014328
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80014308: nop
    
            goto L_80014328;
    }
    // 0x80014308: nop

    // 0x8001430C: jal         0x8002EF70
    // 0x80014310: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    osDpSetStatus_recomp(rdram, ctx);
        goto after_0;
    // 0x80014310: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x80014314: jal         0x8002F250
    // 0x80014318: nop

    osViGetCurrentFramebuffer_recomp(rdram, ctx);
        goto after_1;
    // 0x80014318: nop

    after_1:
    // 0x8001431C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80014320: jal         0x80015190
    // 0x80014324: sw          $v0, -0x70F8($at)
    MEM_W(-0X70F8, ctx->r1) = ctx->r2;
    func_80015190(rdram, ctx);
        goto after_2;
    // 0x80014324: sw          $v0, -0x70F8($at)
    MEM_W(-0X70F8, ctx->r1) = ctx->r2;
    after_2:
L_80014328:
    // 0x80014328: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001432C: addiu       $v0, $v0, -0x7B78
    ctx->r2 = ADD32(ctx->r2, -0X7B78);
    // 0x80014330: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80014334: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80014338: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001433C: sw          $t8, -0x7B7C($at)
    MEM_W(-0X7B7C, ctx->r1) = ctx->r24;
    // 0x80014340: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x80014344: lw          $t0, -0x7B74($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7B74);
    // 0x80014348: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001434C: sw          $zero, -0x70F0($at)
    MEM_W(-0X70F0, ctx->r1) = 0;
    // 0x80014350: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80014354: bne         $t0, $at, L_800143C8
    if (ctx->r8 != ctx->r1) {
        // 0x80014358: lui         $v0, 0x8008
        ctx->r2 = S32(0X8008 << 16);
            goto L_800143C8;
    }
    // 0x80014358: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001435C: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x80014360: addiu       $t1, $t1, -0x7158
    ctx->r9 = ADD32(ctx->r9, -0X7158);
    // 0x80014364: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x80014368: addiu       $v0, $v0, -0x7154
    ctx->r2 = ADD32(ctx->r2, -0X7154);
    // 0x8001436C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80014370: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x80014374: beq         $t2, $t3, L_800143C8
    if (ctx->r10 == ctx->r11) {
        // 0x80014378: nop
    
            goto L_800143C8;
    }
    // 0x80014378: nop

    // 0x8001437C: lw          $t4, -0x7B80($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X7B80);
    // 0x80014380: bne         $t4, $zero, L_800143C8
    if (ctx->r12 != 0) {
        // 0x80014384: nop
    
            goto L_800143C8;
    }
    // 0x80014384: nop

    // 0x80014388: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x8001438C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80014390: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80014394: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x80014398: jal         0x800140D8
    // 0x8001439C: lw          $a0, -0x71A8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X71A8);
    func_800140D8(rdram, ctx);
        goto after_3;
    // 0x8001439C: lw          $a0, -0x71A8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X71A8);
    after_3:
    // 0x800143A0: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x800143A4: addiu       $v0, $v0, -0x7154
    ctx->r2 = ADD32(ctx->r2, -0X7154);
    // 0x800143A8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800143AC: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x800143B0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800143B4: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x800143B8: mfhi        $t9
    ctx->r25 = hi;
    // 0x800143BC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800143C0: b           L_80014430
    // 0x800143C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80014430;
    // 0x800143C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800143C8:
    // 0x800143C8: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x800143CC: lw          $t0, -0x7B84($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7B84);
    // 0x800143D0: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x800143D4: addiu       $v0, $v0, -0x7154
    ctx->r2 = ADD32(ctx->r2, -0X7154);
    // 0x800143D8: beq         $t0, $zero, L_8001442C
    if (ctx->r8 == 0) {
        // 0x800143DC: lui         $t1, 0x8008
        ctx->r9 = S32(0X8008 << 16);
            goto L_8001442C;
    }
    // 0x800143DC: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x800143E0: addiu       $t1, $t1, -0x7158
    ctx->r9 = ADD32(ctx->r9, -0X7158);
    // 0x800143E4: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x800143E8: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x800143EC: bnel        $t2, $t3, L_80014430
    if (ctx->r10 != ctx->r11) {
        // 0x800143F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80014430;
    }
    goto skip_0;
    // 0x800143F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800143F4: jal         0x8002F240
    // 0x800143F8: nop

    osDpGetStatus_recomp(rdram, ctx);
        goto after_4;
    // 0x800143F8: nop

    after_4:
    // 0x800143FC: andi        $t4, $v0, 0x2
    ctx->r12 = ctx->r2 & 0X2;
    // 0x80014400: bne         $t4, $zero, L_8001442C
    if (ctx->r12 != 0) {
        // 0x80014404: lui         $a0, 0x8008
        ctx->r4 = S32(0X8008 << 16);
            goto L_8001442C;
    }
    // 0x80014404: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80014408: addiu       $a0, $a0, -0x7BC8
    ctx->r4 = ADD32(ctx->r4, -0X7BC8);
    // 0x8001440C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80014410: jal         0x8002EAD0
    // 0x80014414: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x80014414: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80014418: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x8001441C: addiu       $v1, $v1, -0x7B84
    ctx->r3 = ADD32(ctx->r3, -0X7B84);
    // 0x80014420: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80014424: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80014428: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_8001442C:
    // 0x8001442C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80014430:
    // 0x80014430: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80014434: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001443C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001443C: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80014440: lw          $a1, -0x7B84($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7B84);
    // 0x80014444: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80014448: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001444C: sltu        $t6, $zero, $a1
    ctx->r14 = 0 < ctx->r5 ? 1 : 0;
    // 0x80014450: beq         $t6, $zero, L_800144A8
    if (ctx->r14 == 0) {
        // 0x80014454: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_800144A8;
    }
    // 0x80014454: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80014458: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x8001445C: addiu       $t7, $t7, -0x7158
    ctx->r15 = ADD32(ctx->r15, -0X7158);
    // 0x80014460: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x80014464: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80014468: addiu       $t9, $t9, -0x7154
    ctx->r25 = ADD32(ctx->r25, -0X7154);
    // 0x8001446C: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80014470: xor         $a1, $t8, $t0
    ctx->r5 = ctx->r24 ^ ctx->r8;
    // 0x80014474: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80014478: beql        $a1, $zero, L_800144AC
    if (ctx->r5 == 0) {
        // 0x8001447C: sw          $zero, 0x30($sp)
        MEM_W(0X30, ctx->r29) = 0;
            goto L_800144AC;
    }
    goto skip_0;
    // 0x8001447C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    skip_0:
    // 0x80014480: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80014484: lw          $a1, -0x7B78($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7B78);
    // 0x80014488: xori        $t1, $a1, 0x2
    ctx->r9 = ctx->r5 ^ 0X2;
    // 0x8001448C: sltiu       $a1, $t1, 0x1
    ctx->r5 = ctx->r9 < 0X1 ? 1 : 0;
    // 0x80014490: beql        $a1, $zero, L_800144AC
    if (ctx->r5 == 0) {
        // 0x80014494: sw          $zero, 0x30($sp)
        MEM_W(0X30, ctx->r29) = 0;
            goto L_800144AC;
    }
    goto skip_1;
    // 0x80014494: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    skip_1:
    // 0x80014498: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8001449C: lw          $a1, -0x7B74($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7B74);
    // 0x800144A0: xori        $t2, $a1, 0x10
    ctx->r10 = ctx->r5 ^ 0X10;
    // 0x800144A4: sltiu       $a1, $t2, 0x1
    ctx->r5 = ctx->r10 < 0X1 ? 1 : 0;
L_800144A8:
    // 0x800144A8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_800144AC:
    // 0x800144AC: jal         0x8002F250
    // 0x800144B0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    osViGetCurrentFramebuffer_recomp(rdram, ctx);
        goto after_0;
    // 0x800144B0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800144B4: lui         $t3, 0x8008
    ctx->r11 = S32(0X8008 << 16);
    // 0x800144B8: lw          $t3, -0x70F8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X70F8);
    // 0x800144BC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800144C0: bne         $v0, $t3, L_800144D0
    if (ctx->r2 != ctx->r11) {
        // 0x800144C4: nop
    
            goto L_800144D0;
    }
    // 0x800144C4: nop

    // 0x800144C8: beq         $a1, $zero, L_8001454C
    if (ctx->r5 == 0) {
        // 0x800144CC: nop
    
            goto L_8001454C;
    }
    // 0x800144CC: nop

L_800144D0:
    // 0x800144D0: jal         0x8002F240
    // 0x800144D4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    osDpGetStatus_recomp(rdram, ctx);
        goto after_1;
    // 0x800144D4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_1:
    // 0x800144D8: andi        $t4, $v0, 0x2
    ctx->r12 = ctx->r2 & 0X2;
    // 0x800144DC: beq         $t4, $zero, L_80014520
    if (ctx->r12 == 0) {
        // 0x800144E0: lw          $a1, 0x2C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X2C);
            goto L_80014520;
    }
    // 0x800144E0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800144E4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800144E8: jal         0x8002EF70
    // 0x800144EC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    osDpSetStatus_recomp(rdram, ctx);
        goto after_2;
    // 0x800144EC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_2:
    // 0x800144F0: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x800144F4: lw          $t5, -0x7B78($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X7B78);
    // 0x800144F8: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x800144FC: addiu       $v0, $v0, -0x7B7C
    ctx->r2 = ADD32(ctx->r2, -0X7B7C);
    // 0x80014500: andi        $t7, $t5, 0x1
    ctx->r15 = ctx->r13 & 0X1;
    // 0x80014504: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80014508: beq         $t7, $zero, L_80014520
    if (ctx->r15 == 0) {
        // 0x8001450C: sw          $t5, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r13;
            goto L_80014520;
    }
    // 0x8001450C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80014510: lui         $a3, 0x8008
    ctx->r7 = S32(0X8008 << 16);
    // 0x80014514: addiu       $a3, $a3, -0x70F0
    ctx->r7 = ADD32(ctx->r7, -0X70F0);
    // 0x80014518: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x8001451C: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
L_80014520:
    // 0x80014520: beq         $a1, $zero, L_8001454C
    if (ctx->r5 == 0) {
        // 0x80014524: lui         $a0, 0x8008
        ctx->r4 = S32(0X8008 << 16);
            goto L_8001454C;
    }
    // 0x80014524: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80014528: addiu       $a0, $a0, -0x7BC8
    ctx->r4 = ADD32(ctx->r4, -0X7BC8);
    // 0x8001452C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80014530: jal         0x8002EAD0
    // 0x80014534: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x80014534: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80014538: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001453C: addiu       $a0, $a0, -0x7B84
    ctx->r4 = ADD32(ctx->r4, -0X7B84);
    // 0x80014540: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80014544: addiu       $t0, $t8, -0x1
    ctx->r8 = ADD32(ctx->r24, -0X1);
    // 0x80014548: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
L_8001454C:
    // 0x8001454C: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80014550: addiu       $v1, $v1, -0x70F4
    ctx->r3 = ADD32(ctx->r3, -0X70F4);
    // 0x80014554: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80014558: lui         $a3, 0x8008
    ctx->r7 = S32(0X8008 << 16);
    // 0x8001455C: addiu       $a3, $a3, -0x70F0
    ctx->r7 = ADD32(ctx->r7, -0X70F0);
    // 0x80014560: beq         $v0, $zero, L_80014578
    if (ctx->r2 == 0) {
        // 0x80014564: addiu       $t1, $v0, -0x1
        ctx->r9 = ADD32(ctx->r2, -0X1);
            goto L_80014578;
    }
    // 0x80014564: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x80014568: bne         $t1, $zero, L_80014578
    if (ctx->r9 != 0) {
        // 0x8001456C: sw          $t1, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r9;
            goto L_80014578;
    }
    // 0x8001456C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80014570: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80014574: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
L_80014578:
    // 0x80014578: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x8001457C: addiu       $v1, $v1, -0x70EC
    ctx->r3 = ADD32(ctx->r3, -0X70EC);
    // 0x80014580: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80014584: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80014588: beq         $v0, $zero, L_8001459C
    if (ctx->r2 == 0) {
        // 0x8001458C: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_8001459C;
    }
    // 0x8001458C: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x80014590: bne         $t3, $zero, L_8001459C
    if (ctx->r11 != 0) {
        // 0x80014594: sw          $t3, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r11;
            goto L_8001459C;
    }
    // 0x80014594: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x80014598: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8001459C:
    // 0x8001459C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x800145A0: beq         $v0, $zero, L_800145B4
    if (ctx->r2 == 0) {
        // 0x800145A4: addiu       $t5, $v0, -0x1
        ctx->r13 = ADD32(ctx->r2, -0X1);
            goto L_800145B4;
    }
    // 0x800145A4: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x800145A8: bne         $t5, $zero, L_800145B4
    if (ctx->r13 != 0) {
        // 0x800145AC: sw          $t5, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r13;
            goto L_800145B4;
    }
    // 0x800145AC: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
    // 0x800145B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800145B4:
    // 0x800145B4: beq         $a0, $zero, L_800145C4
    if (ctx->r4 == 0) {
        // 0x800145B8: nop
    
            goto L_800145C4;
    }
    // 0x800145B8: nop

    // 0x800145BC: jal         0x8001E5DC
    // 0x800145C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001E5DC(rdram, ctx);
        goto after_4;
    // 0x800145C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
L_800145C4:
    // 0x800145C4: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x800145C8: lw          $v0, -0xBCC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XBCC);
    // 0x800145CC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800145D0: sw          $zero, -0x7B80($at)
    MEM_W(-0X7B80, ctx->r1) = 0;
    // 0x800145D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800145D8: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x800145DC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800145E0: bne         $t7, $zero, L_80014630
    if (ctx->r15 != 0) {
        // 0x800145E4: sw          $v0, -0xBCC($at)
        MEM_W(-0XBCC, ctx->r1) = ctx->r2;
            goto L_80014630;
    }
    // 0x800145E4: sw          $v0, -0xBCC($at)
    MEM_W(-0XBCC, ctx->r1) = ctx->r2;
    // 0x800145E8: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800145EC: jal         0x8002F290
    // 0x800145F0: addiu       $a0, $a0, -0x70E8
    ctx->r4 = ADD32(ctx->r4, -0X70E8);
    osStopTimer_recomp(rdram, ctx);
        goto after_5;
    // 0x800145F0: addiu       $a0, $a0, -0x70E8
    ctx->r4 = ADD32(ctx->r4, -0X70E8);
    after_5:
    // 0x800145F4: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x800145F8: addiu       $t0, $t0, -0x7C30
    ctx->r8 = ADD32(ctx->r8, -0X7C30);
    // 0x800145FC: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80014600: lui         $a3, 0x4
    ctx->r7 = S32(0X4 << 16);
    // 0x80014604: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x80014608: addiu       $t9, $zero, 0x0
    ctx->r25 = ADD32(0, 0X0);
    // 0x8001460C: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80014610: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80014614: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80014618: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8001461C: ori         $a3, $a3, 0x45C0
    ctx->r7 = ctx->r7 | 0X45C0;
    // 0x80014620: addiu       $a0, $a0, -0x70E8
    ctx->r4 = ADD32(ctx->r4, -0X70E8);
    // 0x80014624: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80014628: jal         0x8002F360
    // 0x8001462C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    osSetTimer_recomp(rdram, ctx);
        goto after_6;
    // 0x8001462C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_6:
L_80014630:
    // 0x80014630: lui         $t2, 0x8008
    ctx->r10 = S32(0X8008 << 16);
    // 0x80014634: lw          $t2, -0x70A8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X70A8);
    // 0x80014638: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001463C: beql        $t2, $zero, L_800146CC
    if (ctx->r10 == 0) {
        // 0x80014640: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800146CC;
    }
    goto skip_2;
    // 0x80014640: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x80014644: jal         0x8002F290
    // 0x80014648: addiu       $a0, $a0, -0x70C8
    ctx->r4 = ADD32(ctx->r4, -0X70C8);
    osStopTimer_recomp(rdram, ctx);
        goto after_7;
    // 0x80014648: addiu       $a0, $a0, -0x70C8
    ctx->r4 = ADD32(ctx->r4, -0X70C8);
    after_7:
    // 0x8001464C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80014650: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x80014654: lw          $a1, 0x1394($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1394);
    // 0x80014658: lw          $a0, 0x1390($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1390);
    // 0x8001465C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80014660: jal         0x8002F4A8
    // 0x80014664: addiu       $a3, $zero, 0x3C
    ctx->r7 = ADD32(0, 0X3C);
    __ull_div_recomp(rdram, ctx);
        goto after_8;
    // 0x80014664: addiu       $a3, $zero, 0x3C
    ctx->r7 = ADD32(0, 0X3C);
    after_8:
    // 0x80014668: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8001466C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80014670: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80014674: jal         0x8002F5A8
    // 0x80014678: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    __ll_mul_recomp(rdram, ctx);
        goto after_9;
    // 0x80014678: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_9:
    // 0x8001467C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80014680: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80014684: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80014688: jal         0x8002F4A8
    // 0x8001468C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    __ull_div_recomp(rdram, ctx);
        goto after_10;
    // 0x8001468C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_10:
    // 0x80014690: lui         $t3, 0x8008
    ctx->r11 = S32(0X8008 << 16);
    // 0x80014694: addiu       $t3, $t3, -0x7C30
    ctx->r11 = ADD32(ctx->r11, -0X7C30);
    // 0x80014698: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001469C: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    // 0x800146A0: addiu       $t5, $zero, 0x0
    ctx->r13 = ADD32(0, 0X0);
    // 0x800146A4: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x800146A8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800146AC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x800146B0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800146B4: addiu       $a0, $a0, -0x70C8
    ctx->r4 = ADD32(ctx->r4, -0X70C8);
    // 0x800146B8: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x800146BC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800146C0: jal         0x8002F360
    // 0x800146C4: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    osSetTimer_recomp(rdram, ctx);
        goto after_11;
    // 0x800146C4: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    after_11:
    // 0x800146C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800146CC:
    // 0x800146CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800146D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800146D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800146D8: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x800146DC: lw          $v1, -0x7B74($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7B74);
    // 0x800146E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800146E4: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x800146E8: bne         $v1, $at, L_80014758
    if (ctx->r3 != ctx->r1) {
        // 0x800146EC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80014758;
    }
    // 0x800146EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800146F0: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x800146F4: addiu       $v0, $v0, -0x70FC
    ctx->r2 = ADD32(ctx->r2, -0X70FC);
    // 0x800146F8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800146FC: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80014700: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80014704: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x80014708: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8001470C: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x80014710: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80014714: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80014718: lw          $t8, -0x7150($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X7150);
    // 0x8001471C: mfhi        $t1
    ctx->r9 = hi;
    // 0x80014720: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80014724: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x80014728: addiu       $a0, $a0, -0xC10
    ctx->r4 = ADD32(ctx->r4, -0XC10);
    // 0x8001472C: jal         0x8002F700
    // 0x80014730: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    osSpTaskYielded_recomp(rdram, ctx);
        goto after_0;
    // 0x80014730: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_0:
    // 0x80014734: xori        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 ^ 0X1;
    // 0x80014738: sltiu       $t2, $t2, 0x1
    ctx->r10 = ctx->r10 < 0X1 ? 1 : 0;
    // 0x8001473C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80014740: sw          $t2, -0x7B6C($at)
    MEM_W(-0X7B6C, ctx->r1) = ctx->r10;
    // 0x80014744: jal         0x80013E34
    // 0x80014748: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_80013E34(rdram, ctx);
        goto after_1;
    // 0x80014748: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x8001474C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80014750: b           L_800148A0
    // 0x80014754: sw          $zero, -0x70EC($at)
    MEM_W(-0X70EC, ctx->r1) = 0;
        goto L_800148A0;
    // 0x80014754: sw          $zero, -0x70EC($at)
    MEM_W(-0X70EC, ctx->r1) = 0;
L_80014758:
    // 0x80014758: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8001475C: bne         $v1, $at, L_80014780
    if (ctx->r3 != ctx->r1) {
        // 0x80014760: lui         $v0, 0x8008
        ctx->r2 = S32(0X8008 << 16);
            goto L_80014780;
    }
    // 0x80014760: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80014764: lw          $v0, -0x7B88($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7B88);
    // 0x80014768: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8001476C: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    // 0x80014770: jal         0x8002EAD0
    // 0x80014774: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    osSendMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x80014774: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    after_2:
    // 0x80014778: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x8001477C: lw          $v1, -0x7B74($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7B74);
L_80014780:
    // 0x80014780: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80014784: bne         $v1, $at, L_800147CC
    if (ctx->r3 != ctx->r1) {
        // 0x80014788: lui         $t3, 0x8008
        ctx->r11 = S32(0X8008 << 16);
            goto L_800147CC;
    }
    // 0x80014788: lui         $t3, 0x8008
    ctx->r11 = S32(0X8008 << 16);
    // 0x8001478C: lw          $t3, -0x7B6C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X7B6C);
    // 0x80014790: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80014794: beql        $t3, $zero, L_800147D0
    if (ctx->r11 == 0) {
        // 0x80014798: addiu       $t5, $zero, 0x10
        ctx->r13 = ADD32(0, 0X10);
            goto L_800147D0;
    }
    goto skip_0;
    // 0x80014798: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    skip_0:
    // 0x8001479C: jal         0x8002F08C
    // 0x800147A0: addiu       $a0, $a0, -0xC10
    ctx->r4 = ADD32(ctx->r4, -0XC10);
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_3;
    // 0x800147A0: addiu       $a0, $a0, -0xC10
    ctx->r4 = ADD32(ctx->r4, -0XC10);
    after_3:
    // 0x800147A4: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800147A8: jal         0x8002F1F4
    // 0x800147AC: addiu       $a0, $a0, -0xC10
    ctx->r4 = ADD32(ctx->r4, -0XC10);
    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_4;
    // 0x800147AC: addiu       $a0, $a0, -0xC10
    ctx->r4 = ADD32(ctx->r4, -0XC10);
    after_4:
    // 0x800147B0: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x800147B4: lw          $t4, -0x7B70($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X7B70);
    // 0x800147B8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800147BC: sw          $t4, -0x7B74($at)
    MEM_W(-0X7B74, ctx->r1) = ctx->r12;
    // 0x800147C0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800147C4: b           L_800148A0
    // 0x800147C8: sw          $zero, -0x7B6C($at)
    MEM_W(-0X7B6C, ctx->r1) = 0;
        goto L_800148A0;
    // 0x800147C8: sw          $zero, -0x7B6C($at)
    MEM_W(-0X7B6C, ctx->r1) = 0;
L_800147CC:
    // 0x800147CC: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
L_800147D0:
    // 0x800147D0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800147D4: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x800147D8: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x800147DC: sw          $t5, -0x7B74($at)
    MEM_W(-0X7B74, ctx->r1) = ctx->r13;
    // 0x800147E0: addiu       $t6, $t6, -0x7158
    ctx->r14 = ADD32(ctx->r14, -0X7158);
    // 0x800147E4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800147E8: addiu       $v0, $v0, -0x7154
    ctx->r2 = ADD32(ctx->r2, -0X7154);
    // 0x800147EC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800147F0: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x800147F4: beq         $t7, $t8, L_80014848
    if (ctx->r15 == ctx->r24) {
        // 0x800147F8: nop
    
            goto L_80014848;
    }
    // 0x800147F8: nop

    // 0x800147FC: lw          $t9, -0x7B80($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7B80);
    // 0x80014800: bne         $t9, $zero, L_80014848
    if (ctx->r25 != 0) {
        // 0x80014804: nop
    
            goto L_80014848;
    }
    // 0x80014804: nop

    // 0x80014808: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8001480C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80014810: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80014814: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x80014818: jal         0x800140D8
    // 0x8001481C: lw          $a0, -0x71A8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X71A8);
    func_800140D8(rdram, ctx);
        goto after_5;
    // 0x8001481C: lw          $a0, -0x71A8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X71A8);
    after_5:
    // 0x80014820: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80014824: addiu       $v0, $v0, -0x7154
    ctx->r2 = ADD32(ctx->r2, -0X7154);
    // 0x80014828: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8001482C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80014830: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80014834: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x80014838: mfhi        $t4
    ctx->r12 = hi;
    // 0x8001483C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80014840: b           L_800148A4
    // 0x80014844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800148A4;
    // 0x80014844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80014848:
    // 0x80014848: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x8001484C: lw          $t5, -0x7B84($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X7B84);
    // 0x80014850: beq         $t5, $zero, L_800148A0
    if (ctx->r13 == 0) {
        // 0x80014854: lui         $t6, 0x8008
        ctx->r14 = S32(0X8008 << 16);
            goto L_800148A0;
    }
    // 0x80014854: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80014858: lw          $t6, -0x7B7C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7B7C);
    // 0x8001485C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80014860: bnel        $t6, $at, L_800148A4
    if (ctx->r14 != ctx->r1) {
        // 0x80014864: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800148A4;
    }
    goto skip_1;
    // 0x80014864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80014868: jal         0x8002F240
    // 0x8001486C: nop

    osDpGetStatus_recomp(rdram, ctx);
        goto after_6;
    // 0x8001486C: nop

    after_6:
    // 0x80014870: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x80014874: bne         $t7, $zero, L_800148A0
    if (ctx->r15 != 0) {
        // 0x80014878: lui         $a0, 0x8008
        ctx->r4 = S32(0X8008 << 16);
            goto L_800148A0;
    }
    // 0x80014878: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001487C: addiu       $a0, $a0, -0x7BC8
    ctx->r4 = ADD32(ctx->r4, -0X7BC8);
    // 0x80014880: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80014884: jal         0x8002EAD0
    // 0x80014888: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x80014888: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x8001488C: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80014890: addiu       $v1, $v1, -0x7B84
    ctx->r3 = ADD32(ctx->r3, -0X7B84);
    // 0x80014894: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80014898: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8001489C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
L_800148A0:
    // 0x800148A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800148A4:
    // 0x800148A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800148A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800148B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800148B0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800148B4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800148B8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800148BC: jr          $ra
    // 0x800148C0: sw          $t6, -0x7B80($at)
    MEM_W(-0X7B80, ctx->r1) = ctx->r14;
    return;
    // 0x800148C0: sw          $t6, -0x7B80($at)
    MEM_W(-0X7B80, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800148C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800148C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800148C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800148CC: jal         0x80012F00
    // 0x800148D0: nop

    func_80012F00(rdram, ctx);
        goto after_0;
    // 0x800148D0: nop

    after_0:
    // 0x800148D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800148D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800148DC: jal         0x8002EAD0
    // 0x800148E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x800148E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800148E4: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800148E8: addiu       $a0, $a0, -0x7B74
    ctx->r4 = ADD32(ctx->r4, -0X7B74);
    // 0x800148EC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800148F0: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x800148F4: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x800148F8: bne         $v1, $at, L_80014954
    if (ctx->r3 != ctx->r1) {
        // 0x800148FC: addiu       $v0, $v0, -0x70FC
        ctx->r2 = ADD32(ctx->r2, -0X70FC);
            goto L_80014954;
    }
    // 0x800148FC: addiu       $v0, $v0, -0x70FC
    ctx->r2 = ADD32(ctx->r2, -0X70FC);
    // 0x80014900: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80014904: addiu       $t6, $t6, -0x7100
    ctx->r14 = ADD32(ctx->r14, -0X7100);
    // 0x80014908: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8001490C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80014910: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80014914: beq         $t7, $t8, L_80014954
    if (ctx->r15 == ctx->r24) {
        // 0x80014918: nop
    
            goto L_80014954;
    }
    // 0x80014918: nop

    // 0x8001491C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80014920: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80014924: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80014928: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8001492C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80014930: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x80014934: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80014938: lw          $a0, -0x7150($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7150);
    // 0x8001493C: mfhi        $t3
    ctx->r11 = hi;
    // 0x80014940: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80014944: jal         0x80013E34
    // 0x80014948: nop

    func_80013E34(rdram, ctx);
        goto after_2;
    // 0x80014948: nop

    after_2:
    // 0x8001494C: b           L_800149B0
    // 0x80014950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800149B0;
    // 0x80014950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80014954:
    // 0x80014954: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80014958: andi        $t4, $v1, 0x8
    ctx->r12 = ctx->r3 & 0X8;
    // 0x8001495C: beq         $t4, $zero, L_800149AC
    if (ctx->r12 == 0) {
        // 0x80014960: addiu       $v0, $v0, -0x70FC
        ctx->r2 = ADD32(ctx->r2, -0X70FC);
            goto L_800149AC;
    }
    // 0x80014960: addiu       $v0, $v0, -0x70FC
    ctx->r2 = ADD32(ctx->r2, -0X70FC);
    // 0x80014964: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x80014968: addiu       $t5, $t5, -0x7100
    ctx->r13 = ADD32(ctx->r13, -0X7100);
    // 0x8001496C: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80014970: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80014974: beql        $t6, $t7, L_800149B0
    if (ctx->r14 == ctx->r15) {
        // 0x80014978: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800149B0;
    }
    goto skip_0;
    // 0x80014978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8001497C: jal         0x8002F760
    // 0x80014980: nop

    osSpTaskYield_recomp(rdram, ctx);
        goto after_3;
    // 0x80014980: nop

    after_3:
    // 0x80014984: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80014988: addiu       $a0, $a0, -0x7B74
    ctx->r4 = ADD32(ctx->r4, -0X7B74);
    // 0x8001498C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80014990: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80014994: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x80014998: sw          $t8, -0x7B70($at)
    MEM_W(-0X7B70, ctx->r1) = ctx->r24;
    // 0x8001499C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800149A0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800149A4: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x800149A8: sw          $t0, -0x70EC($at)
    MEM_W(-0X70EC, ctx->r1) = ctx->r8;
L_800149AC:
    // 0x800149AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800149B0:
    // 0x800149B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800149B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800149BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800149BC: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x800149C0: lw          $t6, -0x70A4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X70A4);
    // 0x800149C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800149C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800149CC: bne         $t6, $zero, L_80014A4C
    if (ctx->r14 != 0) {
        // 0x800149D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80014A4C;
    }
    // 0x800149D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800149D4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800149D8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800149DC: jal         0x800155BC
    // 0x800149E0: sw          $t7, -0x70A4($at)
    MEM_W(-0X70A4, ctx->r1) = ctx->r15;
    func_800155BC(rdram, ctx);
        goto after_0;
    // 0x800149E0: sw          $t7, -0x70A4($at)
    MEM_W(-0X70A4, ctx->r1) = ctx->r15;
    after_0:
    // 0x800149E4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x800149E8: lw          $v0, 0x300($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X300);
    // 0x800149EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800149F0: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800149F4: beq         $v0, $zero, L_80014A14
    if (ctx->r2 == 0) {
        // 0x800149F8: nop
    
            goto L_80014A14;
    }
    // 0x800149F8: nop

    // 0x800149FC: beq         $v0, $at, L_80014A14
    if (ctx->r2 == ctx->r1) {
        // 0x80014A00: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80014A14;
    }
    // 0x80014A00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80014A04: beq         $v0, $at, L_80014A24
    if (ctx->r2 == ctx->r1) {
        // 0x80014A08: lui         $a0, 0x8004
        ctx->r4 = S32(0X8004 << 16);
            goto L_80014A24;
    }
    // 0x80014A08: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80014A0C: b           L_80014A2C
    // 0x80014A10: nop

        goto L_80014A2C;
    // 0x80014A10: nop

L_80014A14:
    // 0x80014A14: jal         0x8002F780
    // 0x80014A18: addiu       $a0, $a0, -0xB78
    ctx->r4 = ADD32(ctx->r4, -0XB78);
    osViSetMode_recomp(rdram, ctx);
        goto after_1;
    // 0x80014A18: addiu       $a0, $a0, -0xB78
    ctx->r4 = ADD32(ctx->r4, -0XB78);
    after_1:
    // 0x80014A1C: b           L_80014A2C
    // 0x80014A20: nop

        goto L_80014A2C;
    // 0x80014A20: nop

L_80014A24:
    // 0x80014A24: jal         0x8002F780
    // 0x80014A28: addiu       $a0, $a0, -0xBC8
    ctx->r4 = ADD32(ctx->r4, -0XBC8);
    osViSetMode_recomp(rdram, ctx);
        goto after_2;
    // 0x80014A28: addiu       $a0, $a0, -0xBC8
    ctx->r4 = ADD32(ctx->r4, -0XBC8);
    after_2:
L_80014A2C:
    // 0x80014A2C: jal         0x80015430
    // 0x80014A30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80015430(rdram, ctx);
        goto after_3;
    // 0x80014A30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80014A34: jal         0x80018634
    // 0x80014A38: nop

    func_80018634(rdram, ctx);
        goto after_4;
    // 0x80014A38: nop

    after_4:
L_80014A3C:
    // 0x80014A3C: jal         0x8002EF70
    // 0x80014A40: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    osDpSetStatus_recomp(rdram, ctx);
        goto after_5;
    // 0x80014A40: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_5:
    // 0x80014A44: b           L_80014A3C
    // 0x80014A48: nop

        goto L_80014A3C;
    // 0x80014A48: nop

L_80014A4C:
    // 0x80014A4C: jr          $ra
    // 0x80014A50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80014A50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80014A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    return;
    // 0x80014A54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80014A58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80014A5C: jal         0x8001DCA0
    // 0x80014A60: nop

    func_8001DCA0(rdram, ctx);
        goto after_0;
    // 0x80014A60: nop

    after_0:
    // 0x80014A64: andi        $t6, $v0, 0x1000
    ctx->r14 = ctx->r2 & 0X1000;
    // 0x80014A68: bnel        $t6, $zero, L_80014A7C
    if (ctx->r14 != 0) {
        // 0x80014A6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80014A7C;
    }
    goto skip_0;
    // 0x80014A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80014A70: jal         0x800149BC
    // 0x80014A74: nop

    func_800149BC(rdram, ctx);
        goto after_1;
    // 0x80014A74: nop

    after_1:
    // 0x80014A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80014A7C:
    // 0x80014A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80014A80: jr          $ra
    return;
;}
RECOMP_FUNC void func_80014A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014A88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80014A8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80014A90: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80014A94: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_80014A98:
    // 0x80014A98: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80014A9C: addiu       $a0, $a0, -0x7C30
    ctx->r4 = ADD32(ctx->r4, -0X7C30);
    // 0x80014AA0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80014AA4: jal         0x8002E1F0
    // 0x80014AA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80014AA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80014AAC: jal         0x80014A54
    // 0x80014AB0: nop

    func_80014A54(rdram, ctx);
        goto after_1;
    // 0x80014AB0: nop

    after_1:
    // 0x80014AB4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80014AB8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80014ABC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80014AC0: bnel        $t6, $at, L_80014ADC
    if (ctx->r14 != ctx->r1) {
        // 0x80014AC4: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_80014ADC;
    }
    goto skip_0;
    // 0x80014AC4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    skip_0:
    // 0x80014AC8: jal         0x80014258
    // 0x80014ACC: nop

    func_80014258(rdram, ctx);
        goto after_2;
    // 0x80014ACC: nop

    after_2:
    // 0x80014AD0: b           L_80014A98
    // 0x80014AD4: nop

        goto L_80014A98;
    // 0x80014AD4: nop

    // 0x80014AD8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_80014ADC:
    // 0x80014ADC: bne         $t7, $at, L_80014AF4
    if (ctx->r15 != ctx->r1) {
        // 0x80014AE0: lw          $t8, 0x1C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X1C);
            goto L_80014AF4;
    }
    // 0x80014AE0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80014AE4: jal         0x8001443C
    // 0x80014AE8: nop

    func_8001443C(rdram, ctx);
        goto after_3;
    // 0x80014AE8: nop

    after_3:
    // 0x80014AEC: b           L_80014A98
    // 0x80014AF0: nop

        goto L_80014A98;
    // 0x80014AF0: nop

L_80014AF4:
    // 0x80014AF4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80014AF8: bne         $t8, $at, L_80014B10
    if (ctx->r24 != ctx->r1) {
        // 0x80014AFC: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_80014B10;
    }
    // 0x80014AFC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80014B00: jal         0x800142F0
    // 0x80014B04: nop

    func_800142F0(rdram, ctx);
        goto after_4;
    // 0x80014B04: nop

    after_4:
    // 0x80014B08: b           L_80014A98
    // 0x80014B0C: nop

        goto L_80014A98;
    // 0x80014B0C: nop

L_80014B10:
    // 0x80014B10: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80014B14: bne         $t9, $at, L_80014B2C
    if (ctx->r25 != ctx->r1) {
        // 0x80014B18: lw          $t0, 0x1C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X1C);
            goto L_80014B2C;
    }
    // 0x80014B18: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80014B1C: jal         0x800146D8
    // 0x80014B20: nop

    func_800146D8(rdram, ctx);
        goto after_5;
    // 0x80014B20: nop

    after_5:
    // 0x80014B24: b           L_80014A98
    // 0x80014B28: nop

        goto L_80014A98;
    // 0x80014B28: nop

L_80014B2C:
    // 0x80014B2C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80014B30: bne         $t0, $at, L_80014B48
    if (ctx->r8 != ctx->r1) {
        // 0x80014B34: lw          $t1, 0x1C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X1C);
            goto L_80014B48;
    }
    // 0x80014B34: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80014B38: jal         0x800148C4
    // 0x80014B3C: nop

    func_800148C4(rdram, ctx);
        goto after_6;
    // 0x80014B3C: nop

    after_6:
    // 0x80014B40: b           L_80014A98
    // 0x80014B44: nop

        goto L_80014A98;
    // 0x80014B44: nop

L_80014B48:
    // 0x80014B48: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80014B4C: bne         $t1, $at, L_80014B64
    if (ctx->r9 != ctx->r1) {
        // 0x80014B50: lw          $t2, 0x1C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X1C);
            goto L_80014B64;
    }
    // 0x80014B50: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80014B54: jal         0x8001E5DC
    // 0x80014B58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001E5DC(rdram, ctx);
        goto after_7;
    // 0x80014B58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x80014B5C: b           L_80014A98
    // 0x80014B60: nop

        goto L_80014A98;
    // 0x80014B60: nop

L_80014B64:
    // 0x80014B64: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80014B68: bne         $t2, $at, L_80014B80
    if (ctx->r10 != ctx->r1) {
        // 0x80014B6C: lw          $t3, 0x1C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X1C);
            goto L_80014B80;
    }
    // 0x80014B6C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80014B70: jal         0x800149BC
    // 0x80014B74: nop

    func_800149BC(rdram, ctx);
        goto after_8;
    // 0x80014B74: nop

    after_8:
    // 0x80014B78: b           L_80014A98
    // 0x80014B7C: nop

        goto L_80014A98;
    // 0x80014B7C: nop

L_80014B80:
    // 0x80014B80: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80014B84: beq         $t3, $at, L_80014A98
    if (ctx->r11 == ctx->r1) {
        // 0x80014B88: nop
    
            goto L_80014A98;
    }
    // 0x80014B88: nop

    // 0x80014B8C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80014B90: bne         $t3, $at, L_80014BA8
    if (ctx->r11 != ctx->r1) {
        // 0x80014B94: lw          $t5, 0x1C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X1C);
            goto L_80014BA8;
    }
    // 0x80014B94: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80014B98: jal         0x80016810
    // 0x80014B9C: nop

    func_80016810(rdram, ctx);
        goto after_9;
    // 0x80014B9C: nop

    after_9:
    // 0x80014BA0: b           L_80014A98
    // 0x80014BA4: nop

        goto L_80014A98;
    // 0x80014BA4: nop

L_80014BA8:
    // 0x80014BA8: sltiu       $at, $t5, 0x64
    ctx->r1 = ctx->r13 < 0X64 ? 1 : 0;
    // 0x80014BAC: bne         $at, $zero, L_80014A98
    if (ctx->r1 != 0) {
        // 0x80014BB0: nop
    
            goto L_80014A98;
    }
    // 0x80014BB0: nop

    // 0x80014BB4: lw          $v0, 0x0($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X0);
    // 0x80014BB8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80014BBC: bne         $v0, $zero, L_80014BD4
    if (ctx->r2 != 0) {
        // 0x80014BC0: nop
    
            goto L_80014BD4;
    }
    // 0x80014BC0: nop

    // 0x80014BC4: jal         0x80014128
    // 0x80014BC8: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_80014128(rdram, ctx);
        goto after_10;
    // 0x80014BC8: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_10:
    // 0x80014BCC: b           L_80014A98
    // 0x80014BD0: nop

        goto L_80014A98;
    // 0x80014BD0: nop

L_80014BD4:
    // 0x80014BD4: bnel        $v0, $at, L_80014BF0
    if (ctx->r2 != ctx->r1) {
        // 0x80014BD8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80014BF0;
    }
    goto skip_1;
    // 0x80014BD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_1:
    // 0x80014BDC: jal         0x80014148
    // 0x80014BE0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_80014148(rdram, ctx);
        goto after_11;
    // 0x80014BE0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_11:
    // 0x80014BE4: b           L_80014A98
    // 0x80014BE8: nop

        goto L_80014A98;
    // 0x80014BE8: nop

    // 0x80014BEC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_80014BF0:
    // 0x80014BF0: bnel        $v0, $at, L_80014C0C
    if (ctx->r2 != ctx->r1) {
        // 0x80014BF4: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_80014C0C;
    }
    goto skip_2;
    // 0x80014BF4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    skip_2:
    // 0x80014BF8: jal         0x800141D0
    // 0x80014BFC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800141D0(rdram, ctx);
        goto after_12;
    // 0x80014BFC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_12:
    // 0x80014C00: b           L_80014A98
    // 0x80014C04: nop

        goto L_80014A98;
    // 0x80014C04: nop

    // 0x80014C08: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
L_80014C0C:
    // 0x80014C0C: bne         $v0, $at, L_80014A98
    if (ctx->r2 != ctx->r1) {
        // 0x80014C10: nop
    
            goto L_80014A98;
    }
    // 0x80014C10: nop

    // 0x80014C14: jal         0x800148B0
    // 0x80014C18: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800148B0(rdram, ctx);
        goto after_13;
    // 0x80014C18: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_13:
    // 0x80014C1C: b           L_80014A98
    // 0x80014C20: nop

        goto L_80014A98;
    // 0x80014C20: nop

    // 0x80014C24: nop

    // 0x80014C28: nop

    // 0x80014C2C: nop

    // 0x80014C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80014C34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80014C38: jr          $ra
    return;
;}
RECOMP_FUNC void func_80014C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014C40: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80014C44: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80014C48: lui         $s0, 0x8008
    ctx->r16 = S32(0X8008 << 16);
    // 0x80014C4C: addiu       $s0, $s0, -0x7C30
    ctx->r16 = ADD32(ctx->r16, -0X7C30);
    // 0x80014C50: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80014C54: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80014C58: addiu       $a1, $a1, -0x7C18
    ctx->r5 = ADD32(ctx->r5, -0X7C18);
    // 0x80014C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80014C60: jal         0x8002E070
    // 0x80014C64: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80014C64: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_0:
    // 0x80014C68: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80014C6C: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80014C70: addiu       $a1, $a1, -0x7BB0
    ctx->r5 = ADD32(ctx->r5, -0X7BB0);
    // 0x80014C74: addiu       $a0, $a0, -0x7BC8
    ctx->r4 = ADD32(ctx->r4, -0X7BC8);
    // 0x80014C78: jal         0x8002E070
    // 0x80014C7C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x80014C7C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_1:
    // 0x80014C80: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x80014C84: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80014C88: jal         0x8002F7E0
    // 0x80014C8C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x80014C8C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x80014C90: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80014C94: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80014C98: jal         0x8002F7E0
    // 0x80014C9C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x80014C9C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_3:
    // 0x80014CA0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x80014CA4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80014CA8: jal         0x8002F7E0
    // 0x80014CAC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x80014CAC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_4:
    // 0x80014CB0: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80014CB4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80014CB8: jal         0x8002F7E0
    // 0x80014CBC: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x80014CBC: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_5:
    // 0x80014CC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80014CC4: jal         0x80014F64
    // 0x80014CC8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80014F64(rdram, ctx);
        goto after_6;
    // 0x80014CC8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_6:
    // 0x80014CCC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80014CD0: sw          $zero, -0x7B84($at)
    MEM_W(-0X7B84, ctx->r1) = 0;
    // 0x80014CD4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80014CD8: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80014CDC: sw          $zero, -0x7B80($at)
    MEM_W(-0X7B80, ctx->r1) = 0;
    // 0x80014CE0: addiu       $v1, $v1, -0x7B78
    ctx->r3 = ADD32(ctx->r3, -0X7B78);
    // 0x80014CE4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80014CE8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80014CEC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80014CF0: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80014CF4: sw          $t6, -0x7B7C($at)
    MEM_W(-0X7B7C, ctx->r1) = ctx->r14;
    // 0x80014CF8: addiu       $a0, $a0, -0x7B70
    ctx->r4 = ADD32(ctx->r4, -0X7B70);
    // 0x80014CFC: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80014D00: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80014D04: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80014D08: sw          $t8, -0x7B74($at)
    MEM_W(-0X7B74, ctx->r1) = ctx->r24;
    // 0x80014D0C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80014D10: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x80014D14: sw          $zero, -0x7B6C($at)
    MEM_W(-0X7B6C, ctx->r1) = 0;
    // 0x80014D18: addiu       $t0, $t0, -0x7154
    ctx->r8 = ADD32(ctx->r8, -0X7154);
    // 0x80014D1C: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x80014D20: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x80014D24: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x80014D28: addiu       $t1, $t1, -0x7158
    ctx->r9 = ADD32(ctx->r9, -0X7158);
    // 0x80014D2C: lui         $t2, 0x8008
    ctx->r10 = S32(0X8008 << 16);
    // 0x80014D30: addiu       $v0, $a1, 0x77B0
    ctx->r2 = ADD32(ctx->r5, 0X77B0);
    // 0x80014D34: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x80014D38: addiu       $t2, $t2, -0x70FC
    ctx->r10 = ADD32(ctx->r10, -0X70FC);
    // 0x80014D3C: lui         $t3, 0x8008
    ctx->r11 = S32(0X8008 << 16);
    // 0x80014D40: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    // 0x80014D44: addiu       $t3, $t3, -0x7100
    ctx->r11 = ADD32(ctx->r11, -0X7100);
    // 0x80014D48: andi        $t4, $v0, 0xF
    ctx->r12 = ctx->r2 & 0XF;
    // 0x80014D4C: beq         $t4, $zero, L_80014D64
    if (ctx->r12 == 0) {
        // 0x80014D50: sw          $zero, 0x0($t3)
        MEM_W(0X0, ctx->r11) = 0;
            goto L_80014D64;
    }
    // 0x80014D50: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
    // 0x80014D54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80014D58:
    // 0x80014D58: andi        $t5, $v0, 0xF
    ctx->r13 = ctx->r2 & 0XF;
    // 0x80014D5C: bnel        $t5, $zero, L_80014D58
    if (ctx->r13 != 0) {
        // 0x80014D60: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80014D58;
    }
    goto skip_0;
    // 0x80014D60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
L_80014D64:
    // 0x80014D64: lui         $s0, 0x8008
    ctx->r16 = S32(0X8008 << 16);
    // 0x80014D68: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80014D6C: addiu       $s0, $s0, -0x7368
    ctx->r16 = ADD32(ctx->r16, -0X7368);
    // 0x80014D70: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80014D74: addiu       $t6, $t6, -0x7368
    ctx->r14 = ADD32(ctx->r14, -0X7368);
    // 0x80014D78: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80014D7C: lui         $a3, 0x8001
    ctx->r7 = S32(0X8001 << 16);
    // 0x80014D80: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x80014D84: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80014D88: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80014D8C: addiu       $a3, $a3, 0x4A88
    ctx->r7 = ADD32(ctx->r7, 0X4A88);
    // 0x80014D90: addiu       $a1, $a1, -0x71B8
    ctx->r5 = ADD32(ctx->r5, -0X71B8);
    // 0x80014D94: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80014D98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80014D9C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80014DA0: jal         0x8001DCB0
    // 0x80014DA4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DCB0(rdram, ctx);
        goto after_7;
    // 0x80014DA4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x80014DA8: jal         0x8002E510
    // 0x80014DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osStartThread_recomp(rdram, ctx);
        goto after_8;
    // 0x80014DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80014DB0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80014DB4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80014DB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80014DBC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80014DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014DC4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80014DC8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80014DCC: jr          $ra
    // 0x80014DD0: sw          $t6, -0x70A8($at)
    MEM_W(-0X70A8, ctx->r1) = ctx->r14;
    return;
    // 0x80014DD0: sw          $t6, -0x70A8($at)
    MEM_W(-0X70A8, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80014DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014DD4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80014DD8: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x80014DDC: lui         $t9, 0xDF00
    ctx->r25 = S32(0XDF00 << 16);
    // 0x80014DE0: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80014DE4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80014DE8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80014DEC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80014DF0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80014DF4: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80014DF8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80014DFC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80014E00: jr          $ra
    // 0x80014E04: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    return;
    // 0x80014E04: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
;}
RECOMP_FUNC void func_80014E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014E10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80014E14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80014E18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80014E1C: addiu       $a0, $a1, 0x40
    ctx->r4 = ADD32(ctx->r5, 0X40);
    // 0x80014E20: jal         0x8001ACEC
    // 0x80014E24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001ACEC(rdram, ctx);
        goto after_0;
    // 0x80014E24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80014E28: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80014E2C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80014E30: andi        $t8, $v0, 0x3F
    ctx->r24 = ctx->r2 & 0X3F;
    // 0x80014E34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80014E38: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80014E3C: sw          $v0, -0x7090($at)
    MEM_W(-0X7090, ctx->r1) = ctx->r2;
    // 0x80014E40: beq         $t8, $zero, L_80014E58
    if (ctx->r24 == 0) {
        // 0x80014E44: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80014E58;
    }
    // 0x80014E44: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80014E48: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80014E4C:
    // 0x80014E4C: andi        $t9, $v1, 0x3F
    ctx->r25 = ctx->r3 & 0X3F;
    // 0x80014E50: bnel        $t9, $zero, L_80014E4C
    if (ctx->r25 != 0) {
        // 0x80014E54: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_80014E4C;
    }
    goto skip_0;
    // 0x80014E54: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
L_80014E58:
    // 0x80014E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80014E5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80014E60: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80014E64: jr          $ra
    return;
;}
RECOMP_FUNC void func_80014E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014E6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80014E70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80014E74: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80014E78: ori         $a1, $a1, 0x1D80
    ctx->r5 = ctx->r5 | 0X1D80;
    // 0x80014E7C: jal         0x80014E10
    // 0x80014E80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80014E10(rdram, ctx);
        goto after_0;
    // 0x80014E80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80014E84: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80014E88: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80014E8C: sw          $v0, -0x7080($at)
    MEM_W(-0X7080, ctx->r1) = ctx->r2;
    // 0x80014E90: ori         $a1, $a1, 0x1D80
    ctx->r5 = ctx->r5 | 0X1D80;
    // 0x80014E94: jal         0x80014E10
    // 0x80014E98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80014E10(rdram, ctx);
        goto after_1;
    // 0x80014E98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80014E9C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80014EA0: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x80014EA4: sw          $v0, -0x707C($at)
    MEM_W(-0X707C, ctx->r1) = ctx->r2;
    // 0x80014EA8: ori         $a1, $a1, 0xEC0
    ctx->r5 = ctx->r5 | 0XEC0;
    // 0x80014EAC: jal         0x80014E10
    // 0x80014EB0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80014E10(rdram, ctx);
        goto after_2;
    // 0x80014EB0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x80014EB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80014EB8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80014EBC: sw          $v0, -0x7078($at)
    MEM_W(-0X7078, ctx->r1) = ctx->r2;
    // 0x80014EC0: jr          $ra
    // 0x80014EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80014EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80014EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014EC8: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x80014ECC: jr          $ra
    // 0x80014ED0: ori         $v0, $v0, 0x1D80
    ctx->r2 = ctx->r2 | 0X1D80;
    return;
    // 0x80014ED0: ori         $v0, $v0, 0x1D80
    ctx->r2 = ctx->r2 | 0X1D80;
;}
RECOMP_FUNC void func_80014ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014ED4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80014ED8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80014EDC: jal         0x80014F38
    // 0x80014EE0: nop

    func_80014F38(rdram, ctx);
        goto after_0;
    // 0x80014EE0: nop

    after_0:
    // 0x80014EE4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80014EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80014EEC: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80014EF0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80014EF4: lw          $v0, -0x7080($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7080);
    // 0x80014EF8: jr          $ra
    // 0x80014EFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80014EFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80014F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014F00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80014F04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80014F08: jal         0x80014F58
    // 0x80014F0C: nop

    func_80014F58(rdram, ctx);
        goto after_0;
    // 0x80014F0C: nop

    after_0:
    // 0x80014F10: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80014F14: lh          $t6, -0x709E($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X709E);
    // 0x80014F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80014F1C: xor         $t7, $v0, $t6
    ctx->r15 = ctx->r2 ^ ctx->r14;
    // 0x80014F20: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80014F24: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80014F28: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x80014F2C: lw          $v0, -0x7080($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7080);
    // 0x80014F30: jr          $ra
    // 0x80014F34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80014F34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80014F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014F38: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80014F3C: lh          $v0, -0x70A0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X70A0);
    // 0x80014F40: xori        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 ^ 0X1;
    // 0x80014F44: jr          $ra
    // 0x80014F48: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x80014F48: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_80014F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014F4C: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80014F50: jr          $ra
    // 0x80014F54: lh          $v0, -0x709C($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X709C);
    return;
    // 0x80014F54: lh          $v0, -0x709C($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X709C);
;}
RECOMP_FUNC void func_80014F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014F58: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80014F5C: jr          $ra
    // 0x80014F60: lh          $v0, -0x70A0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X70A0);
    return;
    // 0x80014F60: lh          $v0, -0x70A0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X70A0);
;}
RECOMP_FUNC void func_80014F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014F64: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80014F68: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80014F6C: addiu       $v0, $v0, -0x7030
    ctx->r2 = ADD32(ctx->r2, -0X7030);
    // 0x80014F70: addiu       $v1, $v1, -0x7070
    ctx->r3 = ADD32(ctx->r3, -0X7070);
    // 0x80014F74: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80014F78: bnel        $t6, $zero, L_80014F90
    if (ctx->r14 != 0) {
            // 0x80014F7C: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    static_2_80014F90(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80014F7C: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    skip_0:
    // 0x80014F80: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x80014F84: jr          $ra
    // 0x80014F88: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    return;
    // 0x80014F88: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
;}
RECOMP_FUNC void func_80014F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014F8C: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x80014F90: bnel        $t7, $zero, L_80014FA8
    if (ctx->r15 != 0) {
            // 0x80014F94: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    static_2_80014FA8(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80014F94: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    skip_0:
    // 0x80014F98: sw          $a0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r4;
    // 0x80014F9C: jr          $ra
    // 0x80014FA0: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
    return;
    // 0x80014FA0: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
;}
RECOMP_FUNC void func_80014FA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014FA4: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    // 0x80014FA8: bnel        $t8, $zero, L_80014FC0
    if (ctx->r24 != 0) {
            // 0x80014FAC: lw          $t9, 0x18($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X18);
    static_2_80014FC0(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80014FAC: lw          $t9, 0x18($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X18);
    skip_0:
    // 0x80014FB0: sw          $a0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r4;
    // 0x80014FB4: jr          $ra
    // 0x80014FB8: sw          $a1, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r5;
    return;
    // 0x80014FB8: sw          $a1, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r5;
;}
RECOMP_FUNC void func_80014FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014FBC: lw          $t9, 0x18($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X18);
    // 0x80014FC0: bnel        $t9, $zero, L_80014FD8
    if (ctx->r25 != 0) {
            // 0x80014FC4: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    static_2_80014FD8(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80014FC4: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    skip_0:
    // 0x80014FC8: sw          $a0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r4;
    // 0x80014FCC: jr          $ra
    // 0x80014FD0: sw          $a1, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r5;
    return;
    // 0x80014FD0: sw          $a1, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r5;
;}
RECOMP_FUNC void func_80014FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80014F78:
    // 0x80014FD4: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x80014FD8: bnel        $v1, $v0, L_80014F78
    if (ctx->r3 != ctx->r2) {
            // 0x80014FDC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    static_2_80014F78(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80014FDC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x80014FE0: jr          $ra
    // 0x80014FE4: nop

    return;
    // 0x80014FE4: nop

;}
RECOMP_FUNC void func_80014FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014FE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80014FEC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80014FF0: jal         0x8002F8A0
    // 0x80014FF4: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    osCreateViManager_recomp(rdram, ctx);
        goto after_0;
    // 0x80014FF4: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_0:
    // 0x80014FF8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x80014FFC: lw          $v0, 0x300($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X300);
    // 0x80015000: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80015004: beq         $v0, $zero, L_80015024
    if (ctx->r2 == 0) {
        // 0x80015008: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80015024;
    }
    // 0x80015008: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001500C: beq         $v0, $at, L_80015024
    if (ctx->r2 == ctx->r1) {
        // 0x80015010: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80015024;
    }
    // 0x80015010: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80015014: beq         $v0, $at, L_80015038
    if (ctx->r2 == ctx->r1) {
        // 0x80015018: lui         $t7, 0x8004
        ctx->r15 = S32(0X8004 << 16);
            goto L_80015038;
    }
    // 0x80015018: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x8001501C: b           L_80015044
    // 0x80015020: nop

        goto L_80015044;
    // 0x80015020: nop

L_80015024:
    // 0x80015024: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x80015028: addiu       $t6, $t6, -0xB20
    ctx->r14 = ADD32(ctx->r14, -0XB20);
    // 0x8001502C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80015030: b           L_80015044
    // 0x80015034: sw          $t6, -0x7098($at)
    MEM_W(-0X7098, ctx->r1) = ctx->r14;
        goto L_80015044;
    // 0x80015034: sw          $t6, -0x7098($at)
    MEM_W(-0X7098, ctx->r1) = ctx->r14;
L_80015038:
    // 0x80015038: addiu       $t7, $t7, -0xAD0
    ctx->r15 = ADD32(ctx->r15, -0XAD0);
    // 0x8001503C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80015040: sw          $t7, -0x7098($at)
    MEM_W(-0X7098, ctx->r1) = ctx->r15;
L_80015044:
    // 0x80015044: jal         0x8002F780
    // 0x80015048: lw          $a0, -0x7098($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7098);
    osViSetMode_recomp(rdram, ctx);
        goto after_1;
    // 0x80015048: lw          $a0, -0x7098($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7098);
    after_1:
    // 0x8001504C: jal         0x8002FBB0
    // 0x80015050: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osViBlack_recomp(rdram, ctx);
        goto after_2;
    // 0x80015050: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80015054: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80015058: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001505C: sw          $t8, -0x6900($at)
    MEM_W(-0X6900, ctx->r1) = ctx->r24;
    // 0x80015060: jal         0x8002FC20
    // 0x80015064: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_3;
    // 0x80015064: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_3:
    // 0x80015068: jal         0x8002FC20
    // 0x8001506C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_4;
    // 0x8001506C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x80015070: jal         0x8002FC20
    // 0x80015074: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_5;
    // 0x80015074: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_5:
    // 0x80015078: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001507C: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80015080: addiu       $a1, $a1, -0x7018
    ctx->r5 = ADD32(ctx->r5, -0X7018);
    // 0x80015084: addiu       $a0, $a0, -0x7030
    ctx->r4 = ADD32(ctx->r4, -0X7030);
    // 0x80015088: jal         0x8002E070
    // 0x8001508C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_6;
    // 0x8001508C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_6:
    // 0x80015090: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80015094: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80015098: addiu       $a1, $a1, -0x6FD8
    ctx->r5 = ADD32(ctx->r5, -0X6FD8);
    // 0x8001509C: addiu       $a0, $a0, -0x6FF0
    ctx->r4 = ADD32(ctx->r4, -0X6FF0);
    // 0x800150A0: jal         0x8002E070
    // 0x800150A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_7;
    // 0x800150A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x800150A8: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800150AC: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x800150B0: addiu       $a1, $a1, -0x6FB8
    ctx->r5 = ADD32(ctx->r5, -0X6FB8);
    // 0x800150B4: addiu       $a0, $a0, -0x6FD0
    ctx->r4 = ADD32(ctx->r4, -0X6FD0);
    // 0x800150B8: jal         0x8002E070
    // 0x800150BC: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_8;
    // 0x800150BC: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_8:
    // 0x800150C0: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800150C4: addiu       $a0, $a0, -0x7030
    ctx->r4 = ADD32(ctx->r4, -0X7030);
    // 0x800150C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800150CC: jal         0x8002FD80
    // 0x800150D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osViSetEvent_recomp(rdram, ctx);
        goto after_9;
    // 0x800150D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x800150D4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800150D8: sh          $zero, -0x70A0($at)
    MEM_H(-0X70A0, ctx->r1) = 0;
    // 0x800150DC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800150E0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800150E4: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x800150E8: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x800150EC: sh          $t9, -0x709C($at)
    MEM_H(-0X709C, ctx->r1) = ctx->r25;
    // 0x800150F0: addiu       $v1, $v1, -0x7030
    ctx->r3 = ADD32(ctx->r3, -0X7030);
    // 0x800150F4: addiu       $v0, $v0, -0x7070
    ctx->r2 = ADD32(ctx->r2, -0X7070);
L_800150F8:
    // 0x800150F8: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x800150FC: sw          $zero, -0x18($v0)
    MEM_W(-0X18, ctx->r2) = 0;
    // 0x80015100: sw          $zero, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = 0;
    // 0x80015104: sw          $zero, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = 0;
    // 0x80015108: bne         $v0, $v1, L_800150F8
    if (ctx->r2 != ctx->r3) {
        // 0x8001510C: sw          $zero, -0x20($v0)
        MEM_W(-0X20, ctx->r2) = 0;
            goto L_800150F8;
    }
    // 0x8001510C: sw          $zero, -0x20($v0)
    MEM_W(-0X20, ctx->r2) = 0;
    // 0x80015110: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x80015114: addiu       $t0, $t0, -0x6EC8
    ctx->r8 = ADD32(ctx->r8, -0X6EC8);
    // 0x80015118: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x8001511C: jal         0x80015178
    // 0x80015120: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80015178(rdram, ctx);
        goto after_10;
    // 0x80015120: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_10:
    // 0x80015124: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x80015128: addiu       $t1, $t1, -0x6900
    ctx->r9 = ADD32(ctx->r9, -0X6900);
    // 0x8001512C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80015130: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80015134: lui         $a3, 0x8001
    ctx->r7 = S32(0X8001 << 16);
    // 0x80015138: addiu       $t2, $zero, 0x50
    ctx->r10 = ADD32(0, 0X50);
    // 0x8001513C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80015140: addiu       $a3, $a3, 0x546C
    ctx->r7 = ADD32(ctx->r7, 0X546C);
    // 0x80015144: addiu       $a1, $a1, -0x6D10
    ctx->r5 = ADD32(ctx->r5, -0X6D10);
    // 0x80015148: addiu       $a0, $a0, -0x6EC0
    ctx->r4 = ADD32(ctx->r4, -0X6EC0);
    // 0x8001514C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80015150: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80015154: jal         0x8001DCB0
    // 0x80015158: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DCB0(rdram, ctx);
        goto after_11;
    // 0x80015158: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x8001515C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80015160: jal         0x8002E510
    // 0x80015164: addiu       $a0, $a0, -0x6EC0
    ctx->r4 = ADD32(ctx->r4, -0X6EC0);
    osStartThread_recomp(rdram, ctx);
        goto after_12;
    // 0x80015164: addiu       $a0, $a0, -0x6EC0
    ctx->r4 = ADD32(ctx->r4, -0X6EC0);
    after_12:
    // 0x80015168: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001516C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80015170: jr          $ra
    return;
;}
RECOMP_FUNC void func_80015178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015178: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001517C: jr          $ra
    // 0x80015180: sw          $a0, -0x6EC4($at)
    MEM_W(-0X6EC4, ctx->r1) = ctx->r4;
    return;
    // 0x80015180: sw          $a0, -0x6EC4($at)
    MEM_W(-0X6EC4, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80015184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015184: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80015188: jr          $ra
    // 0x8001518C: lw          $v0, -0x6EC4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6EC4);
    return;
    // 0x8001518C: lw          $v0, -0x6EC4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6EC4);
;}
RECOMP_FUNC void func_80015190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015190: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80015194: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80015198: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001519C: addiu       $a0, $a0, -0x6FF0
    ctx->r4 = ADD32(ctx->r4, -0X6FF0);
    // 0x800151A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800151A4: jal         0x8002EAD0
    // 0x800151A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x800151A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    tooie_clear_dp_freeze(rdram, ctx);
    // 0x800151AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800151B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800151B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800151BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800151BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800151C0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800151C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800151C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800151CC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800151D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800151D4: jal         0x8002EC20
    // 0x800151D8: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    osSetThreadPri_recomp(rdram, ctx);
        goto after_0;
    // 0x800151D8: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    after_0:
    // 0x800151DC: jal         0x80013500
    // 0x800151E0: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    func_80013500(rdram, ctx);
        goto after_1;
    // 0x800151E0: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_1:
    // 0x800151E4: jal         0x80013488
    // 0x800151E8: nop

    func_80013488(rdram, ctx);
        goto after_2;
    // 0x800151E8: nop

    after_2:
    // 0x800151EC: beq         $s0, $zero, L_80015204
    if (ctx->r16 == 0) {
        // 0x800151F0: lui         $a0, 0x8008
        ctx->r4 = S32(0X8008 << 16);
            goto L_80015204;
    }
    // 0x800151F0: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800151F4: addiu       $a0, $a0, -0x6FF0
    ctx->r4 = ADD32(ctx->r4, -0X6FF0);
    // 0x800151F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800151FC: jal         0x8002E1F0
    // 0x80015200: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x80015200: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_80015204:
    // 0x80015204: jal         0x80015184
    // 0x80015208: nop

    func_80015184(rdram, ctx);
        goto after_4;
    // 0x80015208: nop

    after_4:
    // 0x8001520C: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80015210: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x80015214: lw          $t8, -0x68FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X68FC);
    // 0x80015218: addiu       $t6, $t6, -0x6EC8
    ctx->r14 = ADD32(ctx->r14, -0X6EC8);
    // 0x8001521C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80015220: subu        $t9, $v0, $t8
    ctx->r25 = SUB32(ctx->r2, ctx->r24);
    // 0x80015224: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x80015228: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8001522C: beq         $at, $zero, L_80015270
    if (ctx->r1 == 0) {
        // 0x80015230: addiu       $s1, $s1, -0x6FD0
        ctx->r17 = ADD32(ctx->r17, -0X6FD0);
            goto L_80015270;
    }
    // 0x80015230: addiu       $s1, $s1, -0x6FD0
    ctx->r17 = ADD32(ctx->r17, -0X6FD0);
    // 0x80015234: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80015238:
    // 0x80015238: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001523C: jal         0x8002E1F0
    // 0x80015240: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x80015240: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80015244: jal         0x80015184
    // 0x80015248: nop

    func_80015184(rdram, ctx);
        goto after_6;
    // 0x80015248: nop

    after_6:
    // 0x8001524C: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x80015250: lui         $t2, 0x8008
    ctx->r10 = S32(0X8008 << 16);
    // 0x80015254: lw          $t2, -0x68FC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X68FC);
    // 0x80015258: addiu       $t0, $t0, -0x6EC8
    ctx->r8 = ADD32(ctx->r8, -0X6EC8);
    // 0x8001525C: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80015260: subu        $t3, $v0, $t2
    ctx->r11 = SUB32(ctx->r2, ctx->r10);
    // 0x80015264: slt         $at, $t1, $t3
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80015268: bnel        $at, $zero, L_80015238
    if (ctx->r1 != 0) {
        // 0x8001526C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80015238;
    }
    goto skip_0;
    // 0x8001526C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
L_80015270:
    // 0x80015270: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x80015274: addiu       $s1, $s1, -0x6FD0
    ctx->r17 = ADD32(ctx->r17, -0X6FD0);
    // 0x80015278: lw          $t4, 0x8($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X8);
    // 0x8001527C: beq         $t4, $zero, L_8001529C
    if (ctx->r12 == 0) {
        // 0x80015280: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8001529C;
    }
    // 0x80015280: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80015284:
    // 0x80015284: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80015288: jal         0x8002E1F0
    // 0x8001528C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x8001528C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80015290: lw          $t5, 0x8($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X8);
    // 0x80015294: bnel        $t5, $zero, L_80015284
    if (ctx->r13 != 0) {
        // 0x80015298: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80015284;
    }
    goto skip_1;
    // 0x80015298: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_1:
L_8001529C:
    // 0x8001529C: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x800152A0: addiu       $v0, $v0, -0x709E
    ctx->r2 = ADD32(ctx->r2, -0X709E);
    // 0x800152A4: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x800152A8: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x800152AC: addiu       $v1, $v1, -0x6900
    ctx->r3 = ADD32(ctx->r3, -0X6900);
    // 0x800152B0: bnel        $t6, $zero, L_80015384
    if (ctx->r14 != 0) {
        // 0x800152B4: sh          $zero, 0x0($v0)
        MEM_H(0X0, ctx->r2) = 0;
            goto L_80015384;
    }
    goto skip_2;
    // 0x800152B4: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    skip_2:
    // 0x800152B8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800152BC: beq         $v0, $zero, L_800152D4
    if (ctx->r2 == 0) {
        // 0x800152C0: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_800152D4;
    }
    // 0x800152C0: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x800152C4: bne         $t8, $zero, L_800152D4
    if (ctx->r24 != 0) {
        // 0x800152C8: sw          $t8, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r24;
            goto L_800152D4;
    }
    // 0x800152C8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800152CC: jal         0x8002FBB0
    // 0x800152D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    osViBlack_recomp(rdram, ctx);
        goto after_8;
    // 0x800152D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
L_800152D4:
    // 0x800152D4: jal         0x80014F38
    // 0x800152D8: nop

    func_80014F38(rdram, ctx);
        goto after_9;
    // 0x800152D8: nop

    after_9:
    // 0x800152DC: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x800152E0: addiu       $v1, $v1, -0x70A0
    ctx->r3 = ADD32(ctx->r3, -0X70A0);
    // 0x800152E4: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x800152E8: lh          $t9, 0x0($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X0);
    // 0x800152EC: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800152F0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800152F4: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x800152F8: jal         0x8002FDE0
    // 0x800152FC: lw          $a0, -0x7080($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7080);
    osViSwapBuffer_recomp(rdram, ctx);
        goto after_10;
    // 0x800152FC: lw          $a0, -0x7080($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7080);
    after_10:
    // 0x80015300: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80015304: jal         0x8002F240
    // 0x80015308: sw          $zero, -0x68FC($at)
    MEM_W(-0X68FC, ctx->r1) = 0;
    osDpGetStatus_recomp(rdram, ctx);
        goto after_11;
    // 0x80015308: sw          $zero, -0x68FC($at)
    MEM_W(-0X68FC, ctx->r1) = 0;
    after_11:
    // 0x8001530C: andi        $t2, $v0, 0x2
    ctx->r10 = ctx->r2 & 0X2;
    // 0x80015310: bne         $t2, $zero, L_80015384
    if (ctx->r10 != 0) {
        // 0x80015314: nop
    
            goto L_80015384;
    }
    // 0x80015314: nop

    // 0x80015318: jal         0x8002F250
    // 0x8001531C: nop

    osViGetCurrentFramebuffer_recomp(rdram, ctx);
        goto after_12;
    // 0x8001531C: nop

    after_12:
    // 0x80015320: jal         0x8002FE30
    // 0x80015324: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    osViGetNextFramebuffer_recomp(rdram, ctx);
        goto after_13;
    // 0x80015324: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_13:
    // 0x80015328: beq         $v0, $s0, L_80015384
    if (ctx->r2 == ctx->r16) {
        // 0x8001532C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80015384;
    }
    // 0x8001532C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80015330:
    // 0x80015330: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80015334: jal         0x8002E1F0
    // 0x80015338: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_14;
    // 0x80015338: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x8001533C: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x80015340: lw          $t1, -0x68FC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X68FC);
    // 0x80015344: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80015348: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x8001534C: jal         0x8002F240
    // 0x80015350: sw          $t3, -0x68FC($at)
    MEM_W(-0X68FC, ctx->r1) = ctx->r11;
    osDpGetStatus_recomp(rdram, ctx);
        goto after_15;
    // 0x80015350: sw          $t3, -0x68FC($at)
    MEM_W(-0X68FC, ctx->r1) = ctx->r11;
    after_15:
    // 0x80015354: andi        $t4, $v0, 0x2
    ctx->r12 = ctx->r2 & 0X2;
    // 0x80015358: bne         $t4, $zero, L_80015384
    if (ctx->r12 != 0) {
        // 0x8001535C: nop
    
            goto L_80015384;
    }
    // 0x8001535C: nop

    // 0x80015360: jal         0x8002F250
    // 0x80015364: nop

    osViGetCurrentFramebuffer_recomp(rdram, ctx);
        goto after_16;
    // 0x80015364: nop

    after_16:
    // 0x80015368: jal         0x8002FE30
    // 0x8001536C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    osViGetNextFramebuffer_recomp(rdram, ctx);
        goto after_17;
    // 0x8001536C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_17:
    // 0x80015370: bnel        $v0, $s0, L_80015330
    if (ctx->r2 != ctx->r16) {
        // 0x80015374: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80015330;
    }
    goto skip_3;
    // 0x80015374: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_3:
    // 0x80015378: b           L_80015384
    // 0x8001537C: nop

        goto L_80015384;
    // 0x8001537C: nop

    // 0x80015380: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
L_80015384:
    // 0x80015384: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x80015388: addiu       $t5, $t5, -0x6EC8
    ctx->r13 = ADD32(ctx->r13, -0X6EC8);
    // 0x8001538C: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80015390: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80015394: sh          $t6, -0x709C($at)
    MEM_H(-0X709C, ctx->r1) = ctx->r14;
    // 0x80015398: jal         0x800134C4
    // 0x8001539C: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    func_800134C4(rdram, ctx);
        goto after_18;
    // 0x8001539C: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    after_18:
    // 0x800153A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800153A4: jal         0x8002EC20
    // 0x800153A8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    osSetThreadPri_recomp(rdram, ctx);
        goto after_19;
    // 0x800153A8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_19:
    // 0x800153AC: jal         0x80013474
    // 0x800153B0: nop

    func_80013474(rdram, ctx);
        goto after_20;
    // 0x800153B0: nop

    after_20:
    // 0x800153B4: bne         $v0, $zero, L_800153F4
    if (ctx->r2 != 0) {
        // 0x800153B8: nop
    
            goto L_800153F4;
    }
    // 0x800153B8: nop

    // 0x800153BC: jal         0x80081D28
    // 0x800153C0: nop

    func_80081D28(rdram, ctx);
        goto after_21;
    // 0x800153C0: nop

    after_21:
    // 0x800153C4: beq         $v0, $zero, L_800153F4
    if (ctx->r2 == 0) {
        // 0x800153C8: nop
    
            goto L_800153F4;
    }
    // 0x800153C8: nop

L_800153CC:
    // 0x800153CC: jal         0x8002FE70
    // 0x800153D0: nop

    osYieldThread_recomp(rdram, ctx);
        goto after_22;
    // 0x800153D0: nop

    after_22:
    // 0x800153D4: jal         0x80013474
    // 0x800153D8: nop

    func_80013474(rdram, ctx);
        goto after_23;
    // 0x800153D8: nop

    after_23:
    // 0x800153DC: bne         $v0, $zero, L_800153F4
    if (ctx->r2 != 0) {
        // 0x800153E0: nop
    
            goto L_800153F4;
    }
    // 0x800153E0: nop

    // 0x800153E4: jal         0x80081D28
    // 0x800153E8: nop

    func_80081D28(rdram, ctx);
        goto after_24;
    // 0x800153E8: nop

    after_24:
    // 0x800153EC: bne         $v0, $zero, L_800153CC
    if (ctx->r2 != 0) {
        // 0x800153F0: nop
    
            goto L_800153CC;
    }
    // 0x800153F0: nop

L_800153F4:
    // 0x800153F4: jal         0x80013500
    // 0x800153F8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80013500(rdram, ctx);
        goto after_25;
    // 0x800153F8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_25:
    // 0x800153FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80015400: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80015404: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80015408: jr          $ra
    // 0x8001540C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8001540C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80015410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80015414: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80015418: jal         0x800151BC
    // 0x8001541C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800151BC(rdram, ctx);
        goto after_0;
    // 0x8001541C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80015420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80015424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80015428: jr          $ra
    return;
;}
RECOMP_FUNC void func_80015430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015430: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80015434: addiu       $v0, $v0, -0x70A0
    ctx->r2 = ADD32(ctx->r2, -0X70A0);
    // 0x80015438: sh          $a0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r4;
    // 0x8001543C: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x80015440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80015444: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80015448: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001544C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80015450: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80015454: jal         0x8002FDE0
    // 0x80015458: lw          $a0, -0x7080($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7080);
    osViSwapBuffer_recomp(rdram, ctx);
        goto after_0;
    // 0x80015458: lw          $a0, -0x7080($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7080);
    after_0:
    // 0x8001545C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80015460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80015464: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001546C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001546C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80015470: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80015474: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80015478: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8001547C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80015480: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80015484: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80015488: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8001548C: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x80015490: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x80015494: lui         $s3, 0x8004
    ctx->r19 = S32(0X8004 << 16);
    // 0x80015498: lui         $s4, 0x8008
    ctx->r20 = S32(0X8008 << 16);
    // 0x8001549C: lui         $s7, 0x8008
    ctx->r23 = S32(0X8008 << 16);
    // 0x800154A0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800154A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800154A8: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x800154AC: addiu       $s7, $s7, -0x6FD0
    ctx->r23 = ADD32(ctx->r23, -0X6FD0);
    // 0x800154B0: addiu       $s4, $s4, -0x7030
    ctx->r20 = ADD32(ctx->r20, -0X7030);
    // 0x800154B4: addiu       $s3, $s3, -0xA30
    ctx->r19 = ADD32(ctx->r19, -0XA30);
    // 0x800154B8: addiu       $s2, $s2, -0x6EC8
    ctx->r18 = ADD32(ctx->r18, -0X6EC8);
    // 0x800154BC: addiu       $s1, $s1, -0x7030
    ctx->r17 = ADD32(ctx->r17, -0X7030);
    // 0x800154C0: addiu       $s5, $sp, 0x50
    ctx->r21 = ADD32(ctx->r29, 0X50);
    // 0x800154C4: addiu       $s6, $zero, 0x258
    ctx->r22 = ADD32(0, 0X258);
    // 0x800154C8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_800154CC:
    // 0x800154CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x800154D0: jal         0x8002E1F0
    // 0x800154D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x800154D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x800154D8: jal         0x80014A54
    // 0x800154DC: nop

    func_80014A54(rdram, ctx);
        goto after_1;
    // 0x800154DC: nop

    after_1:
    // 0x800154E0: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x800154E4: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x800154E8: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x800154EC: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x800154F0: xor         $s0, $s6, $t7
    ctx->r16 = ctx->r22 ^ ctx->r15;
    // 0x800154F4: jal         0x8001E7C0
    // 0x800154F8: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    func_8001E7C0(rdram, ctx);
        goto after_2;
    // 0x800154F8: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    after_2:
    // 0x800154FC: beq         $s0, $zero, L_80015524
    if (ctx->r16 == 0) {
        // 0x80015500: lw          $v1, 0x0($s3)
        ctx->r3 = MEM_W(ctx->r19, 0X0);
            goto L_80015524;
    }
    // 0x80015500: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x80015504: sltiu       $t8, $v0, 0x1
    ctx->r24 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80015508: beql        $t8, $zero, L_80015528
    if (ctx->r24 == 0) {
        // 0x8001550C: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_80015528;
    }
    goto skip_0;
    // 0x8001550C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    skip_0:
    // 0x80015510: beql        $v1, $zero, L_80015528
    if (ctx->r3 == 0) {
        // 0x80015514: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_80015528;
    }
    goto skip_1;
    // 0x80015514: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    skip_1:
    // 0x80015518: jal         0x8001E5DC
    // 0x8001551C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8001E5DC(rdram, ctx);
        goto after_3;
    // 0x8001551C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x80015520: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
L_80015524:
    // 0x80015524: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_80015528:
    // 0x80015528: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001552C: jal         0x8002EAD0
    // 0x80015530: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x80015530: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80015534: lui         $s0, 0x8008
    ctx->r16 = S32(0X8008 << 16);
    // 0x80015538: addiu       $s0, $s0, -0x7070
    ctx->r16 = ADD32(ctx->r16, -0X7070);
    // 0x8001553C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_80015540:
    // 0x80015540: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80015544: beql        $a0, $zero, L_80015558
    if (ctx->r4 == 0) {
        // 0x80015548: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_80015558;
    }
    goto skip_2;
    // 0x80015548: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_2:
    // 0x8001554C: jal         0x8002EAD0
    // 0x80015550: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    osSendMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x80015550: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    after_5:
    // 0x80015554: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80015558:
    // 0x80015558: bnel        $s0, $s1, L_80015540
    if (ctx->r16 != ctx->r17) {
        // 0x8001555C: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_80015540;
    }
    goto skip_3;
    // 0x8001555C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_3:
    // 0x80015560: b           L_800154CC
    // 0x80015564: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
        goto L_800154CC;
    // 0x80015564: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80015568: nop

    // 0x8001556C: nop

    // 0x80015570: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80015574: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80015578: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001557C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80015580: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80015584: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80015588: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8001558C: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80015590: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80015594: jr          $ra
    // 0x80015598: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80015598: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8001559C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001559C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800155A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800155A4: jal         0x8002FBB0
    // 0x800155A8: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    osViBlack_recomp(rdram, ctx);
        goto after_0;
    // 0x800155A8: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    after_0:
    // 0x800155AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800155B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800155B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800155BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800155BC: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800155C0: lw          $a0, -0x7080($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7080);
    // 0x800155C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800155C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800155CC: beq         $a0, $zero, L_800155F8
    if (ctx->r4 == 0) {
        // 0x800155D0: lui         $a1, 0x1
        ctx->r5 = S32(0X1 << 16);
            goto L_800155F8;
    }
    // 0x800155D0: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x800155D4: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x800155D8: ori         $a2, $a2, 0x1D80
    ctx->r6 = ctx->r6 | 0X1D80;
    // 0x800155DC: jal         0x80019E98
    // 0x800155E0: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
    func_80019E98(rdram, ctx);
        goto after_0;
    // 0x800155E0: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
    after_0:
    // 0x800155E4: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800155E8: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x800155EC: ori         $a1, $a1, 0x1D80
    ctx->r5 = ctx->r5 | 0X1D80;
    // 0x800155F0: jal         0x8002E660
    // 0x800155F4: lw          $a0, -0x7080($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7080);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x800155F4: lw          $a0, -0x7080($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7080);
    after_1:
L_800155F8:
    // 0x800155F8: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800155FC: lw          $a0, -0x707C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X707C);
    // 0x80015600: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x80015604: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
    // 0x80015608: beq         $a0, $zero, L_8001562C
    if (ctx->r4 == 0) {
        // 0x8001560C: lui         $a2, 0x2
        ctx->r6 = S32(0X2 << 16);
            goto L_8001562C;
    }
    // 0x8001560C: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x80015610: jal         0x80019E98
    // 0x80015614: ori         $a2, $a2, 0x1D80
    ctx->r6 = ctx->r6 | 0X1D80;
    func_80019E98(rdram, ctx);
        goto after_2;
    // 0x80015614: ori         $a2, $a2, 0x1D80
    ctx->r6 = ctx->r6 | 0X1D80;
    after_2:
    // 0x80015618: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001561C: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80015620: ori         $a1, $a1, 0x1D80
    ctx->r5 = ctx->r5 | 0X1D80;
    // 0x80015624: jal         0x8002E660
    // 0x80015628: lw          $a0, -0x707C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X707C);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_3;
    // 0x80015628: lw          $a0, -0x707C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X707C);
    after_3:
L_8001562C:
    // 0x8001562C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80015630: lw          $a0, -0x7078($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7078);
    // 0x80015634: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x80015638: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
    // 0x8001563C: beq         $a0, $zero, L_80015660
    if (ctx->r4 == 0) {
        // 0x80015640: lui         $a2, 0x1
        ctx->r6 = S32(0X1 << 16);
            goto L_80015660;
    }
    // 0x80015640: lui         $a2, 0x1
    ctx->r6 = S32(0X1 << 16);
    // 0x80015644: jal         0x80019E98
    // 0x80015648: ori         $a2, $a2, 0xEC0
    ctx->r6 = ctx->r6 | 0XEC0;
    func_80019E98(rdram, ctx);
        goto after_4;
    // 0x80015648: ori         $a2, $a2, 0xEC0
    ctx->r6 = ctx->r6 | 0XEC0;
    after_4:
    // 0x8001564C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80015650: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x80015654: ori         $a1, $a1, 0xEC0
    ctx->r5 = ctx->r5 | 0XEC0;
    // 0x80015658: jal         0x8002E660
    // 0x8001565C: lw          $a0, -0x7078($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7078);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_5;
    // 0x8001565C: lw          $a0, -0x7078($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7078);
    after_5:
L_80015660:
    // 0x80015660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80015664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80015668: jr          $ra
    return;
;}
RECOMP_FUNC void func_80015670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015670: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80015674: lw          $v0, -0x7098($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7098);
    // 0x80015678: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8001567C: slti        $at, $a0, -0x20
    ctx->r1 = SIGNED(ctx->r4) < -0X20 ? 1 : 0;
    // 0x80015680: addiu       $t2, $v0, 0x30
    ctx->r10 = ADD32(ctx->r2, 0X30);
    // 0x80015684: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80015688: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8001568C: or          $t0, $t2, $zero
    ctx->r8 = ctx->r10 | 0;
    // 0x80015690: addiu       $t1, $v0, 0x44
    ctx->r9 = ADD32(ctx->r2, 0X44);
    // 0x80015694: addiu       $a3, $v0, 0x1C
    ctx->r7 = ADD32(ctx->r2, 0X1C);
    // 0x80015698: beq         $at, $zero, L_800156A8
    if (ctx->r1 == 0) {
        // 0x8001569C: addiu       $t3, $v0, 0x32
        ctx->r11 = ADD32(ctx->r2, 0X32);
            goto L_800156A8;
    }
    // 0x8001569C: addiu       $t3, $v0, 0x32
    ctx->r11 = ADD32(ctx->r2, 0X32);
    // 0x800156A0: b           L_800156B8
    // 0x800156A4: addiu       $a2, $zero, -0x20
    ctx->r6 = ADD32(0, -0X20);
        goto L_800156B8;
    // 0x800156A4: addiu       $a2, $zero, -0x20
    ctx->r6 = ADD32(0, -0X20);
L_800156A8:
    // 0x800156A8: slti        $at, $a2, 0x21
    ctx->r1 = SIGNED(ctx->r6) < 0X21 ? 1 : 0;
    // 0x800156AC: bnel        $at, $zero, L_800156BC
    if (ctx->r1 != 0) {
        // 0x800156B0: slti        $at, $a1, -0x28
        ctx->r1 = SIGNED(ctx->r5) < -0X28 ? 1 : 0;
            goto L_800156BC;
    }
    goto skip_0;
    // 0x800156B0: slti        $at, $a1, -0x28
    ctx->r1 = SIGNED(ctx->r5) < -0X28 ? 1 : 0;
    skip_0:
    // 0x800156B4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
L_800156B8:
    // 0x800156B8: slti        $at, $a1, -0x28
    ctx->r1 = SIGNED(ctx->r5) < -0X28 ? 1 : 0;
L_800156BC:
    // 0x800156BC: beq         $at, $zero, L_800156CC
    if (ctx->r1 == 0) {
        // 0x800156C0: lui         $a0, 0x8
        ctx->r4 = S32(0X8 << 16);
            goto L_800156CC;
    }
    // 0x800156C0: lui         $a0, 0x8
    ctx->r4 = S32(0X8 << 16);
    // 0x800156C4: b           L_800156DC
    // 0x800156C8: addiu       $a1, $zero, -0x28
    ctx->r5 = ADD32(0, -0X28);
        goto L_800156DC;
    // 0x800156C8: addiu       $a1, $zero, -0x28
    ctx->r5 = ADD32(0, -0X28);
L_800156CC:
    // 0x800156CC: slti        $at, $a1, 0x19
    ctx->r1 = SIGNED(ctx->r5) < 0X19 ? 1 : 0;
    // 0x800156D0: bnel        $at, $zero, L_800156E0
    if (ctx->r1 != 0) {
        // 0x800156D4: ori         $a0, $a0, 0x401
        ctx->r4 = ctx->r4 | 0X401;
            goto L_800156E0;
    }
    goto skip_1;
    // 0x800156D4: ori         $a0, $a0, 0x401
    ctx->r4 = ctx->r4 | 0X401;
    skip_1:
    // 0x800156D8: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
L_800156DC:
    // 0x800156DC: ori         $a0, $a0, 0x401
    ctx->r4 = ctx->r4 | 0X401;
L_800156E0:
    // 0x800156E0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800156E4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800156E8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800156EC: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x800156F0: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x800156F4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x800156F8: jal         0x8002FEC0
    // 0x800156FC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x800156FC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_0:
    // 0x80015700: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80015704: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80015708: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8001570C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80015710: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80015714: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80015718: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8001571C: addiu       $t6, $a2, 0x80
    ctx->r14 = ADD32(ctx->r6, 0X80);
    // 0x80015720: addiu       $t7, $a2, 0x2E0
    ctx->r15 = ADD32(ctx->r6, 0X2E0);
    // 0x80015724: addiu       $t8, $a1, 0x30
    ctx->r24 = ADD32(ctx->r5, 0X30);
    // 0x80015728: sh          $t6, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r14;
    // 0x8001572C: sh          $t7, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r15;
    // 0x80015730: addiu       $t9, $a1, 0x1F4
    ctx->r25 = ADD32(ctx->r5, 0X1F4);
    // 0x80015734: sh          $t8, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r24;
    // 0x80015738: sh          $t9, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r25;
    // 0x8001573C: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x80015740: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80015744: jal         0x8002FEC0
    // 0x80015748: sw          $t4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r12;
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80015748: sw          $t4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r12;
    after_1:
    // 0x8001574C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80015750: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80015754: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001575C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001575C: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80015760: jr          $ra
    // 0x80015764: lw          $v0, -0x7078($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7078);
    return;
    // 0x80015764: lw          $v0, -0x7078($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7078);
;}
RECOMP_FUNC void func_80015768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015768: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001576C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80015770: jr          $ra
    // 0x80015774: sh          $t6, -0x709E($at)
    MEM_H(-0X709E, ctx->r1) = ctx->r14;
    return;
    // 0x80015774: sh          $t6, -0x709E($at)
    MEM_H(-0X709E, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800157E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800157E0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800157E4: jr          $ra
    // 0x800157E8: sh          $a0, -0x6648($at)
    MEM_H(-0X6648, ctx->r1) = ctx->r4;
    return;
    // 0x800157E8: sh          $a0, -0x6648($at)
    MEM_H(-0X6648, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800157EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800157EC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800157F0: lui         $t7, 0xDC08
    ctx->r15 = S32(0XDC08 << 16);
    // 0x800157F4: ori         $t7, $t7, 0x8
    ctx->r15 = ctx->r15 | 0X8;
    // 0x800157F8: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800157FC: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80015800: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80015804: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80015808: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001580C: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x80015810: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x80015814: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x80015818: addiu       $t1, $t1, -0x6848
    ctx->r9 = ADD32(ctx->r9, -0X6848);
    // 0x8001581C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80015820: jr          $ra
    // 0x80015824: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    return;
    // 0x80015824: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
;}
RECOMP_FUNC void func_80015828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015828: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001582C: addiu       $a0, $a0, -0x6888
    ctx->r4 = ADD32(ctx->r4, -0X6888);
    // 0x80015830: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80015834: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_80015838:
    // 0x80015838: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8001583C: beql        $t6, $zero, L_80015854
    if (ctx->r14 == 0) {
        // 0x80015840: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_80015854;
    }
    goto skip_0;
    // 0x80015840: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    skip_0:
    // 0x80015844: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80015848: bne         $v1, $v0, L_80015838
    if (ctx->r3 != ctx->r2) {
        // 0x8001584C: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_80015838;
    }
    // 0x8001584C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80015850: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_80015854:
    // 0x80015854: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x80015858: jr          $ra
    // 0x8001585C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8001585C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80015860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015860: sll         $t7, $a0, 1
    ctx->r15 = S32(ctx->r4 << 1);
    // 0x80015864: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80015868: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8001586C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80015870: jr          $ra
    // 0x80015874: sh          $t6, -0x6888($at)
    MEM_H(-0X6888, ctx->r1) = ctx->r14;
    return;
    // 0x80015874: sh          $t6, -0x6888($at)
    MEM_H(-0X6888, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80015878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015878: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x8001587C: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80015880: addiu       $v0, $v0, -0x6848
    ctx->r2 = ADD32(ctx->r2, -0X6848);
    // 0x80015884: addiu       $v1, $v1, -0x6888
    ctx->r3 = ADD32(ctx->r3, -0X6888);
    // 0x80015888: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
L_8001588C:
    // 0x8001588C: blezl       $t6, L_8001589C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80015890: lh          $t7, 0x2($v1)
        ctx->r15 = MEM_H(ctx->r3, 0X2);
            goto L_8001589C;
    }
    goto skip_0;
    // 0x80015890: lh          $t7, 0x2($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2);
    skip_0:
    // 0x80015894: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x80015898: lh          $t7, 0x2($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2);
L_8001589C:
    // 0x8001589C: blezl       $t7, L_800158AC
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800158A0: lh          $t8, 0x4($v1)
        ctx->r24 = MEM_H(ctx->r3, 0X4);
            goto L_800158AC;
    }
    goto skip_1;
    // 0x800158A0: lh          $t8, 0x4($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X4);
    skip_1:
    // 0x800158A4: sh          $zero, 0x2($v1)
    MEM_H(0X2, ctx->r3) = 0;
    // 0x800158A8: lh          $t8, 0x4($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X4);
L_800158AC:
    // 0x800158AC: blezl       $t8, L_800158BC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x800158B0: lh          $t9, 0x6($v1)
        ctx->r25 = MEM_H(ctx->r3, 0X6);
            goto L_800158BC;
    }
    goto skip_2;
    // 0x800158B0: lh          $t9, 0x6($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X6);
    skip_2:
    // 0x800158B4: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
    // 0x800158B8: lh          $t9, 0x6($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X6);
L_800158BC:
    // 0x800158BC: blezl       $t9, L_800158CC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x800158C0: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_800158CC;
    }
    goto skip_3;
    // 0x800158C0: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    skip_3:
    // 0x800158C4: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x800158C8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_800158CC:
    // 0x800158CC: bnel        $v1, $v0, L_8001588C
    if (ctx->r3 != ctx->r2) {
        // 0x800158D0: lh          $t6, 0x0($v1)
        ctx->r14 = MEM_H(ctx->r3, 0X0);
            goto L_8001588C;
    }
    goto skip_4;
    // 0x800158D0: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    skip_4:
    // 0x800158D4: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800158D8: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800158DC: jr          $ra
    // 0x800158E0: sh          $t0, -0xA20($at)
    MEM_H(-0XA20, ctx->r1) = ctx->r8;
    return;
    // 0x800158E0: sh          $t0, -0xA20($at)
    MEM_H(-0XA20, ctx->r1) = ctx->r8;
;}
RECOMP_FUNC void func_800158E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800158E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800158E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800158EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800158F0: jal         0x80015860
    // 0x800158F4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    func_80015860(rdram, ctx);
        goto after_0;
    // 0x800158F4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x800158F8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800158FC: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x80015900: addiu       $t8, $t8, -0x68E8
    ctx->r24 = ADD32(ctx->r24, -0X68E8);
    // 0x80015904: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80015908: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x8001590C: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x80015910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80015914: mflo        $t0
    ctx->r8 = lo;
    // 0x80015918: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001591C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80015920: sb          $zero, -0x68F0($at)
    MEM_B(-0X68F0, ctx->r1) = 0;
    // 0x80015924: jr          $ra
    // 0x80015928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80015928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001592C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001592C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80015930: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80015934: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80015938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001593C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80015940: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80015944: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80015948: addiu       $v0, $v0, -0x68F0
    ctx->r2 = ADD32(ctx->r2, -0X68F0);
    // 0x8001594C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80015950: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80015954:
    // 0x80015954: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80015958: beql        $t6, $zero, L_80015970
    if (ctx->r14 == 0) {
        // 0x8001595C: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_80015970;
    }
    goto skip_0;
    // 0x8001595C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    skip_0:
    // 0x80015960: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80015964: bne         $v1, $a0, L_80015954
    if (ctx->r3 != ctx->r4) {
        // 0x80015968: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80015954;
    }
    // 0x80015968: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8001596C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_80015970:
    // 0x80015970: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80015974: jal         0x80015828
    // 0x80015978: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_80015828(rdram, ctx);
        goto after_0;
    // 0x80015978: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x8001597C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80015980: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80015984: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80015988: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x8001598C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80015990: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80015994: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80015998: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8001599C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800159A0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800159A4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800159A8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800159AC: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800159B0: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x800159B4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x800159B8: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x800159BC: addiu       $t9, $t9, -0x68E8
    ctx->r25 = ADD32(ctx->r25, -0X68E8);
    // 0x800159C0: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x800159C4: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x800159C8: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x800159CC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800159D0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800159D4: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800159D8: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x800159DC: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x800159E0: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x800159E4: addiu       $t5, $t5, -0x6848
    ctx->r13 = ADD32(ctx->r13, -0X6848);
    // 0x800159E8: sll         $t4, $v0, 4
    ctx->r12 = S32(ctx->r2 << 4);
    // 0x800159EC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x800159F0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800159F4: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x800159F8: sh          $a3, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r7;
    // 0x800159FC: sh          $t2, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r10;
    // 0x80015A00: sh          $t0, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r8;
    // 0x80015A04: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80015A08: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80015A0C: sh          $t3, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r11;
    // 0x80015A10: addiu       $t1, $zero, 0x1FF
    ctx->r9 = ADD32(0, 0X1FF);
    // 0x80015A14: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x80015A18: sll         $t6, $a3, 1
    ctx->r14 = S32(ctx->r7 << 1);
    // 0x80015A1C: sll         $t7, $t0, 1
    ctx->r15 = S32(ctx->r8 << 1);
    // 0x80015A20: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x80015A24: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80015A28: sh          $t7, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r15;
    // 0x80015A2C: sh          $t1, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r9;
    // 0x80015A30: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    // 0x80015A34: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80015A38: sh          $t1, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r9;
    // 0x80015A3C: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
    // 0x80015A40: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80015A44: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x80015A48: sh          $t9, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r25;
    // 0x80015A4C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80015A50: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x80015A54: jal         0x8002E660
    // 0x80015A58: sh          $t5, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r13;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x80015A58: sh          $t5, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r13;
    after_1:
    // 0x80015A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80015A60: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80015A64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80015A68: jr          $ra
    return;
;}
RECOMP_FUNC void func_80015A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015A70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80015A74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80015A78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80015A7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80015A80: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80015A84: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80015A88: jal         0x80015860
    // 0x80015A8C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    func_80015860(rdram, ctx);
        goto after_0;
    // 0x80015A8C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x80015A90: jal         0x80015828
    // 0x80015A94: nop

    func_80015828(rdram, ctx);
        goto after_1;
    // 0x80015A94: nop

    after_1:
    // 0x80015A98: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80015A9C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80015AA0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80015AA4: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x80015AA8: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80015AAC: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80015AB0: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x80015AB4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80015AB8: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80015ABC: addiu       $t9, $t9, -0x6848
    ctx->r25 = ADD32(ctx->r25, -0X6848);
    // 0x80015AC0: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80015AC4: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80015AC8: sll         $t8, $v0, 4
    ctx->r24 = S32(ctx->r2 << 4);
    // 0x80015ACC: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x80015AD0: addiu       $v1, $zero, 0x1FF
    ctx->r3 = ADD32(0, 0X1FF);
    // 0x80015AD4: sh          $v1, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r3;
    // 0x80015AD8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80015ADC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80015AE0: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    // 0x80015AE4: sh          $v1, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r3;
    // 0x80015AE8: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x80015AEC: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
    // 0x80015AF0: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x80015AF4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80015AF8: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80015AFC: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
    // 0x80015B00: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x80015B04: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80015B08: sh          $t3, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r11;
    // 0x80015B0C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80015B10: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x80015B14: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x80015B18: sh          $t5, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r13;
    // 0x80015B1C: jal         0x8002E660
    // 0x80015B20: sh          $t7, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r15;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x80015B20: sh          $t7, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r15;
    after_2:
    // 0x80015B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80015B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80015B2C: jr          $ra
    // 0x80015B30: nop

    return;
    // 0x80015B30: nop

;}
RECOMP_FUNC void func_80015B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015B34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80015B38: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80015B3C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80015B40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80015B44: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80015B48: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80015B4C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80015B50: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80015B54: jal         0x80015860
    // 0x80015B58: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_80015860(rdram, ctx);
        goto after_0;
    // 0x80015B58: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x80015B5C: jal         0x80015828
    // 0x80015B60: nop

    func_80015828(rdram, ctx);
        goto after_1;
    // 0x80015B60: nop

    after_1:
    // 0x80015B64: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80015B68: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80015B6C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80015B70: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80015B74: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x80015B78: addu        $a3, $s0, $t6
    ctx->r7 = ADD32(ctx->r16, ctx->r14);
    // 0x80015B7C: bgez        $s0, L_80015B8C
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80015B80: addu        $t0, $a2, $t7
        ctx->r8 = ADD32(ctx->r6, ctx->r15);
            goto L_80015B8C;
    }
    // 0x80015B80: addu        $t0, $a2, $t7
    ctx->r8 = ADD32(ctx->r6, ctx->r15);
    // 0x80015B84: b           L_80015B9C
    // 0x80015B88: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80015B9C;
    // 0x80015B88: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80015B8C:
    // 0x80015B8C: slti        $at, $s0, 0x131
    ctx->r1 = SIGNED(ctx->r16) < 0X131 ? 1 : 0;
    // 0x80015B90: bne         $at, $zero, L_80015B9C
    if (ctx->r1 != 0) {
        // 0x80015B94: nop
    
            goto L_80015B9C;
    }
    // 0x80015B94: nop

    // 0x80015B98: addiu       $s0, $zero, 0x130
    ctx->r16 = ADD32(0, 0X130);
L_80015B9C:
    // 0x80015B9C: bgez        $a2, L_80015BAC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80015BA0: slti        $at, $a2, 0xE5
        ctx->r1 = SIGNED(ctx->r6) < 0XE5 ? 1 : 0;
            goto L_80015BAC;
    }
    // 0x80015BA0: slti        $at, $a2, 0xE5
    ctx->r1 = SIGNED(ctx->r6) < 0XE5 ? 1 : 0;
    // 0x80015BA4: b           L_80015BB8
    // 0x80015BA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_80015BB8;
    // 0x80015BA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80015BAC:
    // 0x80015BAC: bne         $at, $zero, L_80015BB8
    if (ctx->r1 != 0) {
        // 0x80015BB0: nop
    
            goto L_80015BB8;
    }
    // 0x80015BB0: nop

    // 0x80015BB4: addiu       $a2, $zero, 0xE4
    ctx->r6 = ADD32(0, 0XE4);
L_80015BB8:
    // 0x80015BB8: bgez        $a3, L_80015BC8
    if (SIGNED(ctx->r7) >= 0) {
        // 0x80015BBC: slti        $at, $a3, 0x131
        ctx->r1 = SIGNED(ctx->r7) < 0X131 ? 1 : 0;
            goto L_80015BC8;
    }
    // 0x80015BBC: slti        $at, $a3, 0x131
    ctx->r1 = SIGNED(ctx->r7) < 0X131 ? 1 : 0;
    // 0x80015BC0: b           L_80015BD4
    // 0x80015BC4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_80015BD4;
    // 0x80015BC4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_80015BC8:
    // 0x80015BC8: bne         $at, $zero, L_80015BD4
    if (ctx->r1 != 0) {
        // 0x80015BCC: nop
    
            goto L_80015BD4;
    }
    // 0x80015BCC: nop

    // 0x80015BD0: addiu       $a3, $zero, 0x130
    ctx->r7 = ADD32(0, 0X130);
L_80015BD4:
    // 0x80015BD4: bgez        $t0, L_80015BE4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80015BD8: subu        $a0, $a3, $s0
        ctx->r4 = SUB32(ctx->r7, ctx->r16);
            goto L_80015BE4;
    }
    // 0x80015BD8: subu        $a0, $a3, $s0
    ctx->r4 = SUB32(ctx->r7, ctx->r16);
    // 0x80015BDC: b           L_80015BF4
    // 0x80015BE0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_80015BF4;
    // 0x80015BE0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_80015BE4:
    // 0x80015BE4: slti        $at, $t0, 0xE5
    ctx->r1 = SIGNED(ctx->r8) < 0XE5 ? 1 : 0;
    // 0x80015BE8: bnel        $at, $zero, L_80015BF8
    if (ctx->r1 != 0) {
        // 0x80015BEC: mtc1        $a0, $f8
        ctx->f8.u32l = ctx->r4;
            goto L_80015BF8;
    }
    goto skip_0;
    // 0x80015BEC: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    skip_0:
    // 0x80015BF0: addiu       $t0, $zero, 0xE4
    ctx->r8 = ADD32(0, 0XE4);
L_80015BF4:
    // 0x80015BF4: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
L_80015BF8:
    // 0x80015BF8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80015BFC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80015C00: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80015C04: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x80015C08: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80015C0C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80015C10: subu        $a1, $t0, $a2
    ctx->r5 = SUB32(ctx->r8, ctx->r6);
    // 0x80015C14: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80015C18: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80015C1C: mtc1        $a2, $f10
    ctx->f10.u32l = ctx->r6;
    // 0x80015C20: lui         $t2, 0x8008
    ctx->r10 = S32(0X8008 << 16);
    // 0x80015C24: addiu       $t2, $t2, -0x6848
    ctx->r10 = ADD32(ctx->r10, -0X6848);
    // 0x80015C28: sll         $t8, $v0, 4
    ctx->r24 = S32(ctx->r2 << 4);
    // 0x80015C2C: sh          $a0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r4;
    // 0x80015C30: sh          $a1, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r5;
    // 0x80015C34: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80015C38: mtc1        $a1, $f16
    ctx->f16.u32l = ctx->r5;
    // 0x80015C3C: addu        $v1, $t2, $t8
    ctx->r3 = ADD32(ctx->r10, ctx->r24);
    // 0x80015C40: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80015C44: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x80015C48: sh          $s0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r16;
    // 0x80015C4C: sh          $a2, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r6;
    // 0x80015C50: sll         $t9, $a0, 1
    ctx->r25 = S32(ctx->r4 << 1);
    // 0x80015C54: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
    // 0x80015C58: addiu       $t1, $zero, 0x1FF
    ctx->r9 = ADD32(0, 0X1FF);
    // 0x80015C5C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80015C60: sll         $t4, $a1, 1
    ctx->r12 = S32(ctx->r5 << 1);
    // 0x80015C64: sll         $t9, $t3, 4
    ctx->r25 = S32(ctx->r11 << 4);
    // 0x80015C68: sh          $t4, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r12;
    // 0x80015C6C: sh          $t1, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r9;
    // 0x80015C70: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80015C74: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80015C78: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x80015C7C: sh          $t1, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r9;
    // 0x80015C80: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x80015C84: sh          $zero, 0xE($v1)
    MEM_H(0XE, ctx->r3) = 0;
    // 0x80015C88: addu        $a0, $t2, $t9
    ctx->r4 = ADD32(ctx->r10, ctx->r25);
    // 0x80015C8C: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x80015C90: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80015C94: sh          $t6, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r14;
    // 0x80015C98: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80015C9C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80015CA0: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x80015CA4: jal         0x8002E660
    // 0x80015CA8: sh          $t8, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r24;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x80015CA8: sh          $t8, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r24;
    after_2:
    // 0x80015CAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80015CB0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80015CB4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80015CB8: jr          $ra
    // 0x80015CBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80015CBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80015CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015CC0: lh          $t6, 0x4($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X4);
    // 0x80015CC4: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80015CC8: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x80015CCC: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80015CD0: lh          $t8, 0x8($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X8);
    // 0x80015CD4: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x80015CD8: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x80015CDC: lh          $t9, 0xA($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XA);
    // 0x80015CE0: jr          $ra
    // 0x80015CE4: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    return;
    // 0x80015CE4: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
;}
RECOMP_FUNC void func_80015CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015CE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80015CEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80015CF0: jal         0x80015D14
    // 0x80015CF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80015D14(rdram, ctx);
        goto after_0;
    // 0x80015CF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80015CF8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80015CFC: jal         0x800CA510
    // 0x80015D00: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800CA510(rdram, ctx);
        goto after_1;
    // 0x80015D00: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80015D04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80015D08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80015D0C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80015D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015D14: lh          $t6, 0x8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X8);
    // 0x80015D18: lh          $t7, 0xA($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA);
    // 0x80015D1C: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x80015D20: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80015D24: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80015D28: lh          $t8, -0x6648($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X6648);
    // 0x80015D2C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80015D30: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x80015D34: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80015D38: beq         $t8, $zero, L_80015D4C
    if (ctx->r24 == 0) {
        // 0x80015D3C: div.s       $f2, $f6, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
            goto L_80015D4C;
    }
    // 0x80015D3C: div.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80015D40: lwc1        $f16, 0x1710($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1710);
    // 0x80015D44: mul.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x80015D48: nop

L_80015D4C:
    // 0x80015D4C: jr          $ra
    // 0x80015D50: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x80015D50: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_80015D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015D60: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80015D64: lw          $t6, -0x24AC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X24AC);
    // 0x80015D68: lui         $t7, 0xE955
    ctx->r15 = S32(0XE955 << 16);
    // 0x80015D6C: ori         $t7, $t7, 0xCCDD
    ctx->r15 = ctx->r15 | 0XCCDD;
    // 0x80015D70: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80015D74: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x80015D78: sw          $t8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r24;
    // 0x80015D7C: blez        $a0, L_80015DF4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80015D80: lwc1        $f2, 0x0($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X0);
            goto L_80015DF4;
    }
    // 0x80015D80: lwc1        $f2, 0x0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80015D84: slt         $at, $a2, $a0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80015D88: beq         $at, $zero, L_80015D98
    if (ctx->r1 == 0) {
        // 0x80015D8C: subu        $t1, $a2, $a1
        ctx->r9 = SUB32(ctx->r6, ctx->r5);
            goto L_80015D98;
    }
    // 0x80015D8C: subu        $t1, $a2, $a1
    ctx->r9 = SUB32(ctx->r6, ctx->r5);
    // 0x80015D90: b           L_80015DB0
    // 0x80015D94: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
        goto L_80015DB0;
    // 0x80015D94: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_80015D98:
    // 0x80015D98: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80015D9C: beq         $at, $zero, L_80015DAC
    if (ctx->r1 == 0) {
        // 0x80015DA0: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80015DAC;
    }
    // 0x80015DA0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80015DA4: b           L_80015DAC
    // 0x80015DA8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_80015DAC;
    // 0x80015DA8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_80015DAC:
    // 0x80015DAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80015DB0:
    // 0x80015DB0: subu        $t9, $a0, $a1
    ctx->r25 = SUB32(ctx->r4, ctx->r5);
    // 0x80015DB4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80015DB8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80015DBC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80015DC0: div         $zero, $t0, $t1
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r9)));
    // 0x80015DC4: mflo        $a0
    ctx->r4 = lo;
    // 0x80015DC8: bne         $t1, $zero, L_80015DD4
    if (ctx->r9 != 0) {
        // 0x80015DCC: nop
    
            goto L_80015DD4;
    }
    // 0x80015DCC: nop

    // 0x80015DD0: break       7
    do_break(2147573200);
L_80015DD4:
    // 0x80015DD4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80015DD8: bne         $t1, $at, L_80015DEC
    if (ctx->r9 != ctx->r1) {
        // 0x80015DDC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80015DEC;
    }
    // 0x80015DDC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80015DE0: bne         $t0, $at, L_80015DEC
    if (ctx->r8 != ctx->r1) {
        // 0x80015DE4: nop
    
            goto L_80015DEC;
    }
    // 0x80015DE4: nop

    // 0x80015DE8: break       6
    do_break(2147573224);
L_80015DEC:
    // 0x80015DEC: b           L_80015E6C
    // 0x80015DF0: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
        goto L_80015E6C;
    // 0x80015DF0: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
L_80015DF4:
    // 0x80015DF4: bgez        $a0, L_80015E68
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80015DF8: negu        $v0, $a2
        ctx->r2 = SUB32(0, ctx->r6);
            goto L_80015E68;
    }
    // 0x80015DF8: negu        $v0, $a2
    ctx->r2 = SUB32(0, ctx->r6);
    // 0x80015DFC: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80015E00: beq         $at, $zero, L_80015E10
    if (ctx->r1 == 0) {
        // 0x80015E04: subu        $t4, $a2, $a1
        ctx->r12 = SUB32(ctx->r6, ctx->r5);
            goto L_80015E10;
    }
    // 0x80015E04: subu        $t4, $a2, $a1
    ctx->r12 = SUB32(ctx->r6, ctx->r5);
    // 0x80015E08: b           L_80015E2C
    // 0x80015E0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_80015E2C;
    // 0x80015E0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80015E10:
    // 0x80015E10: negu        $v1, $a1
    ctx->r3 = SUB32(0, ctx->r5);
    // 0x80015E14: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80015E18: beq         $at, $zero, L_80015E28
    if (ctx->r1 == 0) {
        // 0x80015E1C: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80015E28;
    }
    // 0x80015E1C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80015E20: b           L_80015E28
    // 0x80015E24: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80015E28;
    // 0x80015E24: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80015E28:
    // 0x80015E28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80015E2C:
    // 0x80015E2C: addu        $t2, $a0, $a1
    ctx->r10 = ADD32(ctx->r4, ctx->r5);
    // 0x80015E30: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80015E34: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80015E38: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80015E3C: div         $zero, $t3, $t4
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r12)));
    // 0x80015E40: mflo        $a0
    ctx->r4 = lo;
    // 0x80015E44: bne         $t4, $zero, L_80015E50
    if (ctx->r12 != 0) {
        // 0x80015E48: nop
    
            goto L_80015E50;
    }
    // 0x80015E48: nop

    // 0x80015E4C: break       7
    do_break(2147573324);
L_80015E50:
    // 0x80015E50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80015E54: bne         $t4, $at, L_80015E68
    if (ctx->r12 != ctx->r1) {
        // 0x80015E58: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80015E68;
    }
    // 0x80015E58: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80015E5C: bne         $t3, $at, L_80015E68
    if (ctx->r11 != ctx->r1) {
        // 0x80015E60: nop
    
            goto L_80015E68;
    }
    // 0x80015E60: nop

    // 0x80015E64: break       6
    do_break(2147573348);
L_80015E68:
    // 0x80015E68: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
L_80015E6C:
    // 0x80015E6C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80015E70: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80015E74: mul.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x80015E78: jr          $ra
    // 0x80015E7C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x80015E7C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_80015E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015E80: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80015E84: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80015E88: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80015E8C: addiu       $t7, $t7, -0x6620
    ctx->r15 = ADD32(ctx->r15, -0X6620);
    // 0x80015E90: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80015E94: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80015E98: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80015E9C: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80015EA0: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x80015EA4: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x80015EA8: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x80015EAC: sw          $t0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r8;
    // 0x80015EB0: lw          $t1, 0xC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XC);
    // 0x80015EB4: sw          $t1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r9;
    // 0x80015EB8: lw          $t2, 0x10($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X10);
    // 0x80015EBC: sw          $t2, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r10;
    // 0x80015EC0: lw          $t3, 0x14($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X14);
    // 0x80015EC4: jr          $ra
    // 0x80015EC8: sw          $t3, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r11;
    return;
    // 0x80015EC8: sw          $t3, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r11;
;}
RECOMP_FUNC void func_80015ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015ECC: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80015ED0: addiu       $v0, $v0, -0x6540
    ctx->r2 = ADD32(ctx->r2, -0X6540);
    // 0x80015ED4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80015ED8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80015EDC: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80015EE0: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80015EE4: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x80015EE8: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x80015EEC: sw          $t8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r24;
    // 0x80015EF0: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x80015EF4: sw          $t9, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r25;
    // 0x80015EF8: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x80015EFC: sw          $t0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r8;
    // 0x80015F00: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x80015F04: jr          $ra
    // 0x80015F08: sw          $t1, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r9;
    return;
    // 0x80015F08: sw          $t1, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r9;
;}
RECOMP_FUNC void func_80015F0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015F0C: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80015F10: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80015F14: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80015F18: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80015F1C: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x80015F20: jr          $ra
    // 0x80015F24: lw          $v0, -0x6640($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6640);
    return;
    // 0x80015F24: lw          $v0, -0x6640($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6640);
;}
RECOMP_FUNC void func_80015F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015F28: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80015F2C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80015F30: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80015F34: addiu       $t7, $t7, -0x6620
    ctx->r15 = ADD32(ctx->r15, -0X6620);
    // 0x80015F38: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80015F3C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80015F40: lw          $t8, 0x18($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18);
    // 0x80015F44: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80015F48: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x80015F4C: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x80015F50: lw          $t0, 0x20($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X20);
    // 0x80015F54: jr          $ra
    // 0x80015F58: sw          $t0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r8;
    return;
    // 0x80015F58: sw          $t0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r8;
;}
RECOMP_FUNC void func_80015F5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015F5C: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80015F60: addiu       $v0, $v0, -0x6540
    ctx->r2 = ADD32(ctx->r2, -0X6540);
    // 0x80015F64: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x80015F68: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80015F6C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80015F70: lw          $t7, 0x1C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X1C);
    // 0x80015F74: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x80015F78: lw          $t8, 0x20($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X20);
    // 0x80015F7C: jr          $ra
    // 0x80015F80: sw          $t8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r24;
    return;
    // 0x80015F80: sw          $t8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r24;
;}
RECOMP_FUNC void func_80015F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015F84: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80015F88: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80015F8C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80015F90: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80015F94: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80015F98: jr          $ra
    // 0x80015F9C: lw          $v0, -0x65EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X65EC);
    return;
    // 0x80015F9C: lw          $v0, -0x65EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X65EC);
;}
RECOMP_FUNC void func_80015FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015FA0: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80015FA4: lbu         $t6, -0x6297($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X6297);
    // 0x80015FA8: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80015FAC: beq         $t6, $zero, L_80015FC0
    if (ctx->r14 == 0) {
        // 0x80015FB0: nop
    
            goto L_80015FC0;
    }
    // 0x80015FB0: nop

    // 0x80015FB4: lbu         $t7, -0x646D($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X646D);
    // 0x80015FB8: beq         $t7, $zero, L_80015FC8
    if (ctx->r15 == 0) {
            // 0x80015FBC: nop

    func_80015FC8(rdram, ctx);
    return;
    }
    // 0x80015FBC: nop

L_80015FC0:
    // 0x80015FC0: jr          $ra
    // 0x80015FC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80015FC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80015FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015FC8: beq         $a0, $zero, L_80015FEC
    if (ctx->r4 == 0) {
        // 0x80015FCC: lui         $v1, 0x8008
        ctx->r3 = S32(0X8008 << 16);
            goto L_80015FEC;
    }
    // 0x80015FCC: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80015FD0: sll         $t8, $a0, 3
    ctx->r24 = S32(ctx->r4 << 3);
    // 0x80015FD4: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x80015FD8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80015FDC: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80015FE0: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x80015FE4: b           L_80015FF0
    // 0x80015FE8: lw          $v1, -0x65EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X65EC);
        goto L_80015FF0;
    // 0x80015FE8: lw          $v1, -0x65EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X65EC);
L_80015FEC:
    // 0x80015FEC: lw          $v1, -0x650C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X650C);
L_80015FF0:
    // 0x80015FF0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80015FF4: jr          $ra
    // 0x80015FF8: nop

    return;
    // 0x80015FF8: nop

;}
RECOMP_FUNC void func_80015FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015FFC: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80016000: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80016004: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80016008: addiu       $t7, $t7, -0x6620
    ctx->r15 = ADD32(ctx->r15, -0X6620);
    // 0x8001600C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80016010: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80016014: lw          $t8, 0x24($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X24);
    // 0x80016018: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8001601C: lw          $t9, 0x28($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X28);
    // 0x80016020: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x80016024: lw          $t0, 0x2C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X2C);
    // 0x80016028: sw          $t0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r8;
    // 0x8001602C: lw          $t1, 0x30($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X30);
    // 0x80016030: jr          $ra
    // 0x80016034: sw          $t1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r9;
    return;
    // 0x80016034: sw          $t1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r9;
;}
RECOMP_FUNC void func_80016038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016038: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001603C: addiu       $v0, $v0, -0x6540
    ctx->r2 = ADD32(ctx->r2, -0X6540);
    // 0x80016040: lw          $t6, 0x24($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X24);
    // 0x80016044: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80016048: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8001604C: lw          $t7, 0x28($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X28);
    // 0x80016050: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x80016054: lw          $t8, 0x2C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X2C);
    // 0x80016058: sw          $t8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r24;
    // 0x8001605C: lw          $t9, 0x30($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X30);
    // 0x80016060: jr          $ra
    // 0x80016064: sw          $t9, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r25;
    return;
    // 0x80016064: sw          $t9, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r25;
;}
RECOMP_FUNC void func_80016068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016068: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x8001606C: addiu       $t7, $t7, -0x6508
    ctx->r15 = ADD32(ctx->r15, -0X6508);
    // 0x80016070: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80016074: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80016078: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8001607C: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80016080: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80016084: jr          $ra
    // 0x80016088: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    return;
    // 0x80016088: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_8001608C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001608C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80016090: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80016094: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80016098: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001609C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800160A0: jal         0x8002FF70
    // 0x800160A4: addiu       $a0, $a0, -0x6458
    ctx->r4 = ADD32(ctx->r4, -0X6458);
    osGetThreadPri_recomp(rdram, ctx);
        goto after_0;
    // 0x800160A4: addiu       $a0, $a0, -0x6458
    ctx->r4 = ADD32(ctx->r4, -0X6458);
    after_0:
    // 0x800160A8: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800160AC: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x800160B0: addiu       $a0, $a0, -0x6458
    ctx->r4 = ADD32(ctx->r4, -0X6458);
    // 0x800160B4: jal         0x8002EC20
    // 0x800160B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    osSetThreadPri_recomp(rdram, ctx);
        goto after_1;
    // 0x800160B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800160BC: lui         $s0, 0x8008
    ctx->r16 = S32(0X8008 << 16);
    // 0x800160C0: addiu       $s0, $s0, -0x64C0
    ctx->r16 = ADD32(ctx->r16, -0X64C0);
    // 0x800160C4: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x800160C8: lb          $t6, 0x2($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X2);
    // 0x800160CC: lb          $t7, 0x3($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X3);
    // 0x800160D0: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
    // 0x800160D4: addiu       $v0, $v0, -0x64A8
    ctx->r2 = ADD32(ctx->r2, -0X64A8);
    // 0x800160D8: sb          $t6, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r14;
    // 0x800160DC: sb          $t7, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r15;
    // 0x800160E0: jal         0x800A9CAC
    // 0x800160E4: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    func_800A9CAC(rdram, ctx);
        goto after_2;
    // 0x800160E4: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    after_2:
    // 0x800160E8: beq         $v0, $zero, L_80016118
    if (ctx->r2 == 0) {
        // 0x800160EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80016118;
    }
    // 0x800160EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800160F0: jal         0x80088698
    // 0x800160F4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    _glrecord_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x800160F4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_3:
    // 0x800160F8: bne         $v0, $zero, L_80016110
    if (ctx->r2 != 0) {
        // 0x800160FC: nop
    
            goto L_80016110;
    }
    // 0x800160FC: nop

    // 0x80016100: jal         0x800A9CDC
    // 0x80016104: nop

    func_800A9CDC(rdram, ctx);
        goto after_4;
    // 0x80016104: nop

    after_4:
    // 0x80016108: b           L_80016118
    // 0x8001610C: nop

        goto L_80016118;
    // 0x8001610C: nop

L_80016110:
    // 0x80016110: jal         0x800D8FA0
    // 0x80016114: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_800D8FA0(rdram, ctx);
        goto after_5;
    // 0x80016114: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_5:
L_80016118:
    // 0x80016118: jal         0x800DC0C0
    // 0x8001611C: nop

    func_800DC0C0(rdram, ctx);
        goto after_6;
    // 0x8001611C: nop

    after_6:
    // 0x80016120: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x80016124: lui         $t3, 0x8008
    ctx->r11 = S32(0X8008 << 16);
    // 0x80016128: lui         $a3, 0x8008
    ctx->r7 = S32(0X8008 << 16);
    // 0x8001612C: lui         $s0, 0x8008
    ctx->r16 = S32(0X8008 << 16);
    // 0x80016130: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x80016134: addiu       $t0, $t0, -0x6540
    ctx->r8 = ADD32(ctx->r8, -0X6540);
    // 0x80016138: addiu       $s0, $s0, -0x6508
    ctx->r16 = ADD32(ctx->r16, -0X6508);
    // 0x8001613C: addiu       $a3, $a3, -0x6620
    ctx->r7 = ADD32(ctx->r7, -0X6620);
    // 0x80016140: addiu       $t3, $t3, -0x6294
    ctx->r11 = ADD32(ctx->r11, -0X6294);
    // 0x80016144: addiu       $s1, $s1, -0x64C0
    ctx->r17 = ADD32(ctx->r17, -0X64C0);
    // 0x80016148: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x8001614C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
L_80016150:
    // 0x80016150: lbu         $t9, 0x4($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X4);
    // 0x80016154: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80016158: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001615C: andi        $t5, $t9, 0x8
    ctx->r13 = ctx->r25 & 0X8;
    // 0x80016160: beq         $t5, $zero, L_80016170
    if (ctx->r13 == 0) {
        // 0x80016164: lui         $t7, 0x8008
        ctx->r15 = S32(0X8008 << 16);
            goto L_80016170;
    }
    // 0x80016164: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80016168: b           L_80016174
    // 0x8001616C: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
        goto L_80016174;
    // 0x8001616C: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
L_80016170:
    // 0x80016170: sb          $t6, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r14;
L_80016174:
    // 0x80016174: lhu         $t4, 0x0($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X0);
    // 0x80016178: sll         $t6, $t2, 3
    ctx->r14 = S32(ctx->r10 << 3);
    // 0x8001617C: addiu       $t7, $t7, -0x6640
    ctx->r15 = ADD32(ctx->r15, -0X6640);
    // 0x80016180: andi        $a2, $t4, 0x20
    ctx->r6 = ctx->r12 & 0X20;
    // 0x80016184: beq         $a2, $zero, L_800161C4
    if (ctx->r6 == 0) {
        // 0x80016188: or          $a0, $t4, $zero
        ctx->r4 = ctx->r12 | 0;
            goto L_800161C4;
    }
    // 0x80016188: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x8001618C: andi        $a1, $a0, 0x10
    ctx->r5 = ctx->r4 & 0X10;
    // 0x80016190: beq         $a1, $zero, L_800161C4
    if (ctx->r5 == 0) {
        // 0x80016194: andi        $v1, $a0, 0x4000
        ctx->r3 = ctx->r4 & 0X4000;
            goto L_800161C4;
    }
    // 0x80016194: andi        $v1, $a0, 0x4000
    ctx->r3 = ctx->r4 & 0X4000;
    // 0x80016198: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x8001619C: addiu       $t8, $t8, -0x6640
    ctx->r24 = ADD32(ctx->r24, -0X6640);
    // 0x800161A0: sll         $t7, $t2, 3
    ctx->r15 = S32(ctx->r10 << 3);
    // 0x800161A4: beq         $v1, $zero, L_800161BC
    if (ctx->r3 == 0) {
        // 0x800161A8: addu        $v0, $t7, $t8
        ctx->r2 = ADD32(ctx->r15, ctx->r24);
            goto L_800161BC;
    }
    // 0x800161A8: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800161AC: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800161B0: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x800161B4: b           L_800161E0
    // 0x800161B8: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
        goto L_800161E0;
    // 0x800161B8: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
L_800161BC:
    // 0x800161BC: b           L_800161E0
    // 0x800161C0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
        goto L_800161E0;
    // 0x800161C0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_800161C4:
    // 0x800161C4: andi        $a1, $a0, 0x10
    ctx->r5 = ctx->r4 & 0X10;
    // 0x800161C8: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
L_800161CC:
    // 0x800161CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800161D0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800161D4: bne         $v0, $t1, L_800161CC
    if (ctx->r2 != ctx->r9) {
        // 0x800161D8: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_800161CC;
    }
    // 0x800161D8: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x800161DC: andi        $v1, $a0, 0x4000
    ctx->r3 = ctx->r4 & 0X4000;
L_800161E0:
    // 0x800161E0: andi        $t8, $a0, 0x8000
    ctx->r24 = ctx->r4 & 0X8000;
    // 0x800161E4: beq         $t8, $zero, L_800161FC
    if (ctx->r24 == 0) {
        // 0x800161E8: lui         $v0, 0x8008
        ctx->r2 = S32(0X8008 << 16);
            goto L_800161FC;
    }
    // 0x800161E8: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x800161EC: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x800161F0: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x800161F4: b           L_80016200
    // 0x800161F8: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
        goto L_80016200;
    // 0x800161F8: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
L_800161FC:
    // 0x800161FC: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
L_80016200:
    // 0x80016200: beq         $v1, $zero, L_80016218
    if (ctx->r3 == 0) {
        // 0x80016204: andi        $t8, $a0, 0x2
        ctx->r24 = ctx->r4 & 0X2;
            goto L_80016218;
    }
    // 0x80016204: andi        $t8, $a0, 0x2
    ctx->r24 = ctx->r4 & 0X2;
    // 0x80016208: lw          $t6, 0x4($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X4);
    // 0x8001620C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80016210: b           L_8001621C
    // 0x80016214: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
        goto L_8001621C;
    // 0x80016214: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
L_80016218:
    // 0x80016218: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
L_8001621C:
    // 0x8001621C: beq         $t8, $zero, L_80016234
    if (ctx->r24 == 0) {
        // 0x80016220: andi        $t6, $a0, 0x4
        ctx->r14 = ctx->r4 & 0X4;
            goto L_80016234;
    }
    // 0x80016220: andi        $t6, $a0, 0x4
    ctx->r14 = ctx->r4 & 0X4;
    // 0x80016224: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x80016228: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x8001622C: b           L_80016238
    // 0x80016230: sw          $t5, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r13;
        goto L_80016238;
    // 0x80016230: sw          $t5, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r13;
L_80016234:
    // 0x80016234: sw          $zero, 0x8($a3)
    MEM_W(0X8, ctx->r7) = 0;
L_80016238:
    // 0x80016238: beq         $t6, $zero, L_80016250
    if (ctx->r14 == 0) {
        // 0x8001623C: andi        $t9, $a0, 0x8
        ctx->r25 = ctx->r4 & 0X8;
            goto L_80016250;
    }
    // 0x8001623C: andi        $t9, $a0, 0x8
    ctx->r25 = ctx->r4 & 0X8;
    // 0x80016240: lw          $t7, 0xC($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XC);
    // 0x80016244: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80016248: b           L_80016254
    // 0x8001624C: sw          $t8, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r24;
        goto L_80016254;
    // 0x8001624C: sw          $t8, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r24;
L_80016250:
    // 0x80016250: sw          $zero, 0xC($a3)
    MEM_W(0XC, ctx->r7) = 0;
L_80016254:
    // 0x80016254: beq         $t9, $zero, L_8001626C
    if (ctx->r25 == 0) {
        // 0x80016258: andi        $t7, $a0, 0x1
        ctx->r15 = ctx->r4 & 0X1;
            goto L_8001626C;
    }
    // 0x80016258: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
    // 0x8001625C: lw          $t5, 0x10($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X10);
    // 0x80016260: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80016264: b           L_80016270
    // 0x80016268: sw          $t6, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r14;
        goto L_80016270;
    // 0x80016268: sw          $t6, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r14;
L_8001626C:
    // 0x8001626C: sw          $zero, 0x10($a3)
    MEM_W(0X10, ctx->r7) = 0;
L_80016270:
    // 0x80016270: beq         $t7, $zero, L_80016288
    if (ctx->r15 == 0) {
        // 0x80016274: andi        $t5, $a0, 0x2000
        ctx->r13 = ctx->r4 & 0X2000;
            goto L_80016288;
    }
    // 0x80016274: andi        $t5, $a0, 0x2000
    ctx->r13 = ctx->r4 & 0X2000;
    // 0x80016278: lw          $t8, 0x14($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X14);
    // 0x8001627C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80016280: b           L_8001628C
    // 0x80016284: sw          $t9, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r25;
        goto L_8001628C;
    // 0x80016284: sw          $t9, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r25;
L_80016288:
    // 0x80016288: sw          $zero, 0x14($a3)
    MEM_W(0X14, ctx->r7) = 0;
L_8001628C:
    // 0x8001628C: beql        $t5, $zero, L_800162A8
    if (ctx->r13 == 0) {
        // 0x80016290: sw          $zero, 0x18($a3)
        MEM_W(0X18, ctx->r7) = 0;
            goto L_800162A8;
    }
    goto skip_0;
    // 0x80016290: sw          $zero, 0x18($a3)
    MEM_W(0X18, ctx->r7) = 0;
    skip_0:
    // 0x80016294: lw          $t6, 0x18($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X18);
    // 0x80016298: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8001629C: b           L_800162A8
    // 0x800162A0: sw          $t7, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r15;
        goto L_800162A8;
    // 0x800162A0: sw          $t7, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r15;
    // 0x800162A4: sw          $zero, 0x18($a3)
    MEM_W(0X18, ctx->r7) = 0;
L_800162A8:
    // 0x800162A8: beq         $a2, $zero, L_800162C0
    if (ctx->r6 == 0) {
        // 0x800162AC: andi        $t7, $a0, 0x800
        ctx->r15 = ctx->r4 & 0X800;
            goto L_800162C0;
    }
    // 0x800162AC: andi        $t7, $a0, 0x800
    ctx->r15 = ctx->r4 & 0X800;
    // 0x800162B0: lw          $t8, 0x1C($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X1C);
    // 0x800162B4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800162B8: b           L_800162C4
    // 0x800162BC: sw          $t9, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r25;
        goto L_800162C4;
    // 0x800162BC: sw          $t9, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r25;
L_800162C0:
    // 0x800162C0: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
L_800162C4:
    // 0x800162C4: beq         $a1, $zero, L_800162DC
    if (ctx->r5 == 0) {
        // 0x800162C8: addiu       $a2, $zero, 0x3B
        ctx->r6 = ADD32(0, 0X3B);
            goto L_800162DC;
    }
    // 0x800162C8: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    // 0x800162CC: lw          $t5, 0x20($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X20);
    // 0x800162D0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800162D4: b           L_800162E0
    // 0x800162D8: sw          $t6, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r14;
        goto L_800162E0;
    // 0x800162D8: sw          $t6, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r14;
L_800162DC:
    // 0x800162DC: sw          $zero, 0x20($a3)
    MEM_W(0X20, ctx->r7) = 0;
L_800162E0:
    // 0x800162E0: beq         $t7, $zero, L_800162F8
    if (ctx->r15 == 0) {
        // 0x800162E4: andi        $t5, $a0, 0x400
        ctx->r13 = ctx->r4 & 0X400;
            goto L_800162F8;
    }
    // 0x800162E4: andi        $t5, $a0, 0x400
    ctx->r13 = ctx->r4 & 0X400;
    // 0x800162E8: lw          $t8, 0x24($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X24);
    // 0x800162EC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800162F0: b           L_800162FC
    // 0x800162F4: sw          $t9, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r25;
        goto L_800162FC;
    // 0x800162F4: sw          $t9, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r25;
L_800162F8:
    // 0x800162F8: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
L_800162FC:
    // 0x800162FC: beq         $t5, $zero, L_80016314
    if (ctx->r13 == 0) {
        // 0x80016300: andi        $t8, $a0, 0x200
        ctx->r24 = ctx->r4 & 0X200;
            goto L_80016314;
    }
    // 0x80016300: andi        $t8, $a0, 0x200
    ctx->r24 = ctx->r4 & 0X200;
    // 0x80016304: lw          $t6, 0x28($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X28);
    // 0x80016308: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8001630C: b           L_80016318
    // 0x80016310: sw          $t7, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->r15;
        goto L_80016318;
    // 0x80016310: sw          $t7, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->r15;
L_80016314:
    // 0x80016314: sw          $zero, 0x28($a3)
    MEM_W(0X28, ctx->r7) = 0;
L_80016318:
    // 0x80016318: beq         $t8, $zero, L_80016330
    if (ctx->r24 == 0) {
        // 0x8001631C: andi        $t6, $a0, 0x100
        ctx->r14 = ctx->r4 & 0X100;
            goto L_80016330;
    }
    // 0x8001631C: andi        $t6, $a0, 0x100
    ctx->r14 = ctx->r4 & 0X100;
    // 0x80016320: lw          $t9, 0x2C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X2C);
    // 0x80016324: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x80016328: b           L_80016334
    // 0x8001632C: sw          $t5, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r13;
        goto L_80016334;
    // 0x8001632C: sw          $t5, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r13;
L_80016330:
    // 0x80016330: sw          $zero, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = 0;
L_80016334:
    // 0x80016334: beq         $t6, $zero, L_8001634C
    if (ctx->r14 == 0) {
        // 0x80016338: andi        $t9, $a0, 0x1000
        ctx->r25 = ctx->r4 & 0X1000;
            goto L_8001634C;
    }
    // 0x80016338: andi        $t9, $a0, 0x1000
    ctx->r25 = ctx->r4 & 0X1000;
    // 0x8001633C: lw          $t7, 0x30($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X30);
    // 0x80016340: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80016344: b           L_80016350
    // 0x80016348: sw          $t8, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r24;
        goto L_80016350;
    // 0x80016348: sw          $t8, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r24;
L_8001634C:
    // 0x8001634C: sw          $zero, 0x30($a3)
    MEM_W(0X30, ctx->r7) = 0;
L_80016350:
    // 0x80016350: beql        $t9, $zero, L_8001636C
    if (ctx->r25 == 0) {
        // 0x80016354: sw          $zero, 0x34($a3)
        MEM_W(0X34, ctx->r7) = 0;
            goto L_8001636C;
    }
    goto skip_1;
    // 0x80016354: sw          $zero, 0x34($a3)
    MEM_W(0X34, ctx->r7) = 0;
    skip_1:
    // 0x80016358: lw          $t5, 0x34($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X34);
    // 0x8001635C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80016360: b           L_8001636C
    // 0x80016364: sw          $t6, 0x34($a3)
    MEM_W(0X34, ctx->r7) = ctx->r14;
        goto L_8001636C;
    // 0x80016364: sw          $t6, 0x34($a3)
    MEM_W(0X34, ctx->r7) = ctx->r14;
    // 0x80016368: sw          $zero, 0x34($a3)
    MEM_W(0X34, ctx->r7) = 0;
L_8001636C:
    // 0x8001636C: bnel        $t2, $zero, L_8001653C
    if (ctx->r10 != 0) {
        // 0x80016370: lhu         $v0, 0x0($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X0);
            goto L_8001653C;
    }
    goto skip_2;
    // 0x80016370: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    skip_2:
    // 0x80016374: lhu         $v0, -0x64A8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X64A8);
    // 0x80016378: andi        $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 & 0X8000;
    // 0x8001637C: beq         $t7, $zero, L_80016394
    if (ctx->r15 == 0) {
        // 0x80016380: andi        $a1, $v0, 0x4000
        ctx->r5 = ctx->r2 & 0X4000;
            goto L_80016394;
    }
    // 0x80016380: andi        $a1, $v0, 0x4000
    ctx->r5 = ctx->r2 & 0X4000;
    // 0x80016384: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x80016388: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8001638C: b           L_80016398
    // 0x80016390: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
        goto L_80016398;
    // 0x80016390: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
L_80016394:
    // 0x80016394: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
L_80016398:
    // 0x80016398: beq         $a1, $zero, L_800163B0
    if (ctx->r5 == 0) {
        // 0x8001639C: andi        $t7, $v0, 0x2
        ctx->r15 = ctx->r2 & 0X2;
            goto L_800163B0;
    }
    // 0x8001639C: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x800163A0: lw          $t5, 0x4($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X4);
    // 0x800163A4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800163A8: b           L_800163B4
    // 0x800163AC: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
        goto L_800163B4;
    // 0x800163AC: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
L_800163B0:
    // 0x800163B0: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
L_800163B4:
    // 0x800163B4: beq         $t7, $zero, L_800163CC
    if (ctx->r15 == 0) {
        // 0x800163B8: andi        $t5, $v0, 0x4
        ctx->r13 = ctx->r2 & 0X4;
            goto L_800163CC;
    }
    // 0x800163B8: andi        $t5, $v0, 0x4
    ctx->r13 = ctx->r2 & 0X4;
    // 0x800163BC: lw          $t8, 0x8($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X8);
    // 0x800163C0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800163C4: b           L_800163D0
    // 0x800163C8: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
        goto L_800163D0;
    // 0x800163C8: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
L_800163CC:
    // 0x800163CC: sw          $zero, 0x8($t0)
    MEM_W(0X8, ctx->r8) = 0;
L_800163D0:
    // 0x800163D0: beq         $t5, $zero, L_800163E8
    if (ctx->r13 == 0) {
        // 0x800163D4: andi        $t8, $v0, 0x8
        ctx->r24 = ctx->r2 & 0X8;
            goto L_800163E8;
    }
    // 0x800163D4: andi        $t8, $v0, 0x8
    ctx->r24 = ctx->r2 & 0X8;
    // 0x800163D8: lw          $t6, 0xC($t0)
    ctx->r14 = MEM_W(ctx->r8, 0XC);
    // 0x800163DC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800163E0: b           L_800163EC
    // 0x800163E4: sw          $t7, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r15;
        goto L_800163EC;
    // 0x800163E4: sw          $t7, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r15;
L_800163E8:
    // 0x800163E8: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
L_800163EC:
    // 0x800163EC: beq         $t8, $zero, L_80016404
    if (ctx->r24 == 0) {
        // 0x800163F0: andi        $t6, $v0, 0x1
        ctx->r14 = ctx->r2 & 0X1;
            goto L_80016404;
    }
    // 0x800163F0: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x800163F4: lw          $t9, 0x10($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X10);
    // 0x800163F8: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x800163FC: b           L_80016408
    // 0x80016400: sw          $t5, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r13;
        goto L_80016408;
    // 0x80016400: sw          $t5, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r13;
L_80016404:
    // 0x80016404: sw          $zero, 0x10($t0)
    MEM_W(0X10, ctx->r8) = 0;
L_80016408:
    // 0x80016408: beq         $t6, $zero, L_80016420
    if (ctx->r14 == 0) {
        // 0x8001640C: andi        $t9, $v0, 0x2000
        ctx->r25 = ctx->r2 & 0X2000;
            goto L_80016420;
    }
    // 0x8001640C: andi        $t9, $v0, 0x2000
    ctx->r25 = ctx->r2 & 0X2000;
    // 0x80016410: lw          $t7, 0x14($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X14);
    // 0x80016414: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80016418: b           L_80016424
    // 0x8001641C: sw          $t8, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r24;
        goto L_80016424;
    // 0x8001641C: sw          $t8, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r24;
L_80016420:
    // 0x80016420: sw          $zero, 0x14($t0)
    MEM_W(0X14, ctx->r8) = 0;
L_80016424:
    // 0x80016424: beq         $t9, $zero, L_8001643C
    if (ctx->r25 == 0) {
        // 0x80016428: andi        $a0, $v0, 0x20
        ctx->r4 = ctx->r2 & 0X20;
            goto L_8001643C;
    }
    // 0x80016428: andi        $a0, $v0, 0x20
    ctx->r4 = ctx->r2 & 0X20;
    // 0x8001642C: lw          $t5, 0x18($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X18);
    // 0x80016430: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80016434: b           L_80016440
    // 0x80016438: sw          $t6, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r14;
        goto L_80016440;
    // 0x80016438: sw          $t6, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r14;
L_8001643C:
    // 0x8001643C: sw          $zero, 0x18($t0)
    MEM_W(0X18, ctx->r8) = 0;
L_80016440:
    // 0x80016440: beq         $a0, $zero, L_80016458
    if (ctx->r4 == 0) {
        // 0x80016444: andi        $v1, $v0, 0x10
        ctx->r3 = ctx->r2 & 0X10;
            goto L_80016458;
    }
    // 0x80016444: andi        $v1, $v0, 0x10
    ctx->r3 = ctx->r2 & 0X10;
    // 0x80016448: lw          $t7, 0x1C($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X1C);
    // 0x8001644C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80016450: b           L_8001645C
    // 0x80016454: sw          $t8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r24;
        goto L_8001645C;
    // 0x80016454: sw          $t8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r24;
L_80016458:
    // 0x80016458: sw          $zero, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = 0;
L_8001645C:
    // 0x8001645C: beq         $v1, $zero, L_80016474
    if (ctx->r3 == 0) {
        // 0x80016460: andi        $t6, $v0, 0x800
        ctx->r14 = ctx->r2 & 0X800;
            goto L_80016474;
    }
    // 0x80016460: andi        $t6, $v0, 0x800
    ctx->r14 = ctx->r2 & 0X800;
    // 0x80016464: lw          $t9, 0x20($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X20);
    // 0x80016468: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x8001646C: b           L_80016478
    // 0x80016470: sw          $t5, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r13;
        goto L_80016478;
    // 0x80016470: sw          $t5, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r13;
L_80016474:
    // 0x80016474: sw          $zero, 0x20($t0)
    MEM_W(0X20, ctx->r8) = 0;
L_80016478:
    // 0x80016478: beq         $t6, $zero, L_80016490
    if (ctx->r14 == 0) {
        // 0x8001647C: andi        $t9, $v0, 0x400
        ctx->r25 = ctx->r2 & 0X400;
            goto L_80016490;
    }
    // 0x8001647C: andi        $t9, $v0, 0x400
    ctx->r25 = ctx->r2 & 0X400;
    // 0x80016480: lw          $t7, 0x24($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X24);
    // 0x80016484: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80016488: b           L_80016494
    // 0x8001648C: sw          $t8, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r24;
        goto L_80016494;
    // 0x8001648C: sw          $t8, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r24;
L_80016490:
    // 0x80016490: sw          $zero, 0x24($t0)
    MEM_W(0X24, ctx->r8) = 0;
L_80016494:
    // 0x80016494: beq         $t9, $zero, L_800164AC
    if (ctx->r25 == 0) {
        // 0x80016498: andi        $t7, $v0, 0x200
        ctx->r15 = ctx->r2 & 0X200;
            goto L_800164AC;
    }
    // 0x80016498: andi        $t7, $v0, 0x200
    ctx->r15 = ctx->r2 & 0X200;
    // 0x8001649C: lw          $t5, 0x28($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X28);
    // 0x800164A0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800164A4: b           L_800164B0
    // 0x800164A8: sw          $t6, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->r14;
        goto L_800164B0;
    // 0x800164A8: sw          $t6, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->r14;
L_800164AC:
    // 0x800164AC: sw          $zero, 0x28($t0)
    MEM_W(0X28, ctx->r8) = 0;
L_800164B0:
    // 0x800164B0: beq         $t7, $zero, L_800164C8
    if (ctx->r15 == 0) {
        // 0x800164B4: andi        $t5, $v0, 0x100
        ctx->r13 = ctx->r2 & 0X100;
            goto L_800164C8;
    }
    // 0x800164B4: andi        $t5, $v0, 0x100
    ctx->r13 = ctx->r2 & 0X100;
    // 0x800164B8: lw          $t8, 0x2C($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X2C);
    // 0x800164BC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800164C0: b           L_800164CC
    // 0x800164C4: sw          $t9, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r25;
        goto L_800164CC;
    // 0x800164C4: sw          $t9, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r25;
L_800164C8:
    // 0x800164C8: sw          $zero, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = 0;
L_800164CC:
    // 0x800164CC: beq         $t5, $zero, L_800164E4
    if (ctx->r13 == 0) {
        // 0x800164D0: andi        $t8, $v0, 0x1000
        ctx->r24 = ctx->r2 & 0X1000;
            goto L_800164E4;
    }
    // 0x800164D0: andi        $t8, $v0, 0x1000
    ctx->r24 = ctx->r2 & 0X1000;
    // 0x800164D4: lw          $t6, 0x30($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X30);
    // 0x800164D8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800164DC: b           L_800164E8
    // 0x800164E0: sw          $t7, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r15;
        goto L_800164E8;
    // 0x800164E0: sw          $t7, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r15;
L_800164E4:
    // 0x800164E4: sw          $zero, 0x30($t0)
    MEM_W(0X30, ctx->r8) = 0;
L_800164E8:
    // 0x800164E8: beql        $t8, $zero, L_80016504
    if (ctx->r24 == 0) {
        // 0x800164EC: sw          $zero, 0x34($t0)
        MEM_W(0X34, ctx->r8) = 0;
            goto L_80016504;
    }
    goto skip_3;
    // 0x800164EC: sw          $zero, 0x34($t0)
    MEM_W(0X34, ctx->r8) = 0;
    skip_3:
    // 0x800164F0: lw          $t9, 0x34($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X34);
    // 0x800164F4: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x800164F8: b           L_80016504
    // 0x800164FC: sw          $t5, 0x34($t0)
    MEM_W(0X34, ctx->r8) = ctx->r13;
        goto L_80016504;
    // 0x800164FC: sw          $t5, 0x34($t0)
    MEM_W(0X34, ctx->r8) = ctx->r13;
    // 0x80016500: sw          $zero, 0x34($t0)
    MEM_W(0X34, ctx->r8) = 0;
L_80016504:
    // 0x80016504: beql        $a0, $zero, L_8001653C
    if (ctx->r4 == 0) {
        // 0x80016508: lhu         $v0, 0x0($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X0);
            goto L_8001653C;
    }
    goto skip_4;
    // 0x80016508: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    skip_4:
    // 0x8001650C: beq         $v1, $zero, L_80016538
    if (ctx->r3 == 0) {
        // 0x80016510: sll         $t6, $t2, 3
        ctx->r14 = S32(ctx->r10 << 3);
            goto L_80016538;
    }
    // 0x80016510: sll         $t6, $t2, 3
    ctx->r14 = S32(ctx->r10 << 3);
    // 0x80016514: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80016518: addiu       $t7, $t7, -0x6640
    ctx->r15 = ADD32(ctx->r15, -0X6640);
    // 0x8001651C: beq         $a1, $zero, L_80016534
    if (ctx->r5 == 0) {
        // 0x80016520: addu        $v0, $t6, $t7
        ctx->r2 = ADD32(ctx->r14, ctx->r15);
            goto L_80016534;
    }
    // 0x80016520: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80016524: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x80016528: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8001652C: b           L_80016538
    // 0x80016530: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
        goto L_80016538;
    // 0x80016530: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
L_80016534:
    // 0x80016534: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_80016538:
    // 0x80016538: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
L_8001653C:
    // 0x8001653C: nor         $t8, $t4, $zero
    ctx->r24 = ~(ctx->r12 | 0);
    // 0x80016540: sh          $t4, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r12;
    // 0x80016544: nor         $t6, $v0, $zero
    ctx->r14 = ~(ctx->r2 | 0);
    // 0x80016548: and         $t7, $t6, $t4
    ctx->r15 = ctx->r14 & ctx->r12;
    // 0x8001654C: and         $t9, $t8, $v0
    ctx->r25 = ctx->r24 & ctx->r2;
    // 0x80016550: sh          $t7, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r15;
    // 0x80016554: sh          $t9, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r25;
    // 0x80016558: lb          $a0, 0x2($s1)
    ctx->r4 = MEM_B(ctx->r17, 0X2);
    // 0x8001655C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80016560: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x80016564: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x80016568: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x8001656C: jal         0x80015D60
    // 0x80016570: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    func_80015D60(rdram, ctx);
        goto after_7;
    // 0x80016570: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    after_7:
    // 0x80016574: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x80016578: lb          $a0, 0x3($s1)
    ctx->r4 = MEM_B(ctx->r17, 0X3);
    // 0x8001657C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80016580: jal         0x80015D60
    // 0x80016584: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    func_80015D60(rdram, ctx);
        goto after_8;
    // 0x80016584: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    after_8:
    // 0x80016588: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x8001658C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80016590: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80016594: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80016598: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x8001659C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x800165A0: addiu       $s1, $s1, 0x6
    ctx->r17 = ADD32(ctx->r17, 0X6);
    // 0x800165A4: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x800165A8: addiu       $t0, $t0, -0x6540
    ctx->r8 = ADD32(ctx->r8, -0X6540);
    // 0x800165AC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800165B0: swc1        $f0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->f0.u32l;
    // 0x800165B4: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800165B8: bne         $t2, $at, L_80016150
    if (ctx->r10 != ctx->r1) {
        // 0x800165BC: addiu       $t3, $t3, 0x1
        ctx->r11 = ADD32(ctx->r11, 0X1);
            goto L_80016150;
    }
    // 0x800165BC: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x800165C0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800165C4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800165C8: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800165CC: sb          $t5, -0x6297($at)
    MEM_B(-0X6297, ctx->r1) = ctx->r13;
    // 0x800165D0: addiu       $a0, $a0, -0x6458
    ctx->r4 = ADD32(ctx->r4, -0X6458);
    // 0x800165D4: jal         0x8002EC20
    // 0x800165D8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    osSetThreadPri_recomp(rdram, ctx);
        goto after_9;
    // 0x800165D8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_9:
    // 0x800165DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800165E0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800165E4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800165E8: jr          $ra
    // 0x800165EC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x800165EC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_800165F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800165F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800165F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800165F8: jal         0x80016934
    // 0x800165FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80016934(rdram, ctx);
        goto after_0;
    // 0x800165FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80016600: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80016604: lbu         $t6, -0x646D($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X646D);
    // 0x80016608: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001660C: bnel        $t6, $zero, L_80016620
    if (ctx->r14 != 0) {
        // 0x80016610: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80016620;
    }
    goto skip_0;
    // 0x80016610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80016614: jal         0x80030014
    // 0x80016618: addiu       $a0, $a0, -0x64C0
    ctx->r4 = ADD32(ctx->r4, -0X64C0);
    osContGetReadData_recomp(rdram, ctx);
        goto after_1;
    // 0x80016618: addiu       $a0, $a0, -0x64C0
    ctx->r4 = ADD32(ctx->r4, -0X64C0);
    after_1:
    // 0x8001661C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80016620:
    // 0x80016620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80016624: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001662C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001662C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80016630: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80016634: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80016638: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001663C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80016640: lui         $s0, 0x8008
    ctx->r16 = S32(0X8008 << 16);
    // 0x80016644: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x80016648: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x8001664C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80016650: addiu       $s3, $s3, -0x6488
    ctx->r19 = ADD32(ctx->r19, -0X6488);
    // 0x80016654: addiu       $s2, $s2, -0x6460
    ctx->r18 = ADD32(ctx->r18, -0X6460);
    // 0x80016658: addiu       $s0, $s0, -0x64A0
    ctx->r16 = ADD32(ctx->r16, -0X64A0);
    // 0x8001665C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80016660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80016664:
    // 0x80016664: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80016668: jal         0x8002E1F0
    // 0x8001666C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8001666C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_0:
    // 0x80016670: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x80016674: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80016678: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001667C: bne         $s1, $t6, L_80016694
    if (ctx->r17 != ctx->r14) {
        // 0x80016680: nop
    
            goto L_80016694;
    }
    // 0x80016680: nop

    // 0x80016684: jal         0x800165F0
    // 0x80016688: nop

    func_800165F0(rdram, ctx);
        goto after_1;
    // 0x80016688: nop

    after_1:
    // 0x8001668C: b           L_80016664
    // 0x80016690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80016664;
    // 0x80016690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80016694:
    // 0x80016694: jal         0x8002EAD0
    // 0x80016698: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x80016698: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8001669C: b           L_80016664
    // 0x800166A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80016664;
    // 0x800166A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800166A4: nop

    // 0x800166A8: nop

    // 0x800166AC: nop

    // 0x800166B0: nop

    // 0x800166B4: nop

    // 0x800166B8: nop

    // 0x800166BC: nop

    // 0x800166C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800166C4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800166C8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800166CC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800166D0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800166D4: jr          $ra
    // 0x800166D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800166D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800166DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800166DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800166E0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800166E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800166E8: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800166EC: jal         0x80030170
    // 0x800166F0: addiu       $a0, $a0, -0x64A0
    ctx->r4 = ADD32(ctx->r4, -0X64A0);
    osEepromProbe_recomp(rdram, ctx);
        goto after_0;
    // 0x800166F0: addiu       $a0, $a0, -0x64A0
    ctx->r4 = ADD32(ctx->r4, -0X64A0);
    after_0:
    // 0x800166F4: jal         0x80016864
    // 0x800166F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80016864(rdram, ctx);
        goto after_1;
    // 0x800166F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800166FC: jal         0x80014DC4
    // 0x80016700: nop

    func_80014DC4(rdram, ctx);
        goto after_2;
    // 0x80016700: nop

    after_2:
    // 0x80016704: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80016708: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x8001670C: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x80016710: beq         $at, $zero, L_8001671C
    if (ctx->r1 == 0) {
        // 0x80016714: lui         $at, 0x8008
        ctx->r1 = S32(0X8008 << 16);
            goto L_8001671C;
    }
    // 0x80016714: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80016718: sb          $t7, -0x646D($at)
    MEM_B(-0X646D, ctx->r1) = ctx->r15;
L_8001671C:
    // 0x8001671C: jal         0x8001662C
    // 0x80016720: nop

    func_8001662C(rdram, ctx);
        goto after_3;
    // 0x80016720: nop

    after_3:
    // 0x80016724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80016728: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001672C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80016734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016734: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80016738: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001673C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80016740: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80016744: addiu       $a1, $a1, -0x64C8
    ctx->r5 = ADD32(ctx->r5, -0X64C8);
    // 0x80016748: addiu       $a0, $a0, -0x64A0
    ctx->r4 = ADD32(ctx->r4, -0X64A0);
    // 0x8001674C: jal         0x8002E070
    // 0x80016750: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80016750: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80016754: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80016758: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8001675C: addiu       $a1, $a1, -0x64C4
    ctx->r5 = ADD32(ctx->r5, -0X64C4);
    // 0x80016760: addiu       $a0, $a0, -0x6488
    ctx->r4 = ADD32(ctx->r4, -0X6488);
    // 0x80016764: jal         0x8002E070
    // 0x80016768: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x80016768: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8001676C: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80016770: addiu       $t6, $t6, -0x6090
    ctx->r14 = ADD32(ctx->r14, -0X6090);
    // 0x80016774: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80016778: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8001677C: lui         $a3, 0x8001
    ctx->r7 = S32(0X8001 << 16);
    // 0x80016780: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x80016784: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80016788: addiu       $a3, $a3, 0x66DC
    ctx->r7 = ADD32(ctx->r7, 0X66DC);
    // 0x8001678C: addiu       $a1, $a1, -0x62A8
    ctx->r5 = ADD32(ctx->r5, -0X62A8);
    // 0x80016790: addiu       $a0, $a0, -0x6458
    ctx->r4 = ADD32(ctx->r4, -0X6458);
    // 0x80016794: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80016798: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x8001679C: jal         0x8001DCB0
    // 0x800167A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DCB0(rdram, ctx);
        goto after_2;
    // 0x800167A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x800167A4: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x800167A8: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x800167AC: addiu       $a2, $a2, -0x64C8
    ctx->r6 = ADD32(ctx->r6, -0X64C8);
    // 0x800167B0: addiu       $a1, $a1, -0x64A0
    ctx->r5 = ADD32(ctx->r5, -0X64A0);
    // 0x800167B4: jal         0x8002F7E0
    // 0x800167B8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x800167B8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_3:
    // 0x800167BC: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800167C0: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x800167C4: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x800167C8: addiu       $a2, $a2, -0x6470
    ctx->r6 = ADD32(ctx->r6, -0X6470);
    // 0x800167CC: addiu       $a1, $a1, -0x6298
    ctx->r5 = ADD32(ctx->r5, -0X6298);
    // 0x800167D0: jal         0x800301E0
    // 0x800167D4: addiu       $a0, $a0, -0x64A0
    ctx->r4 = ADD32(ctx->r4, -0X64A0);
    osContInit_recomp(rdram, ctx);
        goto after_4;
    // 0x800167D4: addiu       $a0, $a0, -0x64A0
    ctx->r4 = ADD32(ctx->r4, -0X64A0);
    after_4:
    // 0x800167D8: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800167DC: jal         0x8002E510
    // 0x800167E0: addiu       $a0, $a0, -0x6458
    ctx->r4 = ADD32(ctx->r4, -0X6458);
    osStartThread_recomp(rdram, ctx);
        goto after_5;
    // 0x800167E0: addiu       $a0, $a0, -0x6458
    ctx->r4 = ADD32(ctx->r4, -0X6458);
    after_5:
    // 0x800167E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800167E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800167EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800167F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800167F4: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x800167F8: jr          $ra
    // 0x800167FC: lbu         $v0, -0x646D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X646D);
    return;
    // 0x800167FC: lbu         $v0, -0x646D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X646D);
;}
RECOMP_FUNC void func_80016800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016800: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80016804: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80016808: jr          $ra
    // 0x8001680C: lbu         $v0, -0x6294($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6294);
    return;
    // 0x8001680C: lbu         $v0, -0x6294($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6294);
;}
RECOMP_FUNC void func_80016810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016810: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80016814: lw          $t6, -0x6088($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X6088);
    // 0x80016818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001681C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80016820: bne         $t6, $at, L_80016854
    if (ctx->r14 != ctx->r1) {
        // 0x80016824: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80016854;
    }
    // 0x80016824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80016828: jal         0x80016934
    // 0x8001682C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80016934(rdram, ctx);
        goto after_0;
    // 0x8001682C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80016830: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80016834: jal         0x8002E900
    // 0x80016838: addiu       $a0, $a0, -0x6458
    ctx->r4 = ADD32(ctx->r4, -0X6458);
    osStopThread_recomp(rdram, ctx);
        goto after_1;
    // 0x80016838: addiu       $a0, $a0, -0x6458
    ctx->r4 = ADD32(ctx->r4, -0X6458);
    after_1:
    // 0x8001683C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80016840: jal         0x8002FF90
    // 0x80016844: addiu       $a0, $a0, -0x64A0
    ctx->r4 = ADD32(ctx->r4, -0X64A0);
    osContStartReadData_recomp(rdram, ctx);
        goto after_2;
    // 0x80016844: addiu       $a0, $a0, -0x64A0
    ctx->r4 = ADD32(ctx->r4, -0X64A0);
    after_2:
    // 0x80016848: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x8001684C: jal         0x8002E510
    // 0x80016850: addiu       $a0, $a0, -0x6458
    ctx->r4 = ADD32(ctx->r4, -0X6458);
    osStartThread_recomp(rdram, ctx);
        goto after_3;
    // 0x80016850: addiu       $a0, $a0, -0x6458
    ctx->r4 = ADD32(ctx->r4, -0X6458);
    after_3:
L_80016854:
    // 0x80016854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80016858: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001685C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80016864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016864: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80016868: addiu       $a3, $t6, -0x6620
    ctx->r7 = ADD32(ctx->r14, -0X6620);
    // 0x8001686C: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80016870: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80016874: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x80016878: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8001687C: addiu       $t1, $t1, -0x6540
    ctx->r9 = ADD32(ctx->r9, -0X6540);
    // 0x80016880: addiu       $a0, $a0, -0x6640
    ctx->r4 = ADD32(ctx->r4, -0X6640);
    // 0x80016884: addiu       $v1, $v1, -0x6508
    ctx->r3 = ADD32(ctx->r3, -0X6508);
    // 0x80016888: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8001688C: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
L_80016890:
    // 0x80016890: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x80016894: sh          $zero, 0x2($v1)
    MEM_H(0X2, ctx->r3) = 0;
    // 0x80016898: sh          $zero, 0x4($v1)
    MEM_H(0X4, ctx->r3) = 0;
    // 0x8001689C: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x800168A0: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x800168A4: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x800168A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800168AC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_800168B0:
    // 0x800168B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800168B4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x800168B8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800168BC: bne         $at, $zero, L_800168B0
    if (ctx->r1 != 0) {
        // 0x800168C0: sw          $zero, -0x4($a1)
        MEM_W(-0X4, ctx->r5) = 0;
            goto L_800168B0;
    }
    // 0x800168C0: sw          $zero, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = 0;
    // 0x800168C4: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x800168C8: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x800168CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800168D0: addiu       $a1, $a2, 0x8
    ctx->r5 = ADD32(ctx->r6, 0X8);
L_800168D4:
    // 0x800168D4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800168D8: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x800168DC: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x800168E0: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x800168E4: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x800168E8: bne         $v0, $t0, L_800168D4
    if (ctx->r2 != ctx->r8) {
        // 0x800168EC: sw          $zero, -0x10($a1)
        MEM_W(-0X10, ctx->r5) = 0;
            goto L_800168D4;
    }
    // 0x800168EC: sw          $zero, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = 0;
    // 0x800168F0: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800168F4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x800168F8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800168FC: bne         $a3, $t1, L_80016890
    if (ctx->r7 != ctx->r9) {
        // 0x80016900: addiu       $a2, $a2, 0x38
        ctx->r6 = ADD32(ctx->r6, 0X38);
            goto L_80016890;
    }
    // 0x80016900: addiu       $a2, $a2, 0x38
    ctx->r6 = ADD32(ctx->r6, 0X38);
    // 0x80016904: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001690C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001690C: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80016910: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80016914: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80016918: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001691C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80016920: jr          $ra
    // 0x80016924: sw          $a1, -0x6608($at)
    MEM_W(-0X6608, ctx->r1) = ctx->r5;
    return;
    // 0x80016924: sw          $a1, -0x6608($at)
    MEM_W(-0X6608, ctx->r1) = ctx->r5;
;}
RECOMP_FUNC void func_80016928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016928: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x8001692C: jr          $ra
    // 0x80016930: addiu       $v0, $v0, -0x6488
    ctx->r2 = ADD32(ctx->r2, -0X6488);
    return;
    // 0x80016930: addiu       $v0, $v0, -0x6488
    ctx->r2 = ADD32(ctx->r2, -0X6488);
;}
RECOMP_FUNC void func_80016934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80016938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001693C: bne         $a0, $zero, L_80016954
    if (ctx->r4 != 0) {
        // 0x80016940: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80016954;
    }
    // 0x80016940: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80016944: jal         0x80016A48
    // 0x80016948: nop

    func_80016A48(rdram, ctx);
        goto after_0;
    // 0x80016948: nop

    after_0:
    // 0x8001694C: b           L_8001695C
    // 0x80016950: nop

        goto L_8001695C;
    // 0x80016950: nop

L_80016954:
    // 0x80016954: jal         0x80016A04
    // 0x80016958: nop

    func_80016A04(rdram, ctx);
        goto after_1;
    // 0x80016958: nop

    after_1:
L_8001695C:
    // 0x8001695C: jal         0x800304C0
    // 0x80016960: nop

    __osDisableInt_recomp(rdram, ctx);
        goto after_2;
    // 0x80016960: nop

    after_2:
    // 0x80016964: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80016968: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8001696C: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x80016970: bne         $t7, $zero, L_80016984
    if (ctx->r15 != 0) {
        // 0x80016974: lw          $t9, 0x18($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X18);
            goto L_80016984;
    }
    // 0x80016974: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80016978: lw          $t8, -0x6088($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X6088);
    // 0x8001697C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80016980: bne         $t8, $at, L_80016990
    if (ctx->r24 != ctx->r1) {
        // 0x80016984: lui         $t0, 0x8008
        ctx->r8 = S32(0X8008 << 16);
            goto L_80016990;
    }
L_80016984:
    // 0x80016984: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x80016988: addiu       $t0, $t0, -0x6460
    ctx->r8 = ADD32(ctx->r8, -0X6460);
    // 0x8001698C: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
L_80016990:
    // 0x80016990: jal         0x80030530
    // 0x80016994: nop

    __osRestoreInt_recomp(rdram, ctx);
        goto after_3;
    // 0x80016994: nop

    after_3:
    // 0x80016998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001699C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800169A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800169A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800169A8: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x800169AC: jr          $ra
    // 0x800169B0: addiu       $v0, $v0, -0x64A8
    ctx->r2 = ADD32(ctx->r2, -0X64A8);
    return;
    // 0x800169B0: addiu       $v0, $v0, -0x64A8
    ctx->r2 = ADD32(ctx->r2, -0X64A8);
;}
RECOMP_FUNC void func_800169B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800169B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800169B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800169BC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800169C0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x800169C4: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800169C8: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x800169CC: sw          $t6, -0xA10($at)
    MEM_W(-0XA10, ctx->r1) = ctx->r14;
    // 0x800169D0: addiu       $a1, $a1, -0x6078
    ctx->r5 = ADD32(ctx->r5, -0X6078);
    // 0x800169D4: addiu       $a0, $a0, -0x6090
    ctx->r4 = ADD32(ctx->r4, -0X6090);
    // 0x800169D8: jal         0x8002E070
    // 0x800169DC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x800169DC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x800169E0: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x800169E4: addiu       $a0, $a0, -0x6090
    ctx->r4 = ADD32(ctx->r4, -0X6090);
    // 0x800169E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800169EC: jal         0x8002EAD0
    // 0x800169F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x800169F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800169F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800169F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800169FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80016A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016A04: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x80016A08: lw          $t6, -0xA10($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XA10);
    // 0x80016A0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80016A10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80016A14: bne         $t6, $zero, L_80016A24
    if (ctx->r14 != 0) {
        // 0x80016A18: nop
    
            goto L_80016A24;
    }
    // 0x80016A18: nop

    // 0x80016A1C: jal         0x800169B4
    // 0x80016A20: nop

    func_800169B4(rdram, ctx);
        goto after_0;
    // 0x80016A20: nop

    after_0:
L_80016A24:
    // 0x80016A24: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80016A28: addiu       $a0, $a0, -0x6090
    ctx->r4 = ADD32(ctx->r4, -0X6090);
    // 0x80016A2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80016A30: jal         0x8002E1F0
    // 0x80016A34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80016A34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80016A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80016A3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80016A40: jr          $ra
    return;
;}
RECOMP_FUNC void func_80016A48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016A48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80016A4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80016A50: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80016A54: addiu       $a0, $a0, -0x6090
    ctx->r4 = ADD32(ctx->r4, -0X6090);
    // 0x80016A58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80016A5C: jal         0x8002EAD0
    // 0x80016A60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80016A60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80016A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80016A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80016A6C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80016A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016A74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80016A78: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80016A7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80016A80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80016A84: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80016A88: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80016A8C: jal         0x80016068
    // 0x80016A90: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_80016068(rdram, ctx);
        goto after_0;
    // 0x80016A90: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80016A94: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80016A98: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80016A9C: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80016AA0: nop

    // 0x80016AA4: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80016AA8: jal         0x8002DCA0
    // 0x80016AAC: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_1;
    // 0x80016AAC: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_1:
    // 0x80016AB0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80016AB4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80016AB8: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80016ABC: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x80016AC0: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80016AC4: bc1tl       L_80016AE4
    if (c1cs) {
        // 0x80016AC8: lw          $v0, 0x2C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X2C);
            goto L_80016AE4;
    }
    goto skip_0;
    // 0x80016AC8: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x80016ACC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80016AD0: jal         0x80013B70
    // 0x80016AD4: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    func_80013B70(rdram, ctx);
        goto after_2;
    // 0x80016AD4: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x80016AD8: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80016ADC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80016AE0: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_80016AE4:
    // 0x80016AE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80016AE8: beql        $v0, $zero, L_80016B18
    if (ctx->r2 == 0) {
        // 0x80016AEC: lwc1        $f16, 0x18($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
            goto L_80016B18;
    }
    goto skip_1;
    // 0x80016AEC: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    skip_1:
    // 0x80016AF0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80016AF4: nop

    // 0x80016AF8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80016AFC: nop

    // 0x80016B00: bc1fl       L_80016B14
    if (!c1cs) {
        // 0x80016B04: swc1        $f2, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
            goto L_80016B14;
    }
    goto skip_2;
    // 0x80016B04: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    skip_2:
    // 0x80016B08: b           L_80016B14
    // 0x80016B0C: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
        goto L_80016B14;
    // 0x80016B0C: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80016B10: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
L_80016B14:
    // 0x80016B14: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
L_80016B18:
    // 0x80016B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80016B1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80016B20: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80016B24: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x80016B28: jr          $ra
    return;
;}
RECOMP_FUNC void func_80016B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016B30: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80016B34: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80016B38: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80016B3C: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80016B40: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80016B44: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80016B48: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x80016B4C: jr          $ra
    // 0x80016B50: lw          $v0, -0x6620($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6620);
    return;
    // 0x80016B50: lw          $v0, -0x6620($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6620);
;}
RECOMP_FUNC void func_80016B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016B54: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80016B58: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80016B5C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80016B60: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80016B64: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80016B68: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80016B6C: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x80016B70: jr          $ra
    // 0x80016B74: lw          $v0, -0x6608($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6608);
    return;
    // 0x80016B74: lw          $v0, -0x6608($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6608);
;}
RECOMP_FUNC void func_80016B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016B78: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80016B7C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80016B80: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80016B84: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80016B88: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80016B8C: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80016B90: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x80016B94: jr          $ra
    // 0x80016B98: lw          $v0, -0x65FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X65FC);
    return;
    // 0x80016B98: lw          $v0, -0x65FC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X65FC);
;}
RECOMP_FUNC void func_80016B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016B9C: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x80016BA0: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x80016BA4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80016BA8: lhu         $t8, -0x6508($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X6508);
    // 0x80016BAC: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80016BB0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80016BB4: jr          $ra
    // 0x80016BB8: and         $v0, $t8, $t6
    ctx->r2 = ctx->r24 & ctx->r14;
    return;
    // 0x80016BB8: and         $v0, $t8, $t6
    ctx->r2 = ctx->r24 & ctx->r14;
;}
RECOMP_FUNC void func_80016BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016BBC: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x80016BC0: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x80016BC4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80016BC8: lhu         $t8, -0x6504($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X6504);
    // 0x80016BCC: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80016BD0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80016BD4: jr          $ra
    // 0x80016BD8: and         $v0, $t8, $t6
    ctx->r2 = ctx->r24 & ctx->r14;
    return;
    // 0x80016BD8: and         $v0, $t8, $t6
    ctx->r2 = ctx->r24 & ctx->r14;
;}
RECOMP_FUNC void func_80016BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016BDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80016BE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80016BE4: jal         0x80030550
    // 0x80016BE8: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    osContSetCh_recomp(rdram, ctx);
        goto after_0;
    // 0x80016BE8: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    after_0:
    // 0x80016BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80016BF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80016BF4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80016C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016C00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80016C04: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80016C08: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80016C0C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80016C10: jal         0x800E9574
    // 0x80016C14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_800E9574(rdram, ctx);
        goto after_0;
    // 0x80016C14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80016C18: addiu       $s1, $zero, 0x1ED7
    ctx->r17 = ADD32(0, 0X1ED7);
    // 0x80016C1C: jal         0x800D738C
    // 0x80016C20: addiu       $a0, $zero, 0x1ED7
    ctx->r4 = ADD32(0, 0X1ED7);
    func_800D738C(rdram, ctx);
        goto after_1;
    // 0x80016C20: addiu       $a0, $zero, 0x1ED7
    ctx->r4 = ADD32(0, 0X1ED7);
    after_1:
    // 0x80016C24: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x80016C28: bne         $v0, $s0, L_80016C50
    if (ctx->r2 != ctx->r16) {
        // 0x80016C2C: nop
    
            goto L_80016C50;
    }
    // 0x80016C2C: nop

    // 0x80016C30: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_80016C34:
    // 0x80016C34: slti        $at, $s1, 0x1DDE
    ctx->r1 = SIGNED(ctx->r17) < 0X1DDE ? 1 : 0;
    // 0x80016C38: bne         $at, $zero, L_80016C50
    if (ctx->r1 != 0) {
        // 0x80016C3C: nop
    
            goto L_80016C50;
    }
    // 0x80016C3C: nop

    // 0x80016C40: jal         0x800D738C
    // 0x80016C44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D738C(rdram, ctx);
        goto after_2;
    // 0x80016C44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80016C48: beql        $v0, $s0, L_80016C34
    if (ctx->r2 == ctx->r16) {
        // 0x80016C4C: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_80016C34;
    }
    goto skip_0;
    // 0x80016C4C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    skip_0:
L_80016C50:
    // 0x80016C50: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x80016C54: addiu       $t6, $s1, -0x1DDC
    ctx->r14 = ADD32(ctx->r17, -0X1DDC);
    // 0x80016C58: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80016C5C: addiu       $s2, $s2, -0x51A8
    ctx->r18 = ADD32(ctx->r18, -0X51A8);
    // 0x80016C60: sh          $t6, -0x5188($at)
    MEM_H(-0X5188, ctx->r1) = ctx->r14;
    // 0x80016C64: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x80016C68: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x80016C6C: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x80016C70: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x80016C74: sw          $t8, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r24;
    // 0x80016C78: jal         0x80012EDC
    // 0x80016C7C: sb          $t9, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r25;
    func_80012EDC(rdram, ctx);
        goto after_3;
    // 0x80016C7C: sb          $t9, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r25;
    after_3:
    // 0x80016C80: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x80016C84: sw          $zero, 0x10($s2)
    MEM_W(0X10, ctx->r18) = 0;
    // 0x80016C88: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    // 0x80016C8C: sw          $zero, 0x18($s2)
    MEM_W(0X18, ctx->r18) = 0;
    // 0x80016C90: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80016C94: jal         0x80022084
    // 0x80016C98: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_80022084(rdram, ctx);
        goto after_4;
    // 0x80016C98: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_4:
    // 0x80016C9C: lui         $s0, 0x8008
    ctx->r16 = S32(0X8008 << 16);
    // 0x80016CA0: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x80016CA4: addiu       $s1, $s1, -0x4FC8
    ctx->r17 = ADD32(ctx->r17, -0X4FC8);
    // 0x80016CA8: addiu       $s0, $s0, -0x5E80
    ctx->r16 = ADD32(ctx->r16, -0X5E80);
    // 0x80016CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80016CB0:
    // 0x80016CB0: jal         0x800221B0
    // 0x80016CB4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800221B0(rdram, ctx);
        goto after_5;
    // 0x80016CB4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_5:
    // 0x80016CB8: addiu       $s0, $s0, 0x274
    ctx->r16 = ADD32(ctx->r16, 0X274);
    // 0x80016CBC: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x80016CC0: bnel        $at, $zero, L_80016CB0
    if (ctx->r1 != 0) {
        // 0x80016CC4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80016CB0;
    }
    goto skip_1;
    // 0x80016CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80016CC8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80016CCC: sb          $zero, -0x605E($at)
    MEM_B(-0X605E, ctx->r1) = 0;
    // 0x80016CD0: sb          $zero, -0x605D($at)
    MEM_B(-0X605D, ctx->r1) = 0;
    // 0x80016CD4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80016CD8: sh          $zero, -0x5DF2($at)
    MEM_H(-0X5DF2, ctx->r1) = 0;
    // 0x80016CDC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80016CE0: sb          $zero, -0x605C($at)
    MEM_B(-0X605C, ctx->r1) = 0;
    // 0x80016CE4: sb          $zero, -0x605B($at)
    MEM_B(-0X605B, ctx->r1) = 0;
    // 0x80016CE8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x80016CEC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80016CF0: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x80016CF4: addu        $t0, $t0, $s1
    ctx->r8 = ADD32(ctx->r8, ctx->r17);
    // 0x80016CF8: sb          $zero, -0x5DEA($at)
    MEM_B(-0X5DEA, ctx->r1) = 0;
    // 0x80016CFC: sb          $zero, -0x5DE9($at)
    MEM_B(-0X5DE9, ctx->r1) = 0;
    // 0x80016D00: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80016D04: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80016D08: subu        $t0, $t0, $s1
    ctx->r8 = SUB32(ctx->r8, ctx->r17);
    // 0x80016D0C: sh          $zero, -0x5B7E($at)
    MEM_H(-0X5B7E, ctx->r1) = 0;
    // 0x80016D10: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80016D14: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80016D18: addu        $t0, $t0, $s1
    ctx->r8 = ADD32(ctx->r8, ctx->r17);
    // 0x80016D1C: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x80016D20: addiu       $t1, $t1, -0x6060
    ctx->r9 = ADD32(ctx->r9, -0X6060);
    // 0x80016D24: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80016D28: sb          $zero, -0x5DE8($at)
    MEM_B(-0X5DE8, ctx->r1) = 0;
    // 0x80016D2C: sb          $zero, -0x5DE7($at)
    MEM_B(-0X5DE7, ctx->r1) = 0;
    // 0x80016D30: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x80016D34: sb          $zero, 0x276($v0)
    MEM_B(0X276, ctx->r2) = 0;
    // 0x80016D38: sb          $zero, 0x277($v0)
    MEM_B(0X277, ctx->r2) = 0;
    // 0x80016D3C: sh          $zero, 0x4E2($v0)
    MEM_H(0X4E2, ctx->r2) = 0;
    // 0x80016D40: sb          $zero, 0x278($v0)
    MEM_B(0X278, ctx->r2) = 0;
    // 0x80016D44: sb          $zero, 0x279($v0)
    MEM_B(0X279, ctx->r2) = 0;
    // 0x80016D48: sb          $zero, 0x4EA($v0)
    MEM_B(0X4EA, ctx->r2) = 0;
    // 0x80016D4C: sb          $zero, 0x4EB($v0)
    MEM_B(0X4EB, ctx->r2) = 0;
    // 0x80016D50: sh          $zero, 0x756($v0)
    MEM_H(0X756, ctx->r2) = 0;
    // 0x80016D54: sb          $zero, 0x4EC($v0)
    MEM_B(0X4EC, ctx->r2) = 0;
    // 0x80016D58: sb          $zero, 0x4ED($v0)
    MEM_B(0X4ED, ctx->r2) = 0;
    // 0x80016D5C: sb          $zero, 0x75E($v0)
    MEM_B(0X75E, ctx->r2) = 0;
    // 0x80016D60: sb          $zero, 0x75F($v0)
    MEM_B(0X75F, ctx->r2) = 0;
    // 0x80016D64: sh          $zero, 0x9CA($v0)
    MEM_H(0X9CA, ctx->r2) = 0;
    // 0x80016D68: sb          $zero, 0x760($v0)
    MEM_B(0X760, ctx->r2) = 0;
    // 0x80016D6C: sb          $zero, 0x761($v0)
    MEM_B(0X761, ctx->r2) = 0;
    // 0x80016D70: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x80016D74: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x80016D78: sh          $zero, 0x26E($v0)
    MEM_H(0X26E, ctx->r2) = 0;
    // 0x80016D7C: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x80016D80: jal         0x80017244
    // 0x80016D84: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    func_80017244(rdram, ctx);
        goto after_6;
    // 0x80016D84: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    after_6:
    // 0x80016D88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80016D8C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80016D90: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80016D94: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80016D98: jr          $ra
    // 0x80016D9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80016D9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80016DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016DA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80016DA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80016DA8: addiu       $a0, $a0, 0x1DDD
    ctx->r4 = ADD32(ctx->r4, 0X1DDD);
    // 0x80016DAC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80016DB0: jal         0x800D73CC
    // 0x80016DB4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_800D73CC(rdram, ctx);
        goto after_0;
    // 0x80016DB4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x80016DB8: bne         $v0, $zero, L_80016DE8
    if (ctx->r2 != 0) {
        // 0x80016DBC: lw          $t6, 0x24($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X24);
            goto L_80016DE8;
    }
    // 0x80016DBC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80016DC0: beq         $t6, $zero, L_80016DD0
    if (ctx->r14 == 0) {
        // 0x80016DC4: nop
    
            goto L_80016DD0;
    }
    // 0x80016DC4: nop

    // 0x80016DC8: jal         0x800D5B24
    // 0x80016DCC: nop

    func_800D5B24(rdram, ctx);
        goto after_1;
    // 0x80016DCC: nop

    after_1:
L_80016DD0:
    // 0x80016DD0: jal         0x800D674C
    // 0x80016DD4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800D674C(rdram, ctx);
        goto after_2;
    // 0x80016DD4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80016DD8: jal         0x800D70D0
    // 0x80016DDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800D70D0(rdram, ctx);
        goto after_3;
    // 0x80016DDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x80016DE0: jal         0x800D71F4
    // 0x80016DE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800D71F4(rdram, ctx);
        goto after_4;
    // 0x80016DE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
L_80016DE8:
    // 0x80016DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80016DEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80016DF0: jr          $ra
    return;
;}
RECOMP_FUNC void func_80016DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016DF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80016DFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80016E00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80016E04: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80016E08: addiu       $s0, $a0, 0x1DDD
    ctx->r16 = ADD32(ctx->r4, 0X1DDD);
    // 0x80016E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80016E10: jal         0x800D73CC
    // 0x80016E14: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_800D73CC(rdram, ctx);
        goto after_0;
    // 0x80016E14: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_0:
    // 0x80016E18: beq         $v0, $zero, L_80016E68
    if (ctx->r2 == 0) {
        // 0x80016E1C: lw          $a1, 0x20($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X20);
            goto L_80016E68;
    }
    // 0x80016E1C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80016E20: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80016E24: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80016E28: addiu       $v1, $v1, -0x51A8
    ctx->r3 = ADD32(ctx->r3, -0X51A8);
    // 0x80016E2C: addiu       $v0, $v0, -0x6060
    ctx->r2 = ADD32(ctx->r2, -0X6060);
    // 0x80016E30: lh          $t6, 0x26C($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X26C);
L_80016E34:
    // 0x80016E34: addiu       $v0, $v0, 0x274
    ctx->r2 = ADD32(ctx->r2, 0X274);
    // 0x80016E38: beql        $a1, $t6, L_80016E6C
    if (ctx->r5 == ctx->r14) {
        // 0x80016E3C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80016E6C;
    }
    goto skip_0;
    // 0x80016E3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80016E40: bnel        $v0, $v1, L_80016E34
    if (ctx->r2 != ctx->r3) {
        // 0x80016E44: lh          $t6, 0x26C($v0)
        ctx->r14 = MEM_H(ctx->r2, 0X26C);
            goto L_80016E34;
    }
    goto skip_1;
    // 0x80016E44: lh          $t6, 0x26C($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X26C);
    skip_1:
    // 0x80016E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80016E4C: jal         0x800D721C
    // 0x80016E50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800D721C(rdram, ctx);
        goto after_1;
    // 0x80016E50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80016E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80016E58: jal         0x800D70F8
    // 0x80016E5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800D70F8(rdram, ctx);
        goto after_2;
    // 0x80016E5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80016E60: jal         0x800D6CEC
    // 0x80016E64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800D6CEC(rdram, ctx);
        goto after_3;
    // 0x80016E64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80016E68:
    // 0x80016E68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80016E6C:
    // 0x80016E6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80016E70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80016E74: jr          $ra
    return;
;}
RECOMP_FUNC void func_80016E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016E7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80016E80: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80016E84: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x80016E88: addiu       $s1, $s1, -0x5188
    ctx->r17 = ADD32(ctx->r17, -0X5188);
    // 0x80016E8C: lhu         $t6, 0x0($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X0);
    // 0x80016E90: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80016E94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80016E98: blez        $t6, L_80016EBC
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80016E9C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80016EBC;
    }
    // 0x80016E9C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80016EA0:
    // 0x80016EA0: jal         0x80016DF8
    // 0x80016EA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80016DF8(rdram, ctx);
        goto after_0;
    // 0x80016EA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80016EA8: lhu         $t7, 0x0($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X0);
    // 0x80016EAC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80016EB0: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80016EB4: bne         $at, $zero, L_80016EA0
    if (ctx->r1 != 0) {
        // 0x80016EB8: nop
    
            goto L_80016EA0;
    }
    // 0x80016EB8: nop

L_80016EBC:
    // 0x80016EBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80016EC0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80016EC4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80016EC8: jr          $ra
    // 0x80016ECC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80016ECC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80016ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016ED0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80016ED4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80016ED8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80016EDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80016EE0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80016EE4: bne         $a1, $at, L_80016F38
    if (ctx->r5 != ctx->r1) {
        // 0x80016EE8: sw          $a1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r5;
            goto L_80016F38;
    }
    // 0x80016EE8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80016EEC: lbu         $t7, 0x43($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X43);
    // 0x80016EF0: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x80016EF4: addiu       $t9, $t9, -0x6060
    ctx->r25 = ADD32(ctx->r25, -0X6060);
    // 0x80016EF8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80016EFC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80016F00: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80016F04: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80016F08: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80016F0C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80016F10: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80016F14: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    // 0x80016F18: lh          $t0, 0x26C($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X26C);
    // 0x80016F1C: beql        $a1, $t0, L_80016F30
    if (ctx->r5 == ctx->r8) {
        // 0x80016F20: lw          $t1, 0x44($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X44);
            goto L_80016F30;
    }
    goto skip_0;
    // 0x80016F20: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x80016F24: jal         0x80024E90
    // 0x80016F28: addiu       $a0, $s0, 0x1E0
    ctx->r4 = ADD32(ctx->r16, 0X1E0);
    func_80024E90(rdram, ctx);
        goto after_0;
    // 0x80016F28: addiu       $a0, $s0, 0x1E0
    ctx->r4 = ADD32(ctx->r16, 0X1E0);
    after_0:
    // 0x80016F2C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
L_80016F30:
    // 0x80016F30: b           L_8001705C
    // 0x80016F34: sh          $t1, 0x26C($s0)
    MEM_H(0X26C, ctx->r16) = ctx->r9;
        goto L_8001705C;
    // 0x80016F34: sh          $t1, 0x26C($s0)
    MEM_H(0X26C, ctx->r16) = ctx->r9;
L_80016F38:
    // 0x80016F38: lbu         $t2, 0x43($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X43);
    // 0x80016F3C: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x80016F40: addiu       $t4, $t4, -0x6060
    ctx->r12 = ADD32(ctx->r12, -0X6060);
    // 0x80016F44: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80016F48: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80016F4C: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80016F50: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80016F54: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80016F58: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80016F5C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80016F60: addu        $s0, $t3, $t4
    ctx->r16 = ADD32(ctx->r11, ctx->r12);
    // 0x80016F64: lh          $t5, 0x26C($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X26C);
    // 0x80016F68: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80016F6C: beq         $t5, $at, L_80016F7C
    if (ctx->r13 == ctx->r1) {
        // 0x80016F70: or          $a0, $t2, $zero
        ctx->r4 = ctx->r10 | 0;
            goto L_80016F7C;
    }
    // 0x80016F70: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80016F74: jal         0x80016ED0
    // 0x80016F78: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_80016ED0(rdram, ctx);
        goto after_1;
    // 0x80016F78: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_1:
L_80016F7C:
    // 0x80016F7C: jal         0x800305B0
    // 0x80016F80: nop

    osGetTime_recomp(rdram, ctx);
        goto after_2;
    // 0x80016F80: nop

    after_2:
    // 0x80016F84: lw          $t7, 0x20C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X20C);
    // 0x80016F88: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80016F8C: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x80016F90: beql        $t7, $zero, L_80016FB0
    if (ctx->r15 == 0) {
        // 0x80016F94: lw          $t9, 0x44($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X44);
            goto L_80016FB0;
    }
    goto skip_1;
    // 0x80016F94: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    skip_1:
L_80016F98:
    // 0x80016F98: jal         0x800305B0
    // 0x80016F9C: nop

    osGetTime_recomp(rdram, ctx);
        goto after_3;
    // 0x80016F9C: nop

    after_3:
    // 0x80016FA0: lw          $t8, 0x20C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X20C);
    // 0x80016FA4: bne         $t8, $zero, L_80016F98
    if (ctx->r24 != 0) {
        // 0x80016FA8: nop
    
            goto L_80016F98;
    }
    // 0x80016FA8: nop

    // 0x80016FAC: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
L_80016FB0:
    // 0x80016FB0: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x80016FB4: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x80016FB8: sh          $t9, 0x26C($s0)
    MEM_H(0X26C, ctx->r16) = ctx->r25;
    // 0x80016FBC: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80016FC0: lh          $a0, 0x26C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X26C);
    // 0x80016FC4: jal         0x80016DA0
    // 0x80016FC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80016DA0(rdram, ctx);
        goto after_4;
    // 0x80016FC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80016FCC: lh          $a0, 0x26C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X26C);
    // 0x80016FD0: jal         0x800D674C
    // 0x80016FD4: addiu       $a0, $a0, 0x1DDD
    ctx->r4 = ADD32(ctx->r4, 0X1DDD);
    func_800D674C(rdram, ctx);
        goto after_5;
    // 0x80016FD4: addiu       $a0, $a0, 0x1DDD
    ctx->r4 = ADD32(ctx->r4, 0X1DDD);
    after_5:
    // 0x80016FD8: addiu       $a2, $s0, 0x8
    ctx->r6 = ADD32(ctx->r16, 0X8);
    // 0x80016FDC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80016FE0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x80016FE4: jal         0x80024EE0
    // 0x80016FE8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80024EE0(rdram, ctx);
        goto after_6;
    // 0x80016FE8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_6:
    // 0x80016FEC: addiu       $a0, $s0, 0x1E0
    ctx->r4 = ADD32(ctx->r16, 0X1E0);
    // 0x80016FF0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80016FF4: jal         0x80025E80
    // 0x80016FF8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_80025E80(rdram, ctx);
        goto after_7;
    // 0x80016FF8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_7:
    // 0x80016FFC: lbu         $a0, 0x43($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X43);
    // 0x80017000: jal         0x80017850
    // 0x80017004: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_80017850(rdram, ctx);
        goto after_8;
    // 0x80017004: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_8:
    // 0x80017008: lh          $a0, 0x26C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X26C);
    // 0x8001700C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80017010: beql        $a0, $at, L_80017034
    if (ctx->r4 == ctx->r1) {
        // 0x80017014: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_80017034;
    }
    goto skip_2;
    // 0x80017014: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x80017018: jal         0x800FCDB4
    // 0x8001701C: nop

    func_800FCDB4(rdram, ctx);
        goto after_9;
    // 0x8001701C: nop

    after_9:
    // 0x80017020: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80017024: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80017028: jal         0x800178C4
    // 0x8001702C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_800178C4(rdram, ctx);
        goto after_10;
    // 0x8001702C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_10:
    // 0x80017030: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
L_80017034:
    // 0x80017034: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80017038: jal         0x80017D74
    // 0x8001703C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_80017D74(rdram, ctx);
        goto after_11;
    // 0x8001703C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_11:
    // 0x80017040: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80017044: jal         0x80025ED0
    // 0x80017048: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    func_80025ED0(rdram, ctx);
        goto after_12;
    // 0x80017048: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    after_12:
    // 0x8001704C: jal         0x80025F20
    // 0x80017050: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80025F20(rdram, ctx);
        goto after_13;
    // 0x80017050: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_13:
    // 0x80017054: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80017058: sb          $t6, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r14;
L_8001705C:
    // 0x8001705C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80017060: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80017064: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80017068: jr          $ra
    return;
;}
RECOMP_FUNC void func_80017070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017070: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80017074: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80017078: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001707C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80017080: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80017084: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80017088: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001708C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80017090: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x80017094: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x80017098: lw          $v1, -0x5E68($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5E68);
    // 0x8001709C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800170A0: bnel        $v1, $zero, L_800170B4
    if (ctx->r3 != 0) {
            // 0x800170A4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    static_2_800170B4(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800170A4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x800170A8: jr          $ra
    // 0x800170AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x800170AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_800170B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800170B0: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800170B4: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x800170B8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x800170BC: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x800170C0: subu        $a0, $t0, $t9
    ctx->r4 = SUB32(ctx->r8, ctx->r25);
    // 0x800170C4: sllv        $t2, $t1, $a0
    ctx->r10 = S32(ctx->r9 << (ctx->r4 & 31));
    // 0x800170C8: srlv        $v0, $t2, $a0
    ctx->r2 = S32(U32(ctx->r10) >> (ctx->r4 & 31));
    // 0x800170CC: jr          $ra
    // 0x800170D0: nop

    return;
    // 0x800170D0: nop

;}
