#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8008D924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D924: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D92C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D930: jal         0x800C6E38
    // 0x8008D934: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8008D934: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_0:
    // 0x8008D938: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D93C: beq         $t6, $zero, L_8008D954
    if (ctx->r14 == 0) {
        // 0x8008D940: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008D954;
    }
    // 0x8008D940: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008D944: jal         0x800A3304
    // 0x8008D948: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3304(rdram, ctx);
        goto after_1;
    // 0x8008D948: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008D94C: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D950: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8008D954:
    // 0x8008D954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D95C: jr          $ra
    // 0x8008D960: nop

    return;
    // 0x8008D960: nop

;}
RECOMP_FUNC void func_8008D964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D964: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D96C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D970: jal         0x800C6E38
    // 0x8008D974: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8008D974: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_0:
    // 0x8008D978: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D97C: beq         $t6, $zero, L_8008D994
    if (ctx->r14 == 0) {
        // 0x8008D980: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008D994;
    }
    // 0x8008D980: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008D984: jal         0x800A3304
    // 0x8008D988: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3304(rdram, ctx);
        goto after_1;
    // 0x8008D988: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008D98C: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D990: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8008D994:
    // 0x8008D994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D99C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D9A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D9A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D9A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D9AC: jal         0x800A4CA8
    // 0x8008D9B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A4CA8(rdram, ctx);
        goto after_0;
    // 0x8008D9B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008D9B4: jal         0x80089418
    // 0x8008D9B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _ncba1p_entrypoint_10(rdram, ctx);
        goto after_1;
    // 0x8008D9B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008D9BC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8008D9C0: bne         $v0, $at, L_8008D9D0
    if (ctx->r2 != ctx->r1) {
        // 0x8008D9C4: nop
    
            goto L_8008D9D0;
    }
    // 0x8008D9C4: nop

    // 0x8008D9C8: b           L_8008DA14
    // 0x8008D9CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008DA14;
    // 0x8008D9CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008D9D0:
    // 0x8008D9D0: jal         0x800A4D40
    // 0x8008D9D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4D40(rdram, ctx);
        goto after_2;
    // 0x8008D9D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8008D9D8: bne         $v0, $zero, L_8008D9E8
    if (ctx->r2 != 0) {
        // 0x8008D9DC: nop
    
            goto L_8008D9E8;
    }
    // 0x8008D9DC: nop

    // 0x8008D9E0: b           L_8008DA14
    // 0x8008D9E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008DA14;
    // 0x8008D9E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008D9E8:
    // 0x8008D9E8: jal         0x8008E078
    // 0x8008D9EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E078(rdram, ctx);
        goto after_3;
    // 0x8008D9EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x8008D9F0: bnel        $v0, $zero, L_8008DA14
    if (ctx->r2 != 0) {
        // 0x8008D9F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8008DA14;
    }
    goto skip_0;
    // 0x8008D9F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x8008D9F8: jal         0x8008E35C
    // 0x8008D9FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E35C(rdram, ctx);
        goto after_4;
    // 0x8008D9FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
    // 0x8008DA00: bnel        $v0, $zero, L_8008DA14
    if (ctx->r2 != 0) {
        // 0x8008DA04: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8008DA14;
    }
    goto skip_1;
    // 0x8008DA04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x8008DA08: b           L_8008DA14
    // 0x8008DA0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008DA14;
    // 0x8008DA0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008DA10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008DA14:
    // 0x8008DA14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008DA18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008DA1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008DA24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DA24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008DA28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DA2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008DA30: jal         0x800C6E38
    // 0x8008DA34: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8008DA34: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x8008DA38: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008DA3C: beq         $t6, $zero, L_8008DA98
    if (ctx->r14 == 0) {
        // 0x8008DA40: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008DA98;
    }
    // 0x8008DA40: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008DA44: jal         0x8009BB50
    // 0x8008DA48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BB50(rdram, ctx);
        goto after_1;
    // 0x8008DA48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008DA4C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8008DA50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008DA54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008DA58: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8008DA5C: nop

    // 0x8008DA60: bc1f        L_8008DA6C
    if (!c1cs) {
        // 0x8008DA64: nop
    
            goto L_8008DA6C;
    }
    // 0x8008DA64: nop

    // 0x8008DA68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008DA6C:
    // 0x8008DA6C: beql        $v0, $zero, L_8008DA9C
    if (ctx->r2 == 0) {
        // 0x8008DA70: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008DA9C;
    }
    goto skip_0;
    // 0x8008DA70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8008DA74: jal         0x800A0FCC
    // 0x8008DA78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A0FCC(rdram, ctx);
        goto after_2;
    // 0x8008DA78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8008DA7C: sltiu       $t7, $v0, 0x1
    ctx->r15 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8008DA80: beq         $t7, $zero, L_8008DA98
    if (ctx->r15 == 0) {
        // 0x8008DA84: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_8008DA98;
    }
    // 0x8008DA84: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8008DA88: jal         0x800976DC
    // 0x8008DA8C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800976DC(rdram, ctx);
        goto after_3;
    // 0x8008DA8C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x8008DA90: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008DA94: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8008DA98:
    // 0x8008DA98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008DA9C:
    // 0x8008DA9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008DAA0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008DAA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DAA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008DAAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DAB0: jal         0x800F65D0
    // 0x8008DAB4: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    func_800F65D0(rdram, ctx);
        goto after_0;
    // 0x8008DAB4: lw          $a0, 0x184($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X184);
    after_0:
    // 0x8008DAB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008DABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008DAC0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008DAC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DAC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008DACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DAD0: jal         0x800DB9B0
    // 0x8008DAD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800DB9B0(rdram, ctx);
        goto after_0;
    // 0x8008DAD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008DAD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008DADC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008DAE0: jr          $ra
    // 0x8008DAE4: nop

    return;
    // 0x8008DAE4: nop

;}
RECOMP_FUNC void func_8008DAE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DAE8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008DAEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DAF0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8008DAF4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8008DAF8: jal         0x8009C128
    // 0x8008DAFC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8008DAFC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x8008DB00: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8008DB04: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8008DB08: jal         0x800F1E6C
    // 0x8008DB0C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_800F1E6C(rdram, ctx);
        goto after_1;
    // 0x8008DB0C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x8008DB10: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008DB14: lwc1        $f6, 0x4AD8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4AD8);
    // 0x8008DB18: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8008DB1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008DB20: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8008DB24: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8008DB28: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8008DB2C: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8008DB30: nop

    // 0x8008DB34: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8008DB38: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8008DB3C: nop

    // 0x8008DB40: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8008DB44: beql        $v0, $zero, L_8008DB94
    if (ctx->r2 == 0) {
        // 0x8008DB48: mfc1        $v0, $f10
        ctx->r2 = (int32_t)ctx->f10.u32l;
            goto L_8008DB94;
    }
    goto skip_0;
    // 0x8008DB48: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    skip_0:
    // 0x8008DB4C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8008DB50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008DB54: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8008DB58: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8008DB5C: nop

    // 0x8008DB60: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8008DB64: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8008DB68: nop

    // 0x8008DB6C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8008DB70: bne         $v0, $zero, L_8008DB88
    if (ctx->r2 != 0) {
        // 0x8008DB74: nop
    
            goto L_8008DB88;
    }
    // 0x8008DB74: nop

    // 0x8008DB78: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x8008DB7C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8008DB80: b           L_8008DBA0
    // 0x8008DB84: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_8008DBA0;
    // 0x8008DB84: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_8008DB88:
    // 0x8008DB88: b           L_8008DBA0
    // 0x8008DB8C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8008DBA0;
    // 0x8008DB8C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8008DB90: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
L_8008DB94:
    // 0x8008DB94: nop

    // 0x8008DB98: bltz        $v0, L_8008DB88
    if (SIGNED(ctx->r2) < 0) {
        // 0x8008DB9C: nop
    
            goto L_8008DB88;
    }
    // 0x8008DB9C: nop

L_8008DBA0:
    // 0x8008DBA0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8008DBA4: jal         0x80090010
    // 0x8008DBA8: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    func_80090010(rdram, ctx);
        goto after_2;
    // 0x8008DBA8: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    after_2:
    // 0x8008DBAC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008DBB0: lwc1        $f16, 0x4ADC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4ADC);
    // 0x8008DBB4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8008DBB8: lhu         $v0, 0x1E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1E);
    // 0x8008DBBC: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8008DBC0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8008DBC4: ori         $t2, $zero, 0x8000
    ctx->r10 = 0 | 0X8000;
    // 0x8008DBC8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8008DBCC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8008DBD0: nop

    // 0x8008DBD4: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8008DBD8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8008DBDC: nop

    // 0x8008DBE0: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8008DBE4: beql        $t9, $zero, L_8008DC34
    if (ctx->r25 == 0) {
        // 0x8008DBE8: mfc1        $t9, $f4
        ctx->r25 = (int32_t)ctx->f4.u32l;
            goto L_8008DC34;
    }
    goto skip_1;
    // 0x8008DBE8: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    skip_1:
    // 0x8008DBEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008DBF0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8008DBF4: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8008DBF8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8008DBFC: nop

    // 0x8008DC00: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8008DC04: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8008DC08: nop

    // 0x8008DC0C: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8008DC10: bne         $t9, $zero, L_8008DC28
    if (ctx->r25 != 0) {
        // 0x8008DC14: nop
    
            goto L_8008DC28;
    }
    // 0x8008DC14: nop

    // 0x8008DC18: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x8008DC1C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8008DC20: b           L_8008DC40
    // 0x8008DC24: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8008DC40;
    // 0x8008DC24: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8008DC28:
    // 0x8008DC28: b           L_8008DC40
    // 0x8008DC2C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8008DC40;
    // 0x8008DC2C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8008DC30: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
L_8008DC34:
    // 0x8008DC34: nop

    // 0x8008DC38: bltz        $t9, L_8008DC28
    if (SIGNED(ctx->r25) < 0) {
        // 0x8008DC3C: nop
    
            goto L_8008DC28;
    }
    // 0x8008DC3C: nop

L_8008DC40:
    // 0x8008DC40: subu        $v0, $v0, $t9
    ctx->r2 = SUB32(ctx->r2, ctx->r25);
    // 0x8008DC44: andi        $t1, $v0, 0xFFFF
    ctx->r9 = ctx->r2 & 0XFFFF;
    // 0x8008DC48: subu        $t3, $t2, $t1
    ctx->r11 = SUB32(ctx->r10, ctx->r9);
    // 0x8008DC4C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8008DC50: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x8008DC54: jal         0x800F2100
    // 0x8008DC58: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    func_800F2100(rdram, ctx);
        goto after_3;
    // 0x8008DC58: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_3:
    // 0x8008DC5C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008DC60: lwc1        $f10, 0x4AE0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4AE0);
    // 0x8008DC64: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8008DC68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008DC6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008DC70: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8008DC74: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8008DC78: nop

    // 0x8008DC7C: bc1f        L_8008DC88
    if (!c1cs) {
        // 0x8008DC80: nop
    
            goto L_8008DC88;
    }
    // 0x8008DC80: nop

    // 0x8008DC84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008DC88:
    // 0x8008DC88: jr          $ra
    // 0x8008DC8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8008DC8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8008DC90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DC90: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8008DC94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DC98: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8008DC9C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8008DCA0: jal         0x8009C128
    // 0x8008DCA4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8008DCA4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x8008DCA8: jal         0x8008FF40
    // 0x8008DCAC: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_8008FF40(rdram, ctx);
        goto after_1;
    // 0x8008DCAC: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x8008DCB0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8008DCB4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8008DCB8: jal         0x800F18FC
    // 0x8008DCBC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_800F18FC(rdram, ctx);
        goto after_2;
    // 0x8008DCBC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x8008DCC0: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8008DCC4: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8008DCC8: jal         0x800F20BC
    // 0x8008DCCC: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    func_800F20BC(rdram, ctx);
        goto after_3;
    // 0x8008DCCC: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    after_3:
    // 0x8008DCD0: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008DCD4: beq         $t6, $zero, L_8008DCF4
    if (ctx->r14 == 0) {
        // 0x8008DCD8: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008DCF4;
    }
    // 0x8008DCD8: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008DCDC: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8008DCE0: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8008DCE4: jal         0x800F20BC
    // 0x8008DCE8: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    func_800F20BC(rdram, ctx);
        goto after_4;
    // 0x8008DCE8: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    after_4:
    // 0x8008DCEC: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008DCF0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8008DCF4:
    // 0x8008DCF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008DCF8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8008DCFC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008DD04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DD04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008DD08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DD0C: jal         0x8009C150
    // 0x8008DD10: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009C150(rdram, ctx);
        goto after_0;
    // 0x8008DD10: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008DD14: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8008DD18: jal         0x80096364
    // 0x8008DD1C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80096364(rdram, ctx);
        goto after_1;
    // 0x8008DD1C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x8008DD20: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8008DD24: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8008DD28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008DD2C: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8008DD30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008DD34: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x8008DD38: nop

    // 0x8008DD3C: bc1f        L_8008DD48
    if (!c1cs) {
        // 0x8008DD40: nop
    
            goto L_8008DD48;
    }
    // 0x8008DD40: nop

    // 0x8008DD44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008DD48:
    // 0x8008DD48: beql        $v0, $zero, L_8008DD64
    if (ctx->r2 == 0) {
        // 0x8008DD4C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008DD64;
    }
    goto skip_0;
    // 0x8008DD4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8008DD50: jal         0x8008E078
    // 0x8008DD54: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008E078(rdram, ctx);
        goto after_2;
    // 0x8008DD54: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x8008DD58: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8008DD5C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008DD60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008DD64:
    // 0x8008DD64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008DD68: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008DD70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DD70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008DD74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DD78: jal         0x8009E71C
    // 0x8008DD7C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8009E71C(rdram, ctx);
        goto after_0;
    // 0x8008DD7C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x8008DD80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008DD84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008DD88: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008DD90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DD90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008DD94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DD98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008DD9C: jal         0x8009E674
    // 0x8008DDA0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8009E674(rdram, ctx);
        goto after_0;
    // 0x8008DDA0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x8008DDA4: beq         $v0, $zero, L_8008DDB4
    if (ctx->r2 == 0) {
        // 0x8008DDA8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8008DDB4;
    }
    // 0x8008DDA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8008DDAC: b           L_8008DDDC
    // 0x8008DDB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8008DDDC;
    // 0x8008DDB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008DDB4:
    // 0x8008DDB4: jal         0x8009E674
    // 0x8008DDB8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8009E674(rdram, ctx);
        goto after_1;
    // 0x8008DDB8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x8008DDBC: beql        $v0, $zero, L_8008DDDC
    if (ctx->r2 == 0) {
        // 0x8008DDC0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8008DDDC;
    }
    goto skip_0;
    // 0x8008DDC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x8008DDC4: jal         0x800847F0
    // 0x8008DDC8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _badrone_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x8008DDC8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8008DDCC: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8008DDD0: b           L_8008DDDC
    // 0x8008DDD4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
        goto L_8008DDDC;
    // 0x8008DDD4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008DDD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008DDDC:
    // 0x8008DDDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008DDE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008DDE4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008DDEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DDEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008DDF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DDF4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8008DDF8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8008DDFC: jal         0x8009C128
    // 0x8008DE00: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8008DE00: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8008DE04: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8008DE08: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8008DE0C: jal         0x800F0064
    // 0x8008DE10: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_800F0064(rdram, ctx);
        goto after_1;
    // 0x8008DE10: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x8008DE14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008DE18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008DE1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008DE24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DE24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008DE28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DE2C: jal         0x80096568
    // 0x8008DE30: addiu       $a1, $zero, 0xE00
    ctx->r5 = ADD32(0, 0XE00);
    func_80096568(rdram, ctx);
        goto after_0;
    // 0x8008DE30: addiu       $a1, $zero, 0xE00
    ctx->r5 = ADD32(0, 0XE00);
    after_0:
    // 0x8008DE34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008DE38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008DE3C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008DE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DE44: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8008DE48: jr          $ra
    // 0x8008DE4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8008DE4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8008DE50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DE50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008DE54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DE58: jal         0x80096694
    // 0x8008DE5C: nop

    func_80096694(rdram, ctx);
        goto after_0;
    // 0x8008DE5C: nop

    after_0:
    // 0x8008DE60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008DE64: xori        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 ^ 0X3;
    // 0x8008DE68: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x8008DE6C: jr          $ra
    // 0x8008DE70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8008DE70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008DE74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DE74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008DE78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DE7C: jal         0x8009E6F8
    // 0x8008DE80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6F8(rdram, ctx);
        goto after_0;
    // 0x8008DE80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008DE84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8008DE88: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8008DE8C: jal         0x8009CA70
    // 0x8008DE90: addiu       $a2, $zero, 0x4000
    ctx->r6 = ADD32(0, 0X4000);
    func_8009CA70(rdram, ctx);
        goto after_1;
    // 0x8008DE90: addiu       $a2, $zero, 0x4000
    ctx->r6 = ADD32(0, 0X4000);
    after_1:
    // 0x8008DE94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008DE98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008DE9C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008DEA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DEA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008DEA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DEAC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8008DEB0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8008DEB4: jal         0x8009C128
    // 0x8008DEB8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8008DEB8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8008DEBC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8008DEC0: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8008DEC4: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8008DEC8: lwc1        $f0, 0x4($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8008DECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008DED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008DED4: sub.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8008DED8: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8008DEDC: nop

    // 0x8008DEE0: bc1f        L_8008DEEC
    if (!c1cs) {
        // 0x8008DEE4: nop
    
            goto L_8008DEEC;
    }
    // 0x8008DEE4: nop

    // 0x8008DEE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008DEEC:
    // 0x8008DEEC: beq         $v0, $zero, L_8008DF10
    if (ctx->r2 == 0) {
        // 0x8008DEF0: nop
    
            goto L_8008DF10;
    }
    // 0x8008DEF0: nop

    // 0x8008DEF4: add.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x8008DEF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008DEFC: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x8008DF00: nop

    // 0x8008DF04: bc1f        L_8008DF10
    if (!c1cs) {
        // 0x8008DF08: nop
    
            goto L_8008DF10;
    }
    // 0x8008DF08: nop

    // 0x8008DF0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008DF10:
    // 0x8008DF10: jr          $ra
    // 0x8008DF14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8008DF14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008DF18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DF18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008DF1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DF20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008DF24: jal         0x80091570
    // 0x8008DF28: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80091570(rdram, ctx);
        goto after_0;
    // 0x8008DF28: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x8008DF2C: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008DF30: bne         $t6, $zero, L_8008DF7C
    if (ctx->r14 != 0) {
        // 0x8008DF34: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008DF7C;
    }
    // 0x8008DF34: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008DF38: jal         0x800A3378
    // 0x8008DF3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3378(rdram, ctx);
        goto after_1;
    // 0x8008DF3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008DF40: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8008DF44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008DF48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008DF4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8008DF50: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8008DF54: nop

    // 0x8008DF58: bc1f        L_8008DF64
    if (!c1cs) {
        // 0x8008DF5C: nop
    
            goto L_8008DF64;
    }
    // 0x8008DF5C: nop

    // 0x8008DF60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008DF64:
    // 0x8008DF64: beql        $v0, $zero, L_8008DF80
    if (ctx->r2 == 0) {
        // 0x8008DF68: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008DF80;
    }
    goto skip_0;
    // 0x8008DF68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8008DF6C: jal         0x8009659C
    // 0x8008DF70: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8009659C(rdram, ctx);
        goto after_2;
    // 0x8008DF70: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_2:
    // 0x8008DF74: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008DF78: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8008DF7C:
    // 0x8008DF7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008DF80:
    // 0x8008DF80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008DF84: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008DF8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DF8C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008DF90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008DF94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008DF98: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008DF9C: jal         0x8008E078
    // 0x8008DFA0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_8008E078(rdram, ctx);
        goto after_0;
    // 0x8008DFA0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x8008DFA4: beq         $v0, $zero, L_8008DFB4
    if (ctx->r2 == 0) {
        // 0x8008DFA8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8008DFB4;
    }
    // 0x8008DFA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008DFAC: b           L_8008E064
    // 0x8008DFB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8008E064;
    // 0x8008DFB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008DFB4:
    // 0x8008DFB4: jal         0x800963C0
    // 0x8008DFB8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800963C0(rdram, ctx);
        goto after_1;
    // 0x8008DFB8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x8008DFBC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008DFC0: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8008DFC4: lwc1        $f4, 0x4AE4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4AE4);
    // 0x8008DFC8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8008DFCC: nop

    // 0x8008DFD0: bc1f        L_8008DFF8
    if (!c1cs) {
        // 0x8008DFD4: nop
    
            goto L_8008DFF8;
    }
    // 0x8008DFD4: nop

    // 0x8008DFD8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8008DFDC: nop

    // 0x8008DFE0: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x8008DFE4: nop

    // 0x8008DFE8: bc1f        L_8008DFF8
    if (!c1cs) {
        // 0x8008DFEC: nop
    
            goto L_8008DFF8;
    }
    // 0x8008DFEC: nop

    // 0x8008DFF0: b           L_8008E064
    // 0x8008DFF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008E064;
    // 0x8008DFF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008DFF8:
    // 0x8008DFF8: jal         0x8009BB50
    // 0x8008DFFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_2;
    // 0x8008DFFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8008E000: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8008E004: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008E008: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8008E00C: nop

    // 0x8008E010: bc1f        L_8008E01C
    if (!c1cs) {
        // 0x8008E014: nop
    
            goto L_8008E01C;
    }
    // 0x8008E014: nop

    // 0x8008E018: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008E01C:
    // 0x8008E01C: beql        $v0, $zero, L_8008E068
    if (ctx->r2 == 0) {
        // 0x8008E020: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8008E068;
    }
    goto skip_0;
    // 0x8008E020: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8008E024: jal         0x8009C150
    // 0x8008E028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C150(rdram, ctx);
        goto after_3;
    // 0x8008E028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8008E02C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8008E030: jal         0x80096364
    // 0x8008E034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096364(rdram, ctx);
        goto after_4;
    // 0x8008E034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8008E038: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8008E03C: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8008E040: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008E044: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x8008E048: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8008E04C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8008E050: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x8008E054: nop

    // 0x8008E058: bc1fl       L_8008E068
    if (!c1cs) {
        // 0x8008E05C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8008E068;
    }
    goto skip_1;
    // 0x8008E05C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x8008E060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008E064:
    // 0x8008E064: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8008E068:
    // 0x8008E068: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008E06C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8008E070: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008E078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E078: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E07C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E080: jal         0x800A0FCC
    // 0x8008E084: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A0FCC(rdram, ctx);
        goto after_0;
    // 0x8008E084: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008E088: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008E08C: beq         $t6, $zero, L_8008E0B8
    if (ctx->r14 == 0) {
        // 0x8008E090: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008E0B8;
    }
    // 0x8008E090: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008E094: jal         0x8009BB50
    // 0x8008E098: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BB50(rdram, ctx);
        goto after_1;
    // 0x8008E098: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008E09C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8008E0A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008E0A4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8008E0A8: nop

    // 0x8008E0AC: bc1fl       L_8008E0BC
    if (!c1cs) {
        // 0x8008E0B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008E0BC;
    }
    goto skip_0;
    // 0x8008E0B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8008E0B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008E0B8:
    // 0x8008E0B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008E0BC:
    // 0x8008E0BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008E0C0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008E0C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E0C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E0CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E0D0: jal         0x80084768
    // 0x8008E0D4: nop

    _bapackctrl_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8008E0D4: nop

    after_0:
    // 0x8008E0D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E0DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008E0E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008E0E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E0E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E0EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E0F0: jal         0x8008E23C
    // 0x8008E0F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008E23C(rdram, ctx);
        goto after_0;
    // 0x8008E0F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008E0F8: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008E0FC: beq         $t6, $zero, L_8008E114
    if (ctx->r14 == 0) {
        // 0x8008E100: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008E114;
    }
    // 0x8008E100: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008E104: jal         0x8008E0C8
    // 0x8008E108: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E0C8(rdram, ctx);
        goto after_1;
    // 0x8008E108: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008E10C: sltiu       $t7, $v0, 0x1
    ctx->r15 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8008E110: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8008E114:
    // 0x8008E114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008E11C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008E124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E124: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E128: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E12C: jal         0x8009CC68
    // 0x8008E130: nop

    func_8009CC68(rdram, ctx);
        goto after_0;
    // 0x8008E130: nop

    after_0:
    // 0x8008E134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E138: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008E13C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008E140: jr          $ra
    // 0x8008E144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8008E144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008E148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E148: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E14C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E150: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008E154: jal         0x80091570
    // 0x8008E158: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80091570(rdram, ctx);
        goto after_0;
    // 0x8008E158: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x8008E15C: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008E160: bne         $t6, $zero, L_8008E190
    if (ctx->r14 != 0) {
        // 0x8008E164: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008E190;
    }
    // 0x8008E164: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008E168: jal         0x800A3378
    // 0x8008E16C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3378(rdram, ctx);
        goto after_1;
    // 0x8008E16C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008E170: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8008E174: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008E178: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008E17C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8008E180: nop

    // 0x8008E184: bc1fl       L_8008E194
    if (!c1cs) {
        // 0x8008E188: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008E194;
    }
    goto skip_0;
    // 0x8008E188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8008E18C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008E190:
    // 0x8008E190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008E194:
    // 0x8008E194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008E198: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008E1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E1A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E1A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E1A8: jal         0x80096694
    // 0x8008E1AC: nop

    func_80096694(rdram, ctx);
        goto after_0;
    // 0x8008E1AC: nop

    after_0:
    // 0x8008E1B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E1B4: xori        $t6, $v0, 0x18
    ctx->r14 = ctx->r2 ^ 0X18;
    // 0x8008E1B8: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x8008E1BC: jr          $ra
    // 0x8008E1C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8008E1C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008E1C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E1C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008E1C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E1CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8008E1D0: jal         0x8009659C
    // 0x8008E1D4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8009659C(rdram, ctx);
        goto after_0;
    // 0x8008E1D4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x8008E1D8: sltu        $a2, $zero, $v0
    ctx->r6 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008E1DC: beq         $a2, $zero, L_8008E1F0
    if (ctx->r6 == 0) {
        // 0x8008E1E0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8008E1F0;
    }
    // 0x8008E1E0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8008E1E4: jal         0x80095748
    // 0x8008E1E8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80095748(rdram, ctx);
        goto after_1;
    // 0x8008E1E8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8008E1EC: sltu        $a2, $zero, $v0
    ctx->r6 = 0 < ctx->r2 ? 1 : 0;
L_8008E1F0:
    // 0x8008E1F0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8008E1F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8008E1F8: jal         0x8009659C
    // 0x8008E1FC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8009659C(rdram, ctx);
        goto after_2;
    // 0x8008E1FC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_2:
    // 0x8008E200: beq         $v0, $zero, L_8008E210
    if (ctx->r2 == 0) {
        // 0x8008E204: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8008E210;
    }
    // 0x8008E204: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8008E208: jal         0x80095748
    // 0x8008E20C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80095748(rdram, ctx);
        goto after_3;
    // 0x8008E20C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
L_8008E210:
    // 0x8008E210: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8008E214: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008E218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E21C: bne         $t6, $zero, L_8008E22C
    if (ctx->r14 != 0) {
        // 0x8008E220: nop
    
            goto L_8008E22C;
    }
    // 0x8008E220: nop

    // 0x8008E224: beq         $t7, $zero, L_8008E234
    if (ctx->r15 == 0) {
        // 0x8008E228: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8008E234;
    }
    // 0x8008E228: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008E22C:
    // 0x8008E22C: b           L_8008E234
    // 0x8008E230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8008E234;
    // 0x8008E230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008E234:
    // 0x8008E234: jr          $ra
    // 0x8008E238: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8008E238: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8008E23C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E23C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E240: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E244: jal         0x800F8B88
    // 0x8008E248: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F8B88(rdram, ctx);
        goto after_0;
    // 0x8008E248: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008E24C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E250: xori        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 ^ 0X2;
    // 0x8008E254: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x8008E258: jr          $ra
    // 0x8008E25C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8008E25C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008E260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E260: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008E264: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E268: jal         0x8008E078
    // 0x8008E26C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8008E078(rdram, ctx);
        goto after_0;
    // 0x8008E26C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008E270: beq         $v0, $zero, L_8008E280
    if (ctx->r2 == 0) {
        // 0x8008E274: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8008E280;
    }
    // 0x8008E274: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8008E278: b           L_8008E29C
    // 0x8008E27C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008E29C;
    // 0x8008E27C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008E280:
    // 0x8008E280: jal         0x800954E8
    // 0x8008E284: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800954E8(rdram, ctx);
        goto after_1;
    // 0x8008E284: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x8008E288: bnel        $v0, $zero, L_8008E29C
    if (ctx->r2 != 0) {
        // 0x8008E28C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8008E29C;
    }
    goto skip_0;
    // 0x8008E28C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x8008E290: b           L_8008E29C
    // 0x8008E294: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008E29C;
    // 0x8008E294: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008E298: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008E29C:
    // 0x8008E29C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E2A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008E2A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008E2AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E2AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E2B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E2B4: jal         0x8009E6F8
    // 0x8008E2B8: nop

    func_8009E6F8(rdram, ctx);
        goto after_0;
    // 0x8008E2B8: nop

    after_0:
    // 0x8008E2BC: addiu       $t6, $v0, -0x2B
    ctx->r14 = ADD32(ctx->r2, -0X2B);
    // 0x8008E2C0: sltiu       $at, $t6, 0x22
    ctx->r1 = ctx->r14 < 0X22 ? 1 : 0;
    // 0x8008E2C4: beq         $at, $zero, L_8008E2E8
    if (ctx->r1 == 0) {
        // 0x8008E2C8: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8008E2E8;
    }
    // 0x8008E2C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008E2CC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008E2D0: addu        $at, $at, $t6
    gpr jr_addend_8008E2D8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8008E2D4: lw          $t6, 0x4AE8($at)
    ctx->r14 = ADD32(ctx->r1, 0X4AE8);
    // 0x8008E2D8: jr          $t6
    // 0x8008E2DC: nop

    switch (jr_addend_8008E2D8 >> 2) {
        case 0: goto L_8008E2E0; break;
        case 1: goto L_8008E2E0; break;
        case 2: goto L_8008E2E0; break;
        case 3: goto L_8008E2E0; break;
        case 4: goto L_8008E2E8; break;
        case 5: goto L_8008E2E0; break;
        case 6: goto L_8008E2E8; break;
        case 7: goto L_8008E2E8; break;
        case 8: goto L_8008E2E8; break;
        case 9: goto L_8008E2E8; break;
        case 10: goto L_8008E2E8; break;
        case 11: goto L_8008E2E8; break;
        case 12: goto L_8008E2E8; break;
        case 13: goto L_8008E2E8; break;
        case 14: goto L_8008E2E0; break;
        case 15: goto L_8008E2E8; break;
        case 16: goto L_8008E2E8; break;
        case 17: goto L_8008E2E8; break;
        case 18: goto L_8008E2E8; break;
        case 19: goto L_8008E2E8; break;
        case 20: goto L_8008E2E8; break;
        case 21: goto L_8008E2E8; break;
        case 22: goto L_8008E2E8; break;
        case 23: goto L_8008E2E8; break;
        case 24: goto L_8008E2E8; break;
        case 25: goto L_8008E2E8; break;
        case 26: goto L_8008E2E8; break;
        case 27: goto L_8008E2E8; break;
        case 28: goto L_8008E2E8; break;
        case 29: goto L_8008E2E8; break;
        case 30: goto L_8008E2E8; break;
        case 31: goto L_8008E2E8; break;
        case 32: goto L_8008E2E8; break;
        case 33: goto L_8008E2E0; break;
        default: switch_error(__func__, 0x8008E2D8, 0x80124AE8);
    }
    // 0x8008E2DC: nop

L_8008E2E0:
    // 0x8008E2E0: b           L_8008E2EC
    // 0x8008E2E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8008E2EC;
    // 0x8008E2E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8008E2E8:
    // 0x8008E2E8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8008E2EC:
    // 0x8008E2EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E2F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008E2F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8008E2F8: jr          $ra
    // 0x8008E2FC: nop

    return;
    // 0x8008E2FC: nop

