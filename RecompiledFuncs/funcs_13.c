#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void _chwaspstatue_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087638: syscall     599
    recomp_syscall_handler(rdram, ctx, 0x80087638);
    return;
    // 0x8008763C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _chwaspstatue_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087640: syscall     599
    recomp_syscall_handler(rdram, ctx, 0x80087640);
    return;
    // 0x80087644: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _chbubbleelevator_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087648: syscall     600
    recomp_syscall_handler(rdram, ctx, 0x80087648);
    return;
    // 0x8008764C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chfactorysparkroom_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087650: syscall     601
    recomp_syscall_handler(rdram, ctx, 0x80087650);
    return;
    // 0x80087654: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chfactorysparkroom_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087658: syscall     601
    recomp_syscall_handler(rdram, ctx, 0x80087658);
    return;
    // 0x8008765C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _chfantasylakebits_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087660: syscall     602
    recomp_syscall_handler(rdram, ctx, 0x80087660);
    return;
    // 0x80087664: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chfantasylakebits_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087668: syscall     602
    recomp_syscall_handler(rdram, ctx, 0x80087668);
    return;
    // 0x8008766C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _chfantasylakebits_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087670: syscall     602
    recomp_syscall_handler(rdram, ctx, 0x80087670);
    return;
    // 0x80087674: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _chfantasysafe_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087678: syscall     603
    recomp_syscall_handler(rdram, ctx, 0x80087678);
    return;
    // 0x8008767C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chfantasysafe_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087680: syscall     603
    recomp_syscall_handler(rdram, ctx, 0x80087680);
    return;
    // 0x80087684: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _chtrashcangame_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087688: syscall     604
    recomp_syscall_handler(rdram, ctx, 0x80087688);
    return;
    // 0x8008768C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chtrashcangame_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087690: syscall     604
    recomp_syscall_handler(rdram, ctx, 0x80087690);
    return;
    // 0x80087694: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _chtrashcangame_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087698: syscall     604
    recomp_syscall_handler(rdram, ctx, 0x80087698);
    return;
    // 0x8008769C: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _chtrashcangame_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800876A0: syscall     604
    recomp_syscall_handler(rdram, ctx, 0x800876A0);
    return;
    // 0x800876A4: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _chtrashcangame_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800876A8: syscall     604
    recomp_syscall_handler(rdram, ctx, 0x800876A8);
    return;
    // 0x800876AC: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _chfantasyathlete_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800876B0: syscall     605
    recomp_syscall_handler(rdram, ctx, 0x800876B0);
    return;
    // 0x800876B4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chfantasycannon_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800876B8: syscall     606
    recomp_syscall_handler(rdram, ctx, 0x800876B8);
    return;
    // 0x800876BC: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chfantasycannon_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800876C0: syscall     606
    recomp_syscall_handler(rdram, ctx, 0x800876C0);
    return;
    // 0x800876C4: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _chfantasyonion_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800876C8: syscall     607
    recomp_syscall_handler(rdram, ctx, 0x800876C8);
    return;
    // 0x800876CC: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chfantasyeyeball_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800876D0: syscall     608
    recomp_syscall_handler(rdram, ctx, 0x800876D0);
    return;
    // 0x800876D4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chfantasyeyeball_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800876D8: syscall     608
    recomp_syscall_handler(rdram, ctx, 0x800876D8);
    return;
    // 0x800876DC: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _chdinofamilysmall_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800876E0: syscall     609
    recomp_syscall_handler(rdram, ctx, 0x800876E0);
    return;
    // 0x800876E4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chdinofamilysick_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800876E8: syscall     610
    recomp_syscall_handler(rdram, ctx, 0x800876E8);
    return;
    // 0x800876EC: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chdinofamilysick_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800876F0: syscall     610
    recomp_syscall_handler(rdram, ctx, 0x800876F0);
    return;
    // 0x800876F4: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _chdinofamilysick_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800876F8: syscall     610
    recomp_syscall_handler(rdram, ctx, 0x800876F8);
    return;
    // 0x800876FC: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _choildrill_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087700: syscall     611
    recomp_syscall_handler(rdram, ctx, 0x80087700);
    return;
    // 0x80087704: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _choildrill_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087708: syscall     611
    recomp_syscall_handler(rdram, ctx, 0x80087708);
    return;
    // 0x8008770C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _choildrill_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087710: syscall     611
    recomp_syscall_handler(rdram, ctx, 0x80087710);
    return;
    // 0x80087714: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _chfloaty_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087718: syscall     612
    recomp_syscall_handler(rdram, ctx, 0x80087718);
    return;
    // 0x8008771C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chfloaty_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087720: syscall     612
    recomp_syscall_handler(rdram, ctx, 0x80087720);
    return;
    // 0x80087724: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _chdinofamilymother_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087728: syscall     613
    recomp_syscall_handler(rdram, ctx, 0x80087728);
    return;
    // 0x8008772C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chmumbohealspell_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087730: syscall     614
    recomp_syscall_handler(rdram, ctx, 0x80087730);
    return;
    // 0x80087734: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chdinofamilyfx_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087738: syscall     615
    recomp_syscall_handler(rdram, ctx, 0x80087738);
    return;
    // 0x8008773C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chlighthalo_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087740: syscall     616
    recomp_syscall_handler(rdram, ctx, 0x80087740);
    return;
    // 0x80087744: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chbubble_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087748: syscall     617
    recomp_syscall_handler(rdram, ctx, 0x80087748);
    return;
    // 0x8008774C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chcrashmat_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087750: syscall     618
    recomp_syscall_handler(rdram, ctx, 0x80087750);
    return;
    // 0x80087754: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chjellycastle_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087758: syscall     619
    recomp_syscall_handler(rdram, ctx, 0x80087758);
    return;
    // 0x8008775C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chfootwear_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087760: syscall     620
    recomp_syscall_handler(rdram, ctx, 0x80087760);
    return;
    // 0x80087764: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chfootwear_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087768: syscall     620
    recomp_syscall_handler(rdram, ctx, 0x80087768);
    return;
    // 0x8008776C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _chfootwear_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087770: syscall     620
    recomp_syscall_handler(rdram, ctx, 0x80087770);
    return;
    // 0x80087774: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _chfootwear_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087778: syscall     620
    recomp_syscall_handler(rdram, ctx, 0x80087778);
    return;
    // 0x8008777C: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _chfootwear_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087780: syscall     620
    recomp_syscall_handler(rdram, ctx, 0x80087780);
    return;
    // 0x80087784: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _chicekey_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087788: syscall     621
    recomp_syscall_handler(rdram, ctx, 0x80087788);
    return;
    // 0x8008778C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chheggy_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087790: syscall     622
    recomp_syscall_handler(rdram, ctx, 0x80087790);
    return;
    // 0x80087794: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chheggy_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087798: syscall     622
    recomp_syscall_handler(rdram, ctx, 0x80087798);
    return;
    // 0x8008779C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _chplatuegrill_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800877A0: syscall     623
    recomp_syscall_handler(rdram, ctx, 0x800877A0);
    return;
    // 0x800877A4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chplatuegrill_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800877A8: syscall     623
    recomp_syscall_handler(rdram, ctx, 0x800877A8);
    return;
    // 0x800877AC: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _chbkcart_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800877B0: syscall     624
    recomp_syscall_handler(rdram, ctx, 0x800877B0);
    return;
    // 0x800877B4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chicekeydoor_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800877B8: syscall     625
    recomp_syscall_handler(rdram, ctx, 0x800877B8);
    return;
    // 0x800877BC: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chsecreteggs_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800877C0: syscall     626
    recomp_syscall_handler(rdram, ctx, 0x800877C0);
    return;
    // 0x800877C4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chworlddoors_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800877C8: syscall     627
    recomp_syscall_handler(rdram, ctx, 0x800877C8);
    return;
    // 0x800877CC: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chfantasysafeswitch_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800877D0: syscall     628
    recomp_syscall_handler(rdram, ctx, 0x800877D0);
    return;
    // 0x800877D4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chquiz_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800877D8: syscall     629
    recomp_syscall_handler(rdram, ctx, 0x800877D8);
    return;
    // 0x800877DC: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chquiz_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800877E0: syscall     629
    recomp_syscall_handler(rdram, ctx, 0x800877E0);
    return;
    // 0x800877E4: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _chquiz_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800877E8: syscall     629
    recomp_syscall_handler(rdram, ctx, 0x800877E8);
    return;
    // 0x800877EC: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _chquiz_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800877F0: syscall     629
    recomp_syscall_handler(rdram, ctx, 0x800877F0);
    return;
    // 0x800877F4: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _chquiz_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800877F8: syscall     629
    recomp_syscall_handler(rdram, ctx, 0x800877F8);
    return;
    // 0x800877FC: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _chquizexitdoor_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087800: syscall     630
    recomp_syscall_handler(rdram, ctx, 0x80087800);
    return;
    // 0x80087804: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chtoxicroomprops_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087808: syscall     631
    recomp_syscall_handler(rdram, ctx, 0x80087808);
    return;
    // 0x8008780C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chtoxicroomprops_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087810: syscall     631
    recomp_syscall_handler(rdram, ctx, 0x80087810);
    return;
    // 0x80087814: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _chtoxicroomprops_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087818: syscall     631
    recomp_syscall_handler(rdram, ctx, 0x80087818);
    return;
    // 0x8008781C: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _chbobpanel_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087820: syscall     632
    recomp_syscall_handler(rdram, ctx, 0x80087820);
    return;
    // 0x80087824: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _chdeflect_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087828: syscall     633
    recomp_syscall_handler(rdram, ctx, 0x80087828);
    return;
    // 0x8008782C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _cosectionstor_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087830: syscall     634
    recomp_syscall_handler(rdram, ctx, 0x80087830);
    return;
    // 0x80087834: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _cosectionstor_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087838: syscall     634
    recomp_syscall_handler(rdram, ctx, 0x80087838);
    return;
    // 0x8008783C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _cosectionstor_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087840: syscall     634
    recomp_syscall_handler(rdram, ctx, 0x80087840);
    return;
    // 0x80087844: xori        $t0, $zero, 0x8
    ctx->r8 = 0 ^ 0X8;
