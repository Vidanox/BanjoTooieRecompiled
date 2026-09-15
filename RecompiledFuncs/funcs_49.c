#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_808006EC_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808006F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808006F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808006F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808006FC: jal         0x8009E55C
    // 0x80800700: lui         $a2, 0x41E0
    ctx->r6 = S32(0X41E0 << 16);
    func_8009E55C(rdram, ctx);
        goto after_0;
    // 0x80800700: lui         $a2, 0x41E0
    ctx->r6 = S32(0X41E0 << 16);
    after_0:
    // 0x80800704: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800708: jal         0x80095774
    // 0x8080070C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    func_80095774(rdram, ctx);
        goto after_1;
    // 0x8080070C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
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
RECOMP_FUNC void func_80800720_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800720: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800724: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800728: lbu         $t6, 0x169($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X169);
    // 0x8080072C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800730: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800734: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80800738: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8080073C: jal         0x800F0E00
    // 0x80800740: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_800F0E00(rdram, ctx);
        goto after_0;
    // 0x80800740: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x80800744: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80800748: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8080074C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80800750: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800754: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80800758: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8080075C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80800760: nop

    // 0x80800764: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80800768: beql        $t9, $zero, L_808007B8
    if (ctx->r25 == 0) {
        // 0x8080076C: mfc1        $t9, $f6
        ctx->r25 = (int32_t)ctx->f6.u32l;
            goto L_808007B8;
    }
    goto skip_0;
    // 0x8080076C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x80800770: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800774: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80800778: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x8080077C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80800780: nop

    // 0x80800784: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80800788: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8080078C: nop

    // 0x80800790: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x80800794: bne         $t9, $zero, L_808007AC
    if (ctx->r25 != 0) {
        // 0x80800798: nop
    
            goto L_808007AC;
    }
    // 0x80800798: nop

    // 0x8080079C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x808007A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x808007A4: b           L_808007C4
    // 0x808007A8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_808007C4;
    // 0x808007A8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_808007AC:
    // 0x808007AC: b           L_808007C4
    // 0x808007B0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_808007C4;
    // 0x808007B0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x808007B4: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
L_808007B8:
    // 0x808007B8: nop

    // 0x808007BC: bltz        $t9, L_808007AC
    if (SIGNED(ctx->r25) < 0) {
        // 0x808007C0: nop
    
            goto L_808007AC;
    }
    // 0x808007C0: nop

L_808007C4:
    // 0x808007C4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x808007C8: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x808007CC: bne         $t0, $zero, L_808007DC
    if (ctx->r8 != 0) {
        // 0x808007D0: sb          $t9, 0x169($a0)
        MEM_B(0X169, ctx->r4) = ctx->r25;
            goto L_808007DC;
    }
    // 0x808007D0: sb          $t9, 0x169($a0)
    MEM_B(0X169, ctx->r4) = ctx->r25;
    // 0x808007D4: jal         0x800006EC
    // 0x808007D8: nop

    func_808006EC_bstnt(rdram, ctx);
        goto after_1;
    // 0x808007D8: nop

    after_1:
L_808007DC:
    // 0x808007DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808007E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808007E4: jr          $ra
    // 0x808007E8: nop

    return;
    // 0x808007E8: nop

;}
RECOMP_FUNC void func_808007EC_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808007F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808007F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808007F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808007FC: beq         $a1, $zero, L_808008C0
    if (ctx->r5 == 0) {
        // 0x80800800: sw          $a1, 0x15C($a0)
        MEM_W(0X15C, ctx->r4) = ctx->r5;
            goto L_808008C0;
    }
    // 0x80800800: sw          $a1, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = ctx->r5;
    // 0x80800804: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800808: beq         $a1, $at, L_80800824
    if (ctx->r5 == ctx->r1) {
        // 0x8080080C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800824;
    }
    // 0x8080080C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800810: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800814: beq         $a1, $at, L_8080086C
    if (ctx->r5 == ctx->r1) {
        // 0x80800818: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080086C;
    }
    // 0x80800818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080081C: b           L_8080091C
    // 0x80800820: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8080091C;
    // 0x80800820: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800824:
    // 0x80800824: addiu       $a1, $zero, 0xE6
    ctx->r5 = ADD32(0, 0XE6);
    // 0x80800828: jal         0x8008CCBC
    // 0x8080082C: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_0;
    // 0x8080082C: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_0:
    // 0x80800830: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800834: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080083C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800840: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800844: jal         0x8009FFD8
    // 0x80800848: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800848: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x8080084C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800850: jal         0x8009B9B0
    // 0x80800854: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800854: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080085C: jal         0x800000D4
    // 0x80800860: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_808000D4_bstnt(rdram, ctx);
        goto after_3;
    // 0x80800860: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_3:
    // 0x80800864: b           L_8080091C
    // 0x80800868: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8080091C;
    // 0x80800868: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8080086C:
    // 0x8080086C: jal         0x800006B4
    // 0x80800870: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_808006B4_bstnt(rdram, ctx);
        goto after_4;
    // 0x80800870: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_4:
    // 0x80800874: jal         0x800005F4
    // 0x80800878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808005F4_bstnt(rdram, ctx);
        goto after_5;
    // 0x80800878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080087C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800880: jal         0x800A17A8
    // 0x80800884: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800A17A8(rdram, ctx);
        goto after_6;
    // 0x80800884: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_6:
    // 0x80800888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080088C: jal         0x800931AC
    // 0x80800890: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800931AC(rdram, ctx);
        goto after_7;
    // 0x80800890: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x80800894: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80800898: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080089C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008A0: jal         0x8009C984
    // 0x808008A4: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
    func_8009C984(rdram, ctx);
        goto after_8;
    // 0x808008A4: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
    after_8:
    // 0x808008A8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808008AC: swc1        $f0, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f0.u32l;
    // 0x808008B0: jal         0x8009328C
    // 0x808008B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009328C(rdram, ctx);
        goto after_9;
    // 0x808008B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808008B8: b           L_8080091C
    // 0x808008BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8080091C;
    // 0x808008BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808008C0:
    // 0x808008C0: jal         0x80092BE8
    // 0x808008C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092BE8(rdram, ctx);
        goto after_10;
    // 0x808008C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808008C8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808008CC: jal         0x8009C914
    // 0x808008D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_11;
    // 0x808008D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808008D4: jal         0x8009C974
    // 0x808008D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_12;
    // 0x808008D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808008DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008E0: jal         0x800931AC
    // 0x808008E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800931AC(rdram, ctx);
        goto after_13;
    // 0x808008E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x808008E8: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x808008EC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808008F0: jal         0x800000D4
    // 0x808008F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000D4_bstnt(rdram, ctx);
        goto after_14;
    // 0x808008F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808008F8: jal         0x8009BC34
    // 0x808008FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC34(rdram, ctx);
        goto after_15;
    // 0x808008FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800904: jal         0x8009BF5C
    // 0x80800908: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_16;
    // 0x80800908: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_16:
    // 0x8080090C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800910: jal         0x8009C4CC
    // 0x80800914: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_17;
    // 0x80800914: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_17:
    // 0x80800918: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8080091C:
    // 0x8080091C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800920: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800924: jr          $ra
    // 0x80800928: nop

    return;
    // 0x80800928: nop

;}
RECOMP_FUNC void func_8080092C_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080092C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800930: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800934: jal         0x80000668
    // 0x80800938: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800668_bstnt(rdram, ctx);
        goto after_0;
    // 0x80800938: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080093C: jal         0x80000028
    // 0x80800940: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800028_bstnt(rdram, ctx);
        goto after_1;
    // 0x80800940: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800944: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800948: jal         0x800007EC
    // 0x8080094C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_808007EC_bstnt(rdram, ctx);
        goto after_2;
    // 0x8080094C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800954: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800958: jr          $ra
    // 0x8080095C: nop

    return;
    // 0x8080095C: nop

;}
RECOMP_FUNC void func_80800960_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800960: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800968: jal         0x80000694
    // 0x8080096C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800694_bstnt(rdram, ctx);
        goto after_0;
    // 0x8080096C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800970: jal         0x80000060
    // 0x80800974: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800060_bstnt(rdram, ctx);
        goto after_1;
    // 0x80800974: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800978: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080097C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800980: jal         0x800007EC
    // 0x80800984: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    func_808007EC_bstnt(rdram, ctx);
        goto after_2;
    // 0x80800984: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    after_2:
    // 0x80800988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080098C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800990: jr          $ra
    // 0x80800994: nop

    return;
    // 0x80800994: nop

;}
RECOMP_FUNC void func_80800998_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800998: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080099C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808009A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808009A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808009A8: jal         0x800D8FF8
    // 0x808009AC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x808009AC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808009B0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x808009B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009B8: jal         0x8009D3A8
    // 0x808009BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_1;
    // 0x808009BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x808009C0: jal         0x8008E35C
    // 0x808009C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_2;
    // 0x808009C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808009C8: beq         $v0, $zero, L_808009E4
    if (ctx->r2 == 0) {
        // 0x808009CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009E4;
    }
    // 0x808009CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009D0: jal         0x8009BCB4
    // 0x808009D4: lui         $a1, 0xC120
    ctx->r5 = S32(0XC120 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_3;
    // 0x808009D4: lui         $a1, 0xC120
    ctx->r5 = S32(0XC120 << 16);
    after_3:
    // 0x808009D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009DC: jal         0x8009BCC4
    // 0x808009E0: lui         $a1, 0xC1A0
    ctx->r5 = S32(0XC1A0 << 16);
    func_8009BCC4(rdram, ctx);
        goto after_4;
    // 0x808009E0: lui         $a1, 0xC1A0
    ctx->r5 = S32(0XC1A0 << 16);
    after_4:
L_808009E4:
    // 0x808009E4: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x808009E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808009EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009F0: beq         $v0, $at, L_80800A0C
    if (ctx->r2 == ctx->r1) {
        // 0x808009F4: lui         $a1, 0x3E22
        ctx->r5 = S32(0X3E22 << 16);
            goto L_80800A0C;
    }
    // 0x808009F4: lui         $a1, 0x3E22
    ctx->r5 = S32(0X3E22 << 16);
    // 0x808009F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808009FC: beq         $v0, $at, L_80800A6C
    if (ctx->r2 == ctx->r1) {
        // 0x80800A00: nop
    
            goto L_80800A6C;
    }
    // 0x80800A00: nop

    // 0x80800A04: b           L_80800B1C
    // 0x80800A08: nop

        goto L_80800B1C;
    // 0x80800A08: nop

L_80800A0C:
    // 0x80800A0C: jal         0x8008CB10
    // 0x80800A10: ori         $a1, $a1, 0x8241
    ctx->r5 = ctx->r5 | 0X8241;
    func_8008CB10(rdram, ctx);
        goto after_5;
    // 0x80800A10: ori         $a1, $a1, 0x8241
    ctx->r5 = ctx->r5 | 0X8241;
    after_5:
    // 0x80800A14: beql        $v0, $zero, L_80800A28
    if (ctx->r2 == 0) {
        // 0x80800A18: lui         $a1, 0x3E8D
        ctx->r5 = S32(0X3E8D << 16);
            goto L_80800A28;
    }
    goto skip_0;
    // 0x80800A18: lui         $a1, 0x3E8D
    ctx->r5 = S32(0X3E8D << 16);
    skip_0:
    // 0x80800A1C: jal         0x80000068
    // 0x80800A20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800068_bstnt(rdram, ctx);
        goto after_6;
    // 0x80800A20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800A24: lui         $a1, 0x3E8D
    ctx->r5 = S32(0X3E8D << 16);
L_80800A28:
    // 0x80800A28: ori         $a1, $a1, 0xD2F2
    ctx->r5 = ctx->r5 | 0XD2F2;
    // 0x80800A2C: jal         0x8008CB10
    // 0x80800A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_7;
    // 0x80800A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800A34: beql        $v0, $zero, L_80800A48
    if (ctx->r2 == 0) {
        // 0x80800A38: lui         $a1, 0x3EDE
        ctx->r5 = S32(0X3EDE << 16);
            goto L_80800A48;
    }
    goto skip_1;
    // 0x80800A38: lui         $a1, 0x3EDE
    ctx->r5 = S32(0X3EDE << 16);
    skip_1:
    // 0x80800A3C: jal         0x80000000
    // 0x80800A40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bstnt(rdram, ctx);
        goto after_8;
    // 0x80800A40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800A44: lui         $a1, 0x3EDE
    ctx->r5 = S32(0X3EDE << 16);
L_80800A48:
    // 0x80800A48: ori         $a1, $a1, 0x353F
    ctx->r5 = ctx->r5 | 0X353F;
    // 0x80800A4C: jal         0x8008CB10
    // 0x80800A50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_9;
    // 0x80800A50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800A54: beq         $v0, $zero, L_80800B1C
    if (ctx->r2 == 0) {
        // 0x80800A58: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800B1C;
    }
    // 0x80800A58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A5C: jal         0x800007EC
    // 0x80800A60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_808007EC_bstnt(rdram, ctx);
        goto after_10;
    // 0x80800A60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x80800A64: b           L_80800B1C
    // 0x80800A68: nop

        goto L_80800B1C;
    // 0x80800A68: nop

L_80800A6C:
    // 0x80800A6C: jal         0x8000009C
    // 0x80800A70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080009C_bstnt(rdram, ctx);
        goto after_11;
    // 0x80800A70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800A74: lwc1        $f4, 0x16C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800A78: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80800A7C: lwc1        $f10, 0x170($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X170);
    // 0x80800A80: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80800A84: jal         0x800136E4
    // 0x80800A88: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    func_800136E4(rdram, ctx);
        goto after_12;
    // 0x80800A88: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    after_12:
    // 0x80800A8C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800A90: swc1        $f0, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f0.u32l;
    // 0x80800A94: jal         0x8009328C
    // 0x80800A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009328C(rdram, ctx);
        goto after_13;
    // 0x80800A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800A9C: jal         0x8008CAC8
    // 0x80800AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_14;
    // 0x80800AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800AA4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(157, 0X2204) << 16);
    // 0x80800AA8: lwc1        $f16, 0x2204($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(157, 0X2204));
    // 0x80800AAC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(157, 0X2208) << 16);
    // 0x80800AB0: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80800AB4: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80800AB8: nop

    // 0x80800ABC: bc1fl       L_80800AE4
    if (!c1cs) {
        // 0x80800AC0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800AE4;
    }
    goto skip_2;
    // 0x80800AC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80800AC4: lwc1        $f18, 0x2208($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(157, 0X2208));
    // 0x80800AC8: lwc1        $f10, 0x16C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800ACC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80800AD0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80800AD4: jal         0x800F0E00
    // 0x80800AD8: sub.s       $f14, $f10, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f6.fl;
    func_800F0E00(rdram, ctx);
        goto after_15;
    // 0x80800AD8: sub.s       $f14, $f10, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f6.fl;
    after_15:
    // 0x80800ADC: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x80800AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800AE4:
    // 0x80800AE4: jal         0x8008CB10
    // 0x80800AE8: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8008CB10(rdram, ctx);
        goto after_16;
    // 0x80800AE8: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_16:
    // 0x80800AEC: beql        $v0, $zero, L_80800B00
    if (ctx->r2 == 0) {
        // 0x80800AF0: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_80800B00;
    }
    goto skip_3;
    // 0x80800AF0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_3:
    // 0x80800AF4: jal         0x80000554
    // 0x80800AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800554_bstnt(rdram, ctx);
        goto after_17;
    // 0x80800AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800AFC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_80800B00:
    // 0x80800B00: lwc1        $f16, 0x16C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800B04: addiu       $t6, $zero, 0x10C
    ctx->r14 = ADD32(0, 0X10C);
    // 0x80800B08: c.eq.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl == ctx->f16.fl;
    // 0x80800B0C: nop

    // 0x80800B10: bc1f        L_80800B1C
    if (!c1cs) {
        // 0x80800B14: nop
    
            goto L_80800B1C;
    }
    // 0x80800B14: nop

    // 0x80800B18: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800B1C:
    // 0x80800B1C: jal         0x80000720
    // 0x80800B20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800720_bstnt(rdram, ctx);
        goto after_18;
    // 0x80800B20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800B24: jal         0x80000F94
    // 0x80800B28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bstnt_entrypoint_4(rdram, ctx);
        goto after_19;
    // 0x80800B28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B30: jal         0x8009E5C8
    // 0x80800B34: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_20;
    // 0x80800B34: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_20:
    // 0x80800B38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800B3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800B40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800B44: jr          $ra
    // 0x80800B48: nop

    return;
    // 0x80800B48: nop

;}
RECOMP_FUNC void bstnt_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B4C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800B50: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(157, 0X23F8) << 16);
    // 0x80800B54: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800B58: jr          $ra
    // 0x80800B5C: lw          $v0, 0x23F8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X23F8));
    return;
    // 0x80800B5C: lw          $v0, 0x23F8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X23F8));
;}
RECOMP_FUNC void func_80800B60_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B60: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800B64: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800B68: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800B6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800B70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800B74: beq         $a1, $at, L_80800B90
    if (ctx->r5 == ctx->r1) {
        // 0x80800B78: sw          $a1, 0x15C($a0)
        MEM_W(0X15C, ctx->r4) = ctx->r5;
            goto L_80800B90;
    }
    // 0x80800B78: sw          $a1, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = ctx->r5;
    // 0x80800B7C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800B80: beq         $a1, $at, L_80800C30
    if (ctx->r5 == ctx->r1) {
        // 0x80800B84: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800C30;
    }
    // 0x80800B84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B88: b           L_80800CA0
    // 0x80800B8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800CA0;
    // 0x80800B8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800B90:
    // 0x80800B90: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80800B94: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B9C: jal         0x8008CCBC
    // 0x80800BA0: addiu       $a1, $zero, 0xE2
    ctx->r5 = ADD32(0, 0XE2);
    func_8008CCBC(rdram, ctx);
        goto after_0;
    // 0x80800BA0: addiu       $a1, $zero, 0xE2
    ctx->r5 = ADD32(0, 0XE2);
    after_0:
    // 0x80800BA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800BAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800BB0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x80800BB4: jal         0x8009FFD8
    // 0x80800BB8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800BB8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80800BBC: lw          $a0, 0x164($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X164);
    // 0x80800BC0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80800BC4: jal         0x8010114C
    // 0x80800BC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8010114C(rdram, ctx);
        goto after_2;
    // 0x80800BC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80800BCC: jal         0x80101038
    // 0x80800BD0: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_80101038(rdram, ctx);
        goto after_3;
    // 0x80800BD0: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x80800BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BD8: jal         0x8009C128
    // 0x80800BDC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8009C128(rdram, ctx);
        goto after_4;
    // 0x80800BDC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_4:
    // 0x80800BE0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80800BE4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80800BE8: jal         0x800F1E6C
    // 0x80800BEC: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    func_800F1E6C(rdram, ctx);
        goto after_5;
    // 0x80800BEC: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_5:
    // 0x80800BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BF4: jal         0x8009C914
    // 0x80800BF8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_8009C914(rdram, ctx);
        goto after_6;
    // 0x80800BF8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_6:
    // 0x80800BFC: jal         0x80084DB8
    // 0x80800C00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovegoto_entrypoint_0(rdram, ctx);
        goto after_7;
    // 0x80800C00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800C04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C08: jal         0x80084E18
    // 0x80800C0C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    _bamovegoto_entrypoint_12(rdram, ctx);
        goto after_8;
    // 0x80800C0C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_8:
    // 0x80800C10: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x80800C14: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80800C18: jal         0x80084DF0
    // 0x80800C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovegoto_entrypoint_7(rdram, ctx);
        goto after_9;
    // 0x80800C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800C20: jal         0x80084E20
    // 0x80800C24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovegoto_entrypoint_13(rdram, ctx);
        goto after_10;
    // 0x80800C24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800C28: b           L_80800CA0
    // 0x80800C2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800CA0;
    // 0x80800C2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800C30:
    // 0x80800C30: lui         $a2, 0x4059
    ctx->r6 = S32(0X4059 << 16);
    // 0x80800C34: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800C38: jal         0x8008CCBC
    // 0x80800C3C: addiu       $a1, $zero, 0xE3
    ctx->r5 = ADD32(0, 0XE3);
    func_8008CCBC(rdram, ctx);
        goto after_11;
    // 0x80800C3C: addiu       $a1, $zero, 0xE3
    ctx->r5 = ADD32(0, 0XE3);
    after_11:
    // 0x80800C40: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800C44: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800C50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800C54: jal         0x8009FFD8
    // 0x80800C58: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_12;
    // 0x80800C58: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_12:
    // 0x80800C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C60: jal         0x8009B9B0
    // 0x80800C64: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_13;
    // 0x80800C64: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_13:
    // 0x80800C68: lw          $a0, 0x164($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X164);
    // 0x80800C6C: jal         0x8008F880
    // 0x80800C70: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8008F880(rdram, ctx);
        goto after_14;
    // 0x80800C70: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_14:
    // 0x80800C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C78: jal         0x8009C128
    // 0x80800C7C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8009C128(rdram, ctx);
        goto after_15;
    // 0x80800C7C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_15:
    // 0x80800C80: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80800C84: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80800C88: jal         0x800F1E6C
    // 0x80800C8C: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    func_800F1E6C(rdram, ctx);
        goto after_16;
    // 0x80800C8C: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_16:
    // 0x80800C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C94: jal         0x8009C914
    // 0x80800C98: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_8009C914(rdram, ctx);
        goto after_17;
    // 0x80800C98: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_17:
    // 0x80800C9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800CA0:
    // 0x80800CA0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800CA4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80800CA8: jr          $ra
    // 0x80800CAC: nop

    return;
    // 0x80800CAC: nop

;}
RECOMP_FUNC void func_80800CB0_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800CB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800CB8: jal         0x80000028
    // 0x80800CBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800028_bstnt(rdram, ctx);
        goto after_0;
    // 0x80800CBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800CC0: jal         0x800951B4
    // 0x80800CC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800951B4(rdram, ctx);
        goto after_1;
    // 0x80800CC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800CC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800CCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800CD0: jr          $ra
    // 0x80800CD4: nop

    return;
    // 0x80800CD4: nop

;}
RECOMP_FUNC void func_80800CD8_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800CDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800CE0: jal         0x80000060
    // 0x80800CE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800060_bstnt(rdram, ctx);
        goto after_0;
    // 0x80800CE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800CE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800CEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800CF0: jal         0x80000B60
    // 0x80800CF4: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    func_80800B60_bstnt(rdram, ctx);
        goto after_1;
    // 0x80800CF4: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    after_1:
    // 0x80800CF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800CFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D00: jr          $ra
    // 0x80800D04: nop

    return;
    // 0x80800D04: nop

;}
RECOMP_FUNC void func_80800D08_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800D0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800D10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800D14: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80800D18: lw          $v0, 0x15C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X15C);
    // 0x80800D1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800D20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800D24: beq         $v0, $at, L_80800D3C
    if (ctx->r2 == ctx->r1) {
        // 0x80800D28: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800D3C;
    }
    // 0x80800D28: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800D2C: beq         $v0, $at, L_80800D5C
    if (ctx->r2 == ctx->r1) {
        // 0x80800D30: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800D5C;
    }
    // 0x80800D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D34: b           L_80800E18
    // 0x80800D38: nop

        goto L_80800E18;
    // 0x80800D38: nop

L_80800D3C:
    // 0x80800D3C: jal         0x80084DD8
    // 0x80800D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovegoto_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80800D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80800D44: beq         $v0, $zero, L_80800E18
    if (ctx->r2 == 0) {
        // 0x80800D48: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E18;
    }
    // 0x80800D48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D4C: jal         0x80000B60
    // 0x80800D50: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800B60_bstnt(rdram, ctx);
        goto after_1;
    // 0x80800D50: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80800D54: b           L_80800E18
    // 0x80800D58: nop

        goto L_80800E18;
    // 0x80800D58: nop

L_80800D5C:
    // 0x80800D5C: lui         $a1, 0x3DF2
    ctx->r5 = S32(0X3DF2 << 16);
    // 0x80800D60: jal         0x8008CB10
    // 0x80800D64: ori         $a1, $a1, 0x4745
    ctx->r5 = ctx->r5 | 0X4745;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x80800D64: ori         $a1, $a1, 0x4745
    ctx->r5 = ctx->r5 | 0X4745;
    after_2:
    // 0x80800D68: beql        $v0, $zero, L_80800D7C
    if (ctx->r2 == 0) {
        // 0x80800D6C: lui         $a1, 0x3F17
        ctx->r5 = S32(0X3F17 << 16);
            goto L_80800D7C;
    }
    goto skip_0;
    // 0x80800D6C: lui         $a1, 0x3F17
    ctx->r5 = S32(0X3F17 << 16);
    skip_0:
    // 0x80800D70: jal         0x80000068
    // 0x80800D74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800068_bstnt(rdram, ctx);
        goto after_3;
    // 0x80800D74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800D78: lui         $a1, 0x3F17
    ctx->r5 = S32(0X3F17 << 16);
L_80800D7C:
    // 0x80800D7C: ori         $a1, $a1, 0x8D50
    ctx->r5 = ctx->r5 | 0X8D50;
    // 0x80800D80: jal         0x8008CB10
    // 0x80800D84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_4;
    // 0x80800D84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800D88: beql        $v0, $zero, L_80800D9C
    if (ctx->r2 == 0) {
        // 0x80800D8C: lui         $a1, 0x3F26
        ctx->r5 = S32(0X3F26 << 16);
            goto L_80800D9C;
    }
    goto skip_1;
    // 0x80800D8C: lui         $a1, 0x3F26
    ctx->r5 = S32(0X3F26 << 16);
    skip_1:
    // 0x80800D90: jal         0x80000000
    // 0x80800D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bstnt(rdram, ctx);
        goto after_5;
    // 0x80800D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800D98: lui         $a1, 0x3F26
    ctx->r5 = S32(0X3F26 << 16);
L_80800D9C:
    // 0x80800D9C: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80800DA0: jal         0x8008CB10
    // 0x80800DA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_6;
    // 0x80800DA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800DA8: beql        $v0, $zero, L_80800DBC
    if (ctx->r2 == 0) {
        // 0x80800DAC: lui         $a1, 0x3F2A
        ctx->r5 = S32(0X3F2A << 16);
            goto L_80800DBC;
    }
    goto skip_2;
    // 0x80800DAC: lui         $a1, 0x3F2A
    ctx->r5 = S32(0X3F2A << 16);
    skip_2:
    // 0x80800DB0: jal         0x8009514C
    // 0x80800DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009514C(rdram, ctx);
        goto after_7;
    // 0x80800DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800DB8: lui         $a1, 0x3F2A
    ctx->r5 = S32(0X3F2A << 16);
L_80800DBC:
    // 0x80800DBC: ori         $a1, $a1, 0x3D71
    ctx->r5 = ctx->r5 | 0X3D71;
    // 0x80800DC0: jal         0x8008CB10
    // 0x80800DC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_8;
    // 0x80800DC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800DC8: beq         $v0, $zero, L_80800DE4
    if (ctx->r2 == 0) {
        // 0x80800DCC: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_80800DE4;
    }
    // 0x80800DCC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80800DD0: lw          $a0, 0x164($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X164);
    // 0x80800DD4: jal         0x8010114C
    // 0x80800DD8: lw          $a2, 0x184($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X184);
    func_8010114C(rdram, ctx);
        goto after_9;
    // 0x80800DD8: lw          $a2, 0x184($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X184);
    after_9:
    // 0x80800DDC: jal         0x8000009C
    // 0x80800DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080009C_bstnt(rdram, ctx);
        goto after_10;
    // 0x80800DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
L_80800DE4:
    // 0x80800DE4: lui         $a1, 0x3F59
    ctx->r5 = S32(0X3F59 << 16);
    // 0x80800DE8: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800DEC: jal         0x8008CB10
    // 0x80800DF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_11;
    // 0x80800DF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800DF4: beq         $v0, $zero, L_80800E04
    if (ctx->r2 == 0) {
        // 0x80800DF8: nop
    
            goto L_80800E04;
    }
    // 0x80800DF8: nop

    // 0x80800DFC: jal         0x800951B4
    // 0x80800E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_12;
    // 0x80800E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
L_80800E04:
    // 0x80800E04: jal         0x8008CAEC
    // 0x80800E08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_13;
    // 0x80800E08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800E0C: beq         $v0, $zero, L_80800E18
    if (ctx->r2 == 0) {
        // 0x80800E10: addiu       $t6, $zero, 0x10C
        ctx->r14 = ADD32(0, 0X10C);
            goto L_80800E18;
    }
    // 0x80800E10: addiu       $t6, $zero, 0x10C
    ctx->r14 = ADD32(0, 0X10C);
    // 0x80800E14: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800E18:
    // 0x80800E18: jal         0x80000F94
    // 0x80800E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bstnt_entrypoint_4(rdram, ctx);
        goto after_14;
    // 0x80800E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E24: jal         0x8009E5C8
    // 0x80800E28: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_15;
    // 0x80800E28: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_15:
    // 0x80800E2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800E30: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800E34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800E38: jr          $ra
    // 0x80800E3C: nop

    return;
    // 0x80800E3C: nop

;}
RECOMP_FUNC void bstnt_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E40: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800E44: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(157, 0X2408) << 16);
    // 0x80800E48: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800E4C: jr          $ra
    // 0x80800E50: lw          $v0, 0x2408($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X2408));
    return;
    // 0x80800E50: lw          $v0, 0x2408($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X2408));
;}
RECOMP_FUNC void bstnt_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800E58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800E5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800E60: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800E64: jal         0x8009E74C
    // 0x80800E68: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x80800E68: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_0:
    // 0x80800E6C: bne         $v0, $zero, L_80800EB8
    if (ctx->r2 != 0) {
        // 0x80800E70: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800EB8;
    }
    // 0x80800E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800E78: jal         0x800947EC
    // 0x80800E7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_1;
    // 0x80800E7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80800E80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E84: jal         0x80092864
    // 0x80800E88: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_80092864(rdram, ctx);
        goto after_2;
    // 0x80800E88: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_2:
    // 0x80800E8C: jal         0x8009C000
    // 0x80800E90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C000(rdram, ctx);
        goto after_3;
    // 0x80800E90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800E94: jal         0x8009C570
    // 0x80800E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C570(rdram, ctx);
        goto after_4;
    // 0x80800E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800E9C: jal         0x8009EF60
    // 0x80800EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF60(rdram, ctx);
        goto after_5;
    // 0x80800EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800EA4: jal         0x80095A40
    // 0x80800EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095A40(rdram, ctx);
        goto after_6;
    // 0x80800EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800EAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EB0: jal         0x80092744
    // 0x80800EB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80092744(rdram, ctx);
        goto after_7;
    // 0x80800EB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
L_80800EB8:
    // 0x80800EB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800EBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800EC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800EC4: jr          $ra
    // 0x80800EC8: nop

    return;
    // 0x80800EC8: nop

;}
RECOMP_FUNC void bstnt_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800ECC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800ED0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800ED4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800ED8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800EDC: jal         0x8009E77C
    // 0x80800EE0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_8009E77C(rdram, ctx);
        goto after_0;
    // 0x80800EE0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_0:
    // 0x80800EE4: bne         $v0, $zero, L_80800F80
    if (ctx->r2 != 0) {
        // 0x80800EE8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800F80;
    }
    // 0x80800EE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EEC: sw          $zero, 0x164($s0)
    MEM_W(0X164, ctx->r16) = 0;
    // 0x80800EF0: sb          $zero, 0x168($s0)
    MEM_B(0X168, ctx->r16) = 0;
    // 0x80800EF4: sb          $zero, 0x16A($s0)
    MEM_B(0X16A, ctx->r16) = 0;
    // 0x80800EF8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800EFC: jal         0x80085338
    // 0x80800F00: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    _batimer_set(rdram, ctx);
        goto after_1;
    // 0x80800F00: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_1:
    // 0x80800F04: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x80800F08: ori         $a1, $a1, 0x6600
    ctx->r5 = ctx->r5 | 0X6600;
    // 0x80800F0C: jal         0x80092864
    // 0x80800F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092864(rdram, ctx);
        goto after_2;
    // 0x80800F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F18: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800F1C: jal         0x8009BFE4
    // 0x80800F20: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_3;
    // 0x80800F20: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_3:
    // 0x80800F24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F28: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800F2C: jal         0x8009C554
    // 0x80800F30: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009C554(rdram, ctx);
        goto after_4;
    // 0x80800F30: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_4:
    // 0x80800F34: jal         0x8009EFA8
    // 0x80800F38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EFA8(rdram, ctx);
        goto after_5;
    // 0x80800F38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800F3C: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x80800F40: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F48: jal         0x8009F1C8
    // 0x80800F4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_6;
    // 0x80800F4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80800F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800F58: jal         0x8009F1C8
    // 0x80800F5C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_7;
    // 0x80800F5C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_7:
    // 0x80800F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F64: lui         $a1, 0x42AA
    ctx->r5 = S32(0X42AA << 16);
    // 0x80800F68: jal         0x800959C8
    // 0x80800F6C: lui         $a2, 0x4218
    ctx->r6 = S32(0X4218 << 16);
    func_800959C8(rdram, ctx);
        goto after_8;
    // 0x80800F6C: lui         $a2, 0x4218
    ctx->r6 = S32(0X4218 << 16);
    after_8:
    // 0x80800F70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800F78: jal         0x800947EC
    // 0x80800F7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_9;
    // 0x80800F7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
L_80800F80:
    // 0x80800F80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800F84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800F88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800F8C: jr          $ra
    // 0x80800F90: nop

    return;
    // 0x80800F90: nop

;}
RECOMP_FUNC void bstnt_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800F98: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800F9C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800FA0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800FA4: jal         0x800852F0
    // 0x80800FA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _batimer_decrement(rdram, ctx);
        goto after_0;
    // 0x80800FA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80800FAC: beq         $v0, $zero, L_80800FD0
    if (ctx->r2 == 0) {
        // 0x80800FB0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800FD0;
    }
    // 0x80800FB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FB8: jal         0x80092744
    // 0x80800FBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80092744(rdram, ctx);
        goto after_1;
    // 0x80800FBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800FC0: jal         0x80084F58
    // 0x80800FC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bapulse_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80800FC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800FC8: b           L_80801044
    // 0x80800FCC: sb          $zero, 0x168($s0)
    MEM_B(0X168, ctx->r16) = 0;
        goto L_80801044;
    // 0x80800FCC: sb          $zero, 0x168($s0)
    MEM_B(0X168, ctx->r16) = 0;
L_80800FD0:
    // 0x80800FD0: jal         0x80085300
    // 0x80800FD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _batimer_get(rdram, ctx);
        goto after_3;
    // 0x80800FD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80800FD8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800FDC: nop

    // 0x80800FE0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800FE4: nop

    // 0x80800FE8: bc1fl       L_80801044
    if (!c1cs) {
        // 0x80800FEC: sb          $zero, 0x168($s0)
        MEM_B(0X168, ctx->r16) = 0;
            goto L_80801044;
    }
    goto skip_0;
    // 0x80800FEC: sb          $zero, 0x168($s0)
    MEM_B(0X168, ctx->r16) = 0;
    skip_0:
    // 0x80800FF0: jal         0x80084F68
    // 0x80800FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bapulse_entrypoint_4(rdram, ctx);
        goto after_4;
    // 0x80800FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800FF8: jal         0x80084F50
    // 0x80800FFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bapulse_entrypoint_1(rdram, ctx);
        goto after_5;
    // 0x80800FFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801000: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80801004: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80801008: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080100C: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80801010: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80801014: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801018: jal         0x800F12D4
    // 0x8080101C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F12D4(rdram, ctx);
        goto after_6;
    // 0x8080101C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x80801020: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80801024: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80801028: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8080102C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801030: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80801034: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80801038: jal         0x80092750
    // 0x8080103C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    func_80092750(rdram, ctx);
        goto after_7;
    // 0x8080103C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    after_7:
    // 0x80801040: sb          $zero, 0x168($s0)
    MEM_B(0X168, ctx->r16) = 0;
L_80801044:
    // 0x80801044: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801048: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080104C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801050: jr          $ra
    // 0x80801054: nop

    return;
    // 0x80801054: nop

;}
RECOMP_FUNC void func_80801058_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801058: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080105C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801060: jal         0x80085240
    // 0x80801064: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _basudie_entrypoint_8(rdram, ctx);
        goto after_0;
    // 0x80801064: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801068: jal         0x80000E54
    // 0x8080106C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstnt_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x8080106C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801074: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801078: jr          $ra
    // 0x8080107C: nop

    return;
    // 0x8080107C: nop

;}
RECOMP_FUNC void func_80801080_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801080: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80801084: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801088: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8080108C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801090: jal         0x80000ECC
    // 0x80801094: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    bstnt_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80801094: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    after_0:
    // 0x80801098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080109C: jal         0x80085248
    // 0x808010A0: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    _basudie_entrypoint_9(rdram, ctx);
        goto after_1;
    // 0x808010A0: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_1:
    // 0x808010A4: jal         0x80000554
    // 0x808010A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800554_bstnt(rdram, ctx);
        goto after_2;
    // 0x808010A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808010AC: addiu       $s1, $sp, 0x2C
    ctx->r17 = ADD32(ctx->r29, 0X2C);
    // 0x808010B0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x808010B4: jal         0x8009C128
    // 0x808010B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C128(rdram, ctx);
        goto after_3;
    // 0x808010B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808010BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010C0: jal         0x800004F8
    // 0x808010C4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_808004F8_bstnt(rdram, ctx);
        goto after_4;
    // 0x808010C4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x808010C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010CC: jal         0x8000030C
    // 0x808010D0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8080030C_bstnt(rdram, ctx);
        goto after_5;
    // 0x808010D0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x808010D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010D8: jal         0x800002AC
    // 0x808010DC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_808002AC_bstnt(rdram, ctx);
        goto after_6;
    // 0x808010DC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x808010E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010E4: addiu       $a1, $zero, 0x693
    ctx->r5 = ADD32(0, 0X693);
    // 0x808010E8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808010EC: jal         0x8009DB04
    // 0x808010F0: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DB04(rdram, ctx);
        goto after_7;
    // 0x808010F0: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_7:
    // 0x808010F4: jal         0x8009D9D4
    // 0x808010F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D9D4(rdram, ctx);
        goto after_8;
    // 0x808010F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808010FC: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(157, 0X2418) << 16);
    // 0x80801100: addiu       $t6, $t6, 0x2418
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(157, 0X2418));
    // 0x80801104: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801108: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080110C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80801110: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801114: jal         0x800BBCB8
    // 0x80801118: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800BBCB8(rdram, ctx);
        goto after_9;
    // 0x80801118: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
    // 0x8080111C: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(157, 0X246C) << 16);
    // 0x80801120: addiu       $t7, $t7, 0x246C
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(157, 0X246C));
    // 0x80801124: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80801128: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080112C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80801130: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801134: jal         0x800BBCB8
    // 0x80801138: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800BBCB8(rdram, ctx);
        goto after_10;
    // 0x80801138: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x8080113C: lui         $t8, 0x0
    ctx->r24 = S32(RELOC_HI16(157, 0X24B8) << 16);
    // 0x80801140: addiu       $t8, $t8, 0x24B8
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(157, 0X24B8));
    // 0x80801144: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80801148: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080114C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80801150: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801154: jal         0x800BBCB8
    // 0x80801158: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800BBCB8(rdram, ctx);
        goto after_11;
    // 0x80801158: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_11:
    // 0x8080115C: lui         $t9, 0x0
    ctx->r25 = S32(RELOC_HI16(157, 0X2504) << 16);
    // 0x80801160: addiu       $t9, $t9, 0x2504
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(157, 0X2504));
    // 0x80801164: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80801168: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080116C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80801170: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801174: jal         0x800BBCB8
    // 0x80801178: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_800BBCB8(rdram, ctx);
        goto after_12;
    // 0x80801178: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_12:
    // 0x8080117C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801180: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80801184: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80801188: jr          $ra
    // 0x8080118C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8080118C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80801190_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801190: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801194: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801198: jal         0x80085250
    // 0x8080119C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _basudie_entrypoint_10(rdram, ctx);
        goto after_0;
    // 0x8080119C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808011A0: jal         0x80000F94
    // 0x808011A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstnt_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x808011A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808011A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808011AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808011B0: jr          $ra
    // 0x808011B4: nop

    return;
    // 0x808011B4: nop

;}
RECOMP_FUNC void bstnt_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011B8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808011BC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(157, 0X254C) << 16);
    // 0x808011C0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808011C4: jr          $ra
    // 0x808011C8: lw          $v0, 0x254C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X254C));
    return;
    // 0x808011C8: lw          $v0, 0x254C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X254C));
;}
RECOMP_FUNC void func_808011CC_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808011D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808011D4: jal         0x80000ECC
    // 0x808011D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstnt_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x808011D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808011DC: jal         0x80082FE0
    // 0x808011E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x808011E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808011E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808011E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808011EC: jr          $ra
    // 0x808011F0: nop

    return;
    // 0x808011F0: nop

;}
RECOMP_FUNC void func_808011F4_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808011F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808011FC: jal         0x80082FE8
    // 0x80801200: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80801200: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801204: jal         0x80000F94
    // 0x80801208: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstnt_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80801208: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080120C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801210: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801214: jr          $ra
    // 0x80801218: nop

    return;
    // 0x80801218: nop

;}
RECOMP_FUNC void func_8080121C_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080121C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801224: jal         0x80000E54
    // 0x80801228: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstnt_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80801228: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080122C: jal         0x80082FF0
    // 0x80801230: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80801230: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080123C: jr          $ra
    // 0x80801240: nop

    return;
    // 0x80801240: nop

;}
RECOMP_FUNC void bstnt_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801244: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801248: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(157, 0X255C) << 16);
    // 0x8080124C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801250: jr          $ra
    // 0x80801254: lw          $v0, 0x255C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X255C));
    return;
    // 0x80801254: lw          $v0, 0x255C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X255C));
;}
RECOMP_FUNC void func_80801258_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801258: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080125C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801260: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801264: jal         0x80000ECC
    // 0x80801268: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    bstnt_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80801268: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080126C: jal         0x8008CABC
    // 0x80801270: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008CABC(rdram, ctx);
        goto after_1;
    // 0x80801270: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x80801274: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80801278: jal         0x8008AF24
    // 0x8080127C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x8080127C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80801280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801284: jal         0x8008AED4
    // 0x80801288: addiu       $a1, $zero, 0xE5
    ctx->r5 = ADD32(0, 0XE5);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x80801288: addiu       $a1, $zero, 0xE5
    ctx->r5 = ADD32(0, 0XE5);
    after_3:
    // 0x8080128C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x80801290: ori         $a1, $a1, 0xEBEE
    ctx->r5 = ctx->r5 | 0XEBEE;
    // 0x80801294: jal         0x8008B24C
    // 0x80801298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_4;
    // 0x80801298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080129C: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x808012A0: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x808012A4: jal         0x8008B1BC
    // 0x808012A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_5;
    // 0x808012A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808012AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012B0: jal         0x8008B134
    // 0x808012B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008B134(rdram, ctx);
        goto after_6;
    // 0x808012B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x808012B8: jal         0x8008B064
    // 0x808012BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x808012BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808012C0: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x808012C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808012C8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808012CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808012D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808012D4: jal         0x8009FFD8
    // 0x808012D8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_8;
    // 0x808012D8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_8:
    // 0x808012DC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x808012E0: sw          $zero, 0x15C($t7)
    MEM_W(0X15C, ctx->r15) = 0;
    // 0x808012E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808012E8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808012EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808012F0: jr          $ra
    // 0x808012F4: nop

    return;
    // 0x808012F4: nop

;}
RECOMP_FUNC void func_808012F8_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808012FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801300: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801304: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801308: jal         0x8008CABC
    // 0x8080130C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080130C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x80801310: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80801314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801318: jal         0x8009D3A8
    // 0x8080131C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_1;
    // 0x8080131C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80801320: jal         0x80000164
    // 0x80801324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800164_bstnt(rdram, ctx);
        goto after_2;
    // 0x80801324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080132C: jal         0x8009BB24
    // 0x80801330: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_3;
    // 0x80801330: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x80801334: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x80801338: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080133C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801340: beq         $v0, $zero, L_80801360
    if (ctx->r2 == 0) {
        // 0x80801344: nop
    
            goto L_80801360;
    }
    // 0x80801344: nop

    // 0x80801348: beq         $v0, $at, L_80801388
    if (ctx->r2 == ctx->r1) {
        // 0x8080134C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80801388;
    }
    // 0x8080134C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80801350: beq         $v0, $at, L_808013C4
    if (ctx->r2 == ctx->r1) {
        // 0x80801354: nop
    
            goto L_808013C4;
    }
    // 0x80801354: nop

    // 0x80801358: b           L_808013C4
    // 0x8080135C: nop

        goto L_808013C4;
    // 0x8080135C: nop

L_80801360:
    // 0x80801360: jal         0x8008DF8C
    // 0x80801364: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_4;
    // 0x80801364: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_4:
    // 0x80801368: beq         $v0, $zero, L_808013C4
    if (ctx->r2 == 0) {
        // 0x8080136C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808013C4;
    }
    // 0x8080136C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801370: lui         $a1, 0x3F27
    ctx->r5 = S32(0X3F27 << 16);
    // 0x80801374: jal         0x8008CED4
    // 0x80801378: ori         $a1, $a1, 0x5F70
    ctx->r5 = ctx->r5 | 0X5F70;
    func_8008CED4(rdram, ctx);
        goto after_5;
    // 0x80801378: ori         $a1, $a1, 0x5F70
    ctx->r5 = ctx->r5 | 0X5F70;
    after_5:
    // 0x8080137C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80801380: b           L_808013C4
    // 0x80801384: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
        goto L_808013C4;
    // 0x80801384: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_80801388:
    // 0x80801388: jal         0x8008E078
    // 0x8080138C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_6;
    // 0x8080138C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80801390: beq         $v0, $zero, L_808013C4
    if (ctx->r2 == 0) {
        // 0x80801394: nop
    
            goto L_808013C4;
    }
    // 0x80801394: nop

    // 0x80801398: jal         0x800A2EAC
    // 0x8080139C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2EAC(rdram, ctx);
        goto after_7;
    // 0x8080139C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808013A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808013A4: jal         0x8009B9B0
    // 0x808013A8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_8;
    // 0x808013A8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_8:
    // 0x808013AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808013B0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x808013B4: jal         0x8008CF1C
    // 0x808013B8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_9;
    // 0x808013B8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_9:
    // 0x808013BC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x808013C0: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_808013C4:
    // 0x808013C4: jal         0x8008E35C
    // 0x808013C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_10;
    // 0x808013C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808013CC: beq         $v0, $zero, L_808013D8
    if (ctx->r2 == 0) {
        // 0x808013D0: addiu       $t8, $zero, 0x111
        ctx->r24 = ADD32(0, 0X111);
            goto L_808013D8;
    }
    // 0x808013D0: addiu       $t8, $zero, 0x111
    ctx->r24 = ADD32(0, 0X111);
    // 0x808013D4: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_808013D8:
    // 0x808013D8: jal         0x8008E078
    // 0x808013DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_11;
    // 0x808013DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808013E0: beq         $v0, $zero, L_8080143C
    if (ctx->r2 == 0) {
        // 0x808013E4: nop
    
            goto L_8080143C;
    }
    // 0x808013E4: nop

    // 0x808013E8: jal         0x8009EF10
    // 0x808013EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_12;
    // 0x808013EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808013F0: bgtzl       $v0, L_80801418
    if (SIGNED(ctx->r2) > 0) {
        // 0x808013F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801418;
    }
    goto skip_0;
    // 0x808013F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808013F8: lw          $t9, 0x15C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X15C);
    // 0x808013FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80801400: bne         $t9, $at, L_8080143C
    if (ctx->r25 != ctx->r1) {
        // 0x80801404: nop
    
            goto L_8080143C;
    }
    // 0x80801404: nop

    // 0x80801408: jal         0x8008B324
    // 0x8080140C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_13;
    // 0x8080140C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_13:
    // 0x80801410: beq         $v0, $zero, L_8080143C
    if (ctx->r2 == 0) {
        // 0x80801414: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080143C;
    }
    // 0x80801414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801418:
    // 0x80801418: jal         0x80095738
    // 0x8080141C: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    func_80095738(rdram, ctx);
        goto after_14;
    // 0x8080141C: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_14:
    // 0x80801420: beq         $v0, $zero, L_80801438
    if (ctx->r2 == 0) {
        // 0x80801424: addiu       $t0, $zero, 0x10C
        ctx->r8 = ADD32(0, 0X10C);
            goto L_80801438;
    }
    // 0x80801424: addiu       $t0, $zero, 0x10C
    ctx->r8 = ADD32(0, 0X10C);
    // 0x80801428: jal         0x800848C8
    // 0x8080142C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_28(rdram, ctx);
        goto after_15;
    // 0x8080142C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80801430: b           L_8080143C
    // 0x80801434: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
        goto L_8080143C;
    // 0x80801434: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_80801438:
    // 0x80801438: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_8080143C:
    // 0x8080143C: jal         0x80000F94
    // 0x80801440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bstnt_entrypoint_4(rdram, ctx);
        goto after_16;
    // 0x80801440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80801444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801448: jal         0x8009E5C8
    // 0x8080144C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_17;
    // 0x8080144C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_17:
    // 0x80801450: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801454: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801458: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8080145C: jr          $ra
    // 0x80801460: nop

    return;
    // 0x80801460: nop

;}
RECOMP_FUNC void func_80801464_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801464: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801468: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080146C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80801470: jal         0x8009BF5C
    // 0x80801474: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_0;
    // 0x80801474: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x80801478: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080147C: jal         0x8009C4CC
    // 0x80801480: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_1;
    // 0x80801480: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80801484: jal         0x80000E54
    // 0x80801488: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstnt_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80801488: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8080148C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801494: jr          $ra
    // 0x80801498: nop

    return;
    // 0x80801498: nop

;}
RECOMP_FUNC void bstnt_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080149C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808014A0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(157, 0X256C) << 16);
    // 0x808014A4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808014A8: jr          $ra
    // 0x808014AC: lw          $v0, 0x256C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X256C));
    return;
    // 0x808014AC: lw          $v0, 0x256C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X256C));
;}
RECOMP_FUNC void bstnt_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808014B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808014B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808014B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808014BC: jal         0x80091A58
    // 0x808014C0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x808014C0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x808014C4: bne         $v0, $zero, L_808014D4
    if (ctx->r2 != 0) {
        // 0x808014C8: nop
    
            goto L_808014D4;
    }
    // 0x808014C8: nop

    // 0x808014CC: b           L_808014FC
    // 0x808014D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808014FC;
    // 0x808014D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808014D4:
    // 0x808014D4: jal         0x800A1718
    // 0x808014D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A1718(rdram, ctx);
        goto after_1;
    // 0x808014D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808014DC: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x808014E0: bne         $at, $zero, L_808014F0
    if (ctx->r1 != 0) {
        // 0x808014E4: nop
    
            goto L_808014F0;
    }
    // 0x808014E4: nop

    // 0x808014E8: b           L_808014FC
    // 0x808014EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808014FC;
    // 0x808014EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808014F0:
    // 0x808014F0: jal         0x800FC660
    // 0x808014F4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_800FC660(rdram, ctx);
        goto after_2;
    // 0x808014F4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_2:
    // 0x808014F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808014FC:
    // 0x808014FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801504: jr          $ra
    // 0x80801508: nop

    return;
    // 0x80801508: nop

;}
RECOMP_FUNC void func_8080150C_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080150C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80801510: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801514: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801518: jal         0x80000ECC
    // 0x8080151C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bstnt_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x8080151C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801520: jal         0x8008CABC
    // 0x80801524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CABC(rdram, ctx);
        goto after_1;
    // 0x80801524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801528: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8080152C: jal         0x8008AF24
    // 0x80801530: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x80801530: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80801534: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80801538: jal         0x8008B1A0
    // 0x8080153C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_3;
    // 0x8080153C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80801540: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80801544: jal         0x8008AED4
    // 0x80801548: addiu       $a1, $zero, 0xE2
    ctx->r5 = ADD32(0, 0XE2);
    func_8008AED4(rdram, ctx);
        goto after_4;
    // 0x80801548: addiu       $a1, $zero, 0xE2
    ctx->r5 = ADD32(0, 0XE2);
    after_4:
    // 0x8080154C: lui         $a2, 0x3ECD
    ctx->r6 = S32(0X3ECD << 16);
    // 0x80801550: ori         $a2, $a2, 0x35A8
    ctx->r6 = ctx->r6 | 0X35A8;
    // 0x80801554: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80801558: jal         0x8008B1D4
    // 0x8080155C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_5;
    // 0x8080155C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x80801560: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80801564: jal         0x8008B1BC
    // 0x80801568: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_6;
    // 0x80801568: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_6:
    // 0x8080156C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80801570: jal         0x8008B134
    // 0x80801574: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_7;
    // 0x80801574: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80801578: jal         0x8008B064
    // 0x8080157C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B064(rdram, ctx);
        goto after_8;
    // 0x8080157C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_8:
    // 0x80801580: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80801584: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080158C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801590: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80801594: jal         0x8009FFD8
    // 0x80801598: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_9;
    // 0x80801598: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
    // 0x8080159C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015A0: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    // 0x808015A4: jal         0x8009C99C
    // 0x808015A8: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    func_8009C99C(rdram, ctx);
        goto after_10;
    // 0x808015A8: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_10:
    // 0x808015AC: jal         0x8009EF04
    // 0x808015B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_11;
    // 0x808015B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808015B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808015B8: nop

    // 0x808015BC: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x808015C0: nop

    // 0x808015C4: bc1t        L_808015E0
    if (c1cs) {
        // 0x808015C8: nop
    
            goto L_808015E0;
    }
    // 0x808015C8: nop

    // 0x808015CC: jal         0x8009EEB8
    // 0x808015D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_12;
    // 0x808015D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808015D4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808015D8: jal         0x8009C914
    // 0x808015DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_13;
    // 0x808015DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
L_808015E0:
    // 0x808015E0: jal         0x8009C990
    // 0x808015E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_14;
    // 0x808015E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808015E8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808015EC: jal         0x8009B9C0
    // 0x808015F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_15;
    // 0x808015F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808015F4: jal         0x80000164
    // 0x808015F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800164_bstnt(rdram, ctx);
        goto after_16;
    // 0x808015F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808015FC: jal         0x8009C990
    // 0x80801600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_17;
    // 0x80801600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80801604: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80801608: jal         0x8009BB00
    // 0x8080160C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_18;
    // 0x8080160C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80801610: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80801614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801618: jal         0x8009BA68
    // 0x8080161C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_19;
    // 0x8080161C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_19:
    // 0x80801620: lui         $a1, 0x442D
    ctx->r5 = S32(0X442D << 16);
    // 0x80801624: ori         $a1, $a1, 0x6000
    ctx->r5 = ctx->r5 | 0X6000;
    // 0x80801628: jal         0x8009BA58
    // 0x8080162C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_20;
    // 0x8080162C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80801630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801634: jal         0x8009BCB4
    // 0x80801638: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_21;
    // 0x80801638: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    after_21:
    // 0x8080163C: lui         $a1, 0x3FAC
    ctx->r5 = S32(0X3FAC << 16);
    // 0x80801640: lui         $a2, 0x3FB9
    ctx->r6 = S32(0X3FB9 << 16);
    // 0x80801644: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80801648: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8080164C: jal         0x8009D7A4
    // 0x80801650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D7A4(rdram, ctx);
        goto after_22;
    // 0x80801650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80801654: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x80801658: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080165C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801660: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80801664: jr          $ra
    // 0x80801668: nop

    return;
    // 0x80801668: nop

;}
RECOMP_FUNC void func_8080166C_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080166C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801670: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801674: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801678: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080167C: jal         0x8008CABC
    // 0x80801680: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80801680: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80801684: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80801688: jal         0x80000164
    // 0x8080168C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800164_bstnt(rdram, ctx);
        goto after_1;
    // 0x8080168C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801694: jal         0x80091A30
    // 0x80801698: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_2;
    // 0x80801698: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_2:
    // 0x8080169C: beql        $v0, $zero, L_808016D0
    if (ctx->r2 == 0) {
        // 0x808016A0: lw          $v0, 0x15C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X15C);
            goto L_808016D0;
    }
    goto skip_0;
    // 0x808016A0: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    skip_0:
    // 0x808016A4: jal         0x8009BB50
    // 0x808016A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_3;
    // 0x808016A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808016AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808016B0: nop

    // 0x808016B4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x808016B8: nop

    // 0x808016BC: bc1fl       L_808016D0
    if (!c1cs) {
        // 0x808016C0: lw          $v0, 0x15C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X15C);
            goto L_808016D0;
    }
    goto skip_1;
    // 0x808016C0: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    skip_1:
    // 0x808016C4: jal         0x8009BC6C
    // 0x808016C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_4;
    // 0x808016C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808016CC: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
L_808016D0:
    // 0x808016D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016D4: beq         $v0, $zero, L_80801704
    if (ctx->r2 == 0) {
        // 0x808016D8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80801704;
    }
    // 0x808016D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808016DC: beq         $v0, $at, L_8080175C
    if (ctx->r2 == ctx->r1) {
        // 0x808016E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080175C;
    }
    // 0x808016E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808016E8: beq         $v0, $at, L_80801784
    if (ctx->r2 == ctx->r1) {
        // 0x808016EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801784;
    }
    // 0x808016EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808016F4: beq         $v0, $at, L_808017C0
    if (ctx->r2 == ctx->r1) {
        // 0x808016F8: nop
    
            goto L_808017C0;
    }
    // 0x808016F8: nop

    // 0x808016FC: b           L_8080183C
    // 0x80801700: nop

        goto L_8080183C;
    // 0x80801700: nop

L_80801704:
    // 0x80801704: jal         0x8008DF8C
    // 0x80801708: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_5;
    // 0x80801708: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_5:
    // 0x8080170C: beq         $v0, $zero, L_80801730
    if (ctx->r2 == 0) {
        // 0x80801710: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801730;
    }
    // 0x80801710: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801714: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80801718: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8080171C: jal         0x8008CF1C
    // 0x80801720: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_6;
    // 0x80801720: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_6:
    // 0x80801724: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80801728: b           L_8080183C
    // 0x8080172C: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
        goto L_8080183C;
    // 0x8080172C: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_80801730:
    // 0x80801730: jal         0x8008B324
    // 0x80801734: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_7;
    // 0x80801734: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_7:
    // 0x80801738: beq         $v0, $zero, L_8080183C
    if (ctx->r2 == 0) {
        // 0x8080173C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080183C;
    }
    // 0x8080173C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801740: lui         $a1, 0x3F26
    ctx->r5 = S32(0X3F26 << 16);
    // 0x80801744: ori         $a1, $a1, 0xA7F0
    ctx->r5 = ctx->r5 | 0XA7F0;
    // 0x80801748: jal         0x8008CF1C
    // 0x8080174C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_8;
    // 0x8080174C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_8:
    // 0x80801750: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80801754: b           L_8080183C
    // 0x80801758: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
        goto L_8080183C;
    // 0x80801758: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_8080175C:
    // 0x8080175C: jal         0x8008DF8C
    // 0x80801760: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_9;
    // 0x80801760: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_9:
    // 0x80801764: beq         $v0, $zero, L_8080183C
    if (ctx->r2 == 0) {
        // 0x80801768: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080183C;
    }
    // 0x80801768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080176C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80801770: jal         0x8008CF1C
    // 0x80801774: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_10;
    // 0x80801774: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_10:
    // 0x80801778: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8080177C: b           L_8080183C
    // 0x80801780: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
        goto L_8080183C;
    // 0x80801780: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
L_80801784:
    // 0x80801784: jal         0x8009D3A8
    // 0x80801788: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_11;
    // 0x80801788: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x8080178C: jal         0x8008E078
    // 0x80801790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_12;
    // 0x80801790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80801794: beq         $v0, $zero, L_8080183C
    if (ctx->r2 == 0) {
        // 0x80801798: nop
    
            goto L_8080183C;
    }
    // 0x80801798: nop

    // 0x8080179C: jal         0x800A2EAC
    // 0x808017A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2EAC(rdram, ctx);
        goto after_13;
    // 0x808017A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808017A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808017A8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x808017AC: jal         0x8008CF1C
    // 0x808017B0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_14;
    // 0x808017B0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_14:
    // 0x808017B4: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x808017B8: b           L_8080183C
    // 0x808017BC: sw          $t9, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r25;
        goto L_8080183C;
    // 0x808017BC: sw          $t9, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r25;
L_808017C0:
    // 0x808017C0: jal         0x8009BB5C
    // 0x808017C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_15;
    // 0x808017C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808017C8: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x808017CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808017D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808017D4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x808017D8: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x808017DC: jal         0x8009B9B0
    // 0x808017E0: nop

    func_8009B9B0(rdram, ctx);
        goto after_16;
    // 0x808017E0: nop

    after_16:
    // 0x808017E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808017E8: jal         0x8009D2D8
    // 0x808017EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009D2D8(rdram, ctx);
        goto after_17;
    // 0x808017EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_17:
    // 0x808017F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808017F4: jal         0x8009D3A8
    // 0x808017F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_18;
    // 0x808017F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x808017FC: jal         0x8008B324
    // 0x80801800: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_19;
    // 0x80801800: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_19:
    // 0x80801804: beq         $v0, $zero, L_8080183C
    if (ctx->r2 == 0) {
        // 0x80801808: nop
    
            goto L_8080183C;
    }
    // 0x80801808: nop

    // 0x8080180C: jal         0x8009BB5C
    // 0x80801810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_20;
    // 0x80801810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80801814: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80801818: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    // 0x8080181C: addiu       $t1, $zero, 0x10C
    ctx->r9 = ADD32(0, 0X10C);
    // 0x80801820: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80801824: nop

    // 0x80801828: bc1fl       L_8080183C
    if (!c1cs) {
        // 0x8080182C: sw          $t1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r9;
            goto L_8080183C;
    }
    goto skip_2;
    // 0x8080182C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    skip_2:
    // 0x80801830: b           L_8080183C
    // 0x80801834: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
        goto L_8080183C;
    // 0x80801834: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80801838: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_8080183C:
    // 0x8080183C: jal         0x8009BB50
    // 0x80801840: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_21;
    // 0x80801840: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80801844: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80801848: nop

    // 0x8080184C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80801850: nop

    // 0x80801854: bc1f        L_80801870
    if (!c1cs) {
        // 0x80801858: nop
    
            goto L_80801870;
    }
    // 0x80801858: nop

    // 0x8080185C: jal         0x8008E35C
    // 0x80801860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_22;
    // 0x80801860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80801864: beq         $v0, $zero, L_80801870
    if (ctx->r2 == 0) {
        // 0x80801868: addiu       $t2, $zero, 0x111
        ctx->r10 = ADD32(0, 0X111);
            goto L_80801870;
    }
    // 0x80801868: addiu       $t2, $zero, 0x111
    ctx->r10 = ADD32(0, 0X111);
    // 0x8080186C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_80801870:
    // 0x80801870: jal         0x800014B0
    // 0x80801874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bstnt_entrypoint_8(rdram, ctx);
        goto after_23;
    // 0x80801874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80801878: beq         $v0, $zero, L_80801884
    if (ctx->r2 == 0) {
        // 0x8080187C: addiu       $t3, $zero, 0x10E
        ctx->r11 = ADD32(0, 0X10E);
            goto L_80801884;
    }
    // 0x8080187C: addiu       $t3, $zero, 0x10E
    ctx->r11 = ADD32(0, 0X10E);
    // 0x80801880: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
L_80801884:
    // 0x80801884: jal         0x8008E078
    // 0x80801888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_24;
    // 0x80801888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x8080188C: beq         $v0, $zero, L_808018A8
    if (ctx->r2 == 0) {
        // 0x80801890: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808018A8;
    }
    // 0x80801890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801894: jal         0x80091A58
    // 0x80801898: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_25;
    // 0x80801898: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_25:
    // 0x8080189C: beq         $v0, $zero, L_808018A8
    if (ctx->r2 == 0) {
        // 0x808018A0: addiu       $t4, $zero, 0x107
        ctx->r12 = ADD32(0, 0X107);
            goto L_808018A8;
    }
    // 0x808018A0: addiu       $t4, $zero, 0x107
    ctx->r12 = ADD32(0, 0X107);
    // 0x808018A4: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
L_808018A8:
    // 0x808018A8: jal         0x80000F94
    // 0x808018AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bstnt_entrypoint_4(rdram, ctx);
        goto after_26;
    // 0x808018AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x808018B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808018B4: jal         0x8009E5C8
    // 0x808018B8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_27;
    // 0x808018B8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_27:
    // 0x808018BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808018C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808018C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808018C8: jr          $ra
    // 0x808018CC: nop

    return;
    // 0x808018CC: nop

;}
RECOMP_FUNC void func_808018D0_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808018D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808018D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808018D8: jal         0x8009BC6C
    // 0x808018DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x808018DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808018E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808018E4: jal         0x8009BF5C
    // 0x808018E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_1;
    // 0x808018E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x808018EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808018F0: jal         0x8009C4CC
    // 0x808018F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_2;
    // 0x808018F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x808018F8: jal         0x80000E54
    // 0x808018FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstnt_entrypoint_2(rdram, ctx);
        goto after_3;
    // 0x808018FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80801900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801904: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801908: jr          $ra
    // 0x8080190C: nop

    return;
    // 0x8080190C: nop

;}
RECOMP_FUNC void bstnt_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801910: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801914: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(157, 0X257C) << 16);
    // 0x80801918: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080191C: jr          $ra
    // 0x80801920: lw          $v0, 0x257C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X257C));
    return;
    // 0x80801920: lw          $v0, 0x257C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X257C));
;}
RECOMP_FUNC void bstnt_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801924: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080192C: jal         0x8009E6EC
    // 0x80801930: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80801930: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801934: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x80801938: bne         $v0, $at, L_80801968
    if (ctx->r2 != ctx->r1) {
        // 0x8080193C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80801968;
    }
    // 0x8080193C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801940: jal         0x80099A4C
    // 0x80801944: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80099A4C(rdram, ctx);
        goto after_1;
    // 0x80801944: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80801948: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080194C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80801950: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80801954: sw          $v0, 0x164($a0)
    MEM_W(0X164, ctx->r4) = ctx->r2;
    // 0x80801958: jal         0x8009E830
    // 0x8080195C: sb          $t6, 0x168($a0)
    MEM_B(0X168, ctx->r4) = ctx->r14;
    func_8009E830(rdram, ctx);
        goto after_2;
    // 0x8080195C: sb          $t6, 0x168($a0)
    MEM_B(0X168, ctx->r4) = ctx->r14;
    after_2:
    // 0x80801960: b           L_80801974
    // 0x80801964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80801974;
    // 0x80801964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801968:
    // 0x80801968: jal         0x80099B94
    // 0x8080196C: nop

    func_80099B94(rdram, ctx);
        goto after_3;
    // 0x8080196C: nop

    after_3:
    // 0x80801970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801974:
    // 0x80801974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801978: jr          $ra
    // 0x8080197C: nop

    return;
    // 0x8080197C: nop

;}
RECOMP_FUNC void func_80801980_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801980: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80801984: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801988: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080198C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801990: jal         0x8008CABC
    // 0x80801994: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80801994: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_0:
    // 0x80801998: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x8080199C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x808019A0: sltiu       $at, $v1, 0x5
    ctx->r1 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x808019A4: beq         $at, $zero, L_80801BF8
    if (ctx->r1 == 0) {
        // 0x808019A8: sw          $v1, 0x15C($s0)
        MEM_W(0X15C, ctx->r16) = ctx->r3;
            goto L_80801BF8;
    }
    // 0x808019A8: sw          $v1, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r3;
    // 0x808019AC: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x808019B0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(157, 0X220C) << 16);
    // 0x808019B4: addu        $at, $at, $t6
    gpr jr_addend_808019BC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x808019B8: lw          $t6, 0x220C($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(157, 0X220C));
    // 0x808019BC: jr          $t6
    // 0x808019C0: nop

    switch (jr_addend_808019BC >> 2) {
        case 0: goto L_80801BE0; break;
        case 1: goto L_808019C4; break;
        case 2: goto L_80801B48; break;
        case 3: goto L_80801B64; break;
        case 4: goto L_80801B84; break;
        default: switch_error(__func__, 0x808019BC, 0x8080220C);
    }
    // 0x808019C0: nop

L_808019C4:
    // 0x808019C4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(157, 0X2220) << 16);
    // 0x808019C8: lwc1        $f12, 0x2220($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(157, 0X2220));
    // 0x808019CC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(157, 0X2224) << 16);
    // 0x808019D0: jal         0x800DC178
    // 0x808019D4: lwc1        $f14, 0x2224($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(157, 0X2224));
    func_800DC178(rdram, ctx);
        goto after_1;
    // 0x808019D4: lwc1        $f14, 0x2224($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(157, 0X2224));
    after_1:
    // 0x808019D8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808019DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019E0: addiu       $a1, $zero, 0x3F0
    ctx->r5 = ADD32(0, 0X3F0);
    // 0x808019E4: jal         0x8009DB04
    // 0x808019E8: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    func_8009DB04(rdram, ctx);
        goto after_2;
    // 0x808019E8: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    after_2:
    // 0x808019EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019F0: jal         0x800A2EEC
    // 0x808019F4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800A2EEC(rdram, ctx);
        goto after_3;
    // 0x808019F4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x808019F8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x808019FC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80801A00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801A08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80801A0C: jal         0x8009FFD8
    // 0x80801A10: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_4;
    // 0x80801A10: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x80801A14: jal         0x8009EF04
    // 0x80801A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_5;
    // 0x80801A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801A1C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80801A20: nop

    // 0x80801A24: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80801A28: nop

    // 0x80801A2C: bc1t        L_80801A48
    if (c1cs) {
        // 0x80801A30: nop
    
            goto L_80801A48;
    }
    // 0x80801A30: nop

    // 0x80801A34: jal         0x8009EEB8
    // 0x80801A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_6;
    // 0x80801A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80801A3C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80801A40: jal         0x8009C914
    // 0x80801A44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_7;
    // 0x80801A44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_80801A48:
    // 0x80801A48: jal         0x8009C990
    // 0x80801A4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_8;
    // 0x80801A4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80801A50: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80801A54: jal         0x8009B9C0
    // 0x80801A58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_9;
    // 0x80801A58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80801A5C: jal         0x80000164
    // 0x80801A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800164_bstnt(rdram, ctx);
        goto after_10;
    // 0x80801A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80801A64: jal         0x8009C990
    // 0x80801A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_11;
    // 0x80801A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80801A6C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80801A70: jal         0x8009BB00
    // 0x80801A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_12;
    // 0x80801A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80801A78: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80801A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A80: jal         0x8009BA68
    // 0x80801A84: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009BA68(rdram, ctx);
        goto after_13;
    // 0x80801A84: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_13:
    // 0x80801A88: jal         0x8009BB00
    // 0x80801A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_14;
    // 0x80801A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80801A90: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80801A94: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80801A98: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(157, 0X2228) << 16);
    // 0x80801A9C: lwc1        $f6, 0x2228($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(157, 0X2228));
    // 0x80801AA0: lui         $a3, 0x3EB3
    ctx->r7 = S32(0X3EB3 << 16);
    // 0x80801AA4: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80801AA8: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x80801AAC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80801AB0: lui         $a2, 0x4416
    ctx->r6 = S32(0X4416 << 16);
    // 0x80801AB4: jal         0x800F10B4
    // 0x80801AB8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_15;
    // 0x80801AB8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_15:
    // 0x80801ABC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80801AC0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80801AC4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(157, 0X222C) << 16);
    // 0x80801AC8: lwc1        $f8, 0x222C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(157, 0X222C));
    // 0x80801ACC: lui         $a3, 0x43AD
    ctx->r7 = S32(0X43AD << 16);
    // 0x80801AD0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80801AD4: ori         $a3, $a3, 0x6000
    ctx->r7 = ctx->r7 | 0X6000;
    // 0x80801AD8: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80801ADC: lui         $a2, 0x4416
    ctx->r6 = S32(0X4416 << 16);
    // 0x80801AE0: jal         0x800F10B4
    // 0x80801AE4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_16;
    // 0x80801AE4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_16:
    // 0x80801AE8: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80801AEC: jal         0x8008AF24
    // 0x80801AF0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_8008AF24(rdram, ctx);
        goto after_17;
    // 0x80801AF0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_17:
    // 0x80801AF4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80801AF8: jal         0x8008AED4
    // 0x80801AFC: addiu       $a1, $zero, 0xE2
    ctx->r5 = ADD32(0, 0XE2);
    func_8008AED4(rdram, ctx);
        goto after_18;
    // 0x80801AFC: addiu       $a1, $zero, 0xE2
    ctx->r5 = ADD32(0, 0XE2);
    after_18:
    // 0x80801B00: lui         $a2, 0x3ECD
    ctx->r6 = S32(0X3ECD << 16);
    // 0x80801B04: ori         $a2, $a2, 0x35A8
    ctx->r6 = ctx->r6 | 0X35A8;
    // 0x80801B08: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80801B0C: jal         0x8008B1D4
    // 0x80801B10: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_19;
    // 0x80801B10: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_19:
    // 0x80801B14: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80801B18: jal         0x8008B1BC
    // 0x80801B1C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8008B1BC(rdram, ctx);
        goto after_20;
    // 0x80801B1C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_20:
    // 0x80801B20: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80801B24: jal         0x8008B134
    // 0x80801B28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_21;
    // 0x80801B28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x80801B2C: jal         0x8008B064
    // 0x80801B30: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_8008B064(rdram, ctx);
        goto after_22;
    // 0x80801B30: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_22:
    // 0x80801B34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801B38: jal         0x8009BA58
    // 0x80801B3C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_8009BA58(rdram, ctx);
        goto after_23;
    // 0x80801B3C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_23:
    // 0x80801B40: b           L_80801BFC
    // 0x80801B44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80801BFC;
    // 0x80801B44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80801B48:
    // 0x80801B48: lui         $a1, 0x3F26
    ctx->r5 = S32(0X3F26 << 16);
    // 0x80801B4C: ori         $a1, $a1, 0xA7F0
    ctx->r5 = ctx->r5 | 0XA7F0;
    // 0x80801B50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801B54: jal         0x8008CF1C
    // 0x80801B58: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_24;
    // 0x80801B58: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_24:
    // 0x80801B5C: b           L_80801BFC
    // 0x80801B60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80801BFC;
    // 0x80801B60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80801B64:
    // 0x80801B64: lui         $a1, 0x3F6E
    ctx->r5 = S32(0X3F6E << 16);
    // 0x80801B68: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80801B6C: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80801B70: ori         $a1, $a1, 0x147B
    ctx->r5 = ctx->r5 | 0X147B;
    // 0x80801B74: jal         0x8008CF1C
    // 0x80801B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CF1C(rdram, ctx);
        goto after_25;
    // 0x80801B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x80801B7C: b           L_80801BFC
    // 0x80801B80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80801BFC;
    // 0x80801B80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80801B84:
    // 0x80801B84: jal         0x8009BB5C
    // 0x80801B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_26;
    // 0x80801B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x80801B8C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80801B90: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80801B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801B98: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80801B9C: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80801BA0: jal         0x8009D2D8
    // 0x80801BA4: swc1        $f16, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f16.u32l;
    func_8009D2D8(rdram, ctx);
        goto after_27;
    // 0x80801BA4: swc1        $f16, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f16.u32l;
    after_27:
    // 0x80801BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BAC: jal         0x8009B9B0
    // 0x80801BB0: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_28;
    // 0x80801BB0: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_28:
    // 0x80801BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BB8: jal         0x800A2FCC
    // 0x80801BBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A2FCC(rdram, ctx);
        goto after_29;
    // 0x80801BBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_29:
    // 0x80801BC0: lui         $a1, 0x3F6E
    ctx->r5 = S32(0X3F6E << 16);
    // 0x80801BC4: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80801BC8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80801BCC: ori         $a1, $a1, 0x147B
    ctx->r5 = ctx->r5 | 0X147B;
    // 0x80801BD0: jal         0x8008CF1C
    // 0x80801BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CF1C(rdram, ctx);
        goto after_30;
    // 0x80801BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x80801BD8: b           L_80801BFC
    // 0x80801BDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80801BFC;
    // 0x80801BDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80801BE0:
    // 0x80801BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BE4: jal         0x8009BF5C
    // 0x80801BE8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_31;
    // 0x80801BE8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_31:
    // 0x80801BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BF0: jal         0x8009C4CC
    // 0x80801BF4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_32;
    // 0x80801BF4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_32:
L_80801BF8:
    // 0x80801BF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80801BFC:
    // 0x80801BFC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801C00: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80801C04: jr          $ra
    // 0x80801C08: nop

    return;
    // 0x80801C08: nop

;}
RECOMP_FUNC void func_80801C0C_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801C0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801C10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801C14: jal         0x80000ECC
    // 0x80801C18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstnt_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80801C18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801C1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801C20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801C24: jal         0x80001980
    // 0x80801C28: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    func_80801980_bstnt(rdram, ctx);
        goto after_1;
    // 0x80801C28: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    after_1:
    // 0x80801C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801C30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801C34: jr          $ra
    // 0x80801C38: nop

    return;
    // 0x80801C38: nop

;}
RECOMP_FUNC void func_80801C3C_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801C3C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80801C40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801C44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801C48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801C4C: jal         0x8008CABC
    // 0x80801C50: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80801C50: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x80801C54: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80801C58: jal         0x80000164
    // 0x80801C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800164_bstnt(rdram, ctx);
        goto after_1;
    // 0x80801C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C64: jal         0x8009BB24
    // 0x80801C68: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_2;
    // 0x80801C68: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x80801C6C: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x80801C70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80801C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C78: beq         $v0, $at, L_80801CA8
    if (ctx->r2 == ctx->r1) {
        // 0x80801C7C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80801CA8;
    }
    // 0x80801C7C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80801C80: beq         $v0, $at, L_80801CF4
    if (ctx->r2 == ctx->r1) {
        // 0x80801C84: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801CF4;
    }
    // 0x80801C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C88: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80801C8C: beq         $v0, $at, L_80801D20
    if (ctx->r2 == ctx->r1) {
        // 0x80801C90: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801D20;
    }
    // 0x80801C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C94: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80801C98: beql        $v0, $at, L_80801D58
    if (ctx->r2 == ctx->r1) {
        // 0x80801C9C: lbu         $t6, 0x168($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X168);
            goto L_80801D58;
    }
    goto skip_0;
    // 0x80801C9C: lbu         $t6, 0x168($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X168);
    skip_0:
    // 0x80801CA0: b           L_80801DE4
    // 0x80801CA4: nop

        goto L_80801DE4;
    // 0x80801CA4: nop

L_80801CA8:
    // 0x80801CA8: jal         0x8008DF8C
    // 0x80801CAC: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_3;
    // 0x80801CAC: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_3:
    // 0x80801CB0: beq         $v0, $zero, L_80801CC8
    if (ctx->r2 == 0) {
        // 0x80801CB4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801CC8;
    }
    // 0x80801CB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801CB8: jal         0x80001980
    // 0x80801CBC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80801980_bstnt(rdram, ctx);
        goto after_4;
    // 0x80801CBC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80801CC0: b           L_80801CE4
    // 0x80801CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80801CE4;
    // 0x80801CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801CC8:
    // 0x80801CC8: jal         0x8008B324
    // 0x80801CCC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_5;
    // 0x80801CCC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_5:
    // 0x80801CD0: beq         $v0, $zero, L_80801CE0
    if (ctx->r2 == 0) {
        // 0x80801CD4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801CE0;
    }
    // 0x80801CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801CD8: jal         0x80001980
    // 0x80801CDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80801980_bstnt(rdram, ctx);
        goto after_6;
    // 0x80801CDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
L_80801CE0:
    // 0x80801CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801CE4:
    // 0x80801CE4: jal         0x800001C8
    // 0x80801CE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_808001C8_bstnt(rdram, ctx);
        goto after_7;
    // 0x80801CE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80801CEC: b           L_80801DE4
    // 0x80801CF0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
        goto L_80801DE4;
    // 0x80801CF0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_80801CF4:
    // 0x80801CF4: jal         0x8008DF8C
    // 0x80801CF8: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_8;
    // 0x80801CF8: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_8:
    // 0x80801CFC: beq         $v0, $zero, L_80801D0C
    if (ctx->r2 == 0) {
        // 0x80801D00: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801D0C;
    }
    // 0x80801D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801D04: jal         0x80001980
    // 0x80801D08: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80801980_bstnt(rdram, ctx);
        goto after_9;
    // 0x80801D08: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
L_80801D0C:
    // 0x80801D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801D10: jal         0x800001C8
    // 0x80801D14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_808001C8_bstnt(rdram, ctx);
        goto after_10;
    // 0x80801D14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80801D18: b           L_80801DE4
    // 0x80801D1C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
        goto L_80801DE4;
    // 0x80801D1C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_80801D20:
    // 0x80801D20: jal         0x8009D3A8
    // 0x80801D24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_11;
    // 0x80801D24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x80801D28: jal         0x8008E078
    // 0x80801D2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_12;
    // 0x80801D2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80801D30: beq         $v0, $zero, L_80801D40
    if (ctx->r2 == 0) {
        // 0x80801D34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801D40;
    }
    // 0x80801D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801D38: jal         0x80001980
    // 0x80801D3C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80801980_bstnt(rdram, ctx);
        goto after_13;
    // 0x80801D3C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_13:
L_80801D40:
    // 0x80801D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801D44: jal         0x800001C8
    // 0x80801D48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_808001C8_bstnt(rdram, ctx);
        goto after_14;
    // 0x80801D48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x80801D4C: b           L_80801DE4
    // 0x80801D50: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
        goto L_80801DE4;
    // 0x80801D50: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80801D54: lbu         $t6, 0x168($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X168);
L_80801D58:
    // 0x80801D58: beql        $t6, $zero, L_80801D78
    if (ctx->r14 == 0) {
        // 0x80801D5C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801D78;
    }
    goto skip_1;
    // 0x80801D5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80801D60: jal         0x8008E078
    // 0x80801D64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_15;
    // 0x80801D64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80801D68: beq         $v0, $zero, L_80801D74
    if (ctx->r2 == 0) {
        // 0x80801D6C: addiu       $t7, $zero, 0x10D
        ctx->r15 = ADD32(0, 0X10D);
            goto L_80801D74;
    }
    // 0x80801D6C: addiu       $t7, $zero, 0x10D
    ctx->r15 = ADD32(0, 0X10D);
    // 0x80801D70: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_80801D74:
    // 0x80801D74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801D78:
    // 0x80801D78: jal         0x8009D3A8
    // 0x80801D7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_16;
    // 0x80801D7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x80801D80: jal         0x8008B324
    // 0x80801D84: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_17;
    // 0x80801D84: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_17:
    // 0x80801D88: beq         $v0, $zero, L_80801DCC
    if (ctx->r2 == 0) {
        // 0x80801D8C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801DCC;
    }
    // 0x80801D8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801D90: jal         0x8009BB00
    // 0x80801D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_18;
    // 0x80801D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80801D98: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80801D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801DA0: addiu       $t8, $zero, 0x10C
    ctx->r24 = ADD32(0, 0X10C);
    // 0x80801DA4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80801DA8: nop

    // 0x80801DAC: bc1f        L_80801DC4
    if (!c1cs) {
        // 0x80801DB0: nop
    
            goto L_80801DC4;
    }
    // 0x80801DB0: nop

    // 0x80801DB4: jal         0x80001980
    // 0x80801DB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80801980_bstnt(rdram, ctx);
        goto after_19;
    // 0x80801DB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x80801DBC: b           L_80801DD8
    // 0x80801DC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80801DD8;
    // 0x80801DC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801DC4:
    // 0x80801DC4: b           L_80801DD4
    // 0x80801DC8: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
        goto L_80801DD4;
    // 0x80801DC8: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_80801DCC:
    // 0x80801DCC: jal         0x8009B9B0
    // 0x80801DD0: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_20;
    // 0x80801DD0: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_20:
L_80801DD4:
    // 0x80801DD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801DD8:
    // 0x80801DD8: jal         0x80000218
    // 0x80801DDC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_80800218_bstnt(rdram, ctx);
        goto after_21;
    // 0x80801DDC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_21:
    // 0x80801DE0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_80801DE4:
    // 0x80801DE4: jal         0x8008E35C
    // 0x80801DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_22;
    // 0x80801DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80801DEC: beq         $v0, $zero, L_80801DF8
    if (ctx->r2 == 0) {
        // 0x80801DF0: addiu       $t9, $zero, 0x111
        ctx->r25 = ADD32(0, 0X111);
            goto L_80801DF8;
    }
    // 0x80801DF0: addiu       $t9, $zero, 0x111
    ctx->r25 = ADD32(0, 0X111);
    // 0x80801DF4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_80801DF8:
    // 0x80801DF8: jal         0x80000F94
    // 0x80801DFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bstnt_entrypoint_4(rdram, ctx);
        goto after_23;
    // 0x80801DFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80801E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801E04: jal         0x8009E5C8
    // 0x80801E08: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_24;
    // 0x80801E08: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_24:
    // 0x80801E0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801E10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801E14: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80801E18: jr          $ra
    // 0x80801E1C: nop

    return;
    // 0x80801E1C: nop

;}
RECOMP_FUNC void func_80801E20_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801E20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801E24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801E28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80801E2C: jal         0x80001980
    // 0x80801E30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80801980_bstnt(rdram, ctx);
        goto after_0;
    // 0x80801E30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80801E34: jal         0x80000E54
    // 0x80801E38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstnt_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80801E38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801E44: jr          $ra
    // 0x80801E48: nop

    return;
    // 0x80801E48: nop

;}
RECOMP_FUNC void bstnt_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801E4C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801E50: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(157, 0X258C) << 16);
    // 0x80801E54: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801E58: jr          $ra
    // 0x80801E5C: lw          $v0, 0x258C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X258C));
    return;
    // 0x80801E5C: lw          $v0, 0x258C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X258C));
;}
RECOMP_FUNC void func_80801E60_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801E60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801E64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801E68: jal         0x80000ECC
    // 0x80801E6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstnt_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80801E6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801E70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801E74: jal         0x800845D8
    // 0x80801E78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80801E78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80801E7C: lui         $a2, 0x3ED0
    ctx->r6 = S32(0X3ED0 << 16);
    // 0x80801E80: ori         $a2, $a2, 0xFF97
    ctx->r6 = ctx->r6 | 0XFF97;
    // 0x80801E84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801E88: jal         0x800845E0
    // 0x80801E8C: addiu       $a1, $zero, 0xE9
    ctx->r5 = ADD32(0, 0XE9);
    _babounce_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80801E8C: addiu       $a1, $zero, 0xE9
    ctx->r5 = ADD32(0, 0XE9);
    after_2:
    // 0x80801E90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801E94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801E98: jr          $ra
    // 0x80801E9C: nop

    return;
    // 0x80801E9C: nop

;}
RECOMP_FUNC void func_80801EA0_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801EA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801EA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801EA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801EAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801EB0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80801EB4: jal         0x8008CB10
    // 0x80801EB8: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x80801EB8: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_0:
    // 0x80801EBC: beq         $v0, $zero, L_80801ECC
    if (ctx->r2 == 0) {
        // 0x80801EC0: nop
    
            goto L_80801ECC;
    }
    // 0x80801EC0: nop

    // 0x80801EC4: jal         0x800951B4
    // 0x80801EC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_1;
    // 0x80801EC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_80801ECC:
    // 0x80801ECC: jal         0x800845C8
    // 0x80801ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babounce_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80801ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801ED4: beq         $v0, $zero, L_80801EE4
    if (ctx->r2 == 0) {
        // 0x80801ED8: nop
    
            goto L_80801EE4;
    }
    // 0x80801ED8: nop

    // 0x80801EDC: jal         0x80000164
    // 0x80801EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800164_bstnt(rdram, ctx);
        goto after_3;
    // 0x80801EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80801EE4:
    // 0x80801EE4: jal         0x80084600
    // 0x80801EE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babounce_entrypoint_9(rdram, ctx);
        goto after_4;
    // 0x80801EE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801EEC: beq         $v0, $zero, L_80801EF8
    if (ctx->r2 == 0) {
        // 0x80801EF0: addiu       $t6, $zero, 0x10C
        ctx->r14 = ADD32(0, 0X10C);
            goto L_80801EF8;
    }
    // 0x80801EF0: addiu       $t6, $zero, 0x10C
    ctx->r14 = ADD32(0, 0X10C);
    // 0x80801EF4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80801EF8:
    // 0x80801EF8: jal         0x80000F94
    // 0x80801EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bstnt_entrypoint_4(rdram, ctx);
        goto after_5;
    // 0x80801EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801F00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801F04: jal         0x8009E5C8
    // 0x80801F08: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x80801F08: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x80801F0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801F10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801F14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801F18: jr          $ra
    // 0x80801F1C: nop

    return;
    // 0x80801F1C: nop

;}
RECOMP_FUNC void func_80801F20_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801F20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801F24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801F28: jal         0x800845D0
    // 0x80801F2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80801F2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801F30: jal         0x80000E54
    // 0x80801F34: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstnt_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80801F34: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801F38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801F3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801F40: jr          $ra
    // 0x80801F44: nop

    return;
    // 0x80801F44: nop

;}
RECOMP_FUNC void bstnt_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801F48: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801F4C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(157, 0X259C) << 16);
    // 0x80801F50: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801F54: jr          $ra
    // 0x80801F58: lw          $v0, 0x259C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X259C));
    return;
    // 0x80801F58: lw          $v0, 0x259C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X259C));
;}
RECOMP_FUNC void func_80801F5C_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801F5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801F60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801F64: jal         0x80000ECC
    // 0x80801F68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstnt_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80801F68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801F6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801F70: jal         0x800845D8
    // 0x80801F74: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80801F74: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80801F78: lui         $a2, 0x3ED0
    ctx->r6 = S32(0X3ED0 << 16);
    // 0x80801F7C: ori         $a2, $a2, 0xFF97
    ctx->r6 = ctx->r6 | 0XFF97;
    // 0x80801F80: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801F84: jal         0x800845E0
    // 0x80801F88: addiu       $a1, $zero, 0xE9
    ctx->r5 = ADD32(0, 0XE9);
    _babounce_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80801F88: addiu       $a1, $zero, 0xE9
    ctx->r5 = ADD32(0, 0XE9);
    after_2:
    // 0x80801F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801F90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801F94: jr          $ra
    // 0x80801F98: nop

    return;
    // 0x80801F98: nop

;}
RECOMP_FUNC void func_80801F9C_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801F9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801FA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801FA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801FA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801FAC: jal         0x800845C8
    // 0x80801FB0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    _babounce_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80801FB0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80801FB4: beq         $v0, $zero, L_80801FC4
    if (ctx->r2 == 0) {
        // 0x80801FB8: nop
    
            goto L_80801FC4;
    }
    // 0x80801FB8: nop

    // 0x80801FBC: jal         0x80000164
    // 0x80801FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800164_bstnt(rdram, ctx);
        goto after_1;
    // 0x80801FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_80801FC4:
    // 0x80801FC4: jal         0x80084600
    // 0x80801FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babounce_entrypoint_9(rdram, ctx);
        goto after_2;
    // 0x80801FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801FCC: beq         $v0, $zero, L_80801FD8
    if (ctx->r2 == 0) {
        // 0x80801FD0: addiu       $t6, $zero, 0x10C
        ctx->r14 = ADD32(0, 0X10C);
            goto L_80801FD8;
    }
    // 0x80801FD0: addiu       $t6, $zero, 0x10C
    ctx->r14 = ADD32(0, 0X10C);
    // 0x80801FD4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80801FD8:
    // 0x80801FD8: jal         0x80000F94
    // 0x80801FDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bstnt_entrypoint_4(rdram, ctx);
        goto after_3;
    // 0x80801FDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801FE4: jal         0x8009E5C8
    // 0x80801FE8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x80801FE8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x80801FEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801FF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801FF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801FF8: jr          $ra
    // 0x80801FFC: nop

    return;
    // 0x80801FFC: nop

;}
RECOMP_FUNC void func_80802000_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80802004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80802008: jal         0x800845D0
    // 0x8080200C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x8080200C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80802010: jal         0x80000E54
    // 0x80802014: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstnt_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80802014: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80802018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080201C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80802020: jr          $ra
    // 0x80802024: nop

    return;
    // 0x80802024: nop

;}
RECOMP_FUNC void bstnt_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802028: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080202C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(157, 0X25AC) << 16);
    // 0x80802030: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80802034: jr          $ra
    // 0x80802038: lw          $v0, 0x25AC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X25AC));
    return;
    // 0x80802038: lw          $v0, 0x25AC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X25AC));
;}
RECOMP_FUNC void func_8080203C_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080203C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80802040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80802044: jal         0x800839B8
    // 0x80802048: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80802048: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080204C: jal         0x80000E54
    // 0x80802050: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstnt_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80802050: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80802054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80802058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080205C: jr          $ra
    // 0x80802060: nop

    return;
    // 0x80802060: nop

;}
RECOMP_FUNC void func_80802064_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802064: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80802068: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080206C: jal         0x80000ECC
    // 0x80802070: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstnt_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80802070: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80802074: jal         0x800839C8
    // 0x80802078: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x80802078: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080207C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80802080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80802084: jr          $ra
    // 0x80802088: nop

    return;
    // 0x80802088: nop

;}
RECOMP_FUNC void func_8080208C_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080208C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80802090: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80802094: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80802098: jal         0x800839E8
    // 0x8080209C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x8080209C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x808020A0: beq         $v0, $zero, L_808020B4
    if (ctx->r2 == 0) {
        // 0x808020A4: nop
    
            goto L_808020B4;
    }
    // 0x808020A4: nop

    // 0x808020A8: jal         0x800839B0
    // 0x808020AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsrest_entrypoint_13(rdram, ctx);
        goto after_1;
    // 0x808020AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808020B0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_808020B4:
    // 0x808020B4: jal         0x80000F94
    // 0x808020B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    bstnt_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x808020B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x808020BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808020C0: jal         0x8009E5C8
    // 0x808020C4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x808020C4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x808020C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808020CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808020D0: jr          $ra
    // 0x808020D4: nop

    return;
    // 0x808020D4: nop

;}
RECOMP_FUNC void bstnt_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808020D8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808020DC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(157, 0X25BC) << 16);
    // 0x808020E0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808020E4: jr          $ra
    // 0x808020E8: lw          $v0, 0x25BC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X25BC));
    return;
    // 0x808020E8: lw          $v0, 0x25BC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X25BC));
;}
RECOMP_FUNC void func_808020EC_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808020EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808020F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808020F4: jal         0x80000E54
    // 0x808020F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstnt_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808020F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808020FC: jal         0x80090A2C
    // 0x80802100: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80090A2C(rdram, ctx);
        goto after_1;
    // 0x80802100: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80802104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80802108: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080210C: jr          $ra
    // 0x80802110: nop

    return;
    // 0x80802110: nop

;}
RECOMP_FUNC void func_80802114_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802114: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80802118: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080211C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80802120: jal         0x80000ECC
    // 0x80802124: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bstnt_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80802124: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80802128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080212C: addiu       $a1, $zero, 0xE5
    ctx->r5 = ADD32(0, 0XE5);
    // 0x80802130: jal         0x8008CB3C
    // 0x80802134: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80802134: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_1:
    // 0x80802138: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8080213C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80802140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802144: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80802148: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080214C: jal         0x8009FFD8
    // 0x80802150: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80802150: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80802154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802158: jal         0x8009B9B0
    // 0x8080215C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x8080215C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80802160: jal         0x800909CC
    // 0x80802164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800909CC(rdram, ctx);
        goto after_4;
    // 0x80802164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80802168: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080216C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80802170: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80802174: jr          $ra
    // 0x80802178: nop

    return;
    // 0x80802178: nop

;}
RECOMP_FUNC void func_8080217C_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080217C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80802180: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80802184: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80802188: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8080218C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80802190: jal         0x8009EF10
    // 0x80802194: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_8009EF10(rdram, ctx);
        goto after_0;
    // 0x80802194: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_0:
    // 0x80802198: blez        $v0, L_808021A4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8080219C: nop
    
            goto L_808021A4;
    }
    // 0x8080219C: nop

    // 0x808021A0: addiu       $s0, $zero, 0x108
    ctx->r16 = ADD32(0, 0X108);
L_808021A4:
    // 0x808021A4: jal         0x8008E35C
    // 0x808021A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008E35C(rdram, ctx);
        goto after_1;
    // 0x808021A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x808021AC: beq         $v0, $zero, L_808021B8
    if (ctx->r2 == 0) {
        // 0x808021B0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_808021B8;
    }
    // 0x808021B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808021B4: addiu       $s0, $zero, 0x111
    ctx->r16 = ADD32(0, 0X111);
L_808021B8:
    // 0x808021B8: jal         0x80000218
    // 0x808021BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80800218_bstnt(rdram, ctx);
        goto after_2;
    // 0x808021BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x808021C0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808021C4: jal         0x80000F94
    // 0x808021C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    bstnt_entrypoint_4(rdram, ctx);
        goto after_3;
    // 0x808021C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x808021CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808021D0: jal         0x8009E5C8
    // 0x808021D4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x808021D4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x808021D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808021DC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808021E0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808021E4: jr          $ra
    // 0x808021E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x808021E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bstnt_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808021EC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808021F0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(157, 0X25CC) << 16);
    // 0x808021F4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808021F8: jr          $ra
    // 0x808021FC: lw          $v0, 0x25CC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X25CC));
    return;
    // 0x808021FC: lw          $v0, 0x25CC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(157, 0X25CC));
;}
RECOMP_FUNC void func_80800000_bstntswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x80096544
    // 0x8080000C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_80096544(rdram, ctx);
        goto after_0;
    // 0x8080000C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800010: beql        $v0, $zero, L_808000A4
    if (ctx->r2 == 0) {
        // 0x80800014: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_808000A4;
    }
    goto skip_0;
    // 0x80800014: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80800018: jal         0x800DC0C0
    // 0x8080001C: nop

    func_800DC0C0(rdram, ctx);
        goto after_1;
    // 0x8080001C: nop

    after_1:
    // 0x80800020: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800024: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800028: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8080002C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80800030: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800034: nop

    // 0x80800038: bc1f        L_80800050
    if (!c1cs) {
        // 0x8080003C: nop
    
            goto L_80800050;
    }
    // 0x8080003C: nop

    // 0x80800040: jal         0x80092C00
    // 0x80800044: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_80092C00(rdram, ctx);
        goto after_2;
    // 0x80800044: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_2:
    // 0x80800048: b           L_8080005C
    // 0x8080004C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
        goto L_8080005C;
    // 0x8080004C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_80800050:
    // 0x80800050: jal         0x80092C24
    // 0x80800054: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_80092C24(rdram, ctx);
        goto after_3;
    // 0x80800054: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x80800058: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_8080005C:
    // 0x8080005C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80800060: jal         0x8009FBB0
    // 0x80800064: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009FBB0(rdram, ctx);
        goto after_4;
    // 0x80800064: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_4:
    // 0x80800068: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x8080006C: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x80800070: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80800074: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80800078: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080007C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800080: addiu       $a1, $zero, -0x3C
    ctx->r5 = ADD32(0, -0X3C);
    // 0x80800084: addiu       $a2, $zero, -0x64
    ctx->r6 = ADD32(0, -0X64);
    // 0x80800088: addiu       $a3, $zero, -0x3C
    ctx->r7 = ADD32(0, -0X3C);
    // 0x8080008C: jal         0x800BA930
    // 0x80800090: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_800BA930(rdram, ctx);
        goto after_5;
    // 0x80800090: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_5:
    // 0x80800094: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800098: jal         0x800BA22C
    // 0x8080009C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_6;
    // 0x8080009C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x808000A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808000A4:
    // 0x808000A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808000A8: jr          $ra
    // 0x808000AC: nop

    return;
    // 0x808000AC: nop

;}
RECOMP_FUNC void func_808000B0_bstntswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000B8: jal         0x8009EF1C
    // 0x808000BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x808000BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x808000C0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x808000C4: jal         0x8009EF10
    // 0x808000C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x808000C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808000CC: bne         $v0, $zero, L_808000E8
    if (ctx->r2 != 0) {
        // 0x808000D0: lwc1        $f12, 0x1C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_808000E8;
    }
    // 0x808000D0: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x808000D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808000D8: jal         0x8009B9B0
    // 0x808000DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x808000DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x808000E0: b           L_80800108
    // 0x808000E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800108;
    // 0x808000E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808000E8:
    // 0x808000E8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x808000EC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808000F0: jal         0x800F1214
    // 0x808000F4: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x808000F4: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    after_3:
    // 0x808000F8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808000FC: jal         0x8009B9B0
    // 0x80800100: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800100: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800108:
    // 0x80800108: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080010C: jr          $ra
    // 0x80800110: nop

    return;
    // 0x80800110: nop

;}
RECOMP_FUNC void func_80800114_bstntswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800114: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800118: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080011C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800120: jal         0x80083F68
    // 0x80800124: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bstnt_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800124: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080012C: jal         0x8009E6C4
    // 0x80800130: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E6C4(rdram, ctx);
        goto after_1;
    // 0x80800130: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800134: bne         $v0, $zero, L_80800160
    if (ctx->r2 != 0) {
        // 0x80800138: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800160;
    }
    // 0x80800138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080013C: jal         0x8009BCB4
    // 0x80800140: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_2;
    // 0x80800140: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_2:
    // 0x80800144: lui         $a1, 0x4305
    ctx->r5 = S32(0X4305 << 16);
    // 0x80800148: ori         $a1, $a1, 0x547B
    ctx->r5 = ctx->r5 | 0X547B;
    // 0x8080014C: jal         0x8009BCC4
    // 0x80800150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_3;
    // 0x80800150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800158: jal         0x800961AC
    // 0x8080015C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800961AC(rdram, ctx);
        goto after_4;
    // 0x8080015C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
L_80800160:
    // 0x80800160: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800164: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080016C: jr          $ra
    // 0x80800170: nop

    return;
    // 0x80800170: nop

;}
RECOMP_FUNC void func_80800174_bstntswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800174: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800178: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080017C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800180: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800184: jal         0x8009E69C
    // 0x80800188: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E69C(rdram, ctx);
        goto after_0;
    // 0x80800188: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8080018C: bne         $v0, $zero, L_808001B0
    if (ctx->r2 != 0) {
        // 0x80800190: nop
    
            goto L_808001B0;
    }
    // 0x80800190: nop

    // 0x80800194: jal         0x8009BC90
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC90(rdram, ctx);
        goto after_1;
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080019C: jal         0x8009BC6C
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_2;
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808001A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A8: jal         0x800961AC
    // 0x808001AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_3;
    // 0x808001AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_808001B0:
    // 0x808001B0: jal         0x80083F60
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bstnt_entrypoint_2(rdram, ctx);
        goto after_4;
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808001B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808001BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808001C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001C4: jr          $ra
    // 0x808001C8: nop

    return;
    // 0x808001C8: nop

;}
RECOMP_FUNC void func_808001CC_bstntswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001D4: jal         0x8009BC34
    // 0x808001D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC34(rdram, ctx);
        goto after_0;
    // 0x808001D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001E0: jal         0x800961AC
    // 0x808001E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_1;
    // 0x808001E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808001E8: jal         0x80083F60
    // 0x808001EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bstnt_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x808001EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808001F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001F8: jr          $ra
    // 0x808001FC: nop

    return;
    // 0x808001FC: nop

;}
RECOMP_FUNC void func_80800200_bstntswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800200: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800204: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800208: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080020C: jal         0x80083F68
    // 0x80800210: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bstnt_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800210: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800218: jal         0x8009BCB4
    // 0x8080021C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BCB4(rdram, ctx);
        goto after_1;
    // 0x8080021C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80800220: lui         $a1, 0xC3C7
    ctx->r5 = S32(0XC3C7 << 16);
    // 0x80800224: ori         $a1, $a1, 0xFEB8
    ctx->r5 = ctx->r5 | 0XFEB8;
    // 0x80800228: jal         0x8009BCC4
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_2;
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800234: jal         0x800961AC
    // 0x80800238: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800961AC(rdram, ctx);
        goto after_3;
    // 0x80800238: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x8080023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800240: jal         0x8009BC5C
    // 0x80800244: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8009BC5C(rdram, ctx);
        goto after_4;
    // 0x80800244: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_4:
    // 0x80800248: jal         0x800A046C
    // 0x8080024C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A046C(rdram, ctx);
        goto after_5;
    // 0x8080024C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800250: jal         0x800A3298
    // 0x80800254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3298(rdram, ctx);
        goto after_6;
    // 0x80800254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800258: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800260: addiu       $a1, $zero, 0xE7
    ctx->r5 = ADD32(0, 0XE7);
    // 0x80800264: jal         0x8008CB3C
    // 0x80800268: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_7;
    // 0x80800268: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_7:
    // 0x8080026C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80800270: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800274: lui         $at, 0xC496
    ctx->r1 = S32(0XC496 << 16);
    // 0x80800278: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080027C: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800280: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x80800284: lui         $a3, 0xC396
    ctx->r7 = S32(0XC396 << 16);
    // 0x80800288: jal         0x800F10B4
    // 0x8080028C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_8;
    // 0x8080028C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x80800290: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800294: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x80800298: jal         0x8009BA58
    // 0x8080029C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_9;
    // 0x8080029C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808002A0: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x808002A4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808002B0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x808002B4: jal         0x8009FFD8
    // 0x808002B8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_10;
    // 0x808002B8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_10:
    // 0x808002BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808002C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808002C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808002C8: jr          $ra
    // 0x808002CC: nop

    return;
    // 0x808002CC: nop

;}
RECOMP_FUNC void func_808002D0_bstntswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002D0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x808002D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x808002D8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x808002DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808002E0: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x808002E4: jal         0x8009C128
    // 0x808002E8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x808002E8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x808002EC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x808002F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808002F4: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x808002F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002FC: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80800300: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80800304: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x80800308: jal         0x8009FBB0
    // 0x8080030C: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    func_8009FBB0(rdram, ctx);
        goto after_1;
    // 0x8080030C: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x80800310: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x80800314: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x80800318: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x8080031C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80800320: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80800324: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80800328: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080032C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800330: addiu       $a1, $zero, -0x1E
    ctx->r5 = ADD32(0, -0X1E);
    // 0x80800334: addiu       $a2, $zero, -0x1E
    ctx->r6 = ADD32(0, -0X1E);
    // 0x80800338: jal         0x800BA930
    // 0x8080033C: addiu       $a3, $zero, -0x1E
    ctx->r7 = ADD32(0, -0X1E);
    func_800BA930(rdram, ctx);
        goto after_2;
    // 0x8080033C: addiu       $a3, $zero, -0x1E
    ctx->r7 = ADD32(0, -0X1E);
    after_2:
    // 0x80800340: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80800344: jal         0x800BA22C
    // 0x80800348: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_3;
    // 0x80800348: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8080034C: lwc1        $f12, 0x16C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800350: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80800354: nop

    // 0x80800358: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x8080035C: nop

    // 0x80800360: bc1f        L_808003A4
    if (!c1cs) {
        // 0x80800364: nop
    
            goto L_808003A4;
    }
    // 0x80800364: nop

    // 0x80800368: jal         0x800F2100
    // 0x8080036C: nop

    func_800F2100(rdram, ctx);
        goto after_4;
    // 0x8080036C: nop

    after_4:
    // 0x80800370: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(158, 0X9A0) << 16);
    // 0x80800374: lwc1        $f16, 0x9A0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(158, 0X9A0));
    // 0x80800378: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8080037C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800380: mul.s       $f12, $f0, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80800384: jal         0x800F0E00
    // 0x80800388: nop

    func_800F0E00(rdram, ctx);
        goto after_5;
    // 0x80800388: nop

    after_5:
    // 0x8080038C: lwc1        $f18, 0x16C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800394: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x80800398: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
    // 0x8080039C: jal         0x8009BA58
    // 0x808003A0: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009BA58(rdram, ctx);
        goto after_6;
    // 0x808003A0: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_6:
L_808003A4:
    // 0x808003A4: jal         0x8008E078
    // 0x808003A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_7;
    // 0x808003A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808003AC: beq         $v0, $zero, L_808003B8
    if (ctx->r2 == 0) {
        // 0x808003B0: addiu       $t9, $zero, 0x10F
        ctx->r25 = ADD32(0, 0X10F);
            goto L_808003B8;
    }
    // 0x808003B0: addiu       $t9, $zero, 0x10F
    ctx->r25 = ADD32(0, 0X10F);
    // 0x808003B4: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
L_808003B8:
    // 0x808003B8: jal         0x8008E35C
    // 0x808003BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_8;
    // 0x808003BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808003C0: bne         $v0, $zero, L_808003CC
    if (ctx->r2 != 0) {
        // 0x808003C4: addiu       $t0, $zero, 0x10C
        ctx->r8 = ADD32(0, 0X10C);
            goto L_808003CC;
    }
    // 0x808003C4: addiu       $t0, $zero, 0x10C
    ctx->r8 = ADD32(0, 0X10C);
    // 0x808003C8: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
L_808003CC:
    // 0x808003CC: jal         0x8009BB50
    // 0x808003D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_9;
    // 0x808003D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808003D4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x808003D8: addiu       $t1, $zero, 0x10F
    ctx->r9 = ADD32(0, 0X10F);
    // 0x808003DC: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x808003E0: nop

    // 0x808003E4: bc1f        L_808003F0
    if (!c1cs) {
        // 0x808003E8: nop
    
            goto L_808003F0;
    }
    // 0x808003E8: nop

    // 0x808003EC: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
L_808003F0:
    // 0x808003F0: jal         0x80083F70
    // 0x808003F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bstnt_entrypoint_4(rdram, ctx);
        goto after_10;
    // 0x808003F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003FC: jal         0x8009E5C8
    // 0x80800400: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009E5C8(rdram, ctx);
        goto after_11;
    // 0x80800400: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_11:
    // 0x80800404: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80800408: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8080040C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80800410: jr          $ra
    // 0x80800414: nop

    return;
    // 0x80800414: nop

;}
RECOMP_FUNC void bstntswim_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800418: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080041C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(158, 0X9B0) << 16);
    // 0x80800420: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800424: jr          $ra
    // 0x80800428: lw          $v0, 0x9B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(158, 0X9B0));
    return;
    // 0x80800428: lw          $v0, 0x9B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(158, 0X9B0));
;}
RECOMP_FUNC void func_8080042C_bstntswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080042C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800430: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800434: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800438: jal         0x80000114
    // 0x8080043C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800114_bstntswim(rdram, ctx);
        goto after_0;
    // 0x8080043C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800444: addiu       $a1, $zero, 0xE7
    ctx->r5 = ADD32(0, 0XE7);
    // 0x80800448: jal         0x8008CB3C
    // 0x8080044C: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x8080044C: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_1:
    // 0x80800450: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800454: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080045C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800460: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800464: jal         0x8009FFD8
    // 0x80800468: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800468: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x8080046C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800470: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x80800474: jal         0x8009C99C
    // 0x80800478: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x80800478: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_3:
    // 0x8080047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800480: jal         0x8009B9B0
    // 0x80800484: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800484: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800488: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080048C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800490: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800494: jr          $ra
    // 0x80800498: nop

    return;
    // 0x80800498: nop

;}
RECOMP_FUNC void func_8080049C_bstntswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080049C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808004A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808004A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808004A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808004AC: jal         0x8008CABC
    // 0x808004B0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808004B0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x808004B4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x808004B8: jal         0x8001210C
    // 0x808004BC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001210C(rdram, ctx);
        goto after_1;
    // 0x808004BC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x808004C0: bne         $v0, $zero, L_808004F4
    if (ctx->r2 != 0) {
        // 0x808004C4: nop
    
            goto L_808004F4;
    }
    // 0x808004C4: nop

    // 0x808004C8: jal         0x800DC0C0
    // 0x808004CC: nop

    func_800DC0C0(rdram, ctx);
        goto after_2;
    // 0x808004CC: nop

    after_2:
    // 0x808004D0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808004D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808004D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004DC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x808004E0: nop

    // 0x808004E4: bc1f        L_808004F4
    if (!c1cs) {
        // 0x808004E8: nop
    
            goto L_808004F4;
    }
    // 0x808004E8: nop

    // 0x808004EC: jal         0x8009FC34
    // 0x808004F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009FC34(rdram, ctx);
        goto after_3;
    // 0x808004F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_808004F4:
    // 0x808004F4: jal         0x8001210C
    // 0x808004F8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001210C(rdram, ctx);
        goto after_4;
    // 0x808004F8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_4:
    // 0x808004FC: bnel        $v0, $zero, L_80800534
    if (ctx->r2 != 0) {
        // 0x80800500: lui         $a1, 0x3C23
        ctx->r5 = S32(0X3C23 << 16);
            goto L_80800534;
    }
    goto skip_0;
    // 0x80800500: lui         $a1, 0x3C23
    ctx->r5 = S32(0X3C23 << 16);
    skip_0:
    // 0x80800504: jal         0x800DC0C0
    // 0x80800508: nop

    func_800DC0C0(rdram, ctx);
        goto after_5;
    // 0x80800508: nop

    after_5:
    // 0x8080050C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800510: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800514: nop

    // 0x80800518: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8080051C: nop

    // 0x80800520: bc1fl       L_80800534
    if (!c1cs) {
        // 0x80800524: lui         $a1, 0x3C23
        ctx->r5 = S32(0X3C23 << 16);
            goto L_80800534;
    }
    goto skip_1;
    // 0x80800524: lui         $a1, 0x3C23
    ctx->r5 = S32(0X3C23 << 16);
    skip_1:
    // 0x80800528: jal         0x80000000
    // 0x8080052C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bstntswim(rdram, ctx);
        goto after_6;
    // 0x8080052C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800530: lui         $a1, 0x3C23
    ctx->r5 = S32(0X3C23 << 16);
L_80800534:
    // 0x80800534: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    // 0x80800538: jal         0x8008B348
    // 0x8080053C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x8080053C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_7:
    // 0x80800540: beq         $v0, $zero, L_80800570
    if (ctx->r2 == 0) {
        // 0x80800544: lui         $a2, 0x3F59
        ctx->r6 = S32(0X3F59 << 16);
            goto L_80800570;
    }
    // 0x80800544: lui         $a2, 0x3F59
    ctx->r6 = S32(0X3F59 << 16);
    // 0x80800548: lui         $a3, 0x3F93
    ctx->r7 = S32(0X3F93 << 16);
    // 0x8080054C: addiu       $t6, $zero, 0x3E80
    ctx->r14 = ADD32(0, 0X3E80);
    // 0x80800550: addiu       $t7, $zero, 0x3E80
    ctx->r15 = ADD32(0, 0X3E80);
    // 0x80800554: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80800558: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080055C: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x80800560: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800568: jal         0x8009DEC0
    // 0x8080056C: addiu       $a1, $zero, 0x46F
    ctx->r5 = ADD32(0, 0X46F);
    func_8009DEC0(rdram, ctx);
        goto after_8;
    // 0x8080056C: addiu       $a1, $zero, 0x46F
    ctx->r5 = ADD32(0, 0X46F);
    after_8:
L_80800570:
    // 0x80800570: jal         0x8009EF10
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_9;
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800578: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080057C: bne         $v0, $at, L_80800588
    if (ctx->r2 != ctx->r1) {
        // 0x80800580: addiu       $t8, $zero, 0x110
        ctx->r24 = ADD32(0, 0X110);
            goto L_80800588;
    }
    // 0x80800580: addiu       $t8, $zero, 0x110
    ctx->r24 = ADD32(0, 0X110);
    // 0x80800584: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_80800588:
    // 0x80800588: jal         0x8008E35C
    // 0x8080058C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_10;
    // 0x8080058C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800590: bne         $v0, $zero, L_8080059C
    if (ctx->r2 != 0) {
        // 0x80800594: addiu       $t9, $zero, 0x10C
        ctx->r25 = ADD32(0, 0X10C);
            goto L_8080059C;
    }
    // 0x80800594: addiu       $t9, $zero, 0x10C
    ctx->r25 = ADD32(0, 0X10C);
    // 0x80800598: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_8080059C:
    // 0x8080059C: jal         0x80083F90
    // 0x808005A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bstnt_entrypoint_8(rdram, ctx);
        goto after_11;
    // 0x808005A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808005A4: beq         $v0, $zero, L_808005B0
    if (ctx->r2 == 0) {
        // 0x808005A8: addiu       $t0, $zero, 0x10E
        ctx->r8 = ADD32(0, 0X10E);
            goto L_808005B0;
    }
    // 0x808005A8: addiu       $t0, $zero, 0x10E
    ctx->r8 = ADD32(0, 0X10E);
    // 0x808005AC: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_808005B0:
    // 0x808005B0: jal         0x80096500
    // 0x808005B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096500(rdram, ctx);
        goto after_12;
    // 0x808005B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808005B8: beq         $v0, $zero, L_808005D4
    if (ctx->r2 == 0) {
        // 0x808005BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005D4;
    }
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005C0: jal         0x80091A58
    // 0x808005C4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_13;
    // 0x808005C4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_13:
    // 0x808005C8: beq         $v0, $zero, L_808005D4
    if (ctx->r2 == 0) {
        // 0x808005CC: addiu       $t1, $zero, 0x107
        ctx->r9 = ADD32(0, 0X107);
            goto L_808005D4;
    }
    // 0x808005CC: addiu       $t1, $zero, 0x107
    ctx->r9 = ADD32(0, 0X107);
    // 0x808005D0: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_808005D4:
    // 0x808005D4: jal         0x80083F70
    // 0x808005D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bstnt_entrypoint_4(rdram, ctx);
        goto after_14;
    // 0x808005D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808005DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005E0: jal         0x8009E5C8
    // 0x808005E4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_15;
    // 0x808005E4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_15:
    // 0x808005E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808005EC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808005F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808005F4: jr          $ra
    // 0x808005F8: nop

    return;
    // 0x808005F8: nop

;}
RECOMP_FUNC void func_808005FC_bstntswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800600: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800604: jal         0x80000174
    // 0x80800608: nop

    func_80800174_bstntswim(rdram, ctx);
        goto after_0;
    // 0x80800608: nop

    after_0:
    // 0x8080060C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800614: jr          $ra
    // 0x80800618: nop

    return;
    // 0x80800618: nop

;}
RECOMP_FUNC void bstntswim_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080061C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800620: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(158, 0X9C0) << 16);
    // 0x80800624: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800628: jr          $ra
    // 0x8080062C: lw          $v0, 0x9C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(158, 0X9C0));
    return;
    // 0x8080062C: lw          $v0, 0x9C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(158, 0X9C0));
;}
RECOMP_FUNC void func_80800630_bstntswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800630: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800634: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800638: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080063C: jal         0x80000114
    // 0x80800640: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800114_bstntswim(rdram, ctx);
        goto after_0;
    // 0x80800640: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800644: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80800648: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080064C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800650: jal         0x8008CB3C
    // 0x80800654: addiu       $a1, $zero, 0xE8
    ctx->r5 = ADD32(0, 0XE8);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80800654: addiu       $a1, $zero, 0xE8
    ctx->r5 = ADD32(0, 0XE8);
    after_1:
    // 0x80800658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080065C: jal         0x8008CA4C
    // 0x80800660: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008CA4C(rdram, ctx);
        goto after_2;
    // 0x80800660: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80800664: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800668: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x8080066C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800670: jal         0x8008C9BC
    // 0x80800674: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_3;
    // 0x80800674: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_3:
    // 0x80800678: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(158, 0X9A4) << 16);
    // 0x8080067C: lwc1        $f4, 0x9A4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(158, 0X9A4));
    // 0x80800680: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x80800684: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080068C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x80800690: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x80800694: jal         0x8008C9F0
    // 0x80800698: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_4;
    // 0x80800698: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x8080069C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006A0: jal         0x8009C908
    // 0x808006A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009C908(rdram, ctx);
        goto after_5;
    // 0x808006A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006AC: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x808006B0: jal         0x8009C99C
    // 0x808006B4: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_6;
    // 0x808006B4: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_6:
    // 0x808006B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006BC: jal         0x8009D2D8
    // 0x808006C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D2D8(rdram, ctx);
        goto after_7;
    // 0x808006C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x808006C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006C8: jal         0x8009B800
    // 0x808006CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009B800(rdram, ctx);
        goto after_8;
    // 0x808006CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x808006D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808006D4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808006D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808006DC: jr          $ra
    // 0x808006E0: nop

    return;
    // 0x808006E0: nop

;}
RECOMP_FUNC void func_808006E4_bstntswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808006E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808006EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808006F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808006F4: jal         0x8008CABC
    // 0x808006F8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808006F8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808006FC: lui         $a1, 0x3EC2
    ctx->r5 = S32(0X3EC2 << 16);
    // 0x80800700: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800704: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    // 0x80800708: jal         0x8008B348
    // 0x8080070C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B348(rdram, ctx);
        goto after_1;
    // 0x8080070C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800710: beq         $v0, $zero, L_80800720
    if (ctx->r2 == 0) {
        // 0x80800714: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800720;
    }
    // 0x80800714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800718: jal         0x8009FD24
    // 0x8080071C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009FD24(rdram, ctx);
        goto after_2;
    // 0x8080071C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_80800720:
    // 0x80800720: lui         $a1, 0x3F61
    ctx->r5 = S32(0X3F61 << 16);
    // 0x80800724: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    // 0x80800728: jal         0x8008B348
    // 0x8080072C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_3;
    // 0x8080072C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x80800730: beq         $v0, $zero, L_80800740
    if (ctx->r2 == 0) {
        // 0x80800734: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800740;
    }
    // 0x80800734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800738: jal         0x8009FD24
    // 0x8080073C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009FD24(rdram, ctx);
        goto after_4;
    // 0x8080073C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_80800740:
    // 0x80800740: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80800744: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800748: jal         0x8008B348
    // 0x8080074C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_5;
    // 0x8080074C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x80800750: beq         $v0, $zero, L_80800770
    if (ctx->r2 == 0) {
        // 0x80800754: lui         $a2, 0x3F66
        ctx->r6 = S32(0X3F66 << 16);
            goto L_80800770;
    }
    // 0x80800754: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x80800758: lui         $a3, 0x3F8C
    ctx->r7 = S32(0X3F8C << 16);
    // 0x8080075C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800760: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800768: jal         0x8009DE74
    // 0x8080076C: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    func_8009DE74(rdram, ctx);
        goto after_6;
    // 0x8080076C: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    after_6:
L_80800770:
    // 0x80800770: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x80800774: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80800778: jal         0x8008B348
    // 0x8080077C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x8080077C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_7:
    // 0x80800780: beq         $v0, $zero, L_808007A0
    if (ctx->r2 == 0) {
        // 0x80800784: lui         $a2, 0x3F66
        ctx->r6 = S32(0X3F66 << 16);
            goto L_808007A0;
    }
    // 0x80800784: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x80800788: lui         $a3, 0x3F8C
    ctx->r7 = S32(0X3F8C << 16);
    // 0x8080078C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800790: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800798: jal         0x8009DE74
    // 0x8080079C: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    func_8009DE74(rdram, ctx);
        goto after_8;
    // 0x8080079C: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    after_8:
L_808007A0:
    // 0x808007A0: jal         0x800000B0
    // 0x808007A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000B0_bstntswim(rdram, ctx);
        goto after_9;
    // 0x808007A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808007A8: jal         0x8009EF10
    // 0x808007AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_10;
    // 0x808007AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808007B0: bne         $v0, $zero, L_808007BC
    if (ctx->r2 != 0) {
        // 0x808007B4: addiu       $t6, $zero, 0x10F
        ctx->r14 = ADD32(0, 0X10F);
            goto L_808007BC;
    }
    // 0x808007B4: addiu       $t6, $zero, 0x10F
    ctx->r14 = ADD32(0, 0X10F);
    // 0x808007B8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_808007BC:
    // 0x808007BC: jal         0x8008E35C
    // 0x808007C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_11;
    // 0x808007C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808007C4: bne         $v0, $zero, L_808007D0
    if (ctx->r2 != 0) {
        // 0x808007C8: addiu       $t7, $zero, 0x10C
        ctx->r15 = ADD32(0, 0X10C);
            goto L_808007D0;
    }
    // 0x808007C8: addiu       $t7, $zero, 0x10C
    ctx->r15 = ADD32(0, 0X10C);
    // 0x808007CC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_808007D0:
    // 0x808007D0: jal         0x80083F90
    // 0x808007D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bstnt_entrypoint_8(rdram, ctx);
        goto after_12;
    // 0x808007D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808007D8: beq         $v0, $zero, L_808007E4
    if (ctx->r2 == 0) {
        // 0x808007DC: addiu       $t8, $zero, 0x10E
        ctx->r24 = ADD32(0, 0X10E);
            goto L_808007E4;
    }
    // 0x808007DC: addiu       $t8, $zero, 0x10E
    ctx->r24 = ADD32(0, 0X10E);
    // 0x808007E0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_808007E4:
    // 0x808007E4: jal         0x80096500
    // 0x808007E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096500(rdram, ctx);
        goto after_13;
    // 0x808007E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808007EC: beq         $v0, $zero, L_80800808
    if (ctx->r2 == 0) {
        // 0x808007F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800808;
    }
    // 0x808007F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007F4: jal         0x80091A58
    // 0x808007F8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_14;
    // 0x808007F8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_14:
    // 0x808007FC: beq         $v0, $zero, L_80800808
    if (ctx->r2 == 0) {
        // 0x80800800: addiu       $t9, $zero, 0x107
        ctx->r25 = ADD32(0, 0X107);
            goto L_80800808;
    }
    // 0x80800800: addiu       $t9, $zero, 0x107
    ctx->r25 = ADD32(0, 0X107);
    // 0x80800804: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80800808:
    // 0x80800808: jal         0x80083F70
    // 0x8080080C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bstnt_entrypoint_4(rdram, ctx);
        goto after_15;
    // 0x8080080C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800814: jal         0x8009E5C8
    // 0x80800818: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_16;
    // 0x80800818: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_16:
    // 0x8080081C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800820: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800824: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800828: jr          $ra
    // 0x8080082C: nop

    return;
    // 0x8080082C: nop

;}
RECOMP_FUNC void func_80800830_bstntswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800830: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800838: jal         0x80000174
    // 0x8080083C: nop

    func_80800174_bstntswim(rdram, ctx);
        goto after_0;
    // 0x8080083C: nop

    after_0:
    // 0x80800840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800848: jr          $ra
    // 0x8080084C: nop

    return;
    // 0x8080084C: nop

;}
RECOMP_FUNC void bstntswim_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800850: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800854: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(158, 0X9D0) << 16);
    // 0x80800858: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080085C: jr          $ra
    // 0x80800860: lw          $v0, 0x9D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(158, 0X9D0));
    return;
    // 0x80800860: lw          $v0, 0x9D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(158, 0X9D0));
;}
RECOMP_FUNC void func_80800864_bstntswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800864: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800868: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080086C: jal         0x800839B8
    // 0x80800870: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80800870: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800874: jal         0x80000174
    // 0x80800878: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800174_bstntswim(rdram, ctx);
        goto after_1;
    // 0x80800878: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080087C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800884: jr          $ra
    // 0x80800888: nop

    return;
    // 0x80800888: nop

;}
RECOMP_FUNC void func_8080088C_bstntswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080088C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800894: jal         0x80000114
    // 0x80800898: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800114_bstntswim(rdram, ctx);
        goto after_0;
    // 0x80800898: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080089C: jal         0x800839C8
    // 0x808008A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x808008A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808008A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808008A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808008AC: jr          $ra
    // 0x808008B0: nop

    return;
    // 0x808008B0: nop

;}
RECOMP_FUNC void func_808008B4_bstntswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808008B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808008BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808008C0: jal         0x800839E8
    // 0x808008C4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x808008C4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x808008C8: beq         $v0, $zero, L_808008D4
    if (ctx->r2 == 0) {
        // 0x808008CC: addiu       $t6, $zero, 0x10F
        ctx->r14 = ADD32(0, 0X10F);
            goto L_808008D4;
    }
    // 0x808008CC: addiu       $t6, $zero, 0x10F
    ctx->r14 = ADD32(0, 0X10F);
    // 0x808008D0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_808008D4:
    // 0x808008D4: jal         0x80083F70
    // 0x808008D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bstnt_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x808008D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808008DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808008E0: jal         0x8009E5C8
    // 0x808008E4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x808008E4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x808008E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808008EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808008F0: jr          $ra
    // 0x808008F4: nop

    return;
    // 0x808008F4: nop

;}
RECOMP_FUNC void bstntswim_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008F8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808008FC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(158, 0X9E0) << 16);
    // 0x80800900: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800904: jr          $ra
    // 0x80800908: lw          $v0, 0x9E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(158, 0X9E0));
    return;
    // 0x80800908: lw          $v0, 0x9E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(158, 0X9E0));
;}
RECOMP_FUNC void func_8080090C_bstntswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080090C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800910: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800914: jal         0x80000114
    // 0x80800918: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800114_bstntswim(rdram, ctx);
        goto after_0;
    // 0x80800918: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080091C: jal         0x80082FE0
    // 0x80800920: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800920: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080092C: jr          $ra
    // 0x80800930: nop

    return;
    // 0x80800930: nop

;}
RECOMP_FUNC void func_80800934_bstntswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080093C: jal         0x80082FE8
    // 0x80800940: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800940: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800944: jal         0x80083F70
    // 0x80800948: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bstnt_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80800948: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080094C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800950: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800954: jr          $ra
    // 0x80800958: nop

    return;
    // 0x80800958: nop

;}
RECOMP_FUNC void func_8080095C_bstntswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080095C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800960: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800964: jal         0x80082FF0
    // 0x80800968: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800968: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080096C: jal         0x80000174
    // 0x80800970: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800174_bstntswim(rdram, ctx);
        goto after_1;
    // 0x80800970: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800978: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080097C: jr          $ra
    // 0x80800980: nop

    return;
    // 0x80800980: nop

;}
RECOMP_FUNC void bstntswim_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800984: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800988: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(158, 0X9F0) << 16);
    // 0x8080098C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800990: jr          $ra
    // 0x80800994: lw          $v0, 0x9F0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(158, 0X9F0));
    return;
    // 0x80800994: lw          $v0, 0x9F0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(158, 0X9F0));
    // 0x80800998: nop

    // 0x8080099C: nop

;}
RECOMP_FUNC void func_80800000_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80800004: jr          $ra
    // 0x80800008: sw          $t6, 0x168($a0)
    MEM_W(0X168, ctx->r4) = ctx->r14;
    return;
    // 0x80800008: sw          $t6, 0x168($a0)
    MEM_W(0X168, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_8080000C_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080000C: lw          $v0, 0x168($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X168);
    // 0x80800010: blez        $v0, L_8080001C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80800014: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_8080001C;
    }
    // 0x80800014: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80800018: sw          $t6, 0x168($a0)
    MEM_W(0X168, ctx->r4) = ctx->r14;
L_8080001C:
    // 0x8080001C: jr          $ra
    // 0x80800020: nop

    return;
    // 0x80800020: nop

;}
RECOMP_FUNC void func_80800024_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800024: lw          $v0, 0x168($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X168);
    // 0x80800028: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8080002C: jr          $ra
    // 0x80800030: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x80800030: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_80800034_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800034: lw          $v0, 0x164($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X164);
    // 0x80800038: slti        $t6, $v0, 0x4
    ctx->r14 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8080003C: jr          $ra
    // 0x80800040: xori        $v0, $t6, 0x1
    ctx->r2 = ctx->r14 ^ 0X1;
    return;
    // 0x80800040: xori        $v0, $t6, 0x1
    ctx->r2 = ctx->r14 ^ 0X1;
;}
RECOMP_FUNC void func_80800044_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800044: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80800048: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080004C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800050: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800054: jal         0x8009C128
    // 0x80800058: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800058: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x8080005C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800060: jal         0x80096394
    // 0x80800064: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_80096394(rdram, ctx);
        goto after_1;
    // 0x80800064: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x80800068: jal         0x800962D4
    // 0x8080006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800962D4(rdram, ctx);
        goto after_2;
    // 0x8080006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800070: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x80800074: jal         0x80096518
    // 0x80800078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096518(rdram, ctx);
        goto after_3;
    // 0x80800078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080007C: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80800080: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80800084: jal         0x8009BB50
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_4;
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080008C: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x80800090: jal         0x8009650C
    // 0x80800094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009650C(rdram, ctx);
        goto after_5;
    // 0x80800094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800098: beq         $v0, $zero, L_80800128
    if (ctx->r2 == 0) {
        // 0x8080009C: lw          $t7, 0x2C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X2C);
            goto L_80800128;
    }
    // 0x8080009C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x808000A0: beq         $t7, $zero, L_80800128
    if (ctx->r15 == 0) {
        // 0x808000A4: lwc1        $f4, 0x4C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_80800128;
    }
    // 0x808000A4: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x808000A8: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x808000AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808000B0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x808000B4: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x808000B8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x808000BC: nop

    // 0x808000C0: bc1fl       L_8080012C
    if (!c1cs) {
        // 0x808000C4: sw          $zero, 0x164($s0)
        MEM_W(0X164, ctx->r16) = 0;
            goto L_8080012C;
    }
    goto skip_0;
    // 0x808000C4: sw          $zero, 0x164($s0)
    MEM_W(0X164, ctx->r16) = 0;
    skip_0:
    // 0x808000C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808000CC: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x808000D0: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x808000D4: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x808000D8: nop

    // 0x808000DC: bc1fl       L_8080012C
    if (!c1cs) {
        // 0x808000E0: sw          $zero, 0x164($s0)
        MEM_W(0X164, ctx->r16) = 0;
            goto L_8080012C;
    }
    goto skip_1;
    // 0x808000E0: sw          $zero, 0x164($s0)
    MEM_W(0X164, ctx->r16) = 0;
    skip_1:
    // 0x808000E4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x808000E8: nop

    // 0x808000EC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x808000F0: nop

    // 0x808000F4: bc1fl       L_8080012C
    if (!c1cs) {
        // 0x808000F8: sw          $zero, 0x164($s0)
        MEM_W(0X164, ctx->r16) = 0;
            goto L_8080012C;
    }
    goto skip_2;
    // 0x808000F8: sw          $zero, 0x164($s0)
    MEM_W(0X164, ctx->r16) = 0;
    skip_2:
    // 0x808000FC: lw          $t8, 0x164($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X164);
    // 0x80800100: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80800104: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800108: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8080010C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80800110: jal         0x800F13F0
    // 0x80800114: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_800F13F0(rdram, ctx);
        goto after_6;
    // 0x80800114: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_6:
    // 0x80800118: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8080011C: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x80800120: b           L_8080012C
    // 0x80800124: sw          $t1, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->r9;
        goto L_8080012C;
    // 0x80800124: sw          $t1, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->r9;
L_80800128:
    // 0x80800128: sw          $zero, 0x164($s0)
    MEM_W(0X164, ctx->r16) = 0;
L_8080012C:
    // 0x8080012C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800130: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800134: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80800138: jr          $ra
    // 0x8080013C: nop

    return;
    // 0x8080013C: nop

;}
RECOMP_FUNC void func_80800140_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800148: jal         0x80091A58
    // 0x8080014C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x8080014C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x80800150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800158: jr          $ra
    // 0x8080015C: nop

    return;
    // 0x8080015C: nop

;}
RECOMP_FUNC void func_80800160_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800160: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800164: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800168: jal         0x80091A58
    // 0x8080016C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x8080016C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x80800170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800178: jr          $ra
    // 0x8080017C: nop

    return;
    // 0x8080017C: nop

;}
RECOMP_FUNC void func_80800180_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800180: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800184: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800188: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8080018C: jal         0x8009E6EC
    // 0x80800190: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800190: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800194: slti        $at, $v0, 0x2F
    ctx->r1 = SIGNED(ctx->r2) < 0X2F ? 1 : 0;
    // 0x80800198: bne         $at, $zero, L_808001FC
    if (ctx->r1 != 0) {
        // 0x8080019C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808001FC;
    }
    // 0x8080019C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001A0: slti        $at, $v0, 0x7F
    ctx->r1 = SIGNED(ctx->r2) < 0X7F ? 1 : 0;
    // 0x808001A4: bne         $at, $zero, L_808001BC
    if (ctx->r1 != 0) {
        // 0x808001A8: addiu       $at, $zero, 0x91
        ctx->r1 = ADD32(0, 0X91);
            goto L_808001BC;
    }
    // 0x808001A8: addiu       $at, $zero, 0x91
    ctx->r1 = ADD32(0, 0X91);
    // 0x808001AC: beq         $v0, $at, L_80800218
    if (ctx->r2 == ctx->r1) {
        // 0x808001B0: nop
    
            goto L_80800218;
    }
    // 0x808001B0: nop

    // 0x808001B4: b           L_80800234
    // 0x808001B8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
        goto L_80800234;
    // 0x808001B8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
L_808001BC:
    // 0x808001BC: slti        $at, $v0, 0x5D
    ctx->r1 = SIGNED(ctx->r2) < 0X5D ? 1 : 0;
    // 0x808001C0: bne         $at, $zero, L_808001DC
    if (ctx->r1 != 0) {
        // 0x808001C4: addiu       $t6, $v0, -0x4E
        ctx->r14 = ADD32(ctx->r2, -0X4E);
            goto L_808001DC;
    }
    // 0x808001C4: addiu       $t6, $v0, -0x4E
    ctx->r14 = ADD32(ctx->r2, -0X4E);
    // 0x808001C8: addiu       $at, $zero, 0x7E
    ctx->r1 = ADD32(0, 0X7E);
    // 0x808001CC: beq         $v0, $at, L_80800228
    if (ctx->r2 == ctx->r1) {
        // 0x808001D0: addiu       $t7, $zero, 0x2
        ctx->r15 = ADD32(0, 0X2);
            goto L_80800228;
    }
    // 0x808001D0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x808001D4: b           L_80800234
    // 0x808001D8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
        goto L_80800234;
    // 0x808001D8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
L_808001DC:
    // 0x808001DC: sltiu       $at, $t6, 0xF
    ctx->r1 = ctx->r14 < 0XF ? 1 : 0;
    // 0x808001E0: beq         $at, $zero, L_80800230
    if (ctx->r1 == 0) {
        // 0x808001E4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80800230;
    }
    // 0x808001E4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x808001E8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(159, 0X1940) << 16);
    // 0x808001EC: addu        $at, $at, $t6
    gpr jr_addend_808001F4 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x808001F0: lw          $t6, 0x1940($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(159, 0X1940));
    // 0x808001F4: jr          $t6
    // 0x808001F8: nop

    switch (jr_addend_808001F4 >> 2) {
        case 0: goto L_80800218; break;
        case 1: goto L_80800230; break;
        case 2: goto L_80800230; break;
        case 3: goto L_80800218; break;
        case 4: goto L_80800218; break;
        case 5: goto L_80800230; break;
        case 6: goto L_80800230; break;
        case 7: goto L_80800230; break;
        case 8: goto L_80800230; break;
        case 9: goto L_80800230; break;
        case 10: goto L_80800230; break;
        case 11: goto L_80800218; break;
        case 12: goto L_80800218; break;
        case 13: goto L_80800218; break;
        case 14: goto L_80800218; break;
        default: switch_error(__func__, 0x808001F4, 0x80801940);
    }
    // 0x808001F8: nop

L_808001FC:
    // 0x808001FC: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x80800200: beq         $v0, $at, L_80800218
    if (ctx->r2 == ctx->r1) {
        // 0x80800204: addiu       $at, $zero, 0x21
        ctx->r1 = ADD32(0, 0X21);
            goto L_80800218;
    }
    // 0x80800204: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x80800208: beq         $v0, $at, L_80800218
    if (ctx->r2 == ctx->r1) {
        // 0x8080020C: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_80800218;
    }
    // 0x8080020C: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x80800210: bnel        $v0, $at, L_80800234
    if (ctx->r2 != ctx->r1) {
        // 0x80800214: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_80800234;
    }
    goto skip_0;
    // 0x80800214: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_80800218:
    // 0x80800218: jal         0x8009E830
    // 0x8080021C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E830(rdram, ctx);
        goto after_1;
    // 0x8080021C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800220: b           L_80800240
    // 0x80800224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800240;
    // 0x80800224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800228:
    // 0x80800228: b           L_8080023C
    // 0x8080022C: sb          $t7, 0x15D($a0)
    MEM_B(0X15D, ctx->r4) = ctx->r15;
        goto L_8080023C;
    // 0x8080022C: sb          $t7, 0x15D($a0)
    MEM_B(0X15D, ctx->r4) = ctx->r15;
L_80800230:
    // 0x80800230: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
L_80800234:
    // 0x80800234: jalr        $t9
    // 0x80800238: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80800238: nop

    after_2:
L_8080023C:
    // 0x8080023C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800240:
    // 0x80800240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800244: jr          $ra
    // 0x80800248: nop

    return;
    // 0x80800248: nop

;}
RECOMP_FUNC void func_8080024C_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080024C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800250: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800254: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80800258: jal         0x80000180
    // 0x8080025C: addiu       $a1, $a1, -0x646C
    ctx->r5 = ADD32(ctx->r5, -0X646C);
    func_80800180_bstrexlarge(rdram, ctx);
        goto after_0;
    // 0x8080025C: addiu       $a1, $a1, -0x646C
    ctx->r5 = ADD32(ctx->r5, -0X646C);
    after_0:
    // 0x80800260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800264: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800268: jr          $ra
    // 0x8080026C: nop

    return;
    // 0x8080026C: nop

;}
RECOMP_FUNC void func_80800270_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800270: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800274: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800278: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8080027C: jal         0x80000180
    // 0x80800280: addiu       $a1, $a1, 0x2FF8
    ctx->r5 = ADD32(ctx->r5, 0X2FF8);
    func_80800180_bstrexlarge(rdram, ctx);
        goto after_0;
    // 0x80800280: addiu       $a1, $a1, 0x2FF8
    ctx->r5 = ADD32(ctx->r5, 0X2FF8);
    after_0:
    // 0x80800284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080028C: jr          $ra
    // 0x80800290: nop

    return;
    // 0x80800290: nop

;}
RECOMP_FUNC void func_80800294_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800298: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080029C: jal         0x8009E6EC
    // 0x808002A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x808002A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808002A4: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x808002A8: beq         $v0, $at, L_808002D0
    if (ctx->r2 == ctx->r1) {
        // 0x808002AC: addiu       $at, $zero, 0x1D
        ctx->r1 = ADD32(0, 0X1D);
            goto L_808002D0;
    }
    // 0x808002AC: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x808002B0: beq         $v0, $at, L_808002D0
    if (ctx->r2 == ctx->r1) {
        // 0x808002B4: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_808002D0;
    }
    // 0x808002B4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x808002B8: beq         $v0, $at, L_808002D0
    if (ctx->r2 == ctx->r1) {
        // 0x808002BC: addiu       $at, $zero, 0x25
        ctx->r1 = ADD32(0, 0X25);
            goto L_808002D0;
    }
    // 0x808002BC: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x808002C0: beql        $v0, $at, L_808002D4
    if (ctx->r2 == ctx->r1) {
        // 0x808002C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808002D4;
    }
    goto skip_0;
    // 0x808002C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808002C8: jal         0x8000024C
    // 0x808002CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080024C_bstrexlarge(rdram, ctx);
        goto after_1;
    // 0x808002CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
L_808002D0:
    // 0x808002D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808002D4:
    // 0x808002D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002D8: jr          $ra
    // 0x808002DC: nop

    return;
    // 0x808002DC: nop

;}
RECOMP_FUNC void func_808002E0_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808002E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808002EC: beq         $a2, $zero, L_80800304
    if (ctx->r6 == 0) {
        // 0x808002F0: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_80800304;
    }
    // 0x808002F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x808002F4: jal         0x80000024
    // 0x808002F8: nop

    func_80800024_bstrexlarge(rdram, ctx);
        goto after_0;
    // 0x808002F8: nop

    after_0:
    // 0x808002FC: b           L_8080030C
    // 0x80800300: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
        goto L_8080030C;
    // 0x80800300: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
L_80800304:
    // 0x80800304: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800308: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
L_8080030C:
    // 0x8080030C: jal         0x8009EF10
    // 0x80800310: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x80800310: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800314: beq         $v0, $zero, L_8080033C
    if (ctx->r2 == 0) {
        // 0x80800318: addiu       $v1, $zero, 0x151
        ctx->r3 = ADD32(0, 0X151);
            goto L_8080033C;
    }
    // 0x80800318: addiu       $v1, $zero, 0x151
    ctx->r3 = ADD32(0, 0X151);
    // 0x8080031C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800320: beq         $v0, $at, L_80800344
    if (ctx->r2 == ctx->r1) {
        // 0x80800324: addiu       $v1, $zero, 0x152
        ctx->r3 = ADD32(0, 0X152);
            goto L_80800344;
    }
    // 0x80800324: addiu       $v1, $zero, 0x152
    ctx->r3 = ADD32(0, 0X152);
    // 0x80800328: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080032C: beq         $v0, $at, L_8080034C
    if (ctx->r2 == ctx->r1) {
        // 0x80800330: addiu       $t7, $zero, 0x150
        ctx->r15 = ADD32(0, 0X150);
            goto L_8080034C;
    }
    // 0x80800330: addiu       $t7, $zero, 0x150
    ctx->r15 = ADD32(0, 0X150);
    // 0x80800334: b           L_80800350
    // 0x80800338: nop

        goto L_80800350;
    // 0x80800338: nop

L_8080033C:
    // 0x8080033C: b           L_80800350
    // 0x80800340: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
        goto L_80800350;
    // 0x80800340: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
L_80800344:
    // 0x80800344: b           L_80800350
    // 0x80800348: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
        goto L_80800350;
    // 0x80800348: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
L_8080034C:
    // 0x8080034C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_80800350:
    // 0x80800350: jal         0x8009E6F8
    // 0x80800354: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E6F8(rdram, ctx);
        goto after_2;
    // 0x80800354: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800358: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8080035C: beq         $v0, $v1, L_80800368
    if (ctx->r2 == ctx->r3) {
        // 0x80800360: nop
    
            goto L_80800368;
    }
    // 0x80800360: nop

    // 0x80800364: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
L_80800368:
    // 0x80800368: jal         0x80000140
    // 0x8080036C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80800140_bstrexlarge(rdram, ctx);
        goto after_3;
    // 0x8080036C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x80800370: beq         $v0, $zero, L_8080037C
    if (ctx->r2 == 0) {
        // 0x80800374: addiu       $t8, $zero, 0x14F
        ctx->r24 = ADD32(0, 0X14F);
            goto L_8080037C;
    }
    // 0x80800374: addiu       $t8, $zero, 0x14F
    ctx->r24 = ADD32(0, 0X14F);
    // 0x80800378: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_8080037C:
    // 0x8080037C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80800380: beq         $t9, $zero, L_8080039C
    if (ctx->r25 == 0) {
        // 0x80800384: nop
    
            goto L_8080039C;
    }
    // 0x80800384: nop

    // 0x80800388: jal         0x8008DD04
    // 0x8080038C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008DD04(rdram, ctx);
        goto after_4;
    // 0x8080038C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800390: beq         $v0, $zero, L_8080039C
    if (ctx->r2 == 0) {
        // 0x80800394: addiu       $t0, $zero, 0x14A
        ctx->r8 = ADD32(0, 0X14A);
            goto L_8080039C;
    }
    // 0x80800394: addiu       $t0, $zero, 0x14A
    ctx->r8 = ADD32(0, 0X14A);
    // 0x80800398: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_8080039C:
    // 0x8080039C: jal         0x80000160
    // 0x808003A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80800160_bstrexlarge(rdram, ctx);
        goto after_5;
    // 0x808003A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x808003A4: beq         $v0, $zero, L_808003B0
    if (ctx->r2 == 0) {
        // 0x808003A8: addiu       $t1, $zero, 0x14B
        ctx->r9 = ADD32(0, 0X14B);
            goto L_808003B0;
    }
    // 0x808003A8: addiu       $t1, $zero, 0x14B
    ctx->r9 = ADD32(0, 0X14B);
    // 0x808003AC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_808003B0:
    // 0x808003B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003B4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x808003B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808003BC: jr          $ra
    // 0x808003C0: nop

    return;
    // 0x808003C0: nop

;}
RECOMP_FUNC void func_808003C4_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808003C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003CC: beq         $a2, $zero, L_808003E8
    if (ctx->r6 == 0) {
        // 0x808003D0: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_808003E8;
    }
    // 0x808003D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808003D4: jal         0x80000024
    // 0x808003D8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80800024_bstrexlarge(rdram, ctx);
        goto after_0;
    // 0x808003D8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x808003DC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x808003E0: b           L_808003F0
    // 0x808003E4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
        goto L_808003F0;
    // 0x808003E4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_808003E8:
    // 0x808003E8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808003EC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_808003F0:
    // 0x808003F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808003F4: jal         0x8009EF10
    // 0x808003F8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x808003F8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_1:
    // 0x808003FC: beq         $v0, $zero, L_8080042C
    if (ctx->r2 == 0) {
        // 0x80800400: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_8080042C;
    }
    // 0x80800400: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80800404: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800408: beq         $v0, $at, L_80800420
    if (ctx->r2 == ctx->r1) {
        // 0x8080040C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800420;
    }
    // 0x8080040C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800410: beql        $v0, $at, L_8080042C
    if (ctx->r2 == ctx->r1) {
        // 0x80800414: addiu       $a1, $zero, 0x150
        ctx->r5 = ADD32(0, 0X150);
            goto L_8080042C;
    }
    goto skip_0;
    // 0x80800414: addiu       $a1, $zero, 0x150
    ctx->r5 = ADD32(0, 0X150);
    skip_0:
    // 0x80800418: b           L_80800430
    // 0x8080041C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_80800430;
    // 0x8080041C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_80800420:
    // 0x80800420: b           L_8080042C
    // 0x80800424: addiu       $a1, $zero, 0x152
    ctx->r5 = ADD32(0, 0X152);
        goto L_8080042C;
    // 0x80800424: addiu       $a1, $zero, 0x152
    ctx->r5 = ADD32(0, 0X152);
    // 0x80800428: addiu       $a1, $zero, 0x150
    ctx->r5 = ADD32(0, 0X150);
L_8080042C:
    // 0x8080042C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_80800430:
    // 0x80800430: jal         0x80097AD0
    // 0x80800434: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80097AD0(rdram, ctx);
        goto after_2;
    // 0x80800434: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_2:
    // 0x80800438: beq         $v0, $zero, L_8080044C
    if (ctx->r2 == 0) {
        // 0x8080043C: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_8080044C;
    }
    // 0x8080043C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80800440: jal         0x800848A8
    // 0x80800444: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _badrone_entrypoint_24(rdram, ctx);
        goto after_3;
    // 0x80800444: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x80800448: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8080044C:
    // 0x8080044C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800450: jal         0x80000140
    // 0x80800454: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80800140_bstrexlarge(rdram, ctx);
        goto after_4;
    // 0x80800454: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_4:
    // 0x80800458: beq         $v0, $zero, L_80800464
    if (ctx->r2 == 0) {
        // 0x8080045C: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_80800464;
    }
    // 0x8080045C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80800460: addiu       $a1, $zero, 0x14F
    ctx->r5 = ADD32(0, 0X14F);
L_80800464:
    // 0x80800464: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80800468: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080046C: beql        $t7, $zero, L_8080048C
    if (ctx->r15 == 0) {
        // 0x80800470: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8080048C;
    }
    goto skip_1;
    // 0x80800470: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    skip_1:
    // 0x80800474: jal         0x8008DD04
    // 0x80800478: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8008DD04(rdram, ctx);
        goto after_5;
    // 0x80800478: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_5:
    // 0x8080047C: beq         $v0, $zero, L_80800488
    if (ctx->r2 == 0) {
        // 0x80800480: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_80800488;
    }
    // 0x80800480: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80800484: addiu       $a1, $zero, 0x14A
    ctx->r5 = ADD32(0, 0X14A);
L_80800488:
    // 0x80800488: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_8080048C:
    // 0x8080048C: jal         0x80000160
    // 0x80800490: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80800160_bstrexlarge(rdram, ctx);
        goto after_6;
    // 0x80800490: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_6:
    // 0x80800494: beq         $v0, $zero, L_808004A0
    if (ctx->r2 == 0) {
        // 0x80800498: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_808004A0;
    }
    // 0x80800498: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8080049C: addiu       $a1, $zero, 0x14B
    ctx->r5 = ADD32(0, 0X14B);
L_808004A0:
    // 0x808004A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808004A8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x808004AC: jr          $ra
    // 0x808004B0: nop

    return;
    // 0x808004B0: nop

;}
RECOMP_FUNC void func_808004B4_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808004B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808004BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808004C0: jal         0x8009EF1C
    // 0x808004C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x808004C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808004C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004CC: jal         0x8009EF10
    // 0x808004D0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x808004D0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x808004D4: beq         $v0, $zero, L_808004F8
    if (ctx->r2 == 0) {
        // 0x808004D8: lwc1        $f12, 0x24($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
            goto L_808004F8;
    }
    // 0x808004D8: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x808004DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808004E0: beq         $v0, $at, L_8080050C
    if (ctx->r2 == ctx->r1) {
        // 0x808004E4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8080050C;
    }
    // 0x808004E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808004E8: beql        $v0, $at, L_80800534
    if (ctx->r2 == ctx->r1) {
        // 0x808004EC: lui         $at, 0x43C8
        ctx->r1 = S32(0X43C8 << 16);
            goto L_80800534;
    }
    goto skip_0;
    // 0x808004EC: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    skip_0:
    // 0x808004F0: b           L_80800550
    // 0x808004F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800550;
    // 0x808004F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808004F8:
    // 0x808004F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004FC: jal         0x8009B9B0
    // 0x80800500: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800500: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800504: b           L_80800550
    // 0x80800508: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800550;
    // 0x80800508: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080050C:
    // 0x8080050C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80800510: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800514: jal         0x800F1214
    // 0x80800518: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x80800518: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    after_3:
    // 0x8080051C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800520: jal         0x8009B9B0
    // 0x80800524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800528: b           L_80800550
    // 0x8080052C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800550;
    // 0x8080052C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800530: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
L_80800534:
    // 0x80800534: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800538: jal         0x800F1214
    // 0x8080053C: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    func_800F1214(rdram, ctx);
        goto after_5;
    // 0x8080053C: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    after_5:
    // 0x80800540: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800544: jal         0x8009B9B0
    // 0x80800548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_6;
    // 0x80800548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080054C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800550:
    // 0x80800550: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800554: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800558: jr          $ra
    // 0x8080055C: nop

    return;
    // 0x8080055C: nop

;}
RECOMP_FUNC void func_80800560_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800564: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800568: jal         0x8000064C
    // 0x8080056C: nop

    bstrexlarge_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080056C: nop

    after_0:
    // 0x80800570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800574: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800578: jr          $ra
    // 0x8080057C: nop

    return;
    // 0x8080057C: nop

;}
RECOMP_FUNC void func_80800580_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800580: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800584: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800588: jal         0x800006F0
    // 0x8080058C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    bstrexlarge_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x8080058C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800590: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800594: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800598: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080059C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808005A0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x808005A4: jal         0x8009FFD8
    // 0x808005A8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x808005A8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x808005AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808005B0: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x808005B4: jal         0x8009C99C
    // 0x808005B8: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    func_8009C99C(rdram, ctx);
        goto after_2;
    // 0x808005B8: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    after_2:
    // 0x808005BC: jal         0x80000000
    // 0x808005C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80800000_bstrexlarge(rdram, ctx);
        goto after_3;
    // 0x808005C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x808005C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808005C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808005CC: jr          $ra
    // 0x808005D0: nop

    return;
    // 0x808005D0: nop

;}
RECOMP_FUNC void func_808005D4_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808005D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808005DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808005E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808005E4: jal         0x8000000C
    // 0x808005E8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8080000C_bstrexlarge(rdram, ctx);
        goto after_0;
    // 0x808005E8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808005EC: jal         0x8000081C
    // 0x808005F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bstrexlarge_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x808005F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808005F4: jal         0x8008CAEC
    // 0x808005F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_2;
    // 0x808005F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808005FC: beq         $v0, $zero, L_8080060C
    if (ctx->r2 == 0) {
        // 0x80800600: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080060C;
    }
    // 0x80800600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800604: addiu       $t6, $zero, 0x151
    ctx->r14 = ADD32(0, 0X151);
    // 0x80800608: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_8080060C:
    // 0x8080060C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80800610: jal         0x800003C4
    // 0x80800614: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_808003C4_bstrexlarge(rdram, ctx);
        goto after_3;
    // 0x80800614: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80800618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080061C: jal         0x8009E5C8
    // 0x80800620: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x80800620: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_4:
    // 0x80800624: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800628: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080062C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800630: jr          $ra
    // 0x80800634: nop

    return;
    // 0x80800634: nop

;}
RECOMP_FUNC void bstrexlarge_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800638: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080063C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(159, 0X1990) << 16);
    // 0x80800640: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800644: jr          $ra
    // 0x80800648: lw          $v0, 0x1990($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X1990));
    return;
    // 0x80800648: lw          $v0, 0x1990($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X1990));
;}
RECOMP_FUNC void bstrexlarge_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080064C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800650: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800654: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800658: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080065C: jal         0x8009E74C
    // 0x80800660: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x80800660: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_0:
    // 0x80800664: bnel        $v0, $zero, L_808006E0
    if (ctx->r2 != 0) {
        // 0x80800668: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808006E0;
    }
    goto skip_0;
    // 0x80800668: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8080066C: jal         0x8009EF60
    // 0x80800670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF60(rdram, ctx);
        goto after_1;
    // 0x80800670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800674: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800678: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8080067C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800680: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800684: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800688: jal         0x800A4D6C
    // 0x8080068C: nop

    func_800A4D6C(rdram, ctx);
        goto after_2;
    // 0x8080068C: nop

    after_2:
    // 0x80800690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800694: jal         0x80092864
    // 0x80800698: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_80092864(rdram, ctx);
        goto after_3;
    // 0x80800698: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_3:
    // 0x8080069C: jal         0x8009E474
    // 0x808006A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E474(rdram, ctx);
        goto after_4;
    // 0x808006A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808006A4: jal         0x80095A40
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095A40(rdram, ctx);
        goto after_5;
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808006AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006B0: jal         0x8009590C
    // 0x808006B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009590C(rdram, ctx);
        goto after_6;
    // 0x808006B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x808006B8: jal         0x8009BC6C
    // 0x808006BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_7;
    // 0x808006BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808006C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006C4: jal         0x80095964
    // 0x808006C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80095964(rdram, ctx);
        goto after_8;
    // 0x808006C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x808006CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808006D4: jal         0x800947EC
    // 0x808006D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_9;
    // 0x808006D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x808006DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808006E0:
    // 0x808006E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808006E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808006E8: jr          $ra
    // 0x808006EC: nop

    return;
    // 0x808006EC: nop

;}
RECOMP_FUNC void bstrexlarge_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808006F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808006F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808006FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800700: jal         0x8009E77C
    // 0x80800704: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8009E77C(rdram, ctx);
        goto after_0;
    // 0x80800704: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_0:
    // 0x80800708: bnel        $v0, $zero, L_8080080C
    if (ctx->r2 != 0) {
        // 0x8080070C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8080080C;
    }
    goto skip_0;
    // 0x8080070C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800710: jal         0x8009EFA8
    // 0x80800714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EFA8(rdram, ctx);
        goto after_1;
    // 0x80800714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800718: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x8080071C: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800724: jal         0x8009F1C8
    // 0x80800728: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_2;
    // 0x80800728: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8080072C: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x80800730: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800738: jal         0x8009F1C8
    // 0x8080073C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009F1C8(rdram, ctx);
        goto after_3;
    // 0x8080073C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80800740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800744: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800748: jal         0x8009F1C8
    // 0x8080074C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_4;
    // 0x8080074C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_4:
    // 0x80800750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800754: lui         $a1, 0x3FE0
    ctx->r5 = S32(0X3FE0 << 16);
    // 0x80800758: jal         0x800A4D6C
    // 0x8080075C: lui         $a2, 0x3F40
    ctx->r6 = S32(0X3F40 << 16);
    func_800A4D6C(rdram, ctx);
        goto after_5;
    // 0x8080075C: lui         $a2, 0x3F40
    ctx->r6 = S32(0X3F40 << 16);
    after_5:
    // 0x80800760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800764: jal         0x80092864
    // 0x80800768: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_80092864(rdram, ctx);
        goto after_6;
    // 0x80800768: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_6:
    // 0x8080076C: jal         0x8009E4AC
    // 0x80800770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_7;
    // 0x80800770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800778: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8080077C: jal         0x8009E55C
    // 0x80800780: lui         $a2, 0x4334
    ctx->r6 = S32(0X4334 << 16);
    func_8009E55C(rdram, ctx);
        goto after_8;
    // 0x80800780: lui         $a2, 0x4334
    ctx->r6 = S32(0X4334 << 16);
    after_8:
    // 0x80800784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800788: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8080078C: jal         0x8009E53C
    // 0x80800790: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E53C(rdram, ctx);
        goto after_9;
    // 0x80800790: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_9:
    // 0x80800794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800798: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080079C: jal         0x8009E55C
    // 0x808007A0: lui         $a2, 0x4370
    ctx->r6 = S32(0X4370 << 16);
    func_8009E55C(rdram, ctx);
        goto after_10;
    // 0x808007A0: lui         $a2, 0x4370
    ctx->r6 = S32(0X4370 << 16);
    after_10:
    // 0x808007A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808007AC: jal         0x8009E53C
    // 0x808007B0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E53C(rdram, ctx);
        goto after_11;
    // 0x808007B0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_11:
    // 0x808007B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007B8: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    // 0x808007BC: jal         0x800959C8
    // 0x808007C0: lui         $a2, 0x4387
    ctx->r6 = S32(0X4387 << 16);
    func_800959C8(rdram, ctx);
        goto after_12;
    // 0x808007C0: lui         $a2, 0x4387
    ctx->r6 = S32(0X4387 << 16);
    after_12:
    // 0x808007C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007C8: jal         0x8009590C
    // 0x808007CC: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    func_8009590C(rdram, ctx);
        goto after_13;
    // 0x808007CC: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    after_13:
    // 0x808007D0: lui         $a1, 0xC53B
    ctx->r5 = S32(0XC53B << 16);
    // 0x808007D4: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x808007D8: jal         0x8009BCB4
    // 0x808007DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCB4(rdram, ctx);
        goto after_14;
    // 0x808007DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808007E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007E4: jal         0x80095964
    // 0x808007E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80095964(rdram, ctx);
        goto after_15;
    // 0x808007E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x808007EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808007F4: jal         0x800947EC
    // 0x808007F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_16;
    // 0x808007F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_16:
    // 0x808007FC: sb          $zero, 0x15D($s0)
    MEM_B(0X15D, ctx->r16) = 0;
    // 0x80800800: sb          $zero, 0x15E($s0)
    MEM_B(0X15E, ctx->r16) = 0;
    // 0x80800804: sw          $zero, 0x164($s0)
    MEM_W(0X164, ctx->r16) = 0;
    // 0x80800808: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080080C:
    // 0x8080080C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800810: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800814: jr          $ra
    // 0x80800818: nop

    return;
    // 0x80800818: nop

;}
RECOMP_FUNC void bstrexlarge_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080081C: lbu         $v0, 0x15D($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X15D);
    // 0x80800820: beq         $v0, $zero, L_8080082C
    if (ctx->r2 == 0) {
        // 0x80800824: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_8080082C;
    }
    // 0x80800824: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80800828: sb          $t6, 0x15D($a0)
    MEM_B(0X15D, ctx->r4) = ctx->r14;
L_8080082C:
    // 0x8080082C: jr          $ra
    // 0x80800830: nop

    return;
    // 0x80800830: nop

;}
RECOMP_FUNC void func_80800834_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800834: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800838: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080083C: jal         0x8000064C
    // 0x80800840: nop

    bstrexlarge_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800840: nop

    after_0:
    // 0x80800844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080084C: jr          $ra
    // 0x80800850: nop

    return;
    // 0x80800850: nop

;}
RECOMP_FUNC void func_80800854_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800854: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800858: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080085C: jal         0x800006F0
    // 0x80800860: nop

    bstrexlarge_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800860: nop

    after_0:
    // 0x80800864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080086C: jr          $ra
    // 0x80800870: nop

    return;
    // 0x80800870: nop

;}
RECOMP_FUNC void func_80800874_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800874: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080087C: jal         0x8000081C
    // 0x80800880: nop

    bstrexlarge_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800880: nop

    after_0:
    // 0x80800884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080088C: jr          $ra
    // 0x80800890: nop

    return;
    // 0x80800890: nop

;}
RECOMP_FUNC void bstrexlarge_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800894: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800898: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(159, 0X19A0) << 16);
    // 0x8080089C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808008A0: jr          $ra
    // 0x808008A4: lw          $v0, 0x19A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X19A0));
    return;
    // 0x808008A4: lw          $v0, 0x19A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X19A0));
;}
RECOMP_FUNC void func_808008A8_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808008AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808008B0: jal         0x8000064C
    // 0x808008B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstrexlarge_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808008B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808008B8: jal         0x80082FF0
    // 0x808008BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x808008BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808008C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808008C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808008C8: jr          $ra
    // 0x808008CC: nop

    return;
    // 0x808008CC: nop

;}
RECOMP_FUNC void func_808008D0_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808008D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808008D8: jal         0x800006F0
    // 0x808008DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstrexlarge_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808008DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808008E0: jal         0x80082FE0
    // 0x808008E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x808008E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808008E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808008EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808008F0: jr          $ra
    // 0x808008F4: nop

    return;
    // 0x808008F4: nop

;}
RECOMP_FUNC void func_808008F8_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808008FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800900: jal         0x80082FE8
    // 0x80800904: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800904: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800908: jal         0x8000081C
    // 0x8080090C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstrexlarge_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x8080090C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800918: jr          $ra
    // 0x8080091C: nop

    return;
    // 0x8080091C: nop

;}
RECOMP_FUNC void bstrexlarge_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800920: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800924: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(159, 0X19B0) << 16);
    // 0x80800928: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080092C: jr          $ra
    // 0x80800930: lw          $v0, 0x19B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X19B0));
    return;
    // 0x80800930: lw          $v0, 0x19B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X19B0));
;}
RECOMP_FUNC void func_80800934_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800934: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800938: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080093C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800940: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800944: jal         0x8008CABC
    // 0x80800948: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800948: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8080094C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80800950: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800954: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800958: beq         $v1, $at, L_80800970
    if (ctx->r3 == ctx->r1) {
        // 0x8080095C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800970;
    }
    // 0x8080095C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800960: beq         $v1, $at, L_808009D0
    if (ctx->r3 == ctx->r1) {
        // 0x80800964: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808009D0;
    }
    // 0x80800964: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800968: b           L_808009E8
    // 0x8080096C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
        goto L_808009E8;
    // 0x8080096C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
L_80800970:
    // 0x80800970: jal         0x8008AF24
    // 0x80800974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80800974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080097C: jal         0x8008AED4
    // 0x80800980: addiu       $a1, $zero, 0x1D1
    ctx->r5 = ADD32(0, 0X1D1);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x80800980: addiu       $a1, $zero, 0x1D1
    ctx->r5 = ADD32(0, 0X1D1);
    after_2:
    // 0x80800984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800988: jal         0x8008B1BC
    // 0x8080098C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x8080098C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_3:
    // 0x80800990: lui         $a2, 0x3F37
    ctx->r6 = S32(0X3F37 << 16);
    // 0x80800994: ori         $a2, $a2, 0xA3D
    ctx->r6 = ctx->r6 | 0XA3D;
    // 0x80800998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080099C: jal         0x8008B1D4
    // 0x808009A0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_4;
    // 0x808009A0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x808009A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009A8: jal         0x8008B134
    // 0x808009AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x808009AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x808009B0: lui         $a1, 0x3EE6
    ctx->r5 = S32(0X3EE6 << 16);
    // 0x808009B4: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x808009B8: jal         0x8008B24C
    // 0x808009BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_6;
    // 0x808009BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808009C0: jal         0x8008B064
    // 0x808009C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x808009C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808009C8: b           L_808009E4
    // 0x808009CC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
        goto L_808009E4;
    // 0x808009CC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_808009D0:
    // 0x808009D0: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x808009D4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808009D8: jal         0x8008CF1C
    // 0x808009DC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_8;
    // 0x808009DC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_8:
    // 0x808009E0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_808009E4:
    // 0x808009E4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
L_808009E8:
    // 0x808009E8: sb          $v1, 0x15C($t6)
    MEM_B(0X15C, ctx->r14) = ctx->r3;
    // 0x808009EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808009F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808009F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808009F8: jr          $ra
    // 0x808009FC: nop

    return;
    // 0x808009FC: nop

;}
RECOMP_FUNC void func_80800A00_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800A04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A08: jal         0x8000064C
    // 0x80800A0C: nop

    bstrexlarge_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800A0C: nop

    after_0:
    // 0x80800A10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A18: jr          $ra
    // 0x80800A1C: nop

    return;
    // 0x80800A1C: nop

;}
RECOMP_FUNC void func_80800A20_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800A24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A28: jal         0x800006F0
    // 0x80800A2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstrexlarge_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800A2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800A30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800A34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800A38: jal         0x80000934
    // 0x80800A3C: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
    func_80800934_bstrexlarge(rdram, ctx);
        goto after_1;
    // 0x80800A3C: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
    after_1:
    // 0x80800A40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A48: jr          $ra
    // 0x80800A4C: nop

    return;
    // 0x80800A4C: nop

;}
RECOMP_FUNC void func_80800A50_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800A54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800A58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800A5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800A60: jal         0x8000081C
    // 0x80800A64: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    bstrexlarge_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800A64: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800A68: jal         0x800004B4
    // 0x80800A6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004B4_bstrexlarge(rdram, ctx);
        goto after_1;
    // 0x80800A6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800A70: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
    // 0x80800A74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A7C: beq         $v0, $at, L_80800A94
    if (ctx->r2 == ctx->r1) {
        // 0x80800A80: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800A94;
    }
    // 0x80800A80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800A84: beq         $v0, $at, L_80800AB4
    if (ctx->r2 == ctx->r1) {
        // 0x80800A88: nop
    
            goto L_80800AB4;
    }
    // 0x80800A88: nop

    // 0x80800A8C: b           L_80800AFC
    // 0x80800A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800AFC;
    // 0x80800A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800A94:
    // 0x80800A94: jal         0x8008DF8C
    // 0x80800A98: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_2;
    // 0x80800A98: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_2:
    // 0x80800A9C: beq         $v0, $zero, L_80800AF8
    if (ctx->r2 == 0) {
        // 0x80800AA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800AF8;
    }
    // 0x80800AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AA4: jal         0x80000934
    // 0x80800AA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800934_bstrexlarge(rdram, ctx);
        goto after_3;
    // 0x80800AA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80800AAC: b           L_80800AFC
    // 0x80800AB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800AFC;
    // 0x80800AB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800AB4:
    // 0x80800AB4: jal         0x80000044
    // 0x80800AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800044_bstrexlarge(rdram, ctx);
        goto after_4;
    // 0x80800AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800ABC: jal         0x8008E078
    // 0x80800AC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_5;
    // 0x80800AC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800AC4: bne         $v0, $zero, L_80800ADC
    if (ctx->r2 != 0) {
        // 0x80800AC8: nop
    
            goto L_80800ADC;
    }
    // 0x80800AC8: nop

    // 0x80800ACC: jal         0x80000034
    // 0x80800AD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800034_bstrexlarge(rdram, ctx);
        goto after_6;
    // 0x80800AD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800AD4: beql        $v0, $zero, L_80800AFC
    if (ctx->r2 == 0) {
        // 0x80800AD8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800AFC;
    }
    goto skip_0;
    // 0x80800AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
L_80800ADC:
    // 0x80800ADC: jal         0x800A2EAC
    // 0x80800AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2EAC(rdram, ctx);
        goto after_7;
    // 0x80800AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800AE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AE8: jal         0x8009B9B0
    // 0x80800AEC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_8;
    // 0x80800AEC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_8:
    // 0x80800AF0: addiu       $t6, $zero, 0x147
    ctx->r14 = ADD32(0, 0X147);
    // 0x80800AF4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800AF8:
    // 0x80800AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800AFC:
    // 0x80800AFC: jal         0x8009E5C8
    // 0x80800B00: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_9;
    // 0x80800B00: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_9:
    // 0x80800B04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800B08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800B0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800B10: jr          $ra
    // 0x80800B14: nop

    return;
    // 0x80800B14: nop

;}
RECOMP_FUNC void bstrexlarge_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B18: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800B1C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(159, 0X19C0) << 16);
    // 0x80800B20: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800B24: jr          $ra
    // 0x80800B28: lw          $v0, 0x19C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X19C0));
    return;
    // 0x80800B28: lw          $v0, 0x19C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X19C0));
;}
RECOMP_FUNC void bstrexlarge_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800B30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B34: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80800B38: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80800B3C: jal         0x8009C128
    // 0x80800B40: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800B40: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80800B44: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80800B48: jal         0x800EFC7C
    // 0x80800B4C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800EFC7C(rdram, ctx);
        goto after_1;
    // 0x80800B4C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x80800B50: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(159, 0X197C) << 16);
    // 0x80800B54: lwc1        $f4, 0x197C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(159, 0X197C));
    // 0x80800B58: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(159, 0X1980) << 16);
    // 0x80800B5C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80800B60: nop

    // 0x80800B64: bc1f        L_80800B74
    if (!c1cs) {
        // 0x80800B68: nop
    
            goto L_80800B74;
    }
    // 0x80800B68: nop

    // 0x80800B6C: b           L_80800BB4
    // 0x80800B70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80800BB4;
    // 0x80800B70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800B74:
    // 0x80800B74: lwc1        $f6, 0x1980($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(159, 0X1980));
    // 0x80800B78: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800B7C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80800B80: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80800B84: nop

    // 0x80800B88: bc1f        L_80800B98
    if (!c1cs) {
        // 0x80800B8C: nop
    
            goto L_80800B98;
    }
    // 0x80800B8C: nop

    // 0x80800B90: b           L_80800BB4
    // 0x80800B94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800BB4;
    // 0x80800B94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800B98:
    // 0x80800B98: jal         0x8008DAE8
    // 0x80800B9C: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    func_8008DAE8(rdram, ctx);
        goto after_2;
    // 0x80800B9C: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    after_2:
    // 0x80800BA0: bnel        $v0, $zero, L_80800BB4
    if (ctx->r2 != 0) {
        // 0x80800BA4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80800BB4;
    }
    goto skip_0;
    // 0x80800BA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x80800BA8: b           L_80800BB4
    // 0x80800BAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800BB4;
    // 0x80800BAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800BB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800BB4:
    // 0x80800BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800BB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800BBC: jr          $ra
    // 0x80800BC0: nop

    return;
    // 0x80800BC0: nop

;}
RECOMP_FUNC void func_80800BC4_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BC4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800BC8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800BCC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800BD0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800BD4: jal         0x8008CABC
    // 0x80800BD8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800BD8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800BDC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80800BE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800BE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800BE8: beq         $a1, $zero, L_80800D88
    if (ctx->r5 == 0) {
        // 0x80800BEC: sb          $a1, 0x15C($s0)
        MEM_B(0X15C, ctx->r16) = ctx->r5;
            goto L_80800D88;
    }
    // 0x80800BEC: sb          $a1, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r5;
    // 0x80800BF0: beq         $a1, $at, L_80800C08
    if (ctx->r5 == ctx->r1) {
        // 0x80800BF4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800C08;
    }
    // 0x80800BF4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800BF8: beq         $a1, $at, L_80800D70
    if (ctx->r5 == ctx->r1) {
        // 0x80800BFC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800D70;
    }
    // 0x80800BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C00: b           L_80800D9C
    // 0x80800C04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800D9C;
    // 0x80800C04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800C08:
    // 0x80800C08: jal         0x8008AF24
    // 0x80800C0C: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80800C0C: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    after_1:
    // 0x80800C10: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800C14: jal         0x8008AED4
    // 0x80800C18: addiu       $a1, $zero, 0x1D1
    ctx->r5 = ADD32(0, 0X1D1);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x80800C18: addiu       $a1, $zero, 0x1D1
    ctx->r5 = ADD32(0, 0X1D1);
    after_2:
    // 0x80800C1C: lui         $a1, 0x400C
    ctx->r5 = S32(0X400C << 16);
    // 0x80800C20: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800C24: jal         0x8008B1BC
    // 0x80800C28: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x80800C28: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x80800C2C: lui         $a2, 0x3F37
    ctx->r6 = S32(0X3F37 << 16);
    // 0x80800C30: ori         $a2, $a2, 0xA3D
    ctx->r6 = ctx->r6 | 0XA3D;
    // 0x80800C34: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800C38: jal         0x8008B1D4
    // 0x80800C3C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_4;
    // 0x80800C3C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800C40: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800C44: jal         0x8008B134
    // 0x80800C48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x80800C48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80800C4C: lui         $a1, 0x3E46
    ctx->r5 = S32(0X3E46 << 16);
    // 0x80800C50: ori         $a1, $a1, 0xA7F0
    ctx->r5 = ctx->r5 | 0XA7F0;
    // 0x80800C54: jal         0x8008B24C
    // 0x80800C58: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B24C(rdram, ctx);
        goto after_6;
    // 0x80800C58: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x80800C5C: jal         0x8008B064
    // 0x80800C60: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x80800C60: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_7:
    // 0x80800C64: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800C68: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800C74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800C78: jal         0x8009FFD8
    // 0x80800C7C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_8;
    // 0x80800C7C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_8:
    // 0x80800C80: jal         0x8009EF04
    // 0x80800C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_9;
    // 0x80800C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800C88: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800C8C: nop

    // 0x80800C90: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800C94: nop

    // 0x80800C98: bc1t        L_80800CB4
    if (c1cs) {
        // 0x80800C9C: nop
    
            goto L_80800CB4;
    }
    // 0x80800C9C: nop

    // 0x80800CA0: jal         0x8009EEB8
    // 0x80800CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_10;
    // 0x80800CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800CA8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800CAC: jal         0x8009C914
    // 0x80800CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_11;
    // 0x80800CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_80800CB4:
    // 0x80800CB4: jal         0x8009C990
    // 0x80800CB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_12;
    // 0x80800CB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800CBC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800CC0: jal         0x8009B9C0
    // 0x80800CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_13;
    // 0x80800CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800CC8: jal         0x8009C990
    // 0x80800CCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_14;
    // 0x80800CCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800CD0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80800CD4: jal         0x8009BB00
    // 0x80800CD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_15;
    // 0x80800CD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800CDC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CE4: jal         0x8009BA68
    // 0x80800CE8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009BA68(rdram, ctx);
        goto after_16;
    // 0x80800CE8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_16:
    // 0x80800CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CF0: jal         0x8009BA58
    // 0x80800CF4: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    func_8009BA58(rdram, ctx);
        goto after_17;
    // 0x80800CF4: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    after_17:
    // 0x80800CF8: lui         $a1, 0xC4A8
    ctx->r5 = S32(0XC4A8 << 16);
    // 0x80800CFC: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x80800D00: jal         0x8009BCB4
    // 0x80800D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCB4(rdram, ctx);
        goto after_18;
    // 0x80800D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800D08: jal         0x800DC0C0
    // 0x80800D0C: nop

    func_800DC0C0(rdram, ctx);
        goto after_19;
    // 0x80800D0C: nop

    after_19:
    // 0x80800D10: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800D14: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800D18: lui         $a3, 0x3F0C
    ctx->r7 = S32(0X3F0C << 16);
    // 0x80800D1C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800D20: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80800D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D28: addiu       $a1, $zero, 0x4D9
    ctx->r5 = ADD32(0, 0X4D9);
    // 0x80800D2C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x80800D30: bc1f        L_80800D60
    if (!c1cs) {
        // 0x80800D34: addiu       $t8, $zero, 0x61A8
        ctx->r24 = ADD32(0, 0X61A8);
            goto L_80800D60;
    }
    // 0x80800D34: addiu       $t8, $zero, 0x61A8
    ctx->r24 = ADD32(0, 0X61A8);
    // 0x80800D38: lui         $a3, 0x3F0C
    ctx->r7 = S32(0X3F0C << 16);
    // 0x80800D3C: addiu       $t7, $zero, 0x61A8
    ctx->r15 = ADD32(0, 0X61A8);
    // 0x80800D40: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800D44: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800D48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D4C: addiu       $a1, $zero, 0x4D8
    ctx->r5 = ADD32(0, 0X4D8);
    // 0x80800D50: jal         0x8009DBB0
    // 0x80800D54: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009DBB0(rdram, ctx);
        goto after_20;
    // 0x80800D54: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_20:
    // 0x80800D58: b           L_80800D9C
    // 0x80800D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800D9C;
    // 0x80800D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800D60:
    // 0x80800D60: jal         0x8009DBB0
    // 0x80800D64: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8009DBB0(rdram, ctx);
        goto after_21;
    // 0x80800D64: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_21:
    // 0x80800D68: b           L_80800D9C
    // 0x80800D6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800D9C;
    // 0x80800D6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800D70:
    // 0x80800D70: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80800D74: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800D78: jal         0x8008CF1C
    // 0x80800D7C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_22;
    // 0x80800D7C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_22:
    // 0x80800D80: b           L_80800D9C
    // 0x80800D84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800D9C;
    // 0x80800D84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800D88:
    // 0x80800D88: lui         $a1, 0xC53B
    ctx->r5 = S32(0XC53B << 16);
    // 0x80800D8C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80800D90: jal         0x8009BCB4
    // 0x80800D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCB4(rdram, ctx);
        goto after_23;
    // 0x80800D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80800D98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800D9C:
    // 0x80800D9C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800DA0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800DA4: jr          $ra
    // 0x80800DA8: nop

    return;
    // 0x80800DA8: nop

;}
RECOMP_FUNC void func_80800DAC_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800DB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800DB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800DB8: jal         0x80000BC4
    // 0x80800DBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800BC4_bstrexlarge(rdram, ctx);
        goto after_0;
    // 0x80800DBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800DC0: jal         0x8000064C
    // 0x80800DC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstrexlarge_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800DC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800DC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800DCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800DD0: jr          $ra
    // 0x80800DD4: nop

    return;
    // 0x80800DD4: nop

;}
RECOMP_FUNC void func_80800DD8_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800DDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800DE0: jal         0x800006F0
    // 0x80800DE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstrexlarge_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800DE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800DE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800DEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800DF0: jal         0x80000BC4
    // 0x80800DF4: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
    func_80800BC4_bstrexlarge(rdram, ctx);
        goto after_1;
    // 0x80800DF4: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
    after_1:
    // 0x80800DF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800DFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800E00: jr          $ra
    // 0x80800E04: nop

    return;
    // 0x80800E04: nop

;}
RECOMP_FUNC void func_80800E08_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E08: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800E0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800E10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800E14: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800E18: jal         0x8000081C
    // 0x80800E1C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    bstrexlarge_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800E1C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x80800E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E24: jal         0x8009BB24
    // 0x80800E28: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8009BB24(rdram, ctx);
        goto after_1;
    // 0x80800E28: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x80800E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E30: jal         0x80091A30
    // 0x80800E34: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_2;
    // 0x80800E34: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_2:
    // 0x80800E38: beq         $v0, $zero, L_80800E60
    if (ctx->r2 == 0) {
        // 0x80800E3C: lwc1        $f6, 0x2C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_80800E60;
    }
    // 0x80800E3C: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800E40: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800E44: nop

    // 0x80800E48: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800E4C: nop

    // 0x80800E50: bc1fl       L_80800E64
    if (!c1cs) {
        // 0x80800E54: lbu         $v0, 0x15C($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X15C);
            goto L_80800E64;
    }
    goto skip_0;
    // 0x80800E54: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
    skip_0:
    // 0x80800E58: jal         0x8009BC6C
    // 0x80800E5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_3;
    // 0x80800E5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80800E60:
    // 0x80800E60: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
L_80800E64:
    // 0x80800E64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800E68: beq         $v0, $at, L_80800E80
    if (ctx->r2 == ctx->r1) {
        // 0x80800E6C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800E80;
    }
    // 0x80800E6C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800E70: beq         $v0, $at, L_80800EAC
    if (ctx->r2 == ctx->r1) {
        // 0x80800E74: nop
    
            goto L_80800EAC;
    }
    // 0x80800E74: nop

    // 0x80800E78: b           L_80800EFC
    // 0x80800E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800EFC;
    // 0x80800E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800E80:
    // 0x80800E80: jal         0x800004B4
    // 0x80800E84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004B4_bstrexlarge(rdram, ctx);
        goto after_4;
    // 0x80800E84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800E88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E8C: jal         0x8008DF8C
    // 0x80800E90: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_5;
    // 0x80800E90: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_5:
    // 0x80800E94: beq         $v0, $zero, L_80800EF8
    if (ctx->r2 == 0) {
        // 0x80800E98: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800EF8;
    }
    // 0x80800E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E9C: jal         0x80000BC4
    // 0x80800EA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800BC4_bstrexlarge(rdram, ctx);
        goto after_6;
    // 0x80800EA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x80800EA4: b           L_80800EFC
    // 0x80800EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800EFC;
    // 0x80800EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800EAC:
    // 0x80800EAC: jal         0x800004B4
    // 0x80800EB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004B4_bstrexlarge(rdram, ctx);
        goto after_7;
    // 0x80800EB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800EB4: jal         0x80000044
    // 0x80800EB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800044_bstrexlarge(rdram, ctx);
        goto after_8;
    // 0x80800EB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800EBC: jal         0x8008E078
    // 0x80800EC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_9;
    // 0x80800EC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800EC4: bne         $v0, $zero, L_80800EDC
    if (ctx->r2 != 0) {
        // 0x80800EC8: nop
    
            goto L_80800EDC;
    }
    // 0x80800EC8: nop

    // 0x80800ECC: jal         0x80000034
    // 0x80800ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800034_bstrexlarge(rdram, ctx);
        goto after_10;
    // 0x80800ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800ED4: beql        $v0, $zero, L_80800EFC
    if (ctx->r2 == 0) {
        // 0x80800ED8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800EFC;
    }
    goto skip_1;
    // 0x80800ED8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
L_80800EDC:
    // 0x80800EDC: jal         0x800A2EAC
    // 0x80800EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2EAC(rdram, ctx);
        goto after_11;
    // 0x80800EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EE8: jal         0x8009B9B0
    // 0x80800EEC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_12;
    // 0x80800EEC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_12:
    // 0x80800EF0: addiu       $t6, $zero, 0x147
    ctx->r14 = ADD32(0, 0X147);
    // 0x80800EF4: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_80800EF8:
    // 0x80800EF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800EFC:
    // 0x80800EFC: jal         0x8009E5C8
    // 0x80800F00: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_13;
    // 0x80800F00: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_13:
    // 0x80800F04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800F08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800F0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800F10: jr          $ra
    // 0x80800F14: nop

    return;
    // 0x80800F14: nop

;}
RECOMP_FUNC void bstrexlarge_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F18: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800F1C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(159, 0X19D0) << 16);
    // 0x80800F20: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800F24: jr          $ra
    // 0x80800F28: lw          $v0, 0x19D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X19D0));
    return;
    // 0x80800F28: lw          $v0, 0x19D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X19D0));
;}
RECOMP_FUNC void func_80800F2C_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F34: jal         0x8000064C
    // 0x80800F38: nop

    bstrexlarge_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800F38: nop

    after_0:
    // 0x80800F3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F44: jr          $ra
    // 0x80800F48: nop

    return;
    // 0x80800F48: nop

;}
RECOMP_FUNC void func_80800F4C_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F54: jal         0x800006F0
    // 0x80800F58: nop

    bstrexlarge_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800F58: nop

    after_0:
    // 0x80800F5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F64: jr          $ra
    // 0x80800F68: nop

    return;
    // 0x80800F68: nop

;}
RECOMP_FUNC void func_80800F6C_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F74: jal         0x8000081C
    // 0x80800F78: nop

    bstrexlarge_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800F78: nop

    after_0:
    // 0x80800F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F84: jr          $ra
    // 0x80800F88: nop

    return;
    // 0x80800F88: nop

;}
RECOMP_FUNC void bstrexlarge_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F8C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800F90: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(159, 0X19E0) << 16);
    // 0x80800F94: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800F98: jr          $ra
    // 0x80800F9C: lw          $v0, 0x19E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X19E0));
    return;
    // 0x80800F9C: lw          $v0, 0x19E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X19E0));
;}
RECOMP_FUNC void func_80800FA0_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800FA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800FA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800FA8: jal         0x800845D0
    // 0x80800FAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800FAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800FB0: jal         0x8000064C
    // 0x80800FB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstrexlarge_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800FB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800FC0: jr          $ra
    // 0x80800FC4: nop

    return;
    // 0x80800FC4: nop

;}
RECOMP_FUNC void func_80800FC8_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800FC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800FCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800FD0: jal         0x800006F0
    // 0x80800FD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstrexlarge_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800FD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800FD8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800FDC: jal         0x800845D8
    // 0x80800FE0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80800FE0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80800FE4: lui         $a2, 0x3F30
    ctx->r6 = S32(0X3F30 << 16);
    // 0x80800FE8: ori         $a2, $a2, 0xA3D7
    ctx->r6 = ctx->r6 | 0XA3D7;
    // 0x80800FEC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800FF0: jal         0x800845E0
    // 0x80800FF4: addiu       $a1, $zero, 0x147
    ctx->r5 = ADD32(0, 0X147);
    _babounce_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80800FF4: addiu       $a1, $zero, 0x147
    ctx->r5 = ADD32(0, 0X147);
    after_2:
    // 0x80800FF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800FFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801000: jr          $ra
    // 0x80801004: nop

    return;
    // 0x80801004: nop

;}
RECOMP_FUNC void func_80801008_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080100C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801010: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80801014: jal         0x8000081C
    // 0x80801018: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    bstrexlarge_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80801018: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x8080101C: jal         0x80084600
    // 0x80801020: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _babounce_entrypoint_9(rdram, ctx);
        goto after_1;
    // 0x80801020: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80801024: beq         $v0, $zero, L_80801030
    if (ctx->r2 == 0) {
        // 0x80801028: addiu       $t6, $zero, 0x151
        ctx->r14 = ADD32(0, 0X151);
            goto L_80801030;
    }
    // 0x80801028: addiu       $t6, $zero, 0x151
    ctx->r14 = ADD32(0, 0X151);
    // 0x8080102C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80801030:
    // 0x80801030: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80801034: jal         0x8009E5C8
    // 0x80801038: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80801038: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x8080103C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801040: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801044: jr          $ra
    // 0x80801048: nop

    return;
    // 0x80801048: nop

;}
RECOMP_FUNC void bstrexlarge_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080104C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801050: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(159, 0X19F0) << 16);
    // 0x80801054: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801058: jr          $ra
    // 0x8080105C: lw          $v0, 0x19F0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X19F0));
    return;
    // 0x8080105C: lw          $v0, 0x19F0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X19F0));
;}
RECOMP_FUNC void func_80801060_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801068: jal         0x800839B8
    // 0x8080106C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x8080106C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801070: jal         0x8000064C
    // 0x80801074: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstrexlarge_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80801074: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080107C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801080: jr          $ra
    // 0x80801084: nop

    return;
    // 0x80801084: nop

;}
RECOMP_FUNC void func_80801088_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801088: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080108C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801090: jal         0x800006F0
    // 0x80801094: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstrexlarge_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80801094: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801098: jal         0x800839C8
    // 0x8080109C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x8080109C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808010A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808010A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808010A8: jr          $ra
    // 0x808010AC: nop

    return;
    // 0x808010AC: nop

;}
RECOMP_FUNC void func_808010B0_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808010B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808010B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808010BC: jal         0x800839E8
    // 0x808010C0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x808010C0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x808010C4: beq         $v0, $zero, L_808010D8
    if (ctx->r2 == 0) {
        // 0x808010C8: nop
    
            goto L_808010D8;
    }
    // 0x808010C8: nop

    // 0x808010CC: jal         0x800839B0
    // 0x808010D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsrest_entrypoint_13(rdram, ctx);
        goto after_1;
    // 0x808010D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808010D4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_808010D8:
    // 0x808010D8: jal         0x8000081C
    // 0x808010DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    bstrexlarge_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x808010DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x808010E0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808010E4: jal         0x8009E5C8
    // 0x808010E8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x808010E8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x808010EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808010F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808010F4: jr          $ra
    // 0x808010F8: nop

    return;
    // 0x808010F8: nop

;}
RECOMP_FUNC void bstrexlarge_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010FC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801100: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(159, 0X1A00) << 16);
    // 0x80801104: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801108: jr          $ra
    // 0x8080110C: lw          $v0, 0x1A00($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X1A00));
    return;
    // 0x8080110C: lw          $v0, 0x1A00($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X1A00));
;}
RECOMP_FUNC void func_80801110_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801110: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80801114: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801118: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080111C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801120: jal         0x8009C128
    // 0x80801124: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80801124: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x80801128: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8080112C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x80801130: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801134: jal         0x800E1610
    // 0x80801138: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    func_800E1610(rdram, ctx);
        goto after_1;
    // 0x80801138: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x8080113C: sw          $v0, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r2;
    // 0x80801140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801144: addiu       $a1, $zero, 0x56C
    ctx->r5 = ADD32(0, 0X56C);
    // 0x80801148: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8080114C: jal         0x8009DF18
    // 0x80801150: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DF18(rdram, ctx);
        goto after_2;
    // 0x80801150: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_2:
    // 0x80801154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801158: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8080115C: jal         0x8009E5A4
    // 0x80801160: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8009E5A4(rdram, ctx);
        goto after_3;
    // 0x80801160: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80801164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801168: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8080116C: jal         0x8009E55C
    // 0x80801170: lui         $a2, 0x4416
    ctx->r6 = S32(0X4416 << 16);
    func_8009E55C(rdram, ctx);
        goto after_4;
    // 0x80801170: lui         $a2, 0x4416
    ctx->r6 = S32(0X4416 << 16);
    after_4:
    // 0x80801174: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80801178: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8080117C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801180: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    // 0x80801184: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80801188: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080118C: jal         0x80085490
    // 0x80801190: nop

    _bamotor_entrypoint_1(rdram, ctx);
        goto after_5;
    // 0x80801190: nop

    after_5:
    // 0x80801194: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801198: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080119C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808011A0: jr          $ra
    // 0x808011A4: nop

    return;
    // 0x808011A4: nop

;}
RECOMP_FUNC void func_808011A8_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808011AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808011B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808011B4: lw          $a2, 0x160($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X160);
    // 0x808011B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x808011BC: lui         $a1, 0x3F5C
    ctx->r5 = S32(0X3F5C << 16);
    // 0x808011C0: beq         $a2, $at, L_808011D0
    if (ctx->r6 == ctx->r1) {
        // 0x808011C4: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_808011D0;
    }
    // 0x808011C4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x808011C8: jal         0x800E144C
    // 0x808011CC: ori         $a1, $a1, 0x28F6
    ctx->r5 = ctx->r5 | 0X28F6;
    func_800E144C(rdram, ctx);
        goto after_0;
    // 0x808011CC: ori         $a1, $a1, 0x28F6
    ctx->r5 = ctx->r5 | 0X28F6;
    after_0:
L_808011D0:
    // 0x808011D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808011D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808011D8: jal         0x8009E55C
    // 0x808011DC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E55C(rdram, ctx);
        goto after_1;
    // 0x808011DC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_1:
    // 0x808011E0: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x808011E4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808011E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808011EC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x808011F0: jal         0x80085498
    // 0x808011F4: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    _bamotor_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x808011F4: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_2:
    // 0x808011F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808011FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801200: jr          $ra
    // 0x80801204: nop

    return;
    // 0x80801204: nop

;}
RECOMP_FUNC void func_80801208_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801208: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080120C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801210: jal         0x800011A8
    // 0x80801214: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808011A8_bstrexlarge(rdram, ctx);
        goto after_0;
    // 0x80801214: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801218: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8080121C: sb          $zero, 0x15E($t6)
    MEM_B(0X15E, ctx->r14) = 0;
    // 0x80801220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801228: jr          $ra
    // 0x8080122C: nop

    return;
    // 0x8080122C: nop

;}
RECOMP_FUNC void func_80801230_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801230: lbu         $t7, 0x15D($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X15D);
    // 0x80801234: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80801238: sw          $t6, 0x160($a0)
    MEM_W(0X160, ctx->r4) = ctx->r14;
    // 0x8080123C: jr          $ra
    // 0x80801240: sb          $t7, 0x15E($a0)
    MEM_B(0X15E, ctx->r4) = ctx->r15;
    return;
    // 0x80801240: sb          $t7, 0x15E($a0)
    MEM_B(0X15E, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_80801244_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801244: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801248: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080124C: jal         0x8000064C
    // 0x80801250: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstrexlarge_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80801250: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801254: jal         0x80001208
    // 0x80801258: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80801208_bstrexlarge(rdram, ctx);
        goto after_1;
    // 0x80801258: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080125C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801264: jr          $ra
    // 0x80801268: nop

    return;
    // 0x80801268: nop

;}
RECOMP_FUNC void func_8080126C_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080126C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801270: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801274: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801278: jal         0x800006F0
    // 0x8080127C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bstrexlarge_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x8080127C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801280: lui         $a2, 0x4046
    ctx->r6 = S32(0X4046 << 16);
    // 0x80801284: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80801288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080128C: jal         0x8008CCBC
    // 0x80801290: addiu       $a1, $zero, 0x1D0
    ctx->r5 = ADD32(0, 0X1D0);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x80801290: addiu       $a1, $zero, 0x1D0
    ctx->r5 = ADD32(0, 0X1D0);
    after_1:
    // 0x80801294: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80801298: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080129C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808012A4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x808012A8: jal         0x8009FFD8
    // 0x808012AC: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x808012AC: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_2:
    // 0x808012B0: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x808012B4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808012B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012BC: jal         0x8009C99C
    // 0x808012C0: lui         $a1, 0x425C
    ctx->r5 = S32(0X425C << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x808012C0: lui         $a1, 0x425C
    ctx->r5 = S32(0X425C << 16);
    after_3:
    // 0x808012C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012C8: jal         0x8009B9B0
    // 0x808012CC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x808012CC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x808012D0: jal         0x80001230
    // 0x808012D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80801230_bstrexlarge(rdram, ctx);
        goto after_5;
    // 0x808012D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808012D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808012DC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808012E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808012E4: jr          $ra
    // 0x808012E8: nop

    return;
    // 0x808012E8: nop

;}
RECOMP_FUNC void func_808012EC_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012EC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x808012F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808012F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808012F8: jal         0x8008CABC
    // 0x808012FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808012FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801300: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x80801304: jal         0x8008B2B4
    // 0x80801308: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B2B4(rdram, ctx);
        goto after_1;
    // 0x80801308: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8080130C: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x80801310: jal         0x8000081C
    // 0x80801314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bstrexlarge_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x80801314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801318: lbu         $t6, 0x15E($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X15E);
    // 0x8080131C: beq         $t6, $zero, L_808013A0
    if (ctx->r14 == 0) {
        // 0x80801320: nop
    
            goto L_808013A0;
    }
    // 0x80801320: nop

    // 0x80801324: jal         0x80092AD8
    // 0x80801328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092AD8(rdram, ctx);
        goto after_3;
    // 0x80801328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080132C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80801330: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80801334: jal         0x800E0AF0
    // 0x80801338: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_800E0AF0(rdram, ctx);
        goto after_4;
    // 0x80801338: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_4:
    // 0x8080133C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80801340: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x80801344: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80801348: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8080134C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801350: lui         $a3, 0xC1C8
    ctx->r7 = S32(0XC1C8 << 16);
    // 0x80801354: jal         0x800F10B4
    // 0x80801358: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_5;
    // 0x80801358: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x8080135C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80801360: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80801364: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80801368: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8080136C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801370: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801374: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x80801378: jal         0x800E0AFC
    // 0x8080137C: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    func_800E0AFC(rdram, ctx);
        goto after_6;
    // 0x8080137C: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    after_6:
    // 0x80801380: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80801384: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80801388: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x8080138C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801390: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80801394: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x80801398: jal         0x800E0AFC
    // 0x8080139C: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    func_800E0AFC(rdram, ctx);
        goto after_7;
    // 0x8080139C: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    after_7:
L_808013A0:
    // 0x808013A0: jal         0x800DB9B0
    // 0x808013A4: nop

    func_800DB9B0(rdram, ctx);
        goto after_8;
    // 0x808013A4: nop

    after_8:
    // 0x808013A8: beq         $v0, $zero, L_808013CC
    if (ctx->r2 == 0) {
        // 0x808013AC: nop
    
            goto L_808013CC;
    }
    // 0x808013AC: nop

    // 0x808013B0: jal         0x8009D2E4
    // 0x808013B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D2E4(rdram, ctx);
        goto after_9;
    // 0x808013B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808013B8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x808013BC: bne         $v0, $at, L_808013CC
    if (ctx->r2 != ctx->r1) {
        // 0x808013C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808013CC;
    }
    // 0x808013C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808013C4: jal         0x8009D2D8
    // 0x808013C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009D2D8(rdram, ctx);
        goto after_10;
    // 0x808013C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
L_808013CC:
    // 0x808013CC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(159, 0X1984) << 16);
    // 0x808013D0: lwc1        $f8, 0x1984($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(159, 0X1984));
    // 0x808013D4: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x808013D8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(159, 0X1988) << 16);
    // 0x808013DC: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x808013E0: nop

    // 0x808013E4: bc1fl       L_80801420
    if (!c1cs) {
        // 0x808013E8: lui         $a1, 0x3E05
        ctx->r5 = S32(0X3E05 << 16);
            goto L_80801420;
    }
    goto skip_0;
    // 0x808013E8: lui         $a1, 0x3E05
    ctx->r5 = S32(0X3E05 << 16);
    skip_0:
    // 0x808013EC: lwc1        $f10, 0x1988($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(159, 0X1988));
    // 0x808013F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808013F4: c.le.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl <= ctx->f10.fl;
    // 0x808013F8: nop

    // 0x808013FC: bc1fl       L_80801420
    if (!c1cs) {
        // 0x80801400: lui         $a1, 0x3E05
        ctx->r5 = S32(0X3E05 << 16);
            goto L_80801420;
    }
    goto skip_1;
    // 0x80801400: lui         $a1, 0x3E05
    ctx->r5 = S32(0X3E05 << 16);
    skip_1:
    // 0x80801404: jal         0x8009C128
    // 0x80801408: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8009C128(rdram, ctx);
        goto after_11;
    // 0x80801408: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_11:
    // 0x8080140C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80801410: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x80801414: jal         0x801013A8
    // 0x80801418: lw          $a2, 0x184($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X184);
    func_801013A8(rdram, ctx);
        goto after_12;
    // 0x80801418: lw          $a2, 0x184($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X184);
    after_12:
    // 0x8080141C: lui         $a1, 0x3E05
    ctx->r5 = S32(0X3E05 << 16);
L_80801420:
    // 0x80801420: ori         $a1, $a1, 0x1EB8
    ctx->r5 = ctx->r5 | 0X1EB8;
    // 0x80801424: jal         0x8008CB10
    // 0x80801428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_13;
    // 0x80801428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x8080142C: beql        $v0, $zero, L_80801440
    if (ctx->r2 == 0) {
        // 0x80801430: lui         $a1, 0x3F66
        ctx->r5 = S32(0X3F66 << 16);
            goto L_80801440;
    }
    goto skip_2;
    // 0x80801430: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    skip_2:
    // 0x80801434: jal         0x80001110
    // 0x80801438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80801110_bstrexlarge(rdram, ctx);
        goto after_14;
    // 0x80801438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x8080143C: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
L_80801440:
    // 0x80801440: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80801444: jal         0x8008CB10
    // 0x80801448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_15;
    // 0x80801448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x8080144C: beq         $v0, $zero, L_8080145C
    if (ctx->r2 == 0) {
        // 0x80801450: nop
    
            goto L_8080145C;
    }
    // 0x80801450: nop

    // 0x80801454: jal         0x800011A8
    // 0x80801458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808011A8_bstrexlarge(rdram, ctx);
        goto after_16;
    // 0x80801458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
L_8080145C:
    // 0x8080145C: jal         0x8008CAEC
    // 0x80801460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_17;
    // 0x80801460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80801464: beq         $v0, $zero, L_80801474
    if (ctx->r2 == 0) {
        // 0x80801468: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801474;
    }
    // 0x80801468: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080146C: addiu       $t7, $zero, 0x151
    ctx->r15 = ADD32(0, 0X151);
    // 0x80801470: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
L_80801474:
    // 0x80801474: jal         0x8009E5C8
    // 0x80801478: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    func_8009E5C8(rdram, ctx);
        goto after_18;
    // 0x80801478: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    after_18:
    // 0x8080147C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801480: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801484: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80801488: jr          $ra
    // 0x8080148C: nop

    return;
    // 0x8080148C: nop

;}
RECOMP_FUNC void bstrexlarge_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801490: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801494: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(159, 0X1A10) << 16);
    // 0x80801498: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080149C: jr          $ra
    // 0x808014A0: lw          $v0, 0x1A10($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X1A10));
    return;
    // 0x808014A0: lw          $v0, 0x1A10($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X1A10));
;}
RECOMP_FUNC void func_808014A4_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808014A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808014A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808014AC: jal         0x8000064C
    // 0x808014B0: nop

    bstrexlarge_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808014B0: nop

    after_0:
    // 0x808014B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808014B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808014BC: jr          $ra
    // 0x808014C0: nop

    return;
    // 0x808014C0: nop

;}
RECOMP_FUNC void func_808014C4_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808014C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808014C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808014CC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808014D0: jal         0x800006F0
    // 0x808014D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bstrexlarge_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808014D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808014D8: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x808014DC: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808014E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014E4: jal         0x8008CB3C
    // 0x808014E8: addiu       $a1, $zero, 0x1CF
    ctx->r5 = ADD32(0, 0X1CF);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x808014E8: addiu       $a1, $zero, 0x1CF
    ctx->r5 = ADD32(0, 0X1CF);
    after_1:
    // 0x808014EC: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x808014F0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808014F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808014FC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80801500: jal         0x8009FFD8
    // 0x80801504: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80801504: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80801508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080150C: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x80801510: jal         0x8009C99C
    // 0x80801514: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x80801514: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    after_3:
    // 0x80801518: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x8080151C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80801520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801524: jal         0x8008C9BC
    // 0x80801528: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_4;
    // 0x80801528: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_4:
    // 0x8080152C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(159, 0X198C) << 16);
    // 0x80801530: lwc1        $f4, 0x198C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(159, 0X198C));
    // 0x80801534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801538: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    // 0x8080153C: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x80801540: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80801544: jal         0x8008C9F0
    // 0x80801548: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_5;
    // 0x80801548: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x8080154C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801550: jal         0x8008CA30
    // 0x80801554: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CA30(rdram, ctx);
        goto after_6;
    // 0x80801554: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_6:
    // 0x80801558: jal         0x80000000
    // 0x8080155C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bstrexlarge(rdram, ctx);
        goto after_7;
    // 0x8080155C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80801560: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801564: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801568: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080156C: jr          $ra
    // 0x80801570: nop

    return;
    // 0x80801570: nop

;}
RECOMP_FUNC void func_80801574_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801574: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801578: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080157C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801580: jal         0x8000000C
    // 0x80801584: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8080000C_bstrexlarge(rdram, ctx);
        goto after_0;
    // 0x80801584: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801588: jal         0x8000081C
    // 0x8080158C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bstrexlarge_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x8080158C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801590: jal         0x800004B4
    // 0x80801594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004B4_bstrexlarge(rdram, ctx);
        goto after_2;
    // 0x80801594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801598: lui         $a1, 0x3F11
    ctx->r5 = S32(0X3F11 << 16);
    // 0x8080159C: ori         $a1, $a1, 0xF8A1
    ctx->r5 = ctx->r5 | 0XF8A1;
    // 0x808015A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015A4: jal         0x800A2D2C
    // 0x808015A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2D2C(rdram, ctx);
        goto after_3;
    // 0x808015A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x808015AC: lui         $a1, 0x3D8F
    ctx->r5 = S32(0X3D8F << 16);
    // 0x808015B0: ori         $a1, $a1, 0xC505
    ctx->r5 = ctx->r5 | 0XC505;
    // 0x808015B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015B8: jal         0x800A2D2C
    // 0x808015BC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2D2C(rdram, ctx);
        goto after_4;
    // 0x808015BC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x808015C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808015C8: jal         0x800002E0
    // 0x808015CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_808002E0_bstrexlarge(rdram, ctx);
        goto after_5;
    // 0x808015CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x808015D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015D4: jal         0x8009E5C8
    // 0x808015D8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x808015D8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_6:
    // 0x808015DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808015E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808015E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808015E8: jr          $ra
    // 0x808015EC: nop

    return;
    // 0x808015EC: nop

;}
RECOMP_FUNC void bstrexlarge_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808015F0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808015F4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(159, 0X1A20) << 16);
    // 0x808015F8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808015FC: jr          $ra
    // 0x80801600: lw          $v0, 0x1A20($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X1A20));
    return;
    // 0x80801600: lw          $v0, 0x1A20($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X1A20));
;}
RECOMP_FUNC void func_80801604_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801604: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801608: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080160C: jal         0x80090A2C
    // 0x80801610: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80090A2C(rdram, ctx);
        goto after_0;
    // 0x80801610: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801614: jal         0x800951B4
    // 0x80801618: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800951B4(rdram, ctx);
        goto after_1;
    // 0x80801618: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080161C: jal         0x8000064C
    // 0x80801620: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstrexlarge_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80801620: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80801624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080162C: jr          $ra
    // 0x80801630: nop

    return;
    // 0x80801630: nop

;}
RECOMP_FUNC void func_80801634_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801634: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801638: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080163C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801640: jal         0x800006F0
    // 0x80801644: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bstrexlarge_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80801644: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080164C: addiu       $a1, $zero, 0x1D2
    ctx->r5 = ADD32(0, 0X1D2);
    // 0x80801650: jal         0x8008CB3C
    // 0x80801654: lui         $a2, 0x4108
    ctx->r6 = S32(0X4108 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80801654: lui         $a2, 0x4108
    ctx->r6 = S32(0X4108 << 16);
    after_1:
    // 0x80801658: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8080165C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801664: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801668: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8080166C: jal         0x8009FFD8
    // 0x80801670: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80801670: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_2:
    // 0x80801674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801678: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x8080167C: jal         0x8009C99C
    // 0x80801680: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x80801680: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    after_3:
    // 0x80801684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801688: jal         0x8009B9B0
    // 0x8080168C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x8080168C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80801690: jal         0x800909CC
    // 0x80801694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800909CC(rdram, ctx);
        goto after_5;
    // 0x80801694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801698: jal         0x80000000
    // 0x8080169C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bstrexlarge(rdram, ctx);
        goto after_6;
    // 0x8080169C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808016A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808016A4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808016A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808016AC: jr          $ra
    // 0x808016B0: nop

    return;
    // 0x808016B0: nop

;}
RECOMP_FUNC void func_808016B4_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808016B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808016B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808016BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808016C0: jal         0x8000000C
    // 0x808016C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8080000C_bstrexlarge(rdram, ctx);
        goto after_0;
    // 0x808016C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808016C8: jal         0x8000081C
    // 0x808016CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bstrexlarge_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x808016CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808016D0: lui         $a1, 0x3DC2
    ctx->r5 = S32(0X3DC2 << 16);
    // 0x808016D4: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    // 0x808016D8: jal         0x8008CB10
    // 0x808016DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x808016DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808016E0: beq         $v0, $zero, L_808016FC
    if (ctx->r2 == 0) {
        // 0x808016E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808016FC;
    }
    // 0x808016E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016E8: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x808016EC: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808016F0: addiu       $a1, $zero, 0x570
    ctx->r5 = ADD32(0, 0X570);
    // 0x808016F4: jal         0x8009DF18
    // 0x808016F8: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_3;
    // 0x808016F8: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_3:
L_808016FC:
    // 0x808016FC: lui         $a1, 0x3F0B
    ctx->r5 = S32(0X3F0B << 16);
    // 0x80801700: ori         $a1, $a1, 0x851F
    ctx->r5 = ctx->r5 | 0X851F;
    // 0x80801704: jal         0x8008CB10
    // 0x80801708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_4;
    // 0x80801708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080170C: beq         $v0, $zero, L_8080173C
    if (ctx->r2 == 0) {
        // 0x80801710: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080173C;
    }
    // 0x80801710: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801714: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x80801718: lui         $a3, 0x3F8C
    ctx->r7 = S32(0X3F8C << 16);
    // 0x8080171C: addiu       $t6, $zero, 0x4E20
    ctx->r14 = ADD32(0, 0X4E20);
    // 0x80801720: addiu       $t7, $zero, 0x55F0
    ctx->r15 = ADD32(0, 0X55F0);
    // 0x80801724: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80801728: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080172C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80801730: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80801734: jal         0x8009DEC0
    // 0x80801738: addiu       $a1, $zero, 0x56F
    ctx->r5 = ADD32(0, 0X56F);
    func_8009DEC0(rdram, ctx);
        goto after_5;
    // 0x80801738: addiu       $a1, $zero, 0x56F
    ctx->r5 = ADD32(0, 0X56F);
    after_5:
L_8080173C:
    // 0x8080173C: lui         $a1, 0x3F51
    ctx->r5 = S32(0X3F51 << 16);
    // 0x80801740: ori         $a1, $a1, 0xEB85
    ctx->r5 = ctx->r5 | 0XEB85;
    // 0x80801744: jal         0x8008CB10
    // 0x80801748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_6;
    // 0x80801748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080174C: beq         $v0, $zero, L_80801768
    if (ctx->r2 == 0) {
        // 0x80801750: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801768;
    }
    // 0x80801750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801754: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x80801758: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x8080175C: addiu       $a1, $zero, 0x570
    ctx->r5 = ADD32(0, 0X570);
    // 0x80801760: jal         0x8009DF18
    // 0x80801764: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    func_8009DF18(rdram, ctx);
        goto after_7;
    // 0x80801764: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    after_7:
L_80801768:
    // 0x80801768: lui         $a1, 0x3F6B
    ctx->r5 = S32(0X3F6B << 16);
    // 0x8080176C: ori         $a1, $a1, 0x851F
    ctx->r5 = ctx->r5 | 0X851F;
    // 0x80801770: jal         0x8008CB10
    // 0x80801774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_8;
    // 0x80801774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80801778: beq         $v0, $zero, L_80801790
    if (ctx->r2 == 0) {
        // 0x8080177C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801790;
    }
    // 0x8080177C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801780: addiu       $a1, $zero, 0x570
    ctx->r5 = ADD32(0, 0X570);
    // 0x80801784: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801788: jal         0x8009DF18
    // 0x8080178C: addiu       $a3, $zero, 0x32C8
    ctx->r7 = ADD32(0, 0X32C8);
    func_8009DF18(rdram, ctx);
        goto after_9;
    // 0x8080178C: addiu       $a3, $zero, 0x32C8
    ctx->r7 = ADD32(0, 0X32C8);
    after_9:
L_80801790:
    // 0x80801790: jal         0x800004B4
    // 0x80801794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004B4_bstrexlarge(rdram, ctx);
        goto after_10;
    // 0x80801794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80801798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080179C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808017A0: jal         0x800003C4
    // 0x808017A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_808003C4_bstrexlarge(rdram, ctx);
        goto after_11;
    // 0x808017A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x808017A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808017AC: jal         0x8009E5C8
    // 0x808017B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_12;
    // 0x808017B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_12:
    // 0x808017B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808017B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808017BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808017C0: jr          $ra
    // 0x808017C4: nop

    return;
    // 0x808017C4: nop

;}
RECOMP_FUNC void bstrexlarge_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808017C8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808017CC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(159, 0X1A30) << 16);
    // 0x808017D0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808017D4: jr          $ra
    // 0x808017D8: lw          $v0, 0x1A30($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X1A30));
    return;
    // 0x808017D8: lw          $v0, 0x1A30($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X1A30));
;}
RECOMP_FUNC void func_808017DC_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808017DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808017E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808017E4: jal         0x8000064C
    // 0x808017E8: nop

    bstrexlarge_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808017E8: nop

    after_0:
    // 0x808017EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808017F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808017F4: jr          $ra
    // 0x808017F8: nop

    return;
    // 0x808017F8: nop

;}
RECOMP_FUNC void func_808017FC_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808017FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801800: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801804: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801808: jal         0x800006F0
    // 0x8080180C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bstrexlarge_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x8080180C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801810: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x80801814: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80801818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080181C: jal         0x8008CB3C
    // 0x80801820: addiu       $a1, $zero, 0x1CE
    ctx->r5 = ADD32(0, 0X1CE);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80801820: addiu       $a1, $zero, 0x1CE
    ctx->r5 = ADD32(0, 0X1CE);
    after_1:
    // 0x80801824: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80801828: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080182C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801830: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80801834: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80801838: jal         0x8009FFD8
    // 0x8080183C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x8080183C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80801840: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801844: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x80801848: jal         0x8009C99C
    // 0x8080184C: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x8080184C: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    after_3:
    // 0x80801850: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80801854: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80801858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080185C: jal         0x8008C9BC
    // 0x80801860: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_4;
    // 0x80801860: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_4:
    // 0x80801864: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80801868: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080186C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801870: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x80801874: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    // 0x80801878: lui         $a3, 0x3FC0
    ctx->r7 = S32(0X3FC0 << 16);
    // 0x8080187C: jal         0x8008C9F0
    // 0x80801880: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_5;
    // 0x80801880: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x80801884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801888: jal         0x8008CA30
    // 0x8080188C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CA30(rdram, ctx);
        goto after_6;
    // 0x8080188C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_6:
    // 0x80801890: jal         0x80000000
    // 0x80801894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bstrexlarge(rdram, ctx);
        goto after_7;
    // 0x80801894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80801898: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080189C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808018A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808018A4: jr          $ra
    // 0x808018A8: nop

    return;
    // 0x808018A8: nop

;}
RECOMP_FUNC void func_808018AC_bstrexlarge(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808018AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808018B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808018B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808018B8: jal         0x8000000C
    // 0x808018BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8080000C_bstrexlarge(rdram, ctx);
        goto after_0;
    // 0x808018BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808018C0: jal         0x8000081C
    // 0x808018C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bstrexlarge_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x808018C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808018C8: jal         0x800004B4
    // 0x808018CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004B4_bstrexlarge(rdram, ctx);
        goto after_2;
    // 0x808018CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808018D0: lui         $a1, 0x3F65
    ctx->r5 = S32(0X3F65 << 16);
    // 0x808018D4: ori         $a1, $a1, 0xCFAB
    ctx->r5 = ctx->r5 | 0XCFAB;
    // 0x808018D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808018DC: jal         0x800A2D2C
    // 0x808018E0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2D2C(rdram, ctx);
        goto after_3;
    // 0x808018E0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x808018E4: lui         $a1, 0x3ECB
    ctx->r5 = S32(0X3ECB << 16);
    // 0x808018E8: ori         $a1, $a1, 0x9F56
    ctx->r5 = ctx->r5 | 0X9F56;
    // 0x808018EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808018F0: jal         0x800A2D2C
    // 0x808018F4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2D2C(rdram, ctx);
        goto after_4;
    // 0x808018F4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x808018F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808018FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80801900: jal         0x800002E0
    // 0x80801904: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_808002E0_bstrexlarge(rdram, ctx);
        goto after_5;
    // 0x80801904: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80801908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080190C: jal         0x8009E5C8
    // 0x80801910: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x80801910: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_6:
    // 0x80801914: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801918: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080191C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801920: jr          $ra
    // 0x80801924: nop

    return;
    // 0x80801924: nop

;}
RECOMP_FUNC void bstrexlarge_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801928: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080192C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(159, 0X1A40) << 16);
    // 0x80801930: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801934: jr          $ra
    // 0x80801938: lw          $v0, 0x1A40($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X1A40));
    return;
    // 0x80801938: lw          $v0, 0x1A40($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(159, 0X1A40));
    // 0x8080193C: nop

;}
RECOMP_FUNC void func_80800000_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x80091A58
    // 0x8080000C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x8080000C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x80800010: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80800014: beq         $t6, $zero, L_8080002C
    if (ctx->r14 == 0) {
        // 0x80800018: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8080002C;
    }
    // 0x80800018: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8080001C: jal         0x800C6E38
    // 0x80800020: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_800C6E38(rdram, ctx);
        goto after_1;
    // 0x80800020: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_1:
    // 0x80800024: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80800028: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8080002C:
    // 0x8080002C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800030: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800034: jr          $ra
    // 0x80800038: nop

    return;
    // 0x80800038: nop

;}
RECOMP_FUNC void func_8080003C_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080003C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800044: jal         0x80091A58
    // 0x80800048: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80800048: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x8080004C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800054: jr          $ra
    // 0x80800058: nop

    return;
    // 0x80800058: nop

;}
RECOMP_FUNC void func_8080005C_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080005C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800064: jal         0x80099B94
    // 0x80800068: nop

    func_80099B94(rdram, ctx);
        goto after_0;
    // 0x80800068: nop

    after_0:
    // 0x8080006C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800074: jr          $ra
    // 0x80800078: nop

    return;
    // 0x80800078: nop

;}
RECOMP_FUNC void func_8080007C_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080007C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800084: jal         0x8009E6EC
    // 0x80800088: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800088: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080008C: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x80800090: beq         $v0, $at, L_808000B8
    if (ctx->r2 == ctx->r1) {
        // 0x80800094: addiu       $at, $zero, 0x1D
        ctx->r1 = ADD32(0, 0X1D);
            goto L_808000B8;
    }
    // 0x80800094: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x80800098: beq         $v0, $at, L_808000B8
    if (ctx->r2 == ctx->r1) {
        // 0x8080009C: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_808000B8;
    }
    // 0x8080009C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x808000A0: beq         $v0, $at, L_808000B8
    if (ctx->r2 == ctx->r1) {
        // 0x808000A4: addiu       $at, $zero, 0x25
        ctx->r1 = ADD32(0, 0X25);
            goto L_808000B8;
    }
    // 0x808000A4: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x808000A8: beql        $v0, $at, L_808000BC
    if (ctx->r2 == ctx->r1) {
        // 0x808000AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808000BC;
    }
    goto skip_0;
    // 0x808000AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808000B0: jal         0x80099B94
    // 0x808000B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80099B94(rdram, ctx);
        goto after_1;
    // 0x808000B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
L_808000B8:
    // 0x808000B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808000BC:
    // 0x808000BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000C0: jr          $ra
    // 0x808000C4: nop

    return;
    // 0x808000C4: nop

;}
RECOMP_FUNC void func_808000C8_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000D0: lbu         $t6, 0x15E($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X15E);
    // 0x808000D4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x808000D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808000DC: bne         $t6, $zero, L_808000E8
    if (ctx->r14 != 0) {
        // 0x808000E0: nop
    
            goto L_808000E8;
    }
    // 0x808000E0: nop

    // 0x808000E4: sb          $zero, 0x160($a0)
    MEM_B(0X160, ctx->r4) = 0;
L_808000E8:
    // 0x808000E8: beq         $a1, $zero, L_80800108
    if (ctx->r5 == 0) {
        // 0x808000EC: sb          $a1, 0x15E($a3)
        MEM_B(0X15E, ctx->r7) = ctx->r5;
            goto L_80800108;
    }
    // 0x808000EC: sb          $a1, 0x15E($a3)
    MEM_B(0X15E, ctx->r7) = ctx->r5;
    // 0x808000F0: beq         $a1, $at, L_80800108
    if (ctx->r5 == ctx->r1) {
        // 0x808000F4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800108;
    }
    // 0x808000F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808000F8: beq         $a1, $at, L_80800128
    if (ctx->r5 == ctx->r1) {
        // 0x808000FC: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80800128;
    }
    // 0x808000FC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80800100: b           L_80800148
    // 0x80800104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800148;
    // 0x80800104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800108:
    // 0x80800108: lbu         $a0, 0x160($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X160);
    // 0x8080010C: beql        $a0, $zero, L_80800148
    if (ctx->r4 == 0) {
        // 0x80800110: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800148;
    }
    goto skip_0;
    // 0x80800110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800114: jal         0x800C2FDC
    // 0x80800118: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x80800118: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x8080011C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80800120: b           L_80800144
    // 0x80800124: sb          $zero, 0x160($a3)
    MEM_B(0X160, ctx->r7) = 0;
        goto L_80800144;
    // 0x80800124: sb          $zero, 0x160($a3)
    MEM_B(0X160, ctx->r7) = 0;
L_80800128:
    // 0x80800128: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(160, 0X1AF0) << 16);
    // 0x8080012C: addiu       $a2, $a2, 0x1AF0
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(160, 0X1AF0));
    // 0x80800130: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800134: jal         0x8009D454
    // 0x80800138: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8009D454(rdram, ctx);
        goto after_1;
    // 0x80800138: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x8080013C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80800140: sb          $v0, 0x160($a3)
    MEM_B(0X160, ctx->r7) = ctx->r2;
L_80800144:
    // 0x80800144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800148:
    // 0x80800148: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080014C: jr          $ra
    // 0x80800150: nop

    return;
    // 0x80800150: nop

;}
RECOMP_FUNC void func_80800154_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800154: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080015C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800160: jal         0x8009EF10
    // 0x80800164: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8009EF10(rdram, ctx);
        goto after_0;
    // 0x80800164: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800168: beq         $v0, $zero, L_80800190
    if (ctx->r2 == 0) {
        // 0x8080016C: addiu       $v1, $zero, 0x145
        ctx->r3 = ADD32(0, 0X145);
            goto L_80800190;
    }
    // 0x8080016C: addiu       $v1, $zero, 0x145
    ctx->r3 = ADD32(0, 0X145);
    // 0x80800170: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800174: beq         $v0, $at, L_80800198
    if (ctx->r2 == ctx->r1) {
        // 0x80800178: addiu       $v1, $zero, 0x146
        ctx->r3 = ADD32(0, 0X146);
            goto L_80800198;
    }
    // 0x80800178: addiu       $v1, $zero, 0x146
    ctx->r3 = ADD32(0, 0X146);
    // 0x8080017C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800180: beq         $v0, $at, L_808001A0
    if (ctx->r2 == ctx->r1) {
        // 0x80800184: addiu       $t6, $zero, 0x144
        ctx->r14 = ADD32(0, 0X144);
            goto L_808001A0;
    }
    // 0x80800184: addiu       $t6, $zero, 0x144
    ctx->r14 = ADD32(0, 0X144);
    // 0x80800188: b           L_808001A4
    // 0x8080018C: nop

        goto L_808001A4;
    // 0x8080018C: nop

L_80800190:
    // 0x80800190: b           L_808001A4
    // 0x80800194: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
        goto L_808001A4;
    // 0x80800194: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
L_80800198:
    // 0x80800198: b           L_808001A4
    // 0x8080019C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
        goto L_808001A4;
    // 0x8080019C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
L_808001A0:
    // 0x808001A0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_808001A4:
    // 0x808001A4: jal         0x8009E6F8
    // 0x808001A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E6F8(rdram, ctx);
        goto after_1;
    // 0x808001A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808001AC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808001B0: beq         $v0, $v1, L_808001BC
    if (ctx->r2 == ctx->r3) {
        // 0x808001B4: nop
    
            goto L_808001BC;
    }
    // 0x808001B4: nop

    // 0x808001B8: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
L_808001BC:
    // 0x808001BC: jal         0x80000000
    // 0x808001C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80800000_bstrexsmall(rdram, ctx);
        goto after_2;
    // 0x808001C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x808001C4: beq         $v0, $zero, L_808001D0
    if (ctx->r2 == 0) {
        // 0x808001C8: addiu       $t7, $zero, 0x143
        ctx->r15 = ADD32(0, 0X143);
            goto L_808001D0;
    }
    // 0x808001C8: addiu       $t7, $zero, 0x143
    ctx->r15 = ADD32(0, 0X143);
    // 0x808001CC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_808001D0:
    // 0x808001D0: jal         0x8008DD04
    // 0x808001D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008DD04(rdram, ctx);
        goto after_3;
    // 0x808001D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x808001D8: beq         $v0, $zero, L_808001E4
    if (ctx->r2 == 0) {
        // 0x808001DC: addiu       $t8, $zero, 0x13E
        ctx->r24 = ADD32(0, 0X13E);
            goto L_808001E4;
    }
    // 0x808001DC: addiu       $t8, $zero, 0x13E
    ctx->r24 = ADD32(0, 0X13E);
    // 0x808001E0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_808001E4:
    // 0x808001E4: jal         0x8000003C
    // 0x808001E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8080003C_bstrexsmall(rdram, ctx);
        goto after_4;
    // 0x808001E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x808001EC: beq         $v0, $zero, L_808001F8
    if (ctx->r2 == 0) {
        // 0x808001F0: addiu       $t9, $zero, 0x13F
        ctx->r25 = ADD32(0, 0X13F);
            goto L_808001F8;
    }
    // 0x808001F0: addiu       $t9, $zero, 0x13F
    ctx->r25 = ADD32(0, 0X13F);
    // 0x808001F4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_808001F8:
    // 0x808001F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001FC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80800200: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800204: jr          $ra
    // 0x80800208: nop

    return;
    // 0x80800208: nop

;}
RECOMP_FUNC void func_8080020C_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080020C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800210: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800214: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800218: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8080021C: jal         0x8009EF10
    // 0x80800220: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009EF10(rdram, ctx);
        goto after_0;
    // 0x80800220: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800224: beq         $v0, $zero, L_80800250
    if (ctx->r2 == 0) {
        // 0x80800228: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80800250;
    }
    // 0x80800228: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080022C: beq         $v0, $at, L_80800244
    if (ctx->r2 == ctx->r1) {
        // 0x80800230: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800244;
    }
    // 0x80800230: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800234: beql        $v0, $at, L_80800250
    if (ctx->r2 == ctx->r1) {
        // 0x80800238: addiu       $s0, $zero, 0x144
        ctx->r16 = ADD32(0, 0X144);
            goto L_80800250;
    }
    goto skip_0;
    // 0x80800238: addiu       $s0, $zero, 0x144
    ctx->r16 = ADD32(0, 0X144);
    skip_0:
    // 0x8080023C: b           L_80800250
    // 0x80800240: nop

        goto L_80800250;
    // 0x80800240: nop

L_80800244:
    // 0x80800244: b           L_80800250
    // 0x80800248: addiu       $s0, $zero, 0x146
    ctx->r16 = ADD32(0, 0X146);
        goto L_80800250;
    // 0x80800248: addiu       $s0, $zero, 0x146
    ctx->r16 = ADD32(0, 0X146);
    // 0x8080024C: addiu       $s0, $zero, 0x144
    ctx->r16 = ADD32(0, 0X144);
L_80800250:
    // 0x80800250: jal         0x80097AD0
    // 0x80800254: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80097AD0(rdram, ctx);
        goto after_1;
    // 0x80800254: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800258: beq         $v0, $zero, L_8080026C
    if (ctx->r2 == 0) {
        // 0x8080025C: nop
    
            goto L_8080026C;
    }
    // 0x8080025C: nop

    // 0x80800260: jal         0x800848A8
    // 0x80800264: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _badrone_entrypoint_24(rdram, ctx);
        goto after_2;
    // 0x80800264: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800268: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8080026C:
    // 0x8080026C: jal         0x80000000
    // 0x80800270: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80800000_bstrexsmall(rdram, ctx);
        goto after_3;
    // 0x80800270: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x80800274: beq         $v0, $zero, L_80800280
    if (ctx->r2 == 0) {
        // 0x80800278: nop
    
            goto L_80800280;
    }
    // 0x80800278: nop

    // 0x8080027C: addiu       $s0, $zero, 0x143
    ctx->r16 = ADD32(0, 0X143);
L_80800280:
    // 0x80800280: jal         0x8008DD04
    // 0x80800284: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008DD04(rdram, ctx);
        goto after_4;
    // 0x80800284: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800288: beq         $v0, $zero, L_80800294
    if (ctx->r2 == 0) {
        // 0x8080028C: nop
    
            goto L_80800294;
    }
    // 0x8080028C: nop

    // 0x80800290: addiu       $s0, $zero, 0x13E
    ctx->r16 = ADD32(0, 0X13E);
L_80800294:
    // 0x80800294: jal         0x8000003C
    // 0x80800298: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8080003C_bstrexsmall(rdram, ctx);
        goto after_5;
    // 0x80800298: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x8080029C: beq         $v0, $zero, L_808002A8
    if (ctx->r2 == 0) {
        // 0x808002A0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808002A8;
    }
    // 0x808002A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808002A4: addiu       $s0, $zero, 0x13F
    ctx->r16 = ADD32(0, 0X13F);
L_808002A8:
    // 0x808002A8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x808002AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002B0: jr          $ra
    // 0x808002B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x808002B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_808002B8_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808002BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808002C4: jal         0x8009EF1C
    // 0x808002C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x808002C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808002CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002D0: jal         0x8009EF10
    // 0x808002D4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x808002D4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x808002D8: beq         $v0, $zero, L_808002FC
    if (ctx->r2 == 0) {
        // 0x808002DC: lwc1        $f12, 0x24($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
            goto L_808002FC;
    }
    // 0x808002DC: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x808002E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808002E4: beq         $v0, $at, L_80800310
    if (ctx->r2 == ctx->r1) {
        // 0x808002E8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800310;
    }
    // 0x808002E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808002EC: beql        $v0, $at, L_80800338
    if (ctx->r2 == ctx->r1) {
        // 0x808002F0: lui         $at, 0x4396
        ctx->r1 = S32(0X4396 << 16);
            goto L_80800338;
    }
    goto skip_0;
    // 0x808002F0: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    skip_0:
    // 0x808002F4: b           L_80800354
    // 0x808002F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800354;
    // 0x808002F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808002FC:
    // 0x808002FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800300: jal         0x8009B9B0
    // 0x80800304: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800304: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800308: b           L_80800354
    // 0x8080030C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800354;
    // 0x8080030C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800310:
    // 0x80800310: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80800314: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800318: jal         0x800F1214
    // 0x8080031C: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x8080031C: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    after_3:
    // 0x80800320: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800324: jal         0x8009B9B0
    // 0x80800328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080032C: b           L_80800354
    // 0x80800330: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800354;
    // 0x80800330: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800334: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
L_80800338:
    // 0x80800338: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8080033C: jal         0x800F1214
    // 0x80800340: lui         $a2, 0x4416
    ctx->r6 = S32(0X4416 << 16);
    func_800F1214(rdram, ctx);
        goto after_5;
    // 0x80800340: lui         $a2, 0x4416
    ctx->r6 = S32(0X4416 << 16);
    after_5:
    // 0x80800344: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800348: jal         0x8009B9B0
    // 0x8080034C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_6;
    // 0x8080034C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800350: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800354:
    // 0x80800354: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800358: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080035C: jr          $ra
    // 0x80800360: nop

    return;
    // 0x80800360: nop

;}
RECOMP_FUNC void func_80800364_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800364: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080036C: jal         0x80000448
    // 0x80800370: nop

    bstrexsmall_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800370: nop

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
RECOMP_FUNC void func_80800384_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800384: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800388: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080038C: jal         0x800004CC
    // 0x80800390: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    bstrexsmall_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800390: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800394: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800398: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080039C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808003A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808003A4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x808003A8: jal         0x8009FFD8
    // 0x808003AC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x808003AC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x808003B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808003B4: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x808003B8: jal         0x8009C99C
    // 0x808003BC: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_2;
    // 0x808003BC: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_2:
    // 0x808003C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808003C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808003C8: jr          $ra
    // 0x808003CC: nop

    return;
    // 0x808003CC: nop

;}
RECOMP_FUNC void func_808003D0_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808003D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808003D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808003DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808003E0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x808003E4: jal         0x8009D3A8
    // 0x808003E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_0;
    // 0x808003E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808003EC: jal         0x800005DC
    // 0x808003F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bstrexsmall_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x808003F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808003F4: jal         0x8008CAEC
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_2;
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808003FC: beq         $v0, $zero, L_8080040C
    if (ctx->r2 == 0) {
        // 0x80800400: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080040C;
    }
    // 0x80800400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800404: addiu       $t6, $zero, 0x145
    ctx->r14 = ADD32(0, 0X145);
    // 0x80800408: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_8080040C:
    // 0x8080040C: jal         0x8000020C
    // 0x80800410: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8080020C_bstrexsmall(rdram, ctx);
        goto after_3;
    // 0x80800410: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x80800414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800418: jal         0x8009E5C8
    // 0x8080041C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x8080041C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_4:
    // 0x80800420: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800424: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800428: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080042C: jr          $ra
    // 0x80800430: nop

    return;
    // 0x80800430: nop

;}
RECOMP_FUNC void bstrexsmall_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800434: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800438: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(160, 0X1B08) << 16);
    // 0x8080043C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800440: jr          $ra
    // 0x80800444: lw          $v0, 0x1B08($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B08));
    return;
    // 0x80800444: lw          $v0, 0x1B08($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B08));
;}
RECOMP_FUNC void bstrexsmall_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800448: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080044C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800450: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800454: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800458: jal         0x8009E74C
    // 0x8080045C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x8080045C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x80800460: bne         $v0, $zero, L_808004B8
    if (ctx->r2 != 0) {
        // 0x80800464: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004B8;
    }
    // 0x80800464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800468: jal         0x800000C8
    // 0x8080046C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_808000C8_bstrexsmall(rdram, ctx);
        goto after_1;
    // 0x8080046C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800470: jal         0x8009EF60
    // 0x80800474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF60(rdram, ctx);
        goto after_2;
    // 0x80800474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080047C: jal         0x80092864
    // 0x80800480: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_80092864(rdram, ctx);
        goto after_3;
    // 0x80800480: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_3:
    // 0x80800484: jal         0x8009E474
    // 0x80800488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E474(rdram, ctx);
        goto after_4;
    // 0x80800488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080048C: jal         0x80095A40
    // 0x80800490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095A40(rdram, ctx);
        goto after_5;
    // 0x80800490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800498: jal         0x8009590C
    // 0x8080049C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009590C(rdram, ctx);
        goto after_6;
    // 0x8080049C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x808004A0: jal         0x8009BC6C
    // 0x808004A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_7;
    // 0x808004A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808004A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808004B0: jal         0x800947EC
    // 0x808004B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_8;
    // 0x808004B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
L_808004B8:
    // 0x808004B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808004BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808004C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808004C4: jr          $ra
    // 0x808004C8: nop

    return;
    // 0x808004C8: nop

;}
RECOMP_FUNC void bstrexsmall_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808004D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808004D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808004D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808004DC: jal         0x8009E77C
    // 0x808004E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8009E77C(rdram, ctx);
        goto after_0;
    // 0x808004E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x808004E4: bne         $v0, $zero, L_808005C8
    if (ctx->r2 != 0) {
        // 0x808004E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005C8;
    }
    // 0x808004E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004EC: sb          $zero, 0x15E($s0)
    MEM_B(0X15E, ctx->r16) = 0;
    // 0x808004F0: jal         0x800000C8
    // 0x808004F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_808000C8_bstrexsmall(rdram, ctx);
        goto after_1;
    // 0x808004F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808004F8: jal         0x8009EFA8
    // 0x808004FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EFA8(rdram, ctx);
        goto after_2;
    // 0x808004FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800500: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x80800504: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080050C: jal         0x8009F1C8
    // 0x80800510: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_3;
    // 0x80800510: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800514: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x80800518: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x8080051C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800520: jal         0x8009F1C8
    // 0x80800524: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009F1C8(rdram, ctx);
        goto after_4;
    // 0x80800524: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80800528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080052C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800530: jal         0x8009F1C8
    // 0x80800534: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_5;
    // 0x80800534: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_5:
    // 0x80800538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080053C: jal         0x80092864
    // 0x80800540: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    func_80092864(rdram, ctx);
        goto after_6;
    // 0x80800540: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    after_6:
    // 0x80800544: jal         0x8009E4AC
    // 0x80800548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_7;
    // 0x80800548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080054C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800550: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800554: jal         0x8009E55C
    // 0x80800558: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    func_8009E55C(rdram, ctx);
        goto after_8;
    // 0x80800558: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    after_8:
    // 0x8080055C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800560: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800564: jal         0x8009E53C
    // 0x80800568: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E53C(rdram, ctx);
        goto after_9;
    // 0x80800568: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_9:
    // 0x8080056C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800570: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800574: jal         0x8009E55C
    // 0x80800578: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    func_8009E55C(rdram, ctx);
        goto after_10;
    // 0x80800578: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    after_10:
    // 0x8080057C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800580: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800584: jal         0x8009E53C
    // 0x80800588: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E53C(rdram, ctx);
        goto after_11;
    // 0x80800588: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_11:
    // 0x8080058C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800590: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x80800594: jal         0x800959C8
    // 0x80800598: lui         $a2, 0x4260
    ctx->r6 = S32(0X4260 << 16);
    func_800959C8(rdram, ctx);
        goto after_12;
    // 0x80800598: lui         $a2, 0x4260
    ctx->r6 = S32(0X4260 << 16);
    after_12:
    // 0x8080059C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005A0: jal         0x8009590C
    // 0x808005A4: lui         $a1, 0x42FA
    ctx->r5 = S32(0X42FA << 16);
    func_8009590C(rdram, ctx);
        goto after_13;
    // 0x808005A4: lui         $a1, 0x42FA
    ctx->r5 = S32(0X42FA << 16);
    after_13:
    // 0x808005A8: lui         $a1, 0xC53B
    ctx->r5 = S32(0XC53B << 16);
    // 0x808005AC: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x808005B0: jal         0x8009BCB4
    // 0x808005B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCB4(rdram, ctx);
        goto after_14;
    // 0x808005B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808005B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808005C0: jal         0x800947EC
    // 0x808005C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_15;
    // 0x808005C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
L_808005C8:
    // 0x808005C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808005CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808005D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808005D4: jr          $ra
    // 0x808005D8: nop

    return;
    // 0x808005D8: nop

;}
RECOMP_FUNC void bstrexsmall_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808005E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005E4: lbu         $a1, 0x160($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X160);
    // 0x808005E8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x808005EC: beql        $a1, $zero, L_80800674
    if (ctx->r5 == 0) {
        // 0x808005F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800674;
    }
    goto skip_0;
    // 0x808005F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808005F4: lbu         $t6, 0x15E($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X15E);
    // 0x808005F8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808005FC: andi        $a0, $a1, 0xFF
    ctx->r4 = ctx->r5 & 0XFF;
    // 0x80800600: bnel        $t6, $at, L_80800674
    if (ctx->r14 != ctx->r1) {
        // 0x80800604: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800674;
    }
    goto skip_1;
    // 0x80800604: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80800608: jal         0x800C3920
    // 0x8080060C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800C3920(rdram, ctx);
        goto after_0;
    // 0x8080060C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800610: jal         0x800D8FF8
    // 0x80800614: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x80800614: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80800618: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8080061C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(160, 0X1AD0) << 16);
    // 0x80800620: lwc1        $f8, 0x1AD0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(160, 0X1AD0));
    // 0x80800624: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80800628: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8080062C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80800630: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800634: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80800638: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8080063C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80800640: jal         0x800F0E28
    // 0x80800644: nop

    func_800F0E28(rdram, ctx);
        goto after_2;
    // 0x80800644: nop

    after_2:
    // 0x80800648: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8080064C: beq         $v0, $zero, L_80800664
    if (ctx->r2 == 0) {
        // 0x80800650: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80800664;
    }
    // 0x80800650: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80800654: jal         0x800C3058
    // 0x80800658: lbu         $a0, 0x160($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X160);
    func_800C3058(rdram, ctx);
        goto after_3;
    // 0x80800658: lbu         $a0, 0x160($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X160);
    after_3:
    // 0x8080065C: b           L_80800674
    // 0x80800660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800674;
    // 0x80800660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800664:
    // 0x80800664: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80800668: jal         0x800000C8
    // 0x8080066C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_808000C8_bstrexsmall(rdram, ctx);
        goto after_4;
    // 0x8080066C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80800670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800674:
    // 0x80800674: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800678: jr          $ra
    // 0x8080067C: nop

    return;
    // 0x8080067C: nop

;}
RECOMP_FUNC void func_80800680_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800680: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800684: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80800688: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8080068C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80800690: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80800694: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80800698: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8080069C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808006A0: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x808006A4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x808006A8: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x808006AC: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x808006B0: bc1f        L_808006EC
    if (!c1cs) {
        // 0x808006B4: lui         $at, 0x4234
        ctx->r1 = S32(0X4234 << 16);
            goto L_808006EC;
    }
    // 0x808006B4: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x808006B8: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x808006BC: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x808006C0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x808006C4: nop

    // 0x808006C8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
L_808006CC:
    // 0x808006CC: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x808006D0: jal         0x800849F0
    // 0x808006D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x808006D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x808006D8: add.s       $f20, $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f26.fl;
    // 0x808006DC: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x808006E0: nop

    // 0x808006E4: bc1tl       L_808006CC
    if (c1cs) {
        // 0x808006E8: mfc1        $a1, $f20
        ctx->r5 = (int32_t)ctx->f20.u32l;
            goto L_808006CC;
    }
    goto skip_0;
    // 0x808006E8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    skip_0:
L_808006EC:
    // 0x808006EC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x808006F0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x808006F4: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x808006F8: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x808006FC: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x80800700: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80800704: jr          $ra
    // 0x80800708: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80800708: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8080070C_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080070C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800710: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800714: jal         0x80085230
    // 0x80800718: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _basudie_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x80800718: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080071C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800720: jal         0x8009BF5C
    // 0x80800724: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_1;
    // 0x80800724: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80800728: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080072C: jal         0x8009C4CC
    // 0x80800730: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_2;
    // 0x80800730: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800738: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080073C: jr          $ra
    // 0x80800740: nop

    return;
    // 0x80800740: nop

;}
RECOMP_FUNC void func_80800744_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800744: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800748: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080074C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800750: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800754: jal         0x8008CABC
    // 0x80800758: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800758: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x8080075C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80800760: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800764: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800768: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080076C: jal         0x8008AF24
    // 0x80800770: swc1        $f4, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f4.u32l;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80800770: swc1        $f4, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f4.u32l;
    after_1:
    // 0x80800774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800778: jal         0x8008B1A0
    // 0x8080077C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_2;
    // 0x8080077C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800784: jal         0x8008AED4
    // 0x80800788: addiu       $a1, $zero, 0x148
    ctx->r5 = ADD32(0, 0X148);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x80800788: addiu       $a1, $zero, 0x148
    ctx->r5 = ADD32(0, 0X148);
    after_3:
    // 0x8080078C: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x80800790: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800798: jal         0x8008B1D4
    // 0x8080079C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_4;
    // 0x8080079C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x808007A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007A4: jal         0x8008B1BC
    // 0x808007A8: lui         $a1, 0x4090
    ctx->r5 = S32(0X4090 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_5;
    // 0x808007A8: lui         $a1, 0x4090
    ctx->r5 = S32(0X4090 << 16);
    after_5:
    // 0x808007AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007B0: jal         0x8008B134
    // 0x808007B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_6;
    // 0x808007B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x808007B8: jal         0x8008B064
    // 0x808007BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x808007BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808007C0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x808007C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808007C8: lw          $a1, 0x16C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X16C);
    // 0x808007CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808007D0: lui         $a2, 0x4448
    ctx->r6 = S32(0X4448 << 16);
    // 0x808007D4: lui         $a3, 0xC516
    ctx->r7 = S32(0XC516 << 16);
    // 0x808007D8: jal         0x80085218
    // 0x808007DC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    _basudie_entrypoint_3(rdram, ctx);
        goto after_8;
    // 0x808007DC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x808007E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808007E4: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x808007E8: jal         0x8009BFE4
    // 0x808007EC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_9;
    // 0x808007EC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_9:
    // 0x808007F0: lui         $a1, 0x3FB3
    ctx->r5 = S32(0X3FB3 << 16);
    // 0x808007F4: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x808007F8: jal         0x8009D820
    // 0x808007FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009D820(rdram, ctx);
        goto after_10;
    // 0x808007FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x80800800: sb          $zero, 0x15C($s1)
    MEM_B(0X15C, ctx->r17) = 0;
    // 0x80800804: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800808: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8080080C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800810: jr          $ra
    // 0x80800814: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80800814: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80800818_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800818: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080081C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800820: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800824: jal         0x8008CABC
    // 0x80800828: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800828: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080082C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800830: jal         0x80085228
    // 0x80800834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080083C: jal         0x8009B9B0
    // 0x80800840: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800840: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_2:
    // 0x80800844: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
    // 0x80800848: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080084C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800850: beq         $v0, $zero, L_80800878
    if (ctx->r2 == 0) {
        // 0x80800854: nop
    
            goto L_80800878;
    }
    // 0x80800854: nop

    // 0x80800858: beq         $v0, $at, L_80800890
    if (ctx->r2 == ctx->r1) {
        // 0x8080085C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800890;
    }
    // 0x8080085C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800860: beq         $v0, $at, L_80800900
    if (ctx->r2 == ctx->r1) {
        // 0x80800864: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800900;
    }
    // 0x80800864: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800868: beql        $v0, $at, L_80800968
    if (ctx->r2 == ctx->r1) {
        // 0x8080086C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800968;
    }
    goto skip_0;
    // 0x8080086C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800870: b           L_80800968
    // 0x80800874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800968;
    // 0x80800874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800878:
    // 0x80800878: jal         0x8008DF8C
    // 0x8080087C: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    func_8008DF8C(rdram, ctx);
        goto after_3;
    // 0x8080087C: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_3:
    // 0x80800880: beq         $v0, $zero, L_80800964
    if (ctx->r2 == 0) {
        // 0x80800884: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80800964;
    }
    // 0x80800884: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800888: b           L_80800964
    // 0x8080088C: sb          $t6, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r14;
        goto L_80800964;
    // 0x8080088C: sb          $t6, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r14;
L_80800890:
    // 0x80800890: jal         0x8008E078
    // 0x80800894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_4;
    // 0x80800894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800898: beq         $v0, $zero, L_80800964
    if (ctx->r2 == 0) {
        // 0x8080089C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800964;
    }
    // 0x8080089C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008A0: addiu       $a1, $zero, 0x428
    ctx->r5 = ADD32(0, 0X428);
    // 0x808008A4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808008A8: jal         0x8009DF18
    // 0x808008AC: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_5;
    // 0x808008AC: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_5:
    // 0x808008B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808008B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x808008B8: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x808008BC: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x808008C0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808008C4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808008C8: jal         0x80085490
    // 0x808008CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamotor_entrypoint_1(rdram, ctx);
        goto after_6;
    // 0x808008CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808008D0: jal         0x80000680
    // 0x808008D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800680_bstrexsmall(rdram, ctx);
        goto after_7;
    // 0x808008D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808008D8: jal         0x8009E058
    // 0x808008DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E058(rdram, ctx);
        goto after_8;
    // 0x808008DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808008E0: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x808008E4: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x808008E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008EC: jal         0x8008CF1C
    // 0x808008F0: lui         $a2, 0x4020
    ctx->r6 = S32(0X4020 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_9;
    // 0x808008F0: lui         $a2, 0x4020
    ctx->r6 = S32(0X4020 << 16);
    after_9:
    // 0x808008F4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x808008F8: b           L_80800964
    // 0x808008FC: sb          $t7, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r15;
        goto L_80800964;
    // 0x808008FC: sb          $t7, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r15;
L_80800900:
    // 0x80800900: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x80800904: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800908: lwc1        $f4, 0x16C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x8080090C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800910: jal         0x800F0E00
    // 0x80800914: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_800F0E00(rdram, ctx);
        goto after_10;
    // 0x80800914: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_10:
    // 0x80800918: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x8080091C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800920: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x80800924: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80800928: nop

    // 0x8080092C: bc1f        L_8080093C
    if (!c1cs) {
        // 0x80800930: nop
    
            goto L_8080093C;
    }
    // 0x80800930: nop

    // 0x80800934: jal         0x80084A10
    // 0x80800938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_9(rdram, ctx);
        goto after_11;
    // 0x80800938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_8080093C:
    // 0x8080093C: jal         0x8008B324
    // 0x80800940: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B324(rdram, ctx);
        goto after_12;
    // 0x80800940: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_12:
    // 0x80800944: beq         $v0, $zero, L_80800964
    if (ctx->r2 == 0) {
        // 0x80800948: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800964;
    }
    // 0x80800948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080094C: jal         0x8008CED4
    // 0x80800950: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CED4(rdram, ctx);
        goto after_13;
    // 0x80800950: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_13:
    // 0x80800954: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80800958: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8080095C: sb          $t8, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r24;
    // 0x80800960: swc1        $f10, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f10.u32l;
L_80800964:
    // 0x80800964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800968:
    // 0x80800968: jal         0x8009E5C8
    // 0x8080096C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_14;
    // 0x8080096C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x80800970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800974: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800978: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080097C: jr          $ra
    // 0x80800980: nop

    return;
    // 0x80800980: nop

;}
RECOMP_FUNC void bstrexsmall_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800984: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800988: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(160, 0X1B18) << 16);
    // 0x8080098C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800990: jr          $ra
    // 0x80800994: lw          $v0, 0x1B18($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B18));
    return;
    // 0x80800994: lw          $v0, 0x1B18($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B18));
;}
RECOMP_FUNC void func_80800998_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800998: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080099C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808009A0: jal         0x80000448
    // 0x808009A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstrexsmall_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808009A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808009A8: jal         0x80082FF0
    // 0x808009AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x808009AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808009B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808009B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808009B8: jr          $ra
    // 0x808009BC: nop

    return;
    // 0x808009BC: nop

;}
RECOMP_FUNC void func_808009C0_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808009C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808009C8: jal         0x800004CC
    // 0x808009CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstrexsmall_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808009CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808009D0: jal         0x80082FE0
    // 0x808009D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x808009D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808009D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808009DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808009E0: jr          $ra
    // 0x808009E4: nop

    return;
    // 0x808009E4: nop

;}
RECOMP_FUNC void func_808009E8_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808009EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808009F0: jal         0x80082FE8
    // 0x808009F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808009F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808009F8: jal         0x800005DC
    // 0x808009FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstrexsmall_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x808009FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A08: jr          $ra
    // 0x80800A0C: nop

    return;
    // 0x80800A0C: nop

;}
RECOMP_FUNC void bstrexsmall_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A10: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800A14: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(160, 0X1B28) << 16);
    // 0x80800A18: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800A1C: jr          $ra
    // 0x80800A20: lw          $v0, 0x1B28($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B28));
    return;
    // 0x80800A20: lw          $v0, 0x1B28($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B28));
;}
RECOMP_FUNC void func_80800A24_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800A28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800A2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800A30: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800A34: jal         0x8008CABC
    // 0x80800A38: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800A38: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800A3C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80800A40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800A44: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800A48: beq         $v1, $at, L_80800A60
    if (ctx->r3 == ctx->r1) {
        // 0x80800A4C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800A60;
    }
    // 0x80800A4C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800A50: beq         $v1, $at, L_80800AC0
    if (ctx->r3 == ctx->r1) {
        // 0x80800A54: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800AC0;
    }
    // 0x80800A54: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800A58: b           L_80800AD8
    // 0x80800A5C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
        goto L_80800AD8;
    // 0x80800A5C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
L_80800A60:
    // 0x80800A60: jal         0x8008AF24
    // 0x80800A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80800A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A6C: jal         0x8008AED4
    // 0x80800A70: addiu       $a1, $zero, 0x1D1
    ctx->r5 = ADD32(0, 0X1D1);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x80800A70: addiu       $a1, $zero, 0x1D1
    ctx->r5 = ADD32(0, 0X1D1);
    after_2:
    // 0x80800A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A78: jal         0x8008B1BC
    // 0x80800A7C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x80800A7C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_3:
    // 0x80800A80: lui         $a2, 0x3F37
    ctx->r6 = S32(0X3F37 << 16);
    // 0x80800A84: ori         $a2, $a2, 0xA3D
    ctx->r6 = ctx->r6 | 0XA3D;
    // 0x80800A88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A8C: jal         0x8008B1D4
    // 0x80800A90: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_4;
    // 0x80800A90: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800A94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A98: jal         0x8008B134
    // 0x80800A9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x80800A9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80800AA0: lui         $a1, 0x3EE6
    ctx->r5 = S32(0X3EE6 << 16);
    // 0x80800AA4: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80800AA8: jal         0x8008B24C
    // 0x80800AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_6;
    // 0x80800AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800AB0: jal         0x8008B064
    // 0x80800AB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x80800AB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800AB8: b           L_80800AD4
    // 0x80800ABC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
        goto L_80800AD4;
    // 0x80800ABC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_80800AC0:
    // 0x80800AC0: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80800AC4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800AC8: jal         0x8008CF1C
    // 0x80800ACC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_8;
    // 0x80800ACC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_8:
    // 0x80800AD0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_80800AD4:
    // 0x80800AD4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
L_80800AD8:
    // 0x80800AD8: sb          $v1, 0x15C($t6)
    MEM_B(0X15C, ctx->r14) = ctx->r3;
    // 0x80800ADC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800AE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800AE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800AE8: jr          $ra
    // 0x80800AEC: nop

    return;
    // 0x80800AEC: nop

;}
RECOMP_FUNC void func_80800AF0_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800AF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800AF8: jal         0x80000448
    // 0x80800AFC: nop

    bstrexsmall_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800AFC: nop

    after_0:
    // 0x80800B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800B08: jr          $ra
    // 0x80800B0C: nop

    return;
    // 0x80800B0C: nop

;}
RECOMP_FUNC void func_80800B10_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800B14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B18: jal         0x800004CC
    // 0x80800B1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstrexsmall_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800B1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800B20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800B24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800B28: jal         0x80000A24
    // 0x80800B2C: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
    func_80800A24_bstrexsmall(rdram, ctx);
        goto after_1;
    // 0x80800B2C: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
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
RECOMP_FUNC void func_80800B40_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800B44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800B48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800B4C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800B50: jal         0x800005DC
    // 0x80800B54: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    bstrexsmall_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800B54: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800B58: jal         0x800002B8
    // 0x80800B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808002B8_bstrexsmall(rdram, ctx);
        goto after_1;
    // 0x80800B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800B60: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
    // 0x80800B64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800B68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B6C: beq         $v0, $at, L_80800B84
    if (ctx->r2 == ctx->r1) {
        // 0x80800B70: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800B84;
    }
    // 0x80800B70: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800B74: beq         $v0, $at, L_80800BA4
    if (ctx->r2 == ctx->r1) {
        // 0x80800B78: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800BA4;
    }
    // 0x80800B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B7C: b           L_80800BDC
    // 0x80800B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800BDC;
    // 0x80800B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800B84:
    // 0x80800B84: jal         0x8008DF8C
    // 0x80800B88: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_2;
    // 0x80800B88: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_2:
    // 0x80800B8C: beq         $v0, $zero, L_80800BD8
    if (ctx->r2 == 0) {
        // 0x80800B90: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800BD8;
    }
    // 0x80800B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B94: jal         0x80000A24
    // 0x80800B98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800A24_bstrexsmall(rdram, ctx);
        goto after_3;
    // 0x80800B98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80800B9C: b           L_80800BDC
    // 0x80800BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800BDC;
    // 0x80800BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800BA4:
    // 0x80800BA4: jal         0x8009D3A8
    // 0x80800BA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_4;
    // 0x80800BA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80800BAC: jal         0x8008E078
    // 0x80800BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_5;
    // 0x80800BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800BB4: beql        $v0, $zero, L_80800BDC
    if (ctx->r2 == 0) {
        // 0x80800BB8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800BDC;
    }
    goto skip_0;
    // 0x80800BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800BBC: jal         0x800A2E18
    // 0x80800BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2E18(rdram, ctx);
        goto after_6;
    // 0x80800BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800BC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BC8: jal         0x8009B9B0
    // 0x80800BCC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_7;
    // 0x80800BCC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_7:
    // 0x80800BD0: addiu       $t6, $zero, 0x13B
    ctx->r14 = ADD32(0, 0X13B);
    // 0x80800BD4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800BD8:
    // 0x80800BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800BDC:
    // 0x80800BDC: jal         0x8009E5C8
    // 0x80800BE0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_8;
    // 0x80800BE0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x80800BE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800BE8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800BEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800BF0: jr          $ra
    // 0x80800BF4: nop

    return;
    // 0x80800BF4: nop

;}
RECOMP_FUNC void bstrexsmall_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BF8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800BFC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(160, 0X1B38) << 16);
    // 0x80800C00: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800C04: jr          $ra
    // 0x80800C08: lw          $v0, 0x1B38($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B38));
    return;
    // 0x80800C08: lw          $v0, 0x1B38($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B38));
;}
RECOMP_FUNC void bstrexsmall_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800C10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800C14: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80800C18: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80800C1C: jal         0x8009C128
    // 0x80800C20: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800C20: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80800C24: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80800C28: jal         0x800EFC7C
    // 0x80800C2C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800EFC7C(rdram, ctx);
        goto after_1;
    // 0x80800C2C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x80800C30: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(160, 0X1AD4) << 16);
    // 0x80800C34: lwc1        $f4, 0x1AD4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(160, 0X1AD4));
    // 0x80800C38: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(160, 0X1AD8) << 16);
    // 0x80800C3C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80800C40: nop

    // 0x80800C44: bc1f        L_80800C54
    if (!c1cs) {
        // 0x80800C48: nop
    
            goto L_80800C54;
    }
    // 0x80800C48: nop

    // 0x80800C4C: b           L_80800C94
    // 0x80800C50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80800C94;
    // 0x80800C50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800C54:
    // 0x80800C54: lwc1        $f6, 0x1AD8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(160, 0X1AD8));
    // 0x80800C58: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800C5C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80800C60: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80800C64: nop

    // 0x80800C68: bc1f        L_80800C78
    if (!c1cs) {
        // 0x80800C6C: nop
    
            goto L_80800C78;
    }
    // 0x80800C6C: nop

    // 0x80800C70: b           L_80800C94
    // 0x80800C74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800C94;
    // 0x80800C74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800C78:
    // 0x80800C78: jal         0x8008DAE8
    // 0x80800C7C: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    func_8008DAE8(rdram, ctx);
        goto after_2;
    // 0x80800C7C: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    after_2:
    // 0x80800C80: bnel        $v0, $zero, L_80800C94
    if (ctx->r2 != 0) {
        // 0x80800C84: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80800C94;
    }
    goto skip_0;
    // 0x80800C84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x80800C88: b           L_80800C94
    // 0x80800C8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800C94;
    // 0x80800C8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800C90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800C94:
    // 0x80800C94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800C9C: jr          $ra
    // 0x80800CA0: nop

    return;
    // 0x80800CA0: nop

;}
RECOMP_FUNC void func_80800CA4_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CA4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800CA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800CAC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800CB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800CB4: jal         0x8008CABC
    // 0x80800CB8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800CB8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800CBC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80800CC0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800CC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800CC8: beq         $a1, $zero, L_80800E70
    if (ctx->r5 == 0) {
        // 0x80800CCC: sb          $a1, 0x15C($s0)
        MEM_B(0X15C, ctx->r16) = ctx->r5;
            goto L_80800E70;
    }
    // 0x80800CCC: sb          $a1, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r5;
    // 0x80800CD0: beq         $a1, $at, L_80800CE8
    if (ctx->r5 == ctx->r1) {
        // 0x80800CD4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800CE8;
    }
    // 0x80800CD4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800CD8: beq         $a1, $at, L_80800E58
    if (ctx->r5 == ctx->r1) {
        // 0x80800CDC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E58;
    }
    // 0x80800CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CE0: b           L_80800E84
    // 0x80800CE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800E84;
    // 0x80800CE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800CE8:
    // 0x80800CE8: jal         0x8008AF24
    // 0x80800CEC: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80800CEC: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    after_1:
    // 0x80800CF0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800CF4: jal         0x8008AED4
    // 0x80800CF8: addiu       $a1, $zero, 0x1D1
    ctx->r5 = ADD32(0, 0X1D1);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x80800CF8: addiu       $a1, $zero, 0x1D1
    ctx->r5 = ADD32(0, 0X1D1);
    after_2:
    // 0x80800CFC: lui         $a1, 0x400C
    ctx->r5 = S32(0X400C << 16);
    // 0x80800D00: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800D04: jal         0x8008B1BC
    // 0x80800D08: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x80800D08: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x80800D0C: lui         $a2, 0x3F37
    ctx->r6 = S32(0X3F37 << 16);
    // 0x80800D10: ori         $a2, $a2, 0xA3D
    ctx->r6 = ctx->r6 | 0XA3D;
    // 0x80800D14: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800D18: jal         0x8008B1D4
    // 0x80800D1C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_4;
    // 0x80800D1C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800D20: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800D24: jal         0x8008B134
    // 0x80800D28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x80800D28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80800D2C: lui         $a1, 0x3E46
    ctx->r5 = S32(0X3E46 << 16);
    // 0x80800D30: ori         $a1, $a1, 0xA7F0
    ctx->r5 = ctx->r5 | 0XA7F0;
    // 0x80800D34: jal         0x8008B24C
    // 0x80800D38: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B24C(rdram, ctx);
        goto after_6;
    // 0x80800D38: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x80800D3C: jal         0x8008B064
    // 0x80800D40: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x80800D40: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_7:
    // 0x80800D44: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800D48: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800D54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800D58: jal         0x8009FFD8
    // 0x80800D5C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_8;
    // 0x80800D5C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_8:
    // 0x80800D60: jal         0x8009EF04
    // 0x80800D64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_9;
    // 0x80800D64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800D68: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800D6C: nop

    // 0x80800D70: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800D74: nop

    // 0x80800D78: bc1t        L_80800D94
    if (c1cs) {
        // 0x80800D7C: nop
    
            goto L_80800D94;
    }
    // 0x80800D7C: nop

    // 0x80800D80: jal         0x8009EEB8
    // 0x80800D84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_10;
    // 0x80800D84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800D88: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800D8C: jal         0x8009C914
    // 0x80800D90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_11;
    // 0x80800D90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_80800D94:
    // 0x80800D94: jal         0x8009C990
    // 0x80800D98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_12;
    // 0x80800D98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800D9C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800DA0: jal         0x8009B9C0
    // 0x80800DA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_13;
    // 0x80800DA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800DA8: jal         0x8009C990
    // 0x80800DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_14;
    // 0x80800DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800DB0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80800DB4: jal         0x8009BB00
    // 0x80800DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_15;
    // 0x80800DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800DBC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800DC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DC4: jal         0x8009BA68
    // 0x80800DC8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009BA68(rdram, ctx);
        goto after_16;
    // 0x80800DC8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_16:
    // 0x80800DCC: lui         $a1, 0x4489
    ctx->r5 = S32(0X4489 << 16);
    // 0x80800DD0: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80800DD4: jal         0x8009BA58
    // 0x80800DD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_17;
    // 0x80800DD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800DDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DE0: jal         0x8009BCB4
    // 0x80800DE4: lui         $a1, 0xC4E1
    ctx->r5 = S32(0XC4E1 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_18;
    // 0x80800DE4: lui         $a1, 0xC4E1
    ctx->r5 = S32(0XC4E1 << 16);
    after_18:
    // 0x80800DE8: jal         0x800DC0C0
    // 0x80800DEC: nop

    func_800DC0C0(rdram, ctx);
        goto after_19;
    // 0x80800DEC: nop

    after_19:
    // 0x80800DF0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800DF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800DF8: lui         $a2, 0x3FA6
    ctx->r6 = S32(0X3FA6 << 16);
    // 0x80800DFC: lui         $a3, 0x3FAC
    ctx->r7 = S32(0X3FAC << 16);
    // 0x80800E00: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80800E04: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800E08: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E10: bc1f        L_80800E44
    if (!c1cs) {
        // 0x80800E14: addiu       $a1, $zero, 0x4D9
        ctx->r5 = ADD32(0, 0X4D9);
            goto L_80800E44;
    }
    // 0x80800E14: addiu       $a1, $zero, 0x4D9
    ctx->r5 = ADD32(0, 0X4D9);
    // 0x80800E18: lui         $a2, 0x3FA6
    ctx->r6 = S32(0X3FA6 << 16);
    // 0x80800E1C: lui         $a3, 0x3FAC
    ctx->r7 = S32(0X3FAC << 16);
    // 0x80800E20: addiu       $t7, $zero, 0x55F0
    ctx->r15 = ADD32(0, 0X55F0);
    // 0x80800E24: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800E28: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800E2C: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800E30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E34: jal         0x8009DBB0
    // 0x80800E38: addiu       $a1, $zero, 0x4D8
    ctx->r5 = ADD32(0, 0X4D8);
    func_8009DBB0(rdram, ctx);
        goto after_20;
    // 0x80800E38: addiu       $a1, $zero, 0x4D8
    ctx->r5 = ADD32(0, 0X4D8);
    after_20:
    // 0x80800E3C: b           L_80800E84
    // 0x80800E40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800E84;
    // 0x80800E40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800E44:
    // 0x80800E44: addiu       $t8, $zero, 0x55F0
    ctx->r24 = ADD32(0, 0X55F0);
    // 0x80800E48: jal         0x8009DBB0
    // 0x80800E4C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8009DBB0(rdram, ctx);
        goto after_21;
    // 0x80800E4C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_21:
    // 0x80800E50: b           L_80800E84
    // 0x80800E54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800E84;
    // 0x80800E54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800E58:
    // 0x80800E58: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80800E5C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800E60: jal         0x8008CF1C
    // 0x80800E64: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_22;
    // 0x80800E64: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_22:
    // 0x80800E68: b           L_80800E84
    // 0x80800E6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800E84;
    // 0x80800E6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800E70:
    // 0x80800E70: lui         $a1, 0xC53B
    ctx->r5 = S32(0XC53B << 16);
    // 0x80800E74: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80800E78: jal         0x8009BCB4
    // 0x80800E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCB4(rdram, ctx);
        goto after_23;
    // 0x80800E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80800E80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800E84:
    // 0x80800E84: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800E88: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800E8C: jr          $ra
    // 0x80800E90: nop

    return;
    // 0x80800E90: nop

;}
RECOMP_FUNC void func_80800E94_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800E98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800E9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800EA0: jal         0x80000CA4
    // 0x80800EA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800CA4_bstrexsmall(rdram, ctx);
        goto after_0;
    // 0x80800EA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800EA8: jal         0x80000448
    // 0x80800EAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstrexsmall_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800EAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800EB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800EB8: jr          $ra
    // 0x80800EBC: nop

    return;
    // 0x80800EBC: nop

;}
RECOMP_FUNC void func_80800EC0_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800EC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800EC8: jal         0x800004CC
    // 0x80800ECC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstrexsmall_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800ECC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800ED0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800ED4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800ED8: jal         0x80000CA4
    // 0x80800EDC: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
    func_80800CA4_bstrexsmall(rdram, ctx);
        goto after_1;
    // 0x80800EDC: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
    after_1:
    // 0x80800EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800EE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800EE8: jr          $ra
    // 0x80800EEC: nop

    return;
    // 0x80800EEC: nop

;}
RECOMP_FUNC void func_80800EF0_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EF0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800EF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800EF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800EFC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800F00: jal         0x800005DC
    // 0x80800F04: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    bstrexsmall_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800F04: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x80800F08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F0C: jal         0x8009BB24
    // 0x80800F10: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8009BB24(rdram, ctx);
        goto after_1;
    // 0x80800F10: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x80800F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F18: jal         0x80091A30
    // 0x80800F1C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_2;
    // 0x80800F1C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_2:
    // 0x80800F20: beq         $v0, $zero, L_80800F48
    if (ctx->r2 == 0) {
        // 0x80800F24: lwc1        $f6, 0x2C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_80800F48;
    }
    // 0x80800F24: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800F28: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800F2C: nop

    // 0x80800F30: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800F34: nop

    // 0x80800F38: bc1fl       L_80800F4C
    if (!c1cs) {
        // 0x80800F3C: lbu         $v0, 0x15C($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X15C);
            goto L_80800F4C;
    }
    goto skip_0;
    // 0x80800F3C: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
    skip_0:
    // 0x80800F40: jal         0x8009BC6C
    // 0x80800F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_3;
    // 0x80800F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80800F48:
    // 0x80800F48: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
L_80800F4C:
    // 0x80800F4C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800F50: beq         $v0, $at, L_80800F68
    if (ctx->r2 == ctx->r1) {
        // 0x80800F54: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800F68;
    }
    // 0x80800F54: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800F58: beq         $v0, $at, L_80800F94
    if (ctx->r2 == ctx->r1) {
        // 0x80800F5C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800F94;
    }
    // 0x80800F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F60: b           L_80800FD4
    // 0x80800F64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800FD4;
    // 0x80800F64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800F68:
    // 0x80800F68: jal         0x800002B8
    // 0x80800F6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808002B8_bstrexsmall(rdram, ctx);
        goto after_4;
    // 0x80800F6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800F70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F74: jal         0x8008DF8C
    // 0x80800F78: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_5;
    // 0x80800F78: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_5:
    // 0x80800F7C: beq         $v0, $zero, L_80800FD0
    if (ctx->r2 == 0) {
        // 0x80800F80: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800FD0;
    }
    // 0x80800F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F84: jal         0x80000CA4
    // 0x80800F88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800CA4_bstrexsmall(rdram, ctx);
        goto after_6;
    // 0x80800F88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x80800F8C: b           L_80800FD4
    // 0x80800F90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800FD4;
    // 0x80800F90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800F94:
    // 0x80800F94: jal         0x8009D3A8
    // 0x80800F98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_7;
    // 0x80800F98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80800F9C: jal         0x800002B8
    // 0x80800FA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808002B8_bstrexsmall(rdram, ctx);
        goto after_8;
    // 0x80800FA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800FA4: jal         0x8008E078
    // 0x80800FA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_9;
    // 0x80800FA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800FAC: beql        $v0, $zero, L_80800FD4
    if (ctx->r2 == 0) {
        // 0x80800FB0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800FD4;
    }
    goto skip_1;
    // 0x80800FB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800FB4: jal         0x800A2E18
    // 0x80800FB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2E18(rdram, ctx);
        goto after_10;
    // 0x80800FB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800FBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FC0: jal         0x8009B9B0
    // 0x80800FC4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_11;
    // 0x80800FC4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_11:
    // 0x80800FC8: addiu       $t6, $zero, 0x13B
    ctx->r14 = ADD32(0, 0X13B);
    // 0x80800FCC: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_80800FD0:
    // 0x80800FD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800FD4:
    // 0x80800FD4: jal         0x8009E5C8
    // 0x80800FD8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_12;
    // 0x80800FD8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_12:
    // 0x80800FDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800FE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800FE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800FE8: jr          $ra
    // 0x80800FEC: nop

    return;
    // 0x80800FEC: nop

;}
RECOMP_FUNC void bstrexsmall_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800FF0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800FF4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(160, 0X1B48) << 16);
    // 0x80800FF8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800FFC: jr          $ra
    // 0x80801000: lw          $v0, 0x1B48($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B48));
    return;
    // 0x80801000: lw          $v0, 0x1B48($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B48));
;}
RECOMP_FUNC void func_80801004_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801004: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080100C: jal         0x800845D0
    // 0x80801010: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80801010: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801014: jal         0x80000448
    // 0x80801018: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstrexsmall_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80801018: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080101C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801020: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801024: jr          $ra
    // 0x80801028: nop

    return;
    // 0x80801028: nop

;}
RECOMP_FUNC void func_8080102C_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080102C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801030: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801034: jal         0x800004CC
    // 0x80801038: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstrexsmall_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80801038: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080103C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801040: jal         0x800845D8
    // 0x80801044: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80801044: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80801048: lui         $a2, 0x3F30
    ctx->r6 = S32(0X3F30 << 16);
    // 0x8080104C: ori         $a2, $a2, 0xA3D7
    ctx->r6 = ctx->r6 | 0XA3D7;
    // 0x80801050: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801054: jal         0x800845E0
    // 0x80801058: addiu       $a1, $zero, 0x147
    ctx->r5 = ADD32(0, 0X147);
    _babounce_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80801058: addiu       $a1, $zero, 0x147
    ctx->r5 = ADD32(0, 0X147);
    after_2:
    // 0x8080105C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801060: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801064: jr          $ra
    // 0x80801068: nop

    return;
    // 0x80801068: nop

;}
RECOMP_FUNC void func_8080106C_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080106C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801070: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801074: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801078: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080107C: jal         0x800005DC
    // 0x80801080: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    bstrexsmall_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80801080: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80801084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801088: jal         0x8008CB10
    // 0x8080108C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8008CB10(rdram, ctx);
        goto after_1;
    // 0x8080108C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_1:
    // 0x80801090: beq         $v0, $zero, L_808010A0
    if (ctx->r2 == 0) {
        // 0x80801094: nop
    
            goto L_808010A0;
    }
    // 0x80801094: nop

    // 0x80801098: jal         0x800951B4
    // 0x8080109C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_2;
    // 0x8080109C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_808010A0:
    // 0x808010A0: jal         0x80084600
    // 0x808010A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babounce_entrypoint_9(rdram, ctx);
        goto after_3;
    // 0x808010A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808010A8: beq         $v0, $zero, L_808010B8
    if (ctx->r2 == 0) {
        // 0x808010AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808010B8;
    }
    // 0x808010AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010B0: addiu       $t6, $zero, 0x145
    ctx->r14 = ADD32(0, 0X145);
    // 0x808010B4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_808010B8:
    // 0x808010B8: jal         0x8009E5C8
    // 0x808010BC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x808010BC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x808010C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808010C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808010C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808010CC: jr          $ra
    // 0x808010D0: nop

    return;
    // 0x808010D0: nop

;}
RECOMP_FUNC void bstrexsmall_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010D4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808010D8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(160, 0X1B58) << 16);
    // 0x808010DC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808010E0: jr          $ra
    // 0x808010E4: lw          $v0, 0x1B58($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B58));
    return;
    // 0x808010E4: lw          $v0, 0x1B58($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B58));
;}
RECOMP_FUNC void func_808010E8_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808010EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808010F0: jal         0x800845D0
    // 0x808010F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x808010F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808010F8: jal         0x80000448
    // 0x808010FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstrexsmall_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x808010FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801108: jr          $ra
    // 0x8080110C: nop

    return;
    // 0x8080110C: nop

;}
RECOMP_FUNC void func_80801110_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801118: jal         0x800004CC
    // 0x8080111C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstrexsmall_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x8080111C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801120: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801124: jal         0x800845D8
    // 0x80801128: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80801128: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8080112C: lui         $a2, 0x3F30
    ctx->r6 = S32(0X3F30 << 16);
    // 0x80801130: ori         $a2, $a2, 0xA3D7
    ctx->r6 = ctx->r6 | 0XA3D7;
    // 0x80801134: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801138: jal         0x800845E0
    // 0x8080113C: addiu       $a1, $zero, 0x147
    ctx->r5 = ADD32(0, 0X147);
    _babounce_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x8080113C: addiu       $a1, $zero, 0x147
    ctx->r5 = ADD32(0, 0X147);
    after_2:
    // 0x80801140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801148: jr          $ra
    // 0x8080114C: nop

    return;
    // 0x8080114C: nop

;}
RECOMP_FUNC void func_80801150_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801150: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801158: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8080115C: jal         0x800005DC
    // 0x80801160: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    bstrexsmall_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80801160: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80801164: jal         0x80084600
    // 0x80801168: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _babounce_entrypoint_9(rdram, ctx);
        goto after_1;
    // 0x80801168: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x8080116C: beq         $v0, $zero, L_80801178
    if (ctx->r2 == 0) {
        // 0x80801170: addiu       $t6, $zero, 0x145
        ctx->r14 = ADD32(0, 0X145);
            goto L_80801178;
    }
    // 0x80801170: addiu       $t6, $zero, 0x145
    ctx->r14 = ADD32(0, 0X145);
    // 0x80801174: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80801178:
    // 0x80801178: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080117C: jal         0x8009E5C8
    // 0x80801180: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80801180: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80801184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801188: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080118C: jr          $ra
    // 0x80801190: nop

    return;
    // 0x80801190: nop

;}
RECOMP_FUNC void bstrexsmall_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801194: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801198: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(160, 0X1B68) << 16);
    // 0x8080119C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808011A0: jr          $ra
    // 0x808011A4: lw          $v0, 0x1B68($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B68));
    return;
    // 0x808011A4: lw          $v0, 0x1B68($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B68));
;}
RECOMP_FUNC void func_808011A8_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808011AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808011B0: jal         0x800839B8
    // 0x808011B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x808011B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808011B8: jal         0x80000448
    // 0x808011BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstrexsmall_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x808011BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808011C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808011C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808011C8: jr          $ra
    // 0x808011CC: nop

    return;
    // 0x808011CC: nop

;}
RECOMP_FUNC void func_808011D0_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808011D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808011D8: jal         0x800004CC
    // 0x808011DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstrexsmall_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808011DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808011E0: jal         0x800839C8
    // 0x808011E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x808011E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808011E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808011EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808011F0: jr          $ra
    // 0x808011F4: nop

    return;
    // 0x808011F4: nop

;}
RECOMP_FUNC void func_808011F8_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808011FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801200: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80801204: jal         0x800839E8
    // 0x80801208: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x80801208: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x8080120C: beq         $v0, $zero, L_80801220
    if (ctx->r2 == 0) {
        // 0x80801210: nop
    
            goto L_80801220;
    }
    // 0x80801210: nop

    // 0x80801214: jal         0x800839B0
    // 0x80801218: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsrest_entrypoint_13(rdram, ctx);
        goto after_1;
    // 0x80801218: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x8080121C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_80801220:
    // 0x80801220: jal         0x800005DC
    // 0x80801224: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    bstrexsmall_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x80801224: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80801228: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080122C: jal         0x8009E5C8
    // 0x80801230: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x80801230: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x80801234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801238: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080123C: jr          $ra
    // 0x80801240: nop

    return;
    // 0x80801240: nop

;}
RECOMP_FUNC void bstrexsmall_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801244: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801248: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(160, 0X1B78) << 16);
    // 0x8080124C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801250: jr          $ra
    // 0x80801254: lw          $v0, 0x1B78($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B78));
    return;
    // 0x80801254: lw          $v0, 0x1B78($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B78));
;}
RECOMP_FUNC void func_80801258_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801258: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080125C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801260: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80801264: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80801268: jal         0x8009C128
    // 0x8080126C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8080126C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80801270: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80801274: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x80801278: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8080127C: jal         0x801013A8
    // 0x80801280: lw          $a2, 0x184($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X184);
    func_801013A8(rdram, ctx);
        goto after_1;
    // 0x80801280: lw          $a2, 0x184($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X184);
    after_1:
    // 0x80801284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801288: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080128C: jr          $ra
    // 0x80801290: nop

    return;
    // 0x80801290: nop

;}
RECOMP_FUNC void func_80801294_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801294: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801298: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080129C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808012A0: lbu         $v0, 0x15C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X15C);
    // 0x808012A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808012A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808012AC: beq         $v0, $at, L_808012C8
    if (ctx->r2 == ctx->r1) {
        // 0x808012B0: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_808012C8;
    }
    // 0x808012B0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x808012B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808012B8: beq         $v0, $at, L_808012E0
    if (ctx->r2 == ctx->r1) {
        // 0x808012BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808012E0;
    }
    // 0x808012BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012C0: b           L_808012F0
    // 0x808012C4: nop

        goto L_808012F0;
    // 0x808012C4: nop

L_808012C8:
    // 0x808012C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012CC: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x808012D0: jal         0x80001258
    // 0x808012D4: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_80801258_bstrexsmall(rdram, ctx);
        goto after_0;
    // 0x808012D4: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_0:
    // 0x808012D8: b           L_808012F0
    // 0x808012DC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
        goto L_808012F0;
    // 0x808012DC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
L_808012E0:
    // 0x808012E0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x808012E4: jal         0x80001258
    // 0x808012E8: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_80801258_bstrexsmall(rdram, ctx);
        goto after_1;
    // 0x808012E8: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_1:
    // 0x808012EC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
L_808012F0:
    // 0x808012F0: beq         $a2, $zero, L_8080131C
    if (ctx->r6 == 0) {
        // 0x808012F4: sb          $a2, 0x15C($s0)
        MEM_B(0X15C, ctx->r16) = ctx->r6;
            goto L_8080131C;
    }
    // 0x808012F4: sb          $a2, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r6;
    // 0x808012F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808012FC: beq         $a2, $at, L_80801330
    if (ctx->r6 == ctx->r1) {
        // 0x80801300: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80801330;
    }
    // 0x80801300: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80801304: beq         $a2, $at, L_80801394
    if (ctx->r6 == ctx->r1) {
        // 0x80801308: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80801394;
    }
    // 0x80801308: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8080130C: beq         $a2, $at, L_808013B8
    if (ctx->r6 == ctx->r1) {
        // 0x80801310: nop
    
            goto L_808013B8;
    }
    // 0x80801310: nop

    // 0x80801314: b           L_808013D8
    // 0x80801318: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808013D8;
    // 0x80801318: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8080131C:
    // 0x8080131C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801320: jal         0x800000C8
    // 0x80801324: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_808000C8_bstrexsmall(rdram, ctx);
        goto after_2;
    // 0x80801324: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x80801328: b           L_808013D8
    // 0x8080132C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808013D8;
    // 0x8080132C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80801330:
    // 0x80801330: jal         0x800004CC
    // 0x80801334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bstrexsmall_entrypoint_2(rdram, ctx);
        goto after_3;
    // 0x80801334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801338: lui         $a2, 0x4046
    ctx->r6 = S32(0X4046 << 16);
    // 0x8080133C: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80801340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801344: jal         0x8008CCBC
    // 0x80801348: addiu       $a1, $zero, 0x1D0
    ctx->r5 = ADD32(0, 0X1D0);
    func_8008CCBC(rdram, ctx);
        goto after_4;
    // 0x80801348: addiu       $a1, $zero, 0x1D0
    ctx->r5 = ADD32(0, 0X1D0);
    after_4:
    // 0x8080134C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80801350: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801358: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080135C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80801360: jal         0x8009FFD8
    // 0x80801364: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_8009FFD8(rdram, ctx);
        goto after_5;
    // 0x80801364: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_5:
    // 0x80801368: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x8080136C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80801370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801374: jal         0x8009C99C
    // 0x80801378: lui         $a1, 0x425C
    ctx->r5 = S32(0X425C << 16);
    func_8009C99C(rdram, ctx);
        goto after_6;
    // 0x80801378: lui         $a1, 0x425C
    ctx->r5 = S32(0X425C << 16);
    after_6:
    // 0x8080137C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801380: jal         0x8009B9B0
    // 0x80801384: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_7;
    // 0x80801384: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_7:
    // 0x80801388: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8080138C: b           L_808013D4
    // 0x80801390: sb          $t7, 0x15D($s0)
    MEM_B(0X15D, ctx->r16) = ctx->r15;
        goto L_808013D4;
    // 0x80801390: sb          $t7, 0x15D($s0)
    MEM_B(0X15D, ctx->r16) = ctx->r15;
L_80801394:
    // 0x80801394: jal         0x8008CABC
    // 0x80801398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CABC(rdram, ctx);
        goto after_8;
    // 0x80801398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8080139C: lui         $a2, 0x3E94
    ctx->r6 = S32(0X3E94 << 16);
    // 0x808013A0: ori         $a2, $a2, 0x7AE1
    ctx->r6 = ctx->r6 | 0X7AE1;
    // 0x808013A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808013A8: jal         0x8008B1D4
    // 0x808013AC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_9;
    // 0x808013AC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_9:
    // 0x808013B0: b           L_808013D8
    // 0x808013B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808013D8;
    // 0x808013B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808013B8:
    // 0x808013B8: jal         0x8008CABC
    // 0x808013BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CABC(rdram, ctx);
        goto after_10;
    // 0x808013BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808013C0: lui         $a2, 0x3EFA
    ctx->r6 = S32(0X3EFA << 16);
    // 0x808013C4: ori         $a2, $a2, 0xE148
    ctx->r6 = ctx->r6 | 0XE148;
    // 0x808013C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808013CC: jal         0x8008B1D4
    // 0x808013D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_11;
    // 0x808013D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_11:
L_808013D4:
    // 0x808013D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808013D8:
    // 0x808013D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808013DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808013E0: jr          $ra
    // 0x808013E4: nop

    return;
    // 0x808013E4: nop

;}
RECOMP_FUNC void func_808013E8_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808013E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808013EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808013F0: jal         0x80000448
    // 0x808013F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bstrexsmall_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808013F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808013F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808013FC: jal         0x80001294
    // 0x80801400: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80801294_bstrexsmall(rdram, ctx);
        goto after_1;
    // 0x80801400: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80801404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080140C: jr          $ra
    // 0x80801410: nop

    return;
    // 0x80801410: nop

;}
RECOMP_FUNC void func_80801414_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801418: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080141C: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
    // 0x80801420: jal         0x80001294
    // 0x80801424: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80801294_bstrexsmall(rdram, ctx);
        goto after_0;
    // 0x80801424: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80801428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080142C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801430: jr          $ra
    // 0x80801434: nop

    return;
    // 0x80801434: nop

;}
RECOMP_FUNC void func_80801438_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801438: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080143C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801440: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801444: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801448: jal         0x800005DC
    // 0x8080144C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    bstrexsmall_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x8080144C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80801450: jal         0x800DB9B0
    // 0x80801454: nop

    func_800DB9B0(rdram, ctx);
        goto after_1;
    // 0x80801454: nop

    after_1:
    // 0x80801458: beql        $v0, $zero, L_80801480
    if (ctx->r2 == 0) {
        // 0x8080145C: lbu         $v0, 0x15C($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X15C);
            goto L_80801480;
    }
    goto skip_0;
    // 0x8080145C: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
    skip_0:
    // 0x80801460: jal         0x8009D2E4
    // 0x80801464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D2E4(rdram, ctx);
        goto after_2;
    // 0x80801464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801468: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8080146C: bne         $v0, $at, L_8080147C
    if (ctx->r2 != ctx->r1) {
        // 0x80801470: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080147C;
    }
    // 0x80801470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801474: jal         0x8009D2D8
    // 0x80801478: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009D2D8(rdram, ctx);
        goto after_3;
    // 0x80801478: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
L_8080147C:
    // 0x8080147C: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
L_80801480:
    // 0x80801480: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80801484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801488: beq         $v0, $at, L_808014B0
    if (ctx->r2 == ctx->r1) {
        // 0x8080148C: lui         $a1, 0x3E05
        ctx->r5 = S32(0X3E05 << 16);
            goto L_808014B0;
    }
    // 0x8080148C: lui         $a1, 0x3E05
    ctx->r5 = S32(0X3E05 << 16);
    // 0x80801490: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80801494: beq         $v0, $at, L_80801528
    if (ctx->r2 == ctx->r1) {
        // 0x80801498: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801528;
    }
    // 0x80801498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080149C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808014A0: beq         $v0, $at, L_80801558
    if (ctx->r2 == ctx->r1) {
        // 0x808014A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801558;
    }
    // 0x808014A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014A8: b           L_8080158C
    // 0x808014AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080158C;
    // 0x808014AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808014B0:
    // 0x808014B0: jal         0x8008CB10
    // 0x808014B4: ori         $a1, $a1, 0x1EB8
    ctx->r5 = ctx->r5 | 0X1EB8;
    func_8008CB10(rdram, ctx);
        goto after_4;
    // 0x808014B4: ori         $a1, $a1, 0x1EB8
    ctx->r5 = ctx->r5 | 0X1EB8;
    after_4:
    // 0x808014B8: beq         $v0, $zero, L_808014C8
    if (ctx->r2 == 0) {
        // 0x808014BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808014C8;
    }
    // 0x808014BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014C0: jal         0x800000C8
    // 0x808014C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_808000C8_bstrexsmall(rdram, ctx);
        goto after_5;
    // 0x808014C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
L_808014C8:
    // 0x808014C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014CC: jal         0x80091A94
    // 0x808014D0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A94(rdram, ctx);
        goto after_6;
    // 0x808014D0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_6:
    // 0x808014D4: beq         $v0, $zero, L_808014E0
    if (ctx->r2 == 0) {
        // 0x808014D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808014E0;
    }
    // 0x808014D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014DC: sb          $zero, 0x15D($s0)
    MEM_B(0X15D, ctx->r16) = 0;
L_808014E0:
    // 0x808014E0: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x808014E4: jal         0x8008CB10
    // 0x808014E8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_8008CB10(rdram, ctx);
        goto after_7;
    // 0x808014E8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_7:
    // 0x808014EC: beql        $v0, $zero, L_8080158C
    if (ctx->r2 == 0) {
        // 0x808014F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080158C;
    }
    goto skip_1;
    // 0x808014F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808014F4: lbu         $t6, 0x15D($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X15D);
    // 0x808014F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x808014FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801500: beq         $t6, $zero, L_80801518
    if (ctx->r14 == 0) {
        // 0x80801504: nop
    
            goto L_80801518;
    }
    // 0x80801504: nop

    // 0x80801508: jal         0x80001294
    // 0x8080150C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80801294_bstrexsmall(rdram, ctx);
        goto after_8;
    // 0x8080150C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80801510: b           L_8080158C
    // 0x80801514: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080158C;
    // 0x80801514: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801518:
    // 0x80801518: jal         0x80001294
    // 0x8080151C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80801294_bstrexsmall(rdram, ctx);
        goto after_9;
    // 0x8080151C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x80801520: b           L_8080158C
    // 0x80801524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080158C;
    // 0x80801524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801528:
    // 0x80801528: jal         0x8008CB10
    // 0x8080152C: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    func_8008CB10(rdram, ctx);
        goto after_10;
    // 0x8080152C: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    after_10:
    // 0x80801530: beq         $v0, $zero, L_80801540
    if (ctx->r2 == 0) {
        // 0x80801534: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801540;
    }
    // 0x80801534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801538: jal         0x800000C8
    // 0x8080153C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_808000C8_bstrexsmall(rdram, ctx);
        goto after_11;
    // 0x8080153C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_11:
L_80801540:
    // 0x80801540: jal         0x8008CAEC
    // 0x80801544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_12;
    // 0x80801544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80801548: beq         $v0, $zero, L_80801588
    if (ctx->r2 == 0) {
        // 0x8080154C: addiu       $t7, $zero, 0x145
        ctx->r15 = ADD32(0, 0X145);
            goto L_80801588;
    }
    // 0x8080154C: addiu       $t7, $zero, 0x145
    ctx->r15 = ADD32(0, 0X145);
    // 0x80801550: b           L_80801588
    // 0x80801554: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
        goto L_80801588;
    // 0x80801554: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80801558:
    // 0x80801558: lui         $a1, 0x3EE6
    ctx->r5 = S32(0X3EE6 << 16);
    // 0x8080155C: jal         0x8008CB10
    // 0x80801560: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    func_8008CB10(rdram, ctx);
        goto after_13;
    // 0x80801560: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    after_13:
    // 0x80801564: beq         $v0, $zero, L_80801574
    if (ctx->r2 == 0) {
        // 0x80801568: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801574;
    }
    // 0x80801568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080156C: jal         0x800000C8
    // 0x80801570: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_808000C8_bstrexsmall(rdram, ctx);
        goto after_14;
    // 0x80801570: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_14:
L_80801574:
    // 0x80801574: jal         0x8008CAEC
    // 0x80801578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_15;
    // 0x80801578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x8080157C: beq         $v0, $zero, L_80801588
    if (ctx->r2 == 0) {
        // 0x80801580: addiu       $t8, $zero, 0x145
        ctx->r24 = ADD32(0, 0X145);
            goto L_80801588;
    }
    // 0x80801580: addiu       $t8, $zero, 0x145
    ctx->r24 = ADD32(0, 0X145);
    // 0x80801584: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80801588:
    // 0x80801588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080158C:
    // 0x8080158C: jal         0x8009E5C8
    // 0x80801590: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_16;
    // 0x80801590: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_16:
    // 0x80801594: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801598: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080159C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808015A0: jr          $ra
    // 0x808015A4: nop

    return;
    // 0x808015A4: nop

;}
RECOMP_FUNC void bstrexsmall_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808015A8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808015AC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(160, 0X1B88) << 16);
    // 0x808015B0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808015B4: jr          $ra
    // 0x808015B8: lw          $v0, 0x1B88($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B88));
    return;
    // 0x808015B8: lw          $v0, 0x1B88($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B88));
;}
RECOMP_FUNC void func_808015BC_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808015BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808015C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808015C4: jal         0x80000448
    // 0x808015C8: nop

    bstrexsmall_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808015C8: nop

    after_0:
    // 0x808015CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808015D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808015D4: jr          $ra
    // 0x808015D8: nop

    return;
    // 0x808015D8: nop

;}
RECOMP_FUNC void func_808015DC_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808015DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808015E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808015E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808015E8: jal         0x800004CC
    // 0x808015EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bstrexsmall_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808015EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808015F0: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x808015F4: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808015F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015FC: jal         0x8008CB3C
    // 0x80801600: addiu       $a1, $zero, 0x1CF
    ctx->r5 = ADD32(0, 0X1CF);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80801600: addiu       $a1, $zero, 0x1CF
    ctx->r5 = ADD32(0, 0X1CF);
    after_1:
    // 0x80801604: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80801608: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080160C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801610: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80801614: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80801618: jal         0x8009FFD8
    // 0x8080161C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x8080161C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80801620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801624: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x80801628: jal         0x8009C99C
    // 0x8080162C: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x8080162C: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_3:
    // 0x80801630: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80801634: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80801638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080163C: jal         0x8008C9BC
    // 0x80801640: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_4;
    // 0x80801640: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_4:
    // 0x80801644: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(160, 0X1ADC) << 16);
    // 0x80801648: lwc1        $f4, 0x1ADC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(160, 0X1ADC));
    // 0x8080164C: lui         $a3, 0x3F5C
    ctx->r7 = S32(0X3F5C << 16);
    // 0x80801650: ori         $a3, $a3, 0x28F6
    ctx->r7 = ctx->r7 | 0X28F6;
    // 0x80801654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801658: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x8080165C: lui         $a2, 0x4416
    ctx->r6 = S32(0X4416 << 16);
    // 0x80801660: jal         0x8008C9F0
    // 0x80801664: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_5;
    // 0x80801664: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x80801668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080166C: jal         0x8008CA30
    // 0x80801670: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CA30(rdram, ctx);
        goto after_6;
    // 0x80801670: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_6:
    // 0x80801674: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801678: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080167C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801680: jr          $ra
    // 0x80801684: nop

    return;
    // 0x80801684: nop

;}
RECOMP_FUNC void func_80801688_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801688: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080168C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801690: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801694: jal         0x800005DC
    // 0x80801698: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bstrexsmall_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80801698: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080169C: jal         0x800002B8
    // 0x808016A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808002B8_bstrexsmall(rdram, ctx);
        goto after_1;
    // 0x808016A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808016A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016A8: jal         0x8009D3A8
    // 0x808016AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_2;
    // 0x808016AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808016B0: lui         $a1, 0x3F11
    ctx->r5 = S32(0X3F11 << 16);
    // 0x808016B4: ori         $a1, $a1, 0xF8A1
    ctx->r5 = ctx->r5 | 0XF8A1;
    // 0x808016B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016BC: jal         0x800A2CE8
    // 0x808016C0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_3;
    // 0x808016C0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x808016C4: lui         $a1, 0x3D8F
    ctx->r5 = S32(0X3D8F << 16);
    // 0x808016C8: ori         $a1, $a1, 0xC505
    ctx->r5 = ctx->r5 | 0XC505;
    // 0x808016CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016D0: jal         0x800A2CE8
    // 0x808016D4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_4;
    // 0x808016D4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x808016D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016DC: jal         0x80000154
    // 0x808016E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800154_bstrexsmall(rdram, ctx);
        goto after_5;
    // 0x808016E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x808016E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016E8: jal         0x8009E5C8
    // 0x808016EC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x808016EC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_6:
    // 0x808016F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808016F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808016F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808016FC: jr          $ra
    // 0x80801700: nop

    return;
    // 0x80801700: nop

;}
RECOMP_FUNC void bstrexsmall_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801704: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801708: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(160, 0X1B98) << 16);
    // 0x8080170C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801710: jr          $ra
    // 0x80801714: lw          $v0, 0x1B98($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B98));
    return;
    // 0x80801714: lw          $v0, 0x1B98($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1B98));
;}
RECOMP_FUNC void func_80801718_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801718: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080171C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801720: jal         0x80090A2C
    // 0x80801724: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80090A2C(rdram, ctx);
        goto after_0;
    // 0x80801724: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801728: jal         0x800951B4
    // 0x8080172C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800951B4(rdram, ctx);
        goto after_1;
    // 0x8080172C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801730: jal         0x80000448
    // 0x80801734: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstrexsmall_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80801734: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80801738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080173C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801740: jr          $ra
    // 0x80801744: nop

    return;
    // 0x80801744: nop

;}
RECOMP_FUNC void func_80801748_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801748: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8080174C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801750: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80801754: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80801758: jal         0x8008CABC
    // 0x8080175C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080175C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80801760: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80801764: jal         0x800004CC
    // 0x80801768: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    bstrexsmall_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80801768: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x8080176C: jal         0x8009E710
    // 0x80801770: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009E710(rdram, ctx);
        goto after_2;
    // 0x80801770: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80801774: addiu       $at, $zero, 0x143
    ctx->r1 = ADD32(0, 0X143);
    // 0x80801778: bne         $v0, $at, L_80801790
    if (ctx->r2 != ctx->r1) {
        // 0x8080177C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801790;
    }
    // 0x8080177C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801780: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80801784: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80801788: b           L_80801798
    // 0x8080178C: nop

        goto L_80801798;
    // 0x8080178C: nop

L_80801790:
    // 0x80801790: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(160, 0X1AE0) << 16);
    // 0x80801794: lwc1        $f0, 0x1AE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(160, 0X1AE0));
L_80801798:
    // 0x80801798: jal         0x8008AF24
    // 0x8080179C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_8008AF24(rdram, ctx);
        goto after_3;
    // 0x8080179C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x808017A0: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x808017A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808017A8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808017AC: jal         0x8008B1C8
    // 0x808017B0: nop

    func_8008B1C8(rdram, ctx);
        goto after_4;
    // 0x808017B0: nop

    after_4:
    // 0x808017B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808017B8: jal         0x8008AED4
    // 0x808017BC: addiu       $a1, $zero, 0x1D2
    ctx->r5 = ADD32(0, 0X1D2);
    func_8008AED4(rdram, ctx);
        goto after_5;
    // 0x808017BC: addiu       $a1, $zero, 0x1D2
    ctx->r5 = ADD32(0, 0X1D2);
    after_5:
    // 0x808017C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808017C4: jal         0x8008B1BC
    // 0x808017C8: lui         $a1, 0x4108
    ctx->r5 = S32(0X4108 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_6;
    // 0x808017C8: lui         $a1, 0x4108
    ctx->r5 = S32(0X4108 << 16);
    after_6:
    // 0x808017CC: lui         $a1, 0x3E05
    ctx->r5 = S32(0X3E05 << 16);
    // 0x808017D0: ori         $a1, $a1, 0x1EB8
    ctx->r5 = ctx->r5 | 0X1EB8;
    // 0x808017D4: jal         0x8008B24C
    // 0x808017D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_7;
    // 0x808017D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808017DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808017E0: jal         0x8008B134
    // 0x808017E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x808017E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x808017E8: jal         0x8008B064
    // 0x808017EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_9;
    // 0x808017EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808017F0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808017F4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808017F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808017FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801800: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80801804: jal         0x8009FFD8
    // 0x80801808: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_10;
    // 0x80801808: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_10:
    // 0x8080180C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801810: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x80801814: jal         0x8009C99C
    // 0x80801818: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_11;
    // 0x80801818: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_11:
    // 0x8080181C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801820: jal         0x8009B9B0
    // 0x80801824: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_12;
    // 0x80801824: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_12:
    // 0x80801828: jal         0x800909CC
    // 0x8080182C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800909CC(rdram, ctx);
        goto after_13;
    // 0x8080182C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x80801830: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801834: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80801838: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8080183C: jr          $ra
    // 0x80801840: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80801840: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80801844_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801844: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801848: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080184C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801850: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801854: jal         0x8009D3A8
    // 0x80801858: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_0;
    // 0x80801858: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8080185C: jal         0x800005DC
    // 0x80801860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bstrexsmall_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x80801860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801864: lui         $a1, 0x3DC2
    ctx->r5 = S32(0X3DC2 << 16);
    // 0x80801868: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    // 0x8080186C: jal         0x8008CB10
    // 0x80801870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x80801870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801874: beq         $v0, $zero, L_80801890
    if (ctx->r2 == 0) {
        // 0x80801878: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801890;
    }
    // 0x80801878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080187C: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x80801880: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80801884: addiu       $a1, $zero, 0x570
    ctx->r5 = ADD32(0, 0X570);
    // 0x80801888: jal         0x8009DF18
    // 0x8080188C: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_3;
    // 0x8080188C: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_3:
L_80801890:
    // 0x80801890: lui         $a1, 0x3F0B
    ctx->r5 = S32(0X3F0B << 16);
    // 0x80801894: ori         $a1, $a1, 0x851F
    ctx->r5 = ctx->r5 | 0X851F;
    // 0x80801898: jal         0x8008CB10
    // 0x8080189C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_4;
    // 0x8080189C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808018A0: beq         $v0, $zero, L_808018D0
    if (ctx->r2 == 0) {
        // 0x808018A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808018D0;
    }
    // 0x808018A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808018A8: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x808018AC: lui         $a3, 0x3FB3
    ctx->r7 = S32(0X3FB3 << 16);
    // 0x808018B0: addiu       $t6, $zero, 0x4E20
    ctx->r14 = ADD32(0, 0X4E20);
    // 0x808018B4: addiu       $t7, $zero, 0x55F0
    ctx->r15 = ADD32(0, 0X55F0);
    // 0x808018B8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x808018BC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808018C0: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x808018C4: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x808018C8: jal         0x8009DEC0
    // 0x808018CC: addiu       $a1, $zero, 0x56F
    ctx->r5 = ADD32(0, 0X56F);
    func_8009DEC0(rdram, ctx);
        goto after_5;
    // 0x808018CC: addiu       $a1, $zero, 0x56F
    ctx->r5 = ADD32(0, 0X56F);
    after_5:
L_808018D0:
    // 0x808018D0: lui         $a1, 0x3F51
    ctx->r5 = S32(0X3F51 << 16);
    // 0x808018D4: ori         $a1, $a1, 0xEB85
    ctx->r5 = ctx->r5 | 0XEB85;
    // 0x808018D8: jal         0x8008CB10
    // 0x808018DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_6;
    // 0x808018DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808018E0: beq         $v0, $zero, L_808018FC
    if (ctx->r2 == 0) {
        // 0x808018E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808018FC;
    }
    // 0x808018E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808018E8: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x808018EC: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x808018F0: addiu       $a1, $zero, 0x570
    ctx->r5 = ADD32(0, 0X570);
    // 0x808018F4: jal         0x8009DF18
    // 0x808018F8: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    func_8009DF18(rdram, ctx);
        goto after_7;
    // 0x808018F8: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    after_7:
L_808018FC:
    // 0x808018FC: lui         $a1, 0x3F6B
    ctx->r5 = S32(0X3F6B << 16);
    // 0x80801900: ori         $a1, $a1, 0x851F
    ctx->r5 = ctx->r5 | 0X851F;
    // 0x80801904: jal         0x8008CB10
    // 0x80801908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_8;
    // 0x80801908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8080190C: beq         $v0, $zero, L_80801928
    if (ctx->r2 == 0) {
        // 0x80801910: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801928;
    }
    // 0x80801910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801914: lui         $a2, 0x3FA6
    ctx->r6 = S32(0X3FA6 << 16);
    // 0x80801918: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x8080191C: addiu       $a1, $zero, 0x570
    ctx->r5 = ADD32(0, 0X570);
    // 0x80801920: jal         0x8009DF18
    // 0x80801924: addiu       $a3, $zero, 0x32C8
    ctx->r7 = ADD32(0, 0X32C8);
    func_8009DF18(rdram, ctx);
        goto after_9;
    // 0x80801924: addiu       $a3, $zero, 0x32C8
    ctx->r7 = ADD32(0, 0X32C8);
    after_9:
L_80801928:
    // 0x80801928: jal         0x800002B8
    // 0x8080192C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808002B8_bstrexsmall(rdram, ctx);
        goto after_10;
    // 0x8080192C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80801930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801934: jal         0x8000020C
    // 0x80801938: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8080020C_bstrexsmall(rdram, ctx);
        goto after_11;
    // 0x80801938: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x8080193C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801940: jal         0x8009E5C8
    // 0x80801944: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_12;
    // 0x80801944: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_12:
    // 0x80801948: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080194C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801950: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801954: jr          $ra
    // 0x80801958: nop

    return;
    // 0x80801958: nop

;}
RECOMP_FUNC void bstrexsmall_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080195C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801960: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(160, 0X1BA8) << 16);
    // 0x80801964: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801968: jr          $ra
    // 0x8080196C: lw          $v0, 0x1BA8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1BA8));
    return;
    // 0x8080196C: lw          $v0, 0x1BA8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1BA8));
;}
RECOMP_FUNC void func_80801970_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801978: jal         0x80000448
    // 0x8080197C: nop

    bstrexsmall_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080197C: nop

    after_0:
    // 0x80801980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801984: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801988: jr          $ra
    // 0x8080198C: nop

    return;
    // 0x8080198C: nop

;}
RECOMP_FUNC void func_80801990_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801990: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801994: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801998: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080199C: jal         0x800004CC
    // 0x808019A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bstrexsmall_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808019A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808019A4: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x808019A8: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x808019AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019B0: jal         0x8008CB3C
    // 0x808019B4: addiu       $a1, $zero, 0x1CE
    ctx->r5 = ADD32(0, 0X1CE);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x808019B4: addiu       $a1, $zero, 0x1CE
    ctx->r5 = ADD32(0, 0X1CE);
    after_1:
    // 0x808019B8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808019BC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808019C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808019C8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x808019CC: jal         0x8009FFD8
    // 0x808019D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x808019D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x808019D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019D8: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x808019DC: jal         0x8009C99C
    // 0x808019E0: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x808019E0: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_3:
    // 0x808019E4: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x808019E8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808019EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019F0: jal         0x8008C9BC
    // 0x808019F4: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_4;
    // 0x808019F4: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_4:
    // 0x808019F8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(160, 0X1AE4) << 16);
    // 0x808019FC: lwc1        $f4, 0x1AE4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(160, 0X1AE4));
    // 0x80801A00: lui         $a3, 0x3F93
    ctx->r7 = S32(0X3F93 << 16);
    // 0x80801A04: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x80801A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A0C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x80801A10: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x80801A14: jal         0x8008C9F0
    // 0x80801A18: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_5;
    // 0x80801A18: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x80801A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A20: jal         0x8008CA30
    // 0x80801A24: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CA30(rdram, ctx);
        goto after_6;
    // 0x80801A24: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_6:
    // 0x80801A28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801A2C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801A30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801A34: jr          $ra
    // 0x80801A38: nop

    return;
    // 0x80801A38: nop

;}
RECOMP_FUNC void func_80801A3C_bstrexsmall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801A3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801A40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801A44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801A48: jal         0x800005DC
    // 0x80801A4C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bstrexsmall_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80801A4C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801A50: jal         0x800002B8
    // 0x80801A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808002B8_bstrexsmall(rdram, ctx);
        goto after_1;
    // 0x80801A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801A58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A5C: jal         0x8009D3A8
    // 0x80801A60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_2;
    // 0x80801A60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80801A64: lui         $a1, 0x3F65
    ctx->r5 = S32(0X3F65 << 16);
    // 0x80801A68: ori         $a1, $a1, 0xCFAB
    ctx->r5 = ctx->r5 | 0XCFAB;
    // 0x80801A6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A70: jal         0x800A2CE8
    // 0x80801A74: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_3;
    // 0x80801A74: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x80801A78: lui         $a1, 0x3ECB
    ctx->r5 = S32(0X3ECB << 16);
    // 0x80801A7C: ori         $a1, $a1, 0x9F56
    ctx->r5 = ctx->r5 | 0X9F56;
    // 0x80801A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A84: jal         0x800A2CE8
    // 0x80801A88: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_4;
    // 0x80801A88: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x80801A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A90: jal         0x80000154
    // 0x80801A94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800154_bstrexsmall(rdram, ctx);
        goto after_5;
    // 0x80801A94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80801A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A9C: jal         0x8009E5C8
    // 0x80801AA0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x80801AA0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_6:
    // 0x80801AA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801AA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801AAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801AB0: jr          $ra
    // 0x80801AB4: nop

    return;
    // 0x80801AB4: nop

;}
RECOMP_FUNC void bstrexsmall_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801AB8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801ABC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(160, 0X1BB8) << 16);
    // 0x80801AC0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801AC4: jr          $ra
    // 0x80801AC8: lw          $v0, 0x1BB8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1BB8));
    return;
    // 0x80801AC8: lw          $v0, 0x1BB8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(160, 0X1BB8));
    // 0x80801ACC: nop

;}
RECOMP_FUNC void bsturn_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8080000C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800010: jal         0x8008CABC
    // 0x80800014: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800014: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800018: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8080001C: jal         0x8008AF24
    // 0x80800020: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80800020: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800028: jal         0x8008AED4
    // 0x8080002C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x8080002C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_2:
    // 0x80800030: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800034: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800038: jal         0x8008B1BC
    // 0x8080003C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x8080003C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800040: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80800044: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800048: jal         0x8008B1C8
    // 0x8080004C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1C8(rdram, ctx);
        goto after_4;
    // 0x8080004C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800054: jal         0x8008B134
    // 0x80800058: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x80800058: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8080005C: jal         0x8008B064
    // 0x80800060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_6;
    // 0x80800060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800064: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800068: jal         0x8008CA4C
    // 0x8080006C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008CA4C(rdram, ctx);
        goto after_7;
    // 0x8080006C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80800070: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800074: jal         0x8009C908
    // 0x80800078: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009C908(rdram, ctx);
        goto after_8;
    // 0x80800078: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x8080007C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800080: jal         0x8009D2D8
    // 0x80800084: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009D2D8(rdram, ctx);
        goto after_9;
    // 0x80800084: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x80800088: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080008C: jal         0x8009B800
    // 0x80800090: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009B800(rdram, ctx);
        goto after_10;
    // 0x80800090: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x80800094: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800098: jal         0x8009BB24
    // 0x8080009C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8009BB24(rdram, ctx);
        goto after_11;
    // 0x8080009C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_11:
    // 0x808000A0: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x808000A4: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x808000A8: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x808000AC: nop

    // 0x808000B0: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x808000B4: jal         0x8002DCA0
    // 0x808000B8: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_12;
    // 0x808000B8: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_12:
    // 0x808000BC: swc1        $f0, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f0.u32l;
    // 0x808000C0: lui         $a2, 0x3F73
    ctx->r6 = S32(0X3F73 << 16);
    // 0x808000C4: lui         $a3, 0x3F86
    ctx->r7 = S32(0X3F86 << 16);
    // 0x808000C8: addiu       $t6, $zero, 0x7530
    ctx->r14 = ADD32(0, 0X7530);
    // 0x808000CC: addiu       $t7, $zero, 0x7D00
    ctx->r15 = ADD32(0, 0X7D00);
    // 0x808000D0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x808000D4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808000D8: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x808000DC: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808000E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808000E4: jal         0x8009DEC0
    // 0x808000E8: addiu       $a1, $zero, 0x411
    ctx->r5 = ADD32(0, 0X411);
    func_8009DEC0(rdram, ctx);
        goto after_13;
    // 0x808000E8: addiu       $a1, $zero, 0x411
    ctx->r5 = ADD32(0, 0X411);
    after_13:
    // 0x808000EC: sw          $zero, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = 0;
    // 0x808000F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808000F4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808000F8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x808000FC: jr          $ra
    // 0x80800100: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80800100: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void bsturn_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800104: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800108: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080010C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800110: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800114: jal         0x8008CABC
    // 0x80800118: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800118: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x8080011C: jal         0x8008B2B4
    // 0x80800120: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B2B4(rdram, ctx);
        goto after_1;
    // 0x80800120: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800124: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800128: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(161, 0X350) << 16);
    // 0x8080012C: lw          $a3, 0x16C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X16C);
    // 0x80800130: lwc1        $f14, 0x350($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(161, 0X350));
    // 0x80800134: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800138: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8080013C: jal         0x800F10B4
    // 0x80800140: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_2;
    // 0x80800140: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80800144: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800148: jal         0x8009B9B0
    // 0x8080014C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x8080014C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800150: lw          $t6, 0x15C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X15C);
    // 0x80800154: addiu       $v1, $t6, 0x1
    ctx->r3 = ADD32(ctx->r14, 0X1);
    // 0x80800158: slti        $at, $v1, 0x6
    ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8080015C: bne         $at, $zero, L_8080016C
    if (ctx->r1 != 0) {
        // 0x80800160: sw          $v1, 0x15C($s0)
        MEM_W(0X15C, ctx->r16) = ctx->r3;
            goto L_8080016C;
    }
    // 0x80800160: sw          $v1, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r3;
    // 0x80800164: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80800168: sw          $v1, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r3;
L_8080016C:
    // 0x8080016C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80800170: beq         $v1, $at, L_80800190
    if (ctx->r3 == ctx->r1) {
        // 0x80800174: nop
    
            goto L_80800190;
    }
    // 0x80800174: nop

    // 0x80800178: beq         $v1, $zero, L_808001DC
    if (ctx->r3 == 0) {
        // 0x8080017C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_808001DC;
    }
    // 0x8080017C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800180: beq         $v1, $at, L_80800208
    if (ctx->r3 == ctx->r1) {
        // 0x80800184: nop
    
            goto L_80800208;
    }
    // 0x80800184: nop

    // 0x80800188: b           L_8080024C
    // 0x8080018C: nop

        goto L_8080024C;
    // 0x8080018C: nop

L_80800190:
    // 0x80800190: jal         0x8009BB18
    // 0x80800194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB18(rdram, ctx);
        goto after_4;
    // 0x80800194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800198: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8080019C: jal         0x8009BB5C
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_5;
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808001A4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x808001A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808001AC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(161, 0X354) << 16);
    // 0x808001B0: lwc1        $f16, 0x354($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(161, 0X354));
    // 0x808001B4: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001BC: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x808001C0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x808001C4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x808001C8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x808001CC: jal         0x800849E0
    // 0x808001D0: nop

    _badust_entrypoint_3(rdram, ctx);
        goto after_6;
    // 0x808001D0: nop

    after_6:
    // 0x808001D4: b           L_8080024C
    // 0x808001D8: nop

        goto L_8080024C;
    // 0x808001D8: nop

L_808001DC:
    // 0x808001DC: jal         0x8009BB18
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB18(rdram, ctx);
        goto after_7;
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808001E4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x808001E8: jal         0x8009BB5C
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_8;
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808001F0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F8: jal         0x800849E0
    // 0x808001FC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    _badust_entrypoint_3(rdram, ctx);
        goto after_9;
    // 0x808001FC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_9:
    // 0x80800200: b           L_8080024C
    // 0x80800204: nop

        goto L_8080024C;
    // 0x80800204: nop

L_80800208:
    // 0x80800208: jal         0x8009BB18
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB18(rdram, ctx);
        goto after_10;
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800210: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800214: jal         0x8009BB5C
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_11;
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8080021C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80800220: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800224: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(161, 0X358) << 16);
    // 0x80800228: lwc1        $f10, 0x358($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(161, 0X358));
    // 0x8080022C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800234: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80800238: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8080023C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80800240: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80800244: jal         0x800849E0
    // 0x80800248: nop

    _badust_entrypoint_3(rdram, ctx);
        goto after_12;
    // 0x80800248: nop

    after_12:
L_8080024C:
    // 0x8080024C: jal         0x8008CABC
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CABC(rdram, ctx);
        goto after_13;
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800254: jal         0x8008B324
    // 0x80800258: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B324(rdram, ctx);
        goto after_14;
    // 0x80800258: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_14:
    // 0x8080025C: beq         $v0, $zero, L_8080026C
    if (ctx->r2 == 0) {
        // 0x80800260: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080026C;
    }
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800264: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80800268: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_8080026C:
    // 0x8080026C: jal         0x800919F4
    // 0x80800270: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_15;
    // 0x80800270: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x80800274: beq         $v0, $zero, L_80800284
    if (ctx->r2 == 0) {
        // 0x80800278: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800284;
    }
    // 0x80800278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080027C: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80800280: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_80800284:
    // 0x80800284: jal         0x80091A58
    // 0x80800288: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_16;
    // 0x80800288: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_16:
    // 0x8080028C: beq         $v0, $zero, L_808002A0
    if (ctx->r2 == 0) {
        // 0x80800290: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002A0;
    }
    // 0x80800290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800294: jal         0x800A055C
    // 0x80800298: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_800A055C(rdram, ctx);
        goto after_17;
    // 0x80800298: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_17:
    // 0x8080029C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_808002A0:
    // 0x808002A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002A4: jal         0x80091A58
    // 0x808002A8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_18;
    // 0x808002A8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_18:
    // 0x808002AC: beql        $v0, $zero, L_808002C4
    if (ctx->r2 == 0) {
        // 0x808002B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002C4;
    }
    goto skip_0;
    // 0x808002B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808002B4: jal         0x8009FE84
    // 0x808002B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE84(rdram, ctx);
        goto after_19;
    // 0x808002B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x808002BC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x808002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808002C4:
    // 0x808002C4: jal         0x8009E5C8
    // 0x808002C8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_20;
    // 0x808002C8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_20:
    // 0x808002CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808002D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808002D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808002D8: jr          $ra
    // 0x808002DC: nop

    return;
    // 0x808002DC: nop

;}
RECOMP_FUNC void bsturn_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002E8: jal         0x8009C984
    // 0x808002EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009C984(rdram, ctx);
        goto after_0;
    // 0x808002EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808002F0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x808002F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808002F8: jal         0x800136E4
    // 0x808002FC: sub.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f4.fl;
    func_800136E4(rdram, ctx);
        goto after_1;
    // 0x808002FC: sub.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f4.fl;
    after_1:
    // 0x80800300: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800304: jal         0x8009C944
    // 0x80800308: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009C944(rdram, ctx);
        goto after_2;
    // 0x80800308: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8080030C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800310: jal         0x8009BF5C
    // 0x80800314: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_3;
    // 0x80800314: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800318: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080031C: jal         0x8009C4CC
    // 0x80800320: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_4;
    // 0x80800320: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080032C: jr          $ra
    // 0x80800330: nop

    return;
    // 0x80800330: nop

;}
RECOMP_FUNC void bsturn_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800334: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800338: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(161, 0X360) << 16);
    // 0x8080033C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800340: jr          $ra
    // 0x80800344: lw          $v0, 0x360($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(161, 0X360));
    return;
    // 0x80800344: lw          $v0, 0x360($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(161, 0X360));
    // 0x80800348: nop

    // 0x8080034C: nop

;}
RECOMP_FUNC void func_80800000_bstwirl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080000C: jal         0x800A0CF4
    // 0x80800010: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_0;
    // 0x80800010: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800014: jal         0x800C6DA0
    // 0x80800018: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    func_800C6DA0(rdram, ctx);
        goto after_1;
    // 0x80800018: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    after_1:
    // 0x8080001C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800020: jal         0x80095774
    // 0x80800024: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    func_80095774(rdram, ctx);
        goto after_2;
    // 0x80800024: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_2:
    // 0x80800028: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080002C: jal         0x80084A28
    // 0x80800030: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _badust_entrypoint_12(rdram, ctx);
        goto after_3;
    // 0x80800030: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80800034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080003C: jr          $ra
    // 0x80800040: nop

    return;
    // 0x80800040: nop

;}
RECOMP_FUNC void func_80800044_bstwirl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800044: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800048: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080004C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800050: lui         $a2, 0x3FA6
    ctx->r6 = S32(0X3FA6 << 16);
    // 0x80800054: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800058: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x8080005C: jal         0x8008CDB8
    // 0x80800060: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    func_8008CDB8(rdram, ctx);
        goto after_0;
    // 0x80800060: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    after_0:
    // 0x80800064: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80800068: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800070: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800074: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800078: jal         0x8009FFD8
    // 0x8080007C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x8080007C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800084: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x80800088: jal         0x8009C99C
    // 0x8080008C: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_2;
    // 0x8080008C: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_2:
    // 0x80800090: jal         0x8009C990
    // 0x80800094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_3;
    // 0x80800094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800098: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080009C: jal         0x8009B9C0
    // 0x808000A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_4;
    // 0x808000A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808000A4: jal         0x8009C990
    // 0x808000A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_5;
    // 0x808000A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808000AC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x808000B0: jal         0x8009BB00
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_6;
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808000B8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C0: jal         0x8009BA68
    // 0x808000C4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009BA68(rdram, ctx);
        goto after_7;
    // 0x808000C4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_7:
    // 0x808000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000CC: jal         0x8009B9B0
    // 0x808000D0: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8009B9B0(rdram, ctx);
        goto after_8;
    // 0x808000D0: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_8:
    // 0x808000D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D8: jal         0x800A0CF4
    // 0x808000DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_9;
    // 0x808000DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E4: jal         0x80095760
    // 0x808000E8: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    func_80095760(rdram, ctx);
        goto after_10;
    // 0x808000E8: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_10:
    // 0x808000EC: jal         0x800DC0C0
    // 0x808000F0: nop

    func_800DC0C0(rdram, ctx);
        goto after_11;
    // 0x808000F0: nop

    after_11:
    // 0x808000F4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808000F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808000FC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800104: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80800108: addiu       $a1, $zero, 0x57E
    ctx->r5 = ADD32(0, 0X57E);
    // 0x8080010C: bc1f        L_80800128
    if (!c1cs) {
        // 0x80800110: nop
    
            goto L_80800128;
    }
    // 0x80800110: nop

    // 0x80800114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800118: jal         0x8009DE38
    // 0x8080011C: addiu       $a1, $zero, 0x57C
    ctx->r5 = ADD32(0, 0X57C);
    func_8009DE38(rdram, ctx);
        goto after_12;
    // 0x8080011C: addiu       $a1, $zero, 0x57C
    ctx->r5 = ADD32(0, 0X57C);
    after_12:
    // 0x80800120: b           L_80800134
    // 0x80800124: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800134;
    // 0x80800124: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800128:
    // 0x80800128: jal         0x8009DE38
    // 0x8080012C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_13;
    // 0x8080012C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_13:
    // 0x80800130: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800134:
    // 0x80800134: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800138: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080013C: jr          $ra
    // 0x80800140: nop

    return;
    // 0x80800140: nop

;}
RECOMP_FUNC void func_80800144_bstwirl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800144: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800148: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080014C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800150: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800154: jal         0x8008CABC
    // 0x80800158: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800158: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x8080015C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800160: jal         0x8009C990
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_1;
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800168: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080016C: jal         0x8009B9C0
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_2;
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800174: lui         $a1, 0x3E38
    ctx->r5 = S32(0X3E38 << 16);
    // 0x80800178: ori         $a1, $a1, 0x51EC
    ctx->r5 = ctx->r5 | 0X51EC;
    // 0x8080017C: jal         0x8008B348
    // 0x80800180: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_3;
    // 0x80800180: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x80800184: beq         $v0, $zero, L_8080019C
    if (ctx->r2 == 0) {
        // 0x80800188: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080019C;
    }
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080018C: addiu       $a1, $zero, 0x5A7
    ctx->r5 = ADD32(0, 0X5A7);
    // 0x80800190: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800194: jal         0x8009DF18
    // 0x80800198: addiu       $a3, $zero, 0x6590
    ctx->r7 = ADD32(0, 0X6590);
    func_8009DF18(rdram, ctx);
        goto after_4;
    // 0x80800198: addiu       $a3, $zero, 0x6590
    ctx->r7 = ADD32(0, 0X6590);
    after_4:
L_8080019C:
    // 0x8080019C: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x808001A0: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x808001A4: jal         0x8008B348
    // 0x808001A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_5;
    // 0x808001A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x808001AC: beq         $v0, $zero, L_808001BC
    if (ctx->r2 == 0) {
        // 0x808001B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001BC;
    }
    // 0x808001B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B4: jal         0x80084A28
    // 0x808001B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _badust_entrypoint_12(rdram, ctx);
        goto after_6;
    // 0x808001B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
L_808001BC:
    // 0x808001BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808001C0: jal         0x8008B348
    // 0x808001C4: lui         $a1, 0x3F40
    ctx->r5 = S32(0X3F40 << 16);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x808001C4: lui         $a1, 0x3F40
    ctx->r5 = S32(0X3F40 << 16);
    after_7:
    // 0x808001C8: beq         $v0, $zero, L_808001D8
    if (ctx->r2 == 0) {
        // 0x808001CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001D8;
    }
    // 0x808001CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D0: jal         0x80084A28
    // 0x808001D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _badust_entrypoint_12(rdram, ctx);
        goto after_8;
    // 0x808001D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
L_808001D8:
    // 0x808001D8: lui         $a1, 0x3F4D
    ctx->r5 = S32(0X3F4D << 16);
    // 0x808001DC: ori         $a1, $a1, 0x14E4
    ctx->r5 = ctx->r5 | 0X14E4;
    // 0x808001E0: jal         0x8008B348
    // 0x808001E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_9;
    // 0x808001E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_9:
    // 0x808001E8: beq         $v0, $zero, L_80800200
    if (ctx->r2 == 0) {
        // 0x808001EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800200;
    }
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F0: jal         0x8009B9B0
    // 0x808001F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_10;
    // 0x808001F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_10:
    // 0x808001F8: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x808001FC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800200:
    // 0x80800200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800204: jal         0x80091A58
    // 0x80800208: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_11;
    // 0x80800208: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_11:
    // 0x8080020C: beq         $v0, $zero, L_80800220
    if (ctx->r2 == 0) {
        // 0x80800210: nop
    
            goto L_80800220;
    }
    // 0x80800210: nop

    // 0x80800214: jal         0x8009FE84
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE84(rdram, ctx);
        goto after_12;
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8080021C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_80800220:
    // 0x80800220: jal         0x8008B2B4
    // 0x80800224: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B2B4(rdram, ctx);
        goto after_13;
    // 0x80800224: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_13:
    // 0x80800228: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(162, 0X2B0) << 16);
    // 0x8080022C: lwc1        $f4, 0x2B0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(162, 0X2B0));
    // 0x80800230: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800234: nop

    // 0x80800238: bc1f        L_80800254
    if (!c1cs) {
        // 0x8080023C: nop
    
            goto L_80800254;
    }
    // 0x8080023C: nop

    // 0x80800240: jal         0x8008E078
    // 0x80800244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_14;
    // 0x80800244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800248: bne         $v0, $zero, L_80800254
    if (ctx->r2 != 0) {
        // 0x8080024C: addiu       $t7, $zero, 0x2F
        ctx->r15 = ADD32(0, 0X2F);
            goto L_80800254;
    }
    // 0x8080024C: addiu       $t7, $zero, 0x2F
    ctx->r15 = ADD32(0, 0X2F);
    // 0x80800250: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80800254:
    // 0x80800254: jal         0x8008E35C
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_15;
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x8080025C: beq         $v0, $zero, L_8080026C
    if (ctx->r2 == 0) {
        // 0x80800260: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080026C;
    }
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800264: addiu       $t8, $zero, 0x4C
    ctx->r24 = ADD32(0, 0X4C);
    // 0x80800268: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_8080026C:
    // 0x8080026C: jal         0x800A02DC
    // 0x80800270: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800A02DC(rdram, ctx);
        goto after_16;
    // 0x80800270: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_16:
    // 0x80800274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800278: jal         0x8009E5C8
    // 0x8080027C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_17;
    // 0x8080027C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_17:
    // 0x80800280: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800284: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800288: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080028C: jr          $ra
    // 0x80800290: nop

    return;
    // 0x80800290: nop

;}
RECOMP_FUNC void bstwirl_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800294: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800298: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(162, 0X2C0) << 16);
    // 0x8080029C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808002A0: jr          $ra
    // 0x808002A4: lw          $v0, 0x2C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(162, 0X2C0));
    return;
    // 0x808002A4: lw          $v0, 0x2C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(162, 0X2C0));
;}
RECOMP_FUNC void func_80800000_bsvan(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800038: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8080003C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800040: jal         0x800F1214
    // 0x80800044: lui         $a2, 0x4461
    ctx->r6 = S32(0X4461 << 16);
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x80800044: lui         $a2, 0x4461
    ctx->r6 = S32(0X4461 << 16);
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
RECOMP_FUNC void func_80800064_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800064: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800068: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080006C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800070: jal         0x80097AD0
    // 0x80800074: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80097AD0(rdram, ctx);
        goto after_0;
    // 0x80800074: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800078: beq         $v0, $zero, L_8080008C
    if (ctx->r2 == 0) {
        // 0x8080007C: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_8080008C;
    }
    // 0x8080007C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800080: jal         0x800848A8
    // 0x80800084: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _badrone_entrypoint_24(rdram, ctx);
        goto after_1;
    // 0x80800084: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800088: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8080008C:
    // 0x8080008C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800090: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80800094: jal         0x80091A58
    // 0x80800098: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80091A58(rdram, ctx);
        goto after_2;
    // 0x80800098: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x8080009C: beq         $v0, $zero, L_808000A8
    if (ctx->r2 == 0) {
        // 0x808000A0: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_808000A8;
    }
    // 0x808000A0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808000A4: addiu       $v1, $zero, 0x115
    ctx->r3 = ADD32(0, 0X115);
L_808000A8:
    // 0x808000A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x808000B4: jr          $ra
    // 0x808000B8: nop

    return;
    // 0x808000B8: nop

;}
RECOMP_FUNC void func_808000BC_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808000C8: jal         0x80091A58
    // 0x808000CC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x808000CC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x808000D0: beql        $v0, $zero, L_808000E4
    if (ctx->r2 == 0) {
        // 0x808000D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808000E4;
    }
    goto skip_0;
    // 0x808000D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808000D8: jal         0x80085370
    // 0x808000DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bavan_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x808000DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808000E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808000E4:
    // 0x808000E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000E8: jr          $ra
    // 0x808000EC: nop

    return;
    // 0x808000EC: nop

;}
RECOMP_FUNC void bsvan_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800100: jal         0x8009E74C
    // 0x80800104: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x80800104: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_0:
    // 0x80800108: bnel        $v0, $zero, L_80800198
    if (ctx->r2 != 0) {
        // 0x8080010C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800198;
    }
    goto skip_0;
    // 0x8080010C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800110: jal         0x80085168
    // 0x80800114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bastatemem_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080011C: jal         0x80092864
    // 0x80800120: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_80092864(rdram, ctx);
        goto after_2;
    // 0x80800120: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_2:
    // 0x80800124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800128: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080012C: jal         0x800947EC
    // 0x80800130: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_3;
    // 0x80800130: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80800134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800138: jal         0x8009BF5C
    // 0x8080013C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_4;
    // 0x8080013C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800144: jal         0x8009C4CC
    // 0x80800148: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_5;
    // 0x80800148: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x8080014C: jal         0x8009C000
    // 0x80800150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C000(rdram, ctx);
        goto after_6;
    // 0x80800150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800154: jal         0x8009C570
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C570(rdram, ctx);
        goto after_7;
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080015C: jal         0x8009EF60
    // 0x80800160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF60(rdram, ctx);
        goto after_8;
    // 0x80800160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800164: jal         0x80095A40
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095A40(rdram, ctx);
        goto after_9;
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080016C: jal         0x8009E474
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E474(rdram, ctx);
        goto after_10;
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800178: jal         0x80095774
    // 0x8080017C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80095774(rdram, ctx);
        goto after_11;
    // 0x8080017C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_11:
    // 0x80800180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800184: jal         0x80095774
    // 0x80800188: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80095774(rdram, ctx);
        goto after_12;
    // 0x80800188: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_12:
    // 0x8080018C: jal         0x80085378
    // 0x80800190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bavan_entrypoint_2(rdram, ctx);
        goto after_13;
    // 0x80800190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800194: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800198:
    // 0x80800198: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080019C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001A0: jr          $ra
    // 0x808001A4: nop

    return;
    // 0x808001A4: nop

;}
RECOMP_FUNC void bsvan_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x808001B8: jal         0x8009E77C
    // 0x808001BC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_8009E77C(rdram, ctx);
        goto after_0;
    // 0x808001BC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_0:
    // 0x808001C0: bne         $v0, $zero, L_808002C4
    if (ctx->r2 != 0) {
        // 0x808001C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002C4;
    }
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001C8: jal         0x80085160
    // 0x808001CC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    _bastatemem_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x808001CC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_1:
    // 0x808001D0: jal         0x80085380
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bavan_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808001D8: lw          $t6, 0x188($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X188);
    // 0x808001DC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808001E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808001E4: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x808001E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808001F0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x808001F4: jal         0x80085338
    // 0x808001F8: swc1        $f4, 0x174($s0)
    MEM_W(0X174, ctx->r16) = ctx->f4.u32l;
    _batimer_set(rdram, ctx);
        goto after_3;
    // 0x808001F8: swc1        $f4, 0x174($s0)
    MEM_W(0X174, ctx->r16) = ctx->f4.u32l;
    after_3:
    // 0x808001FC: lui         $a1, 0x4013
    ctx->r5 = S32(0X4013 << 16);
    // 0x80800200: ori         $a1, $a1, 0x3300
    ctx->r5 = ctx->r5 | 0X3300;
    // 0x80800204: jal         0x80092864
    // 0x80800208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092864(rdram, ctx);
        goto after_4;
    // 0x80800208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800210: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800214: jal         0x8009BFE4
    // 0x80800218: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_5;
    // 0x80800218: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_5:
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800220: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800224: jal         0x8009C554
    // 0x80800228: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009C554(rdram, ctx);
        goto after_6;
    // 0x80800228: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_6:
    // 0x8080022C: jal         0x8009EFA8
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EFA8(rdram, ctx);
        goto after_7;
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800234: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x80800238: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x8080023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800240: jal         0x8009F1C8
    // 0x80800244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_8;
    // 0x80800244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080024C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800250: jal         0x8009F1C8
    // 0x80800254: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_9;
    // 0x80800254: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_9:
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080025C: lui         $a1, 0x42DC
    ctx->r5 = S32(0X42DC << 16);
    // 0x80800260: jal         0x800959C8
    // 0x80800264: lui         $a2, 0x4282
    ctx->r6 = S32(0X4282 << 16);
    func_800959C8(rdram, ctx);
        goto after_10;
    // 0x80800264: lui         $a2, 0x4282
    ctx->r6 = S32(0X4282 << 16);
    after_10:
    // 0x80800268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080026C: jal         0x8009590C
    // 0x80800270: lui         $a1, 0x42DC
    ctx->r5 = S32(0X42DC << 16);
    func_8009590C(rdram, ctx);
        goto after_11;
    // 0x80800270: lui         $a1, 0x42DC
    ctx->r5 = S32(0X42DC << 16);
    after_11:
    // 0x80800274: jal         0x8009E4AC
    // 0x80800278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_12;
    // 0x80800278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8080027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800280: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800284: jal         0x8009E55C
    // 0x80800288: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    func_8009E55C(rdram, ctx);
        goto after_13;
    // 0x80800288: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    after_13:
    // 0x8080028C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800290: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800294: jal         0x8009E55C
    // 0x80800298: lui         $a2, 0x429C
    ctx->r6 = S32(0X429C << 16);
    func_8009E55C(rdram, ctx);
        goto after_14;
    // 0x80800298: lui         $a2, 0x429C
    ctx->r6 = S32(0X429C << 16);
    after_14:
    // 0x8080029C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002A0: jal         0x80095760
    // 0x808002A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80095760(rdram, ctx);
        goto after_15;
    // 0x808002A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_15:
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002AC: jal         0x80095760
    // 0x808002B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80095760(rdram, ctx);
        goto after_16;
    // 0x808002B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_16:
    // 0x808002B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808002BC: jal         0x800947EC
    // 0x808002C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_17;
    // 0x808002C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_17:
L_808002C4:
    // 0x808002C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808002C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808002D0: jr          $ra
    // 0x808002D4: nop

    return;
    // 0x808002D4: nop

;}
RECOMP_FUNC void bsvan_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808002DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002E0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x808002E4: jal         0x800B5BE4
    // 0x808002E8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800B5BE4(rdram, ctx);
        goto after_0;
    // 0x808002E8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x808002EC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x808002F0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808002F4: jal         0x8009C128
    // 0x808002F8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x808002F8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x808002FC: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(163, 0X1B90) << 16);
    // 0x80800300: addiu       $t6, $t6, 0x1B90
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(163, 0X1B90));
    // 0x80800304: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800308: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080030C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80800310: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80800314: jal         0x800BABB8
    // 0x80800318: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_2;
    // 0x80800318: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x8080031C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800320: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800324: jr          $ra
    // 0x80800328: nop

    return;
    // 0x80800328: nop

;}
RECOMP_FUNC void func_8080032C_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080032C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800330: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800334: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80800338: jal         0x80092C90
    // 0x8080033C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80092C90(rdram, ctx);
        goto after_0;
    // 0x8080033C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x80800340: jal         0x800B5BE4
    // 0x80800344: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800B5BE4(rdram, ctx);
        goto after_1;
    // 0x80800344: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x80800348: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(163, 0X1C40) << 16);
    // 0x8080034C: addiu       $t6, $t6, 0x1C40
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(163, 0X1C40));
    // 0x80800350: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80800354: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800358: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080035C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80800360: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80800364: jal         0x800BABB8
    // 0x80800368: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_2;
    // 0x80800368: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x8080036C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80800370: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(163, 0X1A70) << 16);
    // 0x80800374: jal         0x800DC178
    // 0x80800378: lwc1        $f14, 0x1A70($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(163, 0X1A70));
    func_800DC178(rdram, ctx);
        goto after_3;
    // 0x80800378: lwc1        $f14, 0x1A70($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(163, 0X1A70));
    after_3:
    // 0x8080037C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80800380: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800384: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800388: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8080038C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80800390: nop

    // 0x80800394: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x80800398: jal         0x800BA77C
    // 0x8080039C: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    func_800BA77C(rdram, ctx);
        goto after_4;
    // 0x8080039C: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    after_4:
    // 0x808003A0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808003A4: jal         0x800BA22C
    // 0x808003A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_5;
    // 0x808003A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x808003AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808003B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808003B4: jr          $ra
    // 0x808003B8: nop

    return;
    // 0x808003B8: nop

;}
RECOMP_FUNC void bsvan_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003BC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x808003C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808003C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808003C8: jal         0x8009C990
    // 0x808003CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009C990(rdram, ctx);
        goto after_0;
    // 0x808003CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808003D0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x808003D4: jal         0x8009C984
    // 0x808003D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_1;
    // 0x808003D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808003DC: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x808003E0: jal         0x800F1DCC
    // 0x808003E4: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_800F1DCC(rdram, ctx);
        goto after_2;
    // 0x808003E4: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_2:
    // 0x808003E8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808003EC: jal         0x80085390
    // 0x808003F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bavan_entrypoint_5(rdram, ctx);
        goto after_3;
    // 0x808003F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808003F4: jal         0x8009BB5C
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_4;
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808003FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800400: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800404: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800408: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8080040C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800410: lui         $a2, 0x4461
    ctx->r6 = S32(0X4461 << 16);
    // 0x80800414: bc1fl       L_80800440
    if (!c1cs) {
        // 0x80800418: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_80800440;
    }
    goto skip_0;
    // 0x80800418: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_0:
    // 0x8080041C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800420: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(163, 0X1A74) << 16);
    // 0x80800424: lwc1        $f6, 0x1A74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(163, 0X1A74));
    // 0x80800428: lui         $a3, 0x4234
    ctx->r7 = S32(0X4234 << 16);
    // 0x8080042C: jal         0x800F10B4
    // 0x80800430: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_5;
    // 0x80800430: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x80800434: b           L_80800444
    // 0x80800438: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_80800444;
    // 0x80800438: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8080043C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_80800440:
    // 0x80800440: nop

L_80800444:
    // 0x80800444: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80800448: jal         0x80085398
    // 0x8080044C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bavan_entrypoint_6(rdram, ctx);
        goto after_6;
    // 0x8080044C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800450: jal         0x8009BB5C
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_7;
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800458: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8080045C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800460: lui         $a2, 0x4461
    ctx->r6 = S32(0X4461 << 16);
    // 0x80800464: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80800468: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x8080046C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(163, 0X1A78) << 16);
    // 0x80800470: bc1f        L_8080049C
    if (!c1cs) {
        // 0x80800474: nop
    
            goto L_8080049C;
    }
    // 0x80800474: nop

    // 0x80800478: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8080047C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800480: lui         $at, 0x3FA0
    ctx->r1 = S32(0X3FA0 << 16);
    // 0x80800484: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800488: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x8080048C: jal         0x800F10B4
    // 0x80800490: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800F10B4(rdram, ctx);
        goto after_8;
    // 0x80800490: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_8:
    // 0x80800494: b           L_808004A0
    // 0x80800498: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_808004A0;
    // 0x80800498: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8080049C:
    // 0x8080049C: lwc1        $f2, 0x1A78($at)
    ctx->f2.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(163, 0X1A78));
L_808004A0:
    // 0x808004A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004A4: jal         0x8008E078
    // 0x808004A8: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    func_8008E078(rdram, ctx);
        goto after_9;
    // 0x808004A8: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    after_9:
    // 0x808004AC: bne         $v0, $zero, L_808004D0
    if (ctx->r2 != 0) {
        // 0x808004B0: lwc1        $f2, 0x3C($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
            goto L_808004D0;
    }
    // 0x808004B0: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x808004B4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(163, 0X1A7C) << 16);
    // 0x808004B8: lwc1        $f12, 0x1A7C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(163, 0X1A7C));
    // 0x808004BC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(163, 0X1A80) << 16);
    // 0x808004C0: lwc1        $f16, 0x1A80($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(163, 0X1A80));
    // 0x808004C4: jal         0x800F13F0
    // 0x808004C8: add.s       $f14, $f2, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f2.fl + ctx->f16.fl;
    func_800F13F0(rdram, ctx);
        goto after_10;
    // 0x808004C8: add.s       $f14, $f2, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f2.fl + ctx->f16.fl;
    after_10:
    // 0x808004CC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_808004D0:
    // 0x808004D0: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x808004D4: jal         0x80085388
    // 0x808004D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bavan_entrypoint_4(rdram, ctx);
        goto after_11;
    // 0x808004D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808004DC: jal         0x800853A8
    // 0x808004E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bavan_entrypoint_8(rdram, ctx);
        goto after_12;
    // 0x808004E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808004E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808004E8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808004EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x808004F0: jr          $ra
    // 0x808004F4: nop

    return;
    // 0x808004F4: nop

;}
RECOMP_FUNC void func_808004F8_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800500: jal         0x80085230
    // 0x80800504: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _basudie_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x80800504: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800508: jal         0x800000F0
    // 0x8080050C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsvan_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x8080050C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800518: jr          $ra
    // 0x8080051C: nop

    return;
    // 0x8080051C: nop

;}
RECOMP_FUNC void func_80800520_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800520: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800524: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800528: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8080052C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800530: jal         0x8008CABC
    // 0x80800534: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800534: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800538: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8080053C: jal         0x800001A8
    // 0x80800540: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    bsvan_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800540: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80800544: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80800548: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8080054C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800550: lui         $a2, 0x43D2
    ctx->r6 = S32(0X43D2 << 16);
    // 0x80800554: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800558: lui         $a3, 0xC496
    ctx->r7 = S32(0XC496 << 16);
    // 0x8080055C: jal         0x80085210
    // 0x80800560: swc1        $f0, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f0.u32l;
    _basudie_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80800560: swc1        $f0, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f0.u32l;
    after_2:
    // 0x80800564: jal         0x8008AF24
    // 0x80800568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_3;
    // 0x80800568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080056C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800570: jal         0x8008B1A0
    // 0x80800574: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_4;
    // 0x80800574: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80800578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080057C: jal         0x8008AED4
    // 0x80800580: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    func_8008AED4(rdram, ctx);
        goto after_5;
    // 0x80800580: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    after_5:
    // 0x80800584: lui         $a2, 0x3ECB
    ctx->r6 = S32(0X3ECB << 16);
    // 0x80800588: ori         $a2, $a2, 0xF28
    ctx->r6 = ctx->r6 | 0XF28;
    // 0x8080058C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800590: jal         0x8008B1D4
    // 0x80800594: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_6;
    // 0x80800594: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x80800598: lui         $a1, 0x3FD9
    ctx->r5 = S32(0X3FD9 << 16);
    // 0x8080059C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x808005A0: jal         0x8008B1BC
    // 0x808005A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_7;
    // 0x808005A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808005A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005AC: jal         0x8008B134
    // 0x808005B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x808005B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x808005B4: jal         0x8008B064
    // 0x808005B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_9;
    // 0x808005B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808005BC: lui         $a1, 0x3FE6
    ctx->r5 = S32(0X3FE6 << 16);
    // 0x808005C0: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x808005C4: jal         0x8009D820
    // 0x808005C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009D820(rdram, ctx);
        goto after_10;
    // 0x808005C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x808005CC: sw          $zero, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = 0;
    // 0x808005D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808005D4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808005D8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808005DC: jr          $ra
    // 0x808005E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x808005E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_808005E4_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808005E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808005EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808005F0: jal         0x80085228
    // 0x808005F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _basudie_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x808005F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808005F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005FC: jal         0x8009B9B0
    // 0x80800600: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_1;
    // 0x80800600: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_1:
    // 0x80800604: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x80800608: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080060C: beq         $v0, $zero, L_80800638
    if (ctx->r2 == 0) {
        // 0x80800610: nop
    
            goto L_80800638;
    }
    // 0x80800610: nop

    // 0x80800614: beq         $v0, $at, L_8080069C
    if (ctx->r2 == ctx->r1) {
        // 0x80800618: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8080069C;
    }
    // 0x80800618: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080061C: beq         $v0, $at, L_808006F0
    if (ctx->r2 == ctx->r1) {
        // 0x80800620: addiu       $t8, $zero, 0x3
        ctx->r24 = ADD32(0, 0X3);
            goto L_808006F0;
    }
    // 0x80800620: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80800624: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800628: beql        $v0, $at, L_808006FC
    if (ctx->r2 == ctx->r1) {
        // 0x8080062C: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_808006FC;
    }
    goto skip_0;
    // 0x8080062C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_0:
    // 0x80800630: b           L_80800724
    // 0x80800634: nop

        goto L_80800724;
    // 0x80800634: nop

L_80800638:
    // 0x80800638: jal         0x8008E078
    // 0x8080063C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_2;
    // 0x8080063C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800640: beq         $v0, $zero, L_80800724
    if (ctx->r2 == 0) {
        // 0x80800644: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800724;
    }
    // 0x80800644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800648: lui         $a1, 0x3F3E
    ctx->r5 = S32(0X3F3E << 16);
    // 0x8080064C: jal         0x8008CED4
    // 0x80800650: ori         $a1, $a1, 0xCBFB
    ctx->r5 = ctx->r5 | 0XCBFB;
    func_8008CED4(rdram, ctx);
        goto after_3;
    // 0x80800650: ori         $a1, $a1, 0xCBFB
    ctx->r5 = ctx->r5 | 0XCBFB;
    after_3:
    // 0x80800654: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80800658: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080065C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800660: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x80800664: jal         0x8009DF18
    // 0x80800668: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_4;
    // 0x80800668: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_4:
    // 0x8080066C: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x80800670: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800678: addiu       $a1, $zero, 0x428
    ctx->r5 = ADD32(0, 0X428);
    // 0x8080067C: jal         0x8009DF18
    // 0x80800680: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_5;
    // 0x80800680: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_5:
    // 0x80800684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800688: jal         0x8009BA58
    // 0x8080068C: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    func_8009BA58(rdram, ctx);
        goto after_6;
    // 0x8080068C: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    after_6:
    // 0x80800690: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800694: b           L_80800724
    // 0x80800698: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
        goto L_80800724;
    // 0x80800698: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_8080069C:
    // 0x8080069C: jal         0x8008E078
    // 0x808006A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_7;
    // 0x808006A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808006A4: beq         $v0, $zero, L_80800724
    if (ctx->r2 == 0) {
        // 0x808006A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800724;
    }
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006AC: jal         0x8008CED4
    // 0x808006B0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CED4(rdram, ctx);
        goto after_8;
    // 0x808006B0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_8:
    // 0x808006B4: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x808006B8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808006BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006C0: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x808006C4: jal         0x8009DF18
    // 0x808006C8: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_9;
    // 0x808006C8: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_9:
    // 0x808006CC: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x808006D0: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808006D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006D8: addiu       $a1, $zero, 0x428
    ctx->r5 = ADD32(0, 0X428);
    // 0x808006DC: jal         0x8009DF18
    // 0x808006E0: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_10;
    // 0x808006E0: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_10:
    // 0x808006E4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x808006E8: b           L_80800724
    // 0x808006EC: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
        goto L_80800724;
    // 0x808006EC: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_808006F0:
    // 0x808006F0: b           L_80800724
    // 0x808006F4: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
        goto L_80800724;
    // 0x808006F4: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
    // 0x808006F8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_808006FC:
    // 0x808006FC: lwc1        $f0, 0x16C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800700: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80800704: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80800708: nop

    // 0x8080070C: bc1f        L_80800724
    if (!c1cs) {
        // 0x80800710: nop
    
            goto L_80800724;
    }
    // 0x80800710: nop

    // 0x80800714: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800718: jal         0x800F0E00
    // 0x8080071C: sub.s       $f14, $f0, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f4.fl;
    func_800F0E00(rdram, ctx);
        goto after_11;
    // 0x8080071C: sub.s       $f14, $f0, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f4.fl;
    after_11:
    // 0x80800720: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
L_80800724:
    // 0x80800724: jal         0x800003BC
    // 0x80800728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bsvan_entrypoint_3(rdram, ctx);
        goto after_12;
    // 0x80800728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8080072C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800730: jal         0x8009E5C8
    // 0x80800734: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_13;
    // 0x80800734: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x80800738: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080073C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800740: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800744: jr          $ra
    // 0x80800748: nop

    return;
    // 0x80800748: nop

;}
RECOMP_FUNC void bsvan_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080074C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800750: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(163, 0X1C8C) << 16);
    // 0x80800754: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800758: jr          $ra
    // 0x8080075C: lw          $v0, 0x1C8C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1C8C));
    return;
    // 0x8080075C: lw          $v0, 0x1C8C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1C8C));
;}
RECOMP_FUNC void func_80800760_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800760: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800764: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800768: jal         0x80082FF0
    // 0x8080076C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x8080076C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800770: jal         0x800000F0
    // 0x80800774: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsvan_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800774: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080077C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800780: jr          $ra
    // 0x80800784: nop

    return;
    // 0x80800784: nop

;}
RECOMP_FUNC void func_80800788_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080078C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800790: jal         0x800001A8
    // 0x80800794: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bsvan_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800794: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800798: jal         0x80082FE0
    // 0x8080079C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x8080079C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808007A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808007A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808007A8: jr          $ra
    // 0x808007AC: nop

    return;
    // 0x808007AC: nop

;}
RECOMP_FUNC void func_808007B0_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808007B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808007B8: jal         0x80082FE8
    // 0x808007BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808007BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808007C0: jal         0x800003BC
    // 0x808007C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsvan_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x808007C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808007C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808007CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808007D0: jr          $ra
    // 0x808007D4: nop

    return;
    // 0x808007D4: nop

;}
RECOMP_FUNC void bsvan_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007D8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808007DC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(163, 0X1C9C) << 16);
    // 0x808007E0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808007E4: jr          $ra
    // 0x808007E8: lw          $v0, 0x1C9C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1C9C));
    return;
    // 0x808007E8: lw          $v0, 0x1C9C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1C9C));
;}
RECOMP_FUNC void func_808007EC_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808007F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808007F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808007F8: jal         0x8009BF5C
    // 0x808007FC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_0;
    // 0x808007FC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x80800800: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800804: jal         0x8009C4CC
    // 0x80800808: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_1;
    // 0x80800808: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x8080080C: jal         0x800000F0
    // 0x80800810: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsvan_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x80800810: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800818: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080081C: jr          $ra
    // 0x80800820: nop

    return;
    // 0x80800820: nop

;}
RECOMP_FUNC void func_80800824_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800824: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800828: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080082C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800830: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800834: jal         0x800001A8
    // 0x80800838: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    bsvan_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800838: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x8080083C: jal         0x8008CABC
    // 0x80800840: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008CABC(rdram, ctx);
        goto after_1;
    // 0x80800840: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80800844: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800848: jal         0x8008AF24
    // 0x8080084C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x8080084C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80800850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800854: jal         0x8008AED4
    // 0x80800858: addiu       $a1, $zero, 0xED
    ctx->r5 = ADD32(0, 0XED);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x80800858: addiu       $a1, $zero, 0xED
    ctx->r5 = ADD32(0, 0XED);
    after_3:
    // 0x8080085C: lui         $a1, 0x3EB7
    ctx->r5 = S32(0X3EB7 << 16);
    // 0x80800860: ori         $a1, $a1, 0xCED9
    ctx->r5 = ctx->r5 | 0XCED9;
    // 0x80800864: jal         0x8008B24C
    // 0x80800868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_4;
    // 0x80800868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080086C: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x80800870: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80800874: jal         0x8008B1BC
    // 0x80800878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_5;
    // 0x80800878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080087C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800880: jal         0x8008B134
    // 0x80800884: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008B134(rdram, ctx);
        goto after_6;
    // 0x80800884: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x80800888: jal         0x8008B064
    // 0x8080088C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x8080088C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800890: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800894: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800898: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080089C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808008A0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x808008A4: jal         0x8009FFD8
    // 0x808008A8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_8;
    // 0x808008A8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_8:
    // 0x808008AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808008B0: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x808008B4: jal         0x8009C99C
    // 0x808008B8: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_9;
    // 0x808008B8: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_9:
    // 0x808008BC: sw          $zero, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = 0;
    // 0x808008C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808008C4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808008C8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x808008CC: jr          $ra
    // 0x808008D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x808008D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_808008D4_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808008D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808008DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808008E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808008E4: jal         0x8008CABC
    // 0x808008E8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808008E8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x808008EC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x808008F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008F4: jal         0x8009D3A8
    // 0x808008F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_1;
    // 0x808008F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x808008FC: jal         0x80000000
    // 0x80800900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsvan(rdram, ctx);
        goto after_2;
    // 0x80800900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800908: jal         0x8009BB24
    // 0x8080090C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_3;
    // 0x8080090C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x80800910: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x80800914: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080091C: beq         $v0, $zero, L_8080093C
    if (ctx->r2 == 0) {
        // 0x80800920: nop
    
            goto L_8080093C;
    }
    // 0x80800920: nop

    // 0x80800924: beq         $v0, $at, L_80800964
    if (ctx->r2 == ctx->r1) {
        // 0x80800928: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800964;
    }
    // 0x80800928: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080092C: beq         $v0, $at, L_808009A0
    if (ctx->r2 == ctx->r1) {
        // 0x80800930: nop
    
            goto L_808009A0;
    }
    // 0x80800930: nop

    // 0x80800934: b           L_808009A0
    // 0x80800938: nop

        goto L_808009A0;
    // 0x80800938: nop

L_8080093C:
    // 0x8080093C: jal         0x8008DF8C
    // 0x80800940: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_4;
    // 0x80800940: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_4:
    // 0x80800944: beq         $v0, $zero, L_808009A0
    if (ctx->r2 == 0) {
        // 0x80800948: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009A0;
    }
    // 0x80800948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080094C: lui         $a1, 0x3F31
    ctx->r5 = S32(0X3F31 << 16);
    // 0x80800950: jal         0x8008CED4
    // 0x80800954: ori         $a1, $a1, 0xA36E
    ctx->r5 = ctx->r5 | 0XA36E;
    func_8008CED4(rdram, ctx);
        goto after_5;
    // 0x80800954: ori         $a1, $a1, 0xA36E
    ctx->r5 = ctx->r5 | 0XA36E;
    after_5:
    // 0x80800958: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8080095C: b           L_808009A0
    // 0x80800960: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
        goto L_808009A0;
    // 0x80800960: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_80800964:
    // 0x80800964: jal         0x8008E078
    // 0x80800968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_6;
    // 0x80800968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080096C: beq         $v0, $zero, L_808009A0
    if (ctx->r2 == 0) {
        // 0x80800970: nop
    
            goto L_808009A0;
    }
    // 0x80800970: nop

    // 0x80800974: jal         0x800A2EAC
    // 0x80800978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2EAC(rdram, ctx);
        goto after_7;
    // 0x80800978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080097C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800980: jal         0x8009B9B0
    // 0x80800984: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_8;
    // 0x80800984: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_8:
    // 0x80800988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080098C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80800990: jal         0x8008CF1C
    // 0x80800994: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_9;
    // 0x80800994: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_9:
    // 0x80800998: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8080099C: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_808009A0:
    // 0x808009A0: jal         0x8008E078
    // 0x808009A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_10;
    // 0x808009A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808009A8: beq         $v0, $zero, L_80800A04
    if (ctx->r2 == 0) {
        // 0x808009AC: nop
    
            goto L_80800A04;
    }
    // 0x808009AC: nop

    // 0x808009B0: jal         0x8009EF10
    // 0x808009B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_11;
    // 0x808009B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808009B8: bgtzl       $v0, L_808009E0
    if (SIGNED(ctx->r2) > 0) {
        // 0x808009BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009E0;
    }
    goto skip_0;
    // 0x808009BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808009C0: lw          $t8, 0x15C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X15C);
    // 0x808009C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808009C8: bne         $t8, $at, L_80800A04
    if (ctx->r24 != ctx->r1) {
        // 0x808009CC: nop
    
            goto L_80800A04;
    }
    // 0x808009CC: nop

    // 0x808009D0: jal         0x8008B324
    // 0x808009D4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_12;
    // 0x808009D4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_12:
    // 0x808009D8: beq         $v0, $zero, L_80800A04
    if (ctx->r2 == 0) {
        // 0x808009DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A04;
    }
    // 0x808009DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808009E0:
    // 0x808009E0: jal         0x80095738
    // 0x808009E4: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    func_80095738(rdram, ctx);
        goto after_13;
    // 0x808009E4: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_13:
    // 0x808009E8: beq         $v0, $zero, L_80800A00
    if (ctx->r2 == 0) {
        // 0x808009EC: addiu       $t9, $zero, 0x11A
        ctx->r25 = ADD32(0, 0X11A);
            goto L_80800A00;
    }
    // 0x808009EC: addiu       $t9, $zero, 0x11A
    ctx->r25 = ADD32(0, 0X11A);
    // 0x808009F0: jal         0x800848C8
    // 0x808009F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_28(rdram, ctx);
        goto after_14;
    // 0x808009F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808009F8: b           L_80800A04
    // 0x808009FC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
        goto L_80800A04;
    // 0x808009FC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_80800A00:
    // 0x80800A00: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_80800A04:
    // 0x80800A04: jal         0x8008E35C
    // 0x80800A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_15;
    // 0x80800A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800A0C: beq         $v0, $zero, L_80800A18
    if (ctx->r2 == 0) {
        // 0x80800A10: addiu       $t0, $zero, 0x11D
        ctx->r8 = ADD32(0, 0X11D);
            goto L_80800A18;
    }
    // 0x80800A10: addiu       $t0, $zero, 0x11D
    ctx->r8 = ADD32(0, 0X11D);
    // 0x80800A14: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_80800A18:
    // 0x80800A18: jal         0x800000BC
    // 0x80800A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000BC_bsvan(rdram, ctx);
        goto after_16;
    // 0x80800A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800A20: jal         0x800003BC
    // 0x80800A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bsvan_entrypoint_3(rdram, ctx);
        goto after_17;
    // 0x80800A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800A28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A2C: jal         0x8009E5C8
    // 0x80800A30: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_18;
    // 0x80800A30: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_18:
    // 0x80800A34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800A38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800A3C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800A40: jr          $ra
    // 0x80800A44: nop

    return;
    // 0x80800A44: nop

;}
RECOMP_FUNC void bsvan_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A48: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800A4C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(163, 0X1CAC) << 16);
    // 0x80800A50: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800A54: jr          $ra
    // 0x80800A58: lw          $v0, 0x1CAC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1CAC));
    return;
    // 0x80800A58: lw          $v0, 0x1CAC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1CAC));
;}
RECOMP_FUNC void func_80800A5C_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A5C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800A60: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800A64: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800A68: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800A6C: jal         0x800001A8
    // 0x80800A70: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    bsvan_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800A70: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800A74: jal         0x8008CABC
    // 0x80800A78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008CABC(rdram, ctx);
        goto after_1;
    // 0x80800A78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80800A7C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800A80: jal         0x8008AF24
    // 0x80800A84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x80800A84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80800A88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A8C: jal         0x8008B1A0
    // 0x80800A90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_3;
    // 0x80800A90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800A94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A98: jal         0x8008AED4
    // 0x80800A9C: addiu       $a1, $zero, 0xED
    ctx->r5 = ADD32(0, 0XED);
    func_8008AED4(rdram, ctx);
        goto after_4;
    // 0x80800A9C: addiu       $a1, $zero, 0xED
    ctx->r5 = ADD32(0, 0XED);
    after_4:
    // 0x80800AA0: lui         $a2, 0x3EB7
    ctx->r6 = S32(0X3EB7 << 16);
    // 0x80800AA4: ori         $a2, $a2, 0xCED9
    ctx->r6 = ctx->r6 | 0XCED9;
    // 0x80800AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AAC: jal         0x8008B1D4
    // 0x80800AB0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_5;
    // 0x80800AB0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x80800AB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AB8: jal         0x8008B1BC
    // 0x80800ABC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_6;
    // 0x80800ABC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_6:
    // 0x80800AC0: lui         $a1, 0x3E19
    ctx->r5 = S32(0X3E19 << 16);
    // 0x80800AC4: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800AC8: jal         0x8008B24C
    // 0x80800ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_7;
    // 0x80800ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800AD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AD4: jal         0x8008B134
    // 0x80800AD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x80800AD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80800ADC: jal         0x8008B064
    // 0x80800AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_9;
    // 0x80800AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800AE4: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800AE8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800AEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800AF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800AF4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800AF8: jal         0x8009FFD8
    // 0x80800AFC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_10;
    // 0x80800AFC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x80800B00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800B04: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x80800B08: jal         0x8009C99C
    // 0x80800B0C: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_11;
    // 0x80800B0C: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_11:
    // 0x80800B10: jal         0x8009EF04
    // 0x80800B14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EF04(rdram, ctx);
        goto after_12;
    // 0x80800B14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x80800B18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800B1C: nop

    // 0x80800B20: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800B24: nop

    // 0x80800B28: bc1t        L_80800B44
    if (c1cs) {
        // 0x80800B2C: nop
    
            goto L_80800B44;
    }
    // 0x80800B2C: nop

    // 0x80800B30: jal         0x8009EEB8
    // 0x80800B34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_13;
    // 0x80800B34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x80800B38: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800B3C: jal         0x8009C914
    // 0x80800B40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C914(rdram, ctx);
        goto after_14;
    // 0x80800B40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
L_80800B44:
    // 0x80800B44: jal         0x8009C990
    // 0x80800B48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_15;
    // 0x80800B48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x80800B4C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800B50: jal         0x8009B9C0
    // 0x80800B54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_16;
    // 0x80800B54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x80800B58: jal         0x80000000
    // 0x80800B5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800000_bsvan(rdram, ctx);
        goto after_17;
    // 0x80800B5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x80800B60: jal         0x8009C990
    // 0x80800B64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_18;
    // 0x80800B64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_18:
    // 0x80800B68: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800B6C: jal         0x8009BB00
    // 0x80800B70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BB00(rdram, ctx);
        goto after_19;
    // 0x80800B70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_19:
    // 0x80800B74: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800B78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800B7C: jal         0x8009BA68
    // 0x80800B80: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_20;
    // 0x80800B80: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_20:
    // 0x80800B84: lui         $a1, 0x442D
    ctx->r5 = S32(0X442D << 16);
    // 0x80800B88: ori         $a1, $a1, 0x6000
    ctx->r5 = ctx->r5 | 0X6000;
    // 0x80800B8C: jal         0x8009BA58
    // 0x80800B90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BA58(rdram, ctx);
        goto after_21;
    // 0x80800B90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_21:
    // 0x80800B94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800B98: jal         0x8009BCB4
    // 0x80800B9C: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_22;
    // 0x80800B9C: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    after_22:
    // 0x80800BA0: lui         $a1, 0x3FAC
    ctx->r5 = S32(0X3FAC << 16);
    // 0x80800BA4: lui         $a2, 0x3FB9
    ctx->r6 = S32(0X3FB9 << 16);
    // 0x80800BA8: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800BAC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800BB0: jal         0x8009D7A4
    // 0x80800BB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009D7A4(rdram, ctx);
        goto after_23;
    // 0x80800BB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_23:
    // 0x80800BB8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800BBC: jal         0x800853A0
    // 0x80800BC0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    _bavan_entrypoint_7(rdram, ctx);
        goto after_24;
    // 0x80800BC0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_24:
    // 0x80800BC4: sw          $zero, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = 0;
    // 0x80800BC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800BCC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800BD0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800BD4: jr          $ra
    // 0x80800BD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80800BD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80800BDC_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BDC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800BE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800BE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800BE8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800BEC: jal         0x8008CABC
    // 0x80800BF0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800BF0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x80800BF4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80800BF8: jal         0x8000032C
    // 0x80800BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080032C_bsvan(rdram, ctx);
        goto after_1;
    // 0x80800BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800C00: jal         0x80000000
    // 0x80800C04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsvan(rdram, ctx);
        goto after_2;
    // 0x80800C04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C0C: jal         0x8009BB24
    // 0x80800C10: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_3;
    // 0x80800C10: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x80800C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C18: jal         0x80091A30
    // 0x80800C1C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_4;
    // 0x80800C1C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_4:
    // 0x80800C20: beq         $v0, $zero, L_80800C48
    if (ctx->r2 == 0) {
        // 0x80800C24: lwc1        $f6, 0x28($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
            goto L_80800C48;
    }
    // 0x80800C24: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800C28: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800C2C: nop

    // 0x80800C30: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800C34: nop

    // 0x80800C38: bc1fl       L_80800C4C
    if (!c1cs) {
        // 0x80800C3C: lw          $v0, 0x15C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X15C);
            goto L_80800C4C;
    }
    goto skip_0;
    // 0x80800C3C: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    skip_0:
    // 0x80800C40: jal         0x8009BC6C
    // 0x80800C44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_5;
    // 0x80800C44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_80800C48:
    // 0x80800C48: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
L_80800C4C:
    // 0x80800C4C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800C50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C54: beq         $v0, $zero, L_80800C84
    if (ctx->r2 == 0) {
        // 0x80800C58: nop
    
            goto L_80800C84;
    }
    // 0x80800C58: nop

    // 0x80800C5C: beq         $v0, $at, L_80800CDC
    if (ctx->r2 == ctx->r1) {
        // 0x80800C60: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800CDC;
    }
    // 0x80800C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C64: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800C68: beq         $v0, $at, L_80800D04
    if (ctx->r2 == ctx->r1) {
        // 0x80800C6C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800D04;
    }
    // 0x80800C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C70: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800C74: beq         $v0, $at, L_80800D40
    if (ctx->r2 == ctx->r1) {
        // 0x80800C78: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800D40;
    }
    // 0x80800C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C7C: b           L_80800DA8
    // 0x80800C80: nop

        goto L_80800DA8;
    // 0x80800C80: nop

L_80800C84:
    // 0x80800C84: jal         0x8008DF8C
    // 0x80800C88: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_6;
    // 0x80800C88: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_6:
    // 0x80800C8C: beq         $v0, $zero, L_80800CB0
    if (ctx->r2 == 0) {
        // 0x80800C90: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800CB0;
    }
    // 0x80800C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C94: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80800C98: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800C9C: jal         0x8008CF1C
    // 0x80800CA0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_7;
    // 0x80800CA0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_7:
    // 0x80800CA4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800CA8: b           L_80800DA8
    // 0x80800CAC: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
        goto L_80800DA8;
    // 0x80800CAC: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_80800CB0:
    // 0x80800CB0: jal         0x8008B324
    // 0x80800CB4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_8;
    // 0x80800CB4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_8:
    // 0x80800CB8: beq         $v0, $zero, L_80800DA8
    if (ctx->r2 == 0) {
        // 0x80800CBC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800DA8;
    }
    // 0x80800CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CC0: lui         $a1, 0x3F30
    ctx->r5 = S32(0X3F30 << 16);
    // 0x80800CC4: ori         $a1, $a1, 0xA3D7
    ctx->r5 = ctx->r5 | 0XA3D7;
    // 0x80800CC8: jal         0x8008CF1C
    // 0x80800CCC: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_9;
    // 0x80800CCC: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_9:
    // 0x80800CD0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80800CD4: b           L_80800DA8
    // 0x80800CD8: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
        goto L_80800DA8;
    // 0x80800CD8: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_80800CDC:
    // 0x80800CDC: jal         0x8008DF8C
    // 0x80800CE0: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_10;
    // 0x80800CE0: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_10:
    // 0x80800CE4: beq         $v0, $zero, L_80800DA8
    if (ctx->r2 == 0) {
        // 0x80800CE8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800DA8;
    }
    // 0x80800CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CEC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80800CF0: jal         0x8008CF1C
    // 0x80800CF4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_11;
    // 0x80800CF4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_11:
    // 0x80800CF8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80800CFC: b           L_80800DA8
    // 0x80800D00: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
        goto L_80800DA8;
    // 0x80800D00: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
L_80800D04:
    // 0x80800D04: jal         0x8009D3A8
    // 0x80800D08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_12;
    // 0x80800D08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x80800D0C: jal         0x8008E078
    // 0x80800D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_13;
    // 0x80800D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800D14: beq         $v0, $zero, L_80800DA8
    if (ctx->r2 == 0) {
        // 0x80800D18: nop
    
            goto L_80800DA8;
    }
    // 0x80800D18: nop

    // 0x80800D1C: jal         0x800A2EAC
    // 0x80800D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2EAC(rdram, ctx);
        goto after_14;
    // 0x80800D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D28: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80800D2C: jal         0x8008CF1C
    // 0x80800D30: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_15;
    // 0x80800D30: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_15:
    // 0x80800D34: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80800D38: b           L_80800DA8
    // 0x80800D3C: sw          $t9, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r25;
        goto L_80800DA8;
    // 0x80800D3C: sw          $t9, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r25;
L_80800D40:
    // 0x80800D40: jal         0x8009D2D8
    // 0x80800D44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009D2D8(rdram, ctx);
        goto after_16;
    // 0x80800D44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_16:
    // 0x80800D48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D4C: jal         0x8009D3A8
    // 0x80800D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_17;
    // 0x80800D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x80800D54: jal         0x8009BB5C
    // 0x80800D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_18;
    // 0x80800D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800D5C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80800D60: addiu       $t0, $zero, 0x116
    ctx->r8 = ADD32(0, 0X116);
    // 0x80800D64: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80800D68: nop

    // 0x80800D6C: bc1f        L_80800D7C
    if (!c1cs) {
        // 0x80800D70: nop
    
            goto L_80800D7C;
    }
    // 0x80800D70: nop

    // 0x80800D74: b           L_80800D90
    // 0x80800D78: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
        goto L_80800D90;
    // 0x80800D78: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_80800D7C:
    // 0x80800D7C: jal         0x8008B324
    // 0x80800D80: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_19;
    // 0x80800D80: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_19:
    // 0x80800D84: beq         $v0, $zero, L_80800D90
    if (ctx->r2 == 0) {
        // 0x80800D88: addiu       $t1, $zero, 0x11A
        ctx->r9 = ADD32(0, 0X11A);
            goto L_80800D90;
    }
    // 0x80800D88: addiu       $t1, $zero, 0x11A
    ctx->r9 = ADD32(0, 0X11A);
    // 0x80800D8C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_80800D90:
    // 0x80800D90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D94: jal         0x80091A58
    // 0x80800D98: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_20;
    // 0x80800D98: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_20:
    // 0x80800D9C: beq         $v0, $zero, L_80800DA8
    if (ctx->r2 == 0) {
        // 0x80800DA0: addiu       $t2, $zero, 0x115
        ctx->r10 = ADD32(0, 0X115);
            goto L_80800DA8;
    }
    // 0x80800DA0: addiu       $t2, $zero, 0x115
    ctx->r10 = ADD32(0, 0X115);
    // 0x80800DA4: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_80800DA8:
    // 0x80800DA8: jal         0x8009BB50
    // 0x80800DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_21;
    // 0x80800DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800DB0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80800DB4: nop

    // 0x80800DB8: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80800DBC: nop

    // 0x80800DC0: bc1f        L_80800DDC
    if (!c1cs) {
        // 0x80800DC4: nop
    
            goto L_80800DDC;
    }
    // 0x80800DC4: nop

    // 0x80800DC8: jal         0x8008E35C
    // 0x80800DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_22;
    // 0x80800DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80800DD0: beq         $v0, $zero, L_80800DDC
    if (ctx->r2 == 0) {
        // 0x80800DD4: addiu       $t3, $zero, 0x11D
        ctx->r11 = ADD32(0, 0X11D);
            goto L_80800DDC;
    }
    // 0x80800DD4: addiu       $t3, $zero, 0x11D
    ctx->r11 = ADD32(0, 0X11D);
    // 0x80800DD8: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
L_80800DDC:
    // 0x80800DDC: jal         0x800000BC
    // 0x80800DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000BC_bsvan(rdram, ctx);
        goto after_23;
    // 0x80800DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80800DE4: jal         0x800003BC
    // 0x80800DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bsvan_entrypoint_3(rdram, ctx);
        goto after_24;
    // 0x80800DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x80800DEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DF0: jal         0x8009E5C8
    // 0x80800DF4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_25;
    // 0x80800DF4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_25:
    // 0x80800DF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800DFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800E00: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800E04: jr          $ra
    // 0x80800E08: nop

    return;
    // 0x80800E08: nop

;}
RECOMP_FUNC void func_80800E0C_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800E10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800E14: jal         0x8009BC6C
    // 0x80800E18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x80800E18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800E1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800E20: jal         0x8009BF5C
    // 0x80800E24: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_1;
    // 0x80800E24: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80800E28: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800E2C: jal         0x8009C4CC
    // 0x80800E30: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_2;
    // 0x80800E30: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800E34: jal         0x800000F0
    // 0x80800E38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsvan_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x80800E38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80800E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800E44: jr          $ra
    // 0x80800E48: nop

    return;
    // 0x80800E48: nop

;}
RECOMP_FUNC void bsvan_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E4C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800E50: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(163, 0X1CBC) << 16);
    // 0x80800E54: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800E58: jr          $ra
    // 0x80800E5C: lw          $v0, 0x1CBC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1CBC));
    return;
    // 0x80800E5C: lw          $v0, 0x1CBC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1CBC));
;}
RECOMP_FUNC void func_80800E60_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800E64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800E68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800E6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800E70: jal         0x8009E6EC
    // 0x80800E74: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800E74: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800E78: addiu       $t6, $v0, -0x1F
    ctx->r14 = ADD32(ctx->r2, -0X1F);
    // 0x80800E7C: sltiu       $at, $t6, 0x34
    ctx->r1 = ctx->r14 < 0X34 ? 1 : 0;
    // 0x80800E80: beq         $at, $zero, L_80800EE4
    if (ctx->r1 == 0) {
        // 0x80800E84: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80800EE4;
    }
    // 0x80800E84: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800E88: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(163, 0X1A84) << 16);
    // 0x80800E8C: addu        $at, $at, $t6
    gpr jr_addend_80800E94 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800E90: lw          $t6, 0x1A84($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(163, 0X1A84));
    // 0x80800E94: jr          $t6
    // 0x80800E98: nop

    switch (jr_addend_80800E94 >> 2) {
        case 0: goto L_80800EF4; break;
        case 1: goto L_80800EF4; break;
        case 2: goto L_80800EF4; break;
        case 3: goto L_80800EE4; break;
        case 4: goto L_80800EE4; break;
        case 5: goto L_80800EE4; break;
        case 6: goto L_80800EE4; break;
        case 7: goto L_80800EE4; break;
        case 8: goto L_80800EE4; break;
        case 9: goto L_80800EE4; break;
        case 10: goto L_80800EE4; break;
        case 11: goto L_80800EE4; break;
        case 12: goto L_80800EE4; break;
        case 13: goto L_80800EE4; break;
        case 14: goto L_80800EE4; break;
        case 15: goto L_80800EF4; break;
        case 16: goto L_80800EE4; break;
        case 17: goto L_80800EE4; break;
        case 18: goto L_80800EE4; break;
        case 19: goto L_80800EE4; break;
        case 20: goto L_80800EE4; break;
        case 21: goto L_80800EE4; break;
        case 22: goto L_80800EE4; break;
        case 23: goto L_80800EE4; break;
        case 24: goto L_80800EE4; break;
        case 25: goto L_80800EE4; break;
        case 26: goto L_80800EE4; break;
        case 27: goto L_80800EE4; break;
        case 28: goto L_80800EE4; break;
        case 29: goto L_80800EE4; break;
        case 30: goto L_80800EE4; break;
        case 31: goto L_80800EE4; break;
        case 32: goto L_80800EE4; break;
        case 33: goto L_80800EE4; break;
        case 34: goto L_80800EE4; break;
        case 35: goto L_80800EE4; break;
        case 36: goto L_80800EE4; break;
        case 37: goto L_80800EE4; break;
        case 38: goto L_80800EE4; break;
        case 39: goto L_80800E9C; break;
        case 40: goto L_80800EE4; break;
        case 41: goto L_80800EE4; break;
        case 42: goto L_80800EE4; break;
        case 43: goto L_80800EE4; break;
        case 44: goto L_80800EE4; break;
        case 45: goto L_80800EE4; break;
        case 46: goto L_80800EE4; break;
        case 47: goto L_80800EF4; break;
        case 48: goto L_80800EE4; break;
        case 49: goto L_80800EE4; break;
        case 50: goto L_80800EF4; break;
        case 51: goto L_80800EF4; break;
        default: switch_error(__func__, 0x80800E94, 0x80801A84);
    }
    // 0x80800E98: nop

L_80800E9C:
    // 0x80800E9C: jal         0x80099A4C
    // 0x80800EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099A4C(rdram, ctx);
        goto after_1;
    // 0x80800EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800EA4: lw          $t7, 0x188($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X188);
    // 0x80800EA8: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x80800EAC: lw          $v1, 0x188($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X188);
    // 0x80800EB0: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80800EB4: jal         0x80087270
    // 0x80800EB8: addiu       $a1, $v1, 0x4
    ctx->r5 = ADD32(ctx->r3, 0X4);
    _chfaircoinbox_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x80800EB8: addiu       $a1, $v1, 0x4
    ctx->r5 = ADD32(ctx->r3, 0X4);
    after_2:
    // 0x80800EBC: lw          $t8, 0x188($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X188);
    // 0x80800EC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800EC8: jal         0x8009E830
    // 0x80800ECC: sw          $v0, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r2;
    func_8009E830(rdram, ctx);
        goto after_3;
    // 0x80800ECC: sw          $v0, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r2;
    after_3:
    // 0x80800ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800ED4: jal         0x8009E5C8
    // 0x80800ED8: addiu       $a1, $zero, 0x121
    ctx->r5 = ADD32(0, 0X121);
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x80800ED8: addiu       $a1, $zero, 0x121
    ctx->r5 = ADD32(0, 0X121);
    after_4:
    // 0x80800EDC: b           L_80800EF8
    // 0x80800EE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800EF8;
    // 0x80800EE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800EE4:
    // 0x80800EE4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80800EE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EEC: jalr        $t9
    // 0x80800EF0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x80800EF0: nop

    after_5:
L_80800EF4:
    // 0x80800EF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800EF8:
    // 0x80800EF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800EFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800F00: jr          $ra
    // 0x80800F04: nop

    return;
    // 0x80800F04: nop

;}
RECOMP_FUNC void bsvan_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F10: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80800F14: jal         0x80000E60
    // 0x80800F18: addiu       $a1, $a1, -0x646C
    ctx->r5 = ADD32(ctx->r5, -0X646C);
    func_80800E60_bsvan(rdram, ctx);
        goto after_0;
    // 0x80800F18: addiu       $a1, $a1, -0x646C
    ctx->r5 = ADD32(ctx->r5, -0X646C);
    after_0:
    // 0x80800F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F24: jr          $ra
    // 0x80800F28: nop

    return;
    // 0x80800F28: nop

;}
RECOMP_FUNC void bsvan_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F34: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80800F38: jal         0x80000E60
    // 0x80800F3C: addiu       $a1, $a1, 0x2FF8
    ctx->r5 = ADD32(ctx->r5, 0X2FF8);
    func_80800E60_bsvan(rdram, ctx);
        goto after_0;
    // 0x80800F3C: addiu       $a1, $a1, 0x2FF8
    ctx->r5 = ADD32(ctx->r5, 0X2FF8);
    after_0:
    // 0x80800F40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F48: jr          $ra
    // 0x80800F4C: nop

    return;
    // 0x80800F4C: nop

;}
RECOMP_FUNC void func_80800F50_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F58: jal         0x800000F0
    // 0x80800F5C: nop

    bsvan_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800F5C: nop

    after_0:
    // 0x80800F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F68: jr          $ra
    // 0x80800F6C: nop

    return;
    // 0x80800F6C: nop

;}
RECOMP_FUNC void func_80800F70_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800F74: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800F78: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800F7C: jal         0x800001A8
    // 0x80800F80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bsvan_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800F80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F88: addiu       $a1, $zero, 0xEC
    ctx->r5 = ADD32(0, 0XEC);
    // 0x80800F8C: jal         0x8008CB3C
    // 0x80800F90: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80800F90: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x80800F94: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80800F98: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800FA4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800FA8: jal         0x8009FFD8
    // 0x80800FAC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800FAC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80800FB0: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800FB4: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800FB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FBC: jal         0x8008C9BC
    // 0x80800FC0: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_3;
    // 0x80800FC0: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_3:
    // 0x80800FC4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(163, 0X1B54) << 16);
    // 0x80800FC8: lwc1        $f4, 0x1B54($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(163, 0X1B54));
    // 0x80800FCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FD0: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x80800FD4: lui         $a2, 0x4461
    ctx->r6 = S32(0X4461 << 16);
    // 0x80800FD8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80800FDC: jal         0x8008C9F0
    // 0x80800FE0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_4;
    // 0x80800FE0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x80800FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FE8: jal         0x8008CA30
    // 0x80800FEC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CA30(rdram, ctx);
        goto after_5;
    // 0x80800FEC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_5:
    // 0x80800FF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FF4: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x80800FF8: jal         0x8009C99C
    // 0x80800FFC: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_6;
    // 0x80800FFC: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_6:
    // 0x80801000: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801004: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80801008: jal         0x8009BFE4
    // 0x8080100C: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_7;
    // 0x8080100C: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_7:
    // 0x80801010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801014: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80801018: jal         0x8009C554
    // 0x8080101C: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009C554(rdram, ctx);
        goto after_8;
    // 0x8080101C: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_8:
    // 0x80801020: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801024: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801028: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080102C: jr          $ra
    // 0x80801030: nop

    return;
    // 0x80801030: nop

;}
RECOMP_FUNC void func_80801034_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801034: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801038: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080103C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80801040: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80801044: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801048: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8080104C: jal         0x8009D3A8
    // 0x80801050: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_0;
    // 0x80801050: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80801054: jal         0x80000000
    // 0x80801058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsvan(rdram, ctx);
        goto after_1;
    // 0x80801058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080105C: jal         0x8000032C
    // 0x80801060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080032C_bsvan(rdram, ctx);
        goto after_2;
    // 0x80801060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801064: jal         0x8009EF10
    // 0x80801068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_3;
    // 0x80801068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080106C: bne         $v0, $zero, L_80801078
    if (ctx->r2 != 0) {
        // 0x80801070: nop
    
            goto L_80801078;
    }
    // 0x80801070: nop

    // 0x80801074: addiu       $s1, $zero, 0x11A
    ctx->r17 = ADD32(0, 0X11A);
L_80801078:
    // 0x80801078: jal         0x8008E148
    // 0x8080107C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_4;
    // 0x8080107C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801080: beq         $v0, $zero, L_80801094
    if (ctx->r2 == 0) {
        // 0x80801084: nop
    
            goto L_80801094;
    }
    // 0x80801084: nop

    // 0x80801088: jal         0x800848B0
    // 0x8080108C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_5;
    // 0x8080108C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801090: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80801094:
    // 0x80801094: jal         0x8008DD04
    // 0x80801098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_6;
    // 0x80801098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080109C: beq         $v0, $zero, L_808010A8
    if (ctx->r2 == 0) {
        // 0x808010A0: nop
    
            goto L_808010A8;
    }
    // 0x808010A0: nop

    // 0x808010A4: addiu       $s1, $zero, 0x114
    ctx->r17 = ADD32(0, 0X114);
L_808010A8:
    // 0x808010A8: jal         0x800000BC
    // 0x808010AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000BC_bsvan(rdram, ctx);
        goto after_7;
    // 0x808010AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808010B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010B4: jal         0x80091A58
    // 0x808010B8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_8;
    // 0x808010B8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_8:
    // 0x808010BC: beq         $v0, $zero, L_808010C8
    if (ctx->r2 == 0) {
        // 0x808010C0: nop
    
            goto L_808010C8;
    }
    // 0x808010C0: nop

    // 0x808010C4: addiu       $s1, $zero, 0x115
    ctx->r17 = ADD32(0, 0X115);
L_808010C8:
    // 0x808010C8: jal         0x8008E35C
    // 0x808010CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_9;
    // 0x808010CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808010D0: beq         $v0, $zero, L_808010DC
    if (ctx->r2 == 0) {
        // 0x808010D4: nop
    
            goto L_808010DC;
    }
    // 0x808010D4: nop

    // 0x808010D8: addiu       $s1, $zero, 0x11B
    ctx->r17 = ADD32(0, 0X11B);
L_808010DC:
    // 0x808010DC: jal         0x800003BC
    // 0x808010E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bsvan_entrypoint_3(rdram, ctx);
        goto after_10;
    // 0x808010E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808010E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010E8: jal         0x8009E5C8
    // 0x808010EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_11;
    // 0x808010EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_11:
    // 0x808010F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808010F4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808010F8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808010FC: jr          $ra
    // 0x80801100: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80801100: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bsvan_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801104: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801108: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(163, 0X1CCC) << 16);
    // 0x8080110C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801110: jr          $ra
    // 0x80801114: lw          $v0, 0x1CCC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1CCC));
    return;
    // 0x80801114: lw          $v0, 0x1CCC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1CCC));
;}
RECOMP_FUNC void func_80801118_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801118: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080111C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801120: jal         0x800845D0
    // 0x80801124: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80801124: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801128: jal         0x800000F0
    // 0x8080112C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsvan_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x8080112C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801134: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801138: jr          $ra
    // 0x8080113C: nop

    return;
    // 0x8080113C: nop

;}
RECOMP_FUNC void func_80801140_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801148: jal         0x800001A8
    // 0x8080114C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bsvan_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080114C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801150: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801154: jal         0x800845D8
    // 0x80801158: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80801158: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8080115C: lui         $a2, 0x3F03
    ctx->r6 = S32(0X3F03 << 16);
    // 0x80801160: ori         $a2, $a2, 0x46DC
    ctx->r6 = ctx->r6 | 0X46DC;
    // 0x80801164: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801168: jal         0x800845E0
    // 0x8080116C: addiu       $a1, $zero, 0xEF
    ctx->r5 = ADD32(0, 0XEF);
    _babounce_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x8080116C: addiu       $a1, $zero, 0xEF
    ctx->r5 = ADD32(0, 0XEF);
    after_2:
    // 0x80801170: jal         0x8008CABC
    // 0x80801174: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008CABC(rdram, ctx);
        goto after_3;
    // 0x80801174: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80801178: lui         $a1, 0x3DD2
    ctx->r5 = S32(0X3DD2 << 16);
    // 0x8080117C: ori         $a1, $a1, 0x1FF3
    ctx->r5 = ctx->r5 | 0X1FF3;
    // 0x80801180: jal         0x8008B10C
    // 0x80801184: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B10C(rdram, ctx);
        goto after_4;
    // 0x80801184: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x80801188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080118C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801190: jr          $ra
    // 0x80801194: nop

    return;
    // 0x80801194: nop

;}