;}
RECOMP_FUNC void func_8008E300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E300: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008E304: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E308: jal         0x8009C990
    // 0x8008E30C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8009C990(rdram, ctx);
        goto after_0;
    // 0x8008E30C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008E310: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8008E314: jal         0x8009C984
    // 0x8008E318: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8009C984(rdram, ctx);
        goto after_1;
    // 0x8008E318: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x8008E31C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8008E320: jal         0x800F1DCC
    // 0x8008E324: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_800F1DCC(rdram, ctx);
        goto after_2;
    // 0x8008E324: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_2:
    // 0x8008E328: jal         0x800F2100
    // 0x8008E32C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_3;
    // 0x8008E32C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x8008E330: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x8008E334: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008E338: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008E33C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E340: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8008E344: nop

    // 0x8008E348: bc1f        L_8008E354
    if (!c1cs) {
        // 0x8008E34C: nop
    
            goto L_8008E354;
    }
    // 0x8008E34C: nop

    // 0x8008E350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008E354:
    // 0x8008E354: jr          $ra
    // 0x8008E358: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8008E358: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008E35C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E35C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E360: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E364: jal         0x800A0FD8
    // 0x8008E368: nop

    func_800A0FD8(rdram, ctx);
        goto after_0;
    // 0x8008E368: nop

    after_0:
    // 0x8008E36C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008E374: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008E37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E37C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E380: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E384: jal         0x800A0FE4
    // 0x8008E388: nop

    func_800A0FE4(rdram, ctx);
        goto after_0;
    // 0x8008E388: nop

    after_0:
    // 0x8008E38C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008E394: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008E39C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E39C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E3A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E3A4: jal         0x80084FE0
    // 0x8008E3A8: nop

    _bashoes_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8008E3A8: nop

    after_0:
    // 0x8008E3AC: xori        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 ^ 0X1;
    // 0x8008E3B0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8008E3B4: sltiu       $t6, $t6, 0x1
    ctx->r14 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x8008E3B8: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x8008E3BC: beq         $v0, $zero, L_8008E3E0
    if (ctx->r2 == 0) {
        // 0x8008E3C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008E3E0;
    }
    // 0x8008E3C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E3C4: sltiu       $v0, $v1, 0x1
    ctx->r2 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8008E3C8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8008E3CC: beq         $v0, $zero, L_8008E3E0
    if (ctx->r2 == 0) {
        // 0x8008E3D0: nop
    
            goto L_8008E3E0;
    }
    // 0x8008E3D0: nop

    // 0x8008E3D4: xori        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 ^ 0X2;
    // 0x8008E3D8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8008E3DC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_8008E3E0:
    // 0x8008E3E0: jr          $ra
    // 0x8008E3E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8008E3E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008E3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E3E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E3EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E3F0: jal         0x80084FE0
    // 0x8008E3F4: nop

    _bashoes_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8008E3F4: nop

    after_0:
    // 0x8008E3F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E3FC: xori        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 ^ 0X3;
    // 0x8008E400: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x8008E404: jr          $ra
    // 0x8008E408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8008E408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008E40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E40C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E414: jal         0x80084FE0
    // 0x8008E418: nop

    _bashoes_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8008E418: nop

    after_0:
    // 0x8008E41C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E420: xori        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 ^ 0X4;
    // 0x8008E424: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x8008E428: jr          $ra
    // 0x8008E42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8008E42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008E430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E434: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E438: jal         0x80084FE0
    // 0x8008E43C: nop

    _bashoes_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8008E43C: nop

    after_0:
    // 0x8008E440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E444: xori        $t6, $v0, 0x5
    ctx->r14 = ctx->r2 ^ 0X5;
    // 0x8008E448: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x8008E44C: jr          $ra
    // 0x8008E450: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8008E450: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008E454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E454: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008E458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E45C: jal         0x800DB9B0
    // 0x8008E460: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_800DB9B0(rdram, ctx);
        goto after_0;
    // 0x8008E460: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008E464: beql        $v0, $zero, L_8008E49C
    if (ctx->r2 == 0) {
        // 0x8008E468: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8008E49C;
    }
    goto skip_0;
    // 0x8008E468: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x8008E46C: jal         0x800BFAA4
    // 0x8008E470: nop

    func_800BFAA4(rdram, ctx);
        goto after_1;
    // 0x8008E470: nop

    after_1:
    // 0x8008E474: beq         $v0, $zero, L_8008E498
    if (ctx->r2 == 0) {
        // 0x8008E478: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_8008E498;
    }
    // 0x8008E478: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8008E47C: jal         0x8009C128
    // 0x8008E480: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_2;
    // 0x8008E480: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x8008E484: jal         0x80087F20
    // 0x8008E488: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    _gcmapsects_entrypoint_4(rdram, ctx);
        goto after_3;
    // 0x8008E488: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_3:
    // 0x8008E48C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x8008E490: b           L_8008E49C
    // 0x8008E494: sltu        $v0, $zero, $t6
    ctx->r2 = 0 < ctx->r14 ? 1 : 0;
        goto L_8008E49C;
    // 0x8008E494: sltu        $v0, $zero, $t6
    ctx->r2 = 0 < ctx->r14 ? 1 : 0;
L_8008E498:
    // 0x8008E498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008E49C:
    // 0x8008E49C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E4A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008E4A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008E4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E4B0: jr          $ra
    // 0x8008E4B4: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    return;
    // 0x8008E4B4: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void func_8008E4B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E4B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008E4BC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8008E4C0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8008E4C4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8008E4C8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8008E4CC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8008E4D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8008E4D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8008E4D8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8008E4DC: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
L_8008E4E0:
    // 0x8008E4E0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8008E4E4: jal         0x8009E138
    // 0x8008E4E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8009E138(rdram, ctx);
        goto after_0;
    // 0x8008E4E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x8008E4EC: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8008E4F0: lw          $t8, 0xC($s2)
    ctx->r24 = MEM_W(ctx->r18, 0XC);
    // 0x8008E4F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8008E4F8: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x8008E4FC: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x8008E500: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8008E504: bne         $s0, $s3, L_8008E4E0
    if (ctx->r16 != ctx->r19) {
        // 0x8008E508: sw          $t7, 0xC($t9)
        MEM_W(0XC, ctx->r25) = ctx->r15;
            goto L_8008E4E0;
    }
    // 0x8008E508: sw          $t7, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r15;
    // 0x8008E50C: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x8008E510: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8008E514: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8008E518: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8008E51C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8008E520: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8008E524: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008E528: jr          $ra
    // 0x8008E52C: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    return;
    // 0x8008E52C: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
;}
RECOMP_FUNC void func_8008E530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E530: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008E534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E538: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8008E53C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8008E540: lhu         $t7, 0x18($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X18);
    // 0x8008E544: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8008E548: beql        $t8, $zero, L_8008E590
    if (ctx->r24 == 0) {
        // 0x8008E54C: lw          $t5, 0x20($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X20);
            goto L_8008E590;
    }
    goto skip_0;
    // 0x8008E54C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x8008E550: jal         0x80106790
    // 0x8008E554: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80106790(rdram, ctx);
        goto after_0;
    // 0x8008E554: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8008E558: lw          $t9, 0x64($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X64);
    // 0x8008E55C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008E560: sll         $t1, $t9, 14
    ctx->r9 = S32(ctx->r25 << 14);
    // 0x8008E564: bltzl       $t1, L_8008E60C
    if (SIGNED(ctx->r9) < 0) {
        // 0x8008E568: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008E60C;
    }
    goto skip_1;
    // 0x8008E568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8008E56C: lw          $t2, 0x78($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X78);
    // 0x8008E570: sll         $t4, $t2, 28
    ctx->r12 = S32(ctx->r10 << 28);
    // 0x8008E574: bgezl       $t4, L_8008E590
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8008E578: lw          $t5, 0x20($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X20);
            goto L_8008E590;
    }
    goto skip_2;
    // 0x8008E578: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    skip_2:
    // 0x8008E57C: jal         0x80085918
    // 0x8008E580: nop

    _chbounce_entrypoint_10(rdram, ctx);
        goto after_1;
    // 0x8008E580: nop

    after_1:
    // 0x8008E584: bnel        $v0, $zero, L_8008E60C
    if (ctx->r2 != 0) {
        // 0x8008E588: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008E60C;
    }
    goto skip_3;
    // 0x8008E588: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x8008E58C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
L_8008E590:
    // 0x8008E590: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8008E594: lw          $t7, 0xC($t5)
    ctx->r15 = MEM_W(ctx->r13, 0XC);
    // 0x8008E598: jal         0x80088628
    // 0x8008E59C: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    _glhittableDll_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x8008E59C: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_2:
    // 0x8008E5A0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8008E5A4: jal         0x800F424C
    // 0x8008E5A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800F424C(rdram, ctx);
        goto after_3;
    // 0x8008E5A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x8008E5AC: bnel        $v0, $zero, L_8008E5D8
    if (ctx->r2 != 0) {
        // 0x8008E5B0: lw          $t8, 0x20($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X20);
            goto L_8008E5D8;
    }
    goto skip_4;
    // 0x8008E5B0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    skip_4:
    // 0x8008E5B4: jal         0x80088618
    // 0x8008E5B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _glhittableDll_entrypoint_2(rdram, ctx);
        goto after_4;
    // 0x8008E5B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
    // 0x8008E5BC: beql        $v0, $zero, L_8008E5D8
    if (ctx->r2 == 0) {
        // 0x8008E5C0: lw          $t8, 0x20($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X20);
            goto L_8008E5D8;
    }
    goto skip_5;
    // 0x8008E5C0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    skip_5:
    // 0x8008E5C4: jal         0x80088648
    // 0x8008E5C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _glhittableDll_entrypoint_8(rdram, ctx);
        goto after_5;
    // 0x8008E5C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_5:
    // 0x8008E5CC: bnel        $v0, $zero, L_8008E60C
    if (ctx->r2 != 0) {
        // 0x8008E5D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008E60C;
    }
    goto skip_6;
    // 0x8008E5D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x8008E5D4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
L_8008E5D8:
    // 0x8008E5D8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8008E5DC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8008E5E0: lw          $t6, 0xC($t8)
    ctx->r14 = MEM_W(ctx->r24, 0XC);
    // 0x8008E5E4: jal         0x80088620
    // 0x8008E5E8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    _glhittableDll_entrypoint_3(rdram, ctx);
        goto after_6;
    // 0x8008E5E8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_6:
    // 0x8008E5EC: bne         $v0, $zero, L_8008E608
    if (ctx->r2 != 0) {
        // 0x8008E5F0: lw          $t9, 0x20($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X20);
            goto L_8008E608;
    }
    // 0x8008E5F0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8008E5F4: lw          $t0, 0xC($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XC);
    // 0x8008E5F8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8008E5FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008E600: jal         0x800EB210
    // 0x8008E604: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    func_800EB210(rdram, ctx);
        goto after_7;
    // 0x8008E604: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    after_7:
L_8008E608:
    // 0x8008E608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008E60C:
    // 0x8008E60C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008E610: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008E618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E618: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008E61C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008E620: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008E624: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008E628: jal         0x8009C128
    // 0x8008E62C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8008E62C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x8008E630: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x8008E634: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008E638: jal         0x800EBFD4
    // 0x8008E63C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800EBFD4(rdram, ctx);
        goto after_1;
    // 0x8008E63C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8008E640: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x8008E644: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8008E648: addiu       $t1, $t1, -0x1290
    ctx->r9 = ADD32(ctx->r9, -0X1290);
    // 0x8008E64C: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x8008E650: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x8008E654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008E658: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8008E65C: lw          $v1, 0x0($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X0);
    // 0x8008E660: lbu         $t9, 0x2A($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X2A);
    // 0x8008E664: ori         $t0, $t9, 0x4
    ctx->r8 = ctx->r25 | 0X4;
    // 0x8008E668: sb          $t0, 0x2A($v1)
    MEM_B(0X2A, ctx->r3) = ctx->r8;
    // 0x8008E66C: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x8008E670: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8008E674: sw          $t1, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r9;
    // 0x8008E678: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x8008E67C: lw          $t6, 0x184($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X184);
    // 0x8008E680: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x8008E684: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x8008E688: lhu         $t9, 0x1A($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X1A);
    // 0x8008E68C: andi        $t0, $t9, 0x1F
    ctx->r8 = ctx->r25 & 0X1F;
    // 0x8008E690: or          $t2, $t8, $t0
    ctx->r10 = ctx->r24 | ctx->r8;
    // 0x8008E694: jal         0x80095774
    // 0x8008E698: sh          $t2, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r10;
    func_80095774(rdram, ctx);
        goto after_2;
    // 0x8008E698: sh          $t2, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r10;
    after_2:
    // 0x8008E69C: lw          $t3, 0xC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC);
    // 0x8008E6A0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8008E6A4: sw          $t1, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->r9;
    // 0x8008E6A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008E6AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008E6B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8008E6B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008E6BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E6BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E6C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E6C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008E6C8: lw          $t7, 0xC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC);
    // 0x8008E6CC: jal         0x800EBFF4
    // 0x8008E6D0: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    func_800EBFF4(rdram, ctx);
        goto after_0;
    // 0x8008E6D0: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_0:
    // 0x8008E6D4: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8008E6D8: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x8008E6DC: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x8008E6E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E6E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008E6E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008E6F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E6F0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8008E6F4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8008E6F8: addiu       $s0, $sp, 0x4C
    ctx->r16 = ADD32(ctx->r29, 0X4C);
    // 0x8008E6FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008E700: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8008E704: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8008E708: jal         0x8009C128
    // 0x8008E70C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8008E70C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x8008E710: lw          $t6, 0xC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC);
    // 0x8008E714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008E718: jal         0x800EC0EC
    // 0x8008E71C: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    func_800EC0EC(rdram, ctx);
        goto after_1;
    // 0x8008E71C: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    after_1:
    // 0x8008E720: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8008E724: jal         0x80095774
    // 0x8008E728: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80095774(rdram, ctx);
        goto after_2;
    // 0x8008E728: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_2:
    // 0x8008E72C: lw          $t7, 0xC($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XC);
    // 0x8008E730: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8008E734: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8008E738: lw          $t9, 0x28($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X28);
    // 0x8008E73C: sll         $t1, $t9, 22
    ctx->r9 = S32(ctx->r25 << 22);
    // 0x8008E740: bgezl       $t1, L_8008E91C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8008E744: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8008E91C;
    }
    goto skip_0;
    // 0x8008E744: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8008E748: jal         0x80091E80
    // 0x8008E74C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091E80(rdram, ctx);
        goto after_3;
    // 0x8008E74C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x8008E750: beql        $v0, $zero, L_8008E91C
    if (ctx->r2 == 0) {
        // 0x8008E754: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8008E91C;
    }
    goto skip_1;
    // 0x8008E754: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x8008E758: jal         0x800EA068
    // 0x8008E75C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_800EA068(rdram, ctx);
        goto after_4;
    // 0x8008E75C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_4:
    // 0x8008E760: bne         $v0, $zero, L_8008E7EC
    if (ctx->r2 != 0) {
        // 0x8008E764: nop
    
            goto L_8008E7EC;
    }
    // 0x8008E764: nop

    // 0x8008E768: jal         0x8008DAA8
    // 0x8008E76C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008DAA8(rdram, ctx);
        goto after_5;
    // 0x8008E76C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x8008E770: bnel        $v0, $zero, L_8008E834
    if (ctx->r2 != 0) {
        // 0x8008E774: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8008E834;
    }
    goto skip_2;
    // 0x8008E774: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_2:
    // 0x8008E778: jal         0x800F54E4
    // 0x8008E77C: nop

    func_800F54E4(rdram, ctx);
        goto after_6;
    // 0x8008E77C: nop

    after_6:
    // 0x8008E780: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8008E784: jal         0x800F5410
    // 0x8008E788: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5410(rdram, ctx);
        goto after_7;
    // 0x8008E788: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x8008E78C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8008E790: beq         $v0, $at, L_8008E830
    if (ctx->r2 == ctx->r1) {
        // 0x8008E794: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_8008E830;
    }
    // 0x8008E794: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8008E798: beq         $v0, $at, L_8008E7C0
    if (ctx->r2 == ctx->r1) {
        // 0x8008E79C: addiu       $at, $zero, 0x11
        ctx->r1 = ADD32(0, 0X11);
            goto L_8008E7C0;
    }
    // 0x8008E79C: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x8008E7A0: bnel        $v0, $at, L_8008E91C
    if (ctx->r2 != ctx->r1) {
        // 0x8008E7A4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8008E91C;
    }
    goto skip_3;
    // 0x8008E7A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x8008E7A8: jal         0x800F6D24
    // 0x8008E7AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F6D24(rdram, ctx);
        goto after_8;
    // 0x8008E7AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8008E7B0: beql        $v0, $zero, L_8008E834
    if (ctx->r2 == 0) {
        // 0x8008E7B4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8008E834;
    }
    goto skip_4;
    // 0x8008E7B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_4:
    // 0x8008E7B8: b           L_8008E91C
    // 0x8008E7BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8008E91C;
    // 0x8008E7BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8008E7C0:
    // 0x8008E7C0: jal         0x800F8B88
    // 0x8008E7C4: nop

    func_800F8B88(rdram, ctx);
        goto after_9;
    // 0x8008E7C4: nop

    after_9:
    // 0x8008E7C8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8008E7CC: bnel        $v0, $at, L_8008E91C
    if (ctx->r2 != ctx->r1) {
        // 0x8008E7D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8008E91C;
    }
    goto skip_5;
    // 0x8008E7D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x8008E7D4: jal         0x800F6D24
    // 0x8008E7D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F6D24(rdram, ctx);
        goto after_10;
    // 0x8008E7D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8008E7DC: beql        $v0, $zero, L_8008E834
    if (ctx->r2 == 0) {
        // 0x8008E7E0: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8008E834;
    }
    goto skip_6;
    // 0x8008E7E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_6:
    // 0x8008E7E4: b           L_8008E91C
    // 0x8008E7E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8008E91C;
    // 0x8008E7E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8008E7EC:
    // 0x8008E7EC: jal         0x800EA068
    // 0x8008E7F0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800EA068(rdram, ctx);
        goto after_11;
    // 0x8008E7F0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_11:
    // 0x8008E7F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8008E7F8: jal         0x800EA068
    // 0x8008E7FC: addiu       $a0, $zero, 0x4000
    ctx->r4 = ADD32(0, 0X4000);
    func_800EA068(rdram, ctx);
        goto after_12;
    // 0x8008E7FC: addiu       $a0, $zero, 0x4000
    ctx->r4 = ADD32(0, 0X4000);
    after_12:
    // 0x8008E800: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8008E804: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8008E808: jal         0x80095738
    // 0x8008E80C: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    func_80095738(rdram, ctx);
        goto after_13;
    // 0x8008E80C: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    after_13:
    // 0x8008E810: beq         $s0, $zero, L_8008E830
    if (ctx->r16 == 0) {
        // 0x8008E814: lw          $t2, 0x3C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X3C);
            goto L_8008E830;
    }
    // 0x8008E814: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8008E818: beql        $t2, $zero, L_8008E834
    if (ctx->r10 == 0) {
        // 0x8008E81C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8008E834;
    }
    goto skip_7;
    // 0x8008E81C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_7:
    // 0x8008E820: beql        $v0, $zero, L_8008E834
    if (ctx->r2 == 0) {
        // 0x8008E824: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8008E834;
    }
    goto skip_8;
    // 0x8008E824: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_8:
    // 0x8008E828: jal         0x800842F8
    // 0x8008E82C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _bsfirstp_entrypoint_14(rdram, ctx);
        goto after_14;
    // 0x8008E82C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
L_8008E830:
    // 0x8008E830: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8008E834:
    // 0x8008E834: jal         0x800CB840
    // 0x8008E838: lw          $a1, 0x184($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X184);
    func_800CB840(rdram, ctx);
        goto after_15;
    // 0x8008E838: lw          $a1, 0x184($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X184);
    after_15:
    // 0x8008E83C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8008E840: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_8008E844:
    // 0x8008E844: jal         0x8009E138
    // 0x8008E848: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8009E138(rdram, ctx);
        goto after_16;
    // 0x8008E848: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_16:
    // 0x8008E84C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8008E850: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x8008E854: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008E858: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8008E85C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8008E860: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8008E864: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8008E868: bc1t        L_8008E8A0
    if (c1cs) {
        // 0x8008E86C: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_8008E8A0;
    }
    // 0x8008E86C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8008E870: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x8008E874: subu        $t4, $t4, $s0
    ctx->r12 = SUB32(ctx->r12, ctx->r16);
    // 0x8008E878: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8008E87C: addiu       $t5, $t5, 0x6CE0
    ctx->r13 = ADD32(ctx->r13, 0X6CE0);
    // 0x8008E880: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008E884: swc1        $f2, 0x6D08($at)
    MEM_W(0X6D08, ctx->r1) = ctx->f2.u32l;
    // 0x8008E888: jal         0x8009E154
    // 0x8008E88C: addu        $a2, $t4, $t5
    ctx->r6 = ADD32(ctx->r12, ctx->r13);
    func_8009E154(rdram, ctx);
        goto after_17;
    // 0x8008E88C: addu        $a2, $t4, $t5
    ctx->r6 = ADD32(ctx->r12, ctx->r13);
    after_17:
    // 0x8008E890: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8008E894: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8008E898: bnel        $s0, $at, L_8008E844
    if (ctx->r16 != ctx->r1) {
        // 0x8008E89C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8008E844;
    }
    goto skip_9;
    // 0x8008E89C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_9:
L_8008E8A0:
    // 0x8008E8A0: lw          $t6, 0xC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC);
    // 0x8008E8A4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8008E8A8: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8008E8AC: addiu       $a2, $a2, 0x6D08
    ctx->r6 = ADD32(ctx->r6, 0X6D08);
    // 0x8008E8B0: addiu       $a1, $a1, 0x6CE0
    ctx->r5 = ADD32(ctx->r5, 0X6CE0);
    // 0x8008E8B4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x8008E8B8: jal         0x800CDBA8
    // 0x8008E8BC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800CDBA8(rdram, ctx);
        goto after_18;
    // 0x8008E8BC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_18:
    // 0x8008E8C0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8008E8C4: blez        $v0, L_8008E904
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008E8C8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8008E904;
    }
    // 0x8008E8C8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8008E8CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8008E8D0:
    // 0x8008E8D0: jal         0x800CDFA8
    // 0x8008E8D4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800CDFA8(rdram, ctx);
        goto after_19;
    // 0x8008E8D4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_19:
    // 0x8008E8D8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8008E8DC: lw          $t8, 0xC($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XC);
    // 0x8008E8E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8008E8E4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8008E8E8: jal         0x8008E530
    // 0x8008E8EC: sw          $t7, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->r15;
    func_8008E530(rdram, ctx);
        goto after_20;
    // 0x8008E8EC: sw          $t7, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->r15;
    after_20:
    // 0x8008E8F0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8008E8F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8008E8F8: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8008E8FC: bnel        $at, $zero, L_8008E8D0
    if (ctx->r1 != 0) {
        // 0x8008E900: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8008E8D0;
    }
    goto skip_10;
    // 0x8008E900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_10:
L_8008E904:
    // 0x8008E904: jal         0x800CB870
    // 0x8008E908: nop

    func_800CB870(rdram, ctx);
        goto after_21;
    // 0x8008E908: nop

    after_21:
    // 0x8008E90C: lw          $t1, 0xC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC);
    // 0x8008E910: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8008E914: sw          $t0, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->r8;
    // 0x8008E918: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8008E91C:
    // 0x8008E91C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8008E920: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8008E924: jr          $ra
    // 0x8008E928: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8008E928: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8008E92C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E92C: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x8008E930: jr          $ra
    // 0x8008E934: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    return;
    // 0x8008E934: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
;}
RECOMP_FUNC void func_8008E938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E938: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x8008E93C: jr          $ra
    // 0x8008E940: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    return;
    // 0x8008E940: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
;}
RECOMP_FUNC void func_8008E944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E944: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x8008E948: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x8008E94C: lbu         $t7, 0x2A($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2A);
    // 0x8008E950: andi        $t8, $t7, 0xFFFD
    ctx->r24 = ctx->r15 & 0XFFFD;
    // 0x8008E954: jr          $ra
    // 0x8008E958: sb          $t8, 0x2A($v0)
    MEM_B(0X2A, ctx->r2) = ctx->r24;
    return;
    // 0x8008E958: sb          $t8, 0x2A($v0)
    MEM_B(0X2A, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_8008E95C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E95C: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x8008E960: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x8008E964: lbu         $t8, 0x2A($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2A);
    // 0x8008E968: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x8008E96C: jr          $ra
    // 0x8008E970: sb          $t9, 0x2A($v0)
    MEM_B(0X2A, ctx->r2) = ctx->r25;
    return;
    // 0x8008E970: sb          $t9, 0x2A($v0)
    MEM_B(0X2A, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_8008E974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E974: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x8008E978: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8008E97C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8008E980: lw          $t8, 0x28($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X28);
    // 0x8008E984: sll         $t0, $t8, 22
    ctx->r8 = S32(ctx->r24 << 22);
    // 0x8008E988: bgez        $t0, L_8008E998
    if (SIGNED(ctx->r8) >= 0) {
            // 0x8008E98C: nop

    func_8008E998(rdram, ctx);
    return;
    }
    // 0x8008E98C: nop

    // 0x8008E990: jr          $ra
    // 0x8008E994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8008E994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8008E998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E998: jr          $ra
    // 0x8008E99C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8008E99C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8008E9A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E9A0: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x8008E9A4: jr          $ra
    // 0x8008E9A8: sw          $a1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r5;
    return;
    // 0x8008E9A8: sw          $a1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_8008E9AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E9AC: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x8008E9B0: jr          $ra
    // 0x8008E9B4: lw          $v0, 0x4($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X4);
    return;
    // 0x8008E9B4: lw          $v0, 0x4($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X4);
;}
RECOMP_FUNC void func_8008E9B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E9B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E9BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E9C0: jal         0x8008E4B8
    // 0x8008E9C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8008E4B8(rdram, ctx);
        goto after_0;
    // 0x8008E9C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8008E9C8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8008E9CC: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x8008E9D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E9D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008E9D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8008E9DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008E9E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E9E4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8008E9E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E9EC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8008E9F0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8008E9F4: jal         0x800D3948
    // 0x8008E9F8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    func_800D3948(rdram, ctx);
        goto after_0;
    // 0x8008E9F8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_0:
    // 0x8008E9FC: beq         $v0, $zero, L_8008EA20
    if (ctx->r2 == 0) {
        // 0x8008EA00: nop
    
            goto L_8008EA20;
    }
    // 0x8008EA00: nop

    // 0x8008EA04: jal         0x800F54E4
    // 0x8008EA08: nop

    func_800F54E4(rdram, ctx);
        goto after_1;
    // 0x8008EA08: nop

    after_1:
    // 0x8008EA0C: jal         0x800F6774
    // 0x8008EA10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F6774(rdram, ctx);
        goto after_2;
    // 0x8008EA10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x8008EA14: sltu        $a1, $zero, $v0
    ctx->r5 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008EA18: beql        $a1, $zero, L_8008EA30
    if (ctx->r5 == 0) {
        // 0x8008EA1C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8008EA30;
    }
    goto skip_0;
    // 0x8008EA1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    skip_0:
L_8008EA20:
    // 0x8008EA20: jal         0x800F9184
    // 0x8008EA24: nop

    func_800F9184(rdram, ctx);
        goto after_3;
    // 0x8008EA24: nop

    after_3:
    // 0x8008EA28: sltiu       $a1, $v0, 0x1
    ctx->r5 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8008EA2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
L_8008EA30:
    // 0x8008EA30: jal         0x80088648
    // 0x8008EA34: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    _glhittableDll_entrypoint_8(rdram, ctx);
        goto after_4;
    // 0x8008EA34: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_4:
    // 0x8008EA38: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8008EA3C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8008EA40: jal         0x80106790
    // 0x8008EA44: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_80106790(rdram, ctx);
        goto after_5;
    // 0x8008EA44: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_5:
    // 0x8008EA48: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8008EA4C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8008EA50: lhu         $a0, 0x1A($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X1A);
    // 0x8008EA54: srl         $t7, $a0, 5
    ctx->r15 = S32(U32(ctx->r4) >> 5);
    // 0x8008EA58: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8008EA5C: jal         0x800F53D0
    // 0x8008EA60: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    func_800F53D0(rdram, ctx);
        goto after_6;
    // 0x8008EA60: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_6:
    // 0x8008EA64: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8008EA68: jal         0x80088650
    // 0x8008EA6C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    _glhittableDll_entrypoint_9(rdram, ctx);
        goto after_7;
    // 0x8008EA6C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_7:
    // 0x8008EA70: beq         $v0, $zero, L_8008EA80
    if (ctx->r2 == 0) {
        // 0x8008EA74: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8008EA80;
    }
    // 0x8008EA74: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8008EA78: jal         0x80095760
    // 0x8008EA7C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80095760(rdram, ctx);
        goto after_8;
    // 0x8008EA7C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_8:
L_8008EA80:
    // 0x8008EA80: jal         0x8009BD44
    // 0x8008EA84: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009BD44(rdram, ctx);
        goto after_9;
    // 0x8008EA84: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_9:
    // 0x8008EA88: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8008EA8C: beql        $v0, $at, L_8008EAA8
    if (ctx->r2 == ctx->r1) {
        // 0x8008EA90: lw          $t8, 0x30($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X30);
            goto L_8008EAA8;
    }
    goto skip_1;
    // 0x8008EA90: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    skip_1:
    // 0x8008EA94: jal         0x800F6C1C
    // 0x8008EA98: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800F6C1C(rdram, ctx);
        goto after_10;
    // 0x8008EA98: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_10:
    // 0x8008EA9C: bne         $v0, $zero, L_8008EAB0
    if (ctx->r2 != 0) {
        // 0x8008EAA0: nop
    
            goto L_8008EAB0;
    }
    // 0x8008EAA0: nop

    // 0x8008EAA4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
L_8008EAA8:
    // 0x8008EAA8: bnel        $t8, $zero, L_8008ED64
    if (ctx->r24 != 0) {
        // 0x8008EAAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008ED64;
    }
    goto skip_2;
    // 0x8008EAAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
L_8008EAB0:
    // 0x8008EAB0: jal         0x80088630
    // 0x8008EAB4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    _glhittableDll_entrypoint_5(rdram, ctx);
        goto after_11;
    // 0x8008EAB4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_11:
    // 0x8008EAB8: blez        $v0, L_8008EAF0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008EABC: sw          $v0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r2;
            goto L_8008EAF0;
    }
    // 0x8008EABC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8008EAC0: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x8008EAC4: beql        $at, $zero, L_8008EAF4
    if (ctx->r1 == 0) {
        // 0x8008EAC8: slti        $at, $v0, 0x7
        ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
            goto L_8008EAF4;
    }
    goto skip_3;
    // 0x8008EAC8: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    skip_3:
    // 0x8008EACC: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x8008EAD0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8008EAD4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8008EAD8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8008EADC: bgezl       $v1, L_8008EAF0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8008EAE0: sw          $v1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r3;
            goto L_8008EAF0;
    }
    goto skip_4;
    // 0x8008EAE0: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    skip_4:
    // 0x8008EAE4: b           L_8008EAF0
    // 0x8008EAE8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
        goto L_8008EAF0;
    // 0x8008EAE8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8008EAEC: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
L_8008EAF0:
    // 0x8008EAF0: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8008EAF4:
    // 0x8008EAF4: bne         $at, $zero, L_8008EB4C
    if (ctx->r1 != 0) {
        // 0x8008EAF8: slti        $at, $v0, 0xC
        ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
            goto L_8008EB4C;
    }
    // 0x8008EAF8: slti        $at, $v0, 0xC
    ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x8008EAFC: beql        $at, $zero, L_8008EB50
    if (ctx->r1 == 0) {
        // 0x8008EB00: lw          $t4, 0x30($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X30);
            goto L_8008EB50;
    }
    goto skip_5;
    // 0x8008EB00: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    skip_5:
    // 0x8008EB04: jal         0x80088650
    // 0x8008EB08: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    _glhittableDll_entrypoint_9(rdram, ctx);
        goto after_12;
    // 0x8008EB08: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_12:
    // 0x8008EB0C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8008EB10: bnel        $at, $zero, L_8008EB48
    if (ctx->r1 != 0) {
        // 0x8008EB14: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_8008EB48;
    }
    goto skip_6;
    // 0x8008EB14: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    skip_6:
    // 0x8008EB18: jal         0x80088638
    // 0x8008EB1C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    _glhittableDll_entrypoint_6(rdram, ctx);
        goto after_13;
    // 0x8008EB1C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_13:
    // 0x8008EB20: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008EB24: beql        $v0, $at, L_8008EB50
    if (ctx->r2 == ctx->r1) {
        // 0x8008EB28: lw          $t4, 0x30($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X30);
            goto L_8008EB50;
    }
    goto skip_7;
    // 0x8008EB28: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    skip_7:
    // 0x8008EB2C: jal         0x80088638
    // 0x8008EB30: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    _glhittableDll_entrypoint_6(rdram, ctx);
        goto after_14;
    // 0x8008EB30: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_14:
    // 0x8008EB34: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8008EB38: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x8008EB3C: lbu         $t2, 0x5C($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X5C);
    // 0x8008EB40: beq         $t2, $zero, L_8008EB4C
    if (ctx->r10 == 0) {
        // 0x8008EB44: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_8008EB4C;
    }
    // 0x8008EB44: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_8008EB48:
    // 0x8008EB48: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
L_8008EB4C:
    // 0x8008EB4C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
L_8008EB50:
    // 0x8008EB50: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8008EB54: beq         $t4, $zero, L_8008EB98
    if (ctx->r12 == 0) {
        // 0x8008EB58: nop
    
            goto L_8008EB98;
    }
    // 0x8008EB58: nop

    // 0x8008EB5C: beq         $t5, $zero, L_8008EB98
    if (ctx->r13 == 0) {
        // 0x8008EB60: nop
    
            goto L_8008EB98;
    }
    // 0x8008EB60: nop

    // 0x8008EB64: jal         0x80088648
    // 0x8008EB68: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    _glhittableDll_entrypoint_8(rdram, ctx);
        goto after_15;
    // 0x8008EB68: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_15:
    // 0x8008EB6C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8008EB70: bne         $v0, $at, L_8008EB8C
    if (ctx->r2 != ctx->r1) {
        // 0x8008EB74: lw          $a1, 0x30($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X30);
            goto L_8008EB8C;
    }
    // 0x8008EB74: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8008EB78: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8008EB7C: jal         0x800A17A8
    // 0x8008EB80: addiu       $a1, $zero, -0x3E7
    ctx->r5 = ADD32(0, -0X3E7);
    func_800A17A8(rdram, ctx);
        goto after_16;
    // 0x8008EB80: addiu       $a1, $zero, -0x3E7
    ctx->r5 = ADD32(0, -0X3E7);
    after_16:
    // 0x8008EB84: b           L_8008EB98
    // 0x8008EB88: nop

        goto L_8008EB98;
    // 0x8008EB88: nop

L_8008EB8C:
    // 0x8008EB8C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8008EB90: jal         0x800A17A8
    // 0x8008EB94: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    func_800A17A8(rdram, ctx);
        goto after_17;
    // 0x8008EB94: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    after_17:
L_8008EB98:
    // 0x8008EB98: jal         0x800A1718
    // 0x8008EB9C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800A1718(rdram, ctx);
        goto after_18;
    // 0x8008EB9C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_18:
    // 0x8008EBA0: bne         $v0, $zero, L_8008EBAC
    if (ctx->r2 != 0) {
        // 0x8008EBA4: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_8008EBAC;
    }
    // 0x8008EBA4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8008EBA8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
L_8008EBAC:
    // 0x8008EBAC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8008EBB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8008EBB4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8008EBB8: bne         $t7, $v0, L_8008EBC8
    if (ctx->r15 != ctx->r2) {
        // 0x8008EBBC: lw          $t9, 0x2C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X2C);
            goto L_8008EBC8;
    }
    // 0x8008EBBC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8008EBC0: beql        $t8, $zero, L_8008ED64
    if (ctx->r24 == 0) {
        // 0x8008EBC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008ED64;
    }
    goto skip_8;
    // 0x8008EBC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_8:
L_8008EBC8:
    // 0x8008EBC8: beq         $t9, $zero, L_8008EBEC
    if (ctx->r25 == 0) {
        // 0x8008EBCC: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8008EBEC;
    }
    // 0x8008EBCC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8008EBD0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008EBD4: beq         $t9, $at, L_8008EC08
    if (ctx->r25 == ctx->r1) {
        // 0x8008EBD8: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_8008EC08;
    }
    // 0x8008EBD8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8008EBDC: beq         $t9, $v0, L_8008ECA4
    if (ctx->r25 == ctx->r2) {
        // 0x8008EBE0: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_8008ECA4;
    }
    // 0x8008EBE0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8008EBE4: b           L_8008ED64
    // 0x8008EBE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008ED64;
    // 0x8008EBE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008EBEC:
    // 0x8008EBEC: jal         0x8009AD14
    // 0x8008EBF0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_8009AD14(rdram, ctx);
        goto after_19;
    // 0x8008EBF0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_19:
    // 0x8008EBF4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8008EBF8: jal         0x8009E7C8
    // 0x8008EBFC: addiu       $a1, $zero, 0x72
    ctx->r5 = ADD32(0, 0X72);
    func_8009E7C8(rdram, ctx);
        goto after_20;
    // 0x8008EBFC: addiu       $a1, $zero, 0x72
    ctx->r5 = ADD32(0, 0X72);
    after_20:
    // 0x8008EC00: b           L_8008ED64
    // 0x8008EC04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008ED64;
    // 0x8008EC04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008EC08:
    // 0x8008EC08: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8008EC0C: jal         0x800F0D90
    // 0x8008EC10: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_800F0D90(rdram, ctx);
        goto after_21;
    // 0x8008EC10: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_21:
    // 0x8008EC14: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8008EC18: addiu       $v1, $v0, -0x7
    ctx->r3 = ADD32(ctx->r2, -0X7);
    // 0x8008EC1C: sll         $t0, $v1, 16
    ctx->r8 = S32(ctx->r3 << 16);
    // 0x8008EC20: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x8008EC24: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x8008EC28: or          $a2, $t0, $t2
    ctx->r6 = ctx->r8 | ctx->r10;
    // 0x8008EC2C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8008EC30: jal         0x8010108C
    // 0x8008EC34: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    func_8010108C(rdram, ctx);
        goto after_22;
    // 0x8008EC34: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_22:
    // 0x8008EC38: blez        $v0, L_8008EC50
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008EC3C: addiu       $a0, $v0, -0x1
        ctx->r4 = ADD32(ctx->r2, -0X1);
            goto L_8008EC50;
    }
    // 0x8008EC3C: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x8008EC40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008EC44: jal         0x800F0D90
    // 0x8008EC48: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800F0D90(rdram, ctx);
        goto after_23;
    // 0x8008EC48: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_23:
    // 0x8008EC4C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_8008EC50:
    // 0x8008EC50: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8008EC54: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8008EC58: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8008EC5C: jal         0x800F76B0
    // 0x8008EC60: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    func_800F76B0(rdram, ctx);
        goto after_24;
    // 0x8008EC60: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_24:
    // 0x8008EC64: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8008EC68: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008EC6C: lwc1        $f8, 0x4B70($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4B70);
    // 0x8008EC70: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8008EC74: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x8008EC78: lui         $a3, 0x3E99
    ctx->r7 = S32(0X3E99 << 16);
    // 0x8008EC7C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008EC80: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x8008EC84: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8008EC88: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8008EC8C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8008EC90: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8008EC94: jal         0x80085490
    // 0x8008EC98: nop

    _bamotor_entrypoint_1(rdram, ctx);
        goto after_25;
    // 0x8008EC98: nop

    after_25:
    // 0x8008EC9C: b           L_8008ED64
    // 0x8008ECA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008ED64;
    // 0x8008ECA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008ECA4:
    // 0x8008ECA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008ECA8: jal         0x800F0D90
    // 0x8008ECAC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_800F0D90(rdram, ctx);
        goto after_26;
    // 0x8008ECAC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_26:
    // 0x8008ECB0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8008ECB4: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8008ECB8: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x8008ECBC: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x8008ECC0: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x8008ECC4: or          $a2, $t4, $t6
    ctx->r6 = ctx->r12 | ctx->r14;
    // 0x8008ECC8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8008ECCC: jal         0x8010108C
    // 0x8008ECD0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    func_8010108C(rdram, ctx);
        goto after_27;
    // 0x8008ECD0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_27:
    // 0x8008ECD4: blez        $v0, L_8008ECEC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008ECD8: addiu       $a0, $v0, -0x1
        ctx->r4 = ADD32(ctx->r2, -0X1);
            goto L_8008ECEC;
    }
    // 0x8008ECD8: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x8008ECDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008ECE0: jal         0x800F0D90
    // 0x8008ECE4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800F0D90(rdram, ctx);
        goto after_28;
    // 0x8008ECE4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_28:
    // 0x8008ECE8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_8008ECEC:
    // 0x8008ECEC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8008ECF0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8008ECF4: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8008ECF8: jal         0x800F79DC
    // 0x8008ECFC: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    func_800F79DC(rdram, ctx);
        goto after_29;
    // 0x8008ECFC: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    after_29:
    // 0x8008ED00: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8008ED04: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008ED08: lwc1        $f4, 0x4B74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4B74);
    // 0x8008ED0C: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8008ED10: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8008ED14: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x8008ED18: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008ED1C: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    // 0x8008ED20: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8008ED24: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8008ED28: jal         0x80085490
    // 0x8008ED2C: nop

    _bamotor_entrypoint_1(rdram, ctx);
        goto after_30;
    // 0x8008ED2C: nop

    after_30:
    // 0x8008ED30: jal         0x80100368
    // 0x8008ED34: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_80100368(rdram, ctx);
        goto after_31;
    // 0x8008ED34: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_31:
    // 0x8008ED38: lw          $t8, 0x24($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X24);
    // 0x8008ED3C: lui         $at, 0x300
    ctx->r1 = S32(0X300 << 16);
    // 0x8008ED40: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8008ED44: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x8008ED48: beql        $t9, $zero, L_8008ED64
    if (ctx->r25 == 0) {
        // 0x8008ED4C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008ED64;
    }
    goto skip_9;
    // 0x8008ED4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_9:
    // 0x8008ED50: lw          $t0, 0xC($t1)
    ctx->r8 = MEM_W(ctx->r9, 0XC);
    // 0x8008ED54: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8008ED58: jal         0x801096C8
    // 0x8008ED5C: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    func_801096C8(rdram, ctx);
        goto after_32;
    // 0x8008ED5C: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    after_32:
    // 0x8008ED60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008ED64:
    // 0x8008ED64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8008ED68: jr          $ra
    // 0x8008ED6C: nop

    return;
    // 0x8008ED6C: nop

;}
RECOMP_FUNC void func_8008ED70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008ED70: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8008ED74: jr          $ra
    // 0x8008ED78: addiu       $v0, $v0, 0x7CAC
    ctx->r2 = ADD32(ctx->r2, 0X7CAC);
    return;
    // 0x8008ED78: addiu       $v0, $v0, 0x7CAC
    ctx->r2 = ADD32(ctx->r2, 0X7CAC);
;}
RECOMP_FUNC void func_8008ED80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008ED80: jr          $ra
    // 0x8008ED84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8008ED84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8008ED88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008ED88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008ED8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008ED90: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8008ED94: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8008ED98: jal         0x80106790
    // 0x8008ED9C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80106790(rdram, ctx);
        goto after_0;
    // 0x8008ED9C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x8008EDA0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8008EDA4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8008EDA8: jal         0x800F497C
    // 0x8008EDAC: lw          $a0, 0x184($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X184);
    func_800F497C(rdram, ctx);
        goto after_1;
    // 0x8008EDAC: lw          $a0, 0x184($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X184);
    after_1:
    // 0x8008EDB0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8008EDB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008EDB8: jal         0x800F49A8
    // 0x8008EDBC: lw          $a0, 0x184($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X184);
    func_800F49A8(rdram, ctx);
        goto after_2;
    // 0x8008EDBC: lw          $a0, 0x184($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X184);
    after_2:
    // 0x8008EDC0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8008EDC4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8008EDC8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8008EDCC: addiu       $a1, $a1, -0x2A24
    ctx->r5 = ADD32(ctx->r5, -0X2A24);
    // 0x8008EDD0: lw          $a0, 0x184($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X184);
    // 0x8008EDD4: jal         0x800F49D4
    // 0x8008EDD8: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    func_800F49D4(rdram, ctx);
        goto after_3;
    // 0x8008EDD8: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    after_3:
    // 0x8008EDDC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8008EDE0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8008EDE4: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    // 0x8008EDE8: lw          $a0, 0x184($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X184);
    // 0x8008EDEC: jal         0x800F4A58
    // 0x8008EDF0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_800F4A58(rdram, ctx);
        goto after_4;
    // 0x8008EDF0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_4:
    // 0x8008EDF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008EDF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008EDFC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008EE04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008EE04: beq         $a0, $zero, L_8008EE14
    if (ctx->r4 == 0) {
            // 0x8008EE08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    func_8008EE14(rdram, ctx);
    return;
    }
    // 0x8008EE08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008EE0C: jr          $ra
    // 0x8008EE10: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x8008EE10: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void func_8008EE14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008EE14: jr          $ra
    // 0x8008EE18: nop

    return;
    // 0x8008EE18: nop

;}
RECOMP_FUNC void func_8008EE1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008EE1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008EE20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008EE24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008EE28: jal         0x800F53D0
    // 0x8008EE2C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x8008EE2C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8008EE30: jal         0x8009E6F8
    // 0x8008EE34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8009E6F8(rdram, ctx);
        goto after_1;
    // 0x8008EE34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008EE38: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x8008EE3C: beq         $v0, $at, L_8008EE58
    if (ctx->r2 == ctx->r1) {
        // 0x8008EE40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008EE58;
    }
    // 0x8008EE40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008EE44: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x8008EE48: beq         $v0, $at, L_8008EE70
    if (ctx->r2 == ctx->r1) {
        // 0x8008EE4C: lw          $t0, 0x18($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X18);
            goto L_8008EE70;
    }
    // 0x8008EE4C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8008EE50: b           L_8008EE80
    // 0x8008EE54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8008EE80;
    // 0x8008EE54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008EE58:
    // 0x8008EE58: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8008EE5C: lw          $v0, 0x74($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X74);
    // 0x8008EE60: sll         $t7, $v0, 12
    ctx->r15 = S32(ctx->r2 << 12);
    // 0x8008EE64: srl         $t8, $t7, 31
    ctx->r24 = S32(U32(ctx->r15) >> 31);
    // 0x8008EE68: b           L_8008EE80
    // 0x8008EE6C: sltiu       $v0, $t8, 0x1
    ctx->r2 = ctx->r24 < 0X1 ? 1 : 0;
        goto L_8008EE80;
    // 0x8008EE6C: sltiu       $v0, $t8, 0x1
    ctx->r2 = ctx->r24 < 0X1 ? 1 : 0;
L_8008EE70:
    // 0x8008EE70: lhu         $v0, 0x74($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X74);
    // 0x8008EE74: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x8008EE78: b           L_8008EE80
    // 0x8008EE7C: sltiu       $v0, $t1, 0x1
    ctx->r2 = ctx->r9 < 0X1 ? 1 : 0;
        goto L_8008EE80;
    // 0x8008EE7C: sltiu       $v0, $t1, 0x1
    ctx->r2 = ctx->r9 < 0X1 ? 1 : 0;
L_8008EE80:
    // 0x8008EE80: jr          $ra
    // 0x8008EE84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8008EE84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008EE88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008EE88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008EE8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008EE90: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8008EE94: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8008EE98: jal         0x8009C128
    // 0x8008EE9C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8008EE9C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8008EEA0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8008EEA4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x8008EEA8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8008EEAC: jal         0x8008EEC4
    // 0x8008EEB0: addiu       $a3, $zero, 0x270
    ctx->r7 = ADD32(0, 0X270);
    func_8008EEC4(rdram, ctx);
        goto after_1;
    // 0x8008EEB0: addiu       $a3, $zero, 0x270
    ctx->r7 = ADD32(0, 0X270);
    after_1:
    // 0x8008EEB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008EEB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008EEBC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008EEC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008EEC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008EEC8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8008EECC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8008EED0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8008EED4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8008EED8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8008EEDC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8008EEE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8008EEE4: jal         0x800CB840
    // 0x8008EEE8: lw          $a1, 0x184($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X184);
    func_800CB840(rdram, ctx);
        goto after_0;
    // 0x8008EEE8: lw          $a1, 0x184($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X184);
    after_0:
    // 0x8008EEEC: jal         0x8008E938
    // 0x8008EEF0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008E938(rdram, ctx);
        goto after_1;
    // 0x8008EEF0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x8008EEF4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8008EEF8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8008EEFC: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x8008EF00: lw          $t8, 0x184($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X184);
    // 0x8008EF04: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8008EF08: addiu       $a3, $a3, -0x11E4
    ctx->r7 = ADD32(ctx->r7, -0X11E4);
    // 0x8008EF0C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8008EF10: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8008EF14: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8008EF18: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8008EF1C: jal         0x80109C4C
    // 0x8008EF20: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80109C4C(rdram, ctx);
        goto after_2;
    // 0x8008EF20: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_2:
    // 0x8008EF24: jal         0x800CB870
    // 0x8008EF28: nop

    func_800CB870(rdram, ctx);
        goto after_3;
    // 0x8008EF28: nop

    after_3:
    // 0x8008EF2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8008EF30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008EF34: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008EF3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008EF3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008EF40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008EF44: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8008EF48: jal         0x8009E6F8
    // 0x8008EF4C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8009E6F8(rdram, ctx);
        goto after_0;
    // 0x8008EF4C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008EF50: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8008EF54: jal         0x800A3274
    // 0x8008EF58: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_800A3274(rdram, ctx);
        goto after_1;
    // 0x8008EF58: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x8008EF5C: addiu       $t6, $v0, -0x2
    ctx->r14 = ADD32(ctx->r2, -0X2);
    // 0x8008EF60: sltiu       $at, $t6, 0x12
    ctx->r1 = ctx->r14 < 0X12 ? 1 : 0;
    // 0x8008EF64: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8008EF68: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8008EF6C: beq         $at, $zero, L_8008F1CC
    if (ctx->r1 == 0) {
        // 0x8008EF70: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_8008F1CC;
    }
    // 0x8008EF70: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8008EF74: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008EF78: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008EF7C: addu        $at, $at, $t6
    gpr jr_addend_8008EF84 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8008EF80: lw          $t6, 0x4B80($at)
    ctx->r14 = ADD32(ctx->r1, 0X4B80);
    // 0x8008EF84: jr          $t6
    // 0x8008EF88: nop

    switch (jr_addend_8008EF84 >> 2) {
        case 0: goto L_8008EF8C; break;
        case 1: goto L_8008F1CC; break;
        case 2: goto L_8008F1CC; break;
        case 3: goto L_8008F1CC; break;
        case 4: goto L_8008F1CC; break;
        case 5: goto L_8008F1CC; break;
        case 6: goto L_8008F1CC; break;
        case 7: goto L_8008F120; break;
        case 8: goto L_8008F1CC; break;
        case 9: goto L_8008F06C; break;
        case 10: goto L_8008F1CC; break;
        case 11: goto L_8008EFAC; break;
        case 12: goto L_8008EFDC; break;
        case 13: goto L_8008F034; break;
        case 14: goto L_8008F064; break;
        case 15: goto L_8008F1CC; break;
        case 16: goto L_8008F164; break;
        case 17: goto L_8008F198; break;
        default: switch_error(__func__, 0x8008EF84, 0x80124B80);
    }
    // 0x8008EF88: nop

L_8008EF8C:
    // 0x8008EF8C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008EF90: jal         0x80095738
    // 0x8008EF94: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    func_80095738(rdram, ctx);
        goto after_2;
    // 0x8008EF94: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_2:
    // 0x8008EF98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008EF9C: jal         0x8008EE04
    // 0x8008EFA0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8008EE04(rdram, ctx);
        goto after_3;
    // 0x8008EFA0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_3:
    // 0x8008EFA4: b           L_8008F4E4
    // 0x8008EFA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008F4E4;
    // 0x8008EFA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008EFAC:
    // 0x8008EFAC: addiu       $at, $zero, 0xF7
    ctx->r1 = ADD32(0, 0XF7);
    // 0x8008EFB0: bne         $v1, $at, L_8008EFD4
    if (ctx->r3 != ctx->r1) {
        // 0x8008EFB4: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8008EFD4;
    }
    // 0x8008EFB4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008EFB8: jal         0x80095738
    // 0x8008EFBC: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    func_80095738(rdram, ctx);
        goto after_4;
    // 0x8008EFBC: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_4:
    // 0x8008EFC0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008EFC4: jal         0x8008EE04
    // 0x8008EFC8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_8008EE04(rdram, ctx);
        goto after_5;
    // 0x8008EFC8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_5:
    // 0x8008EFCC: b           L_8008F4E4
    // 0x8008EFD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008F4E4;
    // 0x8008EFD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008EFD4:
    // 0x8008EFD4: b           L_8008F4E0
    // 0x8008EFD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008F4E0;
    // 0x8008EFD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008EFDC:
    // 0x8008EFDC: addiu       $at, $zero, 0xFC
    ctx->r1 = ADD32(0, 0XFC);
    // 0x8008EFE0: bne         $v1, $at, L_8008F004
    if (ctx->r3 != ctx->r1) {
        // 0x8008EFE4: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8008F004;
    }
    // 0x8008EFE4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008EFE8: jal         0x80095738
    // 0x8008EFEC: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    func_80095738(rdram, ctx);
        goto after_6;
    // 0x8008EFEC: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    after_6:
    // 0x8008EFF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008EFF4: jal         0x8008EE04
    // 0x8008EFF8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_8008EE04(rdram, ctx);
        goto after_7;
    // 0x8008EFF8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_7:
    // 0x8008EFFC: b           L_8008F4E4
    // 0x8008F000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008F4E4;
    // 0x8008F000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008F004:
    // 0x8008F004: addiu       $at, $zero, 0xFB
    ctx->r1 = ADD32(0, 0XFB);
    // 0x8008F008: bne         $v1, $at, L_8008F02C
    if (ctx->r3 != ctx->r1) {
        // 0x8008F00C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8008F02C;
    }
    // 0x8008F00C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008F010: jal         0x80095738
    // 0x8008F014: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    func_80095738(rdram, ctx);
        goto after_8;
    // 0x8008F014: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    after_8:
    // 0x8008F018: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F01C: jal         0x8008EE04
    // 0x8008F020: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8008EE04(rdram, ctx);
        goto after_9;
    // 0x8008F020: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_9:
    // 0x8008F024: b           L_8008F4E4
    // 0x8008F028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008F4E4;
    // 0x8008F028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008F02C:
    // 0x8008F02C: b           L_8008F4E0
    // 0x8008F030: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008F4E0;
    // 0x8008F030: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008F034:
    // 0x8008F034: addiu       $at, $zero, 0x10E
    ctx->r1 = ADD32(0, 0X10E);
    // 0x8008F038: bne         $v1, $at, L_8008F05C
    if (ctx->r3 != ctx->r1) {
        // 0x8008F03C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8008F05C;
    }
    // 0x8008F03C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008F040: jal         0x80095738
    // 0x8008F044: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    func_80095738(rdram, ctx);
        goto after_10;
    // 0x8008F044: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_10:
    // 0x8008F048: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F04C: jal         0x8008EE04
    // 0x8008F050: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8008EE04(rdram, ctx);
        goto after_11;
    // 0x8008F050: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_11:
    // 0x8008F054: b           L_8008F4E4
    // 0x8008F058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008F4E4;
    // 0x8008F058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008F05C:
    // 0x8008F05C: b           L_8008F4E0
    // 0x8008F060: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008F4E0;
    // 0x8008F060: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008F064:
    // 0x8008F064: b           L_8008F4E0
    // 0x8008F068: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
        goto L_8008F4E0;
    // 0x8008F068: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_8008F06C:
    // 0x8008F06C: addiu       $at, $zero, 0xC2
    ctx->r1 = ADD32(0, 0XC2);
    // 0x8008F070: beq         $v1, $at, L_8008F09C
    if (ctx->r3 == ctx->r1) {
        // 0x8008F074: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8008F09C;
    }
    // 0x8008F074: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008F078: addiu       $at, $zero, 0xC4
    ctx->r1 = ADD32(0, 0XC4);
    // 0x8008F07C: beq         $v1, $at, L_8008F09C
    if (ctx->r3 == ctx->r1) {
        // 0x8008F080: addiu       $at, $zero, 0x18A
        ctx->r1 = ADD32(0, 0X18A);
            goto L_8008F09C;
    }
    // 0x8008F080: addiu       $at, $zero, 0x18A
    ctx->r1 = ADD32(0, 0X18A);
    // 0x8008F084: beq         $v1, $at, L_8008F0B8
    if (ctx->r3 == ctx->r1) {
        // 0x8008F088: addiu       $at, $zero, 0x18B
        ctx->r1 = ADD32(0, 0X18B);
            goto L_8008F0B8;
    }
    // 0x8008F088: addiu       $at, $zero, 0x18B
    ctx->r1 = ADD32(0, 0X18B);
    // 0x8008F08C: beq         $v1, $at, L_8008F0B8
    if (ctx->r3 == ctx->r1) {
        // 0x8008F090: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8008F0B8;
    }
    // 0x8008F090: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008F094: b           L_8008F0C0
    // 0x8008F098: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
        goto L_8008F0C0;
    // 0x8008F098: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
L_8008F09C:
    // 0x8008F09C: jal         0x80095738
    // 0x8008F0A0: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    func_80095738(rdram, ctx);
        goto after_12;
    // 0x8008F0A0: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    after_12:
    // 0x8008F0A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F0A8: jal         0x8008EE04
    // 0x8008F0AC: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_8008EE04(rdram, ctx);
        goto after_13;
    // 0x8008F0AC: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_13:
    // 0x8008F0B0: b           L_8008F4E4
    // 0x8008F0B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008F4E4;
    // 0x8008F0B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008F0B8:
    // 0x8008F0B8: b           L_8008F4E0
    // 0x8008F0BC: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
        goto L_8008F4E0;
    // 0x8008F0BC: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
L_8008F0C0:
    // 0x8008F0C0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x8008F0C4: jal         0x80095738
    // 0x8008F0C8: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_80095738(rdram, ctx);
        goto after_14;
    // 0x8008F0C8: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_14:
    // 0x8008F0CC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8008F0D0: beq         $v0, $zero, L_8008F118
    if (ctx->r2 == 0) {
        // 0x8008F0D4: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_8008F118;
    }
    // 0x8008F0D4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8008F0D8: beq         $a2, $zero, L_8008F110
    if (ctx->r6 == 0) {
        // 0x8008F0DC: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8008F110;
    }
    // 0x8008F0DC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8008F0E0: jal         0x80106790
    // 0x8008F0E4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_80106790(rdram, ctx);
        goto after_15;
    // 0x8008F0E4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_15:
    // 0x8008F0E8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8008F0EC: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    // 0x8008F0F0: jal         0x8008DC90
    // 0x8008F0F4: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    func_8008DC90(rdram, ctx);
        goto after_16;
    // 0x8008F0F4: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    after_16:
    // 0x8008F0F8: beq         $v0, $zero, L_8008F108
    if (ctx->r2 == 0) {
        // 0x8008F0FC: nop
    
            goto L_8008F108;
    }
    // 0x8008F0FC: nop

    // 0x8008F100: b           L_8008F4E0
    // 0x8008F104: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
        goto L_8008F4E0;
    // 0x8008F104: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_8008F108:
    // 0x8008F108: b           L_8008F4E0
    // 0x8008F10C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008F4E0;
    // 0x8008F10C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008F110:
    // 0x8008F110: b           L_8008F4E0
    // 0x8008F114: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
        goto L_8008F4E0;
    // 0x8008F114: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_8008F118:
    // 0x8008F118: b           L_8008F4E0
    // 0x8008F11C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008F4E0;
    // 0x8008F11C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008F120:
    // 0x8008F120: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008F124: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x8008F128: jal         0x80095738
    // 0x8008F12C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_80095738(rdram, ctx);
        goto after_17;
    // 0x8008F12C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_17:
    // 0x8008F130: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8008F134: jal         0x8008E92C
    // 0x8008F138: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8008E92C(rdram, ctx);
        goto after_18;
    // 0x8008F138: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_18:
    // 0x8008F13C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8008F140: sltiu       $t8, $v0, 0x1
    ctx->r24 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8008F144: beq         $t7, $zero, L_8008F15C
    if (ctx->r15 == 0) {
        // 0x8008F148: nop
    
            goto L_8008F15C;
    }
    // 0x8008F148: nop

    // 0x8008F14C: beq         $t8, $zero, L_8008F15C
    if (ctx->r24 == 0) {
        // 0x8008F150: nop
    
            goto L_8008F15C;
    }
    // 0x8008F150: nop

    // 0x8008F154: b           L_8008F4E0
    // 0x8008F158: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
        goto L_8008F4E0;
    // 0x8008F158: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
L_8008F15C:
    // 0x8008F15C: b           L_8008F4E0
    // 0x8008F160: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008F4E0;
    // 0x8008F160: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008F164:
    // 0x8008F164: beq         $a2, $zero, L_8008F190
    if (ctx->r6 == 0) {
        // 0x8008F168: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8008F190;
    }
    // 0x8008F168: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8008F16C: jal         0x80106790
    // 0x8008F170: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_80106790(rdram, ctx);
        goto after_19;
    // 0x8008F170: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_19:
    // 0x8008F174: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8008F178: jal         0x800840B0
    // 0x8008F17C: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    _bstrexsmall_entrypoint_7(rdram, ctx);
        goto after_20;
    // 0x8008F17C: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    after_20:
    // 0x8008F180: beq         $v0, $zero, L_8008F190
    if (ctx->r2 == 0) {
        // 0x8008F184: nop
    
            goto L_8008F190;
    }
    // 0x8008F184: nop

    // 0x8008F188: b           L_8008F4E0
    // 0x8008F18C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
        goto L_8008F4E0;
    // 0x8008F18C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
L_8008F190:
    // 0x8008F190: b           L_8008F4E0
    // 0x8008F194: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008F4E0;
    // 0x8008F194: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008F198:
    // 0x8008F198: beq         $a2, $zero, L_8008F1C4
    if (ctx->r6 == 0) {
        // 0x8008F19C: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8008F1C4;
    }
    // 0x8008F19C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8008F1A0: jal         0x80106790
    // 0x8008F1A4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_80106790(rdram, ctx);
        goto after_21;
    // 0x8008F1A4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_21:
    // 0x8008F1A8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8008F1AC: jal         0x80084030
    // 0x8008F1B0: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    _bstrexlarge_entrypoint_7(rdram, ctx);
        goto after_22;
    // 0x8008F1B0: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    after_22:
    // 0x8008F1B4: beq         $v0, $zero, L_8008F1C4
    if (ctx->r2 == 0) {
        // 0x8008F1B8: nop
    
            goto L_8008F1C4;
    }
    // 0x8008F1B8: nop

    // 0x8008F1BC: b           L_8008F4E0
    // 0x8008F1C0: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
        goto L_8008F4E0;
    // 0x8008F1C0: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
L_8008F1C4:
    // 0x8008F1C4: b           L_8008F4E0
    // 0x8008F1C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008F4E0;
    // 0x8008F1C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008F1CC:
    // 0x8008F1CC: lw          $t9, 0x18($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X18);
    // 0x8008F1D0: slti        $at, $v1, 0xE5
    ctx->r1 = SIGNED(ctx->r3) < 0XE5 ? 1 : 0;
    // 0x8008F1D4: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x8008F1D8: beq         $t0, $zero, L_8008F1E8
    if (ctx->r8 == 0) {
        // 0x8008F1DC: nop
    
            goto L_8008F1E8;
    }
    // 0x8008F1DC: nop

    // 0x8008F1E0: b           L_8008F4E0
    // 0x8008F1E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8008F4E0;
    // 0x8008F1E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8008F1E8:
    // 0x8008F1E8: bne         $at, $zero, L_8008F218
    if (ctx->r1 != 0) {
        // 0x8008F1EC: addiu       $t2, $v1, -0x5
        ctx->r10 = ADD32(ctx->r3, -0X5);
            goto L_8008F218;
    }
    // 0x8008F1EC: addiu       $t2, $v1, -0x5
    ctx->r10 = ADD32(ctx->r3, -0X5);
    // 0x8008F1F0: addiu       $at, $zero, 0x124
    ctx->r1 = ADD32(0, 0X124);
    // 0x8008F1F4: beq         $v1, $at, L_8008F4B4
    if (ctx->r3 == ctx->r1) {
        // 0x8008F1F8: addiu       $at, $zero, 0x189
        ctx->r1 = ADD32(0, 0X189);
            goto L_8008F4B4;
    }
    // 0x8008F1F8: addiu       $at, $zero, 0x189
    ctx->r1 = ADD32(0, 0X189);
    // 0x8008F1FC: beq         $v1, $at, L_8008F280
    if (ctx->r3 == ctx->r1) {
        // 0x8008F200: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8008F280;
    }
    // 0x8008F200: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008F204: addiu       $at, $zero, 0x18A
    ctx->r1 = ADD32(0, 0X18A);
    // 0x8008F208: beq         $v1, $at, L_8008F4D4
    if (ctx->r3 == ctx->r1) {
        // 0x8008F20C: nop
    
            goto L_8008F4D4;
    }
    // 0x8008F20C: nop

    // 0x8008F210: b           L_8008F4E0
    // 0x8008F214: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008F4E0;
    // 0x8008F214: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008F218:
    // 0x8008F218: slti        $at, $v1, 0xB7
    ctx->r1 = SIGNED(ctx->r3) < 0XB7 ? 1 : 0;
    // 0x8008F21C: bne         $at, $zero, L_8008F238
    if (ctx->r1 != 0) {
        // 0x8008F220: addiu       $t1, $v1, -0xA4
        ctx->r9 = ADD32(ctx->r3, -0XA4);
            goto L_8008F238;
    }
    // 0x8008F220: addiu       $t1, $v1, -0xA4
    ctx->r9 = ADD32(ctx->r3, -0XA4);
    // 0x8008F224: addiu       $at, $zero, 0xE4
    ctx->r1 = ADD32(0, 0XE4);
    // 0x8008F228: beq         $v1, $at, L_8008F29C
    if (ctx->r3 == ctx->r1) {
        // 0x8008F22C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8008F29C;
    }
    // 0x8008F22C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008F230: b           L_8008F4E0
    // 0x8008F234: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008F4E0;
    // 0x8008F234: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008F238:
    // 0x8008F238: slti        $at, $v1, 0x3E
    ctx->r1 = SIGNED(ctx->r3) < 0X3E ? 1 : 0;
    // 0x8008F23C: bne         $at, $zero, L_8008F260
    if (ctx->r1 != 0) {
        // 0x8008F240: sltiu       $at, $t1, 0x13
        ctx->r1 = ctx->r9 < 0X13 ? 1 : 0;
            goto L_8008F260;
    }
    // 0x8008F240: sltiu       $at, $t1, 0x13
    ctx->r1 = ctx->r9 < 0X13 ? 1 : 0;
    // 0x8008F244: beq         $at, $zero, L_8008F4DC
    if (ctx->r1 == 0) {
        // 0x8008F248: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_8008F4DC;
    }
    // 0x8008F248: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008F24C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008F250: addu        $at, $at, $t1
    gpr jr_addend_8008F258 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008F254: lw          $t1, 0x4BC8($at)
    ctx->r9 = ADD32(ctx->r1, 0X4BC8);
    // 0x8008F258: jr          $t1
    // 0x8008F25C: nop

    switch (jr_addend_8008F258 >> 2) {
        case 0: goto L_8008F410; break;
        case 1: goto L_8008F410; break;
        case 2: goto L_8008F4DC; break;
        case 3: goto L_8008F4DC; break;
        case 4: goto L_8008F4DC; break;
        case 5: goto L_8008F2B8; break;
        case 6: goto L_8008F4DC; break;
        case 7: goto L_8008F4DC; break;
        case 8: goto L_8008F4DC; break;
        case 9: goto L_8008F4DC; break;
        case 10: goto L_8008F4DC; break;
        case 11: goto L_8008F4DC; break;
        case 12: goto L_8008F4DC; break;
        case 13: goto L_8008F4DC; break;
        case 14: goto L_8008F4DC; break;
        case 15: goto L_8008F4DC; break;
        case 16: goto L_8008F320; break;
        case 17: goto L_8008F4DC; break;
        case 18: goto L_8008F2C0; break;
        default: switch_error(__func__, 0x8008F258, 0x80124BC8);
    }
    // 0x8008F25C: nop

L_8008F260:
    // 0x8008F260: sltiu       $at, $t2, 0x39
    ctx->r1 = ctx->r10 < 0X39 ? 1 : 0;
    // 0x8008F264: beq         $at, $zero, L_8008F4DC
    if (ctx->r1 == 0) {
        // 0x8008F268: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_8008F4DC;
    }
    // 0x8008F268: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008F26C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008F270: addu        $at, $at, $t2
    gpr jr_addend_8008F278 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8008F274: lw          $t2, 0x4C14($at)
    ctx->r10 = ADD32(ctx->r1, 0X4C14);
    // 0x8008F278: jr          $t2
    // 0x8008F27C: nop

    switch (jr_addend_8008F278 >> 2) {
        case 0: goto L_8008F438; break;
        case 1: goto L_8008F360; break;
        case 2: goto L_8008F4DC; break;
        case 3: goto L_8008F4DC; break;
        case 4: goto L_8008F4DC; break;
        case 5: goto L_8008F4DC; break;
        case 6: goto L_8008F4DC; break;
        case 7: goto L_8008F4DC; break;
        case 8: goto L_8008F4DC; break;
        case 9: goto L_8008F4DC; break;
        case 10: goto L_8008F2E0; break;
        case 11: goto L_8008F4DC; break;
        case 12: goto L_8008F3C0; break;
        case 13: goto L_8008F4DC; break;
        case 14: goto L_8008F300; break;
        case 15: goto L_8008F4DC; break;
        case 16: goto L_8008F4DC; break;
        case 17: goto L_8008F4DC; break;
        case 18: goto L_8008F4DC; break;
        case 19: goto L_8008F4DC; break;
        case 20: goto L_8008F4DC; break;
        case 21: goto L_8008F410; break;
        case 22: goto L_8008F410; break;
        case 23: goto L_8008F410; break;
        case 24: goto L_8008F410; break;
        case 25: goto L_8008F410; break;
        case 26: goto L_8008F4DC; break;
        case 27: goto L_8008F4DC; break;
        case 28: goto L_8008F4DC; break;
        case 29: goto L_8008F4DC; break;
        case 30: goto L_8008F4DC; break;
        case 31: goto L_8008F4DC; break;
        case 32: goto L_8008F4DC; break;
        case 33: goto L_8008F4DC; break;
        case 34: goto L_8008F4DC; break;
        case 35: goto L_8008F4DC; break;
        case 36: goto L_8008F4DC; break;
        case 37: goto L_8008F340; break;
        case 38: goto L_8008F4DC; break;
        case 39: goto L_8008F4DC; break;
        case 40: goto L_8008F4DC; break;
        case 41: goto L_8008F4DC; break;
        case 42: goto L_8008F474; break;
        case 43: goto L_8008F4DC; break;
        case 44: goto L_8008F418; break;
        case 45: goto L_8008F4DC; break;
        case 46: goto L_8008F4DC; break;
        case 47: goto L_8008F4DC; break;
        case 48: goto L_8008F4DC; break;
        case 49: goto L_8008F4DC; break;
        case 50: goto L_8008F4DC; break;
        case 51: goto L_8008F4DC; break;
        case 52: goto L_8008F4DC; break;
        case 53: goto L_8008F4DC; break;
        case 54: goto L_8008F4DC; break;
        case 55: goto L_8008F4DC; break;
        case 56: goto L_8008F438; break;
        default: switch_error(__func__, 0x8008F278, 0x80124C14);
    }
    // 0x8008F27C: nop