;}
RECOMP_FUNC void _cosectionstor_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087848: syscall     634
    recomp_syscall_handler(rdram, ctx, 0x80087848);
    return;
    // 0x8008784C: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _cosectionstor_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087850: syscall     634
    recomp_syscall_handler(rdram, ctx, 0x80087850);
    return;
    // 0x80087854: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _cothemedll_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087858: syscall     635
    recomp_syscall_handler(rdram, ctx, 0x80087858);
    return;
    // 0x8008785C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _cothemedll_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087860: syscall     635
    recomp_syscall_handler(rdram, ctx, 0x80087860);
    return;
    // 0x80087864: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _cothemedll_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087868: syscall     635
    recomp_syscall_handler(rdram, ctx, 0x80087868);
    return;
    // 0x8008786C: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _cothemedll_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087870: syscall     635
    recomp_syscall_handler(rdram, ctx, 0x80087870);
    return;
    // 0x80087874: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _cothemedll_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087878: syscall     635
    recomp_syscall_handler(rdram, ctx, 0x80087878);
    return;
    // 0x8008787C: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _cothemedll_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087880: syscall     635
    recomp_syscall_handler(rdram, ctx, 0x80087880);
    return;
    // 0x80087884: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _cosection_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087888: syscall     637
    recomp_syscall_handler(rdram, ctx, 0x80087888);
    return;
    // 0x8008788C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _cosection_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087890: syscall     637
    recomp_syscall_handler(rdram, ctx, 0x80087890);
    return;
    // 0x80087894: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _plsu_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087898: syscall     638
    recomp_syscall_handler(rdram, ctx, 0x80087898);
    return;
    // 0x8008789C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _plsu_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800878A0: syscall     638
    recomp_syscall_handler(rdram, ctx, 0x800878A0);
    return;
    // 0x800878A4: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _plsu_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800878A8: syscall     638
    recomp_syscall_handler(rdram, ctx, 0x800878A8);
    return;
    // 0x800878AC: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _plsu_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800878B0: syscall     638
    recomp_syscall_handler(rdram, ctx, 0x800878B0);
    return;
    // 0x800878B4: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _plcamera_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800878B8: syscall     639
    recomp_syscall_handler(rdram, ctx, 0x800878B8);
    return;
    // 0x800878BC: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _plcamera_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800878C0: syscall     639
    recomp_syscall_handler(rdram, ctx, 0x800878C0);
    return;
    // 0x800878C4: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _plcamera_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800878C8: syscall     639
    recomp_syscall_handler(rdram, ctx, 0x800878C8);
    return;
    // 0x800878CC: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _plcamera_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800878D0: syscall     639
    recomp_syscall_handler(rdram, ctx, 0x800878D0);
    return;
    // 0x800878D4: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _plcamera_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800878D8: syscall     639
    recomp_syscall_handler(rdram, ctx, 0x800878D8);
    return;
    // 0x800878DC: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _plcamera_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800878E0: syscall     639
    recomp_syscall_handler(rdram, ctx, 0x800878E0);
    return;
    // 0x800878E4: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _plcamera_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800878E8: syscall     639
    recomp_syscall_handler(rdram, ctx, 0x800878E8);
    return;
    // 0x800878EC: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _plcamera_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800878F0: syscall     639
    recomp_syscall_handler(rdram, ctx, 0x800878F0);
    return;
    // 0x800878F4: addi        $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void _plcamera_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800878F8: syscall     639
    recomp_syscall_handler(rdram, ctx, 0x800878F8);
    return;
    // 0x800878FC: addi        $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
