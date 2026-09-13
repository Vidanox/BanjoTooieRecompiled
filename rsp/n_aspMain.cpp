#include "librecomp/rsp.hpp"
#include "librecomp/rsp_vu_impl.hpp"
#include <map>
#include <vector>

using RspUcodePermutationFunc = RspExitReason(uint8_t* rdram, RspContext* ctx);

RspExitReason n_aspMain_initial(uint8_t* rdram, RspContext* ctx);
RspExitReason n_aspMain0(uint8_t* rdram, RspContext* ctx);

static const std::map<uint32_t, uint32_t> imemToSlot = {
    { 0x1238, 0 },
};

static const std::vector<std::map<uint32_t, uint32_t>> offsetToOverlay = {
    {
        { 0x0F80, 0 },
    },
};

static RspUcodePermutationFunc* permutations[] = {
    n_aspMain0,
};

RspExitReason n_aspMain(uint8_t* rdram, uint32_t ucode_addr) {
    RspContext ctx{};
    uint32_t slots[] = {0};

    RspExitReason exitReason = n_aspMain_initial(rdram, &ctx);

    while (exitReason == RspExitReason::SwapOverlay) {
        uint32_t slot = imemToSlot.at(ctx.dma_mem_address);
        uint32_t overlay = offsetToOverlay.at(slot).at(ctx.dma_dram_address - ucode_addr);
        slots[slot] = overlay;

        RspUcodePermutationFunc* permutationFunc = permutations[slots[0] * 1];
        exitReason = permutationFunc(rdram, &ctx);
    }

    return exitReason;
}

RspExitReason n_aspMain_initial(uint8_t* rdram, RspContext* ctx) {
    uint32_t                 r1 = ctx->r1,   r2 = ctx->r2,   r3 = ctx->r3,   r4 = ctx->r4,   r5 = ctx->r5,   r6 = ctx->r6,   r7 = ctx->r7;
    uint32_t  r8 = ctx->r8,  r9 = ctx->r9,   r10 = ctx->r10, r11 = ctx->r11, r12 = ctx->r12, r13 = ctx->r13, r14 = ctx->r14, r15 = ctx->r15;
    uint32_t r16 = ctx->r16, r17 = ctx->r17, r18 = ctx->r18, r19 = ctx->r19, r20 = ctx->r20, r21 = ctx->r21, r22 = ctx->r22, r23 = ctx->r23;
    uint32_t r24 = ctx->r24, r25 = ctx->r25, r26 = ctx->r26, r27 = ctx->r27, r28 = ctx->r28, r29 = ctx->r29, r30 = ctx->r30, r31 = ctx->r31;
    uint32_t dma_mem_address = ctx->dma_mem_address, dma_dram_address = ctx->dma_dram_address, jump_target = ctx->jump_target;
    const char * debug_file = NULL; int debug_line = 0;
    RSP rsp = ctx->rsp;
    r1 = 0xFC0;
    // mfc0        $5, DPC_STATUS
    r5 = 0;
    // lw          $28, 0x30($1)
    r28 = RSP_MEM_W_LOAD(0X30, r1);
    // lw          $27, 0x34($1)
    r27 = RSP_MEM_W_LOAD(0X34, r1);
    // andi        $4, $5, 0x1
    r4 = r5 & 0X1;
    // beq         $4, $zero, L_10AC
    if (r4 == 0) {
        // andi        $4, $5, 0x100
        r4 = r5 & 0X100;
        goto L_10AC;
    }
    // andi        $4, $5, 0x100
    r4 = r5 & 0X100;
    // beq         $4, $zero, L_10AC
    if (r4 == 0) {
        // mfc0        $4, DPC_STATUS
        r4 = 0;
        goto L_10AC;
    }
    // mfc0        $4, DPC_STATUS
    r4 = 0;
L_10A0:
    // andi        $4, $4, 0x100
    r4 = r4 & 0X100;
    // bgtz        $4, L_10A0
    if (RSP_SIGNED(r4) > 0) {
        // mfc0        $4, DPC_STATUS
        r4 = 0;
        goto L_10A0;
    }
    // mfc0        $4, DPC_STATUS
    r4 = 0;
L_10AC:
    // addi        $24, $zero, 0xFA0
    r24 = RSP_ADD32(0, 0XFA0);
    // lw          $5, 0x10($1)
    r5 = RSP_MEM_W_LOAD(0X10, r1);
    // lw          $4, 0x0($zero)
    r4 = RSP_MEM_W_LOAD(0X0, 0);
    // add         $4, $4, $5
    r4 = RSP_ADD32(r4, r5);
    // sw          $4, 0x0($zero)
    RSP_MEM_W_STORE(0X0, 0, r4);
    // lw          $4, 0x8($zero)
    r4 = RSP_MEM_W_LOAD(0X8, 0);
    // add         $4, $4, $5
    r4 = RSP_ADD32(r4, r5);
    // sw          $4, 0x8($zero)
    RSP_MEM_W_STORE(0X8, 0, r4);
    // lw          $5, 0x18($1)
    r5 = RSP_MEM_W_LOAD(0X18, r1);
    // sw          $5, 0xFF8($zero)
    RSP_MEM_W_STORE(0XFF8, 0, r5);
    // jal         0x1150
    r31 = 0x10DC;
    // add         $2, $zero, $28
    r2 = RSP_ADD32(0, r28);
    goto L_1150;
    // add         $2, $zero, $28
    r2 = RSP_ADD32(0, r28);
L_10DC:
    // mfc0        $2, SP_DMA_BUSY
    r2 = 0;
L_10E0:
    // bne         $2, $zero, L_10E0
    if (r2 != 0) {
        // mfc0        $2, SP_DMA_BUSY
        r2 = 0;
        goto L_10E0;
    }
    // mfc0        $2, SP_DMA_BUSY
    r2 = 0;
L_10E8:
    // lw          $26, 0x0($29)
    r26 = RSP_MEM_W_LOAD(0X0, r29);
    // lw          $25, 0x4($29)
    r25 = RSP_MEM_W_LOAD(0X4, r29);
    // addi        $28, $28, 0x8
    r28 = RSP_ADD32(r28, 0X8);
    // srl         $1, $26, 23
    r1 = S32(U32(r26) >> 23);
    // andi        $1, $1, 0xFE
    r1 = r1 & 0XFE;
    // lh          $1, 0x10($1)
    r1 = RSP_MEM_H_LOAD(0X10, r1);
    // jr          $1
    jump_target = r1;
    debug_file = __FILE__; debug_line = __LINE__;
    // addi        $27, $27, -0x8
    r27 = RSP_ADD32(r27, -0X8);
    goto do_indirect_jump;
    // addi        $27, $27, -0x8
    r27 = RSP_ADD32(r27, -0X8);
    // break       0
    return RspExitReason::Broke;
L_110C:
    // bgtz        $30, L_10E8
    if (RSP_SIGNED(r30) > 0) {
        // addi        $29, $29, 0x8
        r29 = RSP_ADD32(r29, 0X8);
        goto L_10E8;
    }
    // addi        $29, $29, 0x8
    r29 = RSP_ADD32(r29, 0X8);
    // blez        $27, L_112C
    if (RSP_SIGNED(r27) <= 0) {
        // ori         $1, $zero, 0x4000
        r1 = 0 | 0X4000;
        goto L_112C;
    }
    // ori         $1, $zero, 0x4000
    r1 = 0 | 0X4000;
    // jal         0x1150
    r31 = 0x1124;
    // add         $2, $zero, $28
    r2 = RSP_ADD32(0, r28);
    goto L_1150;
    // add         $2, $zero, $28
    r2 = RSP_ADD32(0, r28);
L_1124:
    // j           L_10E0
    // mfc0        $2, SP_DMA_BUSY
    r2 = 0;
    goto L_10E0;
    // mfc0        $2, SP_DMA_BUSY
    r2 = 0;
L_112C:
    // mfc0        $2, SP_DMA_BUSY
    r2 = 0;
    // bne         $2, $zero, L_112C
    if (r2 != 0) {
        // nop
    
        goto L_112C;
    }
    // nop

    // mtc0        $zero, SP_SEMAPHORE
    // mtc0        $1, SP_STATUS
    // break       0
    return RspExitReason::Broke;
    // nop

L_1148:
    // b           L_1148
    // nop

    goto L_1148;
    // nop

L_1150:
    // addi        $5, $ra, 0x0
    r5 = RSP_ADD32(r31, 0X0);
    // addi        $3, $27, 0x0
    r3 = RSP_ADD32(r27, 0X0);
    // addi        $4, $3, -0x140
    r4 = RSP_ADD32(r3, -0X140);
    // blez        $4, L_1168
    if (RSP_SIGNED(r4) <= 0) {
        // addi        $1, $zero, 0x2C0
        r1 = RSP_ADD32(0, 0X2C0);
        goto L_1168;
    }
    // addi        $1, $zero, 0x2C0
    r1 = RSP_ADD32(0, 0X2C0);
    // addi        $3, $zero, 0x140
    r3 = RSP_ADD32(0, 0X140);
L_1168:
    // addi        $30, $3, 0x0
    r30 = RSP_ADD32(r3, 0X0);
    // jal         0x117C
    r31 = 0x1174;
    // addi        $3, $3, -0x1
    r3 = RSP_ADD32(r3, -0X1);
    goto L_117C;
    // addi        $3, $3, -0x1
    r3 = RSP_ADD32(r3, -0X1);
L_1174:
    // jr          $5
    jump_target = r5;
    debug_file = __FILE__; debug_line = __LINE__;
    // addi        $29, $zero, 0x2C0
    r29 = RSP_ADD32(0, 0X2C0);
    goto do_indirect_jump;
    // addi        $29, $zero, 0x2C0
    r29 = RSP_ADD32(0, 0X2C0);
L_117C:
    // mfc0        $4, SP_DMA_FULL
    r4 = 0;
L_1180:
    // bne         $4, $zero, L_1180
    if (r4 != 0) {
        // mfc0        $4, SP_DMA_FULL
        r4 = 0;
        goto L_1180;
    }
    // mfc0        $4, SP_DMA_FULL
    r4 = 0;
    // mtc0        $1, SP_MEM_ADDR
    SET_DMA_MEM(r1);
    // mtc0        $2, SP_DRAM_ADDR
    SET_DMA_DRAM(r2);
    // jr          $ra
    jump_target = r31;
    debug_file = __FILE__; debug_line = __LINE__;
    // mtc0        $3, SP_RD_LEN
    if (dma_mem_address & 0x1000) {
        ctx->resume_address = 0x1194;
        ctx->resume_delay = true;
        goto do_overlay_swap;
    }
    DO_DMA_READ(r3);
    goto do_indirect_jump;
    // mtc0        $3, SP_RD_LEN
    if (dma_mem_address & 0x1000) {
        ctx->resume_address = 0x1194;
        ctx->resume_delay = false;
        goto do_overlay_swap;
    }
    DO_DMA_READ(r3);
L_1198:
    // mfc0        $4, SP_DMA_FULL
    r4 = 0;
L_119C:
    // bne         $4, $zero, L_119C
    if (r4 != 0) {
        // mfc0        $4, SP_DMA_FULL
        r4 = 0;
        goto L_119C;
    }
    // mfc0        $4, SP_DMA_FULL
    r4 = 0;
    // mtc0        $1, SP_MEM_ADDR
    SET_DMA_MEM(r1);
    // mtc0        $2, SP_DRAM_ADDR
    SET_DMA_DRAM(r2);
    // jr          $ra
    jump_target = r31;
    debug_file = __FILE__; debug_line = __LINE__;
    // mtc0        $3, SP_WR_LEN
    DO_DMA_WRITE(r3);
    goto do_indirect_jump;
    // mtc0        $3, SP_WR_LEN
    DO_DMA_WRITE(r3);
L_11B4:
    // mfc0        $4, SP_DMA_BUSY
    r4 = 0;
    // bne         $4, $zero, L_11B4
    if (r4 != 0) {
        // nop
    
        goto L_11B4;
    }
    // nop

    // jr          $ra
    jump_target = r31;
    debug_file = __FILE__; debug_line = __LINE__;
    // nop

    goto do_indirect_jump;
    // nop

    // lh          $3, 0x4($zero)
    r3 = RSP_MEM_H_LOAD(0X4, 0);
    // lw          $2, 0x0($zero)
    r2 = RSP_MEM_W_LOAD(0X0, 0);
    // lh          $1, 0xE($zero)
    r1 = RSP_MEM_H_LOAD(0XE, 0);
    // add         $2, $2, $1
    r2 = RSP_ADD32(r2, r1);
    // sub         $3, $3, $1
    r3 = RSP_SUB32(r3, r1);
    // lh          $1, 0x6($zero)
    r1 = RSP_MEM_H_LOAD(0X6, 0);
    // sub         $2, $2, $1
    r2 = RSP_SUB32(r2, r1);
    // add         $3, $3, $1
    r3 = RSP_ADD32(r3, r1);
    // jal         0x117C
    r31 = 0x11F0;
    // lh          $1, 0xE($zero)
    r1 = RSP_MEM_H_LOAD(0XE, 0);
    goto L_117C;
    // lh          $1, 0xE($zero)
    r1 = RSP_MEM_H_LOAD(0XE, 0);
L_11F0:
    // lw          $2, 0xFF8($zero)
    r2 = RSP_MEM_W_LOAD(0XFF8, 0);
    // addi        $2, $2, 0x10
    r2 = RSP_ADD32(r2, 0X10);
    // addi        $1, $zero, 0x10
    r1 = RSP_ADD32(0, 0X10);
    // jal         0x117C
    r31 = 0x1204;
    // addi        $3, $zero, 0x2AF
    r3 = RSP_ADD32(0, 0X2AF);
    goto L_117C;
    // addi        $3, $zero, 0x2AF
    r3 = RSP_ADD32(0, 0X2AF);
L_1204:
    // jal         0x11B4
    r31 = 0x120C;
    // nop

    goto L_11B4;
    // nop

L_120C:
    // j           L_110C
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    goto L_110C;
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
L_1214:
    // lh          $1, 0xE($zero)
    r1 = RSP_MEM_H_LOAD(0XE, 0);
    // lw          $2, 0x8($zero)
    r2 = RSP_MEM_W_LOAD(0X8, 0);
    // jal         0x117C
    r31 = 0x1224;
    // lh          $3, 0xC($zero)
    r3 = RSP_MEM_H_LOAD(0XC, 0);
    goto L_117C;
    // lh          $3, 0xC($zero)
    r3 = RSP_MEM_H_LOAD(0XC, 0);
L_1224:
    // jal         0x11B4
    r31 = 0x122C;
    // nop

    goto L_11B4;
    // nop

L_122C:
    // j           L_1238
    // nop

    goto L_1238;
    // nop

    // nop

L_1238:
    // nop

    // nop

L_1240:
    // andi        $2, $25, 0xFFFF
    r2 = r25 & 0XFFFF;
    // vxor        $v1, $v1, $v1
    rsp.VXOR<0>(rsp.vpu.r[1], rsp.vpu.r[1], rsp.vpu.r[1]);
    // andi        $1, $26, 0xFFFF
    r1 = r26 & 0XFFFF;
    // addi        $1, $1, 0x500
    r1 = RSP_ADD32(r1, 0X500);
L_1250:
    // sdv         $v1[0], 0x0($1)
    rsp.SDV<0>(rsp.vpu.r[1], r1, 0X0);
    // sdv         $v1[0], 0x8($1)
    rsp.SDV<0>(rsp.vpu.r[1], r1, 0X1);
    // addi        $2, $2, -0x10
    r2 = RSP_ADD32(r2, -0X10);
    // bgtz        $2, L_1250
    if (RSP_SIGNED(r2) > 0) {
        // addi        $1, $1, 0x10
        r1 = RSP_ADD32(r1, 0X10);
        goto L_1250;
    }
    // addi        $1, $1, 0x10
    r1 = RSP_ADD32(r1, 0X10);
    // j           L_110C
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    goto L_110C;
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
L_126C:
    // sll         $3, $26, 8
    r3 = S32(r26) << 8;
    // srl         $3, $3, 20
    r3 = S32(U32(r3) >> 20);
    // beq         $3, $zero, L_110C
    if (r3 == 0) {
        // addi        $30, $30, -0x8
        r30 = RSP_ADD32(r30, -0X8);
        goto L_110C;
    }
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    // andi        $1, $26, 0xFFF
    r1 = r26 & 0XFFF;
    // addi        $1, $1, 0x500
    r1 = RSP_ADD32(r1, 0X500);
    // sll         $2, $25, 8
    r2 = S32(r25) << 8;
    // srl         $2, $2, 8
    r2 = S32(U32(r2) >> 8);
    // jal         0x117C
    r31 = 0x1294;
    // addi        $3, $3, -0x1
    r3 = RSP_ADD32(r3, -0X1);
    goto L_117C;
    // addi        $3, $3, -0x1
    r3 = RSP_ADD32(r3, -0X1);
L_1294:
    // mfc0        $1, SP_DMA_BUSY
    r1 = 0;
L_1298:
    // bne         $1, $zero, L_1298
    if (r1 != 0) {
        // mfc0        $1, SP_DMA_BUSY
        r1 = 0;
        goto L_1298;
    }
    // mfc0        $1, SP_DMA_BUSY
    r1 = 0;
    // j           L_110C
    // nop

    goto L_110C;
    // nop

L_12A8:
    // sll         $3, $26, 8
    r3 = S32(r26) << 8;
    // srl         $3, $3, 20
    r3 = S32(U32(r3) >> 20);
    // beq         $3, $zero, L_110C
    if (r3 == 0) {
        // addi        $30, $30, -0x8
        r30 = RSP_ADD32(r30, -0X8);
        goto L_110C;
    }
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    // andi        $1, $26, 0xFFF
    r1 = r26 & 0XFFF;
    // addi        $1, $1, 0x500
    r1 = RSP_ADD32(r1, 0X500);
    // sll         $2, $25, 8
    r2 = S32(r25) << 8;
    // srl         $2, $2, 8
    r2 = S32(U32(r2) >> 8);
    // jal         0x1198
    r31 = 0x12D0;
    // addi        $3, $3, -0x1
    r3 = RSP_ADD32(r3, -0X1);
    goto L_1198;
    // addi        $3, $3, -0x1
    r3 = RSP_ADD32(r3, -0X1);
L_12D0:
    // mfc0        $1, SP_DMA_BUSY
    r1 = 0;
L_12D4:
    // bne         $1, $zero, L_12D4
    if (r1 != 0) {
        // mfc0        $1, SP_DMA_BUSY
        r1 = 0;
        goto L_12D4;
    }
    // mfc0        $1, SP_DMA_BUSY
    r1 = 0;
    // j           L_110C
    // nop

    goto L_110C;
    // nop

L_12E4:
    // sll         $2, $25, 8
    r2 = S32(r25) << 8;
    // srl         $2, $2, 8
    r2 = S32(U32(r2) >> 8);
    // addi        $1, $zero, 0x400
    r1 = RSP_ADD32(0, 0X400);
    // andi        $3, $26, 0xFFFF
    r3 = r26 & 0XFFFF;
    // jal         0x117C
    r31 = 0x12FC;
    // addi        $3, $3, -0x1
    r3 = RSP_ADD32(r3, -0X1);
    goto L_117C;
    // addi        $3, $3, -0x1
    r3 = RSP_ADD32(r3, -0X1);
L_12FC:
    // mfc0        $1, SP_DMA_BUSY
    r1 = 0;
L_1300:
    // bne         $1, $zero, L_1300
    if (r1 != 0) {
        // mfc0        $1, SP_DMA_BUSY
        r1 = 0;
        goto L_1300;
    }
    // mfc0        $1, SP_DMA_BUSY
    r1 = 0;
    // j           L_110C
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    goto L_110C;
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
L_1310:
    // srl         $3, $26, 16
    r3 = S32(U32(r26) >> 16);
    // andi        $1, $3, 0x4
    r1 = r3 & 0X4;
    // beq         $1, $zero, L_1340
    if (r1 == 0) {
        // andi        $1, $3, 0x2
        r1 = r3 & 0X2;
        goto L_1340;
    }
    // andi        $1, $3, 0x2
    r1 = r3 & 0X2;
    // beq         $1, $zero, L_1334
    if (r1 == 0) {
        // srl         $2, $25, 16
        r2 = S32(U32(r25) >> 16);
        goto L_1334;
    }
    // srl         $2, $25, 16
    r2 = S32(U32(r25) >> 16);
    // sh          $26, 0x50($24)
    RSP_MEM_H_STORE(0X50, r24, r26);
    // sh          $2, 0x4C($24)
    RSP_MEM_H_STORE(0X4C, r24, r2);
    // sh          $25, 0x4E($24)
    RSP_MEM_H_STORE(0X4E, r24, r25);
L_1334:
    // sh          $26, 0x46($24)
    RSP_MEM_H_STORE(0X46, r24, r26);
    // sh          $2, 0x48($24)
    RSP_MEM_H_STORE(0X48, r24, r2);
    // sh          $25, 0x4A($24)
    RSP_MEM_H_STORE(0X4A, r24, r25);
L_1340:
    // srl         $2, $25, 16
    r2 = S32(U32(r25) >> 16);
    // sh          $26, 0x40($24)
    RSP_MEM_H_STORE(0X40, r24, r26);
    // sh          $2, 0x42($24)
    RSP_MEM_H_STORE(0X42, r24, r2);
    // sh          $25, 0x44($24)
    RSP_MEM_H_STORE(0X44, r24, r25);
    // j           L_110C
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    goto L_110C;
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
L_1358:
    // addi        $1, $zero, 0x170
    r1 = RSP_ADD32(0, 0X170);
    // addi        $4, $zero, 0x500
    r4 = RSP_ADD32(0, 0X500);
    // addi        $2, $zero, 0x9E0
    r2 = RSP_ADD32(0, 0X9E0);
    // addi        $3, $zero, 0xB50
    r3 = RSP_ADD32(0, 0XB50);
L_1368:
    // lqv         $v1[0], 0x0($2)
    rsp.LQV<0>(rsp.vpu.r[1], r2, 0X0);
    // lqv         $v2[0], 0x0($3)
    rsp.LQV<0>(rsp.vpu.r[2], r3, 0X0);
    // addi        $1, $1, -0x10
    r1 = RSP_ADD32(r1, -0X10);
    // addi        $2, $2, 0x10
    r2 = RSP_ADD32(r2, 0X10);
    // addi        $3, $3, 0x10
    r3 = RSP_ADD32(r3, 0X10);
    // ssv         $v1[0], 0x0($4)
    rsp.SSV<0>(rsp.vpu.r[1], r4, 0X0);
    // ssv         $v2[0], 0x2($4)
    rsp.SSV<0>(rsp.vpu.r[2], r4, 0X1);
    // ssv         $v1[2], 0x4($4)
    rsp.SSV<2>(rsp.vpu.r[1], r4, 0X2);
    // ssv         $v2[2], 0x6($4)
    rsp.SSV<2>(rsp.vpu.r[2], r4, 0X3);
    // ssv         $v1[4], 0x8($4)
    rsp.SSV<4>(rsp.vpu.r[1], r4, 0X4);
    // ssv         $v2[4], 0xA($4)
    rsp.SSV<4>(rsp.vpu.r[2], r4, 0X5);
    // ssv         $v1[6], 0xC($4)
    rsp.SSV<6>(rsp.vpu.r[1], r4, 0X6);
    // ssv         $v2[6], 0xE($4)
    rsp.SSV<6>(rsp.vpu.r[2], r4, 0X7);
    // ssv         $v1[8], 0x10($4)
    rsp.SSV<8>(rsp.vpu.r[1], r4, 0X8);
    // ssv         $v2[8], 0x12($4)
    rsp.SSV<8>(rsp.vpu.r[2], r4, 0X9);
    // ssv         $v1[10], 0x14($4)
    rsp.SSV<10>(rsp.vpu.r[1], r4, 0XA);
    // ssv         $v2[10], 0x16($4)
    rsp.SSV<10>(rsp.vpu.r[2], r4, 0XB);
    // ssv         $v1[12], 0x18($4)
    rsp.SSV<12>(rsp.vpu.r[1], r4, 0XC);
    // ssv         $v2[12], 0x1A($4)
    rsp.SSV<12>(rsp.vpu.r[2], r4, 0XD);
    // ssv         $v1[14], 0x1C($4)
    rsp.SSV<14>(rsp.vpu.r[1], r4, 0XE);
    // ssv         $v2[14], 0x1E($4)
    rsp.SSV<14>(rsp.vpu.r[2], r4, 0XF);
    // bgtz        $1, L_1368
    if (RSP_SIGNED(r1) > 0) {
        // addi        $4, $4, 0x20
        r4 = RSP_ADD32(r4, 0X20);
        goto L_1368;
    }
    // addi        $4, $4, 0x20
    r4 = RSP_ADD32(r4, 0X20);
    // j           L_110C
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    goto L_110C;
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
L_13CC:
    // andi        $1, $25, 0xFFFF
    r1 = r25 & 0XFFFF;
    // andi        $2, $26, 0xFFFF
    r2 = r26 & 0XFFFF;
    // addi        $2, $2, 0x500
    r2 = RSP_ADD32(r2, 0X500);
    // srl         $3, $25, 16
    r3 = S32(U32(r25) >> 16);
    // addi        $3, $3, 0x500
    r3 = RSP_ADD32(r3, 0X500);
L_13E0:
    // ldv         $v1[0], 0x0($2)
    rsp.LDV<0>(rsp.vpu.r[1], r2, 0X0);
    // ldv         $v2[0], 0x8($2)
    rsp.LDV<0>(rsp.vpu.r[2], r2, 0X1);
    // addi        $1, $1, -0x10
    r1 = RSP_ADD32(r1, -0X10);
    // addi        $2, $2, 0x10
    r2 = RSP_ADD32(r2, 0X10);
    // sdv         $v1[0], 0x0($3)
    rsp.SDV<0>(rsp.vpu.r[1], r3, 0X0);
    // sdv         $v2[0], 0x8($3)
    rsp.SDV<0>(rsp.vpu.r[2], r3, 0X1);
    // bgtz        $1, L_13E0
    if (RSP_SIGNED(r1) > 0) {
        // addi        $3, $3, 0x10
        r3 = RSP_ADD32(r3, 0X10);
        goto L_13E0;
    }
    // addi        $3, $3, 0x10
    r3 = RSP_ADD32(r3, 0X10);
    // j           L_110C
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    goto L_110C;
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
L_1408:
    // sll         $1, $25, 8
    r1 = S32(r25) << 8;
    // srl         $1, $1, 8
    r1 = S32(U32(r1) >> 8);
    // sw          $1, 0xFFC($zero)
    RSP_MEM_W_STORE(0XFFC, 0, r1);
    // j           L_110C
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    goto L_110C;
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
L_141C:
    // sll         $1, $25, 8
    r1 = S32(r25) << 8;
    // srl         $1, $1, 8
    r1 = S32(U32(r1) >> 8);
    // sw          $1, 0xFF4($zero)
    RSP_MEM_W_STORE(0XFF4, 0, r1);
    // sll         $2, $26, 8
    r2 = S32(r26) << 8;
    // srl         $2, $2, 8
    r2 = S32(U32(r2) >> 8);
    // sw          $2, 0xFF0($zero)
    RSP_MEM_W_STORE(0XFF0, 0, r2);
    // j           L_110C
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    goto L_110C;
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
L_143C:
    // lqv         $v31[0], 0x60($zero)
    rsp.LQV<0>(rsp.vpu.r[31], 0, 0X6);
    // srl         $23, $25, 12
    r23 = S32(U32(r25) >> 12);
    // vxor        $v25, $v25, $v25
    rsp.VXOR<0>(rsp.vpu.r[25], rsp.vpu.r[25], rsp.vpu.r[25]);
    // andi        $23, $23, 0xF
    r23 = r23 & 0XF;
    // vxor        $v24, $v24, $v24
    rsp.VXOR<0>(rsp.vpu.r[24], rsp.vpu.r[24], rsp.vpu.r[24]);
    // addi        $23, $23, 0x500
    r23 = RSP_ADD32(r23, 0X500);
    // vxor        $v13, $v13, $v13
    rsp.VXOR<0>(rsp.vpu.r[13], rsp.vpu.r[13], rsp.vpu.r[13]);
    // andi        $1, $25, 0xFFF
    r1 = r25 & 0XFFF;
    // vxor        $v14, $v14, $v14
    rsp.VXOR<0>(rsp.vpu.r[14], rsp.vpu.r[14], rsp.vpu.r[14]);
    // addi        $1, $1, 0x500
    r1 = RSP_ADD32(r1, 0X500);
    // vxor        $v15, $v15, $v15
    rsp.VXOR<0>(rsp.vpu.r[15], rsp.vpu.r[15], rsp.vpu.r[15]);
    // srl         $21, $25, 16
    r21 = S32(U32(r25) >> 16);
    // vxor        $v16, $v16, $v16
    rsp.VXOR<0>(rsp.vpu.r[16], rsp.vpu.r[16], rsp.vpu.r[16]);
    // andi        $21, $21, 0xFFF
    r21 = r21 & 0XFFF;
    // vxor        $v17, $v17, $v17
    rsp.VXOR<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[17]);
    // sll         $20, $26, 8
    r20 = S32(r26) << 8;
    // vxor        $v18, $v18, $v18
    rsp.VXOR<0>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[18]);
    // srl         $20, $20, 8
    r20 = S32(U32(r20) >> 8);
    // vxor        $v19, $v19, $v19
    rsp.VXOR<0>(rsp.vpu.r[19], rsp.vpu.r[19], rsp.vpu.r[19]);
    // addi        $3, $zero, 0x1F
    r3 = RSP_ADD32(0, 0X1F);
    // srl         $13, $25, 28
    r13 = S32(U32(r25) >> 28);
    // andi        $2, $13, 0x1
    r2 = r13 & 0X1;
    // bgtz        $2, L_14F4
    if (RSP_SIGNED(r2) > 0) {
        // addi        $22, $23, 0x1
        r22 = RSP_ADD32(r23, 0X1);
        goto L_14F4;
    }
    // addi        $22, $23, 0x1
    r22 = RSP_ADD32(r23, 0X1);
    // andi        $2, $13, 0x2
    r2 = r13 & 0X2;
    // beq         $2, $zero, L_14AC
    if (r2 == 0) {
        // addi        $2, $20, 0x0
        r2 = RSP_ADD32(r20, 0X0);
        goto L_14AC;
    }
    // addi        $2, $20, 0x0
    r2 = RSP_ADD32(r20, 0X0);
    // lw          $2, 0xFFC($zero)
    r2 = RSP_MEM_W_LOAD(0XFFC, 0);
L_14AC:
    // mfc0        $13, SP_DMA_FULL
    r13 = 0;
L_14B0:
    // bne         $13, $zero, L_14B0
    if (r13 != 0) {
        // mfc0        $13, SP_DMA_FULL
        r13 = 0;
        goto L_14B0;
    }
    // mfc0        $13, SP_DMA_FULL
    r13 = 0;
    // mtc0        $1, SP_MEM_ADDR
    SET_DMA_MEM(r1);
    // mtc0        $2, SP_DRAM_ADDR
    SET_DMA_DRAM(r2);
    // mtc0        $3, SP_RD_LEN
    if (dma_mem_address & 0x1000) {
        ctx->resume_address = 0x14C0;
        ctx->resume_delay = false;
        goto do_overlay_swap;
    }
    DO_DMA_READ(r3);
    // addi        $19, $zero, 0x30
    r19 = RSP_ADD32(0, 0X30);
    // addi        $18, $zero, 0x400
    r18 = RSP_ADD32(0, 0X400);
    // ldv         $v25[0], 0x0($19)
    rsp.LDV<0>(rsp.vpu.r[25], r19, 0X0);
    // ldv         $v24[8], 0x0($19)
    rsp.LDV<8>(rsp.vpu.r[24], r19, 0X0);
    // ldv         $v23[0], 0x8($19)
    rsp.LDV<0>(rsp.vpu.r[23], r19, 0X1);
    // ldv         $v23[8], 0x8($19)
    rsp.LDV<8>(rsp.vpu.r[23], r19, 0X1);
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
L_14E0:
    // bne         $5, $zero, L_14E0
    if (r5 != 0) {
        // mfc0        $5, SP_DMA_BUSY
        r5 = 0;
        goto L_14E0;
    }
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
    // add         $zero, $zero, $zero

    // j           L_1518
    // lqv         $v27[0], 0x10($1)
    rsp.LQV<0>(rsp.vpu.r[27], r1, 0X1);
    goto L_1518;
    // lqv         $v27[0], 0x10($1)
    rsp.LQV<0>(rsp.vpu.r[27], r1, 0X1);
