/**
 * \file
 *
 * \brief Instance description for TC1
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
#ifndef _SAMA5D2_TC1_INSTANCE_H_
#define _SAMA5D2_TC1_INSTANCE_H_

/* ========== Register definition for TC1 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_TC1_CCR0            (0xF8010000) /**< (TC1) Channel Control Register 0 */
#define REG_TC1_CMR0            (0xF8010004) /**< (TC1) Channel Mode Register 0 */
#define REG_TC1_SMMR0           (0xF8010008) /**< (TC1) Stepper Motor Mode Register 0 */
#define REG_TC1_RAB0            (0xF801000C) /**< (TC1) Register AB 0 */
#define REG_TC1_CV0             (0xF8010010) /**< (TC1) Counter Value 0 */
#define REG_TC1_RA0             (0xF8010014) /**< (TC1) Register A 0 */
#define REG_TC1_RB0             (0xF8010018) /**< (TC1) Register B 0 */
#define REG_TC1_RC0             (0xF801001C) /**< (TC1) Register C 0 */
#define REG_TC1_SR0             (0xF8010020) /**< (TC1) Interrupt Status Register 0 */
#define REG_TC1_IER0            (0xF8010024) /**< (TC1) Interrupt Enable Register 0 */
#define REG_TC1_IDR0            (0xF8010028) /**< (TC1) Interrupt Disable Register 0 */
#define REG_TC1_IMR0            (0xF801002C) /**< (TC1) Interrupt Mask Register 0 */
#define REG_TC1_EMR0            (0xF8010030) /**< (TC1) Extended Mode Register 0 */
#define REG_TC1_CCR1            (0xF8010040) /**< (TC1) Channel Control Register 1 */
#define REG_TC1_CMR1            (0xF8010044) /**< (TC1) Channel Mode Register 1 */
#define REG_TC1_SMMR1           (0xF8010048) /**< (TC1) Stepper Motor Mode Register 1 */
#define REG_TC1_RAB1            (0xF801004C) /**< (TC1) Register AB 1 */
#define REG_TC1_CV1             (0xF8010050) /**< (TC1) Counter Value 1 */
#define REG_TC1_RA1             (0xF8010054) /**< (TC1) Register A 1 */
#define REG_TC1_RB1             (0xF8010058) /**< (TC1) Register B 1 */
#define REG_TC1_RC1             (0xF801005C) /**< (TC1) Register C 1 */
#define REG_TC1_SR1             (0xF8010060) /**< (TC1) Interrupt Status Register 1 */
#define REG_TC1_IER1            (0xF8010064) /**< (TC1) Interrupt Enable Register 1 */
#define REG_TC1_IDR1            (0xF8010068) /**< (TC1) Interrupt Disable Register 1 */
#define REG_TC1_IMR1            (0xF801006C) /**< (TC1) Interrupt Mask Register 1 */
#define REG_TC1_EMR1            (0xF8010070) /**< (TC1) Extended Mode Register 1 */
#define REG_TC1_CCR2            (0xF8010080) /**< (TC1) Channel Control Register 2 */
#define REG_TC1_CMR2            (0xF8010084) /**< (TC1) Channel Mode Register 2 */
#define REG_TC1_SMMR2           (0xF8010088) /**< (TC1) Stepper Motor Mode Register 2 */
#define REG_TC1_RAB2            (0xF801008C) /**< (TC1) Register AB 2 */
#define REG_TC1_CV2             (0xF8010090) /**< (TC1) Counter Value 2 */
#define REG_TC1_RA2             (0xF8010094) /**< (TC1) Register A 2 */
#define REG_TC1_RB2             (0xF8010098) /**< (TC1) Register B 2 */
#define REG_TC1_RC2             (0xF801009C) /**< (TC1) Register C 2 */
#define REG_TC1_SR2             (0xF80100A0) /**< (TC1) Interrupt Status Register 2 */
#define REG_TC1_IER2            (0xF80100A4) /**< (TC1) Interrupt Enable Register 2 */
#define REG_TC1_IDR2            (0xF80100A8) /**< (TC1) Interrupt Disable Register 2 */
#define REG_TC1_IMR2            (0xF80100AC) /**< (TC1) Interrupt Mask Register 2 */
#define REG_TC1_EMR2            (0xF80100B0) /**< (TC1) Extended Mode Register 2 */
#define REG_TC1_BCR             (0xF80100C0) /**< (TC1) Block Control Register */
#define REG_TC1_BMR             (0xF80100C4) /**< (TC1) Block Mode Register */
#define REG_TC1_QIER            (0xF80100C8) /**< (TC1) QDEC Interrupt Enable Register */
#define REG_TC1_QIDR            (0xF80100CC) /**< (TC1) QDEC Interrupt Disable Register */
#define REG_TC1_QIMR            (0xF80100D0) /**< (TC1) QDEC Interrupt Mask Register */
#define REG_TC1_QISR            (0xF80100D4) /**< (TC1) QDEC Interrupt Status Register */
#define REG_TC1_FMR             (0xF80100D8) /**< (TC1) Fault Mode Register */
#define REG_TC1_WPMR            (0xF80100E4) /**< (TC1) Write Protection Mode Register */

