#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void _scinfobar_entrypoint_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A638: syscall     845
    recomp_syscall_handler(rdram, ctx, 0x8008A638);
    return;
    // 0x8008A63C: addi        $t0, $zero, 0x5C
    ctx->r8 = ADD32(0, 0X5C);
;}
RECOMP_FUNC void _scinfobar_entrypoint_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A640: syscall     845
    recomp_syscall_handler(rdram, ctx, 0x8008A640);
    return;
    // 0x8008A644: addi        $t0, $zero, 0x60
    ctx->r8 = ADD32(0, 0X60);
;}
RECOMP_FUNC void _sccustom_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A648: syscall     846
    recomp_syscall_handler(rdram, ctx, 0x8008A648);
    return;
    // 0x8008A64C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _sccustom_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A650: syscall     846
    recomp_syscall_handler(rdram, ctx, 0x8008A650);
    return;
    // 0x8008A654: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _sccustom_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A658: syscall     846
    recomp_syscall_handler(rdram, ctx, 0x8008A658);
    return;
    // 0x8008A65C: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _sccustom_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A660: syscall     846
    recomp_syscall_handler(rdram, ctx, 0x8008A660);
    return;
    // 0x8008A664: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _sccustom_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A668: syscall     846
    recomp_syscall_handler(rdram, ctx, 0x8008A668);
    return;
    // 0x8008A66C: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _sccustom_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A670: syscall     846
    recomp_syscall_handler(rdram, ctx, 0x8008A670);
    return;
    // 0x8008A674: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _sccustom_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A678: syscall     846
    recomp_syscall_handler(rdram, ctx, 0x8008A678);
    return;
    // 0x8008A67C: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _sccustom_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A680: syscall     846
    recomp_syscall_handler(rdram, ctx, 0x8008A680);
    return;
    // 0x8008A684: addi        $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void _seqdat_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A688: syscall     847
    recomp_syscall_handler(rdram, ctx, 0x8008A688);
    return;
    // 0x8008A68C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _suinv_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A690: syscall     848
    recomp_syscall_handler(rdram, ctx, 0x8008A690);
    return;
    // 0x8008A694: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _sujiggy_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A698: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A698);
    return;
    // 0x8008A69C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _sujiggy_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A6A0: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A6A0);
    return;
    // 0x8008A6A4: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _sujiggy_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A6A8: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A6A8);
    return;
    // 0x8008A6AC: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _sujiggy_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A6B0: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A6B0);
    return;
    // 0x8008A6B4: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _sujiggy_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A6B8: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A6B8);
    return;
    // 0x8008A6BC: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _sujiggy_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A6C0: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A6C0);
    return;
    // 0x8008A6C4: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _sujiggy_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A6C8: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A6C8);
    return;
    // 0x8008A6CC: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _sujiggy_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A6D0: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A6D0);
    return;
    // 0x8008A6D4: addi        $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void _sujiggy_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A6D8: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A6D8);
    return;
    // 0x8008A6DC: addi        $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
;}
RECOMP_FUNC void _sujiggy_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A6E0: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A6E0);
    return;
    // 0x8008A6E4: addi        $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
;}
RECOMP_FUNC void _sujiggy_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A6E8: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A6E8);
    return;
    // 0x8008A6EC: addi        $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
;}
RECOMP_FUNC void _sujiggy_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A6F0: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A6F0);
    return;
    // 0x8008A6F4: addi        $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
;}
RECOMP_FUNC void _sujiggy_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A6F8: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A6F8);
    return;
    // 0x8008A6FC: addi        $t0, $zero, 0x30
    ctx->r8 = ADD32(0, 0X30);
;}
RECOMP_FUNC void _sujiggy_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A700: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A700);
    return;
    // 0x8008A704: addi        $t0, $zero, 0x34
    ctx->r8 = ADD32(0, 0X34);
;}
RECOMP_FUNC void _sujiggy_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A708: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A708);
    return;
    // 0x8008A70C: addi        $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
;}
RECOMP_FUNC void _sujiggy_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A710: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A710);
    return;
    // 0x8008A714: addi        $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
;}
RECOMP_FUNC void _sujiggy_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A718: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A718);
    return;
    // 0x8008A71C: addi        $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
;}
RECOMP_FUNC void _sujiggy_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A720: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A720);
    return;
    // 0x8008A724: addi        $t0, $zero, 0x44
    ctx->r8 = ADD32(0, 0X44);
;}
RECOMP_FUNC void _sujiggy_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A728: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A728);
    return;
    // 0x8008A72C: addi        $t0, $zero, 0x48
    ctx->r8 = ADD32(0, 0X48);
;}
RECOMP_FUNC void _sujiggy_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A730: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A730);
    return;
    // 0x8008A734: addi        $t0, $zero, 0x4C
    ctx->r8 = ADD32(0, 0X4C);
;}
RECOMP_FUNC void _sujiggy_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A738: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A738);
    return;
    // 0x8008A73C: addi        $t0, $zero, 0x50
    ctx->r8 = ADD32(0, 0X50);
;}
RECOMP_FUNC void _sujiggy_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A740: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A740);
    return;
    // 0x8008A744: addi        $t0, $zero, 0x54
    ctx->r8 = ADD32(0, 0X54);
;}
RECOMP_FUNC void _sujiggy_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A748: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A748);
    return;
    // 0x8008A74C: addi        $t0, $zero, 0x58
    ctx->r8 = ADD32(0, 0X58);
;}
RECOMP_FUNC void _sujiggy_entrypoint_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A750: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A750);
    return;
    // 0x8008A754: addi        $t0, $zero, 0x5C
    ctx->r8 = ADD32(0, 0X5C);
;}
RECOMP_FUNC void _sujiggy_entrypoint_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A758: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A758);
    return;
    // 0x8008A75C: addi        $t0, $zero, 0x60
    ctx->r8 = ADD32(0, 0X60);
;}
RECOMP_FUNC void _sujiggy_entrypoint_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A760: syscall     849
    recomp_syscall_handler(rdram, ctx, 0x8008A760);
    return;
    // 0x8008A764: addi        $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
;}
RECOMP_FUNC void _sumissilehome_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A768: syscall     850
    recomp_syscall_handler(rdram, ctx, 0x8008A768);
    return;
    // 0x8008A76C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _sumissilehome_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A770: syscall     850
    recomp_syscall_handler(rdram, ctx, 0x8008A770);
    return;
    // 0x8008A774: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _sumissilehome_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A778: syscall     850
    recomp_syscall_handler(rdram, ctx, 0x8008A778);
    return;
    // 0x8008A77C: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _sumissilehome_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A780: syscall     850
    recomp_syscall_handler(rdram, ctx, 0x8008A780);
    return;
    // 0x8008A784: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _sumissilehome_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A788: syscall     850
    recomp_syscall_handler(rdram, ctx, 0x8008A788);
    return;
    // 0x8008A78C: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _sumissilehome_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A790: syscall     850
    recomp_syscall_handler(rdram, ctx, 0x8008A790);
    return;
    // 0x8008A794: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _sumissilehome_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A798: syscall     850
    recomp_syscall_handler(rdram, ctx, 0x8008A798);
    return;
    // 0x8008A79C: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _surestart_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A7A0: syscall     851
    recomp_syscall_handler(rdram, ctx, 0x8008A7A0);
    return;
    // 0x8008A7A4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _subaddiezone_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A7A8: syscall     852
    recomp_syscall_handler(rdram, ctx, 0x8008A7A8);
    return;
    // 0x8008A7AC: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _subaddiezone_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A7B0: syscall     852
    recomp_syscall_handler(rdram, ctx, 0x8008A7B0);
    return;
    // 0x8008A7B4: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _suquiz_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A7B8: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A7B8);
    return;
    // 0x8008A7BC: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _suquiz_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A7C0: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A7C0);
    return;
    // 0x8008A7C4: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _suquiz_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A7C8: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A7C8);
    return;
    // 0x8008A7CC: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _suquiz_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A7D0: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A7D0);
    return;
    // 0x8008A7D4: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _suquiz_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A7D8: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A7D8);
    return;
    // 0x8008A7DC: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _suquiz_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A7E0: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A7E0);
    return;
    // 0x8008A7E4: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _suquiz_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A7E8: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A7E8);
    return;
    // 0x8008A7EC: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _suquiz_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A7F0: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A7F0);
    return;
    // 0x8008A7F4: addi        $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void _suquiz_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A7F8: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A7F8);
    return;
    // 0x8008A7FC: addi        $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
;}
RECOMP_FUNC void _suquiz_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A800: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A800);
    return;
    // 0x8008A804: addi        $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
;}
RECOMP_FUNC void _suquiz_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A808: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A808);
    return;
    // 0x8008A80C: addi        $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
;}
RECOMP_FUNC void _suquiz_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A810: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A810);
    return;
    // 0x8008A814: addi        $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
;}
RECOMP_FUNC void _suquiz_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A818: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A818);
    return;
    // 0x8008A81C: addi        $t0, $zero, 0x30
    ctx->r8 = ADD32(0, 0X30);
;}
RECOMP_FUNC void _suquiz_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A820: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A820);
    return;
    // 0x8008A824: addi        $t0, $zero, 0x34
    ctx->r8 = ADD32(0, 0X34);
;}
RECOMP_FUNC void _suquiz_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A828: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A828);
    return;
    // 0x8008A82C: addi        $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
;}
RECOMP_FUNC void _suquiz_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A830: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A830);
    return;
    // 0x8008A834: addi        $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
;}
RECOMP_FUNC void _suquiz_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A838: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A838);
    return;
    // 0x8008A83C: addi        $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
;}
RECOMP_FUNC void _suquiz_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A840: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A840);
    return;
    // 0x8008A844: addi        $t0, $zero, 0x44
    ctx->r8 = ADD32(0, 0X44);
;}
RECOMP_FUNC void _suquiz_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A848: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A848);
    return;
    // 0x8008A84C: addi        $t0, $zero, 0x48
    ctx->r8 = ADD32(0, 0X48);
;}
RECOMP_FUNC void _suquiz_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A850: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A850);
    return;
    // 0x8008A854: addi        $t0, $zero, 0x4C
    ctx->r8 = ADD32(0, 0X4C);
;}
RECOMP_FUNC void _suquiz_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A858: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A858);
    return;
    // 0x8008A85C: addi        $t0, $zero, 0x50
    ctx->r8 = ADD32(0, 0X50);
;}
RECOMP_FUNC void _suquiz_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A860: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A860);
    return;
    // 0x8008A864: addi        $t0, $zero, 0x54
    ctx->r8 = ADD32(0, 0X54);
;}
RECOMP_FUNC void _suquiz_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A868: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A868);
    return;
    // 0x8008A86C: addi        $t0, $zero, 0x58
    ctx->r8 = ADD32(0, 0X58);
;}
RECOMP_FUNC void _suquiz_entrypoint_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A870: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A870);
    return;
    // 0x8008A874: addi        $t0, $zero, 0x5C
    ctx->r8 = ADD32(0, 0X5C);
;}
RECOMP_FUNC void _suquiz_entrypoint_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A878: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A878);
    return;
    // 0x8008A87C: addi        $t0, $zero, 0x60
    ctx->r8 = ADD32(0, 0X60);
;}
RECOMP_FUNC void _suquiz_entrypoint_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A880: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A880);
    return;
    // 0x8008A884: addi        $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
;}
RECOMP_FUNC void _suquiz_entrypoint_26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A888: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A888);
    return;
    // 0x8008A88C: addi        $t0, $zero, 0x68
    ctx->r8 = ADD32(0, 0X68);
;}
RECOMP_FUNC void _suquiz_entrypoint_27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A890: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A890);
    return;
    // 0x8008A894: addi        $t0, $zero, 0x6C
    ctx->r8 = ADD32(0, 0X6C);
;}
RECOMP_FUNC void _suquiz_entrypoint_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A898: syscall     853
    recomp_syscall_handler(rdram, ctx, 0x8008A898);
    return;
    // 0x8008A89C: addi        $t0, $zero, 0x70
    ctx->r8 = ADD32(0, 0X70);
;}
RECOMP_FUNC void _sulights_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A8A0: syscall     854
    recomp_syscall_handler(rdram, ctx, 0x8008A8A0);
    return;
    // 0x8008A8A4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _sulights_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A8A8: syscall     854
    recomp_syscall_handler(rdram, ctx, 0x8008A8A8);
    return;
    // 0x8008A8AC: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _sulights_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A8B0: syscall     854
    recomp_syscall_handler(rdram, ctx, 0x8008A8B0);
    return;
    // 0x8008A8B4: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _sulights_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A8B8: syscall     854
    recomp_syscall_handler(rdram, ctx, 0x8008A8B8);
    return;
    // 0x8008A8BC: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _sulights_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A8C0: syscall     854
    recomp_syscall_handler(rdram, ctx, 0x8008A8C0);
    return;
    // 0x8008A8C4: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _sulights_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A8C8: syscall     854
    recomp_syscall_handler(rdram, ctx, 0x8008A8C8);
    return;
    // 0x8008A8CC: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _sulights_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A8D0: syscall     854
    recomp_syscall_handler(rdram, ctx, 0x8008A8D0);
    return;
    // 0x8008A8D4: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _sulights_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A8D8: syscall     854
    recomp_syscall_handler(rdram, ctx, 0x8008A8D8);
    return;
    // 0x8008A8DC: addi        $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void _sulights_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A8E0: syscall     854
    recomp_syscall_handler(rdram, ctx, 0x8008A8E0);
    return;
    // 0x8008A8E4: addi        $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
;}
RECOMP_FUNC void _sulights_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A8E8: syscall     854
    recomp_syscall_handler(rdram, ctx, 0x8008A8E8);
    return;
    // 0x8008A8EC: addi        $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
;}
RECOMP_FUNC void _sufade_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A8F0: syscall     855
    recomp_syscall_handler(rdram, ctx, 0x8008A8F0);
    return;
    // 0x8008A8F4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _sufade_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A8F8: syscall     855
    recomp_syscall_handler(rdram, ctx, 0x8008A8F8);
    return;
    // 0x8008A8FC: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _sufade_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A900: syscall     855
    recomp_syscall_handler(rdram, ctx, 0x8008A900);
    return;
    // 0x8008A904: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _sccustom_big_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A908: syscall     856
    recomp_syscall_handler(rdram, ctx, 0x8008A908);
    return;
    // 0x8008A90C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _sccustom_big_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A910: syscall     856
    recomp_syscall_handler(rdram, ctx, 0x8008A910);
    return;
    // 0x8008A914: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _sccustom_big_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A918: syscall     856
    recomp_syscall_handler(rdram, ctx, 0x8008A918);
    return;
    // 0x8008A91C: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _sccustom_big_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A920: syscall     856
    recomp_syscall_handler(rdram, ctx, 0x8008A920);
    return;
    // 0x8008A924: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _sccustom_banjo_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A928: syscall     857
    recomp_syscall_handler(rdram, ctx, 0x8008A928);
    return;
    // 0x8008A92C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _sccustom_banjo_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A930: syscall     857
    recomp_syscall_handler(rdram, ctx, 0x8008A930);
    return;
    // 0x8008A934: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _sccustom_banjo_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A938: syscall     857
    recomp_syscall_handler(rdram, ctx, 0x8008A938);
    return;
    // 0x8008A93C: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _sccustom_banjo_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A940: syscall     857
    recomp_syscall_handler(rdram, ctx, 0x8008A940);
    return;
    // 0x8008A944: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _gztrace_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A948: syscall     878
    recomp_syscall_handler(rdram, ctx, 0x8008A948);
    return;
    // 0x8008A94C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _gztrace_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A950: syscall     878
    recomp_syscall_handler(rdram, ctx, 0x8008A950);
    return;
    // 0x8008A954: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _gzreg_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A958: syscall     880
    recomp_syscall_handler(rdram, ctx, 0x8008A958);
    return;
    // 0x8008A95C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _gzreg_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A960: syscall     880
    recomp_syscall_handler(rdram, ctx, 0x8008A960);
    return;
    // 0x8008A964: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _gzreg_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A968: syscall     880
    recomp_syscall_handler(rdram, ctx, 0x8008A968);
    return;
    // 0x8008A96C: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _gzthread_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A970: syscall     881
    recomp_syscall_handler(rdram, ctx, 0x8008A970);
    return;
    // 0x8008A974: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _gzthread_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A978: syscall     881
    recomp_syscall_handler(rdram, ctx, 0x8008A978);
    return;
    // 0x8008A97C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _gzpublic_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A980: syscall     882
    recomp_syscall_handler(rdram, ctx, 0x8008A980);
    return;
    // 0x8008A984: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void overlay_syscalls_end(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A988: syscall     885
    recomp_syscall_handler(rdram, ctx, 0x8008A988);
    return;
    // 0x8008A98C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void func_8008A990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008A994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008A998: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8008A99C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008A9A0: sll         $t6, $v0, 27
    ctx->r14 = S32(ctx->r2 << 27);
    // 0x8008A9A4: srl         $t7, $t6, 30
    ctx->r15 = S32(U32(ctx->r14) >> 30);
    // 0x8008A9A8: beq         $t7, $zero, L_8008A9C8
    if (ctx->r15 == 0) {
        // 0x8008A9AC: nop
    
            goto L_8008A9C8;
    }
    // 0x8008A9AC: nop

    // 0x8008A9B0: beq         $t7, $at, L_8008A9D8
    if (ctx->r15 == ctx->r1) {
        // 0x8008A9B4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8008A9D8;
    }
    // 0x8008A9B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8008A9B8: beq         $t7, $at, L_8008A9E4
    if (ctx->r15 == ctx->r1) {
        // 0x8008A9BC: nop
    
            goto L_8008A9E4;
    }
    // 0x8008A9BC: nop

    // 0x8008A9C0: b           L_8008A9F4
    // 0x8008A9C4: nop

        goto L_8008A9F4;
    // 0x8008A9C4: nop

L_8008A9C8:
    // 0x8008A9C8: jal         0x800D8FF8
    // 0x8008A9CC: nop

    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x8008A9CC: nop

    after_0:
    // 0x8008A9D0: b           L_8008AA00
    // 0x8008A9D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008AA00;
    // 0x8008A9D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008A9D8:
    // 0x8008A9D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008A9DC: b           L_8008A9FC
    // 0x8008A9E0: lwc1        $f0, 0x4A90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4A90);
        goto L_8008A9FC;
    // 0x8008A9E0: lwc1        $f0, 0x4A90($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4A90);
L_8008A9E4:
    // 0x8008A9E4: jal         0x800885F8
    // 0x8008A9E8: nop

    _glintrosyncDll_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x8008A9E8: nop

    after_1:
    // 0x8008A9EC: b           L_8008AA00
    // 0x8008A9F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008AA00;
    // 0x8008A9F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008A9F4:
    // 0x8008A9F4: jal         0x800D8FF8
    // 0x8008A9F8: nop

    func_800D8FF8(rdram, ctx);
        goto after_2;
    // 0x8008A9F8: nop

    after_2:
L_8008A9FC:
    // 0x8008A9FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008AA00:
    // 0x8008AA00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008AA04: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008AA0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008AA0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008AA10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008AA14: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x8008AA18: sll         $t8, $t6, 25
    ctx->r24 = S32(ctx->r14 << 25);
    // 0x8008AA1C: bgezl       $t8, L_8008AAB4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8008AA20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008AAB4;
    }
    goto skip_0;
    // 0x8008AA20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8008AA24: jal         0x8008AEDC
    // 0x8008AA28: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8008AEDC(rdram, ctx);
        goto after_0;
    // 0x8008AA28: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008AA2C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8008AA30: jal         0x8008C0D0
    // 0x8008AA34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008C0D0(rdram, ctx);
        goto after_1;
    // 0x8008AA34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008AA38: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8008AA3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008AA40: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8008AA44: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8008AA48: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8008AA4C: nop

    // 0x8008AA50: bc1fl       L_8008AAB4
    if (!c1cs) {
        // 0x8008AA54: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008AAB4;
    }
    goto skip_1;
    // 0x8008AA54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8008AA58: jal         0x8008A990
    // 0x8008AA5C: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    func_8008A990(rdram, ctx);
        goto after_2;
    // 0x8008AA5C: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x8008AA60: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8008AA64: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8008AA68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8008AA6C: lwc1        $f6, 0x10($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X10);
    // 0x8008AA70: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8008AA74: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8008AA78: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8008AA7C: add.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x8008AA80: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x8008AA84: nop

    // 0x8008AA88: bc1fl       L_8008AAA8
    if (!c1cs) {
        // 0x8008AA8C: mfc1        $a1, $f2
        ctx->r5 = (int32_t)ctx->f2.u32l;
            goto L_8008AAA8;
    }
    goto skip_2;
    // 0x8008AA8C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    skip_2:
    // 0x8008AA90: jal         0x8008C1F0
    // 0x8008AA94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008C1F0(rdram, ctx);
        goto after_3;
    // 0x8008AA94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8008AA98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8008AA9C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8008AAA0: nop

    // 0x8008AAA4: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
L_8008AAA8:
    // 0x8008AAA8: jal         0x8008C1E4
    // 0x8008AAAC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8008C1E4(rdram, ctx);
        goto after_4;
    // 0x8008AAAC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_4:
    // 0x8008AAB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008AAB4:
    // 0x8008AAB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008AAB8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008AAC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008AAC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008AAC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008AAC8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008AACC: jal         0x8008AEDC
    // 0x8008AAD0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008AEDC(rdram, ctx);
        goto after_0;
    // 0x8008AAD0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8008AAD4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8008AAD8: jal         0x8008AA0C
    // 0x8008AADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AA0C(rdram, ctx);
        goto after_1;
    // 0x8008AADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8008AAE0: jal         0x8008C0C8
    // 0x8008AAE4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008C0C8(rdram, ctx);
        goto after_2;
    // 0x8008AAE4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x8008AAE8: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x8008AAEC: jal         0x8008A990
    // 0x8008AAF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008A990(rdram, ctx);
        goto after_3;
    // 0x8008AAF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8008AAF4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8008AAF8: jal         0x8008B2AC
    // 0x8008AAFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B2AC(rdram, ctx);
        goto after_4;
    // 0x8008AAFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8008AB00: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8008AB04: lb          $t7, 0x1B($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X1B);
    // 0x8008AB08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8008AB0C: div.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8008AB10: bltz        $t7, L_8008AB1C
    if (SIGNED(ctx->r15) < 0) {
        // 0x8008AB14: mov.s       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
            goto L_8008AB1C;
    }
    // 0x8008AB14: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x8008AB18: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
L_8008AB1C:
    // 0x8008AB1C: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8008AB20: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8008AB24: add.s       $f0, $f6, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x8008AB28: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8008AB2C: nop

    // 0x8008AB30: bc1fl       L_8008AB48
    if (!c1cs) {
        // 0x8008AB34: trunc.w.s   $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_8008AB48;
    }
    goto skip_0;
    // 0x8008AB34: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_0:
    // 0x8008AB38: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8008AB3C: nop

    // 0x8008AB40: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x8008AB44: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