L_8008F280:
    // 0x8008F280: jal         0x80095738
    // 0x8008F284: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    func_80095738(rdram, ctx);
        goto after_23;
    // 0x8008F284: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    after_23:
    // 0x8008F288: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F28C: jal         0x8008EE04
    // 0x8008F290: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_8008EE04(rdram, ctx);
        goto after_24;
    // 0x8008F290: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_24:
    // 0x8008F294: b           L_8008F4E4
    // 0x8008F298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008F4E4;
    // 0x8008F298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008F29C:
    // 0x8008F29C: jal         0x80095738
    // 0x8008F2A0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80095738(rdram, ctx);
        goto after_25;
    // 0x8008F2A0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_25:
    // 0x8008F2A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F2A8: jal         0x8008EE04
    // 0x8008F2AC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_8008EE04(rdram, ctx);
        goto after_26;
    // 0x8008F2AC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_26:
    // 0x8008F2B0: b           L_8008F4E4
    // 0x8008F2B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008F4E4;
    // 0x8008F2B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008F2B8:
    // 0x8008F2B8: b           L_8008F4E0
    // 0x8008F2BC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8008F4E0;
    // 0x8008F2BC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8008F2C0:
    // 0x8008F2C0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008F2C4: jal         0x80095738
    // 0x8008F2C8: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    func_80095738(rdram, ctx);
        goto after_27;
    // 0x8008F2C8: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    after_27:
    // 0x8008F2CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F2D0: jal         0x8008EE04
    // 0x8008F2D4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8008EE04(rdram, ctx);
        goto after_28;
    // 0x8008F2D4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_28:
    // 0x8008F2D8: b           L_8008F4E4
    // 0x8008F2DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008F4E4;
    // 0x8008F2DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008F2E0:
    // 0x8008F2E0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008F2E4: jal         0x80095738
    // 0x8008F2E8: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    func_80095738(rdram, ctx);
        goto after_29;
    // 0x8008F2E8: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_29:
    // 0x8008F2EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F2F0: jal         0x8008EE04
    // 0x8008F2F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008EE04(rdram, ctx);
        goto after_30;
    // 0x8008F2F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_30:
    // 0x8008F2F8: b           L_8008F4E4
    // 0x8008F2FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008F4E4;
    // 0x8008F2FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008F300:
    // 0x8008F300: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008F304: jal         0x80095738
    // 0x8008F308: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_80095738(rdram, ctx);
        goto after_31;
    // 0x8008F308: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_31:
    // 0x8008F30C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F310: jal         0x8008EE04
    // 0x8008F314: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008EE04(rdram, ctx);
        goto after_32;
    // 0x8008F314: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_32:
    // 0x8008F318: b           L_8008F4E4
    // 0x8008F31C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008F4E4;
    // 0x8008F31C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008F320:
    // 0x8008F320: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008F324: jal         0x80095738
    // 0x8008F328: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_80095738(rdram, ctx);
        goto after_33;
    // 0x8008F328: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_33:
    // 0x8008F32C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F330: jal         0x8008EE04
    // 0x8008F334: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008EE04(rdram, ctx);
        goto after_34;
    // 0x8008F334: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_34:
    // 0x8008F338: b           L_8008F4E4
    // 0x8008F33C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008F4E4;
    // 0x8008F33C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008F340:
    // 0x8008F340: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008F344: jal         0x80095738
    // 0x8008F348: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    func_80095738(rdram, ctx);
        goto after_35;
    // 0x8008F348: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_35:
    // 0x8008F34C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F350: jal         0x8008EE04
    // 0x8008F354: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008EE04(rdram, ctx);
        goto after_36;
    // 0x8008F354: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_36:
    // 0x8008F358: b           L_8008F4E4
    // 0x8008F35C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008F4E4;
    // 0x8008F35C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008F360:
    // 0x8008F360: beq         $a2, $zero, L_8008F390
    if (ctx->r6 == 0) {
        // 0x8008F364: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8008F390;
    }
    // 0x8008F364: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8008F368: jal         0x80106790
    // 0x8008F36C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_80106790(rdram, ctx);
        goto after_37;
    // 0x8008F36C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_37:
    // 0x8008F370: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8008F374: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    // 0x8008F378: jal         0x8008DAE8
    // 0x8008F37C: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    func_8008DAE8(rdram, ctx);
        goto after_38;
    // 0x8008F37C: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    after_38:
    // 0x8008F380: bne         $v0, $zero, L_8008F390
    if (ctx->r2 != 0) {
        // 0x8008F384: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_8008F390;
    }
    // 0x8008F384: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8008F388: b           L_8008F4E0
    // 0x8008F38C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008F4E0;
    // 0x8008F38C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008F390:
    // 0x8008F390: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008F394: jal         0x80095738
    // 0x8008F398: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    func_80095738(rdram, ctx);
        goto after_39;
    // 0x8008F398: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_39:
    // 0x8008F39C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F3A0: jal         0x8008EE04
    // 0x8008F3A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8008EE04(rdram, ctx);
        goto after_40;
    // 0x8008F3A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_40:
    // 0x8008F3A8: beq         $v0, $zero, L_8008F3B8
    if (ctx->r2 == 0) {
        // 0x8008F3AC: nop
    
            goto L_8008F3B8;
    }
    // 0x8008F3AC: nop

    // 0x8008F3B0: b           L_8008F4E4
    // 0x8008F3B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008F4E4;
    // 0x8008F3B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008F3B8:
    // 0x8008F3B8: b           L_8008F4E0
    // 0x8008F3BC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8008F4E0;
    // 0x8008F3BC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8008F3C0:
    // 0x8008F3C0: beq         $a2, $zero, L_8008F3F0
    if (ctx->r6 == 0) {
        // 0x8008F3C4: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8008F3F0;
    }
    // 0x8008F3C4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8008F3C8: jal         0x80106790
    // 0x8008F3CC: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_80106790(rdram, ctx);
        goto after_41;
    // 0x8008F3CC: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_41:
    // 0x8008F3D0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8008F3D4: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    // 0x8008F3D8: jal         0x8008DAE8
    // 0x8008F3DC: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    func_8008DAE8(rdram, ctx);
        goto after_42;
    // 0x8008F3DC: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    after_42:
    // 0x8008F3E0: bne         $v0, $zero, L_8008F3F0
    if (ctx->r2 != 0) {
        // 0x8008F3E4: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_8008F3F0;
    }
    // 0x8008F3E4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8008F3E8: b           L_8008F4E0
    // 0x8008F3EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008F4E0;
    // 0x8008F3EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008F3F0:
    // 0x8008F3F0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008F3F4: jal         0x80095738
    // 0x8008F3F8: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    func_80095738(rdram, ctx);
        goto after_43;
    // 0x8008F3F8: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_43:
    // 0x8008F3FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F400: jal         0x8008EE04
    // 0x8008F404: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8008EE04(rdram, ctx);
        goto after_44;
    // 0x8008F404: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_44:
    // 0x8008F408: b           L_8008F4E4
    // 0x8008F40C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008F4E4;
    // 0x8008F40C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008F410:
    // 0x8008F410: b           L_8008F4E0
    // 0x8008F414: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8008F4E0;
    // 0x8008F414: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8008F418:
    // 0x8008F418: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008F41C: jal         0x80095738
    // 0x8008F420: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    func_80095738(rdram, ctx);
        goto after_45;
    // 0x8008F420: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_45:
    // 0x8008F424: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F428: jal         0x8008EE04
    // 0x8008F42C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8008EE04(rdram, ctx);
        goto after_46;
    // 0x8008F42C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_46:
    // 0x8008F430: b           L_8008F4E4
    // 0x8008F434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008F4E4;
    // 0x8008F434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008F438:
    // 0x8008F438: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008F43C: jal         0x8009BB50
    // 0x8008F440: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_8009BB50(rdram, ctx);
        goto after_47;
    // 0x8008F440: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_47:
    // 0x8008F444: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8008F448: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8008F44C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8008F450: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008F454: bc1fl       L_8008F478
    if (!c1cs) {
        // 0x8008F458: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8008F478;
    }
    goto skip_0;
    // 0x8008F458: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    skip_0:
    // 0x8008F45C: jal         0x8008E078
    // 0x8008F460: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_8008E078(rdram, ctx);
        goto after_48;
    // 0x8008F460: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_48:
    // 0x8008F464: bne         $v0, $zero, L_8008F474
    if (ctx->r2 != 0) {
        // 0x8008F468: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_8008F474;
    }
    // 0x8008F468: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8008F46C: b           L_8008F4E0
    // 0x8008F470: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_8008F4E0;
    // 0x8008F470: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8008F474:
    // 0x8008F474: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_8008F478:
    // 0x8008F478: jal         0x8009BB50
    // 0x8008F47C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_8009BB50(rdram, ctx);
        goto after_49;
    // 0x8008F47C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_49:
    // 0x8008F480: lui         $at, 0xC4AF
    ctx->r1 = S32(0XC4AF << 16);
    // 0x8008F484: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8008F488: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8008F48C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8008F490: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008F494: bc1fl       L_8008F4B8
    if (!c1cs) {
        // 0x8008F498: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8008F4B8;
    }
    goto skip_1;
    // 0x8008F498: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    skip_1:
    // 0x8008F49C: jal         0x8008E078
    // 0x8008F4A0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_8008E078(rdram, ctx);
        goto after_50;
    // 0x8008F4A0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_50:
    // 0x8008F4A4: bne         $v0, $zero, L_8008F4B4
    if (ctx->r2 != 0) {
        // 0x8008F4A8: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_8008F4B4;
    }
    // 0x8008F4A8: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8008F4AC: b           L_8008F4E0
    // 0x8008F4B0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_8008F4E0;
    // 0x8008F4B0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8008F4B4:
    // 0x8008F4B4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_8008F4B8:
    // 0x8008F4B8: jal         0x80095738
    // 0x8008F4BC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    func_80095738(rdram, ctx);
        goto after_51;
    // 0x8008F4BC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    after_51:
    // 0x8008F4C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F4C4: jal         0x8008EE04
    // 0x8008F4C8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_8008EE04(rdram, ctx);
        goto after_52;
    // 0x8008F4C8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_52:
    // 0x8008F4CC: b           L_8008F4E4
    // 0x8008F4D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008F4E4;
    // 0x8008F4D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008F4D4:
    // 0x8008F4D4: b           L_8008F4E0
    // 0x8008F4D8: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
        goto L_8008F4E0;
    // 0x8008F4D8: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
L_8008F4DC:
    // 0x8008F4DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008F4E0:
    // 0x8008F4E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008F4E4:
    // 0x8008F4E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008F4E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008F4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F4F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008F4F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008F4F8: jal         0x8008EF3C
    // 0x8008F4FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8008EF3C(rdram, ctx);
        goto after_0;
    // 0x8008F4FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008F500: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8008F504: bne         $v0, $at, L_8008F52C
    if (ctx->r2 != ctx->r1) {
        // 0x8008F508: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8008F52C;
    }
    // 0x8008F508: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8008F50C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8008F510: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    // 0x8008F514: jal         0x80095738
    // 0x8008F518: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80095738(rdram, ctx);
        goto after_1;
    // 0x8008F518: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8008F51C: beq         $v0, $zero, L_8008F52C
    if (ctx->r2 == 0) {
        // 0x8008F520: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_8008F52C;
    }
    // 0x8008F520: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8008F524: b           L_8008F558
    // 0x8008F528: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8008F558;
    // 0x8008F528: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8008F52C:
    // 0x8008F52C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008F530: bne         $v1, $at, L_8008F554
    if (ctx->r3 != ctx->r1) {
        // 0x8008F534: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8008F554;
    }
    // 0x8008F534: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8008F538: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x8008F53C: jal         0x80095738
    // 0x8008F540: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80095738(rdram, ctx);
        goto after_2;
    // 0x8008F540: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x8008F544: beq         $v0, $zero, L_8008F554
    if (ctx->r2 == 0) {
        // 0x8008F548: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_8008F554;
    }
    // 0x8008F548: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8008F54C: b           L_8008F558
    // 0x8008F550: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8008F558;
    // 0x8008F550: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8008F554:
    // 0x8008F554: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008F558:
    // 0x8008F558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008F55C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008F560: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008F568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F568: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008F56C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008F570: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8008F574: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8008F578: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8008F57C: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x8008F580: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8008F584: jal         0x80084D40
    // 0x8008F588: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    _bahold_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x8008F588: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    after_0:
    // 0x8008F58C: beq         $v0, $zero, L_8008F5A4
    if (ctx->r2 == 0) {
        // 0x8008F590: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8008F5A4;
    }
    // 0x8008F590: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F594: jal         0x80106790
    // 0x8008F598: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_80106790(rdram, ctx);
        goto after_1;
    // 0x8008F598: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x8008F59C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8008F5A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_8008F5A4:
    // 0x8008F5A4: beq         $a0, $zero, L_8008F5CC
    if (ctx->r4 == 0) {
        // 0x8008F5A8: lw          $t0, 0x1C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X1C);
            goto L_8008F5CC;
    }
    // 0x8008F5A8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8008F5AC: lw          $t1, 0x6C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X6C);
    // 0x8008F5B0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8008F5B4: sll         $t2, $t1, 11
    ctx->r10 = S32(ctx->r9 << 11);
    // 0x8008F5B8: srl         $t3, $t2, 20
    ctx->r11 = S32(U32(ctx->r10) >> 20);
    // 0x8008F5BC: beql        $t9, $t3, L_8008F5D0
    if (ctx->r25 == ctx->r11) {
        // 0x8008F5C0: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_8008F5D0;
    }
    goto skip_0;
    // 0x8008F5C0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    skip_0:
    // 0x8008F5C4: b           L_8008F61C
    // 0x8008F5C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008F61C;
    // 0x8008F5C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008F5CC:
    // 0x8008F5CC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_8008F5D0:
    // 0x8008F5D0: jal         0x8008E9A0
    // 0x8008F5D4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8008E9A0(rdram, ctx);
        goto after_2;
    // 0x8008F5D4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x8008F5D8: jal         0x800D1B34
    // 0x8008F5DC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_800D1B34(rdram, ctx);
        goto after_3;
    // 0x8008F5DC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x8008F5E0: jal         0x800D1C38
    // 0x8008F5E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D1C38(rdram, ctx);
        goto after_4;
    // 0x8008F5E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x8008F5E8: bne         $v0, $zero, L_8008F600
    if (ctx->r2 != 0) {
        // 0x8008F5EC: nop
    
            goto L_8008F600;
    }
    // 0x8008F5EC: nop

    // 0x8008F5F0: jal         0x800904C8
    // 0x8008F5F4: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_800904C8(rdram, ctx);
        goto after_5;
    // 0x8008F5F4: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_5:
    // 0x8008F5F8: b           L_8008F608
    // 0x8008F5FC: nop

        goto L_8008F608;
    // 0x8008F5FC: nop

L_8008F600:
    // 0x8008F600: b           L_8008F61C
    // 0x8008F604: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008F61C;
    // 0x8008F604: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008F608:
    // 0x8008F608: jal         0x80106790
    // 0x8008F60C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_80106790(rdram, ctx);
        goto after_6;
    // 0x8008F60C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x8008F610: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8008F614: sw          $v0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r2;
    // 0x8008F618: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008F61C:
    // 0x8008F61C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008F620: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008F624: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008F62C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F62C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8008F630: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008F634: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008F638: jal         0x800F53D0
    // 0x8008F63C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x8008F63C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8008F640: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8008F644: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F648: jal         0x80092D44
    // 0x8008F64C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80092D44(rdram, ctx);
        goto after_1;
    // 0x8008F64C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x8008F650: jal         0x8009C984
    // 0x8008F654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_2;
    // 0x8008F654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8008F658: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8008F65C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8008F660: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8008F664: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8008F668: jal         0x80108474
    // 0x8008F66C: nop

    func_80108474(rdram, ctx);
        goto after_3;
    // 0x8008F66C: nop

    after_3:
    // 0x8008F670: lbu         $t8, 0x65($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X65);
    // 0x8008F674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008F678: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x8008F67C: ori         $t9, $t8, 0x80
    ctx->r25 = ctx->r24 | 0X80;
    // 0x8008F680: jal         0x80084D48
    // 0x8008F684: sb          $t9, 0x65($v0)
    MEM_B(0X65, ctx->r2) = ctx->r25;
    _bahold_entrypoint_6(rdram, ctx);
        goto after_4;
    // 0x8008F684: sb          $t9, 0x65($v0)
    MEM_B(0X65, ctx->r2) = ctx->r25;
    after_4:
    // 0x8008F688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008F68C: jal         0x8009E674
    // 0x8008F690: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    func_8009E674(rdram, ctx);
        goto after_5;
    // 0x8008F690: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    after_5:
    // 0x8008F694: bne         $v0, $zero, L_8008F6A4
    if (ctx->r2 != 0) {
        // 0x8008F698: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8008F6A4;
    }
    // 0x8008F698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008F69C: jal         0x8009E5C8
    // 0x8008F6A0: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x8008F6A0: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    after_6:
L_8008F6A4:
    // 0x8008F6A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008F6A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008F6AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8008F6B0: jr          $ra
    // 0x8008F6B4: nop

    return;
    // 0x8008F6B4: nop

;}
RECOMP_FUNC void func_8008F6B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F6B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008F6BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008F6C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8008F6C4: jal         0x80084D40
    // 0x8008F6C8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    _bahold_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x8008F6C8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8008F6CC: beq         $v0, $zero, L_8008F6E8
    if (ctx->r2 == 0) {
        // 0x8008F6D0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8008F6E8;
    }
    // 0x8008F6D0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8008F6D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F6D8: jal         0x80106790
    // 0x8008F6DC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80106790(rdram, ctx);
        goto after_1;
    // 0x8008F6DC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8008F6E0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8008F6E4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
L_8008F6E8:
    // 0x8008F6E8: beq         $a1, $zero, L_8008F718
    if (ctx->r5 == 0) {
        // 0x8008F6EC: lw          $t7, 0x18($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18);
            goto L_8008F718;
    }
    // 0x8008F6EC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8008F6F0: lw          $t8, 0x6C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X6C);
    // 0x8008F6F4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8008F6F8: sll         $t9, $t8, 11
    ctx->r25 = S32(ctx->r24 << 11);
    // 0x8008F6FC: srl         $t0, $t9, 20
    ctx->r8 = S32(U32(ctx->r25) >> 20);
    // 0x8008F700: bne         $t6, $t0, L_8008F718
    if (ctx->r14 != ctx->r8) {
        // 0x8008F704: nop
    
            goto L_8008F718;
    }
    // 0x8008F704: nop

    // 0x8008F708: jal         0x80084D48
    // 0x8008F70C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bahold_entrypoint_6(rdram, ctx);
        goto after_2;
    // 0x8008F70C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x8008F710: b           L_8008F73C
    // 0x8008F714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008F73C;
    // 0x8008F714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008F718:
    // 0x8008F718: jal         0x8008E9AC
    // 0x8008F71C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008E9AC(rdram, ctx);
        goto after_3;
    // 0x8008F71C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x8008F720: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8008F724: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8008F728: addiu       $a0, $a0, -0x9D4
    ctx->r4 = ADD32(ctx->r4, -0X9D4);
    // 0x8008F72C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8008F730: jal         0x80086D38
    // 0x8008F734: lw          $a1, 0x184($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X184);
    _chbaddiesetup_entrypoint_2(rdram, ctx);
        goto after_4;
    // 0x8008F734: lw          $a1, 0x184($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X184);
    after_4:
    // 0x8008F738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008F73C:
    // 0x8008F73C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008F740: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008F748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F748: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008F74C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8008F750: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008F754: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8008F758: jal         0x80088278
    // 0x8008F75C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    _gccubesearch_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x8008F75C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x8008F760: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F764: jal         0x80088C00
    // 0x8008F768: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    _gspropctrl_entrypoint_11(rdram, ctx);
        goto after_1;
    // 0x8008F768: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x8008F76C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8008F770: jal         0x800A3514
    // 0x8008F774: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800A3514(rdram, ctx);
        goto after_2;
    // 0x8008F774: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x8008F778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008F77C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008F780: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008F788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008F78C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008F790: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008F794: jal         0x800D1B34
    // 0x8008F798: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800D1B34(rdram, ctx);
        goto after_0;
    // 0x8008F798: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8008F79C: jal         0x800D1844
    // 0x8008F7A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D1844(rdram, ctx);
        goto after_1;
    // 0x8008F7A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008F7A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008F7A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008F7AC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008F7B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F7B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008F7B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008F7BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8008F7C0: jal         0x80084D40
    // 0x8008F7C4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    _bahold_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x8008F7C4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8008F7C8: beq         $v0, $zero, L_8008F7E0
    if (ctx->r2 == 0) {
        // 0x8008F7CC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8008F7E0;
    }
    // 0x8008F7CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F7D0: jal         0x80106790
    // 0x8008F7D4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80106790(rdram, ctx);
        goto after_1;
    // 0x8008F7D4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8008F7D8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8008F7DC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
L_8008F7E0:
    // 0x8008F7E0: beq         $a0, $zero, L_8008F808
    if (ctx->r4 == 0) {
        // 0x8008F7E4: lw          $t7, 0x18($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18);
            goto L_8008F808;
    }
    // 0x8008F7E4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8008F7E8: lw          $t8, 0x6C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X6C);
    // 0x8008F7EC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8008F7F0: sll         $t9, $t8, 11
    ctx->r25 = S32(ctx->r24 << 11);
    // 0x8008F7F4: srl         $t0, $t9, 20
    ctx->r8 = S32(U32(ctx->r25) >> 20);
    // 0x8008F7F8: bne         $t6, $t0, L_8008F808
    if (ctx->r14 != ctx->r8) {
        // 0x8008F7FC: nop
    
            goto L_8008F808;
    }
    // 0x8008F7FC: nop

    // 0x8008F800: jal         0x80084D38
    // 0x8008F804: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bahold_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x8008F804: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
L_8008F808:
    // 0x8008F808: jal         0x800D1B34
    // 0x8008F80C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800D1B34(rdram, ctx);
        goto after_3;
    // 0x8008F80C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x8008F810: jal         0x800D1804
    // 0x8008F814: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D1804(rdram, ctx);
        goto after_4;
    // 0x8008F814: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x8008F818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008F81C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008F820: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008F828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F828: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008F82C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008F830: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008F834: jal         0x800D1B34
    // 0x8008F838: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800D1B34(rdram, ctx);
        goto after_0;
    // 0x8008F838: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8008F83C: jal         0x800D1A04
    // 0x8008F840: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D1A04(rdram, ctx);
        goto after_1;
    // 0x8008F840: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008F844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008F848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008F84C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008F854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F854: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008F858: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008F85C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008F860: jal         0x800D1B34
    // 0x8008F864: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800D1B34(rdram, ctx);
        goto after_0;
    // 0x8008F864: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8008F868: jal         0x800D1824
    // 0x8008F86C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800D1824(rdram, ctx);
        goto after_1;
    // 0x8008F86C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008F870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008F874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008F878: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008F880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008F884: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008F888: jal         0x80106790
    // 0x8008F88C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80106790(rdram, ctx);
        goto after_0;
    // 0x8008F88C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8008F890: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8008F894: jal         0x800EE7F8
    // 0x8008F898: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x8008F898: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    after_1:
    // 0x8008F89C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008F8A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008F8A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008F8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F8B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008F8B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008F8B8: jal         0x800F54E4
    // 0x8008F8BC: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008F8BC: nop

    after_0:
    // 0x8008F8C0: jal         0x800F497C
    // 0x8008F8C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F497C(rdram, ctx);
        goto after_1;
    // 0x8008F8C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008F8C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008F8CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008F8D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008F8D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F8D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008F8DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008F8E0: jal         0x800F54E4
    // 0x8008F8E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008F8E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008F8E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F8EC: jal         0x800F49A8
    // 0x8008F8F0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F49A8(rdram, ctx);
        goto after_1;
    // 0x8008F8F0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008F8F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008F8F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008F8FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008F904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F904: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008F908: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008F90C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008F910: jal         0x800F54E4
    // 0x8008F914: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008F914: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8008F918: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F91C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8008F920: jal         0x800F49D4
    // 0x8008F924: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800F49D4(rdram, ctx);
        goto after_1;
    // 0x8008F924: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x8008F928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008F92C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008F930: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008F938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F938: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008F93C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008F940: jal         0x800F54E4
    // 0x8008F944: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008F944: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008F948: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F94C: jal         0x800F4A00
    // 0x8008F950: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F4A00(rdram, ctx);
        goto after_1;
    // 0x8008F950: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008F954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008F958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008F95C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008F964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F964: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008F968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008F96C: jal         0x800F54E4
    // 0x8008F970: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008F970: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008F974: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F978: jal         0x800F4A2C
    // 0x8008F97C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F4A2C(rdram, ctx);
        goto after_1;
    // 0x8008F97C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008F980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008F984: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008F988: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008F990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008F994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008F998: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008F99C: jal         0x800F54E4
    // 0x8008F9A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008F9A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8008F9A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F9A8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8008F9AC: jal         0x800F4A58
    // 0x8008F9B0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800F4A58(rdram, ctx);
        goto after_1;
    // 0x8008F9B0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x8008F9B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008F9B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008F9BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008F9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F9C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008F9C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008F9CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008F9D0: jal         0x800F54E4
    // 0x8008F9D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008F9D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8008F9D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008F9DC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8008F9E0: jal         0x800F4A8C
    // 0x8008F9E4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800F4A8C(rdram, ctx);
        goto after_1;
    // 0x8008F9E4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x8008F9E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008F9EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008F9F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008F9F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F9F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008F9FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FA00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008FA04: jal         0x800F54E4
    // 0x8008FA08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FA08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8008FA0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008FA10: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8008FA14: jal         0x800F4AC0
    // 0x8008FA18: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800F4AC0(rdram, ctx);
        goto after_1;
    // 0x8008FA18: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x8008FA1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FA20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FA24: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FA2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FA2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FA30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FA34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008FA38: jal         0x800F54E4
    // 0x8008FA3C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FA3C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8008FA40: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008FA44: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8008FA48: jal         0x800F4B8C
    // 0x8008FA4C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800F4B8C(rdram, ctx);
        goto after_1;
    // 0x8008FA4C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x8008FA50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FA54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FA58: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FA60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FA60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FA64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FA68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008FA6C: jal         0x800F54E4
    // 0x8008FA70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FA70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8008FA74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008FA78: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8008FA7C: jal         0x800F4BB8
    // 0x8008FA80: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800F4BB8(rdram, ctx);
        goto after_1;
    // 0x8008FA80: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x8008FA84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FA88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FA8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FA94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FA94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FA98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FA9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008FAA0: jal         0x800F54E4
    // 0x8008FAA4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FAA4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8008FAA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008FAAC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8008FAB0: jal         0x800F4D18
    // 0x8008FAB4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800F4D18(rdram, ctx);
        goto after_1;
    // 0x8008FAB4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x8008FAB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FAC0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FAC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FAC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008FACC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008FAD0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8008FAD4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8008FAD8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8008FADC: jal         0x800F54E4
    // 0x8008FAE0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FAE0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8008FAE4: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8008FAE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008FAEC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8008FAF0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8008FAF4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8008FAF8: jal         0x800F4D74
    // 0x8008FAFC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F4D74(rdram, ctx);
        goto after_1;
    // 0x8008FAFC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8008FB00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008FB04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008FB08: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FB10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008FB14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008FB18: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8008FB1C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8008FB20: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8008FB24: jal         0x800F54E4
    // 0x8008FB28: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FB28: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8008FB2C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8008FB30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008FB34: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8008FB38: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8008FB3C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8008FB40: jal         0x800F4EC8
    // 0x8008FB44: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F4EC8(rdram, ctx);
        goto after_1;
    // 0x8008FB44: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8008FB48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008FB4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008FB50: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FB58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FB58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FB5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FB60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008FB64: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8008FB68: jal         0x800F54E4
    // 0x8008FB6C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FB6C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x8008FB70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008FB74: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8008FB78: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8008FB7C: jal         0x800F4F34
    // 0x8008FB80: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    func_800F4F34(rdram, ctx);
        goto after_1;
    // 0x8008FB80: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x8008FB84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FB88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FB8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FB94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FB94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FB98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FB9C: jal         0x800F54E4
    // 0x8008FBA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FBA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008FBA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008FBA8: jal         0x800F4924
    // 0x8008FBAC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F4924(rdram, ctx);
        goto after_1;
    // 0x8008FBAC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008FBB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FBB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FBB8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FBC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FBC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FBC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FBC8: jal         0x8008FB94
    // 0x8008FBCC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8008FB94(rdram, ctx);
        goto after_0;
    // 0x8008FBCC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_0:
    // 0x8008FBD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FBD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FBD8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FBE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FBE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FBE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FBE8: jal         0x800A1624
    // 0x8008FBEC: nop

    func_800A1624(rdram, ctx);
        goto after_0;
    // 0x8008FBEC: nop

    after_0:
    // 0x8008FBF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FBF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FBF8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FC00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FC00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FC04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FC08: jal         0x800F54E4
    // 0x8008FC0C: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FC0C: nop

    after_0:
    // 0x8008FC10: jal         0x800F5578
    // 0x8008FC14: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5578(rdram, ctx);
        goto after_1;
    // 0x8008FC14: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008FC18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FC1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FC20: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FC28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FC28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FC2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FC30: jal         0x800F54E4
    // 0x8008FC34: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FC34: nop

    after_0:
    // 0x8008FC38: jal         0x800F55A4
    // 0x8008FC3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F55A4(rdram, ctx);
        goto after_1;
    // 0x8008FC3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008FC40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FC44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FC48: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FC50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FC50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FC54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FC58: jal         0x8008FB94
    // 0x8008FC5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8008FB94(rdram, ctx);
        goto after_0;
    // 0x8008FC5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8008FC60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FC64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FC68: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FC70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FC70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FC74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FC78: jal         0x800F54E4
    // 0x8008FC7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FC7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008FC80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008FC84: jal         0x800F81A8
    // 0x8008FC88: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F81A8(rdram, ctx);
        goto after_1;
    // 0x8008FC88: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008FC8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FC90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FC94: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FC9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FC9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FCA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FCA4: jal         0x800F54E4
    // 0x8008FCA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FCA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008FCAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008FCB0: jal         0x800F521C
    // 0x8008FCB4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F521C(rdram, ctx);
        goto after_1;
    // 0x8008FCB4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008FCB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FCBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FCC0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FCC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FCC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FCCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FCD0: jal         0x800F54E4
    // 0x8008FCD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FCD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008FCD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008FCDC: jal         0x800F52B8
    // 0x8008FCE0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F52B8(rdram, ctx);
        goto after_1;
    // 0x8008FCE0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008FCE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FCE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FCEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FCF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FCF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FCF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FCFC: jal         0x800F54E4
    // 0x8008FD00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FD00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008FD04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008FD08: jal         0x800F52E4
    // 0x8008FD0C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F52E4(rdram, ctx);
        goto after_1;
    // 0x8008FD0C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008FD10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FD14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FD18: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FD20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FD24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FD28: jal         0x800F54E4
    // 0x8008FD2C: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FD2C: nop

    after_0:
    // 0x8008FD30: jal         0x800F5378
    // 0x8008FD34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5378(rdram, ctx);
        goto after_1;
    // 0x8008FD34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008FD38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FD3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FD40: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FD48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FD48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FD4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FD50: jal         0x800F54E4
    // 0x8008FD54: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FD54: nop

    after_0:
    // 0x8008FD58: jal         0x800F5410
    // 0x8008FD5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5410(rdram, ctx);
        goto after_1;
    // 0x8008FD5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008FD60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FD64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FD68: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FD70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FD70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FD74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FD78: jal         0x800F54E4
    // 0x8008FD7C: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FD7C: nop

    after_0:
    // 0x8008FD80: jal         0x800F543C
    // 0x8008FD84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F543C(rdram, ctx);
        goto after_1;
    // 0x8008FD84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008FD88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FD8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FD90: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FD98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FD98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FD9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FDA0: jal         0x800F54E4
    // 0x8008FDA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FDA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008FDA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008FDAC: jal         0x800F549C
    // 0x8008FDB0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F549C(rdram, ctx);
        goto after_1;
    // 0x8008FDB0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008FDB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FDB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FDBC: jr          $ra
    // 0x8008FDC0: nop

    return;
    // 0x8008FDC0: nop

