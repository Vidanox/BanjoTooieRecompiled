#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80800B54_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800B58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800B5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800B60: jal         0x80082838
    // 0x80800B64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bsbee_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800B64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800B68: jal         0x8000039C
    // 0x80800B6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080039C_bsbeefly(rdram, ctx);
        goto after_1;
    // 0x80800B6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800B70: jal         0x800839C8
    // 0x80800B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_2;
    // 0x80800B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B7C: jal         0x8009BCB4
    // 0x80800B80: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BCB4(rdram, ctx);
        goto after_3;
    // 0x80800B80: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800B84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B88: jal         0x8009BA9C
    // 0x80800B8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_4;
    // 0x80800B8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80800B90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800B94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800B98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800B9C: jr          $ra
    // 0x80800BA0: nop

    return;
    // 0x80800BA0: nop

;}
RECOMP_FUNC void func_80800BA4_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800BA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BAC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800BB0: jal         0x80082840
    // 0x80800BB4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsbee_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800BB4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800BB8: jal         0x800839E8
    // 0x80800BBC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_1;
    // 0x80800BBC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800BC0: beq         $v0, $zero, L_80800BCC
    if (ctx->r2 == 0) {
        // 0x80800BC4: addiu       $t6, $zero, 0x8C
        ctx->r14 = ADD32(0, 0X8C);
            goto L_80800BCC;
    }
    // 0x80800BC4: addiu       $t6, $zero, 0x8C
    ctx->r14 = ADD32(0, 0X8C);
    // 0x80800BC8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80800BCC:
    // 0x80800BCC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800BD0: jal         0x8009E5C8
    // 0x80800BD4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80800BD4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80800BD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800BDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800BE0: jr          $ra
    // 0x80800BE4: nop

    return;
    // 0x80800BE4: nop

;}
RECOMP_FUNC void func_80800BE8_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800BEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BF0: jal         0x800839B8
    // 0x80800BF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80800BF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800BF8: jal         0x800002E4
    // 0x80800BFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808002E4_bsbeefly(rdram, ctx);
        goto after_1;
    // 0x80800BFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800C00: jal         0x80082830
    // 0x80800C04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsbee_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x80800C04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C10: jr          $ra
    // 0x80800C14: nop

    return;
    // 0x80800C14: nop

;}
RECOMP_FUNC void bsbeefly_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C18: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800C1C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(73, 0XE60) << 16);
    // 0x80800C20: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800C24: jr          $ra
    // 0x80800C28: lw          $v0, 0xE60($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(73, 0XE60));
    return;
    // 0x80800C28: lw          $v0, 0xE60($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(73, 0XE60));
;}
RECOMP_FUNC void func_80800C2C_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800C30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800C34: jal         0x80084C58
    // 0x80800C38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bafly_entrypoint_18(rdram, ctx);
        goto after_0;
    // 0x80800C38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800C3C: jal         0x800002E4
    // 0x80800C40: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808002E4_bsbeefly(rdram, ctx);
        goto after_1;
    // 0x80800C40: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800C44: jal         0x80082830
    // 0x80800C48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsbee_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x80800C48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C54: jr          $ra
    // 0x80800C58: nop

    return;
    // 0x80800C58: nop

;}
RECOMP_FUNC void func_80800C5C_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800C60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800C64: jal         0x80082838
    // 0x80800C68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsbee_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800C68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800C6C: jal         0x8000039C
    // 0x80800C70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080039C_bsbeefly(rdram, ctx);
        goto after_1;
    // 0x80800C70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800C74: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800C78: addiu       $a1, $zero, 0x1E0
    ctx->r5 = ADD32(0, 0X1E0);
    // 0x80800C7C: jal         0x80084C48
    // 0x80800C80: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    _bafly_entrypoint_16(rdram, ctx);
        goto after_2;
    // 0x80800C80: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_2:
    // 0x80800C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C8C: jr          $ra
    // 0x80800C90: nop

    return;
    // 0x80800C90: nop

;}
RECOMP_FUNC void func_80800C94_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800C98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800C9C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800CA0: jal         0x80082840
    // 0x80800CA4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsbee_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800CA4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800CA8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800CAC: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    // 0x80800CB0: addiu       $a2, $zero, 0x85
    ctx->r6 = ADD32(0, 0X85);
    // 0x80800CB4: jal         0x80084C50
    // 0x80800CB8: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    _bafly_entrypoint_17(rdram, ctx);
        goto after_1;
    // 0x80800CB8: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x80800CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800CC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800CC4: jr          $ra
    // 0x80800CC8: nop

    return;
    // 0x80800CC8: nop

;}
RECOMP_FUNC void bsbeefly_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CCC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800CD0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(73, 0XE70) << 16);
    // 0x80800CD4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800CD8: jr          $ra
    // 0x80800CDC: lw          $v0, 0xE70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(73, 0XE70));
    return;
    // 0x80800CDC: lw          $v0, 0xE70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(73, 0XE70));
;}
RECOMP_FUNC void func_80800CE0_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800CE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800CE8: jal         0x80084C40
    // 0x80800CEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bafly_entrypoint_15(rdram, ctx);
        goto after_0;
    // 0x80800CEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800CF0: jal         0x800002E4
    // 0x80800CF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808002E4_bsbeefly(rdram, ctx);
        goto after_1;
    // 0x80800CF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800CF8: jal         0x80082830
    // 0x80800CFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsbee_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x80800CFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800D00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D08: jr          $ra
    // 0x80800D0C: nop

    return;
    // 0x80800D0C: nop

;}
RECOMP_FUNC void func_80800D10_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D18: jal         0x80082838
    // 0x80800D1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsbee_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800D1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D20: jal         0x8000039C
    // 0x80800D24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080039C_bsbeefly(rdram, ctx);
        goto after_1;
    // 0x80800D24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800D28: lui         $a3, 0x3F99
    ctx->r7 = S32(0X3F99 << 16);
    // 0x80800D2C: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x80800D30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800D34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800D38: jal         0x80084C30
    // 0x80800D3C: addiu       $a2, $zero, 0xD3
    ctx->r6 = ADD32(0, 0XD3);
    _bafly_entrypoint_13(rdram, ctx);
        goto after_2;
    // 0x80800D3C: addiu       $a2, $zero, 0xD3
    ctx->r6 = ADD32(0, 0XD3);
    after_2:
    // 0x80800D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D48: jr          $ra
    // 0x80800D4C: nop

    return;
    // 0x80800D4C: nop

;}
RECOMP_FUNC void func_80800D50_bsbeefly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D58: jal         0x80082840
    // 0x80800D5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsbee_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800D5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800D64: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    // 0x80800D68: jal         0x80084C38
    // 0x80800D6C: addiu       $a2, $zero, 0x85
    ctx->r6 = ADD32(0, 0X85);
    _bafly_entrypoint_14(rdram, ctx);
        goto after_1;
    // 0x80800D6C: addiu       $a2, $zero, 0x85
    ctx->r6 = ADD32(0, 0X85);
    after_1:
    // 0x80800D70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D78: jr          $ra
    // 0x80800D7C: nop

    return;
    // 0x80800D7C: nop

;}
RECOMP_FUNC void bsbeefly_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D80: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800D84: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(73, 0XE80) << 16);
    // 0x80800D88: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800D8C: jr          $ra
    // 0x80800D90: lw          $v0, 0xE80($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(73, 0XE80));
    return;
    // 0x80800D90: lw          $v0, 0xE80($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(73, 0XE80));
    // 0x80800D94: nop

    // 0x80800D98: nop

    // 0x80800D9C: nop

;}
RECOMP_FUNC void func_80800000_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x8080000C: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800010: addiu       $a1, $zero, 0x41F
    ctx->r5 = ADD32(0, 0X41F);
    // 0x80800014: jal         0x8009DF18
    // 0x80800018: addiu       $a3, $zero, 0x1F40
    ctx->r7 = ADD32(0, 0X1F40);
    func_8009DF18(rdram, ctx);
        goto after_0;
    // 0x80800018: addiu       $a3, $zero, 0x1F40
    ctx->r7 = ADD32(0, 0X1F40);
    after_0:
    // 0x8080001C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800020: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800024: jr          $ra
    // 0x80800028: nop

    return;
    // 0x80800028: nop

;}
RECOMP_FUNC void func_8080002C_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080002C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800030: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800034: lui         $a1, 0x3FAC
    ctx->r5 = S32(0X3FAC << 16);
    // 0x80800038: lui         $a2, 0x3FB9
    ctx->r6 = S32(0X3FB9 << 16);
    // 0x8080003C: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800040: jal         0x8009D7A4
    // 0x80800044: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_8009D7A4(rdram, ctx);
        goto after_0;
    // 0x80800044: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_0:
    // 0x80800048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080004C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800050: jr          $ra
    // 0x80800054: nop

    return;
    // 0x80800054: nop

;}
RECOMP_FUNC void func_80800058_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800058: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080005C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800060: jal         0x8009EF1C
    // 0x80800064: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x80800064: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800068: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8080006C: jal         0x8009EF10
    // 0x80800070: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x80800070: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800074: bne         $v0, $zero, L_80800090
    if (ctx->r2 != 0) {
        // 0x80800078: lwc1        $f12, 0x1C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_80800090;
    }
    // 0x80800078: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8080007C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800080: jal         0x8009B9B0
    // 0x80800084: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800084: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800088: b           L_808000B4
    // 0x8080008C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808000B4;
    // 0x8080008C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800090:
    // 0x80800090: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80800094: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800098: lui         $a2, 0x43BB
    ctx->r6 = S32(0X43BB << 16);
    // 0x8080009C: jal         0x800F1214
    // 0x808000A0: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x808000A0: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    after_3:
    // 0x808000A4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808000A8: jal         0x8009B9B0
    // 0x808000AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x808000AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
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
RECOMP_FUNC void func_808000C0_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808000C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808000C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808000CC: jal         0x80082838
    // 0x808000D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bsbee_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808000D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808000D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D8: addiu       $a1, $zero, 0x1DE
    ctx->r5 = ADD32(0, 0X1DE);
    // 0x808000DC: jal         0x8008CB3C
    // 0x808000E0: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x808000E0: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_1:
    // 0x808000E4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808000E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808000EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808000F8: jal         0x8009FFD8
    // 0x808000FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x808000FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80800100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800104: jal         0x8009B9B0
    // 0x80800108: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80800108: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x8080010C: jal         0x800909CC
    // 0x80800110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800909CC(rdram, ctx);
        goto after_4;
    // 0x80800110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800114: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800118: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080011C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800120: jr          $ra
    // 0x80800124: nop

    return;
    // 0x80800124: nop

;}
RECOMP_FUNC void func_80800128_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800128: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080012C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800130: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800134: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800138: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080013C: jal         0x80082840
    // 0x80800140: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    _bsbee_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800140: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x80800144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800148: jal         0x8009D3A8
    // 0x8080014C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_1;
    // 0x8080014C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800150: jal         0x8008DD04
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_2;
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800158: beq         $v0, $zero, L_80800164
    if (ctx->r2 == 0) {
        // 0x8080015C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800164;
    }
    // 0x8080015C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800160: addiu       $s1, $zero, 0x88
    ctx->r17 = ADD32(0, 0X88);
L_80800164:
    // 0x80800164: jal         0x800919F4
    // 0x80800168: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_3;
    // 0x80800168: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8080016C: beq         $v0, $zero, L_8080017C
    if (ctx->r2 == 0) {
        // 0x80800170: nop
    
            goto L_8080017C;
    }
    // 0x80800170: nop

    // 0x80800174: jal         0x80084550
    // 0x80800178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babee_entrypoint_2(rdram, ctx);
        goto after_4;
    // 0x80800178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_8080017C:
    // 0x8080017C: jal         0x80097AD0
    // 0x80800180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097AD0(rdram, ctx);
        goto after_5;
    // 0x80800180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800184: beq         $v0, $zero, L_80800198
    if (ctx->r2 == 0) {
        // 0x80800188: nop
    
            goto L_80800198;
    }
    // 0x80800188: nop

    // 0x8080018C: jal         0x800848A8
    // 0x80800190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_6;
    // 0x80800190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800194: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80800198:
    // 0x80800198: jal         0x8009EF10
    // 0x8080019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_7;
    // 0x8080019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808001A0: blez        $v0, L_808001AC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x808001A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001AC;
    }
    // 0x808001A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A8: addiu       $s1, $zero, 0x86
    ctx->r17 = ADD32(0, 0X86);
L_808001AC:
    // 0x808001AC: jal         0x80091A58
    // 0x808001B0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_8;
    // 0x808001B0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_8:
    // 0x808001B4: beq         $v0, $zero, L_808001C0
    if (ctx->r2 == 0) {
        // 0x808001B8: nop
    
            goto L_808001C0;
    }
    // 0x808001B8: nop

    // 0x808001BC: addiu       $s1, $zero, 0x87
    ctx->r17 = ADD32(0, 0X87);
L_808001C0:
    // 0x808001C0: jal         0x8008E35C
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_9;
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808001C8: beq         $v0, $zero, L_808001D4
    if (ctx->r2 == 0) {
        // 0x808001CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001D4;
    }
    // 0x808001CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D0: addiu       $s1, $zero, 0x8C
    ctx->r17 = ADD32(0, 0X8C);
L_808001D4:
    // 0x808001D4: jal         0x800A02DC
    // 0x808001D8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800A02DC(rdram, ctx);
        goto after_10;
    // 0x808001D8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_10:
    // 0x808001DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E0: jal         0x8009E5C8
    // 0x808001E4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_11;
    // 0x808001E4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_11:
    // 0x808001E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808001EC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808001F0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808001F4: jr          $ra
    // 0x808001F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x808001F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_808001FC_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800200: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800204: jal         0x80090A2C
    // 0x80800208: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80090A2C(rdram, ctx);
        goto after_0;
    // 0x80800208: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080020C: jal         0x80082830
    // 0x80800210: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsbee_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800210: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800218: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080021C: jr          $ra
    // 0x80800220: nop

    return;
    // 0x80800220: nop

;}
RECOMP_FUNC void bsbeemain_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800224: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800228: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(74, 0X1260) << 16);
    // 0x8080022C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800230: jr          $ra
    // 0x80800234: lw          $v0, 0x1260($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(74, 0X1260));
    return;
    // 0x80800234: lw          $v0, 0x1260($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(74, 0X1260));
;}
RECOMP_FUNC void func_80800238_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800238: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080023C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800240: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800244: jal         0x80082838
    // 0x80800248: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bsbee_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800248: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080024C: lui         $a2, 0x3EC2
    ctx->r6 = S32(0X3EC2 << 16);
    // 0x80800250: ori         $a2, $a2, 0x8F5C
    ctx->r6 = ctx->r6 | 0X8F5C;
    // 0x80800254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800258: jal         0x8008CB3C
    // 0x8080025C: addiu       $a1, $zero, 0x1DD
    ctx->r5 = ADD32(0, 0X1DD);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x8080025C: addiu       $a1, $zero, 0x1DD
    ctx->r5 = ADD32(0, 0X1DD);
    after_1:
    // 0x80800260: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800264: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080026C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800270: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800274: jal         0x8009FFD8
    // 0x80800278: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800278: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8080027C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(74, 0X1250) << 16);
    // 0x80800280: lwc1        $f4, 0x1250($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(74, 0X1250));
    // 0x80800284: lui         $a2, 0x43BB
    ctx->r6 = S32(0X43BB << 16);
    // 0x80800288: lui         $a3, 0x3F19
    ctx->r7 = S32(0X3F19 << 16);
    // 0x8080028C: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x80800290: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80800294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800298: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x8080029C: jal         0x8008C9F0
    // 0x808002A0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_3;
    // 0x808002A0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x808002A4: jal         0x800909CC
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800909CC(rdram, ctx);
        goto after_4;
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808002AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808002B0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808002B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808002B8: jr          $ra
    // 0x808002BC: nop

    return;
    // 0x808002BC: nop

;}
RECOMP_FUNC void func_808002C0_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808002C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808002CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808002D0: jal         0x80082840
    // 0x808002D4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    _bsbee_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808002D4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808002D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002DC: jal         0x8009D3A8
    // 0x808002E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_1;
    // 0x808002E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x808002E4: jal         0x80000058
    // 0x808002E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800058_bsbeemain(rdram, ctx);
        goto after_2;
    // 0x808002E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808002EC: lui         $a1, 0x3F70
    ctx->r5 = S32(0X3F70 << 16);
    // 0x808002F0: ori         $a1, $a1, 0xA3D7
    ctx->r5 = ctx->r5 | 0XA3D7;
    // 0x808002F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002F8: jal         0x800A2CE8
    // 0x808002FC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_3;
    // 0x808002FC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x80800300: lui         $a1, 0x3EE1
    ctx->r5 = S32(0X3EE1 << 16);
    // 0x80800304: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080030C: jal         0x800A2CE8
    // 0x80800310: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_4;
    // 0x80800310: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_4:
    // 0x80800314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800318: jal         0x800919F4
    // 0x8080031C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_5;
    // 0x8080031C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80800320: beq         $v0, $zero, L_80800330
    if (ctx->r2 == 0) {
        // 0x80800324: nop
    
            goto L_80800330;
    }
    // 0x80800324: nop

    // 0x80800328: jal         0x80084550
    // 0x8080032C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babee_entrypoint_2(rdram, ctx);
        goto after_6;
    // 0x8080032C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_80800330:
    // 0x80800330: jal         0x8009EF10
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_7;
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800338: bne         $v0, $zero, L_80800354
    if (ctx->r2 != 0) {
        // 0x8080033C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800354;
    }
    // 0x8080033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800340: jal         0x8009BCD4
    // 0x80800344: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_8;
    // 0x80800344: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_8:
    // 0x80800348: beq         $v0, $zero, L_80800354
    if (ctx->r2 == 0) {
        // 0x8080034C: addiu       $t6, $zero, 0x85
        ctx->r14 = ADD32(0, 0X85);
            goto L_80800354;
    }
    // 0x8080034C: addiu       $t6, $zero, 0x85
    ctx->r14 = ADD32(0, 0X85);
    // 0x80800350: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800354:
    // 0x80800354: jal         0x8008DD04
    // 0x80800358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_9;
    // 0x80800358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080035C: beq         $v0, $zero, L_8080036C
    if (ctx->r2 == 0) {
        // 0x80800360: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080036C;
    }
    // 0x80800360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800364: addiu       $t7, $zero, 0x88
    ctx->r15 = ADD32(0, 0X88);
    // 0x80800368: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_8080036C:
    // 0x8080036C: jal         0x80091A58
    // 0x80800370: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_10;
    // 0x80800370: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_10:
    // 0x80800374: beq         $v0, $zero, L_80800380
    if (ctx->r2 == 0) {
        // 0x80800378: addiu       $t8, $zero, 0x87
        ctx->r24 = ADD32(0, 0X87);
            goto L_80800380;
    }
    // 0x80800378: addiu       $t8, $zero, 0x87
    ctx->r24 = ADD32(0, 0X87);
    // 0x8080037C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80800380:
    // 0x80800380: jal         0x8008E35C
    // 0x80800384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_11;
    // 0x80800384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800388: beq         $v0, $zero, L_80800398
    if (ctx->r2 == 0) {
        // 0x8080038C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800398;
    }
    // 0x8080038C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800390: addiu       $t9, $zero, 0x8C
    ctx->r25 = ADD32(0, 0X8C);
    // 0x80800394: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80800398:
    // 0x80800398: jal         0x8009E5C8
    // 0x8080039C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_12;
    // 0x8080039C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_12:
    // 0x808003A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808003A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808003A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808003AC: jr          $ra
    // 0x808003B0: nop

    return;
    // 0x808003B0: nop

;}
RECOMP_FUNC void func_808003B4_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003BC: jal         0x80090A2C
    // 0x808003C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80090A2C(rdram, ctx);
        goto after_0;
    // 0x808003C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808003C4: jal         0x80082830
    // 0x808003C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsbee_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x808003C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808003CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003D4: jr          $ra
    // 0x808003D8: nop

    return;
    // 0x808003D8: nop

;}
RECOMP_FUNC void bsbeemain_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003DC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808003E0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(74, 0X1270) << 16);
    // 0x808003E4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808003E8: jr          $ra
    // 0x808003EC: lw          $v0, 0x1270($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(74, 0X1270));
    return;
    // 0x808003EC: lw          $v0, 0x1270($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(74, 0X1270));
;}
RECOMP_FUNC void func_808003F0_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003F0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808003F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808003F8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x808003FC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800400: jal         0x8008CABC
    // 0x80800404: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800404: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800408: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8080040C: jal         0x80082838
    // 0x80800410: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _bsbee_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800410: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80800414: jal         0x8008AF24
    // 0x80800418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x80800418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080041C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800420: jal         0x8008B1A0
    // 0x80800424: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_3;
    // 0x80800424: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080042C: jal         0x8008AED4
    // 0x80800430: addiu       $a1, $zero, 0x1E2
    ctx->r5 = ADD32(0, 0X1E2);
    func_8008AED4(rdram, ctx);
        goto after_4;
    // 0x80800430: addiu       $a1, $zero, 0x1E2
    ctx->r5 = ADD32(0, 0X1E2);
    after_4:
    // 0x80800434: lui         $a2, 0x3EAE
    ctx->r6 = S32(0X3EAE << 16);
    // 0x80800438: ori         $a2, $a2, 0x147B
    ctx->r6 = ctx->r6 | 0X147B;
    // 0x8080043C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800440: jal         0x8008B1D4
    // 0x80800444: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_5;
    // 0x80800444: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x80800448: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x8080044C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800450: jal         0x8008B24C
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_6;
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800458: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x8080045C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800460: jal         0x8008B1BC
    // 0x80800464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_7;
    // 0x80800464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800468: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080046C: jal         0x8008B134
    // 0x80800470: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x80800470: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80800474: jal         0x8008B064
    // 0x80800478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_9;
    // 0x80800478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080047C: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800480: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800484: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800488: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080048C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800490: jal         0x8009FFD8
    // 0x80800494: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_10;
    // 0x80800494: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_10:
    // 0x80800498: jal         0x8009EF04
    // 0x8080049C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EF04(rdram, ctx);
        goto after_11;
    // 0x8080049C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x808004A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808004A4: nop

    // 0x808004A8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x808004AC: nop

    // 0x808004B0: bc1t        L_808004CC
    if (c1cs) {
        // 0x808004B4: nop
    
            goto L_808004CC;
    }
    // 0x808004B4: nop

    // 0x808004B8: jal         0x8009EEB8
    // 0x808004BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_12;
    // 0x808004BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x808004C0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808004C4: jal         0x8009C914
    // 0x808004C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C914(rdram, ctx);
        goto after_13;
    // 0x808004C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
L_808004CC:
    // 0x808004CC: jal         0x8009C990
    // 0x808004D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_14;
    // 0x808004D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x808004D4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808004D8: jal         0x8009B9C0
    // 0x808004DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_15;
    // 0x808004DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x808004E0: jal         0x80000058
    // 0x808004E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800058_bsbeemain(rdram, ctx);
        goto after_16;
    // 0x808004E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x808004E8: jal         0x8009C990
    // 0x808004EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_17;
    // 0x808004EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x808004F0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x808004F4: jal         0x8009BB00
    // 0x808004F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BB00(rdram, ctx);
        goto after_18;
    // 0x808004F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_18:
    // 0x808004FC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800500: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800504: jal         0x8009BA68
    // 0x80800508: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_19;
    // 0x80800508: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_19:
    // 0x8080050C: lui         $a1, 0x442D
    ctx->r5 = S32(0X442D << 16);
    // 0x80800510: ori         $a1, $a1, 0x6000
    ctx->r5 = ctx->r5 | 0X6000;
    // 0x80800514: jal         0x8009BA58
    // 0x80800518: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BA58(rdram, ctx);
        goto after_20;
    // 0x80800518: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_20:
    // 0x8080051C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800520: jal         0x8009BCB4
    // 0x80800524: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_21;
    // 0x80800524: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    after_21:
    // 0x80800528: jal         0x8000002C
    // 0x8080052C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8080002C_bsbeemain(rdram, ctx);
        goto after_22;
    // 0x8080052C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_22:
    // 0x80800530: sw          $zero, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = 0;
    // 0x80800534: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800538: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8080053C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800540: jr          $ra
    // 0x80800544: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80800544: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80800548_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800548: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8080054C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800550: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800554: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800558: jal         0x8008CABC
    // 0x8080055C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080055C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x80800560: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80800564: jal         0x80082840
    // 0x80800568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsbee_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080056C: jal         0x80000058
    // 0x80800570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800058_bsbeemain(rdram, ctx);
        goto after_2;
    // 0x80800570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800578: jal         0x8009BB24
    // 0x8080057C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_3;
    // 0x8080057C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x80800580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800584: jal         0x80091A30
    // 0x80800588: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_4;
    // 0x80800588: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_4:
    // 0x8080058C: beq         $v0, $zero, L_808005B4
    if (ctx->r2 == 0) {
        // 0x80800590: lwc1        $f6, 0x28($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
            goto L_808005B4;
    }
    // 0x80800590: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800594: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800598: nop

    // 0x8080059C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x808005A0: nop

    // 0x808005A4: bc1fl       L_808005B8
    if (!c1cs) {
        // 0x808005A8: lw          $v0, 0x15C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X15C);
            goto L_808005B8;
    }
    goto skip_0;
    // 0x808005A8: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    skip_0:
    // 0x808005AC: jal         0x8009BC6C
    // 0x808005B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_5;
    // 0x808005B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_808005B4:
    // 0x808005B4: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
L_808005B8:
    // 0x808005B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005C0: beq         $v0, $zero, L_808005F0
    if (ctx->r2 == 0) {
        // 0x808005C4: nop
    
            goto L_808005F0;
    }
    // 0x808005C4: nop

    // 0x808005C8: beq         $v0, $at, L_8080064C
    if (ctx->r2 == ctx->r1) {
        // 0x808005CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080064C;
    }
    // 0x808005CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808005D4: beq         $v0, $at, L_8080067C
    if (ctx->r2 == ctx->r1) {
        // 0x808005D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080067C;
    }
    // 0x808005D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808005E0: beq         $v0, $at, L_808006BC
    if (ctx->r2 == ctx->r1) {
        // 0x808005E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006BC;
    }
    // 0x808005E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005E8: b           L_808006E8
    // 0x808005EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808006E8;
    // 0x808005EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808005F0:
    // 0x808005F0: jal         0x8008DF8C
    // 0x808005F4: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_6;
    // 0x808005F4: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_6:
    // 0x808005F8: beq         $v0, $zero, L_80800620
    if (ctx->r2 == 0) {
        // 0x808005FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800620;
    }
    // 0x808005FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800600: lui         $a1, 0x3F37
    ctx->r5 = S32(0X3F37 << 16);
    // 0x80800604: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80800608: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8080060C: jal         0x8008CF1C
    // 0x80800610: ori         $a1, $a1, 0xA3D
    ctx->r5 = ctx->r5 | 0XA3D;
    func_8008CF1C(rdram, ctx);
        goto after_7;
    // 0x80800610: ori         $a1, $a1, 0xA3D
    ctx->r5 = ctx->r5 | 0XA3D;
    after_7:
    // 0x80800614: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800618: b           L_808006E4
    // 0x8080061C: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
        goto L_808006E4;
    // 0x8080061C: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_80800620:
    // 0x80800620: jal         0x8008B324
    // 0x80800624: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_8;
    // 0x80800624: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_8:
    // 0x80800628: beq         $v0, $zero, L_808006E4
    if (ctx->r2 == 0) {
        // 0x8080062C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006E4;
    }
    // 0x8080062C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800630: lui         $a1, 0x3F02
    ctx->r5 = S32(0X3F02 << 16);
    // 0x80800634: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    // 0x80800638: jal         0x8008CF1C
    // 0x8080063C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_9;
    // 0x8080063C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_9:
    // 0x80800640: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80800644: b           L_808006E4
    // 0x80800648: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
        goto L_808006E4;
    // 0x80800648: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_8080064C:
    // 0x8080064C: jal         0x8008DF8C
    // 0x80800650: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_10;
    // 0x80800650: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_10:
    // 0x80800654: beq         $v0, $zero, L_808006E4
    if (ctx->r2 == 0) {
        // 0x80800658: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006E4;
    }
    // 0x80800658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080065C: lui         $a1, 0x3F37
    ctx->r5 = S32(0X3F37 << 16);
    // 0x80800660: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x80800664: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800668: jal         0x8008CF1C
    // 0x8080066C: ori         $a1, $a1, 0xA3D
    ctx->r5 = ctx->r5 | 0XA3D;
    func_8008CF1C(rdram, ctx);
        goto after_11;
    // 0x8080066C: ori         $a1, $a1, 0xA3D
    ctx->r5 = ctx->r5 | 0XA3D;
    after_11:
    // 0x80800670: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80800674: b           L_808006E4
    // 0x80800678: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
        goto L_808006E4;
    // 0x80800678: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
L_8080067C:
    // 0x8080067C: jal         0x8009D3A8
    // 0x80800680: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_12;
    // 0x80800680: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x80800684: jal         0x8008E078
    // 0x80800688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_13;
    // 0x80800688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x8080068C: beql        $v0, $zero, L_808006E8
    if (ctx->r2 == 0) {
        // 0x80800690: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006E8;
    }
    goto skip_1;
    // 0x80800690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800694: jal         0x80000000
    // 0x80800698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbeemain(rdram, ctx);
        goto after_14;
    // 0x80800698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x8080069C: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x808006A0: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808006A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006A8: jal         0x8008CF1C
    // 0x808006AC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_15;
    // 0x808006AC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_15:
    // 0x808006B0: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x808006B4: b           L_808006E4
    // 0x808006B8: sw          $t9, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r25;
        goto L_808006E4;
    // 0x808006B8: sw          $t9, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r25;
L_808006BC:
    // 0x808006BC: jal         0x8009D3A8
    // 0x808006C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_16;
    // 0x808006C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x808006C4: jal         0x8008B324
    // 0x808006C8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_17;
    // 0x808006C8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_17:
    // 0x808006CC: beq         $v0, $zero, L_808006E4
    if (ctx->r2 == 0) {
        // 0x808006D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006E4;
    }
    // 0x808006D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006D4: jal         0x8009B9B0
    // 0x808006D8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_18;
    // 0x808006D8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_18:
    // 0x808006DC: addiu       $t0, $zero, 0x85
    ctx->r8 = ADD32(0, 0X85);
    // 0x808006E0: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_808006E4:
    // 0x808006E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808006E8:
    // 0x808006E8: jal         0x800919F4
    // 0x808006EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_19;
    // 0x808006EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x808006F0: beq         $v0, $zero, L_80800700
    if (ctx->r2 == 0) {
        // 0x808006F4: nop
    
            goto L_80800700;
    }
    // 0x808006F4: nop

    // 0x808006F8: jal         0x80084550
    // 0x808006FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babee_entrypoint_2(rdram, ctx);
        goto after_20;
    // 0x808006FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
L_80800700:
    // 0x80800700: jal         0x8008E078
    // 0x80800704: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_21;
    // 0x80800704: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800708: beq         $v0, $zero, L_80800740
    if (ctx->r2 == 0) {
        // 0x8080070C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800740;
    }
    // 0x8080070C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800710: jal         0x8009EF10
    // 0x80800714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_22;
    // 0x80800714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80800718: blez        $v0, L_80800728
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8080071C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800728;
    }
    // 0x8080071C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800720: addiu       $t1, $zero, 0x86
    ctx->r9 = ADD32(0, 0X86);
    // 0x80800724: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_80800728:
    // 0x80800728: jal         0x80091A58
    // 0x8080072C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_23;
    // 0x8080072C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_23:
    // 0x80800730: beq         $v0, $zero, L_80800754
    if (ctx->r2 == 0) {
        // 0x80800734: addiu       $t2, $zero, 0x87
        ctx->r10 = ADD32(0, 0X87);
            goto L_80800754;
    }
    // 0x80800734: addiu       $t2, $zero, 0x87
    ctx->r10 = ADD32(0, 0X87);
    // 0x80800738: b           L_80800754
    // 0x8080073C: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
        goto L_80800754;
    // 0x8080073C: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_80800740:
    // 0x80800740: jal         0x80091A58
    // 0x80800744: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_24;
    // 0x80800744: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_24:
    // 0x80800748: beq         $v0, $zero, L_80800754
    if (ctx->r2 == 0) {
        // 0x8080074C: addiu       $t3, $zero, 0x8C
        ctx->r11 = ADD32(0, 0X8C);
            goto L_80800754;
    }
    // 0x8080074C: addiu       $t3, $zero, 0x8C
    ctx->r11 = ADD32(0, 0X8C);
    // 0x80800750: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
L_80800754:
    // 0x80800754: jal         0x8008E35C
    // 0x80800758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_25;
    // 0x80800758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x8080075C: beq         $v0, $zero, L_8080076C
    if (ctx->r2 == 0) {
        // 0x80800760: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080076C;
    }
    // 0x80800760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800764: addiu       $t4, $zero, 0x8C
    ctx->r12 = ADD32(0, 0X8C);
    // 0x80800768: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
L_8080076C:
    // 0x8080076C: jal         0x8009E5C8
    // 0x80800770: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_26;
    // 0x80800770: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_26:
    // 0x80800774: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800778: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080077C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800780: jr          $ra
    // 0x80800784: nop

    return;
    // 0x80800784: nop

;}
RECOMP_FUNC void func_80800788_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080078C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800790: jal         0x80082830
    // 0x80800794: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsbee_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800794: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800798: jal         0x8009BC6C
    // 0x8080079C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BC6C(rdram, ctx);
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
RECOMP_FUNC void bsbeemain_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007B0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808007B4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(74, 0X1280) << 16);
    // 0x808007B8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808007BC: jr          $ra
    // 0x808007C0: lw          $v0, 0x1280($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(74, 0X1280));
    return;
    // 0x808007C0: lw          $v0, 0x1280($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(74, 0X1280));
;}
RECOMP_FUNC void func_808007C4_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808007C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808007CC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808007D0: jal         0x8008CABC
    // 0x808007D4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808007D4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x808007D8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808007DC: jal         0x80082838
    // 0x808007E0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    _bsbee_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x808007E0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x808007E4: jal         0x8008AF24
    // 0x808007E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x808007E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808007EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007F0: jal         0x8008AED4
    // 0x808007F4: addiu       $a1, $zero, 0x1E2
    ctx->r5 = ADD32(0, 0X1E2);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x808007F4: addiu       $a1, $zero, 0x1E2
    ctx->r5 = ADD32(0, 0X1E2);
    after_3:
    // 0x808007F8: lui         $a1, 0x3EAE
    ctx->r5 = S32(0X3EAE << 16);
    // 0x808007FC: ori         $a1, $a1, 0x147B
    ctx->r5 = ctx->r5 | 0X147B;
    // 0x80800800: jal         0x8008B24C
    // 0x80800804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_4;
    // 0x80800804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080080C: jal         0x8008B1BC
    // 0x80800810: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_5;
    // 0x80800810: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_5:
    // 0x80800814: lui         $a2, 0x3F02
    ctx->r6 = S32(0X3F02 << 16);
    // 0x80800818: ori         $a2, $a2, 0x8F5C
    ctx->r6 = ctx->r6 | 0X8F5C;
    // 0x8080081C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800820: jal         0x8008B1D4
    // 0x80800824: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_6;
    // 0x80800824: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x80800828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080082C: jal         0x8008B134
    // 0x80800830: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_7;
    // 0x80800830: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80800834: jal         0x8008B064
    // 0x80800838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_8;
    // 0x80800838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8080083C: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800840: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800844: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800848: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080084C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800850: jal         0x8009FFD8
    // 0x80800854: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_9;
    // 0x80800854: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_9:
    // 0x80800858: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8080085C: sw          $zero, 0x15C($t7)
    MEM_W(0X15C, ctx->r15) = 0;
    // 0x80800860: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800864: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800868: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080086C: jr          $ra
    // 0x80800870: nop

    return;
    // 0x80800870: nop

;}
RECOMP_FUNC void func_80800874_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800874: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800878: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080087C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800880: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800884: jal         0x8008CABC
    // 0x80800888: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800888: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x8080088C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80800890: jal         0x80082840
    // 0x80800894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsbee_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080089C: jal         0x8009D3A8
    // 0x808008A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_2;
    // 0x808008A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808008A4: jal         0x80000058
    // 0x808008A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800058_bsbeemain(rdram, ctx);
        goto after_3;
    // 0x808008A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808008AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008B0: jal         0x8009BB24
    // 0x808008B4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_4;
    // 0x808008B4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_4:
    // 0x808008B8: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x808008BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808008C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008C4: beq         $v0, $zero, L_808008E8
    if (ctx->r2 == 0) {
        // 0x808008C8: nop
    
            goto L_808008E8;
    }
    // 0x808008C8: nop

    // 0x808008CC: beq         $v0, $at, L_80800918
    if (ctx->r2 == ctx->r1) {
        // 0x808008D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800918;
    }
    // 0x808008D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808008D8: beq         $v0, $at, L_80800964
    if (ctx->r2 == ctx->r1) {
        // 0x808008DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800964;
    }
    // 0x808008DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008E0: b           L_80800990
    // 0x808008E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800990;
    // 0x808008E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808008E8:
    // 0x808008E8: jal         0x8008DF8C
    // 0x808008EC: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_5;
    // 0x808008EC: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_5:
    // 0x808008F0: beq         $v0, $zero, L_8080098C
    if (ctx->r2 == 0) {
        // 0x808008F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080098C;
    }
    // 0x808008F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008F8: lui         $a1, 0x3F37
    ctx->r5 = S32(0X3F37 << 16);
    // 0x808008FC: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80800900: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800904: jal         0x8008CF1C
    // 0x80800908: ori         $a1, $a1, 0xA3D
    ctx->r5 = ctx->r5 | 0XA3D;
    func_8008CF1C(rdram, ctx);
        goto after_6;
    // 0x80800908: ori         $a1, $a1, 0xA3D
    ctx->r5 = ctx->r5 | 0XA3D;
    after_6:
    // 0x8080090C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800910: b           L_8080098C
    // 0x80800914: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
        goto L_8080098C;
    // 0x80800914: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_80800918:
    // 0x80800918: jal         0x8009D3A8
    // 0x8080091C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_7;
    // 0x8080091C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80800920: jal         0x8008E078
    // 0x80800924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_8;
    // 0x80800924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800928: beql        $v0, $zero, L_80800990
    if (ctx->r2 == 0) {
        // 0x8080092C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800990;
    }
    goto skip_0;
    // 0x8080092C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800930: jal         0x80000000
    // 0x80800934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbeemain(rdram, ctx);
        goto after_9;
    // 0x80800934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080093C: jal         0x8009B9B0
    // 0x80800940: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_10;
    // 0x80800940: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_10:
    // 0x80800944: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80800948: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8080094C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800950: jal         0x8008CF1C
    // 0x80800954: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_11;
    // 0x80800954: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_11:
    // 0x80800958: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8080095C: b           L_8080098C
    // 0x80800960: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
        goto L_8080098C;
    // 0x80800960: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_80800964:
    // 0x80800964: jal         0x8009D3A8
    // 0x80800968: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_12;
    // 0x80800968: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x8080096C: jal         0x8008B324
    // 0x80800970: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_13;
    // 0x80800970: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_13:
    // 0x80800974: beq         $v0, $zero, L_8080098C
    if (ctx->r2 == 0) {
        // 0x80800978: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080098C;
    }
    // 0x80800978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080097C: jal         0x8009B9B0
    // 0x80800980: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_14;
    // 0x80800980: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_14:
    // 0x80800984: addiu       $t8, $zero, 0x85
    ctx->r24 = ADD32(0, 0X85);
    // 0x80800988: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_8080098C:
    // 0x8080098C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800990:
    // 0x80800990: jal         0x800919F4
    // 0x80800994: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_15;
    // 0x80800994: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x80800998: beq         $v0, $zero, L_808009A8
    if (ctx->r2 == 0) {
        // 0x8080099C: nop
    
            goto L_808009A8;
    }
    // 0x8080099C: nop

    // 0x808009A0: jal         0x80084550
    // 0x808009A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babee_entrypoint_2(rdram, ctx);
        goto after_16;
    // 0x808009A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
L_808009A8:
    // 0x808009A8: jal         0x8008E078
    // 0x808009AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_17;
    // 0x808009AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x808009B0: beq         $v0, $zero, L_80800A1C
    if (ctx->r2 == 0) {
        // 0x808009B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A1C;
    }
    // 0x808009B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009BC: jal         0x80095738
    // 0x808009C0: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    func_80095738(rdram, ctx);
        goto after_18;
    // 0x808009C0: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_18:
    // 0x808009C4: beq         $v0, $zero, L_808009DC
    if (ctx->r2 == 0) {
        // 0x808009C8: nop
    
            goto L_808009DC;
    }
    // 0x808009C8: nop

    // 0x808009CC: jal         0x800848C8
    // 0x808009D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_28(rdram, ctx);
        goto after_19;
    // 0x808009D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x808009D4: b           L_80800A40
    // 0x808009D8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
        goto L_80800A40;
    // 0x808009D8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_808009DC:
    // 0x808009DC: jal         0x8009EF10
    // 0x808009E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_20;
    // 0x808009E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x808009E4: blez        $v0, L_808009F4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x808009E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009F4;
    }
    // 0x808009E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009EC: addiu       $t9, $zero, 0x86
    ctx->r25 = ADD32(0, 0X86);
    // 0x808009F0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_808009F4:
    // 0x808009F4: jal         0x80091A58
    // 0x808009F8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_21;
    // 0x808009F8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_21:
    // 0x808009FC: beq         $v0, $zero, L_80800A0C
    if (ctx->r2 == 0) {
        // 0x80800A00: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A0C;
    }
    // 0x80800A00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A04: addiu       $t0, $zero, 0x87
    ctx->r8 = ADD32(0, 0X87);
    // 0x80800A08: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_80800A0C:
    // 0x80800A0C: jal         0x800A02DC
    // 0x80800A10: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_800A02DC(rdram, ctx);
        goto after_22;
    // 0x80800A10: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_22:
    // 0x80800A14: b           L_80800A40
    // 0x80800A18: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
        goto L_80800A40;
    // 0x80800A18: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_80800A1C:
    // 0x80800A1C: jal         0x80095748
    // 0x80800A20: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095748(rdram, ctx);
        goto after_23;
    // 0x80800A20: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_23:
    // 0x80800A24: beq         $v0, $zero, L_80800A40
    if (ctx->r2 == 0) {
        // 0x80800A28: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A40;
    }
    // 0x80800A28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A2C: jal         0x80091A58
    // 0x80800A30: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_24;
    // 0x80800A30: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_24:
    // 0x80800A34: beq         $v0, $zero, L_80800A40
    if (ctx->r2 == 0) {
        // 0x80800A38: addiu       $t1, $zero, 0x8C
        ctx->r9 = ADD32(0, 0X8C);
            goto L_80800A40;
    }
    // 0x80800A38: addiu       $t1, $zero, 0x8C
    ctx->r9 = ADD32(0, 0X8C);
    // 0x80800A3C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_80800A40:
    // 0x80800A40: jal         0x8008E35C
    // 0x80800A44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_25;
    // 0x80800A44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x80800A48: beq         $v0, $zero, L_80800A58
    if (ctx->r2 == 0) {
        // 0x80800A4C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A58;
    }
    // 0x80800A4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A50: addiu       $t2, $zero, 0x8C
    ctx->r10 = ADD32(0, 0X8C);
    // 0x80800A54: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_80800A58:
    // 0x80800A58: jal         0x8009E5C8
    // 0x80800A5C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_26;
    // 0x80800A5C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_26:
    // 0x80800A60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800A64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800A68: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800A6C: jr          $ra
    // 0x80800A70: nop

    return;
    // 0x80800A70: nop

;}
RECOMP_FUNC void func_80800A74_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800A78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A7C: jal         0x80082830
    // 0x80800A80: nop

    _bsbee_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800A80: nop

    after_0:
    // 0x80800A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A8C: jr          $ra
    // 0x80800A90: nop

    return;
    // 0x80800A90: nop

;}
RECOMP_FUNC void bsbeemain_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A94: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800A98: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(74, 0X1290) << 16);
    // 0x80800A9C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800AA0: jr          $ra
    // 0x80800AA4: lw          $v0, 0x1290($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(74, 0X1290));
    return;
    // 0x80800AA4: lw          $v0, 0x1290($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(74, 0X1290));
;}
RECOMP_FUNC void bsbeemain_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800AAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800AB0: jal         0x800845D0
    // 0x80800AB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800AB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800AB8: jal         0x80082830
    // 0x80800ABC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsbee_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800ABC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800AC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800AC8: jr          $ra
    // 0x80800ACC: nop

    return;
    // 0x80800ACC: nop

;}
RECOMP_FUNC void bsbeemain_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800AD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800AD8: jal         0x80082838
    // 0x80800ADC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsbee_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800ADC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800AE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800AE4: jal         0x800845D8
    // 0x80800AE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80800AE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800AEC: lui         $a2, 0x3F40
    ctx->r6 = S32(0X3F40 << 16);
    // 0x80800AF0: ori         $a2, $a2, 0x75F7
    ctx->r6 = ctx->r6 | 0X75F7;
    // 0x80800AF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800AF8: jal         0x800845E0
    // 0x80800AFC: addiu       $a1, $zero, 0x1E0
    ctx->r5 = ADD32(0, 0X1E0);
    _babounce_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80800AFC: addiu       $a1, $zero, 0x1E0
    ctx->r5 = ADD32(0, 0X1E0);
    after_2:
    // 0x80800B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800B08: jr          $ra
    // 0x80800B0C: nop

    return;
    // 0x80800B0C: nop

;}
RECOMP_FUNC void bsbeemain_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800B14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B18: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800B1C: jal         0x80082840
    // 0x80800B20: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsbee_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800B20: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800B24: jal         0x80084600
    // 0x80800B28: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _babounce_entrypoint_9(rdram, ctx);
        goto after_1;
    // 0x80800B28: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800B2C: beq         $v0, $zero, L_80800B38
    if (ctx->r2 == 0) {
        // 0x80800B30: addiu       $t6, $zero, 0x85
        ctx->r14 = ADD32(0, 0X85);
            goto L_80800B38;
    }
    // 0x80800B30: addiu       $t6, $zero, 0x85
    ctx->r14 = ADD32(0, 0X85);
    // 0x80800B34: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80800B38:
    // 0x80800B38: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800B3C: jal         0x8009E5C8
    // 0x80800B40: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80800B40: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80800B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800B4C: jr          $ra
    // 0x80800B50: nop

    return;
    // 0x80800B50: nop

;}
RECOMP_FUNC void bsbeemain_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B54: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800B58: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(74, 0X12A0) << 16);
    // 0x80800B5C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800B60: jr          $ra
    // 0x80800B64: lw          $v0, 0x12A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(74, 0X12A0));
    return;
    // 0x80800B64: lw          $v0, 0x12A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(74, 0X12A0));
;}
RECOMP_FUNC void func_80800B68_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800B6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B70: jal         0x800845D0
    // 0x80800B74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800B74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800B78: jal         0x80082830
    // 0x80800B7C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsbee_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800B7C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800B80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800B88: jr          $ra
    // 0x80800B8C: nop

    return;
    // 0x80800B8C: nop

;}
RECOMP_FUNC void func_80800B90_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800B94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B98: jal         0x80082838
    // 0x80800B9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsbee_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800B9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800BA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800BA4: jal         0x800845D8
    // 0x80800BA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80800BA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80800BAC: lui         $a2, 0x3F40
    ctx->r6 = S32(0X3F40 << 16);
    // 0x80800BB0: ori         $a2, $a2, 0x75F7
    ctx->r6 = ctx->r6 | 0X75F7;
    // 0x80800BB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800BB8: jal         0x800845E0
    // 0x80800BBC: addiu       $a1, $zero, 0x1E0
    ctx->r5 = ADD32(0, 0X1E0);
    _babounce_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80800BBC: addiu       $a1, $zero, 0x1E0
    ctx->r5 = ADD32(0, 0X1E0);
    after_2:
    // 0x80800BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800BC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800BC8: jr          $ra
    // 0x80800BCC: nop

    return;
    // 0x80800BCC: nop

;}
RECOMP_FUNC void func_80800BD0_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800BD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BD8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800BDC: jal         0x80082840
    // 0x80800BE0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsbee_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800BE0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800BE4: jal         0x80084600
    // 0x80800BE8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _babounce_entrypoint_9(rdram, ctx);
        goto after_1;
    // 0x80800BE8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800BEC: beq         $v0, $zero, L_80800BF8
    if (ctx->r2 == 0) {
        // 0x80800BF0: addiu       $t6, $zero, 0x85
        ctx->r14 = ADD32(0, 0X85);
            goto L_80800BF8;
    }
    // 0x80800BF0: addiu       $t6, $zero, 0x85
    ctx->r14 = ADD32(0, 0X85);
    // 0x80800BF4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80800BF8:
    // 0x80800BF8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800BFC: jal         0x8009E5C8
    // 0x80800C00: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80800C00: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80800C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800C0C: jr          $ra
    // 0x80800C10: nop

    return;
    // 0x80800C10: nop

;}
RECOMP_FUNC void bsbeemain_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C14: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800C18: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(74, 0X12B0) << 16);
    // 0x80800C1C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800C20: jr          $ra
    // 0x80800C24: lw          $v0, 0x12B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(74, 0X12B0));
    return;
    // 0x80800C24: lw          $v0, 0x12B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(74, 0X12B0));
;}
RECOMP_FUNC void func_80800C28_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C28: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80800C2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800C30: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800C34: jal         0x8008CABC
    // 0x80800C38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800C38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800C3C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x80800C40: jal         0x800EA068
    // 0x80800C44: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_800EA068(rdram, ctx);
        goto after_1;
    // 0x80800C44: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_1:
    // 0x80800C48: beq         $v0, $zero, L_80800C60
    if (ctx->r2 == 0) {
        // 0x80800C4C: sw          $v0, 0x160($s0)
        MEM_W(0X160, ctx->r16) = ctx->r2;
            goto L_80800C60;
    }
    // 0x80800C4C: sw          $v0, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r2;
    // 0x80800C50: jal         0x800FC660
    // 0x80800C54: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_800FC660(rdram, ctx);
        goto after_2;
    // 0x80800C54: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_2:
    // 0x80800C58: b           L_80800CA0
    // 0x80800C5C: nop

        goto L_80800CA0;
    // 0x80800C5C: nop

L_80800C60:
    // 0x80800C60: jal         0x80085208
    // 0x80800C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x80800C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800C68: jal         0x8008E944
    // 0x80800C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_4;
    // 0x80800C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800C70: jal         0x8009514C
    // 0x80800C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009514C(rdram, ctx);
        goto after_5;
    // 0x80800C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C7C: jal         0x800A4DA4
    // 0x80800C80: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800A4DA4(rdram, ctx);
        goto after_6;
    // 0x80800C80: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_6:
    // 0x80800C84: jal         0x800A4CA8
    // 0x80800C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_7;
    // 0x80800C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800C8C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800C90: jal         0x80089288
    // 0x80800C94: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    _ncbadie_entrypoint_3(rdram, ctx);
        goto after_8;
    // 0x80800C94: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_8:
    // 0x80800C98: jal         0x800A0180
    // 0x80800C9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A0180(rdram, ctx);
        goto after_9;
    // 0x80800C9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_80800CA0:
    // 0x80800CA0: jal         0x80082838
    // 0x80800CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsbee_entrypoint_1(rdram, ctx);
        goto after_10;
    // 0x80800CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800CA8: jal         0x8008AF24
    // 0x80800CAC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_8008AF24(rdram, ctx);
        goto after_11;
    // 0x80800CAC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_11:
    // 0x80800CB0: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80800CB4: jal         0x8008B1A0
    // 0x80800CB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_12;
    // 0x80800CB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x80800CBC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80800CC0: jal         0x8008AED4
    // 0x80800CC4: addiu       $a1, $zero, 0x1E1
    ctx->r5 = ADD32(0, 0X1E1);
    func_8008AED4(rdram, ctx);
        goto after_13;
    // 0x80800CC4: addiu       $a1, $zero, 0x1E1
    ctx->r5 = ADD32(0, 0X1E1);
    after_13:
    // 0x80800CC8: lui         $a2, 0x3ECB
    ctx->r6 = S32(0X3ECB << 16);
    // 0x80800CCC: ori         $a2, $a2, 0xF28
    ctx->r6 = ctx->r6 | 0XF28;
    // 0x80800CD0: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80800CD4: jal         0x8008B1D4
    // 0x80800CD8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_14;
    // 0x80800CD8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_14:
    // 0x80800CDC: lui         $a1, 0x3FD9
    ctx->r5 = S32(0X3FD9 << 16);
    // 0x80800CE0: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800CE4: jal         0x8008B1BC
    // 0x80800CE8: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_8008B1BC(rdram, ctx);
        goto after_15;
    // 0x80800CE8: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_15:
    // 0x80800CEC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80800CF0: jal         0x8008B134
    // 0x80800CF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_16;
    // 0x80800CF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x80800CF8: jal         0x8008B064
    // 0x80800CFC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_8008B064(rdram, ctx);
        goto after_17;
    // 0x80800CFC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_17:
    // 0x80800D00: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80800D04: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800D10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800D14: jal         0x8009FFD8
    // 0x80800D18: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_18;
    // 0x80800D18: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_18:
    // 0x80800D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D20: jal         0x8009C128
    // 0x80800D24: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_8009C128(rdram, ctx);
        goto after_19;
    // 0x80800D24: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_19:
    // 0x80800D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D2C: jal         0x800A32C4
    // 0x80800D30: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_800A32C4(rdram, ctx);
        goto after_20;
    // 0x80800D30: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_20:
    // 0x80800D34: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80800D38: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80800D3C: jal         0x800F1E6C
    // 0x80800D40: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    func_800F1E6C(rdram, ctx);
        goto after_21;
    // 0x80800D40: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_21:
    // 0x80800D44: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800D48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800D4C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80800D50: jal         0x800136E4
    // 0x80800D54: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_800136E4(rdram, ctx);
        goto after_22;
    // 0x80800D54: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_22:
    // 0x80800D58: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800D5C: jal         0x8009C914
    // 0x80800D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_23;
    // 0x80800D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80800D64: jal         0x8009C974
    // 0x80800D68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_24;
    // 0x80800D68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x80800D6C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80800D70: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800D74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D78: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800D7C: jal         0x8009B9B0
    // 0x80800D80: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    func_8009B9B0(rdram, ctx);
        goto after_25;
    // 0x80800D80: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    after_25:
    // 0x80800D84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D88: jal         0x8009B9C0
    // 0x80800D8C: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    func_8009B9C0(rdram, ctx);
        goto after_26;
    // 0x80800D8C: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    after_26:
    // 0x80800D90: jal         0x8009BB00
    // 0x80800D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_27;
    // 0x80800D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x80800D98: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DA0: jal         0x8009BA68
    // 0x80800DA4: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    func_8009BA68(rdram, ctx);
        goto after_28;
    // 0x80800DA4: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    after_28:
    // 0x80800DA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DAC: jal         0x8009BA58
    // 0x80800DB0: lui         $a1, 0x43D2
    ctx->r5 = S32(0X43D2 << 16);
    func_8009BA58(rdram, ctx);
        goto after_29;
    // 0x80800DB0: lui         $a1, 0x43D2
    ctx->r5 = S32(0X43D2 << 16);
    after_29:
    // 0x80800DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DB8: jal         0x8009BCB4
    // 0x80800DBC: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_30;
    // 0x80800DBC: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    after_30:
    // 0x80800DC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DC4: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800DC8: jal         0x8009BFE4
    // 0x80800DCC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_31;
    // 0x80800DCC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_31:
    // 0x80800DD0: lui         $a1, 0x3FE6
    ctx->r5 = S32(0X3FE6 << 16);
    // 0x80800DD4: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80800DD8: jal         0x8009D820
    // 0x80800DDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D820(rdram, ctx);
        goto after_32;
    // 0x80800DDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x80800DE0: lui         $a2, 0x4039
    ctx->r6 = S32(0X4039 << 16);
    // 0x80800DE4: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DEC: jal         0x80085338
    // 0x80800DF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_set(rdram, ctx);
        goto after_33;
    // 0x80800DF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_33:
    // 0x80800DF4: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x80800DF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800DFC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800E00: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80800E04: jr          $ra
    // 0x80800E08: nop

    return;
    // 0x80800E08: nop

;}
RECOMP_FUNC void func_80800E0C_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800E10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800E14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800E18: jal         0x80082840
    // 0x80800E1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bsbee_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800E1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E24: jal         0x8009B9B0
    // 0x80800E28: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_1;
    // 0x80800E28: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_1:
    // 0x80800E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E30: jal         0x8009D3A8
    // 0x80800E34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_2;
    // 0x80800E34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800E38: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x80800E3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800E40: beq         $v0, $zero, L_80800E6C
    if (ctx->r2 == 0) {
        // 0x80800E44: nop
    
            goto L_80800E6C;
    }
    // 0x80800E44: nop

    // 0x80800E48: beq         $v0, $at, L_80800ED0
    if (ctx->r2 == ctx->r1) {
        // 0x80800E4C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800ED0;
    }
    // 0x80800E4C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800E50: beq         $v0, $at, L_80800F24
    if (ctx->r2 == ctx->r1) {
        // 0x80800E54: addiu       $t8, $zero, 0x3
        ctx->r24 = ADD32(0, 0X3);
            goto L_80800F24;
    }
    // 0x80800E54: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80800E58: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800E5C: beql        $v0, $at, L_80800F30
    if (ctx->r2 == ctx->r1) {
        // 0x80800E60: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_80800F30;
    }
    goto skip_0;
    // 0x80800E60: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_0:
    // 0x80800E64: b           L_80800F5C
    // 0x80800E68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800F5C;
    // 0x80800E68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800E6C:
    // 0x80800E6C: jal         0x8008E078
    // 0x80800E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_3;
    // 0x80800E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800E74: beq         $v0, $zero, L_80800F58
    if (ctx->r2 == 0) {
        // 0x80800E78: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800F58;
    }
    // 0x80800E78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E7C: lui         $a1, 0x3F3E
    ctx->r5 = S32(0X3F3E << 16);
    // 0x80800E80: jal         0x8008CED4
    // 0x80800E84: ori         $a1, $a1, 0xCBFB
    ctx->r5 = ctx->r5 | 0XCBFB;
    func_8008CED4(rdram, ctx);
        goto after_4;
    // 0x80800E84: ori         $a1, $a1, 0xCBFB
    ctx->r5 = ctx->r5 | 0XCBFB;
    after_4:
    // 0x80800E88: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80800E8C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800E90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E94: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x80800E98: jal         0x8009DF18
    // 0x80800E9C: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_5;
    // 0x80800E9C: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_5:
    // 0x80800EA0: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x80800EA4: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EAC: addiu       $a1, $zero, 0x428
    ctx->r5 = ADD32(0, 0X428);
    // 0x80800EB0: jal         0x8009DF18
    // 0x80800EB4: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_6;
    // 0x80800EB4: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_6:
    // 0x80800EB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EBC: jal         0x8009BA58
    // 0x80800EC0: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    func_8009BA58(rdram, ctx);
        goto after_7;
    // 0x80800EC0: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    after_7:
    // 0x80800EC4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800EC8: b           L_80800F58
    // 0x80800ECC: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
        goto L_80800F58;
    // 0x80800ECC: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_80800ED0:
    // 0x80800ED0: jal         0x8008E078
    // 0x80800ED4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_8;
    // 0x80800ED4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800ED8: beq         $v0, $zero, L_80800F58
    if (ctx->r2 == 0) {
        // 0x80800EDC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800F58;
    }
    // 0x80800EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EE0: jal         0x8008CED4
    // 0x80800EE4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CED4(rdram, ctx);
        goto after_9;
    // 0x80800EE4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_9:
    // 0x80800EE8: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80800EEC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800EF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EF4: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x80800EF8: jal         0x8009DF18
    // 0x80800EFC: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_10;
    // 0x80800EFC: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_10:
    // 0x80800F00: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x80800F04: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800F08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F0C: addiu       $a1, $zero, 0x428
    ctx->r5 = ADD32(0, 0X428);
    // 0x80800F10: jal         0x8009DF18
    // 0x80800F14: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_11;
    // 0x80800F14: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_11:
    // 0x80800F18: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80800F1C: b           L_80800F58
    // 0x80800F20: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
        goto L_80800F58;
    // 0x80800F20: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_80800F24:
    // 0x80800F24: b           L_80800F58
    // 0x80800F28: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
        goto L_80800F58;
    // 0x80800F28: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
    // 0x80800F2C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_80800F30:
    // 0x80800F30: lwc1        $f0, 0x16C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800F34: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80800F38: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80800F3C: nop

    // 0x80800F40: bc1fl       L_80800F5C
    if (!c1cs) {
        // 0x80800F44: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800F5C;
    }
    goto skip_1;
    // 0x80800F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800F48: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800F4C: jal         0x800F0E00
    // 0x80800F50: sub.s       $f14, $f0, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f4.fl;
    func_800F0E00(rdram, ctx);
        goto after_12;
    // 0x80800F50: sub.s       $f14, $f0, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f4.fl;
    after_12:
    // 0x80800F54: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
L_80800F58:
    // 0x80800F58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800F5C:
    // 0x80800F5C: jal         0x800852F0
    // 0x80800F60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_13;
    // 0x80800F60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x80800F64: beql        $v0, $zero, L_80800F9C
    if (ctx->r2 == 0) {
        // 0x80800F68: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800F9C;
    }
    goto skip_2;
    // 0x80800F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80800F6C: lw          $t9, 0x160($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X160);
    // 0x80800F70: addiu       $a0, $zero, 0x2C4
    ctx->r4 = ADD32(0, 0X2C4);
    // 0x80800F74: addiu       $a1, $zero, 0x71
    ctx->r5 = ADD32(0, 0X71);
    // 0x80800F78: beq         $t9, $zero, L_80800F90
    if (ctx->r25 == 0) {
        // 0x80800F7C: nop
    
            goto L_80800F90;
    }
    // 0x80800F7C: nop

    // 0x80800F80: jal         0x80101180
    // 0x80800F84: lw          $a2, 0x184($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X184);
    func_80101180(rdram, ctx);
        goto after_14;
    // 0x80800F84: lw          $a2, 0x184($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X184);
    after_14:
    // 0x80800F88: b           L_80800F9C
    // 0x80800F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800F9C;
    // 0x80800F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800F90:
    // 0x80800F90: jal         0x80085200
    // 0x80800F94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_0(rdram, ctx);
        goto after_15;
    // 0x80800F94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800F98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800F9C:
    // 0x80800F9C: jal         0x8009E5C8
    // 0x80800FA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_16;
    // 0x80800FA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x80800FA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800FA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800FAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800FB0: jr          $ra
    // 0x80800FB4: nop

    return;
    // 0x80800FB4: nop

;}
RECOMP_FUNC void func_80800FB8_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800FB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800FBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800FC0: jal         0x8009BC6C
    // 0x80800FC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x80800FC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800FC8: jal         0x800A4E30
    // 0x80800FCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4E30(rdram, ctx);
        goto after_1;
    // 0x80800FCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800FD0: jal         0x800951B4
    // 0x80800FD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800951B4(rdram, ctx);
        goto after_2;
    // 0x80800FD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800FD8: jal         0x80082830
    // 0x80800FDC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsbee_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x80800FDC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80800FE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800FE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800FE8: jr          $ra
    // 0x80800FEC: nop

    return;
    // 0x80800FEC: nop

;}
RECOMP_FUNC void func_80800FF0_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800FF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800FF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800FF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800FFC: jal         0x8009E6EC
    // 0x80801000: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80801000: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801004: addiu       $at, $zero, 0x83
    ctx->r1 = ADD32(0, 0X83);
    // 0x80801008: bne         $v0, $at, L_80801050
    if (ctx->r2 != ctx->r1) {
        // 0x8080100C: nop
    
            goto L_80801050;
    }
    // 0x8080100C: nop

    // 0x80801010: jal         0x80099A34
    // 0x80801014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099A34(rdram, ctx);
        goto after_1;
    // 0x80801014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801018: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080101C: jal         0x8009BDAC
    // 0x80801020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BDAC(rdram, ctx);
        goto after_2;
    // 0x80801020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801028: jal         0x80093370
    // 0x8080102C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80093370(rdram, ctx);
        goto after_3;
    // 0x8080102C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80801030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801034: jal         0x8009E5C8
    // 0x80801038: addiu       $a1, $zero, 0x85
    ctx->r5 = ADD32(0, 0X85);
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x80801038: addiu       $a1, $zero, 0x85
    ctx->r5 = ADD32(0, 0X85);
    after_4:
    // 0x8080103C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801040: jal         0x8009E830
    // 0x80801044: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_5;
    // 0x80801044: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x80801048: b           L_8080105C
    // 0x8080104C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080105C;
    // 0x8080104C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80801050:
    // 0x80801050: jal         0x80085258
    // 0x80801054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_11(rdram, ctx);
        goto after_6;
    // 0x80801054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80801058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080105C:
    // 0x8080105C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801060: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801064: jr          $ra
    // 0x80801068: nop

    return;
    // 0x80801068: nop

;}
RECOMP_FUNC void bsbeemain_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080106C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801070: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(74, 0X12C0) << 16);
    // 0x80801074: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801078: jr          $ra
    // 0x8080107C: lw          $v0, 0x12C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(74, 0X12C0));
    return;
    // 0x8080107C: lw          $v0, 0x12C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(74, 0X12C0));
;}
RECOMP_FUNC void func_80801080_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801080: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801088: jal         0x80082838
    // 0x8080108C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsbee_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080108C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801090: jal         0x800839C8
    // 0x80801094: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x80801094: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080109C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808010A0: jr          $ra
    // 0x808010A4: nop

    return;
    // 0x808010A4: nop

;}
RECOMP_FUNC void func_808010A8_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808010AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808010B0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808010B4: jal         0x80082840
    // 0x808010B8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsbee_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808010B8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x808010BC: jal         0x800839E8
    // 0x808010C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_1;
    // 0x808010C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808010C4: beql        $v0, $zero, L_808010DC
    if (ctx->r2 == 0) {
        // 0x808010C8: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808010DC;
    }
    goto skip_0;
    // 0x808010C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x808010CC: jal         0x800839B0
    // 0x808010D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsrest_entrypoint_13(rdram, ctx);
        goto after_2;
    // 0x808010D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x808010D4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x808010D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_808010DC:
    // 0x808010DC: jal         0x8009E5C8
    // 0x808010E0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x808010E0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x808010E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808010E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808010EC: jr          $ra
    // 0x808010F0: nop

    return;
    // 0x808010F0: nop

;}
RECOMP_FUNC void func_808010F4_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808010F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808010FC: jal         0x800839B8
    // 0x80801100: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80801100: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801104: jal         0x80082830
    // 0x80801108: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsbee_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80801108: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080110C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801114: jr          $ra
    // 0x80801118: nop

    return;
    // 0x80801118: nop

;}
RECOMP_FUNC void bsbeemain_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080111C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801120: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(74, 0X12D0) << 16);
    // 0x80801124: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801128: jr          $ra
    // 0x8080112C: lw          $v0, 0x12D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(74, 0X12D0));
    return;
    // 0x8080112C: lw          $v0, 0x12D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(74, 0X12D0));
;}
RECOMP_FUNC void func_80801130_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801130: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801134: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801138: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080113C: jal         0x80082838
    // 0x80801140: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bsbee_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80801140: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801144: jal         0x80082FE0
    // 0x80801148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80801148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080114C: jal         0x80084800
    // 0x80801150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x80801150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801154: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80801158: bne         $v0, $at, L_80801178
    if (ctx->r2 != ctx->r1) {
        // 0x8080115C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801178;
    }
    // 0x8080115C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801160: jal         0x80084CC8
    // 0x80801164: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bafpctrl_entrypoint_10(rdram, ctx);
        goto after_3;
    // 0x80801164: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80801168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080116C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80801170: jal         0x800947EC
    // 0x80801174: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_4;
    // 0x80801174: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
L_80801178:
    // 0x80801178: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080117C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801180: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801184: jr          $ra
    // 0x80801188: nop

    return;
    // 0x80801188: nop

;}
RECOMP_FUNC void func_8080118C_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080118C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801190: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801194: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801198: jal         0x80082840
    // 0x8080119C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bsbee_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x8080119C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808011A0: jal         0x80082FE8
    // 0x808011A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x808011A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808011A8: jal         0x80084800
    // 0x808011AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x808011AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808011B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808011B4: bne         $v0, $at, L_808011D4
    if (ctx->r2 != ctx->r1) {
        // 0x808011B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808011D4;
    }
    // 0x808011B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011BC: jal         0x800919F4
    // 0x808011C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_3;
    // 0x808011C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x808011C4: beql        $v0, $zero, L_808011D8
    if (ctx->r2 == 0) {
        // 0x808011C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808011D8;
    }
    goto skip_0;
    // 0x808011C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808011CC: jal         0x80084550
    // 0x808011D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babee_entrypoint_2(rdram, ctx);
        goto after_4;
    // 0x808011D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_808011D4:
    // 0x808011D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808011D8:
    // 0x808011D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808011DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808011E0: jr          $ra
    // 0x808011E4: nop

    return;
    // 0x808011E4: nop

;}
RECOMP_FUNC void func_808011E8_bsbeemain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808011EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808011F0: jal         0x80084800
    // 0x808011F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _badrone_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x808011F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808011F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808011FC: bne         $v0, $at, L_80801210
    if (ctx->r2 != ctx->r1) {
        // 0x80801200: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80801210;
    }
    // 0x80801200: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801204: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80801208: jal         0x800947EC
    // 0x8080120C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_1;
    // 0x8080120C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_80801210:
    // 0x80801210: jal         0x80082FF0
    // 0x80801214: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80801214: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80801218: jal         0x80082830
    // 0x8080121C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsbee_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x8080121C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80801220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801228: jr          $ra
    // 0x8080122C: nop

    return;
    // 0x8080122C: nop

;}
RECOMP_FUNC void bsbeemain_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801230: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801234: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(74, 0X12E0) << 16);
    // 0x80801238: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080123C: jr          $ra
    // 0x80801240: lw          $v0, 0x12E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(74, 0X12E0));
    return;
    // 0x80801240: lw          $v0, 0x12E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(74, 0X12E0));
    // 0x80801244: nop

    // 0x80801248: nop

    // 0x8080124C: nop

;}
RECOMP_FUNC void bsbeggass_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800010: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    // 0x80800014: jal         0x8008CDB8
    // 0x80800018: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CDB8(rdram, ctx);
        goto after_0;
    // 0x80800018: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_0:
    // 0x8080001C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80800020: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800028: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080002C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800030: jal         0x8009FFD8
    // 0x80800034: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800034: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80800038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080003C: lui         $a1, 0x43AF
    ctx->r5 = S32(0X43AF << 16);
    // 0x80800040: jal         0x8009C99C
    // 0x80800044: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    func_8009C99C(rdram, ctx);
        goto after_2;
    // 0x80800044: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    after_2:
    // 0x80800048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080004C: jal         0x8009B9B0
    // 0x80800050: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80800050: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800058: jal         0x800A0CDC
    // 0x8080005C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CDC(rdram, ctx);
        goto after_4;
    // 0x8080005C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80800060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800064: sw          $v0, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r2;
    // 0x80800068: sw          $v0, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r2;
    // 0x8080006C: jal         0x80094510
    // 0x80800070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094510(rdram, ctx);
        goto after_5;
    // 0x80800070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800074: sw          $v0, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->r2;
    // 0x80800078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080007C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80800080: jal         0x80098140
    // 0x80800084: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098140(rdram, ctx);
        goto after_6;
    // 0x80800084: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80800088: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080008C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800090: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800094: jr          $ra
    // 0x80800098: nop

    return;
    // 0x80800098: nop

;}
RECOMP_FUNC void bsbeggass_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080009C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808000A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000AC: jal         0x8008CABC
    // 0x808000B0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808000B0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x808000B4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x808000B8: jal         0x80094BC0
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094BC0(rdram, ctx);
        goto after_1;
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808000C0: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x808000C4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x808000C8: jal         0x80097BFC
    // 0x808000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097BFC(rdram, ctx);
        goto after_2;
    // 0x808000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808000D0: beql        $v0, $zero, L_80800108
    if (ctx->r2 == 0) {
        // 0x808000D4: lw          $t7, 0x24($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X24);
            goto L_80800108;
    }
    goto skip_0;
    // 0x808000D4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x808000D8: jal         0x80094B14
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094B14(rdram, ctx);
        goto after_3;
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808000E0: beq         $v0, $zero, L_80800104
    if (ctx->r2 == 0) {
        // 0x808000E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800104;
    }
    // 0x808000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E8: jal         0x800944E0
    // 0x808000EC: lw          $a1, 0x164($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X164);
    func_800944E0(rdram, ctx);
        goto after_4;
    // 0x808000EC: lw          $a1, 0x164($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X164);
    after_4:
    // 0x808000F0: lw          $a0, 0x15C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X15C);
    // 0x808000F4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x808000F8: jal         0x800F1418
    // 0x808000FC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_800F1418(rdram, ctx);
        goto after_5;
    // 0x808000FC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_5:
    // 0x80800100: sw          $v0, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r2;
L_80800104:
    // 0x80800104: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_80800108:
    // 0x80800108: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8080010C: lui         $a1, 0x3EC4
    ctx->r5 = S32(0X3EC4 << 16);
    // 0x80800110: beq         $t7, $zero, L_8080019C
    if (ctx->r15 == 0) {
        // 0x80800114: nop
    
            goto L_8080019C;
    }
    // 0x80800114: nop

    // 0x80800118: jal         0x8008B348
    // 0x8080011C: ori         $a1, $a1, 0x7454
    ctx->r5 = ctx->r5 | 0X7454;
    func_8008B348(rdram, ctx);
        goto after_6;
    // 0x8080011C: ori         $a1, $a1, 0x7454
    ctx->r5 = ctx->r5 | 0X7454;
    after_6:
    // 0x80800120: beql        $v0, $zero, L_80800150
    if (ctx->r2 == 0) {
        // 0x80800124: lui         $a1, 0x3EFA
        ctx->r5 = S32(0X3EFA << 16);
            goto L_80800150;
    }
    goto skip_1;
    // 0x80800124: lui         $a1, 0x3EFA
    ctx->r5 = S32(0X3EFA << 16);
    skip_1:
    // 0x80800128: jal         0x80084A80
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baeggsetup_entrypoint_9(rdram, ctx);
        goto after_7;
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800134: lw          $a1, 0x164($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X164);
    // 0x80800138: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x8080013C: jal         0x80084A48
    // 0x80800140: lui         $a3, 0xC190
    ctx->r7 = S32(0XC190 << 16);
    _baeggsetup_entrypoint_2(rdram, ctx);
        goto after_8;
    // 0x80800140: lui         $a3, 0xC190
    ctx->r7 = S32(0XC190 << 16);
    after_8:
    // 0x80800144: jal         0x800C6DA0
    // 0x80800148: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    func_800C6DA0(rdram, ctx);
        goto after_9;
    // 0x80800148: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    after_9:
    // 0x8080014C: lui         $a1, 0x3EFA
    ctx->r5 = S32(0X3EFA << 16);
L_80800150:
    // 0x80800150: ori         $a1, $a1, 0x1CAC
    ctx->r5 = ctx->r5 | 0X1CAC;
    // 0x80800154: jal         0x8008B348
    // 0x80800158: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_10;
    // 0x80800158: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_10:
    // 0x8080015C: beq         $v0, $zero, L_8080019C
    if (ctx->r2 == 0) {
        // 0x80800160: nop
    
            goto L_8080019C;
    }
    // 0x80800160: nop

    // 0x80800164: lw          $t8, 0x160($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X160);
    // 0x80800168: lw          $t9, 0x15C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X15C);
    // 0x8080016C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800170: lui         $a1, 0x3EB2
    ctx->r5 = S32(0X3EB2 << 16);
    // 0x80800174: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80800178: beq         $at, $zero, L_8080019C
    if (ctx->r1 == 0) {
        // 0x8080017C: nop
    
            goto L_8080019C;
    }
    // 0x8080017C: nop

    // 0x80800180: jal         0x8008B24C
    // 0x80800184: ori         $a1, $a1, 0xB021
    ctx->r5 = ctx->r5 | 0XB021;
    func_8008B24C(rdram, ctx);
        goto after_11;
    // 0x80800184: ori         $a1, $a1, 0xB021
    ctx->r5 = ctx->r5 | 0XB021;
    after_11:
    // 0x80800188: jal         0x8008B064
    // 0x8080018C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B064(rdram, ctx);
        goto after_12;
    // 0x8080018C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_12:
    // 0x80800190: lw          $t0, 0x160($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X160);
    // 0x80800194: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80800198: sw          $t1, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r9;
L_8080019C:
    // 0x8080019C: jal         0x8008DD04
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_13;
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808001A4: beq         $v0, $zero, L_808001B4
    if (ctx->r2 == 0) {
        // 0x808001A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001B4;
    }
    // 0x808001A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001AC: addiu       $t2, $zero, 0x2F
    ctx->r10 = ADD32(0, 0X2F);
    // 0x808001B0: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
L_808001B4:
    // 0x808001B4: jal         0x800919F4
    // 0x808001B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_14;
    // 0x808001B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x808001BC: beq         $v0, $zero, L_8080020C
    if (ctx->r2 == 0) {
        // 0x808001C0: nop
    
            goto L_8080020C;
    }
    // 0x808001C0: nop

    // 0x808001C4: jal         0x8008B324
    // 0x808001C8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B324(rdram, ctx);
        goto after_15;
    // 0x808001C8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_15:
    // 0x808001CC: beq         $v0, $zero, L_808001D8
    if (ctx->r2 == 0) {
        // 0x808001D0: addiu       $t3, $zero, 0x7
        ctx->r11 = ADD32(0, 0X7);
            goto L_808001D8;
    }
    // 0x808001D0: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x808001D4: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
L_808001D8:
    // 0x808001D8: jal         0x8008B2B4
    // 0x808001DC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B2B4(rdram, ctx);
        goto after_16;
    // 0x808001DC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_16:
    // 0x808001E0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(75, 0X290) << 16);
    // 0x808001E4: lwc1        $f4, 0x290($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(75, 0X290));
    // 0x808001E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001EC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x808001F0: nop

    // 0x808001F4: bc1fl       L_80800224
    if (!c1cs) {
        // 0x808001F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800224;
    }
    goto skip_2;
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x808001FC: jal         0x80082F78
    // 0x80800200: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    _bscrouch_entrypoint_4(rdram, ctx);
        goto after_17;
    // 0x80800200: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_17:
    // 0x80800204: b           L_80800220
    // 0x80800208: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
        goto L_80800220;
    // 0x80800208: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_8080020C:
    // 0x8080020C: jal         0x8008B324
    // 0x80800210: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B324(rdram, ctx);
        goto after_18;
    // 0x80800210: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_18:
    // 0x80800214: beq         $v0, $zero, L_80800220
    if (ctx->r2 == 0) {
        // 0x80800218: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_80800220;
    }
    // 0x80800218: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8080021C: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
L_80800220:
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800224:
    // 0x80800224: jal         0x8009E5C8
    // 0x80800228: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_19;
    // 0x80800228: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_19:
    // 0x8080022C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800230: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800234: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800238: jr          $ra
    // 0x8080023C: nop

    return;
    // 0x8080023C: nop

;}
RECOMP_FUNC void bsbeggass_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800240: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800244: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800248: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080024C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80800250: jal         0x80098140
    // 0x80800254: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098140(rdram, ctx);
        goto after_0;
    // 0x80800254: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80800258: jal         0x8009BC6C
    // 0x8080025C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BC6C(rdram, ctx);
        goto after_1;
    // 0x8080025C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800260: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800264: jal         0x800A0CDC
    // 0x80800268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CDC(rdram, ctx);
        goto after_2;
    // 0x80800268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8080026C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800270: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800274: jr          $ra
    // 0x80800278: nop

    return;
    // 0x80800278: nop

;}
RECOMP_FUNC void bsbeggass_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080027C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800280: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(75, 0X2A0) << 16);
    // 0x80800284: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800288: jr          $ra
    // 0x8080028C: lw          $v0, 0x2A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(75, 0X2A0));
    return;
    // 0x8080028C: lw          $v0, 0x2A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(75, 0X2A0));
;}
RECOMP_FUNC void bsbegghead_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800010: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80800014: jal         0x8008CDB8
    // 0x80800018: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CDB8(rdram, ctx);
        goto after_0;
    // 0x80800018: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_0:
    // 0x8080001C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80800020: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800028: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080002C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800030: jal         0x8009FFD8
    // 0x80800034: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800034: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80800038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080003C: lui         $a1, 0x43AF
    ctx->r5 = S32(0X43AF << 16);
    // 0x80800040: jal         0x8009C99C
    // 0x80800044: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    func_8009C99C(rdram, ctx);
        goto after_2;
    // 0x80800044: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    after_2:
    // 0x80800048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080004C: jal         0x8009B9B0
    // 0x80800050: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80800050: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800058: jal         0x800A0CF4
    // 0x8080005C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_4;
    // 0x8080005C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80800060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800064: sw          $v0, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r2;
    // 0x80800068: sw          $v0, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r2;
    // 0x8080006C: jal         0x80094510
    // 0x80800070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094510(rdram, ctx);
        goto after_5;
    // 0x80800070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800074: sw          $v0, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->r2;
    // 0x80800078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080007C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800080: jal         0x80098140
    // 0x80800084: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098140(rdram, ctx);
        goto after_6;
    // 0x80800084: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80800088: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080008C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800090: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800094: jr          $ra
    // 0x80800098: nop

    return;
    // 0x80800098: nop

;}
RECOMP_FUNC void bsbegghead_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080009C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808000A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000AC: jal         0x8008CABC
    // 0x808000B0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808000B0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x808000B4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x808000B8: jal         0x80094BC0
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094BC0(rdram, ctx);
        goto after_1;
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808000C0: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x808000C4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x808000C8: jal         0x80097C3C
    // 0x808000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097C3C(rdram, ctx);
        goto after_2;
    // 0x808000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808000D0: beql        $v0, $zero, L_80800108
    if (ctx->r2 == 0) {
        // 0x808000D4: lw          $t7, 0x24($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X24);
            goto L_80800108;
    }
    goto skip_0;
    // 0x808000D4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x808000D8: jal         0x80094B14
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094B14(rdram, ctx);
        goto after_3;
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808000E0: beq         $v0, $zero, L_80800104
    if (ctx->r2 == 0) {
        // 0x808000E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800104;
    }
    // 0x808000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E8: jal         0x800944E0
    // 0x808000EC: lw          $a1, 0x164($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X164);
    func_800944E0(rdram, ctx);
        goto after_4;
    // 0x808000EC: lw          $a1, 0x164($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X164);
    after_4:
    // 0x808000F0: lw          $a0, 0x15C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X15C);
    // 0x808000F4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x808000F8: jal         0x800F1418
    // 0x808000FC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_800F1418(rdram, ctx);
        goto after_5;
    // 0x808000FC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_5:
    // 0x80800100: sw          $v0, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r2;
L_80800104:
    // 0x80800104: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_80800108:
    // 0x80800108: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8080010C: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80800110: beq         $t7, $zero, L_808001D0
    if (ctx->r15 == 0) {
        // 0x80800114: nop
    
            goto L_808001D0;
    }
    // 0x80800114: nop

    // 0x80800118: jal         0x8008B348
    // 0x8080011C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_8008B348(rdram, ctx);
        goto after_6;
    // 0x8080011C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_6:
    // 0x80800120: beql        $v0, $zero, L_80800134
    if (ctx->r2 == 0) {
        // 0x80800124: lui         $a1, 0x3ECC
        ctx->r5 = S32(0X3ECC << 16);
            goto L_80800134;
    }
    goto skip_1;
    // 0x80800124: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    skip_1:
    // 0x80800128: jal         0x80084A88
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baeggsetup_entrypoint_10(rdram, ctx);
        goto after_7;
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800130: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
L_80800134:
    // 0x80800134: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800138: jal         0x8008B348
    // 0x8080013C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_8;
    // 0x8080013C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_8:
    // 0x80800140: beq         $v0, $zero, L_80800150
    if (ctx->r2 == 0) {
        // 0x80800144: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800150;
    }
    // 0x80800144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800148: jal         0x80084A78
    // 0x8080014C: lw          $a1, 0x164($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X164);
    _baeggsetup_entrypoint_8(rdram, ctx);
        goto after_9;
    // 0x8080014C: lw          $a1, 0x164($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X164);
    after_9:
L_80800150:
    // 0x80800150: lui         $a1, 0x3EF0
    ctx->r5 = S32(0X3EF0 << 16);
    // 0x80800154: ori         $a1, $a1, 0xD845
    ctx->r5 = ctx->r5 | 0XD845;
    // 0x80800158: jal         0x8008B348
    // 0x8080015C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_10;
    // 0x8080015C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_10:
    // 0x80800160: beq         $v0, $zero, L_80800180
    if (ctx->r2 == 0) {
        // 0x80800164: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800180;
    }
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800168: lw          $a1, 0x164($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X164);
    // 0x8080016C: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x80800170: jal         0x80084A60
    // 0x80800174: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    _baeggsetup_entrypoint_5(rdram, ctx);
        goto after_11;
    // 0x80800174: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    after_11:
    // 0x80800178: jal         0x800C6DA0
    // 0x8080017C: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    func_800C6DA0(rdram, ctx);
        goto after_12;
    // 0x8080017C: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    after_12:
L_80800180:
    // 0x80800180: lui         $a1, 0x3F17
    ctx->r5 = S32(0X3F17 << 16);
    // 0x80800184: ori         $a1, $a1, 0x86C2
    ctx->r5 = ctx->r5 | 0X86C2;
    // 0x80800188: jal         0x8008B348
    // 0x8080018C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_13;
    // 0x8080018C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_13:
    // 0x80800190: beq         $v0, $zero, L_808001D0
    if (ctx->r2 == 0) {
        // 0x80800194: nop
    
            goto L_808001D0;
    }
    // 0x80800194: nop

    // 0x80800198: lw          $t8, 0x160($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X160);
    // 0x8080019C: lw          $t9, 0x15C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X15C);
    // 0x808001A0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808001A4: lui         $a1, 0x3EC6
    ctx->r5 = S32(0X3EC6 << 16);
    // 0x808001A8: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x808001AC: beq         $at, $zero, L_808001D0
    if (ctx->r1 == 0) {
        // 0x808001B0: nop
    
            goto L_808001D0;
    }
    // 0x808001B0: nop

    // 0x808001B4: jal         0x8008B24C
    // 0x808001B8: ori         $a1, $a1, 0x8DB9
    ctx->r5 = ctx->r5 | 0X8DB9;
    func_8008B24C(rdram, ctx);
        goto after_14;
    // 0x808001B8: ori         $a1, $a1, 0x8DB9
    ctx->r5 = ctx->r5 | 0X8DB9;
    after_14:
    // 0x808001BC: jal         0x8008B064
    // 0x808001C0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B064(rdram, ctx);
        goto after_15;
    // 0x808001C0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_15:
    // 0x808001C4: lw          $t0, 0x160($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X160);
    // 0x808001C8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x808001CC: sw          $t1, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r9;
L_808001D0:
    // 0x808001D0: jal         0x8008DD04
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_16;
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808001D8: beq         $v0, $zero, L_808001E8
    if (ctx->r2 == 0) {
        // 0x808001DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001E8;
    }
    // 0x808001DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E0: addiu       $t2, $zero, 0x2F
    ctx->r10 = ADD32(0, 0X2F);
    // 0x808001E4: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
L_808001E8:
    // 0x808001E8: jal         0x800919F4
    // 0x808001EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_17;
    // 0x808001EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x808001F0: beq         $v0, $zero, L_80800240
    if (ctx->r2 == 0) {
        // 0x808001F4: nop
    
            goto L_80800240;
    }
    // 0x808001F4: nop

    // 0x808001F8: jal         0x8008B324
    // 0x808001FC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B324(rdram, ctx);
        goto after_18;
    // 0x808001FC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_18:
    // 0x80800200: beq         $v0, $zero, L_8080020C
    if (ctx->r2 == 0) {
        // 0x80800204: addiu       $t3, $zero, 0x7
        ctx->r11 = ADD32(0, 0X7);
            goto L_8080020C;
    }
    // 0x80800204: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x80800208: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
L_8080020C:
    // 0x8080020C: jal         0x8008B2B4
    // 0x80800210: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B2B4(rdram, ctx);
        goto after_19;
    // 0x80800210: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_19:
    // 0x80800214: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(76, 0X2D0) << 16);
    // 0x80800218: lwc1        $f4, 0x2D0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(76, 0X2D0));
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800220: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800224: nop

    // 0x80800228: bc1fl       L_80800258
    if (!c1cs) {
        // 0x8080022C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800258;
    }
    goto skip_2;
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80800230: jal         0x80082F78
    // 0x80800234: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    _bscrouch_entrypoint_4(rdram, ctx);
        goto after_20;
    // 0x80800234: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_20:
    // 0x80800238: b           L_80800254
    // 0x8080023C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
        goto L_80800254;
    // 0x8080023C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_80800240:
    // 0x80800240: jal         0x8008B324
    // 0x80800244: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B324(rdram, ctx);
        goto after_21;
    // 0x80800244: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_21:
    // 0x80800248: beq         $v0, $zero, L_80800254
    if (ctx->r2 == 0) {
        // 0x8080024C: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_80800254;
    }
    // 0x8080024C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80800250: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
L_80800254:
    // 0x80800254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800258:
    // 0x80800258: jal         0x8009E5C8
    // 0x8080025C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_22;
    // 0x8080025C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_22:
    // 0x80800260: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800264: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800268: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080026C: jr          $ra
    // 0x80800270: nop

    return;
    // 0x80800270: nop

;}
RECOMP_FUNC void bsbegghead_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800274: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800278: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080027C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800280: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800284: jal         0x80098140
    // 0x80800288: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098140(rdram, ctx);
        goto after_0;
    // 0x80800288: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8080028C: jal         0x8009BC6C
    // 0x80800290: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BC6C(rdram, ctx);
        goto after_1;
    // 0x80800290: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800294: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800298: jal         0x800A0CF4
    // 0x8080029C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_2;
    // 0x8080029C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808002A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002A8: jr          $ra
    // 0x808002AC: nop

    return;
    // 0x808002AC: nop

;}
RECOMP_FUNC void bsbegghead_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002B0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808002B4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(76, 0X2E0) << 16);
    // 0x808002B8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808002BC: jr          $ra
    // 0x808002C0: lw          $v0, 0x2E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(76, 0X2E0));
    return;
    // 0x808002C0: lw          $v0, 0x2E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(76, 0X2E0));
;}
RECOMP_FUNC void func_80800000_bsbflap(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080000C: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800014: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800018: jal         0x8008CDB8
    // 0x8080001C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    func_8008CDB8(rdram, ctx);
        goto after_0;
    // 0x8080001C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_0:
    // 0x80800020: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800024: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080002C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800030: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800034: jal         0x8009FFD8
    // 0x80800038: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800038: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8080003C: jal         0x8009EF04
    // 0x80800040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_2;
    // 0x80800040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800044: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800048: nop

    // 0x8080004C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800050: nop

    // 0x80800054: bc1t        L_80800070
    if (c1cs) {
        // 0x80800058: nop
    
            goto L_80800070;
    }
    // 0x80800058: nop

    // 0x8080005C: jal         0x8009EEB8
    // 0x80800060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_3;
    // 0x80800060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800064: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800068: jal         0x8009C914
    // 0x8080006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_4;
    // 0x8080006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_80800070:
    // 0x80800070: jal         0x8009C990
    // 0x80800074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_5;
    // 0x80800074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800078: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080007C: jal         0x8009B9C0
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_6;
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800084: jal         0x800841D8
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bswalk_entrypoint_1(rdram, ctx);
        goto after_7;
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080008C: jal         0x8009C990
    // 0x80800090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_8;
    // 0x80800090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800094: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80800098: jal         0x8009BB00
    // 0x8080009C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_9;
    // 0x8080009C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808000A0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808000A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000A8: jal         0x8009BA68
    // 0x808000AC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009BA68(rdram, ctx);
        goto after_10;
    // 0x808000AC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_10:
    // 0x808000B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B4: jal         0x8009BA58
    // 0x808000B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BA58(rdram, ctx);
        goto after_11;
    // 0x808000B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_11:
    // 0x808000BC: lui         $a1, 0xC489
    ctx->r5 = S32(0XC489 << 16);
    // 0x808000C0: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x808000C4: jal         0x8009BCB4
    // 0x808000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCB4(rdram, ctx);
        goto after_12;
    // 0x808000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D0: jal         0x800A0CF4
    // 0x808000D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_13;
    // 0x808000D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x808000D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000DC: jal         0x80095760
    // 0x808000E0: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_80095760(rdram, ctx);
        goto after_14;
    // 0x808000E0: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_14:
    // 0x808000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808000EC: jal         0x80085338
    // 0x808000F0: lui         $a2, 0x4020
    ctx->r6 = S32(0X4020 << 16);
    _batimer_set(rdram, ctx);
        goto after_15;
    // 0x808000F0: lui         $a2, 0x4020
    ctx->r6 = S32(0X4020 << 16);
    after_15:
    // 0x808000F4: jal         0x8009D874
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D874(rdram, ctx);
        goto after_16;
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808000FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80800100: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    // 0x80800104: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x80800108: swc1        $f6, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f6.u32l;
    // 0x8080010C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800110: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800114: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800118: jr          $ra
    // 0x8080011C: nop

    return;
    // 0x8080011C: nop

;}
RECOMP_FUNC void func_80800120_bsbflap(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800120: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800124: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800128: jal         0x8008CABC
    // 0x8080012C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080012C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800130: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x80800134: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80800138: jal         0x8008B348
    // 0x8080013C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B348(rdram, ctx);
        goto after_1;
    // 0x8080013C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800140: beql        $v0, $zero, L_8080015C
    if (ctx->r2 == 0) {
        // 0x80800144: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8080015C;
    }
    goto skip_0;
    // 0x80800144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800148: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8080014C: lw          $t6, 0x160($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X160);
    // 0x80800150: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80800154: sw          $t7, 0x160($v0)
    MEM_W(0X160, ctx->r2) = ctx->r15;
    // 0x80800158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080015C:
    // 0x8080015C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800160: jr          $ra
    // 0x80800164: nop

    return;
    // 0x80800164: nop

;}
RECOMP_FUNC void func_80800168_bsbflap(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800168: lw          $t6, 0x160($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X160);
    // 0x8080016C: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x80800170: beq         $at, $zero, L_808001C8
    if (ctx->r1 == 0) {
        // 0x80800174: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_808001C8;
    }
    // 0x80800174: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800178: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(77, 0X6F0) << 16);
    // 0x8080017C: addu        $at, $at, $t6
    gpr jr_addend_80800184 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800180: lw          $t6, 0x6F0($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(77, 0X6F0));
    // 0x80800184: jr          $t6
    // 0x80800188: nop

    switch (jr_addend_80800184 >> 2) {
        case 0: goto L_8080018C; break;
        case 1: goto L_80800198; break;
        case 2: goto L_808001A4; break;
        case 3: goto L_808001B0; break;
        case 4: goto L_808001BC; break;
        default: switch_error(__func__, 0x80800184, 0x808006F0);
    }
    // 0x80800188: nop

L_8080018C:
    // 0x8080018C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(77, 0X704) << 16);
    // 0x80800190: jr          $ra
    // 0x80800194: lwc1        $f0, 0x704($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(77, 0X704));
    return;
    // 0x80800194: lwc1        $f0, 0x704($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(77, 0X704));
L_80800198:
    // 0x80800198: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(77, 0X708) << 16);
    // 0x8080019C: jr          $ra
    // 0x808001A0: lwc1        $f0, 0x708($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(77, 0X708));
    return;
    // 0x808001A0: lwc1        $f0, 0x708($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(77, 0X708));
L_808001A4:
    // 0x808001A4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(77, 0X70C) << 16);
    // 0x808001A8: jr          $ra
    // 0x808001AC: lwc1        $f0, 0x70C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(77, 0X70C));
    return;
    // 0x808001AC: lwc1        $f0, 0x70C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(77, 0X70C));
L_808001B0:
    // 0x808001B0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(77, 0X710) << 16);
    // 0x808001B4: jr          $ra
    // 0x808001B8: lwc1        $f0, 0x710($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(77, 0X710));
    return;
    // 0x808001B8: lwc1        $f0, 0x710($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(77, 0X710));
L_808001BC:
    // 0x808001BC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(77, 0X714) << 16);
    // 0x808001C0: jr          $ra
    // 0x808001C4: lwc1        $f0, 0x714($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(77, 0X714));
    return;
    // 0x808001C4: lwc1        $f0, 0x714($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(77, 0X714));
L_808001C8:
    // 0x808001C8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(77, 0X718) << 16);
    // 0x808001CC: lwc1        $f0, 0x718($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(77, 0X718));
    // 0x808001D0: jr          $ra
    // 0x808001D4: nop

    return;
    // 0x808001D4: nop

;}
RECOMP_FUNC void func_808001D8_bsbflap(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001E0: jal         0x8008CABC
    // 0x808001E4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808001E4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001E8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x808001EC: jal         0x80000168
    // 0x808001F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80800168_bsbflap(rdram, ctx);
        goto after_1;
    // 0x808001F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808001F4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808001F8: jal         0x8008B1BC
    // 0x808001FC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8008B1BC(rdram, ctx);
        goto after_2;
    // 0x808001FC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80800200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800204: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800208: jr          $ra
    // 0x8080020C: nop

    return;
    // 0x8080020C: nop

;}
RECOMP_FUNC void func_80800210_bsbflap(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800218: lwc1        $f4, 0x170($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X170);
    // 0x8080021C: swc1        $f4, 0x16C($a0)
    MEM_W(0X16C, ctx->r4) = ctx->f4.u32l;
    // 0x80800220: jal         0x800D8FF8
    // 0x80800224: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80800224: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800228: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080022C: lwc1        $f6, 0x170($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X170);
    // 0x80800230: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x80800234: swc1        $f8, 0x170($a0)
    MEM_W(0X170, ctx->r4) = ctx->f8.u32l;
    // 0x80800238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080023C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800240: jr          $ra
    // 0x80800244: nop

    return;
    // 0x80800244: nop

;}
RECOMP_FUNC void func_80800248_bsbflap(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800248: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8080024C: lwc1        $f4, 0x16C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X16C);
    // 0x80800250: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800254: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x80800258: nop

    // 0x8080025C: bc1f        L_80800268
    if (!c1cs) {
        // 0x80800260: nop
    
            goto L_80800268;
    }
    // 0x80800260: nop

    // 0x80800264: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800268:
    // 0x80800268: beq         $v0, $zero, L_8080028C
    if (ctx->r2 == 0) {
        // 0x8080026C: nop
    
            goto L_8080028C;
    }
    // 0x8080026C: nop

    // 0x80800270: lwc1        $f6, 0x170($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X170);
    // 0x80800274: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800278: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x8080027C: nop

    // 0x80800280: bc1f        L_8080028C
    if (!c1cs) {
        // 0x80800284: nop
    
            goto L_8080028C;
    }
    // 0x80800284: nop

    // 0x80800288: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8080028C:
    // 0x8080028C: jr          $ra
    // 0x80800290: nop

    return;
    // 0x80800290: nop

;}
RECOMP_FUNC void func_80800294_bsbflap(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800294: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800298: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080029C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808002A0: jal         0x8008CABC
    // 0x808002A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808002A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808002A8: lui         $a1, 0x3DA3
    ctx->r5 = S32(0X3DA3 << 16);
    // 0x808002AC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x808002B0: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    // 0x808002B4: jal         0x80000248
    // 0x808002B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800248_bsbflap(rdram, ctx);
        goto after_1;
    // 0x808002B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808002BC: beq         $v0, $zero, L_808002D8
    if (ctx->r2 == 0) {
        // 0x808002C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002D8;
    }
    // 0x808002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C4: lui         $a2, 0x3F9E
    ctx->r6 = S32(0X3F9E << 16);
    // 0x808002C8: ori         $a2, $a2, 0xB852
    ctx->r6 = ctx->r6 | 0XB852;
    // 0x808002CC: addiu       $a1, $zero, 0x4435
    ctx->r5 = ADD32(0, 0X4435);
    // 0x808002D0: jal         0x8009DB04
    // 0x808002D4: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    func_8009DB04(rdram, ctx);
        goto after_2;
    // 0x808002D4: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    after_2:
L_808002D8:
    // 0x808002D8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(77, 0X71C) << 16);
    // 0x808002DC: lwc1        $f4, 0x71C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(77, 0X71C));
    // 0x808002E0: lwc1        $f6, 0x170($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X170);
    // 0x808002E4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x808002E8: lui         $a1, 0x3F11
    ctx->r5 = S32(0X3F11 << 16);
    // 0x808002EC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x808002F0: nop

    // 0x808002F4: bc1f        L_8080031C
    if (!c1cs) {
        // 0x808002F8: nop
    
            goto L_8080031C;
    }
    // 0x808002F8: nop

    // 0x808002FC: jal         0x8008B348
    // 0x80800300: ori         $a1, $a1, 0xDE6A
    ctx->r5 = ctx->r5 | 0XDE6A;
    func_8008B348(rdram, ctx);
        goto after_3;
    // 0x80800300: ori         $a1, $a1, 0xDE6A
    ctx->r5 = ctx->r5 | 0XDE6A;
    after_3:
    // 0x80800304: beq         $v0, $zero, L_8080031C
    if (ctx->r2 == 0) {
        // 0x80800308: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080031C;
    }
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080030C: addiu       $a1, $zero, 0x4431
    ctx->r5 = ADD32(0, 0X4431);
    // 0x80800310: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800314: jal         0x8009DF18
    // 0x80800318: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DF18(rdram, ctx);
        goto after_4;
    // 0x80800318: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_4:
L_8080031C:
    // 0x8080031C: jal         0x8008B264
    // 0x80800320: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B264(rdram, ctx);
        goto after_5;
    // 0x80800320: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x80800324: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x80800328: bne         $v0, $at, L_80800368
    if (ctx->r2 != ctx->r1) {
        // 0x8080032C: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_80800368;
    }
    // 0x8080032C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80800330: lui         $a1, 0x3CA3
    ctx->r5 = S32(0X3CA3 << 16);
    // 0x80800334: jal         0x8008B348
    // 0x80800338: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    func_8008B348(rdram, ctx);
        goto after_6;
    // 0x80800338: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    after_6:
    // 0x8080033C: beq         $v0, $zero, L_80800368
    if (ctx->r2 == 0) {
        // 0x80800340: lui         $at, 0x0
        ctx->r1 = S32(RELOC_HI16(77, 0X720) << 16);
            goto L_80800368;
    }
    // 0x80800340: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(77, 0X720) << 16);
    // 0x80800344: lwc1        $f12, 0x720($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(77, 0X720));
    // 0x80800348: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(77, 0X724) << 16);
    // 0x8080034C: jal         0x800DC178
    // 0x80800350: lwc1        $f14, 0x724($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(77, 0X724));
    func_800DC178(rdram, ctx);
        goto after_7;
    // 0x80800350: lwc1        $f14, 0x724($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(77, 0X724));
    after_7:
    // 0x80800354: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080035C: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    // 0x80800360: jal         0x8009DF94
    // 0x80800364: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    func_8009DF94(rdram, ctx);
        goto after_8;
    // 0x80800364: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    after_8:
L_80800368:
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
RECOMP_FUNC void func_8080037C_bsbflap(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x8080038C: jal         0x8008CABC
    // 0x80800390: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800390: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800394: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800398: jal         0x800841D8
    // 0x8080039C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bswalk_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x8080039C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808003A0: lw          $t6, 0x15C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X15C);
    // 0x808003A4: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x808003A8: beq         $at, $zero, L_808005EC
    if (ctx->r1 == 0) {
        // 0x808003AC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_808005EC;
    }
    // 0x808003AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x808003B0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(77, 0X728) << 16);
    // 0x808003B4: addu        $at, $at, $t6
    gpr jr_addend_808003BC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x808003B8: lw          $t6, 0x728($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(77, 0X728));
    // 0x808003BC: jr          $t6
    // 0x808003C0: nop

    switch (jr_addend_808003BC >> 2) {
        case 0: goto L_808003C4; break;
        case 1: goto L_80800474; break;
        case 2: goto L_808004C4; break;
        case 3: goto L_8080053C; break;
        case 4: goto L_808005D8; break;
        default: switch_error(__func__, 0x808003BC, 0x80800728);
    }
    // 0x808003C0: nop

L_808003C4:
    // 0x808003C4: jal         0x800956B8
    // 0x808003C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800956B8(rdram, ctx);
        goto after_2;
    // 0x808003C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808003CC: jal         0x80000210
    // 0x808003D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800210_bsbflap(rdram, ctx);
        goto after_3;
    // 0x808003D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808003D4: jal         0x80000294
    // 0x808003D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800294_bsbflap(rdram, ctx);
        goto after_4;
    // 0x808003D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808003DC: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x808003E0: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x808003E4: jal         0x8008B348
    // 0x808003E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_5;
    // 0x808003E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x808003EC: beq         $v0, $zero, L_808005EC
    if (ctx->r2 == 0) {
        // 0x808003F0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808005EC;
    }
    // 0x808003F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808003F4: jal         0x8008B1A0
    // 0x808003F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_6;
    // 0x808003F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x808003FC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800400: jal         0x8008AED4
    // 0x80800404: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_8008AED4(rdram, ctx);
        goto after_7;
    // 0x80800404: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_7:
    // 0x80800408: jal         0x80000168
    // 0x8080040C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800168_bsbflap(rdram, ctx);
        goto after_8;
    // 0x8080040C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800410: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800414: jal         0x8008B1BC
    // 0x80800418: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B1BC(rdram, ctx);
        goto after_9;
    // 0x80800418: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_9:
    // 0x8080041C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800420: jal         0x8008B134
    // 0x80800424: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_10;
    // 0x80800424: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x80800428: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080042C: jal         0x8008B24C
    // 0x80800430: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B24C(rdram, ctx);
        goto after_11;
    // 0x80800430: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_11:
    // 0x80800434: jal         0x8008B064
    // 0x80800438: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B064(rdram, ctx);
        goto after_12;
    // 0x80800438: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_12:
    // 0x8080043C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800440: jal         0x8009BA58
    // 0x80800444: lui         $a1, 0x438C
    ctx->r5 = S32(0X438C << 16);
    func_8009BA58(rdram, ctx);
        goto after_13;
    // 0x80800444: lui         $a1, 0x438C
    ctx->r5 = S32(0X438C << 16);
    after_13:
    // 0x80800448: lui         $a1, 0xC489
    ctx->r5 = S32(0XC489 << 16);
    // 0x8080044C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80800450: jal         0x8009BCB4
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCB4(rdram, ctx);
        goto after_14;
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800458: lui         $a1, 0xC3C7
    ctx->r5 = S32(0XC3C7 << 16);
    // 0x8080045C: ori         $a1, $a1, 0xF333
    ctx->r5 = ctx->r5 | 0XF333;
    // 0x80800460: jal         0x8009BCC4
    // 0x80800464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_15;
    // 0x80800464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800468: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8080046C: b           L_808005EC
    // 0x80800470: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
        goto L_808005EC;
    // 0x80800470: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_80800474:
    // 0x80800474: jal         0x800956B8
    // 0x80800478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800956B8(rdram, ctx);
        goto after_16;
    // 0x80800478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x8080047C: jal         0x80000210
    // 0x80800480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800210_bsbflap(rdram, ctx);
        goto after_17;
    // 0x80800480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800484: jal         0x80000120
    // 0x80800488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800120_bsbflap(rdram, ctx);
        goto after_18;
    // 0x80800488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x8080048C: jal         0x800001D8
    // 0x80800490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808001D8_bsbflap(rdram, ctx);
        goto after_19;
    // 0x80800490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800494: jal         0x80000294
    // 0x80800498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800294_bsbflap(rdram, ctx);
        goto after_20;
    // 0x80800498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x8080049C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(77, 0X73C) << 16);
    // 0x808004A0: lwc1        $f6, 0x73C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(77, 0X73C));
    // 0x808004A4: lwc1        $f4, 0x170($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X170);
    // 0x808004A8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x808004AC: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x808004B0: nop

    // 0x808004B4: bc1fl       L_808005F0
    if (!c1cs) {
        // 0x808004B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005F0;
    }
    goto skip_0;
    // 0x808004B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808004BC: b           L_808005EC
    // 0x808004C0: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
        goto L_808005EC;
    // 0x808004C0: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
L_808004C4:
    // 0x808004C4: jal         0x800956B8
    // 0x808004C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800956B8(rdram, ctx);
        goto after_21;
    // 0x808004C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x808004CC: jal         0x80000210
    // 0x808004D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800210_bsbflap(rdram, ctx);
        goto after_22;
    // 0x808004D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x808004D4: jal         0x80000120
    // 0x808004D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800120_bsbflap(rdram, ctx);
        goto after_23;
    // 0x808004D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x808004DC: jal         0x800001D8
    // 0x808004E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808001D8_bsbflap(rdram, ctx);
        goto after_24;
    // 0x808004E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x808004E4: jal         0x80000294
    // 0x808004E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800294_bsbflap(rdram, ctx);
        goto after_25;
    // 0x808004E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x808004EC: lw          $t9, 0x160($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X160);
    // 0x808004F0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808004F4: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x808004F8: bne         $t9, $at, L_80800504
    if (ctx->r25 != ctx->r1) {
        // 0x808004FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800504;
    }
    // 0x808004FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800500: sw          $t0, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r8;
L_80800504:
    // 0x80800504: jal         0x80091A30
    // 0x80800508: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_26;
    // 0x80800508: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_26:
    // 0x8080050C: beql        $v0, $zero, L_808005F0
    if (ctx->r2 == 0) {
        // 0x80800510: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005F0;
    }
    goto skip_1;
    // 0x80800510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800514: jal         0x8009BC6C
    // 0x80800518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_27;
    // 0x80800518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x8080051C: jal         0x8009BC90
    // 0x80800520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC90(rdram, ctx);
        goto after_28;
    // 0x80800520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x80800524: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800528: jal         0x8008B1BC
    // 0x8080052C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_29;
    // 0x8080052C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_29:
    // 0x80800530: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80800534: b           L_808005EC
    // 0x80800538: sw          $t1, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r9;
        goto L_808005EC;
    // 0x80800538: sw          $t1, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r9;
L_8080053C:
    // 0x8080053C: jal         0x800956B8
    // 0x80800540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800956B8(rdram, ctx);
        goto after_30;
    // 0x80800540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x80800544: jal         0x80000210
    // 0x80800548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800210_bsbflap(rdram, ctx);
        goto after_31;
    // 0x80800548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x8080054C: jal         0x80000120
    // 0x80800550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800120_bsbflap(rdram, ctx);
        goto after_32;
    // 0x80800550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x80800554: jal         0x800001D8
    // 0x80800558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808001D8_bsbflap(rdram, ctx);
        goto after_33;
    // 0x80800558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x8080055C: jal         0x80000294
    // 0x80800560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800294_bsbflap(rdram, ctx);
        goto after_34;
    // 0x80800560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x80800564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800568: jal         0x80091A30
    // 0x8080056C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_35;
    // 0x8080056C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_35:
    // 0x80800570: beq         $v0, $zero, L_808005AC
    if (ctx->r2 == 0) {
        // 0x80800574: nop
    
            goto L_808005AC;
    }
    // 0x80800574: nop

    // 0x80800578: jal         0x8009BC6C
    // 0x8080057C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_36;
    // 0x8080057C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x80800580: jal         0x8009BC90
    // 0x80800584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC90(rdram, ctx);
        goto after_37;
    // 0x80800584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_37:
    // 0x80800588: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080058C: jal         0x8008B1BC
    // 0x80800590: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_38;
    // 0x80800590: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_38:
    // 0x80800594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800598: jal         0x80095588
    // 0x8080059C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80095588(rdram, ctx);
        goto after_39;
    // 0x8080059C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_39:
    // 0x808005A0: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x808005A4: b           L_808005EC
    // 0x808005A8: sw          $t2, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r10;
        goto L_808005EC;
    // 0x808005A8: sw          $t2, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r10;
L_808005AC:
    // 0x808005AC: jal         0x8009BB00
    // 0x808005B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_40;
    // 0x808005B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_40:
    // 0x808005B4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(77, 0X740) << 16);
    // 0x808005B8: lwc1        $f8, 0x740($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(77, 0X740));
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005C0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x808005C4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x808005C8: jal         0x8009B9B0
    // 0x808005CC: nop

    func_8009B9B0(rdram, ctx);
        goto after_41;
    // 0x808005CC: nop

    after_41:
    // 0x808005D0: b           L_808005F0
    // 0x808005D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808005F0;
    // 0x808005D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808005D8:
    // 0x808005D8: jal         0x8008E260
    // 0x808005DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_42;
    // 0x808005DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_42:
    // 0x808005E0: beq         $v0, $zero, L_808005EC
    if (ctx->r2 == 0) {
        // 0x808005E4: addiu       $t3, $zero, 0x3D
        ctx->r11 = ADD32(0, 0X3D);
            goto L_808005EC;
    }
    // 0x808005E4: addiu       $t3, $zero, 0x3D
    ctx->r11 = ADD32(0, 0X3D);
    // 0x808005E8: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
L_808005EC:
    // 0x808005EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808005F0:
    // 0x808005F0: jal         0x800852F0
    // 0x808005F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_43;
    // 0x808005F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_43:
    // 0x808005F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005FC: jal         0x80085330
    // 0x80800600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_isZero(rdram, ctx);
        goto after_44;
    // 0x80800600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_44:
    // 0x80800604: beq         $v0, $zero, L_80800610
    if (ctx->r2 == 0) {
        // 0x80800608: addiu       $t4, $zero, 0x2F
        ctx->r12 = ADD32(0, 0X2F);
            goto L_80800610;
    }
    // 0x80800608: addiu       $t4, $zero, 0x2F
    ctx->r12 = ADD32(0, 0X2F);
    // 0x8080060C: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
L_80800610:
    // 0x80800610: jal         0x80097A90
    // 0x80800614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097A90(rdram, ctx);
        goto after_45;
    // 0x80800614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_45:
    // 0x80800618: beq         $v0, $zero, L_80800624
    if (ctx->r2 == 0) {
        // 0x8080061C: addiu       $t5, $zero, 0xF
        ctx->r13 = ADD32(0, 0XF);
            goto L_80800624;
    }
    // 0x8080061C: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x80800620: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_80800624:
    // 0x80800624: jal         0x8008DA24
    // 0x80800628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DA24(rdram, ctx);
        goto after_46;
    // 0x80800628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_46:
    // 0x8080062C: beq         $v0, $zero, L_80800638
    if (ctx->r2 == 0) {
        // 0x80800630: addiu       $t6, $zero, 0xA8
        ctx->r14 = ADD32(0, 0XA8);
            goto L_80800638;
    }
    // 0x80800630: addiu       $t6, $zero, 0xA8
    ctx->r14 = ADD32(0, 0XA8);
    // 0x80800634: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800638:
    // 0x80800638: jal         0x8008E078
    // 0x8080063C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_47;
    // 0x8080063C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_47:
    // 0x80800640: beq         $v0, $zero, L_80800658
    if (ctx->r2 == 0) {
        // 0x80800644: nop
    
            goto L_80800658;
    }
    // 0x80800644: nop

    // 0x80800648: jal         0x8009FE58
    // 0x8080064C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE58(rdram, ctx);
        goto after_48;
    // 0x8080064C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_48:
    // 0x80800650: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80800654: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80800658:
    // 0x80800658: jal         0x8008E35C
    // 0x8080065C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_49;
    // 0x8080065C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_49:
    // 0x80800660: beq         $v0, $zero, L_80800670
    if (ctx->r2 == 0) {
        // 0x80800664: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800670;
    }
    // 0x80800664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800668: addiu       $t8, $zero, 0x4C
    ctx->r24 = ADD32(0, 0X4C);
    // 0x8080066C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80800670:
    // 0x80800670: jal         0x8009E5C8
    // 0x80800674: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_50;
    // 0x80800674: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_50:
    // 0x80800678: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080067C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800680: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800684: jr          $ra
    // 0x80800688: nop

    return;
    // 0x80800688: nop

;}
RECOMP_FUNC void func_8080068C_bsbflap(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080068C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800694: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800698: jal         0x800C6DA0
    // 0x8080069C: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    func_800C6DA0(rdram, ctx);
        goto after_0;
    // 0x8080069C: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    after_0:
    // 0x808006A0: jal         0x8009BC6C
    // 0x808006A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BC6C(rdram, ctx);
        goto after_1;
    // 0x808006A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808006A8: jal         0x8009BC90
    // 0x808006AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BC90(rdram, ctx);
        goto after_2;
    // 0x808006AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808006B0: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x808006B4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808006B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808006BC: jal         0x800A0D14
    // 0x808006C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0D14(rdram, ctx);
        goto after_3;
    // 0x808006C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x808006C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808006C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808006CC: jr          $ra
    // 0x808006D0: nop

    return;
    // 0x808006D0: nop

;}
RECOMP_FUNC void bsbflap_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006D4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808006D8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(77, 0X750) << 16);
    // 0x808006DC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808006E0: jr          $ra
    // 0x808006E4: lw          $v0, 0x750($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(77, 0X750));
    return;
    // 0x808006E4: lw          $v0, 0x750($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(77, 0X750));
;}
RECOMP_FUNC void func_80800000_bsbflip(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void func_80800064_bsbflip(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800064: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800068: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080006C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80800070: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800074: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800078: jal         0x8008CABC
    // 0x8080007C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080007C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800080: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80800084: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80800088: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x8080008C: beq         $at, $zero, L_80800398
    if (ctx->r1 == 0) {
        // 0x80800090: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80800398;
    }
    // 0x80800090: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800094: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(78, 0X600) << 16);
    // 0x80800098: addu        $at, $at, $t6
    gpr jr_addend_808000A0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8080009C: lw          $t6, 0x600($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(78, 0X600));
    // 0x808000A0: jr          $t6
    // 0x808000A4: nop

    switch (jr_addend_808000A0 >> 2) {
        case 0: goto L_808000A8; break;
        case 1: goto L_808000DC; break;
        case 2: goto L_8080019C; break;
        case 3: goto L_808002C0; break;
        case 4: goto L_8080030C; break;
        default: switch_error(__func__, 0x808000A0, 0x80800600);
    }
    // 0x808000A4: nop

L_808000A8:
    // 0x808000A8: jal         0x800C6DA0
    // 0x808000AC: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    func_800C6DA0(rdram, ctx);
        goto after_1;
    // 0x808000AC: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    after_1:
    // 0x808000B0: jal         0x8009BC6C
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_2;
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808000B8: jal         0x8009BC90
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC90(rdram, ctx);
        goto after_3;
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C4: jal         0x800A0D44
    // 0x808000C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0D44(rdram, ctx);
        goto after_4;
    // 0x808000C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x808000CC: jal         0x8009F1E0
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F1E0(rdram, ctx);
        goto after_5;
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808000D4: b           L_8080039C
    // 0x808000D8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
        goto L_8080039C;
    // 0x808000D8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
L_808000DC:
    // 0x808000DC: jal         0x8008AF24
    // 0x808000E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008AF24(rdram, ctx);
        goto after_6;
    // 0x808000E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x808000E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808000E8: jal         0x8008B1A0
    // 0x808000EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_7;
    // 0x808000EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x808000F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808000F4: jal         0x8008AED4
    // 0x808000F8: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    func_8008AED4(rdram, ctx);
        goto after_8;
    // 0x808000F8: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    after_8:
    // 0x808000FC: lui         $a1, 0x4013
    ctx->r5 = S32(0X4013 << 16);
    // 0x80800100: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80800104: jal         0x8008B1BC
    // 0x80800108: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_9;
    // 0x80800108: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x8080010C: lui         $a2, 0x3F49
    ctx->r6 = S32(0X3F49 << 16);
    // 0x80800110: ori         $a2, $a2, 0x5E9E
    ctx->r6 = ctx->r6 | 0X5E9E;
    // 0x80800114: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800118: jal         0x8008B1D4
    // 0x8080011C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_10;
    // 0x8080011C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_10:
    // 0x80800120: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800124: jal         0x8008B24C
    // 0x80800128: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B24C(rdram, ctx);
        goto after_11;
    // 0x80800128: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_11:
    // 0x8080012C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800130: jal         0x8008B134
    // 0x80800134: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_12;
    // 0x80800134: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x80800138: jal         0x8008B064
    // 0x8080013C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B064(rdram, ctx);
        goto after_13;
    // 0x8080013C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x80800140: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80800144: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080014C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800150: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800154: jal         0x8009FFD8
    // 0x80800158: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_14;
    // 0x80800158: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_14:
    // 0x8080015C: lui         $a2, 0x3CF5
    ctx->r6 = S32(0X3CF5 << 16);
    // 0x80800160: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800168: jal         0x8009F1C8
    // 0x8080016C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_15;
    // 0x8080016C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800174: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800178: jal         0x8009F1C8
    // 0x8080017C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_16;
    // 0x8080017C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_16:
    // 0x80800180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800184: jal         0x800A0CF4
    // 0x80800188: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_17;
    // 0x80800188: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x8080018C: jal         0x8009D874
    // 0x80800190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D874(rdram, ctx);
        goto after_18;
    // 0x80800190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800194: b           L_8080039C
    // 0x80800198: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
        goto L_8080039C;
    // 0x80800198: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
L_8080019C:
    // 0x8080019C: jal         0x8009EF04
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_19;
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
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
        goto after_20;
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x808001C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001CC: jal         0x8009D2D8
    // 0x808001D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009D2D8(rdram, ctx);
        goto after_21;
    // 0x808001D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_21:
    // 0x808001D4: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x808001D8: addiu       $t8, $t8, -0x10FC
    ctx->r24 = ADD32(ctx->r24, -0X10FC);
    // 0x808001DC: beql        $t8, $zero, L_808001FC
    if (ctx->r24 == 0) {
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
        goto after_22;
    // 0x808001E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x808001EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808001F0: jal         0x8009C914
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_23;
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808001FC:
    // 0x808001FC: jal         0x8009C9C8
    // 0x80800200: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009C9C8(rdram, ctx);
        goto after_24;
    // 0x80800200: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_24:
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800208: jal         0x8009B800
    // 0x8080020C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8009B800(rdram, ctx);
        goto after_25;
    // 0x8080020C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_25:
    // 0x80800210: jal         0x8009C990
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_26;
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x80800218: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080021C: jal         0x8009B9C0
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_27;
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x80800224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800228: jal         0x8009B9B0
    // 0x8080022C: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    func_8009B9B0(rdram, ctx);
        goto after_28;
    // 0x8080022C: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    after_28:
    // 0x80800230: jal         0x8009C990
    // 0x80800234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_29;
    // 0x80800234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x80800238: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8080023C: jal         0x8009BB00
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_30;
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x80800244: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080024C: jal         0x8009BA68
    // 0x80800250: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009BA68(rdram, ctx);
        goto after_31;
    // 0x80800250: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_31:
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
        goto after_32;
    // 0x80800260: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_32:
    // 0x80800264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800268: jal         0x8009B9B0
    // 0x8080026C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_33;
    // 0x8080026C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_33:
    // 0x80800270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800274:
    // 0x80800274: jal         0x8009BA58
    // 0x80800278: lui         $a1, 0x4466
    ctx->r5 = S32(0X4466 << 16);
    func_8009BA58(rdram, ctx);
        goto after_34;
    // 0x80800278: lui         $a1, 0x4466
    ctx->r5 = S32(0X4466 << 16);
    after_34:
    // 0x8080027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800280: jal         0x8009BCB4
    // 0x80800284: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_35;
    // 0x80800284: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    after_35:
    // 0x80800288: lui         $a1, 0xC405
    ctx->r5 = S32(0XC405 << 16);
    // 0x8080028C: ori         $a1, $a1, 0x5333
    ctx->r5 = ctx->r5 | 0X5333;
    // 0x80800290: jal         0x8009BCC4
    // 0x80800294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_36;
    // 0x80800294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x80800298: lui         $a1, 0x3FF3
    ctx->r5 = S32(0X3FF3 << 16);
    // 0x8080029C: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x808002A0: jal         0x8008B1BC
    // 0x808002A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_37;
    // 0x808002A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_37:
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002AC: addiu       $a1, $zero, 0x5A6
    ctx->r5 = ADD32(0, 0X5A6);
    // 0x808002B0: jal         0x8009DE38
    // 0x808002B4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_38;
    // 0x808002B4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_38:
    // 0x808002B8: b           L_8080039C
    // 0x808002BC: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
        goto L_8080039C;
    // 0x808002BC: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
L_808002C0:
    // 0x808002C0: jal         0x8008AF24
    // 0x808002C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008AF24(rdram, ctx);
        goto after_39;
    // 0x808002C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_39:
    // 0x808002C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808002CC: jal         0x8008B1A0
    // 0x808002D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_40;
    // 0x808002D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_40:
    // 0x808002D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808002D8: jal         0x8008AED4
    // 0x808002DC: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    func_8008AED4(rdram, ctx);
        goto after_41;
    // 0x808002DC: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    after_41:
    // 0x808002E0: lui         $a1, 0x3E05
    ctx->r5 = S32(0X3E05 << 16);
    // 0x808002E4: ori         $a1, $a1, 0x1EB8
    ctx->r5 = ctx->r5 | 0X1EB8;
    // 0x808002E8: jal         0x8008B1BC
    // 0x808002EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_42;
    // 0x808002EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_42:
    // 0x808002F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808002F4: jal         0x8008B134
    // 0x808002F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_43;
    // 0x808002F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_43:
    // 0x808002FC: jal         0x8008B064
    // 0x80800300: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B064(rdram, ctx);
        goto after_44;
    // 0x80800300: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_44:
    // 0x80800304: b           L_8080039C
    // 0x80800308: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
        goto L_8080039C;
    // 0x80800308: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
L_8080030C:
    // 0x8080030C: jal         0x8008AF24
    // 0x80800310: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008AF24(rdram, ctx);
        goto after_45;
    // 0x80800310: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_45:
    // 0x80800314: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800318: jal         0x8008AED4
    // 0x8080031C: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    func_8008AED4(rdram, ctx);
        goto after_46;
    // 0x8080031C: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    after_46:
    // 0x80800320: lui         $a1, 0x400C
    ctx->r5 = S32(0X400C << 16);
    // 0x80800324: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800328: jal         0x8008B1BC
    // 0x8080032C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_47;
    // 0x8080032C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_47:
    // 0x80800330: lui         $a1, 0x3F5B
    ctx->r5 = S32(0X3F5B << 16);
    // 0x80800334: ori         $a1, $a1, 0x4A23
    ctx->r5 = ctx->r5 | 0X4A23;
    // 0x80800338: jal         0x8008B24C
    // 0x8080033C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B24C(rdram, ctx);
        goto after_48;
    // 0x8080033C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_48:
    // 0x80800340: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800344: jal         0x8008B134
    // 0x80800348: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_49;
    // 0x80800348: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_49:
    // 0x8080034C: jal         0x8008B064
    // 0x80800350: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B064(rdram, ctx);
        goto after_50;
    // 0x80800350: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_50:
    // 0x80800354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800358: jal         0x8009B800
    // 0x8080035C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009B800(rdram, ctx);
        goto after_51;
    // 0x8080035C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_51:
    // 0x80800360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800364: jal         0x8009B9B0
    // 0x80800368: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_52;
    // 0x80800368: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_52:
    // 0x8080036C: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x80800370: jal         0x800EFD24
    // 0x80800374: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EFD24(rdram, ctx);
        goto after_53;
    // 0x80800374: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_53:
    // 0x80800378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080037C: jal         0x8009BA9C
    // 0x80800380: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_54;
    // 0x80800380: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_54:
    // 0x80800384: jal         0x8009FE58
    // 0x80800388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE58(rdram, ctx);
        goto after_55;
    // 0x80800388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_55:
    // 0x8080038C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800390: jal         0x800A0CF4
    // 0x80800394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_56;
    // 0x80800394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_56:
L_80800398:
    // 0x80800398: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
L_8080039C:
    // 0x8080039C: sw          $t9, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r25;
    // 0x808003A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808003A4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808003A8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x808003AC: jr          $ra
    // 0x808003B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x808003B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_808003B4_bsbflip(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003BC: jal         0x80000064
    // 0x808003C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800064_bsbflip(rdram, ctx);
        goto after_0;
    // 0x808003C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808003C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003CC: jr          $ra
    // 0x808003D0: nop

    return;
    // 0x808003D0: nop

;}
RECOMP_FUNC void func_808003D4_bsbflip(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003DC: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    // 0x808003E0: jal         0x80000064
    // 0x808003E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800064_bsbflip(rdram, ctx);
        goto after_0;
    // 0x808003E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x808003E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003F0: jr          $ra
    // 0x808003F4: nop

    return;
    // 0x808003F4: nop

;}
RECOMP_FUNC void func_808003F8_bsbflip(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808003FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800400: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800404: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800408: jal         0x8008CABC
    // 0x8080040C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080040C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800410: lui         $a1, 0x3E75
    ctx->r5 = S32(0X3E75 << 16);
    // 0x80800414: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800418: ori         $a1, $a1, 0x2546
    ctx->r5 = ctx->r5 | 0X2546;
    // 0x8080041C: jal         0x8008B348
    // 0x80800420: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B348(rdram, ctx);
        goto after_1;
    // 0x80800420: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800424: beql        $v0, $zero, L_8080046C
    if (ctx->r2 == 0) {
        // 0x80800428: lw          $v0, 0x15C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X15C);
            goto L_8080046C;
    }
    goto skip_0;
    // 0x80800428: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    skip_0:
    // 0x8080042C: jal         0x8008B284
    // 0x80800430: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B284(rdram, ctx);
        goto after_2;
    // 0x80800430: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800434: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800438: beql        $v0, $at, L_8080046C
    if (ctx->r2 == ctx->r1) {
        // 0x8080043C: lw          $v0, 0x15C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X15C);
            goto L_8080046C;
    }
    goto skip_1;
    // 0x8080043C: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    skip_1:
    // 0x80800440: jal         0x8008B264
    // 0x80800444: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B264(rdram, ctx);
        goto after_3;
    // 0x80800444: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x80800448: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    // 0x8080044C: bne         $v0, $at, L_80800468
    if (ctx->r2 != ctx->r1) {
        // 0x80800450: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800468;
    }
    // 0x80800450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800454: lui         $a2, 0x3F0E
    ctx->r6 = S32(0X3F0E << 16);
    // 0x80800458: ori         $a2, $a2, 0xD917
    ctx->r6 = ctx->r6 | 0XD917;
    // 0x8080045C: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    // 0x80800460: jal         0x8009DF94
    // 0x80800464: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DF94(rdram, ctx);
        goto after_4;
    // 0x80800464: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_4:
L_80800468:
    // 0x80800468: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
L_8080046C:
    // 0x8080046C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800470: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800474: beq         $v0, $at, L_808004A0
    if (ctx->r2 == ctx->r1) {
        // 0x80800478: lui         $a1, 0x3E3C
        ctx->r5 = S32(0X3E3C << 16);
            goto L_808004A0;
    }
    // 0x80800478: lui         $a1, 0x3E3C
    ctx->r5 = S32(0X3E3C << 16);
    // 0x8080047C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800480: beq         $v0, $at, L_808004C0
    if (ctx->r2 == ctx->r1) {
        // 0x80800484: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_808004C0;
    }
    // 0x80800484: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800488: beq         $v0, $at, L_8080050C
    if (ctx->r2 == ctx->r1) {
        // 0x8080048C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8080050C;
    }
    // 0x8080048C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800490: beq         $v0, $at, L_80800594
    if (ctx->r2 == ctx->r1) {
        // 0x80800494: nop
    
            goto L_80800594;
    }
    // 0x80800494: nop

    // 0x80800498: b           L_808005B8
    // 0x8080049C: nop

        goto L_808005B8;
    // 0x8080049C: nop

L_808004A0:
    // 0x808004A0: jal         0x8008B348
    // 0x808004A4: ori         $a1, $a1, 0x1BDA
    ctx->r5 = ctx->r5 | 0X1BDA;
    func_8008B348(rdram, ctx);
        goto after_5;
    // 0x808004A4: ori         $a1, $a1, 0x1BDA
    ctx->r5 = ctx->r5 | 0X1BDA;
    after_5:
    // 0x808004A8: beq         $v0, $zero, L_808005B8
    if (ctx->r2 == 0) {
        // 0x808004AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005B8;
    }
    // 0x808004AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004B0: jal         0x80000064
    // 0x808004B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800064_bsbflip(rdram, ctx);
        goto after_6;
    // 0x808004B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x808004B8: b           L_808005B8
    // 0x808004BC: nop

        goto L_808005B8;
    // 0x808004BC: nop

L_808004C0:
    // 0x808004C0: jal         0x80000000
    // 0x808004C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbflip(rdram, ctx);
        goto after_7;
    // 0x808004C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808004C8: jal         0x8008B324
    // 0x808004CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_8;
    // 0x808004CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_8:
    // 0x808004D0: beq         $v0, $zero, L_808004E0
    if (ctx->r2 == 0) {
        // 0x808004D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004E0;
    }
    // 0x808004D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004D8: jal         0x80000064
    // 0x808004DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80800064_bsbflip(rdram, ctx);
        goto after_9;
    // 0x808004DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
L_808004E0:
    // 0x808004E0: jal         0x80097A90
    // 0x808004E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097A90(rdram, ctx);
        goto after_10;
    // 0x808004E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808004E8: beq         $v0, $zero, L_808004F4
    if (ctx->r2 == 0) {
        // 0x808004EC: addiu       $t6, $zero, 0xF
        ctx->r14 = ADD32(0, 0XF);
            goto L_808004F4;
    }
    // 0x808004EC: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x808004F0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_808004F4:
    // 0x808004F4: jal         0x8008DA24
    // 0x808004F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DA24(rdram, ctx);
        goto after_11;
    // 0x808004F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808004FC: beq         $v0, $zero, L_808005B8
    if (ctx->r2 == 0) {
        // 0x80800500: addiu       $t7, $zero, 0xA8
        ctx->r15 = ADD32(0, 0XA8);
            goto L_808005B8;
    }
    // 0x80800500: addiu       $t7, $zero, 0xA8
    ctx->r15 = ADD32(0, 0XA8);
    // 0x80800504: b           L_808005B8
    // 0x80800508: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
        goto L_808005B8;
    // 0x80800508: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_8080050C:
    // 0x8080050C: jal         0x8008E260
    // 0x80800510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_12;
    // 0x80800510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800514: beq         $v0, $zero, L_80800524
    if (ctx->r2 == 0) {
        // 0x80800518: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800524;
    }
    // 0x80800518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080051C: addiu       $t8, $zero, 0x3D
    ctx->r24 = ADD32(0, 0X3D);
    // 0x80800520: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80800524:
    // 0x80800524: jal         0x80091A30
    // 0x80800528: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_13;
    // 0x80800528: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_13:
    // 0x8080052C: beq         $v0, $zero, L_80800538
    if (ctx->r2 == 0) {
        // 0x80800530: addiu       $t9, $zero, 0x2F
        ctx->r25 = ADD32(0, 0X2F);
            goto L_80800538;
    }
    // 0x80800530: addiu       $t9, $zero, 0x2F
    ctx->r25 = ADD32(0, 0X2F);
    // 0x80800534: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80800538:
    // 0x80800538: jal         0x8008E078
    // 0x8080053C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_14;
    // 0x8080053C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800540: beq         $v0, $zero, L_80800568
    if (ctx->r2 == 0) {
        // 0x80800544: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800568;
    }
    // 0x80800544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800548: jal         0x800A01F8
    // 0x8080054C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800A01F8(rdram, ctx);
        goto after_15;
    // 0x8080054C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_15:
    // 0x80800550: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800558: jal         0x80000064
    // 0x8080055C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80800064_bsbflip(rdram, ctx);
        goto after_16;
    // 0x8080055C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_16:
    // 0x80800560: b           L_808005B8
    // 0x80800564: nop

        goto L_808005B8;
    // 0x80800564: nop

L_80800568:
    // 0x80800568: jal         0x80097A90
    // 0x8080056C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097A90(rdram, ctx);
        goto after_17;
    // 0x8080056C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800570: beq         $v0, $zero, L_8080057C
    if (ctx->r2 == 0) {
        // 0x80800574: addiu       $t0, $zero, 0xF
        ctx->r8 = ADD32(0, 0XF);
            goto L_8080057C;
    }
    // 0x80800574: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x80800578: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_8080057C:
    // 0x8080057C: jal         0x8008DA24
    // 0x80800580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DA24(rdram, ctx);
        goto after_18;
    // 0x80800580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800584: beq         $v0, $zero, L_808005B8
    if (ctx->r2 == 0) {
        // 0x80800588: addiu       $t1, $zero, 0xA8
        ctx->r9 = ADD32(0, 0XA8);
            goto L_808005B8;
    }
    // 0x80800588: addiu       $t1, $zero, 0xA8
    ctx->r9 = ADD32(0, 0XA8);
    // 0x8080058C: b           L_808005B8
    // 0x80800590: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
        goto L_808005B8;
    // 0x80800590: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_80800594:
    // 0x80800594: jal         0x8008B324
    // 0x80800598: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_19;
    // 0x80800598: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_19:
    // 0x8080059C: beq         $v0, $zero, L_808005AC
    if (ctx->r2 == 0) {
        // 0x808005A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005AC;
    }
    // 0x808005A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005A4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x808005A8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_808005AC:
    // 0x808005AC: jal         0x800A01F8
    // 0x808005B0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800A01F8(rdram, ctx);
        goto after_20;
    // 0x808005B0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_20:
    // 0x808005B4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_808005B8:
    // 0x808005B8: jal         0x8008E35C
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_21;
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x808005C0: beq         $v0, $zero, L_808005D0
    if (ctx->r2 == 0) {
        // 0x808005C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005D0;
    }
    // 0x808005C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005C8: addiu       $t3, $zero, 0x4C
    ctx->r11 = ADD32(0, 0X4C);
    // 0x808005CC: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
L_808005D0:
    // 0x808005D0: jal         0x8009E5C8
    // 0x808005D4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_22;
    // 0x808005D4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_22:
    // 0x808005D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808005DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808005E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808005E4: jr          $ra
    // 0x808005E8: nop

    return;
    // 0x808005E8: nop

;}
RECOMP_FUNC void bsbflip_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005EC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808005F0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(78, 0X620) << 16);
    // 0x808005F4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808005F8: jr          $ra
    // 0x808005FC: lw          $v0, 0x620($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(78, 0X620));
    return;
    // 0x808005FC: lw          $v0, 0x620($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(78, 0X620));
;}
RECOMP_FUNC void func_80800000_bsbfly(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800044: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80800048: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8080004C: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800050: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80800054: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x80800058: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8080005C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80800060: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800064: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80800068: jal         0x800DC178
    // 0x8080006C: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    func_800DC178(rdram, ctx);
        goto after_3;
    // 0x8080006C: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x80800070: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800074: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(79, 0X1D20) << 16);
    // 0x80800078: addiu       $t6, $t6, 0x1D20
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(79, 0X1D20));
    // 0x8080007C: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x80800080: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800084: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80800088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8080008C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80800090: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800094: jal         0x800BBCB8
    // 0x80800098: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800BBCB8(rdram, ctx);
        goto after_4;
    // 0x80800098: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x8080009C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808000A4: jr          $ra
    // 0x808000A8: nop

    return;
    // 0x808000A8: nop

;}
RECOMP_FUNC void func_808000AC_bsbfly(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x808000BC: jal         0x80093360
    // 0x808000C0: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_80093360(rdram, ctx);
        goto after_0;
    // 0x808000C0: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_0:
    // 0x808000C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C8: jal         0x8009C908
    // 0x808000CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009C908(rdram, ctx);
        goto after_1;
    // 0x808000CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D4: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x808000D8: jal         0x8009C99C
    // 0x808000DC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8009C99C(rdram, ctx);
        goto after_2;
    // 0x808000DC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_2:
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E4: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x808000E8: jal         0x8009C554
    // 0x808000EC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8009C554(rdram, ctx);
        goto after_3;
    // 0x808000EC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_3:
    // 0x808000F0: jal         0x80084C68
    // 0x808000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_20(rdram, ctx);
        goto after_4;
    // 0x808000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000FC: lui         $a1, 0x4282
    ctx->r5 = S32(0X4282 << 16);
    // 0x80800100: jal         0x800959C8
    // 0x80800104: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    func_800959C8(rdram, ctx);
        goto after_5;
    // 0x80800104: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    after_5:
    // 0x80800108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080010C: jal         0x800961AC
    // 0x80800110: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800961AC(rdram, ctx);
        goto after_6;
    // 0x80800110: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
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
RECOMP_FUNC void func_80800128_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800128: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080012C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800130: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800134: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800138: jal         0x8009E77C
    // 0x8080013C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8009E77C(rdram, ctx);
        goto after_0;
    // 0x8080013C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x80800140: bne         $v0, $zero, L_80800174
    if (ctx->r2 != 0) {
        // 0x80800144: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800174;
    }
    // 0x80800144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800148: jal         0x80085160
    // 0x8080014C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    _bastatemem_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x8080014C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_1:
    // 0x80800150: jal         0x80084BF0
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800158: jal         0x800000AC
    // 0x8080015C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000AC_bsbfly(rdram, ctx);
        goto after_3;
    // 0x8080015C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800160: jal         0x800845A0
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baboost_entrypoint_3(rdram, ctx);
        goto after_4;
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080016C: jal         0x800845A8
    // 0x80800170: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _baboost_entrypoint_4(rdram, ctx);
        goto after_5;
    // 0x80800170: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_80800174:
    // 0x80800174: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800178: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080017C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800180: jr          $ra
    // 0x80800184: nop

    return;
    // 0x80800184: nop

;}
RECOMP_FUNC void func_80800188_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800188: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080018C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800190: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800194: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800198: jal         0x8009E74C
    // 0x8080019C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x8080019C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x808001A0: bnel        $v0, $zero, L_80800238
    if (ctx->r2 != 0) {
        // 0x808001A4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800238;
    }
    goto skip_0;
    // 0x808001A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808001A8: jal         0x80084BE8
    // 0x808001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x808001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808001B0: jal         0x80085168
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bastatemem_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808001B8: jal         0x8009BC6C
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_3;
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808001C0: jal         0x8009BC90
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC90(rdram, ctx);
        goto after_4;
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808001C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001CC: jal         0x800A0CF4
    // 0x808001D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_5;
    // 0x808001D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D8: jal         0x80093360
    // 0x808001DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80093360(rdram, ctx);
        goto after_6;
    // 0x808001DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x808001E0: jal         0x800A042C
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A042C(rdram, ctx);
        goto after_7;
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808001E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001EC: jal         0x8009C908
    // 0x808001F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009C908(rdram, ctx);
        goto after_8;
    // 0x808001F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x808001F4: jal         0x800A4E30
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4E30(rdram, ctx);
        goto after_9;
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808001FC: jal         0x80095A40
    // 0x80800200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095A40(rdram, ctx);
        goto after_10;
    // 0x80800200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800208: jal         0x800961AC
    // 0x8080020C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_11;
    // 0x8080020C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x80800210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800214: jal         0x800845A8
    // 0x80800218: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _baboost_entrypoint_4(rdram, ctx);
        goto after_12;
    // 0x80800218: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800220: jal         0x80095774
    // 0x80800224: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    func_80095774(rdram, ctx);
        goto after_13;
    // 0x80800224: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    after_13:
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080022C: jal         0x80095774
    // 0x80800230: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_80095774(rdram, ctx);
        goto after_14;
    // 0x80800230: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_14:
    // 0x80800234: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800238:
    // 0x80800238: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080023C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800240: jr          $ra
    // 0x80800244: nop

    return;
    // 0x80800244: nop

;}
RECOMP_FUNC void func_80800248_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800248: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080024C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800250: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800254: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x80800258: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080025C: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800260: jal         0x8008CDB8
    // 0x80800264: addiu       $a1, $zero, 0x45
    ctx->r5 = ADD32(0, 0X45);
    func_8008CDB8(rdram, ctx);
        goto after_0;
    // 0x80800264: addiu       $a1, $zero, 0x45
    ctx->r5 = ADD32(0, 0X45);
    after_0:
    // 0x80800268: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8080026C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800274: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800278: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080027C: jal         0x8009FFD8
    // 0x80800280: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800280: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x80800284: jal         0x8009EF04
    // 0x80800288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_2;
    // 0x80800288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080028C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800290: nop

    // 0x80800294: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800298: nop

    // 0x8080029C: bc1t        L_808002B8
    if (c1cs) {
        // 0x808002A0: nop
    
            goto L_808002B8;
    }
    // 0x808002A0: nop

    // 0x808002A4: jal         0x8009EEB8
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_3;
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808002AC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808002B0: jal         0x8009C914
    // 0x808002B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_4;
    // 0x808002B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_808002B8:
    // 0x808002B8: jal         0x8009C990
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_5;
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808002C0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808002C4: jal         0x8009B9C0
    // 0x808002C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_6;
    // 0x808002C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808002CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002D0: jal         0x8009BA9C
    // 0x808002D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_7;
    // 0x808002D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x808002D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002DC: jal         0x8009B9B0
    // 0x808002E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_8;
    // 0x808002E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_8:
    // 0x808002E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002E8: jal         0x8009BCB4
    // 0x808002EC: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_9;
    // 0x808002EC: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    after_9:
    // 0x808002F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002F4: jal         0x800A0CF4
    // 0x808002F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_10;
    // 0x808002F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x808002FC: jal         0x8009D874
    // 0x80800300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D874(rdram, ctx);
        goto after_11;
    // 0x80800300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800304: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    // 0x80800308: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x8080030C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800310: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800314: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800318: jr          $ra
    // 0x8080031C: nop

    return;
    // 0x8080031C: nop

;}
RECOMP_FUNC void func_80800320_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800320: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800324: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800328: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080032C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800330: jal         0x8008CABC
    // 0x80800334: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800334: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800338: lw          $t6, 0x160($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X160);
    // 0x8080033C: lui         $a1, 0x3E77
    ctx->r5 = S32(0X3E77 << 16);
    // 0x80800340: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800344: bne         $t6, $zero, L_80800394
    if (ctx->r14 != 0) {
        // 0x80800348: ori         $a1, $a1, 0x65FE
        ctx->r5 = ctx->r5 | 0X65FE;
            goto L_80800394;
    }
    // 0x80800348: ori         $a1, $a1, 0x65FE
    ctx->r5 = ctx->r5 | 0X65FE;
    // 0x8080034C: jal         0x8008B348
    // 0x80800350: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8008B348(rdram, ctx);
        goto after_1;
    // 0x80800350: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x80800354: beq         $v0, $zero, L_808003C0
    if (ctx->r2 == 0) {
        // 0x80800358: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808003C0;
    }
    // 0x80800358: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080035C: lui         $a1, 0x4019
    ctx->r5 = S32(0X4019 << 16);
    // 0x80800360: jal         0x8008B1BC
    // 0x80800364: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    func_8008B1BC(rdram, ctx);
        goto after_2;
    // 0x80800364: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    after_2:
    // 0x80800368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080036C: jal         0x8009BA58
    // 0x80800370: lui         $a1, 0x44C8
    ctx->r5 = S32(0X44C8 << 16);
    func_8009BA58(rdram, ctx);
        goto after_3;
    // 0x80800370: lui         $a1, 0x44C8
    ctx->r5 = S32(0X44C8 << 16);
    after_3:
    // 0x80800374: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80800378: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8080037C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800380: jal         0x8009DE38
    // 0x80800384: addiu       $a1, $zero, 0x406
    ctx->r5 = ADD32(0, 0X406);
    func_8009DE38(rdram, ctx);
        goto after_4;
    // 0x80800384: addiu       $a1, $zero, 0x406
    ctx->r5 = ADD32(0, 0X406);
    after_4:
    // 0x80800388: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8080038C: b           L_808003C0
    // 0x80800390: sw          $t7, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r15;
        goto L_808003C0;
    // 0x80800390: sw          $t7, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r15;
L_80800394:
    // 0x80800394: jal         0x80000000
    // 0x80800398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbfly(rdram, ctx);
        goto after_5;
    // 0x80800398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080039C: jal         0x8009BB50
    // 0x808003A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_6;
    // 0x808003A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808003A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808003A8: addiu       $t8, $zero, 0x24
    ctx->r24 = ADD32(0, 0X24);
    // 0x808003AC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x808003B0: nop

    // 0x808003B4: bc1fl       L_808003C4
    if (!c1cs) {
        // 0x808003B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003C4;
    }
    goto skip_0;
    // 0x808003B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808003BC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_808003C0:
    // 0x808003C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808003C4:
    // 0x808003C4: jal         0x8009E5C8
    // 0x808003C8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_7;
    // 0x808003C8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_7:
    // 0x808003CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808003D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808003D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808003D8: jr          $ra
    // 0x808003DC: nop

    return;
    // 0x808003DC: nop

;}
RECOMP_FUNC void func_808003E0_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808003EC: jal         0x800C6DA0
    // 0x808003F0: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    func_800C6DA0(rdram, ctx);
        goto after_0;
    // 0x808003F0: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    after_0:
    // 0x808003F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808003F8: jal         0x800A0CF4
    // 0x808003FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_1;
    // 0x808003FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800400: jal         0x800A4E30
    // 0x80800404: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4E30(rdram, ctx);
        goto after_2;
    // 0x80800404: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080040C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800410: jr          $ra
    // 0x80800414: nop

    return;
    // 0x80800414: nop

;}
RECOMP_FUNC void bsbfly_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800418: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080041C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(79, 0X1D48) << 16);
    // 0x80800420: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800424: jr          $ra
    // 0x80800428: lw          $v0, 0x1D48($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1D48));
    return;
    // 0x80800428: lw          $v0, 0x1D48($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1D48));
;}
RECOMP_FUNC void func_8080042C_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080042C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800434: jal         0x8009E6EC
    // 0x80800438: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800438: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080043C: jal         0x80001BB4
    // 0x80800440: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80801BB4_bsbfly(rdram, ctx);
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
RECOMP_FUNC void func_80800454_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800454: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800458: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080045C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800460: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800464: jal         0x80095774
    // 0x80800468: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    func_80095774(rdram, ctx);
        goto after_0;
    // 0x80800468: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    after_0:
    // 0x8080046C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800470: jal         0x80095774
    // 0x80800474: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_80095774(rdram, ctx);
        goto after_1;
    // 0x80800474: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_1:
    // 0x80800478: jal         0x8009E704
    // 0x8080047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E704(rdram, ctx);
        goto after_2;
    // 0x8080047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800480: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x80800484: beq         $v0, $at, L_8080049C
    if (ctx->r2 == ctx->r1) {
        // 0x80800488: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_8080049C;
    }
    // 0x80800488: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x8080048C: beq         $v0, $at, L_8080049C
    if (ctx->r2 == ctx->r1) {
        // 0x80800490: addiu       $at, $zero, 0x91
        ctx->r1 = ADD32(0, 0X91);
            goto L_8080049C;
    }
    // 0x80800490: addiu       $at, $zero, 0x91
    ctx->r1 = ADD32(0, 0X91);
    // 0x80800494: bne         $v0, $at, L_808004D0
    if (ctx->r2 != ctx->r1) {
        // 0x80800498: nop
    
            goto L_808004D0;
    }
    // 0x80800498: nop

L_8080049C:
    // 0x8080049C: jal         0x80084C98
    // 0x808004A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_4(rdram, ctx);
        goto after_3;
    // 0x808004A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808004A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808004A8: bne         $v0, $at, L_808004D0
    if (ctx->r2 != ctx->r1) {
        // 0x808004AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004D0;
    }
    // 0x808004AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004B0: jal         0x80095760
    // 0x808004B4: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    func_80095760(rdram, ctx);
        goto after_4;
    // 0x808004B4: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    after_4:
    // 0x808004B8: jal         0x80084CA0
    // 0x808004BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_5(rdram, ctx);
        goto after_5;
    // 0x808004BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808004C0: beq         $v0, $zero, L_808004D0
    if (ctx->r2 == 0) {
        // 0x808004C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004D0;
    }
    // 0x808004C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004C8: jal         0x80095760
    // 0x808004CC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_80095760(rdram, ctx);
        goto after_6;
    // 0x808004CC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_6:
L_808004D0:
    // 0x808004D0: jal         0x80084D00
    // 0x808004D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_17(rdram, ctx);
        goto after_7;
    // 0x808004D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808004D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004DC: jal         0x80084BF8
    // 0x808004E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    _bafly_entrypoint_6(rdram, ctx);
        goto after_8;
    // 0x808004E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_8:
    // 0x808004E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004E8: jal         0x80084C00
    // 0x808004EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bafly_entrypoint_7(rdram, ctx);
        goto after_9;
    // 0x808004EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x808004F0: jal         0x80000188
    // 0x808004F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800188_bsbfly(rdram, ctx);
        goto after_10;
    // 0x808004F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808004F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808004FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800500: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800504: jr          $ra
    // 0x80800508: nop

    return;
    // 0x80800508: nop

;}
RECOMP_FUNC void func_8080050C_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080050C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800510: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800514: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800518: lui         $a2, 0x3F1E
    ctx->r6 = S32(0X3F1E << 16);
    // 0x8080051C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800520: ori         $a2, $a2, 0xB852
    ctx->r6 = ctx->r6 | 0XB852;
    // 0x80800524: jal         0x8008CB3C
    // 0x80800528: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    func_8008CB3C(rdram, ctx);
        goto after_0;
    // 0x80800528: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    after_0:
    // 0x8080052C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80800530: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800538: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080053C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800540: jal         0x8009FFD8
    // 0x80800544: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800544: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x80800548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080054C: jal         0x80095738
    // 0x80800550: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80095738(rdram, ctx);
        goto after_2;
    // 0x80800550: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_2:
    // 0x80800554: beq         $v0, $zero, L_8080056C
    if (ctx->r2 == 0) {
        // 0x80800558: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080056C;
    }
    // 0x80800558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080055C: jal         0x8009B9B0
    // 0x80800560: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80800560: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800564: b           L_80800578
    // 0x80800568: nop

        goto L_80800578;
    // 0x80800568: nop

L_8080056C:
    // 0x8080056C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800570: jal         0x8009B9B0
    // 0x80800574: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800574: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_4:
L_80800578:
    // 0x80800578: jal         0x8009C990
    // 0x8080057C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_5;
    // 0x8080057C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800580: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80800584: jal         0x8009BB00
    // 0x80800588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_6;
    // 0x80800588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080058C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800594: jal         0x8009BA68
    // 0x80800598: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009BA68(rdram, ctx);
        goto after_7;
    // 0x80800598: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_7:
    // 0x8080059C: jal         0x8009C990
    // 0x808005A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_8;
    // 0x808005A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808005A4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808005A8: jal         0x8009B9C0
    // 0x808005AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_9;
    // 0x808005AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808005B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005B4: jal         0x800A0CF4
    // 0x808005B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_10;
    // 0x808005B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005C0: jal         0x8009BCB4
    // 0x808005C4: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_11;
    // 0x808005C4: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    after_11:
    // 0x808005C8: lui         $a1, 0xC2C7
    ctx->r5 = S32(0XC2C7 << 16);
    // 0x808005CC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808005D0: jal         0x8009BCC4
    // 0x808005D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_12;
    // 0x808005D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808005D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005DC: jal         0x800A4DA4
    // 0x808005E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800A4DA4(rdram, ctx);
        goto after_13;
    // 0x808005E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_13:
    // 0x808005E4: jal         0x80000128
    // 0x808005E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800128_bsbfly(rdram, ctx);
        goto after_14;
    // 0x808005E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808005EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808005F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808005F4: lw          $t7, 0x188($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X188);
    // 0x808005F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005FC: swc1        $f4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f4.u32l;
    // 0x80800600: lw          $t8, 0x188($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X188);
    // 0x80800604: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    // 0x80800608: jal         0x80084C60
    // 0x8080060C: sb          $zero, 0x1C($t8)
    MEM_B(0X1C, ctx->r24) = 0;
    _bafly_entrypoint_19(rdram, ctx);
        goto after_15;
    // 0x8080060C: sb          $zero, 0x1C($t8)
    MEM_B(0X1C, ctx->r24) = 0;
    after_15:
    // 0x80800610: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800614: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800618: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080061C: jr          $ra
    // 0x80800620: nop

    return;
    // 0x80800620: nop

;}
RECOMP_FUNC void func_80800624_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800624: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800628: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8080062C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80800630: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800634: jal         0x8008CABC
    // 0x80800638: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800638: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    after_0:
    // 0x8080063C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80800640: jal         0x80084C68
    // 0x80800644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_20(rdram, ctx);
        goto after_1;
    // 0x80800644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800648: jal         0x80084C10
    // 0x8080064C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_9(rdram, ctx);
        goto after_2;
    // 0x8080064C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800654: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x80800658: jal         0x80084C18
    // 0x8080065C: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    _bafly_entrypoint_10(rdram, ctx);
        goto after_3;
    // 0x8080065C: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    after_3:
    // 0x80800660: jal         0x80084C20
    // 0x80800664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_11(rdram, ctx);
        goto after_4;
    // 0x80800664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080066C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80800670: jal         0x80091A58
    // 0x80800674: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_80091A58(rdram, ctx);
        goto after_5;
    // 0x80800674: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_5:
    // 0x80800678: beq         $v0, $zero, L_8080068C
    if (ctx->r2 == 0) {
        // 0x8080067C: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_8080068C;
    }
    // 0x8080067C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80800680: lw          $t7, 0x188($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X188);
    // 0x80800684: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800688: sb          $t6, 0x1C($t7)
    MEM_B(0X1C, ctx->r15) = ctx->r14;
L_8080068C:
    // 0x8080068C: lw          $t8, 0x188($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X188);
    // 0x80800690: lbu         $t9, 0x1C($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X1C);
    // 0x80800694: beq         $t9, $zero, L_808006D0
    if (ctx->r25 == 0) {
        // 0x80800698: nop
    
            goto L_808006D0;
    }
    // 0x80800698: nop

    // 0x8080069C: jal         0x8001211C
    // 0x808006A0: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_8001211C(rdram, ctx);
        goto after_6;
    // 0x808006A0: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_6:
    // 0x808006A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808006A8: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x808006AC: mfhi        $t0
    ctx->r8 = hi;
    // 0x808006B0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x808006B4: bne         $t0, $zero, L_808006D0
    if (ctx->r8 != 0) {
        // 0x808006B8: nop
    
            goto L_808006D0;
    }
    // 0x808006B8: nop

    // 0x808006BC: lw          $t1, 0x188($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X188);
    // 0x808006C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006C4: jal         0x80084C28
    // 0x808006C8: sb          $zero, 0x1C($t1)
    MEM_B(0X1C, ctx->r9) = 0;
    _bafly_entrypoint_12(rdram, ctx);
        goto after_7;
    // 0x808006C8: sb          $zero, 0x1C($t1)
    MEM_B(0X1C, ctx->r9) = 0;
    after_7:
    // 0x808006CC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_808006D0:
    // 0x808006D0: bne         $v1, $zero, L_808006E4
    if (ctx->r3 != 0) {
        // 0x808006D4: nop
    
            goto L_808006E4;
    }
    // 0x808006D4: nop

    // 0x808006D8: lw          $t2, 0x15C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X15C);
    // 0x808006DC: beq         $t2, $zero, L_80800734
    if (ctx->r10 == 0) {
        // 0x808006E0: nop
    
            goto L_80800734;
    }
    // 0x808006E0: nop

L_808006E4:
    // 0x808006E4: beq         $v1, $zero, L_80800704
    if (ctx->r3 == 0) {
        // 0x808006E8: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_80800704;
    }
    // 0x808006E8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x808006EC: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x808006F0: jal         0x8008B1BC
    // 0x808006F4: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    func_8008B1BC(rdram, ctx);
        goto after_8;
    // 0x808006F4: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    after_8:
    // 0x808006F8: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    // 0x808006FC: jal         0x80085948
    // 0x80800700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _chusefeather_entrypoint_1(rdram, ctx);
        goto after_9;
    // 0x80800700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
L_80800704:
    // 0x80800704: lw          $t3, 0x15C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X15C);
    // 0x80800708: lui         $a1, 0x3EB3
    ctx->r5 = S32(0X3EB3 << 16);
    // 0x8080070C: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80800710: beq         $t3, $zero, L_8080072C
    if (ctx->r11 == 0) {
        // 0x80800714: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080072C;
    }
    // 0x80800714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800718: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x8080071C: jal         0x80084598
    // 0x80800720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baboost_entrypoint_2(rdram, ctx);
        goto after_10;
    // 0x80800720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800724: b           L_80800734
    // 0x80800728: nop

        goto L_80800734;
    // 0x80800728: nop

L_8080072C:
    // 0x8080072C: jal         0x80084598
    // 0x80800730: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    _baboost_entrypoint_2(rdram, ctx);
        goto after_11;
    // 0x80800730: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_11:
L_80800734:
    // 0x80800734: jal         0x80084590
    // 0x80800738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baboost_entrypoint_1(rdram, ctx);
        goto after_12;
    // 0x80800738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8080073C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80800740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800744: jal         0x80084C00
    // 0x80800748: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bafly_entrypoint_7(rdram, ctx);
        goto after_13;
    // 0x80800748: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x8080074C: lw          $v0, 0x160($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X160);
    // 0x80800750: beq         $v0, $zero, L_80800768
    if (ctx->r2 == 0) {
        // 0x80800754: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80800768;
    }
    // 0x80800754: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800758: beq         $v0, $at, L_80800780
    if (ctx->r2 == ctx->r1) {
        // 0x8080075C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800780;
    }
    // 0x8080075C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800760: b           L_8080084C
    // 0x80800764: lui         $a1, 0x3E0B
    ctx->r5 = S32(0X3E0B << 16);
        goto L_8080084C;
    // 0x80800764: lui         $a1, 0x3E0B
    ctx->r5 = S32(0X3E0B << 16);
L_80800768:
    // 0x80800768: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8080076C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80800770: beql        $t4, $zero, L_8080084C
    if (ctx->r12 == 0) {
        // 0x80800774: lui         $a1, 0x3E0B
        ctx->r5 = S32(0X3E0B << 16);
            goto L_8080084C;
    }
    goto skip_0;
    // 0x80800774: lui         $a1, 0x3E0B
    ctx->r5 = S32(0X3E0B << 16);
    skip_0:
    // 0x80800778: b           L_80800848
    // 0x8080077C: sw          $t5, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r13;
        goto L_80800848;
    // 0x8080077C: sw          $t5, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r13;
L_80800780:
    // 0x80800780: jal         0x80084C00
    // 0x80800784: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bafly_entrypoint_7(rdram, ctx);
        goto after_14;
    // 0x80800784: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x80800788: jal         0x8009BFD8
    // 0x8080078C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BFD8(rdram, ctx);
        goto after_15;
    // 0x8080078C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800790: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80800794: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800798: jal         0x800136E4
    // 0x8080079C: sub.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f4.fl;
    func_800136E4(rdram, ctx);
        goto after_16;
    // 0x8080079C: sub.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f4.fl;
    after_16:
    // 0x808007A0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x808007A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808007A8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x808007AC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x808007B0: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x808007B4: nop

    // 0x808007B8: bc1fl       L_808007E4
    if (!c1cs) {
        // 0x808007BC: mfc1        $a1, $f2
        ctx->r5 = (int32_t)ctx->f2.u32l;
            goto L_808007E4;
    }
    goto skip_1;
    // 0x808007BC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    skip_1:
    // 0x808007C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808007C4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x808007C8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x808007CC: nop

    // 0x808007D0: bc1fl       L_808007E4
    if (!c1cs) {
        // 0x808007D4: mfc1        $a1, $f2
        ctx->r5 = (int32_t)ctx->f2.u32l;
            goto L_808007E4;
    }
    goto skip_2;
    // 0x808007D4: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    skip_2:
    // 0x808007D8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x808007DC: nop

    // 0x808007E0: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_808007E4:
    // 0x808007E4: jal         0x8009BF5C
    // 0x808007E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BF5C(rdram, ctx);
        goto after_17;
    // 0x808007E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x808007EC: jal         0x80084C70
    // 0x808007F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_21(rdram, ctx);
        goto after_18;
    // 0x808007F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x808007F4: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x808007F8: beq         $v0, $zero, L_80800828
    if (ctx->r2 == 0) {
        // 0x808007FC: nop
    
            goto L_80800828;
    }
    // 0x808007FC: nop

    // 0x80800800: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80800804: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x80800808: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8080080C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80800810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800814: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80800818: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8080081C: jal         0x8009BA58
    // 0x80800820: nop

    func_8009BA58(rdram, ctx);
        goto after_19;
    // 0x80800820: nop

    after_19:
    // 0x80800824: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
L_80800828:
    // 0x80800828: bne         $v0, $zero, L_80800848
    if (ctx->r2 != 0) {
        // 0x8080082C: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_80800848;
    }
    // 0x8080082C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80800830: lui         $a1, 0x3F1E
    ctx->r5 = S32(0X3F1E << 16);
    // 0x80800834: jal         0x8008B1BC
    // 0x80800838: ori         $a1, $a1, 0xB852
    ctx->r5 = ctx->r5 | 0XB852;
    func_8008B1BC(rdram, ctx);
        goto after_20;
    // 0x80800838: ori         $a1, $a1, 0xB852
    ctx->r5 = ctx->r5 | 0XB852;
    after_20:
    // 0x8080083C: jal         0x80084C68
    // 0x80800840: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_20(rdram, ctx);
        goto after_21;
    // 0x80800840: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800844: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
L_80800848:
    // 0x80800848: lui         $a1, 0x3E0B
    ctx->r5 = S32(0X3E0B << 16);
L_8080084C:
    // 0x8080084C: ori         $a1, $a1, 0xF28
    ctx->r5 = ctx->r5 | 0XF28;
    // 0x80800850: jal         0x8008B348
    // 0x80800854: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_8008B348(rdram, ctx);
        goto after_22;
    // 0x80800854: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_22:
    // 0x80800858: beq         $v0, $zero, L_80800888
    if (ctx->r2 == 0) {
        // 0x8080085C: lui         $a2, 0x3F19
        ctx->r6 = S32(0X3F19 << 16);
            goto L_80800888;
    }
    // 0x8080085C: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x80800860: lui         $a3, 0x3F33
    ctx->r7 = S32(0X3F33 << 16);
    // 0x80800864: addiu       $t6, $zero, 0x2710
    ctx->r14 = ADD32(0, 0X2710);
    // 0x80800868: addiu       $t7, $zero, 0x2EE0
    ctx->r15 = ADD32(0, 0X2EE0);
    // 0x8080086C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80800870: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800874: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x80800878: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x8080087C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800880: jal         0x8009DFD4
    // 0x80800884: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    func_8009DFD4(rdram, ctx);
        goto after_23;
    // 0x80800884: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    after_23:
L_80800888:
    // 0x80800888: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x8080088C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800890: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(79, 0X1D00) << 16);
    // 0x80800894: lwc1        $f8, 0x1D00($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(79, 0X1D00));
    // 0x80800898: lui         $at, 0xC42F
    ctx->r1 = S32(0XC42F << 16);
    // 0x8080089C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808008A0: lui         $at, 0xC47A
    ctx->r1 = S32(0XC47A << 16);
    // 0x808008A4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x808008A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008AC: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x808008B0: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x808008B4: lui         $a3, 0x4416
    ctx->r7 = S32(0X4416 << 16);
    // 0x808008B8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x808008BC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x808008C0: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x808008C4: jal         0x80084C08
    // 0x808008C8: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    _bafly_entrypoint_8(rdram, ctx);
        goto after_24;
    // 0x808008C8: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_24:
    // 0x808008CC: jal         0x80084C98
    // 0x808008D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_4(rdram, ctx);
        goto after_25;
    // 0x808008D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x808008D4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808008D8: beq         $v0, $at, L_808008F4
    if (ctx->r2 == ctx->r1) {
        // 0x808008DC: nop
    
            goto L_808008F4;
    }
    // 0x808008DC: nop

    // 0x808008E0: jal         0x80097A90
    // 0x808008E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097A90(rdram, ctx);
        goto after_26;
    // 0x808008E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x808008E8: beq         $v0, $zero, L_808008F4
    if (ctx->r2 == 0) {
        // 0x808008EC: addiu       $t8, $zero, 0xF
        ctx->r24 = ADD32(0, 0XF);
            goto L_808008F4;
    }
    // 0x808008EC: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x808008F0: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
L_808008F4:
    // 0x808008F4: jal         0x800D8FF8
    // 0x808008F8: nop

    func_800D8FF8(rdram, ctx);
        goto after_27;
    // 0x808008F8: nop

    after_27:
    // 0x808008FC: lw          $t9, 0x188($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X188);
    // 0x80800900: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800904: lwc1        $f18, 0x0($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80800908: jal         0x800F0E00
    // 0x8080090C: sub.s       $f12, $f18, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f0.fl;
    func_800F0E00(rdram, ctx);
        goto after_28;
    // 0x8080090C: sub.s       $f12, $f18, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f0.fl;
    after_28:
    // 0x80800910: lw          $t0, 0x188($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X188);
    // 0x80800914: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080091C: swc1        $f0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f0.u32l;
    // 0x80800920: lw          $t1, 0x188($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X188);
    // 0x80800924: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80800928: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8080092C: nop

    // 0x80800930: bc1f        L_8080096C
    if (!c1cs) {
        // 0x80800934: nop
    
            goto L_8080096C;
    }
    // 0x80800934: nop

    // 0x80800938: jal         0x80091A58
    // 0x8080093C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_29;
    // 0x8080093C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_29:
    // 0x80800940: beq         $v0, $zero, L_8080096C
    if (ctx->r2 == 0) {
        // 0x80800944: nop
    
            goto L_8080096C;
    }
    // 0x80800944: nop

    // 0x80800948: jal         0x8008D0E0
    // 0x8080094C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D0E0(rdram, ctx);
        goto after_30;
    // 0x8080094C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x80800950: beq         $v0, $zero, L_8080096C
    if (ctx->r2 == 0) {
        // 0x80800954: nop
    
            goto L_8080096C;
    }
    // 0x80800954: nop

    // 0x80800958: jal         0x80084C28
    // 0x8080095C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_12(rdram, ctx);
        goto after_31;
    // 0x8080095C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x80800960: beq         $v0, $zero, L_8080096C
    if (ctx->r2 == 0) {
        // 0x80800964: addiu       $t2, $zero, 0x2A
        ctx->r10 = ADD32(0, 0X2A);
            goto L_8080096C;
    }
    // 0x80800964: addiu       $t2, $zero, 0x2A
    ctx->r10 = ADD32(0, 0X2A);
    // 0x80800968: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
L_8080096C:
    // 0x8080096C: jal         0x8008E35C
    // 0x80800970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_32;
    // 0x80800970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x80800974: beq         $v0, $zero, L_80800980
    if (ctx->r2 == 0) {
        // 0x80800978: addiu       $t3, $zero, 0x2D
        ctx->r11 = ADD32(0, 0X2D);
            goto L_80800980;
    }
    // 0x80800978: addiu       $t3, $zero, 0x2D
    ctx->r11 = ADD32(0, 0X2D);
    // 0x8080097C: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
L_80800980:
    // 0x80800980: jal         0x80084BD8
    // 0x80800984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_2(rdram, ctx);
        goto after_33;
    // 0x80800984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x80800988: beq         $v0, $zero, L_80800994
    if (ctx->r2 == 0) {
        // 0x8080098C: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_80800994;
    }
    // 0x8080098C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80800990: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
L_80800994:
    // 0x80800994: jal         0x800845B0
    // 0x80800998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baboost_entrypoint_5(rdram, ctx);
        goto after_34;
    // 0x80800998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x8080099C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009A0: jal         0x8009E5C8
    // 0x808009A4: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_8009E5C8(rdram, ctx);
        goto after_35;
    // 0x808009A4: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_35:
    // 0x808009A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x808009AC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x808009B0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x808009B4: jr          $ra
    // 0x808009B8: nop

    return;
    // 0x808009B8: nop

;}
RECOMP_FUNC void bsbfly_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009BC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808009C0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(79, 0X1D58) << 16);
    // 0x808009C4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808009C8: jr          $ra
    // 0x808009CC: lw          $v0, 0x1D58($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1D58));
    return;
    // 0x808009CC: lw          $v0, 0x1D58($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1D58));
;}
RECOMP_FUNC void func_808009D0_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808009D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808009D8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x808009DC: jal         0x8009C128
    // 0x808009E0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x808009E0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x808009E4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x808009E8: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x808009EC: lw          $a1, 0x188($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X188);
    // 0x808009F0: jal         0x800EF04C
    // 0x808009F4: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_800EF04C(rdram, ctx);
        goto after_1;
    // 0x808009F4: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_1:
    // 0x808009F8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808009FC: jal         0x800A34AC
    // 0x80800A00: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800A34AC(rdram, ctx);
        goto after_2;
    // 0x80800A00: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x80800A04: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800A08: addiu       $a1, $zero, 0x40D
    ctx->r5 = ADD32(0, 0X40D);
    // 0x80800A0C: jal         0x8009DF58
    // 0x80800A10: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DF58(rdram, ctx);
        goto after_3;
    // 0x80800A10: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
    // 0x80800A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800A1C: jr          $ra
    // 0x80800A20: nop

    return;
    // 0x80800A20: nop

;}
RECOMP_FUNC void func_80800A24_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A24: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800A28: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800A2C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800A30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800A34: jal         0x8008CABC
    // 0x80800A38: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800A38: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800A3C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x80800A40: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80800A44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800A48: beq         $v1, $zero, L_80800A78
    if (ctx->r3 == 0) {
        // 0x80800A4C: nop
    
            goto L_80800A78;
    }
    // 0x80800A4C: nop

    // 0x80800A50: beq         $v1, $at, L_80800A94
    if (ctx->r3 == ctx->r1) {
        // 0x80800A54: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A94;
    }
    // 0x80800A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A58: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800A5C: beq         $v1, $at, L_80800BA8
    if (ctx->r3 == ctx->r1) {
        // 0x80800A60: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800BA8;
    }
    // 0x80800A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A64: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800A68: beql        $v1, $at, L_80800C24
    if (ctx->r3 == ctx->r1) {
        // 0x80800A6C: sw          $v1, 0x160($s0)
        MEM_W(0X160, ctx->r16) = ctx->r3;
            goto L_80800C24;
    }
    goto skip_0;
    // 0x80800A6C: sw          $v1, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r3;
    skip_0:
    // 0x80800A70: b           L_80800C24
    // 0x80800A74: sw          $v1, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r3;
        goto L_80800C24;
    // 0x80800A74: sw          $v1, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r3;
L_80800A78:
    // 0x80800A78: jal         0x8009E0DC
    // 0x80800A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E0DC(rdram, ctx);
        goto after_1;
    // 0x80800A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A84: jal         0x80095774
    // 0x80800A88: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    func_80095774(rdram, ctx);
        goto after_2;
    // 0x80800A88: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_2:
    // 0x80800A8C: b           L_80800C20
    // 0x80800A90: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
        goto L_80800C20;
    // 0x80800A90: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
L_80800A94:
    // 0x80800A94: addiu       $a1, $zero, 0x43
    ctx->r5 = ADD32(0, 0X43);
    // 0x80800A98: jal         0x8008CCBC
    // 0x80800A9C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_3;
    // 0x80800A9C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
    // 0x80800AA0: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
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
        goto after_4;
    // 0x80800AB8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_4:
    // 0x80800ABC: lw          $a1, 0x188($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X188);
    // 0x80800AC0: lui         $a3, 0x4583
    ctx->r7 = S32(0X4583 << 16);
    // 0x80800AC4: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x80800AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800ACC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80800AD0: jal         0x80084BD0
    // 0x80800AD4: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    _bafly_entrypoint_1(rdram, ctx);
        goto after_5;
    // 0x80800AD4: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_5:
    // 0x80800AD8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800ADC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800AE0: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800AE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AE8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80800AEC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80800AF0: jal         0x8009C914
    // 0x80800AF4: nop

    func_8009C914(rdram, ctx);
        goto after_6;
    // 0x80800AF4: nop

    after_6:
    // 0x80800AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AFC: jal         0x8009BF5C
    // 0x80800B00: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009BF5C(rdram, ctx);
        goto after_7;
    // 0x80800B00: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_7:
    // 0x80800B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B08: jal         0x8009C4CC
    // 0x80800B0C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_8;
    // 0x80800B0C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_8:
    // 0x80800B10: lw          $a1, 0x188($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X188);
    // 0x80800B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B18: jal         0x8009BA9C
    // 0x80800B1C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_8009BA9C(rdram, ctx);
        goto after_9;
    // 0x80800B1C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_9:
    // 0x80800B20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B24: jal         0x800A0CF4
    // 0x80800B28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_10;
    // 0x80800B28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x80800B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B30: jal         0x800A4DA4
    // 0x80800B34: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800A4DA4(rdram, ctx);
        goto after_11;
    // 0x80800B34: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_11:
    // 0x80800B38: jal         0x800A4CA8
    // 0x80800B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_12;
    // 0x80800B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800B40: lw          $a1, 0x188($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X188);
    // 0x80800B44: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800B48: jal         0x800892B8
    // 0x80800B4C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    _ncbadive_entrypoint_4(rdram, ctx);
        goto after_13;
    // 0x80800B4C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_13:
    // 0x80800B50: jal         0x800A4CA8
    // 0x80800B54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_14;
    // 0x80800B54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800B58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800B5C: jal         0x800892E8
    // 0x80800B60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _ncbafly_entrypoint_5(rdram, ctx);
        goto after_15;
    // 0x80800B60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x80800B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B68: addiu       $a1, $zero, 0x439
    ctx->r5 = ADD32(0, 0X439);
    // 0x80800B6C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800B70: jal         0x8009DF94
    // 0x80800B74: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    func_8009DF94(rdram, ctx);
        goto after_16;
    // 0x80800B74: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    after_16:
    // 0x80800B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B7C: jal         0x80095774
    // 0x80800B80: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    func_80095774(rdram, ctx);
        goto after_17;
    // 0x80800B80: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_17:
    // 0x80800B84: lw          $a1, 0x188($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X188);
    // 0x80800B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B8C: jal         0x8009C128
    // 0x80800B90: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_8009C128(rdram, ctx);
        goto after_18;
    // 0x80800B90: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_18:
    // 0x80800B94: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    // 0x80800B98: jal         0x80085948
    // 0x80800B9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _chusefeather_entrypoint_1(rdram, ctx);
        goto after_19;
    // 0x80800B9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
    // 0x80800BA0: b           L_80800C20
    // 0x80800BA4: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
        goto L_80800C20;
    // 0x80800BA4: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
L_80800BA8:
    // 0x80800BA8: jal         0x8009B800
    // 0x80800BAC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8009B800(rdram, ctx);
        goto after_20;
    // 0x80800BAC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_20:
    // 0x80800BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BB4: jal         0x800A4DA4
    // 0x80800BB8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800A4DA4(rdram, ctx);
        goto after_21;
    // 0x80800BB8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_21:
    // 0x80800BBC: jal         0x800A4CA8
    // 0x80800BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_22;
    // 0x80800BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80800BC4: lw          $a1, 0x188($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X188);
    // 0x80800BC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800BCC: jal         0x800892B8
    // 0x80800BD0: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    _ncbadive_entrypoint_4(rdram, ctx);
        goto after_23;
    // 0x80800BD0: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_23:
    // 0x80800BD4: lui         $a1, 0x3D4C
    ctx->r5 = S32(0X3D4C << 16);
    // 0x80800BD8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800BDC: jal         0x8008B1BC
    // 0x80800BE0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B1BC(rdram, ctx);
        goto after_24;
    // 0x80800BE0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_24:
    // 0x80800BE4: lui         $a2, 0x3FA6
    ctx->r6 = S32(0X3FA6 << 16);
    // 0x80800BE8: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BF0: addiu       $a1, $zero, 0x4437
    ctx->r5 = ADD32(0, 0X4437);
    // 0x80800BF4: jal         0x8009DF94
    // 0x80800BF8: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DF94(rdram, ctx);
        goto after_25;
    // 0x80800BF8: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_25:
    // 0x80800BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C00: jal         0x80095760
    // 0x80800C04: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    func_80095760(rdram, ctx);
        goto after_26;
    // 0x80800C04: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_26:
    // 0x80800C08: lui         $a2, 0x38D1
    ctx->r6 = S32(0X38D1 << 16);
    // 0x80800C0C: ori         $a2, $a2, 0xB717
    ctx->r6 = ctx->r6 | 0XB717;
    // 0x80800C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C14: jal         0x80085338
    // 0x80800C18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_set(rdram, ctx);
        goto after_27;
    // 0x80800C18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_27:
    // 0x80800C1C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
L_80800C20:
    // 0x80800C20: sw          $v1, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r3;
L_80800C24:
    // 0x80800C24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800C28: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800C2C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80800C30: jr          $ra
    // 0x80800C34: nop

    return;
    // 0x80800C34: nop

;}
RECOMP_FUNC void func_80800C38_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C38: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80800C3C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800C40: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800C44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800C48: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800C4C: lw          $a1, 0x188($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X188);
    // 0x80800C50: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80800C54: jal         0x800EE7F8
    // 0x80800C58: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80800C58: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_0:
    // 0x80800C5C: jal         0x800A4C48
    // 0x80800C60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A4C48(rdram, ctx);
        goto after_1;
    // 0x80800C60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80800C64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800C68: jal         0x800CA9D8
    // 0x80800C6C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800CA9D8(rdram, ctx);
        goto after_2;
    // 0x80800C6C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x80800C70: jal         0x8009EF28
    // 0x80800C74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EF28(rdram, ctx);
        goto after_3;
    // 0x80800C74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x80800C78: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80800C7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800C80: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80800C84: addiu       $s0, $sp, 0x44
    ctx->r16 = ADD32(ctx->r29, 0X44);
    // 0x80800C88: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80800C8C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80800C90: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80800C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C98: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80800C9C: jal         0x800EFA4C
    // 0x80800CA0: nop

    func_800EFA4C(rdram, ctx);
        goto after_4;
    // 0x80800CA0: nop

    after_4:
    // 0x80800CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80800CAC: jal         0x800EF8BC
    // 0x80800CB0: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_800EF8BC(rdram, ctx);
        goto after_5;
    // 0x80800CB0: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x80800CB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CB8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80800CBC: jal         0x800EF934
    // 0x80800CC0: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    func_800EF934(rdram, ctx);
        goto after_6;
    // 0x80800CC0: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_6:
    // 0x80800CC4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80800CC8: jal         0x800EF04C
    // 0x80800CCC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EF04C(rdram, ctx);
        goto after_7;
    // 0x80800CCC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
    // 0x80800CD0: jal         0x8009EF34
    // 0x80800CD4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EF34(rdram, ctx);
        goto after_8;
    // 0x80800CD4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x80800CD8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80800CDC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800CE0: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x80800CE4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80800CE8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80800CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CF0: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80800CF4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80800CF8: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80800CFC: jal         0x800EFA4C
    // 0x80800D00: nop

    func_800EFA4C(rdram, ctx);
        goto after_9;
    // 0x80800D00: nop

    after_9:
    // 0x80800D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D08: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80800D0C: jal         0x800EF8BC
    // 0x80800D10: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_800EF8BC(rdram, ctx);
        goto after_10;
    // 0x80800D10: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_10:
    // 0x80800D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80800D1C: jal         0x800EF934
    // 0x80800D20: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    func_800EF934(rdram, ctx);
        goto after_11;
    // 0x80800D20: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_11:
    // 0x80800D24: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80800D28: jal         0x800EF04C
    // 0x80800D2C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EF04C(rdram, ctx);
        goto after_12;
    // 0x80800D2C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_12:
    // 0x80800D30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800D34: jal         0x8009BA9C
    // 0x80800D38: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8009BA9C(rdram, ctx);
        goto after_13;
    // 0x80800D38: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_13:
    // 0x80800D3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800D40: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800D44: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800D48: jr          $ra
    // 0x80800D4C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80800D4C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80800D50_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D58: jal         0x80000128
    // 0x80800D5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800128_bsbfly(rdram, ctx);
        goto after_0;
    // 0x80800D5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800D64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800D68: jal         0x80000A24
    // 0x80800D6C: sw          $zero, 0x160($a0)
    MEM_W(0X160, ctx->r4) = 0;
    func_80800A24_bsbfly(rdram, ctx);
        goto after_1;
    // 0x80800D6C: sw          $zero, 0x160($a0)
    MEM_W(0X160, ctx->r4) = 0;
    after_1:
    // 0x80800D70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D78: jr          $ra
    // 0x80800D7C: nop

    return;
    // 0x80800D7C: nop

;}
RECOMP_FUNC void func_80800D80_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D80: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800D84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800D88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800D8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800D90: jal         0x8008E35C
    // 0x80800D94: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    func_8008E35C(rdram, ctx);
        goto after_0;
    // 0x80800D94: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800D98: beq         $v0, $zero, L_80800DA4
    if (ctx->r2 == 0) {
        // 0x80800D9C: addiu       $t6, $zero, 0x4C
        ctx->r14 = ADD32(0, 0X4C);
            goto L_80800DA4;
    }
    // 0x80800D9C: addiu       $t6, $zero, 0x4C
    ctx->r14 = ADD32(0, 0X4C);
    // 0x80800DA0: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
L_80800DA4:
    // 0x80800DA4: jal         0x8008E078
    // 0x80800DA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_1;
    // 0x80800DA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800DAC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800DB0: jal         0x8009650C
    // 0x80800DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009650C(rdram, ctx);
        goto after_2;
    // 0x80800DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800DB8: bne         $v0, $zero, L_80800DD0
    if (ctx->r2 != 0) {
        // 0x80800DBC: lw          $t7, 0x24($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X24);
            goto L_80800DD0;
    }
    // 0x80800DBC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80800DC0: bnel        $t7, $zero, L_80800DD4
    if (ctx->r15 != 0) {
        // 0x80800DC4: lw          $t8, 0x24($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X24);
            goto L_80800DD4;
    }
    goto skip_0;
    // 0x80800DC4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80800DC8: b           L_80800EFC
    // 0x80800DCC: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
        goto L_80800EFC;
    // 0x80800DCC: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
L_80800DD0:
    // 0x80800DD0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
L_80800DD4:
    // 0x80800DD4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80800DD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DDC: beq         $t8, $zero, L_80800DFC
    if (ctx->r24 == 0) {
        // 0x80800DE0: nop
    
            goto L_80800DFC;
    }
    // 0x80800DE0: nop

    // 0x80800DE4: jal         0x800963C0
    // 0x80800DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800963C0(rdram, ctx);
        goto after_3;
    // 0x80800DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800DEC: jal         0x80096628
    // 0x80800DF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096628(rdram, ctx);
        goto after_4;
    // 0x80800DF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800DF4: b           L_80800E10
    // 0x80800DF8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
        goto L_80800E10;
    // 0x80800DF8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
L_80800DFC:
    // 0x80800DFC: jal         0x80096440
    // 0x80800E00: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_80096440(rdram, ctx);
        goto after_5;
    // 0x80800E00: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_5:
    // 0x80800E04: jal         0x80096434
    // 0x80800E08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096434(rdram, ctx);
        goto after_6;
    // 0x80800E08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800E0C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
L_80800E10:
    // 0x80800E10: lw          $a1, 0x188($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X188);
    // 0x80800E14: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80800E18: jal         0x800EE7F8
    // 0x80800E1C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_800EE7F8(rdram, ctx);
        goto after_7;
    // 0x80800E1C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_7:
    // 0x80800E20: jal         0x800EF2A0
    // 0x80800E24: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_800EF2A0(rdram, ctx);
        goto after_8;
    // 0x80800E24: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_8:
    // 0x80800E28: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80800E2C: jal         0x800EEAA4
    // 0x80800E30: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800EEAA4(rdram, ctx);
        goto after_9;
    // 0x80800E30: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_9:
    // 0x80800E34: jal         0x800F2100
    // 0x80800E38: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_10;
    // 0x80800E38: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_10:
    // 0x80800E3C: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x80800E40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E44: jal         0x80095738
    // 0x80800E48: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80095738(rdram, ctx);
        goto after_11;
    // 0x80800E48: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_11:
    // 0x80800E4C: bne         $v0, $zero, L_80800E60
    if (ctx->r2 != 0) {
        // 0x80800E50: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_80800E60;
    }
    // 0x80800E50: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80800E54: andi        $t0, $t9, 0x80
    ctx->r8 = ctx->r25 & 0X80;
    // 0x80800E58: beq         $t0, $zero, L_80800E74
    if (ctx->r8 == 0) {
        // 0x80800E5C: lui         $at, 0x0
        ctx->r1 = S32(RELOC_HI16(79, 0X1D04) << 16);
            goto L_80800E74;
    }
    // 0x80800E5C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(79, 0X1D04) << 16);
L_80800E60:
    // 0x80800E60: jal         0x800009D0
    // 0x80800E64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808009D0_bsbfly(rdram, ctx);
        goto after_12;
    // 0x80800E64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800E68: addiu       $t1, $zero, 0x18
    ctx->r9 = ADD32(0, 0X18);
    // 0x80800E6C: b           L_80800EF8
    // 0x80800E70: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
        goto L_80800EF8;
    // 0x80800E70: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
L_80800E74:
    // 0x80800E74: lwc1        $f4, 0x1D04($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(79, 0X1D04));
    // 0x80800E78: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80800E7C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(79, 0X1D08) << 16);
    // 0x80800E80: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80800E84: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800E88: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80800E8C: bc1f        L_80800EEC
    if (!c1cs) {
        // 0x80800E90: nop
    
            goto L_80800EEC;
    }
    // 0x80800E90: nop

    // 0x80800E94: lwc1        $f10, 0x1D08($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(79, 0X1D08));
    // 0x80800E98: addiu       $t4, $zero, 0x58
    ctx->r12 = ADD32(0, 0X58);
    // 0x80800E9C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80800EA0: nop

    // 0x80800EA4: bc1f        L_80800EE4
    if (!c1cs) {
        // 0x80800EA8: nop
    
            goto L_80800EE4;
    }
    // 0x80800EA8: nop

    // 0x80800EAC: jal         0x800009D0
    // 0x80800EB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808009D0_bsbfly(rdram, ctx);
        goto after_13;
    // 0x80800EB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800EB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EB8: jal         0x800A17A8
    // 0x80800EBC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800A17A8(rdram, ctx);
        goto after_14;
    // 0x80800EBC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_14:
    // 0x80800EC0: jal         0x800A1718
    // 0x80800EC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1718(rdram, ctx);
        goto after_15;
    // 0x80800EC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800EC8: beq         $v0, $zero, L_80800EDC
    if (ctx->r2 == 0) {
        // 0x80800ECC: addiu       $t3, $zero, 0x41
        ctx->r11 = ADD32(0, 0X41);
            goto L_80800EDC;
    }
    // 0x80800ECC: addiu       $t3, $zero, 0x41
    ctx->r11 = ADD32(0, 0X41);
    // 0x80800ED0: addiu       $t2, $zero, 0x59
    ctx->r10 = ADD32(0, 0X59);
    // 0x80800ED4: b           L_80800EF8
    // 0x80800ED8: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
        goto L_80800EF8;
    // 0x80800ED8: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
L_80800EDC:
    // 0x80800EDC: b           L_80800EF8
    // 0x80800EE0: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
        goto L_80800EF8;
    // 0x80800EE0: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
L_80800EE4:
    // 0x80800EE4: b           L_80800EF8
    // 0x80800EE8: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
        goto L_80800EF8;
    // 0x80800EE8: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
L_80800EEC:
    // 0x80800EEC: beq         $t5, $zero, L_80800EF8
    if (ctx->r13 == 0) {
        // 0x80800EF0: addiu       $t6, $zero, 0x58
        ctx->r14 = ADD32(0, 0X58);
            goto L_80800EF8;
    }
    // 0x80800EF0: addiu       $t6, $zero, 0x58
    ctx->r14 = ADD32(0, 0X58);
    // 0x80800EF4: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
L_80800EF8:
    // 0x80800EF8: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
L_80800EFC:
    // 0x80800EFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800F00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800F04: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80800F08: jr          $ra
    // 0x80800F0C: nop

    return;
    // 0x80800F0C: nop

;}
RECOMP_FUNC void func_80800F10_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F10: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80800F14: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800F18: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800F1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800F20: jal         0x8008CABC
    // 0x80800F24: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800F24: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    after_0:
    // 0x80800F28: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x80800F2C: jal         0x80084C20
    // 0x80800F30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_11(rdram, ctx);
        goto after_1;
    // 0x80800F30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800F34: jal         0x8009DDDC
    // 0x80800F38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009DDDC(rdram, ctx);
        goto after_2;
    // 0x80800F38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800F3C: lw          $v0, 0x160($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X160);
    // 0x80800F40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800F44: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800F48: beq         $v0, $at, L_80800F6C
    if (ctx->r2 == ctx->r1) {
        // 0x80800F4C: lui         $a1, 0x3F30
        ctx->r5 = S32(0X3F30 << 16);
            goto L_80800F6C;
    }
    // 0x80800F4C: lui         $a1, 0x3F30
    ctx->r5 = S32(0X3F30 << 16);
    // 0x80800F50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800F54: beq         $v0, $at, L_80800F8C
    if (ctx->r2 == ctx->r1) {
        // 0x80800F58: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800F8C;
    }
    // 0x80800F58: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800F5C: beq         $v0, $at, L_80801090
    if (ctx->r2 == ctx->r1) {
        // 0x80800F60: nop
    
            goto L_80801090;
    }
    // 0x80800F60: nop

    // 0x80800F64: b           L_8080111C
    // 0x80800F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080111C;
    // 0x80800F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800F6C:
    // 0x80800F6C: jal         0x8008B348
    // 0x80800F70: ori         $a1, $a1, 0xC49C
    ctx->r5 = ctx->r5 | 0XC49C;
    func_8008B348(rdram, ctx);
        goto after_3;
    // 0x80800F70: ori         $a1, $a1, 0xC49C
    ctx->r5 = ctx->r5 | 0XC49C;
    after_3:
    // 0x80800F74: beq         $v0, $zero, L_80801118
    if (ctx->r2 == 0) {
        // 0x80800F78: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801118;
    }
    // 0x80800F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F7C: jal         0x80000A24
    // 0x80800F80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800A24_bsbfly(rdram, ctx);
        goto after_4;
    // 0x80800F80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x80800F84: b           L_8080111C
    // 0x80800F88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080111C;
    // 0x80800F88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800F8C:
    // 0x80800F8C: jal         0x80000C38
    // 0x80800F90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800C38_bsbfly(rdram, ctx);
        goto after_5;
    // 0x80800F90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800F94: jal         0x8008B324
    // 0x80800F98: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_8008B324(rdram, ctx);
        goto after_6;
    // 0x80800F98: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_6:
    // 0x80800F9C: beq         $v0, $zero, L_80800FD0
    if (ctx->r2 == 0) {
        // 0x80800FA0: lw          $a0, 0x48($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X48);
            goto L_80800FD0;
    }
    // 0x80800FA0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800FA4: jal         0x8008AED4
    // 0x80800FA8: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    func_8008AED4(rdram, ctx);
        goto after_7;
    // 0x80800FA8: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    after_7:
    // 0x80800FAC: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800FB0: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800FB4: jal         0x8008B1BC
    // 0x80800FB8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_8008B1BC(rdram, ctx);
        goto after_8;
    // 0x80800FB8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_8:
    // 0x80800FBC: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800FC0: jal         0x8008B134
    // 0x80800FC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_9;
    // 0x80800FC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x80800FC8: jal         0x8008B064
    // 0x80800FCC: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_8008B064(rdram, ctx);
        goto after_10;
    // 0x80800FCC: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_10:
L_80800FD0:
    // 0x80800FD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FD4: jal         0x8009C128
    // 0x80800FD8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_8009C128(rdram, ctx);
        goto after_11;
    // 0x80800FD8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_11:
    // 0x80800FDC: lw          $a1, 0x188($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X188);
    // 0x80800FE0: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80800FE4: jal         0x800EF3DC
    // 0x80800FE8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_800EF3DC(rdram, ctx);
        goto after_12;
    // 0x80800FE8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_12:
    // 0x80800FEC: jal         0x800EEFD4
    // 0x80800FF0: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    func_800EEFD4(rdram, ctx);
        goto after_13;
    // 0x80800FF0: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_13:
    // 0x80800FF4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(79, 0X1D0C) << 16);
    // 0x80800FF8: lwc1        $f4, 0x1D0C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(79, 0X1D0C));
    // 0x80800FFC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80801000: lui         $a2, 0x4B74
    ctx->r6 = S32(0X4B74 << 16);
    // 0x80801004: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x80801008: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x8080100C: ori         $a2, $a2, 0x2400
    ctx->r6 = ctx->r6 | 0X2400;
    // 0x80801010: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80801014: jal         0x800F10B4
    // 0x80801018: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_14;
    // 0x80801018: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x8080101C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80801020: jal         0x80084BF8
    // 0x80801024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_6(rdram, ctx);
        goto after_15;
    // 0x80801024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80801028: jal         0x800EEFD4
    // 0x8080102C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    func_800EEFD4(rdram, ctx);
        goto after_16;
    // 0x8080102C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_16:
    // 0x80801030: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(79, 0X1D10) << 16);
    // 0x80801034: lwc1        $f6, 0x1D10($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(79, 0X1D10));
    // 0x80801038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080103C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80801040: nop

    // 0x80801044: bc1f        L_80801074
    if (!c1cs) {
        // 0x80801048: nop
    
            goto L_80801074;
    }
    // 0x80801048: nop

    // 0x8080104C: jal         0x800919F4
    // 0x80801050: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800919F4(rdram, ctx);
        goto after_17;
    // 0x80801050: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_17:
    // 0x80801054: beq         $v0, $zero, L_80801070
    if (ctx->r2 == 0) {
        // 0x80801058: addiu       $t6, $zero, 0x57
        ctx->r14 = ADD32(0, 0X57);
            goto L_80801070;
    }
    // 0x80801058: addiu       $t6, $zero, 0x57
    ctx->r14 = ADD32(0, 0X57);
    // 0x8080105C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801060: jal         0x80000A24
    // 0x80801064: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80800A24_bsbfly(rdram, ctx);
        goto after_18;
    // 0x80801064: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_18:
    // 0x80801068: b           L_80801074
    // 0x8080106C: nop

        goto L_80801074;
    // 0x8080106C: nop

L_80801070:
    // 0x80801070: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
L_80801074:
    // 0x80801074: jal         0x80000000
    // 0x80801078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbfly(rdram, ctx);
        goto after_19;
    // 0x80801078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x8080107C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801080: jal         0x80000D80
    // 0x80801084: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_80800D80_bsbfly(rdram, ctx);
        goto after_20;
    // 0x80801084: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_20:
    // 0x80801088: b           L_80801118
    // 0x8080108C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
        goto L_80801118;
    // 0x8080108C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
L_80801090:
    // 0x80801090: jal         0x80000C38
    // 0x80801094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800C38_bsbfly(rdram, ctx);
        goto after_21;
    // 0x80801094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80801098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080109C: jal         0x80091A30
    // 0x808010A0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A30(rdram, ctx);
        goto after_22;
    // 0x808010A0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_22:
    // 0x808010A4: beq         $v0, $zero, L_808010B8
    if (ctx->r2 == 0) {
        // 0x808010A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808010B8;
    }
    // 0x808010A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010AC: addiu       $t7, $zero, 0x57
    ctx->r15 = ADD32(0, 0X57);
    // 0x808010B0: b           L_80801100
    // 0x808010B4: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
        goto L_80801100;
    // 0x808010B4: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
L_808010B8:
    // 0x808010B8: jal         0x800852F0
    // 0x808010BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_decrement(rdram, ctx);
        goto after_23;
    // 0x808010BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
    // 0x808010C0: beq         $v0, $zero, L_80801100
    if (ctx->r2 == 0) {
        // 0x808010C4: nop
    
            goto L_80801100;
    }
    // 0x808010C4: nop

    // 0x808010C8: jal         0x80084C28
    // 0x808010CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafly_entrypoint_12(rdram, ctx);
        goto after_24;
    // 0x808010CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x808010D0: beq         $v0, $zero, L_808010FC
    if (ctx->r2 == 0) {
        // 0x808010D4: addiu       $t8, $zero, 0x57
        ctx->r24 = ADD32(0, 0X57);
            goto L_808010FC;
    }
    // 0x808010D4: addiu       $t8, $zero, 0x57
    ctx->r24 = ADD32(0, 0X57);
    // 0x808010D8: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    // 0x808010DC: jal         0x80085948
    // 0x808010E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _chusefeather_entrypoint_1(rdram, ctx);
        goto after_25;
    // 0x808010E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_25:
    // 0x808010E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808010EC: jal         0x80085338
    // 0x808010F0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    _batimer_set(rdram, ctx);
        goto after_26;
    // 0x808010F0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_26:
    // 0x808010F4: b           L_80801100
    // 0x808010F8: nop

        goto L_80801100;
    // 0x808010F8: nop

L_808010FC:
    // 0x808010FC: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
L_80801100:
    // 0x80801100: jal         0x80000000
    // 0x80801104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbfly(rdram, ctx);
        goto after_27;
    // 0x80801104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x80801108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080110C: jal         0x80000D80
    // 0x80801110: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_80800D80_bsbfly(rdram, ctx);
        goto after_28;
    // 0x80801110: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_28:
    // 0x80801114: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
L_80801118:
    // 0x80801118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080111C:
    // 0x8080111C: jal         0x8009E5C8
    // 0x80801120: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009E5C8(rdram, ctx);
        goto after_29;
    // 0x80801120: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_29:
    // 0x80801124: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801128: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080112C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80801130: jr          $ra
    // 0x80801134: nop

    return;
    // 0x80801134: nop

;}
RECOMP_FUNC void func_80801138_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801138: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080113C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801140: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80801144: jal         0x80000A24
    // 0x80801148: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800A24_bsbfly(rdram, ctx);
        goto after_0;
    // 0x80801148: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8080114C: jal         0x80000188
    // 0x80801150: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800188_bsbfly(rdram, ctx);
        goto after_1;
    // 0x80801150: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080115C: jr          $ra
    // 0x80801160: nop

    return;
    // 0x80801160: nop

;}
RECOMP_FUNC void bsbfly_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801164: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801168: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(79, 0X1D68) << 16);
    // 0x8080116C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801170: jr          $ra
    // 0x80801174: lw          $v0, 0x1D68($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1D68));
    return;
    // 0x80801174: lw          $v0, 0x1D68($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1D68));
;}
RECOMP_FUNC void func_80801178_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801178: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080117C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801180: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801184: jal         0x8009E0DC
    // 0x80801188: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E0DC(rdram, ctx);
        goto after_0;
    // 0x80801188: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080118C: jal         0x8009E100
    // 0x80801190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E100(rdram, ctx);
        goto after_1;
    // 0x80801190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801198: jal         0x8009E74C
    // 0x8080119C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8009E74C(rdram, ctx);
        goto after_2;
    // 0x8080119C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_2:
    // 0x808011A0: beq         $v0, $zero, L_808011B0
    if (ctx->r2 == 0) {
        // 0x808011A4: nop
    
            goto L_808011B0;
    }
    // 0x808011A4: nop

    // 0x808011A8: jal         0x800000AC
    // 0x808011AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000AC_bsbfly(rdram, ctx);
        goto after_3;
    // 0x808011AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_808011B0:
    // 0x808011B0: jal         0x8009E704
    // 0x808011B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E704(rdram, ctx);
        goto after_4;
    // 0x808011B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808011B8: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x808011BC: beq         $v0, $at, L_808011D4
    if (ctx->r2 == ctx->r1) {
        // 0x808011C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808011D4;
    }
    // 0x808011C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011C4: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x808011C8: beq         $v0, $at, L_808011D4
    if (ctx->r2 == ctx->r1) {
        // 0x808011CC: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_808011D4;
    }
    // 0x808011CC: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x808011D0: bne         $v0, $at, L_808011E0
    if (ctx->r2 != ctx->r1) {
        // 0x808011D4: addiu       $a1, $zero, 0x3EA
        ctx->r5 = ADD32(0, 0X3EA);
            goto L_808011E0;
    }
L_808011D4:
    // 0x808011D4: addiu       $a1, $zero, 0x3EA
    ctx->r5 = ADD32(0, 0X3EA);
    // 0x808011D8: jal         0x8009DBF0
    // 0x808011DC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DBF0(rdram, ctx);
        goto after_5;
    // 0x808011DC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_5:
L_808011E0:
    // 0x808011E0: jal         0x80000188
    // 0x808011E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800188_bsbfly(rdram, ctx);
        goto after_6;
    // 0x808011E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808011E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011EC: jal         0x800A0CF4
    // 0x808011F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_7;
    // 0x808011F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x808011F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808011F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808011FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801200: jr          $ra
    // 0x80801204: nop

    return;
    // 0x80801204: nop

;}
RECOMP_FUNC void func_80801208_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801208: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080120C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801210: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80801214: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801218: jal         0x8008CABC
    // 0x8080121C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080121C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    after_0:
    // 0x80801220: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80801224: jal         0x8008AF24
    // 0x80801228: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80801228: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8080122C: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80801230: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80801234: jal         0x8008B1C8
    // 0x80801238: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B1C8(rdram, ctx);
        goto after_2;
    // 0x80801238: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x8080123C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801240: jal         0x8008AED4
    // 0x80801244: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x80801244: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    after_3:
    // 0x80801248: lui         $a1, 0x3EC2
    ctx->r5 = S32(0X3EC2 << 16);
    // 0x8080124C: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    // 0x80801250: jal         0x8008B1BC
    // 0x80801254: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_4;
    // 0x80801254: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80801258: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080125C: jal         0x8008B134
    // 0x80801260: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x80801260: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x80801264: jal         0x8008B064
    // 0x80801268: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B064(rdram, ctx);
        goto after_6;
    // 0x80801268: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x8080126C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80801270: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080127C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80801280: jal         0x8009FFD8
    // 0x80801284: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_7;
    // 0x80801284: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_7:
    // 0x80801288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080128C: jal         0x800A0CF4
    // 0x80801290: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_8;
    // 0x80801290: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80801294: jal         0x80000128
    // 0x80801298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800128_bsbfly(rdram, ctx);
        goto after_9;
    // 0x80801298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080129C: jal         0x80095A40
    // 0x808012A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095A40(rdram, ctx);
        goto after_10;
    // 0x808012A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808012A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012A8: jal         0x800961AC
    // 0x808012AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_11;
    // 0x808012AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x808012B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012B4: jal         0x8009C4CC
    // 0x808012B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_12;
    // 0x808012B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_12:
    // 0x808012BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012C0: jal         0x8009BF5C
    // 0x808012C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_13;
    // 0x808012C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_13:
    // 0x808012C8: jal         0x8009BC6C
    // 0x808012CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_14;
    // 0x808012CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808012D0: jal         0x8009BC90
    // 0x808012D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC90(rdram, ctx);
        goto after_15;
    // 0x808012D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808012D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012DC: jal         0x80093360
    // 0x808012E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80093360(rdram, ctx);
        goto after_16;
    // 0x808012E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_16:
    // 0x808012E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012E8: addiu       $a1, $zero, 0x420
    ctx->r5 = ADD32(0, 0X420);
    // 0x808012EC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808012F0: jal         0x8009DF94
    // 0x808012F4: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DF94(rdram, ctx);
        goto after_17;
    // 0x808012F4: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_17:
    // 0x808012F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012FC: addiu       $a1, $zero, 0x444
    ctx->r5 = ADD32(0, 0X444);
    // 0x80801300: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801304: jal         0x8009DB04
    // 0x80801308: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DB04(rdram, ctx);
        goto after_18;
    // 0x80801308: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_18:
    // 0x8080130C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(79, 0X1D14) << 16);
    // 0x80801310: lwc1        $f4, 0x1D14($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(79, 0X1D14));
    // 0x80801314: lw          $t7, 0x188($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X188);
    // 0x80801318: swc1        $f4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f4.u32l;
    // 0x8080131C: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    // 0x80801320: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801324: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80801328: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8080132C: jr          $ra
    // 0x80801330: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80801330: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80801334_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801334: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80801338: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080133C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801340: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801344: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80801348: jal         0x8009BB24
    // 0x8080134C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8009BB24(rdram, ctx);
        goto after_0;
    // 0x8080134C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x80801350: lw          $v0, 0x160($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X160);
    // 0x80801354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801358: beq         $v0, $zero, L_80801370
    if (ctx->r2 == 0) {
        // 0x8080135C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80801370;
    }
    // 0x8080135C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80801360: beq         $v0, $at, L_8080139C
    if (ctx->r2 == ctx->r1) {
        // 0x80801364: nop
    
            goto L_8080139C;
    }
    // 0x80801364: nop

    // 0x80801368: b           L_8080139C
    // 0x8080136C: nop

        goto L_8080139C;
    // 0x8080136C: nop

L_80801370:
    // 0x80801370: jal         0x8008DF8C
    // 0x80801374: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    func_8008DF8C(rdram, ctx);
        goto after_1;
    // 0x80801374: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_1:
    // 0x80801378: beq         $v0, $zero, L_8080139C
    if (ctx->r2 == 0) {
        // 0x8080137C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080139C;
    }
    // 0x8080137C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801380: lui         $a3, 0x3F2A
    ctx->r7 = S32(0X3F2A << 16);
    // 0x80801384: ori         $a3, $a3, 0xACDA
    ctx->r7 = ctx->r7 | 0XACDA;
    // 0x80801388: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8080138C: jal         0x8008CD30
    // 0x80801390: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8008CD30(rdram, ctx);
        goto after_2;
    // 0x80801390: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_2:
    // 0x80801394: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80801398: sw          $t6, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r14;
L_8080139C:
    // 0x8080139C: jal         0x800D8FF8
    // 0x808013A0: nop

    func_800D8FF8(rdram, ctx);
        goto after_3;
    // 0x808013A0: nop

    after_3:
    // 0x808013A4: lw          $v0, 0x188($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X188);
    // 0x808013A8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x808013AC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x808013B0: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x808013B4: addiu       $t9, $zero, 0x24
    ctx->r25 = ADD32(0, 0X24);
    // 0x808013B8: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x808013BC: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x808013C0: lw          $t7, 0x188($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X188);
    // 0x808013C4: lwc1        $f8, 0x0($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X0);
    // 0x808013C8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x808013CC: nop

    // 0x808013D0: bc1f        L_808013E0
    if (!c1cs) {
        // 0x808013D4: nop
    
            goto L_808013E0;
    }
    // 0x808013D4: nop

    // 0x808013D8: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
    // 0x808013DC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_808013E0:
    // 0x808013E0: jal         0x80097A90
    // 0x808013E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097A90(rdram, ctx);
        goto after_4;
    // 0x808013E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808013E8: beq         $v0, $zero, L_808013F4
    if (ctx->r2 == 0) {
        // 0x808013EC: addiu       $t0, $zero, 0xF
        ctx->r8 = ADD32(0, 0XF);
            goto L_808013F4;
    }
    // 0x808013EC: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x808013F0: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_808013F4:
    // 0x808013F4: jal         0x8008E078
    // 0x808013F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_5;
    // 0x808013F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808013FC: beq         $v0, $zero, L_80801414
    if (ctx->r2 == 0) {
        // 0x80801400: nop
    
            goto L_80801414;
    }
    // 0x80801400: nop

    // 0x80801404: jal         0x8009FE58
    // 0x80801408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE58(rdram, ctx);
        goto after_6;
    // 0x80801408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080140C: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x80801410: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_80801414:
    // 0x80801414: jal         0x8008E35C
    // 0x80801418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_7;
    // 0x80801418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080141C: beq         $v0, $zero, L_8080142C
    if (ctx->r2 == 0) {
        // 0x80801420: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080142C;
    }
    // 0x80801420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801424: addiu       $t2, $zero, 0x2D
    ctx->r10 = ADD32(0, 0X2D);
    // 0x80801428: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_8080142C:
    // 0x8080142C: jal         0x8009E5C8
    // 0x80801430: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_8;
    // 0x80801430: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_8:
    // 0x80801434: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801438: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080143C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80801440: jr          $ra
    // 0x80801444: nop

    return;
    // 0x80801444: nop

;}
RECOMP_FUNC void bsbfly_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801448: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080144C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(79, 0X1D78) << 16);
    // 0x80801450: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801454: jr          $ra
    // 0x80801458: lw          $v0, 0x1D78($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1D78));
    return;
    // 0x80801458: lw          $v0, 0x1D78($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1D78));
;}
RECOMP_FUNC void func_8080145C_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080145C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80801460: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80801464: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80801468: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8080146C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80801470: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80801474: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80801478: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080147C: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x80801480: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80801484: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x80801488: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x8080148C: bc1f        L_808014C8
    if (!c1cs) {
        // 0x80801490: lui         $at, 0x4234
        ctx->r1 = S32(0X4234 << 16);
            goto L_808014C8;
    }
    // 0x80801490: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80801494: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80801498: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x8080149C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x808014A0: nop

    // 0x808014A4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
L_808014A8:
    // 0x808014A8: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x808014AC: jal         0x800849F0
    // 0x808014B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x808014B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x808014B4: add.s       $f20, $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f26.fl;
    // 0x808014B8: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x808014BC: nop

    // 0x808014C0: bc1tl       L_808014A8
    if (c1cs) {
        // 0x808014C4: mfc1        $a1, $f20
        ctx->r5 = (int32_t)ctx->f20.u32l;
            goto L_808014A8;
    }
    goto skip_0;
    // 0x808014C4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    skip_0:
L_808014C8:
    // 0x808014C8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x808014CC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x808014D0: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x808014D4: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x808014D8: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x808014DC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x808014E0: jr          $ra
    // 0x808014E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x808014E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_808014E8_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808014E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808014EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808014F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808014F4: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x808014F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808014FC: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80801500: jal         0x8008CCBC
    // 0x80801504: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    func_8008CCBC(rdram, ctx);
        goto after_0;
    // 0x80801504: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    after_0:
    // 0x80801508: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8080150C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801514: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801518: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080151C: jal         0x8009FFD8
    // 0x80801520: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80801520: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x80801524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801528: jal         0x800A0CF4
    // 0x8080152C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_2;
    // 0x8080152C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80801530: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80801534: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80801538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080153C: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x80801540: jal         0x8009DF18
    // 0x80801544: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DF18(rdram, ctx);
        goto after_3;
    // 0x80801544: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_3:
    // 0x80801548: lui         $a1, 0x3FE6
    ctx->r5 = S32(0X3FE6 << 16);
    // 0x8080154C: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80801550: jal         0x8009D820
    // 0x80801554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D820(rdram, ctx);
        goto after_4;
    // 0x80801554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801558: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8080155C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80801560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801564: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80801568: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080156C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80801570: jal         0x80085490
    // 0x80801574: nop

    _bamotor_entrypoint_1(rdram, ctx);
        goto after_5;
    // 0x80801574: nop

    after_5:
    // 0x80801578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080157C: jal         0x800A17A8
    // 0x80801580: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800A17A8(rdram, ctx);
        goto after_6;
    // 0x80801580: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_6:
    // 0x80801584: jal         0x800A1718
    // 0x80801588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1718(rdram, ctx);
        goto after_7;
    // 0x80801588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080158C: bne         $v0, $zero, L_8080159C
    if (ctx->r2 != 0) {
        // 0x80801590: nop
    
            goto L_8080159C;
    }
    // 0x80801590: nop

    // 0x80801594: jal         0x80085208
    // 0x80801598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_1(rdram, ctx);
        goto after_8;
    // 0x80801598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_8080159C:
    // 0x8080159C: jal         0x8000145C
    // 0x808015A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080145C_bsbfly(rdram, ctx);
        goto after_9;
    // 0x808015A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808015A4: jal         0x8008E944
    // 0x808015A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_10;
    // 0x808015A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808015AC: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    // 0x808015B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808015B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808015B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808015BC: jr          $ra
    // 0x808015C0: nop

    return;
    // 0x808015C0: nop

;}
RECOMP_FUNC void func_808015C4_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808015C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808015C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808015CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808015D0: jal         0x8008CABC
    // 0x808015D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808015D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808015D8: lui         $a1, 0x3EBB
    ctx->r5 = S32(0X3EBB << 16);
    // 0x808015DC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x808015E0: ori         $a1, $a1, 0x573F
    ctx->r5 = ctx->r5 | 0X573F;
    // 0x808015E4: jal         0x8008B348
    // 0x808015E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B348(rdram, ctx);
        goto after_1;
    // 0x808015E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808015EC: beq         $v0, $zero, L_80801618
    if (ctx->r2 == 0) {
        // 0x808015F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801618;
    }
    // 0x808015F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015F4: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x808015F8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808015FC: jal         0x8009DF18
    // 0x80801600: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    func_8009DF18(rdram, ctx);
        goto after_2;
    // 0x80801600: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    after_2:
    // 0x80801604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801608: addiu       $a1, $zero, 0x4454
    ctx->r5 = ADD32(0, 0X4454);
    // 0x8080160C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801610: jal         0x8009DF18
    // 0x80801614: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    func_8009DF18(rdram, ctx);
        goto after_3;
    // 0x80801614: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    after_3:
L_80801618:
    // 0x80801618: lui         $a1, 0x3F2F
    ctx->r5 = S32(0X3F2F << 16);
    // 0x8080161C: ori         $a1, $a1, 0xAACE
    ctx->r5 = ctx->r5 | 0XAACE;
    // 0x80801620: jal         0x8008B348
    // 0x80801624: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_4;
    // 0x80801624: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x80801628: beq         $v0, $zero, L_80801658
    if (ctx->r2 == 0) {
        // 0x8080162C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801658;
    }
    // 0x8080162C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801630: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80801634: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80801638: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x8080163C: jal         0x8009DF18
    // 0x80801640: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_5;
    // 0x80801640: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_5:
    // 0x80801644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801648: addiu       $a1, $zero, 0x427
    ctx->r5 = ADD32(0, 0X427);
    // 0x8080164C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801650: jal         0x8009DF18
    // 0x80801654: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DF18(rdram, ctx);
        goto after_6;
    // 0x80801654: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_6:
L_80801658:
    // 0x80801658: lui         $a1, 0x3F6B
    ctx->r5 = S32(0X3F6B << 16);
    // 0x8080165C: ori         $a1, $a1, 0x851F
    ctx->r5 = ctx->r5 | 0X851F;
    // 0x80801660: jal         0x8008B348
    // 0x80801664: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x80801664: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_7:
    // 0x80801668: beq         $v0, $zero, L_80801678
    if (ctx->r2 == 0) {
        // 0x8080166C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801678;
    }
    // 0x8080166C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801670: jal         0x8009B9B0
    // 0x80801674: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_8;
    // 0x80801674: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_8:
L_80801678:
    // 0x80801678: jal         0x8008B2B4
    // 0x8080167C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B2B4(rdram, ctx);
        goto after_9;
    // 0x8080167C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_9:
    // 0x80801680: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(79, 0X1D18) << 16);
    // 0x80801684: lwc1        $f4, 0x1D18($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(79, 0X1D18));
    // 0x80801688: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8080168C: nop

    // 0x80801690: bc1fl       L_808016A4
    if (!c1cs) {
        // 0x80801694: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808016A4;
    }
    goto skip_0;
    // 0x80801694: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80801698: jal         0x80084A10
    // 0x8080169C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_9(rdram, ctx);
        goto after_10;
    // 0x8080169C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808016A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808016A4:
    // 0x808016A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808016A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808016AC: jr          $ra
    // 0x808016B0: nop

    return;
    // 0x808016B0: nop

;}
RECOMP_FUNC void func_808016B4_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808016B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808016B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808016BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808016C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808016C4: jal         0x8008CABC
    // 0x808016C8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808016C8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808016CC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x808016D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016D4: jal         0x8009D3A8
    // 0x808016D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_1;
    // 0x808016D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x808016DC: lw          $v0, 0x160($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X160);
    // 0x808016E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808016E4: beq         $v0, $zero, L_80801708
    if (ctx->r2 == 0) {
        // 0x808016E8: nop
    
            goto L_80801708;
    }
    // 0x808016E8: nop

    // 0x808016EC: beq         $v0, $at, L_808017B4
    if (ctx->r2 == ctx->r1) {
        // 0x808016F0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808017B4;
    }
    // 0x808016F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808016F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808016F8: beq         $v0, $at, L_808017F8
    if (ctx->r2 == ctx->r1) {
        // 0x808016FC: nop
    
            goto L_808017F8;
    }
    // 0x808016FC: nop

    // 0x80801700: b           L_80801820
    // 0x80801704: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80801820;
    // 0x80801704: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801708:
    // 0x80801708: jal         0x800015C4
    // 0x8080170C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808015C4_bsbfly(rdram, ctx);
        goto after_2;
    // 0x8080170C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801710: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80801714: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80801718: jal         0x8008B348
    // 0x8080171C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_3;
    // 0x8080171C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x80801720: beq         $v0, $zero, L_80801788
    if (ctx->r2 == 0) {
        // 0x80801724: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80801788;
    }
    // 0x80801724: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80801728: jal         0x800F8B64
    // 0x8080172C: nop

    func_800F8B64(rdram, ctx);
        goto after_4;
    // 0x8080172C: nop

    after_4:
    // 0x80801730: beql        $v0, $zero, L_80801820
    if (ctx->r2 == 0) {
        // 0x80801734: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801820;
    }
    goto skip_0;
    // 0x80801734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80801738: jal         0x800A0180
    // 0x8080173C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A0180(rdram, ctx);
        goto after_5;
    // 0x8080173C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801744: jal         0x800A4DFC
    // 0x80801748: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800A4DFC(rdram, ctx);
        goto after_6;
    // 0x80801748: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_6:
    // 0x8080174C: jal         0x800A4CA8
    // 0x80801750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_7;
    // 0x80801750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80801754: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80801758: jal         0x80089288
    // 0x8080175C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    _ncbadie_entrypoint_3(rdram, ctx);
        goto after_8;
    // 0x8080175C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_8:
    // 0x80801760: jal         0x80085208
    // 0x80801764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_1(rdram, ctx);
        goto after_9;
    // 0x80801764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80801768: lui         $a2, 0x404C
    ctx->r6 = S32(0X404C << 16);
    // 0x8080176C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80801770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801774: jal         0x80085338
    // 0x80801778: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_set(rdram, ctx);
        goto after_10;
    // 0x80801778: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x8080177C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80801780: b           L_8080181C
    // 0x80801784: sw          $t6, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r14;
        goto L_8080181C;
    // 0x80801784: sw          $t6, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r14;
L_80801788:
    // 0x80801788: lui         $a1, 0x3F6B
    ctx->r5 = S32(0X3F6B << 16);
    // 0x8080178C: jal         0x8008B348
    // 0x80801790: ori         $a1, $a1, 0x851F
    ctx->r5 = ctx->r5 | 0X851F;
    func_8008B348(rdram, ctx);
        goto after_11;
    // 0x80801790: ori         $a1, $a1, 0x851F
    ctx->r5 = ctx->r5 | 0X851F;
    after_11:
    // 0x80801794: beq         $v0, $zero, L_8080181C
    if (ctx->r2 == 0) {
        // 0x80801798: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080181C;
    }
    // 0x80801798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080179C: addiu       $a1, $zero, 0xD2
    ctx->r5 = ADD32(0, 0XD2);
    // 0x808017A0: jal         0x8008CCBC
    // 0x808017A4: lui         $a2, 0x4010
    ctx->r6 = S32(0X4010 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_12;
    // 0x808017A4: lui         $a2, 0x4010
    ctx->r6 = S32(0X4010 << 16);
    after_12:
    // 0x808017A8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x808017AC: b           L_8080181C
    // 0x808017B0: sw          $t7, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r15;
        goto L_8080181C;
    // 0x808017B0: sw          $t7, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r15;
L_808017B4:
    // 0x808017B4: lui         $a1, 0x3F21
    ctx->r5 = S32(0X3F21 << 16);
    // 0x808017B8: jal         0x8008B348
    // 0x808017BC: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    func_8008B348(rdram, ctx);
        goto after_13;
    // 0x808017BC: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    after_13:
    // 0x808017C0: beq         $v0, $zero, L_808017CC
    if (ctx->r2 == 0) {
        // 0x808017C4: addiu       $t8, $zero, 0x20
        ctx->r24 = ADD32(0, 0X20);
            goto L_808017CC;
    }
    // 0x808017C4: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x808017C8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_808017CC:
    // 0x808017CC: jal         0x8008B324
    // 0x808017D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_14;
    // 0x808017D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_14:
    // 0x808017D4: beq         $v0, $zero, L_808017E0
    if (ctx->r2 == 0) {
        // 0x808017D8: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_808017E0;
    }
    // 0x808017D8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x808017DC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_808017E0:
    // 0x808017E0: jal         0x8008DD04
    // 0x808017E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_15;
    // 0x808017E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808017E8: beq         $v0, $zero, L_8080181C
    if (ctx->r2 == 0) {
        // 0x808017EC: addiu       $t0, $zero, 0x2F
        ctx->r8 = ADD32(0, 0X2F);
            goto L_8080181C;
    }
    // 0x808017EC: addiu       $t0, $zero, 0x2F
    ctx->r8 = ADD32(0, 0X2F);
    // 0x808017F0: b           L_8080181C
    // 0x808017F4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
        goto L_8080181C;
    // 0x808017F4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_808017F8:
    // 0x808017F8: jal         0x800015C4
    // 0x808017FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808015C4_bsbfly(rdram, ctx);
        goto after_16;
    // 0x808017FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80801800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801804: jal         0x800852F0
    // 0x80801808: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_17;
    // 0x80801808: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x8080180C: beql        $v0, $zero, L_80801820
    if (ctx->r2 == 0) {
        // 0x80801810: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801820;
    }
    goto skip_1;
    // 0x80801810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80801814: jal         0x80085200
    // 0x80801818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_0(rdram, ctx);
        goto after_18;
    // 0x80801818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
L_8080181C:
    // 0x8080181C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801820:
    // 0x80801820: jal         0x8009E5C8
    // 0x80801824: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_19;
    // 0x80801824: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_19:
    // 0x80801828: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080182C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801830: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801834: jr          $ra
    // 0x80801838: nop

    return;
    // 0x80801838: nop

;}
RECOMP_FUNC void func_8080183C_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080183C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801840: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801844: jal         0x800A4E30
    // 0x80801848: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A4E30(rdram, ctx);
        goto after_0;
    // 0x80801848: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080184C: jal         0x800A042C
    // 0x80801850: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A042C(rdram, ctx);
        goto after_1;
    // 0x80801850: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801854: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801858: jal         0x800A0CF4
    // 0x8080185C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_2;
    // 0x8080185C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80801860: jal         0x8008E95C
    // 0x80801864: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E95C(rdram, ctx);
        goto after_3;
    // 0x80801864: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80801868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080186C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801870: jr          $ra
    // 0x80801874: nop

    return;
    // 0x80801874: nop

;}
RECOMP_FUNC void bsbfly_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801878: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080187C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(79, 0X1D88) << 16);
    // 0x80801880: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801884: jr          $ra
    // 0x80801888: lw          $v0, 0x1D88($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1D88));
    return;
    // 0x80801888: lw          $v0, 0x1D88($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1D88));
;}
RECOMP_FUNC void func_8080188C_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080188C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801894: jal         0x80000128
    // 0x80801898: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800128_bsbfly(rdram, ctx);
        goto after_0;
    // 0x80801898: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080189C: lui         $a3, 0x3F99
    ctx->r7 = S32(0X3F99 << 16);
    // 0x808018A0: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x808018A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808018A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808018AC: jal         0x80084C30
    // 0x808018B0: addiu       $a2, $zero, 0xD3
    ctx->r6 = ADD32(0, 0XD3);
    _bafly_entrypoint_13(rdram, ctx);
        goto after_1;
    // 0x808018B0: addiu       $a2, $zero, 0xD3
    ctx->r6 = ADD32(0, 0XD3);
    after_1:
    // 0x808018B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808018B8: jal         0x800A0CF4
    // 0x808018BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_2;
    // 0x808018BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x808018C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808018C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808018C8: jr          $ra
    // 0x808018CC: nop

    return;
    // 0x808018CC: nop

;}
RECOMP_FUNC void func_808018D0_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808018D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808018D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808018D8: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x808018DC: jal         0x80084C38
    // 0x808018E0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    _bafly_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x808018E0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x808018E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808018E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808018EC: jr          $ra
    // 0x808018F0: nop

    return;
    // 0x808018F0: nop

;}
RECOMP_FUNC void func_808018F4_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808018F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808018F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808018FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80801900: jal         0x800A0CF4
    // 0x80801904: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_0;
    // 0x80801904: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80801908: jal         0x80084C40
    // 0x8080190C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bafly_entrypoint_15(rdram, ctx);
        goto after_1;
    // 0x8080190C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801910: jal         0x80000188
    // 0x80801914: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800188_bsbfly(rdram, ctx);
        goto after_2;
    // 0x80801914: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80801918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080191C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801920: jr          $ra
    // 0x80801924: nop

    return;
    // 0x80801924: nop

;}
RECOMP_FUNC void bsbfly_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801928: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080192C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(79, 0X1D98) << 16);
    // 0x80801930: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801934: jr          $ra
    // 0x80801938: lw          $v0, 0x1D98($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1D98));
    return;
    // 0x80801938: lw          $v0, 0x1D98($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1D98));
;}
RECOMP_FUNC void func_8080193C_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080193C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801940: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801944: jal         0x80000128
    // 0x80801948: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800128_bsbfly(rdram, ctx);
        goto after_0;
    // 0x80801948: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080194C: lui         $a3, 0x3F99
    ctx->r7 = S32(0X3F99 << 16);
    // 0x80801950: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x80801954: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801958: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080195C: jal         0x80084C30
    // 0x80801960: addiu       $a2, $zero, 0xD3
    ctx->r6 = ADD32(0, 0XD3);
    _bafly_entrypoint_13(rdram, ctx);
        goto after_1;
    // 0x80801960: addiu       $a2, $zero, 0xD3
    ctx->r6 = ADD32(0, 0XD3);
    after_1:
    // 0x80801964: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801968: jal         0x800A0CF4
    // 0x8080196C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_2;
    // 0x8080196C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80801970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801978: jr          $ra
    // 0x8080197C: nop

    return;
    // 0x8080197C: nop

;}
RECOMP_FUNC void func_80801980_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801984: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801988: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x8080198C: jal         0x80084C38
    // 0x80801990: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    _bafly_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80801990: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x80801994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080199C: jr          $ra
    // 0x808019A0: nop

    return;
    // 0x808019A0: nop

;}
RECOMP_FUNC void func_808019A4_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808019A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808019A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808019AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808019B0: jal         0x800A0CF4
    // 0x808019B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_0;
    // 0x808019B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808019B8: jal         0x80084C40
    // 0x808019BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bafly_entrypoint_15(rdram, ctx);
        goto after_1;
    // 0x808019BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808019C0: jal         0x80000188
    // 0x808019C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800188_bsbfly(rdram, ctx);
        goto after_2;
    // 0x808019C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808019C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808019CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808019D0: jr          $ra
    // 0x808019D4: nop

    return;
    // 0x808019D4: nop

;}
RECOMP_FUNC void bsbfly_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808019D8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808019DC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(79, 0X1DA8) << 16);
    // 0x808019E0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808019E4: jr          $ra
    // 0x808019E8: lw          $v0, 0x1DA8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1DA8));
    return;
    // 0x808019E8: lw          $v0, 0x1DA8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1DA8));
;}
RECOMP_FUNC void func_808019EC_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808019EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808019F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808019F4: jal         0x80000128
    // 0x808019F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800128_bsbfly(rdram, ctx);
        goto after_0;
    // 0x808019F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808019FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801A00: addiu       $a1, $zero, 0x10D
    ctx->r5 = ADD32(0, 0X10D);
    // 0x80801A04: jal         0x80084C48
    // 0x80801A08: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    _bafly_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x80801A08: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x80801A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801A10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801A14: jr          $ra
    // 0x80801A18: nop

    return;
    // 0x80801A18: nop

;}
RECOMP_FUNC void func_80801A1C_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801A1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801A20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801A24: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x80801A28: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80801A2C: jal         0x80084C50
    // 0x80801A30: addiu       $a3, $a0, 0x15C
    ctx->r7 = ADD32(ctx->r4, 0X15C);
    _bafly_entrypoint_17(rdram, ctx);
        goto after_0;
    // 0x80801A30: addiu       $a3, $a0, 0x15C
    ctx->r7 = ADD32(ctx->r4, 0X15C);
    after_0:
    // 0x80801A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801A3C: jr          $ra
    // 0x80801A40: nop

    return;
    // 0x80801A40: nop

;}
RECOMP_FUNC void func_80801A44_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801A44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801A48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801A4C: jal         0x80084C58
    // 0x80801A50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bafly_entrypoint_18(rdram, ctx);
        goto after_0;
    // 0x80801A50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801A54: jal         0x80000188
    // 0x80801A58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800188_bsbfly(rdram, ctx);
        goto after_1;
    // 0x80801A58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801A60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801A64: jr          $ra
    // 0x80801A68: nop

    return;
    // 0x80801A68: nop

;}
RECOMP_FUNC void bsbfly_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801A6C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801A70: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(79, 0X1DB8) << 16);
    // 0x80801A74: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801A78: jr          $ra
    // 0x80801A7C: lw          $v0, 0x1DB8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1DB8));
    return;
    // 0x80801A7C: lw          $v0, 0x1DB8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1DB8));
;}
RECOMP_FUNC void func_80801A80_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801A80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801A84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801A88: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801A8C: jal         0x80000128
    // 0x80801A90: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800128_bsbfly(rdram, ctx);
        goto after_0;
    // 0x80801A90: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801A94: lui         $a2, 0x3F1E
    ctx->r6 = S32(0X3F1E << 16);
    // 0x80801A98: ori         $a2, $a2, 0xB852
    ctx->r6 = ctx->r6 | 0XB852;
    // 0x80801A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801AA0: jal         0x8008CB3C
    // 0x80801AA4: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80801AA4: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    after_1:
    // 0x80801AA8: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x80801AAC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801AB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801AB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801AB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80801ABC: jal         0x8009FFD8
    // 0x80801AC0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80801AC0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x80801AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801AC8: jal         0x800A0CF4
    // 0x80801ACC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_3;
    // 0x80801ACC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80801AD0: jal         0x800A0024
    // 0x80801AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A0024(rdram, ctx);
        goto after_4;
    // 0x80801AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801AD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801ADC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801AE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801AE4: jr          $ra
    // 0x80801AE8: nop

    return;
    // 0x80801AE8: nop

;}
RECOMP_FUNC void func_80801AEC_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801AEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80801AF0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801AF4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801AF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801AFC: jal         0x8008CABC
    // 0x80801B00: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80801B00: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x80801B04: lui         $a1, 0x3E0B
    ctx->r5 = S32(0X3E0B << 16);
    // 0x80801B08: ori         $a1, $a1, 0xF28
    ctx->r5 = ctx->r5 | 0XF28;
    // 0x80801B0C: jal         0x8008B348
    // 0x80801B10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B348(rdram, ctx);
        goto after_1;
    // 0x80801B10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80801B14: beq         $v0, $zero, L_80801B44
    if (ctx->r2 == 0) {
        // 0x80801B18: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801B44;
    }
    // 0x80801B18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801B1C: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x80801B20: lui         $a3, 0x3F33
    ctx->r7 = S32(0X3F33 << 16);
    // 0x80801B24: addiu       $t6, $zero, 0x2710
    ctx->r14 = ADD32(0, 0X2710);
    // 0x80801B28: addiu       $t7, $zero, 0x2EE0
    ctx->r15 = ADD32(0, 0X2EE0);
    // 0x80801B2C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80801B30: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801B34: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x80801B38: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80801B3C: jal         0x8009DEC0
    // 0x80801B40: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    func_8009DEC0(rdram, ctx);
        goto after_2;
    // 0x80801B40: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    after_2:
L_80801B44:
    // 0x80801B44: jal         0x8009CC68
    // 0x80801B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009CC68(rdram, ctx);
        goto after_3;
    // 0x80801B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801B4C: bne         $v0, $zero, L_80801B58
    if (ctx->r2 != 0) {
        // 0x80801B50: addiu       $t8, $zero, 0x24
        ctx->r24 = ADD32(0, 0X24);
            goto L_80801B58;
    }
    // 0x80801B50: addiu       $t8, $zero, 0x24
    ctx->r24 = ADD32(0, 0X24);
    // 0x80801B54: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_80801B58:
    // 0x80801B58: jal         0x800A0024
    // 0x80801B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A0024(rdram, ctx);
        goto after_4;
    // 0x80801B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801B60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801B64: jal         0x8009E5C8
    // 0x80801B68: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_5;
    // 0x80801B68: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x80801B6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801B70: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801B74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80801B78: jr          $ra
    // 0x80801B7C: nop

    return;
    // 0x80801B7C: nop

;}
RECOMP_FUNC void func_80801B80_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801B80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801B84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801B88: jal         0x80000188
    // 0x80801B8C: nop

    func_80800188_bsbfly(rdram, ctx);
        goto after_0;
    // 0x80801B8C: nop

    after_0:
    // 0x80801B90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801B94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801B98: jr          $ra
    // 0x80801B9C: nop

    return;
    // 0x80801B9C: nop

;}
RECOMP_FUNC void bsbfly_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801BA0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801BA4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(79, 0X1DC8) << 16);
    // 0x80801BA8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801BAC: jr          $ra
    // 0x80801BB0: lw          $v0, 0x1DC8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1DC8));
    return;
    // 0x80801BB0: lw          $v0, 0x1DC8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1DC8));
;}
RECOMP_FUNC void func_80801BB4_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801BB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801BB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801BBC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801BC0: jal         0x8009E6EC
    // 0x80801BC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80801BC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801BC8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80801BCC: beq         $v0, $at, L_80801BE8
    if (ctx->r2 == ctx->r1) {
        // 0x80801BD0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801BE8;
    }
    // 0x80801BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BD4: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x80801BD8: beq         $v0, $at, L_80801C0C
    if (ctx->r2 == ctx->r1) {
        // 0x80801BDC: nop
    
            goto L_80801C0C;
    }
    // 0x80801BDC: nop

    // 0x80801BE0: b           L_80801C3C
    // 0x80801BE4: nop

        goto L_80801C3C;
    // 0x80801BE4: nop

L_80801BE8:
    // 0x80801BE8: jal         0x8009E830
    // 0x80801BEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_1;
    // 0x80801BEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80801BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BF4: jal         0x80095760
    // 0x80801BF8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_80095760(rdram, ctx);
        goto after_2;
    // 0x80801BF8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_2:
    // 0x80801BFC: jal         0x800A046C
    // 0x80801C00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A046C(rdram, ctx);
        goto after_3;
    // 0x80801C00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801C04: b           L_80801C48
    // 0x80801C08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80801C48;
    // 0x80801C08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80801C0C:
    // 0x80801C0C: jal         0x8009E6F8
    // 0x80801C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E6F8(rdram, ctx);
        goto after_4;
    // 0x80801C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801C14: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x80801C18: bne         $v0, $at, L_80801C44
    if (ctx->r2 != ctx->r1) {
        // 0x80801C1C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801C44;
    }
    // 0x80801C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C20: jal         0x80084598
    // 0x80801C24: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    _baboost_entrypoint_2(rdram, ctx);
        goto after_5;
    // 0x80801C24: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_5:
    // 0x80801C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C2C: jal         0x8009E830
    // 0x80801C30: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_6;
    // 0x80801C30: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x80801C34: b           L_80801C48
    // 0x80801C38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80801C48;
    // 0x80801C38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80801C3C:
    // 0x80801C3C: jal         0x80099B94
    // 0x80801C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099B94(rdram, ctx);
        goto after_7;
    // 0x80801C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_80801C44:
    // 0x80801C44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80801C48:
    // 0x80801C48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801C4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801C50: jr          $ra
    // 0x80801C54: nop

    return;
    // 0x80801C54: nop

;}
RECOMP_FUNC void func_80801C58_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801C58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801C5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801C60: jal         0x80000128
    // 0x80801C64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800128_bsbfly(rdram, ctx);
        goto after_0;
    // 0x80801C64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801C68: jal         0x80082FE0
    // 0x80801C6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80801C6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801C70: jal         0x80084800
    // 0x80801C74: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _badrone_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x80801C74: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80801C78: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80801C7C: bne         $v0, $at, L_80801C8C
    if (ctx->r2 != ctx->r1) {
        // 0x80801C80: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80801C8C;
    }
    // 0x80801C80: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801C84: jal         0x8009B800
    // 0x80801C88: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8009B800(rdram, ctx);
        goto after_3;
    // 0x80801C88: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_3:
L_80801C8C:
    // 0x80801C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801C94: jr          $ra
    // 0x80801C98: nop

    return;
    // 0x80801C98: nop

;}
RECOMP_FUNC void func_80801C9C_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801C9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801CA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801CA4: jal         0x80082FE8
    // 0x80801CA8: nop

    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80801CA8: nop

    after_0:
    // 0x80801CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801CB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801CB4: jr          $ra
    // 0x80801CB8: nop

    return;
    // 0x80801CB8: nop

;}
RECOMP_FUNC void func_80801CBC_bsbfly(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801CBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801CC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801CC4: jal         0x80082FF0
    // 0x80801CC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80801CC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801CCC: jal         0x80000188
    // 0x80801CD0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800188_bsbfly(rdram, ctx);
        goto after_1;
    // 0x80801CD0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801CD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801CD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801CDC: jr          $ra
    // 0x80801CE0: nop

    return;
    // 0x80801CE0: nop

;}
RECOMP_FUNC void bsbfly_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801CE4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801CE8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(79, 0X1DD8) << 16);
    // 0x80801CEC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801CF0: jr          $ra
    // 0x80801CF4: lw          $v0, 0x1DD8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1DD8));
    return;
    // 0x80801CF4: lw          $v0, 0x1DD8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(79, 0X1DD8));
    // 0x80801CF8: nop

    // 0x80801CFC: nop

;}
RECOMP_FUNC void bsbkflamethrower_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8080000C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80800010: jal         0x8009BFCC
    // 0x80800014: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    func_8009BFCC(rdram, ctx);
        goto after_0;
    // 0x80800014: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800018: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8080001C: jal         0x8009C984
    // 0x80800020: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8009C984(rdram, ctx);
        goto after_1;
    // 0x80800020: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x80800024: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80800028: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080002C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80800030: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80800034: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80800038: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8080003C: jal         0x800EEC30
    // 0x80800040: nop

    func_800EEC30(rdram, ctx);
        goto after_2;
    // 0x80800040: nop

    after_2:
    // 0x80800044: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80800048: jal         0x8009C128
    // 0x8080004C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009C128(rdram, ctx);
        goto after_3;
    // 0x8080004C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x80800050: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80800054: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80800058: jal         0x800EFA98
    // 0x8080005C: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    func_800EFA98(rdram, ctx);
        goto after_4;
    // 0x8080005C: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    after_4:
    // 0x80800060: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800064: jal         0x800EF04C
    // 0x80800068: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800EF04C(rdram, ctx);
        goto after_5;
    // 0x80800068: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_5:
    // 0x8080006C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80800070: lui         $at, 0x42BC
    ctx->r1 = S32(0X42BC << 16);
    // 0x80800074: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800078: lwc1        $f8, 0x4($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8080007C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80800080: swc1        $f16, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f16.u32l;
    // 0x80800084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800088: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080008C: jr          $ra
    // 0x80800090: nop

    return;
    // 0x80800090: nop

;}
RECOMP_FUNC void func_80800094_bsbkflamethrower(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800094: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800098: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080009C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808000A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000A4: jal         0x8008CABC
    // 0x808000A8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808000A8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x808000AC: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x808000B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808000B4: sltiu       $at, $v1, 0x5
    ctx->r1 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x808000B8: beq         $at, $zero, L_8080021C
    if (ctx->r1 == 0) {
        // 0x808000BC: sw          $v1, 0x15C($s0)
        MEM_W(0X15C, ctx->r16) = ctx->r3;
            goto L_8080021C;
    }
    // 0x808000BC: sw          $v1, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r3;
    // 0x808000C0: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x808000C4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(80, 0X430) << 16);
    // 0x808000C8: addu        $at, $at, $t6
    gpr jr_addend_808000D0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x808000CC: lw          $t6, 0x430($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(80, 0X430));
    // 0x808000D0: jr          $t6
    // 0x808000D4: nop

    switch (jr_addend_808000D0 >> 2) {
        case 0: goto L_80800208; break;
        case 1: goto L_808000D8; break;
        case 2: goto L_80800180; break;
        case 3: goto L_808001C8; break;
        case 4: goto L_808001EC; break;
        default: switch_error(__func__, 0x808000D0, 0x80800430);
    }
    // 0x808000D4: nop

L_808000D8:
    // 0x808000D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000DC: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x808000E0: jal         0x8008CCBC
    // 0x808000E4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x808000E4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x808000E8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x808000EC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x808000F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x808000FC: jal         0x8009FFD8
    // 0x80800100: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800100: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_2:
    // 0x80800104: lui         $a2, 0x3FCC
    ctx->r6 = S32(0X3FCC << 16);
    // 0x80800108: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080010C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800110: jal         0x8009C99C
    // 0x80800114: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x80800114: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_3:
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080011C: jal         0x8009B9B0
    // 0x80800120: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800120: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800128: jal         0x800A0CF4
    // 0x8080012C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_5;
    // 0x8080012C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80800130: jal         0x8009D874
    // 0x80800134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D874(rdram, ctx);
        goto after_6;
    // 0x80800134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800138: jal         0x800C6E38
    // 0x8080013C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    func_800C6E38(rdram, ctx);
        goto after_7;
    // 0x8080013C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_7:
    // 0x80800140: beq         $v0, $zero, L_80800154
    if (ctx->r2 == 0) {
        // 0x80800144: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800154;
    }
    // 0x80800144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800148: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(80, 0X444) << 16);
    // 0x8080014C: b           L_8080015C
    // 0x80800150: lwc1        $f0, 0x444($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(80, 0X444));
        goto L_8080015C;
    // 0x80800150: lwc1        $f0, 0x444($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(80, 0X444));
L_80800154:
    // 0x80800154: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80800158: nop

L_8080015C:
    // 0x8080015C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800160: jal         0x80085338
    // 0x80800164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_set(rdram, ctx);
        goto after_8;
    // 0x80800164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80800168: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x8080016C: addiu       $a1, $a1, 0x29A0
    ctx->r5 = ADD32(ctx->r5, 0X29A0);
    // 0x80800170: jal         0x80084BA8
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baflamethrower_entrypoint_2(rdram, ctx);
        goto after_9;
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800178: b           L_80800220
    // 0x8080017C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800220;
    // 0x8080017C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800180:
    // 0x80800180: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x80800184: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x80800188: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x8080018C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800190: jal         0x8008B1D4
    // 0x80800194: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_8008B1D4(rdram, ctx);
        goto after_10;
    // 0x80800194: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_10:
    // 0x80800198: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8080019C: jal         0x8008B134
    // 0x808001A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8008B134(rdram, ctx);
        goto after_11;
    // 0x808001A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_11:
    // 0x808001A4: lui         $a2, 0x3E0F
    ctx->r6 = S32(0X3E0F << 16);
    // 0x808001A8: ori         $a2, $a2, 0x5C29
    ctx->r6 = ctx->r6 | 0X5C29;
    // 0x808001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B0: jal         0x80085338
    // 0x808001B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _batimer_set(rdram, ctx);
        goto after_12;
    // 0x808001B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
    // 0x808001B8: jal         0x80084BB0
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baflamethrower_entrypoint_3(rdram, ctx);
        goto after_13;
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808001C0: b           L_80800220
    // 0x808001C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800220;
    // 0x808001C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808001C8:
    // 0x808001C8: jal         0x80084BB8
    // 0x808001CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baflamethrower_entrypoint_4(rdram, ctx);
        goto after_14;
    // 0x808001CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808001D0: lui         $a2, 0x3D4C
    ctx->r6 = S32(0X3D4C << 16);
    // 0x808001D4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001DC: jal         0x80085338
    // 0x808001E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_set(rdram, ctx);
        goto after_15;
    // 0x808001E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x808001E4: b           L_80800220
    // 0x808001E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800220;
    // 0x808001E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808001EC:
    // 0x808001EC: jal         0x8008B134
    // 0x808001F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_16;
    // 0x808001F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F8: jal         0x8008CED4
    // 0x808001FC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CED4(rdram, ctx);
        goto after_17;
    // 0x808001FC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_17:
    // 0x80800200: b           L_80800220
    // 0x80800204: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800220;
    // 0x80800204: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800208:
    // 0x80800208: jal         0x80084BA0
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baflamethrower_entrypoint_1(rdram, ctx);
        goto after_18;
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800214: jal         0x800A0CF4
    // 0x80800218: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_19;
    // 0x80800218: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
L_8080021C:
    // 0x8080021C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800220:
    // 0x80800220: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800224: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800228: jr          $ra
    // 0x8080022C: nop

    return;
    // 0x8080022C: nop

;}
RECOMP_FUNC void bsbkflamethrower_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800230: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800238: jal         0x80000094
    // 0x8080023C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800094_bsbkflamethrower(rdram, ctx);
        goto after_0;
    // 0x8080023C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800244: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800248: jr          $ra
    // 0x8080024C: nop

    return;
    // 0x8080024C: nop

;}
RECOMP_FUNC void bsbkflamethrower_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800250: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800258: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    // 0x8080025C: jal         0x80000094
    // 0x80800260: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800094_bsbkflamethrower(rdram, ctx);
        goto after_0;
    // 0x80800260: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080026C: jr          $ra
    // 0x80800270: nop

    return;
    // 0x80800270: nop

;}
RECOMP_FUNC void bsbkflamethrower_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800274: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800278: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080027C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800280: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800284: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80800288: jal         0x80085300
    // 0x8080028C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_get(rdram, ctx);
        goto after_0;
    // 0x8080028C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800290: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800298: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8080029C: nop

    // 0x808002A0: bc1tl       L_808002C0
    if (c1cs) {
        // 0x808002A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002C0;
    }
    goto skip_0;
    // 0x808002A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808002A8: jal         0x80091A58
    // 0x808002AC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_1;
    // 0x808002AC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_1:
    // 0x808002B0: beq         $v0, $zero, L_808002BC
    if (ctx->r2 == 0) {
        // 0x808002B4: addiu       $t6, $zero, 0x189
        ctx->r14 = ADD32(0, 0X189);
            goto L_808002BC;
    }
    // 0x808002B4: addiu       $t6, $zero, 0x189
    ctx->r14 = ADD32(0, 0X189);
    // 0x808002B8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_808002BC:
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808002C0:
    // 0x808002C0: jal         0x800852F0
    // 0x808002C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_2;
    // 0x808002C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808002C8: lw          $v1, 0x15C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X15C);
    // 0x808002CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002D4: beq         $v1, $at, L_80800308
    if (ctx->r3 == ctx->r1) {
        // 0x808002D8: lui         $a1, 0x3E61
        ctx->r5 = S32(0X3E61 << 16);
            goto L_80800308;
    }
    // 0x808002D8: lui         $a1, 0x3E61
    ctx->r5 = S32(0X3E61 << 16);
    // 0x808002DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808002E0: beq         $v1, $at, L_80800350
    if (ctx->r3 == ctx->r1) {
        // 0x808002E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800350;
    }
    // 0x808002E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002E8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808002EC: beq         $v1, $at, L_8080038C
    if (ctx->r3 == ctx->r1) {
        // 0x808002F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080038C;
    }
    // 0x808002F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002F4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808002F8: beq         $v1, $at, L_808003AC
    if (ctx->r3 == ctx->r1) {
        // 0x808002FC: nop
    
            goto L_808003AC;
    }
    // 0x808002FC: nop

    // 0x80800300: b           L_808003F0
    // 0x80800304: nop

        goto L_808003F0;
    // 0x80800304: nop

L_80800308:
    // 0x80800308: jal         0x8008CB10
    // 0x8080030C: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    func_8008CB10(rdram, ctx);
        goto after_3;
    // 0x8080030C: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    after_3:
    // 0x80800310: beq         $v0, $zero, L_80800328
    if (ctx->r2 == 0) {
        // 0x80800314: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800328;
    }
    // 0x80800314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800318: addiu       $a1, $zero, 0x459F
    ctx->r5 = ADD32(0, 0X459F);
    // 0x8080031C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800320: jal         0x8009DF18
    // 0x80800324: addiu       $a3, $zero, 0x6590
    ctx->r7 = ADD32(0, 0X6590);
    func_8009DF18(rdram, ctx);
        goto after_4;
    // 0x80800324: addiu       $a3, $zero, 0x6590
    ctx->r7 = ADD32(0, 0X6590);
    after_4:
L_80800328:
    // 0x80800328: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x8080032C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800330: jal         0x8008CB10
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_5;
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800338: beq         $v0, $zero, L_808003F0
    if (ctx->r2 == 0) {
        // 0x8080033C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003F0;
    }
    // 0x8080033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800340: jal         0x80000094
    // 0x80800344: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800094_bsbkflamethrower(rdram, ctx);
        goto after_6;
    // 0x80800344: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x80800348: b           L_808003F0
    // 0x8080034C: nop

        goto L_808003F0;
    // 0x8080034C: nop

L_80800350:
    // 0x80800350: jal         0x800852F0
    // 0x80800354: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _batimer_decrement(rdram, ctx);
        goto after_7;
    // 0x80800354: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x80800358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080035C: jal         0x80085330
    // 0x80800360: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _batimer_isZero(rdram, ctx);
        goto after_8;
    // 0x80800360: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x80800364: beq         $v0, $zero, L_808003F0
    if (ctx->r2 == 0) {
        // 0x80800368: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003F0;
    }
    // 0x80800368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080036C: jal         0x80091A30
    // 0x80800370: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A30(rdram, ctx);
        goto after_9;
    // 0x80800370: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_9:
    // 0x80800374: beq         $v0, $zero, L_808003F0
    if (ctx->r2 == 0) {
        // 0x80800378: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003F0;
    }
    // 0x80800378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080037C: jal         0x80000094
    // 0x80800380: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80800094_bsbkflamethrower(rdram, ctx);
        goto after_10;
    // 0x80800380: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x80800384: b           L_808003F0
    // 0x80800388: nop

        goto L_808003F0;
    // 0x80800388: nop

L_8080038C:
    // 0x8080038C: jal         0x800852F0
    // 0x80800390: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_decrement(rdram, ctx);
        goto after_11;
    // 0x80800390: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x80800394: beq         $v0, $zero, L_808003F0
    if (ctx->r2 == 0) {
        // 0x80800398: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003F0;
    }
    // 0x80800398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080039C: jal         0x80000094
    // 0x808003A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80800094_bsbkflamethrower(rdram, ctx);
        goto after_12;
    // 0x808003A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_12:
    // 0x808003A4: b           L_808003F0
    // 0x808003A8: nop

        goto L_808003F0;
    // 0x808003A8: nop

L_808003AC:
    // 0x808003AC: jal         0x8008CAEC
    // 0x808003B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_13;
    // 0x808003B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808003B4: beq         $v0, $zero, L_808003C0
    if (ctx->r2 == 0) {
        // 0x808003B8: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_808003C0;
    }
    // 0x808003B8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x808003BC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_808003C0:
    // 0x808003C0: jal         0x8008CAC8
    // 0x808003C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_14;
    // 0x808003C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808003C8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(80, 0X448) << 16);
    // 0x808003CC: lwc1        $f6, 0x448($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(80, 0X448));
    // 0x808003D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003D4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x808003D8: nop

    // 0x808003DC: bc1f        L_808003F0
    if (!c1cs) {
        // 0x808003E0: nop
    
            goto L_808003F0;
    }
    // 0x808003E0: nop

    // 0x808003E4: jal         0x80083B68
    // 0x808003E8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    _bsstand_entrypoint_8(rdram, ctx);
        goto after_15;
    // 0x808003E8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_15:
    // 0x808003EC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_808003F0:
    // 0x808003F0: jal         0x80084BC0
    // 0x808003F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baflamethrower_entrypoint_5(rdram, ctx);
        goto after_16;
    // 0x808003F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003FC: jal         0x8009E5C8
    // 0x80800400: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_17;
    // 0x80800400: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_17:
    // 0x80800404: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800408: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080040C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800410: jr          $ra
    // 0x80800414: nop

    return;
    // 0x80800414: nop

;}
RECOMP_FUNC void bsbkflamethrower_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800418: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080041C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(80, 0X450) << 16);
    // 0x80800420: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800424: jr          $ra
    // 0x80800428: lw          $v0, 0x450($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(80, 0X450));
    return;
    // 0x80800428: lw          $v0, 0x450($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(80, 0X450));
    // 0x8080042C: nop

;}
RECOMP_FUNC void func_80800000_bsblongleg(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void func_80800020_bsblongleg(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void func_80800064_bsblongleg(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void func_808000C8_bsblongleg(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void func_8080013C_bsblongleg(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800154: bne         $v0, $zero, L_808001F0
    if (ctx->r2 != 0) {
        // 0x80800158: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001F0;
    }
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080015C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800160: jal         0x8009E53C
    // 0x80800164: lui         $a2, 0xC248
    ctx->r6 = S32(0XC248 << 16);
    func_8009E53C(rdram, ctx);
        goto after_1;
    // 0x80800164: lui         $a2, 0xC248
    ctx->r6 = S32(0XC248 << 16);
    after_1:
    // 0x80800168: lui         $a2, 0x3CF5
    ctx->r6 = S32(0X3CF5 << 16);
    // 0x8080016C: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800174: jal         0x8009F1C8
    // 0x80800178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_2;
    // 0x80800178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8080017C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800180: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800184: jal         0x8009F1C8
    // 0x80800188: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_3;
    // 0x80800188: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
    // 0x8080018C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800190: jal         0x800A0CF4
    // 0x80800194: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_4;
    // 0x80800194: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080019C: jal         0x800A0CE8
    // 0x808001A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CE8(rdram, ctx);
        goto after_5;
    // 0x808001A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x808001A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A8: jal         0x800A0DD0
    // 0x808001AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0DD0(rdram, ctx);
        goto after_6;
    // 0x808001AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x808001B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B4: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x808001B8: jal         0x8009BFE4
    // 0x808001BC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_7;
    // 0x808001BC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_7:
    // 0x808001C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001C4: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x808001C8: jal         0x8009C554
    // 0x808001CC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009C554(rdram, ctx);
        goto after_8;
    // 0x808001CC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_8:
    // 0x808001D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D4: jal         0x80095760
    // 0x808001D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80095760(rdram, ctx);
        goto after_9;
    // 0x808001D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
    // 0x808001DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E0: jal         0x800931AC
    // 0x808001E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800931AC(rdram, ctx);
        goto after_10;
    // 0x808001E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x808001E8: jal         0x80084428
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baalarm_new(rdram, ctx);
        goto after_11;
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_808001F0:
    // 0x808001F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808001F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808001F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001FC: jr          $ra
    // 0x80800200: nop

    return;
    // 0x80800200: nop

;}
RECOMP_FUNC void func_80800204_bsblongleg(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800204: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800208: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080020C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800210: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800214: jal         0x8009E74C
    // 0x80800218: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x80800218: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x8080021C: bnel        $v0, $zero, L_808002C8
    if (ctx->r2 != 0) {
        // 0x80800220: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808002C8;
    }
    goto skip_0;
    // 0x80800220: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800224: jal         0x80084420
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baalarm_free(rdram, ctx);
        goto after_1;
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800230: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800234: jal         0x8009E53C
    // 0x80800238: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E53C(rdram, ctx);
        goto after_2;
    // 0x80800238: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_2:
    // 0x8080023C: jal         0x8009F1E0
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F1E0(rdram, ctx);
        goto after_3;
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800248: jal         0x800A0CF4
    // 0x8080024C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_4;
    // 0x8080024C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800254: jal         0x800A0CE8
    // 0x80800258: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CE8(rdram, ctx);
        goto after_5;
    // 0x80800258: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800260: jal         0x800A0DD0
    // 0x80800264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0DD0(rdram, ctx);
        goto after_6;
    // 0x80800264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80800268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080026C: jal         0x800931AC
    // 0x80800270: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800931AC(rdram, ctx);
        goto after_7;
    // 0x80800270: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80800274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800278: jal         0x8009BF5C
    // 0x8080027C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_8;
    // 0x8080027C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_8:
    // 0x80800280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800284: jal         0x8009C4CC
    // 0x80800288: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_9;
    // 0x80800288: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_9:
    // 0x8080028C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800290: jal         0x80091788
    // 0x80800294: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80091788(rdram, ctx);
        goto after_10;
    // 0x80800294: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x80800298: jal         0x800C77DC
    // 0x8080029C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800C77DC(rdram, ctx);
        goto after_11;
    // 0x8080029C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
    // 0x808002A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002A4: jal         0x80095774
    // 0x808002A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80095774(rdram, ctx);
        goto after_12;
    // 0x808002A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_12:
    // 0x808002AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x808002B4: jal         0x800852E8
    // 0x808002B8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    _batimer_incrementBy(rdram, ctx);
        goto after_13;
    // 0x808002B8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_13:
    // 0x808002BC: jal         0x800000C8
    // 0x808002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000C8_bsblongleg(rdram, ctx);
        goto after_14;
    // 0x808002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808002C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808002C8:
    // 0x808002C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808002D0: jr          $ra
    // 0x808002D4: nop

    return;
    // 0x808002D4: nop

;}
RECOMP_FUNC void func_808002D8_bsblongleg(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808002DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002E0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808002E4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808002E8: jal         0x8008CABC
    // 0x808002EC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808002EC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x808002F0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808002F4: jal         0x8008AF24
    // 0x808002F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x808002F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808002FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800300: jal         0x8008B1A0
    // 0x80800304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_2;
    // 0x80800304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080030C: jal         0x8008AED4
    // 0x80800310: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x80800310: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_3:
    // 0x80800314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800318: jal         0x8008B1BC
    // 0x8080031C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_4;
    // 0x8080031C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_4:
    // 0x80800320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800324: jal         0x8008B134
    // 0x80800328: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x80800328: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8080032C: jal         0x8008B064
    // 0x80800330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_6;
    // 0x80800330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800334: jal         0x800A3394
    // 0x80800338: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A3394(rdram, ctx);
        goto after_7;
    // 0x80800338: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x8080033C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800340: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800344: jal         0x800917A8
    // 0x80800348: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800917A8(rdram, ctx);
        goto after_8;
    // 0x80800348: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x8080034C: jal         0x800C77DC
    // 0x80800350: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800C77DC(rdram, ctx);
        goto after_9;
    // 0x80800350: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_9:
    // 0x80800354: jal         0x800C3BDC
    // 0x80800358: lbu         $a0, 0x160($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X160);
    func_800C3BDC(rdram, ctx);
        goto after_10;
    // 0x80800358: lbu         $a0, 0x160($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X160);
    after_10:
    // 0x8080035C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800360: sw          $t6, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = ctx->r14;
    // 0x80800364: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800368: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8080036C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800370: jr          $ra
    // 0x80800374: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800374: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80800378_bsblongleg(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800378: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080037C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800380: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800384: jal         0x8008CABC
    // 0x80800388: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800388: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080038C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800390: jal         0x8008AF24
    // 0x80800394: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80800394: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080039C: jal         0x8008B1A0
    // 0x808003A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_2;
    // 0x808003A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808003A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003A8: jal         0x8008AED4
    // 0x808003AC: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x808003AC: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_3:
    // 0x808003B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003B4: jal         0x8008B1BC
    // 0x808003B8: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_4;
    // 0x808003B8: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_4:
    // 0x808003BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003C0: jal         0x8008B134
    // 0x808003C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x808003C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x808003C8: jal         0x8008B064
    // 0x808003CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_6;
    // 0x808003CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808003D0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x808003D4: sw          $zero, 0x15C($t6)
    MEM_W(0X15C, ctx->r14) = 0;
    // 0x808003D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808003DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808003E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808003E4: jr          $ra
    // 0x808003E8: nop

    return;
    // 0x808003E8: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808003F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808003F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808003F8: jal         0x800C2E04
    // 0x808003FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800C2E04(rdram, ctx);
        goto after_0;
    // 0x808003FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800400: sb          $v0, 0x160($s0)
    MEM_B(0X160, ctx->r16) = ctx->r2;
    // 0x80800404: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x80800408: jal         0x800C301C
    // 0x8080040C: addiu       $a1, $zero, 0x41D
    ctx->r5 = ADD32(0, 0X41D);
    func_800C301C(rdram, ctx);
        goto after_1;
    // 0x8080040C: addiu       $a1, $zero, 0x41D
    ctx->r5 = ADD32(0, 0X41D);
    after_1:
    // 0x80800410: lbu         $a0, 0x160($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X160);
    // 0x80800414: jal         0x800C330C
    // 0x80800418: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800C330C(rdram, ctx);
        goto after_2;
    // 0x80800418: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x8080041C: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x80800420: lui         $a2, 0x3FF3
    ctx->r6 = S32(0X3FF3 << 16);
    // 0x80800424: lui         $a3, 0x3F99
    ctx->r7 = S32(0X3F99 << 16);
    // 0x80800428: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x8080042C: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800430: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800434: jal         0x800C3730
    // 0x80800438: lbu         $a0, 0x160($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X160);
    func_800C3730(rdram, ctx);
        goto after_3;
    // 0x80800438: lbu         $a0, 0x160($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X160);
    after_3:
    // 0x8080043C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800440: jal         0x80095774
    // 0x80800444: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80095774(rdram, ctx);
        goto after_4;
    // 0x80800444: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_4:
    // 0x80800448: jal         0x8009E710
    // 0x8080044C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E710(rdram, ctx);
        goto after_5;
    // 0x8080044C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800454: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80800458: jal         0x8009CA70
    // 0x8080045C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8009CA70(rdram, ctx);
        goto after_6;
    // 0x8080045C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_6:
    // 0x80800460: beq         $v0, $zero, L_80800478
    if (ctx->r2 == 0) {
        // 0x80800464: nop
    
            goto L_80800478;
    }
    // 0x80800464: nop

    // 0x80800468: jal         0x800002D8
    // 0x8080046C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808002D8_bsblongleg(rdram, ctx);
        goto after_7;
    // 0x8080046C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800470: b           L_80800484
    // 0x80800474: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
        goto L_80800484;
    // 0x80800474: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
L_80800478:
    // 0x80800478: jal         0x80000378
    // 0x8080047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800378_bsblongleg(rdram, ctx);
        goto after_8;
    // 0x8080047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800480: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
L_80800484:
    // 0x80800484: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080048C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800490: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800494: jal         0x8009FFD8
    // 0x80800498: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_9;
    // 0x80800498: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_9:
    // 0x8080049C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004A0: jal         0x8009B9B0
    // 0x808004A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_10;
    // 0x808004A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_10:
    // 0x808004A8: jal         0x8000013C
    // 0x808004AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080013C_bsblongleg(rdram, ctx);
        goto after_11;
    // 0x808004AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808004B0: jal         0x8009D874
    // 0x808004B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D874(rdram, ctx);
        goto after_12;
    // 0x808004B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808004B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808004BC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808004C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808004C4: jr          $ra
    // 0x808004C8: nop

    return;
    // 0x808004C8: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808004D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808004D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808004D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808004DC: jal         0x8008CABC
    // 0x808004E0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808004E0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808004E4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x808004E8: jal         0x800000C8
    // 0x808004EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000C8_bsblongleg(rdram, ctx);
        goto after_1;
    // 0x808004EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808004F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808004F8: jal         0x8009D2F0
    // 0x808004FC: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009D2F0(rdram, ctx);
        goto after_2;
    // 0x808004FC: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_2:
    // 0x80800500: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x80800504: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800508: beq         $v0, $zero, L_80800520
    if (ctx->r2 == 0) {
        // 0x8080050C: nop
    
            goto L_80800520;
    }
    // 0x8080050C: nop

    // 0x80800510: beq         $v0, $at, L_80800540
    if (ctx->r2 == ctx->r1) {
        // 0x80800514: nop
    
            goto L_80800540;
    }
    // 0x80800514: nop

    // 0x80800518: b           L_80800558
    // 0x8080051C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800558;
    // 0x8080051C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800520:
    // 0x80800520: jal         0x8008B324
    // 0x80800524: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_3;
    // 0x80800524: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x80800528: beql        $v0, $zero, L_80800558
    if (ctx->r2 == 0) {
        // 0x8080052C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800558;
    }
    goto skip_0;
    // 0x8080052C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800530: jal         0x800002D8
    // 0x80800534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808002D8_bsblongleg(rdram, ctx);
        goto after_4;
    // 0x80800534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800538: b           L_80800558
    // 0x8080053C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800558;
    // 0x8080053C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800540:
    // 0x80800540: jal         0x8008B324
    // 0x80800544: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_5;
    // 0x80800544: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x80800548: beq         $v0, $zero, L_80800554
    if (ctx->r2 == 0) {
        // 0x8080054C: addiu       $t6, $zero, 0x26
        ctx->r14 = ADD32(0, 0X26);
            goto L_80800554;
    }
    // 0x8080054C: addiu       $t6, $zero, 0x26
    ctx->r14 = ADD32(0, 0X26);
    // 0x80800550: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800554:
    // 0x80800554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800558:
    // 0x80800558: jal         0x8009E5C8
    // 0x8080055C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x8080055C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x80800560: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800564: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800568: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080056C: jr          $ra
    // 0x80800570: nop

    return;
    // 0x80800570: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800574: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800578: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080057C: jal         0x80000204
    // 0x80800580: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800204_bsblongleg(rdram, ctx);
        goto after_0;
    // 0x80800580: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800584: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800588: jal         0x800C2FDC
    // 0x8080058C: lbu         $a0, 0x160($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X160);
    func_800C2FDC(rdram, ctx);
        goto after_1;
    // 0x8080058C: lbu         $a0, 0x160($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X160);
    after_1:
    // 0x80800590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800598: jr          $ra
    // 0x8080059C: nop

    return;
    // 0x8080059C: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005A0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808005A4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(81, 0X1470) << 16);
    // 0x808005A8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808005AC: jr          $ra
    // 0x808005B0: lw          $v0, 0x1470($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(81, 0X1470));
    return;
    // 0x808005B0: lw          $v0, 0x1470($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(81, 0X1470));
;}
RECOMP_FUNC void bsblongleg_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808005B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808005BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808005C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808005C4: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    // 0x808005C8: jal         0x8008CB3C
    // 0x808005CC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_0;
    // 0x808005CC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_0:
    // 0x808005D0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808005D4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808005D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808005E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808005E4: jal         0x8009FFD8
    // 0x808005E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x808005E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x808005EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005F0: jal         0x8009B9B0
    // 0x808005F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x808005F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x808005F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005FC: jal         0x800931AC
    // 0x80800600: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800931AC(rdram, ctx);
        goto after_3;
    // 0x80800600: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80800604: jal         0x8000013C
    // 0x80800608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080013C_bsblongleg(rdram, ctx);
        goto after_4;
    // 0x80800608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080060C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800610: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800614: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800618: jr          $ra
    // 0x8080061C: nop

    return;
    // 0x8080061C: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800620: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800624: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800628: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8080062C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800630: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800634: jal         0x800000C8
    // 0x80800638: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_808000C8_bsblongleg(rdram, ctx);
        goto after_0;
    // 0x80800638: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x8080063C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800640: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800644: jal         0x8009D2F0
    // 0x80800648: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009D2F0(rdram, ctx);
        goto after_1;
    // 0x80800648: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_1:
    // 0x8080064C: jal         0x80097AD0
    // 0x80800650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097AD0(rdram, ctx);
        goto after_2;
    // 0x80800650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800654: beql        $v0, $zero, L_8080066C
    if (ctx->r2 == 0) {
        // 0x80800658: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080066C;
    }
    goto skip_0;
    // 0x80800658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8080065C: jal         0x800848A8
    // 0x80800660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_3;
    // 0x80800660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800664: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80800668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080066C:
    // 0x8080066C: jal         0x80091A58
    // 0x80800670: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_4;
    // 0x80800670: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_4:
    // 0x80800674: beq         $v0, $zero, L_80800684
    if (ctx->r2 == 0) {
        // 0x80800678: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800684;
    }
    // 0x80800678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080067C: jal         0x80091788
    // 0x80800680: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80091788(rdram, ctx);
        goto after_5;
    // 0x80800680: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
L_80800684:
    // 0x80800684: jal         0x8009EF10
    // 0x80800688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_6;
    // 0x80800688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080068C: blez        $v0, L_80800698
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80800690: nop
    
            goto L_80800698;
    }
    // 0x80800690: nop

    // 0x80800694: addiu       $s1, $zero, 0x27
    ctx->r17 = ADD32(0, 0X27);
L_80800698:
    // 0x80800698: jal         0x8008DF18
    // 0x8080069C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DF18(rdram, ctx);
        goto after_7;
    // 0x8080069C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808006A0: beq         $v0, $zero, L_808006AC
    if (ctx->r2 == 0) {
        // 0x808006A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006AC;
    }
    // 0x808006A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006A8: addiu       $s1, $zero, 0x55
    ctx->r17 = ADD32(0, 0X55);
L_808006AC:
    // 0x808006AC: jal         0x80091A58
    // 0x808006B0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_8;
    // 0x808006B0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_8:
    // 0x808006B4: beql        $v0, $zero, L_808006D4
    if (ctx->r2 == 0) {
        // 0x808006B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006D4;
    }
    goto skip_1;
    // 0x808006B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808006BC: jal         0x8008E078
    // 0x808006C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_9;
    // 0x808006C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808006C4: beql        $v0, $zero, L_808006D4
    if (ctx->r2 == 0) {
        // 0x808006C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006D4;
    }
    goto skip_2;
    // 0x808006C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x808006CC: addiu       $s1, $zero, 0x28
    ctx->r17 = ADD32(0, 0X28);
    // 0x808006D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808006D4:
    // 0x808006D4: jal         0x800915AC
    // 0x808006D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800915AC(rdram, ctx);
        goto after_10;
    // 0x808006D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x808006DC: beq         $v0, $zero, L_808006E8
    if (ctx->r2 == 0) {
        // 0x808006E0: nop
    
            goto L_808006E8;
    }
    // 0x808006E0: nop

    // 0x808006E4: addiu       $s1, $zero, 0x29
    ctx->r17 = ADD32(0, 0X29);
L_808006E8:
    // 0x808006E8: jal         0x80000000
    // 0x808006EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsblongleg(rdram, ctx);
        goto after_11;
    // 0x808006EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808006F0: beq         $v0, $zero, L_808006FC
    if (ctx->r2 == 0) {
        // 0x808006F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006FC;
    }
    // 0x808006F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006F8: addiu       $s1, $zero, 0x4C
    ctx->r17 = ADD32(0, 0X4C);
L_808006FC:
    // 0x808006FC: jal         0x8009E5C8
    // 0x80800700: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_12;
    // 0x80800700: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_12:
    // 0x80800704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800708: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8080070C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800710: jr          $ra
    // 0x80800714: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800714: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bsblongleg_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800718: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080071C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800720: jal         0x80000204
    // 0x80800724: nop

    func_80800204_bsblongleg(rdram, ctx);
        goto after_0;
    // 0x80800724: nop

    after_0:
    // 0x80800728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080072C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800730: jr          $ra
    // 0x80800734: nop

    return;
    // 0x80800734: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800738: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080073C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(81, 0X1480) << 16);
    // 0x80800740: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800744: jr          $ra
    // 0x80800748: lw          $v0, 0x1480($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(81, 0X1480));
    return;
    // 0x80800748: lw          $v0, 0x1480($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(81, 0X1480));
;}
RECOMP_FUNC void bsblongleg_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080074C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800750: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800754: jal         0x8008CABC
    // 0x80800758: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800758: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080075C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800760: jal         0x8008AF24
    // 0x80800764: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80800764: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800768: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8080076C: jal         0x8008AED4
    // 0x80800770: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x80800770: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    after_2:
    // 0x80800774: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80800778: jal         0x8008B134
    // 0x8080077C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_3;
    // 0x8080077C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80800780: jal         0x8008B064
    // 0x80800784: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B064(rdram, ctx);
        goto after_4;
    // 0x80800784: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x80800788: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8080078C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800790: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800794: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800798: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080079C: jal         0x8009FFD8
    // 0x808007A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_5;
    // 0x808007A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x808007A4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(81, 0X1460) << 16);
    // 0x808007A8: lwc1        $f4, 0x1460($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(81, 0X1460));
    // 0x808007AC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808007B0: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x808007B4: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    // 0x808007B8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x808007BC: jal         0x8008C9F0
    // 0x808007C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_6;
    // 0x808007C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x808007C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808007C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808007CC: jr          $ra
    // 0x808007D0: nop

    return;
    // 0x808007D0: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808007D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808007DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808007E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808007E4: jal         0x8008CABC
    // 0x808007E8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808007E8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808007EC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x808007F0: jal         0x800000C8
    // 0x808007F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000C8_bsblongleg(rdram, ctx);
        goto after_1;
    // 0x808007F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808007F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800800: jal         0x8009D2F0
    // 0x80800804: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009D2F0(rdram, ctx);
        goto after_2;
    // 0x80800804: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_2:
    // 0x80800808: lui         $a1, 0x3EF0
    ctx->r5 = S32(0X3EF0 << 16);
    // 0x8080080C: ori         $a1, $a1, 0xA3D7
    ctx->r5 = ctx->r5 | 0XA3D7;
    // 0x80800810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800814: jal         0x800A2CE8
    // 0x80800818: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_3;
    // 0x80800818: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x8080081C: lui         $a1, 0x3F78
    ctx->r5 = S32(0X3F78 << 16);
    // 0x80800820: ori         $a1, $a1, 0x51EC
    ctx->r5 = ctx->r5 | 0X51EC;
    // 0x80800824: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800828: jal         0x800A2CE8
    // 0x8080082C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_4;
    // 0x8080082C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_4:
    // 0x80800830: lui         $a1, 0x3F47
    ctx->r5 = S32(0X3F47 << 16);
    // 0x80800834: ori         $a1, $a1, 0x3190
    ctx->r5 = ctx->r5 | 0X3190;
    // 0x80800838: jal         0x8008B348
    // 0x8080083C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_5;
    // 0x8080083C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x80800840: beq         $v0, $zero, L_80800850
    if (ctx->r2 == 0) {
        // 0x80800844: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800850;
    }
    // 0x80800844: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800848: jal         0x80000020
    // 0x8080084C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800020_bsblongleg(rdram, ctx);
        goto after_6;
    // 0x8080084C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_80800850:
    // 0x80800850: lui         $a1, 0x3E8E
    ctx->r5 = S32(0X3E8E << 16);
    // 0x80800854: ori         $a1, $a1, 0x6320
    ctx->r5 = ctx->r5 | 0X6320;
    // 0x80800858: jal         0x8008B348
    // 0x8080085C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x8080085C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_7:
    // 0x80800860: beq         $v0, $zero, L_80800870
    if (ctx->r2 == 0) {
        // 0x80800864: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800870;
    }
    // 0x80800864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800868: jal         0x80000020
    // 0x8080086C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800020_bsblongleg(rdram, ctx);
        goto after_8;
    // 0x8080086C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
L_80800870:
    // 0x80800870: jal         0x80000064
    // 0x80800874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800064_bsblongleg(rdram, ctx);
        goto after_9;
    // 0x80800874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080087C: jal         0x80091A58
    // 0x80800880: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_10;
    // 0x80800880: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_10:
    // 0x80800884: beq         $v0, $zero, L_808008B4
    if (ctx->r2 == 0) {
        // 0x80800888: nop
    
            goto L_808008B4;
    }
    // 0x80800888: nop

    // 0x8080088C: jal         0x8009BB00
    // 0x80800890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_11;
    // 0x80800890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800894: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080089C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x808008A0: nop

    // 0x808008A4: bc1f        L_808008B4
    if (!c1cs) {
        // 0x808008A8: nop
    
            goto L_808008B4;
    }
    // 0x808008A8: nop

    // 0x808008AC: jal         0x80091788
    // 0x808008B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80091788(rdram, ctx);
        goto after_12;
    // 0x808008B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
L_808008B4:
    // 0x808008B4: jal         0x8009EF10
    // 0x808008B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_13;
    // 0x808008B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808008BC: bne         $v0, $zero, L_808008D8
    if (ctx->r2 != 0) {
        // 0x808008C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008D8;
    }
    // 0x808008C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008C4: jal         0x8009BCD4
    // 0x808008C8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_14;
    // 0x808008C8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_14:
    // 0x808008CC: beq         $v0, $zero, L_808008D8
    if (ctx->r2 == 0) {
        // 0x808008D0: addiu       $t6, $zero, 0x26
        ctx->r14 = ADD32(0, 0X26);
            goto L_808008D8;
    }
    // 0x808008D0: addiu       $t6, $zero, 0x26
    ctx->r14 = ADD32(0, 0X26);
    // 0x808008D4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_808008D8:
    // 0x808008D8: jal         0x8008DF18
    // 0x808008DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DF18(rdram, ctx);
        goto after_15;
    // 0x808008DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808008E0: beq         $v0, $zero, L_808008F0
    if (ctx->r2 == 0) {
        // 0x808008E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008F0;
    }
    // 0x808008E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008E8: addiu       $t7, $zero, 0x55
    ctx->r15 = ADD32(0, 0X55);
    // 0x808008EC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_808008F0:
    // 0x808008F0: jal         0x80091A58
    // 0x808008F4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_16;
    // 0x808008F4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_16:
    // 0x808008F8: beql        $v0, $zero, L_80800918
    if (ctx->r2 == 0) {
        // 0x808008FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800918;
    }
    goto skip_0;
    // 0x808008FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800900: jal         0x8008E078
    // 0x80800904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_17;
    // 0x80800904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800908: beq         $v0, $zero, L_80800914
    if (ctx->r2 == 0) {
        // 0x8080090C: addiu       $t8, $zero, 0x28
        ctx->r24 = ADD32(0, 0X28);
            goto L_80800914;
    }
    // 0x8080090C: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x80800910: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80800914:
    // 0x80800914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800918:
    // 0x80800918: jal         0x800915AC
    // 0x8080091C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800915AC(rdram, ctx);
        goto after_18;
    // 0x8080091C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_18:
    // 0x80800920: beq         $v0, $zero, L_8080092C
    if (ctx->r2 == 0) {
        // 0x80800924: addiu       $t9, $zero, 0x29
        ctx->r25 = ADD32(0, 0X29);
            goto L_8080092C;
    }
    // 0x80800924: addiu       $t9, $zero, 0x29
    ctx->r25 = ADD32(0, 0X29);
    // 0x80800928: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_8080092C:
    // 0x8080092C: jal         0x80000000
    // 0x80800930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsblongleg(rdram, ctx);
        goto after_19;
    // 0x80800930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800934: beq         $v0, $zero, L_80800944
    if (ctx->r2 == 0) {
        // 0x80800938: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800944;
    }
    // 0x80800938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080093C: addiu       $t0, $zero, 0x4C
    ctx->r8 = ADD32(0, 0X4C);
    // 0x80800940: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_80800944:
    // 0x80800944: jal         0x8009E5C8
    // 0x80800948: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_20;
    // 0x80800948: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_20:
    // 0x8080094C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800950: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800954: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800958: jr          $ra
    // 0x8080095C: nop

    return;
    // 0x8080095C: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800960: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800968: jal         0x80000204
    // 0x8080096C: nop

    func_80800204_bsblongleg(rdram, ctx);
        goto after_0;
    // 0x8080096C: nop

    after_0:
    // 0x80800970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800978: jr          $ra
    // 0x8080097C: nop

    return;
    // 0x8080097C: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800980: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800984: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(81, 0X1490) << 16);
    // 0x80800988: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080098C: jr          $ra
    // 0x80800990: lw          $v0, 0x1490($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(81, 0X1490));
    return;
    // 0x80800990: lw          $v0, 0x1490($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(81, 0X1490));
;}
RECOMP_FUNC void func_80800994_bsblongleg(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800994: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800998: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080099C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808009A0: jal         0x8008CABC
    // 0x808009A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808009A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x808009A8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808009AC: jal         0x8008AF24
    // 0x808009B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x808009B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808009B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009B8: jal         0x8008B1A0
    // 0x808009BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_2;
    // 0x808009BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808009C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009C4: jal         0x8008B188
    // 0x808009C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B188(rdram, ctx);
        goto after_3;
    // 0x808009C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x808009CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009D0: jal         0x8008AED4
    // 0x808009D4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8008AED4(rdram, ctx);
        goto after_4;
    // 0x808009D4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_4:
    // 0x808009D8: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x808009DC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808009E0: jal         0x8008B1BC
    // 0x808009E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_5;
    // 0x808009E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808009E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009EC: jal         0x8008B134
    // 0x808009F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_6;
    // 0x808009F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x808009F4: jal         0x8008B064
    // 0x808009F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x808009F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808009FC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80800A00: sw          $zero, 0x15C($t6)
    MEM_W(0X15C, ctx->r14) = 0;
    // 0x80800A04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800A08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800A0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800A10: jr          $ra
    // 0x80800A14: nop

    return;
    // 0x80800A14: nop

;}
RECOMP_FUNC void func_80800A18_bsblongleg(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800A1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800A20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800A24: jal         0x8008CABC
    // 0x80800A28: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800A28: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800A2C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800A30: jal         0x8008AF24
    // 0x80800A34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80800A34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A3C: jal         0x8008B1A0
    // 0x80800A40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_2;
    // 0x80800A40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800A44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A48: jal         0x8008AED4
    // 0x80800A4C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x80800A4C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_3:
    // 0x80800A50: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800A54: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800A58: jal         0x8008B1BC
    // 0x80800A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_4;
    // 0x80800A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A64: jal         0x8008B134
    // 0x80800A68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x80800A68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80800A6C: jal         0x8008B064
    // 0x80800A70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_6;
    // 0x80800A70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800A74: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80800A78: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800A7C: sw          $t6, 0x15C($t7)
    MEM_W(0X15C, ctx->r15) = ctx->r14;
    // 0x80800A80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800A84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800A88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800A8C: jr          $ra
    // 0x80800A90: nop

    return;
    // 0x80800A90: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800A98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800A9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800AA0: jal         0x80000994
    // 0x80800AA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800994_bsblongleg(rdram, ctx);
        goto after_0;
    // 0x80800AA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AAC: jal         0x8008CA4C
    // 0x80800AB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008CA4C(rdram, ctx);
        goto after_1;
    // 0x80800AB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800AB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AB8: jal         0x8009D2D8
    // 0x80800ABC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009D2D8(rdram, ctx);
        goto after_2;
    // 0x80800ABC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80800AC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AC4: jal         0x8009B9B0
    // 0x80800AC8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80800AC8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800ACC: jal         0x800C2E04
    // 0x80800AD0: nop

    func_800C2E04(rdram, ctx);
        goto after_4;
    // 0x80800AD0: nop

    after_4:
    // 0x80800AD4: sb          $v0, 0x160($s0)
    MEM_B(0X160, ctx->r16) = ctx->r2;
    // 0x80800AD8: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x80800ADC: jal         0x800C301C
    // 0x80800AE0: addiu       $a1, $zero, 0x41D
    ctx->r5 = ADD32(0, 0X41D);
    func_800C301C(rdram, ctx);
        goto after_5;
    // 0x80800AE0: addiu       $a1, $zero, 0x41D
    ctx->r5 = ADD32(0, 0X41D);
    after_5:
    // 0x80800AE4: lbu         $a0, 0x160($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X160);
    // 0x80800AE8: jal         0x800C330C
    // 0x80800AEC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800C330C(rdram, ctx);
        goto after_6;
    // 0x80800AEC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x80800AF0: lui         $a1, 0x3FB3
    ctx->r5 = S32(0X3FB3 << 16);
    // 0x80800AF4: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x80800AF8: lui         $a3, 0xBF99
    ctx->r7 = S32(0XBF99 << 16);
    // 0x80800AFC: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x80800B00: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800B04: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80800B08: jal         0x800C3730
    // 0x80800B0C: lbu         $a0, 0x160($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X160);
    func_800C3730(rdram, ctx);
        goto after_7;
    // 0x80800B0C: lbu         $a0, 0x160($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X160);
    after_7:
    // 0x80800B10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800B14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800B18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800B1C: jr          $ra
    // 0x80800B20: nop

    return;
    // 0x80800B20: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800B28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800B2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800B30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800B34: jal         0x8008CABC
    // 0x80800B38: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800B38: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800B3C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800B40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B44: jal         0x8009D3A8
    // 0x80800B48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D3A8(rdram, ctx);
        goto after_1;
    // 0x80800B48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800B4C: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x80800B50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800B54: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800B58: beq         $v0, $zero, L_80800B70
    if (ctx->r2 == 0) {
        // 0x80800B5C: lui         $a1, 0x3F2E
        ctx->r5 = S32(0X3F2E << 16);
            goto L_80800B70;
    }
    // 0x80800B5C: lui         $a1, 0x3F2E
    ctx->r5 = S32(0X3F2E << 16);
    // 0x80800B60: beq         $v0, $at, L_80800BA8
    if (ctx->r2 == ctx->r1) {
        // 0x80800B64: nop
    
            goto L_80800BA8;
    }
    // 0x80800B64: nop

    // 0x80800B68: b           L_80800BBC
    // 0x80800B6C: nop

        goto L_80800BBC;
    // 0x80800B6C: nop

L_80800B70:
    // 0x80800B70: jal         0x8008B348
    // 0x80800B74: ori         $a1, $a1, 0x147B
    ctx->r5 = ctx->r5 | 0X147B;
    func_8008B348(rdram, ctx);
        goto after_2;
    // 0x80800B74: ori         $a1, $a1, 0x147B
    ctx->r5 = ctx->r5 | 0X147B;
    after_2:
    // 0x80800B78: beq         $v0, $zero, L_80800B88
    if (ctx->r2 == 0) {
        // 0x80800B7C: nop
    
            goto L_80800B88;
    }
    // 0x80800B7C: nop

    // 0x80800B80: jal         0x800C3BDC
    // 0x80800B84: lbu         $a0, 0x160($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X160);
    func_800C3BDC(rdram, ctx);
        goto after_3;
    // 0x80800B84: lbu         $a0, 0x160($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X160);
    after_3:
L_80800B88:
    // 0x80800B88: jal         0x8008B324
    // 0x80800B8C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_4;
    // 0x80800B8C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800B90: beq         $v0, $zero, L_80800BBC
    if (ctx->r2 == 0) {
        // 0x80800B94: nop
    
            goto L_80800BBC;
    }
    // 0x80800B94: nop

    // 0x80800B98: jal         0x80000A18
    // 0x80800B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800A18_bsblongleg(rdram, ctx);
        goto after_5;
    // 0x80800B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800BA0: b           L_80800BBC
    // 0x80800BA4: nop

        goto L_80800BBC;
    // 0x80800BA4: nop

L_80800BA8:
    // 0x80800BA8: jal         0x8008B324
    // 0x80800BAC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_6;
    // 0x80800BAC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_6:
    // 0x80800BB0: beq         $v0, $zero, L_80800BBC
    if (ctx->r2 == 0) {
        // 0x80800BB4: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80800BBC;
    }
    // 0x80800BB4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800BB8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800BBC:
    // 0x80800BBC: jal         0x80000000
    // 0x80800BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsblongleg(rdram, ctx);
        goto after_7;
    // 0x80800BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800BC4: beq         $v0, $zero, L_80800BD4
    if (ctx->r2 == 0) {
        // 0x80800BC8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800BD4;
    }
    // 0x80800BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BCC: addiu       $t7, $zero, 0x4C
    ctx->r15 = ADD32(0, 0X4C);
    // 0x80800BD0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80800BD4:
    // 0x80800BD4: jal         0x8009E5C8
    // 0x80800BD8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_8;
    // 0x80800BD8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x80800BDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800BE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800BE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800BE8: jr          $ra
    // 0x80800BEC: nop

    return;
    // 0x80800BEC: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800BF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800BFC: jal         0x800C2FDC
    // 0x80800C00: lbu         $a0, 0x160($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X160);
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x80800C00: lbu         $a0, 0x160($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X160);
    after_0:
    // 0x80800C04: jal         0x80000204
    // 0x80800C08: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800204_bsblongleg(rdram, ctx);
        goto after_1;
    // 0x80800C08: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800C0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C14: jr          $ra
    // 0x80800C18: nop

    return;
    // 0x80800C18: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C1C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800C20: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(81, 0X14A0) << 16);
    // 0x80800C24: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800C28: jr          $ra
    // 0x80800C2C: lw          $v0, 0x14A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(81, 0X14A0));
    return;
    // 0x80800C2C: lw          $v0, 0x14A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(81, 0X14A0));
;}
RECOMP_FUNC void bsblongleg_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C30: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800C34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800C38: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800C3C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800C40: jal         0x8008CABC
    // 0x80800C44: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800C44: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800C48: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(81, 0X1464) << 16);
    // 0x80800C4C: lwc1        $f4, 0x1464($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(81, 0X1464));
    // 0x80800C50: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800C54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800C58: jal         0x8008AF24
    // 0x80800C5C: swc1        $f4, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f4.u32l;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80800C5C: swc1        $f4, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f4.u32l;
    after_1:
    // 0x80800C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C64: jal         0x8008AED4
    // 0x80800C68: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x80800C68: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    after_2:
    // 0x80800C6C: lui         $a1, 0x3E09
    ctx->r5 = S32(0X3E09 << 16);
    // 0x80800C70: ori         $a1, $a1, 0x374C
    ctx->r5 = ctx->r5 | 0X374C;
    // 0x80800C74: jal         0x8008B1C8
    // 0x80800C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1C8(rdram, ctx);
        goto after_3;
    // 0x80800C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C80: jal         0x8008B1BC
    // 0x80800C84: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_4;
    // 0x80800C84: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_4:
    // 0x80800C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C8C: jal         0x8008B24C
    // 0x80800C90: lw          $a1, 0x16C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X16C);
    func_8008B24C(rdram, ctx);
        goto after_5;
    // 0x80800C90: lw          $a1, 0x16C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X16C);
    after_5:
    // 0x80800C94: lui         $a2, 0x3ED7
    ctx->r6 = S32(0X3ED7 << 16);
    // 0x80800C98: ori         $a2, $a2, 0xA3D
    ctx->r6 = ctx->r6 | 0XA3D;
    // 0x80800C9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CA0: jal         0x8008B1D4
    // 0x80800CA4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_6;
    // 0x80800CA4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x80800CA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CAC: jal         0x8008B134
    // 0x80800CB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_7;
    // 0x80800CB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80800CB4: jal         0x8008B064
    // 0x80800CB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_8;
    // 0x80800CB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800CBC: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800CC0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800CC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800CC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800CCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800CD0: jal         0x8009FFD8
    // 0x80800CD4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_9;
    // 0x80800CD4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_9:
    // 0x80800CD8: jal         0x8009EF04
    // 0x80800CDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EF04(rdram, ctx);
        goto after_10;
    // 0x80800CDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x80800CE0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80800CE4: nop

    // 0x80800CE8: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80800CEC: nop

    // 0x80800CF0: bc1t        L_80800D0C
    if (c1cs) {
        // 0x80800CF4: nop
    
            goto L_80800D0C;
    }
    // 0x80800CF4: nop

    // 0x80800CF8: jal         0x8009EEB8
    // 0x80800CFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_11;
    // 0x80800CFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x80800D00: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800D04: jal         0x8009C914
    // 0x80800D08: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C914(rdram, ctx);
        goto after_12;
    // 0x80800D08: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
L_80800D0C:
    // 0x80800D0C: jal         0x8009C990
    // 0x80800D10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_13;
    // 0x80800D10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x80800D14: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800D18: jal         0x8009B9C0
    // 0x80800D1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_14;
    // 0x80800D1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x80800D20: jal         0x80000064
    // 0x80800D24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800064_bsblongleg(rdram, ctx);
        goto after_15;
    // 0x80800D24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x80800D28: jal         0x8009C990
    // 0x80800D2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_16;
    // 0x80800D2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x80800D30: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800D34: jal         0x8009BB00
    // 0x80800D38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BB00(rdram, ctx);
        goto after_17;
    // 0x80800D38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x80800D3C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800D40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800D44: jal         0x8009BA68
    // 0x80800D48: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_18;
    // 0x80800D48: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_18:
    // 0x80800D4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800D50: jal         0x8009BA58
    // 0x80800D54: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    func_8009BA58(rdram, ctx);
        goto after_19;
    // 0x80800D54: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    after_19:
    // 0x80800D58: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800D5C: jal         0x8009BCB4
    // 0x80800D60: lui         $a1, 0xC448
    ctx->r5 = S32(0XC448 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_20;
    // 0x80800D60: lui         $a1, 0xC448
    ctx->r5 = S32(0XC448 << 16);
    after_20:
    // 0x80800D64: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x80800D68: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800D6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800D70: jal         0x8009DE38
    // 0x80800D74: addiu       $a1, $zero, 0x4432
    ctx->r5 = ADD32(0, 0X4432);
    func_8009DE38(rdram, ctx);
        goto after_21;
    // 0x80800D74: addiu       $a1, $zero, 0x4432
    ctx->r5 = ADD32(0, 0X4432);
    after_21:
    // 0x80800D78: sw          $zero, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = 0;
    // 0x80800D7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800D80: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800D84: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800D88: jr          $ra
    // 0x80800D8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80800D8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void bsblongleg_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D90: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80800D94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800D98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800D9C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800DA0: jal         0x8008CABC
    // 0x80800DA4: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800DA4: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    after_0:
    // 0x80800DA8: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x80800DAC: jal         0x800000C8
    // 0x80800DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000C8_bsblongleg(rdram, ctx);
        goto after_1;
    // 0x80800DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800DB4: jal         0x80000064
    // 0x80800DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800064_bsblongleg(rdram, ctx);
        goto after_2;
    // 0x80800DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800DBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DC0: jal         0x8009BB24
    // 0x80800DC4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_8009BB24(rdram, ctx);
        goto after_3;
    // 0x80800DC4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x80800DC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DCC: jal         0x80091A30
    // 0x80800DD0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_4;
    // 0x80800DD0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_4:
    // 0x80800DD4: beq         $v0, $zero, L_80800DFC
    if (ctx->r2 == 0) {
        // 0x80800DD8: lwc1        $f6, 0x40($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
            goto L_80800DFC;
    }
    // 0x80800DD8: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800DDC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800DE0: nop

    // 0x80800DE4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800DE8: nop

    // 0x80800DEC: bc1f        L_80800DFC
    if (!c1cs) {
        // 0x80800DF0: nop
    
            goto L_80800DFC;
    }
    // 0x80800DF0: nop

    // 0x80800DF4: jal         0x8009BC6C
    // 0x80800DF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_5;
    // 0x80800DF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_80800DFC:
    // 0x80800DFC: jal         0x8009C150
    // 0x80800E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C150(rdram, ctx);
        goto after_6;
    // 0x80800E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800E04: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80800E08: jal         0x80096364
    // 0x80800E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096364(rdram, ctx);
        goto after_7;
    // 0x80800E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800E10: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80800E14: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x80800E18: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800E1C: sub.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x80800E20: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80800E24: beq         $v0, $zero, L_80800E58
    if (ctx->r2 == 0) {
        // 0x80800E28: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_80800E58;
    }
    // 0x80800E28: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x80800E2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800E30: beq         $v0, $at, L_80800ED8
    if (ctx->r2 == ctx->r1) {
        // 0x80800E34: lw          $a0, 0x48($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X48);
            goto L_80800ED8;
    }
    // 0x80800E34: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800E38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800E3C: beq         $v0, $at, L_80800F44
    if (ctx->r2 == ctx->r1) {
        // 0x80800E40: lui         $a2, 0x3F80
        ctx->r6 = S32(0X3F80 << 16);
            goto L_80800F44;
    }
    // 0x80800E40: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800E44: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800E48: beq         $v0, $at, L_80800FC8
    if (ctx->r2 == ctx->r1) {
        // 0x80800E4C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800FC8;
    }
    // 0x80800E4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E50: b           L_80801018
    // 0x80800E54: nop

        goto L_80801018;
    // 0x80800E54: nop

L_80800E58:
    // 0x80800E58: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800E5C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80800E60: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800E64: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80800E68: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x80800E6C: bc1t        L_80800E8C
    if (c1cs) {
        // 0x80800E70: nop
    
            goto L_80800E8C;
    }
    // 0x80800E70: nop

    // 0x80800E74: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80800E78: nop

    // 0x80800E7C: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x80800E80: nop

    // 0x80800E84: bc1f        L_80800E94
    if (!c1cs) {
        // 0x80800E88: nop
    
            goto L_80800E94;
    }
    // 0x80800E88: nop

L_80800E8C:
    // 0x80800E8C: jal         0x8008B1BC
    // 0x80800E90: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_8008B1BC(rdram, ctx);
        goto after_8;
    // 0x80800E90: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_8:
L_80800E94:
    // 0x80800E94: jal         0x8008B324
    // 0x80800E98: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_8008B324(rdram, ctx);
        goto after_9;
    // 0x80800E98: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_9:
    // 0x80800E9C: beq         $v0, $zero, L_80801018
    if (ctx->r2 == 0) {
        // 0x80800EA0: lw          $a0, 0x48($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X48);
            goto L_80801018;
    }
    // 0x80800EA0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800EA4: lui         $a2, 0x3F07
    ctx->r6 = S32(0X3F07 << 16);
    // 0x80800EA8: ori         $a2, $a2, 0x381D
    ctx->r6 = ctx->r6 | 0X381D;
    // 0x80800EAC: jal         0x8008B1D4
    // 0x80800EB0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_10;
    // 0x80800EB0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_10:
    // 0x80800EB4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800EB8: jal         0x8008B1BC
    // 0x80800EBC: lui         $a1, 0x4090
    ctx->r5 = S32(0X4090 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_11;
    // 0x80800EBC: lui         $a1, 0x4090
    ctx->r5 = S32(0X4090 << 16);
    after_11:
    // 0x80800EC0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800EC4: jal         0x8008B134
    // 0x80800EC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_12;
    // 0x80800EC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x80800ECC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800ED0: b           L_80801018
    // 0x80800ED4: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
        goto L_80801018;
    // 0x80800ED4: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_80800ED8:
    // 0x80800ED8: jal         0x8008B2B4
    // 0x80800EDC: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    func_8008B2B4(rdram, ctx);
        goto after_13;
    // 0x80800EDC: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    after_13:
    // 0x80800EE0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(81, 0X1468) << 16);
    // 0x80800EE4: lwc1        $f4, 0x1468($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(81, 0X1468));
    // 0x80800EE8: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x80800EEC: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800EF0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800EF4: nop

    // 0x80800EF8: bc1f        L_80801018
    if (!c1cs) {
        // 0x80800EFC: nop
    
            goto L_80801018;
    }
    // 0x80800EFC: nop

    // 0x80800F00: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800F04: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800F08: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80800F0C: nop

    // 0x80800F10: bc1f        L_80801018
    if (!c1cs) {
        // 0x80800F14: nop
    
            goto L_80801018;
    }
    // 0x80800F14: nop

    // 0x80800F18: jal         0x8008B2B4
    // 0x80800F1C: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    func_8008B2B4(rdram, ctx);
        goto after_14;
    // 0x80800F1C: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    after_14:
    // 0x80800F20: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800F24: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x80800F28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80800F2C: swc1        $f12, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f12.u32l;
    // 0x80800F30: jal         0x8008B134
    // 0x80800F34: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_8008B134(rdram, ctx);
        goto after_15;
    // 0x80800F34: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_15:
    // 0x80800F38: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80800F3C: b           L_80801018
    // 0x80800F40: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
        goto L_80801018;
    // 0x80800F40: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_80800F44:
    // 0x80800F44: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(81, 0X146C) << 16);
    // 0x80800F48: lwc1        $f8, 0x146C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(81, 0X146C));
    // 0x80800F4C: lwc1        $f14, 0x170($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X170);
    // 0x80800F50: lw          $a3, 0x16C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X16C);
    // 0x80800F54: jal         0x800F10B4
    // 0x80800F58: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_16;
    // 0x80800F58: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_16:
    // 0x80800F5C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800F60: jal         0x8008B10C
    // 0x80800F64: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_8008B10C(rdram, ctx);
        goto after_17;
    // 0x80800F64: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_17:
    // 0x80800F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800F70: jal         0x8009D2F0
    // 0x80800F74: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009D2F0(rdram, ctx);
        goto after_18;
    // 0x80800F74: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_18:
    // 0x80800F78: jal         0x8008E078
    // 0x80800F7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_19;
    // 0x80800F7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800F80: beq         $v0, $zero, L_80801018
    if (ctx->r2 == 0) {
        // 0x80800F84: nop
    
            goto L_80801018;
    }
    // 0x80800F84: nop

    // 0x80800F88: jal         0x8009FE58
    // 0x80800F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE58(rdram, ctx);
        goto after_20;
    // 0x80800F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80800F90: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800F94: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80800F98: jal         0x8008B1D4
    // 0x80800F9C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008B1D4(rdram, ctx);
        goto after_21;
    // 0x80800F9C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_21:
    // 0x80800FA0: lui         $a1, 0x3FA6
    ctx->r5 = S32(0X3FA6 << 16);
    // 0x80800FA4: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80800FA8: jal         0x8008B1BC
    // 0x80800FAC: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_8008B1BC(rdram, ctx);
        goto after_22;
    // 0x80800FAC: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_22:
    // 0x80800FB0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800FB4: jal         0x8008B134
    // 0x80800FB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_23;
    // 0x80800FB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
    // 0x80800FBC: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80800FC0: b           L_80801018
    // 0x80800FC4: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
        goto L_80801018;
    // 0x80800FC4: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
L_80800FC8:
    // 0x80800FC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800FCC: jal         0x8009D2F0
    // 0x80800FD0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009D2F0(rdram, ctx);
        goto after_24;
    // 0x80800FD0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_24:
    // 0x80800FD4: jal         0x8008B324
    // 0x80800FD8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_8008B324(rdram, ctx);
        goto after_25;
    // 0x80800FD8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_25:
    // 0x80800FDC: beq         $v0, $zero, L_80800FEC
    if (ctx->r2 == 0) {
        // 0x80800FE0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800FEC;
    }
    // 0x80800FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FE4: addiu       $t9, $zero, 0x26
    ctx->r25 = ADD32(0, 0X26);
    // 0x80800FE8: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
L_80800FEC:
    // 0x80800FEC: jal         0x80091A58
    // 0x80800FF0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_26;
    // 0x80800FF0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_26:
    // 0x80800FF4: beq         $v0, $zero, L_80801004
    if (ctx->r2 == 0) {
        // 0x80800FF8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801004;
    }
    // 0x80800FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FFC: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x80801000: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
L_80801004:
    // 0x80801004: jal         0x800915AC
    // 0x80801008: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800915AC(rdram, ctx);
        goto after_27;
    // 0x80801008: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_27:
    // 0x8080100C: beq         $v0, $zero, L_80801018
    if (ctx->r2 == 0) {
        // 0x80801010: addiu       $t1, $zero, 0x29
        ctx->r9 = ADD32(0, 0X29);
            goto L_80801018;
    }
    // 0x80801010: addiu       $t1, $zero, 0x29
    ctx->r9 = ADD32(0, 0X29);
    // 0x80801014: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
L_80801018:
    // 0x80801018: jal         0x80000000
    // 0x8080101C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsblongleg(rdram, ctx);
        goto after_28;
    // 0x8080101C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x80801020: beq         $v0, $zero, L_80801030
    if (ctx->r2 == 0) {
        // 0x80801024: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801030;
    }
    // 0x80801024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801028: addiu       $t2, $zero, 0x4C
    ctx->r10 = ADD32(0, 0X4C);
    // 0x8080102C: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
L_80801030:
    // 0x80801030: jal         0x8009E5C8
    // 0x80801034: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009E5C8(rdram, ctx);
        goto after_29;
    // 0x80801034: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_29:
    // 0x80801038: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080103C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801040: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80801044: jr          $ra
    // 0x80801048: nop

    return;
    // 0x80801048: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080104C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801050: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801054: jal         0x8009BC6C
    // 0x80801058: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x80801058: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080105C: jal         0x80000204
    // 0x80801060: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800204_bsblongleg(rdram, ctx);
        goto after_1;
    // 0x80801060: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080106C: jr          $ra
    // 0x80801070: nop

    return;
    // 0x80801070: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801074: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801078: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(81, 0X14B0) << 16);
    // 0x8080107C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801080: jr          $ra
    // 0x80801084: lw          $v0, 0x14B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(81, 0X14B0));
    return;
    // 0x80801084: lw          $v0, 0x14B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(81, 0X14B0));
;}
RECOMP_FUNC void bsblongleg_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801088: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8080108C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801090: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801094: jal         0x8008CABC
    // 0x80801098: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80801098: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080109C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x808010A0: jal         0x8008AF24
    // 0x808010A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x808010A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808010A8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x808010AC: jal         0x8008AED4
    // 0x808010B0: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x808010B0: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    after_2:
    // 0x808010B4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x808010B8: jal         0x8008B134
    // 0x808010BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008B134(rdram, ctx);
        goto after_3;
    // 0x808010BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x808010C0: lui         $a1, 0x3DB1
    ctx->r5 = S32(0X3DB1 << 16);
    // 0x808010C4: ori         $a1, $a1, 0x26E9
    ctx->r5 = ctx->r5 | 0X26E9;
    // 0x808010C8: jal         0x8008B24C
    // 0x808010CC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B24C(rdram, ctx);
        goto after_4;
    // 0x808010CC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_4:
    // 0x808010D0: jal         0x8008B064
    // 0x808010D4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B064(rdram, ctx);
        goto after_5;
    // 0x808010D4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_5:
    // 0x808010D8: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x808010DC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808010E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808010E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808010EC: jal         0x8009FFD8
    // 0x808010F0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_6;
    // 0x808010F0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_6:
    // 0x808010F4: jal         0x8009C990
    // 0x808010F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_7;
    // 0x808010F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808010FC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80801100: jal         0x8009B9C0
    // 0x80801104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_8;
    // 0x80801104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80801108: jal         0x8009C990
    // 0x8080110C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_9;
    // 0x8080110C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80801110: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80801114: jal         0x8009BB00
    // 0x80801118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_10;
    // 0x80801118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8080111C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80801120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801124: jal         0x8009BA68
    // 0x80801128: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_11;
    // 0x80801128: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_11:
    // 0x8080112C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801130: jal         0x800A0CF4
    // 0x80801134: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_12;
    // 0x80801134: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x80801138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080113C: jal         0x800A0CE8
    // 0x80801140: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CE8(rdram, ctx);
        goto after_13;
    // 0x80801140: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x80801144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801148: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x8080114C: jal         0x8009BFE4
    // 0x80801150: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_14;
    // 0x80801150: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_14:
    // 0x80801154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801158: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x8080115C: jal         0x8009C554
    // 0x80801160: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009C554(rdram, ctx);
        goto after_15;
    // 0x80801160: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_15:
    // 0x80801164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801168: jal         0x8009B9B0
    // 0x8080116C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_16;
    // 0x8080116C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_16:
    // 0x80801170: jal         0x8009D658
    // 0x80801174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D658(rdram, ctx);
        goto after_17;
    // 0x80801174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80801178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080117C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80801180: jal         0x80085338
    // 0x80801184: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    _batimer_set(rdram, ctx);
        goto after_18;
    // 0x80801184: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_18:
    // 0x80801188: jal         0x8000013C
    // 0x8080118C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080013C_bsblongleg(rdram, ctx);
        goto after_19;
    // 0x8080118C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80801190: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801194: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801198: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8080119C: jr          $ra
    // 0x808011A0: nop

    return;
    // 0x808011A0: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011A4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x808011A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808011AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808011B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808011B4: jal         0x800000C8
    // 0x808011B8: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    func_808000C8_bsblongleg(rdram, ctx);
        goto after_0;
    // 0x808011B8: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    after_0:
    // 0x808011BC: jal         0x8009D658
    // 0x808011C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D658(rdram, ctx);
        goto after_1;
    // 0x808011C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808011C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011C8: jal         0x800852F0
    // 0x808011CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_2;
    // 0x808011CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808011D0: jal         0x8008E148
    // 0x808011D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_3;
    // 0x808011D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808011D8: beq         $v0, $zero, L_80801260
    if (ctx->r2 == 0) {
        // 0x808011DC: addiu       $t6, $zero, 0x26
        ctx->r14 = ADD32(0, 0X26);
            goto L_80801260;
    }
    // 0x808011DC: addiu       $t6, $zero, 0x26
    ctx->r14 = ADD32(0, 0X26);
    // 0x808011E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011E4: jal         0x800963C0
    // 0x808011E8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_800963C0(rdram, ctx);
        goto after_4;
    // 0x808011E8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_4:
    // 0x808011EC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x808011F0: jal         0x800F1EA4
    // 0x808011F4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800F1EA4(rdram, ctx);
        goto after_5;
    // 0x808011F4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_5:
    // 0x808011F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801200: jal         0x8009D2F0
    // 0x80801204: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009D2F0(rdram, ctx);
        goto after_6;
    // 0x80801204: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_6:
    // 0x80801208: jal         0x8009BFD8
    // 0x8080120C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BFD8(rdram, ctx);
        goto after_7;
    // 0x8080120C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80801210: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80801214: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80801218: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x8080121C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80801220: lui         $a3, 0x4409
    ctx->r7 = S32(0X4409 << 16);
    // 0x80801224: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80801228: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8080122C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80801230: jal         0x800F10B4
    // 0x80801234: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_8;
    // 0x80801234: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x80801238: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080123C: jal         0x8009B9B0
    // 0x80801240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_9;
    // 0x80801240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80801244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801248: jal         0x8009B9C0
    // 0x8080124C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009B9C0(rdram, ctx);
        goto after_10;
    // 0x8080124C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_10:
    // 0x80801250: jal         0x800849D0
    // 0x80801254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_1(rdram, ctx);
        goto after_11;
    // 0x80801254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80801258: b           L_80801268
    // 0x8080125C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80801268;
    // 0x8080125C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801260:
    // 0x80801260: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x80801264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801268:
    // 0x80801268: jal         0x80085330
    // 0x8080126C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_isZero(rdram, ctx);
        goto after_12;
    // 0x8080126C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x80801270: beq         $v0, $zero, L_8080128C
    if (ctx->r2 == 0) {
        // 0x80801274: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080128C;
    }
    // 0x80801274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801278: jal         0x80091A58
    // 0x8080127C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_13;
    // 0x8080127C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_13:
    // 0x80801280: beq         $v0, $zero, L_8080128C
    if (ctx->r2 == 0) {
        // 0x80801284: addiu       $t7, $zero, 0x28
        ctx->r15 = ADD32(0, 0X28);
            goto L_8080128C;
    }
    // 0x80801284: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x80801288: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
L_8080128C:
    // 0x8080128C: jal         0x80000000
    // 0x80801290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsblongleg(rdram, ctx);
        goto after_14;
    // 0x80801290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80801294: beq         $v0, $zero, L_808012A4
    if (ctx->r2 == 0) {
        // 0x80801298: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808012A4;
    }
    // 0x80801298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080129C: addiu       $t8, $zero, 0x4C
    ctx->r24 = ADD32(0, 0X4C);
    // 0x808012A0: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
L_808012A4:
    // 0x808012A4: jal         0x8009E5C8
    // 0x808012A8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_8009E5C8(rdram, ctx);
        goto after_15;
    // 0x808012A8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_15:
    // 0x808012AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808012B0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808012B4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x808012B8: jr          $ra
    // 0x808012BC: nop

    return;
    // 0x808012BC: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808012C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808012C8: jal         0x80000204
    // 0x808012CC: nop

    func_80800204_bsblongleg(rdram, ctx);
        goto after_0;
    // 0x808012CC: nop

    after_0:
    // 0x808012D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808012D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808012D8: jr          $ra
    // 0x808012DC: nop

    return;
    // 0x808012DC: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012E0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808012E4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(81, 0X14C0) << 16);
    // 0x808012E8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808012EC: jr          $ra
    // 0x808012F0: lw          $v0, 0x14C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(81, 0X14C0));
    return;
    // 0x808012F0: lw          $v0, 0x14C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(81, 0X14C0));
;}
RECOMP_FUNC void bsblongleg_entrypoint_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808012F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808012FC: jal         0x800839B8
    // 0x80801300: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80801300: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801304: jal         0x80000204
    // 0x80801308: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800204_bsblongleg(rdram, ctx);
        goto after_1;
    // 0x80801308: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080130C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801310: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801314: jr          $ra
    // 0x80801318: nop

    return;
    // 0x80801318: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080131C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801320: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801324: jal         0x8000013C
    // 0x80801328: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8080013C_bsblongleg(rdram, ctx);
        goto after_0;
    // 0x80801328: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080132C: jal         0x800839C8
    // 0x80801330: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x80801330: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080133C: jr          $ra
    // 0x80801340: nop

    return;
    // 0x80801340: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801344: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801348: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080134C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801350: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801354: jal         0x800000C8
    // 0x80801358: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_808000C8_bsblongleg(rdram, ctx);
        goto after_0;
    // 0x80801358: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x8080135C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801360: jal         0x8009D3A8
    // 0x80801364: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D3A8(rdram, ctx);
        goto after_1;
    // 0x80801364: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80801368: jal         0x800839E8
    // 0x8080136C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_2;
    // 0x8080136C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801370: beql        $v0, $zero, L_80801388
    if (ctx->r2 == 0) {
        // 0x80801374: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801388;
    }
    goto skip_0;
    // 0x80801374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80801378: jal         0x800839B0
    // 0x8080137C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsrest_entrypoint_13(rdram, ctx);
        goto after_3;
    // 0x8080137C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801380: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80801384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801388:
    // 0x80801388: jal         0x8009E5C8
    // 0x8080138C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x8080138C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x80801390: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801394: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801398: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080139C: jr          $ra
    // 0x808013A0: nop

    return;
    // 0x808013A0: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808013A4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808013A8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(81, 0X14D0) << 16);
    // 0x808013AC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808013B0: jr          $ra
    // 0x808013B4: lw          $v0, 0x14D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(81, 0X14D0));
    return;
    // 0x808013B4: lw          $v0, 0x14D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(81, 0X14D0));
;}
RECOMP_FUNC void bsblongleg_entrypoint_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808013B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808013BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808013C0: jal         0x8000013C
    // 0x808013C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8080013C_bsblongleg(rdram, ctx);
        goto after_0;
    // 0x808013C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808013C8: jal         0x80082FE0
    // 0x808013CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x808013CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808013D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808013D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808013D8: jr          $ra
    // 0x808013DC: nop

    return;
    // 0x808013DC: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808013E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808013E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808013E8: jal         0x800000C8
    // 0x808013EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808000C8_bsblongleg(rdram, ctx);
        goto after_0;
    // 0x808013EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808013F0: jal         0x80082FE8
    // 0x808013F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x808013F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808013F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808013FC: jal         0x800915AC
    // 0x80801400: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800915AC(rdram, ctx);
        goto after_2;
    // 0x80801400: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80801404: beq         $v0, $zero, L_80801414
    if (ctx->r2 == 0) {
        // 0x80801408: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80801414;
    }
    // 0x80801408: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080140C: jal         0x8009E5C8
    // 0x80801410: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x80801410: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_3:
L_80801414:
    // 0x80801414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801418: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080141C: jr          $ra
    // 0x80801420: nop

    return;
    // 0x80801420: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080142C: jal         0x80082FF0
    // 0x80801430: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80801430: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801434: jal         0x80000204
    // 0x80801438: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800204_bsblongleg(rdram, ctx);
        goto after_1;
    // 0x80801438: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080143C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801444: jr          $ra
    // 0x80801448: nop

    return;
    // 0x80801448: nop

;}
RECOMP_FUNC void bsblongleg_entrypoint_31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080144C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801450: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(81, 0X14E0) << 16);
    // 0x80801454: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801458: jr          $ra
    // 0x8080145C: lw          $v0, 0x14E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(81, 0X14E0));
    return;
    // 0x8080145C: lw          $v0, 0x14E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(81, 0X14E0));
;}
RECOMP_FUNC void bsbpeck_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800010: jal         0x8009E710
    // 0x80800014: sw          $zero, 0x164($a0)
    MEM_W(0X164, ctx->r4) = 0;
    func_8009E710(rdram, ctx);
        goto after_0;
    // 0x80800014: sw          $zero, 0x164($a0)
    MEM_W(0X164, ctx->r4) = 0;
    after_0:
    // 0x80800018: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8080001C: beq         $v0, $at, L_80800058
    if (ctx->r2 == ctx->r1) {
        // 0x80800020: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_80800058;
    }
    // 0x80800020: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80800024: beq         $v0, $at, L_8080004C
    if (ctx->r2 == ctx->r1) {
        // 0x80800028: addiu       $at, $zero, 0x2F
        ctx->r1 = ADD32(0, 0X2F);
            goto L_8080004C;
    }
    // 0x80800028: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x8080002C: beq         $v0, $at, L_80800058
    if (ctx->r2 == ctx->r1) {
        // 0x80800030: addiu       $at, $zero, 0x3D
        ctx->r1 = ADD32(0, 0X3D);
            goto L_80800058;
    }
    // 0x80800030: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x80800034: beq         $v0, $at, L_80800058
    if (ctx->r2 == ctx->r1) {
        // 0x80800038: addiu       $at, $zero, 0x57
        ctx->r1 = ADD32(0, 0X57);
            goto L_80800058;
    }
    // 0x80800038: addiu       $at, $zero, 0x57
    ctx->r1 = ADD32(0, 0X57);
    // 0x8080003C: beq         $v0, $at, L_80800058
    if (ctx->r2 == ctx->r1) {
        // 0x80800040: addiu       $at, $zero, 0x95
        ctx->r1 = ADD32(0, 0X95);
            goto L_80800058;
    }
    // 0x80800040: addiu       $at, $zero, 0x95
    ctx->r1 = ADD32(0, 0X95);
    // 0x80800044: bne         $v0, $at, L_80800058
    if (ctx->r2 != ctx->r1) {
        // 0x80800048: nop
    
            goto L_80800058;
    }
    // 0x80800048: nop

L_8080004C:
    // 0x8080004C: lw          $t6, 0x164($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X164);
    // 0x80800050: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80800054: sw          $t7, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->r15;
L_80800058:
    // 0x80800058: jal         0x8009557C
    // 0x8080005C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009557C(rdram, ctx);
        goto after_1;
    // 0x8080005C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800060: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800064: bne         $v0, $at, L_80800074
    if (ctx->r2 != ctx->r1) {
        // 0x80800068: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800074;
    }
    // 0x80800068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080006C: jal         0x80095588
    // 0x80800070: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80095588(rdram, ctx);
        goto after_2;
    // 0x80800070: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
L_80800074:
    // 0x80800074: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x80800078: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080007C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800080: jal         0x8008CDB8
    // 0x80800084: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    func_8008CDB8(rdram, ctx);
        goto after_3;
    // 0x80800084: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_3:
    // 0x80800088: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x8080008C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80800090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800094: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800098: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8080009C: jal         0x8009FFD8
    // 0x808000A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_4;
    // 0x808000A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x808000A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000A8: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    // 0x808000AC: jal         0x8009C99C
    // 0x808000B0: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    func_8009C99C(rdram, ctx);
        goto after_5;
    // 0x808000B0: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_5:
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B8: jal         0x800A0CF4
    // 0x808000BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_6;
    // 0x808000BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C4: jal         0x8009BCB4
    // 0x808000C8: lui         $a1, 0xC4AF
    ctx->r5 = S32(0XC4AF << 16);
    func_8009BCB4(rdram, ctx);
        goto after_7;
    // 0x808000C8: lui         $a1, 0xC4AF
    ctx->r5 = S32(0XC4AF << 16);
    after_7:
    // 0x808000CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D0: jal         0x8009BA58
    // 0x808000D4: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    func_8009BA58(rdram, ctx);
        goto after_8;
    // 0x808000D4: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    after_8:
    // 0x808000D8: jal         0x8009E4AC
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_9;
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808000E8: jal         0x8009E55C
    // 0x808000EC: lui         $a2, 0x420C
    ctx->r6 = S32(0X420C << 16);
    func_8009E55C(rdram, ctx);
        goto after_10;
    // 0x808000EC: lui         $a2, 0x420C
    ctx->r6 = S32(0X420C << 16);
    after_10:
    // 0x808000F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000F8: jal         0x8009E55C
    // 0x808000FC: lui         $a2, 0x4228
    ctx->r6 = S32(0X4228 << 16);
    func_8009E55C(rdram, ctx);
        goto after_11;
    // 0x808000FC: lui         $a2, 0x4228
    ctx->r6 = S32(0X4228 << 16);
    after_11:
    // 0x80800100: lui         $at, 0x42D2
    ctx->r1 = S32(0X42D2 << 16);
    // 0x80800104: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080010C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800110: lui         $a2, 0xC218
    ctx->r6 = S32(0XC218 << 16);
    // 0x80800114: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80800118: jal         0x8009E4FC
    // 0x8080011C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8009E4FC(rdram, ctx);
        goto after_12;
    // 0x8080011C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_12:
    // 0x80800120: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x80800124: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080012C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800130: lui         $a2, 0xC218
    ctx->r6 = S32(0XC218 << 16);
    // 0x80800134: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80800138: jal         0x8009E4FC
    // 0x8080013C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8009E4FC(rdram, ctx);
        goto after_13;
    // 0x8080013C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_13:
    // 0x80800140: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    // 0x80800144: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080014C: jal         0x80095760
    // 0x80800150: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    func_80095760(rdram, ctx);
        goto after_14;
    // 0x80800150: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_14:
    // 0x80800154: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800158: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080015C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800160: jr          $ra
    // 0x80800164: nop

    return;
    // 0x80800164: nop

;}
RECOMP_FUNC void func_80800168_bsbpeck(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800168: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080016C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800170: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800174: lw          $v0, 0x160($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X160);
    // 0x80800178: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080017C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800180: beq         $v0, $zero, L_808001A4
    if (ctx->r2 == 0) {
        // 0x80800184: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_808001A4;
    }
    // 0x80800184: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800188: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080018C: beq         $v0, $at, L_808001B0
    if (ctx->r2 == ctx->r1) {
        // 0x80800190: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808001B0;
    }
    // 0x80800190: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800194: beq         $v0, $at, L_808001BC
    if (ctx->r2 == ctx->r1) {
        // 0x80800198: nop
    
            goto L_808001BC;
    }
    // 0x80800198: nop

    // 0x8080019C: b           L_808001C8
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808001C8;
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808001A4:
    // 0x808001A4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(82, 0X490) << 16);
    // 0x808001A8: b           L_808001C4
    // 0x808001AC: lwc1        $f0, 0x490($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(82, 0X490));
        goto L_808001C4;
    // 0x808001AC: lwc1        $f0, 0x490($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(82, 0X490));
L_808001B0:
    // 0x808001B0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(82, 0X494) << 16);
    // 0x808001B4: b           L_808001C4
    // 0x808001B8: lwc1        $f0, 0x494($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(82, 0X494));
        goto L_808001C4;
    // 0x808001B8: lwc1        $f0, 0x494($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(82, 0X494));
L_808001BC:
    // 0x808001BC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(82, 0X498) << 16);
    // 0x808001C0: lwc1        $f0, 0x498($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(82, 0X498));
L_808001C4:
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808001C8:
    // 0x808001C8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x808001CC: jal         0x80095760
    // 0x808001D0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_80095760(rdram, ctx);
        goto after_0;
    // 0x808001D0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x808001D4: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001DC: addiu       $a1, $zero, 0x442C
    ctx->r5 = ADD32(0, 0X442C);
    // 0x808001E0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808001E4: jal         0x8009DE38
    // 0x808001E8: nop

    func_8009DE38(rdram, ctx);
        goto after_1;
    // 0x808001E8: nop

    after_1:
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F0: jal         0x8009BA58
    // 0x808001F4: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    func_8009BA58(rdram, ctx);
        goto after_2;
    // 0x808001F4: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    after_2:
    // 0x808001F8: lw          $t6, 0x160($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X160);
    // 0x808001FC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80800200: sw          $t7, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r15;
    // 0x80800204: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800208: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080020C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800210: jr          $ra
    // 0x80800214: nop

    return;
    // 0x80800214: nop

;}
RECOMP_FUNC void bsbpeck_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800218: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080021C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800220: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800224: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800228: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8080022C: jal         0x8008CABC
    // 0x80800230: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800230: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800234: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800238: jal         0x800841D8
    // 0x8080023C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _bswalk_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x8080023C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80800240: lw          $t6, 0x164($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X164);
    // 0x80800244: beql        $t6, $zero, L_80800274
    if (ctx->r14 == 0) {
        // 0x80800248: lw          $v0, 0x15C($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X15C);
            goto L_80800274;
    }
    goto skip_0;
    // 0x80800248: lw          $v0, 0x15C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X15C);
    skip_0:
    // 0x8080024C: jal         0x8009BB00
    // 0x80800250: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BB00(rdram, ctx);
        goto after_2;
    // 0x80800250: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80800254: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(82, 0X49C) << 16);
    // 0x80800258: lwc1        $f4, 0x49C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(82, 0X49C));
    // 0x8080025C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800260: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80800264: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80800268: jal         0x8009B9B0
    // 0x8080026C: nop

    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x8080026C: nop

    after_3:
    // 0x80800270: lw          $v0, 0x15C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X15C);
L_80800274:
    // 0x80800274: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080027C: beq         $v0, $zero, L_808002A0
    if (ctx->r2 == 0) {
        // 0x80800280: lui         $a1, 0x3F69
        ctx->r5 = S32(0X3F69 << 16);
            goto L_808002A0;
    }
    // 0x80800280: lui         $a1, 0x3F69
    ctx->r5 = S32(0X3F69 << 16);
    // 0x80800284: beq         $v0, $at, L_80800300
    if (ctx->r2 == ctx->r1) {
        // 0x80800288: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800300;
    }
    // 0x80800288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080028C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800290: beq         $v0, $at, L_808003C4
    if (ctx->r2 == ctx->r1) {
        // 0x80800294: nop
    
            goto L_808003C4;
    }
    // 0x80800294: nop

    // 0x80800298: b           L_808003D8
    // 0x8080029C: nop

        goto L_808003D8;
    // 0x8080029C: nop

L_808002A0:
    // 0x808002A0: jal         0x8008B348
    // 0x808002A4: ori         $a1, $a1, 0xA027
    ctx->r5 = ctx->r5 | 0XA027;
    func_8008B348(rdram, ctx);
        goto after_4;
    // 0x808002A4: ori         $a1, $a1, 0xA027
    ctx->r5 = ctx->r5 | 0XA027;
    after_4:
    // 0x808002A8: beq         $v0, $zero, L_808003D8
    if (ctx->r2 == 0) {
        // 0x808002AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003D8;
    }
    // 0x808002AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002B0: jal         0x8008AED4
    // 0x808002B4: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    func_8008AED4(rdram, ctx);
        goto after_5;
    // 0x808002B4: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_5:
    // 0x808002B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002BC: jal         0x8008B24C
    // 0x808002C0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B24C(rdram, ctx);
        goto after_6;
    // 0x808002C0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x808002C4: lui         $a1, 0x3EB3
    ctx->r5 = S32(0X3EB3 << 16);
    // 0x808002C8: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x808002CC: jal         0x8008B1BC
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_7;
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808002D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002D8: jal         0x8008B134
    // 0x808002DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x808002DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x808002E0: jal         0x8008B064
    // 0x808002E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_9;
    // 0x808002E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808002E8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808002EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808002F0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x808002F4: sw          $t7, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = ctx->r15;
    // 0x808002F8: b           L_808003D8
    // 0x808002FC: swc1        $f8, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f8.u32l;
        goto L_808003D8;
    // 0x808002FC: swc1        $f8, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f8.u32l;
L_80800300:
    // 0x80800300: lui         $a1, 0x3E25
    ctx->r5 = S32(0X3E25 << 16);
    // 0x80800304: jal         0x8008B348
    // 0x80800308: ori         $a1, $a1, 0xFD8B
    ctx->r5 = ctx->r5 | 0XFD8B;
    func_8008B348(rdram, ctx);
        goto after_10;
    // 0x80800308: ori         $a1, $a1, 0xFD8B
    ctx->r5 = ctx->r5 | 0XFD8B;
    after_10:
    // 0x8080030C: beql        $v0, $zero, L_80800320
    if (ctx->r2 == 0) {
        // 0x80800310: lui         $a1, 0x3F33
        ctx->r5 = S32(0X3F33 << 16);
            goto L_80800320;
    }
    goto skip_1;
    // 0x80800310: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    skip_1:
    // 0x80800314: jal         0x80000168
    // 0x80800318: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800168_bsbpeck(rdram, ctx);
        goto after_11;
    // 0x80800318: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x8080031C: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
L_80800320:
    // 0x80800320: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80800324: jal         0x8008B348
    // 0x80800328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B348(rdram, ctx);
        goto after_12;
    // 0x80800328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8080032C: beq         $v0, $zero, L_8080033C
    if (ctx->r2 == 0) {
        // 0x80800330: nop
    
            goto L_8080033C;
    }
    // 0x80800330: nop

    // 0x80800334: jal         0x80000168
    // 0x80800338: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800168_bsbpeck(rdram, ctx);
        goto after_13;
    // 0x80800338: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
L_8080033C:
    // 0x8080033C: jal         0x800D8FF8
    // 0x80800340: nop

    func_800D8FF8(rdram, ctx);
        goto after_14;
    // 0x80800340: nop

    after_14:
    // 0x80800344: lwc1        $f10, 0x16C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X16C);
    // 0x80800348: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080034C: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x80800350: swc1        $f16, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f16.u32l;
    // 0x80800354: lwc1        $f18, 0x16C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X16C);
    // 0x80800358: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8080035C: nop

    // 0x80800360: bc1f        L_808003D8
    if (!c1cs) {
        // 0x80800364: nop
    
            goto L_808003D8;
    }
    // 0x80800364: nop

    // 0x80800368: jal         0x8008AF24
    // 0x8080036C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_15;
    // 0x8080036C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800374: jal         0x8008B1A0
    // 0x80800378: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_16;
    // 0x80800378: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x8080037C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800380: jal         0x8008AED4
    // 0x80800384: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    func_8008AED4(rdram, ctx);
        goto after_17;
    // 0x80800384: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_17:
    // 0x80800388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080038C: jal         0x8008B188
    // 0x80800390: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B188(rdram, ctx);
        goto after_18;
    // 0x80800390: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x80800394: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80800398: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8080039C: jal         0x8008B1BC
    // 0x808003A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_19;
    // 0x808003A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x808003A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003A8: jal         0x8008B134
    // 0x808003AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_20;
    // 0x808003AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x808003B0: jal         0x8008B064
    // 0x808003B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_21;
    // 0x808003B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x808003B8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x808003BC: b           L_808003D8
    // 0x808003C0: sw          $t8, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = ctx->r24;
        goto L_808003D8;
    // 0x808003C0: sw          $t8, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = ctx->r24;
L_808003C4:
    // 0x808003C4: jal         0x8008B324
    // 0x808003C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B324(rdram, ctx);
        goto after_22;
    // 0x808003C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x808003CC: beq         $v0, $zero, L_808003D8
    if (ctx->r2 == 0) {
        // 0x808003D0: addiu       $t9, $zero, 0x2F
        ctx->r25 = ADD32(0, 0X2F);
            goto L_808003D8;
    }
    // 0x808003D0: addiu       $t9, $zero, 0x2F
    ctx->r25 = ADD32(0, 0X2F);
    // 0x808003D4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_808003D8:
    // 0x808003D8: jal         0x8008E078
    // 0x808003DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008E078(rdram, ctx);
        goto after_23;
    // 0x808003DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_23:
    // 0x808003E0: beq         $v0, $zero, L_808003F8
    if (ctx->r2 == 0) {
        // 0x808003E4: nop
    
            goto L_808003F8;
    }
    // 0x808003E4: nop

    // 0x808003E8: jal         0x8009FE58
    // 0x808003EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009FE58(rdram, ctx);
        goto after_24;
    // 0x808003EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_24:
    // 0x808003F0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x808003F4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_808003F8:
    // 0x808003F8: jal         0x8008E35C
    // 0x808003FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008E35C(rdram, ctx);
        goto after_25;
    // 0x808003FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_25:
    // 0x80800400: beq         $v0, $zero, L_80800410
    if (ctx->r2 == 0) {
        // 0x80800404: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80800410;
    }
    // 0x80800404: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800408: addiu       $t1, $zero, 0x4C
    ctx->r9 = ADD32(0, 0X4C);
    // 0x8080040C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_80800410:
    // 0x80800410: jal         0x8009E5C8
    // 0x80800414: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_26;
    // 0x80800414: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_26:
    // 0x80800418: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080041C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800420: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800424: jr          $ra
    // 0x80800428: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80800428: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void bsbpeck_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080042C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800434: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800438: jal         0x80095774
    // 0x8080043C: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    func_80095774(rdram, ctx);
        goto after_0;
    // 0x8080043C: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_0:
    // 0x80800440: jal         0x800C6DA0
    // 0x80800444: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    func_800C6DA0(rdram, ctx);
        goto after_1;
    // 0x80800444: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    after_1:
    // 0x80800448: jal         0x8009E474
    // 0x8080044C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009E474(rdram, ctx);
        goto after_2;
    // 0x8080044C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800450: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800454: jal         0x800A0CF4
    // 0x80800458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_3;
    // 0x80800458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8080045C: jal         0x8009BC6C
    // 0x80800460: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009BC6C(rdram, ctx);
        goto after_4;
    // 0x80800460: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
    // 0x80800464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080046C: jr          $ra
    // 0x80800470: nop

    return;
    // 0x80800470: nop

;}
RECOMP_FUNC void bsbpeck_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800474: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800478: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(82, 0X4A0) << 16);
    // 0x8080047C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800480: jr          $ra
    // 0x80800484: lw          $v0, 0x4A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(82, 0X4A0));
    return;
    // 0x80800484: lw          $v0, 0x4A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(82, 0X4A0));
    // 0x80800488: nop

    // 0x8080048C: nop

;}
RECOMP_FUNC void func_80800000_bsbreegullbash(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(83, 0X540) << 16);
    // 0x80800004: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80800008: lwc1        $f4, 0x540($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(83, 0X540));
    // 0x8080000C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800010: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800014: mul.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80800018: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8080001C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80800020: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80800024: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80800028: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8080002C: jal         0x80084510
    // 0x80800030: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    _babackpack_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x80800030: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x80800034: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80800038: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8080003C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80800040: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80800044: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80800048: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8080004C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80800050: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80800054: jal         0x800EFCD8
    // 0x80800058: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    func_800EFCD8(rdram, ctx);
        goto after_1;
    // 0x80800058: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x8080005C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(83, 0X544) << 16);
    // 0x80800060: lwc1        $f18, 0x544($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(83, 0X544));
    // 0x80800064: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(83, 0X548) << 16);
    // 0x80800068: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8080006C: lwc1        $f4, 0x548($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(83, 0X548));
    // 0x80800070: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x80800074: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800078: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8080007C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80800080: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80800084: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80800088: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x8080008C: jal         0x800849D8
    // 0x80800090: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    _badust_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80800090: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80800094: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800098: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8080009C: jr          $ra
    // 0x808000A0: nop

    return;
    // 0x808000A0: nop

;}
RECOMP_FUNC void func_808000A4_bsbreegullbash(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000A4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x808000A8: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x808000AC: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x808000B0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(83, 0X54C) << 16);
    // 0x808000B4: lwc1        $f24, 0x54C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(83, 0X54C));
    // 0x808000B8: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x808000BC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x808000C0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x808000C4: c.lt.s      $f30, $f24
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f30.fl < ctx->f24.fl;
    // 0x808000C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000CC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x808000D0: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x808000D4: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x808000D8: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x808000DC: bc1f        L_8080012C
    if (!c1cs) {
        // 0x808000E0: mov.s       $f20, $f30
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
            goto L_8080012C;
    }
    // 0x808000E0: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
    // 0x808000E4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x808000E8: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x808000EC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(83, 0X550) << 16);
    // 0x808000F0: lwc1        $f26, 0x550($at)
    ctx->f26.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(83, 0X550));
    // 0x808000F4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x808000F8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x808000FC: nop

    // 0x80800100: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
L_80800104:
    // 0x80800104: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x80800108: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x8080010C: jal         0x80000000
    // 0x80800110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbreegullbash(rdram, ctx);
        goto after_0;
    // 0x80800110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80800114: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    // 0x80800118: c.lt.s      $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f20.fl < ctx->f24.fl;
    // 0x8080011C: nop

    // 0x80800120: bc1tl       L_80800104
    if (c1cs) {
        // 0x80800124: mfc1        $a1, $f20
        ctx->r5 = (int32_t)ctx->f20.u32l;
            goto L_80800104;
    }
    goto skip_0;
    // 0x80800124: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    skip_0:
    // 0x80800128: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
L_8080012C:
    // 0x8080012C: c.lt.s      $f30, $f24
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f30.fl < ctx->f24.fl;
    // 0x80800130: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80800134: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80800138: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8080013C: bc1fl       L_80800190
    if (!c1cs) {
        // 0x80800140: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_80800190;
    }
    goto skip_1;
    // 0x80800140: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_1:
    // 0x80800144: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x80800148: lui         $at, 0x43D7
    ctx->r1 = S32(0X43D7 << 16);
    // 0x8080014C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80800150: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80800154: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80800158: nop

L_8080015C:
    // 0x8080015C: jal         0x800136E4
    // 0x80800160: add.s       $f12, $f20, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f26.fl;
    func_800136E4(rdram, ctx);
        goto after_1;
    // 0x80800160: add.s       $f12, $f20, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f26.fl;
    after_1:
    // 0x80800164: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800168: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x8080016C: mfc1        $a3, $f30
    ctx->r7 = (int32_t)ctx->f30.u32l;
    // 0x80800170: jal         0x80000000
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbreegullbash(rdram, ctx);
        goto after_2;
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800178: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    // 0x8080017C: c.lt.s      $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f20.fl < ctx->f24.fl;
    // 0x80800180: nop

    // 0x80800184: bc1t        L_8080015C
    if (c1cs) {
        // 0x80800188: nop
    
            goto L_8080015C;
    }
    // 0x80800188: nop

    // 0x8080018C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_80800190:
    // 0x80800190: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80800194: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80800198: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x8080019C: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x808001A0: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x808001A4: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x808001A8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x808001AC: jr          $ra
    // 0x808001B0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x808001B0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_808001B4_bsbreegullbash(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001BC: jal         0x80084538
    // 0x808001C0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    _babackpack_set_state(rdram, ctx);
        goto after_0;
    // 0x808001C0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
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
RECOMP_FUNC void func_808001D4_bsbreegullbash(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001DC: jal         0x80084508
    // 0x808001E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babackpack_get_state(rdram, ctx);
        goto after_0;
    // 0x808001E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808001E8: beq         $v0, $at, L_80800218
    if (ctx->r2 == ctx->r1) {
        // 0x808001EC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800218;
    }
    // 0x808001EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001F0: jal         0x80084538
    // 0x808001F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babackpack_set_state(rdram, ctx);
        goto after_1;
    // 0x808001F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808001F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800200: jal         0x8009E4E0
    // 0x80800204: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8009E4E0(rdram, ctx);
        goto after_2;
    // 0x80800204: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80800208: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080020C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800210: jal         0x8009E55C
    // 0x80800214: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E55C(rdram, ctx);
        goto after_3;
    // 0x80800214: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_3:
L_80800218:
    // 0x80800218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080021C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800220: jr          $ra
    // 0x80800224: nop

    return;
    // 0x80800224: nop

;}
RECOMP_FUNC void bsbreegullbash_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080022C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800230: jal         0x8009E474
    // 0x80800234: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E474(rdram, ctx);
        goto after_0;
    // 0x80800234: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800238: jal         0x800001D4
    // 0x8080023C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808001D4_bsbreegullbash(rdram, ctx);
        goto after_1;
    // 0x8080023C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800240: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800244: jal         0x80095774
    // 0x80800248: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    func_80095774(rdram, ctx);
        goto after_2;
    // 0x80800248: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    after_2:
    // 0x8080024C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800254: jr          $ra
    // 0x80800258: nop

    return;
    // 0x80800258: nop

;}
RECOMP_FUNC void bsbreegullbash_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080025C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800260: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800264: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800268: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080026C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80800270: jal         0x8008CCBC
    // 0x80800274: lui         $a2, 0x3FE0
    ctx->r6 = S32(0X3FE0 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_0;
    // 0x80800274: lui         $a2, 0x3FE0
    ctx->r6 = S32(0X3FE0 << 16);
    after_0:
    // 0x80800278: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8080027C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800284: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800288: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080028C: jal         0x8009FFD8
    // 0x80800290: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800290: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x80800294: jal         0x8009C990
    // 0x80800298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_2;
    // 0x80800298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080029C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808002A0: jal         0x8009B9C0
    // 0x808002A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_3;
    // 0x808002A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808002A8: jal         0x8009E4AC
    // 0x808002AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_4;
    // 0x808002AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808002B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808002B8: jal         0x8009E4E0
    // 0x808002BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8009E4E0(rdram, ctx);
        goto after_5;
    // 0x808002BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x808002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808002C8: jal         0x8009E55C
    // 0x808002CC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E55C(rdram, ctx);
        goto after_6;
    // 0x808002CC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_6:
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002D4: jal         0x8009B9B0
    // 0x808002D8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_7;
    // 0x808002D8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_7:
    // 0x808002DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808002E0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808002E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808002E8: jr          $ra
    // 0x808002EC: nop

    return;
    // 0x808002EC: nop

;}
RECOMP_FUNC void bsbreegullbash_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808002F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808002F8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808002FC: lui         $a1, 0x3E61
    ctx->r5 = S32(0X3E61 << 16);
    // 0x80800300: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800304: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80800308: jal         0x8008CB10
    // 0x8080030C: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x8080030C: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    after_0:
    // 0x80800310: beql        $v0, $zero, L_8080036C
    if (ctx->r2 == 0) {
        // 0x80800314: lui         $a1, 0x3DF3
        ctx->r5 = S32(0X3DF3 << 16);
            goto L_8080036C;
    }
    goto skip_0;
    // 0x80800314: lui         $a1, 0x3DF3
    ctx->r5 = S32(0X3DF3 << 16);
    skip_0:
    // 0x80800318: jal         0x80084508
    // 0x8080031C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babackpack_get_state(rdram, ctx);
        goto after_1;
    // 0x8080031C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800320: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80800324: bne         $v0, $at, L_80800368
    if (ctx->r2 != ctx->r1) {
        // 0x80800328: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800368;
    }
    // 0x80800328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080032C: jal         0x80095760
    // 0x80800330: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    func_80095760(rdram, ctx);
        goto after_2;
    // 0x80800330: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    after_2:
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800338: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8080033C: jal         0x8009E55C
    // 0x80800340: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    func_8009E55C(rdram, ctx);
        goto after_3;
    // 0x80800340: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    after_3:
    // 0x80800344: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80800348: addiu       $a2, $a2, 0x4510
    ctx->r6 = ADD32(ctx->r6, 0X4510);
    // 0x8080034C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800350: jal         0x8009E4E0
    // 0x80800354: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E4E0(rdram, ctx);
        goto after_4;
    // 0x80800354: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x80800358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080035C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800360: jal         0x8009E5A4
    // 0x80800364: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8009E5A4(rdram, ctx);
        goto after_5;
    // 0x80800364: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_5:
L_80800368:
    // 0x80800368: lui         $a1, 0x3DF3
    ctx->r5 = S32(0X3DF3 << 16);
L_8080036C:
    // 0x8080036C: ori         $a1, $a1, 0x4D6A
    ctx->r5 = ctx->r5 | 0X4D6A;
    // 0x80800370: jal         0x8008CB10
    // 0x80800374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_6;
    // 0x80800374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800378: beql        $v0, $zero, L_8080038C
    if (ctx->r2 == 0) {
        // 0x8080037C: lui         $a1, 0x3E57
        ctx->r5 = S32(0X3E57 << 16);
            goto L_8080038C;
    }
    goto skip_1;
    // 0x8080037C: lui         $a1, 0x3E57
    ctx->r5 = S32(0X3E57 << 16);
    skip_1:
    // 0x80800380: jal         0x800001B4
    // 0x80800384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808001B4_bsbreegullbash(rdram, ctx);
        goto after_7;
    // 0x80800384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800388: lui         $a1, 0x3E57
    ctx->r5 = S32(0X3E57 << 16);
L_8080038C:
    // 0x8080038C: ori         $a1, $a1, 0xA3D
    ctx->r5 = ctx->r5 | 0XA3D;
    // 0x80800390: jal         0x8008CB10
    // 0x80800394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_8;
    // 0x80800394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800398: beq         $v0, $zero, L_808003C4
    if (ctx->r2 == 0) {
        // 0x8080039C: lui         $a3, 0x3F8C
        ctx->r7 = S32(0X3F8C << 16);
            goto L_808003C4;
    }
    // 0x8080039C: lui         $a3, 0x3F8C
    ctx->r7 = S32(0X3F8C << 16);
    // 0x808003A0: addiu       $t6, $zero, 0x55F0
    ctx->r14 = ADD32(0, 0X55F0);
    // 0x808003A4: addiu       $t7, $zero, 0x55F0
    ctx->r15 = ADD32(0, 0X55F0);
    // 0x808003A8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x808003AC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808003B0: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x808003B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003B8: addiu       $a1, $zero, 0x4595
    ctx->r5 = ADD32(0, 0X4595);
    // 0x808003BC: jal         0x8009DFD4
    // 0x808003C0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DFD4(rdram, ctx);
        goto after_9;
    // 0x808003C0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_9:
L_808003C4:
    // 0x808003C4: lui         $a1, 0x3EB8
    ctx->r5 = S32(0X3EB8 << 16);
    // 0x808003C8: ori         $a1, $a1, 0x51EC
    ctx->r5 = ctx->r5 | 0X51EC;
    // 0x808003CC: jal         0x8008CB10
    // 0x808003D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_10;
    // 0x808003D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808003D4: beq         $v0, $zero, L_808003EC
    if (ctx->r2 == 0) {
        // 0x808003D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003EC;
    }
    // 0x808003D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003DC: addiu       $a1, $zero, 0x416
    ctx->r5 = ADD32(0, 0X416);
    // 0x808003E0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808003E4: jal         0x8009DB04
    // 0x808003E8: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DB04(rdram, ctx);
        goto after_11;
    // 0x808003E8: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_11:
L_808003EC:
    // 0x808003EC: lui         $a1, 0x3EBD
    ctx->r5 = S32(0X3EBD << 16);
    // 0x808003F0: ori         $a1, $a1, 0x70A4
    ctx->r5 = ctx->r5 | 0X70A4;
    // 0x808003F4: jal         0x8008CB10
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_12;
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808003FC: beq         $v0, $zero, L_80800428
    if (ctx->r2 == 0) {
        // 0x80800400: lui         $a3, 0x3F8C
        ctx->r7 = S32(0X3F8C << 16);
            goto L_80800428;
    }
    // 0x80800400: lui         $a3, 0x3F8C
    ctx->r7 = S32(0X3F8C << 16);
    // 0x80800404: addiu       $t8, $zero, 0x7FFF
    ctx->r24 = ADD32(0, 0X7FFF);
    // 0x80800408: addiu       $t9, $zero, 0x7FFF
    ctx->r25 = ADD32(0, 0X7FFF);
    // 0x8080040C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80800410: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80800414: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080041C: addiu       $a1, $zero, 0x4596
    ctx->r5 = ADD32(0, 0X4596);
    // 0x80800420: jal         0x8009DFD4
    // 0x80800424: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DFD4(rdram, ctx);
        goto after_13;
    // 0x80800424: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_13:
L_80800428:
    // 0x80800428: lui         $a1, 0x3F2B
    ctx->r5 = S32(0X3F2B << 16);
    // 0x8080042C: ori         $a1, $a1, 0xE0DF
    ctx->r5 = ctx->r5 | 0XE0DF;
    // 0x80800430: jal         0x8008CB10
    // 0x80800434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_14;
    // 0x80800434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800438: beq         $v0, $zero, L_80800450
    if (ctx->r2 == 0) {
        // 0x8080043C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800450;
    }
    // 0x8080043C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800440: addiu       $a1, $zero, 0x3EA
    ctx->r5 = ADD32(0, 0X3EA);
    // 0x80800444: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800448: jal         0x8009DF18
    // 0x8080044C: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DF18(rdram, ctx);
        goto after_15;
    // 0x8080044C: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_15:
L_80800450:
    // 0x80800450: lui         $a1, 0x3EAB
    ctx->r5 = S32(0X3EAB << 16);
    // 0x80800454: ori         $a1, $a1, 0x851F
    ctx->r5 = ctx->r5 | 0X851F;
    // 0x80800458: jal         0x8008CB10
    // 0x8080045C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_16;
    // 0x8080045C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800460: beq         $v0, $zero, L_8080048C
    if (ctx->r2 == 0) {
        // 0x80800464: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080048C;
    }
    // 0x80800464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800468: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8080046C: jal         0x80084FC8
    // 0x80800470: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    _bashake_entrypoint_0(rdram, ctx);
        goto after_17;
    // 0x80800470: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_17:
    // 0x80800474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800478: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8080047C: jal         0x8009E55C
    // 0x80800480: lui         $a2, 0x4334
    ctx->r6 = S32(0X4334 << 16);
    func_8009E55C(rdram, ctx);
        goto after_18;
    // 0x80800480: lui         $a2, 0x4334
    ctx->r6 = S32(0X4334 << 16);
    after_18:
    // 0x80800484: jal         0x800000A4
    // 0x80800488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000A4_bsbreegullbash(rdram, ctx);
        goto after_19;
    // 0x80800488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
L_8080048C:
    // 0x8080048C: lui         $a1, 0x3EC2
    ctx->r5 = S32(0X3EC2 << 16);
    // 0x80800490: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    // 0x80800494: jal         0x8008CB10
    // 0x80800498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_20;
    // 0x80800498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x8080049C: beq         $v0, $zero, L_808004BC
    if (ctx->r2 == 0) {
        // 0x808004A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004BC;
    }
    // 0x808004A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808004A8: jal         0x8009E55C
    // 0x808004AC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E55C(rdram, ctx);
        goto after_21;
    // 0x808004AC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_21:
    // 0x808004B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004B4: jal         0x80095774
    // 0x808004B8: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    func_80095774(rdram, ctx);
        goto after_22;
    // 0x808004B8: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    after_22:
L_808004BC:
    // 0x808004BC: lui         $a1, 0x3F64
    ctx->r5 = S32(0X3F64 << 16);
    // 0x808004C0: ori         $a1, $a1, 0x1F21
    ctx->r5 = ctx->r5 | 0X1F21;
    // 0x808004C4: jal         0x8008CB10
    // 0x808004C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_23;
    // 0x808004C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x808004CC: beq         $v0, $zero, L_808004DC
    if (ctx->r2 == 0) {
        // 0x808004D0: nop
    
            goto L_808004DC;
    }
    // 0x808004D0: nop

    // 0x808004D4: jal         0x800001D4
    // 0x808004D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808001D4_bsbreegullbash(rdram, ctx);
        goto after_24;
    // 0x808004D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
L_808004DC:
    // 0x808004DC: jal         0x8008CAEC
    // 0x808004E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_25;
    // 0x808004E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x808004E4: beq         $v0, $zero, L_808004F0
    if (ctx->r2 == 0) {
        // 0x808004E8: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_808004F0;
    }
    // 0x808004E8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x808004EC: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_808004F0:
    // 0x808004F0: jal         0x8008E35C
    // 0x808004F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_26;
    // 0x808004F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x808004F8: beq         $v0, $zero, L_80800508
    if (ctx->r2 == 0) {
        // 0x808004FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800508;
    }
    // 0x808004FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800500: addiu       $t1, $zero, 0x4C
    ctx->r9 = ADD32(0, 0X4C);
    // 0x80800504: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_80800508:
    // 0x80800508: jal         0x8009E5C8
    // 0x8080050C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_27;
    // 0x8080050C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_27:
    // 0x80800510: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800514: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800518: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080051C: jr          $ra
    // 0x80800520: nop

    return;
    // 0x80800520: nop

;}
RECOMP_FUNC void bsbreegullbash_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800524: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800528: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(83, 0X560) << 16);
    // 0x8080052C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800530: jr          $ra
    // 0x80800534: lw          $v0, 0x560($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(83, 0X560));
    return;
    // 0x80800534: lw          $v0, 0x560($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(83, 0X560));
    // 0x80800538: nop

    // 0x8080053C: nop

;}
RECOMP_FUNC void bsbshock_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080000C: jal         0x8008CABC
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800014: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80800018: jal         0x8008AF24
    // 0x8080001C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x8080001C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800020: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800024: jal         0x8008AED4
    // 0x80800028: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x80800028: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    after_2:
    // 0x8080002C: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x80800030: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800034: jal         0x8008B1C8
    // 0x80800038: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B1C8(rdram, ctx);
        goto after_3;
    // 0x80800038: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x8080003C: lui         $a1, 0x4086
    ctx->r5 = S32(0X4086 << 16);
    // 0x80800040: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80800044: jal         0x8008B1BC
    // 0x80800048: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B1BC(rdram, ctx);
        goto after_4;
    // 0x80800048: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_4:
    // 0x8080004C: lui         $a2, 0x3DD9
    ctx->r6 = S32(0X3DD9 << 16);
    // 0x80800050: ori         $a2, $a2, 0x4AF5
    ctx->r6 = ctx->r6 | 0X4AF5;
    // 0x80800054: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800058: jal         0x8008B1D4
    // 0x8080005C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_5;
    // 0x8080005C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x80800060: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800064: jal         0x8008B134
    // 0x80800068: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_6;
    // 0x80800068: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x8080006C: jal         0x8008B064
    // 0x80800070: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x80800070: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_7:
    // 0x80800074: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800078: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080007C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800080: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800084: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800088: jal         0x8009FFD8
    // 0x8080008C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_8;
    // 0x8080008C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_8:
    // 0x80800090: jal         0x8009EF04
    // 0x80800094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_9;
    // 0x80800094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800098: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080009C: nop

    // 0x808000A0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x808000A4: nop

    // 0x808000A8: bc1t        L_808000C4
    if (c1cs) {
        // 0x808000AC: nop
    
            goto L_808000C4;
    }
    // 0x808000AC: nop

    // 0x808000B0: jal         0x8009EEB8
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_10;
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808000B8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808000BC: jal         0x8009C914
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_11;
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_808000C4:
    // 0x808000C4: jal         0x8009C990
    // 0x808000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_12;
    // 0x808000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808000CC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808000D0: jal         0x8009B9C0
    // 0x808000D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_13;
    // 0x808000D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808000D8: jal         0x800841D8
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bswalk_entrypoint_1(rdram, ctx);
        goto after_14;
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808000E0: jal         0x8009C990
    // 0x808000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_15;
    // 0x808000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808000E8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x808000EC: jal         0x8009BB00
    // 0x808000F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_16;
    // 0x808000F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808000F4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000FC: jal         0x8009BA68
    // 0x80800100: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_17;
    // 0x80800100: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_17:
    // 0x80800104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800108: jal         0x800A0CE8
    // 0x8080010C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CE8(rdram, ctx);
        goto after_18;
    // 0x8080010C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x80800110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800114: jal         0x800A0CF4
    // 0x80800118: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_19;
    // 0x80800118: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x8080011C: jal         0x8009D874
    // 0x80800120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D874(rdram, ctx);
        goto after_20;
    // 0x80800120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80800124: jal         0x800C2E04
    // 0x80800128: nop

    func_800C2E04(rdram, ctx);
        goto after_21;
    // 0x80800128: nop

    after_21:
    // 0x8080012C: sb          $v0, 0x164($s0)
    MEM_B(0X164, ctx->r16) = ctx->r2;
    // 0x80800130: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x80800134: jal         0x800C3418
    // 0x80800138: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C3418(rdram, ctx);
        goto after_22;
    // 0x80800138: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_22:
    // 0x8080013C: jal         0x800C2E40
    // 0x80800140: lbu         $a0, 0x164($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X164);
    func_800C2E40(rdram, ctx);
        goto after_23;
    // 0x80800140: lbu         $a0, 0x164($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X164);
    after_23:
    // 0x80800144: lbu         $a0, 0x164($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X164);
    // 0x80800148: jal         0x800C330C
    // 0x8080014C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800C330C(rdram, ctx);
        goto after_24;
    // 0x8080014C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_24:
    // 0x80800150: lbu         $a0, 0x164($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X164);
    // 0x80800154: jal         0x800C301C
    // 0x80800158: addiu       $a1, $zero, 0x41D
    ctx->r5 = ADD32(0, 0X41D);
    func_800C301C(rdram, ctx);
        goto after_25;
    // 0x80800158: addiu       $a1, $zero, 0x41D
    ctx->r5 = ADD32(0, 0X41D);
    after_25:
    // 0x8080015C: lui         $a1, 0x3FB3
    ctx->r5 = S32(0X3FB3 << 16);
    // 0x80800160: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x80800164: lui         $a3, 0xBF99
    ctx->r7 = S32(0XBF99 << 16);
    // 0x80800168: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x8080016C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800170: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80800174: jal         0x800C3730
    // 0x80800178: lbu         $a0, 0x164($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X164);
    func_800C3730(rdram, ctx);
        goto after_26;
    // 0x80800178: lbu         $a0, 0x164($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X164);
    after_26:
    // 0x8080017C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800180: jal         0x80093300
    // 0x80800184: lui         $a1, 0xC2AE
    ctx->r5 = S32(0XC2AE << 16);
    func_80093300(rdram, ctx);
        goto after_27;
    // 0x80800184: lui         $a1, 0xC2AE
    ctx->r5 = S32(0XC2AE << 16);
    after_27:
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080018C: jal         0x8009C1B4
    // 0x80800190: lui         $a1, 0xC2AE
    ctx->r5 = S32(0XC2AE << 16);
    func_8009C1B4(rdram, ctx);
        goto after_28;
    // 0x80800190: lui         $a1, 0xC2AE
    ctx->r5 = S32(0XC2AE << 16);
    after_28:
    // 0x80800194: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80800198: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
    // 0x8080019C: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    // 0x808001A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808001A4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808001A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808001AC: jr          $ra
    // 0x808001B0: nop

    return;
    // 0x808001B0: nop

;}
RECOMP_FUNC void bsbshock_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001B4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808001B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001C4: jal         0x8008CABC
    // 0x808001C8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808001C8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x808001CC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x808001D0: jal         0x8008E078
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_1;
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808001D8: beq         $v0, $zero, L_80800214
    if (ctx->r2 == 0) {
        // 0x808001DC: nop
    
            goto L_80800214;
    }
    // 0x808001DC: nop

    // 0x808001E0: jal         0x8001211C
    // 0x808001E4: nop

    func_8001211C(rdram, ctx);
        goto after_2;
    // 0x808001E4: nop

    after_2:
    // 0x808001E8: bgez        $v0, L_808001FC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x808001EC: andi        $t6, $v0, 0x1
        ctx->r14 = ctx->r2 & 0X1;
            goto L_808001FC;
    }
    // 0x808001EC: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x808001F0: beq         $t6, $zero, L_808001FC
    if (ctx->r14 == 0) {
        // 0x808001F4: nop
    
            goto L_808001FC;
    }
    // 0x808001F4: nop

    // 0x808001F8: addiu       $t6, $t6, -0x2
    ctx->r14 = ADD32(ctx->r14, -0X2);
L_808001FC:
    // 0x808001FC: beq         $t6, $zero, L_8080021C
    if (ctx->r14 == 0) {
        // 0x80800200: nop
    
            goto L_8080021C;
    }
    // 0x80800200: nop

    // 0x80800204: jal         0x8009FC80
    // 0x80800208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FC80(rdram, ctx);
        goto after_3;
    // 0x80800208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080020C: b           L_8080021C
    // 0x80800210: nop

        goto L_8080021C;
    // 0x80800210: nop

L_80800214:
    // 0x80800214: jal         0x8009FC80
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FC80(rdram, ctx);
        goto after_4;
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_8080021C:
    // 0x8080021C: jal         0x800841D8
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bswalk_entrypoint_1(rdram, ctx);
        goto after_5;
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800228: jal         0x8009BB24
    // 0x8080022C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_6;
    // 0x8080022C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_6:
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800234: jal         0x80091A30
    // 0x80800238: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_7;
    // 0x80800238: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_7:
    // 0x8080023C: beq         $v0, $zero, L_80800264
    if (ctx->r2 == 0) {
        // 0x80800240: lwc1        $f6, 0x28($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
            goto L_80800264;
    }
    // 0x80800240: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800244: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800248: nop

    // 0x8080024C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800250: nop

    // 0x80800254: bc1fl       L_80800268
    if (!c1cs) {
        // 0x80800258: lw          $v0, 0x160($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X160);
            goto L_80800268;
    }
    goto skip_0;
    // 0x80800258: lw          $v0, 0x160($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X160);
    skip_0:
    // 0x8080025C: jal         0x8009BC6C
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_8;
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_80800264:
    // 0x80800264: lw          $v0, 0x160($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X160);
L_80800268:
    // 0x80800268: beq         $v0, $zero, L_80800280
    if (ctx->r2 == 0) {
        // 0x8080026C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80800280;
    }
    // 0x8080026C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800270: beq         $v0, $at, L_808002DC
    if (ctx->r2 == ctx->r1) {
        // 0x80800274: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_808002DC;
    }
    // 0x80800274: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80800278: b           L_80800334
    // 0x8080027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800334;
    // 0x8080027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800280:
    // 0x80800280: jal         0x8008E260
    // 0x80800284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_9;
    // 0x80800284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800288: beq         $v0, $zero, L_80800298
    if (ctx->r2 == 0) {
        // 0x8080028C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800298;
    }
    // 0x8080028C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800290: addiu       $t7, $zero, 0x3D
    ctx->r15 = ADD32(0, 0X3D);
    // 0x80800294: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_80800298:
    // 0x80800298: jal         0x8008DF8C
    // 0x8080029C: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_10;
    // 0x8080029C: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_10:
    // 0x808002A0: beq         $v0, $zero, L_80800330
    if (ctx->r2 == 0) {
        // 0x808002A4: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_80800330;
    }
    // 0x808002A4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808002A8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x808002AC: jal         0x8008B1D4
    // 0x808002B0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008B1D4(rdram, ctx);
        goto after_11;
    // 0x808002B0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_11:
    // 0x808002B4: lui         $a1, 0x4033
    ctx->r5 = S32(0X4033 << 16);
    // 0x808002B8: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x808002BC: jal         0x8008B1BC
    // 0x808002C0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B1BC(rdram, ctx);
        goto after_12;
    // 0x808002C0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_12:
    // 0x808002C4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808002C8: jal         0x8008B134
    // 0x808002CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_13;
    // 0x808002CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x808002D0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x808002D4: b           L_80800330
    // 0x808002D8: sw          $t8, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r24;
        goto L_80800330;
    // 0x808002D8: sw          $t8, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r24;
L_808002DC:
    // 0x808002DC: lui         $a1, 0x3DE1
    ctx->r5 = S32(0X3DE1 << 16);
    // 0x808002E0: jal         0x8008B348
    // 0x808002E4: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    func_8008B348(rdram, ctx);
        goto after_14;
    // 0x808002E4: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    after_14:
    // 0x808002E8: beql        $v0, $zero, L_808002FC
    if (ctx->r2 == 0) {
        // 0x808002EC: lui         $a1, 0x3ECE
        ctx->r5 = S32(0X3ECE << 16);
            goto L_808002FC;
    }
    goto skip_1;
    // 0x808002EC: lui         $a1, 0x3ECE
    ctx->r5 = S32(0X3ECE << 16);
    skip_1:
    // 0x808002F0: jal         0x800C3BDC
    // 0x808002F4: lbu         $a0, 0x164($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X164);
    func_800C3BDC(rdram, ctx);
        goto after_15;
    // 0x808002F4: lbu         $a0, 0x164($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X164);
    after_15:
    // 0x808002F8: lui         $a1, 0x3ECE
    ctx->r5 = S32(0X3ECE << 16);
L_808002FC:
    // 0x808002FC: ori         $a1, $a1, 0xA4A9
    ctx->r5 = ctx->r5 | 0XA4A9;
    // 0x80800300: jal         0x8008B348
    // 0x80800304: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B348(rdram, ctx);
        goto after_16;
    // 0x80800304: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_16:
    // 0x80800308: beq         $v0, $zero, L_8080031C
    if (ctx->r2 == 0) {
        // 0x8080030C: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_8080031C;
    }
    // 0x8080030C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80800310: lui         $a1, 0x3FB3
    ctx->r5 = S32(0X3FB3 << 16);
    // 0x80800314: jal         0x8008B1BC
    // 0x80800318: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    func_8008B1BC(rdram, ctx);
        goto after_17;
    // 0x80800318: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    after_17:
L_8080031C:
    // 0x8080031C: jal         0x8008B324
    // 0x80800320: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_18;
    // 0x80800320: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_18:
    // 0x80800324: beq         $v0, $zero, L_80800330
    if (ctx->r2 == 0) {
        // 0x80800328: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_80800330;
    }
    // 0x80800328: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8080032C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_80800330:
    // 0x80800330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800334:
    // 0x80800334: jal         0x8008DF8C
    // 0x80800338: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    func_8008DF8C(rdram, ctx);
        goto after_19;
    // 0x80800338: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_19:
    // 0x8080033C: beq         $v0, $zero, L_8080039C
    if (ctx->r2 == 0) {
        // 0x80800340: nop
    
            goto L_8080039C;
    }
    // 0x80800340: nop

    // 0x80800344: jal         0x8008B2B4
    // 0x80800348: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B2B4(rdram, ctx);
        goto after_20;
    // 0x80800348: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_20:
    // 0x8080034C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(84, 0X860) << 16);
    // 0x80800350: lwc1        $f8, 0x860($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(84, 0X860));
    // 0x80800354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800358: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8080035C: nop

    // 0x80800360: bc1f        L_8080037C
    if (!c1cs) {
        // 0x80800364: nop
    
            goto L_8080037C;
    }
    // 0x80800364: nop

    // 0x80800368: jal         0x80091A30
    // 0x8080036C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_21;
    // 0x8080036C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_21:
    // 0x80800370: beq         $v0, $zero, L_8080037C
    if (ctx->r2 == 0) {
        // 0x80800374: nop
    
            goto L_8080037C;
    }
    // 0x80800374: nop

    // 0x80800378: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
L_8080037C:
    // 0x8080037C: jal         0x8008E078
    // 0x80800380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_22;
    // 0x80800380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80800384: beq         $v0, $zero, L_808003C4
    if (ctx->r2 == 0) {
        // 0x80800388: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003C4;
    }
    // 0x80800388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080038C: jal         0x8009B9B0
    // 0x80800390: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_23;
    // 0x80800390: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_23:
    // 0x80800394: b           L_808003C8
    // 0x80800398: lui         $a1, 0x3EBA
    ctx->r5 = S32(0X3EBA << 16);
        goto L_808003C8;
    // 0x80800398: lui         $a1, 0x3EBA
    ctx->r5 = S32(0X3EBA << 16);
L_8080039C:
    // 0x8080039C: jal         0x80097DF4
    // 0x808003A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097DF4(rdram, ctx);
        goto after_24;
    // 0x808003A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x808003A4: beq         $v0, $zero, L_808003B0
    if (ctx->r2 == 0) {
        // 0x808003A8: addiu       $t0, $zero, 0x10
        ctx->r8 = ADD32(0, 0X10);
            goto L_808003B0;
    }
    // 0x808003A8: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x808003AC: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_808003B0:
    // 0x808003B0: jal         0x80097A90
    // 0x808003B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097A90(rdram, ctx);
        goto after_25;
    // 0x808003B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x808003B8: beq         $v0, $zero, L_808003C4
    if (ctx->r2 == 0) {
        // 0x808003BC: addiu       $t1, $zero, 0xF
        ctx->r9 = ADD32(0, 0XF);
            goto L_808003C4;
    }
    // 0x808003BC: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x808003C0: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_808003C4:
    // 0x808003C4: lui         $a1, 0x3EBA
    ctx->r5 = S32(0X3EBA << 16);
L_808003C8:
    // 0x808003C8: ori         $a1, $a1, 0x36E3
    ctx->r5 = ctx->r5 | 0X36E3;
    // 0x808003CC: jal         0x8008B348
    // 0x808003D0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B348(rdram, ctx);
        goto after_26;
    // 0x808003D0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_26:
    // 0x808003D4: beq         $v0, $zero, L_808003F0
    if (ctx->r2 == 0) {
        // 0x808003D8: lui         $a1, 0x3EEE
        ctx->r5 = S32(0X3EEE << 16);
            goto L_808003F0;
    }
    // 0x808003D8: lui         $a1, 0x3EEE
    ctx->r5 = S32(0X3EEE << 16);
    // 0x808003DC: lw          $t2, 0x15C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X15C);
    // 0x808003E0: addiu       $t3, $zero, 0x22
    ctx->r11 = ADD32(0, 0X22);
    // 0x808003E4: beql        $t2, $zero, L_808003F4
    if (ctx->r10 == 0) {
        // 0x808003E8: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_808003F4;
    }
    goto skip_2;
    // 0x808003E8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    skip_2:
    // 0x808003EC: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
L_808003F0:
    // 0x808003F0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
L_808003F4:
    // 0x808003F4: jal         0x8008B348
    // 0x808003F8: ori         $a1, $a1, 0x3BCD
    ctx->r5 = ctx->r5 | 0X3BCD;
    func_8008B348(rdram, ctx);
        goto after_27;
    // 0x808003F8: ori         $a1, $a1, 0x3BCD
    ctx->r5 = ctx->r5 | 0X3BCD;
    after_27:
    // 0x808003FC: beq         $v0, $zero, L_80800424
    if (ctx->r2 == 0) {
        // 0x80800400: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800424;
    }
    // 0x80800400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800404: jal         0x8009BA58
    // 0x80800408: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    func_8009BA58(rdram, ctx);
        goto after_28;
    // 0x80800408: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_28:
    // 0x8080040C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800410: jal         0x80093300
    // 0x80800414: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80093300(rdram, ctx);
        goto after_29;
    // 0x80800414: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_29:
    // 0x80800418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080041C: jal         0x8009C1B4
    // 0x80800420: lui         $a1, 0x42AE
    ctx->r5 = S32(0X42AE << 16);
    func_8009C1B4(rdram, ctx);
        goto after_30;
    // 0x80800420: lui         $a1, 0x42AE
    ctx->r5 = S32(0X42AE << 16);
    after_30:
L_80800424:
    // 0x80800424: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800428: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8080042C: nop

    // 0x80800430: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80800434: nop

    // 0x80800438: bc1fl       L_80800458
    if (!c1cs) {
        // 0x8080043C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800458;
    }
    goto skip_3;
    // 0x8080043C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x80800440: jal         0x8008E35C
    // 0x80800444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_31;
    // 0x80800444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x80800448: beq         $v0, $zero, L_80800454
    if (ctx->r2 == 0) {
        // 0x8080044C: addiu       $t4, $zero, 0x4C
        ctx->r12 = ADD32(0, 0X4C);
            goto L_80800454;
    }
    // 0x8080044C: addiu       $t4, $zero, 0x4C
    ctx->r12 = ADD32(0, 0X4C);
    // 0x80800450: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
L_80800454:
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800458:
    // 0x80800458: jal         0x8009E5C8
    // 0x8080045C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_32;
    // 0x8080045C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_32:
    // 0x80800460: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800464: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800468: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8080046C: jr          $ra
    // 0x80800470: nop

    return;
    // 0x80800470: nop

;}
RECOMP_FUNC void bsbshock_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800474: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800478: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080047C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800480: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800484: jal         0x800C2FDC
    // 0x80800488: lbu         $a0, 0x164($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X164);
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x80800488: lbu         $a0, 0x164($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X164);
    after_0:
    // 0x8080048C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800490: jal         0x800A0CE8
    // 0x80800494: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CE8(rdram, ctx);
        goto after_1;
    // 0x80800494: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080049C: jal         0x800A0CF4
    // 0x808004A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_2;
    // 0x808004A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808004A4: jal         0x80092BF4
    // 0x808004A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092BF4(rdram, ctx);
        goto after_3;
    // 0x808004A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808004AC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x808004B0: nop

    // 0x808004B4: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x808004B8: nop

    // 0x808004BC: bc1tl       L_808004E0
    if (c1cs) {
        // 0x808004C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808004E0;
    }
    goto skip_0;
    // 0x808004C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808004C4: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x808004C8: jal         0x80093300
    // 0x808004CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80093300(rdram, ctx);
        goto after_4;
    // 0x808004CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808004D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004D4: jal         0x8009C1B4
    // 0x808004D8: lui         $a1, 0x42AE
    ctx->r5 = S32(0X42AE << 16);
    func_8009C1B4(rdram, ctx);
        goto after_5;
    // 0x808004D8: lui         $a1, 0x42AE
    ctx->r5 = S32(0X42AE << 16);
    after_5:
    // 0x808004DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808004E0:
    // 0x808004E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808004E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808004E8: jr          $ra
    // 0x808004EC: nop

    return;
    // 0x808004EC: nop

;}
RECOMP_FUNC void bsbshock_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004F0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808004F4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(84, 0X870) << 16);
    // 0x808004F8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808004FC: jr          $ra
    // 0x80800500: lw          $v0, 0x870($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(84, 0X870));
    return;
    // 0x80800500: lw          $v0, 0x870($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(84, 0X870));
;}
RECOMP_FUNC void bsbshock_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800504: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800508: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080050C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800510: jal         0x8008CABC
    // 0x80800514: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800514: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800518: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8080051C: jal         0x8008AF24
    // 0x80800520: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80800520: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800524: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800528: jal         0x8008B1A0
    // 0x8080052C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_2;
    // 0x8080052C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800530: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800534: jal         0x8008AED4
    // 0x80800538: addiu       $a1, $zero, 0x49
    ctx->r5 = ADD32(0, 0X49);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x80800538: addiu       $a1, $zero, 0x49
    ctx->r5 = ADD32(0, 0X49);
    after_3:
    // 0x8080053C: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x80800540: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800544: jal         0x8008B1BC
    // 0x80800548: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B1BC(rdram, ctx);
        goto after_4;
    // 0x80800548: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_4:
    // 0x8080054C: lui         $a1, 0x3F2C
    ctx->r5 = S32(0X3F2C << 16);
    // 0x80800550: ori         $a1, $a1, 0x84B6
    ctx->r5 = ctx->r5 | 0X84B6;
    // 0x80800554: jal         0x8008B24C
    // 0x80800558: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B24C(rdram, ctx);
        goto after_5;
    // 0x80800558: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_5:
    // 0x8080055C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800560: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80800564: jal         0x8008B1D4
    // 0x80800568: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008B1D4(rdram, ctx);
        goto after_6;
    // 0x80800568: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_6:
    // 0x8080056C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800570: jal         0x8008B134
    // 0x80800574: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_7;
    // 0x80800574: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80800578: jal         0x8008B064
    // 0x8080057C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B064(rdram, ctx);
        goto after_8;
    // 0x8080057C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_8:
    // 0x80800580: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800584: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080058C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800590: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800594: jal         0x8009FFD8
    // 0x80800598: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_9;
    // 0x80800598: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_9:
    // 0x8080059C: jal         0x8009EF04
    // 0x808005A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_10;
    // 0x808005A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808005A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808005A8: nop

    // 0x808005AC: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x808005B0: nop

    // 0x808005B4: bc1t        L_808005D0
    if (c1cs) {
        // 0x808005B8: nop
    
            goto L_808005D0;
    }
    // 0x808005B8: nop

    // 0x808005BC: jal         0x8009EEB8
    // 0x808005C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_11;
    // 0x808005C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808005C4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808005C8: jal         0x8009C914
    // 0x808005CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_12;
    // 0x808005CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
L_808005D0:
    // 0x808005D0: jal         0x8009C990
    // 0x808005D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_13;
    // 0x808005D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808005D8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808005DC: jal         0x8009B9C0
    // 0x808005E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_14;
    // 0x808005E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808005E4: jal         0x800841D8
    // 0x808005E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bswalk_entrypoint_1(rdram, ctx);
        goto after_15;
    // 0x808005E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808005EC: jal         0x8009C990
    // 0x808005F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_16;
    // 0x808005F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808005F4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x808005F8: jal         0x8009BB00
    // 0x808005FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_17;
    // 0x808005FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800600: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800608: jal         0x8009BA68
    // 0x8080060C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_18;
    // 0x8080060C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_18:
    // 0x80800610: lui         $a1, 0x449C
    ctx->r5 = S32(0X449C << 16);
    // 0x80800614: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x80800618: jal         0x8009BA58
    // 0x8080061C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_19;
    // 0x8080061C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800624: jal         0x8009BCB4
    // 0x80800628: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_20;
    // 0x80800628: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    after_20:
    // 0x8080062C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800630: addiu       $a1, $zero, 0x408
    ctx->r5 = ADD32(0, 0X408);
    // 0x80800634: jal         0x8009DBF0
    // 0x80800638: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DBF0(rdram, ctx);
        goto after_21;
    // 0x80800638: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_21:
    // 0x8080063C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800640: jal         0x800A0CE8
    // 0x80800644: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CE8(rdram, ctx);
        goto after_22;
    // 0x80800644: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_22:
    // 0x80800648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080064C: jal         0x800A0CF4
    // 0x80800650: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_23;
    // 0x80800650: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
    // 0x80800654: jal         0x800C6DA0
    // 0x80800658: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    func_800C6DA0(rdram, ctx);
        goto after_24;
    // 0x80800658: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    after_24:
    // 0x8080065C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800660: jal         0x80093300
    // 0x80800664: lui         $a1, 0xC2AE
    ctx->r5 = S32(0XC2AE << 16);
    func_80093300(rdram, ctx);
        goto after_25;
    // 0x80800664: lui         $a1, 0xC2AE
    ctx->r5 = S32(0XC2AE << 16);
    after_25:
    // 0x80800668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080066C: jal         0x8009C1B4
    // 0x80800670: lui         $a1, 0xC2AE
    ctx->r5 = S32(0XC2AE << 16);
    func_8009C1B4(rdram, ctx);
        goto after_26;
    // 0x80800670: lui         $a1, 0xC2AE
    ctx->r5 = S32(0XC2AE << 16);
    after_26:
    // 0x80800674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800678: addiu       $a1, $zero, 0x43A
    ctx->r5 = ADD32(0, 0X43A);
    // 0x8080067C: jal         0x8009DF58
    // 0x80800680: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DF58(rdram, ctx);
        goto after_27;
    // 0x80800680: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_27:
    // 0x80800684: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    // 0x80800688: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080068C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800690: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800694: jr          $ra
    // 0x80800698: nop

    return;
    // 0x80800698: nop

;}
RECOMP_FUNC void bsbshock_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080069C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808006A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808006A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808006A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808006AC: jal         0x8008CABC
    // 0x808006B0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808006B0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x808006B4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x808006B8: jal         0x800841D8
    // 0x808006BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bswalk_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x808006BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808006C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006C4: jal         0x8009BB24
    // 0x808006C8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8009BB24(rdram, ctx);
        goto after_2;
    // 0x808006C8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x808006CC: lui         $a1, 0x3F43
    ctx->r5 = S32(0X3F43 << 16);
    // 0x808006D0: ori         $a1, $a1, 0x553
    ctx->r5 = ctx->r5 | 0X553;
    // 0x808006D4: jal         0x8008B348
    // 0x808006D8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_3;
    // 0x808006D8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x808006DC: beq         $v0, $zero, L_808006EC
    if (ctx->r2 == 0) {
        // 0x808006E0: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_808006EC;
    }
    // 0x808006E0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x808006E4: jal         0x8008B1BC
    // 0x808006E8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_4;
    // 0x808006E8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_4:
L_808006EC:
    // 0x808006EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006F0: jal         0x80091A30
    // 0x808006F4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_5;
    // 0x808006F4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_5:
    // 0x808006F8: beq         $v0, $zero, L_80800720
    if (ctx->r2 == 0) {
        // 0x808006FC: lwc1        $f6, 0x2C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_80800720;
    }
    // 0x808006FC: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800700: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800704: nop

    // 0x80800708: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8080070C: nop

    // 0x80800710: bc1fl       L_80800724
    if (!c1cs) {
        // 0x80800714: lw          $t6, 0x160($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X160);
            goto L_80800724;
    }
    goto skip_0;
    // 0x80800714: lw          $t6, 0x160($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X160);
    skip_0:
    // 0x80800718: jal         0x8009BC6C
    // 0x8080071C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_6;
    // 0x8080071C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_80800720:
    // 0x80800720: lw          $t6, 0x160($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X160);
L_80800724:
    // 0x80800724: bne         $t6, $zero, L_80800754
    if (ctx->r14 != 0) {
        // 0x80800728: nop
    
            goto L_80800754;
    }
    // 0x80800728: nop

    // 0x8080072C: jal         0x8009FC80
    // 0x80800730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FC80(rdram, ctx);
        goto after_7;
    // 0x80800730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800734: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800738: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8080073C: addiu       $t7, $zero, 0x2F
    ctx->r15 = ADD32(0, 0X2F);
    // 0x80800740: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80800744: nop

    // 0x80800748: bc1f        L_80800754
    if (!c1cs) {
        // 0x8080074C: nop
    
            goto L_80800754;
    }
    // 0x8080074C: nop

    // 0x80800750: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_80800754:
    // 0x80800754: jal         0x8008E078
    // 0x80800758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_8;
    // 0x80800758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8080075C: bnel        $v0, $zero, L_808007B8
    if (ctx->r2 != 0) {
        // 0x80800760: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007B8;
    }
    goto skip_1;
    // 0x80800760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800764: jal         0x8008E260
    // 0x80800768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_9;
    // 0x80800768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080076C: beq         $v0, $zero, L_80800778
    if (ctx->r2 == 0) {
        // 0x80800770: addiu       $t8, $zero, 0x3D
        ctx->r24 = ADD32(0, 0X3D);
            goto L_80800778;
    }
    // 0x80800770: addiu       $t8, $zero, 0x3D
    ctx->r24 = ADD32(0, 0X3D);
    // 0x80800774: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_80800778:
    // 0x80800778: jal         0x80097DF4
    // 0x8080077C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097DF4(rdram, ctx);
        goto after_10;
    // 0x8080077C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800780: beq         $v0, $zero, L_8080078C
    if (ctx->r2 == 0) {
        // 0x80800784: addiu       $t9, $zero, 0x10
        ctx->r25 = ADD32(0, 0X10);
            goto L_8080078C;
    }
    // 0x80800784: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80800788: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_8080078C:
    // 0x8080078C: jal         0x80097A90
    // 0x80800790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097A90(rdram, ctx);
        goto after_11;
    // 0x80800790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800794: beq         $v0, $zero, L_808007A0
    if (ctx->r2 == 0) {
        // 0x80800798: addiu       $t0, $zero, 0xF
        ctx->r8 = ADD32(0, 0XF);
            goto L_808007A0;
    }
    // 0x80800798: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x8080079C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_808007A0:
    // 0x808007A0: jal         0x8008DA24
    // 0x808007A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DA24(rdram, ctx);
        goto after_12;
    // 0x808007A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808007A8: beq         $v0, $zero, L_808007B4
    if (ctx->r2 == 0) {
        // 0x808007AC: addiu       $t1, $zero, 0xA8
        ctx->r9 = ADD32(0, 0XA8);
            goto L_808007B4;
    }
    // 0x808007AC: addiu       $t1, $zero, 0xA8
    ctx->r9 = ADD32(0, 0XA8);
    // 0x808007B0: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_808007B4:
    // 0x808007B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808007B8:
    // 0x808007B8: jal         0x8009E5C8
    // 0x808007BC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_13;
    // 0x808007BC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_13:
    // 0x808007C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808007C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808007C8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808007CC: jr          $ra
    // 0x808007D0: nop

    return;
    // 0x808007D0: nop

;}
RECOMP_FUNC void bsbshock_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808007D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808007DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808007E0: jal         0x8009E704
    // 0x808007E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E704(rdram, ctx);
        goto after_0;
    // 0x808007E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808007E8: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x808007EC: beql        $v0, $at, L_80800800
    if (ctx->r2 == ctx->r1) {
        // 0x808007F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800800;
    }
    goto skip_0;
    // 0x808007F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808007F4: jal         0x8009BC6C
    // 0x808007F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_1;
    // 0x808007F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808007FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800800:
    // 0x80800800: jal         0x800A0CE8
    // 0x80800804: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CE8(rdram, ctx);
        goto after_2;
    // 0x80800804: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080080C: jal         0x800A0CF4
    // 0x80800810: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_3;
    // 0x80800810: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800818: jal         0x80093300
    // 0x8080081C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80093300(rdram, ctx);
        goto after_4;
    // 0x8080081C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800820: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800824: jal         0x8009C1B4
    // 0x80800828: lui         $a1, 0x42AE
    ctx->r5 = S32(0X42AE << 16);
    func_8009C1B4(rdram, ctx);
        goto after_5;
    // 0x80800828: lui         $a1, 0x42AE
    ctx->r5 = S32(0X42AE << 16);
    after_5:
    // 0x8080082C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800830: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800834: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800838: jr          $ra
    // 0x8080083C: nop

    return;
    // 0x8080083C: nop

;}
RECOMP_FUNC void bsbshock_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800840: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800844: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(84, 0X880) << 16);
    // 0x80800848: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080084C: jr          $ra
    // 0x80800850: lw          $v0, 0x880($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(84, 0X880));
    return;
    // 0x80800850: lw          $v0, 0x880($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(84, 0X880));
    // 0x80800854: nop

    // 0x80800858: nop

    // 0x8080085C: nop

;}
RECOMP_FUNC void func_80800000_bsbswim(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void func_80800030_bsbswim(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void func_80800104_bsbswim(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void func_808001A8_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001B0: jal         0x80000104
    // 0x808001B4: nop

    func_80800104_bsbswim(rdram, ctx);
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
RECOMP_FUNC void func_808001C8_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001D0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808001D4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808001D8: jal         0x8008CABC
    // 0x808001DC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808001DC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x808001E0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808001E4: jal         0x8008AF24
    // 0x808001E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x808001E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F0: jal         0x8008AED4
    // 0x808001F4: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x808001F4: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    after_2:
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001FC: jal         0x8008B1BC
    // 0x80800200: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x80800200: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_3:
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800208: jal         0x8008B1C8
    // 0x8080020C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8008B1C8(rdram, ctx);
        goto after_4;
    // 0x8080020C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_4:
    // 0x80800210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800214: jal         0x8008B134
    // 0x80800218: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x80800218: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x8080021C: jal         0x8008B064
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_6;
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800224: jal         0x80000000
    // 0x80800228: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800000_bsbswim(rdram, ctx);
        goto after_7;
    // 0x80800228: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x8080022C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800230: jal         0x8009B94C
    // 0x80800234: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009B94C(rdram, ctx);
        goto after_8;
    // 0x80800234: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80800238: jal         0x80000030
    // 0x8080023C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800030_bsbswim(rdram, ctx);
        goto after_9;
    // 0x8080023C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x80800240: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x80800244: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800248: jal         0x8009BC5C
    // 0x8080024C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BC5C(rdram, ctx);
        goto after_10;
    // 0x8080024C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x80800250: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800254: jal         0x800852A8
    // 0x80800258: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    _baswim_entrypoint_8(rdram, ctx);
        goto after_11;
    // 0x80800258: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_11:
    // 0x8080025C: jal         0x8008E23C
    // 0x80800260: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008E23C(rdram, ctx);
        goto after_12;
    // 0x80800260: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x80800264: beq         $v0, $zero, L_80800274
    if (ctx->r2 == 0) {
        // 0x80800268: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80800274;
    }
    // 0x80800268: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080026C: jal         0x800A0CF4
    // 0x80800270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_13;
    // 0x80800270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
L_80800274:
    // 0x80800274: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800278: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8080027C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800280: jr          $ra
    // 0x80800284: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800284: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80800288_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800288: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080028C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800290: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800294: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800298: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080029C: jal         0x800852C0
    // 0x808002A0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    _baswim_entrypoint_11(rdram, ctx);
        goto after_0;
    // 0x808002A0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x808002A4: jal         0x800852C8
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_12(rdram, ctx);
        goto after_1;
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808002AC: jal         0x800852D0
    // 0x808002B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_13(rdram, ctx);
        goto after_2;
    // 0x808002B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808002B4: jal         0x8008E23C
    // 0x808002B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E23C(rdram, ctx);
        goto after_3;
    // 0x808002B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808002BC: beq         $v0, $zero, L_808002EC
    if (ctx->r2 == 0) {
        // 0x808002C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002EC;
    }
    // 0x808002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C4: jal         0x800919F4
    // 0x808002C8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800919F4(rdram, ctx);
        goto after_4;
    // 0x808002C8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_4:
    // 0x808002CC: bne         $v0, $zero, L_808002E4
    if (ctx->r2 != 0) {
        // 0x808002D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002E4;
    }
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002D4: jal         0x800919F4
    // 0x808002D8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800919F4(rdram, ctx);
        goto after_5;
    // 0x808002D8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_5:
    // 0x808002DC: beq         $v0, $zero, L_80800344
    if (ctx->r2 == 0) {
        // 0x808002E0: nop
    
            goto L_80800344;
    }
    // 0x808002E0: nop

L_808002E4:
    // 0x808002E4: b           L_80800344
    // 0x808002E8: addiu       $s1, $zero, 0x81
    ctx->r17 = ADD32(0, 0X81);
        goto L_80800344;
    // 0x808002E8: addiu       $s1, $zero, 0x81
    ctx->r17 = ADD32(0, 0X81);
L_808002EC:
    // 0x808002EC: jal         0x80085280
    // 0x808002F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_3(rdram, ctx);
        goto after_6;
    // 0x808002F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808002F4: beq         $v0, $zero, L_80800330
    if (ctx->r2 == 0) {
        // 0x808002F8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80800330;
    }
    // 0x808002F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808002FC: beq         $v0, $at, L_8080031C
    if (ctx->r2 == ctx->r1) {
        // 0x80800300: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8080031C;
    }
    // 0x80800300: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800304: beq         $v0, $at, L_80800324
    if (ctx->r2 == ctx->r1) {
        // 0x80800308: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800324;
    }
    // 0x80800308: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8080030C: beql        $v0, $at, L_80800330
    if (ctx->r2 == ctx->r1) {
        // 0x80800310: addiu       $s1, $zero, 0x19
        ctx->r17 = ADD32(0, 0X19);
            goto L_80800330;
    }
    goto skip_0;
    // 0x80800310: addiu       $s1, $zero, 0x19
    ctx->r17 = ADD32(0, 0X19);
    skip_0:
    // 0x80800314: b           L_80800330
    // 0x80800318: nop

        goto L_80800330;
    // 0x80800318: nop

L_8080031C:
    // 0x8080031C: b           L_80800330
    // 0x80800320: addiu       $s1, $zero, 0x39
    ctx->r17 = ADD32(0, 0X39);
        goto L_80800330;
    // 0x80800320: addiu       $s1, $zero, 0x39
    ctx->r17 = ADD32(0, 0X39);
L_80800324:
    // 0x80800324: b           L_80800330
    // 0x80800328: addiu       $s1, $zero, 0x2C
    ctx->r17 = ADD32(0, 0X2C);
        goto L_80800330;
    // 0x80800328: addiu       $s1, $zero, 0x2C
    ctx->r17 = ADD32(0, 0X2C);
    // 0x8080032C: addiu       $s1, $zero, 0x19
    ctx->r17 = ADD32(0, 0X19);
L_80800330:
    // 0x80800330: jal         0x8009803C
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009803C(rdram, ctx);
        goto after_7;
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800338: beq         $v0, $zero, L_80800344
    if (ctx->r2 == 0) {
        // 0x8080033C: nop
    
            goto L_80800344;
    }
    // 0x8080033C: nop

    // 0x80800340: addiu       $s1, $zero, 0x157
    ctx->r17 = ADD32(0, 0X157);
L_80800344:
    // 0x80800344: jal         0x80085278
    // 0x80800348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_2(rdram, ctx);
        goto after_8;
    // 0x80800348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8080034C: beq         $v0, $zero, L_80800358
    if (ctx->r2 == 0) {
        // 0x80800350: nop
    
            goto L_80800358;
    }
    // 0x80800350: nop

    // 0x80800354: addiu       $s1, $zero, 0x2D
    ctx->r17 = ADD32(0, 0X2D);
L_80800358:
    // 0x80800358: jal         0x8008E35C
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_9;
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800360: bne         $v0, $zero, L_8080036C
    if (ctx->r2 != 0) {
        // 0x80800364: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080036C;
    }
    // 0x80800364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800368: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8080036C:
    // 0x8080036C: jal         0x8009E5C8
    // 0x80800370: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_10;
    // 0x80800370: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_10:
    // 0x80800374: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800378: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8080037C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800380: jr          $ra
    // 0x80800384: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800384: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bsbswim_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800388: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080038C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(85, 0X1E60) << 16);
    // 0x80800390: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800394: jr          $ra
    // 0x80800398: lw          $v0, 0x1E60($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1E60));
    return;
    // 0x80800398: lw          $v0, 0x1E60($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1E60));
;}
RECOMP_FUNC void func_8080039C_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080039C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808003A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808003A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808003A8: jal         0x8008CABC
    // 0x808003AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808003AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808003B0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x808003B4: jal         0x8009E710
    // 0x808003B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E710(rdram, ctx);
        goto after_1;
    // 0x808003B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808003BC: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x808003C0: bnel        $v0, $at, L_808003DC
    if (ctx->r2 != ctx->r1) {
        // 0x808003C4: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_808003DC;
    }
    goto skip_0;
    // 0x808003C4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    skip_0:
    // 0x808003C8: jal         0x8008B2B4
    // 0x808003CC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B2B4(rdram, ctx);
        goto after_2;
    // 0x808003CC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x808003D0: b           L_808003E4
    // 0x808003D4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_808003E4;
    // 0x808003D4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x808003D8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
L_808003DC:
    // 0x808003DC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x808003E0: nop

L_808003E4:
    // 0x808003E4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x808003E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003EC: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
    // 0x808003F0: jal         0x8008CC34
    // 0x808003F4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CC34(rdram, ctx);
        goto after_3;
    // 0x808003F4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
    // 0x808003F8: jal         0x80000000
    // 0x808003FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbswim(rdram, ctx);
        goto after_4;
    // 0x808003FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800400: jal         0x80000030
    // 0x80800404: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800030_bsbswim(rdram, ctx);
        goto after_5;
    // 0x80800404: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080040C: jal         0x800852A8
    // 0x80800410: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    _baswim_entrypoint_8(rdram, ctx);
        goto after_6;
    // 0x80800410: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_6:
    // 0x80800414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800418: jal         0x8009BC5C
    // 0x8080041C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009BC5C(rdram, ctx);
        goto after_7;
    // 0x8080041C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_7:
    // 0x80800420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800424: jal         0x800910BC
    // 0x80800428: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800910BC(rdram, ctx);
        goto after_8;
    // 0x80800428: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x8080042C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800430: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800434: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800438: jr          $ra
    // 0x8080043C: nop

    return;
    // 0x8080043C: nop

;}
RECOMP_FUNC void func_80800440_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800440: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800448: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8080044C: jal         0x8008CABC
    // 0x80800450: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800450: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800454: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80800458: jal         0x800852C0
    // 0x8080045C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _baswim_entrypoint_11(rdram, ctx);
        goto after_1;
    // 0x8080045C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800460: jal         0x800852C8
    // 0x80800464: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _baswim_entrypoint_12(rdram, ctx);
        goto after_2;
    // 0x80800464: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800468: jal         0x800852D0
    // 0x8080046C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _baswim_entrypoint_13(rdram, ctx);
        goto after_3;
    // 0x8080046C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x80800470: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80800474: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800478: jal         0x8008B348
    // 0x8080047C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008B348(rdram, ctx);
        goto after_4;
    // 0x8080047C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
    // 0x80800480: beq         $v0, $zero, L_808004AC
    if (ctx->r2 == 0) {
        // 0x80800484: lui         $a2, 0x3F99
        ctx->r6 = S32(0X3F99 << 16);
            goto L_808004AC;
    }
    // 0x80800484: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x80800488: lui         $a3, 0x3FB3
    ctx->r7 = S32(0X3FB3 << 16);
    // 0x8080048C: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x80800490: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800494: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800498: jal         0x8009DE74
    // 0x8080049C: addiu       $a1, $zero, 0x3FD
    ctx->r5 = ADD32(0, 0X3FD);
    func_8009DE74(rdram, ctx);
        goto after_5;
    // 0x8080049C: addiu       $a1, $zero, 0x3FD
    ctx->r5 = ADD32(0, 0X3FD);
    after_5:
    // 0x808004A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808004A4: jal         0x800852B8
    // 0x808004A8: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    _baswim_entrypoint_10(rdram, ctx);
        goto after_6;
    // 0x808004A8: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_6:
L_808004AC:
    // 0x808004AC: lui         $a1, 0x3EEC
    ctx->r5 = S32(0X3EEC << 16);
    // 0x808004B0: ori         $a1, $a1, 0xD9E8
    ctx->r5 = ctx->r5 | 0XD9E8;
    // 0x808004B4: jal         0x8008B348
    // 0x808004B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x808004B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_7:
    // 0x808004BC: beql        $v0, $zero, L_808004D4
    if (ctx->r2 == 0) {
        // 0x808004C0: lui         $a1, 0x3E8D
        ctx->r5 = S32(0X3E8D << 16);
            goto L_808004D4;
    }
    goto skip_0;
    // 0x808004C0: lui         $a1, 0x3E8D
    ctx->r5 = S32(0X3E8D << 16);
    skip_0:
    // 0x808004C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808004C8: jal         0x8008B1BC
    // 0x808004CC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_8;
    // 0x808004CC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_8:
    // 0x808004D0: lui         $a1, 0x3E8D
    ctx->r5 = S32(0X3E8D << 16);
L_808004D4:
    // 0x808004D4: ori         $a1, $a1, 0x9E84
    ctx->r5 = ctx->r5 | 0X9E84;
    // 0x808004D8: jal         0x8008B348
    // 0x808004DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008B348(rdram, ctx);
        goto after_9;
    // 0x808004DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_9:
    // 0x808004E0: beq         $v0, $zero, L_808004F4
    if (ctx->r2 == 0) {
        // 0x808004E4: nop
    
            goto L_808004F4;
    }
    // 0x808004E4: nop

    // 0x808004E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808004EC: jal         0x8008B1BC
    // 0x808004F0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_10;
    // 0x808004F0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_10:
L_808004F4:
    // 0x808004F4: jal         0x80085280
    // 0x808004F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _baswim_entrypoint_3(rdram, ctx);
        goto after_11;
    // 0x808004F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_11:
    // 0x808004FC: beq         $v0, $zero, L_8080052C
    if (ctx->r2 == 0) {
        // 0x80800500: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8080052C;
    }
    // 0x80800500: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800504: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800508: beq         $v0, $at, L_80800548
    if (ctx->r2 == ctx->r1) {
        // 0x8080050C: addiu       $t7, $zero, 0x39
        ctx->r15 = ADD32(0, 0X39);
            goto L_80800548;
    }
    // 0x8080050C: addiu       $t7, $zero, 0x39
    ctx->r15 = ADD32(0, 0X39);
    // 0x80800510: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800514: beq         $v0, $at, L_80800554
    if (ctx->r2 == ctx->r1) {
        // 0x80800518: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800554;
    }
    // 0x80800518: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8080051C: beq         $v0, $at, L_80800550
    if (ctx->r2 == ctx->r1) {
        // 0x80800520: addiu       $t8, $zero, 0x19
        ctx->r24 = ADD32(0, 0X19);
            goto L_80800550;
    }
    // 0x80800520: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x80800524: b           L_80800558
    // 0x80800528: lui         $a1, 0x3EEC
    ctx->r5 = S32(0X3EEC << 16);
        goto L_80800558;
    // 0x80800528: lui         $a1, 0x3EEC
    ctx->r5 = S32(0X3EEC << 16);
L_8080052C:
    // 0x8080052C: lui         $a1, 0x3EEC
    ctx->r5 = S32(0X3EEC << 16);
    // 0x80800530: jal         0x8008B348
    // 0x80800534: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_8008B348(rdram, ctx);
        goto after_12;
    // 0x80800534: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_12:
    // 0x80800538: beq         $v0, $zero, L_80800554
    if (ctx->r2 == 0) {
        // 0x8080053C: addiu       $t6, $zero, 0x2B
        ctx->r14 = ADD32(0, 0X2B);
            goto L_80800554;
    }
    // 0x8080053C: addiu       $t6, $zero, 0x2B
    ctx->r14 = ADD32(0, 0X2B);
    // 0x80800540: b           L_80800554
    // 0x80800544: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
        goto L_80800554;
    // 0x80800544: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80800548:
    // 0x80800548: b           L_80800554
    // 0x8080054C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
        goto L_80800554;
    // 0x8080054C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_80800550:
    // 0x80800550: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_80800554:
    // 0x80800554: lui         $a1, 0x3EEC
    ctx->r5 = S32(0X3EEC << 16);
L_80800558:
    // 0x80800558: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8080055C: jal         0x8008B348
    // 0x80800560: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008B348(rdram, ctx);
        goto after_13;
    // 0x80800560: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_13:
    // 0x80800564: beq         $v0, $zero, L_8080059C
    if (ctx->r2 == 0) {
        // 0x80800568: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8080059C;
    }
    // 0x80800568: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080056C: jal         0x800919F4
    // 0x80800570: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800919F4(rdram, ctx);
        goto after_14;
    // 0x80800570: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_14:
    // 0x80800574: bne         $v0, $zero, L_8080059C
    if (ctx->r2 != 0) {
        // 0x80800578: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8080059C;
    }
    // 0x80800578: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080057C: jal         0x800919F4
    // 0x80800580: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800919F4(rdram, ctx);
        goto after_15;
    // 0x80800580: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_15:
    // 0x80800584: beq         $v0, $zero, L_80800598
    if (ctx->r2 == 0) {
        // 0x80800588: addiu       $t0, $zero, 0x2B
        ctx->r8 = ADD32(0, 0X2B);
            goto L_80800598;
    }
    // 0x80800588: addiu       $t0, $zero, 0x2B
    ctx->r8 = ADD32(0, 0X2B);
    // 0x8080058C: addiu       $t9, $zero, 0x39
    ctx->r25 = ADD32(0, 0X39);
    // 0x80800590: b           L_8080059C
    // 0x80800594: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_8080059C;
    // 0x80800594: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_80800598:
    // 0x80800598: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_8080059C:
    // 0x8080059C: jal         0x8009803C
    // 0x808005A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009803C(rdram, ctx);
        goto after_16;
    // 0x808005A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_16:
    // 0x808005A4: beq         $v0, $zero, L_808005B0
    if (ctx->r2 == 0) {
        // 0x808005A8: addiu       $t1, $zero, 0x157
        ctx->r9 = ADD32(0, 0X157);
            goto L_808005B0;
    }
    // 0x808005A8: addiu       $t1, $zero, 0x157
    ctx->r9 = ADD32(0, 0X157);
    // 0x808005AC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_808005B0:
    // 0x808005B0: jal         0x80085278
    // 0x808005B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _baswim_entrypoint_2(rdram, ctx);
        goto after_17;
    // 0x808005B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_17:
    // 0x808005B8: beq         $v0, $zero, L_808005C4
    if (ctx->r2 == 0) {
        // 0x808005BC: addiu       $t2, $zero, 0x2D
        ctx->r10 = ADD32(0, 0X2D);
            goto L_808005C4;
    }
    // 0x808005BC: addiu       $t2, $zero, 0x2D
    ctx->r10 = ADD32(0, 0X2D);
    // 0x808005C0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
L_808005C4:
    // 0x808005C4: jal         0x8008E35C
    // 0x808005C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008E35C(rdram, ctx);
        goto after_18;
    // 0x808005C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_18:
    // 0x808005CC: bne         $v0, $zero, L_808005D8
    if (ctx->r2 != 0) {
        // 0x808005D0: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_808005D8;
    }
    // 0x808005D0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x808005D4: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
L_808005D8:
    // 0x808005D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808005DC: jal         0x8009E5C8
    // 0x808005E0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_19;
    // 0x808005E0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_19:
    // 0x808005E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808005EC: jr          $ra
    // 0x808005F0: nop

    return;
    // 0x808005F0: nop

;}
RECOMP_FUNC void func_808005F4_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800600: jal         0x800910BC
    // 0x80800604: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800910BC(rdram, ctx);
        goto after_0;
    // 0x80800604: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800608: jal         0x80000104
    // 0x8080060C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800104_bsbswim(rdram, ctx);
        goto after_1;
    // 0x8080060C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800618: jr          $ra
    // 0x8080061C: nop

    return;
    // 0x8080061C: nop

;}
RECOMP_FUNC void bsbswim_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800620: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800624: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(85, 0X1E70) << 16);
    // 0x80800628: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080062C: jr          $ra
    // 0x80800630: lw          $v0, 0x1E70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1E70));
    return;
    // 0x80800630: lw          $v0, 0x1E70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1E70));
;}
RECOMP_FUNC void func_80800634_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800634: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800638: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080063C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800640: jal         0x8008CABC
    // 0x80800644: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800644: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800648: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8080064C: jal         0x8009E710
    // 0x80800650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E710(rdram, ctx);
        goto after_1;
    // 0x80800650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800654: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x80800658: bnel        $v0, $at, L_80800674
    if (ctx->r2 != ctx->r1) {
        // 0x8080065C: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_80800674;
    }
    goto skip_0;
    // 0x8080065C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    skip_0:
    // 0x80800660: jal         0x8008B2B4
    // 0x80800664: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B2B4(rdram, ctx);
        goto after_2;
    // 0x80800664: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80800668: b           L_8080067C
    // 0x8080066C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_8080067C;
    // 0x8080066C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80800670: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
L_80800674:
    // 0x80800674: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800678: nop

L_8080067C:
    // 0x8080067C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80800680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800684: addiu       $a1, $zero, 0xEB
    ctx->r5 = ADD32(0, 0XEB);
    // 0x80800688: jal         0x8008CC34
    // 0x8080068C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CC34(rdram, ctx);
        goto after_3;
    // 0x8080068C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
    // 0x80800690: jal         0x80000000
    // 0x80800694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbswim(rdram, ctx);
        goto after_4;
    // 0x80800694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800698: jal         0x80000030
    // 0x8080069C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800030_bsbswim(rdram, ctx);
        goto after_5;
    // 0x8080069C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808006A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006A4: jal         0x800852A8
    // 0x808006A8: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    _baswim_entrypoint_8(rdram, ctx);
        goto after_6;
    // 0x808006A8: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_6:
    // 0x808006AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006B0: jal         0x8009BC5C
    // 0x808006B4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009BC5C(rdram, ctx);
        goto after_7;
    // 0x808006B4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_7:
    // 0x808006B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006BC: jal         0x800910BC
    // 0x808006C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800910BC(rdram, ctx);
        goto after_8;
    // 0x808006C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x808006C4: sb          $zero, 0x166($s0)
    MEM_B(0X166, ctx->r16) = 0;
    // 0x808006C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808006CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808006D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808006D4: jr          $ra
    // 0x808006D8: nop

    return;
    // 0x808006D8: nop

;}
RECOMP_FUNC void func_808006DC_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006DC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x808006E0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x808006E4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x808006E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808006EC: jal         0x8008CABC
    // 0x808006F0: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808006F0: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    after_0:
    // 0x808006F4: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x808006F8: jal         0x800852C0
    // 0x808006FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_11(rdram, ctx);
        goto after_1;
    // 0x808006FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800700: jal         0x800852C8
    // 0x80800704: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_12(rdram, ctx);
        goto after_2;
    // 0x80800704: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800708: jal         0x800852D0
    // 0x8080070C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_13(rdram, ctx);
        goto after_3;
    // 0x8080070C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800710: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800714: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800718: jal         0x8008B348
    // 0x8080071C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_8008B348(rdram, ctx);
        goto after_4;
    // 0x8080071C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_4:
    // 0x80800720: beq         $v0, $zero, L_8080072C
    if (ctx->r2 == 0) {
        // 0x80800724: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_8080072C;
    }
    // 0x80800724: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800728: sb          $t6, 0x166($s0)
    MEM_B(0X166, ctx->r16) = ctx->r14;
L_8080072C:
    // 0x8080072C: jal         0x8001210C
    // 0x80800730: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001210C(rdram, ctx);
        goto after_5;
    // 0x80800730: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x80800734: bne         $v0, $zero, L_808007A4
    if (ctx->r2 != 0) {
        // 0x80800738: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007A4;
    }
    // 0x80800738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080073C: jal         0x8009C128
    // 0x80800740: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8009C128(rdram, ctx);
        goto after_6;
    // 0x80800740: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_6:
    // 0x80800744: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80800748: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080074C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80800750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800754: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80800758: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8080075C: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x80800760: jal         0x8009FBB0
    // 0x80800764: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    func_8009FBB0(rdram, ctx);
        goto after_7;
    // 0x80800764: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x80800768: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x8080076C: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x80800770: addiu       $t9, $zero, 0x3C
    ctx->r25 = ADD32(0, 0X3C);
    // 0x80800774: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x80800778: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8080077C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80800780: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800784: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800788: addiu       $a1, $zero, -0x3C
    ctx->r5 = ADD32(0, -0X3C);
    // 0x8080078C: addiu       $a2, $zero, -0x32
    ctx->r6 = ADD32(0, -0X32);
    // 0x80800790: jal         0x800BA930
    // 0x80800794: addiu       $a3, $zero, -0x3C
    ctx->r7 = ADD32(0, -0X3C);
    func_800BA930(rdram, ctx);
        goto after_8;
    // 0x80800794: addiu       $a3, $zero, -0x3C
    ctx->r7 = ADD32(0, -0X3C);
    after_8:
    // 0x80800798: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8080079C: jal         0x800BA22C
    // 0x808007A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_9;
    // 0x808007A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
L_808007A4:
    // 0x808007A4: lui         $a1, 0x3DA3
    ctx->r5 = S32(0X3DA3 << 16);
    // 0x808007A8: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    // 0x808007AC: jal         0x8008B348
    // 0x808007B0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_8008B348(rdram, ctx);
        goto after_10;
    // 0x808007B0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_10:
    // 0x808007B4: beq         $v0, $zero, L_808007EC
    if (ctx->r2 == 0) {
        // 0x808007B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007EC;
    }
    // 0x808007B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007BC: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x808007C0: lui         $a3, 0x3FB3
    ctx->r7 = S32(0X3FB3 << 16);
    // 0x808007C4: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x808007C8: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x808007CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007D0: jal         0x8009DE74
    // 0x808007D4: addiu       $a1, $zero, 0x3FD
    ctx->r5 = ADD32(0, 0X3FD);
    func_8009DE74(rdram, ctx);
        goto after_11;
    // 0x808007D4: addiu       $a1, $zero, 0x3FD
    ctx->r5 = ADD32(0, 0X3FD);
    after_11:
    // 0x808007D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007DC: jal         0x800852B8
    // 0x808007E0: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    _baswim_entrypoint_10(rdram, ctx);
        goto after_12;
    // 0x808007E0: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    after_12:
    // 0x808007E4: b           L_808007F4
    // 0x808007E8: nop

        goto L_808007F4;
    // 0x808007E8: nop

L_808007EC:
    // 0x808007EC: jal         0x800852B8
    // 0x808007F0: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    _baswim_entrypoint_10(rdram, ctx);
        goto after_13;
    // 0x808007F0: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    after_13:
L_808007F4:
    // 0x808007F4: jal         0x80085280
    // 0x808007F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_3(rdram, ctx);
        goto after_14;
    // 0x808007F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808007FC: beq         $v0, $zero, L_80800828
    if (ctx->r2 == 0) {
        // 0x80800800: lw          $a0, 0x48($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X48);
            goto L_80800828;
    }
    // 0x80800800: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80800804: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800808: beq         $v0, $at, L_80800844
    if (ctx->r2 == ctx->r1) {
        // 0x8080080C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800844;
    }
    // 0x8080080C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800810: beq         $v0, $at, L_8080085C
    if (ctx->r2 == ctx->r1) {
        // 0x80800814: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8080085C;
    }
    // 0x80800814: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800818: beq         $v0, $at, L_80800870
    if (ctx->r2 == ctx->r1) {
        // 0x8080081C: nop
    
            goto L_80800870;
    }
    // 0x8080081C: nop

    // 0x80800820: b           L_80800870
    // 0x80800824: nop

        goto L_80800870;
    // 0x80800824: nop

L_80800828:
    // 0x80800828: lui         $a1, 0x3EF5
    ctx->r5 = S32(0X3EF5 << 16);
    // 0x8080082C: jal         0x8008B348
    // 0x80800830: ori         $a1, $a1, 0x4C98
    ctx->r5 = ctx->r5 | 0X4C98;
    func_8008B348(rdram, ctx);
        goto after_15;
    // 0x80800830: ori         $a1, $a1, 0x4C98
    ctx->r5 = ctx->r5 | 0X4C98;
    after_15:
    // 0x80800834: beq         $v0, $zero, L_80800870
    if (ctx->r2 == 0) {
        // 0x80800838: addiu       $t0, $zero, 0x2B
        ctx->r8 = ADD32(0, 0X2B);
            goto L_80800870;
    }
    // 0x80800838: addiu       $t0, $zero, 0x2B
    ctx->r8 = ADD32(0, 0X2B);
    // 0x8080083C: b           L_80800870
    // 0x80800840: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
        goto L_80800870;
    // 0x80800840: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
L_80800844:
    // 0x80800844: lbu         $t1, 0x166($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X166);
    // 0x80800848: addiu       $t2, $zero, 0x39
    ctx->r10 = ADD32(0, 0X39);
    // 0x8080084C: beq         $t1, $zero, L_80800870
    if (ctx->r9 == 0) {
        // 0x80800850: nop
    
            goto L_80800870;
    }
    // 0x80800850: nop

    // 0x80800854: b           L_80800870
    // 0x80800858: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
        goto L_80800870;
    // 0x80800858: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
L_8080085C:
    // 0x8080085C: lbu         $t3, 0x166($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X166);
    // 0x80800860: addiu       $t4, $zero, 0x2C
    ctx->r12 = ADD32(0, 0X2C);
    // 0x80800864: beq         $t3, $zero, L_80800870
    if (ctx->r11 == 0) {
        // 0x80800868: nop
    
            goto L_80800870;
    }
    // 0x80800868: nop

    // 0x8080086C: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
L_80800870:
    // 0x80800870: jal         0x8009803C
    // 0x80800874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009803C(rdram, ctx);
        goto after_16;
    // 0x80800874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800878: beq         $v0, $zero, L_80800884
    if (ctx->r2 == 0) {
        // 0x8080087C: addiu       $t5, $zero, 0x157
        ctx->r13 = ADD32(0, 0X157);
            goto L_80800884;
    }
    // 0x8080087C: addiu       $t5, $zero, 0x157
    ctx->r13 = ADD32(0, 0X157);
    // 0x80800880: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
L_80800884:
    // 0x80800884: jal         0x80085278
    // 0x80800888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_2(rdram, ctx);
        goto after_17;
    // 0x80800888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x8080088C: beq         $v0, $zero, L_80800898
    if (ctx->r2 == 0) {
        // 0x80800890: addiu       $t6, $zero, 0x2D
        ctx->r14 = ADD32(0, 0X2D);
            goto L_80800898;
    }
    // 0x80800890: addiu       $t6, $zero, 0x2D
    ctx->r14 = ADD32(0, 0X2D);
    // 0x80800894: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
L_80800898:
    // 0x80800898: jal         0x8008E35C
    // 0x8080089C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_18;
    // 0x8080089C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x808008A0: bne         $v0, $zero, L_808008B0
    if (ctx->r2 != 0) {
        // 0x808008A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008B0;
    }
    // 0x808008A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008A8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x808008AC: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
L_808008B0:
    // 0x808008B0: jal         0x8009E5C8
    // 0x808008B4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009E5C8(rdram, ctx);
        goto after_19;
    // 0x808008B4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_19:
    // 0x808008B8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x808008BC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x808008C0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x808008C4: jr          $ra
    // 0x808008C8: nop

    return;
    // 0x808008C8: nop

;}
RECOMP_FUNC void func_808008CC_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808008D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808008D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808008D8: jal         0x800910BC
    // 0x808008DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800910BC(rdram, ctx);
        goto after_0;
    // 0x808008DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x808008E0: jal         0x80000104
    // 0x808008E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800104_bsbswim(rdram, ctx);
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
RECOMP_FUNC void bsbswim_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008F8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808008FC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(85, 0X1E80) << 16);
    // 0x80800900: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800904: jr          $ra
    // 0x80800908: lw          $v0, 0x1E80($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1E80));
    return;
    // 0x80800908: lw          $v0, 0x1E80($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1E80));
;}
RECOMP_FUNC void func_8080090C_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080090C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800910: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800914: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800918: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080091C: addiu       $a1, $zero, 0x71
    ctx->r5 = ADD32(0, 0X71);
    // 0x80800920: jal         0x8008CB3C
    // 0x80800924: lui         $a2, 0x3F40
    ctx->r6 = S32(0X3F40 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_0;
    // 0x80800924: lui         $a2, 0x3F40
    ctx->r6 = S32(0X3F40 << 16);
    after_0:
    // 0x80800928: jal         0x80000000
    // 0x8080092C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbswim(rdram, ctx);
        goto after_1;
    // 0x8080092C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800930: jal         0x80000030
    // 0x80800934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800030_bsbswim(rdram, ctx);
        goto after_2;
    // 0x80800934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080093C: jal         0x800852B8
    // 0x80800940: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    _baswim_entrypoint_10(rdram, ctx);
        goto after_3;
    // 0x80800940: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    after_3:
    // 0x80800944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800948: jal         0x800852A8
    // 0x8080094C: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    _baswim_entrypoint_8(rdram, ctx);
        goto after_4;
    // 0x8080094C: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_4:
    // 0x80800950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800954: jal         0x8009BC5C
    // 0x80800958: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8009BC5C(rdram, ctx);
        goto after_5;
    // 0x80800958: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_5:
    // 0x8080095C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800960: jal         0x800910BC
    // 0x80800964: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800910BC(rdram, ctx);
        goto after_6;
    // 0x80800964: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x80800968: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080096C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800970: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800974: jr          $ra
    // 0x80800978: nop

    return;
    // 0x80800978: nop

;}
RECOMP_FUNC void func_8080097C_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080097C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800980: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800984: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800988: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080098C: jal         0x8008CABC
    // 0x80800990: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800990: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800994: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800998: jal         0x800852C0
    // 0x8080099C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_11(rdram, ctx);
        goto after_1;
    // 0x8080099C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808009A0: jal         0x800852C8
    // 0x808009A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_12(rdram, ctx);
        goto after_2;
    // 0x808009A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808009A8: jal         0x800852D0
    // 0x808009AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_13(rdram, ctx);
        goto after_3;
    // 0x808009AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808009B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009B4: jal         0x800852B8
    // 0x808009B8: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    _baswim_entrypoint_10(rdram, ctx);
        goto after_4;
    // 0x808009B8: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    after_4:
    // 0x808009BC: lui         $a1, 0x3E2E
    ctx->r5 = S32(0X3E2E << 16);
    // 0x808009C0: ori         $a1, $a1, 0x147B
    ctx->r5 = ctx->r5 | 0X147B;
    // 0x808009C4: jal         0x8008B348
    // 0x808009C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_5;
    // 0x808009C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x808009CC: beq         $v0, $zero, L_808009E8
    if (ctx->r2 == 0) {
        // 0x808009D0: lui         $a2, 0x3FF3
        ctx->r6 = S32(0X3FF3 << 16);
            goto L_808009E8;
    }
    // 0x808009D0: lui         $a2, 0x3FF3
    ctx->r6 = S32(0X3FF3 << 16);
    // 0x808009D4: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808009D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009DC: addiu       $a1, $zero, 0x3FD
    ctx->r5 = ADD32(0, 0X3FD);
    // 0x808009E0: jal         0x8009DF18
    // 0x808009E4: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    func_8009DF18(rdram, ctx);
        goto after_6;
    // 0x808009E4: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    after_6:
L_808009E8:
    // 0x808009E8: lui         $a1, 0x3F2B
    ctx->r5 = S32(0X3F2B << 16);
    // 0x808009EC: ori         $a1, $a1, 0x851F
    ctx->r5 = ctx->r5 | 0X851F;
    // 0x808009F0: jal         0x8008B348
    // 0x808009F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x808009F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_7:
    // 0x808009F8: beq         $v0, $zero, L_80800A14
    if (ctx->r2 == 0) {
        // 0x808009FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A14;
    }
    // 0x808009FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A00: lui         $a2, 0x3FD9
    ctx->r6 = S32(0X3FD9 << 16);
    // 0x80800A04: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800A08: addiu       $a1, $zero, 0x3FD
    ctx->r5 = ADD32(0, 0X3FD);
    // 0x80800A0C: jal         0x8009DF18
    // 0x80800A10: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    func_8009DF18(rdram, ctx);
        goto after_8;
    // 0x80800A10: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    after_8:
L_80800A14:
    // 0x80800A14: jal         0x80085280
    // 0x80800A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_3(rdram, ctx);
        goto after_9;
    // 0x80800A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800A1C: beq         $v0, $zero, L_80800A4C
    if (ctx->r2 == 0) {
        // 0x80800A20: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800A4C;
    }
    // 0x80800A20: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800A24: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800A28: beq         $v0, $at, L_80800A74
    if (ctx->r2 == ctx->r1) {
        // 0x80800A2C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800A74;
    }
    // 0x80800A2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800A30: beq         $v0, $at, L_80800A68
    if (ctx->r2 == ctx->r1) {
        // 0x80800A34: addiu       $t7, $zero, 0x2C
        ctx->r15 = ADD32(0, 0X2C);
            goto L_80800A68;
    }
    // 0x80800A34: addiu       $t7, $zero, 0x2C
    ctx->r15 = ADD32(0, 0X2C);
    // 0x80800A38: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800A3C: beq         $v0, $at, L_80800A70
    if (ctx->r2 == ctx->r1) {
        // 0x80800A40: addiu       $t8, $zero, 0x19
        ctx->r24 = ADD32(0, 0X19);
            goto L_80800A70;
    }
    // 0x80800A40: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x80800A44: b           L_80800A74
    // 0x80800A48: nop

        goto L_80800A74;
    // 0x80800A48: nop

L_80800A4C:
    // 0x80800A4C: lui         $a1, 0x3EF5
    ctx->r5 = S32(0X3EF5 << 16);
    // 0x80800A50: jal         0x8008B348
    // 0x80800A54: ori         $a1, $a1, 0x4C98
    ctx->r5 = ctx->r5 | 0X4C98;
    func_8008B348(rdram, ctx);
        goto after_10;
    // 0x80800A54: ori         $a1, $a1, 0x4C98
    ctx->r5 = ctx->r5 | 0X4C98;
    after_10:
    // 0x80800A58: beq         $v0, $zero, L_80800A74
    if (ctx->r2 == 0) {
        // 0x80800A5C: addiu       $t6, $zero, 0x2B
        ctx->r14 = ADD32(0, 0X2B);
            goto L_80800A74;
    }
    // 0x80800A5C: addiu       $t6, $zero, 0x2B
    ctx->r14 = ADD32(0, 0X2B);
    // 0x80800A60: b           L_80800A74
    // 0x80800A64: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
        goto L_80800A74;
    // 0x80800A64: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800A68:
    // 0x80800A68: b           L_80800A74
    // 0x80800A6C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
        goto L_80800A74;
    // 0x80800A6C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80800A70:
    // 0x80800A70: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80800A74:
    // 0x80800A74: jal         0x8009803C
    // 0x80800A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009803C(rdram, ctx);
        goto after_11;
    // 0x80800A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800A7C: beq         $v0, $zero, L_80800A88
    if (ctx->r2 == 0) {
        // 0x80800A80: addiu       $t9, $zero, 0x157
        ctx->r25 = ADD32(0, 0X157);
            goto L_80800A88;
    }
    // 0x80800A80: addiu       $t9, $zero, 0x157
    ctx->r25 = ADD32(0, 0X157);
    // 0x80800A84: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80800A88:
    // 0x80800A88: jal         0x80085278
    // 0x80800A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_2(rdram, ctx);
        goto after_12;
    // 0x80800A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800A90: beq         $v0, $zero, L_80800A9C
    if (ctx->r2 == 0) {
        // 0x80800A94: addiu       $t0, $zero, 0x2D
        ctx->r8 = ADD32(0, 0X2D);
            goto L_80800A9C;
    }
    // 0x80800A94: addiu       $t0, $zero, 0x2D
    ctx->r8 = ADD32(0, 0X2D);
    // 0x80800A98: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_80800A9C:
    // 0x80800A9C: jal         0x8008E35C
    // 0x80800AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_13;
    // 0x80800AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800AA4: bne         $v0, $zero, L_80800AB4
    if (ctx->r2 != 0) {
        // 0x80800AA8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800AB4;
    }
    // 0x80800AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AAC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80800AB0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_80800AB4:
    // 0x80800AB4: jal         0x8009E5C8
    // 0x80800AB8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_14;
    // 0x80800AB8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_14:
    // 0x80800ABC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800AC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800AC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800AC8: jr          $ra
    // 0x80800ACC: nop

    return;
    // 0x80800ACC: nop

;}
RECOMP_FUNC void func_80800AD0_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800AD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800AD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800ADC: jal         0x800910BC
    // 0x80800AE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800910BC(rdram, ctx);
        goto after_0;
    // 0x80800AE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800AE4: jal         0x80000104
    // 0x80800AE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800104_bsbswim(rdram, ctx);
        goto after_1;
    // 0x80800AE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800AF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800AF4: jr          $ra
    // 0x80800AF8: nop

    return;
    // 0x80800AF8: nop

;}
RECOMP_FUNC void bsbswim_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AFC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800B00: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(85, 0X1E90) << 16);
    // 0x80800B04: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800B08: jr          $ra
    // 0x80800B0C: lw          $v0, 0x1E90($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1E90));
    return;
    // 0x80800B0C: lw          $v0, 0x1E90($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1E90));
;}
RECOMP_FUNC void func_80800B10_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B10: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80800B14: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800B18: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800B1C: jal         0x80099A58
    // 0x80800B20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80099A58(rdram, ctx);
        goto after_0;
    // 0x80800B20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800B24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B28: jal         0x80084F78
    // 0x80800B2C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    _bareact_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800B2C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x80800B30: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x80800B34: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800B38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B3C: jal         0x8008CDB8
    // 0x80800B40: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_8008CDB8(rdram, ctx);
        goto after_2;
    // 0x80800B40: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_2:
    // 0x80800B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B48: jal         0x8009D89C
    // 0x80800B4C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009D89C(rdram, ctx);
        goto after_3;
    // 0x80800B4C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_3:
    // 0x80800B50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B54: jal         0x8009C128
    // 0x80800B58: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_8009C128(rdram, ctx);
        goto after_4;
    // 0x80800B58: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x80800B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B60: jal         0x800A32C4
    // 0x80800B64: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800A32C4(rdram, ctx);
        goto after_5;
    // 0x80800B64: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_5:
    // 0x80800B68: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80800B6C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80800B70: jal         0x800F1E6C
    // 0x80800B74: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    func_800F1E6C(rdram, ctx);
        goto after_6;
    // 0x80800B74: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_6:
    // 0x80800B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B7C: jal         0x8009C914
    // 0x80800B80: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009C914(rdram, ctx);
        goto after_7;
    // 0x80800B80: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_7:
    // 0x80800B84: jal         0x8009C974
    // 0x80800B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_8;
    // 0x80800B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800B8C: jal         0x80084F90
    // 0x80800B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bareact_entrypoint_4(rdram, ctx);
        goto after_9;
    // 0x80800B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800B94: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800B98: jal         0x8009B9B0
    // 0x80800B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_10;
    // 0x80800B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BA4: jal         0x8009B9C0
    // 0x80800BA8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009B9C0(rdram, ctx);
        goto after_11;
    // 0x80800BA8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_11:
    // 0x80800BAC: jal         0x8009BB00
    // 0x80800BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_12;
    // 0x80800BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800BB4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BBC: jal         0x8009BA68
    // 0x80800BC0: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009BA68(rdram, ctx);
        goto after_13;
    // 0x80800BC0: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_13:
    // 0x80800BC4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80800BC8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800BCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800BD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800BD8: jal         0x8009FFD8
    // 0x80800BDC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_14;
    // 0x80800BDC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_14:
    // 0x80800BE0: jal         0x8008E944
    // 0x80800BE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_15;
    // 0x80800BE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800BE8: jal         0x8009514C
    // 0x80800BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009514C(rdram, ctx);
        goto after_16;
    // 0x80800BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800BF0: jal         0x80000030
    // 0x80800BF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800030_bsbswim(rdram, ctx);
        goto after_17;
    // 0x80800BF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800BF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800BFC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800C00: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80800C04: jr          $ra
    // 0x80800C08: nop

    return;
    // 0x80800C08: nop

;}
RECOMP_FUNC void func_80800C0C_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C0C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800C10: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800C14: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80800C18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800C1C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x80800C20: jal         0x8009C128
    // 0x80800C24: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800C24: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x80800C28: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80800C2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800C30: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80800C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C38: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80800C3C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80800C40: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x80800C44: jal         0x8009FBB0
    // 0x80800C48: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    func_8009FBB0(rdram, ctx);
        goto after_1;
    // 0x80800C48: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x80800C4C: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x80800C50: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x80800C54: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x80800C58: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80800C5C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80800C60: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80800C64: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800C68: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800C6C: addiu       $a1, $zero, -0x3C
    ctx->r5 = ADD32(0, -0X3C);
    // 0x80800C70: addiu       $a2, $zero, -0x32
    ctx->r6 = ADD32(0, -0X32);
    // 0x80800C74: jal         0x800BA930
    // 0x80800C78: addiu       $a3, $zero, -0x3C
    ctx->r7 = ADD32(0, -0X3C);
    func_800BA930(rdram, ctx);
        goto after_2;
    // 0x80800C78: addiu       $a3, $zero, -0x3C
    ctx->r7 = ADD32(0, -0X3C);
    after_2:
    // 0x80800C7C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800C80: jal         0x800BA22C
    // 0x80800C84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_3;
    // 0x80800C84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80800C88: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800C8C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800C90: jal         0x8008CB10
    // 0x80800C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_4;
    // 0x80800C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800C98: beq         $v0, $zero, L_80800CA8
    if (ctx->r2 == 0) {
        // 0x80800C9C: nop
    
            goto L_80800CA8;
    }
    // 0x80800C9C: nop

    // 0x80800CA0: jal         0x800951B4
    // 0x80800CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_5;
    // 0x80800CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_80800CA8:
    // 0x80800CA8: jal         0x8008CABC
    // 0x80800CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CABC(rdram, ctx);
        goto after_6;
    // 0x80800CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800CB0: jal         0x8008B324
    // 0x80800CB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B324(rdram, ctx);
        goto after_7;
    // 0x80800CB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x80800CB8: beq         $v0, $zero, L_80800CC8
    if (ctx->r2 == 0) {
        // 0x80800CBC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800CC8;
    }
    // 0x80800CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CC0: addiu       $t9, $zero, 0x2B
    ctx->r25 = ADD32(0, 0X2B);
    // 0x80800CC4: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
L_80800CC8:
    // 0x80800CC8: jal         0x8009E5C8
    // 0x80800CCC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_8009E5C8(rdram, ctx);
        goto after_8;
    // 0x80800CCC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_8:
    // 0x80800CD0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80800CD4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80800CD8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80800CDC: jr          $ra
    // 0x80800CE0: nop

    return;
    // 0x80800CE0: nop

;}
RECOMP_FUNC void func_80800CE4_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800CE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800CEC: jal         0x8009BD88
    // 0x80800CF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BD88(rdram, ctx);
        goto after_0;
    // 0x80800CF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800CF4: jal         0x8008E95C
    // 0x80800CF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E95C(rdram, ctx);
        goto after_1;
    // 0x80800CF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800CFC: jal         0x800951B4
    // 0x80800D00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800951B4(rdram, ctx);
        goto after_2;
    // 0x80800D00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800D04: jal         0x80000104
    // 0x80800D08: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800104_bsbswim(rdram, ctx);
        goto after_3;
    // 0x80800D08: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80800D0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D14: jr          $ra
    // 0x80800D18: nop

    return;
    // 0x80800D18: nop

;}
RECOMP_FUNC void bsbswim_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D1C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800D20: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(85, 0X1EA0) << 16);
    // 0x80800D24: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800D28: jr          $ra
    // 0x80800D2C: lw          $v0, 0x1EA0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1EA0));
    return;
    // 0x80800D2C: lw          $v0, 0x1EA0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1EA0));
;}
RECOMP_FUNC void func_80800D30_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D38: jal         0x80085148
    // 0x80800D3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _baspin_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800D3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D40: jal         0x80000104
    // 0x80800D44: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800104_bsbswim(rdram, ctx);
        goto after_1;
    // 0x80800D44: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D50: jr          $ra
    // 0x80800D54: nop

    return;
    // 0x80800D54: nop

;}
RECOMP_FUNC void func_80800D58_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800D5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800D60: jal         0x80000030
    // 0x80800D64: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80800030_bsbswim(rdram, ctx);
        goto after_0;
    // 0x80800D64: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D68: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80800D6C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800D70: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800D74: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800D78: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800D7C: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    // 0x80800D80: jal         0x80085150
    // 0x80800D84: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    _baspin_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800D84: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x80800D88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800D8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800D90: jr          $ra
    // 0x80800D94: nop

    return;
    // 0x80800D94: nop

;}
RECOMP_FUNC void func_80800D98_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800D9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800DA0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800DA4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80800DA8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x80800DAC: jal         0x800914FC
    // 0x80800DB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800914FC(rdram, ctx);
        goto after_0;
    // 0x80800DB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80800DB4: jal         0x80085158
    // 0x80800DB8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _baspin_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x80800DB8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800DBC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800DC0: bne         $v0, $at, L_80800DCC
    if (ctx->r2 != ctx->r1) {
        // 0x80800DC4: addiu       $t6, $zero, 0x2B
        ctx->r14 = ADD32(0, 0X2B);
            goto L_80800DCC;
    }
    // 0x80800DC4: addiu       $t6, $zero, 0x2B
    ctx->r14 = ADD32(0, 0X2B);
    // 0x80800DC8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80800DCC:
    // 0x80800DCC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800DD0: jal         0x8009E5C8
    // 0x80800DD4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80800DD4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80800DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800DDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800DE0: jr          $ra
    // 0x80800DE4: nop

    return;
    // 0x80800DE4: nop

;}
RECOMP_FUNC void bsbswim_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DE8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800DEC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(85, 0X1EB0) << 16);
    // 0x80800DF0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800DF4: jr          $ra
    // 0x80800DF8: lw          $v0, 0x1EB0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1EB0));
    return;
    // 0x80800DF8: lw          $v0, 0x1EB0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1EB0));
;}
RECOMP_FUNC void func_80800DFC_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800E00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800E04: jal         0x800845D0
    // 0x80800E08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800E08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800E0C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800E10: jal         0x800961AC
    // 0x80800E14: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800961AC(rdram, ctx);
        goto after_1;
    // 0x80800E14: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80800E18: jal         0x80000104
    // 0x80800E1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800104_bsbswim(rdram, ctx);
        goto after_2;
    // 0x80800E1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800E24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800E28: jr          $ra
    // 0x80800E2C: nop

    return;
    // 0x80800E2C: nop

;}
RECOMP_FUNC void func_80800E30_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800E34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800E38: jal         0x80000030
    // 0x80800E3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800030_bsbswim(rdram, ctx);
        goto after_0;
    // 0x80800E3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800E40: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800E44: jal         0x800961AC
    // 0x80800E48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_1;
    // 0x80800E48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800E4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800E50: jal         0x800845D8
    // 0x80800E54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x80800E54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80800E58: lui         $a2, 0x3F15
    ctx->r6 = S32(0X3F15 << 16);
    // 0x80800E5C: ori         $a2, $a2, 0x119D
    ctx->r6 = ctx->r6 | 0X119D;
    // 0x80800E60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800E64: jal         0x800845E0
    // 0x80800E68: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    _babounce_entrypoint_5(rdram, ctx);
        goto after_3;
    // 0x80800E68: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_3:
    // 0x80800E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800E70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800E74: jr          $ra
    // 0x80800E78: nop

    return;
    // 0x80800E78: nop

;}
RECOMP_FUNC void func_80800E7C_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800E80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800E84: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800E88: jal         0x80084600
    // 0x80800E8C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _babounce_entrypoint_9(rdram, ctx);
        goto after_0;
    // 0x80800E8C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800E90: beq         $v0, $zero, L_80800E9C
    if (ctx->r2 == 0) {
        // 0x80800E94: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80800E9C;
    }
    // 0x80800E94: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800E98: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
L_80800E9C:
    // 0x80800E9C: jal         0x8009E5C8
    // 0x80800EA0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_1;
    // 0x80800EA0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800EA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800EAC: jr          $ra
    // 0x80800EB0: nop

    return;
    // 0x80800EB0: nop

;}
RECOMP_FUNC void bsbswim_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EB4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800EB8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(85, 0X1EC0) << 16);
    // 0x80800EBC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800EC0: jr          $ra
    // 0x80800EC4: lw          $v0, 0x1EC0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1EC0));
    return;
    // 0x80800EC4: lw          $v0, 0x1EC0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1EC0));
;}
RECOMP_FUNC void func_80800EC8_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800ECC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800ED0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800ED4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800ED8: jal         0x800C6DA0
    // 0x80800EDC: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    func_800C6DA0(rdram, ctx);
        goto after_0;
    // 0x80800EDC: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    after_0:
    // 0x80800EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EE4: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x80800EE8: jal         0x8008CCBC
    // 0x80800EEC: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x80800EEC: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_1:
    // 0x80800EF0: jal         0x80000000
    // 0x80800EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbswim(rdram, ctx);
        goto after_2;
    // 0x80800EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800EF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EFC: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x80800F00: jal         0x8009C99C
    // 0x80800F04: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x80800F04: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_3:
    // 0x80800F08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F0C: jal         0x8009B94C
    // 0x80800F10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009B94C(rdram, ctx);
        goto after_4;
    // 0x80800F10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80800F14: jal         0x80000030
    // 0x80800F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800030_bsbswim(rdram, ctx);
        goto after_5;
    // 0x80800F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800F1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F20: jal         0x800852B8
    // 0x80800F24: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    _baswim_entrypoint_10(rdram, ctx);
        goto after_6;
    // 0x80800F24: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x80800F28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F2C: jal         0x800852A8
    // 0x80800F30: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    _baswim_entrypoint_8(rdram, ctx);
        goto after_7;
    // 0x80800F30: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_7:
    // 0x80800F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F38: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x80800F3C: jal         0x8009BFE4
    // 0x80800F40: lui         $a2, 0x4020
    ctx->r6 = S32(0X4020 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_8;
    // 0x80800F40: lui         $a2, 0x4020
    ctx->r6 = S32(0X4020 << 16);
    after_8:
    // 0x80800F44: jal         0x8009D874
    // 0x80800F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D874(rdram, ctx);
        goto after_9;
    // 0x80800F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800F4C: sb          $zero, 0x164($s0)
    MEM_B(0X164, ctx->r16) = 0;
    // 0x80800F50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800F54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800F58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800F5C: jr          $ra
    // 0x80800F60: nop

    return;
    // 0x80800F60: nop

;}
RECOMP_FUNC void func_80800F64_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800F68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800F6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800F70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800F74: jal         0x8008CABC
    // 0x80800F78: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800F78: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800F7C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800F80: lbu         $v1, 0x164($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X164);
    // 0x80800F84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800F88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F8C: beq         $v1, $zero, L_80800FA4
    if (ctx->r3 == 0) {
        // 0x80800F90: nop
    
            goto L_80800FA4;
    }
    // 0x80800F90: nop

    // 0x80800F94: beq         $v1, $at, L_80801000
    if (ctx->r3 == ctx->r1) {
        // 0x80800F98: nop
    
            goto L_80801000;
    }
    // 0x80800F98: nop

    // 0x80800F9C: b           L_80801030
    // 0x80800FA0: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
        goto L_80801030;
    // 0x80800FA0: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
L_80800FA4:
    // 0x80800FA4: jal         0x8009BF5C
    // 0x80800FA8: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    func_8009BF5C(rdram, ctx);
        goto after_1;
    // 0x80800FA8: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_1:
    // 0x80800FAC: lui         $a1, 0x3E95
    ctx->r5 = S32(0X3E95 << 16);
    // 0x80800FB0: ori         $a1, $a1, 0x4C98
    ctx->r5 = ctx->r5 | 0X4C98;
    // 0x80800FB4: jal         0x8008B348
    // 0x80800FB8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_2;
    // 0x80800FB8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800FBC: beql        $v0, $zero, L_80801030
    if (ctx->r2 == 0) {
        // 0x80800FC0: lui         $a1, 0x3F19
        ctx->r5 = S32(0X3F19 << 16);
            goto L_80801030;
    }
    goto skip_0;
    // 0x80800FC0: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    skip_0:
    // 0x80800FC4: jal         0x80085270
    // 0x80800FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x80800FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800FCC: beql        $v0, $zero, L_80800FE0
    if (ctx->r2 == 0) {
        // 0x80800FD0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800FE0;
    }
    goto skip_1;
    // 0x80800FD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800FD4: jal         0x800A0E64
    // 0x80800FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A0E64(rdram, ctx);
        goto after_4;
    // 0x80800FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800FDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800FE0:
    // 0x80800FE0: jal         0x800852B8
    // 0x80800FE4: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    _baswim_entrypoint_10(rdram, ctx);
        goto after_5;
    // 0x80800FE4: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    after_5:
    // 0x80800FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FEC: jal         0x800852A8
    // 0x80800FF0: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    _baswim_entrypoint_8(rdram, ctx);
        goto after_6;
    // 0x80800FF0: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_6:
    // 0x80800FF4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800FF8: b           L_8080102C
    // 0x80800FFC: sb          $t6, 0x164($s0)
    MEM_B(0X164, ctx->r16) = ctx->r14;
        goto L_8080102C;
    // 0x80800FFC: sb          $t6, 0x164($s0)
    MEM_B(0X164, ctx->r16) = ctx->r14;
L_80801000:
    // 0x80801000: jal         0x800852C0
    // 0x80801004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_11(rdram, ctx);
        goto after_7;
    // 0x80801004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80801008: jal         0x800852D0
    // 0x8080100C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baswim_entrypoint_13(rdram, ctx);
        goto after_8;
    // 0x8080100C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80801010: lui         $a1, 0x3F14
    ctx->r5 = S32(0X3F14 << 16);
    // 0x80801014: ori         $a1, $a1, 0x7AE1
    ctx->r5 = ctx->r5 | 0X7AE1;
    // 0x80801018: jal         0x8008B348
    // 0x8080101C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_9;
    // 0x8080101C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_9:
    // 0x80801020: beq         $v0, $zero, L_8080102C
    if (ctx->r2 == 0) {
        // 0x80801024: addiu       $t7, $zero, 0x2B
        ctx->r15 = ADD32(0, 0X2B);
            goto L_8080102C;
    }
    // 0x80801024: addiu       $t7, $zero, 0x2B
    ctx->r15 = ADD32(0, 0X2B);
    // 0x80801028: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_8080102C:
    // 0x8080102C: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
L_80801030:
    // 0x80801030: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80801034: jal         0x8008B348
    // 0x80801038: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_10;
    // 0x80801038: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_10:
    // 0x8080103C: beq         $v0, $zero, L_80801050
    if (ctx->r2 == 0) {
        // 0x80801040: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801050;
    }
    // 0x80801040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801044: addiu       $a1, $zero, 0x3FD
    ctx->r5 = ADD32(0, 0X3FD);
    // 0x80801048: jal         0x8009DE38
    // 0x8080104C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_11;
    // 0x8080104C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_11:
L_80801050:
    // 0x80801050: jal         0x8008E35C
    // 0x80801054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_12;
    // 0x80801054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80801058: bne         $v0, $zero, L_80801068
    if (ctx->r2 != 0) {
        // 0x8080105C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801068;
    }
    // 0x8080105C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801060: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80801064: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80801068:
    // 0x80801068: jal         0x8009E5C8
    // 0x8080106C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_13;
    // 0x8080106C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_13:
    // 0x80801070: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801074: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801078: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080107C: jr          $ra
    // 0x80801080: nop

    return;
    // 0x80801080: nop

;}
RECOMP_FUNC void func_80801084_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801084: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801088: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080108C: jal         0x80000104
    // 0x80801090: nop

    func_80800104_bsbswim(rdram, ctx);
        goto after_0;
    // 0x80801090: nop

    after_0:
    // 0x80801094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080109C: jr          $ra
    // 0x808010A0: nop

    return;
    // 0x808010A0: nop

;}
RECOMP_FUNC void bsbswim_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010A4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808010A8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(85, 0X1ED0) << 16);
    // 0x808010AC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808010B0: jr          $ra
    // 0x808010B4: lw          $v0, 0x1ED0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1ED0));
    return;
    // 0x808010B4: lw          $v0, 0x1ED0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1ED0));
;}
RECOMP_FUNC void func_808010B8_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808010BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808010C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808010C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808010C8: jal         0x8009E6C4
    // 0x808010CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8009E6C4(rdram, ctx);
        goto after_0;
    // 0x808010CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x808010D0: sltu        $a1, $zero, $v0
    ctx->r5 = 0 < ctx->r2 ? 1 : 0;
    // 0x808010D4: bnel        $a1, $zero, L_808010EC
    if (ctx->r5 != 0) {
        // 0x808010D8: sw          $a1, 0x15C($s0)
        MEM_W(0X15C, ctx->r16) = ctx->r5;
            goto L_808010EC;
    }
    goto skip_0;
    // 0x808010D8: sw          $a1, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r5;
    skip_0:
    // 0x808010DC: jal         0x800F8B64
    // 0x808010E0: nop

    func_800F8B64(rdram, ctx);
        goto after_1;
    // 0x808010E0: nop

    after_1:
    // 0x808010E4: sltu        $a1, $zero, $v0
    ctx->r5 = 0 < ctx->r2 ? 1 : 0;
    // 0x808010E8: sw          $a1, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r5;
L_808010EC:
    // 0x808010EC: jal         0x80085208
    // 0x808010F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x808010F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808010F4: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x808010F8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808010FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801100: jal         0x8008CB3C
    // 0x80801104: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    func_8008CB3C(rdram, ctx);
        goto after_3;
    // 0x80801104: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    after_3:
    // 0x80801108: jal         0x80000000
    // 0x8080110C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbswim(rdram, ctx);
        goto after_4;
    // 0x8080110C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801110: jal         0x80000030
    // 0x80801114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800030_bsbswim(rdram, ctx);
        goto after_5;
    // 0x80801114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080111C: jal         0x8009BC5C
    // 0x80801120: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009BC5C(rdram, ctx);
        goto after_6;
    // 0x80801120: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_6:
    // 0x80801124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801128: jal         0x8009B94C
    // 0x8080112C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009B94C(rdram, ctx);
        goto after_7;
    // 0x8080112C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80801130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801134: jal         0x8009BA9C
    // 0x80801138: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_8;
    // 0x80801138: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x8080113C: lui         $a1, 0x4389
    ctx->r5 = S32(0X4389 << 16);
    // 0x80801140: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80801144: jal         0x8009BF5C
    // 0x80801148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BF5C(rdram, ctx);
        goto after_9;
    // 0x80801148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080114C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801150: jal         0x8009C4CC
    // 0x80801154: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_10;
    // 0x80801154: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_10:
    // 0x80801158: jal         0x8008E944
    // 0x8080115C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_11;
    // 0x8080115C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80801160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80801168: jal         0x80085338
    // 0x8080116C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    _batimer_set(rdram, ctx);
        goto after_12;
    // 0x8080116C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_12:
    // 0x80801170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801174: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801178: jal         0x80085338
    // 0x8080117C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    _batimer_set(rdram, ctx);
        goto after_13;
    // 0x8080117C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_13:
    // 0x80801180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801184: jal         0x800910BC
    // 0x80801188: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800910BC(rdram, ctx);
        goto after_14;
    // 0x80801188: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_14:
    // 0x8080118C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801190: addiu       $a1, $zero, 0x467
    ctx->r5 = ADD32(0, 0X467);
    // 0x80801194: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801198: jal         0x8009DF18
    // 0x8080119C: addiu       $a3, $zero, 0x5DC0
    ctx->r7 = ADD32(0, 0X5DC0);
    func_8009DF18(rdram, ctx);
        goto after_15;
    // 0x8080119C: addiu       $a3, $zero, 0x5DC0
    ctx->r7 = ADD32(0, 0X5DC0);
    after_15:
    // 0x808011A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011A4: jal         0x80085298
    // 0x808011A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _baswim_entrypoint_6(rdram, ctx);
        goto after_16;
    // 0x808011A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x808011AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808011B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808011B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808011B8: jr          $ra
    // 0x808011BC: nop

    return;
    // 0x808011BC: nop

;}
RECOMP_FUNC void func_808011C0_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808011C4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x808011C8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x808011CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808011D0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x808011D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808011D8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x808011DC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808011E0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x808011E4: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x808011E8: lui         $a1, 0xC2B4
    ctx->r5 = S32(0XC2B4 << 16);
    // 0x808011EC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x808011F0: jal         0x800EF4E4
    // 0x808011F4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800EF4E4(rdram, ctx);
        goto after_0;
    // 0x808011F4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x808011F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011FC: jal         0x8009B94C
    // 0x80801200: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_8009B94C(rdram, ctx);
        goto after_1;
    // 0x80801200: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_1:
    // 0x80801204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801208: jal         0x8009BA9C
    // 0x8080120C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_8009BA9C(rdram, ctx);
        goto after_2;
    // 0x8080120C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_2:
    // 0x80801210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801214: jal         0x800852F8
    // 0x80801218: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_increment(rdram, ctx);
        goto after_3;
    // 0x80801218: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8080121C: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x80801220: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80801224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801228: jal         0x80085310
    // 0x8080122C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_isAt_rising(rdram, ctx);
        goto after_4;
    // 0x8080122C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80801230: bne         $v0, $zero, L_80801264
    if (ctx->r2 != 0) {
        // 0x80801234: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801264;
    }
    // 0x80801234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801238: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x8080123C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80801240: jal         0x80085310
    // 0x80801244: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_isAt_rising(rdram, ctx);
        goto after_5;
    // 0x80801244: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80801248: bne         $v0, $zero, L_80801264
    if (ctx->r2 != 0) {
        // 0x8080124C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801264;
    }
    // 0x8080124C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801250: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x80801254: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80801258: jal         0x80085310
    // 0x8080125C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_isAt_rising(rdram, ctx);
        goto after_6;
    // 0x8080125C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x80801260: beq         $v0, $zero, L_80801278
    if (ctx->r2 == 0) {
        // 0x80801264: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801278;
    }
L_80801264:
    // 0x80801264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801268: addiu       $a1, $zero, 0x468
    ctx->r5 = ADD32(0, 0X468);
    // 0x8080126C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801270: jal         0x8009DF18
    // 0x80801274: addiu       $a3, $zero, 0x5DC0
    ctx->r7 = ADD32(0, 0X5DC0);
    func_8009DF18(rdram, ctx);
        goto after_7;
    // 0x80801274: addiu       $a3, $zero, 0x5DC0
    ctx->r7 = ADD32(0, 0X5DC0);
    after_7:
L_80801278:
    // 0x80801278: jal         0x8001210C
    // 0x8080127C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001210C(rdram, ctx);
        goto after_8;
    // 0x8080127C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x80801280: bne         $v0, $zero, L_808012F0
    if (ctx->r2 != 0) {
        // 0x80801284: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808012F0;
    }
    // 0x80801284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801288: jal         0x8009C128
    // 0x8080128C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8009C128(rdram, ctx);
        goto after_9;
    // 0x8080128C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_9:
    // 0x80801290: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80801294: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80801298: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8080129C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012A0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x808012A4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x808012A8: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x808012AC: jal         0x8009FBB0
    // 0x808012B0: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    func_8009FBB0(rdram, ctx);
        goto after_10;
    // 0x808012B0: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    after_10:
    // 0x808012B4: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x808012B8: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x808012BC: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x808012C0: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x808012C4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x808012C8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x808012CC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808012D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808012D4: addiu       $a1, $zero, -0x3C
    ctx->r5 = ADD32(0, -0X3C);
    // 0x808012D8: addiu       $a2, $zero, -0x32
    ctx->r6 = ADD32(0, -0X32);
    // 0x808012DC: jal         0x800BA930
    // 0x808012E0: addiu       $a3, $zero, -0x3C
    ctx->r7 = ADD32(0, -0X3C);
    func_800BA930(rdram, ctx);
        goto after_11;
    // 0x808012E0: addiu       $a3, $zero, -0x3C
    ctx->r7 = ADD32(0, -0X3C);
    after_11:
    // 0x808012E4: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x808012E8: jal         0x800BA22C
    // 0x808012EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_12;
    // 0x808012EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
L_808012F0:
    // 0x808012F0: lui         $a2, 0x3FC6
    ctx->r6 = S32(0X3FC6 << 16);
    // 0x808012F4: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808012F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012FC: jal         0x80085320
    // 0x80801300: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_isGreaterThan(rdram, ctx);
        goto after_13;
    // 0x80801300: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x80801304: beq         $v0, $zero, L_80801314
    if (ctx->r2 == 0) {
        // 0x80801308: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801314;
    }
    // 0x80801308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080130C: jal         0x8009BA58
    // 0x80801310: lui         $a1, 0xC248
    ctx->r5 = S32(0XC248 << 16);
    func_8009BA58(rdram, ctx);
        goto after_14;
    // 0x80801310: lui         $a1, 0xC248
    ctx->r5 = S32(0XC248 << 16);
    after_14:
L_80801314:
    // 0x80801314: lui         $a2, 0x3FF3
    ctx->r6 = S32(0X3FF3 << 16);
    // 0x80801318: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8080131C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801320: jal         0x80085310
    // 0x80801324: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_isAt_rising(rdram, ctx);
        goto after_15;
    // 0x80801324: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x80801328: beq         $v0, $zero, L_80801388
    if (ctx->r2 == 0) {
        // 0x8080132C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801388;
    }
    // 0x8080132C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801330: jal         0x800A4DA4
    // 0x80801334: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800A4DA4(rdram, ctx);
        goto after_16;
    // 0x80801334: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_16:
    // 0x80801338: jal         0x800A4CA8
    // 0x8080133C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_17;
    // 0x8080133C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80801340: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80801344: jal         0x80089288
    // 0x80801348: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    _ncbadie_entrypoint_3(rdram, ctx);
        goto after_18;
    // 0x80801348: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_18:
    // 0x8080134C: lw          $t9, 0x15C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X15C);
    // 0x80801350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801354: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80801358: beq         $t9, $zero, L_80801370
    if (ctx->r25 == 0) {
        // 0x8080135C: nop
    
            goto L_80801370;
    }
    // 0x8080135C: nop

    // 0x80801360: jal         0x80085338
    // 0x80801364: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    _batimer_set(rdram, ctx);
        goto after_19;
    // 0x80801364: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_19:
    // 0x80801368: b           L_8080138C
    // 0x8080136C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080138C;
    // 0x8080136C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801370:
    // 0x80801370: jal         0x800A0180
    // 0x80801374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A0180(rdram, ctx);
        goto after_20;
    // 0x80801374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80801378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080137C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80801380: jal         0x80085338
    // 0x80801384: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    _batimer_set(rdram, ctx);
        goto after_21;
    // 0x80801384: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    after_21:
L_80801388:
    // 0x80801388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080138C:
    // 0x8080138C: jal         0x800852F0
    // 0x80801390: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_22;
    // 0x80801390: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_22:
    // 0x80801394: beql        $v0, $zero, L_808013A8
    if (ctx->r2 == 0) {
        // 0x80801398: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808013A8;
    }
    goto skip_0;
    // 0x80801398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8080139C: jal         0x80085200
    // 0x808013A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_0(rdram, ctx);
        goto after_23;
    // 0x808013A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x808013A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808013A8:
    // 0x808013A8: jal         0x8009E5C8
    // 0x808013AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_24;
    // 0x808013AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_24:
    // 0x808013B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x808013B4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x808013B8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x808013BC: jr          $ra
    // 0x808013C0: nop

    return;
    // 0x808013C0: nop

;}
RECOMP_FUNC void func_808013C4_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808013C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808013C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808013CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808013D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808013D4: jal         0x80085298
    // 0x808013D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _baswim_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x808013D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x808013DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808013E0: jal         0x800910BC
    // 0x808013E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800910BC(rdram, ctx);
        goto after_1;
    // 0x808013E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808013E8: jal         0x800A4E30
    // 0x808013EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4E30(rdram, ctx);
        goto after_2;
    // 0x808013EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808013F0: jal         0x8008E95C
    // 0x808013F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E95C(rdram, ctx);
        goto after_3;
    // 0x808013F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808013F8: jal         0x80000104
    // 0x808013FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800104_bsbswim(rdram, ctx);
        goto after_4;
    // 0x808013FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801400: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801404: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801408: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080140C: jr          $ra
    // 0x80801410: nop

    return;
    // 0x80801410: nop

;}
RECOMP_FUNC void bsbswim_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801414: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801418: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(85, 0X1EE0) << 16);
    // 0x8080141C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801420: jr          $ra
    // 0x80801424: lw          $v0, 0x1EE0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1EE0));
    return;
    // 0x80801424: lw          $v0, 0x1EE0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1EE0));
;}
RECOMP_FUNC void func_80801428_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801428: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080142C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801430: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801434: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801438: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x8080143C: jal         0x8008CB3C
    // 0x80801440: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_0;
    // 0x80801440: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
    // 0x80801444: jal         0x80000000
    // 0x80801448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbswim(rdram, ctx);
        goto after_1;
    // 0x80801448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080144C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801450: jal         0x8009B94C
    // 0x80801454: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009B94C(rdram, ctx);
        goto after_2;
    // 0x80801454: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80801458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080145C: jal         0x800852B0
    // 0x80801460: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    _baswim_entrypoint_9(rdram, ctx);
        goto after_3;
    // 0x80801460: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80801464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801468: jal         0x8009BA9C
    // 0x8080146C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_4;
    // 0x8080146C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80801470: jal         0x80000030
    // 0x80801474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800030_bsbswim(rdram, ctx);
        goto after_5;
    // 0x80801474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801478: jal         0x800A0024
    // 0x8080147C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A0024(rdram, ctx);
        goto after_6;
    // 0x8080147C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80801480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801484: jal         0x80085298
    // 0x80801488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _baswim_entrypoint_6(rdram, ctx);
        goto after_7;
    // 0x80801488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x8080148C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801490: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801494: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801498: jr          $ra
    // 0x8080149C: nop

    return;
    // 0x8080149C: nop

;}
RECOMP_FUNC void func_808014A0_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808014A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808014A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808014A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808014AC: jal         0x800A0024
    // 0x808014B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_800A0024(rdram, ctx);
        goto after_0;
    // 0x808014B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x808014B4: jal         0x8008E35C
    // 0x808014B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008E35C(rdram, ctx);
        goto after_1;
    // 0x808014B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808014BC: bne         $v0, $zero, L_808014C8
    if (ctx->r2 != 0) {
        // 0x808014C0: addiu       $t6, $zero, 0x74
        ctx->r14 = ADD32(0, 0X74);
            goto L_808014C8;
    }
    // 0x808014C0: addiu       $t6, $zero, 0x74
    ctx->r14 = ADD32(0, 0X74);
    // 0x808014C4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_808014C8:
    // 0x808014C8: jal         0x8009CC68
    // 0x808014CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009CC68(rdram, ctx);
        goto after_2;
    // 0x808014CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x808014D0: bne         $v0, $zero, L_808014DC
    if (ctx->r2 != 0) {
        // 0x808014D4: addiu       $t7, $zero, 0x2B
        ctx->r15 = ADD32(0, 0X2B);
            goto L_808014DC;
    }
    // 0x808014D4: addiu       $t7, $zero, 0x2B
    ctx->r15 = ADD32(0, 0X2B);
    // 0x808014D8: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_808014DC:
    // 0x808014DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808014E0: jal         0x8009E5C8
    // 0x808014E4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x808014E4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x808014E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808014EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808014F0: jr          $ra
    // 0x808014F4: nop

    return;
    // 0x808014F4: nop

;}
RECOMP_FUNC void func_808014F8_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808014F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808014FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801500: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80801504: jal         0x80085298
    // 0x80801508: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _baswim_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x80801508: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8080150C: jal         0x80000104
    // 0x80801510: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800104_bsbswim(rdram, ctx);
        goto after_1;
    // 0x80801510: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080151C: jr          $ra
    // 0x80801520: nop

    return;
    // 0x80801520: nop

;}
RECOMP_FUNC void bsbswim_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801524: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801528: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(85, 0X1EF0) << 16);
    // 0x8080152C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801530: jr          $ra
    // 0x80801534: lw          $v0, 0x1EF0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1EF0));
    return;
    // 0x80801534: lw          $v0, 0x1EF0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1EF0));
;}
RECOMP_FUNC void func_80801538_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801538: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8080153C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801540: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80801544: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80801548: jal         0x8008CABC
    // 0x8080154C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080154C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80801550: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80801554: jal         0x80000030
    // 0x80801558: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800030_bsbswim(rdram, ctx);
        goto after_1;
    // 0x80801558: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x8080155C: jal         0x800A046C
    // 0x80801560: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A046C(rdram, ctx);
        goto after_2;
    // 0x80801560: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80801564: jal         0x800A3298
    // 0x80801568: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A3298(rdram, ctx);
        goto after_3;
    // 0x80801568: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x8080156C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80801570: jal         0x8009E710
    // 0x80801574: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009E710(rdram, ctx);
        goto after_4;
    // 0x80801574: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80801578: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x8080157C: bne         $v0, $at, L_80801594
    if (ctx->r2 != ctx->r1) {
        // 0x80801580: lui         $at, 0x4416
        ctx->r1 = S32(0X4416 << 16);
            goto L_80801594;
    }
    // 0x80801580: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80801584: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80801588: jal         0x800F0E00
    // 0x8080158C: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    func_800F0E00(rdram, ctx);
        goto after_5;
    // 0x8080158C: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    after_5:
    // 0x80801590: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
L_80801594:
    // 0x80801594: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80801598: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080159C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x808015A0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x808015A4: nop

    // 0x808015A8: bc1f        L_80801600
    if (!c1cs) {
        // 0x808015AC: nop
    
            goto L_80801600;
    }
    // 0x808015AC: nop

    // 0x808015B0: jal         0x8008AF24
    // 0x808015B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_6;
    // 0x808015B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808015B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015BC: jal         0x8008AED4
    // 0x808015C0: addiu       $a1, $zero, 0xEA
    ctx->r5 = ADD32(0, 0XEA);
    func_8008AED4(rdram, ctx);
        goto after_7;
    // 0x808015C0: addiu       $a1, $zero, 0xEA
    ctx->r5 = ADD32(0, 0XEA);
    after_7:
    // 0x808015C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015C8: jal         0x8008B134
    // 0x808015CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x808015CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x808015D0: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x808015D4: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x808015D8: jal         0x8008B1BC
    // 0x808015DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_9;
    // 0x808015DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808015E0: lui         $a1, 0x3F52
    ctx->r5 = S32(0X3F52 << 16);
    // 0x808015E4: ori         $a1, $a1, 0x5BC
    ctx->r5 = ctx->r5 | 0X5BC;
    // 0x808015E8: jal         0x8008B24C
    // 0x808015EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_10;
    // 0x808015EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808015F0: jal         0x8008B064
    // 0x808015F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_11;
    // 0x808015F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808015F8: b           L_8080164C
    // 0x808015FC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
        goto L_8080164C;
    // 0x808015FC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
L_80801600:
    // 0x80801600: jal         0x8008AF24
    // 0x80801604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_12;
    // 0x80801604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80801608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080160C: jal         0x8008AED4
    // 0x80801610: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
    func_8008AED4(rdram, ctx);
        goto after_13;
    // 0x80801610: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
    after_13:
    // 0x80801614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801618: jal         0x8008B134
    // 0x8080161C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_14;
    // 0x8080161C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_14:
    // 0x80801620: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x80801624: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80801628: jal         0x8008B1BC
    // 0x8080162C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_15;
    // 0x8080162C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80801630: lui         $a1, 0x3F24
    ctx->r5 = S32(0X3F24 << 16);
    // 0x80801634: ori         $a1, $a1, 0x25AF
    ctx->r5 = ctx->r5 | 0X25AF;
    // 0x80801638: jal         0x8008B24C
    // 0x8080163C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_16;
    // 0x8080163C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80801640: jal         0x8008B064
    // 0x80801644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_17;
    // 0x80801644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80801648: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
L_8080164C:
    // 0x8080164C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80801650: lui         $at, 0xC496
    ctx->r1 = S32(0XC496 << 16);
    // 0x80801654: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80801658: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8080165C: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x80801660: lui         $a3, 0xC396
    ctx->r7 = S32(0XC396 << 16);
    // 0x80801664: jal         0x800F10B4
    // 0x80801668: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_18;
    // 0x80801668: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_18:
    // 0x8080166C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80801670: swc1        $f0, 0x178($s1)
    MEM_W(0X178, ctx->r17) = ctx->f0.u32l;
    // 0x80801674: jal         0x8009BA58
    // 0x80801678: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BA58(rdram, ctx);
        goto after_19;
    // 0x80801678: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_19:
    // 0x8080167C: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x80801680: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801684: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801688: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080168C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80801690: jal         0x8009FFD8
    // 0x80801694: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_20;
    // 0x80801694: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_20:
    // 0x80801698: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080169C: jal         0x8009B800
    // 0x808016A0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8009B800(rdram, ctx);
        goto after_21;
    // 0x808016A0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_21:
    // 0x808016A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808016A8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x808016AC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808016B0: jr          $ra
    // 0x808016B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x808016B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_808016B8_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808016B8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x808016BC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x808016C0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x808016C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808016C8: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x808016CC: jal         0x8009C128
    // 0x808016D0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x808016D0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x808016D4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x808016D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808016DC: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x808016E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016E4: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x808016E8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x808016EC: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x808016F0: jal         0x8009FBB0
    // 0x808016F4: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    func_8009FBB0(rdram, ctx);
        goto after_1;
    // 0x808016F4: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x808016F8: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x808016FC: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x80801700: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x80801704: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80801708: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8080170C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80801710: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801714: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80801718: addiu       $a1, $zero, -0x1E
    ctx->r5 = ADD32(0, -0X1E);
    // 0x8080171C: addiu       $a2, $zero, -0x1E
    ctx->r6 = ADD32(0, -0X1E);
    // 0x80801720: jal         0x800BA930
    // 0x80801724: addiu       $a3, $zero, -0x1E
    ctx->r7 = ADD32(0, -0X1E);
    func_800BA930(rdram, ctx);
        goto after_2;
    // 0x80801724: addiu       $a3, $zero, -0x1E
    ctx->r7 = ADD32(0, -0X1E);
    after_2:
    // 0x80801728: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8080172C: jal         0x800BA22C
    // 0x80801730: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_3;
    // 0x80801730: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80801734: lwc1        $f12, 0x178($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X178);
    // 0x80801738: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8080173C: nop

    // 0x80801740: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x80801744: nop

    // 0x80801748: bc1f        L_8080178C
    if (!c1cs) {
        // 0x8080174C: nop
    
            goto L_8080178C;
    }
    // 0x8080174C: nop

    // 0x80801750: jal         0x800F2100
    // 0x80801754: nop

    func_800F2100(rdram, ctx);
        goto after_4;
    // 0x80801754: nop

    after_4:
    // 0x80801758: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(85, 0X1D70) << 16);
    // 0x8080175C: lwc1        $f16, 0x1D70($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(85, 0X1D70));
    // 0x80801760: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80801764: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80801768: mul.s       $f12, $f0, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8080176C: jal         0x800F0E00
    // 0x80801770: nop

    func_800F0E00(rdram, ctx);
        goto after_5;
    // 0x80801770: nop

    after_5:
    // 0x80801774: lwc1        $f18, 0x178($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X178);
    // 0x80801778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080177C: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x80801780: swc1        $f4, 0x178($s0)
    MEM_W(0X178, ctx->r16) = ctx->f4.u32l;
    // 0x80801784: jal         0x8009BA58
    // 0x80801788: lw          $a1, 0x178($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X178);
    func_8009BA58(rdram, ctx);
        goto after_6;
    // 0x80801788: lw          $a1, 0x178($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X178);
    after_6:
L_8080178C:
    // 0x8080178C: jal         0x8008E078
    // 0x80801790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_7;
    // 0x80801790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80801794: beq         $v0, $zero, L_808017A0
    if (ctx->r2 == 0) {
        // 0x80801798: addiu       $t9, $zero, 0x2D
        ctx->r25 = ADD32(0, 0X2D);
            goto L_808017A0;
    }
    // 0x80801798: addiu       $t9, $zero, 0x2D
    ctx->r25 = ADD32(0, 0X2D);
    // 0x8080179C: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
L_808017A0:
    // 0x808017A0: jal         0x8008E35C
    // 0x808017A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_8;
    // 0x808017A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808017A8: bne         $v0, $zero, L_808017B4
    if (ctx->r2 != 0) {
        // 0x808017AC: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_808017B4;
    }
    // 0x808017AC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x808017B0: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
L_808017B4:
    // 0x808017B4: jal         0x8009BB50
    // 0x808017B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_9;
    // 0x808017B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808017BC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x808017C0: addiu       $t1, $zero, 0x2D
    ctx->r9 = ADD32(0, 0X2D);
    // 0x808017C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808017C8: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x808017CC: nop

    // 0x808017D0: bc1f        L_808017DC
    if (!c1cs) {
        // 0x808017D4: nop
    
            goto L_808017DC;
    }
    // 0x808017D4: nop

    // 0x808017D8: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
L_808017DC:
    // 0x808017DC: jal         0x8009E5C8
    // 0x808017E0: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009E5C8(rdram, ctx);
        goto after_10;
    // 0x808017E0: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_10:
    // 0x808017E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x808017E8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x808017EC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x808017F0: jr          $ra
    // 0x808017F4: nop

    return;
    // 0x808017F4: nop

;}
RECOMP_FUNC void func_808017F8_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808017F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808017FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801800: jal         0x80000104
    // 0x80801804: nop

    func_80800104_bsbswim(rdram, ctx);
        goto after_0;
    // 0x80801804: nop

    after_0:
    // 0x80801808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080180C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801810: jr          $ra
    // 0x80801814: nop

    return;
    // 0x80801814: nop

;}
RECOMP_FUNC void bsbswim_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801818: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080181C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(85, 0X1F00) << 16);
    // 0x80801820: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801824: jr          $ra
    // 0x80801828: lw          $v0, 0x1F00($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1F00));
    return;
    // 0x80801828: lw          $v0, 0x1F00($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1F00));
;}
RECOMP_FUNC void func_8080182C_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080182C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801830: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801834: jal         0x80000030
    // 0x80801838: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800030_bsbswim(rdram, ctx);
        goto after_0;
    // 0x80801838: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080183C: jal         0x80082FE0
    // 0x80801840: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80801840: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801844: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801848: jal         0x8009BF5C
    // 0x8080184C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_2;
    // 0x8080184C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80801850: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801854: jal         0x8009C4CC
    // 0x80801858: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_3;
    // 0x80801858: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x8080185C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801860: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801864: jr          $ra
    // 0x80801868: nop

    return;
    // 0x80801868: nop

;}
RECOMP_FUNC void func_8080186C_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080186C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801870: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801874: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80801878: jal         0x800848D8
    // 0x8080187C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _badrone_entrypoint_30(rdram, ctx);
        goto after_0;
    // 0x8080187C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80801880: beq         $v0, $zero, L_8080188C
    if (ctx->r2 == 0) {
        // 0x80801884: addiu       $t6, $zero, 0xBB
        ctx->r14 = ADD32(0, 0XBB);
            goto L_8080188C;
    }
    // 0x80801884: addiu       $t6, $zero, 0xBB
    ctx->r14 = ADD32(0, 0XBB);
    // 0x80801888: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_8080188C:
    // 0x8080188C: jal         0x80082FE8
    // 0x80801890: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80801890: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80801894: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80801898: jal         0x8009E5C8
    // 0x8080189C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x8080189C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x808018A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808018A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808018A8: jr          $ra
    // 0x808018AC: nop

    return;
    // 0x808018AC: nop

;}
RECOMP_FUNC void func_808018B0_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808018B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808018B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808018B8: jal         0x80082FF0
    // 0x808018BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808018BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808018C0: jal         0x80000104
    // 0x808018C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800104_bsbswim(rdram, ctx);
        goto after_1;
    // 0x808018C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808018C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808018CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808018D0: jr          $ra
    // 0x808018D4: nop

    return;
    // 0x808018D4: nop

;}
RECOMP_FUNC void bsbswim_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808018D8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808018DC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(85, 0X1F10) << 16);
    // 0x808018E0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808018E4: jr          $ra
    // 0x808018E8: lw          $v0, 0x1F10($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1F10));
    return;
    // 0x808018E8: lw          $v0, 0x1F10($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1F10));
;}
RECOMP_FUNC void func_808018EC_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808018EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808018F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808018F4: jal         0x8009E6EC
    // 0x808018F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x808018F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808018FC: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x80801900: bne         $v0, $at, L_80801918
    if (ctx->r2 != ctx->r1) {
        // 0x80801904: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80801918;
    }
    // 0x80801904: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801908: jal         0x80099B94
    // 0x8080190C: nop

    func_80099B94(rdram, ctx);
        goto after_1;
    // 0x8080190C: nop

    after_1:
    // 0x80801910: b           L_80801924
    // 0x80801914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80801924;
    // 0x80801914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801918:
    // 0x80801918: jal         0x80099AA8
    // 0x8080191C: nop

    func_80099AA8(rdram, ctx);
        goto after_2;
    // 0x8080191C: nop

    after_2:
    // 0x80801920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801924:
    // 0x80801924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801928: jr          $ra
    // 0x8080192C: nop

    return;
    // 0x8080192C: nop

;}
RECOMP_FUNC void func_80801930_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801930: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801938: lbu         $t6, 0x165($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X165);
    // 0x8080193C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80801940: beq         $t6, $zero, L_80801954
    if (ctx->r14 == 0) {
        // 0x80801944: nop
    
            goto L_80801954;
    }
    // 0x80801944: nop

    // 0x80801948: jal         0x80084950
    // 0x8080194C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _baduo_entrypoint_7(rdram, ctx);
        goto after_0;
    // 0x8080194C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801950: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_80801954:
    // 0x80801954: jal         0x80000104
    // 0x80801958: nop

    func_80800104_bsbswim(rdram, ctx);
        goto after_1;
    // 0x80801958: nop

    after_1:
    // 0x8080195C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801960: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801964: jr          $ra
    // 0x80801968: nop

    return;
    // 0x80801968: nop

;}
RECOMP_FUNC void func_8080196C_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080196C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801970: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801974: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801978: jal         0x80000030
    // 0x8080197C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800030_bsbswim(rdram, ctx);
        goto after_0;
    // 0x8080197C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801984: addiu       $a1, $zero, 0x131
    ctx->r5 = ADD32(0, 0X131);
    // 0x80801988: jal         0x8008CCBC
    // 0x8080198C: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x8080198C: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_1:
    // 0x80801990: jal         0x80000000
    // 0x80801994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbswim(rdram, ctx);
        goto after_2;
    // 0x80801994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080199C: jal         0x8009B94C
    // 0x808019A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009B94C(rdram, ctx);
        goto after_3;
    // 0x808019A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x808019A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019A8: jal         0x8009BA9C
    // 0x808019AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_4;
    // 0x808019AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x808019B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019B4: jal         0x8009BF5C
    // 0x808019B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_5;
    // 0x808019B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x808019BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019C0: jal         0x8009C4CC
    // 0x808019C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_6;
    // 0x808019C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x808019C8: sb          $zero, 0x165($s0)
    MEM_B(0X165, ctx->r16) = 0;
    // 0x808019CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808019D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808019D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808019D8: jr          $ra
    // 0x808019DC: nop

    return;
    // 0x808019DC: nop

;}
RECOMP_FUNC void func_808019E0_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808019E0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x808019E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808019E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808019EC: lui         $a1, 0x3E57
    ctx->r5 = S32(0X3E57 << 16);
    // 0x808019F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808019F4: ori         $a1, $a1, 0xA3D
    ctx->r5 = ctx->r5 | 0XA3D;
    // 0x808019F8: jal         0x8008CB10
    // 0x808019FC: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x808019FC: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    after_0:
    // 0x80801A00: beq         $v0, $zero, L_80801A98
    if (ctx->r2 == 0) {
        // 0x80801A04: lw          $a2, 0x3C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X3C);
            goto L_80801A98;
    }
    // 0x80801A04: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80801A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A0C: jal         0x800A0CF4
    // 0x80801A10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_1;
    // 0x80801A10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80801A14: jal         0x800849C0
    // 0x80801A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baduo_entrypoint_21(rdram, ctx);
        goto after_2;
    // 0x80801A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A20: jal         0x800A3410
    // 0x80801A24: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800A3410(rdram, ctx);
        goto after_3;
    // 0x80801A24: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_3:
    // 0x80801A28: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80801A2C: sb          $t6, 0x165($s0)
    MEM_B(0X165, ctx->r16) = ctx->r14;
    // 0x80801A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A34: jal         0x8009C128
    // 0x80801A38: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_8009C128(rdram, ctx);
        goto after_4;
    // 0x80801A38: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x80801A3C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80801A40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80801A44: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80801A48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A4C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80801A50: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80801A54: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    // 0x80801A58: jal         0x8009FBB0
    // 0x80801A5C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    func_8009FBB0(rdram, ctx);
        goto after_5;
    // 0x80801A5C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x80801A60: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(85, 0X1F20) << 16);
    // 0x80801A64: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80801A68: addiu       $t7, $t7, 0x1F20
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(85, 0X1F20));
    // 0x80801A6C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80801A70: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80801A74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80801A78: jal         0x800BABB8
    // 0x80801A7C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_6;
    // 0x80801A7C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_6:
    // 0x80801A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A84: addiu       $a1, $zero, 0x4592
    ctx->r5 = ADD32(0, 0X4592);
    // 0x80801A88: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801A8C: jal         0x8009DF18
    // 0x80801A90: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DF18(rdram, ctx);
        goto after_7;
    // 0x80801A90: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_7:
    // 0x80801A94: addiu       $a2, $zero, 0xED
    ctx->r6 = ADD32(0, 0XED);
L_80801A98:
    // 0x80801A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A9C: jal         0x8009E5C8
    // 0x80801AA0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_8;
    // 0x80801AA0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_8:
    // 0x80801AA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801AA8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801AAC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80801AB0: jr          $ra
    // 0x80801AB4: nop

    return;
    // 0x80801AB4: nop

;}
RECOMP_FUNC void bsbswim_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801AB8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801ABC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(85, 0X1F78) << 16);
    // 0x80801AC0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801AC4: jr          $ra
    // 0x80801AC8: lw          $v0, 0x1F78($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1F78));
    return;
    // 0x80801AC8: lw          $v0, 0x1F78($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1F78));
;}
RECOMP_FUNC void func_80801ACC_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801ACC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801AD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801AD4: jal         0x8009E6EC
    // 0x80801AD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80801AD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801ADC: slti        $at, $v0, 0x34
    ctx->r1 = SIGNED(ctx->r2) < 0X34 ? 1 : 0;
    // 0x80801AE0: bne         $at, $zero, L_80801B0C
    if (ctx->r1 != 0) {
        // 0x80801AE4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80801B0C;
    }
    // 0x80801AE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801AE8: addiu       $t6, $v0, -0x4E
    ctx->r14 = ADD32(ctx->r2, -0X4E);
    // 0x80801AEC: sltiu       $at, $t6, 0x24
    ctx->r1 = ctx->r14 < 0X24 ? 1 : 0;
    // 0x80801AF0: beq         $at, $zero, L_80801B6C
    if (ctx->r1 == 0) {
        // 0x80801AF4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80801B6C;
    }
    // 0x80801AF4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80801AF8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(85, 0X1D74) << 16);
    // 0x80801AFC: addu        $at, $at, $t6
    gpr jr_addend_80801B04 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80801B00: lw          $t6, 0x1D74($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(85, 0X1D74));
    // 0x80801B04: jr          $t6
    // 0x80801B08: nop

    switch (jr_addend_80801B04 >> 2) {
        case 0: goto L_80801B48; break;
        case 1: goto L_80801B6C; break;
        case 2: goto L_80801B6C; break;
        case 3: goto L_80801B48; break;
        case 4: goto L_80801B48; break;
        case 5: goto L_80801B6C; break;
        case 6: goto L_80801B6C; break;
        case 7: goto L_80801B6C; break;
        case 8: goto L_80801B6C; break;
        case 9: goto L_80801B6C; break;
        case 10: goto L_80801B6C; break;
        case 11: goto L_80801B6C; break;
        case 12: goto L_80801B6C; break;
        case 13: goto L_80801B6C; break;
        case 14: goto L_80801B6C; break;
        case 15: goto L_80801B6C; break;
        case 16: goto L_80801B6C; break;
        case 17: goto L_80801B6C; break;
        case 18: goto L_80801B6C; break;
        case 19: goto L_80801B6C; break;
        case 20: goto L_80801B6C; break;
        case 21: goto L_80801B6C; break;
        case 22: goto L_80801B6C; break;
        case 23: goto L_80801B6C; break;
        case 24: goto L_80801B6C; break;
        case 25: goto L_80801B6C; break;
        case 26: goto L_80801B48; break;
        case 27: goto L_80801B6C; break;
        case 28: goto L_80801B6C; break;
        case 29: goto L_80801B6C; break;
        case 30: goto L_80801B6C; break;
        case 31: goto L_80801B6C; break;
        case 32: goto L_80801B6C; break;
        case 33: goto L_80801B48; break;
        case 34: goto L_80801B6C; break;
        case 35: goto L_80801B30; break;
        default: switch_error(__func__, 0x80801B04, 0x80801D74);
    }
    // 0x80801B08: nop

L_80801B0C:
    // 0x80801B0C: addiu       $t7, $v0, -0x1F
    ctx->r15 = ADD32(ctx->r2, -0X1F);
    // 0x80801B10: sltiu       $at, $t7, 0x15
    ctx->r1 = ctx->r15 < 0X15 ? 1 : 0;
    // 0x80801B14: beq         $at, $zero, L_80801B6C
    if (ctx->r1 == 0) {
        // 0x80801B18: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80801B6C;
    }
    // 0x80801B18: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80801B1C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(85, 0X1E04) << 16);
    // 0x80801B20: addu        $at, $at, $t7
    gpr jr_addend_80801B28 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80801B24: lw          $t7, 0x1E04($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(85, 0X1E04));
    // 0x80801B28: jr          $t7
    // 0x80801B2C: nop

    switch (jr_addend_80801B28 >> 2) {
        case 0: goto L_80801B48; break;
        case 1: goto L_80801B48; break;
        case 2: goto L_80801B48; break;
        case 3: goto L_80801B6C; break;
        case 4: goto L_80801B6C; break;
        case 5: goto L_80801B48; break;
        case 6: goto L_80801B6C; break;
        case 7: goto L_80801B6C; break;
        case 8: goto L_80801B6C; break;
        case 9: goto L_80801B6C; break;
        case 10: goto L_80801B6C; break;
        case 11: goto L_80801B6C; break;
        case 12: goto L_80801B6C; break;
        case 13: goto L_80801B6C; break;
        case 14: goto L_80801B48; break;
        case 15: goto L_80801B48; break;
        case 16: goto L_80801B6C; break;
        case 17: goto L_80801B6C; break;
        case 18: goto L_80801B48; break;
        case 19: goto L_80801B6C; break;
        case 20: goto L_80801B48; break;
        default: switch_error(__func__, 0x80801B28, 0x80801E04);
    }
    // 0x80801B2C: nop

L_80801B30:
    // 0x80801B30: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80801B34: sb          $t8, 0x167($a0)
    MEM_B(0X167, ctx->r4) = ctx->r24;
    // 0x80801B38: jal         0x8009E830
    // 0x80801B3C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_1;
    // 0x80801B3C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80801B40: b           L_80801B78
    // 0x80801B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80801B78;
    // 0x80801B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801B48:
    // 0x80801B48: lbu         $t9, 0x167($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X167);
    // 0x80801B4C: bnel        $t9, $zero, L_80801B78
    if (ctx->r25 != 0) {
        // 0x80801B50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80801B78;
    }
    goto skip_0;
    // 0x80801B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80801B54: jal         0x800F9BC4
    // 0x80801B58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F9BC4(rdram, ctx);
        goto after_2;
    // 0x80801B58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x80801B5C: jal         0x80099B94
    // 0x80801B60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80099B94(rdram, ctx);
        goto after_3;
    // 0x80801B60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80801B64: b           L_80801B78
    // 0x80801B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80801B78;
    // 0x80801B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801B6C:
    // 0x80801B6C: jal         0x80099B94
    // 0x80801B70: nop

    func_80099B94(rdram, ctx);
        goto after_4;
    // 0x80801B70: nop

    after_4:
    // 0x80801B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801B78:
    // 0x80801B78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801B7C: jr          $ra
    // 0x80801B80: nop

    return;
    // 0x80801B80: nop

;}
RECOMP_FUNC void func_80801B84_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801B84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801B88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801B8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801B90: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801B94: sb          $zero, 0x167($a0)
    MEM_B(0X167, ctx->r4) = 0;
    // 0x80801B98: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x80801B9C: jal         0x8008CB3C
    // 0x80801BA0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_0;
    // 0x80801BA0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
    // 0x80801BA4: jal         0x80000000
    // 0x80801BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbswim(rdram, ctx);
        goto after_1;
    // 0x80801BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BB0: jal         0x8009B94C
    // 0x80801BB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009B94C(rdram, ctx);
        goto after_2;
    // 0x80801BB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80801BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BBC: jal         0x800852B0
    // 0x80801BC0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    _baswim_entrypoint_9(rdram, ctx);
        goto after_3;
    // 0x80801BC0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80801BC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BC8: jal         0x8009BA9C
    // 0x80801BCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_4;
    // 0x80801BCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80801BD0: jal         0x80000030
    // 0x80801BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800030_bsbswim(rdram, ctx);
        goto after_5;
    // 0x80801BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BDC: jal         0x80085298
    // 0x80801BE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _baswim_entrypoint_6(rdram, ctx);
        goto after_6;
    // 0x80801BE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80801BE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BE8: jal         0x80091104
    // 0x80801BEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80091104(rdram, ctx);
        goto after_7;
    // 0x80801BEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80801BF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801BF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801BF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801BFC: jr          $ra
    // 0x80801C00: nop

    return;
    // 0x80801C00: nop

;}
RECOMP_FUNC void func_80801C04_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801C04: jr          $ra
    // 0x80801C08: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80801C08: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
