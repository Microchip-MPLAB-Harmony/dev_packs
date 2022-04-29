/*
 * Component description for HTM
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
#ifndef _CEC_HTM_COMPONENT_H_
#define _CEC_HTM_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR HTM                                          */
/* ************************************************************************** */

/* -------- HTM_PRLD : (HTM Offset: 0x00) (R/W 16) [15:0] This register is used to set the Hibernation Timer Preload value. -------- */
#define HTM_PRLD_RESETVALUE                   _UINT16_(0x00)                                       /*  (HTM_PRLD) [15:0] This register is used to set the Hibernation Timer Preload value.  Reset Value */

#define HTM_PRLD_Msk                          _UINT16_(0x0000)                                     /* (HTM_PRLD) Register Mask  */


/* -------- HTM_CTRL : (HTM Offset: 0x04) (R/W 16) HTimer Control Register -------- */
#define HTM_CTRL_RESETVALUE                   _UINT16_(0x00)                                       /*  (HTM_CTRL) HTimer Control Register  Reset Value */

#define HTM_CTRL_CTRL_Pos                     _UINT16_(0)                                          /* (HTM_CTRL) 1= The Hibernation Timer has a resolution of 0.125s per LSB, which yields a maximum time in excess of 2 hours.     0= The Hibernation Timer has a resolution of 30.5us per LSB, which yields a maximum time of ~2seconds. Position */
#define HTM_CTRL_CTRL_Msk                     (_UINT16_(0x1) << HTM_CTRL_CTRL_Pos)                 /* (HTM_CTRL) 1= The Hibernation Timer has a resolution of 0.125s per LSB, which yields a maximum time in excess of 2 hours.     0= The Hibernation Timer has a resolution of 30.5us per LSB, which yields a maximum time of ~2seconds. Mask */
#define HTM_CTRL_CTRL(value)                  (HTM_CTRL_CTRL_Msk & (_UINT16_(value) << HTM_CTRL_CTRL_Pos)) /* Assigment of value for CTRL in the HTM_CTRL register */
#define HTM_CTRL_Msk                          _UINT16_(0x0001)                                     /* (HTM_CTRL) Register Mask  */


/* -------- HTM_CNT : (HTM Offset: 0x08) ( R/ 16) The current state of the Hibernation Timer. -------- */
#define HTM_CNT_RESETVALUE                    _UINT16_(0x00)                                       /*  (HTM_CNT) The current state of the Hibernation Timer.  Reset Value */

#define HTM_CNT_Msk                           _UINT16_(0x0000)                                     /* (HTM_CNT) Register Mask  */


/** \brief HTM register offsets definitions */
#define HTM_PRLD_REG_OFST              _UINT32_(0x00)      /* (HTM_PRLD) [15:0] This register is used to set the Hibernation Timer Preload value. Offset */
#define HTM_CTRL_REG_OFST              _UINT32_(0x04)      /* (HTM_CTRL) HTimer Control Register Offset */
#define HTM_CNT_REG_OFST               _UINT32_(0x08)      /* (HTM_CNT) The current state of the Hibernation Timer. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief HTM register API structure */
typedef struct
{  /* The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode. */
  __IO  uint16_t                       HTM_PRLD;           /**< Offset: 0x00 (R/W  16) [15:0] This register is used to set the Hibernation Timer Preload value. */
  __I   uint8_t                        Reserved1[0x02];
  __IO  uint16_t                       HTM_CTRL;           /**< Offset: 0x04 (R/W  16) HTimer Control Register */
  __I   uint8_t                        Reserved2[0x02];
  __I   uint16_t                       HTM_CNT;            /**< Offset: 0x08 (R/   16) The current state of the Hibernation Timer. */
} htm_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_HTM_COMPONENT_H_ */