L_8008AB48:
    // 0x8008AB48: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8008AB4C: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8008AB50: nop

    // 0x8008AB54: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8008AB58: nop

    // 0x8008AB5C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8008AB60: sub.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8008AB64: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8008AB68: jal         0x8008C1C0
    // 0x8008AB6C: nop

    func_8008C1C0(rdram, ctx);
        goto after_5;
    // 0x8008AB6C: nop

    after_5:
    // 0x8008AB70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008AB74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008AB78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8008AB7C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008AB84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008AB84: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8008AB88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008AB8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008AB90: jal         0x8008AEDC
    // 0x8008AB94: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008AEDC(rdram, ctx);
        goto after_0;
    // 0x8008AB94: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8008AB98: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8008AB9C: jal         0x8008AA0C
    // 0x8008ABA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AA0C(rdram, ctx);
        goto after_1;
    // 0x8008ABA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8008ABA4: jal         0x8008C0C8
    // 0x8008ABA8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008C0C8(rdram, ctx);
        goto after_2;
    // 0x8008ABA8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_2:
    // 0x8008ABAC: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x8008ABB0: jal         0x8008A990
    // 0x8008ABB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008A990(rdram, ctx);
        goto after_3;
    // 0x8008ABB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8008ABB8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8008ABBC: jal         0x8008B2AC
    // 0x8008ABC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B2AC(rdram, ctx);
        goto after_4;
    // 0x8008ABC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8008ABC4: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8008ABC8: lb          $t7, 0x1B($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X1B);
    // 0x8008ABCC: div.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8008ABD0: bltz        $t7, L_8008ABDC
    if (SIGNED(ctx->r15) < 0) {
        // 0x8008ABD4: mov.s       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
            goto L_8008ABDC;
    }
    // 0x8008ABD4: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x8008ABD8: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
L_8008ABDC:
    // 0x8008ABDC: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8008ABE0: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8008ABE4: add.s       $f14, $f6, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x8008ABE8: c.le.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl <= ctx->f14.fl;
    // 0x8008ABEC: nop

    // 0x8008ABF0: bc1fl       L_8008AC30
    if (!c1cs) {
        // 0x8008ABF4: mfc1        $a1, $f14
        ctx->r5 = (int32_t)ctx->f14.u32l;
            goto L_8008AC30;
    }
    goto skip_0;
    // 0x8008ABF4: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    skip_0:
    // 0x8008ABF8: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8008ABFC: sub.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x8008AC00: sub.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x8008AC04: div.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8008AC08: trunc.w.s   $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    ctx->f10.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x8008AC0C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8008AC10: nop

    // 0x8008AC14: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8008AC18: nop

    // 0x8008AC1C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8008AC20: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x8008AC24: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8008AC28: add.s       $f14, $f0, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x8008AC2C: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
L_8008AC30:
    // 0x8008AC30: jal         0x8008C1C0
    // 0x8008AC34: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008C1C0(rdram, ctx);
        goto after_5;
    // 0x8008AC34: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_5:
    // 0x8008AC38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008AC3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008AC40: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8008AC44: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008AC4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008AC4C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008AC50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008AC54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008AC58: jal         0x8008AEDC
    // 0x8008AC5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008AEDC(rdram, ctx);
        goto after_0;
    // 0x8008AC5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8008AC60: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8008AC64: jal         0x8008AA0C
    // 0x8008AC68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AA0C(rdram, ctx);
        goto after_1;
    // 0x8008AC68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8008AC6C: jal         0x8008C0C8
    // 0x8008AC70: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008C0C8(rdram, ctx);
        goto after_2;
    // 0x8008AC70: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x8008AC74: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x8008AC78: jal         0x8008A990
    // 0x8008AC7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008A990(rdram, ctx);
        goto after_3;
    // 0x8008AC7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8008AC80: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8008AC84: jal         0x8008B2AC
    // 0x8008AC88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B2AC(rdram, ctx);
        goto after_4;
    // 0x8008AC88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8008AC8C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8008AC90: lb          $t7, 0x1B($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X1B);
    // 0x8008AC94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008AC98: div.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8008AC9C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8008ACA0: bltz        $t7, L_8008ACAC
    if (SIGNED(ctx->r15) < 0) {
        // 0x8008ACA4: mov.s       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
            goto L_8008ACAC;
    }
    // 0x8008ACA4: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x8008ACA8: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
L_8008ACAC:
    // 0x8008ACAC: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8008ACB0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8008ACB4: add.s       $f0, $f6, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x8008ACB8: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8008ACBC: nop

    // 0x8008ACC0: bc1fl       L_8008ACDC
    if (!c1cs) {
        // 0x8008ACC4: lwc1        $f2, 0x8($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
            goto L_8008ACDC;
    }
    goto skip_0;
    // 0x8008ACC4: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    skip_0:
    // 0x8008ACC8: jal         0x8008B134
    // 0x8008ACCC: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x8008ACCC: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_5:
    // 0x8008ACD0: b           L_8008AD60
    // 0x8008ACD4: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
        goto L_8008AD60;
    // 0x8008ACD4: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8008ACD8: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
L_8008ACDC:
    // 0x8008ACDC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008ACE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008ACE4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8008ACE8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8008ACEC: bc1tl       L_8008AD0C
    if (c1cs) {
        // 0x8008ACF0: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_8008AD0C;
    }
    goto skip_1;
    // 0x8008ACF0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_1:
    // 0x8008ACF4: lwc1        $f12, 0x4A94($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4A94);
    // 0x8008ACF8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8008ACFC: nop

    // 0x8008AD00: bc1fl       L_8008AD48
    if (!c1cs) {
        // 0x8008AD04: trunc.w.s   $f8, $f0
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_8008AD48;
    }
    goto skip_2;
    // 0x8008AD04: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_2:
    // 0x8008AD08: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_8008AD0C:
    // 0x8008AD0C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008AD10: lwc1        $f12, 0x4A98($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4A98);
    // 0x8008AD14: bc1fl       L_8008AD24
    if (!c1cs) {
        // 0x8008AD18: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_8008AD24;
    }
    goto skip_3;
    // 0x8008AD18: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_3:
    // 0x8008AD1C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x8008AD20: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_8008AD24:
    // 0x8008AD24: nop

    // 0x8008AD28: bc1f        L_8008AD34
    if (!c1cs) {
        // 0x8008AD2C: nop
    
            goto L_8008AD34;
    }
    // 0x8008AD2C: nop

    // 0x8008AD30: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8008AD34:
    // 0x8008AD34: jal         0x8008B134
    // 0x8008AD38: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_8008B134(rdram, ctx);
        goto after_6;
    // 0x8008AD38: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x8008AD3C: b           L_8008AD60
    // 0x8008AD40: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
        goto L_8008AD60;
    // 0x8008AD40: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8008AD44: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
L_8008AD48:
    // 0x8008AD48: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x8008AD4C: nop

    // 0x8008AD50: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8008AD54: nop

    // 0x8008AD58: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8008AD5C: sub.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f16.fl;
L_8008AD60:
    // 0x8008AD60: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8008AD64: jal         0x8008C1C0
    // 0x8008AD68: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008C1C0(rdram, ctx);
        goto after_7;
    // 0x8008AD68: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_7:
    // 0x8008AD6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008AD70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008AD74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8008AD78: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008AD80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008AD80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008AD84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008AD88: jal         0x8008C0B8
    // 0x8008AD8C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8008C0B8(rdram, ctx);
        goto after_0;
    // 0x8008AD8C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008AD90: jal         0x8001ACCC
    // 0x8008AD94: addiu       $a0, $v0, 0x1C
    ctx->r4 = ADD32(ctx->r2, 0X1C);
    func_8001ACCC(rdram, ctx);
        goto after_1;
    // 0x8008AD94: addiu       $a0, $v0, 0x1C
    ctx->r4 = ADD32(ctx->r2, 0X1C);
    after_1:
    // 0x8008AD98: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8008AD9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008ADA0: jal         0x8008B518
    // 0x8008ADA4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_8008B518(rdram, ctx);
        goto after_2;
    // 0x8008ADA4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x8008ADA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008ADAC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8008ADB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008ADB4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008ADBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008ADBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008ADC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008ADC4: jal         0x8008B5E8
    // 0x8008ADC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008B5E8(rdram, ctx);
        goto after_0;
    // 0x8008ADC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008ADCC: jal         0x8001B084
    // 0x8008ADD0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8001B084(rdram, ctx);
        goto after_1;
    // 0x8008ADD0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008ADD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008ADD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008ADDC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008ADE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008ADE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008ADE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008ADEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008ADF0: lbu         $t6, 0x1A($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1A);
    // 0x8008ADF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008ADF8: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x8008ADFC: beq         $at, $zero, L_8008AEA0
    if (ctx->r1 == 0) {
        // 0x8008AE00: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8008AEA0;
    }
    // 0x8008AE00: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008AE04: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008AE08: addu        $at, $at, $t6
    gpr jr_addend_8008AE10 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8008AE0C: lw          $t6, 0x4A9C($at)
    ctx->r14 = ADD32(ctx->r1, 0X4A9C);
    // 0x8008AE10: jr          $t6
    // 0x8008AE14: nop

    switch (jr_addend_8008AE10 >> 2) {
        case 0: goto L_8008AEA0; break;
        case 1: goto L_8008AE18; break;
        case 2: goto L_8008AE3C; break;
        case 3: goto L_8008AE84; break;
        case 4: goto L_8008AE60; break;
        default: switch_error(__func__, 0x8008AE10, 0x80124A9C);
    }
    // 0x8008AE14: nop

L_8008AE18:
    // 0x8008AE18: jal         0x8008AC4C
    // 0x8008AE1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AC4C(rdram, ctx);
        goto after_0;
    // 0x8008AE1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8008AE20: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x8008AE24: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8008AE28: sll         $t7, $a1, 29
    ctx->r15 = S32(ctx->r5 << 29);
    // 0x8008AE2C: jal         0x8008C1CC
    // 0x8008AE30: srl         $a1, $t7, 31
    ctx->r5 = S32(U32(ctx->r15) >> 31);
    func_8008C1CC(rdram, ctx);
        goto after_1;
    // 0x8008AE30: srl         $a1, $t7, 31
    ctx->r5 = S32(U32(ctx->r15) >> 31);
    after_1:
    // 0x8008AE34: b           L_8008AEA4
    // 0x8008AE38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8008AEA4;
    // 0x8008AE38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8008AE3C:
    // 0x8008AE3C: jal         0x8008AAC0
    // 0x8008AE40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AAC0(rdram, ctx);
        goto after_2;
    // 0x8008AE40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8008AE44: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x8008AE48: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8008AE4C: sll         $t9, $a1, 29
    ctx->r25 = S32(ctx->r5 << 29);
    // 0x8008AE50: jal         0x8008C1CC
    // 0x8008AE54: srl         $a1, $t9, 31
    ctx->r5 = S32(U32(ctx->r25) >> 31);
    func_8008C1CC(rdram, ctx);
        goto after_3;
    // 0x8008AE54: srl         $a1, $t9, 31
    ctx->r5 = S32(U32(ctx->r25) >> 31);
    after_3:
    // 0x8008AE58: b           L_8008AEA4
    // 0x8008AE5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8008AEA4;
    // 0x8008AE5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8008AE60:
    // 0x8008AE60: jal         0x8008AB84
    // 0x8008AE64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AB84(rdram, ctx);
        goto after_4;
    // 0x8008AE64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8008AE68: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x8008AE6C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8008AE70: sll         $t1, $a1, 29
    ctx->r9 = S32(ctx->r5 << 29);
    // 0x8008AE74: jal         0x8008C1CC
    // 0x8008AE78: srl         $a1, $t1, 31
    ctx->r5 = S32(U32(ctx->r9) >> 31);
    func_8008C1CC(rdram, ctx);
        goto after_5;
    // 0x8008AE78: srl         $a1, $t1, 31
    ctx->r5 = S32(U32(ctx->r9) >> 31);
    after_5:
    // 0x8008AE7C: b           L_8008AEA4
    // 0x8008AE80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8008AEA4;
    // 0x8008AE80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8008AE84:
    // 0x8008AE84: jal         0x8008AA0C
    // 0x8008AE88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AA0C(rdram, ctx);
        goto after_6;
    // 0x8008AE88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8008AE8C: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x8008AE90: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8008AE94: sll         $t3, $a1, 29
    ctx->r11 = S32(ctx->r5 << 29);
    // 0x8008AE98: jal         0x8008C1CC
    // 0x8008AE9C: srl         $a1, $t3, 31
    ctx->r5 = S32(U32(ctx->r11) >> 31);
    func_8008C1CC(rdram, ctx);
        goto after_7;
    // 0x8008AE9C: srl         $a1, $t3, 31
    ctx->r5 = S32(U32(ctx->r11) >> 31);
    after_7:
L_8008AEA0:
    // 0x8008AEA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8008AEA4:
    // 0x8008AEA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008AEA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008AEAC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008AEB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008AEB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008AEB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008AEBC: jal         0x8001BAFC
    // 0x8008AEC0: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x8008AEC0: nop

    after_0:
    // 0x8008AEC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008AEC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008AECC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008AED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008AED4: jr          $ra
    // 0x8008AED8: sh          $a1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r5;
    return;
    // 0x8008AED8: sh          $a1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_8008AEDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008AEDC: jr          $ra
    // 0x8008AEE0: addiu       $v0, $a0, 0x1C
    ctx->r2 = ADD32(ctx->r4, 0X1C);
    return;
    // 0x8008AEE0: addiu       $v0, $a0, 0x1C
    ctx->r2 = ADD32(ctx->r4, 0X1C);
;}
RECOMP_FUNC void func_8008AEE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008AEE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008AEE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008AEEC: jal         0x8008C1D4
    // 0x8008AEF0: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    func_8008C1D4(rdram, ctx);
        goto after_0;
    // 0x8008AEF0: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_0:
    // 0x8008AEF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008AEF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008AEFC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008AF04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008AF04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008AF08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008AF0C: jal         0x8008C1DC
    // 0x8008AF10: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    func_8008C1DC(rdram, ctx);
        goto after_0;
    // 0x8008AF10: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_0:
    // 0x8008AF14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008AF18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008AF1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008AF24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008AF24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008AF28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008AF2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008AF30: lbu         $t8, 0x1B($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X1B);
    // 0x8008AF34: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8008AF38: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8008AF3C: ori         $t9, $t8, 0x20
    ctx->r25 = ctx->r24 | 0X20;
    // 0x8008AF40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008AF44: sb          $t6, 0x1A($a0)
    MEM_B(0X1A, ctx->r4) = ctx->r14;
    // 0x8008AF48: sb          $t9, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r25;
    // 0x8008AF4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008AF50: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x8008AF54: jal         0x8008B1A0
    // 0x8008AF58: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    func_8008B1A0(rdram, ctx);
        goto after_0;
    // 0x8008AF58: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x8008AF5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008AF60: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8008AF64: jal         0x8008B1D4
    // 0x8008AF68: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008B1D4(rdram, ctx);
        goto after_1;
    // 0x8008AF68: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x8008AF6C: lui         $a1, 0x4024
    ctx->r5 = S32(0X4024 << 16);
    // 0x8008AF70: ori         $a1, $a1, 0x56D6
    ctx->r5 = ctx->r5 | 0X56D6;
    // 0x8008AF74: jal         0x8008B1BC
    // 0x8008AF78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_2;
    // 0x8008AF78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8008AF7C: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x8008AF80: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8008AF84: jal         0x8008B1C8
    // 0x8008AF88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1C8(rdram, ctx);
        goto after_3;
    // 0x8008AF88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8008AF8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008AF90: jal         0x8008B188
    // 0x8008AF94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B188(rdram, ctx);
        goto after_4;
    // 0x8008AF94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8008AF98: jal         0x800E6A00
    // 0x8008AF9C: nop

    func_800E6A00(rdram, ctx);
        goto after_5;
    // 0x8008AF9C: nop

    after_5:
    // 0x8008AFA0: beq         $v0, $zero, L_8008AFB0
    if (ctx->r2 == 0) {
        // 0x8008AFA4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_8008AFB0;
    }
    // 0x8008AFA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008AFA8: b           L_8008AFB0
    // 0x8008AFAC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8008AFB0;
    // 0x8008AFAC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8008AFB0:
    // 0x8008AFB0: jal         0x8008B2E8
    // 0x8008AFB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B2E8(rdram, ctx);
        goto after_6;
    // 0x8008AFB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8008AFB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008AFBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008AFC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008AFC4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008AFCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008AFCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008AFD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008AFD4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8008AFD8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8008AFDC: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x8008AFE0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8008AFE4: addiu       $s0, $s1, 0x1C
    ctx->r16 = ADD32(ctx->r17, 0X1C);
    // 0x8008AFE8: sll         $t8, $t6, 26
    ctx->r24 = S32(ctx->r14 << 26);
    // 0x8008AFEC: bgezl       $t8, L_8008B03C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8008AFF0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8008B03C;
    }
    goto skip_0;
    // 0x8008AFF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8008AFF4: lbu         $t9, 0x1B($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1B);
    // 0x8008AFF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008AFFC: addiu       $s0, $s1, 0x1C
    ctx->r16 = ADD32(ctx->r17, 0X1C);
    // 0x8008B000: srl         $t0, $t9, 7
    ctx->r8 = S32(U32(ctx->r25) >> 7);
    // 0x8008B004: bne         $t0, $at, L_8008B024
    if (ctx->r8 != ctx->r1) {
        // 0x8008B008: lui         $a1, 0x3F7F
        ctx->r5 = S32(0X3F7F << 16);
            goto L_8008B024;
    }
    // 0x8008B008: lui         $a1, 0x3F7F
    ctx->r5 = S32(0X3F7F << 16);
    // 0x8008B00C: addiu       $s0, $a0, 0x1C
    ctx->r16 = ADD32(ctx->r4, 0X1C);
    // 0x8008B010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008B014: jal         0x8008C1C0
    // 0x8008B018: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008C1C0(rdram, ctx);
        goto after_0;
    // 0x8008B018: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x8008B01C: b           L_8008B044
    // 0x8008B020: nop

        goto L_8008B044;
    // 0x8008B020: nop

L_8008B024:
    // 0x8008B024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008B028: jal         0x8008C1C0
    // 0x8008B02C: ori         $a1, $a1, 0xFFEF
    ctx->r5 = ctx->r5 | 0XFFEF;
    func_8008C1C0(rdram, ctx);
        goto after_1;
    // 0x8008B02C: ori         $a1, $a1, 0xFFEF
    ctx->r5 = ctx->r5 | 0XFFEF;
    after_1:
    // 0x8008B030: b           L_8008B044
    // 0x8008B034: nop

        goto L_8008B044;
    // 0x8008B034: nop

    // 0x8008B038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8008B03C:
    // 0x8008B03C: jal         0x8008C1C0
    // 0x8008B040: lw          $a1, 0x14($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X14);
    func_8008C1C0(rdram, ctx);
        goto after_2;
    // 0x8008B040: lw          $a1, 0x14($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X14);
    after_2:
L_8008B044:
    // 0x8008B044: jal         0x8008C0C8
    // 0x8008B048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008C0C8(rdram, ctx);
        goto after_3;
    // 0x8008B048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8008B04C: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x8008B050: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008B054: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8008B058: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8008B05C: jr          $ra
    // 0x8008B060: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8008B060: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8008B064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B064: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008B068: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008B06C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8008B070: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8008B074: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x8008B078: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008B07C: addiu       $s1, $a0, 0x1C
    ctx->r17 = ADD32(ctx->r4, 0X1C);
    // 0x8008B080: sll         $t8, $t6, 25
    ctx->r24 = S32(ctx->r14 << 25);
    // 0x8008B084: bgezl       $t8, L_8008B0D0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8008B088: addiu       $s1, $s0, 0x1C
        ctx->r17 = ADD32(ctx->r16, 0X1C);
            goto L_8008B0D0;
    }
    goto skip_0;
    // 0x8008B088: addiu       $s1, $s0, 0x1C
    ctx->r17 = ADD32(ctx->r16, 0X1C);
    skip_0:
    // 0x8008B08C: jal         0x8008C0C0
    // 0x8008B090: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008C0C0(rdram, ctx);
        goto after_0;
    // 0x8008B090: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8008B094: beql        $v0, $zero, L_8008B0D0
    if (ctx->r2 == 0) {
        // 0x8008B098: addiu       $s1, $s0, 0x1C
        ctx->r17 = ADD32(ctx->r16, 0X1C);
            goto L_8008B0D0;
    }
    goto skip_1;
    // 0x8008B098: addiu       $s1, $s0, 0x1C
    ctx->r17 = ADD32(ctx->r16, 0X1C);
    skip_1:
    // 0x8008B09C: jal         0x8008C0AC
    // 0x8008B0A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008C0AC(rdram, ctx);
        goto after_1;
    // 0x8008B0A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x8008B0A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8008B0A8: jal         0x8008C1B8
    // 0x8008B0AC: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    func_8008C1B8(rdram, ctx);
        goto after_2;
    // 0x8008B0AC: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    after_2:
    // 0x8008B0B0: jal         0x8008AFCC
    // 0x8008B0B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AFCC(rdram, ctx);
        goto after_3;
    // 0x8008B0B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8008B0B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8008B0BC: jal         0x8008C1E4
    // 0x8008B0C0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008C1E4(rdram, ctx);
        goto after_4;
    // 0x8008B0C0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x8008B0C4: b           L_8008B0FC
    // 0x8008B0C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8008B0FC;
    // 0x8008B0C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008B0CC: addiu       $s1, $s0, 0x1C
    ctx->r17 = ADD32(ctx->r16, 0X1C);