L_14F4:
    // addi        $19, $zero, 0x30
    r19 = RSP_ADD32(0, 0X30);
    // vxor        $v27, $v27, $v27
    rsp.VXOR<0>(rsp.vpu.r[27], rsp.vpu.r[27], rsp.vpu.r[27]);
    // addi        $18, $zero, 0x400
    r18 = RSP_ADD32(0, 0X400);
    // ldv         $v25[0], 0x0($19)
    rsp.LDV<0>(rsp.vpu.r[25], r19, 0X0);
    // ldv         $v24[8], 0x0($19)
    rsp.LDV<8>(rsp.vpu.r[24], r19, 0X0);
    // ldv         $v23[0], 0x8($19)
    rsp.LDV<0>(rsp.vpu.r[23], r19, 0X1);
    // ldv         $v23[8], 0x8($19)
    rsp.LDV<8>(rsp.vpu.r[23], r19, 0X1);
    // sqv         $v27[0], 0x0($1)
    rsp.SQV<0>(rsp.vpu.r[27], r1, 0X0);
    // sqv         $v27[0], 0x10($1)
    rsp.SQV<0>(rsp.vpu.r[27], r1, 0X1);
L_1518:
    // beq         $21, $zero, L_16C8
    if (r21 == 0) {
        // addi        $1, $1, 0x20
        r1 = RSP_ADD32(r1, 0X20);
        goto L_16C8;
    }
    // addi        $1, $1, 0x20
    r1 = RSP_ADD32(r1, 0X20);
    // ldv         $v12[0], 0x0($22)
    rsp.LDV<0>(rsp.vpu.r[12], r22, 0X0);
    // lbu         $10, 0x0($23)
    r10 = RSP_MEM_BU(0X0, r23);
    // addi        $13, $zero, 0xC
    r13 = RSP_ADD32(0, 0XC);
    // addi        $12, $zero, 0x1
    r12 = RSP_ADD32(0, 0X1);
    // andi        $14, $10, 0xF
    r14 = r10 & 0XF;
    // sll         $14, $14, 5
    r14 = S32(r14) << 5;
    // vand        $v10, $v25, $v12[0]
    rsp.VAND<8>(rsp.vpu.r[10], rsp.vpu.r[25], rsp.vpu.r[12]);
    // add         $16, $14, $18
    r16 = RSP_ADD32(r14, r18);
    // vand        $v9, $v24, $v12[1]
    rsp.VAND<9>(rsp.vpu.r[9], rsp.vpu.r[24], rsp.vpu.r[12]);
    // srl         $17, $10, 4
    r17 = S32(U32(r10) >> 4);
    // vand        $v8, $v25, $v12[2]
    rsp.VAND<10>(rsp.vpu.r[8], rsp.vpu.r[25], rsp.vpu.r[12]);
    // sub         $17, $13, $17
    r17 = RSP_SUB32(r13, r17);
    // vand        $v7, $v24, $v12[3]
    rsp.VAND<11>(rsp.vpu.r[7], rsp.vpu.r[24], rsp.vpu.r[12]);
    // addi        $13, $17, -0x1
    r13 = RSP_ADD32(r17, -0X1);
    // sll         $12, $12, 15
    r12 = S32(r12) << 15;
    // srlv        $11, $12, $13
    r11 = S32(U32(r12) >> (r13 & 31));
    // mtc2        $11, $v22[0]
    rsp.MTC2<0>(r11, rsp.vpu.r[22]);
    // lqv         $v21[0], 0x0($16)
    rsp.LQV<0>(rsp.vpu.r[21], r16, 0X0);
    // lqv         $v20[0], 0x10($16)
    rsp.LQV<0>(rsp.vpu.r[20], r16, 0X1);
    // addi        $16, $16, -0x2
    r16 = RSP_ADD32(r16, -0X2);
    // lrv         $v19[0], 0x20($16)
    rsp.LRV<0>(rsp.vpu.r[19], r16, 0X2);
    // addi        $16, $16, -0x2
    r16 = RSP_ADD32(r16, -0X2);
    // lrv         $v18[0], 0x20($16)
    rsp.LRV<0>(rsp.vpu.r[18], r16, 0X2);
    // addi        $16, $16, -0x2
    r16 = RSP_ADD32(r16, -0X2);
    // lrv         $v17[0], 0x20($16)
    rsp.LRV<0>(rsp.vpu.r[17], r16, 0X2);
    // addi        $16, $16, -0x2
    r16 = RSP_ADD32(r16, -0X2);
    // lrv         $v16[0], 0x20($16)
    rsp.LRV<0>(rsp.vpu.r[16], r16, 0X2);
    // addi        $16, $16, -0x2
    r16 = RSP_ADD32(r16, -0X2);
    // lrv         $v15[0], 0x20($16)
    rsp.LRV<0>(rsp.vpu.r[15], r16, 0X2);
    // addi        $16, $16, -0x2
    r16 = RSP_ADD32(r16, -0X2);
    // lrv         $v14[0], 0x20($16)
    rsp.LRV<0>(rsp.vpu.r[14], r16, 0X2);
    // addi        $16, $16, -0x2
    r16 = RSP_ADD32(r16, -0X2);
    // lrv         $v13[0], 0x20($16)
    rsp.LRV<0>(rsp.vpu.r[13], r16, 0X2);
L_15A4:
    // addi        $22, $22, 0x9
    r22 = RSP_ADD32(r22, 0X9);
    // vmudn       $v30, $v10, $v23
    rsp.VMUDN<0>(rsp.vpu.r[30], rsp.vpu.r[10], rsp.vpu.r[23]);
    // addi        $23, $23, 0x9
    r23 = RSP_ADD32(r23, 0X9);
    // vmadn       $v30, $v9, $v23
    rsp.VMADN<0>(rsp.vpu.r[30], rsp.vpu.r[9], rsp.vpu.r[23]);
    // lbu         $10, 0x0($23)
    r10 = RSP_MEM_BU(0X0, r23);
    // vmudn       $v29, $v8, $v23
    rsp.VMUDN<0>(rsp.vpu.r[29], rsp.vpu.r[8], rsp.vpu.r[23]);
    // ldv         $v12[0], 0x0($22)
    rsp.LDV<0>(rsp.vpu.r[12], r22, 0X0);
    // vmadn       $v29, $v7, $v23
    rsp.VMADN<0>(rsp.vpu.r[29], rsp.vpu.r[7], rsp.vpu.r[23]);
    // addi        $13, $zero, 0xC
    r13 = RSP_ADD32(0, 0XC);
    // blez        $17, L_15D8
    if (RSP_SIGNED(r17) <= 0) {
        // andi        $14, $10, 0xF
        r14 = r10 & 0XF;
        goto L_15D8;
    }
    // andi        $14, $10, 0xF
    r14 = r10 & 0XF;
    // vmudm       $v30, $v30, $v22[0]
    rsp.VMUDM<8>(rsp.vpu.r[30], rsp.vpu.r[30], rsp.vpu.r[22]);
    // vmudm       $v29, $v29, $v22[0]
    rsp.VMUDM<8>(rsp.vpu.r[29], rsp.vpu.r[29], rsp.vpu.r[22]);
L_15D8:
    // sll         $14, $14, 5
    r14 = S32(r14) << 5;
    // vmudh       $v11, $v21, $v27[6]
    rsp.VMUDH<14>(rsp.vpu.r[11], rsp.vpu.r[21], rsp.vpu.r[27]);
    // add         $16, $14, $18
    r16 = RSP_ADD32(r14, r18);
    // vmadh       $v11, $v20, $v27[7]
    rsp.VMADH<15>(rsp.vpu.r[11], rsp.vpu.r[20], rsp.vpu.r[27]);
    // vmadh       $v11, $v19, $v30[0]
    rsp.VMADH<8>(rsp.vpu.r[11], rsp.vpu.r[19], rsp.vpu.r[30]);
    // vmadh       $v11, $v18, $v30[1]
    rsp.VMADH<9>(rsp.vpu.r[11], rsp.vpu.r[18], rsp.vpu.r[30]);
    // srl         $17, $10, 4
    r17 = S32(U32(r10) >> 4);
    // vmadh       $v11, $v17, $v30[2]
    rsp.VMADH<10>(rsp.vpu.r[11], rsp.vpu.r[17], rsp.vpu.r[30]);
    // vmadh       $v11, $v16, $v30[3]
    rsp.VMADH<11>(rsp.vpu.r[11], rsp.vpu.r[16], rsp.vpu.r[30]);
    // sub         $17, $13, $17
    r17 = RSP_SUB32(r13, r17);
    // vmadh       $v28, $v15, $v30[4]
    rsp.VMADH<12>(rsp.vpu.r[28], rsp.vpu.r[15], rsp.vpu.r[30]);
    // addi        $13, $17, -0x1
    r13 = RSP_ADD32(r17, -0X1);
    // vmadh       $v11, $v14, $v30[5]
    rsp.VMADH<13>(rsp.vpu.r[11], rsp.vpu.r[14], rsp.vpu.r[30]);
    // vmadh       $v11, $v13, $v30[6]
    rsp.VMADH<14>(rsp.vpu.r[11], rsp.vpu.r[13], rsp.vpu.r[30]);
    // vmadh       $v11, $v30, $v31[3]
    rsp.VMADH<11>(rsp.vpu.r[11], rsp.vpu.r[30], rsp.vpu.r[31]);
    // srlv        $11, $12, $13
    r11 = S32(U32(r12) >> (r13 & 31));
    // vsar        $v26, $v6, $v28[1]
    rsp.VSAR<9>(rsp.vpu.r[26], rsp.vpu.r[6]);
    // mtc2        $11, $v22[0]
    rsp.MTC2<0>(r11, rsp.vpu.r[22]);
    // vsar        $v28, $v6, $v28[0]
    rsp.VSAR<8>(rsp.vpu.r[28], rsp.vpu.r[6]);
    // vand        $v10, $v25, $v12[0]
    rsp.VAND<8>(rsp.vpu.r[10], rsp.vpu.r[25], rsp.vpu.r[12]);
    // vand        $v9, $v24, $v12[1]
    rsp.VAND<9>(rsp.vpu.r[9], rsp.vpu.r[24], rsp.vpu.r[12]);
    // vand        $v8, $v25, $v12[2]
    rsp.VAND<10>(rsp.vpu.r[8], rsp.vpu.r[25], rsp.vpu.r[12]);
    // vand        $v7, $v24, $v12[3]
    rsp.VAND<11>(rsp.vpu.r[7], rsp.vpu.r[24], rsp.vpu.r[12]);
    // vmudn       $v11, $v26, $v31[1]
    rsp.VMUDN<9>(rsp.vpu.r[11], rsp.vpu.r[26], rsp.vpu.r[31]);
    // vmadh       $v28, $v28, $v31[1]
    rsp.VMADH<9>(rsp.vpu.r[28], rsp.vpu.r[28], rsp.vpu.r[31]);
    // vmudh       $v11, $v19, $v29[0]
    rsp.VMUDH<8>(rsp.vpu.r[11], rsp.vpu.r[19], rsp.vpu.r[29]);
    // addi        $15, $16, -0x2
    r15 = RSP_ADD32(r16, -0X2);
    // vmadh       $v11, $v18, $v29[1]
    rsp.VMADH<9>(rsp.vpu.r[11], rsp.vpu.r[18], rsp.vpu.r[29]);
    // lrv         $v19[0], 0x20($15)
    rsp.LRV<0>(rsp.vpu.r[19], r15, 0X2);
    // vmadh       $v11, $v17, $v29[2]
    rsp.VMADH<10>(rsp.vpu.r[11], rsp.vpu.r[17], rsp.vpu.r[29]);
    // addi        $15, $15, -0x2
    r15 = RSP_ADD32(r15, -0X2);
    // vmadh       $v11, $v16, $v29[3]
    rsp.VMADH<11>(rsp.vpu.r[11], rsp.vpu.r[16], rsp.vpu.r[29]);
    // lrv         $v18[0], 0x20($15)
    rsp.LRV<0>(rsp.vpu.r[18], r15, 0X2);
    // vmadh       $v11, $v15, $v29[4]
    rsp.VMADH<12>(rsp.vpu.r[11], rsp.vpu.r[15], rsp.vpu.r[29]);
    // addi        $15, $15, -0x2
    r15 = RSP_ADD32(r15, -0X2);
    // vmadh       $v11, $v14, $v29[5]
    rsp.VMADH<13>(rsp.vpu.r[11], rsp.vpu.r[14], rsp.vpu.r[29]);
    // lrv         $v17[0], 0x20($15)
    rsp.LRV<0>(rsp.vpu.r[17], r15, 0X2);
    // vmadh       $v11, $v13, $v29[6]
    rsp.VMADH<14>(rsp.vpu.r[11], rsp.vpu.r[13], rsp.vpu.r[29]);
    // addi        $15, $15, -0x2
    r15 = RSP_ADD32(r15, -0X2);
    // vmadh       $v11, $v29, $v31[3]
    rsp.VMADH<11>(rsp.vpu.r[11], rsp.vpu.r[29], rsp.vpu.r[31]);
    // lrv         $v16[0], 0x20($15)
    rsp.LRV<0>(rsp.vpu.r[16], r15, 0X2);
    // vmadh       $v11, $v21, $v28[6]
    rsp.VMADH<14>(rsp.vpu.r[11], rsp.vpu.r[21], rsp.vpu.r[28]);
    // addi        $15, $15, -0x2
    r15 = RSP_ADD32(r15, -0X2);
    // vmadh       $v11, $v20, $v28[7]
    rsp.VMADH<15>(rsp.vpu.r[11], rsp.vpu.r[20], rsp.vpu.r[28]);
    // lrv         $v15[0], 0x20($15)
    rsp.LRV<0>(rsp.vpu.r[15], r15, 0X2);
    // vsar        $v26, $v6, $v27[1]
    rsp.VSAR<9>(rsp.vpu.r[26], rsp.vpu.r[6]);
    // addi        $15, $15, -0x2
    r15 = RSP_ADD32(r15, -0X2);
    // vsar        $v27, $v6, $v27[0]
    rsp.VSAR<8>(rsp.vpu.r[27], rsp.vpu.r[6]);
    // lrv         $v14[0], 0x20($15)
    rsp.LRV<0>(rsp.vpu.r[14], r15, 0X2);
    // addi        $15, $15, -0x2
    r15 = RSP_ADD32(r15, -0X2);
    // lrv         $v13[0], 0x20($15)
    rsp.LRV<0>(rsp.vpu.r[13], r15, 0X2);
    // lqv         $v21[0], 0x0($16)
    rsp.LQV<0>(rsp.vpu.r[21], r16, 0X0);
    // vmudn       $v11, $v26, $v31[1]
    rsp.VMUDN<9>(rsp.vpu.r[11], rsp.vpu.r[26], rsp.vpu.r[31]);
    // lqv         $v20[0], 0x10($16)
    rsp.LQV<0>(rsp.vpu.r[20], r16, 0X1);
    // vmadh       $v27, $v27, $v31[1]
    rsp.VMADH<9>(rsp.vpu.r[27], rsp.vpu.r[27], rsp.vpu.r[31]);
    // addi        $21, $21, -0x20
    r21 = RSP_ADD32(r21, -0X20);
    // sqv         $v28[0], 0x0($1)
    rsp.SQV<0>(rsp.vpu.r[28], r1, 0X0);
    // addi        $1, $1, 0x20
    r1 = RSP_ADD32(r1, 0X20);
    // bgtz        $21, L_15A4
    if (RSP_SIGNED(r21) > 0) {
        // sqv         $v27[0], 0x7F0($1)
        rsp.SQV<0>(rsp.vpu.r[27], r1, -0X1);
        goto L_15A4;
    }
    // sqv         $v27[0], 0x7F0($1)
    rsp.SQV<0>(rsp.vpu.r[27], r1, -0X1);
L_16C8:
    // addi        $1, $1, -0x20
    r1 = RSP_ADD32(r1, -0X20);
    // jal         0x1198
    r31 = 0x16D4;
    // addi        $2, $20, 0x0
    r2 = RSP_ADD32(r20, 0X0);
    goto L_1198;
    // addi        $2, $20, 0x0
    r2 = RSP_ADD32(r20, 0X0);
L_16D4:
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
L_16DC:
    // bne         $5, $zero, L_16DC
    if (r5 != 0) {
        // mfc0        $5, SP_DMA_BUSY
        r5 = 0;
        goto L_16DC;
    }
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
    // j           L_110C
    // and         $zero, $zero, $zero

    goto L_110C;
    // and         $zero, $zero, $zero

L_16EC:
    // addi        $20, $zero, 0x400
    r20 = RSP_ADD32(0, 0X400);
    // vxor        $v26, $v26, $v26
    rsp.VXOR<0>(rsp.vpu.r[26], rsp.vpu.r[26], rsp.vpu.r[26]);
    // lw          $17, 0x0($20)
    r17 = RSP_MEM_W_LOAD(0X0, r20);
    // beq         $17, $zero, L_196C
    if (r17 == 0) {
        // addi        $30, $30, -0x8
        r30 = RSP_ADD32(r30, -0X8);
        goto L_196C;
    }
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    // addi        $23, $26, 0x500
    r23 = RSP_ADD32(r26, 0X500);
    // ldv         $v18[0], 0x0($20)
    rsp.LDV<0>(rsp.vpu.r[18], r20, 0X0);
    // vxor        $v25, $v25, $v25
    rsp.VXOR<0>(rsp.vpu.r[25], rsp.vpu.r[25], rsp.vpu.r[25]);
    // add         $2, $25, $zero
    r2 = RSP_ADD32(r25, 0);
    // addi        $21, $23, -0x4
    r21 = RSP_ADD32(r23, -0X4);
    // addi        $19, $23, -0x2
    r19 = RSP_ADD32(r23, -0X2);
    // vxor        $v24, $v24, $v24
    rsp.VXOR<0>(rsp.vpu.r[24], rsp.vpu.r[24], rsp.vpu.r[24]);
    // vxor        $v23, $v23, $v23
    rsp.VXOR<0>(rsp.vpu.r[23], rsp.vpu.r[23], rsp.vpu.r[23]);
    // addi        $3, $zero, 0x7
    r3 = RSP_ADD32(0, 0X7);
    // vxor        $v22, $v22, $v22
    rsp.VXOR<0>(rsp.vpu.r[22], rsp.vpu.r[22], rsp.vpu.r[22]);
    // addi        $22, $zero, 0x170
    r22 = RSP_ADD32(0, 0X170);
    // vxor        $v21, $v21, $v21
    rsp.VXOR<0>(rsp.vpu.r[21], rsp.vpu.r[21], rsp.vpu.r[21]);
    // srl         $16, $26, 16
    r16 = S32(U32(r26) >> 16);
    // vxor        $v20, $v20, $v20
    rsp.VXOR<0>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[20]);
    // andi        $16, $16, 0x1
    r16 = r16 & 0X1;
    // vxor        $v19, $v19, $v19
    rsp.VXOR<0>(rsp.vpu.r[19], rsp.vpu.r[19], rsp.vpu.r[19]);
    // lw          $18, 0x2($20)
    r18 = RSP_MEM_W_LOAD(0X2, r20);
    // bgtz        $16, L_17C0
    if (RSP_SIGNED(r16) > 0) {
        // addi        $1, $24, 0x0
        r1 = RSP_ADD32(r24, 0X0);
        goto L_17C0;
    }
    // addi        $1, $24, 0x0
    r1 = RSP_ADD32(r24, 0X0);
    // mfc0        $16, SP_DMA_FULL
    r16 = 0;
L_1750:
    // bne         $16, $zero, L_1750
    if (r16 != 0) {
        // mfc0        $16, SP_DMA_FULL
        r16 = 0;
        goto L_1750;
    }
    // mfc0        $16, SP_DMA_FULL
    r16 = 0;
    // mtc0        $1, SP_MEM_ADDR
    SET_DMA_MEM(r1);
    // mtc0        $2, SP_DRAM_ADDR
    SET_DMA_DRAM(r2);
    // mtc0        $3, SP_RD_LEN
    if (dma_mem_address & 0x1000) {
        ctx->resume_address = 0x1760;
        ctx->resume_delay = false;
        goto do_overlay_swap;
    }
    DO_DMA_READ(r3);
    // llv         $v26[0], 0x10($20)
    rsp.LLV<0>(rsp.vpu.r[26], r20, 0X4);
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // ldv         $v25[0], 0x10($20)
    rsp.LDV<0>(rsp.vpu.r[25], r20, 0X2);
    // addi        $20, $20, 0x2
    r20 = RSP_ADD32(r20, 0X2);
    // llv         $v24[4], 0x10($20)
    rsp.LLV<4>(rsp.vpu.r[24], r20, 0X4);
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // ldv         $v23[4], 0x10($20)
    rsp.LDV<4>(rsp.vpu.r[23], r20, 0X2);
    // addi        $20, $20, 0x2
    r20 = RSP_ADD32(r20, 0X2);
    // llv         $v22[8], 0x10($20)
    rsp.LLV<8>(rsp.vpu.r[22], r20, 0X4);
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // ldv         $v21[8], 0x10($20)
    rsp.LDV<8>(rsp.vpu.r[21], r20, 0X2);
    // addi        $20, $20, 0x2
    r20 = RSP_ADD32(r20, 0X2);
    // llv         $v20[12], 0x10($20)
    rsp.LLV<12>(rsp.vpu.r[20], r20, 0X4);
    // lsv         $v19[14], 0x10($20)
    rsp.LSV<14>(rsp.vpu.r[19], r20, 0X8);
    // lsv         $v19[0], 0x12($20)
    rsp.LSV<0>(rsp.vpu.r[19], r20, 0X9);
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
L_17A4:
    // bne         $5, $zero, L_17A4
    if (r5 != 0) {
        // mfc0        $5, SP_DMA_BUSY
        r5 = 0;
        goto L_17A4;
    }
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
    // llv         $v15[0], 0x0($1)
    rsp.LLV<0>(rsp.vpu.r[15], r1, 0X0);
    // beq         $18, $zero, L_180C
    if (r18 == 0) {
        // llv         $v28[12], 0x4($1)
        rsp.LLV<12>(rsp.vpu.r[28], r1, 0X1);
        goto L_180C;
    }
    // llv         $v28[12], 0x4($1)
    rsp.LLV<12>(rsp.vpu.r[28], r1, 0X1);
    // j           L_182C
    // lsv         $v11[0], 0x2($1)
    rsp.LSV<0>(rsp.vpu.r[11], r1, 0X1);
    goto L_182C;
    // lsv         $v11[0], 0x2($1)
    rsp.LSV<0>(rsp.vpu.r[11], r1, 0X1);
L_17C0:
    // llv         $v26[0], 0x10($20)
    rsp.LLV<0>(rsp.vpu.r[26], r20, 0X4);
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // vxor        $v15, $v15, $v15
    rsp.VXOR<0>(rsp.vpu.r[15], rsp.vpu.r[15], rsp.vpu.r[15]);
    // ldv         $v25[0], 0x10($20)
    rsp.LDV<0>(rsp.vpu.r[25], r20, 0X2);
    // addi        $20, $20, 0x2
    r20 = RSP_ADD32(r20, 0X2);
    // vxor        $v11, $v11, $v11
    rsp.VXOR<0>(rsp.vpu.r[11], rsp.vpu.r[11], rsp.vpu.r[11]);
    // llv         $v24[4], 0x10($20)
    rsp.LLV<4>(rsp.vpu.r[24], r20, 0X4);
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // vxor        $v28, $v28, $v28
    rsp.VXOR<0>(rsp.vpu.r[28], rsp.vpu.r[28], rsp.vpu.r[28]);
    // ldv         $v23[4], 0x10($20)
    rsp.LDV<4>(rsp.vpu.r[23], r20, 0X2);
    // addi        $20, $20, 0x2
    r20 = RSP_ADD32(r20, 0X2);
    // llv         $v22[8], 0x10($20)
    rsp.LLV<8>(rsp.vpu.r[22], r20, 0X4);
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // ldv         $v21[8], 0x10($20)
    rsp.LDV<8>(rsp.vpu.r[21], r20, 0X2);
    // addi        $20, $20, 0x2
    r20 = RSP_ADD32(r20, 0X2);
    // llv         $v20[12], 0x10($20)
    rsp.LLV<12>(rsp.vpu.r[20], r20, 0X4);
    // lsv         $v19[14], 0x10($20)
    rsp.LSV<14>(rsp.vpu.r[19], r20, 0X8);
    // bne         $18, $zero, L_182C
    if (r18 != 0) {
        // lsv         $v19[0], 0x12($20)
        rsp.LSV<0>(rsp.vpu.r[19], r20, 0X9);
        goto L_182C;
    }
    // lsv         $v19[0], 0x12($20)
    rsp.LSV<0>(rsp.vpu.r[19], r20, 0X9);
L_180C:
    // lqv         $v30[0], 0x0($23)
    rsp.LQV<0>(rsp.vpu.r[30], r23, 0X0);
    // lrv         $v15[0], 0x10($21)
    rsp.LRV<0>(rsp.vpu.r[15], r21, 0X1);
    // vsub        $v31, $v30, $v15
    rsp.VSUB<0>(rsp.vpu.r[31], rsp.vpu.r[30], rsp.vpu.r[15]);
    // vmulf       $v16, $v19, $v28[6]
    rsp.VMULF<14>(rsp.vpu.r[16], rsp.vpu.r[19], rsp.vpu.r[28]);
    // vmulf       $v31, $v31, $v18[0]
    rsp.VMULF<8>(rsp.vpu.r[31], rsp.vpu.r[31], rsp.vpu.r[18]);
    // vadd        $v16, $v16, $v16
    rsp.VADD<0>(rsp.vpu.r[16], rsp.vpu.r[16], rsp.vpu.r[16]);
    // j           L_1944
    // vmov        $v29[7], $v28[7]
    rsp.VMOV<15>(rsp.vpu.r[29], 7, rsp.vpu.r[28]);
    goto L_1944;
    // vmov        $v29[7], $v28[7]
    rsp.VMOV<15>(rsp.vpu.r[29], 7, rsp.vpu.r[28]);
L_182C:
    // lqv         $v30[0], 0x0($23)
    rsp.LQV<0>(rsp.vpu.r[30], r23, 0X0);
    // lrv         $v11[0], 0x10($19)
    rsp.LRV<0>(rsp.vpu.r[11], r19, 0X1);
    // lrv         $v15[0], 0x10($21)
    rsp.LRV<0>(rsp.vpu.r[15], r21, 0X1);
    // vmulf       $v30, $v30, $v18[0]
    rsp.VMULF<8>(rsp.vpu.r[30], rsp.vpu.r[30], rsp.vpu.r[18]);
    // vmulf       $v11, $v11, $v18[1]
    rsp.VMULF<9>(rsp.vpu.r[11], rsp.vpu.r[11], rsp.vpu.r[18]);
    // vmulf       $v15, $v15, $v18[0]
    rsp.VMULF<8>(rsp.vpu.r[15], rsp.vpu.r[15], rsp.vpu.r[18]);
    // vmulf       $v16, $v19, $v28[6]
    rsp.VMULF<14>(rsp.vpu.r[16], rsp.vpu.r[19], rsp.vpu.r[28]);
    // vadd        $v31, $v30, $v11
    rsp.VADD<0>(rsp.vpu.r[31], rsp.vpu.r[30], rsp.vpu.r[11]);
    // vadd        $v16, $v16, $v16
    rsp.VADD<0>(rsp.vpu.r[16], rsp.vpu.r[16], rsp.vpu.r[16]);
    // vadd        $v31, $v31, $v15
    rsp.VADD<0>(rsp.vpu.r[31], rsp.vpu.r[31], rsp.vpu.r[15]);
L_1854:
    // vmulf       $v17, $v26, $v28[7]
    rsp.VMULF<15>(rsp.vpu.r[17], rsp.vpu.r[26], rsp.vpu.r[28]);
    // vadd        $v27, $v16, $v31[0]
    rsp.VADD<8>(rsp.vpu.r[27], rsp.vpu.r[16], rsp.vpu.r[31]);
    // vmov        $v29[7], $v28[7]
    rsp.VMOV<15>(rsp.vpu.r[29], 7, rsp.vpu.r[28]);
    // addi        $22, $22, -0x10
    r22 = RSP_ADD32(r22, -0X10);
    // vadd        $v17, $v17, $v17
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[17]);
    // vadd        $v28, $v27, $v17
    rsp.VADD<0>(rsp.vpu.r[28], rsp.vpu.r[27], rsp.vpu.r[17]);
    // vadd        $v27, $v17, $v31[1]
    rsp.VADD<9>(rsp.vpu.r[27], rsp.vpu.r[17], rsp.vpu.r[31]);
    // vmulf       $v16, $v25, $v28[0]
    rsp.VMULF<8>(rsp.vpu.r[16], rsp.vpu.r[25], rsp.vpu.r[28]);
    // vor         $v14, $v29, $v29
    rsp.VOR<0>(rsp.vpu.r[14], rsp.vpu.r[29], rsp.vpu.r[29]);
    // lqv         $v11[0], 0x10($19)
    rsp.LQV<0>(rsp.vpu.r[11], r19, 0X1);
    // vmov        $v29[0], $v28[0]
    rsp.VMOV<8>(rsp.vpu.r[29], 0, rsp.vpu.r[28]);
    // vadd        $v16, $v16, $v16
    rsp.VADD<0>(rsp.vpu.r[16], rsp.vpu.r[16], rsp.vpu.r[16]);
    // vadd        $v28, $v27, $v16
    rsp.VADD<0>(rsp.vpu.r[28], rsp.vpu.r[27], rsp.vpu.r[16]);
    // vadd        $v27, $v16, $v31[2]
    rsp.VADD<10>(rsp.vpu.r[27], rsp.vpu.r[16], rsp.vpu.r[31]);
    // vmulf       $v17, $v24, $v28[1]
    rsp.VMULF<9>(rsp.vpu.r[17], rsp.vpu.r[24], rsp.vpu.r[28]);
    // lrv         $v11[0], 0x20($19)
    rsp.LRV<0>(rsp.vpu.r[11], r19, 0X2);
    // bne         $18, $zero, L_18A0
    if (r18 != 0) {
        // vmov        $v29[1], $v28[1]
        rsp.VMOV<9>(rsp.vpu.r[29], 1, rsp.vpu.r[28]);
        goto L_18A0;
    }
    // vmov        $v29[1], $v28[1]
    rsp.VMOV<9>(rsp.vpu.r[29], 1, rsp.vpu.r[28]);
    // sqv         $v14[0], 0x7F0($23)
    rsp.SQV<0>(rsp.vpu.r[14], r23, -0X1);