;}
RECOMP_FUNC void func_8008FDC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FDC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FDC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FDCC: jal         0x800F54E4
    // 0x8008FDD0: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FDD0: nop

    after_0:
    // 0x8008FDD4: jal         0x800F55FC
    // 0x8008FDD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F55FC(rdram, ctx);
        goto after_1;
    // 0x8008FDD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008FDDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FDE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FDE4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FDEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FDEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FDF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FDF4: jal         0x800F54E4
    // 0x8008FDF8: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FDF8: nop

    after_0:
    // 0x8008FDFC: jal         0x800F56D8
    // 0x8008FE00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F56D8(rdram, ctx);
        goto after_1;
    // 0x8008FE00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008FE04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FE08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FE0C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FE14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FE14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FE18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FE1C: jal         0x800F54E4
    // 0x8008FE20: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FE20: nop

    after_0:
    // 0x8008FE24: jal         0x800F5704
    // 0x8008FE28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5704(rdram, ctx);
        goto after_1;
    // 0x8008FE28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008FE2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FE30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FE34: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FE3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FE40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FE44: jal         0x800F54E4
    // 0x8008FE48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FE48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008FE4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008FE50: jal         0x800F57F0
    // 0x8008FE54: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F57F0(rdram, ctx);
        goto after_1;
    // 0x8008FE54: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008FE58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FE5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FE60: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FE68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FE68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FE6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FE70: jal         0x800F54E4
    // 0x8008FE74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FE74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008FE78: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008FE7C: jal         0x800F5A00
    // 0x8008FE80: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F5A00(rdram, ctx);
        goto after_1;
    // 0x8008FE80: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008FE84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FE88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FE8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FE94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FE94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FE98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FE9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008FEA0: jal         0x800F54E4
    // 0x8008FEA4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FEA4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8008FEA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008FEAC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8008FEB0: jal         0x800F5A2C
    // 0x8008FEB4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800F5A2C(rdram, ctx);
        goto after_1;
    // 0x8008FEB4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x8008FEB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FEBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FEC0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FEC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FEC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FED0: jal         0x800F54E4
    // 0x8008FED4: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FED4: nop

    after_0:
    // 0x8008FED8: jal         0x800F58A0
    // 0x8008FEDC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F58A0(rdram, ctx);
        goto after_1;
    // 0x8008FEDC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008FEE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FEE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FEE8: jr          $ra
    // 0x8008FEEC: nop

    return;
    // 0x8008FEEC: nop

;}
RECOMP_FUNC void func_8008FEF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FEF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FEF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FEF8: jal         0x800F54E4
    // 0x8008FEFC: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FEFC: nop

    after_0:
    // 0x8008FF00: jal         0x800F5AE0
    // 0x8008FF04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5AE0(rdram, ctx);
        goto after_1;
    // 0x8008FF04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008FF08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FF0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FF10: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FF18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FF18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FF1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FF20: jal         0x800F54E4
    // 0x8008FF24: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FF24: nop

    after_0:
    // 0x8008FF28: jal         0x800F5B0C
    // 0x8008FF2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5B0C(rdram, ctx);
        goto after_1;
    // 0x8008FF2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008FF30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FF34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FF38: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FF40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FF44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FF48: jal         0x800F54E4
    // 0x8008FF4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FF4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008FF50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008FF54: jal         0x800F5B38
    // 0x8008FF58: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F5B38(rdram, ctx);
        goto after_1;
    // 0x8008FF58: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008FF5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FF60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FF64: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FF6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FF6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FF70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FF74: jal         0x800F54E4
    // 0x8008FF78: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FF78: nop

    after_0:
    // 0x8008FF7C: jal         0x800F5C94
    // 0x8008FF80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5C94(rdram, ctx);
        goto after_1;
    // 0x8008FF80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008FF84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FF88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FF8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FF94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FF94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FF98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FF9C: jal         0x800F54E4
    // 0x8008FFA0: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FFA0: nop

    after_0:
    // 0x8008FFA4: jal         0x800F5D18
    // 0x8008FFA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5D18(rdram, ctx);
        goto after_1;
    // 0x8008FFA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008FFAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FFB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FFB4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FFBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FFBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FFC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FFC4: jal         0x800F54E4
    // 0x8008FFC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FFC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008FFCC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008FFD0: jal         0x800F5D70
    // 0x8008FFD4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F5D70(rdram, ctx);
        goto after_1;
    // 0x8008FFD4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008FFD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008FFDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008FFE0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008FFE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FFE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008FFEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008FFF0: jal         0x800F54E4
    // 0x8008FFF4: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8008FFF4: nop

    after_0:
    // 0x8008FFF8: jal         0x800F5EF8
    // 0x8008FFFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5EF8(rdram, ctx);
        goto after_1;
    // 0x8008FFFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80090000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090004: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090008: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090018: jal         0x800F54E4
    // 0x8009001C: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8009001C: nop

    after_0:
    // 0x80090020: jal         0x800F5F24
    // 0x80090024: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5F24(rdram, ctx);
        goto after_1;
    // 0x80090024: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80090028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009002C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090030: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090038: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009003C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80090040: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80090044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090048: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8009004C: jal         0x800EE88C
    // 0x80090050: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_800EE88C(rdram, ctx);
        goto after_0;
    // 0x80090050: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80090054: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80090058: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    // 0x8009005C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x80090060: lhu         $a0, 0x1A($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X1A);
    // 0x80090064: srl         $t7, $a0, 5
    ctx->r15 = S32(U32(ctx->r4) >> 5);
    // 0x80090068: jal         0x800F7CF4
    // 0x8009006C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_800F7CF4(rdram, ctx);
        goto after_1;
    // 0x8009006C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x80090070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090074: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090078: jr          $ra
    // 0x8009007C: nop

    return;
    // 0x8009007C: nop

;}
RECOMP_FUNC void func_80090080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090080: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090088: jal         0x800F54E4
    // 0x8009008C: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8009008C: nop

    after_0:
    // 0x80090090: jal         0x800F5FA8
    // 0x80090094: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5FA8(rdram, ctx);
        goto after_1;
    // 0x80090094: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80090098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009009C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800900A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800900A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800900A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800900AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800900B0: jal         0x800F54E4
    // 0x800900B4: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800900B4: nop

    after_0:
    // 0x800900B8: jal         0x800F6018
    // 0x800900BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F6018(rdram, ctx);
        goto after_1;
    // 0x800900BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800900C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800900C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800900C8: jr          $ra
    // 0x800900CC: nop

    return;
    // 0x800900CC: nop

;}
RECOMP_FUNC void func_800900D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800900D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800900D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800900D8: jal         0x800F54E4
    // 0x800900DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800900DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800900E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800900E4: jal         0x800F63B4
    // 0x800900E8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F63B4(rdram, ctx);
        goto after_1;
    // 0x800900E8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800900EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800900F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800900F4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800900FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800900FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090100: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090104: jal         0x800F54E4
    // 0x80090108: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x80090108: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009010C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80090110: jal         0x800F640C
    // 0x80090114: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F640C(rdram, ctx);
        goto after_1;
    // 0x80090114: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80090118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009011C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090120: jr          $ra
    // 0x80090124: nop

    return;
    // 0x80090124: nop

;}
RECOMP_FUNC void func_80090128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009012C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090130: jal         0x800F54E4
    // 0x80090134: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x80090134: nop

    after_0:
    // 0x80090138: jal         0x800F6438
    // 0x8009013C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F6438(rdram, ctx);
        goto after_1;
    // 0x8009013C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80090140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090148: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090158: jal         0x800F54E4
    // 0x8009015C: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8009015C: nop

    after_0:
    // 0x80090160: jal         0x800F6478
    // 0x80090164: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F6478(rdram, ctx);
        goto after_1;
    // 0x80090164: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80090168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009016C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090170: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090178: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009017C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090180: jal         0x800F54E4
    // 0x80090184: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x80090184: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80090188: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8009018C: jal         0x800F64A4
    // 0x80090190: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F64A4(rdram, ctx);
        goto after_1;
    // 0x80090190: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80090194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090198: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009019C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800901A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800901A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800901A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800901AC: jal         0x800F54E4
    // 0x800901B0: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800901B0: nop

    after_0:
    // 0x800901B4: jal         0x800F6634
    // 0x800901B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F6634(rdram, ctx);
        goto after_1;
    // 0x800901B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800901BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800901C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800901C4: jr          $ra
    // 0x800901C8: nop

    return;
    // 0x800901C8: nop

;}
RECOMP_FUNC void func_800901CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800901CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800901D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800901D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800901D8: jal         0x800F54E4
    // 0x800901DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800901DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800901E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800901E4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800901E8: jal         0x800F66BC
    // 0x800901EC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800F66BC(rdram, ctx);
        goto after_1;
    // 0x800901EC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800901F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800901F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800901F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090200: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090204: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090208: jal         0x800F5310
    // 0x8009020C: nop

    func_800F5310(rdram, ctx);
        goto after_0;
    // 0x8009020C: nop

    after_0:
    // 0x80090210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090214: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090218: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090220: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090228: jal         0x800F54E4
    // 0x8009022C: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8009022C: nop

    after_0:
    // 0x80090230: jal         0x800F6C1C
    // 0x80090234: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F6C1C(rdram, ctx);
        goto after_1;
    // 0x80090234: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80090238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009023C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090240: jr          $ra
    // 0x80090244: nop

    return;
    // 0x80090244: nop

;}
RECOMP_FUNC void func_80090248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090248: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009024C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090250: jal         0x800F54E4
    // 0x80090254: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x80090254: nop

    after_0:
    // 0x80090258: jal         0x800F6C5C
    // 0x8009025C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F6C5C(rdram, ctx);
        goto after_1;
    // 0x8009025C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80090260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090264: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090268: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090270: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090274: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090278: jal         0x800F54E4
    // 0x8009027C: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8009027C: nop

    after_0:
    // 0x80090280: jal         0x800F6CC8
    // 0x80090284: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F6CC8(rdram, ctx);
        goto after_1;
    // 0x80090284: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80090288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009028C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090290: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090298: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009029C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800902A0: jal         0x8008FF18
    // 0x800902A4: nop

    func_8008FF18(rdram, ctx);
        goto after_0;
    // 0x800902A4: nop

    after_0:
    // 0x800902A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800902AC: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x800902B0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800902B4: jr          $ra
    // 0x800902B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800902B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800902BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800902BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800902C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800902C4: jal         0x800F54E4
    // 0x800902C8: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800902C8: nop

    after_0:
    // 0x800902CC: jal         0x800F70EC
    // 0x800902D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F70EC(rdram, ctx);
        goto after_1;
    // 0x800902D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800902D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800902D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800902DC: jr          $ra
    // 0x800902E0: nop

    return;
    // 0x800902E0: nop

;}
RECOMP_FUNC void func_800902E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800902E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800902E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800902EC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800902F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800902F4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800902F8: jal         0x800F54E4
    // 0x800902FC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800902FC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80090300: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80090304: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80090308: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8009030C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80090310: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80090314: jal         0x800F7200
    // 0x80090318: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_800F7200(rdram, ctx);
        goto after_1;
    // 0x80090318: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x8009031C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090320: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80090324: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009032C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009032C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090334: jal         0x800F54E4
    // 0x80090338: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x80090338: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009033C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80090340: jal         0x800F739C
    // 0x80090344: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F739C(rdram, ctx);
        goto after_1;
    // 0x80090344: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80090348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009034C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090350: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090358: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009035C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090360: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80090364: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80090368: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8009036C: jal         0x8008F8B0
    // 0x80090370: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8008F8B0(rdram, ctx);
        goto after_0;
    // 0x80090370: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x80090374: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80090378: jal         0x8008F904
    // 0x8009037C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8008F904(rdram, ctx);
        goto after_1;
    // 0x8009037C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x80090380: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80090384: jal         0x8008F9C4
    // 0x80090388: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8008F9C4(rdram, ctx);
        goto after_2;
    // 0x80090388: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x8009038C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090394: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009039C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009039C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800903A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800903A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800903A8: jal         0x800F54E4
    // 0x800903AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800903AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800903B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800903B4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800903B8: jal         0x800F7700
    // 0x800903BC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800F7700(rdram, ctx);
        goto after_1;
    // 0x800903BC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800903C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800903C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800903C8: jr          $ra
    // 0x800903CC: nop

    return;
    // 0x800903CC: nop

;}
RECOMP_FUNC void func_800903D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800903D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800903D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800903D8: lui         $a2, 0xC4BB
    ctx->r6 = S32(0XC4BB << 16);
    // 0x800903DC: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x800903E0: jal         0x800903F8
    // 0x800903E4: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    func_800903F8(rdram, ctx);
        goto after_0;
    // 0x800903E4: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    after_0:
    // 0x800903E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800903EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800903F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800903F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800903F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800903FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090400: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80090404: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80090408: jal         0x800F54E4
    // 0x8009040C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8009040C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80090410: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80090414: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80090418: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8009041C: jal         0x800F7844
    // 0x80090420: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    func_800F7844(rdram, ctx);
        goto after_1;
    // 0x80090420: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80090424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009042C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090434: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009043C: jal         0x800F54E4
    // 0x80090440: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x80090440: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80090444: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80090448: jal         0x800F796C
    // 0x8009044C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F796C(rdram, ctx);
        goto after_1;
    // 0x8009044C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80090450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090458: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090460: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090468: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009046C: jal         0x800F54E4
    // 0x80090470: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x80090470: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80090474: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80090478: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8009047C: jal         0x800F79DC
    // 0x80090480: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800F79DC(rdram, ctx);
        goto after_1;
    // 0x80090480: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80090484: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009048C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090494: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090498: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009049C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800904A0: jal         0x800F54E4
    // 0x800904A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800904A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800904A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800904AC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800904B0: jal         0x800F7A2C
    // 0x800904B4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800F7A2C(rdram, ctx);
        goto after_1;
    // 0x800904B4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800904B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800904BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800904C0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800904C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800904C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800904CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800904D0: jal         0x800F54E4
    // 0x800904D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800904D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800904D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800904DC: jal         0x800F7B9C
    // 0x800904E0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F7B9C(rdram, ctx);
        goto after_1;
    // 0x800904E0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800904E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800904E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800904EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800904F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800904F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800904F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800904FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80090500: jal         0x800F54E4
    // 0x80090504: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x80090504: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80090508: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8009050C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80090510: jal         0x800F7BC8
    // 0x80090514: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800F7BC8(rdram, ctx);
        goto after_1;
    // 0x80090514: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80090518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009051C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090520: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009052C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090530: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80090534: jal         0x800F54E4
    // 0x80090538: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x80090538: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8009053C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80090540: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80090544: jal         0x800F7C0C
    // 0x80090548: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800F7C0C(rdram, ctx);
        goto after_1;
    // 0x80090548: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x8009054C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090554: jr          $ra
    // 0x80090558: nop

    return;
    // 0x80090558: nop

;}
RECOMP_FUNC void func_8009055C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009055C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090564: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80090568: jal         0x800F54E4
    // 0x8009056C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8009056C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80090570: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80090574: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80090578: jal         0x800F7C58
    // 0x8009057C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800F7C58(rdram, ctx);
        goto after_1;
    // 0x8009057C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80090580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090584: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090588: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090598: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009059C: jal         0x800F54E4
    // 0x800905A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800905A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800905A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800905A8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800905AC: jal         0x800F7CF4
    // 0x800905B0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800F7CF4(rdram, ctx);
        goto after_1;
    // 0x800905B0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800905B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800905B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800905BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800905C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800905C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800905C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800905CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800905D0: jal         0x800F54E4
    // 0x800905D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800905D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800905D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800905DC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800905E0: jal         0x800F7DE8
    // 0x800905E4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800F7DE8(rdram, ctx);
        goto after_1;
    // 0x800905E4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800905E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800905EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800905F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800905F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800905F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800905FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090600: jal         0x800F54E4
    // 0x80090604: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x80090604: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80090608: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8009060C: jal         0x800F7E64
    // 0x80090610: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F7E64(rdram, ctx);
        goto after_1;
    // 0x80090610: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80090614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009061C: jr          $ra
    // 0x80090620: nop

    return;
    // 0x80090620: nop

;}
RECOMP_FUNC void func_80090624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090624: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090628: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009062C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80090630: jal         0x800F54E4
    // 0x80090634: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x80090634: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80090638: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8009063C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80090640: jal         0x800F7ECC
    // 0x80090644: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800F7ECC(rdram, ctx);
        goto after_1;
    // 0x80090644: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80090648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009064C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090650: jr          $ra
    // 0x80090654: nop

    return;
    // 0x80090654: nop

;}
RECOMP_FUNC void func_80090658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009065C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090660: jal         0x800F54E4
    // 0x80090664: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x80090664: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80090668: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8009066C: jal         0x800F7F98
    // 0x80090670: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F7F98(rdram, ctx);
        goto after_1;
    // 0x80090670: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80090674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090678: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009067C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009068C: jal         0x800F54E4
    // 0x80090690: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x80090690: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80090694: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80090698: jal         0x800F8200
    // 0x8009069C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F8200(rdram, ctx);
        goto after_1;
    // 0x8009069C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800906A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800906A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800906A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800906B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800906B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800906B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800906B8: jal         0x800F54E4
    // 0x800906BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800906BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800906C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800906C4: jal         0x800F8294
    // 0x800906C8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F8294(rdram, ctx);
        goto after_1;
    // 0x800906C8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800906CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800906D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800906D4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800906DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800906DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800906E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800906E4: jal         0x800F54E4
    // 0x800906E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800906E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800906EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800906F0: jal         0x800F832C
    // 0x800906F4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F832C(rdram, ctx);
        goto after_1;
    // 0x800906F4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800906F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800906FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090700: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009070C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090710: jal         0x800F54E4
    // 0x80090714: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x80090714: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80090718: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8009071C: jal         0x800F82D4
    // 0x80090720: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F82D4(rdram, ctx);
        goto after_1;
    // 0x80090720: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80090724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009072C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090734: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090738: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009073C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80090740: jal         0x800F54E4
    // 0x80090744: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x80090744: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80090748: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8009074C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80090750: jal         0x800F8300
    // 0x80090754: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_800F8300(rdram, ctx);
        goto after_1;
    // 0x80090754: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80090758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009075C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090760: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090768: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009076C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090770: jal         0x800F54E4
    // 0x80090774: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x80090774: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80090778: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8009077C: jal         0x800F83B8
    // 0x80090780: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F83B8(rdram, ctx);
        goto after_1;
    // 0x80090780: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80090784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009078C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090794: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009079C: jal         0x800F54E4
    // 0x800907A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800907A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800907A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800907A8: jal         0x800F5D9C
    // 0x800907AC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F5D9C(rdram, ctx);
        goto after_1;
    // 0x800907AC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800907B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800907B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800907B8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800907C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800907C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800907C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800907C8: jal         0x800F54E4
    // 0x800907CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800907CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800907D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800907D4: jal         0x800F8418
    // 0x800907D8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F8418(rdram, ctx);
        goto after_1;
    // 0x800907D8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800907DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800907E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800907E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800907EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800907EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800907F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800907F4: jal         0x800F54E4
    // 0x800907F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800907F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800907FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80090800: jal         0x800F8730
    // 0x80090804: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F8730(rdram, ctx);
        goto after_1;
    // 0x80090804: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80090808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009080C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090810: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009081C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090820: jal         0x800F54E4
    // 0x80090824: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x80090824: nop

    after_0:
    // 0x80090828: jal         0x800F87A4
    // 0x8009082C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F87A4(rdram, ctx);
        goto after_1;
    // 0x8009082C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80090830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090838: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090848: jal         0x800F54E4
    // 0x8009084C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x8009084C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80090850: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80090854: jal         0x800F8804
    // 0x80090858: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F8804(rdram, ctx);
        goto after_1;
    // 0x80090858: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8009085C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090860: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090864: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009086C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009086C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090870: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090874: jal         0x800F54E4
    // 0x80090878: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x80090878: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8009087C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80090880: jal         0x800F8150
    // 0x80090884: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F8150(rdram, ctx);
        goto after_1;
    // 0x80090884: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80090888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009088C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090890: jr          $ra
    return;
;}
RECOMP_FUNC void func_800908A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800908A0: jr          $ra
    // 0x800908A4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    return;
    // 0x800908A4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
;}
RECOMP_FUNC void func_800908A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800908A8: beq         $a0, $zero, L_800908D0
    if (ctx->r4 == 0) {
        // 0x800908AC: lui         $v0, 0x8011
        ctx->r2 = S32(0X8011 << 16);
            goto L_800908D0;
    }
    // 0x800908AC: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800908B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800908B4: beq         $a0, $at, L_800908D8
    if (ctx->r4 == ctx->r1) {
        // 0x800908B8: lui         $v0, 0x8011
        ctx->r2 = S32(0X8011 << 16);
            goto L_800908D8;
    }
    // 0x800908B8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800908BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800908C0: beq         $a0, $at, L_800908E0
    if (ctx->r4 == ctx->r1) {
        // 0x800908C4: lui         $v0, 0x8011
        ctx->r2 = S32(0X8011 << 16);
            goto L_800908E0;
    }
    // 0x800908C4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800908C8: b           L_800908E8
    // 0x800908CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    func_800908E8(rdram, ctx);
    return;
    // 0x800908CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800908D0:
    // 0x800908D0: jr          $ra
    // 0x800908D4: addiu       $v0, $v0, 0x7D80
    ctx->r2 = ADD32(ctx->r2, 0X7D80);
    return;
    // 0x800908D4: addiu       $v0, $v0, 0x7D80
    ctx->r2 = ADD32(ctx->r2, 0X7D80);
L_800908D8:
    // 0x800908D8: jr          $ra
    // 0x800908DC: addiu       $v0, $v0, 0x7CFC
    ctx->r2 = ADD32(ctx->r2, 0X7CFC);
    return;
    // 0x800908DC: addiu       $v0, $v0, 0x7CFC
    ctx->r2 = ADD32(ctx->r2, 0X7CFC);
L_800908E0:
    // 0x800908E0: jr          $ra
    // 0x800908E4: addiu       $v0, $v0, 0x7CC0
    ctx->r2 = ADD32(ctx->r2, 0X7CC0);
    return;
    // 0x800908E4: addiu       $v0, $v0, 0x7CC0
    ctx->r2 = ADD32(ctx->r2, 0X7CC0);
;}
RECOMP_FUNC void func_800908E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800908E8: jr          $ra
    // 0x800908EC: nop

    return;
    // 0x800908EC: nop

;}
RECOMP_FUNC void func_800908F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800908F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800908F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800908F8: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x800908FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80090900: bne         $a1, $at, L_8009091C
    if (ctx->r5 != ctx->r1) {
        // 0x80090904: sb          $a1, 0x9($t6)
        MEM_B(0X9, ctx->r14) = ctx->r5;
            goto L_8009091C;
    }
    // 0x80090904: sb          $a1, 0x9($t6)
    MEM_B(0X9, ctx->r14) = ctx->r5;
    // 0x80090908: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8009090C: jal         0x8009ADF0
    // 0x80090910: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8009ADF0(rdram, ctx);
        goto after_0;
    // 0x80090910: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80090914: b           L_8009092C
    // 0x80090918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8009092C;
    // 0x80090918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009091C:
    // 0x8009091C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80090920: jal         0x8009ADF0
    // 0x80090924: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8009ADF0(rdram, ctx);
        goto after_1;
    // 0x80090924: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80090928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8009092C:
    // 0x8009092C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090930: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090938: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009093C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090940: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x80090944: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80090948: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8009094C: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x80090950: lw          $t7, 0x20($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X20);
    // 0x80090954: swc1        $f4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f4.u32l;
    // 0x80090958: lw          $t8, 0x20($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X20);
    // 0x8009095C: sb          $zero, 0x8($t8)
    MEM_B(0X8, ctx->r24) = 0;
    // 0x80090960: lw          $t9, 0x20($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X20);
    // 0x80090964: jal         0x800908F0
    // 0x80090968: sb          $zero, 0x9($t9)
    MEM_B(0X9, ctx->r25) = 0;
    func_800908F0(rdram, ctx);
        goto after_0;
    // 0x80090968: sb          $zero, 0x9($t9)
    MEM_B(0X9, ctx->r25) = 0;
    after_0:
    // 0x8009096C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090970: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090974: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009097C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009097C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090980: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090984: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x80090988: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8009098C: sb          $a1, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r5;
    // 0x80090990: lw          $t7, 0x20($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X20);
    // 0x80090994: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80090998: sb          $zero, 0x8($t7)
    MEM_B(0X8, ctx->r15) = 0;
    // 0x8009099C: jal         0x800908A8
    // 0x800909A0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800908A8(rdram, ctx);
        goto after_0;
    // 0x800909A0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x800909A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800909A8: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800909AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800909B0: lw          $t8, 0x20($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X20);
    // 0x800909B4: jal         0x800908F0
    // 0x800909B8: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
    func_800908F0(rdram, ctx);
        goto after_1;
    // 0x800909B8: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
    after_1:
    // 0x800909BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800909C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800909C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800909CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800909CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800909D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800909D4: jal         0x8009097C
    // 0x800909D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009097C(rdram, ctx);
        goto after_0;
    // 0x800909D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800909DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800909E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800909E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800909EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800909EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800909F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800909F4: jal         0x8009097C
    // 0x800909F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009097C(rdram, ctx);
        goto after_0;
    // 0x800909F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800909FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090A00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090A04: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090A0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090A10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090A14: jal         0x8009097C
    // 0x80090A18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009097C(rdram, ctx);
        goto after_0;
    // 0x80090A18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80090A1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090A20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090A24: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090A2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090A30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090A34: jal         0x800908F0
    // 0x80090A38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800908F0(rdram, ctx);
        goto after_0;
    // 0x80090A38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80090A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090A40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090A44: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090A4C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80090A50: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80090A54: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80090A58: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80090A5C: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80090A60: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80090A64: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80090A68: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x80090A6C: jal         0x800D8FF8
    // 0x80090A70: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80090A70: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    after_0:
    // 0x80090A74: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80090A78: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80090A7C: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    // 0x80090A80: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x80090A84: addiu       $s2, $zero, 0xC
    ctx->r18 = ADD32(0, 0XC);
    // 0x80090A88: bc1fl       L_80090B6C
    if (!c1cs) {
        // 0x80090A8C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80090B6C;
    }
    goto skip_0;
    // 0x80090A8C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
L_80090A90:
    // 0x80090A90: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x80090A94: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80090A98: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x80090A9C: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x80090AA0: lw          $t6, 0x20($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X20);
    // 0x80090AA4: lwc1        $f12, 0x4($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80090AA8: c.lt.s      $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f22.fl < ctx->f12.fl;
    // 0x80090AAC: nop

    // 0x80090AB0: bc1tl       L_80090B6C
    if (c1cs) {
        // 0x80090AB4: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80090B6C;
    }
    goto skip_1;
    // 0x80090AB4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x80090AB8: jal         0x800F2100
    // 0x80090ABC: nop

    func_800F2100(rdram, ctx);
        goto after_1;
    // 0x80090ABC: nop

    after_1:
    // 0x80090AC0: lw          $t7, 0x20($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X20);
    // 0x80090AC4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80090AC8: jal         0x800908A8
    // 0x80090ACC: lbu         $a0, 0x0($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X0);
    func_800908A8(rdram, ctx);
        goto after_2;
    // 0x80090ACC: lbu         $a0, 0x0($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X0);
    after_2:
    // 0x80090AD0: lw          $t8, 0x20($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X20);
    // 0x80090AD4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80090AD8: lbu         $t9, 0x8($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X8);
    // 0x80090ADC: multu       $t9, $s2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80090AE0: mflo        $t0
    ctx->r8 = lo;
    // 0x80090AE4: addu        $s0, $v0, $t0
    ctx->r16 = ADD32(ctx->r2, ctx->r8);
    // 0x80090AE8: lbu         $a1, 0x4($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X4);
    // 0x80090AEC: jal         0x800950FC
    // 0x80090AF0: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    func_800950FC(rdram, ctx);
        goto after_3;
    // 0x80090AF0: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    after_3:
    // 0x80090AF4: lbu         $t1, 0x10($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X10);
    // 0x80090AF8: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80090AFC: bnel        $s3, $t1, L_80090B48
    if (ctx->r19 != ctx->r9) {
        // 0x80090B00: lw          $v0, 0x20($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X20);
            goto L_80090B48;
    }
    goto skip_2;
    // 0x80090B00: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    skip_2:
    // 0x80090B04: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80090B08: c.eq.s      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.fl == ctx->f8.fl;
    // 0x80090B0C: nop

    // 0x80090B10: bc1f        L_80090B28
    if (!c1cs) {
        // 0x80090B14: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80090B28;
    }
    // 0x80090B14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80090B18: jal         0x800908F0
    // 0x80090B1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800908F0(rdram, ctx);
        goto after_4;
    // 0x80090B1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80090B20: b           L_80090B6C
    // 0x80090B24: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80090B6C;
    // 0x80090B24: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80090B28:
    // 0x80090B28: lw          $t2, 0x20($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X20);
    // 0x80090B2C: jal         0x800908A8
    // 0x80090B30: lbu         $a0, 0x0($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X0);
    func_800908A8(rdram, ctx);
        goto after_5;
    // 0x80090B30: lbu         $a0, 0x0($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X0);
    after_5:
    // 0x80090B34: lw          $t3, 0x20($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X20);
    // 0x80090B38: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80090B3C: b           L_80090B54
    // 0x80090B40: sb          $zero, 0x8($t3)
    MEM_B(0X8, ctx->r11) = 0;
        goto L_80090B54;
    // 0x80090B40: sb          $zero, 0x8($t3)
    MEM_B(0X8, ctx->r11) = 0;
    // 0x80090B44: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
L_80090B48:
    // 0x80090B48: lbu         $t4, 0x8($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X8);
    // 0x80090B4C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80090B50: sb          $t5, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r13;
L_80090B54:
    // 0x80090B54: c.lt.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl < ctx->f20.fl;
    // 0x80090B58: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80090B5C: lw          $t6, 0x20($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X20);
    // 0x80090B60: bc1t        L_80090A90
    if (c1cs) {
        // 0x80090B64: swc1        $f10, 0x4($t6)
        MEM_W(0X4, ctx->r14) = ctx->f10.u32l;
            goto L_80090A90;
    }
    // 0x80090B64: swc1        $f10, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f10.u32l;
    // 0x80090B68: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80090B6C:
    // 0x80090B6C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80090B70: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x80090B74: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80090B78: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80090B7C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80090B80: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80090B84: jr          $ra
    // 0x80090B88: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80090B88: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80090B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090B90: jr          $ra
    // 0x80090B94: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    return;
    // 0x80090B94: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void func_80090B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090B98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090B9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090BA0: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    // 0x80090BA4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80090BA8: sw          $v1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r3;
    // 0x80090BAC: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x80090BB0: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80090BB4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80090BB8: lw          $t8, 0x2C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X2C);
    // 0x80090BBC: sb          $zero, 0x18($t8)
    MEM_B(0X18, ctx->r24) = 0;
    // 0x80090BC0: lw          $t9, 0x2C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X2C);
    // 0x80090BC4: sw          $v1, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r3;
    // 0x80090BC8: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80090BCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80090BD0: jal         0x8009C128
    // 0x80090BD4: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80090BD4: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_0:
    // 0x80090BD8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80090BDC: lw          $t0, 0x2C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X2C);
    // 0x80090BE0: sb          $zero, 0x1A($t0)
    MEM_B(0X1A, ctx->r8) = 0;
    // 0x80090BE4: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x80090BE8: lbu         $t1, 0x1A($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X1A);
    // 0x80090BEC: sb          $t1, 0x19($v0)
    MEM_B(0X19, ctx->r2) = ctx->r9;
    // 0x80090BF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090BF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090BF8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090C00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090C04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80090C08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80090C0C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80090C10: jal         0x800CBB70
    // 0x80090C14: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800CBB70(rdram, ctx);
        goto after_0;
    // 0x80090C14: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x80090C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80090C1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80090C20: jr          $ra
    // 0x80090C24: nop

    return;
    // 0x80090C24: nop