L_8008B0D0:
    // 0x8008B0D0: jal         0x8008C270
    // 0x8008B0D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008C270(rdram, ctx);
        goto after_5;
    // 0x8008B0D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x8008B0D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8008B0DC: jal         0x8008C1B8
    // 0x8008B0E0: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    func_8008C1B8(rdram, ctx);
        goto after_6;
    // 0x8008B0E0: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    after_6:
    // 0x8008B0E4: jal         0x8008AFCC
    // 0x8008B0E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AFCC(rdram, ctx);
        goto after_7;
    // 0x8008B0E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8008B0EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8008B0F0: jal         0x8008C1E4
    // 0x8008B0F4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008C1E4(rdram, ctx);
        goto after_8;
    // 0x8008B0F4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_8:
    // 0x8008B0F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8008B0FC:
    // 0x8008B0FC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8008B100: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8008B104: jr          $ra
    // 0x8008B108: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8008B108: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8008B10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B10C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8008B110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008B114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008B118: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8008B11C: jal         0x8008C1C0
    // 0x8008B120: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    func_8008C1C0(rdram, ctx);
        goto after_0;
    // 0x8008B120: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_0:
    // 0x8008B124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008B128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008B12C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008B134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B134: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008B138: beq         $a1, $at, L_8008B164
    if (ctx->r5 == ctx->r1) {
        // 0x8008B13C: sb          $a1, 0x1A($a0)
        MEM_B(0X1A, ctx->r4) = ctx->r5;
            goto L_8008B164;
    }
    // 0x8008B13C: sb          $a1, 0x1A($a0)
    MEM_B(0X1A, ctx->r4) = ctx->r5;
    // 0x8008B140: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8008B144: beq         $a1, $at, L_8008B174
    if (ctx->r5 == ctx->r1) {
            // 0x8008B148: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    func_8008B174(rdram, ctx);
    return;
    }
    // 0x8008B148: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8008B14C: beq         $a1, $at, L_8008B164
    if (ctx->r5 == ctx->r1) {
        // 0x8008B150: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8008B164;
    }
    // 0x8008B150: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8008B154: beql        $a1, $at, L_8008B178
    if (ctx->r5 == ctx->r1) {
            // 0x8008B158: lbu         $t0, 0x1B($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X1B);
    static_3_8008B178(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x8008B158: lbu         $t0, 0x1B($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X1B);
    skip_0:
    // 0x8008B15C: jr          $ra
    // 0x8008B160: nop

    return;
    // 0x8008B160: nop

L_8008B164:
    // 0x8008B164: lbu         $t7, 0x1B($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1B);
    // 0x8008B168: andi        $t8, $t7, 0xFFFB
    ctx->r24 = ctx->r15 & 0XFFFB;
    // 0x8008B16C: jr          $ra
    // 0x8008B170: sb          $t8, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r24;
    return;
    // 0x8008B170: sb          $t8, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_8008B174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B174: lbu         $t0, 0x1B($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X1B);
    // 0x8008B178: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x8008B17C: sb          $t1, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r9;
    // 0x8008B180: jr          $ra
    // 0x8008B184: nop

    return;
    // 0x8008B184: nop

;}
RECOMP_FUNC void func_8008B188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B188: lbu         $t9, 0x1B($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1B);
    // 0x8008B18C: sll         $t8, $a1, 7
    ctx->r24 = S32(ctx->r5 << 7);
    // 0x8008B190: andi        $t0, $t9, 0xFF7F
    ctx->r8 = ctx->r25 & 0XFF7F;
    // 0x8008B194: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x8008B198: jr          $ra
    // 0x8008B19C: sb          $t1, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r9;
    return;
    // 0x8008B19C: sb          $t1, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_8008B1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B1A0: lbu         $t9, 0x1B($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1B);
    // 0x8008B1A4: sll         $t7, $a1, 6
    ctx->r15 = S32(ctx->r5 << 6);
    // 0x8008B1A8: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x8008B1AC: andi        $t0, $t9, 0xFFBF
    ctx->r8 = ctx->r25 & 0XFFBF;
    // 0x8008B1B0: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x8008B1B4: jr          $ra
    // 0x8008B1B8: sb          $t1, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r9;
    return;
    // 0x8008B1B8: sb          $t1, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_8008B1BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B1BC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8008B1C0: jr          $ra
    // 0x8008B1C4: swc1        $f12, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x8008B1C4: swc1        $f12, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8008B1C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B1C8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8008B1CC: jr          $ra
    // 0x8008B1D0: swc1        $f12, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x8008B1D0: swc1        $f12, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8008B1D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B1D4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8008B1D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8008B1DC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8008B1E0: trunc.w.s   $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x8008B1E4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8008B1E8: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x8008B1EC: c.eq.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl == ctx->f16.fl;
    // 0x8008B1F0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8008B1F4: nop

    // 0x8008B1F8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008B1FC: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x8008B200: bc1t        L_8008B22C
    if (c1cs) {
            // 0x8008B204: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    func_8008B22C(rdram, ctx);
    return;
    }
    // 0x8008B204: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x8008B208: trunc.w.s   $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8008B20C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8008B210: nop

    // 0x8008B214: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8008B218: nop

    // 0x8008B21C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008B220: sub.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x8008B224: jr          $ra
    // 0x8008B228: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x8008B228: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8008B22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B22C: swc1        $f14, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f14.u32l;
    // 0x8008B230: jr          $ra
    // 0x8008B234: nop

    return;
    // 0x8008B234: nop

;}
RECOMP_FUNC void func_8008B238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B238: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8008B23C: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x8008B240: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8008B244: jr          $ra
    // 0x8008B248: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    return;
    // 0x8008B248: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_8008B24C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B24C: lbu         $t6, 0x1B($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1B);
    // 0x8008B250: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8008B254: andi        $t7, $t6, 0xFFDF
    ctx->r15 = ctx->r14 & 0XFFDF;
    // 0x8008B258: sb          $t7, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r15;
    // 0x8008B25C: jr          $ra
    // 0x8008B260: swc1        $f12, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x8008B260: swc1        $f12, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8008B264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B264: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008B268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008B26C: jal         0x8008C0C0
    // 0x8008B270: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    func_8008C0C0(rdram, ctx);
        goto after_0;
    // 0x8008B270: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_0:
    // 0x8008B274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008B278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008B27C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008B284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B284: jr          $ra
    // 0x8008B288: lbu         $v0, 0x1A($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1A);
    return;
    // 0x8008B288: lbu         $v0, 0x1A($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1A);
;}
RECOMP_FUNC void func_8008B28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B28C: lbu         $v0, 0x1B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1B);
    // 0x8008B290: srl         $t6, $v0, 7
    ctx->r14 = S32(U32(ctx->r2) >> 7);
    // 0x8008B294: jr          $ra
    // 0x8008B298: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x8008B298: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_8008B29C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B29C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8008B2A0: sll         $t6, $v0, 25
    ctx->r14 = S32(ctx->r2 << 25);
    // 0x8008B2A4: jr          $ra
    // 0x8008B2A8: srl         $v0, $t6, 31
    ctx->r2 = S32(U32(ctx->r14) >> 31);
    return;
    // 0x8008B2A8: srl         $v0, $t6, 31
    ctx->r2 = S32(U32(ctx->r14) >> 31);
;}
RECOMP_FUNC void func_8008B2AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B2AC: jr          $ra
    // 0x8008B2B0: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    return;
    // 0x8008B2B0: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
;}
RECOMP_FUNC void func_8008B2B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B2B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008B2B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008B2BC: jal         0x8008C0C8
    // 0x8008B2C0: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    func_8008C0C8(rdram, ctx);
        goto after_0;
    // 0x8008B2C0: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_0:
    // 0x8008B2C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008B2C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008B2CC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008B2D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B2D4: jr          $ra
    // 0x8008B2D8: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    return;
    // 0x8008B2D8: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
;}
RECOMP_FUNC void func_8008B2DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B2DC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8008B2E0: jr          $ra
    // 0x8008B2E4: swc1        $f12, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x8008B2E4: swc1        $f12, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8008B2E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B2E8: lbu         $t9, 0x1B($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1B);
    // 0x8008B2EC: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x8008B2F0: andi        $t8, $t7, 0x18
    ctx->r24 = ctx->r15 & 0X18;
    // 0x8008B2F4: andi        $t0, $t9, 0xFFE7
    ctx->r8 = ctx->r25 & 0XFFE7;
    // 0x8008B2F8: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x8008B2FC: jr          $ra
    // 0x8008B300: sb          $t1, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r9;
    return;
    // 0x8008B300: sb          $t1, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_8008B304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008B308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008B30C: jal         0x8008C038
    // 0x8008B310: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    func_8008C038(rdram, ctx);
        goto after_0;
    // 0x8008B310: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_0:
    // 0x8008B314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008B318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008B31C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008B324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B324: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008B328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008B32C: jal         0x8008B284
    // 0x8008B330: nop

    func_8008B284(rdram, ctx);
        goto after_0;
    // 0x8008B330: nop

    after_0:
    // 0x8008B334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008B338: xori        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 ^ 0X3;
    // 0x8008B33C: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x8008B340: jr          $ra
    // 0x8008B344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8008B344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008B348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B348: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8008B34C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008B350: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008B354: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008B358: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8008B35C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x8008B360: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    // 0x8008B364: jal         0x8008C0C8
    // 0x8008B368: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_8008C0C8(rdram, ctx);
        goto after_0;
    // 0x8008B368: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8008B36C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8008B370: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8008B374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008B378: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8008B37C: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x8008B380: nop

    // 0x8008B384: bc1fl       L_8008B398
    if (!c1cs) {
        // 0x8008B388: lbu         $t6, 0x1B($a1)
        ctx->r14 = MEM_BU(ctx->r5, 0X1B);
            goto L_8008B398;
    }
    goto skip_0;
    // 0x8008B388: lbu         $t6, 0x1B($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X1B);
    skip_0:
    // 0x8008B38C: b           L_8008B4A0
    // 0x8008B390: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008B4A0;
    // 0x8008B390: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008B394: lbu         $t6, 0x1B($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X1B);
L_8008B398:
    // 0x8008B398: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008B39C: srl         $t7, $t6, 7
    ctx->r15 = S32(U32(ctx->r14) >> 7);
    // 0x8008B3A0: bnel        $t7, $at, L_8008B42C
    if (ctx->r15 != ctx->r1) {
        // 0x8008B3A4: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_8008B42C;
    }
    goto skip_1;
    // 0x8008B3A4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_1:
    // 0x8008B3A8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8008B3AC: nop

    // 0x8008B3B0: bc1fl       L_8008B3F4
    if (!c1cs) {
        // 0x8008B3B4: c.le.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
            goto L_8008B3F4;
    }
    goto skip_2;
    // 0x8008B3B4: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    skip_2:
    // 0x8008B3B8: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x8008B3BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008B3C0: bc1f        L_8008B3CC
    if (!c1cs) {
        // 0x8008B3C4: nop
    
            goto L_8008B3CC;
    }
    // 0x8008B3C4: nop

    // 0x8008B3C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008B3CC:
    // 0x8008B3CC: beq         $v0, $zero, L_8008B4A0
    if (ctx->r2 == 0) {
        // 0x8008B3D0: nop
    
            goto L_8008B4A0;
    }
    // 0x8008B3D0: nop

    // 0x8008B3D4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8008B3D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008B3DC: bc1f        L_8008B4A0
    if (!c1cs) {
        // 0x8008B3E0: nop
    
            goto L_8008B4A0;
    }
    // 0x8008B3E0: nop

    // 0x8008B3E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008B3E8: b           L_8008B4A0
    // 0x8008B3EC: nop

        goto L_8008B4A0;
    // 0x8008B3EC: nop

    // 0x8008B3F0: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
L_8008B3F4:
    // 0x8008B3F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008B3F8: bc1f        L_8008B404
    if (!c1cs) {
        // 0x8008B3FC: nop
    
            goto L_8008B404;
    }
    // 0x8008B3FC: nop

    // 0x8008B400: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008B404:
    // 0x8008B404: bne         $v0, $zero, L_8008B4A0
    if (ctx->r2 != 0) {
        // 0x8008B408: nop
    
            goto L_8008B4A0;
    }
    // 0x8008B408: nop

    // 0x8008B40C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8008B410: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008B414: bc1f        L_8008B4A0
    if (!c1cs) {
        // 0x8008B418: nop
    
            goto L_8008B4A0;
    }
    // 0x8008B418: nop

    // 0x8008B41C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008B420: b           L_8008B4A0
    // 0x8008B424: nop

        goto L_8008B4A0;
    // 0x8008B424: nop

    // 0x8008B428: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_8008B42C:
    // 0x8008B42C: nop

    // 0x8008B430: bc1fl       L_8008B474
    if (!c1cs) {
        // 0x8008B434: c.le.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
            goto L_8008B474;
    }
    goto skip_3;
    // 0x8008B434: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    skip_3:
    // 0x8008B438: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x8008B43C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008B440: bc1f        L_8008B44C
    if (!c1cs) {
        // 0x8008B444: nop
    
            goto L_8008B44C;
    }
    // 0x8008B444: nop

    // 0x8008B448: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008B44C:
    // 0x8008B44C: beq         $v0, $zero, L_8008B4A0
    if (ctx->r2 == 0) {
        // 0x8008B450: nop
    
            goto L_8008B4A0;
    }
    // 0x8008B450: nop

    // 0x8008B454: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8008B458: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008B45C: bc1f        L_8008B4A0
    if (!c1cs) {
        // 0x8008B460: nop
    
            goto L_8008B4A0;
    }
    // 0x8008B460: nop

    // 0x8008B464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008B468: b           L_8008B4A0
    // 0x8008B46C: nop

        goto L_8008B4A0;
    // 0x8008B46C: nop

    // 0x8008B470: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
L_8008B474:
    // 0x8008B474: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008B478: bc1f        L_8008B484
    if (!c1cs) {
        // 0x8008B47C: nop
    
            goto L_8008B484;
    }
    // 0x8008B47C: nop

    // 0x8008B480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008B484:
    // 0x8008B484: bne         $v0, $zero, L_8008B4A0
    if (ctx->r2 != 0) {
        // 0x8008B488: nop
    
            goto L_8008B4A0;
    }
    // 0x8008B488: nop

    // 0x8008B48C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8008B490: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008B494: bc1f        L_8008B4A0
    if (!c1cs) {
        // 0x8008B498: nop
    
            goto L_8008B4A0;
    }
    // 0x8008B498: nop

    // 0x8008B49C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008B4A0:
    // 0x8008B4A0: jr          $ra
    // 0x8008B4A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8008B4A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008B4A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B4A8: lbu         $t9, 0x1B($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1B);
    // 0x8008B4AC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8008B4B0: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x8008B4B4: andi        $t0, $t9, 0xFFFB
    ctx->r8 = ctx->r25 & 0XFFFB;
    // 0x8008B4B8: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x8008B4BC: jr          $ra
    // 0x8008B4C0: sb          $t1, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r9;
    return;
    // 0x8008B4C0: sb          $t1, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_8008B4C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B4C4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8008B4C8: sll         $t6, $v0, 29
    ctx->r14 = S32(ctx->r2 << 29);
    // 0x8008B4CC: jr          $ra
    // 0x8008B4D0: srl         $v0, $t6, 31
    ctx->r2 = S32(U32(ctx->r14) >> 31);
    return;
    // 0x8008B4D0: srl         $v0, $t6, 31
    ctx->r2 = S32(U32(ctx->r14) >> 31);
;}
RECOMP_FUNC void func_8008B4D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B4D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008B4D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008B4DC: jal         0x8008C27C
    // 0x8008B4E0: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    func_8008C27C(rdram, ctx);
        goto after_0;
    // 0x8008B4E0: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_0:
    // 0x8008B4E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008B4E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008B4EC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008B4F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B4F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008B4F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008B4FC: jal         0x8008C0B8
    // 0x8008B500: nop

    func_8008C0B8(rdram, ctx);
        goto after_0;
    // 0x8008B500: nop

    after_0:
    // 0x8008B504: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008B508: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008B50C: addiu       $v0, $v0, 0x1C
    ctx->r2 = ADD32(ctx->r2, 0X1C);
    // 0x8008B510: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008B518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B518: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008B51C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008B520: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008B524: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008B528: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8008B52C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008B530: jal         0x8008C124
    // 0x8008B534: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    func_8008C124(rdram, ctx);
        goto after_0;
    // 0x8008B534: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_0:
    // 0x8008B538: lbu         $t7, 0x1B($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1B);
    // 0x8008B53C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8008B540: sb          $zero, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = 0;
    // 0x8008B544: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x8008B548: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x8008B54C: sb          $t8, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = ctx->r24;
    // 0x8008B550: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x8008B554: jal         0x800E6A00
    // 0x8008B558: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    func_800E6A00(rdram, ctx);
        goto after_1;
    // 0x8008B558: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x8008B55C: beq         $v0, $zero, L_8008B578
    if (ctx->r2 == 0) {
        // 0x8008B560: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8008B578;
    }
    // 0x8008B560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008B564: lbu         $t9, 0x1B($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1B);
    // 0x8008B568: andi        $t0, $t9, 0xFFE7
    ctx->r8 = ctx->r25 & 0XFFE7;
    // 0x8008B56C: ori         $t1, $t0, 0x10
    ctx->r9 = ctx->r8 | 0X10;
    // 0x8008B570: b           L_8008B584
    // 0x8008B574: sb          $t1, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = ctx->r9;
        goto L_8008B584;
    // 0x8008B574: sb          $t1, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = ctx->r9;
L_8008B578:
    // 0x8008B578: lbu         $t2, 0x1B($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1B);
    // 0x8008B57C: andi        $t3, $t2, 0xFFE7
    ctx->r11 = ctx->r10 & 0XFFE7;
    // 0x8008B580: sb          $t3, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = ctx->r11;
L_8008B584:
    // 0x8008B584: lbu         $t5, 0x1B($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1B);
    // 0x8008B588: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8008B58C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8008B590: ori         $t6, $t5, 0x4
    ctx->r14 = ctx->r13 | 0X4;
    // 0x8008B594: jal         0x8008B1D4
    // 0x8008B598: sb          $t6, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = ctx->r14;
    func_8008B1D4(rdram, ctx);
        goto after_2;
    // 0x8008B598: sb          $t6, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = ctx->r14;
    after_2:
    // 0x8008B59C: lui         $a1, 0x4007
    ctx->r5 = S32(0X4007 << 16);
    // 0x8008B5A0: ori         $a1, $a1, 0xE5C9
    ctx->r5 = ctx->r5 | 0XE5C9;
    // 0x8008B5A4: jal         0x8008B1BC
    // 0x8008B5A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x8008B5A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8008B5AC: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x8008B5B0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8008B5B4: jal         0x8008B1C8
    // 0x8008B5B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1C8(rdram, ctx);
        goto after_4;
    // 0x8008B5B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8008B5BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008B5C0: jal         0x8008B1A0
    // 0x8008B5C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B1A0(rdram, ctx);
        goto after_5;
    // 0x8008B5C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8008B5C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008B5CC: jal         0x8008B188
    // 0x8008B5D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B188(rdram, ctx);
        goto after_6;
    // 0x8008B5D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x8008B5D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008B5D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008B5DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008B5E0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008B5E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B5E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008B5EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008B5F0: jal         0x8008C0D8
    // 0x8008B5F4: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    func_8008C0D8(rdram, ctx);
        goto after_0;
    // 0x8008B5F4: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_0:
    // 0x8008B5F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008B5FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008B600: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008B610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B610: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008B614: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008B618: jal         0x8001ACCC
    // 0x8008B61C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x8008B61C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_0:
    // 0x8008B620: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8008B624: addiu       $v1, $v1, 0x6CC0
    ctx->r3 = ADD32(ctx->r3, 0X6CC0);
    // 0x8008B628: addiu       $a1, $v0, 0x3C
    ctx->r5 = ADD32(ctx->r2, 0X3C);
    // 0x8008B62C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8008B630: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x8008B634: jal         0x8008BBC0
    // 0x8008B638: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008BBC0(rdram, ctx);
        goto after_1;
    // 0x8008B638: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8008B63C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008B640: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008B644: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008B64C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B64C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8008B650: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8008B654: lw          $v0, 0x6CC4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CC4);
    // 0x8008B658: lw          $a0, 0x6CC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6CC0);
    // 0x8008B65C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008B660: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008B664: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x8008B668: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008B66C: beq         $at, $zero, L_8008B6BC
    if (ctx->r1 == 0) {
        // 0x8008B670: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_8008B6BC;
    }
    // 0x8008B670: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008B674: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
L_8008B678:
    // 0x8008B678: beql        $t6, $zero, L_8008B6A8
    if (ctx->r14 == 0) {
        // 0x8008B67C: addiu       $s0, $s0, 0x6
        ctx->r16 = ADD32(ctx->r16, 0X6);
            goto L_8008B6A8;
    }
    goto skip_0;
    // 0x8008B67C: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    skip_0:
    // 0x8008B680: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x8008B684: beql        $a0, $zero, L_8008B69C
    if (ctx->r4 == 0) {
        // 0x8008B688: sh          $zero, 0x4($s0)
        MEM_H(0X4, ctx->r16) = 0;
            goto L_8008B69C;
    }
    goto skip_1;
    // 0x8008B688: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    skip_1:
    // 0x8008B68C: jal         0x800DFCC0
    // 0x8008B690: nop

    func_800DFCC0(rdram, ctx);
        goto after_0;
    // 0x8008B690: nop

    after_0:
    // 0x8008B694: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x8008B698: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
L_8008B69C:
    // 0x8008B69C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8008B6A0: lw          $v0, 0x6CC4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CC4);
    // 0x8008B6A4: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
L_8008B6A8:
    // 0x8008B6A8: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x8008B6AC: bnel        $at, $zero, L_8008B678
    if (ctx->r1 != 0) {
        // 0x8008B6B0: lh          $t6, 0x4($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X4);
            goto L_8008B678;
    }
    goto skip_2;
    // 0x8008B6B0: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
    skip_2:
    // 0x8008B6B4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8008B6B8: lw          $a0, 0x6CC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6CC0);
L_8008B6BC:
    // 0x8008B6BC: jal         0x8001B084
    // 0x8008B6C0: nop

    func_8001B084(rdram, ctx);
        goto after_1;
    // 0x8008B6C0: nop

    after_1:
    // 0x8008B6C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008B6C8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008B6CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008B6D0: sw          $zero, 0x6CC4($at)
    MEM_W(0X6CC4, ctx->r1) = 0;
    // 0x8008B6D4: sw          $zero, 0x6CC0($at)
    MEM_W(0X6CC0, ctx->r1) = 0;
    // 0x8008B6D8: jr          $ra
    // 0x8008B6DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8008B6DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8008B6E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B6E0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8008B6E4: addiu       $v1, $v1, 0x6CC0
    ctx->r3 = ADD32(ctx->r3, 0X6CC0);
    // 0x8008B6E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008B6EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008B6F0: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
    // 0x8008B6F4: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x8008B6F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008B6FC: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x8008B700: beql        $at, $zero, L_8008B758
    if (ctx->r1 == 0) {
        // 0x8008B704: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8008B758;
    }
    goto skip_0;
    // 0x8008B704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8008B708: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
L_8008B70C:
    // 0x8008B70C: beql        $t6, $zero, L_8008B748
    if (ctx->r14 == 0) {
        // 0x8008B710: addiu       $s0, $s0, 0x6
        ctx->r16 = ADD32(ctx->r16, 0X6);
            goto L_8008B748;
    }
    goto skip_1;
    // 0x8008B710: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    skip_1:
    // 0x8008B714: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x8008B718: beql        $a0, $zero, L_8008B748
    if (ctx->r4 == 0) {
        // 0x8008B71C: addiu       $s0, $s0, 0x6
        ctx->r16 = ADD32(ctx->r16, 0X6);
            goto L_8008B748;
    }
    goto skip_2;
    // 0x8008B71C: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    skip_2:
    // 0x8008B720: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
    // 0x8008B724: slti        $at, $t7, 0x3B
    ctx->r1 = SIGNED(ctx->r15) < 0X3B ? 1 : 0;
    // 0x8008B728: beql        $at, $zero, L_8008B748
    if (ctx->r1 == 0) {
        // 0x8008B72C: addiu       $s0, $s0, 0x6
        ctx->r16 = ADD32(ctx->r16, 0X6);
            goto L_8008B748;
    }
    goto skip_3;
    // 0x8008B72C: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    skip_3:
    // 0x8008B730: jal         0x800DFCC0
    // 0x8008B734: nop

    func_800DFCC0(rdram, ctx);
        goto after_0;
    // 0x8008B734: nop

    after_0:
    // 0x8008B738: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x8008B73C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8008B740: lw          $v0, 0x6CC4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CC4);
    // 0x8008B744: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
