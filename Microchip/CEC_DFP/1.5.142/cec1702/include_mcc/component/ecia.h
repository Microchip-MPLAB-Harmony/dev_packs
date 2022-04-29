/*
 * Component description for ECIA
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

/* file generated from device description version 2018-10-01T10:50:03Z */
#ifndef _CEC1702Q_ECIA_COMPONENT_H_
#define _CEC1702Q_ECIA_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR ECIA                                         */
/* ************************************************************************** */

/* -------- ECIA_SRC : (ECIA Offset: 0x00) (R/W 32) Status R/W1C -------- */
#define ECIA_SRC_RESETVALUE                   _UINT32_(0x00)                                       /*  (ECIA_SRC) Status R/W1C  Reset Value */

#define ECIA_SRC_Msk                          _UINT32_(0x00000000)                                 /* (ECIA_SRC) Register Mask  */


/* -------- ECIA_EN_SET : (ECIA Offset: 0x04) (R/W 32) Write to set source enables -------- */
#define ECIA_EN_SET_RESETVALUE                _UINT32_(0x00)                                       /*  (ECIA_EN_SET) Write to set source enables  Reset Value */

#define ECIA_EN_SET_Msk                       _UINT32_(0x00000000)                                 /* (ECIA_EN_SET) Register Mask  */


/* -------- ECIA_RESULT : (ECIA Offset: 0x08) ( R/ 32) Read-only bitwise OR of Source and Enable -------- */
#define ECIA_RESULT_RESETVALUE                _UINT32_(0x00)                                       /*  (ECIA_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define ECIA_RESULT_Msk                       _UINT32_(0x00000000)                                 /* (ECIA_RESULT) Register Mask  */


/* -------- ECIA_EN_CLR : (ECIA Offset: 0x0C) (R/W 32) Write to clear source enables -------- */
#define ECIA_EN_CLR_RESETVALUE                _UINT32_(0x00)                                       /*  (ECIA_EN_CLR) Write to clear source enables  Reset Value */

#define ECIA_EN_CLR_Msk                       _UINT32_(0x00000000)                                 /* (ECIA_EN_CLR) Register Mask  */


/* -------- ECIA_BLK_EN_SET : (ECIA Offset: 0x200) (R/W 32) Block Enable Set Register -------- */
#define ECIA_BLK_EN_SET_RESETVALUE            _UINT32_(0x00)                                       /*  (ECIA_BLK_EN_SET) Block Enable Set Register  Reset Value */

#define ECIA_BLK_EN_SET_VTOR_EN_SET_Pos       _UINT32_(0)                                          /* (ECIA_BLK_EN_SET) Each GIRQx bit can be individually enabled to assert an interrupt event.\n          Reads always return the current value of the internal GIRQX_ENABLE bit. The state of the GIRQX_ENABLE bit is determined by\n         the corresponding GIRQX_ENABLE_SET bit and the GIRQX_ENABLE_ CLEAR bit. (0=disabled, 1=enabled) (R/WS)\n           1=Interrupts in the GIRQx Source Register may be enabled\n               0=No effect. Position */
#define ECIA_BLK_EN_SET_VTOR_EN_SET_Msk       (_UINT32_(0x7FFFFFFF) << ECIA_BLK_EN_SET_VTOR_EN_SET_Pos) /* (ECIA_BLK_EN_SET) Each GIRQx bit can be individually enabled to assert an interrupt event.\n          Reads always return the current value of the internal GIRQX_ENABLE bit. The state of the GIRQX_ENABLE bit is determined by\n         the corresponding GIRQX_ENABLE_SET bit and the GIRQX_ENABLE_ CLEAR bit. (0=disabled, 1=enabled) (R/WS)\n           1=Interrupts in the GIRQx Source Register may be enabled\n               0=No effect. Mask */
#define ECIA_BLK_EN_SET_VTOR_EN_SET(value)    (ECIA_BLK_EN_SET_VTOR_EN_SET_Msk & (_UINT32_(value) << ECIA_BLK_EN_SET_VTOR_EN_SET_Pos)) /* Assigment of value for VTOR_EN_SET in the ECIA_BLK_EN_SET register */
#define ECIA_BLK_EN_SET_Msk                   _UINT32_(0x7FFFFFFF)                                 /* (ECIA_BLK_EN_SET) Register Mask  */


/* -------- ECIA_BLK_EN_CLR : (ECIA Offset: 0x204) (R/W 32) Block Enable Clear Register. -------- */
#define ECIA_BLK_EN_CLR_RESETVALUE            _UINT32_(0x00)                                       /*  (ECIA_BLK_EN_CLR) Block Enable Clear Register.  Reset Value */

#define ECIA_BLK_EN_CLR_VTOR_EN_CLR_Pos       _UINT32_(0)                                          /* (ECIA_BLK_EN_CLR) Each GIRQx bit can be individually disabled to inhibit an interrupt event.\n        Reads always return the current value of the internal GIRQX_ENABLE bit. The state of the GIRQX_ENABLE bit is determined by\n         the corresponding GIRQX_ENABLE_SET bit and the GIRQX_ENABLE_ CLEAR bit. (0=disabled, 1=enabled) (R/WC)\n                 1=All interrupts in the GIRQx Source Register are disabled\n             0=No effect. Position */
#define ECIA_BLK_EN_CLR_VTOR_EN_CLR_Msk       (_UINT32_(0x7FFFFFFF) << ECIA_BLK_EN_CLR_VTOR_EN_CLR_Pos) /* (ECIA_BLK_EN_CLR) Each GIRQx bit can be individually disabled to inhibit an interrupt event.\n        Reads always return the current value of the internal GIRQX_ENABLE bit. The state of the GIRQX_ENABLE bit is determined by\n         the corresponding GIRQX_ENABLE_SET bit and the GIRQX_ENABLE_ CLEAR bit. (0=disabled, 1=enabled) (R/WC)\n                 1=All interrupts in the GIRQx Source Register are disabled\n             0=No effect. Mask */
#define ECIA_BLK_EN_CLR_VTOR_EN_CLR(value)    (ECIA_BLK_EN_CLR_VTOR_EN_CLR_Msk & (_UINT32_(value) << ECIA_BLK_EN_CLR_VTOR_EN_CLR_Pos)) /* Assigment of value for VTOR_EN_CLR in the ECIA_BLK_EN_CLR register */
#define ECIA_BLK_EN_CLR_Msk                   _UINT32_(0x7FFFFFFF)                                 /* (ECIA_BLK_EN_CLR) Register Mask  */


