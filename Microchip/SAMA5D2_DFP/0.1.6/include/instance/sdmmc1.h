/**
 * \file
 *
 * \brief Instance description for SDMMC1
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
#ifndef _SAMA5D2_SDMMC1_INSTANCE_H_
#define _SAMA5D2_SDMMC1_INSTANCE_H_

/* ========== Register definition for SDMMC1 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_SDMMC1_SSAR         (0xB0000000) /**< (SDMMC1) SDMA System Address / Argument 2 Register */
#define REG_SDMMC1_BSR          (0xB0000004) /**< (SDMMC1) Block Size Register */
#define REG_SDMMC1_BCR          (0xB0000006) /**< (SDMMC1) Block Count Register */
#define REG_SDMMC1_ARG1R        (0xB0000008) /**< (SDMMC1) Argument 1 Register */
#define REG_SDMMC1_TMR          (0xB000000C) /**< (SDMMC1) Transfer Mode Register */
#define REG_SDMMC1_CR           (0xB000000E) /**< (SDMMC1) Command Register */
#define REG_SDMMC1_RR           (0xB0000010) /**< (SDMMC1) Response Register */
#define REG_SDMMC1_RR0          (0xB0000010) /**< (SDMMC1) Response Register 0 */
#define REG_SDMMC1_RR1          (0xB0000014) /**< (SDMMC1) Response Register 1 */
#define REG_SDMMC1_RR2          (0xB0000018) /**< (SDMMC1) Response Register 2 */
#define REG_SDMMC1_RR3          (0xB000001C) /**< (SDMMC1) Response Register 3 */
#define REG_SDMMC1_BDPR         (0xB0000020) /**< (SDMMC1) Buffer Data Port Register */
#define REG_SDMMC1_PSR          (0xB0000024) /**< (SDMMC1) Present State Register */
#define REG_SDMMC1_HC1R         (0xB0000028) /**< (SDMMC1) Host Control 1 Register */
#define REG_SDMMC1_PCR          (0xB0000029) /**< (SDMMC1) Power Control Register */
#define REG_SDMMC1_BGCR         (0xB000002A) /**< (SDMMC1) Block Gap Control Register */
#define REG_SDMMC1_WCR          (0xB000002B) /**< (SDMMC1) Wakeup Control Register */
#define REG_SDMMC1_CCR          (0xB000002C) /**< (SDMMC1) Clock Control Register */
#define REG_SDMMC1_TCR          (0xB000002E) /**< (SDMMC1) Timeout Control Register */
#define REG_SDMMC1_SRR          (0xB000002F) /**< (SDMMC1) Software Reset Register */
#define REG_SDMMC1_NISTR        (0xB0000030) /**< (SDMMC1) Normal Interrupt Status Register */
#define REG_SDMMC1_EISTR        (0xB0000032) /**< (SDMMC1) Error Interrupt Status Register */
#define REG_SDMMC1_NISTER       (0xB0000034) /**< (SDMMC1) Normal Interrupt Status Enable Register */
#define REG_SDMMC1_EISTER       (0xB0000036) /**< (SDMMC1) Error Interrupt Status Enable Register */
#define REG_SDMMC1_NISIER       (0xB0000038) /**< (SDMMC1) Normal Interrupt Signal Enable Register */
#define REG_SDMMC1_EISIER       (0xB000003A) /**< (SDMMC1) Error Interrupt Signal Enable Register */
#define REG_SDMMC1_ACESR        (0xB000003C) /**< (SDMMC1) Auto CMD Error Status Register */
#define REG_SDMMC1_HC2R         (0xB000003E) /**< (SDMMC1) Host Control 2 Register */
#define REG_SDMMC1_CA0R         (0xB0000040) /**< (SDMMC1) Capabilities 0 Register */
#define REG_SDMMC1_CA1R         (0xB0000044) /**< (SDMMC1) Capabilities 1 Register */
#define REG_SDMMC1_MCCAR        (0xB0000048) /**< (SDMMC1) Maximum Current Capabilities Register */
#define REG_SDMMC1_FERACES      (0xB0000050) /**< (SDMMC1) Force Event Register for Auto CMD Error Status */
#define REG_SDMMC1_FEREIS       (0xB0000052) /**< (SDMMC1) Force Event Register for Error Interrupt Status */
#define REG_SDMMC1_AESR         (0xB0000054) /**< (SDMMC1) ADMA Error Status Register */
#define REG_SDMMC1_ASAR0        (0xB0000058) /**< (SDMMC1) ADMA System Address Register 0 */
#define REG_SDMMC1_PVR          (0xB0000060) /**< (SDMMC1) Preset Value Register 0 (for initialization) */
#define REG_SDMMC1_PVR0         (0xB0000060) /**< (SDMMC1) Preset Value Register 0 (for initialization) 0 */
#define REG_SDMMC1_PVR1         (0xB0000062) /**< (SDMMC1) Preset Value Register 0 (for initialization) 1 */
#define REG_SDMMC1_PVR2         (0xB0000064) /**< (SDMMC1) Preset Value Register 0 (for initialization) 2 */
#define REG_SDMMC1_PVR3         (0xB0000066) /**< (SDMMC1) Preset Value Register 0 (for initialization) 3 */
#define REG_SDMMC1_PVR4         (0xB0000068) /**< (SDMMC1) Preset Value Register 0 (for initialization) 4 */
#define REG_SDMMC1_PVR5         (0xB000006A) /**< (SDMMC1) Preset Value Register 0 (for initialization) 5 */
#define REG_SDMMC1_PVR6         (0xB000006C) /**< (SDMMC1) Preset Value Register 0 (for initialization) 6 */
#define REG_SDMMC1_PVR7         (0xB000006E) /**< (SDMMC1) Preset Value Register 0 (for initialization) 7 */
#define REG_SDMMC1_SISR         (0xB00000FC) /**< (SDMMC1) Slot Interrupt Status Register */
#define REG_SDMMC1_HCVR         (0xB00000FE) /**< (SDMMC1) Host Controller Version Register */
#define REG_SDMMC1_APSR         (0xB0000200) /**< (SDMMC1) Additional Present State Register */
#define REG_SDMMC1_MC1R         (0xB0000204) /**< (SDMMC1) e.MMC Control 1 Register */
#define REG_SDMMC1_MC2R         (0xB0000205) /**< (SDMMC1) e.MMC Control 2 Register */
#define REG_SDMMC1_ACR          (0xB0000208) /**< (SDMMC1) AHB Control Register */
#define REG_SDMMC1_CC2R         (0xB000020C) /**< (SDMMC1) Clock Control 2 Register */
#define REG_SDMMC1_RTC1R        (0xB0000210) /**< (SDMMC1) Retuning Timer Control 1 Register */
#define REG_SDMMC1_RTC2R        (0xB0000211) /**< (SDMMC1) Retuning Timer Control 2 Register */
#define REG_SDMMC1_RTCVR        (0xB0000214) /**< (SDMMC1) Retuning Timer Counter Value Register */
#define REG_SDMMC1_RTISTER      (0xB0000218) /**< (SDMMC1) Retuning Timer Interrupt Status Enable Register */
#define REG_SDMMC1_RTISIER      (0xB0000219) /**< (SDMMC1) Retuning Timer Interrupt Signal Enable Register */
#define REG_SDMMC1_RTISTR       (0xB000021C) /**< (SDMMC1) Retuning Timer Interrupt Status Register */
#define REG_SDMMC1_RTSSR        (0xB000021D) /**< (SDMMC1) Retuning Timer Status Slots Register */
#define REG_SDMMC1_TUNCR        (0xB0000220) /**< (SDMMC1) Tuning Control Register */
#define REG_SDMMC1_CACR         (0xB0000230) /**< (SDMMC1) Capabilities Control Register */
#define REG_SDMMC1_CALCR        (0xB0000240) /**< (SDMMC1) Calibration Control Register */