;}
RECOMP_FUNC void func_80090C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090C28: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    // 0x80090C2C: jr          $ra
    // 0x80090C30: sb          $a1, 0x18($t6)
    MEM_B(0X18, ctx->r14) = ctx->r5;
    return;
    // 0x80090C30: sb          $a1, 0x18($t6)
    MEM_B(0X18, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_80090C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090C34: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80090C38: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80090C3C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80090C40: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80090C44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80090C48: lbu         $t6, 0x19($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X19);
    // 0x80090C4C: sb          $t6, 0x1A($a1)
    MEM_B(0X1A, ctx->r5) = ctx->r14;
    // 0x80090C50: lw          $t7, 0x2C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X2C);
    // 0x80090C54: jal         0x8008E37C
    // 0x80090C58: sb          $zero, 0x19($t7)
    MEM_B(0X19, ctx->r15) = 0;
    func_8008E37C(rdram, ctx);
        goto after_0;
    // 0x80090C58: sb          $zero, 0x19($t7)
    MEM_B(0X19, ctx->r15) = 0;
    after_0:
    // 0x80090C5C: sltu        $a1, $zero, $v0
    ctx->r5 = 0 < ctx->r2 ? 1 : 0;
    // 0x80090C60: beq         $a1, $zero, L_80090C6C
    if (ctx->r5 == 0) {
        // 0x80090C64: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80090C6C;
    }
    // 0x80090C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80090C68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80090C6C:
    // 0x80090C6C: lw          $t8, 0x2C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X2C);
    // 0x80090C70: lbu         $t9, 0x18($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X18);
    // 0x80090C74: bnel        $t9, $zero, L_80090CC0
    if (ctx->r25 != 0) {
        // 0x80090C78: lw          $a1, 0x2C($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X2C);
            goto L_80090CC0;
    }
    goto skip_0;
    // 0x80090C78: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    skip_0:
    // 0x80090C7C: jal         0x8008E078
    // 0x80090C80: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_8008E078(rdram, ctx);
        goto after_1;
    // 0x80090C80: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_1:
    // 0x80090C84: bne         $v0, $zero, L_80090CBC
    if (ctx->r2 != 0) {
        // 0x80090C88: lw          $a1, 0x2C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X2C);
            goto L_80090CBC;
    }
    // 0x80090C88: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80090C8C: bnel        $a1, $zero, L_80090CC0
    if (ctx->r5 != 0) {
        // 0x80090C90: lw          $a1, 0x2C($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X2C);
            goto L_80090CC0;
    }
    goto skip_1;
    // 0x80090C90: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    skip_1:
    // 0x80090C94: jal         0x800F3ED0
    // 0x80090C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F3ED0(rdram, ctx);
        goto after_2;
    // 0x80090C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80090C9C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80090CA0: beql        $v0, $at, L_80090CC0
    if (ctx->r2 == ctx->r1) {
        // 0x80090CA4: lw          $a1, 0x2C($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X2C);
            goto L_80090CC0;
    }
    goto skip_2;
    // 0x80090CA4: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    skip_2:
    // 0x80090CA8: jal         0x8009E6F8
    // 0x80090CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E6F8(rdram, ctx);
        goto after_3;
    // 0x80090CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80090CB0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80090CB4: bne         $v0, $at, L_80090CCC
    if (ctx->r2 != ctx->r1) {
        // 0x80090CB8: nop
    
            goto L_80090CCC;
    }
    // 0x80090CB8: nop

L_80090CBC:
    // 0x80090CBC: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
L_80090CC0:
    // 0x80090CC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80090CC4: jal         0x8009C128
    // 0x80090CC8: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_8009C128(rdram, ctx);
        goto after_4;
    // 0x80090CC8: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_4:
L_80090CCC:
    // 0x80090CCC: jal         0x800F3ED0
    // 0x80090CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F3ED0(rdram, ctx);
        goto after_5;
    // 0x80090CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80090CD4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80090CD8: bne         $v0, $at, L_80090CF0
    if (ctx->r2 != ctx->r1) {
        // 0x80090CDC: nop
    
            goto L_80090CF0;
    }
    // 0x80090CDC: nop

    // 0x80090CE0: lw          $t1, 0x2C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X2C);
    // 0x80090CE4: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80090CE8: b           L_80090E10
    // 0x80090CEC: sw          $t0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r8;
        goto L_80090E10;
    // 0x80090CEC: sw          $t0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r8;
L_80090CF0:
    // 0x80090CF0: jal         0x8008E37C
    // 0x80090CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E37C(rdram, ctx);
        goto after_6;
    // 0x80090CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80090CF8: beq         $v0, $zero, L_80090D0C
    if (ctx->r2 == 0) {
        // 0x80090CFC: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_80090D0C;
    }
    // 0x80090CFC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80090D00: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x80090D04: b           L_80090D10
    // 0x80090D08: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
        goto L_80090D10;
    // 0x80090D08: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
L_80090D0C:
    // 0x80090D0C: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
L_80090D10:
    // 0x80090D10: lw          $t4, 0x2C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X2C);
    // 0x80090D14: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80090D18: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    // 0x80090D1C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80090D20: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    // 0x80090D24: lw          $t6, 0x2C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2C);
    // 0x80090D28: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80090D2C: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x80090D30: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x80090D34: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80090D38: addiu       $a0, $a1, 0xC
    ctx->r4 = ADD32(ctx->r5, 0XC);
    // 0x80090D3C: jal         0x800CCDF4
    // 0x80090D40: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    func_800CCDF4(rdram, ctx);
        goto after_7;
    // 0x80090D40: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    after_7:
    // 0x80090D44: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x80090D48: beq         $v1, $zero, L_80090D5C
    if (ctx->r3 == 0) {
        // 0x80090D4C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80090D5C;
    }
    // 0x80090D4C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80090D50: lw          $t0, 0x2C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X2C);
    // 0x80090D54: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80090D58: sb          $t9, 0x19($t0)
    MEM_B(0X19, ctx->r8) = ctx->r25;
L_80090D5C:
    // 0x80090D5C: bne         $v1, $zero, L_80090DEC
    if (ctx->r3 != 0) {
        // 0x80090D60: nop
    
            goto L_80090DEC;
    }
    // 0x80090D60: nop

    // 0x80090D64: lw          $t1, 0x2C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X2C);
    // 0x80090D68: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80090D6C: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x80090D70: beq         $t2, $at, L_80090DEC
    if (ctx->r10 == ctx->r1) {
        // 0x80090D74: nop
    
            goto L_80090DEC;
    }
    // 0x80090D74: nop

    // 0x80090D78: jal         0x800A4CA8
    // 0x80090D7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_8;
    // 0x80090D7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80090D80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80090D84: jal         0x801107F0
    // 0x80090D88: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_801107F0(rdram, ctx);
        goto after_9;
    // 0x80090D88: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_9:
    // 0x80090D8C: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80090D90: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80090D94: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x80090D98: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x80090D9C: addiu       $a3, $zero, 0x384
    ctx->r7 = ADD32(0, 0X384);
    // 0x80090DA0: jal         0x800CCDF4
    // 0x80090DA4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_800CCDF4(rdram, ctx);
        goto after_10;
    // 0x80090DA4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_10:
    // 0x80090DA8: beq         $v0, $zero, L_80090DEC
    if (ctx->r2 == 0) {
        // 0x80090DAC: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80090DEC;
    }
    // 0x80090DAC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80090DB0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80090DB4: jal         0x800CBBC0
    // 0x80090DB8: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_800CBBC0(rdram, ctx);
        goto after_11;
    // 0x80090DB8: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_11:
    // 0x80090DBC: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x80090DC0: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x80090DC4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80090DC8: lw          $t4, 0x8($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X8);
    // 0x80090DCC: beql        $v0, $t4, L_80090DE0
    if (ctx->r2 == ctx->r12) {
        // 0x80090DD0: sw          $t5, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r13;
            goto L_80090DE0;
    }
    goto skip_3;
    // 0x80090DD0: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    skip_3:
    // 0x80090DD4: b           L_80090DEC
    // 0x80090DD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_80090DEC;
    // 0x80090DD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80090DDC: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
L_80090DE0:
    // 0x80090DE0: lw          $t7, 0x2C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2C);
    // 0x80090DE4: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80090DE8: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
L_80090DEC:
    // 0x80090DEC: beq         $a2, $zero, L_80090E08
    if (ctx->r6 == 0) {
        // 0x80090DF0: lw          $a1, 0x2C($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X2C);
            goto L_80090E08;
    }
    // 0x80090DF0: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x80090DF4: jal         0x800CBBC0
    // 0x80090DF8: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    func_800CBBC0(rdram, ctx);
        goto after_12;
    // 0x80090DF8: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    after_12:
    // 0x80090DFC: lw          $t8, 0x2C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X2C);
    // 0x80090E00: b           L_80090E10
    // 0x80090E04: sw          $v0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r2;
        goto L_80090E10;
    // 0x80090E04: sw          $v0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r2;
L_80090E08:
    // 0x80090E08: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80090E0C: sw          $t9, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r25;
L_80090E10:
    // 0x80090E10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80090E14: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80090E18: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80090E1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090E24: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    // 0x80090E28: jr          $ra
    // 0x80090E2C: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    return;
    // 0x80090E2C: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
;}
RECOMP_FUNC void func_80090E30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090E30: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    // 0x80090E34: jr          $ra
    // 0x80090E38: lbu         $v0, 0x1A($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X1A);
    return;
    // 0x80090E38: lbu         $v0, 0x1A($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X1A);
;}
RECOMP_FUNC void func_80090E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090E40: jr          $ra
    // 0x80090E44: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    return;
    // 0x80090E44: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
;}
RECOMP_FUNC void func_80090E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090E48: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80090E4C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80090E50: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80090E54: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x80090E58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80090E5C: lbu         $t7, 0xD($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XD);
    // 0x80090E60: beql        $t7, $zero, L_80090E80
    if (ctx->r15 == 0) {
        // 0x80090E64: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80090E80;
    }
    goto skip_0;
    // 0x80090E64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80090E68: jal         0x8008FD48
    // 0x80090E6C: nop

    func_8008FD48(rdram, ctx);
        goto after_0;
    // 0x80090E6C: nop

    after_0:
    // 0x80090E70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80090E74: beq         $v0, $at, L_80090E90
    if (ctx->r2 == ctx->r1) {
        // 0x80090E78: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80090E90;
    }
    // 0x80090E78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80090E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80090E80:
    // 0x80090E80: jal         0x80092E5C
    // 0x80090E84: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_80092E5C(rdram, ctx);
        goto after_1;
    // 0x80090E84: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x80090E88: b           L_80090E9C
    // 0x80090E8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80090E9C;
    // 0x80090E8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80090E90:
    // 0x80090E90: jal         0x80092DE4
    // 0x80090E94: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_80092DE4(rdram, ctx);
        goto after_2;
    // 0x80090E94: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x80090E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80090E9C:
    // 0x80090E9C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80090EA0: jal         0x8009FBB0
    // 0x80090EA4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009FBB0(rdram, ctx);
        goto after_3;
    // 0x80090EA4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_3:
    // 0x80090EA8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80090EAC: addiu       $t8, $t8, 0x7DB0
    ctx->r24 = ADD32(ctx->r24, 0X7DB0);
    // 0x80090EB0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80090EB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80090EB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80090EBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80090EC0: jal         0x800BABB8
    // 0x80090EC4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_4;
    // 0x80090EC4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_4:
    // 0x80090EC8: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x80090ECC: lbu         $t9, 0xF($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0XF);
    // 0x80090ED0: beql        $t9, $zero, L_80090F28
    if (ctx->r25 == 0) {
        // 0x80090ED4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80090F28;
    }
    goto skip_1;
    // 0x80090ED4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x80090ED8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80090EDC: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80090EE0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80090EE4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80090EE8: nop

    // 0x80090EEC: bc1fl       L_80090F28
    if (!c1cs) {
        // 0x80090EF0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80090F28;
    }
    goto skip_2;
    // 0x80090EF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x80090EF4: lwc1        $f8, 0x4D00($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4D00);
    // 0x80090EF8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80090EFC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80090F00: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80090F04: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    // 0x80090F08: jal         0x800DC178
    // 0x80090F0C: lwc1        $f14, 0x4D04($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4D04);
    func_800DC178(rdram, ctx);
        goto after_5;
    // 0x80090F0C: lwc1        $f14, 0x4D04($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4D04);
    after_5:
    // 0x80090F10: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80090F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80090F18: addiu       $a1, $zero, 0x3ED
    ctx->r5 = ADD32(0, 0X3ED);
    // 0x80090F1C: jal         0x8009DF94
    // 0x80090F20: addiu       $a3, $zero, 0x1770
    ctx->r7 = ADD32(0, 0X1770);
    func_8009DF94(rdram, ctx);
        goto after_6;
    // 0x80090F20: addiu       $a3, $zero, 0x1770
    ctx->r7 = ADD32(0, 0X1770);
    after_6:
    // 0x80090F24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80090F28:
    // 0x80090F28: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80090F2C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80090F30: jr          $ra
    return;
;}
RECOMP_FUNC void func_80090F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090F38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80090F3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090F40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80090F44: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x80090F48: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80090F4C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80090F50: jal         0x800DC0C0
    // 0x80090F54: swc1        $f4, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f4.u32l;
    func_800DC0C0(rdram, ctx);
        goto after_0;
    // 0x80090F54: swc1        $f4, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f4.u32l;
    after_0:
    // 0x80090F58: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80090F5C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80090F60: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80090F64: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80090F68: nop

    // 0x80090F6C: bc1f        L_80090FA0
    if (!c1cs) {
        // 0x80090F70: nop
    
            goto L_80090FA0;
    }
    // 0x80090F70: nop

    // 0x80090F74: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80090F78: lwc1        $f12, 0x4D08($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4D08);
    // 0x80090F7C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80090F80: jal         0x800DC178
    // 0x80090F84: lwc1        $f14, 0x4D0C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4D0C);
    func_800DC178(rdram, ctx);
        goto after_1;
    // 0x80090F84: lwc1        $f14, 0x4D0C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4D0C);
    after_1:
    // 0x80090F88: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
    // 0x80090F8C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80090F90: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x80090F94: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x80090F98: b           L_8009101C
    // 0x80090F9C: sb          $t8, 0xC($t9)
    MEM_B(0XC, ctx->r25) = ctx->r24;
        goto L_8009101C;
    // 0x80090F9C: sb          $t8, 0xC($t9)
    MEM_B(0XC, ctx->r25) = ctx->r24;
L_80090FA0:
    // 0x80090FA0: lwc1        $f8, 0x4D10($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4D10);
    // 0x80090FA4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80090FA8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80090FAC: nop

    // 0x80090FB0: bc1f        L_80090FF0
    if (!c1cs) {
        // 0x80090FB4: nop
    
            goto L_80090FF0;
    }
    // 0x80090FB4: nop

    // 0x80090FB8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80090FBC: lwc1        $f12, 0x4D14($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4D14);
    // 0x80090FC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80090FC4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80090FC8: jal         0x800DC178
    // 0x80090FCC: nop

    func_800DC178(rdram, ctx);
        goto after_2;
    // 0x80090FCC: nop

    after_2:
    // 0x80090FD0: lw          $t0, 0x30($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X30);
    // 0x80090FD4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80090FD8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80090FDC: jal         0x800DC128
    // 0x80090FE0: swc1        $f0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f0.u32l;
    func_800DC128(rdram, ctx);
        goto after_3;
    // 0x80090FE0: swc1        $f0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f0.u32l;
    after_3:
    // 0x80090FE4: lw          $t1, 0x30($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X30);
    // 0x80090FE8: b           L_8009101C
    // 0x80090FEC: sb          $v0, 0xC($t1)
    MEM_B(0XC, ctx->r9) = ctx->r2;
        goto L_8009101C;
    // 0x80090FEC: sb          $v0, 0xC($t1)
    MEM_B(0XC, ctx->r9) = ctx->r2;
L_80090FF0:
    // 0x80090FF0: lwc1        $f12, 0x4D18($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4D18);
    // 0x80090FF4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80090FF8: jal         0x800DC178
    // 0x80090FFC: lwc1        $f14, 0x4D1C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4D1C);
    func_800DC178(rdram, ctx);
        goto after_4;
    // 0x80090FFC: lwc1        $f14, 0x4D1C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4D1C);
    after_4:
    // 0x80091000: lw          $t2, 0x30($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X30);
    // 0x80091004: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80091008: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x8009100C: jal         0x800DC128
    // 0x80091010: swc1        $f0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f0.u32l;
    func_800DC128(rdram, ctx);
        goto after_5;
    // 0x80091010: swc1        $f0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f0.u32l;
    after_5:
    // 0x80091014: lw          $t3, 0x30($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X30);
    // 0x80091018: sb          $v0, 0xC($t3)
    MEM_B(0XC, ctx->r11) = ctx->r2;
L_8009101C:
    // 0x8009101C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091020: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80091024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80091028: jr          $ra
    return;
;}
RECOMP_FUNC void func_80091030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091030: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80091034: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x80091038: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8009103C: swc1        $f0, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f0.u32l;
    // 0x80091040: lw          $t7, 0x30($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X30);
    // 0x80091044: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x80091048: lw          $t9, 0x30($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X30);
    // 0x8009104C: jr          $ra
    // 0x80091050: sb          $t8, 0xC($t9)
    MEM_B(0XC, ctx->r25) = ctx->r24;
    return;
    // 0x80091050: sb          $t8, 0xC($t9)
    MEM_B(0XC, ctx->r25) = ctx->r24;
;}
RECOMP_FUNC void func_80091054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091054: jr          $ra
    // 0x80091058: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80091058: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8009105C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009105C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091064: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x80091068: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8009106C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80091070: sb          $zero, 0xC($t6)
    MEM_B(0XC, ctx->r14) = 0;
    // 0x80091074: lw          $t7, 0x30($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X30);
    // 0x80091078: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8009107C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80091080: swc1        $f4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f4.u32l;
    // 0x80091084: lw          $t8, 0x30($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X30);
    // 0x80091088: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8009108C: sb          $zero, 0xE($t8)
    MEM_B(0XE, ctx->r24) = 0;
    // 0x80091090: lw          $t9, 0x30($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X30);
    // 0x80091094: swc1        $f0, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f0.u32l;
    // 0x80091098: lw          $t0, 0x30($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X30);
    // 0x8009109C: swc1        $f0, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f0.u32l;
    // 0x800910A0: lw          $t2, 0x30($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X30);
    // 0x800910A4: jal         0x800910BC
    // 0x800910A8: sb          $t1, 0xF($t2)
    MEM_B(0XF, ctx->r10) = ctx->r9;
    func_800910BC(rdram, ctx);
        goto after_0;
    // 0x800910A8: sb          $t1, 0xF($t2)
    MEM_B(0XF, ctx->r10) = ctx->r9;
    after_0:
    // 0x800910AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800910B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800910B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800910BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800910BC: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x800910C0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800910C4: lbu         $t6, 0xE($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XE);
    // 0x800910C8: bne         $t6, $at, L_800910FC
    if (ctx->r14 != ctx->r1) {
        // 0x800910CC: nop
    
            goto L_800910FC;
    }
    // 0x800910CC: nop

    // 0x800910D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800910D4: nop

    // 0x800910D8: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x800910DC: lw          $t7, 0x30($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X30);
    // 0x800910E0: sb          $zero, 0xC($t7)
    MEM_B(0XC, ctx->r15) = 0;
    // 0x800910E4: lw          $t8, 0x30($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X30);
    // 0x800910E8: swc1        $f0, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f0.u32l;
    // 0x800910EC: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x800910F0: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800910F4: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x800910F8: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
L_800910FC:
    // 0x800910FC: jr          $ra
    // 0x80091100: sb          $a1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r5;
    return;
    // 0x80091100: sb          $a1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_80091104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091104: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x80091108: jr          $ra
    // 0x8009110C: sb          $a1, 0xF($t6)
    MEM_B(0XF, ctx->r14) = ctx->r5;
    return;
    // 0x8009110C: sb          $a1, 0xF($t6)
    MEM_B(0XF, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_80091110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091110: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091114: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80091118: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009111C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091120: jal         0x800D9078
    // 0x80091124: lw          $a0, 0x30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X30);
    func_800D9078(rdram, ctx);
        goto after_0;
    // 0x80091124: lw          $a0, 0x30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X30);
    after_0:
    // 0x80091128: jal         0x800F40EC
    // 0x8009112C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F40EC(rdram, ctx);
        goto after_1;
    // 0x8009112C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80091130: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80091134: bnel        $v0, $at, L_80091280
    if (ctx->r2 != ctx->r1) {
        // 0x80091138: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80091280;
    }
    goto skip_0;
    // 0x80091138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8009113C: lw          $t6, 0x30($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X30);
    // 0x80091140: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80091144: lbu         $t7, 0xE($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XE);
    // 0x80091148: beql        $t7, $at, L_80091280
    if (ctx->r15 == ctx->r1) {
        // 0x8009114C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80091280;
    }
    goto skip_1;
    // 0x8009114C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80091150: jal         0x800D8FF8
    // 0x80091154: nop

    func_800D8FF8(rdram, ctx);
        goto after_2;
    // 0x80091154: nop

    after_2:
    // 0x80091158: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8009115C: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x80091160: lbu         $t8, 0xC($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XC);
    // 0x80091164: beql        $t8, $zero, L_800911D0
    if (ctx->r24 == 0) {
        // 0x80091168: lwc1        $f16, 0x4($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
            goto L_800911D0;
    }
    goto skip_2;
    // 0x80091168: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    skip_2:
    // 0x8009116C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80091170: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80091174: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80091178: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8009117C: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x80091180: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x80091184: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80091188: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8009118C: nop

    // 0x80091190: bc1fl       L_800911D0
    if (!c1cs) {
        // 0x80091194: lwc1        $f16, 0x4($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
            goto L_800911D0;
    }
    goto skip_3;
    // 0x80091194: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    skip_3:
    // 0x80091198: lwc1        $f12, 0x4D20($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4D20);
    // 0x8009119C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800911A0: jal         0x800DC178
    // 0x800911A4: lwc1        $f14, 0x4D24($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4D24);
    func_800DC178(rdram, ctx);
        goto after_3;
    // 0x800911A4: lwc1        $f14, 0x4D24($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4D24);
    after_3:
    // 0x800911A8: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x800911AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800911B0: swc1        $f0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f0.u32l;
    // 0x800911B4: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x800911B8: lbu         $t0, 0xC($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XC);
    // 0x800911BC: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800911C0: jal         0x80090E48
    // 0x800911C4: sb          $t1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r9;
    func_80090E48(rdram, ctx);
        goto after_4;
    // 0x800911C4: sb          $t1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r9;
    after_4:
    // 0x800911C8: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x800911CC: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
L_800911D0:
    // 0x800911D0: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800911D4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800911D8: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800911DC: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x800911E0: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x800911E4: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800911E8: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x800911EC: nop

    // 0x800911F0: bc1tl       L_80091280
    if (c1cs) {
        // 0x800911F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80091280;
    }
    goto skip_4;
    // 0x800911F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x800911F8: lbu         $t2, 0xE($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0XE);
    // 0x800911FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80091200: bne         $t2, $at, L_80091218
    if (ctx->r10 != ctx->r1) {
        // 0x80091204: nop
    
            goto L_80091218;
    }
    // 0x80091204: nop

    // 0x80091208: jal         0x80091030
    // 0x8009120C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80091030(rdram, ctx);
        goto after_5;
    // 0x8009120C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80091210: b           L_80091224
    // 0x80091214: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
        goto L_80091224;
    // 0x80091214: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
L_80091218:
    // 0x80091218: jal         0x80090F38
    // 0x8009121C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80090F38(rdram, ctx);
        goto after_6;
    // 0x8009121C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80091220: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
L_80091224:
    // 0x80091224: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80091228: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8009122C: lbu         $t3, 0xE($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0XE);
    // 0x80091230: bne         $t3, $at, L_80091240
    if (ctx->r11 != ctx->r1) {
        // 0x80091234: nop
    
            goto L_80091240;
    }
    // 0x80091234: nop

    // 0x80091238: b           L_8009127C
    // 0x8009123C: sb          $t4, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r12;
        goto L_8009127C;
    // 0x8009123C: sb          $t4, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r12;
L_80091240:
    // 0x80091240: jal         0x800DC0C0
    // 0x80091244: nop

    func_800DC0C0(rdram, ctx);
        goto after_7;
    // 0x80091244: nop

    after_7:
    // 0x80091248: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8009124C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80091250: nop

    // 0x80091254: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x80091258: nop

    // 0x8009125C: bc1fl       L_80091274
    if (!c1cs) {
        // 0x80091260: lw          $t7, 0x30($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X30);
            goto L_80091274;
    }
    goto skip_5;
    // 0x80091260: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
    skip_5:
    // 0x80091264: lw          $t5, 0x30($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X30);
    // 0x80091268: b           L_8009127C
    // 0x8009126C: sb          $zero, 0xD($t5)
    MEM_B(0XD, ctx->r13) = 0;
        goto L_8009127C;
    // 0x8009126C: sb          $zero, 0xD($t5)
    MEM_B(0XD, ctx->r13) = 0;
    // 0x80091270: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
L_80091274:
    // 0x80091274: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80091278: sb          $t6, 0xD($t7)
    MEM_B(0XD, ctx->r15) = ctx->r14;
L_8009127C:
    // 0x8009127C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80091280:
    // 0x80091280: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80091284: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091288: jr          $ra
    return;
;}
RECOMP_FUNC void func_80091290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091290: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80091294: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80091298: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8009129C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800912A0: lwc1        $f4, 0x4D28($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4D28);
    // 0x800912A4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800912A8: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x800912AC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800912B0: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x800912B4: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x800912B8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800912BC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800912C0: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x800912C4: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x800912C8: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800912CC: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x800912D0: jal         0x800F10B4
    // 0x800912D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_0;
    // 0x800912D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x800912D8: addiu       $s1, $sp, 0x48
    ctx->r17 = ADD32(ctx->r29, 0X48);
    // 0x800912DC: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x800912E0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800912E4: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800912E8: jal         0x80092C90
    // 0x800912EC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_80092C90(rdram, ctx);
        goto after_1;
    // 0x800912EC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_1:
    // 0x800912F0: jal         0x800D8FF8
    // 0x800912F4: nop

    func_800D8FF8(rdram, ctx);
        goto after_2;
    // 0x800912F4: nop

    after_2:
    // 0x800912F8: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800912FC: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x80091300: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80091304: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80091308: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x8009130C: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x80091310: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80091314: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80091318: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x8009131C: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x80091320: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80091324: trunc.w.s   $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x80091328: mfc1        $s2, $f18
    ctx->r18 = (int32_t)ctx->f18.u32l;
    // 0x8009132C: nop

    // 0x80091330: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x80091334: nop

    // 0x80091338: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009133C: sub.s       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x80091340: jal         0x8009FBB0
    // 0x80091344: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    func_8009FBB0(rdram, ctx);
        goto after_3;
    // 0x80091344: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    after_3:
    // 0x80091348: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x8009134C: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x80091350: addiu       $t9, $zero, 0x3C
    ctx->r25 = ADD32(0, 0X3C);
    // 0x80091354: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80091358: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8009135C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80091360: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80091364: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80091368: addiu       $a1, $zero, -0x3C
    ctx->r5 = ADD32(0, -0X3C);
    // 0x8009136C: addiu       $a2, $zero, -0x32
    ctx->r6 = ADD32(0, -0X32);
    // 0x80091370: jal         0x800BA930
    // 0x80091374: addiu       $a3, $zero, -0x3C
    ctx->r7 = ADD32(0, -0X3C);
    func_800BA930(rdram, ctx);
        goto after_4;
    // 0x80091374: addiu       $a3, $zero, -0x3C
    ctx->r7 = ADD32(0, -0X3C);
    after_4:
    // 0x80091378: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8009137C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80091380: addiu       $a1, $zero, -0x32
    ctx->r5 = ADD32(0, -0X32);
    // 0x80091384: beq         $t0, $zero, L_800913EC
    if (ctx->r8 == 0) {
        // 0x80091388: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_800913EC;
    }
    // 0x80091388: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8009138C: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x80091390: addiu       $t2, $zero, 0x46
    ctx->r10 = ADD32(0, 0X46);
    // 0x80091394: addiu       $t3, $zero, 0x32
    ctx->r11 = ADD32(0, 0X32);
    // 0x80091398: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8009139C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x800913A0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800913A4: addiu       $a2, $zero, -0x46
    ctx->r6 = ADD32(0, -0X46);
    // 0x800913A8: jal         0x800BA6B0
    // 0x800913AC: addiu       $a3, $zero, -0x32
    ctx->r7 = ADD32(0, -0X32);
    func_800BA6B0(rdram, ctx);
        goto after_5;
    // 0x800913AC: addiu       $a3, $zero, -0x32
    ctx->r7 = ADD32(0, -0X32);
    after_5:
    // 0x800913B0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800913B4: lwc1        $f0, 0x4D2C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4D2C);
    // 0x800913B8: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x800913BC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x800913C0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800913C4: jal         0x800BA7C4
    // 0x800913C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800BA7C4(rdram, ctx);
        goto after_6;
    // 0x800913C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x800913CC: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x800913D0: lui         $a2, 0x3E61
    ctx->r6 = S32(0X3E61 << 16);
    // 0x800913D4: ori         $a2, $a2, 0x47AE
    ctx->r6 = ctx->r6 | 0X47AE;
    // 0x800913D8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x800913DC: jal         0x800BA7FC
    // 0x800913E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800BA7FC(rdram, ctx);
        goto after_7;
    // 0x800913E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x800913E4: b           L_80091424
    // 0x800913E8: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
        goto L_80091424;
    // 0x800913E8: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
L_800913EC:
    // 0x800913EC: lwc1        $f0, 0x4D30($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4D30);
    // 0x800913F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800913F4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800913F8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800913FC: jal         0x800BA7C4
    // 0x80091400: nop

    func_800BA7C4(rdram, ctx);
        goto after_8;
    // 0x80091400: nop

    after_8:
    // 0x80091404: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80091408: lwc1        $f0, 0x4D34($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4D34);
    // 0x8009140C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80091410: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80091414: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80091418: jal         0x800BA7FC
    // 0x8009141C: nop

    func_800BA7FC(rdram, ctx);
        goto after_9;
    // 0x8009141C: nop

    after_9:
    // 0x80091420: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
L_80091424:
    // 0x80091424: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80091428: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8009142C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80091430: jal         0x800BA8F8
    // 0x80091434: nop

    func_800BA8F8(rdram, ctx);
        goto after_10;
    // 0x80091434: nop

    after_10:
    // 0x80091438: blez        $s2, L_80091458
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8009143C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80091458;
    }
    // 0x8009143C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80091440: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80091444:
    // 0x80091444: jal         0x800BA22C
    // 0x80091448: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_11;
    // 0x80091448: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x8009144C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80091450: bnel        $s0, $s2, L_80091444
    if (ctx->r16 != ctx->r18) {
        // 0x80091454: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80091444;
    }
    goto skip_0;
    // 0x80091454: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
L_80091458:
    // 0x80091458: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8009145C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80091460: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80091464: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80091468: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x8009146C: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x80091470: nop

    // 0x80091474: bc1f        L_80091494
    if (!c1cs) {
        // 0x80091478: nop
    
            goto L_80091494;
    }
    // 0x80091478: nop

    // 0x8009147C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80091480: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80091484: mov.s       $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = ctx->f10.fl;
    // 0x80091488: jal         0x800F10B4
    // 0x8009148C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800F10B4(rdram, ctx);
        goto after_12;
    // 0x8009148C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_12:
    // 0x80091490: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
L_80091494:
    // 0x80091494: jal         0x800D8FF8
    // 0x80091498: nop

    func_800D8FF8(rdram, ctx);
        goto after_13;
    // 0x80091498: nop

    after_13:
    // 0x8009149C: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800914A0: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x800914A4: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800914A8: lw          $v0, 0x30($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X30);
    // 0x800914AC: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800914B0: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x800914B4: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x800914B8: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x800914BC: lw          $v0, 0x30($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X30);
    // 0x800914C0: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800914C4: trunc.w.s   $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x800914C8: mfc1        $s2, $f10
    ctx->r18 = (int32_t)ctx->f10.u32l;
    // 0x800914CC: nop

    // 0x800914D0: mtc1        $s2, $f16
    ctx->f16.u32l = ctx->r18;
    // 0x800914D4: nop

    // 0x800914D8: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800914DC: sub.s       $f18, $f2, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x800914E0: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
    // 0x800914E4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800914E8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x800914EC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800914F0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800914F4: jr          $ra
    // 0x800914F8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x800914F8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_800914FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800914FC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80091500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091508: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8009150C: jal         0x80091290
    // 0x80091510: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_80091290(rdram, ctx);
        goto after_0;
    // 0x80091510: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x80091514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009151C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80091530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091530: jr          $ra
    // 0x80091534: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    return;
    // 0x80091534: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
;}
RECOMP_FUNC void func_80091538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091538: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x8009153C: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80091540: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x80091544: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80091548: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8009154C: jr          $ra
    // 0x80091550: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
    return;
    // 0x80091550: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
;}
RECOMP_FUNC void func_80091554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091554: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x80091558: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8009155C: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x80091560: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80091564: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80091568: jr          $ra
    // 0x8009156C: lwc1        $f0, 0x4($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X4);
    return;
    // 0x8009156C: lwc1        $f0, 0x4($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X4);
;}
RECOMP_FUNC void func_80091570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091570: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x80091574: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80091578: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x8009157C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80091580: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80091584: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80091588: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009158C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80091590: c.eq.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl == ctx->f4.fl;
    // 0x80091594: nop

    // 0x80091598: bc1t        L_800915A4
    if (c1cs) {
        // 0x8009159C: nop
    
            goto L_800915A4;
    }
    // 0x8009159C: nop

    // 0x800915A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800915A4:
    // 0x800915A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800915AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800915AC: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x800915B0: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x800915B4: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x800915B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800915BC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800915C0: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x800915C4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800915C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800915CC: c.eq.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl == ctx->f4.fl;
    // 0x800915D0: nop

    // 0x800915D4: bc1f        L_800915E0
    if (!c1cs) {
        // 0x800915D8: nop
    
            goto L_800915E0;
    }
    // 0x800915D8: nop

    // 0x800915DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800915E0:
    // 0x800915E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800915E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800915E8: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x800915EC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x800915F0: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x800915F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800915F8: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800915FC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80091600: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80091604: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80091608: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x8009160C: nop

    // 0x80091610: bc1f        L_8009161C
    if (!c1cs) {
        // 0x80091614: nop
    
            goto L_8009161C;
    }
    // 0x80091614: nop

    // 0x80091618: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8009161C:
    // 0x8009161C: beq         $v0, $zero, L_80091640
    if (ctx->r2 == 0) {
        // 0x80091620: nop
    
            goto L_80091640;
    }
    // 0x80091620: nop

    // 0x80091624: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80091628: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8009162C: c.le.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl <= ctx->f6.fl;
    // 0x80091630: nop

    // 0x80091634: bc1f        L_80091640
    if (!c1cs) {
        // 0x80091638: nop
    
            goto L_80091640;
    }
    // 0x80091638: nop

    // 0x8009163C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80091640:
    // 0x80091640: jr          $ra
    return;
;}
RECOMP_FUNC void func_80091648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091648: jr          $ra
    // 0x8009164C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8009164C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80091650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091650: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80091654: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x80091658: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x8009165C: addiu       $t3, $zero, 0x78
    ctx->r11 = ADD32(0, 0X78);
    // 0x80091660: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x80091664: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x80091668: addiu       $t2, $zero, -0xC
    ctx->r10 = ADD32(0, -0XC);
    // 0x8009166C: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x80091670: swc1        $f0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f0.u32l;
    // 0x80091674: lw          $t8, 0x3C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3C);
    // 0x80091678: addiu       $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
    // 0x8009167C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80091680: sb          $zero, 0x8($t8)
    MEM_B(0X8, ctx->r24) = 0;
    // 0x80091684: lw          $t9, 0x3C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X3C);
    // 0x80091688: swc1        $f0, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f0.u32l;
    // 0x8009168C: lw          $t4, 0x3C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X3C);
    // 0x80091690: swc1        $f0, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f0.u32l;
    // 0x80091694: lw          $t5, 0x3C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X3C);
    // 0x80091698: sb          $zero, 0x14($t5)
    MEM_B(0X14, ctx->r13) = 0;
L_8009169C:
    // 0x8009169C: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x800916A0: xor         $v0, $v1, $a3
    ctx->r2 = ctx->r3 ^ ctx->r7;
    // 0x800916A4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800916A8: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x800916AC: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x800916B0: lw          $t8, 0x3C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3C);
    // 0x800916B4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800916B8: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x800916BC: bne         $v0, $zero, L_800916CC
    if (ctx->r2 != 0) {
        // 0x800916C0: swc1        $f0, 0x4($t9)
        MEM_W(0X4, ctx->r25) = ctx->f0.u32l;
            goto L_800916CC;
    }
    // 0x800916C0: swc1        $f0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f0.u32l;
    // 0x800916C4: xor         $a1, $v1, $t0
    ctx->r5 = ctx->r3 ^ ctx->r8;
    // 0x800916C8: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