L_18A0:
    // vadd        $v17, $v17, $v17
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[17]);
    // vadd        $v28, $v27, $v17
    rsp.VADD<0>(rsp.vpu.r[28], rsp.vpu.r[27], rsp.vpu.r[17]);
    // or          $18, $zero, $zero
    r18 = 0 | 0;
    // vadd        $v27, $v17, $v31[3]
    rsp.VADD<11>(rsp.vpu.r[27], rsp.vpu.r[17], rsp.vpu.r[31]);
    // vmulf       $v16, $v23, $v28[2]
    rsp.VMULF<10>(rsp.vpu.r[16], rsp.vpu.r[23], rsp.vpu.r[28]);
    // vmov        $v29[2], $v28[2]
    rsp.VMOV<10>(rsp.vpu.r[29], 2, rsp.vpu.r[28]);
    // vmulf       $v11, $v11, $v18[1]
    rsp.VMULF<9>(rsp.vpu.r[11], rsp.vpu.r[11], rsp.vpu.r[18]);
    // lqv         $v30[0], 0x10($23)
    rsp.LQV<0>(rsp.vpu.r[30], r23, 0X1);
    // vadd        $v16, $v16, $v16
    rsp.VADD<0>(rsp.vpu.r[16], rsp.vpu.r[16], rsp.vpu.r[16]);
    // vadd        $v28, $v27, $v16
    rsp.VADD<0>(rsp.vpu.r[28], rsp.vpu.r[27], rsp.vpu.r[16]);
    // vadd        $v27, $v16, $v31[4]
    rsp.VADD<12>(rsp.vpu.r[27], rsp.vpu.r[16], rsp.vpu.r[31]);
    // vmulf       $v17, $v22, $v28[3]
    rsp.VMULF<11>(rsp.vpu.r[17], rsp.vpu.r[22], rsp.vpu.r[28]);
    // vmov        $v29[3], $v28[3]
    rsp.VMOV<11>(rsp.vpu.r[29], 3, rsp.vpu.r[28]);
    // vadd        $v17, $v17, $v17
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[17]);
    // lqv         $v15[0], 0x10($21)
    rsp.LQV<0>(rsp.vpu.r[15], r21, 0X1);
    // vmulf       $v30, $v30, $v18[0]
    rsp.VMULF<8>(rsp.vpu.r[30], rsp.vpu.r[30], rsp.vpu.r[18]);
    // vadd        $v28, $v27, $v17
    rsp.VADD<0>(rsp.vpu.r[28], rsp.vpu.r[27], rsp.vpu.r[17]);
    // vadd        $v27, $v17, $v31[5]
    rsp.VADD<13>(rsp.vpu.r[27], rsp.vpu.r[17], rsp.vpu.r[31]);
    // vmulf       $v16, $v21, $v28[4]
    rsp.VMULF<12>(rsp.vpu.r[16], rsp.vpu.r[21], rsp.vpu.r[28]);
    // vmov        $v29[4], $v28[4]
    rsp.VMOV<12>(rsp.vpu.r[29], 4, rsp.vpu.r[28]);
    // vadd        $v16, $v16, $v16
    rsp.VADD<0>(rsp.vpu.r[16], rsp.vpu.r[16], rsp.vpu.r[16]);
    // lrv         $v15[0], 0x20($21)
    rsp.LRV<0>(rsp.vpu.r[15], r21, 0X2);
    // vadd        $v11, $v11, $v30
    rsp.VADD<0>(rsp.vpu.r[11], rsp.vpu.r[11], rsp.vpu.r[30]);
    // vadd        $v28, $v27, $v16
    rsp.VADD<0>(rsp.vpu.r[28], rsp.vpu.r[27], rsp.vpu.r[16]);
    // vadd        $v27, $v16, $v31[6]
    rsp.VADD<14>(rsp.vpu.r[27], rsp.vpu.r[16], rsp.vpu.r[31]);
    // vmulf       $v17, $v20, $v28[5]
    rsp.VMULF<13>(rsp.vpu.r[17], rsp.vpu.r[20], rsp.vpu.r[28]);
    // vmov        $v29[5], $v28[5]
    rsp.VMOV<13>(rsp.vpu.r[29], 5, rsp.vpu.r[28]);
    // vmulf       $v13, $v15, $v18[0]
    rsp.VMULF<8>(rsp.vpu.r[13], rsp.vpu.r[15], rsp.vpu.r[18]);
    // vadd        $v17, $v17, $v17
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[17]);
    // vadd        $v28, $v27, $v17
    rsp.VADD<0>(rsp.vpu.r[28], rsp.vpu.r[27], rsp.vpu.r[17]);
    // vadd        $v27, $v17, $v31[7]
    rsp.VADD<15>(rsp.vpu.r[27], rsp.vpu.r[17], rsp.vpu.r[31]);
    // vmulf       $v16, $v19, $v28[6]
    rsp.VMULF<14>(rsp.vpu.r[16], rsp.vpu.r[19], rsp.vpu.r[28]);
    // addi        $21, $21, 0x10
    r21 = RSP_ADD32(r21, 0X10);
    // vmov        $v29[6], $v28[6]
    rsp.VMOV<14>(rsp.vpu.r[29], 6, rsp.vpu.r[28]);
    // addi        $19, $19, 0x10
    r19 = RSP_ADD32(r19, 0X10);
    // vadd        $v31, $v11, $v13
    rsp.VADD<0>(rsp.vpu.r[31], rsp.vpu.r[11], rsp.vpu.r[13]);
    // vadd        $v16, $v16, $v16
    rsp.VADD<0>(rsp.vpu.r[16], rsp.vpu.r[16], rsp.vpu.r[16]);
    // vadd        $v28, $v27, $v16
    rsp.VADD<0>(rsp.vpu.r[28], rsp.vpu.r[27], rsp.vpu.r[16]);
    // bgtz        $22, L_1854
    if (RSP_SIGNED(r22) > 0) {
        // addi        $23, $23, 0x10
        r23 = RSP_ADD32(r23, 0X10);
        goto L_1854;
    }
    // addi        $23, $23, 0x10
    r23 = RSP_ADD32(r23, 0X10);
    // vmov        $v29[7], $v28[7]
    rsp.VMOV<15>(rsp.vpu.r[29], 7, rsp.vpu.r[28]);
L_1944:
    // vor         $v14, $v29, $v29
    rsp.VOR<0>(rsp.vpu.r[14], rsp.vpu.r[29], rsp.vpu.r[29]);
    // slv         $v15[0], 0x0($1)
    rsp.SLV<0>(rsp.vpu.r[15], r1, 0X0);
    // slv         $v29[12], 0x4($1)
    rsp.SLV<12>(rsp.vpu.r[29], r1, 0X1);
    // jal         0x1198
    r31 = 0x1958;
    // sqv         $v14[0], 0x7F0($23)
    rsp.SQV<0>(rsp.vpu.r[14], r23, -0X1);
    goto L_1198;
    // sqv         $v14[0], 0x7F0($23)
    rsp.SQV<0>(rsp.vpu.r[14], r23, -0X1);
L_1958:
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
L_195C:
    // bne         $5, $zero, L_195C
    if (r5 != 0) {
        // mfc0        $5, SP_DMA_BUSY
        r5 = 0;
        goto L_195C;
    }
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
    // j           L_110C
    // nop

    goto L_110C;
    // nop

L_196C:
    // srl         $19, $25, 24
    r19 = S32(U32(r25) >> 24);
    // addi        $20, $zero, 0x400
    r20 = RSP_ADD32(0, 0X400);
    // vxor        $v21, $v21, $v21
    rsp.VXOR<0>(rsp.vpu.r[21], rsp.vpu.r[21], rsp.vpu.r[21]);
    // beq         $19, $zero, L_1984
    if (r19 == 0) {
        // addi        $23, $zero, 0x500
        r23 = RSP_ADD32(0, 0X500);
        goto L_1984;
    }
    // addi        $23, $zero, 0x500
    r23 = RSP_ADD32(0, 0X500);
    // addi        $23, $zero, 0x670
    r23 = RSP_ADD32(0, 0X670);
L_1984:
    // lqv         $v28[0], 0x10($20)
    rsp.LQV<0>(rsp.vpu.r[28], r20, 0X1);
    // vxor        $v22, $v22, $v22
    rsp.VXOR<0>(rsp.vpu.r[22], rsp.vpu.r[22], rsp.vpu.r[22]);
    // mtc2        $26, $v18[10]
    rsp.MTC2<10>(r26, rsp.vpu.r[18]);
    // vxor        $v23, $v23, $v23
    rsp.VXOR<0>(rsp.vpu.r[23], rsp.vpu.r[23], rsp.vpu.r[23]);
    // sll         $26, $26, 2
    r26 = S32(r26) << 2;
    // vxor        $v24, $v24, $v24
    rsp.VXOR<0>(rsp.vpu.r[24], rsp.vpu.r[24], rsp.vpu.r[24]);
    // mtc2        $26, $v20[0]
    rsp.MTC2<0>(r26, rsp.vpu.r[20]);
    // vxor        $v25, $v25, $v25
    rsp.VXOR<0>(rsp.vpu.r[25], rsp.vpu.r[25], rsp.vpu.r[25]);
    // sll         $2, $25, 8
    r2 = S32(r25) << 8;
    // vxor        $v26, $v26, $v26
    rsp.VXOR<0>(rsp.vpu.r[26], rsp.vpu.r[26], rsp.vpu.r[26]);
    // srl         $2, $2, 8
    r2 = S32(U32(r2) >> 8);
    // vxor        $v27, $v27, $v27
    rsp.VXOR<0>(rsp.vpu.r[27], rsp.vpu.r[27], rsp.vpu.r[27]);
    // addi        $3, $zero, 0x7
    r3 = RSP_ADD32(0, 0X7);
    // addi        $19, $zero, 0x4
    r19 = RSP_ADD32(0, 0X4);
    // mtc2        $19, $v18[0]
    rsp.MTC2<0>(r19, rsp.vpu.r[18]);
    // addi        $22, $zero, 0x170
    r22 = RSP_ADD32(0, 0X170);
    // vmudm       $v20, $v28, $v20[0]
    rsp.VMUDM<8>(rsp.vpu.r[20], rsp.vpu.r[28], rsp.vpu.r[20]);
    // srl         $19, $26, 16
    r19 = S32(U32(r26) >> 16);
    // andi        $19, $19, 0x1
    r19 = r19 & 0X1;
    // bgtz        $19, L_1A40
    if (RSP_SIGNED(r19) > 0) {
        // sqv         $v20[0], 0x10($20)
        rsp.SQV<0>(rsp.vpu.r[20], r20, 0X1);
        goto L_1A40;
    }
    // sqv         $v20[0], 0x10($20)
    rsp.SQV<0>(rsp.vpu.r[20], r20, 0X1);
    // addi        $1, $24, 0x0
    r1 = RSP_ADD32(r24, 0X0);
    // mfc0        $19, SP_DMA_FULL
    r19 = 0;
L_19E0:
    // bne         $19, $zero, L_19E0
    if (r19 != 0) {
        // mfc0        $19, SP_DMA_FULL
        r19 = 0;
        goto L_19E0;
    }
    // mfc0        $19, SP_DMA_FULL
    r19 = 0;
    // mtc0        $1, SP_MEM_ADDR
    SET_DMA_MEM(r1);
    // mtc0        $2, SP_DRAM_ADDR
    SET_DMA_DRAM(r2);
    // mtc0        $3, SP_RD_LEN
    if (dma_mem_address & 0x1000) {
        ctx->resume_address = 0x19F0;
        ctx->resume_delay = false;
        goto do_overlay_swap;
    }
    DO_DMA_READ(r3);
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // lrv         $v27[0], 0x20($20)
    rsp.LRV<0>(rsp.vpu.r[27], r20, 0X2);
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // lrv         $v26[0], 0x20($20)
    rsp.LRV<0>(rsp.vpu.r[26], r20, 0X2);
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // lrv         $v25[0], 0x20($20)
    rsp.LRV<0>(rsp.vpu.r[25], r20, 0X2);
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // lrv         $v24[0], 0x20($20)
    rsp.LRV<0>(rsp.vpu.r[24], r20, 0X2);
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // lrv         $v23[0], 0x20($20)
    rsp.LRV<0>(rsp.vpu.r[23], r20, 0X2);
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // lrv         $v22[0], 0x20($20)
    rsp.LRV<0>(rsp.vpu.r[22], r20, 0X2);
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // lrv         $v21[0], 0x20($20)
    rsp.LRV<0>(rsp.vpu.r[21], r20, 0X2);
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
L_1A30:
    // bne         $5, $zero, L_1A30
    if (r5 != 0) {
        // mfc0        $5, SP_DMA_BUSY
        r5 = 0;
        goto L_1A30;
    }
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
    // j           L_1A7C
    // ldv         $v30[8], 0x0($1)
    rsp.LDV<8>(rsp.vpu.r[30], r1, 0X0);
    goto L_1A7C;
    // ldv         $v30[8], 0x0($1)
    rsp.LDV<8>(rsp.vpu.r[30], r1, 0X0);
L_1A40:
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // vxor        $v30, $v30, $v30
    rsp.VXOR<0>(rsp.vpu.r[30], rsp.vpu.r[30], rsp.vpu.r[30]);
    // lrv         $v27[0], 0x20($20)
    rsp.LRV<0>(rsp.vpu.r[27], r20, 0X2);
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // lrv         $v26[0], 0x20($20)
    rsp.LRV<0>(rsp.vpu.r[26], r20, 0X2);
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // lrv         $v25[0], 0x20($20)
    rsp.LRV<0>(rsp.vpu.r[25], r20, 0X2);
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // lrv         $v24[0], 0x20($20)
    rsp.LRV<0>(rsp.vpu.r[24], r20, 0X2);
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // lrv         $v23[0], 0x20($20)
    rsp.LRV<0>(rsp.vpu.r[23], r20, 0X2);
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // lrv         $v22[0], 0x20($20)
    rsp.LRV<0>(rsp.vpu.r[22], r20, 0X2);
    // addi        $20, $20, -0x2
    r20 = RSP_ADD32(r20, -0X2);
    // lrv         $v21[0], 0x20($20)
    rsp.LRV<0>(rsp.vpu.r[21], r20, 0X2);
L_1A7C:
    // lqv         $v31[0], 0x0($23)
    rsp.LQV<0>(rsp.vpu.r[31], r23, 0X0);
L_1A80:
    // vmudh       $v20, $v28, $v30[7]
    rsp.VMUDH<15>(rsp.vpu.r[20], rsp.vpu.r[28], rsp.vpu.r[30]);
    // vmadh       $v20, $v27, $v31[0]
    rsp.VMADH<8>(rsp.vpu.r[20], rsp.vpu.r[27], rsp.vpu.r[31]);
    // addi        $22, $22, -0x10
    r22 = RSP_ADD32(r22, -0X10);
    // vmadh       $v20, $v26, $v31[1]
    rsp.VMADH<9>(rsp.vpu.r[20], rsp.vpu.r[26], rsp.vpu.r[31]);
    // vmadh       $v20, $v25, $v31[2]
    rsp.VMADH<10>(rsp.vpu.r[20], rsp.vpu.r[25], rsp.vpu.r[31]);
    // sqv         $v30[0], 0x7F0($23)
    rsp.SQV<0>(rsp.vpu.r[30], r23, -0X1);
    // vmadh       $v20, $v24, $v31[3]
    rsp.VMADH<11>(rsp.vpu.r[20], rsp.vpu.r[24], rsp.vpu.r[31]);
    // vmadh       $v30, $v23, $v31[4]
    rsp.VMADH<12>(rsp.vpu.r[30], rsp.vpu.r[23], rsp.vpu.r[31]);
    // vmadh       $v20, $v22, $v31[5]
    rsp.VMADH<13>(rsp.vpu.r[20], rsp.vpu.r[22], rsp.vpu.r[31]);
    // vmadh       $v20, $v21, $v31[6]
    rsp.VMADH<14>(rsp.vpu.r[20], rsp.vpu.r[21], rsp.vpu.r[31]);
    // vmadh       $v20, $v31, $v18[5]
    rsp.VMADH<13>(rsp.vpu.r[20], rsp.vpu.r[31], rsp.vpu.r[18]);
    // lqv         $v31[0], 0x10($23)
    rsp.LQV<0>(rsp.vpu.r[31], r23, 0X1);
    // vsar        $v29, $v19, $v30[1]
    rsp.VSAR<9>(rsp.vpu.r[29], rsp.vpu.r[19]);
    // vsar        $v30, $v19, $v30[0]
    rsp.VSAR<8>(rsp.vpu.r[30], rsp.vpu.r[19]);
    // vmudn       $v20, $v29, $v18[0]
    rsp.VMUDN<8>(rsp.vpu.r[20], rsp.vpu.r[29], rsp.vpu.r[18]);
    // vmadh       $v30, $v30, $v18[0]
    rsp.VMADH<8>(rsp.vpu.r[30], rsp.vpu.r[30], rsp.vpu.r[18]);
    // bgtz        $22, L_1A80
    if (RSP_SIGNED(r22) > 0) {
        // addi        $23, $23, 0x10
        r23 = RSP_ADD32(r23, 0X10);
        goto L_1A80;
    }
    // addi        $23, $23, 0x10
    r23 = RSP_ADD32(r23, 0X10);
    // addi        $1, $23, -0x8
    r1 = RSP_ADD32(r23, -0X8);
    // jal         0x1198
    r31 = 0x1AD4;
    // sqv         $v30[0], 0x7F0($23)
    rsp.SQV<0>(rsp.vpu.r[30], r23, -0X1);
    goto L_1198;
    // sqv         $v30[0], 0x7F0($23)
    rsp.SQV<0>(rsp.vpu.r[30], r23, -0X1);
L_1AD4:
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
L_1AD8:
    // bne         $5, $zero, L_1AD8
    if (r5 != 0) {
        // mfc0        $5, SP_DMA_BUSY
        r5 = 0;
        goto L_1AD8;
    }
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
    // j           L_110C
    // nop

    goto L_110C;
    // nop

L_1AE8:
    // addi        $2, $zero, 0x170
    r2 = RSP_ADD32(0, 0X170);
    // addi        $1, $26, 0x500
    r1 = RSP_ADD32(r26, 0X500);
    // mtc2        $25, $v1[0]
    rsp.MTC2<0>(r25, rsp.vpu.r[1]);
    // srl         $3, $25, 16
    r3 = S32(U32(r25) >> 16);
    // mtc2        $3, $v1[2]
    rsp.MTC2<2>(r3, rsp.vpu.r[1]);
L_1AFC:
    // lqv         $v2[0], 0x0($1)
    rsp.LQV<0>(rsp.vpu.r[2], r1, 0X0);
    // addi        $2, $2, -0x10
    r2 = RSP_ADD32(r2, -0X10);
    // addi        $1, $1, 0x10
    r1 = RSP_ADD32(r1, 0X10);
    // vmudh       $v3, $v2, $v1[0]
    rsp.VMUDH<8>(rsp.vpu.r[3], rsp.vpu.r[2], rsp.vpu.r[1]);
    // vmudm       $v3, $v3, $v1[1]
    rsp.VMUDM<9>(rsp.vpu.r[3], rsp.vpu.r[3], rsp.vpu.r[1]);
    // bgtz        $2, L_1AFC
    if (RSP_SIGNED(r2) > 0) {
        // sqv         $v3[0], 0x7F0($1)
        rsp.SQV<0>(rsp.vpu.r[3], r1, -0X1);
        goto L_1AFC;
    }
    // sqv         $v3[0], 0x7F0($1)
    rsp.SQV<0>(rsp.vpu.r[3], r1, -0X1);
    // j           L_110C
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    goto L_110C;
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
L_1B20:
    // sll         $2, $26, 8
    r2 = S32(r26) << 8;
    // vxor        $v23, $v23, $v23
    rsp.VXOR<0>(rsp.vpu.r[23], rsp.vpu.r[23], rsp.vpu.r[23]);
    // srl         $2, $2, 8
    r2 = S32(U32(r2) >> 8);
    // addi        $3, $zero, 0xF
    r3 = RSP_ADD32(0, 0XF);
    // srl         $21, $25, 30
    r21 = S32(U32(r25) >> 30);
    // bgtz        $21, L_1B80
    if (RSP_SIGNED(r21) > 0) {
        // addi        $1, $24, 0x0
        r1 = RSP_ADD32(r24, 0X0);
        goto L_1B80;
    }
    // addi        $1, $24, 0x0
    r1 = RSP_ADD32(r24, 0X0);
    // mfc0        $4, SP_DMA_FULL
    r4 = 0;
L_1B40:
    // bne         $4, $zero, L_1B40
    if (r4 != 0) {
        // mfc0        $4, SP_DMA_FULL
        r4 = 0;
        goto L_1B40;
    }
    // mfc0        $4, SP_DMA_FULL
    r4 = 0;
    // mtc0        $1, SP_MEM_ADDR
    SET_DMA_MEM(r1);
    // mtc0        $2, SP_DRAM_ADDR
    SET_DMA_DRAM(r2);
    // mtc0        $3, SP_RD_LEN
    if (dma_mem_address & 0x1000) {
        ctx->resume_address = 0x1B50;
        ctx->resume_delay = false;
        goto do_overlay_swap;
    }
    DO_DMA_READ(r3);
    // srl         $20, $25, 2
    r20 = S32(U32(r25) >> 2);
    // andi        $20, $20, 0xFFF
    r20 = r20 & 0XFFF;
    // addi        $20, $20, 0x4F8
    r20 = RSP_ADD32(r20, 0X4F8);
    // lqv         $v31[0], 0x50($zero)
    rsp.LQV<0>(rsp.vpu.r[31], 0, 0X5);
    // lqv         $v25[0], 0x40($zero)
    rsp.LQV<0>(rsp.vpu.r[25], 0, 0X4);
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
L_1B6C:
    // bne         $5, $zero, L_1B6C
    if (r5 != 0) {
        // mfc0        $5, SP_DMA_BUSY
        r5 = 0;
        goto L_1B6C;
    }
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
    // ldv         $v19[0], 0x0($24)
    rsp.LDV<0>(rsp.vpu.r[19], r24, 0X0);
    // j           L_1B9C
    // lsv         $v24[14], 0x8($24)
    rsp.LSV<14>(rsp.vpu.r[24], r24, 0X4);
    goto L_1B9C;
    // lsv         $v24[14], 0x8($24)
    rsp.LSV<14>(rsp.vpu.r[24], r24, 0X4);
L_1B80:
    // srl         $20, $25, 2
    r20 = S32(U32(r25) >> 2);
    // andi        $20, $20, 0xFFF
    r20 = r20 & 0XFFF;
    // addi        $20, $20, 0x4F8
    r20 = RSP_ADD32(r20, 0X4F8);
    // lqv         $v31[0], 0x50($zero)
    rsp.LQV<0>(rsp.vpu.r[31], 0, 0X5);
    // vxor        $v19, $v19, $v19
    rsp.VXOR<0>(rsp.vpu.r[19], rsp.vpu.r[19], rsp.vpu.r[19]);
    // lqv         $v25[0], 0x40($zero)
    rsp.LQV<0>(rsp.vpu.r[25], 0, 0X4);
    // vxor        $v24, $v24, $v24
    rsp.VXOR<0>(rsp.vpu.r[24], rsp.vpu.r[24], rsp.vpu.r[24]);
L_1B9C:
    // mtc2        $20, $v21[4]
    rsp.MTC2<4>(r20, rsp.vpu.r[21]);
    // addi        $4, $zero, 0xC0
    r4 = RSP_ADD32(0, 0XC0);
    // mtc2        $4, $v21[6]
    rsp.MTC2<6>(r4, rsp.vpu.r[21]);
    // vsub        $v25, $v25, $v31
    rsp.VSUB<0>(rsp.vpu.r[25], rsp.vpu.r[25], rsp.vpu.r[31]);
    // srl         $4, $25, 14
    r4 = S32(U32(r25) >> 14);
    // mtc2        $4, $v21[8]
    rsp.MTC2<8>(r4, rsp.vpu.r[21]);
    // addi        $4, $zero, 0x40
    r4 = RSP_ADD32(0, 0X40);
    // mtc2        $4, $v21[10]
    rsp.MTC2<10>(r4, rsp.vpu.r[21]);
    // vsub        $v25, $v25, $v31
    rsp.VSUB<0>(rsp.vpu.r[25], rsp.vpu.r[25], rsp.vpu.r[31]);
    // lqv         $v30[0], 0x60($zero)
    rsp.LQV<0>(rsp.vpu.r[30], 0, 0X6);
    // lqv         $v29[0], 0x70($zero)
    rsp.LQV<0>(rsp.vpu.r[29], 0, 0X7);
    // lqv         $v28[0], 0x80($zero)
    rsp.LQV<0>(rsp.vpu.r[28], 0, 0X8);
    // vmudm       $v24, $v31, $v24[7]
    rsp.VMUDM<15>(rsp.vpu.r[24], rsp.vpu.r[31], rsp.vpu.r[24]);
    // lqv         $v27[0], 0x90($zero)
    rsp.LQV<0>(rsp.vpu.r[27], 0, 0X9);
    // vmadm       $v23, $v25, $v21[4]
    rsp.VMADM<12>(rsp.vpu.r[23], rsp.vpu.r[25], rsp.vpu.r[21]);
    // lqv         $v26[0], 0xA0($zero)
    rsp.LQV<0>(rsp.vpu.r[26], 0, 0XA);
    // vmadn       $v24, $v31, $v30[0]
    rsp.VMADN<8>(rsp.vpu.r[24], rsp.vpu.r[31], rsp.vpu.r[30]);
    // sdv         $v19[0], 0x0($20)
    rsp.SDV<0>(rsp.vpu.r[19], r20, 0X0);
    // lqv         $v25[0], 0x40($zero)
    rsp.LQV<0>(rsp.vpu.r[25], 0, 0X4);
    // vmudn       $v22, $v31, $v21[2]
    rsp.VMUDN<10>(rsp.vpu.r[22], rsp.vpu.r[31], rsp.vpu.r[21]);
    // addi        $22, $zero, 0x170
    r22 = RSP_ADD32(0, 0X170);
    // vmadn       $v22, $v23, $v30[2]
    rsp.VMADN<10>(rsp.vpu.r[22], rsp.vpu.r[23], rsp.vpu.r[30]);
    // andi        $4, $25, 0x3
    r4 = r25 & 0X3;
    // vmudl       $v20, $v24, $v21[5]
    rsp.VMUDL<13>(rsp.vpu.r[20], rsp.vpu.r[24], rsp.vpu.r[21]);
    // beq         $4, $zero, L_1C08
    if (r4 == 0) {
        // addi        $23, $zero, 0x500
        r23 = RSP_ADD32(0, 0X500);
        goto L_1C08;
    }
    // addi        $23, $zero, 0x500
    r23 = RSP_ADD32(0, 0X500);
    // addi        $23, $zero, 0x670
    r23 = RSP_ADD32(0, 0X670);
L_1C08:
    // ssv         $v24[7], 0x8($24)
    rsp.SSV<7>(rsp.vpu.r[24], r24, 0X4);
    // vmudn       $v20, $v20, $v30[4]
    rsp.VMUDN<12>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[30]);
    // sqv         $v22[0], 0x7B0($zero)
    rsp.SQV<0>(rsp.vpu.r[22], 0, -0X5);
    // vmadn       $v20, $v31, $v21[3]
    rsp.VMADN<11>(rsp.vpu.r[20], rsp.vpu.r[31], rsp.vpu.r[21]);
    // sqv         $v20[0], 0x7C0($zero)
    rsp.SQV<0>(rsp.vpu.r[20], 0, -0X4);
    // lh          $21, 0xFB0($zero)
    r21 = RSP_MEM_H_LOAD(0XFB0, 0);
    // lh          $13, 0xFC0($zero)
    r13 = RSP_MEM_H_LOAD(0XFC0, 0);
    // lh          $17, 0xFB8($zero)
    r17 = RSP_MEM_H_LOAD(0XFB8, 0);
    // lh          $9, 0xFC8($zero)
    r9 = RSP_MEM_H_LOAD(0XFC8, 0);
    // lh          $20, 0xFB2($zero)
    r20 = RSP_MEM_H_LOAD(0XFB2, 0);
    // lh          $12, 0xFC2($zero)
    r12 = RSP_MEM_H_LOAD(0XFC2, 0);
    // lh          $16, 0xFBA($zero)
    r16 = RSP_MEM_H_LOAD(0XFBA, 0);
    // lh          $8, 0xFCA($zero)
    r8 = RSP_MEM_H_LOAD(0XFCA, 0);
    // lh          $19, 0xFB4($zero)
    r19 = RSP_MEM_H_LOAD(0XFB4, 0);
    // lh          $11, 0xFC4($zero)
    r11 = RSP_MEM_H_LOAD(0XFC4, 0);
    // lh          $15, 0xFBC($zero)
    r15 = RSP_MEM_H_LOAD(0XFBC, 0);
    // lh          $7, 0xFCC($zero)
    r7 = RSP_MEM_H_LOAD(0XFCC, 0);
    // lh          $18, 0xFB6($zero)
    r18 = RSP_MEM_H_LOAD(0XFB6, 0);
    // lh          $10, 0xFC6($zero)
    r10 = RSP_MEM_H_LOAD(0XFC6, 0);
    // lh          $14, 0xFBE($zero)
    r14 = RSP_MEM_H_LOAD(0XFBE, 0);
    // lh          $6, 0xFCE($zero)
    r6 = RSP_MEM_H_LOAD(0XFCE, 0);