L_8008B748:
    // 0x8008B748: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x8008B74C: bnel        $at, $zero, L_8008B70C
    if (ctx->r1 != 0) {
        // 0x8008B750: lh          $t6, 0x4($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X4);
            goto L_8008B70C;
    }
    goto skip_4;
    // 0x8008B750: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
    skip_4:
    // 0x8008B754: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8008B758:
    // 0x8008B758: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008B75C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008B760: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008B768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B768: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008B76C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8008B770: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x8008B774: addiu       $s2, $s2, 0x6CC0
    ctx->r18 = ADD32(ctx->r18, 0X6CC0);
    // 0x8008B778: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8008B77C: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x8008B780: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008B784: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8008B788: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x8008B78C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8008B790: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8008B794: beq         $at, $zero, L_8008B808
    if (ctx->r1 == 0) {
        // 0x8008B798: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_8008B808;
    }
    // 0x8008B798: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008B79C: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
    // 0x8008B7A0: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
L_8008B7A4:
    // 0x8008B7A4: beql        $t6, $zero, L_8008B7FC
    if (ctx->r14 == 0) {
        // 0x8008B7A8: addiu       $s0, $s0, 0x6
        ctx->r16 = ADD32(ctx->r16, 0X6);
            goto L_8008B7FC;
    }
    goto skip_0;
    // 0x8008B7A8: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    skip_0:
    // 0x8008B7AC: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x8008B7B0: jal         0x800DFCC0
    // 0x8008B7B4: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800DFCC0(rdram, ctx);
        goto after_0;
    // 0x8008B7B4: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_0:
    // 0x8008B7B8: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x8008B7BC: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8008B7C0: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x8008B7C4: subu        $t7, $s0, $a0
    ctx->r15 = SUB32(ctx->r16, ctx->r4);
    // 0x8008B7C8: div         $zero, $t7, $s1
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r17)));
    // 0x8008B7CC: mflo        $v1
    ctx->r3 = lo;
    // 0x8008B7D0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8008B7D4: bne         $s1, $zero, L_8008B7E0
    if (ctx->r17 != 0) {
        // 0x8008B7D8: nop
    
            goto L_8008B7E0;
    }
    // 0x8008B7D8: nop

    // 0x8008B7DC: break       7
    do_break(2148055004);
L_8008B7E0:
    // 0x8008B7E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008B7E4: bne         $s1, $at, L_8008B7F8
    if (ctx->r17 != ctx->r1) {
        // 0x8008B7E8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8008B7F8;
    }
    // 0x8008B7E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8008B7EC: bne         $t7, $at, L_8008B7F8
    if (ctx->r15 != ctx->r1) {
        // 0x8008B7F0: nop
    
            goto L_8008B7F8;
    }
    // 0x8008B7F0: nop

    // 0x8008B7F4: break       6
    do_break(2148055028);
L_8008B7F8:
    // 0x8008B7F8: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
L_8008B7FC:
    // 0x8008B7FC: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x8008B800: bnel        $at, $zero, L_8008B7A4
    if (ctx->r1 != 0) {
        // 0x8008B804: lh          $t6, 0x4($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X4);
            goto L_8008B7A4;
    }
    goto skip_1;
    // 0x8008B804: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
    skip_1:
L_8008B808:
    // 0x8008B808: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x8008B80C: beql        $at, $zero, L_8008B81C
    if (ctx->r1 == 0) {
        // 0x8008B810: sll         $s0, $v1, 2
        ctx->r16 = S32(ctx->r3 << 2);
            goto L_8008B81C;
    }
    goto skip_2;
    // 0x8008B810: sll         $s0, $v1, 2
    ctx->r16 = S32(ctx->r3 << 2);
    skip_2:
    // 0x8008B814: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x8008B818: sll         $s0, $v1, 2
    ctx->r16 = S32(ctx->r3 << 2);
L_8008B81C:
    // 0x8008B81C: subu        $s0, $s0, $v1
    ctx->r16 = SUB32(ctx->r16, ctx->r3);
    // 0x8008B820: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x8008B824: jal         0x8001B208
    // 0x8008B828: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001B208(rdram, ctx);
        goto after_1;
    // 0x8008B828: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x8008B82C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8008B830: addu        $t9, $s0, $v0
    ctx->r25 = ADD32(ctx->r16, ctx->r2);
    // 0x8008B834: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x8008B838: sw          $t9, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r25;
    // 0x8008B83C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8008B840: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008B844: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8008B848: jr          $ra
    // 0x8008B84C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8008B84C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008B850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B850: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8008B854: addiu       $v1, $v1, 0x6CC0
    ctx->r3 = ADD32(ctx->r3, 0X6CC0);
    // 0x8008B858: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008B85C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008B860: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
    // 0x8008B864: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x8008B868: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008B86C: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x8008B870: beql        $at, $zero, L_8008B8D0
    if (ctx->r1 == 0) {
        // 0x8008B874: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8008B8D0;
    }
    goto skip_0;
    // 0x8008B874: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8008B878: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
L_8008B87C:
    // 0x8008B87C: beql        $t6, $zero, L_8008B8C0
    if (ctx->r14 == 0) {
        // 0x8008B880: addiu       $s0, $s0, 0x6
        ctx->r16 = ADD32(ctx->r16, 0X6);
            goto L_8008B8C0;
    }
    goto skip_1;
    // 0x8008B880: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    skip_1:
    // 0x8008B884: lh          $t7, 0x0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X0);
    // 0x8008B888: beq         $t7, $zero, L_8008B8B4
    if (ctx->r15 == 0) {
        // 0x8008B88C: nop
    
            goto L_8008B8B4;
    }
    // 0x8008B88C: nop

    // 0x8008B890: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    // 0x8008B894: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8008B898: sh          $t9, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r25;
    // 0x8008B89C: lh          $t0, 0x2($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2);
    // 0x8008B8A0: bgtz        $t0, L_8008B8B4
    if (SIGNED(ctx->r8) > 0) {
        // 0x8008B8A4: nop
    
            goto L_8008B8B4;
    }
    // 0x8008B8A4: nop

    // 0x8008B8A8: jal         0x800DFCC0
    // 0x8008B8AC: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800DFCC0(rdram, ctx);
        goto after_0;
    // 0x8008B8AC: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_0:
    // 0x8008B8B0: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
L_8008B8B4:
    // 0x8008B8B4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8008B8B8: lw          $v0, 0x6CC4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CC4);
    // 0x8008B8BC: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
L_8008B8C0:
    // 0x8008B8C0: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x8008B8C4: bnel        $at, $zero, L_8008B87C
    if (ctx->r1 != 0) {
        // 0x8008B8C8: lh          $t6, 0x4($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X4);
            goto L_8008B87C;
    }
    goto skip_2;
    // 0x8008B8C8: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
    skip_2:
    // 0x8008B8CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8008B8D0:
    // 0x8008B8D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008B8D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008B8D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008B8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B8E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008B8E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008B8E8: jal         0x8008BAC0
    // 0x8008B8EC: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_8008BAC0(rdram, ctx);
        goto after_0;
    // 0x8008B8EC: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8008B8F0: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x8008B8F4: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x8008B8F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008B8FC: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x8008B900: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008B904: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008B90C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B90C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8008B910: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8008B914: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8008B918: lw          $t9, 0x6CC0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6CC0);
    // 0x8008B91C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008B920: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8008B924: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x8008B928: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8008B92C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8008B930: lh          $t0, -0x6($v0)
    ctx->r8 = MEM_H(ctx->r2, -0X6);
    // 0x8008B934: addiu       $v0, $v0, -0x6
    ctx->r2 = ADD32(ctx->r2, -0X6);
    // 0x8008B938: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8008B93C: beq         $t0, $zero, L_8008B94C
    if (ctx->r8 == 0) {
            // 0x8008B940: nop

    func_8008B94C(rdram, ctx);
    return;
    }
    // 0x8008B940: nop

    // 0x8008B944: jr          $ra
    // 0x8008B948: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8008B948: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8008B94C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B94C: jr          $ra
    // 0x8008B950: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8008B950: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8008B954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B954: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8008B958: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8008B95C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8008B960: lw          $t9, 0x6CC0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6CC0);
    // 0x8008B964: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008B968: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008B96C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8008B970: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x8008B974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008B978: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8008B97C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8008B980: lh          $a1, -0x6($v0)
    ctx->r5 = MEM_H(ctx->r2, -0X6);
    // 0x8008B984: addiu       $v0, $v0, -0x6
    ctx->r2 = ADD32(ctx->r2, -0X6);
    // 0x8008B988: beq         $a1, $zero, L_8008B9A8
    if (ctx->r5 == 0) {
        // 0x8008B98C: sll         $a0, $a1, 16
        ctx->r4 = S32(ctx->r5 << 16);
            goto L_8008B9A8;
    }
    // 0x8008B98C: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x8008B990: sra         $t0, $a0, 16
    ctx->r8 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8008B994: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8008B998: jal         0x800DFCC0
    // 0x8008B99C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800DFCC0(rdram, ctx);
        goto after_0;
    // 0x8008B99C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8008B9A0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8008B9A4: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
L_8008B9A8:
    // 0x8008B9A8: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x8008B9AC: lh          $t1, 0x4($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X4);
    // 0x8008B9B0: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
    // 0x8008B9B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008B9B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008B9BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008B9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B9C4: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8008B9C8: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8008B9CC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8008B9D0: lw          $t9, 0x6CC0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6CC0);
    // 0x8008B9D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008B9D8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008B9DC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8008B9E0: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x8008B9E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008B9E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8008B9EC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8008B9F0: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x8008B9F4: lh          $a2, -0x6($v1)
    ctx->r6 = MEM_H(ctx->r3, -0X6);
    // 0x8008B9F8: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x8008B9FC: addiu       $v1, $v1, -0x6
    ctx->r3 = ADD32(ctx->r3, -0X6);
    // 0x8008BA00: beq         $a2, $zero, L_8008BA28
    if (ctx->r6 == 0) {
        // 0x8008BA04: sh          $t0, 0x2($v1)
        MEM_H(0X2, ctx->r3) = ctx->r8;
            goto L_8008BA28;
    }
    // 0x8008BA04: sh          $t0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r8;
    // 0x8008BA08: sll         $a0, $a2, 16
    ctx->r4 = S32(ctx->r6 << 16);
    // 0x8008BA0C: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8008BA10: jal         0x800DFCE8
    // 0x8008BA14: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_800DFCE8(rdram, ctx);
        goto after_0;
    // 0x8008BA14: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_0:
    // 0x8008BA18: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8008BA1C: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x8008BA20: b           L_8008BA4C
    // 0x8008BA24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008BA4C;
    // 0x8008BA24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008BA28:
    // 0x8008BA28: jal         0x800DFD10
    // 0x8008BA2C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_800DFD10(rdram, ctx);
        goto after_1;
    // 0x8008BA2C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x8008BA30: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8008BA34: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x8008BA38: jal         0x800DFCE8
    // 0x8008BA3C: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    func_800DFCE8(rdram, ctx);
        goto after_2;
    // 0x8008BA3C: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    after_2:
    // 0x8008BA40: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8008BA44: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
    // 0x8008BA48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008BA4C:
    // 0x8008BA4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008BA50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008BA54: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008BA5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BA5C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8008BA60: addiu       $v1, $v1, 0x6CC0
    ctx->r3 = ADD32(ctx->r3, 0X6CC0);
    // 0x8008BA64: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8008BA68: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x8008BA6C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8008BA70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008BA74: subu        $t7, $t6, $a0
    ctx->r15 = SUB32(ctx->r14, ctx->r4);
    // 0x8008BA78: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x8008BA7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008BA80: mflo        $t8
    ctx->r24 = lo;
    // 0x8008BA84: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8008BA88: jal         0x8001BAFC
    // 0x8008BA8C: nop

    defrag(rdram, ctx);
        goto after_0;
    // 0x8008BA8C: nop

    after_0:
    // 0x8008BA90: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8008BA94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008BA98: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8008BA9C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8008BAA0: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8008BAA4: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x8008BAA8: addiu       $v1, $v1, 0x6CC0
    ctx->r3 = ADD32(ctx->r3, 0X6CC0);
    // 0x8008BAAC: addu        $t2, $t0, $v0
    ctx->r10 = ADD32(ctx->r8, ctx->r2);
    // 0x8008BAB0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8008BAB4: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x8008BAB8: jr          $ra
    // 0x8008BABC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8008BABC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8008BAC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BAC0: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8008BAC4: addiu       $t1, $t1, 0x6CC0
    ctx->r9 = ADD32(ctx->r9, 0X6CC0);
    // 0x8008BAC8: lw          $a3, 0x0($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X0);
    // 0x8008BACC: lw          $v0, 0x4($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X4);
    // 0x8008BAD0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008BAD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008BAD8: sltu        $at, $a3, $v0
    ctx->r1 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x8008BADC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8008BAE0: beq         $at, $zero, L_8008BB04
    if (ctx->r1 == 0) {
        // 0x8008BAE4: or          $a2, $a3, $zero
        ctx->r6 = ctx->r7 | 0;
            goto L_8008BB04;
    }
    // 0x8008BAE4: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8008BAE8: lh          $t6, 0x4($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X4);
L_8008BAEC:
    // 0x8008BAEC: beq         $t6, $zero, L_8008BB04
    if (ctx->r14 == 0) {
        // 0x8008BAF0: nop
    
            goto L_8008BB04;
    }
    // 0x8008BAF0: nop

    // 0x8008BAF4: addiu       $a2, $a2, 0x6
    ctx->r6 = ADD32(ctx->r6, 0X6);
    // 0x8008BAF8: sltu        $at, $a2, $v0
    ctx->r1 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x8008BAFC: bnel        $at, $zero, L_8008BAEC
    if (ctx->r1 != 0) {
        // 0x8008BB00: lh          $t6, 0x4($a2)
        ctx->r14 = MEM_H(ctx->r6, 0X4);
            goto L_8008BAEC;
    }
    goto skip_0;
    // 0x8008BB00: lh          $t6, 0x4($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X4);
    skip_0:
L_8008BB04:
    // 0x8008BB04: bne         $a2, $v0, L_8008BB84
    if (ctx->r6 != ctx->r2) {
        // 0x8008BB08: subu        $v1, $v0, $a3
        ctx->r3 = SUB32(ctx->r2, ctx->r7);
            goto L_8008BB84;
    }
    // 0x8008BB08: subu        $v1, $v0, $a3
    ctx->r3 = SUB32(ctx->r2, ctx->r7);
    // 0x8008BB0C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8008BB10: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x8008BB14: mflo        $t7
    ctx->r15 = lo;
    // 0x8008BB18: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x8008BB1C: subu        $t0, $t0, $t7
    ctx->r8 = SUB32(ctx->r8, ctx->r15);
    // 0x8008BB20: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x8008BB24: addiu       $a1, $t0, 0x3C
    ctx->r5 = ADD32(ctx->r8, 0X3C);
    // 0x8008BB28: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8008BB2C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x8008BB30: jal         0x8001B208
    // 0x8008BB34: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8001B208(rdram, ctx);
        goto after_0;
    // 0x8008BB34: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x8008BB38: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x8008BB3C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8008BB40: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8008BB44: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x8008BB48: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x8008BB4C: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x8008BB50: addiu       $t1, $t1, 0x6CC0
    ctx->r9 = ADD32(ctx->r9, 0X6CC0);
    // 0x8008BB54: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8008BB58: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x8008BB5C: addiu       $t2, $t9, 0x3C
    ctx->r10 = ADD32(ctx->r25, 0X3C);
    // 0x8008BB60: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008BB64: sw          $t2, 0x6CC4($at)
    MEM_W(0X6CC4, ctx->r1) = ctx->r10;
    // 0x8008BB68: addu        $a0, $t0, $v0
    ctx->r4 = ADD32(ctx->r8, ctx->r2);
    // 0x8008BB6C: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x8008BB70: jal         0x8008BBC0
    // 0x8008BB74: lw          $a1, 0x4($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X4);
    func_8008BBC0(rdram, ctx);
        goto after_1;
    // 0x8008BB74: lw          $a1, 0x4($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X4);
    after_1:
    // 0x8008BB78: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8008BB7C: addiu       $t1, $t1, 0x6CC0
    ctx->r9 = ADD32(ctx->r9, 0X6CC0);
    // 0x8008BB80: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
L_8008BB84:
    // 0x8008BB84: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8008BB88: sh          $t3, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r11;
    // 0x8008BB8C: lw          $t4, 0x0($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X0);
    // 0x8008BB90: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8008BB94: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8008BB98: subu        $t5, $a2, $t4
    ctx->r13 = SUB32(ctx->r6, ctx->r12);
    // 0x8008BB9C: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x8008BBA0: mflo        $t6
    ctx->r14 = lo;
    // 0x8008BBA4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8008BBA8: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8008BBAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008BBB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8008BBB4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8008BBB8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008BBC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BBC0: sltu        $at, $a0, $a1
    ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x8008BBC4: beq         $at, $zero, L_8008BBE8
    if (ctx->r1 == 0) {
        // 0x8008BBC8: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8008BBE8;
    }
    // 0x8008BBC8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8008BBCC:
    // 0x8008BBCC: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x8008BBD0: lh          $t6, 0x4($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X4);
    // 0x8008BBD4: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x8008BBD8: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x8008BBDC: sh          $zero, -0x6($v0)
    MEM_H(-0X6, ctx->r2) = 0;
    // 0x8008BBE0: bne         $at, $zero, L_8008BBCC
    if (ctx->r1 != 0) {
        // 0x8008BBE4: sh          $t6, -0x4($v0)
        MEM_H(-0X4, ctx->r2) = ctx->r14;
            goto L_8008BBCC;
    }
    // 0x8008BBE4: sh          $t6, -0x4($v0)
    MEM_H(-0X4, ctx->r2) = ctx->r14;
L_8008BBE8:
    // 0x8008BBE8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008BBF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BBF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008BBF4: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x8008BBF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008BBFC: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8008BC00: lh          $a0, 0xA($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XA);
    // 0x8008BC04: jal         0x8008B9C4
    // 0x8008BC08: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8008B9C4(rdram, ctx);
        goto after_0;
    // 0x8008BC08: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8008BC0C: bnel        $v0, $zero, L_8008BC20
    if (ctx->r2 != 0) {
        // 0x8008BC10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008BC20;
    }
    goto skip_0;
    // 0x8008BC10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8008BC14: jal         0x800DFAD0
    // 0x8008BC18: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800DFAD0(rdram, ctx);
        goto after_1;
    // 0x8008BC18: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x8008BC1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008BC20:
    // 0x8008BC20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008BC24: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008BC2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BC2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008BC30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008BC34: jal         0x8008BBF0
    // 0x8008BC38: lbu         $a1, 0x8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X8);
    func_8008BBF0(rdram, ctx);
        goto after_0;
    // 0x8008BC38: lbu         $a1, 0x8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X8);
    after_0:
    // 0x8008BC3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008BC40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008BC44: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008BC4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BC4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008BC50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008BC54: jal         0x8008BBF0
    // 0x8008BC58: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008BBF0(rdram, ctx);
        goto after_0;
    // 0x8008BC58: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8008BC5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008BC60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008BC64: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008BC6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BC6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008BC70: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x8008BC74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008BC78: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8008BC7C: jal         0x8008B90C
    // 0x8008BC80: lh          $a0, 0xA($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XA);
    func_8008B90C(rdram, ctx);
        goto after_0;
    // 0x8008BC80: lh          $a0, 0xA($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XA);
    after_0:
    // 0x8008BC84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008BC88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008BC8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008BC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BC94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008BC98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008BC9C: jal         0x8008BC6C
    // 0x8008BCA0: lbu         $a1, 0x8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X8);
    func_8008BC6C(rdram, ctx);
        goto after_0;
    // 0x8008BCA0: lbu         $a1, 0x8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X8);
    after_0:
    // 0x8008BCA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008BCA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008BCAC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008BCB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BCB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008BCB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008BCBC: lbu         $t6, 0x8($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X8);
    // 0x8008BCC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008BCC4: beq         $t6, $zero, L_8008BCD4
    if (ctx->r14 == 0) {
        // 0x8008BCC8: nop
    
            goto L_8008BCD4;
    }
    // 0x8008BCC8: nop

    // 0x8008BCCC: b           L_8008BCD4
    // 0x8008BCD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_8008BCD4;
    // 0x8008BCD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8008BCD4:
    // 0x8008BCD4: jal         0x8008BC6C
    // 0x8008BCD8: nop

    func_8008BC6C(rdram, ctx);
        goto after_0;
    // 0x8008BCD8: nop

    after_0:
    // 0x8008BCDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008BCE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008BCE4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008BCEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BCEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008BCF0: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x8008BCF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008BCF8: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8008BCFC: lh          $a0, 0xA($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XA);
    // 0x8008BD00: jal         0x8008B9C4
    // 0x8008BD04: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8008B9C4(rdram, ctx);
        goto after_0;
    // 0x8008BD04: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8008BD08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008BD0C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8008BD10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008BD14: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008BD1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BD1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008BD20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008BD24: jal         0x8008BCEC
    // 0x8008BD28: lbu         $a1, 0x8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X8);
    func_8008BCEC(rdram, ctx);
        goto after_0;
    // 0x8008BD28: lbu         $a1, 0x8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X8);
    after_0:
    // 0x8008BD2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008BD30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008BD34: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008BD3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BD3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008BD40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008BD44: lbu         $t6, 0x8($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X8);
    // 0x8008BD48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008BD4C: beq         $t6, $zero, L_8008BD5C
    if (ctx->r14 == 0) {
        // 0x8008BD50: nop
    
            goto L_8008BD5C;
    }
    // 0x8008BD50: nop

    // 0x8008BD54: b           L_8008BD5C
    // 0x8008BD58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_8008BD5C;
    // 0x8008BD58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8008BD5C:
    // 0x8008BD5C: jal         0x8008BCEC
    // 0x8008BD60: nop

    func_8008BCEC(rdram, ctx);
        goto after_0;
    // 0x8008BD60: nop

    after_0:
    // 0x8008BD64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008BD68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008BD6C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008BD74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BD74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008BD78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008BD7C: jal         0x8008BCEC
    // 0x8008BD80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008BCEC(rdram, ctx);
        goto after_0;
    // 0x8008BD80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8008BD84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008BD88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008BD8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008BD94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BD94: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008BD98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008BD9C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8008BDA0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8008BDA4: lbu         $t6, 0x1B($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1B);
    // 0x8008BDA8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008BDAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008BDB0: bnel        $t6, $at, L_8008BDE8
    if (ctx->r14 != ctx->r1) {
        // 0x8008BDB4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8008BDE8;
    }
    goto skip_0;
    // 0x8008BDB4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x8008BDB8: jal         0x8008BC94
    // 0x8008BDBC: nop

    func_8008BC94(rdram, ctx);
        goto after_0;
    // 0x8008BDBC: nop

    after_0:
    // 0x8008BDC0: beql        $v0, $zero, L_8008BDE8
    if (ctx->r2 == 0) {
        // 0x8008BDC4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8008BDE8;
    }
    goto skip_1;
    // 0x8008BDC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_1:
    // 0x8008BDC8: lbu         $t7, 0x8($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X8);
    // 0x8008BDCC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8008BDD0: beql        $t7, $zero, L_8008BDE4
    if (ctx->r15 == 0) {
        // 0x8008BDD4: sb          $t8, 0x8($s0)
        MEM_B(0X8, ctx->r16) = ctx->r24;
            goto L_8008BDE4;
    }
    goto skip_2;
    // 0x8008BDD4: sb          $t8, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r24;
    skip_2:
    // 0x8008BDD8: b           L_8008BDE4
    // 0x8008BDDC: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
        goto L_8008BDE4;
    // 0x8008BDDC: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x8008BDE0: sb          $t8, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r24;