;}
RECOMP_FUNC void _plcamera_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087900: syscall     639
    recomp_syscall_handler(rdram, ctx, 0x80087900);
    return;
    // 0x80087904: addi        $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
;}
RECOMP_FUNC void _plcamera_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087908: syscall     639
    recomp_syscall_handler(rdram, ctx, 0x80087908);
    return;
    // 0x8008790C: addi        $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
;}
RECOMP_FUNC void _plcamera_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087910: syscall     639
    recomp_syscall_handler(rdram, ctx, 0x80087910);
    return;
    // 0x80087914: addi        $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
;}
RECOMP_FUNC void _plcamera_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087918: syscall     639
    recomp_syscall_handler(rdram, ctx, 0x80087918);
    return;
    // 0x8008791C: addi        $t0, $zero, 0x30
    ctx->r8 = ADD32(0, 0X30);
;}
RECOMP_FUNC void _plcamera_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087920: syscall     639
    recomp_syscall_handler(rdram, ctx, 0x80087920);
    return;
    // 0x80087924: addi        $t0, $zero, 0x34
    ctx->r8 = ADD32(0, 0X34);
;}
RECOMP_FUNC void _plcamera_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087928: syscall     639
    recomp_syscall_handler(rdram, ctx, 0x80087928);
    return;
    // 0x8008792C: addi        $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
