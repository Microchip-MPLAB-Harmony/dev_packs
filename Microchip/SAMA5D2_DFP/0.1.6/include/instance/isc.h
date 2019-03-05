/**
 * \file
 *
 * \brief Instance description for ISC
 *
 * Copyright (c) 2019 Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

/* file generated from device description version 2019-01-23T22:42:14Z */
#ifndef _SAMA5D2_ISC_INSTANCE_H_
#define _SAMA5D2_ISC_INSTANCE_H_

/* ========== Register definition for ISC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_ISC_DAD0            (0xF00083EC) /**< (ISC) DMA Address 0 Register 0 */
#define REG_ISC_DST0            (0xF00083F0) /**< (ISC) DMA Stride 0 Register 0 */
#define REG_ISC_DAD1            (0xF00083F4) /**< (ISC) DMA Address 0 Register 1 */
#define REG_ISC_DST1            (0xF00083F8) /**< (ISC) DMA Stride 0 Register 1 */
#define REG_ISC_DAD2            (0xF00083FC) /**< (ISC) DMA Address 0 Register 2 */
#define REG_ISC_DST2            (0xF0008400) /**< (ISC) DMA Stride 0 Register 2 */
#define REG_ISC_CTRLEN          (0xF0008000) /**< (ISC) Control Enable Register */
#define REG_ISC_CTRLDIS         (0xF0008004) /**< (ISC) Control Disable Register */
#define REG_ISC_CTRLSR          (0xF0008008) /**< (ISC) Control Status Register */
#define REG_ISC_PFE_CFG0        (0xF000800C) /**< (ISC) Parallel Front End Configuration 0 Register */
#define REG_ISC_PFE_CFG1        (0xF0008010) /**< (ISC) Parallel Front End Configuration 1 Register */
#define REG_ISC_PFE_CFG2        (0xF0008014) /**< (ISC) Parallel Front End Configuration 2 Register */
#define REG_ISC_CLKEN           (0xF0008018) /**< (ISC) Clock Enable Register */
#define REG_ISC_CLKDIS          (0xF000801C) /**< (ISC) Clock Disable Register */
#define REG_ISC_CLKSR           (0xF0008020) /**< (ISC) Clock Status Register */
#define REG_ISC_CLKCFG          (0xF0008024) /**< (ISC) Clock Configuration Register */
#define REG_ISC_INTEN           (0xF0008028) /**< (ISC) Interrupt Enable Register */
#define REG_ISC_INTDIS          (0xF000802C) /**< (ISC) Interrupt Disable Register */
#define REG_ISC_INTMASK         (0xF0008030) /**< (ISC) Interrupt Mask Register */
#define REG_ISC_INTSR           (0xF0008034) /**< (ISC) Interrupt Status Register */
#define REG_ISC_WB_CTRL         (0xF0008058) /**< (ISC) White Balance Control Register */
#define REG_ISC_WB_CFG          (0xF000805C) /**< (ISC) White Balance Configuration Register */
#define REG_ISC_WB_O_RGR        (0xF0008060) /**< (ISC) White Balance Offset for R, GR Register */
#define REG_ISC_WB_O_BGB        (0xF0008064) /**< (ISC) White Balance Offset for B, GB Register */
#define REG_ISC_WB_G_RGR        (0xF0008068) /**< (ISC) White Balance Gain for R, GR Register */
#define REG_ISC_WB_G_BGB        (0xF000806C) /**< (ISC) White Balance Gain for B, GB Register */
#define REG_ISC_CFA_CTRL        (0xF0008070) /**< (ISC) Color Filter Array Control Register */
#define REG_ISC_CFA_CFG         (0xF0008074) /**< (ISC) Color Filter Array Configuration Register */
#define REG_ISC_CC_CTRL         (0xF0008078) /**< (ISC) Color Correction Control Register */
#define REG_ISC_CC_RR_RG        (0xF000807C) /**< (ISC) Color Correction RR RG Register */
#define REG_ISC_CC_RB_OR        (0xF0008080) /**< (ISC) Color Correction RB OR Register */
#define REG_ISC_CC_GR_GG        (0xF0008084) /**< (ISC) Color Correction GR GG Register */
#define REG_ISC_CC_GB_OG        (0xF0008088) /**< (ISC) Color Correction GB OG Register */
#define REG_ISC_CC_BR_BG        (0xF000808C) /**< (ISC) Color Correction BR BG Register */
#define REG_ISC_CC_BB_OB        (0xF0008090) /**< (ISC) Color Correction BB OB Register */
#define REG_ISC_GAM_CTRL        (0xF0008094) /**< (ISC) Gamma Correction Control Register */
#define REG_ISC_GAM_BENTRY      (0xF0008098) /**< (ISC) Gamma Correction Blue Entry */
#define REG_ISC_GAM_BENTRY0     (0xF0008098) /**< (ISC) Gamma Correction Blue Entry 0 */
#define REG_ISC_GAM_BENTRY1     (0xF000809C) /**< (ISC) Gamma Correction Blue Entry 1 */
#define REG_ISC_GAM_BENTRY2     (0xF00080A0) /**< (ISC) Gamma Correction Blue Entry 2 */
#define REG_ISC_GAM_BENTRY3     (0xF00080A4) /**< (ISC) Gamma Correction Blue Entry 3 */
#define REG_ISC_GAM_BENTRY4     (0xF00080A8) /**< (ISC) Gamma Correction Blue Entry 4 */
#define REG_ISC_GAM_BENTRY5     (0xF00080AC) /**< (ISC) Gamma Correction Blue Entry 5 */
#define REG_ISC_GAM_BENTRY6     (0xF00080B0) /**< (ISC) Gamma Correction Blue Entry 6 */
#define REG_ISC_GAM_BENTRY7     (0xF00080B4) /**< (ISC) Gamma Correction Blue Entry 7 */
#define REG_ISC_GAM_BENTRY8     (0xF00080B8) /**< (ISC) Gamma Correction Blue Entry 8 */
#define REG_ISC_GAM_BENTRY9     (0xF00080BC) /**< (ISC) Gamma Correction Blue Entry 9 */
#define REG_ISC_GAM_BENTRY10    (0xF00080C0) /**< (ISC) Gamma Correction Blue Entry 10 */
#define REG_ISC_GAM_BENTRY11    (0xF00080C4) /**< (ISC) Gamma Correction Blue Entry 11 */
#define REG_ISC_GAM_BENTRY12    (0xF00080C8) /**< (ISC) Gamma Correction Blue Entry 12 */
#define REG_ISC_GAM_BENTRY13    (0xF00080CC) /**< (ISC) Gamma Correction Blue Entry 13 */
#define REG_ISC_GAM_BENTRY14    (0xF00080D0) /**< (ISC) Gamma Correction Blue Entry 14 */
#define REG_ISC_GAM_BENTRY15    (0xF00080D4) /**< (ISC) Gamma Correction Blue Entry 15 */
#define REG_ISC_GAM_BENTRY16    (0xF00080D8) /**< (ISC) Gamma Correction Blue Entry 16 */
#define REG_ISC_GAM_BENTRY17    (0xF00080DC) /**< (ISC) Gamma Correction Blue Entry 17 */
#define REG_ISC_GAM_BENTRY18    (0xF00080E0) /**< (ISC) Gamma Correction Blue Entry 18 */
#define REG_ISC_GAM_BENTRY19    (0xF00080E4) /**< (ISC) Gamma Correction Blue Entry 19 */
#define REG_ISC_GAM_BENTRY20    (0xF00080E8) /**< (ISC) Gamma Correction Blue Entry 20 */
#define REG_ISC_GAM_BENTRY21    (0xF00080EC) /**< (ISC) Gamma Correction Blue Entry 21 */
#define REG_ISC_GAM_BENTRY22    (0xF00080F0) /**< (ISC) Gamma Correction Blue Entry 22 */
#define REG_ISC_GAM_BENTRY23    (0xF00080F4) /**< (ISC) Gamma Correction Blue Entry 23 */
#define REG_ISC_GAM_BENTRY24    (0xF00080F8) /**< (ISC) Gamma Correction Blue Entry 24 */
#define REG_ISC_GAM_BENTRY25    (0xF00080FC) /**< (ISC) Gamma Correction Blue Entry 25 */
#define REG_ISC_GAM_BENTRY26    (0xF0008100) /**< (ISC) Gamma Correction Blue Entry 26 */
#define REG_ISC_GAM_BENTRY27    (0xF0008104) /**< (ISC) Gamma Correction Blue Entry 27 */
#define REG_ISC_GAM_BENTRY28    (0xF0008108) /**< (ISC) Gamma Correction Blue Entry 28 */
#define REG_ISC_GAM_BENTRY29    (0xF000810C) /**< (ISC) Gamma Correction Blue Entry 29 */
#define REG_ISC_GAM_BENTRY30    (0xF0008110) /**< (ISC) Gamma Correction Blue Entry 30 */
#define REG_ISC_GAM_BENTRY31    (0xF0008114) /**< (ISC) Gamma Correction Blue Entry 31 */
#define REG_ISC_GAM_BENTRY32    (0xF0008118) /**< (ISC) Gamma Correction Blue Entry 32 */
#define REG_ISC_GAM_BENTRY33    (0xF000811C) /**< (ISC) Gamma Correction Blue Entry 33 */
#define REG_ISC_GAM_BENTRY34    (0xF0008120) /**< (ISC) Gamma Correction Blue Entry 34 */
#define REG_ISC_GAM_BENTRY35    (0xF0008124) /**< (ISC) Gamma Correction Blue Entry 35 */
#define REG_ISC_GAM_BENTRY36    (0xF0008128) /**< (ISC) Gamma Correction Blue Entry 36 */
#define REG_ISC_GAM_BENTRY37    (0xF000812C) /**< (ISC) Gamma Correction Blue Entry 37 */
#define REG_ISC_GAM_BENTRY38    (0xF0008130) /**< (ISC) Gamma Correction Blue Entry 38 */
#define REG_ISC_GAM_BENTRY39    (0xF0008134) /**< (ISC) Gamma Correction Blue Entry 39 */
#define REG_ISC_GAM_BENTRY40    (0xF0008138) /**< (ISC) Gamma Correction Blue Entry 40 */
#define REG_ISC_GAM_BENTRY41    (0xF000813C) /**< (ISC) Gamma Correction Blue Entry 41 */
#define REG_ISC_GAM_BENTRY42    (0xF0008140) /**< (ISC) Gamma Correction Blue Entry 42 */
#define REG_ISC_GAM_BENTRY43    (0xF0008144) /**< (ISC) Gamma Correction Blue Entry 43 */
#define REG_ISC_GAM_BENTRY44    (0xF0008148) /**< (ISC) Gamma Correction Blue Entry 44 */
#define REG_ISC_GAM_BENTRY45    (0xF000814C) /**< (ISC) Gamma Correction Blue Entry 45 */
#define REG_ISC_GAM_BENTRY46    (0xF0008150) /**< (ISC) Gamma Correction Blue Entry 46 */
#define REG_ISC_GAM_BENTRY47    (0xF0008154) /**< (ISC) Gamma Correction Blue Entry 47 */
#define REG_ISC_GAM_BENTRY48    (0xF0008158) /**< (ISC) Gamma Correction Blue Entry 48 */
#define REG_ISC_GAM_BENTRY49    (0xF000815C) /**< (ISC) Gamma Correction Blue Entry 49 */
#define REG_ISC_GAM_BENTRY50    (0xF0008160) /**< (ISC) Gamma Correction Blue Entry 50 */
#define REG_ISC_GAM_BENTRY51    (0xF0008164) /**< (ISC) Gamma Correction Blue Entry 51 */
#define REG_ISC_GAM_BENTRY52    (0xF0008168) /**< (ISC) Gamma Correction Blue Entry 52 */
#define REG_ISC_GAM_BENTRY53    (0xF000816C) /**< (ISC) Gamma Correction Blue Entry 53 */
#define REG_ISC_GAM_BENTRY54    (0xF0008170) /**< (ISC) Gamma Correction Blue Entry 54 */
#define REG_ISC_GAM_BENTRY55    (0xF0008174) /**< (ISC) Gamma Correction Blue Entry 55 */
#define REG_ISC_GAM_BENTRY56    (0xF0008178) /**< (ISC) Gamma Correction Blue Entry 56 */
#define REG_ISC_GAM_BENTRY57    (0xF000817C) /**< (ISC) Gamma Correction Blue Entry 57 */
#define REG_ISC_GAM_BENTRY58    (0xF0008180) /**< (ISC) Gamma Correction Blue Entry 58 */
#define REG_ISC_GAM_BENTRY59    (0xF0008184) /**< (ISC) Gamma Correction Blue Entry 59 */
#define REG_ISC_GAM_BENTRY60    (0xF0008188) /**< (ISC) Gamma Correction Blue Entry 60 */
#define REG_ISC_GAM_BENTRY61    (0xF000818C) /**< (ISC) Gamma Correction Blue Entry 61 */
#define REG_ISC_GAM_BENTRY62    (0xF0008190) /**< (ISC) Gamma Correction Blue Entry 62 */
#define REG_ISC_GAM_BENTRY63    (0xF0008194) /**< (ISC) Gamma Correction Blue Entry 63 */
#define REG_ISC_GAM_GENTRY      (0xF0008198) /**< (ISC) Gamma Correction Green Entry */
#define REG_ISC_GAM_GENTRY0     (0xF0008198) /**< (ISC) Gamma Correction Green Entry 0 */
#define REG_ISC_GAM_GENTRY1     (0xF000819C) /**< (ISC) Gamma Correction Green Entry 1 */
#define REG_ISC_GAM_GENTRY2     (0xF00081A0) /**< (ISC) Gamma Correction Green Entry 2 */
#define REG_ISC_GAM_GENTRY3     (0xF00081A4) /**< (ISC) Gamma Correction Green Entry 3 */
#define REG_ISC_GAM_GENTRY4     (0xF00081A8) /**< (ISC) Gamma Correction Green Entry 4 */
#define REG_ISC_GAM_GENTRY5     (0xF00081AC) /**< (ISC) Gamma Correction Green Entry 5 */
#define REG_ISC_GAM_GENTRY6     (0xF00081B0) /**< (ISC) Gamma Correction Green Entry 6 */
#define REG_ISC_GAM_GENTRY7     (0xF00081B4) /**< (ISC) Gamma Correction Green Entry 7 */
#define REG_ISC_GAM_GENTRY8     (0xF00081B8) /**< (ISC) Gamma Correction Green Entry 8 */
#define REG_ISC_GAM_GENTRY9     (0xF00081BC) /**< (ISC) Gamma Correction Green Entry 9 */
#define REG_ISC_GAM_GENTRY10    (0xF00081C0) /**< (ISC) Gamma Correction Green Entry 10 */
#define REG_ISC_GAM_GENTRY11    (0xF00081C4) /**< (ISC) Gamma Correction Green Entry 11 */
#define REG_ISC_GAM_GENTRY12    (0xF00081C8) /**< (ISC) Gamma Correction Green Entry 12 */
#define REG_ISC_GAM_GENTRY13    (0xF00081CC) /**< (ISC) Gamma Correction Green Entry 13 */
#define REG_ISC_GAM_GENTRY14    (0xF00081D0) /**< (ISC) Gamma Correction Green Entry 14 */
#define REG_ISC_GAM_GENTRY15    (0xF00081D4) /**< (ISC) Gamma Correction Green Entry 15 */
#define REG_ISC_GAM_GENTRY16    (0xF00081D8) /**< (ISC) Gamma Correction Green Entry 16 */
#define REG_ISC_GAM_GENTRY17    (0xF00081DC) /**< (ISC) Gamma Correction Green Entry 17 */
#define REG_ISC_GAM_GENTRY18    (0xF00081E0) /**< (ISC) Gamma Correction Green Entry 18 */
#define REG_ISC_GAM_GENTRY19    (0xF00081E4) /**< (ISC) Gamma Correction Green Entry 19 */
#define REG_ISC_GAM_GENTRY20    (0xF00081E8) /**< (ISC) Gamma Correction Green Entry 20 */
#define REG_ISC_GAM_GENTRY21    (0xF00081EC) /**< (ISC) Gamma Correction Green Entry 21 */
#define REG_ISC_GAM_GENTRY22    (0xF00081F0) /**< (ISC) Gamma Correction Green Entry 22 */
#define REG_ISC_GAM_GENTRY23    (0xF00081F4) /**< (ISC) Gamma Correction Green Entry 23 */
#define REG_ISC_GAM_GENTRY24    (0xF00081F8) /**< (ISC) Gamma Correction Green Entry 24 */
#define REG_ISC_GAM_GENTRY25    (0xF00081FC) /**< (ISC) Gamma Correction Green Entry 25 */
#define REG_ISC_GAM_GENTRY26    (0xF0008200) /**< (ISC) Gamma Correction Green Entry 26 */
#define REG_ISC_GAM_GENTRY27    (0xF0008204) /**< (ISC) Gamma Correction Green Entry 27 */
#define REG_ISC_GAM_GENTRY28    (0xF0008208) /**< (ISC) Gamma Correction Green Entry 28 */
#define REG_ISC_GAM_GENTRY29    (0xF000820C) /**< (ISC) Gamma Correction Green Entry 29 */
#define REG_ISC_GAM_GENTRY30    (0xF0008210) /**< (ISC) Gamma Correction Green Entry 30 */
#define REG_ISC_GAM_GENTRY31    (0xF0008214) /**< (ISC) Gamma Correction Green Entry 31 */
#define REG_ISC_GAM_GENTRY32    (0xF0008218) /**< (ISC) Gamma Correction Green Entry 32 */
#define REG_ISC_GAM_GENTRY33    (0xF000821C) /**< (ISC) Gamma Correction Green Entry 33 */
#define REG_ISC_GAM_GENTRY34    (0xF0008220) /**< (ISC) Gamma Correction Green Entry 34 */
#define REG_ISC_GAM_GENTRY35    (0xF0008224) /**< (ISC) Gamma Correction Green Entry 35 */
#define REG_ISC_GAM_GENTRY36    (0xF0008228) /**< (ISC) Gamma Correction Green Entry 36 */
#define REG_ISC_GAM_GENTRY37    (0xF000822C) /**< (ISC) Gamma Correction Green Entry 37 */
#define REG_ISC_GAM_GENTRY38    (0xF0008230) /**< (ISC) Gamma Correction Green Entry 38 */
#define REG_ISC_GAM_GENTRY39    (0xF0008234) /**< (ISC) Gamma Correction Green Entry 39 */
#define REG_ISC_GAM_GENTRY40    (0xF0008238) /**< (ISC) Gamma Correction Green Entry 40 */
#define REG_ISC_GAM_GENTRY41    (0xF000823C) /**< (ISC) Gamma Correction Green Entry 41 */
#define REG_ISC_GAM_GENTRY42    (0xF0008240) /**< (ISC) Gamma Correction Green Entry 42 */
#define REG_ISC_GAM_GENTRY43    (0xF0008244) /**< (ISC) Gamma Correction Green Entry 43 */
#define REG_ISC_GAM_GENTRY44    (0xF0008248) /**< (ISC) Gamma Correction Green Entry 44 */
#define REG_ISC_GAM_GENTRY45    (0xF000824C) /**< (ISC) Gamma Correction Green Entry 45 */
#define REG_ISC_GAM_GENTRY46    (0xF0008250) /**< (ISC) Gamma Correction Green Entry 46 */
#define REG_ISC_GAM_GENTRY47    (0xF0008254) /**< (ISC) Gamma Correction Green Entry 47 */
#define REG_ISC_GAM_GENTRY48    (0xF0008258) /**< (ISC) Gamma Correction Green Entry 48 */
#define REG_ISC_GAM_GENTRY49    (0xF000825C) /**< (ISC) Gamma Correction Green Entry 49 */
#define REG_ISC_GAM_GENTRY50    (0xF0008260) /**< (ISC) Gamma Correction Green Entry 50 */
#define REG_ISC_GAM_GENTRY51    (0xF0008264) /**< (ISC) Gamma Correction Green Entry 51 */
#define REG_ISC_GAM_GENTRY52    (0xF0008268) /**< (ISC) Gamma Correction Green Entry 52 */
#define REG_ISC_GAM_GENTRY53    (0xF000826C) /**< (ISC) Gamma Correction Green Entry 53 */
#define REG_ISC_GAM_GENTRY54    (0xF0008270) /**< (ISC) Gamma Correction Green Entry 54 */
#define REG_ISC_GAM_GENTRY55    (0xF0008274) /**< (ISC) Gamma Correction Green Entry 55 */
#define REG_ISC_GAM_GENTRY56    (0xF0008278) /**< (ISC) Gamma Correction Green Entry 56 */
#define REG_ISC_GAM_GENTRY57    (0xF000827C) /**< (ISC) Gamma Correction Green Entry 57 */
#define REG_ISC_GAM_GENTRY58    (0xF0008280) /**< (ISC) Gamma Correction Green Entry 58 */
#define REG_ISC_GAM_GENTRY59    (0xF0008284) /**< (ISC) Gamma Correction Green Entry 59 */
#define REG_ISC_GAM_GENTRY60    (0xF0008288) /**< (ISC) Gamma Correction Green Entry 60 */
#define REG_ISC_GAM_GENTRY61    (0xF000828C) /**< (ISC) Gamma Correction Green Entry 61 */
#define REG_ISC_GAM_GENTRY62    (0xF0008290) /**< (ISC) Gamma Correction Green Entry 62 */
#define REG_ISC_GAM_GENTRY63    (0xF0008294) /**< (ISC) Gamma Correction Green Entry 63 */
#define REG_ISC_GAM_RENTRY      (0xF0008298) /**< (ISC) Gamma Correction Red Entry */
#define REG_ISC_GAM_RENTRY0     (0xF0008298) /**< (ISC) Gamma Correction Red Entry 0 */
#define REG_ISC_GAM_RENTRY1     (0xF000829C) /**< (ISC) Gamma Correction Red Entry 1 */
#define REG_ISC_GAM_RENTRY2     (0xF00082A0) /**< (ISC) Gamma Correction Red Entry 2 */
#define REG_ISC_GAM_RENTRY3     (0xF00082A4) /**< (ISC) Gamma Correction Red Entry 3 */
#define REG_ISC_GAM_RENTRY4     (0xF00082A8) /**< (ISC) Gamma Correction Red Entry 4 */
#define REG_ISC_GAM_RENTRY5     (0xF00082AC) /**< (ISC) Gamma Correction Red Entry 5 */
#define REG_ISC_GAM_RENTRY6     (0xF00082B0) /**< (ISC) Gamma Correction Red Entry 6 */
#define REG_ISC_GAM_RENTRY7     (0xF00082B4) /**< (ISC) Gamma Correction Red Entry 7 */
#define REG_ISC_GAM_RENTRY8     (0xF00082B8) /**< (ISC) Gamma Correction Red Entry 8 */
#define REG_ISC_GAM_RENTRY9     (0xF00082BC) /**< (ISC) Gamma Correction Red Entry 9 */
#define REG_ISC_GAM_RENTRY10    (0xF00082C0) /**< (ISC) Gamma Correction Red Entry 10 */
#define REG_ISC_GAM_RENTRY11    (0xF00082C4) /**< (ISC) Gamma Correction Red Entry 11 */
#define REG_ISC_GAM_RENTRY12    (0xF00082C8) /**< (ISC) Gamma Correction Red Entry 12 */
#define REG_ISC_GAM_RENTRY13    (0xF00082CC) /**< (ISC) Gamma Correction Red Entry 13 */
#define REG_ISC_GAM_RENTRY14    (0xF00082D0) /**< (ISC) Gamma Correction Red Entry 14 */
#define REG_ISC_GAM_RENTRY15    (0xF00082D4) /**< (ISC) Gamma Correction Red Entry 15 */
#define REG_ISC_GAM_RENTRY16    (0xF00082D8) /**< (ISC) Gamma Correction Red Entry 16 */
#define REG_ISC_GAM_RENTRY17    (0xF00082DC) /**< (ISC) Gamma Correction Red Entry 17 */
#define REG_ISC_GAM_RENTRY18    (0xF00082E0) /**< (ISC) Gamma Correction Red Entry 18 */
#define REG_ISC_GAM_RENTRY19    (0xF00082E4) /**< (ISC) Gamma Correction Red Entry 19 */
#define REG_ISC_GAM_RENTRY20    (0xF00082E8) /**< (ISC) Gamma Correction Red Entry 20 */
#define REG_ISC_GAM_RENTRY21    (0xF00082EC) /**< (ISC) Gamma Correction Red Entry 21 */
#define REG_ISC_GAM_RENTRY22    (0xF00082F0) /**< (ISC) Gamma Correction Red Entry 22 */
#define REG_ISC_GAM_RENTRY23    (0xF00082F4) /**< (ISC) Gamma Correction Red Entry 23 */
#define REG_ISC_GAM_RENTRY24    (0xF00082F8) /**< (ISC) Gamma Correction Red Entry 24 */
#define REG_ISC_GAM_RENTRY25    (0xF00082FC) /**< (ISC) Gamma Correction Red Entry 25 */
#define REG_ISC_GAM_RENTRY26    (0xF0008300) /**< (ISC) Gamma Correction Red Entry 26 */
#define REG_ISC_GAM_RENTRY27    (0xF0008304) /**< (ISC) Gamma Correction Red Entry 27 */
#define REG_ISC_GAM_RENTRY28    (0xF0008308) /**< (ISC) Gamma Correction Red Entry 28 */
#define REG_ISC_GAM_RENTRY29    (0xF000830C) /**< (ISC) Gamma Correction Red Entry 29 */
#define REG_ISC_GAM_RENTRY30    (0xF0008310) /**< (ISC) Gamma Correction Red Entry 30 */
#define REG_ISC_GAM_RENTRY31    (0xF0008314) /**< (ISC) Gamma Correction Red Entry 31 */
#define REG_ISC_GAM_RENTRY32    (0xF0008318) /**< (ISC) Gamma Correction Red Entry 32 */
#define REG_ISC_GAM_RENTRY33    (0xF000831C) /**< (ISC) Gamma Correction Red Entry 33 */
#define REG_ISC_GAM_RENTRY34    (0xF0008320) /**< (ISC) Gamma Correction Red Entry 34 */
#define REG_ISC_GAM_RENTRY35    (0xF0008324) /**< (ISC) Gamma Correction Red Entry 35 */
#define REG_ISC_GAM_RENTRY36    (0xF0008328) /**< (ISC) Gamma Correction Red Entry 36 */
#define REG_ISC_GAM_RENTRY37    (0xF000832C) /**< (ISC) Gamma Correction Red Entry 37 */
#define REG_ISC_GAM_RENTRY38    (0xF0008330) /**< (ISC) Gamma Correction Red Entry 38 */
#define REG_ISC_GAM_RENTRY39    (0xF0008334) /**< (ISC) Gamma Correction Red Entry 39 */
#define REG_ISC_GAM_RENTRY40    (0xF0008338) /**< (ISC) Gamma Correction Red Entry 40 */
#define REG_ISC_GAM_RENTRY41    (0xF000833C) /**< (ISC) Gamma Correction Red Entry 41 */
#define REG_ISC_GAM_RENTRY42    (0xF0008340) /**< (ISC) Gamma Correction Red Entry 42 */
#define REG_ISC_GAM_RENTRY43    (0xF0008344) /**< (ISC) Gamma Correction Red Entry 43 */
#define REG_ISC_GAM_RENTRY44    (0xF0008348) /**< (ISC) Gamma Correction Red Entry 44 */
#define REG_ISC_GAM_RENTRY45    (0xF000834C) /**< (ISC) Gamma Correction Red Entry 45 */
#define REG_ISC_GAM_RENTRY46    (0xF0008350) /**< (ISC) Gamma Correction Red Entry 46 */
#define REG_ISC_GAM_RENTRY47    (0xF0008354) /**< (ISC) Gamma Correction Red Entry 47 */
#define REG_ISC_GAM_RENTRY48    (0xF0008358) /**< (ISC) Gamma Correction Red Entry 48 */
#define REG_ISC_GAM_RENTRY49    (0xF000835C) /**< (ISC) Gamma Correction Red Entry 49 */
#define REG_ISC_GAM_RENTRY50    (0xF0008360) /**< (ISC) Gamma Correction Red Entry 50 */
#define REG_ISC_GAM_RENTRY51    (0xF0008364) /**< (ISC) Gamma Correction Red Entry 51 */
#define REG_ISC_GAM_RENTRY52    (0xF0008368) /**< (ISC) Gamma Correction Red Entry 52 */
#define REG_ISC_GAM_RENTRY53    (0xF000836C) /**< (ISC) Gamma Correction Red Entry 53 */
#define REG_ISC_GAM_RENTRY54    (0xF0008370) /**< (ISC) Gamma Correction Red Entry 54 */
#define REG_ISC_GAM_RENTRY55    (0xF0008374) /**< (ISC) Gamma Correction Red Entry 55 */
#define REG_ISC_GAM_RENTRY56    (0xF0008378) /**< (ISC) Gamma Correction Red Entry 56 */
#define REG_ISC_GAM_RENTRY57    (0xF000837C) /**< (ISC) Gamma Correction Red Entry 57 */
#define REG_ISC_GAM_RENTRY58    (0xF0008380) /**< (ISC) Gamma Correction Red Entry 58 */
#define REG_ISC_GAM_RENTRY59    (0xF0008384) /**< (ISC) Gamma Correction Red Entry 59 */
#define REG_ISC_GAM_RENTRY60    (0xF0008388) /**< (ISC) Gamma Correction Red Entry 60 */
#define REG_ISC_GAM_RENTRY61    (0xF000838C) /**< (ISC) Gamma Correction Red Entry 61 */
#define REG_ISC_GAM_RENTRY62    (0xF0008390) /**< (ISC) Gamma Correction Red Entry 62 */
#define REG_ISC_GAM_RENTRY63    (0xF0008394) /**< (ISC) Gamma Correction Red Entry 63 */
#define REG_ISC_CSC_CTRL        (0xF0008398) /**< (ISC) Color Space Conversion Control Register */
#define REG_ISC_CSC_YR_YG       (0xF000839C) /**< (ISC) Color Space Conversion YR, YG Register */
#define REG_ISC_CSC_YB_OY       (0xF00083A0) /**< (ISC) Color Space Conversion YB, OY Register */
#define REG_ISC_CSC_CBR_CBG     (0xF00083A4) /**< (ISC) Color Space Conversion CBR CBG Register */
#define REG_ISC_CSC_CBB_OCB     (0xF00083A8) /**< (ISC) Color Space Conversion CBB OCB Register */
#define REG_ISC_CSC_CRR_CRG     (0xF00083AC) /**< (ISC) Color Space Conversion CRR CRG Register */
#define REG_ISC_CSC_CRB_OCR     (0xF00083B0) /**< (ISC) Color Space Conversion CRB OCR Register */
#define REG_ISC_CBC_CTRL        (0xF00083B4) /**< (ISC) Contrast and Brightness Control Register */
#define REG_ISC_CBC_CFG         (0xF00083B8) /**< (ISC) Contrast and Brightness Configuration Register */
#define REG_ISC_CBC_BRIGHT      (0xF00083BC) /**< (ISC) Contrast and Brightness, Brightness Register */
#define REG_ISC_CBC_CONTRAST    (0xF00083C0) /**< (ISC) Contrast and Brightness, Contrast Register */
#define REG_ISC_SUB422_CTRL     (0xF00083C4) /**< (ISC) Subsampling 4:4:4 to 4:2:2 Control Register */
#define REG_ISC_SUB422_CFG      (0xF00083C8) /**< (ISC) Subsampling 4:4:4 to 4:2:2 Configuration Register */
#define REG_ISC_SUB420_CTRL     (0xF00083CC) /**< (ISC) Subsampling 4:2:2 to 4:2:0 Control Register */
#define REG_ISC_RLP_CFG         (0xF00083D0) /**< (ISC) Rounding, Limiting and Packing Configuration Register */
#define REG_ISC_HIS_CTRL        (0xF00083D4) /**< (ISC) Histogram Control Register */
#define REG_ISC_HIS_CFG         (0xF00083D8) /**< (ISC) Histogram Configuration Register */
#define REG_ISC_DCFG            (0xF00083E0) /**< (ISC) DMA Configuration Register */
#define REG_ISC_DCTRL           (0xF00083E4) /**< (ISC) DMA Control Register */
#define REG_ISC_DNDA            (0xF00083E8) /**< (ISC) DMA Descriptor Address Register */
#define REG_ISC_HIS_ENTRY       (0xF0008410) /**< (ISC) Histogram Entry */
#define REG_ISC_HIS_ENTRY0      (0xF0008410) /**< (ISC) Histogram Entry 0 */
#define REG_ISC_HIS_ENTRY1      (0xF0008414) /**< (ISC) Histogram Entry 1 */
#define REG_ISC_HIS_ENTRY2      (0xF0008418) /**< (ISC) Histogram Entry 2 */
#define REG_ISC_HIS_ENTRY3      (0xF000841C) /**< (ISC) Histogram Entry 3 */
#define REG_ISC_HIS_ENTRY4      (0xF0008420) /**< (ISC) Histogram Entry 4 */
#define REG_ISC_HIS_ENTRY5      (0xF0008424) /**< (ISC) Histogram Entry 5 */
#define REG_ISC_HIS_ENTRY6      (0xF0008428) /**< (ISC) Histogram Entry 6 */
#define REG_ISC_HIS_ENTRY7      (0xF000842C) /**< (ISC) Histogram Entry 7 */
#define REG_ISC_HIS_ENTRY8      (0xF0008430) /**< (ISC) Histogram Entry 8 */
#define REG_ISC_HIS_ENTRY9      (0xF0008434) /**< (ISC) Histogram Entry 9 */
#define REG_ISC_HIS_ENTRY10     (0xF0008438) /**< (ISC) Histogram Entry 10 */
#define REG_ISC_HIS_ENTRY11     (0xF000843C) /**< (ISC) Histogram Entry 11 */
#define REG_ISC_HIS_ENTRY12     (0xF0008440) /**< (ISC) Histogram Entry 12 */
#define REG_ISC_HIS_ENTRY13     (0xF0008444) /**< (ISC) Histogram Entry 13 */
#define REG_ISC_HIS_ENTRY14     (0xF0008448) /**< (ISC) Histogram Entry 14 */
#define REG_ISC_HIS_ENTRY15     (0xF000844C) /**< (ISC) Histogram Entry 15 */
#define REG_ISC_HIS_ENTRY16     (0xF0008450) /**< (ISC) Histogram Entry 16 */
#define REG_ISC_HIS_ENTRY17     (0xF0008454) /**< (ISC) Histogram Entry 17 */
#define REG_ISC_HIS_ENTRY18     (0xF0008458) /**< (ISC) Histogram Entry 18 */
#define REG_ISC_HIS_ENTRY19     (0xF000845C) /**< (ISC) Histogram Entry 19 */
#define REG_ISC_HIS_ENTRY20     (0xF0008460) /**< (ISC) Histogram Entry 20 */
#define REG_ISC_HIS_ENTRY21     (0xF0008464) /**< (ISC) Histogram Entry 21 */
#define REG_ISC_HIS_ENTRY22     (0xF0008468) /**< (ISC) Histogram Entry 22 */
#define REG_ISC_HIS_ENTRY23     (0xF000846C) /**< (ISC) Histogram Entry 23 */
#define REG_ISC_HIS_ENTRY24     (0xF0008470) /**< (ISC) Histogram Entry 24 */
#define REG_ISC_HIS_ENTRY25     (0xF0008474) /**< (ISC) Histogram Entry 25 */
#define REG_ISC_HIS_ENTRY26     (0xF0008478) /**< (ISC) Histogram Entry 26 */
#define REG_ISC_HIS_ENTRY27     (0xF000847C) /**< (ISC) Histogram Entry 27 */
#define REG_ISC_HIS_ENTRY28     (0xF0008480) /**< (ISC) Histogram Entry 28 */
#define REG_ISC_HIS_ENTRY29     (0xF0008484) /**< (ISC) Histogram Entry 29 */
#define REG_ISC_HIS_ENTRY30     (0xF0008488) /**< (ISC) Histogram Entry 30 */
#define REG_ISC_HIS_ENTRY31     (0xF000848C) /**< (ISC) Histogram Entry 31 */
#define REG_ISC_HIS_ENTRY32     (0xF0008490) /**< (ISC) Histogram Entry 32 */
#define REG_ISC_HIS_ENTRY33     (0xF0008494) /**< (ISC) Histogram Entry 33 */
#define REG_ISC_HIS_ENTRY34     (0xF0008498) /**< (ISC) Histogram Entry 34 */
#define REG_ISC_HIS_ENTRY35     (0xF000849C) /**< (ISC) Histogram Entry 35 */
#define REG_ISC_HIS_ENTRY36     (0xF00084A0) /**< (ISC) Histogram Entry 36 */
#define REG_ISC_HIS_ENTRY37     (0xF00084A4) /**< (ISC) Histogram Entry 37 */
#define REG_ISC_HIS_ENTRY38     (0xF00084A8) /**< (ISC) Histogram Entry 38 */
#define REG_ISC_HIS_ENTRY39     (0xF00084AC) /**< (ISC) Histogram Entry 39 */
#define REG_ISC_HIS_ENTRY40     (0xF00084B0) /**< (ISC) Histogram Entry 40 */
#define REG_ISC_HIS_ENTRY41     (0xF00084B4) /**< (ISC) Histogram Entry 41 */
#define REG_ISC_HIS_ENTRY42     (0xF00084B8) /**< (ISC) Histogram Entry 42 */
#define REG_ISC_HIS_ENTRY43     (0xF00084BC) /**< (ISC) Histogram Entry 43 */
#define REG_ISC_HIS_ENTRY44     (0xF00084C0) /**< (ISC) Histogram Entry 44 */
#define REG_ISC_HIS_ENTRY45     (0xF00084C4) /**< (ISC) Histogram Entry 45 */
#define REG_ISC_HIS_ENTRY46     (0xF00084C8) /**< (ISC) Histogram Entry 46 */
#define REG_ISC_HIS_ENTRY47     (0xF00084CC) /**< (ISC) Histogram Entry 47 */
#define REG_ISC_HIS_ENTRY48     (0xF00084D0) /**< (ISC) Histogram Entry 48 */
#define REG_ISC_HIS_ENTRY49     (0xF00084D4) /**< (ISC) Histogram Entry 49 */
#define REG_ISC_HIS_ENTRY50     (0xF00084D8) /**< (ISC) Histogram Entry 50 */
#define REG_ISC_HIS_ENTRY51     (0xF00084DC) /**< (ISC) Histogram Entry 51 */
#define REG_ISC_HIS_ENTRY52     (0xF00084E0) /**< (ISC) Histogram Entry 52 */
#define REG_ISC_HIS_ENTRY53     (0xF00084E4) /**< (ISC) Histogram Entry 53 */
#define REG_ISC_HIS_ENTRY54     (0xF00084E8) /**< (ISC) Histogram Entry 54 */
#define REG_ISC_HIS_ENTRY55     (0xF00084EC) /**< (ISC) Histogram Entry 55 */
#define REG_ISC_HIS_ENTRY56     (0xF00084F0) /**< (ISC) Histogram Entry 56 */
#define REG_ISC_HIS_ENTRY57     (0xF00084F4) /**< (ISC) Histogram Entry 57 */
#define REG_ISC_HIS_ENTRY58     (0xF00084F8) /**< (ISC) Histogram Entry 58 */
#define REG_ISC_HIS_ENTRY59     (0xF00084FC) /**< (ISC) Histogram Entry 59 */
#define REG_ISC_HIS_ENTRY60     (0xF0008500) /**< (ISC) Histogram Entry 60 */
#define REG_ISC_HIS_ENTRY61     (0xF0008504) /**< (ISC) Histogram Entry 61 */
#define REG_ISC_HIS_ENTRY62     (0xF0008508) /**< (ISC) Histogram Entry 62 */
#define REG_ISC_HIS_ENTRY63     (0xF000850C) /**< (ISC) Histogram Entry 63 */
#define REG_ISC_HIS_ENTRY64     (0xF0008510) /**< (ISC) Histogram Entry 64 */
#define REG_ISC_HIS_ENTRY65     (0xF0008514) /**< (ISC) Histogram Entry 65 */
#define REG_ISC_HIS_ENTRY66     (0xF0008518) /**< (ISC) Histogram Entry 66 */
#define REG_ISC_HIS_ENTRY67     (0xF000851C) /**< (ISC) Histogram Entry 67 */
#define REG_ISC_HIS_ENTRY68     (0xF0008520) /**< (ISC) Histogram Entry 68 */
#define REG_ISC_HIS_ENTRY69     (0xF0008524) /**< (ISC) Histogram Entry 69 */
#define REG_ISC_HIS_ENTRY70     (0xF0008528) /**< (ISC) Histogram Entry 70 */
#define REG_ISC_HIS_ENTRY71     (0xF000852C) /**< (ISC) Histogram Entry 71 */
#define REG_ISC_HIS_ENTRY72     (0xF0008530) /**< (ISC) Histogram Entry 72 */
#define REG_ISC_HIS_ENTRY73     (0xF0008534) /**< (ISC) Histogram Entry 73 */
#define REG_ISC_HIS_ENTRY74     (0xF0008538) /**< (ISC) Histogram Entry 74 */
#define REG_ISC_HIS_ENTRY75     (0xF000853C) /**< (ISC) Histogram Entry 75 */
#define REG_ISC_HIS_ENTRY76     (0xF0008540) /**< (ISC) Histogram Entry 76 */
#define REG_ISC_HIS_ENTRY77     (0xF0008544) /**< (ISC) Histogram Entry 77 */
#define REG_ISC_HIS_ENTRY78     (0xF0008548) /**< (ISC) Histogram Entry 78 */
#define REG_ISC_HIS_ENTRY79     (0xF000854C) /**< (ISC) Histogram Entry 79 */
#define REG_ISC_HIS_ENTRY80     (0xF0008550) /**< (ISC) Histogram Entry 80 */
#define REG_ISC_HIS_ENTRY81     (0xF0008554) /**< (ISC) Histogram Entry 81 */
#define REG_ISC_HIS_ENTRY82     (0xF0008558) /**< (ISC) Histogram Entry 82 */
#define REG_ISC_HIS_ENTRY83     (0xF000855C) /**< (ISC) Histogram Entry 83 */
#define REG_ISC_HIS_ENTRY84     (0xF0008560) /**< (ISC) Histogram Entry 84 */
#define REG_ISC_HIS_ENTRY85     (0xF0008564) /**< (ISC) Histogram Entry 85 */
#define REG_ISC_HIS_ENTRY86     (0xF0008568) /**< (ISC) Histogram Entry 86 */
#define REG_ISC_HIS_ENTRY87     (0xF000856C) /**< (ISC) Histogram Entry 87 */
#define REG_ISC_HIS_ENTRY88     (0xF0008570) /**< (ISC) Histogram Entry 88 */
#define REG_ISC_HIS_ENTRY89     (0xF0008574) /**< (ISC) Histogram Entry 89 */
#define REG_ISC_HIS_ENTRY90     (0xF0008578) /**< (ISC) Histogram Entry 90 */
#define REG_ISC_HIS_ENTRY91     (0xF000857C) /**< (ISC) Histogram Entry 91 */
#define REG_ISC_HIS_ENTRY92     (0xF0008580) /**< (ISC) Histogram Entry 92 */
#define REG_ISC_HIS_ENTRY93     (0xF0008584) /**< (ISC) Histogram Entry 93 */
#define REG_ISC_HIS_ENTRY94     (0xF0008588) /**< (ISC) Histogram Entry 94 */
#define REG_ISC_HIS_ENTRY95     (0xF000858C) /**< (ISC) Histogram Entry 95 */
#define REG_ISC_HIS_ENTRY96     (0xF0008590) /**< (ISC) Histogram Entry 96 */
#define REG_ISC_HIS_ENTRY97     (0xF0008594) /**< (ISC) Histogram Entry 97 */
#define REG_ISC_HIS_ENTRY98     (0xF0008598) /**< (ISC) Histogram Entry 98 */
#define REG_ISC_HIS_ENTRY99     (0xF000859C) /**< (ISC) Histogram Entry 99 */
#define REG_ISC_HIS_ENTRY100    (0xF00085A0) /**< (ISC) Histogram Entry 100 */
#define REG_ISC_HIS_ENTRY101    (0xF00085A4) /**< (ISC) Histogram Entry 101 */
#define REG_ISC_HIS_ENTRY102    (0xF00085A8) /**< (ISC) Histogram Entry 102 */
#define REG_ISC_HIS_ENTRY103    (0xF00085AC) /**< (ISC) Histogram Entry 103 */
#define REG_ISC_HIS_ENTRY104    (0xF00085B0) /**< (ISC) Histogram Entry 104 */
#define REG_ISC_HIS_ENTRY105    (0xF00085B4) /**< (ISC) Histogram Entry 105 */
#define REG_ISC_HIS_ENTRY106    (0xF00085B8) /**< (ISC) Histogram Entry 106 */
#define REG_ISC_HIS_ENTRY107    (0xF00085BC) /**< (ISC) Histogram Entry 107 */
#define REG_ISC_HIS_ENTRY108    (0xF00085C0) /**< (ISC) Histogram Entry 108 */
#define REG_ISC_HIS_ENTRY109    (0xF00085C4) /**< (ISC) Histogram Entry 109 */
#define REG_ISC_HIS_ENTRY110    (0xF00085C8) /**< (ISC) Histogram Entry 110 */
#define REG_ISC_HIS_ENTRY111    (0xF00085CC) /**< (ISC) Histogram Entry 111 */
#define REG_ISC_HIS_ENTRY112    (0xF00085D0) /**< (ISC) Histogram Entry 112 */
#define REG_ISC_HIS_ENTRY113    (0xF00085D4) /**< (ISC) Histogram Entry 113 */
#define REG_ISC_HIS_ENTRY114    (0xF00085D8) /**< (ISC) Histogram Entry 114 */
#define REG_ISC_HIS_ENTRY115    (0xF00085DC) /**< (ISC) Histogram Entry 115 */
#define REG_ISC_HIS_ENTRY116    (0xF00085E0) /**< (ISC) Histogram Entry 116 */
#define REG_ISC_HIS_ENTRY117    (0xF00085E4) /**< (ISC) Histogram Entry 117 */
#define REG_ISC_HIS_ENTRY118    (0xF00085E8) /**< (ISC) Histogram Entry 118 */
#define REG_ISC_HIS_ENTRY119    (0xF00085EC) /**< (ISC) Histogram Entry 119 */
#define REG_ISC_HIS_ENTRY120    (0xF00085F0) /**< (ISC) Histogram Entry 120 */
#define REG_ISC_HIS_ENTRY121    (0xF00085F4) /**< (ISC) Histogram Entry 121 */
#define REG_ISC_HIS_ENTRY122    (0xF00085F8) /**< (ISC) Histogram Entry 122 */
#define REG_ISC_HIS_ENTRY123    (0xF00085FC) /**< (ISC) Histogram Entry 123 */
#define REG_ISC_HIS_ENTRY124    (0xF0008600) /**< (ISC) Histogram Entry 124 */
#define REG_ISC_HIS_ENTRY125    (0xF0008604) /**< (ISC) Histogram Entry 125 */
#define REG_ISC_HIS_ENTRY126    (0xF0008608) /**< (ISC) Histogram Entry 126 */
#define REG_ISC_HIS_ENTRY127    (0xF000860C) /**< (ISC) Histogram Entry 127 */
#define REG_ISC_HIS_ENTRY128    (0xF0008610) /**< (ISC) Histogram Entry 128 */
#define REG_ISC_HIS_ENTRY129    (0xF0008614) /**< (ISC) Histogram Entry 129 */
#define REG_ISC_HIS_ENTRY130    (0xF0008618) /**< (ISC) Histogram Entry 130 */
#define REG_ISC_HIS_ENTRY131    (0xF000861C) /**< (ISC) Histogram Entry 131 */
#define REG_ISC_HIS_ENTRY132    (0xF0008620) /**< (ISC) Histogram Entry 132 */
#define REG_ISC_HIS_ENTRY133    (0xF0008624) /**< (ISC) Histogram Entry 133 */
#define REG_ISC_HIS_ENTRY134    (0xF0008628) /**< (ISC) Histogram Entry 134 */
#define REG_ISC_HIS_ENTRY135    (0xF000862C) /**< (ISC) Histogram Entry 135 */
#define REG_ISC_HIS_ENTRY136    (0xF0008630) /**< (ISC) Histogram Entry 136 */
#define REG_ISC_HIS_ENTRY137    (0xF0008634) /**< (ISC) Histogram Entry 137 */
#define REG_ISC_HIS_ENTRY138    (0xF0008638) /**< (ISC) Histogram Entry 138 */
#define REG_ISC_HIS_ENTRY139    (0xF000863C) /**< (ISC) Histogram Entry 139 */
#define REG_ISC_HIS_ENTRY140    (0xF0008640) /**< (ISC) Histogram Entry 140 */
#define REG_ISC_HIS_ENTRY141    (0xF0008644) /**< (ISC) Histogram Entry 141 */
#define REG_ISC_HIS_ENTRY142    (0xF0008648) /**< (ISC) Histogram Entry 142 */
#define REG_ISC_HIS_ENTRY143    (0xF000864C) /**< (ISC) Histogram Entry 143 */
#define REG_ISC_HIS_ENTRY144    (0xF0008650) /**< (ISC) Histogram Entry 144 */
#define REG_ISC_HIS_ENTRY145    (0xF0008654) /**< (ISC) Histogram Entry 145 */
#define REG_ISC_HIS_ENTRY146    (0xF0008658) /**< (ISC) Histogram Entry 146 */
#define REG_ISC_HIS_ENTRY147    (0xF000865C) /**< (ISC) Histogram Entry 147 */
#define REG_ISC_HIS_ENTRY148    (0xF0008660) /**< (ISC) Histogram Entry 148 */
#define REG_ISC_HIS_ENTRY149    (0xF0008664) /**< (ISC) Histogram Entry 149 */
#define REG_ISC_HIS_ENTRY150    (0xF0008668) /**< (ISC) Histogram Entry 150 */
#define REG_ISC_HIS_ENTRY151    (0xF000866C) /**< (ISC) Histogram Entry 151 */
#define REG_ISC_HIS_ENTRY152    (0xF0008670) /**< (ISC) Histogram Entry 152 */
#define REG_ISC_HIS_ENTRY153    (0xF0008674) /**< (ISC) Histogram Entry 153 */
#define REG_ISC_HIS_ENTRY154    (0xF0008678) /**< (ISC) Histogram Entry 154 */
#define REG_ISC_HIS_ENTRY155    (0xF000867C) /**< (ISC) Histogram Entry 155 */
#define REG_ISC_HIS_ENTRY156    (0xF0008680) /**< (ISC) Histogram Entry 156 */
#define REG_ISC_HIS_ENTRY157    (0xF0008684) /**< (ISC) Histogram Entry 157 */
#define REG_ISC_HIS_ENTRY158    (0xF0008688) /**< (ISC) Histogram Entry 158 */
#define REG_ISC_HIS_ENTRY159    (0xF000868C) /**< (ISC) Histogram Entry 159 */
#define REG_ISC_HIS_ENTRY160    (0xF0008690) /**< (ISC) Histogram Entry 160 */
#define REG_ISC_HIS_ENTRY161    (0xF0008694) /**< (ISC) Histogram Entry 161 */
#define REG_ISC_HIS_ENTRY162    (0xF0008698) /**< (ISC) Histogram Entry 162 */
#define REG_ISC_HIS_ENTRY163    (0xF000869C) /**< (ISC) Histogram Entry 163 */
#define REG_ISC_HIS_ENTRY164    (0xF00086A0) /**< (ISC) Histogram Entry 164 */
#define REG_ISC_HIS_ENTRY165    (0xF00086A4) /**< (ISC) Histogram Entry 165 */
#define REG_ISC_HIS_ENTRY166    (0xF00086A8) /**< (ISC) Histogram Entry 166 */
#define REG_ISC_HIS_ENTRY167    (0xF00086AC) /**< (ISC) Histogram Entry 167 */
#define REG_ISC_HIS_ENTRY168    (0xF00086B0) /**< (ISC) Histogram Entry 168 */
#define REG_ISC_HIS_ENTRY169    (0xF00086B4) /**< (ISC) Histogram Entry 169 */
#define REG_ISC_HIS_ENTRY170    (0xF00086B8) /**< (ISC) Histogram Entry 170 */
#define REG_ISC_HIS_ENTRY171    (0xF00086BC) /**< (ISC) Histogram Entry 171 */
#define REG_ISC_HIS_ENTRY172    (0xF00086C0) /**< (ISC) Histogram Entry 172 */
#define REG_ISC_HIS_ENTRY173    (0xF00086C4) /**< (ISC) Histogram Entry 173 */
#define REG_ISC_HIS_ENTRY174    (0xF00086C8) /**< (ISC) Histogram Entry 174 */
#define REG_ISC_HIS_ENTRY175    (0xF00086CC) /**< (ISC) Histogram Entry 175 */
#define REG_ISC_HIS_ENTRY176    (0xF00086D0) /**< (ISC) Histogram Entry 176 */
#define REG_ISC_HIS_ENTRY177    (0xF00086D4) /**< (ISC) Histogram Entry 177 */
#define REG_ISC_HIS_ENTRY178    (0xF00086D8) /**< (ISC) Histogram Entry 178 */
#define REG_ISC_HIS_ENTRY179    (0xF00086DC) /**< (ISC) Histogram Entry 179 */
#define REG_ISC_HIS_ENTRY180    (0xF00086E0) /**< (ISC) Histogram Entry 180 */
#define REG_ISC_HIS_ENTRY181    (0xF00086E4) /**< (ISC) Histogram Entry 181 */
#define REG_ISC_HIS_ENTRY182    (0xF00086E8) /**< (ISC) Histogram Entry 182 */
#define REG_ISC_HIS_ENTRY183    (0xF00086EC) /**< (ISC) Histogram Entry 183 */
#define REG_ISC_HIS_ENTRY184    (0xF00086F0) /**< (ISC) Histogram Entry 184 */
#define REG_ISC_HIS_ENTRY185    (0xF00086F4) /**< (ISC) Histogram Entry 185 */
#define REG_ISC_HIS_ENTRY186    (0xF00086F8) /**< (ISC) Histogram Entry 186 */
#define REG_ISC_HIS_ENTRY187    (0xF00086FC) /**< (ISC) Histogram Entry 187 */
#define REG_ISC_HIS_ENTRY188    (0xF0008700) /**< (ISC) Histogram Entry 188 */
#define REG_ISC_HIS_ENTRY189    (0xF0008704) /**< (ISC) Histogram Entry 189 */
#define REG_ISC_HIS_ENTRY190    (0xF0008708) /**< (ISC) Histogram Entry 190 */
#define REG_ISC_HIS_ENTRY191    (0xF000870C) /**< (ISC) Histogram Entry 191 */
#define REG_ISC_HIS_ENTRY192    (0xF0008710) /**< (ISC) Histogram Entry 192 */
#define REG_ISC_HIS_ENTRY193    (0xF0008714) /**< (ISC) Histogram Entry 193 */
#define REG_ISC_HIS_ENTRY194    (0xF0008718) /**< (ISC) Histogram Entry 194 */
#define REG_ISC_HIS_ENTRY195    (0xF000871C) /**< (ISC) Histogram Entry 195 */
#define REG_ISC_HIS_ENTRY196    (0xF0008720) /**< (ISC) Histogram Entry 196 */
#define REG_ISC_HIS_ENTRY197    (0xF0008724) /**< (ISC) Histogram Entry 197 */
#define REG_ISC_HIS_ENTRY198    (0xF0008728) /**< (ISC) Histogram Entry 198 */
#define REG_ISC_HIS_ENTRY199    (0xF000872C) /**< (ISC) Histogram Entry 199 */
#define REG_ISC_HIS_ENTRY200    (0xF0008730) /**< (ISC) Histogram Entry 200 */
#define REG_ISC_HIS_ENTRY201    (0xF0008734) /**< (ISC) Histogram Entry 201 */
#define REG_ISC_HIS_ENTRY202    (0xF0008738) /**< (ISC) Histogram Entry 202 */
#define REG_ISC_HIS_ENTRY203    (0xF000873C) /**< (ISC) Histogram Entry 203 */
#define REG_ISC_HIS_ENTRY204    (0xF0008740) /**< (ISC) Histogram Entry 204 */
#define REG_ISC_HIS_ENTRY205    (0xF0008744) /**< (ISC) Histogram Entry 205 */
#define REG_ISC_HIS_ENTRY206    (0xF0008748) /**< (ISC) Histogram Entry 206 */
#define REG_ISC_HIS_ENTRY207    (0xF000874C) /**< (ISC) Histogram Entry 207 */
#define REG_ISC_HIS_ENTRY208    (0xF0008750) /**< (ISC) Histogram Entry 208 */
#define REG_ISC_HIS_ENTRY209    (0xF0008754) /**< (ISC) Histogram Entry 209 */
#define REG_ISC_HIS_ENTRY210    (0xF0008758) /**< (ISC) Histogram Entry 210 */
#define REG_ISC_HIS_ENTRY211    (0xF000875C) /**< (ISC) Histogram Entry 211 */
#define REG_ISC_HIS_ENTRY212    (0xF0008760) /**< (ISC) Histogram Entry 212 */
#define REG_ISC_HIS_ENTRY213    (0xF0008764) /**< (ISC) Histogram Entry 213 */
#define REG_ISC_HIS_ENTRY214    (0xF0008768) /**< (ISC) Histogram Entry 214 */
#define REG_ISC_HIS_ENTRY215    (0xF000876C) /**< (ISC) Histogram Entry 215 */
#define REG_ISC_HIS_ENTRY216    (0xF0008770) /**< (ISC) Histogram Entry 216 */
#define REG_ISC_HIS_ENTRY217    (0xF0008774) /**< (ISC) Histogram Entry 217 */
#define REG_ISC_HIS_ENTRY218    (0xF0008778) /**< (ISC) Histogram Entry 218 */
#define REG_ISC_HIS_ENTRY219    (0xF000877C) /**< (ISC) Histogram Entry 219 */
#define REG_ISC_HIS_ENTRY220    (0xF0008780) /**< (ISC) Histogram Entry 220 */
#define REG_ISC_HIS_ENTRY221    (0xF0008784) /**< (ISC) Histogram Entry 221 */
#define REG_ISC_HIS_ENTRY222    (0xF0008788) /**< (ISC) Histogram Entry 222 */
#define REG_ISC_HIS_ENTRY223    (0xF000878C) /**< (ISC) Histogram Entry 223 */
#define REG_ISC_HIS_ENTRY224    (0xF0008790) /**< (ISC) Histogram Entry 224 */
#define REG_ISC_HIS_ENTRY225    (0xF0008794) /**< (ISC) Histogram Entry 225 */
#define REG_ISC_HIS_ENTRY226    (0xF0008798) /**< (ISC) Histogram Entry 226 */
#define REG_ISC_HIS_ENTRY227    (0xF000879C) /**< (ISC) Histogram Entry 227 */
#define REG_ISC_HIS_ENTRY228    (0xF00087A0) /**< (ISC) Histogram Entry 228 */
#define REG_ISC_HIS_ENTRY229    (0xF00087A4) /**< (ISC) Histogram Entry 229 */
#define REG_ISC_HIS_ENTRY230    (0xF00087A8) /**< (ISC) Histogram Entry 230 */
#define REG_ISC_HIS_ENTRY231    (0xF00087AC) /**< (ISC) Histogram Entry 231 */
#define REG_ISC_HIS_ENTRY232    (0xF00087B0) /**< (ISC) Histogram Entry 232 */
#define REG_ISC_HIS_ENTRY233    (0xF00087B4) /**< (ISC) Histogram Entry 233 */
#define REG_ISC_HIS_ENTRY234    (0xF00087B8) /**< (ISC) Histogram Entry 234 */
#define REG_ISC_HIS_ENTRY235    (0xF00087BC) /**< (ISC) Histogram Entry 235 */
#define REG_ISC_HIS_ENTRY236    (0xF00087C0) /**< (ISC) Histogram Entry 236 */
#define REG_ISC_HIS_ENTRY237    (0xF00087C4) /**< (ISC) Histogram Entry 237 */
#define REG_ISC_HIS_ENTRY238    (0xF00087C8) /**< (ISC) Histogram Entry 238 */
#define REG_ISC_HIS_ENTRY239    (0xF00087CC) /**< (ISC) Histogram Entry 239 */
#define REG_ISC_HIS_ENTRY240    (0xF00087D0) /**< (ISC) Histogram Entry 240 */
#define REG_ISC_HIS_ENTRY241    (0xF00087D4) /**< (ISC) Histogram Entry 241 */
#define REG_ISC_HIS_ENTRY242    (0xF00087D8) /**< (ISC) Histogram Entry 242 */
#define REG_ISC_HIS_ENTRY243    (0xF00087DC) /**< (ISC) Histogram Entry 243 */
#define REG_ISC_HIS_ENTRY244    (0xF00087E0) /**< (ISC) Histogram Entry 244 */
#define REG_ISC_HIS_ENTRY245    (0xF00087E4) /**< (ISC) Histogram Entry 245 */
#define REG_ISC_HIS_ENTRY246    (0xF00087E8) /**< (ISC) Histogram Entry 246 */
#define REG_ISC_HIS_ENTRY247    (0xF00087EC) /**< (ISC) Histogram Entry 247 */
#define REG_ISC_HIS_ENTRY248    (0xF00087F0) /**< (ISC) Histogram Entry 248 */
#define REG_ISC_HIS_ENTRY249    (0xF00087F4) /**< (ISC) Histogram Entry 249 */
#define REG_ISC_HIS_ENTRY250    (0xF00087F8) /**< (ISC) Histogram Entry 250 */
#define REG_ISC_HIS_ENTRY251    (0xF00087FC) /**< (ISC) Histogram Entry 251 */
#define REG_ISC_HIS_ENTRY252    (0xF0008800) /**< (ISC) Histogram Entry 252 */
#define REG_ISC_HIS_ENTRY253    (0xF0008804) /**< (ISC) Histogram Entry 253 */
#define REG_ISC_HIS_ENTRY254    (0xF0008808) /**< (ISC) Histogram Entry 254 */
#define REG_ISC_HIS_ENTRY255    (0xF000880C) /**< (ISC) Histogram Entry 255 */
#define REG_ISC_HIS_ENTRY256    (0xF0008810) /**< (ISC) Histogram Entry 256 */
#define REG_ISC_HIS_ENTRY257    (0xF0008814) /**< (ISC) Histogram Entry 257 */
#define REG_ISC_HIS_ENTRY258    (0xF0008818) /**< (ISC) Histogram Entry 258 */
#define REG_ISC_HIS_ENTRY259    (0xF000881C) /**< (ISC) Histogram Entry 259 */
#define REG_ISC_HIS_ENTRY260    (0xF0008820) /**< (ISC) Histogram Entry 260 */
#define REG_ISC_HIS_ENTRY261    (0xF0008824) /**< (ISC) Histogram Entry 261 */
#define REG_ISC_HIS_ENTRY262    (0xF0008828) /**< (ISC) Histogram Entry 262 */
#define REG_ISC_HIS_ENTRY263    (0xF000882C) /**< (ISC) Histogram Entry 263 */
#define REG_ISC_HIS_ENTRY264    (0xF0008830) /**< (ISC) Histogram Entry 264 */
#define REG_ISC_HIS_ENTRY265    (0xF0008834) /**< (ISC) Histogram Entry 265 */
#define REG_ISC_HIS_ENTRY266    (0xF0008838) /**< (ISC) Histogram Entry 266 */
#define REG_ISC_HIS_ENTRY267    (0xF000883C) /**< (ISC) Histogram Entry 267 */
#define REG_ISC_HIS_ENTRY268    (0xF0008840) /**< (ISC) Histogram Entry 268 */
#define REG_ISC_HIS_ENTRY269    (0xF0008844) /**< (ISC) Histogram Entry 269 */
#define REG_ISC_HIS_ENTRY270    (0xF0008848) /**< (ISC) Histogram Entry 270 */
#define REG_ISC_HIS_ENTRY271    (0xF000884C) /**< (ISC) Histogram Entry 271 */
#define REG_ISC_HIS_ENTRY272    (0xF0008850) /**< (ISC) Histogram Entry 272 */
#define REG_ISC_HIS_ENTRY273    (0xF0008854) /**< (ISC) Histogram Entry 273 */
#define REG_ISC_HIS_ENTRY274    (0xF0008858) /**< (ISC) Histogram Entry 274 */
#define REG_ISC_HIS_ENTRY275    (0xF000885C) /**< (ISC) Histogram Entry 275 */
#define REG_ISC_HIS_ENTRY276    (0xF0008860) /**< (ISC) Histogram Entry 276 */
#define REG_ISC_HIS_ENTRY277    (0xF0008864) /**< (ISC) Histogram Entry 277 */
#define REG_ISC_HIS_ENTRY278    (0xF0008868) /**< (ISC) Histogram Entry 278 */
#define REG_ISC_HIS_ENTRY279    (0xF000886C) /**< (ISC) Histogram Entry 279 */
#define REG_ISC_HIS_ENTRY280    (0xF0008870) /**< (ISC) Histogram Entry 280 */
#define REG_ISC_HIS_ENTRY281    (0xF0008874) /**< (ISC) Histogram Entry 281 */
#define REG_ISC_HIS_ENTRY282    (0xF0008878) /**< (ISC) Histogram Entry 282 */
#define REG_ISC_HIS_ENTRY283    (0xF000887C) /**< (ISC) Histogram Entry 283 */
#define REG_ISC_HIS_ENTRY284    (0xF0008880) /**< (ISC) Histogram Entry 284 */
#define REG_ISC_HIS_ENTRY285    (0xF0008884) /**< (ISC) Histogram Entry 285 */
#define REG_ISC_HIS_ENTRY286    (0xF0008888) /**< (ISC) Histogram Entry 286 */
#define REG_ISC_HIS_ENTRY287    (0xF000888C) /**< (ISC) Histogram Entry 287 */
#define REG_ISC_HIS_ENTRY288    (0xF0008890) /**< (ISC) Histogram Entry 288 */
#define REG_ISC_HIS_ENTRY289    (0xF0008894) /**< (ISC) Histogram Entry 289 */
#define REG_ISC_HIS_ENTRY290    (0xF0008898) /**< (ISC) Histogram Entry 290 */
#define REG_ISC_HIS_ENTRY291    (0xF000889C) /**< (ISC) Histogram Entry 291 */
#define REG_ISC_HIS_ENTRY292    (0xF00088A0) /**< (ISC) Histogram Entry 292 */
#define REG_ISC_HIS_ENTRY293    (0xF00088A4) /**< (ISC) Histogram Entry 293 */
#define REG_ISC_HIS_ENTRY294    (0xF00088A8) /**< (ISC) Histogram Entry 294 */
#define REG_ISC_HIS_ENTRY295    (0xF00088AC) /**< (ISC) Histogram Entry 295 */
#define REG_ISC_HIS_ENTRY296    (0xF00088B0) /**< (ISC) Histogram Entry 296 */
#define REG_ISC_HIS_ENTRY297    (0xF00088B4) /**< (ISC) Histogram Entry 297 */
#define REG_ISC_HIS_ENTRY298    (0xF00088B8) /**< (ISC) Histogram Entry 298 */
#define REG_ISC_HIS_ENTRY299    (0xF00088BC) /**< (ISC) Histogram Entry 299 */
#define REG_ISC_HIS_ENTRY300    (0xF00088C0) /**< (ISC) Histogram Entry 300 */
#define REG_ISC_HIS_ENTRY301    (0xF00088C4) /**< (ISC) Histogram Entry 301 */
#define REG_ISC_HIS_ENTRY302    (0xF00088C8) /**< (ISC) Histogram Entry 302 */
#define REG_ISC_HIS_ENTRY303    (0xF00088CC) /**< (ISC) Histogram Entry 303 */
#define REG_ISC_HIS_ENTRY304    (0xF00088D0) /**< (ISC) Histogram Entry 304 */
#define REG_ISC_HIS_ENTRY305    (0xF00088D4) /**< (ISC) Histogram Entry 305 */
#define REG_ISC_HIS_ENTRY306    (0xF00088D8) /**< (ISC) Histogram Entry 306 */
#define REG_ISC_HIS_ENTRY307    (0xF00088DC) /**< (ISC) Histogram Entry 307 */
#define REG_ISC_HIS_ENTRY308    (0xF00088E0) /**< (ISC) Histogram Entry 308 */
#define REG_ISC_HIS_ENTRY309    (0xF00088E4) /**< (ISC) Histogram Entry 309 */
#define REG_ISC_HIS_ENTRY310    (0xF00088E8) /**< (ISC) Histogram Entry 310 */
#define REG_ISC_HIS_ENTRY311    (0xF00088EC) /**< (ISC) Histogram Entry 311 */
#define REG_ISC_HIS_ENTRY312    (0xF00088F0) /**< (ISC) Histogram Entry 312 */
#define REG_ISC_HIS_ENTRY313    (0xF00088F4) /**< (ISC) Histogram Entry 313 */
#define REG_ISC_HIS_ENTRY314    (0xF00088F8) /**< (ISC) Histogram Entry 314 */
#define REG_ISC_HIS_ENTRY315    (0xF00088FC) /**< (ISC) Histogram Entry 315 */
#define REG_ISC_HIS_ENTRY316    (0xF0008900) /**< (ISC) Histogram Entry 316 */
#define REG_ISC_HIS_ENTRY317    (0xF0008904) /**< (ISC) Histogram Entry 317 */
#define REG_ISC_HIS_ENTRY318    (0xF0008908) /**< (ISC) Histogram Entry 318 */
#define REG_ISC_HIS_ENTRY319    (0xF000890C) /**< (ISC) Histogram Entry 319 */
#define REG_ISC_HIS_ENTRY320    (0xF0008910) /**< (ISC) Histogram Entry 320 */
#define REG_ISC_HIS_ENTRY321    (0xF0008914) /**< (ISC) Histogram Entry 321 */
#define REG_ISC_HIS_ENTRY322    (0xF0008918) /**< (ISC) Histogram Entry 322 */
#define REG_ISC_HIS_ENTRY323    (0xF000891C) /**< (ISC) Histogram Entry 323 */
#define REG_ISC_HIS_ENTRY324    (0xF0008920) /**< (ISC) Histogram Entry 324 */
#define REG_ISC_HIS_ENTRY325    (0xF0008924) /**< (ISC) Histogram Entry 325 */
#define REG_ISC_HIS_ENTRY326    (0xF0008928) /**< (ISC) Histogram Entry 326 */
#define REG_ISC_HIS_ENTRY327    (0xF000892C) /**< (ISC) Histogram Entry 327 */
#define REG_ISC_HIS_ENTRY328    (0xF0008930) /**< (ISC) Histogram Entry 328 */
#define REG_ISC_HIS_ENTRY329    (0xF0008934) /**< (ISC) Histogram Entry 329 */
#define REG_ISC_HIS_ENTRY330    (0xF0008938) /**< (ISC) Histogram Entry 330 */
#define REG_ISC_HIS_ENTRY331    (0xF000893C) /**< (ISC) Histogram Entry 331 */
#define REG_ISC_HIS_ENTRY332    (0xF0008940) /**< (ISC) Histogram Entry 332 */
#define REG_ISC_HIS_ENTRY333    (0xF0008944) /**< (ISC) Histogram Entry 333 */
#define REG_ISC_HIS_ENTRY334    (0xF0008948) /**< (ISC) Histogram Entry 334 */
#define REG_ISC_HIS_ENTRY335    (0xF000894C) /**< (ISC) Histogram Entry 335 */
#define REG_ISC_HIS_ENTRY336    (0xF0008950) /**< (ISC) Histogram Entry 336 */
#define REG_ISC_HIS_ENTRY337    (0xF0008954) /**< (ISC) Histogram Entry 337 */
#define REG_ISC_HIS_ENTRY338    (0xF0008958) /**< (ISC) Histogram Entry 338 */
#define REG_ISC_HIS_ENTRY339    (0xF000895C) /**< (ISC) Histogram Entry 339 */
#define REG_ISC_HIS_ENTRY340    (0xF0008960) /**< (ISC) Histogram Entry 340 */
#define REG_ISC_HIS_ENTRY341    (0xF0008964) /**< (ISC) Histogram Entry 341 */
#define REG_ISC_HIS_ENTRY342    (0xF0008968) /**< (ISC) Histogram Entry 342 */
#define REG_ISC_HIS_ENTRY343    (0xF000896C) /**< (ISC) Histogram Entry 343 */
#define REG_ISC_HIS_ENTRY344    (0xF0008970) /**< (ISC) Histogram Entry 344 */
#define REG_ISC_HIS_ENTRY345    (0xF0008974) /**< (ISC) Histogram Entry 345 */
#define REG_ISC_HIS_ENTRY346    (0xF0008978) /**< (ISC) Histogram Entry 346 */
#define REG_ISC_HIS_ENTRY347    (0xF000897C) /**< (ISC) Histogram Entry 347 */
#define REG_ISC_HIS_ENTRY348    (0xF0008980) /**< (ISC) Histogram Entry 348 */
#define REG_ISC_HIS_ENTRY349    (0xF0008984) /**< (ISC) Histogram Entry 349 */
#define REG_ISC_HIS_ENTRY350    (0xF0008988) /**< (ISC) Histogram Entry 350 */
#define REG_ISC_HIS_ENTRY351    (0xF000898C) /**< (ISC) Histogram Entry 351 */
#define REG_ISC_HIS_ENTRY352    (0xF0008990) /**< (ISC) Histogram Entry 352 */
#define REG_ISC_HIS_ENTRY353    (0xF0008994) /**< (ISC) Histogram Entry 353 */
#define REG_ISC_HIS_ENTRY354    (0xF0008998) /**< (ISC) Histogram Entry 354 */
#define REG_ISC_HIS_ENTRY355    (0xF000899C) /**< (ISC) Histogram Entry 355 */
#define REG_ISC_HIS_ENTRY356    (0xF00089A0) /**< (ISC) Histogram Entry 356 */
#define REG_ISC_HIS_ENTRY357    (0xF00089A4) /**< (ISC) Histogram Entry 357 */
#define REG_ISC_HIS_ENTRY358    (0xF00089A8) /**< (ISC) Histogram Entry 358 */
#define REG_ISC_HIS_ENTRY359    (0xF00089AC) /**< (ISC) Histogram Entry 359 */
#define REG_ISC_HIS_ENTRY360    (0xF00089B0) /**< (ISC) Histogram Entry 360 */
#define REG_ISC_HIS_ENTRY361    (0xF00089B4) /**< (ISC) Histogram Entry 361 */
#define REG_ISC_HIS_ENTRY362    (0xF00089B8) /**< (ISC) Histogram Entry 362 */
#define REG_ISC_HIS_ENTRY363    (0xF00089BC) /**< (ISC) Histogram Entry 363 */
#define REG_ISC_HIS_ENTRY364    (0xF00089C0) /**< (ISC) Histogram Entry 364 */
#define REG_ISC_HIS_ENTRY365    (0xF00089C4) /**< (ISC) Histogram Entry 365 */
#define REG_ISC_HIS_ENTRY366    (0xF00089C8) /**< (ISC) Histogram Entry 366 */
#define REG_ISC_HIS_ENTRY367    (0xF00089CC) /**< (ISC) Histogram Entry 367 */
#define REG_ISC_HIS_ENTRY368    (0xF00089D0) /**< (ISC) Histogram Entry 368 */
#define REG_ISC_HIS_ENTRY369    (0xF00089D4) /**< (ISC) Histogram Entry 369 */
#define REG_ISC_HIS_ENTRY370    (0xF00089D8) /**< (ISC) Histogram Entry 370 */
#define REG_ISC_HIS_ENTRY371    (0xF00089DC) /**< (ISC) Histogram Entry 371 */
#define REG_ISC_HIS_ENTRY372    (0xF00089E0) /**< (ISC) Histogram Entry 372 */
#define REG_ISC_HIS_ENTRY373    (0xF00089E4) /**< (ISC) Histogram Entry 373 */
#define REG_ISC_HIS_ENTRY374    (0xF00089E8) /**< (ISC) Histogram Entry 374 */
#define REG_ISC_HIS_ENTRY375    (0xF00089EC) /**< (ISC) Histogram Entry 375 */
#define REG_ISC_HIS_ENTRY376    (0xF00089F0) /**< (ISC) Histogram Entry 376 */
#define REG_ISC_HIS_ENTRY377    (0xF00089F4) /**< (ISC) Histogram Entry 377 */
#define REG_ISC_HIS_ENTRY378    (0xF00089F8) /**< (ISC) Histogram Entry 378 */
#define REG_ISC_HIS_ENTRY379    (0xF00089FC) /**< (ISC) Histogram Entry 379 */
#define REG_ISC_HIS_ENTRY380    (0xF0008A00) /**< (ISC) Histogram Entry 380 */
#define REG_ISC_HIS_ENTRY381    (0xF0008A04) /**< (ISC) Histogram Entry 381 */
#define REG_ISC_HIS_ENTRY382    (0xF0008A08) /**< (ISC) Histogram Entry 382 */
#define REG_ISC_HIS_ENTRY383    (0xF0008A0C) /**< (ISC) Histogram Entry 383 */
#define REG_ISC_HIS_ENTRY384    (0xF0008A10) /**< (ISC) Histogram Entry 384 */
#define REG_ISC_HIS_ENTRY385    (0xF0008A14) /**< (ISC) Histogram Entry 385 */
#define REG_ISC_HIS_ENTRY386    (0xF0008A18) /**< (ISC) Histogram Entry 386 */
#define REG_ISC_HIS_ENTRY387    (0xF0008A1C) /**< (ISC) Histogram Entry 387 */
#define REG_ISC_HIS_ENTRY388    (0xF0008A20) /**< (ISC) Histogram Entry 388 */
#define REG_ISC_HIS_ENTRY389    (0xF0008A24) /**< (ISC) Histogram Entry 389 */
#define REG_ISC_HIS_ENTRY390    (0xF0008A28) /**< (ISC) Histogram Entry 390 */
#define REG_ISC_HIS_ENTRY391    (0xF0008A2C) /**< (ISC) Histogram Entry 391 */
#define REG_ISC_HIS_ENTRY392    (0xF0008A30) /**< (ISC) Histogram Entry 392 */
#define REG_ISC_HIS_ENTRY393    (0xF0008A34) /**< (ISC) Histogram Entry 393 */
#define REG_ISC_HIS_ENTRY394    (0xF0008A38) /**< (ISC) Histogram Entry 394 */
#define REG_ISC_HIS_ENTRY395    (0xF0008A3C) /**< (ISC) Histogram Entry 395 */
#define REG_ISC_HIS_ENTRY396    (0xF0008A40) /**< (ISC) Histogram Entry 396 */
#define REG_ISC_HIS_ENTRY397    (0xF0008A44) /**< (ISC) Histogram Entry 397 */
#define REG_ISC_HIS_ENTRY398    (0xF0008A48) /**< (ISC) Histogram Entry 398 */
#define REG_ISC_HIS_ENTRY399    (0xF0008A4C) /**< (ISC) Histogram Entry 399 */
#define REG_ISC_HIS_ENTRY400    (0xF0008A50) /**< (ISC) Histogram Entry 400 */
#define REG_ISC_HIS_ENTRY401    (0xF0008A54) /**< (ISC) Histogram Entry 401 */
#define REG_ISC_HIS_ENTRY402    (0xF0008A58) /**< (ISC) Histogram Entry 402 */
#define REG_ISC_HIS_ENTRY403    (0xF0008A5C) /**< (ISC) Histogram Entry 403 */
#define REG_ISC_HIS_ENTRY404    (0xF0008A60) /**< (ISC) Histogram Entry 404 */
#define REG_ISC_HIS_ENTRY405    (0xF0008A64) /**< (ISC) Histogram Entry 405 */
#define REG_ISC_HIS_ENTRY406    (0xF0008A68) /**< (ISC) Histogram Entry 406 */
#define REG_ISC_HIS_ENTRY407    (0xF0008A6C) /**< (ISC) Histogram Entry 407 */
#define REG_ISC_HIS_ENTRY408    (0xF0008A70) /**< (ISC) Histogram Entry 408 */
#define REG_ISC_HIS_ENTRY409    (0xF0008A74) /**< (ISC) Histogram Entry 409 */
#define REG_ISC_HIS_ENTRY410    (0xF0008A78) /**< (ISC) Histogram Entry 410 */
#define REG_ISC_HIS_ENTRY411    (0xF0008A7C) /**< (ISC) Histogram Entry 411 */
#define REG_ISC_HIS_ENTRY412    (0xF0008A80) /**< (ISC) Histogram Entry 412 */
#define REG_ISC_HIS_ENTRY413    (0xF0008A84) /**< (ISC) Histogram Entry 413 */
#define REG_ISC_HIS_ENTRY414    (0xF0008A88) /**< (ISC) Histogram Entry 414 */
#define REG_ISC_HIS_ENTRY415    (0xF0008A8C) /**< (ISC) Histogram Entry 415 */
#define REG_ISC_HIS_ENTRY416    (0xF0008A90) /**< (ISC) Histogram Entry 416 */
#define REG_ISC_HIS_ENTRY417    (0xF0008A94) /**< (ISC) Histogram Entry 417 */
#define REG_ISC_HIS_ENTRY418    (0xF0008A98) /**< (ISC) Histogram Entry 418 */
#define REG_ISC_HIS_ENTRY419    (0xF0008A9C) /**< (ISC) Histogram Entry 419 */
#define REG_ISC_HIS_ENTRY420    (0xF0008AA0) /**< (ISC) Histogram Entry 420 */
#define REG_ISC_HIS_ENTRY421    (0xF0008AA4) /**< (ISC) Histogram Entry 421 */
#define REG_ISC_HIS_ENTRY422    (0xF0008AA8) /**< (ISC) Histogram Entry 422 */
#define REG_ISC_HIS_ENTRY423    (0xF0008AAC) /**< (ISC) Histogram Entry 423 */
#define REG_ISC_HIS_ENTRY424    (0xF0008AB0) /**< (ISC) Histogram Entry 424 */
#define REG_ISC_HIS_ENTRY425    (0xF0008AB4) /**< (ISC) Histogram Entry 425 */
#define REG_ISC_HIS_ENTRY426    (0xF0008AB8) /**< (ISC) Histogram Entry 426 */
#define REG_ISC_HIS_ENTRY427    (0xF0008ABC) /**< (ISC) Histogram Entry 427 */
#define REG_ISC_HIS_ENTRY428    (0xF0008AC0) /**< (ISC) Histogram Entry 428 */
#define REG_ISC_HIS_ENTRY429    (0xF0008AC4) /**< (ISC) Histogram Entry 429 */
#define REG_ISC_HIS_ENTRY430    (0xF0008AC8) /**< (ISC) Histogram Entry 430 */
#define REG_ISC_HIS_ENTRY431    (0xF0008ACC) /**< (ISC) Histogram Entry 431 */
#define REG_ISC_HIS_ENTRY432    (0xF0008AD0) /**< (ISC) Histogram Entry 432 */
#define REG_ISC_HIS_ENTRY433    (0xF0008AD4) /**< (ISC) Histogram Entry 433 */
#define REG_ISC_HIS_ENTRY434    (0xF0008AD8) /**< (ISC) Histogram Entry 434 */
#define REG_ISC_HIS_ENTRY435    (0xF0008ADC) /**< (ISC) Histogram Entry 435 */
#define REG_ISC_HIS_ENTRY436    (0xF0008AE0) /**< (ISC) Histogram Entry 436 */
#define REG_ISC_HIS_ENTRY437    (0xF0008AE4) /**< (ISC) Histogram Entry 437 */
#define REG_ISC_HIS_ENTRY438    (0xF0008AE8) /**< (ISC) Histogram Entry 438 */
#define REG_ISC_HIS_ENTRY439    (0xF0008AEC) /**< (ISC) Histogram Entry 439 */
#define REG_ISC_HIS_ENTRY440    (0xF0008AF0) /**< (ISC) Histogram Entry 440 */
#define REG_ISC_HIS_ENTRY441    (0xF0008AF4) /**< (ISC) Histogram Entry 441 */
#define REG_ISC_HIS_ENTRY442    (0xF0008AF8) /**< (ISC) Histogram Entry 442 */
#define REG_ISC_HIS_ENTRY443    (0xF0008AFC) /**< (ISC) Histogram Entry 443 */
#define REG_ISC_HIS_ENTRY444    (0xF0008B00) /**< (ISC) Histogram Entry 444 */
#define REG_ISC_HIS_ENTRY445    (0xF0008B04) /**< (ISC) Histogram Entry 445 */
#define REG_ISC_HIS_ENTRY446    (0xF0008B08) /**< (ISC) Histogram Entry 446 */
#define REG_ISC_HIS_ENTRY447    (0xF0008B0C) /**< (ISC) Histogram Entry 447 */
#define REG_ISC_HIS_ENTRY448    (0xF0008B10) /**< (ISC) Histogram Entry 448 */
#define REG_ISC_HIS_ENTRY449    (0xF0008B14) /**< (ISC) Histogram Entry 449 */
#define REG_ISC_HIS_ENTRY450    (0xF0008B18) /**< (ISC) Histogram Entry 450 */
#define REG_ISC_HIS_ENTRY451    (0xF0008B1C) /**< (ISC) Histogram Entry 451 */
#define REG_ISC_HIS_ENTRY452    (0xF0008B20) /**< (ISC) Histogram Entry 452 */
#define REG_ISC_HIS_ENTRY453    (0xF0008B24) /**< (ISC) Histogram Entry 453 */
#define REG_ISC_HIS_ENTRY454    (0xF0008B28) /**< (ISC) Histogram Entry 454 */
#define REG_ISC_HIS_ENTRY455    (0xF0008B2C) /**< (ISC) Histogram Entry 455 */
#define REG_ISC_HIS_ENTRY456    (0xF0008B30) /**< (ISC) Histogram Entry 456 */
#define REG_ISC_HIS_ENTRY457    (0xF0008B34) /**< (ISC) Histogram Entry 457 */
#define REG_ISC_HIS_ENTRY458    (0xF0008B38) /**< (ISC) Histogram Entry 458 */
#define REG_ISC_HIS_ENTRY459    (0xF0008B3C) /**< (ISC) Histogram Entry 459 */
#define REG_ISC_HIS_ENTRY460    (0xF0008B40) /**< (ISC) Histogram Entry 460 */
#define REG_ISC_HIS_ENTRY461    (0xF0008B44) /**< (ISC) Histogram Entry 461 */
#define REG_ISC_HIS_ENTRY462    (0xF0008B48) /**< (ISC) Histogram Entry 462 */
#define REG_ISC_HIS_ENTRY463    (0xF0008B4C) /**< (ISC) Histogram Entry 463 */
#define REG_ISC_HIS_ENTRY464    (0xF0008B50) /**< (ISC) Histogram Entry 464 */
#define REG_ISC_HIS_ENTRY465    (0xF0008B54) /**< (ISC) Histogram Entry 465 */
#define REG_ISC_HIS_ENTRY466    (0xF0008B58) /**< (ISC) Histogram Entry 466 */
#define REG_ISC_HIS_ENTRY467    (0xF0008B5C) /**< (ISC) Histogram Entry 467 */
#define REG_ISC_HIS_ENTRY468    (0xF0008B60) /**< (ISC) Histogram Entry 468 */
#define REG_ISC_HIS_ENTRY469    (0xF0008B64) /**< (ISC) Histogram Entry 469 */
#define REG_ISC_HIS_ENTRY470    (0xF0008B68) /**< (ISC) Histogram Entry 470 */
#define REG_ISC_HIS_ENTRY471    (0xF0008B6C) /**< (ISC) Histogram Entry 471 */
#define REG_ISC_HIS_ENTRY472    (0xF0008B70) /**< (ISC) Histogram Entry 472 */
#define REG_ISC_HIS_ENTRY473    (0xF0008B74) /**< (ISC) Histogram Entry 473 */
#define REG_ISC_HIS_ENTRY474    (0xF0008B78) /**< (ISC) Histogram Entry 474 */
#define REG_ISC_HIS_ENTRY475    (0xF0008B7C) /**< (ISC) Histogram Entry 475 */
#define REG_ISC_HIS_ENTRY476    (0xF0008B80) /**< (ISC) Histogram Entry 476 */
#define REG_ISC_HIS_ENTRY477    (0xF0008B84) /**< (ISC) Histogram Entry 477 */
#define REG_ISC_HIS_ENTRY478    (0xF0008B88) /**< (ISC) Histogram Entry 478 */
#define REG_ISC_HIS_ENTRY479    (0xF0008B8C) /**< (ISC) Histogram Entry 479 */
#define REG_ISC_HIS_ENTRY480    (0xF0008B90) /**< (ISC) Histogram Entry 480 */
#define REG_ISC_HIS_ENTRY481    (0xF0008B94) /**< (ISC) Histogram Entry 481 */
#define REG_ISC_HIS_ENTRY482    (0xF0008B98) /**< (ISC) Histogram Entry 482 */
#define REG_ISC_HIS_ENTRY483    (0xF0008B9C) /**< (ISC) Histogram Entry 483 */
#define REG_ISC_HIS_ENTRY484    (0xF0008BA0) /**< (ISC) Histogram Entry 484 */
#define REG_ISC_HIS_ENTRY485    (0xF0008BA4) /**< (ISC) Histogram Entry 485 */
#define REG_ISC_HIS_ENTRY486    (0xF0008BA8) /**< (ISC) Histogram Entry 486 */
#define REG_ISC_HIS_ENTRY487    (0xF0008BAC) /**< (ISC) Histogram Entry 487 */
#define REG_ISC_HIS_ENTRY488    (0xF0008BB0) /**< (ISC) Histogram Entry 488 */
#define REG_ISC_HIS_ENTRY489    (0xF0008BB4) /**< (ISC) Histogram Entry 489 */
#define REG_ISC_HIS_ENTRY490    (0xF0008BB8) /**< (ISC) Histogram Entry 490 */
#define REG_ISC_HIS_ENTRY491    (0xF0008BBC) /**< (ISC) Histogram Entry 491 */
#define REG_ISC_HIS_ENTRY492    (0xF0008BC0) /**< (ISC) Histogram Entry 492 */
#define REG_ISC_HIS_ENTRY493    (0xF0008BC4) /**< (ISC) Histogram Entry 493 */
#define REG_ISC_HIS_ENTRY494    (0xF0008BC8) /**< (ISC) Histogram Entry 494 */
#define REG_ISC_HIS_ENTRY495    (0xF0008BCC) /**< (ISC) Histogram Entry 495 */
#define REG_ISC_HIS_ENTRY496    (0xF0008BD0) /**< (ISC) Histogram Entry 496 */
#define REG_ISC_HIS_ENTRY497    (0xF0008BD4) /**< (ISC) Histogram Entry 497 */
#define REG_ISC_HIS_ENTRY498    (0xF0008BD8) /**< (ISC) Histogram Entry 498 */
#define REG_ISC_HIS_ENTRY499    (0xF0008BDC) /**< (ISC) Histogram Entry 499 */
#define REG_ISC_HIS_ENTRY500    (0xF0008BE0) /**< (ISC) Histogram Entry 500 */
#define REG_ISC_HIS_ENTRY501    (0xF0008BE4) /**< (ISC) Histogram Entry 501 */
#define REG_ISC_HIS_ENTRY502    (0xF0008BE8) /**< (ISC) Histogram Entry 502 */
#define REG_ISC_HIS_ENTRY503    (0xF0008BEC) /**< (ISC) Histogram Entry 503 */
#define REG_ISC_HIS_ENTRY504    (0xF0008BF0) /**< (ISC) Histogram Entry 504 */
#define REG_ISC_HIS_ENTRY505    (0xF0008BF4) /**< (ISC) Histogram Entry 505 */
#define REG_ISC_HIS_ENTRY506    (0xF0008BF8) /**< (ISC) Histogram Entry 506 */
#define REG_ISC_HIS_ENTRY507    (0xF0008BFC) /**< (ISC) Histogram Entry 507 */
#define REG_ISC_HIS_ENTRY508    (0xF0008C00) /**< (ISC) Histogram Entry 508 */
#define REG_ISC_HIS_ENTRY509    (0xF0008C04) /**< (ISC) Histogram Entry 509 */
#define REG_ISC_HIS_ENTRY510    (0xF0008C08) /**< (ISC) Histogram Entry 510 */
#define REG_ISC_HIS_ENTRY511    (0xF0008C0C) /**< (ISC) Histogram Entry 511 */

