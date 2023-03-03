/*
 * Component description for VBAT_RAM
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

/* file generated from device description version 2020-03-24T11:15:30Z */
#ifndef _CEC1712H_S2_SX_VBAT_RAM_COMPONENT_H_
#define _CEC1712H_S2_SX_VBAT_RAM_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR VBAT_RAM                                     */
/* ************************************************************************** */

/* -------- VBAT_RAM_MEM : (VBAT_RAM Offset: 0x00) (R/W 32) 32-bits of VBAT powered RAM. -------- */
#define VBAT_RAM_MEM_RESETVALUE               _UINT32_(0x00)                                       /*  (VBAT_RAM_MEM) 32-bits of VBAT powered RAM.  Reset Value */

#define VBAT_RAM_MEM_Msk                      _UINT32_(0x00000000)                                 /* (VBAT_RAM_MEM) Register Mask  */


/** \brief VBAT_RAM register offsets definitions */
#define VBAT_RAM_MEM_REG_OFST          _UINT32_(0x00)      /* (VBAT_RAM_MEM) 32-bits of VBAT powered RAM. Offset */
#define VBAT_RAM_MEM0_REG_OFST         _UINT32_(0x00)      /* (VBAT_RAM_MEM0) 32-bits of VBAT powered RAM. Offset */
#define VBAT_RAM_MEM1_REG_OFST         _UINT32_(0x04)      /* (VBAT_RAM_MEM1) 32-bits of VBAT powered RAM. Offset */
#define VBAT_RAM_MEM2_REG_OFST         _UINT32_(0x08)      /* (VBAT_RAM_MEM2) 32-bits of VBAT powered RAM. Offset */
#define VBAT_RAM_MEM3_REG_OFST         _UINT32_(0x0C)      /* (VBAT_RAM_MEM3) 32-bits of VBAT powered RAM. Offset */
#define VBAT_RAM_MEM4_REG_OFST         _UINT32_(0x10)      /* (VBAT_RAM_MEM4) 32-bits of VBAT powered RAM. Offset */
#define VBAT_RAM_MEM5_REG_OFST         _UINT32_(0x14)      /* (VBAT_RAM_MEM5) 32-bits of VBAT powered RAM. Offset */
#define VBAT_RAM_MEM6_REG_OFST         _UINT32_(0x18)      /* (VBAT_RAM_MEM6) 32-bits of VBAT powered RAM. Offset */
#define VBAT_RAM_MEM7_REG_OFST         _UINT32_(0x1C)      /* (VBAT_RAM_MEM7) 32-bits of VBAT powered RAM. Offset */
#define VBAT_RAM_MEM8_REG_OFST         _UINT32_(0x20)      /* (VBAT_RAM_MEM8) 32-bits of VBAT powered RAM. Offset */
#define VBAT_RAM_MEM9_REG_OFST         _UINT32_(0x24)      /* (VBAT_RAM_MEM9) 32-bits of VBAT powered RAM. Offset */
#define VBAT_RAM_MEM10_REG_OFST        _UINT32_(0x28)      /* (VBAT_RAM_MEM10) 32-bits of VBAT powered RAM. Offset */
#define VBAT_RAM_MEM11_REG_OFST        _UINT32_(0x2C)      /* (VBAT_RAM_MEM11) 32-bits of VBAT powered RAM. Offset */
#define VBAT_RAM_MEM12_REG_OFST        _UINT32_(0x30)      /* (VBAT_RAM_MEM12) 32-bits of VBAT powered RAM. Offset */
#define VBAT_RAM_MEM13_REG_OFST        _UINT32_(0x34)      /* (VBAT_RAM_MEM13) 32-bits of VBAT powered RAM. Offset */
#define VBAT_RAM_MEM14_REG_OFST        _UINT32_(0x38)      /* (VBAT_RAM_MEM14) 32-bits of VBAT powered RAM. Offset */
#define VBAT_RAM_MEM15_REG_OFST        _UINT32_(0x3C)      /* (VBAT_RAM_MEM15) 32-bits of VBAT powered RAM. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief VBAT_RAM register API structure */
typedef struct
{  /* The VBAT RAM is operational while the main power rail is operational, and will retain its values powered by battery power while the main rail is unpowered. */
  __IO  uint32_t                       VBAT_RAM_MEM[16];   /**< Offset: 0x00 (R/W  32) 32-bits of VBAT powered RAM. */
} vbat_ram_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1712H_S2_SX_VBAT_RAM_COMPONENT_H_ */
