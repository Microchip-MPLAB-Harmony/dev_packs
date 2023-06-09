/*
 * Component description for SFR
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2023-03-27T04:07:22Z */
#ifndef _SAMRH707_SFR_COMPONENT_H_
#define _SAMRH707_SFR_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SFR                                          */
/* ************************************************************************** */

/* -------- SFR_ROMCODE_DBG : (SFR Offset: 0x00) (R/W 32) ROM code debug -------- */
#define SFR_ROMCODE_DBG_ROM_CODE_DEBUG_Pos    _UINT32_(0)                                          /* (SFR_ROMCODE_DBG) Rom code debug step Position */
#define SFR_ROMCODE_DBG_ROM_CODE_DEBUG_Msk    (_UINT32_(0xFFFFFFFF) << SFR_ROMCODE_DBG_ROM_CODE_DEBUG_Pos) /* (SFR_ROMCODE_DBG) Rom code debug step Mask */
#define SFR_ROMCODE_DBG_ROM_CODE_DEBUG(value) (SFR_ROMCODE_DBG_ROM_CODE_DEBUG_Msk & (_UINT32_(value) << SFR_ROMCODE_DBG_ROM_CODE_DEBUG_Pos)) /* Assigment of value for ROM_CODE_DEBUG in the SFR_ROMCODE_DBG register */
#define SFR_ROMCODE_DBG_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (SFR_ROMCODE_DBG) Register Mask  */


/* -------- SFR_CAN0 : (SFR Offset: 0xA0) (R/W 32) CAN0 MSB Base Address -------- */
#define SFR_CAN0_EXT_MEM_ADDR_Pos             _UINT32_(16)                                         /* (SFR_CAN0) MSB Base Address Position */
#define SFR_CAN0_EXT_MEM_ADDR_Msk             (_UINT32_(0xFFFF) << SFR_CAN0_EXT_MEM_ADDR_Pos)      /* (SFR_CAN0) MSB Base Address Mask */
#define SFR_CAN0_EXT_MEM_ADDR(value)          (SFR_CAN0_EXT_MEM_ADDR_Msk & (_UINT32_(value) << SFR_CAN0_EXT_MEM_ADDR_Pos)) /* Assigment of value for EXT_MEM_ADDR in the SFR_CAN0 register */
#define SFR_CAN0_Msk                          _UINT32_(0xFFFF0000)                                 /* (SFR_CAN0) Register Mask  */


/* -------- SFR_CAN1 : (SFR Offset: 0xA4) (R/W 32) CAN1 MSB Base Address -------- */
#define SFR_CAN1_EXT_MEM_ADDR_Pos             _UINT32_(16)                                         /* (SFR_CAN1) MSB Base Address Position */
#define SFR_CAN1_EXT_MEM_ADDR_Msk             (_UINT32_(0xFFFF) << SFR_CAN1_EXT_MEM_ADDR_Pos)      /* (SFR_CAN1) MSB Base Address Mask */
#define SFR_CAN1_EXT_MEM_ADDR(value)          (SFR_CAN1_EXT_MEM_ADDR_Msk & (_UINT32_(value) << SFR_CAN1_EXT_MEM_ADDR_Pos)) /* Assigment of value for EXT_MEM_ADDR in the SFR_CAN1 register */
#define SFR_CAN1_Msk                          _UINT32_(0xFFFF0000)                                 /* (SFR_CAN1) Register Mask  */


/* -------- SFR_BOOT_CFG : (SFR Offset: 0xB0) (R/W 32) BOOT Configuration -------- */
#define SFR_BOOT_CFG_BOOT_SEL_Pos             _UINT32_(0)                                          /* (SFR_BOOT_CFG) BOOT_MODE selected Position */
#define SFR_BOOT_CFG_BOOT_SEL_Msk             (_UINT32_(0x7) << SFR_BOOT_CFG_BOOT_SEL_Pos)         /* (SFR_BOOT_CFG) BOOT_MODE selected Mask */
#define SFR_BOOT_CFG_BOOT_SEL(value)          (SFR_BOOT_CFG_BOOT_SEL_Msk & (_UINT32_(value) << SFR_BOOT_CFG_BOOT_SEL_Pos)) /* Assigment of value for BOOT_SEL in the SFR_BOOT_CFG register */
#define SFR_BOOT_CFG_Msk                      _UINT32_(0x00000007)                                 /* (SFR_BOOT_CFG) Register Mask  */


