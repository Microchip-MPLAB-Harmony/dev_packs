/**
 * \file
 *
 * \brief Instance description for MPDDRC
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
#ifndef _SAMA5D2_MPDDRC_INSTANCE_H_
#define _SAMA5D2_MPDDRC_INSTANCE_H_

/* ========== Register definition for MPDDRC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_MPDDRC_MR           (0xF000C000) /**< (MPDDRC) Mode Register */
#define REG_MPDDRC_RTR          (0xF000C004) /**< (MPDDRC) Refresh Timer Register */
#define REG_MPDDRC_CR           (0xF000C008) /**< (MPDDRC) Configuration Register */
#define REG_MPDDRC_TPR0         (0xF000C00C) /**< (MPDDRC) Timing Parameter 0 Register */
#define REG_MPDDRC_TPR1         (0xF000C010) /**< (MPDDRC) Timing Parameter 1 Register */
#define REG_MPDDRC_TPR2         (0xF000C014) /**< (MPDDRC) Timing Parameter 2 Register */
#define REG_MPDDRC_LPR          (0xF000C01C) /**< (MPDDRC) Low-Power Register */
#define REG_MPDDRC_MD           (0xF000C020) /**< (MPDDRC) Memory Device Register */
#define REG_MPDDRC_LPDDR23_LPR  (0xF000C028) /**< (MPDDRC) Low-power DDR2 Low-power DDR3 Low-power Register */
#define REG_MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4 (0xF000C02C) /**< (MPDDRC) Low-power DDR2 Low-power DDR3 and DDR3 Calibration and MR4 Register */
#define REG_MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL (0xF000C030) /**< (MPDDRC) Low-power DDR2 Low-power DDR3 and DDR3 Timing Calibration Register */
#define REG_MPDDRC_IO_CALIBR    (0xF000C034) /**< (MPDDRC) I/O Calibration Register */
#define REG_MPDDRC_OCMS         (0xF000C038) /**< (MPDDRC) OCMS Register */
#define REG_MPDDRC_OCMS_KEY1    (0xF000C03C) /**< (MPDDRC) OCMS KEY1 Register */
#define REG_MPDDRC_OCMS_KEY2    (0xF000C040) /**< (MPDDRC) OCMS KEY2 Register */
#define REG_MPDDRC_CONF_ARBITER (0xF000C044) /**< (MPDDRC) Configuration Arbiter Register */
#define REG_MPDDRC_TIMEOUT      (0xF000C048) /**< (MPDDRC) Timeout Register */
#define REG_MPDDRC_REQ_PORT_0123 (0xF000C04C) /**< (MPDDRC) Request Port 0-1-2-3 Register */
#define REG_MPDDRC_REQ_PORT_4567 (0xF000C050) /**< (MPDDRC) Request Port 4-5-6-7 Register */
#define REG_MPDDRC_BDW_PORT_0123 (0xF000C054) /**< (MPDDRC) Current/Maximum Bandwidth Port 0-1-2-3 Register */
#define REG_MPDDRC_BDW_PORT_4567 (0xF000C058) /**< (MPDDRC) Current/Maximum Bandwidth Port 4-5-6-7 Register */
#define REG_MPDDRC_RD_DATA_PATH (0xF000C05C) /**< (MPDDRC) Read Data Path Register */
#define REG_MPDDRC_MCFGR        (0xF000C060) /**< (MPDDRC) Monitor Configuration Register */
#define REG_MPDDRC_MADDR0       (0xF000C064) /**< (MPDDRC) Monitor Address High/Low Port 0 Register */
#define REG_MPDDRC_MADDR1       (0xF000C068) /**< (MPDDRC) Monitor Address High/Low Port 1 Register */
#define REG_MPDDRC_MADDR2       (0xF000C06C) /**< (MPDDRC) Monitor Address High/Low Port 2 Register */
#define REG_MPDDRC_MADDR3       (0xF000C070) /**< (MPDDRC) Monitor Address High/Low Port 3 Register */
#define REG_MPDDRC_MADDR4       (0xF000C074) /**< (MPDDRC) Monitor Address High/Low Port 4 Register */
#define REG_MPDDRC_MADDR5       (0xF000C078) /**< (MPDDRC) Monitor Address High/Low Port 5 Register */
#define REG_MPDDRC_MADDR6       (0xF000C07C) /**< (MPDDRC) Monitor Address High/Low Port 6 Register */
#define REG_MPDDRC_MADDR7       (0xF000C080) /**< (MPDDRC) Monitor Address High/Low Port 7 Register */
#define REG_MPDDRC_MINFO0       (0xF000C084) /**< (MPDDRC) Monitor Information Port 0 Register */
#define REG_MPDDRC_MINFO1       (0xF000C088) /**< (MPDDRC) Monitor Information Port 1 Register */
#define REG_MPDDRC_MINFO2       (0xF000C08C) /**< (MPDDRC) Monitor Information Port 2 Register */
#define REG_MPDDRC_MINFO3       (0xF000C090) /**< (MPDDRC) Monitor Information Port 3 Register */
#define REG_MPDDRC_MINFO4       (0xF000C094) /**< (MPDDRC) Monitor Information Port 4 Register */
#define REG_MPDDRC_MINFO5       (0xF000C098) /**< (MPDDRC) Monitor Information Port 5 Register */
#define REG_MPDDRC_MINFO6       (0xF000C09C) /**< (MPDDRC) Monitor Information Port 6 Register */
#define REG_MPDDRC_MINFO7       (0xF000C0A0) /**< (MPDDRC) Monitor Information Port 7 Register */
#define REG_MPDDRC_WPMR         (0xF000C0E4) /**< (MPDDRC) Write Protection Mode Register */
#define REG_MPDDRC_WPSR         (0xF000C0E8) /**< (MPDDRC) Write Protection Status Register */

