/**
 * \file
 *
 * \brief Instance description for CLASSD
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
#ifndef _SAMA5D2_CLASSD_INSTANCE_H_
#define _SAMA5D2_CLASSD_INSTANCE_H_

/* ========== Register definition for CLASSD peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_CLASSD_CR           (0xFC048000) /**< (CLASSD) Control Register */
#define REG_CLASSD_MR           (0xFC048004) /**< (CLASSD) Mode Register */
#define REG_CLASSD_INTPMR       (0xFC048008) /**< (CLASSD) Interpolator Mode Register */
#define REG_CLASSD_INTSR        (0xFC04800C) /**< (CLASSD) Interpolator Status Register */
#define REG_CLASSD_THR          (0xFC048010) /**< (CLASSD) Transmit Holding Register */
#define REG_CLASSD_IER          (0xFC048014) /**< (CLASSD) Interrupt Enable Register */
#define REG_CLASSD_IDR          (0xFC048018) /**< (CLASSD) Interrupt Disable Register */
#define REG_CLASSD_IMR          (0xFC04801C) /**< (CLASSD) Interrupt Mask Register */
#define REG_CLASSD_ISR          (0xFC048020) /**< (CLASSD) Interrupt Status Register */
#define REG_CLASSD_WPMR         (0xFC0480E4) /**< (CLASSD) Write Protection Mode Register */

#else

#define REG_CLASSD_CR           (*(__O  uint32_t*)0xFC048000U) /**< (CLASSD) Control Register */
#define REG_CLASSD_MR           (*(__IO uint32_t*)0xFC048004U) /**< (CLASSD) Mode Register */
#define REG_CLASSD_INTPMR       (*(__IO uint32_t*)0xFC048008U) /**< (CLASSD) Interpolator Mode Register */
#define REG_CLASSD_INTSR        (*(__I  uint32_t*)0xFC04800CU) /**< (CLASSD) Interpolator Status Register */
#define REG_CLASSD_THR          (*(__IO uint32_t*)0xFC048010U) /**< (CLASSD) Transmit Holding Register */
#define REG_CLASSD_IER          (*(__O  uint32_t*)0xFC048014U) /**< (CLASSD) Interrupt Enable Register */
#define REG_CLASSD_IDR          (*(__O  uint32_t*)0xFC048018U) /**< (CLASSD) Interrupt Disable Register */
#define REG_CLASSD_IMR          (*(__IO uint32_t*)0xFC04801CU) /**< (CLASSD) Interrupt Mask Register */
#define REG_CLASSD_ISR          (*(__I  uint32_t*)0xFC048020U) /**< (CLASSD) Interrupt Status Register */
#define REG_CLASSD_WPMR         (*(__IO uint32_t*)0xFC0480E4U) /**< (CLASSD) Write Protection Mode Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for CLASSD peripheral ========== */
#define CLASSD_INSTANCE_ID                       59         
#define CLASSD_CLOCK_ID                          59         
#define CLASSD_DMAC_ID_TX                        47         

#endif /* _SAMA5D2_CLASSD_INSTANCE_ */