/* -------- SFR_WPMR : (SFR Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define SFR_WPMR_WPEN_Pos                     _UINT32_(0)                                          /* (SFR_WPMR) Write Protection Enable Position */
#define SFR_WPMR_WPEN_Msk                     (_UINT32_(0x1) << SFR_WPMR_WPEN_Pos)                 /* (SFR_WPMR) Write Protection Enable Mask */
#define SFR_WPMR_WPEN(value)                  (SFR_WPMR_WPEN_Msk & (_UINT32_(value) << SFR_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the SFR_WPMR register */
#define SFR_WPMR_WPKEY_Pos                    _UINT32_(8)                                          /* (SFR_WPMR) Write Protection Key Position */
#define SFR_WPMR_WPKEY_Msk                    (_UINT32_(0xFFFFFF) << SFR_WPMR_WPKEY_Pos)           /* (SFR_WPMR) Write Protection Key Mask */
#define SFR_WPMR_WPKEY(value)                 (SFR_WPMR_WPKEY_Msk & (_UINT32_(value) << SFR_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the SFR_WPMR register */
#define   SFR_WPMR_WPKEY_PASSWD_Val           _UINT32_(0x534652)                                   /* (SFR_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define SFR_WPMR_WPKEY_PASSWD                 (SFR_WPMR_WPKEY_PASSWD_Val << SFR_WPMR_WPKEY_Pos)    /* (SFR_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define SFR_WPMR_Msk                          _UINT32_(0xFFFFFF01)                                 /* (SFR_WPMR) Register Mask  */


