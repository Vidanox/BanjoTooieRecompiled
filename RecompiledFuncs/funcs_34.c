#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800F53E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F53E4: bltz        $a0, L_800F5404
    if (SIGNED(ctx->r4) < 0) {
            // 0x800F53E8: slti        $at, $a0, 0x8
    ctx->r1 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    func_800F5404(rdram, ctx);
    return;
    }
    // 0x800F53E8: slti        $at, $a0, 0x8
    ctx->r1 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x800F53EC: beq         $at, $zero, L_800F5404
    if (ctx->r1 == 0) {
            // 0x800F53F0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    func_800F5404(rdram, ctx);
    return;
    }
    // 0x800F53F0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F53F4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800F53F8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800F53FC: jr          $ra
    // 0x800F5400: lw          $v0, 0x5490($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5490);
    return;
    // 0x800F5400: lw          $v0, 0x5490($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5490);
;}
RECOMP_FUNC void func_800F5404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5404: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800F5408: jr          $ra
    // 0x800F540C: nop

    return;
    // 0x800F540C: nop

;}
RECOMP_FUNC void func_800F5410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5410: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5418: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F541C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5420: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5424: jal         0x800A3274
    // 0x800F5428: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800A3274(rdram, ctx);
        goto after_0;
    // 0x800F5428: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F542C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5430: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5434: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F543C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F543C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5444: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F544C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5450: jal         0x800A3274
    // 0x800F5454: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800A3274(rdram, ctx);
        goto after_0;
    // 0x800F5454: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F545C: addiu       $t7, $v0, 0x1F
    ctx->r15 = ADD32(ctx->r2, 0X1F);
    // 0x800F5460: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800F5464: sllv        $v0, $t8, $t7
    ctx->r2 = S32(ctx->r24 << (ctx->r15 & 31));
    // 0x800F5468: jr          $ra
    // 0x800F546C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800F546C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800F5470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5470: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5474: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5478: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F547C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5480: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5484: jal         0x80098590
    // 0x800F5488: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_80098590(rdram, ctx);
        goto after_0;
    // 0x800F5488: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F548C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5494: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F549C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F549C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F54A0: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800F54A4: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x800F54A8: lw          $a2, 0x5490($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X5490);
    // 0x800F54AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F54B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F54B4: beql        $a2, $zero, L_800F54D0
    if (ctx->r6 == 0) {
        // 0x800F54B8: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_800F54D0;
    }
    goto skip_0;
    // 0x800F54B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x800F54BC: jal         0x80091538
    // 0x800F54C0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80091538(rdram, ctx);
        goto after_0;
    // 0x800F54C0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x800F54C4: b           L_800F54D8
    // 0x800F54C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F54D8;
    // 0x800F54C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F54CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_800F54D0:
    // 0x800F54D0: nop

    // 0x800F54D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F54D8:
    // 0x800F54D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F54DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F54E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F54E4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800F54E8: jr          $ra
    // 0x800F54EC: lw          $v0, 0x54DC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X54DC);
    return;
    // 0x800F54EC: lw          $v0, 0x54DC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X54DC);
;}
RECOMP_FUNC void func_800F54F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F54F0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F54F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F54F8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F54FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5500: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5504: jal         0x800918F8
    // 0x800F5508: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800918F8(rdram, ctx);
        goto after_0;
    // 0x800F5508: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F550C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5514: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F551C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F551C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5520: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800F5524: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800F5528: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F552C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5530: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x800F5534: jal         0x800A3148
    // 0x800F5538: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800A3148(rdram, ctx);
        goto after_0;
    // 0x800F5538: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F553C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5544: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F554C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F554C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5554: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5558: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F555C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5560: jal         0x80092BDC
    // 0x800F5564: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_80092BDC(rdram, ctx);
        goto after_0;
    // 0x800F5564: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F556C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5570: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5578: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F557C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5580: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5588: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F558C: jal         0x800A1718
    // 0x800F5590: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800A1718(rdram, ctx);
        goto after_0;
    // 0x800F5590: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5598: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F559C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F55A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F55A4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F55A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F55AC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F55B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F55B4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F55B8: jal         0x800A1760
    // 0x800F55BC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800A1760(rdram, ctx);
        goto after_0;
    // 0x800F55BC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F55C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F55C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F55C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F55D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F55D0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F55D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F55D8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F55DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F55E0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F55E4: jal         0x800965D4
    // 0x800F55E8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800965D4(rdram, ctx);
        goto after_0;
    // 0x800F55E8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F55EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F55F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F55F4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F55FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F55FC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5604: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5608: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F560C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5610: jal         0x80096628
    // 0x800F5614: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_80096628(rdram, ctx);
        goto after_0;
    // 0x800F5614: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F561C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5620: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5628: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F562C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5630: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5634: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5638: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F563C: jal         0x80096364
    // 0x800F5640: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_80096364(rdram, ctx);
        goto after_0;
    // 0x800F5640: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F564C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5654: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F565C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5660: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5664: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5668: jal         0x80096670
    // 0x800F566C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_80096670(rdram, ctx);
        goto after_0;
    // 0x800F566C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5678: jr          $ra
    // 0x800F567C: nop

    return;
    // 0x800F567C: nop

;}
RECOMP_FUNC void func_800F5680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5680: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5688: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F568C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5690: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5694: jal         0x800963C0
    // 0x800F5698: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800963C0(rdram, ctx);
        goto after_0;
    // 0x800F5698: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F569C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F56A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F56A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F56AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F56AC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F56B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F56B4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F56B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F56BC: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F56C0: jal         0x80096694
    // 0x800F56C4: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_80096694(rdram, ctx);
        goto after_0;
    // 0x800F56C4: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F56C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F56CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F56D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F56D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F56D8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F56DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F56E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F56E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F56E8: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F56EC: jal         0x80084D40
    // 0x800F56F0: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    _bahold_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x800F56F0: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F56F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F56F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F56FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5704: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F570C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5710: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5714: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5718: jal         0x80084D40
    // 0x800F571C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    _bahold_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x800F571C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5720: beq         $v0, $zero, L_800F5740
    if (ctx->r2 == 0) {
        // 0x800F5724: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800F5740;
    }
    // 0x800F5724: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800F5728: jal         0x80106790
    // 0x800F572C: nop

    func_80106790(rdram, ctx);
        goto after_1;
    // 0x800F572C: nop

    after_1:
    // 0x800F5730: lw          $v0, 0x6C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6C);
    // 0x800F5734: sll         $t7, $v0, 11
    ctx->r15 = S32(ctx->r2 << 11);
    // 0x800F5738: b           L_800F5744
    // 0x800F573C: srl         $v0, $t7, 20
    ctx->r2 = S32(U32(ctx->r15) >> 20);
        goto L_800F5744;
    // 0x800F573C: srl         $v0, $t7, 20
    ctx->r2 = S32(U32(ctx->r15) >> 20);
L_800F5740:
    // 0x800F5740: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F5744:
    // 0x800F5744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5748: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F574C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5754: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5758: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F575C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5764: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5768: jal         0x80084D40
    // 0x800F576C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    _bahold_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x800F576C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5770: beq         $v0, $zero, L_800F5788
    if (ctx->r2 == 0) {
        // 0x800F5774: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F5788;
    }
    // 0x800F5774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5778: lw          $v0, 0x24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X24);
    // 0x800F577C: srl         $t7, $v0, 22
    ctx->r15 = S32(U32(ctx->r2) >> 22);
    // 0x800F5780: b           L_800F578C
    // 0x800F5784: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_800F578C;
    // 0x800F5784: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_800F5788:
    // 0x800F5788: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F578C:
    // 0x800F578C: jr          $ra
    // 0x800F5790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800F5790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800F5794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5794: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5798: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F579C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F57A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F57A4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F57A8: jal         0x800F3B3C
    // 0x800F57AC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800F3B3C(rdram, ctx);
        goto after_0;
    // 0x800F57AC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F57B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F57B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F57B8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F57C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F57C0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F57C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F57C8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F57CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F57D0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F57D4: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F57D8: jal         0x8008E9B8
    // 0x800F57DC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_8008E9B8(rdram, ctx);
        goto after_0;
    // 0x800F57DC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x800F57E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F57E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F57E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F57F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F57F0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F57F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F57F8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F57FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5800: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5804: jal         0x800F3B90
    // 0x800F5808: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800F3B90(rdram, ctx);
        goto after_0;
    // 0x800F5808: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F580C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5814: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F581C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F581C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5820: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5824: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5828: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F582C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F5830: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5834: jal         0x8009650C
    // 0x800F5838: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009650C(rdram, ctx);
        goto after_0;
    // 0x800F5838: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F583C: beq         $v0, $zero, L_800F5854
    if (ctx->r2 == 0) {
        // 0x800F5840: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800F5854;
    }
    // 0x800F5840: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F5844: jal         0x80096434
    // 0x800F5848: nop

    func_80096434(rdram, ctx);
        goto after_1;
    // 0x800F5848: nop

    after_1:
    // 0x800F584C: b           L_800F5858
    // 0x800F5850: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_800F5858;
    // 0x800F5850: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800F5854:
    // 0x800F5854: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800F5858:
    // 0x800F5858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F585C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F5860: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800F5864: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F586C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F586C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5874: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F587C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5880: jal         0x80098B5C
    // 0x800F5884: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_80098B5C(rdram, ctx);
        goto after_0;
    // 0x800F5884: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F588C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5890: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5898: jr          $ra
    // 0x800F589C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x800F589C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
;}
RECOMP_FUNC void func_800F58A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F58A0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F58A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F58A8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F58AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F58B0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F58B4: jal         0x800841D0
    // 0x800F58B8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    _bswalk_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x800F58B8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F58BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F58C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F58C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F58CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F58CC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F58D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F58D4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F58D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F58DC: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F58E0: jal         0x80096394
    // 0x800F58E4: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_80096394(rdram, ctx);
        goto after_0;
    // 0x800F58E4: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F58E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F58EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F58F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F58F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F58F8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F58FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5900: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5904: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5908: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F590C: jal         0x800A3354
    // 0x800F5910: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800A3354(rdram, ctx);
        goto after_0;
    // 0x800F5910: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F591C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5924: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F592C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5930: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5934: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5938: jal         0x800A3360
    // 0x800F593C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800A3360(rdram, ctx);
        goto after_0;
    // 0x800F593C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5944: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5948: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5950: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F5954: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800F5958: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800F595C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5960: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5964: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800F5968: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800F596C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800F5970: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x800F5974: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F5978: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    // 0x800F597C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x800F5980: jal         0x800A3148
    // 0x800F5984: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800A3148(rdram, ctx);
        goto after_0;
    // 0x800F5984: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x800F5988: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800F598C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800F5990: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800F5994: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800F5998: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800F599C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800F59A0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800F59A4: mul.s       $f16, $f4, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800F59A8: swc1        $f10, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f10.u32l;
    // 0x800F59AC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800F59B0: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x800F59B4: swc1        $f18, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f18.u32l;
    // 0x800F59B8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800F59BC: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F59C0: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
    // 0x800F59C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F59C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F59CC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F59D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F59D4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F59D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F59DC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F59E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F59E4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F59E8: jal         0x80084768
    // 0x800F59EC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    _bapackctrl_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x800F59EC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F59F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F59F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F59F8: jr          $ra
    // 0x800F59FC: nop

    return;
    // 0x800F59FC: nop

;}
RECOMP_FUNC void func_800F5A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5A00: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5A04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5A08: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5A0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5A10: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5A14: jal         0x800F3BB0
    // 0x800F5A18: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800F3BB0(rdram, ctx);
        goto after_0;
    // 0x800F5A18: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5A1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5A20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5A24: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5A2C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5A30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5A34: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5A38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5A3C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5A40: jal         0x800F3BD0
    // 0x800F5A44: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800F3BD0(rdram, ctx);
        goto after_0;
    // 0x800F5A44: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5A4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5A50: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5A58: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5A5C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F5A60: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5A64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5A68: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800F5A6C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5A70: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F5A74: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x800F5A78: jal         0x800F3BB0
    // 0x800F5A7C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800F3BB0(rdram, ctx);
        goto after_0;
    // 0x800F5A7C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x800F5A80: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800F5A84: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800F5A88: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x800F5A8C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800F5A90: nop

    // 0x800F5A94: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x800F5A98: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800F5A9C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x800F5AA0: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x800F5AA4: nop

    // 0x800F5AA8: sw          $t0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r8;
    // 0x800F5AAC: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F5AB0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800F5AB4: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x800F5AB8: nop

    // 0x800F5ABC: sw          $t2, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r10;
    // 0x800F5AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5AC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F5AC8: jr          $ra
    // 0x800F5ACC: nop

    return;
    // 0x800F5ACC: nop

;}
RECOMP_FUNC void func_800F5AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5AD0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800F5AD4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800F5AD8: jr          $ra
    // 0x800F5ADC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x800F5ADC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_800F5AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5AE0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5AE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5AE8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5AEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5AF0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5AF4: jal         0x8009BFCC
    // 0x800F5AF8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8009BFCC(rdram, ctx);
        goto after_0;
    // 0x800F5AF8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5B00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5B04: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5B0C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5B14: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5B18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5B1C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5B20: jal         0x8009CC68
    // 0x800F5B24: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8009CC68(rdram, ctx);
        goto after_0;
    // 0x800F5B24: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5B30: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5B38: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5B3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5B40: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5B44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5B48: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5B4C: jal         0x800F3E84
    // 0x800F5B50: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800F3E84(rdram, ctx);
        goto after_0;
    // 0x800F5B50: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5B54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5B58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5B5C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5B64: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5B68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F5B6C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5B70: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5B74: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F5B78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5B7C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800F5B80: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800F5B84: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800F5B88: jal         0x80095870
    // 0x800F5B8C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80095870(rdram, ctx);
        goto after_0;
    // 0x800F5B8C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F5B90: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F5B94: jal         0x8009C128
    // 0x800F5B98: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x800F5B98: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x800F5B9C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x800F5BA0: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800F5BA4: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800F5BA8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800F5BAC: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x800F5BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5BB4: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F5BB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F5BBC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5BC4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5BC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5BCC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5BD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5BD4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5BD8: jal         0x80092B8C
    // 0x800F5BDC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_80092B8C(rdram, ctx);
        goto after_0;
    // 0x800F5BDC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5BE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5BE8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5BF0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5BF4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5BF8: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5BFC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F5C00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800F5C04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5C08: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800F5C0C: jal         0x80092B8C
    // 0x800F5C10: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80092B8C(rdram, ctx);
        goto after_0;
    // 0x800F5C10: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F5C14: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F5C18: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x800F5C1C: jal         0x8009C128
    // 0x800F5C20: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x800F5C20: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x800F5C24: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800F5C28: jal         0x800EF04C
    // 0x800F5C2C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800EF04C(rdram, ctx);
        goto after_2;
    // 0x800F5C2C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x800F5C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5C34: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800F5C38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800F5C3C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5C44: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5C48: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5C4C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5C50: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F5C54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F5C58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5C5C: jal         0x800A3274
    // 0x800F5C60: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_800A3274(rdram, ctx);
        goto after_0;
    // 0x800F5C60: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F5C64: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800F5C68: beq         $v0, $at, L_800F5C7C
    if (ctx->r2 == ctx->r1) {
        // 0x800F5C6C: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800F5C7C;
    }
    // 0x800F5C6C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F5C70: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800F5C74: b           L_800F5C88
    // 0x800F5C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F5C88;
    // 0x800F5C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F5C7C:
    // 0x800F5C7C: jal         0x800850F8
    // 0x800F5C80: nop

    _basnowball_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x800F5C80: nop

    after_1:
    // 0x800F5C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F5C88:
    // 0x800F5C88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F5C8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5C94: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5C98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5C9C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5CA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5CA4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5CA8: jal         0x800F3ED0
    // 0x800F5CAC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800F3ED0(rdram, ctx);
        goto after_0;
    // 0x800F5CAC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5CB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5CB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5CB8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5CC0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5CC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5CC8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5CCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5CD0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5CD4: jal         0x8009EEAC
    // 0x800F5CD8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8009EEAC(rdram, ctx);
        goto after_0;
    // 0x800F5CD8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5CE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5CE4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5CEC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5CF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5CF4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5CF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5CFC: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5D00: jal         0x8009EF04
    // 0x800F5D04: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8009EF04(rdram, ctx);
        goto after_0;
    // 0x800F5D04: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5D08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5D0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5D10: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5D18: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5D1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5D20: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5D24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5D28: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5D2C: jal         0x800F40EC
    // 0x800F5D30: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800F40EC(rdram, ctx);
        goto after_0;
    // 0x800F5D30: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5D38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5D3C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5D44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5D44: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5D48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5D4C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5D50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5D54: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5D58: jal         0x800A33CC
    // 0x800F5D5C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800A33CC(rdram, ctx);
        goto after_0;
    // 0x800F5D5C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5D60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5D64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5D68: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5D70: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5D74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5D78: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5D7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5D80: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5D84: jal         0x8009BB24
    // 0x800F5D88: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8009BB24(rdram, ctx);
        goto after_0;
    // 0x800F5D88: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5D90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5D94: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5D9C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5DA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5DA4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5DA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5DAC: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5DB0: jal         0x800F4200
    // 0x800F5DB4: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800F4200(rdram, ctx);
        goto after_0;
    // 0x800F5DB4: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5DB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5DBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5DC0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5DC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5DC8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5DCC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5DD0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5DD4: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F5DD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F5DDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5DE0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800F5DE4: jal         0x8009BFD8
    // 0x800F5DE8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009BFD8(rdram, ctx);
        goto after_0;
    // 0x800F5DE8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F5DEC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F5DF0: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x800F5DF4: jal         0x8009C990
    // 0x800F5DF8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8009C990(rdram, ctx);
        goto after_1;
    // 0x800F5DF8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800F5DFC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800F5E00: swc1        $f0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f0.u32l;
    // 0x800F5E04: jal         0x8009C548
    // 0x800F5E08: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8009C548(rdram, ctx);
        goto after_2;
    // 0x800F5E08: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x800F5E0C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800F5E10: swc1        $f0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f0.u32l;
    // 0x800F5E14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5E18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F5E1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5E24: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5E28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5E2C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5E30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5E34: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5E38: jal         0x800966BC
    // 0x800F5E3C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800966BC(rdram, ctx);
        goto after_0;
    // 0x800F5E3C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5E44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5E48: jr          $ra
    // 0x800F5E4C: nop

    return;
    // 0x800F5E4C: nop

;}
RECOMP_FUNC void func_800F5E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5E50: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5E54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5E58: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5E5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5E60: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5E64: jal         0x800966E0
    // 0x800F5E68: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800966E0(rdram, ctx);
        goto after_0;
    // 0x800F5E68: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5E70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5E74: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5E7C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5E80: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5E84: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5E88: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F5E8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F5E90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5E94: jal         0x80096544
    // 0x800F5E98: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80096544(rdram, ctx);
        goto after_0;
    // 0x800F5E98: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F5E9C: beq         $v0, $zero, L_800F5EB4
    if (ctx->r2 == 0) {
        // 0x800F5EA0: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800F5EB4;
    }
    // 0x800F5EA0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F5EA4: jal         0x800964DC
    // 0x800F5EA8: nop

    func_800964DC(rdram, ctx);
        goto after_1;
    // 0x800F5EA8: nop

    after_1:
    // 0x800F5EAC: b           L_800F5EC0
    // 0x800F5EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F5EC0;
    // 0x800F5EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F5EB4:
    // 0x800F5EB4: jal         0x8009C150
    // 0x800F5EB8: nop

    func_8009C150(rdram, ctx);
        goto after_2;
    // 0x800F5EB8: nop

    after_2:
    // 0x800F5EBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F5EC0:
    // 0x800F5EC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F5EC4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5ECC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5ED0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5ED4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5ED8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5EDC: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5EE0: jal         0x800A4C68
    // 0x800F5EE4: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800A4C68(rdram, ctx);
        goto after_0;
    // 0x800F5EE4: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5EF0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5EF8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5EFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5F00: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5F04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5F08: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5F0C: jal         0x800A4C88
    // 0x800F5F10: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800A4C88(rdram, ctx);
        goto after_0;
    // 0x800F5F10: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5F1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5F24: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5F28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5F2C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5F34: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5F38: jal         0x8009C984
    // 0x800F5F3C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8009C984(rdram, ctx);
        goto after_0;
    // 0x800F5F3C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5F40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5F44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5F48: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5F50: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5F54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5F58: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5F5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5F60: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5F64: jal         0x8009C990
    // 0x800F5F68: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8009C990(rdram, ctx);
        goto after_0;
    // 0x800F5F68: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5F6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5F70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5F74: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5F7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5F7C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5F80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5F84: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5F88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5F8C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5F90: jal         0x8009C150
    // 0x800F5F94: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8009C150(rdram, ctx);
        goto after_0;
    // 0x800F5F94: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F5F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5F9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5FA0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5FA8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5FAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5FB0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5FB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5FB8: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5FBC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F5FC0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x800F5FC4: jal         0x80091C80
    // 0x800F5FC8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80091C80(rdram, ctx);
        goto after_0;
    // 0x800F5FC8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x800F5FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F5FD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F5FD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800F5FD8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F5FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5FE0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F5FE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F5FE8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F5FEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F5FF0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F5FF4: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F5FF8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x800F5FFC: jal         0x80091C80
    // 0x800F6000: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80091C80(rdram, ctx);
        goto after_0;
    // 0x800F6000: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800F6004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6008: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F600C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800F6010: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6018: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F601C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F6020: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6028: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F602C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F6030: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800F6034: jal         0x80091C80
    // 0x800F6038: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80091C80(rdram, ctx);
        goto after_0;
    // 0x800F6038: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x800F603C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F6044: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F604C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F604C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F6050: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6054: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800F6058: jal         0x8009EAD0
    // 0x800F605C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8009EAD0(rdram, ctx);
        goto after_0;
    // 0x800F605C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x800F6060: jal         0x80084758
    // 0x800F6064: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _badata_entrypoint_35(rdram, ctx);
        goto after_1;
    // 0x800F6064: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800F6068: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800F606C: jal         0x8009E5C8
    // 0x800F6070: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x800F6070: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x800F6074: jal         0x8009EAD0
    // 0x800F6078: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8009EAD0(rdram, ctx);
        goto after_3;
    // 0x800F6078: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x800F607C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F6084: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F608C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F608C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6090: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800F6094: addiu       $t7, $a1, -0x1
    ctx->r15 = ADD32(ctx->r5, -0X1);
    // 0x800F6098: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F609C: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x800F60A0: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x800F60A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F60A8: beq         $at, $zero, L_800F6130
    if (ctx->r1 == 0) {
        // 0x800F60AC: lw          $a2, 0x5490($a2)
        ctx->r6 = MEM_W(ctx->r6, 0X5490);
            goto L_800F6130;
    }
    // 0x800F60AC: lw          $a2, 0x5490($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X5490);
    // 0x800F60B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F60B4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800F60B8: addu        $at, $at, $t7
    gpr jr_addend_800F60C0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800F60BC: lw          $t7, 0x6070($at)
    ctx->r15 = ADD32(ctx->r1, 0X6070);
    // 0x800F60C0: jr          $t7
    // 0x800F60C4: nop

    switch (jr_addend_800F60C0 >> 2) {
        case 0: goto L_800F60C8; break;
        case 1: goto L_800F60E8; break;
        case 2: goto L_800F60FC; break;
        case 3: goto L_800F6110; break;
        case 4: goto L_800F6124; break;
        default: switch_error(__func__, 0x800F60C0, 0x80126070);
    }
    // 0x800F60C4: nop

L_800F60C8:
    // 0x800F60C8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800F60CC: jal         0x80084758
    // 0x800F60D0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    _badata_entrypoint_35(rdram, ctx);
        goto after_0;
    // 0x800F60D0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x800F60D4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F60D8: jal         0x8009E5C8
    // 0x800F60DC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_1;
    // 0x800F60DC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x800F60E0: b           L_800F6134
    // 0x800F60E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F6134;
    // 0x800F60E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F60E8:
    // 0x800F60E8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800F60EC: jal         0x800F604C
    // 0x800F60F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800F604C(rdram, ctx);
        goto after_2;
    // 0x800F60F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x800F60F4: b           L_800F6134
    // 0x800F60F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F6134;
    // 0x800F60F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F60FC:
    // 0x800F60FC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800F6100: jal         0x800F604C
    // 0x800F6104: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800F604C(rdram, ctx);
        goto after_3;
    // 0x800F6104: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x800F6108: b           L_800F6134
    // 0x800F610C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F6134;
    // 0x800F610C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F6110:
    // 0x800F6110: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800F6114: jal         0x800F604C
    // 0x800F6118: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800F604C(rdram, ctx);
        goto after_4;
    // 0x800F6118: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x800F611C: b           L_800F6134
    // 0x800F6120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F6134;
    // 0x800F6120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F6124:
    // 0x800F6124: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800F6128: jal         0x800F604C
    // 0x800F612C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800F604C(rdram, ctx);
        goto after_5;
    // 0x800F612C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_5:
L_800F6130:
    // 0x800F6130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F6134:
    // 0x800F6134: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F6138: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6140: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F6144: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800F6148: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800F614C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800F6150: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F6154: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800F6158: addiu       $s0, $s0, 0x5490
    ctx->r16 = ADD32(ctx->r16, 0X5490);
    // 0x800F615C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800F6160: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_800F6164:
    // 0x800F6164: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800F6168: bne         $t6, $zero, L_800F61C0
    if (ctx->r14 != 0) {
        // 0x800F616C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800F61C0;
    }
    // 0x800F616C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800F6170: jal         0x800A907C
    // 0x800F6174: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_800A907C(rdram, ctx);
        goto after_0;
    // 0x800F6174: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_0:
    // 0x800F6178: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800F617C: jal         0x800A9768
    // 0x800F6180: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800A9768(rdram, ctx);
        goto after_1;
    // 0x800F6180: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800F6184: jal         0x800A93F8
    // 0x800F6188: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A93F8(rdram, ctx);
        goto after_2;
    // 0x800F6188: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x800F618C: jal         0x800A93E4
    // 0x800F6190: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A93E4(rdram, ctx);
        goto after_3;
    // 0x800F6190: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x800F6194: jal         0x800F43A8
    // 0x800F6198: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800F43A8(rdram, ctx);
        goto after_4;
    // 0x800F6198: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x800F619C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F61A0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800F61A4: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x800F61A8: sb          $zero, 0x54B0($at)
    MEM_B(0X54B0, ctx->r1) = 0;
    // 0x800F61AC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800F61B0: jal         0x80091BF0
    // 0x800F61B4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_80091BF0(rdram, ctx);
        goto after_5;
    // 0x800F61B4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x800F61B8: b           L_800F61D0
    // 0x800F61BC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_800F61D0;
    // 0x800F61BC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_800F61C0:
    // 0x800F61C0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800F61C4: bne         $s1, $v0, L_800F6164
    if (ctx->r17 != ctx->r2) {
        // 0x800F61C8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800F6164;
    }
    // 0x800F61C8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800F61CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F61D0:
    // 0x800F61D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F61D4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800F61D8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800F61DC: jr          $ra
    // 0x800F61E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800F61E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800F61E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F61E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F61E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F61EC: jal         0x800F6140
    // 0x800F61F0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_800F6140(rdram, ctx);
        goto after_0;
    // 0x800F61F0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_0:
    // 0x800F61F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F61F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F61FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6204: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F6208: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F620C: jal         0x800F6140
    // 0x800F6210: nop

    func_800F6140(rdram, ctx);
        goto after_0;
    // 0x800F6210: nop

    after_0:
    // 0x800F6214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6218: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F621C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6224: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800F6228: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800F622C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800F6230: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F6234: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800F6238: addiu       $v1, $v1, 0x5490
    ctx->r3 = ADD32(ctx->r3, 0X5490);
    // 0x800F623C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800F6240: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_800F6244:
    // 0x800F6244: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x800F6248: bne         $t6, $zero, L_800F62E4
    if (ctx->r14 != 0) {
        // 0x800F624C: sll         $t7, $a1, 2
        ctx->r15 = S32(ctx->r5 << 2);
            goto L_800F62E4;
    }
    // 0x800F624C: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x800F6250: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6254: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x800F6258: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F625C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x800F6260: jal         0x800918F8
    // 0x800F6264: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_800918F8(rdram, ctx);
        goto after_0;
    // 0x800F6264: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F6268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800F626C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800F6270: jal         0x800A907C
    // 0x800F6274: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_800A907C(rdram, ctx);
        goto after_1;
    // 0x800F6274: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_1:
    // 0x800F6278: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800F627C: jal         0x800F43A8
    // 0x800F6280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F43A8(rdram, ctx);
        goto after_2;
    // 0x800F6280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800F6284: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x800F6288: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x800F628C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800F6290: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800F6294: jal         0x80091BF0
    // 0x800F6298: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    func_80091BF0(rdram, ctx);
        goto after_3;
    // 0x800F6298: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    after_3:
    // 0x800F629C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800F62A0: jal         0x800F3BB0
    // 0x800F62A4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_800F3BB0(rdram, ctx);
        goto after_4;
    // 0x800F62A4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_4:
    // 0x800F62A8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800F62AC: jal         0x800F452C
    // 0x800F62B0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_800F452C(rdram, ctx);
        goto after_5;
    // 0x800F62B0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_5:
    // 0x800F62B4: jal         0x8009C990
    // 0x800F62B8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8009C990(rdram, ctx);
        goto after_6;
    // 0x800F62B8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_6:
    // 0x800F62BC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800F62C0: jal         0x8009C914
    // 0x800F62C4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8009C914(rdram, ctx);
        goto after_7;
    // 0x800F62C4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_7:
    // 0x800F62C8: jal         0x8009C974
    // 0x800F62CC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8009C974(rdram, ctx);
        goto after_8;
    // 0x800F62CC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_8:
    // 0x800F62D0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800F62D4: jal         0x800A92A8
    // 0x800F62D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800A92A8(rdram, ctx);
        goto after_9;
    // 0x800F62D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x800F62DC: b           L_800F62F4
    // 0x800F62E0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_800F62F4;
    // 0x800F62E0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_800F62E4:
    // 0x800F62E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800F62E8: bne         $s0, $v0, L_800F6244
    if (ctx->r16 != ctx->r2) {
        // 0x800F62EC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800F6244;
    }
    // 0x800F62EC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800F62F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F62F4:
    // 0x800F62F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F62F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800F62FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800F6300: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6308: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F630C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6310: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800F6314: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800F6318: jal         0x800A8FDC
    // 0x800F631C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800A8FDC(rdram, ctx);
        goto after_0;
    // 0x800F631C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x800F6320: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800F6324: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800F6328: jal         0x800A907C
    // 0x800F632C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_800A907C(rdram, ctx);
        goto after_1;
    // 0x800F632C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_1:
    // 0x800F6330: jal         0x800F43A8
    // 0x800F6334: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800F43A8(rdram, ctx);
        goto after_2;
    // 0x800F6334: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x800F6338: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800F633C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F6340: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800F6344: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F6348: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800F634C: sw          $v0, 0x5490($at)
    MEM_W(0X5490, ctx->r1) = ctx->r2;
    // 0x800F6350: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800F6354: jal         0x80091BF0
    // 0x800F6358: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_80091BF0(rdram, ctx);
        goto after_3;
    // 0x800F6358: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x800F635C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6360: jal         0x800F452C
    // 0x800F6364: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_800F452C(rdram, ctx);
        goto after_4;
    // 0x800F6364: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_4:
    // 0x800F6368: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800F636C: jal         0x800A92A8
    // 0x800F6370: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800A92A8(rdram, ctx);
        goto after_5;
    // 0x800F6370: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x800F6374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6378: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800F637C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F6380: jr          $ra
    // 0x800F6384: nop

    return;
    // 0x800F6384: nop

;}
RECOMP_FUNC void func_800F6388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6388: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F638C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F6390: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6398: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F639C: jal         0x8008F788
    // 0x800F63A0: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8008F788(rdram, ctx);
        goto after_0;
    // 0x800F63A0: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F63A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F63A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F63AC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F63B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F63B4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F63B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F63BC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F63C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F63C4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F63C8: jal         0x8008F7B4
    // 0x800F63CC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8008F7B4(rdram, ctx);
        goto after_0;
    // 0x800F63CC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F63D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F63D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F63D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F63E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F63E0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F63E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F63E8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F63EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F63F0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F63F4: jal         0x8008F854
    // 0x800F63F8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8008F854(rdram, ctx);
        goto after_0;
    // 0x800F63F8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F63FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6400: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F6404: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F640C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F640C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F6414: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6418: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F641C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6420: jal         0x8008F828
    // 0x800F6424: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8008F828(rdram, ctx);
        goto after_0;
    // 0x800F6424: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F6428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F642C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F6430: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6438: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F643C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800F6440: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x800F6444: lw          $a1, 0x5490($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5490);
    // 0x800F6448: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F644C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6450: bne         $a1, $zero, L_800F6460
    if (ctx->r5 != 0) {
        // 0x800F6454: nop
    
            goto L_800F6460;
    }
    // 0x800F6454: nop

    // 0x800F6458: b           L_800F6468
    // 0x800F645C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800F6468;
    // 0x800F645C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F6460:
    // 0x800F6460: jal         0x800F4244
    // 0x800F6464: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800F4244(rdram, ctx);
        goto after_0;
    // 0x800F6464: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
L_800F6468:
    // 0x800F6468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F646C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F6470: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6478: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F647C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F6480: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6488: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F648C: jal         0x800F424C
    // 0x800F6490: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800F424C(rdram, ctx);
        goto after_0;
    // 0x800F6490: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F6494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F649C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F64A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F64A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F64A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F64AC: jal         0x800F543C
    // 0x800F64B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F543C(rdram, ctx);
        goto after_0;
    // 0x800F64B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800F64B4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800F64B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F64BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F64C0: and         $t7, $v0, $t6
    ctx->r15 = ctx->r2 & ctx->r14;
    // 0x800F64C4: beq         $t7, $zero, L_800F64D4
    if (ctx->r15 == 0) {
        // 0x800F64C8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800F64D4;
    }
    // 0x800F64C8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800F64CC: b           L_800F64D4
    // 0x800F64D0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800F64D4;
    // 0x800F64D0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800F64D4:
    // 0x800F64D4: jr          $ra
    // 0x800F64D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800F64D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800F64DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F64DC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F64E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F64E4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F64E8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F64EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F64F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F64F4: jal         0x8009E6F8
    // 0x800F64F8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009E6F8(rdram, ctx);
        goto after_0;
    // 0x800F64F8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F64FC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6500: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800F6504: jal         0x8009CA70
    // 0x800F6508: lui         $a2, 0x40
    ctx->r6 = S32(0X40 << 16);
    func_8009CA70(rdram, ctx);
        goto after_1;
    // 0x800F6508: lui         $a2, 0x40
    ctx->r6 = S32(0X40 << 16);
    after_1:
    // 0x800F650C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6510: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F6514: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F651C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F651C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6520: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6524: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6528: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F652C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F6530: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6534: jal         0x8009BB00
    // 0x800F6538: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009BB00(rdram, ctx);
        goto after_0;
    // 0x800F6538: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F653C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F6540: nop

    // 0x800F6544: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x800F6548: nop

    // 0x800F654C: bc1f        L_800F655C
    if (!c1cs) {
        // 0x800F6550: nop
    
            goto L_800F655C;
    }
    // 0x800F6550: nop

    // 0x800F6554: b           L_800F6580
    // 0x800F6558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800F6580;
    // 0x800F6558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800F655C:
    // 0x800F655C: jal         0x8009E6F8
    // 0x800F6560: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8009E6F8(rdram, ctx);
        goto after_1;
    // 0x800F6560: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800F6564: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F6568: bne         $v0, $at, L_800F6578
    if (ctx->r2 != ctx->r1) {
        // 0x800F656C: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800F6578;
    }
    // 0x800F656C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6570: b           L_800F6580
    // 0x800F6574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800F6580;
    // 0x800F6574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800F6578:
    // 0x800F6578: jal         0x8009E674
    // 0x800F657C: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    func_8009E674(rdram, ctx);
        goto after_2;
    // 0x800F657C: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_2:
L_800F6580:
    // 0x800F6580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6584: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F6588: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6590: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6594: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6598: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F659C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F65A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F65A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F65A8: jal         0x8009E6F8
    // 0x800F65AC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009E6F8(rdram, ctx);
        goto after_0;
    // 0x800F65AC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F65B0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F65B4: jal         0x8009CBDC
    // 0x800F65B8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009CBDC(rdram, ctx);
        goto after_1;
    // 0x800F65B8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x800F65BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F65C0: xori        $t7, $v0, 0xA
    ctx->r15 = ctx->r2 ^ 0XA;
    // 0x800F65C4: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800F65C8: jr          $ra
    // 0x800F65CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800F65CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800F65D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F65D0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800F65D4: lbu         $t6, 0x762C($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X762C);
    // 0x800F65D8: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x800F65DC: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800F65E0: bne         $t6, $at, L_800F65F0
    if (ctx->r14 != ctx->r1) {
            // 0x800F65E4: nop

    func_800F65F0(rdram, ctx);
    return;
    }
    // 0x800F65E4: nop

    // 0x800F65E8: jr          $ra
    // 0x800F65EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800F65EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800F65F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F65F0: lw          $t7, 0x54DC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X54DC);
    // 0x800F65F4: xor         $v1, $a0, $t7
    ctx->r3 = ctx->r4 ^ ctx->r15;
    // 0x800F65F8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800F65FC: jr          $ra
    // 0x800F6600: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800F6600: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800F6604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6604: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6608: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F660C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6610: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6614: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6618: jal         0x80084618
    // 0x800F661C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    _bacough_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x800F661C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F6620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6624: xori        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 ^ 0X2;
    // 0x800F6628: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800F662C: jr          $ra
    // 0x800F6630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800F6630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800F6634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6634: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800F6638: jr          $ra
    // 0x800F663C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800F663C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800F6640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6640: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6644: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6648: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F664C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F6650: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F6654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6658: jal         0x80092EA4
    // 0x800F665C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80092EA4(rdram, ctx);
        goto after_0;
    // 0x800F665C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F6660: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x800F6664: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800F6668: beq         $t7, $zero, L_800F6680
    if (ctx->r15 == 0) {
        // 0x800F666C: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800F6680;
    }
    // 0x800F666C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6670: jal         0x80091E80
    // 0x800F6674: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091E80(rdram, ctx);
        goto after_1;
    // 0x800F6674: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800F6678: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x800F667C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_800F6680:
    // 0x800F6680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6684: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F6688: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6690: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F6698: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F669C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F66A0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F66A4: jal         0x80092EB0
    // 0x800F66A8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_80092EB0(rdram, ctx);
        goto after_0;
    // 0x800F66A8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F66AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F66B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F66B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F66BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F66BC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800F66C0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F66C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F66C8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F66CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F66D0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F66D4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800F66D8: jal         0x8008DAE8
    // 0x800F66DC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8008DAE8(rdram, ctx);
        goto after_0;
    // 0x800F66DC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F66E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F66E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F66E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F66F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F66F0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F66F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F66F8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F66FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6700: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6704: jal         0x8009E6F8
    // 0x800F6708: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8009E6F8(rdram, ctx);
        goto after_0;
    // 0x800F6708: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F670C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6710: xori        $t7, $v0, 0x6F
    ctx->r15 = ctx->r2 ^ 0X6F;
    // 0x800F6714: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800F6718: jr          $ra
    // 0x800F671C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800F671C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800F6720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6720: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6724: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6728: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F672C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F6730: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F6734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6738: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x800F673C: jal         0x8009E71C
    // 0x800F6740: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009E71C(rdram, ctx);
        goto after_0;
    // 0x800F6740: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F6744: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x800F6748: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800F674C: bne         $t7, $zero, L_800F6764
    if (ctx->r15 != 0) {
        // 0x800F6750: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800F6764;
    }
    // 0x800F6750: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6754: jal         0x8008DE74
    // 0x800F6758: nop

    func_8008DE74(rdram, ctx);
        goto after_1;
    // 0x800F6758: nop

    after_1:
    // 0x800F675C: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x800F6760: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_800F6764:
    // 0x800F6764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6768: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F676C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6774: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F6778: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F677C: jal         0x800F6D24
    // 0x800F6780: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F6D24(rdram, ctx);
        goto after_0;
    // 0x800F6780: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F6784: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800F6788: beq         $t6, $zero, L_800F67DC
    if (ctx->r14 == 0) {
        // 0x800F678C: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_800F67DC;
    }
    // 0x800F678C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800F6790: jal         0x800F8088
    // 0x800F6794: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800F8088(rdram, ctx);
        goto after_1;
    // 0x800F6794: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800F6798: sltiu       $t7, $v0, 0x1
    ctx->r15 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800F679C: beq         $t7, $zero, L_800F67DC
    if (ctx->r15 == 0) {
        // 0x800F67A0: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_800F67DC;
    }
    // 0x800F67A0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800F67A4: jal         0x800F68B8
    // 0x800F67A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800F68B8(rdram, ctx);
        goto after_2;
    // 0x800F67A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x800F67AC: sltiu       $t8, $v0, 0x1
    ctx->r24 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800F67B0: beq         $t8, $zero, L_800F67DC
    if (ctx->r24 == 0) {
        // 0x800F67B4: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_800F67DC;
    }
    // 0x800F67B4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x800F67B8: jal         0x800F6CC8
    // 0x800F67BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800F6CC8(rdram, ctx);
        goto after_3;
    // 0x800F67BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x800F67C0: sltiu       $t9, $v0, 0x1
    ctx->r25 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800F67C4: beq         $t9, $zero, L_800F67DC
    if (ctx->r25 == 0) {
        // 0x800F67C8: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_800F67DC;
    }
    // 0x800F67C8: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x800F67CC: jal         0x800A8264
    // 0x800F67D0: nop

    func_800A8264(rdram, ctx);
        goto after_4;
    // 0x800F67D0: nop

    after_4:
    // 0x800F67D4: sltiu       $t0, $v0, 0x1
    ctx->r8 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800F67D8: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_800F67DC:
    // 0x800F67DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F67E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F67E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F67EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F67EC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F67F0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F67F4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F67F8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F67FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F6800: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6804: jal         0x8009E6F8
    // 0x800F6808: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009E6F8(rdram, ctx);
        goto after_0;
    // 0x800F6808: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F680C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6810: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800F6814: jal         0x8009CA70
    // 0x800F6818: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    func_8009CA70(rdram, ctx);
        goto after_1;
    // 0x800F6818: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    after_1:
    // 0x800F681C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6820: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F6824: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F682C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F682C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F6830: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6834: jal         0x800F6D24
    // 0x800F6838: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F6D24(rdram, ctx);
        goto after_0;
    // 0x800F6838: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F683C: beq         $v0, $zero, L_800F684C
    if (ctx->r2 == 0) {
        // 0x800F6840: nop
    
            goto L_800F684C;
    }
    // 0x800F6840: nop

    // 0x800F6844: b           L_800F68A8
    // 0x800F6848: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800F68A8;
    // 0x800F6848: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F684C:
    // 0x800F684C: jal         0x800F6478
    // 0x800F6850: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800F6478(rdram, ctx);
        goto after_1;
    // 0x800F6850: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800F6854: bne         $v0, $zero, L_800F6864
    if (ctx->r2 != 0) {
        // 0x800F6858: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_800F6864;
    }
    // 0x800F6858: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800F685C: b           L_800F68A8
    // 0x800F6860: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800F68A8;
    // 0x800F6860: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F6864:
    // 0x800F6864: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F6868: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F686C: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x800F6870: jal         0x8009BD44
    // 0x800F6874: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8009BD44(rdram, ctx);
        goto after_2;
    // 0x800F6874: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_2:
    // 0x800F6878: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800F687C: bne         $v0, $at, L_800F688C
    if (ctx->r2 != ctx->r1) {
        // 0x800F6880: nop
    
            goto L_800F688C;
    }
    // 0x800F6880: nop

    // 0x800F6884: b           L_800F68A8
    // 0x800F6888: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800F68A8;
    // 0x800F6888: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F688C:
    // 0x800F688C: jal         0x800F6C1C
    // 0x800F6890: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800F6C1C(rdram, ctx);
        goto after_3;
    // 0x800F6890: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x800F6894: bnel        $v0, $zero, L_800F68A8
    if (ctx->r2 != 0) {
        // 0x800F6898: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800F68A8;
    }
    goto skip_0;
    // 0x800F6898: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x800F689C: b           L_800F68A8
    // 0x800F68A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800F68A8;
    // 0x800F68A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800F68A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800F68A8:
    // 0x800F68A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F68AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F68B0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F68B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F68B8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F68BC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F68C0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F68C4: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F68C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F68CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F68D0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800F68D4: jal         0x8009E674
    // 0x800F68D8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009E674(rdram, ctx);
        goto after_0;
    // 0x800F68D8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F68DC: beq         $v0, $zero, L_800F68F8
    if (ctx->r2 == 0) {
        // 0x800F68E0: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800F68F8;
    }
    // 0x800F68E0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F68E4: jal         0x80084800
    // 0x800F68E8: nop

    _badrone_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x800F68E8: nop

    after_1:
    // 0x800F68EC: xori        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 ^ 0X1;
    // 0x800F68F0: b           L_800F68FC
    // 0x800F68F4: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
        goto L_800F68FC;
    // 0x800F68F4: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
L_800F68F8:
    // 0x800F68F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F68FC:
    // 0x800F68FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6900: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F6904: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F690C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F690C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6910: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F6914: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6918: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F691C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6920: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F6924: jal         0x80095738
    // 0x800F6928: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_80095738(rdram, ctx);
        goto after_0;
    // 0x800F6928: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_0:
    // 0x800F692C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F6934: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F693C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F693C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6940: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F6944: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6948: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F694C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6950: jal         0x8008DD70
    // 0x800F6954: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8008DD70(rdram, ctx);
        goto after_0;
    // 0x800F6954: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F6958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F695C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F6960: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6968: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F696C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6970: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6974: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F6978: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F697C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6980: jal         0x800964DC
    // 0x800F6984: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_800964DC(rdram, ctx);
        goto after_0;
    // 0x800F6984: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F6988: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x800F698C: jal         0x8009C150
    // 0x800F6990: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8009C150(rdram, ctx);
        goto after_1;
    // 0x800F6990: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x800F6994: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800F6998: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800F699C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F69A0: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x800F69A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800F69A8: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x800F69AC: nop

    // 0x800F69B0: bc1fl       L_800F69C0
    if (!c1cs) {
        // 0x800F69B4: sltu        $t7, $zero, $v0
        ctx->r15 = 0 < ctx->r2 ? 1 : 0;
            goto L_800F69C0;
    }
    goto skip_0;
    // 0x800F69B4: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    skip_0:
    // 0x800F69B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800F69BC: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
L_800F69C0:
    // 0x800F69C0: beq         $t7, $zero, L_800F69D8
    if (ctx->r15 == 0) {
        // 0x800F69C4: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_800F69D8;
    }
    // 0x800F69C4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800F69C8: jal         0x800966BC
    // 0x800F69CC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800966BC(rdram, ctx);
        goto after_2;
    // 0x800F69CC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x800F69D0: andi        $t8, $v0, 0x2000
    ctx->r24 = ctx->r2 & 0X2000;
    // 0x800F69D4: sltu        $v0, $zero, $t8
    ctx->r2 = 0 < ctx->r24 ? 1 : 0;
L_800F69D8:
    // 0x800F69D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F69DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F69E0: jr          $ra
    // 0x800F69E4: nop

    return;
    // 0x800F69E4: nop

;}
RECOMP_FUNC void func_800F69E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F69E8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F69EC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F69F0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F69F4: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F69F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F69FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6A00: jal         0x8008E078
    // 0x800F6A04: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8008E078(rdram, ctx);
        goto after_0;
    // 0x800F6A04: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F6A08: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x800F6A0C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800F6A10: beq         $t7, $zero, L_800F6A28
    if (ctx->r15 == 0) {
        // 0x800F6A14: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800F6A28;
    }
    // 0x800F6A14: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6A18: jal         0x8009659C
    // 0x800F6A1C: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    func_8009659C(rdram, ctx);
        goto after_1;
    // 0x800F6A1C: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    after_1:
    // 0x800F6A20: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x800F6A24: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_800F6A28:
    // 0x800F6A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6A2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F6A30: jr          $ra
    // 0x800F6A34: nop

    return;
    // 0x800F6A34: nop

;}
RECOMP_FUNC void func_800F6A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6A38: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6A3C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6A40: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6A44: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F6A48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F6A4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6A50: jal         0x8008E35C
    // 0x800F6A54: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8008E35C(rdram, ctx);
        goto after_0;
    // 0x800F6A54: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F6A58: bne         $v0, $zero, L_800F6A68
    if (ctx->r2 != 0) {
        // 0x800F6A5C: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800F6A68;
    }
    // 0x800F6A5C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6A60: b           L_800F6A94
    // 0x800F6A64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800F6A94;
    // 0x800F6A64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F6A68:
    // 0x800F6A68: jal         0x800966BC
    // 0x800F6A6C: nop

    func_800966BC(rdram, ctx);
        goto after_1;
    // 0x800F6A6C: nop

    after_1:
    // 0x800F6A70: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x800F6A74: ori         $v1, $v1, 0x2000
    ctx->r3 = ctx->r3 | 0X2000;
    // 0x800F6A78: and         $t7, $v0, $v1
    ctx->r15 = ctx->r2 & ctx->r3;
    // 0x800F6A7C: bnel        $v1, $t7, L_800F6A90
    if (ctx->r3 != ctx->r15) {
        // 0x800F6A80: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800F6A90;
    }
    goto skip_0;
    // 0x800F6A80: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    skip_0:
    // 0x800F6A84: b           L_800F6A90
    // 0x800F6A88: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800F6A90;
    // 0x800F6A88: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800F6A8C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800F6A90:
    // 0x800F6A90: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800F6A94:
    // 0x800F6A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6A98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F6A9C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6AA4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6AA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F6AAC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6AB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6AB4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6AB8: jal         0x8009E6F8
    // 0x800F6ABC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8009E6F8(rdram, ctx);
        goto after_0;
    // 0x800F6ABC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F6AC0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800F6AC4: xori        $t7, $v0, 0x1B
    ctx->r15 = ctx->r2 ^ 0X1B;
    // 0x800F6AC8: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800F6ACC: bne         $v0, $zero, L_800F6B2C
    if (ctx->r2 != 0) {
        // 0x800F6AD0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F6B2C;
    }
    // 0x800F6AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6AD4: xori        $v0, $v1, 0x1C
    ctx->r2 = ctx->r3 ^ 0X1C;
    // 0x800F6AD8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800F6ADC: bne         $v0, $zero, L_800F6B2C
    if (ctx->r2 != 0) {
        // 0x800F6AE0: nop
    
            goto L_800F6B2C;
    }
    // 0x800F6AE0: nop

    // 0x800F6AE4: xori        $v0, $v1, 0x1D
    ctx->r2 = ctx->r3 ^ 0X1D;
    // 0x800F6AE8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800F6AEC: bne         $v0, $zero, L_800F6B2C
    if (ctx->r2 != 0) {
        // 0x800F6AF0: nop
    
            goto L_800F6B2C;
    }
    // 0x800F6AF0: nop

    // 0x800F6AF4: xori        $v0, $v1, 0x1E
    ctx->r2 = ctx->r3 ^ 0X1E;
    // 0x800F6AF8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800F6AFC: bne         $v0, $zero, L_800F6B2C
    if (ctx->r2 != 0) {
        // 0x800F6B00: nop
    
            goto L_800F6B2C;
    }
    // 0x800F6B00: nop

    // 0x800F6B04: xori        $v0, $v1, 0x1A
    ctx->r2 = ctx->r3 ^ 0X1A;
    // 0x800F6B08: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800F6B0C: bne         $v0, $zero, L_800F6B2C
    if (ctx->r2 != 0) {
        // 0x800F6B10: nop
    
            goto L_800F6B2C;
    }
    // 0x800F6B10: nop

    // 0x800F6B14: xori        $v0, $v1, 0xA4
    ctx->r2 = ctx->r3 ^ 0XA4;
    // 0x800F6B18: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800F6B1C: bne         $v0, $zero, L_800F6B2C
    if (ctx->r2 != 0) {
        // 0x800F6B20: nop
    
            goto L_800F6B2C;
    }
    // 0x800F6B20: nop

    // 0x800F6B24: xori        $v0, $v1, 0xA5
    ctx->r2 = ctx->r3 ^ 0XA5;
    // 0x800F6B28: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_800F6B2C:
    // 0x800F6B2C: jr          $ra
    // 0x800F6B30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800F6B30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800F6B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6B34: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800F6B38: jr          $ra
    // 0x800F6B3C: lbu         $v0, 0x54DA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X54DA);
    return;
    // 0x800F6B3C: lbu         $v0, 0x54DA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X54DA);
