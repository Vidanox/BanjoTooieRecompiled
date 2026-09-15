#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void _anseq_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082638: syscall     3
    recomp_syscall_handler(rdram, ctx, 0x80082638);
    return;
    // 0x8008263C: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _anseq_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082640: syscall     3
    recomp_syscall_handler(rdram, ctx, 0x80082640);
    return;
    // 0x80082644: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _anseq_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082648: syscall     3
    recomp_syscall_handler(rdram, ctx, 0x80082648);
    return;
    // 0x8008264C: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _anseq_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082650: syscall     3
    recomp_syscall_handler(rdram, ctx, 0x80082650);
    return;
    // 0x80082654: addi        $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void _anseq_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082658: syscall     3
    recomp_syscall_handler(rdram, ctx, 0x80082658);
    return;
    // 0x8008265C: addi        $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
;}
RECOMP_FUNC void _anseq_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082660: syscall     3
    recomp_syscall_handler(rdram, ctx, 0x80082660);
    return;
    // 0x80082664: addi        $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
;}
RECOMP_FUNC void _seqdefine_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082668: syscall     4
    recomp_syscall_handler(rdram, ctx, 0x80082668);
    return;
    // 0x8008266C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbanbflip_end(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082670: syscall     5
    recomp_syscall_handler(rdram, ctx, 0x80082670);
    return;
    // 0x80082674: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbanbflip_init(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082678: syscall     5
    recomp_syscall_handler(rdram, ctx, 0x80082678);
    return;
    // 0x8008267C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbanbflip_update(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082680: syscall     5
    recomp_syscall_handler(rdram, ctx, 0x80082680);
    return;
    // 0x80082684: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbanbflip_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082688: syscall     5
    recomp_syscall_handler(rdram, ctx, 0x80082688);
    return;
    // 0x8008268C: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbanpackwhack_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082690: syscall     6
    recomp_syscall_handler(rdram, ctx, 0x80082690);
    return;
    // 0x80082694: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbanpackwhack_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082698: syscall     6
    recomp_syscall_handler(rdram, ctx, 0x80082698);
    return;
    // 0x8008269C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbanpackwhack_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800826A0: syscall     6
    recomp_syscall_handler(rdram, ctx, 0x800826A0);
    return;
    // 0x800826A4: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbanpackwhack_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800826A8: syscall     6
    recomp_syscall_handler(rdram, ctx, 0x800826A8);
    return;
    // 0x800826AC: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbansack_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800826B0: syscall     7
    recomp_syscall_handler(rdram, ctx, 0x800826B0);
    return;
    // 0x800826B4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbansack_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800826B8: syscall     7
    recomp_syscall_handler(rdram, ctx, 0x800826B8);
    return;
    // 0x800826BC: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbansack_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800826C0: syscall     7
    recomp_syscall_handler(rdram, ctx, 0x800826C0);
    return;
    // 0x800826C4: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbansack_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800826C8: syscall     7
    recomp_syscall_handler(rdram, ctx, 0x800826C8);
    return;
    // 0x800826CC: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbansack_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800826D0: syscall     7
    recomp_syscall_handler(rdram, ctx, 0x800826D0);
    return;
    // 0x800826D4: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _bsbansack_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800826D8: syscall     7
    recomp_syscall_handler(rdram, ctx, 0x800826D8);
    return;
    // 0x800826DC: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _bsbansack_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800826E0: syscall     7
    recomp_syscall_handler(rdram, ctx, 0x800826E0);
    return;
    // 0x800826E4: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _bsbansack_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800826E8: syscall     7
    recomp_syscall_handler(rdram, ctx, 0x800826E8);
    return;
    // 0x800826EC: addi        $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void _bsbansack_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800826F0: syscall     7
    recomp_syscall_handler(rdram, ctx, 0x800826F0);
    return;
    // 0x800826F4: addi        $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
;}
RECOMP_FUNC void _bsbansack_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800826F8: syscall     7
    recomp_syscall_handler(rdram, ctx, 0x800826F8);
    return;
    // 0x800826FC: addi        $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
