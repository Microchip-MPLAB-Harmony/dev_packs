/**
 * \file
 *
 * \brief Instance description for TC0
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
#ifndef _SAMA5D2_TC0_INSTANCE_H_
#define _SAMA5D2_TC0_INSTANCE_H_

/* ========== Register definition for TC0 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_TC0_CCR0            (0xF800C000) /**< (TC0) Channel Control Register 0 */
#define REG_TC0_CMR0            (0xF800C004) /**< (TC0) Channel Mode Register 0 */
#define REG_TC0_SMMR0           (0xF800C008) /**< (TC0) Stepper Motor Mode Register 0 */
#define REG_TC0_RAB0            (0xF800C00C) /**< (TC0) Register AB 0 */
#define REG_TC0_CV0             (0xF800C010) /**< (TC0) Counter Value 0 */
#define REG_TC0_RA0             (0xF800C014) /**< (TC0) Register A 0 */
#define REG_TC0_RB0             (0xF800C018) /**< (TC0) Register B 0 */
#define REG_TC0_RC0             (0xF800C01C) /**< (TC0) Register C 0 */
#define REG_TC0_SR0             (0xF800C020) /**< (TC0) Interrupt Status Register 0 */
#define REG_TC0_IER0            (0xF800C024) /**< (TC0) Interrupt Enable Register 0 */
#define REG_TC0_IDR0            (0xF800C028) /**< (TC0) Interrupt Disable Register 0 */
#define REG_TC0_IMR0            (0xF800C02C) /**< (TC0) Interrupt Mask Register 0 */
#define REG_TC0_EMR0            (0xF800C030) /**< (TC0) Extended Mode Register 0 */
#define REG_TC0_CCR1            (0xF800C040) /**< (TC0) Channel Control Register 1 */
#define REG_TC0_CMR1            (0xF800C044) /**< (TC0) Channel Mode Register 1 */
#define REG_TC0_SMMR1           (0xF800C048) /**< (TC0) Stepper Motor Mode Register 1 */
#define REG_TC0_RAB1            (0xF800C04C) /**< (TC0) Register AB 1 */
#define REG_TC0_CV1             (0xF800C050) /**< (TC0) Counter Value 1 */
#define REG_TC0_RA1             (0xF800C054) /**< (TC0) Register A 1 */
#define REG_TC0_RB1             (0xF800C058) /**< (TC0) Register B 1 */
#define REG_TC0_RC1             (0xF800C05C) /**< (TC0) Register C 1 */
#define REG_TC0_SR1             (0xF800C060) /**< (TC0) Interrupt Status Register 1 */
#define REG_TC0_IER1            (0xF800C064) /**< (TC0) Interrupt Enable Register 1 */
#define REG_TC0_IDR1            (0xF800C068) /**< (TC0) Interrupt Disable Register 1 */
#define REG_TC0_IMR1            (0xF800C06C) /**< (TC0) Interrupt Mask Register 1 */
#define REG_TC0_EMR1            (0xF800C070) /**< (TC0) Extended Mode Register 1 */
#define REG_TC0_CCR2            (0xF800C080) /**< (TC0) Channel Control Register 2 */
#define REG_TC0_CMR2            (0xF800C084) /**< (TC0) Channel Mode Register 2 */
#define REG_TC0_SMMR2           (0xF800C088) /**< (TC0) Stepper Motor Mode Register 2 */
#define REG_TC0_RAB2            (0xF800C08C) /**< (TC0) Register AB 2 */
#define REG_TC0_CV2             (0xF800C090) /**< (TC0) Counter Value 2 */
#define REG_TC0_RA2             (0xF800C094) /**< (TC0) Register A 2 */
#define REG_TC0_RB2             (0xF800C098) /**< (TC0) Register B 2 */
#define REG_TC0_RC2             (0xF800C09C) /**< (TC0) Register C 2 */
#define REG_TC0_SR2             (0xF800C0A0) /**< (TC0) Interrupt Status Register 2 */
#define REG_TC0_IER2            (0xF800C0A4) /**< (TC0) Interrupt Enable Register 2 */
#define REG_TC0_IDR2            (0xF800C0A8) /**< (TC0) Interrupt Disable Register 2 */
#define REG_TC0_IMR2            (0xF800C0AC) /**< (TC0) Interrupt Mask Register 2 */
#define REG_TC0_EMR2            (0xF800C0B0) /**< (TC0) Extended Mode Register 2 */
#define REG_TC0_BCR             (0xF800C0C0) /**< (TC0) Block Control Register */
#define REG_TC0_BMR             (0xF800C0C4) /**< (TC0) Block Mode Register */
#define REG_TC0_QIER            (0xF800C0C8) /**< (TC0) QDEC Interrupt Enable Register */
#define REG_TC0_QIDR            (0xF800C0CC) /**< (TC0) QDEC Interrupt Disable Register */
#define REG_TC0_QIMR            (0xF800C0D0) /**< (TC0) QDEC Interrupt Mask Register */
#define REG_TC0_QISR            (0xF800C0D4) /**< (TC0) QDEC Interrupt Status Register */
#define REG_TC0_FMR             (0xF800C0D8) /**< (TC0) Fault Mode Register */
#define REG_TC0_WPMR            (0xF800C0E4) /**< (TC0) Write Protection Mode Register */