;}
RECOMP_FUNC void func_800F6B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6B40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F6B44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6B48: jal         0x800F690C
    // 0x800F6B4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F690C(rdram, ctx);
        goto after_0;
    // 0x800F6B4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F6B50: beq         $v0, $zero, L_800F6B60
    if (ctx->r2 == 0) {
        // 0x800F6B54: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_800F6B60;
    }
    // 0x800F6B54: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800F6B58: b           L_800F6B84
    // 0x800F6B5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800F6B84;
    // 0x800F6B5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800F6B60:
    // 0x800F6B60: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F6B64: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6B68: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x800F6B6C: jal         0x800A4CA8
    // 0x800F6B70: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800A4CA8(rdram, ctx);
        goto after_1;
    // 0x800F6B70: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_1:
    // 0x800F6B74: jal         0x80089418
    // 0x800F6B78: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _ncba1p_entrypoint_10(rdram, ctx);
        goto after_2;
    // 0x800F6B78: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800F6B7C: xori        $t8, $v0, 0x3
    ctx->r24 = ctx->r2 ^ 0X3;
    // 0x800F6B80: sltiu       $v0, $t8, 0x1
    ctx->r2 = ctx->r24 < 0X1 ? 1 : 0;
L_800F6B84:
    // 0x800F6B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6B88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F6B8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6B94: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6B98: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6B9C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6BA0: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F6BA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F6BA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6BAC: jal         0x800A3274
    // 0x800F6BB0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_800A3274(rdram, ctx);
        goto after_0;
    // 0x800F6BB0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F6BB4: xori        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 ^ 0X2;
    // 0x800F6BB8: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800F6BBC: beq         $v0, $zero, L_800F6BD4
    if (ctx->r2 == 0) {
        // 0x800F6BC0: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800F6BD4;
    }
    // 0x800F6BC0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6BC4: jal         0x800A1718
    // 0x800F6BC8: nop

    func_800A1718(rdram, ctx);
        goto after_1;
    // 0x800F6BC8: nop

    after_1:
    // 0x800F6BCC: slti        $t8, $v0, 0x5
    ctx->r24 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x800F6BD0: xori        $v0, $t8, 0x1
    ctx->r2 = ctx->r24 ^ 0X1;
L_800F6BD4:
    // 0x800F6BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6BD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F6BDC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6BE4: bltz        $a0, L_800F6C10
    if (SIGNED(ctx->r4) < 0) {
            // 0x800F6BE8: slti        $at, $a0, 0x8
    ctx->r1 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    func_800F6C10(rdram, ctx);
    return;
    }
    // 0x800F6BE8: slti        $at, $a0, 0x8
    ctx->r1 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x800F6BEC: beq         $at, $zero, L_800F6C10
    if (ctx->r1 == 0) {
            // 0x800F6BF0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    func_800F6C10(rdram, ctx);
    return;
    }
    // 0x800F6BF0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6BF4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800F6BF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F6BFC: lw          $t7, 0x5490($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5490);
    // 0x800F6C00: beql        $t7, $zero, L_800F6C14
    if (ctx->r15 == 0) {
            // 0x800F6C04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    static_3_800F6C14(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x800F6C04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x800F6C08: jr          $ra
    // 0x800F6C0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800F6C0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800F6C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6C10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800F6C14: jr          $ra
    // 0x800F6C18: nop

    return;
    // 0x800F6C18: nop

;}
RECOMP_FUNC void func_800F6C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6C1C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6C20: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6C24: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6C28: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F6C2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F6C30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6C34: jal         0x8009E6F8
    // 0x800F6C38: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009E6F8(rdram, ctx);
        goto after_0;
    // 0x800F6C38: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F6C3C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6C40: jal         0x8009CB44
    // 0x800F6C44: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009CB44(rdram, ctx);
        goto after_1;
    // 0x800F6C44: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x800F6C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6C4C: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x800F6C50: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800F6C54: jr          $ra
    // 0x800F6C58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800F6C58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800F6C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6C5C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6C60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F6C64: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6C68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6C6C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6C70: jal         0x8008E078
    // 0x800F6C74: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8008E078(rdram, ctx);
        goto after_0;
    // 0x800F6C74: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F6C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6C7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F6C80: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6C88: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6C8C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6C90: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6C94: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F6C98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F6C9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6CA0: jal         0x8009E6F8
    // 0x800F6CA4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009E6F8(rdram, ctx);
        goto after_0;
    // 0x800F6CA4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F6CA8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6CAC: jal         0x8009CBDC
    // 0x800F6CB0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009CBDC(rdram, ctx);
        goto after_1;
    // 0x800F6CB0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x800F6CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6CB8: xori        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 ^ 0X2;
    // 0x800F6CBC: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800F6CC0: jr          $ra
    // 0x800F6CC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800F6CC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800F6CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6CC8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6CCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F6CD0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6CD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6CD8: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6CDC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F6CE0: jal         0x8009E674
    // 0x800F6CE4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8009E674(rdram, ctx);
        goto after_0;
    // 0x800F6CE4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x800F6CE8: beq         $v0, $zero, L_800F6CF8
    if (ctx->r2 == 0) {
        // 0x800F6CEC: nop
    
            goto L_800F6CF8;
    }
    // 0x800F6CEC: nop

    // 0x800F6CF0: b           L_800F6D14
    // 0x800F6CF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800F6D14;
    // 0x800F6CF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800F6CF8:
    // 0x800F6CF8: jal         0x800F8B64
    // 0x800F6CFC: nop

    func_800F8B64(rdram, ctx);
        goto after_1;
    // 0x800F6CFC: nop

    after_1:
    // 0x800F6D00: beql        $v0, $zero, L_800F6D14
    if (ctx->r2 == 0) {
        // 0x800F6D04: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800F6D14;
    }
    goto skip_0;
    // 0x800F6D04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x800F6D08: b           L_800F6D14
    // 0x800F6D0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800F6D14;
    // 0x800F6D0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800F6D10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F6D14:
    // 0x800F6D14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6D18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F6D1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6D24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6D24: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6D28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F6D2C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6D30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6D34: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6D38: jal         0x8008E124
    // 0x800F6D3C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8008E124(rdram, ctx);
        goto after_0;
    // 0x800F6D3C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F6D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6D44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F6D48: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6D50: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6D54: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6D58: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6D5C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F6D60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F6D64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6D68: jal         0x8008E124
    // 0x800F6D6C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8008E124(rdram, ctx);
        goto after_0;
    // 0x800F6D6C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F6D70: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x800F6D74: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800F6D78: beq         $t7, $zero, L_800F6D90
    if (ctx->r15 == 0) {
        // 0x800F6D7C: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800F6D90;
    }
    // 0x800F6D7C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6D80: jal         0x8009E674
    // 0x800F6D84: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8009E674(rdram, ctx);
        goto after_1;
    // 0x800F6D84: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x800F6D88: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x800F6D8C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_800F6D90:
    // 0x800F6D90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6D94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F6D98: jr          $ra
    // 0x800F6D9C: nop

    return;
    // 0x800F6D9C: nop

;}
RECOMP_FUNC void func_800F6DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6DA0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6DA4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6DA8: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6DAC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F6DB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F6DB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6DB8: jal         0x8009E6F8
    // 0x800F6DBC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009E6F8(rdram, ctx);
        goto after_0;
    // 0x800F6DBC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F6DC0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6DC4: jal         0x8009CBDC
    // 0x800F6DC8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009CBDC(rdram, ctx);
        goto after_1;
    // 0x800F6DC8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x800F6DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6DD0: xori        $t7, $v0, 0x12
    ctx->r15 = ctx->r2 ^ 0X12;
    // 0x800F6DD4: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800F6DD8: jr          $ra
    // 0x800F6DDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800F6DDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800F6DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6DE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F6DE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6DE8: jal         0x80082828
    // 0x800F6DEC: nop

    _bsbabykaz_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x800F6DEC: nop

    after_0:
    // 0x800F6DF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6DF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F6DF8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6E00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6E00: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6E04: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6E08: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6E0C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F6E10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F6E14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6E18: jal         0x8009E6F8
    // 0x800F6E1C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009E6F8(rdram, ctx);
        goto after_0;
    // 0x800F6E1C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F6E20: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6E24: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800F6E28: jal         0x8009CA70
    // 0x800F6E2C: lui         $a2, 0x10
    ctx->r6 = S32(0X10 << 16);
    func_8009CA70(rdram, ctx);
        goto after_1;
    // 0x800F6E2C: lui         $a2, 0x10
    ctx->r6 = S32(0X10 << 16);
    after_1:
    // 0x800F6E30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6E34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F6E38: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6E40: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6E44: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6E48: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6E4C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F6E50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F6E54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6E58: jal         0x8009E6F8
    // 0x800F6E5C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009E6F8(rdram, ctx);
        goto after_0;
    // 0x800F6E5C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F6E60: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6E64: jal         0x8009CBDC
    // 0x800F6E68: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009CBDC(rdram, ctx);
        goto after_1;
    // 0x800F6E68: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x800F6E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6E70: xori        $t7, $v0, 0x13
    ctx->r15 = ctx->r2 ^ 0X13;
    // 0x800F6E74: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800F6E78: jr          $ra
    // 0x800F6E7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800F6E7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800F6E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6E80: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6E84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F6E88: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6E8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6E90: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6E94: jal         0x800A336C
    // 0x800F6E98: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800A336C(rdram, ctx);
        goto after_0;
    // 0x800F6E98: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F6E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6EA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F6EA4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F6EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6EAC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F6EB0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6EB4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F6EB8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F6EBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F6EC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6EC4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800F6EC8: jal         0x8009E674
    // 0x800F6ECC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009E674(rdram, ctx);
        goto after_0;
    // 0x800F6ECC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F6ED0: beq         $v0, $zero, L_800F6EEC
    if (ctx->r2 == 0) {
        // 0x800F6ED4: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800F6EEC;
    }
    // 0x800F6ED4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6ED8: jal         0x80084800
    // 0x800F6EDC: nop

    _badrone_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x800F6EDC: nop

    after_1:
    // 0x800F6EE0: xori        $t7, $v0, 0x9
    ctx->r15 = ctx->r2 ^ 0X9;
    // 0x800F6EE4: b           L_800F6EF0
    // 0x800F6EE8: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
        goto L_800F6EF0;
    // 0x800F6EE8: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
L_800F6EEC:
    // 0x800F6EEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F6EF0:
    // 0x800F6EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F6EF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F6EF8: jr          $ra
    // 0x800F6EFC: nop

    return;
    // 0x800F6EFC: nop

;}
RECOMP_FUNC void func_800F6F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6F00: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800F6F04: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800F6F08: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800F6F0C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F6F10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6F14: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x800F6F18: jal         0x800846B0
    // 0x800F6F1C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    _badata_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x800F6F1C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F6F20: bne         $v0, $zero, L_800F6F30
    if (ctx->r2 != 0) {
        // 0x800F6F24: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_800F6F30;
    }
    // 0x800F6F24: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800F6F28: b           L_800F7008
    // 0x800F6F2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800F7008;
    // 0x800F6F2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800F6F30:
    // 0x800F6F30: jal         0x800F58CC
    // 0x800F6F34: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800F58CC(rdram, ctx);
        goto after_1;
    // 0x800F6F34: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x800F6F38: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800F6F3C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800F6F40: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800F6F44: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x800F6F48: nop

    // 0x800F6F4C: bc1f        L_800F6F64
    if (!c1cs) {
        // 0x800F6F50: nop
    
            goto L_800F6F64;
    }
    // 0x800F6F50: nop

    // 0x800F6F54: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x800F6F58: nop

    // 0x800F6F5C: bc1t        L_800F6F6C
    if (c1cs) {
        // 0x800F6F60: nop
    
            goto L_800F6F6C;
    }
    // 0x800F6F60: nop

L_800F6F64:
    // 0x800F6F64: b           L_800F7008
    // 0x800F6F68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800F7008;
    // 0x800F6F68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F6F6C:
    // 0x800F6F6C: jal         0x800F6C5C
    // 0x800F6F70: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_800F6C5C(rdram, ctx);
        goto after_2;
    // 0x800F6F70: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_2:
    // 0x800F6F74: bne         $v0, $zero, L_800F6F84
    if (ctx->r2 != 0) {
        // 0x800F6F78: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_800F6F84;
    }
    // 0x800F6F78: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800F6F7C: b           L_800F7008
    // 0x800F6F80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800F7008;
    // 0x800F6F80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F6F84:
    // 0x800F6F84: jal         0x800F5D70
    // 0x800F6F88: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800F5D70(rdram, ctx);
        goto after_3;
    // 0x800F6F88: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x800F6F8C: jal         0x800F55FC
    // 0x800F6F90: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_800F55FC(rdram, ctx);
        goto after_4;
    // 0x800F6F90: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_4:
    // 0x800F6F94: andi        $t8, $v0, 0x8000
    ctx->r24 = ctx->r2 & 0X8000;
    // 0x800F6F98: beq         $t8, $zero, L_800F6FE4
    if (ctx->r24 == 0) {
        // 0x800F6F9C: lwc1        $f0, 0x24($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
            goto L_800F6FE4;
    }
    // 0x800F6F9C: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F6FA0: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F6FA4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F6FA8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800F6FAC: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x800F6FB0: nop

    // 0x800F6FB4: bc1f        L_800F6FDC
    if (!c1cs) {
        // 0x800F6FB8: nop
    
            goto L_800F6FDC;
    }
    // 0x800F6FB8: nop

    // 0x800F6FBC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800F6FC0: nop

    // 0x800F6FC4: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x800F6FC8: nop

    // 0x800F6FCC: bc1f        L_800F6FDC
    if (!c1cs) {
        // 0x800F6FD0: nop
    
            goto L_800F6FDC;
    }
    // 0x800F6FD0: nop

    // 0x800F6FD4: b           L_800F7008
    // 0x800F6FD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800F7008;
    // 0x800F6FD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800F6FDC:
    // 0x800F6FDC: b           L_800F7008
    // 0x800F6FE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800F7008;
    // 0x800F6FE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F6FE4:
    // 0x800F6FE4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800F6FE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800F6FEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800F6FF0: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x800F6FF4: nop

    // 0x800F6FF8: bc1t        L_800F7008
    if (c1cs) {
        // 0x800F6FFC: nop
    
            goto L_800F7008;
    }
    // 0x800F6FFC: nop

    // 0x800F7000: b           L_800F7008
    // 0x800F7004: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800F7008;
    // 0x800F7004: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F7008:
    // 0x800F7008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F700C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800F7010: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7018: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F701C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7020: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F7024: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F7028: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F702C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7030: jal         0x8009E6F8
    // 0x800F7034: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009E6F8(rdram, ctx);
        goto after_0;
    // 0x800F7034: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F7038: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F703C: jal         0x8009CBDC
    // 0x800F7040: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009CBDC(rdram, ctx);
        goto after_1;
    // 0x800F7040: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x800F7044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7048: xori        $t7, $v0, 0x8
    ctx->r15 = ctx->r2 ^ 0X8;
    // 0x800F704C: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800F7050: jr          $ra
    // 0x800F7054: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800F7054: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800F7058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7058: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F705C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7060: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F7064: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F7068: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F706C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7070: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x800F7074: jal         0x8009E674
    // 0x800F7078: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009E674(rdram, ctx);
        goto after_0;
    // 0x800F7078: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F707C: beq         $v0, $zero, L_800F70A8
    if (ctx->r2 == 0) {
        // 0x800F7080: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800F70A8;
    }
    // 0x800F7080: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7084: jal         0x80084FE0
    // 0x800F7088: nop

    _bashoes_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x800F7088: nop

    after_1:
    // 0x800F708C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800F7090: bne         $v0, $at, L_800F70A0
    if (ctx->r2 != ctx->r1) {
        // 0x800F7094: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_800F70A0;
    }
    // 0x800F7094: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800F7098: b           L_800F70AC
    // 0x800F709C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800F70AC;
    // 0x800F709C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800F70A0:
    // 0x800F70A0: b           L_800F70AC
    // 0x800F70A4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_800F70AC;
    // 0x800F70A4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800F70A8:
    // 0x800F70A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F70AC:
    // 0x800F70AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F70B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F70B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F70BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F70BC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F70C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F70C4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F70C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F70CC: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F70D0: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F70D4: jal         0x8009E71C
    // 0x800F70D8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_8009E71C(rdram, ctx);
        goto after_0;
    // 0x800F70D8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_0:
    // 0x800F70DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F70E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F70E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F70EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F70EC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F70F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F70F4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F70F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F70FC: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F7100: jal         0x8009BD44
    // 0x800F7104: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8009BD44(rdram, ctx);
        goto after_0;
    // 0x800F7104: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F7108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F710C: xori        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 ^ 0X3;
    // 0x800F7110: sltu        $v0, $zero, $t7
    ctx->r2 = 0 < ctx->r15 ? 1 : 0;
    // 0x800F7114: jr          $ra
    // 0x800F7118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800F7118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800F711C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F711C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7120: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F7124: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7128: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F712C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F7130: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F7134: jal         0x8009E674
    // 0x800F7138: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8009E674(rdram, ctx);
        goto after_0;
    // 0x800F7138: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x800F713C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7140: sltiu       $t7, $v0, 0x1
    ctx->r15 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800F7144: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800F7148: jr          $ra
    // 0x800F714C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800F714C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800F7150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7150: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7154: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F7158: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F715C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7160: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F7164: jal         0x80094510
    // 0x800F7168: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_80094510(rdram, ctx);
        goto after_0;
    // 0x800F7168: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F716C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7170: xori        $t7, $v0, 0x7
    ctx->r15 = ctx->r2 ^ 0X7;
    // 0x800F7174: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800F7178: jr          $ra
    // 0x800F717C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800F717C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800F7180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7180: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7184: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7188: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F718C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F7190: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7194: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7198: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800F719C: jal         0x8009E674
    // 0x800F71A0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009E674(rdram, ctx);
        goto after_0;
    // 0x800F71A0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F71A4: beq         $v0, $zero, L_800F71C0
    if (ctx->r2 == 0) {
        // 0x800F71A8: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800F71C0;
    }
    // 0x800F71A8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F71AC: jal         0x80084800
    // 0x800F71B0: nop

    _badrone_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x800F71B0: nop

    after_1:
    // 0x800F71B4: xori        $t7, $v0, 0xE
    ctx->r15 = ctx->r2 ^ 0XE;
    // 0x800F71B8: b           L_800F71C4
    // 0x800F71BC: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
        goto L_800F71C4;
    // 0x800F71BC: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
L_800F71C0:
    // 0x800F71C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F71C4:
    // 0x800F71C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F71C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F71CC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F71D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F71D4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F71D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F71DC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F71E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F71E4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F71E8: jal         0x8008E37C
    // 0x800F71EC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8008E37C(rdram, ctx);
        goto after_0;
    // 0x800F71EC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F71F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F71F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F71F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7200: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800F7204: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F7208: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F720C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800F7210: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x800F7214: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F7218: lw          $t7, 0x5490($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5490);
    // 0x800F721C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7224: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800F7228: bc1t        L_800F7244
    if (c1cs) {
        // 0x800F722C: sw          $t7, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r15;
            goto L_800F7244;
    }
    // 0x800F722C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800F7230: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800F7234: jal         0x8008DDEC
    // 0x800F7238: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8008DDEC(rdram, ctx);
        goto after_0;
    // 0x800F7238: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x800F723C: beql        $v0, $zero, L_800F7260
    if (ctx->r2 == 0) {
        // 0x800F7240: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800F7260;
    }
    goto skip_0;
    // 0x800F7240: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
L_800F7244:
    // 0x800F7244: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7248: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800F724C: jal         0x8008F568
    // 0x800F7250: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    func_8008F568(rdram, ctx);
        goto after_1;
    // 0x800F7250: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x800F7254: b           L_800F7264
    // 0x800F7258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F7264;
    // 0x800F7258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F725C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F7260:
    // 0x800F7260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F7264:
    // 0x800F7264: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F7268: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7270: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800F7274: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7278: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800F727C: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800F7280: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800F7284: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7288: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F728C: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x800F7290: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800F7294: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800F7298: jal         0x8008DEA4
    // 0x800F729C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8008DEA4(rdram, ctx);
        goto after_0;
    // 0x800F729C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F72A0: beq         $v0, $zero, L_800F72C8
    if (ctx->r2 == 0) {
        // 0x800F72A4: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_800F72C8;
    }
    // 0x800F72A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800F72A8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800F72AC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800F72B0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800F72B4: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x800F72B8: jal         0x800F7200
    // 0x800F72BC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_800F7200(rdram, ctx);
        goto after_1;
    // 0x800F72BC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_1:
    // 0x800F72C0: b           L_800F72D0
    // 0x800F72C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800F72D0;
    // 0x800F72C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800F72C8:
    // 0x800F72C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800F72CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800F72D0:
    // 0x800F72D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F72D4: jr          $ra
    // 0x800F72D8: nop

    return;
    // 0x800F72D8: nop

;}
RECOMP_FUNC void func_800F72DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F72DC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F72E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F72E4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F72E8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F72EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F72F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F72F4: jal         0x8009640C
    // 0x800F72F8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009640C(rdram, ctx);
        goto after_0;
    // 0x800F72F8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F72FC: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x800F7300: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800F7304: bne         $t7, $zero, L_800F731C
    if (ctx->r15 != 0) {
        // 0x800F7308: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800F731C;
    }
    // 0x800F7308: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F730C: jal         0x80095738
    // 0x800F7310: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    func_80095738(rdram, ctx);
        goto after_1;
    // 0x800F7310: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_1:
    // 0x800F7314: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x800F7318: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_800F731C:
    // 0x800F731C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7320: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F7324: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F732C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F732C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F7330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7334: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800F7338: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F733C: sb          $t6, 0x54DA($at)
    MEM_B(0X54DA, ctx->r1) = ctx->r14;
    // 0x800F7340: jal         0x800F482C
    // 0x800F7344: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_800F482C(rdram, ctx);
        goto after_0;
    // 0x800F7344: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_0:
    // 0x800F7348: jal         0x800F482C
    // 0x800F734C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800F482C(rdram, ctx);
        goto after_1;
    // 0x800F734C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x800F7350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7354: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F7358: sb          $zero, 0x54DA($at)
    MEM_B(0X54DA, ctx->r1) = 0;
    // 0x800F735C: jr          $ra
    // 0x800F7360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800F7360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800F7364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7364: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7368: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800F736C: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x800F7370: lw          $a1, 0x5490($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5490);
    // 0x800F7374: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F7378: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F737C: beql        $a1, $zero, L_800F7390
    if (ctx->r5 == 0) {
        // 0x800F7380: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F7390;
    }
    goto skip_0;
    // 0x800F7380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800F7384: jal         0x80092AA4
    // 0x800F7388: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80092AA4(rdram, ctx);
        goto after_0;
    // 0x800F7388: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x800F738C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F7390:
    // 0x800F7390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F7394: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F739C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F739C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F73A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800F73A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F73A8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800F73AC: jal         0x800C7074
    // 0x800F73B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C7074(rdram, ctx);
        goto after_0;
    // 0x800F73B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800F73B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F73B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F73BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F73C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F73C4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800F73C8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800F73CC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800F73D0: addiu       $a1, $a1, 0x5490
    ctx->r5 = ADD32(ctx->r5, 0X5490);
    // 0x800F73D4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800F73D8: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800F73DC: addiu       $v1, $t6, 0x5490
    ctx->r3 = ADD32(ctx->r14, 0X5490);
    // 0x800F73E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F73E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F73E8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800F73EC: sb          $zero, 0x4A($a1)
    MEM_B(0X4A, ctx->r5) = 0;
    // 0x800F73F0: sb          $zero, 0x49($a1)
    MEM_B(0X49, ctx->r5) = 0;
    // 0x800F73F4: addiu       $a0, $a0, 0x5498
    ctx->r4 = ADD32(ctx->r4, 0X5498);
    // 0x800F73F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800F73FC:
    // 0x800F73FC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800F7400: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x800F7404: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800F7408: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800F740C: bne         $at, $zero, L_800F73FC
    if (ctx->r1 != 0) {
        // 0x800F7410: sb          $zero, 0x1F($v1)
        MEM_B(0X1F, ctx->r3) = 0;
            goto L_800F73FC;
    }
    // 0x800F7410: sb          $zero, 0x1F($v1)
    MEM_B(0X1F, ctx->r3) = 0;
    // 0x800F7414: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x800F7418: sh          $t7, 0x52($a1)
    MEM_H(0X52, ctx->r5) = ctx->r15;
    // 0x800F741C: lh          $t8, 0x52($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X52);
    // 0x800F7420: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800F7424: jal         0x800F80D8
    // 0x800F7428: sh          $t8, 0x50($a1)
    MEM_H(0X50, ctx->r5) = ctx->r24;
    func_800F80D8(rdram, ctx);
        goto after_0;
    // 0x800F7428: sh          $t8, 0x50($a1)
    MEM_H(0X50, ctx->r5) = ctx->r24;
    after_0:
    // 0x800F742C: jal         0x800DB9B0
    // 0x800F7430: nop

    func_800DB9B0(rdram, ctx);
        goto after_1;
    // 0x800F7430: nop

    after_1:
    // 0x800F7434: bne         $v0, $zero, L_800F7478
    if (ctx->r2 != 0) {
        // 0x800F7438: nop
    
            goto L_800F7478;
    }
    // 0x800F7438: nop

    // 0x800F743C: jal         0x800887B0
    // 0x800F7440: nop

    _glcutDll_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x800F7440: nop

    after_2:
    // 0x800F7444: bne         $v0, $zero, L_800F7478
    if (ctx->r2 != 0) {
        // 0x800F7448: nop
    
            goto L_800F7478;
    }
    // 0x800F7448: nop

    // 0x800F744C: jal         0x800F99E8
    // 0x800F7450: nop

    func_800F99E8(rdram, ctx);
        goto after_3;
    // 0x800F7450: nop

    after_3:
    // 0x800F7454: bne         $v0, $zero, L_800F7478
    if (ctx->r2 != 0) {
        // 0x800F7458: nop
    
            goto L_800F7478;
    }
    // 0x800F7458: nop

    // 0x800F745C: blez        $s1, L_800F7478
    if (SIGNED(ctx->r17) <= 0) {
        // 0x800F7460: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_800F7478;
    }
    // 0x800F7460: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800F7464:
    // 0x800F7464: jal         0x800F61E4
    // 0x800F7468: nop

    func_800F61E4(rdram, ctx);
        goto after_4;
    // 0x800F7468: nop

    after_4:
    // 0x800F746C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800F7470: bne         $s0, $s1, L_800F7464
    if (ctx->r16 != ctx->r17) {
        // 0x800F7474: nop
    
            goto L_800F7464;
    }
    // 0x800F7474: nop

