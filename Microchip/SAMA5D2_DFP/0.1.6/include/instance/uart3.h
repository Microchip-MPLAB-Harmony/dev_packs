/**
 * \file
 *
 * \brief Instance description for UART3
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
#ifndef _SAMA5D2_UART3_INSTANCE_H_
#define _SAMA5D2_UART3_INSTANCE_H_

/* ========== Register definition for UART3 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_UART3_CR            (0xFC008000) /**< (UART3) Control Register */
#define REG_UART3_MR            (0xFC008004) /**< (UART3) Mode Register */
#define REG_UART3_IER           (0xFC008008) /**< (UART3) Interrupt Enable Register */
#define REG_UART3_IDR           (0xFC00800C) /**< (UART3) Interrupt Disable Register */
#define REG_UART3_IMR           (0xFC008010) /**< (UART3) Interrupt Mask Register */
#define REG_UART3_SR            (0xFC008014) /**< (UART3) Status Register */
#define REG_UART3_RHR           (0xFC008018) /**< (UART3) Receive Holding Register */
#define REG_UART3_THR           (0xFC00801C) /**< (UART3) Transmit Holding Register */
#define REG_UART3_BRGR          (0xFC008020) /**< (UART3) Baud Rate Generator Register */
#define REG_UART3_CMPR          (0xFC008024) /**< (UART3) Comparison Register */
#define REG_UART3_RTOR          (0xFC008028) /**< (UART3) Receiver Time-out Register */
#define REG_UART3_WPMR          (0xFC0080E4) /**< (UART3) Write Protection Mode Register */

#else

#define REG_UART3_CR            (*(__O  uint32_t*)0xFC008000U) /**< (UART3) Control Register */
#define REG_UART3_MR            (*(__IO uint32_t*)0xFC008004U) /**< (UART3) Mode Register */
#define REG_UART3_IER           (*(__O  uint32_t*)0xFC008008U) /**< (UART3) Interrupt Enable Register */
#define REG_UART3_IDR           (*(__O  uint32_t*)0xFC00800CU) /**< (UART3) Interrupt Disable Register */
#define REG_UART3_IMR           (*(__I  uint32_t*)0xFC008010U) /**< (UART3) Interrupt Mask Register */
#define REG_UART3_SR            (*(__I  uint32_t*)0xFC008014U) /**< (UART3) Status Register */
#define REG_UART3_RHR           (*(__I  uint32_t*)0xFC008018U) /**< (UART3) Receive Holding Register */
#define REG_UART3_THR           (*(__O  uint32_t*)0xFC00801CU) /**< (UART3) Transmit Holding Register */
#define REG_UART3_BRGR          (*(__IO uint32_t*)0xFC008020U) /**< (UART3) Baud Rate Generator Register */
#define REG_UART3_CMPR          (*(__IO uint32_t*)0xFC008024U) /**< (UART3) Comparison Register */
#define REG_UART3_RTOR          (*(__IO uint32_t*)0xFC008028U) /**< (UART3) Receiver Time-out Register */
#define REG_UART3_WPMR          (*(__IO uint32_t*)0xFC0080E4U) /**< (UART3) Write Protection Mode Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for UART3 peripheral ========== */
#define UART3_INSTANCE_ID                        27         
#define UART3_CLOCK_ID                           27         
#define UART3_DMAC_ID_TX                         41         
#define UART3_DMAC_ID_RX                         42         
#define UART3_BRSRCCK_PERIPH_CLK                 0          /* MCK */
#define UART3_BRSRCCK_GCLK                       0          /* GCLK */

#endif /* _SAMA5D2_UART3_INSTANCE_ */