L_800916CC:
    // 0x800916CC: lw          $t4, 0x3C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X3C);
    // 0x800916D0: xor         $a2, $v1, $t1
    ctx->r6 = ctx->r3 ^ ctx->r9;
    // 0x800916D4: sltiu       $a2, $a2, 0x1
    ctx->r6 = ctx->r6 < 0X1 ? 1 : 0;
    // 0x800916D8: addu        $t5, $t4, $v1
    ctx->r13 = ADD32(ctx->r12, ctx->r3);
    // 0x800916DC: sb          $a1, 0x8($t5)
    MEM_B(0X8, ctx->r13) = ctx->r5;
    // 0x800916E0: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x800916E4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800916E8: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x800916EC: swc1        $f0, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f0.u32l;
    // 0x800916F0: lw          $t8, 0x3C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3C);
    // 0x800916F4: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x800916F8: bne         $a2, $zero, L_80091704
    if (ctx->r6 != 0) {
        // 0x800916FC: swc1        $f0, 0x10($t9)
        MEM_W(0X10, ctx->r25) = ctx->f0.u32l;
            goto L_80091704;
    }
    // 0x800916FC: swc1        $f0, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f0.u32l;
    // 0x80091700: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80091704:
    // 0x80091704: lw          $t4, 0x3C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X3C);
    // 0x80091708: sltiu       $v0, $v1, 0x1
    ctx->r2 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8009170C: addu        $t5, $t4, $v1
    ctx->r13 = ADD32(ctx->r12, ctx->r3);
    // 0x80091710: sb          $a1, 0x14($t5)
    MEM_B(0X14, ctx->r13) = ctx->r5;
    // 0x80091714: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x80091718: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8009171C: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x80091720: swc1        $f0, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f0.u32l;
    // 0x80091724: lw          $t8, 0x3C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3C);
    // 0x80091728: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x8009172C: bne         $v0, $zero, L_80091738
    if (ctx->r2 != 0) {
        // 0x80091730: swc1        $f0, 0x1C($t9)
        MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
            goto L_80091738;
    }
    // 0x80091730: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x80091734: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
L_80091738:
    // 0x80091738: lw          $t4, 0x3C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X3C);
    // 0x8009173C: xor         $a2, $v1, $t2
    ctx->r6 = ctx->r3 ^ ctx->r10;
    // 0x80091740: addu        $t5, $t4, $v1
    ctx->r13 = ADD32(ctx->r12, ctx->r3);
    // 0x80091744: sb          $a1, 0x20($t5)
    MEM_B(0X20, ctx->r13) = ctx->r5;
    // 0x80091748: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x8009174C: sltiu       $a1, $a2, 0x1
    ctx->r5 = ctx->r6 < 0X1 ? 1 : 0;
    // 0x80091750: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x80091754: swc1        $f0, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f0.u32l;
    // 0x80091758: lw          $t8, 0x3C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3C);
    // 0x8009175C: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x80091760: bne         $a1, $zero, L_8009176C
    if (ctx->r5 != 0) {
        // 0x80091764: swc1        $f0, 0x28($t9)
        MEM_W(0X28, ctx->r25) = ctx->f0.u32l;
            goto L_8009176C;
    }
    // 0x80091764: swc1        $f0, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f0.u32l;
    // 0x80091768: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8009176C:
    // 0x8009176C: lw          $t4, 0x3C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X3C);
    // 0x80091770: addu        $t5, $t4, $v1
    ctx->r13 = ADD32(ctx->r12, ctx->r3);
    // 0x80091774: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x80091778: bne         $v1, $t3, L_8009169C
    if (ctx->r3 != ctx->r11) {
        // 0x8009177C: sb          $a1, 0x2C($t5)
        MEM_B(0X2C, ctx->r13) = ctx->r5;
            goto L_8009169C;
    }
    // 0x8009177C: sb          $a1, 0x2C($t5)
    MEM_B(0X2C, ctx->r13) = ctx->r5;
    // 0x80091780: jr          $ra
    return;
;}
RECOMP_FUNC void func_80091788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009178C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091790: jal         0x800917A8
    // 0x80091794: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_800917A8(rdram, ctx);
        goto after_0;
    // 0x80091794: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x80091798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009179C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800917A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800917A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800917A8: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x800917AC: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x800917B0: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800917B4: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x800917B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800917BC: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x800917C0: swc1        $f12, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f12.u32l;
    // 0x800917C4: lw          $t8, 0x3C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3C);
    // 0x800917C8: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x800917CC: jr          $ra
    // 0x800917D0: swc1        $f12, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f12.u32l;
    return;
    // 0x800917D0: swc1        $f12, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800917D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800917D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800917D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800917DC: jal         0x800F424C
    // 0x800917E0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_800F424C(rdram, ctx);
        goto after_0;
    // 0x800917E0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x800917E4: sltiu       $a1, $v0, 0x1
    ctx->r5 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800917E8: jal         0x800D8FF8
    // 0x800917EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x800917EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x800917F0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800917F4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800917F8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800917FC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80091800: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x80091804: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
L_80091808:
    // 0x80091808: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x8009180C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80091810: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x80091814: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x80091818: addu        $v0, $t7, $v1
    ctx->r2 = ADD32(ctx->r15, ctx->r3);
    // 0x8009181C: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80091820: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
    // 0x80091824: nop

    // 0x80091828: bc1tl       L_80091878
    if (c1cs) {
        // 0x8009182C: lwc1        $f10, 0xC($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
            goto L_80091878;
    }
    goto skip_0;
    // 0x8009182C: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x80091830: lbu         $t8, 0x8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X8);
    // 0x80091834: beql        $t8, $zero, L_80091848
    if (ctx->r24 == 0) {
        // 0x80091838: sub.s       $f6, $f2, $f0
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_80091848;
    }
    goto skip_1;
    // 0x80091838: sub.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f0.fl;
    skip_1:
    // 0x8009183C: bnel        $a1, $zero, L_80091878
    if (ctx->r5 != 0) {
        // 0x80091840: lwc1        $f10, 0xC($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
            goto L_80091878;
    }
    goto skip_2;
    // 0x80091840: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    skip_2:
    // 0x80091844: sub.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f0.fl;
L_80091848:
    // 0x80091848: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x8009184C: lw          $t9, 0x3C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X3C);
    // 0x80091850: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    // 0x80091854: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80091858: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x8009185C: nop

    // 0x80091860: bc1fl       L_80091878
    if (!c1cs) {
        // 0x80091864: lwc1        $f10, 0xC($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
            goto L_80091878;
    }
    goto skip_3;
    // 0x80091864: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    skip_3:
    // 0x80091868: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    // 0x8009186C: lw          $t0, 0x3C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X3C);
    // 0x80091870: addu        $v0, $t0, $v1
    ctx->r2 = ADD32(ctx->r8, ctx->r3);
    // 0x80091874: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
L_80091878:
    // 0x80091878: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x8009187C: lw          $t1, 0x3C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X3C);
    // 0x80091880: addu        $v0, $t1, $v1
    ctx->r2 = ADD32(ctx->r9, ctx->r3);
    // 0x80091884: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80091888: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
    // 0x8009188C: nop

    // 0x80091890: bc1tl       L_800918D8
    if (c1cs) {
        // 0x80091894: addiu       $v1, $v1, 0x18
        ctx->r3 = ADD32(ctx->r3, 0X18);
            goto L_800918D8;
    }
    goto skip_4;
    // 0x80091894: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    skip_4:
    // 0x80091898: lbu         $t2, 0x14($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X14);
    // 0x8009189C: beql        $t2, $zero, L_800918B0
    if (ctx->r10 == 0) {
        // 0x800918A0: sub.s       $f16, $f2, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_800918B0;
    }
    goto skip_5;
    // 0x800918A0: sub.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f0.fl;
    skip_5:
    // 0x800918A4: bnel        $a1, $zero, L_800918D8
    if (ctx->r5 != 0) {
        // 0x800918A8: addiu       $v1, $v1, 0x18
        ctx->r3 = ADD32(ctx->r3, 0X18);
            goto L_800918D8;
    }
    goto skip_6;
    // 0x800918A8: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    skip_6:
    // 0x800918AC: sub.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f0.fl;
L_800918B0:
    // 0x800918B0: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x800918B4: lw          $t3, 0x3C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X3C);
    // 0x800918B8: addu        $v0, $t3, $v1
    ctx->r2 = ADD32(ctx->r11, ctx->r3);
    // 0x800918BC: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x800918C0: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x800918C4: nop

    // 0x800918C8: bc1fl       L_800918D8
    if (!c1cs) {
        // 0x800918CC: addiu       $v1, $v1, 0x18
        ctx->r3 = ADD32(ctx->r3, 0X18);
            goto L_800918D8;
    }
    goto skip_7;
    // 0x800918CC: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    skip_7:
    // 0x800918D0: swc1        $f12, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f12.u32l;
    // 0x800918D4: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
L_800918D8:
    // 0x800918D8: bnel        $v1, $a2, L_80091808
    if (ctx->r3 != ctx->r6) {
        // 0x800918DC: lw          $t6, 0x3C($a0)
        ctx->r14 = MEM_W(ctx->r4, 0X3C);
            goto L_80091808;
    }
    goto skip_8;
    // 0x800918DC: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    skip_8:
    // 0x800918E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800918E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800918E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800918F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800918F0: jr          $ra
    // 0x800918F4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    return;
    // 0x800918F4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
;}
RECOMP_FUNC void func_800918F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800918F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800918FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091900: lw          $t6, 0x40($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X40);
    // 0x80091904: jal         0x800BCCF4
    // 0x80091908: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800BCCF4(rdram, ctx);
        goto after_0;
    // 0x80091908: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8009190C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091910: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80091914: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009191C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009191C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091920: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091924: lw          $t6, 0x40($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X40);
    // 0x80091928: jal         0x800BCCFC
    // 0x8009192C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800BCCFC(rdram, ctx);
        goto after_0;
    // 0x8009192C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80091930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091934: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80091938: jr          $ra
    // 0x8009193C: nop

    return;
    // 0x8009193C: nop

;}
RECOMP_FUNC void func_80091940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091940: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091948: lw          $t6, 0x40($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X40);
    // 0x8009194C: jal         0x800BCD78
    // 0x80091950: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800BCD78(rdram, ctx);
        goto after_0;
    // 0x80091950: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80091954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009195C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80091964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091964: lw          $t6, 0x40($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X40);
    // 0x80091968: jr          $ra
    // 0x8009196C: lbu         $v0, 0x9($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X9);
    return;
    // 0x8009196C: lbu         $v0, 0x9($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X9);
;}
RECOMP_FUNC void func_80091970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091978: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x8009197C: addu        $t6, $v0, $a1
    ctx->r14 = ADD32(ctx->r2, ctx->r5);
    // 0x80091980: lbu         $t7, 0x18($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X18);
    // 0x80091984: beq         $t7, $zero, L_80091994
    if (ctx->r15 == 0) {
        // 0x80091988: nop
    
            goto L_80091994;
    }
    // 0x80091988: nop

    // 0x8009198C: b           L_8009199C
    // 0x80091990: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8009199C;
    // 0x80091990: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80091994:
    // 0x80091994: jal         0x800BCF28
    // 0x80091998: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_800BCF28(rdram, ctx);
        goto after_0;
    // 0x80091998: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_0:
L_8009199C:
    // 0x8009199C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800919A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800919A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800919AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800919AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800919B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800919B4: lw          $t6, 0x40($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X40);
    // 0x800919B8: jal         0x800BCEC0
    // 0x800919BC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800BCEC0(rdram, ctx);
        goto after_0;
    // 0x800919BC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x800919C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800919C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800919C8: jr          $ra
    // 0x800919CC: nop

    return;
    // 0x800919CC: nop

;}
RECOMP_FUNC void func_800919D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800919D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800919D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800919D8: lw          $t6, 0x40($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X40);
    // 0x800919DC: jal         0x800BCF90
    // 0x800919E0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800BCF90(rdram, ctx);
        goto after_0;
    // 0x800919E0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x800919E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800919E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800919EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800919F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800919F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800919F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800919FC: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80091A00: addu        $t6, $v0, $a1
    ctx->r14 = ADD32(ctx->r2, ctx->r5);
    // 0x80091A04: lbu         $t7, 0x18($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X18);
    // 0x80091A08: beq         $t7, $zero, L_80091A18
    if (ctx->r15 == 0) {
        // 0x80091A0C: nop
    
            goto L_80091A18;
    }
    // 0x80091A0C: nop

    // 0x80091A10: b           L_80091A20
    // 0x80091A14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80091A20;
    // 0x80091A14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80091A18:
    // 0x80091A18: jal         0x800BCE84
    // 0x80091A1C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_800BCE84(rdram, ctx);
        goto after_0;
    // 0x80091A1C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_0:
L_80091A20:
    // 0x80091A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091A24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80091A28: jr          $ra
    return;
;}
RECOMP_FUNC void func_80091A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091A30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091A34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091A38: lw          $t6, 0x40($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X40);
    // 0x80091A3C: jal         0x800BCE84
    // 0x80091A40: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800BCE84(rdram, ctx);
        goto after_0;
    // 0x80091A40: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80091A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091A48: sltiu       $t7, $v0, 0x1
    ctx->r15 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80091A4C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80091A50: jr          $ra
    // 0x80091A54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80091A54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80091A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091A58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091A5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091A60: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80091A64: addu        $t6, $v0, $a1
    ctx->r14 = ADD32(ctx->r2, ctx->r5);
    // 0x80091A68: lbu         $t7, 0x18($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X18);
    // 0x80091A6C: beq         $t7, $zero, L_80091A7C
    if (ctx->r15 == 0) {
        // 0x80091A70: nop
    
            goto L_80091A7C;
    }
    // 0x80091A70: nop

    // 0x80091A74: b           L_80091A84
    // 0x80091A78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80091A84;
    // 0x80091A78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80091A7C:
    // 0x80091A7C: jal         0x800BD030
    // 0x80091A80: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_800BD030(rdram, ctx);
        goto after_0;
    // 0x80091A80: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_0:
L_80091A84:
    // 0x80091A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091A88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80091A8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80091A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091A94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091A98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091A9C: lw          $t6, 0x40($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X40);
    // 0x80091AA0: jal         0x800BCFC4
    // 0x80091AA4: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800BCFC4(rdram, ctx);
        goto after_0;
    // 0x80091AA4: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80091AA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091AAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80091AB0: jr          $ra
    return;
;}
RECOMP_FUNC void func_80091AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091AB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091ABC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091AC0: lw          $t6, 0x40($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X40);
    // 0x80091AC4: jal         0x800BD09C
    // 0x80091AC8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800BD09C(rdram, ctx);
        goto after_0;
    // 0x80091AC8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80091ACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80091AD4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80091ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091ADC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091AE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091AE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80091AE8: lw          $t7, 0x40($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X40);
    // 0x80091AEC: jal         0x800BD0BC
    // 0x80091AF0: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    func_800BD0BC(rdram, ctx);
        goto after_0;
    // 0x80091AF0: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_0:
    // 0x80091AF4: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80091AF8: lw          $t9, 0x40($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X40);
    // 0x80091AFC: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
    // 0x80091B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091B04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80091B08: jr          $ra
    return;
;}
RECOMP_FUNC void func_80091B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091B14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091B18: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80091B1C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x80091B20: jal         0x800BD0DC
    // 0x80091B24: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800BD0DC(rdram, ctx);
        goto after_0;
    // 0x80091B24: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x80091B28: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80091B2C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80091B30: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
    // 0x80091B34: lw          $t6, 0x40($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X40);
    // 0x80091B38: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x80091B3C: lw          $t7, 0x40($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X40);
    // 0x80091B40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80091B44: sb          $zero, 0x9($t7)
    MEM_B(0X9, ctx->r15) = 0;
    // 0x80091B48: lw          $t8, 0x40($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X40);
    // 0x80091B4C: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x80091B50: lw          $t0, 0x40($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X40);
    // 0x80091B54: sb          $t9, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r25;
    // 0x80091B58: lw          $t1, 0x40($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X40);
    // 0x80091B5C: sb          $zero, 0xA($t1)
    MEM_B(0XA, ctx->r9) = 0;
    // 0x80091B60: lw          $t2, 0x40($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X40);
    // 0x80091B64: sb          $zero, 0x18($t2)
    MEM_B(0X18, ctx->r10) = 0;
    // 0x80091B68: lw          $t3, 0x40($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X40);
    // 0x80091B6C: sb          $zero, 0xB($t3)
    MEM_B(0XB, ctx->r11) = 0;
    // 0x80091B70: lw          $t4, 0x40($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X40);
    // 0x80091B74: sb          $zero, 0x19($t4)
    MEM_B(0X19, ctx->r12) = 0;
L_80091B78:
    // 0x80091B78: lw          $t5, 0x40($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X40);
    // 0x80091B7C: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x80091B80: sb          $zero, 0xA($t6)
    MEM_B(0XA, ctx->r14) = 0;
    // 0x80091B84: lw          $t7, 0x40($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X40);
    // 0x80091B88: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80091B8C: sb          $zero, 0x18($t8)
    MEM_B(0X18, ctx->r24) = 0;
    // 0x80091B90: lw          $t9, 0x40($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X40);
    // 0x80091B94: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x80091B98: sb          $zero, 0xB($t0)
    MEM_B(0XB, ctx->r8) = 0;
    // 0x80091B9C: lw          $t1, 0x40($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X40);
    // 0x80091BA0: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x80091BA4: sb          $zero, 0x19($t2)
    MEM_B(0X19, ctx->r10) = 0;
    // 0x80091BA8: lw          $t3, 0x40($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X40);
    // 0x80091BAC: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x80091BB0: sb          $zero, 0xC($t4)
    MEM_B(0XC, ctx->r12) = 0;
    // 0x80091BB4: lw          $t5, 0x40($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X40);
    // 0x80091BB8: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x80091BBC: sb          $zero, 0x1A($t6)
    MEM_B(0X1A, ctx->r14) = 0;
    // 0x80091BC0: lw          $t7, 0x40($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X40);
    // 0x80091BC4: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80091BC8: sb          $zero, 0xD($t8)
    MEM_B(0XD, ctx->r24) = 0;
    // 0x80091BCC: lw          $t9, 0x40($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X40);
    // 0x80091BD0: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x80091BD4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80091BD8: bne         $v0, $v1, L_80091B78
    if (ctx->r2 != ctx->r3) {
        // 0x80091BDC: sb          $zero, 0x1B($t0)
        MEM_B(0X1B, ctx->r8) = 0;
            goto L_80091B78;
    }
    // 0x80091BDC: sb          $zero, 0x1B($t0)
    MEM_B(0X1B, ctx->r8) = 0;
    // 0x80091BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091BE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80091BE8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80091BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091BF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091BF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091BF8: lw          $t6, 0x40($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X40);
    // 0x80091BFC: jal         0x800BD268
    // 0x80091C00: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800BD268(rdram, ctx);
        goto after_0;
    // 0x80091C00: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80091C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091C08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80091C0C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80091C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091C14: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091C18: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80091C1C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80091C20: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80091C24: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80091C28: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80091C2C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80091C30: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80091C34: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80091C38: addiu       $s3, $zero, 0xE
    ctx->r19 = ADD32(0, 0XE);
    // 0x80091C3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80091C40:
    // 0x80091C40: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80091C44: jal         0x80091C80
    // 0x80091C48: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_80091C80(rdram, ctx);
        goto after_0;
    // 0x80091C48: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_0:
    // 0x80091C4C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80091C50: bnel        $s0, $s3, L_80091C40
    if (ctx->r16 != ctx->r19) {
        // 0x80091C54: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80091C40;
    }
    goto skip_0;
    // 0x80091C54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x80091C58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80091C5C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80091C60: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80091C64: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80091C68: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80091C6C: jr          $ra
    // 0x80091C70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80091C70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80091C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091C74: lw          $t6, 0x40($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X40);
    // 0x80091C78: jr          $ra
    // 0x80091C7C: sb          $a1, 0x9($t6)
    MEM_B(0X9, ctx->r14) = ctx->r5;
    return;
    // 0x80091C7C: sb          $a1, 0x9($t6)
    MEM_B(0X9, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_80091C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091C80: lw          $v1, 0x40($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X40);
    // 0x80091C84: xori        $t7, $a2, 0x2
    ctx->r15 = ctx->r6 ^ 0X2;
    // 0x80091C88: addu        $a3, $v1, $a1
    ctx->r7 = ADD32(ctx->r3, ctx->r5);
    // 0x80091C8C: lbu         $v0, 0xA($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0XA);
    // 0x80091C90: xori        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 ^ 0X1;
    // 0x80091C94: bne         $t6, $zero, L_80091CAC
    if (ctx->r14 != 0) {
            // 0x80091C98: nop

    func_80091CAC(rdram, ctx);
    return;
    }
    // 0x80091C98: nop

    // 0x80091C9C: bne         $t7, $zero, L_80091CAC
    if (ctx->r15 != 0) {
            // 0x80091CA0: nop

    func_80091CAC(rdram, ctx);
    return;
    }
    // 0x80091CA0: nop

    // 0x80091CA4: jr          $ra
    // 0x80091CA8: lbu         $v0, 0x18($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X18);
    return;
    // 0x80091CA8: lbu         $v0, 0x18($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X18);
;}
RECOMP_FUNC void func_80091CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091CAC: beq         $a2, $zero, L_80091CCC
    if (ctx->r6 == 0) {
        // 0x80091CB0: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_80091CCC;
    }
    // 0x80091CB0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80091CB4: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x80091CB8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80091CBC: sllv        $t0, $t9, $a1
    ctx->r8 = S32(ctx->r25 << (ctx->r5 & 31));
    // 0x80091CC0: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x80091CC4: b           L_80091CE0
    // 0x80091CC8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
        goto L_80091CE0;
    // 0x80091CC8: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
L_80091CCC:
    // 0x80091CCC: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x80091CD0: sllv        $t4, $t3, $a1
    ctx->r12 = S32(ctx->r11 << (ctx->r5 & 31));
    // 0x80091CD4: nor         $t5, $t4, $zero
    ctx->r13 = ~(ctx->r12 | 0);
    // 0x80091CD8: and         $t6, $t2, $t5
    ctx->r14 = ctx->r10 & ctx->r13;
    // 0x80091CDC: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
L_80091CE0:
    // 0x80091CE0: lw          $t7, 0x40($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X40);
    // 0x80091CE4: addu        $t9, $t7, $a1
    ctx->r25 = ADD32(ctx->r15, ctx->r5);
    // 0x80091CE8: sb          $a2, 0xA($t9)
    MEM_B(0XA, ctx->r25) = ctx->r6;
    // 0x80091CEC: lw          $t8, 0x40($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X40);
    // 0x80091CF0: addu        $t0, $t8, $a1
    ctx->r8 = ADD32(ctx->r24, ctx->r5);
    // 0x80091CF4: lbu         $v0, 0x18($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X18);
    // 0x80091CF8: jr          $ra
    // 0x80091CFC: nop

    return;
    // 0x80091CFC: nop

;}
RECOMP_FUNC void func_80091D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091D00: lw          $t6, 0x40($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X40);
    // 0x80091D04: lw          $v0, 0x4($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X4);
    // 0x80091D08: xori        $t7, $v0, 0x3FFF
    ctx->r15 = ctx->r2 ^ 0X3FFF;
    // 0x80091D0C: jr          $ra
    // 0x80091D10: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    return;
    // 0x80091D10: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_80091D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091D14: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091D18: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80091D1C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80091D20: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80091D24: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80091D28: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80091D2C: lw          $t6, 0x40($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X40);
    // 0x80091D30: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80091D34: jal         0x800BD2D0
    // 0x80091D38: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800BD2D0(rdram, ctx);
        goto after_0;
    // 0x80091D38: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80091D3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80091D40: jal         0x80091E80
    // 0x80091D44: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80091E80(rdram, ctx);
        goto after_1;
    // 0x80091D44: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
    // 0x80091D48: beql        $v0, $zero, L_80091D70
    if (ctx->r2 == 0) {
        // 0x80091D4C: lw          $t9, 0x40($s1)
        ctx->r25 = MEM_W(ctx->r17, 0X40);
            goto L_80091D70;
    }
    goto skip_0;
    // 0x80091D4C: lw          $t9, 0x40($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X40);
    skip_0:
    // 0x80091D50: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x80091D54: lbu         $t7, 0x9($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X9);
    // 0x80091D58: bnel        $t7, $zero, L_80091D70
    if (ctx->r15 != 0) {
        // 0x80091D5C: lw          $t9, 0x40($s1)
        ctx->r25 = MEM_W(ctx->r17, 0X40);
            goto L_80091D70;
    }
    goto skip_1;
    // 0x80091D5C: lw          $t9, 0x40($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X40);
    skip_1:
    // 0x80091D60: lbu         $t8, 0x8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X8);
    // 0x80091D64: beql        $t8, $zero, L_80091D9C
    if (ctx->r24 == 0) {
        // 0x80091D68: addiu       $s2, $zero, 0xE
        ctx->r18 = ADD32(0, 0XE);
            goto L_80091D9C;
    }
    goto skip_2;
    // 0x80091D68: addiu       $s2, $zero, 0xE
    ctx->r18 = ADD32(0, 0XE);
    skip_2:
    // 0x80091D6C: lw          $t9, 0x40($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X40);
L_80091D70:
    // 0x80091D70: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80091D74: addiu       $s2, $zero, 0xE
    ctx->r18 = ADD32(0, 0XE);
    // 0x80091D78: sb          $zero, 0x8($t9)
    MEM_B(0X8, ctx->r25) = 0;
    // 0x80091D7C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80091D80:
    // 0x80091D80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80091D84: jal         0x80091C80
    // 0x80091D88: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80091C80(rdram, ctx);
        goto after_2;
    // 0x80091D88: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x80091D8C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80091D90: bnel        $s0, $s2, L_80091D80
    if (ctx->r16 != ctx->r18) {
        // 0x80091D94: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80091D80;
    }
    goto skip_3;
    // 0x80091D94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_3:
    // 0x80091D98: addiu       $s2, $zero, 0xE
    ctx->r18 = ADD32(0, 0XE);
L_80091D9C:
    // 0x80091D9C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80091DA0: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x80091DA4: lw          $t0, 0x40($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X40);
L_80091DA8:
    // 0x80091DA8: addu        $v0, $t0, $s0
    ctx->r2 = ADD32(ctx->r8, ctx->r16);
    // 0x80091DAC: lbu         $t1, 0xA($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XA);
    // 0x80091DB0: sb          $t1, 0x18($v0)
    MEM_B(0X18, ctx->r2) = ctx->r9;
    // 0x80091DB4: lw          $t2, 0x40($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X40);
    // 0x80091DB8: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x80091DBC: lbu         $v1, 0xA($t3)
    ctx->r3 = MEM_BU(ctx->r11, 0XA);
    // 0x80091DC0: beql        $v1, $zero, L_80091DE0
    if (ctx->r3 == 0) {
        // 0x80091DC4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80091DE0;
    }
    goto skip_4;
    // 0x80091DC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_4:
    // 0x80091DC8: bne         $s3, $v1, L_80091DDC
    if (ctx->r19 != ctx->r3) {
        // 0x80091DCC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80091DDC;
    }
    // 0x80091DCC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80091DD0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80091DD4: jal         0x80091C80
    // 0x80091DD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80091C80(rdram, ctx);
        goto after_3;
    // 0x80091DD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_80091DDC:
    // 0x80091DDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80091DE0:
    // 0x80091DE0: bnel        $s0, $s2, L_80091DA8
    if (ctx->r16 != ctx->r18) {
        // 0x80091DE4: lw          $t0, 0x40($s1)
        ctx->r8 = MEM_W(ctx->r17, 0X40);
            goto L_80091DA8;
    }
    goto skip_5;
    // 0x80091DE4: lw          $t0, 0x40($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X40);
    skip_5:
    // 0x80091DE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80091DEC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80091DF0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80091DF4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80091DF8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80091DFC: jr          $ra
    // 0x80091E00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80091E00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80091E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091E10: jr          $ra
    // 0x80091E14: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x80091E14: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void func_80091E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091E18: jr          $ra
    // 0x80091E1C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80091E1C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80091E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091E20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091E24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091E28: lw          $t6, 0x48($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X48);
    // 0x80091E2C: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    // 0x80091E30: jal         0x80091E48
    // 0x80091E34: sb          $zero, 0x3($t6)
    MEM_B(0X3, ctx->r14) = 0;
    func_80091E48(rdram, ctx);
        goto after_0;
    // 0x80091E34: sb          $zero, 0x3($t6)
    MEM_B(0X3, ctx->r14) = 0;
    after_0:
    // 0x80091E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091E3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80091E40: jr          $ra
    return;
;}
RECOMP_FUNC void func_80091E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091E48: lw          $v0, 0x48($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X48);
    // 0x80091E4C: lbu         $t6, 0x3($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X3);
    // 0x80091E50: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x80091E54: sb          $a1, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r5;
    // 0x80091E58: lw          $v0, 0x48($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X48);
    // 0x80091E5C: lbu         $t8, 0x3($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X3);
    // 0x80091E60: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80091E64: jr          $ra
    // 0x80091E68: sb          $t9, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r25;
    return;
    // 0x80091E68: sb          $t9, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_80091E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091E6C: lw          $v0, 0x48($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X48);
    // 0x80091E70: lbu         $t6, 0x3($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X3);
    // 0x80091E74: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80091E78: jr          $ra
    // 0x80091E7C: sb          $t7, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r15;
    return;
    // 0x80091E7C: sb          $t7, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_80091E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091E80: lw          $v1, 0x48($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X48);
    // 0x80091E84: lbu         $t6, 0x3($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X3);
    // 0x80091E88: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x80091E8C: lbu         $t8, -0x1($t7)
    ctx->r24 = MEM_BU(ctx->r15, -0X1);
    // 0x80091E90: and         $t9, $t8, $a1
    ctx->r25 = ctx->r24 & ctx->r5;
    // 0x80091E94: xor         $v0, $a1, $t9
    ctx->r2 = ctx->r5 ^ ctx->r25;
    // 0x80091E98: jr          $ra
    // 0x80091E9C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x80091E9C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_80091EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091EA0: jr          $ra
    // 0x80091EA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80091EA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80091EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091EA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091EAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091EB0: jal         0x80091F74
    // 0x80091EB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80091F74(rdram, ctx);
        goto after_0;
    // 0x80091EB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80091EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091EBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80091EC0: jr          $ra
    return;
;}
RECOMP_FUNC void func_80091EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091EC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091ECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091ED0: lw          $t6, 0x4C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4C);
    // 0x80091ED4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80091ED8: jal         0x80091F74
    // 0x80091EDC: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    func_80091F74(rdram, ctx);
        goto after_0;
    // 0x80091EDC: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    after_0:
    // 0x80091EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091EE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80091EE8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80091EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091EF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091EF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091EF8: jal         0x80091FE4
    // 0x80091EFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80091FE4(rdram, ctx);
        goto after_0;
    // 0x80091EFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80091F00: beq         $v0, $zero, L_80091F18
    if (ctx->r2 == 0) {
        // 0x80091F04: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80091F18;
    }
    // 0x80091F04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80091F08: jal         0x80091F74
    // 0x80091F0C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80091F74(rdram, ctx);
        goto after_1;
    // 0x80091F0C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80091F10: b           L_80091F24
    // 0x80091F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80091F24;
    // 0x80091F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80091F18:
    // 0x80091F18: jal         0x80091F74
    // 0x80091F1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80091F74(rdram, ctx);
        goto after_2;
    // 0x80091F1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80091F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80091F24:
    // 0x80091F24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80091F28: jr          $ra
    return;
;}
RECOMP_FUNC void func_80091F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091F30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091F34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091F38: lw          $t6, 0x4C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4C);
    // 0x80091F3C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80091F40: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80091F44: bnel        $t7, $at, L_80091F68
    if (ctx->r15 != ctx->r1) {
        // 0x80091F48: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80091F68;
    }
    goto skip_0;
    // 0x80091F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80091F4C: jal         0x80091FE4
    // 0x80091F50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80091FE4(rdram, ctx);
        goto after_0;
    // 0x80091F50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80091F54: beq         $v0, $zero, L_80091F64
    if (ctx->r2 == 0) {
        // 0x80091F58: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80091F64;
    }
    // 0x80091F58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80091F5C: jal         0x80091F74
    // 0x80091F60: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80091F74(rdram, ctx);
        goto after_1;
    // 0x80091F60: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
L_80091F64:
    // 0x80091F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80091F68:
    // 0x80091F68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80091F6C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80091F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091F74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091F78: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80091F7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091F80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80091F84: bne         $a1, $at, L_80091FC4
    if (ctx->r5 != ctx->r1) {
        // 0x80091F88: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80091FC4;
    }
    // 0x80091F88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80091F8C: jal         0x800F8B70
    // 0x80091F90: nop

    func_800F8B70(rdram, ctx);
        goto after_0;
    // 0x80091F90: nop

    after_0:
    // 0x80091F94: bnel        $v0, $zero, L_80091FD8
    if (ctx->r2 != 0) {
        // 0x80091F98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80091FD8;
    }
    goto skip_0;
    // 0x80091F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80091F9C: jal         0x800F9104
    // 0x80091FA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800F9104(rdram, ctx);
        goto after_1;
    // 0x80091FA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80091FA4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80091FA8: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    // 0x80091FAC: jal         0x80101238
    // 0x80091FB0: lw          $a1, 0x184($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X184);
    func_80101238(rdram, ctx);
        goto after_2;
    // 0x80091FB0: lw          $a1, 0x184($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X184);
    after_2:
    // 0x80091FB4: bnel        $v0, $zero, L_80091FC8
    if (ctx->r2 != 0) {
        // 0x80091FB8: lw          $t9, 0x18($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X18);
            goto L_80091FC8;
    }
    goto skip_1;
    // 0x80091FB8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    skip_1:
    // 0x80091FBC: jal         0x800A05DC
    // 0x80091FC0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A05DC(rdram, ctx);
        goto after_3;
    // 0x80091FC0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