L_8008BDE4:
    // 0x8008BDE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8008BDE8:
    // 0x8008BDE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8008BDEC: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8008BDF0: sb          $zero, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = 0;
    // 0x8008BDF4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8008BDF8: nop

    // 0x8008BDFC: bc1f        L_8008BE78
    if (!c1cs) {
        // 0x8008BE00: nop
    
            goto L_8008BE78;
    }
    // 0x8008BE00: nop

    // 0x8008BE04: jal         0x8008BCB4
    // 0x8008BE08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008BCB4(rdram, ctx);
        goto after_1;
    // 0x8008BE08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8008BE0C: beq         $v0, $zero, L_8008BE78
    if (ctx->r2 == 0) {
        // 0x8008BE10: nop
    
            goto L_8008BE78;
    }
    // 0x8008BE10: nop

    // 0x8008BE14: jal         0x800D674C
    // 0x8008BE18: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    func_800D674C(rdram, ctx);
        goto after_2;
    // 0x8008BE18: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    after_2:
    // 0x8008BE1C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8008BE20: jal         0x8008BD1C
    // 0x8008BE24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008BD1C(rdram, ctx);
        goto after_3;
    // 0x8008BE24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8008BE28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8008BE2C: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x8008BE30: lbu         $a2, 0x1E($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1E);
    // 0x8008BE34: jal         0x800E0170
    // 0x8008BE38: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_800E0170(rdram, ctx);
        goto after_4;
    // 0x8008BE38: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_4:
    // 0x8008BE3C: jal         0x8008BD1C
    // 0x8008BE40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008BD1C(rdram, ctx);
        goto after_5;
    // 0x8008BE40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8008BE44: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8008BE48: jal         0x8008BD3C
    // 0x8008BE4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008BD3C(rdram, ctx);
        goto after_6;
    // 0x8008BE4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8008BE50: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8008BE54: jal         0x8008BD1C
    // 0x8008BE58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008BD1C(rdram, ctx);
        goto after_7;
    // 0x8008BE58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8008BE5C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8008BE60: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8008BE64: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8008BE68: jal         0x800DFD64
    // 0x8008BE6C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    func_800DFD64(rdram, ctx);
        goto after_8;
    // 0x8008BE6C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_8:
    // 0x8008BE70: b           L_8008BEA4
    // 0x8008BE74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8008BEA4;
    // 0x8008BE74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8008BE78:
    // 0x8008BE78: jal         0x800D674C
    // 0x8008BE7C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    func_800D674C(rdram, ctx);
        goto after_9;
    // 0x8008BE7C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    after_9:
    // 0x8008BE80: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8008BE84: jal         0x8008BD1C
    // 0x8008BE88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008BD1C(rdram, ctx);
        goto after_10;
    // 0x8008BE88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8008BE8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8008BE90: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x8008BE94: lbu         $a2, 0x1E($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1E);
    // 0x8008BE98: jal         0x800E0170
    // 0x8008BE9C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_800E0170(rdram, ctx);
        goto after_11;
    // 0x8008BE9C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_11:
    // 0x8008BEA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8008BEA4:
    // 0x8008BEA4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8008BEA8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8008BEAC: jr          $ra
    // 0x8008BEB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8008BEB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8008BEB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BEB4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008BEB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008BEBC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008BEC0: lbu         $v0, 0x1B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1B);
    // 0x8008BEC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008BEC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008BECC: bnel        $v0, $at, L_8008BF20
    if (ctx->r2 != ctx->r1) {
        // 0x8008BED0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8008BF20;
    }
    goto skip_0;
    // 0x8008BED0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_0:
    // 0x8008BED4: lbu         $t6, 0x1D($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1D);
    // 0x8008BED8: bnel        $t6, $zero, L_8008BF20
    if (ctx->r14 != 0) {
        // 0x8008BEDC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8008BF20;
    }
    goto skip_1;
    // 0x8008BEDC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_1:
    // 0x8008BEE0: jal         0x8008BC94
    // 0x8008BEE4: nop

    func_8008BC94(rdram, ctx);
        goto after_0;
    // 0x8008BEE4: nop

    after_0:
    // 0x8008BEE8: beql        $v0, $zero, L_8008BF34
    if (ctx->r2 == 0) {
        // 0x8008BEEC: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8008BF34;
    }
    goto skip_2;
    // 0x8008BEEC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_2:
    // 0x8008BEF0: lbu         $t7, 0x8($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X8);
    // 0x8008BEF4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8008BEF8: beql        $t7, $zero, L_8008BF0C
    if (ctx->r15 == 0) {
        // 0x8008BEFC: sb          $t8, 0x8($s0)
        MEM_B(0X8, ctx->r16) = ctx->r24;
            goto L_8008BF0C;
    }
    goto skip_3;
    // 0x8008BEFC: sb          $t8, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r24;
    skip_3:
    // 0x8008BF00: b           L_8008BF0C
    // 0x8008BF04: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
        goto L_8008BF0C;
    // 0x8008BF04: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x8008BF08: sb          $t8, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r24;
L_8008BF0C:
    // 0x8008BF0C: jal         0x8008BC4C
    // 0x8008BF10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008BC4C(rdram, ctx);
        goto after_1;
    // 0x8008BF10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8008BF14: b           L_8008BF34
    // 0x8008BF18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
        goto L_8008BF34;
    // 0x8008BF18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8008BF1C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8008BF20:
    // 0x8008BF20: bnel        $v0, $at, L_8008BF34
    if (ctx->r2 != ctx->r1) {
        // 0x8008BF24: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8008BF34;
    }
    goto skip_4;
    // 0x8008BF24: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_4:
    // 0x8008BF28: jal         0x8008BC2C
    // 0x8008BF2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008BC2C(rdram, ctx);
        goto after_2;
    // 0x8008BF2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8008BF30: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8008BF34:
    // 0x8008BF34: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8008BF38: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8008BF3C: sb          $zero, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = 0;
    // 0x8008BF40: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8008BF44: nop

    // 0x8008BF48: bc1t        L_8008BF5C
    if (c1cs) {
        // 0x8008BF4C: nop
    
            goto L_8008BF5C;
    }
    // 0x8008BF4C: nop

    // 0x8008BF50: lbu         $t9, 0x1A($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1A);
    // 0x8008BF54: beq         $t9, $zero, L_8008BFE0
    if (ctx->r25 == 0) {
        // 0x8008BF58: nop
    
            goto L_8008BFE0;
    }
    // 0x8008BF58: nop

L_8008BF5C:
    // 0x8008BF5C: jal         0x8008BCB4
    // 0x8008BF60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008BCB4(rdram, ctx);
        goto after_3;
    // 0x8008BF60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8008BF64: beq         $v0, $zero, L_8008BFE0
    if (ctx->r2 == 0) {
        // 0x8008BF68: nop
    
            goto L_8008BFE0;
    }
    // 0x8008BF68: nop

    // 0x8008BF6C: lbu         $t0, 0x1D($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1D);
    // 0x8008BF70: bne         $t0, $zero, L_8008BFE0
    if (ctx->r8 != 0) {
        // 0x8008BF74: nop
    
            goto L_8008BFE0;
    }
    // 0x8008BF74: nop

    // 0x8008BF78: sb          $zero, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = 0;
    // 0x8008BF7C: jal         0x800D674C
    // 0x8008BF80: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    func_800D674C(rdram, ctx);
        goto after_4;
    // 0x8008BF80: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    after_4:
    // 0x8008BF84: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8008BF88: jal         0x8008BD74
    // 0x8008BF8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008BD74(rdram, ctx);
        goto after_5;
    // 0x8008BF8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8008BF90: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8008BF94: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x8008BF98: lbu         $a2, 0x1E($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1E);
    // 0x8008BF9C: jal         0x800E0170
    // 0x8008BFA0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_800E0170(rdram, ctx);
        goto after_6;
    // 0x8008BFA0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_6:
    // 0x8008BFA4: jal         0x8008BD1C
    // 0x8008BFA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008BD1C(rdram, ctx);
        goto after_7;
    // 0x8008BFA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8008BFAC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8008BFB0: jal         0x8008BD3C
    // 0x8008BFB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008BD3C(rdram, ctx);
        goto after_8;
    // 0x8008BFB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8008BFB8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8008BFBC: jal         0x8008BD74
    // 0x8008BFC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008BD74(rdram, ctx);
        goto after_9;
    // 0x8008BFC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8008BFC4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8008BFC8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8008BFCC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8008BFD0: jal         0x800DFD64
    // 0x8008BFD4: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    func_800DFD64(rdram, ctx);
        goto after_10;
    // 0x8008BFD4: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_10:
    // 0x8008BFD8: b           L_8008C028
    // 0x8008BFDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8008C028;
    // 0x8008BFDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8008BFE0:
    // 0x8008BFE0: jal         0x800D674C
    // 0x8008BFE4: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    func_800D674C(rdram, ctx);
        goto after_11;
    // 0x8008BFE4: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    after_11:
    // 0x8008BFE8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8008BFEC: jal         0x8008BD1C
    // 0x8008BFF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008BD1C(rdram, ctx);
        goto after_12;
    // 0x8008BFF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8008BFF4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8008BFF8: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x8008BFFC: lbu         $a2, 0x1E($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1E);
    // 0x8008C000: jal         0x800E0170
    // 0x8008C004: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_800E0170(rdram, ctx);
        goto after_13;
    // 0x8008C004: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_13:
    // 0x8008C008: lbu         $t1, 0x1D($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1D);
    // 0x8008C00C: beql        $t1, $zero, L_8008C028
    if (ctx->r9 == 0) {
        // 0x8008C010: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8008C028;
    }
    goto skip_5;
    // 0x8008C010: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x8008C014: lh          $t2, 0x18($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X18);
    // 0x8008C018: beql        $t2, $zero, L_8008C028
    if (ctx->r10 == 0) {
        // 0x8008C01C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8008C028;
    }
    goto skip_6;
    // 0x8008C01C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_6:
    // 0x8008C020: sb          $zero, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = 0;
    // 0x8008C024: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8008C028:
    // 0x8008C028: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008C02C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8008C030: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008C038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C038: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008C03C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008C040: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008C044: lbu         $t6, 0x1C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1C);
    // 0x8008C048: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008C04C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008C050: bne         $t6, $at, L_8008C068
    if (ctx->r14 != ctx->r1) {
        // 0x8008C054: nop
    
            goto L_8008C068;
    }
    // 0x8008C054: nop

    // 0x8008C058: jal         0x8008BEB4
    // 0x8008C05C: nop

    func_8008BEB4(rdram, ctx);
        goto after_0;
    // 0x8008C05C: nop

    after_0:
    // 0x8008C060: b           L_8008C074
    // 0x8008C064: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
        goto L_8008C074;
    // 0x8008C064: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
L_8008C068:
    // 0x8008C068: jal         0x8008BD94
    // 0x8008C06C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008BD94(rdram, ctx);
        goto after_1;
    // 0x8008C06C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8008C070: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
L_8008C074:
    // 0x8008C074: beql        $t7, $zero, L_8008C09C
    if (ctx->r15 == 0) {
        // 0x8008C078: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8008C09C;
    }
    goto skip_0;
    // 0x8008C078: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8008C07C: jal         0x8008BD1C
    // 0x8008C080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008BD1C(rdram, ctx);
        goto after_2;
    // 0x8008C080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8008C084: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8008C088: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008C08C: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x8008C090: jalr        $t9
    // 0x8008C094: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x8008C094: nop

    after_3:
    // 0x8008C098: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8008C09C:
    // 0x8008C09C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008C0A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008C0A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008C0AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C0AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8008C0B0: jr          $ra
    // 0x8008C0B4: sb          $t6, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r14;
    return;
    // 0x8008C0B4: sb          $t6, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_8008C0B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C0B8: jr          $ra
    // 0x8008C0BC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    return;
    // 0x8008C0BC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
;}
RECOMP_FUNC void func_8008C0C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C0C0: jr          $ra
    // 0x8008C0C4: lh          $v0, 0x18($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X18);
    return;
    // 0x8008C0C4: lh          $v0, 0x18($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X18);
;}
RECOMP_FUNC void func_8008C0C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C0C8: jr          $ra
    // 0x8008C0CC: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    return;
    // 0x8008C0CC: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
;}
RECOMP_FUNC void func_8008C0D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C0D0: jr          $ra
    // 0x8008C0D4: lwc1        $f0, 0x14($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14);
    return;
    // 0x8008C0D4: lwc1        $f0, 0x14($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14);
