/**
 * \file
 *
 * \brief Instance description for SDMMC0
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
#ifndef _SAMA5D2_SDMMC0_INSTANCE_H_
#define _SAMA5D2_SDMMC0_INSTANCE_H_

/* ========== Register definition for SDMMC0 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_SDMMC0_SSAR         (0xA0000000) /**< (SDMMC0) SDMA System Address / Argument 2 Register */
#define REG_SDMMC0_BSR          (0xA0000004) /**< (SDMMC0) Block Size Register */
#define REG_SDMMC0_BCR          (0xA0000006) /**< (SDMMC0) Block Count Register */
#define REG_SDMMC0_ARG1R        (0xA0000008) /**< (SDMMC0) Argument 1 Register */
#define REG_SDMMC0_TMR          (0xA000000C) /**< (SDMMC0) Transfer Mode Register */
#define REG_SDMMC0_CR           (0xA000000E) /**< (SDMMC0) Command Register */
#define REG_SDMMC0_RR           (0xA0000010) /**< (SDMMC0) Response Register */
#define REG_SDMMC0_RR0          (0xA0000010) /**< (SDMMC0) Response Register 0 */
#define REG_SDMMC0_RR1          (0xA0000014) /**< (SDMMC0) Response Register 1 */
#define REG_SDMMC0_RR2          (0xA0000018) /**< (SDMMC0) Response Register 2 */
#define REG_SDMMC0_RR3          (0xA000001C) /**< (SDMMC0) Response Register 3 */
#define REG_SDMMC0_BDPR         (0xA0000020) /**< (SDMMC0) Buffer Data Port Register */
#define REG_SDMMC0_PSR          (0xA0000024) /**< (SDMMC0) Present State Register */
#define REG_SDMMC0_HC1R         (0xA0000028) /**< (SDMMC0) Host Control 1 Register */
#define REG_SDMMC0_PCR          (0xA0000029) /**< (SDMMC0) Power Control Register */
#define REG_SDMMC0_BGCR         (0xA000002A) /**< (SDMMC0) Block Gap Control Register */
#define REG_SDMMC0_WCR          (0xA000002B) /**< (SDMMC0) Wakeup Control Register */
#define REG_SDMMC0_CCR          (0xA000002C) /**< (SDMMC0) Clock Control Register */
#define REG_SDMMC0_TCR          (0xA000002E) /**< (SDMMC0) Timeout Control Register */
#define REG_SDMMC0_SRR          (0xA000002F) /**< (SDMMC0) Software Reset Register */
#define REG_SDMMC0_NISTR        (0xA0000030) /**< (SDMMC0) Normal Interrupt Status Register */
#define REG_SDMMC0_EISTR        (0xA0000032) /**< (SDMMC0) Error Interrupt Status Register */
#define REG_SDMMC0_NISTER       (0xA0000034) /**< (SDMMC0) Normal Interrupt Status Enable Register */
#define REG_SDMMC0_EISTER       (0xA0000036) /**< (SDMMC0) Error Interrupt Status Enable Register */
#define REG_SDMMC0_NISIER       (0xA0000038) /**< (SDMMC0) Normal Interrupt Signal Enable Register */
#define REG_SDMMC0_EISIER       (0xA000003A) /**< (SDMMC0) Error Interrupt Signal Enable Register */
#define REG_SDMMC0_ACESR        (0xA000003C) /**< (SDMMC0) Auto CMD Error Status Register */
#define REG_SDMMC0_HC2R         (0xA000003E) /**< (SDMMC0) Host Control 2 Register */
#define REG_SDMMC0_CA0R         (0xA0000040) /**< (SDMMC0) Capabilities 0 Register */
#define REG_SDMMC0_CA1R         (0xA0000044) /**< (SDMMC0) Capabilities 1 Register */
#define REG_SDMMC0_MCCAR        (0xA0000048) /**< (SDMMC0) Maximum Current Capabilities Register */
#define REG_SDMMC0_FERACES      (0xA0000050) /**< (SDMMC0) Force Event Register for Auto CMD Error Status */
#define REG_SDMMC0_FEREIS       (0xA0000052) /**< (SDMMC0) Force Event Register for Error Interrupt Status */
#define REG_SDMMC0_AESR         (0xA0000054) /**< (SDMMC0) ADMA Error Status Register */
#define REG_SDMMC0_ASAR0        (0xA0000058) /**< (SDMMC0) ADMA System Address Register 0 */
#define REG_SDMMC0_PVR          (0xA0000060) /**< (SDMMC0) Preset Value Register 0 (for initialization) */
#define REG_SDMMC0_PVR0         (0xA0000060) /**< (SDMMC0) Preset Value Register 0 (for initialization) 0 */
#define REG_SDMMC0_PVR1         (0xA0000062) /**< (SDMMC0) Preset Value Register 0 (for initialization) 1 */
#define REG_SDMMC0_PVR2         (0xA0000064) /**< (SDMMC0) Preset Value Register 0 (for initialization) 2 */
#define REG_SDMMC0_PVR3         (0xA0000066) /**< (SDMMC0) Preset Value Register 0 (for initialization) 3 */
#define REG_SDMMC0_PVR4         (0xA0000068) /**< (SDMMC0) Preset Value Register 0 (for initialization) 4 */
#define REG_SDMMC0_PVR5         (0xA000006A) /**< (SDMMC0) Preset Value Register 0 (for initialization) 5 */
#define REG_SDMMC0_PVR6         (0xA000006C) /**< (SDMMC0) Preset Value Register 0 (for initialization) 6 */
#define REG_SDMMC0_PVR7         (0xA000006E) /**< (SDMMC0) Preset Value Register 0 (for initialization) 7 */
#define REG_SDMMC0_SISR         (0xA00000FC) /**< (SDMMC0) Slot Interrupt Status Register */
#define REG_SDMMC0_HCVR         (0xA00000FE) /**< (SDMMC0) Host Controller Version Register */
#define REG_SDMMC0_APSR         (0xA0000200) /**< (SDMMC0) Additional Present State Register */
#define REG_SDMMC0_MC1R         (0xA0000204) /**< (SDMMC0) e.MMC Control 1 Register */
#define REG_SDMMC0_MC2R         (0xA0000205) /**< (SDMMC0) e.MMC Control 2 Register */
#define REG_SDMMC0_ACR          (0xA0000208) /**< (SDMMC0) AHB Control Register */
#define REG_SDMMC0_CC2R         (0xA000020C) /**< (SDMMC0) Clock Control 2 Register */
#define REG_SDMMC0_RTC1R        (0xA0000210) /**< (SDMMC0) Retuning Timer Control 1 Register */
#define REG_SDMMC0_RTC2R        (0xA0000211) /**< (SDMMC0) Retuning Timer Control 2 Register */
#define REG_SDMMC0_RTCVR        (0xA0000214) /**< (SDMMC0) Retuning Timer Counter Value Register */
#define REG_SDMMC0_RTISTER      (0xA0000218) /**< (SDMMC0) Retuning Timer Interrupt Status Enable Register */
#define REG_SDMMC0_RTISIER      (0xA0000219) /**< (SDMMC0) Retuning Timer Interrupt Signal Enable Register */
#define REG_SDMMC0_RTISTR       (0xA000021C) /**< (SDMMC0) Retuning Timer Interrupt Status Register */
#define REG_SDMMC0_RTSSR        (0xA000021D) /**< (SDMMC0) Retuning Timer Status Slots Register */
#define REG_SDMMC0_TUNCR        (0xA0000220) /**< (SDMMC0) Tuning Control Register */
#define REG_SDMMC0_CACR         (0xA0000230) /**< (SDMMC0) Capabilities Control Register */
#define REG_SDMMC0_CALCR        (0xA0000240) /**< (SDMMC0) Calibration Control Register */