;}
RECOMP_FUNC void _bsbanshack_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082700: syscall     8
    recomp_syscall_handler(rdram, ctx, 0x80082700);
    return;
    // 0x80082704: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbanshack_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082708: syscall     8
    recomp_syscall_handler(rdram, ctx, 0x80082708);
    return;
    // 0x8008270C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbanshack_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082710: syscall     8
    recomp_syscall_handler(rdram, ctx, 0x80082710);
    return;
    // 0x80082714: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbanshack_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082718: syscall     8
    recomp_syscall_handler(rdram, ctx, 0x80082718);
    return;
    // 0x8008271C: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbanshack_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082720: syscall     8
    recomp_syscall_handler(rdram, ctx, 0x80082720);
    return;
    // 0x80082724: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _bsbanshack_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082728: syscall     8
    recomp_syscall_handler(rdram, ctx, 0x80082728);
    return;
    // 0x8008272C: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _bsbanshack_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082730: syscall     8
    recomp_syscall_handler(rdram, ctx, 0x80082730);
    return;
    // 0x80082734: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _bsbansnooze_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082738: syscall     9
    recomp_syscall_handler(rdram, ctx, 0x80082738);
    return;
    // 0x8008273C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbansnooze_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082740: syscall     9
    recomp_syscall_handler(rdram, ctx, 0x80082740);
    return;
    // 0x80082744: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbansnooze_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082748: syscall     9
    recomp_syscall_handler(rdram, ctx, 0x80082748);
    return;
    // 0x8008274C: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbansnooze_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082750: syscall     9
    recomp_syscall_handler(rdram, ctx, 0x80082750);
    return;
    // 0x80082754: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbansnooze_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082758: syscall     9
    recomp_syscall_handler(rdram, ctx, 0x80082758);
    return;
    // 0x8008275C: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _bsbansnooze_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082760: syscall     9
    recomp_syscall_handler(rdram, ctx, 0x80082760);
    return;
    // 0x80082764: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _bsbanswim_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082768: syscall     10
    recomp_syscall_handler(rdram, ctx, 0x80082768);
    return;
    // 0x8008276C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbanswim_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082770: syscall     10
    recomp_syscall_handler(rdram, ctx, 0x80082770);
    return;
    // 0x80082774: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbanswim_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082778: syscall     10
    recomp_syscall_handler(rdram, ctx, 0x80082778);
    return;
    // 0x8008277C: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbanswim_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082780: syscall     10
    recomp_syscall_handler(rdram, ctx, 0x80082780);
    return;
    // 0x80082784: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbbarge_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082788: syscall     11
    recomp_syscall_handler(rdram, ctx, 0x80082788);
    return;
    // 0x8008278C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbbilldrill_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082790: syscall     12
    recomp_syscall_handler(rdram, ctx, 0x80082790);
    return;
    // 0x80082794: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbbilldrill_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082798: syscall     12
    recomp_syscall_handler(rdram, ctx, 0x80082798);
    return;
    // 0x8008279C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbbilldrill_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800827A0: syscall     12
    recomp_syscall_handler(rdram, ctx, 0x800827A0);
    return;
    // 0x800827A4: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbbilldrill_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800827A8: syscall     12
    recomp_syscall_handler(rdram, ctx, 0x800827A8);
    return;
    // 0x800827AC: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbbuster_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800827B0: syscall     13
    recomp_syscall_handler(rdram, ctx, 0x800827B0);
    return;
    // 0x800827B4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbabykaz_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800827B8: syscall     14
    recomp_syscall_handler(rdram, ctx, 0x800827B8);
    return;
    // 0x800827BC: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbabykaz_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800827C0: syscall     14
    recomp_syscall_handler(rdram, ctx, 0x800827C0);
    return;
    // 0x800827C4: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbabykaz_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800827C8: syscall     14
    recomp_syscall_handler(rdram, ctx, 0x800827C8);
    return;
    // 0x800827CC: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbabykaz_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800827D0: syscall     14
    recomp_syscall_handler(rdram, ctx, 0x800827D0);
    return;
    // 0x800827D4: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbabykaz_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800827D8: syscall     14
    recomp_syscall_handler(rdram, ctx, 0x800827D8);
    return;
    // 0x800827DC: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _bsbabykaz_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800827E0: syscall     14
    recomp_syscall_handler(rdram, ctx, 0x800827E0);
    return;
    // 0x800827E4: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _bsbabykaz_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800827E8: syscall     14
    recomp_syscall_handler(rdram, ctx, 0x800827E8);
    return;
    // 0x800827EC: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _bsbabykaz_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800827F0: syscall     14
    recomp_syscall_handler(rdram, ctx, 0x800827F0);
    return;
    // 0x800827F4: addi        $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void _bsbabykaz_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800827F8: syscall     14
    recomp_syscall_handler(rdram, ctx, 0x800827F8);
    return;
    // 0x800827FC: addi        $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
;}
RECOMP_FUNC void _bsbabykaz_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082800: syscall     14
    recomp_syscall_handler(rdram, ctx, 0x80082800);
    return;
    // 0x80082804: addi        $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
;}
RECOMP_FUNC void _bsbabykaz_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082808: syscall     14
    recomp_syscall_handler(rdram, ctx, 0x80082808);
    return;
    // 0x8008280C: addi        $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