L_1C5C:
    // ldv         $v19[0], 0x0($21)
    rsp.LDV<0>(rsp.vpu.r[19], r21, 0X0);
    // vmudm       $v24, $v31, $v24[7]
    rsp.VMUDM<15>(rsp.vpu.r[24], rsp.vpu.r[31], rsp.vpu.r[24]);
    // ldv         $v18[0], 0x0($13)
    rsp.LDV<0>(rsp.vpu.r[18], r13, 0X0);
    // vmadh       $v24, $v31, $v23[7]
    rsp.VMADH<15>(rsp.vpu.r[24], rsp.vpu.r[31], rsp.vpu.r[23]);
    // ldv         $v19[8], 0x0($17)
    rsp.LDV<8>(rsp.vpu.r[19], r17, 0X0);
    // vmadm       $v23, $v25, $v21[4]
    rsp.VMADM<12>(rsp.vpu.r[23], rsp.vpu.r[25], rsp.vpu.r[21]);
    // ldv         $v18[8], 0x0($9)
    rsp.LDV<8>(rsp.vpu.r[18], r9, 0X0);
    // vmadn       $v24, $v31, $v30[0]
    rsp.VMADN<8>(rsp.vpu.r[24], rsp.vpu.r[31], rsp.vpu.r[30]);
    // ldv         $v17[0], 0x0($20)
    rsp.LDV<0>(rsp.vpu.r[17], r20, 0X0);
    // vmudn       $v22, $v31, $v21[2]
    rsp.VMUDN<10>(rsp.vpu.r[22], rsp.vpu.r[31], rsp.vpu.r[21]);
    // ldv         $v16[0], 0x0($12)
    rsp.LDV<0>(rsp.vpu.r[16], r12, 0X0);
    // ldv         $v17[8], 0x0($16)
    rsp.LDV<8>(rsp.vpu.r[17], r16, 0X0);
    // vmadn       $v22, $v23, $v30[2]
    rsp.VMADN<10>(rsp.vpu.r[22], rsp.vpu.r[23], rsp.vpu.r[30]);
    // ldv         $v16[8], 0x0($8)
    rsp.LDV<8>(rsp.vpu.r[16], r8, 0X0);
    // vmudl       $v20, $v24, $v21[5]
    rsp.VMUDL<13>(rsp.vpu.r[20], rsp.vpu.r[24], rsp.vpu.r[21]);
    // ldv         $v15[0], 0x0($19)
    rsp.LDV<0>(rsp.vpu.r[15], r19, 0X0);
    // ldv         $v14[0], 0x0($11)
    rsp.LDV<0>(rsp.vpu.r[14], r11, 0X0);
    // ldv         $v15[8], 0x0($15)
    rsp.LDV<8>(rsp.vpu.r[15], r15, 0X0);
    // ldv         $v14[8], 0x0($7)
    rsp.LDV<8>(rsp.vpu.r[14], r7, 0X0);
    // vmudn       $v20, $v20, $v30[4]
    rsp.VMUDN<12>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[30]);
    // ldv         $v13[0], 0x0($18)
    rsp.LDV<0>(rsp.vpu.r[13], r18, 0X0);
    // vmadn       $v20, $v31, $v21[3]
    rsp.VMADN<11>(rsp.vpu.r[20], rsp.vpu.r[31], rsp.vpu.r[21]);
    // ldv         $v12[0], 0x0($10)
    rsp.LDV<0>(rsp.vpu.r[12], r10, 0X0);
    // ldv         $v13[8], 0x0($14)
    rsp.LDV<8>(rsp.vpu.r[13], r14, 0X0);
    // vmulf       $v11, $v19, $v18
    rsp.VMULF<0>(rsp.vpu.r[11], rsp.vpu.r[19], rsp.vpu.r[18]);
    // ldv         $v12[8], 0x0($6)
    rsp.LDV<8>(rsp.vpu.r[12], r6, 0X0);
    // vmulf       $v10, $v17, $v16
    rsp.VMULF<0>(rsp.vpu.r[10], rsp.vpu.r[17], rsp.vpu.r[16]);
    // sqv         $v22[0], 0x7B0($zero)
    rsp.SQV<0>(rsp.vpu.r[22], 0, -0X5);
    // vmulf       $v9, $v15, $v14
    rsp.VMULF<0>(rsp.vpu.r[9], rsp.vpu.r[15], rsp.vpu.r[14]);
    // sqv         $v20[0], 0x7C0($zero)
    rsp.SQV<0>(rsp.vpu.r[20], 0, -0X4);
    // lh          $21, 0xFB0($zero)
    r21 = RSP_MEM_H_LOAD(0XFB0, 0);
    // lh          $13, 0xFC0($zero)
    r13 = RSP_MEM_H_LOAD(0XFC0, 0);
    // vmulf       $v8, $v13, $v12
    rsp.VMULF<0>(rsp.vpu.r[8], rsp.vpu.r[13], rsp.vpu.r[12]);
    // lh          $17, 0xFB8($zero)
    r17 = RSP_MEM_H_LOAD(0XFB8, 0);
    // vadd        $v11, $v11, $v11[1q]
    rsp.VADD<3>(rsp.vpu.r[11], rsp.vpu.r[11], rsp.vpu.r[11]);
    // lh          $9, 0xFC8($zero)
    r9 = RSP_MEM_H_LOAD(0XFC8, 0);
    // vadd        $v10, $v10, $v10[1q]
    rsp.VADD<3>(rsp.vpu.r[10], rsp.vpu.r[10], rsp.vpu.r[10]);
    // lh          $20, 0xFB2($zero)
    r20 = RSP_MEM_H_LOAD(0XFB2, 0);
    // vadd        $v9, $v9, $v9[1q]
    rsp.VADD<3>(rsp.vpu.r[9], rsp.vpu.r[9], rsp.vpu.r[9]);
    // lh          $12, 0xFC2($zero)
    r12 = RSP_MEM_H_LOAD(0XFC2, 0);
    // vadd        $v8, $v8, $v8[1q]
    rsp.VADD<3>(rsp.vpu.r[8], rsp.vpu.r[8], rsp.vpu.r[8]);
    // lh          $16, 0xFBA($zero)
    r16 = RSP_MEM_H_LOAD(0XFBA, 0);
    // vadd        $v11, $v11, $v11[2h]
    rsp.VADD<6>(rsp.vpu.r[11], rsp.vpu.r[11], rsp.vpu.r[11]);
    // lh          $8, 0xFCA($zero)
    r8 = RSP_MEM_H_LOAD(0XFCA, 0);
    // vadd        $v10, $v10, $v10[2h]
    rsp.VADD<6>(rsp.vpu.r[10], rsp.vpu.r[10], rsp.vpu.r[10]);
    // lh          $19, 0xFB4($zero)
    r19 = RSP_MEM_H_LOAD(0XFB4, 0);
    // vadd        $v9, $v9, $v9[2h]
    rsp.VADD<6>(rsp.vpu.r[9], rsp.vpu.r[9], rsp.vpu.r[9]);
    // lh          $11, 0xFC4($zero)
    r11 = RSP_MEM_H_LOAD(0XFC4, 0);
    // vadd        $v8, $v8, $v8[2h]
    rsp.VADD<6>(rsp.vpu.r[8], rsp.vpu.r[8], rsp.vpu.r[8]);
    // lh          $15, 0xFBC($zero)
    r15 = RSP_MEM_H_LOAD(0XFBC, 0);
    // vmudn       $v7, $v29, $v11[0h]
    rsp.VMUDN<4>(rsp.vpu.r[7], rsp.vpu.r[29], rsp.vpu.r[11]);
    // lh          $7, 0xFCC($zero)
    r7 = RSP_MEM_H_LOAD(0XFCC, 0);
    // vmadn       $v7, $v28, $v10[0h]
    rsp.VMADN<4>(rsp.vpu.r[7], rsp.vpu.r[28], rsp.vpu.r[10]);
    // lh          $18, 0xFB6($zero)
    r18 = RSP_MEM_H_LOAD(0XFB6, 0);
    // vmadn       $v7, $v27, $v9[0h]
    rsp.VMADN<4>(rsp.vpu.r[7], rsp.vpu.r[27], rsp.vpu.r[9]);
    // lh          $10, 0xFC6($zero)
    r10 = RSP_MEM_H_LOAD(0XFC6, 0);
    // vmadn       $v7, $v26, $v8[0h]
    rsp.VMADN<4>(rsp.vpu.r[7], rsp.vpu.r[26], rsp.vpu.r[8]);
    // lh          $14, 0xFBE($zero)
    r14 = RSP_MEM_H_LOAD(0XFBE, 0);
    // lh          $6, 0xFCE($zero)
    r6 = RSP_MEM_H_LOAD(0XFCE, 0);
    // addi        $22, $22, -0x10
    r22 = RSP_ADD32(r22, -0X10);
    // blez        $22, L_1D5C
    if (RSP_SIGNED(r22) <= 0) {
        // sqv         $v7[0], 0x0($23)
        rsp.SQV<0>(rsp.vpu.r[7], r23, 0X0);
        goto L_1D5C;
    }
    // sqv         $v7[0], 0x0($23)
    rsp.SQV<0>(rsp.vpu.r[7], r23, 0X0);
    // j           L_1C5C
    // addi        $23, $23, 0x10
    r23 = RSP_ADD32(r23, 0X10);
    goto L_1C5C;
    // addi        $23, $23, 0x10
    r23 = RSP_ADD32(r23, 0X10);
L_1D5C:
    // ldv         $v19[0], 0x0($21)
    rsp.LDV<0>(rsp.vpu.r[19], r21, 0X0);
    // ssv         $v24[0], 0x8($24)
    rsp.SSV<0>(rsp.vpu.r[24], r24, 0X4);
    // jal         0x1198
    r31 = 0x1D6C;
    // sdv         $v19[0], 0x0($24)
    rsp.SDV<0>(rsp.vpu.r[19], r24, 0X0);
    goto L_1198;
    // sdv         $v19[0], 0x0($24)
    rsp.SDV<0>(rsp.vpu.r[19], r24, 0X0);
L_1D6C:
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
L_1D74:
    // bne         $5, $zero, L_1D74
    if (r5 != 0) {
        // mfc0        $5, SP_DMA_BUSY
        r5 = 0;
        goto L_1D74;
    }
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
    // j           L_110C
    // nop

    goto L_110C;
    // nop

L_1D84:
    // sll         $2, $25, 8
    r2 = S32(r25) << 8;
    // srl         $2, $2, 8
    r2 = S32(U32(r2) >> 8);
    // lqv         $v31[0], 0x50($zero)
    rsp.LQV<0>(rsp.vpu.r[31], 0, 0X5);
    // lqv         $v10[0], 0x60($zero)
    rsp.LQV<0>(rsp.vpu.r[10], 0, 0X6);
    // lqv         $v30[0], 0xB0($zero)
    rsp.LQV<0>(rsp.vpu.r[30], 0, 0XB);
    // vxor        $v0, $v0, $v0
    rsp.VXOR<0>(rsp.vpu.r[0], rsp.vpu.r[0], rsp.vpu.r[0]);
    // srl         $14, $26, 16
    r14 = S32(U32(r26) >> 16);
    // andi        $15, $14, 0x1
    r15 = r14 & 0X1;
    // bgtz        $15, L_1DD0
    if (RSP_SIGNED(r15) > 0) {
        // addi        $1, $24, 0x0
        r1 = RSP_ADD32(r24, 0X0);
        goto L_1DD0;
    }
    // addi        $1, $24, 0x0
    r1 = RSP_ADD32(r24, 0X0);
    // jal         0x117C
    r31 = 0x1DB4;
    // addi        $3, $zero, 0x4F
    r3 = RSP_ADD32(0, 0X4F);
    goto L_117C;
    // addi        $3, $zero, 0x4F
    r3 = RSP_ADD32(0, 0X4F);
L_1DB4:
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
L_1DB8:
    // bne         $5, $zero, L_1DB8
    if (r5 != 0) {
        // mfc0        $5, SP_DMA_BUSY
        r5 = 0;
        goto L_1DB8;
    }
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
    // lqv         $v20[0], 0x0($24)
    rsp.LQV<0>(rsp.vpu.r[20], r24, 0X0);
    // lqv         $v21[0], 0x10($24)
    rsp.LQV<0>(rsp.vpu.r[21], r24, 0X1);
    // lqv         $v18[0], 0x20($24)
    rsp.LQV<0>(rsp.vpu.r[18], r24, 0X2);
    // lqv         $v19[0], 0x30($24)
    rsp.LQV<0>(rsp.vpu.r[19], r24, 0X3);
L_1DD0:
    // lqv         $v24[0], 0x40($24)
    rsp.LQV<0>(rsp.vpu.r[24], r24, 0X4);
    // addi        $16, $zero, 0x500
    r16 = RSP_ADD32(0, 0X500);
    // addi        $21, $zero, 0x9E0
    r21 = RSP_ADD32(0, 0X9E0);
    // addi        $20, $zero, 0xB50
    r20 = RSP_ADD32(0, 0XB50);
    // addi        $19, $zero, 0xCC0
    r19 = RSP_ADD32(0, 0XCC0);
    // addi        $18, $zero, 0xE30
    r18 = RSP_ADD32(0, 0XE30);
    // addi        $17, $zero, 0x170
    r17 = RSP_ADD32(0, 0X170);
    // mfc2        $22, $v24[8]
    rsp.MFC2<8>(r22, rsp.vpu.r[24]);
    // vand        $v9, $v31, $v24[6]
    rsp.VAND<14>(rsp.vpu.r[9], rsp.vpu.r[31], rsp.vpu.r[24]);
    // vand        $v8, $v31, $v24[7]
    rsp.VAND<15>(rsp.vpu.r[8], rsp.vpu.r[31], rsp.vpu.r[24]);
    // vsub        $v9, $v0, $v9
    rsp.VSUB<0>(rsp.vpu.r[9], rsp.vpu.r[0], rsp.vpu.r[9]);
    // vsub        $v8, $v0, $v8
    rsp.VSUB<0>(rsp.vpu.r[8], rsp.vpu.r[0], rsp.vpu.r[8]);
    // vxor        $v8, $v8, $v9
    rsp.VXOR<0>(rsp.vpu.r[8], rsp.vpu.r[8], rsp.vpu.r[9]);
    // beq         $15, $zero, L_1EDC
    if (r15 == 0) {
        // mfc2        $23, $v24[2]
        rsp.MFC2<2>(r23, rsp.vpu.r[24]);
        goto L_1EDC;
    }
    // mfc2        $23, $v24[2]
    rsp.MFC2<2>(r23, rsp.vpu.r[24]);
    // addi        $3, $zero, 0x4F
    r3 = RSP_ADD32(0, 0X4F);
    // vxor        $v20, $v20, $v20
    rsp.VXOR<0>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[20]);
    // lsv         $v20[14], 0x50($24)
    rsp.LSV<14>(rsp.vpu.r[20], r24, 0X28);
    // vxor        $v21, $v21, $v21
    rsp.VXOR<0>(rsp.vpu.r[21], rsp.vpu.r[21], rsp.vpu.r[21]);
    // lqv         $v17[0], 0x0($16)
    rsp.LQV<0>(rsp.vpu.r[17], r16, 0X0);
    // vxor        $v18, $v18, $v18
    rsp.VXOR<0>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[18]);
    // mtc2        $26, $v18[14]
    rsp.MTC2<14>(r26, rsp.vpu.r[18]);
    // vmudl       $v23, $v30, $v24[2]
    rsp.VMUDL<10>(rsp.vpu.r[23], rsp.vpu.r[30], rsp.vpu.r[24]);
    // lqv         $v29[0], 0x0($21)
    rsp.LQV<0>(rsp.vpu.r[29], r21, 0X0);
    // vmadn       $v23, $v30, $v24[1]
    rsp.VMADN<9>(rsp.vpu.r[23], rsp.vpu.r[30], rsp.vpu.r[24]);
    // lqv         $v27[0], 0x0($19)
    rsp.LQV<0>(rsp.vpu.r[27], r19, 0X0);
    // vmadh       $v20, $v31, $v20[7]
    rsp.VMADH<15>(rsp.vpu.r[20], rsp.vpu.r[31], rsp.vpu.r[20]);
    // lqv         $v28[0], 0x0($20)
    rsp.LQV<0>(rsp.vpu.r[28], r20, 0X0);
    // vmadn       $v21, $v31, $v0[0]
    rsp.VMADN<8>(rsp.vpu.r[21], rsp.vpu.r[31], rsp.vpu.r[0]);
    // bgez        $23, L_1E54
    if (RSP_SIGNED(r23) >= 0) {
        // vxor        $v19, $v19, $v19
        rsp.VXOR<0>(rsp.vpu.r[19], rsp.vpu.r[19], rsp.vpu.r[19]);
        goto L_1E54;
    }
    // vxor        $v19, $v19, $v19
    rsp.VXOR<0>(rsp.vpu.r[19], rsp.vpu.r[19], rsp.vpu.r[19]);
    // j           L_1E58
    // vge         $v20, $v20, $v24[0]
    rsp.VGE<8>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[24]);
    goto L_1E58;
    // vge         $v20, $v20, $v24[0]
    rsp.VGE<8>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[24]);
L_1E54:
    // vlt         $v20, $v20, $v24[0]
    rsp.VLT<8>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[24]);
L_1E58:
    // vxor        $v17, $v9, $v17
    rsp.VXOR<0>(rsp.vpu.r[17], rsp.vpu.r[9], rsp.vpu.r[17]);
    // vmudl       $v23, $v30, $v24[5]
    rsp.VMUDL<13>(rsp.vpu.r[23], rsp.vpu.r[30], rsp.vpu.r[24]);
    // lqv         $v26[0], 0x0($18)
    rsp.LQV<0>(rsp.vpu.r[26], r18, 0X0);
    // vmadn       $v23, $v30, $v24[4]
    rsp.VMADN<12>(rsp.vpu.r[23], rsp.vpu.r[30], rsp.vpu.r[24]);
    // addi        $17, $17, -0x10
    r17 = RSP_ADD32(r17, -0X10);
    // vmadh       $v18, $v31, $v18[7]
    rsp.VMADH<15>(rsp.vpu.r[18], rsp.vpu.r[31], rsp.vpu.r[18]);
    // addi        $16, $16, 0x10
    r16 = RSP_ADD32(r16, 0X10);
    // vmadn       $v19, $v31, $v0[0]
    rsp.VMADN<8>(rsp.vpu.r[19], rsp.vpu.r[31], rsp.vpu.r[0]);
    // vmulf       $v16, $v20, $v24[6]
    rsp.VMULF<14>(rsp.vpu.r[16], rsp.vpu.r[20], rsp.vpu.r[24]);
    // bgez        $22, L_1E8C
    if (RSP_SIGNED(r22) >= 0) {
        // vmulf       $v15, $v20, $v24[7]
        rsp.VMULF<15>(rsp.vpu.r[15], rsp.vpu.r[20], rsp.vpu.r[24]);
        goto L_1E8C;
    }
    // vmulf       $v15, $v20, $v24[7]
    rsp.VMULF<15>(rsp.vpu.r[15], rsp.vpu.r[20], rsp.vpu.r[24]);
    // j           L_1E90
    // vge         $v18, $v18, $v24[3]
    rsp.VGE<11>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[24]);
    goto L_1E90;
    // vge         $v18, $v18, $v24[3]
    rsp.VGE<11>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[24]);
L_1E8C:
    // vlt         $v18, $v18, $v24[3]
    rsp.VLT<11>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[24]);
L_1E90:
    // vmulf       $v29, $v29, $v10[5]
    rsp.VMULF<13>(rsp.vpu.r[29], rsp.vpu.r[29], rsp.vpu.r[10]);
    // vmacf       $v29, $v17, $v16
    rsp.VMACF<0>(rsp.vpu.r[29], rsp.vpu.r[17], rsp.vpu.r[16]);
    // vmulf       $v27, $v27, $v10[5]
    rsp.VMULF<13>(rsp.vpu.r[27], rsp.vpu.r[27], rsp.vpu.r[10]);
    // vmacf       $v27, $v17, $v15
    rsp.VMACF<0>(rsp.vpu.r[27], rsp.vpu.r[17], rsp.vpu.r[15]);
    // vxor        $v17, $v8, $v17
    rsp.VXOR<0>(rsp.vpu.r[17], rsp.vpu.r[8], rsp.vpu.r[17]);
    // vmulf       $v16, $v18, $v24[6]
    rsp.VMULF<14>(rsp.vpu.r[16], rsp.vpu.r[18], rsp.vpu.r[24]);
    // vmulf       $v15, $v18, $v24[7]
    rsp.VMULF<15>(rsp.vpu.r[15], rsp.vpu.r[18], rsp.vpu.r[24]);
    // sqv         $v29[0], 0x0($21)
    rsp.SQV<0>(rsp.vpu.r[29], r21, 0X0);
    // vmulf       $v28, $v28, $v10[5]
    rsp.VMULF<13>(rsp.vpu.r[28], rsp.vpu.r[28], rsp.vpu.r[10]);
    // addi        $21, $21, 0x10
    r21 = RSP_ADD32(r21, 0X10);
    // vmacf       $v28, $v17, $v16
    rsp.VMACF<0>(rsp.vpu.r[28], rsp.vpu.r[17], rsp.vpu.r[16]);
    // sqv         $v27[0], 0x0($19)
    rsp.SQV<0>(rsp.vpu.r[27], r19, 0X0);
    // vmulf       $v26, $v26, $v10[5]
    rsp.VMULF<13>(rsp.vpu.r[26], rsp.vpu.r[26], rsp.vpu.r[10]);
    // addi        $19, $19, 0x10
    r19 = RSP_ADD32(r19, 0X10);
    // vmacf       $v26, $v17, $v15
    rsp.VMACF<0>(rsp.vpu.r[26], rsp.vpu.r[17], rsp.vpu.r[15]);
    // sqv         $v28[0], 0x0($20)
    rsp.SQV<0>(rsp.vpu.r[28], r20, 0X0);
    // addi        $20, $20, 0x10
    r20 = RSP_ADD32(r20, 0X10);
    // sqv         $v26[0], 0x0($18)
    rsp.SQV<0>(rsp.vpu.r[26], r18, 0X0);
    // addi        $18, $18, 0x10
    r18 = RSP_ADD32(r18, 0X10);
L_1EDC:
    // vaddc       $v21, $v21, $v24[2]
    rsp.VADDC<10>(rsp.vpu.r[21], rsp.vpu.r[21], rsp.vpu.r[24]);
    // vadd        $v20, $v20, $v24[1]
    rsp.VADD<9>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[24]);
L_1EE4:
    // lqv         $v29[0], 0x0($21)
    rsp.LQV<0>(rsp.vpu.r[29], r21, 0X0);
    // vaddc       $v19, $v19, $v24[5]
    rsp.VADDC<13>(rsp.vpu.r[19], rsp.vpu.r[19], rsp.vpu.r[24]);
    // lqv         $v17[0], 0x0($16)
    rsp.LQV<0>(rsp.vpu.r[17], r16, 0X0);
    // bgez        $23, L_1F00
    if (RSP_SIGNED(r23) >= 0) {
        // vadd        $v18, $v18, $v24[4]
        rsp.VADD<12>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[24]);
        goto L_1F00;
    }
    // vadd        $v18, $v18, $v24[4]
    rsp.VADD<12>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[24]);
    // j           L_1F04
    // vge         $v20, $v20, $v24[0]
    rsp.VGE<8>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[24]);
    goto L_1F04;
    // vge         $v20, $v20, $v24[0]
    rsp.VGE<8>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[24]);
L_1F00:
    // vlt         $v20, $v20, $v24[0]
    rsp.VLT<8>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[24]);
L_1F04:
    // vxor        $v17, $v9, $v17
    rsp.VXOR<0>(rsp.vpu.r[17], rsp.vpu.r[9], rsp.vpu.r[17]);
    // bgez        $22, L_1F18
    if (RSP_SIGNED(r22) >= 0) {
        // lqv         $v27[0], 0x0($19)
        rsp.LQV<0>(rsp.vpu.r[27], r19, 0X0);
        goto L_1F18;
    }
    // lqv         $v27[0], 0x0($19)
    rsp.LQV<0>(rsp.vpu.r[27], r19, 0X0);
    // j           L_1F1C
    // vge         $v18, $v18, $v24[3]
    rsp.VGE<11>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[24]);
    goto L_1F1C;
    // vge         $v18, $v18, $v24[3]
    rsp.VGE<11>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[24]);
L_1F18:
    // vlt         $v18, $v18, $v24[3]
    rsp.VLT<11>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[24]);
L_1F1C:
    // vmulf       $v16, $v20, $v24[6]
    rsp.VMULF<14>(rsp.vpu.r[16], rsp.vpu.r[20], rsp.vpu.r[24]);
    // sqv         $v20[0], 0x0($24)
    rsp.SQV<0>(rsp.vpu.r[20], r24, 0X0);
    // vmulf       $v15, $v20, $v24[7]
    rsp.VMULF<15>(rsp.vpu.r[15], rsp.vpu.r[20], rsp.vpu.r[24]);
    // sqv         $v21[0], 0x10($24)
    rsp.SQV<0>(rsp.vpu.r[21], r24, 0X1);
    // vmulf       $v29, $v29, $v10[5]
    rsp.VMULF<13>(rsp.vpu.r[29], rsp.vpu.r[29], rsp.vpu.r[10]);
    // vmacf       $v29, $v17, $v16
    rsp.VMACF<0>(rsp.vpu.r[29], rsp.vpu.r[17], rsp.vpu.r[16]);
    // lqv         $v28[0], 0x0($20)
    rsp.LQV<0>(rsp.vpu.r[28], r20, 0X0);
    // vmulf       $v27, $v27, $v10[5]
    rsp.VMULF<13>(rsp.vpu.r[27], rsp.vpu.r[27], rsp.vpu.r[10]);
    // lqv         $v26[0], 0x0($18)
    rsp.LQV<0>(rsp.vpu.r[26], r18, 0X0);
    // vmacf       $v27, $v17, $v15
    rsp.VMACF<0>(rsp.vpu.r[27], rsp.vpu.r[17], rsp.vpu.r[15]);
    // vxor        $v17, $v8, $v17
    rsp.VXOR<0>(rsp.vpu.r[17], rsp.vpu.r[8], rsp.vpu.r[17]);
    // addi        $17, $17, -0x10
    r17 = RSP_ADD32(r17, -0X10);
    // vaddc       $v21, $v21, $v24[2]
    rsp.VADDC<10>(rsp.vpu.r[21], rsp.vpu.r[21], rsp.vpu.r[24]);
    // addi        $16, $16, 0x10
    r16 = RSP_ADD32(r16, 0X10);
    // vadd        $v20, $v20, $v24[1]
    rsp.VADD<9>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[24]);
    // sqv         $v29[0], 0x0($21)
    rsp.SQV<0>(rsp.vpu.r[29], r21, 0X0);
    // vmulf       $v16, $v18, $v24[6]
    rsp.VMULF<14>(rsp.vpu.r[16], rsp.vpu.r[18], rsp.vpu.r[24]);
    // addi        $21, $21, 0x10
    r21 = RSP_ADD32(r21, 0X10);
    // vmulf       $v15, $v18, $v24[7]
    rsp.VMULF<15>(rsp.vpu.r[15], rsp.vpu.r[18], rsp.vpu.r[24]);
    // sqv         $v27[0], 0x0($19)
    rsp.SQV<0>(rsp.vpu.r[27], r19, 0X0);
    // vmulf       $v28, $v28, $v10[5]
    rsp.VMULF<13>(rsp.vpu.r[28], rsp.vpu.r[28], rsp.vpu.r[10]);
    // addi        $19, $19, 0x10
    r19 = RSP_ADD32(r19, 0X10);
    // vmacf       $v28, $v17, $v16
    rsp.VMACF<0>(rsp.vpu.r[28], rsp.vpu.r[17], rsp.vpu.r[16]);
    // vmulf       $v26, $v26, $v10[5]
    rsp.VMULF<13>(rsp.vpu.r[26], rsp.vpu.r[26], rsp.vpu.r[10]);
    // vmacf       $v26, $v17, $v15
    rsp.VMACF<0>(rsp.vpu.r[26], rsp.vpu.r[17], rsp.vpu.r[15]);
    // sqv         $v28[0], 0x0($20)
    rsp.SQV<0>(rsp.vpu.r[28], r20, 0X0);
    // addi        $20, $20, 0x10
    r20 = RSP_ADD32(r20, 0X10);
    // blez        $17, L_1F98
    if (RSP_SIGNED(r17) <= 0) {
        // sqv         $v26[0], 0x0($18)
        rsp.SQV<0>(rsp.vpu.r[26], r18, 0X0);
        goto L_1F98;
    }
    // sqv         $v26[0], 0x0($18)
    rsp.SQV<0>(rsp.vpu.r[26], r18, 0X0);
    // j           L_1EE4
    // addi        $18, $18, 0x10
    r18 = RSP_ADD32(r18, 0X10);
    goto L_1EE4;
    // addi        $18, $18, 0x10
    r18 = RSP_ADD32(r18, 0X10);
L_1F98:
    // sqv         $v18[0], 0x20($24)
    rsp.SQV<0>(rsp.vpu.r[18], r24, 0X2);
    // sqv         $v19[0], 0x30($24)
    rsp.SQV<0>(rsp.vpu.r[19], r24, 0X3);
    // jal         0x1198
    r31 = 0x1FA8;
    // sqv         $v24[0], 0x40($24)
    rsp.SQV<0>(rsp.vpu.r[24], r24, 0X4);
    goto L_1198;
    // sqv         $v24[0], 0x40($24)
    rsp.SQV<0>(rsp.vpu.r[24], r24, 0X4);
L_1FA8:
    // j           L_110C
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    goto L_110C;
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
L_1FB0:
    // lqv         $v31[0], 0x60($zero)
    rsp.LQV<0>(rsp.vpu.r[31], 0, 0X6);
    // andi        $22, $25, 0xFFFF
    r22 = r25 & 0XFFFF;
    // addi        $22, $22, 0x500
    r22 = RSP_ADD32(r22, 0X500);
    // lqv         $v28[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[28], r22, 0X0);
    // srl         $23, $25, 16
    r23 = S32(U32(r25) >> 16);
    // addi        $23, $23, 0x500
    r23 = RSP_ADD32(r23, 0X500);
    // lqv         $v29[0], 0x0($23)
    rsp.LQV<0>(rsp.vpu.r[29], r23, 0X0);
    // mtc2        $26, $v30[0]
    rsp.MTC2<0>(r26, rsp.vpu.r[30]);
    // addi        $21, $zero, 0x170
    r21 = RSP_ADD32(0, 0X170);
