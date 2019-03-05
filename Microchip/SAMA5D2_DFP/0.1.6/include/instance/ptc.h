/**
 * \file
 *
 * \brief Instance description for PTC
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
#ifndef _SAMA5D2_PTC_INSTANCE_H_
#define _SAMA5D2_PTC_INSTANCE_H_

/* ========== Register definition for PTC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_PTC_CMD             (0xFC060028) /**< (PTC) PTC Command Register */
#define REG_PTC_ISR             (0xFC060030) /**< (PTC) PTC Interrupt Status Register */
#define REG_PTC_IED             (0xFC060035) /**< (PTC) PTC Enable Register */

#else

#define REG_PTC_CMD             (*(__O  uint8_t*)0xFC060028U) /**< (PTC) PTC Command Register */
#define REG_PTC_ISR             (*(__IO uint8_t*)0xFC060030U) /**< (PTC) PTC Interrupt Status Register */
#define REG_PTC_IED             (*(__O  uint8_t*)0xFC060035U) /**< (PTC) PTC Enable Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for PTC peripheral ========== */
#define PTC_INSTANCE_ID                          58         
#define PTC_CLOCK_ID                             58         

#endif /* _SAMA5D2_PTC_INSTANCE_ */
