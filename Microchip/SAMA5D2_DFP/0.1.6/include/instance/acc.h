/**
 * \file
 *
 * \brief Instance description for ACC
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
#ifndef _SAMA5D2_ACC_INSTANCE_H_
#define _SAMA5D2_ACC_INSTANCE_H_

/* ========== Register definition for ACC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_ACC_CR              (0xF804A000) /**< (ACC) Control Register */
#define REG_ACC_MR              (0xF804A004) /**< (ACC) Mode Register */
#define REG_ACC_WPMR            (0xF804A0E4) /**< (ACC) Write Protection Mode Register */
#define REG_ACC_WPSR            (0xF804A0E8) /**< (ACC) Write Protection Status Register */

#else

#define REG_ACC_CR              (*(__O  uint32_t*)0xF804A000U) /**< (ACC) Control Register */
#define REG_ACC_MR              (*(__IO uint32_t*)0xF804A004U) /**< (ACC) Mode Register */
#define REG_ACC_WPMR            (*(__IO uint32_t*)0xF804A0E4U) /**< (ACC) Write Protection Mode Register */
#define REG_ACC_WPSR            (*(__I  uint32_t*)0xF804A0E8U) /**< (ACC) Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for ACC peripheral ========== */
#define ACC_INSTANCE_ID                          75         

#endif /* _SAMA5D2_ACC_INSTANCE_ */