;}
RECOMP_FUNC void _bsbabykaz_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082810: syscall     14
    recomp_syscall_handler(rdram, ctx, 0x80082810);
    return;
    // 0x80082814: addi        $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
;}
RECOMP_FUNC void _bsbabykaz_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082818: syscall     14
    recomp_syscall_handler(rdram, ctx, 0x80082818);
    return;
    // 0x8008281C: addi        $t0, $zero, 0x30
    ctx->r8 = ADD32(0, 0X30);
;}
RECOMP_FUNC void _bsbabykaz_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082820: syscall     14
    recomp_syscall_handler(rdram, ctx, 0x80082820);
    return;
    // 0x80082824: addi        $t0, $zero, 0x34
    ctx->r8 = ADD32(0, 0X34);
;}
RECOMP_FUNC void _bsbabykaz_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082828: syscall     14
    recomp_syscall_handler(rdram, ctx, 0x80082828);
    return;
    // 0x8008282C: addi        $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
;}
RECOMP_FUNC void _bsbee_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082830: syscall     15
    recomp_syscall_handler(rdram, ctx, 0x80082830);
    return;
    // 0x80082834: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbee_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082838: syscall     15
    recomp_syscall_handler(rdram, ctx, 0x80082838);
    return;
    // 0x8008283C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbee_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082840: syscall     15
    recomp_syscall_handler(rdram, ctx, 0x80082840);
    return;
    // 0x80082844: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbeefly_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082848: syscall     16
    recomp_syscall_handler(rdram, ctx, 0x80082848);
    return;
    // 0x8008284C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbeefly_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082850: syscall     16
    recomp_syscall_handler(rdram, ctx, 0x80082850);
    return;
    // 0x80082854: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbeefly_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082858: syscall     16
    recomp_syscall_handler(rdram, ctx, 0x80082858);
    return;
    // 0x8008285C: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbeefly_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082860: syscall     16
    recomp_syscall_handler(rdram, ctx, 0x80082860);
    return;
    // 0x80082864: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbeefly_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082868: syscall     16
    recomp_syscall_handler(rdram, ctx, 0x80082868);
    return;
    // 0x8008286C: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _bsbeemain_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082870: syscall     17
    recomp_syscall_handler(rdram, ctx, 0x80082870);
    return;
    // 0x80082874: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbeemain_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082878: syscall     17
    recomp_syscall_handler(rdram, ctx, 0x80082878);
    return;
    // 0x8008287C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbeemain_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082880: syscall     17
    recomp_syscall_handler(rdram, ctx, 0x80082880);
    return;
    // 0x80082884: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbeemain_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082888: syscall     17
    recomp_syscall_handler(rdram, ctx, 0x80082888);
    return;
    // 0x8008288C: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbeemain_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082890: syscall     17
    recomp_syscall_handler(rdram, ctx, 0x80082890);
    return;
    // 0x80082894: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _bsbeemain_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082898: syscall     17
    recomp_syscall_handler(rdram, ctx, 0x80082898);
    return;
    // 0x8008289C: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _bsbeemain_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800828A0: syscall     17
    recomp_syscall_handler(rdram, ctx, 0x800828A0);
    return;
    // 0x800828A4: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _bsbeemain_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800828A8: syscall     17
    recomp_syscall_handler(rdram, ctx, 0x800828A8);
    return;
    // 0x800828AC: addi        $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void _bsbeemain_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800828B0: syscall     17
    recomp_syscall_handler(rdram, ctx, 0x800828B0);
    return;
    // 0x800828B4: addi        $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
;}
RECOMP_FUNC void _bsbeemain_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800828B8: syscall     17
    recomp_syscall_handler(rdram, ctx, 0x800828B8);
    return;
    // 0x800828BC: addi        $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
;}
RECOMP_FUNC void _bsbeemain_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800828C0: syscall     17
    recomp_syscall_handler(rdram, ctx, 0x800828C0);
    return;
    // 0x800828C4: addi        $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
;}
RECOMP_FUNC void _bsbeemain_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800828C8: syscall     17
    recomp_syscall_handler(rdram, ctx, 0x800828C8);
    return;
    // 0x800828CC: addi        $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