L_1FD4:
    // vmulf       $v27, $v28, $v31[5]
    rsp.VMULF<13>(rsp.vpu.r[27], rsp.vpu.r[28], rsp.vpu.r[31]);
    // addi        $21, $21, -0x10
    r21 = RSP_ADD32(r21, -0X10);
    // addi        $23, $23, 0x10
    r23 = RSP_ADD32(r23, 0X10);
    // addi        $22, $22, 0x10
    r22 = RSP_ADD32(r22, 0X10);
    // vmacf       $v27, $v29, $v30[0]
    rsp.VMACF<8>(rsp.vpu.r[27], rsp.vpu.r[29], rsp.vpu.r[30]);
    // lqv         $v28[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[28], r22, 0X0);
    // lqv         $v29[0], 0x0($23)
    rsp.LQV<0>(rsp.vpu.r[29], r23, 0X0);
    // bgtz        $21, L_1FD4
    if (RSP_SIGNED(r21) > 0) {
        // sqv         $v27[0], 0x7F0($22)
        rsp.SQV<0>(rsp.vpu.r[27], r22, -0X1);
        goto L_1FD4;
    }
    // sqv         $v27[0], 0x7F0($22)
    rsp.SQV<0>(rsp.vpu.r[27], r22, -0X1);
    // j           L_110C
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    goto L_110C;
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    return RspExitReason::ImemOverrun;
do_indirect_jump:
    switch ((jump_target | 0x1000) & 0X1FFF) { 
        case 0x10DC: goto L_10DC;
        case 0x1174: goto L_1174;
        case 0x1124: goto L_1124;
        case 0x1DB4: goto L_1DB4;
        case 0x1958: goto L_1958;
        case 0x11F0: goto L_11F0;
        case 0x126C: goto L_126C;
        case 0x1AD4: goto L_1AD4;
        case 0x122C: goto L_122C;
        case 0x12E4: goto L_12E4;
        case 0x1224: goto L_1224;
        case 0x120C: goto L_120C;
        case 0x1204: goto L_1204;
        case 0x1214: goto L_1214;
        case 0x1294: goto L_1294;
        case 0x16EC: goto L_16EC;
        case 0x12D0: goto L_12D0;
        case 0x12FC: goto L_12FC;
        case 0x16D4: goto L_16D4;
        case 0x1D6C: goto L_1D6C;
        case 0x1FA8: goto L_1FA8;
        case 0x1240: goto L_1240;
        case 0x1AE8: goto L_1AE8;
        case 0x143C: goto L_143C;
        case 0x1D84: goto L_1D84;
        case 0x1B20: goto L_1B20;
        case 0x12A8: goto L_12A8;
        case 0x141C: goto L_141C;
        case 0x1310: goto L_1310;
        case 0x13CC: goto L_13CC;
        case 0x1FB0: goto L_1FB0;
        case 0x1358: goto L_1358;
        case 0x1408: goto L_1408;
    }
    printf("Unhandled jump target 0x%04X in microcode n_aspMain, coming from [%s:%d]\n", jump_target, debug_file, debug_line);
    printf("Register dump: r0  = %08X r1  = %08X r2  = %08X r3  = %08X r4  = %08X r5  = %08X r6  = %08X r7  = %08X\n"
           "               r8  = %08X r9  = %08X r10 = %08X r11 = %08X r12 = %08X r13 = %08X r14 = %08X r15 = %08X\n"
           "               r16 = %08X r17 = %08X r18 = %08X r19 = %08X r20 = %08X r21 = %08X r22 = %08X r23 = %08X\n"
           "               r24 = %08X r25 = %08X r26 = %08X r27 = %08X r28 = %08X r29 = %08X r30 = %08X r31 = %08X\n",
           0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16,
           r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
    return RspExitReason::UnhandledJumpTarget;
do_overlay_swap:
                    ctx->r1 = r1;   ctx->r2 = r2;   ctx->r3 = r3;   ctx->r4 = r4;   ctx->r5 = r5;   ctx->r6 = r6;   ctx->r7 = r7;
    ctx->r8 = r8;   ctx->r9 = r9;   ctx->r10 = r10; ctx->r11 = r11; ctx->r12 = r12; ctx->r13 = r13; ctx->r14 = r14; ctx->r15 = r15;
    ctx->r16 = r16; ctx->r17 = r17; ctx->r18 = r18; ctx->r19 = r19; ctx->r20 = r20; ctx->r21 = r21; ctx->r22 = r22; ctx->r23 = r23;
    ctx->r24 = r24; ctx->r25 = r25; ctx->r26 = r26; ctx->r27 = r27; ctx->r28 = r28; ctx->r29 = r29; ctx->r30 = r30; ctx->r31 = r31;
    ctx->dma_mem_address = dma_mem_address;
    ctx->dma_dram_address = dma_dram_address;
    ctx->jump_target = jump_target;
    ctx->rsp = rsp;
    return RspExitReason::SwapOverlay;
}
RspExitReason n_aspMain0(uint8_t* rdram, RspContext* ctx) {
    uint32_t                 r1 = ctx->r1,   r2 = ctx->r2,   r3 = ctx->r3,   r4 = ctx->r4,   r5 = ctx->r5,   r6 = ctx->r6,   r7 = ctx->r7;
    uint32_t  r8 = ctx->r8,  r9 = ctx->r9,   r10 = ctx->r10, r11 = ctx->r11, r12 = ctx->r12, r13 = ctx->r13, r14 = ctx->r14, r15 = ctx->r15;
    uint32_t r16 = ctx->r16, r17 = ctx->r17, r18 = ctx->r18, r19 = ctx->r19, r20 = ctx->r20, r21 = ctx->r21, r22 = ctx->r22, r23 = ctx->r23;
    uint32_t r24 = ctx->r24, r25 = ctx->r25, r26 = ctx->r26, r27 = ctx->r27, r28 = ctx->r28, r29 = ctx->r29, r30 = ctx->r30, r31 = ctx->r31;
    uint32_t dma_mem_address = ctx->dma_mem_address, dma_dram_address = ctx->dma_dram_address, jump_target = ctx->jump_target;
    const char * debug_file = NULL; int debug_line = 0;
    RSP rsp = ctx->rsp;
    if (ctx->resume_delay) {
        switch (ctx->resume_address) {
            case 0x1194: goto R_1194_delay;
        }
    } else {
        switch (ctx->resume_address) {
            case 0x1194: goto R_1194;
            case 0x1B50: goto R_1B50;
        }
    }
    printf("Unhandled resume target 0x%04X (delay slot: %d) in microcode n_aspMain\n", ctx->resume_address, ctx->resume_delay);
    return RspExitReason::UnhandledResumeTarget;
    r1 = 0xFC0;
    // mfc0        $5, DPC_STATUS
    r5 = 0;
    // lw          $28, 0x30($1)
    r28 = RSP_MEM_W_LOAD(0X30, r1);
    // lw          $27, 0x34($1)
    r27 = RSP_MEM_W_LOAD(0X34, r1);
    // andi        $4, $5, 0x1
    r4 = r5 & 0X1;
    // beq         $4, $zero, L_10AC
    if (r4 == 0) {
        // andi        $4, $5, 0x100
        r4 = r5 & 0X100;
        goto L_10AC;
    }
    // andi        $4, $5, 0x100
    r4 = r5 & 0X100;
    // beq         $4, $zero, L_10AC
    if (r4 == 0) {
        // mfc0        $4, DPC_STATUS
        r4 = 0;
        goto L_10AC;
    }
    // mfc0        $4, DPC_STATUS
    r4 = 0;
L_10A0:
    // andi        $4, $4, 0x100
    r4 = r4 & 0X100;
    // bgtz        $4, L_10A0
    if (RSP_SIGNED(r4) > 0) {
        // mfc0        $4, DPC_STATUS
        r4 = 0;
        goto L_10A0;
    }
    // mfc0        $4, DPC_STATUS
    r4 = 0;
L_10AC:
    // addi        $24, $zero, 0xFA0
    r24 = RSP_ADD32(0, 0XFA0);
    // lw          $5, 0x10($1)
    r5 = RSP_MEM_W_LOAD(0X10, r1);
    // lw          $4, 0x0($zero)
    r4 = RSP_MEM_W_LOAD(0X0, 0);
    // add         $4, $4, $5
    r4 = RSP_ADD32(r4, r5);
    // sw          $4, 0x0($zero)
    RSP_MEM_W_STORE(0X0, 0, r4);
    // lw          $4, 0x8($zero)
    r4 = RSP_MEM_W_LOAD(0X8, 0);
    // add         $4, $4, $5
    r4 = RSP_ADD32(r4, r5);
    // sw          $4, 0x8($zero)
    RSP_MEM_W_STORE(0X8, 0, r4);
    // lw          $5, 0x18($1)
    r5 = RSP_MEM_W_LOAD(0X18, r1);
    // sw          $5, 0xFF8($zero)
    RSP_MEM_W_STORE(0XFF8, 0, r5);
    // jal         0x1150
    r31 = 0x10DC;
    // add         $2, $zero, $28
    r2 = RSP_ADD32(0, r28);
    goto L_1150;
    // add         $2, $zero, $28
    r2 = RSP_ADD32(0, r28);
L_10DC:
    // mfc0        $2, SP_DMA_BUSY
    r2 = 0;
L_10E0:
    // bne         $2, $zero, L_10E0
    if (r2 != 0) {
        // mfc0        $2, SP_DMA_BUSY
        r2 = 0;
        goto L_10E0;
    }
    // mfc0        $2, SP_DMA_BUSY
    r2 = 0;
L_10E8:
    // lw          $26, 0x0($29)
    r26 = RSP_MEM_W_LOAD(0X0, r29);
    // lw          $25, 0x4($29)
    r25 = RSP_MEM_W_LOAD(0X4, r29);
    // addi        $28, $28, 0x8
    r28 = RSP_ADD32(r28, 0X8);
    // srl         $1, $26, 23
    r1 = S32(U32(r26) >> 23);
    // andi        $1, $1, 0xFE
    r1 = r1 & 0XFE;
    // lh          $1, 0x10($1)
    r1 = RSP_MEM_H_LOAD(0X10, r1);
    // jr          $1
    jump_target = r1;
    debug_file = __FILE__; debug_line = __LINE__;
    // addi        $27, $27, -0x8
    r27 = RSP_ADD32(r27, -0X8);
    goto do_indirect_jump;
    // addi        $27, $27, -0x8
    r27 = RSP_ADD32(r27, -0X8);
    // break       0
    return RspExitReason::Broke;
L_110C:
    // bgtz        $30, L_10E8
    if (RSP_SIGNED(r30) > 0) {
        // addi        $29, $29, 0x8
        r29 = RSP_ADD32(r29, 0X8);
        goto L_10E8;
    }
    // addi        $29, $29, 0x8
    r29 = RSP_ADD32(r29, 0X8);
    // blez        $27, L_112C
    if (RSP_SIGNED(r27) <= 0) {
        // ori         $1, $zero, 0x4000
        r1 = 0 | 0X4000;
        goto L_112C;
    }
    // ori         $1, $zero, 0x4000
    r1 = 0 | 0X4000;
    // jal         0x1150
    r31 = 0x1124;
    // add         $2, $zero, $28
    r2 = RSP_ADD32(0, r28);
    goto L_1150;
    // add         $2, $zero, $28
    r2 = RSP_ADD32(0, r28);
L_1124:
    // j           L_10E0
    // mfc0        $2, SP_DMA_BUSY
    r2 = 0;
    goto L_10E0;
    // mfc0        $2, SP_DMA_BUSY
    r2 = 0;
L_112C:
    // mfc0        $2, SP_DMA_BUSY
    r2 = 0;
    // bne         $2, $zero, L_112C
    if (r2 != 0) {
        // nop
    
        goto L_112C;
    }
    // nop

    // mtc0        $zero, SP_SEMAPHORE
    // mtc0        $1, SP_STATUS
    // break       0
    return RspExitReason::Broke;
    // nop

L_1148:
    // b           L_1148
    // nop

    goto L_1148;
    // nop

L_1150:
    // addi        $5, $ra, 0x0
    r5 = RSP_ADD32(r31, 0X0);
    // addi        $3, $27, 0x0
    r3 = RSP_ADD32(r27, 0X0);
    // addi        $4, $3, -0x140
    r4 = RSP_ADD32(r3, -0X140);
    // blez        $4, L_1168
    if (RSP_SIGNED(r4) <= 0) {
        // addi        $1, $zero, 0x2C0
        r1 = RSP_ADD32(0, 0X2C0);
        goto L_1168;
    }
    // addi        $1, $zero, 0x2C0
    r1 = RSP_ADD32(0, 0X2C0);
    // addi        $3, $zero, 0x140
    r3 = RSP_ADD32(0, 0X140);
L_1168:
    // addi        $30, $3, 0x0
    r30 = RSP_ADD32(r3, 0X0);
    // jal         0x117C
    r31 = 0x1174;
    // addi        $3, $3, -0x1
    r3 = RSP_ADD32(r3, -0X1);
    goto L_117C;
    // addi        $3, $3, -0x1
    r3 = RSP_ADD32(r3, -0X1);
L_1174:
    // jr          $5
    jump_target = r5;
    debug_file = __FILE__; debug_line = __LINE__;
    // addi        $29, $zero, 0x2C0
    r29 = RSP_ADD32(0, 0X2C0);
    goto do_indirect_jump;
    // addi        $29, $zero, 0x2C0
    r29 = RSP_ADD32(0, 0X2C0);
L_117C:
    // mfc0        $4, SP_DMA_FULL
    r4 = 0;
L_1180:
    // bne         $4, $zero, L_1180
    if (r4 != 0) {
        // mfc0        $4, SP_DMA_FULL
        r4 = 0;
        goto L_1180;
    }
    // mfc0        $4, SP_DMA_FULL
    r4 = 0;
    // mtc0        $1, SP_MEM_ADDR
    SET_DMA_MEM(r1);
    // mtc0        $2, SP_DRAM_ADDR
    SET_DMA_DRAM(r2);
    // jr          $ra
    jump_target = r31;
    debug_file = __FILE__; debug_line = __LINE__;
    // mtc0        $3, SP_RD_LEN
    if (dma_mem_address & 0x1000) {
        ctx->resume_address = 0x1194;
        ctx->resume_delay = true;
        goto do_overlay_swap;
    }
    DO_DMA_READ(r3);
R_1194_delay:
    goto do_indirect_jump;
    // mtc0        $3, SP_RD_LEN
    if (dma_mem_address & 0x1000) {
        ctx->resume_address = 0x1194;
        ctx->resume_delay = false;
        goto do_overlay_swap;
    }
    DO_DMA_READ(r3);
R_1194:
L_1198:
    // mfc0        $4, SP_DMA_FULL
    r4 = 0;
L_119C:
    // bne         $4, $zero, L_119C
    if (r4 != 0) {
        // mfc0        $4, SP_DMA_FULL
        r4 = 0;
        goto L_119C;
    }
    // mfc0        $4, SP_DMA_FULL
    r4 = 0;
    // mtc0        $1, SP_MEM_ADDR
    SET_DMA_MEM(r1);
    // mtc0        $2, SP_DRAM_ADDR
    SET_DMA_DRAM(r2);
    // jr          $ra
    jump_target = r31;
    debug_file = __FILE__; debug_line = __LINE__;
    // mtc0        $3, SP_WR_LEN
    DO_DMA_WRITE(r3);
    goto do_indirect_jump;
    // mtc0        $3, SP_WR_LEN
    DO_DMA_WRITE(r3);
L_11B4:
    // mfc0        $4, SP_DMA_BUSY
    r4 = 0;
    // bne         $4, $zero, L_11B4
    if (r4 != 0) {
        // nop
    
        goto L_11B4;
    }
    // nop

    // jr          $ra
    jump_target = r31;
    debug_file = __FILE__; debug_line = __LINE__;
    // nop

    goto do_indirect_jump;
    // nop

L_11C8:
    // lh          $3, 0x4($zero)
    r3 = RSP_MEM_H_LOAD(0X4, 0);
    // lw          $2, 0x0($zero)
    r2 = RSP_MEM_W_LOAD(0X0, 0);
    // lh          $1, 0xE($zero)
    r1 = RSP_MEM_H_LOAD(0XE, 0);
    // add         $2, $2, $1
    r2 = RSP_ADD32(r2, r1);
    // sub         $3, $3, $1
    r3 = RSP_SUB32(r3, r1);
    // lh          $1, 0x6($zero)
    r1 = RSP_MEM_H_LOAD(0X6, 0);
    // sub         $2, $2, $1
    r2 = RSP_SUB32(r2, r1);
    // add         $3, $3, $1
    r3 = RSP_ADD32(r3, r1);
    // jal         0x117C
    r31 = 0x11F0;
    // lh          $1, 0xE($zero)
    r1 = RSP_MEM_H_LOAD(0XE, 0);
    goto L_117C;
    // lh          $1, 0xE($zero)
    r1 = RSP_MEM_H_LOAD(0XE, 0);
L_11F0:
    // lw          $2, 0xFF8($zero)
    r2 = RSP_MEM_W_LOAD(0XFF8, 0);
    // addi        $2, $2, 0x10
    r2 = RSP_ADD32(r2, 0X10);
    // addi        $1, $zero, 0x10
    r1 = RSP_ADD32(0, 0X10);
    // jal         0x117C
    r31 = 0x1204;
    // addi        $3, $zero, 0x2AF
    r3 = RSP_ADD32(0, 0X2AF);
    goto L_117C;
    // addi        $3, $zero, 0x2AF
    r3 = RSP_ADD32(0, 0X2AF);
L_1204:
    // jal         0x11B4
    r31 = 0x120C;
    // nop

    goto L_11B4;
    // nop

L_120C:
    // j           L_110C
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    goto L_110C;
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
L_1214:
    // lh          $1, 0xE($zero)
    r1 = RSP_MEM_H_LOAD(0XE, 0);
    // lw          $2, 0x8($zero)
    r2 = RSP_MEM_W_LOAD(0X8, 0);
    // jal         0x117C
    r31 = 0x1224;
    // lh          $3, 0xC($zero)
    r3 = RSP_MEM_H_LOAD(0XC, 0);
    goto L_117C;
    // lh          $3, 0xC($zero)
    r3 = RSP_MEM_H_LOAD(0XC, 0);
L_1224:
    // jal         0x11B4
    r31 = 0x122C;
    // nop

    goto L_11B4;
    // nop

L_122C:
    // j           L_1238
    // nop

    goto L_1238;
    // nop

    // nop

L_1238:
    // lw          $18, 0xFF4($zero)
    r18 = RSP_MEM_W_LOAD(0XFF4, 0);
    // lw          $17, 0xFF8($zero)
    r17 = RSP_MEM_W_LOAD(0XFF8, 0);
L_1240:
    // lw          $16, 0xFFC($zero)
    r16 = RSP_MEM_W_LOAD(0XFFC, 0);
    // lw          $13, 0xFF0($zero)
    r13 = RSP_MEM_W_LOAD(0XFF0, 0);
    // add         $2, $18, $zero
    r2 = RSP_ADD32(r18, 0);
    // addi        $1, $zero, 0x800
    r1 = RSP_ADD32(0, 0X800);
    // jal         0x117C
    r31 = 0x1258;
    // addi        $3, $zero, 0x7FF
    r3 = RSP_ADD32(0, 0X7FF);
    goto L_117C;
    // addi        $3, $zero, 0x7FF
    r3 = RSP_ADD32(0, 0X7FF);
L_1258:
    // add         $2, $18, $zero
    r2 = RSP_ADD32(r18, 0);
    // addi        $1, $zero, 0x2C0
    r1 = RSP_ADD32(0, 0X2C0);
    // jal         0x1198
    r31 = 0x1268;
    // addi        $3, $zero, 0x13F
    r3 = RSP_ADD32(0, 0X13F);
    goto L_1198;
    // addi        $3, $zero, 0x13F
    r3 = RSP_ADD32(0, 0X13F);
L_1268:
    // addi        $2, $17, 0x2C0
    r2 = RSP_ADD32(r17, 0X2C0);
L_126C:
    // addi        $1, $zero, 0x10
    r1 = RSP_ADD32(0, 0X10);
    // jal         0x117C
    r31 = 0x1278;
    // addi        $3, $zero, 0x47F
    r3 = RSP_ADD32(0, 0X47F);
    goto L_117C;
    // addi        $3, $zero, 0x47F
    r3 = RSP_ADD32(0, 0X47F);
L_1278:
    // andi        $22, $26, 0x7FE
    r22 = r26 & 0X7FE;
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // sll         $2, $25, 8
    r2 = S32(r25) << 8;
    // srl         $2, $2, 8
    r2 = S32(U32(r2) >> 8);
    // addi        $1, $zero, 0x490
    r1 = RSP_ADD32(0, 0X490);
    // addi        $3, $zero, 0x240
    r3 = RSP_ADD32(0, 0X240);
    // addi        $21, $zero, 0x480
    r21 = RSP_ADD32(0, 0X480);
L_1294:
    // sub         $21, $21, $3
    r21 = RSP_SUB32(r21, r3);
    // bgtz        $21, L_12A4
    if (RSP_SIGNED(r21) > 0) {
        // add         $23, $zero, $1
        r23 = RSP_ADD32(0, r1);
        goto L_12A4;
    }
    // add         $23, $zero, $1
    r23 = RSP_ADD32(0, r1);
    // add         $3, $21, $3
    r3 = RSP_ADD32(r21, r3);
L_12A4:
    // jal         0x117C
    r31 = 0x12AC;
    // addi        $3, $3, -0x1
    r3 = RSP_ADD32(r3, -0X1);
    goto L_117C;
L_12A8:
    // addi        $3, $3, -0x1
    r3 = RSP_ADD32(r3, -0X1);
L_12AC:
    // addi        $3, $3, 0x1
    r3 = RSP_ADD32(r3, 0X1);
    // add         $19, $zero, $3
    r19 = RSP_ADD32(0, r3);
    // add         $23, $zero, $1
    r23 = RSP_ADD32(0, r1);
    // jal         0x11B4
    r31 = 0x12C0;
    // nop

    goto L_11B4;
    // nop

L_12C0:
    // lsv         $v0[0], 0x0($23)
    rsp.LSV<0>(rsp.vpu.r[0], r23, 0X0);
    // lsv         $v1[0], 0x2($23)
    rsp.LSV<0>(rsp.vpu.r[1], r23, 0X1);
    // lsv         $v2[0], 0x4($23)
    rsp.LSV<0>(rsp.vpu.r[2], r23, 0X2);
    // lsv         $v3[0], 0x6($23)
    rsp.LSV<0>(rsp.vpu.r[3], r23, 0X3);
    // lsv         $v4[0], 0x8($23)
    rsp.LSV<0>(rsp.vpu.r[4], r23, 0X4);
    // lsv         $v5[0], 0xA($23)
    rsp.LSV<0>(rsp.vpu.r[5], r23, 0X5);
    // lsv         $v6[0], 0xC($23)
    rsp.LSV<0>(rsp.vpu.r[6], r23, 0X6);
    // lsv         $v7[0], 0xE($23)
    rsp.LSV<0>(rsp.vpu.r[7], r23, 0X7);
    // lsv         $v8[0], 0x10($23)
    rsp.LSV<0>(rsp.vpu.r[8], r23, 0X8);
L_12E4:
    // lsv         $v9[0], 0x12($23)
    rsp.LSV<0>(rsp.vpu.r[9], r23, 0X9);
    // lsv         $v10[0], 0x14($23)
    rsp.LSV<0>(rsp.vpu.r[10], r23, 0XA);
    // lsv         $v11[0], 0x16($23)
    rsp.LSV<0>(rsp.vpu.r[11], r23, 0XB);
    // lsv         $v12[0], 0x18($23)
    rsp.LSV<0>(rsp.vpu.r[12], r23, 0XC);
    // lsv         $v13[0], 0x1A($23)
    rsp.LSV<0>(rsp.vpu.r[13], r23, 0XD);
    // lsv         $v14[0], 0x1C($23)
    rsp.LSV<0>(rsp.vpu.r[14], r23, 0XE);
    // lsv         $v17[0], 0x22($23)
    rsp.LSV<0>(rsp.vpu.r[17], r23, 0X11);
    // lsv         $v15[0], 0x1E($23)
    rsp.LSV<0>(rsp.vpu.r[15], r23, 0XF);
    // lsv         $v16[0], 0x20($23)
    rsp.LSV<0>(rsp.vpu.r[16], r23, 0X10);
    // vadd        $v14, $v14, $v17
    rsp.VADD<0>(rsp.vpu.r[14], rsp.vpu.r[14], rsp.vpu.r[17]);
    // vadd        $v15, $v15, $v16
    rsp.VADD<0>(rsp.vpu.r[15], rsp.vpu.r[15], rsp.vpu.r[16]);
L_1310:
    // jal         0x18B0
    r31 = 0x1318;
    // nop

    goto L_18B0;
    // nop

L_1318:
    // vadd        $v17, $v15, $v10
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[15], rsp.vpu.r[10]);
    // vsub        $v19, $v19, $v19
    rsp.VSUB<0>(rsp.vpu.r[19], rsp.vpu.r[19], rsp.vpu.r[19]);
    // vadd        $v18, $v17, $v12
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[17], rsp.vpu.r[12]);
    // vsub        $v18, $v19, $v18
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[19], rsp.vpu.r[18]);
    // ssv         $v18[0], 0x78($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X3C);
    // ssv         $v18[0], 0x48($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X24);
    // vadd        $v18, $v17, $v8
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[17], rsp.vpu.r[8]);
    // vsub        $v18, $v19, $v18
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[19], rsp.vpu.r[18]);
    // ssv         $v18[0], 0x68($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X34);
    // ssv         $v18[0], 0x58($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X2C);
    // vadd        $v17, $v0, $v6
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[0], rsp.vpu.r[6]);
    // ssv         $v17[0], 0x14($22)
    rsp.SSV<0>(rsp.vpu.r[17], r22, 0XA);
    // vsub        $v18, $v19, $v17
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[19], rsp.vpu.r[17]);
    // vadd        $v17, $v17, $v4
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[4]);
    // ssv         $v17[0], 0xC($22)
    rsp.SSV<0>(rsp.vpu.r[17], r22, 0X6);
    // vsub        $v17, $v19, $v17
    rsp.VSUB<0>(rsp.vpu.r[17], rsp.vpu.r[19], rsp.vpu.r[17]);
L_1358:
    // ssv         $v18[0], 0x2C($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X16);
    // ssv         $v17[0], 0x34($22)
    rsp.SSV<0>(rsp.vpu.r[17], r22, 0X1A);
    // vadd        $v17, $v1, $v6
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[1], rsp.vpu.r[6]);
    // vadd        $v18, $v17, $v9
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[17], rsp.vpu.r[9]);
    // vadd        $v18, $v18, $v13
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[13]);
    // vsub        $v18, $v19, $v18
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[19], rsp.vpu.r[18]);
    // ssv         $v18[0], 0x64($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X32);
    // ssv         $v18[0], 0x5C($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X2E);
    // vadd        $v18, $v17, $v2
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[17], rsp.vpu.r[2]);
    // vadd        $v18, $v18, $v4
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[4]);
    // vsub        $v18, $v19, $v18
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[19], rsp.vpu.r[18]);
    // ssv         $v18[0], 0x7C($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X3E);
    // ssv         $v18[0], 0x44($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X22);
    // vadd        $v17, $v17, $v11
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[11]);
    // vadd        $v17, $v17, $v0
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[0]);
    // vadd        $v18, $v17, $v4
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[17], rsp.vpu.r[4]);
    // vsub        $v18, $v19, $v18
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[19], rsp.vpu.r[18]);
    // ssv         $v18[0], 0x74($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X3A);
    // ssv         $v18[0], 0x4C($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X26);
    // vadd        $v18, $v17, $v13
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[17], rsp.vpu.r[13]);
    // vsub        $v18, $v19, $v18
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[19], rsp.vpu.r[18]);
    // ssv         $v18[0], 0x6C($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X36);
    // vsub        $v5, $v19, $v5
    rsp.VSUB<0>(rsp.vpu.r[5], rsp.vpu.r[19], rsp.vpu.r[5]);
    // ssv         $v18[0], 0x54($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X2A);
    // vadd        $v17, $v2, $v4
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[2], rsp.vpu.r[4]);
    // vadd        $v17, $v17, $v6
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[6]);
    // ssv         $v17[0], 0x4($22)
    rsp.SSV<0>(rsp.vpu.r[17], r22, 0X2);
    // vsub        $v17, $v19, $v17
    rsp.VSUB<0>(rsp.vpu.r[17], rsp.vpu.r[19], rsp.vpu.r[17]);
    // ssv         $v17[0], 0x3C($22)
    rsp.SSV<0>(rsp.vpu.r[17], r22, 0X1E);
L_13CC:
    // vadd        $v18, $v12, $v10
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[12], rsp.vpu.r[10]);
    // ssv         $v18[0], 0x8($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X4);
    // vsub        $v18, $v19, $v18
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[19], rsp.vpu.r[18]);
    // ssv         $v18[0], 0x38($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X1C);
    // ssv         $v5[0], 0x60($22)
    rsp.SSV<0>(rsp.vpu.r[5], r22, 0X30);
    // ssv         $v14[0], 0x0($22)
    rsp.SSV<0>(rsp.vpu.r[14], r22, 0X0);
    // vsub        $v14, $v19, $v14
    rsp.VSUB<0>(rsp.vpu.r[14], rsp.vpu.r[19], rsp.vpu.r[14]);
    // ssv         $v14[0], 0x40($22)
    rsp.SSV<0>(rsp.vpu.r[14], r22, 0X20);
    // ssv         $v16[0], 0x10($22)
    rsp.SSV<0>(rsp.vpu.r[16], r22, 0X8);
    // vsub        $v17, $v19, $v16
    rsp.VSUB<0>(rsp.vpu.r[17], rsp.vpu.r[19], rsp.vpu.r[16]);
    // ssv         $v10[0], 0x18($22)
    rsp.SSV<0>(rsp.vpu.r[10], r22, 0XC);
    // vsub        $v18, $v19, $v10
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[19], rsp.vpu.r[10]);
    // ssv         $v6[0], 0x1C($22)
    rsp.SSV<0>(rsp.vpu.r[6], r22, 0XE);
    // ssv         $v17[0], 0x30($22)
    rsp.SSV<0>(rsp.vpu.r[17], r22, 0X18);
    // vadd        $v17, $v3, $v16
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[3], rsp.vpu.r[16]);
L_1408:
    // ssv         $v18[0], 0x28($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X14);
    // vsub        $v18, $v19, $v6
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[19], rsp.vpu.r[6]);
    // vsub        $v17, $v19, $v17
    rsp.VSUB<0>(rsp.vpu.r[17], rsp.vpu.r[19], rsp.vpu.r[17]);
    // ssv         $v18[0], 0x24($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X12);
    // ssv         $v17[0], 0x70($22)
    rsp.SSV<0>(rsp.vpu.r[17], r22, 0X38);
L_141C:
    // ssv         $v17[0], 0x50($22)
    rsp.SSV<0>(rsp.vpu.r[17], r22, 0X28);
    // lsv         $v0[0], 0x0($23)
    rsp.LSV<0>(rsp.vpu.r[0], r23, 0X0);
    // lsv         $v1[0], 0x2($23)
    rsp.LSV<0>(rsp.vpu.r[1], r23, 0X1);
    // lsv         $v2[0], 0x4($23)
    rsp.LSV<0>(rsp.vpu.r[2], r23, 0X2);
    // lsv         $v3[0], 0x6($23)
    rsp.LSV<0>(rsp.vpu.r[3], r23, 0X3);
    // lqv         $v31[0], 0x60($zero)
    rsp.LQV<0>(rsp.vpu.r[31], 0, 0X6);
    // lqv         $v30[0], 0x70($zero)
    rsp.LQV<0>(rsp.vpu.r[30], 0, 0X7);
    // lsv         $v4[0], 0x8($23)
    rsp.LSV<0>(rsp.vpu.r[4], r23, 0X4);
L_143C:
    // lqv         $v29[0], 0x80($zero)
    rsp.LQV<0>(rsp.vpu.r[29], 0, 0X8);
    // lsv         $v5[0], 0xA($23)
    rsp.LSV<0>(rsp.vpu.r[5], r23, 0X5);
    // vmulf       $v0, $v0, $v31[1]
    rsp.VMULF<9>(rsp.vpu.r[0], rsp.vpu.r[0], rsp.vpu.r[31]);
    // lsv         $v6[0], 0xC($23)
    rsp.LSV<0>(rsp.vpu.r[6], r23, 0X6);
    // vmulf       $v1, $v1, $v31[2]
    rsp.VMULF<10>(rsp.vpu.r[1], rsp.vpu.r[1], rsp.vpu.r[31]);
    // lsv         $v7[0], 0xE($23)
    rsp.LSV<0>(rsp.vpu.r[7], r23, 0X7);
    // vmulf       $v2, $v2, $v31[3]
    rsp.VMULF<11>(rsp.vpu.r[2], rsp.vpu.r[2], rsp.vpu.r[31]);
    // lsv         $v8[0], 0x10($23)
    rsp.LSV<0>(rsp.vpu.r[8], r23, 0X8);
    // vmulf       $v3, $v3, $v31[4]
    rsp.VMULF<12>(rsp.vpu.r[3], rsp.vpu.r[3], rsp.vpu.r[31]);
    // lsv         $v9[0], 0x12($23)
    rsp.LSV<0>(rsp.vpu.r[9], r23, 0X9);
    // vmulf       $v4, $v4, $v31[5]
    rsp.VMULF<13>(rsp.vpu.r[4], rsp.vpu.r[4], rsp.vpu.r[31]);
    // lsv         $v10[0], 0x14($23)
    rsp.LSV<0>(rsp.vpu.r[10], r23, 0XA);
    // vmulf       $v5, $v5, $v31[6]
    rsp.VMULF<14>(rsp.vpu.r[5], rsp.vpu.r[5], rsp.vpu.r[31]);
    // lsv         $v11[0], 0x16($23)
    rsp.LSV<0>(rsp.vpu.r[11], r23, 0XB);
    // vmulf       $v6, $v6, $v31[7]
    rsp.VMULF<15>(rsp.vpu.r[6], rsp.vpu.r[6], rsp.vpu.r[31]);
    // lsv         $v12[0], 0x18($23)
    rsp.LSV<0>(rsp.vpu.r[12], r23, 0XC);
    // vmulf       $v7, $v7, $v30[0]
    rsp.VMULF<8>(rsp.vpu.r[7], rsp.vpu.r[7], rsp.vpu.r[30]);
    // lsv         $v13[0], 0x1A($23)
    rsp.LSV<0>(rsp.vpu.r[13], r23, 0XD);
    // vmulf       $v8, $v8, $v30[1]
    rsp.VMULF<9>(rsp.vpu.r[8], rsp.vpu.r[8], rsp.vpu.r[30]);
    // lsv         $v14[0], 0x1C($23)
    rsp.LSV<0>(rsp.vpu.r[14], r23, 0XE);
    // vmulf       $v9, $v9, $v30[2]
    rsp.VMULF<10>(rsp.vpu.r[9], rsp.vpu.r[9], rsp.vpu.r[30]);
    // lsv         $v17[0], 0x22($23)
    rsp.LSV<0>(rsp.vpu.r[17], r23, 0X11);
    // lsv         $v15[0], 0x1E($23)
    rsp.LSV<0>(rsp.vpu.r[15], r23, 0XF);
    // vmulf       $v10, $v10, $v30[3]
    rsp.VMULF<11>(rsp.vpu.r[10], rsp.vpu.r[10], rsp.vpu.r[30]);
    // lsv         $v16[0], 0x20($23)
    rsp.LSV<0>(rsp.vpu.r[16], r23, 0X10);
    // vmudm       $v28, $v11, $v30[5]
    rsp.VMUDM<13>(rsp.vpu.r[28], rsp.vpu.r[11], rsp.vpu.r[30]);
    // vmadh       $v11, $v11, $v30[4]
    rsp.VMADH<12>(rsp.vpu.r[11], rsp.vpu.r[11], rsp.vpu.r[30]);
    // vsub        $v14, $v14, $v17
    rsp.VSUB<0>(rsp.vpu.r[14], rsp.vpu.r[14], rsp.vpu.r[17]);
    // vmudm       $v28, $v12, $v30[7]
    rsp.VMUDM<15>(rsp.vpu.r[28], rsp.vpu.r[12], rsp.vpu.r[30]);
    // vmadh       $v12, $v12, $v30[6]
    rsp.VMADH<14>(rsp.vpu.r[12], rsp.vpu.r[12], rsp.vpu.r[30]);
    // vmudm       $v28, $v13, $v29[1]
    rsp.VMUDM<9>(rsp.vpu.r[28], rsp.vpu.r[13], rsp.vpu.r[29]);
    // vmadh       $v13, $v13, $v29[0]
    rsp.VMADH<8>(rsp.vpu.r[13], rsp.vpu.r[13], rsp.vpu.r[29]);
    // vsub        $v15, $v15, $v16
    rsp.VSUB<0>(rsp.vpu.r[15], rsp.vpu.r[15], rsp.vpu.r[16]);
    // vmudm       $v28, $v14, $v29[3]
    rsp.VMUDM<11>(rsp.vpu.r[28], rsp.vpu.r[14], rsp.vpu.r[29]);
    // vmadh       $v14, $v14, $v29[2]
    rsp.VMADH<10>(rsp.vpu.r[14], rsp.vpu.r[14], rsp.vpu.r[29]);
    // vmudm       $v28, $v15, $v29[5]
    rsp.VMUDM<13>(rsp.vpu.r[28], rsp.vpu.r[15], rsp.vpu.r[29]);
    // vmadh       $v15, $v15, $v29[4]
    rsp.VMADH<12>(rsp.vpu.r[15], rsp.vpu.r[15], rsp.vpu.r[29]);
    // jal         0x18B0
    r31 = 0x14D8;
    // nop

    goto L_18B0;
    // nop