#else

#define REG_SDMMC0_SSAR         (*(__IO uint32_t*)0xA0000000U) /**< (SDMMC0) SDMA System Address / Argument 2 Register */
#define REG_SDMMC0_BSR          (*(__IO uint16_t*)0xA0000004U) /**< (SDMMC0) Block Size Register */
#define REG_SDMMC0_BCR          (*(__IO uint16_t*)0xA0000006U) /**< (SDMMC0) Block Count Register */
#define REG_SDMMC0_ARG1R        (*(__IO uint32_t*)0xA0000008U) /**< (SDMMC0) Argument 1 Register */
#define REG_SDMMC0_TMR          (*(__IO uint16_t*)0xA000000CU) /**< (SDMMC0) Transfer Mode Register */
#define REG_SDMMC0_CR           (*(__IO uint16_t*)0xA000000EU) /**< (SDMMC0) Command Register */
#define REG_SDMMC0_RR           (*(__I  uint32_t*)0xA0000010U) /**< (SDMMC0) Response Register */
#define REG_SDMMC0_RR0          (*(__I  uint32_t*)0xA0000010U) /**< (SDMMC0) Response Register 0 */
#define REG_SDMMC0_RR1          (*(__I  uint32_t*)0xA0000014U) /**< (SDMMC0) Response Register 1 */
#define REG_SDMMC0_RR2          (*(__I  uint32_t*)0xA0000018U) /**< (SDMMC0) Response Register 2 */
#define REG_SDMMC0_RR3          (*(__I  uint32_t*)0xA000001CU) /**< (SDMMC0) Response Register 3 */
#define REG_SDMMC0_BDPR         (*(__IO uint32_t*)0xA0000020U) /**< (SDMMC0) Buffer Data Port Register */
#define REG_SDMMC0_PSR          (*(__I  uint32_t*)0xA0000024U) /**< (SDMMC0) Present State Register */
#define REG_SDMMC0_HC1R         (*(__IO uint8_t*)0xA0000028U) /**< (SDMMC0) Host Control 1 Register */
#define REG_SDMMC0_PCR          (*(__IO uint8_t*)0xA0000029U) /**< (SDMMC0) Power Control Register */
#define REG_SDMMC0_BGCR         (*(__IO uint8_t*)0xA000002AU) /**< (SDMMC0) Block Gap Control Register */
#define REG_SDMMC0_WCR          (*(__IO uint8_t*)0xA000002BU) /**< (SDMMC0) Wakeup Control Register */
#define REG_SDMMC0_CCR          (*(__IO uint16_t*)0xA000002CU) /**< (SDMMC0) Clock Control Register */
#define REG_SDMMC0_TCR          (*(__IO uint8_t*)0xA000002EU) /**< (SDMMC0) Timeout Control Register */
#define REG_SDMMC0_SRR          (*(__IO uint8_t*)0xA000002FU) /**< (SDMMC0) Software Reset Register */
#define REG_SDMMC0_NISTR        (*(__IO uint16_t*)0xA0000030U) /**< (SDMMC0) Normal Interrupt Status Register */
#define REG_SDMMC0_EISTR        (*(__IO uint16_t*)0xA0000032U) /**< (SDMMC0) Error Interrupt Status Register */
#define REG_SDMMC0_NISTER       (*(__IO uint16_t*)0xA0000034U) /**< (SDMMC0) Normal Interrupt Status Enable Register */
#define REG_SDMMC0_EISTER       (*(__IO uint16_t*)0xA0000036U) /**< (SDMMC0) Error Interrupt Status Enable Register */
#define REG_SDMMC0_NISIER       (*(__IO uint16_t*)0xA0000038U) /**< (SDMMC0) Normal Interrupt Signal Enable Register */
#define REG_SDMMC0_EISIER       (*(__IO uint16_t*)0xA000003AU) /**< (SDMMC0) Error Interrupt Signal Enable Register */
#define REG_SDMMC0_ACESR        (*(__I  uint16_t*)0xA000003CU) /**< (SDMMC0) Auto CMD Error Status Register */
#define REG_SDMMC0_HC2R         (*(__IO uint16_t*)0xA000003EU) /**< (SDMMC0) Host Control 2 Register */
#define REG_SDMMC0_CA0R         (*(__I  uint32_t*)0xA0000040U) /**< (SDMMC0) Capabilities 0 Register */
#define REG_SDMMC0_CA1R         (*(__IO uint32_t*)0xA0000044U) /**< (SDMMC0) Capabilities 1 Register */
#define REG_SDMMC0_MCCAR        (*(__IO uint32_t*)0xA0000048U) /**< (SDMMC0) Maximum Current Capabilities Register */
#define REG_SDMMC0_FERACES      (*(__O  uint16_t*)0xA0000050U) /**< (SDMMC0) Force Event Register for Auto CMD Error Status */
#define REG_SDMMC0_FEREIS       (*(__O  uint16_t*)0xA0000052U) /**< (SDMMC0) Force Event Register for Error Interrupt Status */
#define REG_SDMMC0_AESR         (*(__I  uint8_t*)0xA0000054U) /**< (SDMMC0) ADMA Error Status Register */
#define REG_SDMMC0_ASAR0        (*(__IO uint32_t*)0xA0000058U) /**< (SDMMC0) ADMA System Address Register 0 */
#define REG_SDMMC0_PVR          (*(__IO uint16_t*)0xA0000060U) /**< (SDMMC0) Preset Value Register 0 (for initialization) */
#define REG_SDMMC0_PVR0         (*(__IO uint16_t*)0xA0000060U) /**< (SDMMC0) Preset Value Register 0 (for initialization) 0 */
#define REG_SDMMC0_PVR1         (*(__IO uint16_t*)0xA0000062U) /**< (SDMMC0) Preset Value Register 0 (for initialization) 1 */
#define REG_SDMMC0_PVR2         (*(__IO uint16_t*)0xA0000064U) /**< (SDMMC0) Preset Value Register 0 (for initialization) 2 */
#define REG_SDMMC0_PVR3         (*(__IO uint16_t*)0xA0000066U) /**< (SDMMC0) Preset Value Register 0 (for initialization) 3 */
#define REG_SDMMC0_PVR4         (*(__IO uint16_t*)0xA0000068U) /**< (SDMMC0) Preset Value Register 0 (for initialization) 4 */
#define REG_SDMMC0_PVR5         (*(__IO uint16_t*)0xA000006AU) /**< (SDMMC0) Preset Value Register 0 (for initialization) 5 */
#define REG_SDMMC0_PVR6         (*(__IO uint16_t*)0xA000006CU) /**< (SDMMC0) Preset Value Register 0 (for initialization) 6 */
#define REG_SDMMC0_PVR7         (*(__IO uint16_t*)0xA000006EU) /**< (SDMMC0) Preset Value Register 0 (for initialization) 7 */
#define REG_SDMMC0_SISR         (*(__I  uint16_t*)0xA00000FCU) /**< (SDMMC0) Slot Interrupt Status Register */
#define REG_SDMMC0_HCVR         (*(__I  uint16_t*)0xA00000FEU) /**< (SDMMC0) Host Controller Version Register */
#define REG_SDMMC0_APSR         (*(__I  uint32_t*)0xA0000200U) /**< (SDMMC0) Additional Present State Register */
#define REG_SDMMC0_MC1R         (*(__IO uint8_t*)0xA0000204U) /**< (SDMMC0) e.MMC Control 1 Register */
#define REG_SDMMC0_MC2R         (*(__O  uint8_t*)0xA0000205U) /**< (SDMMC0) e.MMC Control 2 Register */
#define REG_SDMMC0_ACR          (*(__IO uint32_t*)0xA0000208U) /**< (SDMMC0) AHB Control Register */
#define REG_SDMMC0_CC2R         (*(__IO uint32_t*)0xA000020CU) /**< (SDMMC0) Clock Control 2 Register */
#define REG_SDMMC0_RTC1R        (*(__IO uint8_t*)0xA0000210U) /**< (SDMMC0) Retuning Timer Control 1 Register */
#define REG_SDMMC0_RTC2R        (*(__O  uint8_t*)0xA0000211U) /**< (SDMMC0) Retuning Timer Control 2 Register */
#define REG_SDMMC0_RTCVR        (*(__IO uint32_t*)0xA0000214U) /**< (SDMMC0) Retuning Timer Counter Value Register */
#define REG_SDMMC0_RTISTER      (*(__IO uint8_t*)0xA0000218U) /**< (SDMMC0) Retuning Timer Interrupt Status Enable Register */
#define REG_SDMMC0_RTISIER      (*(__IO uint8_t*)0xA0000219U) /**< (SDMMC0) Retuning Timer Interrupt Signal Enable Register */
#define REG_SDMMC0_RTISTR       (*(__IO uint8_t*)0xA000021CU) /**< (SDMMC0) Retuning Timer Interrupt Status Register */
#define REG_SDMMC0_RTSSR        (*(__I  uint8_t*)0xA000021DU) /**< (SDMMC0) Retuning Timer Status Slots Register */
#define REG_SDMMC0_TUNCR        (*(__IO uint32_t*)0xA0000220U) /**< (SDMMC0) Tuning Control Register */
#define REG_SDMMC0_CACR         (*(__IO uint32_t*)0xA0000230U) /**< (SDMMC0) Capabilities Control Register */
#define REG_SDMMC0_CALCR        (*(__IO uint32_t*)0xA0000240U) /**< (SDMMC0) Calibration Control Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for SDMMC0 peripheral ========== */
#define SDMMC0_INSTANCE_ID                       31         
#define SDMMC0_CLOCK_ID                          31         

#endif /* _SAMA5D2_SDMMC0_INSTANCE_ */