L_800F7478:
    // 0x800F7478: jal         0x800F8B94
    // 0x800F747C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_800F8B94(rdram, ctx);
        goto after_5;
    // 0x800F747C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_5:
    // 0x800F7480: jal         0x800F5898
    // 0x800F7484: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_800F5898(rdram, ctx);
        goto after_6;
    // 0x800F7484: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_6:
    // 0x800F7488: blez        $v0, L_800F74B8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800F748C: nop
    
            goto L_800F74B8;
    }
    // 0x800F748C: nop

L_800F7490:
    // 0x800F7490: jal         0x800F6BE4
    // 0x800F7494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F6BE4(rdram, ctx);
        goto after_7;
    // 0x800F7494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x800F7498: beq         $v0, $zero, L_800F74A4
    if (ctx->r2 == 0) {
        // 0x800F749C: nop
    
            goto L_800F74A4;
    }
    // 0x800F749C: nop

    // 0x800F74A0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800F74A4:
    // 0x800F74A4: jal         0x800F5898
    // 0x800F74A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_800F5898(rdram, ctx);
        goto after_8;
    // 0x800F74A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_8:
    // 0x800F74AC: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800F74B0: bne         $at, $zero, L_800F7490
    if (ctx->r1 != 0) {
        // 0x800F74B4: nop
    
            goto L_800F7490;
    }
    // 0x800F74B4: nop

L_800F74B8:
    // 0x800F74B8: bne         $s1, $zero, L_800F74D4
    if (ctx->r17 != 0) {
        // 0x800F74BC: nop
    
            goto L_800F74D4;
    }
    // 0x800F74BC: nop

    // 0x800F74C0: jal         0x800F61E4
    // 0x800F74C4: nop

    func_800F61E4(rdram, ctx);
        goto after_9;
    // 0x800F74C4: nop

    after_9:
    // 0x800F74C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800F74CC: jal         0x800F7E64
    // 0x800F74D0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800F7E64(rdram, ctx);
        goto after_10;
    // 0x800F74D0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_10:
L_800F74D4:
    // 0x800F74D4: jal         0x800F8B88
    // 0x800F74D8: nop

    func_800F8B88(rdram, ctx);
        goto after_11;
    // 0x800F74D8: nop

    after_11:
    // 0x800F74DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800F74E0: bne         $v0, $at, L_800F7554
    if (ctx->r2 != ctx->r1) {
        // 0x800F74E4: nop
    
            goto L_800F7554;
    }
    // 0x800F74E4: nop

    // 0x800F74E8: jal         0x800878A0
    // 0x800F74EC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_12;
    // 0x800F74EC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_12:
    // 0x800F74F0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800F74F4: jal         0x800878A0
    // 0x800F74F8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_13;
    // 0x800F74F8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_13:
    // 0x800F74FC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x800F7500: beq         $s1, $v1, L_800F7554
    if (ctx->r17 == ctx->r3) {
        // 0x800F7504: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800F7554;
    }
    // 0x800F7504: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800F7508: beq         $v0, $v1, L_800F7554
    if (ctx->r2 == ctx->r3) {
        // 0x800F750C: nop
    
            goto L_800F7554;
    }
    // 0x800F750C: nop

    // 0x800F7510: jal         0x800F65D0
    // 0x800F7514: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F65D0(rdram, ctx);
        goto after_14;
    // 0x800F7514: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_14:
    // 0x800F7518: beq         $v0, $zero, L_800F7528
    if (ctx->r2 == 0) {
        // 0x800F751C: nop
    
            goto L_800F7528;
    }
    // 0x800F751C: nop

    // 0x800F7520: b           L_800F754C
    // 0x800F7524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_800F754C;
    // 0x800F7524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800F7528:
    // 0x800F7528: jal         0x800F65D0
    // 0x800F752C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800F65D0(rdram, ctx);
        goto after_15;
    // 0x800F752C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x800F7530: beq         $v0, $zero, L_800F7540
    if (ctx->r2 == 0) {
        // 0x800F7534: nop
    
            goto L_800F7540;
    }
    // 0x800F7534: nop

    // 0x800F7538: b           L_800F754C
    // 0x800F753C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_800F754C;
    // 0x800F753C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_800F7540:
    // 0x800F7540: jal         0x800878A0
    // 0x800F7544: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_16;
    // 0x800F7544: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_16:
    // 0x800F7548: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800F754C:
    // 0x800F754C: jal         0x800F8128
    // 0x800F7550: nop

    func_800F8128(rdram, ctx);
        goto after_17;
    // 0x800F7550: nop

    after_17:
L_800F7554:
    // 0x800F7554: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800F7558: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800F755C: addiu       $s0, $s0, 0x54B0
    ctx->r16 = ADD32(ctx->r16, 0X54B0);
    // 0x800F7560: addiu       $v0, $v0, 0x5490
    ctx->r2 = ADD32(ctx->r2, 0X5490);
    // 0x800F7564: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
L_800F7568:
    // 0x800F7568: beql        $a0, $zero, L_800F7580
    if (ctx->r4 == 0) {
        // 0x800F756C: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800F7580;
    }
    goto skip_0;
    // 0x800F756C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    skip_0:
    // 0x800F7570: jal         0x80084FB0
    // 0x800F7574: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    _basetup_entrypoint_2(rdram, ctx);
        goto after_18;
    // 0x800F7574: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_18:
    // 0x800F7578: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x800F757C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_800F7580:
    // 0x800F7580: bnel        $v0, $s0, L_800F7568
    if (ctx->r2 != ctx->r16) {
        // 0x800F7584: lw          $a0, 0x0($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X0);
            goto L_800F7568;
    }
    goto skip_1;
    // 0x800F7584: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    skip_1:
    // 0x800F7588: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F758C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800F7590: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800F7594: jr          $ra
    // 0x800F7598: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800F7598: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800F759C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F759C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800F75A0: lbu         $t6, 0x54D9($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X54D9);
    // 0x800F75A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F75A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800F75AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800F75B0: beq         $t6, $zero, L_800F75C8
    if (ctx->r14 == 0) {
        // 0x800F75B4: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_800F75C8;
    }
    // 0x800F75B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F75B8: jal         0x800F82C0
    // 0x800F75BC: nop

    func_800F82C0(rdram, ctx);
        goto after_0;
    // 0x800F75BC: nop

    after_0:
    // 0x800F75C0: b           L_800F7610
    // 0x800F75C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800F7610;
    // 0x800F75C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800F75C8:
    // 0x800F75C8: addiu       $a0, $zero, 0xB5
    ctx->r4 = ADD32(0, 0XB5);
    // 0x800F75CC: jal         0x80101238
    // 0x800F75D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80101238(rdram, ctx);
        goto after_1;
    // 0x800F75D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x800F75D4: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800F75D8: addiu       $t8, $t8, 0x5490
    ctx->r24 = ADD32(ctx->r24, 0X5490);
    // 0x800F75DC: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x800F75E0: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800F75E4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800F75E8: jal         0x800F3880
    // 0x800F75EC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800F3880(rdram, ctx);
        goto after_2;
    // 0x800F75EC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x800F75F0: jal         0x800A91F4
    // 0x800F75F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A91F4(rdram, ctx);
        goto after_3;
    // 0x800F75F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800F75F8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800F75FC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F7600: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x800F7604: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x800F7608: sb          $zero, 0x54B0($at)
    MEM_B(0X54B0, ctx->r1) = 0;
    // 0x800F760C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800F7610:
    // 0x800F7610: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800F7614: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F7618: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7620: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800F7624: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800F7628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F762C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800F7630: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800F7634: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7638: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F763C: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x800F7640: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800F7644: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x800F7648: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800F764C: jal         0x80085490
    // 0x800F7650: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    _bamotor_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x800F7650: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F7654: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7658: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F765C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7664: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7668: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F766C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F7670: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F7674: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7678: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F767C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800F7680: jal         0x8009AD20
    // 0x800F7684: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009AD20(rdram, ctx);
        goto after_0;
    // 0x800F7684: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F7688: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F768C: jal         0x8009AD2C
    // 0x800F7690: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009AD2C(rdram, ctx);
        goto after_1;
    // 0x800F7690: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x800F7694: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7698: jal         0x8009E7C8
    // 0x800F769C: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    func_8009E7C8(rdram, ctx);
        goto after_2;
    // 0x800F769C: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    after_2:
    // 0x800F76A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F76A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F76A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F76B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F76B0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F76B4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F76B8: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F76BC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F76C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F76C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F76C8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800F76CC: jal         0x8009AD20
    // 0x800F76D0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009AD20(rdram, ctx);
        goto after_0;
    // 0x800F76D0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F76D4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F76D8: jal         0x8009AD14
    // 0x800F76DC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009AD14(rdram, ctx);
        goto after_1;
    // 0x800F76DC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x800F76E0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F76E4: jal         0x8009E7C8
    // 0x800F76E8: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    func_8009E7C8(rdram, ctx);
        goto after_2;
    // 0x800F76E8: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_2:
    // 0x800F76EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F76F0: xori        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 ^ 0X2;
    // 0x800F76F4: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800F76F8: jr          $ra
    // 0x800F76FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800F76FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800F7700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7700: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7704: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7708: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F770C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F7710: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7718: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800F771C: jal         0x8009AD20
    // 0x800F7720: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009AD20(rdram, ctx);
        goto after_0;
    // 0x800F7720: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F7724: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7728: jal         0x8009AD44
    // 0x800F772C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009AD44(rdram, ctx);
        goto after_1;
    // 0x800F772C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x800F7730: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7734: jal         0x8009E7C8
    // 0x800F7738: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    func_8009E7C8(rdram, ctx);
        goto after_2;
    // 0x800F7738: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    after_2:
    // 0x800F773C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7740: xori        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 ^ 0X2;
    // 0x800F7744: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800F7748: jr          $ra
    // 0x800F774C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800F774C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800F7750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7750: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F7754: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800F7758: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800F775C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800F7760: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7764: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800F7768: addu        $s0, $s0, $t6
    ctx->r16 = ADD32(ctx->r16, ctx->r14);
    // 0x800F776C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F7770: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800F7774: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800F7778: beq         $t7, $zero, L_800F778C
    if (ctx->r15 == 0) {
        // 0x800F777C: lw          $s0, 0x5490($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X5490);
            goto L_800F778C;
    }
    // 0x800F777C: lw          $s0, 0x5490($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5490);
    // 0x800F7780: addiu       $t8, $zero, 0x98
    ctx->r24 = ADD32(0, 0X98);
    // 0x800F7784: b           L_800F7794
    // 0x800F7788: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
        goto L_800F7794;
    // 0x800F7788: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_800F778C:
    // 0x800F778C: addiu       $t9, $zero, 0x2D
    ctx->r25 = ADD32(0, 0X2D);
    // 0x800F7790: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_800F7794:
    // 0x800F7794: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800F7798: jal         0x8009ACF4
    // 0x800F779C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009ACF4(rdram, ctx);
        goto after_0;
    // 0x800F779C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800F77A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800F77A4: jal         0x8009AD04
    // 0x800F77A8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009AD04(rdram, ctx);
        goto after_1;
    // 0x800F77A8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x800F77AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800F77B0: jal         0x8009AD20
    // 0x800F77B4: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_8009AD20(rdram, ctx);
        goto after_2;
    // 0x800F77B4: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_2:
    // 0x800F77B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800F77BC: jal         0x8009AD44
    // 0x800F77C0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009AD44(rdram, ctx);
        goto after_3;
    // 0x800F77C0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x800F77C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800F77C8: jal         0x8009E7C8
    // 0x800F77CC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E7C8(rdram, ctx);
        goto after_4;
    // 0x800F77CC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x800F77D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F77D4: xori        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 ^ 0X2;
    // 0x800F77D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800F77DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F77E0: jr          $ra
    // 0x800F77E4: sltiu       $v0, $t0, 0x1
    ctx->r2 = ctx->r8 < 0X1 ? 1 : 0;
    return;
    // 0x800F77E4: sltiu       $v0, $t0, 0x1
    ctx->r2 = ctx->r8 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_800F77E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F77E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F77EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F77F0: lui         $a3, 0xC4BB
    ctx->r7 = S32(0XC4BB << 16);
    // 0x800F77F4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x800F77F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800F77FC: jal         0x800F7750
    // 0x800F7800: lui         $a2, 0x4452
    ctx->r6 = S32(0X4452 << 16);
    func_800F7750(rdram, ctx);
        goto after_0;
    // 0x800F7800: lui         $a2, 0x4452
    ctx->r6 = S32(0X4452 << 16);
    after_0:
    // 0x800F7804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7808: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F780C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7814: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7818: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F781C: lui         $a3, 0xC4BB
    ctx->r7 = S32(0XC4BB << 16);
    // 0x800F7820: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800F7824: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800F7828: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x800F782C: jal         0x800F7750
    // 0x800F7830: lui         $a2, 0x4452
    ctx->r6 = S32(0X4452 << 16);
    func_800F7750(rdram, ctx);
        goto after_0;
    // 0x800F7830: lui         $a2, 0x4452
    ctx->r6 = S32(0X4452 << 16);
    after_0:
    // 0x800F7834: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7838: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F783C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7844: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800F7848: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x800F784C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7850: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F7854: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800F7858: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x800F785C: jal         0x800F7750
    // 0x800F7860: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800F7750(rdram, ctx);
        goto after_0;
    // 0x800F7860: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x800F7864: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7868: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F786C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7874: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7878: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F787C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7880: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F7884: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F7888: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F788C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800F7890: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800F7894: jal         0x8009AD44
    // 0x800F7898: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009AD44(rdram, ctx);
        goto after_0;
    // 0x800F7898: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F789C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F78A0: jal         0x8009AD14
    // 0x800F78A4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009AD14(rdram, ctx);
        goto after_1;
    // 0x800F78A4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x800F78A8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F78AC: jal         0x8009E7C8
    // 0x800F78B0: addiu       $a1, $zero, 0x66
    ctx->r5 = ADD32(0, 0X66);
    func_8009E7C8(rdram, ctx);
        goto after_2;
    // 0x800F78B0: addiu       $a1, $zero, 0x66
    ctx->r5 = ADD32(0, 0X66);
    after_2:
    // 0x800F78B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F78B8: xori        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 ^ 0X2;
    // 0x800F78BC: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800F78C0: jr          $ra
    // 0x800F78C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800F78C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800F78C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F78C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F78CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F78D0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800F78D4: jal         0x800F7C58
    // 0x800F78D8: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_800F7C58(rdram, ctx);
        goto after_0;
    // 0x800F78D8: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_0:
    // 0x800F78DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F78E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F78E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F78EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F78EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F78F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800F78F4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800F78F8: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800F78FC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7900: addu        $s0, $s0, $t6
    ctx->r16 = ADD32(ctx->r16, ctx->r14);
    // 0x800F7904: lw          $s0, 0x5490($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5490);
    // 0x800F7908: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800F790C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F7910: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800F7914: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800F7918: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800F791C: jal         0x8009ACF4
    // 0x800F7920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009ACF4(rdram, ctx);
        goto after_0;
    // 0x800F7920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800F7924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800F7928: jal         0x8009AD04
    // 0x800F792C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009AD04(rdram, ctx);
        goto after_1;
    // 0x800F792C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x800F7930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800F7934: jal         0x8009AD20
    // 0x800F7938: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_8009AD20(rdram, ctx);
        goto after_2;
    // 0x800F7938: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_2:
    // 0x800F793C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800F7940: jal         0x8009AD44
    // 0x800F7944: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009AD44(rdram, ctx);
        goto after_3;
    // 0x800F7944: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x800F7948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800F794C: jal         0x8009E7C8
    // 0x800F7950: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    func_8009E7C8(rdram, ctx);
        goto after_4;
    // 0x800F7950: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_4:
    // 0x800F7954: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7958: xori        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 ^ 0X2;
    // 0x800F795C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800F7960: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F7964: jr          $ra
    // 0x800F7968: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    return;
    // 0x800F7968: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_800F796C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F796C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F7970: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7974: jal         0x800F798C
    // 0x800F7978: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800F798C(rdram, ctx);
        goto after_0;
    // 0x800F7978: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x800F797C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7980: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F7984: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F798C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F798C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7990: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7994: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F7998: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F799C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F79A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F79A4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800F79A8: jal         0x8009AD20
    // 0x800F79AC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009AD20(rdram, ctx);
        goto after_0;
    // 0x800F79AC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F79B0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F79B4: jal         0x8009AD2C
    // 0x800F79B8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009AD2C(rdram, ctx);
        goto after_1;
    // 0x800F79B8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x800F79BC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F79C0: jal         0x8009E7C8
    // 0x800F79C4: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    func_8009E7C8(rdram, ctx);
        goto after_2;
    // 0x800F79C4: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_2:
    // 0x800F79C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F79CC: xori        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 ^ 0X2;
    // 0x800F79D0: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800F79D4: jr          $ra
    // 0x800F79D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800F79D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800F79DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F79DC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F79E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F79E4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F79E8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F79EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F79F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F79F4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800F79F8: jal         0x8009AD20
    // 0x800F79FC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009AD20(rdram, ctx);
        goto after_0;
    // 0x800F79FC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F7A00: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7A04: jal         0x8009AD14
    // 0x800F7A08: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009AD14(rdram, ctx);
        goto after_1;
    // 0x800F7A08: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x800F7A0C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7A10: jal         0x8009E7C8
    // 0x800F7A14: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    func_8009E7C8(rdram, ctx);
        goto after_2;
    // 0x800F7A14: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_2:
    // 0x800F7A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7A1C: xori        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 ^ 0X2;
    // 0x800F7A20: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800F7A24: jr          $ra
    // 0x800F7A28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800F7A28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800F7A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7A2C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7A30: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7A34: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F7A38: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F7A3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7A40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7A44: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800F7A48: jal         0x8009AD20
    // 0x800F7A4C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009AD20(rdram, ctx);
        goto after_0;
    // 0x800F7A4C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F7A50: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7A54: jal         0x8009AD44
    // 0x800F7A58: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009AD44(rdram, ctx);
        goto after_1;
    // 0x800F7A58: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x800F7A5C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7A60: jal         0x8009E7C8
    // 0x800F7A64: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_8009E7C8(rdram, ctx);
        goto after_2;
    // 0x800F7A64: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_2:
    // 0x800F7A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7A6C: xori        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 ^ 0X2;
    // 0x800F7A70: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800F7A74: jr          $ra
    // 0x800F7A78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800F7A78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800F7A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7A7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7A80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800F7A84: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800F7A88: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800F7A8C: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800F7A90: lw          $s0, 0x5490($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5490);
    // 0x800F7A94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F7A98: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800F7A9C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800F7AA0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800F7AA4: jal         0x8009AD38
    // 0x800F7AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009AD38(rdram, ctx);
        goto after_0;
    // 0x800F7AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800F7AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800F7AB0: jal         0x8009AD20
    // 0x800F7AB4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009AD20(rdram, ctx);
        goto after_1;
    // 0x800F7AB4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x800F7AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800F7ABC: jal         0x8009AD2C
    // 0x800F7AC0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009AD2C(rdram, ctx);
        goto after_2;
    // 0x800F7AC0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x800F7AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800F7AC8: jal         0x8009AD44
    // 0x800F7ACC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_8009AD44(rdram, ctx);
        goto after_3;
    // 0x800F7ACC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_3:
    // 0x800F7AD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800F7AD4: jal         0x8009E7C8
    // 0x800F7AD8: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    func_8009E7C8(rdram, ctx);
        goto after_4;
    // 0x800F7AD8: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    after_4:
    // 0x800F7ADC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7AE0: xori        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 ^ 0X2;
    // 0x800F7AE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800F7AE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F7AEC: jr          $ra
    // 0x800F7AF0: sltiu       $v0, $t8, 0x1
    ctx->r2 = ctx->r24 < 0X1 ? 1 : 0;
    return;
    // 0x800F7AF0: sltiu       $v0, $t8, 0x1
    ctx->r2 = ctx->r24 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_800F7AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7AF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F7AF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7AFC: lui         $a3, 0xC4BB
    ctx->r7 = S32(0XC4BB << 16);
    // 0x800F7B00: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x800F7B04: jal         0x800F7B1C
    // 0x800F7B08: lui         $a2, 0x4452
    ctx->r6 = S32(0X4452 << 16);
    func_800F7B1C(rdram, ctx);
        goto after_0;
    // 0x800F7B08: lui         $a2, 0x4452
    ctx->r6 = S32(0X4452 << 16);
    after_0:
    // 0x800F7B0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7B10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F7B14: jr          $ra
    // 0x800F7B18: nop

    return;
    // 0x800F7B18: nop

;}
RECOMP_FUNC void func_800F7B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7B1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7B20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800F7B24: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800F7B28: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800F7B2C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7B30: addu        $s0, $s0, $t6
    ctx->r16 = ADD32(ctx->r16, ctx->r14);
    // 0x800F7B34: lw          $s0, 0x5490($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5490);
    // 0x800F7B38: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800F7B3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F7B40: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800F7B44: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800F7B48: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800F7B4C: jal         0x8009ACF4
    // 0x800F7B50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009ACF4(rdram, ctx);
        goto after_0;
    // 0x800F7B50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800F7B54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800F7B58: jal         0x8009AD04
    // 0x800F7B5C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009AD04(rdram, ctx);
        goto after_1;
    // 0x800F7B5C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x800F7B60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800F7B64: jal         0x8009AD20
    // 0x800F7B68: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8009AD20(rdram, ctx);
        goto after_2;
    // 0x800F7B68: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x800F7B6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800F7B70: jal         0x8009AD44
    // 0x800F7B74: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009AD44(rdram, ctx);
        goto after_3;
    // 0x800F7B74: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x800F7B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800F7B7C: jal         0x8009E7C8
    // 0x800F7B80: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    func_8009E7C8(rdram, ctx);
        goto after_4;
    // 0x800F7B80: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    after_4:
    // 0x800F7B84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7B88: xori        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 ^ 0X2;
    // 0x800F7B8C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800F7B90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F7B94: jr          $ra
    // 0x800F7B98: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    return;
    // 0x800F7B98: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_800F7B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7B9C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7BA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F7BA4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7BA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7BAC: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F7BB0: jal         0x8009E7C8
    // 0x800F7BB4: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8009E7C8(rdram, ctx);
        goto after_0;
    // 0x800F7BB4: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F7BB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7BBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F7BC0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7BC8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7BCC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7BD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7BD4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F7BD8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F7BDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7BE0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800F7BE4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800F7BE8: jal         0x8009AD14
    // 0x800F7BEC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009AD14(rdram, ctx);
        goto after_0;
    // 0x800F7BEC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F7BF0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7BF4: jal         0x8009E7C8
    // 0x800F7BF8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E7C8(rdram, ctx);
        goto after_1;
    // 0x800F7BF8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x800F7BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7C00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F7C04: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7C0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7C10: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800F7C14: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7C18: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800F7C1C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7C20: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F7C24: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F7C28: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800F7C2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7C30: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800F7C34: jal         0x8009ACF4
    // 0x800F7C38: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009ACF4(rdram, ctx);
        goto after_0;
    // 0x800F7C38: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F7C3C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7C40: jal         0x8009E7C8
    // 0x800F7C44: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E7C8(rdram, ctx);
        goto after_1;
    // 0x800F7C44: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x800F7C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7C4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F7C50: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7C58: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7C5C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7C60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7C64: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F7C68: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F7C6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7C70: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800F7C74: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800F7C78: jal         0x8009AD20
    // 0x800F7C7C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009AD20(rdram, ctx);
        goto after_0;
    // 0x800F7C7C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F7C80: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7C84: jal         0x8009E7C8
    // 0x800F7C88: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E7C8(rdram, ctx);
        goto after_1;
    // 0x800F7C88: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x800F7C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7C90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F7C94: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7C9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7CA0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800F7CA4: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800F7CA8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7CAC: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x800F7CB0: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F7CB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7CB8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800F7CBC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800F7CC0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800F7CC4: jal         0x8009AD20
    // 0x800F7CC8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009AD20(rdram, ctx);
        goto after_0;
    // 0x800F7CC8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F7CCC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7CD0: jal         0x8009AD2C
    // 0x800F7CD4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009AD2C(rdram, ctx);
        goto after_1;
    // 0x800F7CD4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x800F7CD8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7CDC: jal         0x8009E7C8
    // 0x800F7CE0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E7C8(rdram, ctx);
        goto after_2;
    // 0x800F7CE0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x800F7CE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7CE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F7CEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7CF4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7CF8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7CFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7D00: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F7D04: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F7D08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7D0C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800F7D10: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800F7D14: jal         0x8009AD44
    // 0x800F7D18: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009AD44(rdram, ctx);
        goto after_0;
    // 0x800F7D18: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F7D1C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7D20: jal         0x8009E7C8
    // 0x800F7D24: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E7C8(rdram, ctx);
        goto after_1;
    // 0x800F7D24: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x800F7D28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7D2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F7D30: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7D38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7D38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7D3C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800F7D40: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7D44: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7D48: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F7D4C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F7D50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7D54: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800F7D58: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800F7D5C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800F7D60: jal         0x8009AD44
    // 0x800F7D64: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009AD44(rdram, ctx);
        goto after_0;
    // 0x800F7D64: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F7D68: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7D6C: jal         0x8009ACF4
    // 0x800F7D70: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009ACF4(rdram, ctx);
        goto after_1;
    // 0x800F7D70: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x800F7D74: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7D78: jal         0x8009E7C8
    // 0x800F7D7C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E7C8(rdram, ctx);
        goto after_2;
    // 0x800F7D7C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x800F7D80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7D84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F7D88: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7D90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7D94: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800F7D98: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800F7D9C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7DA0: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x800F7DA4: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F7DA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7DAC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800F7DB0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800F7DB4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800F7DB8: jal         0x8009AD44
    // 0x800F7DBC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009AD44(rdram, ctx);
        goto after_0;
    // 0x800F7DBC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F7DC0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7DC4: jal         0x8009AD20
    // 0x800F7DC8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009AD20(rdram, ctx);
        goto after_1;
    // 0x800F7DC8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x800F7DCC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7DD0: jal         0x8009E7C8
    // 0x800F7DD4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E7C8(rdram, ctx);
        goto after_2;
    // 0x800F7DD4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x800F7DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7DDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F7DE0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7DE8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7DEC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7DF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7DF4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F7DF8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F7DFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7E00: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800F7E04: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800F7E08: jal         0x8009AD20
    // 0x800F7E0C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009AD20(rdram, ctx);
        goto after_0;
    // 0x800F7E0C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F7E10: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7E14: jal         0x8009AD14
    // 0x800F7E18: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009AD14(rdram, ctx);
        goto after_1;
    // 0x800F7E18: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x800F7E1C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7E20: jal         0x8009E7C8
    // 0x800F7E24: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    func_8009E7C8(rdram, ctx);
        goto after_2;
    // 0x800F7E24: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    after_2:
    // 0x800F7E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7E2C: xori        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 ^ 0X2;
    // 0x800F7E30: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800F7E34: jr          $ra
    // 0x800F7E38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800F7E38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800F7E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7E3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F7E40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7E44: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800F7E48: jal         0x800F7C58
    // 0x800F7E4C: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    func_800F7C58(rdram, ctx);
        goto after_0;
    // 0x800F7E4C: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    after_0:
    // 0x800F7E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7E54: xori        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 ^ 0X2;
    // 0x800F7E58: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x800F7E5C: jr          $ra
    // 0x800F7E60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800F7E60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800F7E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7E64: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7E68: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7E6C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F7E70: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F7E74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7E78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7E7C: jal         0x800A3410
    // 0x800F7E80: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_800A3410(rdram, ctx);
        goto after_0;
    // 0x800F7E80: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F7E84: jal         0x80092778
    // 0x800F7E88: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_80092778(rdram, ctx);
        goto after_1;
    // 0x800F7E88: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x800F7E8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7E90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F7E94: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7E9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F7EA0: beq         $a1, $zero, L_800F7EBC
    if (ctx->r5 == 0) {
        // 0x800F7EA4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800F7EBC;
    }
    // 0x800F7EA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7EA8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7EAC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7EB0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F7EB4: jal         0x800A4E74
    // 0x800F7EB8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800A4E74(rdram, ctx);
        goto after_0;
    // 0x800F7EB8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