L_14D8:
    // vsub        $v20, $v20, $v20
    rsp.VSUB<0>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[20]);
    // vadd        $v17, $v4, $v6
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[4], rsp.vpu.r[6]);
    // vadd        $v18, $v17, $v14
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[17], rsp.vpu.r[14]);
    // vadd        $v18, $v18, $v2
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[2]);
    // ssv         $v18[0], 0x2($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X1);
    // vsub        $v18, $v20, $v18
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[20], rsp.vpu.r[18]);
    // ssv         $v18[0], 0x3E($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X1F);
    // vadd        $v18, $v17, $v12
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[17], rsp.vpu.r[12]);
    // vadd        $v18, $v18, $v10
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[10]);
    // vadd        $v18, $v18, $v0
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[0]);
    // ssv         $v18[0], 0xA($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X5);
    // vsub        $v18, $v20, $v18
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[20], rsp.vpu.r[18]);
    // ssv         $v18[0], 0x36($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X1B);
    // vadd        $v17, $v17, $v2
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[2]);
    // vadd        $v18, $v17, $v14
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[17], rsp.vpu.r[14]);
    // vadd        $v18, $v18, $v1
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[1]);
    // vsub        $v18, $v20, $v18
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[20], rsp.vpu.r[18]);
    // ssv         $v18[0], 0x7E($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X3F);
    // ssv         $v18[0], 0x42($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X21);
    // vadd        $v17, $v17, $v12
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[12]);
    // vadd        $v17, $v17, $v10
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[10]);
    // ssv         $v17[0], 0x6($22)
    rsp.SSV<0>(rsp.vpu.r[17], r22, 0X3);
    // vsub        $v18, $v20, $v17
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[20], rsp.vpu.r[17]);
    // ssv         $v18[0], 0x3A($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X1D);
    // vadd        $v17, $v17, $v15
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[15]);
    // vadd        $v17, $v17, $v1
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[1]);
    // vsub        $v17, $v20, $v17
    rsp.VSUB<0>(rsp.vpu.r[17], rsp.vpu.r[20], rsp.vpu.r[17]);
    // ssv         $v17[0], 0x7A($22)
    rsp.SSV<0>(rsp.vpu.r[17], r22, 0X3D);
    // ssv         $v17[0], 0x46($22)
    rsp.SSV<0>(rsp.vpu.r[17], r22, 0X23);
    // vadd        $v17, $v11, $v0
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[11], rsp.vpu.r[0]);
    // vadd        $v17, $v17, $v13
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[13]);
    // vadd        $v17, $v17, $v4
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[4]);
    // vadd        $v17, $v17, $v1
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[1]);
    // vadd        $v17, $v17, $v6
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[6]);
    // vadd        $v18, $v17, $v3
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[17], rsp.vpu.r[3]);
    // vadd        $v18, $v18, $v16
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[16]);
    // vsub        $v18, $v18, $v13
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[13]);
    // vsub        $v18, $v20, $v18
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[20], rsp.vpu.r[18]);
    // ssv         $v18[0], 0x72($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X39);
    // ssv         $v18[0], 0x4E($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X27);
    // vadd        $v18, $v17, $v15
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[17], rsp.vpu.r[15]);
    // vadd        $v18, $v18, $v10
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[10]);
    // vadd        $v19, $v18, $v8
    rsp.VADD<0>(rsp.vpu.r[19], rsp.vpu.r[18], rsp.vpu.r[8]);
    // vsub        $v19, $v19, $v4
    rsp.VSUB<0>(rsp.vpu.r[19], rsp.vpu.r[19], rsp.vpu.r[4]);
    // vsub        $v19, $v20, $v19
    rsp.VSUB<0>(rsp.vpu.r[19], rsp.vpu.r[20], rsp.vpu.r[19]);
    // ssv         $v19[0], 0x6A($22)
    rsp.SSV<0>(rsp.vpu.r[19], r22, 0X35);
    // ssv         $v19[0], 0x56($22)
    rsp.SSV<0>(rsp.vpu.r[19], r22, 0X2B);
    // vadd        $v19, $v18, $v12
    rsp.VADD<0>(rsp.vpu.r[19], rsp.vpu.r[18], rsp.vpu.r[12]);
    // vsub        $v19, $v19, $v13
    rsp.VSUB<0>(rsp.vpu.r[19], rsp.vpu.r[19], rsp.vpu.r[13]);
    // vsub        $v19, $v20, $v19
    rsp.VSUB<0>(rsp.vpu.r[19], rsp.vpu.r[20], rsp.vpu.r[19]);
    // ssv         $v19[0], 0x76($22)
    rsp.SSV<0>(rsp.vpu.r[19], r22, 0X3B);
    // ssv         $v19[0], 0x4A($22)
    rsp.SSV<0>(rsp.vpu.r[19], r22, 0X25);
    // vadd        $v18, $v17, $v3
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[17], rsp.vpu.r[3]);
    // vadd        $v18, $v18, $v16
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[16]);
    // vsub        $v18, $v18, $v4
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[4]);
    // vsub        $v18, $v20, $v18
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[20], rsp.vpu.r[18]);
    // ssv         $v18[0], 0x6E($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X37);
    // ssv         $v18[0], 0x52($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X29);
    // vadd        $v17, $v9, $v13
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[9], rsp.vpu.r[13]);
    // vadd        $v17, $v17, $v1
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[1]);
    // vadd        $v17, $v17, $v6
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[6]);
    // vadd        $v18, $v17, $v5
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[17], rsp.vpu.r[5]);
    // vsub        $v18, $v20, $v18
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[20], rsp.vpu.r[18]);
    // ssv         $v18[0], 0x62($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X31);
    // ssv         $v18[0], 0x5E($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X2F);
    // vadd        $v18, $v17, $v8
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[17], rsp.vpu.r[8]);
    // llv         $v8[0], 0x24($23)
    rsp.LLV<0>(rsp.vpu.r[8], r23, 0X9);
    // vadd        $v18, $v18, $v15
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[15]);
    // vadd        $v18, $v18, $v10
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[10]);
    // vsub        $v18, $v20, $v18
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[20], rsp.vpu.r[18]);
    // ssv         $v18[0], 0x66($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X33);
    // ssv         $v18[0], 0x5A($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X2D);
    // vadd        $v17, $v0, $v6
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[0], rsp.vpu.r[6]);
    // vadd        $v18, $v17, $v10
    rsp.VADD<0>(rsp.vpu.r[18], rsp.vpu.r[17], rsp.vpu.r[10]);
    // ssv         $v18[0], 0x16($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0XB);
    // vsub        $v18, $v20, $v18
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[20], rsp.vpu.r[18]);
    // ssv         $v18[0], 0x2A($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X15);
    // vadd        $v17, $v17, $v16
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[16]);
    // ssv         $v17[0], 0x12($22)
    rsp.SSV<0>(rsp.vpu.r[17], r22, 0X9);
    // vsub        $v18, $v20, $v17
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[20], rsp.vpu.r[17]);
    // ssv         $v18[0], 0x2E($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X17);
    // vadd        $v17, $v17, $v4
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[17], rsp.vpu.r[4]);
    // ssv         $v17[0], 0xE($22)
    rsp.SSV<0>(rsp.vpu.r[17], r22, 0X7);
    // vsub        $v18, $v20, $v17
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[20], rsp.vpu.r[17]);
    // ssv         $v18[0], 0x32($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X19);
    // vadd        $v17, $v10, $v6
    rsp.VADD<0>(rsp.vpu.r[17], rsp.vpu.r[10], rsp.vpu.r[6]);
    // ssv         $v17[0], 0x1A($22)
    rsp.SSV<0>(rsp.vpu.r[17], r22, 0XD);
    // vsub        $v18, $v20, $v17
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[20], rsp.vpu.r[17]);
    // addi        $19, $19, -0x40
    r19 = RSP_ADD32(r19, -0X40);
    // ssv         $v18[0], 0x26($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X13);
    // ssv         $v6[0], 0x1E($22)
    rsp.SSV<0>(rsp.vpu.r[6], r22, 0XF);
    // vsub        $v18, $v20, $v6
    rsp.VSUB<0>(rsp.vpu.r[18], rsp.vpu.r[20], rsp.vpu.r[6]);
    // addi        $20, $zero, 0x90
    r20 = RSP_ADD32(0, 0X90);
    // ssv         $v18[0], 0x22($22)
    rsp.SSV<0>(rsp.vpu.r[18], r22, 0X11);
    // ssv         $v29[12], 0x20($22)
    rsp.SSV<12>(rsp.vpu.r[29], r22, 0X10);
    // lqv         $v0[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[0], r22, 0X0);
    // vmudm       $v3, $v0, $v8[1]
    rsp.VMUDM<9>(rsp.vpu.r[3], rsp.vpu.r[0], rsp.vpu.r[8]);
    // lqv         $v1[0], 0x10($22)
    rsp.LQV<0>(rsp.vpu.r[1], r22, 0X1);
    // vmadh       $v0, $v0, $v8[0]
    rsp.VMADH<8>(rsp.vpu.r[0], rsp.vpu.r[0], rsp.vpu.r[8]);
    // lqv         $v2[0], 0x20($22)
    rsp.LQV<0>(rsp.vpu.r[2], r22, 0X2);
    // vmudm       $v3, $v1, $v8[1]
    rsp.VMUDM<9>(rsp.vpu.r[3], rsp.vpu.r[1], rsp.vpu.r[8]);
    // sqv         $v0[0], 0x0($22)
    rsp.SQV<0>(rsp.vpu.r[0], r22, 0X0);
    // vmadh       $v1, $v1, $v8[0]
    rsp.VMADH<8>(rsp.vpu.r[1], rsp.vpu.r[1], rsp.vpu.r[8]);
    // lqv         $v0[0], 0x30($22)
    rsp.LQV<0>(rsp.vpu.r[0], r22, 0X3);
    // vmudm       $v3, $v2, $v8[1]
    rsp.VMUDM<9>(rsp.vpu.r[3], rsp.vpu.r[2], rsp.vpu.r[8]);
    // sqv         $v1[0], 0x10($22)
    rsp.SQV<0>(rsp.vpu.r[1], r22, 0X1);
    // vmadh       $v2, $v2, $v8[0]
    rsp.VMADH<8>(rsp.vpu.r[2], rsp.vpu.r[2], rsp.vpu.r[8]);
    // lqv         $v1[0], 0x40($22)
    rsp.LQV<0>(rsp.vpu.r[1], r22, 0X4);
    // vmudm       $v3, $v0, $v8[1]
    rsp.VMUDM<9>(rsp.vpu.r[3], rsp.vpu.r[0], rsp.vpu.r[8]);
    // sqv         $v2[0], 0x20($22)
    rsp.SQV<0>(rsp.vpu.r[2], r22, 0X2);
    // vmadh       $v0, $v0, $v8[0]
    rsp.VMADH<8>(rsp.vpu.r[0], rsp.vpu.r[0], rsp.vpu.r[8]);
    // lqv         $v2[0], 0x50($22)
    rsp.LQV<0>(rsp.vpu.r[2], r22, 0X5);
    // vmudm       $v3, $v1, $v8[1]
    rsp.VMUDM<9>(rsp.vpu.r[3], rsp.vpu.r[1], rsp.vpu.r[8]);
    // sqv         $v0[0], 0x30($22)
    rsp.SQV<0>(rsp.vpu.r[0], r22, 0X3);
    // vmadh       $v1, $v1, $v8[0]
    rsp.VMADH<8>(rsp.vpu.r[1], rsp.vpu.r[1], rsp.vpu.r[8]);
    // lqv         $v0[0], 0x60($22)
    rsp.LQV<0>(rsp.vpu.r[0], r22, 0X6);
    // vmudm       $v3, $v2, $v8[1]
    rsp.VMUDM<9>(rsp.vpu.r[3], rsp.vpu.r[2], rsp.vpu.r[8]);
    // sqv         $v1[0], 0x40($22)
    rsp.SQV<0>(rsp.vpu.r[1], r22, 0X4);
    // vmadh       $v2, $v2, $v8[0]
    rsp.VMADH<8>(rsp.vpu.r[2], rsp.vpu.r[2], rsp.vpu.r[8]);
    // lqv         $v1[0], 0x70($22)
    rsp.LQV<0>(rsp.vpu.r[1], r22, 0X7);
    // vmudm       $v3, $v0, $v8[1]
    rsp.VMUDM<9>(rsp.vpu.r[3], rsp.vpu.r[0], rsp.vpu.r[8]);
    // sqv         $v2[0], 0x50($22)
    rsp.SQV<0>(rsp.vpu.r[2], r22, 0X5);
    // vmadh       $v0, $v0, $v8[0]
    rsp.VMADH<8>(rsp.vpu.r[0], rsp.vpu.r[0], rsp.vpu.r[8]);
    // vmudm       $v3, $v1, $v8[1]
    rsp.VMUDM<9>(rsp.vpu.r[3], rsp.vpu.r[1], rsp.vpu.r[8]);
    // sqv         $v0[0], 0x60($22)
    rsp.SQV<0>(rsp.vpu.r[0], r22, 0X6);
    // vmadh       $v1, $v1, $v8[0]
    rsp.VMADH<8>(rsp.vpu.r[1], rsp.vpu.r[1], rsp.vpu.r[8]);
    // sqv         $v1[0], 0x70($22)
    rsp.SQV<0>(rsp.vpu.r[1], r22, 0X7);
    // lqv         $v0[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[0], r22, 0X0);
    // addi        $15, $zero, 0x4
    r15 = RSP_ADD32(0, 0X4);
    // addi        $22, $22, 0xC0
    r22 = RSP_ADD32(r22, 0XC0);
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // lqv         $v1[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[1], r22, 0X0);
    // addi        $22, $22, 0x40
    r22 = RSP_ADD32(r22, 0X40);
L_16EC:
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // lqv         $v4[0], 0x0($20)
    rsp.LQV<0>(rsp.vpu.r[4], r20, 0X0);
    // lqv         $v5[0], 0x40($20)
    rsp.LQV<0>(rsp.vpu.r[5], r20, 0X4);
L_16F8:
    // vmulf       $v0, $v0, $v4
    rsp.VMULF<0>(rsp.vpu.r[0], rsp.vpu.r[0], rsp.vpu.r[4]);
    // lqv         $v2[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[2], r22, 0X0);
    // addi        $22, $22, 0xC0
    r22 = RSP_ADD32(r22, 0XC0);
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // lqv         $v6[0], 0x80($20)
    rsp.LQV<0>(rsp.vpu.r[6], r20, 0X8);
    // vmacf       $v1, $v1, $v5
    rsp.VMACF<0>(rsp.vpu.r[1], rsp.vpu.r[1], rsp.vpu.r[5]);
    // lqv         $v3[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[3], r22, 0X0);
    // addi        $22, $22, 0x40
    r22 = RSP_ADD32(r22, 0X40);
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // lqv         $v7[0], 0xC0($20)
    rsp.LQV<0>(rsp.vpu.r[7], r20, 0XC);
    // vmacf       $v2, $v2, $v6
    rsp.VMACF<0>(rsp.vpu.r[2], rsp.vpu.r[2], rsp.vpu.r[6]);
    // lqv         $v0[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[0], r22, 0X0);
    // addi        $22, $22, 0xC0
    r22 = RSP_ADD32(r22, 0XC0);
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // lqv         $v4[0], 0x100($20)
    rsp.LQV<0>(rsp.vpu.r[4], r20, 0X10);
    // vmacf       $v3, $v3, $v7
    rsp.VMACF<0>(rsp.vpu.r[3], rsp.vpu.r[3], rsp.vpu.r[7]);
    // lqv         $v1[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[1], r22, 0X0);
    // addi        $22, $22, 0x40
    r22 = RSP_ADD32(r22, 0X40);
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // lqv         $v5[0], 0x140($20)
    rsp.LQV<0>(rsp.vpu.r[5], r20, 0X14);
    // vmacf       $v0, $v0, $v4
    rsp.VMACF<0>(rsp.vpu.r[0], rsp.vpu.r[0], rsp.vpu.r[4]);
    // lqv         $v2[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[2], r22, 0X0);
    // addi        $22, $22, 0xC0
    r22 = RSP_ADD32(r22, 0XC0);
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // lqv         $v6[0], 0x180($20)
    rsp.LQV<0>(rsp.vpu.r[6], r20, 0X18);
    // vmacf       $v1, $v1, $v5
    rsp.VMACF<0>(rsp.vpu.r[1], rsp.vpu.r[1], rsp.vpu.r[5]);
    // lqv         $v3[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[3], r22, 0X0);
    // addi        $22, $22, 0x40
    r22 = RSP_ADD32(r22, 0X40);
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // lqv         $v7[0], 0x1C0($20)
    rsp.LQV<0>(rsp.vpu.r[7], r20, 0X1C);
    // vmacf       $v2, $v2, $v6
    rsp.VMACF<0>(rsp.vpu.r[2], rsp.vpu.r[2], rsp.vpu.r[6]);
    // lqv         $v0[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[0], r22, 0X0);
    // addi        $22, $22, 0xC0
    r22 = RSP_ADD32(r22, 0XC0);
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // lqv         $v4[0], 0x200($20)
    rsp.LQV<0>(rsp.vpu.r[4], r20, 0X20);
    // vmacf       $v3, $v3, $v7
    rsp.VMACF<0>(rsp.vpu.r[3], rsp.vpu.r[3], rsp.vpu.r[7]);
    // lqv         $v1[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[1], r22, 0X0);
    // addi        $22, $22, 0x40
    r22 = RSP_ADD32(r22, 0X40);
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // lqv         $v5[0], 0x240($20)
    rsp.LQV<0>(rsp.vpu.r[5], r20, 0X24);
    // vmacf       $v0, $v0, $v4
    rsp.VMACF<0>(rsp.vpu.r[0], rsp.vpu.r[0], rsp.vpu.r[4]);
    // lqv         $v2[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[2], r22, 0X0);
    // addi        $22, $22, 0xC0
    r22 = RSP_ADD32(r22, 0XC0);
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // lqv         $v6[0], 0x280($20)
    rsp.LQV<0>(rsp.vpu.r[6], r20, 0X28);
    // vmacf       $v1, $v1, $v5
    rsp.VMACF<0>(rsp.vpu.r[1], rsp.vpu.r[1], rsp.vpu.r[5]);
    // lqv         $v3[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[3], r22, 0X0);
    // addi        $22, $22, 0x40
    r22 = RSP_ADD32(r22, 0X40);
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // lqv         $v7[0], 0x2C0($20)
    rsp.LQV<0>(rsp.vpu.r[7], r20, 0X2C);
    // vmacf       $v2, $v2, $v6
    rsp.VMACF<0>(rsp.vpu.r[2], rsp.vpu.r[2], rsp.vpu.r[6]);
    // lqv         $v0[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[0], r22, 0X0);
    // addi        $22, $22, 0xC0
    r22 = RSP_ADD32(r22, 0XC0);
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // lqv         $v4[0], 0x300($20)
    rsp.LQV<0>(rsp.vpu.r[4], r20, 0X30);
    // vmacf       $v3, $v3, $v7
    rsp.VMACF<0>(rsp.vpu.r[3], rsp.vpu.r[3], rsp.vpu.r[7]);
    // lqv         $v1[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[1], r22, 0X0);
    // addi        $22, $22, 0x40
    r22 = RSP_ADD32(r22, 0X40);
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // lqv         $v5[0], 0x340($20)
    rsp.LQV<0>(rsp.vpu.r[5], r20, 0X34);
    // vmacf       $v0, $v0, $v4
    rsp.VMACF<0>(rsp.vpu.r[0], rsp.vpu.r[0], rsp.vpu.r[4]);
    // lqv         $v2[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[2], r22, 0X0);
    // addi        $22, $22, 0xC0
    r22 = RSP_ADD32(r22, 0XC0);
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // lqv         $v6[0], 0x380($20)
    rsp.LQV<0>(rsp.vpu.r[6], r20, 0X38);
    // vmacf       $v1, $v1, $v5
    rsp.VMACF<0>(rsp.vpu.r[1], rsp.vpu.r[1], rsp.vpu.r[5]);
    // lqv         $v3[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[3], r22, 0X0);
    // addi        $22, $22, 0x50
    r22 = RSP_ADD32(r22, 0X50);
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // lqv         $v7[0], 0x3C0($20)
    rsp.LQV<0>(rsp.vpu.r[7], r20, 0X3C);
    // vmacf       $v2, $v2, $v6
    rsp.VMACF<0>(rsp.vpu.r[2], rsp.vpu.r[2], rsp.vpu.r[6]);
    // lqv         $v0[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[0], r22, 0X0);
    // addi        $22, $22, 0xC0
    r22 = RSP_ADD32(r22, 0XC0);
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // lqv         $v4[0], 0x10($20)
    rsp.LQV<0>(rsp.vpu.r[4], r20, 0X1);
    // vmacf       $v3, $v3, $v7
    rsp.VMACF<0>(rsp.vpu.r[3], rsp.vpu.r[3], rsp.vpu.r[7]);
    // lqv         $v1[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[1], r22, 0X0);
    // addi        $22, $22, 0x40
    r22 = RSP_ADD32(r22, 0X40);
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // lqv         $v5[0], 0x50($20)
    rsp.LQV<0>(rsp.vpu.r[5], r20, 0X5);
    // addi        $15, $15, -0x1
    r15 = RSP_ADD32(r15, -0X1);
    // addi        $20, $20, 0x10
    r20 = RSP_ADD32(r20, 0X10);
    // sqv         $v3[0], 0x0($23)
    rsp.SQV<0>(rsp.vpu.r[3], r23, 0X0);
    // bgtz        $15, L_16F8
    if (RSP_SIGNED(r15) > 0) {
        // addi        $23, $23, 0x10
        r23 = RSP_ADD32(r23, 0X10);
        goto L_16F8;
    }
    // addi        $23, $23, 0x10
    r23 = RSP_ADD32(r23, 0X10);
    // addi        $22, $22, -0x1C0
    r22 = RSP_ADD32(r22, -0X1C0);
    // bgtz        $19, L_12C0
    if (RSP_SIGNED(r19) > 0) {
        // ori         $22, $22, 0x800
        r22 = r22 | 0X800;
        goto L_12C0;
    }
    // ori         $22, $22, 0x800
    r22 = r22 | 0X800;
    // jal         0x1198
    r31 = 0x1860;
    // addi        $3, $3, -0x1
    r3 = RSP_ADD32(r3, -0X1);
    goto L_1198;
    // addi        $3, $3, -0x1
    r3 = RSP_ADD32(r3, -0X1);
L_1860:
    // addi        $3, $3, 0x1
    r3 = RSP_ADD32(r3, 0X1);
    // jal         0x11B4
    r31 = 0x186C;
    // nop

    goto L_11B4;
    // nop

L_186C:
    // bgtz        $21, L_1294
    if (RSP_SIGNED(r21) > 0) {
        // add         $2, $2, $3
        r2 = RSP_ADD32(r2, r3);
        goto L_1294;
    }
    // add         $2, $2, $3
    r2 = RSP_ADD32(r2, r3);
    // add         $2, $18, $zero
    r2 = RSP_ADD32(r18, 0);
    // addi        $1, $zero, 0x2C0
    r1 = RSP_ADD32(0, 0X2C0);
    // jal         0x117C
    r31 = 0x1884;
    // addi        $3, $zero, 0x13F
    r3 = RSP_ADD32(0, 0X13F);
    goto L_117C;
    // addi        $3, $zero, 0x13F
    r3 = RSP_ADD32(0, 0X13F);
L_1884:
    // addi        $1, $zero, 0x800
    r1 = RSP_ADD32(0, 0X800);
    // jal         0x1198
    r31 = 0x1890;
    // addi        $3, $zero, 0x7FF
    r3 = RSP_ADD32(0, 0X7FF);
    goto L_1198;
    // addi        $3, $zero, 0x7FF
    r3 = RSP_ADD32(0, 0X7FF);
L_1890:
    // jal         0x11B4
    r31 = 0x1898;
    // nop

    goto L_11B4;
    // nop

L_1898:
    // sw          $18, 0xFF4($zero)
    RSP_MEM_W_STORE(0XFF4, 0, r18);
    // sw          $17, 0xFF8($zero)
    RSP_MEM_W_STORE(0XFF8, 0, r17);
    // sw          $16, 0xFFC($zero)
    RSP_MEM_W_STORE(0XFFC, 0, r16);
    // sw          $13, 0xFF0($zero)
    RSP_MEM_W_STORE(0XFF0, 0, r13);
    // j           L_11C8
    // nop

    goto L_11C8;
    // nop

