/**
 * \file
 *
 * \brief Instance description for SMC
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
#ifndef _SAMA5D2_SMC_INSTANCE_H_
#define _SAMA5D2_SMC_INSTANCE_H_

/* ========== Register definition for SMC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_SMC_HSMC_PMECC0     (0xF80140B0) /**< (SMC) PMECC Redundancy 0 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_PMECC1     (0xF80140F0) /**< (SMC) PMECC Redundancy 0 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_PMECC2     (0xF8014130) /**< (SMC) PMECC Redundancy 0 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_PMECC3     (0xF8014170) /**< (SMC) PMECC Redundancy 0 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_PMECC4     (0xF80141B0) /**< (SMC) PMECC Redundancy 0 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_PMECC5     (0xF80141F0) /**< (SMC) PMECC Redundancy 0 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_PMECC6     (0xF8014230) /**< (SMC) PMECC Redundancy 0 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_PMECC7     (0xF8014270) /**< (SMC) PMECC Redundancy 0 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM0_0     (0xF80142B0) /**< (SMC) PMECC Remainder 0 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM1_0     (0xF80142B4) /**< (SMC) PMECC Remainder 1 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM2_0     (0xF80142B8) /**< (SMC) PMECC Remainder 2 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM3_0     (0xF80142BC) /**< (SMC) PMECC Remainder 3 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM4_0     (0xF80142C0) /**< (SMC) PMECC Remainder 4 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM5_0     (0xF80142C4) /**< (SMC) PMECC Remainder 5 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM6_0     (0xF80142C8) /**< (SMC) PMECC Remainder 6 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM7_0     (0xF80142CC) /**< (SMC) PMECC Remainder 7 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM8_0     (0xF80142D0) /**< (SMC) PMECC Remainder 8 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM9_0     (0xF80142D4) /**< (SMC) PMECC Remainder 9 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM10_0    (0xF80142D8) /**< (SMC) PMECC Remainder 10 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM11_0    (0xF80142DC) /**< (SMC) PMECC Remainder 11 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM12_0    (0xF80142E0) /**< (SMC) PMECC Remainder 12 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM13_0    (0xF80142E4) /**< (SMC) PMECC Remainder 13 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM14_0    (0xF80142E8) /**< (SMC) PMECC Remainder 14 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM15_0    (0xF80142EC) /**< (SMC) PMECC Remainder 15 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM0_1     (0xF80142F0) /**< (SMC) PMECC Remainder 0 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM1_1     (0xF80142F4) /**< (SMC) PMECC Remainder 1 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM2_1     (0xF80142F8) /**< (SMC) PMECC Remainder 2 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM3_1     (0xF80142FC) /**< (SMC) PMECC Remainder 3 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM4_1     (0xF8014300) /**< (SMC) PMECC Remainder 4 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM5_1     (0xF8014304) /**< (SMC) PMECC Remainder 5 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM6_1     (0xF8014308) /**< (SMC) PMECC Remainder 6 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM7_1     (0xF801430C) /**< (SMC) PMECC Remainder 7 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM8_1     (0xF8014310) /**< (SMC) PMECC Remainder 8 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM9_1     (0xF8014314) /**< (SMC) PMECC Remainder 9 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM10_1    (0xF8014318) /**< (SMC) PMECC Remainder 10 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM11_1    (0xF801431C) /**< (SMC) PMECC Remainder 11 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM12_1    (0xF8014320) /**< (SMC) PMECC Remainder 12 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM13_1    (0xF8014324) /**< (SMC) PMECC Remainder 13 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM14_1    (0xF8014328) /**< (SMC) PMECC Remainder 14 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM15_1    (0xF801432C) /**< (SMC) PMECC Remainder 15 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM0_2     (0xF8014330) /**< (SMC) PMECC Remainder 0 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM1_2     (0xF8014334) /**< (SMC) PMECC Remainder 1 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM2_2     (0xF8014338) /**< (SMC) PMECC Remainder 2 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM3_2     (0xF801433C) /**< (SMC) PMECC Remainder 3 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM4_2     (0xF8014340) /**< (SMC) PMECC Remainder 4 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM5_2     (0xF8014344) /**< (SMC) PMECC Remainder 5 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM6_2     (0xF8014348) /**< (SMC) PMECC Remainder 6 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM7_2     (0xF801434C) /**< (SMC) PMECC Remainder 7 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM8_2     (0xF8014350) /**< (SMC) PMECC Remainder 8 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM9_2     (0xF8014354) /**< (SMC) PMECC Remainder 9 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM10_2    (0xF8014358) /**< (SMC) PMECC Remainder 10 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM11_2    (0xF801435C) /**< (SMC) PMECC Remainder 11 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM12_2    (0xF8014360) /**< (SMC) PMECC Remainder 12 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM13_2    (0xF8014364) /**< (SMC) PMECC Remainder 13 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM14_2    (0xF8014368) /**< (SMC) PMECC Remainder 14 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM15_2    (0xF801436C) /**< (SMC) PMECC Remainder 15 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM0_3     (0xF8014370) /**< (SMC) PMECC Remainder 0 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM1_3     (0xF8014374) /**< (SMC) PMECC Remainder 1 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM2_3     (0xF8014378) /**< (SMC) PMECC Remainder 2 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM3_3     (0xF801437C) /**< (SMC) PMECC Remainder 3 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM4_3     (0xF8014380) /**< (SMC) PMECC Remainder 4 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM5_3     (0xF8014384) /**< (SMC) PMECC Remainder 5 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM6_3     (0xF8014388) /**< (SMC) PMECC Remainder 6 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM7_3     (0xF801438C) /**< (SMC) PMECC Remainder 7 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM8_3     (0xF8014390) /**< (SMC) PMECC Remainder 8 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM9_3     (0xF8014394) /**< (SMC) PMECC Remainder 9 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM10_3    (0xF8014398) /**< (SMC) PMECC Remainder 10 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM11_3    (0xF801439C) /**< (SMC) PMECC Remainder 11 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM12_3    (0xF80143A0) /**< (SMC) PMECC Remainder 12 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM13_3    (0xF80143A4) /**< (SMC) PMECC Remainder 13 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM14_3    (0xF80143A8) /**< (SMC) PMECC Remainder 14 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM15_3    (0xF80143AC) /**< (SMC) PMECC Remainder 15 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM0_4     (0xF80143B0) /**< (SMC) PMECC Remainder 0 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM1_4     (0xF80143B4) /**< (SMC) PMECC Remainder 1 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM2_4     (0xF80143B8) /**< (SMC) PMECC Remainder 2 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM3_4     (0xF80143BC) /**< (SMC) PMECC Remainder 3 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM4_4     (0xF80143C0) /**< (SMC) PMECC Remainder 4 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM5_4     (0xF80143C4) /**< (SMC) PMECC Remainder 5 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM6_4     (0xF80143C8) /**< (SMC) PMECC Remainder 6 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM7_4     (0xF80143CC) /**< (SMC) PMECC Remainder 7 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM8_4     (0xF80143D0) /**< (SMC) PMECC Remainder 8 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM9_4     (0xF80143D4) /**< (SMC) PMECC Remainder 9 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM10_4    (0xF80143D8) /**< (SMC) PMECC Remainder 10 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM11_4    (0xF80143DC) /**< (SMC) PMECC Remainder 11 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM12_4    (0xF80143E0) /**< (SMC) PMECC Remainder 12 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM13_4    (0xF80143E4) /**< (SMC) PMECC Remainder 13 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM14_4    (0xF80143E8) /**< (SMC) PMECC Remainder 14 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM15_4    (0xF80143EC) /**< (SMC) PMECC Remainder 15 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM0_5     (0xF80143F0) /**< (SMC) PMECC Remainder 0 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM1_5     (0xF80143F4) /**< (SMC) PMECC Remainder 1 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM2_5     (0xF80143F8) /**< (SMC) PMECC Remainder 2 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM3_5     (0xF80143FC) /**< (SMC) PMECC Remainder 3 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM4_5     (0xF8014400) /**< (SMC) PMECC Remainder 4 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM5_5     (0xF8014404) /**< (SMC) PMECC Remainder 5 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM6_5     (0xF8014408) /**< (SMC) PMECC Remainder 6 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM7_5     (0xF801440C) /**< (SMC) PMECC Remainder 7 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM8_5     (0xF8014410) /**< (SMC) PMECC Remainder 8 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM9_5     (0xF8014414) /**< (SMC) PMECC Remainder 9 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM10_5    (0xF8014418) /**< (SMC) PMECC Remainder 10 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM11_5    (0xF801441C) /**< (SMC) PMECC Remainder 11 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM12_5    (0xF8014420) /**< (SMC) PMECC Remainder 12 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM13_5    (0xF8014424) /**< (SMC) PMECC Remainder 13 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM14_5    (0xF8014428) /**< (SMC) PMECC Remainder 14 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM15_5    (0xF801442C) /**< (SMC) PMECC Remainder 15 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM0_6     (0xF8014430) /**< (SMC) PMECC Remainder 0 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM1_6     (0xF8014434) /**< (SMC) PMECC Remainder 1 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM2_6     (0xF8014438) /**< (SMC) PMECC Remainder 2 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM3_6     (0xF801443C) /**< (SMC) PMECC Remainder 3 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM4_6     (0xF8014440) /**< (SMC) PMECC Remainder 4 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM5_6     (0xF8014444) /**< (SMC) PMECC Remainder 5 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM6_6     (0xF8014448) /**< (SMC) PMECC Remainder 6 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM7_6     (0xF801444C) /**< (SMC) PMECC Remainder 7 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM8_6     (0xF8014450) /**< (SMC) PMECC Remainder 8 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM9_6     (0xF8014454) /**< (SMC) PMECC Remainder 9 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM10_6    (0xF8014458) /**< (SMC) PMECC Remainder 10 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM11_6    (0xF801445C) /**< (SMC) PMECC Remainder 11 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM12_6    (0xF8014460) /**< (SMC) PMECC Remainder 12 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM13_6    (0xF8014464) /**< (SMC) PMECC Remainder 13 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM14_6    (0xF8014468) /**< (SMC) PMECC Remainder 14 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM15_6    (0xF801446C) /**< (SMC) PMECC Remainder 15 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM0_7     (0xF8014470) /**< (SMC) PMECC Remainder 0 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM1_7     (0xF8014474) /**< (SMC) PMECC Remainder 1 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM2_7     (0xF8014478) /**< (SMC) PMECC Remainder 2 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM3_7     (0xF801447C) /**< (SMC) PMECC Remainder 3 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM4_7     (0xF8014480) /**< (SMC) PMECC Remainder 4 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM5_7     (0xF8014484) /**< (SMC) PMECC Remainder 5 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM6_7     (0xF8014488) /**< (SMC) PMECC Remainder 6 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM7_7     (0xF801448C) /**< (SMC) PMECC Remainder 7 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM8_7     (0xF8014490) /**< (SMC) PMECC Remainder 8 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM9_7     (0xF8014494) /**< (SMC) PMECC Remainder 9 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM10_7    (0xF8014498) /**< (SMC) PMECC Remainder 10 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM11_7    (0xF801449C) /**< (SMC) PMECC Remainder 11 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM12_7    (0xF80144A0) /**< (SMC) PMECC Remainder 12 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM13_7    (0xF80144A4) /**< (SMC) PMECC Remainder 13 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM14_7    (0xF80144A8) /**< (SMC) PMECC Remainder 14 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM15_7    (0xF80144AC) /**< (SMC) PMECC Remainder 15 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_SETUP0     (0xF8014700) /**< (SMC) Setup Register 0 */
#define REG_SMC_HSMC_PULSE0     (0xF8014704) /**< (SMC) Pulse Register 0 */
#define REG_SMC_HSMC_CYCLE0     (0xF8014708) /**< (SMC) Cycle Register 0 */
#define REG_SMC_HSMC_TIMINGS0   (0xF801470C) /**< (SMC) Timings Register 0 */
#define REG_SMC_HSMC_MODE0      (0xF8014710) /**< (SMC) Mode Register 0 */
#define REG_SMC_HSMC_SETUP1     (0xF8014714) /**< (SMC) Setup Register 1 */
#define REG_SMC_HSMC_PULSE1     (0xF8014718) /**< (SMC) Pulse Register 1 */
#define REG_SMC_HSMC_CYCLE1     (0xF801471C) /**< (SMC) Cycle Register 1 */
#define REG_SMC_HSMC_TIMINGS1   (0xF8014720) /**< (SMC) Timings Register 1 */
#define REG_SMC_HSMC_MODE1      (0xF8014724) /**< (SMC) Mode Register 1 */
#define REG_SMC_HSMC_SETUP2     (0xF8014728) /**< (SMC) Setup Register 2 */
#define REG_SMC_HSMC_PULSE2     (0xF801472C) /**< (SMC) Pulse Register 2 */
#define REG_SMC_HSMC_CYCLE2     (0xF8014730) /**< (SMC) Cycle Register 2 */
#define REG_SMC_HSMC_TIMINGS2   (0xF8014734) /**< (SMC) Timings Register 2 */
#define REG_SMC_HSMC_MODE2      (0xF8014738) /**< (SMC) Mode Register 2 */
#define REG_SMC_HSMC_SETUP3     (0xF801473C) /**< (SMC) Setup Register 3 */
#define REG_SMC_HSMC_PULSE3     (0xF8014740) /**< (SMC) Pulse Register 3 */
#define REG_SMC_HSMC_CYCLE3     (0xF8014744) /**< (SMC) Cycle Register 3 */
#define REG_SMC_HSMC_TIMINGS3   (0xF8014748) /**< (SMC) Timings Register 3 */
#define REG_SMC_HSMC_MODE3      (0xF801474C) /**< (SMC) Mode Register 3 */
#define REG_SMC_HSMC_CFG        (0xF8014000) /**< (SMC) NFC Configuration Register */
#define REG_SMC_HSMC_CTRL       (0xF8014004) /**< (SMC) NFC Control Register */
#define REG_SMC_HSMC_SR         (0xF8014008) /**< (SMC) NFC Status Register */
#define REG_SMC_HSMC_IER        (0xF801400C) /**< (SMC) NFC Interrupt Enable Register */
#define REG_SMC_HSMC_IDR        (0xF8014010) /**< (SMC) NFC Interrupt Disable Register */
#define REG_SMC_HSMC_IMR        (0xF8014014) /**< (SMC) NFC Interrupt Mask Register */
#define REG_SMC_HSMC_ADDR       (0xF8014018) /**< (SMC) NFC Address Cycle Zero Register */
#define REG_SMC_HSMC_BANK       (0xF801401C) /**< (SMC) Bank Address Register */
#define REG_SMC_HSMC_PMECCFG    (0xF8014070) /**< (SMC) PMECC Configuration Register */
#define REG_SMC_HSMC_PMECCSAREA (0xF8014074) /**< (SMC) PMECC Spare Area Size Register */
#define REG_SMC_HSMC_PMECCSADDR (0xF8014078) /**< (SMC) PMECC Start Address Register */
#define REG_SMC_HSMC_PMECCEADDR (0xF801407C) /**< (SMC) PMECC End Address Register */
#define REG_SMC_HSMC_PMECCTRL   (0xF8014084) /**< (SMC) PMECC Control Register */
#define REG_SMC_HSMC_PMECCSR    (0xF8014088) /**< (SMC) PMECC Status Register */
#define REG_SMC_HSMC_PMECCIER   (0xF801408C) /**< (SMC) PMECC Interrupt Enable register */
#define REG_SMC_HSMC_PMECCIDR   (0xF8014090) /**< (SMC) PMECC Interrupt Disable Register */
#define REG_SMC_HSMC_PMECCIMR   (0xF8014094) /**< (SMC) PMECC Interrupt Mask Register */
#define REG_SMC_HSMC_PMECCISR   (0xF8014098) /**< (SMC) PMECC Interrupt Status Register */
#define REG_SMC_HSMC_ELCFG      (0xF8014500) /**< (SMC) PMECC Error Location Configuration Register */
#define REG_SMC_HSMC_ELPRIM     (0xF8014504) /**< (SMC) PMECC Error Location Primitive Register */
#define REG_SMC_HSMC_ELEN       (0xF8014508) /**< (SMC) PMECC Error Location Enable Register */
#define REG_SMC_HSMC_ELDIS      (0xF801450C) /**< (SMC) PMECC Error Location Disable Register */
#define REG_SMC_HSMC_ELSR       (0xF8014510) /**< (SMC) PMECC Error Location Status Register */
#define REG_SMC_HSMC_ELIER      (0xF8014514) /**< (SMC) PMECC Error Location Interrupt Enable register */
#define REG_SMC_HSMC_ELIDR      (0xF8014518) /**< (SMC) PMECC Error Location Interrupt Disable Register */
#define REG_SMC_HSMC_ELIMR      (0xF801451C) /**< (SMC) PMECC Error Location Interrupt Mask Register */
#define REG_SMC_HSMC_ELISR      (0xF8014520) /**< (SMC) PMECC Error Location Interrupt Status Register */
#define REG_SMC_HSMC_SIGMA0     (0xF8014528) /**< (SMC) PMECC Error Location SIGMA 0 Register */
#define REG_SMC_HSMC_SIGMA1     (0xF801452C) /**< (SMC) PMECC Error Location SIGMA 1 Register */
#define REG_SMC_HSMC_SIGMA2     (0xF8014530) /**< (SMC) PMECC Error Location SIGMA 2 Register */
#define REG_SMC_HSMC_SIGMA3     (0xF8014534) /**< (SMC) PMECC Error Location SIGMA 3 Register */
#define REG_SMC_HSMC_SIGMA4     (0xF8014538) /**< (SMC) PMECC Error Location SIGMA 4 Register */
#define REG_SMC_HSMC_SIGMA5     (0xF801453C) /**< (SMC) PMECC Error Location SIGMA 5 Register */
#define REG_SMC_HSMC_SIGMA6     (0xF8014540) /**< (SMC) PMECC Error Location SIGMA 6 Register */
#define REG_SMC_HSMC_SIGMA7     (0xF8014544) /**< (SMC) PMECC Error Location SIGMA 7 Register */
#define REG_SMC_HSMC_SIGMA8     (0xF8014548) /**< (SMC) PMECC Error Location SIGMA 8 Register */
#define REG_SMC_HSMC_SIGMA9     (0xF801454C) /**< (SMC) PMECC Error Location SIGMA 9 Register */
#define REG_SMC_HSMC_SIGMA10    (0xF8014550) /**< (SMC) PMECC Error Location SIGMA 10 Register */
#define REG_SMC_HSMC_SIGMA11    (0xF8014554) /**< (SMC) PMECC Error Location SIGMA 11 Register */
#define REG_SMC_HSMC_SIGMA12    (0xF8014558) /**< (SMC) PMECC Error Location SIGMA 12 Register */
#define REG_SMC_HSMC_SIGMA13    (0xF801455C) /**< (SMC) PMECC Error Location SIGMA 13 Register */
#define REG_SMC_HSMC_SIGMA14    (0xF8014560) /**< (SMC) PMECC Error Location SIGMA 14 Register */
#define REG_SMC_HSMC_SIGMA15    (0xF8014564) /**< (SMC) PMECC Error Location SIGMA 15 Register */
#define REG_SMC_HSMC_SIGMA16    (0xF8014568) /**< (SMC) PMECC Error Location SIGMA 16 Register */
#define REG_SMC_HSMC_SIGMA17    (0xF801456C) /**< (SMC) PMECC Error Location SIGMA 17 Register */
#define REG_SMC_HSMC_SIGMA18    (0xF8014570) /**< (SMC) PMECC Error Location SIGMA 18 Register */
#define REG_SMC_HSMC_SIGMA19    (0xF8014574) /**< (SMC) PMECC Error Location SIGMA 19 Register */
#define REG_SMC_HSMC_SIGMA20    (0xF8014578) /**< (SMC) PMECC Error Location SIGMA 20 Register */
#define REG_SMC_HSMC_SIGMA21    (0xF801457C) /**< (SMC) PMECC Error Location SIGMA 21 Register */
#define REG_SMC_HSMC_SIGMA22    (0xF8014580) /**< (SMC) PMECC Error Location SIGMA 22 Register */
#define REG_SMC_HSMC_SIGMA23    (0xF8014584) /**< (SMC) PMECC Error Location SIGMA 23 Register */
#define REG_SMC_HSMC_SIGMA24    (0xF8014588) /**< (SMC) PMECC Error Location SIGMA 24 Register */
#define REG_SMC_HSMC_SIGMA25    (0xF801458C) /**< (SMC) PMECC Error Location SIGMA 25 Register */
#define REG_SMC_HSMC_SIGMA26    (0xF8014590) /**< (SMC) PMECC Error Location SIGMA 26 Register */
#define REG_SMC_HSMC_SIGMA27    (0xF8014594) /**< (SMC) PMECC Error Location SIGMA 27 Register */
#define REG_SMC_HSMC_SIGMA28    (0xF8014598) /**< (SMC) PMECC Error Location SIGMA 28 Register */
#define REG_SMC_HSMC_SIGMA29    (0xF801459C) /**< (SMC) PMECC Error Location SIGMA 29 Register */
#define REG_SMC_HSMC_SIGMA30    (0xF80145A0) /**< (SMC) PMECC Error Location SIGMA 30 Register */
#define REG_SMC_HSMC_SIGMA31    (0xF80145A4) /**< (SMC) PMECC Error Location SIGMA 31 Register */
#define REG_SMC_HSMC_SIGMA32    (0xF80145A8) /**< (SMC) PMECC Error Location SIGMA 32 Register */
#define REG_SMC_HSMC_ERRLOC     (0xF80145AC) /**< (SMC) PMECC Error Location 0 Register */
#define REG_SMC_HSMC_ERRLOC0    (0xF80145AC) /**< (SMC) PMECC Error Location 0 Register 0 */
#define REG_SMC_HSMC_ERRLOC1    (0xF80145B0) /**< (SMC) PMECC Error Location 0 Register 1 */
#define REG_SMC_HSMC_ERRLOC2    (0xF80145B4) /**< (SMC) PMECC Error Location 0 Register 2 */
#define REG_SMC_HSMC_ERRLOC3    (0xF80145B8) /**< (SMC) PMECC Error Location 0 Register 3 */
#define REG_SMC_HSMC_ERRLOC4    (0xF80145BC) /**< (SMC) PMECC Error Location 0 Register 4 */
#define REG_SMC_HSMC_ERRLOC5    (0xF80145C0) /**< (SMC) PMECC Error Location 0 Register 5 */
#define REG_SMC_HSMC_ERRLOC6    (0xF80145C4) /**< (SMC) PMECC Error Location 0 Register 6 */
#define REG_SMC_HSMC_ERRLOC7    (0xF80145C8) /**< (SMC) PMECC Error Location 0 Register 7 */
#define REG_SMC_HSMC_ERRLOC8    (0xF80145CC) /**< (SMC) PMECC Error Location 0 Register 8 */
#define REG_SMC_HSMC_ERRLOC9    (0xF80145D0) /**< (SMC) PMECC Error Location 0 Register 9 */
#define REG_SMC_HSMC_ERRLOC10   (0xF80145D4) /**< (SMC) PMECC Error Location 0 Register 10 */
#define REG_SMC_HSMC_ERRLOC11   (0xF80145D8) /**< (SMC) PMECC Error Location 0 Register 11 */
#define REG_SMC_HSMC_ERRLOC12   (0xF80145DC) /**< (SMC) PMECC Error Location 0 Register 12 */
#define REG_SMC_HSMC_ERRLOC13   (0xF80145E0) /**< (SMC) PMECC Error Location 0 Register 13 */
#define REG_SMC_HSMC_ERRLOC14   (0xF80145E4) /**< (SMC) PMECC Error Location 0 Register 14 */
#define REG_SMC_HSMC_ERRLOC15   (0xF80145E8) /**< (SMC) PMECC Error Location 0 Register 15 */
#define REG_SMC_HSMC_ERRLOC16   (0xF80145EC) /**< (SMC) PMECC Error Location 0 Register 16 */
#define REG_SMC_HSMC_ERRLOC17   (0xF80145F0) /**< (SMC) PMECC Error Location 0 Register 17 */
#define REG_SMC_HSMC_ERRLOC18   (0xF80145F4) /**< (SMC) PMECC Error Location 0 Register 18 */
#define REG_SMC_HSMC_ERRLOC19   (0xF80145F8) /**< (SMC) PMECC Error Location 0 Register 19 */
#define REG_SMC_HSMC_ERRLOC20   (0xF80145FC) /**< (SMC) PMECC Error Location 0 Register 20 */
#define REG_SMC_HSMC_ERRLOC21   (0xF8014600) /**< (SMC) PMECC Error Location 0 Register 21 */
#define REG_SMC_HSMC_ERRLOC22   (0xF8014604) /**< (SMC) PMECC Error Location 0 Register 22 */
#define REG_SMC_HSMC_ERRLOC23   (0xF8014608) /**< (SMC) PMECC Error Location 0 Register 23 */
#define REG_SMC_HSMC_ERRLOC24   (0xF801460C) /**< (SMC) PMECC Error Location 0 Register 24 */
#define REG_SMC_HSMC_ERRLOC25   (0xF8014610) /**< (SMC) PMECC Error Location 0 Register 25 */
#define REG_SMC_HSMC_ERRLOC26   (0xF8014614) /**< (SMC) PMECC Error Location 0 Register 26 */
#define REG_SMC_HSMC_ERRLOC27   (0xF8014618) /**< (SMC) PMECC Error Location 0 Register 27 */
#define REG_SMC_HSMC_ERRLOC28   (0xF801461C) /**< (SMC) PMECC Error Location 0 Register 28 */
#define REG_SMC_HSMC_ERRLOC29   (0xF8014620) /**< (SMC) PMECC Error Location 0 Register 29 */
#define REG_SMC_HSMC_ERRLOC30   (0xF8014624) /**< (SMC) PMECC Error Location 0 Register 30 */
#define REG_SMC_HSMC_ERRLOC31   (0xF8014628) /**< (SMC) PMECC Error Location 0 Register 31 */
#define REG_SMC_HSMC_OCMS       (0xF80147A0) /**< (SMC) Off Chip Memory Scrambling Register */
#define REG_SMC_HSMC_KEY1       (0xF80147A4) /**< (SMC) Off Chip Memory Scrambling KEY1 Register */
#define REG_SMC_HSMC_KEY2       (0xF80147A8) /**< (SMC) Off Chip Memory Scrambling KEY2 Register */
#define REG_SMC_HSMC_WPMR       (0xF80147E4) /**< (SMC) Write Protection Mode Register */
#define REG_SMC_HSMC_WPSR       (0xF80147E8) /**< (SMC) Write Protection Status Register */