;}
RECOMP_FUNC void _dbzone_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087930: syscall     640
    recomp_syscall_handler(rdram, ctx, 0x80087930);
    return;
    // 0x80087934: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _dbzone_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087938: syscall     640
    recomp_syscall_handler(rdram, ctx, 0x80087938);
    return;
    // 0x8008793C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _dbzone_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087940: syscall     640
    recomp_syscall_handler(rdram, ctx, 0x80087940);
    return;
    // 0x80087944: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _dbzone_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087948: syscall     640
    recomp_syscall_handler(rdram, ctx, 0x80087948);
    return;
    // 0x8008794C: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _dbzone_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087950: syscall     640
    recomp_syscall_handler(rdram, ctx, 0x80087950);
    return;
    // 0x80087954: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _dbpalette_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087958: syscall     641
    recomp_syscall_handler(rdram, ctx, 0x80087958);
    return;
    // 0x8008795C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _dbpalette_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087960: syscall     641
    recomp_syscall_handler(rdram, ctx, 0x80087960);
    return;
    // 0x80087964: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _dbshift_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087968: syscall     642
    recomp_syscall_handler(rdram, ctx, 0x80087968);
    return;
    // 0x8008796C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _dbshift_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087970: syscall     642
    recomp_syscall_handler(rdram, ctx, 0x80087970);
    return;
    // 0x80087974: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _dbmorph_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087978: syscall     643
    recomp_syscall_handler(rdram, ctx, 0x80087978);
    return;
    // 0x8008797C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _dbmorph_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087980: syscall     643
    recomp_syscall_handler(rdram, ctx, 0x80087980);
    return;
    // 0x80087984: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _dbmorph_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087988: syscall     643
    recomp_syscall_handler(rdram, ctx, 0x80087988);
    return;
    // 0x8008798C: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _dbmorph_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087990: syscall     643
    recomp_syscall_handler(rdram, ctx, 0x80087990);
    return;
    // 0x80087994: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _dbmorph_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087998: syscall     643
    recomp_syscall_handler(rdram, ctx, 0x80087998);
    return;
    // 0x8008799C: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _dbvpl_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800879A0: syscall     644
    recomp_syscall_handler(rdram, ctx, 0x800879A0);
    return;
    // 0x800879A4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _dbvpl_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800879A8: syscall     644
    recomp_syscall_handler(rdram, ctx, 0x800879A8);
    return;
    // 0x800879AC: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _dbanim_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800879B0: syscall     645
    recomp_syscall_handler(rdram, ctx, 0x800879B0);
    return;
    // 0x800879B4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _dbanim_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800879B8: syscall     645
    recomp_syscall_handler(rdram, ctx, 0x800879B8);
    return;
    // 0x800879BC: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _dbid_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800879C0: syscall     646
    recomp_syscall_handler(rdram, ctx, 0x800879C0);
    return;
    // 0x800879C4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _dbid_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800879C8: syscall     646
    recomp_syscall_handler(rdram, ctx, 0x800879C8);
    return;
    // 0x800879CC: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _dbid_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800879D0: syscall     646
    recomp_syscall_handler(rdram, ctx, 0x800879D0);
    return;
    // 0x800879D4: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _dbid_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800879D8: syscall     646
    recomp_syscall_handler(rdram, ctx, 0x800879D8);
    return;
    // 0x800879DC: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _dblight_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800879E0: syscall     647
    recomp_syscall_handler(rdram, ctx, 0x800879E0);
    return;
    // 0x800879E4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _dblight_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800879E8: syscall     647
    recomp_syscall_handler(rdram, ctx, 0x800879E8);
    return;
    // 0x800879EC: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _dbvtxnormal_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800879F0: syscall     648
    recomp_syscall_handler(rdram, ctx, 0x800879F0);
    return;
    // 0x800879F4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _dbvtxnormal_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800879F8: syscall     648
    recomp_syscall_handler(rdram, ctx, 0x800879F8);
    return;
    // 0x800879FC: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _dbvtxnormal_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A00: syscall     648
    recomp_syscall_handler(rdram, ctx, 0x80087A00);
    return;
    // 0x80087A04: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _dbskeleton_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A08: syscall     649
    recomp_syscall_handler(rdram, ctx, 0x80087A08);
    return;
    // 0x80087A0C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _dbskeleton_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A10: syscall     649
    recomp_syscall_handler(rdram, ctx, 0x80087A10);
    return;
    // 0x80087A14: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _dbskeleton_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A18: syscall     649
    recomp_syscall_handler(rdram, ctx, 0x80087A18);
    return;
    // 0x80087A1C: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _dbskeleton_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A20: syscall     649
    recomp_syscall_handler(rdram, ctx, 0x80087A20);
    return;
    // 0x80087A24: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _dbskeleton_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A28: syscall     649
    recomp_syscall_handler(rdram, ctx, 0x80087A28);
    return;
    // 0x80087A2C: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _dbtex_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A30: syscall     650
    recomp_syscall_handler(rdram, ctx, 0x80087A30);
    return;
    // 0x80087A34: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _dbtex_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A38: syscall     650
    recomp_syscall_handler(rdram, ctx, 0x80087A38);
    return;
    // 0x80087A3C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _gcgame_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A40: syscall     651
    recomp_syscall_handler(rdram, ctx, 0x80087A40);
    return;
    // 0x80087A44: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _gcgame_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A48: syscall     651
    recomp_syscall_handler(rdram, ctx, 0x80087A48);
    return;
    // 0x80087A4C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _gcgoto_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A50: syscall     652
    recomp_syscall_handler(rdram, ctx, 0x80087A50);
    return;
    // 0x80087A54: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _gcgoto_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A58: syscall     652
    recomp_syscall_handler(rdram, ctx, 0x80087A58);
    return;
    // 0x80087A5C: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _gcgoto_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A60: syscall     652
    recomp_syscall_handler(rdram, ctx, 0x80087A60);
    return;
    // 0x80087A64: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _gcgoto_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A68: syscall     652
    recomp_syscall_handler(rdram, ctx, 0x80087A68);
    return;
    // 0x80087A6C: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _gcgoto_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A70: syscall     652
    recomp_syscall_handler(rdram, ctx, 0x80087A70);
    return;
    // 0x80087A74: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _gcgoto_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A78: syscall     652
    recomp_syscall_handler(rdram, ctx, 0x80087A78);
    return;
    // 0x80087A7C: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _gcgoto_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A80: syscall     652
    recomp_syscall_handler(rdram, ctx, 0x80087A80);
    return;
    // 0x80087A84: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _gcgoto_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A88: syscall     652
    recomp_syscall_handler(rdram, ctx, 0x80087A88);
    return;
    // 0x80087A8C: addi        $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void _gcgoto_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A90: syscall     652
    recomp_syscall_handler(rdram, ctx, 0x80087A90);
    return;
    // 0x80087A94: addi        $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