#else

#define REG_TC0_CCR0            (*(__O  uint32_t*)0xF800C000U) /**< (TC0) Channel Control Register 0 */
#define REG_TC0_CMR0            (*(__IO uint32_t*)0xF800C004U) /**< (TC0) Channel Mode Register 0 */
#define REG_TC0_SMMR0           (*(__IO uint32_t*)0xF800C008U) /**< (TC0) Stepper Motor Mode Register 0 */
#define REG_TC0_RAB0            (*(__I  uint32_t*)0xF800C00CU) /**< (TC0) Register AB 0 */
#define REG_TC0_CV0             (*(__I  uint32_t*)0xF800C010U) /**< (TC0) Counter Value 0 */
#define REG_TC0_RA0             (*(__IO uint32_t*)0xF800C014U) /**< (TC0) Register A 0 */
#define REG_TC0_RB0             (*(__IO uint32_t*)0xF800C018U) /**< (TC0) Register B 0 */
#define REG_TC0_RC0             (*(__IO uint32_t*)0xF800C01CU) /**< (TC0) Register C 0 */
#define REG_TC0_SR0             (*(__I  uint32_t*)0xF800C020U) /**< (TC0) Interrupt Status Register 0 */
#define REG_TC0_IER0            (*(__O  uint32_t*)0xF800C024U) /**< (TC0) Interrupt Enable Register 0 */
#define REG_TC0_IDR0            (*(__O  uint32_t*)0xF800C028U) /**< (TC0) Interrupt Disable Register 0 */
#define REG_TC0_IMR0            (*(__I  uint32_t*)0xF800C02CU) /**< (TC0) Interrupt Mask Register 0 */
#define REG_TC0_EMR0            (*(__IO uint32_t*)0xF800C030U) /**< (TC0) Extended Mode Register 0 */
#define REG_TC0_CCR1            (*(__O  uint32_t*)0xF800C040U) /**< (TC0) Channel Control Register 1 */
#define REG_TC0_CMR1            (*(__IO uint32_t*)0xF800C044U) /**< (TC0) Channel Mode Register 1 */
#define REG_TC0_SMMR1           (*(__IO uint32_t*)0xF800C048U) /**< (TC0) Stepper Motor Mode Register 1 */
#define REG_TC0_RAB1            (*(__I  uint32_t*)0xF800C04CU) /**< (TC0) Register AB 1 */
#define REG_TC0_CV1             (*(__I  uint32_t*)0xF800C050U) /**< (TC0) Counter Value 1 */
#define REG_TC0_RA1             (*(__IO uint32_t*)0xF800C054U) /**< (TC0) Register A 1 */
#define REG_TC0_RB1             (*(__IO uint32_t*)0xF800C058U) /**< (TC0) Register B 1 */
#define REG_TC0_RC1             (*(__IO uint32_t*)0xF800C05CU) /**< (TC0) Register C 1 */
#define REG_TC0_SR1             (*(__I  uint32_t*)0xF800C060U) /**< (TC0) Interrupt Status Register 1 */
#define REG_TC0_IER1            (*(__O  uint32_t*)0xF800C064U) /**< (TC0) Interrupt Enable Register 1 */
#define REG_TC0_IDR1            (*(__O  uint32_t*)0xF800C068U) /**< (TC0) Interrupt Disable Register 1 */
#define REG_TC0_IMR1            (*(__I  uint32_t*)0xF800C06CU) /**< (TC0) Interrupt Mask Register 1 */
#define REG_TC0_EMR1            (*(__IO uint32_t*)0xF800C070U) /**< (TC0) Extended Mode Register 1 */
#define REG_TC0_CCR2            (*(__O  uint32_t*)0xF800C080U) /**< (TC0) Channel Control Register 2 */
#define REG_TC0_CMR2            (*(__IO uint32_t*)0xF800C084U) /**< (TC0) Channel Mode Register 2 */
#define REG_TC0_SMMR2           (*(__IO uint32_t*)0xF800C088U) /**< (TC0) Stepper Motor Mode Register 2 */
#define REG_TC0_RAB2            (*(__I  uint32_t*)0xF800C08CU) /**< (TC0) Register AB 2 */
#define REG_TC0_CV2             (*(__I  uint32_t*)0xF800C090U) /**< (TC0) Counter Value 2 */
#define REG_TC0_RA2             (*(__IO uint32_t*)0xF800C094U) /**< (TC0) Register A 2 */
#define REG_TC0_RB2             (*(__IO uint32_t*)0xF800C098U) /**< (TC0) Register B 2 */
#define REG_TC0_RC2             (*(__IO uint32_t*)0xF800C09CU) /**< (TC0) Register C 2 */
#define REG_TC0_SR2             (*(__I  uint32_t*)0xF800C0A0U) /**< (TC0) Interrupt Status Register 2 */
#define REG_TC0_IER2            (*(__O  uint32_t*)0xF800C0A4U) /**< (TC0) Interrupt Enable Register 2 */
#define REG_TC0_IDR2            (*(__O  uint32_t*)0xF800C0A8U) /**< (TC0) Interrupt Disable Register 2 */
#define REG_TC0_IMR2            (*(__I  uint32_t*)0xF800C0ACU) /**< (TC0) Interrupt Mask Register 2 */
#define REG_TC0_EMR2            (*(__IO uint32_t*)0xF800C0B0U) /**< (TC0) Extended Mode Register 2 */
#define REG_TC0_BCR             (*(__O  uint32_t*)0xF800C0C0U) /**< (TC0) Block Control Register */
#define REG_TC0_BMR             (*(__IO uint32_t*)0xF800C0C4U) /**< (TC0) Block Mode Register */
#define REG_TC0_QIER            (*(__O  uint32_t*)0xF800C0C8U) /**< (TC0) QDEC Interrupt Enable Register */
#define REG_TC0_QIDR            (*(__O  uint32_t*)0xF800C0CCU) /**< (TC0) QDEC Interrupt Disable Register */
#define REG_TC0_QIMR            (*(__I  uint32_t*)0xF800C0D0U) /**< (TC0) QDEC Interrupt Mask Register */
#define REG_TC0_QISR            (*(__I  uint32_t*)0xF800C0D4U) /**< (TC0) QDEC Interrupt Status Register */
#define REG_TC0_FMR             (*(__IO uint32_t*)0xF800C0D8U) /**< (TC0) Fault Mode Register */
#define REG_TC0_WPMR            (*(__IO uint32_t*)0xF800C0E4U) /**< (TC0) Write Protection Mode Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for TC0 peripheral ========== */
#define TC0_INSTANCE_ID                          35         
#define TC0_CLOCK_ID                             35         
#define TC0_DMAC_ID_RX                           45         
#define TC0_TCCLKS_                              0          /* MCK */
#define TC0_TCCLKS_TIMER_CLOCK1                  1          /* GCLK */
#define TC0_TCCLKS_TIMER_CLOCK2                  2          /* MCK/8 */
#define TC0_TCCLKS_TIMER_CLOCK3                  3          /* MCK/32 */
#define TC0_TCCLKS_TIMER_CLOCK4                  4          /* MCK/128 */
#define TC0_TCCLKS_TIMER_CLOCK5                  5          /* SLCK */
#define TC0_TCCLKS_XC0                           6          /* XC0 */
#define TC0_TCCLKS_XC1                           7          /* XC1 */
#define TC0_TCCLKS_XC2                           8          /* XC2 */
#define TC0_NUM_INTERRUPT_LINES                  1          
#define TC0_TIMER_WIDTH                          32         

#endif /* _SAMA5D2_TC0_INSTANCE_ */