#else

#define REG_ISC_DAD0            (*(__IO uint32_t*)0xF00083ECU) /**< (ISC) DMA Address 0 Register 0 */
#define REG_ISC_DST0            (*(__IO uint32_t*)0xF00083F0U) /**< (ISC) DMA Stride 0 Register 0 */
#define REG_ISC_DAD1            (*(__IO uint32_t*)0xF00083F4U) /**< (ISC) DMA Address 0 Register 1 */
#define REG_ISC_DST1            (*(__IO uint32_t*)0xF00083F8U) /**< (ISC) DMA Stride 0 Register 1 */
#define REG_ISC_DAD2            (*(__IO uint32_t*)0xF00083FCU) /**< (ISC) DMA Address 0 Register 2 */
#define REG_ISC_DST2            (*(__IO uint32_t*)0xF0008400U) /**< (ISC) DMA Stride 0 Register 2 */
#define REG_ISC_CTRLEN          (*(__O  uint32_t*)0xF0008000U) /**< (ISC) Control Enable Register */
#define REG_ISC_CTRLDIS         (*(__O  uint32_t*)0xF0008004U) /**< (ISC) Control Disable Register */
#define REG_ISC_CTRLSR          (*(__I  uint32_t*)0xF0008008U) /**< (ISC) Control Status Register */
#define REG_ISC_PFE_CFG0        (*(__IO uint32_t*)0xF000800CU) /**< (ISC) Parallel Front End Configuration 0 Register */
#define REG_ISC_PFE_CFG1        (*(__IO uint32_t*)0xF0008010U) /**< (ISC) Parallel Front End Configuration 1 Register */
#define REG_ISC_PFE_CFG2        (*(__IO uint32_t*)0xF0008014U) /**< (ISC) Parallel Front End Configuration 2 Register */
#define REG_ISC_CLKEN           (*(__O  uint32_t*)0xF0008018U) /**< (ISC) Clock Enable Register */
#define REG_ISC_CLKDIS          (*(__O  uint32_t*)0xF000801CU) /**< (ISC) Clock Disable Register */
#define REG_ISC_CLKSR           (*(__I  uint32_t*)0xF0008020U) /**< (ISC) Clock Status Register */
#define REG_ISC_CLKCFG          (*(__IO uint32_t*)0xF0008024U) /**< (ISC) Clock Configuration Register */
#define REG_ISC_INTEN           (*(__O  uint32_t*)0xF0008028U) /**< (ISC) Interrupt Enable Register */
#define REG_ISC_INTDIS          (*(__O  uint32_t*)0xF000802CU) /**< (ISC) Interrupt Disable Register */
#define REG_ISC_INTMASK         (*(__I  uint32_t*)0xF0008030U) /**< (ISC) Interrupt Mask Register */
#define REG_ISC_INTSR           (*(__I  uint32_t*)0xF0008034U) /**< (ISC) Interrupt Status Register */
#define REG_ISC_WB_CTRL         (*(__IO uint32_t*)0xF0008058U) /**< (ISC) White Balance Control Register */
#define REG_ISC_WB_CFG          (*(__IO uint32_t*)0xF000805CU) /**< (ISC) White Balance Configuration Register */
#define REG_ISC_WB_O_RGR        (*(__IO uint32_t*)0xF0008060U) /**< (ISC) White Balance Offset for R, GR Register */
#define REG_ISC_WB_O_BGB        (*(__IO uint32_t*)0xF0008064U) /**< (ISC) White Balance Offset for B, GB Register */
#define REG_ISC_WB_G_RGR        (*(__IO uint32_t*)0xF0008068U) /**< (ISC) White Balance Gain for R, GR Register */
#define REG_ISC_WB_G_BGB        (*(__IO uint32_t*)0xF000806CU) /**< (ISC) White Balance Gain for B, GB Register */
#define REG_ISC_CFA_CTRL        (*(__IO uint32_t*)0xF0008070U) /**< (ISC) Color Filter Array Control Register */
#define REG_ISC_CFA_CFG         (*(__IO uint32_t*)0xF0008074U) /**< (ISC) Color Filter Array Configuration Register */
#define REG_ISC_CC_CTRL         (*(__IO uint32_t*)0xF0008078U) /**< (ISC) Color Correction Control Register */
#define REG_ISC_CC_RR_RG        (*(__IO uint32_t*)0xF000807CU) /**< (ISC) Color Correction RR RG Register */
#define REG_ISC_CC_RB_OR        (*(__IO uint32_t*)0xF0008080U) /**< (ISC) Color Correction RB OR Register */
#define REG_ISC_CC_GR_GG        (*(__IO uint32_t*)0xF0008084U) /**< (ISC) Color Correction GR GG Register */
#define REG_ISC_CC_GB_OG        (*(__IO uint32_t*)0xF0008088U) /**< (ISC) Color Correction GB OG Register */
#define REG_ISC_CC_BR_BG        (*(__IO uint32_t*)0xF000808CU) /**< (ISC) Color Correction BR BG Register */
#define REG_ISC_CC_BB_OB        (*(__IO uint32_t*)0xF0008090U) /**< (ISC) Color Correction BB OB Register */
#define REG_ISC_GAM_CTRL        (*(__IO uint32_t*)0xF0008094U) /**< (ISC) Gamma Correction Control Register */
#define REG_ISC_GAM_BENTRY      (*(__IO uint32_t*)0xF0008098U) /**< (ISC) Gamma Correction Blue Entry */
#define REG_ISC_GAM_BENTRY0     (*(__IO uint32_t*)0xF0008098U) /**< (ISC) Gamma Correction Blue Entry 0 */
#define REG_ISC_GAM_BENTRY1     (*(__IO uint32_t*)0xF000809CU) /**< (ISC) Gamma Correction Blue Entry 1 */
#define REG_ISC_GAM_BENTRY2     (*(__IO uint32_t*)0xF00080A0U) /**< (ISC) Gamma Correction Blue Entry 2 */
#define REG_ISC_GAM_BENTRY3     (*(__IO uint32_t*)0xF00080A4U) /**< (ISC) Gamma Correction Blue Entry 3 */
#define REG_ISC_GAM_BENTRY4     (*(__IO uint32_t*)0xF00080A8U) /**< (ISC) Gamma Correction Blue Entry 4 */
#define REG_ISC_GAM_BENTRY5     (*(__IO uint32_t*)0xF00080ACU) /**< (ISC) Gamma Correction Blue Entry 5 */
#define REG_ISC_GAM_BENTRY6     (*(__IO uint32_t*)0xF00080B0U) /**< (ISC) Gamma Correction Blue Entry 6 */
#define REG_ISC_GAM_BENTRY7     (*(__IO uint32_t*)0xF00080B4U) /**< (ISC) Gamma Correction Blue Entry 7 */
#define REG_ISC_GAM_BENTRY8     (*(__IO uint32_t*)0xF00080B8U) /**< (ISC) Gamma Correction Blue Entry 8 */
#define REG_ISC_GAM_BENTRY9     (*(__IO uint32_t*)0xF00080BCU) /**< (ISC) Gamma Correction Blue Entry 9 */
#define REG_ISC_GAM_BENTRY10    (*(__IO uint32_t*)0xF00080C0U) /**< (ISC) Gamma Correction Blue Entry 10 */
#define REG_ISC_GAM_BENTRY11    (*(__IO uint32_t*)0xF00080C4U) /**< (ISC) Gamma Correction Blue Entry 11 */
#define REG_ISC_GAM_BENTRY12    (*(__IO uint32_t*)0xF00080C8U) /**< (ISC) Gamma Correction Blue Entry 12 */
#define REG_ISC_GAM_BENTRY13    (*(__IO uint32_t*)0xF00080CCU) /**< (ISC) Gamma Correction Blue Entry 13 */
#define REG_ISC_GAM_BENTRY14    (*(__IO uint32_t*)0xF00080D0U) /**< (ISC) Gamma Correction Blue Entry 14 */
#define REG_ISC_GAM_BENTRY15    (*(__IO uint32_t*)0xF00080D4U) /**< (ISC) Gamma Correction Blue Entry 15 */
#define REG_ISC_GAM_BENTRY16    (*(__IO uint32_t*)0xF00080D8U) /**< (ISC) Gamma Correction Blue Entry 16 */
#define REG_ISC_GAM_BENTRY17    (*(__IO uint32_t*)0xF00080DCU) /**< (ISC) Gamma Correction Blue Entry 17 */
#define REG_ISC_GAM_BENTRY18    (*(__IO uint32_t*)0xF00080E0U) /**< (ISC) Gamma Correction Blue Entry 18 */
#define REG_ISC_GAM_BENTRY19    (*(__IO uint32_t*)0xF00080E4U) /**< (ISC) Gamma Correction Blue Entry 19 */
#define REG_ISC_GAM_BENTRY20    (*(__IO uint32_t*)0xF00080E8U) /**< (ISC) Gamma Correction Blue Entry 20 */
#define REG_ISC_GAM_BENTRY21    (*(__IO uint32_t*)0xF00080ECU) /**< (ISC) Gamma Correction Blue Entry 21 */
#define REG_ISC_GAM_BENTRY22    (*(__IO uint32_t*)0xF00080F0U) /**< (ISC) Gamma Correction Blue Entry 22 */
#define REG_ISC_GAM_BENTRY23    (*(__IO uint32_t*)0xF00080F4U) /**< (ISC) Gamma Correction Blue Entry 23 */
#define REG_ISC_GAM_BENTRY24    (*(__IO uint32_t*)0xF00080F8U) /**< (ISC) Gamma Correction Blue Entry 24 */
#define REG_ISC_GAM_BENTRY25    (*(__IO uint32_t*)0xF00080FCU) /**< (ISC) Gamma Correction Blue Entry 25 */
#define REG_ISC_GAM_BENTRY26    (*(__IO uint32_t*)0xF0008100U) /**< (ISC) Gamma Correction Blue Entry 26 */
#define REG_ISC_GAM_BENTRY27    (*(__IO uint32_t*)0xF0008104U) /**< (ISC) Gamma Correction Blue Entry 27 */
#define REG_ISC_GAM_BENTRY28    (*(__IO uint32_t*)0xF0008108U) /**< (ISC) Gamma Correction Blue Entry 28 */
#define REG_ISC_GAM_BENTRY29    (*(__IO uint32_t*)0xF000810CU) /**< (ISC) Gamma Correction Blue Entry 29 */
#define REG_ISC_GAM_BENTRY30    (*(__IO uint32_t*)0xF0008110U) /**< (ISC) Gamma Correction Blue Entry 30 */
#define REG_ISC_GAM_BENTRY31    (*(__IO uint32_t*)0xF0008114U) /**< (ISC) Gamma Correction Blue Entry 31 */
#define REG_ISC_GAM_BENTRY32    (*(__IO uint32_t*)0xF0008118U) /**< (ISC) Gamma Correction Blue Entry 32 */
#define REG_ISC_GAM_BENTRY33    (*(__IO uint32_t*)0xF000811CU) /**< (ISC) Gamma Correction Blue Entry 33 */
#define REG_ISC_GAM_BENTRY34    (*(__IO uint32_t*)0xF0008120U) /**< (ISC) Gamma Correction Blue Entry 34 */
#define REG_ISC_GAM_BENTRY35    (*(__IO uint32_t*)0xF0008124U) /**< (ISC) Gamma Correction Blue Entry 35 */
#define REG_ISC_GAM_BENTRY36    (*(__IO uint32_t*)0xF0008128U) /**< (ISC) Gamma Correction Blue Entry 36 */
#define REG_ISC_GAM_BENTRY37    (*(__IO uint32_t*)0xF000812CU) /**< (ISC) Gamma Correction Blue Entry 37 */
#define REG_ISC_GAM_BENTRY38    (*(__IO uint32_t*)0xF0008130U) /**< (ISC) Gamma Correction Blue Entry 38 */
#define REG_ISC_GAM_BENTRY39    (*(__IO uint32_t*)0xF0008134U) /**< (ISC) Gamma Correction Blue Entry 39 */
#define REG_ISC_GAM_BENTRY40    (*(__IO uint32_t*)0xF0008138U) /**< (ISC) Gamma Correction Blue Entry 40 */
#define REG_ISC_GAM_BENTRY41    (*(__IO uint32_t*)0xF000813CU) /**< (ISC) Gamma Correction Blue Entry 41 */
#define REG_ISC_GAM_BENTRY42    (*(__IO uint32_t*)0xF0008140U) /**< (ISC) Gamma Correction Blue Entry 42 */
#define REG_ISC_GAM_BENTRY43    (*(__IO uint32_t*)0xF0008144U) /**< (ISC) Gamma Correction Blue Entry 43 */
#define REG_ISC_GAM_BENTRY44    (*(__IO uint32_t*)0xF0008148U) /**< (ISC) Gamma Correction Blue Entry 44 */
#define REG_ISC_GAM_BENTRY45    (*(__IO uint32_t*)0xF000814CU) /**< (ISC) Gamma Correction Blue Entry 45 */
#define REG_ISC_GAM_BENTRY46    (*(__IO uint32_t*)0xF0008150U) /**< (ISC) Gamma Correction Blue Entry 46 */
#define REG_ISC_GAM_BENTRY47    (*(__IO uint32_t*)0xF0008154U) /**< (ISC) Gamma Correction Blue Entry 47 */
#define REG_ISC_GAM_BENTRY48    (*(__IO uint32_t*)0xF0008158U) /**< (ISC) Gamma Correction Blue Entry 48 */
#define REG_ISC_GAM_BENTRY49    (*(__IO uint32_t*)0xF000815CU) /**< (ISC) Gamma Correction Blue Entry 49 */
#define REG_ISC_GAM_BENTRY50    (*(__IO uint32_t*)0xF0008160U) /**< (ISC) Gamma Correction Blue Entry 50 */
#define REG_ISC_GAM_BENTRY51    (*(__IO uint32_t*)0xF0008164U) /**< (ISC) Gamma Correction Blue Entry 51 */
#define REG_ISC_GAM_BENTRY52    (*(__IO uint32_t*)0xF0008168U) /**< (ISC) Gamma Correction Blue Entry 52 */
#define REG_ISC_GAM_BENTRY53    (*(__IO uint32_t*)0xF000816CU) /**< (ISC) Gamma Correction Blue Entry 53 */
#define REG_ISC_GAM_BENTRY54    (*(__IO uint32_t*)0xF0008170U) /**< (ISC) Gamma Correction Blue Entry 54 */
#define REG_ISC_GAM_BENTRY55    (*(__IO uint32_t*)0xF0008174U) /**< (ISC) Gamma Correction Blue Entry 55 */
#define REG_ISC_GAM_BENTRY56    (*(__IO uint32_t*)0xF0008178U) /**< (ISC) Gamma Correction Blue Entry 56 */
#define REG_ISC_GAM_BENTRY57    (*(__IO uint32_t*)0xF000817CU) /**< (ISC) Gamma Correction Blue Entry 57 */
#define REG_ISC_GAM_BENTRY58    (*(__IO uint32_t*)0xF0008180U) /**< (ISC) Gamma Correction Blue Entry 58 */
#define REG_ISC_GAM_BENTRY59    (*(__IO uint32_t*)0xF0008184U) /**< (ISC) Gamma Correction Blue Entry 59 */
#define REG_ISC_GAM_BENTRY60    (*(__IO uint32_t*)0xF0008188U) /**< (ISC) Gamma Correction Blue Entry 60 */
#define REG_ISC_GAM_BENTRY61    (*(__IO uint32_t*)0xF000818CU) /**< (ISC) Gamma Correction Blue Entry 61 */
#define REG_ISC_GAM_BENTRY62    (*(__IO uint32_t*)0xF0008190U) /**< (ISC) Gamma Correction Blue Entry 62 */
#define REG_ISC_GAM_BENTRY63    (*(__IO uint32_t*)0xF0008194U) /**< (ISC) Gamma Correction Blue Entry 63 */
#define REG_ISC_GAM_GENTRY      (*(__IO uint32_t*)0xF0008198U) /**< (ISC) Gamma Correction Green Entry */
#define REG_ISC_GAM_GENTRY0     (*(__IO uint32_t*)0xF0008198U) /**< (ISC) Gamma Correction Green Entry 0 */
#define REG_ISC_GAM_GENTRY1     (*(__IO uint32_t*)0xF000819CU) /**< (ISC) Gamma Correction Green Entry 1 */
#define REG_ISC_GAM_GENTRY2     (*(__IO uint32_t*)0xF00081A0U) /**< (ISC) Gamma Correction Green Entry 2 */
#define REG_ISC_GAM_GENTRY3     (*(__IO uint32_t*)0xF00081A4U) /**< (ISC) Gamma Correction Green Entry 3 */
#define REG_ISC_GAM_GENTRY4     (*(__IO uint32_t*)0xF00081A8U) /**< (ISC) Gamma Correction Green Entry 4 */
#define REG_ISC_GAM_GENTRY5     (*(__IO uint32_t*)0xF00081ACU) /**< (ISC) Gamma Correction Green Entry 5 */
#define REG_ISC_GAM_GENTRY6     (*(__IO uint32_t*)0xF00081B0U) /**< (ISC) Gamma Correction Green Entry 6 */
#define REG_ISC_GAM_GENTRY7     (*(__IO uint32_t*)0xF00081B4U) /**< (ISC) Gamma Correction Green Entry 7 */
#define REG_ISC_GAM_GENTRY8     (*(__IO uint32_t*)0xF00081B8U) /**< (ISC) Gamma Correction Green Entry 8 */
#define REG_ISC_GAM_GENTRY9     (*(__IO uint32_t*)0xF00081BCU) /**< (ISC) Gamma Correction Green Entry 9 */
#define REG_ISC_GAM_GENTRY10    (*(__IO uint32_t*)0xF00081C0U) /**< (ISC) Gamma Correction Green Entry 10 */
#define REG_ISC_GAM_GENTRY11    (*(__IO uint32_t*)0xF00081C4U) /**< (ISC) Gamma Correction Green Entry 11 */
#define REG_ISC_GAM_GENTRY12    (*(__IO uint32_t*)0xF00081C8U) /**< (ISC) Gamma Correction Green Entry 12 */
#define REG_ISC_GAM_GENTRY13    (*(__IO uint32_t*)0xF00081CCU) /**< (ISC) Gamma Correction Green Entry 13 */
#define REG_ISC_GAM_GENTRY14    (*(__IO uint32_t*)0xF00081D0U) /**< (ISC) Gamma Correction Green Entry 14 */
#define REG_ISC_GAM_GENTRY15    (*(__IO uint32_t*)0xF00081D4U) /**< (ISC) Gamma Correction Green Entry 15 */
#define REG_ISC_GAM_GENTRY16    (*(__IO uint32_t*)0xF00081D8U) /**< (ISC) Gamma Correction Green Entry 16 */
#define REG_ISC_GAM_GENTRY17    (*(__IO uint32_t*)0xF00081DCU) /**< (ISC) Gamma Correction Green Entry 17 */
#define REG_ISC_GAM_GENTRY18    (*(__IO uint32_t*)0xF00081E0U) /**< (ISC) Gamma Correction Green Entry 18 */
#define REG_ISC_GAM_GENTRY19    (*(__IO uint32_t*)0xF00081E4U) /**< (ISC) Gamma Correction Green Entry 19 */
#define REG_ISC_GAM_GENTRY20    (*(__IO uint32_t*)0xF00081E8U) /**< (ISC) Gamma Correction Green Entry 20 */
#define REG_ISC_GAM_GENTRY21    (*(__IO uint32_t*)0xF00081ECU) /**< (ISC) Gamma Correction Green Entry 21 */
#define REG_ISC_GAM_GENTRY22    (*(__IO uint32_t*)0xF00081F0U) /**< (ISC) Gamma Correction Green Entry 22 */
#define REG_ISC_GAM_GENTRY23    (*(__IO uint32_t*)0xF00081F4U) /**< (ISC) Gamma Correction Green Entry 23 */
#define REG_ISC_GAM_GENTRY24    (*(__IO uint32_t*)0xF00081F8U) /**< (ISC) Gamma Correction Green Entry 24 */
#define REG_ISC_GAM_GENTRY25    (*(__IO uint32_t*)0xF00081FCU) /**< (ISC) Gamma Correction Green Entry 25 */
#define REG_ISC_GAM_GENTRY26    (*(__IO uint32_t*)0xF0008200U) /**< (ISC) Gamma Correction Green Entry 26 */
#define REG_ISC_GAM_GENTRY27    (*(__IO uint32_t*)0xF0008204U) /**< (ISC) Gamma Correction Green Entry 27 */
#define REG_ISC_GAM_GENTRY28    (*(__IO uint32_t*)0xF0008208U) /**< (ISC) Gamma Correction Green Entry 28 */
#define REG_ISC_GAM_GENTRY29    (*(__IO uint32_t*)0xF000820CU) /**< (ISC) Gamma Correction Green Entry 29 */
#define REG_ISC_GAM_GENTRY30    (*(__IO uint32_t*)0xF0008210U) /**< (ISC) Gamma Correction Green Entry 30 */
#define REG_ISC_GAM_GENTRY31    (*(__IO uint32_t*)0xF0008214U) /**< (ISC) Gamma Correction Green Entry 31 */
#define REG_ISC_GAM_GENTRY32    (*(__IO uint32_t*)0xF0008218U) /**< (ISC) Gamma Correction Green Entry 32 */
#define REG_ISC_GAM_GENTRY33    (*(__IO uint32_t*)0xF000821CU) /**< (ISC) Gamma Correction Green Entry 33 */
#define REG_ISC_GAM_GENTRY34    (*(__IO uint32_t*)0xF0008220U) /**< (ISC) Gamma Correction Green Entry 34 */
#define REG_ISC_GAM_GENTRY35    (*(__IO uint32_t*)0xF0008224U) /**< (ISC) Gamma Correction Green Entry 35 */
#define REG_ISC_GAM_GENTRY36    (*(__IO uint32_t*)0xF0008228U) /**< (ISC) Gamma Correction Green Entry 36 */
#define REG_ISC_GAM_GENTRY37    (*(__IO uint32_t*)0xF000822CU) /**< (ISC) Gamma Correction Green Entry 37 */
#define REG_ISC_GAM_GENTRY38    (*(__IO uint32_t*)0xF0008230U) /**< (ISC) Gamma Correction Green Entry 38 */
#define REG_ISC_GAM_GENTRY39    (*(__IO uint32_t*)0xF0008234U) /**< (ISC) Gamma Correction Green Entry 39 */
#define REG_ISC_GAM_GENTRY40    (*(__IO uint32_t*)0xF0008238U) /**< (ISC) Gamma Correction Green Entry 40 */
#define REG_ISC_GAM_GENTRY41    (*(__IO uint32_t*)0xF000823CU) /**< (ISC) Gamma Correction Green Entry 41 */
#define REG_ISC_GAM_GENTRY42    (*(__IO uint32_t*)0xF0008240U) /**< (ISC) Gamma Correction Green Entry 42 */
#define REG_ISC_GAM_GENTRY43    (*(__IO uint32_t*)0xF0008244U) /**< (ISC) Gamma Correction Green Entry 43 */
#define REG_ISC_GAM_GENTRY44    (*(__IO uint32_t*)0xF0008248U) /**< (ISC) Gamma Correction Green Entry 44 */
#define REG_ISC_GAM_GENTRY45    (*(__IO uint32_t*)0xF000824CU) /**< (ISC) Gamma Correction Green Entry 45 */
#define REG_ISC_GAM_GENTRY46    (*(__IO uint32_t*)0xF0008250U) /**< (ISC) Gamma Correction Green Entry 46 */
#define REG_ISC_GAM_GENTRY47    (*(__IO uint32_t*)0xF0008254U) /**< (ISC) Gamma Correction Green Entry 47 */
#define REG_ISC_GAM_GENTRY48    (*(__IO uint32_t*)0xF0008258U) /**< (ISC) Gamma Correction Green Entry 48 */
#define REG_ISC_GAM_GENTRY49    (*(__IO uint32_t*)0xF000825CU) /**< (ISC) Gamma Correction Green Entry 49 */
#define REG_ISC_GAM_GENTRY50    (*(__IO uint32_t*)0xF0008260U) /**< (ISC) Gamma Correction Green Entry 50 */
#define REG_ISC_GAM_GENTRY51    (*(__IO uint32_t*)0xF0008264U) /**< (ISC) Gamma Correction Green Entry 51 */
#define REG_ISC_GAM_GENTRY52    (*(__IO uint32_t*)0xF0008268U) /**< (ISC) Gamma Correction Green Entry 52 */
#define REG_ISC_GAM_GENTRY53    (*(__IO uint32_t*)0xF000826CU) /**< (ISC) Gamma Correction Green Entry 53 */
#define REG_ISC_GAM_GENTRY54    (*(__IO uint32_t*)0xF0008270U) /**< (ISC) Gamma Correction Green Entry 54 */
#define REG_ISC_GAM_GENTRY55    (*(__IO uint32_t*)0xF0008274U) /**< (ISC) Gamma Correction Green Entry 55 */
#define REG_ISC_GAM_GENTRY56    (*(__IO uint32_t*)0xF0008278U) /**< (ISC) Gamma Correction Green Entry 56 */
#define REG_ISC_GAM_GENTRY57    (*(__IO uint32_t*)0xF000827CU) /**< (ISC) Gamma Correction Green Entry 57 */
#define REG_ISC_GAM_GENTRY58    (*(__IO uint32_t*)0xF0008280U) /**< (ISC) Gamma Correction Green Entry 58 */
#define REG_ISC_GAM_GENTRY59    (*(__IO uint32_t*)0xF0008284U) /**< (ISC) Gamma Correction Green Entry 59 */
#define REG_ISC_GAM_GENTRY60    (*(__IO uint32_t*)0xF0008288U) /**< (ISC) Gamma Correction Green Entry 60 */
#define REG_ISC_GAM_GENTRY61    (*(__IO uint32_t*)0xF000828CU) /**< (ISC) Gamma Correction Green Entry 61 */
#define REG_ISC_GAM_GENTRY62    (*(__IO uint32_t*)0xF0008290U) /**< (ISC) Gamma Correction Green Entry 62 */
#define REG_ISC_GAM_GENTRY63    (*(__IO uint32_t*)0xF0008294U) /**< (ISC) Gamma Correction Green Entry 63 */
#define REG_ISC_GAM_RENTRY      (*(__IO uint32_t*)0xF0008298U) /**< (ISC) Gamma Correction Red Entry */
#define REG_ISC_GAM_RENTRY0     (*(__IO uint32_t*)0xF0008298U) /**< (ISC) Gamma Correction Red Entry 0 */
#define REG_ISC_GAM_RENTRY1     (*(__IO uint32_t*)0xF000829CU) /**< (ISC) Gamma Correction Red Entry 1 */
#define REG_ISC_GAM_RENTRY2     (*(__IO uint32_t*)0xF00082A0U) /**< (ISC) Gamma Correction Red Entry 2 */
#define REG_ISC_GAM_RENTRY3     (*(__IO uint32_t*)0xF00082A4U) /**< (ISC) Gamma Correction Red Entry 3 */
#define REG_ISC_GAM_RENTRY4     (*(__IO uint32_t*)0xF00082A8U) /**< (ISC) Gamma Correction Red Entry 4 */
#define REG_ISC_GAM_RENTRY5     (*(__IO uint32_t*)0xF00082ACU) /**< (ISC) Gamma Correction Red Entry 5 */
#define REG_ISC_GAM_RENTRY6     (*(__IO uint32_t*)0xF00082B0U) /**< (ISC) Gamma Correction Red Entry 6 */
#define REG_ISC_GAM_RENTRY7     (*(__IO uint32_t*)0xF00082B4U) /**< (ISC) Gamma Correction Red Entry 7 */
#define REG_ISC_GAM_RENTRY8     (*(__IO uint32_t*)0xF00082B8U) /**< (ISC) Gamma Correction Red Entry 8 */
#define REG_ISC_GAM_RENTRY9     (*(__IO uint32_t*)0xF00082BCU) /**< (ISC) Gamma Correction Red Entry 9 */
#define REG_ISC_GAM_RENTRY10    (*(__IO uint32_t*)0xF00082C0U) /**< (ISC) Gamma Correction Red Entry 10 */
#define REG_ISC_GAM_RENTRY11    (*(__IO uint32_t*)0xF00082C4U) /**< (ISC) Gamma Correction Red Entry 11 */
#define REG_ISC_GAM_RENTRY12    (*(__IO uint32_t*)0xF00082C8U) /**< (ISC) Gamma Correction Red Entry 12 */
#define REG_ISC_GAM_RENTRY13    (*(__IO uint32_t*)0xF00082CCU) /**< (ISC) Gamma Correction Red Entry 13 */
#define REG_ISC_GAM_RENTRY14    (*(__IO uint32_t*)0xF00082D0U) /**< (ISC) Gamma Correction Red Entry 14 */
#define REG_ISC_GAM_RENTRY15    (*(__IO uint32_t*)0xF00082D4U) /**< (ISC) Gamma Correction Red Entry 15 */
#define REG_ISC_GAM_RENTRY16    (*(__IO uint32_t*)0xF00082D8U) /**< (ISC) Gamma Correction Red Entry 16 */
#define REG_ISC_GAM_RENTRY17    (*(__IO uint32_t*)0xF00082DCU) /**< (ISC) Gamma Correction Red Entry 17 */
#define REG_ISC_GAM_RENTRY18    (*(__IO uint32_t*)0xF00082E0U) /**< (ISC) Gamma Correction Red Entry 18 */
#define REG_ISC_GAM_RENTRY19    (*(__IO uint32_t*)0xF00082E4U) /**< (ISC) Gamma Correction Red Entry 19 */
#define REG_ISC_GAM_RENTRY20    (*(__IO uint32_t*)0xF00082E8U) /**< (ISC) Gamma Correction Red Entry 20 */
#define REG_ISC_GAM_RENTRY21    (*(__IO uint32_t*)0xF00082ECU) /**< (ISC) Gamma Correction Red Entry 21 */
#define REG_ISC_GAM_RENTRY22    (*(__IO uint32_t*)0xF00082F0U) /**< (ISC) Gamma Correction Red Entry 22 */
#define REG_ISC_GAM_RENTRY23    (*(__IO uint32_t*)0xF00082F4U) /**< (ISC) Gamma Correction Red Entry 23 */
#define REG_ISC_GAM_RENTRY24    (*(__IO uint32_t*)0xF00082F8U) /**< (ISC) Gamma Correction Red Entry 24 */
#define REG_ISC_GAM_RENTRY25    (*(__IO uint32_t*)0xF00082FCU) /**< (ISC) Gamma Correction Red Entry 25 */
#define REG_ISC_GAM_RENTRY26    (*(__IO uint32_t*)0xF0008300U) /**< (ISC) Gamma Correction Red Entry 26 */
#define REG_ISC_GAM_RENTRY27    (*(__IO uint32_t*)0xF0008304U) /**< (ISC) Gamma Correction Red Entry 27 */
#define REG_ISC_GAM_RENTRY28    (*(__IO uint32_t*)0xF0008308U) /**< (ISC) Gamma Correction Red Entry 28 */
#define REG_ISC_GAM_RENTRY29    (*(__IO uint32_t*)0xF000830CU) /**< (ISC) Gamma Correction Red Entry 29 */
#define REG_ISC_GAM_RENTRY30    (*(__IO uint32_t*)0xF0008310U) /**< (ISC) Gamma Correction Red Entry 30 */
#define REG_ISC_GAM_RENTRY31    (*(__IO uint32_t*)0xF0008314U) /**< (ISC) Gamma Correction Red Entry 31 */
#define REG_ISC_GAM_RENTRY32    (*(__IO uint32_t*)0xF0008318U) /**< (ISC) Gamma Correction Red Entry 32 */
#define REG_ISC_GAM_RENTRY33    (*(__IO uint32_t*)0xF000831CU) /**< (ISC) Gamma Correction Red Entry 33 */
#define REG_ISC_GAM_RENTRY34    (*(__IO uint32_t*)0xF0008320U) /**< (ISC) Gamma Correction Red Entry 34 */
#define REG_ISC_GAM_RENTRY35    (*(__IO uint32_t*)0xF0008324U) /**< (ISC) Gamma Correction Red Entry 35 */
#define REG_ISC_GAM_RENTRY36    (*(__IO uint32_t*)0xF0008328U) /**< (ISC) Gamma Correction Red Entry 36 */
#define REG_ISC_GAM_RENTRY37    (*(__IO uint32_t*)0xF000832CU) /**< (ISC) Gamma Correction Red Entry 37 */
#define REG_ISC_GAM_RENTRY38    (*(__IO uint32_t*)0xF0008330U) /**< (ISC) Gamma Correction Red Entry 38 */
#define REG_ISC_GAM_RENTRY39    (*(__IO uint32_t*)0xF0008334U) /**< (ISC) Gamma Correction Red Entry 39 */
#define REG_ISC_GAM_RENTRY40    (*(__IO uint32_t*)0xF0008338U) /**< (ISC) Gamma Correction Red Entry 40 */
#define REG_ISC_GAM_RENTRY41    (*(__IO uint32_t*)0xF000833CU) /**< (ISC) Gamma Correction Red Entry 41 */
#define REG_ISC_GAM_RENTRY42    (*(__IO uint32_t*)0xF0008340U) /**< (ISC) Gamma Correction Red Entry 42 */
#define REG_ISC_GAM_RENTRY43    (*(__IO uint32_t*)0xF0008344U) /**< (ISC) Gamma Correction Red Entry 43 */
#define REG_ISC_GAM_RENTRY44    (*(__IO uint32_t*)0xF0008348U) /**< (ISC) Gamma Correction Red Entry 44 */
#define REG_ISC_GAM_RENTRY45    (*(__IO uint32_t*)0xF000834CU) /**< (ISC) Gamma Correction Red Entry 45 */
#define REG_ISC_GAM_RENTRY46    (*(__IO uint32_t*)0xF0008350U) /**< (ISC) Gamma Correction Red Entry 46 */
#define REG_ISC_GAM_RENTRY47    (*(__IO uint32_t*)0xF0008354U) /**< (ISC) Gamma Correction Red Entry 47 */
#define REG_ISC_GAM_RENTRY48    (*(__IO uint32_t*)0xF0008358U) /**< (ISC) Gamma Correction Red Entry 48 */
#define REG_ISC_GAM_RENTRY49    (*(__IO uint32_t*)0xF000835CU) /**< (ISC) Gamma Correction Red Entry 49 */
#define REG_ISC_GAM_RENTRY50    (*(__IO uint32_t*)0xF0008360U) /**< (ISC) Gamma Correction Red Entry 50 */
#define REG_ISC_GAM_RENTRY51    (*(__IO uint32_t*)0xF0008364U) /**< (ISC) Gamma Correction Red Entry 51 */
#define REG_ISC_GAM_RENTRY52    (*(__IO uint32_t*)0xF0008368U) /**< (ISC) Gamma Correction Red Entry 52 */
#define REG_ISC_GAM_RENTRY53    (*(__IO uint32_t*)0xF000836CU) /**< (ISC) Gamma Correction Red Entry 53 */
#define REG_ISC_GAM_RENTRY54    (*(__IO uint32_t*)0xF0008370U) /**< (ISC) Gamma Correction Red Entry 54 */
#define REG_ISC_GAM_RENTRY55    (*(__IO uint32_t*)0xF0008374U) /**< (ISC) Gamma Correction Red Entry 55 */
#define REG_ISC_GAM_RENTRY56    (*(__IO uint32_t*)0xF0008378U) /**< (ISC) Gamma Correction Red Entry 56 */
#define REG_ISC_GAM_RENTRY57    (*(__IO uint32_t*)0xF000837CU) /**< (ISC) Gamma Correction Red Entry 57 */
#define REG_ISC_GAM_RENTRY58    (*(__IO uint32_t*)0xF0008380U) /**< (ISC) Gamma Correction Red Entry 58 */
#define REG_ISC_GAM_RENTRY59    (*(__IO uint32_t*)0xF0008384U) /**< (ISC) Gamma Correction Red Entry 59 */
#define REG_ISC_GAM_RENTRY60    (*(__IO uint32_t*)0xF0008388U) /**< (ISC) Gamma Correction Red Entry 60 */
#define REG_ISC_GAM_RENTRY61    (*(__IO uint32_t*)0xF000838CU) /**< (ISC) Gamma Correction Red Entry 61 */
#define REG_ISC_GAM_RENTRY62    (*(__IO uint32_t*)0xF0008390U) /**< (ISC) Gamma Correction Red Entry 62 */
#define REG_ISC_GAM_RENTRY63    (*(__IO uint32_t*)0xF0008394U) /**< (ISC) Gamma Correction Red Entry 63 */
#define REG_ISC_CSC_CTRL        (*(__IO uint32_t*)0xF0008398U) /**< (ISC) Color Space Conversion Control Register */
#define REG_ISC_CSC_YR_YG       (*(__IO uint32_t*)0xF000839CU) /**< (ISC) Color Space Conversion YR, YG Register */
#define REG_ISC_CSC_YB_OY       (*(__IO uint32_t*)0xF00083A0U) /**< (ISC) Color Space Conversion YB, OY Register */
#define REG_ISC_CSC_CBR_CBG     (*(__IO uint32_t*)0xF00083A4U) /**< (ISC) Color Space Conversion CBR CBG Register */
#define REG_ISC_CSC_CBB_OCB     (*(__IO uint32_t*)0xF00083A8U) /**< (ISC) Color Space Conversion CBB OCB Register */
#define REG_ISC_CSC_CRR_CRG     (*(__IO uint32_t*)0xF00083ACU) /**< (ISC) Color Space Conversion CRR CRG Register */
#define REG_ISC_CSC_CRB_OCR     (*(__IO uint32_t*)0xF00083B0U) /**< (ISC) Color Space Conversion CRB OCR Register */
#define REG_ISC_CBC_CTRL        (*(__IO uint32_t*)0xF00083B4U) /**< (ISC) Contrast and Brightness Control Register */
#define REG_ISC_CBC_CFG         (*(__IO uint32_t*)0xF00083B8U) /**< (ISC) Contrast and Brightness Configuration Register */
#define REG_ISC_CBC_BRIGHT      (*(__IO uint32_t*)0xF00083BCU) /**< (ISC) Contrast and Brightness, Brightness Register */
#define REG_ISC_CBC_CONTRAST    (*(__IO uint32_t*)0xF00083C0U) /**< (ISC) Contrast and Brightness, Contrast Register */
#define REG_ISC_SUB422_CTRL     (*(__IO uint32_t*)0xF00083C4U) /**< (ISC) Subsampling 4:4:4 to 4:2:2 Control Register */
#define REG_ISC_SUB422_CFG      (*(__IO uint32_t*)0xF00083C8U) /**< (ISC) Subsampling 4:4:4 to 4:2:2 Configuration Register */
#define REG_ISC_SUB420_CTRL     (*(__IO uint32_t*)0xF00083CCU) /**< (ISC) Subsampling 4:2:2 to 4:2:0 Control Register */
#define REG_ISC_RLP_CFG         (*(__IO uint32_t*)0xF00083D0U) /**< (ISC) Rounding, Limiting and Packing Configuration Register */
#define REG_ISC_HIS_CTRL        (*(__IO uint32_t*)0xF00083D4U) /**< (ISC) Histogram Control Register */
#define REG_ISC_HIS_CFG         (*(__IO uint32_t*)0xF00083D8U) /**< (ISC) Histogram Configuration Register */
#define REG_ISC_DCFG            (*(__IO uint32_t*)0xF00083E0U) /**< (ISC) DMA Configuration Register */
#define REG_ISC_DCTRL           (*(__IO uint32_t*)0xF00083E4U) /**< (ISC) DMA Control Register */
#define REG_ISC_DNDA            (*(__IO uint32_t*)0xF00083E8U) /**< (ISC) DMA Descriptor Address Register */
#define REG_ISC_HIS_ENTRY       (*(__I  uint32_t*)0xF0008410U) /**< (ISC) Histogram Entry */
#define REG_ISC_HIS_ENTRY0      (*(__I  uint32_t*)0xF0008410U) /**< (ISC) Histogram Entry 0 */
#define REG_ISC_HIS_ENTRY1      (*(__I  uint32_t*)0xF0008414U) /**< (ISC) Histogram Entry 1 */
#define REG_ISC_HIS_ENTRY2      (*(__I  uint32_t*)0xF0008418U) /**< (ISC) Histogram Entry 2 */
#define REG_ISC_HIS_ENTRY3      (*(__I  uint32_t*)0xF000841CU) /**< (ISC) Histogram Entry 3 */
#define REG_ISC_HIS_ENTRY4      (*(__I  uint32_t*)0xF0008420U) /**< (ISC) Histogram Entry 4 */
#define REG_ISC_HIS_ENTRY5      (*(__I  uint32_t*)0xF0008424U) /**< (ISC) Histogram Entry 5 */
#define REG_ISC_HIS_ENTRY6      (*(__I  uint32_t*)0xF0008428U) /**< (ISC) Histogram Entry 6 */
#define REG_ISC_HIS_ENTRY7      (*(__I  uint32_t*)0xF000842CU) /**< (ISC) Histogram Entry 7 */
#define REG_ISC_HIS_ENTRY8      (*(__I  uint32_t*)0xF0008430U) /**< (ISC) Histogram Entry 8 */
#define REG_ISC_HIS_ENTRY9      (*(__I  uint32_t*)0xF0008434U) /**< (ISC) Histogram Entry 9 */
#define REG_ISC_HIS_ENTRY10     (*(__I  uint32_t*)0xF0008438U) /**< (ISC) Histogram Entry 10 */
#define REG_ISC_HIS_ENTRY11     (*(__I  uint32_t*)0xF000843CU) /**< (ISC) Histogram Entry 11 */
#define REG_ISC_HIS_ENTRY12     (*(__I  uint32_t*)0xF0008440U) /**< (ISC) Histogram Entry 12 */
#define REG_ISC_HIS_ENTRY13     (*(__I  uint32_t*)0xF0008444U) /**< (ISC) Histogram Entry 13 */
#define REG_ISC_HIS_ENTRY14     (*(__I  uint32_t*)0xF0008448U) /**< (ISC) Histogram Entry 14 */
#define REG_ISC_HIS_ENTRY15     (*(__I  uint32_t*)0xF000844CU) /**< (ISC) Histogram Entry 15 */
#define REG_ISC_HIS_ENTRY16     (*(__I  uint32_t*)0xF0008450U) /**< (ISC) Histogram Entry 16 */
#define REG_ISC_HIS_ENTRY17     (*(__I  uint32_t*)0xF0008454U) /**< (ISC) Histogram Entry 17 */
#define REG_ISC_HIS_ENTRY18     (*(__I  uint32_t*)0xF0008458U) /**< (ISC) Histogram Entry 18 */
#define REG_ISC_HIS_ENTRY19     (*(__I  uint32_t*)0xF000845CU) /**< (ISC) Histogram Entry 19 */
#define REG_ISC_HIS_ENTRY20     (*(__I  uint32_t*)0xF0008460U) /**< (ISC) Histogram Entry 20 */
#define REG_ISC_HIS_ENTRY21     (*(__I  uint32_t*)0xF0008464U) /**< (ISC) Histogram Entry 21 */
#define REG_ISC_HIS_ENTRY22     (*(__I  uint32_t*)0xF0008468U) /**< (ISC) Histogram Entry 22 */
#define REG_ISC_HIS_ENTRY23     (*(__I  uint32_t*)0xF000846CU) /**< (ISC) Histogram Entry 23 */
#define REG_ISC_HIS_ENTRY24     (*(__I  uint32_t*)0xF0008470U) /**< (ISC) Histogram Entry 24 */
#define REG_ISC_HIS_ENTRY25     (*(__I  uint32_t*)0xF0008474U) /**< (ISC) Histogram Entry 25 */
#define REG_ISC_HIS_ENTRY26     (*(__I  uint32_t*)0xF0008478U) /**< (ISC) Histogram Entry 26 */
#define REG_ISC_HIS_ENTRY27     (*(__I  uint32_t*)0xF000847CU) /**< (ISC) Histogram Entry 27 */
#define REG_ISC_HIS_ENTRY28     (*(__I  uint32_t*)0xF0008480U) /**< (ISC) Histogram Entry 28 */
#define REG_ISC_HIS_ENTRY29     (*(__I  uint32_t*)0xF0008484U) /**< (ISC) Histogram Entry 29 */
#define REG_ISC_HIS_ENTRY30     (*(__I  uint32_t*)0xF0008488U) /**< (ISC) Histogram Entry 30 */
#define REG_ISC_HIS_ENTRY31     (*(__I  uint32_t*)0xF000848CU) /**< (ISC) Histogram Entry 31 */
#define REG_ISC_HIS_ENTRY32     (*(__I  uint32_t*)0xF0008490U) /**< (ISC) Histogram Entry 32 */
#define REG_ISC_HIS_ENTRY33     (*(__I  uint32_t*)0xF0008494U) /**< (ISC) Histogram Entry 33 */
#define REG_ISC_HIS_ENTRY34     (*(__I  uint32_t*)0xF0008498U) /**< (ISC) Histogram Entry 34 */
#define REG_ISC_HIS_ENTRY35     (*(__I  uint32_t*)0xF000849CU) /**< (ISC) Histogram Entry 35 */
#define REG_ISC_HIS_ENTRY36     (*(__I  uint32_t*)0xF00084A0U) /**< (ISC) Histogram Entry 36 */
#define REG_ISC_HIS_ENTRY37     (*(__I  uint32_t*)0xF00084A4U) /**< (ISC) Histogram Entry 37 */
#define REG_ISC_HIS_ENTRY38     (*(__I  uint32_t*)0xF00084A8U) /**< (ISC) Histogram Entry 38 */
#define REG_ISC_HIS_ENTRY39     (*(__I  uint32_t*)0xF00084ACU) /**< (ISC) Histogram Entry 39 */
#define REG_ISC_HIS_ENTRY40     (*(__I  uint32_t*)0xF00084B0U) /**< (ISC) Histogram Entry 40 */
#define REG_ISC_HIS_ENTRY41     (*(__I  uint32_t*)0xF00084B4U) /**< (ISC) Histogram Entry 41 */
#define REG_ISC_HIS_ENTRY42     (*(__I  uint32_t*)0xF00084B8U) /**< (ISC) Histogram Entry 42 */
#define REG_ISC_HIS_ENTRY43     (*(__I  uint32_t*)0xF00084BCU) /**< (ISC) Histogram Entry 43 */
#define REG_ISC_HIS_ENTRY44     (*(__I  uint32_t*)0xF00084C0U) /**< (ISC) Histogram Entry 44 */
#define REG_ISC_HIS_ENTRY45     (*(__I  uint32_t*)0xF00084C4U) /**< (ISC) Histogram Entry 45 */
#define REG_ISC_HIS_ENTRY46     (*(__I  uint32_t*)0xF00084C8U) /**< (ISC) Histogram Entry 46 */
#define REG_ISC_HIS_ENTRY47     (*(__I  uint32_t*)0xF00084CCU) /**< (ISC) Histogram Entry 47 */
#define REG_ISC_HIS_ENTRY48     (*(__I  uint32_t*)0xF00084D0U) /**< (ISC) Histogram Entry 48 */
#define REG_ISC_HIS_ENTRY49     (*(__I  uint32_t*)0xF00084D4U) /**< (ISC) Histogram Entry 49 */
#define REG_ISC_HIS_ENTRY50     (*(__I  uint32_t*)0xF00084D8U) /**< (ISC) Histogram Entry 50 */
#define REG_ISC_HIS_ENTRY51     (*(__I  uint32_t*)0xF00084DCU) /**< (ISC) Histogram Entry 51 */
#define REG_ISC_HIS_ENTRY52     (*(__I  uint32_t*)0xF00084E0U) /**< (ISC) Histogram Entry 52 */
#define REG_ISC_HIS_ENTRY53     (*(__I  uint32_t*)0xF00084E4U) /**< (ISC) Histogram Entry 53 */
#define REG_ISC_HIS_ENTRY54     (*(__I  uint32_t*)0xF00084E8U) /**< (ISC) Histogram Entry 54 */
#define REG_ISC_HIS_ENTRY55     (*(__I  uint32_t*)0xF00084ECU) /**< (ISC) Histogram Entry 55 */
#define REG_ISC_HIS_ENTRY56     (*(__I  uint32_t*)0xF00084F0U) /**< (ISC) Histogram Entry 56 */
#define REG_ISC_HIS_ENTRY57     (*(__I  uint32_t*)0xF00084F4U) /**< (ISC) Histogram Entry 57 */
#define REG_ISC_HIS_ENTRY58     (*(__I  uint32_t*)0xF00084F8U) /**< (ISC) Histogram Entry 58 */
#define REG_ISC_HIS_ENTRY59     (*(__I  uint32_t*)0xF00084FCU) /**< (ISC) Histogram Entry 59 */
#define REG_ISC_HIS_ENTRY60     (*(__I  uint32_t*)0xF0008500U) /**< (ISC) Histogram Entry 60 */
#define REG_ISC_HIS_ENTRY61     (*(__I  uint32_t*)0xF0008504U) /**< (ISC) Histogram Entry 61 */
#define REG_ISC_HIS_ENTRY62     (*(__I  uint32_t*)0xF0008508U) /**< (ISC) Histogram Entry 62 */
#define REG_ISC_HIS_ENTRY63     (*(__I  uint32_t*)0xF000850CU) /**< (ISC) Histogram Entry 63 */
#define REG_ISC_HIS_ENTRY64     (*(__I  uint32_t*)0xF0008510U) /**< (ISC) Histogram Entry 64 */
#define REG_ISC_HIS_ENTRY65     (*(__I  uint32_t*)0xF0008514U) /**< (ISC) Histogram Entry 65 */
#define REG_ISC_HIS_ENTRY66     (*(__I  uint32_t*)0xF0008518U) /**< (ISC) Histogram Entry 66 */
#define REG_ISC_HIS_ENTRY67     (*(__I  uint32_t*)0xF000851CU) /**< (ISC) Histogram Entry 67 */
#define REG_ISC_HIS_ENTRY68     (*(__I  uint32_t*)0xF0008520U) /**< (ISC) Histogram Entry 68 */
#define REG_ISC_HIS_ENTRY69     (*(__I  uint32_t*)0xF0008524U) /**< (ISC) Histogram Entry 69 */
#define REG_ISC_HIS_ENTRY70     (*(__I  uint32_t*)0xF0008528U) /**< (ISC) Histogram Entry 70 */
#define REG_ISC_HIS_ENTRY71     (*(__I  uint32_t*)0xF000852CU) /**< (ISC) Histogram Entry 71 */
#define REG_ISC_HIS_ENTRY72     (*(__I  uint32_t*)0xF0008530U) /**< (ISC) Histogram Entry 72 */
#define REG_ISC_HIS_ENTRY73     (*(__I  uint32_t*)0xF0008534U) /**< (ISC) Histogram Entry 73 */
#define REG_ISC_HIS_ENTRY74     (*(__I  uint32_t*)0xF0008538U) /**< (ISC) Histogram Entry 74 */
#define REG_ISC_HIS_ENTRY75     (*(__I  uint32_t*)0xF000853CU) /**< (ISC) Histogram Entry 75 */
#define REG_ISC_HIS_ENTRY76     (*(__I  uint32_t*)0xF0008540U) /**< (ISC) Histogram Entry 76 */
#define REG_ISC_HIS_ENTRY77     (*(__I  uint32_t*)0xF0008544U) /**< (ISC) Histogram Entry 77 */
#define REG_ISC_HIS_ENTRY78     (*(__I  uint32_t*)0xF0008548U) /**< (ISC) Histogram Entry 78 */
#define REG_ISC_HIS_ENTRY79     (*(__I  uint32_t*)0xF000854CU) /**< (ISC) Histogram Entry 79 */
#define REG_ISC_HIS_ENTRY80     (*(__I  uint32_t*)0xF0008550U) /**< (ISC) Histogram Entry 80 */
#define REG_ISC_HIS_ENTRY81     (*(__I  uint32_t*)0xF0008554U) /**< (ISC) Histogram Entry 81 */
#define REG_ISC_HIS_ENTRY82     (*(__I  uint32_t*)0xF0008558U) /**< (ISC) Histogram Entry 82 */
#define REG_ISC_HIS_ENTRY83     (*(__I  uint32_t*)0xF000855CU) /**< (ISC) Histogram Entry 83 */
#define REG_ISC_HIS_ENTRY84     (*(__I  uint32_t*)0xF0008560U) /**< (ISC) Histogram Entry 84 */
#define REG_ISC_HIS_ENTRY85     (*(__I  uint32_t*)0xF0008564U) /**< (ISC) Histogram Entry 85 */
#define REG_ISC_HIS_ENTRY86     (*(__I  uint32_t*)0xF0008568U) /**< (ISC) Histogram Entry 86 */
#define REG_ISC_HIS_ENTRY87     (*(__I  uint32_t*)0xF000856CU) /**< (ISC) Histogram Entry 87 */
#define REG_ISC_HIS_ENTRY88     (*(__I  uint32_t*)0xF0008570U) /**< (ISC) Histogram Entry 88 */
#define REG_ISC_HIS_ENTRY89     (*(__I  uint32_t*)0xF0008574U) /**< (ISC) Histogram Entry 89 */
#define REG_ISC_HIS_ENTRY90     (*(__I  uint32_t*)0xF0008578U) /**< (ISC) Histogram Entry 90 */
#define REG_ISC_HIS_ENTRY91     (*(__I  uint32_t*)0xF000857CU) /**< (ISC) Histogram Entry 91 */
#define REG_ISC_HIS_ENTRY92     (*(__I  uint32_t*)0xF0008580U) /**< (ISC) Histogram Entry 92 */
#define REG_ISC_HIS_ENTRY93     (*(__I  uint32_t*)0xF0008584U) /**< (ISC) Histogram Entry 93 */
#define REG_ISC_HIS_ENTRY94     (*(__I  uint32_t*)0xF0008588U) /**< (ISC) Histogram Entry 94 */
#define REG_ISC_HIS_ENTRY95     (*(__I  uint32_t*)0xF000858CU) /**< (ISC) Histogram Entry 95 */
#define REG_ISC_HIS_ENTRY96     (*(__I  uint32_t*)0xF0008590U) /**< (ISC) Histogram Entry 96 */
#define REG_ISC_HIS_ENTRY97     (*(__I  uint32_t*)0xF0008594U) /**< (ISC) Histogram Entry 97 */
#define REG_ISC_HIS_ENTRY98     (*(__I  uint32_t*)0xF0008598U) /**< (ISC) Histogram Entry 98 */
#define REG_ISC_HIS_ENTRY99     (*(__I  uint32_t*)0xF000859CU) /**< (ISC) Histogram Entry 99 */
#define REG_ISC_HIS_ENTRY100    (*(__I  uint32_t*)0xF00085A0U) /**< (ISC) Histogram Entry 100 */
#define REG_ISC_HIS_ENTRY101    (*(__I  uint32_t*)0xF00085A4U) /**< (ISC) Histogram Entry 101 */
#define REG_ISC_HIS_ENTRY102    (*(__I  uint32_t*)0xF00085A8U) /**< (ISC) Histogram Entry 102 */
#define REG_ISC_HIS_ENTRY103    (*(__I  uint32_t*)0xF00085ACU) /**< (ISC) Histogram Entry 103 */
#define REG_ISC_HIS_ENTRY104    (*(__I  uint32_t*)0xF00085B0U) /**< (ISC) Histogram Entry 104 */
#define REG_ISC_HIS_ENTRY105    (*(__I  uint32_t*)0xF00085B4U) /**< (ISC) Histogram Entry 105 */
#define REG_ISC_HIS_ENTRY106    (*(__I  uint32_t*)0xF00085B8U) /**< (ISC) Histogram Entry 106 */
#define REG_ISC_HIS_ENTRY107    (*(__I  uint32_t*)0xF00085BCU) /**< (ISC) Histogram Entry 107 */
#define REG_ISC_HIS_ENTRY108    (*(__I  uint32_t*)0xF00085C0U) /**< (ISC) Histogram Entry 108 */
#define REG_ISC_HIS_ENTRY109    (*(__I  uint32_t*)0xF00085C4U) /**< (ISC) Histogram Entry 109 */
#define REG_ISC_HIS_ENTRY110    (*(__I  uint32_t*)0xF00085C8U) /**< (ISC) Histogram Entry 110 */
#define REG_ISC_HIS_ENTRY111    (*(__I  uint32_t*)0xF00085CCU) /**< (ISC) Histogram Entry 111 */
#define REG_ISC_HIS_ENTRY112    (*(__I  uint32_t*)0xF00085D0U) /**< (ISC) Histogram Entry 112 */
#define REG_ISC_HIS_ENTRY113    (*(__I  uint32_t*)0xF00085D4U) /**< (ISC) Histogram Entry 113 */
#define REG_ISC_HIS_ENTRY114    (*(__I  uint32_t*)0xF00085D8U) /**< (ISC) Histogram Entry 114 */
#define REG_ISC_HIS_ENTRY115    (*(__I  uint32_t*)0xF00085DCU) /**< (ISC) Histogram Entry 115 */
#define REG_ISC_HIS_ENTRY116    (*(__I  uint32_t*)0xF00085E0U) /**< (ISC) Histogram Entry 116 */
#define REG_ISC_HIS_ENTRY117    (*(__I  uint32_t*)0xF00085E4U) /**< (ISC) Histogram Entry 117 */
#define REG_ISC_HIS_ENTRY118    (*(__I  uint32_t*)0xF00085E8U) /**< (ISC) Histogram Entry 118 */
#define REG_ISC_HIS_ENTRY119    (*(__I  uint32_t*)0xF00085ECU) /**< (ISC) Histogram Entry 119 */
#define REG_ISC_HIS_ENTRY120    (*(__I  uint32_t*)0xF00085F0U) /**< (ISC) Histogram Entry 120 */
#define REG_ISC_HIS_ENTRY121    (*(__I  uint32_t*)0xF00085F4U) /**< (ISC) Histogram Entry 121 */
#define REG_ISC_HIS_ENTRY122    (*(__I  uint32_t*)0xF00085F8U) /**< (ISC) Histogram Entry 122 */
#define REG_ISC_HIS_ENTRY123    (*(__I  uint32_t*)0xF00085FCU) /**< (ISC) Histogram Entry 123 */
#define REG_ISC_HIS_ENTRY124    (*(__I  uint32_t*)0xF0008600U) /**< (ISC) Histogram Entry 124 */
#define REG_ISC_HIS_ENTRY125    (*(__I  uint32_t*)0xF0008604U) /**< (ISC) Histogram Entry 125 */
#define REG_ISC_HIS_ENTRY126    (*(__I  uint32_t*)0xF0008608U) /**< (ISC) Histogram Entry 126 */
#define REG_ISC_HIS_ENTRY127    (*(__I  uint32_t*)0xF000860CU) /**< (ISC) Histogram Entry 127 */
#define REG_ISC_HIS_ENTRY128    (*(__I  uint32_t*)0xF0008610U) /**< (ISC) Histogram Entry 128 */
#define REG_ISC_HIS_ENTRY129    (*(__I  uint32_t*)0xF0008614U) /**< (ISC) Histogram Entry 129 */
#define REG_ISC_HIS_ENTRY130    (*(__I  uint32_t*)0xF0008618U) /**< (ISC) Histogram Entry 130 */
#define REG_ISC_HIS_ENTRY131    (*(__I  uint32_t*)0xF000861CU) /**< (ISC) Histogram Entry 131 */
#define REG_ISC_HIS_ENTRY132    (*(__I  uint32_t*)0xF0008620U) /**< (ISC) Histogram Entry 132 */
#define REG_ISC_HIS_ENTRY133    (*(__I  uint32_t*)0xF0008624U) /**< (ISC) Histogram Entry 133 */
#define REG_ISC_HIS_ENTRY134    (*(__I  uint32_t*)0xF0008628U) /**< (ISC) Histogram Entry 134 */
#define REG_ISC_HIS_ENTRY135    (*(__I  uint32_t*)0xF000862CU) /**< (ISC) Histogram Entry 135 */
#define REG_ISC_HIS_ENTRY136    (*(__I  uint32_t*)0xF0008630U) /**< (ISC) Histogram Entry 136 */
#define REG_ISC_HIS_ENTRY137    (*(__I  uint32_t*)0xF0008634U) /**< (ISC) Histogram Entry 137 */
#define REG_ISC_HIS_ENTRY138    (*(__I  uint32_t*)0xF0008638U) /**< (ISC) Histogram Entry 138 */
#define REG_ISC_HIS_ENTRY139    (*(__I  uint32_t*)0xF000863CU) /**< (ISC) Histogram Entry 139 */
#define REG_ISC_HIS_ENTRY140    (*(__I  uint32_t*)0xF0008640U) /**< (ISC) Histogram Entry 140 */
#define REG_ISC_HIS_ENTRY141    (*(__I  uint32_t*)0xF0008644U) /**< (ISC) Histogram Entry 141 */
#define REG_ISC_HIS_ENTRY142    (*(__I  uint32_t*)0xF0008648U) /**< (ISC) Histogram Entry 142 */
#define REG_ISC_HIS_ENTRY143    (*(__I  uint32_t*)0xF000864CU) /**< (ISC) Histogram Entry 143 */
#define REG_ISC_HIS_ENTRY144    (*(__I  uint32_t*)0xF0008650U) /**< (ISC) Histogram Entry 144 */
#define REG_ISC_HIS_ENTRY145    (*(__I  uint32_t*)0xF0008654U) /**< (ISC) Histogram Entry 145 */
#define REG_ISC_HIS_ENTRY146    (*(__I  uint32_t*)0xF0008658U) /**< (ISC) Histogram Entry 146 */
#define REG_ISC_HIS_ENTRY147    (*(__I  uint32_t*)0xF000865CU) /**< (ISC) Histogram Entry 147 */
#define REG_ISC_HIS_ENTRY148    (*(__I  uint32_t*)0xF0008660U) /**< (ISC) Histogram Entry 148 */
#define REG_ISC_HIS_ENTRY149    (*(__I  uint32_t*)0xF0008664U) /**< (ISC) Histogram Entry 149 */
#define REG_ISC_HIS_ENTRY150    (*(__I  uint32_t*)0xF0008668U) /**< (ISC) Histogram Entry 150 */
#define REG_ISC_HIS_ENTRY151    (*(__I  uint32_t*)0xF000866CU) /**< (ISC) Histogram Entry 151 */
#define REG_ISC_HIS_ENTRY152    (*(__I  uint32_t*)0xF0008670U) /**< (ISC) Histogram Entry 152 */
#define REG_ISC_HIS_ENTRY153    (*(__I  uint32_t*)0xF0008674U) /**< (ISC) Histogram Entry 153 */
#define REG_ISC_HIS_ENTRY154    (*(__I  uint32_t*)0xF0008678U) /**< (ISC) Histogram Entry 154 */
#define REG_ISC_HIS_ENTRY155    (*(__I  uint32_t*)0xF000867CU) /**< (ISC) Histogram Entry 155 */
#define REG_ISC_HIS_ENTRY156    (*(__I  uint32_t*)0xF0008680U) /**< (ISC) Histogram Entry 156 */
#define REG_ISC_HIS_ENTRY157    (*(__I  uint32_t*)0xF0008684U) /**< (ISC) Histogram Entry 157 */
#define REG_ISC_HIS_ENTRY158    (*(__I  uint32_t*)0xF0008688U) /**< (ISC) Histogram Entry 158 */
#define REG_ISC_HIS_ENTRY159    (*(__I  uint32_t*)0xF000868CU) /**< (ISC) Histogram Entry 159 */
#define REG_ISC_HIS_ENTRY160    (*(__I  uint32_t*)0xF0008690U) /**< (ISC) Histogram Entry 160 */
#define REG_ISC_HIS_ENTRY161    (*(__I  uint32_t*)0xF0008694U) /**< (ISC) Histogram Entry 161 */
#define REG_ISC_HIS_ENTRY162    (*(__I  uint32_t*)0xF0008698U) /**< (ISC) Histogram Entry 162 */
#define REG_ISC_HIS_ENTRY163    (*(__I  uint32_t*)0xF000869CU) /**< (ISC) Histogram Entry 163 */
#define REG_ISC_HIS_ENTRY164    (*(__I  uint32_t*)0xF00086A0U) /**< (ISC) Histogram Entry 164 */
#define REG_ISC_HIS_ENTRY165    (*(__I  uint32_t*)0xF00086A4U) /**< (ISC) Histogram Entry 165 */
#define REG_ISC_HIS_ENTRY166    (*(__I  uint32_t*)0xF00086A8U) /**< (ISC) Histogram Entry 166 */
#define REG_ISC_HIS_ENTRY167    (*(__I  uint32_t*)0xF00086ACU) /**< (ISC) Histogram Entry 167 */
#define REG_ISC_HIS_ENTRY168    (*(__I  uint32_t*)0xF00086B0U) /**< (ISC) Histogram Entry 168 */
#define REG_ISC_HIS_ENTRY169    (*(__I  uint32_t*)0xF00086B4U) /**< (ISC) Histogram Entry 169 */
#define REG_ISC_HIS_ENTRY170    (*(__I  uint32_t*)0xF00086B8U) /**< (ISC) Histogram Entry 170 */
#define REG_ISC_HIS_ENTRY171    (*(__I  uint32_t*)0xF00086BCU) /**< (ISC) Histogram Entry 171 */
#define REG_ISC_HIS_ENTRY172    (*(__I  uint32_t*)0xF00086C0U) /**< (ISC) Histogram Entry 172 */
#define REG_ISC_HIS_ENTRY173    (*(__I  uint32_t*)0xF00086C4U) /**< (ISC) Histogram Entry 173 */
#define REG_ISC_HIS_ENTRY174    (*(__I  uint32_t*)0xF00086C8U) /**< (ISC) Histogram Entry 174 */
#define REG_ISC_HIS_ENTRY175    (*(__I  uint32_t*)0xF00086CCU) /**< (ISC) Histogram Entry 175 */
#define REG_ISC_HIS_ENTRY176    (*(__I  uint32_t*)0xF00086D0U) /**< (ISC) Histogram Entry 176 */
#define REG_ISC_HIS_ENTRY177    (*(__I  uint32_t*)0xF00086D4U) /**< (ISC) Histogram Entry 177 */
#define REG_ISC_HIS_ENTRY178    (*(__I  uint32_t*)0xF00086D8U) /**< (ISC) Histogram Entry 178 */
#define REG_ISC_HIS_ENTRY179    (*(__I  uint32_t*)0xF00086DCU) /**< (ISC) Histogram Entry 179 */
#define REG_ISC_HIS_ENTRY180    (*(__I  uint32_t*)0xF00086E0U) /**< (ISC) Histogram Entry 180 */
#define REG_ISC_HIS_ENTRY181    (*(__I  uint32_t*)0xF00086E4U) /**< (ISC) Histogram Entry 181 */
#define REG_ISC_HIS_ENTRY182    (*(__I  uint32_t*)0xF00086E8U) /**< (ISC) Histogram Entry 182 */
#define REG_ISC_HIS_ENTRY183    (*(__I  uint32_t*)0xF00086ECU) /**< (ISC) Histogram Entry 183 */
#define REG_ISC_HIS_ENTRY184    (*(__I  uint32_t*)0xF00086F0U) /**< (ISC) Histogram Entry 184 */
#define REG_ISC_HIS_ENTRY185    (*(__I  uint32_t*)0xF00086F4U) /**< (ISC) Histogram Entry 185 */
#define REG_ISC_HIS_ENTRY186    (*(__I  uint32_t*)0xF00086F8U) /**< (ISC) Histogram Entry 186 */
#define REG_ISC_HIS_ENTRY187    (*(__I  uint32_t*)0xF00086FCU) /**< (ISC) Histogram Entry 187 */
#define REG_ISC_HIS_ENTRY188    (*(__I  uint32_t*)0xF0008700U) /**< (ISC) Histogram Entry 188 */
#define REG_ISC_HIS_ENTRY189    (*(__I  uint32_t*)0xF0008704U) /**< (ISC) Histogram Entry 189 */
#define REG_ISC_HIS_ENTRY190    (*(__I  uint32_t*)0xF0008708U) /**< (ISC) Histogram Entry 190 */
#define REG_ISC_HIS_ENTRY191    (*(__I  uint32_t*)0xF000870CU) /**< (ISC) Histogram Entry 191 */
#define REG_ISC_HIS_ENTRY192    (*(__I  uint32_t*)0xF0008710U) /**< (ISC) Histogram Entry 192 */
#define REG_ISC_HIS_ENTRY193    (*(__I  uint32_t*)0xF0008714U) /**< (ISC) Histogram Entry 193 */
#define REG_ISC_HIS_ENTRY194    (*(__I  uint32_t*)0xF0008718U) /**< (ISC) Histogram Entry 194 */
#define REG_ISC_HIS_ENTRY195    (*(__I  uint32_t*)0xF000871CU) /**< (ISC) Histogram Entry 195 */
#define REG_ISC_HIS_ENTRY196    (*(__I  uint32_t*)0xF0008720U) /**< (ISC) Histogram Entry 196 */
#define REG_ISC_HIS_ENTRY197    (*(__I  uint32_t*)0xF0008724U) /**< (ISC) Histogram Entry 197 */
#define REG_ISC_HIS_ENTRY198    (*(__I  uint32_t*)0xF0008728U) /**< (ISC) Histogram Entry 198 */
#define REG_ISC_HIS_ENTRY199    (*(__I  uint32_t*)0xF000872CU) /**< (ISC) Histogram Entry 199 */
#define REG_ISC_HIS_ENTRY200    (*(__I  uint32_t*)0xF0008730U) /**< (ISC) Histogram Entry 200 */
#define REG_ISC_HIS_ENTRY201    (*(__I  uint32_t*)0xF0008734U) /**< (ISC) Histogram Entry 201 */
#define REG_ISC_HIS_ENTRY202    (*(__I  uint32_t*)0xF0008738U) /**< (ISC) Histogram Entry 202 */
#define REG_ISC_HIS_ENTRY203    (*(__I  uint32_t*)0xF000873CU) /**< (ISC) Histogram Entry 203 */
#define REG_ISC_HIS_ENTRY204    (*(__I  uint32_t*)0xF0008740U) /**< (ISC) Histogram Entry 204 */
#define REG_ISC_HIS_ENTRY205    (*(__I  uint32_t*)0xF0008744U) /**< (ISC) Histogram Entry 205 */
#define REG_ISC_HIS_ENTRY206    (*(__I  uint32_t*)0xF0008748U) /**< (ISC) Histogram Entry 206 */
#define REG_ISC_HIS_ENTRY207    (*(__I  uint32_t*)0xF000874CU) /**< (ISC) Histogram Entry 207 */
#define REG_ISC_HIS_ENTRY208    (*(__I  uint32_t*)0xF0008750U) /**< (ISC) Histogram Entry 208 */
#define REG_ISC_HIS_ENTRY209    (*(__I  uint32_t*)0xF0008754U) /**< (ISC) Histogram Entry 209 */
#define REG_ISC_HIS_ENTRY210    (*(__I  uint32_t*)0xF0008758U) /**< (ISC) Histogram Entry 210 */
#define REG_ISC_HIS_ENTRY211    (*(__I  uint32_t*)0xF000875CU) /**< (ISC) Histogram Entry 211 */
#define REG_ISC_HIS_ENTRY212    (*(__I  uint32_t*)0xF0008760U) /**< (ISC) Histogram Entry 212 */
#define REG_ISC_HIS_ENTRY213    (*(__I  uint32_t*)0xF0008764U) /**< (ISC) Histogram Entry 213 */
#define REG_ISC_HIS_ENTRY214    (*(__I  uint32_t*)0xF0008768U) /**< (ISC) Histogram Entry 214 */
#define REG_ISC_HIS_ENTRY215    (*(__I  uint32_t*)0xF000876CU) /**< (ISC) Histogram Entry 215 */
#define REG_ISC_HIS_ENTRY216    (*(__I  uint32_t*)0xF0008770U) /**< (ISC) Histogram Entry 216 */
#define REG_ISC_HIS_ENTRY217    (*(__I  uint32_t*)0xF0008774U) /**< (ISC) Histogram Entry 217 */
#define REG_ISC_HIS_ENTRY218    (*(__I  uint32_t*)0xF0008778U) /**< (ISC) Histogram Entry 218 */
#define REG_ISC_HIS_ENTRY219    (*(__I  uint32_t*)0xF000877CU) /**< (ISC) Histogram Entry 219 */
#define REG_ISC_HIS_ENTRY220    (*(__I  uint32_t*)0xF0008780U) /**< (ISC) Histogram Entry 220 */
#define REG_ISC_HIS_ENTRY221    (*(__I  uint32_t*)0xF0008784U) /**< (ISC) Histogram Entry 221 */
#define REG_ISC_HIS_ENTRY222    (*(__I  uint32_t*)0xF0008788U) /**< (ISC) Histogram Entry 222 */
#define REG_ISC_HIS_ENTRY223    (*(__I  uint32_t*)0xF000878CU) /**< (ISC) Histogram Entry 223 */
#define REG_ISC_HIS_ENTRY224    (*(__I  uint32_t*)0xF0008790U) /**< (ISC) Histogram Entry 224 */
#define REG_ISC_HIS_ENTRY225    (*(__I  uint32_t*)0xF0008794U) /**< (ISC) Histogram Entry 225 */
#define REG_ISC_HIS_ENTRY226    (*(__I  uint32_t*)0xF0008798U) /**< (ISC) Histogram Entry 226 */
#define REG_ISC_HIS_ENTRY227    (*(__I  uint32_t*)0xF000879CU) /**< (ISC) Histogram Entry 227 */
#define REG_ISC_HIS_ENTRY228    (*(__I  uint32_t*)0xF00087A0U) /**< (ISC) Histogram Entry 228 */
#define REG_ISC_HIS_ENTRY229    (*(__I  uint32_t*)0xF00087A4U) /**< (ISC) Histogram Entry 229 */
#define REG_ISC_HIS_ENTRY230    (*(__I  uint32_t*)0xF00087A8U) /**< (ISC) Histogram Entry 230 */
#define REG_ISC_HIS_ENTRY231    (*(__I  uint32_t*)0xF00087ACU) /**< (ISC) Histogram Entry 231 */
#define REG_ISC_HIS_ENTRY232    (*(__I  uint32_t*)0xF00087B0U) /**< (ISC) Histogram Entry 232 */
#define REG_ISC_HIS_ENTRY233    (*(__I  uint32_t*)0xF00087B4U) /**< (ISC) Histogram Entry 233 */
#define REG_ISC_HIS_ENTRY234    (*(__I  uint32_t*)0xF00087B8U) /**< (ISC) Histogram Entry 234 */
#define REG_ISC_HIS_ENTRY235    (*(__I  uint32_t*)0xF00087BCU) /**< (ISC) Histogram Entry 235 */
#define REG_ISC_HIS_ENTRY236    (*(__I  uint32_t*)0xF00087C0U) /**< (ISC) Histogram Entry 236 */
#define REG_ISC_HIS_ENTRY237    (*(__I  uint32_t*)0xF00087C4U) /**< (ISC) Histogram Entry 237 */
#define REG_ISC_HIS_ENTRY238    (*(__I  uint32_t*)0xF00087C8U) /**< (ISC) Histogram Entry 238 */
#define REG_ISC_HIS_ENTRY239    (*(__I  uint32_t*)0xF00087CCU) /**< (ISC) Histogram Entry 239 */
#define REG_ISC_HIS_ENTRY240    (*(__I  uint32_t*)0xF00087D0U) /**< (ISC) Histogram Entry 240 */
#define REG_ISC_HIS_ENTRY241    (*(__I  uint32_t*)0xF00087D4U) /**< (ISC) Histogram Entry 241 */
#define REG_ISC_HIS_ENTRY242    (*(__I  uint32_t*)0xF00087D8U) /**< (ISC) Histogram Entry 242 */
#define REG_ISC_HIS_ENTRY243    (*(__I  uint32_t*)0xF00087DCU) /**< (ISC) Histogram Entry 243 */
#define REG_ISC_HIS_ENTRY244    (*(__I  uint32_t*)0xF00087E0U) /**< (ISC) Histogram Entry 244 */
#define REG_ISC_HIS_ENTRY245    (*(__I  uint32_t*)0xF00087E4U) /**< (ISC) Histogram Entry 245 */
#define REG_ISC_HIS_ENTRY246    (*(__I  uint32_t*)0xF00087E8U) /**< (ISC) Histogram Entry 246 */
#define REG_ISC_HIS_ENTRY247    (*(__I  uint32_t*)0xF00087ECU) /**< (ISC) Histogram Entry 247 */
#define REG_ISC_HIS_ENTRY248    (*(__I  uint32_t*)0xF00087F0U) /**< (ISC) Histogram Entry 248 */
#define REG_ISC_HIS_ENTRY249    (*(__I  uint32_t*)0xF00087F4U) /**< (ISC) Histogram Entry 249 */
#define REG_ISC_HIS_ENTRY250    (*(__I  uint32_t*)0xF00087F8U) /**< (ISC) Histogram Entry 250 */
#define REG_ISC_HIS_ENTRY251    (*(__I  uint32_t*)0xF00087FCU) /**< (ISC) Histogram Entry 251 */
#define REG_ISC_HIS_ENTRY252    (*(__I  uint32_t*)0xF0008800U) /**< (ISC) Histogram Entry 252 */
#define REG_ISC_HIS_ENTRY253    (*(__I  uint32_t*)0xF0008804U) /**< (ISC) Histogram Entry 253 */
#define REG_ISC_HIS_ENTRY254    (*(__I  uint32_t*)0xF0008808U) /**< (ISC) Histogram Entry 254 */
#define REG_ISC_HIS_ENTRY255    (*(__I  uint32_t*)0xF000880CU) /**< (ISC) Histogram Entry 255 */
#define REG_ISC_HIS_ENTRY256    (*(__I  uint32_t*)0xF0008810U) /**< (ISC) Histogram Entry 256 */
#define REG_ISC_HIS_ENTRY257    (*(__I  uint32_t*)0xF0008814U) /**< (ISC) Histogram Entry 257 */
#define REG_ISC_HIS_ENTRY258    (*(__I  uint32_t*)0xF0008818U) /**< (ISC) Histogram Entry 258 */
#define REG_ISC_HIS_ENTRY259    (*(__I  uint32_t*)0xF000881CU) /**< (ISC) Histogram Entry 259 */
#define REG_ISC_HIS_ENTRY260    (*(__I  uint32_t*)0xF0008820U) /**< (ISC) Histogram Entry 260 */
#define REG_ISC_HIS_ENTRY261    (*(__I  uint32_t*)0xF0008824U) /**< (ISC) Histogram Entry 261 */
#define REG_ISC_HIS_ENTRY262    (*(__I  uint32_t*)0xF0008828U) /**< (ISC) Histogram Entry 262 */
#define REG_ISC_HIS_ENTRY263    (*(__I  uint32_t*)0xF000882CU) /**< (ISC) Histogram Entry 263 */
#define REG_ISC_HIS_ENTRY264    (*(__I  uint32_t*)0xF0008830U) /**< (ISC) Histogram Entry 264 */
#define REG_ISC_HIS_ENTRY265    (*(__I  uint32_t*)0xF0008834U) /**< (ISC) Histogram Entry 265 */
#define REG_ISC_HIS_ENTRY266    (*(__I  uint32_t*)0xF0008838U) /**< (ISC) Histogram Entry 266 */
#define REG_ISC_HIS_ENTRY267    (*(__I  uint32_t*)0xF000883CU) /**< (ISC) Histogram Entry 267 */
#define REG_ISC_HIS_ENTRY268    (*(__I  uint32_t*)0xF0008840U) /**< (ISC) Histogram Entry 268 */
#define REG_ISC_HIS_ENTRY269    (*(__I  uint32_t*)0xF0008844U) /**< (ISC) Histogram Entry 269 */
#define REG_ISC_HIS_ENTRY270    (*(__I  uint32_t*)0xF0008848U) /**< (ISC) Histogram Entry 270 */
#define REG_ISC_HIS_ENTRY271    (*(__I  uint32_t*)0xF000884CU) /**< (ISC) Histogram Entry 271 */
#define REG_ISC_HIS_ENTRY272    (*(__I  uint32_t*)0xF0008850U) /**< (ISC) Histogram Entry 272 */
#define REG_ISC_HIS_ENTRY273    (*(__I  uint32_t*)0xF0008854U) /**< (ISC) Histogram Entry 273 */
#define REG_ISC_HIS_ENTRY274    (*(__I  uint32_t*)0xF0008858U) /**< (ISC) Histogram Entry 274 */
#define REG_ISC_HIS_ENTRY275    (*(__I  uint32_t*)0xF000885CU) /**< (ISC) Histogram Entry 275 */
#define REG_ISC_HIS_ENTRY276    (*(__I  uint32_t*)0xF0008860U) /**< (ISC) Histogram Entry 276 */
#define REG_ISC_HIS_ENTRY277    (*(__I  uint32_t*)0xF0008864U) /**< (ISC) Histogram Entry 277 */
#define REG_ISC_HIS_ENTRY278    (*(__I  uint32_t*)0xF0008868U) /**< (ISC) Histogram Entry 278 */
#define REG_ISC_HIS_ENTRY279    (*(__I  uint32_t*)0xF000886CU) /**< (ISC) Histogram Entry 279 */
#define REG_ISC_HIS_ENTRY280    (*(__I  uint32_t*)0xF0008870U) /**< (ISC) Histogram Entry 280 */
#define REG_ISC_HIS_ENTRY281    (*(__I  uint32_t*)0xF0008874U) /**< (ISC) Histogram Entry 281 */
#define REG_ISC_HIS_ENTRY282    (*(__I  uint32_t*)0xF0008878U) /**< (ISC) Histogram Entry 282 */
#define REG_ISC_HIS_ENTRY283    (*(__I  uint32_t*)0xF000887CU) /**< (ISC) Histogram Entry 283 */
#define REG_ISC_HIS_ENTRY284    (*(__I  uint32_t*)0xF0008880U) /**< (ISC) Histogram Entry 284 */
#define REG_ISC_HIS_ENTRY285    (*(__I  uint32_t*)0xF0008884U) /**< (ISC) Histogram Entry 285 */
#define REG_ISC_HIS_ENTRY286    (*(__I  uint32_t*)0xF0008888U) /**< (ISC) Histogram Entry 286 */
#define REG_ISC_HIS_ENTRY287    (*(__I  uint32_t*)0xF000888CU) /**< (ISC) Histogram Entry 287 */
#define REG_ISC_HIS_ENTRY288    (*(__I  uint32_t*)0xF0008890U) /**< (ISC) Histogram Entry 288 */
#define REG_ISC_HIS_ENTRY289    (*(__I  uint32_t*)0xF0008894U) /**< (ISC) Histogram Entry 289 */
#define REG_ISC_HIS_ENTRY290    (*(__I  uint32_t*)0xF0008898U) /**< (ISC) Histogram Entry 290 */
#define REG_ISC_HIS_ENTRY291    (*(__I  uint32_t*)0xF000889CU) /**< (ISC) Histogram Entry 291 */
#define REG_ISC_HIS_ENTRY292    (*(__I  uint32_t*)0xF00088A0U) /**< (ISC) Histogram Entry 292 */
#define REG_ISC_HIS_ENTRY293    (*(__I  uint32_t*)0xF00088A4U) /**< (ISC) Histogram Entry 293 */
#define REG_ISC_HIS_ENTRY294    (*(__I  uint32_t*)0xF00088A8U) /**< (ISC) Histogram Entry 294 */
#define REG_ISC_HIS_ENTRY295    (*(__I  uint32_t*)0xF00088ACU) /**< (ISC) Histogram Entry 295 */
#define REG_ISC_HIS_ENTRY296    (*(__I  uint32_t*)0xF00088B0U) /**< (ISC) Histogram Entry 296 */
#define REG_ISC_HIS_ENTRY297    (*(__I  uint32_t*)0xF00088B4U) /**< (ISC) Histogram Entry 297 */
#define REG_ISC_HIS_ENTRY298    (*(__I  uint32_t*)0xF00088B8U) /**< (ISC) Histogram Entry 298 */
#define REG_ISC_HIS_ENTRY299    (*(__I  uint32_t*)0xF00088BCU) /**< (ISC) Histogram Entry 299 */
#define REG_ISC_HIS_ENTRY300    (*(__I  uint32_t*)0xF00088C0U) /**< (ISC) Histogram Entry 300 */
#define REG_ISC_HIS_ENTRY301    (*(__I  uint32_t*)0xF00088C4U) /**< (ISC) Histogram Entry 301 */
#define REG_ISC_HIS_ENTRY302    (*(__I  uint32_t*)0xF00088C8U) /**< (ISC) Histogram Entry 302 */
#define REG_ISC_HIS_ENTRY303    (*(__I  uint32_t*)0xF00088CCU) /**< (ISC) Histogram Entry 303 */
#define REG_ISC_HIS_ENTRY304    (*(__I  uint32_t*)0xF00088D0U) /**< (ISC) Histogram Entry 304 */
#define REG_ISC_HIS_ENTRY305    (*(__I  uint32_t*)0xF00088D4U) /**< (ISC) Histogram Entry 305 */
#define REG_ISC_HIS_ENTRY306    (*(__I  uint32_t*)0xF00088D8U) /**< (ISC) Histogram Entry 306 */
#define REG_ISC_HIS_ENTRY307    (*(__I  uint32_t*)0xF00088DCU) /**< (ISC) Histogram Entry 307 */
#define REG_ISC_HIS_ENTRY308    (*(__I  uint32_t*)0xF00088E0U) /**< (ISC) Histogram Entry 308 */
#define REG_ISC_HIS_ENTRY309    (*(__I  uint32_t*)0xF00088E4U) /**< (ISC) Histogram Entry 309 */
#define REG_ISC_HIS_ENTRY310    (*(__I  uint32_t*)0xF00088E8U) /**< (ISC) Histogram Entry 310 */
#define REG_ISC_HIS_ENTRY311    (*(__I  uint32_t*)0xF00088ECU) /**< (ISC) Histogram Entry 311 */
#define REG_ISC_HIS_ENTRY312    (*(__I  uint32_t*)0xF00088F0U) /**< (ISC) Histogram Entry 312 */
#define REG_ISC_HIS_ENTRY313    (*(__I  uint32_t*)0xF00088F4U) /**< (ISC) Histogram Entry 313 */
#define REG_ISC_HIS_ENTRY314    (*(__I  uint32_t*)0xF00088F8U) /**< (ISC) Histogram Entry 314 */
#define REG_ISC_HIS_ENTRY315    (*(__I  uint32_t*)0xF00088FCU) /**< (ISC) Histogram Entry 315 */
#define REG_ISC_HIS_ENTRY316    (*(__I  uint32_t*)0xF0008900U) /**< (ISC) Histogram Entry 316 */
#define REG_ISC_HIS_ENTRY317    (*(__I  uint32_t*)0xF0008904U) /**< (ISC) Histogram Entry 317 */
#define REG_ISC_HIS_ENTRY318    (*(__I  uint32_t*)0xF0008908U) /**< (ISC) Histogram Entry 318 */
#define REG_ISC_HIS_ENTRY319    (*(__I  uint32_t*)0xF000890CU) /**< (ISC) Histogram Entry 319 */
#define REG_ISC_HIS_ENTRY320    (*(__I  uint32_t*)0xF0008910U) /**< (ISC) Histogram Entry 320 */
#define REG_ISC_HIS_ENTRY321    (*(__I  uint32_t*)0xF0008914U) /**< (ISC) Histogram Entry 321 */
#define REG_ISC_HIS_ENTRY322    (*(__I  uint32_t*)0xF0008918U) /**< (ISC) Histogram Entry 322 */
#define REG_ISC_HIS_ENTRY323    (*(__I  uint32_t*)0xF000891CU) /**< (ISC) Histogram Entry 323 */
#define REG_ISC_HIS_ENTRY324    (*(__I  uint32_t*)0xF0008920U) /**< (ISC) Histogram Entry 324 */
#define REG_ISC_HIS_ENTRY325    (*(__I  uint32_t*)0xF0008924U) /**< (ISC) Histogram Entry 325 */
#define REG_ISC_HIS_ENTRY326    (*(__I  uint32_t*)0xF0008928U) /**< (ISC) Histogram Entry 326 */
#define REG_ISC_HIS_ENTRY327    (*(__I  uint32_t*)0xF000892CU) /**< (ISC) Histogram Entry 327 */
#define REG_ISC_HIS_ENTRY328    (*(__I  uint32_t*)0xF0008930U) /**< (ISC) Histogram Entry 328 */
#define REG_ISC_HIS_ENTRY329    (*(__I  uint32_t*)0xF0008934U) /**< (ISC) Histogram Entry 329 */
#define REG_ISC_HIS_ENTRY330    (*(__I  uint32_t*)0xF0008938U) /**< (ISC) Histogram Entry 330 */
#define REG_ISC_HIS_ENTRY331    (*(__I  uint32_t*)0xF000893CU) /**< (ISC) Histogram Entry 331 */
#define REG_ISC_HIS_ENTRY332    (*(__I  uint32_t*)0xF0008940U) /**< (ISC) Histogram Entry 332 */
#define REG_ISC_HIS_ENTRY333    (*(__I  uint32_t*)0xF0008944U) /**< (ISC) Histogram Entry 333 */
#define REG_ISC_HIS_ENTRY334    (*(__I  uint32_t*)0xF0008948U) /**< (ISC) Histogram Entry 334 */
#define REG_ISC_HIS_ENTRY335    (*(__I  uint32_t*)0xF000894CU) /**< (ISC) Histogram Entry 335 */
#define REG_ISC_HIS_ENTRY336    (*(__I  uint32_t*)0xF0008950U) /**< (ISC) Histogram Entry 336 */
#define REG_ISC_HIS_ENTRY337    (*(__I  uint32_t*)0xF0008954U) /**< (ISC) Histogram Entry 337 */
#define REG_ISC_HIS_ENTRY338    (*(__I  uint32_t*)0xF0008958U) /**< (ISC) Histogram Entry 338 */
#define REG_ISC_HIS_ENTRY339    (*(__I  uint32_t*)0xF000895CU) /**< (ISC) Histogram Entry 339 */
#define REG_ISC_HIS_ENTRY340    (*(__I  uint32_t*)0xF0008960U) /**< (ISC) Histogram Entry 340 */
#define REG_ISC_HIS_ENTRY341    (*(__I  uint32_t*)0xF0008964U) /**< (ISC) Histogram Entry 341 */
#define REG_ISC_HIS_ENTRY342    (*(__I  uint32_t*)0xF0008968U) /**< (ISC) Histogram Entry 342 */
#define REG_ISC_HIS_ENTRY343    (*(__I  uint32_t*)0xF000896CU) /**< (ISC) Histogram Entry 343 */
#define REG_ISC_HIS_ENTRY344    (*(__I  uint32_t*)0xF0008970U) /**< (ISC) Histogram Entry 344 */
#define REG_ISC_HIS_ENTRY345    (*(__I  uint32_t*)0xF0008974U) /**< (ISC) Histogram Entry 345 */
#define REG_ISC_HIS_ENTRY346    (*(__I  uint32_t*)0xF0008978U) /**< (ISC) Histogram Entry 346 */
#define REG_ISC_HIS_ENTRY347    (*(__I  uint32_t*)0xF000897CU) /**< (ISC) Histogram Entry 347 */
#define REG_ISC_HIS_ENTRY348    (*(__I  uint32_t*)0xF0008980U) /**< (ISC) Histogram Entry 348 */
#define REG_ISC_HIS_ENTRY349    (*(__I  uint32_t*)0xF0008984U) /**< (ISC) Histogram Entry 349 */
#define REG_ISC_HIS_ENTRY350    (*(__I  uint32_t*)0xF0008988U) /**< (ISC) Histogram Entry 350 */
#define REG_ISC_HIS_ENTRY351    (*(__I  uint32_t*)0xF000898CU) /**< (ISC) Histogram Entry 351 */
#define REG_ISC_HIS_ENTRY352    (*(__I  uint32_t*)0xF0008990U) /**< (ISC) Histogram Entry 352 */
#define REG_ISC_HIS_ENTRY353    (*(__I  uint32_t*)0xF0008994U) /**< (ISC) Histogram Entry 353 */
#define REG_ISC_HIS_ENTRY354    (*(__I  uint32_t*)0xF0008998U) /**< (ISC) Histogram Entry 354 */
#define REG_ISC_HIS_ENTRY355    (*(__I  uint32_t*)0xF000899CU) /**< (ISC) Histogram Entry 355 */
#define REG_ISC_HIS_ENTRY356    (*(__I  uint32_t*)0xF00089A0U) /**< (ISC) Histogram Entry 356 */
#define REG_ISC_HIS_ENTRY357    (*(__I  uint32_t*)0xF00089A4U) /**< (ISC) Histogram Entry 357 */
#define REG_ISC_HIS_ENTRY358    (*(__I  uint32_t*)0xF00089A8U) /**< (ISC) Histogram Entry 358 */
#define REG_ISC_HIS_ENTRY359    (*(__I  uint32_t*)0xF00089ACU) /**< (ISC) Histogram Entry 359 */
#define REG_ISC_HIS_ENTRY360    (*(__I  uint32_t*)0xF00089B0U) /**< (ISC) Histogram Entry 360 */
#define REG_ISC_HIS_ENTRY361    (*(__I  uint32_t*)0xF00089B4U) /**< (ISC) Histogram Entry 361 */
#define REG_ISC_HIS_ENTRY362    (*(__I  uint32_t*)0xF00089B8U) /**< (ISC) Histogram Entry 362 */
#define REG_ISC_HIS_ENTRY363    (*(__I  uint32_t*)0xF00089BCU) /**< (ISC) Histogram Entry 363 */
#define REG_ISC_HIS_ENTRY364    (*(__I  uint32_t*)0xF00089C0U) /**< (ISC) Histogram Entry 364 */
#define REG_ISC_HIS_ENTRY365    (*(__I  uint32_t*)0xF00089C4U) /**< (ISC) Histogram Entry 365 */
#define REG_ISC_HIS_ENTRY366    (*(__I  uint32_t*)0xF00089C8U) /**< (ISC) Histogram Entry 366 */
#define REG_ISC_HIS_ENTRY367    (*(__I  uint32_t*)0xF00089CCU) /**< (ISC) Histogram Entry 367 */
#define REG_ISC_HIS_ENTRY368    (*(__I  uint32_t*)0xF00089D0U) /**< (ISC) Histogram Entry 368 */
#define REG_ISC_HIS_ENTRY369    (*(__I  uint32_t*)0xF00089D4U) /**< (ISC) Histogram Entry 369 */
#define REG_ISC_HIS_ENTRY370    (*(__I  uint32_t*)0xF00089D8U) /**< (ISC) Histogram Entry 370 */
#define REG_ISC_HIS_ENTRY371    (*(__I  uint32_t*)0xF00089DCU) /**< (ISC) Histogram Entry 371 */
#define REG_ISC_HIS_ENTRY372    (*(__I  uint32_t*)0xF00089E0U) /**< (ISC) Histogram Entry 372 */
#define REG_ISC_HIS_ENTRY373    (*(__I  uint32_t*)0xF00089E4U) /**< (ISC) Histogram Entry 373 */
#define REG_ISC_HIS_ENTRY374    (*(__I  uint32_t*)0xF00089E8U) /**< (ISC) Histogram Entry 374 */
#define REG_ISC_HIS_ENTRY375    (*(__I  uint32_t*)0xF00089ECU) /**< (ISC) Histogram Entry 375 */
#define REG_ISC_HIS_ENTRY376    (*(__I  uint32_t*)0xF00089F0U) /**< (ISC) Histogram Entry 376 */
#define REG_ISC_HIS_ENTRY377    (*(__I  uint32_t*)0xF00089F4U) /**< (ISC) Histogram Entry 377 */
#define REG_ISC_HIS_ENTRY378    (*(__I  uint32_t*)0xF00089F8U) /**< (ISC) Histogram Entry 378 */
#define REG_ISC_HIS_ENTRY379    (*(__I  uint32_t*)0xF00089FCU) /**< (ISC) Histogram Entry 379 */
#define REG_ISC_HIS_ENTRY380    (*(__I  uint32_t*)0xF0008A00U) /**< (ISC) Histogram Entry 380 */
#define REG_ISC_HIS_ENTRY381    (*(__I  uint32_t*)0xF0008A04U) /**< (ISC) Histogram Entry 381 */
#define REG_ISC_HIS_ENTRY382    (*(__I  uint32_t*)0xF0008A08U) /**< (ISC) Histogram Entry 382 */
#define REG_ISC_HIS_ENTRY383    (*(__I  uint32_t*)0xF0008A0CU) /**< (ISC) Histogram Entry 383 */
#define REG_ISC_HIS_ENTRY384    (*(__I  uint32_t*)0xF0008A10U) /**< (ISC) Histogram Entry 384 */
#define REG_ISC_HIS_ENTRY385    (*(__I  uint32_t*)0xF0008A14U) /**< (ISC) Histogram Entry 385 */
#define REG_ISC_HIS_ENTRY386    (*(__I  uint32_t*)0xF0008A18U) /**< (ISC) Histogram Entry 386 */
#define REG_ISC_HIS_ENTRY387    (*(__I  uint32_t*)0xF0008A1CU) /**< (ISC) Histogram Entry 387 */
#define REG_ISC_HIS_ENTRY388    (*(__I  uint32_t*)0xF0008A20U) /**< (ISC) Histogram Entry 388 */
#define REG_ISC_HIS_ENTRY389    (*(__I  uint32_t*)0xF0008A24U) /**< (ISC) Histogram Entry 389 */
#define REG_ISC_HIS_ENTRY390    (*(__I  uint32_t*)0xF0008A28U) /**< (ISC) Histogram Entry 390 */
#define REG_ISC_HIS_ENTRY391    (*(__I  uint32_t*)0xF0008A2CU) /**< (ISC) Histogram Entry 391 */
#define REG_ISC_HIS_ENTRY392    (*(__I  uint32_t*)0xF0008A30U) /**< (ISC) Histogram Entry 392 */
#define REG_ISC_HIS_ENTRY393    (*(__I  uint32_t*)0xF0008A34U) /**< (ISC) Histogram Entry 393 */
#define REG_ISC_HIS_ENTRY394    (*(__I  uint32_t*)0xF0008A38U) /**< (ISC) Histogram Entry 394 */
#define REG_ISC_HIS_ENTRY395    (*(__I  uint32_t*)0xF0008A3CU) /**< (ISC) Histogram Entry 395 */
#define REG_ISC_HIS_ENTRY396    (*(__I  uint32_t*)0xF0008A40U) /**< (ISC) Histogram Entry 396 */
#define REG_ISC_HIS_ENTRY397    (*(__I  uint32_t*)0xF0008A44U) /**< (ISC) Histogram Entry 397 */
#define REG_ISC_HIS_ENTRY398    (*(__I  uint32_t*)0xF0008A48U) /**< (ISC) Histogram Entry 398 */
#define REG_ISC_HIS_ENTRY399    (*(__I  uint32_t*)0xF0008A4CU) /**< (ISC) Histogram Entry 399 */
#define REG_ISC_HIS_ENTRY400    (*(__I  uint32_t*)0xF0008A50U) /**< (ISC) Histogram Entry 400 */
#define REG_ISC_HIS_ENTRY401    (*(__I  uint32_t*)0xF0008A54U) /**< (ISC) Histogram Entry 401 */
#define REG_ISC_HIS_ENTRY402    (*(__I  uint32_t*)0xF0008A58U) /**< (ISC) Histogram Entry 402 */
#define REG_ISC_HIS_ENTRY403    (*(__I  uint32_t*)0xF0008A5CU) /**< (ISC) Histogram Entry 403 */
#define REG_ISC_HIS_ENTRY404    (*(__I  uint32_t*)0xF0008A60U) /**< (ISC) Histogram Entry 404 */
#define REG_ISC_HIS_ENTRY405    (*(__I  uint32_t*)0xF0008A64U) /**< (ISC) Histogram Entry 405 */
#define REG_ISC_HIS_ENTRY406    (*(__I  uint32_t*)0xF0008A68U) /**< (ISC) Histogram Entry 406 */
#define REG_ISC_HIS_ENTRY407    (*(__I  uint32_t*)0xF0008A6CU) /**< (ISC) Histogram Entry 407 */
#define REG_ISC_HIS_ENTRY408    (*(__I  uint32_t*)0xF0008A70U) /**< (ISC) Histogram Entry 408 */
#define REG_ISC_HIS_ENTRY409    (*(__I  uint32_t*)0xF0008A74U) /**< (ISC) Histogram Entry 409 */
#define REG_ISC_HIS_ENTRY410    (*(__I  uint32_t*)0xF0008A78U) /**< (ISC) Histogram Entry 410 */
#define REG_ISC_HIS_ENTRY411    (*(__I  uint32_t*)0xF0008A7CU) /**< (ISC) Histogram Entry 411 */
#define REG_ISC_HIS_ENTRY412    (*(__I  uint32_t*)0xF0008A80U) /**< (ISC) Histogram Entry 412 */
#define REG_ISC_HIS_ENTRY413    (*(__I  uint32_t*)0xF0008A84U) /**< (ISC) Histogram Entry 413 */
#define REG_ISC_HIS_ENTRY414    (*(__I  uint32_t*)0xF0008A88U) /**< (ISC) Histogram Entry 414 */
#define REG_ISC_HIS_ENTRY415    (*(__I  uint32_t*)0xF0008A8CU) /**< (ISC) Histogram Entry 415 */
#define REG_ISC_HIS_ENTRY416    (*(__I  uint32_t*)0xF0008A90U) /**< (ISC) Histogram Entry 416 */
#define REG_ISC_HIS_ENTRY417    (*(__I  uint32_t*)0xF0008A94U) /**< (ISC) Histogram Entry 417 */
#define REG_ISC_HIS_ENTRY418    (*(__I  uint32_t*)0xF0008A98U) /**< (ISC) Histogram Entry 418 */
#define REG_ISC_HIS_ENTRY419    (*(__I  uint32_t*)0xF0008A9CU) /**< (ISC) Histogram Entry 419 */
#define REG_ISC_HIS_ENTRY420    (*(__I  uint32_t*)0xF0008AA0U) /**< (ISC) Histogram Entry 420 */
#define REG_ISC_HIS_ENTRY421    (*(__I  uint32_t*)0xF0008AA4U) /**< (ISC) Histogram Entry 421 */
#define REG_ISC_HIS_ENTRY422    (*(__I  uint32_t*)0xF0008AA8U) /**< (ISC) Histogram Entry 422 */
#define REG_ISC_HIS_ENTRY423    (*(__I  uint32_t*)0xF0008AACU) /**< (ISC) Histogram Entry 423 */
#define REG_ISC_HIS_ENTRY424    (*(__I  uint32_t*)0xF0008AB0U) /**< (ISC) Histogram Entry 424 */
#define REG_ISC_HIS_ENTRY425    (*(__I  uint32_t*)0xF0008AB4U) /**< (ISC) Histogram Entry 425 */
#define REG_ISC_HIS_ENTRY426    (*(__I  uint32_t*)0xF0008AB8U) /**< (ISC) Histogram Entry 426 */
#define REG_ISC_HIS_ENTRY427    (*(__I  uint32_t*)0xF0008ABCU) /**< (ISC) Histogram Entry 427 */
#define REG_ISC_HIS_ENTRY428    (*(__I  uint32_t*)0xF0008AC0U) /**< (ISC) Histogram Entry 428 */
#define REG_ISC_HIS_ENTRY429    (*(__I  uint32_t*)0xF0008AC4U) /**< (ISC) Histogram Entry 429 */
#define REG_ISC_HIS_ENTRY430    (*(__I  uint32_t*)0xF0008AC8U) /**< (ISC) Histogram Entry 430 */
#define REG_ISC_HIS_ENTRY431    (*(__I  uint32_t*)0xF0008ACCU) /**< (ISC) Histogram Entry 431 */
#define REG_ISC_HIS_ENTRY432    (*(__I  uint32_t*)0xF0008AD0U) /**< (ISC) Histogram Entry 432 */
#define REG_ISC_HIS_ENTRY433    (*(__I  uint32_t*)0xF0008AD4U) /**< (ISC) Histogram Entry 433 */
#define REG_ISC_HIS_ENTRY434    (*(__I  uint32_t*)0xF0008AD8U) /**< (ISC) Histogram Entry 434 */
#define REG_ISC_HIS_ENTRY435    (*(__I  uint32_t*)0xF0008ADCU) /**< (ISC) Histogram Entry 435 */
#define REG_ISC_HIS_ENTRY436    (*(__I  uint32_t*)0xF0008AE0U) /**< (ISC) Histogram Entry 436 */
#define REG_ISC_HIS_ENTRY437    (*(__I  uint32_t*)0xF0008AE4U) /**< (ISC) Histogram Entry 437 */
#define REG_ISC_HIS_ENTRY438    (*(__I  uint32_t*)0xF0008AE8U) /**< (ISC) Histogram Entry 438 */
#define REG_ISC_HIS_ENTRY439    (*(__I  uint32_t*)0xF0008AECU) /**< (ISC) Histogram Entry 439 */
#define REG_ISC_HIS_ENTRY440    (*(__I  uint32_t*)0xF0008AF0U) /**< (ISC) Histogram Entry 440 */
#define REG_ISC_HIS_ENTRY441    (*(__I  uint32_t*)0xF0008AF4U) /**< (ISC) Histogram Entry 441 */
#define REG_ISC_HIS_ENTRY442    (*(__I  uint32_t*)0xF0008AF8U) /**< (ISC) Histogram Entry 442 */
#define REG_ISC_HIS_ENTRY443    (*(__I  uint32_t*)0xF0008AFCU) /**< (ISC) Histogram Entry 443 */
#define REG_ISC_HIS_ENTRY444    (*(__I  uint32_t*)0xF0008B00U) /**< (ISC) Histogram Entry 444 */
#define REG_ISC_HIS_ENTRY445    (*(__I  uint32_t*)0xF0008B04U) /**< (ISC) Histogram Entry 445 */
#define REG_ISC_HIS_ENTRY446    (*(__I  uint32_t*)0xF0008B08U) /**< (ISC) Histogram Entry 446 */
#define REG_ISC_HIS_ENTRY447    (*(__I  uint32_t*)0xF0008B0CU) /**< (ISC) Histogram Entry 447 */
#define REG_ISC_HIS_ENTRY448    (*(__I  uint32_t*)0xF0008B10U) /**< (ISC) Histogram Entry 448 */
#define REG_ISC_HIS_ENTRY449    (*(__I  uint32_t*)0xF0008B14U) /**< (ISC) Histogram Entry 449 */
#define REG_ISC_HIS_ENTRY450    (*(__I  uint32_t*)0xF0008B18U) /**< (ISC) Histogram Entry 450 */
#define REG_ISC_HIS_ENTRY451    (*(__I  uint32_t*)0xF0008B1CU) /**< (ISC) Histogram Entry 451 */
#define REG_ISC_HIS_ENTRY452    (*(__I  uint32_t*)0xF0008B20U) /**< (ISC) Histogram Entry 452 */
#define REG_ISC_HIS_ENTRY453    (*(__I  uint32_t*)0xF0008B24U) /**< (ISC) Histogram Entry 453 */
#define REG_ISC_HIS_ENTRY454    (*(__I  uint32_t*)0xF0008B28U) /**< (ISC) Histogram Entry 454 */
#define REG_ISC_HIS_ENTRY455    (*(__I  uint32_t*)0xF0008B2CU) /**< (ISC) Histogram Entry 455 */
#define REG_ISC_HIS_ENTRY456    (*(__I  uint32_t*)0xF0008B30U) /**< (ISC) Histogram Entry 456 */
#define REG_ISC_HIS_ENTRY457    (*(__I  uint32_t*)0xF0008B34U) /**< (ISC) Histogram Entry 457 */
#define REG_ISC_HIS_ENTRY458    (*(__I  uint32_t*)0xF0008B38U) /**< (ISC) Histogram Entry 458 */
#define REG_ISC_HIS_ENTRY459    (*(__I  uint32_t*)0xF0008B3CU) /**< (ISC) Histogram Entry 459 */
#define REG_ISC_HIS_ENTRY460    (*(__I  uint32_t*)0xF0008B40U) /**< (ISC) Histogram Entry 460 */
#define REG_ISC_HIS_ENTRY461    (*(__I  uint32_t*)0xF0008B44U) /**< (ISC) Histogram Entry 461 */
#define REG_ISC_HIS_ENTRY462    (*(__I  uint32_t*)0xF0008B48U) /**< (ISC) Histogram Entry 462 */
#define REG_ISC_HIS_ENTRY463    (*(__I  uint32_t*)0xF0008B4CU) /**< (ISC) Histogram Entry 463 */
#define REG_ISC_HIS_ENTRY464    (*(__I  uint32_t*)0xF0008B50U) /**< (ISC) Histogram Entry 464 */
#define REG_ISC_HIS_ENTRY465    (*(__I  uint32_t*)0xF0008B54U) /**< (ISC) Histogram Entry 465 */
#define REG_ISC_HIS_ENTRY466    (*(__I  uint32_t*)0xF0008B58U) /**< (ISC) Histogram Entry 466 */
#define REG_ISC_HIS_ENTRY467    (*(__I  uint32_t*)0xF0008B5CU) /**< (ISC) Histogram Entry 467 */
#define REG_ISC_HIS_ENTRY468    (*(__I  uint32_t*)0xF0008B60U) /**< (ISC) Histogram Entry 468 */
#define REG_ISC_HIS_ENTRY469    (*(__I  uint32_t*)0xF0008B64U) /**< (ISC) Histogram Entry 469 */
#define REG_ISC_HIS_ENTRY470    (*(__I  uint32_t*)0xF0008B68U) /**< (ISC) Histogram Entry 470 */
#define REG_ISC_HIS_ENTRY471    (*(__I  uint32_t*)0xF0008B6CU) /**< (ISC) Histogram Entry 471 */
#define REG_ISC_HIS_ENTRY472    (*(__I  uint32_t*)0xF0008B70U) /**< (ISC) Histogram Entry 472 */
#define REG_ISC_HIS_ENTRY473    (*(__I  uint32_t*)0xF0008B74U) /**< (ISC) Histogram Entry 473 */
#define REG_ISC_HIS_ENTRY474    (*(__I  uint32_t*)0xF0008B78U) /**< (ISC) Histogram Entry 474 */
#define REG_ISC_HIS_ENTRY475    (*(__I  uint32_t*)0xF0008B7CU) /**< (ISC) Histogram Entry 475 */
#define REG_ISC_HIS_ENTRY476    (*(__I  uint32_t*)0xF0008B80U) /**< (ISC) Histogram Entry 476 */
#define REG_ISC_HIS_ENTRY477    (*(__I  uint32_t*)0xF0008B84U) /**< (ISC) Histogram Entry 477 */
#define REG_ISC_HIS_ENTRY478    (*(__I  uint32_t*)0xF0008B88U) /**< (ISC) Histogram Entry 478 */
#define REG_ISC_HIS_ENTRY479    (*(__I  uint32_t*)0xF0008B8CU) /**< (ISC) Histogram Entry 479 */
#define REG_ISC_HIS_ENTRY480    (*(__I  uint32_t*)0xF0008B90U) /**< (ISC) Histogram Entry 480 */
#define REG_ISC_HIS_ENTRY481    (*(__I  uint32_t*)0xF0008B94U) /**< (ISC) Histogram Entry 481 */
#define REG_ISC_HIS_ENTRY482    (*(__I  uint32_t*)0xF0008B98U) /**< (ISC) Histogram Entry 482 */
#define REG_ISC_HIS_ENTRY483    (*(__I  uint32_t*)0xF0008B9CU) /**< (ISC) Histogram Entry 483 */
#define REG_ISC_HIS_ENTRY484    (*(__I  uint32_t*)0xF0008BA0U) /**< (ISC) Histogram Entry 484 */
#define REG_ISC_HIS_ENTRY485    (*(__I  uint32_t*)0xF0008BA4U) /**< (ISC) Histogram Entry 485 */
#define REG_ISC_HIS_ENTRY486    (*(__I  uint32_t*)0xF0008BA8U) /**< (ISC) Histogram Entry 486 */
#define REG_ISC_HIS_ENTRY487    (*(__I  uint32_t*)0xF0008BACU) /**< (ISC) Histogram Entry 487 */
#define REG_ISC_HIS_ENTRY488    (*(__I  uint32_t*)0xF0008BB0U) /**< (ISC) Histogram Entry 488 */
#define REG_ISC_HIS_ENTRY489    (*(__I  uint32_t*)0xF0008BB4U) /**< (ISC) Histogram Entry 489 */
#define REG_ISC_HIS_ENTRY490    (*(__I  uint32_t*)0xF0008BB8U) /**< (ISC) Histogram Entry 490 */
#define REG_ISC_HIS_ENTRY491    (*(__I  uint32_t*)0xF0008BBCU) /**< (ISC) Histogram Entry 491 */
#define REG_ISC_HIS_ENTRY492    (*(__I  uint32_t*)0xF0008BC0U) /**< (ISC) Histogram Entry 492 */
#define REG_ISC_HIS_ENTRY493    (*(__I  uint32_t*)0xF0008BC4U) /**< (ISC) Histogram Entry 493 */
#define REG_ISC_HIS_ENTRY494    (*(__I  uint32_t*)0xF0008BC8U) /**< (ISC) Histogram Entry 494 */
#define REG_ISC_HIS_ENTRY495    (*(__I  uint32_t*)0xF0008BCCU) /**< (ISC) Histogram Entry 495 */
#define REG_ISC_HIS_ENTRY496    (*(__I  uint32_t*)0xF0008BD0U) /**< (ISC) Histogram Entry 496 */
#define REG_ISC_HIS_ENTRY497    (*(__I  uint32_t*)0xF0008BD4U) /**< (ISC) Histogram Entry 497 */
#define REG_ISC_HIS_ENTRY498    (*(__I  uint32_t*)0xF0008BD8U) /**< (ISC) Histogram Entry 498 */
#define REG_ISC_HIS_ENTRY499    (*(__I  uint32_t*)0xF0008BDCU) /**< (ISC) Histogram Entry 499 */
#define REG_ISC_HIS_ENTRY500    (*(__I  uint32_t*)0xF0008BE0U) /**< (ISC) Histogram Entry 500 */
#define REG_ISC_HIS_ENTRY501    (*(__I  uint32_t*)0xF0008BE4U) /**< (ISC) Histogram Entry 501 */
#define REG_ISC_HIS_ENTRY502    (*(__I  uint32_t*)0xF0008BE8U) /**< (ISC) Histogram Entry 502 */
#define REG_ISC_HIS_ENTRY503    (*(__I  uint32_t*)0xF0008BECU) /**< (ISC) Histogram Entry 503 */
#define REG_ISC_HIS_ENTRY504    (*(__I  uint32_t*)0xF0008BF0U) /**< (ISC) Histogram Entry 504 */
#define REG_ISC_HIS_ENTRY505    (*(__I  uint32_t*)0xF0008BF4U) /**< (ISC) Histogram Entry 505 */
#define REG_ISC_HIS_ENTRY506    (*(__I  uint32_t*)0xF0008BF8U) /**< (ISC) Histogram Entry 506 */
#define REG_ISC_HIS_ENTRY507    (*(__I  uint32_t*)0xF0008BFCU) /**< (ISC) Histogram Entry 507 */
#define REG_ISC_HIS_ENTRY508    (*(__I  uint32_t*)0xF0008C00U) /**< (ISC) Histogram Entry 508 */
#define REG_ISC_HIS_ENTRY509    (*(__I  uint32_t*)0xF0008C04U) /**< (ISC) Histogram Entry 509 */
#define REG_ISC_HIS_ENTRY510    (*(__I  uint32_t*)0xF0008C08U) /**< (ISC) Histogram Entry 510 */
#define REG_ISC_HIS_ENTRY511    (*(__I  uint32_t*)0xF0008C0CU) /**< (ISC) Histogram Entry 511 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for ISC peripheral ========== */
#define ISC_INSTANCE_ID                          46         
#define ISC_CLOCK_ID                             46         

#endif /* _SAMA5D2_ISC_INSTANCE_ */
