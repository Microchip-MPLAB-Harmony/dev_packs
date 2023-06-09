/*
 * Component description for RFCTRL
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

/* file generated from device description version 2020-11-26T16:56:39Z */
#ifndef _SAMR21_RFCTRL_COMPONENT_H_
#define _SAMR21_RFCTRL_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR RFCTRL                                       */
/* ************************************************************************** */

/* -------- RFCTRL_FECFG : (RFCTRL Offset: 0x00) (R/W 16) Front-end control bus configuration -------- */
#define RFCTRL_FECFG_RESETVALUE               _UINT16_(0x00)                                       /*  (RFCTRL_FECFG) Front-end control bus configuration  Reset Value */

#define RFCTRL_FECFG_F0CFG_Pos                _UINT16_(0)                                          /* (RFCTRL_FECFG) Front-end control signal 0 configuration Position */
#define RFCTRL_FECFG_F0CFG_Msk                (_UINT16_(0x3) << RFCTRL_FECFG_F0CFG_Pos)            /* (RFCTRL_FECFG) Front-end control signal 0 configuration Mask */
#define RFCTRL_FECFG_F0CFG(value)             (RFCTRL_FECFG_F0CFG_Msk & (_UINT16_(value) << RFCTRL_FECFG_F0CFG_Pos)) /* Assigment of value for F0CFG in the RFCTRL_FECFG register */
#define RFCTRL_FECFG_F1CFG_Pos                _UINT16_(2)                                          /* (RFCTRL_FECFG) Front-end control signal 1 configuration Position */
#define RFCTRL_FECFG_F1CFG_Msk                (_UINT16_(0x3) << RFCTRL_FECFG_F1CFG_Pos)            /* (RFCTRL_FECFG) Front-end control signal 1 configuration Mask */
#define RFCTRL_FECFG_F1CFG(value)             (RFCTRL_FECFG_F1CFG_Msk & (_UINT16_(value) << RFCTRL_FECFG_F1CFG_Pos)) /* Assigment of value for F1CFG in the RFCTRL_FECFG register */
#define RFCTRL_FECFG_F2CFG_Pos                _UINT16_(4)                                          /* (RFCTRL_FECFG) Front-end control signal 2 configuration Position */
#define RFCTRL_FECFG_F2CFG_Msk                (_UINT16_(0x3) << RFCTRL_FECFG_F2CFG_Pos)            /* (RFCTRL_FECFG) Front-end control signal 2 configuration Mask */
#define RFCTRL_FECFG_F2CFG(value)             (RFCTRL_FECFG_F2CFG_Msk & (_UINT16_(value) << RFCTRL_FECFG_F2CFG_Pos)) /* Assigment of value for F2CFG in the RFCTRL_FECFG register */
#define RFCTRL_FECFG_F3CFG_Pos                _UINT16_(6)                                          /* (RFCTRL_FECFG) Front-end control signal 3 configuration Position */
#define RFCTRL_FECFG_F3CFG_Msk                (_UINT16_(0x3) << RFCTRL_FECFG_F3CFG_Pos)            /* (RFCTRL_FECFG) Front-end control signal 3 configuration Mask */
#define RFCTRL_FECFG_F3CFG(value)             (RFCTRL_FECFG_F3CFG_Msk & (_UINT16_(value) << RFCTRL_FECFG_F3CFG_Pos)) /* Assigment of value for F3CFG in the RFCTRL_FECFG register */
#define RFCTRL_FECFG_F4CFG_Pos                _UINT16_(8)                                          /* (RFCTRL_FECFG) Front-end control signal 4 configuration Position */
#define RFCTRL_FECFG_F4CFG_Msk                (_UINT16_(0x3) << RFCTRL_FECFG_F4CFG_Pos)            /* (RFCTRL_FECFG) Front-end control signal 4 configuration Mask */
#define RFCTRL_FECFG_F4CFG(value)             (RFCTRL_FECFG_F4CFG_Msk & (_UINT16_(value) << RFCTRL_FECFG_F4CFG_Pos)) /* Assigment of value for F4CFG in the RFCTRL_FECFG register */
#define RFCTRL_FECFG_F5CFG_Pos                _UINT16_(10)                                         /* (RFCTRL_FECFG) Front-end control signal 5 configuration Position */
#define RFCTRL_FECFG_F5CFG_Msk                (_UINT16_(0x3) << RFCTRL_FECFG_F5CFG_Pos)            /* (RFCTRL_FECFG) Front-end control signal 5 configuration Mask */
#define RFCTRL_FECFG_F5CFG(value)             (RFCTRL_FECFG_F5CFG_Msk & (_UINT16_(value) << RFCTRL_FECFG_F5CFG_Pos)) /* Assigment of value for F5CFG in the RFCTRL_FECFG register */
#define RFCTRL_FECFG_Msk                      _UINT16_(0x0FFF)                                     /* (RFCTRL_FECFG) Register Mask  */


/** \brief RFCTRL register offsets definitions */
#define RFCTRL_FECFG_REG_OFST          _UINT32_(0x00)      /* (RFCTRL_FECFG) Front-end control bus configuration Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief RFCTRL register API structure */
typedef struct
{  /* RF233 control module */
  __IO  uint16_t                       RFCTRL_FECFG;       /**< Offset: 0x00 (R/W  16) Front-end control bus configuration */
} rfctrl_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMR21_RFCTRL_COMPONENT_H_ */