/* -------- ECIA_BLK_IRQ_VTOR : (ECIA Offset: 0x208) ( R/ 32) Block IRQ Vector Register -------- */
#define ECIA_BLK_IRQ_VTOR_RESETVALUE          _UINT32_(0x00)                                       /*  (ECIA_BLK_IRQ_VTOR) Block IRQ Vector Register  Reset Value */

#define ECIA_BLK_IRQ_VTOR_VTOR_Pos            _UINT32_(0)                                          /* (ECIA_BLK_IRQ_VTOR) Each bit in this field reports the status of the group GIRQ interrupt assertion to the NVIC. If the GIRQx interrupt\n       is disabled as a group, by the Block Enable Clear Register, then the corresponding bit will be '0'b and no interrupt will be asserted. Position */
#define ECIA_BLK_IRQ_VTOR_VTOR_Msk            (_UINT32_(0x1FFFFFF) << ECIA_BLK_IRQ_VTOR_VTOR_Pos)  /* (ECIA_BLK_IRQ_VTOR) Each bit in this field reports the status of the group GIRQ interrupt assertion to the NVIC. If the GIRQx interrupt\n       is disabled as a group, by the Block Enable Clear Register, then the corresponding bit will be '0'b and no interrupt will be asserted. Mask */
#define ECIA_BLK_IRQ_VTOR_VTOR(value)         (ECIA_BLK_IRQ_VTOR_VTOR_Msk & (_UINT32_(value) << ECIA_BLK_IRQ_VTOR_VTOR_Pos)) /* Assigment of value for VTOR in the ECIA_BLK_IRQ_VTOR register */
#define ECIA_BLK_IRQ_VTOR_Msk                 _UINT32_(0x01FFFFFF)                                 /* (ECIA_BLK_IRQ_VTOR) Register Mask  */


/** \brief ECIA register offsets definitions */
#define ECIA_SRC_REG_OFST              _UINT32_(0x00)      /* (ECIA_SRC) Status R/W1C Offset */
#define ECIA_EN_SET_REG_OFST           _UINT32_(0x04)      /* (ECIA_EN_SET) Write to set source enables Offset */
#define ECIA_RESULT_REG_OFST           _UINT32_(0x08)      /* (ECIA_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define ECIA_EN_CLR_REG_OFST           _UINT32_(0x0C)      /* (ECIA_EN_CLR) Write to clear source enables Offset */
#define ECIA_BLK_EN_SET_REG_OFST       _UINT32_(0x200)     /* (ECIA_BLK_EN_SET) Block Enable Set Register Offset */
#define ECIA_BLK_EN_CLR_REG_OFST       _UINT32_(0x204)     /* (ECIA_BLK_EN_CLR) Block Enable Clear Register. Offset */
#define ECIA_BLK_IRQ_VTOR_REG_OFST     _UINT32_(0x208)     /* (ECIA_BLK_IRQ_VTOR) Block IRQ Vector Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief GIRQ register API structure */
typedef struct
{
  __IO  uint32_t                       ECIA_SRC;           /**< Offset: 0x00 (R/W  32) Status R/W1C */
  __IO  uint32_t                       ECIA_EN_SET;        /**< Offset: 0x04 (R/W  32) Write to set source enables */
  __I   uint32_t                       ECIA_RESULT;        /**< Offset: 0x08 (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  uint32_t                       ECIA_EN_CLR;        /**< Offset: 0x0C (R/W  32) Write to clear source enables */
  __I   uint8_t                        Reserved1[0x04];
} ecia_girq_registers_t;

#define ECIA_GIRQ_NUMBER 19

/** \brief ECIA register API structure */
typedef struct
{  /* The interrupt generation logic is made of 16 groups of signals, each of which\n            consist of a Status register, a Enable register and a Result register. The Status and Enable are\n          latched registers. The Result register is a bit by bit AND function of the Source and Enable registers.\n        All the bits of the Result register are OR'ed together and AND'ed with the corresponding bit in the Block\n       Select register to form the interrupt signal that is routed to the ARM interrupt controller. */
        ecia_girq_registers_t          GIRQ[ECIA_GIRQ_NUMBER]; /**< Offset: 0x00  */
  __I   uint8_t                        Reserved1[0x84];
  __IO  uint32_t                       ECIA_BLK_EN_SET;    /**< Offset: 0x200 (R/W  32) Block Enable Set Register */
  __IO  uint32_t                       ECIA_BLK_EN_CLR;    /**< Offset: 0x204 (R/W  32) Block Enable Clear Register. */
  __I   uint32_t                       ECIA_BLK_IRQ_VTOR;  /**< Offset: 0x208 (R/   32) Block IRQ Vector Register */
} ecia_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1702Q_ECIA_COMPONENT_H_ */
