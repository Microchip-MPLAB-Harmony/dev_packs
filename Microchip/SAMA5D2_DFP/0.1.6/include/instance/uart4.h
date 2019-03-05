/**
 * \file
 *
 * \brief Instance description for UART4
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
#ifndef _SAMA5D2_UART4_INSTANCE_H_
#define _SAMA5D2_UART4_INSTANCE_H_

/* ========== Register definition for UART4 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_UART4_CR            (0xFC00C000) /**< (UART4) Control Register */
#define REG_UART4_MR            (0xFC00C004) /**< (UART4) Mode Register */
#define REG_UART4_IER           (0xFC00C008) /**< (UART4) Interrupt Enable Register */
#define REG_UART4_IDR           (0xFC00C00C) /**< (UART4) Interrupt Disable Register */
#define REG_UART4_IMR           (0xFC00C010) /**< (UART4) Interrupt Mask Register */
#define REG_UART4_SR            (0xFC00C014) /**< (UART4) Status Register */
#define REG_UART4_RHR           (0xFC00C018) /**< (UART4) Receive Holding Register */
#define REG_UART4_THR           (0xFC00C01C) /**< (UART4) Transmit Holding Register */
#define REG_UART4_BRGR          (0xFC00C020) /**< (UART4) Baud Rate Generator Register */
#define REG_UART4_CMPR          (0xFC00C024) /**< (UART4) Comparison Register */
#define REG_UART4_RTOR          (0xFC00C028) /**< (UART4) Receiver Time-out Register */
#define REG_UART4_WPMR          (0xFC00C0E4) /**< (UART4) Write Protection Mode Register */

#else

#define REG_UART4_CR            (*(__O  uint32_t*)0xFC00C000U) /**< (UART4) Control Register */
#define REG_UART4_MR            (*(__IO uint32_t*)0xFC00C004U) /**< (UART4) Mode Register */
#define REG_UART4_IER           (*(__O  uint32_t*)0xFC00C008U) /**< (UART4) Interrupt Enable Register */
#define REG_UART4_IDR           (*(__O  uint32_t*)0xFC00C00CU) /**< (UART4) Interrupt Disable Register */
#define REG_UART4_IMR           (*(__I  uint32_t*)0xFC00C010U) /**< (UART4) Interrupt Mask Register */
#define REG_UART4_SR            (*(__I  uint32_t*)0xFC00C014U) /**< (UART4) Status Register */
#define REG_UART4_RHR           (*(__I  uint32_t*)0xFC00C018U) /**< (UART4) Receive Holding Register */
#define REG_UART4_THR           (*(__O  uint32_t*)0xFC00C01CU) /**< (UART4) Transmit Holding Register */
#define REG_UART4_BRGR          (*(__IO uint32_t*)0xFC00C020U) /**< (UART4) Baud Rate Generator Register */
#define REG_UART4_CMPR          (*(__IO uint32_t*)0xFC00C024U) /**< (UART4) Comparison Register */
#define REG_UART4_RTOR          (*(__IO uint32_t*)0xFC00C028U) /**< (UART4) Receiver Time-out Register */
#define REG_UART4_WPMR          (*(__IO uint32_t*)0xFC00C0E4U) /**< (UART4) Write Protection Mode Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for UART4 peripheral ========== */
#define UART4_INSTANCE_ID                        28         
#define UART4_CLOCK_ID                           28         
#define UART4_DMAC_ID_TX                         43         
#define UART4_DMAC_ID_RX                         44         
#define UART4_BRSRCCK_PERIPH_CLK                 0          /* MCK */
#define UART4_BRSRCCK_GCLK                       0          /* GCLK */

#endif /* _SAMA5D2_UART4_INSTANCE_ */
