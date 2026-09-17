#include "tooie_recomp.h"
#include "funcs.h"

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
RECOMP_FUNC void func_80800130_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800138: jal         0x8009E6EC
    // 0x8080013C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x8080013C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800140: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    // 0x80800144: bne         $v0, $at, L_80800154
    if (ctx->r2 != ctx->r1) {
        // 0x80800148: nop
    
            goto L_80800154;
    }
    // 0x80800148: nop

    // 0x8080014C: jal         0x80099B94
    // 0x80800150: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80099B94(rdram, ctx);
        goto after_1;
    // 0x80800150: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
L_80800154:
    // 0x80800154: jal         0x80082FF8
    // 0x80800158: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x80800158: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8080015C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800164: jr          $ra
    // 0x80800168: nop

    return;
    // 0x80800168: nop

;}
RECOMP_FUNC void bsmum_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080016C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800170: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800174: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800178: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080017C: jal         0x8009E74C
    // 0x80800180: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x80800180: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x80800184: bne         $v0, $zero, L_808001CC
    if (ctx->r2 != 0) {
        // 0x80800188: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001CC;
    }
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080018C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800190: jal         0x800947EC
    // 0x80800194: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_1;
    // 0x80800194: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80800198: jal         0x8009E474
    // 0x8080019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E474(rdram, ctx);
        goto after_2;
    // 0x8080019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808001A0: jal         0x8009F1E0
    // 0x808001A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F1E0(rdram, ctx);
        goto after_3;
    // 0x808001A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808001A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001AC: jal         0x80093230
    // 0x808001B0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_80093230(rdram, ctx);
        goto after_4;
    // 0x808001B0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_4:
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B8: jal         0x80084F28
    // 0x808001BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bamum_entrypoint_4(rdram, ctx);
        goto after_5;
    // 0x808001BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x808001C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001C4: jal         0x80092864
    // 0x808001C8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_80092864(rdram, ctx);
        goto after_6;
    // 0x808001C8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_6:
L_808001CC:
    // 0x808001CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808001D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808001D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001D8: jr          $ra
    // 0x808001DC: nop

    return;
    // 0x808001DC: nop

;}
RECOMP_FUNC void bsmum_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001F0: jal         0x8009E77C
    // 0x808001F4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8009E77C(rdram, ctx);
        goto after_0;
    // 0x808001F4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x808001F8: bnel        $v0, $zero, L_808002A8
    if (ctx->r2 != 0) {
        // 0x808001FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808002A8;
    }
    goto skip_0;
    // 0x808001FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800200: jal         0x8009E4AC
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_1;
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080020C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800210: jal         0x8009E55C
    // 0x80800214: lui         $a2, 0x4218
    ctx->r6 = S32(0X4218 << 16);
    func_8009E55C(rdram, ctx);
        goto after_2;
    // 0x80800214: lui         $a2, 0x4218
    ctx->r6 = S32(0X4218 << 16);
    after_2:
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080021C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800220: jal         0x8009E53C
    // 0x80800224: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    func_8009E53C(rdram, ctx);
        goto after_3;
    // 0x80800224: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    after_3:
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080022C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800230: jal         0x8009E55C
    // 0x80800234: lui         $a2, 0x4200
    ctx->r6 = S32(0X4200 << 16);
    func_8009E55C(rdram, ctx);
        goto after_4;
    // 0x80800234: lui         $a2, 0x4200
    ctx->r6 = S32(0X4200 << 16);
    after_4:
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080023C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800240: jal         0x8009E53C
    // 0x80800244: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_8009E53C(rdram, ctx);
        goto after_5;
    // 0x80800244: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_5:
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080024C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800250: jal         0x8009E5A4
    // 0x80800254: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8009E5A4(rdram, ctx);
        goto after_6;
    // 0x80800254: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_6:
    // 0x80800258: jal         0x8009F2A4
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F2A4(rdram, ctx);
        goto after_7;
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800264: jal         0x800A0DAC
    // 0x80800268: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0DAC(rdram, ctx);
        goto after_8;
    // 0x80800268: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800270: jal         0x80093230
    // 0x80800274: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_80093230(rdram, ctx);
        goto after_9;
    // 0x80800274: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_9:
    // 0x80800278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080027C: jal         0x80084F28
    // 0x80800280: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bamum_entrypoint_4(rdram, ctx);
        goto after_10;
    // 0x80800280: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x80800284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800288: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080028C: jal         0x800947EC
    // 0x80800290: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_11;
    // 0x80800290: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x80800294: lui         $a1, 0x4019
    ctx->r5 = S32(0X4019 << 16);
    // 0x80800298: ori         $a1, $a1, 0x9980
    ctx->r5 = ctx->r5 | 0X9980;
    // 0x8080029C: jal         0x80092864
    // 0x808002A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092864(rdram, ctx);
        goto after_12;
    // 0x808002A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808002A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808002A8:
    // 0x808002A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808002B0: jr          $ra
    // 0x808002B4: nop

    return;
    // 0x808002B4: nop

;}
RECOMP_FUNC void func_808002B8_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808002BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002C0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808002C4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808002C8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808002CC: jal         0x8008CABC
    // 0x808002D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808002D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x808002D4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x808002D8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808002DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808002E0: beq         $a1, $zero, L_80800310
    if (ctx->r5 == 0) {
        // 0x808002E4: sw          $a1, 0x15C($s1)
        MEM_W(0X15C, ctx->r17) = ctx->r5;
            goto L_80800310;
    }
    // 0x808002E4: sw          $a1, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = ctx->r5;
    // 0x808002E8: beq         $a1, $at, L_80800320
    if (ctx->r5 == ctx->r1) {
        // 0x808002EC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80800320;
    }
    // 0x808002EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808002F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808002F4: beq         $a1, $at, L_808003AC
    if (ctx->r5 == ctx->r1) {
        // 0x808002F8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_808003AC;
    }
    // 0x808002F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808002FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800300: beq         $a1, $at, L_808003EC
    if (ctx->r5 == ctx->r1) {
        // 0x80800304: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_808003EC;
    }
    // 0x80800304: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800308: b           L_80800418
    // 0x8080030C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800418;
    // 0x8080030C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800310:
    // 0x80800310: jal         0x80085230
    // 0x80800314: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _basudie_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x80800314: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80800318: b           L_80800418
    // 0x8080031C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800418;
    // 0x8080031C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800320:
    // 0x80800320: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80800324: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800328: lui         $a2, 0x4402
    ctx->r6 = S32(0X4402 << 16);
    // 0x8080032C: lui         $a3, 0xC496
    ctx->r7 = S32(0XC496 << 16);
    // 0x80800330: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800334: jal         0x80085210
    // 0x80800338: swc1        $f0, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f0.u32l;
    _basudie_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80800338: swc1        $f0, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f0.u32l;
    after_2:
    // 0x8080033C: jal         0x8008AF24
    // 0x80800340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_3;
    // 0x80800340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800348: jal         0x8008B1A0
    // 0x8080034C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_4;
    // 0x8080034C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80800350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800354: jal         0x8008AED4
    // 0x80800358: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    func_8008AED4(rdram, ctx);
        goto after_5;
    // 0x80800358: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    after_5:
    // 0x8080035C: lui         $a2, 0x3EDF
    ctx->r6 = S32(0X3EDF << 16);
    // 0x80800360: ori         $a2, $a2, 0x2E49
    ctx->r6 = ctx->r6 | 0X2E49;
    // 0x80800364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800368: jal         0x8008B1D4
    // 0x8080036C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_6;
    // 0x8080036C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x80800370: lui         $a1, 0x3FF3
    ctx->r5 = S32(0X3FF3 << 16);
    // 0x80800374: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80800378: jal         0x8008B1BC
    // 0x8080037C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_7;
    // 0x8080037C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800384: jal         0x8008B134
    // 0x80800388: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x80800388: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x8080038C: jal         0x8008B064
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_9;
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800394: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800398: addiu       $a1, $zero, 0x50E
    ctx->r5 = ADD32(0, 0X50E);
    // 0x8080039C: jal         0x8009DE38
    // 0x808003A0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_10;
    // 0x808003A0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_10:
    // 0x808003A4: b           L_80800418
    // 0x808003A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800418;
    // 0x808003A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808003AC:
    // 0x808003AC: lui         $a1, 0x3F4F
    ctx->r5 = S32(0X3F4F << 16);
    // 0x808003B0: jal         0x8008CED4
    // 0x808003B4: ori         $a1, $a1, 0xDF3B
    ctx->r5 = ctx->r5 | 0XDF3B;
    func_8008CED4(rdram, ctx);
        goto after_11;
    // 0x808003B4: ori         $a1, $a1, 0xDF3B
    ctx->r5 = ctx->r5 | 0XDF3B;
    after_11:
    // 0x808003B8: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x808003BC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808003C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808003C4: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x808003C8: jal         0x8009DF94
    // 0x808003CC: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF94(rdram, ctx);
        goto after_12;
    // 0x808003CC: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_12:
    // 0x808003D0: jal         0x80000040
    // 0x808003D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800040_bsmum(rdram, ctx);
        goto after_13;
    // 0x808003D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x808003D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808003DC: jal         0x8009BA58
    // 0x808003E0: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    func_8009BA58(rdram, ctx);
        goto after_14;
    // 0x808003E0: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    after_14:
    // 0x808003E4: b           L_80800418
    // 0x808003E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800418;
    // 0x808003E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808003EC:
    // 0x808003EC: jal         0x8008CED4
    // 0x808003F0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CED4(rdram, ctx);
        goto after_15;
    // 0x808003F0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_15:
    // 0x808003F4: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x808003F8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808003FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800400: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x80800404: jal         0x8009DF94
    // 0x80800408: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF94(rdram, ctx);
        goto after_16;
    // 0x80800408: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_16:
    // 0x8080040C: jal         0x80000040
    // 0x80800410: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800040_bsmum(rdram, ctx);
        goto after_17;
    // 0x80800410: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x80800414: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800418:
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
RECOMP_FUNC void func_80800428_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800428: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080042C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800430: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800434: jal         0x800002B8
    // 0x80800438: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_808002B8_bsmum(rdram, ctx);
        goto after_0;
    // 0x80800438: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8080043C: jal         0x8000016C
    // 0x80800440: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsmum_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800440: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080044C: jr          $ra
    // 0x80800450: nop

    return;
    // 0x80800450: nop

;}
RECOMP_FUNC void func_80800454_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800454: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080045C: jal         0x800001E0
    // 0x80800460: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bsmum_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800460: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800464: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800468: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080046C: jal         0x800002B8
    // 0x80800470: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    func_808002B8_bsmum(rdram, ctx);
        goto after_1;
    // 0x80800470: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    after_1:
    // 0x80800474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800478: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080047C: jr          $ra
    // 0x80800480: nop

    return;
    // 0x80800480: nop

;}
RECOMP_FUNC void func_80800484_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800484: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800488: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080048C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800490: jal         0x80085228
    // 0x80800494: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _basudie_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x80800494: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080049C: jal         0x8009B9B0
    // 0x808004A0: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_1;
    // 0x808004A0: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_1:
    // 0x808004A4: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x808004A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808004AC: beq         $v0, $at, L_808004CC
    if (ctx->r2 == ctx->r1) {
        // 0x808004B0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808004CC;
    }
    // 0x808004B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808004B4: beq         $v0, $at, L_808004EC
    if (ctx->r2 == ctx->r1) {
        // 0x808004B8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_808004EC;
    }
    // 0x808004B8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808004BC: beql        $v0, $at, L_80800510
    if (ctx->r2 == ctx->r1) {
        // 0x808004C0: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_80800510;
    }
    goto skip_0;
    // 0x808004C0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_0:
    // 0x808004C4: b           L_8080053C
    // 0x808004C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080053C;
    // 0x808004C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808004CC:
    // 0x808004CC: jal         0x8008E078
    // 0x808004D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_2;
    // 0x808004D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808004D4: beq         $v0, $zero, L_80800538
    if (ctx->r2 == 0) {
        // 0x808004D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800538;
    }
    // 0x808004D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004DC: jal         0x800002B8
    // 0x808004E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_808002B8_bsmum(rdram, ctx);
        goto after_3;
    // 0x808004E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x808004E4: b           L_8080053C
    // 0x808004E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080053C;
    // 0x808004E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808004EC:
    // 0x808004EC: jal         0x8008E078
    // 0x808004F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_4;
    // 0x808004F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808004F4: beq         $v0, $zero, L_80800538
    if (ctx->r2 == 0) {
        // 0x808004F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800538;
    }
    // 0x808004F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004FC: jal         0x800002B8
    // 0x80800500: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_808002B8_bsmum(rdram, ctx);
        goto after_5;
    // 0x80800500: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x80800504: b           L_8080053C
    // 0x80800508: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080053C;
    // 0x80800508: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080050C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_80800510:
    // 0x80800510: lwc1        $f0, 0x16C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800514: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80800518: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8080051C: nop

    // 0x80800520: bc1fl       L_8080053C
    if (!c1cs) {
        // 0x80800524: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8080053C;
    }
    goto skip_1;
    // 0x80800524: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80800528: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080052C: jal         0x800F0E00
    // 0x80800530: sub.s       $f14, $f0, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f4.fl;
    func_800F0E00(rdram, ctx);
        goto after_6;
    // 0x80800530: sub.s       $f14, $f0, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f4.fl;
    after_6:
    // 0x80800534: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
L_80800538:
    // 0x80800538: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080053C:
    // 0x8080053C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800540: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800544: jr          $ra
    // 0x80800548: nop

    return;
    // 0x80800548: nop

;}
RECOMP_FUNC void bsmum_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080054C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800550: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(133, 0X1140) << 16);
    // 0x80800554: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800558: jr          $ra
    // 0x8080055C: lw          $v0, 0x1140($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(133, 0X1140));
    return;
    // 0x8080055C: lw          $v0, 0x1140($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(133, 0X1140));
;}
RECOMP_FUNC void func_80800560_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800564: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800568: jal         0x80082FF0
    // 0x8080056C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x8080056C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800570: jal         0x8000016C
    // 0x80800574: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsmum_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800574: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800578: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080057C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800580: jr          $ra
    // 0x80800584: nop

    return;
    // 0x80800584: nop

;}
RECOMP_FUNC void func_80800588_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800588: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080058C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800590: jal         0x800001E0
    // 0x80800594: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bsmum_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800594: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800598: jal         0x80082FE0
    // 0x8080059C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x8080059C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808005A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808005A8: jr          $ra
    // 0x808005AC: nop

    return;
    // 0x808005AC: nop

;}
RECOMP_FUNC void func_808005B0_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005B8: jal         0x80082FE8
    // 0x808005BC: nop

    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808005BC: nop

    after_0:
    // 0x808005C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808005C8: jr          $ra
    // 0x808005CC: nop

    return;
    // 0x808005CC: nop

;}
RECOMP_FUNC void bsmum_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005D0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808005D4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(133, 0X1150) << 16);
    // 0x808005D8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808005DC: jr          $ra
    // 0x808005E0: lw          $v0, 0x1150($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(133, 0X1150));
    return;
    // 0x808005E0: lw          $v0, 0x1150($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(133, 0X1150));
;}
RECOMP_FUNC void func_808005E4_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005EC: jal         0x8000016C
    // 0x808005F0: nop

    bsmum_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808005F0: nop

    after_0:
    // 0x808005F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808005FC: jr          $ra
    // 0x80800600: nop

    return;
    // 0x80800600: nop

;}
RECOMP_FUNC void func_80800604_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800604: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800608: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080060C: jal         0x800001E0
    // 0x80800610: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    bsmum_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800610: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800614: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x80800618: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x8080061C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800620: jal         0x8008CB3C
    // 0x80800624: addiu       $a1, $zero, 0xBB
    ctx->r5 = ADD32(0, 0XBB);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80800624: addiu       $a1, $zero, 0xBB
    ctx->r5 = ADD32(0, 0XBB);
    after_1:
    // 0x80800628: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8080062C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800630: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800634: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800638: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080063C: jal         0x8009FFD8
    // 0x80800640: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800640: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x80800644: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80800648: sw          $zero, 0x15C($t7)
    MEM_W(0X15C, ctx->r15) = 0;
    // 0x8080064C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800650: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800654: jr          $ra
    // 0x80800658: nop

    return;
    // 0x80800658: nop

;}
RECOMP_FUNC void func_8080065C_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080065C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800660: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800664: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800668: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080066C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80800670: jal         0x80095738
    // 0x80800674: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095738(rdram, ctx);
        goto after_0;
    // 0x80800674: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x80800678: beq         $v0, $zero, L_80800690
    if (ctx->r2 == 0) {
        // 0x8080067C: nop
    
            goto L_80800690;
    }
    // 0x8080067C: nop

    // 0x80800680: jal         0x8009B7C0
    // 0x80800684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B7C0(rdram, ctx);
        goto after_1;
    // 0x80800684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800688: b           L_8080069C
    // 0x8080068C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080069C;
    // 0x8080068C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800690:
    // 0x80800690: jal         0x80000E64
    // 0x80800694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bsmum_entrypoint_13(rdram, ctx);
        goto after_2;
    // 0x80800694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080069C:
    // 0x8080069C: jal         0x8009BB24
    // 0x808006A0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8009BB24(rdram, ctx);
        goto after_3;
    // 0x808006A0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x808006A4: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x808006A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808006AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006B0: beq         $v0, $zero, L_808006C8
    if (ctx->r2 == 0) {
        // 0x808006B4: nop
    
            goto L_808006C8;
    }
    // 0x808006B4: nop

    // 0x808006B8: beql        $v0, $at, L_808006E0
    if (ctx->r2 == ctx->r1) {
        // 0x808006BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006E0;
    }
    goto skip_0;
    // 0x808006BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808006C0: b           L_808006E0
    // 0x808006C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808006E0;
    // 0x808006C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808006C8:
    // 0x808006C8: jal         0x8008DF8C
    // 0x808006CC: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    func_8008DF8C(rdram, ctx);
        goto after_4;
    // 0x808006CC: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_4:
    // 0x808006D0: beq         $v0, $zero, L_808006DC
    if (ctx->r2 == 0) {
        // 0x808006D4: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_808006DC;
    }
    // 0x808006D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808006D8: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_808006DC:
    // 0x808006DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808006E0:
    // 0x808006E0: jal         0x80095748
    // 0x808006E4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095748(rdram, ctx);
        goto after_5;
    // 0x808006E4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_5:
    // 0x808006E8: beq         $v0, $zero, L_8080071C
    if (ctx->r2 == 0) {
        // 0x808006EC: nop
    
            goto L_8080071C;
    }
    // 0x808006EC: nop

    // 0x808006F0: jal         0x8008E260
    // 0x808006F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_6;
    // 0x808006F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808006F8: beq         $v0, $zero, L_80800704
    if (ctx->r2 == 0) {
        // 0x808006FC: addiu       $t7, $zero, 0xEE
        ctx->r15 = ADD32(0, 0XEE);
            goto L_80800704;
    }
    // 0x808006FC: addiu       $t7, $zero, 0xEE
    ctx->r15 = ADD32(0, 0XEE);
    // 0x80800700: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_80800704:
    // 0x80800704: jal         0x8008E35C
    // 0x80800708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_7;
    // 0x80800708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080070C: beq         $v0, $zero, L_80800734
    if (ctx->r2 == 0) {
        // 0x80800710: addiu       $t8, $zero, 0xF4
        ctx->r24 = ADD32(0, 0XF4);
            goto L_80800734;
    }
    // 0x80800710: addiu       $t8, $zero, 0xF4
    ctx->r24 = ADD32(0, 0XF4);
    // 0x80800714: b           L_80800734
    // 0x80800718: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
        goto L_80800734;
    // 0x80800718: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_8080071C:
    // 0x8080071C: jal         0x8008E35C
    // 0x80800720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_8;
    // 0x80800720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800724: beq         $v0, $zero, L_80800734
    if (ctx->r2 == 0) {
        // 0x80800728: nop
    
            goto L_80800734;
    }
    // 0x80800728: nop

    // 0x8080072C: jal         0x800A046C
    // 0x80800730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A046C(rdram, ctx);
        goto after_9;
    // 0x80800730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_80800734:
    // 0x80800734: jal         0x8008E078
    // 0x80800738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_10;
    // 0x80800738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8080073C: beql        $v0, $zero, L_80800770
    if (ctx->r2 == 0) {
        // 0x80800740: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800770;
    }
    goto skip_1;
    // 0x80800740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800744: jal         0x8009FE58
    // 0x80800748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE58(rdram, ctx);
        goto after_11;
    // 0x80800748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8080074C: lui         $a3, 0x3F26
    ctx->r7 = S32(0X3F26 << 16);
    // 0x80800750: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80800754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800758: addiu       $a1, $zero, 0xBD
    ctx->r5 = ADD32(0, 0XBD);
    // 0x8080075C: jal         0x8008CD30
    // 0x80800760: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8008CD30(rdram, ctx);
        goto after_12;
    // 0x80800760: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_12:
    // 0x80800764: addiu       $t9, $zero, 0xEF
    ctx->r25 = ADD32(0, 0XEF);
    // 0x80800768: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8080076C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800770:
    // 0x80800770: jal         0x8009E5C8
    // 0x80800774: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_13;
    // 0x80800774: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_13:
    // 0x80800778: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080077C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800780: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800784: jr          $ra
    // 0x80800788: nop

    return;
    // 0x80800788: nop

;}
RECOMP_FUNC void bsmum_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080078C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800790: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(133, 0X1160) << 16);
    // 0x80800794: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800798: jr          $ra
    // 0x8080079C: lw          $v0, 0x1160($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(133, 0X1160));
    return;
    // 0x8080079C: lw          $v0, 0x1160($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(133, 0X1160));
;}
RECOMP_FUNC void func_808007A0_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808007A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808007A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808007AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808007B0: jal         0x8008CABC
    // 0x808007B4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808007B4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808007B8: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x808007BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808007C0: sltiu       $at, $v1, 0x5
    ctx->r1 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x808007C4: beq         $at, $zero, L_8080096C
    if (ctx->r1 == 0) {
        // 0x808007C8: sw          $v1, 0x15C($s0)
        MEM_W(0X15C, ctx->r16) = ctx->r3;
            goto L_8080096C;
    }
    // 0x808007C8: sw          $v1, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r3;
    // 0x808007CC: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x808007D0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(133, 0X1128) << 16);
    // 0x808007D4: addu        $at, $at, $t6
    gpr jr_addend_808007DC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x808007D8: lw          $t6, 0x1128($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(133, 0X1128));
    // 0x808007DC: jr          $t6
    // 0x808007E0: nop

    switch (jr_addend_808007DC >> 2) {
        case 0: goto L_80800964; break;
        case 1: goto L_808007E4; break;
        case 2: goto L_80800910; break;
        case 3: goto L_8080092C; break;
        case 4: goto L_80800948; break;
        default: switch_error(__func__, 0x808007DC, 0x80801128);
    }
    // 0x808007E0: nop

L_808007E4:
    // 0x808007E4: jal         0x8008AF24
    // 0x808007E8: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x808007E8: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    after_1:
    // 0x808007EC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x808007F0: jal         0x8008AED4
    // 0x808007F4: addiu       $a1, $zero, 0xBD
    ctx->r5 = ADD32(0, 0XBD);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x808007F4: addiu       $a1, $zero, 0xBD
    ctx->r5 = ADD32(0, 0XBD);
    after_2:
    // 0x808007F8: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x808007FC: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800800: jal         0x8008B1BC
    // 0x80800804: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x80800804: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x80800808: lui         $a1, 0x3E09
    ctx->r5 = S32(0X3E09 << 16);
    // 0x8080080C: ori         $a1, $a1, 0x374C
    ctx->r5 = ctx->r5 | 0X374C;
    // 0x80800810: jal         0x8008B1C8
    // 0x80800814: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B1C8(rdram, ctx);
        goto after_4;
    // 0x80800814: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_4:
    // 0x80800818: lui         $a1, 0x3E13
    ctx->r5 = S32(0X3E13 << 16);
    // 0x8080081C: ori         $a1, $a1, 0x74BC
    ctx->r5 = ctx->r5 | 0X74BC;
    // 0x80800820: jal         0x8008B24C
    // 0x80800824: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B24C(rdram, ctx);
        goto after_5;
    // 0x80800824: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_5:
    // 0x80800828: lui         $a2, 0x3F11
    ctx->r6 = S32(0X3F11 << 16);
    // 0x8080082C: ori         $a2, $a2, 0xEB85
    ctx->r6 = ctx->r6 | 0XEB85;
    // 0x80800830: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800834: jal         0x8008B1D4
    // 0x80800838: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_6;
    // 0x80800838: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x8080083C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800840: jal         0x8008B134
    // 0x80800844: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_7;
    // 0x80800844: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80800848: jal         0x8008B064
    // 0x8080084C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B064(rdram, ctx);
        goto after_8;
    // 0x8080084C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_8:
    // 0x80800850: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80800854: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080085C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800860: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800864: jal         0x8009FFD8
    // 0x80800868: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_9;
    // 0x80800868: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_9:
    // 0x8080086C: jal         0x8009EF04
    // 0x80800870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_10;
    // 0x80800870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800874: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800878: nop

    // 0x8080087C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800880: nop

    // 0x80800884: bc1t        L_808008A0
    if (c1cs) {
        // 0x80800888: nop
    
            goto L_808008A0;
    }
    // 0x80800888: nop

    // 0x8080088C: jal         0x8009EEB8
    // 0x80800890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_11;
    // 0x80800890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800894: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800898: jal         0x8009C914
    // 0x8080089C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_12;
    // 0x8080089C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
L_808008A0:
    // 0x808008A0: jal         0x8009C990
    // 0x808008A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_13;
    // 0x808008A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808008A8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808008AC: jal         0x8009B9C0
    // 0x808008B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_14;
    // 0x808008B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808008B4: jal         0x80000E64
    // 0x808008B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bsmum_entrypoint_13(rdram, ctx);
        goto after_15;
    // 0x808008B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808008BC: jal         0x8009C990
    // 0x808008C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_16;
    // 0x808008C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808008C4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x808008C8: jal         0x8009BB00
    // 0x808008CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_17;
    // 0x808008CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x808008D0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808008D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008D8: jal         0x8009BA68
    // 0x808008DC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_18;
    // 0x808008DC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_18:
    // 0x808008E0: lui         $a1, 0x4431
    ctx->r5 = S32(0X4431 << 16);
    // 0x808008E4: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x808008E8: jal         0x8009BA58
    // 0x808008EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_19;
    // 0x808008EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x808008F0: lui         $a1, 0xC4A8
    ctx->r5 = S32(0XC4A8 << 16);
    // 0x808008F4: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x808008F8: jal         0x8009BCB4
    // 0x808008FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCB4(rdram, ctx);
        goto after_20;
    // 0x808008FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80800900: jal         0x80000000
    // 0x80800904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsmum(rdram, ctx);
        goto after_21;
    // 0x80800904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800908: b           L_80800970
    // 0x8080090C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800970;
    // 0x8080090C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800910:
    // 0x80800910: lui         $a1, 0x3F1B
    ctx->r5 = S32(0X3F1B << 16);
    // 0x80800914: ori         $a1, $a1, 0x3D08
    ctx->r5 = ctx->r5 | 0X3D08;
    // 0x80800918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080091C: jal         0x8008CF1C
    // 0x80800920: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_22;
    // 0x80800920: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_22:
    // 0x80800924: b           L_80800970
    // 0x80800928: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800970;
    // 0x80800928: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8080092C:
    // 0x8080092C: lui         $a2, 0x3FA6
    ctx->r6 = S32(0X3FA6 << 16);
    // 0x80800930: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800938: jal         0x8008CF1C
    // 0x8080093C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_23;
    // 0x8080093C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_23:
    // 0x80800940: b           L_80800970
    // 0x80800944: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800970;
    // 0x80800944: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800948:
    // 0x80800948: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x8080094C: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800954: jal         0x8008CF1C
    // 0x80800958: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_24;
    // 0x80800958: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_24:
    // 0x8080095C: b           L_80800970
    // 0x80800960: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800970;
    // 0x80800960: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800964:
    // 0x80800964: jal         0x8009BC6C
    // 0x80800968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_25;
    // 0x80800968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
L_8080096C:
    // 0x8080096C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800970:
    // 0x80800970: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800974: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800978: jr          $ra
    // 0x8080097C: nop

    return;
    // 0x8080097C: nop

;}
RECOMP_FUNC void func_80800980_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800984: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800988: jal         0x8000016C
    // 0x8080098C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bsmum_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080098C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800990: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800994: jal         0x800007A0
    // 0x80800998: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_808007A0_bsmum(rdram, ctx);
        goto after_1;
    // 0x80800998: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8080099C: jal         0x8009E704
    // 0x808009A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009E704(rdram, ctx);
        goto after_2;
    // 0x808009A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808009A4: addiu       $at, $zero, 0xEF
    ctx->r1 = ADD32(0, 0XEF);
    // 0x808009A8: bne         $v0, $at, L_808009B8
    if (ctx->r2 != ctx->r1) {
        // 0x808009AC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808009B8;
    }
    // 0x808009AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808009B0: jal         0x8009B9B0
    // 0x808009B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x808009B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
L_808009B8:
    // 0x808009B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808009BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808009C0: jr          $ra
    // 0x808009C4: nop

    return;
    // 0x808009C4: nop

;}
RECOMP_FUNC void func_808009C8_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808009CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808009D0: jal         0x800001E0
    // 0x808009D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bsmum_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808009D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808009D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808009DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808009E0: jal         0x800007A0
    // 0x808009E4: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    func_808007A0_bsmum(rdram, ctx);
        goto after_1;
    // 0x808009E4: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    after_1:
    // 0x808009E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808009EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808009F0: jr          $ra
    // 0x808009F4: nop

    return;
    // 0x808009F4: nop

;}
RECOMP_FUNC void func_808009F8_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808009FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800A00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800A04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800A08: jal         0x8008CABC
    // 0x80800A0C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800A0C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x80800A10: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80800A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A18: jal         0x80095738
    // 0x80800A1C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095738(rdram, ctx);
        goto after_1;
    // 0x80800A1C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_1:
    // 0x80800A20: beq         $v0, $zero, L_80800A38
    if (ctx->r2 == 0) {
        // 0x80800A24: nop
    
            goto L_80800A38;
    }
    // 0x80800A24: nop

    // 0x80800A28: jal         0x8009B7C0
    // 0x80800A2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B7C0(rdram, ctx);
        goto after_2;
    // 0x80800A2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800A30: b           L_80800A44
    // 0x80800A34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800A44;
    // 0x80800A34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800A38:
    // 0x80800A38: jal         0x80000E64
    // 0x80800A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bsmum_entrypoint_13(rdram, ctx);
        goto after_3;
    // 0x80800A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800A40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800A44:
    // 0x80800A44: jal         0x8009BB24
    // 0x80800A48: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_4;
    // 0x80800A48: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_4:
    // 0x80800A4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A50: jal         0x80091A30
    // 0x80800A54: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_5;
    // 0x80800A54: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_5:
    // 0x80800A58: beq         $v0, $zero, L_80800A78
    if (ctx->r2 == 0) {
        // 0x80800A5C: lwc1        $f6, 0x28($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
            goto L_80800A78;
    }
    // 0x80800A5C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800A60: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800A64: nop

    // 0x80800A68: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800A6C: nop

    // 0x80800A70: bc1t        L_80800A88
    if (c1cs) {
        // 0x80800A74: nop
    
            goto L_80800A88;
    }
    // 0x80800A74: nop

L_80800A78:
    // 0x80800A78: jal         0x8008D544
    // 0x80800A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D544(rdram, ctx);
        goto after_6;
    // 0x80800A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800A80: bnel        $v0, $zero, L_80800A94
    if (ctx->r2 != 0) {
        // 0x80800A84: lw          $v0, 0x15C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X15C);
            goto L_80800A94;
    }
    goto skip_0;
    // 0x80800A84: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    skip_0:
L_80800A88:
    // 0x80800A88: jal         0x8009BC6C
    // 0x80800A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_7;
    // 0x80800A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800A90: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
L_80800A94:
    // 0x80800A94: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800A98: beq         $v0, $at, L_80800AC0
    if (ctx->r2 == ctx->r1) {
        // 0x80800A9C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800AC0;
    }
    // 0x80800A9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800AA0: beq         $v0, $at, L_80800AFC
    if (ctx->r2 == ctx->r1) {
        // 0x80800AA4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800AFC;
    }
    // 0x80800AA4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800AA8: beq         $v0, $at, L_80800B2C
    if (ctx->r2 == ctx->r1) {
        // 0x80800AAC: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80800B2C;
    }
    // 0x80800AAC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800AB0: beq         $v0, $at, L_80800B2C
    if (ctx->r2 == ctx->r1) {
        // 0x80800AB4: nop
    
            goto L_80800B2C;
    }
    // 0x80800AB4: nop

    // 0x80800AB8: b           L_80800B2C
    // 0x80800ABC: nop

        goto L_80800B2C;
    // 0x80800ABC: nop

L_80800AC0:
    // 0x80800AC0: jal         0x8008B324
    // 0x80800AC4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_8;
    // 0x80800AC4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_8:
    // 0x80800AC8: beq         $v0, $zero, L_80800AD8
    if (ctx->r2 == 0) {
        // 0x80800ACC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800AD8;
    }
    // 0x80800ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AD0: jal         0x800007A0
    // 0x80800AD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_808007A0_bsmum(rdram, ctx);
        goto after_9;
    // 0x80800AD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
L_80800AD8:
    // 0x80800AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800ADC: jal         0x8008DF8C
    // 0x80800AE0: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_10;
    // 0x80800AE0: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_10:
    // 0x80800AE4: beq         $v0, $zero, L_80800B2C
    if (ctx->r2 == 0) {
        // 0x80800AE8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800B2C;
    }
    // 0x80800AE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AEC: jal         0x800007A0
    // 0x80800AF0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_808007A0_bsmum(rdram, ctx);
        goto after_11;
    // 0x80800AF0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_11:
    // 0x80800AF4: b           L_80800B2C
    // 0x80800AF8: nop

        goto L_80800B2C;
    // 0x80800AF8: nop

L_80800AFC:
    // 0x80800AFC: jal         0x8008CAEC
    // 0x80800B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_12;
    // 0x80800B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800B04: beq         $v0, $zero, L_80800B14
    if (ctx->r2 == 0) {
        // 0x80800B08: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800B14;
    }
    // 0x80800B08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B0C: addiu       $t6, $zero, 0xE9
    ctx->r14 = ADD32(0, 0XE9);
    // 0x80800B10: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_80800B14:
    // 0x80800B14: jal         0x8008DF8C
    // 0x80800B18: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    func_8008DF8C(rdram, ctx);
        goto after_13;
    // 0x80800B18: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_13:
    // 0x80800B1C: beq         $v0, $zero, L_80800B2C
    if (ctx->r2 == 0) {
        // 0x80800B20: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800B2C;
    }
    // 0x80800B20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B24: jal         0x800007A0
    // 0x80800B28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_808007A0_bsmum(rdram, ctx);
        goto after_14;
    // 0x80800B28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_14:
L_80800B2C:
    // 0x80800B2C: jal         0x8008E260
    // 0x80800B30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_15;
    // 0x80800B30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800B34: beq         $v0, $zero, L_80800B40
    if (ctx->r2 == 0) {
        // 0x80800B38: addiu       $t7, $zero, 0xEE
        ctx->r15 = ADD32(0, 0XEE);
            goto L_80800B40;
    }
    // 0x80800B38: addiu       $t7, $zero, 0xEE
    ctx->r15 = ADD32(0, 0XEE);
    // 0x80800B3C: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_80800B40:
    // 0x80800B40: jal         0x8008E078
    // 0x80800B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_16;
    // 0x80800B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800B48: beql        $v0, $zero, L_80800B64
    if (ctx->r2 == 0) {
        // 0x80800B4C: lwc1        $f8, 0x28($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
            goto L_80800B64;
    }
    goto skip_1;
    // 0x80800B4C: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    skip_1:
    // 0x80800B50: jal         0x8009FE58
    // 0x80800B54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE58(rdram, ctx);
        goto after_17;
    // 0x80800B54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800B58: addiu       $t8, $zero, 0xEF
    ctx->r24 = ADD32(0, 0XEF);
    // 0x80800B5C: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x80800B60: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
L_80800B64:
    // 0x80800B64: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80800B68: nop

    // 0x80800B6C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80800B70: nop

    // 0x80800B74: bc1fl       L_80800B94
    if (!c1cs) {
        // 0x80800B78: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800B94;
    }
    goto skip_2;
    // 0x80800B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80800B7C: jal         0x8008E35C
    // 0x80800B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_18;
    // 0x80800B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800B84: beq         $v0, $zero, L_80800B90
    if (ctx->r2 == 0) {
        // 0x80800B88: addiu       $t9, $zero, 0xF4
        ctx->r25 = ADD32(0, 0XF4);
            goto L_80800B90;
    }
    // 0x80800B88: addiu       $t9, $zero, 0xF4
    ctx->r25 = ADD32(0, 0XF4);
    // 0x80800B8C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_80800B90:
    // 0x80800B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800B94:
    // 0x80800B94: jal         0x8009E5C8
    // 0x80800B98: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_19;
    // 0x80800B98: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_19:
    // 0x80800B9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800BA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800BA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800BA8: jr          $ra
    // 0x80800BAC: nop

    return;
    // 0x80800BAC: nop

;}
RECOMP_FUNC void bsmum_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BB0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800BB4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(133, 0X1170) << 16);
    // 0x80800BB8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800BBC: jr          $ra
    // 0x80800BC0: lw          $v0, 0x1170($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(133, 0X1170));
    return;
    // 0x80800BC0: lw          $v0, 0x1170($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(133, 0X1170));
;}
RECOMP_FUNC void func_80800BC4_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800BC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BCC: jal         0x800845D0
    // 0x80800BD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800BD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800BD4: jal         0x8000016C
    // 0x80800BD8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsmum_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800BD8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800BDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800BE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800BE4: jr          $ra
    // 0x80800BE8: nop

    return;
    // 0x80800BE8: nop

;}
RECOMP_FUNC void func_80800BEC_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800BF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BF4: jal         0x800001E0
    // 0x80800BF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bsmum_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800BF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800BFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800C00: jal         0x800845D8
    // 0x80800C04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80800C04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800C08: lui         $a2, 0x3F0E
    ctx->r6 = S32(0X3F0E << 16);
    // 0x80800C0C: ori         $a2, $a2, 0x9100
    ctx->r6 = ctx->r6 | 0X9100;
    // 0x80800C10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800C14: jal         0x800845E0
    // 0x80800C18: addiu       $a1, $zero, 0xB7
    ctx->r5 = ADD32(0, 0XB7);
    _babounce_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80800C18: addiu       $a1, $zero, 0xB7
    ctx->r5 = ADD32(0, 0XB7);
    after_2:
    // 0x80800C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C24: jr          $ra
    // 0x80800C28: nop

    return;
    // 0x80800C28: nop

;}
RECOMP_FUNC void func_80800C2C_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800C30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800C34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800C38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800C3C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80800C40: jal         0x8008CB10
    // 0x80800C44: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x80800C44: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_0:
    // 0x80800C48: beq         $v0, $zero, L_80800C58
    if (ctx->r2 == 0) {
        // 0x80800C4C: nop
    
            goto L_80800C58;
    }
    // 0x80800C4C: nop

    // 0x80800C50: jal         0x800951B4
    // 0x80800C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_1;
    // 0x80800C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_80800C58:
    // 0x80800C58: jal         0x80084600
    // 0x80800C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babounce_entrypoint_9(rdram, ctx);
        goto after_2;
    // 0x80800C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800C60: beq         $v0, $zero, L_80800C6C
    if (ctx->r2 == 0) {
        // 0x80800C64: addiu       $t6, $zero, 0xE5
        ctx->r14 = ADD32(0, 0XE5);
            goto L_80800C6C;
    }
    // 0x80800C64: addiu       $t6, $zero, 0xE5
    ctx->r14 = ADD32(0, 0XE5);
    // 0x80800C68: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800C6C:
    // 0x80800C6C: jal         0x8008E35C
    // 0x80800C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_3;
    // 0x80800C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800C74: beql        $v0, $zero, L_80800CA4
    if (ctx->r2 == 0) {
        // 0x80800C78: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800CA4;
    }
    goto skip_0;
    // 0x80800C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800C7C: jal         0x8009BB50
    // 0x80800C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_4;
    // 0x80800C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800C84: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800C88: addiu       $t7, $zero, 0xF4
    ctx->r15 = ADD32(0, 0XF4);
    // 0x80800C8C: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x80800C90: nop

    // 0x80800C94: bc1fl       L_80800CA4
    if (!c1cs) {
        // 0x80800C98: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800CA4;
    }
    goto skip_1;
    // 0x80800C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800C9C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80800CA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800CA4:
    // 0x80800CA4: jal         0x8009E5C8
    // 0x80800CA8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_5;
    // 0x80800CA8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x80800CAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800CB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800CB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800CB8: jr          $ra
    // 0x80800CBC: nop

    return;
    // 0x80800CBC: nop

;}
RECOMP_FUNC void bsmum_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CC0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800CC4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(133, 0X1180) << 16);
    // 0x80800CC8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800CCC: jr          $ra
    // 0x80800CD0: lw          $v0, 0x1180($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(133, 0X1180));
    return;
    // 0x80800CD0: lw          $v0, 0x1180($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(133, 0X1180));
;}
RECOMP_FUNC void bsmum_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800CD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800CDC: jal         0x800845D0
    // 0x80800CE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800CE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800CE4: jal         0x8000016C
    // 0x80800CE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsmum_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800CE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800CEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800CF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800CF4: jr          $ra
    // 0x80800CF8: nop

    return;
    // 0x80800CF8: nop

;}
RECOMP_FUNC void bsmum_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D04: jal         0x800001E0
    // 0x80800D08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bsmum_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800D08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D0C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800D10: jal         0x800845D8
    // 0x80800D14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80800D14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80800D18: lui         $a2, 0x3F0E
    ctx->r6 = S32(0X3F0E << 16);
    // 0x80800D1C: ori         $a2, $a2, 0x9100
    ctx->r6 = ctx->r6 | 0X9100;
    // 0x80800D20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800D24: jal         0x800845E0
    // 0x80800D28: addiu       $a1, $zero, 0xB7
    ctx->r5 = ADD32(0, 0XB7);
    _babounce_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80800D28: addiu       $a1, $zero, 0xB7
    ctx->r5 = ADD32(0, 0XB7);
    after_2:
    // 0x80800D2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D34: jr          $ra
    // 0x80800D38: nop

    return;
    // 0x80800D38: nop

;}
RECOMP_FUNC void bsmum_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800D40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D44: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800D48: jal         0x80084600
    // 0x80800D4C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _babounce_entrypoint_9(rdram, ctx);
        goto after_0;
    // 0x80800D4C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800D50: beq         $v0, $zero, L_80800D5C
    if (ctx->r2 == 0) {
        // 0x80800D54: addiu       $t6, $zero, 0xE5
        ctx->r14 = ADD32(0, 0XE5);
            goto L_80800D5C;
    }
    // 0x80800D54: addiu       $t6, $zero, 0xE5
    ctx->r14 = ADD32(0, 0XE5);
    // 0x80800D58: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80800D5C:
    // 0x80800D5C: jal         0x8008E35C
    // 0x80800D60: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008E35C(rdram, ctx);
        goto after_1;
    // 0x80800D60: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800D64: beql        $v0, $zero, L_80800D94
    if (ctx->r2 == 0) {
        // 0x80800D68: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800D94;
    }
    goto skip_0;
    // 0x80800D68: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x80800D6C: jal         0x8009BB50
    // 0x80800D70: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009BB50(rdram, ctx);
        goto after_2;
    // 0x80800D70: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800D74: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800D78: addiu       $t7, $zero, 0xF4
    ctx->r15 = ADD32(0, 0XF4);
    // 0x80800D7C: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x80800D80: nop

    // 0x80800D84: bc1fl       L_80800D94
    if (!c1cs) {
        // 0x80800D88: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800D94;
    }
    goto skip_1;
    // 0x80800D88: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    skip_1:
    // 0x80800D8C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80800D90: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_80800D94:
    // 0x80800D94: jal         0x8009E5C8
    // 0x80800D98: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x80800D98: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x80800D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800DA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800DA4: jr          $ra
    // 0x80800DA8: nop

    return;
    // 0x80800DA8: nop

;}
RECOMP_FUNC void bsmum_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DAC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800DB0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(133, 0X1190) << 16);
    // 0x80800DB4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800DB8: jr          $ra
    // 0x80800DBC: lw          $v0, 0x1190($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(133, 0X1190));
    return;
    // 0x80800DBC: lw          $v0, 0x1190($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(133, 0X1190));
;}
RECOMP_FUNC void func_80800DC0_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800DC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800DC8: jal         0x800839B8
    // 0x80800DCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80800DCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800DD0: jal         0x8000016C
    // 0x80800DD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsmum_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800DD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800DDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800DE0: jr          $ra
    // 0x80800DE4: nop

    return;
    // 0x80800DE4: nop

;}
RECOMP_FUNC void func_80800DE8_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800DEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800DF0: jal         0x800001E0
    // 0x80800DF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bsmum_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800DF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800DF8: jal         0x800839C8
    // 0x80800DFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x80800DFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800E04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800E08: jr          $ra
    // 0x80800E0C: nop

    return;
    // 0x80800E0C: nop

;}
RECOMP_FUNC void func_80800E10_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800E14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800E18: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800E1C: jal         0x800839E8
    // 0x80800E20: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x80800E20: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800E24: beq         $v0, $zero, L_80800E38
    if (ctx->r2 == 0) {
        // 0x80800E28: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80800E38;
    }
    // 0x80800E28: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800E2C: jal         0x800839B0
    // 0x80800E30: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsrest_entrypoint_13(rdram, ctx);
        goto after_1;
    // 0x80800E30: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800E34: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80800E38:
    // 0x80800E38: jal         0x8009E5C8
    // 0x80800E3C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80800E3C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800E44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800E48: jr          $ra
    // 0x80800E4C: nop

    return;
    // 0x80800E4C: nop

;}
RECOMP_FUNC void bsmum_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E50: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800E54: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(133, 0X11A0) << 16);
    // 0x80800E58: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800E5C: jr          $ra
    // 0x80800E60: lw          $v0, 0x11A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(133, 0X11A0));
    return;
    // 0x80800E60: lw          $v0, 0x11A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(133, 0X11A0));
;}
RECOMP_FUNC void bsmum_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E64: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800E68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800E6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800E70: jal         0x8009EF1C
    // 0x80800E74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x80800E74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800E78: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80800E7C: jal         0x8009EF10
    // 0x80800E80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x80800E80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800E84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E88: jal         0x8008DE24
    // 0x80800E8C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_8008DE24(rdram, ctx);
        goto after_2;
    // 0x80800E8C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_2:
    // 0x80800E90: beq         $v0, $zero, L_80800EF4
    if (ctx->r2 == 0) {
        // 0x80800E94: lw          $v1, 0x30($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X30);
            goto L_80800EF4;
    }
    // 0x80800E94: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80800E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E9C: jal         0x8008E078
    // 0x80800EA0: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    func_8008E078(rdram, ctx);
        goto after_3;
    // 0x80800EA0: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_3:
    // 0x80800EA4: beq         $v0, $zero, L_80800EF4
    if (ctx->r2 == 0) {
        // 0x80800EA8: lw          $v1, 0x30($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X30);
            goto L_80800EF4;
    }
    // 0x80800EA8: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80800EAC: bne         $v1, $zero, L_80800EC4
    if (ctx->r3 != 0) {
        // 0x80800EB0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800EC4;
    }
    // 0x80800EB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EB4: jal         0x8009B9B0
    // 0x80800EB8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800EB8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800EBC: b           L_80800F94
    // 0x80800EC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800F94;
    // 0x80800EC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800EC4:
    // 0x80800EC4: jal         0x8009EF04
    // 0x80800EC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_5;
    // 0x80800EC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800ECC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80800ED0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800ED4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800ED8: jal         0x800F1214
    // 0x80800EDC: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    func_800F1214(rdram, ctx);
        goto after_6;
    // 0x80800EDC: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    after_6:
    // 0x80800EE0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800EE4: jal         0x8009B9B0
    // 0x80800EE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_7;
    // 0x80800EE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800EEC: b           L_80800F94
    // 0x80800EF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800F94;
    // 0x80800EF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800EF4:
    // 0x80800EF4: beq         $v1, $zero, L_80800F18
    if (ctx->r3 == 0) {
        // 0x80800EF8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800F18;
    }
    // 0x80800EF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800F00: beq         $v1, $at, L_80800F28
    if (ctx->r3 == ctx->r1) {
        // 0x80800F04: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800F28;
    }
    // 0x80800F04: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800F08: beq         $v1, $at, L_80800F60
    if (ctx->r3 == ctx->r1) {
        // 0x80800F0C: nop
    
            goto L_80800F60;
    }
    // 0x80800F0C: nop

    // 0x80800F10: b           L_80800F94
    // 0x80800F14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800F94;
    // 0x80800F14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800F18:
    // 0x80800F18: jal         0x8009B9B0
    // 0x80800F1C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_8;
    // 0x80800F1C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_8:
    // 0x80800F20: b           L_80800F94
    // 0x80800F24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800F94;
    // 0x80800F24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800F28:
    // 0x80800F28: jal         0x800838B0
    // 0x80800F2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsmummove_entrypoint_2(rdram, ctx);
        goto after_9;
    // 0x80800F2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800F30: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80800F34: jal         0x800838A8
    // 0x80800F38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsmummove_entrypoint_1(rdram, ctx);
        goto after_10;
    // 0x80800F38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800F3C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800F40: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80800F44: jal         0x800F1214
    // 0x80800F48: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    func_800F1214(rdram, ctx);
        goto after_11;
    // 0x80800F48: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    after_11:
    // 0x80800F4C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800F50: jal         0x8009B9B0
    // 0x80800F54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_12;
    // 0x80800F54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800F58: b           L_80800F94
    // 0x80800F5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800F94;
    // 0x80800F5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800F60:
    // 0x80800F60: jal         0x800838A8
    // 0x80800F64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsmummove_entrypoint_1(rdram, ctx);
        goto after_13;
    // 0x80800F64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800F68: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80800F6C: jal         0x800838A0
    // 0x80800F70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsmummove_entrypoint_0(rdram, ctx);
        goto after_14;
    // 0x80800F70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800F74: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800F78: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80800F7C: jal         0x800F1214
    // 0x80800F80: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    func_800F1214(rdram, ctx);
        goto after_15;
    // 0x80800F80: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    after_15:
    // 0x80800F84: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800F88: jal         0x8009B9B0
    // 0x80800F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_16;
    // 0x80800F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800F90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800F94:
    // 0x80800F94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800F98: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800F9C: jr          $ra
    // 0x80800FA0: nop

    return;
    // 0x80800FA0: nop

;}
RECOMP_FUNC void func_80800FA4_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800FA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800FA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800FAC: jal         0x8000016C
    // 0x80800FB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bsmum_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800FB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800FB4: jal         0x800A042C
    // 0x80800FB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A042C(rdram, ctx);
        goto after_1;
    // 0x80800FB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800FBC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800FC0: jal         0x80093360
    // 0x80800FC4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80093360(rdram, ctx);
        goto after_2;
    // 0x80800FC4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800FC8: jal         0x8009E0DC
    // 0x80800FCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009E0DC(rdram, ctx);
        goto after_3;
    // 0x80800FCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80800FD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800FD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800FD8: jr          $ra
    // 0x80800FDC: nop

    return;
    // 0x80800FDC: nop

;}
RECOMP_FUNC void func_80800FE0_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800FE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800FE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800FE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800FEC: jal         0x800001E0
    // 0x80800FF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bsmum_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800FF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800FF4: lui         $a2, 0x3EB3
    ctx->r6 = S32(0X3EB3 << 16);
    // 0x80800FF8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800FFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801000: jal         0x8008CBB0
    // 0x80801004: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    func_8008CBB0(rdram, ctx);
        goto after_1;
    // 0x80801004: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    after_1:
    // 0x80801008: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8080100C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801014: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801018: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080101C: jal         0x8009FFD8
    // 0x80801020: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80801020: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x80801024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801028: jal         0x80093360
    // 0x8080102C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_80093360(rdram, ctx);
        goto after_3;
    // 0x8080102C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_3:
    // 0x80801030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801034: addiu       $a1, $zero, 0x5A3
    ctx->r5 = ADD32(0, 0X5A3);
    // 0x80801038: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8080103C: jal         0x8009DF18
    // 0x80801040: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DF18(rdram, ctx);
        goto after_4;
    // 0x80801040: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_4:
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
RECOMP_FUNC void func_80801058_bsmum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801058: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080105C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801060: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801064: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801068: jal         0x80000E64
    // 0x8080106C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    bsmum_entrypoint_13(rdram, ctx);
        goto after_0;
    // 0x8080106C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80801070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801074: jal         0x8008DF8C
    // 0x80801078: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    func_8008DF8C(rdram, ctx);
        goto after_1;
    // 0x80801078: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    after_1:
    // 0x8080107C: beq         $v0, $zero, L_80801094
    if (ctx->r2 == 0) {
        // 0x80801080: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801094;
    }
    // 0x80801080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801084: jal         0x8009BF5C
    // 0x80801088: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    func_8009BF5C(rdram, ctx);
        goto after_2;
    // 0x80801088: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_2:
    // 0x8080108C: b           L_808010B8
    // 0x80801090: nop

        goto L_808010B8;
    // 0x80801090: nop

L_80801094:
    // 0x80801094: jal         0x8009BFD8
    // 0x80801098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BFD8(rdram, ctx);
        goto after_3;
    // 0x80801098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080109C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x808010A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808010A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010A8: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x808010AC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x808010B0: jal         0x8009BF5C
    // 0x808010B4: nop

    func_8009BF5C(rdram, ctx);
        goto after_4;
    // 0x808010B4: nop

    after_4:
L_808010B8:
    // 0x808010B8: jal         0x8008E35C
    // 0x808010BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_5;
    // 0x808010BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808010C0: beq         $v0, $zero, L_808010CC
    if (ctx->r2 == 0) {
        // 0x808010C4: addiu       $t6, $zero, 0xF4
        ctx->r14 = ADD32(0, 0XF4);
            goto L_808010CC;
    }
    // 0x808010C4: addiu       $t6, $zero, 0xF4
    ctx->r14 = ADD32(0, 0XF4);
    // 0x808010C8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_808010CC:
    // 0x808010CC: jal         0x8008E078
    // 0x808010D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_6;
    // 0x808010D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808010D4: beq         $v0, $zero, L_808010E4
    if (ctx->r2 == 0) {
        // 0x808010D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808010E4;
    }
    // 0x808010D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010DC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x808010E0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_808010E4:
    // 0x808010E4: jal         0x8009E5C8
    // 0x808010E8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_7;
    // 0x808010E8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_7:
    // 0x808010EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808010F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808010F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808010F8: jr          $ra
    // 0x808010FC: nop

    return;
    // 0x808010FC: nop

;}
RECOMP_FUNC void bsmum_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801100: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801104: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(133, 0X11B0) << 16);
    // 0x80801108: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080110C: jr          $ra
    // 0x80801110: lw          $v0, 0x11B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(133, 0X11B0));
    return;
    // 0x80801110: lw          $v0, 0x11B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(133, 0X11B0));
    // 0x80801114: nop

    // 0x80801118: nop

    // 0x8080111C: nop

;}
RECOMP_FUNC void func_80800000_bsmumattack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: lbu         $a1, 0x160($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X160);
    // 0x8080000C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80800010: beq         $a1, $zero, L_80800028
    if (ctx->r5 == 0) {
        // 0x80800014: andi        $a0, $a1, 0xFF
        ctx->r4 = ctx->r5 & 0XFF;
            goto L_80800028;
    }
    // 0x80800014: andi        $a0, $a1, 0xFF
    ctx->r4 = ctx->r5 & 0XFF;
    // 0x80800018: jal         0x800C2FDC
    // 0x8080001C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x8080001C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800020: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80800024: sb          $zero, 0x160($a2)
    MEM_B(0X160, ctx->r6) = 0;
L_80800028:
    // 0x80800028: lw          $a0, 0x164($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X164);
    // 0x8080002C: beql        $a0, $zero, L_80800048
    if (ctx->r4 == 0) {
        // 0x80800030: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800048;
    }
    goto skip_0;
    // 0x80800030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800034: jal         0x800C8B84
    // 0x80800038: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800C8B84(rdram, ctx);
        goto after_1;
    // 0x80800038: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x8080003C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80800040: sw          $zero, 0x164($a2)
    MEM_W(0X164, ctx->r6) = 0;
    // 0x80800044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800048:
    // 0x80800048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080004C: jr          $ra
    // 0x80800050: nop

    return;
    // 0x80800050: nop

;}
RECOMP_FUNC void func_80800054_bsmumattack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800054: sb          $zero, 0x160($a0)
    MEM_B(0X160, ctx->r4) = 0;
    // 0x80800058: jr          $ra
    // 0x8080005C: sw          $zero, 0x164($a0)
    MEM_W(0X164, ctx->r4) = 0;
    return;
    // 0x8080005C: sw          $zero, 0x164($a0)
    MEM_W(0X164, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80800060_bsmumattack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800068: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(134, 0X6F0) << 16);
    // 0x8080006C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800070: addiu       $a2, $a2, 0x6F0
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(134, 0X6F0));
    // 0x80800074: jal         0x8009D454
    // 0x80800078: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D454(rdram, ctx);
        goto after_0;
    // 0x80800078: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8080007C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800080: jal         0x800C8A98
    // 0x80800084: sb          $v0, 0x160($t6)
    MEM_B(0X160, ctx->r14) = ctx->r2;
    func_800C8A98(rdram, ctx);
        goto after_1;
    // 0x80800084: sb          $v0, 0x160($t6)
    MEM_B(0X160, ctx->r14) = ctx->r2;
    after_1:
    // 0x80800088: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8080008C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800090: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800094: sw          $v0, 0x164($v1)
    MEM_W(0X164, ctx->r3) = ctx->r2;
    // 0x80800098: swc1        $f4, 0x16C($v1)
    MEM_W(0X16C, ctx->r3) = ctx->f4.u32l;
    // 0x8080009C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000A4: jr          $ra
    // 0x808000A8: nop

    return;
    // 0x808000A8: nop

;}
RECOMP_FUNC void func_808000AC_bsmumattack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000B4: lbu         $a2, 0x160($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X160);
    // 0x808000B8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808000BC: beql        $a2, $zero, L_808000D4
    if (ctx->r6 == 0) {
        // 0x808000C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808000D4;
    }
    goto skip_0;
    // 0x808000C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808000C4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x808000C8: jal         0x800C31DC
    // 0x808000CC: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    func_800C31DC(rdram, ctx);
        goto after_0;
    // 0x808000CC: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    after_0:
    // 0x808000D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808000D4:
    // 0x808000D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000D8: jr          $ra
    // 0x808000DC: nop

    return;
    // 0x808000DC: nop

;}
RECOMP_FUNC void func_808000E0_bsmumattack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000E0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x808000E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000EC: lw          $t6, 0x164($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X164);
    // 0x808000F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000F4: beql        $t6, $zero, L_808001A4
    if (ctx->r14 == 0) {
        // 0x808000F8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808001A4;
    }
    goto skip_0;
    // 0x808000F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808000FC: jal         0x80092C48
    // 0x80800100: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_80092C48(rdram, ctx);
        goto after_0;
    // 0x80800100: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x80800104: lw          $a0, 0x164($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X164);
    // 0x80800108: jal         0x800C8CB8
    // 0x8080010C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_800C8CB8(rdram, ctx);
        goto after_1;
    // 0x8080010C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_1:
    // 0x80800110: jal         0x8001210C
    // 0x80800114: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001210C(rdram, ctx);
        goto after_2;
    // 0x80800114: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80800118: beq         $v0, $zero, L_8080014C
    if (ctx->r2 == 0) {
        // 0x8080011C: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_8080014C;
    }
    // 0x8080011C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80800120: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80800124: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800128: lwc1        $f4, 0x16C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x8080012C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80800130: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80800134: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x80800138: nop

    // 0x8080013C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80800140: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80800144: b           L_80800170
    // 0x80800148: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
        goto L_80800170;
    // 0x80800148: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
L_8080014C:
    // 0x8080014C: lwc1        $f16, 0x16C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800150: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80800154: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80800158: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8080015C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80800160: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80800164: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x80800168: nop

    // 0x8080016C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
L_80800170:
    // 0x80800170: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80800174: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800178: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8080017C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800180: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x80800184: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80800188: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x8080018C: jal         0x800C8D4C
    // 0x80800190: lw          $a0, 0x164($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X164);
    func_800C8D4C(rdram, ctx);
        goto after_3;
    // 0x80800190: lw          $a0, 0x164($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X164);
    after_3:
    // 0x80800194: lw          $a0, 0x164($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X164);
    // 0x80800198: jal         0x800C8E84
    // 0x8080019C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_800C8E84(rdram, ctx);
        goto after_4;
    // 0x8080019C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x808001A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808001A4:
    // 0x808001A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808001A8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x808001AC: jr          $ra
    // 0x808001B0: nop

    return;
    // 0x808001B0: nop

;}
RECOMP_FUNC void func_808001B4_bsmumattack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808001C4: jal         0x8008CABC
    // 0x808001C8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808001C8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x808001CC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x808001D0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x808001D4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808001D8: beq         $a1, $zero, L_80800204
    if (ctx->r5 == 0) {
        // 0x808001DC: sw          $a1, 0x15C($a2)
        MEM_W(0X15C, ctx->r6) = ctx->r5;
            goto L_80800204;
    }
    // 0x808001DC: sw          $a1, 0x15C($a2)
    MEM_W(0X15C, ctx->r6) = ctx->r5;
    // 0x808001E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808001E4: beq         $a1, $at, L_80800218
    if (ctx->r5 == ctx->r1) {
        // 0x808001E8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800218;
    }
    // 0x808001E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808001EC: beq         $a1, $at, L_80800228
    if (ctx->r5 == ctx->r1) {
        // 0x808001F0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800228;
    }
    // 0x808001F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808001F4: beq         $a1, $at, L_808002A0
    if (ctx->r5 == ctx->r1) {
        // 0x808001F8: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_808002A0;
    }
    // 0x808001F8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x808001FC: b           L_808002D8
    // 0x80800200: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808002D8;
    // 0x80800200: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800204:
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800208: jal         0x8008B2E8
    // 0x8080020C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B2E8(rdram, ctx);
        goto after_1;
    // 0x8080020C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800210: b           L_808002D8
    // 0x80800214: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808002D8;
    // 0x80800214: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800218:
    // 0x80800218: jal         0x800853D0
    // 0x8080021C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    _bawandglow_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x8080021C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x80800220: b           L_808002D8
    // 0x80800224: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808002D8;
    // 0x80800224: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800228:
    // 0x80800228: jal         0x8008B2B4
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B2B4(rdram, ctx);
        goto after_3;
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800230: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(134, 0X6E0) << 16);
    // 0x80800234: lwc1        $f4, 0x6E0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(134, 0X6E0));
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080023C: lui         $a1, 0x3F11
    ctx->r5 = S32(0X3F11 << 16);
    // 0x80800240: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x80800244: nop

    // 0x80800248: bc1fl       L_8080025C
    if (!c1cs) {
        // 0x8080024C: lui         $a1, 0x3F11
        ctx->r5 = S32(0X3F11 << 16);
            goto L_8080025C;
    }
    goto skip_0;
    // 0x8080024C: lui         $a1, 0x3F11
    ctx->r5 = S32(0X3F11 << 16);
    skip_0:
    // 0x80800250: jal         0x8008B10C
    // 0x80800254: ori         $a1, $a1, 0xCB3
    ctx->r5 = ctx->r5 | 0XCB3;
    func_8008B10C(rdram, ctx);
        goto after_4;
    // 0x80800254: ori         $a1, $a1, 0xCB3
    ctx->r5 = ctx->r5 | 0XCB3;
    after_4:
    // 0x80800258: lui         $a1, 0x3F11
    ctx->r5 = S32(0X3F11 << 16);
L_8080025C:
    // 0x8080025C: lui         $a2, 0x3F22
    ctx->r6 = S32(0X3F22 << 16);
    // 0x80800260: ori         $a2, $a2, 0x1FF3
    ctx->r6 = ctx->r6 | 0X1FF3;
    // 0x80800264: ori         $a1, $a1, 0xCB3
    ctx->r5 = ctx->r5 | 0XCB3;
    // 0x80800268: jal         0x8008B1D4
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1D4(rdram, ctx);
        goto after_5;
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800274: jal         0x8008B134
    // 0x80800278: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8008B134(rdram, ctx);
        goto after_6;
    // 0x80800278: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x8080027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800280: jal         0x8008B2E8
    // 0x80800284: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B2E8(rdram, ctx);
        goto after_7;
    // 0x80800284: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80800288: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080028C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800290: jal         0x80085338
    // 0x80800294: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    _batimer_set(rdram, ctx);
        goto after_8;
    // 0x80800294: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_8:
    // 0x80800298: b           L_808002D8
    // 0x8080029C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808002D8;
    // 0x8080029C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808002A0:
    // 0x808002A0: jal         0x80095774
    // 0x808002A4: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    func_80095774(rdram, ctx);
        goto after_9;
    // 0x808002A4: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_9:
    // 0x808002A8: jal         0x800853E8
    // 0x808002AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bawandglow_entrypoint_7(rdram, ctx);
        goto after_10;
    // 0x808002AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_10:
    // 0x808002B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002B4: jal         0x8008B2E8
    // 0x808002B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B2E8(rdram, ctx);
        goto after_11;
    // 0x808002B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C0: jal         0x8008B134
    // 0x808002C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_12;
    // 0x808002C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x808002C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808002CC: jal         0x8008CED4
    // 0x808002D0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CED4(rdram, ctx);
        goto after_13;
    // 0x808002D0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_13:
    // 0x808002D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808002D8:
    // 0x808002D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808002E0: jr          $ra
    // 0x808002E4: nop

    return;
    // 0x808002E4: nop

;}
RECOMP_FUNC void func_808002E8_bsmumattack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808002EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808002F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808002F8: jal         0x800001B4
    // 0x808002FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_808001B4_bsmumattack(rdram, ctx);
        goto after_0;
    // 0x808002FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800304: jal         0x80084F30
    // 0x80800308: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    _bamum_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800308: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x8080030C: jal         0x80000000
    // 0x80800310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsmumattack(rdram, ctx);
        goto after_2;
    // 0x80800310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800318: jal         0x80095774
    // 0x8080031C: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    func_80095774(rdram, ctx);
        goto after_3;
    // 0x8080031C: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_3:
    // 0x80800320: jal         0x800853D8
    // 0x80800324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bawandglow_entrypoint_5(rdram, ctx);
        goto after_4;
    // 0x80800324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800328: jal         0x80083800
    // 0x8080032C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsmum_entrypoint_1(rdram, ctx);
        goto after_5;
    // 0x8080032C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800330: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800334: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800338: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080033C: jr          $ra
    // 0x80800340: nop

    return;
    // 0x80800340: nop

;}
RECOMP_FUNC void func_80800344_bsmumattack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800344: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800348: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080034C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800350: jal         0x80083808
    // 0x80800354: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bsmum_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800354: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800358: jal         0x800853E0
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bawandglow_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800360: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800364: sw          $t6, 0x168($s0)
    MEM_W(0X168, ctx->r16) = ctx->r14;
    // 0x80800368: jal         0x80000054
    // 0x8080036C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800054_bsmumattack(rdram, ctx);
        goto after_2;
    // 0x8080036C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800374: addiu       $a1, $zero, 0x9F
    ctx->r5 = ADD32(0, 0X9F);
    // 0x80800378: jal         0x8008CCBC
    // 0x8080037C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_3;
    // 0x8080037C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
    // 0x80800380: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80800384: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080038C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800390: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800394: jal         0x8009FFD8
    // 0x80800398: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_8009FFD8(rdram, ctx);
        goto after_4;
    // 0x80800398: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_4:
    // 0x8080039C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003A0: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x808003A4: jal         0x8009C99C
    // 0x808003A8: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    func_8009C99C(rdram, ctx);
        goto after_5;
    // 0x808003A8: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    after_5:
    // 0x808003AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003B0: jal         0x8009B9B0
    // 0x808003B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_6;
    // 0x808003B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x808003B8: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x808003BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003C0: jal         0x800001B4
    // 0x808003C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_808001B4_bsmumattack(rdram, ctx);
        goto after_7;
    // 0x808003C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x808003C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808003CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808003D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808003D4: jr          $ra
    // 0x808003D8: nop

    return;
    // 0x808003D8: nop

;}
RECOMP_FUNC void func_808003DC_bsmumattack(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808003E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808003E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808003E8: jal         0x8008CABC
    // 0x808003EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808003EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808003F0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x808003F4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x808003F8: lw          $v1, 0x15C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X15C);
    // 0x808003FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800400: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800404: beq         $v1, $at, L_8080042C
    if (ctx->r3 == ctx->r1) {
        // 0x80800408: lui         $a1, 0x3E19
        ctx->r5 = S32(0X3E19 << 16);
            goto L_8080042C;
    }
    // 0x80800408: lui         $a1, 0x3E19
    ctx->r5 = S32(0X3E19 << 16);
    // 0x8080040C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800410: beq         $v1, $at, L_808004F0
    if (ctx->r3 == ctx->r1) {
        // 0x80800414: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004F0;
    }
    // 0x80800414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800418: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8080041C: beq         $v1, $at, L_80800664
    if (ctx->r3 == ctx->r1) {
        // 0x80800420: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800664;
    }
    // 0x80800420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800424: b           L_8080068C
    // 0x80800428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080068C;
    // 0x80800428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080042C:
    // 0x8080042C: jal         0x8008B348
    // 0x80800430: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    func_8008B348(rdram, ctx);
        goto after_1;
    // 0x80800430: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    after_1:
    // 0x80800434: beq         $v0, $zero, L_80800444
    if (ctx->r2 == 0) {
        // 0x80800438: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800444;
    }
    // 0x80800438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080043C: jal         0x80095760
    // 0x80800440: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    func_80095760(rdram, ctx);
        goto after_2;
    // 0x80800440: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_2:
L_80800444:
    // 0x80800444: lui         $a1, 0x3E39
    ctx->r5 = S32(0X3E39 << 16);
    // 0x80800448: ori         $a1, $a1, 0xDB23
    ctx->r5 = ctx->r5 | 0XDB23;
    // 0x8080044C: jal         0x8008B348
    // 0x80800450: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B348(rdram, ctx);
        goto after_3;
    // 0x80800450: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x80800454: beq         $v0, $zero, L_8080047C
    if (ctx->r2 == 0) {
        // 0x80800458: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080047C;
    }
    // 0x80800458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080045C: addiu       $a1, $zero, 0x50D
    ctx->r5 = ADD32(0, 0X50D);
    // 0x80800460: jal         0x8009DE38
    // 0x80800464: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_4;
    // 0x80800464: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_4:
    // 0x80800468: lui         $a2, 0x3F90
    ctx->r6 = S32(0X3F90 << 16);
    // 0x8080046C: ori         $a2, $a2, 0xA3D7
    ctx->r6 = ctx->r6 | 0XA3D7;
    // 0x80800470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800474: jal         0x8009DBF0
    // 0x80800478: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    func_8009DBF0(rdram, ctx);
        goto after_5;
    // 0x80800478: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    after_5:
L_8080047C:
    // 0x8080047C: lui         $a1, 0x3EAB
    ctx->r5 = S32(0X3EAB << 16);
    // 0x80800480: ori         $a1, $a1, 0x851F
    ctx->r5 = ctx->r5 | 0X851F;
    // 0x80800484: jal         0x8008B348
    // 0x80800488: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B348(rdram, ctx);
        goto after_6;
    // 0x80800488: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x8080048C: beq         $v0, $zero, L_808004A4
    if (ctx->r2 == 0) {
        // 0x80800490: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004A4;
    }
    // 0x80800490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800494: jal         0x80084F30
    // 0x80800498: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    _bamum_entrypoint_5(rdram, ctx);
        goto after_7;
    // 0x80800498: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_7:
    // 0x8080049C: jal         0x80000060
    // 0x808004A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800060_bsmumattack(rdram, ctx);
        goto after_8;
    // 0x808004A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_808004A4:
    // 0x808004A4: lui         $a1, 0x3F11
    ctx->r5 = S32(0X3F11 << 16);
    // 0x808004A8: ori         $a1, $a1, 0xCB3
    ctx->r5 = ctx->r5 | 0XCB3;
    // 0x808004AC: jal         0x8008B348
    // 0x808004B0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B348(rdram, ctx);
        goto after_9;
    // 0x808004B0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_9:
    // 0x808004B4: beq         $v0, $zero, L_80800688
    if (ctx->r2 == 0) {
        // 0x808004B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800688;
    }
    // 0x808004B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004BC: jal         0x800919F4
    // 0x808004C0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800919F4(rdram, ctx);
        goto after_10;
    // 0x808004C0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_10:
    // 0x808004C4: beq         $v0, $zero, L_808004E0
    if (ctx->r2 == 0) {
        // 0x808004C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004E0;
    }
    // 0x808004C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004D0: jal         0x800001B4
    // 0x808004D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_808001B4_bsmumattack(rdram, ctx);
        goto after_11;
    // 0x808004D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
    // 0x808004D8: b           L_8080068C
    // 0x808004DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080068C;
    // 0x808004DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808004E0:
    // 0x808004E0: jal         0x800001B4
    // 0x808004E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_808001B4_bsmumattack(rdram, ctx);
        goto after_12;
    // 0x808004E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_12:
    // 0x808004E8: b           L_8080068C
    // 0x808004EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080068C;
    // 0x808004EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808004F0:
    // 0x808004F0: jal         0x800852F0
    // 0x808004F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_13;
    // 0x808004F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x808004F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004FC: jal         0x80085300
    // 0x80800500: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_get(rdram, ctx);
        goto after_14;
    // 0x80800500: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x80800504: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800508: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080050C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800510: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80800514: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80800518: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8080051C: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800520: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800524: jal         0x800F10B4
    // 0x80800528: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_15;
    // 0x80800528: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_15:
    // 0x8080052C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800530: jal         0x80084F30
    // 0x80800534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamum_entrypoint_5(rdram, ctx);
        goto after_16;
    // 0x80800534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800538: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080053C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800540: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800544: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80800548: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8080054C: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800550: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    // 0x80800554: jal         0x800F10B4
    // 0x80800558: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_17;
    // 0x80800558: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_17:
    // 0x8080055C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800560: jal         0x800000AC
    // 0x80800564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000AC_bsmumattack(rdram, ctx);
        goto after_18;
    // 0x80800564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800568: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080056C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800570: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800574: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80800578: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8080057C: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800580: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80800584: jal         0x800F10B4
    // 0x80800588: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_19;
    // 0x80800588: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_19:
    // 0x8080058C: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x80800590: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x80800594: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080059C: jal         0x80085308
    // 0x808005A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_isAt_falling(rdram, ctx);
        goto after_20;
    // 0x808005A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_20:
    // 0x808005A4: beql        $v0, $zero, L_808005B8
    if (ctx->r2 == 0) {
        // 0x808005A8: lui         $a2, 0x3E4C
        ctx->r6 = S32(0X3E4C << 16);
            goto L_808005B8;
    }
    goto skip_0;
    // 0x808005A8: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    skip_0:
    // 0x808005AC: jal         0x800853E8
    // 0x808005B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bawandglow_entrypoint_7(rdram, ctx);
        goto after_21;
    // 0x808005B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x808005B4: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
L_808005B8:
    // 0x808005B8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005C0: jal         0x80085308
    // 0x808005C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_isAt_falling(rdram, ctx);
        goto after_22;
    // 0x808005C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_22:
    // 0x808005C8: beq         $v0, $zero, L_808005D8
    if (ctx->r2 == 0) {
        // 0x808005CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005D8;
    }
    // 0x808005CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005D0: jal         0x80095774
    // 0x808005D4: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    func_80095774(rdram, ctx);
        goto after_23;
    // 0x808005D4: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_23:
L_808005D8:
    // 0x808005D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005DC: jal         0x80085330
    // 0x808005E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_isZero(rdram, ctx);
        goto after_24;
    // 0x808005E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_24:
    // 0x808005E4: beql        $v0, $zero, L_80800634
    if (ctx->r2 == 0) {
        // 0x808005E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800634;
    }
    goto skip_1;
    // 0x808005E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808005EC: jal         0x800DC0C0
    // 0x808005F0: nop

    func_800DC0C0(rdram, ctx);
        goto after_25;
    // 0x808005F0: nop

    after_25:
    // 0x808005F4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808005F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808005FC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800604: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80800608: addiu       $a1, $zero, 0x513
    ctx->r5 = ADD32(0, 0X513);
    // 0x8080060C: bc1f        L_80800628
    if (!c1cs) {
        // 0x80800610: nop
    
            goto L_80800628;
    }
    // 0x80800610: nop

    // 0x80800614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800618: jal         0x8009DE38
    // 0x8080061C: addiu       $a1, $zero, 0x512
    ctx->r5 = ADD32(0, 0X512);
    func_8009DE38(rdram, ctx);
        goto after_26;
    // 0x8080061C: addiu       $a1, $zero, 0x512
    ctx->r5 = ADD32(0, 0X512);
    after_26:
    // 0x80800620: b           L_80800634
    // 0x80800624: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800634;
    // 0x80800624: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800628:
    // 0x80800628: jal         0x8009DE38
    // 0x8080062C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_27;
    // 0x8080062C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_27:
    // 0x80800630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800634:
    // 0x80800634: jal         0x800919F4
    // 0x80800638: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800919F4(rdram, ctx);
        goto after_28;
    // 0x80800638: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_28:
    // 0x8080063C: beq         $v0, $zero, L_80800650
    if (ctx->r2 == 0) {
        // 0x80800640: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800650;
    }
    // 0x80800640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800644: jal         0x80085330
    // 0x80800648: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_isZero(rdram, ctx);
        goto after_29;
    // 0x80800648: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_29:
    // 0x8080064C: beq         $v0, $zero, L_80800688
    if (ctx->r2 == 0) {
        // 0x80800650: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800688;
    }
L_80800650:
    // 0x80800650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800654: jal         0x800001B4
    // 0x80800658: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_808001B4_bsmumattack(rdram, ctx);
        goto after_30;
    // 0x80800658: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_30:
    // 0x8080065C: b           L_8080068C
    // 0x80800660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080068C;
    // 0x80800660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800664:
    // 0x80800664: jal         0x80084F30
    // 0x80800668: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    _bamum_entrypoint_5(rdram, ctx);
        goto after_31;
    // 0x80800668: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_31:
    // 0x8080066C: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x80800670: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80800674: jal         0x8008B348
    // 0x80800678: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B348(rdram, ctx);
        goto after_32;
    // 0x80800678: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_32:
    // 0x8080067C: beq         $v0, $zero, L_80800688
    if (ctx->r2 == 0) {
        // 0x80800680: addiu       $t6, $zero, 0xEF
        ctx->r14 = ADD32(0, 0XEF);
            goto L_80800688;
    }
    // 0x80800680: addiu       $t6, $zero, 0xEF
    ctx->r14 = ADD32(0, 0XEF);
    // 0x80800684: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
L_80800688:
    // 0x80800688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080068C:
    // 0x8080068C: jal         0x80095738
    // 0x80800690: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    func_80095738(rdram, ctx);
        goto after_33;
    // 0x80800690: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_33:
    // 0x80800694: beq         $v0, $zero, L_808006A4
    if (ctx->r2 == 0) {
        // 0x80800698: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006A4;
    }
    // 0x80800698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080069C: jal         0x800853C8
    // 0x808006A0: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    _bawandglow_entrypoint_3(rdram, ctx);
        goto after_34;
    // 0x808006A0: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_34:
L_808006A4:
    // 0x808006A4: jal         0x800000E0
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000E0_bsmumattack(rdram, ctx);
        goto after_35;
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x808006AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006B0: jal         0x8009E5C8
    // 0x808006B4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_8009E5C8(rdram, ctx);
        goto after_36;
    // 0x808006B4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_36:
    // 0x808006B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808006BC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808006C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808006C4: jr          $ra
    // 0x808006C8: nop

    return;
    // 0x808006C8: nop

;}
RECOMP_FUNC void bsmumattack_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006CC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808006D0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(134, 0X700) << 16);
    // 0x808006D4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808006D8: jr          $ra
    // 0x808006DC: lw          $v0, 0x700($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(134, 0X700));
    return;
    // 0x808006DC: lw          $v0, 0x700($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(134, 0X700));
;}
RECOMP_FUNC void func_80800000_bsmumcast(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080000C: sltiu       $at, $a1, 0x5
    ctx->r1 = ctx->r5 < 0X5 ? 1 : 0;
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800014: beq         $at, $zero, L_80800170
    if (ctx->r1 == 0) {
        // 0x80800018: sw          $a1, 0x15C($a0)
        MEM_W(0X15C, ctx->r4) = ctx->r5;
            goto L_80800170;
    }
    // 0x80800018: sw          $a1, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = ctx->r5;
    // 0x8080001C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80800020: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(135, 0X430) << 16);
    // 0x80800024: addu        $at, $at, $t6
    gpr jr_addend_8080002C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800028: lw          $t6, 0x430($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(135, 0X430));
    // 0x8080002C: jr          $t6
    // 0x80800030: nop

    switch (jr_addend_8080002C >> 2) {
        case 0: goto L_80800170; break;
        case 1: goto L_80800034; break;
        case 2: goto L_80800080; break;
        case 3: goto L_808000B4; break;
        case 4: goto L_8080010C; break;
        default: switch_error(__func__, 0x8080002C, 0x80800430);
    }
    // 0x80800030: nop

L_80800034:
    // 0x80800034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800038: addiu       $a1, $zero, 0xFC
    ctx->r5 = ADD32(0, 0XFC);
    // 0x8080003C: jal         0x8008CCBC
    // 0x80800040: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_0;
    // 0x80800040: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_0:
    // 0x80800044: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80800048: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8080004C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800050: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800054: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800058: jal         0x8009FFD8
    // 0x8080005C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x8080005C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x80800060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800064: jal         0x8009BA9C
    // 0x80800068: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_2;
    // 0x80800068: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8080006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800070: jal         0x8009B9B0
    // 0x80800074: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80800074: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800078: b           L_80800174
    // 0x8080007C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800174;
    // 0x8080007C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800080:
    // 0x80800080: lui         $a2, 0x3FDA
    ctx->r6 = S32(0X3FDA << 16);
    // 0x80800084: ori         $a2, $a2, 0xE148
    ctx->r6 = ctx->r6 | 0XE148;
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080008C: jal         0x8008CB3C
    // 0x80800090: addiu       $a1, $zero, 0x4A1
    ctx->r5 = ADD32(0, 0X4A1);
    func_8008CB3C(rdram, ctx);
        goto after_4;
    // 0x80800090: addiu       $a1, $zero, 0x4A1
    ctx->r5 = ADD32(0, 0X4A1);
    after_4:
    // 0x80800094: jal         0x8009EAA0
    // 0x80800098: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8009EAA0(rdram, ctx);
        goto after_5;
    // 0x80800098: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x8080009C: jal         0x800FC6B0
    // 0x808000A0: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    func_800FC6B0(rdram, ctx);
        goto after_6;
    // 0x808000A0: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    after_6:
    // 0x808000A4: jal         0x800DA544
    // 0x808000A8: addiu       $a0, $zero, 0x9DE
    ctx->r4 = ADD32(0, 0X9DE);
    func_800DA544(rdram, ctx);
        goto after_7;
    // 0x808000A8: addiu       $a0, $zero, 0x9DE
    ctx->r4 = ADD32(0, 0X9DE);
    after_7:
    // 0x808000AC: b           L_80800174
    // 0x808000B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800174;
    // 0x808000B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808000B4:
    // 0x808000B4: addiu       $a0, $zero, 0x9DF
    ctx->r4 = ADD32(0, 0X9DF);
    // 0x808000B8: jal         0x800DA3B8
    // 0x808000BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800DA3B8(rdram, ctx);
        goto after_8;
    // 0x808000BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C4: addiu       $a1, $zero, 0xFB
    ctx->r5 = ADD32(0, 0XFB);
    // 0x808000C8: jal         0x8008CCBC
    // 0x808000CC: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_9;
    // 0x808000CC: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_9:
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D4: addiu       $a1, $zero, 0x3FE
    ctx->r5 = ADD32(0, 0X3FE);
    // 0x808000D8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808000DC: jal         0x8009DB04
    // 0x808000E0: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DB04(rdram, ctx);
        goto after_10;
    // 0x808000E0: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_10:
    // 0x808000E4: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    // 0x808000E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808000EC: jal         0x800FCAE0
    // 0x808000F0: addiu       $a2, $zero, 0x708
    ctx->r6 = ADD32(0, 0X708);
    func_800FCAE0(rdram, ctx);
        goto after_11;
    // 0x808000F0: addiu       $a2, $zero, 0x708
    ctx->r6 = ADD32(0, 0X708);
    after_11:
    // 0x808000F4: jal         0x800FCA90
    // 0x808000F8: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    func_800FCA90(rdram, ctx);
        goto after_12;
    // 0x808000F8: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    after_12:
    // 0x808000FC: jal         0x8009EAA0
    // 0x80800100: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8009EAA0(rdram, ctx);
        goto after_13;
    // 0x80800100: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x80800104: b           L_80800174
    // 0x80800108: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800174;
    // 0x80800108: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8080010C:
    // 0x8080010C: lui         $a3, 0x3F7F
    ctx->r7 = S32(0X3F7F << 16);
    // 0x80800110: ori         $a3, $a3, 0xF972
    ctx->r7 = ctx->r7 | 0XF972;
    // 0x80800114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800118: addiu       $a1, $zero, 0xFC
    ctx->r5 = ADD32(0, 0XFC);
    // 0x8080011C: jal         0x8008CE3C
    // 0x80800120: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8008CE3C(rdram, ctx);
        goto after_14;
    // 0x80800120: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_14:
    // 0x80800124: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80800128: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800130: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800134: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800138: jal         0x8009FFD8
    // 0x8080013C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_15;
    // 0x8080013C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_15:
    // 0x80800140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800144: jal         0x8009BA9C
    // 0x80800148: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_16;
    // 0x80800148: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x8080014C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800150: jal         0x8009B9B0
    // 0x80800154: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_17;
    // 0x80800154: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_17:
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080015C: jal         0x800A0DAC
    // 0x80800160: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0DAC(rdram, ctx);
        goto after_18;
    // 0x80800160: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800168: jal         0x800A0DA0
    // 0x8080016C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0DA0(rdram, ctx);
        goto after_19;
    // 0x8080016C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
L_80800170:
    // 0x80800170: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800174:
    // 0x80800174: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800178: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080017C: jr          $ra
    // 0x80800180: nop

    return;
    // 0x80800180: nop

;}
RECOMP_FUNC void bsmumcast_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800184: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080018C: jal         0x8008E95C
    // 0x80800190: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008E95C(rdram, ctx);
        goto after_0;
    // 0x80800190: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800194: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800198: jal         0x800A0DA0
    // 0x8080019C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0DA0(rdram, ctx);
        goto after_1;
    // 0x8080019C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x808001A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001A4: jal         0x800A0DAC
    // 0x808001A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0DAC(rdram, ctx);
        goto after_2;
    // 0x808001A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x808001AC: jal         0x80083800
    // 0x808001B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsmum_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x808001B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x808001B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001BC: jr          $ra
    // 0x808001C0: nop

    return;
    // 0x808001C0: nop

;}
RECOMP_FUNC void bsmumcast_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808001C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001D0: jal         0x80083808
    // 0x808001D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bsmum_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808001D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808001D8: jal         0x8008E944
    // 0x808001DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_1;
    // 0x808001DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E4: jal         0x80099A7C
    // 0x808001E8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80099A7C(rdram, ctx);
        goto after_2;
    // 0x808001E8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F0: jal         0x800A00CC
    // 0x808001F4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800A00CC(rdram, ctx);
        goto after_3;
    // 0x808001F4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x808001F8: jal         0x8009EA20
    // 0x808001FC: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    func_8009EA20(rdram, ctx);
        goto after_4;
    // 0x808001FC: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    after_4:
    // 0x80800200: beq         $v0, $zero, L_8080021C
    if (ctx->r2 == 0) {
        // 0x80800204: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080021C;
    }
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080020C: jal         0x80000000
    // 0x80800210: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80800000_bsmumcast(rdram, ctx);
        goto after_5;
    // 0x80800210: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x80800214: b           L_80800228
    // 0x80800218: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800228;
    // 0x80800218: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080021C:
    // 0x8080021C: jal         0x80000000
    // 0x80800220: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800000_bsmumcast(rdram, ctx);
        goto after_6;
    // 0x80800220: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x80800224: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800228:
    // 0x80800228: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080022C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800230: jr          $ra
    // 0x80800234: nop

    return;
    // 0x80800234: nop

;}
RECOMP_FUNC void bsmumcast_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800238: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080023C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800240: jal         0x8009E6EC
    // 0x80800244: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800244: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800248: slti        $at, $v0, 0x26
    ctx->r1 = SIGNED(ctx->r2) < 0X26 ? 1 : 0;
    // 0x8080024C: bne         $at, $zero, L_80800268
    if (ctx->r1 != 0) {
        // 0x80800250: addiu       $t6, $v0, -0x15
        ctx->r14 = ADD32(ctx->r2, -0X15);
            goto L_80800268;
    }
    // 0x80800250: addiu       $t6, $v0, -0x15
    ctx->r14 = ADD32(ctx->r2, -0X15);
    // 0x80800254: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x80800258: beql        $v0, $at, L_80800294
    if (ctx->r2 == ctx->r1) {
        // 0x8080025C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800294;
    }
    goto skip_0;
    // 0x8080025C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800260: b           L_80800288
    // 0x80800264: nop

        goto L_80800288;
    // 0x80800264: nop

L_80800268:
    // 0x80800268: sltiu       $at, $t6, 0x11
    ctx->r1 = ctx->r14 < 0X11 ? 1 : 0;
    // 0x8080026C: beq         $at, $zero, L_80800288
    if (ctx->r1 == 0) {
        // 0x80800270: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80800288;
    }
    // 0x80800270: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800274: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(135, 0X444) << 16);
    // 0x80800278: addu        $at, $at, $t6
    gpr jr_addend_80800280 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8080027C: lw          $t6, 0x444($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(135, 0X444));
    // 0x80800280: jr          $t6
    // 0x80800284: nop

    switch (jr_addend_80800280 >> 2) {
        case 0: goto L_80800290; break;
        case 1: goto L_80800288; break;
        case 2: goto L_80800288; break;
        case 3: goto L_80800288; break;
        case 4: goto L_80800288; break;
        case 5: goto L_80800288; break;
        case 6: goto L_80800288; break;
        case 7: goto L_80800290; break;
        case 8: goto L_80800290; break;
        case 9: goto L_80800290; break;
        case 10: goto L_80800288; break;
        case 11: goto L_80800288; break;
        case 12: goto L_80800288; break;
        case 13: goto L_80800288; break;
        case 14: goto L_80800288; break;
        case 15: goto L_80800288; break;
        case 16: goto L_80800290; break;
        default: switch_error(__func__, 0x80800280, 0x80800444);
    }
    // 0x80800284: nop

L_80800288:
    // 0x80800288: jal         0x80099B94
    // 0x8080028C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80099B94(rdram, ctx);
        goto after_1;
    // 0x8080028C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
L_80800290:
    // 0x80800290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800294:
    // 0x80800294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800298: jr          $ra
    // 0x8080029C: nop

    return;
    // 0x8080029C: nop

;}
RECOMP_FUNC void bsmumcast_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x808002B0: lw          $t6, 0x15C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X15C);
    // 0x808002B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808002B8: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x808002BC: beq         $at, $zero, L_808003F0
    if (ctx->r1 == 0) {
        // 0x808002C0: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_808003F0;
    }
    // 0x808002C0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x808002C4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(135, 0X488) << 16);
    // 0x808002C8: addu        $at, $at, $t6
    gpr jr_addend_808002D0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x808002CC: lw          $t6, 0x488($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(135, 0X488));
    // 0x808002D0: jr          $t6
    // 0x808002D4: nop

    switch (jr_addend_808002D0 >> 2) {
        case 0: goto L_808003F0; break;
        case 1: goto L_808002D8; break;
        case 2: goto L_80800340; break;
        case 3: goto L_80800360; break;
        case 4: goto L_808003E4; break;
        default: switch_error(__func__, 0x808002D0, 0x80800488);
    }
    // 0x808002D4: nop

L_808002D8:
    // 0x808002D8: jal         0x8008CAEC
    // 0x808002DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_0;
    // 0x808002DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x808002E0: beq         $v0, $zero, L_808002F0
    if (ctx->r2 == 0) {
        // 0x808002E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002F0;
    }
    // 0x808002E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002E8: jal         0x80000000
    // 0x808002EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800000_bsmumcast(rdram, ctx);
        goto after_1;
    // 0x808002EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
L_808002F0:
    // 0x808002F0: lui         $a1, 0x3EB8
    ctx->r5 = S32(0X3EB8 << 16);
    // 0x808002F4: ori         $a1, $a1, 0xBAC7
    ctx->r5 = ctx->r5 | 0XBAC7;
    // 0x808002F8: jal         0x8008CB10
    // 0x808002FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x808002FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800300: beq         $v0, $zero, L_8080031C
    if (ctx->r2 == 0) {
        // 0x80800304: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080031C;
    }
    // 0x80800304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800308: jal         0x800A0DAC
    // 0x8080030C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0DAC(rdram, ctx);
        goto after_3;
    // 0x8080030C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800314: jal         0x800A0DA0
    // 0x80800318: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0DA0(rdram, ctx);
        goto after_4;
    // 0x80800318: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_8080031C:
    // 0x8080031C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800320: jal         0x8008CB10
    // 0x80800324: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8008CB10(rdram, ctx);
        goto after_5;
    // 0x80800324: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_5:
    // 0x80800328: beql        $v0, $zero, L_808003F4
    if (ctx->r2 == 0) {
        // 0x8080032C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003F4;
    }
    goto skip_0;
    // 0x8080032C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800330: jal         0x80086C90
    // 0x80800334: nop

    _chjujubagfx_entrypoint_2(rdram, ctx);
        goto after_6;
    // 0x80800334: nop

    after_6:
    // 0x80800338: b           L_808003F4
    // 0x8080033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808003F4;
    // 0x8080033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800340:
    // 0x80800340: jal         0x800DA298
    // 0x80800344: addiu       $a0, $zero, 0x9DF
    ctx->r4 = ADD32(0, 0X9DF);
    func_800DA298(rdram, ctx);
        goto after_7;
    // 0x80800344: addiu       $a0, $zero, 0x9DF
    ctx->r4 = ADD32(0, 0X9DF);
    after_7:
    // 0x80800348: beq         $v0, $zero, L_808003F0
    if (ctx->r2 == 0) {
        // 0x8080034C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003F0;
    }
    // 0x8080034C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800350: jal         0x80000000
    // 0x80800354: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80800000_bsmumcast(rdram, ctx);
        goto after_8;
    // 0x80800354: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x80800358: b           L_808003F4
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808003F4;
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800360:
    // 0x80800360: lui         $a1, 0x3EB8
    ctx->r5 = S32(0X3EB8 << 16);
    // 0x80800364: ori         $a1, $a1, 0xBAC7
    ctx->r5 = ctx->r5 | 0XBAC7;
    // 0x80800368: jal         0x8008CB10
    // 0x8080036C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_9;
    // 0x8080036C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800370: beq         $v0, $zero, L_8080038C
    if (ctx->r2 == 0) {
        // 0x80800374: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080038C;
    }
    // 0x80800374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800378: jal         0x800A0DAC
    // 0x8080037C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0DAC(rdram, ctx);
        goto after_10;
    // 0x8080037C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x80800380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800384: jal         0x800A0DA0
    // 0x80800388: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0DA0(rdram, ctx);
        goto after_11;
    // 0x80800388: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
L_8080038C:
    // 0x8080038C: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80800390: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800394: jal         0x8008CB10
    // 0x80800398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_12;
    // 0x80800398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8080039C: beq         $v0, $zero, L_808003AC
    if (ctx->r2 == 0) {
        // 0x808003A0: nop
    
            goto L_808003AC;
    }
    // 0x808003A0: nop

    // 0x808003A4: jal         0x800DA544
    // 0x808003A8: addiu       $a0, $zero, 0x9F3
    ctx->r4 = ADD32(0, 0X9F3);
    func_800DA544(rdram, ctx);
        goto after_13;
    // 0x808003A8: addiu       $a0, $zero, 0x9F3
    ctx->r4 = ADD32(0, 0X9F3);
    after_13:
L_808003AC:
    // 0x808003AC: jal         0x8008CAEC
    // 0x808003B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_14;
    // 0x808003B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808003B4: beql        $v0, $zero, L_808003F4
    if (ctx->r2 == 0) {
        // 0x808003B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003F4;
    }
    goto skip_1;
    // 0x808003B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808003BC: jal         0x8008E124
    // 0x808003C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E124(rdram, ctx);
        goto after_15;
    // 0x808003C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808003C4: beq         $v0, $zero, L_808003DC
    if (ctx->r2 == 0) {
        // 0x808003C8: addiu       $t7, $zero, 0xE5
        ctx->r15 = ADD32(0, 0XE5);
            goto L_808003DC;
    }
    // 0x808003C8: addiu       $t7, $zero, 0xE5
    ctx->r15 = ADD32(0, 0XE5);
    // 0x808003CC: jal         0x80084740
    // 0x808003D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badata_entrypoint_32(rdram, ctx);
        goto after_16;
    // 0x808003D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808003D4: b           L_808003F0
    // 0x808003D8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
        goto L_808003F0;
    // 0x808003D8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_808003DC:
    // 0x808003DC: b           L_808003F0
    // 0x808003E0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
        goto L_808003F0;
    // 0x808003E0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_808003E4:
    // 0x808003E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003E8: jal         0x80000000
    // 0x808003EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80800000_bsmumcast(rdram, ctx);
        goto after_17;
    // 0x808003EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_17:
L_808003F0:
    // 0x808003F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808003F4:
    // 0x808003F4: jal         0x8009E5C8
    // 0x808003F8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_18;
    // 0x808003F8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_18:
    // 0x808003FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800400: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800408: jr          $ra
    // 0x8080040C: nop

    return;
    // 0x8080040C: nop

;}
RECOMP_FUNC void bsmumcast_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800410: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800414: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(135, 0X4A0) << 16);
    // 0x80800418: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080041C: jr          $ra
    // 0x80800420: lw          $v0, 0x4A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(135, 0X4A0));
    return;
    // 0x80800420: lw          $v0, 0x4A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(135, 0X4A0));
    // 0x80800424: nop

    // 0x80800428: nop

    // 0x8080042C: nop

;}
RECOMP_FUNC void bsmummove_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80800004: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800008: jr          $ra
    // 0x8080000C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8080000C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bsmummove_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800010: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80800014: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800018: jr          $ra
    // 0x8080001C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8080001C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bsmummove_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800020: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80800024: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800028: jr          $ra
    // 0x8080002C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8080002C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80800030_bsmummove(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800034: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800038: jal         0x80083800
    // 0x8080003C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsmum_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080003C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800040: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800044: jal         0x8009BF5C
    // 0x80800048: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_1;
    // 0x80800048: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x8080004C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800050: jal         0x8009C4CC
    // 0x80800054: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_2;
    // 0x80800054: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080005C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800060: jr          $ra
    // 0x80800064: nop

    return;
    // 0x80800064: nop

;}
RECOMP_FUNC void func_80800068_bsmummove(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800068: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8080006C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800070: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80800074: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800078: jal         0x8008CABC
    // 0x8080007C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080007C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    after_0:
    // 0x80800080: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80800084: jal         0x80083808
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsmum_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080008C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800094: jal         0x8009E710
    // 0x80800098: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_8009E710(rdram, ctx);
        goto after_2;
    // 0x80800098: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x8080009C: addiu       $at, $zero, 0xE6
    ctx->r1 = ADD32(0, 0XE6);
    // 0x808000A0: bne         $v0, $at, L_808000F0
    if (ctx->r2 != ctx->r1) {
        // 0x808000A4: nop
    
            goto L_808000F0;
    }
    // 0x808000A4: nop

    // 0x808000A8: jal         0x8008CAC8
    // 0x808000AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_3;
    // 0x808000AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808000B0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x808000B4: jal         0x8009BB5C
    // 0x808000B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_4;
    // 0x808000B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808000BC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x808000C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808000C4: nop

    // 0x808000C8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x808000CC: nop

    // 0x808000D0: bc1f        L_808000F0
    if (!c1cs) {
        // 0x808000D4: nop
    
            goto L_808000F0;
    }
    // 0x808000D4: nop

    // 0x808000D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808000E4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808000E8: jal         0x800849E0
    // 0x808000EC: nop

    _badust_entrypoint_3(rdram, ctx);
        goto after_5;
    // 0x808000EC: nop

    after_5:
L_808000F0:
    // 0x808000F0: jal         0x8008AF24
    // 0x808000F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008AF24(rdram, ctx);
        goto after_6;
    // 0x808000F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x808000F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808000FC: jal         0x8008AED4
    // 0x80800100: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    func_8008AED4(rdram, ctx);
        goto after_7;
    // 0x80800100: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    after_7:
    // 0x80800104: lui         $a1, 0x3F28
    ctx->r5 = S32(0X3F28 << 16);
    // 0x80800108: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    // 0x8080010C: jal         0x8008B1BC
    // 0x80800110: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_8;
    // 0x80800110: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x80800114: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80800118: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8080011C: jal         0x8008B1C8
    // 0x80800120: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B1C8(rdram, ctx);
        goto after_9;
    // 0x80800120: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x80800124: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800128: jal         0x8008B24C
    // 0x8080012C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8008B24C(rdram, ctx);
        goto after_10;
    // 0x8080012C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_10:
    // 0x80800130: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800134: jal         0x8008B134
    // 0x80800138: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_11;
    // 0x80800138: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
    // 0x8080013C: jal         0x8008B064
    // 0x80800140: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B064(rdram, ctx);
        goto after_12;
    // 0x80800140: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x80800144: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800148: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080014C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800150: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800154: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800158: jal         0x8009FFD8
    // 0x8080015C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_13;
    // 0x8080015C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_13:
    // 0x80800160: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800164: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080016C: jal         0x8008C9BC
    // 0x80800170: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_14;
    // 0x80800170: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_14:
    // 0x80800174: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(136, 0X5A0) << 16);
    // 0x80800178: lwc1        $f8, 0x5A0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(136, 0X5A0));
    // 0x8080017C: lui         $a3, 0x3F26
    ctx->r7 = S32(0X3F26 << 16);
    // 0x80800180: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80800184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800188: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    // 0x8080018C: lui         $a2, 0x4416
    ctx->r6 = S32(0X4416 << 16);
    // 0x80800190: jal         0x8008C9F0
    // 0x80800194: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_15;
    // 0x80800194: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_15:
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080019C: jal         0x8008CA30
    // 0x808001A0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CA30(rdram, ctx);
        goto after_16;
    // 0x808001A0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_16:
    // 0x808001A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A8: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x808001AC: jal         0x8009BFE4
    // 0x808001B0: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_17;
    // 0x808001B0: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_17:
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B8: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x808001BC: jal         0x8009C554
    // 0x808001C0: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009C554(rdram, ctx);
        goto after_18;
    // 0x808001C0: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_18:
    // 0x808001C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808001C8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x808001CC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808001D0: jr          $ra
    // 0x808001D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x808001D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_808001D8_bsmummove(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001E0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808001E4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808001E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001EC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x808001F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808001F4: jal         0x8009D2F0
    // 0x808001F8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009D2F0(rdram, ctx);
        goto after_0;
    // 0x808001F8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_0:
    // 0x808001FC: lui         $a1, 0x3EF0
    ctx->r5 = S32(0X3EF0 << 16);
    // 0x80800200: ori         $a1, $a1, 0xA3D7
    ctx->r5 = ctx->r5 | 0XA3D7;
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800208: jal         0x800A2CE8
    // 0x8080020C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_1;
    // 0x8080020C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x80800210: lui         $a1, 0x3F78
    ctx->r5 = S32(0X3F78 << 16);
    // 0x80800214: ori         $a1, $a1, 0x51EC
    ctx->r5 = ctx->r5 | 0X51EC;
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080021C: jal         0x800A2CE8
    // 0x80800220: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_2;
    // 0x80800220: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x80800224: jal         0x80083860
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsmum_entrypoint_13(rdram, ctx);
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
    // 0x80800234: beq         $v0, $zero, L_8080024C
    if (ctx->r2 == 0) {
        // 0x80800238: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8080024C;
    }
    // 0x80800238: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080023C: beq         $v0, $at, L_80800268
    if (ctx->r2 == ctx->r1) {
        // 0x80800240: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800268;
    }
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800244: b           L_8080027C
    // 0x80800248: nop

        goto L_8080027C;
    // 0x80800248: nop

L_8080024C:
    // 0x8080024C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800250: jal         0x8009BCD4
    // 0x80800254: lui         $a1, 0x4190
    ctx->r5 = S32(0X4190 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_5;
    // 0x80800254: lui         $a1, 0x4190
    ctx->r5 = S32(0X4190 << 16);
    after_5:
    // 0x80800258: beq         $v0, $zero, L_8080027C
    if (ctx->r2 == 0) {
        // 0x8080025C: nop
    
            goto L_8080027C;
    }
    // 0x8080025C: nop

    // 0x80800260: b           L_8080027C
    // 0x80800264: addiu       $s1, $zero, 0xE5
    ctx->r17 = ADD32(0, 0XE5);
        goto L_8080027C;
    // 0x80800264: addiu       $s1, $zero, 0xE5
    ctx->r17 = ADD32(0, 0XE5);
L_80800268:
    // 0x80800268: jal         0x8009BCD4
    // 0x8080026C: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_6;
    // 0x8080026C: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    after_6:
    // 0x80800270: beq         $v0, $zero, L_8080027C
    if (ctx->r2 == 0) {
        // 0x80800274: nop
    
            goto L_8080027C;
    }
    // 0x80800274: nop

    // 0x80800278: addiu       $s1, $zero, 0xE6
    ctx->r17 = ADD32(0, 0XE6);
L_8080027C:
    // 0x8080027C: jal         0x8008DD04
    // 0x80800280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_7;
    // 0x80800280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800284: beq         $v0, $zero, L_80800290
    if (ctx->r2 == 0) {
        // 0x80800288: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800290;
    }
    // 0x80800288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080028C: addiu       $s1, $zero, 0xE9
    ctx->r17 = ADD32(0, 0XE9);
L_80800290:
    // 0x80800290: jal         0x80091A58
    // 0x80800294: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_8;
    // 0x80800294: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_8:
    // 0x80800298: beq         $v0, $zero, L_808002A4
    if (ctx->r2 == 0) {
        // 0x8080029C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002A4;
    }
    // 0x8080029C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002A0: addiu       $s1, $zero, 0xF7
    ctx->r17 = ADD32(0, 0XF7);
L_808002A4:
    // 0x808002A4: jal         0x80091A58
    // 0x808002A8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_9;
    // 0x808002A8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_9:
    // 0x808002AC: beq         $v0, $zero, L_808002B8
    if (ctx->r2 == 0) {
        // 0x808002B0: nop
    
            goto L_808002B8;
    }
    // 0x808002B0: nop

    // 0x808002B4: addiu       $s1, $zero, 0xE8
    ctx->r17 = ADD32(0, 0XE8);
L_808002B8:
    // 0x808002B8: jal         0x8008E148
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_10;
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808002C0: beq         $v0, $zero, L_808002D4
    if (ctx->r2 == 0) {
        // 0x808002C4: nop
    
            goto L_808002D4;
    }
    // 0x808002C4: nop

    // 0x808002C8: jal         0x800848B0
    // 0x808002CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_11;
    // 0x808002CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808002D0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_808002D4:
    // 0x808002D4: jal         0x8008E35C
    // 0x808002D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_12;
    // 0x808002D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808002DC: beq         $v0, $zero, L_808002E8
    if (ctx->r2 == 0) {
        // 0x808002E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002E8;
    }
    // 0x808002E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002E4: addiu       $s1, $zero, 0xF0
    ctx->r17 = ADD32(0, 0XF0);
L_808002E8:
    // 0x808002E8: jal         0x8009E5C8
    // 0x808002EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_13;
    // 0x808002EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_13:
    // 0x808002F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808002F4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808002F8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808002FC: jr          $ra
    // 0x80800300: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800300: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bsmummove_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800304: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800308: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(136, 0X5B0) << 16);
    // 0x8080030C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800310: jr          $ra
    // 0x80800314: lw          $v0, 0x5B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(136, 0X5B0));
    return;
    // 0x80800314: lw          $v0, 0x5B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(136, 0X5B0));
;}
RECOMP_FUNC void func_80800318_bsmummove(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080031C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800320: jal         0x80083800
    // 0x80800324: nop

    _bsmum_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800324: nop

    after_0:
    // 0x80800328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080032C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800330: jr          $ra
    // 0x80800334: nop

    return;
    // 0x80800334: nop

;}
RECOMP_FUNC void func_80800338_bsmummove(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800338: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8080033C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800340: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800344: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800348: jal         0x8008CABC
    // 0x8080034C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080034C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800350: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800354: jal         0x80083808
    // 0x80800358: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _bsmum_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800358: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x8080035C: jal         0x8009E710
    // 0x80800360: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009E710(rdram, ctx);
        goto after_2;
    // 0x80800360: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80800364: addiu       $at, $zero, 0xE7
    ctx->r1 = ADD32(0, 0XE7);
    // 0x80800368: bnel        $v0, $at, L_80800384
    if (ctx->r2 != ctx->r1) {
        // 0x8080036C: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_80800384;
    }
    goto skip_0;
    // 0x8080036C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_0:
    // 0x80800370: jal         0x8008CAC8
    // 0x80800374: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_3;
    // 0x80800374: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x80800378: b           L_8080038C
    // 0x8080037C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
        goto L_8080038C;
    // 0x8080037C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80800380: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_80800384:
    // 0x80800384: nop

    // 0x80800388: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
L_8080038C:
    // 0x8080038C: jal         0x8008AF24
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_4;
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800398: jal         0x8008AED4
    // 0x8080039C: addiu       $a1, $zero, 0xB3
    ctx->r5 = ADD32(0, 0XB3);
    func_8008AED4(rdram, ctx);
        goto after_5;
    // 0x8080039C: addiu       $a1, $zero, 0xB3
    ctx->r5 = ADD32(0, 0XB3);
    after_5:
    // 0x808003A0: lui         $a1, 0x3EDC
    ctx->r5 = S32(0X3EDC << 16);
    // 0x808003A4: ori         $a1, $a1, 0x28F6
    ctx->r5 = ctx->r5 | 0X28F6;
    // 0x808003A8: jal         0x8008B1BC
    // 0x808003AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_6;
    // 0x808003AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808003B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003B4: jal         0x8008B24C
    // 0x808003B8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8008B24C(rdram, ctx);
        goto after_7;
    // 0x808003B8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_7:
    // 0x808003BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003C0: jal         0x8008B134
    // 0x808003C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x808003C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x808003C8: jal         0x8008B064
    // 0x808003CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_9;
    // 0x808003CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808003D0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808003D4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808003D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808003DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808003E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808003E4: jal         0x8009FFD8
    // 0x808003E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_10;
    // 0x808003E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x808003EC: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x808003F0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808003F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808003F8: jal         0x8008C9BC
    // 0x808003FC: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_11;
    // 0x808003FC: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_11:
    // 0x80800400: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800404: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800408: lui         $a3, 0x3F66
    ctx->r7 = S32(0X3F66 << 16);
    // 0x8080040C: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80800410: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800414: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80800418: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x8080041C: jal         0x8008C9F0
    // 0x80800420: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_12;
    // 0x80800420: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x80800424: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800428: jal         0x8008CA30
    // 0x8080042C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CA30(rdram, ctx);
        goto after_13;
    // 0x8080042C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_13:
    // 0x80800430: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800434: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800438: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8080043C: jr          $ra
    // 0x80800440: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80800440: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80800444_bsmummove(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800444: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800448: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080044C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800450: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800454: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800458: jal         0x8009EF04
    // 0x8080045C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_8009EF04(rdram, ctx);
        goto after_0;
    // 0x8080045C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x80800460: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800464: nop

    // 0x80800468: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8080046C: nop

    // 0x80800470: bc1fl       L_80800490
    if (!c1cs) {
        // 0x80800474: lui         $a1, 0x3EF0
        ctx->r5 = S32(0X3EF0 << 16);
            goto L_80800490;
    }
    goto skip_0;
    // 0x80800474: lui         $a1, 0x3EF0
    ctx->r5 = S32(0X3EF0 << 16);
    skip_0:
    // 0x80800478: jal         0x8009C984
    // 0x8080047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_1;
    // 0x8080047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800480: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800484: jal         0x8009C914
    // 0x80800488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_2;
    // 0x80800488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080048C: lui         $a1, 0x3EF0
    ctx->r5 = S32(0X3EF0 << 16);
L_80800490:
    // 0x80800490: ori         $a1, $a1, 0xA3D7
    ctx->r5 = ctx->r5 | 0XA3D7;
    // 0x80800494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800498: jal         0x800A2CE8
    // 0x8080049C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_3;
    // 0x8080049C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x808004A0: lui         $a1, 0x3F78
    ctx->r5 = S32(0X3F78 << 16);
    // 0x808004A4: ori         $a1, $a1, 0x51EC
    ctx->r5 = ctx->r5 | 0X51EC;
    // 0x808004A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004AC: jal         0x800A2CE8
    // 0x808004B0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_4;
    // 0x808004B0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_4:
    // 0x808004B4: jal         0x80083860
    // 0x808004B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsmum_entrypoint_13(rdram, ctx);
        goto after_5;
    // 0x808004B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808004BC: jal         0x8009EF10
    // 0x808004C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_6;
    // 0x808004C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808004C4: beq         $v0, $zero, L_808004DC
    if (ctx->r2 == 0) {
        // 0x808004C8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808004DC;
    }
    // 0x808004C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808004CC: beql        $v0, $at, L_808004FC
    if (ctx->r2 == ctx->r1) {
        // 0x808004D0: addiu       $s1, $zero, 0xE7
        ctx->r17 = ADD32(0, 0XE7);
            goto L_808004FC;
    }
    goto skip_1;
    // 0x808004D0: addiu       $s1, $zero, 0xE7
    ctx->r17 = ADD32(0, 0XE7);
    skip_1:
    // 0x808004D4: b           L_808004FC
    // 0x808004D8: nop

        goto L_808004FC;
    // 0x808004D8: nop

L_808004DC:
    // 0x808004DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004E0: jal         0x8009BCD4
    // 0x808004E4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_7;
    // 0x808004E4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_7:
    // 0x808004E8: beq         $v0, $zero, L_808004FC
    if (ctx->r2 == 0) {
        // 0x808004EC: nop
    
            goto L_808004FC;
    }
    // 0x808004EC: nop

    // 0x808004F0: b           L_808004FC
    // 0x808004F4: addiu       $s1, $zero, 0xE5
    ctx->r17 = ADD32(0, 0XE5);
        goto L_808004FC;
    // 0x808004F4: addiu       $s1, $zero, 0xE5
    ctx->r17 = ADD32(0, 0XE5);
    // 0x808004F8: addiu       $s1, $zero, 0xE7
    ctx->r17 = ADD32(0, 0XE7);
L_808004FC:
    // 0x808004FC: jal         0x8008DD04
    // 0x80800500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_8;
    // 0x80800500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800504: beq         $v0, $zero, L_80800510
    if (ctx->r2 == 0) {
        // 0x80800508: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800510;
    }
    // 0x80800508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080050C: addiu       $s1, $zero, 0xE9
    ctx->r17 = ADD32(0, 0XE9);
L_80800510:
    // 0x80800510: jal         0x80091A58
    // 0x80800514: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_9;
    // 0x80800514: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_9:
    // 0x80800518: beq         $v0, $zero, L_80800524
    if (ctx->r2 == 0) {
        // 0x8080051C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800524;
    }
    // 0x8080051C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800520: addiu       $s1, $zero, 0xF7
    ctx->r17 = ADD32(0, 0XF7);
L_80800524:
    // 0x80800524: jal         0x80091A58
    // 0x80800528: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_10;
    // 0x80800528: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_10:
    // 0x8080052C: beq         $v0, $zero, L_80800538
    if (ctx->r2 == 0) {
        // 0x80800530: nop
    
            goto L_80800538;
    }
    // 0x80800530: nop

    // 0x80800534: addiu       $s1, $zero, 0xE8
    ctx->r17 = ADD32(0, 0XE8);
L_80800538:
    // 0x80800538: jal         0x8008E148
    // 0x8080053C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_11;
    // 0x8080053C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800540: beq         $v0, $zero, L_80800554
    if (ctx->r2 == 0) {
        // 0x80800544: nop
    
            goto L_80800554;
    }
    // 0x80800544: nop

    // 0x80800548: jal         0x800848B0
    // 0x8080054C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_12;
    // 0x8080054C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800550: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80800554:
    // 0x80800554: jal         0x8008E35C
    // 0x80800558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_13;
    // 0x80800558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x8080055C: beq         $v0, $zero, L_80800568
    if (ctx->r2 == 0) {
        // 0x80800560: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800568;
    }
    // 0x80800560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800564: addiu       $s1, $zero, 0xF0
    ctx->r17 = ADD32(0, 0XF0);
L_80800568:
    // 0x80800568: jal         0x8009E5C8
    // 0x8080056C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_14;
    // 0x8080056C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_14:
    // 0x80800570: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800574: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800578: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8080057C: jr          $ra
    // 0x80800580: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800580: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bsmummove_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800584: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800588: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(136, 0X5C0) << 16);
    // 0x8080058C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800590: jr          $ra
    // 0x80800594: lw          $v0, 0x5C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(136, 0X5C0));
    return;
    // 0x80800594: lw          $v0, 0x5C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(136, 0X5C0));
    // 0x80800598: nop

    // 0x8080059C: nop

;}
RECOMP_FUNC void func_80800000_bsmumsplat(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080000C: jal         0x80083808
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bsmum_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800014: lui         $a2, 0x4045
    ctx->r6 = S32(0X4045 << 16);
    // 0x80800018: lui         $a3, 0x3DAE
    ctx->r7 = S32(0X3DAE << 16);
    // 0x8080001C: ori         $a3, $a3, 0x147B
    ctx->r7 = ctx->r7 | 0X147B;
    // 0x80800020: ori         $a2, $a2, 0x1EB8
    ctx->r6 = ctx->r6 | 0X1EB8;
    // 0x80800024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800028: jal         0x8008CE3C
    // 0x8080002C: addiu       $a1, $zero, 0xCB
    ctx->r5 = ADD32(0, 0XCB);
    func_8008CE3C(rdram, ctx);
        goto after_1;
    // 0x8080002C: addiu       $a1, $zero, 0xCB
    ctx->r5 = ADD32(0, 0XCB);
    after_1:
    // 0x80800030: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80800034: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080003C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800040: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800044: jal         0x8009FFD8
    // 0x80800048: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800048: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x8080004C: jal         0x80083A78
    // 0x80800050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bssplat_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x80800050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800058: addiu       $a1, $zero, 0x50F
    ctx->r5 = ADD32(0, 0X50F);
    // 0x8080005C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800060: jal         0x8009DF18
    // 0x80800064: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DF18(rdram, ctx);
        goto after_4;
    // 0x80800064: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_4:
    // 0x80800068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080006C: jal         0x8009BA9C
    // 0x80800070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_5;
    // 0x80800070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80800074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800078: jal         0x8009B9B0
    // 0x8080007C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_6;
    // 0x8080007C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x80800080: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x80800084: jal         0x8008E944
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_7;
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080008C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800090: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800094: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800098: jr          $ra
    // 0x8080009C: nop

    return;
    // 0x8080009C: nop

;}
RECOMP_FUNC void func_808000A0_bsmumsplat(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808000A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000B0: jal         0x8008CABC
    // 0x808000B4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808000B4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808000B8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x808000BC: jal         0x8009BB00
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_1;
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808000C4: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x808000C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808000CC: nop

    // 0x808000D0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x808000D4: nop

    // 0x808000D8: bc1f        L_808000E8
    if (!c1cs) {
        // 0x808000DC: nop
    
            goto L_808000E8;
    }
    // 0x808000DC: nop

    // 0x808000E0: jal         0x80084A10
    // 0x808000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_9(rdram, ctx);
        goto after_2;
    // 0x808000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_808000E8:
    // 0x808000E8: jal         0x8008DD04
    // 0x808000EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_3;
    // 0x808000EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808000F0: beq         $v0, $zero, L_80800100
    if (ctx->r2 == 0) {
        // 0x808000F4: lui         $a1, 0x3EF5
        ctx->r5 = S32(0X3EF5 << 16);
            goto L_80800100;
    }
    // 0x808000F4: lui         $a1, 0x3EF5
    ctx->r5 = S32(0X3EF5 << 16);
    // 0x808000F8: addiu       $t6, $zero, 0xE9
    ctx->r14 = ADD32(0, 0XE9);
    // 0x808000FC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800100:
    // 0x80800100: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800104: jal         0x8008B348
    // 0x80800108: ori         $a1, $a1, 0xC28F
    ctx->r5 = ctx->r5 | 0XC28F;
    func_8008B348(rdram, ctx);
        goto after_4;
    // 0x80800108: ori         $a1, $a1, 0xC28F
    ctx->r5 = ctx->r5 | 0XC28F;
    after_4:
    // 0x8080010C: beq         $v0, $zero, L_80800128
    if (ctx->r2 == 0) {
        // 0x80800110: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800128;
    }
    // 0x80800110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800114: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x80800118: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x8080011C: addiu       $a1, $zero, 0x4B1
    ctx->r5 = ADD32(0, 0X4B1);
    // 0x80800120: jal         0x8009DB04
    // 0x80800124: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    func_8009DB04(rdram, ctx);
        goto after_5;
    // 0x80800124: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    after_5:
L_80800128:
    // 0x80800128: lui         $a1, 0x3F3D
    ctx->r5 = S32(0X3F3D << 16);
    // 0x8080012C: ori         $a1, $a1, 0xCC64
    ctx->r5 = ctx->r5 | 0XCC64;
    // 0x80800130: jal         0x8008B348
    // 0x80800134: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_6;
    // 0x80800134: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_6:
    // 0x80800138: beq         $v0, $zero, L_80800144
    if (ctx->r2 == 0) {
        // 0x8080013C: addiu       $t7, $zero, 0xEF
        ctx->r15 = ADD32(0, 0XEF);
            goto L_80800144;
    }
    // 0x8080013C: addiu       $t7, $zero, 0xEF
    ctx->r15 = ADD32(0, 0XEF);
    // 0x80800140: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80800144:
    // 0x80800144: jal         0x8008E078
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_7;
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080014C: bne         $v0, $zero, L_80800168
    if (ctx->r2 != 0) {
        // 0x80800150: nop
    
            goto L_80800168;
    }
    // 0x80800150: nop

    // 0x80800154: jal         0x8008E35C
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_8;
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8080015C: beq         $v0, $zero, L_80800168
    if (ctx->r2 == 0) {
        // 0x80800160: addiu       $t8, $zero, 0xF0
        ctx->r24 = ADD32(0, 0XF0);
            goto L_80800168;
    }
    // 0x80800160: addiu       $t8, $zero, 0xF0
    ctx->r24 = ADD32(0, 0XF0);
    // 0x80800164: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80800168:
    // 0x80800168: jal         0x800A1718
    // 0x8080016C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1718(rdram, ctx);
        goto after_9;
    // 0x8080016C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800170: bne         $v0, $zero, L_80800180
    if (ctx->r2 != 0) {
        // 0x80800174: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800180;
    }
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800178: addiu       $t9, $zero, 0xEB
    ctx->r25 = ADD32(0, 0XEB);
    // 0x8080017C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80800180:
    // 0x80800180: jal         0x8009E5C8
    // 0x80800184: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_10;
    // 0x80800184: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_10:
    // 0x80800188: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080018C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800190: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800194: jr          $ra
    // 0x80800198: nop

    return;
    // 0x80800198: nop

;}
RECOMP_FUNC void func_8080019C_bsmumsplat(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080019C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001A4: jal         0x8008E95C
    // 0x808001A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008E95C(rdram, ctx);
        goto after_0;
    // 0x808001A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001AC: jal         0x8009BD88
    // 0x808001B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BD88(rdram, ctx);
        goto after_1;
    // 0x808001B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808001B4: jal         0x80083800
    // 0x808001B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsmum_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x808001B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808001BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001C4: jr          $ra
    // 0x808001C8: nop

    return;
    // 0x808001C8: nop

;}
RECOMP_FUNC void bsmumsplat_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001CC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808001D0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(137, 0X1E0) << 16);
    // 0x808001D4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808001D8: jr          $ra
    // 0x808001DC: lw          $v0, 0x1E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(137, 0X1E0));
    return;
    // 0x808001DC: lw          $v0, 0x1E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(137, 0X1E0));
;}
RECOMP_FUNC void func_80800000_bsmumstill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8080000C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800014: jal         0x8009EF10
    // 0x80800018: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_8009EF10(rdram, ctx);
        goto after_0;
    // 0x80800018: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x8080001C: beq         $v0, $zero, L_8080004C
    if (ctx->r2 == 0) {
        // 0x80800020: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080004C;
    }
    // 0x80800020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800024: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800028: beq         $v0, $at, L_80800040
    if (ctx->r2 == ctx->r1) {
        // 0x8080002C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800040;
    }
    // 0x8080002C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800030: beql        $v0, $at, L_8080004C
    if (ctx->r2 == ctx->r1) {
        // 0x80800034: addiu       $s1, $zero, 0xE7
        ctx->r17 = ADD32(0, 0XE7);
            goto L_8080004C;
    }
    goto skip_0;
    // 0x80800034: addiu       $s1, $zero, 0xE7
    ctx->r17 = ADD32(0, 0XE7);
    skip_0:
    // 0x80800038: b           L_8080004C
    // 0x8080003C: nop

        goto L_8080004C;
    // 0x8080003C: nop

L_80800040:
    // 0x80800040: b           L_8080004C
    // 0x80800044: addiu       $s1, $zero, 0xE6
    ctx->r17 = ADD32(0, 0XE6);
        goto L_8080004C;
    // 0x80800044: addiu       $s1, $zero, 0xE6
    ctx->r17 = ADD32(0, 0XE6);
    // 0x80800048: addiu       $s1, $zero, 0xE7
    ctx->r17 = ADD32(0, 0XE7);
L_8080004C:
    // 0x8080004C: jal         0x80091A58
    // 0x80800050: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_1;
    // 0x80800050: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x80800054: beq         $v0, $zero, L_80800060
    if (ctx->r2 == 0) {
        // 0x80800058: nop
    
            goto L_80800060;
    }
    // 0x80800058: nop

    // 0x8080005C: addiu       $s1, $zero, 0xE8
    ctx->r17 = ADD32(0, 0XE8);
L_80800060:
    // 0x80800060: jal         0x80097AD0
    // 0x80800064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097AD0(rdram, ctx);
        goto after_2;
    // 0x80800064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800068: beq         $v0, $zero, L_8080007C
    if (ctx->r2 == 0) {
        // 0x8080006C: nop
    
            goto L_8080007C;
    }
    // 0x8080006C: nop

    // 0x80800070: jal         0x800848A8
    // 0x80800074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_3;
    // 0x80800074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800078: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_8080007C:
    // 0x8080007C: jal         0x8008E148
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_4;
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800084: beql        $v0, $zero, L_8080009C
    if (ctx->r2 == 0) {
        // 0x80800088: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080009C;
    }
    goto skip_1;
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x8080008C: jal         0x800848B0
    // 0x80800090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_5;
    // 0x80800090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800094: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80800098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080009C:
    // 0x8080009C: jal         0x80091A58
    // 0x808000A0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_6;
    // 0x808000A0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_6:
    // 0x808000A4: beq         $v0, $zero, L_808000B0
    if (ctx->r2 == 0) {
        // 0x808000A8: nop
    
            goto L_808000B0;
    }
    // 0x808000A8: nop

    // 0x808000AC: addiu       $s1, $zero, 0xF7
    ctx->r17 = ADD32(0, 0XF7);
L_808000B0:
    // 0x808000B0: jal         0x8008DD04
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_7;
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808000B8: beq         $v0, $zero, L_808000C4
    if (ctx->r2 == 0) {
        // 0x808000BC: nop
    
            goto L_808000C4;
    }
    // 0x808000BC: nop

    // 0x808000C0: addiu       $s1, $zero, 0xE9
    ctx->r17 = ADD32(0, 0XE9);
L_808000C4:
    // 0x808000C4: jal         0x8008E35C
    // 0x808000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_8;
    // 0x808000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808000CC: beq         $v0, $zero, L_808000D8
    if (ctx->r2 == 0) {
        // 0x808000D0: lw          $s0, 0x14($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X14);
            goto L_808000D8;
    }
    // 0x808000D0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808000D4: addiu       $s1, $zero, 0xF0
    ctx->r17 = ADD32(0, 0XF0);
L_808000D8:
    // 0x808000D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000DC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x808000E0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808000E4: jr          $ra
    // 0x808000E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x808000E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_808000EC_bsmumstill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000EC: lw          $v1, 0x160($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X160);
    // 0x808000F0: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(138, 0X400) << 16);
    // 0x808000F4: sltiu       $at, $v1, 0x2
    ctx->r1 = ctx->r3 < 0X2 ? 1 : 0;
    // 0x808000F8: bnel        $at, $zero, L_8080010C
    if (ctx->r1 != 0) {
        // 0x808000FC: addu        $a1, $a1, $v1
        ctx->r5 = ADD32(ctx->r5, ctx->r3);
            goto L_8080010C;
    }
    goto skip_0;
    // 0x808000FC: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    skip_0:
    // 0x80800100: sw          $zero, 0x160($a0)
    MEM_W(0X160, ctx->r4) = 0;
    // 0x80800104: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80800108: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
L_8080010C:
    // 0x8080010C: lbu         $v0, 0x400($a1)
    ctx->r2 = MEM_BU(ctx->r5, (int16_t)RELOC_LO16(138, 0X400));
    // 0x80800110: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x80800114: jr          $ra
    // 0x80800118: sw          $t6, 0x160($a0)
    MEM_W(0X160, ctx->r4) = ctx->r14;
    return;
    // 0x80800118: sw          $t6, 0x160($a0)
    MEM_W(0X160, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_8080011C_bsmumstill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080011C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800120: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800124: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800128: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8080012C: lw          $t6, 0x15C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X15C);
    // 0x80800130: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800134: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800138: bne         $t6, $zero, L_80800168
    if (ctx->r14 != 0) {
        // 0x8080013C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_80800168;
    }
    // 0x8080013C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800140: sw          $zero, 0x160($a0)
    MEM_W(0X160, ctx->r4) = 0;
    // 0x80800144: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80800148: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8080014C: jal         0x8009FFD8
    // 0x80800150: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_0;
    // 0x80800150: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800158: jal         0x8009B9B0
    // 0x8080015C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_1;
    // 0x8080015C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80800160: jal         0x800909CC
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800909CC(rdram, ctx);
        goto after_2;
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_80800168:
    // 0x80800168: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8080016C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800170: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
    // 0x80800174: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80800178: beq         $t9, $zero, L_808001CC
    if (ctx->r25 == 0) {
        // 0x8080017C: nop
    
            goto L_808001CC;
    }
    // 0x8080017C: nop

    // 0x80800180: beq         $t9, $at, L_8080019C
    if (ctx->r25 == ctx->r1) {
        // 0x80800184: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080019C;
    }
    // 0x80800184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800188: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080018C: beq         $t9, $at, L_808001B4
    if (ctx->r25 == ctx->r1) {
        // 0x80800190: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001B4;
    }
    // 0x80800190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800194: b           L_808001E0
    // 0x80800198: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808001E0;
    // 0x80800198: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8080019C:
    // 0x8080019C: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    // 0x808001A0: ori         $a2, $a2, 0xF5C3
    ctx->r6 = ctx->r6 | 0XF5C3;
    // 0x808001A4: jal         0x8008CCBC
    // 0x808001A8: addiu       $a1, $zero, 0xB5
    ctx->r5 = ADD32(0, 0XB5);
    func_8008CCBC(rdram, ctx);
        goto after_3;
    // 0x808001A8: addiu       $a1, $zero, 0xB5
    ctx->r5 = ADD32(0, 0XB5);
    after_3:
    // 0x808001AC: b           L_808001E0
    // 0x808001B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808001E0;
    // 0x808001B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808001B4:
    // 0x808001B4: lui         $a2, 0x4003
    ctx->r6 = S32(0X4003 << 16);
    // 0x808001B8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808001BC: jal         0x8008CCBC
    // 0x808001C0: addiu       $a1, $zero, 0xB6
    ctx->r5 = ADD32(0, 0XB6);
    func_8008CCBC(rdram, ctx);
        goto after_4;
    // 0x808001C0: addiu       $a1, $zero, 0xB6
    ctx->r5 = ADD32(0, 0XB6);
    after_4:
    // 0x808001C4: b           L_808001E0
    // 0x808001C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808001E0;
    // 0x808001C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808001CC:
    // 0x808001CC: jal         0x80090A2C
    // 0x808001D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80090A2C(rdram, ctx);
        goto after_5;
    // 0x808001D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808001D4: jal         0x800951B4
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_6;
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808001DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808001E0:
    // 0x808001E0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808001E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808001E8: jr          $ra
    // 0x808001EC: nop

    return;
    // 0x808001EC: nop

;}
RECOMP_FUNC void func_808001F0_bsmumstill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001F8: jal         0x80083800
    // 0x808001FC: nop

    _bsmum_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808001FC: nop

    after_0:
    // 0x80800200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800208: jr          $ra
    // 0x8080020C: nop

    return;
    // 0x8080020C: nop

;}
RECOMP_FUNC void func_80800210_bsmumstill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800210: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800214: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800218: jal         0x80083808
    // 0x8080021C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    _bsmum_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x8080021C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800220: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800224: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800228: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080022C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800230: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800234: jal         0x8009FFD8
    // 0x80800238: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800238: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8080023C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800240: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800244: jr          $ra
    // 0x80800248: nop

    return;
    // 0x80800248: nop

;}
RECOMP_FUNC void func_8080024C_bsmumstill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080024C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800250: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800254: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800258: jal         0x8008CAEC
    // 0x8080025C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8008CAEC(rdram, ctx);
        goto after_0;
    // 0x8080025C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800260: beq         $v0, $zero, L_8080026C
    if (ctx->r2 == 0) {
        // 0x80800264: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_8080026C;
    }
    // 0x80800264: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800268: addiu       $a1, $zero, 0xE5
    ctx->r5 = ADD32(0, 0XE5);
L_8080026C:
    // 0x8080026C: jal         0x80000000
    // 0x80800270: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80800000_bsmumstill(rdram, ctx);
        goto after_1;
    // 0x80800270: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800274: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800278: jal         0x8009E5C8
    // 0x8080027C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x8080027C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x80800280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800284: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800288: jr          $ra
    // 0x8080028C: nop

    return;
    // 0x8080028C: nop

;}
RECOMP_FUNC void bsmumstill_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800290: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800294: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(138, 0X404) << 16);
    // 0x80800298: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080029C: jr          $ra
    // 0x808002A0: lw          $v0, 0x404($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(138, 0X404));
    return;
    // 0x808002A0: lw          $v0, 0x404($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(138, 0X404));
;}
RECOMP_FUNC void func_808002A4_bsmumstill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002AC: jal         0x80083800
    // 0x808002B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsmum_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808002B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808002B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808002B8: jal         0x8000011C
    // 0x808002BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8080011C_bsmumstill(rdram, ctx);
        goto after_1;
    // 0x808002BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x808002C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002C8: jr          $ra
    // 0x808002CC: nop

    return;
    // 0x808002CC: nop

;}
RECOMP_FUNC void func_808002D0_bsmumstill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002D8: jal         0x80083808
    // 0x808002DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsmum_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808002DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808002E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808002E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808002E8: jal         0x8000011C
    // 0x808002EC: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    func_8080011C_bsmumstill(rdram, ctx);
        goto after_1;
    // 0x808002EC: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    after_1:
    // 0x808002F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002F8: jr          $ra
    // 0x808002FC: nop

    return;
    // 0x808002FC: nop

;}
RECOMP_FUNC void func_80800300_bsmumstill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800300: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800304: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800308: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080030C: lw          $t6, 0x15C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X15C);
    // 0x80800310: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800314: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800318: bne         $t6, $at, L_80800398
    if (ctx->r14 != ctx->r1) {
        // 0x8080031C: lui         $a1, 0x3E00
        ctx->r5 = S32(0X3E00 << 16);
            goto L_80800398;
    }
    // 0x8080031C: lui         $a1, 0x3E00
    ctx->r5 = S32(0X3E00 << 16);
    // 0x80800320: jal         0x8008CB10
    // 0x80800324: ori         $a1, $a1, 0xB780
    ctx->r5 = ctx->r5 | 0XB780;
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x80800324: ori         $a1, $a1, 0xB780
    ctx->r5 = ctx->r5 | 0XB780;
    after_0:
    // 0x80800328: beq         $v0, $zero, L_80800340
    if (ctx->r2 == 0) {
        // 0x8080032C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800340;
    }
    // 0x8080032C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800330: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    // 0x80800334: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800338: jal         0x8009DF18
    // 0x8080033C: addiu       $a3, $zero, 0x7D00
    ctx->r7 = ADD32(0, 0X7D00);
    func_8009DF18(rdram, ctx);
        goto after_1;
    // 0x8080033C: addiu       $a3, $zero, 0x7D00
    ctx->r7 = ADD32(0, 0X7D00);
    after_1:
L_80800340:
    // 0x80800340: lui         $a1, 0x3ECA
    ctx->r5 = S32(0X3ECA << 16);
    // 0x80800344: ori         $a1, $a1, 0x9931
    ctx->r5 = ctx->r5 | 0X9931;
    // 0x80800348: jal         0x8008CB10
    // 0x8080034C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x8080034C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800350: beq         $v0, $zero, L_8080036C
    if (ctx->r2 == 0) {
        // 0x80800354: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080036C;
    }
    // 0x80800354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800358: lui         $a2, 0x3F8C
    ctx->r6 = S32(0X3F8C << 16);
    // 0x8080035C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800360: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    // 0x80800364: jal         0x8009DF18
    // 0x80800368: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    func_8009DF18(rdram, ctx);
        goto after_3;
    // 0x80800368: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    after_3:
L_8080036C:
    // 0x8080036C: lui         $a1, 0x3F12
    ctx->r5 = S32(0X3F12 << 16);
    // 0x80800370: ori         $a1, $a1, 0x6E98
    ctx->r5 = ctx->r5 | 0X6E98;
    // 0x80800374: jal         0x8008CB10
    // 0x80800378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_4;
    // 0x80800378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080037C: beq         $v0, $zero, L_80800398
    if (ctx->r2 == 0) {
        // 0x80800380: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800398;
    }
    // 0x80800380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800384: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x80800388: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x8080038C: addiu       $a1, $zero, 0x4BA
    ctx->r5 = ADD32(0, 0X4BA);
    // 0x80800390: jal         0x8009DF18
    // 0x80800394: addiu       $a3, $zero, 0x61A8
    ctx->r7 = ADD32(0, 0X61A8);
    func_8009DF18(rdram, ctx);
        goto after_5;
    // 0x80800394: addiu       $a3, $zero, 0x61A8
    ctx->r7 = ADD32(0, 0X61A8);
    after_5:
L_80800398:
    // 0x80800398: jal         0x8008CAEC
    // 0x8080039C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_6;
    // 0x8080039C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808003A0: beql        $v0, $zero, L_808003C0
    if (ctx->r2 == 0) {
        // 0x808003A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003C0;
    }
    goto skip_0;
    // 0x808003A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808003A8: jal         0x800000EC
    // 0x808003AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000EC_bsmumstill(rdram, ctx);
        goto after_7;
    // 0x808003AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808003B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003B4: jal         0x8000011C
    // 0x808003B8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8080011C_bsmumstill(rdram, ctx);
        goto after_8;
    // 0x808003B8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_8:
    // 0x808003BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808003C0:
    // 0x808003C0: jal         0x80000000
    // 0x808003C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800000_bsmumstill(rdram, ctx);
        goto after_9;
    // 0x808003C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x808003C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003CC: jal         0x8009E5C8
    // 0x808003D0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_10;
    // 0x808003D0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_10:
    // 0x808003D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808003D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808003DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808003E0: jr          $ra
    // 0x808003E4: nop

    return;
    // 0x808003E4: nop

;}
RECOMP_FUNC void bsmumstill_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003E8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808003EC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(138, 0X414) << 16);
    // 0x808003F0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808003F4: jr          $ra
    // 0x808003F8: lw          $v0, 0x414($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(138, 0X414));
    return;
    // 0x808003F8: lw          $v0, 0x414($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(138, 0X414));
    // 0x808003FC: nop

;}
RECOMP_FUNC void func_80800000_bsmumswim(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void func_808000B0_bsmumswim(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x808000F4: lui         $a2, 0x43AF
    ctx->r6 = S32(0X43AF << 16);
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x808000F4: lui         $a2, 0x43AF
    ctx->r6 = S32(0X43AF << 16);
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
RECOMP_FUNC void func_80800114_bsmumswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800114: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800118: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080011C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800120: jal         0x80083808
    // 0x80800124: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bsmum_entrypoint_2(rdram, ctx);
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
    // 0x80800134: bne         $v0, $zero, L_80800184
    if (ctx->r2 != 0) {
        // 0x80800138: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800184;
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
    // 0x80800154: lui         $a2, 0x3CF5
    ctx->r6 = S32(0X3CF5 << 16);
    // 0x80800158: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x8080015C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800160: jal         0x8009F1C8
    // 0x80800164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_4;
    // 0x80800164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080016C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800170: jal         0x8009F1C8
    // 0x80800174: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_5;
    // 0x80800174: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_5:
    // 0x80800178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080017C: jal         0x800961AC
    // 0x80800180: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800961AC(rdram, ctx);
        goto after_6;
    // 0x80800180: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
L_80800184:
    // 0x80800184: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800188: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080018C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800190: jr          $ra
    // 0x80800194: nop

    return;
    // 0x80800194: nop

;}
RECOMP_FUNC void func_80800198_bsmumswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800198: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080019C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001A8: jal         0x8009E69C
    // 0x808001AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E69C(rdram, ctx);
        goto after_0;
    // 0x808001AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x808001B0: bne         $v0, $zero, L_808001DC
    if (ctx->r2 != 0) {
        // 0x808001B4: nop
    
            goto L_808001DC;
    }
    // 0x808001B4: nop

    // 0x808001B8: jal         0x8009BC90
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC90(rdram, ctx);
        goto after_1;
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808001C0: jal         0x8009BC6C
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_2;
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808001C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001CC: jal         0x800961AC
    // 0x808001D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_3;
    // 0x808001D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x808001D4: jal         0x8009F2A4
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F2A4(rdram, ctx);
        goto after_4;
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_808001DC:
    // 0x808001DC: jal         0x80083800
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsmum_entrypoint_1(rdram, ctx);
        goto after_5;
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
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

;}
RECOMP_FUNC void bsmumswim_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800200: jal         0x8009BC34
    // 0x80800204: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC34(rdram, ctx);
        goto after_0;
    // 0x80800204: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800208: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080020C: jal         0x800961AC
    // 0x80800210: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_1;
    // 0x80800210: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800214: jal         0x80083800
    // 0x80800218: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsmum_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80800218: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8080021C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800220: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800224: jr          $ra
    // 0x80800228: nop

    return;
    // 0x80800228: nop

;}
RECOMP_FUNC void bsmumswim_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080022C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800230: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800234: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80800238: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080023C: jal         0x8008CABC
    // 0x80800240: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800240: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    after_0:
    // 0x80800244: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80800248: jal         0x80083808
    // 0x8080024C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsmum_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x8080024C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800254: jal         0x8009BCB4
    // 0x80800258: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BCB4(rdram, ctx);
        goto after_2;
    // 0x80800258: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x8080025C: lui         $a1, 0xC3C7
    ctx->r5 = S32(0XC3C7 << 16);
    // 0x80800260: ori         $a1, $a1, 0xFEB8
    ctx->r5 = ctx->r5 | 0XFEB8;
    // 0x80800264: jal         0x8009BCC4
    // 0x80800268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_3;
    // 0x80800268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800270: jal         0x800961AC
    // 0x80800274: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800961AC(rdram, ctx);
        goto after_4;
    // 0x80800274: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80800278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080027C: jal         0x8009BC5C
    // 0x80800280: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8009BC5C(rdram, ctx);
        goto after_5;
    // 0x80800280: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_5:
    // 0x80800284: jal         0x800A046C
    // 0x80800288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A046C(rdram, ctx);
        goto after_6;
    // 0x80800288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080028C: jal         0x800A3298
    // 0x80800290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3298(rdram, ctx);
        goto after_7;
    // 0x80800290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800294: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80800298: jal         0x8008AF24
    // 0x8080029C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008AF24(rdram, ctx);
        goto after_8;
    // 0x8080029C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x808002A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808002A4: jal         0x8008AED4
    // 0x808002A8: addiu       $a1, $zero, 0x9D
    ctx->r5 = ADD32(0, 0X9D);
    func_8008AED4(rdram, ctx);
        goto after_9;
    // 0x808002A8: addiu       $a1, $zero, 0x9D
    ctx->r5 = ADD32(0, 0X9D);
    after_9:
    // 0x808002AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808002B0: jal         0x8008B134
    // 0x808002B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_10;
    // 0x808002B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x808002B8: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x808002BC: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x808002C0: jal         0x8008B1BC
    // 0x808002C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_11;
    // 0x808002C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x808002C8: lui         $a1, 0x3F24
    ctx->r5 = S32(0X3F24 << 16);
    // 0x808002CC: ori         $a1, $a1, 0x25AF
    ctx->r5 = ctx->r5 | 0X25AF;
    // 0x808002D0: jal         0x8008B24C
    // 0x808002D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B24C(rdram, ctx);
        goto after_12;
    // 0x808002D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x808002D8: jal         0x8008B064
    // 0x808002DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B064(rdram, ctx);
        goto after_13;
    // 0x808002DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x808002E0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x808002E4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808002E8: lui         $at, 0xC496
    ctx->r1 = S32(0XC496 << 16);
    // 0x808002EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808002F0: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x808002F4: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x808002F8: lui         $a3, 0xC396
    ctx->r7 = S32(0XC396 << 16);
    // 0x808002FC: jal         0x800F10B4
    // 0x80800300: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_14;
    // 0x80800300: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x80800304: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800308: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x8080030C: jal         0x8009BA58
    // 0x80800310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_15;
    // 0x80800310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800314: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800318: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080031C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800320: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800324: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800328: jal         0x8009FFD8
    // 0x8080032C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_16;
    // 0x8080032C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_16:
    // 0x80800330: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800334: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800338: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8080033C: jr          $ra
    // 0x80800340: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80800340: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void bsmumswim_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800344: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80800348: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8080034C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80800350: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800354: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x80800358: jal         0x8009C128
    // 0x8080035C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x8080035C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x80800360: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80800364: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800368: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8080036C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800370: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80800374: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80800378: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x8080037C: jal         0x8009FBB0
    // 0x80800380: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    func_8009FBB0(rdram, ctx);
        goto after_1;
    // 0x80800380: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x80800384: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x80800388: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x8080038C: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x80800390: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80800394: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80800398: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8080039C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808003A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808003A4: addiu       $a1, $zero, -0x1E
    ctx->r5 = ADD32(0, -0X1E);
    // 0x808003A8: addiu       $a2, $zero, -0x1E
    ctx->r6 = ADD32(0, -0X1E);
    // 0x808003AC: jal         0x800BA930
    // 0x808003B0: addiu       $a3, $zero, -0x1E
    ctx->r7 = ADD32(0, -0X1E);
    func_800BA930(rdram, ctx);
        goto after_2;
    // 0x808003B0: addiu       $a3, $zero, -0x1E
    ctx->r7 = ADD32(0, -0X1E);
    after_2:
    // 0x808003B4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x808003B8: jal         0x800BA22C
    // 0x808003BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_3;
    // 0x808003BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x808003C0: lwc1        $f12, 0x16C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x808003C4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x808003C8: nop

    // 0x808003CC: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x808003D0: nop

    // 0x808003D4: bc1f        L_80800418
    if (!c1cs) {
        // 0x808003D8: nop
    
            goto L_80800418;
    }
    // 0x808003D8: nop

    // 0x808003DC: jal         0x800F2100
    // 0x808003E0: nop

    func_800F2100(rdram, ctx);
        goto after_4;
    // 0x808003E0: nop

    after_4:
    // 0x808003E4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(139, 0XB20) << 16);
    // 0x808003E8: lwc1        $f16, 0xB20($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(139, 0XB20));
    // 0x808003EC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x808003F0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808003F4: mul.s       $f12, $f0, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x808003F8: jal         0x800F0E00
    // 0x808003FC: nop

    func_800F0E00(rdram, ctx);
        goto after_5;
    // 0x808003FC: nop

    after_5:
    // 0x80800400: lwc1        $f18, 0x16C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800404: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800408: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x8080040C: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
    // 0x80800410: jal         0x8009BA58
    // 0x80800414: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009BA58(rdram, ctx);
        goto after_6;
    // 0x80800414: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_6:
L_80800418:
    // 0x80800418: jal         0x8008E078
    // 0x8080041C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_7;
    // 0x8080041C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800420: beq         $v0, $zero, L_8080042C
    if (ctx->r2 == 0) {
        // 0x80800424: addiu       $t9, $zero, 0xF0
        ctx->r25 = ADD32(0, 0XF0);
            goto L_8080042C;
    }
    // 0x80800424: addiu       $t9, $zero, 0xF0
    ctx->r25 = ADD32(0, 0XF0);
    // 0x80800428: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
L_8080042C:
    // 0x8080042C: jal         0x8008E35C
    // 0x80800430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_8;
    // 0x80800430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800434: bne         $v0, $zero, L_80800440
    if (ctx->r2 != 0) {
        // 0x80800438: addiu       $t0, $zero, 0xE5
        ctx->r8 = ADD32(0, 0XE5);
            goto L_80800440;
    }
    // 0x80800438: addiu       $t0, $zero, 0xE5
    ctx->r8 = ADD32(0, 0XE5);
    // 0x8080043C: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
L_80800440:
    // 0x80800440: jal         0x8009BB50
    // 0x80800444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_9;
    // 0x80800444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800448: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8080044C: addiu       $t1, $zero, 0xF0
    ctx->r9 = ADD32(0, 0XF0);
    // 0x80800450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800454: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x80800458: nop

    // 0x8080045C: bc1f        L_80800468
    if (!c1cs) {
        // 0x80800460: nop
    
            goto L_80800468;
    }
    // 0x80800460: nop

    // 0x80800464: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
L_80800468:
    // 0x80800468: jal         0x8009E5C8
    // 0x8080046C: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009E5C8(rdram, ctx);
        goto after_10;
    // 0x8080046C: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_10:
    // 0x80800470: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80800474: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80800478: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8080047C: jr          $ra
    // 0x80800480: nop

    return;
    // 0x80800480: nop

;}
RECOMP_FUNC void bsmumswim_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800484: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800488: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(139, 0XB30) << 16);
    // 0x8080048C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800490: jr          $ra
    // 0x80800494: lw          $v0, 0xB30($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(139, 0XB30));
    return;
    // 0x80800494: lw          $v0, 0xB30($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(139, 0XB30));
;}
RECOMP_FUNC void func_80800498_bsmumswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800498: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080049C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808004A0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x808004A4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808004A8: jal         0x8008CABC
    // 0x808004AC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808004AC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x808004B0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808004B4: jal         0x80000114
    // 0x808004B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800114_bsmumswim(rdram, ctx);
        goto after_1;
    // 0x808004B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x808004BC: jal         0x8008AF24
    // 0x808004C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x808004C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808004C4: jal         0x8009E710
    // 0x808004C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009E710(rdram, ctx);
        goto after_3;
    // 0x808004C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x808004CC: addiu       $at, $zero, 0xF1
    ctx->r1 = ADD32(0, 0XF1);
    // 0x808004D0: bne         $v0, $at, L_808004E4
    if (ctx->r2 != ctx->r1) {
        // 0x808004D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004E4;
    }
    // 0x808004D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004D8: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x808004DC: jal         0x8008B1C8
    // 0x808004E0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_8008B1C8(rdram, ctx);
        goto after_4;
    // 0x808004E0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_4:
L_808004E4:
    // 0x808004E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004E8: jal         0x8008AED4
    // 0x808004EC: addiu       $a1, $zero, 0x9D
    ctx->r5 = ADD32(0, 0X9D);
    func_8008AED4(rdram, ctx);
        goto after_5;
    // 0x808004EC: addiu       $a1, $zero, 0x9D
    ctx->r5 = ADD32(0, 0X9D);
    after_5:
    // 0x808004F0: lui         $a1, 0x4033
    ctx->r5 = S32(0X4033 << 16);
    // 0x808004F4: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x808004F8: jal         0x8008B1BC
    // 0x808004FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_6;
    // 0x808004FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800504: jal         0x8008B134
    // 0x80800508: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_7;
    // 0x80800508: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x8080050C: jal         0x8008B064
    // 0x80800510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_8;
    // 0x80800510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800514: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800518: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080051C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800520: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800524: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800528: jal         0x8009FFD8
    // 0x8080052C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_9;
    // 0x8080052C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_9:
    // 0x80800530: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800534: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x80800538: jal         0x8009C99C
    // 0x8080053C: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_10;
    // 0x8080053C: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_10:
    // 0x80800540: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800544: jal         0x8009B9B0
    // 0x80800548: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_11;
    // 0x80800548: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_11:
    // 0x8080054C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800550: jal         0x800A4DA4
    // 0x80800554: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800A4DA4(rdram, ctx);
        goto after_12;
    // 0x80800554: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_12:
    // 0x80800558: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080055C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800560: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800564: jr          $ra
    // 0x80800568: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80800568: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8080056C_bsmumswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080056C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800570: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800574: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80800578: jal         0x8008CABC
    // 0x8080057C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080057C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800580: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800584: jal         0x8001210C
    // 0x80800588: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001210C(rdram, ctx);
        goto after_1;
    // 0x80800588: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x8080058C: bne         $v0, $zero, L_808005C0
    if (ctx->r2 != 0) {
        // 0x80800590: nop
    
            goto L_808005C0;
    }
    // 0x80800590: nop

    // 0x80800594: jal         0x800DC0C0
    // 0x80800598: nop

    func_800DC0C0(rdram, ctx);
        goto after_2;
    // 0x80800598: nop

    after_2:
    // 0x8080059C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808005A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808005A4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808005A8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x808005AC: nop

    // 0x808005B0: bc1f        L_808005C0
    if (!c1cs) {
        // 0x808005B4: nop
    
            goto L_808005C0;
    }
    // 0x808005B4: nop

    // 0x808005B8: jal         0x8009FC34
    // 0x808005BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009FC34(rdram, ctx);
        goto after_3;
    // 0x808005BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_808005C0:
    // 0x808005C0: jal         0x8001210C
    // 0x808005C4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001210C(rdram, ctx);
        goto after_4;
    // 0x808005C4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_4:
    // 0x808005C8: bnel        $v0, $zero, L_80800600
    if (ctx->r2 != 0) {
        // 0x808005CC: lui         $a1, 0x3C23
        ctx->r5 = S32(0X3C23 << 16);
            goto L_80800600;
    }
    goto skip_0;
    // 0x808005CC: lui         $a1, 0x3C23
    ctx->r5 = S32(0X3C23 << 16);
    skip_0:
    // 0x808005D0: jal         0x800DC0C0
    // 0x808005D4: nop

    func_800DC0C0(rdram, ctx);
        goto after_5;
    // 0x808005D4: nop

    after_5:
    // 0x808005D8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808005DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808005E0: nop

    // 0x808005E4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x808005E8: nop

    // 0x808005EC: bc1fl       L_80800600
    if (!c1cs) {
        // 0x808005F0: lui         $a1, 0x3C23
        ctx->r5 = S32(0X3C23 << 16);
            goto L_80800600;
    }
    goto skip_1;
    // 0x808005F0: lui         $a1, 0x3C23
    ctx->r5 = S32(0X3C23 << 16);
    skip_1:
    // 0x808005F4: jal         0x80000000
    // 0x808005F8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80800000_bsmumswim(rdram, ctx);
        goto after_6;
    // 0x808005F8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_6:
    // 0x808005FC: lui         $a1, 0x3C23
    ctx->r5 = S32(0X3C23 << 16);
L_80800600:
    // 0x80800600: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    // 0x80800604: jal         0x8008B348
    // 0x80800608: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x80800608: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_7:
    // 0x8080060C: bne         $v0, $zero, L_80800660
    if (ctx->r2 != 0) {
        // 0x80800610: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800660;
    }
    // 0x80800610: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800614: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80800618: jal         0x8008B348
    // 0x8080061C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_8008B348(rdram, ctx);
        goto after_8;
    // 0x8080061C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_8:
    // 0x80800620: bne         $v0, $zero, L_80800660
    if (ctx->r2 != 0) {
        // 0x80800624: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800660;
    }
    // 0x80800624: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800628: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x8080062C: jal         0x8008B348
    // 0x80800630: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_8008B348(rdram, ctx);
        goto after_9;
    // 0x80800630: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_9:
    // 0x80800634: bne         $v0, $zero, L_80800660
    if (ctx->r2 != 0) {
        // 0x80800638: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800660;
    }
    // 0x80800638: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080063C: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x80800640: jal         0x8008B348
    // 0x80800644: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    func_8008B348(rdram, ctx);
        goto after_10;
    // 0x80800644: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    after_10:
    // 0x80800648: bne         $v0, $zero, L_80800660
    if (ctx->r2 != 0) {
        // 0x8080064C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800660;
    }
    // 0x8080064C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800650: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x80800654: jal         0x8008B348
    // 0x80800658: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_8008B348(rdram, ctx);
        goto after_11;
    // 0x80800658: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_11:
    // 0x8080065C: beq         $v0, $zero, L_8080068C
    if (ctx->r2 == 0) {
        // 0x80800660: lui         $a2, 0x3F59
        ctx->r6 = S32(0X3F59 << 16);
            goto L_8080068C;
    }
L_80800660:
    // 0x80800660: lui         $a2, 0x3F59
    ctx->r6 = S32(0X3F59 << 16);
    // 0x80800664: lui         $a3, 0x3F93
    ctx->r7 = S32(0X3F93 << 16);
    // 0x80800668: addiu       $t6, $zero, 0x4650
    ctx->r14 = ADD32(0, 0X4650);
    // 0x8080066C: addiu       $t7, $zero, 0x4650
    ctx->r15 = ADD32(0, 0X4650);
    // 0x80800670: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80800674: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800678: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x8080067C: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800680: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800684: jal         0x8009DEC0
    // 0x80800688: addiu       $a1, $zero, 0x678
    ctx->r5 = ADD32(0, 0X678);
    func_8009DEC0(rdram, ctx);
        goto after_12;
    // 0x80800688: addiu       $a1, $zero, 0x678
    ctx->r5 = ADD32(0, 0X678);
    after_12:
L_8080068C:
    // 0x8080068C: jal         0x8009EF10
    // 0x80800690: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8009EF10(rdram, ctx);
        goto after_13;
    // 0x80800690: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_13:
    // 0x80800694: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800698: bne         $v0, $at, L_808006A4
    if (ctx->r2 != ctx->r1) {
        // 0x8080069C: addiu       $t8, $zero, 0xF1
        ctx->r24 = ADD32(0, 0XF1);
            goto L_808006A4;
    }
    // 0x8080069C: addiu       $t8, $zero, 0xF1
    ctx->r24 = ADD32(0, 0XF1);
    // 0x808006A0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_808006A4:
    // 0x808006A4: jal         0x8008E35C
    // 0x808006A8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008E35C(rdram, ctx);
        goto after_14;
    // 0x808006A8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_14:
    // 0x808006AC: bne         $v0, $zero, L_808006B8
    if (ctx->r2 != 0) {
        // 0x808006B0: addiu       $t9, $zero, 0xE5
        ctx->r25 = ADD32(0, 0XE5);
            goto L_808006B8;
    }
    // 0x808006B0: addiu       $t9, $zero, 0xE5
    ctx->r25 = ADD32(0, 0XE5);
    // 0x808006B4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_808006B8:
    // 0x808006B8: jal         0x80097AD0
    // 0x808006BC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80097AD0(rdram, ctx);
        goto after_15;
    // 0x808006BC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_15:
    // 0x808006C0: beq         $v0, $zero, L_808006D4
    if (ctx->r2 == 0) {
        // 0x808006C4: nop
    
            goto L_808006D4;
    }
    // 0x808006C4: nop

    // 0x808006C8: jal         0x800848A8
    // 0x808006CC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    _badrone_entrypoint_24(rdram, ctx);
        goto after_16;
    // 0x808006CC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_16:
    // 0x808006D0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_808006D4:
    // 0x808006D4: jal         0x80096500
    // 0x808006D8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80096500(rdram, ctx);
        goto after_17;
    // 0x808006D8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_17:
    // 0x808006DC: beq         $v0, $zero, L_808006F8
    if (ctx->r2 == 0) {
        // 0x808006E0: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_808006F8;
    }
    // 0x808006E0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808006E4: jal         0x80091A58
    // 0x808006E8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_18;
    // 0x808006E8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_18:
    // 0x808006EC: beq         $v0, $zero, L_808006F8
    if (ctx->r2 == 0) {
        // 0x808006F0: addiu       $t0, $zero, 0xE8
        ctx->r8 = ADD32(0, 0XE8);
            goto L_808006F8;
    }
    // 0x808006F0: addiu       $t0, $zero, 0xE8
    ctx->r8 = ADD32(0, 0XE8);
    // 0x808006F4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_808006F8:
    // 0x808006F8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808006FC: jal         0x8009E5C8
    // 0x80800700: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_19;
    // 0x80800700: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_19:
    // 0x80800704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800708: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080070C: jr          $ra
    // 0x80800710: nop

    return;
    // 0x80800710: nop

;}
RECOMP_FUNC void func_80800714_bsmumswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800714: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800718: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080071C: jal         0x80000198
    // 0x80800720: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800198_bsmumswim(rdram, ctx);
        goto after_0;
    // 0x80800720: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800724: jal         0x800A4E30
    // 0x80800728: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4E30(rdram, ctx);
        goto after_1;
    // 0x80800728: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080072C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800734: jr          $ra
    // 0x80800738: nop

    return;
    // 0x80800738: nop

;}
RECOMP_FUNC void bsmumswim_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080073C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800740: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(139, 0XB40) << 16);
    // 0x80800744: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800748: jr          $ra
    // 0x8080074C: lw          $v0, 0xB40($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(139, 0XB40));
    return;
    // 0x8080074C: lw          $v0, 0xB40($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(139, 0XB40));
;}
RECOMP_FUNC void func_80800750_bsmumswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800750: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800754: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800758: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8080075C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800760: jal         0x8008CABC
    // 0x80800764: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800764: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800768: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8080076C: jal         0x8009E710
    // 0x80800770: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009E710(rdram, ctx);
        goto after_1;
    // 0x80800770: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80800774: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    // 0x80800778: bne         $v0, $at, L_8080078C
    if (ctx->r2 != ctx->r1) {
        // 0x8080077C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8080078C;
    }
    // 0x8080077C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800780: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(139, 0XB24) << 16);
    // 0x80800784: b           L_80800794
    // 0x80800788: lwc1        $f0, 0xB24($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(139, 0XB24));
        goto L_80800794;
    // 0x80800788: lwc1        $f0, 0xB24($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(139, 0XB24));
L_8080078C:
    // 0x8080078C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(139, 0XB28) << 16);
    // 0x80800790: lwc1        $f0, 0xB28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(139, 0XB28));
L_80800794:
    // 0x80800794: jal         0x80000114
    // 0x80800798: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_80800114_bsmumswim(rdram, ctx);
        goto after_2;
    // 0x80800798: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x8080079C: jal         0x8008AF24
    // 0x808007A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_3;
    // 0x808007A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808007A4: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x808007A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007AC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808007B0: jal         0x8008B1C8
    // 0x808007B4: nop

    func_8008B1C8(rdram, ctx);
        goto after_4;
    // 0x808007B4: nop

    after_4:
    // 0x808007B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007BC: jal         0x8008AED4
    // 0x808007C0: addiu       $a1, $zero, 0x9C
    ctx->r5 = ADD32(0, 0X9C);
    func_8008AED4(rdram, ctx);
        goto after_5;
    // 0x808007C0: addiu       $a1, $zero, 0x9C
    ctx->r5 = ADD32(0, 0X9C);
    after_5:
    // 0x808007C4: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x808007C8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808007CC: jal         0x8008B24C
    // 0x808007D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_6;
    // 0x808007D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808007D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007D8: jal         0x8008B134
    // 0x808007DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_7;
    // 0x808007DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x808007E0: jal         0x8008B064
    // 0x808007E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_8;
    // 0x808007E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808007E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808007EC: jal         0x8008CA4C
    // 0x808007F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008CA4C(rdram, ctx);
        goto after_9;
    // 0x808007F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x808007F4: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x808007F8: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x808007FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800800: jal         0x8008C9BC
    // 0x80800804: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_10;
    // 0x80800804: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_10:
    // 0x80800808: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8080080C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800810: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800814: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x80800818: lui         $a2, 0x43AF
    ctx->r6 = S32(0X43AF << 16);
    // 0x8080081C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80800820: jal         0x8008C9F0
    // 0x80800824: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_11;
    // 0x80800824: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x80800828: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080082C: jal         0x8009C908
    // 0x80800830: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009C908(rdram, ctx);
        goto after_12;
    // 0x80800830: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_12:
    // 0x80800834: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800838: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x8080083C: jal         0x8009C99C
    // 0x80800840: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_13;
    // 0x80800840: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_13:
    // 0x80800844: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800848: jal         0x8009D2D8
    // 0x8080084C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D2D8(rdram, ctx);
        goto after_14;
    // 0x8080084C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x80800850: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800854: jal         0x8009B800
    // 0x80800858: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009B800(rdram, ctx);
        goto after_15;
    // 0x80800858: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_15:
    // 0x8080085C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800860: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800864: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800868: jr          $ra
    // 0x8080086C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8080086C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80800870_bsmumswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800870: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800874: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800878: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080087C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800880: jal         0x8008CABC
    // 0x80800884: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800884: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800888: lui         $a1, 0x3EC2
    ctx->r5 = S32(0X3EC2 << 16);
    // 0x8080088C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800890: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    // 0x80800894: jal         0x8008B348
    // 0x80800898: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B348(rdram, ctx);
        goto after_1;
    // 0x80800898: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8080089C: beq         $v0, $zero, L_808008AC
    if (ctx->r2 == 0) {
        // 0x808008A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008AC;
    }
    // 0x808008A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008A4: jal         0x8009FD24
    // 0x808008A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009FD24(rdram, ctx);
        goto after_2;
    // 0x808008A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_808008AC:
    // 0x808008AC: lui         $a1, 0x3F61
    ctx->r5 = S32(0X3F61 << 16);
    // 0x808008B0: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    // 0x808008B4: jal         0x8008B348
    // 0x808008B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_3;
    // 0x808008B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x808008BC: beq         $v0, $zero, L_808008CC
    if (ctx->r2 == 0) {
        // 0x808008C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008CC;
    }
    // 0x808008C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008C4: jal         0x8009FD24
    // 0x808008C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009FD24(rdram, ctx);
        goto after_4;
    // 0x808008C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_808008CC:
    // 0x808008CC: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x808008D0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808008D4: jal         0x8008B348
    // 0x808008D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_5;
    // 0x808008D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x808008DC: beq         $v0, $zero, L_808008FC
    if (ctx->r2 == 0) {
        // 0x808008E0: lui         $a2, 0x3F66
        ctx->r6 = S32(0X3F66 << 16);
            goto L_808008FC;
    }
    // 0x808008E0: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x808008E4: lui         $a3, 0x3F8C
    ctx->r7 = S32(0X3F8C << 16);
    // 0x808008E8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x808008EC: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808008F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008F4: jal         0x8009DE74
    // 0x808008F8: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    func_8009DE74(rdram, ctx);
        goto after_6;
    // 0x808008F8: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    after_6:
L_808008FC:
    // 0x808008FC: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x80800900: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80800904: jal         0x8008B348
    // 0x80800908: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x80800908: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_7:
    // 0x8080090C: beq         $v0, $zero, L_8080092C
    if (ctx->r2 == 0) {
        // 0x80800910: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080092C;
    }
    // 0x80800910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800914: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x80800918: lui         $a3, 0x3F8C
    ctx->r7 = S32(0X3F8C << 16);
    // 0x8080091C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800920: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800924: jal         0x8009DE74
    // 0x80800928: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    func_8009DE74(rdram, ctx);
        goto after_8;
    // 0x80800928: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    after_8:
L_8080092C:
    // 0x8080092C: jal         0x800000B0
    // 0x80800930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000B0_bsmumswim(rdram, ctx);
        goto after_9;
    // 0x80800930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800934: jal         0x8009EF10
    // 0x80800938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_10;
    // 0x80800938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8080093C: bne         $v0, $zero, L_80800948
    if (ctx->r2 != 0) {
        // 0x80800940: addiu       $t6, $zero, 0xF0
        ctx->r14 = ADD32(0, 0XF0);
            goto L_80800948;
    }
    // 0x80800940: addiu       $t6, $zero, 0xF0
    ctx->r14 = ADD32(0, 0XF0);
    // 0x80800944: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800948:
    // 0x80800948: jal         0x8008E35C
    // 0x8080094C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_11;
    // 0x8080094C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800950: bne         $v0, $zero, L_8080095C
    if (ctx->r2 != 0) {
        // 0x80800954: addiu       $t7, $zero, 0xE5
        ctx->r15 = ADD32(0, 0XE5);
            goto L_8080095C;
    }
    // 0x80800954: addiu       $t7, $zero, 0xE5
    ctx->r15 = ADD32(0, 0XE5);
    // 0x80800958: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_8080095C:
    // 0x8080095C: jal         0x80096500
    // 0x80800960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096500(rdram, ctx);
        goto after_12;
    // 0x80800960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800964: beq         $v0, $zero, L_80800980
    if (ctx->r2 == 0) {
        // 0x80800968: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800980;
    }
    // 0x80800968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080096C: jal         0x80091A58
    // 0x80800970: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_13;
    // 0x80800970: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_13:
    // 0x80800974: beq         $v0, $zero, L_80800980
    if (ctx->r2 == 0) {
        // 0x80800978: addiu       $t8, $zero, 0xE8
        ctx->r24 = ADD32(0, 0XE8);
            goto L_80800980;
    }
    // 0x80800978: addiu       $t8, $zero, 0xE8
    ctx->r24 = ADD32(0, 0XE8);
    // 0x8080097C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80800980:
    // 0x80800980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800984: jal         0x8009E5C8
    // 0x80800988: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_14;
    // 0x80800988: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_14:
    // 0x8080098C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800990: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800994: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800998: jr          $ra
    // 0x8080099C: nop

    return;
    // 0x8080099C: nop

;}
RECOMP_FUNC void func_808009A0_bsmumswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808009A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808009A8: jal         0x80000198
    // 0x808009AC: nop

    func_80800198_bsmumswim(rdram, ctx);
        goto after_0;
    // 0x808009AC: nop

    after_0:
    // 0x808009B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808009B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808009B8: jr          $ra
    // 0x808009BC: nop

    return;
    // 0x808009BC: nop

;}
RECOMP_FUNC void bsmumswim_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009C0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808009C4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(139, 0XB50) << 16);
    // 0x808009C8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808009CC: jr          $ra
    // 0x808009D0: lw          $v0, 0xB50($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(139, 0XB50));
    return;
    // 0x808009D0: lw          $v0, 0xB50($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(139, 0XB50));
;}
RECOMP_FUNC void func_808009D4_bsmumswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808009D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808009DC: jal         0x800839B8
    // 0x808009E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x808009E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808009E4: jal         0x80000198
    // 0x808009E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800198_bsmumswim(rdram, ctx);
        goto after_1;
    // 0x808009E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808009EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808009F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808009F4: jr          $ra
    // 0x808009F8: nop

    return;
    // 0x808009F8: nop

;}
RECOMP_FUNC void func_808009FC_bsmumswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800A00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A04: jal         0x80000114
    // 0x80800A08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800114_bsmumswim(rdram, ctx);
        goto after_0;
    // 0x80800A08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800A0C: jal         0x800839C8
    // 0x80800A10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
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
RECOMP_FUNC void func_80800A24_bsmumswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800A28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A2C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800A30: jal         0x800839E8
    // 0x80800A34: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x80800A34: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800A38: beq         $v0, $zero, L_80800A44
    if (ctx->r2 == 0) {
        // 0x80800A3C: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80800A44;
    }
    // 0x80800A3C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800A40: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
L_80800A44:
    // 0x80800A44: jal         0x8009E5C8
    // 0x80800A48: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_1;
    // 0x80800A48: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800A4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800A54: jr          $ra
    // 0x80800A58: nop

    return;
    // 0x80800A58: nop

;}
RECOMP_FUNC void bsmumswim_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A5C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800A60: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(139, 0XB60) << 16);
    // 0x80800A64: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800A68: jr          $ra
    // 0x80800A6C: lw          $v0, 0xB60($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(139, 0XB60));
    return;
    // 0x80800A6C: lw          $v0, 0xB60($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(139, 0XB60));
;}
RECOMP_FUNC void func_80800A70_bsmumswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800A74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A78: jal         0x80000114
    // 0x80800A7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800114_bsmumswim(rdram, ctx);
        goto after_0;
    // 0x80800A7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800A80: jal         0x80082FE0
    // 0x80800A84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800A84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A90: jr          $ra
    // 0x80800A94: nop

    return;
    // 0x80800A94: nop

;}
RECOMP_FUNC void func_80800A98_bsmumswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800A9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800AA0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800AA4: jal         0x800848D8
    // 0x80800AA8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _badrone_entrypoint_30(rdram, ctx);
        goto after_0;
    // 0x80800AA8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800AAC: beq         $v0, $zero, L_80800AB8
    if (ctx->r2 == 0) {
        // 0x80800AB0: addiu       $t6, $zero, 0xE5
        ctx->r14 = ADD32(0, 0XE5);
            goto L_80800AB8;
    }
    // 0x80800AB0: addiu       $t6, $zero, 0xE5
    ctx->r14 = ADD32(0, 0XE5);
    // 0x80800AB4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80800AB8:
    // 0x80800AB8: jal         0x80082FE8
    // 0x80800ABC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800ABC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800AC0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800AC4: jal         0x8009E5C8
    // 0x80800AC8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80800AC8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80800ACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800AD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800AD4: jr          $ra
    // 0x80800AD8: nop

    return;
    // 0x80800AD8: nop

;}
RECOMP_FUNC void func_80800ADC_bsmumswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800ADC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800AE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800AE4: jal         0x80082FF0
    // 0x80800AE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800AE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800AEC: jal         0x80000198
    // 0x80800AF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800198_bsmumswim(rdram, ctx);
        goto after_1;
    // 0x80800AF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800AF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800AFC: jr          $ra
    // 0x80800B00: nop

    return;
    // 0x80800B00: nop

;}
RECOMP_FUNC void bsmumswim_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B04: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800B08: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(139, 0XB70) << 16);
    // 0x80800B0C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800B10: jr          $ra
    // 0x80800B14: lw          $v0, 0xB70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(139, 0XB70));
    return;
    // 0x80800B14: lw          $v0, 0xB70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(139, 0XB70));
    // 0x80800B18: nop

    // 0x80800B1C: nop

;}
RECOMP_FUNC void bsow_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080000C: jal         0x800845D8
    // 0x80800010: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80800010: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800014: lui         $a2, 0x3F08
    ctx->r6 = S32(0X3F08 << 16);
    // 0x80800018: ori         $a2, $a2, 0xCE70
    ctx->r6 = ctx->r6 | 0XCE70;
    // 0x8080001C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800020: jal         0x800845E0
    // 0x80800024: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
    _babounce_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800024: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
    after_1:
    // 0x80800028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080002C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800030: jr          $ra
    // 0x80800034: nop

    return;
    // 0x80800034: nop

;}
RECOMP_FUNC void bsow_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800038: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080003C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800040: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800044: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800048: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080004C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80800050: jal         0x8008CB10
    // 0x80800054: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x80800054: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    after_0:
    // 0x80800058: beq         $v0, $zero, L_80800068
    if (ctx->r2 == 0) {
        // 0x8080005C: nop
    
            goto L_80800068;
    }
    // 0x8080005C: nop

    // 0x80800060: jal         0x800951B4
    // 0x80800064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_1;
    // 0x80800064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_80800068:
    // 0x80800068: jal         0x800845C8
    // 0x8080006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babounce_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x8080006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800070: beq         $v0, $zero, L_80800080
    if (ctx->r2 == 0) {
        // 0x80800074: nop
    
            goto L_80800080;
    }
    // 0x80800074: nop

    // 0x80800078: jal         0x800841D8
    // 0x8080007C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bswalk_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x8080007C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80800080:
    // 0x80800080: jal         0x80084600
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babounce_entrypoint_9(rdram, ctx);
        goto after_4;
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800088: beq         $v0, $zero, L_80800094
    if (ctx->r2 == 0) {
        // 0x8080008C: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80800094;
    }
    // 0x8080008C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800090: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800094:
    // 0x80800094: jal         0x800845C0
    // 0x80800098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babounce_entrypoint_1(rdram, ctx);
        goto after_5;
    // 0x80800098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080009C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808000A0: bnel        $v0, $at, L_808000F4
    if (ctx->r2 != ctx->r1) {
        // 0x808000A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000F4;
    }
    goto skip_0;
    // 0x808000A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808000A8: jal         0x8008E260
    // 0x808000AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_6;
    // 0x808000AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808000B0: beq         $v0, $zero, L_808000BC
    if (ctx->r2 == 0) {
        // 0x808000B4: addiu       $t7, $zero, 0x3D
        ctx->r15 = ADD32(0, 0X3D);
            goto L_808000BC;
    }
    // 0x808000B4: addiu       $t7, $zero, 0x3D
    ctx->r15 = ADD32(0, 0X3D);
    // 0x808000B8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_808000BC:
    // 0x808000BC: jal         0x8008E35C
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_7;
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808000C4: beql        $v0, $zero, L_808000F4
    if (ctx->r2 == 0) {
        // 0x808000C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000F4;
    }
    goto skip_1;
    // 0x808000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808000CC: jal         0x8009BB50
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_8;
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808000D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808000D8: addiu       $t8, $zero, 0x4C
    ctx->r24 = ADD32(0, 0X4C);
    // 0x808000DC: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x808000E0: nop

    // 0x808000E4: bc1fl       L_808000F4
    if (!c1cs) {
        // 0x808000E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000F4;
    }
    goto skip_2;
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x808000EC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x808000F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808000F4:
    // 0x808000F4: jal         0x8009E5C8
    // 0x808000F8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_9;
    // 0x808000F8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_9:
    // 0x808000FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800100: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800104: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800108: jr          $ra
    // 0x8080010C: nop

    return;
    // 0x8080010C: nop

;}
RECOMP_FUNC void bsow_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800118: jal         0x800845D0
    // 0x8080011C: nop

    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x8080011C: nop

    after_0:
    // 0x80800120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800128: jr          $ra
    // 0x8080012C: nop

    return;
    // 0x8080012C: nop

;}
RECOMP_FUNC void bsow_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800130: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800134: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(140, 0X150) << 16);
    // 0x80800138: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080013C: jr          $ra
    // 0x80800140: lw          $v0, 0x150($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(140, 0X150));
    return;
    // 0x80800140: lw          $v0, 0x150($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(140, 0X150));
    // 0x80800144: nop

    // 0x80800148: nop

    // 0x8080014C: nop

;}
RECOMP_FUNC void func_80800000_bsrebound(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080000C: jal         0x800845D8
    // 0x80800010: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80800010: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80800014: lui         $a2, 0x3F15
    ctx->r6 = S32(0X3F15 << 16);
    // 0x80800018: ori         $a2, $a2, 0x119D
    ctx->r6 = ctx->r6 | 0X119D;
    // 0x8080001C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800020: jal         0x800845E0
    // 0x80800024: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    _babounce_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800024: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_1:
    // 0x80800028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080002C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800030: jr          $ra
    // 0x80800034: nop

    return;
    // 0x80800034: nop

;}
RECOMP_FUNC void func_80800038_bsrebound(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800038: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080003C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800040: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800044: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800048: jal         0x8008CABC
    // 0x8080004C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080004C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800050: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800054: jal         0x800845C8
    // 0x80800058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babounce_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080005C: beq         $v0, $zero, L_8080006C
    if (ctx->r2 == 0) {
        // 0x80800060: nop
    
            goto L_8080006C;
    }
    // 0x80800060: nop

    // 0x80800064: jal         0x800841D8
    // 0x80800068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bswalk_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80800068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_8080006C:
    // 0x8080006C: jal         0x80084600
    // 0x80800070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babounce_entrypoint_9(rdram, ctx);
        goto after_3;
    // 0x80800070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800074: beq         $v0, $zero, L_80800080
    if (ctx->r2 == 0) {
        // 0x80800078: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80800080;
    }
    // 0x80800078: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8080007C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800080:
    // 0x80800080: jal         0x800845C0
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babounce_entrypoint_1(rdram, ctx);
        goto after_4;
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800088: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080008C: bnel        $v0, $at, L_808000D0
    if (ctx->r2 != ctx->r1) {
        // 0x80800090: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000D0;
    }
    goto skip_0;
    // 0x80800090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800094: jal         0x8008E260
    // 0x80800098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_5;
    // 0x80800098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080009C: beq         $v0, $zero, L_808000A8
    if (ctx->r2 == 0) {
        // 0x808000A0: addiu       $t7, $zero, 0x3D
        ctx->r15 = ADD32(0, 0X3D);
            goto L_808000A8;
    }
    // 0x808000A0: addiu       $t7, $zero, 0x3D
    ctx->r15 = ADD32(0, 0X3D);
    // 0x808000A4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_808000A8:
    // 0x808000A8: jal         0x8008B324
    // 0x808000AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_6;
    // 0x808000AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_6:
    // 0x808000B0: beql        $v0, $zero, L_808000D0
    if (ctx->r2 == 0) {
        // 0x808000B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000D0;
    }
    goto skip_1;
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808000B8: jal         0x8008DD04
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_7;
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808000C0: beq         $v0, $zero, L_808000CC
    if (ctx->r2 == 0) {
        // 0x808000C4: addiu       $t8, $zero, 0x2F
        ctx->r24 = ADD32(0, 0X2F);
            goto L_808000CC;
    }
    // 0x808000C4: addiu       $t8, $zero, 0x2F
    ctx->r24 = ADD32(0, 0X2F);
    // 0x808000C8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_808000CC:
    // 0x808000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808000D0:
    // 0x808000D0: jal         0x8009E5C8
    // 0x808000D4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_8;
    // 0x808000D4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x808000D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808000E4: jr          $ra
    // 0x808000E8: nop

    return;
    // 0x808000E8: nop

;}
RECOMP_FUNC void func_808000EC_bsrebound(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000F4: jal         0x800845D0
    // 0x808000F8: nop

    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x808000F8: nop

    after_0:
    // 0x808000FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800100: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800104: jr          $ra
    // 0x80800108: nop

    return;
    // 0x80800108: nop

;}
RECOMP_FUNC void bsrebound_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080010C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800110: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(141, 0X120) << 16);
    // 0x80800114: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800118: jr          $ra
    // 0x8080011C: lw          $v0, 0x120($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(141, 0X120));
    return;
    // 0x8080011C: lw          $v0, 0x120($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(141, 0X120));
;}
RECOMP_FUNC void func_80800000_bsrest(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080000C: jal         0x8009B9B0
    // 0x80800010: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_0;
    // 0x80800010: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x80800014: jal         0x8008E078
    // 0x80800018: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E078(rdram, ctx);
        goto after_1;
    // 0x80800018: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080001C: beq         $v0, $zero, L_8080002C
    if (ctx->r2 == 0) {
        // 0x80800020: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8080002C;
    }
    // 0x80800020: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800024: jal         0x8009BA9C
    // 0x80800028: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_2;
    // 0x80800028: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
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
RECOMP_FUNC void func_8080003C_bsrest(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080003C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800044: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800048: jal         0x80095748
    // 0x8080004C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    func_80095748(rdram, ctx);
        goto after_0;
    // 0x8080004C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_0:
    // 0x80800050: bne         $v0, $zero, L_80800070
    if (ctx->r2 != 0) {
        // 0x80800054: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800070;
    }
    // 0x80800054: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800058: jal         0x80095774
    // 0x8080005C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    func_80095774(rdram, ctx);
        goto after_1;
    // 0x8080005C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_1:
    // 0x80800060: jal         0x800A4CA8
    // 0x80800064: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4CA8(rdram, ctx);
        goto after_2;
    // 0x80800064: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800068: jal         0x80110C2C
    // 0x8080006C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110C2C(rdram, ctx);
        goto after_3;
    // 0x8080006C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
L_80800070:
    // 0x80800070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800074: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800078: jr          $ra
    // 0x8080007C: nop

    return;
    // 0x8080007C: nop

;}
RECOMP_FUNC void func_80800080_bsrest(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800080: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800088: jal         0x800A4CA8
    // 0x8080008C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_800A4CA8(rdram, ctx);
        goto after_0;
    // 0x8080008C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800090: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80800094: jal         0x8009CC68
    // 0x80800098: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8009CC68(rdram, ctx);
        goto after_1;
    // 0x80800098: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x8080009C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808000A0: bne         $v0, $at, L_808000D4
    if (ctx->r2 != ctx->r1) {
        // 0x808000A4: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_808000D4;
    }
    // 0x808000A4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808000A8: jal         0x80095760
    // 0x808000AC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    func_80095760(rdram, ctx);
        goto after_2;
    // 0x808000AC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_2:
    // 0x808000B0: jal         0x80110BF0
    // 0x808000B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80110BF0(rdram, ctx);
        goto after_3;
    // 0x808000B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x808000B8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808000BC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x808000C0: jal         0x800F3BD0
    // 0x808000C4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_800F3BD0(rdram, ctx);
        goto after_4;
    // 0x808000C4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_4:
    // 0x808000C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808000CC: jal         0x800893F8
    // 0x808000D0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    _ncba1p_entrypoint_6(rdram, ctx);
        goto after_5;
    // 0x808000D0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_5:
L_808000D4:
    // 0x808000D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808000DC: jr          $ra
    // 0x808000E0: nop

    return;
    // 0x808000E0: nop

;}
RECOMP_FUNC void func_808000E4_bsrest(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000E4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x808000E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000F0: jal         0x800A4CA8
    // 0x808000F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_0;
    // 0x808000F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808000F8: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x808000FC: jal         0x8009CC68
    // 0x80800100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009CC68(rdram, ctx);
        goto after_1;
    // 0x80800100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800104: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800108: bne         $v0, $at, L_80800174
    if (ctx->r2 != ctx->r1) {
        // 0x8080010C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800174;
    }
    // 0x8080010C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800110: jal         0x80095748
    // 0x80800114: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    func_80095748(rdram, ctx);
        goto after_2;
    // 0x80800114: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_2:
    // 0x80800118: bne         $v0, $zero, L_80800174
    if (ctx->r2 != 0) {
        // 0x8080011C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800174;
    }
    // 0x8080011C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800120: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80800124: jal         0x800F3BD0
    // 0x80800128: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    func_800F3BD0(rdram, ctx);
        goto after_3;
    // 0x80800128: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x8080012C: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x80800130: jal         0x800893F8
    // 0x80800134: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    _ncba1p_entrypoint_6(rdram, ctx);
        goto after_4;
    // 0x80800134: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_4:
    // 0x80800138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080013C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80800140: jal         0x800F3BD0
    // 0x80800144: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    func_800F3BD0(rdram, ctx);
        goto after_5;
    // 0x80800144: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_5:
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080014C: jal         0x8009CC18
    // 0x80800150: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_8009CC18(rdram, ctx);
        goto after_6;
    // 0x80800150: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_6:
    // 0x80800154: addiu       $s0, $sp, 0x48
    ctx->r16 = ADD32(ctx->r29, 0X48);
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080015C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80800160: jal         0x800A516C
    // 0x80800164: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    func_800A516C(rdram, ctx);
        goto after_7;
    // 0x80800164: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_7:
    // 0x80800168: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x8080016C: jal         0x80089400
    // 0x80800170: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    _ncba1p_entrypoint_7(rdram, ctx);
        goto after_8;
    // 0x80800170: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
L_80800174:
    // 0x80800174: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800178: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080017C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80800180: jr          $ra
    // 0x80800184: nop

    return;
    // 0x80800184: nop

;}
RECOMP_FUNC void bsrest_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800188: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8080018C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800190: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800194: jal         0x8009CC68
    // 0x80800198: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009CC68(rdram, ctx);
        goto after_0;
    // 0x80800198: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080019C: beq         $v0, $zero, L_808001F8
    if (ctx->r2 == 0) {
        // 0x808001A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001F8;
    }
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A4: jal         0x8009C128
    // 0x808001A8: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x808001A8: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x808001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B0: jal         0x8009CC18
    // 0x808001B4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009CC18(rdram, ctx);
        goto after_2;
    // 0x808001B4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x808001B8: bne         $v0, $zero, L_808001DC
    if (ctx->r2 != 0) {
        // 0x808001BC: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_808001DC;
    }
    // 0x808001BC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x808001C0: jal         0x800A4CA8
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_3;
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808001C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808001CC: jal         0x801160DC
    // 0x808001D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_801160DC(rdram, ctx);
        goto after_4;
    // 0x808001D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x808001D4: b           L_808001FC
    // 0x808001D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808001FC;
    // 0x808001D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808001DC:
    // 0x808001DC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x808001E0: jal         0x800F1E6C
    // 0x808001E4: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    func_800F1E6C(rdram, ctx);
        goto after_5;
    // 0x808001E4: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_5:
    // 0x808001E8: beq         $v0, $zero, L_808001F8
    if (ctx->r2 == 0) {
        // 0x808001EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001F8;
    }
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F0: jal         0x8009C914
    // 0x808001F4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_8009C914(rdram, ctx);
        goto after_6;
    // 0x808001F4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_6:
L_808001F8:
    // 0x808001F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808001FC:
    // 0x808001FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800200: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80800204: jr          $ra
    // 0x80800208: nop

    return;
    // 0x80800208: nop

;}
RECOMP_FUNC void func_8080020C_bsrest(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080020C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800210: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800214: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800218: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080021C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80800220: jal         0x8008CABC
    // 0x80800224: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800224: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800228: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8080022C: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x80800230: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80800234: bne         $a3, $at, L_808002E0
    if (ctx->r7 != ctx->r1) {
        // 0x80800238: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002E0;
    }
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800240: jal         0x800A0CF4
    // 0x80800244: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_1;
    // 0x80800244: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800248: jal         0x8008CABC
    // 0x8080024C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CABC(rdram, ctx);
        goto after_2;
    // 0x8080024C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800250: jal         0x8008B264
    // 0x80800254: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B264(rdram, ctx);
        goto after_3;
    // 0x80800254: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x80800258: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x8080025C: beq         $v0, $at, L_80800278
    if (ctx->r2 == ctx->r1) {
        // 0x80800260: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800278;
    }
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800264: addiu       $at, $zero, 0x5B
    ctx->r1 = ADD32(0, 0X5B);
    // 0x80800268: beq         $v0, $at, L_8080028C
    if (ctx->r2 == ctx->r1) {
        // 0x8080026C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080028C;
    }
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800270: b           L_808002C4
    // 0x80800274: addiu       $a1, $zero, 0x5B
    ctx->r5 = ADD32(0, 0X5B);
        goto L_808002C4;
    // 0x80800274: addiu       $a1, $zero, 0x5B
    ctx->r5 = ADD32(0, 0X5B);
L_80800278:
    // 0x80800278: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8080027C: jal         0x8008CB3C
    // 0x80800280: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    func_8008CB3C(rdram, ctx);
        goto after_4;
    // 0x80800280: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    after_4:
    // 0x80800284: b           L_808002F0
    // 0x80800288: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
        goto L_808002F0;
    // 0x80800288: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
L_8080028C:
    // 0x8080028C: jal         0x8008AF24
    // 0x80800290: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008AF24(rdram, ctx);
        goto after_5;
    // 0x80800290: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x80800294: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80800298: jal         0x8008AED4
    // 0x8080029C: addiu       $a1, $zero, 0x5B
    ctx->r5 = ADD32(0, 0X5B);
    func_8008AED4(rdram, ctx);
        goto after_6;
    // 0x8080029C: addiu       $a1, $zero, 0x5B
    ctx->r5 = ADD32(0, 0X5B);
    after_6:
    // 0x808002A0: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x808002A4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808002A8: jal         0x8008B1BC
    // 0x808002AC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008B1BC(rdram, ctx);
        goto after_7;
    // 0x808002AC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_7:
    // 0x808002B0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x808002B4: jal         0x8008B134
    // 0x808002B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x808002B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x808002BC: b           L_808002F0
    // 0x808002C0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
        goto L_808002F0;
    // 0x808002C0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
L_808002C4:
    // 0x808002C4: jal         0x8008CCBC
    // 0x808002C8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_9;
    // 0x808002C8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_9:
    // 0x808002CC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x808002D0: jal         0x8008B134
    // 0x808002D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_10;
    // 0x808002D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x808002D8: b           L_808002F0
    // 0x808002DC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
        goto L_808002F0;
    // 0x808002DC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
L_808002E0:
    // 0x808002E0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x808002E4: jal         0x8008CB3C
    // 0x808002E8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    func_8008CB3C(rdram, ctx);
        goto after_11;
    // 0x808002E8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    after_11:
    // 0x808002EC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
L_808002F0:
    // 0x808002F0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808002F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808002FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800300: jal         0x8009FFD8
    // 0x80800304: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_12;
    // 0x80800304: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_12:
    // 0x80800308: jal         0x80000000
    // 0x8080030C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsrest(rdram, ctx);
        goto after_13;
    // 0x8080030C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800310: jal         0x80000188
    // 0x80800314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bsrest_entrypoint_0(rdram, ctx);
        goto after_14;
    // 0x80800314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800318: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080031C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800320: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800324: jr          $ra
    // 0x80800328: nop

    return;
    // 0x80800328: nop

;}
RECOMP_FUNC void func_8080032C_bsrest(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080032C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800330: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800334: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800338: jal         0x8008CABC
    // 0x8080033C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080033C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800340: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800344: jal         0x80000188
    // 0x80800348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bsrest_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080034C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80800350: jal         0x8008B264
    // 0x80800354: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B264(rdram, ctx);
        goto after_2;
    // 0x80800354: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80800358: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x8080035C: beq         $v0, $at, L_808003BC
    if (ctx->r2 == ctx->r1) {
        // 0x80800360: addiu       $at, $zero, 0x5B
        ctx->r1 = ADD32(0, 0X5B);
            goto L_808003BC;
    }
    // 0x80800360: addiu       $at, $zero, 0x5B
    ctx->r1 = ADD32(0, 0X5B);
    // 0x80800364: bne         $v0, $at, L_808003D4
    if (ctx->r2 != ctx->r1) {
        // 0x80800368: nop
    
            goto L_808003D4;
    }
    // 0x80800368: nop

    // 0x8080036C: jal         0x8008CAEC
    // 0x80800370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_3;
    // 0x80800370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800374: beql        $v0, $zero, L_808003EC
    if (ctx->r2 == 0) {
        // 0x80800378: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808003EC;
    }
    goto skip_0;
    // 0x80800378: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8080037C: jal         0x8008B28C
    // 0x80800380: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B28C(rdram, ctx);
        goto after_4;
    // 0x80800380: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x80800384: beq         $v0, $zero, L_808003A4
    if (ctx->r2 == 0) {
        // 0x80800388: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003A4;
    }
    // 0x80800388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080038C: lui         $a2, 0x4136
    ctx->r6 = S32(0X4136 << 16);
    // 0x80800390: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800394: jal         0x8008CB3C
    // 0x80800398: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    func_8008CB3C(rdram, ctx);
        goto after_5;
    // 0x80800398: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_5:
    // 0x8080039C: b           L_808003EC
    // 0x808003A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808003EC;
    // 0x808003A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808003A4:
    // 0x808003A4: jal         0x8009CC68
    // 0x808003A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009CC68(rdram, ctx);
        goto after_6;
    // 0x808003A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808003AC: bne         $v0, $zero, L_808003E8
    if (ctx->r2 != 0) {
        // 0x808003B0: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_808003E8;
    }
    // 0x808003B0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808003B4: b           L_808003E8
    // 0x808003B8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
        goto L_808003E8;
    // 0x808003B8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
L_808003BC:
    // 0x808003BC: jal         0x8009CC68
    // 0x808003C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009CC68(rdram, ctx);
        goto after_7;
    // 0x808003C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808003C4: bne         $v0, $zero, L_808003E8
    if (ctx->r2 != 0) {
        // 0x808003C8: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_808003E8;
    }
    // 0x808003C8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x808003CC: b           L_808003E8
    // 0x808003D0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
        goto L_808003E8;
    // 0x808003D0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
L_808003D4:
    // 0x808003D4: jal         0x8009CC68
    // 0x808003D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009CC68(rdram, ctx);
        goto after_8;
    // 0x808003D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808003DC: bne         $v0, $zero, L_808003E8
    if (ctx->r2 != 0) {
        // 0x808003E0: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_808003E8;
    }
    // 0x808003E0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x808003E4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
L_808003E8:
    // 0x808003E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808003EC:
    // 0x808003EC: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x808003F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808003F4: jr          $ra
    // 0x808003F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x808003F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_808003FC_bsrest(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800400: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800404: jal         0x800A0C20
    // 0x80800408: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A0C20(rdram, ctx);
        goto after_0;
    // 0x80800408: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080040C: beq         $v0, $zero, L_80800420
    if (ctx->r2 == 0) {
        // 0x80800410: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800420;
    }
    // 0x80800410: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800414: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800418: jal         0x800A0D14
    // 0x8080041C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_800A0D14(rdram, ctx);
        goto after_1;
    // 0x8080041C: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_1:
L_80800420:
    // 0x80800420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800428: jr          $ra
    // 0x8080042C: nop

    return;
    // 0x8080042C: nop

;}
RECOMP_FUNC void bsrest_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800430: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800434: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800438: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8080043C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80800440: jal         0x80084688
    // 0x80800444: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    _badata_entrypoint_9(rdram, ctx);
        goto after_0;
    // 0x80800444: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80800448: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080044C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800450: jal         0x8000020C
    // 0x80800454: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    func_8080020C_bsrest(rdram, ctx);
        goto after_1;
    // 0x80800454: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080045C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800460: jr          $ra
    // 0x80800464: nop

    return;
    // 0x80800464: nop

;}
RECOMP_FUNC void bsrest_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800468: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080046C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800470: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800474: jal         0x8008E35C
    // 0x80800478: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8008E35C(rdram, ctx);
        goto after_0;
    // 0x80800478: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x8080047C: beq         $v0, $zero, L_80800488
    if (ctx->r2 == 0) {
        // 0x80800480: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80800488;
    }
    // 0x80800480: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800484: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
L_80800488:
    // 0x80800488: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080048C: jal         0x8000032C
    // 0x80800490: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8080032C_bsrest(rdram, ctx);
        goto after_1;
    // 0x80800490: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x80800494: beq         $v0, $zero, L_808004A8
    if (ctx->r2 == 0) {
        // 0x80800498: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_808004A8;
    }
    // 0x80800498: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8080049C: jal         0x8000069C
    // 0x808004A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    bsrest_entrypoint_13(rdram, ctx);
        goto after_2;
    // 0x808004A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x808004A4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_808004A8:
    // 0x808004A8: jal         0x8009E5C8
    // 0x808004AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x808004AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x808004B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808004B8: jr          $ra
    // 0x808004BC: nop

    return;
    // 0x808004BC: nop

;}
RECOMP_FUNC void bsrest_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004C8: jal         0x800003FC
    // 0x808004CC: nop

    func_808003FC_bsrest(rdram, ctx);
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
RECOMP_FUNC void bsrest_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004E0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808004E4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(142, 0X910) << 16);
    // 0x808004E8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808004EC: jr          $ra
    // 0x808004F0: lw          $v0, 0x910($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(142, 0X910));
    return;
    // 0x808004F0: lw          $v0, 0x910($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(142, 0X910));
;}
RECOMP_FUNC void bsrest_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808004F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800500: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80800504: jal         0x80084690
    // 0x80800508: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    _badata_entrypoint_10(rdram, ctx);
        goto after_0;
    // 0x80800508: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x8080050C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800510: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800514: jal         0x8000020C
    // 0x80800518: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    func_8080020C_bsrest(rdram, ctx);
        goto after_1;
    // 0x80800518: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080051C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800520: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800524: jr          $ra
    // 0x80800528: nop

    return;
    // 0x80800528: nop

;}
RECOMP_FUNC void bsrest_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080052C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800530: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800534: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800538: jal         0x8008E35C
    // 0x8080053C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8008E35C(rdram, ctx);
        goto after_0;
    // 0x8080053C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800540: beq         $v0, $zero, L_8080054C
    if (ctx->r2 == 0) {
        // 0x80800544: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_8080054C;
    }
    // 0x80800544: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800548: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
L_8080054C:
    // 0x8080054C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800550: jal         0x8000032C
    // 0x80800554: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8080032C_bsrest(rdram, ctx);
        goto after_1;
    // 0x80800554: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x80800558: beq         $v0, $zero, L_8080056C
    if (ctx->r2 == 0) {
        // 0x8080055C: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_8080056C;
    }
    // 0x8080055C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800560: jal         0x8000069C
    // 0x80800564: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    bsrest_entrypoint_13(rdram, ctx);
        goto after_2;
    // 0x80800564: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800568: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8080056C:
    // 0x8080056C: jal         0x8009E5C8
    // 0x80800570: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x80800570: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x80800574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800578: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080057C: jr          $ra
    // 0x80800580: nop

    return;
    // 0x80800580: nop

;}
RECOMP_FUNC void bsrest_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800584: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800588: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080058C: jal         0x800003FC
    // 0x80800590: nop

    func_808003FC_bsrest(rdram, ctx);
        goto after_0;
    // 0x80800590: nop

    after_0:
    // 0x80800594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800598: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080059C: jr          $ra
    // 0x808005A0: nop

    return;
    // 0x808005A0: nop

;}
RECOMP_FUNC void bsrest_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005A4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808005A8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(142, 0X920) << 16);
    // 0x808005AC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808005B0: jr          $ra
    // 0x808005B4: lw          $v0, 0x920($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(142, 0X920));
    return;
    // 0x808005B4: lw          $v0, 0x920($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(142, 0X920));
;}
RECOMP_FUNC void bsrest_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808005BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808005C4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x808005C8: jal         0x80084698
    // 0x808005CC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    _badata_entrypoint_11(rdram, ctx);
        goto after_0;
    // 0x808005CC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x808005D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808005D4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x808005D8: jal         0x8000020C
    // 0x808005DC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    func_8080020C_bsrest(rdram, ctx);
        goto after_1;
    // 0x808005DC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808005E0: jal         0x80000080
    // 0x808005E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80800080_bsrest(rdram, ctx);
        goto after_2;
    // 0x808005E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x808005E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808005F0: jr          $ra
    // 0x808005F4: nop

    return;
    // 0x808005F4: nop

;}
RECOMP_FUNC void bsrest_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808005FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800600: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800604: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800608: jal         0x800000E4
    // 0x8080060C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_808000E4_bsrest(rdram, ctx);
        goto after_0;
    // 0x8080060C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800610: jal         0x8008E35C
    // 0x80800614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_1;
    // 0x80800614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800618: beq         $v0, $zero, L_80800624
    if (ctx->r2 == 0) {
        // 0x8080061C: addiu       $t6, $zero, 0x77
        ctx->r14 = ADD32(0, 0X77);
            goto L_80800624;
    }
    // 0x8080061C: addiu       $t6, $zero, 0x77
    ctx->r14 = ADD32(0, 0X77);
    // 0x80800620: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800624:
    // 0x80800624: jal         0x8000032C
    // 0x80800628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080032C_bsrest(rdram, ctx);
        goto after_2;
    // 0x80800628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080062C: beql        $v0, $zero, L_80800644
    if (ctx->r2 == 0) {
        // 0x80800630: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800644;
    }
    goto skip_0;
    // 0x80800630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800634: jal         0x8000069C
    // 0x80800638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bsrest_entrypoint_13(rdram, ctx);
        goto after_3;
    // 0x80800638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080063C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800644:
    // 0x80800644: jal         0x8009E5C8
    // 0x80800648: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x80800648: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x8080064C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800650: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800654: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800658: jr          $ra
    // 0x8080065C: nop

    return;
    // 0x8080065C: nop

;}
RECOMP_FUNC void bsrest_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800660: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800668: jal         0x800003FC
    // 0x8080066C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808003FC_bsrest(rdram, ctx);
        goto after_0;
    // 0x8080066C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800670: jal         0x8000003C
    // 0x80800674: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080003C_bsrest(rdram, ctx);
        goto after_1;
    // 0x80800674: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080067C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800680: jr          $ra
    // 0x80800684: nop

    return;
    // 0x80800684: nop

;}
RECOMP_FUNC void bsrest_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800688: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080068C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(142, 0X930) << 16);
    // 0x80800690: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800694: jr          $ra
    // 0x80800698: lw          $v0, 0x930($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(142, 0X930));
    return;
    // 0x80800698: lw          $v0, 0x930($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(142, 0X930));
;}
RECOMP_FUNC void bsrest_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080069C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808006A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808006A4: jal         0x80084C98
    // 0x808006A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bafpctrl_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x808006A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808006AC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808006B0: bne         $v0, $at, L_808006C8
    if (ctx->r2 != ctx->r1) {
        // 0x808006B4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808006C8;
    }
    // 0x808006B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808006B8: jal         0x800848A8
    // 0x808006BC: nop

    _badrone_entrypoint_24(rdram, ctx);
        goto after_1;
    // 0x808006BC: nop

    after_1:
    // 0x808006C0: b           L_808006D4
    // 0x808006C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808006D4;
    // 0x808006C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808006C8:
    // 0x808006C8: jal         0x80084750
    // 0x808006CC: nop

    _badata_entrypoint_34(rdram, ctx);
        goto after_2;
    // 0x808006CC: nop

    after_2:
    // 0x808006D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808006D4:
    // 0x808006D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808006D8: jr          $ra
    // 0x808006DC: nop

    return;
    // 0x808006DC: nop

;}
RECOMP_FUNC void bsrest_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808006E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808006E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808006EC: jal         0x8009BF5C
    // 0x808006F0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_0;
    // 0x808006F0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x808006F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808006F8: jal         0x8009C4CC
    // 0x808006FC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_1;
    // 0x808006FC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80800700: jal         0x8000003C
    // 0x80800704: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080003C_bsrest(rdram, ctx);
        goto after_2;
    // 0x80800704: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800708: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080070C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800710: jr          $ra
    // 0x80800714: nop

    return;
    // 0x80800714: nop

;}
RECOMP_FUNC void bsrest_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800718: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8080071C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800720: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800724: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800728: jal         0x8009CC68
    // 0x8080072C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_8009CC68(rdram, ctx);
        goto after_0;
    // 0x8080072C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800730: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800734: beq         $v0, $at, L_8080075C
    if (ctx->r2 == ctx->r1) {
        // 0x80800738: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080075C;
    }
    // 0x80800738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080073C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800740: beq         $v0, $at, L_80800784
    if (ctx->r2 == ctx->r1) {
        // 0x80800744: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800784;
    }
    // 0x80800744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800748: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8080074C: beq         $v0, $at, L_80800770
    if (ctx->r2 == ctx->r1) {
        // 0x80800750: addiu       $a1, $sp, 0x28
        ctx->r5 = ADD32(ctx->r29, 0X28);
            goto L_80800770;
    }
    // 0x80800750: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80800754: b           L_80800788
    // 0x80800758: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
        goto L_80800788;
    // 0x80800758: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
L_8080075C:
    // 0x8080075C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80800760: jal         0x80084688
    // 0x80800764: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    _badata_entrypoint_9(rdram, ctx);
        goto after_1;
    // 0x80800764: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x80800768: b           L_80800794
    // 0x8080076C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
        goto L_80800794;
    // 0x8080076C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
L_80800770:
    // 0x80800770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800774: jal         0x80084690
    // 0x80800778: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    _badata_entrypoint_10(rdram, ctx);
        goto after_2;
    // 0x80800778: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x8080077C: b           L_80800794
    // 0x80800780: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
        goto L_80800794;
    // 0x80800780: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
L_80800784:
    // 0x80800784: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
L_80800788:
    // 0x80800788: jal         0x80084698
    // 0x8080078C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    _badata_entrypoint_11(rdram, ctx);
        goto after_3;
    // 0x8080078C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x80800790: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
L_80800794:
    // 0x80800794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800798: beql        $a1, $zero, L_808007AC
    if (ctx->r5 == 0) {
        // 0x8080079C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007AC;
    }
    goto skip_0;
    // 0x8080079C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808007A0: jal         0x8008CB3C
    // 0x808007A4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_8008CB3C(rdram, ctx);
        goto after_4;
    // 0x808007A4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x808007A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808007AC:
    // 0x808007AC: jal         0x800007E8
    // 0x808007B0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    bsrest_entrypoint_17(rdram, ctx);
        goto after_5;
    // 0x808007B0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_5:
    // 0x808007B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808007B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808007BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808007C0: jr          $ra
    // 0x808007C4: nop

    return;
    // 0x808007C4: nop

;}
RECOMP_FUNC void bsrest_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808007CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808007D0: jal         0x80000718
    // 0x808007D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    bsrest_entrypoint_15(rdram, ctx);
        goto after_0;
    // 0x808007D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x808007D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808007DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808007E0: jr          $ra
    // 0x808007E4: nop

    return;
    // 0x808007E4: nop

;}
RECOMP_FUNC void bsrest_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808007EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808007F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x808007F4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808007F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808007FC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800800: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800804: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800808: jal         0x8009FFD8
    // 0x8080080C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_0;
    // 0x8080080C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x80800810: jal         0x80000000
    // 0x80800814: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80800000_bsrest(rdram, ctx);
        goto after_1;
    // 0x80800814: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800818: jal         0x80000080
    // 0x8080081C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80800080_bsrest(rdram, ctx);
        goto after_2;
    // 0x8080081C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800820: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80800824: beql        $t7, $zero, L_80800838
    if (ctx->r15 == 0) {
        // 0x80800828: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800838;
    }
    goto skip_0;
    // 0x80800828: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8080082C: jal         0x80000188
    // 0x80800830: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    bsrest_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x80800830: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x80800834: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800838:
    // 0x80800838: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080083C: jr          $ra
    // 0x80800840: nop

    return;
    // 0x80800840: nop

;}
RECOMP_FUNC void bsrest_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800844: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080084C: jal         0x800007E8
    // 0x80800850: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    bsrest_entrypoint_17(rdram, ctx);
        goto after_0;
    // 0x80800850: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800858: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080085C: jr          $ra
    // 0x80800860: nop

    return;
    // 0x80800860: nop

;}
RECOMP_FUNC void bsrest_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800864: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800868: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080086C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800870: beq         $a1, $zero, L_808008A0
    if (ctx->r5 == 0) {
        // 0x80800874: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_808008A0;
    }
    // 0x80800874: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800878: jal         0x80000188
    // 0x8080087C: nop

    bsrest_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x8080087C: nop

    after_0:
    // 0x80800880: jal         0x800846B8
    // 0x80800884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badata_entrypoint_15(rdram, ctx);
        goto after_1;
    // 0x80800884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800888: beq         $v0, $zero, L_808008B4
    if (ctx->r2 == 0) {
        // 0x8080088C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008B4;
    }
    // 0x8080088C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800890: jal         0x8009D3A8
    // 0x80800894: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_2;
    // 0x80800894: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800898: b           L_808008B4
    // 0x8080089C: nop

        goto L_808008B4;
    // 0x8080089C: nop

L_808008A0:
    // 0x808008A0: jal         0x800A4CA8
    // 0x808008A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_3;
    // 0x808008A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808008A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808008AC: jal         0x801160DC
    // 0x808008B0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_801160DC(rdram, ctx);
        goto after_4;
    // 0x808008B0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
L_808008B4:
    // 0x808008B4: jal         0x800000E4
    // 0x808008B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000E4_bsrest(rdram, ctx);
        goto after_5;
    // 0x808008B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808008BC: jal         0x8009CC68
    // 0x808008C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009CC68(rdram, ctx);
        goto after_6;
    // 0x808008C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808008C4: bne         $v0, $zero, L_808008D4
    if (ctx->r2 != 0) {
        // 0x808008C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808008D4;
    }
    // 0x808008C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808008CC: b           L_808008D8
    // 0x808008D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808008D8;
    // 0x808008D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808008D4:
    // 0x808008D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808008D8:
    // 0x808008D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808008DC: jr          $ra
    // 0x808008E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x808008E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bsrest_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808008E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808008EC: jal         0x80000864
    // 0x808008F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    bsrest_entrypoint_19(rdram, ctx);
        goto after_0;
    // 0x808008F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x808008F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808008F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808008FC: jr          $ra
    // 0x80800900: nop

    return;
    // 0x80800900: nop

    // 0x80800904: nop

    // 0x80800908: nop

    // 0x8080090C: nop

;}
RECOMP_FUNC void func_80800000_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080000C: jal         0x8009EA64
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009EA64(rdram, ctx);
        goto after_0;
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800014: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800018: jal         0x80089C30
    // 0x8080001C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _subaddiefind_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x8080001C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800020: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80800024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800028: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8080002C: jal         0x8009B9B0
    // 0x80800030: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800030: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
    after_2:
    // 0x80800034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800038: jal         0x800A34E4
    // 0x8080003C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A34E4(rdram, ctx);
        goto after_3;
    // 0x8080003C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800044: jal         0x800961AC
    // 0x80800048: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800961AC(rdram, ctx);
        goto after_4;
    // 0x80800048: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_4:
    // 0x8080004C: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x80800050: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800058: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080005C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800060: jal         0x8009FFD8
    // 0x80800064: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_5;
    // 0x80800064: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_5:
    // 0x80800068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080006C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800070: jal         0x800947EC
    // 0x80800074: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_6;
    // 0x80800074: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x80800078: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080007C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800080: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800084: jr          $ra
    // 0x80800088: nop

    return;
    // 0x80800088: nop

;}
RECOMP_FUNC void func_8080008C_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080008C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800090: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800094: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800098: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080009C: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    // 0x808000A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000A4: jal         0x800947EC
    // 0x808000A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_0;
    // 0x808000A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x808000AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B0: jal         0x800A34E4
    // 0x808000B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A34E4(rdram, ctx);
        goto after_1;
    // 0x808000B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808000B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000BC: jal         0x800961AC
    // 0x808000C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_2;
    // 0x808000C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x808000C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C8: jal         0x8009C4CC
    // 0x808000CC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_3;
    // 0x808000CC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D4: jal         0x8009BF5C
    // 0x808000D8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_4;
    // 0x808000D8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x808000DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000E8: jr          $ra
    // 0x808000EC: nop

    return;
    // 0x808000EC: nop

;}
RECOMP_FUNC void func_808000F0_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808000FC: jal         0x8009EAE8
    // 0x80800100: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8009EAE8(rdram, ctx);
        goto after_0;
    // 0x80800100: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80800104: jal         0x8000008C
    // 0x80800108: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080008C_bsride(rdram, ctx);
        goto after_1;
    // 0x80800108: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080010C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800114: jr          $ra
    // 0x80800118: nop

    return;
    // 0x80800118: nop

;}
RECOMP_FUNC void func_8080011C_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080011C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800120: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800124: jal         0x8009E6EC
    // 0x80800128: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800128: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080012C: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x80800130: bne         $v0, $at, L_80800154
    if (ctx->r2 != ctx->r1) {
        // 0x80800134: nop
    
            goto L_80800154;
    }
    // 0x80800134: nop

    // 0x80800138: jal         0x800000F0
    // 0x8080013C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808000F0_bsride(rdram, ctx);
        goto after_1;
    // 0x8080013C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800140: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800144: jal         0x8009E830
    // 0x80800148: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_2;
    // 0x80800148: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x8080014C: b           L_80800160
    // 0x80800150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800160;
    // 0x80800150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800154:
    // 0x80800154: jal         0x80099B94
    // 0x80800158: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80099B94(rdram, ctx);
        goto after_3;
    // 0x80800158: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x8080015C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800160:
    // 0x80800160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800164: jr          $ra
    // 0x80800168: nop

    return;
    // 0x80800168: nop

;}
RECOMP_FUNC void func_8080016C_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080016C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800170: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800174: jal         0x8000008C
    // 0x80800178: nop

    func_8080008C_bsride(rdram, ctx);
        goto after_0;
    // 0x80800178: nop

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
RECOMP_FUNC void func_8080018C_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080018C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800190: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800194: jal         0x80000000
    // 0x80800198: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800000_bsride(rdram, ctx);
        goto after_0;
    // 0x80800198: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080019C: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x808001A0: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808001A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001A8: jal         0x8008CB3C
    // 0x808001AC: addiu       $a1, $zero, 0x256
    ctx->r5 = ADD32(0, 0X256);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x808001AC: addiu       $a1, $zero, 0x256
    ctx->r5 = ADD32(0, 0X256);
    after_1:
    // 0x808001B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001B4: jal         0x8009C128
    // 0x808001B8: addiu       $a1, $a0, 0x16C
    ctx->r5 = ADD32(ctx->r4, 0X16C);
    func_8009C128(rdram, ctx);
        goto after_2;
    // 0x808001B8: addiu       $a1, $a0, 0x16C
    ctx->r5 = ADD32(ctx->r4, 0X16C);
    after_2:
    // 0x808001BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001C4: jr          $ra
    // 0x808001C8: nop

    return;
    // 0x808001C8: nop

;}
RECOMP_FUNC void func_808001CC_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001CC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x808001D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808001D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808001D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001DC: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x808001E0: jal         0x8009C128
    // 0x808001E4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x808001E4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x808001E8: addiu       $a2, $s0, 0x16C
    ctx->r6 = ADD32(ctx->r16, 0X16C);
    // 0x808001EC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x808001F0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x808001F4: jal         0x800EFB24
    // 0x808001F8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800EFB24(rdram, ctx);
        goto after_1;
    // 0x808001F8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x808001FC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800200: jal         0x800EE7F8
    // 0x80800204: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x80800204: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x80800208: jal         0x800EEF94
    // 0x8080020C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_800EEF94(rdram, ctx);
        goto after_3;
    // 0x8080020C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_3:
    // 0x80800210: jal         0x800D8FF8
    // 0x80800214: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_4;
    // 0x80800214: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x80800218: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(143, 0X9B0) << 16);
    // 0x8080021C: lwc1        $f6, 0x9B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(143, 0X9B0));
    // 0x80800220: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80800224: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800228: lui         $a3, 0x3F66
    ctx->r7 = S32(0X3F66 << 16);
    // 0x8080022C: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80800230: lui         $a2, 0x44FA
    ctx->r6 = S32(0X44FA << 16);
    // 0x80800234: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80800238: jal         0x800F10B4
    // 0x8080023C: div.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    func_800F10B4(rdram, ctx);
        goto after_5;
    // 0x8080023C: div.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    after_5:
    // 0x80800240: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x80800244: jal         0x8008CABC
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CABC(rdram, ctx);
        goto after_6;
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080024C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800250: jal         0x8008B1BC
    // 0x80800254: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8008B1BC(rdram, ctx);
        goto after_7;
    // 0x80800254: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_7:
    // 0x80800258: lw          $t6, 0x15C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X15C);
    // 0x8080025C: addiu       $t7, $zero, 0x2F
    ctx->r15 = ADD32(0, 0X2F);
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800264: bne         $t6, $zero, L_80800270
    if (ctx->r14 != 0) {
        // 0x80800268: nop
    
            goto L_80800270;
    }
    // 0x80800268: nop

    // 0x8080026C: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
L_80800270:
    // 0x80800270: jal         0x8009E5C8
    // 0x80800274: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    func_8009E5C8(rdram, ctx);
        goto after_8;
    // 0x80800274: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    after_8:
    // 0x80800278: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080027C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800280: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80800284: jr          $ra
    // 0x80800288: nop

    return;
    // 0x80800288: nop

;}
RECOMP_FUNC void bsride_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080028C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800290: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(143, 0X9C0) << 16);
    // 0x80800294: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800298: jr          $ra
    // 0x8080029C: lw          $v0, 0x9C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(143, 0X9C0));
    return;
    // 0x8080029C: lw          $v0, 0x9C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(143, 0X9C0));
;}
RECOMP_FUNC void func_808002A0_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002A0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x808002A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808002AC: jal         0x8009E6EC
    // 0x808002B0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x808002B0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_0:
    // 0x808002B4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x808002B8: jal         0x8008CABC
    // 0x808002BC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_8008CABC(rdram, ctx);
        goto after_1;
    // 0x808002BC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_1:
    // 0x808002C0: lui         $a0, 0x0
    ctx->r4 = S32(RELOC_HI16(143, 0X9D0) << 16);
    // 0x808002C4: addiu       $s0, $a0, 0x9D0
    ctx->r16 = ADD32(ctx->r4, (int16_t)RELOC_LO16(143, 0X9D0));
    // 0x808002C8: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    // 0x808002CC: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x808002D0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x808002D4: beq         $t6, $zero, L_80800490
    if (ctx->r14 == 0) {
        // 0x808002D8: lui         $t7, 0x0
        ctx->r15 = S32(RELOC_HI16(143, 0X9D0) << 16);
            goto L_80800490;
    }
    // 0x808002D8: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(143, 0X9D0) << 16);
    // 0x808002DC: addiu       $t7, $t7, 0x9D0
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(143, 0X9D0));
    // 0x808002E0: lh          $v0, 0x0($t7)
    ctx->r2 = MEM_H(ctx->r15, 0X0);
L_808002E4:
    // 0x808002E4: bne         $v1, $v0, L_80800480
    if (ctx->r3 != ctx->r2) {
        // 0x808002E8: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_80800480;
    }
    // 0x808002E8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x808002EC: jal         0x8008B264
    // 0x808002F0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_8008B264(rdram, ctx);
        goto after_2;
    // 0x808002F0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_2:
    // 0x808002F4: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x808002F8: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    // 0x808002FC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80800300: xor         $a1, $t0, $a0
    ctx->r5 = ctx->r8 ^ ctx->r4;
    // 0x80800304: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80800308: xor         $a3, $v0, $t8
    ctx->r7 = ctx->r2 ^ ctx->r24;
    // 0x8080030C: sltiu       $a3, $a3, 0x1
    ctx->r7 = ctx->r7 < 0X1 ? 1 : 0;
    // 0x80800310: beq         $a1, $zero, L_80800328
    if (ctx->r5 == 0) {
        // 0x80800314: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_80800328;
    }
    // 0x80800314: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80800318: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x8080031C: lw          $v1, 0x160($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X160);
    // 0x80800320: sltiu       $t1, $v1, 0x1
    ctx->r9 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80800324: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
L_80800328:
    // 0x80800328: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x8080032C: beq         $a1, $zero, L_80800344
    if (ctx->r5 == 0) {
        // 0x80800330: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_80800344;
    }
    // 0x80800330: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80800334: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80800338: lw          $t3, 0x160($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X160);
    // 0x8080033C: xor         $v1, $t0, $t3
    ctx->r3 = ctx->r8 ^ ctx->r11;
    // 0x80800340: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
L_80800344:
    // 0x80800344: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80800348: sltiu       $v1, $a0, 0x1
    ctx->r3 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x8080034C: beq         $v1, $zero, L_80800360
    if (ctx->r3 == 0) {
        // 0x80800350: lw          $t4, 0x40($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X40);
            goto L_80800360;
    }
    // 0x80800350: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80800354: lw          $v1, 0x160($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X160);
    // 0x80800358: sltiu       $t5, $v1, 0x1
    ctx->r13 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8080035C: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_80800360:
    // 0x80800360: lbu         $t6, 0x9($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X9);
    // 0x80800364: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80800368: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8080036C: xor         $v1, $t0, $t6
    ctx->r3 = ctx->r8 ^ ctx->r14;
    // 0x80800370: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80800374: beq         $v1, $zero, L_808003B8
    if (ctx->r3 == 0) {
        // 0x80800378: nop
    
            goto L_808003B8;
    }
    // 0x80800378: nop

    // 0x8080037C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800380: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x80800384: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x80800388: jal         0x8008B2B4
    // 0x8080038C: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    func_8008B2B4(rdram, ctx);
        goto after_3;
    // 0x8080038C: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_3:
    // 0x80800390: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80800394: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80800398: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8080039C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x808003A0: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x808003A4: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x808003A8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x808003AC: bc1f        L_808003B8
    if (!c1cs) {
        // 0x808003B0: nop
    
            goto L_808003B8;
    }
    // 0x808003B0: nop

    // 0x808003B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_808003B8:
    // 0x808003B8: bne         $a2, $zero, L_808003E0
    if (ctx->r6 != 0) {
        // 0x808003BC: nop
    
            goto L_808003E0;
    }
    // 0x808003BC: nop

    // 0x808003C0: beq         $v0, $zero, L_808003D0
    if (ctx->r2 == 0) {
        // 0x808003C4: nop
    
            goto L_808003D0;
    }
    // 0x808003C4: nop

    // 0x808003C8: beq         $a3, $zero, L_808003E0
    if (ctx->r7 == 0) {
        // 0x808003CC: nop
    
            goto L_808003E0;
    }
    // 0x808003CC: nop

L_808003D0:
    // 0x808003D0: beql        $a1, $zero, L_80800470
    if (ctx->r5 == 0) {
        // 0x808003D4: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_80800470;
    }
    goto skip_0;
    // 0x808003D4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    skip_0:
    // 0x808003D8: beql        $v1, $zero, L_80800470
    if (ctx->r3 == 0) {
        // 0x808003DC: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_80800470;
    }
    goto skip_1;
    // 0x808003DC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    skip_1:
L_808003E0:
    // 0x808003E0: jal         0x8008AF24
    // 0x808003E4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008AF24(rdram, ctx);
        goto after_4;
    // 0x808003E4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_4:
    // 0x808003E8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x808003EC: jal         0x8008AED4
    // 0x808003F0: lh          $a1, 0x2($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2);
    func_8008AED4(rdram, ctx);
        goto after_5;
    // 0x808003F0: lh          $a1, 0x2($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2);
    after_5:
    // 0x808003F4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x808003F8: jal         0x8008B1BC
    // 0x808003FC: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    func_8008B1BC(rdram, ctx);
        goto after_6;
    // 0x808003FC: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    after_6:
    // 0x80800400: lbu         $t7, 0x8($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X8);
    // 0x80800404: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800408: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8080040C: bne         $t7, $at, L_80800424
    if (ctx->r15 != ctx->r1) {
        // 0x80800410: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_80800424;
    }
    // 0x80800410: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800414: jal         0x8008B134
    // 0x80800418: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B134(rdram, ctx);
        goto after_7;
    // 0x80800418: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_7:
    // 0x8080041C: b           L_8080043C
    // 0x80800420: nop

        goto L_8080043C;
    // 0x80800420: nop

L_80800424:
    // 0x80800424: jal         0x8008B134
    // 0x80800428: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x80800428: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x8080042C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800430: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80800434: jal         0x8008B1D4
    // 0x80800438: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    func_8008B1D4(rdram, ctx);
        goto after_9;
    // 0x80800438: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    after_9:
L_8080043C:
    // 0x8080043C: jal         0x8008B064
    // 0x80800440: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B064(rdram, ctx);
        goto after_10;
    // 0x80800440: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_10:
    // 0x80800444: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80800448: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080044C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80800450: bnel        $a0, $at, L_80800468
    if (ctx->r4 != ctx->r1) {
        // 0x80800454: lw          $t8, 0x40($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X40);
            goto L_80800468;
    }
    goto skip_2;
    // 0x80800454: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    skip_2:
    // 0x80800458: jal         0x8009D89C
    // 0x8080045C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_8009D89C(rdram, ctx);
        goto after_11;
    // 0x8080045C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_11:
    // 0x80800460: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80800464: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
L_80800468:
    // 0x80800468: sw          $a0, 0x160($t8)
    MEM_W(0X160, ctx->r24) = ctx->r4;
    // 0x8080046C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
L_80800470:
    // 0x80800470: jal         0x8009E830
    // 0x80800474: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_12;
    // 0x80800474: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
    // 0x80800478: b           L_8080049C
    // 0x8080047C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080049C;
    // 0x8080047C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800480:
    // 0x80800480: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80800484: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x80800488: bne         $v0, $zero, L_808002E4
    if (ctx->r2 != 0) {
        // 0x8080048C: nop
    
            goto L_808002E4;
    }
    // 0x8080048C: nop

L_80800490:
    // 0x80800490: jal         0x8000011C
    // 0x80800494: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_8080011C_bsride(rdram, ctx);
        goto after_13;
    // 0x80800494: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_13:
    // 0x80800498: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080049C:
    // 0x8080049C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808004A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x808004A4: jr          $ra
    // 0x808004A8: nop

    return;
    // 0x808004A8: nop

;}
RECOMP_FUNC void func_808004AC_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808004B8: jal         0x80093230
    // 0x808004BC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_80093230(rdram, ctx);
        goto after_0;
    // 0x808004BC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x808004C0: jal         0x8000008C
    // 0x808004C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080008C_bsride(rdram, ctx);
        goto after_1;
    // 0x808004C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808004C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004D0: jr          $ra
    // 0x808004D4: nop

    return;
    // 0x808004D4: nop

;}
RECOMP_FUNC void func_808004D8_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004E0: jal         0x80000000
    // 0x808004E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800000_bsride(rdram, ctx);
        goto after_0;
    // 0x808004E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808004E8: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x808004EC: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808004F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808004F4: jal         0x8008CB3C
    // 0x808004F8: addiu       $a1, $zero, 0x281
    ctx->r5 = ADD32(0, 0X281);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x808004F8: addiu       $a1, $zero, 0x281
    ctx->r5 = ADD32(0, 0X281);
    after_1:
    // 0x808004FC: lui         $a1, 0x3FAC
    ctx->r5 = S32(0X3FAC << 16);
    // 0x80800500: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800504: jal         0x80093230
    // 0x80800508: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80093230(rdram, ctx);
        goto after_2;
    // 0x80800508: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8080050C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800510: sw          $zero, 0x160($t6)
    MEM_W(0X160, ctx->r14) = 0;
    // 0x80800514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080051C: jr          $ra
    // 0x80800520: nop

    return;
    // 0x80800520: nop

;}
RECOMP_FUNC void func_80800524_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800524: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080052C: lw          $t6, 0x160($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X160);
    // 0x80800530: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800534: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80800538: bnel        $t6, $at, L_80800580
    if (ctx->r14 != ctx->r1) {
        // 0x8080053C: lw          $t7, 0x15C($a0)
        ctx->r15 = MEM_W(ctx->r4, 0X15C);
            goto L_80800580;
    }
    goto skip_0;
    // 0x8080053C: lw          $t7, 0x15C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X15C);
    skip_0:
    // 0x80800540: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800544: jal         0x8008CAEC
    // 0x80800548: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8008CAEC(rdram, ctx);
        goto after_0;
    // 0x80800548: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x8080054C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800550: beq         $v0, $zero, L_8080057C
    if (ctx->r2 == 0) {
        // 0x80800554: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_8080057C;
    }
    // 0x80800554: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80800558: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x8080055C: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800560: addiu       $a1, $zero, 0x281
    ctx->r5 = ADD32(0, 0X281);
    // 0x80800564: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800568: jal         0x8008CB3C
    // 0x8080056C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x8080056C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_1:
    // 0x80800570: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800574: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80800578: sw          $zero, 0x160($a0)
    MEM_W(0X160, ctx->r4) = 0;
L_8080057C:
    // 0x8080057C: lw          $t7, 0x15C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X15C);
L_80800580:
    // 0x80800580: bne         $t7, $zero, L_8080058C
    if (ctx->r15 != 0) {
        // 0x80800584: nop
    
            goto L_8080058C;
    }
    // 0x80800584: nop

    // 0x80800588: addiu       $a3, $zero, 0x2F
    ctx->r7 = ADD32(0, 0X2F);
L_8080058C:
    // 0x8080058C: jal         0x8009E5C8
    // 0x80800590: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80800590: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_2:
    // 0x80800594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800598: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080059C: jr          $ra
    // 0x808005A0: nop

    return;
    // 0x808005A0: nop

;}
RECOMP_FUNC void bsride_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005A4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808005A8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(143, 0XA70) << 16);
    // 0x808005AC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808005B0: jr          $ra
    // 0x808005B4: lw          $v0, 0xA70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(143, 0XA70));
    return;
    // 0x808005B4: lw          $v0, 0xA70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(143, 0XA70));
;}
RECOMP_FUNC void func_808005B8_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005C0: jal         0x8000008C
    // 0x808005C4: nop

    func_8080008C_bsride(rdram, ctx);
        goto after_0;
    // 0x808005C4: nop

    after_0:
    // 0x808005C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808005D0: jr          $ra
    // 0x808005D4: nop

    return;
    // 0x808005D4: nop

;}
RECOMP_FUNC void func_808005D8_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005E0: jal         0x80000000
    // 0x808005E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800000_bsride(rdram, ctx);
        goto after_0;
    // 0x808005E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808005E8: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x808005EC: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808005F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808005F4: jal         0x8008CB3C
    // 0x808005F8: addiu       $a1, $zero, 0x83
    ctx->r5 = ADD32(0, 0X83);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x808005F8: addiu       $a1, $zero, 0x83
    ctx->r5 = ADD32(0, 0X83);
    after_1:
    // 0x808005FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800604: jr          $ra
    // 0x80800608: nop

    return;
    // 0x80800608: nop

;}
RECOMP_FUNC void func_8080060C_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080060C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800610: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800614: jal         0x8008CABC
    // 0x80800618: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800618: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080061C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80800620: addiu       $a3, $zero, 0x2F
    ctx->r7 = ADD32(0, 0X2F);
    // 0x80800624: lw          $a0, 0x15C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X15C);
    // 0x80800628: beq         $a0, $zero, L_80800650
    if (ctx->r4 == 0) {
        // 0x8080062C: nop
    
            goto L_80800650;
    }
    // 0x8080062C: nop

    // 0x80800630: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80800634: jal         0x80086B00
    // 0x80800638: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    _chhandcart_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800638: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_1:
    // 0x8080063C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800640: jal         0x8008B10C
    // 0x80800644: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8008B10C(rdram, ctx);
        goto after_2;
    // 0x80800644: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80800648: b           L_80800650
    // 0x8080064C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
        goto L_80800650;
    // 0x8080064C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
L_80800650:
    // 0x80800650: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800654: jal         0x8009E5C8
    // 0x80800658: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x80800658: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_3:
    // 0x8080065C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800660: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800664: jr          $ra
    // 0x80800668: nop

    return;
    // 0x80800668: nop

;}
RECOMP_FUNC void func_8080066C_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080066C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800670: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800674: jal         0x8009E6EC
    // 0x80800678: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800678: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080067C: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x80800680: bne         $v0, $at, L_808006A4
    if (ctx->r2 != ctx->r1) {
        // 0x80800684: nop
    
            goto L_808006A4;
    }
    // 0x80800684: nop

    // 0x80800688: jal         0x800000F0
    // 0x8080068C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808000F0_bsride(rdram, ctx);
        goto after_1;
    // 0x8080068C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800690: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800694: jal         0x8009E830
    // 0x80800698: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_2;
    // 0x80800698: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x8080069C: b           L_808006B0
    // 0x808006A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808006B0;
    // 0x808006A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808006A4:
    // 0x808006A4: jal         0x80099B94
    // 0x808006A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80099B94(rdram, ctx);
        goto after_3;
    // 0x808006A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x808006AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808006B0:
    // 0x808006B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808006B4: jr          $ra
    // 0x808006B8: nop

    return;
    // 0x808006B8: nop

;}
RECOMP_FUNC void bsride_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006BC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808006C0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(143, 0XA80) << 16);
    // 0x808006C4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808006C8: jr          $ra
    // 0x808006CC: lw          $v0, 0xA80($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(143, 0XA80));
    return;
    // 0x808006CC: lw          $v0, 0xA80($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(143, 0XA80));
;}
RECOMP_FUNC void func_808006D0_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808006D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808006D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808006DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808006E0: beq         $a1, $zero, L_8080075C
    if (ctx->r5 == 0) {
        // 0x808006E4: sw          $a1, 0x160($a0)
        MEM_W(0X160, ctx->r4) = ctx->r5;
            goto L_8080075C;
    }
    // 0x808006E4: sw          $a1, 0x160($a0)
    MEM_W(0X160, ctx->r4) = ctx->r5;
    // 0x808006E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808006EC: beq         $a1, $at, L_80800708
    if (ctx->r5 == ctx->r1) {
        // 0x808006F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800708;
    }
    // 0x808006F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808006F8: beq         $a1, $at, L_80800724
    if (ctx->r5 == ctx->r1) {
        // 0x808006FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800724;
    }
    // 0x808006FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800700: b           L_80800788
    // 0x80800704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800788;
    // 0x80800704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800708:
    // 0x80800708: jal         0x80084CE8
    // 0x8080070C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bafpctrl_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x8080070C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800710: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    // 0x80800714: jal         0x800F817C
    // 0x80800718: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800F817C(rdram, ctx);
        goto after_1;
    // 0x80800718: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8080071C: b           L_80800788
    // 0x80800720: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800788;
    // 0x80800720: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800724:
    // 0x80800724: jal         0x80084CC0
    // 0x80800728: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bafpctrl_entrypoint_9(rdram, ctx);
        goto after_2;
    // 0x80800728: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8080072C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800730: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80800734: jal         0x80084CD0
    // 0x80800738: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    _bafpctrl_entrypoint_11(rdram, ctx);
        goto after_3;
    // 0x80800738: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8080073C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800740: jal         0x80084CE8
    // 0x80800744: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _bafpctrl_entrypoint_14(rdram, ctx);
        goto after_4;
    // 0x80800744: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80800748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080074C: jal         0x80095760
    // 0x80800750: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    func_80095760(rdram, ctx);
        goto after_5;
    // 0x80800750: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_5:
    // 0x80800754: b           L_80800788
    // 0x80800758: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800788;
    // 0x80800758: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080075C:
    // 0x8080075C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800760: jal         0x80084CE8
    // 0x80800764: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bafpctrl_entrypoint_14(rdram, ctx);
        goto after_6;
    // 0x80800764: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x80800768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080076C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80800770: jal         0x80084CD0
    // 0x80800774: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    _bafpctrl_entrypoint_11(rdram, ctx);
        goto after_7;
    // 0x80800774: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80800778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080077C: jal         0x80095774
    // 0x80800780: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    func_80095774(rdram, ctx);
        goto after_8;
    // 0x80800780: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    after_8:
    // 0x80800784: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800788:
    // 0x80800788: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080078C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800790: jr          $ra
    // 0x80800794: nop

    return;
    // 0x80800794: nop

;}
RECOMP_FUNC void func_80800798_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800798: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080079C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808007A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808007A4: jal         0x8009E6EC
    // 0x808007A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x808007A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808007AC: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x808007B0: beq         $v0, $at, L_808007C8
    if (ctx->r2 == ctx->r1) {
        // 0x808007B4: addiu       $at, $zero, 0x4B
        ctx->r1 = ADD32(0, 0X4B);
            goto L_808007C8;
    }
    // 0x808007B4: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    // 0x808007B8: beql        $v0, $at, L_808007E8
    if (ctx->r2 == ctx->r1) {
        // 0x808007BC: lw          $t6, 0x160($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X160);
            goto L_808007E8;
    }
    goto skip_0;
    // 0x808007BC: lw          $t6, 0x160($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X160);
    skip_0:
    // 0x808007C0: b           L_80800830
    // 0x808007C4: nop

        goto L_80800830;
    // 0x808007C4: nop

L_808007C8:
    // 0x808007C8: jal         0x800000F0
    // 0x808007CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000F0_bsride(rdram, ctx);
        goto after_1;
    // 0x808007CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808007D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007D4: jal         0x8009E830
    // 0x808007D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_2;
    // 0x808007D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x808007DC: b           L_8080083C
    // 0x808007E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080083C;
    // 0x808007E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808007E4: lw          $t6, 0x160($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X160);
L_808007E8:
    // 0x808007E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808007EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808007F0: bne         $t6, $at, L_80800814
    if (ctx->r14 != ctx->r1) {
        // 0x808007F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800814;
    }
    // 0x808007F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007F8: jal         0x800006D0
    // 0x808007FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808006D0_bsride(rdram, ctx);
        goto after_3;
    // 0x808007FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800804: jal         0x8009E830
    // 0x80800808: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_4;
    // 0x80800808: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x8080080C: b           L_8080083C
    // 0x80800810: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080083C;
    // 0x80800810: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800814:
    // 0x80800814: jal         0x800006D0
    // 0x80800818: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_808006D0_bsride(rdram, ctx);
        goto after_5;
    // 0x80800818: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x8080081C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800820: jal         0x8009E830
    // 0x80800824: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_6;
    // 0x80800824: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x80800828: b           L_8080083C
    // 0x8080082C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080083C;
    // 0x8080082C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800830:
    // 0x80800830: jal         0x80099B94
    // 0x80800834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099B94(rdram, ctx);
        goto after_7;
    // 0x80800834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800838: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080083C:
    // 0x8080083C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800840: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800844: jr          $ra
    // 0x80800848: nop

    return;
    // 0x80800848: nop

;}
RECOMP_FUNC void func_8080084C_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080084C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800850: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800854: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800858: jal         0x800006D0
    // 0x8080085C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_808006D0_bsride(rdram, ctx);
        goto after_0;
    // 0x8080085C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800860: jal         0x8000008C
    // 0x80800864: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080008C_bsride(rdram, ctx);
        goto after_1;
    // 0x80800864: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080086C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800870: jr          $ra
    // 0x80800874: nop

    return;
    // 0x80800874: nop

;}
RECOMP_FUNC void func_80800878_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800878: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080087C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800880: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800884: jal         0x80000000
    // 0x80800888: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800000_bsride(rdram, ctx);
        goto after_0;
    // 0x80800888: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080088C: lui         $a2, 0x3F54
    ctx->r6 = S32(0X3F54 << 16);
    // 0x80800890: ori         $a2, $a2, 0x7AE1
    ctx->r6 = ctx->r6 | 0X7AE1;
    // 0x80800894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800898: jal         0x8008CB3C
    // 0x8080089C: addiu       $a1, $zero, 0x481
    ctx->r5 = ADD32(0, 0X481);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x8080089C: addiu       $a1, $zero, 0x481
    ctx->r5 = ADD32(0, 0X481);
    after_1:
    // 0x808008A0: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x808008A4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808008A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808008B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808008B4: jal         0x8009FFD8
    // 0x808008B8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x808008B8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x808008BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008C0: jal         0x8009B9B0
    // 0x808008C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x808008C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x808008C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008CC: jal         0x800A34E4
    // 0x808008D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A34E4(rdram, ctx);
        goto after_4;
    // 0x808008D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x808008D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008D8: jal         0x800961AC
    // 0x808008DC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800961AC(rdram, ctx);
        goto after_5;
    // 0x808008DC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_5:
    // 0x808008E0: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    // 0x808008E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008E8: jal         0x800006D0
    // 0x808008EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_808006D0_bsride(rdram, ctx);
        goto after_6;
    // 0x808008EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x808008F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808008F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808008F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808008FC: jr          $ra
    // 0x80800900: nop

    return;
    // 0x80800900: nop

;}
RECOMP_FUNC void func_80800904_bsride(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800904: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800908: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080090C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800910: jal         0x8008CABC
    // 0x80800914: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800914: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800918: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8080091C: lw          $v1, 0x160($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X160);
    // 0x80800920: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800924: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80800928: beq         $v1, $at, L_80800948
    if (ctx->r3 == ctx->r1) {
        // 0x8080092C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800948;
    }
    // 0x8080092C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800930: bne         $v1, $at, L_80800948
    if (ctx->r3 != ctx->r1) {
        // 0x80800934: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800948;
    }
    // 0x80800934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800938: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x8080093C: jal         0x80095760
    // 0x80800940: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_80095760(rdram, ctx);
        goto after_1;
    // 0x80800940: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x80800944: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
L_80800948:
    // 0x80800948: lw          $t6, 0x15C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X15C);
    // 0x8080094C: addiu       $t7, $zero, 0x2F
    ctx->r15 = ADD32(0, 0X2F);
    // 0x80800950: beql        $t6, $zero, L_80800978
    if (ctx->r14 == 0) {
        // 0x80800954: sw          $t7, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r15;
            goto L_80800978;
    }
    goto skip_0;
    // 0x80800954: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    skip_0:
    // 0x80800958: jal         0x8008B2B4
    // 0x8080095C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8008B2B4(rdram, ctx);
        goto after_2;
    // 0x8080095C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x80800960: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800964: jal         0x80086BF8
    // 0x80800968: lw          $a0, 0x15C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X15C);
    _chflysaucer_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x80800968: lw          $a0, 0x15C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X15C);
    after_3:
    // 0x8080096C: b           L_8080097C
    // 0x80800970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080097C;
    // 0x80800970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800974: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
L_80800978:
    // 0x80800978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080097C:
    // 0x8080097C: jal         0x8009E5C8
    // 0x80800980: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x80800980: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800984: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800988: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080098C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800990: jr          $ra
    // 0x80800994: nop

    return;
    // 0x80800994: nop

;}
RECOMP_FUNC void bsride_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800998: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080099C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(143, 0XA90) << 16);
    // 0x808009A0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808009A4: jr          $ra
    // 0x808009A8: lw          $v0, 0xA90($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(143, 0XA90));
    return;
    // 0x808009A8: lw          $v0, 0xA90($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(143, 0XA90));
    // 0x808009AC: nop

;}
RECOMP_FUNC void func_80800000_bssilowait(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080000C: jal         0x80092880
    // 0x80800010: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80092880(rdram, ctx);
        goto after_0;
    // 0x80800010: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800014: jal         0x80091E6C
    // 0x80800018: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80091E6C(rdram, ctx);
        goto after_1;
    // 0x80800018: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080001C: jal         0x8009BC6C
    // 0x80800020: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BC6C(rdram, ctx);
        goto after_2;
    // 0x80800020: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800024: jal         0x8009BC90
    // 0x80800028: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BC90(rdram, ctx);
        goto after_3;
    // 0x80800028: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x8080002C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800030: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800034: jr          $ra
    // 0x80800038: nop

    return;
    // 0x80800038: nop

;}
RECOMP_FUNC void func_8080003C_bssilowait(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080003C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800040: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800044: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800048: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080004C: addiu       $a1, $zero, 0x6F
    ctx->r5 = ADD32(0, 0X6F);
    // 0x80800050: jal         0x8008CBB0
    // 0x80800054: lui         $a2, 0x40B0
    ctx->r6 = S32(0X40B0 << 16);
    func_8008CBB0(rdram, ctx);
        goto after_0;
    // 0x80800054: lui         $a2, 0x40B0
    ctx->r6 = S32(0X40B0 << 16);
    after_0:
    // 0x80800058: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8080005C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
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
        goto after_1;
    // 0x80800070: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x80800074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800078: jal         0x8009B9B0
    // 0x8080007C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x8080007C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800084: jal         0x8009BA9C
    // 0x80800088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_3;
    // 0x80800088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8080008C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800090: jal         0x8009BCB4
    // 0x80800094: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BCB4(rdram, ctx);
        goto after_4;
    // 0x80800094: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080009C: jal         0x8009BCC4
    // 0x808000A0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BCC4(rdram, ctx);
        goto after_5;
    // 0x808000A0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x808000A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000A8: jal         0x80091E48
    // 0x808000AC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    func_80091E48(rdram, ctx);
        goto after_6;
    // 0x808000AC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    after_6:
    // 0x808000B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B4: jal         0x80092880
    // 0x808000B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80092880(rdram, ctx);
        goto after_7;
    // 0x808000B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x808000BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808000C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808000C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808000C8: jr          $ra
    // 0x808000CC: nop

    return;
    // 0x808000CC: nop

;}
RECOMP_FUNC void func_808000D0_bssilowait(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000D8: jal         0x8009E6EC
    // 0x808000DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x808000DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808000E0: addiu       $at, $zero, 0x90
    ctx->r1 = ADD32(0, 0X90);
    // 0x808000E4: bne         $v0, $at, L_80800108
    if (ctx->r2 != ctx->r1) {
        // 0x808000E8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800108;
    }
    // 0x808000E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808000EC: jal         0x8009E5C8
    // 0x808000F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E5C8(rdram, ctx);
        goto after_1;
    // 0x808000F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808000F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808000F8: jal         0x8009E830
    // 0x808000FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_2;
    // 0x808000FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80800100: b           L_80800114
    // 0x80800104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800114;
    // 0x80800104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800108:
    // 0x80800108: jal         0x80099AA8
    // 0x8080010C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80099AA8(rdram, ctx);
        goto after_3;
    // 0x8080010C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80800110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800114:
    // 0x80800114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800118: jr          $ra
    // 0x8080011C: nop

    return;
    // 0x8080011C: nop

;}
RECOMP_FUNC void func_80800120_bssilowait(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800120: jr          $ra
    // 0x80800124: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800124: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bssilowait_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800128: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080012C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(144, 0X140) << 16);
    // 0x80800130: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800134: jr          $ra
    // 0x80800138: lw          $v0, 0x140($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(144, 0X140));
    return;
    // 0x80800138: lw          $v0, 0x140($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(144, 0X140));
    // 0x8080013C: nop

;}
RECOMP_FUNC void func_80800000_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x800850F0
    // 0x8080000C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    _basnowball_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x8080000C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800010: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800014: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800018: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080001C: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80800020: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800024: lui         $a2, 0x43B4
    ctx->r6 = S32(0X43B4 << 16);
    // 0x80800028: jal         0x800F10B4
    // 0x8080002C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_1;
    // 0x8080002C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80800030: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800034: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800038: jal         0x800F13C4
    // 0x8080003C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F13C4(rdram, ctx);
        goto after_2;
    // 0x8080003C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x80800040: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800044: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80800048: jal         0x8008C990
    // 0x8080004C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008C990(rdram, ctx);
        goto after_3;
    // 0x8080004C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x80800050: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800054: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80800058: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080005C: jr          $ra
    // 0x80800060: nop

    return;
    // 0x80800060: nop

;}
RECOMP_FUNC void func_80800064_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800064: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800068: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080006C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800070: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800074: jal         0x8009EF1C
    // 0x80800078: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x80800078: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8080007C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80800080: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800088: beq         $t6, $zero, L_808000B8
    if (ctx->r14 == 0) {
        // 0x8080008C: nop
    
            goto L_808000B8;
    }
    // 0x8080008C: nop

    // 0x80800090: jal         0x800919F4
    // 0x80800094: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800919F4(rdram, ctx);
        goto after_1;
    // 0x80800094: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_1:
    // 0x80800098: beq         $v0, $zero, L_808000B8
    if (ctx->r2 == 0) {
        // 0x8080009C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000B8;
    }
    // 0x8080009C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000A0: jal         0x8009B9B0
    // 0x808000A4: lui         $a1, 0x44AF
    ctx->r5 = S32(0X44AF << 16);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x808000A4: lui         $a1, 0x44AF
    ctx->r5 = S32(0X44AF << 16);
    after_2:
    // 0x808000A8: jal         0x80085110
    // 0x808000AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basnowball_entrypoint_7(rdram, ctx);
        goto after_3;
    // 0x808000AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808000B0: b           L_808000FC
    // 0x808000B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808000FC;
    // 0x808000B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000B8:
    // 0x808000B8: jal         0x8009EF10
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_4;
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808000C0: bne         $v0, $zero, L_808000DC
    if (ctx->r2 != 0) {
        // 0x808000C4: lwc1        $f12, 0x24($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
            goto L_808000DC;
    }
    // 0x808000C4: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x808000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000CC: jal         0x8009B9B0
    // 0x808000D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_5;
    // 0x808000D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x808000D4: b           L_808000FC
    // 0x808000D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808000FC;
    // 0x808000D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000DC:
    // 0x808000DC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x808000E0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808000E4: jal         0x800F1214
    // 0x808000E8: lui         $a2, 0x442F
    ctx->r6 = S32(0X442F << 16);
    func_800F1214(rdram, ctx);
        goto after_6;
    // 0x808000E8: lui         $a2, 0x442F
    ctx->r6 = S32(0X442F << 16);
    after_6:
    // 0x808000EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808000F0: jal         0x8009B9B0
    // 0x808000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_7;
    // 0x808000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808000F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000FC:
    // 0x808000FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800100: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800104: jr          $ra
    // 0x80800108: nop

    return;
    // 0x80800108: nop

;}
RECOMP_FUNC void func_8080010C_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080010C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800110: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800114: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800118: jal         0x80097AD0
    // 0x8080011C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80097AD0(rdram, ctx);
        goto after_0;
    // 0x8080011C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800120: beq         $v0, $zero, L_80800134
    if (ctx->r2 == 0) {
        // 0x80800124: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_80800134;
    }
    // 0x80800124: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800128: jal         0x800848A8
    // 0x8080012C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _badrone_entrypoint_24(rdram, ctx);
        goto after_1;
    // 0x8080012C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800130: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80800134:
    // 0x80800134: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800138: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8080013C: jal         0x80091A58
    // 0x80800140: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80091A58(rdram, ctx);
        goto after_2;
    // 0x80800140: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x80800144: beq         $v0, $zero, L_80800150
    if (ctx->r2 == 0) {
        // 0x80800148: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_80800150;
    }
    // 0x80800148: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8080014C: addiu       $v1, $zero, 0x17F
    ctx->r3 = ADD32(0, 0X17F);
L_80800150:
    // 0x80800150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800158: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8080015C: jr          $ra
    // 0x80800160: nop

    return;
    // 0x80800160: nop

;}
RECOMP_FUNC void func_80800164_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800164: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800168: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080016C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800170: jal         0x8009C908
    // 0x80800174: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009C908(rdram, ctx);
        goto after_0;
    // 0x80800174: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80800178: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080017C: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x80800180: jal         0x8009C99C
    // 0x80800184: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_1;
    // 0x80800184: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    after_1:
    // 0x80800188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080018C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800190: jr          $ra
    // 0x80800194: nop

    return;
    // 0x80800194: nop

;}
RECOMP_FUNC void bssnowball_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800198: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080019C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001A8: jal         0x8009E74C
    // 0x808001AC: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x808001AC: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_0:
    // 0x808001B0: bne         $v0, $zero, L_80800220
    if (ctx->r2 != 0) {
        // 0x808001B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800220;
    }
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808001BC: jal         0x800947EC
    // 0x808001C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_1;
    // 0x808001C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001C8: jal         0x8009BF5C
    // 0x808001CC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_2;
    // 0x808001CC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x808001D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D4: jal         0x8009C4CC
    // 0x808001D8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_3;
    // 0x808001D8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x808001DC: jal         0x8009C000
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C000(rdram, ctx);
        goto after_4;
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808001E4: jal         0x8009C570
    // 0x808001E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C570(rdram, ctx);
        goto after_5;
    // 0x808001E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808001EC: jal         0x8009EF60
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF60(rdram, ctx);
        goto after_6;
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F8: jal         0x80095774
    // 0x808001FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80095774(rdram, ctx);
        goto after_7;
    // 0x808001FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x80800200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800204: jal         0x80095774
    // 0x80800208: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80095774(rdram, ctx);
        goto after_8;
    // 0x80800208: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_8:
    // 0x8080020C: jal         0x800850E0
    // 0x80800210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basnowball_entrypoint_1(rdram, ctx);
        goto after_9;
    // 0x80800210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800218: jal         0x80092864
    // 0x8080021C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_80092864(rdram, ctx);
        goto after_10;
    // 0x8080021C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_10:
L_80800220:
    // 0x80800220: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800224: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800228: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080022C: jr          $ra
    // 0x80800230: nop

    return;
    // 0x80800230: nop

;}
RECOMP_FUNC void bssnowball_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800244: jal         0x8009E77C
    // 0x80800248: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    func_8009E77C(rdram, ctx);
        goto after_0;
    // 0x80800248: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_0:
    // 0x8080024C: bnel        $v0, $zero, L_808002E8
    if (ctx->r2 != 0) {
        // 0x80800250: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808002E8;
    }
    goto skip_0;
    // 0x80800250: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800254: jal         0x800850E8
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basnowball_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800260: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800264: jal         0x8009BFE4
    // 0x80800268: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_2;
    // 0x80800268: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_2:
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800270: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800274: jal         0x8009C554
    // 0x80800278: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009C554(rdram, ctx);
        goto after_3;
    // 0x80800278: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_3:
    // 0x8080027C: jal         0x8009EFA8
    // 0x80800280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EFA8(rdram, ctx);
        goto after_4;
    // 0x80800280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800284: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x80800288: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x8080028C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800290: jal         0x8009F1C8
    // 0x80800294: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_5;
    // 0x80800294: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80800298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080029C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808002A0: jal         0x8009F1C8
    // 0x808002A4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_6;
    // 0x808002A4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_6:
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002AC: jal         0x80095760
    // 0x808002B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80095760(rdram, ctx);
        goto after_7;
    // 0x808002B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x808002B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002B8: jal         0x80095760
    // 0x808002BC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80095760(rdram, ctx);
        goto after_8;
    // 0x808002BC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_8:
    // 0x808002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808002C8: jal         0x800947EC
    // 0x808002CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_9;
    // 0x808002CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x808002D0: lui         $a1, 0x3F8C
    ctx->r5 = S32(0X3F8C << 16);
    // 0x808002D4: sb          $zero, 0x165($s0)
    MEM_B(0X165, ctx->r16) = 0;
    // 0x808002D8: ori         $a1, $a1, 0xCC80
    ctx->r5 = ctx->r5 | 0XCC80;
    // 0x808002DC: jal         0x80092864
    // 0x808002E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092864(rdram, ctx);
        goto after_10;
    // 0x808002E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808002E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808002E8:
    // 0x808002E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808002F0: jr          $ra
    // 0x808002F4: nop

    return;
    // 0x808002F4: nop

;}
RECOMP_FUNC void bssnowball_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808002FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800300: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800304: jal         0x800A3274
    // 0x80800308: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800A3274(rdram, ctx);
        goto after_0;
    // 0x80800308: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080030C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800310: bnel        $v0, $at, L_808003A0
    if (ctx->r2 != ctx->r1) {
        // 0x80800314: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808003A0;
    }
    goto skip_0;
    // 0x80800314: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800318: lbu         $t6, 0x165($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X165);
    // 0x8080031C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800320: beq         $t6, $zero, L_80800338
    if (ctx->r14 == 0) {
        // 0x80800324: nop
    
            goto L_80800338;
    }
    // 0x80800324: nop

    // 0x80800328: jal         0x80085120
    // 0x8080032C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    _basnowball_entrypoint_9(rdram, ctx);
        goto after_1;
    // 0x8080032C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80800330: b           L_80800350
    // 0x80800334: lbu         $t7, 0x165($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X165);
        goto L_80800350;
    // 0x80800334: lbu         $t7, 0x165($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X165);
L_80800338:
    // 0x80800338: jal         0x8009BB5C
    // 0x8080033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_2;
    // 0x8080033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800340: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800344: jal         0x80085120
    // 0x80800348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basnowball_entrypoint_9(rdram, ctx);
        goto after_3;
    // 0x80800348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080034C: lbu         $t7, 0x165($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X165);
L_80800350:
    // 0x80800350: bnel        $t7, $zero, L_8080037C
    if (ctx->r15 != 0) {
        // 0x80800354: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080037C;
    }
    goto skip_1;
    // 0x80800354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800358: jal         0x8009BB00
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_4;
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800360: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800368: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8080036C: nop

    // 0x80800370: bc1f        L_8080038C
    if (!c1cs) {
        // 0x80800374: nop
    
            goto L_8080038C;
    }
    // 0x80800374: nop

    // 0x80800378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080037C:
    // 0x8080037C: jal         0x80085118
    // 0x80800380: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _basnowball_entrypoint_8(rdram, ctx);
        goto after_5;
    // 0x80800380: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80800384: b           L_80800394
    // 0x80800388: nop

        goto L_80800394;
    // 0x80800388: nop

L_8080038C:
    // 0x8080038C: jal         0x80085118
    // 0x80800390: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _basnowball_entrypoint_8(rdram, ctx);
        goto after_6;
    // 0x80800390: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_80800394:
    // 0x80800394: jal         0x80085138
    // 0x80800398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basnowball_entrypoint_12(rdram, ctx);
        goto after_7;
    // 0x80800398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080039C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808003A0:
    // 0x808003A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808003A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808003A8: jr          $ra
    // 0x808003AC: nop

    return;
    // 0x808003AC: nop

;}
RECOMP_FUNC void func_808003B0_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003B8: jal         0x80085240
    // 0x808003BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _basudie_entrypoint_8(rdram, ctx);
        goto after_0;
    // 0x808003BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808003C0: jal         0x80000198
    // 0x808003C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bssnowball_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x808003C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808003C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003D0: jr          $ra
    // 0x808003D4: nop

    return;
    // 0x808003D4: nop

;}
RECOMP_FUNC void func_808003D8_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003D8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808003DC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808003E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808003E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808003E8: jal         0x800B53A4
    // 0x808003EC: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    func_800B53A4(rdram, ctx);
        goto after_0;
    // 0x808003EC: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_0:
    // 0x808003F0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x808003F4: jal         0x80000234
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bssnowball_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808003FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800400: jal         0x80085248
    // 0x80800404: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    _basudie_entrypoint_9(rdram, ctx);
        goto after_2;
    // 0x80800404: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_2:
    // 0x80800408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080040C: jal         0x8009C128
    // 0x80800410: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009C128(rdram, ctx);
        goto after_3;
    // 0x80800410: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x80800414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800418: addiu       $a1, $zero, 0x694
    ctx->r5 = ADD32(0, 0X694);
    // 0x8080041C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800420: jal         0x8009DB04
    // 0x80800424: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DB04(rdram, ctx);
        goto after_4;
    // 0x80800424: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_4:
    // 0x80800428: jal         0x8009D9D4
    // 0x8080042C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D9D4(rdram, ctx);
        goto after_5;
    // 0x8080042C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800430: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(145, 0X1028) << 16);
    // 0x80800434: addiu       $t6, $t6, 0x1028
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(145, 0X1028));
    // 0x80800438: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080043C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80800440: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800444: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800448: jal         0x800BBCB8
    // 0x8080044C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800BBCB8(rdram, ctx);
        goto after_6;
    // 0x8080044C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x80800450: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(145, 0XF30) << 16);
    // 0x80800454: addiu       $t7, $t7, 0xF30
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(145, 0XF30));
    // 0x80800458: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8080045C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80800460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800464: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800468: jal         0x800BBCB8
    // 0x8080046C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800BBCB8(rdram, ctx);
        goto after_7;
    // 0x8080046C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x80800470: lui         $t9, 0x0
    ctx->r25 = S32(RELOC_HI16(145, 0XF84) << 16);
    // 0x80800474: addiu       $t9, $t9, 0xF84
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(145, 0XF84));
    // 0x80800478: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x8080047C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80800480: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80800484: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800488: jal         0x800BABB8
    // 0x8080048C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_8;
    // 0x8080048C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_8:
    // 0x80800490: jal         0x80085128
    // 0x80800494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basnowball_entrypoint_10(rdram, ctx);
        goto after_9;
    // 0x80800494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800498: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080049C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808004A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808004A4: jr          $ra
    // 0x808004A8: nop

    return;
    // 0x808004A8: nop

;}
RECOMP_FUNC void func_808004AC_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004B4: jal         0x80085250
    // 0x808004B8: nop

    _basudie_entrypoint_10(rdram, ctx);
        goto after_0;
    // 0x808004B8: nop

    after_0:
    // 0x808004BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004C4: jr          $ra
    // 0x808004C8: nop

    return;
    // 0x808004C8: nop

;}
RECOMP_FUNC void bssnowball_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004CC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808004D0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(145, 0X1054) << 16);
    // 0x808004D4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808004D8: jr          $ra
    // 0x808004DC: lw          $v0, 0x1054($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(145, 0X1054));
    return;
    // 0x808004DC: lw          $v0, 0x1054($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(145, 0X1054));
;}
RECOMP_FUNC void func_808004E0_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004E8: jal         0x80082FF0
    // 0x808004EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808004EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808004F0: jal         0x80000198
    // 0x808004F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bssnowball_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x808004F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808004F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800500: jr          $ra
    // 0x80800504: nop

    return;
    // 0x80800504: nop

;}
RECOMP_FUNC void func_80800508_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800508: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080050C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800510: jal         0x80000234
    // 0x80800514: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bssnowball_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800514: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800518: jal         0x80082FE0
    // 0x8080051C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x8080051C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800524: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800528: jr          $ra
    // 0x8080052C: nop

    return;
    // 0x8080052C: nop

;}
RECOMP_FUNC void func_80800530_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800530: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800538: jal         0x80082FE8
    // 0x8080053C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080053C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800540: jal         0x800002F8
    // 0x80800544: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bssnowball_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800544: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080054C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800550: jr          $ra
    // 0x80800554: nop

    return;
    // 0x80800554: nop

;}
RECOMP_FUNC void bssnowball_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800558: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080055C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(145, 0X1064) << 16);
    // 0x80800560: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800564: jr          $ra
    // 0x80800568: lw          $v0, 0x1064($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(145, 0X1064));
    return;
    // 0x80800568: lw          $v0, 0x1064($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(145, 0X1064));
;}
RECOMP_FUNC void func_8080056C_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080056C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800574: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800578: jal         0x8009BF5C
    // 0x8080057C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_0;
    // 0x8080057C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x80800580: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800584: jal         0x8009C4CC
    // 0x80800588: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_1;
    // 0x80800588: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x8080058C: jal         0x80000198
    // 0x80800590: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bssnowball_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x80800590: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800598: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080059C: jr          $ra
    // 0x808005A0: nop

    return;
    // 0x808005A0: nop

;}
RECOMP_FUNC void func_808005A4_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808005A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808005AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808005B0: jal         0x80000234
    // 0x808005B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bssnowball_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808005B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808005B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005BC: addiu       $a1, $zero, 0x5F
    ctx->r5 = ADD32(0, 0X5F);
    // 0x808005C0: jal         0x8008CB3C
    // 0x808005C4: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x808005C4: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_1:
    // 0x808005C8: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x808005CC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808005D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808005D8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x808005DC: jal         0x8009FFD8
    // 0x808005E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x808005E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x808005E4: jal         0x8008CABC
    // 0x808005E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CABC(rdram, ctx);
        goto after_3;
    // 0x808005E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808005EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808005F0: jal         0x8008B134
    // 0x808005F4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008B134(rdram, ctx);
        goto after_4;
    // 0x808005F4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x808005F8: jal         0x80000164
    // 0x808005FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800164_bssnowball(rdram, ctx);
        goto after_5;
    // 0x808005FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800600: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800604: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800608: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080060C: jr          $ra
    // 0x80800610: nop

    return;
    // 0x80800610: nop

;}
RECOMP_FUNC void func_80800614_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800614: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800618: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080061C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800620: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800624: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80800628: jal         0x80000064
    // 0x8080062C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800064_bssnowball(rdram, ctx);
        goto after_0;
    // 0x8080062C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800630: jal         0x80000000
    // 0x80800634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bssnowball(rdram, ctx);
        goto after_1;
    // 0x80800634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080063C: jal         0x8008DF8C
    // 0x80800640: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    func_8008DF8C(rdram, ctx);
        goto after_2;
    // 0x80800640: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    after_2:
    // 0x80800644: beq         $v0, $zero, L_80800654
    if (ctx->r2 == 0) {
        // 0x80800648: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800654;
    }
    // 0x80800648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080064C: jal         0x8009D3A8
    // 0x80800650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_3;
    // 0x80800650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_80800654:
    // 0x80800654: jal         0x8008E078
    // 0x80800658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_4;
    // 0x80800658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080065C: beq         $v0, $zero, L_80800680
    if (ctx->r2 == 0) {
        // 0x80800660: nop
    
            goto L_80800680;
    }
    // 0x80800660: nop

    // 0x80800664: jal         0x800A2EAC
    // 0x80800668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2EAC(rdram, ctx);
        goto after_5;
    // 0x80800668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080066C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800670: jal         0x8009B9B0
    // 0x80800674: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_6;
    // 0x80800674: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x80800678: addiu       $t6, $zero, 0x17E
    ctx->r14 = ADD32(0, 0X17E);
    // 0x8080067C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800680:
    // 0x80800680: jal         0x800002F8
    // 0x80800684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bssnowball_entrypoint_2(rdram, ctx);
        goto after_7;
    // 0x80800684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080068C: jal         0x8009E5C8
    // 0x80800690: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_8;
    // 0x80800690: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x80800694: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800698: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080069C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808006A0: jr          $ra
    // 0x808006A4: nop

    return;
    // 0x808006A4: nop

;}
RECOMP_FUNC void bssnowball_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006A8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808006AC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(145, 0X1074) << 16);
    // 0x808006B0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808006B4: jr          $ra
    // 0x808006B8: lw          $v0, 0x1074($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(145, 0X1074));
    return;
    // 0x808006B8: lw          $v0, 0x1074($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(145, 0X1074));
;}
RECOMP_FUNC void func_808006BC_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808006C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808006C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808006C8: jal         0x80000234
    // 0x808006CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bssnowball_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808006CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808006D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006D4: addiu       $a1, $zero, 0x5F
    ctx->r5 = ADD32(0, 0X5F);
    // 0x808006D8: jal         0x8008CB3C
    // 0x808006DC: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x808006DC: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_1:
    // 0x808006E0: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x808006E4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808006E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808006F0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x808006F4: jal         0x8009FFD8
    // 0x808006F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x808006F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x808006FC: jal         0x8008CABC
    // 0x80800700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CABC(rdram, ctx);
        goto after_3;
    // 0x80800700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800704: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800708: jal         0x8008B134
    // 0x8080070C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008B134(rdram, ctx);
        goto after_4;
    // 0x8080070C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80800710: jal         0x80000164
    // 0x80800714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800164_bssnowball(rdram, ctx);
        goto after_5;
    // 0x80800714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800718: jal         0x8009EF04
    // 0x8080071C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_6;
    // 0x8080071C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800720: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800724: nop

    // 0x80800728: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8080072C: nop

    // 0x80800730: bc1t        L_8080074C
    if (c1cs) {
        // 0x80800734: nop
    
            goto L_8080074C;
    }
    // 0x80800734: nop

    // 0x80800738: jal         0x8009EEB8
    // 0x8080073C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_7;
    // 0x8080073C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800740: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800744: jal         0x8009C914
    // 0x80800748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_8;
    // 0x80800748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_8080074C:
    // 0x8080074C: jal         0x8009C990
    // 0x80800750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_9;
    // 0x80800750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800754: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800758: jal         0x8009B9C0
    // 0x8080075C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_10;
    // 0x8080075C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800764: jal         0x80000064
    // 0x80800768: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800064_bssnowball(rdram, ctx);
        goto after_11;
    // 0x80800768: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x8080076C: jal         0x8009C990
    // 0x80800770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_12;
    // 0x80800770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800774: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800778: jal         0x8009BB00
    // 0x8080077C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_13;
    // 0x8080077C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800780: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800788: jal         0x8009BA68
    // 0x8080078C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_14;
    // 0x8080078C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_14:
    // 0x80800790: lui         $a1, 0x442D
    ctx->r5 = S32(0X442D << 16);
    // 0x80800794: ori         $a1, $a1, 0x6000
    ctx->r5 = ctx->r5 | 0X6000;
    // 0x80800798: jal         0x8009BA58
    // 0x8080079C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_15;
    // 0x8080079C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808007A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007A4: jal         0x8009BCB4
    // 0x808007A8: lui         $a1, 0xC516
    ctx->r5 = S32(0XC516 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_16;
    // 0x808007A8: lui         $a1, 0xC516
    ctx->r5 = S32(0XC516 << 16);
    after_16:
    // 0x808007AC: lui         $a1, 0x3FAC
    ctx->r5 = S32(0X3FAC << 16);
    // 0x808007B0: lui         $a2, 0x3FB9
    ctx->r6 = S32(0X3FB9 << 16);
    // 0x808007B4: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x808007B8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808007BC: jal         0x8009D7A4
    // 0x808007C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D7A4(rdram, ctx);
        goto after_17;
    // 0x808007C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x808007C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808007C8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808007CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808007D0: jr          $ra
    // 0x808007D4: nop

    return;
    // 0x808007D4: nop

;}
RECOMP_FUNC void func_808007D8_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808007DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808007E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808007E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808007E8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x808007EC: jal         0x80000064
    // 0x808007F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800064_bssnowball(rdram, ctx);
        goto after_0;
    // 0x808007F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x808007F4: jal         0x80000000
    // 0x808007F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bssnowball(rdram, ctx);
        goto after_1;
    // 0x808007F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808007FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800800: jal         0x80091A30
    // 0x80800804: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_2;
    // 0x80800804: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_2:
    // 0x80800808: beql        $v0, $zero, L_8080083C
    if (ctx->r2 == 0) {
        // 0x8080080C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080083C;
    }
    goto skip_0;
    // 0x8080080C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800810: jal         0x8009BB50
    // 0x80800814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_3;
    // 0x80800814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800818: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080081C: nop

    // 0x80800820: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800824: nop

    // 0x80800828: bc1fl       L_8080083C
    if (!c1cs) {
        // 0x8080082C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080083C;
    }
    goto skip_1;
    // 0x8080082C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800830: jal         0x8009BC6C
    // 0x80800834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_4;
    // 0x80800834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080083C:
    // 0x8080083C: jal         0x8008DF8C
    // 0x80800840: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    func_8008DF8C(rdram, ctx);
        goto after_5;
    // 0x80800840: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    after_5:
    // 0x80800844: beq         $v0, $zero, L_80800854
    if (ctx->r2 == 0) {
        // 0x80800848: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800854;
    }
    // 0x80800848: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080084C: jal         0x8009D3A8
    // 0x80800850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_6;
    // 0x80800850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_80800854:
    // 0x80800854: jal         0x8008E078
    // 0x80800858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_7;
    // 0x80800858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080085C: beq         $v0, $zero, L_80800874
    if (ctx->r2 == 0) {
        // 0x80800860: nop
    
            goto L_80800874;
    }
    // 0x80800860: nop

    // 0x80800864: jal         0x800A2EAC
    // 0x80800868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2EAC(rdram, ctx);
        goto after_8;
    // 0x80800868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8080086C: addiu       $t6, $zero, 0x17E
    ctx->r14 = ADD32(0, 0X17E);
    // 0x80800870: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800874:
    // 0x80800874: jal         0x800002F8
    // 0x80800878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bssnowball_entrypoint_2(rdram, ctx);
        goto after_9;
    // 0x80800878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080087C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800880: jal         0x8009E5C8
    // 0x80800884: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_10;
    // 0x80800884: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_10:
    // 0x80800888: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080088C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800890: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800894: jr          $ra
    // 0x80800898: nop

    return;
    // 0x80800898: nop

;}
RECOMP_FUNC void func_8080089C_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080089C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808008A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808008A4: jal         0x8009BC6C
    // 0x808008A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x808008A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808008AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808008B0: jal         0x8009BF5C
    // 0x808008B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_1;
    // 0x808008B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x808008B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808008BC: jal         0x8009C4CC
    // 0x808008C0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_2;
    // 0x808008C0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x808008C4: jal         0x80000198
    // 0x808008C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bssnowball_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x808008C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x808008CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808008D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808008D4: jr          $ra
    // 0x808008D8: nop

    return;
    // 0x808008D8: nop

;}
RECOMP_FUNC void bssnowball_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008DC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808008E0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(145, 0X1084) << 16);
    // 0x808008E4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808008E8: jr          $ra
    // 0x808008EC: lw          $v0, 0x1084($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(145, 0X1084));
    return;
    // 0x808008EC: lw          $v0, 0x1084($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(145, 0X1084));
;}
RECOMP_FUNC void func_808008F0_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808008F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808008F8: jal         0x80099B94
    // 0x808008FC: nop

    func_80099B94(rdram, ctx);
        goto after_0;
    // 0x808008FC: nop

    after_0:
    // 0x80800900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800904: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800908: jr          $ra
    // 0x8080090C: nop

    return;
    // 0x8080090C: nop

;}
RECOMP_FUNC void func_80800910_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800910: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800914: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800918: jal         0x80000198
    // 0x8080091C: nop

    bssnowball_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x8080091C: nop

    after_0:
    // 0x80800920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800928: jr          $ra
    // 0x8080092C: nop

    return;
    // 0x8080092C: nop

;}
RECOMP_FUNC void func_80800930_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800930: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800934: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800938: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080093C: jal         0x80000234
    // 0x80800940: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bssnowball_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800940: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800948: addiu       $a1, $zero, 0x5F
    ctx->r5 = ADD32(0, 0X5F);
    // 0x8080094C: jal         0x8008CB3C
    // 0x80800950: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80800950: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_1:
    // 0x80800954: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80800958: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080095C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800960: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800964: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800968: jal         0x8009FFD8
    // 0x8080096C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x8080096C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80800970: jal         0x8008CABC
    // 0x80800974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CABC(rdram, ctx);
        goto after_3;
    // 0x80800974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800978: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080097C: jal         0x8008B134
    // 0x80800980: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008B134(rdram, ctx);
        goto after_4;
    // 0x80800980: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80800984: jal         0x80000164
    // 0x80800988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800164_bssnowball(rdram, ctx);
        goto after_5;
    // 0x80800988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080098C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800990: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800994: sb          $zero, 0x164($s0)
    MEM_B(0X164, ctx->r16) = 0;
    // 0x80800998: swc1        $f4, 0x174($s0)
    MEM_W(0X174, ctx->r16) = ctx->f4.u32l;
    // 0x8080099C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808009A0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808009A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808009A8: jr          $ra
    // 0x808009AC: nop

    return;
    // 0x808009AC: nop

;}
RECOMP_FUNC void func_808009B0_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808009B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808009B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808009BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808009C0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x808009C4: jal         0x8009D3A8
    // 0x808009C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_0;
    // 0x808009C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808009CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009D0: jal         0x80000064
    // 0x808009D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800064_bssnowball(rdram, ctx);
        goto after_1;
    // 0x808009D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808009D8: jal         0x80000000
    // 0x808009DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bssnowball(rdram, ctx);
        goto after_2;
    // 0x808009DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808009E0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(145, 0XF10) << 16);
    // 0x808009E4: lwc1        $f2, 0xF10($at)
    ctx->f2.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(145, 0XF10));
    // 0x808009E8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x808009EC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x808009F0: nop

    // 0x808009F4: bc1fl       L_80800AA4
    if (!c1cs) {
        // 0x808009F8: lwc1        $f4, 0x28($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
            goto L_80800AA4;
    }
    goto skip_0;
    // 0x808009F8: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    skip_0:
    // 0x808009FC: lwc1        $f4, 0x174($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X174);
    // 0x80800A00: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x80800A04: nop

    // 0x80800A08: bc1fl       L_80800AA4
    if (!c1cs) {
        // 0x80800A0C: lwc1        $f4, 0x28($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
            goto L_80800AA4;
    }
    goto skip_1;
    // 0x80800A0C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    skip_1:
    // 0x80800A10: jal         0x8009BB5C
    // 0x80800A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_3;
    // 0x80800A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800A18: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(145, 0XF14) << 16);
    // 0x80800A1C: lwc1        $f6, 0xF14($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(145, 0XF14));
    // 0x80800A20: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800A24: lui         $a3, 0x3F66
    ctx->r7 = S32(0X3F66 << 16);
    // 0x80800A28: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80800A2C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800A30: lui         $a2, 0x442F
    ctx->r6 = S32(0X442F << 16);
    // 0x80800A34: jal         0x800F10B4
    // 0x80800A38: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_4;
    // 0x80800A38: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x80800A3C: lbu         $t6, 0x164($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X164);
    // 0x80800A40: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(145, 0XF1C) << 16);
    // 0x80800A44: beq         $t6, $zero, L_80800A5C
    if (ctx->r14 == 0) {
        // 0x80800A48: nop
    
            goto L_80800A5C;
    }
    // 0x80800A48: nop

    // 0x80800A4C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(145, 0XF18) << 16);
    // 0x80800A50: lwc1        $f8, 0xF18($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(145, 0XF18));
    // 0x80800A54: b           L_80800A64
    // 0x80800A58: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
        goto L_80800A64;
    // 0x80800A58: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
L_80800A5C:
    // 0x80800A5C: lwc1        $f10, 0xF1C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(145, 0XF1C));
    // 0x80800A60: add.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f10.fl;
L_80800A64:
    // 0x80800A64: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(145, 0XF20) << 16);
    // 0x80800A68: lwc1        $f0, 0xF20($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(145, 0XF20));
    // 0x80800A6C: addiu       $t7, $zero, 0x6D60
    ctx->r15 = ADD32(0, 0X6D60);
    // 0x80800A70: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800A74: sub.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x80800A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A7C: addiu       $a1, $zero, 0x5F2
    ctx->r5 = ADD32(0, 0X5F2);
    // 0x80800A80: add.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x80800A84: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80800A88: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80800A8C: jal         0x8009DBB0
    // 0x80800A90: nop

    func_8009DBB0(rdram, ctx);
        goto after_5;
    // 0x80800A90: nop

    after_5:
    // 0x80800A94: lbu         $t8, 0x164($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X164);
    // 0x80800A98: xori        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 ^ 0X1;
    // 0x80800A9C: sb          $t9, 0x164($s0)
    MEM_B(0X164, ctx->r16) = ctx->r25;
    // 0x80800AA0: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
L_80800AA4:
    // 0x80800AA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AA8: jal         0x8009EF10
    // 0x80800AAC: swc1        $f4, 0x174($s0)
    MEM_W(0X174, ctx->r16) = ctx->f4.u32l;
    func_8009EF10(rdram, ctx);
        goto after_6;
    // 0x80800AAC: swc1        $f4, 0x174($s0)
    MEM_W(0X174, ctx->r16) = ctx->f4.u32l;
    after_6:
    // 0x80800AB0: bne         $v0, $zero, L_80800ADC
    if (ctx->r2 != 0) {
        // 0x80800AB4: nop
    
            goto L_80800ADC;
    }
    // 0x80800AB4: nop

    // 0x80800AB8: jal         0x800850F0
    // 0x80800ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basnowball_entrypoint_3(rdram, ctx);
        goto after_7;
    // 0x80800ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800AC0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80800AC4: addiu       $t0, $zero, 0x17D
    ctx->r8 = ADD32(0, 0X17D);
    // 0x80800AC8: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80800ACC: nop

    // 0x80800AD0: bc1f        L_80800ADC
    if (!c1cs) {
        // 0x80800AD4: nop
    
            goto L_80800ADC;
    }
    // 0x80800AD4: nop

    // 0x80800AD8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_80800ADC:
    // 0x80800ADC: jal         0x8008DD04
    // 0x80800AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_8;
    // 0x80800AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800AE4: beq         $v0, $zero, L_80800AF4
    if (ctx->r2 == 0) {
        // 0x80800AE8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800AF4;
    }
    // 0x80800AE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AEC: addiu       $t1, $zero, 0x180
    ctx->r9 = ADD32(0, 0X180);
    // 0x80800AF0: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_80800AF4:
    // 0x80800AF4: jal         0x80091A58
    // 0x80800AF8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_9;
    // 0x80800AF8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_9:
    // 0x80800AFC: beq         $v0, $zero, L_80800B08
    if (ctx->r2 == 0) {
        // 0x80800B00: addiu       $t2, $zero, 0x17F
        ctx->r10 = ADD32(0, 0X17F);
            goto L_80800B08;
    }
    // 0x80800B00: addiu       $t2, $zero, 0x17F
    ctx->r10 = ADD32(0, 0X17F);
    // 0x80800B04: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
L_80800B08:
    // 0x80800B08: jal         0x800002F8
    // 0x80800B0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bssnowball_entrypoint_2(rdram, ctx);
        goto after_10;
    // 0x80800B0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800B10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B14: jal         0x8009E5C8
    // 0x80800B18: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_11;
    // 0x80800B18: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_11:
    // 0x80800B1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800B20: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800B24: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800B28: jr          $ra
    // 0x80800B2C: nop

    return;
    // 0x80800B2C: nop

;}
RECOMP_FUNC void bssnowball_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B30: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800B34: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(145, 0X1094) << 16);
    // 0x80800B38: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800B3C: jr          $ra
    // 0x80800B40: lw          $v0, 0x1094($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(145, 0X1094));
    return;
    // 0x80800B40: lw          $v0, 0x1094($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(145, 0X1094));
;}
RECOMP_FUNC void func_80800B44_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800B48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B4C: jal         0x80085148
    // 0x80800B50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _baspin_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800B50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800B54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800B58: jal         0x80000198
    // 0x80800B5C: sb          $zero, 0x165($a0)
    MEM_B(0X165, ctx->r4) = 0;
    bssnowball_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800B5C: sb          $zero, 0x165($a0)
    MEM_B(0X165, ctx->r4) = 0;
    after_1:
    // 0x80800B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800B68: jr          $ra
    // 0x80800B6C: nop

    return;
    // 0x80800B6C: nop

;}
RECOMP_FUNC void func_80800B70_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800B74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800B78: jal         0x80000234
    // 0x80800B7C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    bssnowball_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800B7C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800B80: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800B84: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800B88: jal         0x80085128
    // 0x80800B8C: sb          $t6, 0x165($a0)
    MEM_B(0X165, ctx->r4) = ctx->r14;
    _basnowball_entrypoint_10(rdram, ctx);
        goto after_1;
    // 0x80800B8C: sb          $t6, 0x165($a0)
    MEM_B(0X165, ctx->r4) = ctx->r14;
    after_1:
    // 0x80800B90: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x80800B94: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800B98: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800B9C: addiu       $a1, $zero, 0x5E
    ctx->r5 = ADD32(0, 0X5E);
    // 0x80800BA0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x80800BA4: jal         0x80085150
    // 0x80800BA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    _baspin_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80800BA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80800BAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800BB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800BB4: jr          $ra
    // 0x80800BB8: nop

    return;
    // 0x80800BB8: nop

;}
RECOMP_FUNC void func_80800BBC_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800BC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BC4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800BC8: jal         0x800002F8
    // 0x80800BCC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    bssnowball_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800BCC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800BD0: jal         0x80085158
    // 0x80800BD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _baspin_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x80800BD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800BD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800BDC: bne         $v0, $at, L_80800BE8
    if (ctx->r2 != ctx->r1) {
        // 0x80800BE0: addiu       $t6, $zero, 0x17D
        ctx->r14 = ADD32(0, 0X17D);
            goto L_80800BE8;
    }
    // 0x80800BE0: addiu       $t6, $zero, 0x17D
    ctx->r14 = ADD32(0, 0X17D);
    // 0x80800BE4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80800BE8:
    // 0x80800BE8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800BEC: jal         0x8009E5C8
    // 0x80800BF0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80800BF0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80800BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800BF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800BFC: jr          $ra
    // 0x80800C00: nop

    return;
    // 0x80800C00: nop

;}
RECOMP_FUNC void bssnowball_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C04: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800C08: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(145, 0X10A4) << 16);
    // 0x80800C0C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800C10: jr          $ra
    // 0x80800C14: lw          $v0, 0x10A4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(145, 0X10A4));
    return;
    // 0x80800C14: lw          $v0, 0x10A4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(145, 0X10A4));
;}
RECOMP_FUNC void func_80800C18_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800C1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800C20: jal         0x800845D0
    // 0x80800C24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800C24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800C28: jal         0x80000198
    // 0x80800C2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bssnowball_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800C2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C38: jr          $ra
    // 0x80800C3C: nop

    return;
    // 0x80800C3C: nop

;}
RECOMP_FUNC void func_80800C40_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800C44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800C48: jal         0x80000234
    // 0x80800C4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bssnowball_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800C4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800C50: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800C54: jal         0x800845D8
    // 0x80800C58: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80800C58: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80800C5C: lui         $a2, 0x3F03
    ctx->r6 = S32(0X3F03 << 16);
    // 0x80800C60: ori         $a2, $a2, 0x46DC
    ctx->r6 = ctx->r6 | 0X46DC;
    // 0x80800C64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800C68: jal         0x800845E0
    // 0x80800C6C: addiu       $a1, $zero, 0x5E
    ctx->r5 = ADD32(0, 0X5E);
    _babounce_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80800C6C: addiu       $a1, $zero, 0x5E
    ctx->r5 = ADD32(0, 0X5E);
    after_2:
    // 0x80800C70: jal         0x8008CABC
    // 0x80800C74: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008CABC(rdram, ctx);
        goto after_3;
    // 0x80800C74: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80800C78: lui         $a1, 0x3DD2
    ctx->r5 = S32(0X3DD2 << 16);
    // 0x80800C7C: ori         $a1, $a1, 0x1FF3
    ctx->r5 = ctx->r5 | 0X1FF3;
    // 0x80800C80: jal         0x8008B10C
    // 0x80800C84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B10C(rdram, ctx);
        goto after_4;
    // 0x80800C84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x80800C88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C90: jr          $ra
    // 0x80800C94: nop

    return;
    // 0x80800C94: nop

;}
RECOMP_FUNC void func_80800C98_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800C9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800CA0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800CA4: jal         0x800845C8
    // 0x80800CA8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _babounce_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800CA8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800CAC: beq         $v0, $zero, L_80800CBC
    if (ctx->r2 == 0) {
        // 0x80800CB0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800CBC;
    }
    // 0x80800CB0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800CB4: jal         0x80000064
    // 0x80800CB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800064_bssnowball(rdram, ctx);
        goto after_1;
    // 0x80800CB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80800CBC:
    // 0x80800CBC: jal         0x80084600
    // 0x80800CC0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _babounce_entrypoint_9(rdram, ctx);
        goto after_2;
    // 0x80800CC0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800CC4: beq         $v0, $zero, L_80800CD0
    if (ctx->r2 == 0) {
        // 0x80800CC8: addiu       $t6, $zero, 0x17D
        ctx->r14 = ADD32(0, 0X17D);
            goto L_80800CD0;
    }
    // 0x80800CC8: addiu       $t6, $zero, 0x17D
    ctx->r14 = ADD32(0, 0X17D);
    // 0x80800CCC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80800CD0:
    // 0x80800CD0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800CD4: jal         0x8009E5C8
    // 0x80800CD8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x80800CD8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x80800CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800CE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800CE4: jr          $ra
    // 0x80800CE8: nop

    return;
    // 0x80800CE8: nop

;}
RECOMP_FUNC void bssnowball_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CEC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800CF0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(145, 0X10B4) << 16);
    // 0x80800CF4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800CF8: jr          $ra
    // 0x80800CFC: lw          $v0, 0x10B4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(145, 0X10B4));
    return;
    // 0x80800CFC: lw          $v0, 0x10B4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(145, 0X10B4));
;}
RECOMP_FUNC void func_80800D00_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D08: jal         0x800839B8
    // 0x80800D0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80800D0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D10: jal         0x80000198
    // 0x80800D14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bssnowball_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800D14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800D18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D20: jr          $ra
    // 0x80800D24: nop

    return;
    // 0x80800D24: nop

;}
RECOMP_FUNC void func_80800D28_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D30: jal         0x80000234
    // 0x80800D34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bssnowball_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800D34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D38: jal         0x800839C8
    // 0x80800D3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x80800D3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D48: jr          $ra
    // 0x80800D4C: nop

    return;
    // 0x80800D4C: nop

;}
RECOMP_FUNC void func_80800D50_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800D54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D58: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800D5C: jal         0x800839E8
    // 0x80800D60: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x80800D60: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800D64: beq         $v0, $zero, L_80800D78
    if (ctx->r2 == 0) {
        // 0x80800D68: nop
    
            goto L_80800D78;
    }
    // 0x80800D68: nop

    // 0x80800D6C: jal         0x800839B0
    // 0x80800D70: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsrest_entrypoint_13(rdram, ctx);
        goto after_1;
    // 0x80800D70: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800D74: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_80800D78:
    // 0x80800D78: jal         0x800002F8
    // 0x80800D7C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    bssnowball_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80800D7C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800D80: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800D84: jal         0x8009E5C8
    // 0x80800D88: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x80800D88: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x80800D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800D94: jr          $ra
    // 0x80800D98: nop

    return;
    // 0x80800D98: nop

;}
RECOMP_FUNC void bssnowball_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D9C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800DA0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(145, 0X10C4) << 16);
    // 0x80800DA4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800DA8: jr          $ra
    // 0x80800DAC: lw          $v0, 0x10C4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(145, 0X10C4));
    return;
    // 0x80800DAC: lw          $v0, 0x10C4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(145, 0X10C4));
;}
RECOMP_FUNC void func_80800DB0_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800DB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800DB8: jal         0x80090A2C
    // 0x80800DBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80090A2C(rdram, ctx);
        goto after_0;
    // 0x80800DBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800DC0: jal         0x80000198
    // 0x80800DC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bssnowball_entrypoint_0(rdram, ctx);
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
RECOMP_FUNC void func_80800DD8_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800DDC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800DE0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800DE4: jal         0x80000234
    // 0x80800DE8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bssnowball_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800DE8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800DEC: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x80800DF0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DF8: jal         0x8008CB3C
    // 0x80800DFC: addiu       $a1, $zero, 0x5E
    ctx->r5 = ADD32(0, 0X5E);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80800DFC: addiu       $a1, $zero, 0x5E
    ctx->r5 = ADD32(0, 0X5E);
    after_1:
    // 0x80800E00: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800E04: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800E08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800E10: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800E14: jal         0x8009FFD8
    // 0x80800E18: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800E18: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80800E1C: jal         0x80000164
    // 0x80800E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800164_bssnowball(rdram, ctx);
        goto after_3;
    // 0x80800E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800E24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E28: jal         0x8009B9B0
    // 0x80800E2C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800E2C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800E30: jal         0x800909CC
    // 0x80800E34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800909CC(rdram, ctx);
        goto after_5;
    // 0x80800E34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800E38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800E3C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800E40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800E44: jr          $ra
    // 0x80800E48: nop

    return;
    // 0x80800E48: nop

;}
RECOMP_FUNC void func_80800E4C_bssnowball(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800E50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800E54: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800E58: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800E5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800E60: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80800E64: jal         0x80000064
    // 0x80800E68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800064_bssnowball(rdram, ctx);
        goto after_0;
    // 0x80800E68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800E6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E70: jal         0x8009D3A8
    // 0x80800E74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_1;
    // 0x80800E74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800E78: jal         0x8008DD04
    // 0x80800E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_2;
    // 0x80800E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800E80: beq         $v0, $zero, L_80800E8C
    if (ctx->r2 == 0) {
        // 0x80800E84: nop
    
            goto L_80800E8C;
    }
    // 0x80800E84: nop

    // 0x80800E88: addiu       $s1, $zero, 0x180
    ctx->r17 = ADD32(0, 0X180);
L_80800E8C:
    // 0x80800E8C: jal         0x8009BB00
    // 0x80800E90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_3;
    // 0x80800E90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800E94: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E9C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800EA0: nop

    // 0x80800EA4: bc1f        L_80800EB0
    if (!c1cs) {
        // 0x80800EA8: nop
    
            goto L_80800EB0;
    }
    // 0x80800EA8: nop

    // 0x80800EAC: addiu       $s1, $zero, 0x17E
    ctx->r17 = ADD32(0, 0X17E);
L_80800EB0:
    // 0x80800EB0: jal         0x8000010C
    // 0x80800EB4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8080010C_bssnowball(rdram, ctx);
        goto after_4;
    // 0x80800EB4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x80800EB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EBC: jal         0x800A02DC
    // 0x80800EC0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800A02DC(rdram, ctx);
        goto after_5;
    // 0x80800EC0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_5:
    // 0x80800EC4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80800EC8: jal         0x800002F8
    // 0x80800ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bssnowball_entrypoint_2(rdram, ctx);
        goto after_6;
    // 0x80800ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800ED4: jal         0x8009E5C8
    // 0x80800ED8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_7;
    // 0x80800ED8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x80800EDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800EE0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800EE4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800EE8: jr          $ra
    // 0x80800EEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800EEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bssnowball_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EF0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800EF4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(145, 0X10D4) << 16);
    // 0x80800EF8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800EFC: jr          $ra
    // 0x80800F00: lw          $v0, 0x10D4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(145, 0X10D4));
    return;
    // 0x80800F00: lw          $v0, 0x10D4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(145, 0X10D4));
    // 0x80800F04: nop

    // 0x80800F08: nop

    // 0x80800F0C: nop

;}
RECOMP_FUNC void bssplat_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080000C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800010: jal         0x800954E8
    // 0x80800014: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800954E8(rdram, ctx);
        goto after_0;
    // 0x80800014: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x80800018: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8080001C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800020: jal         0x800A17A8
    // 0x80800024: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    func_800A17A8(rdram, ctx);
        goto after_1;
    // 0x80800024: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    after_1:
    // 0x80800028: jal         0x80096694
    // 0x8080002C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096694(rdram, ctx);
        goto after_2;
    // 0x8080002C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800030: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800034: bne         $v0, $at, L_8080005C
    if (ctx->r2 != ctx->r1) {
        // 0x80800038: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080005C;
    }
    // 0x80800038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080003C: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80800040: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800044: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800048: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x8080004C: jal         0x8009DB04
    // 0x80800050: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DB04(rdram, ctx);
        goto after_3;
    // 0x80800050: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_3:
    // 0x80800054: b           L_80800070
    // 0x80800058: nop

        goto L_80800070;
    // 0x80800058: nop

L_8080005C:
    // 0x8080005C: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80800060: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800064: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x80800068: jal         0x8009DB04
    // 0x8080006C: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DB04(rdram, ctx);
        goto after_4;
    // 0x8080006C: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_4:
L_80800070:
    // 0x80800070: jal         0x80084A08
    // 0x80800074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_8(rdram, ctx);
        goto after_5;
    // 0x80800074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080007C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80800080: jal         0x80084FC8
    // 0x80800084: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    _bashake_entrypoint_0(rdram, ctx);
        goto after_6;
    // 0x80800084: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_6:
    // 0x80800088: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080008C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800090: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800094: jr          $ra
    // 0x80800098: nop

    return;
    // 0x80800098: nop

;}
RECOMP_FUNC void func_8080009C_bssplat(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080009C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808000A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808000A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808000A8: lui         $a2, 0x3F8C
    ctx->r6 = S32(0X3F8C << 16);
    // 0x808000AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000B0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808000B4: jal         0x8008CDB8
    // 0x808000B8: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    func_8008CDB8(rdram, ctx);
        goto after_0;
    // 0x808000B8: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    after_0:
    // 0x808000BC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x808000C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808000C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808000D0: jal         0x8009FFD8
    // 0x808000D4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x808000D4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x808000D8: jal         0x80000000
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bssplat_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E4: addiu       $a1, $zero, 0x427
    ctx->r5 = ADD32(0, 0X427);
    // 0x808000E8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808000EC: jal         0x8009DF18
    // 0x808000F0: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    func_8009DF18(rdram, ctx);
        goto after_3;
    // 0x808000F0: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    after_3:
    // 0x808000F4: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x808000F8: jal         0x8008E944
    // 0x808000FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_4;
    // 0x808000FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800100: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800104: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800108: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080010C: jr          $ra
    // 0x80800110: nop

    return;
    // 0x80800110: nop

;}
RECOMP_FUNC void func_80800114_bssplat(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800114: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800118: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080011C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800120: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800124: jal         0x8008CABC
    // 0x80800128: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800128: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x8080012C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800130: jal         0x8009BB00
    // 0x80800134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_1;
    // 0x80800134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800138: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8080013C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800140: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80800144: jal         0x800F0E00
    // 0x80800148: sub.s       $f14, $f0, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f4.fl;
    func_800F0E00(rdram, ctx);
        goto after_2;
    // 0x80800148: sub.s       $f14, $f0, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f4.fl;
    after_2:
    // 0x8080014C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800150: jal         0x8009B9B0
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800158: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x8080015C: beq         $v0, $zero, L_80800174
    if (ctx->r2 == 0) {
        // 0x80800160: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80800174;
    }
    // 0x80800160: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800164: beq         $v0, $at, L_808001DC
    if (ctx->r2 == ctx->r1) {
        // 0x80800168: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808001DC;
    }
    // 0x80800168: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080016C: b           L_8080021C
    // 0x80800170: nop

        goto L_8080021C;
    // 0x80800170: nop

L_80800174:
    // 0x80800174: jal         0x8009BB00
    // 0x80800178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_4;
    // 0x80800178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080017C: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x80800180: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800184: nop

    // 0x80800188: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8080018C: nop

    // 0x80800190: bc1f        L_808001A0
    if (!c1cs) {
        // 0x80800194: nop
    
            goto L_808001A0;
    }
    // 0x80800194: nop

    // 0x80800198: jal         0x80084A10
    // 0x8080019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_9(rdram, ctx);
        goto after_5;
    // 0x8080019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_808001A0:
    // 0x808001A0: jal         0x8008DD04
    // 0x808001A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_6;
    // 0x808001A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808001A8: beq         $v0, $zero, L_808001B4
    if (ctx->r2 == 0) {
        // 0x808001AC: addiu       $t6, $zero, 0x2F
        ctx->r14 = ADD32(0, 0X2F);
            goto L_808001B4;
    }
    // 0x808001AC: addiu       $t6, $zero, 0x2F
    ctx->r14 = ADD32(0, 0X2F);
    // 0x808001B0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_808001B4:
    // 0x808001B4: jal         0x8008B324
    // 0x808001B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_7;
    // 0x808001B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_7:
    // 0x808001BC: beq         $v0, $zero, L_8080021C
    if (ctx->r2 == 0) {
        // 0x808001C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080021C;
    }
    // 0x808001C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001C4: addiu       $a1, $zero, 0xD2
    ctx->r5 = ADD32(0, 0XD2);
    // 0x808001C8: jal         0x8008CCBC
    // 0x808001CC: lui         $a2, 0x4010
    ctx->r6 = S32(0X4010 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_8;
    // 0x808001CC: lui         $a2, 0x4010
    ctx->r6 = S32(0X4010 << 16);
    after_8:
    // 0x808001D0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x808001D4: b           L_8080021C
    // 0x808001D8: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
        goto L_8080021C;
    // 0x808001D8: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_808001DC:
    // 0x808001DC: lui         $a1, 0x3F21
    ctx->r5 = S32(0X3F21 << 16);
    // 0x808001E0: jal         0x8008B348
    // 0x808001E4: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    func_8008B348(rdram, ctx);
        goto after_9;
    // 0x808001E4: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    after_9:
    // 0x808001E8: beq         $v0, $zero, L_808001F4
    if (ctx->r2 == 0) {
        // 0x808001EC: addiu       $t8, $zero, 0x20
        ctx->r24 = ADD32(0, 0X20);
            goto L_808001F4;
    }
    // 0x808001EC: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x808001F0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_808001F4:
    // 0x808001F4: jal         0x8008B324
    // 0x808001F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_10;
    // 0x808001F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_10:
    // 0x808001FC: beq         $v0, $zero, L_80800208
    if (ctx->r2 == 0) {
        // 0x80800200: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_80800208;
    }
    // 0x80800200: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80800204: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80800208:
    // 0x80800208: jal         0x8008DD04
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_11;
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800210: beq         $v0, $zero, L_8080021C
    if (ctx->r2 == 0) {
        // 0x80800214: addiu       $t0, $zero, 0x2F
        ctx->r8 = ADD32(0, 0X2F);
            goto L_8080021C;
    }
    // 0x80800214: addiu       $t0, $zero, 0x2F
    ctx->r8 = ADD32(0, 0X2F);
    // 0x80800218: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_8080021C:
    // 0x8080021C: jal         0x8008E078
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_12;
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800224: bne         $v0, $zero, L_80800240
    if (ctx->r2 != 0) {
        // 0x80800228: nop
    
            goto L_80800240;
    }
    // 0x80800228: nop

    // 0x8080022C: jal         0x8008E35C
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_13;
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800234: beq         $v0, $zero, L_80800240
    if (ctx->r2 == 0) {
        // 0x80800238: addiu       $t1, $zero, 0x2D
        ctx->r9 = ADD32(0, 0X2D);
            goto L_80800240;
    }
    // 0x80800238: addiu       $t1, $zero, 0x2D
    ctx->r9 = ADD32(0, 0X2D);
    // 0x8080023C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_80800240:
    // 0x80800240: jal         0x800A1718
    // 0x80800244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1718(rdram, ctx);
        goto after_14;
    // 0x80800244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800248: bne         $v0, $zero, L_80800258
    if (ctx->r2 != 0) {
        // 0x8080024C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800258;
    }
    // 0x8080024C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800250: addiu       $t2, $zero, 0x41
    ctx->r10 = ADD32(0, 0X41);
    // 0x80800254: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_80800258:
    // 0x80800258: jal         0x8009E5C8
    // 0x8080025C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_15;
    // 0x8080025C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_15:
    // 0x80800260: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800264: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800268: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080026C: jr          $ra
    // 0x80800270: nop

    return;
    // 0x80800270: nop

;}
RECOMP_FUNC void func_80800274_bssplat(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800274: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800278: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080027C: jal         0x8008E95C
    // 0x80800280: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008E95C(rdram, ctx);
        goto after_0;
    // 0x80800280: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800284: jal         0x8009BD88
    // 0x80800288: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BD88(rdram, ctx);
        goto after_1;
    // 0x80800288: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080028C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800294: jr          $ra
    // 0x80800298: nop

    return;
    // 0x80800298: nop

;}
RECOMP_FUNC void bssplat_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080029C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808002A0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(146, 0X2B0) << 16);
    // 0x808002A4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808002A8: jr          $ra
    // 0x808002AC: lw          $v0, 0x2B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(146, 0X2B0));
    return;
    // 0x808002AC: lw          $v0, 0x2B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(146, 0X2B0));
;}
RECOMP_FUNC void bssplitup_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080000C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800010: jal         0x800A3410
    // 0x80800014: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800A3410(rdram, ctx);
        goto after_0;
    // 0x80800014: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x80800018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080001C: jal         0x80084788
    // 0x80800020: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800020: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80800024: lui         $a2, 0x400C
    ctx->r6 = S32(0X400C << 16);
    // 0x80800028: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080002C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800030: jal         0x8008CCBC
    // 0x80800034: addiu       $a1, $zero, 0xA2
    ctx->r5 = ADD32(0, 0XA2);
    func_8008CCBC(rdram, ctx);
        goto after_2;
    // 0x80800034: addiu       $a1, $zero, 0xA2
    ctx->r5 = ADD32(0, 0XA2);
    after_2:
    // 0x80800038: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8080003C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800044: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800048: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080004C: jal         0x8009FFD8
    // 0x80800050: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_3;
    // 0x80800050: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_3:
    // 0x80800054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800058: jal         0x8009B94C
    // 0x8080005C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009B94C(rdram, ctx);
        goto after_4;
    // 0x8080005C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80800060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800064: jal         0x8009BA9C
    // 0x80800068: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_5;
    // 0x80800068: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8080006C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800070: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800074: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800078: jr          $ra
    // 0x8080007C: nop

    return;
    // 0x8080007C: nop

;}
RECOMP_FUNC void bssplitup_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800080: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800088: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8080008C: jal         0x8008CAEC
    // 0x80800090: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8008CAEC(rdram, ctx);
        goto after_0;
    // 0x80800090: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800094: beq         $v0, $zero, L_808000BC
    if (ctx->r2 == 0) {
        // 0x80800098: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_808000BC;
    }
    // 0x80800098: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8080009C: jal         0x800F54E4
    // 0x808000A0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_800F54E4(rdram, ctx);
        goto after_1;
    // 0x808000A0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_1:
    // 0x808000A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808000A8: lw          $t7, 0x184($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X184);
    // 0x808000AC: beql        $v0, $t7, L_808000C0
    if (ctx->r2 == ctx->r15) {
        // 0x808000B0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808000C0;
    }
    goto skip_0;
    // 0x808000B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x808000B4: jal         0x800F457C
    // 0x808000B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800F457C(rdram, ctx);
        goto after_2;
    // 0x808000B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
L_808000BC:
    // 0x808000BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_808000C0:
    // 0x808000C0: jal         0x8009E5C8
    // 0x808000C4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x808000C4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x808000C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000D0: jr          $ra
    // 0x808000D4: nop

    return;
    // 0x808000D4: nop

;}
RECOMP_FUNC void bssplitup_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808000E4: jal         0x80084950
    // 0x808000E8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _baduo_entrypoint_7(rdram, ctx);
        goto after_0;
    // 0x808000E8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x808000EC: jal         0x8009E704
    // 0x808000F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009E704(rdram, ctx);
        goto after_1;
    // 0x808000F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808000F4: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x808000F8: beq         $v0, $at, L_80800108
    if (ctx->r2 == ctx->r1) {
        // 0x808000FC: addiu       $a0, $zero, 0x4F5
        ctx->r4 = ADD32(0, 0X4F5);
            goto L_80800108;
    }
    // 0x808000FC: addiu       $a0, $zero, 0x4F5
    ctx->r4 = ADD32(0, 0X4F5);
    // 0x80800100: jal         0x8008A298
    // 0x80800104: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    _sudialog_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x80800104: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_2:
L_80800108:
    // 0x80800108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080010C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800110: jr          $ra
    // 0x80800114: nop

    return;
    // 0x80800114: nop

;}
RECOMP_FUNC void bssplitup_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800118: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080011C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(147, 0X700) << 16);
    // 0x80800120: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800124: jr          $ra
    // 0x80800128: lw          $v0, 0x700($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(147, 0X700));
    return;
    // 0x80800128: lw          $v0, 0x700($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(147, 0X700));
;}
RECOMP_FUNC void func_8080012C_bssplitup(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080012C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800130: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800134: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800138: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080013C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800140: beq         $a1, $at, L_80800168
    if (ctx->r5 == ctx->r1) {
        // 0x80800144: sw          $a1, 0x15C($a0)
        MEM_W(0X15C, ctx->r4) = ctx->r5;
            goto L_80800168;
    }
    // 0x80800144: sw          $a1, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = ctx->r5;
    // 0x80800148: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080014C: beq         $a1, $at, L_808001CC
    if (ctx->r5 == ctx->r1) {
        // 0x80800150: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001CC;
    }
    // 0x80800150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800154: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800158: beq         $a1, $at, L_80800270
    if (ctx->r5 == ctx->r1) {
        // 0x8080015C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800270;
    }
    // 0x8080015C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800160: b           L_8080027C
    // 0x80800164: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8080027C;
    // 0x80800164: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800168:
    // 0x80800168: lui         $a2, 0x400C
    ctx->r6 = S32(0X400C << 16);
    // 0x8080016C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800174: jal         0x8008CCBC
    // 0x80800178: addiu       $a1, $zero, 0xA3
    ctx->r5 = ADD32(0, 0XA3);
    func_8008CCBC(rdram, ctx);
        goto after_0;
    // 0x80800178: addiu       $a1, $zero, 0xA3
    ctx->r5 = ADD32(0, 0XA3);
    after_0:
    // 0x8080017C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800180: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800188: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080018C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800190: jal         0x8009FFD8
    // 0x80800194: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800194: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080019C: jal         0x8009B94C
    // 0x808001A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009B94C(rdram, ctx);
        goto after_2;
    // 0x808001A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808001A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A8: jal         0x8009BA9C
    // 0x808001AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_3;
    // 0x808001AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x808001B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B4: addiu       $a1, $zero, 0x4592
    ctx->r5 = ADD32(0, 0X4592);
    // 0x808001B8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808001BC: jal         0x8009DF18
    // 0x808001C0: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    func_8009DF18(rdram, ctx);
        goto after_4;
    // 0x808001C0: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    after_4:
    // 0x808001C4: b           L_8080027C
    // 0x808001C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8080027C;
    // 0x808001C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808001CC:
    // 0x808001CC: jal         0x8009C128
    // 0x808001D0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_8009C128(rdram, ctx);
        goto after_5;
    // 0x808001D0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_5:
    // 0x808001D4: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x808001D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808001DC: lui         $t7, 0x800F
    ctx->r15 = S32(0X800F << 16);
    // 0x808001E0: addiu       $t7, $t7, -0x14C0
    ctx->r15 = ADD32(ctx->r15, -0X14C0);
    // 0x808001E4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x808001E8: addiu       $a0, $zero, 0x156
    ctx->r4 = ADD32(0, 0X156);
    // 0x808001EC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x808001F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x808001F4: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    // 0x808001F8: jal         0x80089C48
    // 0x808001FC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    _subaddiefind_entrypoint_5(rdram, ctx);
        goto after_6;
    // 0x808001FC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x80800200: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80800204: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80800208: jal         0x800EE7F8
    // 0x8080020C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_800EE7F8(rdram, ctx);
        goto after_7;
    // 0x8080020C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_7:
    // 0x80800210: jal         0x80084DB8
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovegoto_entrypoint_0(rdram, ctx);
        goto after_8;
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080021C: jal         0x80084E18
    // 0x80800220: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    _bamovegoto_entrypoint_12(rdram, ctx);
        goto after_9;
    // 0x80800220: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_9:
    // 0x80800224: jal         0x8008CAC8
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_10;
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8080022C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(147, 0X6F0) << 16);
    // 0x80800230: lwc1        $f6, 0x6F0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(147, 0X6F0));
    // 0x80800234: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(147, 0X6F4) << 16);
    // 0x80800238: lwc1        $f10, 0x6F4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(147, 0X6F4));
    // 0x8080023C: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800244: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80800248: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8080024C: jal         0x80084DF0
    // 0x80800250: nop

    _bamovegoto_entrypoint_7(rdram, ctx);
        goto after_11;
    // 0x80800250: nop

    after_11:
    // 0x80800254: jal         0x80084E20
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovegoto_entrypoint_13(rdram, ctx);
        goto after_12;
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8080025C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x80800260: jal         0x800F9098
    // 0x80800264: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_800F9098(rdram, ctx);
        goto after_13;
    // 0x80800264: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_13:
    // 0x80800268: b           L_8080027C
    // 0x8080026C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8080027C;
    // 0x8080026C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800270:
    // 0x80800270: jal         0x8009B800
    // 0x80800274: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009B800(rdram, ctx);
        goto after_14;
    // 0x80800274: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_14:
    // 0x80800278: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8080027C:
    // 0x8080027C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800280: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80800284: jr          $ra
    // 0x80800288: nop

    return;
    // 0x80800288: nop

;}
RECOMP_FUNC void bssplitup_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080028C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800290: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800294: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800298: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080029C: jal         0x800A3410
    // 0x808002A0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_800A3410(rdram, ctx);
        goto after_0;
    // 0x808002A0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x808002A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808002AC: jal         0x800A38F0
    // 0x808002B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800A38F0(rdram, ctx);
        goto after_1;
    // 0x808002B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x808002B4: jal         0x80092778
    // 0x808002B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092778(rdram, ctx);
        goto after_2;
    // 0x808002B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808002BC: jal         0x8009F258
    // 0x808002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F258(rdram, ctx);
        goto after_3;
    // 0x808002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808002C4: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x808002C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002CC: jal         0x8000012C
    // 0x808002D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8080012C_bssplitup(rdram, ctx);
        goto after_4;
    // 0x808002D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x808002D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808002D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808002E0: jr          $ra
    // 0x808002E4: nop

    return;
    // 0x808002E4: nop

;}
RECOMP_FUNC void bssplitup_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808002EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808002F4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x808002F8: lw          $v0, 0x15C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X15C);
    // 0x808002FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800300: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800304: beq         $v0, $at, L_8080032C
    if (ctx->r2 == ctx->r1) {
        // 0x80800308: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080032C;
    }
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080030C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800310: beq         $v0, $at, L_80800350
    if (ctx->r2 == ctx->r1) {
        // 0x80800314: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800350;
    }
    // 0x80800314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800318: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8080031C: beq         $v0, $at, L_8080036C
    if (ctx->r2 == ctx->r1) {
        // 0x80800320: nop
    
            goto L_8080036C;
    }
    // 0x80800320: nop

    // 0x80800324: b           L_8080036C
    // 0x80800328: nop

        goto L_8080036C;
    // 0x80800328: nop

L_8080032C:
    // 0x8080032C: lui         $a1, 0x3D4C
    ctx->r5 = S32(0X3D4C << 16);
    // 0x80800330: jal         0x8008CB10
    // 0x80800334: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x80800334: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_0:
    // 0x80800338: beq         $v0, $zero, L_8080036C
    if (ctx->r2 == 0) {
        // 0x8080033C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080036C;
    }
    // 0x8080033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800340: jal         0x8000012C
    // 0x80800344: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8080012C_bssplitup(rdram, ctx);
        goto after_1;
    // 0x80800344: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80800348: b           L_8080036C
    // 0x8080034C: nop

        goto L_8080036C;
    // 0x8080034C: nop

L_80800350:
    // 0x80800350: lui         $a1, 0x3F02
    ctx->r5 = S32(0X3F02 << 16);
    // 0x80800354: jal         0x8008CB10
    // 0x80800358: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x80800358: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    after_2:
    // 0x8080035C: beq         $v0, $zero, L_8080036C
    if (ctx->r2 == 0) {
        // 0x80800360: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080036C;
    }
    // 0x80800360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800364: jal         0x8000012C
    // 0x80800368: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8080012C_bssplitup(rdram, ctx);
        goto after_3;
    // 0x80800368: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
L_8080036C:
    // 0x8080036C: jal         0x8008CAEC
    // 0x80800370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_4;
    // 0x80800370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800374: beq         $v0, $zero, L_8080039C
    if (ctx->r2 == 0) {
        // 0x80800378: addiu       $t6, $zero, 0xBB
        ctx->r14 = ADD32(0, 0XBB);
            goto L_8080039C;
    }
    // 0x80800378: addiu       $t6, $zero, 0xBB
    ctx->r14 = ADD32(0, 0XBB);
    // 0x8080037C: jal         0x800F54E4
    // 0x80800380: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    func_800F54E4(rdram, ctx);
        goto after_5;
    // 0x80800380: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    after_5:
    // 0x80800384: lw          $t7, 0x184($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X184);
    // 0x80800388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080038C: beql        $v0, $t7, L_808003A0
    if (ctx->r2 == ctx->r15) {
        // 0x80800390: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003A0;
    }
    goto skip_0;
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800394: jal         0x800F457C
    // 0x80800398: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800F457C(rdram, ctx);
        goto after_6;
    // 0x80800398: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
L_8080039C:
    // 0x8080039C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808003A0:
    // 0x808003A0: jal         0x8009E5C8
    // 0x808003A4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_7;
    // 0x808003A4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_7:
    // 0x808003A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808003AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808003B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808003B4: jr          $ra
    // 0x808003B8: nop

    return;
    // 0x808003B8: nop

;}
RECOMP_FUNC void bssplitup_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808003C8: jal         0x80084950
    // 0x808003CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _baduo_entrypoint_7(rdram, ctx);
        goto after_0;
    // 0x808003CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x808003D0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x808003D4: jal         0x800F8EE4
    // 0x808003D8: lw          $a0, 0x184($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X184);
    func_800F8EE4(rdram, ctx);
        goto after_1;
    // 0x808003D8: lw          $a0, 0x184($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X184);
    after_1:
    // 0x808003DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003E4: jr          $ra
    // 0x808003E8: nop

    return;
    // 0x808003E8: nop

;}
RECOMP_FUNC void bssplitup_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003EC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808003F0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(147, 0X710) << 16);
    // 0x808003F4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808003F8: jr          $ra
    // 0x808003FC: lw          $v0, 0x710($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(147, 0X710));
    return;
    // 0x808003FC: lw          $v0, 0x710($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(147, 0X710));
;}
RECOMP_FUNC void bssplitup_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800400: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800404: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800408: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080040C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800410: addiu       $a1, $zero, 0x6F
    ctx->r5 = ADD32(0, 0X6F);
    // 0x80800414: jal         0x8008CB3C
    // 0x80800418: lui         $a2, 0x40B0
    ctx->r6 = S32(0X40B0 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_0;
    // 0x80800418: lui         $a2, 0x40B0
    ctx->r6 = S32(0X40B0 << 16);
    after_0:
    // 0x8080041C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800420: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800428: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080042C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800430: jal         0x8009FFD8
    // 0x80800434: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800434: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x80800438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080043C: jal         0x8009B94C
    // 0x80800440: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009B94C(rdram, ctx);
        goto after_2;
    // 0x80800440: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800448: jal         0x8009BA9C
    // 0x8080044C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_3;
    // 0x8080044C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800450: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x80800454: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080045C: jal         0x80085338
    // 0x80800460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_set(rdram, ctx);
        goto after_4;
    // 0x80800460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80800464: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800468: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080046C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800470: jr          $ra
    // 0x80800474: nop

    return;
    // 0x80800474: nop

;}
RECOMP_FUNC void bssplitup_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800478: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080047C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800480: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800484: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80800488: jal         0x800852F0
    // 0x8080048C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_0;
    // 0x8080048C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800490: beq         $v0, $zero, L_808004A4
    if (ctx->r2 == 0) {
        // 0x80800494: lw          $a2, 0x1C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X1C);
            goto L_808004A4;
    }
    // 0x80800494: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80800498: jal         0x80084998
    // 0x8080049C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _baduo_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x8080049C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808004A0: addiu       $a2, $zero, 0xB9
    ctx->r6 = ADD32(0, 0XB9);
L_808004A4:
    // 0x808004A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808004A8: jal         0x8009E5C8
    // 0x808004AC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x808004AC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_2:
    // 0x808004B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808004B8: jr          $ra
    // 0x808004BC: nop

    return;
    // 0x808004BC: nop

;}
RECOMP_FUNC void bssplitup_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004C0: jr          $ra
    // 0x808004C4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x808004C4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bssplitup_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004C8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808004CC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(147, 0X720) << 16);
    // 0x808004D0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808004D4: jr          $ra
    // 0x808004D8: lw          $v0, 0x720($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(147, 0X720));
    return;
    // 0x808004D8: lw          $v0, 0x720($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(147, 0X720));
;}
RECOMP_FUNC void bssplitup_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808004E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808004E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808004E8: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x808004EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808004F0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808004F4: jal         0x8008CDB8
    // 0x808004F8: addiu       $a1, $zero, 0x296
    ctx->r5 = ADD32(0, 0X296);
    func_8008CDB8(rdram, ctx);
        goto after_0;
    // 0x808004F8: addiu       $a1, $zero, 0x296
    ctx->r5 = ADD32(0, 0X296);
    after_0:
    // 0x808004FC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800500: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800508: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080050C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800510: jal         0x8009FFD8
    // 0x80800514: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800514: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x80800518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080051C: jal         0x8009B94C
    // 0x80800520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009B94C(rdram, ctx);
        goto after_2;
    // 0x80800520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800524: jal         0x8009C984
    // 0x80800528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_3;
    // 0x80800528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080052C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800530: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800534: jal         0x800136E4
    // 0x80800538: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    func_800136E4(rdram, ctx);
        goto after_4;
    // 0x80800538: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    after_4:
    // 0x8080053C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800544: jal         0x8009BA68
    // 0x80800548: lui         $a2, 0x4448
    ctx->r6 = S32(0X4448 << 16);
    func_8009BA68(rdram, ctx);
        goto after_5;
    // 0x80800548: lui         $a2, 0x4448
    ctx->r6 = S32(0X4448 << 16);
    after_5:
    // 0x8080054C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800550: jal         0x800A0CF4
    // 0x80800554: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_6;
    // 0x80800554: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x80800558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080055C: addiu       $a1, $zero, 0x3EA
    ctx->r5 = ADD32(0, 0X3EA);
    // 0x80800560: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800564: jal         0x8009DF18
    // 0x80800568: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    func_8009DF18(rdram, ctx);
        goto after_7;
    // 0x80800568: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    after_7:
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
RECOMP_FUNC void bssplitup_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800580: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800588: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8080058C: jal         0x8008CAEC
    // 0x80800590: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8008CAEC(rdram, ctx);
        goto after_0;
    // 0x80800590: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800594: beq         $v0, $zero, L_808005A0
    if (ctx->r2 == 0) {
        // 0x80800598: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_808005A0;
    }
    // 0x80800598: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8080059C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_808005A0:
    // 0x808005A0: jal         0x8009E5C8
    // 0x808005A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_1;
    // 0x808005A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808005A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808005B0: jr          $ra
    // 0x808005B4: nop

    return;
    // 0x808005B4: nop

;}
RECOMP_FUNC void bssplitup_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005C0: jal         0x800A0CF4
    // 0x808005C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_0;
    // 0x808005C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808005C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808005D0: jr          $ra
    // 0x808005D4: nop

    return;
    // 0x808005D4: nop

;}
RECOMP_FUNC void bssplitup_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005D8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808005DC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(147, 0X730) << 16);
    // 0x808005E0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808005E4: jr          $ra
    // 0x808005E8: lw          $v0, 0x730($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(147, 0X730));
    return;
    // 0x808005E8: lw          $v0, 0x730($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(147, 0X730));
;}
RECOMP_FUNC void bssplitup_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808005F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808005F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808005F8: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x808005FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800600: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800604: jal         0x8008CDB8
    // 0x80800608: addiu       $a1, $zero, 0x292
    ctx->r5 = ADD32(0, 0X292);
    func_8008CDB8(rdram, ctx);
        goto after_0;
    // 0x80800608: addiu       $a1, $zero, 0x292
    ctx->r5 = ADD32(0, 0X292);
    after_0:
    // 0x8080060C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800610: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
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
        goto after_1;
    // 0x80800624: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x80800628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080062C: jal         0x8009B94C
    // 0x80800630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009B94C(rdram, ctx);
        goto after_2;
    // 0x80800630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800634: jal         0x8009C984
    // 0x80800638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_3;
    // 0x80800638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080063C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800644: jal         0x8009BA68
    // 0x80800648: lui         $a2, 0x4448
    ctx->r6 = S32(0X4448 << 16);
    func_8009BA68(rdram, ctx);
        goto after_4;
    // 0x80800648: lui         $a2, 0x4448
    ctx->r6 = S32(0X4448 << 16);
    after_4:
    // 0x8080064C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800650: jal         0x800A0CF4
    // 0x80800654: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_5;
    // 0x80800654: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80800658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080065C: addiu       $a1, $zero, 0x3EA
    ctx->r5 = ADD32(0, 0X3EA);
    // 0x80800660: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800664: jal         0x8009DF18
    // 0x80800668: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    func_8009DF18(rdram, ctx);
        goto after_6;
    // 0x80800668: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    after_6:
    // 0x8080066C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800670: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800674: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800678: jr          $ra
    // 0x8080067C: nop

    return;
    // 0x8080067C: nop

;}
RECOMP_FUNC void bssplitup_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800680: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800684: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800688: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8080068C: jal         0x8008CAEC
    // 0x80800690: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8008CAEC(rdram, ctx);
        goto after_0;
    // 0x80800690: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800694: beq         $v0, $zero, L_808006A0
    if (ctx->r2 == 0) {
        // 0x80800698: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_808006A0;
    }
    // 0x80800698: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8080069C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_808006A0:
    // 0x808006A0: jal         0x8009E5C8
    // 0x808006A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_1;
    // 0x808006A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808006A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808006AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808006B0: jr          $ra
    // 0x808006B4: nop

    return;
    // 0x808006B4: nop

;}
RECOMP_FUNC void bssplitup_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808006BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808006C0: jal         0x800A0CF4
    // 0x808006C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_0;
    // 0x808006C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808006C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808006CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808006D0: jr          $ra
    // 0x808006D4: nop

    return;
    // 0x808006D4: nop

;}
RECOMP_FUNC void bssplitup_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006D8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808006DC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(147, 0X740) << 16);
    // 0x808006E0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808006E4: jr          $ra
    // 0x808006E8: lw          $v0, 0x740($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(147, 0X740));
    return;
    // 0x808006E8: lw          $v0, 0x740($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(147, 0X740));
    // 0x808006EC: nop

;}
RECOMP_FUNC void func_80800000_bsstand(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: lw          $t6, 0x160($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X160);
    // 0x80800004: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(148, 0XD90) << 16);
    // 0x80800008: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8080000C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80800010: jr          $ra
    // 0x80800014: lw          $v0, 0xD90($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(148, 0XD90));
    return;
    // 0x80800014: lw          $v0, 0xD90($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(148, 0XD90));
;}
RECOMP_FUNC void func_80800018_bsstand(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800018: lw          $t6, 0x164($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X164);
    // 0x8080001C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80800020: slt         $at, $a1, $t6
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80800024: bne         $at, $zero, L_80800030
    if (ctx->r1 != 0) {
        // 0x80800028: nop
    
            goto L_80800030;
    }
    // 0x80800028: nop

    // 0x8080002C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80800030:
    // 0x80800030: jr          $ra
    // 0x80800034: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x80800034: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void func_80800038_bsstand(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800038: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080003C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800040: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800044: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800048: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080004C: jal         0x8009EF10
    // 0x80800050: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_8009EF10(rdram, ctx);
        goto after_0;
    // 0x80800050: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x80800054: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800058: beq         $v0, $at, L_80800084
    if (ctx->r2 == ctx->r1) {
        // 0x8080005C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800084;
    }
    // 0x8080005C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800060: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800064: beq         $v0, $at, L_8080008C
    if (ctx->r2 == ctx->r1) {
        // 0x80800068: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8080008C;
    }
    // 0x80800068: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8080006C: beq         $v0, $at, L_80800094
    if (ctx->r2 == ctx->r1) {
        // 0x80800070: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80800094;
    }
    // 0x80800070: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800074: beql        $v0, $at, L_808000A0
    if (ctx->r2 == ctx->r1) {
        // 0x80800078: addiu       $s1, $zero, 0x4
        ctx->r17 = ADD32(0, 0X4);
            goto L_808000A0;
    }
    goto skip_0;
    // 0x80800078: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    skip_0:
    // 0x8080007C: b           L_808000A0
    // 0x80800080: nop

        goto L_808000A0;
    // 0x80800080: nop

L_80800084:
    // 0x80800084: b           L_808000A0
    // 0x80800088: addiu       $s1, $zero, 0x1F
    ctx->r17 = ADD32(0, 0X1F);
        goto L_808000A0;
    // 0x80800088: addiu       $s1, $zero, 0x1F
    ctx->r17 = ADD32(0, 0X1F);
L_8080008C:
    // 0x8080008C: b           L_808000A0
    // 0x80800090: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_808000A0;
    // 0x80800090: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80800094:
    // 0x80800094: b           L_808000A0
    // 0x80800098: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
        goto L_808000A0;
    // 0x80800098: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x8080009C: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_808000A0:
    // 0x808000A0: jal         0x800919F4
    // 0x808000A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_1;
    // 0x808000A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808000A8: beq         $v0, $zero, L_808000B4
    if (ctx->r2 == 0) {
        // 0x808000AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000B4;
    }
    // 0x808000AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B0: addiu       $s1, $zero, 0x7
    ctx->r17 = ADD32(0, 0X7);
L_808000B4:
    // 0x808000B4: jal         0x80091A58
    // 0x808000B8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_2;
    // 0x808000B8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_2:
    // 0x808000BC: beq         $v0, $zero, L_808000D0
    if (ctx->r2 == 0) {
        // 0x808000C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000D0;
    }
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C4: jal         0x800A055C
    // 0x808000C8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800A055C(rdram, ctx);
        goto after_3;
    // 0x808000C8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x808000CC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_808000D0:
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D4: jal         0x80091A58
    // 0x808000D8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_4;
    // 0x808000D8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_4:
    // 0x808000DC: beq         $v0, $zero, L_80800128
    if (ctx->r2 == 0) {
        // 0x808000E0: nop
    
            goto L_80800128;
    }
    // 0x808000E0: nop

    // 0x808000E4: jal         0x8009FE84
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE84(rdram, ctx);
        goto after_5;
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808000EC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x808000F0: jal         0x8008D714
    // 0x808000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D714(rdram, ctx);
        goto after_6;
    // 0x808000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808000F8: beq         $v0, $zero, L_80800108
    if (ctx->r2 == 0) {
        // 0x808000FC: nop
    
            goto L_80800108;
    }
    // 0x808000FC: nop

    // 0x80800100: b           L_80800128
    // 0x80800104: addiu       $s1, $zero, 0xB8
    ctx->r17 = ADD32(0, 0XB8);
        goto L_80800128;
    // 0x80800104: addiu       $s1, $zero, 0xB8
    ctx->r17 = ADD32(0, 0XB8);
L_80800108:
    // 0x80800108: jal         0x8008D790
    // 0x8080010C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D790(rdram, ctx);
        goto after_7;
    // 0x8080010C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800110: beq         $v0, $zero, L_80800128
    if (ctx->r2 == 0) {
        // 0x80800114: nop
    
            goto L_80800128;
    }
    // 0x80800114: nop

    // 0x80800118: jal         0x80084978
    // 0x8080011C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baduo_entrypoint_12(rdram, ctx);
        goto after_8;
    // 0x8080011C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800120: b           L_8080017C
    // 0x80800124: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8080017C;
    // 0x80800124: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800128:
    // 0x80800128: jal         0x80097AD0
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097AD0(rdram, ctx);
        goto after_9;
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800130: beq         $v0, $zero, L_80800144
    if (ctx->r2 == 0) {
        // 0x80800134: nop
    
            goto L_80800144;
    }
    // 0x80800134: nop

    // 0x80800138: jal         0x800848A8
    // 0x8080013C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_10;
    // 0x8080013C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800140: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80800144:
    // 0x80800144: jal         0x8008E148
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_11;
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8080014C: beq         $v0, $zero, L_80800160
    if (ctx->r2 == 0) {
        // 0x80800150: nop
    
            goto L_80800160;
    }
    // 0x80800150: nop

    // 0x80800154: jal         0x800848B0
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_12;
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8080015C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80800160:
    // 0x80800160: jal         0x8008E35C
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_13;
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800168: beq         $v0, $zero, L_80800174
    if (ctx->r2 == 0) {
        // 0x8080016C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800174;
    }
    // 0x8080016C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800170: addiu       $s1, $zero, 0x2D
    ctx->r17 = ADD32(0, 0X2D);
L_80800174:
    // 0x80800174: jal         0x800A02DC
    // 0x80800178: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800A02DC(rdram, ctx);
        goto after_14;
    // 0x80800178: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_14:
L_8080017C:
    // 0x8080017C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800180: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800184: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800188: jr          $ra
    // 0x8080018C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8080018C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bsstand_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800190: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800194: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800198: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080019C: jal         0x8009E710
    // 0x808001A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E710(rdram, ctx);
        goto after_0;
    // 0x808001A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808001A4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x808001A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001AC: jal         0x8009CBDC
    // 0x808001B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009CBDC(rdram, ctx);
        goto after_1;
    // 0x808001B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x808001B4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x808001B8: bnel        $v0, $at, L_808001CC
    if (ctx->r2 != ctx->r1) {
        // 0x808001BC: lw          $t6, 0x2C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X2C);
            goto L_808001CC;
    }
    goto skip_0;
    // 0x808001BC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x808001C0: jal         0x80098840
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80098840(rdram, ctx);
        goto after_2;
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808001C8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
L_808001CC:
    // 0x808001CC: addiu       $at, $zero, 0x5B
    ctx->r1 = ADD32(0, 0X5B);
    // 0x808001D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D4: bne         $t6, $at, L_808001F4
    if (ctx->r14 != ctx->r1) {
        // 0x808001D8: addiu       $a1, $zero, 0x6F
        ctx->r5 = ADD32(0, 0X6F);
            goto L_808001F4;
    }
    // 0x808001D8: addiu       $a1, $zero, 0x6F
    ctx->r5 = ADD32(0, 0X6F);
    // 0x808001DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E0: addiu       $a1, $zero, 0x6F
    ctx->r5 = ADD32(0, 0X6F);
    // 0x808001E4: jal         0x8008CDB8
    // 0x808001E8: lui         $a2, 0x40B0
    ctx->r6 = S32(0X40B0 << 16);
    func_8008CDB8(rdram, ctx);
        goto after_3;
    // 0x808001E8: lui         $a2, 0x40B0
    ctx->r6 = S32(0X40B0 << 16);
    after_3:
    // 0x808001EC: b           L_80800200
    // 0x808001F0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
        goto L_80800200;
    // 0x808001F0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
L_808001F4:
    // 0x808001F4: jal         0x8008CCBC
    // 0x808001F8: lui         $a2, 0x40B0
    ctx->r6 = S32(0X40B0 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_4;
    // 0x808001F8: lui         $a2, 0x40B0
    ctx->r6 = S32(0X40B0 << 16);
    after_4:
    // 0x808001FC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
L_80800200:
    // 0x80800200: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800208: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080020C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800210: jal         0x8009FFD8
    // 0x80800214: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_5;
    // 0x80800214: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080021C: jal         0x8009B9B0
    // 0x80800220: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_6;
    // 0x80800220: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x80800224: jal         0x800909CC
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800909CC(rdram, ctx);
        goto after_7;
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080022C: jal         0x8008E23C
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E23C(rdram, ctx);
        goto after_8;
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800234: beq         $v0, $zero, L_8080024C
    if (ctx->r2 == 0) {
        // 0x80800238: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_8080024C;
    }
    // 0x80800238: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8080023C: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x80800240: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    // 0x80800244: b           L_80800258
    // 0x80800248: sw          $t8, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->r24;
        goto L_80800258;
    // 0x80800248: sw          $t8, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->r24;
L_8080024C:
    // 0x8080024C: addiu       $t0, $zero, 0x15
    ctx->r8 = ADD32(0, 0X15);
    // 0x80800250: sw          $t9, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r25;
    // 0x80800254: sw          $t0, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->r8;
L_80800258:
    // 0x80800258: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x8080025C: sw          $zero, 0x168($s0)
    MEM_W(0X168, ctx->r16) = 0;
    // 0x80800260: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800264: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800268: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080026C: jr          $ra
    // 0x80800270: nop

    return;
    // 0x80800270: nop

;}
RECOMP_FUNC void func_80800274_bsstand(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800274: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800278: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080027C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800280: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800284: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80800288: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080028C: lui         $a1, 0x3E52
    ctx->r5 = S32(0X3E52 << 16);
    // 0x80800290: jal         0x8008B348
    // 0x80800294: ori         $a1, $a1, 0xA305
    ctx->r5 = ctx->r5 | 0XA305;
    func_8008B348(rdram, ctx);
        goto after_0;
    // 0x80800294: ori         $a1, $a1, 0xA305
    ctx->r5 = ctx->r5 | 0XA305;
    after_0:
    // 0x80800298: beq         $v0, $zero, L_808002CC
    if (ctx->r2 == 0) {
        // 0x8080029C: lui         $a2, 0x3FE6
        ctx->r6 = S32(0X3FE6 << 16);
            goto L_808002CC;
    }
    // 0x8080029C: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x808002A0: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808002A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002A8: addiu       $a1, $zero, 0x418
    ctx->r5 = ADD32(0, 0X418);
    // 0x808002AC: jal         0x8009DF94
    // 0x808002B0: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    func_8009DF94(rdram, ctx);
        goto after_1;
    // 0x808002B0: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    after_1:
    // 0x808002B4: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x808002B8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C0: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x808002C4: jal         0x80085490
    // 0x808002C8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    _bamotor_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x808002C8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    after_2:
L_808002CC:
    // 0x808002CC: lui         $a1, 0x3E52
    ctx->r5 = S32(0X3E52 << 16);
    // 0x808002D0: ori         $a1, $a1, 0xA305
    ctx->r5 = ctx->r5 | 0XA305;
    // 0x808002D4: jal         0x8008B348
    // 0x808002D8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_3;
    // 0x808002D8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x808002DC: beql        $v0, $zero, L_808002F0
    if (ctx->r2 == 0) {
        // 0x808002E0: lui         $a1, 0x3E82
        ctx->r5 = S32(0X3E82 << 16);
            goto L_808002F0;
    }
    goto skip_0;
    // 0x808002E0: lui         $a1, 0x3E82
    ctx->r5 = S32(0X3E82 << 16);
    skip_0:
    // 0x808002E4: jal         0x8009514C
    // 0x808002E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009514C(rdram, ctx);
        goto after_4;
    // 0x808002E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808002EC: lui         $a1, 0x3E82
    ctx->r5 = S32(0X3E82 << 16);
L_808002F0:
    // 0x808002F0: ori         $a1, $a1, 0xD0E5
    ctx->r5 = ctx->r5 | 0XD0E5;
    // 0x808002F4: jal         0x8008B348
    // 0x808002F8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_5;
    // 0x808002F8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x808002FC: beq         $v0, $zero, L_80800330
    if (ctx->r2 == 0) {
        // 0x80800300: lui         $a2, 0x3FE6
        ctx->r6 = S32(0X3FE6 << 16);
            goto L_80800330;
    }
    // 0x80800300: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x80800304: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080030C: addiu       $a1, $zero, 0x418
    ctx->r5 = ADD32(0, 0X418);
    // 0x80800310: jal         0x8009DF94
    // 0x80800314: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    func_8009DF94(rdram, ctx);
        goto after_6;
    // 0x80800314: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    after_6:
    // 0x80800318: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x8080031C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800324: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x80800328: jal         0x80085490
    // 0x8080032C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    _bamotor_entrypoint_1(rdram, ctx);
        goto after_7;
    // 0x8080032C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    after_7:
L_80800330:
    // 0x80800330: lui         $a1, 0x3E94
    ctx->r5 = S32(0X3E94 << 16);
    // 0x80800334: ori         $a1, $a1, 0x4674
    ctx->r5 = ctx->r5 | 0X4674;
    // 0x80800338: jal         0x8008B348
    // 0x8080033C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_8;
    // 0x8080033C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x80800340: beq         $v0, $zero, L_80800374
    if (ctx->r2 == 0) {
        // 0x80800344: lui         $a2, 0x3FE6
        ctx->r6 = S32(0X3FE6 << 16);
            goto L_80800374;
    }
    // 0x80800344: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x80800348: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x8080034C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800350: addiu       $a1, $zero, 0x418
    ctx->r5 = ADD32(0, 0X418);
    // 0x80800354: jal         0x8009DF94
    // 0x80800358: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    func_8009DF94(rdram, ctx);
        goto after_9;
    // 0x80800358: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    after_9:
    // 0x8080035C: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x80800360: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800368: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x8080036C: jal         0x80085490
    // 0x80800370: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    _bamotor_entrypoint_1(rdram, ctx);
        goto after_10;
    // 0x80800370: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    after_10:
L_80800374:
    // 0x80800374: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800378: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x8080037C: jal         0x8008B348
    // 0x80800380: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_11;
    // 0x80800380: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_11:
    // 0x80800384: beq         $v0, $zero, L_8080039C
    if (ctx->r2 == 0) {
        // 0x80800388: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080039C;
    }
    // 0x80800388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080038C: addiu       $a1, $zero, 0x445
    ctx->r5 = ADD32(0, 0X445);
    // 0x80800390: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800394: jal         0x8009DF94
    // 0x80800398: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    func_8009DF94(rdram, ctx);
        goto after_12;
    // 0x80800398: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    after_12:
L_8080039C:
    // 0x8080039C: lui         $a1, 0x3EB8
    ctx->r5 = S32(0X3EB8 << 16);
    // 0x808003A0: ori         $a1, $a1, 0xADAC
    ctx->r5 = ctx->r5 | 0XADAC;
    // 0x808003A4: jal         0x8008B348
    // 0x808003A8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_13;
    // 0x808003A8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_13:
    // 0x808003AC: beql        $v0, $zero, L_808003C0
    if (ctx->r2 == 0) {
        // 0x808003B0: lui         $a1, 0x3ED6
        ctx->r5 = S32(0X3ED6 << 16);
            goto L_808003C0;
    }
    goto skip_1;
    // 0x808003B0: lui         $a1, 0x3ED6
    ctx->r5 = S32(0X3ED6 << 16);
    skip_1:
    // 0x808003B4: jal         0x800951B4
    // 0x808003B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_14;
    // 0x808003B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808003BC: lui         $a1, 0x3ED6
    ctx->r5 = S32(0X3ED6 << 16);
L_808003C0:
    // 0x808003C0: ori         $a1, $a1, 0x2B6B
    ctx->r5 = ctx->r5 | 0X2B6B;
    // 0x808003C4: jal         0x8008B348
    // 0x808003C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_15;
    // 0x808003C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_15:
    // 0x808003CC: beq         $v0, $zero, L_808003E4
    if (ctx->r2 == 0) {
        // 0x808003D0: lui         $a2, 0x3FCC
        ctx->r6 = S32(0X3FCC << 16);
            goto L_808003E4;
    }
    // 0x808003D0: lui         $a2, 0x3FCC
    ctx->r6 = S32(0X3FCC << 16);
    // 0x808003D4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808003D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003DC: jal         0x8009DF58
    // 0x808003E0: addiu       $a1, $zero, 0x43EF
    ctx->r5 = ADD32(0, 0X43EF);
    func_8009DF58(rdram, ctx);
        goto after_16;
    // 0x808003E0: addiu       $a1, $zero, 0x43EF
    ctx->r5 = ADD32(0, 0X43EF);
    after_16:
L_808003E4:
    // 0x808003E4: lui         $a1, 0x3EE8
    ctx->r5 = S32(0X3EE8 << 16);
    // 0x808003E8: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    // 0x808003EC: jal         0x8008B348
    // 0x808003F0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_17;
    // 0x808003F0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_17:
    // 0x808003F4: beq         $v0, $zero, L_8080040C
    if (ctx->r2 == 0) {
        // 0x808003F8: lui         $a2, 0x3FB9
        ctx->r6 = S32(0X3FB9 << 16);
            goto L_8080040C;
    }
    // 0x808003F8: lui         $a2, 0x3FB9
    ctx->r6 = S32(0X3FB9 << 16);
    // 0x808003FC: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800404: jal         0x8009DF58
    // 0x80800408: addiu       $a1, $zero, 0x43EF
    ctx->r5 = ADD32(0, 0X43EF);
    func_8009DF58(rdram, ctx);
        goto after_18;
    // 0x80800408: addiu       $a1, $zero, 0x43EF
    ctx->r5 = ADD32(0, 0X43EF);
    after_18:
L_8080040C:
    // 0x8080040C: lui         $a1, 0x3EFA
    ctx->r5 = S32(0X3EFA << 16);
    // 0x80800410: ori         $a1, $a1, 0xE148
    ctx->r5 = ctx->r5 | 0XE148;
    // 0x80800414: jal         0x8008B348
    // 0x80800418: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_19;
    // 0x80800418: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_19:
    // 0x8080041C: beq         $v0, $zero, L_80800434
    if (ctx->r2 == 0) {
        // 0x80800420: lui         $a2, 0x3FB3
        ctx->r6 = S32(0X3FB3 << 16);
            goto L_80800434;
    }
    // 0x80800420: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x80800424: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080042C: jal         0x8009DF58
    // 0x80800430: addiu       $a1, $zero, 0x43EF
    ctx->r5 = ADD32(0, 0X43EF);
    func_8009DF58(rdram, ctx);
        goto after_20;
    // 0x80800430: addiu       $a1, $zero, 0x43EF
    ctx->r5 = ADD32(0, 0X43EF);
    after_20:
L_80800434:
    // 0x80800434: lui         $a1, 0x3F0A
    ctx->r5 = S32(0X3F0A << 16);
    // 0x80800438: ori         $a1, $a1, 0x29C7
    ctx->r5 = ctx->r5 | 0X29C7;
    // 0x8080043C: jal         0x8008B348
    // 0x80800440: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_21;
    // 0x80800440: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_21:
    // 0x80800444: beql        $v0, $zero, L_80800458
    if (ctx->r2 == 0) {
        // 0x80800448: lui         $a1, 0x3F29
        ctx->r5 = S32(0X3F29 << 16);
            goto L_80800458;
    }
    goto skip_2;
    // 0x80800448: lui         $a1, 0x3F29
    ctx->r5 = S32(0X3F29 << 16);
    skip_2:
    // 0x8080044C: jal         0x800909EC
    // 0x80800450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800909EC(rdram, ctx);
        goto after_22;
    // 0x80800450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80800454: lui         $a1, 0x3F29
    ctx->r5 = S32(0X3F29 << 16);
L_80800458:
    // 0x80800458: ori         $a1, $a1, 0x7247
    ctx->r5 = ctx->r5 | 0X7247;
    // 0x8080045C: jal         0x8008B348
    // 0x80800460: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_23;
    // 0x80800460: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_23:
    // 0x80800464: beq         $v0, $zero, L_80800498
    if (ctx->r2 == 0) {
        // 0x80800468: lui         $a2, 0x3FE6
        ctx->r6 = S32(0X3FE6 << 16);
            goto L_80800498;
    }
    // 0x80800468: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x8080046C: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800474: addiu       $a1, $zero, 0x418
    ctx->r5 = ADD32(0, 0X418);
    // 0x80800478: jal         0x8009DF94
    // 0x8080047C: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    func_8009DF94(rdram, ctx);
        goto after_24;
    // 0x8080047C: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    after_24:
    // 0x80800480: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x80800484: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080048C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x80800490: jal         0x80085490
    // 0x80800494: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    _bamotor_entrypoint_1(rdram, ctx);
        goto after_25;
    // 0x80800494: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    after_25:
L_80800498:
    // 0x80800498: lui         $a1, 0x3F2B
    ctx->r5 = S32(0X3F2B << 16);
    // 0x8080049C: ori         $a1, $a1, 0x367A
    ctx->r5 = ctx->r5 | 0X367A;
    // 0x808004A0: jal         0x8008B348
    // 0x808004A4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_26;
    // 0x808004A4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_26:
    // 0x808004A8: beql        $v0, $zero, L_808004BC
    if (ctx->r2 == 0) {
        // 0x808004AC: lui         $a1, 0x3F32
        ctx->r5 = S32(0X3F32 << 16);
            goto L_808004BC;
    }
    goto skip_3;
    // 0x808004AC: lui         $a1, 0x3F32
    ctx->r5 = S32(0X3F32 << 16);
    skip_3:
    // 0x808004B0: jal         0x8009514C
    // 0x808004B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009514C(rdram, ctx);
        goto after_27;
    // 0x808004B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x808004B8: lui         $a1, 0x3F32
    ctx->r5 = S32(0X3F32 << 16);
L_808004BC:
    // 0x808004BC: ori         $a1, $a1, 0x4745
    ctx->r5 = ctx->r5 | 0X4745;
    // 0x808004C0: jal         0x8008B348
    // 0x808004C4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_28;
    // 0x808004C4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_28:
    // 0x808004C8: beq         $v0, $zero, L_808004FC
    if (ctx->r2 == 0) {
        // 0x808004CC: lui         $a2, 0x3FE6
        ctx->r6 = S32(0X3FE6 << 16);
            goto L_808004FC;
    }
    // 0x808004CC: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x808004D0: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808004D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004D8: addiu       $a1, $zero, 0x418
    ctx->r5 = ADD32(0, 0X418);
    // 0x808004DC: jal         0x8009DF94
    // 0x808004E0: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    func_8009DF94(rdram, ctx);
        goto after_29;
    // 0x808004E0: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    after_29:
    // 0x808004E4: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x808004E8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x808004EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004F0: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x808004F4: jal         0x80085490
    // 0x808004F8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    _bamotor_entrypoint_1(rdram, ctx);
        goto after_30;
    // 0x808004F8: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    after_30:
L_808004FC:
    // 0x808004FC: lui         $a1, 0x3F46
    ctx->r5 = S32(0X3F46 << 16);
    // 0x80800500: ori         $a1, $a1, 0x52BD
    ctx->r5 = ctx->r5 | 0X52BD;
    // 0x80800504: jal         0x8008B348
    // 0x80800508: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_31;
    // 0x80800508: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_31:
    // 0x8080050C: beql        $v0, $zero, L_80800520
    if (ctx->r2 == 0) {
        // 0x80800510: lui         $a1, 0x3F48
        ctx->r5 = S32(0X3F48 << 16);
            goto L_80800520;
    }
    goto skip_4;
    // 0x80800510: lui         $a1, 0x3F48
    ctx->r5 = S32(0X3F48 << 16);
    skip_4:
    // 0x80800514: jal         0x800951B4
    // 0x80800518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_32;
    // 0x80800518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x8080051C: lui         $a1, 0x3F48
    ctx->r5 = S32(0X3F48 << 16);
L_80800520:
    // 0x80800520: ori         $a1, $a1, 0x3E42
    ctx->r5 = ctx->r5 | 0X3E42;
    // 0x80800524: jal         0x8008B348
    // 0x80800528: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_33;
    // 0x80800528: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_33:
    // 0x8080052C: beq         $v0, $zero, L_80800544
    if (ctx->r2 == 0) {
        // 0x80800530: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800544;
    }
    // 0x80800530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800534: addiu       $a1, $zero, 0x449
    ctx->r5 = ADD32(0, 0X449);
    // 0x80800538: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8080053C: jal         0x8009DF94
    // 0x80800540: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    func_8009DF94(rdram, ctx);
        goto after_34;
    // 0x80800540: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    after_34:
L_80800544:
    // 0x80800544: lui         $a1, 0x3F55
    ctx->r5 = S32(0X3F55 << 16);
    // 0x80800548: ori         $a1, $a1, 0xB0F
    ctx->r5 = ctx->r5 | 0XB0F;
    // 0x8080054C: jal         0x8008B348
    // 0x80800550: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_35;
    // 0x80800550: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_35:
    // 0x80800554: beq         $v0, $zero, L_8080056C
    if (ctx->r2 == 0) {
        // 0x80800558: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080056C;
    }
    // 0x80800558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080055C: addiu       $a1, $zero, 0x449
    ctx->r5 = ADD32(0, 0X449);
    // 0x80800560: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800564: jal         0x8009DF94
    // 0x80800568: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    func_8009DF94(rdram, ctx);
        goto after_36;
    // 0x80800568: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    after_36:
L_8080056C:
    // 0x8080056C: lui         $a1, 0x3F5D
    ctx->r5 = S32(0X3F5D << 16);
    // 0x80800570: ori         $a1, $a1, 0xED29
    ctx->r5 = ctx->r5 | 0XED29;
    // 0x80800574: jal         0x8008B348
    // 0x80800578: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_37;
    // 0x80800578: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_37:
    // 0x8080057C: beq         $v0, $zero, L_80800594
    if (ctx->r2 == 0) {
        // 0x80800580: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800594;
    }
    // 0x80800580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800584: addiu       $a1, $zero, 0x449
    ctx->r5 = ADD32(0, 0X449);
    // 0x80800588: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8080058C: jal         0x8009DF94
    // 0x80800590: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    func_8009DF94(rdram, ctx);
        goto after_38;
    // 0x80800590: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    after_38:
L_80800594:
    // 0x80800594: lui         $a1, 0x3F67
    ctx->r5 = S32(0X3F67 << 16);
    // 0x80800598: ori         $a1, $a1, 0xA0F9
    ctx->r5 = ctx->r5 | 0XA0F9;
    // 0x8080059C: jal         0x8008B348
    // 0x808005A0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_39;
    // 0x808005A0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_39:
    // 0x808005A4: beq         $v0, $zero, L_808005BC
    if (ctx->r2 == 0) {
        // 0x808005A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005BC;
    }
    // 0x808005A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005AC: addiu       $a1, $zero, 0x449
    ctx->r5 = ADD32(0, 0X449);
    // 0x808005B0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808005B4: jal         0x8009DF94
    // 0x808005B8: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    func_8009DF94(rdram, ctx);
        goto after_40;
    // 0x808005B8: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    after_40:
L_808005BC:
    // 0x808005BC: lui         $a1, 0x3F77
    ctx->r5 = S32(0X3F77 << 16);
    // 0x808005C0: ori         $a1, $a1, 0x3B0
    ctx->r5 = ctx->r5 | 0X3B0;
    // 0x808005C4: jal         0x8008B348
    // 0x808005C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_41;
    // 0x808005C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_41:
    // 0x808005CC: beql        $v0, $zero, L_808005E0
    if (ctx->r2 == 0) {
        // 0x808005D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808005E0;
    }
    goto skip_5;
    // 0x808005D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x808005D4: jal         0x800909EC
    // 0x808005D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800909EC(rdram, ctx);
        goto after_42;
    // 0x808005D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_42:
    // 0x808005DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808005E0:
    // 0x808005E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808005E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808005E8: jr          $ra
    // 0x808005EC: nop

    return;
    // 0x808005EC: nop

;}
RECOMP_FUNC void bsstand_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808005F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808005F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808005FC: jal         0x8008CABC
    // 0x80800600: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800600: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800604: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80800608: jal         0x8009EF10
    // 0x8080060C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x8080060C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800610: bnel        $v0, $zero, L_80800660
    if (ctx->r2 != 0) {
        // 0x80800614: lw          $t7, 0x168($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X168);
            goto L_80800660;
    }
    goto skip_0;
    // 0x80800614: lw          $t7, 0x168($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X168);
    skip_0:
    // 0x80800618: jal         0x8009EF04
    // 0x8080061C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_2;
    // 0x8080061C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800620: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800624: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080062C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800630: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80800634: bc1fl       L_80800660
    if (!c1cs) {
        // 0x80800638: lw          $t7, 0x168($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X168);
            goto L_80800660;
    }
    goto skip_1;
    // 0x80800638: lw          $t7, 0x168($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X168);
    skip_1:
    // 0x8080063C: jal         0x8009C908
    // 0x80800640: sw          $t6, 0x168($s0)
    MEM_W(0X168, ctx->r16) = ctx->r14;
    func_8009C908(rdram, ctx);
        goto after_3;
    // 0x80800640: sw          $t6, 0x168($s0)
    MEM_W(0X168, ctx->r16) = ctx->r14;
    after_3:
    // 0x80800644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800648: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x8080064C: jal         0x8009C99C
    // 0x80800650: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    func_8009C99C(rdram, ctx);
        goto after_4;
    // 0x80800650: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    after_4:
    // 0x80800654: b           L_80800690
    // 0x80800658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800690;
    // 0x80800658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080065C: lw          $t7, 0x168($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X168);
L_80800660:
    // 0x80800660: beql        $t7, $zero, L_80800680
    if (ctx->r15 == 0) {
        // 0x80800664: sw          $zero, 0x168($s0)
        MEM_W(0X168, ctx->r16) = 0;
            goto L_80800680;
    }
    goto skip_2;
    // 0x80800664: sw          $zero, 0x168($s0)
    MEM_W(0X168, ctx->r16) = 0;
    skip_2:
    // 0x80800668: jal         0x8009C984
    // 0x8080066C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_5;
    // 0x8080066C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800670: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800674: jal         0x8009C914
    // 0x80800678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_6;
    // 0x80800678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080067C: sw          $zero, 0x168($s0)
    MEM_W(0X168, ctx->r16) = 0;
L_80800680:
    // 0x80800680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800684: jal         0x8009C908
    // 0x80800688: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009C908(rdram, ctx);
        goto after_7;
    // 0x80800688: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x8080068C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800690:
    // 0x80800690: jal         0x80000038
    // 0x80800694: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800038_bsstand(rdram, ctx);
        goto after_8;
    // 0x80800694: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80800698: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8080069C: jal         0x80000000
    // 0x808006A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsstand(rdram, ctx);
        goto after_9;
    // 0x808006A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808006A4: lw          $t8, 0x15C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X15C);
    // 0x808006A8: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x808006AC: lbu         $v1, 0x0($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X0);
    // 0x808006B0: andi        $t0, $v1, 0x8
    ctx->r8 = ctx->r3 & 0X8;
    // 0x808006B4: beq         $t0, $zero, L_808007A0
    if (ctx->r8 == 0) {
        // 0x808006B8: andi        $t3, $v1, 0x20
        ctx->r11 = ctx->r3 & 0X20;
            goto L_808007A0;
    }
    // 0x808006B8: andi        $t3, $v1, 0x20
    ctx->r11 = ctx->r3 & 0X20;
    // 0x808006BC: andi        $t1, $v1, 0x4
    ctx->r9 = ctx->r3 & 0X4;
    // 0x808006C0: beq         $t1, $zero, L_80800750
    if (ctx->r9 == 0) {
        // 0x808006C4: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_80800750;
    }
    // 0x808006C4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808006C8: lui         $a1, 0x3DBA
    ctx->r5 = S32(0X3DBA << 16);
    // 0x808006CC: ori         $a1, $a1, 0x29C7
    ctx->r5 = ctx->r5 | 0X29C7;
    // 0x808006D0: jal         0x8008B348
    // 0x808006D4: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8008B348(rdram, ctx);
        goto after_10;
    // 0x808006D4: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_10:
    // 0x808006D8: beq         $v0, $zero, L_808006F0
    if (ctx->r2 == 0) {
        // 0x808006DC: lw          $v1, 0x20($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X20);
            goto L_808006F0;
    }
    // 0x808006DC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x808006E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006E4: jal         0x8009D874
    // 0x808006E8: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8009D874(rdram, ctx);
        goto after_11;
    // 0x808006E8: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_11:
    // 0x808006EC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
L_808006F0:
    // 0x808006F0: lui         $a1, 0x3DBA
    ctx->r5 = S32(0X3DBA << 16);
    // 0x808006F4: ori         $a1, $a1, 0x29C7
    ctx->r5 = ctx->r5 | 0X29C7;
    // 0x808006F8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808006FC: jal         0x8008B348
    // 0x80800700: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8008B348(rdram, ctx);
        goto after_12;
    // 0x80800700: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_12:
    // 0x80800704: beq         $v0, $zero, L_80800720
    if (ctx->r2 == 0) {
        // 0x80800708: lw          $v1, 0x20($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X20);
            goto L_80800720;
    }
    // 0x80800708: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8080070C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800710: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800714: jal         0x800A0CF4
    // 0x80800718: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_800A0CF4(rdram, ctx);
        goto after_13;
    // 0x80800718: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_13:
    // 0x8080071C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
L_80800720:
    // 0x80800720: lui         $a1, 0x3F2E
    ctx->r5 = S32(0X3F2E << 16);
    // 0x80800724: ori         $a1, $a1, 0x8A72
    ctx->r5 = ctx->r5 | 0X8A72;
    // 0x80800728: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8080072C: jal         0x8008B348
    // 0x80800730: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8008B348(rdram, ctx);
        goto after_14;
    // 0x80800730: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_14:
    // 0x80800734: beq         $v0, $zero, L_80800750
    if (ctx->r2 == 0) {
        // 0x80800738: lw          $v1, 0x20($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X20);
            goto L_80800750;
    }
    // 0x80800738: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8080073C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800740: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800744: jal         0x800A0CF4
    // 0x80800748: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_800A0CF4(rdram, ctx);
        goto after_15;
    // 0x80800748: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_15:
    // 0x8080074C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
L_80800750:
    // 0x80800750: andi        $t2, $v1, 0x2
    ctx->r10 = ctx->r3 & 0X2;
    // 0x80800754: beq         $t2, $zero, L_808009BC
    if (ctx->r10 == 0) {
        // 0x80800758: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_808009BC;
    }
    // 0x80800758: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8080075C: lui         $a1, 0x3F45
    ctx->r5 = S32(0X3F45 << 16);
    // 0x80800760: jal         0x8008B348
    // 0x80800764: ori         $a1, $a1, 0xCFAB
    ctx->r5 = ctx->r5 | 0XCFAB;
    func_8008B348(rdram, ctx);
        goto after_16;
    // 0x80800764: ori         $a1, $a1, 0xCFAB
    ctx->r5 = ctx->r5 | 0XCFAB;
    after_16:
    // 0x80800768: beq         $v0, $zero, L_80800778
    if (ctx->r2 == 0) {
        // 0x8080076C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800778;
    }
    // 0x8080076C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800770: jal         0x800A0CF4
    // 0x80800774: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_17;
    // 0x80800774: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
L_80800778:
    // 0x80800778: lui         $a1, 0x3F7F
    ctx->r5 = S32(0X3F7F << 16);
    // 0x8080077C: ori         $a1, $a1, 0xF972
    ctx->r5 = ctx->r5 | 0XF972;
    // 0x80800780: jal         0x8008B348
    // 0x80800784: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_18;
    // 0x80800784: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_18:
    // 0x80800788: beq         $v0, $zero, L_808009BC
    if (ctx->r2 == 0) {
        // 0x8080078C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009BC;
    }
    // 0x8080078C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800790: jal         0x800A0CF4
    // 0x80800794: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_19;
    // 0x80800794: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
    // 0x80800798: b           L_808009C0
    // 0x8080079C: lui         $a1, 0x3F7F
    ctx->r5 = S32(0X3F7F << 16);
        goto L_808009C0;
    // 0x8080079C: lui         $a1, 0x3F7F
    ctx->r5 = S32(0X3F7F << 16);
L_808007A0:
    // 0x808007A0: beq         $t3, $zero, L_808009AC
    if (ctx->r11 == 0) {
        // 0x808007A4: andi        $t4, $v1, 0x10
        ctx->r12 = ctx->r3 & 0X10;
            goto L_808009AC;
    }
    // 0x808007A4: andi        $t4, $v1, 0x10
    ctx->r12 = ctx->r3 & 0X10;
    // 0x808007A8: jal         0x8008B264
    // 0x808007AC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B264(rdram, ctx);
        goto after_20;
    // 0x808007AC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_20:
    // 0x808007B0: addiu       $at, $zero, 0x95
    ctx->r1 = ADD32(0, 0X95);
    // 0x808007B4: bne         $v0, $at, L_8080082C
    if (ctx->r2 != ctx->r1) {
        // 0x808007B8: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_8080082C;
    }
    // 0x808007B8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808007BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007C0: jal         0x80000274
    // 0x808007C4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_80800274_bsstand(rdram, ctx);
        goto after_21;
    // 0x808007C4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_21:
    // 0x808007C8: lui         $a1, 0x3EBD
    ctx->r5 = S32(0X3EBD << 16);
    // 0x808007CC: ori         $a1, $a1, 0x70A4
    ctx->r5 = ctx->r5 | 0X70A4;
    // 0x808007D0: jal         0x8008B348
    // 0x808007D4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_22;
    // 0x808007D4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_22:
    // 0x808007D8: beql        $v0, $zero, L_808009C0
    if (ctx->r2 == 0) {
        // 0x808007DC: lui         $a1, 0x3F7F
        ctx->r5 = S32(0X3F7F << 16);
            goto L_808009C0;
    }
    goto skip_3;
    // 0x808007DC: lui         $a1, 0x3F7F
    ctx->r5 = S32(0X3F7F << 16);
    skip_3:
    // 0x808007E0: jal         0x8008AF24
    // 0x808007E4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008AF24(rdram, ctx);
        goto after_23;
    // 0x808007E4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_23:
    // 0x808007E8: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x808007EC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808007F0: jal         0x8008B1C8
    // 0x808007F4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B1C8(rdram, ctx);
        goto after_24;
    // 0x808007F4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_24:
    // 0x808007F8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808007FC: jal         0x8008AED4
    // 0x80800800: addiu       $a1, $zero, 0xF6
    ctx->r5 = ADD32(0, 0XF6);
    func_8008AED4(rdram, ctx);
        goto after_25;
    // 0x80800800: addiu       $a1, $zero, 0xF6
    ctx->r5 = ADD32(0, 0XF6);
    after_25:
    // 0x80800804: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800808: jal         0x8008B1BC
    // 0x8080080C: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_26;
    // 0x8080080C: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_26:
    // 0x80800810: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800814: jal         0x8008B134
    // 0x80800818: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_27;
    // 0x80800818: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_27:
    // 0x8080081C: jal         0x8008B064
    // 0x80800820: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B064(rdram, ctx);
        goto after_28;
    // 0x80800820: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_28:
    // 0x80800824: b           L_808009C0
    // 0x80800828: lui         $a1, 0x3F7F
    ctx->r5 = S32(0X3F7F << 16);
        goto L_808009C0;
    // 0x80800828: lui         $a1, 0x3F7F
    ctx->r5 = S32(0X3F7F << 16);
L_8080082C:
    // 0x8080082C: lui         $a1, 0x3D8D
    ctx->r5 = S32(0X3D8D << 16);
    // 0x80800830: jal         0x8008B348
    // 0x80800834: ori         $a1, $a1, 0x4FDF
    ctx->r5 = ctx->r5 | 0X4FDF;
    func_8008B348(rdram, ctx);
        goto after_29;
    // 0x80800834: ori         $a1, $a1, 0x4FDF
    ctx->r5 = ctx->r5 | 0X4FDF;
    after_29:
    // 0x80800838: beq         $v0, $zero, L_80800854
    if (ctx->r2 == 0) {
        // 0x8080083C: lui         $a2, 0x3FB3
        ctx->r6 = S32(0X3FB3 << 16);
            goto L_80800854;
    }
    // 0x8080083C: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x80800840: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800844: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800848: addiu       $a1, $zero, 0x434
    ctx->r5 = ADD32(0, 0X434);
    // 0x8080084C: jal         0x8009DF94
    // 0x80800850: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF94(rdram, ctx);
        goto after_30;
    // 0x80800850: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_30:
L_80800854:
    // 0x80800854: lui         $a1, 0x3E2B
    ctx->r5 = S32(0X3E2B << 16);
    // 0x80800858: ori         $a1, $a1, 0xB98C
    ctx->r5 = ctx->r5 | 0XB98C;
    // 0x8080085C: jal         0x8008B348
    // 0x80800860: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_31;
    // 0x80800860: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_31:
    // 0x80800864: beq         $v0, $zero, L_8080087C
    if (ctx->r2 == 0) {
        // 0x80800868: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080087C;
    }
    // 0x80800868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080086C: addiu       $a1, $zero, 0x4454
    ctx->r5 = ADD32(0, 0X4454);
    // 0x80800870: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800874: jal         0x8009DF94
    // 0x80800878: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF94(rdram, ctx);
        goto after_32;
    // 0x80800878: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_32:
L_8080087C:
    // 0x8080087C: lui         $a1, 0x3E79
    ctx->r5 = S32(0X3E79 << 16);
    // 0x80800880: ori         $a1, $a1, 0xF55A
    ctx->r5 = ctx->r5 | 0XF55A;
    // 0x80800884: jal         0x8008B348
    // 0x80800888: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_33;
    // 0x80800888: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_33:
    // 0x8080088C: beq         $v0, $zero, L_808008A8
    if (ctx->r2 == 0) {
        // 0x80800890: lui         $a2, 0x3F83
        ctx->r6 = S32(0X3F83 << 16);
            goto L_808008A8;
    }
    // 0x80800890: lui         $a2, 0x3F83
    ctx->r6 = S32(0X3F83 << 16);
    // 0x80800894: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x80800898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080089C: addiu       $a1, $zero, 0x4454
    ctx->r5 = ADD32(0, 0X4454);
    // 0x808008A0: jal         0x8009DF94
    // 0x808008A4: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF94(rdram, ctx);
        goto after_34;
    // 0x808008A4: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_34:
L_808008A8:
    // 0x808008A8: lui         $a1, 0x3EA0
    ctx->r5 = S32(0X3EA0 << 16);
    // 0x808008AC: ori         $a1, $a1, 0xD1B7
    ctx->r5 = ctx->r5 | 0XD1B7;
    // 0x808008B0: jal         0x8008B348
    // 0x808008B4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_35;
    // 0x808008B4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_35:
    // 0x808008B8: beq         $v0, $zero, L_808008D4
    if (ctx->r2 == 0) {
        // 0x808008BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008D4;
    }
    // 0x808008BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008C0: lui         $a2, 0x3F87
    ctx->r6 = S32(0X3F87 << 16);
    // 0x808008C4: ori         $a2, $a2, 0xAE14
    ctx->r6 = ctx->r6 | 0XAE14;
    // 0x808008C8: addiu       $a1, $zero, 0x4454
    ctx->r5 = ADD32(0, 0X4454);
    // 0x808008CC: jal         0x8009DF94
    // 0x808008D0: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF94(rdram, ctx);
        goto after_36;
    // 0x808008D0: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_36:
L_808008D4:
    // 0x808008D4: lui         $a1, 0x3EC5
    ctx->r5 = S32(0X3EC5 << 16);
    // 0x808008D8: ori         $a1, $a1, 0x94AF
    ctx->r5 = ctx->r5 | 0X94AF;
    // 0x808008DC: jal         0x8008B348
    // 0x808008E0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_37;
    // 0x808008E0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_37:
    // 0x808008E4: beq         $v0, $zero, L_808008FC
    if (ctx->r2 == 0) {
        // 0x808008E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008FC;
    }
    // 0x808008E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008EC: addiu       $a1, $zero, 0x4454
    ctx->r5 = ADD32(0, 0X4454);
    // 0x808008F0: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    // 0x808008F4: jal         0x8009DF94
    // 0x808008F8: addiu       $a3, $zero, 0x7D00
    ctx->r7 = ADD32(0, 0X7D00);
    func_8009DF94(rdram, ctx);
        goto after_38;
    // 0x808008F8: addiu       $a3, $zero, 0x7D00
    ctx->r7 = ADD32(0, 0X7D00);
    after_38:
L_808008FC:
    // 0x808008FC: lui         $a1, 0x3ED3
    ctx->r5 = S32(0X3ED3 << 16);
    // 0x80800900: ori         $a1, $a1, 0xF7CF
    ctx->r5 = ctx->r5 | 0XF7CF;
    // 0x80800904: jal         0x8008B348
    // 0x80800908: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_39;
    // 0x80800908: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_39:
    // 0x8080090C: beq         $v0, $zero, L_80800924
    if (ctx->r2 == 0) {
        // 0x80800910: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800924;
    }
    // 0x80800910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800914: addiu       $a1, $zero, 0x41E
    ctx->r5 = ADD32(0, 0X41E);
    // 0x80800918: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8080091C: jal         0x8009DF18
    // 0x80800920: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_40;
    // 0x80800920: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_40:
L_80800924:
    // 0x80800924: lui         $a1, 0x3F1E
    ctx->r5 = S32(0X3F1E << 16);
    // 0x80800928: ori         $a1, $a1, 0x6320
    ctx->r5 = ctx->r5 | 0X6320;
    // 0x8080092C: jal         0x8008B348
    // 0x80800930: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_41;
    // 0x80800930: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_41:
    // 0x80800934: beq         $v0, $zero, L_80800950
    if (ctx->r2 == 0) {
        // 0x80800938: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800950;
    }
    // 0x80800938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080093C: lui         $a2, 0x3FD9
    ctx->r6 = S32(0X3FD9 << 16);
    // 0x80800940: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800944: addiu       $a1, $zero, 0x445B
    ctx->r5 = ADD32(0, 0X445B);
    // 0x80800948: jal         0x8009DF94
    // 0x8080094C: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF94(rdram, ctx);
        goto after_42;
    // 0x8080094C: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_42:
L_80800950:
    // 0x80800950: lui         $a1, 0x3F35
    ctx->r5 = S32(0X3F35 << 16);
    // 0x80800954: ori         $a1, $a1, 0xF6FD
    ctx->r5 = ctx->r5 | 0XF6FD;
    // 0x80800958: jal         0x8008B348
    // 0x8080095C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_43;
    // 0x8080095C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_43:
    // 0x80800960: beq         $v0, $zero, L_8080097C
    if (ctx->r2 == 0) {
        // 0x80800964: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080097C;
    }
    // 0x80800964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800968: lui         $a2, 0x3FCC
    ctx->r6 = S32(0X3FCC << 16);
    // 0x8080096C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800970: addiu       $a1, $zero, 0x445B
    ctx->r5 = ADD32(0, 0X445B);
    // 0x80800974: jal         0x8009DF94
    // 0x80800978: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF94(rdram, ctx);
        goto after_44;
    // 0x80800978: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_44:
L_8080097C:
    // 0x8080097C: lui         $a1, 0x3F4A
    ctx->r5 = S32(0X3F4A << 16);
    // 0x80800980: ori         $a1, $a1, 0xEE63
    ctx->r5 = ctx->r5 | 0XEE63;
    // 0x80800984: jal         0x8008B348
    // 0x80800988: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_45;
    // 0x80800988: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_45:
    // 0x8080098C: beq         $v0, $zero, L_808009BC
    if (ctx->r2 == 0) {
        // 0x80800990: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009BC;
    }
    // 0x80800990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800994: addiu       $a1, $zero, 0x445B
    ctx->r5 = ADD32(0, 0X445B);
    // 0x80800998: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    // 0x8080099C: jal         0x8009DF94
    // 0x808009A0: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF94(rdram, ctx);
        goto after_46;
    // 0x808009A0: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_46:
    // 0x808009A4: b           L_808009C0
    // 0x808009A8: lui         $a1, 0x3F7F
    ctx->r5 = S32(0X3F7F << 16);
        goto L_808009C0;
    // 0x808009A8: lui         $a1, 0x3F7F
    ctx->r5 = S32(0X3F7F << 16);
L_808009AC:
    // 0x808009AC: beq         $t4, $zero, L_808009BC
    if (ctx->r12 == 0) {
        // 0x808009B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009BC;
    }
    // 0x808009B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009B4: jal         0x80000274
    // 0x808009B8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_80800274_bsstand(rdram, ctx);
        goto after_47;
    // 0x808009B8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_47:
L_808009BC:
    // 0x808009BC: lui         $a1, 0x3F7F
    ctx->r5 = S32(0X3F7F << 16);
L_808009C0:
    // 0x808009C0: ori         $a1, $a1, 0xF972
    ctx->r5 = ctx->r5 | 0XF972;
    // 0x808009C4: jal         0x8008B348
    // 0x808009C8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_48;
    // 0x808009C8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_48:
    // 0x808009CC: beq         $v0, $zero, L_80800B30
    if (ctx->r2 == 0) {
        // 0x808009D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800B30;
    }
    // 0x808009D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009D4: jal         0x80000018
    // 0x808009D8: lw          $a1, 0x15C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X15C);
    func_80800018_bsstand(rdram, ctx);
        goto after_49;
    // 0x808009D8: lw          $a1, 0x15C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X15C);
    after_49:
    // 0x808009DC: sw          $v0, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r2;
    // 0x808009E0: jal         0x80000000
    // 0x808009E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsstand(rdram, ctx);
        goto after_50;
    // 0x808009E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_50:
    // 0x808009E8: lw          $t5, 0x15C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X15C);
    // 0x808009EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009F0: addiu       $a1, $zero, 0x95
    ctx->r5 = ADD32(0, 0X95);
    // 0x808009F4: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x808009F8: lbu         $v1, 0x0($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0X0);
    // 0x808009FC: andi        $t7, $v1, 0x10
    ctx->r15 = ctx->r3 & 0X10;
    // 0x80800A00: beq         $t7, $zero, L_80800A34
    if (ctx->r15 == 0) {
        // 0x80800A04: andi        $t8, $v1, 0x40
        ctx->r24 = ctx->r3 & 0X40;
            goto L_80800A34;
    }
    // 0x80800A04: andi        $t8, $v1, 0x40
    ctx->r24 = ctx->r3 & 0X40;
    // 0x80800A08: jal         0x8008CCBC
    // 0x80800A0C: lui         $a2, 0x40B0
    ctx->r6 = S32(0X40B0 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_51;
    // 0x80800A0C: lui         $a2, 0x40B0
    ctx->r6 = S32(0X40B0 << 16);
    after_51:
    // 0x80800A10: jal         0x8008B064
    // 0x80800A14: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B064(rdram, ctx);
        goto after_52;
    // 0x80800A14: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_52:
    // 0x80800A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A1C: jal         0x800A0CF4
    // 0x80800A20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_53;
    // 0x80800A20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_53:
    // 0x80800A24: jal         0x80090A2C
    // 0x80800A28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80090A2C(rdram, ctx);
        goto after_54;
    // 0x80800A28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_54:
    // 0x80800A2C: b           L_80800B30
    // 0x80800A30: nop

        goto L_80800B30;
    // 0x80800A30: nop

L_80800A34:
    // 0x80800A34: beq         $t8, $zero, L_80800A74
    if (ctx->r24 == 0) {
        // 0x80800A38: andi        $t9, $v1, 0x20
        ctx->r25 = ctx->r3 & 0X20;
            goto L_80800A74;
    }
    // 0x80800A38: andi        $t9, $v1, 0x20
    ctx->r25 = ctx->r3 & 0X20;
    // 0x80800A3C: lui         $a2, 0x4089
    ctx->r6 = S32(0X4089 << 16);
    // 0x80800A40: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800A44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A48: jal         0x8008CCBC
    // 0x80800A4C: addiu       $a1, $zero, 0xAE
    ctx->r5 = ADD32(0, 0XAE);
    func_8008CCBC(rdram, ctx);
        goto after_55;
    // 0x80800A4C: addiu       $a1, $zero, 0xAE
    ctx->r5 = ADD32(0, 0XAE);
    after_55:
    // 0x80800A50: jal         0x8008B064
    // 0x80800A54: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B064(rdram, ctx);
        goto after_56;
    // 0x80800A54: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_56:
    // 0x80800A58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A5C: jal         0x800A0CF4
    // 0x80800A60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_57;
    // 0x80800A60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_57:
    // 0x80800A64: jal         0x80090A2C
    // 0x80800A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80090A2C(rdram, ctx);
        goto after_58;
    // 0x80800A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_58:
    // 0x80800A6C: b           L_80800B30
    // 0x80800A70: nop

        goto L_80800B30;
    // 0x80800A70: nop

L_80800A74:
    // 0x80800A74: beq         $t9, $zero, L_80800AA8
    if (ctx->r25 == 0) {
        // 0x80800A78: andi        $t0, $v1, 0x8
        ctx->r8 = ctx->r3 & 0X8;
            goto L_80800AA8;
    }
    // 0x80800A78: andi        $t0, $v1, 0x8
    ctx->r8 = ctx->r3 & 0X8;
    // 0x80800A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A80: addiu       $a1, $zero, 0x95
    ctx->r5 = ADD32(0, 0X95);
    // 0x80800A84: jal         0x8008CCBC
    // 0x80800A88: lui         $a2, 0x40B0
    ctx->r6 = S32(0X40B0 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_59;
    // 0x80800A88: lui         $a2, 0x40B0
    ctx->r6 = S32(0X40B0 << 16);
    after_59:
    // 0x80800A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A90: jal         0x800A0CF4
    // 0x80800A94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_60;
    // 0x80800A94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_60:
    // 0x80800A98: jal         0x80090A2C
    // 0x80800A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80090A2C(rdram, ctx);
        goto after_61;
    // 0x80800A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_61:
    // 0x80800AA0: b           L_80800B30
    // 0x80800AA4: nop

        goto L_80800B30;
    // 0x80800AA4: nop

L_80800AA8:
    // 0x80800AA8: beq         $t0, $zero, L_80800B30
    if (ctx->r8 == 0) {
        // 0x80800AAC: nop
    
            goto L_80800B30;
    }
    // 0x80800AAC: nop

    // 0x80800AB0: jal         0x8008B264
    // 0x80800AB4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B264(rdram, ctx);
        goto after_62;
    // 0x80800AB4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_62:
    // 0x80800AB8: addiu       $at, $zero, 0x6F
    ctx->r1 = ADD32(0, 0X6F);
    // 0x80800ABC: bnel        $v0, $at, L_80800AD8
    if (ctx->r2 != ctx->r1) {
        // 0x80800AC0: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_80800AD8;
    }
    goto skip_4;
    // 0x80800AC0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_4:
    // 0x80800AC4: jal         0x8008B2B4
    // 0x80800AC8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B2B4(rdram, ctx);
        goto after_63;
    // 0x80800AC8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_63:
    // 0x80800ACC: b           L_80800AE4
    // 0x80800AD0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
        goto L_80800AE4;
    // 0x80800AD0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80800AD4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_80800AD8:
    // 0x80800AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800ADC: jal         0x800909CC
    // 0x80800AE0: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    func_800909CC(rdram, ctx);
        goto after_64;
    // 0x80800AE0: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    after_64:
L_80800AE4:
    // 0x80800AE4: jal         0x8008AF24
    // 0x80800AE8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008AF24(rdram, ctx);
        goto after_65;
    // 0x80800AE8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_65:
    // 0x80800AEC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800AF0: jal         0x8008AED4
    // 0x80800AF4: addiu       $a1, $zero, 0x6F
    ctx->r5 = ADD32(0, 0X6F);
    func_8008AED4(rdram, ctx);
        goto after_66;
    // 0x80800AF4: addiu       $a1, $zero, 0x6F
    ctx->r5 = ADD32(0, 0X6F);
    after_66:
    // 0x80800AF8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800AFC: jal         0x8008B1BC
    // 0x80800B00: lui         $a1, 0x40B0
    ctx->r5 = S32(0X40B0 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_67;
    // 0x80800B00: lui         $a1, 0x40B0
    ctx->r5 = S32(0X40B0 << 16);
    after_67:
    // 0x80800B04: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800B08: jal         0x8008B134
    // 0x80800B0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_68;
    // 0x80800B0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_68:
    // 0x80800B10: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800B14: jal         0x8008B24C
    // 0x80800B18: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8008B24C(rdram, ctx);
        goto after_69;
    // 0x80800B18: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_69:
    // 0x80800B1C: jal         0x8008B064
    // 0x80800B20: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B064(rdram, ctx);
        goto after_70;
    // 0x80800B20: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_70:
    // 0x80800B24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B28: jal         0x800A0CF4
    // 0x80800B2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_71;
    // 0x80800B2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_71:
L_80800B30:
    // 0x80800B30: jal         0x8008DD04
    // 0x80800B34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_72;
    // 0x80800B34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_72:
    // 0x80800B38: beq         $v0, $zero, L_80800B48
    if (ctx->r2 == 0) {
        // 0x80800B3C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800B48;
    }
    // 0x80800B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B40: addiu       $t1, $zero, 0x2F
    ctx->r9 = ADD32(0, 0X2F);
    // 0x80800B44: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_80800B48:
    // 0x80800B48: jal         0x8009E5C8
    // 0x80800B4C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_73;
    // 0x80800B4C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_73:
    // 0x80800B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800B54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800B58: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800B5C: jr          $ra
    // 0x80800B60: nop

    return;
    // 0x80800B60: nop

;}
RECOMP_FUNC void bsstand_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800B68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800B70: jal         0x800A0CF4
    // 0x80800B74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_0;
    // 0x80800B74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800B78: jal         0x80090A2C
    // 0x80800B7C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80090A2C(rdram, ctx);
        goto after_1;
    // 0x80800B7C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800B80: jal         0x800951B4
    // 0x80800B84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800951B4(rdram, ctx);
        goto after_2;
    // 0x80800B84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800B90: jr          $ra
    // 0x80800B94: nop

    return;
    // 0x80800B94: nop

;}
RECOMP_FUNC void bsstand_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B98: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800B9C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(148, 0XD98) << 16);
    // 0x80800BA0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800BA4: jr          $ra
    // 0x80800BA8: lw          $v0, 0xD98($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(148, 0XD98));
    return;
    // 0x80800BA8: lw          $v0, 0xD98($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(148, 0XD98));
;}
RECOMP_FUNC void bsstand_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800BB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800BB4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800BB8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800BBC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800BC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800BC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800BC8: jal         0x8009FFD8
    // 0x80800BCC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_0;
    // 0x80800BCC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80800BD0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800BD4: jal         0x8009B9B0
    // 0x80800BD8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_1;
    // 0x80800BD8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80800BDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800BE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800BE4: jr          $ra
    // 0x80800BE8: nop

    return;
    // 0x80800BE8: nop

;}