;}
RECOMP_FUNC void _bsbeggass_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800828D0: syscall     18
    recomp_syscall_handler(rdram, ctx, 0x800828D0);
    return;
    // 0x800828D4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbeggass_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800828D8: syscall     18
    recomp_syscall_handler(rdram, ctx, 0x800828D8);
    return;
    // 0x800828DC: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbeggass_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800828E0: syscall     18
    recomp_syscall_handler(rdram, ctx, 0x800828E0);
    return;
    // 0x800828E4: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbeggass_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800828E8: syscall     18
    recomp_syscall_handler(rdram, ctx, 0x800828E8);
    return;
    // 0x800828EC: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbegghead_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800828F0: syscall     19
    recomp_syscall_handler(rdram, ctx, 0x800828F0);
    return;
    // 0x800828F4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbegghead_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800828F8: syscall     19
    recomp_syscall_handler(rdram, ctx, 0x800828F8);
    return;
    // 0x800828FC: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbegghead_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082900: syscall     19
    recomp_syscall_handler(rdram, ctx, 0x80082900);
    return;
    // 0x80082904: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbegghead_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082908: syscall     19
    recomp_syscall_handler(rdram, ctx, 0x80082908);
    return;
    // 0x8008290C: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbflap_init(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082910: syscall     20
    recomp_syscall_handler(rdram, ctx, 0x80082910);
    return;
    // 0x80082914: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbflap_update(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082918: syscall     20
    recomp_syscall_handler(rdram, ctx, 0x80082918);
    return;
    // 0x8008291C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbflap_end(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082920: syscall     20
    recomp_syscall_handler(rdram, ctx, 0x80082920);
    return;
    // 0x80082924: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbflap_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082928: syscall     20
    recomp_syscall_handler(rdram, ctx, 0x80082928);
    return;
    // 0x8008292C: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbflip_end(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082930: syscall     21
    recomp_syscall_handler(rdram, ctx, 0x80082930);
    return;
    // 0x80082934: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbflip_init(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082938: syscall     21
    recomp_syscall_handler(rdram, ctx, 0x80082938);
    return;
    // 0x8008293C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbflip_update(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082940: syscall     21
    recomp_syscall_handler(rdram, ctx, 0x80082940);
    return;
    // 0x80082944: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbflip_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082948: syscall     21
    recomp_syscall_handler(rdram, ctx, 0x80082948);
    return;
    // 0x8008294C: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbfly_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082950: syscall     22
    recomp_syscall_handler(rdram, ctx, 0x80082950);
    return;
    // 0x80082954: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbfly_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082958: syscall     22
    recomp_syscall_handler(rdram, ctx, 0x80082958);
    return;
    // 0x8008295C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbfly_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082960: syscall     22
    recomp_syscall_handler(rdram, ctx, 0x80082960);
    return;
    // 0x80082964: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbfly_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082968: syscall     22
    recomp_syscall_handler(rdram, ctx, 0x80082968);
    return;
    // 0x8008296C: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbfly_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082970: syscall     22
    recomp_syscall_handler(rdram, ctx, 0x80082970);
    return;
    // 0x80082974: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _bsbfly_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082978: syscall     22
    recomp_syscall_handler(rdram, ctx, 0x80082978);
    return;
    // 0x8008297C: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _bsbfly_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082980: syscall     22
    recomp_syscall_handler(rdram, ctx, 0x80082980);
    return;
    // 0x80082984: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _bsbfly_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082988: syscall     22
    recomp_syscall_handler(rdram, ctx, 0x80082988);
    return;
    // 0x8008298C: addi        $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void _bsbfly_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082990: syscall     22
    recomp_syscall_handler(rdram, ctx, 0x80082990);
    return;
    // 0x80082994: addi        $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
;}
RECOMP_FUNC void _bsbfly_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082998: syscall     22
    recomp_syscall_handler(rdram, ctx, 0x80082998);
    return;
    // 0x8008299C: addi        $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
