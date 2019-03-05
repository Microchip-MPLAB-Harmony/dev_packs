/**
 * \file
 *
 * \brief Instance description for I2SC0
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
#ifndef _SAMA5D2_I2SC0_INSTANCE_H_
#define _SAMA5D2_I2SC0_INSTANCE_H_

/* ========== Register definition for I2SC0 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_I2SC0_CR            (0xF8050000) /**< (I2SC0) Control Register */
#define REG_I2SC0_MR            (0xF8050004) /**< (I2SC0) Mode Register */
#define REG_I2SC0_SR            (0xF8050008) /**< (I2SC0) Status Register */
#define REG_I2SC0_SCR           (0xF805000C) /**< (I2SC0) Status Clear Register */
#define REG_I2SC0_SSR           (0xF8050010) /**< (I2SC0) Status Set Register */
#define REG_I2SC0_IER           (0xF8050014) /**< (I2SC0) Interrupt Enable Register */
#define REG_I2SC0_IDR           (0xF8050018) /**< (I2SC0) Interrupt Disable Register */
#define REG_I2SC0_IMR           (0xF805001C) /**< (I2SC0) Interrupt Mask Register */
#define REG_I2SC0_RHR           (0xF8050020) /**< (I2SC0) Receiver Holding Register */
#define REG_I2SC0_THR           (0xF8050024) /**< (I2SC0) Transmitter Holding Register */

#else

#define REG_I2SC0_CR            (*(__O  uint32_t*)0xF8050000U) /**< (I2SC0) Control Register */
#define REG_I2SC0_MR            (*(__IO uint32_t*)0xF8050004U) /**< (I2SC0) Mode Register */
#define REG_I2SC0_SR            (*(__I  uint32_t*)0xF8050008U) /**< (I2SC0) Status Register */
#define REG_I2SC0_SCR           (*(__O  uint32_t*)0xF805000CU) /**< (I2SC0) Status Clear Register */
#define REG_I2SC0_SSR           (*(__O  uint32_t*)0xF8050010U) /**< (I2SC0) Status Set Register */
#define REG_I2SC0_IER           (*(__O  uint32_t*)0xF8050014U) /**< (I2SC0) Interrupt Enable Register */
#define REG_I2SC0_IDR           (*(__O  uint32_t*)0xF8050018U) /**< (I2SC0) Interrupt Disable Register */
#define REG_I2SC0_IMR           (*(__I  uint32_t*)0xF805001CU) /**< (I2SC0) Interrupt Mask Register */
#define REG_I2SC0_RHR           (*(__I  uint32_t*)0xF8050020U) /**< (I2SC0) Receiver Holding Register */
#define REG_I2SC0_THR           (*(__O  uint32_t*)0xF8050024U) /**< (I2SC0) Transmitter Holding Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for I2SC0 peripheral ========== */
#define I2SC0_INSTANCE_ID                        54         
#define I2SC0_CLOCK_ID                           54         
#define I2SC0_DMAC_ID_TX                         31         
#define I2SC0_DMAC_ID_RX                         32         

#endif /* _SAMA5D2_I2SC0_INSTANCE_ */