;}
RECOMP_FUNC void _gcgoto_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087A98: syscall     652
    recomp_syscall_handler(rdram, ctx, 0x80087A98);
    return;
    // 0x80087A9C: addi        $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
;}
RECOMP_FUNC void _gcgoto_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087AA0: syscall     652
    recomp_syscall_handler(rdram, ctx, 0x80087AA0);
    return;
    // 0x80087AA4: addi        $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
;}
RECOMP_FUNC void _gcgoto_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087AA8: syscall     652
    recomp_syscall_handler(rdram, ctx, 0x80087AA8);
    return;
    // 0x80087AAC: addi        $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
;}
RECOMP_FUNC void _gcgoto_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087AB0: syscall     652
    recomp_syscall_handler(rdram, ctx, 0x80087AB0);
    return;
    // 0x80087AB4: addi        $t0, $zero, 0x30
    ctx->r8 = ADD32(0, 0X30);
;}
RECOMP_FUNC void _gcgoto_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087AB8: syscall     652
    recomp_syscall_handler(rdram, ctx, 0x80087AB8);
    return;
    // 0x80087ABC: addi        $t0, $zero, 0x34
    ctx->r8 = ADD32(0, 0X34);
;}
RECOMP_FUNC void _gcgoto_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087AC0: syscall     652
    recomp_syscall_handler(rdram, ctx, 0x80087AC0);
    return;
    // 0x80087AC4: addi        $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
;}
RECOMP_FUNC void _gcgoto_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087AC8: syscall     652
    recomp_syscall_handler(rdram, ctx, 0x80087AC8);
    return;
    // 0x80087ACC: addi        $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
;}
RECOMP_FUNC void _gcsectionskip_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087AD0: syscall     653
    recomp_syscall_handler(rdram, ctx, 0x80087AD0);
    return;
    // 0x80087AD4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _gcsectionskip_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087AD8: syscall     653
    recomp_syscall_handler(rdram, ctx, 0x80087AD8);
    return;
    // 0x80087ADC: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _gczoombox_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087AE0: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087AE0);
    return;
    // 0x80087AE4: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _gczoombox_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087AE8: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087AE8);
    return;
    // 0x80087AEC: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _gczoombox_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087AF0: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087AF0);
    return;
    // 0x80087AF4: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _gczoombox_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087AF8: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087AF8);
    return;
    // 0x80087AFC: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _gczoombox_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B00: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B00);
    return;
    // 0x80087B04: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _gczoombox_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B08: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B08);
    return;
    // 0x80087B0C: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _gczoombox_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B10: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B10);
    return;
    // 0x80087B14: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _gczoombox_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B18: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B18);
    return;
    // 0x80087B1C: addi        $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void _gczoombox_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B20: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B20);
    return;
    // 0x80087B24: addi        $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
;}
RECOMP_FUNC void _gczoombox_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B28: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B28);
    return;
    // 0x80087B2C: addi        $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
;}
RECOMP_FUNC void _gczoombox_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B30: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B30);
    return;
    // 0x80087B34: addi        $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
;}
RECOMP_FUNC void _gczoombox_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B38: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B38);
    return;
    // 0x80087B3C: addi        $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
;}
RECOMP_FUNC void _gczoombox_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B40: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B40);
    return;
    // 0x80087B44: addi        $t0, $zero, 0x30
    ctx->r8 = ADD32(0, 0X30);
