/**
 * \file
 *
 * \brief Instance description for UART1
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
#ifndef _SAMA5D2_UART1_INSTANCE_H_
#define _SAMA5D2_UART1_INSTANCE_H_

/* ========== Register definition for UART1 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_UART1_CR            (0xF8020000) /**< (UART1) Control Register */
#define REG_UART1_MR            (0xF8020004) /**< (UART1) Mode Register */
#define REG_UART1_IER           (0xF8020008) /**< (UART1) Interrupt Enable Register */
#define REG_UART1_IDR           (0xF802000C) /**< (UART1) Interrupt Disable Register */
#define REG_UART1_IMR           (0xF8020010) /**< (UART1) Interrupt Mask Register */
#define REG_UART1_SR            (0xF8020014) /**< (UART1) Status Register */
#define REG_UART1_RHR           (0xF8020018) /**< (UART1) Receive Holding Register */
#define REG_UART1_THR           (0xF802001C) /**< (UART1) Transmit Holding Register */
#define REG_UART1_BRGR          (0xF8020020) /**< (UART1) Baud Rate Generator Register */
#define REG_UART1_CMPR          (0xF8020024) /**< (UART1) Comparison Register */
#define REG_UART1_RTOR          (0xF8020028) /**< (UART1) Receiver Time-out Register */
#define REG_UART1_WPMR          (0xF80200E4) /**< (UART1) Write Protection Mode Register */

#else

#define REG_UART1_CR            (*(__O  uint32_t*)0xF8020000U) /**< (UART1) Control Register */
#define REG_UART1_MR            (*(__IO uint32_t*)0xF8020004U) /**< (UART1) Mode Register */
#define REG_UART1_IER           (*(__O  uint32_t*)0xF8020008U) /**< (UART1) Interrupt Enable Register */
#define REG_UART1_IDR           (*(__O  uint32_t*)0xF802000CU) /**< (UART1) Interrupt Disable Register */
#define REG_UART1_IMR           (*(__I  uint32_t*)0xF8020010U) /**< (UART1) Interrupt Mask Register */
#define REG_UART1_SR            (*(__I  uint32_t*)0xF8020014U) /**< (UART1) Status Register */
#define REG_UART1_RHR           (*(__I  uint32_t*)0xF8020018U) /**< (UART1) Receive Holding Register */
#define REG_UART1_THR           (*(__O  uint32_t*)0xF802001CU) /**< (UART1) Transmit Holding Register */
#define REG_UART1_BRGR          (*(__IO uint32_t*)0xF8020020U) /**< (UART1) Baud Rate Generator Register */
#define REG_UART1_CMPR          (*(__IO uint32_t*)0xF8020024U) /**< (UART1) Comparison Register */
#define REG_UART1_RTOR          (*(__IO uint32_t*)0xF8020028U) /**< (UART1) Receiver Time-out Register */
#define REG_UART1_WPMR          (*(__IO uint32_t*)0xF80200E4U) /**< (UART1) Write Protection Mode Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for UART1 peripheral ========== */
#define UART1_INSTANCE_ID                        25         
#define UART1_CLOCK_ID                           25         
#define UART1_DMAC_ID_TX                         37         
#define UART1_DMAC_ID_RX                         38         
#define UART1_BRSRCCK_PERIPH_CLK                 0          /* MCK */
#define UART1_BRSRCCK_GCLK                       0          /* GCLK */

#endif /* _SAMA5D2_UART1_INSTANCE_ */