;}
RECOMP_FUNC void func_8008C0D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C0D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008C0DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008C0E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008C0E4: jal         0x8008B954
    // 0x8008C0E8: lh          $a0, 0xA($a0)
    ctx->r4 = MEM_H(ctx->r4, 0XA);
    func_8008B954(rdram, ctx);
        goto after_0;
    // 0x8008C0E8: lh          $a0, 0xA($a0)
    ctx->r4 = MEM_H(ctx->r4, 0XA);
    after_0:
    // 0x8008C0EC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8008C0F0: jal         0x8008B954
    // 0x8008C0F4: lh          $a0, 0xC($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XC);
    func_8008B954(rdram, ctx);
        goto after_1;
    // 0x8008C0F4: lh          $a0, 0xC($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XC);
    after_1:
    // 0x8008C0F8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8008C0FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008C100: lbu         $t8, 0x1C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1C);
    // 0x8008C104: bnel        $t8, $at, L_8008C118
    if (ctx->r24 != ctx->r1) {
        // 0x8008C108: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008C118;
    }
    goto skip_0;
    // 0x8008C108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8008C10C: jal         0x8008B954
    // 0x8008C110: lh          $a0, 0xE($v0)
    ctx->r4 = MEM_H(ctx->r2, 0XE);
    func_8008B954(rdram, ctx);
        goto after_2;
    // 0x8008C110: lh          $a0, 0xE($v0)
    ctx->r4 = MEM_H(ctx->r2, 0XE);
    after_2:
    // 0x8008C114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008C118:
    // 0x8008C118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008C11C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008C124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C124: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008C128: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008C12C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008C130: sb          $a1, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = ctx->r5;
    // 0x8008C134: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008C138: jal         0x8008C1B8
    // 0x8008C13C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008C1B8(rdram, ctx);
        goto after_0;
    // 0x8008C13C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8008C140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008C144: jal         0x8008C1C0
    // 0x8008C148: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008C1C0(rdram, ctx);
        goto after_1;
    // 0x8008C148: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x8008C14C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008C150: jal         0x8008C1E4
    // 0x8008C154: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008C1E4(rdram, ctx);
        goto after_2;
    // 0x8008C154: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_2:
    // 0x8008C158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008C15C: jal         0x8008C1D4
    // 0x8008C160: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008C1D4(rdram, ctx);
        goto after_3;
    // 0x8008C160: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8008C164: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8008C168: sb          $zero, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = 0;
    // 0x8008C16C: sb          $t6, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r14;
    // 0x8008C170: sb          $zero, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = 0;
    // 0x8008C174: jal         0x8008B8E0
    // 0x8008C178: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    func_8008B8E0(rdram, ctx);
        goto after_4;
    // 0x8008C178: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    after_4:
    // 0x8008C17C: jal         0x8008B8E0
    // 0x8008C180: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    func_8008B8E0(rdram, ctx);
        goto after_5;
    // 0x8008C180: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    after_5:
    // 0x8008C184: lbu         $t7, 0x1C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1C);
    // 0x8008C188: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008C18C: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8008C190: bnel        $t7, $at, L_8008C1A8
    if (ctx->r15 != ctx->r1) {
        // 0x8008C194: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8008C1A8;
    }
    goto skip_0;
    // 0x8008C194: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8008C198: jal         0x8008B8E0
    // 0x8008C19C: nop

    func_8008B8E0(rdram, ctx);
        goto after_6;
    // 0x8008C19C: nop

    after_6:
    // 0x8008C1A0: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x8008C1A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8008C1A8:
    // 0x8008C1A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008C1AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008C1B0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008C1B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C1B8: jr          $ra
    // 0x8008C1BC: sh          $a1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r5;
    return;
    // 0x8008C1BC: sh          $a1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_8008C1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C1C0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8008C1C4: jr          $ra
    // 0x8008C1C8: swc1        $f12, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x8008C1C8: swc1        $f12, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8008C1CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C1CC: jr          $ra
    // 0x8008C1D0: sb          $a1, 0x1E($a0)
    MEM_B(0X1E, ctx->r4) = ctx->r5;
    return;
    // 0x8008C1D0: sb          $a1, 0x1E($a0)
    MEM_B(0X1E, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_8008C1D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C1D4: jr          $ra
    // 0x8008C1D8: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    return;
    // 0x8008C1D8: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_8008C1DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C1DC: jr          $ra
    // 0x8008C1E0: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    return;
    // 0x8008C1E0: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_8008C1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C1E4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8008C1E8: jr          $ra
    // 0x8008C1EC: swc1        $f12, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x8008C1EC: swc1        $f12, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8008C1F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C1F0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8008C1F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8008C1F8: jr          $ra
    // 0x8008C1FC: sb          $t6, 0x1A($a0)
    MEM_B(0X1A, ctx->r4) = ctx->r14;
    return;
    // 0x8008C1FC: sb          $t6, 0x1A($a0)
    MEM_B(0X1A, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_8008C200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C200: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008C204: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008C208: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008C20C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8008C210: jal         0x8008BD1C
    // 0x8008C214: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8008BD1C(rdram, ctx);
        goto after_0;
    // 0x8008C214: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x8008C218: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C21C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C220: jal         0x800AE1E8
    // 0x8008C224: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_800AE1E8(rdram, ctx);
        goto after_1;
    // 0x8008C224: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_1:
    // 0x8008C228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008C22C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008C230: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008C238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C238: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008C23C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008C240: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008C244: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8008C248: jal         0x8008BD1C
    // 0x8008C24C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8008BD1C(rdram, ctx);
        goto after_0;
    // 0x8008C24C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x8008C250: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C254: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C258: jal         0x800AE290
    // 0x8008C25C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_800AE290(rdram, ctx);
        goto after_1;
    // 0x8008C25C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_1:
    // 0x8008C260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008C264: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008C268: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008C270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C270: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8008C274: jr          $ra
    // 0x8008C278: sb          $t6, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r14;
    return;
    // 0x8008C278: sb          $t6, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_8008C27C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C27C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008C280: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008C284: jal         0x8008BD1C
    // 0x8008C288: nop

    func_8008BD1C(rdram, ctx);
        goto after_0;
    // 0x8008C288: nop

    after_0:
    // 0x8008C28C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008C290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008C294: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008C2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C2A0: jr          $ra
    // 0x8008C2A4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    return;
    // 0x8008C2A4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
;}
RECOMP_FUNC void func_8008C2A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C2A8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8008C2AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8008C2B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8008C2B4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8008C2B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008C2BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8008C2C0: lbu         $t6, 0x38($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X38);
    // 0x8008C2C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008C2C8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8008C2CC: beql        $t6, $zero, L_8008C2E0
    if (ctx->r14 == 0) {
        // 0x8008C2D0: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_8008C2E0;
    }
    goto skip_0;
    // 0x8008C2D0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_0:
    // 0x8008C2D4: b           L_8008C2E4
    // 0x8008C2D8: lwc1        $f2, 0x34($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X34);
        goto L_8008C2E4;
    // 0x8008C2D8: lwc1        $f2, 0x34($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8008C2DC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_8008C2E0:
    // 0x8008C2E0: nop

L_8008C2E4:
    // 0x8008C2E4: jal         0x8009BB24
    // 0x8008C2E8: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    func_8009BB24(rdram, ctx);
        goto after_0;
    // 0x8008C2E8: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x8008C2EC: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8008C2F0: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8008C2F4: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8008C2F8: nop

    // 0x8008C2FC: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8008C300: jal         0x8002DCA0
    // 0x8008C304: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_1;
    // 0x8008C304: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x8008C308: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8008C30C: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8008C310: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8008C314: lwc1        $f8, 0x2C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x8008C318: lwc1        $f16, 0x30($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8008C31C: lwc1        $f14, 0x24($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8008C320: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8008C324: lw          $a2, 0x28($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X28);
    // 0x8008C328: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x8008C32C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8008C330: jal         0x800F1198
    // 0x8008C334: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_800F1198(rdram, ctx);
        goto after_2;
    // 0x8008C334: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x8008C338: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8008C33C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8008C340: lwc1        $f14, 0x1C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8008C344: jal         0x800F0D50
    // 0x8008C348: lw          $a2, 0x20($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X20);
    func_800F0D50(rdram, ctx);
        goto after_3;
    // 0x8008C348: lw          $a2, 0x20($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X20);
    after_3:
    // 0x8008C34C: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x8008C350: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8008C354: jal         0x8008B1BC
    // 0x8008C358: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    func_8008B1BC(rdram, ctx);
        goto after_4;
    // 0x8008C358: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_4:
    // 0x8008C35C: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8008C360: jal         0x8008ADE4
    // 0x8008C364: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_8008ADE4(rdram, ctx);
        goto after_5;
    // 0x8008C364: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_5:
    // 0x8008C368: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8008C36C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8008C370: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8008C374: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008C37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C37C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008C380: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8008C384: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8008C388: jal         0x8009BB50
    // 0x8008C38C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009BB50(rdram, ctx);
        goto after_0;
    // 0x8008C38C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8008C390: jal         0x800F2100
    // 0x8008C394: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_1;
    // 0x8008C394: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x8008C398: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8008C39C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8008C3A0: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8008C3A4: lwc1        $f14, 0x24($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8008C3A8: lw          $a2, 0x28($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X28);
    // 0x8008C3AC: lw          $a3, 0x2C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X2C);
    // 0x8008C3B0: jal         0x800F1198
    // 0x8008C3B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F1198(rdram, ctx);
        goto after_2;
    // 0x8008C3B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x8008C3B8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8008C3BC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8008C3C0: lwc1        $f14, 0x1C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8008C3C4: jal         0x800F0D50
    // 0x8008C3C8: lw          $a2, 0x20($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X20);
    func_800F0D50(rdram, ctx);
        goto after_3;
    // 0x8008C3C8: lw          $a2, 0x20($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X20);
    after_3:
    // 0x8008C3CC: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x8008C3D0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8008C3D4: jal         0x8008B1BC
    // 0x8008C3D8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_8008B1BC(rdram, ctx);
        goto after_4;
    // 0x8008C3D8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_4:
    // 0x8008C3DC: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x8008C3E0: jal         0x8008ADE4
    // 0x8008C3E4: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    func_8008ADE4(rdram, ctx);
        goto after_5;
    // 0x8008C3E4: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_5:
    // 0x8008C3E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8008C3EC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8008C3F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008C3F4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008C3FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C3FC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8008C400: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x8008C404: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8008C408: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x8008C40C: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x8008C410: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8008C414: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x8008C418: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x8008C41C: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x8008C420: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8008C424: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8008C428: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8008C42C: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8008C430: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8008C434: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8008C438: mtc1        $a1, $f22
    ctx->f22.u32l = ctx->r5;
    // 0x8008C43C: mtc1        $a3, $f24
    ctx->f24.u32l = ctx->r7;
    // 0x8008C440: mtc1        $a2, $f26
    ctx->f26.u32l = ctx->r6;
    // 0x8008C444: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8008C448: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8008C44C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8008C450: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8008C454: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
L_8008C458:
    // 0x8008C458: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x8008C45C: mov.s       $f14, $f30
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    ctx->f14.fl = ctx->f30.fl;
    // 0x8008C460: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008C464: div.s       $f0, $f6, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f28.fl);
    // 0x8008C468: add.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x8008C46C: jal         0x800F0F9C
    // 0x8008C470: add.s       $f12, $f8, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f22.fl;
    func_800F0F9C(rdram, ctx);
        goto after_0;
    // 0x8008C470: add.s       $f12, $f8, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f22.fl;
    after_0:
    // 0x8008C474: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8008C478: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8008C47C: nop

    // 0x8008C480: mul.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8008C484: jal         0x80013970
    // 0x8008C488: nop

    func_80013970(rdram, ctx);
        goto after_1;
    // 0x8008C488: nop

    after_1:
    // 0x8008C48C: mul.s       $f16, $f0, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8008C490: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8008C494: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8008C498: add.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f20.fl;
    // 0x8008C49C: mul.s       $f4, $f18, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x8008C4A0: add.s       $f6, $f4, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f26.fl;
    // 0x8008C4A4: bne         $s0, $s2, L_8008C458
    if (ctx->r16 != ctx->r18) {
        // 0x8008C4A8: swc1        $f6, -0x4($s1)
        MEM_W(-0X4, ctx->r17) = ctx->f6.u32l;
            goto L_8008C458;
    }
    // 0x8008C4A8: swc1        $f6, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->f6.u32l;
    // 0x8008C4AC: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8008C4B0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8008C4B4: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x8008C4B8: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x8008C4BC: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x8008C4C0: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x8008C4C4: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x8008C4C8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8008C4CC: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8008C4D0: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8008C4D4: jr          $ra
    // 0x8008C4D8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8008C4D8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8008C4DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C4DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8008C4E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008C4E4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8008C4E8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8008C4EC: jal         0x800F53D0
    // 0x8008C4F0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x8008C4F0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8008C4F4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8008C4F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008C4FC: jal         0x80098218
    // 0x8008C500: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_80098218(rdram, ctx);
        goto after_1;
    // 0x8008C500: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_1:
    // 0x8008C504: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8008C508: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8008C50C: lw          $v0, 0x4($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X4);
    // 0x8008C510: lh          $a1, 0xE($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XE);
    // 0x8008C514: jal         0x800DFC20
    // 0x8008C518: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
    func_800DFC20(rdram, ctx);
        goto after_2;
    // 0x8008C518: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
    after_2:
    // 0x8008C51C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8008C520: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x8008C524: lbu         $t9, 0xC($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XC);
    // 0x8008C528: beq         $t9, $zero, L_8008C550
    if (ctx->r25 == 0) {
        // 0x8008C52C: nop
    
            goto L_8008C550;
    }
    // 0x8008C52C: nop

    // 0x8008C530: jal         0x800EFD24
    // 0x8008C534: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_800EFD24(rdram, ctx);
        goto after_3;
    // 0x8008C534: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x8008C538: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8008C53C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8008C540: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x8008C544: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x8008C548: jal         0x800DFFA0
    // 0x8008C54C: lh          $a1, 0xE($t1)
    ctx->r5 = MEM_H(ctx->r9, 0XE);
    func_800DFFA0(rdram, ctx);
        goto after_4;
    // 0x8008C54C: lh          $a1, 0xE($t1)
    ctx->r5 = MEM_H(ctx->r9, 0XE);
    after_4:
L_8008C550:
    // 0x8008C550: jal         0x800A8258
    // 0x8008C554: nop

    func_800A8258(rdram, ctx);
        goto after_5;
    // 0x8008C554: nop

    after_5:
    // 0x8008C558: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8008C55C: lw          $t2, 0x6CD0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6CD0);
    // 0x8008C560: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8008C564: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8008C568: beq         $t3, $zero, L_8008C5A0
    if (ctx->r11 == 0) {
        // 0x8008C56C: addiu       $a0, $sp, 0x2C
        ctx->r4 = ADD32(ctx->r29, 0X2C);
            goto L_8008C5A0;
    }
    // 0x8008C56C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8008C570: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8008C574: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x8008C578: jal         0x8008C3FC
    // 0x8008C57C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_8008C3FC(rdram, ctx);
        goto after_6;
    // 0x8008C57C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_6:
    // 0x8008C580: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8008C584: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8008C588: jal         0x800DFF64
    // 0x8008C58C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_800DFF64(rdram, ctx);
        goto after_7;
    // 0x8008C58C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_7:
    // 0x8008C590: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8008C594: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8008C598: jal         0x800DFF64
    // 0x8008C59C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_800DFF64(rdram, ctx);
        goto after_8;
    // 0x8008C59C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_8:
L_8008C5A0:
    // 0x8008C5A0: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8008C5A4: lw          $t4, 0x6CD0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6CD0);
    // 0x8008C5A8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8008C5AC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8008C5B0: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x8008C5B4: beq         $t5, $zero, L_8008C5E4
    if (ctx->r13 == 0) {
        // 0x8008C5B8: lui         $a2, 0x4000
        ctx->r6 = S32(0X4000 << 16);
            goto L_8008C5E4;
    }
    // 0x8008C5B8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x8008C5BC: jal         0x8008C3FC
    // 0x8008C5C0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_8008C3FC(rdram, ctx);
        goto after_9;
    // 0x8008C5C0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_9:
    // 0x8008C5C4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8008C5C8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8008C5CC: jal         0x800DFF64
    // 0x8008C5D0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_800DFF64(rdram, ctx);
        goto after_10;
    // 0x8008C5D0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_10:
    // 0x8008C5D4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8008C5D8: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x8008C5DC: jal         0x800DFF64
    // 0x8008C5E0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_800DFF64(rdram, ctx);
        goto after_11;
    // 0x8008C5E0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_11:
L_8008C5E4:
    // 0x8008C5E4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8008C5E8: lw          $t6, 0x6CD0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6CD0);
    // 0x8008C5EC: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8008C5F0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8008C5F4: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8008C5F8: beq         $t7, $zero, L_8008C618
    if (ctx->r15 == 0) {
        // 0x8008C5FC: lui         $a2, 0x4000
        ctx->r6 = S32(0X4000 << 16);
            goto L_8008C618;
    }
    // 0x8008C5FC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x8008C600: jal         0x8008C3FC
    // 0x8008C604: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_8008C3FC(rdram, ctx);
        goto after_12;
    // 0x8008C604: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_12:
    // 0x8008C608: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8008C60C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x8008C610: jal         0x800DFF64
    // 0x8008C614: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_800DFF64(rdram, ctx);
        goto after_13;
    // 0x8008C614: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_13:
L_8008C618:
    // 0x8008C618: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8008C61C: lw          $t8, 0x6CD0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6CD0);
    // 0x8008C620: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8008C624: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8008C628: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x8008C62C: beq         $t9, $zero, L_8008C650
    if (ctx->r25 == 0) {
        // 0x8008C630: lui         $a2, 0x3E4C
        ctx->r6 = S32(0X3E4C << 16);
            goto L_8008C650;
    }
    // 0x8008C630: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x8008C634: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8008C638: jal         0x8008C3FC
    // 0x8008C63C: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    func_8008C3FC(rdram, ctx);
        goto after_14;
    // 0x8008C63C: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    after_14:
    // 0x8008C640: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8008C644: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x8008C648: jal         0x800DFF64
    // 0x8008C64C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_800DFF64(rdram, ctx);
        goto after_15;
    // 0x8008C64C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_15:
L_8008C650:
    // 0x8008C650: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8008C654: lw          $t0, 0x6CD0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6CD0);
    // 0x8008C658: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8008C65C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008C660: andi        $t1, $t0, 0x10
    ctx->r9 = ctx->r8 & 0X10;
    // 0x8008C664: beq         $t1, $zero, L_8008C674
    if (ctx->r9 == 0) {
        // 0x8008C668: lui         $a2, 0x8011
        ctx->r6 = S32(0X8011 << 16);
            goto L_8008C674;
    }
    // 0x8008C668: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8008C66C: jal         0x800DFFA0
    // 0x8008C670: addiu       $a2, $a2, 0x7C70
    ctx->r6 = ADD32(ctx->r6, 0X7C70);
    func_800DFFA0(rdram, ctx);
        goto after_16;
    // 0x8008C670: addiu       $a2, $a2, 0x7C70
    ctx->r6 = ADD32(ctx->r6, 0X7C70);
    after_16:
L_8008C674:
    // 0x8008C674: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8008C678: lw          $t2, 0x6CD0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6CD0);
    // 0x8008C67C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8008C680: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8008C684: andi        $t3, $t2, 0x20
    ctx->r11 = ctx->r10 & 0X20;
    // 0x8008C688: beq         $t3, $zero, L_8008C6A8
    if (ctx->r11 == 0) {
        // 0x8008C68C: lui         $a2, 0x4000
        ctx->r6 = S32(0X4000 << 16);
            goto L_8008C6A8;
    }
    // 0x8008C68C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x8008C690: jal         0x8008C3FC
    // 0x8008C694: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_8008C3FC(rdram, ctx);
        goto after_17;
    // 0x8008C694: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_17:
    // 0x8008C698: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8008C69C: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    // 0x8008C6A0: jal         0x800DFF64
    // 0x8008C6A4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_800DFF64(rdram, ctx);
        goto after_18;
    // 0x8008C6A4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_18:
L_8008C6A8:
    // 0x8008C6A8: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8008C6AC: lw          $t4, 0x6CD0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6CD0);
    // 0x8008C6B0: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8008C6B4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8008C6B8: andi        $t5, $t4, 0x40
    ctx->r13 = ctx->r12 & 0X40;
    // 0x8008C6BC: beq         $t5, $zero, L_8008C6EC
    if (ctx->r13 == 0) {
        // 0x8008C6C0: lui         $a2, 0x4000
        ctx->r6 = S32(0X4000 << 16);
            goto L_8008C6EC;
    }
    // 0x8008C6C0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x8008C6C4: jal         0x8008C3FC
    // 0x8008C6C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_8008C3FC(rdram, ctx);
        goto after_19;
    // 0x8008C6C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_19:
    // 0x8008C6CC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8008C6D0: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x8008C6D4: jal         0x800DFF64
    // 0x8008C6D8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_800DFF64(rdram, ctx);
        goto after_20;
    // 0x8008C6D8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_20:
    // 0x8008C6DC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8008C6E0: addiu       $a1, $zero, 0x67
    ctx->r5 = ADD32(0, 0X67);
    // 0x8008C6E4: jal         0x800DFF64
    // 0x8008C6E8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_800DFF64(rdram, ctx);
        goto after_21;
    // 0x8008C6E8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_21:
L_8008C6EC:
    // 0x8008C6EC: jal         0x800A4C88
    // 0x8008C6F0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800A4C88(rdram, ctx);
        goto after_22;
    // 0x8008C6F0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_22:
    // 0x8008C6F4: jal         0x8010FFD8
    // 0x8008C6F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8010FFD8(rdram, ctx);
        goto after_23;
    // 0x8008C6F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_23:
    // 0x8008C6FC: beq         $v0, $zero, L_8008C734
    if (ctx->r2 == 0) {
        // 0x8008C700: addiu       $a0, $sp, 0x2C
        ctx->r4 = ADD32(ctx->r29, 0X2C);
            goto L_8008C734;
    }
    // 0x8008C700: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8008C704: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x8008C708: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x8008C70C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x8008C710: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x8008C714: jal         0x8008C3FC
    // 0x8008C718: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8008C3FC(rdram, ctx);
        goto after_24;
    // 0x8008C718: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_24:
    // 0x8008C71C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8008C720: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8008C724: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x8008C728: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8008C72C: jal         0x800DFF64
    // 0x8008C730: lh          $a1, 0xE($t7)
    ctx->r5 = MEM_H(ctx->r15, 0XE);
    func_800DFF64(rdram, ctx);
        goto after_25;
    // 0x8008C730: lh          $a1, 0xE($t7)
    ctx->r5 = MEM_H(ctx->r15, 0XE);
    after_25:
L_8008C734:
    // 0x8008C734: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8008C738: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8008C73C: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8008C740: lw          $v0, 0x4($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X4);
    // 0x8008C744: beql        $v0, $zero, L_8008C758
    if (ctx->r2 == 0) {
        // 0x8008C748: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008C758;
    }
    goto skip_0;
    // 0x8008C748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8008C74C: jalr        $v0
    // 0x8008C750: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_26;
    // 0x8008C750: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_26:
    // 0x8008C754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008C758:
    // 0x8008C758: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8008C75C: jr          $ra
    // 0x8008C760: nop

    return;
    // 0x8008C760: nop

;}
RECOMP_FUNC void func_8008C764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C764: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008C768: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8008C76C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8008C770: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008C774: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008C778: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8008C77C: jal         0x8008AD80
    // 0x8008C780: sw          $zero, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = 0;
    func_8008AD80(rdram, ctx);
        goto after_0;
    // 0x8008C780: sw          $zero, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = 0;
    after_0:
    // 0x8008C784: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x8008C788: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008C78C: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x8008C790: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8008C794: jal         0x8008B1A0
    // 0x8008C798: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_8008B1A0(rdram, ctx);
        goto after_1;
    // 0x8008C798: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_1:
    // 0x8008C79C: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x8008C7A0: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8008C7A4: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x8008C7A8: jal         0x8008B304
    // 0x8008C7AC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_8008B304(rdram, ctx);
        goto after_2;
    // 0x8008C7AC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_2:
    // 0x8008C7B0: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x8008C7B4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8008C7B8: addiu       $a1, $a1, -0x3B24
    ctx->r5 = ADD32(ctx->r5, -0X3B24);
    // 0x8008C7BC: jal         0x8008AEE4
    // 0x8008C7C0: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    func_8008AEE4(rdram, ctx);
        goto after_3;
    // 0x8008C7C0: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_3:
    // 0x8008C7C4: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x8008C7C8: lw          $a1, 0x184($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X184);
    // 0x8008C7CC: jal         0x8008AF04
    // 0x8008C7D0: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    func_8008AF04(rdram, ctx);
        goto after_4;
    // 0x8008C7D0: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    after_4:
    // 0x8008C7D4: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x8008C7D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008C7DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008C7E0: jal         0x8008CA4C
    // 0x8008C7E4: sw          $zero, 0x8($t3)
    MEM_W(0X8, ctx->r11) = 0;
    func_8008CA4C(rdram, ctx);
        goto after_5;
    // 0x8008C7E4: sw          $zero, 0x8($t3)
    MEM_W(0X8, ctx->r11) = 0;
    after_5:
    // 0x8008C7E8: lui         $a1, 0x3C23
    ctx->r5 = S32(0X3C23 << 16);
    // 0x8008C7EC: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    // 0x8008C7F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008C7F4: jal         0x8008C9BC
    // 0x8008C7F8: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_6;
    // 0x8008C7F8: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    after_6:
    // 0x8008C7FC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008C800: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008C804: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x8008C808: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x8008C80C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008C810: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8008C814: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x8008C818: jal         0x8008C9F0
    // 0x8008C81C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_7;
    // 0x8008C81C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x8008C820: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008C824: jal         0x8008C9E4
    // 0x8008C828: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008C9E4(rdram, ctx);
        goto after_8;
    // 0x8008C828: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x8008C82C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008C830: jal         0x8008C984
    // 0x8008C834: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008C984(rdram, ctx);
        goto after_9;
    // 0x8008C834: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
    // 0x8008C838: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x8008C83C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8008C840: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8008C844: sb          $zero, 0x38($t4)
    MEM_B(0X38, ctx->r12) = 0;
    // 0x8008C848: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x8008C84C: swc1        $f6, 0x34($t5)
    MEM_W(0X34, ctx->r13) = ctx->f6.u32l;
    // 0x8008C850: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8008C854: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8008C858: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008C85C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008C864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C864: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008C868: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008C86C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008C870: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8008C874: jal         0x8008ADBC
    // 0x8008C878: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    func_8008ADBC(rdram, ctx);
        goto after_0;
    // 0x8008C878: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_0:
    // 0x8008C87C: jal         0x8008CFF0
    // 0x8008C880: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008CFF0(rdram, ctx);
        goto after_1;
    // 0x8008C880: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008C884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008C888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008C88C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008C894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C894: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008C898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008C89C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8008C8A0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8008C8A4: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x8008C8A8: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x8008C8AC: beq         $at, $zero, L_8008C914
    if (ctx->r1 == 0) {
        // 0x8008C8B0: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8008C914;
    }
    // 0x8008C8B0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008C8B4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008C8B8: addu        $at, $at, $t6
    gpr jr_addend_8008C8C0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8008C8BC: lw          $t6, 0x4AB0($at)
    ctx->r14 = ADD32(ctx->r1, 0X4AB0);
    // 0x8008C8C0: jr          $t6
    // 0x8008C8C4: nop

    switch (jr_addend_8008C8C0 >> 2) {
        case 0: goto L_8008C914; break;
        case 1: goto L_8008C8E8; break;
        case 2: goto L_8008C8C8; break;
        case 3: goto L_8008C8D8; break;
        case 4: goto L_8008C8F8; break;
        default: switch_error(__func__, 0x8008C8C0, 0x80124AB0);
    }
    // 0x8008C8C4: nop

L_8008C8C8:
    // 0x8008C8C8: jal         0x8008C2A8
    // 0x8008C8CC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8008C2A8(rdram, ctx);
        goto after_0;
    // 0x8008C8CC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8008C8D0: b           L_8008C918
    // 0x8008C8D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008C918;
    // 0x8008C8D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008C8D8:
    // 0x8008C8D8: jal         0x8008C37C
    // 0x8008C8DC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8008C37C(rdram, ctx);
        goto after_1;
    // 0x8008C8DC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x8008C8E0: b           L_8008C918
    // 0x8008C8E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008C918;
    // 0x8008C8E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008C8E8:
    // 0x8008C8E8: jal         0x8008ADE4
    // 0x8008C8EC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_8008ADE4(rdram, ctx);
        goto after_2;
    // 0x8008C8EC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_2:
    // 0x8008C8F0: b           L_8008C918
    // 0x8008C8F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008C918;
    // 0x8008C8F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008C8F8:
    // 0x8008C8F8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8008C8FC: jal         0x8008ADE4
    // 0x8008C900: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8008ADE4(rdram, ctx);
        goto after_3;
    // 0x8008C900: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_3:
    // 0x8008C904: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8008C908: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x8008C90C: jal         0x8008ADE4
    // 0x8008C910: lw          $a0, 0x3C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X3C);
    func_8008ADE4(rdram, ctx);
        goto after_4;
    // 0x8008C910: lw          $a0, 0x3C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X3C);
    after_4:
L_8008C914:
    // 0x8008C914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008C918:
    // 0x8008C918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008C91C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008C924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C924: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008C928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008C92C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008C930: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8008C934: jal         0x8008AEB4
    // 0x8008C938: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    func_8008AEB4(rdram, ctx);
        goto after_0;
    // 0x8008C938: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_0:
    // 0x8008C93C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8008C940: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8008C944: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
    // 0x8008C948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008C94C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008C950: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008C958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C958: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008C95C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8008C960: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008C964: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8008C968: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x8008C96C: jal         0x800EE7F8
    // 0x8008C970: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x8008C970: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_0:
    // 0x8008C974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008C978: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008C97C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008C984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C984: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008C988: jr          $ra
    // 0x8008C98C: sh          $a1, 0xE($t6)
    MEM_H(0XE, ctx->r14) = ctx->r5;
    return;
    // 0x8008C98C: sh          $a1, 0xE($t6)
    MEM_H(0XE, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_8008C990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C990: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8008C994: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008C998: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008C99C: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008C9A0: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8008C9A4: jal         0x8008B10C
    // 0x8008C9A8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_8008B10C(rdram, ctx);
        goto after_0;
    // 0x8008C9A8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8008C9AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008C9B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008C9B4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008C9BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C9BC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8008C9C0: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008C9C4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8008C9C8: swc1        $f12, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f12.u32l;
    // 0x8008C9CC: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8008C9D0: jr          $ra
    // 0x8008C9D4: swc1        $f14, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f14.u32l;
    return;
    // 0x8008C9D4: swc1        $f14, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_8008C9D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C9D8: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008C9DC: jr          $ra
    // 0x8008C9E0: sw          $a1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r5;
    return;
    // 0x8008C9E0: sw          $a1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_8008C9E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C9E4: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008C9E8: jr          $ra
    // 0x8008C9EC: sb          $a1, 0xC($t6)
    MEM_B(0XC, ctx->r14) = ctx->r5;
    return;
    // 0x8008C9EC: sb          $a1, 0xC($t6)
    MEM_B(0XC, ctx->r14) = ctx->r5;
;}
RECOMP_FUNC void func_8008C9F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C9F0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8008C9F4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8008C9F8: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008C9FC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8008CA00: swc1        $f12, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f12.u32l;
    // 0x8008CA04: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8008CA08: swc1        $f14, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f14.u32l;
    // 0x8008CA0C: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x8008CA10: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8008CA14: swc1        $f4, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f4.u32l;
    // 0x8008CA18: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x8008CA1C: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8008CA20: swc1        $f6, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->f6.u32l;
    // 0x8008CA24: lw          $t0, 0x4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X4);
    // 0x8008CA28: jr          $ra
    // 0x8008CA2C: sb          $zero, 0x38($t0)
    MEM_B(0X38, ctx->r8) = 0;
    return;
    // 0x8008CA2C: sb          $zero, 0x38($t0)
    MEM_B(0X38, ctx->r8) = 0;
