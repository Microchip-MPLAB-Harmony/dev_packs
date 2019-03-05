/**
 * \file
 *
 * \brief Instance description for L2CC
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
#ifndef _SAMA5D2_L2CC_INSTANCE_H_
#define _SAMA5D2_L2CC_INSTANCE_H_

/* ========== Register definition for L2CC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_L2CC_IDR            (0xA00000) /**< (L2CC) Cache ID Register */
#define REG_L2CC_TYPR           (0xA00004) /**< (L2CC) Cache Type Register */
#define REG_L2CC_CR             (0xA00100) /**< (L2CC) Control Register */
#define REG_L2CC_ACR            (0xA00104) /**< (L2CC) Auxiliary Control Register */
#define REG_L2CC_TRCR           (0xA00108) /**< (L2CC) Tag RAM Control Register */
#define REG_L2CC_DRCR           (0xA0010C) /**< (L2CC) Data RAM Control Register */
#define REG_L2CC_ECR            (0xA00200) /**< (L2CC) Event Counter Control Register */
#define REG_L2CC_ECFGR1         (0xA00204) /**< (L2CC) Event Counter 1 Configuration Register */
#define REG_L2CC_ECFGR0         (0xA00208) /**< (L2CC) Event Counter 0 Configuration Register */
#define REG_L2CC_EVR1           (0xA0020C) /**< (L2CC) Event Counter 1 Value Register */
#define REG_L2CC_EVR0           (0xA00210) /**< (L2CC) Event Counter 0 Value Register */
#define REG_L2CC_IMR            (0xA00214) /**< (L2CC) Interrupt Mask Register */
#define REG_L2CC_MISR           (0xA00218) /**< (L2CC) Masked Interrupt Status Register */
#define REG_L2CC_RISR           (0xA0021C) /**< (L2CC) Raw Interrupt Status Register */
#define REG_L2CC_ICR            (0xA00220) /**< (L2CC) Interrupt Clear Register */
#define REG_L2CC_CSR            (0xA00730) /**< (L2CC) Cache Synchronization Register */
#define REG_L2CC_IPALR          (0xA00770) /**< (L2CC) Invalidate Physical Address Line Register */
#define REG_L2CC_IWR            (0xA0077C) /**< (L2CC) Invalidate Way Register */
#define REG_L2CC_CPALR          (0xA007B0) /**< (L2CC) Clean Physical Address Line Register */
#define REG_L2CC_CIR            (0xA007B8) /**< (L2CC) Clean Index Register */
#define REG_L2CC_CWR            (0xA007BC) /**< (L2CC) Clean Way Register */
#define REG_L2CC_CIPALR         (0xA007F0) /**< (L2CC) Clean Invalidate Physical Address Line Register */
#define REG_L2CC_CIIR           (0xA007F8) /**< (L2CC) Clean Invalidate Index Register */
#define REG_L2CC_CIWR           (0xA007FC) /**< (L2CC) Clean Invalidate Way Register */
#define REG_L2CC_DLKR           (0xA00900) /**< (L2CC) Data Lockdown Register */
#define REG_L2CC_ILKR           (0xA00904) /**< (L2CC) Instruction Lockdown Register */
#define REG_L2CC_DCR            (0xA00F40) /**< (L2CC) Debug Control Register */
#define REG_L2CC_PCR            (0xA00F60) /**< (L2CC) Prefetch Control Register */
#define REG_L2CC_POWCR          (0xA00F80) /**< (L2CC) Power Control Register */

#else