;}
RECOMP_FUNC void _gczoombox_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B48: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B48);
    return;
    // 0x80087B4C: addi        $t0, $zero, 0x34
    ctx->r8 = ADD32(0, 0X34);
;}
RECOMP_FUNC void _gczoombox_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B50: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B50);
    return;
    // 0x80087B54: addi        $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
;}
RECOMP_FUNC void _gczoombox_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B58: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B58);
    return;
    // 0x80087B5C: addi        $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
;}
RECOMP_FUNC void _gczoombox_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B60: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B60);
    return;
    // 0x80087B64: addi        $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
;}
RECOMP_FUNC void _gczoombox_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B68: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B68);
    return;
    // 0x80087B6C: addi        $t0, $zero, 0x44
    ctx->r8 = ADD32(0, 0X44);
;}
RECOMP_FUNC void _gczoombox_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B70: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B70);
    return;
    // 0x80087B74: addi        $t0, $zero, 0x48
    ctx->r8 = ADD32(0, 0X48);
;}
RECOMP_FUNC void _gczoombox_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B78: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B78);
    return;
    // 0x80087B7C: addi        $t0, $zero, 0x4C
    ctx->r8 = ADD32(0, 0X4C);
;}
RECOMP_FUNC void _gczoombox_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B80: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B80);
    return;
    // 0x80087B84: addi        $t0, $zero, 0x50
    ctx->r8 = ADD32(0, 0X50);
;}
RECOMP_FUNC void _gczoombox_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B88: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B88);
    return;
    // 0x80087B8C: addi        $t0, $zero, 0x54
    ctx->r8 = ADD32(0, 0X54);
;}
RECOMP_FUNC void _gczoombox_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B90: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B90);
    return;
    // 0x80087B94: addi        $t0, $zero, 0x58
    ctx->r8 = ADD32(0, 0X58);
;}
RECOMP_FUNC void _gczoombox_entrypoint_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B98: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087B98);
    return;
    // 0x80087B9C: addi        $t0, $zero, 0x5C
    ctx->r8 = ADD32(0, 0X5C);
;}
RECOMP_FUNC void _gczoombox_entrypoint_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087BA0: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087BA0);
    return;
    // 0x80087BA4: addi        $t0, $zero, 0x60
    ctx->r8 = ADD32(0, 0X60);
;}
RECOMP_FUNC void _gczoombox_entrypoint_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087BA8: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087BA8);
    return;
    // 0x80087BAC: addi        $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
;}
RECOMP_FUNC void _gczoombox_entrypoint_26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087BB0: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087BB0);
    return;
    // 0x80087BB4: addi        $t0, $zero, 0x68
    ctx->r8 = ADD32(0, 0X68);
;}
RECOMP_FUNC void _gczoombox_entrypoint_27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087BB8: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087BB8);
    return;
    // 0x80087BBC: addi        $t0, $zero, 0x6C
    ctx->r8 = ADD32(0, 0X6C);
;}
RECOMP_FUNC void _gczoombox_entrypoint_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087BC0: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087BC0);
    return;
    // 0x80087BC4: addi        $t0, $zero, 0x70
    ctx->r8 = ADD32(0, 0X70);
;}
RECOMP_FUNC void _gczoombox_entrypoint_29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087BC8: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087BC8);
    return;
    // 0x80087BCC: addi        $t0, $zero, 0x74
    ctx->r8 = ADD32(0, 0X74);
;}
RECOMP_FUNC void _gczoombox_entrypoint_30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087BD0: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087BD0);
    return;
    // 0x80087BD4: addi        $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
;}
RECOMP_FUNC void _gczoombox_entrypoint_31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087BD8: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087BD8);
    return;
    // 0x80087BDC: addi        $t0, $zero, 0x7C
    ctx->r8 = ADD32(0, 0X7C);
;}
RECOMP_FUNC void _gczoombox_entrypoint_32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087BE0: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087BE0);
    return;
    // 0x80087BE4: addi        $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
;}
RECOMP_FUNC void _gczoombox_entrypoint_33(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087BE8: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087BE8);
    return;
    // 0x80087BEC: addi        $t0, $zero, 0x84
    ctx->r8 = ADD32(0, 0X84);
;}
RECOMP_FUNC void _gczoombox_entrypoint_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087BF0: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087BF0);
    return;
    // 0x80087BF4: addi        $t0, $zero, 0x88
    ctx->r8 = ADD32(0, 0X88);
;}
RECOMP_FUNC void _gczoombox_entrypoint_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087BF8: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087BF8);
    return;
    // 0x80087BFC: addi        $t0, $zero, 0x8C
    ctx->r8 = ADD32(0, 0X8C);
;}
RECOMP_FUNC void _gczoombox_entrypoint_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C00: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087C00);
    return;
    // 0x80087C04: addi        $t0, $zero, 0x90
    ctx->r8 = ADD32(0, 0X90);
;}
RECOMP_FUNC void _gczoombox_entrypoint_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C08: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087C08);
    return;
    // 0x80087C0C: addi        $t0, $zero, 0x94
    ctx->r8 = ADD32(0, 0X94);
