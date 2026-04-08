/*
 * Copyright © 2021 Glenfly Tech Co., Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *
 */
#ifndef _PMU_REGISTERS_H_
#define _PMU_REGISTERS_H_

typedef union
{
    unsigned int uint;
    struct
    {
        unsigned int Pmu_Miu_Hdr_Cfg_Axi_Cnt_En : 1;  // 1: enable; 0: disable
        unsigned int Refclk_D2_En_Reg           : 1;  // 1: enable refclk 2 division; 0: disable refclk 2 division. It is just for clock debug.
        unsigned int Reserved                   : 30;
    } reg;
} Reg_Pmu_Miu_Hdr_Cfg_Axi_Cnt_En;

#define PMU_BASE                                    0x8A000
#define PMU_PLL_STATUS_OFFSET                       (PMU_BASE+0x034)
#define PMU_DVFS_EN_and_AVS_EN                      (PMU_BASE+0x13C)
#define PMU_RESET_SET_SW_CTRL_OFFSET                (PMU_BASE+0x650)
#define PMU_RESET_CLR_SW_CTRL_OFFSET                (PMU_BASE+0x654)

#define Reg_Pmu_Miu_Hdr_Cfg_Axi_Cnt_En_Offset       0x196

#endif
