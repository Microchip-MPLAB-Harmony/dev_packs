/**
 * \file
 *
 * \brief Instance description for PIO_CTRL
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
#ifndef _SAMA5D2_PIO_CTRL_INSTANCE_H_
#define _SAMA5D2_PIO_CTRL_INSTANCE_H_

/* ========== Register definition for PIO_CTRL peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_PIO_CTRL_WPMR       (0xFC0385E0) /**< (PIO_CTRL) PIO Write Protection Mode Register */
#define REG_PIO_CTRL_WPSR       (0xFC0385E4) /**< (PIO_CTRL) PIO Write Protection Status Register */

#else

#define REG_PIO_CTRL_WPMR       (*(__IO uint32_t*)0xFC0385E0U) /**< (PIO_CTRL) PIO Write Protection Mode Register */
#define REG_PIO_CTRL_WPSR       (*(__I  uint32_t*)0xFC0385E4U) /**< (PIO_CTRL) PIO Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_PIO_CTRL_INSTANCE_ */