;}
RECOMP_FUNC void _gczoombox_entrypoint_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C10: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087C10);
    return;
    // 0x80087C14: addi        $t0, $zero, 0x98
    ctx->r8 = ADD32(0, 0X98);
;}
RECOMP_FUNC void _gczoombox_entrypoint_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C18: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087C18);
    return;
    // 0x80087C1C: addi        $t0, $zero, 0x9C
    ctx->r8 = ADD32(0, 0X9C);
;}
RECOMP_FUNC void _gczoombox_entrypoint_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C20: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087C20);
    return;
    // 0x80087C24: addi        $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
;}
RECOMP_FUNC void _gczoombox_entrypoint_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C28: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087C28);
    return;
    // 0x80087C2C: addi        $t0, $zero, 0xA4
    ctx->r8 = ADD32(0, 0XA4);
;}
RECOMP_FUNC void _gczoombox_entrypoint_42(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C30: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087C30);
    return;
    // 0x80087C34: addi        $t0, $zero, 0xA8
    ctx->r8 = ADD32(0, 0XA8);
;}
RECOMP_FUNC void _gczoombox_entrypoint_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C38: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087C38);
    return;
    // 0x80087C3C: addi        $t0, $zero, 0xAC
    ctx->r8 = ADD32(0, 0XAC);
;}
RECOMP_FUNC void _gczoombox_entrypoint_44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C40: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087C40);
    return;
    // 0x80087C44: addi        $t0, $zero, 0xB0
    ctx->r8 = ADD32(0, 0XB0);
;}
RECOMP_FUNC void _gczoombox_entrypoint_45(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C48: syscall     654
    recomp_syscall_handler(rdram, ctx, 0x80087C48);
    return;
    // 0x80087C4C: addi        $t0, $zero, 0xB4
    ctx->r8 = ADD32(0, 0XB4);
;}
RECOMP_FUNC void _gccubeDll_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C50: syscall     655
    recomp_syscall_handler(rdram, ctx, 0x80087C50);
    return;
    // 0x80087C54: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _gccubeDll_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C58: syscall     655
    recomp_syscall_handler(rdram, ctx, 0x80087C58);
    return;
    // 0x80087C5C: xori        $t0, $zero, 0x4
    ctx->r8 = 0 ^ 0X4;