#else

#define REG_MPDDRC_MR           (*(__IO uint32_t*)0xF000C000U) /**< (MPDDRC) Mode Register */
#define REG_MPDDRC_RTR          (*(__IO uint32_t*)0xF000C004U) /**< (MPDDRC) Refresh Timer Register */
#define REG_MPDDRC_CR           (*(__IO uint32_t*)0xF000C008U) /**< (MPDDRC) Configuration Register */
#define REG_MPDDRC_TPR0         (*(__IO uint32_t*)0xF000C00CU) /**< (MPDDRC) Timing Parameter 0 Register */
#define REG_MPDDRC_TPR1         (*(__IO uint32_t*)0xF000C010U) /**< (MPDDRC) Timing Parameter 1 Register */
#define REG_MPDDRC_TPR2         (*(__IO uint32_t*)0xF000C014U) /**< (MPDDRC) Timing Parameter 2 Register */
#define REG_MPDDRC_LPR          (*(__IO uint32_t*)0xF000C01CU) /**< (MPDDRC) Low-Power Register */
#define REG_MPDDRC_MD           (*(__IO uint32_t*)0xF000C020U) /**< (MPDDRC) Memory Device Register */
#define REG_MPDDRC_LPDDR23_LPR  (*(__IO uint32_t*)0xF000C028U) /**< (MPDDRC) Low-power DDR2 Low-power DDR3 Low-power Register */
#define REG_MPDDRC_LPDDR2_LPDDR3_DDR3_CAL_MR4 (*(__IO uint32_t*)0xF000C02CU) /**< (MPDDRC) Low-power DDR2 Low-power DDR3 and DDR3 Calibration and MR4 Register */
#define REG_MPDDRC_LPDDR2_LPDDR3_DDR3_TIM_CAL (*(__IO uint32_t*)0xF000C030U) /**< (MPDDRC) Low-power DDR2 Low-power DDR3 and DDR3 Timing Calibration Register */
#define REG_MPDDRC_IO_CALIBR    (*(__IO uint32_t*)0xF000C034U) /**< (MPDDRC) I/O Calibration Register */
#define REG_MPDDRC_OCMS         (*(__IO uint32_t*)0xF000C038U) /**< (MPDDRC) OCMS Register */
#define REG_MPDDRC_OCMS_KEY1    (*(__O  uint32_t*)0xF000C03CU) /**< (MPDDRC) OCMS KEY1 Register */
#define REG_MPDDRC_OCMS_KEY2    (*(__O  uint32_t*)0xF000C040U) /**< (MPDDRC) OCMS KEY2 Register */
#define REG_MPDDRC_CONF_ARBITER (*(__IO uint32_t*)0xF000C044U) /**< (MPDDRC) Configuration Arbiter Register */
#define REG_MPDDRC_TIMEOUT      (*(__IO uint32_t*)0xF000C048U) /**< (MPDDRC) Timeout Register */
#define REG_MPDDRC_REQ_PORT_0123 (*(__IO uint32_t*)0xF000C04CU) /**< (MPDDRC) Request Port 0-1-2-3 Register */
#define REG_MPDDRC_REQ_PORT_4567 (*(__IO uint32_t*)0xF000C050U) /**< (MPDDRC) Request Port 4-5-6-7 Register */
#define REG_MPDDRC_BDW_PORT_0123 (*(__I  uint32_t*)0xF000C054U) /**< (MPDDRC) Current/Maximum Bandwidth Port 0-1-2-3 Register */
#define REG_MPDDRC_BDW_PORT_4567 (*(__I  uint32_t*)0xF000C058U) /**< (MPDDRC) Current/Maximum Bandwidth Port 4-5-6-7 Register */
#define REG_MPDDRC_RD_DATA_PATH (*(__IO uint32_t*)0xF000C05CU) /**< (MPDDRC) Read Data Path Register */
#define REG_MPDDRC_MCFGR        (*(__IO uint32_t*)0xF000C060U) /**< (MPDDRC) Monitor Configuration Register */
#define REG_MPDDRC_MADDR0       (*(__IO uint32_t*)0xF000C064U) /**< (MPDDRC) Monitor Address High/Low Port 0 Register */
#define REG_MPDDRC_MADDR1       (*(__IO uint32_t*)0xF000C068U) /**< (MPDDRC) Monitor Address High/Low Port 1 Register */
#define REG_MPDDRC_MADDR2       (*(__IO uint32_t*)0xF000C06CU) /**< (MPDDRC) Monitor Address High/Low Port 2 Register */
#define REG_MPDDRC_MADDR3       (*(__IO uint32_t*)0xF000C070U) /**< (MPDDRC) Monitor Address High/Low Port 3 Register */
#define REG_MPDDRC_MADDR4       (*(__IO uint32_t*)0xF000C074U) /**< (MPDDRC) Monitor Address High/Low Port 4 Register */
#define REG_MPDDRC_MADDR5       (*(__IO uint32_t*)0xF000C078U) /**< (MPDDRC) Monitor Address High/Low Port 5 Register */
#define REG_MPDDRC_MADDR6       (*(__IO uint32_t*)0xF000C07CU) /**< (MPDDRC) Monitor Address High/Low Port 6 Register */
#define REG_MPDDRC_MADDR7       (*(__IO uint32_t*)0xF000C080U) /**< (MPDDRC) Monitor Address High/Low Port 7 Register */
#define REG_MPDDRC_MINFO0       (*(__I  uint32_t*)0xF000C084U) /**< (MPDDRC) Monitor Information Port 0 Register */
#define REG_MPDDRC_MINFO1       (*(__I  uint32_t*)0xF000C088U) /**< (MPDDRC) Monitor Information Port 1 Register */
#define REG_MPDDRC_MINFO2       (*(__I  uint32_t*)0xF000C08CU) /**< (MPDDRC) Monitor Information Port 2 Register */
#define REG_MPDDRC_MINFO3       (*(__I  uint32_t*)0xF000C090U) /**< (MPDDRC) Monitor Information Port 3 Register */
#define REG_MPDDRC_MINFO4       (*(__I  uint32_t*)0xF000C094U) /**< (MPDDRC) Monitor Information Port 4 Register */
#define REG_MPDDRC_MINFO5       (*(__I  uint32_t*)0xF000C098U) /**< (MPDDRC) Monitor Information Port 5 Register */
#define REG_MPDDRC_MINFO6       (*(__I  uint32_t*)0xF000C09CU) /**< (MPDDRC) Monitor Information Port 6 Register */
#define REG_MPDDRC_MINFO7       (*(__I  uint32_t*)0xF000C0A0U) /**< (MPDDRC) Monitor Information Port 7 Register */
#define REG_MPDDRC_WPMR         (*(__IO uint32_t*)0xF000C0E4U) /**< (MPDDRC) Write Protection Mode Register */
#define REG_MPDDRC_WPSR         (*(__I  uint32_t*)0xF000C0E8U) /**< (MPDDRC) Write Protection Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for MPDDRC peripheral ========== */
#define MPDDRC_INSTANCE_ID                       13         
#define MPDDRC_CLOCK_ID                          13         

#endif /* _SAMA5D2_MPDDRC_INSTANCE_ */