;}
RECOMP_FUNC void func_8008CA30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CA30: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8008CA34: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008CA38: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8008CA3C: swc1        $f12, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->f12.u32l;
    // 0x8008CA40: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x8008CA44: jr          $ra
    // 0x8008CA48: sb          $t7, 0x38($t8)
    MEM_B(0X38, ctx->r24) = ctx->r15;
    return;
    // 0x8008CA48: sb          $t7, 0x38($t8)
    MEM_B(0X38, ctx->r24) = ctx->r15;
;}
RECOMP_FUNC void func_8008CA4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CA4C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8008CA50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008CA54: lw          $t6, 0x3C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X3C);
    // 0x8008CA58: beq         $t6, $zero, L_8008CA6C
    if (ctx->r14 == 0) {
        // 0x8008CA5C: nop
    
            goto L_8008CA6C;
    }
    // 0x8008CA5C: nop

    // 0x8008CA60: bne         $a1, $at, L_8008CA6C
    if (ctx->r5 != ctx->r1) {
        // 0x8008CA64: nop
    
            goto L_8008CA6C;
    }
    // 0x8008CA64: nop

    // 0x8008CA68: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_8008CA6C:
    // 0x8008CA6C: jr          $ra
    // 0x8008CA70: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
    return;
    // 0x8008CA70: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_8008CA74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CA74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008CA78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008CA7C: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008CA80: jal         0x8008B4D4
    // 0x8008CA84: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_8008B4D4(rdram, ctx);
        goto after_0;
    // 0x8008CA84: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8008CA88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008CA8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008CA90: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008CA98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CA98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008CA9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008CAA0: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008CAA4: jal         0x8008B304
    // 0x8008CAA8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_8008B304(rdram, ctx);
        goto after_0;
    // 0x8008CAA8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8008CAAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008CAB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008CAB4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008CABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CABC: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008CAC0: jr          $ra
    // 0x8008CAC4: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    return;
    // 0x8008CAC4: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
;}
RECOMP_FUNC void func_8008CAC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CAC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008CACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008CAD0: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008CAD4: jal         0x8008B2B4
    // 0x8008CAD8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_8008B2B4(rdram, ctx);
        goto after_0;
    // 0x8008CAD8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8008CADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008CAE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008CAE4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008CAEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CAEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008CAF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008CAF4: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008CAF8: jal         0x8008B324
    // 0x8008CAFC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_8008B324(rdram, ctx);
        goto after_0;
    // 0x8008CAFC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8008CB00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008CB04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008CB08: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008CB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CB10: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8008CB14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008CB18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008CB1C: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008CB20: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8008CB24: jal         0x8008B348
    // 0x8008CB28: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_8008B348(rdram, ctx);
        goto after_0;
    // 0x8008CB28: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8008CB2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008CB30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008CB34: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008CB3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CB3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008CB40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008CB44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008CB48: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8008CB4C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8008CB50: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008CB54: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008CB58: jal         0x8008AF24
    // 0x8008CB5C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_8008AF24(rdram, ctx);
        goto after_0;
    // 0x8008CB5C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8008CB60: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x8008CB64: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8008CB68: jal         0x8008AED4
    // 0x8008CB6C: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    func_8008AED4(rdram, ctx);
        goto after_1;
    // 0x8008CB6C: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_1:
    // 0x8008CB70: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8008CB74: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8008CB78: jal         0x8008B1BC
    // 0x8008CB7C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_8008B1BC(rdram, ctx);
        goto after_2;
    // 0x8008CB7C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_2:
    // 0x8008CB80: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x8008CB84: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8008CB88: jal         0x8008B134
    // 0x8008CB8C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    func_8008B134(rdram, ctx);
        goto after_3;
    // 0x8008CB8C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_3:
    // 0x8008CB90: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x8008CB94: jal         0x8008B064
    // 0x8008CB98: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_8008B064(rdram, ctx);
        goto after_4;
    // 0x8008CB98: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_4:
    // 0x8008CB9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008CBA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008CBA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008CBA8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008CBB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CBB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008CBB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008CBB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008CBBC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8008CBC0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8008CBC4: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008CBC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008CBCC: jal         0x8008AF24
    // 0x8008CBD0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_8008AF24(rdram, ctx);
        goto after_0;
    // 0x8008CBD0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8008CBD4: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x8008CBD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008CBDC: jal         0x8008B1A0
    // 0x8008CBE0: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    func_8008B1A0(rdram, ctx);
        goto after_1;
    // 0x8008CBE0: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_1:
    // 0x8008CBE4: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8008CBE8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8008CBEC: jal         0x8008AED4
    // 0x8008CBF0: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x8008CBF0: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_2:
    // 0x8008CBF4: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x8008CBF8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8008CBFC: jal         0x8008B1BC
    // 0x8008CC00: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x8008CC00: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_3:
    // 0x8008CC04: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x8008CC08: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8008CC0C: jal         0x8008B134
    // 0x8008CC10: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_8008B134(rdram, ctx);
        goto after_4;
    // 0x8008CC10: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_4:
    // 0x8008CC14: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x8008CC18: jal         0x8008B064
    // 0x8008CC1C: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    func_8008B064(rdram, ctx);
        goto after_5;
    // 0x8008CC1C: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_5:
    // 0x8008CC20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008CC24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008CC28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008CC2C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008CC34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CC34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008CC38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008CC3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008CC40: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8008CC44: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8008CC48: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8008CC4C: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008CC50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008CC54: jal         0x8008AF24
    // 0x8008CC58: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_8008AF24(rdram, ctx);
        goto after_0;
    // 0x8008CC58: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8008CC5C: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x8008CC60: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8008CC64: jal         0x8008AED4
    // 0x8008CC68: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    func_8008AED4(rdram, ctx);
        goto after_1;
    // 0x8008CC68: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_1:
    // 0x8008CC6C: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8008CC70: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8008CC74: jal         0x8008B1BC
    // 0x8008CC78: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_8008B1BC(rdram, ctx);
        goto after_2;
    // 0x8008CC78: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_2:
    // 0x8008CC7C: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x8008CC80: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8008CC84: jal         0x8008B24C
    // 0x8008CC88: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    func_8008B24C(rdram, ctx);
        goto after_3;
    // 0x8008CC88: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_3:
    // 0x8008CC8C: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x8008CC90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8008CC94: jal         0x8008B134
    // 0x8008CC98: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_8008B134(rdram, ctx);
        goto after_4;
    // 0x8008CC98: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_4:
    // 0x8008CC9C: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x8008CCA0: jal         0x8008B064
    // 0x8008CCA4: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    func_8008B064(rdram, ctx);
        goto after_5;
    // 0x8008CCA4: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_5:
    // 0x8008CCA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008CCAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008CCB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008CCB4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008CCBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CCBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008CCC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008CCC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008CCC8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8008CCCC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8008CCD0: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008CCD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008CCD8: jal         0x8008AF24
    // 0x8008CCDC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_8008AF24(rdram, ctx);
        goto after_0;
    // 0x8008CCDC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8008CCE0: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x8008CCE4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8008CCE8: jal         0x8008AED4
    // 0x8008CCEC: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    func_8008AED4(rdram, ctx);
        goto after_1;
    // 0x8008CCEC: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_1:
    // 0x8008CCF0: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8008CCF4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8008CCF8: jal         0x8008B1BC
    // 0x8008CCFC: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_8008B1BC(rdram, ctx);
        goto after_2;
    // 0x8008CCFC: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_2:
    // 0x8008CD00: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x8008CD04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008CD08: jal         0x8008B134
    // 0x8008CD0C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    func_8008B134(rdram, ctx);
        goto after_3;
    // 0x8008CD0C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_3:
    // 0x8008CD10: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x8008CD14: jal         0x8008B064
    // 0x8008CD18: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_8008B064(rdram, ctx);
        goto after_4;
    // 0x8008CD18: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_4:
    // 0x8008CD1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008CD20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008CD24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008CD28: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008CD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CD30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008CD34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008CD38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008CD3C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8008CD40: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8008CD44: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8008CD48: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008CD4C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008CD50: jal         0x8008AF24
    // 0x8008CD54: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_8008AF24(rdram, ctx);
        goto after_0;
    // 0x8008CD54: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8008CD58: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x8008CD5C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8008CD60: jal         0x8008AED4
    // 0x8008CD64: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    func_8008AED4(rdram, ctx);
        goto after_1;
    // 0x8008CD64: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_1:
    // 0x8008CD68: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8008CD6C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8008CD70: jal         0x8008B1BC
    // 0x8008CD74: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_8008B1BC(rdram, ctx);
        goto after_2;
    // 0x8008CD74: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_2:
    // 0x8008CD78: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x8008CD7C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8008CD80: jal         0x8008B24C
    // 0x8008CD84: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    func_8008B24C(rdram, ctx);
        goto after_3;
    // 0x8008CD84: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_3:
    // 0x8008CD88: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x8008CD8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008CD90: jal         0x8008B134
    // 0x8008CD94: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_8008B134(rdram, ctx);
        goto after_4;
    // 0x8008CD94: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_4:
    // 0x8008CD98: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x8008CD9C: jal         0x8008B064
    // 0x8008CDA0: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    func_8008B064(rdram, ctx);
        goto after_5;
    // 0x8008CDA0: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_5:
    // 0x8008CDA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008CDA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008CDAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008CDB0: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008CDB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CDB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008CDBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008CDC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008CDC4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8008CDC8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8008CDCC: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008CDD0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008CDD4: jal         0x8008AF24
    // 0x8008CDD8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_8008AF24(rdram, ctx);
        goto after_0;
    // 0x8008CDD8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8008CDDC: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x8008CDE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008CDE4: jal         0x8008B1A0
    // 0x8008CDE8: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    func_8008B1A0(rdram, ctx);
        goto after_1;
    // 0x8008CDE8: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_1:
    // 0x8008CDEC: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8008CDF0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8008CDF4: jal         0x8008AED4
    // 0x8008CDF8: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x8008CDF8: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_2:
    // 0x8008CDFC: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x8008CE00: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8008CE04: jal         0x8008B1BC
    // 0x8008CE08: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x8008CE08: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_3:
    // 0x8008CE0C: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x8008CE10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008CE14: jal         0x8008B134
    // 0x8008CE18: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_8008B134(rdram, ctx);
        goto after_4;
    // 0x8008CE18: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_4:
    // 0x8008CE1C: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x8008CE20: jal         0x8008B064
    // 0x8008CE24: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    func_8008B064(rdram, ctx);
        goto after_5;
    // 0x8008CE24: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_5:
    // 0x8008CE28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008CE2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008CE30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008CE34: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008CE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CE3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008CE40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008CE44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008CE48: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8008CE4C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8008CE50: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8008CE54: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008CE58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8008CE5C: jal         0x8008AF24
    // 0x8008CE60: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_8008AF24(rdram, ctx);
        goto after_0;
    // 0x8008CE60: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x8008CE64: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x8008CE68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008CE6C: jal         0x8008B1A0
    // 0x8008CE70: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    func_8008B1A0(rdram, ctx);
        goto after_1;
    // 0x8008CE70: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_1:
    // 0x8008CE74: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8008CE78: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8008CE7C: jal         0x8008AED4
    // 0x8008CE80: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x8008CE80: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_2:
    // 0x8008CE84: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x8008CE88: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8008CE8C: jal         0x8008B1BC
    // 0x8008CE90: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x8008CE90: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_3:
    // 0x8008CE94: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x8008CE98: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8008CE9C: jal         0x8008B24C
    // 0x8008CEA0: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_8008B24C(rdram, ctx);
        goto after_4;
    // 0x8008CEA0: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_4:
    // 0x8008CEA4: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x8008CEA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008CEAC: jal         0x8008B134
    // 0x8008CEB0: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x8008CEB0: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_5:
    // 0x8008CEB4: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x8008CEB8: jal         0x8008B064
    // 0x8008CEBC: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    func_8008B064(rdram, ctx);
        goto after_6;
    // 0x8008CEBC: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    after_6:
    // 0x8008CEC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008CEC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008CEC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008CECC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008CED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CED4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008CED8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8008CEDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008CEE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008CEE4: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8008CEE8: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8008CEEC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8008CEF0: jal         0x8008B1D4
    // 0x8008CEF4: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_0;
    // 0x8008CEF4: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_0:
    // 0x8008CEF8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8008CEFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008CF00: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8008CF04: jal         0x8008B134
    // 0x8008CF08: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    func_8008B134(rdram, ctx);
        goto after_1;
    // 0x8008CF08: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_1:
    // 0x8008CF0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008CF10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008CF14: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008CF1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CF1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008CF20: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8008CF24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008CF28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008CF2C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8008CF30: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8008CF34: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8008CF38: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8008CF3C: jal         0x8008B1D4
    // 0x8008CF40: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_0;
    // 0x8008CF40: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_0:
    // 0x8008CF44: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8008CF48: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8008CF4C: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8008CF50: jal         0x8008B1BC
    // 0x8008CF54: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    func_8008B1BC(rdram, ctx);
        goto after_1;
    // 0x8008CF54: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_1:
    // 0x8008CF58: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8008CF5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008CF60: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x8008CF64: jal         0x8008B134
    // 0x8008CF68: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    func_8008B134(rdram, ctx);
        goto after_2;
    // 0x8008CF68: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_2:
    // 0x8008CF6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008CF70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008CF74: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008CF7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CF7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008CF80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008CF84: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008CF88: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8008CF8C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8008CF90: lw          $t7, 0x3C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X3C);
    // 0x8008CF94: bnel        $t7, $zero, L_8008CFE4
    if (ctx->r15 != 0) {
        // 0x8008CF98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008CFE4;
    }
    goto skip_0;
    // 0x8008CF98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8008CF9C: jal         0x8008AD80
    // 0x8008CFA0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8008AD80(rdram, ctx);
        goto after_0;
    // 0x8008CFA0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8008CFA4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8008CFA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008CFAC: lw          $t8, 0x4($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X4);
    // 0x8008CFB0: sw          $v0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->r2;
    // 0x8008CFB4: lw          $t9, 0x4($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X4);
    // 0x8008CFB8: jal         0x8008B1A0
    // 0x8008CFBC: lw          $a0, 0x3C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X3C);
    func_8008B1A0(rdram, ctx);
        goto after_1;
    // 0x8008CFBC: lw          $a0, 0x3C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X3C);
    after_1:
    // 0x8008CFC0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8008CFC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008CFC8: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x8008CFCC: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x8008CFD0: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x8008CFD4: bnel        $t0, $at, L_8008CFE4
    if (ctx->r8 != ctx->r1) {
        // 0x8008CFD8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008CFE4;
    }
    goto skip_1;
    // 0x8008CFD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8008CFDC: sw          $t1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r9;
    // 0x8008CFE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008CFE4:
    // 0x8008CFE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008CFE8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008CFF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CFF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008CFF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008CFF8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8008CFFC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8008D000: lw          $a2, 0x3C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X3C);
    // 0x8008D004: beq         $a2, $zero, L_8008D01C
    if (ctx->r6 == 0) {
        // 0x8008D008: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8008D01C;
    }
    // 0x8008D008: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8008D00C: jal         0x8008ADBC
    // 0x8008D010: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8008ADBC(rdram, ctx);
        goto after_0;
    // 0x8008D010: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x8008D014: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8008D018: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
L_8008D01C:
    // 0x8008D01C: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x8008D020: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8008D024: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8008D028: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8008D02C: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x8008D030: bnel        $t6, $at, L_8008D040
    if (ctx->r14 != ctx->r1) {
        // 0x8008D034: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008D040;
    }
    goto skip_0;
    // 0x8008D034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8008D038: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x8008D03C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008D040:
    // 0x8008D040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D044: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D04C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D04C: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8008D050: jr          $ra
    // 0x8008D054: lw          $v0, 0x3C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X3C);
    return;
    // 0x8008D054: lw          $v0, 0x3C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X3C);
;}
RECOMP_FUNC void func_8008D058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D058: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D05C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D060: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D064: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8008D068: jal         0x8008B304
    // 0x8008D06C: lw          $a0, 0x3C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X3C);
    func_8008B304(rdram, ctx);
        goto after_0;
    // 0x8008D06C: lw          $a0, 0x3C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X3C);
    after_0:
    // 0x8008D070: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8008D074: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8008D078: jal         0x8008B4D4
    // 0x8008D07C: lw          $a0, 0x3C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X3C);
    func_8008B4D4(rdram, ctx);
        goto after_1;
    // 0x8008D07C: lw          $a0, 0x3C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X3C);
    after_1:
    // 0x8008D080: jal         0x800DF41C
    // 0x8008D084: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF41C(rdram, ctx);
        goto after_2;
    // 0x8008D084: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x8008D088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D08C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D090: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D0A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D0A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D0A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D0A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D0AC: jal         0x800C6E38
    // 0x8008D0B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8008D0B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8008D0B4: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D0B8: beq         $t6, $zero, L_8008D0D0
    if (ctx->r14 == 0) {
        // 0x8008D0BC: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008D0D0;
    }
    // 0x8008D0BC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008D0C0: jal         0x800A3304
    // 0x8008D0C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3304(rdram, ctx);
        goto after_1;
    // 0x8008D0C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008D0C8: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D0CC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8008D0D0:
    // 0x8008D0D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D0D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D0D8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D0E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D0E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D0E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D0EC: jal         0x800C6E38
    // 0x8008D0F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8008D0F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8008D0F4: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D0F8: beq         $t6, $zero, L_8008D13C
    if (ctx->r14 == 0) {
        // 0x8008D0FC: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008D13C;
    }
    // 0x8008D0FC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008D100: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8008D104: jal         0x80095748
    // 0x8008D108: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    func_80095748(rdram, ctx);
        goto after_1;
    // 0x8008D108: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    after_1:
    // 0x8008D10C: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D110: beq         $t7, $zero, L_8008D13C
    if (ctx->r15 == 0) {
        // 0x8008D114: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_8008D13C;
    }
    // 0x8008D114: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8008D118: jal         0x800A3304
    // 0x8008D11C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3304(rdram, ctx);
        goto after_2;
    // 0x8008D11C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8008D120: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D124: bne         $t8, $zero, L_8008D13C
    if (ctx->r24 != 0) {
        // 0x8008D128: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_8008D13C;
    }
    // 0x8008D128: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8008D12C: jal         0x800A3274
    // 0x8008D130: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3274(rdram, ctx);
        goto after_3;
    // 0x8008D130: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x8008D134: xori        $t9, $v0, 0xB
    ctx->r25 = ctx->r2 ^ 0XB;
    // 0x8008D138: sltiu       $v0, $t9, 0x1
    ctx->r2 = ctx->r25 < 0X1 ? 1 : 0;
L_8008D13C:
    // 0x8008D13C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D144: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D14C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D14C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D154: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D158: jal         0x800C6E38
    // 0x8008D15C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8008D15C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x8008D160: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D164: beq         $t6, $zero, L_8008D17C
    if (ctx->r14 == 0) {
        // 0x8008D168: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008D17C;
    }
    // 0x8008D168: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008D16C: jal         0x800A3304
    // 0x8008D170: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3304(rdram, ctx);
        goto after_1;
    // 0x8008D170: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008D174: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D178: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8008D17C:
    // 0x8008D17C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D180: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D184: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D18C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D18C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D190: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D194: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D198: jal         0x800C6E38
    // 0x8008D19C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8008D19C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x8008D1A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D1A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D1A8: jr          $ra
    // 0x8008D1AC: nop

    return;
    // 0x8008D1AC: nop

;}
RECOMP_FUNC void func_8008D1B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D1B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D1B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D1B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D1BC: jal         0x800C6E38
    // 0x8008D1C0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8008D1C0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x8008D1C4: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D1C8: beq         $t6, $zero, L_8008D1E0
    if (ctx->r14 == 0) {
        // 0x8008D1CC: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008D1E0;
    }
    // 0x8008D1CC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008D1D0: jal         0x800A3304
    // 0x8008D1D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3304(rdram, ctx);
        goto after_1;
    // 0x8008D1D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008D1D8: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D1DC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8008D1E0:
    // 0x8008D1E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D1E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D1E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D1F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D1F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D1F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D1F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D1FC: jal         0x800C6E38
    // 0x8008D200: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8008D200: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x8008D204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D208: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D20C: jr          $ra
    // 0x8008D210: nop

    return;
    // 0x8008D210: nop

;}
RECOMP_FUNC void func_8008D214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D214: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008D218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D21C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8008D220: jal         0x800C6E38
    // 0x8008D224: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8008D224: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x8008D228: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D22C: beq         $t6, $zero, L_8008D270
    if (ctx->r14 == 0) {
        // 0x8008D230: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008D270;
    }
    // 0x8008D230: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008D234: jal         0x800964DC
    // 0x8008D238: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800964DC(rdram, ctx);
        goto after_1;
    // 0x8008D238: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x8008D23C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8008D240: jal         0x80096364
    // 0x8008D244: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80096364(rdram, ctx);
        goto after_2;
    // 0x8008D244: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x8008D248: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8008D24C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8008D250: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008D254: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8008D258: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008D25C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x8008D260: nop

    // 0x8008D264: bc1fl       L_8008D274
    if (!c1cs) {
        // 0x8008D268: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008D274;
    }
    goto skip_0;
    // 0x8008D268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8008D26C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008D270:
    // 0x8008D270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008D274:
    // 0x8008D274: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008D278: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D284: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D288: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D28C: jal         0x800C6E38
    // 0x8008D290: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8008D290: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x8008D294: bne         $v0, $zero, L_8008D2A4
    if (ctx->r2 != 0) {
        // 0x8008D298: nop
    
            goto L_8008D2A4;
    }
    // 0x8008D298: nop

    // 0x8008D29C: b           L_8008D2F4
    // 0x8008D2A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008D2F4;
    // 0x8008D2A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008D2A4:
    // 0x8008D2A4: jal         0x800DA298
    // 0x8008D2A8: addiu       $a0, $zero, 0x6B6
    ctx->r4 = ADD32(0, 0X6B6);
    func_800DA298(rdram, ctx);
        goto after_1;
    // 0x8008D2A8: addiu       $a0, $zero, 0x6B6
    ctx->r4 = ADD32(0, 0X6B6);
    after_1:
    // 0x8008D2AC: beq         $v0, $zero, L_8008D2BC
    if (ctx->r2 == 0) {
        // 0x8008D2B0: nop
    
            goto L_8008D2BC;
    }
    // 0x8008D2B0: nop

    // 0x8008D2B4: b           L_8008D2F4
    // 0x8008D2B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008D2F4;
    // 0x8008D2B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008D2BC:
    // 0x8008D2BC: jal         0x800A3274
    // 0x8008D2C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3274(rdram, ctx);
        goto after_2;
    // 0x8008D2C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8008D2C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008D2C8: beq         $v0, $at, L_8008D2D8
    if (ctx->r2 == ctx->r1) {
        // 0x8008D2CC: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_8008D2D8;
    }
    // 0x8008D2CC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8008D2D0: bnel        $v0, $at, L_8008D2F4
    if (ctx->r2 != ctx->r1) {
        // 0x8008D2D4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8008D2F4;
    }
    goto skip_0;
    // 0x8008D2D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