;}
RECOMP_FUNC void _gccubeDll_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C60: syscall     655
    recomp_syscall_handler(rdram, ctx, 0x80087C60);
    return;
    // 0x80087C64: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _gccubeDll_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C68: syscall     655
    recomp_syscall_handler(rdram, ctx, 0x80087C68);
    return;
    // 0x80087C6C: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _gccubeDll_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C70: syscall     655
    recomp_syscall_handler(rdram, ctx, 0x80087C70);
    return;
    // 0x80087C74: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _gccubeDll_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C78: syscall     655
    recomp_syscall_handler(rdram, ctx, 0x80087C78);
    return;
    // 0x80087C7C: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _gccubeDll_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C80: syscall     655
    recomp_syscall_handler(rdram, ctx, 0x80087C80);
    return;
    // 0x80087C84: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _gccubeDll_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C88: syscall     655
    recomp_syscall_handler(rdram, ctx, 0x80087C88);
    return;
    // 0x80087C8C: addi        $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void _gcdialogDll_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C90: syscall     656
    recomp_syscall_handler(rdram, ctx, 0x80087C90);
    return;
    // 0x80087C94: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C98: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087C98);
    return;
    // 0x80087C9C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087CA0: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087CA0);
    return;
    // 0x80087CA4: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087CA8: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087CA8);
    return;
    // 0x80087CAC: addi        $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087CB0: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087CB0);
    return;
    // 0x80087CB4: addi        $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087CB8: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087CB8);
    return;
    // 0x80087CBC: addi        $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087CC0: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087CC0);
    return;
    // 0x80087CC4: addi        $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087CC8: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087CC8);
    return;
    // 0x80087CCC: addi        $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087CD0: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087CD0);
    return;
    // 0x80087CD4: addi        $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087CD8: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087CD8);
    return;
    // 0x80087CDC: addi        $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087CE0: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087CE0);
    return;
    // 0x80087CE4: addi        $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087CE8: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087CE8);
    return;
    // 0x80087CEC: addi        $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087CF0: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087CF0);
    return;
    // 0x80087CF4: addi        $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087CF8: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087CF8);
    return;
    // 0x80087CFC: addi        $t0, $zero, 0x30
    ctx->r8 = ADD32(0, 0X30);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D00: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D00);
    return;
    // 0x80087D04: addi        $t0, $zero, 0x34
    ctx->r8 = ADD32(0, 0X34);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D08: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D08);
    return;
    // 0x80087D0C: addi        $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D10: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D10);
    return;
    // 0x80087D14: addi        $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D18: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D18);
    return;
    // 0x80087D1C: addi        $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D20: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D20);
    return;
    // 0x80087D24: addi        $t0, $zero, 0x44
    ctx->r8 = ADD32(0, 0X44);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D28: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D28);
    return;
    // 0x80087D2C: addi        $t0, $zero, 0x48
    ctx->r8 = ADD32(0, 0X48);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D30: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D30);
    return;
    // 0x80087D34: addi        $t0, $zero, 0x4C
    ctx->r8 = ADD32(0, 0X4C);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D38: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D38);
    return;
    // 0x80087D3C: addi        $t0, $zero, 0x50
    ctx->r8 = ADD32(0, 0X50);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D40: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D40);
    return;
    // 0x80087D44: addi        $t0, $zero, 0x54
    ctx->r8 = ADD32(0, 0X54);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D48: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D48);
    return;
    // 0x80087D4C: addi        $t0, $zero, 0x58
    ctx->r8 = ADD32(0, 0X58);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D50: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D50);
    return;
    // 0x80087D54: addi        $t0, $zero, 0x5C
    ctx->r8 = ADD32(0, 0X5C);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D58: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D58);
    return;
    // 0x80087D5C: addi        $t0, $zero, 0x60
    ctx->r8 = ADD32(0, 0X60);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D60: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D60);
    return;
    // 0x80087D64: addi        $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D68: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D68);
    return;
    // 0x80087D6C: addi        $t0, $zero, 0x68
    ctx->r8 = ADD32(0, 0X68);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D70: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D70);
    return;
    // 0x80087D74: addi        $t0, $zero, 0x6C
    ctx->r8 = ADD32(0, 0X6C);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D78: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D78);
    return;
    // 0x80087D7C: addi        $t0, $zero, 0x70
    ctx->r8 = ADD32(0, 0X70);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D80: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D80);
    return;
    // 0x80087D84: addi        $t0, $zero, 0x74
    ctx->r8 = ADD32(0, 0X74);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D88: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D88);
    return;
    // 0x80087D8C: addi        $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D90: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D90);
    return;
    // 0x80087D94: addi        $t0, $zero, 0x7C
    ctx->r8 = ADD32(0, 0X7C);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D98: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087D98);
    return;
    // 0x80087D9C: addi        $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_33(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087DA0: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087DA0);
    return;
    // 0x80087DA4: addi        $t0, $zero, 0x84
    ctx->r8 = ADD32(0, 0X84);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087DA8: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087DA8);
    return;
    // 0x80087DAC: addi        $t0, $zero, 0x88
    ctx->r8 = ADD32(0, 0X88);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087DB0: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087DB0);
    return;
    // 0x80087DB4: addi        $t0, $zero, 0x8C
    ctx->r8 = ADD32(0, 0X8C);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087DB8: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087DB8);
    return;
    // 0x80087DBC: addi        $t0, $zero, 0x90
    ctx->r8 = ADD32(0, 0X90);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087DC0: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087DC0);
    return;
    // 0x80087DC4: addi        $t0, $zero, 0x94
    ctx->r8 = ADD32(0, 0X94);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087DC8: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087DC8);
    return;
    // 0x80087DCC: addi        $t0, $zero, 0x98
    ctx->r8 = ADD32(0, 0X98);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087DD0: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087DD0);
    return;
    // 0x80087DD4: addi        $t0, $zero, 0x9C
    ctx->r8 = ADD32(0, 0X9C);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087DD8: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087DD8);
    return;
    // 0x80087DDC: addi        $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087DE0: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087DE0);
    return;
    // 0x80087DE4: addi        $t0, $zero, 0xA4
    ctx->r8 = ADD32(0, 0XA4);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_42(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087DE8: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087DE8);
    return;
    // 0x80087DEC: addi        $t0, $zero, 0xA8
    ctx->r8 = ADD32(0, 0XA8);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087DF0: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087DF0);
    return;
    // 0x80087DF4: addi        $t0, $zero, 0xAC
    ctx->r8 = ADD32(0, 0XAC);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087DF8: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087DF8);
    return;
    // 0x80087DFC: addi        $t0, $zero, 0xB0
    ctx->r8 = ADD32(0, 0XB0);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_45(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087E00: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087E00);
    return;
    // 0x80087E04: addi        $t0, $zero, 0xB4
    ctx->r8 = ADD32(0, 0XB4);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_46(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087E08: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087E08);
    return;
    // 0x80087E0C: addi        $t0, $zero, 0xB8
    ctx->r8 = ADD32(0, 0XB8);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087E10: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087E10);
    return;
    // 0x80087E14: addi        $t0, $zero, 0xBC
    ctx->r8 = ADD32(0, 0XBC);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087E18: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087E18);
    return;
    // 0x80087E1C: addi        $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
;}
RECOMP_FUNC void _gcnewoption_entrypoint_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087E20: syscall     657
    recomp_syscall_handler(rdram, ctx, 0x80087E20);
    return;
    // 0x80087E24: addi        $t0, $zero, 0xC4
    ctx->r8 = ADD32(0, 0XC4);
;}
RECOMP_FUNC void _gcdialogexec_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087E28: syscall     658
    recomp_syscall_handler(rdram, ctx, 0x80087E28);
    return;
    // 0x80087E2C: addi        $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
;}
RECOMP_FUNC void _gcdialogexec_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087E30: syscall     658
    recomp_syscall_handler(rdram, ctx, 0x80087E30);
    return;
    // 0x80087E34: addi        $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
;}