L_80091FC4:
    // 0x80091FC4: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_80091FC8:
    // 0x80091FC8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80091FCC: lw          $t0, 0x4C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4C);
    // 0x80091FD0: sb          $t8, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r24;
    // 0x80091FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80091FD8:
    // 0x80091FD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80091FDC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80091FE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091FE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091FE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091FEC: jal         0x800DB9B0
    // 0x80091FF0: nop

    func_800DB9B0(rdram, ctx);
        goto after_0;
    // 0x80091FF0: nop

    after_0:
    // 0x80091FF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091FF8: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80091FFC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80092000: jr          $ra
    // 0x80092004: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80092004: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80092010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092010: jr          $ra
    // 0x80092014: addiu       $v0, $zero, 0x118
    ctx->r2 = ADD32(0, 0X118);
    return;
    // 0x80092014: addiu       $v0, $zero, 0x118
    ctx->r2 = ADD32(0, 0X118);
;}
RECOMP_FUNC void func_80092018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092018: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8009201C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092020: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80092024: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80092028: lw          $s0, 0x50($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X50);
    // 0x8009202C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80092030: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80092034: lbu         $t6, 0xC4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XC4);
    // 0x80092038: beql        $t6, $zero, L_8009204C
    if (ctx->r14 == 0) {
        // 0x8009203C: lwc1        $f0, 0x28($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X28);
            goto L_8009204C;
    }
    goto skip_0;
    // 0x8009203C: lwc1        $f0, 0x28($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X28);
    skip_0:
    // 0x80092040: b           L_8009204C
    // 0x80092044: lwc1        $f0, 0xC8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC8);
        goto L_8009204C;
    // 0x80092044: lwc1        $f0, 0xC8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC8);
    // 0x80092048: lwc1        $f0, 0x28($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X28);
L_8009204C:
    // 0x8009204C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80092050: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x80092054: jal         0x800EFA4C
    // 0x80092058: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    func_800EFA4C(rdram, ctx);
        goto after_0;
    // 0x80092058: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    after_0:
    // 0x8009205C: lw          $s0, 0x50($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X50);
    // 0x80092060: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80092064: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80092068: jal         0x800EE780
    // 0x8009206C: addiu       $a2, $s0, 0x44
    ctx->r6 = ADD32(ctx->r16, 0X44);
    func_800EE780(rdram, ctx);
        goto after_1;
    // 0x8009206C: addiu       $a2, $s0, 0x44
    ctx->r6 = ADD32(ctx->r16, 0X44);
    after_1:
    // 0x80092070: jal         0x80019CD4
    // 0x80092074: nop

    func_80019CD4(rdram, ctx);
        goto after_2;
    // 0x80092074: nop

    after_2:
    // 0x80092078: lw          $s0, 0x50($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X50);
    // 0x8009207C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80092080: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x80092084: addiu       $a0, $s0, 0x44
    ctx->r4 = ADD32(ctx->r16, 0X44);
    // 0x80092088: jal         0x80019750
    // 0x8009208C: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    func_80019750(rdram, ctx);
        goto after_3;
    // 0x8009208C: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    after_3:
    // 0x80092090: lw          $s0, 0x50($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X50);
    // 0x80092094: lbu         $t7, 0xC4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XC4);
    // 0x80092098: beq         $t7, $zero, L_800920AC
    if (ctx->r15 == 0) {
        // 0x8009209C: nop
    
            goto L_800920AC;
    }
    // 0x8009209C: nop

    // 0x800920A0: jal         0x80018F50
    // 0x800920A4: lwc1        $f12, 0x28($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X28);
    func_80018F50(rdram, ctx);
        goto after_4;
    // 0x800920A4: lwc1        $f12, 0x28($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X28);
    after_4:
    // 0x800920A8: lw          $s0, 0x50($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X50);
L_800920AC:
    // 0x800920AC: jal         0x80018AD0
    // 0x800920B0: addiu       $a0, $s0, 0xCC
    ctx->r4 = ADD32(ctx->r16, 0XCC);
    func_80018AD0(rdram, ctx);
        goto after_5;
    // 0x800920B0: addiu       $a0, $s0, 0xCC
    ctx->r4 = ADD32(ctx->r16, 0XCC);
    after_5:
    // 0x800920B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800920B8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800920BC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800920C0: jr          $ra
    // 0x800920C4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800920C4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800920C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800920C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800920CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800920D0: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x800920D4: addiu       $a1, $v0, 0x64
    ctx->r5 = ADD32(ctx->r2, 0X64);
    // 0x800920D8: jal         0x80093504
    // 0x800920DC: addiu       $a2, $v0, 0x50
    ctx->r6 = ADD32(ctx->r2, 0X50);
    func_80093504(rdram, ctx);
        goto after_0;
    // 0x800920DC: addiu       $a2, $v0, 0x50
    ctx->r6 = ADD32(ctx->r2, 0X50);
    after_0:
    // 0x800920E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800920E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800920E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800920F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800920F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800920F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800920F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800920FC: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092100: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80092104: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80092108: lbu         $v0, 0x15($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X15);
    // 0x8009210C: beq         $v0, $at, L_80092124
    if (ctx->r2 == ctx->r1) {
        // 0x80092110: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80092124;
    }
    // 0x80092110: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80092114: beql        $v0, $at, L_8009215C
    if (ctx->r2 == ctx->r1) {
        // 0x80092118: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8009215C;
    }
    goto skip_0;
    // 0x80092118: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8009211C: b           L_80092148
    // 0x80092120: nop

        goto L_80092148;
    // 0x80092120: nop

L_80092124:
    // 0x80092124: jal         0x8009C984
    // 0x80092128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_0;
    // 0x80092128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8009212C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80092130: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80092134: jal         0x800136E4
    // 0x80092138: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    func_800136E4(rdram, ctx);
        goto after_1;
    // 0x80092138: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    after_1:
    // 0x8009213C: lw          $t7, 0x50($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X50);
    // 0x80092140: b           L_80092158
    // 0x80092144: swc1        $f0, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f0.u32l;
        goto L_80092158;
    // 0x80092144: swc1        $f0, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f0.u32l;
L_80092148:
    // 0x80092148: jal         0x8009C984
    // 0x8009214C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_2;
    // 0x8009214C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80092150: lw          $t8, 0x50($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X50);
    // 0x80092154: swc1        $f0, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f0.u32l;
L_80092158:
    // 0x80092158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8009215C:
    // 0x8009215C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80092160: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80092164: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009216C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009216C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80092170: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092174: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80092178: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8009217C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80092180: jal         0x800920F0
    // 0x80092184: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800920F0(rdram, ctx);
        goto after_0;
    // 0x80092184: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x80092188: jal         0x8009C53C
    // 0x8009218C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C53C(rdram, ctx);
        goto after_1;
    // 0x8009218C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80092190: lw          $t6, 0x50($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X50);
    // 0x80092194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80092198: jal         0x8009BFCC
    // 0x8009219C: swc1        $f0, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f0.u32l;
    func_8009BFCC(rdram, ctx);
        goto after_2;
    // 0x8009219C: swc1        $f0, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f0.u32l;
    after_2:
    // 0x800921A0: lw          $t7, 0x50($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X50);
    // 0x800921A4: swc1        $f0, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f0.u32l;
    // 0x800921A8: lw          $v0, 0x50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X50);
    // 0x800921AC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800921B0: lw          $a1, 0x20($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X20);
    // 0x800921B4: lw          $a2, 0x28($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X28);
    // 0x800921B8: jal         0x800EFA4C
    // 0x800921BC: lw          $a3, 0x24($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X24);
    func_800EFA4C(rdram, ctx);
        goto after_3;
    // 0x800921BC: lw          $a3, 0x24($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X24);
    after_3:
    // 0x800921C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800921C4: jal         0x8009C128
    // 0x800921C8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_4;
    // 0x800921C8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x800921CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800921D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800921D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800921D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800921E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800921E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800921E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800921E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800921EC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800921F0: lw          $t7, 0x50($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X50);
    // 0x800921F4: jal         0x8009C2A0
    // 0x800921F8: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    func_8009C2A0(rdram, ctx);
        goto after_0;
    // 0x800921F8: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    after_0:
    // 0x800921FC: jal         0x800EEEA8
    // 0x80092200: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800EEEA8(rdram, ctx);
        goto after_1;
    // 0x80092200: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80092204: beq         $v0, $zero, L_80092214
    if (ctx->r2 == 0) {
        // 0x80092208: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80092214;
    }
    // 0x80092208: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009220C: jal         0x8009C128
    // 0x80092210: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_8009C128(rdram, ctx);
        goto after_2;
    // 0x80092210: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_2:
L_80092214:
    // 0x80092214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092218: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009221C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092224: lw          $t7, 0x50($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X50);
    // 0x80092228: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8009222C: jr          $ra
    // 0x80092230: sb          $t6, 0x1A($t7)
    MEM_B(0X1A, ctx->r15) = ctx->r14;
    return;
    // 0x80092230: sb          $t6, 0x1A($t7)
    MEM_B(0X1A, ctx->r15) = ctx->r14;
;}
RECOMP_FUNC void func_80092234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092234: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092238: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8009223C: sb          $v0, 0x1A($t6)
    MEM_B(0X1A, ctx->r14) = ctx->r2;
    // 0x80092240: lw          $t7, 0x50($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X50);
    // 0x80092244: jr          $ra
    // 0x80092248: sb          $v0, 0x16($t7)
    MEM_B(0X16, ctx->r15) = ctx->r2;
    return;
    // 0x80092248: sb          $v0, 0x16($t7)
    MEM_B(0X16, ctx->r15) = ctx->r2;
;}
RECOMP_FUNC void func_8009224C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009224C: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092250: jr          $ra
    // 0x80092254: lbu         $v0, 0x1A($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X1A);
    return;
    // 0x80092254: lbu         $v0, 0x1A($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X1A);
;}
RECOMP_FUNC void func_80092258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092258: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8009225C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80092260: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80092264: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80092268: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x8009226C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80092270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80092274: lbu         $t6, 0x88($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X88);
    // 0x80092278: beql        $t6, $zero, L_80092294
    if (ctx->r14 == 0) {
        // 0x8009227C: lbu         $t8, 0x14($v0)
        ctx->r24 = MEM_BU(ctx->r2, 0X14);
            goto L_80092294;
    }
    goto skip_0;
    // 0x8009227C: lbu         $t8, 0x14($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X14);
    skip_0:
    // 0x80092280: lbu         $t7, 0x8C($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X8C);
    // 0x80092284: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092288: b           L_800922A0
    // 0x8009228C: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
        goto L_800922A0;
    // 0x8009228C: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092290: lbu         $t8, 0x14($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X14);
L_80092294:
    // 0x80092294: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092298: nop

    // 0x8009229C: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
L_800922A0:
    // 0x800922A0: jal         0x8009AD78
    // 0x800922A4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_8009AD78(rdram, ctx);
        goto after_0;
    // 0x800922A4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_0:
    // 0x800922A8: beq         $v0, $zero, L_80092300
    if (ctx->r2 == 0) {
        // 0x800922AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80092300;
    }
    // 0x800922AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800922B0: sb          $zero, 0x33($sp)
    MEM_B(0X33, ctx->r29) = 0;
    // 0x800922B4: jal         0x80093DF4
    // 0x800922B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80093DF4(rdram, ctx);
        goto after_1;
    // 0x800922B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x800922BC: beql        $v0, $zero, L_800922F0
    if (ctx->r2 == 0) {
        // 0x800922C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800922F0;
    }
    goto skip_1;
    // 0x800922C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x800922C4: jal         0x800A89F8
    // 0x800922C8: nop

    func_800A89F8(rdram, ctx);
        goto after_2;
    // 0x800922C8: nop

    after_2:
    // 0x800922CC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800922D0: jal         0x800A4C68
    // 0x800922D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4C68(rdram, ctx);
        goto after_3;
    // 0x800922D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800922D8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800922DC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800922E0: bnel        $v0, $t9, L_800922F0
    if (ctx->r2 != ctx->r25) {
        // 0x800922E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800922F0;
    }
    goto skip_2;
    // 0x800922E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x800922E8: sb          $t0, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r8;
    // 0x800922EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800922F0:
    // 0x800922F0: jal         0x800854B8
    // 0x800922F4: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    _bainvisible_entrypoint_2(rdram, ctx);
        goto after_4;
    // 0x800922F4: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    after_4:
    // 0x800922F8: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x800922FC: nop

L_80092300:
    // 0x80092300: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80092304: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80092308: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8009230C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80092310: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80092314: cvt.w.s     $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    ctx->f8.u32l = CVT_W_S(ctx->f20.fl);
    // 0x80092318: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8009231C: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80092320: nop

    // 0x80092324: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80092328: beql        $v0, $zero, L_80092378
    if (ctx->r2 == 0) {
        // 0x8009232C: mfc1        $v0, $f8
        ctx->r2 = (int32_t)ctx->f8.u32l;
            goto L_80092378;
    }
    goto skip_3;
    // 0x8009232C: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    skip_3:
    // 0x80092330: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80092334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80092338: sub.s       $f8, $f20, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f20.fl - ctx->f8.fl;
    // 0x8009233C: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80092340: nop

    // 0x80092344: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80092348: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8009234C: nop

    // 0x80092350: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80092354: bne         $v0, $zero, L_8009236C
    if (ctx->r2 != 0) {
        // 0x80092358: nop
    
            goto L_8009236C;
    }
    // 0x80092358: nop

    // 0x8009235C: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x80092360: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80092364: b           L_80092384
    // 0x80092368: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_80092384;
    // 0x80092368: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_8009236C:
    // 0x8009236C: b           L_80092384
    // 0x80092370: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80092384;
    // 0x80092370: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80092374: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
L_80092378:
    // 0x80092378: nop

    // 0x8009237C: bltz        $v0, L_8009236C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80092380: nop
    
            goto L_8009236C;
    }
    // 0x80092380: nop

L_80092384:
    // 0x80092384: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80092388: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8009238C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80092390: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80092394: jr          $ra
    // 0x80092398: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    return;
    // 0x80092398: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
;}
RECOMP_FUNC void func_8009239C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009239C: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x800923A0: jr          $ra
    // 0x800923A4: lbu         $v0, 0x19($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X19);
    return;
    // 0x800923A4: lbu         $v0, 0x19($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X19);
;}
RECOMP_FUNC void func_800923A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800923A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800923AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800923B0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800923B4: jal         0x80092258
    // 0x800923B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80092258(rdram, ctx);
        goto after_0;
    // 0x800923B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x800923BC: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x800923C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800923C4: jal         0x800A2540
    // 0x800923C8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800A2540(rdram, ctx);
        goto after_1;
    // 0x800923C8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x800923CC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800923D0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800923D4: jal         0x800DF464
    // 0x800923D8: nop

    func_800DF464(rdram, ctx);
        goto after_2;
    // 0x800923D8: nop

    after_2:
    // 0x800923DC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800923E0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800923E4: beq         $t6, $zero, L_80092404
    if (ctx->r14 == 0) {
        // 0x800923E8: nop
    
            goto L_80092404;
    }
    // 0x800923E8: nop

    // 0x800923EC: lw          $v0, 0x50($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X50);
    // 0x800923F0: lbu         $t8, 0x16($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X16);
    // 0x800923F4: bne         $t8, $zero, L_80092404
    if (ctx->r24 != 0) {
        // 0x800923F8: nop
    
            goto L_80092404;
    }
    // 0x800923F8: nop

    // 0x800923FC: jal         0x800DF738
    // 0x80092400: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    func_800DF738(rdram, ctx);
        goto after_3;
    // 0x80092400: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    after_3:
L_80092404:
    // 0x80092404: jal         0x800DF830
    // 0x80092408: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800DF830(rdram, ctx);
        goto after_4;
    // 0x80092408: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x8009240C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80092410: lbu         $a3, 0x1F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X1F);
    // 0x80092414: lw          $v0, 0x50($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X50);
    // 0x80092418: lbu         $t0, 0x88($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X88);
    // 0x8009241C: beql        $t0, $zero, L_80092438
    if (ctx->r8 == 0) {
        // 0x80092420: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80092438;
    }
    goto skip_0;
    // 0x80092420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80092424: lbu         $a0, 0x89($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X89);
    // 0x80092428: lbu         $a1, 0x8A($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X8A);
    // 0x8009242C: jal         0x800DF5D8
    // 0x80092430: lbu         $a2, 0x8B($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X8B);
    func_800DF5D8(rdram, ctx);
        goto after_5;
    // 0x80092430: lbu         $a2, 0x8B($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X8B);
    after_5:
    // 0x80092434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80092438:
    // 0x80092438: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009243C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80092444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092444: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80092448: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8009244C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80092450: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092454: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80092458: lbu         $t7, 0xA2($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XA2);
    // 0x8009245C: beq         $t7, $zero, L_80092474
    if (ctx->r15 == 0) {
        // 0x80092460: nop
    
            goto L_80092474;
    }
    // 0x80092460: nop

    // 0x80092464: jal         0x80093AB8
    // 0x80092468: nop

    func_80093AB8(rdram, ctx);
        goto after_0;
    // 0x80092468: nop

    after_0:
    // 0x8009246C: b           L_8009271C
    // 0x80092470: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8009271C;
    // 0x80092470: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80092474:
    // 0x80092474: jal         0x800A89F8
    // 0x80092478: nop

    func_800A89F8(rdram, ctx);
        goto after_1;
    // 0x80092478: nop

    after_1:
    // 0x8009247C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80092480: jal         0x800A4C68
    // 0x80092484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4C68(rdram, ctx);
        goto after_2;
    // 0x80092484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80092488: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8009248C: bnel        $v0, $t8, L_800924A8
    if (ctx->r2 != ctx->r24) {
        // 0x80092490: lw          $v1, 0x50($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X50);
            goto L_800924A8;
    }
    goto skip_0;
    // 0x80092490: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    skip_0:
    // 0x80092494: lw          $t9, 0x50($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X50);
    // 0x80092498: lbu         $t0, 0x18($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X18);
    // 0x8009249C: beql        $t0, $zero, L_8009271C
    if (ctx->r8 == 0) {
        // 0x800924A0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8009271C;
    }
    goto skip_1;
    // 0x800924A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x800924A4: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
L_800924A8:
    // 0x800924A8: lbu         $t1, 0x17($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X17);
    // 0x800924AC: beql        $t1, $zero, L_8009271C
    if (ctx->r9 == 0) {
        // 0x800924B0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8009271C;
    }
    goto skip_2;
    // 0x800924B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x800924B4: lw          $t2, 0x84($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X84);
    // 0x800924B8: addiu       $v0, $v1, 0x78
    ctx->r2 = ADD32(ctx->r3, 0X78);
    // 0x800924BC: beql        $t2, $zero, L_8009250C
    if (ctx->r10 == 0) {
        // 0x800924C0: lwc1        $f4, 0x1C($v1)
        ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
            goto L_8009250C;
    }
    goto skip_3;
    // 0x800924C0: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
    skip_3:
    // 0x800924C4: lbu         $t3, 0x4($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X4);
    // 0x800924C8: beql        $t3, $zero, L_800924EC
    if (ctx->r11 == 0) {
        // 0x800924CC: lbu         $t4, 0x9($v0)
        ctx->r12 = MEM_BU(ctx->r2, 0X9);
            goto L_800924EC;
    }
    goto skip_4;
    // 0x800924CC: lbu         $t4, 0x9($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X9);
    skip_4:
    // 0x800924D0: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x800924D4: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x800924D8: jal         0x800A7108
    // 0x800924DC: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    func_800A7108(rdram, ctx);
        goto after_3;
    // 0x800924DC: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    after_3:
    // 0x800924E0: b           L_80092508
    // 0x800924E4: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
        goto L_80092508;
    // 0x800924E4: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x800924E8: lbu         $t4, 0x9($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X9);
L_800924EC:
    // 0x800924EC: beql        $t4, $zero, L_8009250C
    if (ctx->r12 == 0) {
        // 0x800924F0: lwc1        $f4, 0x1C($v1)
        ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
            goto L_8009250C;
    }
    goto skip_5;
    // 0x800924F0: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
    skip_5:
    // 0x800924F4: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x800924F8: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x800924FC: jal         0x800A7130
    // 0x80092500: lbu         $a1, 0x8($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X8);
    func_800A7130(rdram, ctx);
        goto after_4;
    // 0x80092500: lbu         $a1, 0x8($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X8);
    after_4:
    // 0x80092504: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
L_80092508:
    // 0x80092508: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
L_8009250C:
    // 0x8009250C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80092510: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x80092514: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x80092518: jal         0x8009216C
    // 0x8009251C: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    func_8009216C(rdram, ctx);
        goto after_5;
    // 0x8009251C: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x80092520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80092524: jal         0x80094070
    // 0x80092528: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_80094070(rdram, ctx);
        goto after_6;
    // 0x80092528: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_6:
    // 0x8009252C: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x80092530: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80092534: jal         0x800EE7F8
    // 0x80092538: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    func_800EE7F8(rdram, ctx);
        goto after_7;
    // 0x80092538: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    after_7:
    // 0x8009253C: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x80092540: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80092544: jal         0x800EF04C
    // 0x80092548: addiu       $a1, $a1, 0x44
    ctx->r5 = ADD32(ctx->r5, 0X44);
    func_800EF04C(rdram, ctx);
        goto after_8;
    // 0x80092548: addiu       $a1, $a1, 0x44
    ctx->r5 = ADD32(ctx->r5, 0X44);
    after_8:
    // 0x8009254C: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x80092550: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80092554: jal         0x800EF04C
    // 0x80092558: addiu       $a1, $a1, 0x44
    ctx->r5 = ADD32(ctx->r5, 0X44);
    func_800EF04C(rdram, ctx);
        goto after_9;
    // 0x80092558: addiu       $a1, $a1, 0x44
    ctx->r5 = ADD32(ctx->r5, 0X44);
    after_9:
    // 0x8009255C: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80092560: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80092564: lwc1        $f6, 0x74($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X74);
    // 0x80092568: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x8009256C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80092570: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80092574: jal         0x800E3E8C
    // 0x80092578: nop

    func_800E3E8C(rdram, ctx);
        goto after_10;
    // 0x80092578: nop

    after_10:
    // 0x8009257C: beql        $v0, $zero, L_8009271C
    if (ctx->r2 == 0) {
        // 0x80092580: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8009271C;
    }
    goto skip_6;
    // 0x80092580: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_6:
    // 0x80092584: lw          $t5, 0x50($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X50);
    // 0x80092588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8009258C: lh          $t6, 0xC($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC);
    // 0x80092590: beql        $t6, $zero, L_8009271C
    if (ctx->r14 == 0) {
        // 0x80092594: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8009271C;
    }
    goto skip_7;
    // 0x80092594: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_7:
    // 0x80092598: jal         0x80092B04
    // 0x8009259C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80092B04(rdram, ctx);
        goto after_11;
    // 0x8009259C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x800925A0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x800925A4: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x800925A8: lbu         $t7, 0x10($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X10);
    // 0x800925AC: bnel        $t7, $zero, L_80092604
    if (ctx->r15 != 0) {
        // 0x800925B0: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_80092604;
    }
    goto skip_8;
    // 0x800925B0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    skip_8:
    // 0x800925B4: jal         0x8008CA98
    // 0x800925B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CA98(rdram, ctx);
        goto after_12;
    // 0x800925B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x800925BC: jal         0x800B27E0
    // 0x800925C0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_800B27E0(rdram, ctx);
        goto after_13;
    // 0x800925C0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_13:
    // 0x800925C4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800925C8: jal         0x8008CABC
    // 0x800925CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CABC(rdram, ctx);
        goto after_14;
    // 0x800925CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x800925D0: jal         0x8008AEDC
    // 0x800925D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AEDC(rdram, ctx);
        goto after_15;
    // 0x800925D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_15:
    // 0x800925D8: lw          $t8, 0x50($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X50);
    // 0x800925DC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800925E0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800925E4: jal         0x8008C200
    // 0x800925E8: lh          $a0, 0x0($t8)
    ctx->r4 = MEM_H(ctx->r24, 0X0);
    func_8008C200(rdram, ctx);
        goto after_16;
    // 0x800925E8: lh          $a0, 0x0($t8)
    ctx->r4 = MEM_H(ctx->r24, 0X0);
    after_16:
    // 0x800925EC: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x800925F0: lbu         $t9, 0x13($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X13);
    // 0x800925F4: xori        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 ^ 0X1;
    // 0x800925F8: sb          $t0, 0x13($v1)
    MEM_B(0X13, ctx->r3) = ctx->r8;
    // 0x800925FC: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80092600: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_80092604:
    // 0x80092604: sb          $t1, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r9;
    // 0x80092608: jal         0x800A06E8
    // 0x8009260C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A06E8(rdram, ctx);
        goto after_17;
    // 0x8009260C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80092610: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80092614: lbu         $t2, 0xC4($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XC4);
    // 0x80092618: beql        $t2, $zero, L_80092658
    if (ctx->r10 == 0) {
        // 0x8009261C: lbu         $v0, 0x12($v1)
        ctx->r2 = MEM_BU(ctx->r3, 0X12);
            goto L_80092658;
    }
    goto skip_9;
    // 0x8009261C: lbu         $v0, 0x12($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X12);
    skip_9:
    // 0x80092620: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80092624: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x80092628: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    // 0x8009262C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80092630: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80092634: jal         0x800EFA4C
    // 0x80092638: nop

    func_800EFA4C(rdram, ctx);
        goto after_18;
    // 0x80092638: nop

    after_18:
    // 0x8009263C: lw          $t3, 0x50($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X50);
    // 0x80092640: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x80092644: lwc1        $f16, 0xC8($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0XC8);
    // 0x80092648: jal         0x800DF4CC
    // 0x8009264C: swc1        $f16, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f16.u32l;
    func_800DF4CC(rdram, ctx);
        goto after_19;
    // 0x8009264C: swc1        $f16, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f16.u32l;
    after_19:
    // 0x80092650: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80092654: lbu         $v0, 0x12($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X12);
L_80092658:
    // 0x80092658: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009265C: beq         $v0, $zero, L_8009267C
    if (ctx->r2 == 0) {
        // 0x80092660: sll         $a0, $v0, 16
        ctx->r4 = S32(ctx->r2 << 16);
            goto L_8009267C;
    }
    // 0x80092660: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80092664: sra         $t4, $a0, 16
    ctx->r12 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80092668: jal         0x80100A74
    // 0x8009266C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_80100A74(rdram, ctx);
        goto after_20;
    // 0x8009266C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_20:
    // 0x80092670: jal         0x800DF818
    // 0x80092674: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF818(rdram, ctx);
        goto after_21;
    // 0x80092674: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_21:
    // 0x80092678: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
L_8009267C:
    // 0x8009267C: jal         0x800AE080
    // 0x80092680: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    func_800AE080(rdram, ctx);
        goto after_22;
    // 0x80092680: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    after_22:
    // 0x80092684: jal         0x800DF72C
    // 0x80092688: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF72C(rdram, ctx);
        goto after_23;
    // 0x80092688: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_23:
    // 0x8009268C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80092690: addiu       $a0, $a0, 0x2234
    ctx->r4 = ADD32(ctx->r4, 0X2234);
    // 0x80092694: jal         0x800DF47C
    // 0x80092698: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800DF47C(rdram, ctx);
        goto after_24;
    // 0x80092698: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_24:
    // 0x8009269C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800926A0: jal         0x800923A8
    // 0x800926A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800923A8(rdram, ctx);
        goto after_25;
    // 0x800926A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_25:
    // 0x800926A8: lw          $t5, 0x50($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X50);
    // 0x800926AC: jal         0x80100AC4
    // 0x800926B0: lbu         $a0, 0x12($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X12);
    func_80100AC4(rdram, ctx);
        goto after_26;
    // 0x800926B0: lbu         $a0, 0x12($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X12);
    after_26:
    // 0x800926B4: jal         0x800DF720
    // 0x800926B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF720(rdram, ctx);
        goto after_27;
    // 0x800926B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_27:
    // 0x800926BC: jal         0x800DF440
    // 0x800926C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800DF440(rdram, ctx);
        goto after_28;
    // 0x800926C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_28:
    // 0x800926C4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800926C8: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x800926CC: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x800926D0: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x800926D4: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x800926D8: jal         0x800DE448
    // 0x800926DC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_800DE448(rdram, ctx);
        goto after_29;
    // 0x800926DC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_29:
    // 0x800926E0: lw          $t7, 0x50($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X50);
    // 0x800926E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800926E8: lbu         $t8, 0x11($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X11);
    // 0x800926EC: beql        $t8, $zero, L_8009271C
    if (ctx->r24 == 0) {
        // 0x800926F0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8009271C;
    }
    goto skip_10;
    // 0x800926F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_10:
    // 0x800926F4: jal         0x800923A8
    // 0x800926F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800923A8(rdram, ctx);
        goto after_30;
    // 0x800926F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_30:
    // 0x800926FC: addiu       $t9, $sp, 0x54
    ctx->r25 = ADD32(ctx->r29, 0X54);
    // 0x80092700: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80092704: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80092708: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x8009270C: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x80092710: jal         0x80084500
    // 0x80092714: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    _babackpack_entrypoint_3(rdram, ctx);
        goto after_31;
    // 0x80092714: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    after_31:
    // 0x80092718: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8009271C:
    // 0x8009271C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80092720: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x80092724: jr          $ra
    return;
;}
RECOMP_FUNC void func_8009272C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009272C: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092730: jr          $ra
    // 0x80092734: sb          $a1, 0x11($t6)
    MEM_B(0X11, ctx->r14) = ctx->r5;
    return;
    // 0x80092734: sb          $a1, 0x11($t6)
    MEM_B(0X11, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_80092738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092738: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x8009273C: jr          $ra
    // 0x80092740: lbu         $v0, 0x11($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X11);
    return;
    // 0x80092740: lbu         $v0, 0x11($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X11);
;}
RECOMP_FUNC void func_80092744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092744: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092748: jr          $ra
    // 0x8009274C: sb          $a1, 0x88($t6)
    MEM_B(0X88, ctx->r14) = ctx->r5;
    return;
    // 0x8009274C: sb          $a1, 0x88($t6)
    MEM_B(0X88, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_80092750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092750: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x80092754: sb          $a1, 0x89($t6)
    MEM_B(0X89, ctx->r14) = ctx->r5;
    // 0x80092758: lw          $t7, 0x50($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X50);
    // 0x8009275C: sb          $a2, 0x8A($t7)
    MEM_B(0X8A, ctx->r15) = ctx->r6;
    // 0x80092760: lw          $t8, 0x50($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X50);
    // 0x80092764: sb          $a3, 0x8B($t8)
    MEM_B(0X8B, ctx->r24) = ctx->r7;
    // 0x80092768: lw          $t0, 0x50($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X50);
    // 0x8009276C: lw          $t9, 0x10($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X10);
    // 0x80092770: jr          $ra
    // 0x80092774: sb          $t9, 0x8C($t0)
    MEM_B(0X8C, ctx->r8) = ctx->r25;
    return;
    // 0x80092774: sb          $t9, 0x8C($t0)
    MEM_B(0X8C, ctx->r8) = ctx->r25;
;}
RECOMP_FUNC void func_80092778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092778: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009277C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092780: jal         0x800A3274
    // 0x80092784: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800A3274(rdram, ctx);
        goto after_0;
    // 0x80092784: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80092788: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8009278C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80092790: addiu       $a2, $sp, 0x1E
    ctx->r6 = ADD32(ctx->r29, 0X1E);
    // 0x80092794: jal         0x80084F38
    // 0x80092798: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    _bapreload_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80092798: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x8009279C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800927A0: jal         0x80092EC8
    // 0x800927A4: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    func_80092EC8(rdram, ctx);
        goto after_2;
    // 0x800927A4: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    after_2:
    // 0x800927A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800927AC: jal         0x8009312C
    // 0x800927B0: lh          $a1, 0x1C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1C);
    func_8009312C(rdram, ctx);
        goto after_3;
    // 0x800927B0: lh          $a1, 0x1C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1C);
    after_3:
    // 0x800927B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800927B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800927BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800927C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800927C4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800927C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800927CC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x800927D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800927D4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800927D8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800927DC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800927E0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x800927E4: jal         0x800F6BE4
    // 0x800927E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F6BE4(rdram, ctx);
        goto after_0;
    // 0x800927E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800927EC: beql        $v0, $zero, L_80092854
    if (ctx->r2 == 0) {
        // 0x800927F0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80092854;
    }
    goto skip_0;
    // 0x800927F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800927F4: jal         0x800F53D0
    // 0x800927F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F53D0(rdram, ctx);
        goto after_1;
    // 0x800927F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800927FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80092800: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80092804: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80092808: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x8009280C: jal         0x800EFA4C
    // 0x80092810: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    func_800EFA4C(rdram, ctx);
        goto after_2;
    // 0x80092810: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    after_2:
    // 0x80092814: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80092818: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8009281C: jal         0x80108474
    // 0x80092820: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80108474(rdram, ctx);
        goto after_3;
    // 0x80092820: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80092824: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80092828: lw          $t7, 0x50($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X50);
    // 0x8009282C: sw          $t6, 0x84($t7)
    MEM_W(0X84, ctx->r15) = ctx->r14;
    // 0x80092830: lw          $t8, 0x50($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X50);
    // 0x80092834: lw          $a1, 0x184($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X184);
    // 0x80092838: jal         0x800A70D0
    // 0x8009283C: lw          $a0, 0x84($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X84);
    func_800A70D0(rdram, ctx);
        goto after_4;
    // 0x8009283C: lw          $a0, 0x84($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X84);
    after_4:
    // 0x80092840: lw          $v0, 0x50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X50);
    // 0x80092844: lw          $a0, 0x84($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X84);
    // 0x80092848: jal         0x800A7108
    // 0x8009284C: lw          $a1, 0x78($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X78);
    func_800A7108(rdram, ctx);
        goto after_5;
    // 0x8009284C: lw          $a1, 0x78($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X78);
    after_5:
    // 0x80092850: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80092854:
    // 0x80092854: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80092858: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8009285C: jr          $ra
    // 0x80092860: nop

    return;
    // 0x80092860: nop

;}
RECOMP_FUNC void func_80092864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092864: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80092868: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x8009286C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80092870: swc1        $f12, 0x78($t6)
    MEM_W(0X78, ctx->r14) = ctx->f12.u32l;
    // 0x80092874: lw          $t8, 0x50($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X50);
    // 0x80092878: jr          $ra
    // 0x8009287C: sb          $t7, 0x7C($t8)
    MEM_B(0X7C, ctx->r24) = ctx->r15;
    return;
    // 0x8009287C: sb          $t7, 0x7C($t8)
    MEM_B(0X7C, ctx->r24) = ctx->r15;
;}