;}
RECOMP_FUNC void _bsbkflamethrower_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800829A0: syscall     23
    recomp_syscall_handler(rdram, ctx, 0x800829A0);
    return;
    // 0x800829A4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbkflamethrower_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800829A8: syscall     23
    recomp_syscall_handler(rdram, ctx, 0x800829A8);
    return;
    // 0x800829AC: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbkflamethrower_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800829B0: syscall     23
    recomp_syscall_handler(rdram, ctx, 0x800829B0);
    return;
    // 0x800829B4: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbkflamethrower_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800829B8: syscall     23
    recomp_syscall_handler(rdram, ctx, 0x800829B8);
    return;
    // 0x800829BC: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbkflamethrower_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800829C0: syscall     23
    recomp_syscall_handler(rdram, ctx, 0x800829C0);
    return;
    // 0x800829C4: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800829C8: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x800829C8);
    return;
    // 0x800829CC: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800829D0: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x800829D0);
    return;
    // 0x800829D4: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800829D8: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x800829D8);
    return;
    // 0x800829DC: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800829E0: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x800829E0);
    return;
    // 0x800829E4: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800829E8: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x800829E8);
    return;
    // 0x800829EC: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800829F0: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x800829F0);
    return;
    // 0x800829F4: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800829F8: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x800829F8);
    return;
    // 0x800829FC: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A00: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A00);
    return;
    // 0x80082A04: addi        $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A08: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A08);
    return;
    // 0x80082A0C: addi        $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A10: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A10);
    return;
    // 0x80082A14: addi        $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A18: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A18);
    return;
    // 0x80082A1C: addi        $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A20: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A20);
    return;
    // 0x80082A24: addi        $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A28: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A28);
    return;
    // 0x80082A2C: addi        $t0, $zero, 0x30
    ctx->r8 = ADD32(0, 0X30);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A30: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A30);
    return;
    // 0x80082A34: addi        $t0, $zero, 0x34
    ctx->r8 = ADD32(0, 0X34);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A38: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A38);
    return;
    // 0x80082A3C: addi        $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A40: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A40);
    return;
    // 0x80082A44: addi        $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A48: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A48);
    return;
    // 0x80082A4C: addi        $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A50: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A50);
    return;
    // 0x80082A54: addi        $t0, $zero, 0x44
    ctx->r8 = ADD32(0, 0X44);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A58: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A58);
    return;
    // 0x80082A5C: addi        $t0, $zero, 0x48
    ctx->r8 = ADD32(0, 0X48);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A60: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A60);
    return;
    // 0x80082A64: addi        $t0, $zero, 0x4C
    ctx->r8 = ADD32(0, 0X4C);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A68: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A68);
    return;
    // 0x80082A6C: addi        $t0, $zero, 0x50
    ctx->r8 = ADD32(0, 0X50);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A70: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A70);
    return;
    // 0x80082A74: addi        $t0, $zero, 0x54
    ctx->r8 = ADD32(0, 0X54);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A78: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A78);
    return;
    // 0x80082A7C: addi        $t0, $zero, 0x58
    ctx->r8 = ADD32(0, 0X58);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A80: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A80);
    return;
    // 0x80082A84: addi        $t0, $zero, 0x5C
    ctx->r8 = ADD32(0, 0X5C);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A88: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A88);
    return;
    // 0x80082A8C: addi        $t0, $zero, 0x60
    ctx->r8 = ADD32(0, 0X60);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A90: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A90);
    return;
    // 0x80082A94: addi        $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082A98: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082A98);
    return;
    // 0x80082A9C: addi        $t0, $zero, 0x68
    ctx->r8 = ADD32(0, 0X68);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082AA0: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082AA0);
    return;
    // 0x80082AA4: addi        $t0, $zero, 0x6C
    ctx->r8 = ADD32(0, 0X6C);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082AA8: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082AA8);
    return;
    // 0x80082AAC: addi        $t0, $zero, 0x70
    ctx->r8 = ADD32(0, 0X70);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082AB0: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082AB0);
    return;
    // 0x80082AB4: addi        $t0, $zero, 0x74
    ctx->r8 = ADD32(0, 0X74);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082AB8: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082AB8);
    return;
    // 0x80082ABC: addi        $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
;}
RECOMP_FUNC void _bsblongleg_entrypoint_31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082AC0: syscall     24
    recomp_syscall_handler(rdram, ctx, 0x80082AC0);
    return;
    // 0x80082AC4: addi        $t0, $zero, 0x7C
    ctx->r8 = ADD32(0, 0X7C);
