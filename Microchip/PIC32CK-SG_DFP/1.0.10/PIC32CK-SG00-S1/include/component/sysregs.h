/*
 * Component description for SYSREGS
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

/* file generated from device description version 2022-11-28T06:54:46Z */
#ifndef _PIC32CKSG00_SYSREGS_COMPONENT_H_
#define _PIC32CKSG00_SYSREGS_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SYSREGS                                      */
/* ************************************************************************** */

/* -------- SYSREGS_POWERCTRL : (SYSREGS Offset: 0x0C) (R/W 32) Power Control -------- */
#define SYSREGS_POWERCTRL_RESETVALUE          _UINT32_(0x00)                                       /*  (SYSREGS_POWERCTRL) Power Control  Reset Value */

#define SYSREGS_POWERCTRL_STATE_Pos           _UINT32_(0)                                          /* (SYSREGS_POWERCTRL) Power Control State Position */
#define SYSREGS_POWERCTRL_STATE_Msk           (_UINT32_(0x7) << SYSREGS_POWERCTRL_STATE_Pos)       /* (SYSREGS_POWERCTRL) Power Control State Mask */
#define SYSREGS_POWERCTRL_STATE(value)        (SYSREGS_POWERCTRL_STATE_Msk & (_UINT32_(value) << SYSREGS_POWERCTRL_STATE_Pos)) /* Assigment of value for STATE in the SYSREGS_POWERCTRL register */
#define   SYSREGS_POWERCTRL_STATE_ESECBOOTDONE_Val _UINT32_(0x1)                                        /* (SYSREGS_POWERCTRL) ESecure Boot is Finished  */
#define   SYSREGS_POWERCTRL_STATE_POWERDOWN_Val _UINT32_(0x2)                                        /* (SYSREGS_POWERCTRL) ESecure is in Power-down  */
#define   SYSREGS_POWERCTRL_STATE_HOSTBOOTDONE_Val _UINT32_(0x3)                                        /* (SYSREGS_POWERCTRL) Host Boot is Finished  */
#define   SYSREGS_POWERCTRL_STATE_IDLE_Val    _UINT32_(0x4)                                        /* (SYSREGS_POWERCTRL) ESecure is Idle  */
#define   SYSREGS_POWERCTRL_STATE_BUSY_Val    _UINT32_(0x5)                                        /* (SYSREGS_POWERCTRL) ESecure is Busy  */
#define SYSREGS_POWERCTRL_STATE_ESECBOOTDONE  (SYSREGS_POWERCTRL_STATE_ESECBOOTDONE_Val << SYSREGS_POWERCTRL_STATE_Pos) /* (SYSREGS_POWERCTRL) ESecure Boot is Finished Position  */
#define SYSREGS_POWERCTRL_STATE_POWERDOWN     (SYSREGS_POWERCTRL_STATE_POWERDOWN_Val << SYSREGS_POWERCTRL_STATE_Pos) /* (SYSREGS_POWERCTRL) ESecure is in Power-down Position  */
#define SYSREGS_POWERCTRL_STATE_HOSTBOOTDONE  (SYSREGS_POWERCTRL_STATE_HOSTBOOTDONE_Val << SYSREGS_POWERCTRL_STATE_Pos) /* (SYSREGS_POWERCTRL) Host Boot is Finished Position  */
#define SYSREGS_POWERCTRL_STATE_IDLE          (SYSREGS_POWERCTRL_STATE_IDLE_Val << SYSREGS_POWERCTRL_STATE_Pos) /* (SYSREGS_POWERCTRL) ESecure is Idle Position  */
#define SYSREGS_POWERCTRL_STATE_BUSY          (SYSREGS_POWERCTRL_STATE_BUSY_Val << SYSREGS_POWERCTRL_STATE_Pos) /* (SYSREGS_POWERCTRL) ESecure is Busy Position  */
#define SYSREGS_POWERCTRL_Msk                 _UINT32_(0x00000007)                                 /* (SYSREGS_POWERCTRL) Register Mask  */


/** \brief SYSREGS register offsets definitions */
#define SYSREGS_POWERCTRL_REG_OFST     _UINT32_(0x0C)      /* (SYSREGS_POWERCTRL) Power Control Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SYSREGS register API structure */
typedef struct
{  /* eSecure System Registers Module */
  __I   uint8_t                        Reserved1[0x0C];
  __IO  uint32_t                       SYSREGS_POWERCTRL;  /**< Offset: 0x0C (R/W  32) Power Control */
} sysregs_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CKSG00_SYSREGS_COMPONENT_H_ */
