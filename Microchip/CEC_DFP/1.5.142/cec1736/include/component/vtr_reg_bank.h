/*
 * Component description for VTR_REG_BANK
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2021-05-26T17:25:30Z */
#ifndef _CEC_VTR_REG_BANK_COMPONENT_H_
#define _CEC_VTR_REG_BANK_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR VTR_REG_BANK                                 */
/* ************************************************************************** */

/* -------- VTR_REG_BANK_PFRS : (VTR_REG_BANK Offset: 0x00) (R/W 32) The Power-Fail and Reset Status Register collects and retains the VBAT RST and WDT event status when VCC1 is unpowered. -------- */
#define VTR_REG_BANK_PFRS_RESETVALUE          _UINT32_(0x80)                                       /*  (VTR_REG_BANK_PFRS) The Power-Fail and Reset Status Register collects and retains the VBAT RST and WDT event status when VCC1 is unpowered.  Reset Value */

#define VTR_REG_BANK_PFRS_DET_32KHZ_Pos       _UINT32_(0)                                          /* (VTR_REG_BANK_PFRS) Detect 32KHz Clock Input (R/WC) Position */
#define VTR_REG_BANK_PFRS_DET_32KHZ_Msk       (_UINT32_(0x1) << VTR_REG_BANK_PFRS_DET_32KHZ_Pos)   /* (VTR_REG_BANK_PFRS) Detect 32KHz Clock Input (R/WC) Mask */
#define VTR_REG_BANK_PFRS_DET_32KHZ(value)    (VTR_REG_BANK_PFRS_DET_32KHZ_Msk & (_UINT32_(value) << VTR_REG_BANK_PFRS_DET_32KHZ_Pos)) /* Assigment of value for DET_32KHZ in the VTR_REG_BANK_PFRS register */
#define VTR_REG_BANK_PFRS_SFT_RST_Pos         _UINT32_(2)                                          /* (VTR_REG_BANK_PFRS) This bit is set to '1b' if a was triggered by an assertion of the SOFT_SYS_RESET bit in the System Reset Register.      This bit is cleared to '0b' when written with a '1b'; writes of a '0b' have no effect. (R/WC) Position */
#define VTR_REG_BANK_PFRS_SFT_RST_Msk         (_UINT32_(0x1) << VTR_REG_BANK_PFRS_SFT_RST_Pos)     /* (VTR_REG_BANK_PFRS) This bit is set to '1b' if a was triggered by an assertion of the SOFT_SYS_RESET bit in the System Reset Register.      This bit is cleared to '0b' when written with a '1b'; writes of a '0b' have no effect. (R/WC) Mask */
#define VTR_REG_BANK_PFRS_SFT_RST(value)      (VTR_REG_BANK_PFRS_SFT_RST_Msk & (_UINT32_(value) << VTR_REG_BANK_PFRS_SFT_RST_Pos)) /* Assigment of value for SFT_RST in the VTR_REG_BANK_PFRS register */
#define VTR_REG_BANK_PFRS_RSTI_Pos            _UINT32_(4)                                          /* (VTR_REG_BANK_PFRS) This bit is set to '1b' if a RESET_SYS was triggered by a low signal on the RESETI# input pin. This bit is      cleared to '0b' when written with a '1b'; writes of a '0b' have no effect. (R/WC) Position */
#define VTR_REG_BANK_PFRS_RSTI_Msk            (_UINT32_(0x1) << VTR_REG_BANK_PFRS_RSTI_Pos)        /* (VTR_REG_BANK_PFRS) This bit is set to '1b' if a RESET_SYS was triggered by a low signal on the RESETI# input pin. This bit is      cleared to '0b' when written with a '1b'; writes of a '0b' have no effect. (R/WC) Mask */
#define VTR_REG_BANK_PFRS_RSTI(value)         (VTR_REG_BANK_PFRS_RSTI_Msk & (_UINT32_(value) << VTR_REG_BANK_PFRS_RSTI_Pos)) /* Assigment of value for RSTI in the VTR_REG_BANK_PFRS register */
#define VTR_REG_BANK_PFRS_WDT_EVT_Pos         _UINT32_(5)                                          /* (VTR_REG_BANK_PFRS) This bit is set to '1b' if a RESET_SYS was triggered by a Watchdog Timer event. This bit is cleared to '0b' when      written with a '1b'; writes of a '0b' have no effect. (R/WC) Position */
#define VTR_REG_BANK_PFRS_WDT_EVT_Msk         (_UINT32_(0x1) << VTR_REG_BANK_PFRS_WDT_EVT_Pos)     /* (VTR_REG_BANK_PFRS) This bit is set to '1b' if a RESET_SYS was triggered by a Watchdog Timer event. This bit is cleared to '0b' when      written with a '1b'; writes of a '0b' have no effect. (R/WC) Mask */
#define VTR_REG_BANK_PFRS_WDT_EVT(value)      (VTR_REG_BANK_PFRS_WDT_EVT_Msk & (_UINT32_(value) << VTR_REG_BANK_PFRS_WDT_EVT_Pos)) /* Assigment of value for WDT_EVT in the VTR_REG_BANK_PFRS register */
#define VTR_REG_BANK_PFRS_SYS_RSTREQ_Pos      _UINT32_(6)                                          /* (VTR_REG_BANK_PFRS) This bit is set to '1b' if a RESET_SYS was triggered by an ARM SYSRESETREQ event. This bit is cleared to '0b' when      written with a '1b'; writes of a '0b' have no effect. (R/WC) Position */
#define VTR_REG_BANK_PFRS_SYS_RSTREQ_Msk      (_UINT32_(0x1) << VTR_REG_BANK_PFRS_SYS_RSTREQ_Pos)  /* (VTR_REG_BANK_PFRS) This bit is set to '1b' if a RESET_SYS was triggered by an ARM SYSRESETREQ event. This bit is cleared to '0b' when      written with a '1b'; writes of a '0b' have no effect. (R/WC) Mask */
#define VTR_REG_BANK_PFRS_SYS_RSTREQ(value)   (VTR_REG_BANK_PFRS_SYS_RSTREQ_Msk & (_UINT32_(value) << VTR_REG_BANK_PFRS_SYS_RSTREQ_Pos)) /* Assigment of value for SYS_RSTREQ in the VTR_REG_BANK_PFRS register */
#define VTR_REG_BANK_PFRS_Msk                 _UINT32_(0x00000075)                                 /* (VTR_REG_BANK_PFRS) Register Mask  */


/** \brief VTR_REG_BANK register offsets definitions */
#define VTR_REG_BANK_PFRS_REG_OFST     _UINT32_(0x00)      /* (VTR_REG_BANK_PFRS) The Power-Fail and Reset Status Register collects and retains the VBAT RST and WDT event status when VCC1 is unpowered. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief VTR_REG_BANK register API structure */
typedef struct
{  /* The VBAT Register Bank block is a block implemented for miscellaneous battery-backed registers. */
  __IO  uint32_t                       VTR_REG_BANK_PFRS;  /**< Offset: 0x00 (R/W  32) The Power-Fail and Reset Status Register collects and retains the VBAT RST and WDT event status when VCC1 is unpowered. */
} vtr_reg_bank_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_VTR_REG_BANK_COMPONENT_H_ */