L_8008D2D8:
    // 0x8008D2D8: jal         0x800A3304
    // 0x8008D2DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3304(rdram, ctx);
        goto after_3;
    // 0x8008D2DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x8008D2E0: bnel        $v0, $zero, L_8008D2F4
    if (ctx->r2 != 0) {
        // 0x8008D2E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8008D2F4;
    }
    goto skip_1;
    // 0x8008D2E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x8008D2E8: b           L_8008D2F4
    // 0x8008D2EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008D2F4;
    // 0x8008D2EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008D2F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008D2F4:
    // 0x8008D2F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D2F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D2FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D30C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D310: jal         0x80095748
    // 0x8008D314: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_80095748(rdram, ctx);
        goto after_0;
    // 0x8008D314: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_0:
    // 0x8008D318: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D31C: beq         $t6, $zero, L_8008D360
    if (ctx->r14 == 0) {
        // 0x8008D320: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008D360;
    }
    // 0x8008D320: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008D324: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8008D328: jal         0x80095748
    // 0x8008D32C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80095748(rdram, ctx);
        goto after_1;
    // 0x8008D32C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x8008D330: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D334: beq         $t7, $zero, L_8008D360
    if (ctx->r15 == 0) {
        // 0x8008D338: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_8008D360;
    }
    // 0x8008D338: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8008D33C: jal         0x800C6E38
    // 0x8008D340: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_800C6E38(rdram, ctx);
        goto after_2;
    // 0x8008D340: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
    // 0x8008D344: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D348: beq         $t8, $zero, L_8008D360
    if (ctx->r24 == 0) {
        // 0x8008D34C: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_8008D360;
    }
    // 0x8008D34C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8008D350: jal         0x800A3304
    // 0x8008D354: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3304(rdram, ctx);
        goto after_3;
    // 0x8008D354: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x8008D358: sltu        $t9, $zero, $v0
    ctx->r25 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D35C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_8008D360:
    // 0x8008D360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D364: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D368: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D370: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D378: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D37C: jal         0x800C6E38
    // 0x8008D380: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8008D380: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x8008D384: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D388: beq         $t6, $zero, L_8008D3A0
    if (ctx->r14 == 0) {
        // 0x8008D38C: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008D3A0;
    }
    // 0x8008D38C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008D390: jal         0x800A3304
    // 0x8008D394: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3304(rdram, ctx);
        goto after_1;
    // 0x8008D394: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008D398: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D39C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8008D3A0:
    // 0x8008D3A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D3A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D3A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D3B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D3B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D3B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D3B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D3BC: jal         0x80095738
    // 0x8008D3C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80095738(rdram, ctx);
        goto after_0;
    // 0x8008D3C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8008D3C4: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D3C8: beq         $t6, $zero, L_8008D3FC
    if (ctx->r14 == 0) {
        // 0x8008D3CC: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008D3FC;
    }
    // 0x8008D3CC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008D3D0: jal         0x800C6E38
    // 0x8008D3D4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_800C6E38(rdram, ctx);
        goto after_1;
    // 0x8008D3D4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_1:
    // 0x8008D3D8: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D3DC: beq         $t7, $zero, L_8008D3FC
    if (ctx->r15 == 0) {
        // 0x8008D3E0: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_8008D3FC;
    }
    // 0x8008D3E0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8008D3E4: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8008D3E8: addiu       $a1, $zero, 0x401
    ctx->r5 = ADD32(0, 0X401);
    // 0x8008D3EC: jal         0x800F64A4
    // 0x8008D3F0: lw          $a0, 0x184($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X184);
    func_800F64A4(rdram, ctx);
        goto after_2;
    // 0x8008D3F0: lw          $a0, 0x184($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X184);
    after_2:
    // 0x8008D3F4: sltu        $t9, $zero, $v0
    ctx->r25 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D3F8: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_8008D3FC:
    // 0x8008D3FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D400: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D404: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D40C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8008D410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D414: jal         0x800F8B88
    // 0x8008D418: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    func_800F8B88(rdram, ctx);
        goto after_0;
    // 0x8008D418: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008D41C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8008D420: bnel        $v0, $at, L_8008D534
    if (ctx->r2 != ctx->r1) {
        // 0x8008D424: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8008D534;
    }
    goto skip_0;
    // 0x8008D424: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x8008D428: jal         0x800878A8
    // 0x8008D42C: nop

    _plsu_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x8008D42C: nop

    after_1:
    // 0x8008D430: beql        $v0, $zero, L_8008D534
    if (ctx->r2 == 0) {
        // 0x8008D434: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8008D534;
    }
    goto skip_1;
    // 0x8008D434: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x8008D438: jal         0x8008E0C8
    // 0x8008D43C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_8008E0C8(rdram, ctx);
        goto after_2;
    // 0x8008D43C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_2:
    // 0x8008D440: beq         $v0, $zero, L_8008D450
    if (ctx->r2 == 0) {
        // 0x8008D444: nop
    
            goto L_8008D450;
    }
    // 0x8008D444: nop

    // 0x8008D448: b           L_8008D534
    // 0x8008D44C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008D534;
    // 0x8008D44C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008D450:
    // 0x8008D450: jal         0x800F99E8
    // 0x8008D454: nop

    func_800F99E8(rdram, ctx);
        goto after_3;
    // 0x8008D454: nop

    after_3:
    // 0x8008D458: beq         $v0, $zero, L_8008D468
    if (ctx->r2 == 0) {
        // 0x8008D45C: nop
    
            goto L_8008D468;
    }
    // 0x8008D45C: nop

    // 0x8008D460: b           L_8008D534
    // 0x8008D464: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008D534;
    // 0x8008D464: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008D468:
    // 0x8008D468: jal         0x8009E6F8
    // 0x8008D46C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_8009E6F8(rdram, ctx);
        goto after_4;
    // 0x8008D46C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_4:
    // 0x8008D470: addiu       $at, $zero, 0xB9
    ctx->r1 = ADD32(0, 0XB9);
    // 0x8008D474: beq         $v0, $at, L_8008D484
    if (ctx->r2 == ctx->r1) {
        // 0x8008D478: addiu       $at, $zero, 0xBA
        ctx->r1 = ADD32(0, 0XBA);
            goto L_8008D484;
    }
    // 0x8008D478: addiu       $at, $zero, 0xBA
    ctx->r1 = ADD32(0, 0XBA);
    // 0x8008D47C: bne         $v0, $at, L_8008D48C
    if (ctx->r2 != ctx->r1) {
        // 0x8008D480: nop
    
            goto L_8008D48C;
    }
    // 0x8008D480: nop

L_8008D484:
    // 0x8008D484: b           L_8008D534
    // 0x8008D488: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008D534;
    // 0x8008D488: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008D48C:
    // 0x8008D48C: jal         0x80084928
    // 0x8008D490: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    _baduo_entrypoint_2(rdram, ctx);
        goto after_5;
    // 0x8008D490: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_5:
    // 0x8008D494: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8008D498: jal         0x8008E078
    // 0x8008D49C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_8008E078(rdram, ctx);
        goto after_6;
    // 0x8008D49C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_6:
    // 0x8008D4A0: beq         $v0, $zero, L_8008D4B8
    if (ctx->r2 == 0) {
        // 0x8008D4A4: nop
    
            goto L_8008D4B8;
    }
    // 0x8008D4A4: nop

    // 0x8008D4A8: jal         0x800F6C5C
    // 0x8008D4AC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_800F6C5C(rdram, ctx);
        goto after_7;
    // 0x8008D4AC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_7:
    // 0x8008D4B0: bne         $v0, $zero, L_8008D4C0
    if (ctx->r2 != 0) {
        // 0x8008D4B4: nop
    
            goto L_8008D4C0;
    }
    // 0x8008D4B4: nop

L_8008D4B8:
    // 0x8008D4B8: b           L_8008D534
    // 0x8008D4BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008D534;
    // 0x8008D4BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008D4C0:
    // 0x8008D4C0: jal         0x800F54E4
    // 0x8008D4C4: nop

    func_800F54E4(rdram, ctx);
        goto after_8;
    // 0x8008D4C4: nop

    after_8:
    // 0x8008D4C8: jal         0x800F6774
    // 0x8008D4CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800F6774(rdram, ctx);
        goto after_9;
    // 0x8008D4CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x8008D4D0: bne         $v0, $zero, L_8008D4E0
    if (ctx->r2 != 0) {
        // 0x8008D4D4: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_8008D4E0;
    }
    // 0x8008D4D4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8008D4D8: b           L_8008D534
    // 0x8008D4DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008D534;
    // 0x8008D4DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008D4E0:
    // 0x8008D4E0: jal         0x8009C128
    // 0x8008D4E4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_10;
    // 0x8008D4E4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_10:
    // 0x8008D4E8: jal         0x80084928
    // 0x8008D4EC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    _baduo_entrypoint_2(rdram, ctx);
        goto after_11;
    // 0x8008D4EC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_11:
    // 0x8008D4F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8008D4F4: jal         0x800F5A00
    // 0x8008D4F8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800F5A00(rdram, ctx);
        goto after_12;
    // 0x8008D4F8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_12:
    // 0x8008D4FC: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x8008D500: jal         0x800EEB40
    // 0x8008D504: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800EEB40(rdram, ctx);
        goto after_13;
    // 0x8008D504: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_13:
    // 0x8008D508: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008D50C: lwc1        $f4, 0x4AD0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4AD0);
    // 0x8008D510: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008D514: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8008D518: nop

    // 0x8008D51C: bc1fl       L_8008D538
    if (!c1cs) {
        // 0x8008D520: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008D538;
    }
    goto skip_2;
    // 0x8008D520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x8008D524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008D528: b           L_8008D538
    // 0x8008D52C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008D538;
    // 0x8008D52C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D530: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008D534:
    // 0x8008D534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008D538:
    // 0x8008D538: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8008D53C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D54C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D550: jal         0x800C6E38
    // 0x8008D554: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8008D554: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x8008D558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D55C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D560: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D568: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D56C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D570: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D574: jal         0x800C6E38
    // 0x8008D578: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8008D578: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    after_0:
    // 0x8008D57C: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D580: beq         $t6, $zero, L_8008D5B4
    if (ctx->r14 == 0) {
        // 0x8008D584: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008D5B4;
    }
    // 0x8008D584: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008D588: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8008D58C: jal         0x80095748
    // 0x8008D590: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80095748(rdram, ctx);
        goto after_1;
    // 0x8008D590: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x8008D594: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D598: beq         $t7, $zero, L_8008D5B4
    if (ctx->r15 == 0) {
        // 0x8008D59C: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_8008D5B4;
    }
    // 0x8008D59C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8008D5A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8008D5A4: jal         0x80095748
    // 0x8008D5A8: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_80095748(rdram, ctx);
        goto after_2;
    // 0x8008D5A8: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_2:
    // 0x8008D5AC: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D5B0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8008D5B4:
    // 0x8008D5B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D5B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D5BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D5C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D5C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D5C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D5CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D5D0: jal         0x80095748
    // 0x8008D5D4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80095748(rdram, ctx);
        goto after_0;
    // 0x8008D5D4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x8008D5D8: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D5DC: beq         $t6, $zero, L_8008D620
    if (ctx->r14 == 0) {
        // 0x8008D5E0: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008D620;
    }
    // 0x8008D5E0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008D5E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8008D5E8: jal         0x80095748
    // 0x8008D5EC: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_80095748(rdram, ctx);
        goto after_1;
    // 0x8008D5EC: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_1:
    // 0x8008D5F0: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D5F4: beq         $t7, $zero, L_8008D620
    if (ctx->r15 == 0) {
        // 0x8008D5F8: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_8008D620;
    }
    // 0x8008D5F8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8008D5FC: jal         0x800C6E38
    // 0x8008D600: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_800C6E38(rdram, ctx);
        goto after_2;
    // 0x8008D600: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_2:
    // 0x8008D604: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D608: beq         $t8, $zero, L_8008D620
    if (ctx->r24 == 0) {
        // 0x8008D60C: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_8008D620;
    }
    // 0x8008D60C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8008D610: jal         0x800A3304
    // 0x8008D614: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3304(rdram, ctx);
        goto after_3;
    // 0x8008D614: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x8008D618: sltu        $t9, $zero, $v0
    ctx->r25 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D61C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_8008D620:
    // 0x8008D620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D624: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D628: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D630: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D634: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D638: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D63C: jal         0x80095738
    // 0x8008D640: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_80095738(rdram, ctx);
        goto after_0;
    // 0x8008D640: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_0:
    // 0x8008D644: bne         $v0, $zero, L_8008D65C
    if (ctx->r2 != 0) {
        // 0x8008D648: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8008D65C;
    }
    // 0x8008D648: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8008D64C: jal         0x80095738
    // 0x8008D650: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    func_80095738(rdram, ctx);
        goto after_1;
    // 0x8008D650: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_1:
    // 0x8008D654: beq         $v0, $zero, L_8008D664
    if (ctx->r2 == 0) {
        // 0x8008D658: nop
    
            goto L_8008D664;
    }
    // 0x8008D658: nop

L_8008D65C:
    // 0x8008D65C: b           L_8008D684
    // 0x8008D660: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008D684;
    // 0x8008D660: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008D664:
    // 0x8008D664: jal         0x8009E6F8
    // 0x8008D668: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009E6F8(rdram, ctx);
        goto after_2;
    // 0x8008D668: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8008D66C: addiu       $at, $zero, 0x56
    ctx->r1 = ADD32(0, 0X56);
    // 0x8008D670: bnel        $v0, $at, L_8008D684
    if (ctx->r2 != ctx->r1) {
        // 0x8008D674: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8008D684;
    }
    goto skip_0;
    // 0x8008D674: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x8008D678: b           L_8008D684
    // 0x8008D67C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008D684;
    // 0x8008D67C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008D680: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008D684:
    // 0x8008D684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D68C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D69C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D6A0: jal         0x800C6E38
    // 0x8008D6A4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8008D6A4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x8008D6A8: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D6AC: beq         $t6, $zero, L_8008D6C4
    if (ctx->r14 == 0) {
        // 0x8008D6B0: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008D6C4;
    }
    // 0x8008D6B0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008D6B4: jal         0x800A3304
    // 0x8008D6B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3304(rdram, ctx);
        goto after_1;
    // 0x8008D6B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008D6BC: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D6C0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8008D6C4:
    // 0x8008D6C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D6C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D6CC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D6D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D6D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D6D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D6DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D6E0: jal         0x800C6E38
    // 0x8008D6E4: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8008D6E4: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_0:
    // 0x8008D6E8: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D6EC: beq         $t6, $zero, L_8008D704
    if (ctx->r14 == 0) {
        // 0x8008D6F0: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008D704;
    }
    // 0x8008D6F0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008D6F4: jal         0x800A3304
    // 0x8008D6F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3304(rdram, ctx);
        goto after_1;
    // 0x8008D6F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008D6FC: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D700: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8008D704:
    // 0x8008D704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D70C: jr          $ra
    // 0x8008D710: nop

    return;
    // 0x8008D710: nop

;}
RECOMP_FUNC void func_8008D714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D714: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D718: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D71C: jal         0x80084930
    // 0x8008D720: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _baduo_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x8008D720: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008D724: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D728: beq         $t6, $zero, L_8008D740
    if (ctx->r14 == 0) {
        // 0x8008D72C: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008D740;
    }
    // 0x8008D72C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008D730: jal         0x800A3304
    // 0x8008D734: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3304(rdram, ctx);
        goto after_1;
    // 0x8008D734: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008D738: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D73C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8008D740:
    // 0x8008D740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D748: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D758: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D75C: jal         0x800C6E38
    // 0x8008D760: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8008D760: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_0:
    // 0x8008D764: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D768: beq         $t6, $zero, L_8008D780
    if (ctx->r14 == 0) {
        // 0x8008D76C: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008D780;
    }
    // 0x8008D76C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008D770: jal         0x800A3304
    // 0x8008D774: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3304(rdram, ctx);
        goto after_1;
    // 0x8008D774: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008D778: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D77C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8008D780:
    // 0x8008D780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D788: jr          $ra
    // 0x8008D78C: nop

    return;
    // 0x8008D78C: nop

;}
RECOMP_FUNC void func_8008D790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D790: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008D794: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008D798: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008D79C: jal         0x80084938
    // 0x8008D7A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _baduo_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x8008D7A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8008D7A4: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D7A8: beq         $t6, $zero, L_8008D83C
    if (ctx->r14 == 0) {
        // 0x8008D7AC: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008D83C;
    }
    // 0x8008D7AC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008D7B0: jal         0x8008E39C
    // 0x8008D7B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E39C(rdram, ctx);
        goto after_1;
    // 0x8008D7B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8008D7B8: sltiu       $t7, $v0, 0x1
    ctx->r15 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8008D7BC: beq         $t7, $zero, L_8008D83C
    if (ctx->r15 == 0) {
        // 0x8008D7C0: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_8008D83C;
    }
    // 0x8008D7C0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8008D7C4: jal         0x8008E078
    // 0x8008D7C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_2;
    // 0x8008D7C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8008D7CC: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D7D0: beq         $t8, $zero, L_8008D83C
    if (ctx->r24 == 0) {
        // 0x8008D7D4: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_8008D83C;
    }
    // 0x8008D7D4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8008D7D8: jal         0x800C954C
    // 0x8008D7DC: nop

    func_800C954C(rdram, ctx);
        goto after_3;
    // 0x8008D7DC: nop

    after_3:
    // 0x8008D7E0: sltiu       $t9, $v0, 0x1
    ctx->r25 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8008D7E4: beq         $t9, $zero, L_8008D83C
    if (ctx->r25 == 0) {
        // 0x8008D7E8: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_8008D83C;
    }
    // 0x8008D7E8: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x8008D7EC: jal         0x800DB9B0
    // 0x8008D7F0: nop

    func_800DB9B0(rdram, ctx);
        goto after_4;
    // 0x8008D7F0: nop

    after_4:
    // 0x8008D7F4: sltiu       $t0, $v0, 0x1
    ctx->r8 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8008D7F8: beq         $t0, $zero, L_8008D83C
    if (ctx->r8 == 0) {
        // 0x8008D7FC: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_8008D83C;
    }
    // 0x8008D7FC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x8008D800: jal         0x800F8004
    // 0x8008D804: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F8004(rdram, ctx);
        goto after_5;
    // 0x8008D804: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_5:
    // 0x8008D808: sltiu       $t1, $v0, 0x1
    ctx->r9 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8008D80C: beq         $t1, $zero, L_8008D83C
    if (ctx->r9 == 0) {
        // 0x8008D810: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_8008D83C;
    }
    // 0x8008D810: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8008D814: jal         0x800F6D24
    // 0x8008D818: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    func_800F6D24(rdram, ctx);
        goto after_6;
    // 0x8008D818: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    after_6:
    // 0x8008D81C: sltiu       $t2, $v0, 0x1
    ctx->r10 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8008D820: beq         $t2, $zero, L_8008D83C
    if (ctx->r10 == 0) {
        // 0x8008D824: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_8008D83C;
    }
    // 0x8008D824: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x8008D828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008D82C: jal         0x80095748
    // 0x8008D830: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    func_80095748(rdram, ctx);
        goto after_7;
    // 0x8008D830: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    after_7:
    // 0x8008D834: sltu        $t3, $zero, $v0
    ctx->r11 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D838: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
L_8008D83C:
    // 0x8008D83C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008D840: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008D844: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008D848: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D850: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008D854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D858: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8008D85C: jal         0x800C6E38
    // 0x8008D860: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8008D860: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x8008D864: beql        $v0, $zero, L_8008D8D4
    if (ctx->r2 == 0) {
        // 0x8008D868: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8008D8D4;
    }
    goto skip_0;
    // 0x8008D868: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x8008D86C: jal         0x800A3304
    // 0x8008D870: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800A3304(rdram, ctx);
        goto after_1;
    // 0x8008D870: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x8008D874: beql        $v0, $zero, L_8008D8D4
    if (ctx->r2 == 0) {
        // 0x8008D878: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8008D8D4;
    }
    goto skip_1;
    // 0x8008D878: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x8008D87C: jal         0x80084CA0
    // 0x8008D880: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    _bafpctrl_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x8008D880: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x8008D884: bne         $v0, $zero, L_8008D8D0
    if (ctx->r2 != 0) {
        // 0x8008D888: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_8008D8D0;
    }
    // 0x8008D888: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8008D88C: jal         0x8009C128
    // 0x8008D890: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8009C128(rdram, ctx);
        goto after_3;
    // 0x8008D890: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_3:
    // 0x8008D894: jal         0x800EA05C
    // 0x8008D898: nop

    func_800EA05C(rdram, ctx);
        goto after_4;
    // 0x8008D898: nop

    after_4:
    // 0x8008D89C: addiu       $at, $zero, 0x117
    ctx->r1 = ADD32(0, 0X117);
    // 0x8008D8A0: bne         $v0, $at, L_8008D8C8
    if (ctx->r2 != ctx->r1) {
        // 0x8008D8A4: lwc1        $f4, 0x24($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
            goto L_8008D8C8;
    }
    // 0x8008D8A4: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8008D8A8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8008D8AC: lwc1        $f6, 0x4AD4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4AD4);
    // 0x8008D8B0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8008D8B4: nop

    // 0x8008D8B8: bc1f        L_8008D8C8
    if (!c1cs) {
        // 0x8008D8BC: nop
    
            goto L_8008D8C8;
    }
    // 0x8008D8BC: nop

    // 0x8008D8C0: b           L_8008D8D4
    // 0x8008D8C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8008D8D4;
    // 0x8008D8C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008D8C8:
    // 0x8008D8C8: b           L_8008D8D4
    // 0x8008D8CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8008D8D4;
    // 0x8008D8CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008D8D0:
    // 0x8008D8D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008D8D4:
    // 0x8008D8D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D8D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008D8DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_8008D8E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D8E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008D8E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D8EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008D8F0: jal         0x800C6E38
    // 0x8008D8F4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_800C6E38(rdram, ctx);
        goto after_0;
    // 0x8008D8F4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_0:
    // 0x8008D8F8: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D8FC: beq         $t6, $zero, L_8008D914
    if (ctx->r14 == 0) {
        // 0x8008D900: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8008D914;
    }
    // 0x8008D900: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8008D904: jal         0x800A3304
    // 0x8008D908: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A3304(rdram, ctx);
        goto after_1;
    // 0x8008D908: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8008D90C: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008D910: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8008D914:
    // 0x8008D914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008D91C: jr          $ra
    return;
;}