#else

#define REG_TC1_CCR0            (*(__O  uint32_t*)0xF8010000U) /**< (TC1) Channel Control Register 0 */
#define REG_TC1_CMR0            (*(__IO uint32_t*)0xF8010004U) /**< (TC1) Channel Mode Register 0 */
#define REG_TC1_SMMR0           (*(__IO uint32_t*)0xF8010008U) /**< (TC1) Stepper Motor Mode Register 0 */
#define REG_TC1_RAB0            (*(__I  uint32_t*)0xF801000CU) /**< (TC1) Register AB 0 */
#define REG_TC1_CV0             (*(__I  uint32_t*)0xF8010010U) /**< (TC1) Counter Value 0 */
#define REG_TC1_RA0             (*(__IO uint32_t*)0xF8010014U) /**< (TC1) Register A 0 */
#define REG_TC1_RB0             (*(__IO uint32_t*)0xF8010018U) /**< (TC1) Register B 0 */
#define REG_TC1_RC0             (*(__IO uint32_t*)0xF801001CU) /**< (TC1) Register C 0 */
#define REG_TC1_SR0             (*(__I  uint32_t*)0xF8010020U) /**< (TC1) Interrupt Status Register 0 */
#define REG_TC1_IER0            (*(__O  uint32_t*)0xF8010024U) /**< (TC1) Interrupt Enable Register 0 */
#define REG_TC1_IDR0            (*(__O  uint32_t*)0xF8010028U) /**< (TC1) Interrupt Disable Register 0 */
#define REG_TC1_IMR0            (*(__I  uint32_t*)0xF801002CU) /**< (TC1) Interrupt Mask Register 0 */
#define REG_TC1_EMR0            (*(__IO uint32_t*)0xF8010030U) /**< (TC1) Extended Mode Register 0 */
#define REG_TC1_CCR1            (*(__O  uint32_t*)0xF8010040U) /**< (TC1) Channel Control Register 1 */
#define REG_TC1_CMR1            (*(__IO uint32_t*)0xF8010044U) /**< (TC1) Channel Mode Register 1 */
#define REG_TC1_SMMR1           (*(__IO uint32_t*)0xF8010048U) /**< (TC1) Stepper Motor Mode Register 1 */
#define REG_TC1_RAB1            (*(__I  uint32_t*)0xF801004CU) /**< (TC1) Register AB 1 */
#define REG_TC1_CV1             (*(__I  uint32_t*)0xF8010050U) /**< (TC1) Counter Value 1 */
#define REG_TC1_RA1             (*(__IO uint32_t*)0xF8010054U) /**< (TC1) Register A 1 */
#define REG_TC1_RB1             (*(__IO uint32_t*)0xF8010058U) /**< (TC1) Register B 1 */
#define REG_TC1_RC1             (*(__IO uint32_t*)0xF801005CU) /**< (TC1) Register C 1 */
#define REG_TC1_SR1             (*(__I  uint32_t*)0xF8010060U) /**< (TC1) Interrupt Status Register 1 */
#define REG_TC1_IER1            (*(__O  uint32_t*)0xF8010064U) /**< (TC1) Interrupt Enable Register 1 */
#define REG_TC1_IDR1            (*(__O  uint32_t*)0xF8010068U) /**< (TC1) Interrupt Disable Register 1 */
#define REG_TC1_IMR1            (*(__I  uint32_t*)0xF801006CU) /**< (TC1) Interrupt Mask Register 1 */
#define REG_TC1_EMR1            (*(__IO uint32_t*)0xF8010070U) /**< (TC1) Extended Mode Register 1 */
#define REG_TC1_CCR2            (*(__O  uint32_t*)0xF8010080U) /**< (TC1) Channel Control Register 2 */
#define REG_TC1_CMR2            (*(__IO uint32_t*)0xF8010084U) /**< (TC1) Channel Mode Register 2 */
#define REG_TC1_SMMR2           (*(__IO uint32_t*)0xF8010088U) /**< (TC1) Stepper Motor Mode Register 2 */
#define REG_TC1_RAB2            (*(__I  uint32_t*)0xF801008CU) /**< (TC1) Register AB 2 */
#define REG_TC1_CV2             (*(__I  uint32_t*)0xF8010090U) /**< (TC1) Counter Value 2 */
#define REG_TC1_RA2             (*(__IO uint32_t*)0xF8010094U) /**< (TC1) Register A 2 */
#define REG_TC1_RB2             (*(__IO uint32_t*)0xF8010098U) /**< (TC1) Register B 2 */
#define REG_TC1_RC2             (*(__IO uint32_t*)0xF801009CU) /**< (TC1) Register C 2 */
#define REG_TC1_SR2             (*(__I  uint32_t*)0xF80100A0U) /**< (TC1) Interrupt Status Register 2 */
#define REG_TC1_IER2            (*(__O  uint32_t*)0xF80100A4U) /**< (TC1) Interrupt Enable Register 2 */
#define REG_TC1_IDR2            (*(__O  uint32_t*)0xF80100A8U) /**< (TC1) Interrupt Disable Register 2 */
#define REG_TC1_IMR2            (*(__I  uint32_t*)0xF80100ACU) /**< (TC1) Interrupt Mask Register 2 */
#define REG_TC1_EMR2            (*(__IO uint32_t*)0xF80100B0U) /**< (TC1) Extended Mode Register 2 */
#define REG_TC1_BCR             (*(__O  uint32_t*)0xF80100C0U) /**< (TC1) Block Control Register */
#define REG_TC1_BMR             (*(__IO uint32_t*)0xF80100C4U) /**< (TC1) Block Mode Register */
#define REG_TC1_QIER            (*(__O  uint32_t*)0xF80100C8U) /**< (TC1) QDEC Interrupt Enable Register */
#define REG_TC1_QIDR            (*(__O  uint32_t*)0xF80100CCU) /**< (TC1) QDEC Interrupt Disable Register */
#define REG_TC1_QIMR            (*(__I  uint32_t*)0xF80100D0U) /**< (TC1) QDEC Interrupt Mask Register */
#define REG_TC1_QISR            (*(__I  uint32_t*)0xF80100D4U) /**< (TC1) QDEC Interrupt Status Register */
#define REG_TC1_FMR             (*(__IO uint32_t*)0xF80100D8U) /**< (TC1) Fault Mode Register */
#define REG_TC1_WPMR            (*(__IO uint32_t*)0xF80100E4U) /**< (TC1) Write Protection Mode Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for TC1 peripheral ========== */
#define TC1_INSTANCE_ID                          36         
#define TC1_CLOCK_ID                             36         
#define TC1_DMAC_ID_RX                           46         
#define TC1_TCCLKS_                              0          /* MCK */
#define TC1_TCCLKS_TIMER_CLOCK1                  1          /* GCLK */
#define TC1_TCCLKS_TIMER_CLOCK2                  2          /* MCK/8 */
#define TC1_TCCLKS_TIMER_CLOCK3                  3          /* MCK/32 */
#define TC1_TCCLKS_TIMER_CLOCK4                  4          /* MCK/128 */
#define TC1_TCCLKS_TIMER_CLOCK5                  5          /* SLCK */
#define TC1_TCCLKS_XC0                           6          /* XC0 */
#define TC1_TCCLKS_XC1                           7          /* XC1 */
#define TC1_TCCLKS_XC2                           8          /* XC2 */
#define TC1_NUM_INTERRUPT_LINES                  1          
#define TC1_TIMER_WIDTH                          32         

#endif /* _SAMA5D2_TC1_INSTANCE_ */
