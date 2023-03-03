/*
 * Component description for TFDP
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

/* file generated from device description version 2023-01-17T13:00:30Z */
#ifndef _CEC_TFDP_COMPONENT_H_
#define _CEC_TFDP_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR TFDP                                         */
/* ************************************************************************** */

/* -------- TFDP_MSDATA : (TFDP Offset: 0x00) (R/W 8) Debug data to be shifted out on the TFDP Debug port. While data is being shifted out, the Host Interface will 'hold-off' additional writes to the data register until the transfer is complete. -------- */
#define TFDP_MSDATA_RESETVALUE                _UINT8_(0x00)                                        /*  (TFDP_MSDATA) Debug data to be shifted out on the TFDP Debug port. While data is being shifted out, the Host Interface will 'hold-off' additional writes to the data register until the transfer is complete.  Reset Value */

#define TFDP_MSDATA_Msk                       _UINT8_(0x00)                                        /* (TFDP_MSDATA) Register Mask  */


/* -------- TFDP_CTRL : (TFDP Offset: 0x04) (R/W 8) Debug Control Register -------- */
#define TFDP_CTRL_RESETVALUE                  _UINT8_(0x00)                                        /*  (TFDP_CTRL) Debug Control Register  Reset Value */

#define TFDP_CTRL_EN_Pos                      _UINT8_(0)                                           /* (TFDP_CTRL) Enable. 1=Clock enabled, 0=Clock is disabled (Default) Position */
#define TFDP_CTRL_EN_Msk                      (_UINT8_(0x1) << TFDP_CTRL_EN_Pos)                   /* (TFDP_CTRL) Enable. 1=Clock enabled, 0=Clock is disabled (Default) Mask */
#define TFDP_CTRL_EN(value)                   (TFDP_CTRL_EN_Msk & (_UINT8_(value) << TFDP_CTRL_EN_Pos)) /* Assigment of value for EN in the TFDP_CTRL register */
#define TFDP_CTRL_EDGE_SEL_Pos                _UINT8_(1)                                           /* (TFDP_CTRL) 1= Data is shifted out on the falling edge of the debug clock, 0= Data is shifted out on the rising edge of the debug clock (Default) Position */
#define TFDP_CTRL_EDGE_SEL_Msk                (_UINT8_(0x1) << TFDP_CTRL_EDGE_SEL_Pos)             /* (TFDP_CTRL) 1= Data is shifted out on the falling edge of the debug clock, 0= Data is shifted out on the rising edge of the debug clock (Default) Mask */
#define TFDP_CTRL_EDGE_SEL(value)             (TFDP_CTRL_EDGE_SEL_Msk & (_UINT8_(value) << TFDP_CTRL_EDGE_SEL_Pos)) /* Assigment of value for EDGE_SEL in the TFDP_CTRL register */
#define TFDP_CTRL_DIVSEL_Pos                  _UINT8_(2)                                           /* (TFDP_CTRL) Clock Divider Select. Position */
#define TFDP_CTRL_DIVSEL_Msk                  (_UINT8_(0x3) << TFDP_CTRL_DIVSEL_Pos)               /* (TFDP_CTRL) Clock Divider Select. Mask */
#define TFDP_CTRL_DIVSEL(value)               (TFDP_CTRL_DIVSEL_Msk & (_UINT8_(value) << TFDP_CTRL_DIVSEL_Pos)) /* Assigment of value for DIVSEL in the TFDP_CTRL register */
#define TFDP_CTRL_IP_DLY_Pos                  _UINT8_(4)                                           /* (TFDP_CTRL) Inter-packet Delay. The delay is in terms of TFDP Debug output clocks. Position */
#define TFDP_CTRL_IP_DLY_Msk                  (_UINT8_(0x7) << TFDP_CTRL_IP_DLY_Pos)               /* (TFDP_CTRL) Inter-packet Delay. The delay is in terms of TFDP Debug output clocks. Mask */
#define TFDP_CTRL_IP_DLY(value)               (TFDP_CTRL_IP_DLY_Msk & (_UINT8_(value) << TFDP_CTRL_IP_DLY_Pos)) /* Assigment of value for IP_DLY in the TFDP_CTRL register */
#define TFDP_CTRL_Msk                         _UINT8_(0x7F)                                        /* (TFDP_CTRL) Register Mask  */


/** \brief TFDP register offsets definitions */
#define TFDP_MSDATA_REG_OFST           _UINT32_(0x00)      /* (TFDP_MSDATA) Debug data to be shifted out on the TFDP Debug port. While data is being shifted out, the Host Interface will 'hold-off' additional writes to the data register until the transfer is complete. Offset */
#define TFDP_CTRL_REG_OFST             _UINT32_(0x04)      /* (TFDP_CTRL) Debug Control Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief TFDP register API structure */
typedef struct
{  /* The TFDP serially transmits EC-originated diagnostic vectors to an external debug trace system. */
  __IO  uint8_t                        TFDP_MSDATA;        /**< Offset: 0x00 (R/W  8) Debug data to be shifted out on the TFDP Debug port. While data is being shifted out, the Host Interface will 'hold-off' additional writes to the data register until the transfer is complete. */
  __I   uint8_t                        Reserved1[0x03];
  __IO  uint8_t                        TFDP_CTRL;          /**< Offset: 0x04 (R/W  8) Debug Control Register */
} tfdp_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_TFDP_COMPONENT_H_ */