;}
RECOMP_FUNC void _bsbpeck_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082AC8: syscall     25
    recomp_syscall_handler(rdram, ctx, 0x80082AC8);
    return;
    // 0x80082ACC: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbpeck_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082AD0: syscall     25
    recomp_syscall_handler(rdram, ctx, 0x80082AD0);
    return;
    // 0x80082AD4: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbpeck_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082AD8: syscall     25
    recomp_syscall_handler(rdram, ctx, 0x80082AD8);
    return;
    // 0x80082ADC: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbpeck_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082AE0: syscall     25
    recomp_syscall_handler(rdram, ctx, 0x80082AE0);
    return;
    // 0x80082AE4: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbreegullbash_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082AE8: syscall     26
    recomp_syscall_handler(rdram, ctx, 0x80082AE8);
    return;
    // 0x80082AEC: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbreegullbash_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082AF0: syscall     26
    recomp_syscall_handler(rdram, ctx, 0x80082AF0);
    return;
    // 0x80082AF4: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbreegullbash_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082AF8: syscall     26
    recomp_syscall_handler(rdram, ctx, 0x80082AF8);
    return;
    // 0x80082AFC: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbreegullbash_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B00: syscall     26
    recomp_syscall_handler(rdram, ctx, 0x80082B00);
    return;
    // 0x80082B04: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbshock_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B08: syscall     27
    recomp_syscall_handler(rdram, ctx, 0x80082B08);
    return;
    // 0x80082B0C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbshock_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B10: syscall     27
    recomp_syscall_handler(rdram, ctx, 0x80082B10);
    return;
    // 0x80082B14: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbshock_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B18: syscall     27
    recomp_syscall_handler(rdram, ctx, 0x80082B18);
    return;
    // 0x80082B1C: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbshock_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B20: syscall     27
    recomp_syscall_handler(rdram, ctx, 0x80082B20);
    return;
    // 0x80082B24: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbshock_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B28: syscall     27
    recomp_syscall_handler(rdram, ctx, 0x80082B28);
    return;
    // 0x80082B2C: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _bsbshock_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B30: syscall     27
    recomp_syscall_handler(rdram, ctx, 0x80082B30);
    return;
    // 0x80082B34: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _bsbshock_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B38: syscall     27
    recomp_syscall_handler(rdram, ctx, 0x80082B38);
    return;
    // 0x80082B3C: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _bsbshock_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B40: syscall     27
    recomp_syscall_handler(rdram, ctx, 0x80082B40);
    return;
    // 0x80082B44: addi        $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void _bsbswim_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B48: syscall     28
    recomp_syscall_handler(rdram, ctx, 0x80082B48);
    return;
    // 0x80082B4C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbswim_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B50: syscall     28
    recomp_syscall_handler(rdram, ctx, 0x80082B50);
    return;
    // 0x80082B54: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbswim_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B58: syscall     28
    recomp_syscall_handler(rdram, ctx, 0x80082B58);
    return;
    // 0x80082B5C: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbswim_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B60: syscall     28
    recomp_syscall_handler(rdram, ctx, 0x80082B60);
    return;
    // 0x80082B64: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbswim_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B68: syscall     28
    recomp_syscall_handler(rdram, ctx, 0x80082B68);
    return;
    // 0x80082B6C: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _bsbswim_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B70: syscall     28
    recomp_syscall_handler(rdram, ctx, 0x80082B70);
    return;
    // 0x80082B74: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _bsbswim_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B78: syscall     28
    recomp_syscall_handler(rdram, ctx, 0x80082B78);
    return;
    // 0x80082B7C: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _bsbswim_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B80: syscall     28
    recomp_syscall_handler(rdram, ctx, 0x80082B80);
    return;
    // 0x80082B84: addi        $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void _bsbswim_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B88: syscall     28
    recomp_syscall_handler(rdram, ctx, 0x80082B88);
    return;
    // 0x80082B8C: addi        $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
;}
RECOMP_FUNC void _bsbswim_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B90: syscall     28
    recomp_syscall_handler(rdram, ctx, 0x80082B90);
    return;
    // 0x80082B94: addi        $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
;}
RECOMP_FUNC void _bsbswim_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082B98: syscall     28
    recomp_syscall_handler(rdram, ctx, 0x80082B98);
    return;
    // 0x80082B9C: addi        $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
;}
RECOMP_FUNC void _bsbswim_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082BA0: syscall     28
    recomp_syscall_handler(rdram, ctx, 0x80082BA0);
    return;
    // 0x80082BA4: addi        $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
;}
RECOMP_FUNC void _bsbswim_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082BA8: syscall     28
    recomp_syscall_handler(rdram, ctx, 0x80082BA8);
    return;
    // 0x80082BAC: addi        $t0, $zero, 0x30
    ctx->r8 = ADD32(0, 0X30);
;}
RECOMP_FUNC void _bsbswim_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082BB0: syscall     28
    recomp_syscall_handler(rdram, ctx, 0x80082BB0);
    return;
    // 0x80082BB4: addi        $t0, $zero, 0x34
    ctx->r8 = ADD32(0, 0X34);
