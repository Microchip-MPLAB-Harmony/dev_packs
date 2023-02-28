/*
 * Component description for PKRAM
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

/* file generated from device description version 2023-02-20T18:49:00Z */
#ifndef _PIC32CKSG01_PKRAM_COMPONENT_H_
#define _PIC32CKSG01_PKRAM_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PKRAM                                        */
/* ************************************************************************** */

/* -------- PKRAM_PKRPCTRL : (PKRAM Offset: 0x00) (R/W 32) Parity Control -------- */
#define PKRAM_PKRPCTRL_RESETVALUE             _UINT32_(0x00)                                       /*  (PKRAM_PKRPCTRL) Parity Control  Reset Value */

#define PKRAM_PKRPCTRL_PARITY_Pos             _UINT32_(0)                                          /* (PKRAM_PKRPCTRL) RAM Parity Enable bit (1) Position */
#define PKRAM_PKRPCTRL_PARITY_Msk             (_UINT32_(0x1) << PKRAM_PKRPCTRL_PARITY_Pos)         /* (PKRAM_PKRPCTRL) RAM Parity Enable bit (1) Mask */
#define PKRAM_PKRPCTRL_PARITY(value)          (PKRAM_PKRPCTRL_PARITY_Msk & (_UINT32_(value) << PKRAM_PKRPCTRL_PARITY_Pos)) /* Assigment of value for PARITY in the PKRAM_PKRPCTRL register */
#define PKRAM_PKRPCTRL_FLTEN_Pos              _UINT32_(1)                                          /* (PKRAM_PKRPCTRL) Fault Injection Enable bit Position */
#define PKRAM_PKRPCTRL_FLTEN_Msk              (_UINT32_(0x1) << PKRAM_PKRPCTRL_FLTEN_Pos)          /* (PKRAM_PKRPCTRL) Fault Injection Enable bit Mask */
#define PKRAM_PKRPCTRL_FLTEN(value)           (PKRAM_PKRPCTRL_FLTEN_Msk & (_UINT32_(value) << PKRAM_PKRPCTRL_FLTEN_Pos)) /* Assigment of value for FLTEN in the PKRAM_PKRPCTRL register */
#define PKRAM_PKRPCTRL_FLTPTR_Pos             _UINT32_(8)                                          /* (PKRAM_PKRPCTRL) Fault Injection Bit Pointer bit Position */
#define PKRAM_PKRPCTRL_FLTPTR_Msk             (_UINT32_(0x7F) << PKRAM_PKRPCTRL_FLTPTR_Pos)        /* (PKRAM_PKRPCTRL) Fault Injection Bit Pointer bit Mask */
#define PKRAM_PKRPCTRL_FLTPTR(value)          (PKRAM_PKRPCTRL_FLTPTR_Msk & (_UINT32_(value) << PKRAM_PKRPCTRL_FLTPTR_Pos)) /* Assigment of value for FLTPTR in the PKRAM_PKRPCTRL register */
#define PKRAM_PKRPCTRL_Msk                    _UINT32_(0x00007F03)                                 /* (PKRAM_PKRPCTRL) Register Mask  */


/* -------- PKRAM_PKRPERROR : (PKRAM Offset: 0x04) ( R/ 32) Parity Error -------- */
#define PKRAM_PKRPERROR_RESETVALUE            _UINT32_(0x00)                                       /*  (PKRAM_PKRPERROR) Parity Error  Reset Value */

#define PKRAM_PKRPERROR_PARITY_Pos            _UINT32_(0)                                          /* (PKRAM_PKRPERROR) PK RAM Parity Error bit Position */
#define PKRAM_PKRPERROR_PARITY_Msk            (_UINT32_(0x1) << PKRAM_PKRPERROR_PARITY_Pos)        /* (PKRAM_PKRPERROR) PK RAM Parity Error bit Mask */
#define PKRAM_PKRPERROR_PARITY(value)         (PKRAM_PKRPERROR_PARITY_Msk & (_UINT32_(value) << PKRAM_PKRPERROR_PARITY_Pos)) /* Assigment of value for PARITY in the PKRAM_PKRPERROR register */
#define PKRAM_PKRPERROR_Msk                   _UINT32_(0x00000001)                                 /* (PKRAM_PKRPERROR) Register Mask  */


/** \brief PKRAM register offsets definitions */
#define PKRAM_PKRPCTRL_REG_OFST        _UINT32_(0x00)      /* (PKRAM_PKRPCTRL) Parity Control Offset */
#define PKRAM_PKRPERROR_REG_OFST       _UINT32_(0x04)      /* (PKRAM_PKRPERROR) Parity Error Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PKRAM register API structure */
typedef struct
{  /* PKRAM Module */
  __IO  uint32_t                       PKRAM_PKRPCTRL;     /**< Offset: 0x00 (R/W  32) Parity Control */
  __I   uint32_t                       PKRAM_PKRPERROR;    /**< Offset: 0x04 (R/   32) Parity Error */
} pkram_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CKSG01_PKRAM_COMPONENT_H_ */