L_800F7EBC:
    // 0x800F7EBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7EC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F7EC4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7ECC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x800F7ED0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7ED4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F7ED8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7EDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7EE0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F7EE4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x800F7EE8: jal         0x800917A8
    // 0x800F7EEC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800917A8(rdram, ctx);
        goto after_0;
    // 0x800F7EEC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F7EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F7EF8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7F00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F7F04: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800F7F08: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800F7F0C: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800F7F10: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800F7F14: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800F7F18: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800F7F1C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7F20: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800F7F24: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x800F7F28: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x800F7F2C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F7F30: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800F7F34: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800F7F38: jal         0x80098778
    // 0x800F7F3C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_80098778(rdram, ctx);
        goto after_0;
    // 0x800F7F3C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x800F7F40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800F7F44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F7F48: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7F50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7F54: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x800F7F58: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800F7F5C: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800F7F60: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800F7F64: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800F7F68: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F7F6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F7F70: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x800F7F74: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x800F7F78: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F7F7C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800F7F80: jal         0x80098730
    // 0x800F7F84: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_80098730(rdram, ctx);
        goto after_0;
    // 0x800F7F84: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_0:
    // 0x800F7F88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7F8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F7F90: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F7F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7F98: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F7F9C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800F7FA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7FA4: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x800F7FA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7FAC: beq         $a1, $zero, L_800F7FD8
    if (ctx->r5 == 0) {
        // 0x800F7FB0: lw          $a2, 0x5490($a2)
        ctx->r6 = MEM_W(ctx->r6, 0X5490);
            goto L_800F7FD8;
    }
    // 0x800F7FB0: lw          $a2, 0x5490($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X5490);
    // 0x800F7FB4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800F7FB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F7FBC: jal         0x80091C14
    // 0x800F7FC0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_80091C14(rdram, ctx);
        goto after_0;
    // 0x800F7FC0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x800F7FC4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7FC8: jal         0x8009F18C
    // 0x800F7FCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009F18C(rdram, ctx);
        goto after_1;
    // 0x800F7FCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800F7FD0: b           L_800F7FF8
    // 0x800F7FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F7FF8;
    // 0x800F7FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F7FD8:
    // 0x800F7FD8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800F7FDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F7FE0: jal         0x80091C14
    // 0x800F7FE4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_80091C14(rdram, ctx);
        goto after_2;
    // 0x800F7FE4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_2:
    // 0x800F7FE8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7FEC: jal         0x8009F18C
    // 0x800F7FF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F18C(rdram, ctx);
        goto after_3;
    // 0x800F7FF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800F7FF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F7FF8:
    // 0x800F7FF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F7FFC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8004: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F8008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800F800C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800F8010: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F8014: addu        $s0, $s0, $t6
    ctx->r16 = ADD32(ctx->r16, ctx->r14);
    // 0x800F8018: lw          $s0, 0x5490($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5490);
    // 0x800F801C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F8020: jal         0x80091D00
    // 0x800F8024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80091D00(rdram, ctx);
        goto after_0;
    // 0x800F8024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800F8028: sltu        $a1, $zero, $v0
    ctx->r5 = 0 < ctx->r2 ? 1 : 0;
    // 0x800F802C: bnel        $a1, $zero, L_800F8044
    if (ctx->r5 != 0) {
        // 0x800F8030: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_800F8044;
    }
    goto skip_0;
    // 0x800F8030: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    skip_0:
    // 0x800F8034: jal         0x80091964
    // 0x800F8038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80091964(rdram, ctx);
        goto after_1;
    // 0x800F8038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800F803C: sltu        $a1, $zero, $v0
    ctx->r5 = 0 < ctx->r2 ? 1 : 0;
    // 0x800F8040: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
L_800F8044:
    // 0x800F8044: jal         0x8009F1A4
    // 0x800F8048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F1A4(rdram, ctx);
        goto after_2;
    // 0x800F8048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800F804C: sltu        $a1, $zero, $v0
    ctx->r5 = 0 < ctx->r2 ? 1 : 0;
    // 0x800F8050: bnel        $a1, $zero, L_800F8068
    if (ctx->r5 != 0) {
        // 0x800F8054: lw          $v0, 0x24($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X24);
            goto L_800F8068;
    }
    goto skip_1;
    // 0x800F8054: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x800F8058: jal         0x8009EEF8
    // 0x800F805C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEF8(rdram, ctx);
        goto after_3;
    // 0x800F805C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800F8060: sltu        $a1, $zero, $v0
    ctx->r5 = 0 < ctx->r2 ? 1 : 0;
    // 0x800F8064: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_800F8068:
    // 0x800F8068: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F806C: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x800F8070: beq         $t7, $zero, L_800F807C
    if (ctx->r15 == 0) {
        // 0x800F8074: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_800F807C;
    }
    // 0x800F8074: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800F8078: sltu        $v0, $zero, $a1
    ctx->r2 = 0 < ctx->r5 ? 1 : 0;
L_800F807C:
    // 0x800F807C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800F8080: jr          $ra
    // 0x800F8084: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800F8084: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800F8088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8088: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F808C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8090: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F8094: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F8098: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F809C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F80A0: jal         0x80091D00
    // 0x800F80A4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80091D00(rdram, ctx);
        goto after_0;
    // 0x800F80A4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F80A8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F80AC: jal         0x8009F1A4
    // 0x800F80B0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_8009F1A4(rdram, ctx);
        goto after_1;
    // 0x800F80B0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x800F80B4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800F80B8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x800F80BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F80C0: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x800F80C4: beq         $t7, $zero, L_800F80D0
    if (ctx->r15 == 0) {
        // 0x800F80C8: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_800F80D0;
    }
    // 0x800F80C8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800F80CC: sltu        $v0, $zero, $v1
    ctx->r2 = 0 < ctx->r3 ? 1 : 0;
L_800F80D0:
    // 0x800F80D0: jr          $ra
    // 0x800F80D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800F80D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800F80D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F80D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F80DC: jr          $ra
    // 0x800F80E0: sw          $a0, 0x54DC($at)
    MEM_W(0X54DC, ctx->r1) = ctx->r4;
    return;
    // 0x800F80E0: sw          $a0, 0x54DC($at)
    MEM_W(0X54DC, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800F80E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F80E4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F80E8: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x800F80EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F80F0: addu        $a3, $a3, $t6
    ctx->r7 = ADD32(ctx->r7, ctx->r14);
    // 0x800F80F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F80F8: beq         $a1, $zero, L_800F8108
    if (ctx->r5 == 0) {
        // 0x800F80FC: lw          $a3, 0x5490($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X5490);
            goto L_800F8108;
    }
    // 0x800F80FC: lw          $a3, 0x5490($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X5490);
    // 0x800F8100: b           L_800F810C
    // 0x800F8104: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_800F810C;
    // 0x800F8104: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_800F8108:
    // 0x800F8108: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_800F810C:
    // 0x800F810C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800F8110: jal         0x800947EC
    // 0x800F8114: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_0;
    // 0x800F8114: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800F8118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F811C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8120: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F812C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8130: jal         0x800F80D8
    // 0x800F8134: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F80D8(rdram, ctx);
        goto after_0;
    // 0x800F8134: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F8138: jal         0x800A91A8
    // 0x800F813C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A91A8(rdram, ctx);
        goto after_1;
    // 0x800F813C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x800F8140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8148: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8150: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F8154: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8158: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F815C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8160: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F8164: jal         0x80093370
    // 0x800F8168: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_80093370(rdram, ctx);
        goto after_0;
    // 0x800F8168: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F816C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8170: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8174: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F817C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F817C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F8180: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8184: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F818C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F8190: jal         0x8009337C
    // 0x800F8194: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8009337C(rdram, ctx);
        goto after_0;
    // 0x800F8194: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F8198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F819C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F81A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F81A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F81A8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F81AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F81B0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F81B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F81B8: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F81BC: jal         0x800A1870
    // 0x800F81C0: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800A1870(rdram, ctx);
        goto after_0;
    // 0x800F81C0: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F81C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F81C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F81CC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F81D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F81D4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F81D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F81DC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F81E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F81E4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F81E8: jal         0x80084CD8
    // 0x800F81EC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    _bafpctrl_entrypoint_12(rdram, ctx);
        goto after_0;
    // 0x800F81EC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F81F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F81F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F81F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8200: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F8204: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8208: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F820C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8210: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F8214: jal         0x800F4524
    // 0x800F8218: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800F4524(rdram, ctx);
        goto after_0;
    // 0x800F8218: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F821C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8220: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8224: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F822C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F822C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800F8230: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800F8234: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F8238: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F823C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8240: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8244: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F8248: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800F824C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x800F8250: jal         0x80084D50
    // 0x800F8254: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    _bahold_entrypoint_7(rdram, ctx);
        goto after_0;
    // 0x800F8254: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F8258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F825C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8260: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8268: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F826C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8270: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8274: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8278: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F827C: jal         0x800A38F0
    // 0x800F8280: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800A38F0(rdram, ctx);
        goto after_0;
    // 0x800F8280: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F8284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F828C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8294: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F8298: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F829C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F82A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F82A4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F82A8: jal         0x800F452C
    // 0x800F82AC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800F452C(rdram, ctx);
        goto after_0;
    // 0x800F82AC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F82B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F82B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F82B8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F82C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F82C0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F82C4: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x800F82C8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800F82CC: jr          $ra
    // 0x800F82D0: sb          $t6, 0x54B0($at)
    MEM_B(0X54B0, ctx->r1) = ctx->r14;
    return;
    // 0x800F82D0: sb          $t6, 0x54B0($at)
    MEM_B(0X54B0, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800F82D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F82D4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F82D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F82DC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F82E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F82E4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F82E8: jal         0x800F457C
    // 0x800F82EC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800F457C(rdram, ctx);
        goto after_0;
    // 0x800F82EC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F82F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F82F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F82F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8300: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F8304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8308: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F830C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8310: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F8314: jal         0x800F45B0
    // 0x800F8318: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800F45B0(rdram, ctx);
        goto after_0;
    // 0x800F8318: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F831C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8324: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F832C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F832C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F8330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8334: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F833C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F8340: jal         0x800F45E0
    // 0x800F8344: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800F45E0(rdram, ctx);
        goto after_0;
    // 0x800F8344: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F8348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F834C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8350: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8358: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F835C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F8360: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8364: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8368: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800F836C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F8370: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F8374: jal         0x80084950
    // 0x800F8378: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _baduo_entrypoint_7(rdram, ctx);
        goto after_0;
    // 0x800F8378: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x800F837C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8380: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8384: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F838C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F838C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F8390: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8394: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8398: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F839C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F83A0: jal         0x8008F748
    // 0x800F83A4: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8008F748(rdram, ctx);
        goto after_0;
    // 0x800F83A4: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F83A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F83AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F83B0: jr          $ra
    // 0x800F83B4: nop

    return;
    // 0x800F83B4: nop

;}
RECOMP_FUNC void func_800F83B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F83B8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F83BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F83C0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F83C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F83C8: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F83CC: jal         0x800A3514
    // 0x800F83D0: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800A3514(rdram, ctx);
        goto after_0;
    // 0x800F83D0: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F83D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F83D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F83DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F83E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F83E4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800F83E8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F83EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F83F0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F83F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F83F8: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F83FC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800F8400: jal         0x8009BA58
    // 0x800F8404: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8009BA58(rdram, ctx);
        goto after_0;
    // 0x800F8404: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F8408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F840C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8410: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8418: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F841C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8420: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8424: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8428: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F842C: jal         0x800F4648
    // 0x800F8430: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_800F4648(rdram, ctx);
        goto after_0;
    // 0x800F8430: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F8434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F843C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8444: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F8448: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F844C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8450: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F8454: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F8458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F845C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800F8460: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x800F8464: jal         0x8009BF5C
    // 0x800F8468: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8009BF5C(rdram, ctx);
        goto after_0;
    // 0x800F8468: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F846C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800F8470: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F8474: jal         0x8009C914
    // 0x800F8478: lw          $a1, 0x4($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X4);
    func_8009C914(rdram, ctx);
        goto after_1;
    // 0x800F8478: lw          $a1, 0x4($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X4);
    after_1:
    // 0x800F847C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800F8480: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F8484: jal         0x8009C4CC
    // 0x800F8488: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    func_8009C4CC(rdram, ctx);
        goto after_2;
    // 0x800F8488: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    after_2:
    // 0x800F848C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8490: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F8494: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F849C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F849C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800F84A0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F84A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F84A8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F84AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F84B0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F84B4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800F84B8: jal         0x8009BD18
    // 0x800F84BC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8009BD18(rdram, ctx);
        goto after_0;
    // 0x800F84BC: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F84C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F84C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F84C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F84D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F84D0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F84D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F84D8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F84DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F84E0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F84E4: jal         0x8009659C
    // 0x800F84E8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8009659C(rdram, ctx);
        goto after_0;
    // 0x800F84E8: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F84EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F84F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F84F4: jr          $ra
    // 0x800F84F8: nop

    return;
    // 0x800F84F8: nop

;}
RECOMP_FUNC void func_800F84FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F84FC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x800F8500: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x800F8504: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x800F8508: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x800F850C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x800F8510: lui         $s5, 0x8013
    ctx->r21 = S32(0X8013 << 16);
    // 0x800F8514: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800F8518: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800F851C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800F8520: addiu       $s5, $s5, 0x5490
    ctx->r21 = ADD32(ctx->r21, 0X5490);
    // 0x800F8524: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800F8528: addiu       $s3, $sp, 0x58
    ctx->r19 = ADD32(ctx->r29, 0X58);
    // 0x800F852C: addiu       $s4, $zero, 0x8
    ctx->r20 = ADD32(0, 0X8);
L_800F8530:
    // 0x800F8530: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x800F8534: beql        $t6, $zero, L_800F85C0
    if (ctx->r14 == 0) {
        // 0x800F8538: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800F85C0;
    }
    goto skip_0;
    // 0x800F8538: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x800F853C: jal         0x800F5924
    // 0x800F8540: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800F5924(rdram, ctx);
        goto after_0;
    // 0x800F8540: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x800F8544: beq         $v0, $zero, L_800F85BC
    if (ctx->r2 == 0) {
        // 0x800F8548: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800F85BC;
    }
    // 0x800F8548: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800F854C: jal         0x800F5A00
    // 0x800F8550: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800F5A00(rdram, ctx);
        goto after_1;
    // 0x800F8550: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
    // 0x800F8554: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800F8558: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x800F855C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x800F8560: jal         0x800F5950
    // 0x800F8564: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    func_800F5950(rdram, ctx);
        goto after_2;
    // 0x800F8564: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    after_2:
    // 0x800F8568: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800F856C: addiu       $s1, $s1, 0x5490
    ctx->r17 = ADD32(ctx->r17, 0X5490);
    // 0x800F8570: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800F8574:
    // 0x800F8574: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x800F8578: beql        $t7, $zero, L_800F85B4
    if (ctx->r15 == 0) {
        // 0x800F857C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800F85B4;
    }
    goto skip_1;
    // 0x800F857C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x800F8580: beql        $s2, $s0, L_800F85B4
    if (ctx->r18 == ctx->r16) {
        // 0x800F8584: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800F85B4;
    }
    goto skip_2;
    // 0x800F8584: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x800F8588: jal         0x800F58F8
    // 0x800F858C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800F58F8(rdram, ctx);
        goto after_3;
    // 0x800F858C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800F8590: beq         $v0, $zero, L_800F85B0
    if (ctx->r2 == 0) {
        // 0x800F8594: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800F85B0;
    }
    // 0x800F8594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800F8598: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x800F859C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x800F85A0: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x800F85A4: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x800F85A8: jal         0x800F4EC8
    // 0x800F85AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F4EC8(rdram, ctx);
        goto after_4;
    // 0x800F85AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
L_800F85B0:
    // 0x800F85B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800F85B4:
    // 0x800F85B4: bne         $s0, $s4, L_800F8574
    if (ctx->r16 != ctx->r20) {
        // 0x800F85B8: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800F8574;
    }
    // 0x800F85B8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_800F85BC:
    // 0x800F85BC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800F85C0:
    // 0x800F85C0: slti        $at, $s2, 0x8
    ctx->r1 = SIGNED(ctx->r18) < 0X8 ? 1 : 0;
    // 0x800F85C4: bne         $at, $zero, L_800F8530
    if (ctx->r1 != 0) {
        // 0x800F85C8: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_800F8530;
    }
    // 0x800F85C8: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x800F85CC: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x800F85D0: addiu       $s2, $s2, 0x5490
    ctx->r18 = ADD32(ctx->r18, 0X5490);
    // 0x800F85D4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800F85D8: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800F85DC: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800F85E0: sb          $t8, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r24;
    // 0x800F85E4: addiu       $s1, $s1, 0x54B0
    ctx->r17 = ADD32(ctx->r17, 0X54B0);
    // 0x800F85E8: addiu       $s0, $s0, 0x5490
    ctx->r16 = ADD32(ctx->r16, 0X5490);
    // 0x800F85EC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_800F85F0:
    // 0x800F85F0: beql        $a0, $zero, L_800F8604
    if (ctx->r4 == 0) {
        // 0x800F85F4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800F8604;
    }
    goto skip_3;
    // 0x800F85F4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_3:
    // 0x800F85F8: jal         0x800F468C
    // 0x800F85FC: nop

    func_800F468C(rdram, ctx);
        goto after_5;
    // 0x800F85FC: nop

    after_5:
    // 0x800F8600: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800F8604:
    // 0x800F8604: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x800F8608: bnel        $at, $zero, L_800F85F0
    if (ctx->r1 != 0) {
        // 0x800F860C: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_800F85F0;
    }
    goto skip_4;
    // 0x800F860C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_4:
    // 0x800F8610: jal         0x800F9198
    // 0x800F8614: sb          $zero, 0x49($s2)
    MEM_B(0X49, ctx->r18) = 0;
    func_800F9198(rdram, ctx);
        goto after_6;
    // 0x800F8614: sb          $zero, 0x49($s2)
    MEM_B(0X49, ctx->r18) = 0;
    after_6:
    // 0x800F8618: jal         0x800F54E4
    // 0x800F861C: nop

    func_800F54E4(rdram, ctx);
        goto after_7;
    // 0x800F861C: nop

    after_7:
    // 0x800F8620: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800F8624: jal         0x800F5410
    // 0x800F8628: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F5410(rdram, ctx);
        goto after_8;
    // 0x800F8628: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_8:
    // 0x800F862C: lh          $v1, 0x50($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X50);
    // 0x800F8630: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F8634: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x800F8638: beq         $v1, $at, L_800F866C
    if (ctx->r3 == ctx->r1) {
        // 0x800F863C: nop
    
            goto L_800F866C;
    }
    // 0x800F863C: nop

    // 0x800F8640: bne         $s3, $v1, L_800F8654
    if (ctx->r19 != ctx->r3) {
        // 0x800F8644: nop
    
            goto L_800F8654;
    }
    // 0x800F8644: nop

    // 0x800F8648: lh          $t9, 0x52($s2)
    ctx->r25 = MEM_H(ctx->r18, 0X52);
    // 0x800F864C: beq         $v0, $t9, L_800F866C
    if (ctx->r2 == ctx->r25) {
        // 0x800F8650: nop
    
            goto L_800F866C;
    }
    // 0x800F8650: nop

L_800F8654:
    // 0x800F8654: jal         0x800D5240
    // 0x800F8658: nop

    func_800D5240(rdram, ctx);
        goto after_9;
    // 0x800F8658: nop

    after_9:
    // 0x800F865C: bne         $v0, $zero, L_800F866C
    if (ctx->r2 != 0) {
        // 0x800F8660: nop
    
            goto L_800F866C;
    }
    // 0x800F8660: nop

    // 0x800F8664: jal         0x800A1658
    // 0x800F8668: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_800A1658(rdram, ctx);
        goto after_10;
    // 0x800F8668: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_10:
L_800F866C:
    // 0x800F866C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800F8670: addiu       $s0, $s0, 0x5490
    ctx->r16 = ADD32(ctx->r16, 0X5490);
    // 0x800F8674: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_800F8678:
    // 0x800F8678: lbu         $t0, 0x20($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X20);
    // 0x800F867C: beql        $t0, $zero, L_800F8690
    if (ctx->r8 == 0) {
        // 0x800F8680: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800F8690;
    }
    goto skip_5;
    // 0x800F8680: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_5:
    // 0x800F8684: jal         0x800F759C
    // 0x800F8688: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800F759C(rdram, ctx);
        goto after_11;
    // 0x800F8688: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x800F868C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800F8690:
    // 0x800F8690: bne         $s1, $s4, L_800F8678
    if (ctx->r17 != ctx->r20) {
        // 0x800F8694: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800F8678;
    }
    // 0x800F8694: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800F8698: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800F869C: sh          $s3, 0x50($s2)
    MEM_H(0X50, ctx->r18) = ctx->r19;
    // 0x800F86A0: sh          $s5, 0x52($s2)
    MEM_H(0X52, ctx->r18) = ctx->r21;
    // 0x800F86A4: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x800F86A8: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x800F86AC: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x800F86B0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800F86B4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800F86B8: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x800F86BC: jr          $ra
    // 0x800F86C0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x800F86C0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_800F86C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F86C4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800F86C8: addiu       $v0, $v0, 0x5490
    ctx->r2 = ADD32(ctx->r2, 0X5490);
    // 0x800F86CC: sh          $a0, 0x50($v0)
    MEM_H(0X50, ctx->r2) = ctx->r4;
    // 0x800F86D0: jr          $ra
    // 0x800F86D4: sh          $a1, 0x52($v0)
    MEM_H(0X52, ctx->r2) = ctx->r5;
    return;
    // 0x800F86D4: sh          $a1, 0x52($v0)
    MEM_H(0X52, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_800F86D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F86D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F86DC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800F86E0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800F86E4: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800F86E8: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800F86EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F86F0: addiu       $s1, $s1, 0x54B0
    ctx->r17 = ADD32(ctx->r17, 0X54B0);
    // 0x800F86F4: addiu       $s0, $s0, 0x5490
    ctx->r16 = ADD32(ctx->r16, 0X5490);
    // 0x800F86F8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_800F86FC:
    // 0x800F86FC: beql        $a0, $zero, L_800F8714
    if (ctx->r4 == 0) {
        // 0x800F8700: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800F8714;
    }
    goto skip_0;
    // 0x800F8700: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x800F8704: jal         0x800F46D8
    // 0x800F8708: nop

    func_800F46D8(rdram, ctx);
        goto after_0;
    // 0x800F8708: nop

    after_0:
    // 0x800F870C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800F8710: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800F8714:
    // 0x800F8714: bnel        $s0, $s1, L_800F86FC
    if (ctx->r16 != ctx->r17) {
        // 0x800F8718: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_800F86FC;
    }
    goto skip_1;
    // 0x800F8718: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x800F871C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F8720: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800F8724: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800F8728: jr          $ra
    // 0x800F872C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800F872C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800F8730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8730: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F8734: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800F8738: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800F873C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8740: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x800F8744: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    // 0x800F8748: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F874C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800F8750: jal         0x800A3538
    // 0x800F8754: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_800A3538(rdram, ctx);
        goto after_0;
    // 0x800F8754: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F8758: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F875C: jal         0x8009E7C8
    // 0x800F8760: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8009E7C8(rdram, ctx);
        goto after_1;
    // 0x800F8760: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x800F8764: xori        $v1, $v0, 0x2
    ctx->r3 = ctx->r2 ^ 0X2;
    // 0x800F8768: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800F876C: beq         $v1, $zero, L_800F8790
    if (ctx->r3 == 0) {
        // 0x800F8770: sw          $v1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r3;
            goto L_800F8790;
    }
    // 0x800F8770: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x800F8774: jal         0x800F5410
    // 0x800F8778: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800F5410(rdram, ctx);
        goto after_2;
    // 0x800F8778: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x800F877C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800F8780: beql        $v0, $a0, L_800F8794
    if (ctx->r2 == ctx->r4) {
        // 0x800F8784: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F8794;
    }
    goto skip_0;
    // 0x800F8784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800F8788: jal         0x8008A7A0
    // 0x800F878C: nop

    _surestart_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x800F878C: nop

    after_3:
L_800F8790:
    // 0x800F8790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F8794:
    // 0x800F8794: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x800F8798: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F879C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F87A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F87A4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F87A8: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800F87AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F87B0: lw          $t7, 0x5490($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5490);
    // 0x800F87B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F87B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F87BC: jal         0x800F56D8
    // 0x800F87C0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_800F56D8(rdram, ctx);
        goto after_0;
    // 0x800F87C0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x800F87C4: beq         $v0, $zero, L_800F87F0
    if (ctx->r2 == 0) {
        // 0x800F87C8: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800F87F0;
    }
    // 0x800F87C8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F87CC: jal         0x8009E674
    // 0x800F87D0: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    func_8009E674(rdram, ctx);
        goto after_1;
    // 0x800F87D0: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    after_1:
    // 0x800F87D4: beq         $v0, $zero, L_800F87F0
    if (ctx->r2 == 0) {
        // 0x800F87D8: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_800F87F0;
    }
    // 0x800F87D8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F87DC: jal         0x8009E7C8
    // 0x800F87E0: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    func_8009E7C8(rdram, ctx);
        goto after_2;
    // 0x800F87E0: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_2:
    // 0x800F87E4: xori        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 ^ 0X2;
    // 0x800F87E8: b           L_800F87F4
    // 0x800F87EC: sltiu       $v0, $t8, 0x1
    ctx->r2 = ctx->r24 < 0X1 ? 1 : 0;
        goto L_800F87F4;
    // 0x800F87EC: sltiu       $v0, $t8, 0x1
    ctx->r2 = ctx->r24 < 0X1 ? 1 : 0;
L_800F87F0:
    // 0x800F87F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F87F4:
    // 0x800F87F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F87F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F87FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8804: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F8808: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F880C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8814: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F8818: jal         0x8009CD70
    // 0x800F881C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8009CD70(rdram, ctx);
        goto after_0;
    // 0x800F881C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F8820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8824: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8828: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8830: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8838: jal         0x8009E7C8
    // 0x800F883C: addiu       $a1, $zero, 0x99
    ctx->r5 = ADD32(0, 0X99);
    func_8009E7C8(rdram, ctx);
        goto after_0;
    // 0x800F883C: addiu       $a1, $zero, 0x99
    ctx->r5 = ADD32(0, 0X99);
    after_0:
    // 0x800F8840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8848: jr          $ra
    // 0x800F884C: nop

    return;
    // 0x800F884C: nop

;}
RECOMP_FUNC void func_800F8850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8858: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x800F885C: jal         0x800F47C0
    // 0x800F8860: addiu       $a0, $a0, -0x77D0
    ctx->r4 = ADD32(ctx->r4, -0X77D0);
    func_800F47C0(rdram, ctx);
        goto after_0;
    // 0x800F8860: addiu       $a0, $a0, -0x77D0
    ctx->r4 = ADD32(ctx->r4, -0X77D0);
    after_0:
    // 0x800F8864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F886C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8874: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800F8878: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F887C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8880: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8884: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800F8888: jal         0x8009224C
    // 0x800F888C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    func_8009224C(rdram, ctx);
        goto after_0;
    // 0x800F888C: lw          $a0, 0x5490($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5490);
    after_0:
    // 0x800F8890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8894: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8898: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F88A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F88A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F88A4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800F88A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F88AC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F88B0: lw          $a0, 0x54F0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54F0);
    // 0x800F88B4: jal         0x800B28C4
    // 0x800F88B8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_800B28C4(rdram, ctx);
        goto after_0;
    // 0x800F88B8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_0:
    // 0x800F88BC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F88C0: lw          $a0, 0x54F0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54F0);
    // 0x800F88C4: jal         0x800B296C
    // 0x800F88C8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800B296C(rdram, ctx);
        goto after_1;
    // 0x800F88C8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800F88CC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800F88D0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800F88D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800F88D8: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x800F88DC: beq         $at, $zero, L_800F8908
    if (ctx->r1 == 0) {
        // 0x800F88E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F8908;
    }
    // 0x800F88E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F88E4: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