;}
RECOMP_FUNC void _bsbswim_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082BB8: syscall     28
    recomp_syscall_handler(rdram, ctx, 0x80082BB8);
    return;
    // 0x80082BBC: addi        $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082BC0: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082BC0);
    return;
    // 0x80082BC4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082BC8: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082BC8);
    return;
    // 0x80082BCC: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082BD0: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082BD0);
    return;
    // 0x80082BD4: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082BD8: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082BD8);
    return;
    // 0x80082BDC: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082BE0: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082BE0);
    return;
    // 0x80082BE4: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082BE8: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082BE8);
    return;
    // 0x80082BEC: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082BF0: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082BF0);
    return;
    // 0x80082BF4: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082BF8: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082BF8);
    return;
    // 0x80082BFC: addi        $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C00: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C00);
    return;
    // 0x80082C04: addi        $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C08: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C08);
    return;
    // 0x80082C0C: addi        $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C10: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C10);
    return;
    // 0x80082C14: addi        $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C18: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C18);
    return;
    // 0x80082C1C: addi        $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C20: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C20);
    return;
    // 0x80082C24: addi        $t0, $zero, 0x30
    ctx->r8 = ADD32(0, 0X30);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C28: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C28);
    return;
    // 0x80082C2C: addi        $t0, $zero, 0x34
    ctx->r8 = ADD32(0, 0X34);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C30: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C30);
    return;
    // 0x80082C34: addi        $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C38: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C38);
    return;
    // 0x80082C3C: addi        $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C40: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C40);
    return;
    // 0x80082C44: addi        $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C48: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C48);
    return;
    // 0x80082C4C: addi        $t0, $zero, 0x44
    ctx->r8 = ADD32(0, 0X44);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C50: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C50);
    return;
    // 0x80082C54: addi        $t0, $zero, 0x48
    ctx->r8 = ADD32(0, 0X48);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C58: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C58);
    return;
    // 0x80082C5C: addi        $t0, $zero, 0x4C
    ctx->r8 = ADD32(0, 0X4C);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C60: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C60);
    return;
    // 0x80082C64: addi        $t0, $zero, 0x50
    ctx->r8 = ADD32(0, 0X50);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C68: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C68);
    return;
    // 0x80082C6C: addi        $t0, $zero, 0x54
    ctx->r8 = ADD32(0, 0X54);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C70: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C70);
    return;
    // 0x80082C74: addi        $t0, $zero, 0x58
    ctx->r8 = ADD32(0, 0X58);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C78: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C78);
    return;
    // 0x80082C7C: addi        $t0, $zero, 0x5C
    ctx->r8 = ADD32(0, 0X5C);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C80: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C80);
    return;
    // 0x80082C84: addi        $t0, $zero, 0x60
    ctx->r8 = ADD32(0, 0X60);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C88: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C88);
    return;
    // 0x80082C8C: addi        $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C90: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C90);
    return;
    // 0x80082C94: addi        $t0, $zero, 0x68
    ctx->r8 = ADD32(0, 0X68);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082C98: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082C98);
    return;
    // 0x80082C9C: addi        $t0, $zero, 0x6C
    ctx->r8 = ADD32(0, 0X6C);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082CA0: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082CA0);
    return;
    // 0x80082CA4: addi        $t0, $zero, 0x70
    ctx->r8 = ADD32(0, 0X70);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082CA8: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082CA8);
    return;
    // 0x80082CAC: addi        $t0, $zero, 0x74
    ctx->r8 = ADD32(0, 0X74);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082CB0: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082CB0);
    return;
    // 0x80082CB4: addi        $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082CB8: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082CB8);
    return;
    // 0x80082CBC: addi        $t0, $zero, 0x7C
    ctx->r8 = ADD32(0, 0X7C);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082CC0: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082CC0);
    return;
    // 0x80082CC4: addi        $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_33(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082CC8: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082CC8);
    return;
    // 0x80082CCC: addi        $t0, $zero, 0x84
    ctx->r8 = ADD32(0, 0X84);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082CD0: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082CD0);
    return;
    // 0x80082CD4: addi        $t0, $zero, 0x88
    ctx->r8 = ADD32(0, 0X88);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082CD8: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082CD8);
    return;
    // 0x80082CDC: addi        $t0, $zero, 0x8C
    ctx->r8 = ADD32(0, 0X8C);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082CE0: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082CE0);
    return;
    // 0x80082CE4: addi        $t0, $zero, 0x90
    ctx->r8 = ADD32(0, 0X90);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082CE8: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082CE8);
    return;
    // 0x80082CEC: addi        $t0, $zero, 0x94
    ctx->r8 = ADD32(0, 0X94);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082CF0: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082CF0);
    return;
    // 0x80082CF4: addi        $t0, $zero, 0x98
    ctx->r8 = ADD32(0, 0X98);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082CF8: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082CF8);
    return;
    // 0x80082CFC: addi        $t0, $zero, 0x9C
    ctx->r8 = ADD32(0, 0X9C);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D00: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082D00);
    return;
    // 0x80082D04: addi        $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D08: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082D08);
    return;
    // 0x80082D0C: addi        $t0, $zero, 0xA4
    ctx->r8 = ADD32(0, 0XA4);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_42(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D10: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082D10);
    return;
    // 0x80082D14: addi        $t0, $zero, 0xA8
    ctx->r8 = ADD32(0, 0XA8);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D18: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082D18);
    return;
    // 0x80082D1C: addi        $t0, $zero, 0xAC
    ctx->r8 = ADD32(0, 0XAC);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D20: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082D20);
    return;
    // 0x80082D24: addi        $t0, $zero, 0xB0
    ctx->r8 = ADD32(0, 0XB0);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_45(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D28: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082D28);
    return;
    // 0x80082D2C: addi        $t0, $zero, 0xB4
    ctx->r8 = ADD32(0, 0XB4);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_46(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D30: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082D30);
    return;
    // 0x80082D34: addi        $t0, $zero, 0xB8
    ctx->r8 = ADD32(0, 0XB8);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D38: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082D38);
    return;
    // 0x80082D3C: addi        $t0, $zero, 0xBC
    ctx->r8 = ADD32(0, 0XBC);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D40: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082D40);
    return;
    // 0x80082D44: addi        $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D48: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082D48);
    return;
    // 0x80082D4C: addi        $t0, $zero, 0xC4
    ctx->r8 = ADD32(0, 0XC4);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D50: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082D50);
    return;
    // 0x80082D54: addi        $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_51(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D58: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082D58);
    return;
    // 0x80082D5C: addi        $t0, $zero, 0xCC
    ctx->r8 = ADD32(0, 0XCC);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_52(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D60: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082D60);
    return;
    // 0x80082D64: addi        $t0, $zero, 0xD0
    ctx->r8 = ADD32(0, 0XD0);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_53(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D68: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082D68);
    return;
    // 0x80082D6C: addi        $t0, $zero, 0xD4
    ctx->r8 = ADD32(0, 0XD4);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D70: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082D70);
    return;
    // 0x80082D74: addi        $t0, $zero, 0xD8
    ctx->r8 = ADD32(0, 0XD8);