#define REG_L2CC_IDR            (*(__I  uint32_t*)0xA00000U) /**< (L2CC) Cache ID Register */
#define REG_L2CC_TYPR           (*(__I  uint32_t*)0xA00004U) /**< (L2CC) Cache Type Register */
#define REG_L2CC_CR             (*(__IO uint32_t*)0xA00100U) /**< (L2CC) Control Register */
#define REG_L2CC_ACR            (*(__IO uint32_t*)0xA00104U) /**< (L2CC) Auxiliary Control Register */
#define REG_L2CC_TRCR           (*(__IO uint32_t*)0xA00108U) /**< (L2CC) Tag RAM Control Register */
#define REG_L2CC_DRCR           (*(__IO uint32_t*)0xA0010CU) /**< (L2CC) Data RAM Control Register */
#define REG_L2CC_ECR            (*(__IO uint32_t*)0xA00200U) /**< (L2CC) Event Counter Control Register */
#define REG_L2CC_ECFGR1         (*(__IO uint32_t*)0xA00204U) /**< (L2CC) Event Counter 1 Configuration Register */
#define REG_L2CC_ECFGR0         (*(__IO uint32_t*)0xA00208U) /**< (L2CC) Event Counter 0 Configuration Register */
#define REG_L2CC_EVR1           (*(__IO uint32_t*)0xA0020CU) /**< (L2CC) Event Counter 1 Value Register */
#define REG_L2CC_EVR0           (*(__IO uint32_t*)0xA00210U) /**< (L2CC) Event Counter 0 Value Register */
#define REG_L2CC_IMR            (*(__IO uint32_t*)0xA00214U) /**< (L2CC) Interrupt Mask Register */
#define REG_L2CC_MISR           (*(__I  uint32_t*)0xA00218U) /**< (L2CC) Masked Interrupt Status Register */
#define REG_L2CC_RISR           (*(__I  uint32_t*)0xA0021CU) /**< (L2CC) Raw Interrupt Status Register */
#define REG_L2CC_ICR            (*(__IO uint32_t*)0xA00220U) /**< (L2CC) Interrupt Clear Register */
#define REG_L2CC_CSR            (*(__IO uint32_t*)0xA00730U) /**< (L2CC) Cache Synchronization Register */
#define REG_L2CC_IPALR          (*(__IO uint32_t*)0xA00770U) /**< (L2CC) Invalidate Physical Address Line Register */
#define REG_L2CC_IWR            (*(__IO uint32_t*)0xA0077CU) /**< (L2CC) Invalidate Way Register */
#define REG_L2CC_CPALR          (*(__IO uint32_t*)0xA007B0U) /**< (L2CC) Clean Physical Address Line Register */
#define REG_L2CC_CIR            (*(__IO uint32_t*)0xA007B8U) /**< (L2CC) Clean Index Register */
#define REG_L2CC_CWR            (*(__IO uint32_t*)0xA007BCU) /**< (L2CC) Clean Way Register */
#define REG_L2CC_CIPALR         (*(__IO uint32_t*)0xA007F0U) /**< (L2CC) Clean Invalidate Physical Address Line Register */
#define REG_L2CC_CIIR           (*(__IO uint32_t*)0xA007F8U) /**< (L2CC) Clean Invalidate Index Register */
#define REG_L2CC_CIWR           (*(__IO uint32_t*)0xA007FCU) /**< (L2CC) Clean Invalidate Way Register */
#define REG_L2CC_DLKR           (*(__IO uint32_t*)0xA00900U) /**< (L2CC) Data Lockdown Register */
#define REG_L2CC_ILKR           (*(__IO uint32_t*)0xA00904U) /**< (L2CC) Instruction Lockdown Register */
#define REG_L2CC_DCR            (*(__IO uint32_t*)0xA00F40U) /**< (L2CC) Debug Control Register */
#define REG_L2CC_PCR            (*(__IO uint32_t*)0xA00F60U) /**< (L2CC) Prefetch Control Register */
#define REG_L2CC_POWCR          (*(__IO uint32_t*)0xA00F80U) /**< (L2CC) Power Control Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for L2CC peripheral ========== */
#define L2CC_INSTANCE_ID                         63         

#endif /* _SAMA5D2_L2CC_INSTANCE_ */
