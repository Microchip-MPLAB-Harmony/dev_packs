/**
 * \file
 *
 * \brief Instance description for LCDC
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
#ifndef _SAMA5D2_LCDC_INSTANCE_H_
#define _SAMA5D2_LCDC_INSTANCE_H_

/* ========== Register definition for LCDC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_LCDC_LCDCFG0        (0xF0000000) /**< (LCDC) LCD Controller Configuration Register 0 */
#define REG_LCDC_LCDCFG1        (0xF0000004) /**< (LCDC) LCD Controller Configuration Register 1 */
#define REG_LCDC_LCDCFG2        (0xF0000008) /**< (LCDC) LCD Controller Configuration Register 2 */
#define REG_LCDC_LCDCFG3        (0xF000000C) /**< (LCDC) LCD Controller Configuration Register 3 */
#define REG_LCDC_LCDCFG4        (0xF0000010) /**< (LCDC) LCD Controller Configuration Register 4 */
#define REG_LCDC_LCDCFG5        (0xF0000014) /**< (LCDC) LCD Controller Configuration Register 5 */
#define REG_LCDC_LCDCFG6        (0xF0000018) /**< (LCDC) LCD Controller Configuration Register 6 */
#define REG_LCDC_LCDEN          (0xF0000020) /**< (LCDC) LCD Controller Enable Register */
#define REG_LCDC_LCDDIS         (0xF0000024) /**< (LCDC) LCD Controller Disable Register */
#define REG_LCDC_LCDSR          (0xF0000028) /**< (LCDC) LCD Controller Status Register */
#define REG_LCDC_LCDIER         (0xF000002C) /**< (LCDC) LCD Controller Interrupt Enable Register */
#define REG_LCDC_LCDIDR         (0xF0000030) /**< (LCDC) LCD Controller Interrupt Disable Register */
#define REG_LCDC_LCDIMR         (0xF0000034) /**< (LCDC) LCD Controller Interrupt Mask Register */
#define REG_LCDC_LCDISR         (0xF0000038) /**< (LCDC) LCD Controller Interrupt Status Register */
#define REG_LCDC_ATTR           (0xF000003C) /**< (LCDC) LCD Controller Attribute Register */
#define REG_LCDC_BASECHER       (0xF0000040) /**< (LCDC) Base Layer Channel Enable Register */
#define REG_LCDC_BASECHDR       (0xF0000044) /**< (LCDC) Base Layer Channel Disable Register */
#define REG_LCDC_BASECHSR       (0xF0000048) /**< (LCDC) Base Layer Channel Status Register */
#define REG_LCDC_BASEIER        (0xF000004C) /**< (LCDC) Base Layer Interrupt Enable Register */
#define REG_LCDC_BASEIDR        (0xF0000050) /**< (LCDC) Base Layer Interrupt Disabled Register */
#define REG_LCDC_BASEIMR        (0xF0000054) /**< (LCDC) Base Layer Interrupt Mask Register */
#define REG_LCDC_BASEISR        (0xF0000058) /**< (LCDC) Base Layer Interrupt Status Register */
#define REG_LCDC_BASEHEAD       (0xF000005C) /**< (LCDC) Base DMA Head Register */
#define REG_LCDC_BASEADDR       (0xF0000060) /**< (LCDC) Base DMA Address Register */
#define REG_LCDC_BASECTRL       (0xF0000064) /**< (LCDC) Base DMA Control Register */
#define REG_LCDC_BASENEXT       (0xF0000068) /**< (LCDC) Base DMA Next Register */
#define REG_LCDC_BASECFG0       (0xF000006C) /**< (LCDC) Base Layer Configuration Register 0 */
#define REG_LCDC_BASECFG1       (0xF0000070) /**< (LCDC) Base Layer Configuration Register 1 */
#define REG_LCDC_BASECFG2       (0xF0000074) /**< (LCDC) Base Layer Configuration Register 2 */
#define REG_LCDC_BASECFG3       (0xF0000078) /**< (LCDC) Base Layer Configuration Register 3 */
#define REG_LCDC_BASECFG4       (0xF000007C) /**< (LCDC) Base Layer Configuration Register 4 */
#define REG_LCDC_BASECFG5       (0xF0000080) /**< (LCDC) Base Layer Configuration Register 5 */
#define REG_LCDC_BASECFG6       (0xF0000084) /**< (LCDC) Base Layer Configuration Register 6 */
#define REG_LCDC_OVR1CHER       (0xF0000140) /**< (LCDC) Overlay 1 Channel Enable Register */
#define REG_LCDC_OVR1CHDR       (0xF0000144) /**< (LCDC) Overlay 1 Channel Disable Register */
#define REG_LCDC_OVR1CHSR       (0xF0000148) /**< (LCDC) Overlay 1 Channel Status Register */
#define REG_LCDC_OVR1IER        (0xF000014C) /**< (LCDC) Overlay 1 Interrupt Enable Register */
#define REG_LCDC_OVR1IDR        (0xF0000150) /**< (LCDC) Overlay 1 Interrupt Disable Register */
#define REG_LCDC_OVR1IMR        (0xF0000154) /**< (LCDC) Overlay 1 Interrupt Mask Register */
#define REG_LCDC_OVR1ISR        (0xF0000158) /**< (LCDC) Overlay 1 Interrupt Status Register */
#define REG_LCDC_OVR1HEAD       (0xF000015C) /**< (LCDC) Overlay 1 DMA Head Register */
#define REG_LCDC_OVR1ADDR       (0xF0000160) /**< (LCDC) Overlay 1 DMA Address Register */
#define REG_LCDC_OVR1CTRL       (0xF0000164) /**< (LCDC) Overlay 1 DMA Control Register */
#define REG_LCDC_OVR1NEXT       (0xF0000168) /**< (LCDC) Overlay 1 DMA Next Register */
#define REG_LCDC_OVR1CFG0       (0xF000016C) /**< (LCDC) Overlay 1 Configuration Register 0 */
#define REG_LCDC_OVR1CFG1       (0xF0000170) /**< (LCDC) Overlay 1 Configuration Register 1 */
#define REG_LCDC_OVR1CFG2       (0xF0000174) /**< (LCDC) Overlay 1 Configuration Register 2 */
#define REG_LCDC_OVR1CFG3       (0xF0000178) /**< (LCDC) Overlay 1 Configuration Register 3 */
#define REG_LCDC_OVR1CFG4       (0xF000017C) /**< (LCDC) Overlay 1 Configuration Register 4 */
#define REG_LCDC_OVR1CFG5       (0xF0000180) /**< (LCDC) Overlay 1 Configuration Register 5 */
#define REG_LCDC_OVR1CFG6       (0xF0000184) /**< (LCDC) Overlay 1 Configuration Register 6 */
#define REG_LCDC_OVR1CFG7       (0xF0000188) /**< (LCDC) Overlay 1 Configuration Register 7 */
#define REG_LCDC_OVR1CFG8       (0xF000018C) /**< (LCDC) Overlay 1 Configuration Register 8 */
#define REG_LCDC_OVR1CFG9       (0xF0000190) /**< (LCDC) Overlay 1 Configuration Register 9 */
#define REG_LCDC_OVR2CHER       (0xF0000240) /**< (LCDC) Overlay 2 Channel Enable Register */
#define REG_LCDC_OVR2CHDR       (0xF0000244) /**< (LCDC) Overlay 2 Channel Disable Register */
#define REG_LCDC_OVR2CHSR       (0xF0000248) /**< (LCDC) Overlay 2 Channel Status Register */
#define REG_LCDC_OVR2IER        (0xF000024C) /**< (LCDC) Overlay 2 Interrupt Enable Register */
#define REG_LCDC_OVR2IDR        (0xF0000250) /**< (LCDC) Overlay 2 Interrupt Disable Register */
#define REG_LCDC_OVR2IMR        (0xF0000254) /**< (LCDC) Overlay 2 Interrupt Mask Register */
#define REG_LCDC_OVR2ISR        (0xF0000258) /**< (LCDC) Overlay 2 Interrupt Status Register */
#define REG_LCDC_OVR2HEAD       (0xF000025C) /**< (LCDC) Overlay 2 DMA Head Register */
#define REG_LCDC_OVR2ADDR       (0xF0000260) /**< (LCDC) Overlay 2 DMA Address Register */
#define REG_LCDC_OVR2CTRL       (0xF0000264) /**< (LCDC) Overlay 2 DMA Control Register */
#define REG_LCDC_OVR2NEXT       (0xF0000268) /**< (LCDC) Overlay 2 DMA Next Register */
#define REG_LCDC_OVR2CFG0       (0xF000026C) /**< (LCDC) Overlay 2 Configuration Register 0 */
#define REG_LCDC_OVR2CFG1       (0xF0000270) /**< (LCDC) Overlay 2 Configuration Register 1 */
#define REG_LCDC_OVR2CFG2       (0xF0000274) /**< (LCDC) Overlay 2 Configuration Register 2 */
#define REG_LCDC_OVR2CFG3       (0xF0000278) /**< (LCDC) Overlay 2 Configuration Register 3 */
#define REG_LCDC_OVR2CFG4       (0xF000027C) /**< (LCDC) Overlay 2 Configuration Register 4 */
#define REG_LCDC_OVR2CFG5       (0xF0000280) /**< (LCDC) Overlay 2 Configuration Register 5 */
#define REG_LCDC_OVR2CFG6       (0xF0000284) /**< (LCDC) Overlay 2 Configuration Register 6 */
#define REG_LCDC_OVR2CFG7       (0xF0000288) /**< (LCDC) Overlay 2 Configuration Register 7 */
#define REG_LCDC_OVR2CFG8       (0xF000028C) /**< (LCDC) Overlay 2 Configuration Register 8 */
#define REG_LCDC_OVR2CFG9       (0xF0000290) /**< (LCDC) Overlay 2 Configuration Register 9 */
#define REG_LCDC_HEOCHER        (0xF0000340) /**< (LCDC) High-End Overlay Channel Enable Register */
#define REG_LCDC_HEOCHDR        (0xF0000344) /**< (LCDC) High-End Overlay Channel Disable Register */
#define REG_LCDC_HEOCHSR        (0xF0000348) /**< (LCDC) High-End Overlay Channel Status Register */
#define REG_LCDC_HEOIER         (0xF000034C) /**< (LCDC) High-End Overlay Interrupt Enable Register */
#define REG_LCDC_HEOIDR         (0xF0000350) /**< (LCDC) High-End Overlay Interrupt Disable Register */
#define REG_LCDC_HEOIMR         (0xF0000354) /**< (LCDC) High-End Overlay Interrupt Mask Register */
#define REG_LCDC_HEOISR         (0xF0000358) /**< (LCDC) High-End Overlay Interrupt Status Register */
#define REG_LCDC_HEOHEAD        (0xF000035C) /**< (LCDC) High-End Overlay DMA Head Register */
#define REG_LCDC_HEOADDR        (0xF0000360) /**< (LCDC) High-End Overlay DMA Address Register */
#define REG_LCDC_HEOCTRL        (0xF0000364) /**< (LCDC) High-End Overlay DMA Control Register */
#define REG_LCDC_HEONEXT        (0xF0000368) /**< (LCDC) High-End Overlay DMA Next Register */
#define REG_LCDC_HEOUHEAD       (0xF000036C) /**< (LCDC) High-End Overlay U-UV DMA Head Register */
#define REG_LCDC_HEOUADDR       (0xF0000370) /**< (LCDC) High-End Overlay U-UV DMA Address Register */
#define REG_LCDC_HEOUCTRL       (0xF0000374) /**< (LCDC) High-End Overlay U-UV DMA Control Register */
#define REG_LCDC_HEOUNEXT       (0xF0000378) /**< (LCDC) High-End Overlay U-UV DMA Next Register */
#define REG_LCDC_HEOVHEAD       (0xF000037C) /**< (LCDC) High-End Overlay V DMA Head Register */
#define REG_LCDC_HEOVADDR       (0xF0000380) /**< (LCDC) High-End Overlay V DMA Address Register */
#define REG_LCDC_HEOVCTRL       (0xF0000384) /**< (LCDC) High-End Overlay V DMA Control Register */
#define REG_LCDC_HEOVNEXT       (0xF0000388) /**< (LCDC) High-End Overlay V DMA Next Register */
#define REG_LCDC_HEOCFG0        (0xF000038C) /**< (LCDC) High-End Overlay Configuration Register 0 */
#define REG_LCDC_HEOCFG1        (0xF0000390) /**< (LCDC) High-End Overlay Configuration Register 1 */
#define REG_LCDC_HEOCFG2        (0xF0000394) /**< (LCDC) High-End Overlay Configuration Register 2 */
#define REG_LCDC_HEOCFG3        (0xF0000398) /**< (LCDC) High-End Overlay Configuration Register 3 */
#define REG_LCDC_HEOCFG4        (0xF000039C) /**< (LCDC) High-End Overlay Configuration Register 4 */
#define REG_LCDC_HEOCFG5        (0xF00003A0) /**< (LCDC) High-End Overlay Configuration Register 5 */
#define REG_LCDC_HEOCFG6        (0xF00003A4) /**< (LCDC) High-End Overlay Configuration Register 6 */
#define REG_LCDC_HEOCFG7        (0xF00003A8) /**< (LCDC) High-End Overlay Configuration Register 7 */
#define REG_LCDC_HEOCFG8        (0xF00003AC) /**< (LCDC) High-End Overlay Configuration Register 8 */
#define REG_LCDC_HEOCFG9        (0xF00003B0) /**< (LCDC) High-End Overlay Configuration Register 9 */
#define REG_LCDC_HEOCFG10       (0xF00003B4) /**< (LCDC) High-End Overlay Configuration Register 10 */
#define REG_LCDC_HEOCFG11       (0xF00003B8) /**< (LCDC) High-End Overlay Configuration Register 11 */
#define REG_LCDC_HEOCFG12       (0xF00003BC) /**< (LCDC) High-End Overlay Configuration Register 12 */
#define REG_LCDC_HEOCFG13       (0xF00003C0) /**< (LCDC) High-End Overlay Configuration Register 13 */
#define REG_LCDC_HEOCFG14       (0xF00003C4) /**< (LCDC) High-End Overlay Configuration Register 14 */
#define REG_LCDC_HEOCFG15       (0xF00003C8) /**< (LCDC) High-End Overlay Configuration Register 15 */
#define REG_LCDC_HEOCFG16       (0xF00003CC) /**< (LCDC) High-End Overlay Configuration Register 16 */
#define REG_LCDC_HEOCFG17       (0xF00003D0) /**< (LCDC) High-End Overlay Configuration Register 17 */
#define REG_LCDC_HEOCFG18       (0xF00003D4) /**< (LCDC) High-End Overlay Configuration Register 18 */
#define REG_LCDC_HEOCFG19       (0xF00003D8) /**< (LCDC) High-End Overlay Configuration Register 19 */
#define REG_LCDC_HEOCFG20       (0xF00003DC) /**< (LCDC) High-End Overlay Configuration Register 20 */
#define REG_LCDC_HEOCFG21       (0xF00003E0) /**< (LCDC) High-End Overlay Configuration Register 21 */
#define REG_LCDC_HEOCFG22       (0xF00003E4) /**< (LCDC) High-End Overlay Configuration Register 22 */
#define REG_LCDC_HEOCFG23       (0xF00003E8) /**< (LCDC) High-End Overlay Configuration Register 23 */
#define REG_LCDC_HEOCFG24       (0xF00003EC) /**< (LCDC) High-End Overlay Configuration Register 24 */
#define REG_LCDC_HEOCFG25       (0xF00003F0) /**< (LCDC) High-End Overlay Configuration Register 25 */
#define REG_LCDC_HEOCFG26       (0xF00003F4) /**< (LCDC) High-End Overlay Configuration Register 26 */
#define REG_LCDC_HEOCFG27       (0xF00003F8) /**< (LCDC) High-End Overlay Configuration Register 27 */
#define REG_LCDC_HEOCFG28       (0xF00003FC) /**< (LCDC) High-End Overlay Configuration Register 28 */
#define REG_LCDC_HEOCFG29       (0xF0000400) /**< (LCDC) High-End Overlay Configuration Register 29 */
#define REG_LCDC_HEOCFG30       (0xF0000404) /**< (LCDC) High-End Overlay Configuration Register 30 */
#define REG_LCDC_HEOCFG31       (0xF0000408) /**< (LCDC) High-End Overlay Configuration Register 31 */
#define REG_LCDC_HEOCFG32       (0xF000040C) /**< (LCDC) High-End Overlay Configuration Register 32 */
#define REG_LCDC_HEOCFG33       (0xF0000410) /**< (LCDC) High-End Overlay Configuration Register 33 */
#define REG_LCDC_HEOCFG34       (0xF0000414) /**< (LCDC) High-End Overlay Configuration Register 34 */
#define REG_LCDC_HEOCFG35       (0xF0000418) /**< (LCDC) High-End Overlay Configuration Register 35 */
#define REG_LCDC_HEOCFG36       (0xF000041C) /**< (LCDC) High-End Overlay Configuration Register 36 */
#define REG_LCDC_HEOCFG37       (0xF0000420) /**< (LCDC) High-End Overlay Configuration Register 37 */
#define REG_LCDC_HEOCFG38       (0xF0000424) /**< (LCDC) High-End Overlay Configuration Register 38 */
#define REG_LCDC_HEOCFG39       (0xF0000428) /**< (LCDC) High-End Overlay Configuration Register 39 */
#define REG_LCDC_HEOCFG40       (0xF000042C) /**< (LCDC) High-End Overlay Configuration Register 40 */
#define REG_LCDC_HEOCFG41       (0xF0000430) /**< (LCDC) High-End Overlay Configuration Register 41 */
#define REG_LCDC_PPCHER         (0xF0000540) /**< (LCDC) Post Processing Channel Enable Register */
#define REG_LCDC_PPCHDR         (0xF0000544) /**< (LCDC) Post Processing Channel Disable Register */
#define REG_LCDC_PPCHSR         (0xF0000548) /**< (LCDC) Post Processing Channel Status Register */
#define REG_LCDC_PPIER          (0xF000054C) /**< (LCDC) Post Processing Interrupt Enable Register */
#define REG_LCDC_PPIDR          (0xF0000550) /**< (LCDC) Post Processing Interrupt Disable Register */
#define REG_LCDC_PPIMR          (0xF0000554) /**< (LCDC) Post Processing Interrupt Mask Register */
#define REG_LCDC_PPISR          (0xF0000558) /**< (LCDC) Post Processing Interrupt Status Register */
#define REG_LCDC_PPHEAD         (0xF000055C) /**< (LCDC) Post Processing Head Register */
#define REG_LCDC_PPADDR         (0xF0000560) /**< (LCDC) Post Processing Address Register */
#define REG_LCDC_PPCTRL         (0xF0000564) /**< (LCDC) Post Processing Control Register */
#define REG_LCDC_PPNEXT         (0xF0000568) /**< (LCDC) Post Processing Next Register */
#define REG_LCDC_PPCFG0         (0xF000056C) /**< (LCDC) Post Processing Configuration Register 0 */
#define REG_LCDC_PPCFG1         (0xF0000570) /**< (LCDC) Post Processing Configuration Register 1 */
#define REG_LCDC_PPCFG2         (0xF0000574) /**< (LCDC) Post Processing Configuration Register 2 */
#define REG_LCDC_PPCFG3         (0xF0000578) /**< (LCDC) Post Processing Configuration Register 3 */
#define REG_LCDC_PPCFG4         (0xF000057C) /**< (LCDC) Post Processing Configuration Register 4 */
#define REG_LCDC_PPCFG5         (0xF0000580) /**< (LCDC) Post Processing Configuration Register 5 */
#define REG_LCDC_BASECLUT       (0xF0000600) /**< (LCDC) Base CLUT Register */
#define REG_LCDC_BASECLUT0      (0xF0000600) /**< (LCDC) Base CLUT Register 0 */
#define REG_LCDC_BASECLUT1      (0xF0000604) /**< (LCDC) Base CLUT Register 1 */
#define REG_LCDC_BASECLUT2      (0xF0000608) /**< (LCDC) Base CLUT Register 2 */
#define REG_LCDC_BASECLUT3      (0xF000060C) /**< (LCDC) Base CLUT Register 3 */
#define REG_LCDC_BASECLUT4      (0xF0000610) /**< (LCDC) Base CLUT Register 4 */
#define REG_LCDC_BASECLUT5      (0xF0000614) /**< (LCDC) Base CLUT Register 5 */
#define REG_LCDC_BASECLUT6      (0xF0000618) /**< (LCDC) Base CLUT Register 6 */
#define REG_LCDC_BASECLUT7      (0xF000061C) /**< (LCDC) Base CLUT Register 7 */
#define REG_LCDC_BASECLUT8      (0xF0000620) /**< (LCDC) Base CLUT Register 8 */
#define REG_LCDC_BASECLUT9      (0xF0000624) /**< (LCDC) Base CLUT Register 9 */
#define REG_LCDC_BASECLUT10     (0xF0000628) /**< (LCDC) Base CLUT Register 10 */
#define REG_LCDC_BASECLUT11     (0xF000062C) /**< (LCDC) Base CLUT Register 11 */
#define REG_LCDC_BASECLUT12     (0xF0000630) /**< (LCDC) Base CLUT Register 12 */
#define REG_LCDC_BASECLUT13     (0xF0000634) /**< (LCDC) Base CLUT Register 13 */
#define REG_LCDC_BASECLUT14     (0xF0000638) /**< (LCDC) Base CLUT Register 14 */
#define REG_LCDC_BASECLUT15     (0xF000063C) /**< (LCDC) Base CLUT Register 15 */
#define REG_LCDC_BASECLUT16     (0xF0000640) /**< (LCDC) Base CLUT Register 16 */
#define REG_LCDC_BASECLUT17     (0xF0000644) /**< (LCDC) Base CLUT Register 17 */
#define REG_LCDC_BASECLUT18     (0xF0000648) /**< (LCDC) Base CLUT Register 18 */
#define REG_LCDC_BASECLUT19     (0xF000064C) /**< (LCDC) Base CLUT Register 19 */
#define REG_LCDC_BASECLUT20     (0xF0000650) /**< (LCDC) Base CLUT Register 20 */
#define REG_LCDC_BASECLUT21     (0xF0000654) /**< (LCDC) Base CLUT Register 21 */
#define REG_LCDC_BASECLUT22     (0xF0000658) /**< (LCDC) Base CLUT Register 22 */
#define REG_LCDC_BASECLUT23     (0xF000065C) /**< (LCDC) Base CLUT Register 23 */
#define REG_LCDC_BASECLUT24     (0xF0000660) /**< (LCDC) Base CLUT Register 24 */
#define REG_LCDC_BASECLUT25     (0xF0000664) /**< (LCDC) Base CLUT Register 25 */
#define REG_LCDC_BASECLUT26     (0xF0000668) /**< (LCDC) Base CLUT Register 26 */
#define REG_LCDC_BASECLUT27     (0xF000066C) /**< (LCDC) Base CLUT Register 27 */
#define REG_LCDC_BASECLUT28     (0xF0000670) /**< (LCDC) Base CLUT Register 28 */
#define REG_LCDC_BASECLUT29     (0xF0000674) /**< (LCDC) Base CLUT Register 29 */
#define REG_LCDC_BASECLUT30     (0xF0000678) /**< (LCDC) Base CLUT Register 30 */
#define REG_LCDC_BASECLUT31     (0xF000067C) /**< (LCDC) Base CLUT Register 31 */
#define REG_LCDC_BASECLUT32     (0xF0000680) /**< (LCDC) Base CLUT Register 32 */
#define REG_LCDC_BASECLUT33     (0xF0000684) /**< (LCDC) Base CLUT Register 33 */
#define REG_LCDC_BASECLUT34     (0xF0000688) /**< (LCDC) Base CLUT Register 34 */
#define REG_LCDC_BASECLUT35     (0xF000068C) /**< (LCDC) Base CLUT Register 35 */
#define REG_LCDC_BASECLUT36     (0xF0000690) /**< (LCDC) Base CLUT Register 36 */
#define REG_LCDC_BASECLUT37     (0xF0000694) /**< (LCDC) Base CLUT Register 37 */
#define REG_LCDC_BASECLUT38     (0xF0000698) /**< (LCDC) Base CLUT Register 38 */
#define REG_LCDC_BASECLUT39     (0xF000069C) /**< (LCDC) Base CLUT Register 39 */
#define REG_LCDC_BASECLUT40     (0xF00006A0) /**< (LCDC) Base CLUT Register 40 */
#define REG_LCDC_BASECLUT41     (0xF00006A4) /**< (LCDC) Base CLUT Register 41 */
#define REG_LCDC_BASECLUT42     (0xF00006A8) /**< (LCDC) Base CLUT Register 42 */
#define REG_LCDC_BASECLUT43     (0xF00006AC) /**< (LCDC) Base CLUT Register 43 */
#define REG_LCDC_BASECLUT44     (0xF00006B0) /**< (LCDC) Base CLUT Register 44 */
#define REG_LCDC_BASECLUT45     (0xF00006B4) /**< (LCDC) Base CLUT Register 45 */
#define REG_LCDC_BASECLUT46     (0xF00006B8) /**< (LCDC) Base CLUT Register 46 */
#define REG_LCDC_BASECLUT47     (0xF00006BC) /**< (LCDC) Base CLUT Register 47 */
#define REG_LCDC_BASECLUT48     (0xF00006C0) /**< (LCDC) Base CLUT Register 48 */
#define REG_LCDC_BASECLUT49     (0xF00006C4) /**< (LCDC) Base CLUT Register 49 */
#define REG_LCDC_BASECLUT50     (0xF00006C8) /**< (LCDC) Base CLUT Register 50 */
#define REG_LCDC_BASECLUT51     (0xF00006CC) /**< (LCDC) Base CLUT Register 51 */
#define REG_LCDC_BASECLUT52     (0xF00006D0) /**< (LCDC) Base CLUT Register 52 */
#define REG_LCDC_BASECLUT53     (0xF00006D4) /**< (LCDC) Base CLUT Register 53 */
#define REG_LCDC_BASECLUT54     (0xF00006D8) /**< (LCDC) Base CLUT Register 54 */
#define REG_LCDC_BASECLUT55     (0xF00006DC) /**< (LCDC) Base CLUT Register 55 */
#define REG_LCDC_BASECLUT56     (0xF00006E0) /**< (LCDC) Base CLUT Register 56 */
#define REG_LCDC_BASECLUT57     (0xF00006E4) /**< (LCDC) Base CLUT Register 57 */
#define REG_LCDC_BASECLUT58     (0xF00006E8) /**< (LCDC) Base CLUT Register 58 */
#define REG_LCDC_BASECLUT59     (0xF00006EC) /**< (LCDC) Base CLUT Register 59 */
#define REG_LCDC_BASECLUT60     (0xF00006F0) /**< (LCDC) Base CLUT Register 60 */
#define REG_LCDC_BASECLUT61     (0xF00006F4) /**< (LCDC) Base CLUT Register 61 */
#define REG_LCDC_BASECLUT62     (0xF00006F8) /**< (LCDC) Base CLUT Register 62 */
#define REG_LCDC_BASECLUT63     (0xF00006FC) /**< (LCDC) Base CLUT Register 63 */
#define REG_LCDC_BASECLUT64     (0xF0000700) /**< (LCDC) Base CLUT Register 64 */
#define REG_LCDC_BASECLUT65     (0xF0000704) /**< (LCDC) Base CLUT Register 65 */
#define REG_LCDC_BASECLUT66     (0xF0000708) /**< (LCDC) Base CLUT Register 66 */
#define REG_LCDC_BASECLUT67     (0xF000070C) /**< (LCDC) Base CLUT Register 67 */
#define REG_LCDC_BASECLUT68     (0xF0000710) /**< (LCDC) Base CLUT Register 68 */
#define REG_LCDC_BASECLUT69     (0xF0000714) /**< (LCDC) Base CLUT Register 69 */
#define REG_LCDC_BASECLUT70     (0xF0000718) /**< (LCDC) Base CLUT Register 70 */
#define REG_LCDC_BASECLUT71     (0xF000071C) /**< (LCDC) Base CLUT Register 71 */
#define REG_LCDC_BASECLUT72     (0xF0000720) /**< (LCDC) Base CLUT Register 72 */
#define REG_LCDC_BASECLUT73     (0xF0000724) /**< (LCDC) Base CLUT Register 73 */
#define REG_LCDC_BASECLUT74     (0xF0000728) /**< (LCDC) Base CLUT Register 74 */
#define REG_LCDC_BASECLUT75     (0xF000072C) /**< (LCDC) Base CLUT Register 75 */
#define REG_LCDC_BASECLUT76     (0xF0000730) /**< (LCDC) Base CLUT Register 76 */
#define REG_LCDC_BASECLUT77     (0xF0000734) /**< (LCDC) Base CLUT Register 77 */
#define REG_LCDC_BASECLUT78     (0xF0000738) /**< (LCDC) Base CLUT Register 78 */
#define REG_LCDC_BASECLUT79     (0xF000073C) /**< (LCDC) Base CLUT Register 79 */
#define REG_LCDC_BASECLUT80     (0xF0000740) /**< (LCDC) Base CLUT Register 80 */
#define REG_LCDC_BASECLUT81     (0xF0000744) /**< (LCDC) Base CLUT Register 81 */
#define REG_LCDC_BASECLUT82     (0xF0000748) /**< (LCDC) Base CLUT Register 82 */
#define REG_LCDC_BASECLUT83     (0xF000074C) /**< (LCDC) Base CLUT Register 83 */
#define REG_LCDC_BASECLUT84     (0xF0000750) /**< (LCDC) Base CLUT Register 84 */
#define REG_LCDC_BASECLUT85     (0xF0000754) /**< (LCDC) Base CLUT Register 85 */
#define REG_LCDC_BASECLUT86     (0xF0000758) /**< (LCDC) Base CLUT Register 86 */
#define REG_LCDC_BASECLUT87     (0xF000075C) /**< (LCDC) Base CLUT Register 87 */
#define REG_LCDC_BASECLUT88     (0xF0000760) /**< (LCDC) Base CLUT Register 88 */
#define REG_LCDC_BASECLUT89     (0xF0000764) /**< (LCDC) Base CLUT Register 89 */
#define REG_LCDC_BASECLUT90     (0xF0000768) /**< (LCDC) Base CLUT Register 90 */
#define REG_LCDC_BASECLUT91     (0xF000076C) /**< (LCDC) Base CLUT Register 91 */
#define REG_LCDC_BASECLUT92     (0xF0000770) /**< (LCDC) Base CLUT Register 92 */
#define REG_LCDC_BASECLUT93     (0xF0000774) /**< (LCDC) Base CLUT Register 93 */
#define REG_LCDC_BASECLUT94     (0xF0000778) /**< (LCDC) Base CLUT Register 94 */
#define REG_LCDC_BASECLUT95     (0xF000077C) /**< (LCDC) Base CLUT Register 95 */
#define REG_LCDC_BASECLUT96     (0xF0000780) /**< (LCDC) Base CLUT Register 96 */
#define REG_LCDC_BASECLUT97     (0xF0000784) /**< (LCDC) Base CLUT Register 97 */
#define REG_LCDC_BASECLUT98     (0xF0000788) /**< (LCDC) Base CLUT Register 98 */
#define REG_LCDC_BASECLUT99     (0xF000078C) /**< (LCDC) Base CLUT Register 99 */
#define REG_LCDC_BASECLUT100    (0xF0000790) /**< (LCDC) Base CLUT Register 100 */
#define REG_LCDC_BASECLUT101    (0xF0000794) /**< (LCDC) Base CLUT Register 101 */
#define REG_LCDC_BASECLUT102    (0xF0000798) /**< (LCDC) Base CLUT Register 102 */
#define REG_LCDC_BASECLUT103    (0xF000079C) /**< (LCDC) Base CLUT Register 103 */
#define REG_LCDC_BASECLUT104    (0xF00007A0) /**< (LCDC) Base CLUT Register 104 */
#define REG_LCDC_BASECLUT105    (0xF00007A4) /**< (LCDC) Base CLUT Register 105 */
#define REG_LCDC_BASECLUT106    (0xF00007A8) /**< (LCDC) Base CLUT Register 106 */
#define REG_LCDC_BASECLUT107    (0xF00007AC) /**< (LCDC) Base CLUT Register 107 */
#define REG_LCDC_BASECLUT108    (0xF00007B0) /**< (LCDC) Base CLUT Register 108 */
#define REG_LCDC_BASECLUT109    (0xF00007B4) /**< (LCDC) Base CLUT Register 109 */
#define REG_LCDC_BASECLUT110    (0xF00007B8) /**< (LCDC) Base CLUT Register 110 */
#define REG_LCDC_BASECLUT111    (0xF00007BC) /**< (LCDC) Base CLUT Register 111 */
#define REG_LCDC_BASECLUT112    (0xF00007C0) /**< (LCDC) Base CLUT Register 112 */
#define REG_LCDC_BASECLUT113    (0xF00007C4) /**< (LCDC) Base CLUT Register 113 */
#define REG_LCDC_BASECLUT114    (0xF00007C8) /**< (LCDC) Base CLUT Register 114 */
#define REG_LCDC_BASECLUT115    (0xF00007CC) /**< (LCDC) Base CLUT Register 115 */
#define REG_LCDC_BASECLUT116    (0xF00007D0) /**< (LCDC) Base CLUT Register 116 */
#define REG_LCDC_BASECLUT117    (0xF00007D4) /**< (LCDC) Base CLUT Register 117 */
#define REG_LCDC_BASECLUT118    (0xF00007D8) /**< (LCDC) Base CLUT Register 118 */
#define REG_LCDC_BASECLUT119    (0xF00007DC) /**< (LCDC) Base CLUT Register 119 */
#define REG_LCDC_BASECLUT120    (0xF00007E0) /**< (LCDC) Base CLUT Register 120 */
#define REG_LCDC_BASECLUT121    (0xF00007E4) /**< (LCDC) Base CLUT Register 121 */
#define REG_LCDC_BASECLUT122    (0xF00007E8) /**< (LCDC) Base CLUT Register 122 */
#define REG_LCDC_BASECLUT123    (0xF00007EC) /**< (LCDC) Base CLUT Register 123 */
#define REG_LCDC_BASECLUT124    (0xF00007F0) /**< (LCDC) Base CLUT Register 124 */
#define REG_LCDC_BASECLUT125    (0xF00007F4) /**< (LCDC) Base CLUT Register 125 */
#define REG_LCDC_BASECLUT126    (0xF00007F8) /**< (LCDC) Base CLUT Register 126 */
#define REG_LCDC_BASECLUT127    (0xF00007FC) /**< (LCDC) Base CLUT Register 127 */
#define REG_LCDC_BASECLUT128    (0xF0000800) /**< (LCDC) Base CLUT Register 128 */
#define REG_LCDC_BASECLUT129    (0xF0000804) /**< (LCDC) Base CLUT Register 129 */
#define REG_LCDC_BASECLUT130    (0xF0000808) /**< (LCDC) Base CLUT Register 130 */
#define REG_LCDC_BASECLUT131    (0xF000080C) /**< (LCDC) Base CLUT Register 131 */
#define REG_LCDC_BASECLUT132    (0xF0000810) /**< (LCDC) Base CLUT Register 132 */
#define REG_LCDC_BASECLUT133    (0xF0000814) /**< (LCDC) Base CLUT Register 133 */
#define REG_LCDC_BASECLUT134    (0xF0000818) /**< (LCDC) Base CLUT Register 134 */
#define REG_LCDC_BASECLUT135    (0xF000081C) /**< (LCDC) Base CLUT Register 135 */
#define REG_LCDC_BASECLUT136    (0xF0000820) /**< (LCDC) Base CLUT Register 136 */
#define REG_LCDC_BASECLUT137    (0xF0000824) /**< (LCDC) Base CLUT Register 137 */
#define REG_LCDC_BASECLUT138    (0xF0000828) /**< (LCDC) Base CLUT Register 138 */
#define REG_LCDC_BASECLUT139    (0xF000082C) /**< (LCDC) Base CLUT Register 139 */
#define REG_LCDC_BASECLUT140    (0xF0000830) /**< (LCDC) Base CLUT Register 140 */
#define REG_LCDC_BASECLUT141    (0xF0000834) /**< (LCDC) Base CLUT Register 141 */
#define REG_LCDC_BASECLUT142    (0xF0000838) /**< (LCDC) Base CLUT Register 142 */
#define REG_LCDC_BASECLUT143    (0xF000083C) /**< (LCDC) Base CLUT Register 143 */
#define REG_LCDC_BASECLUT144    (0xF0000840) /**< (LCDC) Base CLUT Register 144 */
#define REG_LCDC_BASECLUT145    (0xF0000844) /**< (LCDC) Base CLUT Register 145 */
#define REG_LCDC_BASECLUT146    (0xF0000848) /**< (LCDC) Base CLUT Register 146 */
#define REG_LCDC_BASECLUT147    (0xF000084C) /**< (LCDC) Base CLUT Register 147 */
#define REG_LCDC_BASECLUT148    (0xF0000850) /**< (LCDC) Base CLUT Register 148 */
#define REG_LCDC_BASECLUT149    (0xF0000854) /**< (LCDC) Base CLUT Register 149 */
#define REG_LCDC_BASECLUT150    (0xF0000858) /**< (LCDC) Base CLUT Register 150 */
#define REG_LCDC_BASECLUT151    (0xF000085C) /**< (LCDC) Base CLUT Register 151 */
#define REG_LCDC_BASECLUT152    (0xF0000860) /**< (LCDC) Base CLUT Register 152 */
#define REG_LCDC_BASECLUT153    (0xF0000864) /**< (LCDC) Base CLUT Register 153 */
#define REG_LCDC_BASECLUT154    (0xF0000868) /**< (LCDC) Base CLUT Register 154 */
#define REG_LCDC_BASECLUT155    (0xF000086C) /**< (LCDC) Base CLUT Register 155 */
#define REG_LCDC_BASECLUT156    (0xF0000870) /**< (LCDC) Base CLUT Register 156 */
#define REG_LCDC_BASECLUT157    (0xF0000874) /**< (LCDC) Base CLUT Register 157 */
#define REG_LCDC_BASECLUT158    (0xF0000878) /**< (LCDC) Base CLUT Register 158 */
#define REG_LCDC_BASECLUT159    (0xF000087C) /**< (LCDC) Base CLUT Register 159 */
#define REG_LCDC_BASECLUT160    (0xF0000880) /**< (LCDC) Base CLUT Register 160 */
#define REG_LCDC_BASECLUT161    (0xF0000884) /**< (LCDC) Base CLUT Register 161 */
#define REG_LCDC_BASECLUT162    (0xF0000888) /**< (LCDC) Base CLUT Register 162 */
#define REG_LCDC_BASECLUT163    (0xF000088C) /**< (LCDC) Base CLUT Register 163 */
#define REG_LCDC_BASECLUT164    (0xF0000890) /**< (LCDC) Base CLUT Register 164 */
#define REG_LCDC_BASECLUT165    (0xF0000894) /**< (LCDC) Base CLUT Register 165 */
#define REG_LCDC_BASECLUT166    (0xF0000898) /**< (LCDC) Base CLUT Register 166 */
#define REG_LCDC_BASECLUT167    (0xF000089C) /**< (LCDC) Base CLUT Register 167 */
#define REG_LCDC_BASECLUT168    (0xF00008A0) /**< (LCDC) Base CLUT Register 168 */
#define REG_LCDC_BASECLUT169    (0xF00008A4) /**< (LCDC) Base CLUT Register 169 */
#define REG_LCDC_BASECLUT170    (0xF00008A8) /**< (LCDC) Base CLUT Register 170 */
#define REG_LCDC_BASECLUT171    (0xF00008AC) /**< (LCDC) Base CLUT Register 171 */
#define REG_LCDC_BASECLUT172    (0xF00008B0) /**< (LCDC) Base CLUT Register 172 */
#define REG_LCDC_BASECLUT173    (0xF00008B4) /**< (LCDC) Base CLUT Register 173 */
#define REG_LCDC_BASECLUT174    (0xF00008B8) /**< (LCDC) Base CLUT Register 174 */
#define REG_LCDC_BASECLUT175    (0xF00008BC) /**< (LCDC) Base CLUT Register 175 */
#define REG_LCDC_BASECLUT176    (0xF00008C0) /**< (LCDC) Base CLUT Register 176 */
#define REG_LCDC_BASECLUT177    (0xF00008C4) /**< (LCDC) Base CLUT Register 177 */
#define REG_LCDC_BASECLUT178    (0xF00008C8) /**< (LCDC) Base CLUT Register 178 */
#define REG_LCDC_BASECLUT179    (0xF00008CC) /**< (LCDC) Base CLUT Register 179 */
#define REG_LCDC_BASECLUT180    (0xF00008D0) /**< (LCDC) Base CLUT Register 180 */
#define REG_LCDC_BASECLUT181    (0xF00008D4) /**< (LCDC) Base CLUT Register 181 */
#define REG_LCDC_BASECLUT182    (0xF00008D8) /**< (LCDC) Base CLUT Register 182 */
#define REG_LCDC_BASECLUT183    (0xF00008DC) /**< (LCDC) Base CLUT Register 183 */
#define REG_LCDC_BASECLUT184    (0xF00008E0) /**< (LCDC) Base CLUT Register 184 */
#define REG_LCDC_BASECLUT185    (0xF00008E4) /**< (LCDC) Base CLUT Register 185 */
#define REG_LCDC_BASECLUT186    (0xF00008E8) /**< (LCDC) Base CLUT Register 186 */
#define REG_LCDC_BASECLUT187    (0xF00008EC) /**< (LCDC) Base CLUT Register 187 */
#define REG_LCDC_BASECLUT188    (0xF00008F0) /**< (LCDC) Base CLUT Register 188 */
#define REG_LCDC_BASECLUT189    (0xF00008F4) /**< (LCDC) Base CLUT Register 189 */
#define REG_LCDC_BASECLUT190    (0xF00008F8) /**< (LCDC) Base CLUT Register 190 */
#define REG_LCDC_BASECLUT191    (0xF00008FC) /**< (LCDC) Base CLUT Register 191 */
#define REG_LCDC_BASECLUT192    (0xF0000900) /**< (LCDC) Base CLUT Register 192 */
#define REG_LCDC_BASECLUT193    (0xF0000904) /**< (LCDC) Base CLUT Register 193 */
#define REG_LCDC_BASECLUT194    (0xF0000908) /**< (LCDC) Base CLUT Register 194 */
#define REG_LCDC_BASECLUT195    (0xF000090C) /**< (LCDC) Base CLUT Register 195 */
#define REG_LCDC_BASECLUT196    (0xF0000910) /**< (LCDC) Base CLUT Register 196 */
#define REG_LCDC_BASECLUT197    (0xF0000914) /**< (LCDC) Base CLUT Register 197 */
#define REG_LCDC_BASECLUT198    (0xF0000918) /**< (LCDC) Base CLUT Register 198 */
#define REG_LCDC_BASECLUT199    (0xF000091C) /**< (LCDC) Base CLUT Register 199 */
#define REG_LCDC_BASECLUT200    (0xF0000920) /**< (LCDC) Base CLUT Register 200 */
#define REG_LCDC_BASECLUT201    (0xF0000924) /**< (LCDC) Base CLUT Register 201 */
#define REG_LCDC_BASECLUT202    (0xF0000928) /**< (LCDC) Base CLUT Register 202 */
#define REG_LCDC_BASECLUT203    (0xF000092C) /**< (LCDC) Base CLUT Register 203 */
#define REG_LCDC_BASECLUT204    (0xF0000930) /**< (LCDC) Base CLUT Register 204 */
#define REG_LCDC_BASECLUT205    (0xF0000934) /**< (LCDC) Base CLUT Register 205 */
#define REG_LCDC_BASECLUT206    (0xF0000938) /**< (LCDC) Base CLUT Register 206 */
#define REG_LCDC_BASECLUT207    (0xF000093C) /**< (LCDC) Base CLUT Register 207 */
#define REG_LCDC_BASECLUT208    (0xF0000940) /**< (LCDC) Base CLUT Register 208 */
#define REG_LCDC_BASECLUT209    (0xF0000944) /**< (LCDC) Base CLUT Register 209 */
#define REG_LCDC_BASECLUT210    (0xF0000948) /**< (LCDC) Base CLUT Register 210 */
#define REG_LCDC_BASECLUT211    (0xF000094C) /**< (LCDC) Base CLUT Register 211 */
#define REG_LCDC_BASECLUT212    (0xF0000950) /**< (LCDC) Base CLUT Register 212 */
#define REG_LCDC_BASECLUT213    (0xF0000954) /**< (LCDC) Base CLUT Register 213 */
#define REG_LCDC_BASECLUT214    (0xF0000958) /**< (LCDC) Base CLUT Register 214 */
#define REG_LCDC_BASECLUT215    (0xF000095C) /**< (LCDC) Base CLUT Register 215 */
#define REG_LCDC_BASECLUT216    (0xF0000960) /**< (LCDC) Base CLUT Register 216 */
#define REG_LCDC_BASECLUT217    (0xF0000964) /**< (LCDC) Base CLUT Register 217 */
#define REG_LCDC_BASECLUT218    (0xF0000968) /**< (LCDC) Base CLUT Register 218 */
#define REG_LCDC_BASECLUT219    (0xF000096C) /**< (LCDC) Base CLUT Register 219 */
#define REG_LCDC_BASECLUT220    (0xF0000970) /**< (LCDC) Base CLUT Register 220 */
#define REG_LCDC_BASECLUT221    (0xF0000974) /**< (LCDC) Base CLUT Register 221 */
#define REG_LCDC_BASECLUT222    (0xF0000978) /**< (LCDC) Base CLUT Register 222 */
#define REG_LCDC_BASECLUT223    (0xF000097C) /**< (LCDC) Base CLUT Register 223 */
#define REG_LCDC_BASECLUT224    (0xF0000980) /**< (LCDC) Base CLUT Register 224 */
#define REG_LCDC_BASECLUT225    (0xF0000984) /**< (LCDC) Base CLUT Register 225 */
#define REG_LCDC_BASECLUT226    (0xF0000988) /**< (LCDC) Base CLUT Register 226 */
#define REG_LCDC_BASECLUT227    (0xF000098C) /**< (LCDC) Base CLUT Register 227 */
#define REG_LCDC_BASECLUT228    (0xF0000990) /**< (LCDC) Base CLUT Register 228 */
#define REG_LCDC_BASECLUT229    (0xF0000994) /**< (LCDC) Base CLUT Register 229 */
#define REG_LCDC_BASECLUT230    (0xF0000998) /**< (LCDC) Base CLUT Register 230 */
#define REG_LCDC_BASECLUT231    (0xF000099C) /**< (LCDC) Base CLUT Register 231 */
#define REG_LCDC_BASECLUT232    (0xF00009A0) /**< (LCDC) Base CLUT Register 232 */
#define REG_LCDC_BASECLUT233    (0xF00009A4) /**< (LCDC) Base CLUT Register 233 */
#define REG_LCDC_BASECLUT234    (0xF00009A8) /**< (LCDC) Base CLUT Register 234 */
#define REG_LCDC_BASECLUT235    (0xF00009AC) /**< (LCDC) Base CLUT Register 235 */
#define REG_LCDC_BASECLUT236    (0xF00009B0) /**< (LCDC) Base CLUT Register 236 */
#define REG_LCDC_BASECLUT237    (0xF00009B4) /**< (LCDC) Base CLUT Register 237 */
#define REG_LCDC_BASECLUT238    (0xF00009B8) /**< (LCDC) Base CLUT Register 238 */
#define REG_LCDC_BASECLUT239    (0xF00009BC) /**< (LCDC) Base CLUT Register 239 */
#define REG_LCDC_BASECLUT240    (0xF00009C0) /**< (LCDC) Base CLUT Register 240 */
#define REG_LCDC_BASECLUT241    (0xF00009C4) /**< (LCDC) Base CLUT Register 241 */
#define REG_LCDC_BASECLUT242    (0xF00009C8) /**< (LCDC) Base CLUT Register 242 */
#define REG_LCDC_BASECLUT243    (0xF00009CC) /**< (LCDC) Base CLUT Register 243 */
#define REG_LCDC_BASECLUT244    (0xF00009D0) /**< (LCDC) Base CLUT Register 244 */
#define REG_LCDC_BASECLUT245    (0xF00009D4) /**< (LCDC) Base CLUT Register 245 */
#define REG_LCDC_BASECLUT246    (0xF00009D8) /**< (LCDC) Base CLUT Register 246 */
#define REG_LCDC_BASECLUT247    (0xF00009DC) /**< (LCDC) Base CLUT Register 247 */
#define REG_LCDC_BASECLUT248    (0xF00009E0) /**< (LCDC) Base CLUT Register 248 */
#define REG_LCDC_BASECLUT249    (0xF00009E4) /**< (LCDC) Base CLUT Register 249 */
#define REG_LCDC_BASECLUT250    (0xF00009E8) /**< (LCDC) Base CLUT Register 250 */
#define REG_LCDC_BASECLUT251    (0xF00009EC) /**< (LCDC) Base CLUT Register 251 */
#define REG_LCDC_BASECLUT252    (0xF00009F0) /**< (LCDC) Base CLUT Register 252 */
#define REG_LCDC_BASECLUT253    (0xF00009F4) /**< (LCDC) Base CLUT Register 253 */
#define REG_LCDC_BASECLUT254    (0xF00009F8) /**< (LCDC) Base CLUT Register 254 */
#define REG_LCDC_BASECLUT255    (0xF00009FC) /**< (LCDC) Base CLUT Register 255 */
#define REG_LCDC_OVR1CLUT       (0xF0000A00) /**< (LCDC) Overlay 1 CLUT Register */
#define REG_LCDC_OVR1CLUT0      (0xF0000A00) /**< (LCDC) Overlay 1 CLUT Register 0 */
#define REG_LCDC_OVR1CLUT1      (0xF0000A04) /**< (LCDC) Overlay 1 CLUT Register 1 */
#define REG_LCDC_OVR1CLUT2      (0xF0000A08) /**< (LCDC) Overlay 1 CLUT Register 2 */
#define REG_LCDC_OVR1CLUT3      (0xF0000A0C) /**< (LCDC) Overlay 1 CLUT Register 3 */
#define REG_LCDC_OVR1CLUT4      (0xF0000A10) /**< (LCDC) Overlay 1 CLUT Register 4 */
#define REG_LCDC_OVR1CLUT5      (0xF0000A14) /**< (LCDC) Overlay 1 CLUT Register 5 */
#define REG_LCDC_OVR1CLUT6      (0xF0000A18) /**< (LCDC) Overlay 1 CLUT Register 6 */
#define REG_LCDC_OVR1CLUT7      (0xF0000A1C) /**< (LCDC) Overlay 1 CLUT Register 7 */
#define REG_LCDC_OVR1CLUT8      (0xF0000A20) /**< (LCDC) Overlay 1 CLUT Register 8 */
#define REG_LCDC_OVR1CLUT9      (0xF0000A24) /**< (LCDC) Overlay 1 CLUT Register 9 */
#define REG_LCDC_OVR1CLUT10     (0xF0000A28) /**< (LCDC) Overlay 1 CLUT Register 10 */
#define REG_LCDC_OVR1CLUT11     (0xF0000A2C) /**< (LCDC) Overlay 1 CLUT Register 11 */
#define REG_LCDC_OVR1CLUT12     (0xF0000A30) /**< (LCDC) Overlay 1 CLUT Register 12 */
#define REG_LCDC_OVR1CLUT13     (0xF0000A34) /**< (LCDC) Overlay 1 CLUT Register 13 */
#define REG_LCDC_OVR1CLUT14     (0xF0000A38) /**< (LCDC) Overlay 1 CLUT Register 14 */
#define REG_LCDC_OVR1CLUT15     (0xF0000A3C) /**< (LCDC) Overlay 1 CLUT Register 15 */
#define REG_LCDC_OVR1CLUT16     (0xF0000A40) /**< (LCDC) Overlay 1 CLUT Register 16 */
#define REG_LCDC_OVR1CLUT17     (0xF0000A44) /**< (LCDC) Overlay 1 CLUT Register 17 */
#define REG_LCDC_OVR1CLUT18     (0xF0000A48) /**< (LCDC) Overlay 1 CLUT Register 18 */
#define REG_LCDC_OVR1CLUT19     (0xF0000A4C) /**< (LCDC) Overlay 1 CLUT Register 19 */
#define REG_LCDC_OVR1CLUT20     (0xF0000A50) /**< (LCDC) Overlay 1 CLUT Register 20 */
#define REG_LCDC_OVR1CLUT21     (0xF0000A54) /**< (LCDC) Overlay 1 CLUT Register 21 */
#define REG_LCDC_OVR1CLUT22     (0xF0000A58) /**< (LCDC) Overlay 1 CLUT Register 22 */
#define REG_LCDC_OVR1CLUT23     (0xF0000A5C) /**< (LCDC) Overlay 1 CLUT Register 23 */
#define REG_LCDC_OVR1CLUT24     (0xF0000A60) /**< (LCDC) Overlay 1 CLUT Register 24 */
#define REG_LCDC_OVR1CLUT25     (0xF0000A64) /**< (LCDC) Overlay 1 CLUT Register 25 */
#define REG_LCDC_OVR1CLUT26     (0xF0000A68) /**< (LCDC) Overlay 1 CLUT Register 26 */
#define REG_LCDC_OVR1CLUT27     (0xF0000A6C) /**< (LCDC) Overlay 1 CLUT Register 27 */
#define REG_LCDC_OVR1CLUT28     (0xF0000A70) /**< (LCDC) Overlay 1 CLUT Register 28 */
#define REG_LCDC_OVR1CLUT29     (0xF0000A74) /**< (LCDC) Overlay 1 CLUT Register 29 */
#define REG_LCDC_OVR1CLUT30     (0xF0000A78) /**< (LCDC) Overlay 1 CLUT Register 30 */
#define REG_LCDC_OVR1CLUT31     (0xF0000A7C) /**< (LCDC) Overlay 1 CLUT Register 31 */
#define REG_LCDC_OVR1CLUT32     (0xF0000A80) /**< (LCDC) Overlay 1 CLUT Register 32 */
#define REG_LCDC_OVR1CLUT33     (0xF0000A84) /**< (LCDC) Overlay 1 CLUT Register 33 */
#define REG_LCDC_OVR1CLUT34     (0xF0000A88) /**< (LCDC) Overlay 1 CLUT Register 34 */
#define REG_LCDC_OVR1CLUT35     (0xF0000A8C) /**< (LCDC) Overlay 1 CLUT Register 35 */
#define REG_LCDC_OVR1CLUT36     (0xF0000A90) /**< (LCDC) Overlay 1 CLUT Register 36 */
#define REG_LCDC_OVR1CLUT37     (0xF0000A94) /**< (LCDC) Overlay 1 CLUT Register 37 */
#define REG_LCDC_OVR1CLUT38     (0xF0000A98) /**< (LCDC) Overlay 1 CLUT Register 38 */
#define REG_LCDC_OVR1CLUT39     (0xF0000A9C) /**< (LCDC) Overlay 1 CLUT Register 39 */
#define REG_LCDC_OVR1CLUT40     (0xF0000AA0) /**< (LCDC) Overlay 1 CLUT Register 40 */
#define REG_LCDC_OVR1CLUT41     (0xF0000AA4) /**< (LCDC) Overlay 1 CLUT Register 41 */
#define REG_LCDC_OVR1CLUT42     (0xF0000AA8) /**< (LCDC) Overlay 1 CLUT Register 42 */
#define REG_LCDC_OVR1CLUT43     (0xF0000AAC) /**< (LCDC) Overlay 1 CLUT Register 43 */
#define REG_LCDC_OVR1CLUT44     (0xF0000AB0) /**< (LCDC) Overlay 1 CLUT Register 44 */
#define REG_LCDC_OVR1CLUT45     (0xF0000AB4) /**< (LCDC) Overlay 1 CLUT Register 45 */
#define REG_LCDC_OVR1CLUT46     (0xF0000AB8) /**< (LCDC) Overlay 1 CLUT Register 46 */
#define REG_LCDC_OVR1CLUT47     (0xF0000ABC) /**< (LCDC) Overlay 1 CLUT Register 47 */
#define REG_LCDC_OVR1CLUT48     (0xF0000AC0) /**< (LCDC) Overlay 1 CLUT Register 48 */
#define REG_LCDC_OVR1CLUT49     (0xF0000AC4) /**< (LCDC) Overlay 1 CLUT Register 49 */
#define REG_LCDC_OVR1CLUT50     (0xF0000AC8) /**< (LCDC) Overlay 1 CLUT Register 50 */
#define REG_LCDC_OVR1CLUT51     (0xF0000ACC) /**< (LCDC) Overlay 1 CLUT Register 51 */
#define REG_LCDC_OVR1CLUT52     (0xF0000AD0) /**< (LCDC) Overlay 1 CLUT Register 52 */
#define REG_LCDC_OVR1CLUT53     (0xF0000AD4) /**< (LCDC) Overlay 1 CLUT Register 53 */
#define REG_LCDC_OVR1CLUT54     (0xF0000AD8) /**< (LCDC) Overlay 1 CLUT Register 54 */
#define REG_LCDC_OVR1CLUT55     (0xF0000ADC) /**< (LCDC) Overlay 1 CLUT Register 55 */
#define REG_LCDC_OVR1CLUT56     (0xF0000AE0) /**< (LCDC) Overlay 1 CLUT Register 56 */
#define REG_LCDC_OVR1CLUT57     (0xF0000AE4) /**< (LCDC) Overlay 1 CLUT Register 57 */
#define REG_LCDC_OVR1CLUT58     (0xF0000AE8) /**< (LCDC) Overlay 1 CLUT Register 58 */
#define REG_LCDC_OVR1CLUT59     (0xF0000AEC) /**< (LCDC) Overlay 1 CLUT Register 59 */
#define REG_LCDC_OVR1CLUT60     (0xF0000AF0) /**< (LCDC) Overlay 1 CLUT Register 60 */
#define REG_LCDC_OVR1CLUT61     (0xF0000AF4) /**< (LCDC) Overlay 1 CLUT Register 61 */
#define REG_LCDC_OVR1CLUT62     (0xF0000AF8) /**< (LCDC) Overlay 1 CLUT Register 62 */
#define REG_LCDC_OVR1CLUT63     (0xF0000AFC) /**< (LCDC) Overlay 1 CLUT Register 63 */
#define REG_LCDC_OVR1CLUT64     (0xF0000B00) /**< (LCDC) Overlay 1 CLUT Register 64 */
#define REG_LCDC_OVR1CLUT65     (0xF0000B04) /**< (LCDC) Overlay 1 CLUT Register 65 */
#define REG_LCDC_OVR1CLUT66     (0xF0000B08) /**< (LCDC) Overlay 1 CLUT Register 66 */
#define REG_LCDC_OVR1CLUT67     (0xF0000B0C) /**< (LCDC) Overlay 1 CLUT Register 67 */
#define REG_LCDC_OVR1CLUT68     (0xF0000B10) /**< (LCDC) Overlay 1 CLUT Register 68 */
#define REG_LCDC_OVR1CLUT69     (0xF0000B14) /**< (LCDC) Overlay 1 CLUT Register 69 */
#define REG_LCDC_OVR1CLUT70     (0xF0000B18) /**< (LCDC) Overlay 1 CLUT Register 70 */
#define REG_LCDC_OVR1CLUT71     (0xF0000B1C) /**< (LCDC) Overlay 1 CLUT Register 71 */
#define REG_LCDC_OVR1CLUT72     (0xF0000B20) /**< (LCDC) Overlay 1 CLUT Register 72 */
#define REG_LCDC_OVR1CLUT73     (0xF0000B24) /**< (LCDC) Overlay 1 CLUT Register 73 */
#define REG_LCDC_OVR1CLUT74     (0xF0000B28) /**< (LCDC) Overlay 1 CLUT Register 74 */
#define REG_LCDC_OVR1CLUT75     (0xF0000B2C) /**< (LCDC) Overlay 1 CLUT Register 75 */
#define REG_LCDC_OVR1CLUT76     (0xF0000B30) /**< (LCDC) Overlay 1 CLUT Register 76 */
#define REG_LCDC_OVR1CLUT77     (0xF0000B34) /**< (LCDC) Overlay 1 CLUT Register 77 */
#define REG_LCDC_OVR1CLUT78     (0xF0000B38) /**< (LCDC) Overlay 1 CLUT Register 78 */
#define REG_LCDC_OVR1CLUT79     (0xF0000B3C) /**< (LCDC) Overlay 1 CLUT Register 79 */
#define REG_LCDC_OVR1CLUT80     (0xF0000B40) /**< (LCDC) Overlay 1 CLUT Register 80 */
#define REG_LCDC_OVR1CLUT81     (0xF0000B44) /**< (LCDC) Overlay 1 CLUT Register 81 */
#define REG_LCDC_OVR1CLUT82     (0xF0000B48) /**< (LCDC) Overlay 1 CLUT Register 82 */
#define REG_LCDC_OVR1CLUT83     (0xF0000B4C) /**< (LCDC) Overlay 1 CLUT Register 83 */
#define REG_LCDC_OVR1CLUT84     (0xF0000B50) /**< (LCDC) Overlay 1 CLUT Register 84 */
#define REG_LCDC_OVR1CLUT85     (0xF0000B54) /**< (LCDC) Overlay 1 CLUT Register 85 */
#define REG_LCDC_OVR1CLUT86     (0xF0000B58) /**< (LCDC) Overlay 1 CLUT Register 86 */
#define REG_LCDC_OVR1CLUT87     (0xF0000B5C) /**< (LCDC) Overlay 1 CLUT Register 87 */
#define REG_LCDC_OVR1CLUT88     (0xF0000B60) /**< (LCDC) Overlay 1 CLUT Register 88 */
#define REG_LCDC_OVR1CLUT89     (0xF0000B64) /**< (LCDC) Overlay 1 CLUT Register 89 */
#define REG_LCDC_OVR1CLUT90     (0xF0000B68) /**< (LCDC) Overlay 1 CLUT Register 90 */
#define REG_LCDC_OVR1CLUT91     (0xF0000B6C) /**< (LCDC) Overlay 1 CLUT Register 91 */
#define REG_LCDC_OVR1CLUT92     (0xF0000B70) /**< (LCDC) Overlay 1 CLUT Register 92 */
#define REG_LCDC_OVR1CLUT93     (0xF0000B74) /**< (LCDC) Overlay 1 CLUT Register 93 */
#define REG_LCDC_OVR1CLUT94     (0xF0000B78) /**< (LCDC) Overlay 1 CLUT Register 94 */
#define REG_LCDC_OVR1CLUT95     (0xF0000B7C) /**< (LCDC) Overlay 1 CLUT Register 95 */
#define REG_LCDC_OVR1CLUT96     (0xF0000B80) /**< (LCDC) Overlay 1 CLUT Register 96 */
#define REG_LCDC_OVR1CLUT97     (0xF0000B84) /**< (LCDC) Overlay 1 CLUT Register 97 */
#define REG_LCDC_OVR1CLUT98     (0xF0000B88) /**< (LCDC) Overlay 1 CLUT Register 98 */
#define REG_LCDC_OVR1CLUT99     (0xF0000B8C) /**< (LCDC) Overlay 1 CLUT Register 99 */
#define REG_LCDC_OVR1CLUT100    (0xF0000B90) /**< (LCDC) Overlay 1 CLUT Register 100 */
#define REG_LCDC_OVR1CLUT101    (0xF0000B94) /**< (LCDC) Overlay 1 CLUT Register 101 */
#define REG_LCDC_OVR1CLUT102    (0xF0000B98) /**< (LCDC) Overlay 1 CLUT Register 102 */
#define REG_LCDC_OVR1CLUT103    (0xF0000B9C) /**< (LCDC) Overlay 1 CLUT Register 103 */
#define REG_LCDC_OVR1CLUT104    (0xF0000BA0) /**< (LCDC) Overlay 1 CLUT Register 104 */
#define REG_LCDC_OVR1CLUT105    (0xF0000BA4) /**< (LCDC) Overlay 1 CLUT Register 105 */
#define REG_LCDC_OVR1CLUT106    (0xF0000BA8) /**< (LCDC) Overlay 1 CLUT Register 106 */
#define REG_LCDC_OVR1CLUT107    (0xF0000BAC) /**< (LCDC) Overlay 1 CLUT Register 107 */
#define REG_LCDC_OVR1CLUT108    (0xF0000BB0) /**< (LCDC) Overlay 1 CLUT Register 108 */
#define REG_LCDC_OVR1CLUT109    (0xF0000BB4) /**< (LCDC) Overlay 1 CLUT Register 109 */
#define REG_LCDC_OVR1CLUT110    (0xF0000BB8) /**< (LCDC) Overlay 1 CLUT Register 110 */
#define REG_LCDC_OVR1CLUT111    (0xF0000BBC) /**< (LCDC) Overlay 1 CLUT Register 111 */
#define REG_LCDC_OVR1CLUT112    (0xF0000BC0) /**< (LCDC) Overlay 1 CLUT Register 112 */
#define REG_LCDC_OVR1CLUT113    (0xF0000BC4) /**< (LCDC) Overlay 1 CLUT Register 113 */
#define REG_LCDC_OVR1CLUT114    (0xF0000BC8) /**< (LCDC) Overlay 1 CLUT Register 114 */
#define REG_LCDC_OVR1CLUT115    (0xF0000BCC) /**< (LCDC) Overlay 1 CLUT Register 115 */
#define REG_LCDC_OVR1CLUT116    (0xF0000BD0) /**< (LCDC) Overlay 1 CLUT Register 116 */
#define REG_LCDC_OVR1CLUT117    (0xF0000BD4) /**< (LCDC) Overlay 1 CLUT Register 117 */
#define REG_LCDC_OVR1CLUT118    (0xF0000BD8) /**< (LCDC) Overlay 1 CLUT Register 118 */
#define REG_LCDC_OVR1CLUT119    (0xF0000BDC) /**< (LCDC) Overlay 1 CLUT Register 119 */
#define REG_LCDC_OVR1CLUT120    (0xF0000BE0) /**< (LCDC) Overlay 1 CLUT Register 120 */
#define REG_LCDC_OVR1CLUT121    (0xF0000BE4) /**< (LCDC) Overlay 1 CLUT Register 121 */
#define REG_LCDC_OVR1CLUT122    (0xF0000BE8) /**< (LCDC) Overlay 1 CLUT Register 122 */
#define REG_LCDC_OVR1CLUT123    (0xF0000BEC) /**< (LCDC) Overlay 1 CLUT Register 123 */
#define REG_LCDC_OVR1CLUT124    (0xF0000BF0) /**< (LCDC) Overlay 1 CLUT Register 124 */
#define REG_LCDC_OVR1CLUT125    (0xF0000BF4) /**< (LCDC) Overlay 1 CLUT Register 125 */
#define REG_LCDC_OVR1CLUT126    (0xF0000BF8) /**< (LCDC) Overlay 1 CLUT Register 126 */
#define REG_LCDC_OVR1CLUT127    (0xF0000BFC) /**< (LCDC) Overlay 1 CLUT Register 127 */
#define REG_LCDC_OVR1CLUT128    (0xF0000C00) /**< (LCDC) Overlay 1 CLUT Register 128 */
#define REG_LCDC_OVR1CLUT129    (0xF0000C04) /**< (LCDC) Overlay 1 CLUT Register 129 */
#define REG_LCDC_OVR1CLUT130    (0xF0000C08) /**< (LCDC) Overlay 1 CLUT Register 130 */
#define REG_LCDC_OVR1CLUT131    (0xF0000C0C) /**< (LCDC) Overlay 1 CLUT Register 131 */
#define REG_LCDC_OVR1CLUT132    (0xF0000C10) /**< (LCDC) Overlay 1 CLUT Register 132 */
#define REG_LCDC_OVR1CLUT133    (0xF0000C14) /**< (LCDC) Overlay 1 CLUT Register 133 */
#define REG_LCDC_OVR1CLUT134    (0xF0000C18) /**< (LCDC) Overlay 1 CLUT Register 134 */
#define REG_LCDC_OVR1CLUT135    (0xF0000C1C) /**< (LCDC) Overlay 1 CLUT Register 135 */
#define REG_LCDC_OVR1CLUT136    (0xF0000C20) /**< (LCDC) Overlay 1 CLUT Register 136 */
#define REG_LCDC_OVR1CLUT137    (0xF0000C24) /**< (LCDC) Overlay 1 CLUT Register 137 */
#define REG_LCDC_OVR1CLUT138    (0xF0000C28) /**< (LCDC) Overlay 1 CLUT Register 138 */
#define REG_LCDC_OVR1CLUT139    (0xF0000C2C) /**< (LCDC) Overlay 1 CLUT Register 139 */
#define REG_LCDC_OVR1CLUT140    (0xF0000C30) /**< (LCDC) Overlay 1 CLUT Register 140 */
#define REG_LCDC_OVR1CLUT141    (0xF0000C34) /**< (LCDC) Overlay 1 CLUT Register 141 */
#define REG_LCDC_OVR1CLUT142    (0xF0000C38) /**< (LCDC) Overlay 1 CLUT Register 142 */
#define REG_LCDC_OVR1CLUT143    (0xF0000C3C) /**< (LCDC) Overlay 1 CLUT Register 143 */
#define REG_LCDC_OVR1CLUT144    (0xF0000C40) /**< (LCDC) Overlay 1 CLUT Register 144 */
#define REG_LCDC_OVR1CLUT145    (0xF0000C44) /**< (LCDC) Overlay 1 CLUT Register 145 */
#define REG_LCDC_OVR1CLUT146    (0xF0000C48) /**< (LCDC) Overlay 1 CLUT Register 146 */
#define REG_LCDC_OVR1CLUT147    (0xF0000C4C) /**< (LCDC) Overlay 1 CLUT Register 147 */
#define REG_LCDC_OVR1CLUT148    (0xF0000C50) /**< (LCDC) Overlay 1 CLUT Register 148 */
#define REG_LCDC_OVR1CLUT149    (0xF0000C54) /**< (LCDC) Overlay 1 CLUT Register 149 */
#define REG_LCDC_OVR1CLUT150    (0xF0000C58) /**< (LCDC) Overlay 1 CLUT Register 150 */
#define REG_LCDC_OVR1CLUT151    (0xF0000C5C) /**< (LCDC) Overlay 1 CLUT Register 151 */
#define REG_LCDC_OVR1CLUT152    (0xF0000C60) /**< (LCDC) Overlay 1 CLUT Register 152 */
#define REG_LCDC_OVR1CLUT153    (0xF0000C64) /**< (LCDC) Overlay 1 CLUT Register 153 */
#define REG_LCDC_OVR1CLUT154    (0xF0000C68) /**< (LCDC) Overlay 1 CLUT Register 154 */
#define REG_LCDC_OVR1CLUT155    (0xF0000C6C) /**< (LCDC) Overlay 1 CLUT Register 155 */
#define REG_LCDC_OVR1CLUT156    (0xF0000C70) /**< (LCDC) Overlay 1 CLUT Register 156 */
#define REG_LCDC_OVR1CLUT157    (0xF0000C74) /**< (LCDC) Overlay 1 CLUT Register 157 */
#define REG_LCDC_OVR1CLUT158    (0xF0000C78) /**< (LCDC) Overlay 1 CLUT Register 158 */
#define REG_LCDC_OVR1CLUT159    (0xF0000C7C) /**< (LCDC) Overlay 1 CLUT Register 159 */
#define REG_LCDC_OVR1CLUT160    (0xF0000C80) /**< (LCDC) Overlay 1 CLUT Register 160 */
#define REG_LCDC_OVR1CLUT161    (0xF0000C84) /**< (LCDC) Overlay 1 CLUT Register 161 */
#define REG_LCDC_OVR1CLUT162    (0xF0000C88) /**< (LCDC) Overlay 1 CLUT Register 162 */
#define REG_LCDC_OVR1CLUT163    (0xF0000C8C) /**< (LCDC) Overlay 1 CLUT Register 163 */
#define REG_LCDC_OVR1CLUT164    (0xF0000C90) /**< (LCDC) Overlay 1 CLUT Register 164 */
#define REG_LCDC_OVR1CLUT165    (0xF0000C94) /**< (LCDC) Overlay 1 CLUT Register 165 */
#define REG_LCDC_OVR1CLUT166    (0xF0000C98) /**< (LCDC) Overlay 1 CLUT Register 166 */
#define REG_LCDC_OVR1CLUT167    (0xF0000C9C) /**< (LCDC) Overlay 1 CLUT Register 167 */
#define REG_LCDC_OVR1CLUT168    (0xF0000CA0) /**< (LCDC) Overlay 1 CLUT Register 168 */
#define REG_LCDC_OVR1CLUT169    (0xF0000CA4) /**< (LCDC) Overlay 1 CLUT Register 169 */
#define REG_LCDC_OVR1CLUT170    (0xF0000CA8) /**< (LCDC) Overlay 1 CLUT Register 170 */
#define REG_LCDC_OVR1CLUT171    (0xF0000CAC) /**< (LCDC) Overlay 1 CLUT Register 171 */
#define REG_LCDC_OVR1CLUT172    (0xF0000CB0) /**< (LCDC) Overlay 1 CLUT Register 172 */
#define REG_LCDC_OVR1CLUT173    (0xF0000CB4) /**< (LCDC) Overlay 1 CLUT Register 173 */
#define REG_LCDC_OVR1CLUT174    (0xF0000CB8) /**< (LCDC) Overlay 1 CLUT Register 174 */
#define REG_LCDC_OVR1CLUT175    (0xF0000CBC) /**< (LCDC) Overlay 1 CLUT Register 175 */
#define REG_LCDC_OVR1CLUT176    (0xF0000CC0) /**< (LCDC) Overlay 1 CLUT Register 176 */
#define REG_LCDC_OVR1CLUT177    (0xF0000CC4) /**< (LCDC) Overlay 1 CLUT Register 177 */
#define REG_LCDC_OVR1CLUT178    (0xF0000CC8) /**< (LCDC) Overlay 1 CLUT Register 178 */
#define REG_LCDC_OVR1CLUT179    (0xF0000CCC) /**< (LCDC) Overlay 1 CLUT Register 179 */
#define REG_LCDC_OVR1CLUT180    (0xF0000CD0) /**< (LCDC) Overlay 1 CLUT Register 180 */
#define REG_LCDC_OVR1CLUT181    (0xF0000CD4) /**< (LCDC) Overlay 1 CLUT Register 181 */
#define REG_LCDC_OVR1CLUT182    (0xF0000CD8) /**< (LCDC) Overlay 1 CLUT Register 182 */
#define REG_LCDC_OVR1CLUT183    (0xF0000CDC) /**< (LCDC) Overlay 1 CLUT Register 183 */
#define REG_LCDC_OVR1CLUT184    (0xF0000CE0) /**< (LCDC) Overlay 1 CLUT Register 184 */
#define REG_LCDC_OVR1CLUT185    (0xF0000CE4) /**< (LCDC) Overlay 1 CLUT Register 185 */
#define REG_LCDC_OVR1CLUT186    (0xF0000CE8) /**< (LCDC) Overlay 1 CLUT Register 186 */
#define REG_LCDC_OVR1CLUT187    (0xF0000CEC) /**< (LCDC) Overlay 1 CLUT Register 187 */
#define REG_LCDC_OVR1CLUT188    (0xF0000CF0) /**< (LCDC) Overlay 1 CLUT Register 188 */
#define REG_LCDC_OVR1CLUT189    (0xF0000CF4) /**< (LCDC) Overlay 1 CLUT Register 189 */
#define REG_LCDC_OVR1CLUT190    (0xF0000CF8) /**< (LCDC) Overlay 1 CLUT Register 190 */
#define REG_LCDC_OVR1CLUT191    (0xF0000CFC) /**< (LCDC) Overlay 1 CLUT Register 191 */
#define REG_LCDC_OVR1CLUT192    (0xF0000D00) /**< (LCDC) Overlay 1 CLUT Register 192 */
#define REG_LCDC_OVR1CLUT193    (0xF0000D04) /**< (LCDC) Overlay 1 CLUT Register 193 */
#define REG_LCDC_OVR1CLUT194    (0xF0000D08) /**< (LCDC) Overlay 1 CLUT Register 194 */
#define REG_LCDC_OVR1CLUT195    (0xF0000D0C) /**< (LCDC) Overlay 1 CLUT Register 195 */
#define REG_LCDC_OVR1CLUT196    (0xF0000D10) /**< (LCDC) Overlay 1 CLUT Register 196 */
#define REG_LCDC_OVR1CLUT197    (0xF0000D14) /**< (LCDC) Overlay 1 CLUT Register 197 */
#define REG_LCDC_OVR1CLUT198    (0xF0000D18) /**< (LCDC) Overlay 1 CLUT Register 198 */
#define REG_LCDC_OVR1CLUT199    (0xF0000D1C) /**< (LCDC) Overlay 1 CLUT Register 199 */
#define REG_LCDC_OVR1CLUT200    (0xF0000D20) /**< (LCDC) Overlay 1 CLUT Register 200 */
#define REG_LCDC_OVR1CLUT201    (0xF0000D24) /**< (LCDC) Overlay 1 CLUT Register 201 */
#define REG_LCDC_OVR1CLUT202    (0xF0000D28) /**< (LCDC) Overlay 1 CLUT Register 202 */
#define REG_LCDC_OVR1CLUT203    (0xF0000D2C) /**< (LCDC) Overlay 1 CLUT Register 203 */
#define REG_LCDC_OVR1CLUT204    (0xF0000D30) /**< (LCDC) Overlay 1 CLUT Register 204 */
#define REG_LCDC_OVR1CLUT205    (0xF0000D34) /**< (LCDC) Overlay 1 CLUT Register 205 */
#define REG_LCDC_OVR1CLUT206    (0xF0000D38) /**< (LCDC) Overlay 1 CLUT Register 206 */
#define REG_LCDC_OVR1CLUT207    (0xF0000D3C) /**< (LCDC) Overlay 1 CLUT Register 207 */
#define REG_LCDC_OVR1CLUT208    (0xF0000D40) /**< (LCDC) Overlay 1 CLUT Register 208 */
#define REG_LCDC_OVR1CLUT209    (0xF0000D44) /**< (LCDC) Overlay 1 CLUT Register 209 */
#define REG_LCDC_OVR1CLUT210    (0xF0000D48) /**< (LCDC) Overlay 1 CLUT Register 210 */
#define REG_LCDC_OVR1CLUT211    (0xF0000D4C) /**< (LCDC) Overlay 1 CLUT Register 211 */
#define REG_LCDC_OVR1CLUT212    (0xF0000D50) /**< (LCDC) Overlay 1 CLUT Register 212 */
#define REG_LCDC_OVR1CLUT213    (0xF0000D54) /**< (LCDC) Overlay 1 CLUT Register 213 */
#define REG_LCDC_OVR1CLUT214    (0xF0000D58) /**< (LCDC) Overlay 1 CLUT Register 214 */
#define REG_LCDC_OVR1CLUT215    (0xF0000D5C) /**< (LCDC) Overlay 1 CLUT Register 215 */
#define REG_LCDC_OVR1CLUT216    (0xF0000D60) /**< (LCDC) Overlay 1 CLUT Register 216 */
#define REG_LCDC_OVR1CLUT217    (0xF0000D64) /**< (LCDC) Overlay 1 CLUT Register 217 */
#define REG_LCDC_OVR1CLUT218    (0xF0000D68) /**< (LCDC) Overlay 1 CLUT Register 218 */
#define REG_LCDC_OVR1CLUT219    (0xF0000D6C) /**< (LCDC) Overlay 1 CLUT Register 219 */
#define REG_LCDC_OVR1CLUT220    (0xF0000D70) /**< (LCDC) Overlay 1 CLUT Register 220 */
#define REG_LCDC_OVR1CLUT221    (0xF0000D74) /**< (LCDC) Overlay 1 CLUT Register 221 */
#define REG_LCDC_OVR1CLUT222    (0xF0000D78) /**< (LCDC) Overlay 1 CLUT Register 222 */
#define REG_LCDC_OVR1CLUT223    (0xF0000D7C) /**< (LCDC) Overlay 1 CLUT Register 223 */
#define REG_LCDC_OVR1CLUT224    (0xF0000D80) /**< (LCDC) Overlay 1 CLUT Register 224 */
#define REG_LCDC_OVR1CLUT225    (0xF0000D84) /**< (LCDC) Overlay 1 CLUT Register 225 */
#define REG_LCDC_OVR1CLUT226    (0xF0000D88) /**< (LCDC) Overlay 1 CLUT Register 226 */
#define REG_LCDC_OVR1CLUT227    (0xF0000D8C) /**< (LCDC) Overlay 1 CLUT Register 227 */
#define REG_LCDC_OVR1CLUT228    (0xF0000D90) /**< (LCDC) Overlay 1 CLUT Register 228 */
#define REG_LCDC_OVR1CLUT229    (0xF0000D94) /**< (LCDC) Overlay 1 CLUT Register 229 */
#define REG_LCDC_OVR1CLUT230    (0xF0000D98) /**< (LCDC) Overlay 1 CLUT Register 230 */
#define REG_LCDC_OVR1CLUT231    (0xF0000D9C) /**< (LCDC) Overlay 1 CLUT Register 231 */
#define REG_LCDC_OVR1CLUT232    (0xF0000DA0) /**< (LCDC) Overlay 1 CLUT Register 232 */
#define REG_LCDC_OVR1CLUT233    (0xF0000DA4) /**< (LCDC) Overlay 1 CLUT Register 233 */
#define REG_LCDC_OVR1CLUT234    (0xF0000DA8) /**< (LCDC) Overlay 1 CLUT Register 234 */
#define REG_LCDC_OVR1CLUT235    (0xF0000DAC) /**< (LCDC) Overlay 1 CLUT Register 235 */
#define REG_LCDC_OVR1CLUT236    (0xF0000DB0) /**< (LCDC) Overlay 1 CLUT Register 236 */
#define REG_LCDC_OVR1CLUT237    (0xF0000DB4) /**< (LCDC) Overlay 1 CLUT Register 237 */
#define REG_LCDC_OVR1CLUT238    (0xF0000DB8) /**< (LCDC) Overlay 1 CLUT Register 238 */
#define REG_LCDC_OVR1CLUT239    (0xF0000DBC) /**< (LCDC) Overlay 1 CLUT Register 239 */
#define REG_LCDC_OVR1CLUT240    (0xF0000DC0) /**< (LCDC) Overlay 1 CLUT Register 240 */
#define REG_LCDC_OVR1CLUT241    (0xF0000DC4) /**< (LCDC) Overlay 1 CLUT Register 241 */
#define REG_LCDC_OVR1CLUT242    (0xF0000DC8) /**< (LCDC) Overlay 1 CLUT Register 242 */
#define REG_LCDC_OVR1CLUT243    (0xF0000DCC) /**< (LCDC) Overlay 1 CLUT Register 243 */
#define REG_LCDC_OVR1CLUT244    (0xF0000DD0) /**< (LCDC) Overlay 1 CLUT Register 244 */
#define REG_LCDC_OVR1CLUT245    (0xF0000DD4) /**< (LCDC) Overlay 1 CLUT Register 245 */
#define REG_LCDC_OVR1CLUT246    (0xF0000DD8) /**< (LCDC) Overlay 1 CLUT Register 246 */
#define REG_LCDC_OVR1CLUT247    (0xF0000DDC) /**< (LCDC) Overlay 1 CLUT Register 247 */
#define REG_LCDC_OVR1CLUT248    (0xF0000DE0) /**< (LCDC) Overlay 1 CLUT Register 248 */
#define REG_LCDC_OVR1CLUT249    (0xF0000DE4) /**< (LCDC) Overlay 1 CLUT Register 249 */
#define REG_LCDC_OVR1CLUT250    (0xF0000DE8) /**< (LCDC) Overlay 1 CLUT Register 250 */
#define REG_LCDC_OVR1CLUT251    (0xF0000DEC) /**< (LCDC) Overlay 1 CLUT Register 251 */
#define REG_LCDC_OVR1CLUT252    (0xF0000DF0) /**< (LCDC) Overlay 1 CLUT Register 252 */
#define REG_LCDC_OVR1CLUT253    (0xF0000DF4) /**< (LCDC) Overlay 1 CLUT Register 253 */
#define REG_LCDC_OVR1CLUT254    (0xF0000DF8) /**< (LCDC) Overlay 1 CLUT Register 254 */
#define REG_LCDC_OVR1CLUT255    (0xF0000DFC) /**< (LCDC) Overlay 1 CLUT Register 255 */
#define REG_LCDC_OVR2CLUT       (0xF0000E00) /**< (LCDC) Overlay 2 CLUT Register */
#define REG_LCDC_OVR2CLUT0      (0xF0000E00) /**< (LCDC) Overlay 2 CLUT Register 0 */
#define REG_LCDC_OVR2CLUT1      (0xF0000E04) /**< (LCDC) Overlay 2 CLUT Register 1 */
#define REG_LCDC_OVR2CLUT2      (0xF0000E08) /**< (LCDC) Overlay 2 CLUT Register 2 */
#define REG_LCDC_OVR2CLUT3      (0xF0000E0C) /**< (LCDC) Overlay 2 CLUT Register 3 */
#define REG_LCDC_OVR2CLUT4      (0xF0000E10) /**< (LCDC) Overlay 2 CLUT Register 4 */
#define REG_LCDC_OVR2CLUT5      (0xF0000E14) /**< (LCDC) Overlay 2 CLUT Register 5 */
#define REG_LCDC_OVR2CLUT6      (0xF0000E18) /**< (LCDC) Overlay 2 CLUT Register 6 */
#define REG_LCDC_OVR2CLUT7      (0xF0000E1C) /**< (LCDC) Overlay 2 CLUT Register 7 */
#define REG_LCDC_OVR2CLUT8      (0xF0000E20) /**< (LCDC) Overlay 2 CLUT Register 8 */
#define REG_LCDC_OVR2CLUT9      (0xF0000E24) /**< (LCDC) Overlay 2 CLUT Register 9 */
#define REG_LCDC_OVR2CLUT10     (0xF0000E28) /**< (LCDC) Overlay 2 CLUT Register 10 */
#define REG_LCDC_OVR2CLUT11     (0xF0000E2C) /**< (LCDC) Overlay 2 CLUT Register 11 */
#define REG_LCDC_OVR2CLUT12     (0xF0000E30) /**< (LCDC) Overlay 2 CLUT Register 12 */
#define REG_LCDC_OVR2CLUT13     (0xF0000E34) /**< (LCDC) Overlay 2 CLUT Register 13 */
#define REG_LCDC_OVR2CLUT14     (0xF0000E38) /**< (LCDC) Overlay 2 CLUT Register 14 */
#define REG_LCDC_OVR2CLUT15     (0xF0000E3C) /**< (LCDC) Overlay 2 CLUT Register 15 */
#define REG_LCDC_OVR2CLUT16     (0xF0000E40) /**< (LCDC) Overlay 2 CLUT Register 16 */
#define REG_LCDC_OVR2CLUT17     (0xF0000E44) /**< (LCDC) Overlay 2 CLUT Register 17 */
#define REG_LCDC_OVR2CLUT18     (0xF0000E48) /**< (LCDC) Overlay 2 CLUT Register 18 */
#define REG_LCDC_OVR2CLUT19     (0xF0000E4C) /**< (LCDC) Overlay 2 CLUT Register 19 */
#define REG_LCDC_OVR2CLUT20     (0xF0000E50) /**< (LCDC) Overlay 2 CLUT Register 20 */
#define REG_LCDC_OVR2CLUT21     (0xF0000E54) /**< (LCDC) Overlay 2 CLUT Register 21 */
#define REG_LCDC_OVR2CLUT22     (0xF0000E58) /**< (LCDC) Overlay 2 CLUT Register 22 */
#define REG_LCDC_OVR2CLUT23     (0xF0000E5C) /**< (LCDC) Overlay 2 CLUT Register 23 */
#define REG_LCDC_OVR2CLUT24     (0xF0000E60) /**< (LCDC) Overlay 2 CLUT Register 24 */
#define REG_LCDC_OVR2CLUT25     (0xF0000E64) /**< (LCDC) Overlay 2 CLUT Register 25 */
#define REG_LCDC_OVR2CLUT26     (0xF0000E68) /**< (LCDC) Overlay 2 CLUT Register 26 */
#define REG_LCDC_OVR2CLUT27     (0xF0000E6C) /**< (LCDC) Overlay 2 CLUT Register 27 */
#define REG_LCDC_OVR2CLUT28     (0xF0000E70) /**< (LCDC) Overlay 2 CLUT Register 28 */
#define REG_LCDC_OVR2CLUT29     (0xF0000E74) /**< (LCDC) Overlay 2 CLUT Register 29 */
#define REG_LCDC_OVR2CLUT30     (0xF0000E78) /**< (LCDC) Overlay 2 CLUT Register 30 */
#define REG_LCDC_OVR2CLUT31     (0xF0000E7C) /**< (LCDC) Overlay 2 CLUT Register 31 */
#define REG_LCDC_OVR2CLUT32     (0xF0000E80) /**< (LCDC) Overlay 2 CLUT Register 32 */
#define REG_LCDC_OVR2CLUT33     (0xF0000E84) /**< (LCDC) Overlay 2 CLUT Register 33 */
#define REG_LCDC_OVR2CLUT34     (0xF0000E88) /**< (LCDC) Overlay 2 CLUT Register 34 */
#define REG_LCDC_OVR2CLUT35     (0xF0000E8C) /**< (LCDC) Overlay 2 CLUT Register 35 */
#define REG_LCDC_OVR2CLUT36     (0xF0000E90) /**< (LCDC) Overlay 2 CLUT Register 36 */
#define REG_LCDC_OVR2CLUT37     (0xF0000E94) /**< (LCDC) Overlay 2 CLUT Register 37 */
#define REG_LCDC_OVR2CLUT38     (0xF0000E98) /**< (LCDC) Overlay 2 CLUT Register 38 */
#define REG_LCDC_OVR2CLUT39     (0xF0000E9C) /**< (LCDC) Overlay 2 CLUT Register 39 */
#define REG_LCDC_OVR2CLUT40     (0xF0000EA0) /**< (LCDC) Overlay 2 CLUT Register 40 */
#define REG_LCDC_OVR2CLUT41     (0xF0000EA4) /**< (LCDC) Overlay 2 CLUT Register 41 */
#define REG_LCDC_OVR2CLUT42     (0xF0000EA8) /**< (LCDC) Overlay 2 CLUT Register 42 */
#define REG_LCDC_OVR2CLUT43     (0xF0000EAC) /**< (LCDC) Overlay 2 CLUT Register 43 */
#define REG_LCDC_OVR2CLUT44     (0xF0000EB0) /**< (LCDC) Overlay 2 CLUT Register 44 */
#define REG_LCDC_OVR2CLUT45     (0xF0000EB4) /**< (LCDC) Overlay 2 CLUT Register 45 */
#define REG_LCDC_OVR2CLUT46     (0xF0000EB8) /**< (LCDC) Overlay 2 CLUT Register 46 */
#define REG_LCDC_OVR2CLUT47     (0xF0000EBC) /**< (LCDC) Overlay 2 CLUT Register 47 */
#define REG_LCDC_OVR2CLUT48     (0xF0000EC0) /**< (LCDC) Overlay 2 CLUT Register 48 */
#define REG_LCDC_OVR2CLUT49     (0xF0000EC4) /**< (LCDC) Overlay 2 CLUT Register 49 */
#define REG_LCDC_OVR2CLUT50     (0xF0000EC8) /**< (LCDC) Overlay 2 CLUT Register 50 */
#define REG_LCDC_OVR2CLUT51     (0xF0000ECC) /**< (LCDC) Overlay 2 CLUT Register 51 */
#define REG_LCDC_OVR2CLUT52     (0xF0000ED0) /**< (LCDC) Overlay 2 CLUT Register 52 */
#define REG_LCDC_OVR2CLUT53     (0xF0000ED4) /**< (LCDC) Overlay 2 CLUT Register 53 */
#define REG_LCDC_OVR2CLUT54     (0xF0000ED8) /**< (LCDC) Overlay 2 CLUT Register 54 */
#define REG_LCDC_OVR2CLUT55     (0xF0000EDC) /**< (LCDC) Overlay 2 CLUT Register 55 */
#define REG_LCDC_OVR2CLUT56     (0xF0000EE0) /**< (LCDC) Overlay 2 CLUT Register 56 */
#define REG_LCDC_OVR2CLUT57     (0xF0000EE4) /**< (LCDC) Overlay 2 CLUT Register 57 */
#define REG_LCDC_OVR2CLUT58     (0xF0000EE8) /**< (LCDC) Overlay 2 CLUT Register 58 */
#define REG_LCDC_OVR2CLUT59     (0xF0000EEC) /**< (LCDC) Overlay 2 CLUT Register 59 */
#define REG_LCDC_OVR2CLUT60     (0xF0000EF0) /**< (LCDC) Overlay 2 CLUT Register 60 */
#define REG_LCDC_OVR2CLUT61     (0xF0000EF4) /**< (LCDC) Overlay 2 CLUT Register 61 */
#define REG_LCDC_OVR2CLUT62     (0xF0000EF8) /**< (LCDC) Overlay 2 CLUT Register 62 */
#define REG_LCDC_OVR2CLUT63     (0xF0000EFC) /**< (LCDC) Overlay 2 CLUT Register 63 */
#define REG_LCDC_OVR2CLUT64     (0xF0000F00) /**< (LCDC) Overlay 2 CLUT Register 64 */
#define REG_LCDC_OVR2CLUT65     (0xF0000F04) /**< (LCDC) Overlay 2 CLUT Register 65 */
#define REG_LCDC_OVR2CLUT66     (0xF0000F08) /**< (LCDC) Overlay 2 CLUT Register 66 */
#define REG_LCDC_OVR2CLUT67     (0xF0000F0C) /**< (LCDC) Overlay 2 CLUT Register 67 */
#define REG_LCDC_OVR2CLUT68     (0xF0000F10) /**< (LCDC) Overlay 2 CLUT Register 68 */
#define REG_LCDC_OVR2CLUT69     (0xF0000F14) /**< (LCDC) Overlay 2 CLUT Register 69 */
#define REG_LCDC_OVR2CLUT70     (0xF0000F18) /**< (LCDC) Overlay 2 CLUT Register 70 */
#define REG_LCDC_OVR2CLUT71     (0xF0000F1C) /**< (LCDC) Overlay 2 CLUT Register 71 */
#define REG_LCDC_OVR2CLUT72     (0xF0000F20) /**< (LCDC) Overlay 2 CLUT Register 72 */
#define REG_LCDC_OVR2CLUT73     (0xF0000F24) /**< (LCDC) Overlay 2 CLUT Register 73 */
#define REG_LCDC_OVR2CLUT74     (0xF0000F28) /**< (LCDC) Overlay 2 CLUT Register 74 */
#define REG_LCDC_OVR2CLUT75     (0xF0000F2C) /**< (LCDC) Overlay 2 CLUT Register 75 */
#define REG_LCDC_OVR2CLUT76     (0xF0000F30) /**< (LCDC) Overlay 2 CLUT Register 76 */
#define REG_LCDC_OVR2CLUT77     (0xF0000F34) /**< (LCDC) Overlay 2 CLUT Register 77 */
#define REG_LCDC_OVR2CLUT78     (0xF0000F38) /**< (LCDC) Overlay 2 CLUT Register 78 */
#define REG_LCDC_OVR2CLUT79     (0xF0000F3C) /**< (LCDC) Overlay 2 CLUT Register 79 */
#define REG_LCDC_OVR2CLUT80     (0xF0000F40) /**< (LCDC) Overlay 2 CLUT Register 80 */
#define REG_LCDC_OVR2CLUT81     (0xF0000F44) /**< (LCDC) Overlay 2 CLUT Register 81 */
#define REG_LCDC_OVR2CLUT82     (0xF0000F48) /**< (LCDC) Overlay 2 CLUT Register 82 */
#define REG_LCDC_OVR2CLUT83     (0xF0000F4C) /**< (LCDC) Overlay 2 CLUT Register 83 */
#define REG_LCDC_OVR2CLUT84     (0xF0000F50) /**< (LCDC) Overlay 2 CLUT Register 84 */
#define REG_LCDC_OVR2CLUT85     (0xF0000F54) /**< (LCDC) Overlay 2 CLUT Register 85 */
#define REG_LCDC_OVR2CLUT86     (0xF0000F58) /**< (LCDC) Overlay 2 CLUT Register 86 */
#define REG_LCDC_OVR2CLUT87     (0xF0000F5C) /**< (LCDC) Overlay 2 CLUT Register 87 */
#define REG_LCDC_OVR2CLUT88     (0xF0000F60) /**< (LCDC) Overlay 2 CLUT Register 88 */
#define REG_LCDC_OVR2CLUT89     (0xF0000F64) /**< (LCDC) Overlay 2 CLUT Register 89 */
#define REG_LCDC_OVR2CLUT90     (0xF0000F68) /**< (LCDC) Overlay 2 CLUT Register 90 */
#define REG_LCDC_OVR2CLUT91     (0xF0000F6C) /**< (LCDC) Overlay 2 CLUT Register 91 */
#define REG_LCDC_OVR2CLUT92     (0xF0000F70) /**< (LCDC) Overlay 2 CLUT Register 92 */
#define REG_LCDC_OVR2CLUT93     (0xF0000F74) /**< (LCDC) Overlay 2 CLUT Register 93 */
#define REG_LCDC_OVR2CLUT94     (0xF0000F78) /**< (LCDC) Overlay 2 CLUT Register 94 */
#define REG_LCDC_OVR2CLUT95     (0xF0000F7C) /**< (LCDC) Overlay 2 CLUT Register 95 */
#define REG_LCDC_OVR2CLUT96     (0xF0000F80) /**< (LCDC) Overlay 2 CLUT Register 96 */
#define REG_LCDC_OVR2CLUT97     (0xF0000F84) /**< (LCDC) Overlay 2 CLUT Register 97 */
#define REG_LCDC_OVR2CLUT98     (0xF0000F88) /**< (LCDC) Overlay 2 CLUT Register 98 */
#define REG_LCDC_OVR2CLUT99     (0xF0000F8C) /**< (LCDC) Overlay 2 CLUT Register 99 */
#define REG_LCDC_OVR2CLUT100    (0xF0000F90) /**< (LCDC) Overlay 2 CLUT Register 100 */
#define REG_LCDC_OVR2CLUT101    (0xF0000F94) /**< (LCDC) Overlay 2 CLUT Register 101 */
#define REG_LCDC_OVR2CLUT102    (0xF0000F98) /**< (LCDC) Overlay 2 CLUT Register 102 */
#define REG_LCDC_OVR2CLUT103    (0xF0000F9C) /**< (LCDC) Overlay 2 CLUT Register 103 */
#define REG_LCDC_OVR2CLUT104    (0xF0000FA0) /**< (LCDC) Overlay 2 CLUT Register 104 */
#define REG_LCDC_OVR2CLUT105    (0xF0000FA4) /**< (LCDC) Overlay 2 CLUT Register 105 */
#define REG_LCDC_OVR2CLUT106    (0xF0000FA8) /**< (LCDC) Overlay 2 CLUT Register 106 */
#define REG_LCDC_OVR2CLUT107    (0xF0000FAC) /**< (LCDC) Overlay 2 CLUT Register 107 */
#define REG_LCDC_OVR2CLUT108    (0xF0000FB0) /**< (LCDC) Overlay 2 CLUT Register 108 */
#define REG_LCDC_OVR2CLUT109    (0xF0000FB4) /**< (LCDC) Overlay 2 CLUT Register 109 */
#define REG_LCDC_OVR2CLUT110    (0xF0000FB8) /**< (LCDC) Overlay 2 CLUT Register 110 */
#define REG_LCDC_OVR2CLUT111    (0xF0000FBC) /**< (LCDC) Overlay 2 CLUT Register 111 */
#define REG_LCDC_OVR2CLUT112    (0xF0000FC0) /**< (LCDC) Overlay 2 CLUT Register 112 */
#define REG_LCDC_OVR2CLUT113    (0xF0000FC4) /**< (LCDC) Overlay 2 CLUT Register 113 */
#define REG_LCDC_OVR2CLUT114    (0xF0000FC8) /**< (LCDC) Overlay 2 CLUT Register 114 */
#define REG_LCDC_OVR2CLUT115    (0xF0000FCC) /**< (LCDC) Overlay 2 CLUT Register 115 */
#define REG_LCDC_OVR2CLUT116    (0xF0000FD0) /**< (LCDC) Overlay 2 CLUT Register 116 */
#define REG_LCDC_OVR2CLUT117    (0xF0000FD4) /**< (LCDC) Overlay 2 CLUT Register 117 */
#define REG_LCDC_OVR2CLUT118    (0xF0000FD8) /**< (LCDC) Overlay 2 CLUT Register 118 */
#define REG_LCDC_OVR2CLUT119    (0xF0000FDC) /**< (LCDC) Overlay 2 CLUT Register 119 */
#define REG_LCDC_OVR2CLUT120    (0xF0000FE0) /**< (LCDC) Overlay 2 CLUT Register 120 */
#define REG_LCDC_OVR2CLUT121    (0xF0000FE4) /**< (LCDC) Overlay 2 CLUT Register 121 */
#define REG_LCDC_OVR2CLUT122    (0xF0000FE8) /**< (LCDC) Overlay 2 CLUT Register 122 */
#define REG_LCDC_OVR2CLUT123    (0xF0000FEC) /**< (LCDC) Overlay 2 CLUT Register 123 */
#define REG_LCDC_OVR2CLUT124    (0xF0000FF0) /**< (LCDC) Overlay 2 CLUT Register 124 */
#define REG_LCDC_OVR2CLUT125    (0xF0000FF4) /**< (LCDC) Overlay 2 CLUT Register 125 */
#define REG_LCDC_OVR2CLUT126    (0xF0000FF8) /**< (LCDC) Overlay 2 CLUT Register 126 */
#define REG_LCDC_OVR2CLUT127    (0xF0000FFC) /**< (LCDC) Overlay 2 CLUT Register 127 */
#define REG_LCDC_OVR2CLUT128    (0xF0001000) /**< (LCDC) Overlay 2 CLUT Register 128 */
#define REG_LCDC_OVR2CLUT129    (0xF0001004) /**< (LCDC) Overlay 2 CLUT Register 129 */
#define REG_LCDC_OVR2CLUT130    (0xF0001008) /**< (LCDC) Overlay 2 CLUT Register 130 */
#define REG_LCDC_OVR2CLUT131    (0xF000100C) /**< (LCDC) Overlay 2 CLUT Register 131 */
#define REG_LCDC_OVR2CLUT132    (0xF0001010) /**< (LCDC) Overlay 2 CLUT Register 132 */
#define REG_LCDC_OVR2CLUT133    (0xF0001014) /**< (LCDC) Overlay 2 CLUT Register 133 */
#define REG_LCDC_OVR2CLUT134    (0xF0001018) /**< (LCDC) Overlay 2 CLUT Register 134 */
#define REG_LCDC_OVR2CLUT135    (0xF000101C) /**< (LCDC) Overlay 2 CLUT Register 135 */
#define REG_LCDC_OVR2CLUT136    (0xF0001020) /**< (LCDC) Overlay 2 CLUT Register 136 */
#define REG_LCDC_OVR2CLUT137    (0xF0001024) /**< (LCDC) Overlay 2 CLUT Register 137 */
#define REG_LCDC_OVR2CLUT138    (0xF0001028) /**< (LCDC) Overlay 2 CLUT Register 138 */
#define REG_LCDC_OVR2CLUT139    (0xF000102C) /**< (LCDC) Overlay 2 CLUT Register 139 */
#define REG_LCDC_OVR2CLUT140    (0xF0001030) /**< (LCDC) Overlay 2 CLUT Register 140 */
#define REG_LCDC_OVR2CLUT141    (0xF0001034) /**< (LCDC) Overlay 2 CLUT Register 141 */
#define REG_LCDC_OVR2CLUT142    (0xF0001038) /**< (LCDC) Overlay 2 CLUT Register 142 */
#define REG_LCDC_OVR2CLUT143    (0xF000103C) /**< (LCDC) Overlay 2 CLUT Register 143 */
#define REG_LCDC_OVR2CLUT144    (0xF0001040) /**< (LCDC) Overlay 2 CLUT Register 144 */
#define REG_LCDC_OVR2CLUT145    (0xF0001044) /**< (LCDC) Overlay 2 CLUT Register 145 */
#define REG_LCDC_OVR2CLUT146    (0xF0001048) /**< (LCDC) Overlay 2 CLUT Register 146 */
#define REG_LCDC_OVR2CLUT147    (0xF000104C) /**< (LCDC) Overlay 2 CLUT Register 147 */
#define REG_LCDC_OVR2CLUT148    (0xF0001050) /**< (LCDC) Overlay 2 CLUT Register 148 */
#define REG_LCDC_OVR2CLUT149    (0xF0001054) /**< (LCDC) Overlay 2 CLUT Register 149 */
#define REG_LCDC_OVR2CLUT150    (0xF0001058) /**< (LCDC) Overlay 2 CLUT Register 150 */
#define REG_LCDC_OVR2CLUT151    (0xF000105C) /**< (LCDC) Overlay 2 CLUT Register 151 */
#define REG_LCDC_OVR2CLUT152    (0xF0001060) /**< (LCDC) Overlay 2 CLUT Register 152 */
#define REG_LCDC_OVR2CLUT153    (0xF0001064) /**< (LCDC) Overlay 2 CLUT Register 153 */
#define REG_LCDC_OVR2CLUT154    (0xF0001068) /**< (LCDC) Overlay 2 CLUT Register 154 */
#define REG_LCDC_OVR2CLUT155    (0xF000106C) /**< (LCDC) Overlay 2 CLUT Register 155 */
#define REG_LCDC_OVR2CLUT156    (0xF0001070) /**< (LCDC) Overlay 2 CLUT Register 156 */
#define REG_LCDC_OVR2CLUT157    (0xF0001074) /**< (LCDC) Overlay 2 CLUT Register 157 */
#define REG_LCDC_OVR2CLUT158    (0xF0001078) /**< (LCDC) Overlay 2 CLUT Register 158 */
#define REG_LCDC_OVR2CLUT159    (0xF000107C) /**< (LCDC) Overlay 2 CLUT Register 159 */
#define REG_LCDC_OVR2CLUT160    (0xF0001080) /**< (LCDC) Overlay 2 CLUT Register 160 */
#define REG_LCDC_OVR2CLUT161    (0xF0001084) /**< (LCDC) Overlay 2 CLUT Register 161 */
#define REG_LCDC_OVR2CLUT162    (0xF0001088) /**< (LCDC) Overlay 2 CLUT Register 162 */
#define REG_LCDC_OVR2CLUT163    (0xF000108C) /**< (LCDC) Overlay 2 CLUT Register 163 */
#define REG_LCDC_OVR2CLUT164    (0xF0001090) /**< (LCDC) Overlay 2 CLUT Register 164 */
#define REG_LCDC_OVR2CLUT165    (0xF0001094) /**< (LCDC) Overlay 2 CLUT Register 165 */
#define REG_LCDC_OVR2CLUT166    (0xF0001098) /**< (LCDC) Overlay 2 CLUT Register 166 */
#define REG_LCDC_OVR2CLUT167    (0xF000109C) /**< (LCDC) Overlay 2 CLUT Register 167 */
#define REG_LCDC_OVR2CLUT168    (0xF00010A0) /**< (LCDC) Overlay 2 CLUT Register 168 */
#define REG_LCDC_OVR2CLUT169    (0xF00010A4) /**< (LCDC) Overlay 2 CLUT Register 169 */
#define REG_LCDC_OVR2CLUT170    (0xF00010A8) /**< (LCDC) Overlay 2 CLUT Register 170 */
#define REG_LCDC_OVR2CLUT171    (0xF00010AC) /**< (LCDC) Overlay 2 CLUT Register 171 */
#define REG_LCDC_OVR2CLUT172    (0xF00010B0) /**< (LCDC) Overlay 2 CLUT Register 172 */
#define REG_LCDC_OVR2CLUT173    (0xF00010B4) /**< (LCDC) Overlay 2 CLUT Register 173 */
#define REG_LCDC_OVR2CLUT174    (0xF00010B8) /**< (LCDC) Overlay 2 CLUT Register 174 */
#define REG_LCDC_OVR2CLUT175    (0xF00010BC) /**< (LCDC) Overlay 2 CLUT Register 175 */
#define REG_LCDC_OVR2CLUT176    (0xF00010C0) /**< (LCDC) Overlay 2 CLUT Register 176 */
#define REG_LCDC_OVR2CLUT177    (0xF00010C4) /**< (LCDC) Overlay 2 CLUT Register 177 */
#define REG_LCDC_OVR2CLUT178    (0xF00010C8) /**< (LCDC) Overlay 2 CLUT Register 178 */
#define REG_LCDC_OVR2CLUT179    (0xF00010CC) /**< (LCDC) Overlay 2 CLUT Register 179 */
#define REG_LCDC_OVR2CLUT180    (0xF00010D0) /**< (LCDC) Overlay 2 CLUT Register 180 */
#define REG_LCDC_OVR2CLUT181    (0xF00010D4) /**< (LCDC) Overlay 2 CLUT Register 181 */
#define REG_LCDC_OVR2CLUT182    (0xF00010D8) /**< (LCDC) Overlay 2 CLUT Register 182 */
#define REG_LCDC_OVR2CLUT183    (0xF00010DC) /**< (LCDC) Overlay 2 CLUT Register 183 */
#define REG_LCDC_OVR2CLUT184    (0xF00010E0) /**< (LCDC) Overlay 2 CLUT Register 184 */
#define REG_LCDC_OVR2CLUT185    (0xF00010E4) /**< (LCDC) Overlay 2 CLUT Register 185 */
#define REG_LCDC_OVR2CLUT186    (0xF00010E8) /**< (LCDC) Overlay 2 CLUT Register 186 */
#define REG_LCDC_OVR2CLUT187    (0xF00010EC) /**< (LCDC) Overlay 2 CLUT Register 187 */
#define REG_LCDC_OVR2CLUT188    (0xF00010F0) /**< (LCDC) Overlay 2 CLUT Register 188 */
#define REG_LCDC_OVR2CLUT189    (0xF00010F4) /**< (LCDC) Overlay 2 CLUT Register 189 */
#define REG_LCDC_OVR2CLUT190    (0xF00010F8) /**< (LCDC) Overlay 2 CLUT Register 190 */
#define REG_LCDC_OVR2CLUT191    (0xF00010FC) /**< (LCDC) Overlay 2 CLUT Register 191 */
#define REG_LCDC_OVR2CLUT192    (0xF0001100) /**< (LCDC) Overlay 2 CLUT Register 192 */
#define REG_LCDC_OVR2CLUT193    (0xF0001104) /**< (LCDC) Overlay 2 CLUT Register 193 */
#define REG_LCDC_OVR2CLUT194    (0xF0001108) /**< (LCDC) Overlay 2 CLUT Register 194 */
#define REG_LCDC_OVR2CLUT195    (0xF000110C) /**< (LCDC) Overlay 2 CLUT Register 195 */
#define REG_LCDC_OVR2CLUT196    (0xF0001110) /**< (LCDC) Overlay 2 CLUT Register 196 */
#define REG_LCDC_OVR2CLUT197    (0xF0001114) /**< (LCDC) Overlay 2 CLUT Register 197 */
#define REG_LCDC_OVR2CLUT198    (0xF0001118) /**< (LCDC) Overlay 2 CLUT Register 198 */
#define REG_LCDC_OVR2CLUT199    (0xF000111C) /**< (LCDC) Overlay 2 CLUT Register 199 */
#define REG_LCDC_OVR2CLUT200    (0xF0001120) /**< (LCDC) Overlay 2 CLUT Register 200 */
#define REG_LCDC_OVR2CLUT201    (0xF0001124) /**< (LCDC) Overlay 2 CLUT Register 201 */
#define REG_LCDC_OVR2CLUT202    (0xF0001128) /**< (LCDC) Overlay 2 CLUT Register 202 */
#define REG_LCDC_OVR2CLUT203    (0xF000112C) /**< (LCDC) Overlay 2 CLUT Register 203 */
#define REG_LCDC_OVR2CLUT204    (0xF0001130) /**< (LCDC) Overlay 2 CLUT Register 204 */
#define REG_LCDC_OVR2CLUT205    (0xF0001134) /**< (LCDC) Overlay 2 CLUT Register 205 */
#define REG_LCDC_OVR2CLUT206    (0xF0001138) /**< (LCDC) Overlay 2 CLUT Register 206 */
#define REG_LCDC_OVR2CLUT207    (0xF000113C) /**< (LCDC) Overlay 2 CLUT Register 207 */
#define REG_LCDC_OVR2CLUT208    (0xF0001140) /**< (LCDC) Overlay 2 CLUT Register 208 */
#define REG_LCDC_OVR2CLUT209    (0xF0001144) /**< (LCDC) Overlay 2 CLUT Register 209 */
#define REG_LCDC_OVR2CLUT210    (0xF0001148) /**< (LCDC) Overlay 2 CLUT Register 210 */
#define REG_LCDC_OVR2CLUT211    (0xF000114C) /**< (LCDC) Overlay 2 CLUT Register 211 */
#define REG_LCDC_OVR2CLUT212    (0xF0001150) /**< (LCDC) Overlay 2 CLUT Register 212 */
#define REG_LCDC_OVR2CLUT213    (0xF0001154) /**< (LCDC) Overlay 2 CLUT Register 213 */
#define REG_LCDC_OVR2CLUT214    (0xF0001158) /**< (LCDC) Overlay 2 CLUT Register 214 */
#define REG_LCDC_OVR2CLUT215    (0xF000115C) /**< (LCDC) Overlay 2 CLUT Register 215 */
#define REG_LCDC_OVR2CLUT216    (0xF0001160) /**< (LCDC) Overlay 2 CLUT Register 216 */
#define REG_LCDC_OVR2CLUT217    (0xF0001164) /**< (LCDC) Overlay 2 CLUT Register 217 */
#define REG_LCDC_OVR2CLUT218    (0xF0001168) /**< (LCDC) Overlay 2 CLUT Register 218 */
#define REG_LCDC_OVR2CLUT219    (0xF000116C) /**< (LCDC) Overlay 2 CLUT Register 219 */
#define REG_LCDC_OVR2CLUT220    (0xF0001170) /**< (LCDC) Overlay 2 CLUT Register 220 */
#define REG_LCDC_OVR2CLUT221    (0xF0001174) /**< (LCDC) Overlay 2 CLUT Register 221 */
#define REG_LCDC_OVR2CLUT222    (0xF0001178) /**< (LCDC) Overlay 2 CLUT Register 222 */
#define REG_LCDC_OVR2CLUT223    (0xF000117C) /**< (LCDC) Overlay 2 CLUT Register 223 */
#define REG_LCDC_OVR2CLUT224    (0xF0001180) /**< (LCDC) Overlay 2 CLUT Register 224 */
#define REG_LCDC_OVR2CLUT225    (0xF0001184) /**< (LCDC) Overlay 2 CLUT Register 225 */
#define REG_LCDC_OVR2CLUT226    (0xF0001188) /**< (LCDC) Overlay 2 CLUT Register 226 */
#define REG_LCDC_OVR2CLUT227    (0xF000118C) /**< (LCDC) Overlay 2 CLUT Register 227 */
#define REG_LCDC_OVR2CLUT228    (0xF0001190) /**< (LCDC) Overlay 2 CLUT Register 228 */
#define REG_LCDC_OVR2CLUT229    (0xF0001194) /**< (LCDC) Overlay 2 CLUT Register 229 */
#define REG_LCDC_OVR2CLUT230    (0xF0001198) /**< (LCDC) Overlay 2 CLUT Register 230 */
#define REG_LCDC_OVR2CLUT231    (0xF000119C) /**< (LCDC) Overlay 2 CLUT Register 231 */
#define REG_LCDC_OVR2CLUT232    (0xF00011A0) /**< (LCDC) Overlay 2 CLUT Register 232 */
#define REG_LCDC_OVR2CLUT233    (0xF00011A4) /**< (LCDC) Overlay 2 CLUT Register 233 */
#define REG_LCDC_OVR2CLUT234    (0xF00011A8) /**< (LCDC) Overlay 2 CLUT Register 234 */
#define REG_LCDC_OVR2CLUT235    (0xF00011AC) /**< (LCDC) Overlay 2 CLUT Register 235 */
#define REG_LCDC_OVR2CLUT236    (0xF00011B0) /**< (LCDC) Overlay 2 CLUT Register 236 */
#define REG_LCDC_OVR2CLUT237    (0xF00011B4) /**< (LCDC) Overlay 2 CLUT Register 237 */
#define REG_LCDC_OVR2CLUT238    (0xF00011B8) /**< (LCDC) Overlay 2 CLUT Register 238 */
#define REG_LCDC_OVR2CLUT239    (0xF00011BC) /**< (LCDC) Overlay 2 CLUT Register 239 */
#define REG_LCDC_OVR2CLUT240    (0xF00011C0) /**< (LCDC) Overlay 2 CLUT Register 240 */
#define REG_LCDC_OVR2CLUT241    (0xF00011C4) /**< (LCDC) Overlay 2 CLUT Register 241 */
#define REG_LCDC_OVR2CLUT242    (0xF00011C8) /**< (LCDC) Overlay 2 CLUT Register 242 */
#define REG_LCDC_OVR2CLUT243    (0xF00011CC) /**< (LCDC) Overlay 2 CLUT Register 243 */
#define REG_LCDC_OVR2CLUT244    (0xF00011D0) /**< (LCDC) Overlay 2 CLUT Register 244 */
#define REG_LCDC_OVR2CLUT245    (0xF00011D4) /**< (LCDC) Overlay 2 CLUT Register 245 */
#define REG_LCDC_OVR2CLUT246    (0xF00011D8) /**< (LCDC) Overlay 2 CLUT Register 246 */
#define REG_LCDC_OVR2CLUT247    (0xF00011DC) /**< (LCDC) Overlay 2 CLUT Register 247 */
#define REG_LCDC_OVR2CLUT248    (0xF00011E0) /**< (LCDC) Overlay 2 CLUT Register 248 */
#define REG_LCDC_OVR2CLUT249    (0xF00011E4) /**< (LCDC) Overlay 2 CLUT Register 249 */
#define REG_LCDC_OVR2CLUT250    (0xF00011E8) /**< (LCDC) Overlay 2 CLUT Register 250 */
#define REG_LCDC_OVR2CLUT251    (0xF00011EC) /**< (LCDC) Overlay 2 CLUT Register 251 */
#define REG_LCDC_OVR2CLUT252    (0xF00011F0) /**< (LCDC) Overlay 2 CLUT Register 252 */
#define REG_LCDC_OVR2CLUT253    (0xF00011F4) /**< (LCDC) Overlay 2 CLUT Register 253 */
#define REG_LCDC_OVR2CLUT254    (0xF00011F8) /**< (LCDC) Overlay 2 CLUT Register 254 */
#define REG_LCDC_OVR2CLUT255    (0xF00011FC) /**< (LCDC) Overlay 2 CLUT Register 255 */
#define REG_LCDC_HEOCLUT        (0xF0001200) /**< (LCDC) High-End Overlay CLUT Register */
#define REG_LCDC_HEOCLUT0       (0xF0001200) /**< (LCDC) High-End Overlay CLUT Register 0 */
#define REG_LCDC_HEOCLUT1       (0xF0001204) /**< (LCDC) High-End Overlay CLUT Register 1 */
#define REG_LCDC_HEOCLUT2       (0xF0001208) /**< (LCDC) High-End Overlay CLUT Register 2 */
#define REG_LCDC_HEOCLUT3       (0xF000120C) /**< (LCDC) High-End Overlay CLUT Register 3 */
#define REG_LCDC_HEOCLUT4       (0xF0001210) /**< (LCDC) High-End Overlay CLUT Register 4 */
#define REG_LCDC_HEOCLUT5       (0xF0001214) /**< (LCDC) High-End Overlay CLUT Register 5 */
#define REG_LCDC_HEOCLUT6       (0xF0001218) /**< (LCDC) High-End Overlay CLUT Register 6 */
#define REG_LCDC_HEOCLUT7       (0xF000121C) /**< (LCDC) High-End Overlay CLUT Register 7 */
#define REG_LCDC_HEOCLUT8       (0xF0001220) /**< (LCDC) High-End Overlay CLUT Register 8 */
#define REG_LCDC_HEOCLUT9       (0xF0001224) /**< (LCDC) High-End Overlay CLUT Register 9 */
#define REG_LCDC_HEOCLUT10      (0xF0001228) /**< (LCDC) High-End Overlay CLUT Register 10 */
#define REG_LCDC_HEOCLUT11      (0xF000122C) /**< (LCDC) High-End Overlay CLUT Register 11 */
#define REG_LCDC_HEOCLUT12      (0xF0001230) /**< (LCDC) High-End Overlay CLUT Register 12 */
#define REG_LCDC_HEOCLUT13      (0xF0001234) /**< (LCDC) High-End Overlay CLUT Register 13 */
#define REG_LCDC_HEOCLUT14      (0xF0001238) /**< (LCDC) High-End Overlay CLUT Register 14 */
#define REG_LCDC_HEOCLUT15      (0xF000123C) /**< (LCDC) High-End Overlay CLUT Register 15 */
#define REG_LCDC_HEOCLUT16      (0xF0001240) /**< (LCDC) High-End Overlay CLUT Register 16 */
#define REG_LCDC_HEOCLUT17      (0xF0001244) /**< (LCDC) High-End Overlay CLUT Register 17 */
#define REG_LCDC_HEOCLUT18      (0xF0001248) /**< (LCDC) High-End Overlay CLUT Register 18 */
#define REG_LCDC_HEOCLUT19      (0xF000124C) /**< (LCDC) High-End Overlay CLUT Register 19 */
#define REG_LCDC_HEOCLUT20      (0xF0001250) /**< (LCDC) High-End Overlay CLUT Register 20 */
#define REG_LCDC_HEOCLUT21      (0xF0001254) /**< (LCDC) High-End Overlay CLUT Register 21 */
#define REG_LCDC_HEOCLUT22      (0xF0001258) /**< (LCDC) High-End Overlay CLUT Register 22 */
#define REG_LCDC_HEOCLUT23      (0xF000125C) /**< (LCDC) High-End Overlay CLUT Register 23 */
#define REG_LCDC_HEOCLUT24      (0xF0001260) /**< (LCDC) High-End Overlay CLUT Register 24 */
#define REG_LCDC_HEOCLUT25      (0xF0001264) /**< (LCDC) High-End Overlay CLUT Register 25 */
#define REG_LCDC_HEOCLUT26      (0xF0001268) /**< (LCDC) High-End Overlay CLUT Register 26 */
#define REG_LCDC_HEOCLUT27      (0xF000126C) /**< (LCDC) High-End Overlay CLUT Register 27 */
#define REG_LCDC_HEOCLUT28      (0xF0001270) /**< (LCDC) High-End Overlay CLUT Register 28 */
#define REG_LCDC_HEOCLUT29      (0xF0001274) /**< (LCDC) High-End Overlay CLUT Register 29 */
#define REG_LCDC_HEOCLUT30      (0xF0001278) /**< (LCDC) High-End Overlay CLUT Register 30 */
#define REG_LCDC_HEOCLUT31      (0xF000127C) /**< (LCDC) High-End Overlay CLUT Register 31 */
#define REG_LCDC_HEOCLUT32      (0xF0001280) /**< (LCDC) High-End Overlay CLUT Register 32 */
#define REG_LCDC_HEOCLUT33      (0xF0001284) /**< (LCDC) High-End Overlay CLUT Register 33 */
#define REG_LCDC_HEOCLUT34      (0xF0001288) /**< (LCDC) High-End Overlay CLUT Register 34 */
#define REG_LCDC_HEOCLUT35      (0xF000128C) /**< (LCDC) High-End Overlay CLUT Register 35 */
#define REG_LCDC_HEOCLUT36      (0xF0001290) /**< (LCDC) High-End Overlay CLUT Register 36 */
#define REG_LCDC_HEOCLUT37      (0xF0001294) /**< (LCDC) High-End Overlay CLUT Register 37 */
#define REG_LCDC_HEOCLUT38      (0xF0001298) /**< (LCDC) High-End Overlay CLUT Register 38 */
#define REG_LCDC_HEOCLUT39      (0xF000129C) /**< (LCDC) High-End Overlay CLUT Register 39 */
#define REG_LCDC_HEOCLUT40      (0xF00012A0) /**< (LCDC) High-End Overlay CLUT Register 40 */
#define REG_LCDC_HEOCLUT41      (0xF00012A4) /**< (LCDC) High-End Overlay CLUT Register 41 */
#define REG_LCDC_HEOCLUT42      (0xF00012A8) /**< (LCDC) High-End Overlay CLUT Register 42 */
#define REG_LCDC_HEOCLUT43      (0xF00012AC) /**< (LCDC) High-End Overlay CLUT Register 43 */
#define REG_LCDC_HEOCLUT44      (0xF00012B0) /**< (LCDC) High-End Overlay CLUT Register 44 */
#define REG_LCDC_HEOCLUT45      (0xF00012B4) /**< (LCDC) High-End Overlay CLUT Register 45 */
#define REG_LCDC_HEOCLUT46      (0xF00012B8) /**< (LCDC) High-End Overlay CLUT Register 46 */
#define REG_LCDC_HEOCLUT47      (0xF00012BC) /**< (LCDC) High-End Overlay CLUT Register 47 */
#define REG_LCDC_HEOCLUT48      (0xF00012C0) /**< (LCDC) High-End Overlay CLUT Register 48 */
#define REG_LCDC_HEOCLUT49      (0xF00012C4) /**< (LCDC) High-End Overlay CLUT Register 49 */
#define REG_LCDC_HEOCLUT50      (0xF00012C8) /**< (LCDC) High-End Overlay CLUT Register 50 */
#define REG_LCDC_HEOCLUT51      (0xF00012CC) /**< (LCDC) High-End Overlay CLUT Register 51 */
#define REG_LCDC_HEOCLUT52      (0xF00012D0) /**< (LCDC) High-End Overlay CLUT Register 52 */
#define REG_LCDC_HEOCLUT53      (0xF00012D4) /**< (LCDC) High-End Overlay CLUT Register 53 */
#define REG_LCDC_HEOCLUT54      (0xF00012D8) /**< (LCDC) High-End Overlay CLUT Register 54 */
#define REG_LCDC_HEOCLUT55      (0xF00012DC) /**< (LCDC) High-End Overlay CLUT Register 55 */
#define REG_LCDC_HEOCLUT56      (0xF00012E0) /**< (LCDC) High-End Overlay CLUT Register 56 */
#define REG_LCDC_HEOCLUT57      (0xF00012E4) /**< (LCDC) High-End Overlay CLUT Register 57 */
#define REG_LCDC_HEOCLUT58      (0xF00012E8) /**< (LCDC) High-End Overlay CLUT Register 58 */
#define REG_LCDC_HEOCLUT59      (0xF00012EC) /**< (LCDC) High-End Overlay CLUT Register 59 */
#define REG_LCDC_HEOCLUT60      (0xF00012F0) /**< (LCDC) High-End Overlay CLUT Register 60 */
#define REG_LCDC_HEOCLUT61      (0xF00012F4) /**< (LCDC) High-End Overlay CLUT Register 61 */
#define REG_LCDC_HEOCLUT62      (0xF00012F8) /**< (LCDC) High-End Overlay CLUT Register 62 */
#define REG_LCDC_HEOCLUT63      (0xF00012FC) /**< (LCDC) High-End Overlay CLUT Register 63 */
#define REG_LCDC_HEOCLUT64      (0xF0001300) /**< (LCDC) High-End Overlay CLUT Register 64 */
#define REG_LCDC_HEOCLUT65      (0xF0001304) /**< (LCDC) High-End Overlay CLUT Register 65 */
#define REG_LCDC_HEOCLUT66      (0xF0001308) /**< (LCDC) High-End Overlay CLUT Register 66 */
#define REG_LCDC_HEOCLUT67      (0xF000130C) /**< (LCDC) High-End Overlay CLUT Register 67 */
#define REG_LCDC_HEOCLUT68      (0xF0001310) /**< (LCDC) High-End Overlay CLUT Register 68 */
#define REG_LCDC_HEOCLUT69      (0xF0001314) /**< (LCDC) High-End Overlay CLUT Register 69 */
#define REG_LCDC_HEOCLUT70      (0xF0001318) /**< (LCDC) High-End Overlay CLUT Register 70 */
#define REG_LCDC_HEOCLUT71      (0xF000131C) /**< (LCDC) High-End Overlay CLUT Register 71 */
#define REG_LCDC_HEOCLUT72      (0xF0001320) /**< (LCDC) High-End Overlay CLUT Register 72 */
#define REG_LCDC_HEOCLUT73      (0xF0001324) /**< (LCDC) High-End Overlay CLUT Register 73 */
#define REG_LCDC_HEOCLUT74      (0xF0001328) /**< (LCDC) High-End Overlay CLUT Register 74 */
#define REG_LCDC_HEOCLUT75      (0xF000132C) /**< (LCDC) High-End Overlay CLUT Register 75 */
#define REG_LCDC_HEOCLUT76      (0xF0001330) /**< (LCDC) High-End Overlay CLUT Register 76 */
#define REG_LCDC_HEOCLUT77      (0xF0001334) /**< (LCDC) High-End Overlay CLUT Register 77 */
#define REG_LCDC_HEOCLUT78      (0xF0001338) /**< (LCDC) High-End Overlay CLUT Register 78 */
#define REG_LCDC_HEOCLUT79      (0xF000133C) /**< (LCDC) High-End Overlay CLUT Register 79 */
#define REG_LCDC_HEOCLUT80      (0xF0001340) /**< (LCDC) High-End Overlay CLUT Register 80 */
#define REG_LCDC_HEOCLUT81      (0xF0001344) /**< (LCDC) High-End Overlay CLUT Register 81 */
#define REG_LCDC_HEOCLUT82      (0xF0001348) /**< (LCDC) High-End Overlay CLUT Register 82 */
#define REG_LCDC_HEOCLUT83      (0xF000134C) /**< (LCDC) High-End Overlay CLUT Register 83 */
#define REG_LCDC_HEOCLUT84      (0xF0001350) /**< (LCDC) High-End Overlay CLUT Register 84 */
#define REG_LCDC_HEOCLUT85      (0xF0001354) /**< (LCDC) High-End Overlay CLUT Register 85 */
#define REG_LCDC_HEOCLUT86      (0xF0001358) /**< (LCDC) High-End Overlay CLUT Register 86 */
#define REG_LCDC_HEOCLUT87      (0xF000135C) /**< (LCDC) High-End Overlay CLUT Register 87 */
#define REG_LCDC_HEOCLUT88      (0xF0001360) /**< (LCDC) High-End Overlay CLUT Register 88 */
#define REG_LCDC_HEOCLUT89      (0xF0001364) /**< (LCDC) High-End Overlay CLUT Register 89 */
#define REG_LCDC_HEOCLUT90      (0xF0001368) /**< (LCDC) High-End Overlay CLUT Register 90 */
#define REG_LCDC_HEOCLUT91      (0xF000136C) /**< (LCDC) High-End Overlay CLUT Register 91 */
#define REG_LCDC_HEOCLUT92      (0xF0001370) /**< (LCDC) High-End Overlay CLUT Register 92 */
#define REG_LCDC_HEOCLUT93      (0xF0001374) /**< (LCDC) High-End Overlay CLUT Register 93 */
#define REG_LCDC_HEOCLUT94      (0xF0001378) /**< (LCDC) High-End Overlay CLUT Register 94 */
#define REG_LCDC_HEOCLUT95      (0xF000137C) /**< (LCDC) High-End Overlay CLUT Register 95 */
#define REG_LCDC_HEOCLUT96      (0xF0001380) /**< (LCDC) High-End Overlay CLUT Register 96 */
#define REG_LCDC_HEOCLUT97      (0xF0001384) /**< (LCDC) High-End Overlay CLUT Register 97 */
#define REG_LCDC_HEOCLUT98      (0xF0001388) /**< (LCDC) High-End Overlay CLUT Register 98 */
#define REG_LCDC_HEOCLUT99      (0xF000138C) /**< (LCDC) High-End Overlay CLUT Register 99 */
#define REG_LCDC_HEOCLUT100     (0xF0001390) /**< (LCDC) High-End Overlay CLUT Register 100 */
#define REG_LCDC_HEOCLUT101     (0xF0001394) /**< (LCDC) High-End Overlay CLUT Register 101 */
#define REG_LCDC_HEOCLUT102     (0xF0001398) /**< (LCDC) High-End Overlay CLUT Register 102 */
#define REG_LCDC_HEOCLUT103     (0xF000139C) /**< (LCDC) High-End Overlay CLUT Register 103 */
#define REG_LCDC_HEOCLUT104     (0xF00013A0) /**< (LCDC) High-End Overlay CLUT Register 104 */
#define REG_LCDC_HEOCLUT105     (0xF00013A4) /**< (LCDC) High-End Overlay CLUT Register 105 */
#define REG_LCDC_HEOCLUT106     (0xF00013A8) /**< (LCDC) High-End Overlay CLUT Register 106 */
#define REG_LCDC_HEOCLUT107     (0xF00013AC) /**< (LCDC) High-End Overlay CLUT Register 107 */
#define REG_LCDC_HEOCLUT108     (0xF00013B0) /**< (LCDC) High-End Overlay CLUT Register 108 */
#define REG_LCDC_HEOCLUT109     (0xF00013B4) /**< (LCDC) High-End Overlay CLUT Register 109 */
#define REG_LCDC_HEOCLUT110     (0xF00013B8) /**< (LCDC) High-End Overlay CLUT Register 110 */
#define REG_LCDC_HEOCLUT111     (0xF00013BC) /**< (LCDC) High-End Overlay CLUT Register 111 */
#define REG_LCDC_HEOCLUT112     (0xF00013C0) /**< (LCDC) High-End Overlay CLUT Register 112 */
#define REG_LCDC_HEOCLUT113     (0xF00013C4) /**< (LCDC) High-End Overlay CLUT Register 113 */
#define REG_LCDC_HEOCLUT114     (0xF00013C8) /**< (LCDC) High-End Overlay CLUT Register 114 */
#define REG_LCDC_HEOCLUT115     (0xF00013CC) /**< (LCDC) High-End Overlay CLUT Register 115 */
#define REG_LCDC_HEOCLUT116     (0xF00013D0) /**< (LCDC) High-End Overlay CLUT Register 116 */
#define REG_LCDC_HEOCLUT117     (0xF00013D4) /**< (LCDC) High-End Overlay CLUT Register 117 */
#define REG_LCDC_HEOCLUT118     (0xF00013D8) /**< (LCDC) High-End Overlay CLUT Register 118 */
#define REG_LCDC_HEOCLUT119     (0xF00013DC) /**< (LCDC) High-End Overlay CLUT Register 119 */
#define REG_LCDC_HEOCLUT120     (0xF00013E0) /**< (LCDC) High-End Overlay CLUT Register 120 */
#define REG_LCDC_HEOCLUT121     (0xF00013E4) /**< (LCDC) High-End Overlay CLUT Register 121 */
#define REG_LCDC_HEOCLUT122     (0xF00013E8) /**< (LCDC) High-End Overlay CLUT Register 122 */
#define REG_LCDC_HEOCLUT123     (0xF00013EC) /**< (LCDC) High-End Overlay CLUT Register 123 */
#define REG_LCDC_HEOCLUT124     (0xF00013F0) /**< (LCDC) High-End Overlay CLUT Register 124 */
#define REG_LCDC_HEOCLUT125     (0xF00013F4) /**< (LCDC) High-End Overlay CLUT Register 125 */
#define REG_LCDC_HEOCLUT126     (0xF00013F8) /**< (LCDC) High-End Overlay CLUT Register 126 */
#define REG_LCDC_HEOCLUT127     (0xF00013FC) /**< (LCDC) High-End Overlay CLUT Register 127 */
#define REG_LCDC_HEOCLUT128     (0xF0001400) /**< (LCDC) High-End Overlay CLUT Register 128 */
#define REG_LCDC_HEOCLUT129     (0xF0001404) /**< (LCDC) High-End Overlay CLUT Register 129 */
#define REG_LCDC_HEOCLUT130     (0xF0001408) /**< (LCDC) High-End Overlay CLUT Register 130 */
#define REG_LCDC_HEOCLUT131     (0xF000140C) /**< (LCDC) High-End Overlay CLUT Register 131 */
#define REG_LCDC_HEOCLUT132     (0xF0001410) /**< (LCDC) High-End Overlay CLUT Register 132 */
#define REG_LCDC_HEOCLUT133     (0xF0001414) /**< (LCDC) High-End Overlay CLUT Register 133 */
#define REG_LCDC_HEOCLUT134     (0xF0001418) /**< (LCDC) High-End Overlay CLUT Register 134 */
#define REG_LCDC_HEOCLUT135     (0xF000141C) /**< (LCDC) High-End Overlay CLUT Register 135 */
#define REG_LCDC_HEOCLUT136     (0xF0001420) /**< (LCDC) High-End Overlay CLUT Register 136 */
#define REG_LCDC_HEOCLUT137     (0xF0001424) /**< (LCDC) High-End Overlay CLUT Register 137 */
#define REG_LCDC_HEOCLUT138     (0xF0001428) /**< (LCDC) High-End Overlay CLUT Register 138 */
#define REG_LCDC_HEOCLUT139     (0xF000142C) /**< (LCDC) High-End Overlay CLUT Register 139 */
#define REG_LCDC_HEOCLUT140     (0xF0001430) /**< (LCDC) High-End Overlay CLUT Register 140 */
#define REG_LCDC_HEOCLUT141     (0xF0001434) /**< (LCDC) High-End Overlay CLUT Register 141 */
#define REG_LCDC_HEOCLUT142     (0xF0001438) /**< (LCDC) High-End Overlay CLUT Register 142 */
#define REG_LCDC_HEOCLUT143     (0xF000143C) /**< (LCDC) High-End Overlay CLUT Register 143 */
#define REG_LCDC_HEOCLUT144     (0xF0001440) /**< (LCDC) High-End Overlay CLUT Register 144 */
#define REG_LCDC_HEOCLUT145     (0xF0001444) /**< (LCDC) High-End Overlay CLUT Register 145 */
#define REG_LCDC_HEOCLUT146     (0xF0001448) /**< (LCDC) High-End Overlay CLUT Register 146 */
#define REG_LCDC_HEOCLUT147     (0xF000144C) /**< (LCDC) High-End Overlay CLUT Register 147 */
#define REG_LCDC_HEOCLUT148     (0xF0001450) /**< (LCDC) High-End Overlay CLUT Register 148 */
#define REG_LCDC_HEOCLUT149     (0xF0001454) /**< (LCDC) High-End Overlay CLUT Register 149 */
#define REG_LCDC_HEOCLUT150     (0xF0001458) /**< (LCDC) High-End Overlay CLUT Register 150 */
#define REG_LCDC_HEOCLUT151     (0xF000145C) /**< (LCDC) High-End Overlay CLUT Register 151 */
#define REG_LCDC_HEOCLUT152     (0xF0001460) /**< (LCDC) High-End Overlay CLUT Register 152 */
#define REG_LCDC_HEOCLUT153     (0xF0001464) /**< (LCDC) High-End Overlay CLUT Register 153 */
#define REG_LCDC_HEOCLUT154     (0xF0001468) /**< (LCDC) High-End Overlay CLUT Register 154 */
#define REG_LCDC_HEOCLUT155     (0xF000146C) /**< (LCDC) High-End Overlay CLUT Register 155 */
#define REG_LCDC_HEOCLUT156     (0xF0001470) /**< (LCDC) High-End Overlay CLUT Register 156 */
#define REG_LCDC_HEOCLUT157     (0xF0001474) /**< (LCDC) High-End Overlay CLUT Register 157 */
#define REG_LCDC_HEOCLUT158     (0xF0001478) /**< (LCDC) High-End Overlay CLUT Register 158 */
#define REG_LCDC_HEOCLUT159     (0xF000147C) /**< (LCDC) High-End Overlay CLUT Register 159 */
#define REG_LCDC_HEOCLUT160     (0xF0001480) /**< (LCDC) High-End Overlay CLUT Register 160 */
#define REG_LCDC_HEOCLUT161     (0xF0001484) /**< (LCDC) High-End Overlay CLUT Register 161 */
#define REG_LCDC_HEOCLUT162     (0xF0001488) /**< (LCDC) High-End Overlay CLUT Register 162 */
#define REG_LCDC_HEOCLUT163     (0xF000148C) /**< (LCDC) High-End Overlay CLUT Register 163 */
#define REG_LCDC_HEOCLUT164     (0xF0001490) /**< (LCDC) High-End Overlay CLUT Register 164 */
#define REG_LCDC_HEOCLUT165     (0xF0001494) /**< (LCDC) High-End Overlay CLUT Register 165 */
#define REG_LCDC_HEOCLUT166     (0xF0001498) /**< (LCDC) High-End Overlay CLUT Register 166 */
#define REG_LCDC_HEOCLUT167     (0xF000149C) /**< (LCDC) High-End Overlay CLUT Register 167 */
#define REG_LCDC_HEOCLUT168     (0xF00014A0) /**< (LCDC) High-End Overlay CLUT Register 168 */
#define REG_LCDC_HEOCLUT169     (0xF00014A4) /**< (LCDC) High-End Overlay CLUT Register 169 */
#define REG_LCDC_HEOCLUT170     (0xF00014A8) /**< (LCDC) High-End Overlay CLUT Register 170 */
#define REG_LCDC_HEOCLUT171     (0xF00014AC) /**< (LCDC) High-End Overlay CLUT Register 171 */
#define REG_LCDC_HEOCLUT172     (0xF00014B0) /**< (LCDC) High-End Overlay CLUT Register 172 */
#define REG_LCDC_HEOCLUT173     (0xF00014B4) /**< (LCDC) High-End Overlay CLUT Register 173 */
#define REG_LCDC_HEOCLUT174     (0xF00014B8) /**< (LCDC) High-End Overlay CLUT Register 174 */
#define REG_LCDC_HEOCLUT175     (0xF00014BC) /**< (LCDC) High-End Overlay CLUT Register 175 */
#define REG_LCDC_HEOCLUT176     (0xF00014C0) /**< (LCDC) High-End Overlay CLUT Register 176 */
#define REG_LCDC_HEOCLUT177     (0xF00014C4) /**< (LCDC) High-End Overlay CLUT Register 177 */
#define REG_LCDC_HEOCLUT178     (0xF00014C8) /**< (LCDC) High-End Overlay CLUT Register 178 */
#define REG_LCDC_HEOCLUT179     (0xF00014CC) /**< (LCDC) High-End Overlay CLUT Register 179 */
#define REG_LCDC_HEOCLUT180     (0xF00014D0) /**< (LCDC) High-End Overlay CLUT Register 180 */
#define REG_LCDC_HEOCLUT181     (0xF00014D4) /**< (LCDC) High-End Overlay CLUT Register 181 */
#define REG_LCDC_HEOCLUT182     (0xF00014D8) /**< (LCDC) High-End Overlay CLUT Register 182 */
#define REG_LCDC_HEOCLUT183     (0xF00014DC) /**< (LCDC) High-End Overlay CLUT Register 183 */
#define REG_LCDC_HEOCLUT184     (0xF00014E0) /**< (LCDC) High-End Overlay CLUT Register 184 */
#define REG_LCDC_HEOCLUT185     (0xF00014E4) /**< (LCDC) High-End Overlay CLUT Register 185 */
#define REG_LCDC_HEOCLUT186     (0xF00014E8) /**< (LCDC) High-End Overlay CLUT Register 186 */
#define REG_LCDC_HEOCLUT187     (0xF00014EC) /**< (LCDC) High-End Overlay CLUT Register 187 */
#define REG_LCDC_HEOCLUT188     (0xF00014F0) /**< (LCDC) High-End Overlay CLUT Register 188 */
#define REG_LCDC_HEOCLUT189     (0xF00014F4) /**< (LCDC) High-End Overlay CLUT Register 189 */
#define REG_LCDC_HEOCLUT190     (0xF00014F8) /**< (LCDC) High-End Overlay CLUT Register 190 */
#define REG_LCDC_HEOCLUT191     (0xF00014FC) /**< (LCDC) High-End Overlay CLUT Register 191 */
#define REG_LCDC_HEOCLUT192     (0xF0001500) /**< (LCDC) High-End Overlay CLUT Register 192 */
#define REG_LCDC_HEOCLUT193     (0xF0001504) /**< (LCDC) High-End Overlay CLUT Register 193 */
#define REG_LCDC_HEOCLUT194     (0xF0001508) /**< (LCDC) High-End Overlay CLUT Register 194 */
#define REG_LCDC_HEOCLUT195     (0xF000150C) /**< (LCDC) High-End Overlay CLUT Register 195 */
#define REG_LCDC_HEOCLUT196     (0xF0001510) /**< (LCDC) High-End Overlay CLUT Register 196 */
#define REG_LCDC_HEOCLUT197     (0xF0001514) /**< (LCDC) High-End Overlay CLUT Register 197 */
#define REG_LCDC_HEOCLUT198     (0xF0001518) /**< (LCDC) High-End Overlay CLUT Register 198 */
#define REG_LCDC_HEOCLUT199     (0xF000151C) /**< (LCDC) High-End Overlay CLUT Register 199 */
#define REG_LCDC_HEOCLUT200     (0xF0001520) /**< (LCDC) High-End Overlay CLUT Register 200 */
#define REG_LCDC_HEOCLUT201     (0xF0001524) /**< (LCDC) High-End Overlay CLUT Register 201 */
#define REG_LCDC_HEOCLUT202     (0xF0001528) /**< (LCDC) High-End Overlay CLUT Register 202 */
#define REG_LCDC_HEOCLUT203     (0xF000152C) /**< (LCDC) High-End Overlay CLUT Register 203 */
#define REG_LCDC_HEOCLUT204     (0xF0001530) /**< (LCDC) High-End Overlay CLUT Register 204 */
#define REG_LCDC_HEOCLUT205     (0xF0001534) /**< (LCDC) High-End Overlay CLUT Register 205 */
#define REG_LCDC_HEOCLUT206     (0xF0001538) /**< (LCDC) High-End Overlay CLUT Register 206 */
#define REG_LCDC_HEOCLUT207     (0xF000153C) /**< (LCDC) High-End Overlay CLUT Register 207 */
#define REG_LCDC_HEOCLUT208     (0xF0001540) /**< (LCDC) High-End Overlay CLUT Register 208 */
#define REG_LCDC_HEOCLUT209     (0xF0001544) /**< (LCDC) High-End Overlay CLUT Register 209 */
#define REG_LCDC_HEOCLUT210     (0xF0001548) /**< (LCDC) High-End Overlay CLUT Register 210 */
#define REG_LCDC_HEOCLUT211     (0xF000154C) /**< (LCDC) High-End Overlay CLUT Register 211 */
#define REG_LCDC_HEOCLUT212     (0xF0001550) /**< (LCDC) High-End Overlay CLUT Register 212 */
#define REG_LCDC_HEOCLUT213     (0xF0001554) /**< (LCDC) High-End Overlay CLUT Register 213 */
#define REG_LCDC_HEOCLUT214     (0xF0001558) /**< (LCDC) High-End Overlay CLUT Register 214 */
#define REG_LCDC_HEOCLUT215     (0xF000155C) /**< (LCDC) High-End Overlay CLUT Register 215 */
#define REG_LCDC_HEOCLUT216     (0xF0001560) /**< (LCDC) High-End Overlay CLUT Register 216 */
#define REG_LCDC_HEOCLUT217     (0xF0001564) /**< (LCDC) High-End Overlay CLUT Register 217 */
#define REG_LCDC_HEOCLUT218     (0xF0001568) /**< (LCDC) High-End Overlay CLUT Register 218 */
#define REG_LCDC_HEOCLUT219     (0xF000156C) /**< (LCDC) High-End Overlay CLUT Register 219 */
#define REG_LCDC_HEOCLUT220     (0xF0001570) /**< (LCDC) High-End Overlay CLUT Register 220 */
#define REG_LCDC_HEOCLUT221     (0xF0001574) /**< (LCDC) High-End Overlay CLUT Register 221 */
#define REG_LCDC_HEOCLUT222     (0xF0001578) /**< (LCDC) High-End Overlay CLUT Register 222 */
#define REG_LCDC_HEOCLUT223     (0xF000157C) /**< (LCDC) High-End Overlay CLUT Register 223 */
#define REG_LCDC_HEOCLUT224     (0xF0001580) /**< (LCDC) High-End Overlay CLUT Register 224 */
#define REG_LCDC_HEOCLUT225     (0xF0001584) /**< (LCDC) High-End Overlay CLUT Register 225 */
#define REG_LCDC_HEOCLUT226     (0xF0001588) /**< (LCDC) High-End Overlay CLUT Register 226 */
#define REG_LCDC_HEOCLUT227     (0xF000158C) /**< (LCDC) High-End Overlay CLUT Register 227 */
#define REG_LCDC_HEOCLUT228     (0xF0001590) /**< (LCDC) High-End Overlay CLUT Register 228 */
#define REG_LCDC_HEOCLUT229     (0xF0001594) /**< (LCDC) High-End Overlay CLUT Register 229 */
#define REG_LCDC_HEOCLUT230     (0xF0001598) /**< (LCDC) High-End Overlay CLUT Register 230 */
#define REG_LCDC_HEOCLUT231     (0xF000159C) /**< (LCDC) High-End Overlay CLUT Register 231 */
#define REG_LCDC_HEOCLUT232     (0xF00015A0) /**< (LCDC) High-End Overlay CLUT Register 232 */
#define REG_LCDC_HEOCLUT233     (0xF00015A4) /**< (LCDC) High-End Overlay CLUT Register 233 */
#define REG_LCDC_HEOCLUT234     (0xF00015A8) /**< (LCDC) High-End Overlay CLUT Register 234 */
#define REG_LCDC_HEOCLUT235     (0xF00015AC) /**< (LCDC) High-End Overlay CLUT Register 235 */
#define REG_LCDC_HEOCLUT236     (0xF00015B0) /**< (LCDC) High-End Overlay CLUT Register 236 */
#define REG_LCDC_HEOCLUT237     (0xF00015B4) /**< (LCDC) High-End Overlay CLUT Register 237 */
#define REG_LCDC_HEOCLUT238     (0xF00015B8) /**< (LCDC) High-End Overlay CLUT Register 238 */
#define REG_LCDC_HEOCLUT239     (0xF00015BC) /**< (LCDC) High-End Overlay CLUT Register 239 */
#define REG_LCDC_HEOCLUT240     (0xF00015C0) /**< (LCDC) High-End Overlay CLUT Register 240 */
#define REG_LCDC_HEOCLUT241     (0xF00015C4) /**< (LCDC) High-End Overlay CLUT Register 241 */
#define REG_LCDC_HEOCLUT242     (0xF00015C8) /**< (LCDC) High-End Overlay CLUT Register 242 */
#define REG_LCDC_HEOCLUT243     (0xF00015CC) /**< (LCDC) High-End Overlay CLUT Register 243 */
#define REG_LCDC_HEOCLUT244     (0xF00015D0) /**< (LCDC) High-End Overlay CLUT Register 244 */
#define REG_LCDC_HEOCLUT245     (0xF00015D4) /**< (LCDC) High-End Overlay CLUT Register 245 */
#define REG_LCDC_HEOCLUT246     (0xF00015D8) /**< (LCDC) High-End Overlay CLUT Register 246 */
#define REG_LCDC_HEOCLUT247     (0xF00015DC) /**< (LCDC) High-End Overlay CLUT Register 247 */
#define REG_LCDC_HEOCLUT248     (0xF00015E0) /**< (LCDC) High-End Overlay CLUT Register 248 */
#define REG_LCDC_HEOCLUT249     (0xF00015E4) /**< (LCDC) High-End Overlay CLUT Register 249 */
#define REG_LCDC_HEOCLUT250     (0xF00015E8) /**< (LCDC) High-End Overlay CLUT Register 250 */
#define REG_LCDC_HEOCLUT251     (0xF00015EC) /**< (LCDC) High-End Overlay CLUT Register 251 */
#define REG_LCDC_HEOCLUT252     (0xF00015F0) /**< (LCDC) High-End Overlay CLUT Register 252 */
#define REG_LCDC_HEOCLUT253     (0xF00015F4) /**< (LCDC) High-End Overlay CLUT Register 253 */
#define REG_LCDC_HEOCLUT254     (0xF00015F8) /**< (LCDC) High-End Overlay CLUT Register 254 */
#define REG_LCDC_HEOCLUT255     (0xF00015FC) /**< (LCDC) High-End Overlay CLUT Register 255 */

#else

#define REG_LCDC_LCDCFG0        (*(__IO uint32_t*)0xF0000000U) /**< (LCDC) LCD Controller Configuration Register 0 */
#define REG_LCDC_LCDCFG1        (*(__IO uint32_t*)0xF0000004U) /**< (LCDC) LCD Controller Configuration Register 1 */
#define REG_LCDC_LCDCFG2        (*(__IO uint32_t*)0xF0000008U) /**< (LCDC) LCD Controller Configuration Register 2 */
#define REG_LCDC_LCDCFG3        (*(__IO uint32_t*)0xF000000CU) /**< (LCDC) LCD Controller Configuration Register 3 */
#define REG_LCDC_LCDCFG4        (*(__IO uint32_t*)0xF0000010U) /**< (LCDC) LCD Controller Configuration Register 4 */
#define REG_LCDC_LCDCFG5        (*(__IO uint32_t*)0xF0000014U) /**< (LCDC) LCD Controller Configuration Register 5 */
#define REG_LCDC_LCDCFG6        (*(__IO uint32_t*)0xF0000018U) /**< (LCDC) LCD Controller Configuration Register 6 */
#define REG_LCDC_LCDEN          (*(__O  uint32_t*)0xF0000020U) /**< (LCDC) LCD Controller Enable Register */
#define REG_LCDC_LCDDIS         (*(__O  uint32_t*)0xF0000024U) /**< (LCDC) LCD Controller Disable Register */
#define REG_LCDC_LCDSR          (*(__I  uint32_t*)0xF0000028U) /**< (LCDC) LCD Controller Status Register */
#define REG_LCDC_LCDIER         (*(__O  uint32_t*)0xF000002CU) /**< (LCDC) LCD Controller Interrupt Enable Register */
#define REG_LCDC_LCDIDR         (*(__O  uint32_t*)0xF0000030U) /**< (LCDC) LCD Controller Interrupt Disable Register */
#define REG_LCDC_LCDIMR         (*(__I  uint32_t*)0xF0000034U) /**< (LCDC) LCD Controller Interrupt Mask Register */
#define REG_LCDC_LCDISR         (*(__I  uint32_t*)0xF0000038U) /**< (LCDC) LCD Controller Interrupt Status Register */
#define REG_LCDC_ATTR           (*(__O  uint32_t*)0xF000003CU) /**< (LCDC) LCD Controller Attribute Register */
#define REG_LCDC_BASECHER       (*(__O  uint32_t*)0xF0000040U) /**< (LCDC) Base Layer Channel Enable Register */
#define REG_LCDC_BASECHDR       (*(__O  uint32_t*)0xF0000044U) /**< (LCDC) Base Layer Channel Disable Register */
#define REG_LCDC_BASECHSR       (*(__I  uint32_t*)0xF0000048U) /**< (LCDC) Base Layer Channel Status Register */
#define REG_LCDC_BASEIER        (*(__O  uint32_t*)0xF000004CU) /**< (LCDC) Base Layer Interrupt Enable Register */
#define REG_LCDC_BASEIDR        (*(__O  uint32_t*)0xF0000050U) /**< (LCDC) Base Layer Interrupt Disabled Register */
#define REG_LCDC_BASEIMR        (*(__I  uint32_t*)0xF0000054U) /**< (LCDC) Base Layer Interrupt Mask Register */
#define REG_LCDC_BASEISR        (*(__I  uint32_t*)0xF0000058U) /**< (LCDC) Base Layer Interrupt Status Register */
#define REG_LCDC_BASEHEAD       (*(__IO uint32_t*)0xF000005CU) /**< (LCDC) Base DMA Head Register */
#define REG_LCDC_BASEADDR       (*(__IO uint32_t*)0xF0000060U) /**< (LCDC) Base DMA Address Register */
#define REG_LCDC_BASECTRL       (*(__IO uint32_t*)0xF0000064U) /**< (LCDC) Base DMA Control Register */
#define REG_LCDC_BASENEXT       (*(__IO uint32_t*)0xF0000068U) /**< (LCDC) Base DMA Next Register */
#define REG_LCDC_BASECFG0       (*(__IO uint32_t*)0xF000006CU) /**< (LCDC) Base Layer Configuration Register 0 */
#define REG_LCDC_BASECFG1       (*(__IO uint32_t*)0xF0000070U) /**< (LCDC) Base Layer Configuration Register 1 */
#define REG_LCDC_BASECFG2       (*(__IO uint32_t*)0xF0000074U) /**< (LCDC) Base Layer Configuration Register 2 */
#define REG_LCDC_BASECFG3       (*(__IO uint32_t*)0xF0000078U) /**< (LCDC) Base Layer Configuration Register 3 */
#define REG_LCDC_BASECFG4       (*(__IO uint32_t*)0xF000007CU) /**< (LCDC) Base Layer Configuration Register 4 */
#define REG_LCDC_BASECFG5       (*(__IO uint32_t*)0xF0000080U) /**< (LCDC) Base Layer Configuration Register 5 */
#define REG_LCDC_BASECFG6       (*(__IO uint32_t*)0xF0000084U) /**< (LCDC) Base Layer Configuration Register 6 */
#define REG_LCDC_OVR1CHER       (*(__O  uint32_t*)0xF0000140U) /**< (LCDC) Overlay 1 Channel Enable Register */
#define REG_LCDC_OVR1CHDR       (*(__O  uint32_t*)0xF0000144U) /**< (LCDC) Overlay 1 Channel Disable Register */
#define REG_LCDC_OVR1CHSR       (*(__I  uint32_t*)0xF0000148U) /**< (LCDC) Overlay 1 Channel Status Register */
#define REG_LCDC_OVR1IER        (*(__O  uint32_t*)0xF000014CU) /**< (LCDC) Overlay 1 Interrupt Enable Register */
#define REG_LCDC_OVR1IDR        (*(__O  uint32_t*)0xF0000150U) /**< (LCDC) Overlay 1 Interrupt Disable Register */
#define REG_LCDC_OVR1IMR        (*(__I  uint32_t*)0xF0000154U) /**< (LCDC) Overlay 1 Interrupt Mask Register */
#define REG_LCDC_OVR1ISR        (*(__I  uint32_t*)0xF0000158U) /**< (LCDC) Overlay 1 Interrupt Status Register */
#define REG_LCDC_OVR1HEAD       (*(__IO uint32_t*)0xF000015CU) /**< (LCDC) Overlay 1 DMA Head Register */
#define REG_LCDC_OVR1ADDR       (*(__IO uint32_t*)0xF0000160U) /**< (LCDC) Overlay 1 DMA Address Register */
#define REG_LCDC_OVR1CTRL       (*(__IO uint32_t*)0xF0000164U) /**< (LCDC) Overlay 1 DMA Control Register */
#define REG_LCDC_OVR1NEXT       (*(__IO uint32_t*)0xF0000168U) /**< (LCDC) Overlay 1 DMA Next Register */
#define REG_LCDC_OVR1CFG0       (*(__IO uint32_t*)0xF000016CU) /**< (LCDC) Overlay 1 Configuration Register 0 */
#define REG_LCDC_OVR1CFG1       (*(__IO uint32_t*)0xF0000170U) /**< (LCDC) Overlay 1 Configuration Register 1 */
#define REG_LCDC_OVR1CFG2       (*(__IO uint32_t*)0xF0000174U) /**< (LCDC) Overlay 1 Configuration Register 2 */
#define REG_LCDC_OVR1CFG3       (*(__IO uint32_t*)0xF0000178U) /**< (LCDC) Overlay 1 Configuration Register 3 */
#define REG_LCDC_OVR1CFG4       (*(__IO uint32_t*)0xF000017CU) /**< (LCDC) Overlay 1 Configuration Register 4 */
#define REG_LCDC_OVR1CFG5       (*(__IO uint32_t*)0xF0000180U) /**< (LCDC) Overlay 1 Configuration Register 5 */
#define REG_LCDC_OVR1CFG6       (*(__IO uint32_t*)0xF0000184U) /**< (LCDC) Overlay 1 Configuration Register 6 */
#define REG_LCDC_OVR1CFG7       (*(__IO uint32_t*)0xF0000188U) /**< (LCDC) Overlay 1 Configuration Register 7 */
#define REG_LCDC_OVR1CFG8       (*(__IO uint32_t*)0xF000018CU) /**< (LCDC) Overlay 1 Configuration Register 8 */
#define REG_LCDC_OVR1CFG9       (*(__IO uint32_t*)0xF0000190U) /**< (LCDC) Overlay 1 Configuration Register 9 */
#define REG_LCDC_OVR2CHER       (*(__O  uint32_t*)0xF0000240U) /**< (LCDC) Overlay 2 Channel Enable Register */
#define REG_LCDC_OVR2CHDR       (*(__O  uint32_t*)0xF0000244U) /**< (LCDC) Overlay 2 Channel Disable Register */
#define REG_LCDC_OVR2CHSR       (*(__I  uint32_t*)0xF0000248U) /**< (LCDC) Overlay 2 Channel Status Register */
#define REG_LCDC_OVR2IER        (*(__O  uint32_t*)0xF000024CU) /**< (LCDC) Overlay 2 Interrupt Enable Register */
#define REG_LCDC_OVR2IDR        (*(__O  uint32_t*)0xF0000250U) /**< (LCDC) Overlay 2 Interrupt Disable Register */
#define REG_LCDC_OVR2IMR        (*(__I  uint32_t*)0xF0000254U) /**< (LCDC) Overlay 2 Interrupt Mask Register */
#define REG_LCDC_OVR2ISR        (*(__I  uint32_t*)0xF0000258U) /**< (LCDC) Overlay 2 Interrupt Status Register */
#define REG_LCDC_OVR2HEAD       (*(__IO uint32_t*)0xF000025CU) /**< (LCDC) Overlay 2 DMA Head Register */
#define REG_LCDC_OVR2ADDR       (*(__IO uint32_t*)0xF0000260U) /**< (LCDC) Overlay 2 DMA Address Register */
#define REG_LCDC_OVR2CTRL       (*(__IO uint32_t*)0xF0000264U) /**< (LCDC) Overlay 2 DMA Control Register */
#define REG_LCDC_OVR2NEXT       (*(__IO uint32_t*)0xF0000268U) /**< (LCDC) Overlay 2 DMA Next Register */
#define REG_LCDC_OVR2CFG0       (*(__IO uint32_t*)0xF000026CU) /**< (LCDC) Overlay 2 Configuration Register 0 */
#define REG_LCDC_OVR2CFG1       (*(__IO uint32_t*)0xF0000270U) /**< (LCDC) Overlay 2 Configuration Register 1 */
#define REG_LCDC_OVR2CFG2       (*(__IO uint32_t*)0xF0000274U) /**< (LCDC) Overlay 2 Configuration Register 2 */
#define REG_LCDC_OVR2CFG3       (*(__IO uint32_t*)0xF0000278U) /**< (LCDC) Overlay 2 Configuration Register 3 */
#define REG_LCDC_OVR2CFG4       (*(__IO uint32_t*)0xF000027CU) /**< (LCDC) Overlay 2 Configuration Register 4 */
#define REG_LCDC_OVR2CFG5       (*(__IO uint32_t*)0xF0000280U) /**< (LCDC) Overlay 2 Configuration Register 5 */
#define REG_LCDC_OVR2CFG6       (*(__IO uint32_t*)0xF0000284U) /**< (LCDC) Overlay 2 Configuration Register 6 */
#define REG_LCDC_OVR2CFG7       (*(__IO uint32_t*)0xF0000288U) /**< (LCDC) Overlay 2 Configuration Register 7 */
#define REG_LCDC_OVR2CFG8       (*(__IO uint32_t*)0xF000028CU) /**< (LCDC) Overlay 2 Configuration Register 8 */
#define REG_LCDC_OVR2CFG9       (*(__IO uint32_t*)0xF0000290U) /**< (LCDC) Overlay 2 Configuration Register 9 */
#define REG_LCDC_HEOCHER        (*(__O  uint32_t*)0xF0000340U) /**< (LCDC) High-End Overlay Channel Enable Register */
#define REG_LCDC_HEOCHDR        (*(__O  uint32_t*)0xF0000344U) /**< (LCDC) High-End Overlay Channel Disable Register */
#define REG_LCDC_HEOCHSR        (*(__I  uint32_t*)0xF0000348U) /**< (LCDC) High-End Overlay Channel Status Register */
#define REG_LCDC_HEOIER         (*(__O  uint32_t*)0xF000034CU) /**< (LCDC) High-End Overlay Interrupt Enable Register */
#define REG_LCDC_HEOIDR         (*(__O  uint32_t*)0xF0000350U) /**< (LCDC) High-End Overlay Interrupt Disable Register */
#define REG_LCDC_HEOIMR         (*(__I  uint32_t*)0xF0000354U) /**< (LCDC) High-End Overlay Interrupt Mask Register */
#define REG_LCDC_HEOISR         (*(__I  uint32_t*)0xF0000358U) /**< (LCDC) High-End Overlay Interrupt Status Register */
#define REG_LCDC_HEOHEAD        (*(__IO uint32_t*)0xF000035CU) /**< (LCDC) High-End Overlay DMA Head Register */
#define REG_LCDC_HEOADDR        (*(__IO uint32_t*)0xF0000360U) /**< (LCDC) High-End Overlay DMA Address Register */
#define REG_LCDC_HEOCTRL        (*(__IO uint32_t*)0xF0000364U) /**< (LCDC) High-End Overlay DMA Control Register */
#define REG_LCDC_HEONEXT        (*(__IO uint32_t*)0xF0000368U) /**< (LCDC) High-End Overlay DMA Next Register */
#define REG_LCDC_HEOUHEAD       (*(__IO uint32_t*)0xF000036CU) /**< (LCDC) High-End Overlay U-UV DMA Head Register */
#define REG_LCDC_HEOUADDR       (*(__IO uint32_t*)0xF0000370U) /**< (LCDC) High-End Overlay U-UV DMA Address Register */
#define REG_LCDC_HEOUCTRL       (*(__IO uint32_t*)0xF0000374U) /**< (LCDC) High-End Overlay U-UV DMA Control Register */
#define REG_LCDC_HEOUNEXT       (*(__IO uint32_t*)0xF0000378U) /**< (LCDC) High-End Overlay U-UV DMA Next Register */
#define REG_LCDC_HEOVHEAD       (*(__IO uint32_t*)0xF000037CU) /**< (LCDC) High-End Overlay V DMA Head Register */
#define REG_LCDC_HEOVADDR       (*(__IO uint32_t*)0xF0000380U) /**< (LCDC) High-End Overlay V DMA Address Register */
#define REG_LCDC_HEOVCTRL       (*(__IO uint32_t*)0xF0000384U) /**< (LCDC) High-End Overlay V DMA Control Register */
#define REG_LCDC_HEOVNEXT       (*(__IO uint32_t*)0xF0000388U) /**< (LCDC) High-End Overlay V DMA Next Register */
#define REG_LCDC_HEOCFG0        (*(__IO uint32_t*)0xF000038CU) /**< (LCDC) High-End Overlay Configuration Register 0 */
#define REG_LCDC_HEOCFG1        (*(__IO uint32_t*)0xF0000390U) /**< (LCDC) High-End Overlay Configuration Register 1 */
#define REG_LCDC_HEOCFG2        (*(__IO uint32_t*)0xF0000394U) /**< (LCDC) High-End Overlay Configuration Register 2 */
#define REG_LCDC_HEOCFG3        (*(__IO uint32_t*)0xF0000398U) /**< (LCDC) High-End Overlay Configuration Register 3 */
#define REG_LCDC_HEOCFG4        (*(__IO uint32_t*)0xF000039CU) /**< (LCDC) High-End Overlay Configuration Register 4 */
#define REG_LCDC_HEOCFG5        (*(__IO uint32_t*)0xF00003A0U) /**< (LCDC) High-End Overlay Configuration Register 5 */
#define REG_LCDC_HEOCFG6        (*(__IO uint32_t*)0xF00003A4U) /**< (LCDC) High-End Overlay Configuration Register 6 */
#define REG_LCDC_HEOCFG7        (*(__IO uint32_t*)0xF00003A8U) /**< (LCDC) High-End Overlay Configuration Register 7 */
#define REG_LCDC_HEOCFG8        (*(__IO uint32_t*)0xF00003ACU) /**< (LCDC) High-End Overlay Configuration Register 8 */
#define REG_LCDC_HEOCFG9        (*(__IO uint32_t*)0xF00003B0U) /**< (LCDC) High-End Overlay Configuration Register 9 */
#define REG_LCDC_HEOCFG10       (*(__IO uint32_t*)0xF00003B4U) /**< (LCDC) High-End Overlay Configuration Register 10 */
#define REG_LCDC_HEOCFG11       (*(__IO uint32_t*)0xF00003B8U) /**< (LCDC) High-End Overlay Configuration Register 11 */
#define REG_LCDC_HEOCFG12       (*(__IO uint32_t*)0xF00003BCU) /**< (LCDC) High-End Overlay Configuration Register 12 */
#define REG_LCDC_HEOCFG13       (*(__IO uint32_t*)0xF00003C0U) /**< (LCDC) High-End Overlay Configuration Register 13 */
#define REG_LCDC_HEOCFG14       (*(__IO uint32_t*)0xF00003C4U) /**< (LCDC) High-End Overlay Configuration Register 14 */
#define REG_LCDC_HEOCFG15       (*(__IO uint32_t*)0xF00003C8U) /**< (LCDC) High-End Overlay Configuration Register 15 */
#define REG_LCDC_HEOCFG16       (*(__IO uint32_t*)0xF00003CCU) /**< (LCDC) High-End Overlay Configuration Register 16 */
#define REG_LCDC_HEOCFG17       (*(__IO uint32_t*)0xF00003D0U) /**< (LCDC) High-End Overlay Configuration Register 17 */
#define REG_LCDC_HEOCFG18       (*(__IO uint32_t*)0xF00003D4U) /**< (LCDC) High-End Overlay Configuration Register 18 */
#define REG_LCDC_HEOCFG19       (*(__IO uint32_t*)0xF00003D8U) /**< (LCDC) High-End Overlay Configuration Register 19 */
#define REG_LCDC_HEOCFG20       (*(__IO uint32_t*)0xF00003DCU) /**< (LCDC) High-End Overlay Configuration Register 20 */
#define REG_LCDC_HEOCFG21       (*(__IO uint32_t*)0xF00003E0U) /**< (LCDC) High-End Overlay Configuration Register 21 */
#define REG_LCDC_HEOCFG22       (*(__IO uint32_t*)0xF00003E4U) /**< (LCDC) High-End Overlay Configuration Register 22 */
#define REG_LCDC_HEOCFG23       (*(__IO uint32_t*)0xF00003E8U) /**< (LCDC) High-End Overlay Configuration Register 23 */
#define REG_LCDC_HEOCFG24       (*(__IO uint32_t*)0xF00003ECU) /**< (LCDC) High-End Overlay Configuration Register 24 */
#define REG_LCDC_HEOCFG25       (*(__IO uint32_t*)0xF00003F0U) /**< (LCDC) High-End Overlay Configuration Register 25 */
#define REG_LCDC_HEOCFG26       (*(__IO uint32_t*)0xF00003F4U) /**< (LCDC) High-End Overlay Configuration Register 26 */
#define REG_LCDC_HEOCFG27       (*(__IO uint32_t*)0xF00003F8U) /**< (LCDC) High-End Overlay Configuration Register 27 */
#define REG_LCDC_HEOCFG28       (*(__IO uint32_t*)0xF00003FCU) /**< (LCDC) High-End Overlay Configuration Register 28 */
#define REG_LCDC_HEOCFG29       (*(__IO uint32_t*)0xF0000400U) /**< (LCDC) High-End Overlay Configuration Register 29 */
#define REG_LCDC_HEOCFG30       (*(__IO uint32_t*)0xF0000404U) /**< (LCDC) High-End Overlay Configuration Register 30 */
#define REG_LCDC_HEOCFG31       (*(__IO uint32_t*)0xF0000408U) /**< (LCDC) High-End Overlay Configuration Register 31 */
#define REG_LCDC_HEOCFG32       (*(__IO uint32_t*)0xF000040CU) /**< (LCDC) High-End Overlay Configuration Register 32 */
#define REG_LCDC_HEOCFG33       (*(__IO uint32_t*)0xF0000410U) /**< (LCDC) High-End Overlay Configuration Register 33 */
#define REG_LCDC_HEOCFG34       (*(__IO uint32_t*)0xF0000414U) /**< (LCDC) High-End Overlay Configuration Register 34 */
#define REG_LCDC_HEOCFG35       (*(__IO uint32_t*)0xF0000418U) /**< (LCDC) High-End Overlay Configuration Register 35 */
#define REG_LCDC_HEOCFG36       (*(__IO uint32_t*)0xF000041CU) /**< (LCDC) High-End Overlay Configuration Register 36 */
#define REG_LCDC_HEOCFG37       (*(__IO uint32_t*)0xF0000420U) /**< (LCDC) High-End Overlay Configuration Register 37 */
#define REG_LCDC_HEOCFG38       (*(__IO uint32_t*)0xF0000424U) /**< (LCDC) High-End Overlay Configuration Register 38 */
#define REG_LCDC_HEOCFG39       (*(__IO uint32_t*)0xF0000428U) /**< (LCDC) High-End Overlay Configuration Register 39 */
#define REG_LCDC_HEOCFG40       (*(__IO uint32_t*)0xF000042CU) /**< (LCDC) High-End Overlay Configuration Register 40 */
#define REG_LCDC_HEOCFG41       (*(__IO uint32_t*)0xF0000430U) /**< (LCDC) High-End Overlay Configuration Register 41 */
#define REG_LCDC_PPCHER         (*(__O  uint32_t*)0xF0000540U) /**< (LCDC) Post Processing Channel Enable Register */
#define REG_LCDC_PPCHDR         (*(__O  uint32_t*)0xF0000544U) /**< (LCDC) Post Processing Channel Disable Register */
#define REG_LCDC_PPCHSR         (*(__I  uint32_t*)0xF0000548U) /**< (LCDC) Post Processing Channel Status Register */
#define REG_LCDC_PPIER          (*(__O  uint32_t*)0xF000054CU) /**< (LCDC) Post Processing Interrupt Enable Register */
#define REG_LCDC_PPIDR          (*(__O  uint32_t*)0xF0000550U) /**< (LCDC) Post Processing Interrupt Disable Register */
#define REG_LCDC_PPIMR          (*(__I  uint32_t*)0xF0000554U) /**< (LCDC) Post Processing Interrupt Mask Register */
#define REG_LCDC_PPISR          (*(__I  uint32_t*)0xF0000558U) /**< (LCDC) Post Processing Interrupt Status Register */
#define REG_LCDC_PPHEAD         (*(__IO uint32_t*)0xF000055CU) /**< (LCDC) Post Processing Head Register */
#define REG_LCDC_PPADDR         (*(__IO uint32_t*)0xF0000560U) /**< (LCDC) Post Processing Address Register */
#define REG_LCDC_PPCTRL         (*(__IO uint32_t*)0xF0000564U) /**< (LCDC) Post Processing Control Register */
#define REG_LCDC_PPNEXT         (*(__IO uint32_t*)0xF0000568U) /**< (LCDC) Post Processing Next Register */
#define REG_LCDC_PPCFG0         (*(__IO uint32_t*)0xF000056CU) /**< (LCDC) Post Processing Configuration Register 0 */
#define REG_LCDC_PPCFG1         (*(__IO uint32_t*)0xF0000570U) /**< (LCDC) Post Processing Configuration Register 1 */
#define REG_LCDC_PPCFG2         (*(__IO uint32_t*)0xF0000574U) /**< (LCDC) Post Processing Configuration Register 2 */
#define REG_LCDC_PPCFG3         (*(__IO uint32_t*)0xF0000578U) /**< (LCDC) Post Processing Configuration Register 3 */
#define REG_LCDC_PPCFG4         (*(__IO uint32_t*)0xF000057CU) /**< (LCDC) Post Processing Configuration Register 4 */
#define REG_LCDC_PPCFG5         (*(__IO uint32_t*)0xF0000580U) /**< (LCDC) Post Processing Configuration Register 5 */
#define REG_LCDC_BASECLUT       (*(__IO uint32_t*)0xF0000600U) /**< (LCDC) Base CLUT Register */
#define REG_LCDC_BASECLUT0      (*(__IO uint32_t*)0xF0000600U) /**< (LCDC) Base CLUT Register 0 */
#define REG_LCDC_BASECLUT1      (*(__IO uint32_t*)0xF0000604U) /**< (LCDC) Base CLUT Register 1 */
#define REG_LCDC_BASECLUT2      (*(__IO uint32_t*)0xF0000608U) /**< (LCDC) Base CLUT Register 2 */
#define REG_LCDC_BASECLUT3      (*(__IO uint32_t*)0xF000060CU) /**< (LCDC) Base CLUT Register 3 */
#define REG_LCDC_BASECLUT4      (*(__IO uint32_t*)0xF0000610U) /**< (LCDC) Base CLUT Register 4 */
#define REG_LCDC_BASECLUT5      (*(__IO uint32_t*)0xF0000614U) /**< (LCDC) Base CLUT Register 5 */
#define REG_LCDC_BASECLUT6      (*(__IO uint32_t*)0xF0000618U) /**< (LCDC) Base CLUT Register 6 */
#define REG_LCDC_BASECLUT7      (*(__IO uint32_t*)0xF000061CU) /**< (LCDC) Base CLUT Register 7 */
#define REG_LCDC_BASECLUT8      (*(__IO uint32_t*)0xF0000620U) /**< (LCDC) Base CLUT Register 8 */
#define REG_LCDC_BASECLUT9      (*(__IO uint32_t*)0xF0000624U) /**< (LCDC) Base CLUT Register 9 */
#define REG_LCDC_BASECLUT10     (*(__IO uint32_t*)0xF0000628U) /**< (LCDC) Base CLUT Register 10 */
#define REG_LCDC_BASECLUT11     (*(__IO uint32_t*)0xF000062CU) /**< (LCDC) Base CLUT Register 11 */
#define REG_LCDC_BASECLUT12     (*(__IO uint32_t*)0xF0000630U) /**< (LCDC) Base CLUT Register 12 */
#define REG_LCDC_BASECLUT13     (*(__IO uint32_t*)0xF0000634U) /**< (LCDC) Base CLUT Register 13 */
#define REG_LCDC_BASECLUT14     (*(__IO uint32_t*)0xF0000638U) /**< (LCDC) Base CLUT Register 14 */
#define REG_LCDC_BASECLUT15     (*(__IO uint32_t*)0xF000063CU) /**< (LCDC) Base CLUT Register 15 */
#define REG_LCDC_BASECLUT16     (*(__IO uint32_t*)0xF0000640U) /**< (LCDC) Base CLUT Register 16 */
#define REG_LCDC_BASECLUT17     (*(__IO uint32_t*)0xF0000644U) /**< (LCDC) Base CLUT Register 17 */
#define REG_LCDC_BASECLUT18     (*(__IO uint32_t*)0xF0000648U) /**< (LCDC) Base CLUT Register 18 */
#define REG_LCDC_BASECLUT19     (*(__IO uint32_t*)0xF000064CU) /**< (LCDC) Base CLUT Register 19 */
#define REG_LCDC_BASECLUT20     (*(__IO uint32_t*)0xF0000650U) /**< (LCDC) Base CLUT Register 20 */
#define REG_LCDC_BASECLUT21     (*(__IO uint32_t*)0xF0000654U) /**< (LCDC) Base CLUT Register 21 */
#define REG_LCDC_BASECLUT22     (*(__IO uint32_t*)0xF0000658U) /**< (LCDC) Base CLUT Register 22 */
#define REG_LCDC_BASECLUT23     (*(__IO uint32_t*)0xF000065CU) /**< (LCDC) Base CLUT Register 23 */
#define REG_LCDC_BASECLUT24     (*(__IO uint32_t*)0xF0000660U) /**< (LCDC) Base CLUT Register 24 */
#define REG_LCDC_BASECLUT25     (*(__IO uint32_t*)0xF0000664U) /**< (LCDC) Base CLUT Register 25 */
#define REG_LCDC_BASECLUT26     (*(__IO uint32_t*)0xF0000668U) /**< (LCDC) Base CLUT Register 26 */
#define REG_LCDC_BASECLUT27     (*(__IO uint32_t*)0xF000066CU) /**< (LCDC) Base CLUT Register 27 */
#define REG_LCDC_BASECLUT28     (*(__IO uint32_t*)0xF0000670U) /**< (LCDC) Base CLUT Register 28 */
#define REG_LCDC_BASECLUT29     (*(__IO uint32_t*)0xF0000674U) /**< (LCDC) Base CLUT Register 29 */
#define REG_LCDC_BASECLUT30     (*(__IO uint32_t*)0xF0000678U) /**< (LCDC) Base CLUT Register 30 */
#define REG_LCDC_BASECLUT31     (*(__IO uint32_t*)0xF000067CU) /**< (LCDC) Base CLUT Register 31 */
#define REG_LCDC_BASECLUT32     (*(__IO uint32_t*)0xF0000680U) /**< (LCDC) Base CLUT Register 32 */
#define REG_LCDC_BASECLUT33     (*(__IO uint32_t*)0xF0000684U) /**< (LCDC) Base CLUT Register 33 */
#define REG_LCDC_BASECLUT34     (*(__IO uint32_t*)0xF0000688U) /**< (LCDC) Base CLUT Register 34 */
#define REG_LCDC_BASECLUT35     (*(__IO uint32_t*)0xF000068CU) /**< (LCDC) Base CLUT Register 35 */
#define REG_LCDC_BASECLUT36     (*(__IO uint32_t*)0xF0000690U) /**< (LCDC) Base CLUT Register 36 */
#define REG_LCDC_BASECLUT37     (*(__IO uint32_t*)0xF0000694U) /**< (LCDC) Base CLUT Register 37 */
#define REG_LCDC_BASECLUT38     (*(__IO uint32_t*)0xF0000698U) /**< (LCDC) Base CLUT Register 38 */
#define REG_LCDC_BASECLUT39     (*(__IO uint32_t*)0xF000069CU) /**< (LCDC) Base CLUT Register 39 */
#define REG_LCDC_BASECLUT40     (*(__IO uint32_t*)0xF00006A0U) /**< (LCDC) Base CLUT Register 40 */
#define REG_LCDC_BASECLUT41     (*(__IO uint32_t*)0xF00006A4U) /**< (LCDC) Base CLUT Register 41 */
#define REG_LCDC_BASECLUT42     (*(__IO uint32_t*)0xF00006A8U) /**< (LCDC) Base CLUT Register 42 */
#define REG_LCDC_BASECLUT43     (*(__IO uint32_t*)0xF00006ACU) /**< (LCDC) Base CLUT Register 43 */
#define REG_LCDC_BASECLUT44     (*(__IO uint32_t*)0xF00006B0U) /**< (LCDC) Base CLUT Register 44 */
#define REG_LCDC_BASECLUT45     (*(__IO uint32_t*)0xF00006B4U) /**< (LCDC) Base CLUT Register 45 */
#define REG_LCDC_BASECLUT46     (*(__IO uint32_t*)0xF00006B8U) /**< (LCDC) Base CLUT Register 46 */
#define REG_LCDC_BASECLUT47     (*(__IO uint32_t*)0xF00006BCU) /**< (LCDC) Base CLUT Register 47 */
#define REG_LCDC_BASECLUT48     (*(__IO uint32_t*)0xF00006C0U) /**< (LCDC) Base CLUT Register 48 */
#define REG_LCDC_BASECLUT49     (*(__IO uint32_t*)0xF00006C4U) /**< (LCDC) Base CLUT Register 49 */
#define REG_LCDC_BASECLUT50     (*(__IO uint32_t*)0xF00006C8U) /**< (LCDC) Base CLUT Register 50 */
#define REG_LCDC_BASECLUT51     (*(__IO uint32_t*)0xF00006CCU) /**< (LCDC) Base CLUT Register 51 */
#define REG_LCDC_BASECLUT52     (*(__IO uint32_t*)0xF00006D0U) /**< (LCDC) Base CLUT Register 52 */
#define REG_LCDC_BASECLUT53     (*(__IO uint32_t*)0xF00006D4U) /**< (LCDC) Base CLUT Register 53 */
#define REG_LCDC_BASECLUT54     (*(__IO uint32_t*)0xF00006D8U) /**< (LCDC) Base CLUT Register 54 */
#define REG_LCDC_BASECLUT55     (*(__IO uint32_t*)0xF00006DCU) /**< (LCDC) Base CLUT Register 55 */
#define REG_LCDC_BASECLUT56     (*(__IO uint32_t*)0xF00006E0U) /**< (LCDC) Base CLUT Register 56 */
#define REG_LCDC_BASECLUT57     (*(__IO uint32_t*)0xF00006E4U) /**< (LCDC) Base CLUT Register 57 */
#define REG_LCDC_BASECLUT58     (*(__IO uint32_t*)0xF00006E8U) /**< (LCDC) Base CLUT Register 58 */
#define REG_LCDC_BASECLUT59     (*(__IO uint32_t*)0xF00006ECU) /**< (LCDC) Base CLUT Register 59 */
#define REG_LCDC_BASECLUT60     (*(__IO uint32_t*)0xF00006F0U) /**< (LCDC) Base CLUT Register 60 */
#define REG_LCDC_BASECLUT61     (*(__IO uint32_t*)0xF00006F4U) /**< (LCDC) Base CLUT Register 61 */
#define REG_LCDC_BASECLUT62     (*(__IO uint32_t*)0xF00006F8U) /**< (LCDC) Base CLUT Register 62 */
#define REG_LCDC_BASECLUT63     (*(__IO uint32_t*)0xF00006FCU) /**< (LCDC) Base CLUT Register 63 */
#define REG_LCDC_BASECLUT64     (*(__IO uint32_t*)0xF0000700U) /**< (LCDC) Base CLUT Register 64 */
#define REG_LCDC_BASECLUT65     (*(__IO uint32_t*)0xF0000704U) /**< (LCDC) Base CLUT Register 65 */
#define REG_LCDC_BASECLUT66     (*(__IO uint32_t*)0xF0000708U) /**< (LCDC) Base CLUT Register 66 */
#define REG_LCDC_BASECLUT67     (*(__IO uint32_t*)0xF000070CU) /**< (LCDC) Base CLUT Register 67 */
#define REG_LCDC_BASECLUT68     (*(__IO uint32_t*)0xF0000710U) /**< (LCDC) Base CLUT Register 68 */
#define REG_LCDC_BASECLUT69     (*(__IO uint32_t*)0xF0000714U) /**< (LCDC) Base CLUT Register 69 */
#define REG_LCDC_BASECLUT70     (*(__IO uint32_t*)0xF0000718U) /**< (LCDC) Base CLUT Register 70 */
#define REG_LCDC_BASECLUT71     (*(__IO uint32_t*)0xF000071CU) /**< (LCDC) Base CLUT Register 71 */
#define REG_LCDC_BASECLUT72     (*(__IO uint32_t*)0xF0000720U) /**< (LCDC) Base CLUT Register 72 */
#define REG_LCDC_BASECLUT73     (*(__IO uint32_t*)0xF0000724U) /**< (LCDC) Base CLUT Register 73 */
#define REG_LCDC_BASECLUT74     (*(__IO uint32_t*)0xF0000728U) /**< (LCDC) Base CLUT Register 74 */
#define REG_LCDC_BASECLUT75     (*(__IO uint32_t*)0xF000072CU) /**< (LCDC) Base CLUT Register 75 */
#define REG_LCDC_BASECLUT76     (*(__IO uint32_t*)0xF0000730U) /**< (LCDC) Base CLUT Register 76 */
#define REG_LCDC_BASECLUT77     (*(__IO uint32_t*)0xF0000734U) /**< (LCDC) Base CLUT Register 77 */
#define REG_LCDC_BASECLUT78     (*(__IO uint32_t*)0xF0000738U) /**< (LCDC) Base CLUT Register 78 */
#define REG_LCDC_BASECLUT79     (*(__IO uint32_t*)0xF000073CU) /**< (LCDC) Base CLUT Register 79 */
#define REG_LCDC_BASECLUT80     (*(__IO uint32_t*)0xF0000740U) /**< (LCDC) Base CLUT Register 80 */
#define REG_LCDC_BASECLUT81     (*(__IO uint32_t*)0xF0000744U) /**< (LCDC) Base CLUT Register 81 */
#define REG_LCDC_BASECLUT82     (*(__IO uint32_t*)0xF0000748U) /**< (LCDC) Base CLUT Register 82 */
#define REG_LCDC_BASECLUT83     (*(__IO uint32_t*)0xF000074CU) /**< (LCDC) Base CLUT Register 83 */
#define REG_LCDC_BASECLUT84     (*(__IO uint32_t*)0xF0000750U) /**< (LCDC) Base CLUT Register 84 */
#define REG_LCDC_BASECLUT85     (*(__IO uint32_t*)0xF0000754U) /**< (LCDC) Base CLUT Register 85 */
#define REG_LCDC_BASECLUT86     (*(__IO uint32_t*)0xF0000758U) /**< (LCDC) Base CLUT Register 86 */
#define REG_LCDC_BASECLUT87     (*(__IO uint32_t*)0xF000075CU) /**< (LCDC) Base CLUT Register 87 */
#define REG_LCDC_BASECLUT88     (*(__IO uint32_t*)0xF0000760U) /**< (LCDC) Base CLUT Register 88 */
#define REG_LCDC_BASECLUT89     (*(__IO uint32_t*)0xF0000764U) /**< (LCDC) Base CLUT Register 89 */
#define REG_LCDC_BASECLUT90     (*(__IO uint32_t*)0xF0000768U) /**< (LCDC) Base CLUT Register 90 */
#define REG_LCDC_BASECLUT91     (*(__IO uint32_t*)0xF000076CU) /**< (LCDC) Base CLUT Register 91 */
#define REG_LCDC_BASECLUT92     (*(__IO uint32_t*)0xF0000770U) /**< (LCDC) Base CLUT Register 92 */
#define REG_LCDC_BASECLUT93     (*(__IO uint32_t*)0xF0000774U) /**< (LCDC) Base CLUT Register 93 */
#define REG_LCDC_BASECLUT94     (*(__IO uint32_t*)0xF0000778U) /**< (LCDC) Base CLUT Register 94 */
#define REG_LCDC_BASECLUT95     (*(__IO uint32_t*)0xF000077CU) /**< (LCDC) Base CLUT Register 95 */
#define REG_LCDC_BASECLUT96     (*(__IO uint32_t*)0xF0000780U) /**< (LCDC) Base CLUT Register 96 */
#define REG_LCDC_BASECLUT97     (*(__IO uint32_t*)0xF0000784U) /**< (LCDC) Base CLUT Register 97 */
#define REG_LCDC_BASECLUT98     (*(__IO uint32_t*)0xF0000788U) /**< (LCDC) Base CLUT Register 98 */
#define REG_LCDC_BASECLUT99     (*(__IO uint32_t*)0xF000078CU) /**< (LCDC) Base CLUT Register 99 */
#define REG_LCDC_BASECLUT100    (*(__IO uint32_t*)0xF0000790U) /**< (LCDC) Base CLUT Register 100 */
#define REG_LCDC_BASECLUT101    (*(__IO uint32_t*)0xF0000794U) /**< (LCDC) Base CLUT Register 101 */
#define REG_LCDC_BASECLUT102    (*(__IO uint32_t*)0xF0000798U) /**< (LCDC) Base CLUT Register 102 */
#define REG_LCDC_BASECLUT103    (*(__IO uint32_t*)0xF000079CU) /**< (LCDC) Base CLUT Register 103 */
#define REG_LCDC_BASECLUT104    (*(__IO uint32_t*)0xF00007A0U) /**< (LCDC) Base CLUT Register 104 */
#define REG_LCDC_BASECLUT105    (*(__IO uint32_t*)0xF00007A4U) /**< (LCDC) Base CLUT Register 105 */
#define REG_LCDC_BASECLUT106    (*(__IO uint32_t*)0xF00007A8U) /**< (LCDC) Base CLUT Register 106 */
#define REG_LCDC_BASECLUT107    (*(__IO uint32_t*)0xF00007ACU) /**< (LCDC) Base CLUT Register 107 */
#define REG_LCDC_BASECLUT108    (*(__IO uint32_t*)0xF00007B0U) /**< (LCDC) Base CLUT Register 108 */
#define REG_LCDC_BASECLUT109    (*(__IO uint32_t*)0xF00007B4U) /**< (LCDC) Base CLUT Register 109 */
#define REG_LCDC_BASECLUT110    (*(__IO uint32_t*)0xF00007B8U) /**< (LCDC) Base CLUT Register 110 */
#define REG_LCDC_BASECLUT111    (*(__IO uint32_t*)0xF00007BCU) /**< (LCDC) Base CLUT Register 111 */
#define REG_LCDC_BASECLUT112    (*(__IO uint32_t*)0xF00007C0U) /**< (LCDC) Base CLUT Register 112 */
#define REG_LCDC_BASECLUT113    (*(__IO uint32_t*)0xF00007C4U) /**< (LCDC) Base CLUT Register 113 */
#define REG_LCDC_BASECLUT114    (*(__IO uint32_t*)0xF00007C8U) /**< (LCDC) Base CLUT Register 114 */
#define REG_LCDC_BASECLUT115    (*(__IO uint32_t*)0xF00007CCU) /**< (LCDC) Base CLUT Register 115 */
#define REG_LCDC_BASECLUT116    (*(__IO uint32_t*)0xF00007D0U) /**< (LCDC) Base CLUT Register 116 */
#define REG_LCDC_BASECLUT117    (*(__IO uint32_t*)0xF00007D4U) /**< (LCDC) Base CLUT Register 117 */
#define REG_LCDC_BASECLUT118    (*(__IO uint32_t*)0xF00007D8U) /**< (LCDC) Base CLUT Register 118 */
#define REG_LCDC_BASECLUT119    (*(__IO uint32_t*)0xF00007DCU) /**< (LCDC) Base CLUT Register 119 */
#define REG_LCDC_BASECLUT120    (*(__IO uint32_t*)0xF00007E0U) /**< (LCDC) Base CLUT Register 120 */
#define REG_LCDC_BASECLUT121    (*(__IO uint32_t*)0xF00007E4U) /**< (LCDC) Base CLUT Register 121 */
#define REG_LCDC_BASECLUT122    (*(__IO uint32_t*)0xF00007E8U) /**< (LCDC) Base CLUT Register 122 */
#define REG_LCDC_BASECLUT123    (*(__IO uint32_t*)0xF00007ECU) /**< (LCDC) Base CLUT Register 123 */
#define REG_LCDC_BASECLUT124    (*(__IO uint32_t*)0xF00007F0U) /**< (LCDC) Base CLUT Register 124 */
#define REG_LCDC_BASECLUT125    (*(__IO uint32_t*)0xF00007F4U) /**< (LCDC) Base CLUT Register 125 */
#define REG_LCDC_BASECLUT126    (*(__IO uint32_t*)0xF00007F8U) /**< (LCDC) Base CLUT Register 126 */
#define REG_LCDC_BASECLUT127    (*(__IO uint32_t*)0xF00007FCU) /**< (LCDC) Base CLUT Register 127 */
#define REG_LCDC_BASECLUT128    (*(__IO uint32_t*)0xF0000800U) /**< (LCDC) Base CLUT Register 128 */
#define REG_LCDC_BASECLUT129    (*(__IO uint32_t*)0xF0000804U) /**< (LCDC) Base CLUT Register 129 */
#define REG_LCDC_BASECLUT130    (*(__IO uint32_t*)0xF0000808U) /**< (LCDC) Base CLUT Register 130 */
#define REG_LCDC_BASECLUT131    (*(__IO uint32_t*)0xF000080CU) /**< (LCDC) Base CLUT Register 131 */
#define REG_LCDC_BASECLUT132    (*(__IO uint32_t*)0xF0000810U) /**< (LCDC) Base CLUT Register 132 */
#define REG_LCDC_BASECLUT133    (*(__IO uint32_t*)0xF0000814U) /**< (LCDC) Base CLUT Register 133 */
#define REG_LCDC_BASECLUT134    (*(__IO uint32_t*)0xF0000818U) /**< (LCDC) Base CLUT Register 134 */
#define REG_LCDC_BASECLUT135    (*(__IO uint32_t*)0xF000081CU) /**< (LCDC) Base CLUT Register 135 */
#define REG_LCDC_BASECLUT136    (*(__IO uint32_t*)0xF0000820U) /**< (LCDC) Base CLUT Register 136 */
#define REG_LCDC_BASECLUT137    (*(__IO uint32_t*)0xF0000824U) /**< (LCDC) Base CLUT Register 137 */
#define REG_LCDC_BASECLUT138    (*(__IO uint32_t*)0xF0000828U) /**< (LCDC) Base CLUT Register 138 */
#define REG_LCDC_BASECLUT139    (*(__IO uint32_t*)0xF000082CU) /**< (LCDC) Base CLUT Register 139 */
#define REG_LCDC_BASECLUT140    (*(__IO uint32_t*)0xF0000830U) /**< (LCDC) Base CLUT Register 140 */
#define REG_LCDC_BASECLUT141    (*(__IO uint32_t*)0xF0000834U) /**< (LCDC) Base CLUT Register 141 */
#define REG_LCDC_BASECLUT142    (*(__IO uint32_t*)0xF0000838U) /**< (LCDC) Base CLUT Register 142 */
#define REG_LCDC_BASECLUT143    (*(__IO uint32_t*)0xF000083CU) /**< (LCDC) Base CLUT Register 143 */
#define REG_LCDC_BASECLUT144    (*(__IO uint32_t*)0xF0000840U) /**< (LCDC) Base CLUT Register 144 */
#define REG_LCDC_BASECLUT145    (*(__IO uint32_t*)0xF0000844U) /**< (LCDC) Base CLUT Register 145 */
#define REG_LCDC_BASECLUT146    (*(__IO uint32_t*)0xF0000848U) /**< (LCDC) Base CLUT Register 146 */
#define REG_LCDC_BASECLUT147    (*(__IO uint32_t*)0xF000084CU) /**< (LCDC) Base CLUT Register 147 */
#define REG_LCDC_BASECLUT148    (*(__IO uint32_t*)0xF0000850U) /**< (LCDC) Base CLUT Register 148 */
#define REG_LCDC_BASECLUT149    (*(__IO uint32_t*)0xF0000854U) /**< (LCDC) Base CLUT Register 149 */
#define REG_LCDC_BASECLUT150    (*(__IO uint32_t*)0xF0000858U) /**< (LCDC) Base CLUT Register 150 */
#define REG_LCDC_BASECLUT151    (*(__IO uint32_t*)0xF000085CU) /**< (LCDC) Base CLUT Register 151 */
#define REG_LCDC_BASECLUT152    (*(__IO uint32_t*)0xF0000860U) /**< (LCDC) Base CLUT Register 152 */
#define REG_LCDC_BASECLUT153    (*(__IO uint32_t*)0xF0000864U) /**< (LCDC) Base CLUT Register 153 */
#define REG_LCDC_BASECLUT154    (*(__IO uint32_t*)0xF0000868U) /**< (LCDC) Base CLUT Register 154 */
#define REG_LCDC_BASECLUT155    (*(__IO uint32_t*)0xF000086CU) /**< (LCDC) Base CLUT Register 155 */
#define REG_LCDC_BASECLUT156    (*(__IO uint32_t*)0xF0000870U) /**< (LCDC) Base CLUT Register 156 */
#define REG_LCDC_BASECLUT157    (*(__IO uint32_t*)0xF0000874U) /**< (LCDC) Base CLUT Register 157 */
#define REG_LCDC_BASECLUT158    (*(__IO uint32_t*)0xF0000878U) /**< (LCDC) Base CLUT Register 158 */
#define REG_LCDC_BASECLUT159    (*(__IO uint32_t*)0xF000087CU) /**< (LCDC) Base CLUT Register 159 */
#define REG_LCDC_BASECLUT160    (*(__IO uint32_t*)0xF0000880U) /**< (LCDC) Base CLUT Register 160 */
#define REG_LCDC_BASECLUT161    (*(__IO uint32_t*)0xF0000884U) /**< (LCDC) Base CLUT Register 161 */
#define REG_LCDC_BASECLUT162    (*(__IO uint32_t*)0xF0000888U) /**< (LCDC) Base CLUT Register 162 */
#define REG_LCDC_BASECLUT163    (*(__IO uint32_t*)0xF000088CU) /**< (LCDC) Base CLUT Register 163 */
#define REG_LCDC_BASECLUT164    (*(__IO uint32_t*)0xF0000890U) /**< (LCDC) Base CLUT Register 164 */
#define REG_LCDC_BASECLUT165    (*(__IO uint32_t*)0xF0000894U) /**< (LCDC) Base CLUT Register 165 */
#define REG_LCDC_BASECLUT166    (*(__IO uint32_t*)0xF0000898U) /**< (LCDC) Base CLUT Register 166 */
#define REG_LCDC_BASECLUT167    (*(__IO uint32_t*)0xF000089CU) /**< (LCDC) Base CLUT Register 167 */
#define REG_LCDC_BASECLUT168    (*(__IO uint32_t*)0xF00008A0U) /**< (LCDC) Base CLUT Register 168 */
#define REG_LCDC_BASECLUT169    (*(__IO uint32_t*)0xF00008A4U) /**< (LCDC) Base CLUT Register 169 */
#define REG_LCDC_BASECLUT170    (*(__IO uint32_t*)0xF00008A8U) /**< (LCDC) Base CLUT Register 170 */
#define REG_LCDC_BASECLUT171    (*(__IO uint32_t*)0xF00008ACU) /**< (LCDC) Base CLUT Register 171 */
#define REG_LCDC_BASECLUT172    (*(__IO uint32_t*)0xF00008B0U) /**< (LCDC) Base CLUT Register 172 */
#define REG_LCDC_BASECLUT173    (*(__IO uint32_t*)0xF00008B4U) /**< (LCDC) Base CLUT Register 173 */
#define REG_LCDC_BASECLUT174    (*(__IO uint32_t*)0xF00008B8U) /**< (LCDC) Base CLUT Register 174 */
#define REG_LCDC_BASECLUT175    (*(__IO uint32_t*)0xF00008BCU) /**< (LCDC) Base CLUT Register 175 */
#define REG_LCDC_BASECLUT176    (*(__IO uint32_t*)0xF00008C0U) /**< (LCDC) Base CLUT Register 176 */
#define REG_LCDC_BASECLUT177    (*(__IO uint32_t*)0xF00008C4U) /**< (LCDC) Base CLUT Register 177 */
#define REG_LCDC_BASECLUT178    (*(__IO uint32_t*)0xF00008C8U) /**< (LCDC) Base CLUT Register 178 */
#define REG_LCDC_BASECLUT179    (*(__IO uint32_t*)0xF00008CCU) /**< (LCDC) Base CLUT Register 179 */
#define REG_LCDC_BASECLUT180    (*(__IO uint32_t*)0xF00008D0U) /**< (LCDC) Base CLUT Register 180 */
#define REG_LCDC_BASECLUT181    (*(__IO uint32_t*)0xF00008D4U) /**< (LCDC) Base CLUT Register 181 */
#define REG_LCDC_BASECLUT182    (*(__IO uint32_t*)0xF00008D8U) /**< (LCDC) Base CLUT Register 182 */
#define REG_LCDC_BASECLUT183    (*(__IO uint32_t*)0xF00008DCU) /**< (LCDC) Base CLUT Register 183 */
#define REG_LCDC_BASECLUT184    (*(__IO uint32_t*)0xF00008E0U) /**< (LCDC) Base CLUT Register 184 */
#define REG_LCDC_BASECLUT185    (*(__IO uint32_t*)0xF00008E4U) /**< (LCDC) Base CLUT Register 185 */
#define REG_LCDC_BASECLUT186    (*(__IO uint32_t*)0xF00008E8U) /**< (LCDC) Base CLUT Register 186 */
#define REG_LCDC_BASECLUT187    (*(__IO uint32_t*)0xF00008ECU) /**< (LCDC) Base CLUT Register 187 */
#define REG_LCDC_BASECLUT188    (*(__IO uint32_t*)0xF00008F0U) /**< (LCDC) Base CLUT Register 188 */
#define REG_LCDC_BASECLUT189    (*(__IO uint32_t*)0xF00008F4U) /**< (LCDC) Base CLUT Register 189 */
#define REG_LCDC_BASECLUT190    (*(__IO uint32_t*)0xF00008F8U) /**< (LCDC) Base CLUT Register 190 */
#define REG_LCDC_BASECLUT191    (*(__IO uint32_t*)0xF00008FCU) /**< (LCDC) Base CLUT Register 191 */
#define REG_LCDC_BASECLUT192    (*(__IO uint32_t*)0xF0000900U) /**< (LCDC) Base CLUT Register 192 */
#define REG_LCDC_BASECLUT193    (*(__IO uint32_t*)0xF0000904U) /**< (LCDC) Base CLUT Register 193 */
#define REG_LCDC_BASECLUT194    (*(__IO uint32_t*)0xF0000908U) /**< (LCDC) Base CLUT Register 194 */
#define REG_LCDC_BASECLUT195    (*(__IO uint32_t*)0xF000090CU) /**< (LCDC) Base CLUT Register 195 */
#define REG_LCDC_BASECLUT196    (*(__IO uint32_t*)0xF0000910U) /**< (LCDC) Base CLUT Register 196 */
#define REG_LCDC_BASECLUT197    (*(__IO uint32_t*)0xF0000914U) /**< (LCDC) Base CLUT Register 197 */
#define REG_LCDC_BASECLUT198    (*(__IO uint32_t*)0xF0000918U) /**< (LCDC) Base CLUT Register 198 */
#define REG_LCDC_BASECLUT199    (*(__IO uint32_t*)0xF000091CU) /**< (LCDC) Base CLUT Register 199 */
#define REG_LCDC_BASECLUT200    (*(__IO uint32_t*)0xF0000920U) /**< (LCDC) Base CLUT Register 200 */
#define REG_LCDC_BASECLUT201    (*(__IO uint32_t*)0xF0000924U) /**< (LCDC) Base CLUT Register 201 */
#define REG_LCDC_BASECLUT202    (*(__IO uint32_t*)0xF0000928U) /**< (LCDC) Base CLUT Register 202 */
#define REG_LCDC_BASECLUT203    (*(__IO uint32_t*)0xF000092CU) /**< (LCDC) Base CLUT Register 203 */
#define REG_LCDC_BASECLUT204    (*(__IO uint32_t*)0xF0000930U) /**< (LCDC) Base CLUT Register 204 */
#define REG_LCDC_BASECLUT205    (*(__IO uint32_t*)0xF0000934U) /**< (LCDC) Base CLUT Register 205 */
#define REG_LCDC_BASECLUT206    (*(__IO uint32_t*)0xF0000938U) /**< (LCDC) Base CLUT Register 206 */
#define REG_LCDC_BASECLUT207    (*(__IO uint32_t*)0xF000093CU) /**< (LCDC) Base CLUT Register 207 */
#define REG_LCDC_BASECLUT208    (*(__IO uint32_t*)0xF0000940U) /**< (LCDC) Base CLUT Register 208 */
#define REG_LCDC_BASECLUT209    (*(__IO uint32_t*)0xF0000944U) /**< (LCDC) Base CLUT Register 209 */
#define REG_LCDC_BASECLUT210    (*(__IO uint32_t*)0xF0000948U) /**< (LCDC) Base CLUT Register 210 */
#define REG_LCDC_BASECLUT211    (*(__IO uint32_t*)0xF000094CU) /**< (LCDC) Base CLUT Register 211 */
#define REG_LCDC_BASECLUT212    (*(__IO uint32_t*)0xF0000950U) /**< (LCDC) Base CLUT Register 212 */
#define REG_LCDC_BASECLUT213    (*(__IO uint32_t*)0xF0000954U) /**< (LCDC) Base CLUT Register 213 */
#define REG_LCDC_BASECLUT214    (*(__IO uint32_t*)0xF0000958U) /**< (LCDC) Base CLUT Register 214 */
#define REG_LCDC_BASECLUT215    (*(__IO uint32_t*)0xF000095CU) /**< (LCDC) Base CLUT Register 215 */
#define REG_LCDC_BASECLUT216    (*(__IO uint32_t*)0xF0000960U) /**< (LCDC) Base CLUT Register 216 */
#define REG_LCDC_BASECLUT217    (*(__IO uint32_t*)0xF0000964U) /**< (LCDC) Base CLUT Register 217 */
#define REG_LCDC_BASECLUT218    (*(__IO uint32_t*)0xF0000968U) /**< (LCDC) Base CLUT Register 218 */
#define REG_LCDC_BASECLUT219    (*(__IO uint32_t*)0xF000096CU) /**< (LCDC) Base CLUT Register 219 */
#define REG_LCDC_BASECLUT220    (*(__IO uint32_t*)0xF0000970U) /**< (LCDC) Base CLUT Register 220 */
#define REG_LCDC_BASECLUT221    (*(__IO uint32_t*)0xF0000974U) /**< (LCDC) Base CLUT Register 221 */
#define REG_LCDC_BASECLUT222    (*(__IO uint32_t*)0xF0000978U) /**< (LCDC) Base CLUT Register 222 */
#define REG_LCDC_BASECLUT223    (*(__IO uint32_t*)0xF000097CU) /**< (LCDC) Base CLUT Register 223 */
#define REG_LCDC_BASECLUT224    (*(__IO uint32_t*)0xF0000980U) /**< (LCDC) Base CLUT Register 224 */
#define REG_LCDC_BASECLUT225    (*(__IO uint32_t*)0xF0000984U) /**< (LCDC) Base CLUT Register 225 */
#define REG_LCDC_BASECLUT226    (*(__IO uint32_t*)0xF0000988U) /**< (LCDC) Base CLUT Register 226 */
#define REG_LCDC_BASECLUT227    (*(__IO uint32_t*)0xF000098CU) /**< (LCDC) Base CLUT Register 227 */
#define REG_LCDC_BASECLUT228    (*(__IO uint32_t*)0xF0000990U) /**< (LCDC) Base CLUT Register 228 */
#define REG_LCDC_BASECLUT229    (*(__IO uint32_t*)0xF0000994U) /**< (LCDC) Base CLUT Register 229 */
#define REG_LCDC_BASECLUT230    (*(__IO uint32_t*)0xF0000998U) /**< (LCDC) Base CLUT Register 230 */
#define REG_LCDC_BASECLUT231    (*(__IO uint32_t*)0xF000099CU) /**< (LCDC) Base CLUT Register 231 */
#define REG_LCDC_BASECLUT232    (*(__IO uint32_t*)0xF00009A0U) /**< (LCDC) Base CLUT Register 232 */
#define REG_LCDC_BASECLUT233    (*(__IO uint32_t*)0xF00009A4U) /**< (LCDC) Base CLUT Register 233 */
#define REG_LCDC_BASECLUT234    (*(__IO uint32_t*)0xF00009A8U) /**< (LCDC) Base CLUT Register 234 */
#define REG_LCDC_BASECLUT235    (*(__IO uint32_t*)0xF00009ACU) /**< (LCDC) Base CLUT Register 235 */
#define REG_LCDC_BASECLUT236    (*(__IO uint32_t*)0xF00009B0U) /**< (LCDC) Base CLUT Register 236 */
#define REG_LCDC_BASECLUT237    (*(__IO uint32_t*)0xF00009B4U) /**< (LCDC) Base CLUT Register 237 */
#define REG_LCDC_BASECLUT238    (*(__IO uint32_t*)0xF00009B8U) /**< (LCDC) Base CLUT Register 238 */
#define REG_LCDC_BASECLUT239    (*(__IO uint32_t*)0xF00009BCU) /**< (LCDC) Base CLUT Register 239 */
#define REG_LCDC_BASECLUT240    (*(__IO uint32_t*)0xF00009C0U) /**< (LCDC) Base CLUT Register 240 */
#define REG_LCDC_BASECLUT241    (*(__IO uint32_t*)0xF00009C4U) /**< (LCDC) Base CLUT Register 241 */
#define REG_LCDC_BASECLUT242    (*(__IO uint32_t*)0xF00009C8U) /**< (LCDC) Base CLUT Register 242 */
#define REG_LCDC_BASECLUT243    (*(__IO uint32_t*)0xF00009CCU) /**< (LCDC) Base CLUT Register 243 */
#define REG_LCDC_BASECLUT244    (*(__IO uint32_t*)0xF00009D0U) /**< (LCDC) Base CLUT Register 244 */
#define REG_LCDC_BASECLUT245    (*(__IO uint32_t*)0xF00009D4U) /**< (LCDC) Base CLUT Register 245 */
#define REG_LCDC_BASECLUT246    (*(__IO uint32_t*)0xF00009D8U) /**< (LCDC) Base CLUT Register 246 */
#define REG_LCDC_BASECLUT247    (*(__IO uint32_t*)0xF00009DCU) /**< (LCDC) Base CLUT Register 247 */
#define REG_LCDC_BASECLUT248    (*(__IO uint32_t*)0xF00009E0U) /**< (LCDC) Base CLUT Register 248 */
#define REG_LCDC_BASECLUT249    (*(__IO uint32_t*)0xF00009E4U) /**< (LCDC) Base CLUT Register 249 */
#define REG_LCDC_BASECLUT250    (*(__IO uint32_t*)0xF00009E8U) /**< (LCDC) Base CLUT Register 250 */
#define REG_LCDC_BASECLUT251    (*(__IO uint32_t*)0xF00009ECU) /**< (LCDC) Base CLUT Register 251 */
#define REG_LCDC_BASECLUT252    (*(__IO uint32_t*)0xF00009F0U) /**< (LCDC) Base CLUT Register 252 */
#define REG_LCDC_BASECLUT253    (*(__IO uint32_t*)0xF00009F4U) /**< (LCDC) Base CLUT Register 253 */
#define REG_LCDC_BASECLUT254    (*(__IO uint32_t*)0xF00009F8U) /**< (LCDC) Base CLUT Register 254 */
#define REG_LCDC_BASECLUT255    (*(__IO uint32_t*)0xF00009FCU) /**< (LCDC) Base CLUT Register 255 */
#define REG_LCDC_OVR1CLUT       (*(__IO uint32_t*)0xF0000A00U) /**< (LCDC) Overlay 1 CLUT Register */
#define REG_LCDC_OVR1CLUT0      (*(__IO uint32_t*)0xF0000A00U) /**< (LCDC) Overlay 1 CLUT Register 0 */
#define REG_LCDC_OVR1CLUT1      (*(__IO uint32_t*)0xF0000A04U) /**< (LCDC) Overlay 1 CLUT Register 1 */
#define REG_LCDC_OVR1CLUT2      (*(__IO uint32_t*)0xF0000A08U) /**< (LCDC) Overlay 1 CLUT Register 2 */
#define REG_LCDC_OVR1CLUT3      (*(__IO uint32_t*)0xF0000A0CU) /**< (LCDC) Overlay 1 CLUT Register 3 */
#define REG_LCDC_OVR1CLUT4      (*(__IO uint32_t*)0xF0000A10U) /**< (LCDC) Overlay 1 CLUT Register 4 */
#define REG_LCDC_OVR1CLUT5      (*(__IO uint32_t*)0xF0000A14U) /**< (LCDC) Overlay 1 CLUT Register 5 */
#define REG_LCDC_OVR1CLUT6      (*(__IO uint32_t*)0xF0000A18U) /**< (LCDC) Overlay 1 CLUT Register 6 */
#define REG_LCDC_OVR1CLUT7      (*(__IO uint32_t*)0xF0000A1CU) /**< (LCDC) Overlay 1 CLUT Register 7 */
#define REG_LCDC_OVR1CLUT8      (*(__IO uint32_t*)0xF0000A20U) /**< (LCDC) Overlay 1 CLUT Register 8 */
#define REG_LCDC_OVR1CLUT9      (*(__IO uint32_t*)0xF0000A24U) /**< (LCDC) Overlay 1 CLUT Register 9 */
#define REG_LCDC_OVR1CLUT10     (*(__IO uint32_t*)0xF0000A28U) /**< (LCDC) Overlay 1 CLUT Register 10 */
#define REG_LCDC_OVR1CLUT11     (*(__IO uint32_t*)0xF0000A2CU) /**< (LCDC) Overlay 1 CLUT Register 11 */
#define REG_LCDC_OVR1CLUT12     (*(__IO uint32_t*)0xF0000A30U) /**< (LCDC) Overlay 1 CLUT Register 12 */
#define REG_LCDC_OVR1CLUT13     (*(__IO uint32_t*)0xF0000A34U) /**< (LCDC) Overlay 1 CLUT Register 13 */
#define REG_LCDC_OVR1CLUT14     (*(__IO uint32_t*)0xF0000A38U) /**< (LCDC) Overlay 1 CLUT Register 14 */
#define REG_LCDC_OVR1CLUT15     (*(__IO uint32_t*)0xF0000A3CU) /**< (LCDC) Overlay 1 CLUT Register 15 */
#define REG_LCDC_OVR1CLUT16     (*(__IO uint32_t*)0xF0000A40U) /**< (LCDC) Overlay 1 CLUT Register 16 */
#define REG_LCDC_OVR1CLUT17     (*(__IO uint32_t*)0xF0000A44U) /**< (LCDC) Overlay 1 CLUT Register 17 */
#define REG_LCDC_OVR1CLUT18     (*(__IO uint32_t*)0xF0000A48U) /**< (LCDC) Overlay 1 CLUT Register 18 */
#define REG_LCDC_OVR1CLUT19     (*(__IO uint32_t*)0xF0000A4CU) /**< (LCDC) Overlay 1 CLUT Register 19 */
#define REG_LCDC_OVR1CLUT20     (*(__IO uint32_t*)0xF0000A50U) /**< (LCDC) Overlay 1 CLUT Register 20 */
#define REG_LCDC_OVR1CLUT21     (*(__IO uint32_t*)0xF0000A54U) /**< (LCDC) Overlay 1 CLUT Register 21 */
#define REG_LCDC_OVR1CLUT22     (*(__IO uint32_t*)0xF0000A58U) /**< (LCDC) Overlay 1 CLUT Register 22 */
#define REG_LCDC_OVR1CLUT23     (*(__IO uint32_t*)0xF0000A5CU) /**< (LCDC) Overlay 1 CLUT Register 23 */
#define REG_LCDC_OVR1CLUT24     (*(__IO uint32_t*)0xF0000A60U) /**< (LCDC) Overlay 1 CLUT Register 24 */
#define REG_LCDC_OVR1CLUT25     (*(__IO uint32_t*)0xF0000A64U) /**< (LCDC) Overlay 1 CLUT Register 25 */
#define REG_LCDC_OVR1CLUT26     (*(__IO uint32_t*)0xF0000A68U) /**< (LCDC) Overlay 1 CLUT Register 26 */
#define REG_LCDC_OVR1CLUT27     (*(__IO uint32_t*)0xF0000A6CU) /**< (LCDC) Overlay 1 CLUT Register 27 */
#define REG_LCDC_OVR1CLUT28     (*(__IO uint32_t*)0xF0000A70U) /**< (LCDC) Overlay 1 CLUT Register 28 */
#define REG_LCDC_OVR1CLUT29     (*(__IO uint32_t*)0xF0000A74U) /**< (LCDC) Overlay 1 CLUT Register 29 */
#define REG_LCDC_OVR1CLUT30     (*(__IO uint32_t*)0xF0000A78U) /**< (LCDC) Overlay 1 CLUT Register 30 */
#define REG_LCDC_OVR1CLUT31     (*(__IO uint32_t*)0xF0000A7CU) /**< (LCDC) Overlay 1 CLUT Register 31 */
#define REG_LCDC_OVR1CLUT32     (*(__IO uint32_t*)0xF0000A80U) /**< (LCDC) Overlay 1 CLUT Register 32 */
#define REG_LCDC_OVR1CLUT33     (*(__IO uint32_t*)0xF0000A84U) /**< (LCDC) Overlay 1 CLUT Register 33 */
#define REG_LCDC_OVR1CLUT34     (*(__IO uint32_t*)0xF0000A88U) /**< (LCDC) Overlay 1 CLUT Register 34 */
#define REG_LCDC_OVR1CLUT35     (*(__IO uint32_t*)0xF0000A8CU) /**< (LCDC) Overlay 1 CLUT Register 35 */
#define REG_LCDC_OVR1CLUT36     (*(__IO uint32_t*)0xF0000A90U) /**< (LCDC) Overlay 1 CLUT Register 36 */
#define REG_LCDC_OVR1CLUT37     (*(__IO uint32_t*)0xF0000A94U) /**< (LCDC) Overlay 1 CLUT Register 37 */
#define REG_LCDC_OVR1CLUT38     (*(__IO uint32_t*)0xF0000A98U) /**< (LCDC) Overlay 1 CLUT Register 38 */
#define REG_LCDC_OVR1CLUT39     (*(__IO uint32_t*)0xF0000A9CU) /**< (LCDC) Overlay 1 CLUT Register 39 */
#define REG_LCDC_OVR1CLUT40     (*(__IO uint32_t*)0xF0000AA0U) /**< (LCDC) Overlay 1 CLUT Register 40 */
#define REG_LCDC_OVR1CLUT41     (*(__IO uint32_t*)0xF0000AA4U) /**< (LCDC) Overlay 1 CLUT Register 41 */
#define REG_LCDC_OVR1CLUT42     (*(__IO uint32_t*)0xF0000AA8U) /**< (LCDC) Overlay 1 CLUT Register 42 */
#define REG_LCDC_OVR1CLUT43     (*(__IO uint32_t*)0xF0000AACU) /**< (LCDC) Overlay 1 CLUT Register 43 */
#define REG_LCDC_OVR1CLUT44     (*(__IO uint32_t*)0xF0000AB0U) /**< (LCDC) Overlay 1 CLUT Register 44 */
#define REG_LCDC_OVR1CLUT45     (*(__IO uint32_t*)0xF0000AB4U) /**< (LCDC) Overlay 1 CLUT Register 45 */
#define REG_LCDC_OVR1CLUT46     (*(__IO uint32_t*)0xF0000AB8U) /**< (LCDC) Overlay 1 CLUT Register 46 */
#define REG_LCDC_OVR1CLUT47     (*(__IO uint32_t*)0xF0000ABCU) /**< (LCDC) Overlay 1 CLUT Register 47 */
#define REG_LCDC_OVR1CLUT48     (*(__IO uint32_t*)0xF0000AC0U) /**< (LCDC) Overlay 1 CLUT Register 48 */
#define REG_LCDC_OVR1CLUT49     (*(__IO uint32_t*)0xF0000AC4U) /**< (LCDC) Overlay 1 CLUT Register 49 */
#define REG_LCDC_OVR1CLUT50     (*(__IO uint32_t*)0xF0000AC8U) /**< (LCDC) Overlay 1 CLUT Register 50 */
#define REG_LCDC_OVR1CLUT51     (*(__IO uint32_t*)0xF0000ACCU) /**< (LCDC) Overlay 1 CLUT Register 51 */
#define REG_LCDC_OVR1CLUT52     (*(__IO uint32_t*)0xF0000AD0U) /**< (LCDC) Overlay 1 CLUT Register 52 */
#define REG_LCDC_OVR1CLUT53     (*(__IO uint32_t*)0xF0000AD4U) /**< (LCDC) Overlay 1 CLUT Register 53 */
#define REG_LCDC_OVR1CLUT54     (*(__IO uint32_t*)0xF0000AD8U) /**< (LCDC) Overlay 1 CLUT Register 54 */
#define REG_LCDC_OVR1CLUT55     (*(__IO uint32_t*)0xF0000ADCU) /**< (LCDC) Overlay 1 CLUT Register 55 */
#define REG_LCDC_OVR1CLUT56     (*(__IO uint32_t*)0xF0000AE0U) /**< (LCDC) Overlay 1 CLUT Register 56 */
#define REG_LCDC_OVR1CLUT57     (*(__IO uint32_t*)0xF0000AE4U) /**< (LCDC) Overlay 1 CLUT Register 57 */
#define REG_LCDC_OVR1CLUT58     (*(__IO uint32_t*)0xF0000AE8U) /**< (LCDC) Overlay 1 CLUT Register 58 */
#define REG_LCDC_OVR1CLUT59     (*(__IO uint32_t*)0xF0000AECU) /**< (LCDC) Overlay 1 CLUT Register 59 */
#define REG_LCDC_OVR1CLUT60     (*(__IO uint32_t*)0xF0000AF0U) /**< (LCDC) Overlay 1 CLUT Register 60 */
#define REG_LCDC_OVR1CLUT61     (*(__IO uint32_t*)0xF0000AF4U) /**< (LCDC) Overlay 1 CLUT Register 61 */
#define REG_LCDC_OVR1CLUT62     (*(__IO uint32_t*)0xF0000AF8U) /**< (LCDC) Overlay 1 CLUT Register 62 */
#define REG_LCDC_OVR1CLUT63     (*(__IO uint32_t*)0xF0000AFCU) /**< (LCDC) Overlay 1 CLUT Register 63 */
#define REG_LCDC_OVR1CLUT64     (*(__IO uint32_t*)0xF0000B00U) /**< (LCDC) Overlay 1 CLUT Register 64 */
#define REG_LCDC_OVR1CLUT65     (*(__IO uint32_t*)0xF0000B04U) /**< (LCDC) Overlay 1 CLUT Register 65 */
#define REG_LCDC_OVR1CLUT66     (*(__IO uint32_t*)0xF0000B08U) /**< (LCDC) Overlay 1 CLUT Register 66 */
#define REG_LCDC_OVR1CLUT67     (*(__IO uint32_t*)0xF0000B0CU) /**< (LCDC) Overlay 1 CLUT Register 67 */
#define REG_LCDC_OVR1CLUT68     (*(__IO uint32_t*)0xF0000B10U) /**< (LCDC) Overlay 1 CLUT Register 68 */
#define REG_LCDC_OVR1CLUT69     (*(__IO uint32_t*)0xF0000B14U) /**< (LCDC) Overlay 1 CLUT Register 69 */
#define REG_LCDC_OVR1CLUT70     (*(__IO uint32_t*)0xF0000B18U) /**< (LCDC) Overlay 1 CLUT Register 70 */
#define REG_LCDC_OVR1CLUT71     (*(__IO uint32_t*)0xF0000B1CU) /**< (LCDC) Overlay 1 CLUT Register 71 */
#define REG_LCDC_OVR1CLUT72     (*(__IO uint32_t*)0xF0000B20U) /**< (LCDC) Overlay 1 CLUT Register 72 */
#define REG_LCDC_OVR1CLUT73     (*(__IO uint32_t*)0xF0000B24U) /**< (LCDC) Overlay 1 CLUT Register 73 */
#define REG_LCDC_OVR1CLUT74     (*(__IO uint32_t*)0xF0000B28U) /**< (LCDC) Overlay 1 CLUT Register 74 */
#define REG_LCDC_OVR1CLUT75     (*(__IO uint32_t*)0xF0000B2CU) /**< (LCDC) Overlay 1 CLUT Register 75 */
#define REG_LCDC_OVR1CLUT76     (*(__IO uint32_t*)0xF0000B30U) /**< (LCDC) Overlay 1 CLUT Register 76 */
#define REG_LCDC_OVR1CLUT77     (*(__IO uint32_t*)0xF0000B34U) /**< (LCDC) Overlay 1 CLUT Register 77 */
#define REG_LCDC_OVR1CLUT78     (*(__IO uint32_t*)0xF0000B38U) /**< (LCDC) Overlay 1 CLUT Register 78 */
#define REG_LCDC_OVR1CLUT79     (*(__IO uint32_t*)0xF0000B3CU) /**< (LCDC) Overlay 1 CLUT Register 79 */
#define REG_LCDC_OVR1CLUT80     (*(__IO uint32_t*)0xF0000B40U) /**< (LCDC) Overlay 1 CLUT Register 80 */
#define REG_LCDC_OVR1CLUT81     (*(__IO uint32_t*)0xF0000B44U) /**< (LCDC) Overlay 1 CLUT Register 81 */
#define REG_LCDC_OVR1CLUT82     (*(__IO uint32_t*)0xF0000B48U) /**< (LCDC) Overlay 1 CLUT Register 82 */
#define REG_LCDC_OVR1CLUT83     (*(__IO uint32_t*)0xF0000B4CU) /**< (LCDC) Overlay 1 CLUT Register 83 */
#define REG_LCDC_OVR1CLUT84     (*(__IO uint32_t*)0xF0000B50U) /**< (LCDC) Overlay 1 CLUT Register 84 */
#define REG_LCDC_OVR1CLUT85     (*(__IO uint32_t*)0xF0000B54U) /**< (LCDC) Overlay 1 CLUT Register 85 */
#define REG_LCDC_OVR1CLUT86     (*(__IO uint32_t*)0xF0000B58U) /**< (LCDC) Overlay 1 CLUT Register 86 */
#define REG_LCDC_OVR1CLUT87     (*(__IO uint32_t*)0xF0000B5CU) /**< (LCDC) Overlay 1 CLUT Register 87 */
#define REG_LCDC_OVR1CLUT88     (*(__IO uint32_t*)0xF0000B60U) /**< (LCDC) Overlay 1 CLUT Register 88 */
#define REG_LCDC_OVR1CLUT89     (*(__IO uint32_t*)0xF0000B64U) /**< (LCDC) Overlay 1 CLUT Register 89 */
#define REG_LCDC_OVR1CLUT90     (*(__IO uint32_t*)0xF0000B68U) /**< (LCDC) Overlay 1 CLUT Register 90 */
#define REG_LCDC_OVR1CLUT91     (*(__IO uint32_t*)0xF0000B6CU) /**< (LCDC) Overlay 1 CLUT Register 91 */
#define REG_LCDC_OVR1CLUT92     (*(__IO uint32_t*)0xF0000B70U) /**< (LCDC) Overlay 1 CLUT Register 92 */
#define REG_LCDC_OVR1CLUT93     (*(__IO uint32_t*)0xF0000B74U) /**< (LCDC) Overlay 1 CLUT Register 93 */
#define REG_LCDC_OVR1CLUT94     (*(__IO uint32_t*)0xF0000B78U) /**< (LCDC) Overlay 1 CLUT Register 94 */
#define REG_LCDC_OVR1CLUT95     (*(__IO uint32_t*)0xF0000B7CU) /**< (LCDC) Overlay 1 CLUT Register 95 */
#define REG_LCDC_OVR1CLUT96     (*(__IO uint32_t*)0xF0000B80U) /**< (LCDC) Overlay 1 CLUT Register 96 */
#define REG_LCDC_OVR1CLUT97     (*(__IO uint32_t*)0xF0000B84U) /**< (LCDC) Overlay 1 CLUT Register 97 */
#define REG_LCDC_OVR1CLUT98     (*(__IO uint32_t*)0xF0000B88U) /**< (LCDC) Overlay 1 CLUT Register 98 */
#define REG_LCDC_OVR1CLUT99     (*(__IO uint32_t*)0xF0000B8CU) /**< (LCDC) Overlay 1 CLUT Register 99 */
#define REG_LCDC_OVR1CLUT100    (*(__IO uint32_t*)0xF0000B90U) /**< (LCDC) Overlay 1 CLUT Register 100 */
#define REG_LCDC_OVR1CLUT101    (*(__IO uint32_t*)0xF0000B94U) /**< (LCDC) Overlay 1 CLUT Register 101 */
#define REG_LCDC_OVR1CLUT102    (*(__IO uint32_t*)0xF0000B98U) /**< (LCDC) Overlay 1 CLUT Register 102 */
#define REG_LCDC_OVR1CLUT103    (*(__IO uint32_t*)0xF0000B9CU) /**< (LCDC) Overlay 1 CLUT Register 103 */
#define REG_LCDC_OVR1CLUT104    (*(__IO uint32_t*)0xF0000BA0U) /**< (LCDC) Overlay 1 CLUT Register 104 */
#define REG_LCDC_OVR1CLUT105    (*(__IO uint32_t*)0xF0000BA4U) /**< (LCDC) Overlay 1 CLUT Register 105 */
#define REG_LCDC_OVR1CLUT106    (*(__IO uint32_t*)0xF0000BA8U) /**< (LCDC) Overlay 1 CLUT Register 106 */
#define REG_LCDC_OVR1CLUT107    (*(__IO uint32_t*)0xF0000BACU) /**< (LCDC) Overlay 1 CLUT Register 107 */
#define REG_LCDC_OVR1CLUT108    (*(__IO uint32_t*)0xF0000BB0U) /**< (LCDC) Overlay 1 CLUT Register 108 */
#define REG_LCDC_OVR1CLUT109    (*(__IO uint32_t*)0xF0000BB4U) /**< (LCDC) Overlay 1 CLUT Register 109 */
#define REG_LCDC_OVR1CLUT110    (*(__IO uint32_t*)0xF0000BB8U) /**< (LCDC) Overlay 1 CLUT Register 110 */
#define REG_LCDC_OVR1CLUT111    (*(__IO uint32_t*)0xF0000BBCU) /**< (LCDC) Overlay 1 CLUT Register 111 */
#define REG_LCDC_OVR1CLUT112    (*(__IO uint32_t*)0xF0000BC0U) /**< (LCDC) Overlay 1 CLUT Register 112 */
#define REG_LCDC_OVR1CLUT113    (*(__IO uint32_t*)0xF0000BC4U) /**< (LCDC) Overlay 1 CLUT Register 113 */
#define REG_LCDC_OVR1CLUT114    (*(__IO uint32_t*)0xF0000BC8U) /**< (LCDC) Overlay 1 CLUT Register 114 */
#define REG_LCDC_OVR1CLUT115    (*(__IO uint32_t*)0xF0000BCCU) /**< (LCDC) Overlay 1 CLUT Register 115 */
#define REG_LCDC_OVR1CLUT116    (*(__IO uint32_t*)0xF0000BD0U) /**< (LCDC) Overlay 1 CLUT Register 116 */
#define REG_LCDC_OVR1CLUT117    (*(__IO uint32_t*)0xF0000BD4U) /**< (LCDC) Overlay 1 CLUT Register 117 */
#define REG_LCDC_OVR1CLUT118    (*(__IO uint32_t*)0xF0000BD8U) /**< (LCDC) Overlay 1 CLUT Register 118 */
#define REG_LCDC_OVR1CLUT119    (*(__IO uint32_t*)0xF0000BDCU) /**< (LCDC) Overlay 1 CLUT Register 119 */
#define REG_LCDC_OVR1CLUT120    (*(__IO uint32_t*)0xF0000BE0U) /**< (LCDC) Overlay 1 CLUT Register 120 */
#define REG_LCDC_OVR1CLUT121    (*(__IO uint32_t*)0xF0000BE4U) /**< (LCDC) Overlay 1 CLUT Register 121 */
#define REG_LCDC_OVR1CLUT122    (*(__IO uint32_t*)0xF0000BE8U) /**< (LCDC) Overlay 1 CLUT Register 122 */
#define REG_LCDC_OVR1CLUT123    (*(__IO uint32_t*)0xF0000BECU) /**< (LCDC) Overlay 1 CLUT Register 123 */
#define REG_LCDC_OVR1CLUT124    (*(__IO uint32_t*)0xF0000BF0U) /**< (LCDC) Overlay 1 CLUT Register 124 */
#define REG_LCDC_OVR1CLUT125    (*(__IO uint32_t*)0xF0000BF4U) /**< (LCDC) Overlay 1 CLUT Register 125 */
#define REG_LCDC_OVR1CLUT126    (*(__IO uint32_t*)0xF0000BF8U) /**< (LCDC) Overlay 1 CLUT Register 126 */
#define REG_LCDC_OVR1CLUT127    (*(__IO uint32_t*)0xF0000BFCU) /**< (LCDC) Overlay 1 CLUT Register 127 */
#define REG_LCDC_OVR1CLUT128    (*(__IO uint32_t*)0xF0000C00U) /**< (LCDC) Overlay 1 CLUT Register 128 */
#define REG_LCDC_OVR1CLUT129    (*(__IO uint32_t*)0xF0000C04U) /**< (LCDC) Overlay 1 CLUT Register 129 */
#define REG_LCDC_OVR1CLUT130    (*(__IO uint32_t*)0xF0000C08U) /**< (LCDC) Overlay 1 CLUT Register 130 */
#define REG_LCDC_OVR1CLUT131    (*(__IO uint32_t*)0xF0000C0CU) /**< (LCDC) Overlay 1 CLUT Register 131 */
#define REG_LCDC_OVR1CLUT132    (*(__IO uint32_t*)0xF0000C10U) /**< (LCDC) Overlay 1 CLUT Register 132 */
#define REG_LCDC_OVR1CLUT133    (*(__IO uint32_t*)0xF0000C14U) /**< (LCDC) Overlay 1 CLUT Register 133 */
#define REG_LCDC_OVR1CLUT134    (*(__IO uint32_t*)0xF0000C18U) /**< (LCDC) Overlay 1 CLUT Register 134 */
#define REG_LCDC_OVR1CLUT135    (*(__IO uint32_t*)0xF0000C1CU) /**< (LCDC) Overlay 1 CLUT Register 135 */
#define REG_LCDC_OVR1CLUT136    (*(__IO uint32_t*)0xF0000C20U) /**< (LCDC) Overlay 1 CLUT Register 136 */
#define REG_LCDC_OVR1CLUT137    (*(__IO uint32_t*)0xF0000C24U) /**< (LCDC) Overlay 1 CLUT Register 137 */
#define REG_LCDC_OVR1CLUT138    (*(__IO uint32_t*)0xF0000C28U) /**< (LCDC) Overlay 1 CLUT Register 138 */
#define REG_LCDC_OVR1CLUT139    (*(__IO uint32_t*)0xF0000C2CU) /**< (LCDC) Overlay 1 CLUT Register 139 */
#define REG_LCDC_OVR1CLUT140    (*(__IO uint32_t*)0xF0000C30U) /**< (LCDC) Overlay 1 CLUT Register 140 */
#define REG_LCDC_OVR1CLUT141    (*(__IO uint32_t*)0xF0000C34U) /**< (LCDC) Overlay 1 CLUT Register 141 */
#define REG_LCDC_OVR1CLUT142    (*(__IO uint32_t*)0xF0000C38U) /**< (LCDC) Overlay 1 CLUT Register 142 */
#define REG_LCDC_OVR1CLUT143    (*(__IO uint32_t*)0xF0000C3CU) /**< (LCDC) Overlay 1 CLUT Register 143 */
#define REG_LCDC_OVR1CLUT144    (*(__IO uint32_t*)0xF0000C40U) /**< (LCDC) Overlay 1 CLUT Register 144 */
#define REG_LCDC_OVR1CLUT145    (*(__IO uint32_t*)0xF0000C44U) /**< (LCDC) Overlay 1 CLUT Register 145 */
#define REG_LCDC_OVR1CLUT146    (*(__IO uint32_t*)0xF0000C48U) /**< (LCDC) Overlay 1 CLUT Register 146 */
#define REG_LCDC_OVR1CLUT147    (*(__IO uint32_t*)0xF0000C4CU) /**< (LCDC) Overlay 1 CLUT Register 147 */
#define REG_LCDC_OVR1CLUT148    (*(__IO uint32_t*)0xF0000C50U) /**< (LCDC) Overlay 1 CLUT Register 148 */
#define REG_LCDC_OVR1CLUT149    (*(__IO uint32_t*)0xF0000C54U) /**< (LCDC) Overlay 1 CLUT Register 149 */
#define REG_LCDC_OVR1CLUT150    (*(__IO uint32_t*)0xF0000C58U) /**< (LCDC) Overlay 1 CLUT Register 150 */
#define REG_LCDC_OVR1CLUT151    (*(__IO uint32_t*)0xF0000C5CU) /**< (LCDC) Overlay 1 CLUT Register 151 */
#define REG_LCDC_OVR1CLUT152    (*(__IO uint32_t*)0xF0000C60U) /**< (LCDC) Overlay 1 CLUT Register 152 */
#define REG_LCDC_OVR1CLUT153    (*(__IO uint32_t*)0xF0000C64U) /**< (LCDC) Overlay 1 CLUT Register 153 */
#define REG_LCDC_OVR1CLUT154    (*(__IO uint32_t*)0xF0000C68U) /**< (LCDC) Overlay 1 CLUT Register 154 */
#define REG_LCDC_OVR1CLUT155    (*(__IO uint32_t*)0xF0000C6CU) /**< (LCDC) Overlay 1 CLUT Register 155 */
#define REG_LCDC_OVR1CLUT156    (*(__IO uint32_t*)0xF0000C70U) /**< (LCDC) Overlay 1 CLUT Register 156 */
#define REG_LCDC_OVR1CLUT157    (*(__IO uint32_t*)0xF0000C74U) /**< (LCDC) Overlay 1 CLUT Register 157 */
#define REG_LCDC_OVR1CLUT158    (*(__IO uint32_t*)0xF0000C78U) /**< (LCDC) Overlay 1 CLUT Register 158 */
#define REG_LCDC_OVR1CLUT159    (*(__IO uint32_t*)0xF0000C7CU) /**< (LCDC) Overlay 1 CLUT Register 159 */
#define REG_LCDC_OVR1CLUT160    (*(__IO uint32_t*)0xF0000C80U) /**< (LCDC) Overlay 1 CLUT Register 160 */
#define REG_LCDC_OVR1CLUT161    (*(__IO uint32_t*)0xF0000C84U) /**< (LCDC) Overlay 1 CLUT Register 161 */
#define REG_LCDC_OVR1CLUT162    (*(__IO uint32_t*)0xF0000C88U) /**< (LCDC) Overlay 1 CLUT Register 162 */
#define REG_LCDC_OVR1CLUT163    (*(__IO uint32_t*)0xF0000C8CU) /**< (LCDC) Overlay 1 CLUT Register 163 */
#define REG_LCDC_OVR1CLUT164    (*(__IO uint32_t*)0xF0000C90U) /**< (LCDC) Overlay 1 CLUT Register 164 */
#define REG_LCDC_OVR1CLUT165    (*(__IO uint32_t*)0xF0000C94U) /**< (LCDC) Overlay 1 CLUT Register 165 */
#define REG_LCDC_OVR1CLUT166    (*(__IO uint32_t*)0xF0000C98U) /**< (LCDC) Overlay 1 CLUT Register 166 */
#define REG_LCDC_OVR1CLUT167    (*(__IO uint32_t*)0xF0000C9CU) /**< (LCDC) Overlay 1 CLUT Register 167 */
#define REG_LCDC_OVR1CLUT168    (*(__IO uint32_t*)0xF0000CA0U) /**< (LCDC) Overlay 1 CLUT Register 168 */
#define REG_LCDC_OVR1CLUT169    (*(__IO uint32_t*)0xF0000CA4U) /**< (LCDC) Overlay 1 CLUT Register 169 */
#define REG_LCDC_OVR1CLUT170    (*(__IO uint32_t*)0xF0000CA8U) /**< (LCDC) Overlay 1 CLUT Register 170 */
#define REG_LCDC_OVR1CLUT171    (*(__IO uint32_t*)0xF0000CACU) /**< (LCDC) Overlay 1 CLUT Register 171 */
#define REG_LCDC_OVR1CLUT172    (*(__IO uint32_t*)0xF0000CB0U) /**< (LCDC) Overlay 1 CLUT Register 172 */
#define REG_LCDC_OVR1CLUT173    (*(__IO uint32_t*)0xF0000CB4U) /**< (LCDC) Overlay 1 CLUT Register 173 */
#define REG_LCDC_OVR1CLUT174    (*(__IO uint32_t*)0xF0000CB8U) /**< (LCDC) Overlay 1 CLUT Register 174 */
#define REG_LCDC_OVR1CLUT175    (*(__IO uint32_t*)0xF0000CBCU) /**< (LCDC) Overlay 1 CLUT Register 175 */
#define REG_LCDC_OVR1CLUT176    (*(__IO uint32_t*)0xF0000CC0U) /**< (LCDC) Overlay 1 CLUT Register 176 */
#define REG_LCDC_OVR1CLUT177    (*(__IO uint32_t*)0xF0000CC4U) /**< (LCDC) Overlay 1 CLUT Register 177 */
#define REG_LCDC_OVR1CLUT178    (*(__IO uint32_t*)0xF0000CC8U) /**< (LCDC) Overlay 1 CLUT Register 178 */
#define REG_LCDC_OVR1CLUT179    (*(__IO uint32_t*)0xF0000CCCU) /**< (LCDC) Overlay 1 CLUT Register 179 */
#define REG_LCDC_OVR1CLUT180    (*(__IO uint32_t*)0xF0000CD0U) /**< (LCDC) Overlay 1 CLUT Register 180 */
#define REG_LCDC_OVR1CLUT181    (*(__IO uint32_t*)0xF0000CD4U) /**< (LCDC) Overlay 1 CLUT Register 181 */
#define REG_LCDC_OVR1CLUT182    (*(__IO uint32_t*)0xF0000CD8U) /**< (LCDC) Overlay 1 CLUT Register 182 */
#define REG_LCDC_OVR1CLUT183    (*(__IO uint32_t*)0xF0000CDCU) /**< (LCDC) Overlay 1 CLUT Register 183 */
#define REG_LCDC_OVR1CLUT184    (*(__IO uint32_t*)0xF0000CE0U) /**< (LCDC) Overlay 1 CLUT Register 184 */
#define REG_LCDC_OVR1CLUT185    (*(__IO uint32_t*)0xF0000CE4U) /**< (LCDC) Overlay 1 CLUT Register 185 */
#define REG_LCDC_OVR1CLUT186    (*(__IO uint32_t*)0xF0000CE8U) /**< (LCDC) Overlay 1 CLUT Register 186 */
#define REG_LCDC_OVR1CLUT187    (*(__IO uint32_t*)0xF0000CECU) /**< (LCDC) Overlay 1 CLUT Register 187 */
#define REG_LCDC_OVR1CLUT188    (*(__IO uint32_t*)0xF0000CF0U) /**< (LCDC) Overlay 1 CLUT Register 188 */
#define REG_LCDC_OVR1CLUT189    (*(__IO uint32_t*)0xF0000CF4U) /**< (LCDC) Overlay 1 CLUT Register 189 */
#define REG_LCDC_OVR1CLUT190    (*(__IO uint32_t*)0xF0000CF8U) /**< (LCDC) Overlay 1 CLUT Register 190 */
#define REG_LCDC_OVR1CLUT191    (*(__IO uint32_t*)0xF0000CFCU) /**< (LCDC) Overlay 1 CLUT Register 191 */
#define REG_LCDC_OVR1CLUT192    (*(__IO uint32_t*)0xF0000D00U) /**< (LCDC) Overlay 1 CLUT Register 192 */
#define REG_LCDC_OVR1CLUT193    (*(__IO uint32_t*)0xF0000D04U) /**< (LCDC) Overlay 1 CLUT Register 193 */
#define REG_LCDC_OVR1CLUT194    (*(__IO uint32_t*)0xF0000D08U) /**< (LCDC) Overlay 1 CLUT Register 194 */
#define REG_LCDC_OVR1CLUT195    (*(__IO uint32_t*)0xF0000D0CU) /**< (LCDC) Overlay 1 CLUT Register 195 */
#define REG_LCDC_OVR1CLUT196    (*(__IO uint32_t*)0xF0000D10U) /**< (LCDC) Overlay 1 CLUT Register 196 */
#define REG_LCDC_OVR1CLUT197    (*(__IO uint32_t*)0xF0000D14U) /**< (LCDC) Overlay 1 CLUT Register 197 */
#define REG_LCDC_OVR1CLUT198    (*(__IO uint32_t*)0xF0000D18U) /**< (LCDC) Overlay 1 CLUT Register 198 */
#define REG_LCDC_OVR1CLUT199    (*(__IO uint32_t*)0xF0000D1CU) /**< (LCDC) Overlay 1 CLUT Register 199 */
#define REG_LCDC_OVR1CLUT200    (*(__IO uint32_t*)0xF0000D20U) /**< (LCDC) Overlay 1 CLUT Register 200 */
#define REG_LCDC_OVR1CLUT201    (*(__IO uint32_t*)0xF0000D24U) /**< (LCDC) Overlay 1 CLUT Register 201 */
#define REG_LCDC_OVR1CLUT202    (*(__IO uint32_t*)0xF0000D28U) /**< (LCDC) Overlay 1 CLUT Register 202 */
#define REG_LCDC_OVR1CLUT203    (*(__IO uint32_t*)0xF0000D2CU) /**< (LCDC) Overlay 1 CLUT Register 203 */
#define REG_LCDC_OVR1CLUT204    (*(__IO uint32_t*)0xF0000D30U) /**< (LCDC) Overlay 1 CLUT Register 204 */
#define REG_LCDC_OVR1CLUT205    (*(__IO uint32_t*)0xF0000D34U) /**< (LCDC) Overlay 1 CLUT Register 205 */
#define REG_LCDC_OVR1CLUT206    (*(__IO uint32_t*)0xF0000D38U) /**< (LCDC) Overlay 1 CLUT Register 206 */
#define REG_LCDC_OVR1CLUT207    (*(__IO uint32_t*)0xF0000D3CU) /**< (LCDC) Overlay 1 CLUT Register 207 */
#define REG_LCDC_OVR1CLUT208    (*(__IO uint32_t*)0xF0000D40U) /**< (LCDC) Overlay 1 CLUT Register 208 */
#define REG_LCDC_OVR1CLUT209    (*(__IO uint32_t*)0xF0000D44U) /**< (LCDC) Overlay 1 CLUT Register 209 */
#define REG_LCDC_OVR1CLUT210    (*(__IO uint32_t*)0xF0000D48U) /**< (LCDC) Overlay 1 CLUT Register 210 */
#define REG_LCDC_OVR1CLUT211    (*(__IO uint32_t*)0xF0000D4CU) /**< (LCDC) Overlay 1 CLUT Register 211 */
#define REG_LCDC_OVR1CLUT212    (*(__IO uint32_t*)0xF0000D50U) /**< (LCDC) Overlay 1 CLUT Register 212 */
#define REG_LCDC_OVR1CLUT213    (*(__IO uint32_t*)0xF0000D54U) /**< (LCDC) Overlay 1 CLUT Register 213 */
#define REG_LCDC_OVR1CLUT214    (*(__IO uint32_t*)0xF0000D58U) /**< (LCDC) Overlay 1 CLUT Register 214 */
#define REG_LCDC_OVR1CLUT215    (*(__IO uint32_t*)0xF0000D5CU) /**< (LCDC) Overlay 1 CLUT Register 215 */
#define REG_LCDC_OVR1CLUT216    (*(__IO uint32_t*)0xF0000D60U) /**< (LCDC) Overlay 1 CLUT Register 216 */
#define REG_LCDC_OVR1CLUT217    (*(__IO uint32_t*)0xF0000D64U) /**< (LCDC) Overlay 1 CLUT Register 217 */
#define REG_LCDC_OVR1CLUT218    (*(__IO uint32_t*)0xF0000D68U) /**< (LCDC) Overlay 1 CLUT Register 218 */
#define REG_LCDC_OVR1CLUT219    (*(__IO uint32_t*)0xF0000D6CU) /**< (LCDC) Overlay 1 CLUT Register 219 */
#define REG_LCDC_OVR1CLUT220    (*(__IO uint32_t*)0xF0000D70U) /**< (LCDC) Overlay 1 CLUT Register 220 */
#define REG_LCDC_OVR1CLUT221    (*(__IO uint32_t*)0xF0000D74U) /**< (LCDC) Overlay 1 CLUT Register 221 */
#define REG_LCDC_OVR1CLUT222    (*(__IO uint32_t*)0xF0000D78U) /**< (LCDC) Overlay 1 CLUT Register 222 */
#define REG_LCDC_OVR1CLUT223    (*(__IO uint32_t*)0xF0000D7CU) /**< (LCDC) Overlay 1 CLUT Register 223 */
#define REG_LCDC_OVR1CLUT224    (*(__IO uint32_t*)0xF0000D80U) /**< (LCDC) Overlay 1 CLUT Register 224 */
#define REG_LCDC_OVR1CLUT225    (*(__IO uint32_t*)0xF0000D84U) /**< (LCDC) Overlay 1 CLUT Register 225 */
#define REG_LCDC_OVR1CLUT226    (*(__IO uint32_t*)0xF0000D88U) /**< (LCDC) Overlay 1 CLUT Register 226 */
#define REG_LCDC_OVR1CLUT227    (*(__IO uint32_t*)0xF0000D8CU) /**< (LCDC) Overlay 1 CLUT Register 227 */
#define REG_LCDC_OVR1CLUT228    (*(__IO uint32_t*)0xF0000D90U) /**< (LCDC) Overlay 1 CLUT Register 228 */
#define REG_LCDC_OVR1CLUT229    (*(__IO uint32_t*)0xF0000D94U) /**< (LCDC) Overlay 1 CLUT Register 229 */
#define REG_LCDC_OVR1CLUT230    (*(__IO uint32_t*)0xF0000D98U) /**< (LCDC) Overlay 1 CLUT Register 230 */
#define REG_LCDC_OVR1CLUT231    (*(__IO uint32_t*)0xF0000D9CU) /**< (LCDC) Overlay 1 CLUT Register 231 */
#define REG_LCDC_OVR1CLUT232    (*(__IO uint32_t*)0xF0000DA0U) /**< (LCDC) Overlay 1 CLUT Register 232 */
#define REG_LCDC_OVR1CLUT233    (*(__IO uint32_t*)0xF0000DA4U) /**< (LCDC) Overlay 1 CLUT Register 233 */
#define REG_LCDC_OVR1CLUT234    (*(__IO uint32_t*)0xF0000DA8U) /**< (LCDC) Overlay 1 CLUT Register 234 */
#define REG_LCDC_OVR1CLUT235    (*(__IO uint32_t*)0xF0000DACU) /**< (LCDC) Overlay 1 CLUT Register 235 */
#define REG_LCDC_OVR1CLUT236    (*(__IO uint32_t*)0xF0000DB0U) /**< (LCDC) Overlay 1 CLUT Register 236 */
#define REG_LCDC_OVR1CLUT237    (*(__IO uint32_t*)0xF0000DB4U) /**< (LCDC) Overlay 1 CLUT Register 237 */
#define REG_LCDC_OVR1CLUT238    (*(__IO uint32_t*)0xF0000DB8U) /**< (LCDC) Overlay 1 CLUT Register 238 */
#define REG_LCDC_OVR1CLUT239    (*(__IO uint32_t*)0xF0000DBCU) /**< (LCDC) Overlay 1 CLUT Register 239 */
#define REG_LCDC_OVR1CLUT240    (*(__IO uint32_t*)0xF0000DC0U) /**< (LCDC) Overlay 1 CLUT Register 240 */
#define REG_LCDC_OVR1CLUT241    (*(__IO uint32_t*)0xF0000DC4U) /**< (LCDC) Overlay 1 CLUT Register 241 */
#define REG_LCDC_OVR1CLUT242    (*(__IO uint32_t*)0xF0000DC8U) /**< (LCDC) Overlay 1 CLUT Register 242 */
#define REG_LCDC_OVR1CLUT243    (*(__IO uint32_t*)0xF0000DCCU) /**< (LCDC) Overlay 1 CLUT Register 243 */
#define REG_LCDC_OVR1CLUT244    (*(__IO uint32_t*)0xF0000DD0U) /**< (LCDC) Overlay 1 CLUT Register 244 */
#define REG_LCDC_OVR1CLUT245    (*(__IO uint32_t*)0xF0000DD4U) /**< (LCDC) Overlay 1 CLUT Register 245 */
#define REG_LCDC_OVR1CLUT246    (*(__IO uint32_t*)0xF0000DD8U) /**< (LCDC) Overlay 1 CLUT Register 246 */
#define REG_LCDC_OVR1CLUT247    (*(__IO uint32_t*)0xF0000DDCU) /**< (LCDC) Overlay 1 CLUT Register 247 */
#define REG_LCDC_OVR1CLUT248    (*(__IO uint32_t*)0xF0000DE0U) /**< (LCDC) Overlay 1 CLUT Register 248 */
#define REG_LCDC_OVR1CLUT249    (*(__IO uint32_t*)0xF0000DE4U) /**< (LCDC) Overlay 1 CLUT Register 249 */
#define REG_LCDC_OVR1CLUT250    (*(__IO uint32_t*)0xF0000DE8U) /**< (LCDC) Overlay 1 CLUT Register 250 */
#define REG_LCDC_OVR1CLUT251    (*(__IO uint32_t*)0xF0000DECU) /**< (LCDC) Overlay 1 CLUT Register 251 */
#define REG_LCDC_OVR1CLUT252    (*(__IO uint32_t*)0xF0000DF0U) /**< (LCDC) Overlay 1 CLUT Register 252 */
#define REG_LCDC_OVR1CLUT253    (*(__IO uint32_t*)0xF0000DF4U) /**< (LCDC) Overlay 1 CLUT Register 253 */
#define REG_LCDC_OVR1CLUT254    (*(__IO uint32_t*)0xF0000DF8U) /**< (LCDC) Overlay 1 CLUT Register 254 */
#define REG_LCDC_OVR1CLUT255    (*(__IO uint32_t*)0xF0000DFCU) /**< (LCDC) Overlay 1 CLUT Register 255 */
#define REG_LCDC_OVR2CLUT       (*(__IO uint32_t*)0xF0000E00U) /**< (LCDC) Overlay 2 CLUT Register */
#define REG_LCDC_OVR2CLUT0      (*(__IO uint32_t*)0xF0000E00U) /**< (LCDC) Overlay 2 CLUT Register 0 */
#define REG_LCDC_OVR2CLUT1      (*(__IO uint32_t*)0xF0000E04U) /**< (LCDC) Overlay 2 CLUT Register 1 */
#define REG_LCDC_OVR2CLUT2      (*(__IO uint32_t*)0xF0000E08U) /**< (LCDC) Overlay 2 CLUT Register 2 */
#define REG_LCDC_OVR2CLUT3      (*(__IO uint32_t*)0xF0000E0CU) /**< (LCDC) Overlay 2 CLUT Register 3 */
#define REG_LCDC_OVR2CLUT4      (*(__IO uint32_t*)0xF0000E10U) /**< (LCDC) Overlay 2 CLUT Register 4 */
#define REG_LCDC_OVR2CLUT5      (*(__IO uint32_t*)0xF0000E14U) /**< (LCDC) Overlay 2 CLUT Register 5 */
#define REG_LCDC_OVR2CLUT6      (*(__IO uint32_t*)0xF0000E18U) /**< (LCDC) Overlay 2 CLUT Register 6 */
#define REG_LCDC_OVR2CLUT7      (*(__IO uint32_t*)0xF0000E1CU) /**< (LCDC) Overlay 2 CLUT Register 7 */
#define REG_LCDC_OVR2CLUT8      (*(__IO uint32_t*)0xF0000E20U) /**< (LCDC) Overlay 2 CLUT Register 8 */
#define REG_LCDC_OVR2CLUT9      (*(__IO uint32_t*)0xF0000E24U) /**< (LCDC) Overlay 2 CLUT Register 9 */
#define REG_LCDC_OVR2CLUT10     (*(__IO uint32_t*)0xF0000E28U) /**< (LCDC) Overlay 2 CLUT Register 10 */
#define REG_LCDC_OVR2CLUT11     (*(__IO uint32_t*)0xF0000E2CU) /**< (LCDC) Overlay 2 CLUT Register 11 */
#define REG_LCDC_OVR2CLUT12     (*(__IO uint32_t*)0xF0000E30U) /**< (LCDC) Overlay 2 CLUT Register 12 */
#define REG_LCDC_OVR2CLUT13     (*(__IO uint32_t*)0xF0000E34U) /**< (LCDC) Overlay 2 CLUT Register 13 */
#define REG_LCDC_OVR2CLUT14     (*(__IO uint32_t*)0xF0000E38U) /**< (LCDC) Overlay 2 CLUT Register 14 */
#define REG_LCDC_OVR2CLUT15     (*(__IO uint32_t*)0xF0000E3CU) /**< (LCDC) Overlay 2 CLUT Register 15 */
#define REG_LCDC_OVR2CLUT16     (*(__IO uint32_t*)0xF0000E40U) /**< (LCDC) Overlay 2 CLUT Register 16 */
#define REG_LCDC_OVR2CLUT17     (*(__IO uint32_t*)0xF0000E44U) /**< (LCDC) Overlay 2 CLUT Register 17 */
#define REG_LCDC_OVR2CLUT18     (*(__IO uint32_t*)0xF0000E48U) /**< (LCDC) Overlay 2 CLUT Register 18 */
#define REG_LCDC_OVR2CLUT19     (*(__IO uint32_t*)0xF0000E4CU) /**< (LCDC) Overlay 2 CLUT Register 19 */
#define REG_LCDC_OVR2CLUT20     (*(__IO uint32_t*)0xF0000E50U) /**< (LCDC) Overlay 2 CLUT Register 20 */
#define REG_LCDC_OVR2CLUT21     (*(__IO uint32_t*)0xF0000E54U) /**< (LCDC) Overlay 2 CLUT Register 21 */
#define REG_LCDC_OVR2CLUT22     (*(__IO uint32_t*)0xF0000E58U) /**< (LCDC) Overlay 2 CLUT Register 22 */
#define REG_LCDC_OVR2CLUT23     (*(__IO uint32_t*)0xF0000E5CU) /**< (LCDC) Overlay 2 CLUT Register 23 */
#define REG_LCDC_OVR2CLUT24     (*(__IO uint32_t*)0xF0000E60U) /**< (LCDC) Overlay 2 CLUT Register 24 */
#define REG_LCDC_OVR2CLUT25     (*(__IO uint32_t*)0xF0000E64U) /**< (LCDC) Overlay 2 CLUT Register 25 */
#define REG_LCDC_OVR2CLUT26     (*(__IO uint32_t*)0xF0000E68U) /**< (LCDC) Overlay 2 CLUT Register 26 */
#define REG_LCDC_OVR2CLUT27     (*(__IO uint32_t*)0xF0000E6CU) /**< (LCDC) Overlay 2 CLUT Register 27 */
#define REG_LCDC_OVR2CLUT28     (*(__IO uint32_t*)0xF0000E70U) /**< (LCDC) Overlay 2 CLUT Register 28 */
#define REG_LCDC_OVR2CLUT29     (*(__IO uint32_t*)0xF0000E74U) /**< (LCDC) Overlay 2 CLUT Register 29 */
#define REG_LCDC_OVR2CLUT30     (*(__IO uint32_t*)0xF0000E78U) /**< (LCDC) Overlay 2 CLUT Register 30 */
#define REG_LCDC_OVR2CLUT31     (*(__IO uint32_t*)0xF0000E7CU) /**< (LCDC) Overlay 2 CLUT Register 31 */
#define REG_LCDC_OVR2CLUT32     (*(__IO uint32_t*)0xF0000E80U) /**< (LCDC) Overlay 2 CLUT Register 32 */
#define REG_LCDC_OVR2CLUT33     (*(__IO uint32_t*)0xF0000E84U) /**< (LCDC) Overlay 2 CLUT Register 33 */
#define REG_LCDC_OVR2CLUT34     (*(__IO uint32_t*)0xF0000E88U) /**< (LCDC) Overlay 2 CLUT Register 34 */
#define REG_LCDC_OVR2CLUT35     (*(__IO uint32_t*)0xF0000E8CU) /**< (LCDC) Overlay 2 CLUT Register 35 */
#define REG_LCDC_OVR2CLUT36     (*(__IO uint32_t*)0xF0000E90U) /**< (LCDC) Overlay 2 CLUT Register 36 */
#define REG_LCDC_OVR2CLUT37     (*(__IO uint32_t*)0xF0000E94U) /**< (LCDC) Overlay 2 CLUT Register 37 */
#define REG_LCDC_OVR2CLUT38     (*(__IO uint32_t*)0xF0000E98U) /**< (LCDC) Overlay 2 CLUT Register 38 */
#define REG_LCDC_OVR2CLUT39     (*(__IO uint32_t*)0xF0000E9CU) /**< (LCDC) Overlay 2 CLUT Register 39 */
#define REG_LCDC_OVR2CLUT40     (*(__IO uint32_t*)0xF0000EA0U) /**< (LCDC) Overlay 2 CLUT Register 40 */
#define REG_LCDC_OVR2CLUT41     (*(__IO uint32_t*)0xF0000EA4U) /**< (LCDC) Overlay 2 CLUT Register 41 */
#define REG_LCDC_OVR2CLUT42     (*(__IO uint32_t*)0xF0000EA8U) /**< (LCDC) Overlay 2 CLUT Register 42 */
#define REG_LCDC_OVR2CLUT43     (*(__IO uint32_t*)0xF0000EACU) /**< (LCDC) Overlay 2 CLUT Register 43 */
#define REG_LCDC_OVR2CLUT44     (*(__IO uint32_t*)0xF0000EB0U) /**< (LCDC) Overlay 2 CLUT Register 44 */
#define REG_LCDC_OVR2CLUT45     (*(__IO uint32_t*)0xF0000EB4U) /**< (LCDC) Overlay 2 CLUT Register 45 */
#define REG_LCDC_OVR2CLUT46     (*(__IO uint32_t*)0xF0000EB8U) /**< (LCDC) Overlay 2 CLUT Register 46 */
#define REG_LCDC_OVR2CLUT47     (*(__IO uint32_t*)0xF0000EBCU) /**< (LCDC) Overlay 2 CLUT Register 47 */
#define REG_LCDC_OVR2CLUT48     (*(__IO uint32_t*)0xF0000EC0U) /**< (LCDC) Overlay 2 CLUT Register 48 */
#define REG_LCDC_OVR2CLUT49     (*(__IO uint32_t*)0xF0000EC4U) /**< (LCDC) Overlay 2 CLUT Register 49 */
#define REG_LCDC_OVR2CLUT50     (*(__IO uint32_t*)0xF0000EC8U) /**< (LCDC) Overlay 2 CLUT Register 50 */
#define REG_LCDC_OVR2CLUT51     (*(__IO uint32_t*)0xF0000ECCU) /**< (LCDC) Overlay 2 CLUT Register 51 */
#define REG_LCDC_OVR2CLUT52     (*(__IO uint32_t*)0xF0000ED0U) /**< (LCDC) Overlay 2 CLUT Register 52 */
#define REG_LCDC_OVR2CLUT53     (*(__IO uint32_t*)0xF0000ED4U) /**< (LCDC) Overlay 2 CLUT Register 53 */
#define REG_LCDC_OVR2CLUT54     (*(__IO uint32_t*)0xF0000ED8U) /**< (LCDC) Overlay 2 CLUT Register 54 */
#define REG_LCDC_OVR2CLUT55     (*(__IO uint32_t*)0xF0000EDCU) /**< (LCDC) Overlay 2 CLUT Register 55 */
#define REG_LCDC_OVR2CLUT56     (*(__IO uint32_t*)0xF0000EE0U) /**< (LCDC) Overlay 2 CLUT Register 56 */
#define REG_LCDC_OVR2CLUT57     (*(__IO uint32_t*)0xF0000EE4U) /**< (LCDC) Overlay 2 CLUT Register 57 */
#define REG_LCDC_OVR2CLUT58     (*(__IO uint32_t*)0xF0000EE8U) /**< (LCDC) Overlay 2 CLUT Register 58 */
#define REG_LCDC_OVR2CLUT59     (*(__IO uint32_t*)0xF0000EECU) /**< (LCDC) Overlay 2 CLUT Register 59 */
#define REG_LCDC_OVR2CLUT60     (*(__IO uint32_t*)0xF0000EF0U) /**< (LCDC) Overlay 2 CLUT Register 60 */
#define REG_LCDC_OVR2CLUT61     (*(__IO uint32_t*)0xF0000EF4U) /**< (LCDC) Overlay 2 CLUT Register 61 */
#define REG_LCDC_OVR2CLUT62     (*(__IO uint32_t*)0xF0000EF8U) /**< (LCDC) Overlay 2 CLUT Register 62 */
#define REG_LCDC_OVR2CLUT63     (*(__IO uint32_t*)0xF0000EFCU) /**< (LCDC) Overlay 2 CLUT Register 63 */
#define REG_LCDC_OVR2CLUT64     (*(__IO uint32_t*)0xF0000F00U) /**< (LCDC) Overlay 2 CLUT Register 64 */
#define REG_LCDC_OVR2CLUT65     (*(__IO uint32_t*)0xF0000F04U) /**< (LCDC) Overlay 2 CLUT Register 65 */
#define REG_LCDC_OVR2CLUT66     (*(__IO uint32_t*)0xF0000F08U) /**< (LCDC) Overlay 2 CLUT Register 66 */
#define REG_LCDC_OVR2CLUT67     (*(__IO uint32_t*)0xF0000F0CU) /**< (LCDC) Overlay 2 CLUT Register 67 */
#define REG_LCDC_OVR2CLUT68     (*(__IO uint32_t*)0xF0000F10U) /**< (LCDC) Overlay 2 CLUT Register 68 */
#define REG_LCDC_OVR2CLUT69     (*(__IO uint32_t*)0xF0000F14U) /**< (LCDC) Overlay 2 CLUT Register 69 */
#define REG_LCDC_OVR2CLUT70     (*(__IO uint32_t*)0xF0000F18U) /**< (LCDC) Overlay 2 CLUT Register 70 */
#define REG_LCDC_OVR2CLUT71     (*(__IO uint32_t*)0xF0000F1CU) /**< (LCDC) Overlay 2 CLUT Register 71 */
#define REG_LCDC_OVR2CLUT72     (*(__IO uint32_t*)0xF0000F20U) /**< (LCDC) Overlay 2 CLUT Register 72 */
#define REG_LCDC_OVR2CLUT73     (*(__IO uint32_t*)0xF0000F24U) /**< (LCDC) Overlay 2 CLUT Register 73 */
#define REG_LCDC_OVR2CLUT74     (*(__IO uint32_t*)0xF0000F28U) /**< (LCDC) Overlay 2 CLUT Register 74 */
#define REG_LCDC_OVR2CLUT75     (*(__IO uint32_t*)0xF0000F2CU) /**< (LCDC) Overlay 2 CLUT Register 75 */
#define REG_LCDC_OVR2CLUT76     (*(__IO uint32_t*)0xF0000F30U) /**< (LCDC) Overlay 2 CLUT Register 76 */
#define REG_LCDC_OVR2CLUT77     (*(__IO uint32_t*)0xF0000F34U) /**< (LCDC) Overlay 2 CLUT Register 77 */
#define REG_LCDC_OVR2CLUT78     (*(__IO uint32_t*)0xF0000F38U) /**< (LCDC) Overlay 2 CLUT Register 78 */
#define REG_LCDC_OVR2CLUT79     (*(__IO uint32_t*)0xF0000F3CU) /**< (LCDC) Overlay 2 CLUT Register 79 */
#define REG_LCDC_OVR2CLUT80     (*(__IO uint32_t*)0xF0000F40U) /**< (LCDC) Overlay 2 CLUT Register 80 */
#define REG_LCDC_OVR2CLUT81     (*(__IO uint32_t*)0xF0000F44U) /**< (LCDC) Overlay 2 CLUT Register 81 */
#define REG_LCDC_OVR2CLUT82     (*(__IO uint32_t*)0xF0000F48U) /**< (LCDC) Overlay 2 CLUT Register 82 */
#define REG_LCDC_OVR2CLUT83     (*(__IO uint32_t*)0xF0000F4CU) /**< (LCDC) Overlay 2 CLUT Register 83 */
#define REG_LCDC_OVR2CLUT84     (*(__IO uint32_t*)0xF0000F50U) /**< (LCDC) Overlay 2 CLUT Register 84 */
#define REG_LCDC_OVR2CLUT85     (*(__IO uint32_t*)0xF0000F54U) /**< (LCDC) Overlay 2 CLUT Register 85 */
#define REG_LCDC_OVR2CLUT86     (*(__IO uint32_t*)0xF0000F58U) /**< (LCDC) Overlay 2 CLUT Register 86 */
#define REG_LCDC_OVR2CLUT87     (*(__IO uint32_t*)0xF0000F5CU) /**< (LCDC) Overlay 2 CLUT Register 87 */
#define REG_LCDC_OVR2CLUT88     (*(__IO uint32_t*)0xF0000F60U) /**< (LCDC) Overlay 2 CLUT Register 88 */
#define REG_LCDC_OVR2CLUT89     (*(__IO uint32_t*)0xF0000F64U) /**< (LCDC) Overlay 2 CLUT Register 89 */
#define REG_LCDC_OVR2CLUT90     (*(__IO uint32_t*)0xF0000F68U) /**< (LCDC) Overlay 2 CLUT Register 90 */
#define REG_LCDC_OVR2CLUT91     (*(__IO uint32_t*)0xF0000F6CU) /**< (LCDC) Overlay 2 CLUT Register 91 */
#define REG_LCDC_OVR2CLUT92     (*(__IO uint32_t*)0xF0000F70U) /**< (LCDC) Overlay 2 CLUT Register 92 */
#define REG_LCDC_OVR2CLUT93     (*(__IO uint32_t*)0xF0000F74U) /**< (LCDC) Overlay 2 CLUT Register 93 */
#define REG_LCDC_OVR2CLUT94     (*(__IO uint32_t*)0xF0000F78U) /**< (LCDC) Overlay 2 CLUT Register 94 */
#define REG_LCDC_OVR2CLUT95     (*(__IO uint32_t*)0xF0000F7CU) /**< (LCDC) Overlay 2 CLUT Register 95 */
#define REG_LCDC_OVR2CLUT96     (*(__IO uint32_t*)0xF0000F80U) /**< (LCDC) Overlay 2 CLUT Register 96 */
#define REG_LCDC_OVR2CLUT97     (*(__IO uint32_t*)0xF0000F84U) /**< (LCDC) Overlay 2 CLUT Register 97 */
#define REG_LCDC_OVR2CLUT98     (*(__IO uint32_t*)0xF0000F88U) /**< (LCDC) Overlay 2 CLUT Register 98 */
#define REG_LCDC_OVR2CLUT99     (*(__IO uint32_t*)0xF0000F8CU) /**< (LCDC) Overlay 2 CLUT Register 99 */
#define REG_LCDC_OVR2CLUT100    (*(__IO uint32_t*)0xF0000F90U) /**< (LCDC) Overlay 2 CLUT Register 100 */
#define REG_LCDC_OVR2CLUT101    (*(__IO uint32_t*)0xF0000F94U) /**< (LCDC) Overlay 2 CLUT Register 101 */
#define REG_LCDC_OVR2CLUT102    (*(__IO uint32_t*)0xF0000F98U) /**< (LCDC) Overlay 2 CLUT Register 102 */
#define REG_LCDC_OVR2CLUT103    (*(__IO uint32_t*)0xF0000F9CU) /**< (LCDC) Overlay 2 CLUT Register 103 */
#define REG_LCDC_OVR2CLUT104    (*(__IO uint32_t*)0xF0000FA0U) /**< (LCDC) Overlay 2 CLUT Register 104 */
#define REG_LCDC_OVR2CLUT105    (*(__IO uint32_t*)0xF0000FA4U) /**< (LCDC) Overlay 2 CLUT Register 105 */
#define REG_LCDC_OVR2CLUT106    (*(__IO uint32_t*)0xF0000FA8U) /**< (LCDC) Overlay 2 CLUT Register 106 */
#define REG_LCDC_OVR2CLUT107    (*(__IO uint32_t*)0xF0000FACU) /**< (LCDC) Overlay 2 CLUT Register 107 */
#define REG_LCDC_OVR2CLUT108    (*(__IO uint32_t*)0xF0000FB0U) /**< (LCDC) Overlay 2 CLUT Register 108 */
#define REG_LCDC_OVR2CLUT109    (*(__IO uint32_t*)0xF0000FB4U) /**< (LCDC) Overlay 2 CLUT Register 109 */
#define REG_LCDC_OVR2CLUT110    (*(__IO uint32_t*)0xF0000FB8U) /**< (LCDC) Overlay 2 CLUT Register 110 */
#define REG_LCDC_OVR2CLUT111    (*(__IO uint32_t*)0xF0000FBCU) /**< (LCDC) Overlay 2 CLUT Register 111 */
#define REG_LCDC_OVR2CLUT112    (*(__IO uint32_t*)0xF0000FC0U) /**< (LCDC) Overlay 2 CLUT Register 112 */
#define REG_LCDC_OVR2CLUT113    (*(__IO uint32_t*)0xF0000FC4U) /**< (LCDC) Overlay 2 CLUT Register 113 */
#define REG_LCDC_OVR2CLUT114    (*(__IO uint32_t*)0xF0000FC8U) /**< (LCDC) Overlay 2 CLUT Register 114 */
#define REG_LCDC_OVR2CLUT115    (*(__IO uint32_t*)0xF0000FCCU) /**< (LCDC) Overlay 2 CLUT Register 115 */
#define REG_LCDC_OVR2CLUT116    (*(__IO uint32_t*)0xF0000FD0U) /**< (LCDC) Overlay 2 CLUT Register 116 */
#define REG_LCDC_OVR2CLUT117    (*(__IO uint32_t*)0xF0000FD4U) /**< (LCDC) Overlay 2 CLUT Register 117 */
#define REG_LCDC_OVR2CLUT118    (*(__IO uint32_t*)0xF0000FD8U) /**< (LCDC) Overlay 2 CLUT Register 118 */
#define REG_LCDC_OVR2CLUT119    (*(__IO uint32_t*)0xF0000FDCU) /**< (LCDC) Overlay 2 CLUT Register 119 */
#define REG_LCDC_OVR2CLUT120    (*(__IO uint32_t*)0xF0000FE0U) /**< (LCDC) Overlay 2 CLUT Register 120 */
#define REG_LCDC_OVR2CLUT121    (*(__IO uint32_t*)0xF0000FE4U) /**< (LCDC) Overlay 2 CLUT Register 121 */
#define REG_LCDC_OVR2CLUT122    (*(__IO uint32_t*)0xF0000FE8U) /**< (LCDC) Overlay 2 CLUT Register 122 */
#define REG_LCDC_OVR2CLUT123    (*(__IO uint32_t*)0xF0000FECU) /**< (LCDC) Overlay 2 CLUT Register 123 */
#define REG_LCDC_OVR2CLUT124    (*(__IO uint32_t*)0xF0000FF0U) /**< (LCDC) Overlay 2 CLUT Register 124 */
#define REG_LCDC_OVR2CLUT125    (*(__IO uint32_t*)0xF0000FF4U) /**< (LCDC) Overlay 2 CLUT Register 125 */
#define REG_LCDC_OVR2CLUT126    (*(__IO uint32_t*)0xF0000FF8U) /**< (LCDC) Overlay 2 CLUT Register 126 */
#define REG_LCDC_OVR2CLUT127    (*(__IO uint32_t*)0xF0000FFCU) /**< (LCDC) Overlay 2 CLUT Register 127 */
#define REG_LCDC_OVR2CLUT128    (*(__IO uint32_t*)0xF0001000U) /**< (LCDC) Overlay 2 CLUT Register 128 */
#define REG_LCDC_OVR2CLUT129    (*(__IO uint32_t*)0xF0001004U) /**< (LCDC) Overlay 2 CLUT Register 129 */
#define REG_LCDC_OVR2CLUT130    (*(__IO uint32_t*)0xF0001008U) /**< (LCDC) Overlay 2 CLUT Register 130 */
#define REG_LCDC_OVR2CLUT131    (*(__IO uint32_t*)0xF000100CU) /**< (LCDC) Overlay 2 CLUT Register 131 */
#define REG_LCDC_OVR2CLUT132    (*(__IO uint32_t*)0xF0001010U) /**< (LCDC) Overlay 2 CLUT Register 132 */
#define REG_LCDC_OVR2CLUT133    (*(__IO uint32_t*)0xF0001014U) /**< (LCDC) Overlay 2 CLUT Register 133 */
#define REG_LCDC_OVR2CLUT134    (*(__IO uint32_t*)0xF0001018U) /**< (LCDC) Overlay 2 CLUT Register 134 */
#define REG_LCDC_OVR2CLUT135    (*(__IO uint32_t*)0xF000101CU) /**< (LCDC) Overlay 2 CLUT Register 135 */
#define REG_LCDC_OVR2CLUT136    (*(__IO uint32_t*)0xF0001020U) /**< (LCDC) Overlay 2 CLUT Register 136 */
#define REG_LCDC_OVR2CLUT137    (*(__IO uint32_t*)0xF0001024U) /**< (LCDC) Overlay 2 CLUT Register 137 */
#define REG_LCDC_OVR2CLUT138    (*(__IO uint32_t*)0xF0001028U) /**< (LCDC) Overlay 2 CLUT Register 138 */
#define REG_LCDC_OVR2CLUT139    (*(__IO uint32_t*)0xF000102CU) /**< (LCDC) Overlay 2 CLUT Register 139 */
#define REG_LCDC_OVR2CLUT140    (*(__IO uint32_t*)0xF0001030U) /**< (LCDC) Overlay 2 CLUT Register 140 */
#define REG_LCDC_OVR2CLUT141    (*(__IO uint32_t*)0xF0001034U) /**< (LCDC) Overlay 2 CLUT Register 141 */
#define REG_LCDC_OVR2CLUT142    (*(__IO uint32_t*)0xF0001038U) /**< (LCDC) Overlay 2 CLUT Register 142 */
#define REG_LCDC_OVR2CLUT143    (*(__IO uint32_t*)0xF000103CU) /**< (LCDC) Overlay 2 CLUT Register 143 */
#define REG_LCDC_OVR2CLUT144    (*(__IO uint32_t*)0xF0001040U) /**< (LCDC) Overlay 2 CLUT Register 144 */
#define REG_LCDC_OVR2CLUT145    (*(__IO uint32_t*)0xF0001044U) /**< (LCDC) Overlay 2 CLUT Register 145 */
#define REG_LCDC_OVR2CLUT146    (*(__IO uint32_t*)0xF0001048U) /**< (LCDC) Overlay 2 CLUT Register 146 */
#define REG_LCDC_OVR2CLUT147    (*(__IO uint32_t*)0xF000104CU) /**< (LCDC) Overlay 2 CLUT Register 147 */
#define REG_LCDC_OVR2CLUT148    (*(__IO uint32_t*)0xF0001050U) /**< (LCDC) Overlay 2 CLUT Register 148 */
#define REG_LCDC_OVR2CLUT149    (*(__IO uint32_t*)0xF0001054U) /**< (LCDC) Overlay 2 CLUT Register 149 */
#define REG_LCDC_OVR2CLUT150    (*(__IO uint32_t*)0xF0001058U) /**< (LCDC) Overlay 2 CLUT Register 150 */
#define REG_LCDC_OVR2CLUT151    (*(__IO uint32_t*)0xF000105CU) /**< (LCDC) Overlay 2 CLUT Register 151 */
#define REG_LCDC_OVR2CLUT152    (*(__IO uint32_t*)0xF0001060U) /**< (LCDC) Overlay 2 CLUT Register 152 */
#define REG_LCDC_OVR2CLUT153    (*(__IO uint32_t*)0xF0001064U) /**< (LCDC) Overlay 2 CLUT Register 153 */
#define REG_LCDC_OVR2CLUT154    (*(__IO uint32_t*)0xF0001068U) /**< (LCDC) Overlay 2 CLUT Register 154 */
#define REG_LCDC_OVR2CLUT155    (*(__IO uint32_t*)0xF000106CU) /**< (LCDC) Overlay 2 CLUT Register 155 */
#define REG_LCDC_OVR2CLUT156    (*(__IO uint32_t*)0xF0001070U) /**< (LCDC) Overlay 2 CLUT Register 156 */
#define REG_LCDC_OVR2CLUT157    (*(__IO uint32_t*)0xF0001074U) /**< (LCDC) Overlay 2 CLUT Register 157 */
#define REG_LCDC_OVR2CLUT158    (*(__IO uint32_t*)0xF0001078U) /**< (LCDC) Overlay 2 CLUT Register 158 */
#define REG_LCDC_OVR2CLUT159    (*(__IO uint32_t*)0xF000107CU) /**< (LCDC) Overlay 2 CLUT Register 159 */
#define REG_LCDC_OVR2CLUT160    (*(__IO uint32_t*)0xF0001080U) /**< (LCDC) Overlay 2 CLUT Register 160 */
#define REG_LCDC_OVR2CLUT161    (*(__IO uint32_t*)0xF0001084U) /**< (LCDC) Overlay 2 CLUT Register 161 */
#define REG_LCDC_OVR2CLUT162    (*(__IO uint32_t*)0xF0001088U) /**< (LCDC) Overlay 2 CLUT Register 162 */
#define REG_LCDC_OVR2CLUT163    (*(__IO uint32_t*)0xF000108CU) /**< (LCDC) Overlay 2 CLUT Register 163 */
#define REG_LCDC_OVR2CLUT164    (*(__IO uint32_t*)0xF0001090U) /**< (LCDC) Overlay 2 CLUT Register 164 */
#define REG_LCDC_OVR2CLUT165    (*(__IO uint32_t*)0xF0001094U) /**< (LCDC) Overlay 2 CLUT Register 165 */
#define REG_LCDC_OVR2CLUT166    (*(__IO uint32_t*)0xF0001098U) /**< (LCDC) Overlay 2 CLUT Register 166 */
#define REG_LCDC_OVR2CLUT167    (*(__IO uint32_t*)0xF000109CU) /**< (LCDC) Overlay 2 CLUT Register 167 */
#define REG_LCDC_OVR2CLUT168    (*(__IO uint32_t*)0xF00010A0U) /**< (LCDC) Overlay 2 CLUT Register 168 */
#define REG_LCDC_OVR2CLUT169    (*(__IO uint32_t*)0xF00010A4U) /**< (LCDC) Overlay 2 CLUT Register 169 */
#define REG_LCDC_OVR2CLUT170    (*(__IO uint32_t*)0xF00010A8U) /**< (LCDC) Overlay 2 CLUT Register 170 */
#define REG_LCDC_OVR2CLUT171    (*(__IO uint32_t*)0xF00010ACU) /**< (LCDC) Overlay 2 CLUT Register 171 */
#define REG_LCDC_OVR2CLUT172    (*(__IO uint32_t*)0xF00010B0U) /**< (LCDC) Overlay 2 CLUT Register 172 */
#define REG_LCDC_OVR2CLUT173    (*(__IO uint32_t*)0xF00010B4U) /**< (LCDC) Overlay 2 CLUT Register 173 */
#define REG_LCDC_OVR2CLUT174    (*(__IO uint32_t*)0xF00010B8U) /**< (LCDC) Overlay 2 CLUT Register 174 */
#define REG_LCDC_OVR2CLUT175    (*(__IO uint32_t*)0xF00010BCU) /**< (LCDC) Overlay 2 CLUT Register 175 */
#define REG_LCDC_OVR2CLUT176    (*(__IO uint32_t*)0xF00010C0U) /**< (LCDC) Overlay 2 CLUT Register 176 */
#define REG_LCDC_OVR2CLUT177    (*(__IO uint32_t*)0xF00010C4U) /**< (LCDC) Overlay 2 CLUT Register 177 */
#define REG_LCDC_OVR2CLUT178    (*(__IO uint32_t*)0xF00010C8U) /**< (LCDC) Overlay 2 CLUT Register 178 */
#define REG_LCDC_OVR2CLUT179    (*(__IO uint32_t*)0xF00010CCU) /**< (LCDC) Overlay 2 CLUT Register 179 */
#define REG_LCDC_OVR2CLUT180    (*(__IO uint32_t*)0xF00010D0U) /**< (LCDC) Overlay 2 CLUT Register 180 */
#define REG_LCDC_OVR2CLUT181    (*(__IO uint32_t*)0xF00010D4U) /**< (LCDC) Overlay 2 CLUT Register 181 */
#define REG_LCDC_OVR2CLUT182    (*(__IO uint32_t*)0xF00010D8U) /**< (LCDC) Overlay 2 CLUT Register 182 */
#define REG_LCDC_OVR2CLUT183    (*(__IO uint32_t*)0xF00010DCU) /**< (LCDC) Overlay 2 CLUT Register 183 */
#define REG_LCDC_OVR2CLUT184    (*(__IO uint32_t*)0xF00010E0U) /**< (LCDC) Overlay 2 CLUT Register 184 */
#define REG_LCDC_OVR2CLUT185    (*(__IO uint32_t*)0xF00010E4U) /**< (LCDC) Overlay 2 CLUT Register 185 */
#define REG_LCDC_OVR2CLUT186    (*(__IO uint32_t*)0xF00010E8U) /**< (LCDC) Overlay 2 CLUT Register 186 */
#define REG_LCDC_OVR2CLUT187    (*(__IO uint32_t*)0xF00010ECU) /**< (LCDC) Overlay 2 CLUT Register 187 */
#define REG_LCDC_OVR2CLUT188    (*(__IO uint32_t*)0xF00010F0U) /**< (LCDC) Overlay 2 CLUT Register 188 */
#define REG_LCDC_OVR2CLUT189    (*(__IO uint32_t*)0xF00010F4U) /**< (LCDC) Overlay 2 CLUT Register 189 */
#define REG_LCDC_OVR2CLUT190    (*(__IO uint32_t*)0xF00010F8U) /**< (LCDC) Overlay 2 CLUT Register 190 */
#define REG_LCDC_OVR2CLUT191    (*(__IO uint32_t*)0xF00010FCU) /**< (LCDC) Overlay 2 CLUT Register 191 */
#define REG_LCDC_OVR2CLUT192    (*(__IO uint32_t*)0xF0001100U) /**< (LCDC) Overlay 2 CLUT Register 192 */
#define REG_LCDC_OVR2CLUT193    (*(__IO uint32_t*)0xF0001104U) /**< (LCDC) Overlay 2 CLUT Register 193 */
#define REG_LCDC_OVR2CLUT194    (*(__IO uint32_t*)0xF0001108U) /**< (LCDC) Overlay 2 CLUT Register 194 */
#define REG_LCDC_OVR2CLUT195    (*(__IO uint32_t*)0xF000110CU) /**< (LCDC) Overlay 2 CLUT Register 195 */
#define REG_LCDC_OVR2CLUT196    (*(__IO uint32_t*)0xF0001110U) /**< (LCDC) Overlay 2 CLUT Register 196 */
#define REG_LCDC_OVR2CLUT197    (*(__IO uint32_t*)0xF0001114U) /**< (LCDC) Overlay 2 CLUT Register 197 */
#define REG_LCDC_OVR2CLUT198    (*(__IO uint32_t*)0xF0001118U) /**< (LCDC) Overlay 2 CLUT Register 198 */
#define REG_LCDC_OVR2CLUT199    (*(__IO uint32_t*)0xF000111CU) /**< (LCDC) Overlay 2 CLUT Register 199 */
#define REG_LCDC_OVR2CLUT200    (*(__IO uint32_t*)0xF0001120U) /**< (LCDC) Overlay 2 CLUT Register 200 */
#define REG_LCDC_OVR2CLUT201    (*(__IO uint32_t*)0xF0001124U) /**< (LCDC) Overlay 2 CLUT Register 201 */
#define REG_LCDC_OVR2CLUT202    (*(__IO uint32_t*)0xF0001128U) /**< (LCDC) Overlay 2 CLUT Register 202 */
#define REG_LCDC_OVR2CLUT203    (*(__IO uint32_t*)0xF000112CU) /**< (LCDC) Overlay 2 CLUT Register 203 */
#define REG_LCDC_OVR2CLUT204    (*(__IO uint32_t*)0xF0001130U) /**< (LCDC) Overlay 2 CLUT Register 204 */
#define REG_LCDC_OVR2CLUT205    (*(__IO uint32_t*)0xF0001134U) /**< (LCDC) Overlay 2 CLUT Register 205 */
#define REG_LCDC_OVR2CLUT206    (*(__IO uint32_t*)0xF0001138U) /**< (LCDC) Overlay 2 CLUT Register 206 */
#define REG_LCDC_OVR2CLUT207    (*(__IO uint32_t*)0xF000113CU) /**< (LCDC) Overlay 2 CLUT Register 207 */
#define REG_LCDC_OVR2CLUT208    (*(__IO uint32_t*)0xF0001140U) /**< (LCDC) Overlay 2 CLUT Register 208 */
#define REG_LCDC_OVR2CLUT209    (*(__IO uint32_t*)0xF0001144U) /**< (LCDC) Overlay 2 CLUT Register 209 */
#define REG_LCDC_OVR2CLUT210    (*(__IO uint32_t*)0xF0001148U) /**< (LCDC) Overlay 2 CLUT Register 210 */
#define REG_LCDC_OVR2CLUT211    (*(__IO uint32_t*)0xF000114CU) /**< (LCDC) Overlay 2 CLUT Register 211 */
#define REG_LCDC_OVR2CLUT212    (*(__IO uint32_t*)0xF0001150U) /**< (LCDC) Overlay 2 CLUT Register 212 */
#define REG_LCDC_OVR2CLUT213    (*(__IO uint32_t*)0xF0001154U) /**< (LCDC) Overlay 2 CLUT Register 213 */
#define REG_LCDC_OVR2CLUT214    (*(__IO uint32_t*)0xF0001158U) /**< (LCDC) Overlay 2 CLUT Register 214 */
#define REG_LCDC_OVR2CLUT215    (*(__IO uint32_t*)0xF000115CU) /**< (LCDC) Overlay 2 CLUT Register 215 */
#define REG_LCDC_OVR2CLUT216    (*(__IO uint32_t*)0xF0001160U) /**< (LCDC) Overlay 2 CLUT Register 216 */
#define REG_LCDC_OVR2CLUT217    (*(__IO uint32_t*)0xF0001164U) /**< (LCDC) Overlay 2 CLUT Register 217 */
#define REG_LCDC_OVR2CLUT218    (*(__IO uint32_t*)0xF0001168U) /**< (LCDC) Overlay 2 CLUT Register 218 */
#define REG_LCDC_OVR2CLUT219    (*(__IO uint32_t*)0xF000116CU) /**< (LCDC) Overlay 2 CLUT Register 219 */
#define REG_LCDC_OVR2CLUT220    (*(__IO uint32_t*)0xF0001170U) /**< (LCDC) Overlay 2 CLUT Register 220 */
#define REG_LCDC_OVR2CLUT221    (*(__IO uint32_t*)0xF0001174U) /**< (LCDC) Overlay 2 CLUT Register 221 */
#define REG_LCDC_OVR2CLUT222    (*(__IO uint32_t*)0xF0001178U) /**< (LCDC) Overlay 2 CLUT Register 222 */
#define REG_LCDC_OVR2CLUT223    (*(__IO uint32_t*)0xF000117CU) /**< (LCDC) Overlay 2 CLUT Register 223 */
#define REG_LCDC_OVR2CLUT224    (*(__IO uint32_t*)0xF0001180U) /**< (LCDC) Overlay 2 CLUT Register 224 */
#define REG_LCDC_OVR2CLUT225    (*(__IO uint32_t*)0xF0001184U) /**< (LCDC) Overlay 2 CLUT Register 225 */
#define REG_LCDC_OVR2CLUT226    (*(__IO uint32_t*)0xF0001188U) /**< (LCDC) Overlay 2 CLUT Register 226 */
#define REG_LCDC_OVR2CLUT227    (*(__IO uint32_t*)0xF000118CU) /**< (LCDC) Overlay 2 CLUT Register 227 */
#define REG_LCDC_OVR2CLUT228    (*(__IO uint32_t*)0xF0001190U) /**< (LCDC) Overlay 2 CLUT Register 228 */
#define REG_LCDC_OVR2CLUT229    (*(__IO uint32_t*)0xF0001194U) /**< (LCDC) Overlay 2 CLUT Register 229 */
#define REG_LCDC_OVR2CLUT230    (*(__IO uint32_t*)0xF0001198U) /**< (LCDC) Overlay 2 CLUT Register 230 */
#define REG_LCDC_OVR2CLUT231    (*(__IO uint32_t*)0xF000119CU) /**< (LCDC) Overlay 2 CLUT Register 231 */
#define REG_LCDC_OVR2CLUT232    (*(__IO uint32_t*)0xF00011A0U) /**< (LCDC) Overlay 2 CLUT Register 232 */
#define REG_LCDC_OVR2CLUT233    (*(__IO uint32_t*)0xF00011A4U) /**< (LCDC) Overlay 2 CLUT Register 233 */
#define REG_LCDC_OVR2CLUT234    (*(__IO uint32_t*)0xF00011A8U) /**< (LCDC) Overlay 2 CLUT Register 234 */
#define REG_LCDC_OVR2CLUT235    (*(__IO uint32_t*)0xF00011ACU) /**< (LCDC) Overlay 2 CLUT Register 235 */
#define REG_LCDC_OVR2CLUT236    (*(__IO uint32_t*)0xF00011B0U) /**< (LCDC) Overlay 2 CLUT Register 236 */
#define REG_LCDC_OVR2CLUT237    (*(__IO uint32_t*)0xF00011B4U) /**< (LCDC) Overlay 2 CLUT Register 237 */
#define REG_LCDC_OVR2CLUT238    (*(__IO uint32_t*)0xF00011B8U) /**< (LCDC) Overlay 2 CLUT Register 238 */
#define REG_LCDC_OVR2CLUT239    (*(__IO uint32_t*)0xF00011BCU) /**< (LCDC) Overlay 2 CLUT Register 239 */
#define REG_LCDC_OVR2CLUT240    (*(__IO uint32_t*)0xF00011C0U) /**< (LCDC) Overlay 2 CLUT Register 240 */
#define REG_LCDC_OVR2CLUT241    (*(__IO uint32_t*)0xF00011C4U) /**< (LCDC) Overlay 2 CLUT Register 241 */
#define REG_LCDC_OVR2CLUT242    (*(__IO uint32_t*)0xF00011C8U) /**< (LCDC) Overlay 2 CLUT Register 242 */
#define REG_LCDC_OVR2CLUT243    (*(__IO uint32_t*)0xF00011CCU) /**< (LCDC) Overlay 2 CLUT Register 243 */
#define REG_LCDC_OVR2CLUT244    (*(__IO uint32_t*)0xF00011D0U) /**< (LCDC) Overlay 2 CLUT Register 244 */
#define REG_LCDC_OVR2CLUT245    (*(__IO uint32_t*)0xF00011D4U) /**< (LCDC) Overlay 2 CLUT Register 245 */
#define REG_LCDC_OVR2CLUT246    (*(__IO uint32_t*)0xF00011D8U) /**< (LCDC) Overlay 2 CLUT Register 246 */
#define REG_LCDC_OVR2CLUT247    (*(__IO uint32_t*)0xF00011DCU) /**< (LCDC) Overlay 2 CLUT Register 247 */
#define REG_LCDC_OVR2CLUT248    (*(__IO uint32_t*)0xF00011E0U) /**< (LCDC) Overlay 2 CLUT Register 248 */
#define REG_LCDC_OVR2CLUT249    (*(__IO uint32_t*)0xF00011E4U) /**< (LCDC) Overlay 2 CLUT Register 249 */
#define REG_LCDC_OVR2CLUT250    (*(__IO uint32_t*)0xF00011E8U) /**< (LCDC) Overlay 2 CLUT Register 250 */
#define REG_LCDC_OVR2CLUT251    (*(__IO uint32_t*)0xF00011ECU) /**< (LCDC) Overlay 2 CLUT Register 251 */
#define REG_LCDC_OVR2CLUT252    (*(__IO uint32_t*)0xF00011F0U) /**< (LCDC) Overlay 2 CLUT Register 252 */
#define REG_LCDC_OVR2CLUT253    (*(__IO uint32_t*)0xF00011F4U) /**< (LCDC) Overlay 2 CLUT Register 253 */
#define REG_LCDC_OVR2CLUT254    (*(__IO uint32_t*)0xF00011F8U) /**< (LCDC) Overlay 2 CLUT Register 254 */
#define REG_LCDC_OVR2CLUT255    (*(__IO uint32_t*)0xF00011FCU) /**< (LCDC) Overlay 2 CLUT Register 255 */
#define REG_LCDC_HEOCLUT        (*(__IO uint32_t*)0xF0001200U) /**< (LCDC) High-End Overlay CLUT Register */
#define REG_LCDC_HEOCLUT0       (*(__IO uint32_t*)0xF0001200U) /**< (LCDC) High-End Overlay CLUT Register 0 */
#define REG_LCDC_HEOCLUT1       (*(__IO uint32_t*)0xF0001204U) /**< (LCDC) High-End Overlay CLUT Register 1 */
#define REG_LCDC_HEOCLUT2       (*(__IO uint32_t*)0xF0001208U) /**< (LCDC) High-End Overlay CLUT Register 2 */
#define REG_LCDC_HEOCLUT3       (*(__IO uint32_t*)0xF000120CU) /**< (LCDC) High-End Overlay CLUT Register 3 */
#define REG_LCDC_HEOCLUT4       (*(__IO uint32_t*)0xF0001210U) /**< (LCDC) High-End Overlay CLUT Register 4 */
#define REG_LCDC_HEOCLUT5       (*(__IO uint32_t*)0xF0001214U) /**< (LCDC) High-End Overlay CLUT Register 5 */
#define REG_LCDC_HEOCLUT6       (*(__IO uint32_t*)0xF0001218U) /**< (LCDC) High-End Overlay CLUT Register 6 */
#define REG_LCDC_HEOCLUT7       (*(__IO uint32_t*)0xF000121CU) /**< (LCDC) High-End Overlay CLUT Register 7 */
#define REG_LCDC_HEOCLUT8       (*(__IO uint32_t*)0xF0001220U) /**< (LCDC) High-End Overlay CLUT Register 8 */
#define REG_LCDC_HEOCLUT9       (*(__IO uint32_t*)0xF0001224U) /**< (LCDC) High-End Overlay CLUT Register 9 */
#define REG_LCDC_HEOCLUT10      (*(__IO uint32_t*)0xF0001228U) /**< (LCDC) High-End Overlay CLUT Register 10 */
#define REG_LCDC_HEOCLUT11      (*(__IO uint32_t*)0xF000122CU) /**< (LCDC) High-End Overlay CLUT Register 11 */
#define REG_LCDC_HEOCLUT12      (*(__IO uint32_t*)0xF0001230U) /**< (LCDC) High-End Overlay CLUT Register 12 */
#define REG_LCDC_HEOCLUT13      (*(__IO uint32_t*)0xF0001234U) /**< (LCDC) High-End Overlay CLUT Register 13 */
#define REG_LCDC_HEOCLUT14      (*(__IO uint32_t*)0xF0001238U) /**< (LCDC) High-End Overlay CLUT Register 14 */
#define REG_LCDC_HEOCLUT15      (*(__IO uint32_t*)0xF000123CU) /**< (LCDC) High-End Overlay CLUT Register 15 */
#define REG_LCDC_HEOCLUT16      (*(__IO uint32_t*)0xF0001240U) /**< (LCDC) High-End Overlay CLUT Register 16 */
#define REG_LCDC_HEOCLUT17      (*(__IO uint32_t*)0xF0001244U) /**< (LCDC) High-End Overlay CLUT Register 17 */
#define REG_LCDC_HEOCLUT18      (*(__IO uint32_t*)0xF0001248U) /**< (LCDC) High-End Overlay CLUT Register 18 */
#define REG_LCDC_HEOCLUT19      (*(__IO uint32_t*)0xF000124CU) /**< (LCDC) High-End Overlay CLUT Register 19 */
#define REG_LCDC_HEOCLUT20      (*(__IO uint32_t*)0xF0001250U) /**< (LCDC) High-End Overlay CLUT Register 20 */
#define REG_LCDC_HEOCLUT21      (*(__IO uint32_t*)0xF0001254U) /**< (LCDC) High-End Overlay CLUT Register 21 */
#define REG_LCDC_HEOCLUT22      (*(__IO uint32_t*)0xF0001258U) /**< (LCDC) High-End Overlay CLUT Register 22 */
#define REG_LCDC_HEOCLUT23      (*(__IO uint32_t*)0xF000125CU) /**< (LCDC) High-End Overlay CLUT Register 23 */
#define REG_LCDC_HEOCLUT24      (*(__IO uint32_t*)0xF0001260U) /**< (LCDC) High-End Overlay CLUT Register 24 */
#define REG_LCDC_HEOCLUT25      (*(__IO uint32_t*)0xF0001264U) /**< (LCDC) High-End Overlay CLUT Register 25 */
#define REG_LCDC_HEOCLUT26      (*(__IO uint32_t*)0xF0001268U) /**< (LCDC) High-End Overlay CLUT Register 26 */
#define REG_LCDC_HEOCLUT27      (*(__IO uint32_t*)0xF000126CU) /**< (LCDC) High-End Overlay CLUT Register 27 */
#define REG_LCDC_HEOCLUT28      (*(__IO uint32_t*)0xF0001270U) /**< (LCDC) High-End Overlay CLUT Register 28 */
#define REG_LCDC_HEOCLUT29      (*(__IO uint32_t*)0xF0001274U) /**< (LCDC) High-End Overlay CLUT Register 29 */
#define REG_LCDC_HEOCLUT30      (*(__IO uint32_t*)0xF0001278U) /**< (LCDC) High-End Overlay CLUT Register 30 */
#define REG_LCDC_HEOCLUT31      (*(__IO uint32_t*)0xF000127CU) /**< (LCDC) High-End Overlay CLUT Register 31 */
#define REG_LCDC_HEOCLUT32      (*(__IO uint32_t*)0xF0001280U) /**< (LCDC) High-End Overlay CLUT Register 32 */
#define REG_LCDC_HEOCLUT33      (*(__IO uint32_t*)0xF0001284U) /**< (LCDC) High-End Overlay CLUT Register 33 */
#define REG_LCDC_HEOCLUT34      (*(__IO uint32_t*)0xF0001288U) /**< (LCDC) High-End Overlay CLUT Register 34 */
#define REG_LCDC_HEOCLUT35      (*(__IO uint32_t*)0xF000128CU) /**< (LCDC) High-End Overlay CLUT Register 35 */
#define REG_LCDC_HEOCLUT36      (*(__IO uint32_t*)0xF0001290U) /**< (LCDC) High-End Overlay CLUT Register 36 */
#define REG_LCDC_HEOCLUT37      (*(__IO uint32_t*)0xF0001294U) /**< (LCDC) High-End Overlay CLUT Register 37 */
#define REG_LCDC_HEOCLUT38      (*(__IO uint32_t*)0xF0001298U) /**< (LCDC) High-End Overlay CLUT Register 38 */
#define REG_LCDC_HEOCLUT39      (*(__IO uint32_t*)0xF000129CU) /**< (LCDC) High-End Overlay CLUT Register 39 */
#define REG_LCDC_HEOCLUT40      (*(__IO uint32_t*)0xF00012A0U) /**< (LCDC) High-End Overlay CLUT Register 40 */
#define REG_LCDC_HEOCLUT41      (*(__IO uint32_t*)0xF00012A4U) /**< (LCDC) High-End Overlay CLUT Register 41 */
#define REG_LCDC_HEOCLUT42      (*(__IO uint32_t*)0xF00012A8U) /**< (LCDC) High-End Overlay CLUT Register 42 */
#define REG_LCDC_HEOCLUT43      (*(__IO uint32_t*)0xF00012ACU) /**< (LCDC) High-End Overlay CLUT Register 43 */
#define REG_LCDC_HEOCLUT44      (*(__IO uint32_t*)0xF00012B0U) /**< (LCDC) High-End Overlay CLUT Register 44 */
#define REG_LCDC_HEOCLUT45      (*(__IO uint32_t*)0xF00012B4U) /**< (LCDC) High-End Overlay CLUT Register 45 */
#define REG_LCDC_HEOCLUT46      (*(__IO uint32_t*)0xF00012B8U) /**< (LCDC) High-End Overlay CLUT Register 46 */
#define REG_LCDC_HEOCLUT47      (*(__IO uint32_t*)0xF00012BCU) /**< (LCDC) High-End Overlay CLUT Register 47 */
#define REG_LCDC_HEOCLUT48      (*(__IO uint32_t*)0xF00012C0U) /**< (LCDC) High-End Overlay CLUT Register 48 */
#define REG_LCDC_HEOCLUT49      (*(__IO uint32_t*)0xF00012C4U) /**< (LCDC) High-End Overlay CLUT Register 49 */
#define REG_LCDC_HEOCLUT50      (*(__IO uint32_t*)0xF00012C8U) /**< (LCDC) High-End Overlay CLUT Register 50 */
#define REG_LCDC_HEOCLUT51      (*(__IO uint32_t*)0xF00012CCU) /**< (LCDC) High-End Overlay CLUT Register 51 */
#define REG_LCDC_HEOCLUT52      (*(__IO uint32_t*)0xF00012D0U) /**< (LCDC) High-End Overlay CLUT Register 52 */
#define REG_LCDC_HEOCLUT53      (*(__IO uint32_t*)0xF00012D4U) /**< (LCDC) High-End Overlay CLUT Register 53 */
#define REG_LCDC_HEOCLUT54      (*(__IO uint32_t*)0xF00012D8U) /**< (LCDC) High-End Overlay CLUT Register 54 */
#define REG_LCDC_HEOCLUT55      (*(__IO uint32_t*)0xF00012DCU) /**< (LCDC) High-End Overlay CLUT Register 55 */
#define REG_LCDC_HEOCLUT56      (*(__IO uint32_t*)0xF00012E0U) /**< (LCDC) High-End Overlay CLUT Register 56 */
#define REG_LCDC_HEOCLUT57      (*(__IO uint32_t*)0xF00012E4U) /**< (LCDC) High-End Overlay CLUT Register 57 */
#define REG_LCDC_HEOCLUT58      (*(__IO uint32_t*)0xF00012E8U) /**< (LCDC) High-End Overlay CLUT Register 58 */
#define REG_LCDC_HEOCLUT59      (*(__IO uint32_t*)0xF00012ECU) /**< (LCDC) High-End Overlay CLUT Register 59 */
#define REG_LCDC_HEOCLUT60      (*(__IO uint32_t*)0xF00012F0U) /**< (LCDC) High-End Overlay CLUT Register 60 */
#define REG_LCDC_HEOCLUT61      (*(__IO uint32_t*)0xF00012F4U) /**< (LCDC) High-End Overlay CLUT Register 61 */
#define REG_LCDC_HEOCLUT62      (*(__IO uint32_t*)0xF00012F8U) /**< (LCDC) High-End Overlay CLUT Register 62 */
#define REG_LCDC_HEOCLUT63      (*(__IO uint32_t*)0xF00012FCU) /**< (LCDC) High-End Overlay CLUT Register 63 */
#define REG_LCDC_HEOCLUT64      (*(__IO uint32_t*)0xF0001300U) /**< (LCDC) High-End Overlay CLUT Register 64 */
#define REG_LCDC_HEOCLUT65      (*(__IO uint32_t*)0xF0001304U) /**< (LCDC) High-End Overlay CLUT Register 65 */
#define REG_LCDC_HEOCLUT66      (*(__IO uint32_t*)0xF0001308U) /**< (LCDC) High-End Overlay CLUT Register 66 */
#define REG_LCDC_HEOCLUT67      (*(__IO uint32_t*)0xF000130CU) /**< (LCDC) High-End Overlay CLUT Register 67 */
#define REG_LCDC_HEOCLUT68      (*(__IO uint32_t*)0xF0001310U) /**< (LCDC) High-End Overlay CLUT Register 68 */
#define REG_LCDC_HEOCLUT69      (*(__IO uint32_t*)0xF0001314U) /**< (LCDC) High-End Overlay CLUT Register 69 */
#define REG_LCDC_HEOCLUT70      (*(__IO uint32_t*)0xF0001318U) /**< (LCDC) High-End Overlay CLUT Register 70 */
#define REG_LCDC_HEOCLUT71      (*(__IO uint32_t*)0xF000131CU) /**< (LCDC) High-End Overlay CLUT Register 71 */
#define REG_LCDC_HEOCLUT72      (*(__IO uint32_t*)0xF0001320U) /**< (LCDC) High-End Overlay CLUT Register 72 */
#define REG_LCDC_HEOCLUT73      (*(__IO uint32_t*)0xF0001324U) /**< (LCDC) High-End Overlay CLUT Register 73 */
#define REG_LCDC_HEOCLUT74      (*(__IO uint32_t*)0xF0001328U) /**< (LCDC) High-End Overlay CLUT Register 74 */
#define REG_LCDC_HEOCLUT75      (*(__IO uint32_t*)0xF000132CU) /**< (LCDC) High-End Overlay CLUT Register 75 */
#define REG_LCDC_HEOCLUT76      (*(__IO uint32_t*)0xF0001330U) /**< (LCDC) High-End Overlay CLUT Register 76 */
#define REG_LCDC_HEOCLUT77      (*(__IO uint32_t*)0xF0001334U) /**< (LCDC) High-End Overlay CLUT Register 77 */
#define REG_LCDC_HEOCLUT78      (*(__IO uint32_t*)0xF0001338U) /**< (LCDC) High-End Overlay CLUT Register 78 */
#define REG_LCDC_HEOCLUT79      (*(__IO uint32_t*)0xF000133CU) /**< (LCDC) High-End Overlay CLUT Register 79 */
#define REG_LCDC_HEOCLUT80      (*(__IO uint32_t*)0xF0001340U) /**< (LCDC) High-End Overlay CLUT Register 80 */
#define REG_LCDC_HEOCLUT81      (*(__IO uint32_t*)0xF0001344U) /**< (LCDC) High-End Overlay CLUT Register 81 */
#define REG_LCDC_HEOCLUT82      (*(__IO uint32_t*)0xF0001348U) /**< (LCDC) High-End Overlay CLUT Register 82 */
#define REG_LCDC_HEOCLUT83      (*(__IO uint32_t*)0xF000134CU) /**< (LCDC) High-End Overlay CLUT Register 83 */
#define REG_LCDC_HEOCLUT84      (*(__IO uint32_t*)0xF0001350U) /**< (LCDC) High-End Overlay CLUT Register 84 */
#define REG_LCDC_HEOCLUT85      (*(__IO uint32_t*)0xF0001354U) /**< (LCDC) High-End Overlay CLUT Register 85 */
#define REG_LCDC_HEOCLUT86      (*(__IO uint32_t*)0xF0001358U) /**< (LCDC) High-End Overlay CLUT Register 86 */
#define REG_LCDC_HEOCLUT87      (*(__IO uint32_t*)0xF000135CU) /**< (LCDC) High-End Overlay CLUT Register 87 */
#define REG_LCDC_HEOCLUT88      (*(__IO uint32_t*)0xF0001360U) /**< (LCDC) High-End Overlay CLUT Register 88 */
#define REG_LCDC_HEOCLUT89      (*(__IO uint32_t*)0xF0001364U) /**< (LCDC) High-End Overlay CLUT Register 89 */
#define REG_LCDC_HEOCLUT90      (*(__IO uint32_t*)0xF0001368U) /**< (LCDC) High-End Overlay CLUT Register 90 */
#define REG_LCDC_HEOCLUT91      (*(__IO uint32_t*)0xF000136CU) /**< (LCDC) High-End Overlay CLUT Register 91 */
#define REG_LCDC_HEOCLUT92      (*(__IO uint32_t*)0xF0001370U) /**< (LCDC) High-End Overlay CLUT Register 92 */
#define REG_LCDC_HEOCLUT93      (*(__IO uint32_t*)0xF0001374U) /**< (LCDC) High-End Overlay CLUT Register 93 */
#define REG_LCDC_HEOCLUT94      (*(__IO uint32_t*)0xF0001378U) /**< (LCDC) High-End Overlay CLUT Register 94 */
#define REG_LCDC_HEOCLUT95      (*(__IO uint32_t*)0xF000137CU) /**< (LCDC) High-End Overlay CLUT Register 95 */
#define REG_LCDC_HEOCLUT96      (*(__IO uint32_t*)0xF0001380U) /**< (LCDC) High-End Overlay CLUT Register 96 */
#define REG_LCDC_HEOCLUT97      (*(__IO uint32_t*)0xF0001384U) /**< (LCDC) High-End Overlay CLUT Register 97 */
#define REG_LCDC_HEOCLUT98      (*(__IO uint32_t*)0xF0001388U) /**< (LCDC) High-End Overlay CLUT Register 98 */
#define REG_LCDC_HEOCLUT99      (*(__IO uint32_t*)0xF000138CU) /**< (LCDC) High-End Overlay CLUT Register 99 */
#define REG_LCDC_HEOCLUT100     (*(__IO uint32_t*)0xF0001390U) /**< (LCDC) High-End Overlay CLUT Register 100 */
#define REG_LCDC_HEOCLUT101     (*(__IO uint32_t*)0xF0001394U) /**< (LCDC) High-End Overlay CLUT Register 101 */
#define REG_LCDC_HEOCLUT102     (*(__IO uint32_t*)0xF0001398U) /**< (LCDC) High-End Overlay CLUT Register 102 */
#define REG_LCDC_HEOCLUT103     (*(__IO uint32_t*)0xF000139CU) /**< (LCDC) High-End Overlay CLUT Register 103 */
#define REG_LCDC_HEOCLUT104     (*(__IO uint32_t*)0xF00013A0U) /**< (LCDC) High-End Overlay CLUT Register 104 */
#define REG_LCDC_HEOCLUT105     (*(__IO uint32_t*)0xF00013A4U) /**< (LCDC) High-End Overlay CLUT Register 105 */
#define REG_LCDC_HEOCLUT106     (*(__IO uint32_t*)0xF00013A8U) /**< (LCDC) High-End Overlay CLUT Register 106 */
#define REG_LCDC_HEOCLUT107     (*(__IO uint32_t*)0xF00013ACU) /**< (LCDC) High-End Overlay CLUT Register 107 */
#define REG_LCDC_HEOCLUT108     (*(__IO uint32_t*)0xF00013B0U) /**< (LCDC) High-End Overlay CLUT Register 108 */
#define REG_LCDC_HEOCLUT109     (*(__IO uint32_t*)0xF00013B4U) /**< (LCDC) High-End Overlay CLUT Register 109 */
#define REG_LCDC_HEOCLUT110     (*(__IO uint32_t*)0xF00013B8U) /**< (LCDC) High-End Overlay CLUT Register 110 */
#define REG_LCDC_HEOCLUT111     (*(__IO uint32_t*)0xF00013BCU) /**< (LCDC) High-End Overlay CLUT Register 111 */
#define REG_LCDC_HEOCLUT112     (*(__IO uint32_t*)0xF00013C0U) /**< (LCDC) High-End Overlay CLUT Register 112 */
#define REG_LCDC_HEOCLUT113     (*(__IO uint32_t*)0xF00013C4U) /**< (LCDC) High-End Overlay CLUT Register 113 */
#define REG_LCDC_HEOCLUT114     (*(__IO uint32_t*)0xF00013C8U) /**< (LCDC) High-End Overlay CLUT Register 114 */
#define REG_LCDC_HEOCLUT115     (*(__IO uint32_t*)0xF00013CCU) /**< (LCDC) High-End Overlay CLUT Register 115 */
#define REG_LCDC_HEOCLUT116     (*(__IO uint32_t*)0xF00013D0U) /**< (LCDC) High-End Overlay CLUT Register 116 */
#define REG_LCDC_HEOCLUT117     (*(__IO uint32_t*)0xF00013D4U) /**< (LCDC) High-End Overlay CLUT Register 117 */
#define REG_LCDC_HEOCLUT118     (*(__IO uint32_t*)0xF00013D8U) /**< (LCDC) High-End Overlay CLUT Register 118 */
#define REG_LCDC_HEOCLUT119     (*(__IO uint32_t*)0xF00013DCU) /**< (LCDC) High-End Overlay CLUT Register 119 */
#define REG_LCDC_HEOCLUT120     (*(__IO uint32_t*)0xF00013E0U) /**< (LCDC) High-End Overlay CLUT Register 120 */
#define REG_LCDC_HEOCLUT121     (*(__IO uint32_t*)0xF00013E4U) /**< (LCDC) High-End Overlay CLUT Register 121 */
#define REG_LCDC_HEOCLUT122     (*(__IO uint32_t*)0xF00013E8U) /**< (LCDC) High-End Overlay CLUT Register 122 */
#define REG_LCDC_HEOCLUT123     (*(__IO uint32_t*)0xF00013ECU) /**< (LCDC) High-End Overlay CLUT Register 123 */
#define REG_LCDC_HEOCLUT124     (*(__IO uint32_t*)0xF00013F0U) /**< (LCDC) High-End Overlay CLUT Register 124 */
#define REG_LCDC_HEOCLUT125     (*(__IO uint32_t*)0xF00013F4U) /**< (LCDC) High-End Overlay CLUT Register 125 */
#define REG_LCDC_HEOCLUT126     (*(__IO uint32_t*)0xF00013F8U) /**< (LCDC) High-End Overlay CLUT Register 126 */
#define REG_LCDC_HEOCLUT127     (*(__IO uint32_t*)0xF00013FCU) /**< (LCDC) High-End Overlay CLUT Register 127 */
#define REG_LCDC_HEOCLUT128     (*(__IO uint32_t*)0xF0001400U) /**< (LCDC) High-End Overlay CLUT Register 128 */
#define REG_LCDC_HEOCLUT129     (*(__IO uint32_t*)0xF0001404U) /**< (LCDC) High-End Overlay CLUT Register 129 */
#define REG_LCDC_HEOCLUT130     (*(__IO uint32_t*)0xF0001408U) /**< (LCDC) High-End Overlay CLUT Register 130 */
#define REG_LCDC_HEOCLUT131     (*(__IO uint32_t*)0xF000140CU) /**< (LCDC) High-End Overlay CLUT Register 131 */
#define REG_LCDC_HEOCLUT132     (*(__IO uint32_t*)0xF0001410U) /**< (LCDC) High-End Overlay CLUT Register 132 */
#define REG_LCDC_HEOCLUT133     (*(__IO uint32_t*)0xF0001414U) /**< (LCDC) High-End Overlay CLUT Register 133 */
#define REG_LCDC_HEOCLUT134     (*(__IO uint32_t*)0xF0001418U) /**< (LCDC) High-End Overlay CLUT Register 134 */
#define REG_LCDC_HEOCLUT135     (*(__IO uint32_t*)0xF000141CU) /**< (LCDC) High-End Overlay CLUT Register 135 */
#define REG_LCDC_HEOCLUT136     (*(__IO uint32_t*)0xF0001420U) /**< (LCDC) High-End Overlay CLUT Register 136 */
#define REG_LCDC_HEOCLUT137     (*(__IO uint32_t*)0xF0001424U) /**< (LCDC) High-End Overlay CLUT Register 137 */
#define REG_LCDC_HEOCLUT138     (*(__IO uint32_t*)0xF0001428U) /**< (LCDC) High-End Overlay CLUT Register 138 */
#define REG_LCDC_HEOCLUT139     (*(__IO uint32_t*)0xF000142CU) /**< (LCDC) High-End Overlay CLUT Register 139 */
#define REG_LCDC_HEOCLUT140     (*(__IO uint32_t*)0xF0001430U) /**< (LCDC) High-End Overlay CLUT Register 140 */
#define REG_LCDC_HEOCLUT141     (*(__IO uint32_t*)0xF0001434U) /**< (LCDC) High-End Overlay CLUT Register 141 */
#define REG_LCDC_HEOCLUT142     (*(__IO uint32_t*)0xF0001438U) /**< (LCDC) High-End Overlay CLUT Register 142 */
#define REG_LCDC_HEOCLUT143     (*(__IO uint32_t*)0xF000143CU) /**< (LCDC) High-End Overlay CLUT Register 143 */
#define REG_LCDC_HEOCLUT144     (*(__IO uint32_t*)0xF0001440U) /**< (LCDC) High-End Overlay CLUT Register 144 */
#define REG_LCDC_HEOCLUT145     (*(__IO uint32_t*)0xF0001444U) /**< (LCDC) High-End Overlay CLUT Register 145 */
#define REG_LCDC_HEOCLUT146     (*(__IO uint32_t*)0xF0001448U) /**< (LCDC) High-End Overlay CLUT Register 146 */
#define REG_LCDC_HEOCLUT147     (*(__IO uint32_t*)0xF000144CU) /**< (LCDC) High-End Overlay CLUT Register 147 */
#define REG_LCDC_HEOCLUT148     (*(__IO uint32_t*)0xF0001450U) /**< (LCDC) High-End Overlay CLUT Register 148 */
#define REG_LCDC_HEOCLUT149     (*(__IO uint32_t*)0xF0001454U) /**< (LCDC) High-End Overlay CLUT Register 149 */
#define REG_LCDC_HEOCLUT150     (*(__IO uint32_t*)0xF0001458U) /**< (LCDC) High-End Overlay CLUT Register 150 */
#define REG_LCDC_HEOCLUT151     (*(__IO uint32_t*)0xF000145CU) /**< (LCDC) High-End Overlay CLUT Register 151 */
#define REG_LCDC_HEOCLUT152     (*(__IO uint32_t*)0xF0001460U) /**< (LCDC) High-End Overlay CLUT Register 152 */
#define REG_LCDC_HEOCLUT153     (*(__IO uint32_t*)0xF0001464U) /**< (LCDC) High-End Overlay CLUT Register 153 */
#define REG_LCDC_HEOCLUT154     (*(__IO uint32_t*)0xF0001468U) /**< (LCDC) High-End Overlay CLUT Register 154 */
#define REG_LCDC_HEOCLUT155     (*(__IO uint32_t*)0xF000146CU) /**< (LCDC) High-End Overlay CLUT Register 155 */
#define REG_LCDC_HEOCLUT156     (*(__IO uint32_t*)0xF0001470U) /**< (LCDC) High-End Overlay CLUT Register 156 */
#define REG_LCDC_HEOCLUT157     (*(__IO uint32_t*)0xF0001474U) /**< (LCDC) High-End Overlay CLUT Register 157 */
#define REG_LCDC_HEOCLUT158     (*(__IO uint32_t*)0xF0001478U) /**< (LCDC) High-End Overlay CLUT Register 158 */
#define REG_LCDC_HEOCLUT159     (*(__IO uint32_t*)0xF000147CU) /**< (LCDC) High-End Overlay CLUT Register 159 */
#define REG_LCDC_HEOCLUT160     (*(__IO uint32_t*)0xF0001480U) /**< (LCDC) High-End Overlay CLUT Register 160 */
#define REG_LCDC_HEOCLUT161     (*(__IO uint32_t*)0xF0001484U) /**< (LCDC) High-End Overlay CLUT Register 161 */
#define REG_LCDC_HEOCLUT162     (*(__IO uint32_t*)0xF0001488U) /**< (LCDC) High-End Overlay CLUT Register 162 */
#define REG_LCDC_HEOCLUT163     (*(__IO uint32_t*)0xF000148CU) /**< (LCDC) High-End Overlay CLUT Register 163 */
#define REG_LCDC_HEOCLUT164     (*(__IO uint32_t*)0xF0001490U) /**< (LCDC) High-End Overlay CLUT Register 164 */
#define REG_LCDC_HEOCLUT165     (*(__IO uint32_t*)0xF0001494U) /**< (LCDC) High-End Overlay CLUT Register 165 */
#define REG_LCDC_HEOCLUT166     (*(__IO uint32_t*)0xF0001498U) /**< (LCDC) High-End Overlay CLUT Register 166 */
#define REG_LCDC_HEOCLUT167     (*(__IO uint32_t*)0xF000149CU) /**< (LCDC) High-End Overlay CLUT Register 167 */
#define REG_LCDC_HEOCLUT168     (*(__IO uint32_t*)0xF00014A0U) /**< (LCDC) High-End Overlay CLUT Register 168 */
#define REG_LCDC_HEOCLUT169     (*(__IO uint32_t*)0xF00014A4U) /**< (LCDC) High-End Overlay CLUT Register 169 */
#define REG_LCDC_HEOCLUT170     (*(__IO uint32_t*)0xF00014A8U) /**< (LCDC) High-End Overlay CLUT Register 170 */
#define REG_LCDC_HEOCLUT171     (*(__IO uint32_t*)0xF00014ACU) /**< (LCDC) High-End Overlay CLUT Register 171 */
#define REG_LCDC_HEOCLUT172     (*(__IO uint32_t*)0xF00014B0U) /**< (LCDC) High-End Overlay CLUT Register 172 */
#define REG_LCDC_HEOCLUT173     (*(__IO uint32_t*)0xF00014B4U) /**< (LCDC) High-End Overlay CLUT Register 173 */
#define REG_LCDC_HEOCLUT174     (*(__IO uint32_t*)0xF00014B8U) /**< (LCDC) High-End Overlay CLUT Register 174 */
#define REG_LCDC_HEOCLUT175     (*(__IO uint32_t*)0xF00014BCU) /**< (LCDC) High-End Overlay CLUT Register 175 */
#define REG_LCDC_HEOCLUT176     (*(__IO uint32_t*)0xF00014C0U) /**< (LCDC) High-End Overlay CLUT Register 176 */
#define REG_LCDC_HEOCLUT177     (*(__IO uint32_t*)0xF00014C4U) /**< (LCDC) High-End Overlay CLUT Register 177 */
#define REG_LCDC_HEOCLUT178     (*(__IO uint32_t*)0xF00014C8U) /**< (LCDC) High-End Overlay CLUT Register 178 */
#define REG_LCDC_HEOCLUT179     (*(__IO uint32_t*)0xF00014CCU) /**< (LCDC) High-End Overlay CLUT Register 179 */
#define REG_LCDC_HEOCLUT180     (*(__IO uint32_t*)0xF00014D0U) /**< (LCDC) High-End Overlay CLUT Register 180 */
#define REG_LCDC_HEOCLUT181     (*(__IO uint32_t*)0xF00014D4U) /**< (LCDC) High-End Overlay CLUT Register 181 */
#define REG_LCDC_HEOCLUT182     (*(__IO uint32_t*)0xF00014D8U) /**< (LCDC) High-End Overlay CLUT Register 182 */
#define REG_LCDC_HEOCLUT183     (*(__IO uint32_t*)0xF00014DCU) /**< (LCDC) High-End Overlay CLUT Register 183 */
#define REG_LCDC_HEOCLUT184     (*(__IO uint32_t*)0xF00014E0U) /**< (LCDC) High-End Overlay CLUT Register 184 */
#define REG_LCDC_HEOCLUT185     (*(__IO uint32_t*)0xF00014E4U) /**< (LCDC) High-End Overlay CLUT Register 185 */
#define REG_LCDC_HEOCLUT186     (*(__IO uint32_t*)0xF00014E8U) /**< (LCDC) High-End Overlay CLUT Register 186 */
#define REG_LCDC_HEOCLUT187     (*(__IO uint32_t*)0xF00014ECU) /**< (LCDC) High-End Overlay CLUT Register 187 */
#define REG_LCDC_HEOCLUT188     (*(__IO uint32_t*)0xF00014F0U) /**< (LCDC) High-End Overlay CLUT Register 188 */
#define REG_LCDC_HEOCLUT189     (*(__IO uint32_t*)0xF00014F4U) /**< (LCDC) High-End Overlay CLUT Register 189 */
#define REG_LCDC_HEOCLUT190     (*(__IO uint32_t*)0xF00014F8U) /**< (LCDC) High-End Overlay CLUT Register 190 */
#define REG_LCDC_HEOCLUT191     (*(__IO uint32_t*)0xF00014FCU) /**< (LCDC) High-End Overlay CLUT Register 191 */
#define REG_LCDC_HEOCLUT192     (*(__IO uint32_t*)0xF0001500U) /**< (LCDC) High-End Overlay CLUT Register 192 */
#define REG_LCDC_HEOCLUT193     (*(__IO uint32_t*)0xF0001504U) /**< (LCDC) High-End Overlay CLUT Register 193 */
#define REG_LCDC_HEOCLUT194     (*(__IO uint32_t*)0xF0001508U) /**< (LCDC) High-End Overlay CLUT Register 194 */
#define REG_LCDC_HEOCLUT195     (*(__IO uint32_t*)0xF000150CU) /**< (LCDC) High-End Overlay CLUT Register 195 */
#define REG_LCDC_HEOCLUT196     (*(__IO uint32_t*)0xF0001510U) /**< (LCDC) High-End Overlay CLUT Register 196 */
#define REG_LCDC_HEOCLUT197     (*(__IO uint32_t*)0xF0001514U) /**< (LCDC) High-End Overlay CLUT Register 197 */
#define REG_LCDC_HEOCLUT198     (*(__IO uint32_t*)0xF0001518U) /**< (LCDC) High-End Overlay CLUT Register 198 */
#define REG_LCDC_HEOCLUT199     (*(__IO uint32_t*)0xF000151CU) /**< (LCDC) High-End Overlay CLUT Register 199 */
#define REG_LCDC_HEOCLUT200     (*(__IO uint32_t*)0xF0001520U) /**< (LCDC) High-End Overlay CLUT Register 200 */
#define REG_LCDC_HEOCLUT201     (*(__IO uint32_t*)0xF0001524U) /**< (LCDC) High-End Overlay CLUT Register 201 */
#define REG_LCDC_HEOCLUT202     (*(__IO uint32_t*)0xF0001528U) /**< (LCDC) High-End Overlay CLUT Register 202 */
#define REG_LCDC_HEOCLUT203     (*(__IO uint32_t*)0xF000152CU) /**< (LCDC) High-End Overlay CLUT Register 203 */
#define REG_LCDC_HEOCLUT204     (*(__IO uint32_t*)0xF0001530U) /**< (LCDC) High-End Overlay CLUT Register 204 */
#define REG_LCDC_HEOCLUT205     (*(__IO uint32_t*)0xF0001534U) /**< (LCDC) High-End Overlay CLUT Register 205 */
#define REG_LCDC_HEOCLUT206     (*(__IO uint32_t*)0xF0001538U) /**< (LCDC) High-End Overlay CLUT Register 206 */
#define REG_LCDC_HEOCLUT207     (*(__IO uint32_t*)0xF000153CU) /**< (LCDC) High-End Overlay CLUT Register 207 */
#define REG_LCDC_HEOCLUT208     (*(__IO uint32_t*)0xF0001540U) /**< (LCDC) High-End Overlay CLUT Register 208 */
#define REG_LCDC_HEOCLUT209     (*(__IO uint32_t*)0xF0001544U) /**< (LCDC) High-End Overlay CLUT Register 209 */
#define REG_LCDC_HEOCLUT210     (*(__IO uint32_t*)0xF0001548U) /**< (LCDC) High-End Overlay CLUT Register 210 */
#define REG_LCDC_HEOCLUT211     (*(__IO uint32_t*)0xF000154CU) /**< (LCDC) High-End Overlay CLUT Register 211 */
#define REG_LCDC_HEOCLUT212     (*(__IO uint32_t*)0xF0001550U) /**< (LCDC) High-End Overlay CLUT Register 212 */
#define REG_LCDC_HEOCLUT213     (*(__IO uint32_t*)0xF0001554U) /**< (LCDC) High-End Overlay CLUT Register 213 */
#define REG_LCDC_HEOCLUT214     (*(__IO uint32_t*)0xF0001558U) /**< (LCDC) High-End Overlay CLUT Register 214 */
#define REG_LCDC_HEOCLUT215     (*(__IO uint32_t*)0xF000155CU) /**< (LCDC) High-End Overlay CLUT Register 215 */
#define REG_LCDC_HEOCLUT216     (*(__IO uint32_t*)0xF0001560U) /**< (LCDC) High-End Overlay CLUT Register 216 */
#define REG_LCDC_HEOCLUT217     (*(__IO uint32_t*)0xF0001564U) /**< (LCDC) High-End Overlay CLUT Register 217 */
#define REG_LCDC_HEOCLUT218     (*(__IO uint32_t*)0xF0001568U) /**< (LCDC) High-End Overlay CLUT Register 218 */
#define REG_LCDC_HEOCLUT219     (*(__IO uint32_t*)0xF000156CU) /**< (LCDC) High-End Overlay CLUT Register 219 */
#define REG_LCDC_HEOCLUT220     (*(__IO uint32_t*)0xF0001570U) /**< (LCDC) High-End Overlay CLUT Register 220 */
#define REG_LCDC_HEOCLUT221     (*(__IO uint32_t*)0xF0001574U) /**< (LCDC) High-End Overlay CLUT Register 221 */
#define REG_LCDC_HEOCLUT222     (*(__IO uint32_t*)0xF0001578U) /**< (LCDC) High-End Overlay CLUT Register 222 */
#define REG_LCDC_HEOCLUT223     (*(__IO uint32_t*)0xF000157CU) /**< (LCDC) High-End Overlay CLUT Register 223 */
#define REG_LCDC_HEOCLUT224     (*(__IO uint32_t*)0xF0001580U) /**< (LCDC) High-End Overlay CLUT Register 224 */
#define REG_LCDC_HEOCLUT225     (*(__IO uint32_t*)0xF0001584U) /**< (LCDC) High-End Overlay CLUT Register 225 */
#define REG_LCDC_HEOCLUT226     (*(__IO uint32_t*)0xF0001588U) /**< (LCDC) High-End Overlay CLUT Register 226 */
#define REG_LCDC_HEOCLUT227     (*(__IO uint32_t*)0xF000158CU) /**< (LCDC) High-End Overlay CLUT Register 227 */
#define REG_LCDC_HEOCLUT228     (*(__IO uint32_t*)0xF0001590U) /**< (LCDC) High-End Overlay CLUT Register 228 */
#define REG_LCDC_HEOCLUT229     (*(__IO uint32_t*)0xF0001594U) /**< (LCDC) High-End Overlay CLUT Register 229 */
#define REG_LCDC_HEOCLUT230     (*(__IO uint32_t*)0xF0001598U) /**< (LCDC) High-End Overlay CLUT Register 230 */
#define REG_LCDC_HEOCLUT231     (*(__IO uint32_t*)0xF000159CU) /**< (LCDC) High-End Overlay CLUT Register 231 */
#define REG_LCDC_HEOCLUT232     (*(__IO uint32_t*)0xF00015A0U) /**< (LCDC) High-End Overlay CLUT Register 232 */
#define REG_LCDC_HEOCLUT233     (*(__IO uint32_t*)0xF00015A4U) /**< (LCDC) High-End Overlay CLUT Register 233 */
#define REG_LCDC_HEOCLUT234     (*(__IO uint32_t*)0xF00015A8U) /**< (LCDC) High-End Overlay CLUT Register 234 */
#define REG_LCDC_HEOCLUT235     (*(__IO uint32_t*)0xF00015ACU) /**< (LCDC) High-End Overlay CLUT Register 235 */
#define REG_LCDC_HEOCLUT236     (*(__IO uint32_t*)0xF00015B0U) /**< (LCDC) High-End Overlay CLUT Register 236 */
#define REG_LCDC_HEOCLUT237     (*(__IO uint32_t*)0xF00015B4U) /**< (LCDC) High-End Overlay CLUT Register 237 */
#define REG_LCDC_HEOCLUT238     (*(__IO uint32_t*)0xF00015B8U) /**< (LCDC) High-End Overlay CLUT Register 238 */
#define REG_LCDC_HEOCLUT239     (*(__IO uint32_t*)0xF00015BCU) /**< (LCDC) High-End Overlay CLUT Register 239 */
#define REG_LCDC_HEOCLUT240     (*(__IO uint32_t*)0xF00015C0U) /**< (LCDC) High-End Overlay CLUT Register 240 */
#define REG_LCDC_HEOCLUT241     (*(__IO uint32_t*)0xF00015C4U) /**< (LCDC) High-End Overlay CLUT Register 241 */
#define REG_LCDC_HEOCLUT242     (*(__IO uint32_t*)0xF00015C8U) /**< (LCDC) High-End Overlay CLUT Register 242 */
#define REG_LCDC_HEOCLUT243     (*(__IO uint32_t*)0xF00015CCU) /**< (LCDC) High-End Overlay CLUT Register 243 */
#define REG_LCDC_HEOCLUT244     (*(__IO uint32_t*)0xF00015D0U) /**< (LCDC) High-End Overlay CLUT Register 244 */
#define REG_LCDC_HEOCLUT245     (*(__IO uint32_t*)0xF00015D4U) /**< (LCDC) High-End Overlay CLUT Register 245 */
#define REG_LCDC_HEOCLUT246     (*(__IO uint32_t*)0xF00015D8U) /**< (LCDC) High-End Overlay CLUT Register 246 */
#define REG_LCDC_HEOCLUT247     (*(__IO uint32_t*)0xF00015DCU) /**< (LCDC) High-End Overlay CLUT Register 247 */
#define REG_LCDC_HEOCLUT248     (*(__IO uint32_t*)0xF00015E0U) /**< (LCDC) High-End Overlay CLUT Register 248 */
#define REG_LCDC_HEOCLUT249     (*(__IO uint32_t*)0xF00015E4U) /**< (LCDC) High-End Overlay CLUT Register 249 */
#define REG_LCDC_HEOCLUT250     (*(__IO uint32_t*)0xF00015E8U) /**< (LCDC) High-End Overlay CLUT Register 250 */
#define REG_LCDC_HEOCLUT251     (*(__IO uint32_t*)0xF00015ECU) /**< (LCDC) High-End Overlay CLUT Register 251 */
#define REG_LCDC_HEOCLUT252     (*(__IO uint32_t*)0xF00015F0U) /**< (LCDC) High-End Overlay CLUT Register 252 */
#define REG_LCDC_HEOCLUT253     (*(__IO uint32_t*)0xF00015F4U) /**< (LCDC) High-End Overlay CLUT Register 253 */
#define REG_LCDC_HEOCLUT254     (*(__IO uint32_t*)0xF00015F8U) /**< (LCDC) High-End Overlay CLUT Register 254 */
#define REG_LCDC_HEOCLUT255     (*(__IO uint32_t*)0xF00015FCU) /**< (LCDC) High-End Overlay CLUT Register 255 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for LCDC peripheral ========== */
#define LCDC_INSTANCE_ID                         45         
#define LCDC_CLOCK_ID                            45         

#endif /* _SAMA5D2_LCDC_INSTANCE_ */
