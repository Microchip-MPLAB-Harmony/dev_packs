/**
 * \file
 *
 * \brief Instance description for SPI0
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
#ifndef _SAMA5D2_SPI0_INSTANCE_H_
#define _SAMA5D2_SPI0_INSTANCE_H_

/* ========== Register definition for SPI0 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_SPI0_CR             (0xF8000000) /**< (SPI0) Control Register */
#define REG_SPI0_MR             (0xF8000004) /**< (SPI0) Mode Register */
#define REG_SPI0_RDR            (0xF8000008) /**< (SPI0) Receive Data Register */
#define REG_SPI0_TDR            (0xF800000C) /**< (SPI0) Transmit Data Register */
#define REG_SPI0_SR             (0xF8000010) /**< (SPI0) Status Register */
#define REG_SPI0_IER            (0xF8000014) /**< (SPI0) Interrupt Enable Register */
#define REG_SPI0_IDR            (0xF8000018) /**< (SPI0) Interrupt Disable Register */
#define REG_SPI0_IMR            (0xF800001C) /**< (SPI0) Interrupt Mask Register */
#define REG_SPI0_CSR            (0xF8000030) /**< (SPI0) Chip Select Register */
#define REG_SPI0_CSR0           (0xF8000030) /**< (SPI0) Chip Select Register 0 */
#define REG_SPI0_CSR1           (0xF8000034) /**< (SPI0) Chip Select Register 1 */
#define REG_SPI0_CSR2           (0xF8000038) /**< (SPI0) Chip Select Register 2 */
#define REG_SPI0_CSR3           (0xF800003C) /**< (SPI0) Chip Select Register 3 */
#define REG_SPI0_FMR            (0xF8000040) /**< (SPI0) FIFO Mode Register */
#define REG_SPI0_FLR            (0xF8000044) /**< (SPI0) FIFO Level Register */
#define REG_SPI0_CMPR           (0xF8000048) /**< (SPI0) Comparison Register */
#define REG_SPI0_WPMR           (0xF80000E4) /**< (SPI0) Write Protection Mode Register */
#define REG_SPI0_WPSR           (0xF80000E8) /**< (SPI0) Write Protection Status Register */

#else

#define REG_SPI0_CR             (*(__O  uint32_t*)0xF8000000U) /**< (SPI0) Control Register */
#define REG_SPI0_MR             (*(__IO uint32_t*)0xF8000004U) /**< (SPI0) Mode Register */
#define REG_SPI0_RDR            (*(__I  uint32_t*)0xF8000008U) /**< (SPI0) Receive Data Register */
#define REG_SPI0_TDR            (*(__O  uint32_t*)0xF800000CU) /**< (SPI0) Transmit Data Register */
#define REG_SPI0_SR             (*(__I  uint32_t*)0xF8000010U) /**< (SPI0) Status Register */
#define REG_SPI0_IER            (*(__O  uint32_t*)0xF8000014U) /**< (SPI0) Interrupt Enable Register */
#define REG_SPI0_IDR            (*(__O  uint32_t*)0xF8000018U) /**< (SPI0) Interrupt Disable Register */
#define REG_SPI0_IMR            (*(__I  uint32_t*)0xF800001CU) /**< (SPI0) Interrupt Mask Register */
#define REG_SPI0_CSR            (*(__IO uint32_t*)0xF8000030U) /**< (SPI0) Chip Select Register */
#define REG_SPI0_CSR0           (*(__IO uint32_t*)0xF8000030U) /**< (SPI0) Chip Select Register 0 */
#define REG_SPI0_CSR1           (*(__IO uint32_t*)0xF8000034U) /**< (SPI0) Chip Select Register 1 */
#define REG_SPI0_CSR2           (*(__IO uint32_t*)0xF8000038U) /**< (SPI0) Chip Select Register 2 */
#define REG_SPI0_CSR3           (*(__IO uint32_t*)0xF800003CU) /**< (SPI0) Chip Select Register 3 */
#define REG_SPI0_FMR            (*(__IO uint32_t*)0xF8000040U) /**< (SPI0) FIFO Mode Register */
#define REG_SPI0_FLR            (*(__I  uint32_t*)0xF8000044U) /**< (SPI0) FIFO Level Register */
#define REG_SPI0_CMPR           (*(__I  uint32_t*)0xF8000048U) /**< (SPI0) Comparison Register */
#define REG_SPI0_WPMR           (*(__IO uint32_t*)0xF80000E4U) /**< (SPI0) Write Protection Mode Register */
#define REG_SPI0_WPSR           (*(__I  uint32_t*)0xF80000E8U) /**< (SPI0) Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for SPI0 peripheral ========== */
#define SPI0_INSTANCE_ID                         33         
#define SPI0_CLOCK_ID                            33         
#define SPI0_DMAC_ID_TX                          6          
#define SPI0_DMAC_ID_RX                          7          

#endif /* _SAMA5D2_SPI0_INSTANCE_ */