#else

#define REG_SMC_HSMC_PMECC0     (*(__I  uint32_t*)0xF80140B0U) /**< (SMC) PMECC Redundancy 0 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_PMECC1     (*(__I  uint32_t*)0xF80140F0U) /**< (SMC) PMECC Redundancy 0 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_PMECC2     (*(__I  uint32_t*)0xF8014130U) /**< (SMC) PMECC Redundancy 0 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_PMECC3     (*(__I  uint32_t*)0xF8014170U) /**< (SMC) PMECC Redundancy 0 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_PMECC4     (*(__I  uint32_t*)0xF80141B0U) /**< (SMC) PMECC Redundancy 0 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_PMECC5     (*(__I  uint32_t*)0xF80141F0U) /**< (SMC) PMECC Redundancy 0 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_PMECC6     (*(__I  uint32_t*)0xF8014230U) /**< (SMC) PMECC Redundancy 0 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_PMECC7     (*(__I  uint32_t*)0xF8014270U) /**< (SMC) PMECC Redundancy 0 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM0_0     (*(__I  uint32_t*)0xF80142B0U) /**< (SMC) PMECC Remainder 0 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM1_0     (*(__I  uint32_t*)0xF80142B4U) /**< (SMC) PMECC Remainder 1 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM2_0     (*(__I  uint32_t*)0xF80142B8U) /**< (SMC) PMECC Remainder 2 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM3_0     (*(__I  uint32_t*)0xF80142BCU) /**< (SMC) PMECC Remainder 3 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM4_0     (*(__I  uint32_t*)0xF80142C0U) /**< (SMC) PMECC Remainder 4 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM5_0     (*(__I  uint32_t*)0xF80142C4U) /**< (SMC) PMECC Remainder 5 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM6_0     (*(__I  uint32_t*)0xF80142C8U) /**< (SMC) PMECC Remainder 6 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM7_0     (*(__I  uint32_t*)0xF80142CCU) /**< (SMC) PMECC Remainder 7 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM8_0     (*(__I  uint32_t*)0xF80142D0U) /**< (SMC) PMECC Remainder 8 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM9_0     (*(__I  uint32_t*)0xF80142D4U) /**< (SMC) PMECC Remainder 9 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM10_0    (*(__I  uint32_t*)0xF80142D8U) /**< (SMC) PMECC Remainder 10 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM11_0    (*(__I  uint32_t*)0xF80142DCU) /**< (SMC) PMECC Remainder 11 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM12_0    (*(__I  uint32_t*)0xF80142E0U) /**< (SMC) PMECC Remainder 12 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM13_0    (*(__I  uint32_t*)0xF80142E4U) /**< (SMC) PMECC Remainder 13 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM14_0    (*(__I  uint32_t*)0xF80142E8U) /**< (SMC) PMECC Remainder 14 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM15_0    (*(__I  uint32_t*)0xF80142ECU) /**< (SMC) PMECC Remainder 15 Register (sec_num = 0) 0 */
#define REG_SMC_HSMC_REM0_1     (*(__I  uint32_t*)0xF80142F0U) /**< (SMC) PMECC Remainder 0 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM1_1     (*(__I  uint32_t*)0xF80142F4U) /**< (SMC) PMECC Remainder 1 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM2_1     (*(__I  uint32_t*)0xF80142F8U) /**< (SMC) PMECC Remainder 2 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM3_1     (*(__I  uint32_t*)0xF80142FCU) /**< (SMC) PMECC Remainder 3 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM4_1     (*(__I  uint32_t*)0xF8014300U) /**< (SMC) PMECC Remainder 4 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM5_1     (*(__I  uint32_t*)0xF8014304U) /**< (SMC) PMECC Remainder 5 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM6_1     (*(__I  uint32_t*)0xF8014308U) /**< (SMC) PMECC Remainder 6 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM7_1     (*(__I  uint32_t*)0xF801430CU) /**< (SMC) PMECC Remainder 7 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM8_1     (*(__I  uint32_t*)0xF8014310U) /**< (SMC) PMECC Remainder 8 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM9_1     (*(__I  uint32_t*)0xF8014314U) /**< (SMC) PMECC Remainder 9 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM10_1    (*(__I  uint32_t*)0xF8014318U) /**< (SMC) PMECC Remainder 10 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM11_1    (*(__I  uint32_t*)0xF801431CU) /**< (SMC) PMECC Remainder 11 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM12_1    (*(__I  uint32_t*)0xF8014320U) /**< (SMC) PMECC Remainder 12 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM13_1    (*(__I  uint32_t*)0xF8014324U) /**< (SMC) PMECC Remainder 13 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM14_1    (*(__I  uint32_t*)0xF8014328U) /**< (SMC) PMECC Remainder 14 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM15_1    (*(__I  uint32_t*)0xF801432CU) /**< (SMC) PMECC Remainder 15 Register (sec_num = 0) 1 */
#define REG_SMC_HSMC_REM0_2     (*(__I  uint32_t*)0xF8014330U) /**< (SMC) PMECC Remainder 0 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM1_2     (*(__I  uint32_t*)0xF8014334U) /**< (SMC) PMECC Remainder 1 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM2_2     (*(__I  uint32_t*)0xF8014338U) /**< (SMC) PMECC Remainder 2 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM3_2     (*(__I  uint32_t*)0xF801433CU) /**< (SMC) PMECC Remainder 3 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM4_2     (*(__I  uint32_t*)0xF8014340U) /**< (SMC) PMECC Remainder 4 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM5_2     (*(__I  uint32_t*)0xF8014344U) /**< (SMC) PMECC Remainder 5 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM6_2     (*(__I  uint32_t*)0xF8014348U) /**< (SMC) PMECC Remainder 6 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM7_2     (*(__I  uint32_t*)0xF801434CU) /**< (SMC) PMECC Remainder 7 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM8_2     (*(__I  uint32_t*)0xF8014350U) /**< (SMC) PMECC Remainder 8 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM9_2     (*(__I  uint32_t*)0xF8014354U) /**< (SMC) PMECC Remainder 9 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM10_2    (*(__I  uint32_t*)0xF8014358U) /**< (SMC) PMECC Remainder 10 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM11_2    (*(__I  uint32_t*)0xF801435CU) /**< (SMC) PMECC Remainder 11 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM12_2    (*(__I  uint32_t*)0xF8014360U) /**< (SMC) PMECC Remainder 12 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM13_2    (*(__I  uint32_t*)0xF8014364U) /**< (SMC) PMECC Remainder 13 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM14_2    (*(__I  uint32_t*)0xF8014368U) /**< (SMC) PMECC Remainder 14 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM15_2    (*(__I  uint32_t*)0xF801436CU) /**< (SMC) PMECC Remainder 15 Register (sec_num = 0) 2 */
#define REG_SMC_HSMC_REM0_3     (*(__I  uint32_t*)0xF8014370U) /**< (SMC) PMECC Remainder 0 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM1_3     (*(__I  uint32_t*)0xF8014374U) /**< (SMC) PMECC Remainder 1 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM2_3     (*(__I  uint32_t*)0xF8014378U) /**< (SMC) PMECC Remainder 2 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM3_3     (*(__I  uint32_t*)0xF801437CU) /**< (SMC) PMECC Remainder 3 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM4_3     (*(__I  uint32_t*)0xF8014380U) /**< (SMC) PMECC Remainder 4 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM5_3     (*(__I  uint32_t*)0xF8014384U) /**< (SMC) PMECC Remainder 5 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM6_3     (*(__I  uint32_t*)0xF8014388U) /**< (SMC) PMECC Remainder 6 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM7_3     (*(__I  uint32_t*)0xF801438CU) /**< (SMC) PMECC Remainder 7 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM8_3     (*(__I  uint32_t*)0xF8014390U) /**< (SMC) PMECC Remainder 8 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM9_3     (*(__I  uint32_t*)0xF8014394U) /**< (SMC) PMECC Remainder 9 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM10_3    (*(__I  uint32_t*)0xF8014398U) /**< (SMC) PMECC Remainder 10 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM11_3    (*(__I  uint32_t*)0xF801439CU) /**< (SMC) PMECC Remainder 11 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM12_3    (*(__I  uint32_t*)0xF80143A0U) /**< (SMC) PMECC Remainder 12 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM13_3    (*(__I  uint32_t*)0xF80143A4U) /**< (SMC) PMECC Remainder 13 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM14_3    (*(__I  uint32_t*)0xF80143A8U) /**< (SMC) PMECC Remainder 14 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM15_3    (*(__I  uint32_t*)0xF80143ACU) /**< (SMC) PMECC Remainder 15 Register (sec_num = 0) 3 */
#define REG_SMC_HSMC_REM0_4     (*(__I  uint32_t*)0xF80143B0U) /**< (SMC) PMECC Remainder 0 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM1_4     (*(__I  uint32_t*)0xF80143B4U) /**< (SMC) PMECC Remainder 1 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM2_4     (*(__I  uint32_t*)0xF80143B8U) /**< (SMC) PMECC Remainder 2 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM3_4     (*(__I  uint32_t*)0xF80143BCU) /**< (SMC) PMECC Remainder 3 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM4_4     (*(__I  uint32_t*)0xF80143C0U) /**< (SMC) PMECC Remainder 4 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM5_4     (*(__I  uint32_t*)0xF80143C4U) /**< (SMC) PMECC Remainder 5 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM6_4     (*(__I  uint32_t*)0xF80143C8U) /**< (SMC) PMECC Remainder 6 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM7_4     (*(__I  uint32_t*)0xF80143CCU) /**< (SMC) PMECC Remainder 7 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM8_4     (*(__I  uint32_t*)0xF80143D0U) /**< (SMC) PMECC Remainder 8 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM9_4     (*(__I  uint32_t*)0xF80143D4U) /**< (SMC) PMECC Remainder 9 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM10_4    (*(__I  uint32_t*)0xF80143D8U) /**< (SMC) PMECC Remainder 10 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM11_4    (*(__I  uint32_t*)0xF80143DCU) /**< (SMC) PMECC Remainder 11 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM12_4    (*(__I  uint32_t*)0xF80143E0U) /**< (SMC) PMECC Remainder 12 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM13_4    (*(__I  uint32_t*)0xF80143E4U) /**< (SMC) PMECC Remainder 13 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM14_4    (*(__I  uint32_t*)0xF80143E8U) /**< (SMC) PMECC Remainder 14 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM15_4    (*(__I  uint32_t*)0xF80143ECU) /**< (SMC) PMECC Remainder 15 Register (sec_num = 0) 4 */
#define REG_SMC_HSMC_REM0_5     (*(__I  uint32_t*)0xF80143F0U) /**< (SMC) PMECC Remainder 0 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM1_5     (*(__I  uint32_t*)0xF80143F4U) /**< (SMC) PMECC Remainder 1 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM2_5     (*(__I  uint32_t*)0xF80143F8U) /**< (SMC) PMECC Remainder 2 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM3_5     (*(__I  uint32_t*)0xF80143FCU) /**< (SMC) PMECC Remainder 3 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM4_5     (*(__I  uint32_t*)0xF8014400U) /**< (SMC) PMECC Remainder 4 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM5_5     (*(__I  uint32_t*)0xF8014404U) /**< (SMC) PMECC Remainder 5 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM6_5     (*(__I  uint32_t*)0xF8014408U) /**< (SMC) PMECC Remainder 6 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM7_5     (*(__I  uint32_t*)0xF801440CU) /**< (SMC) PMECC Remainder 7 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM8_5     (*(__I  uint32_t*)0xF8014410U) /**< (SMC) PMECC Remainder 8 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM9_5     (*(__I  uint32_t*)0xF8014414U) /**< (SMC) PMECC Remainder 9 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM10_5    (*(__I  uint32_t*)0xF8014418U) /**< (SMC) PMECC Remainder 10 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM11_5    (*(__I  uint32_t*)0xF801441CU) /**< (SMC) PMECC Remainder 11 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM12_5    (*(__I  uint32_t*)0xF8014420U) /**< (SMC) PMECC Remainder 12 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM13_5    (*(__I  uint32_t*)0xF8014424U) /**< (SMC) PMECC Remainder 13 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM14_5    (*(__I  uint32_t*)0xF8014428U) /**< (SMC) PMECC Remainder 14 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM15_5    (*(__I  uint32_t*)0xF801442CU) /**< (SMC) PMECC Remainder 15 Register (sec_num = 0) 5 */
#define REG_SMC_HSMC_REM0_6     (*(__I  uint32_t*)0xF8014430U) /**< (SMC) PMECC Remainder 0 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM1_6     (*(__I  uint32_t*)0xF8014434U) /**< (SMC) PMECC Remainder 1 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM2_6     (*(__I  uint32_t*)0xF8014438U) /**< (SMC) PMECC Remainder 2 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM3_6     (*(__I  uint32_t*)0xF801443CU) /**< (SMC) PMECC Remainder 3 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM4_6     (*(__I  uint32_t*)0xF8014440U) /**< (SMC) PMECC Remainder 4 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM5_6     (*(__I  uint32_t*)0xF8014444U) /**< (SMC) PMECC Remainder 5 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM6_6     (*(__I  uint32_t*)0xF8014448U) /**< (SMC) PMECC Remainder 6 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM7_6     (*(__I  uint32_t*)0xF801444CU) /**< (SMC) PMECC Remainder 7 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM8_6     (*(__I  uint32_t*)0xF8014450U) /**< (SMC) PMECC Remainder 8 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM9_6     (*(__I  uint32_t*)0xF8014454U) /**< (SMC) PMECC Remainder 9 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM10_6    (*(__I  uint32_t*)0xF8014458U) /**< (SMC) PMECC Remainder 10 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM11_6    (*(__I  uint32_t*)0xF801445CU) /**< (SMC) PMECC Remainder 11 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM12_6    (*(__I  uint32_t*)0xF8014460U) /**< (SMC) PMECC Remainder 12 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM13_6    (*(__I  uint32_t*)0xF8014464U) /**< (SMC) PMECC Remainder 13 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM14_6    (*(__I  uint32_t*)0xF8014468U) /**< (SMC) PMECC Remainder 14 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM15_6    (*(__I  uint32_t*)0xF801446CU) /**< (SMC) PMECC Remainder 15 Register (sec_num = 0) 6 */
#define REG_SMC_HSMC_REM0_7     (*(__I  uint32_t*)0xF8014470U) /**< (SMC) PMECC Remainder 0 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM1_7     (*(__I  uint32_t*)0xF8014474U) /**< (SMC) PMECC Remainder 1 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM2_7     (*(__I  uint32_t*)0xF8014478U) /**< (SMC) PMECC Remainder 2 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM3_7     (*(__I  uint32_t*)0xF801447CU) /**< (SMC) PMECC Remainder 3 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM4_7     (*(__I  uint32_t*)0xF8014480U) /**< (SMC) PMECC Remainder 4 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM5_7     (*(__I  uint32_t*)0xF8014484U) /**< (SMC) PMECC Remainder 5 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM6_7     (*(__I  uint32_t*)0xF8014488U) /**< (SMC) PMECC Remainder 6 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM7_7     (*(__I  uint32_t*)0xF801448CU) /**< (SMC) PMECC Remainder 7 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM8_7     (*(__I  uint32_t*)0xF8014490U) /**< (SMC) PMECC Remainder 8 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM9_7     (*(__I  uint32_t*)0xF8014494U) /**< (SMC) PMECC Remainder 9 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM10_7    (*(__I  uint32_t*)0xF8014498U) /**< (SMC) PMECC Remainder 10 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM11_7    (*(__I  uint32_t*)0xF801449CU) /**< (SMC) PMECC Remainder 11 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM12_7    (*(__I  uint32_t*)0xF80144A0U) /**< (SMC) PMECC Remainder 12 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM13_7    (*(__I  uint32_t*)0xF80144A4U) /**< (SMC) PMECC Remainder 13 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM14_7    (*(__I  uint32_t*)0xF80144A8U) /**< (SMC) PMECC Remainder 14 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_REM15_7    (*(__I  uint32_t*)0xF80144ACU) /**< (SMC) PMECC Remainder 15 Register (sec_num = 0) 7 */
#define REG_SMC_HSMC_SETUP0     (*(__IO uint32_t*)0xF8014700U) /**< (SMC) Setup Register 0 */
#define REG_SMC_HSMC_PULSE0     (*(__IO uint32_t*)0xF8014704U) /**< (SMC) Pulse Register 0 */
#define REG_SMC_HSMC_CYCLE0     (*(__IO uint32_t*)0xF8014708U) /**< (SMC) Cycle Register 0 */
#define REG_SMC_HSMC_TIMINGS0   (*(__IO uint32_t*)0xF801470CU) /**< (SMC) Timings Register 0 */
#define REG_SMC_HSMC_MODE0      (*(__IO uint32_t*)0xF8014710U) /**< (SMC) Mode Register 0 */
#define REG_SMC_HSMC_SETUP1     (*(__IO uint32_t*)0xF8014714U) /**< (SMC) Setup Register 1 */
#define REG_SMC_HSMC_PULSE1     (*(__IO uint32_t*)0xF8014718U) /**< (SMC) Pulse Register 1 */
#define REG_SMC_HSMC_CYCLE1     (*(__IO uint32_t*)0xF801471CU) /**< (SMC) Cycle Register 1 */
#define REG_SMC_HSMC_TIMINGS1   (*(__IO uint32_t*)0xF8014720U) /**< (SMC) Timings Register 1 */
#define REG_SMC_HSMC_MODE1      (*(__IO uint32_t*)0xF8014724U) /**< (SMC) Mode Register 1 */
#define REG_SMC_HSMC_SETUP2     (*(__IO uint32_t*)0xF8014728U) /**< (SMC) Setup Register 2 */
#define REG_SMC_HSMC_PULSE2     (*(__IO uint32_t*)0xF801472CU) /**< (SMC) Pulse Register 2 */
#define REG_SMC_HSMC_CYCLE2     (*(__IO uint32_t*)0xF8014730U) /**< (SMC) Cycle Register 2 */
#define REG_SMC_HSMC_TIMINGS2   (*(__IO uint32_t*)0xF8014734U) /**< (SMC) Timings Register 2 */
#define REG_SMC_HSMC_MODE2      (*(__IO uint32_t*)0xF8014738U) /**< (SMC) Mode Register 2 */
#define REG_SMC_HSMC_SETUP3     (*(__IO uint32_t*)0xF801473CU) /**< (SMC) Setup Register 3 */
#define REG_SMC_HSMC_PULSE3     (*(__IO uint32_t*)0xF8014740U) /**< (SMC) Pulse Register 3 */
#define REG_SMC_HSMC_CYCLE3     (*(__IO uint32_t*)0xF8014744U) /**< (SMC) Cycle Register 3 */
#define REG_SMC_HSMC_TIMINGS3   (*(__IO uint32_t*)0xF8014748U) /**< (SMC) Timings Register 3 */
#define REG_SMC_HSMC_MODE3      (*(__IO uint32_t*)0xF801474CU) /**< (SMC) Mode Register 3 */
#define REG_SMC_HSMC_CFG        (*(__IO uint32_t*)0xF8014000U) /**< (SMC) NFC Configuration Register */
#define REG_SMC_HSMC_CTRL       (*(__O  uint32_t*)0xF8014004U) /**< (SMC) NFC Control Register */
#define REG_SMC_HSMC_SR         (*(__I  uint32_t*)0xF8014008U) /**< (SMC) NFC Status Register */
#define REG_SMC_HSMC_IER        (*(__O  uint32_t*)0xF801400CU) /**< (SMC) NFC Interrupt Enable Register */
#define REG_SMC_HSMC_IDR        (*(__O  uint32_t*)0xF8014010U) /**< (SMC) NFC Interrupt Disable Register */
#define REG_SMC_HSMC_IMR        (*(__I  uint32_t*)0xF8014014U) /**< (SMC) NFC Interrupt Mask Register */
#define REG_SMC_HSMC_ADDR       (*(__IO uint32_t*)0xF8014018U) /**< (SMC) NFC Address Cycle Zero Register */
#define REG_SMC_HSMC_BANK       (*(__IO uint32_t*)0xF801401CU) /**< (SMC) Bank Address Register */
#define REG_SMC_HSMC_PMECCFG    (*(__IO uint32_t*)0xF8014070U) /**< (SMC) PMECC Configuration Register */
#define REG_SMC_HSMC_PMECCSAREA (*(__IO uint32_t*)0xF8014074U) /**< (SMC) PMECC Spare Area Size Register */
#define REG_SMC_HSMC_PMECCSADDR (*(__IO uint32_t*)0xF8014078U) /**< (SMC) PMECC Start Address Register */
#define REG_SMC_HSMC_PMECCEADDR (*(__IO uint32_t*)0xF801407CU) /**< (SMC) PMECC End Address Register */
#define REG_SMC_HSMC_PMECCTRL   (*(__O  uint32_t*)0xF8014084U) /**< (SMC) PMECC Control Register */
#define REG_SMC_HSMC_PMECCSR    (*(__I  uint32_t*)0xF8014088U) /**< (SMC) PMECC Status Register */
#define REG_SMC_HSMC_PMECCIER   (*(__O  uint32_t*)0xF801408CU) /**< (SMC) PMECC Interrupt Enable register */
#define REG_SMC_HSMC_PMECCIDR   (*(__O  uint32_t*)0xF8014090U) /**< (SMC) PMECC Interrupt Disable Register */
#define REG_SMC_HSMC_PMECCIMR   (*(__I  uint32_t*)0xF8014094U) /**< (SMC) PMECC Interrupt Mask Register */
#define REG_SMC_HSMC_PMECCISR   (*(__I  uint32_t*)0xF8014098U) /**< (SMC) PMECC Interrupt Status Register */
#define REG_SMC_HSMC_ELCFG      (*(__IO uint32_t*)0xF8014500U) /**< (SMC) PMECC Error Location Configuration Register */
#define REG_SMC_HSMC_ELPRIM     (*(__I  uint32_t*)0xF8014504U) /**< (SMC) PMECC Error Location Primitive Register */
#define REG_SMC_HSMC_ELEN       (*(__O  uint32_t*)0xF8014508U) /**< (SMC) PMECC Error Location Enable Register */
#define REG_SMC_HSMC_ELDIS      (*(__O  uint32_t*)0xF801450CU) /**< (SMC) PMECC Error Location Disable Register */
#define REG_SMC_HSMC_ELSR       (*(__I  uint32_t*)0xF8014510U) /**< (SMC) PMECC Error Location Status Register */
#define REG_SMC_HSMC_ELIER      (*(__O  uint32_t*)0xF8014514U) /**< (SMC) PMECC Error Location Interrupt Enable register */
#define REG_SMC_HSMC_ELIDR      (*(__O  uint32_t*)0xF8014518U) /**< (SMC) PMECC Error Location Interrupt Disable Register */
#define REG_SMC_HSMC_ELIMR      (*(__I  uint32_t*)0xF801451CU) /**< (SMC) PMECC Error Location Interrupt Mask Register */
#define REG_SMC_HSMC_ELISR      (*(__I  uint32_t*)0xF8014520U) /**< (SMC) PMECC Error Location Interrupt Status Register */
#define REG_SMC_HSMC_SIGMA0     (*(__I  uint32_t*)0xF8014528U) /**< (SMC) PMECC Error Location SIGMA 0 Register */
#define REG_SMC_HSMC_SIGMA1     (*(__IO uint32_t*)0xF801452CU) /**< (SMC) PMECC Error Location SIGMA 1 Register */
#define REG_SMC_HSMC_SIGMA2     (*(__IO uint32_t*)0xF8014530U) /**< (SMC) PMECC Error Location SIGMA 2 Register */
#define REG_SMC_HSMC_SIGMA3     (*(__IO uint32_t*)0xF8014534U) /**< (SMC) PMECC Error Location SIGMA 3 Register */
#define REG_SMC_HSMC_SIGMA4     (*(__IO uint32_t*)0xF8014538U) /**< (SMC) PMECC Error Location SIGMA 4 Register */
#define REG_SMC_HSMC_SIGMA5     (*(__IO uint32_t*)0xF801453CU) /**< (SMC) PMECC Error Location SIGMA 5 Register */
#define REG_SMC_HSMC_SIGMA6     (*(__IO uint32_t*)0xF8014540U) /**< (SMC) PMECC Error Location SIGMA 6 Register */
#define REG_SMC_HSMC_SIGMA7     (*(__IO uint32_t*)0xF8014544U) /**< (SMC) PMECC Error Location SIGMA 7 Register */
#define REG_SMC_HSMC_SIGMA8     (*(__IO uint32_t*)0xF8014548U) /**< (SMC) PMECC Error Location SIGMA 8 Register */
#define REG_SMC_HSMC_SIGMA9     (*(__IO uint32_t*)0xF801454CU) /**< (SMC) PMECC Error Location SIGMA 9 Register */
#define REG_SMC_HSMC_SIGMA10    (*(__IO uint32_t*)0xF8014550U) /**< (SMC) PMECC Error Location SIGMA 10 Register */
#define REG_SMC_HSMC_SIGMA11    (*(__IO uint32_t*)0xF8014554U) /**< (SMC) PMECC Error Location SIGMA 11 Register */
#define REG_SMC_HSMC_SIGMA12    (*(__IO uint32_t*)0xF8014558U) /**< (SMC) PMECC Error Location SIGMA 12 Register */
#define REG_SMC_HSMC_SIGMA13    (*(__IO uint32_t*)0xF801455CU) /**< (SMC) PMECC Error Location SIGMA 13 Register */
#define REG_SMC_HSMC_SIGMA14    (*(__IO uint32_t*)0xF8014560U) /**< (SMC) PMECC Error Location SIGMA 14 Register */
#define REG_SMC_HSMC_SIGMA15    (*(__IO uint32_t*)0xF8014564U) /**< (SMC) PMECC Error Location SIGMA 15 Register */
#define REG_SMC_HSMC_SIGMA16    (*(__IO uint32_t*)0xF8014568U) /**< (SMC) PMECC Error Location SIGMA 16 Register */
#define REG_SMC_HSMC_SIGMA17    (*(__IO uint32_t*)0xF801456CU) /**< (SMC) PMECC Error Location SIGMA 17 Register */
#define REG_SMC_HSMC_SIGMA18    (*(__IO uint32_t*)0xF8014570U) /**< (SMC) PMECC Error Location SIGMA 18 Register */
#define REG_SMC_HSMC_SIGMA19    (*(__IO uint32_t*)0xF8014574U) /**< (SMC) PMECC Error Location SIGMA 19 Register */
#define REG_SMC_HSMC_SIGMA20    (*(__IO uint32_t*)0xF8014578U) /**< (SMC) PMECC Error Location SIGMA 20 Register */
#define REG_SMC_HSMC_SIGMA21    (*(__IO uint32_t*)0xF801457CU) /**< (SMC) PMECC Error Location SIGMA 21 Register */
#define REG_SMC_HSMC_SIGMA22    (*(__IO uint32_t*)0xF8014580U) /**< (SMC) PMECC Error Location SIGMA 22 Register */
#define REG_SMC_HSMC_SIGMA23    (*(__IO uint32_t*)0xF8014584U) /**< (SMC) PMECC Error Location SIGMA 23 Register */
#define REG_SMC_HSMC_SIGMA24    (*(__IO uint32_t*)0xF8014588U) /**< (SMC) PMECC Error Location SIGMA 24 Register */
#define REG_SMC_HSMC_SIGMA25    (*(__IO uint32_t*)0xF801458CU) /**< (SMC) PMECC Error Location SIGMA 25 Register */
#define REG_SMC_HSMC_SIGMA26    (*(__IO uint32_t*)0xF8014590U) /**< (SMC) PMECC Error Location SIGMA 26 Register */
#define REG_SMC_HSMC_SIGMA27    (*(__IO uint32_t*)0xF8014594U) /**< (SMC) PMECC Error Location SIGMA 27 Register */
#define REG_SMC_HSMC_SIGMA28    (*(__IO uint32_t*)0xF8014598U) /**< (SMC) PMECC Error Location SIGMA 28 Register */
#define REG_SMC_HSMC_SIGMA29    (*(__IO uint32_t*)0xF801459CU) /**< (SMC) PMECC Error Location SIGMA 29 Register */
#define REG_SMC_HSMC_SIGMA30    (*(__IO uint32_t*)0xF80145A0U) /**< (SMC) PMECC Error Location SIGMA 30 Register */
#define REG_SMC_HSMC_SIGMA31    (*(__IO uint32_t*)0xF80145A4U) /**< (SMC) PMECC Error Location SIGMA 31 Register */
#define REG_SMC_HSMC_SIGMA32    (*(__IO uint32_t*)0xF80145A8U) /**< (SMC) PMECC Error Location SIGMA 32 Register */
#define REG_SMC_HSMC_ERRLOC     (*(__I  uint32_t*)0xF80145ACU) /**< (SMC) PMECC Error Location 0 Register */
#define REG_SMC_HSMC_ERRLOC0    (*(__I  uint32_t*)0xF80145ACU) /**< (SMC) PMECC Error Location 0 Register 0 */
#define REG_SMC_HSMC_ERRLOC1    (*(__I  uint32_t*)0xF80145B0U) /**< (SMC) PMECC Error Location 0 Register 1 */
#define REG_SMC_HSMC_ERRLOC2    (*(__I  uint32_t*)0xF80145B4U) /**< (SMC) PMECC Error Location 0 Register 2 */
#define REG_SMC_HSMC_ERRLOC3    (*(__I  uint32_t*)0xF80145B8U) /**< (SMC) PMECC Error Location 0 Register 3 */
#define REG_SMC_HSMC_ERRLOC4    (*(__I  uint32_t*)0xF80145BCU) /**< (SMC) PMECC Error Location 0 Register 4 */
#define REG_SMC_HSMC_ERRLOC5    (*(__I  uint32_t*)0xF80145C0U) /**< (SMC) PMECC Error Location 0 Register 5 */
#define REG_SMC_HSMC_ERRLOC6    (*(__I  uint32_t*)0xF80145C4U) /**< (SMC) PMECC Error Location 0 Register 6 */
#define REG_SMC_HSMC_ERRLOC7    (*(__I  uint32_t*)0xF80145C8U) /**< (SMC) PMECC Error Location 0 Register 7 */
#define REG_SMC_HSMC_ERRLOC8    (*(__I  uint32_t*)0xF80145CCU) /**< (SMC) PMECC Error Location 0 Register 8 */
#define REG_SMC_HSMC_ERRLOC9    (*(__I  uint32_t*)0xF80145D0U) /**< (SMC) PMECC Error Location 0 Register 9 */
#define REG_SMC_HSMC_ERRLOC10   (*(__I  uint32_t*)0xF80145D4U) /**< (SMC) PMECC Error Location 0 Register 10 */
#define REG_SMC_HSMC_ERRLOC11   (*(__I  uint32_t*)0xF80145D8U) /**< (SMC) PMECC Error Location 0 Register 11 */
#define REG_SMC_HSMC_ERRLOC12   (*(__I  uint32_t*)0xF80145DCU) /**< (SMC) PMECC Error Location 0 Register 12 */
#define REG_SMC_HSMC_ERRLOC13   (*(__I  uint32_t*)0xF80145E0U) /**< (SMC) PMECC Error Location 0 Register 13 */
#define REG_SMC_HSMC_ERRLOC14   (*(__I  uint32_t*)0xF80145E4U) /**< (SMC) PMECC Error Location 0 Register 14 */
#define REG_SMC_HSMC_ERRLOC15   (*(__I  uint32_t*)0xF80145E8U) /**< (SMC) PMECC Error Location 0 Register 15 */
#define REG_SMC_HSMC_ERRLOC16   (*(__I  uint32_t*)0xF80145ECU) /**< (SMC) PMECC Error Location 0 Register 16 */
#define REG_SMC_HSMC_ERRLOC17   (*(__I  uint32_t*)0xF80145F0U) /**< (SMC) PMECC Error Location 0 Register 17 */
#define REG_SMC_HSMC_ERRLOC18   (*(__I  uint32_t*)0xF80145F4U) /**< (SMC) PMECC Error Location 0 Register 18 */
#define REG_SMC_HSMC_ERRLOC19   (*(__I  uint32_t*)0xF80145F8U) /**< (SMC) PMECC Error Location 0 Register 19 */
#define REG_SMC_HSMC_ERRLOC20   (*(__I  uint32_t*)0xF80145FCU) /**< (SMC) PMECC Error Location 0 Register 20 */
#define REG_SMC_HSMC_ERRLOC21   (*(__I  uint32_t*)0xF8014600U) /**< (SMC) PMECC Error Location 0 Register 21 */
#define REG_SMC_HSMC_ERRLOC22   (*(__I  uint32_t*)0xF8014604U) /**< (SMC) PMECC Error Location 0 Register 22 */
#define REG_SMC_HSMC_ERRLOC23   (*(__I  uint32_t*)0xF8014608U) /**< (SMC) PMECC Error Location 0 Register 23 */
#define REG_SMC_HSMC_ERRLOC24   (*(__I  uint32_t*)0xF801460CU) /**< (SMC) PMECC Error Location 0 Register 24 */
#define REG_SMC_HSMC_ERRLOC25   (*(__I  uint32_t*)0xF8014610U) /**< (SMC) PMECC Error Location 0 Register 25 */
#define REG_SMC_HSMC_ERRLOC26   (*(__I  uint32_t*)0xF8014614U) /**< (SMC) PMECC Error Location 0 Register 26 */
#define REG_SMC_HSMC_ERRLOC27   (*(__I  uint32_t*)0xF8014618U) /**< (SMC) PMECC Error Location 0 Register 27 */
#define REG_SMC_HSMC_ERRLOC28   (*(__I  uint32_t*)0xF801461CU) /**< (SMC) PMECC Error Location 0 Register 28 */
#define REG_SMC_HSMC_ERRLOC29   (*(__I  uint32_t*)0xF8014620U) /**< (SMC) PMECC Error Location 0 Register 29 */
#define REG_SMC_HSMC_ERRLOC30   (*(__I  uint32_t*)0xF8014624U) /**< (SMC) PMECC Error Location 0 Register 30 */
#define REG_SMC_HSMC_ERRLOC31   (*(__I  uint32_t*)0xF8014628U) /**< (SMC) PMECC Error Location 0 Register 31 */
#define REG_SMC_HSMC_OCMS       (*(__IO uint32_t*)0xF80147A0U) /**< (SMC) Off Chip Memory Scrambling Register */
#define REG_SMC_HSMC_KEY1       (*(__O  uint32_t*)0xF80147A4U) /**< (SMC) Off Chip Memory Scrambling KEY1 Register */
#define REG_SMC_HSMC_KEY2       (*(__O  uint32_t*)0xF80147A8U) /**< (SMC) Off Chip Memory Scrambling KEY2 Register */
#define REG_SMC_HSMC_WPMR       (*(__IO uint32_t*)0xF80147E4U) /**< (SMC) Write Protection Mode Register */
#define REG_SMC_HSMC_WPSR       (*(__I  uint32_t*)0xF80147E8U) /**< (SMC) Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for SMC peripheral ========== */
#define SMC_INSTANCE_ID                          17         
#define SMC_CLOCK_ID                             17         

#endif /* _SAMA5D2_SMC_INSTANCE_ */
