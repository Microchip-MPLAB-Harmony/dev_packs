/*
 * Component description for FUSES
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

/* file generated from device description version 2023-01-20T11:01:01Z */
#ifndef _PIC32CXMTG_FUSES_COMPONENT_H_
#define _PIC32CXMTG_FUSES_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR FUSES                                        */
/* ************************************************************************** */

/* -------- FUSES_GPNVMBITS : (FUSES Offset: 0x00) (R/W 16) GPNVM Bits -------- */
#define FUSES_GPNVMBITS_SECURITY_BIT_Pos      _UINT16_(0)                                          /* (FUSES_GPNVMBITS) Security Bit Position */
#define FUSES_GPNVMBITS_SECURITY_BIT_Msk      (_UINT16_(0x1) << FUSES_GPNVMBITS_SECURITY_BIT_Pos)  /* (FUSES_GPNVMBITS) Security Bit Mask */
#define FUSES_GPNVMBITS_SECURITY_BIT(value)   (FUSES_GPNVMBITS_SECURITY_BIT_Msk & (_UINT16_(value) << FUSES_GPNVMBITS_SECURITY_BIT_Pos)) /* Assigment of value for SECURITY_BIT in the FUSES_GPNVMBITS register */
#define FUSES_GPNVMBITS_PLANE_SELECTION_Pos   _UINT16_(1)                                          /* (FUSES_GPNVMBITS) Memory Plane Selection Position */
#define FUSES_GPNVMBITS_PLANE_SELECTION_Msk   (_UINT16_(0x1) << FUSES_GPNVMBITS_PLANE_SELECTION_Pos) /* (FUSES_GPNVMBITS) Memory Plane Selection Mask */
#define FUSES_GPNVMBITS_PLANE_SELECTION(value) (FUSES_GPNVMBITS_PLANE_SELECTION_Msk & (_UINT16_(value) << FUSES_GPNVMBITS_PLANE_SELECTION_Pos)) /* Assigment of value for PLANE_SELECTION in the FUSES_GPNVMBITS register */
#define FUSES_GPNVMBITS_ERASE_FUNCTION_LOCK_Pos _UINT16_(2)                                          /* (FUSES_GPNVMBITS) Hardware Erase Function Lock Position */
#define FUSES_GPNVMBITS_ERASE_FUNCTION_LOCK_Msk (_UINT16_(0x7) << FUSES_GPNVMBITS_ERASE_FUNCTION_LOCK_Pos) /* (FUSES_GPNVMBITS) Hardware Erase Function Lock Mask */
#define FUSES_GPNVMBITS_ERASE_FUNCTION_LOCK(value) (FUSES_GPNVMBITS_ERASE_FUNCTION_LOCK_Msk & (_UINT16_(value) << FUSES_GPNVMBITS_ERASE_FUNCTION_LOCK_Pos)) /* Assigment of value for ERASE_FUNCTION_LOCK in the FUSES_GPNVMBITS register */
#define FUSES_GPNVMBITS_BOOT_MODE_Pos         _UINT16_(5)                                          /* (FUSES_GPNVMBITS) Boot Mode Selection Position */
#define FUSES_GPNVMBITS_BOOT_MODE_Msk         (_UINT16_(0xF) << FUSES_GPNVMBITS_BOOT_MODE_Pos)     /* (FUSES_GPNVMBITS) Boot Mode Selection Mask */
#define FUSES_GPNVMBITS_BOOT_MODE(value)      (FUSES_GPNVMBITS_BOOT_MODE_Msk & (_UINT16_(value) << FUSES_GPNVMBITS_BOOT_MODE_Pos)) /* Assigment of value for BOOT_MODE in the FUSES_GPNVMBITS register */
#define FUSES_GPNVMBITS_Msk                   _UINT16_(0x01FF)                                     /* (FUSES_GPNVMBITS) Register Mask  */


/** \brief FUSES register offsets definitions */
#define FUSES_GPNVMBITS_REG_OFST       _UINT32_(0x00)      /* (FUSES_GPNVMBITS) GPNVM Bits Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief GPNVMBITS register API structure */
typedef struct
{  /* GPNVM Bits */
  __IO  uint16_t                       FUSES_GPNVMBITS;    /**< Offset: 0x00 (R/W  16) GPNVM Bits */
} fuses_gpnvmbits_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTG_FUSES_COMPONENT_H_ */