L_800F88E8:
    // 0x800F88E8: bnel        $a1, $t6, L_800F88FC
    if (ctx->r5 != ctx->r14) {
        // 0x800F88EC: addiu       $v1, $v1, 0x3C
        ctx->r3 = ADD32(ctx->r3, 0X3C);
            goto L_800F88FC;
    }
    goto skip_0;
    // 0x800F88EC: addiu       $v1, $v1, 0x3C
    ctx->r3 = ADD32(ctx->r3, 0X3C);
    skip_0:
    // 0x800F88F0: b           L_800F890C
    // 0x800F88F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_800F890C;
    // 0x800F88F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800F88F8: addiu       $v1, $v1, 0x3C
    ctx->r3 = ADD32(ctx->r3, 0X3C);
L_800F88FC:
    // 0x800F88FC: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x800F8900: bnel        $at, $zero, L_800F88E8
    if (ctx->r1 != 0) {
        // 0x800F8904: lbu         $t6, 0x0($v1)
        ctx->r14 = MEM_BU(ctx->r3, 0X0);
            goto L_800F88E8;
    }
    goto skip_1;
    // 0x800F8904: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    skip_1:
L_800F8908:
    // 0x800F8908: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800F890C:
    // 0x800F890C: jr          $ra
    // 0x800F8910: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800F8910: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800F8914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8914: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F8918: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800F891C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800F8920: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800F8924: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800F8928: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F892C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800F8930: jal         0x800F5A00
    // 0x800F8934: addiu       $a1, $s0, 0x24
    ctx->r5 = ADD32(ctx->r16, 0X24);
    func_800F5A00(rdram, ctx);
        goto after_0;
    // 0x800F8934: addiu       $a1, $s0, 0x24
    ctx->r5 = ADD32(ctx->r16, 0X24);
    after_0:
    // 0x800F8938: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800F893C: jal         0x800F5B38
    // 0x800F8940: addiu       $a1, $s0, 0x30
    ctx->r5 = ADD32(ctx->r16, 0X30);
    func_800F5B38(rdram, ctx);
        goto after_1;
    // 0x800F8940: addiu       $a1, $s0, 0x30
    ctx->r5 = ADD32(ctx->r16, 0X30);
    after_1:
    // 0x800F8944: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800F8948: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x800F894C: jal         0x80087928
    // 0x800F8950: addiu       $a2, $s0, 0x10
    ctx->r6 = ADD32(ctx->r16, 0X10);
    _plcamera_entrypoint_14(rdram, ctx);
        goto after_2;
    // 0x800F8950: addiu       $a2, $s0, 0x10
    ctx->r6 = ADD32(ctx->r16, 0X10);
    after_2:
    // 0x800F8954: jal         0x800F9214
    // 0x800F8958: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800F9214(rdram, ctx);
        goto after_3;
    // 0x800F8958: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x800F895C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x800F8960: jal         0x800F5410
    // 0x800F8964: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800F5410(rdram, ctx);
        goto after_4;
    // 0x800F8964: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x800F8968: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x800F896C: jal         0x800F65D0
    // 0x800F8970: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800F65D0(rdram, ctx);
        goto after_5;
    // 0x800F8970: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x800F8974: jal         0x800EA05C
    // 0x800F8978: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    func_800EA05C(rdram, ctx);
        goto after_6;
    // 0x800F8978: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    after_6:
    // 0x800F897C: jal         0x800EA090
    // 0x800F8980: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    func_800EA090(rdram, ctx);
        goto after_7;
    // 0x800F8980: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    after_7:
    // 0x800F8984: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800F8988: sb          $v0, 0x21($s0)
    MEM_B(0X21, ctx->r16) = ctx->r2;
    // 0x800F898C: sb          $t6, 0x20($s0)
    MEM_B(0X20, ctx->r16) = ctx->r14;
    // 0x800F8990: jal         0x800F58F8
    // 0x800F8994: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800F58F8(rdram, ctx);
        goto after_8;
    // 0x800F8994: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x800F8998: sb          $v0, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r2;
    // 0x800F899C: jal         0x800F5924
    // 0x800F89A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800F5924(rdram, ctx);
        goto after_9;
    // 0x800F89A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x800F89A4: sb          $v0, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r2;
    // 0x800F89A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F89AC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800F89B0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800F89B4: jr          $ra
    // 0x800F89B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800F89B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800F89BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F89BC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800F89C0: lbu         $t6, 0x54F8($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X54F8);
    // 0x800F89C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800F89C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800F89CC: bne         $t6, $at, L_800F89DC
    if (ctx->r14 != ctx->r1) {
            // 0x800F89D0: nop

    func_800F89DC(rdram, ctx);
    return;
    }
    // 0x800F89D0: nop

    // 0x800F89D4: jr          $ra
    // 0x800F89D8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    return;
    // 0x800F89D8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
;}
RECOMP_FUNC void func_800F89DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F89DC: jr          $ra
    // 0x800F89E0: nop

    return;
    // 0x800F89E0: nop

;}
RECOMP_FUNC void func_800F89E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F89E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F89E8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800F89EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F89F0: bne         $a0, $at, L_800F8A18
    if (ctx->r4 != ctx->r1) {
        // 0x800F89F4: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_800F8A18;
    }
    // 0x800F89F4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800F89F8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800F89FC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800F8A00: jal         0x800EE7F8
    // 0x800F8A04: addiu       $a1, $a1, 0x5500
    ctx->r5 = ADD32(ctx->r5, 0X5500);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800F8A04: addiu       $a1, $a1, 0x5500
    ctx->r5 = ADD32(ctx->r5, 0X5500);
    after_0:
    // 0x800F8A08: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800F8A0C: lw          $t6, 0x551C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X551C);
    // 0x800F8A10: b           L_800F8A3C
    // 0x800F8A14: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
        goto L_800F8A3C;
    // 0x800F8A14: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_800F8A18:
    // 0x800F8A18: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x800F8A1C: bne         $a0, $at, L_800F8A3C
    if (ctx->r4 != ctx->r1) {
        // 0x800F8A20: lui         $a1, 0x8013
        ctx->r5 = S32(0X8013 << 16);
            goto L_800F8A3C;
    }
    // 0x800F8A20: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800F8A24: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800F8A28: jal         0x800EE7F8
    // 0x800F8A2C: addiu       $a1, $a1, 0x5510
    ctx->r5 = ADD32(ctx->r5, 0X5510);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800F8A2C: addiu       $a1, $a1, 0x5510
    ctx->r5 = ADD32(ctx->r5, 0X5510);
    after_1:
    // 0x800F8A30: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800F8A34: lw          $t7, 0x551C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X551C);
    // 0x800F8A38: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_800F8A3C:
    // 0x800F8A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8A40: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800F8A44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F8A48: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8A50: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F8A54: jr          $ra
    // 0x800F8A58: lwc1        $f0, 0x550C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X550C);
    return;
    // 0x800F8A58: lwc1        $f0, 0x550C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X550C);
;}
RECOMP_FUNC void func_800F8A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8A5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8A60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8A64: jal         0x800F88A0
    // 0x800F8A68: nop

    func_800F88A0(rdram, ctx);
        goto after_0;
    // 0x800F8A68: nop

    after_0:
    // 0x800F8A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8A70: lh          $v0, 0x22($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X22);
    // 0x800F8A74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8A78: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8A80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8A84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8A88: jal         0x800F88A0
    // 0x800F8A8C: nop

    func_800F88A0(rdram, ctx);
        goto after_0;
    // 0x800F8A8C: nop

    after_0:
    // 0x800F8A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8A94: lbu         $v0, 0x21($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X21);
    // 0x800F8A98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8A9C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8AA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F8AA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8AAC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8AB0: jal         0x800B28C4
    // 0x800F8AB4: lw          $a0, 0x54F0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54F0);
    func_800B28C4(rdram, ctx);
        goto after_0;
    // 0x800F8AB4: lw          $a0, 0x54F0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54F0);
    after_0:
    // 0x800F8AB8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8ABC: lw          $a0, 0x54F0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54F0);
    // 0x800F8AC0: jal         0x800B296C
    // 0x800F8AC4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800B296C(rdram, ctx);
        goto after_1;
    // 0x800F8AC4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800F8AC8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800F8ACC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800F8AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8AD4: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x800F8AD8: beq         $at, $zero, L_800F8B04
    if (ctx->r1 == 0) {
        // 0x800F8ADC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800F8B04;
    }
    // 0x800F8ADC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800F8AE0: lbu         $t6, 0x1($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X1);
L_800F8AE4:
    // 0x800F8AE4: beql        $t6, $zero, L_800F8AF8
    if (ctx->r14 == 0) {
        // 0x800F8AE8: addiu       $v1, $v1, 0x3C
        ctx->r3 = ADD32(ctx->r3, 0X3C);
            goto L_800F8AF8;
    }
    goto skip_0;
    // 0x800F8AE8: addiu       $v1, $v1, 0x3C
    ctx->r3 = ADD32(ctx->r3, 0X3C);
    skip_0:
    // 0x800F8AEC: b           L_800F8B04
    // 0x800F8AF0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
        goto L_800F8B04;
    // 0x800F8AF0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x800F8AF4: addiu       $v1, $v1, 0x3C
    ctx->r3 = ADD32(ctx->r3, 0X3C);
L_800F8AF8:
    // 0x800F8AF8: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x800F8AFC: bnel        $at, $zero, L_800F8AE4
    if (ctx->r1 != 0) {
        // 0x800F8B00: lbu         $t6, 0x1($v1)
        ctx->r14 = MEM_BU(ctx->r3, 0X1);
            goto L_800F8AE4;
    }
    goto skip_1;
    // 0x800F8B00: lbu         $t6, 0x1($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X1);
    skip_1:
L_800F8B04:
    // 0x800F8B04: jr          $ra
    // 0x800F8B08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800F8B08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800F8B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8B0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8B10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8B14: jal         0x800F88A0
    // 0x800F8B18: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F88A0(rdram, ctx);
        goto after_0;
    // 0x800F8B18: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800F8B1C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F8B20: jal         0x800EE7F8
    // 0x800F8B24: addiu       $a1, $v0, 0x24
    ctx->r5 = ADD32(ctx->r2, 0X24);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800F8B24: addiu       $a1, $v0, 0x24
    ctx->r5 = ADD32(ctx->r2, 0X24);
    after_1:
    // 0x800F8B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8B30: jr          $ra
    // 0x800F8B34: nop

    return;
    // 0x800F8B34: nop

;}
RECOMP_FUNC void func_800F8B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8B38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8B3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8B40: jal         0x800F88A0
    // 0x800F8B44: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F88A0(rdram, ctx);
        goto after_0;
    // 0x800F8B44: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800F8B48: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F8B4C: jal         0x800EE7F8
    // 0x800F8B50: addiu       $a1, $v0, 0x30
    ctx->r5 = ADD32(ctx->r2, 0X30);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800F8B50: addiu       $a1, $v0, 0x30
    ctx->r5 = ADD32(ctx->r2, 0X30);
    after_1:
    // 0x800F8B54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8B58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8B5C: jr          $ra
    // 0x800F8B60: nop

    return;
    // 0x800F8B60: nop

;}
RECOMP_FUNC void func_800F8B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8B64: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800F8B68: jr          $ra
    // 0x800F8B6C: lbu         $v0, 0x54F9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X54F9);
    return;
    // 0x800F8B6C: lbu         $v0, 0x54F9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X54F9);
;}
RECOMP_FUNC void func_800F8B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8B70: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800F8B74: jr          $ra
    // 0x800F8B78: lbu         $v0, 0x54FC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X54FC);
    return;
    // 0x800F8B78: lbu         $v0, 0x54FC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X54FC);
;}
RECOMP_FUNC void func_800F8B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8B7C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800F8B80: jr          $ra
    // 0x800F8B84: lbu         $v0, 0x54FD($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X54FD);
    return;
    // 0x800F8B84: lbu         $v0, 0x54FD($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X54FD);
;}
RECOMP_FUNC void func_800F8B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8B88: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800F8B8C: jr          $ra
    // 0x800F8B90: lbu         $v0, 0x54F8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X54F8);
    return;
    // 0x800F8B90: lbu         $v0, 0x54F8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X54F8);
;}
RECOMP_FUNC void func_800F8B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8B94: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800F8B98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800F8B9C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800F8BA0: addiu       $s0, $s0, 0x54F0
    ctx->r16 = ADD32(ctx->r16, 0X54F0);
    // 0x800F8BA4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800F8BA8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800F8BAC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800F8BB0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800F8BB4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800F8BB8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800F8BBC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800F8BC0: jal         0x800B28C4
    // 0x800F8BC4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800B28C4(rdram, ctx);
        goto after_0;
    // 0x800F8BC4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_0:
    // 0x800F8BC8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800F8BCC: jal         0x800B296C
    // 0x800F8BD0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800B296C(rdram, ctx);
        goto after_1;
    // 0x800F8BD0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_1:
    // 0x800F8BD4: sltu        $at, $s1, $v0
    ctx->r1 = ctx->r17 < ctx->r2 ? 1 : 0;
    // 0x800F8BD8: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x800F8BDC: beq         $at, $zero, L_800F8D28
    if (ctx->r1 == 0) {
        // 0x800F8BE0: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_800F8D28;
    }
    // 0x800F8BE0: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x800F8BE4: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x800F8BE8: addiu       $s3, $s3, 0x54F8
    ctx->r19 = ADD32(ctx->r19, 0X54F8);
    // 0x800F8BEC: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x800F8BF0: addiu       $s4, $zero, 0xB
    ctx->r20 = ADD32(0, 0XB);
    // 0x800F8BF4: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
L_800F8BF8:
    // 0x800F8BF8: jal         0x800EA05C
    // 0x800F8BFC: nop

    func_800EA05C(rdram, ctx);
        goto after_2;
    // 0x800F8BFC: nop

    after_2:
    // 0x800F8C00: lh          $t6, 0x22($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X22);
    // 0x800F8C04: bnel        $v0, $t6, L_800F8D1C
    if (ctx->r2 != ctx->r14) {
        // 0x800F8C08: addiu       $s0, $s0, 0x3C
        ctx->r16 = ADD32(ctx->r16, 0X3C);
            goto L_800F8D1C;
    }
    goto skip_0;
    // 0x800F8C08: addiu       $s0, $s0, 0x3C
    ctx->r16 = ADD32(ctx->r16, 0X3C);
    skip_0:
    // 0x800F8C0C: jal         0x800F6204
    // 0x800F8C10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800F6204(rdram, ctx);
        goto after_3;
    // 0x800F8C10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x800F8C14: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800F8C18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800F8C1C: jal         0x800F7E64
    // 0x800F8C20: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    func_800F7E64(rdram, ctx);
        goto after_4;
    // 0x800F8C20: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    after_4:
    // 0x800F8C24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800F8C28: lbu         $a1, 0x1D($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1D);
    // 0x800F8C2C: jal         0x800F8268
    // 0x800F8C30: lbu         $a2, 0x1C($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1C);
    func_800F8268(rdram, ctx);
        goto after_5;
    // 0x800F8C30: lbu         $a2, 0x1C($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1C);
    after_5:
    // 0x800F8C34: lbu         $t7, 0x1($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X1);
    // 0x800F8C38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800F8C3C: beq         $t7, $zero, L_800F8C80
    if (ctx->r15 == 0) {
        // 0x800F8C40: nop
    
            goto L_800F8C80;
    }
    // 0x800F8C40: nop

    // 0x800F8C44: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x800F8C48: beq         $s2, $v0, L_800F8C58
    if (ctx->r18 == ctx->r2) {
        // 0x800F8C4C: nop
    
            goto L_800F8C58;
    }
    // 0x800F8C4C: nop

    // 0x800F8C50: bne         $s4, $v0, L_800F8C80
    if (ctx->r20 != ctx->r2) {
        // 0x800F8C54: nop
    
            goto L_800F8C80;
    }
    // 0x800F8C54: nop

L_800F8C58:
    // 0x800F8C58: bne         $s2, $v0, L_800F8C6C
    if (ctx->r18 != ctx->r2) {
        // 0x800F8C5C: lui         $a1, 0x8013
        ctx->r5 = S32(0X8013 << 16);
            goto L_800F8C6C;
    }
    // 0x800F8C5C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800F8C60: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800F8C64: b           L_800F8C70
    // 0x800F8C68: addiu       $a1, $a1, 0x5500
    ctx->r5 = ADD32(ctx->r5, 0X5500);
        goto L_800F8C70;
    // 0x800F8C68: addiu       $a1, $a1, 0x5500
    ctx->r5 = ADD32(ctx->r5, 0X5500);
L_800F8C6C:
    // 0x800F8C6C: addiu       $a1, $a1, 0x5510
    ctx->r5 = ADD32(ctx->r5, 0X5510);
L_800F8C70:
    // 0x800F8C70: jal         0x800F8294
    // 0x800F8C74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800F8294(rdram, ctx);
        goto after_6;
    // 0x800F8C74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x800F8C78: b           L_800F8C8C
    // 0x800F8C7C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_800F8C8C;
    // 0x800F8C7C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_800F8C80:
    // 0x800F8C80: jal         0x800F8294
    // 0x800F8C84: addiu       $a1, $s0, 0x24
    ctx->r5 = ADD32(ctx->r16, 0X24);
    func_800F8294(rdram, ctx);
        goto after_7;
    // 0x800F8C84: addiu       $a1, $s0, 0x24
    ctx->r5 = ADD32(ctx->r16, 0X24);
    after_7:
    // 0x800F8C88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_800F8C8C:
    // 0x800F8C8C: jal         0x800F832C
    // 0x800F8C90: addiu       $a1, $s0, 0x30
    ctx->r5 = ADD32(ctx->r16, 0X30);
    func_800F832C(rdram, ctx);
        goto after_8;
    // 0x800F8C90: addiu       $a1, $s0, 0x30
    ctx->r5 = ADD32(ctx->r16, 0X30);
    after_8:
    // 0x800F8C94: lbu         $t8, 0x1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1);
    // 0x800F8C98: beql        $t8, $zero, L_800F8CAC
    if (ctx->r24 == 0) {
        // 0x800F8C9C: lbu         $t9, 0x0($s3)
        ctx->r25 = MEM_BU(ctx->r19, 0X0);
            goto L_800F8CAC;
    }
    goto skip_1;
    // 0x800F8C9C: lbu         $t9, 0x0($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X0);
    skip_1:
    // 0x800F8CA0: jal         0x800F80D8
    // 0x800F8CA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800F80D8(rdram, ctx);
        goto after_9;
    // 0x800F8CA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x800F8CA8: lbu         $t9, 0x0($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X0);
L_800F8CAC:
    // 0x800F8CAC: beql        $s5, $t9, L_800F8CD8
    if (ctx->r21 == ctx->r25) {
        // 0x800F8CB0: lbu         $a1, 0x2($s0)
        ctx->r5 = MEM_BU(ctx->r16, 0X2);
            goto L_800F8CD8;
    }
    goto skip_2;
    // 0x800F8CB0: lbu         $a1, 0x2($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2);
    skip_2:
    // 0x800F8CB4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x800F8CB8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800F8CBC: beq         $s2, $v0, L_800F8CCC
    if (ctx->r18 == ctx->r2) {
        // 0x800F8CC0: nop
    
            goto L_800F8CCC;
    }
    // 0x800F8CC0: nop

    // 0x800F8CC4: bnel        $s4, $v0, L_800F8CD8
    if (ctx->r20 != ctx->r2) {
        // 0x800F8CC8: lbu         $a1, 0x2($s0)
        ctx->r5 = MEM_BU(ctx->r16, 0X2);
            goto L_800F8CD8;
    }
    goto skip_3;
    // 0x800F8CC8: lbu         $a1, 0x2($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2);
    skip_3:
L_800F8CCC:
    // 0x800F8CCC: jal         0x800F8358
    // 0x800F8CD0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_800F8358(rdram, ctx);
        goto after_10;
    // 0x800F8CD0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_10:
    // 0x800F8CD4: lbu         $a1, 0x2($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X2);
L_800F8CD8:
    // 0x800F8CD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800F8CDC: beq         $a1, $s5, L_800F8CF4
    if (ctx->r5 == ctx->r21) {
        // 0x800F8CE0: nop
    
            goto L_800F8CF4;
    }
    // 0x800F8CE0: nop

    // 0x800F8CE4: beq         $a1, $at, L_800F8CFC
    if (ctx->r5 == ctx->r1) {
        // 0x800F8CE8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800F8CFC;
    }
    // 0x800F8CE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800F8CEC: b           L_800F8D08
    // 0x800F8CF0: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
        goto L_800F8D08;
    // 0x800F8CF0: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
L_800F8CF4:
    // 0x800F8CF4: b           L_800F8D08
    // 0x800F8CF8: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
        goto L_800F8D08;
    // 0x800F8CF8: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
L_800F8CFC:
    // 0x800F8CFC: jal         0x800F608C
    // 0x800F8D00: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800F608C(rdram, ctx);
        goto after_11;
    // 0x800F8D00: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
    // 0x800F8D04: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
L_800F8D08:
    // 0x800F8D08: beq         $v0, $zero, L_800F8D18
    if (ctx->r2 == 0) {
        // 0x800F8D0C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800F8D18;
    }
    // 0x800F8D0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800F8D10: jal         0x800F8D80
    // 0x800F8D14: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800F8D80(rdram, ctx);
        goto after_12;
    // 0x800F8D14: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_12:
L_800F8D18:
    // 0x800F8D18: addiu       $s0, $s0, 0x3C
    ctx->r16 = ADD32(ctx->r16, 0X3C);
L_800F8D1C:
    // 0x800F8D1C: sltu        $at, $s0, $s6
    ctx->r1 = ctx->r16 < ctx->r22 ? 1 : 0;
    // 0x800F8D20: bne         $at, $zero, L_800F8BF8
    if (ctx->r1 != 0) {
        // 0x800F8D24: nop
    
            goto L_800F8BF8;
    }
    // 0x800F8D24: nop