;}
RECOMP_FUNC void _bsbtrot_entrypoint_55(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D78: syscall     29
    recomp_syscall_handler(rdram, ctx, 0x80082D78);
    return;
    // 0x80082D7C: addi        $t0, $zero, 0xDC
    ctx->r8 = ADD32(0, 0XDC);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D80: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082D80);
    return;
    // 0x80082D84: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D88: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082D88);
    return;
    // 0x80082D8C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D90: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082D90);
    return;
    // 0x80082D94: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082D98: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082D98);
    return;
    // 0x80082D9C: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082DA0: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082DA0);
    return;
    // 0x80082DA4: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082DA8: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082DA8);
    return;
    // 0x80082DAC: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082DB0: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082DB0);
    return;
    // 0x80082DB4: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082DB8: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082DB8);
    return;
    // 0x80082DBC: addi        $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082DC0: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082DC0);
    return;
    // 0x80082DC4: addi        $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082DC8: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082DC8);
    return;
    // 0x80082DCC: addi        $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082DD0: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082DD0);
    return;
    // 0x80082DD4: addi        $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082DD8: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082DD8);
    return;
    // 0x80082DDC: addi        $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082DE0: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082DE0);
    return;
    // 0x80082DE4: addi        $t0, $zero, 0x30
    ctx->r8 = ADD32(0, 0X30);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082DE8: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082DE8);
    return;
    // 0x80082DEC: addi        $t0, $zero, 0x34
    ctx->r8 = ADD32(0, 0X34);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082DF0: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082DF0);
    return;
    // 0x80082DF4: addi        $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082DF8: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082DF8);
    return;
    // 0x80082DFC: addi        $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082E00: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082E00);
    return;
    // 0x80082E04: addi        $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082E08: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082E08);
    return;
    // 0x80082E0C: addi        $t0, $zero, 0x44
    ctx->r8 = ADD32(0, 0X44);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082E10: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082E10);
    return;
    // 0x80082E14: addi        $t0, $zero, 0x48
    ctx->r8 = ADD32(0, 0X48);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082E18: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082E18);
    return;
    // 0x80082E1C: addi        $t0, $zero, 0x4C
    ctx->r8 = ADD32(0, 0X4C);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082E20: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082E20);
    return;
    // 0x80082E24: addi        $t0, $zero, 0x50
    ctx->r8 = ADD32(0, 0X50);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082E28: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082E28);
    return;
    // 0x80082E2C: addi        $t0, $zero, 0x54
    ctx->r8 = ADD32(0, 0X54);
;}
RECOMP_FUNC void _bsbwhirl_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082E30: syscall     30
    recomp_syscall_handler(rdram, ctx, 0x80082E30);
    return;
    // 0x80082E34: addi        $t0, $zero, 0x58
    ctx->r8 = ADD32(0, 0X58);
;}