L_18B0:
    // vadd        $v16, $v0, $v15
    rsp.VADD<0>(rsp.vpu.r[16], rsp.vpu.r[0], rsp.vpu.r[15]);
    // lqv         $v28[0], 0x10($zero)
    rsp.LQV<0>(rsp.vpu.r[28], 0, 0X1);
    // vsub        $v0, $v0, $v15
    rsp.VSUB<0>(rsp.vpu.r[0], rsp.vpu.r[0], rsp.vpu.r[15]);
    // vadd        $v15, $v1, $v14
    rsp.VADD<0>(rsp.vpu.r[15], rsp.vpu.r[1], rsp.vpu.r[14]);
    // lqv         $v27[0], 0x20($zero)
    rsp.LQV<0>(rsp.vpu.r[27], 0, 0X2);
    // vsub        $v1, $v1, $v14
    rsp.VSUB<0>(rsp.vpu.r[1], rsp.vpu.r[1], rsp.vpu.r[14]);
    // vadd        $v14, $v2, $v13
    rsp.VADD<0>(rsp.vpu.r[14], rsp.vpu.r[2], rsp.vpu.r[13]);
    // lqv         $v26[0], 0x30($zero)
    rsp.LQV<0>(rsp.vpu.r[26], 0, 0X3);
    // vsub        $v2, $v2, $v13
    rsp.VSUB<0>(rsp.vpu.r[2], rsp.vpu.r[2], rsp.vpu.r[13]);
    // vadd        $v13, $v3, $v12
    rsp.VADD<0>(rsp.vpu.r[13], rsp.vpu.r[3], rsp.vpu.r[12]);
    // lqv         $v25[0], 0x40($zero)
    rsp.LQV<0>(rsp.vpu.r[25], 0, 0X4);
    // vsub        $v3, $v3, $v12
    rsp.VSUB<0>(rsp.vpu.r[3], rsp.vpu.r[3], rsp.vpu.r[12]);
    // vadd        $v12, $v4, $v11
    rsp.VADD<0>(rsp.vpu.r[12], rsp.vpu.r[4], rsp.vpu.r[11]);
    // lqv         $v24[0], 0x50($zero)
    rsp.LQV<0>(rsp.vpu.r[24], 0, 0X5);
    // vsub        $v4, $v4, $v11
    rsp.VSUB<0>(rsp.vpu.r[4], rsp.vpu.r[4], rsp.vpu.r[11]);
    // vadd        $v11, $v5, $v10
    rsp.VADD<0>(rsp.vpu.r[11], rsp.vpu.r[5], rsp.vpu.r[10]);
    // lqv         $v31[0], 0x60($zero)
    rsp.LQV<0>(rsp.vpu.r[31], 0, 0X6);
    // vsub        $v5, $v5, $v10
    rsp.VSUB<0>(rsp.vpu.r[5], rsp.vpu.r[5], rsp.vpu.r[10]);
    // vadd        $v10, $v6, $v9
    rsp.VADD<0>(rsp.vpu.r[10], rsp.vpu.r[6], rsp.vpu.r[9]);
    // vsub        $v6, $v6, $v9
    rsp.VSUB<0>(rsp.vpu.r[6], rsp.vpu.r[6], rsp.vpu.r[9]);
    // vadd        $v9, $v7, $v8
    rsp.VADD<0>(rsp.vpu.r[9], rsp.vpu.r[7], rsp.vpu.r[8]);
    // vsub        $v7, $v7, $v8
    rsp.VSUB<0>(rsp.vpu.r[7], rsp.vpu.r[7], rsp.vpu.r[8]);
    // vadd        $v8, $v16, $v9
    rsp.VADD<0>(rsp.vpu.r[8], rsp.vpu.r[16], rsp.vpu.r[9]);
    // vmulf       $v23, $v16, $v28[1]
    rsp.VMULF<9>(rsp.vpu.r[23], rsp.vpu.r[16], rsp.vpu.r[28]);
    // vmacf       $v9, $v9, $v28[2]
    rsp.VMACF<10>(rsp.vpu.r[9], rsp.vpu.r[9], rsp.vpu.r[28]);
    // vadd        $v16, $v15, $v10
    rsp.VADD<0>(rsp.vpu.r[16], rsp.vpu.r[15], rsp.vpu.r[10]);
    // vmulf       $v23, $v15, $v28[3]
    rsp.VMULF<11>(rsp.vpu.r[23], rsp.vpu.r[15], rsp.vpu.r[28]);
    // vmacf       $v10, $v10, $v28[4]
    rsp.VMACF<12>(rsp.vpu.r[10], rsp.vpu.r[10], rsp.vpu.r[28]);
    // vadd        $v15, $v14, $v11
    rsp.VADD<0>(rsp.vpu.r[15], rsp.vpu.r[14], rsp.vpu.r[11]);
    // vmulf       $v23, $v14, $v28[5]
    rsp.VMULF<13>(rsp.vpu.r[23], rsp.vpu.r[14], rsp.vpu.r[28]);
    // vmacf       $v11, $v11, $v28[6]
    rsp.VMACF<14>(rsp.vpu.r[11], rsp.vpu.r[11], rsp.vpu.r[28]);
    // vadd        $v14, $v13, $v12
    rsp.VADD<0>(rsp.vpu.r[14], rsp.vpu.r[13], rsp.vpu.r[12]);
    // vmudm       $v23, $v13, $v27[0]
    rsp.VMUDM<8>(rsp.vpu.r[23], rsp.vpu.r[13], rsp.vpu.r[27]);
    // vmadh       $v23, $v13, $v28[7]
    rsp.VMADH<15>(rsp.vpu.r[23], rsp.vpu.r[13], rsp.vpu.r[28]);
    // vmadm       $v23, $v12, $v27[2]
    rsp.VMADM<10>(rsp.vpu.r[23], rsp.vpu.r[12], rsp.vpu.r[27]);
    // vmadh       $v12, $v12, $v27[1]
    rsp.VMADH<9>(rsp.vpu.r[12], rsp.vpu.r[12], rsp.vpu.r[27]);
    // vmulf       $v23, $v0, $v27[3]
    rsp.VMULF<11>(rsp.vpu.r[23], rsp.vpu.r[0], rsp.vpu.r[27]);
    // vmadm       $v23, $v7, $v27[5]
    rsp.VMADM<13>(rsp.vpu.r[23], rsp.vpu.r[7], rsp.vpu.r[27]);
    // vmadh       $v13, $v7, $v27[4]
    rsp.VMADH<12>(rsp.vpu.r[13], rsp.vpu.r[7], rsp.vpu.r[27]);
    // vmulf       $v23, $v0, $v27[6]
    rsp.VMULF<14>(rsp.vpu.r[23], rsp.vpu.r[0], rsp.vpu.r[27]);
    // vmadm       $v23, $v7, $v26[0]
    rsp.VMADM<8>(rsp.vpu.r[23], rsp.vpu.r[7], rsp.vpu.r[26]);
    // vmadh       $v7, $v7, $v27[7]
    rsp.VMADH<15>(rsp.vpu.r[7], rsp.vpu.r[7], rsp.vpu.r[27]);
    // vmulf       $v23, $v1, $v26[1]
    rsp.VMULF<9>(rsp.vpu.r[23], rsp.vpu.r[1], rsp.vpu.r[26]);
    // vmadm       $v23, $v6, $v26[3]
    rsp.VMADM<11>(rsp.vpu.r[23], rsp.vpu.r[6], rsp.vpu.r[26]);
    // vmadh       $v0, $v6, $v26[2]
    rsp.VMADH<10>(rsp.vpu.r[0], rsp.vpu.r[6], rsp.vpu.r[26]);
    // vmulf       $v23, $v1, $v26[4]
    rsp.VMULF<12>(rsp.vpu.r[23], rsp.vpu.r[1], rsp.vpu.r[26]);
    // vmadm       $v23, $v6, $v26[6]
    rsp.VMADM<14>(rsp.vpu.r[23], rsp.vpu.r[6], rsp.vpu.r[26]);
    // vmadh       $v6, $v6, $v26[5]
    rsp.VMADH<13>(rsp.vpu.r[6], rsp.vpu.r[6], rsp.vpu.r[26]);
    // vmulf       $v23, $v2, $v26[7]
    rsp.VMULF<15>(rsp.vpu.r[23], rsp.vpu.r[2], rsp.vpu.r[26]);
    // vmadm       $v23, $v5, $v25[1]
    rsp.VMADM<9>(rsp.vpu.r[23], rsp.vpu.r[5], rsp.vpu.r[25]);
    // vmadh       $v1, $v5, $v25[0]
    rsp.VMADH<8>(rsp.vpu.r[1], rsp.vpu.r[5], rsp.vpu.r[25]);
    // vmulf       $v23, $v2, $v25[2]
    rsp.VMULF<10>(rsp.vpu.r[23], rsp.vpu.r[2], rsp.vpu.r[25]);
    // vmacf       $v5, $v5, $v25[3]
    rsp.VMACF<11>(rsp.vpu.r[5], rsp.vpu.r[5], rsp.vpu.r[25]);
    // vmulf       $v23, $v3, $v25[4]
    rsp.VMULF<12>(rsp.vpu.r[23], rsp.vpu.r[3], rsp.vpu.r[25]);
    // vmacf       $v2, $v4, $v25[5]
    rsp.VMACF<13>(rsp.vpu.r[2], rsp.vpu.r[4], rsp.vpu.r[25]);
    // vmudm       $v23, $v3, $v25[7]
    rsp.VMUDM<15>(rsp.vpu.r[23], rsp.vpu.r[3], rsp.vpu.r[25]);
    // vmadh       $v23, $v3, $v25[6]
    rsp.VMADH<14>(rsp.vpu.r[23], rsp.vpu.r[3], rsp.vpu.r[25]);
    // vmadm       $v23, $v4, $v24[1]
    rsp.VMADM<9>(rsp.vpu.r[23], rsp.vpu.r[4], rsp.vpu.r[24]);
    // vmadh       $v4, $v4, $v24[0]
    rsp.VMADH<8>(rsp.vpu.r[4], rsp.vpu.r[4], rsp.vpu.r[24]);
    // vadd        $v3, $v8, $v14
    rsp.VADD<0>(rsp.vpu.r[3], rsp.vpu.r[8], rsp.vpu.r[14]);
    // vsub        $v8, $v8, $v14
    rsp.VSUB<0>(rsp.vpu.r[8], rsp.vpu.r[8], rsp.vpu.r[14]);
    // vadd        $v14, $v16, $v15
    rsp.VADD<0>(rsp.vpu.r[14], rsp.vpu.r[16], rsp.vpu.r[15]);
    // vsub        $v16, $v16, $v15
    rsp.VSUB<0>(rsp.vpu.r[16], rsp.vpu.r[16], rsp.vpu.r[15]);
    // vadd        $v15, $v9, $v12
    rsp.VADD<0>(rsp.vpu.r[15], rsp.vpu.r[9], rsp.vpu.r[12]);
    // vsub        $v9, $v9, $v12
    rsp.VSUB<0>(rsp.vpu.r[9], rsp.vpu.r[9], rsp.vpu.r[12]);
    // vadd        $v12, $v10, $v11
    rsp.VADD<0>(rsp.vpu.r[12], rsp.vpu.r[10], rsp.vpu.r[11]);
    // vsub        $v10, $v10, $v11
    rsp.VSUB<0>(rsp.vpu.r[10], rsp.vpu.r[10], rsp.vpu.r[11]);
    // vadd        $v11, $v13, $v2
    rsp.VADD<0>(rsp.vpu.r[11], rsp.vpu.r[13], rsp.vpu.r[2]);
    // vsub        $v13, $v13, $v2
    rsp.VSUB<0>(rsp.vpu.r[13], rsp.vpu.r[13], rsp.vpu.r[2]);
    // vadd        $v2, $v0, $v1
    rsp.VADD<0>(rsp.vpu.r[2], rsp.vpu.r[0], rsp.vpu.r[1]);
    // vsub        $v0, $v0, $v1
    rsp.VSUB<0>(rsp.vpu.r[0], rsp.vpu.r[0], rsp.vpu.r[1]);
    // vadd        $v1, $v7, $v4
    rsp.VADD<0>(rsp.vpu.r[1], rsp.vpu.r[7], rsp.vpu.r[4]);
    // vsub        $v7, $v7, $v4
    rsp.VSUB<0>(rsp.vpu.r[7], rsp.vpu.r[7], rsp.vpu.r[4]);
    // vadd        $v4, $v6, $v5
    rsp.VADD<0>(rsp.vpu.r[4], rsp.vpu.r[6], rsp.vpu.r[5]);
    // vsub        $v6, $v6, $v5
    rsp.VSUB<0>(rsp.vpu.r[6], rsp.vpu.r[6], rsp.vpu.r[5]);
    // vadd        $v5, $v3, $v14
    rsp.VADD<0>(rsp.vpu.r[5], rsp.vpu.r[3], rsp.vpu.r[14]);
    // vmulf       $v23, $v3, $v24[2]
    rsp.VMULF<10>(rsp.vpu.r[23], rsp.vpu.r[3], rsp.vpu.r[24]);
    // vmacf       $v14, $v14, $v24[3]
    rsp.VMACF<11>(rsp.vpu.r[14], rsp.vpu.r[14], rsp.vpu.r[24]);
    // vmulf       $v23, $v8, $v24[4]
    rsp.VMULF<12>(rsp.vpu.r[23], rsp.vpu.r[8], rsp.vpu.r[24]);
    // vmadm       $v23, $v16, $v24[6]
    rsp.VMADM<14>(rsp.vpu.r[23], rsp.vpu.r[16], rsp.vpu.r[24]);
    // vmadh       $v3, $v16, $v24[5]
    rsp.VMADH<13>(rsp.vpu.r[3], rsp.vpu.r[16], rsp.vpu.r[24]);
    // vmulf       $v23, $v8, $v24[7]
    rsp.VMULF<15>(rsp.vpu.r[23], rsp.vpu.r[8], rsp.vpu.r[24]);
    // vmacf       $v16, $v16, $v31[0]
    rsp.VMACF<8>(rsp.vpu.r[16], rsp.vpu.r[16], rsp.vpu.r[31]);
    // vadd        $v8, $v15, $v12
    rsp.VADD<0>(rsp.vpu.r[8], rsp.vpu.r[15], rsp.vpu.r[12]);
    // vmulf       $v23, $v15, $v24[2]
    rsp.VMULF<10>(rsp.vpu.r[23], rsp.vpu.r[15], rsp.vpu.r[24]);
    // vmacf       $v12, $v12, $v24[3]
    rsp.VMACF<11>(rsp.vpu.r[12], rsp.vpu.r[12], rsp.vpu.r[24]);
    // vmulf       $v23, $v9, $v24[4]
    rsp.VMULF<12>(rsp.vpu.r[23], rsp.vpu.r[9], rsp.vpu.r[24]);
    // vmadm       $v23, $v10, $v24[6]
    rsp.VMADM<14>(rsp.vpu.r[23], rsp.vpu.r[10], rsp.vpu.r[24]);
    // vmadh       $v15, $v10, $v24[5]
    rsp.VMADH<13>(rsp.vpu.r[15], rsp.vpu.r[10], rsp.vpu.r[24]);
    // vmulf       $v23, $v9, $v24[7]
    rsp.VMULF<15>(rsp.vpu.r[23], rsp.vpu.r[9], rsp.vpu.r[24]);
    // vmacf       $v10, $v10, $v31[0]
    rsp.VMACF<8>(rsp.vpu.r[10], rsp.vpu.r[10], rsp.vpu.r[31]);
    // vadd        $v9, $v11, $v2
    rsp.VADD<0>(rsp.vpu.r[9], rsp.vpu.r[11], rsp.vpu.r[2]);
    // vmulf       $v23, $v11, $v24[2]
    rsp.VMULF<10>(rsp.vpu.r[23], rsp.vpu.r[11], rsp.vpu.r[24]);
    // vmacf       $v2, $v2, $v24[3]
    rsp.VMACF<11>(rsp.vpu.r[2], rsp.vpu.r[2], rsp.vpu.r[24]);
    // vmulf       $v23, $v13, $v24[4]
    rsp.VMULF<12>(rsp.vpu.r[23], rsp.vpu.r[13], rsp.vpu.r[24]);
    // vmadm       $v23, $v0, $v24[6]
    rsp.VMADM<14>(rsp.vpu.r[23], rsp.vpu.r[0], rsp.vpu.r[24]);
    // vmadh       $v11, $v0, $v24[5]
    rsp.VMADH<13>(rsp.vpu.r[11], rsp.vpu.r[0], rsp.vpu.r[24]);
    // vmulf       $v23, $v13, $v24[7]
    rsp.VMULF<15>(rsp.vpu.r[23], rsp.vpu.r[13], rsp.vpu.r[24]);
    // vmacf       $v0, $v0, $v31[0]
    rsp.VMACF<8>(rsp.vpu.r[0], rsp.vpu.r[0], rsp.vpu.r[31]);
    // vadd        $v13, $v1, $v4
    rsp.VADD<0>(rsp.vpu.r[13], rsp.vpu.r[1], rsp.vpu.r[4]);
    // vmulf       $v23, $v1, $v24[2]
    rsp.VMULF<10>(rsp.vpu.r[23], rsp.vpu.r[1], rsp.vpu.r[24]);
    // vmacf       $v4, $v4, $v24[3]
    rsp.VMACF<11>(rsp.vpu.r[4], rsp.vpu.r[4], rsp.vpu.r[24]);
    // vmulf       $v23, $v7, $v24[4]
    rsp.VMULF<12>(rsp.vpu.r[23], rsp.vpu.r[7], rsp.vpu.r[24]);
    // vmadm       $v23, $v6, $v24[6]
    rsp.VMADM<14>(rsp.vpu.r[23], rsp.vpu.r[6], rsp.vpu.r[24]);
    // vmadh       $v1, $v6, $v24[5]
    rsp.VMADH<13>(rsp.vpu.r[1], rsp.vpu.r[6], rsp.vpu.r[24]);
    // vmulf       $v23, $v7, $v24[7]
    rsp.VMULF<15>(rsp.vpu.r[23], rsp.vpu.r[7], rsp.vpu.r[24]);
    // vmacf       $v6, $v6, $v31[0]
    rsp.VMACF<8>(rsp.vpu.r[6], rsp.vpu.r[6], rsp.vpu.r[31]);
    // jr          $ra
    jump_target = r31;
    debug_file = __FILE__; debug_line = __LINE__;
    // nop

    goto do_indirect_jump;
    // nop

    // nop

    // nop

    // nop

    // nop

    // nop

    // nop

    // nop

L_1A80:
    // vmudh       $v20, $v28, $v30[7]
    rsp.VMUDH<15>(rsp.vpu.r[20], rsp.vpu.r[28], rsp.vpu.r[30]);
    // vmadh       $v20, $v27, $v31[0]
    rsp.VMADH<8>(rsp.vpu.r[20], rsp.vpu.r[27], rsp.vpu.r[31]);
    // addi        $22, $22, -0x10
    r22 = RSP_ADD32(r22, -0X10);
    // vmadh       $v20, $v26, $v31[1]
    rsp.VMADH<9>(rsp.vpu.r[20], rsp.vpu.r[26], rsp.vpu.r[31]);
    // vmadh       $v20, $v25, $v31[2]
    rsp.VMADH<10>(rsp.vpu.r[20], rsp.vpu.r[25], rsp.vpu.r[31]);
    // sqv         $v30[0], 0x7F0($23)
    rsp.SQV<0>(rsp.vpu.r[30], r23, -0X1);
    // vmadh       $v20, $v24, $v31[3]
    rsp.VMADH<11>(rsp.vpu.r[20], rsp.vpu.r[24], rsp.vpu.r[31]);
    // vmadh       $v30, $v23, $v31[4]
    rsp.VMADH<12>(rsp.vpu.r[30], rsp.vpu.r[23], rsp.vpu.r[31]);
    // vmadh       $v20, $v22, $v31[5]
    rsp.VMADH<13>(rsp.vpu.r[20], rsp.vpu.r[22], rsp.vpu.r[31]);
    // vmadh       $v20, $v21, $v31[6]
    rsp.VMADH<14>(rsp.vpu.r[20], rsp.vpu.r[21], rsp.vpu.r[31]);
    // vmadh       $v20, $v31, $v18[5]
    rsp.VMADH<13>(rsp.vpu.r[20], rsp.vpu.r[31], rsp.vpu.r[18]);
    // lqv         $v31[0], 0x10($23)
    rsp.LQV<0>(rsp.vpu.r[31], r23, 0X1);
    // vsar        $v29, $v19, $v30[1]
    rsp.VSAR<9>(rsp.vpu.r[29], rsp.vpu.r[19]);
    // vsar        $v30, $v19, $v30[0]
    rsp.VSAR<8>(rsp.vpu.r[30], rsp.vpu.r[19]);
    // vmudn       $v20, $v29, $v18[0]
    rsp.VMUDN<8>(rsp.vpu.r[20], rsp.vpu.r[29], rsp.vpu.r[18]);
    // vmadh       $v30, $v30, $v18[0]
    rsp.VMADH<8>(rsp.vpu.r[30], rsp.vpu.r[30], rsp.vpu.r[18]);
    // bgtz        $22, L_1A80
    if (RSP_SIGNED(r22) > 0) {
        // addi        $23, $23, 0x10
        r23 = RSP_ADD32(r23, 0X10);
        goto L_1A80;
    }
    // addi        $23, $23, 0x10
    r23 = RSP_ADD32(r23, 0X10);
    // addi        $1, $23, -0x8
    r1 = RSP_ADD32(r23, -0X8);
    // jal         0x1198
    r31 = 0x1AD4;
    // sqv         $v30[0], 0x7F0($23)
    rsp.SQV<0>(rsp.vpu.r[30], r23, -0X1);
    goto L_1198;
    // sqv         $v30[0], 0x7F0($23)
    rsp.SQV<0>(rsp.vpu.r[30], r23, -0X1);
L_1AD4:
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
L_1AD8:
    // bne         $5, $zero, L_1AD8
    if (r5 != 0) {
        // mfc0        $5, SP_DMA_BUSY
        r5 = 0;
        goto L_1AD8;
    }
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
    // j           L_110C
    // nop

    goto L_110C;
    // nop

L_1AE8:
    // addi        $2, $zero, 0x170
    r2 = RSP_ADD32(0, 0X170);
    // addi        $1, $26, 0x500
    r1 = RSP_ADD32(r26, 0X500);
    // mtc2        $25, $v1[0]
    rsp.MTC2<0>(r25, rsp.vpu.r[1]);
    // srl         $3, $25, 16
    r3 = S32(U32(r25) >> 16);
    // mtc2        $3, $v1[2]
    rsp.MTC2<2>(r3, rsp.vpu.r[1]);
L_1AFC:
    // lqv         $v2[0], 0x0($1)
    rsp.LQV<0>(rsp.vpu.r[2], r1, 0X0);
    // addi        $2, $2, -0x10
    r2 = RSP_ADD32(r2, -0X10);
    // addi        $1, $1, 0x10
    r1 = RSP_ADD32(r1, 0X10);
    // vmudh       $v3, $v2, $v1[0]
    rsp.VMUDH<8>(rsp.vpu.r[3], rsp.vpu.r[2], rsp.vpu.r[1]);
    // vmudm       $v3, $v3, $v1[1]
    rsp.VMUDM<9>(rsp.vpu.r[3], rsp.vpu.r[3], rsp.vpu.r[1]);
    // bgtz        $2, L_1AFC
    if (RSP_SIGNED(r2) > 0) {
        // sqv         $v3[0], 0x7F0($1)
        rsp.SQV<0>(rsp.vpu.r[3], r1, -0X1);
        goto L_1AFC;
    }
    // sqv         $v3[0], 0x7F0($1)
    rsp.SQV<0>(rsp.vpu.r[3], r1, -0X1);
    // j           L_110C
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    goto L_110C;
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
L_1B20:
    // sll         $2, $26, 8
    r2 = S32(r26) << 8;
    // vxor        $v23, $v23, $v23
    rsp.VXOR<0>(rsp.vpu.r[23], rsp.vpu.r[23], rsp.vpu.r[23]);
    // srl         $2, $2, 8
    r2 = S32(U32(r2) >> 8);
    // addi        $3, $zero, 0xF
    r3 = RSP_ADD32(0, 0XF);
    // srl         $21, $25, 30
    r21 = S32(U32(r25) >> 30);
    // bgtz        $21, L_1B80
    if (RSP_SIGNED(r21) > 0) {
        // addi        $1, $24, 0x0
        r1 = RSP_ADD32(r24, 0X0);
        goto L_1B80;
    }
    // addi        $1, $24, 0x0
    r1 = RSP_ADD32(r24, 0X0);
    // mfc0        $4, SP_DMA_FULL
    r4 = 0;
L_1B40:
    // bne         $4, $zero, L_1B40
    if (r4 != 0) {
        // mfc0        $4, SP_DMA_FULL
        r4 = 0;
        goto L_1B40;
    }
    // mfc0        $4, SP_DMA_FULL
    r4 = 0;
    // mtc0        $1, SP_MEM_ADDR
    SET_DMA_MEM(r1);
    // mtc0        $2, SP_DRAM_ADDR
    SET_DMA_DRAM(r2);
    // mtc0        $3, SP_RD_LEN
    if (dma_mem_address & 0x1000) {
        ctx->resume_address = 0x1B50;
        ctx->resume_delay = false;
        goto do_overlay_swap;
    }
    DO_DMA_READ(r3);
R_1B50:
    // srl         $20, $25, 2
    r20 = S32(U32(r25) >> 2);
    // andi        $20, $20, 0xFFF
    r20 = r20 & 0XFFF;
    // addi        $20, $20, 0x4F8
    r20 = RSP_ADD32(r20, 0X4F8);
    // lqv         $v31[0], 0x50($zero)
    rsp.LQV<0>(rsp.vpu.r[31], 0, 0X5);
    // lqv         $v25[0], 0x40($zero)
    rsp.LQV<0>(rsp.vpu.r[25], 0, 0X4);
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
L_1B6C:
    // bne         $5, $zero, L_1B6C
    if (r5 != 0) {
        // mfc0        $5, SP_DMA_BUSY
        r5 = 0;
        goto L_1B6C;
    }
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
    // ldv         $v19[0], 0x0($24)
    rsp.LDV<0>(rsp.vpu.r[19], r24, 0X0);
    // j           L_1B9C
    // lsv         $v24[14], 0x8($24)
    rsp.LSV<14>(rsp.vpu.r[24], r24, 0X4);
    goto L_1B9C;
    // lsv         $v24[14], 0x8($24)
    rsp.LSV<14>(rsp.vpu.r[24], r24, 0X4);
L_1B80:
    // srl         $20, $25, 2
    r20 = S32(U32(r25) >> 2);
    // andi        $20, $20, 0xFFF
    r20 = r20 & 0XFFF;
    // addi        $20, $20, 0x4F8
    r20 = RSP_ADD32(r20, 0X4F8);
    // lqv         $v31[0], 0x50($zero)
    rsp.LQV<0>(rsp.vpu.r[31], 0, 0X5);
    // vxor        $v19, $v19, $v19
    rsp.VXOR<0>(rsp.vpu.r[19], rsp.vpu.r[19], rsp.vpu.r[19]);
    // lqv         $v25[0], 0x40($zero)
    rsp.LQV<0>(rsp.vpu.r[25], 0, 0X4);
    // vxor        $v24, $v24, $v24
    rsp.VXOR<0>(rsp.vpu.r[24], rsp.vpu.r[24], rsp.vpu.r[24]);
L_1B9C:
    // mtc2        $20, $v21[4]
    rsp.MTC2<4>(r20, rsp.vpu.r[21]);
    // addi        $4, $zero, 0xC0
    r4 = RSP_ADD32(0, 0XC0);
    // mtc2        $4, $v21[6]
    rsp.MTC2<6>(r4, rsp.vpu.r[21]);
    // vsub        $v25, $v25, $v31
    rsp.VSUB<0>(rsp.vpu.r[25], rsp.vpu.r[25], rsp.vpu.r[31]);
    // srl         $4, $25, 14
    r4 = S32(U32(r25) >> 14);
    // mtc2        $4, $v21[8]
    rsp.MTC2<8>(r4, rsp.vpu.r[21]);
    // addi        $4, $zero, 0x40
    r4 = RSP_ADD32(0, 0X40);
    // mtc2        $4, $v21[10]
    rsp.MTC2<10>(r4, rsp.vpu.r[21]);
    // vsub        $v25, $v25, $v31
    rsp.VSUB<0>(rsp.vpu.r[25], rsp.vpu.r[25], rsp.vpu.r[31]);
    // lqv         $v30[0], 0x60($zero)
    rsp.LQV<0>(rsp.vpu.r[30], 0, 0X6);
    // lqv         $v29[0], 0x70($zero)
    rsp.LQV<0>(rsp.vpu.r[29], 0, 0X7);
    // lqv         $v28[0], 0x80($zero)
    rsp.LQV<0>(rsp.vpu.r[28], 0, 0X8);
    // vmudm       $v24, $v31, $v24[7]
    rsp.VMUDM<15>(rsp.vpu.r[24], rsp.vpu.r[31], rsp.vpu.r[24]);
    // lqv         $v27[0], 0x90($zero)
    rsp.LQV<0>(rsp.vpu.r[27], 0, 0X9);
    // vmadm       $v23, $v25, $v21[4]
    rsp.VMADM<12>(rsp.vpu.r[23], rsp.vpu.r[25], rsp.vpu.r[21]);
    // lqv         $v26[0], 0xA0($zero)
    rsp.LQV<0>(rsp.vpu.r[26], 0, 0XA);
    // vmadn       $v24, $v31, $v30[0]
    rsp.VMADN<8>(rsp.vpu.r[24], rsp.vpu.r[31], rsp.vpu.r[30]);
    // sdv         $v19[0], 0x0($20)
    rsp.SDV<0>(rsp.vpu.r[19], r20, 0X0);
    // lqv         $v25[0], 0x40($zero)
    rsp.LQV<0>(rsp.vpu.r[25], 0, 0X4);
    // vmudn       $v22, $v31, $v21[2]
    rsp.VMUDN<10>(rsp.vpu.r[22], rsp.vpu.r[31], rsp.vpu.r[21]);
    // addi        $22, $zero, 0x170
    r22 = RSP_ADD32(0, 0X170);
    // vmadn       $v22, $v23, $v30[2]
    rsp.VMADN<10>(rsp.vpu.r[22], rsp.vpu.r[23], rsp.vpu.r[30]);
    // andi        $4, $25, 0x3
    r4 = r25 & 0X3;
    // vmudl       $v20, $v24, $v21[5]
    rsp.VMUDL<13>(rsp.vpu.r[20], rsp.vpu.r[24], rsp.vpu.r[21]);
    // beq         $4, $zero, L_1C08
    if (r4 == 0) {
        // addi        $23, $zero, 0x500
        r23 = RSP_ADD32(0, 0X500);
        goto L_1C08;
    }
    // addi        $23, $zero, 0x500
    r23 = RSP_ADD32(0, 0X500);
    // addi        $23, $zero, 0x670
    r23 = RSP_ADD32(0, 0X670);
L_1C08:
    // ssv         $v24[7], 0x8($24)
    rsp.SSV<7>(rsp.vpu.r[24], r24, 0X4);
    // vmudn       $v20, $v20, $v30[4]
    rsp.VMUDN<12>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[30]);
    // sqv         $v22[0], 0x7B0($zero)
    rsp.SQV<0>(rsp.vpu.r[22], 0, -0X5);
    // vmadn       $v20, $v31, $v21[3]
    rsp.VMADN<11>(rsp.vpu.r[20], rsp.vpu.r[31], rsp.vpu.r[21]);
    // sqv         $v20[0], 0x7C0($zero)
    rsp.SQV<0>(rsp.vpu.r[20], 0, -0X4);
    // lh          $21, 0xFB0($zero)
    r21 = RSP_MEM_H_LOAD(0XFB0, 0);
    // lh          $13, 0xFC0($zero)
    r13 = RSP_MEM_H_LOAD(0XFC0, 0);
    // lh          $17, 0xFB8($zero)
    r17 = RSP_MEM_H_LOAD(0XFB8, 0);
    // lh          $9, 0xFC8($zero)
    r9 = RSP_MEM_H_LOAD(0XFC8, 0);
    // lh          $20, 0xFB2($zero)
    r20 = RSP_MEM_H_LOAD(0XFB2, 0);
    // lh          $12, 0xFC2($zero)
    r12 = RSP_MEM_H_LOAD(0XFC2, 0);
    // lh          $16, 0xFBA($zero)
    r16 = RSP_MEM_H_LOAD(0XFBA, 0);
    // lh          $8, 0xFCA($zero)
    r8 = RSP_MEM_H_LOAD(0XFCA, 0);
    // lh          $19, 0xFB4($zero)
    r19 = RSP_MEM_H_LOAD(0XFB4, 0);
    // lh          $11, 0xFC4($zero)
    r11 = RSP_MEM_H_LOAD(0XFC4, 0);
    // lh          $15, 0xFBC($zero)
    r15 = RSP_MEM_H_LOAD(0XFBC, 0);
    // lh          $7, 0xFCC($zero)
    r7 = RSP_MEM_H_LOAD(0XFCC, 0);
    // lh          $18, 0xFB6($zero)
    r18 = RSP_MEM_H_LOAD(0XFB6, 0);
    // lh          $10, 0xFC6($zero)
    r10 = RSP_MEM_H_LOAD(0XFC6, 0);
    // lh          $14, 0xFBE($zero)
    r14 = RSP_MEM_H_LOAD(0XFBE, 0);
    // lh          $6, 0xFCE($zero)
    r6 = RSP_MEM_H_LOAD(0XFCE, 0);
