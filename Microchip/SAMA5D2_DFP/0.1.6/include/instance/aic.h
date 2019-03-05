/**
 * \file
 *
 * \brief Instance description for AIC
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
#ifndef _SAMA5D2_AIC_INSTANCE_H_
#define _SAMA5D2_AIC_INSTANCE_H_

/* ========== Register definition for AIC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_AIC_SSR             (0xFC020000) /**< (AIC) Source Select Register */
#define REG_AIC_SMR             (0xFC020004) /**< (AIC) Source Mode Register */
#define REG_AIC_SVR             (0xFC020008) /**< (AIC) Source Vector Register */
#define REG_AIC_IVR             (0xFC020010) /**< (AIC) Interrupt Vector Register */
#define REG_AIC_FVR             (0xFC020014) /**< (AIC) FIQ Vector Register */
#define REG_AIC_ISR             (0xFC020018) /**< (AIC) Interrupt Status Register */
#define REG_AIC_IPR0            (0xFC020020) /**< (AIC) Interrupt Pending Register 0 */
#define REG_AIC_IPR1            (0xFC020024) /**< (AIC) Interrupt Pending Register 1 */
#define REG_AIC_IPR2            (0xFC020028) /**< (AIC) Interrupt Pending Register 2 */
#define REG_AIC_IPR3            (0xFC02002C) /**< (AIC) Interrupt Pending Register 3 */
#define REG_AIC_IMR             (0xFC020030) /**< (AIC) Interrupt Mask Register */
#define REG_AIC_CISR            (0xFC020034) /**< (AIC) Core Interrupt Status Register */
#define REG_AIC_EOICR           (0xFC020038) /**< (AIC) End of Interrupt Command Register */
#define REG_AIC_SPU             (0xFC02003C) /**< (AIC) Spurious Interrupt Vector Register */
#define REG_AIC_IECR            (0xFC020040) /**< (AIC) Interrupt Enable Command Register */
#define REG_AIC_IDCR            (0xFC020044) /**< (AIC) Interrupt Disable Command Register */
#define REG_AIC_ICCR            (0xFC020048) /**< (AIC) Interrupt Clear Command Register */
#define REG_AIC_ISCR            (0xFC02004C) /**< (AIC) Interrupt Set Command Register */
#define REG_AIC_DCR             (0xFC02006C) /**< (AIC) Debug Control Register */
#define REG_AIC_WPMR            (0xFC0200E4) /**< (AIC) Write Protection Mode Register */
#define REG_AIC_WPSR            (0xFC0200E8) /**< (AIC) Write Protection Status Register */

#else

#define REG_AIC_SSR             (*(__IO uint32_t*)0xFC020000U) /**< (AIC) Source Select Register */
#define REG_AIC_SMR             (*(__IO uint32_t*)0xFC020004U) /**< (AIC) Source Mode Register */
#define REG_AIC_SVR             (*(__IO uint32_t*)0xFC020008U) /**< (AIC) Source Vector Register */
#define REG_AIC_IVR             (*(__I  uint32_t*)0xFC020010U) /**< (AIC) Interrupt Vector Register */
#define REG_AIC_FVR             (*(__I  uint32_t*)0xFC020014U) /**< (AIC) FIQ Vector Register */
#define REG_AIC_ISR             (*(__I  uint32_t*)0xFC020018U) /**< (AIC) Interrupt Status Register */
#define REG_AIC_IPR0            (*(__I  uint32_t*)0xFC020020U) /**< (AIC) Interrupt Pending Register 0 */
#define REG_AIC_IPR1            (*(__I  uint32_t*)0xFC020024U) /**< (AIC) Interrupt Pending Register 1 */
#define REG_AIC_IPR2            (*(__I  uint32_t*)0xFC020028U) /**< (AIC) Interrupt Pending Register 2 */
#define REG_AIC_IPR3            (*(__I  uint32_t*)0xFC02002CU) /**< (AIC) Interrupt Pending Register 3 */
#define REG_AIC_IMR             (*(__I  uint32_t*)0xFC020030U) /**< (AIC) Interrupt Mask Register */
#define REG_AIC_CISR            (*(__I  uint32_t*)0xFC020034U) /**< (AIC) Core Interrupt Status Register */
#define REG_AIC_EOICR           (*(__O  uint32_t*)0xFC020038U) /**< (AIC) End of Interrupt Command Register */
#define REG_AIC_SPU             (*(__IO uint32_t*)0xFC02003CU) /**< (AIC) Spurious Interrupt Vector Register */
#define REG_AIC_IECR            (*(__O  uint32_t*)0xFC020040U) /**< (AIC) Interrupt Enable Command Register */
#define REG_AIC_IDCR            (*(__O  uint32_t*)0xFC020044U) /**< (AIC) Interrupt Disable Command Register */
#define REG_AIC_ICCR            (*(__O  uint32_t*)0xFC020048U) /**< (AIC) Interrupt Clear Command Register */
#define REG_AIC_ISCR            (*(__O  uint32_t*)0xFC02004CU) /**< (AIC) Interrupt Set Command Register */
#define REG_AIC_DCR             (*(__IO uint32_t*)0xFC02006CU) /**< (AIC) Debug Control Register */
#define REG_AIC_WPMR            (*(__IO uint32_t*)0xFC0200E4U) /**< (AIC) Write Protection Mode Register */
#define REG_AIC_WPSR            (*(__I  uint32_t*)0xFC0200E8U) /**< (AIC) Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for AIC peripheral ========== */
#define AIC_INSTANCE_ID                          62         
#define AIC_ID_AIC_IRQ                           49         

#endif /* _SAMA5D2_AIC_INSTANCE_ */
