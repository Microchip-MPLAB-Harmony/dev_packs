/**
 * \file
 *
 * \brief Instance description for SAIC
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
#ifndef _SAMA5D2_SAIC_INSTANCE_H_
#define _SAMA5D2_SAIC_INSTANCE_H_

/* ========== Register definition for SAIC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_SAIC_SSR            (0xF803C000) /**< (SAIC) Source Select Register */
#define REG_SAIC_SMR            (0xF803C004) /**< (SAIC) Source Mode Register */
#define REG_SAIC_SVR            (0xF803C008) /**< (SAIC) Source Vector Register */
#define REG_SAIC_IVR            (0xF803C010) /**< (SAIC) Interrupt Vector Register */
#define REG_SAIC_FVR            (0xF803C014) /**< (SAIC) FIQ Vector Register */
#define REG_SAIC_ISR            (0xF803C018) /**< (SAIC) Interrupt Status Register */
#define REG_SAIC_IPR0           (0xF803C020) /**< (SAIC) Interrupt Pending Register 0 */
#define REG_SAIC_IPR1           (0xF803C024) /**< (SAIC) Interrupt Pending Register 1 */
#define REG_SAIC_IPR2           (0xF803C028) /**< (SAIC) Interrupt Pending Register 2 */
#define REG_SAIC_IPR3           (0xF803C02C) /**< (SAIC) Interrupt Pending Register 3 */
#define REG_SAIC_IMR            (0xF803C030) /**< (SAIC) Interrupt Mask Register */
#define REG_SAIC_CISR           (0xF803C034) /**< (SAIC) Core Interrupt Status Register */
#define REG_SAIC_EOICR          (0xF803C038) /**< (SAIC) End of Interrupt Command Register */
#define REG_SAIC_SPU            (0xF803C03C) /**< (SAIC) Spurious Interrupt Vector Register */
#define REG_SAIC_IECR           (0xF803C040) /**< (SAIC) Interrupt Enable Command Register */
#define REG_SAIC_IDCR           (0xF803C044) /**< (SAIC) Interrupt Disable Command Register */
#define REG_SAIC_ICCR           (0xF803C048) /**< (SAIC) Interrupt Clear Command Register */
#define REG_SAIC_ISCR           (0xF803C04C) /**< (SAIC) Interrupt Set Command Register */
#define REG_SAIC_DCR            (0xF803C06C) /**< (SAIC) Debug Control Register */
#define REG_SAIC_WPMR           (0xF803C0E4) /**< (SAIC) Write Protection Mode Register */
#define REG_SAIC_WPSR           (0xF803C0E8) /**< (SAIC) Write Protection Status Register */

#else

#define REG_SAIC_SSR            (*(__IO uint32_t*)0xF803C000U) /**< (SAIC) Source Select Register */
#define REG_SAIC_SMR            (*(__IO uint32_t*)0xF803C004U) /**< (SAIC) Source Mode Register */
#define REG_SAIC_SVR            (*(__IO uint32_t*)0xF803C008U) /**< (SAIC) Source Vector Register */
#define REG_SAIC_IVR            (*(__I  uint32_t*)0xF803C010U) /**< (SAIC) Interrupt Vector Register */
#define REG_SAIC_FVR            (*(__I  uint32_t*)0xF803C014U) /**< (SAIC) FIQ Vector Register */
#define REG_SAIC_ISR            (*(__I  uint32_t*)0xF803C018U) /**< (SAIC) Interrupt Status Register */
#define REG_SAIC_IPR0           (*(__I  uint32_t*)0xF803C020U) /**< (SAIC) Interrupt Pending Register 0 */
#define REG_SAIC_IPR1           (*(__I  uint32_t*)0xF803C024U) /**< (SAIC) Interrupt Pending Register 1 */
#define REG_SAIC_IPR2           (*(__I  uint32_t*)0xF803C028U) /**< (SAIC) Interrupt Pending Register 2 */
#define REG_SAIC_IPR3           (*(__I  uint32_t*)0xF803C02CU) /**< (SAIC) Interrupt Pending Register 3 */
#define REG_SAIC_IMR            (*(__I  uint32_t*)0xF803C030U) /**< (SAIC) Interrupt Mask Register */
#define REG_SAIC_CISR           (*(__I  uint32_t*)0xF803C034U) /**< (SAIC) Core Interrupt Status Register */
#define REG_SAIC_EOICR          (*(__O  uint32_t*)0xF803C038U) /**< (SAIC) End of Interrupt Command Register */
#define REG_SAIC_SPU            (*(__IO uint32_t*)0xF803C03CU) /**< (SAIC) Spurious Interrupt Vector Register */
#define REG_SAIC_IECR           (*(__O  uint32_t*)0xF803C040U) /**< (SAIC) Interrupt Enable Command Register */
#define REG_SAIC_IDCR           (*(__O  uint32_t*)0xF803C044U) /**< (SAIC) Interrupt Disable Command Register */
#define REG_SAIC_ICCR           (*(__O  uint32_t*)0xF803C048U) /**< (SAIC) Interrupt Clear Command Register */
#define REG_SAIC_ISCR           (*(__O  uint32_t*)0xF803C04CU) /**< (SAIC) Interrupt Set Command Register */
#define REG_SAIC_DCR            (*(__IO uint32_t*)0xF803C06CU) /**< (SAIC) Debug Control Register */
#define REG_SAIC_WPMR           (*(__IO uint32_t*)0xF803C0E4U) /**< (SAIC) Write Protection Mode Register */
#define REG_SAIC_WPSR           (*(__I  uint32_t*)0xF803C0E8U) /**< (SAIC) Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for SAIC peripheral ========== */
#define SAIC_INSTANCE_ID                         61         
#define SAIC_ID_SAIC_FIQ                         0          

#endif /* _SAMA5D2_SAIC_INSTANCE_ */