L_1C5C:
    // ldv         $v19[0], 0x0($21)
    rsp.LDV<0>(rsp.vpu.r[19], r21, 0X0);
    // vmudm       $v24, $v31, $v24[7]
    rsp.VMUDM<15>(rsp.vpu.r[24], rsp.vpu.r[31], rsp.vpu.r[24]);
    // ldv         $v18[0], 0x0($13)
    rsp.LDV<0>(rsp.vpu.r[18], r13, 0X0);
    // vmadh       $v24, $v31, $v23[7]
    rsp.VMADH<15>(rsp.vpu.r[24], rsp.vpu.r[31], rsp.vpu.r[23]);
    // ldv         $v19[8], 0x0($17)
    rsp.LDV<8>(rsp.vpu.r[19], r17, 0X0);
    // vmadm       $v23, $v25, $v21[4]
    rsp.VMADM<12>(rsp.vpu.r[23], rsp.vpu.r[25], rsp.vpu.r[21]);
    // ldv         $v18[8], 0x0($9)
    rsp.LDV<8>(rsp.vpu.r[18], r9, 0X0);
    // vmadn       $v24, $v31, $v30[0]
    rsp.VMADN<8>(rsp.vpu.r[24], rsp.vpu.r[31], rsp.vpu.r[30]);
    // ldv         $v17[0], 0x0($20)
    rsp.LDV<0>(rsp.vpu.r[17], r20, 0X0);
    // vmudn       $v22, $v31, $v21[2]
    rsp.VMUDN<10>(rsp.vpu.r[22], rsp.vpu.r[31], rsp.vpu.r[21]);
    // ldv         $v16[0], 0x0($12)
    rsp.LDV<0>(rsp.vpu.r[16], r12, 0X0);
    // ldv         $v17[8], 0x0($16)
    rsp.LDV<8>(rsp.vpu.r[17], r16, 0X0);
    // vmadn       $v22, $v23, $v30[2]
    rsp.VMADN<10>(rsp.vpu.r[22], rsp.vpu.r[23], rsp.vpu.r[30]);
    // ldv         $v16[8], 0x0($8)
    rsp.LDV<8>(rsp.vpu.r[16], r8, 0X0);
    // vmudl       $v20, $v24, $v21[5]
    rsp.VMUDL<13>(rsp.vpu.r[20], rsp.vpu.r[24], rsp.vpu.r[21]);
    // ldv         $v15[0], 0x0($19)
    rsp.LDV<0>(rsp.vpu.r[15], r19, 0X0);
    // ldv         $v14[0], 0x0($11)
    rsp.LDV<0>(rsp.vpu.r[14], r11, 0X0);
    // ldv         $v15[8], 0x0($15)
    rsp.LDV<8>(rsp.vpu.r[15], r15, 0X0);
    // ldv         $v14[8], 0x0($7)
    rsp.LDV<8>(rsp.vpu.r[14], r7, 0X0);
    // vmudn       $v20, $v20, $v30[4]
    rsp.VMUDN<12>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[30]);
    // ldv         $v13[0], 0x0($18)
    rsp.LDV<0>(rsp.vpu.r[13], r18, 0X0);
    // vmadn       $v20, $v31, $v21[3]
    rsp.VMADN<11>(rsp.vpu.r[20], rsp.vpu.r[31], rsp.vpu.r[21]);
    // ldv         $v12[0], 0x0($10)
    rsp.LDV<0>(rsp.vpu.r[12], r10, 0X0);
    // ldv         $v13[8], 0x0($14)
    rsp.LDV<8>(rsp.vpu.r[13], r14, 0X0);
    // vmulf       $v11, $v19, $v18
    rsp.VMULF<0>(rsp.vpu.r[11], rsp.vpu.r[19], rsp.vpu.r[18]);
    // ldv         $v12[8], 0x0($6)
    rsp.LDV<8>(rsp.vpu.r[12], r6, 0X0);
    // vmulf       $v10, $v17, $v16
    rsp.VMULF<0>(rsp.vpu.r[10], rsp.vpu.r[17], rsp.vpu.r[16]);
    // sqv         $v22[0], 0x7B0($zero)
    rsp.SQV<0>(rsp.vpu.r[22], 0, -0X5);
    // vmulf       $v9, $v15, $v14
    rsp.VMULF<0>(rsp.vpu.r[9], rsp.vpu.r[15], rsp.vpu.r[14]);
    // sqv         $v20[0], 0x7C0($zero)
    rsp.SQV<0>(rsp.vpu.r[20], 0, -0X4);
    // lh          $21, 0xFB0($zero)
    r21 = RSP_MEM_H_LOAD(0XFB0, 0);
    // lh          $13, 0xFC0($zero)
    r13 = RSP_MEM_H_LOAD(0XFC0, 0);
    // vmulf       $v8, $v13, $v12
    rsp.VMULF<0>(rsp.vpu.r[8], rsp.vpu.r[13], rsp.vpu.r[12]);
    // lh          $17, 0xFB8($zero)
    r17 = RSP_MEM_H_LOAD(0XFB8, 0);
    // vadd        $v11, $v11, $v11[1q]
    rsp.VADD<3>(rsp.vpu.r[11], rsp.vpu.r[11], rsp.vpu.r[11]);
    // lh          $9, 0xFC8($zero)
    r9 = RSP_MEM_H_LOAD(0XFC8, 0);
    // vadd        $v10, $v10, $v10[1q]
    rsp.VADD<3>(rsp.vpu.r[10], rsp.vpu.r[10], rsp.vpu.r[10]);
    // lh          $20, 0xFB2($zero)
    r20 = RSP_MEM_H_LOAD(0XFB2, 0);
    // vadd        $v9, $v9, $v9[1q]
    rsp.VADD<3>(rsp.vpu.r[9], rsp.vpu.r[9], rsp.vpu.r[9]);
    // lh          $12, 0xFC2($zero)
    r12 = RSP_MEM_H_LOAD(0XFC2, 0);
    // vadd        $v8, $v8, $v8[1q]
    rsp.VADD<3>(rsp.vpu.r[8], rsp.vpu.r[8], rsp.vpu.r[8]);
    // lh          $16, 0xFBA($zero)
    r16 = RSP_MEM_H_LOAD(0XFBA, 0);
    // vadd        $v11, $v11, $v11[2h]
    rsp.VADD<6>(rsp.vpu.r[11], rsp.vpu.r[11], rsp.vpu.r[11]);
    // lh          $8, 0xFCA($zero)
    r8 = RSP_MEM_H_LOAD(0XFCA, 0);
    // vadd        $v10, $v10, $v10[2h]
    rsp.VADD<6>(rsp.vpu.r[10], rsp.vpu.r[10], rsp.vpu.r[10]);
    // lh          $19, 0xFB4($zero)
    r19 = RSP_MEM_H_LOAD(0XFB4, 0);
    // vadd        $v9, $v9, $v9[2h]
    rsp.VADD<6>(rsp.vpu.r[9], rsp.vpu.r[9], rsp.vpu.r[9]);
    // lh          $11, 0xFC4($zero)
    r11 = RSP_MEM_H_LOAD(0XFC4, 0);
    // vadd        $v8, $v8, $v8[2h]
    rsp.VADD<6>(rsp.vpu.r[8], rsp.vpu.r[8], rsp.vpu.r[8]);
    // lh          $15, 0xFBC($zero)
    r15 = RSP_MEM_H_LOAD(0XFBC, 0);
    // vmudn       $v7, $v29, $v11[0h]
    rsp.VMUDN<4>(rsp.vpu.r[7], rsp.vpu.r[29], rsp.vpu.r[11]);
    // lh          $7, 0xFCC($zero)
    r7 = RSP_MEM_H_LOAD(0XFCC, 0);
    // vmadn       $v7, $v28, $v10[0h]
    rsp.VMADN<4>(rsp.vpu.r[7], rsp.vpu.r[28], rsp.vpu.r[10]);
    // lh          $18, 0xFB6($zero)
    r18 = RSP_MEM_H_LOAD(0XFB6, 0);
    // vmadn       $v7, $v27, $v9[0h]
    rsp.VMADN<4>(rsp.vpu.r[7], rsp.vpu.r[27], rsp.vpu.r[9]);
    // lh          $10, 0xFC6($zero)
    r10 = RSP_MEM_H_LOAD(0XFC6, 0);
    // vmadn       $v7, $v26, $v8[0h]
    rsp.VMADN<4>(rsp.vpu.r[7], rsp.vpu.r[26], rsp.vpu.r[8]);
    // lh          $14, 0xFBE($zero)
    r14 = RSP_MEM_H_LOAD(0XFBE, 0);
    // lh          $6, 0xFCE($zero)
    r6 = RSP_MEM_H_LOAD(0XFCE, 0);
    // addi        $22, $22, -0x10
    r22 = RSP_ADD32(r22, -0X10);
    // blez        $22, L_1D5C
    if (RSP_SIGNED(r22) <= 0) {
        // sqv         $v7[0], 0x0($23)
        rsp.SQV<0>(rsp.vpu.r[7], r23, 0X0);
        goto L_1D5C;
    }
    // sqv         $v7[0], 0x0($23)
    rsp.SQV<0>(rsp.vpu.r[7], r23, 0X0);
    // j           L_1C5C
    // addi        $23, $23, 0x10
    r23 = RSP_ADD32(r23, 0X10);
    goto L_1C5C;
    // addi        $23, $23, 0x10
    r23 = RSP_ADD32(r23, 0X10);
L_1D5C:
    // ldv         $v19[0], 0x0($21)
    rsp.LDV<0>(rsp.vpu.r[19], r21, 0X0);
    // ssv         $v24[0], 0x8($24)
    rsp.SSV<0>(rsp.vpu.r[24], r24, 0X4);
    // jal         0x1198
    r31 = 0x1D6C;
    // sdv         $v19[0], 0x0($24)
    rsp.SDV<0>(rsp.vpu.r[19], r24, 0X0);
    goto L_1198;
    // sdv         $v19[0], 0x0($24)
    rsp.SDV<0>(rsp.vpu.r[19], r24, 0X0);
L_1D6C:
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
L_1D74:
    // bne         $5, $zero, L_1D74
    if (r5 != 0) {
        // mfc0        $5, SP_DMA_BUSY
        r5 = 0;
        goto L_1D74;
    }
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
    // j           L_110C
    // nop

    goto L_110C;
    // nop

L_1D84:
    // sll         $2, $25, 8
    r2 = S32(r25) << 8;
    // srl         $2, $2, 8
    r2 = S32(U32(r2) >> 8);
    // lqv         $v31[0], 0x50($zero)
    rsp.LQV<0>(rsp.vpu.r[31], 0, 0X5);
    // lqv         $v10[0], 0x60($zero)
    rsp.LQV<0>(rsp.vpu.r[10], 0, 0X6);
    // lqv         $v30[0], 0xB0($zero)
    rsp.LQV<0>(rsp.vpu.r[30], 0, 0XB);
    // vxor        $v0, $v0, $v0
    rsp.VXOR<0>(rsp.vpu.r[0], rsp.vpu.r[0], rsp.vpu.r[0]);
    // srl         $14, $26, 16
    r14 = S32(U32(r26) >> 16);
    // andi        $15, $14, 0x1
    r15 = r14 & 0X1;
    // bgtz        $15, L_1DD0
    if (RSP_SIGNED(r15) > 0) {
        // addi        $1, $24, 0x0
        r1 = RSP_ADD32(r24, 0X0);
        goto L_1DD0;
    }
    // addi        $1, $24, 0x0
    r1 = RSP_ADD32(r24, 0X0);
    // jal         0x117C
    r31 = 0x1DB4;
    // addi        $3, $zero, 0x4F
    r3 = RSP_ADD32(0, 0X4F);
    goto L_117C;
    // addi        $3, $zero, 0x4F
    r3 = RSP_ADD32(0, 0X4F);
L_1DB4:
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
L_1DB8:
    // bne         $5, $zero, L_1DB8
    if (r5 != 0) {
        // mfc0        $5, SP_DMA_BUSY
        r5 = 0;
        goto L_1DB8;
    }
    // mfc0        $5, SP_DMA_BUSY
    r5 = 0;
    // lqv         $v20[0], 0x0($24)
    rsp.LQV<0>(rsp.vpu.r[20], r24, 0X0);
    // lqv         $v21[0], 0x10($24)
    rsp.LQV<0>(rsp.vpu.r[21], r24, 0X1);
    // lqv         $v18[0], 0x20($24)
    rsp.LQV<0>(rsp.vpu.r[18], r24, 0X2);
    // lqv         $v19[0], 0x30($24)
    rsp.LQV<0>(rsp.vpu.r[19], r24, 0X3);
L_1DD0:
    // lqv         $v24[0], 0x40($24)
    rsp.LQV<0>(rsp.vpu.r[24], r24, 0X4);
    // addi        $16, $zero, 0x500
    r16 = RSP_ADD32(0, 0X500);
    // addi        $21, $zero, 0x9E0
    r21 = RSP_ADD32(0, 0X9E0);
    // addi        $20, $zero, 0xB50
    r20 = RSP_ADD32(0, 0XB50);
    // addi        $19, $zero, 0xCC0
    r19 = RSP_ADD32(0, 0XCC0);
    // addi        $18, $zero, 0xE30
    r18 = RSP_ADD32(0, 0XE30);
    // addi        $17, $zero, 0x170
    r17 = RSP_ADD32(0, 0X170);
    // mfc2        $22, $v24[8]
    rsp.MFC2<8>(r22, rsp.vpu.r[24]);
    // vand        $v9, $v31, $v24[6]
    rsp.VAND<14>(rsp.vpu.r[9], rsp.vpu.r[31], rsp.vpu.r[24]);
    // vand        $v8, $v31, $v24[7]
    rsp.VAND<15>(rsp.vpu.r[8], rsp.vpu.r[31], rsp.vpu.r[24]);
    // vsub        $v9, $v0, $v9
    rsp.VSUB<0>(rsp.vpu.r[9], rsp.vpu.r[0], rsp.vpu.r[9]);
    // vsub        $v8, $v0, $v8
    rsp.VSUB<0>(rsp.vpu.r[8], rsp.vpu.r[0], rsp.vpu.r[8]);
    // vxor        $v8, $v8, $v9
    rsp.VXOR<0>(rsp.vpu.r[8], rsp.vpu.r[8], rsp.vpu.r[9]);
    // beq         $15, $zero, L_1EDC
    if (r15 == 0) {
        // mfc2        $23, $v24[2]
        rsp.MFC2<2>(r23, rsp.vpu.r[24]);
        goto L_1EDC;
    }
    // mfc2        $23, $v24[2]
    rsp.MFC2<2>(r23, rsp.vpu.r[24]);
    // addi        $3, $zero, 0x4F
    r3 = RSP_ADD32(0, 0X4F);
    // vxor        $v20, $v20, $v20
    rsp.VXOR<0>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[20]);
    // lsv         $v20[14], 0x50($24)
    rsp.LSV<14>(rsp.vpu.r[20], r24, 0X28);
    // vxor        $v21, $v21, $v21
    rsp.VXOR<0>(rsp.vpu.r[21], rsp.vpu.r[21], rsp.vpu.r[21]);
    // lqv         $v17[0], 0x0($16)
    rsp.LQV<0>(rsp.vpu.r[17], r16, 0X0);
    // vxor        $v18, $v18, $v18
    rsp.VXOR<0>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[18]);
    // mtc2        $26, $v18[14]
    rsp.MTC2<14>(r26, rsp.vpu.r[18]);
    // vmudl       $v23, $v30, $v24[2]
    rsp.VMUDL<10>(rsp.vpu.r[23], rsp.vpu.r[30], rsp.vpu.r[24]);
    // lqv         $v29[0], 0x0($21)
    rsp.LQV<0>(rsp.vpu.r[29], r21, 0X0);
    // vmadn       $v23, $v30, $v24[1]
    rsp.VMADN<9>(rsp.vpu.r[23], rsp.vpu.r[30], rsp.vpu.r[24]);
    // lqv         $v27[0], 0x0($19)
    rsp.LQV<0>(rsp.vpu.r[27], r19, 0X0);
    // vmadh       $v20, $v31, $v20[7]
    rsp.VMADH<15>(rsp.vpu.r[20], rsp.vpu.r[31], rsp.vpu.r[20]);
    // lqv         $v28[0], 0x0($20)
    rsp.LQV<0>(rsp.vpu.r[28], r20, 0X0);
    // vmadn       $v21, $v31, $v0[0]
    rsp.VMADN<8>(rsp.vpu.r[21], rsp.vpu.r[31], rsp.vpu.r[0]);
    // bgez        $23, L_1E54
    if (RSP_SIGNED(r23) >= 0) {
        // vxor        $v19, $v19, $v19
        rsp.VXOR<0>(rsp.vpu.r[19], rsp.vpu.r[19], rsp.vpu.r[19]);
        goto L_1E54;
    }
    // vxor        $v19, $v19, $v19
    rsp.VXOR<0>(rsp.vpu.r[19], rsp.vpu.r[19], rsp.vpu.r[19]);
    // j           L_1E58
    // vge         $v20, $v20, $v24[0]
    rsp.VGE<8>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[24]);
    goto L_1E58;
    // vge         $v20, $v20, $v24[0]
    rsp.VGE<8>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[24]);
L_1E54:
    // vlt         $v20, $v20, $v24[0]
    rsp.VLT<8>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[24]);
L_1E58:
    // vxor        $v17, $v9, $v17
    rsp.VXOR<0>(rsp.vpu.r[17], rsp.vpu.r[9], rsp.vpu.r[17]);
    // vmudl       $v23, $v30, $v24[5]
    rsp.VMUDL<13>(rsp.vpu.r[23], rsp.vpu.r[30], rsp.vpu.r[24]);
    // lqv         $v26[0], 0x0($18)
    rsp.LQV<0>(rsp.vpu.r[26], r18, 0X0);
    // vmadn       $v23, $v30, $v24[4]
    rsp.VMADN<12>(rsp.vpu.r[23], rsp.vpu.r[30], rsp.vpu.r[24]);
    // addi        $17, $17, -0x10
    r17 = RSP_ADD32(r17, -0X10);
    // vmadh       $v18, $v31, $v18[7]
    rsp.VMADH<15>(rsp.vpu.r[18], rsp.vpu.r[31], rsp.vpu.r[18]);
    // addi        $16, $16, 0x10
    r16 = RSP_ADD32(r16, 0X10);
    // vmadn       $v19, $v31, $v0[0]
    rsp.VMADN<8>(rsp.vpu.r[19], rsp.vpu.r[31], rsp.vpu.r[0]);
    // vmulf       $v16, $v20, $v24[6]
    rsp.VMULF<14>(rsp.vpu.r[16], rsp.vpu.r[20], rsp.vpu.r[24]);
    // bgez        $22, L_1E8C
    if (RSP_SIGNED(r22) >= 0) {
        // vmulf       $v15, $v20, $v24[7]
        rsp.VMULF<15>(rsp.vpu.r[15], rsp.vpu.r[20], rsp.vpu.r[24]);
        goto L_1E8C;
    }
    // vmulf       $v15, $v20, $v24[7]
    rsp.VMULF<15>(rsp.vpu.r[15], rsp.vpu.r[20], rsp.vpu.r[24]);
    // j           L_1E90
    // vge         $v18, $v18, $v24[3]
    rsp.VGE<11>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[24]);
    goto L_1E90;
    // vge         $v18, $v18, $v24[3]
    rsp.VGE<11>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[24]);
L_1E8C:
    // vlt         $v18, $v18, $v24[3]
    rsp.VLT<11>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[24]);
L_1E90:
    // vmulf       $v29, $v29, $v10[5]
    rsp.VMULF<13>(rsp.vpu.r[29], rsp.vpu.r[29], rsp.vpu.r[10]);
    // vmacf       $v29, $v17, $v16
    rsp.VMACF<0>(rsp.vpu.r[29], rsp.vpu.r[17], rsp.vpu.r[16]);
    // vmulf       $v27, $v27, $v10[5]
    rsp.VMULF<13>(rsp.vpu.r[27], rsp.vpu.r[27], rsp.vpu.r[10]);
    // vmacf       $v27, $v17, $v15
    rsp.VMACF<0>(rsp.vpu.r[27], rsp.vpu.r[17], rsp.vpu.r[15]);
    // vxor        $v17, $v8, $v17
    rsp.VXOR<0>(rsp.vpu.r[17], rsp.vpu.r[8], rsp.vpu.r[17]);
    // vmulf       $v16, $v18, $v24[6]
    rsp.VMULF<14>(rsp.vpu.r[16], rsp.vpu.r[18], rsp.vpu.r[24]);
    // vmulf       $v15, $v18, $v24[7]
    rsp.VMULF<15>(rsp.vpu.r[15], rsp.vpu.r[18], rsp.vpu.r[24]);
    // sqv         $v29[0], 0x0($21)
    rsp.SQV<0>(rsp.vpu.r[29], r21, 0X0);
    // vmulf       $v28, $v28, $v10[5]
    rsp.VMULF<13>(rsp.vpu.r[28], rsp.vpu.r[28], rsp.vpu.r[10]);
    // addi        $21, $21, 0x10
    r21 = RSP_ADD32(r21, 0X10);
    // vmacf       $v28, $v17, $v16
    rsp.VMACF<0>(rsp.vpu.r[28], rsp.vpu.r[17], rsp.vpu.r[16]);
    // sqv         $v27[0], 0x0($19)
    rsp.SQV<0>(rsp.vpu.r[27], r19, 0X0);
    // vmulf       $v26, $v26, $v10[5]
    rsp.VMULF<13>(rsp.vpu.r[26], rsp.vpu.r[26], rsp.vpu.r[10]);
    // addi        $19, $19, 0x10
    r19 = RSP_ADD32(r19, 0X10);
    // vmacf       $v26, $v17, $v15
    rsp.VMACF<0>(rsp.vpu.r[26], rsp.vpu.r[17], rsp.vpu.r[15]);
    // sqv         $v28[0], 0x0($20)
    rsp.SQV<0>(rsp.vpu.r[28], r20, 0X0);
    // addi        $20, $20, 0x10
    r20 = RSP_ADD32(r20, 0X10);
    // sqv         $v26[0], 0x0($18)
    rsp.SQV<0>(rsp.vpu.r[26], r18, 0X0);
    // addi        $18, $18, 0x10
    r18 = RSP_ADD32(r18, 0X10);
L_1EDC:
    // vaddc       $v21, $v21, $v24[2]
    rsp.VADDC<10>(rsp.vpu.r[21], rsp.vpu.r[21], rsp.vpu.r[24]);
    // vadd        $v20, $v20, $v24[1]
    rsp.VADD<9>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[24]);
L_1EE4:
    // lqv         $v29[0], 0x0($21)
    rsp.LQV<0>(rsp.vpu.r[29], r21, 0X0);
    // vaddc       $v19, $v19, $v24[5]
    rsp.VADDC<13>(rsp.vpu.r[19], rsp.vpu.r[19], rsp.vpu.r[24]);
    // lqv         $v17[0], 0x0($16)
    rsp.LQV<0>(rsp.vpu.r[17], r16, 0X0);
    // bgez        $23, L_1F00
    if (RSP_SIGNED(r23) >= 0) {
        // vadd        $v18, $v18, $v24[4]
        rsp.VADD<12>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[24]);
        goto L_1F00;
    }
    // vadd        $v18, $v18, $v24[4]
    rsp.VADD<12>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[24]);
    // j           L_1F04
    // vge         $v20, $v20, $v24[0]
    rsp.VGE<8>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[24]);
    goto L_1F04;
    // vge         $v20, $v20, $v24[0]
    rsp.VGE<8>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[24]);
L_1F00:
    // vlt         $v20, $v20, $v24[0]
    rsp.VLT<8>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[24]);
L_1F04:
    // vxor        $v17, $v9, $v17
    rsp.VXOR<0>(rsp.vpu.r[17], rsp.vpu.r[9], rsp.vpu.r[17]);
    // bgez        $22, L_1F18
    if (RSP_SIGNED(r22) >= 0) {
        // lqv         $v27[0], 0x0($19)
        rsp.LQV<0>(rsp.vpu.r[27], r19, 0X0);
        goto L_1F18;
    }
    // lqv         $v27[0], 0x0($19)
    rsp.LQV<0>(rsp.vpu.r[27], r19, 0X0);
    // j           L_1F1C
    // vge         $v18, $v18, $v24[3]
    rsp.VGE<11>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[24]);
    goto L_1F1C;
    // vge         $v18, $v18, $v24[3]
    rsp.VGE<11>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[24]);
L_1F18:
    // vlt         $v18, $v18, $v24[3]
    rsp.VLT<11>(rsp.vpu.r[18], rsp.vpu.r[18], rsp.vpu.r[24]);
L_1F1C:
    // vmulf       $v16, $v20, $v24[6]
    rsp.VMULF<14>(rsp.vpu.r[16], rsp.vpu.r[20], rsp.vpu.r[24]);
    // sqv         $v20[0], 0x0($24)
    rsp.SQV<0>(rsp.vpu.r[20], r24, 0X0);
    // vmulf       $v15, $v20, $v24[7]
    rsp.VMULF<15>(rsp.vpu.r[15], rsp.vpu.r[20], rsp.vpu.r[24]);
    // sqv         $v21[0], 0x10($24)
    rsp.SQV<0>(rsp.vpu.r[21], r24, 0X1);
    // vmulf       $v29, $v29, $v10[5]
    rsp.VMULF<13>(rsp.vpu.r[29], rsp.vpu.r[29], rsp.vpu.r[10]);
    // vmacf       $v29, $v17, $v16
    rsp.VMACF<0>(rsp.vpu.r[29], rsp.vpu.r[17], rsp.vpu.r[16]);
    // lqv         $v28[0], 0x0($20)
    rsp.LQV<0>(rsp.vpu.r[28], r20, 0X0);
    // vmulf       $v27, $v27, $v10[5]
    rsp.VMULF<13>(rsp.vpu.r[27], rsp.vpu.r[27], rsp.vpu.r[10]);
    // lqv         $v26[0], 0x0($18)
    rsp.LQV<0>(rsp.vpu.r[26], r18, 0X0);
    // vmacf       $v27, $v17, $v15
    rsp.VMACF<0>(rsp.vpu.r[27], rsp.vpu.r[17], rsp.vpu.r[15]);
    // vxor        $v17, $v8, $v17
    rsp.VXOR<0>(rsp.vpu.r[17], rsp.vpu.r[8], rsp.vpu.r[17]);
    // addi        $17, $17, -0x10
    r17 = RSP_ADD32(r17, -0X10);
    // vaddc       $v21, $v21, $v24[2]
    rsp.VADDC<10>(rsp.vpu.r[21], rsp.vpu.r[21], rsp.vpu.r[24]);
    // addi        $16, $16, 0x10
    r16 = RSP_ADD32(r16, 0X10);
    // vadd        $v20, $v20, $v24[1]
    rsp.VADD<9>(rsp.vpu.r[20], rsp.vpu.r[20], rsp.vpu.r[24]);
    // sqv         $v29[0], 0x0($21)
    rsp.SQV<0>(rsp.vpu.r[29], r21, 0X0);
    // vmulf       $v16, $v18, $v24[6]
    rsp.VMULF<14>(rsp.vpu.r[16], rsp.vpu.r[18], rsp.vpu.r[24]);
    // addi        $21, $21, 0x10
    r21 = RSP_ADD32(r21, 0X10);
    // vmulf       $v15, $v18, $v24[7]
    rsp.VMULF<15>(rsp.vpu.r[15], rsp.vpu.r[18], rsp.vpu.r[24]);
    // sqv         $v27[0], 0x0($19)
    rsp.SQV<0>(rsp.vpu.r[27], r19, 0X0);
    // vmulf       $v28, $v28, $v10[5]
    rsp.VMULF<13>(rsp.vpu.r[28], rsp.vpu.r[28], rsp.vpu.r[10]);
    // addi        $19, $19, 0x10
    r19 = RSP_ADD32(r19, 0X10);
    // vmacf       $v28, $v17, $v16
    rsp.VMACF<0>(rsp.vpu.r[28], rsp.vpu.r[17], rsp.vpu.r[16]);
    // vmulf       $v26, $v26, $v10[5]
    rsp.VMULF<13>(rsp.vpu.r[26], rsp.vpu.r[26], rsp.vpu.r[10]);
    // vmacf       $v26, $v17, $v15
    rsp.VMACF<0>(rsp.vpu.r[26], rsp.vpu.r[17], rsp.vpu.r[15]);
    // sqv         $v28[0], 0x0($20)
    rsp.SQV<0>(rsp.vpu.r[28], r20, 0X0);
    // addi        $20, $20, 0x10
    r20 = RSP_ADD32(r20, 0X10);
    // blez        $17, L_1F98
    if (RSP_SIGNED(r17) <= 0) {
        // sqv         $v26[0], 0x0($18)
        rsp.SQV<0>(rsp.vpu.r[26], r18, 0X0);
        goto L_1F98;
    }
    // sqv         $v26[0], 0x0($18)
    rsp.SQV<0>(rsp.vpu.r[26], r18, 0X0);
    // j           L_1EE4
    // addi        $18, $18, 0x10
    r18 = RSP_ADD32(r18, 0X10);
    goto L_1EE4;
    // addi        $18, $18, 0x10
    r18 = RSP_ADD32(r18, 0X10);
L_1F98:
    // sqv         $v18[0], 0x20($24)
    rsp.SQV<0>(rsp.vpu.r[18], r24, 0X2);
    // sqv         $v19[0], 0x30($24)
    rsp.SQV<0>(rsp.vpu.r[19], r24, 0X3);
    // jal         0x1198
    r31 = 0x1FA8;
    // sqv         $v24[0], 0x40($24)
    rsp.SQV<0>(rsp.vpu.r[24], r24, 0X4);
    goto L_1198;
    // sqv         $v24[0], 0x40($24)
    rsp.SQV<0>(rsp.vpu.r[24], r24, 0X4);
L_1FA8:
    // j           L_110C
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    goto L_110C;
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
L_1FB0:
    // lqv         $v31[0], 0x60($zero)
    rsp.LQV<0>(rsp.vpu.r[31], 0, 0X6);
    // andi        $22, $25, 0xFFFF
    r22 = r25 & 0XFFFF;
    // addi        $22, $22, 0x500
    r22 = RSP_ADD32(r22, 0X500);
    // lqv         $v28[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[28], r22, 0X0);
    // srl         $23, $25, 16
    r23 = S32(U32(r25) >> 16);
    // addi        $23, $23, 0x500
    r23 = RSP_ADD32(r23, 0X500);
    // lqv         $v29[0], 0x0($23)
    rsp.LQV<0>(rsp.vpu.r[29], r23, 0X0);
    // mtc2        $26, $v30[0]
    rsp.MTC2<0>(r26, rsp.vpu.r[30]);
    // addi        $21, $zero, 0x170
    r21 = RSP_ADD32(0, 0X170);
L_1FD4:
    // vmulf       $v27, $v28, $v31[5]
    rsp.VMULF<13>(rsp.vpu.r[27], rsp.vpu.r[28], rsp.vpu.r[31]);
    // addi        $21, $21, -0x10
    r21 = RSP_ADD32(r21, -0X10);
    // addi        $23, $23, 0x10
    r23 = RSP_ADD32(r23, 0X10);
    // addi        $22, $22, 0x10
    r22 = RSP_ADD32(r22, 0X10);
    // vmacf       $v27, $v29, $v30[0]
    rsp.VMACF<8>(rsp.vpu.r[27], rsp.vpu.r[29], rsp.vpu.r[30]);
    // lqv         $v28[0], 0x0($22)
    rsp.LQV<0>(rsp.vpu.r[28], r22, 0X0);
    // lqv         $v29[0], 0x0($23)
    rsp.LQV<0>(rsp.vpu.r[29], r23, 0X0);
    // bgtz        $21, L_1FD4
    if (RSP_SIGNED(r21) > 0) {
        // sqv         $v27[0], 0x7F0($22)
        rsp.SQV<0>(rsp.vpu.r[27], r22, -0X1);
        goto L_1FD4;
    }
    // sqv         $v27[0], 0x7F0($22)
    rsp.SQV<0>(rsp.vpu.r[27], r22, -0X1);
    // j           L_110C
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    goto L_110C;
    // addi        $30, $30, -0x8
    r30 = RSP_ADD32(r30, -0X8);
    return RspExitReason::ImemOverrun;
do_indirect_jump:
    switch ((jump_target | 0x1000) & 0X1FFF) { 
        case 0x1884: goto L_1884;
        case 0x10DC: goto L_10DC;
        case 0x1174: goto L_1174;
        case 0x1124: goto L_1124;
        case 0x1DB4: goto L_1DB4;
        case 0x11F0: goto L_11F0;
        case 0x126C: goto L_126C;
        case 0x1AD4: goto L_1AD4;
        case 0x12AC: goto L_12AC;
        case 0x122C: goto L_122C;
        case 0x12E4: goto L_12E4;
        case 0x1224: goto L_1224;
        case 0x120C: goto L_120C;
        case 0x1204: goto L_1204;
        case 0x1258: goto L_1258;
        case 0x12A8: goto L_12A8;
        case 0x1268: goto L_1268;
        case 0x1278: goto L_1278;
        case 0x1240: goto L_1240;
        case 0x1AE8: goto L_1AE8;
        case 0x12C0: goto L_12C0;
        case 0x1358: goto L_1358;
        case 0x1318: goto L_1318;
        case 0x14D8: goto L_14D8;
        case 0x1860: goto L_1860;
        case 0x186C: goto L_186C;
        case 0x1890: goto L_1890;
        case 0x1898: goto L_1898;
        case 0x1D6C: goto L_1D6C;
        case 0x1FA8: goto L_1FA8;
        case 0x143C: goto L_143C;
        case 0x1D84: goto L_1D84;
        case 0x1B20: goto L_1B20;
        case 0x1214: goto L_1214;
        case 0x141C: goto L_141C;
        case 0x1310: goto L_1310;
        case 0x13CC: goto L_13CC;
        case 0x1FB0: goto L_1FB0;
        case 0x16EC: goto L_16EC;
        case 0x1408: goto L_1408;
    }
    printf("Unhandled jump target 0x%04X in microcode n_aspMain, coming from [%s:%d]\n", jump_target, debug_file, debug_line);
    printf("Register dump: r0  = %08X r1  = %08X r2  = %08X r3  = %08X r4  = %08X r5  = %08X r6  = %08X r7  = %08X\n"
           "               r8  = %08X r9  = %08X r10 = %08X r11 = %08X r12 = %08X r13 = %08X r14 = %08X r15 = %08X\n"
           "               r16 = %08X r17 = %08X r18 = %08X r19 = %08X r20 = %08X r21 = %08X r22 = %08X r23 = %08X\n"
           "               r24 = %08X r25 = %08X r26 = %08X r27 = %08X r28 = %08X r29 = %08X r30 = %08X r31 = %08X\n",
           0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16,
           r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
    return RspExitReason::UnhandledJumpTarget;
do_overlay_swap:
                    ctx->r1 = r1;   ctx->r2 = r2;   ctx->r3 = r3;   ctx->r4 = r4;   ctx->r5 = r5;   ctx->r6 = r6;   ctx->r7 = r7;
    ctx->r8 = r8;   ctx->r9 = r9;   ctx->r10 = r10; ctx->r11 = r11; ctx->r12 = r12; ctx->r13 = r13; ctx->r14 = r14; ctx->r15 = r15;
    ctx->r16 = r16; ctx->r17 = r17; ctx->r18 = r18; ctx->r19 = r19; ctx->r20 = r20; ctx->r21 = r21; ctx->r22 = r22; ctx->r23 = r23;
    ctx->r24 = r24; ctx->r25 = r25; ctx->r26 = r26; ctx->r27 = r27; ctx->r28 = r28; ctx->r29 = r29; ctx->r30 = r30; ctx->r31 = r31;
    ctx->dma_mem_address = dma_mem_address;
    ctx->dma_dram_address = dma_dram_address;
    ctx->jump_target = jump_target;
    ctx->rsp = rsp;
    return RspExitReason::SwapOverlay;
}