L_800F8D28:
    // 0x800F8D28: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800F8D2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800F8D30: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800F8D34: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800F8D38: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800F8D3C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800F8D40: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800F8D44: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800F8D48: jr          $ra
    // 0x800F8D4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800F8D4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800F8D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8D50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8D54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8D58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800F8D5C: jal         0x800F88A0
    // 0x800F8D60: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800F88A0(rdram, ctx);
        goto after_0;
    // 0x800F8D60: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x800F8D64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800F8D68: jal         0x800F8D80
    // 0x800F8D6C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800F8D80(rdram, ctx);
        goto after_1;
    // 0x800F8D6C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x800F8D70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8D74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8D78: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8D80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8D84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8D88: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800F8D8C: addiu       $a2, $a3, 0x10
    ctx->r6 = ADD32(ctx->r7, 0X10);
    // 0x800F8D90: jal         0x80087918
    // 0x800F8D94: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    _plcamera_entrypoint_12(rdram, ctx);
        goto after_0;
    // 0x800F8D94: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_0:
    // 0x800F8D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8DA0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8DA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8DAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8DB0: jal         0x800F88A0
    // 0x800F8DB4: nop

    func_800F88A0(rdram, ctx);
        goto after_0;
    // 0x800F8DB4: nop

    after_0:
    // 0x800F8DB8: beq         $v0, $zero, L_800F8DC8
    if (ctx->r2 == 0) {
        // 0x800F8DBC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F8DC8;
    }
    // 0x800F8DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8DC0: b           L_800F8DCC
    // 0x800F8DC4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_800F8DCC;
    // 0x800F8DC4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800F8DC8:
    // 0x800F8DC8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800F8DCC:
    // 0x800F8DCC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800F8DD0: jr          $ra
    // 0x800F8DD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800F8DD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800F8DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8DD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8DDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8DE0: jal         0x800F9A24
    // 0x800F8DE4: nop

    func_800F9A24(rdram, ctx);
        goto after_0;
    // 0x800F8DE4: nop

    after_0:
    // 0x800F8DE8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8DEC: jal         0x800B2D28
    // 0x800F8DF0: lw          $a0, 0x54F0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54F0);
    func_800B2D28(rdram, ctx);
        goto after_1;
    // 0x800F8DF0: lw          $a0, 0x54F0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54F0);
    after_1:
    // 0x800F8DF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8DF8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F8DFC: sw          $zero, 0x54F0($at)
    MEM_W(0X54F0, ctx->r1) = 0;
    // 0x800F8E00: jr          $ra
    // 0x800F8E04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800F8E04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800F8E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8E08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8E0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8E10: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x800F8E14: jal         0x800B2D70
    // 0x800F8E18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800B2D70(rdram, ctx);
        goto after_0;
    // 0x800F8E18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x800F8E1C: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800F8E20: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F8E24: sw          $v0, 0x54F0($at)
    MEM_W(0X54F0, ctx->r1) = ctx->r2;
    // 0x800F8E28: addiu       $v1, $v1, 0x54F8
    ctx->r3 = ADD32(ctx->r3, 0X54F8);
    // 0x800F8E2C: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x800F8E30: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
    // 0x800F8E34: sb          $zero, 0x5($v1)
    MEM_B(0X5, ctx->r3) = 0;
    // 0x800F8E38: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x800F8E3C: jal         0x800F911C
    // 0x800F8E40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800F911C(rdram, ctx);
        goto after_1;
    // 0x800F8E40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800F8E44: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8E48: jal         0x800EFD24
    // 0x800F8E4C: addiu       $a0, $a0, 0x5500
    ctx->r4 = ADD32(ctx->r4, 0X5500);
    func_800EFD24(rdram, ctx);
        goto after_2;
    // 0x800F8E4C: addiu       $a0, $a0, 0x5500
    ctx->r4 = ADD32(ctx->r4, 0X5500);
    after_2:
    // 0x800F8E50: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8E54: jal         0x800EFD24
    // 0x800F8E58: addiu       $a0, $a0, 0x5510
    ctx->r4 = ADD32(ctx->r4, 0X5510);
    func_800EFD24(rdram, ctx);
        goto after_3;
    // 0x800F8E58: addiu       $a0, $a0, 0x5510
    ctx->r4 = ADD32(ctx->r4, 0X5510);
    after_3:
    // 0x800F8E5C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F8E60: jal         0x800F9A44
    // 0x800F8E64: sw          $zero, 0x551C($at)
    MEM_W(0X551C, ctx->r1) = 0;
    func_800F9A44(rdram, ctx);
        goto after_4;
    // 0x800F8E64: sw          $zero, 0x551C($at)
    MEM_W(0X551C, ctx->r1) = 0;
    after_4:
    // 0x800F8E68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8E6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8E70: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8E78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8E7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8E80: jal         0x800F88A0
    // 0x800F8E84: nop

    func_800F88A0(rdram, ctx);
        goto after_0;
    // 0x800F8E84: nop

    after_0:
    // 0x800F8E88: beq         $v0, $zero, L_800F8EAC
    if (ctx->r2 == 0) {
        // 0x800F8E8C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800F8EAC;
    }
    // 0x800F8E8C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800F8E90: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8E94: jal         0x800B28E8
    // 0x800F8E98: lw          $a0, 0x54F0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54F0);
    func_800B28E8(rdram, ctx);
        goto after_1;
    // 0x800F8E98: lw          $a0, 0x54F0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54F0);
    after_1:
    // 0x800F8E9C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8EA0: lw          $a0, 0x54F0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54F0);
    // 0x800F8EA4: jal         0x800B2E30
    // 0x800F8EA8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800B2E30(rdram, ctx);
        goto after_2;
    // 0x800F8EA8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
L_800F8EAC:
    // 0x800F8EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8EB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8EB4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8EBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8EC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8EC4: jal         0x800F5410
    // 0x800F8EC8: nop

    func_800F5410(rdram, ctx);
        goto after_0;
    // 0x800F8EC8: nop

    after_0:
    // 0x800F8ECC: jal         0x800F8E78
    // 0x800F8ED0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F8E78(rdram, ctx);
        goto after_1;
    // 0x800F8ED0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800F8ED4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8ED8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8EDC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8EE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F8EE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8EEC: jal         0x800F5410
    // 0x800F8EF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F5410(rdram, ctx);
        goto after_0;
    // 0x800F8EF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800F8EF4: jal         0x800F88A0
    // 0x800F8EF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F88A0(rdram, ctx);
        goto after_1;
    // 0x800F8EF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800F8EFC: beq         $v0, $zero, L_800F8F14
    if (ctx->r2 == 0) {
        // 0x800F8F00: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800F8F14;
    }
    // 0x800F8F00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800F8F04: jal         0x800F8914
    // 0x800F8F08: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F8914(rdram, ctx);
        goto after_2;
    // 0x800F8F08: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x800F8F0C: b           L_800F8F30
    // 0x800F8F10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F8F30;
    // 0x800F8F10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F8F14:
    // 0x800F8F14: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F8F18: jal         0x800B2974
    // 0x800F8F1C: addiu       $a0, $a0, 0x54F0
    ctx->r4 = ADD32(ctx->r4, 0X54F0);
    func_800B2974(rdram, ctx);
        goto after_3;
    // 0x800F8F1C: addiu       $a0, $a0, 0x54F0
    ctx->r4 = ADD32(ctx->r4, 0X54F0);
    after_3:
    // 0x800F8F20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800F8F24: jal         0x800F8914
    // 0x800F8F28: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800F8914(rdram, ctx);
        goto after_4;
    // 0x800F8F28: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_4:
    // 0x800F8F2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F8F30:
    // 0x800F8F30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F8F34: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F8F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8F3C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800F8F40: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800F8F44: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800F8F48: addiu       $s1, $s1, 0x54F8
    ctx->r17 = ADD32(ctx->r17, 0X54F8);
    // 0x800F8F4C: lbu         $t6, 0x0($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X0);
    // 0x800F8F50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800F8F54: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800F8F58: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x800F8F5C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x800F8F60: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800F8F64: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800F8F68: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800F8F6C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800F8F70: bne         $t6, $at, L_800F9044
    if (ctx->r14 != ctx->r1) {
        // 0x800F8F74: sdc1        $f20, 0x18($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
            goto L_800F9044;
    }
    // 0x800F8F74: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800F8F78: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800F8F7C: addiu       $s0, $s0, 0x54F0
    ctx->r16 = ADD32(ctx->r16, 0X54F0);
    // 0x800F8F80: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800F8F84: beql        $a0, $zero, L_800F9048
    if (ctx->r4 == 0) {
        // 0x800F8F88: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_800F9048;
    }
    goto skip_0;
    // 0x800F8F88: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x800F8F8C: jal         0x800B28C4
    // 0x800F8F90: nop

    func_800B28C4(rdram, ctx);
        goto after_0;
    // 0x800F8F90: nop

    after_0:
    // 0x800F8F94: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800F8F98: jal         0x800B296C
    // 0x800F8F9C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_800B296C(rdram, ctx);
        goto after_1;
    // 0x800F8F9C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_1:
    // 0x800F8FA0: sltu        $at, $s2, $v0
    ctx->r1 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x800F8FA4: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x800F8FA8: beq         $at, $zero, L_800F9044
    if (ctx->r1 == 0) {
        // 0x800F8FAC: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_800F9044;
    }
    // 0x800F8FAC: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x800F8FB0: lui         $s5, 0x8013
    ctx->r21 = S32(0X8013 << 16);
    // 0x800F8FB4: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x800F8FB8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800F8FBC: addiu       $s3, $s3, 0x5500
    ctx->r19 = ADD32(ctx->r19, 0X5500);
    // 0x800F8FC0: addiu       $s5, $s5, 0x5510
    ctx->r21 = ADD32(ctx->r21, 0X5510);
    // 0x800F8FC4: addiu       $s4, $zero, 0xB
    ctx->r20 = ADD32(0, 0XB);
    // 0x800F8FC8: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
    // 0x800F8FCC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
L_800F8FD0:
    // 0x800F8FD0: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x800F8FD4: bne         $s2, $v0, L_800F9008
    if (ctx->r18 != ctx->r2) {
        // 0x800F8FD8: nop
    
            goto L_800F9008;
    }
    // 0x800F8FD8: nop

    // 0x800F8FDC: jal         0x800EE7F8
    // 0x800F8FE0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x800F8FE0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x800F8FE4: lw          $t7, 0x24($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X24);
    // 0x800F8FE8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800F8FEC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x800F8FF0: sh          $t7, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r15;
    // 0x800F8FF4: lw          $a2, 0x14($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X14);
    // 0x800F8FF8: jal         0x800EFA4C
    // 0x800F8FFC: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    func_800EFA4C(rdram, ctx);
        goto after_3;
    // 0x800F8FFC: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    after_3:
    // 0x800F9000: b           L_800F9038
    // 0x800F9004: addiu       $s0, $s0, 0x3C
    ctx->r16 = ADD32(ctx->r16, 0X3C);
        goto L_800F9038;
    // 0x800F9004: addiu       $s0, $s0, 0x3C
    ctx->r16 = ADD32(ctx->r16, 0X3C);
L_800F9008:
    // 0x800F9008: bne         $s4, $v0, L_800F9034
    if (ctx->r20 != ctx->r2) {
        // 0x800F900C: addiu       $a0, $s0, 0x24
        ctx->r4 = ADD32(ctx->r16, 0X24);
            goto L_800F9034;
    }
    // 0x800F900C: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x800F9010: jal         0x800EE7F8
    // 0x800F9014: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_4;
    // 0x800F9014: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_4:
    // 0x800F9018: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x800F901C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800F9020: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x800F9024: sh          $t8, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r24;
    // 0x800F9028: lw          $a2, 0x14($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X14);
    // 0x800F902C: jal         0x800EFA4C
    // 0x800F9030: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    func_800EFA4C(rdram, ctx);
        goto after_5;
    // 0x800F9030: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    after_5:
L_800F9034:
    // 0x800F9034: addiu       $s0, $s0, 0x3C
    ctx->r16 = ADD32(ctx->r16, 0X3C);
L_800F9038:
    // 0x800F9038: sltu        $at, $s0, $s6
    ctx->r1 = ctx->r16 < ctx->r22 ? 1 : 0;
    // 0x800F903C: bnel        $at, $zero, L_800F8FD0
    if (ctx->r1 != 0) {
        // 0x800F9040: lbu         $v0, 0x0($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X0);
            goto L_800F8FD0;
    }
    goto skip_1;
    // 0x800F9040: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    skip_1:
L_800F9044:
    // 0x800F9044: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800F9048:
    // 0x800F9048: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800F904C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800F9050: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800F9054: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800F9058: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800F905C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800F9060: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x800F9064: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x800F9068: jr          $ra
    // 0x800F906C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800F906C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800F9070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F9074: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F9078: jal         0x800F88A0
    // 0x800F907C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F88A0(rdram, ctx);
        goto after_0;
    // 0x800F907C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800F9080: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9084: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x800F9088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F908C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F9090: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F9098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9098: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F909C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800F90A0: bne         $a0, $at, L_800F90BC
    if (ctx->r4 != ctx->r1) {
        // 0x800F90A4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800F90BC;
    }
    // 0x800F90A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F90A8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F90AC: jal         0x800EE7F8
    // 0x800F90B0: addiu       $a0, $a0, 0x5500
    ctx->r4 = ADD32(ctx->r4, 0X5500);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x800F90B0: addiu       $a0, $a0, 0x5500
    ctx->r4 = ADD32(ctx->r4, 0X5500);
    after_0:
    // 0x800F90B4: b           L_800F90D0
    // 0x800F90B8: nop

        goto L_800F90D0;
    // 0x800F90B8: nop

L_800F90BC:
    // 0x800F90BC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x800F90C0: bne         $a0, $at, L_800F90D0
    if (ctx->r4 != ctx->r1) {
        // 0x800F90C4: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_800F90D0;
    }
    // 0x800F90C4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F90C8: jal         0x800EE7F8
    // 0x800F90CC: addiu       $a0, $a0, 0x5510
    ctx->r4 = ADD32(ctx->r4, 0X5510);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x800F90CC: addiu       $a0, $a0, 0x5510
    ctx->r4 = ADD32(ctx->r4, 0X5510);
    after_1:
L_800F90D0:
    // 0x800F90D0: jal         0x800EA05C
    // 0x800F90D4: nop

    func_800EA05C(rdram, ctx);
        goto after_2;
    // 0x800F90D4: nop

    after_2:
    // 0x800F90D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F90DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F90E0: sw          $v0, 0x551C($at)
    MEM_W(0X551C, ctx->r1) = ctx->r2;
    // 0x800F90E4: jr          $ra
    // 0x800F90E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800F90E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800F90EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F90EC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F90F0: jr          $ra
    // 0x800F90F4: swc1        $f12, 0x550C($at)
    MEM_W(0X550C, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x800F90F4: swc1        $f12, 0x550C($at)
    MEM_W(0X550C, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_800F90F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F90F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F90FC: jr          $ra
    // 0x800F9100: sb          $a0, 0x54F9($at)
    MEM_B(0X54F9, ctx->r1) = ctx->r4;
    return;
    // 0x800F9100: sb          $a0, 0x54F9($at)
    MEM_B(0X54F9, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800F9104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9104: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F9108: jr          $ra
    // 0x800F910C: sb          $a0, 0x54FC($at)
    MEM_B(0X54FC, ctx->r1) = ctx->r4;
    return;
    // 0x800F910C: sb          $a0, 0x54FC($at)
    MEM_B(0X54FC, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800F9110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9110: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F9114: jr          $ra
    // 0x800F9118: sb          $a0, 0x54FD($at)
    MEM_B(0X54FD, ctx->r1) = ctx->r4;
    return;
    // 0x800F9118: sb          $a0, 0x54FD($at)
    MEM_B(0X54FD, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800F911C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F911C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800F9120: addiu       $v0, $v0, 0x54F8
    ctx->r2 = ADD32(ctx->r2, 0X54F8);
    // 0x800F9124: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x800F9128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F912C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800F9130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F9134: bne         $t6, $at, L_800F914C
    if (ctx->r14 != ctx->r1) {
        // 0x800F9138: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_800F914C;
    }
    // 0x800F9138: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800F913C: jal         0x800CF840
    // 0x800F9140: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800CF840(rdram, ctx);
        goto after_0;
    // 0x800F9140: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800F9144: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800F9148: addiu       $v0, $v0, 0x54F8
    ctx->r2 = ADD32(ctx->r2, 0X54F8);
L_800F914C:
    // 0x800F914C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800F9150: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800F9154: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x800F9158: bne         $t8, $at, L_800F9168
    if (ctx->r24 != ctx->r1) {
        // 0x800F915C: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_800F9168;
    }
    // 0x800F915C: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x800F9160: jal         0x800CF840
    // 0x800F9164: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800CF840(rdram, ctx);
        goto after_1;
    // 0x800F9164: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
L_800F9168:
    // 0x800F9168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F916C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F9170: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F9178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9178: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F917C: jr          $ra
    // 0x800F9180: sb          $zero, 0x54FA($at)
    MEM_B(0X54FA, ctx->r1) = 0;
    return;
    // 0x800F9180: sb          $zero, 0x54FA($at)
    MEM_B(0X54FA, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800F9184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9184: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800F9188: lbu         $v0, 0x54FA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X54FA);
    // 0x800F918C: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800F9190: jr          $ra
    // 0x800F9194: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x800F9194: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_800F9198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9198: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800F919C: lbu         $t6, 0x54FA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X54FA);
    // 0x800F91A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F91A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F91A8: bne         $t6, $zero, L_800F91D4
    if (ctx->r14 != 0) {
        // 0x800F91AC: nop
    
            goto L_800F91D4;
    }
    // 0x800F91AC: nop

    // 0x800F91B0: jal         0x800F90F8
    // 0x800F91B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800F90F8(rdram, ctx);
        goto after_0;
    // 0x800F91B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800F91B8: jal         0x800F9104
    // 0x800F91BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800F9104(rdram, ctx);
        goto after_1;
    // 0x800F91BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x800F91C0: jal         0x800F9110
    // 0x800F91C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800F9110(rdram, ctx);
        goto after_2;
    // 0x800F91C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x800F91C8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800F91CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F91D0: sb          $t7, 0x54FA($at)
    MEM_B(0X54FA, ctx->r1) = ctx->r15;
L_800F91D4:
    // 0x800F91D4: jal         0x800F9C6C
    // 0x800F91D8: nop

    func_800F9C6C(rdram, ctx);
        goto after_3;
    // 0x800F91D8: nop

    after_3:
    // 0x800F91DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F91E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F91E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F91EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F91EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F91F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F91F4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F91F8: jal         0x800B2F58
    // 0x800F91FC: lw          $a0, 0x54F0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54F0);
    func_800B2F58(rdram, ctx);
        goto after_0;
    // 0x800F91FC: lw          $a0, 0x54F0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54F0);
    after_0:
    // 0x800F9200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F9204: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F9208: sw          $v0, 0x54F0($at)
    MEM_W(0X54F0, ctx->r1) = ctx->r2;
    // 0x800F920C: jr          $ra
    // 0x800F9210: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800F9210: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800F9214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9214: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F9218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F921C: jal         0x800F6720
    // 0x800F9220: nop

    func_800F6720(rdram, ctx);
        goto after_0;
    // 0x800F9220: nop

    after_0:
    // 0x800F9224: beq         $v0, $zero, L_800F9234
    if (ctx->r2 == 0) {
        // 0x800F9228: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F9234;
    }
    // 0x800F9228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F922C: b           L_800F9238
    // 0x800F9230: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800F9238;
    // 0x800F9230: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800F9234:
    // 0x800F9234: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800F9238:
    // 0x800F9238: jr          $ra
    // 0x800F923C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800F923C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800F9240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9240: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F9244: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800F9248: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F924C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800F9250: jal         0x800F5A00
    // 0x800F9254: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800F5A00(rdram, ctx);
        goto after_0;
    // 0x800F9254: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x800F9258: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x800F925C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800F9260: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800F9264: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F9268: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800F926C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800F9270: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800F9274: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x800F9278: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800F927C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x800F9280: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F9284: jal         0x800EFA4C
    // 0x800F9288: nop

    func_800EFA4C(rdram, ctx);
        goto after_1;
    // 0x800F9288: nop

    after_1:
    // 0x800F928C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F9290: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F9294: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F929C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F929C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F92A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F92A4: jal         0x800F8B88
    // 0x800F92A8: nop

    func_800F8B88(rdram, ctx);
        goto after_0;
    // 0x800F92A8: nop

    after_0:
    // 0x800F92AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800F92B0: bne         $v0, $at, L_800F92C0
    if (ctx->r2 != ctx->r1) {
        // 0x800F92B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F92C0;
    }
    // 0x800F92B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F92B8: b           L_800F92C4
    // 0x800F92BC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_800F92C4;
    // 0x800F92BC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_800F92C0:
    // 0x800F92C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800F92C4:
    // 0x800F92C4: jr          $ra
    // 0x800F92C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800F92C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800F92CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F92CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F92D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F92D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800F92D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800F92DC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800F92E0: jal         0x800F54E4
    // 0x800F92E4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800F92E4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x800F92E8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800F92EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800F92F0: jal         0x800F5410
    // 0x800F92F4: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    func_800F5410(rdram, ctx);
        goto after_1;
    // 0x800F92F4: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    after_1:
    // 0x800F92F8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800F92FC: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x800F9300: beq         $v0, $v1, L_800F931C
    if (ctx->r2 == ctx->r3) {
        // 0x800F9304: sw          $v0, 0x0($t7)
        MEM_W(0X0, ctx->r15) = ctx->r2;
            goto L_800F931C;
    }
    // 0x800F9304: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x800F9308: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x800F930C: beq         $v0, $at, L_800F932C
    if (ctx->r2 == ctx->r1) {
        // 0x800F9310: lw          $t0, 0x24($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X24);
            goto L_800F932C;
    }
    // 0x800F9310: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F9314: b           L_800F9334
    // 0x800F9318: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
        goto L_800F9334;
    // 0x800F9318: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
L_800F931C:
    // 0x800F931C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800F9320: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x800F9324: b           L_800F9330
    // 0x800F9328: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
        goto L_800F9330;
    // 0x800F9328: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_800F932C:
    // 0x800F932C: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
L_800F9330:
    // 0x800F9330: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
L_800F9334:
    // 0x800F9334: jal         0x800878A0
    // 0x800F9338: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x800F9338: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_2:
    // 0x800F933C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800F9340: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x800F9344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F9348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F934C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F9354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9354: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F9358: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F935C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800F9360: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800F9364: jal         0x800F54E4
    // 0x800F9368: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800F9368: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800F936C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800F9370: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800F9374: jal         0x800F5410
    // 0x800F9378: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    func_800F5410(rdram, ctx);
        goto after_1;
    // 0x800F9378: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    after_1:
    // 0x800F937C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9380: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x800F9384: beq         $v0, $v1, L_800F93A0
    if (ctx->r2 == ctx->r3) {
        // 0x800F9388: sw          $v0, 0x0($t7)
        MEM_W(0X0, ctx->r15) = ctx->r2;
            goto L_800F93A0;
    }
    // 0x800F9388: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x800F938C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x800F9390: beq         $v0, $at, L_800F93B0
    if (ctx->r2 == ctx->r1) {
        // 0x800F9394: lw          $t0, 0x20($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X20);
            goto L_800F93B0;
    }
    // 0x800F9394: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800F9398: b           L_800F93B8
    // 0x800F939C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F93B8;
    // 0x800F939C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F93A0:
    // 0x800F93A0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800F93A4: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x800F93A8: b           L_800F93B4
    // 0x800F93AC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
        goto L_800F93B4;
    // 0x800F93AC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_800F93B0:
    // 0x800F93B0: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
L_800F93B4:
    // 0x800F93B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F93B8:
    // 0x800F93B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F93BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F93C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F93C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F93C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F93CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800F93D0: jal         0x800F54E4
    // 0x800F93D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800F93D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800F93D8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800F93DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800F93E0: jal         0x800F5410
    // 0x800F93E4: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    func_800F5410(rdram, ctx);
        goto after_1;
    // 0x800F93E4: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    after_1:
    // 0x800F93E8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800F93EC: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x800F93F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F93F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F93F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F9400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F9404: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800F9408: beq         $a0, $at, L_800F941C
    if (ctx->r4 == ctx->r1) {
        // 0x800F940C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800F941C;
    }
    // 0x800F940C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F9410: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F9414: bne         $a0, $at, L_800F942C
    if (ctx->r4 != ctx->r1) {
        // 0x800F9418: nop
    
            goto L_800F942C;
    }
    // 0x800F9418: nop

L_800F941C:
    // 0x800F941C: jal         0x800C964C
    // 0x800F9420: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_800C964C(rdram, ctx);
        goto after_0;
    // 0x800F9420: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x800F9424: b           L_800F9438
    // 0x800F9428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9438;
    // 0x800F9428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F942C:
    // 0x800F942C: jal         0x800C964C
    // 0x800F9430: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_800C964C(rdram, ctx);
        goto after_1;
    // 0x800F9430: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_1:
    // 0x800F9434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9438:
    // 0x800F9438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F943C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F9444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9444: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F9448: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800F944C: beq         $a0, $at, L_800F9460
    if (ctx->r4 == ctx->r1) {
        // 0x800F9450: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800F9460;
    }
    // 0x800F9450: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F9454: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F9458: bne         $a0, $at, L_800F9470
    if (ctx->r4 != ctx->r1) {
        // 0x800F945C: nop
    
            goto L_800F9470;
    }
    // 0x800F945C: nop

L_800F9460:
    // 0x800F9460: jal         0x800C964C
    // 0x800F9464: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_800C964C(rdram, ctx);
        goto after_0;
    // 0x800F9464: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_0:
    // 0x800F9468: b           L_800F947C
    // 0x800F946C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F947C;
    // 0x800F946C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9470:
    // 0x800F9470: jal         0x800C964C
    // 0x800F9474: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_800C964C(rdram, ctx);
        goto after_1;
    // 0x800F9474: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_1:
    // 0x800F9478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F947C:
    // 0x800F947C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F9480: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F9488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9488: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800F948C: lbu         $v0, 0x5520($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5520);
    // 0x800F9490: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800F9494: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800F9498: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F949C: beq         $v0, $at, L_800F94D0
    if (ctx->r2 == ctx->r1) {
        // 0x800F94A0: sw          $a0, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r4;
            goto L_800F94D0;
    }
    // 0x800F94A0: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x800F94A4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800F94A8: beq         $v0, $at, L_800F9514
    if (ctx->r2 == ctx->r1) {
        // 0x800F94AC: lw          $t7, 0x60($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X60);
            goto L_800F9514;
    }
    // 0x800F94AC: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x800F94B0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800F94B4: beq         $v0, $at, L_800F9558
    if (ctx->r2 == ctx->r1) {
        // 0x800F94B8: lw          $t8, 0x60($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X60);
            goto L_800F9558;
    }
    // 0x800F94B8: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x800F94BC: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x800F94C0: beq         $v0, $at, L_800F9598
    if (ctx->r2 == ctx->r1) {
        // 0x800F94C4: lw          $t9, 0x60($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X60);
            goto L_800F9598;
    }
    // 0x800F94C4: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x800F94C8: b           L_800F95B8
    // 0x800F94CC: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
        goto L_800F95B8;
    // 0x800F94CC: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
L_800F94D0:
    // 0x800F94D0: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x800F94D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F94D8: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x800F94DC: bne         $t6, $at, L_800F95B4
    if (ctx->r14 != ctx->r1) {
        // 0x800F94E0: addiu       $a1, $sp, 0x5C
        ctx->r5 = ADD32(ctx->r29, 0X5C);
            goto L_800F95B4;
    }
    // 0x800F94E0: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x800F94E4: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x800F94E8: jal         0x800F92CC
    // 0x800F94EC: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    func_800F92CC(rdram, ctx);
        goto after_0;
    // 0x800F94EC: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    after_0:
    // 0x800F94F0: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800F94F4: jal         0x800F82D4
    // 0x800F94F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800F82D4(rdram, ctx);
        goto after_1;
    // 0x800F94F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800F94FC: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800F9500: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F9504: jal         0x800F8268
    // 0x800F9508: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800F8268(rdram, ctx);
        goto after_2;
    // 0x800F9508: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x800F950C: b           L_800F95B8
    // 0x800F9510: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
        goto L_800F95B8;
    // 0x800F9510: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
L_800F9514:
    // 0x800F9514: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F9518: bne         $t7, $at, L_800F95B4
    if (ctx->r15 != ctx->r1) {
        // 0x800F951C: addiu       $a0, $sp, 0x58
        ctx->r4 = ADD32(ctx->r29, 0X58);
            goto L_800F95B4;
    }
    // 0x800F951C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x800F9520: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x800F9524: jal         0x800F9354
    // 0x800F9528: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_800F9354(rdram, ctx);
        goto after_3;
    // 0x800F9528: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_3:
    // 0x800F952C: jal         0x800F8EBC
    // 0x800F9530: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_800F8EBC(rdram, ctx);
        goto after_4;
    // 0x800F9530: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_4:
    // 0x800F9534: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800F9538: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F953C: jal         0x800F8268
    // 0x800F9540: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800F8268(rdram, ctx);
        goto after_5;
    // 0x800F9540: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x800F9544: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800F9548: jal         0x800F82D4
    // 0x800F954C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800F82D4(rdram, ctx);
        goto after_6;
    // 0x800F954C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800F9550: b           L_800F95B8
    // 0x800F9554: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
        goto L_800F95B8;
    // 0x800F9554: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
L_800F9558:
    // 0x800F9558: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F955C: bne         $t8, $at, L_800F95B4
    if (ctx->r24 != ctx->r1) {
        // 0x800F9560: addiu       $a0, $sp, 0x58
        ctx->r4 = ADD32(ctx->r29, 0X58);
            goto L_800F95B4;
    }
    // 0x800F9560: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x800F9564: jal         0x800F93C4
    // 0x800F9568: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_800F93C4(rdram, ctx);
        goto after_7;
    // 0x800F9568: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_7:
    // 0x800F956C: jal         0x800F8EBC
    // 0x800F9570: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_800F8EBC(rdram, ctx);
        goto after_8;
    // 0x800F9570: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_8:
    // 0x800F9574: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800F9578: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F957C: jal         0x800F8268
    // 0x800F9580: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800F8268(rdram, ctx);
        goto after_9;
    // 0x800F9580: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x800F9584: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800F9588: jal         0x800F82D4
    // 0x800F958C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800F82D4(rdram, ctx);
        goto after_10;
    // 0x800F958C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x800F9590: b           L_800F95B8
    // 0x800F9594: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
        goto L_800F95B8;
    // 0x800F9594: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
L_800F9598:
    // 0x800F9598: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F959C: bne         $t9, $at, L_800F95B4
    if (ctx->r25 != ctx->r1) {
        // 0x800F95A0: addiu       $a0, $sp, 0x58
        ctx->r4 = ADD32(ctx->r29, 0X58);
            goto L_800F95B4;
    }
    // 0x800F95A0: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x800F95A4: jal         0x800F93C4
    // 0x800F95A8: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_800F93C4(rdram, ctx);
        goto after_11;
    // 0x800F95A8: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_11:
    // 0x800F95AC: jal         0x800F8E78
    // 0x800F95B0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800F8E78(rdram, ctx);
        goto after_12;
    // 0x800F95B0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_12:
L_800F95B4:
    // 0x800F95B4: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
L_800F95B8:
    // 0x800F95B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F95BC: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x800F95C0: addiu       $t2, $t1, -0x2
    ctx->r10 = ADD32(ctx->r9, -0X2);
    // 0x800F95C4: sb          $t0, 0x5520($at)
    MEM_B(0X5520, ctx->r1) = ctx->r8;
    // 0x800F95C8: sltiu       $at, $t2, 0x10
    ctx->r1 = ctx->r10 < 0X10 ? 1 : 0;
    // 0x800F95CC: beq         $at, $zero, L_800F99D8
    if (ctx->r1 == 0) {
        // 0x800F95D0: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_800F99D8;
    }
    // 0x800F95D0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800F95D4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800F95D8: addu        $at, $at, $t2
    gpr jr_addend_800F95E0 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800F95DC: lw          $t2, 0x6090($at)
    ctx->r10 = ADD32(ctx->r1, 0X6090);
    // 0x800F95E0: jr          $t2
    // 0x800F95E4: nop

    switch (jr_addend_800F95E0 >> 2) {
        case 0: goto L_800F95E8; break;
        case 1: goto L_800F9628; break;
        case 2: goto L_800F9664; break;
        case 3: goto L_800F9690; break;
        case 4: goto L_800F96F0; break;
        case 5: goto L_800F971C; break;
        case 6: goto L_800F9734; break;
        case 7: goto L_800F977C; break;
        case 8: goto L_800F97A4; break;
        case 9: goto L_800F97E4; break;
        case 10: goto L_800F99D8; break;
        case 11: goto L_800F9820; break;
        case 12: goto L_800F9848; break;
        case 13: goto L_800F9874; break;
        case 14: goto L_800F98D0; break;
        case 15: goto L_800F997C; break;
        default: switch_error(__func__, 0x800F95E0, 0x80126090);
    }
    // 0x800F95E4: nop

L_800F95E8:
    // 0x800F95E8: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x800F95EC: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x800F95F0: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x800F95F4: jal         0x800F92CC
    // 0x800F95F8: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    func_800F92CC(rdram, ctx);
        goto after_13;
    // 0x800F95F8: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    after_13:
    // 0x800F95FC: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800F9600: jal         0x800F82D4
    // 0x800F9604: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800F82D4(rdram, ctx);
        goto after_14;
    // 0x800F9604: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_14:
    // 0x800F9608: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800F960C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F9610: jal         0x800F8268
    // 0x800F9614: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800F8268(rdram, ctx);
        goto after_15;
    // 0x800F9614: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x800F9618: jal         0x800F9444
    // 0x800F961C: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    func_800F9444(rdram, ctx);
        goto after_16;
    // 0x800F961C: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    after_16:
    // 0x800F9620: b           L_800F99DC
    // 0x800F9624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F99DC;
    // 0x800F9624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9628:
    // 0x800F9628: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x800F962C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x800F9630: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x800F9634: jal         0x800F92CC
    // 0x800F9638: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    func_800F92CC(rdram, ctx);
        goto after_17;
    // 0x800F9638: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    after_17:
    // 0x800F963C: jal         0x800F8128
    // 0x800F9640: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_800F8128(rdram, ctx);
        goto after_18;
    // 0x800F9640: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_18:
    // 0x800F9644: jal         0x800F8EE4
    // 0x800F9648: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_800F8EE4(rdram, ctx);
        goto after_19;
    // 0x800F9648: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_19:
    // 0x800F964C: jal         0x800F8EBC
    // 0x800F9650: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_800F8EBC(rdram, ctx);
        goto after_20;
    // 0x800F9650: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_20:
    // 0x800F9654: jal         0x800F9400
    // 0x800F9658: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    func_800F9400(rdram, ctx);
        goto after_21;
    // 0x800F9658: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    after_21:
    // 0x800F965C: b           L_800F99DC
    // 0x800F9660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F99DC;
    // 0x800F9660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9664:
    // 0x800F9664: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x800F9668: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x800F966C: jal         0x800F9354
    // 0x800F9670: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_800F9354(rdram, ctx);
        goto after_22;
    // 0x800F9670: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_22:
    // 0x800F9674: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800F9678: jal         0x800F82D4
    // 0x800F967C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800F82D4(rdram, ctx);
        goto after_23;
    // 0x800F967C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_23:
    // 0x800F9680: jal         0x800F9444
    // 0x800F9684: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    func_800F9444(rdram, ctx);
        goto after_24;
    // 0x800F9684: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    after_24:
    // 0x800F9688: b           L_800F99DC
    // 0x800F968C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F99DC;
    // 0x800F968C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9690:
    // 0x800F9690: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x800F9694: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x800F9698: jal         0x800F9354
    // 0x800F969C: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_800F9354(rdram, ctx);
        goto after_25;
    // 0x800F969C: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_25:
    // 0x800F96A0: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x800F96A4: jal         0x800F9070
    // 0x800F96A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800F9070(rdram, ctx);
        goto after_26;
    // 0x800F96A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x800F96AC: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800F96B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F96B4: jal         0x800F8268
    // 0x800F96B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800F8268(rdram, ctx);
        goto after_27;
    // 0x800F96B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_27:
    // 0x800F96BC: jal         0x800F8EE4
    // 0x800F96C0: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_800F8EE4(rdram, ctx);
        goto after_28;
    // 0x800F96C0: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_28:
    // 0x800F96C4: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x800F96C8: jal         0x800F9070
    // 0x800F96CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800F9070(rdram, ctx);
        goto after_29;
    // 0x800F96CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_29:
    // 0x800F96D0: jal         0x800F8A5C
    // 0x800F96D4: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    func_800F8A5C(rdram, ctx);
        goto after_30;
    // 0x800F96D4: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    after_30:
    // 0x800F96D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800F96DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F96E0: jal         0x800A7990
    // 0x800F96E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800A7990(rdram, ctx);
        goto after_31;
    // 0x800F96E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_31:
    // 0x800F96E8: b           L_800F99DC
    // 0x800F96EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F99DC;
    // 0x800F96EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F96F0:
    // 0x800F96F0: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x800F96F4: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x800F96F8: jal         0x800F9354
    // 0x800F96FC: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_800F9354(rdram, ctx);
        goto after_32;
    // 0x800F96FC: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_32:
    // 0x800F9700: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800F9704: jal         0x800F82D4
    // 0x800F9708: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800F82D4(rdram, ctx);
        goto after_33;
    // 0x800F9708: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_33:
    // 0x800F970C: jal         0x800F9400
    // 0x800F9710: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    func_800F9400(rdram, ctx);
        goto after_34;
    // 0x800F9710: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    after_34:
    // 0x800F9714: b           L_800F99DC
    // 0x800F9718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F99DC;
    // 0x800F9718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F971C:
    // 0x800F971C: jal         0x800F929C
    // 0x800F9720: nop

    func_800F929C(rdram, ctx);
        goto after_35;
    // 0x800F9720: nop

    after_35:
    // 0x800F9724: jal         0x800F9444
    // 0x800F9728: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F9444(rdram, ctx);
        goto after_36;
    // 0x800F9728: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_36:
    // 0x800F972C: b           L_800F99DC
    // 0x800F9730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F99DC;
    // 0x800F9730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9734:
    // 0x800F9734: jal         0x800F929C
    // 0x800F9738: nop

    func_800F929C(rdram, ctx);
        goto after_37;
    // 0x800F9738: nop

    after_37:
    // 0x800F973C: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x800F9740: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800F9744: jal         0x800F9070
    // 0x800F9748: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800F9070(rdram, ctx);
        goto after_38;
    // 0x800F9748: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_38:
    // 0x800F974C: jal         0x800DB9B0
    // 0x800F9750: nop

    func_800DB9B0(rdram, ctx);
        goto after_39;
    // 0x800F9750: nop

    after_39:
    // 0x800F9754: bnel        $v0, $zero, L_800F99DC
    if (ctx->r2 != 0) {
        // 0x800F9758: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800F99DC;
    }
    goto skip_0;
    // 0x800F9758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800F975C: jal         0x800F8A5C
    // 0x800F9760: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    func_800F8A5C(rdram, ctx);
        goto after_40;
    // 0x800F9760: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    after_40:
    // 0x800F9764: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800F9768: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F976C: jal         0x800A7990
    // 0x800F9770: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800A7990(rdram, ctx);
        goto after_41;
    // 0x800F9770: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_41:
    // 0x800F9774: b           L_800F99DC
    // 0x800F9778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F99DC;
    // 0x800F9778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F977C:
    // 0x800F977C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x800F9780: jal         0x800F93C4
    // 0x800F9784: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_800F93C4(rdram, ctx);
        goto after_42;
    // 0x800F9784: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_42:
    // 0x800F9788: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800F978C: jal         0x800F82D4
    // 0x800F9790: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800F82D4(rdram, ctx);
        goto after_43;
    // 0x800F9790: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_43:
    // 0x800F9794: jal         0x800F9400
    // 0x800F9798: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    func_800F9400(rdram, ctx);
        goto after_44;
    // 0x800F9798: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    after_44:
    // 0x800F979C: b           L_800F99DC
    // 0x800F97A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F99DC;
    // 0x800F97A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F97A4:
    // 0x800F97A4: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x800F97A8: jal         0x800F93C4
    // 0x800F97AC: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_800F93C4(rdram, ctx);
        goto after_45;
    // 0x800F97AC: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_45:
    // 0x800F97B0: jal         0x800878A0
    // 0x800F97B4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_46;
    // 0x800F97B4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_46:
    // 0x800F97B8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x800F97BC: jal         0x800F8128
    // 0x800F97C0: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_800F8128(rdram, ctx);
        goto after_47;
    // 0x800F97C0: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_47:
    // 0x800F97C4: jal         0x800F759C
    // 0x800F97C8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_800F759C(rdram, ctx);
        goto after_48;
    // 0x800F97C8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_48:
    // 0x800F97CC: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800F97D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F97D4: jal         0x800F8268
    // 0x800F97D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800F8268(rdram, ctx);
        goto after_49;
    // 0x800F97D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_49:
    // 0x800F97DC: b           L_800F99DC
    // 0x800F97E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F99DC;
    // 0x800F97E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F97E4:
    // 0x800F97E4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800F97E8: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x800F97EC: lbu         $a0, 0x5522($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X5522);
    // 0x800F97F0: lbu         $t3, 0x5521($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X5521);
    // 0x800F97F4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x800F97F8: jal         0x800F8128
    // 0x800F97FC: sw          $t3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r11;
    func_800F8128(rdram, ctx);
        goto after_50;
    // 0x800F97FC: sw          $t3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r11;
    after_50:
    // 0x800F9800: jal         0x800F759C
    // 0x800F9804: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_800F759C(rdram, ctx);
        goto after_51;
    // 0x800F9804: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_51:
    // 0x800F9808: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x800F980C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F9810: jal         0x800F8268
    // 0x800F9814: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800F8268(rdram, ctx);
        goto after_52;
    // 0x800F9814: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_52:
    // 0x800F9818: b           L_800F99DC
    // 0x800F981C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F99DC;
    // 0x800F981C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9820:
    // 0x800F9820: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x800F9824: jal         0x800F93C4
    // 0x800F9828: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_800F93C4(rdram, ctx);
        goto after_53;
    // 0x800F9828: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_53:
    // 0x800F982C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800F9830: jal         0x800F82D4
    // 0x800F9834: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800F82D4(rdram, ctx);
        goto after_54;
    // 0x800F9834: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_54:
    // 0x800F9838: jal         0x800F9444
    // 0x800F983C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_800F9444(rdram, ctx);
        goto after_55;
    // 0x800F983C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_55:
    // 0x800F9840: b           L_800F99DC
    // 0x800F9844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F99DC;
    // 0x800F9844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9848:
    // 0x800F9848: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x800F984C: jal         0x800F9070
    // 0x800F9850: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800F9070(rdram, ctx);
        goto after_56;
    // 0x800F9850: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_56:
    // 0x800F9854: jal         0x800F8A5C
    // 0x800F9858: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800F8A5C(rdram, ctx);
        goto after_57;
    // 0x800F9858: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_57:
    // 0x800F985C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800F9860: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F9864: jal         0x800A7990
    // 0x800F9868: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800A7990(rdram, ctx);
        goto after_58;
    // 0x800F9868: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_58:
    // 0x800F986C: b           L_800F99DC
    // 0x800F9870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F99DC;
    // 0x800F9870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9874:
    // 0x800F9874: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x800F9878: jal         0x800F93C4
    // 0x800F987C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_800F93C4(rdram, ctx);
        goto after_59;
    // 0x800F987C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_59:
    // 0x800F9880: jal         0x800F6224
    // 0x800F9884: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_800F6224(rdram, ctx);
        goto after_60;
    // 0x800F9884: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_60:
    // 0x800F9888: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x800F988C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800F9890: jal         0x800F7E64
    // 0x800F9894: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_800F7E64(rdram, ctx);
        goto after_61;
    // 0x800F9894: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_61:
    // 0x800F9898: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x800F989C: jal         0x800F608C
    // 0x800F98A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800F608C(rdram, ctx);
        goto after_62;
    // 0x800F98A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_62:
    // 0x800F98A4: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x800F98A8: jal         0x800F9240
    // 0x800F98AC: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    func_800F9240(rdram, ctx);
        goto after_63;
    // 0x800F98AC: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_63:
    // 0x800F98B0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x800F98B4: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x800F98B8: jal         0x800F7CF4
    // 0x800F98BC: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    func_800F7CF4(rdram, ctx);
        goto after_64;
    // 0x800F98BC: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_64:
    // 0x800F98C0: jal         0x800F9400
    // 0x800F98C4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800F9400(rdram, ctx);
        goto after_65;
    // 0x800F98C4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_65:
    // 0x800F98C8: b           L_800F99DC
    // 0x800F98CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F99DC;
    // 0x800F98CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F98D0:
    // 0x800F98D0: jal         0x800878A0
    // 0x800F98D4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_66;
    // 0x800F98D4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_66:
    // 0x800F98D8: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x800F98DC: jal         0x800878A0
    // 0x800F98E0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_67;
    // 0x800F98E0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_67:
    // 0x800F98E4: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x800F98E8: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800F98EC: jal         0x800F5A00
    // 0x800F98F0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800F5A00(rdram, ctx);
        goto after_68;
    // 0x800F98F0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_68:
    // 0x800F98F4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x800F98F8: jal         0x800F5A00
    // 0x800F98FC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800F5A00(rdram, ctx);
        goto after_69;
    // 0x800F98FC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_69:
    // 0x800F9900: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x800F9904: jal         0x800EEB40
    // 0x800F9908: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800EEB40(rdram, ctx);
        goto after_70;
    // 0x800F9908: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_70:
    // 0x800F990C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800F9910: lwc1        $f4, 0x60D0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X60D0);
    // 0x800F9914: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800F9918: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800F991C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800F9920: nop

    // 0x800F9924: bc1f        L_800F993C
    if (!c1cs) {
        // 0x800F9928: nop
    
            goto L_800F993C;
    }
    // 0x800F9928: nop

    // 0x800F992C: jal         0x800EE7F8
    // 0x800F9930: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_800EE7F8(rdram, ctx);
        goto after_71;
    // 0x800F9930: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_71:
    // 0x800F9934: b           L_800F9948
    // 0x800F9938: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
        goto L_800F9948;
    // 0x800F9938: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
L_800F993C:
    // 0x800F993C: jal         0x800F9240
    // 0x800F9940: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    func_800F9240(rdram, ctx);
        goto after_72;
    // 0x800F9940: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    after_72:
    // 0x800F9944: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
L_800F9948:
    // 0x800F9948: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x800F994C: jal         0x800F7CF4
    // 0x800F9950: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_800F7CF4(rdram, ctx);
        goto after_73;
    // 0x800F9950: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_73:
    // 0x800F9954: jal         0x800F8128
    // 0x800F9958: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_800F8128(rdram, ctx);
        goto after_74;
    // 0x800F9958: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_74:
    // 0x800F995C: jal         0x800F8EBC
    // 0x800F9960: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_800F8EBC(rdram, ctx);
        goto after_75;
    // 0x800F9960: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_75:
    // 0x800F9964: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x800F9968: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F996C: jal         0x800F8268
    // 0x800F9970: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800F8268(rdram, ctx);
        goto after_76;
    // 0x800F9970: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_76:
    // 0x800F9974: b           L_800F99DC
    // 0x800F9978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F99DC;
    // 0x800F9978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F997C:
    // 0x800F997C: jal         0x800878A0
    // 0x800F9980: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_77;
    // 0x800F9980: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_77:
    // 0x800F9984: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x800F9988: jal         0x800878A0
    // 0x800F998C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_78;
    // 0x800F998C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_78:
    // 0x800F9990: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x800F9994: jal         0x800F759C
    // 0x800F9998: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_800F759C(rdram, ctx);
        goto after_79;
    // 0x800F9998: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_79:
    // 0x800F999C: jal         0x800D5234
    // 0x800F99A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800D5234(rdram, ctx);
        goto after_80;
    // 0x800F99A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_80:
    // 0x800F99A4: jal         0x800A16BC
    // 0x800F99A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800A16BC(rdram, ctx);
        goto after_81;
    // 0x800F99A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_81:
    // 0x800F99AC: jal         0x800F8128
    // 0x800F99B0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_800F8128(rdram, ctx);
        goto after_82;
    // 0x800F99B0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_82:
    // 0x800F99B4: jal         0x800F8EBC
    // 0x800F99B8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_800F8EBC(rdram, ctx);
        goto after_83;
    // 0x800F99B8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_83:
    // 0x800F99BC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x800F99C0: jal         0x800F7B9C
    // 0x800F99C4: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    func_800F7B9C(rdram, ctx);
        goto after_84;
    // 0x800F99C4: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_84:
    // 0x800F99C8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x800F99CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F99D0: jal         0x800F8268
    // 0x800F99D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800F8268(rdram, ctx);
        goto after_85;
    // 0x800F99D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_85:
L_800F99D8:
    // 0x800F99D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F99DC:
    // 0x800F99DC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x800F99E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F99E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F99E8: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800F99EC: lbu         $v0, 0x5520($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5520);
    // 0x800F99F0: xori        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 ^ 0X1;
    // 0x800F99F4: jr          $ra
    // 0x800F99F8: sltu        $v0, $zero, $t6
    ctx->r2 = 0 < ctx->r14 ? 1 : 0;
    return;
    // 0x800F99F8: sltu        $v0, $zero, $t6
    ctx->r2 = 0 < ctx->r14 ? 1 : 0;
;}
RECOMP_FUNC void func_800F99FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F99FC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800F9A00: lbu         $t6, 0x5520($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5520);
    // 0x800F9A04: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x800F9A08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800F9A0C: bne         $t6, $at, L_800F9A1C
    if (ctx->r14 != ctx->r1) {
            // 0x800F9A10: nop

    func_800F9A1C(rdram, ctx);
    return;
    }
    // 0x800F9A10: nop

    // 0x800F9A14: jr          $ra
    // 0x800F9A18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800F9A18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800F9A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9A1C: jr          $ra
    // 0x800F9A20: nop

    return;
    // 0x800F9A20: nop

;}
RECOMP_FUNC void func_800F9A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9A24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F9A28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F9A2C: jal         0x800F9488
    // 0x800F9A30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800F9488(rdram, ctx);
        goto after_0;
    // 0x800F9A30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800F9A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F9A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F9A3C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F9A44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9A44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F9A48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F9A4C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800F9A50: sb          $zero, 0x5520($at)
    MEM_B(0X5520, ctx->r1) = 0;
    // 0x800F9A54: jal         0x800F9488
    // 0x800F9A58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800F9488(rdram, ctx);
        goto after_0;
    // 0x800F9A58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800F9A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F9A60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F9A64: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F9A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9A6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F9A70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F9A74: jal         0x800878A8
    // 0x800F9A78: nop

    _plsu_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x800F9A78: nop

    after_0:
    // 0x800F9A7C: beq         $v0, $zero, L_800F9A94
    if (ctx->r2 == 0) {
        // 0x800F9A80: nop
    
            goto L_800F9A94;
    }
    // 0x800F9A80: nop

    // 0x800F9A84: jal         0x800F9488
    // 0x800F9A88: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800F9488(rdram, ctx);
        goto after_1;
    // 0x800F9A88: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x800F9A8C: b           L_800F9AA0
    // 0x800F9A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800F9AA0;
    // 0x800F9A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9A94:
    // 0x800F9A94: jal         0x800F9488
    // 0x800F9A98: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800F9488(rdram, ctx);
        goto after_2;
    // 0x800F9A98: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
    // 0x800F9A9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800F9AA0:
    // 0x800F9AA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F9AA4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F9AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9AAC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800F9AB0: addiu       $v0, $v0, 0x5520
    ctx->r2 = ADD32(ctx->r2, 0X5520);
    // 0x800F9AB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F9AB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F9ABC: sb          $a0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r4;
    // 0x800F9AC0: sb          $a1, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r5;
    // 0x800F9AC4: jal         0x800F9488
    // 0x800F9AC8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_800F9488(rdram, ctx);
        goto after_0;
    // 0x800F9AC8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_0:
    // 0x800F9ACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F9AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F9AD4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F9ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9ADC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F9AE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F9AE4: jal         0x800F9488
    // 0x800F9AE8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_800F9488(rdram, ctx);
        goto after_0;
    // 0x800F9AE8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x800F9AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F9AF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F9AF4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F9AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9AFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F9B00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F9B04: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x800F9B08: jal         0x800F93C4
    // 0x800F9B0C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800F93C4(rdram, ctx);
        goto after_0;
    // 0x800F9B0C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x800F9B10: jal         0x800F929C
    // 0x800F9B14: nop

    func_800F929C(rdram, ctx);
        goto after_1;
    // 0x800F9B14: nop

    after_1:
    // 0x800F9B18: jal         0x800878A0
    // 0x800F9B1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _plsu_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x800F9B1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x800F9B20: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800F9B24: jal         0x800F8128
    // 0x800F9B28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F8128(rdram, ctx);
        goto after_3;
    // 0x800F9B28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x800F9B2C: jal         0x800F8EBC
    // 0x800F9B30: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800F8EBC(rdram, ctx);
        goto after_4;
    // 0x800F9B30: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_4:
    // 0x800F9B34: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9B38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F9B3C: jal         0x800F8268
    // 0x800F9B40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800F8268(rdram, ctx);
        goto after_5;
    // 0x800F9B40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x800F9B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F9B48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F9B4C: jr          $ra
    return;
;}
RECOMP_FUNC void func_800F9B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9B54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F9B58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F9B5C: jal         0x800F54E4
    // 0x800F9B60: nop

    func_800F54E4(rdram, ctx);
        goto after_0;
    // 0x800F9B60: nop

    after_0:
    // 0x800F9B64: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800F9B68: jal         0x800878A0
    // 0x800F9B6C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    _plsu_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x800F9B6C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_1:
    // 0x800F9B70: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800F9B74: jal         0x800F8128
    // 0x800F9B78: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800F8128(rdram, ctx);
        goto after_2;
    // 0x800F9B78: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x800F9B7C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9B80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F9B84: jal         0x800F8268
    // 0x800F9B88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800F8268(rdram, ctx);
        goto after_3;
    // 0x800F9B88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x800F9B8C: jal         0x800F82C0
    // 0x800F9B90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800F82C0(rdram, ctx);
        goto after_4;
    // 0x800F9B90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
    // 0x800F9B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F9B98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F9B9C: jr          $ra
    return;
;}