#else

#define REG_SDMMC1_SSAR         (*(__IO uint32_t*)0xB0000000U) /**< (SDMMC1) SDMA System Address / Argument 2 Register */
#define REG_SDMMC1_BSR          (*(__IO uint16_t*)0xB0000004U) /**< (SDMMC1) Block Size Register */
#define REG_SDMMC1_BCR          (*(__IO uint16_t*)0xB0000006U) /**< (SDMMC1) Block Count Register */
#define REG_SDMMC1_ARG1R        (*(__IO uint32_t*)0xB0000008U) /**< (SDMMC1) Argument 1 Register */
#define REG_SDMMC1_TMR          (*(__IO uint16_t*)0xB000000CU) /**< (SDMMC1) Transfer Mode Register */
#define REG_SDMMC1_CR           (*(__IO uint16_t*)0xB000000EU) /**< (SDMMC1) Command Register */
#define REG_SDMMC1_RR           (*(__I  uint32_t*)0xB0000010U) /**< (SDMMC1) Response Register */
#define REG_SDMMC1_RR0          (*(__I  uint32_t*)0xB0000010U) /**< (SDMMC1) Response Register 0 */
#define REG_SDMMC1_RR1          (*(__I  uint32_t*)0xB0000014U) /**< (SDMMC1) Response Register 1 */
#define REG_SDMMC1_RR2          (*(__I  uint32_t*)0xB0000018U) /**< (SDMMC1) Response Register 2 */
#define REG_SDMMC1_RR3          (*(__I  uint32_t*)0xB000001CU) /**< (SDMMC1) Response Register 3 */
#define REG_SDMMC1_BDPR         (*(__IO uint32_t*)0xB0000020U) /**< (SDMMC1) Buffer Data Port Register */
#define REG_SDMMC1_PSR          (*(__I  uint32_t*)0xB0000024U) /**< (SDMMC1) Present State Register */
#define REG_SDMMC1_HC1R         (*(__IO uint8_t*)0xB0000028U) /**< (SDMMC1) Host Control 1 Register */
#define REG_SDMMC1_PCR          (*(__IO uint8_t*)0xB0000029U) /**< (SDMMC1) Power Control Register */
#define REG_SDMMC1_BGCR         (*(__IO uint8_t*)0xB000002AU) /**< (SDMMC1) Block Gap Control Register */
#define REG_SDMMC1_WCR          (*(__IO uint8_t*)0xB000002BU) /**< (SDMMC1) Wakeup Control Register */
#define REG_SDMMC1_CCR          (*(__IO uint16_t*)0xB000002CU) /**< (SDMMC1) Clock Control Register */
#define REG_SDMMC1_TCR          (*(__IO uint8_t*)0xB000002EU) /**< (SDMMC1) Timeout Control Register */
#define REG_SDMMC1_SRR          (*(__IO uint8_t*)0xB000002FU) /**< (SDMMC1) Software Reset Register */
#define REG_SDMMC1_NISTR        (*(__IO uint16_t*)0xB0000030U) /**< (SDMMC1) Normal Interrupt Status Register */
#define REG_SDMMC1_EISTR        (*(__IO uint16_t*)0xB0000032U) /**< (SDMMC1) Error Interrupt Status Register */
#define REG_SDMMC1_NISTER       (*(__IO uint16_t*)0xB0000034U) /**< (SDMMC1) Normal Interrupt Status Enable Register */
#define REG_SDMMC1_EISTER       (*(__IO uint16_t*)0xB0000036U) /**< (SDMMC1) Error Interrupt Status Enable Register */
#define REG_SDMMC1_NISIER       (*(__IO uint16_t*)0xB0000038U) /**< (SDMMC1) Normal Interrupt Signal Enable Register */
#define REG_SDMMC1_EISIER       (*(__IO uint16_t*)0xB000003AU) /**< (SDMMC1) Error Interrupt Signal Enable Register */
#define REG_SDMMC1_ACESR        (*(__I  uint16_t*)0xB000003CU) /**< (SDMMC1) Auto CMD Error Status Register */
#define REG_SDMMC1_HC2R         (*(__IO uint16_t*)0xB000003EU) /**< (SDMMC1) Host Control 2 Register */
#define REG_SDMMC1_CA0R         (*(__I  uint32_t*)0xB0000040U) /**< (SDMMC1) Capabilities 0 Register */
#define REG_SDMMC1_CA1R         (*(__IO uint32_t*)0xB0000044U) /**< (SDMMC1) Capabilities 1 Register */
#define REG_SDMMC1_MCCAR        (*(__IO uint32_t*)0xB0000048U) /**< (SDMMC1) Maximum Current Capabilities Register */
#define REG_SDMMC1_FERACES      (*(__O  uint16_t*)0xB0000050U) /**< (SDMMC1) Force Event Register for Auto CMD Error Status */
#define REG_SDMMC1_FEREIS       (*(__O  uint16_t*)0xB0000052U) /**< (SDMMC1) Force Event Register for Error Interrupt Status */
#define REG_SDMMC1_AESR         (*(__I  uint8_t*)0xB0000054U) /**< (SDMMC1) ADMA Error Status Register */
#define REG_SDMMC1_ASAR0        (*(__IO uint32_t*)0xB0000058U) /**< (SDMMC1) ADMA System Address Register 0 */
#define REG_SDMMC1_PVR          (*(__IO uint16_t*)0xB0000060U) /**< (SDMMC1) Preset Value Register 0 (for initialization) */
#define REG_SDMMC1_PVR0         (*(__IO uint16_t*)0xB0000060U) /**< (SDMMC1) Preset Value Register 0 (for initialization) 0 */
#define REG_SDMMC1_PVR1         (*(__IO uint16_t*)0xB0000062U) /**< (SDMMC1) Preset Value Register 0 (for initialization) 1 */
#define REG_SDMMC1_PVR2         (*(__IO uint16_t*)0xB0000064U) /**< (SDMMC1) Preset Value Register 0 (for initialization) 2 */
#define REG_SDMMC1_PVR3         (*(__IO uint16_t*)0xB0000066U) /**< (SDMMC1) Preset Value Register 0 (for initialization) 3 */
#define REG_SDMMC1_PVR4         (*(__IO uint16_t*)0xB0000068U) /**< (SDMMC1) Preset Value Register 0 (for initialization) 4 */
#define REG_SDMMC1_PVR5         (*(__IO uint16_t*)0xB000006AU) /**< (SDMMC1) Preset Value Register 0 (for initialization) 5 */
#define REG_SDMMC1_PVR6         (*(__IO uint16_t*)0xB000006CU) /**< (SDMMC1) Preset Value Register 0 (for initialization) 6 */
#define REG_SDMMC1_PVR7         (*(__IO uint16_t*)0xB000006EU) /**< (SDMMC1) Preset Value Register 0 (for initialization) 7 */
#define REG_SDMMC1_SISR         (*(__I  uint16_t*)0xB00000FCU) /**< (SDMMC1) Slot Interrupt Status Register */
#define REG_SDMMC1_HCVR         (*(__I  uint16_t*)0xB00000FEU) /**< (SDMMC1) Host Controller Version Register */
#define REG_SDMMC1_APSR         (*(__I  uint32_t*)0xB0000200U) /**< (SDMMC1) Additional Present State Register */
#define REG_SDMMC1_MC1R         (*(__IO uint8_t*)0xB0000204U) /**< (SDMMC1) e.MMC Control 1 Register */
#define REG_SDMMC1_MC2R         (*(__O  uint8_t*)0xB0000205U) /**< (SDMMC1) e.MMC Control 2 Register */
#define REG_SDMMC1_ACR          (*(__IO uint32_t*)0xB0000208U) /**< (SDMMC1) AHB Control Register */
#define REG_SDMMC1_CC2R         (*(__IO uint32_t*)0xB000020CU) /**< (SDMMC1) Clock Control 2 Register */
#define REG_SDMMC1_RTC1R        (*(__IO uint8_t*)0xB0000210U) /**< (SDMMC1) Retuning Timer Control 1 Register */
#define REG_SDMMC1_RTC2R        (*(__O  uint8_t*)0xB0000211U) /**< (SDMMC1) Retuning Timer Control 2 Register */
#define REG_SDMMC1_RTCVR        (*(__IO uint32_t*)0xB0000214U) /**< (SDMMC1) Retuning Timer Counter Value Register */
#define REG_SDMMC1_RTISTER      (*(__IO uint8_t*)0xB0000218U) /**< (SDMMC1) Retuning Timer Interrupt Status Enable Register */
#define REG_SDMMC1_RTISIER      (*(__IO uint8_t*)0xB0000219U) /**< (SDMMC1) Retuning Timer Interrupt Signal Enable Register */
#define REG_SDMMC1_RTISTR       (*(__IO uint8_t*)0xB000021CU) /**< (SDMMC1) Retuning Timer Interrupt Status Register */
#define REG_SDMMC1_RTSSR        (*(__I  uint8_t*)0xB000021DU) /**< (SDMMC1) Retuning Timer Status Slots Register */
#define REG_SDMMC1_TUNCR        (*(__IO uint32_t*)0xB0000220U) /**< (SDMMC1) Tuning Control Register */
#define REG_SDMMC1_CACR         (*(__IO uint32_t*)0xB0000230U) /**< (SDMMC1) Capabilities Control Register */
#define REG_SDMMC1_CALCR        (*(__IO uint32_t*)0xB0000240U) /**< (SDMMC1) Calibration Control Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for SDMMC1 peripheral ========== */
#define SDMMC1_INSTANCE_ID                       32         
#define SDMMC1_CLOCK_ID                          32         

#endif /* _SAMA5D2_SDMMC1_INSTANCE_ */