/** \brief SFR register offsets definitions */
#define SFR_ROMCODE_DBG_REG_OFST       _UINT32_(0x00)      /* (SFR_ROMCODE_DBG) ROM code debug Offset */
#define SFR_ROMCODE_DBG0_REG_OFST      _UINT32_(0x00)      /* (SFR_ROMCODE_DBG0) ROM code debug Offset */
#define SFR_ROMCODE_DBG1_REG_OFST      _UINT32_(0x04)      /* (SFR_ROMCODE_DBG1) ROM code debug Offset */
#define SFR_ROMCODE_DBG2_REG_OFST      _UINT32_(0x08)      /* (SFR_ROMCODE_DBG2) ROM code debug Offset */
#define SFR_ROMCODE_DBG3_REG_OFST      _UINT32_(0x0C)      /* (SFR_ROMCODE_DBG3) ROM code debug Offset */
#define SFR_ROMCODE_DBG4_REG_OFST      _UINT32_(0x10)      /* (SFR_ROMCODE_DBG4) ROM code debug Offset */
#define SFR_ROMCODE_DBG5_REG_OFST      _UINT32_(0x14)      /* (SFR_ROMCODE_DBG5) ROM code debug Offset */
#define SFR_ROMCODE_DBG6_REG_OFST      _UINT32_(0x18)      /* (SFR_ROMCODE_DBG6) ROM code debug Offset */
#define SFR_ROMCODE_DBG7_REG_OFST      _UINT32_(0x1C)      /* (SFR_ROMCODE_DBG7) ROM code debug Offset */
#define SFR_ROMCODE_DBG8_REG_OFST      _UINT32_(0x20)      /* (SFR_ROMCODE_DBG8) ROM code debug Offset */
#define SFR_ROMCODE_DBG9_REG_OFST      _UINT32_(0x24)      /* (SFR_ROMCODE_DBG9) ROM code debug Offset */
#define SFR_ROMCODE_DBG10_REG_OFST     _UINT32_(0x28)      /* (SFR_ROMCODE_DBG10) ROM code debug Offset */
#define SFR_ROMCODE_DBG11_REG_OFST     _UINT32_(0x2C)      /* (SFR_ROMCODE_DBG11) ROM code debug Offset */
#define SFR_ROMCODE_DBG12_REG_OFST     _UINT32_(0x30)      /* (SFR_ROMCODE_DBG12) ROM code debug Offset */
#define SFR_ROMCODE_DBG13_REG_OFST     _UINT32_(0x34)      /* (SFR_ROMCODE_DBG13) ROM code debug Offset */
#define SFR_ROMCODE_DBG14_REG_OFST     _UINT32_(0x38)      /* (SFR_ROMCODE_DBG14) ROM code debug Offset */
#define SFR_ROMCODE_DBG15_REG_OFST     _UINT32_(0x3C)      /* (SFR_ROMCODE_DBG15) ROM code debug Offset */
#define SFR_ROMCODE_DBG16_REG_OFST     _UINT32_(0x40)      /* (SFR_ROMCODE_DBG16) ROM code debug Offset */
#define SFR_ROMCODE_DBG17_REG_OFST     _UINT32_(0x44)      /* (SFR_ROMCODE_DBG17) ROM code debug Offset */
#define SFR_ROMCODE_DBG18_REG_OFST     _UINT32_(0x48)      /* (SFR_ROMCODE_DBG18) ROM code debug Offset */
#define SFR_ROMCODE_DBG19_REG_OFST     _UINT32_(0x4C)      /* (SFR_ROMCODE_DBG19) ROM code debug Offset */
#define SFR_ROMCODE_DBG20_REG_OFST     _UINT32_(0x50)      /* (SFR_ROMCODE_DBG20) ROM code debug Offset */
#define SFR_ROMCODE_DBG21_REG_OFST     _UINT32_(0x54)      /* (SFR_ROMCODE_DBG21) ROM code debug Offset */
#define SFR_ROMCODE_DBG22_REG_OFST     _UINT32_(0x58)      /* (SFR_ROMCODE_DBG22) ROM code debug Offset */
#define SFR_ROMCODE_DBG23_REG_OFST     _UINT32_(0x5C)      /* (SFR_ROMCODE_DBG23) ROM code debug Offset */
#define SFR_ROMCODE_DBG24_REG_OFST     _UINT32_(0x60)      /* (SFR_ROMCODE_DBG24) ROM code debug Offset */
#define SFR_ROMCODE_DBG25_REG_OFST     _UINT32_(0x64)      /* (SFR_ROMCODE_DBG25) ROM code debug Offset */
#define SFR_ROMCODE_DBG26_REG_OFST     _UINT32_(0x68)      /* (SFR_ROMCODE_DBG26) ROM code debug Offset */
#define SFR_ROMCODE_DBG27_REG_OFST     _UINT32_(0x6C)      /* (SFR_ROMCODE_DBG27) ROM code debug Offset */
#define SFR_ROMCODE_DBG28_REG_OFST     _UINT32_(0x70)      /* (SFR_ROMCODE_DBG28) ROM code debug Offset */
#define SFR_ROMCODE_DBG29_REG_OFST     _UINT32_(0x74)      /* (SFR_ROMCODE_DBG29) ROM code debug Offset */
#define SFR_ROMCODE_DBG30_REG_OFST     _UINT32_(0x78)      /* (SFR_ROMCODE_DBG30) ROM code debug Offset */
#define SFR_ROMCODE_DBG31_REG_OFST     _UINT32_(0x7C)      /* (SFR_ROMCODE_DBG31) ROM code debug Offset */
#define SFR_ROMCODE_DBG32_REG_OFST     _UINT32_(0x80)      /* (SFR_ROMCODE_DBG32) ROM code debug Offset */
#define SFR_ROMCODE_DBG33_REG_OFST     _UINT32_(0x84)      /* (SFR_ROMCODE_DBG33) ROM code debug Offset */
#define SFR_ROMCODE_DBG34_REG_OFST     _UINT32_(0x88)      /* (SFR_ROMCODE_DBG34) ROM code debug Offset */
#define SFR_ROMCODE_DBG35_REG_OFST     _UINT32_(0x8C)      /* (SFR_ROMCODE_DBG35) ROM code debug Offset */
#define SFR_ROMCODE_DBG36_REG_OFST     _UINT32_(0x90)      /* (SFR_ROMCODE_DBG36) ROM code debug Offset */
#define SFR_ROMCODE_DBG37_REG_OFST     _UINT32_(0x94)      /* (SFR_ROMCODE_DBG37) ROM code debug Offset */
#define SFR_ROMCODE_DBG38_REG_OFST     _UINT32_(0x98)      /* (SFR_ROMCODE_DBG38) ROM code debug Offset */
#define SFR_ROMCODE_DBG39_REG_OFST     _UINT32_(0x9C)      /* (SFR_ROMCODE_DBG39) ROM code debug Offset */
#define SFR_CAN0_REG_OFST              _UINT32_(0xA0)      /* (SFR_CAN0) CAN0 MSB Base Address Offset */
#define SFR_CAN1_REG_OFST              _UINT32_(0xA4)      /* (SFR_CAN1) CAN1 MSB Base Address Offset */
#define SFR_BOOT_CFG_REG_OFST          _UINT32_(0xB0)      /* (SFR_BOOT_CFG) BOOT Configuration Offset */
#define SFR_WPMR_REG_OFST              _UINT32_(0xE4)      /* (SFR_WPMR) Write Protection Mode Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SFR register API structure */
typedef struct
{
  __IO  uint32_t                       SFR_ROMCODE_DBG[40]; /**< Offset: 0x00 (R/W  32) ROM code debug */
  __IO  uint32_t                       SFR_CAN0;           /**< Offset: 0xA0 (R/W  32) CAN0 MSB Base Address */
  __IO  uint32_t                       SFR_CAN1;           /**< Offset: 0xA4 (R/W  32) CAN1 MSB Base Address */
  __I   uint8_t                        Reserved1[0x08];
  __IO  uint32_t                       SFR_BOOT_CFG;       /**< Offset: 0xB0 (R/W  32) BOOT Configuration */
  __I   uint8_t                        Reserved2[0x30];
  __IO  uint32_t                       SFR_WPMR;           /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
} sfr_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMRH707_SFR_COMPONENT_H_ */
