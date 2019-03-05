/**
 * \file
 *
 * \brief Instance description for CHIPID
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
#ifndef _SAMA5D2_CHIPID_INSTANCE_H_
#define _SAMA5D2_CHIPID_INSTANCE_H_

/* ========== Register definition for CHIPID peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_CHIPID_CIDR         (0xFC069000) /**< (CHIPID) Chip ID Register */
#define REG_CHIPID_EXID         (0xFC069004) /**< (CHIPID) Chip ID Extension Register */

#else

#define REG_CHIPID_CIDR         (*(__I  uint32_t*)0xFC069000U) /**< (CHIPID) Chip ID Register */
#define REG_CHIPID_EXID         (*(__I  uint32_t*)0xFC069004U) /**< (CHIPID) Chip ID Extension Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for CHIPID peripheral ========== */
#define CHIPID_INSTANCE_ID                       78         

#endif /* _SAMA5D2_CHIPID_INSTANCE_ */
