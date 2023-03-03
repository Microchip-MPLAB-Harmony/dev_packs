/*
 * Component description for ECIA
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
#ifndef _CEC_ECIA_COMPONENT_H_
#define _CEC_ECIA_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR ECIA                                         */
/* ************************************************************************** */

/* -------- ECIA_SRC8 : (ECIA Offset: 0x00) (R/W 32) GIRQ8 SOURCE -------- */
#define ECIA_SRC8_RESETVALUE                  _UINT32_(0x00)                                       /*  (ECIA_SRC8) GIRQ8 SOURCE  Reset Value */

#define ECIA_SRC8_GPIO140_Pos                 _UINT32_(0)                                          /* (ECIA_SRC8) GPIO 140 Position */
#define ECIA_SRC8_GPIO140_Msk                 (_UINT32_(0x1) << ECIA_SRC8_GPIO140_Pos)             /* (ECIA_SRC8) GPIO 140 Mask */
#define ECIA_SRC8_GPIO140(value)              (ECIA_SRC8_GPIO140_Msk & (_UINT32_(value) << ECIA_SRC8_GPIO140_Pos)) /* Assigment of value for GPIO140 in the ECIA_SRC8 register */
#define ECIA_SRC8_GPIO143_Pos                 _UINT32_(3)                                          /* (ECIA_SRC8) GPIO 143 Position */
#define ECIA_SRC8_GPIO143_Msk                 (_UINT32_(0x1) << ECIA_SRC8_GPIO143_Pos)             /* (ECIA_SRC8) GPIO 143 Mask */
#define ECIA_SRC8_GPIO143(value)              (ECIA_SRC8_GPIO143_Msk & (_UINT32_(value) << ECIA_SRC8_GPIO143_Pos)) /* Assigment of value for GPIO143 in the ECIA_SRC8 register */
#define ECIA_SRC8_GPIO144_Pos                 _UINT32_(4)                                          /* (ECIA_SRC8) GPIO 144 Position */
#define ECIA_SRC8_GPIO144_Msk                 (_UINT32_(0x1) << ECIA_SRC8_GPIO144_Pos)             /* (ECIA_SRC8) GPIO 144 Mask */
#define ECIA_SRC8_GPIO144(value)              (ECIA_SRC8_GPIO144_Msk & (_UINT32_(value) << ECIA_SRC8_GPIO144_Pos)) /* Assigment of value for GPIO144 in the ECIA_SRC8 register */
#define ECIA_SRC8_GPIO145_Pos                 _UINT32_(5)                                          /* (ECIA_SRC8) GPIO 145 Position */
#define ECIA_SRC8_GPIO145_Msk                 (_UINT32_(0x1) << ECIA_SRC8_GPIO145_Pos)             /* (ECIA_SRC8) GPIO 145 Mask */
#define ECIA_SRC8_GPIO145(value)              (ECIA_SRC8_GPIO145_Msk & (_UINT32_(value) << ECIA_SRC8_GPIO145_Pos)) /* Assigment of value for GPIO145 in the ECIA_SRC8 register */
#define ECIA_SRC8_GPIO146_Pos                 _UINT32_(6)                                          /* (ECIA_SRC8) GPIO 146 Position */
#define ECIA_SRC8_GPIO146_Msk                 (_UINT32_(0x1) << ECIA_SRC8_GPIO146_Pos)             /* (ECIA_SRC8) GPIO 146 Mask */
#define ECIA_SRC8_GPIO146(value)              (ECIA_SRC8_GPIO146_Msk & (_UINT32_(value) << ECIA_SRC8_GPIO146_Pos)) /* Assigment of value for GPIO146 in the ECIA_SRC8 register */
#define ECIA_SRC8_GPIO147_Pos                 _UINT32_(7)                                          /* (ECIA_SRC8) GPIO 147 Position */
#define ECIA_SRC8_GPIO147_Msk                 (_UINT32_(0x1) << ECIA_SRC8_GPIO147_Pos)             /* (ECIA_SRC8) GPIO 147 Mask */
#define ECIA_SRC8_GPIO147(value)              (ECIA_SRC8_GPIO147_Msk & (_UINT32_(value) << ECIA_SRC8_GPIO147_Pos)) /* Assigment of value for GPIO147 in the ECIA_SRC8 register */
#define ECIA_SRC8_GPIO150_Pos                 _UINT32_(8)                                          /* (ECIA_SRC8) GPIO 150 Position */
#define ECIA_SRC8_GPIO150_Msk                 (_UINT32_(0x1) << ECIA_SRC8_GPIO150_Pos)             /* (ECIA_SRC8) GPIO 150 Mask */
#define ECIA_SRC8_GPIO150(value)              (ECIA_SRC8_GPIO150_Msk & (_UINT32_(value) << ECIA_SRC8_GPIO150_Pos)) /* Assigment of value for GPIO150 in the ECIA_SRC8 register */
#define ECIA_SRC8_GPIO156_Pos                 _UINT32_(14)                                         /* (ECIA_SRC8) GPIO 156 Position */
#define ECIA_SRC8_GPIO156_Msk                 (_UINT32_(0x1) << ECIA_SRC8_GPIO156_Pos)             /* (ECIA_SRC8) GPIO 156 Mask */
#define ECIA_SRC8_GPIO156(value)              (ECIA_SRC8_GPIO156_Msk & (_UINT32_(value) << ECIA_SRC8_GPIO156_Pos)) /* Assigment of value for GPIO156 in the ECIA_SRC8 register */
#define ECIA_SRC8_GPIO157_Pos                 _UINT32_(15)                                         /* (ECIA_SRC8) GPIO 157 Position */
#define ECIA_SRC8_GPIO157_Msk                 (_UINT32_(0x1) << ECIA_SRC8_GPIO157_Pos)             /* (ECIA_SRC8) GPIO 157 Mask */
#define ECIA_SRC8_GPIO157(value)              (ECIA_SRC8_GPIO157_Msk & (_UINT32_(value) << ECIA_SRC8_GPIO157_Pos)) /* Assigment of value for GPIO157 in the ECIA_SRC8 register */
#define ECIA_SRC8_GPIO163_Pos                 _UINT32_(19)                                         /* (ECIA_SRC8) GPIO 163 Position */
#define ECIA_SRC8_GPIO163_Msk                 (_UINT32_(0x1) << ECIA_SRC8_GPIO163_Pos)             /* (ECIA_SRC8) GPIO 163 Mask */
#define ECIA_SRC8_GPIO163(value)              (ECIA_SRC8_GPIO163_Msk & (_UINT32_(value) << ECIA_SRC8_GPIO163_Pos)) /* Assigment of value for GPIO163 in the ECIA_SRC8 register */
#define ECIA_SRC8_GPIO165_Pos                 _UINT32_(21)                                         /* (ECIA_SRC8) GPIO 165 Position */
#define ECIA_SRC8_GPIO165_Msk                 (_UINT32_(0x1) << ECIA_SRC8_GPIO165_Pos)             /* (ECIA_SRC8) GPIO 165 Mask */
#define ECIA_SRC8_GPIO165(value)              (ECIA_SRC8_GPIO165_Msk & (_UINT32_(value) << ECIA_SRC8_GPIO165_Pos)) /* Assigment of value for GPIO165 in the ECIA_SRC8 register */
#define ECIA_SRC8_GPIO166_Pos                 _UINT32_(22)                                         /* (ECIA_SRC8) GPIO 166 Position */
#define ECIA_SRC8_GPIO166_Msk                 (_UINT32_(0x1) << ECIA_SRC8_GPIO166_Pos)             /* (ECIA_SRC8) GPIO 166 Mask */
#define ECIA_SRC8_GPIO166(value)              (ECIA_SRC8_GPIO166_Msk & (_UINT32_(value) << ECIA_SRC8_GPIO166_Pos)) /* Assigment of value for GPIO166 in the ECIA_SRC8 register */
#define ECIA_SRC8_GPIO170_Pos                 _UINT32_(24)                                         /* (ECIA_SRC8) GPIO 170 Position */
#define ECIA_SRC8_GPIO170_Msk                 (_UINT32_(0x1) << ECIA_SRC8_GPIO170_Pos)             /* (ECIA_SRC8) GPIO 170 Mask */
#define ECIA_SRC8_GPIO170(value)              (ECIA_SRC8_GPIO170_Msk & (_UINT32_(value) << ECIA_SRC8_GPIO170_Pos)) /* Assigment of value for GPIO170 in the ECIA_SRC8 register */
#define ECIA_SRC8_GPIO171_Pos                 _UINT32_(25)                                         /* (ECIA_SRC8) GPIO 171 Position */
#define ECIA_SRC8_GPIO171_Msk                 (_UINT32_(0x1) << ECIA_SRC8_GPIO171_Pos)             /* (ECIA_SRC8) GPIO 171 Mask */
#define ECIA_SRC8_GPIO171(value)              (ECIA_SRC8_GPIO171_Msk & (_UINT32_(value) << ECIA_SRC8_GPIO171_Pos)) /* Assigment of value for GPIO171 in the ECIA_SRC8 register */
#define ECIA_SRC8_Msk                         _UINT32_(0x0368C1F9)                                 /* (ECIA_SRC8) Register Mask  */

#define ECIA_SRC8_GPIO_Pos                    _UINT32_(0)                                          /* (ECIA_SRC8 Position) GPIO x7x */
#define ECIA_SRC8_GPIO_Msk                    (_UINT32_(0x3FFF) << ECIA_SRC8_GPIO_Pos)             /* (ECIA_SRC8 Mask) GPIO */
#define ECIA_SRC8_GPIO(value)                 (ECIA_SRC8_GPIO_Msk & (_UINT32_(value) << ECIA_SRC8_GPIO_Pos)) 

/* -------- ECIA_EN_SET8 : (ECIA Offset: 0x04) (R/W 32) GIRQ8 ENABLE SET -------- */
#define ECIA_EN_SET8_RESETVALUE               _UINT32_(0x00)                                       /*  (ECIA_EN_SET8) GIRQ8 ENABLE SET  Reset Value */

#define ECIA_EN_SET8_GPIO140_Pos              _UINT32_(0)                                          /* (ECIA_EN_SET8) GPIO 140 Position */
#define ECIA_EN_SET8_GPIO140_Msk              (_UINT32_(0x1) << ECIA_EN_SET8_GPIO140_Pos)          /* (ECIA_EN_SET8) GPIO 140 Mask */
#define ECIA_EN_SET8_GPIO140(value)           (ECIA_EN_SET8_GPIO140_Msk & (_UINT32_(value) << ECIA_EN_SET8_GPIO140_Pos)) /* Assigment of value for GPIO140 in the ECIA_EN_SET8 register */
#define ECIA_EN_SET8_GPIO143_Pos              _UINT32_(3)                                          /* (ECIA_EN_SET8) GPIO 143 Position */
#define ECIA_EN_SET8_GPIO143_Msk              (_UINT32_(0x1) << ECIA_EN_SET8_GPIO143_Pos)          /* (ECIA_EN_SET8) GPIO 143 Mask */
#define ECIA_EN_SET8_GPIO143(value)           (ECIA_EN_SET8_GPIO143_Msk & (_UINT32_(value) << ECIA_EN_SET8_GPIO143_Pos)) /* Assigment of value for GPIO143 in the ECIA_EN_SET8 register */
#define ECIA_EN_SET8_GPIO144_Pos              _UINT32_(4)                                          /* (ECIA_EN_SET8) GPIO 144 Position */
#define ECIA_EN_SET8_GPIO144_Msk              (_UINT32_(0x1) << ECIA_EN_SET8_GPIO144_Pos)          /* (ECIA_EN_SET8) GPIO 144 Mask */
#define ECIA_EN_SET8_GPIO144(value)           (ECIA_EN_SET8_GPIO144_Msk & (_UINT32_(value) << ECIA_EN_SET8_GPIO144_Pos)) /* Assigment of value for GPIO144 in the ECIA_EN_SET8 register */
#define ECIA_EN_SET8_GPIO145_Pos              _UINT32_(5)                                          /* (ECIA_EN_SET8) GPIO 145 Position */
#define ECIA_EN_SET8_GPIO145_Msk              (_UINT32_(0x1) << ECIA_EN_SET8_GPIO145_Pos)          /* (ECIA_EN_SET8) GPIO 145 Mask */
#define ECIA_EN_SET8_GPIO145(value)           (ECIA_EN_SET8_GPIO145_Msk & (_UINT32_(value) << ECIA_EN_SET8_GPIO145_Pos)) /* Assigment of value for GPIO145 in the ECIA_EN_SET8 register */
#define ECIA_EN_SET8_GPIO146_Pos              _UINT32_(6)                                          /* (ECIA_EN_SET8) GPIO 146 Position */
#define ECIA_EN_SET8_GPIO146_Msk              (_UINT32_(0x1) << ECIA_EN_SET8_GPIO146_Pos)          /* (ECIA_EN_SET8) GPIO 146 Mask */
#define ECIA_EN_SET8_GPIO146(value)           (ECIA_EN_SET8_GPIO146_Msk & (_UINT32_(value) << ECIA_EN_SET8_GPIO146_Pos)) /* Assigment of value for GPIO146 in the ECIA_EN_SET8 register */
#define ECIA_EN_SET8_GPIO147_Pos              _UINT32_(7)                                          /* (ECIA_EN_SET8) GPIO 147 Position */
#define ECIA_EN_SET8_GPIO147_Msk              (_UINT32_(0x1) << ECIA_EN_SET8_GPIO147_Pos)          /* (ECIA_EN_SET8) GPIO 147 Mask */
#define ECIA_EN_SET8_GPIO147(value)           (ECIA_EN_SET8_GPIO147_Msk & (_UINT32_(value) << ECIA_EN_SET8_GPIO147_Pos)) /* Assigment of value for GPIO147 in the ECIA_EN_SET8 register */
#define ECIA_EN_SET8_GPIO150_Pos              _UINT32_(8)                                          /* (ECIA_EN_SET8) GPIO 150 Position */
#define ECIA_EN_SET8_GPIO150_Msk              (_UINT32_(0x1) << ECIA_EN_SET8_GPIO150_Pos)          /* (ECIA_EN_SET8) GPIO 150 Mask */
#define ECIA_EN_SET8_GPIO150(value)           (ECIA_EN_SET8_GPIO150_Msk & (_UINT32_(value) << ECIA_EN_SET8_GPIO150_Pos)) /* Assigment of value for GPIO150 in the ECIA_EN_SET8 register */
#define ECIA_EN_SET8_GPIO156_Pos              _UINT32_(14)                                         /* (ECIA_EN_SET8) GPIO 156 Position */
#define ECIA_EN_SET8_GPIO156_Msk              (_UINT32_(0x1) << ECIA_EN_SET8_GPIO156_Pos)          /* (ECIA_EN_SET8) GPIO 156 Mask */
#define ECIA_EN_SET8_GPIO156(value)           (ECIA_EN_SET8_GPIO156_Msk & (_UINT32_(value) << ECIA_EN_SET8_GPIO156_Pos)) /* Assigment of value for GPIO156 in the ECIA_EN_SET8 register */
#define ECIA_EN_SET8_GPIO157_Pos              _UINT32_(15)                                         /* (ECIA_EN_SET8) GPIO 157 Position */
#define ECIA_EN_SET8_GPIO157_Msk              (_UINT32_(0x1) << ECIA_EN_SET8_GPIO157_Pos)          /* (ECIA_EN_SET8) GPIO 157 Mask */
#define ECIA_EN_SET8_GPIO157(value)           (ECIA_EN_SET8_GPIO157_Msk & (_UINT32_(value) << ECIA_EN_SET8_GPIO157_Pos)) /* Assigment of value for GPIO157 in the ECIA_EN_SET8 register */
#define ECIA_EN_SET8_GPIO163_Pos              _UINT32_(19)                                         /* (ECIA_EN_SET8) GPIO 163 Position */
#define ECIA_EN_SET8_GPIO163_Msk              (_UINT32_(0x1) << ECIA_EN_SET8_GPIO163_Pos)          /* (ECIA_EN_SET8) GPIO 163 Mask */
#define ECIA_EN_SET8_GPIO163(value)           (ECIA_EN_SET8_GPIO163_Msk & (_UINT32_(value) << ECIA_EN_SET8_GPIO163_Pos)) /* Assigment of value for GPIO163 in the ECIA_EN_SET8 register */
#define ECIA_EN_SET8_GPIO165_Pos              _UINT32_(21)                                         /* (ECIA_EN_SET8) GPIO 165 Position */
#define ECIA_EN_SET8_GPIO165_Msk              (_UINT32_(0x1) << ECIA_EN_SET8_GPIO165_Pos)          /* (ECIA_EN_SET8) GPIO 165 Mask */
#define ECIA_EN_SET8_GPIO165(value)           (ECIA_EN_SET8_GPIO165_Msk & (_UINT32_(value) << ECIA_EN_SET8_GPIO165_Pos)) /* Assigment of value for GPIO165 in the ECIA_EN_SET8 register */
#define ECIA_EN_SET8_GPIO166_Pos              _UINT32_(22)                                         /* (ECIA_EN_SET8) GPIO 166 Position */
#define ECIA_EN_SET8_GPIO166_Msk              (_UINT32_(0x1) << ECIA_EN_SET8_GPIO166_Pos)          /* (ECIA_EN_SET8) GPIO 166 Mask */
#define ECIA_EN_SET8_GPIO166(value)           (ECIA_EN_SET8_GPIO166_Msk & (_UINT32_(value) << ECIA_EN_SET8_GPIO166_Pos)) /* Assigment of value for GPIO166 in the ECIA_EN_SET8 register */
#define ECIA_EN_SET8_GPIO170_Pos              _UINT32_(24)                                         /* (ECIA_EN_SET8) GPIO 170 Position */
#define ECIA_EN_SET8_GPIO170_Msk              (_UINT32_(0x1) << ECIA_EN_SET8_GPIO170_Pos)          /* (ECIA_EN_SET8) GPIO 170 Mask */
#define ECIA_EN_SET8_GPIO170(value)           (ECIA_EN_SET8_GPIO170_Msk & (_UINT32_(value) << ECIA_EN_SET8_GPIO170_Pos)) /* Assigment of value for GPIO170 in the ECIA_EN_SET8 register */
#define ECIA_EN_SET8_GPIO171_Pos              _UINT32_(25)                                         /* (ECIA_EN_SET8) GPIO 171 Position */
#define ECIA_EN_SET8_GPIO171_Msk              (_UINT32_(0x1) << ECIA_EN_SET8_GPIO171_Pos)          /* (ECIA_EN_SET8) GPIO 171 Mask */
#define ECIA_EN_SET8_GPIO171(value)           (ECIA_EN_SET8_GPIO171_Msk & (_UINT32_(value) << ECIA_EN_SET8_GPIO171_Pos)) /* Assigment of value for GPIO171 in the ECIA_EN_SET8 register */
#define ECIA_EN_SET8_Msk                      _UINT32_(0x0368C1F9)                                 /* (ECIA_EN_SET8) Register Mask  */

#define ECIA_EN_SET8_GPIO_Pos                 _UINT32_(0)                                          /* (ECIA_EN_SET8 Position) GPIO x7x */
#define ECIA_EN_SET8_GPIO_Msk                 (_UINT32_(0x3FFF) << ECIA_EN_SET8_GPIO_Pos)          /* (ECIA_EN_SET8 Mask) GPIO */
#define ECIA_EN_SET8_GPIO(value)              (ECIA_EN_SET8_GPIO_Msk & (_UINT32_(value) << ECIA_EN_SET8_GPIO_Pos)) 

/* -------- ECIA_RESULT8 : (ECIA Offset: 0x08) ( R/ 32) GIRQ8 RESULT -------- */
#define ECIA_RESULT8_RESETVALUE               _UINT32_(0x00)                                       /*  (ECIA_RESULT8) GIRQ8 RESULT  Reset Value */

#define ECIA_RESULT8_GPIO140_Pos              _UINT32_(0)                                          /* (ECIA_RESULT8) GPIO 140 Position */
#define ECIA_RESULT8_GPIO140_Msk              (_UINT32_(0x1) << ECIA_RESULT8_GPIO140_Pos)          /* (ECIA_RESULT8) GPIO 140 Mask */
#define ECIA_RESULT8_GPIO140(value)           (ECIA_RESULT8_GPIO140_Msk & (_UINT32_(value) << ECIA_RESULT8_GPIO140_Pos)) /* Assigment of value for GPIO140 in the ECIA_RESULT8 register */
#define ECIA_RESULT8_GPIO143_Pos              _UINT32_(3)                                          /* (ECIA_RESULT8) GPIO 143 Position */
#define ECIA_RESULT8_GPIO143_Msk              (_UINT32_(0x1) << ECIA_RESULT8_GPIO143_Pos)          /* (ECIA_RESULT8) GPIO 143 Mask */
#define ECIA_RESULT8_GPIO143(value)           (ECIA_RESULT8_GPIO143_Msk & (_UINT32_(value) << ECIA_RESULT8_GPIO143_Pos)) /* Assigment of value for GPIO143 in the ECIA_RESULT8 register */
#define ECIA_RESULT8_GPIO144_Pos              _UINT32_(4)                                          /* (ECIA_RESULT8) GPIO 144 Position */
#define ECIA_RESULT8_GPIO144_Msk              (_UINT32_(0x1) << ECIA_RESULT8_GPIO144_Pos)          /* (ECIA_RESULT8) GPIO 144 Mask */
#define ECIA_RESULT8_GPIO144(value)           (ECIA_RESULT8_GPIO144_Msk & (_UINT32_(value) << ECIA_RESULT8_GPIO144_Pos)) /* Assigment of value for GPIO144 in the ECIA_RESULT8 register */
#define ECIA_RESULT8_GPIO145_Pos              _UINT32_(5)                                          /* (ECIA_RESULT8) GPIO 145 Position */
#define ECIA_RESULT8_GPIO145_Msk              (_UINT32_(0x1) << ECIA_RESULT8_GPIO145_Pos)          /* (ECIA_RESULT8) GPIO 145 Mask */
#define ECIA_RESULT8_GPIO145(value)           (ECIA_RESULT8_GPIO145_Msk & (_UINT32_(value) << ECIA_RESULT8_GPIO145_Pos)) /* Assigment of value for GPIO145 in the ECIA_RESULT8 register */
#define ECIA_RESULT8_GPIO146_Pos              _UINT32_(6)                                          /* (ECIA_RESULT8) GPIO 146 Position */
#define ECIA_RESULT8_GPIO146_Msk              (_UINT32_(0x1) << ECIA_RESULT8_GPIO146_Pos)          /* (ECIA_RESULT8) GPIO 146 Mask */
#define ECIA_RESULT8_GPIO146(value)           (ECIA_RESULT8_GPIO146_Msk & (_UINT32_(value) << ECIA_RESULT8_GPIO146_Pos)) /* Assigment of value for GPIO146 in the ECIA_RESULT8 register */
#define ECIA_RESULT8_GPIO147_Pos              _UINT32_(7)                                          /* (ECIA_RESULT8) GPIO 147 Position */
#define ECIA_RESULT8_GPIO147_Msk              (_UINT32_(0x1) << ECIA_RESULT8_GPIO147_Pos)          /* (ECIA_RESULT8) GPIO 147 Mask */
#define ECIA_RESULT8_GPIO147(value)           (ECIA_RESULT8_GPIO147_Msk & (_UINT32_(value) << ECIA_RESULT8_GPIO147_Pos)) /* Assigment of value for GPIO147 in the ECIA_RESULT8 register */
#define ECIA_RESULT8_GPIO150_Pos              _UINT32_(8)                                          /* (ECIA_RESULT8) GPIO 150 Position */
#define ECIA_RESULT8_GPIO150_Msk              (_UINT32_(0x1) << ECIA_RESULT8_GPIO150_Pos)          /* (ECIA_RESULT8) GPIO 150 Mask */
#define ECIA_RESULT8_GPIO150(value)           (ECIA_RESULT8_GPIO150_Msk & (_UINT32_(value) << ECIA_RESULT8_GPIO150_Pos)) /* Assigment of value for GPIO150 in the ECIA_RESULT8 register */
#define ECIA_RESULT8_GPIO156_Pos              _UINT32_(14)                                         /* (ECIA_RESULT8) GPIO 156 Position */
#define ECIA_RESULT8_GPIO156_Msk              (_UINT32_(0x1) << ECIA_RESULT8_GPIO156_Pos)          /* (ECIA_RESULT8) GPIO 156 Mask */
#define ECIA_RESULT8_GPIO156(value)           (ECIA_RESULT8_GPIO156_Msk & (_UINT32_(value) << ECIA_RESULT8_GPIO156_Pos)) /* Assigment of value for GPIO156 in the ECIA_RESULT8 register */
#define ECIA_RESULT8_GPIO157_Pos              _UINT32_(15)                                         /* (ECIA_RESULT8) GPIO 157 Position */
#define ECIA_RESULT8_GPIO157_Msk              (_UINT32_(0x1) << ECIA_RESULT8_GPIO157_Pos)          /* (ECIA_RESULT8) GPIO 157 Mask */
#define ECIA_RESULT8_GPIO157(value)           (ECIA_RESULT8_GPIO157_Msk & (_UINT32_(value) << ECIA_RESULT8_GPIO157_Pos)) /* Assigment of value for GPIO157 in the ECIA_RESULT8 register */
#define ECIA_RESULT8_GPIO163_Pos              _UINT32_(19)                                         /* (ECIA_RESULT8) GPIO 163 Position */
#define ECIA_RESULT8_GPIO163_Msk              (_UINT32_(0x1) << ECIA_RESULT8_GPIO163_Pos)          /* (ECIA_RESULT8) GPIO 163 Mask */
#define ECIA_RESULT8_GPIO163(value)           (ECIA_RESULT8_GPIO163_Msk & (_UINT32_(value) << ECIA_RESULT8_GPIO163_Pos)) /* Assigment of value for GPIO163 in the ECIA_RESULT8 register */
#define ECIA_RESULT8_GPIO165_Pos              _UINT32_(21)                                         /* (ECIA_RESULT8) GPIO 165 Position */
#define ECIA_RESULT8_GPIO165_Msk              (_UINT32_(0x1) << ECIA_RESULT8_GPIO165_Pos)          /* (ECIA_RESULT8) GPIO 165 Mask */
#define ECIA_RESULT8_GPIO165(value)           (ECIA_RESULT8_GPIO165_Msk & (_UINT32_(value) << ECIA_RESULT8_GPIO165_Pos)) /* Assigment of value for GPIO165 in the ECIA_RESULT8 register */
#define ECIA_RESULT8_GPIO166_Pos              _UINT32_(22)                                         /* (ECIA_RESULT8) GPIO 166 Position */
#define ECIA_RESULT8_GPIO166_Msk              (_UINT32_(0x1) << ECIA_RESULT8_GPIO166_Pos)          /* (ECIA_RESULT8) GPIO 166 Mask */
#define ECIA_RESULT8_GPIO166(value)           (ECIA_RESULT8_GPIO166_Msk & (_UINT32_(value) << ECIA_RESULT8_GPIO166_Pos)) /* Assigment of value for GPIO166 in the ECIA_RESULT8 register */
#define ECIA_RESULT8_GPIO170_Pos              _UINT32_(24)                                         /* (ECIA_RESULT8) GPIO 170 Position */
#define ECIA_RESULT8_GPIO170_Msk              (_UINT32_(0x1) << ECIA_RESULT8_GPIO170_Pos)          /* (ECIA_RESULT8) GPIO 170 Mask */
#define ECIA_RESULT8_GPIO170(value)           (ECIA_RESULT8_GPIO170_Msk & (_UINT32_(value) << ECIA_RESULT8_GPIO170_Pos)) /* Assigment of value for GPIO170 in the ECIA_RESULT8 register */
#define ECIA_RESULT8_GPIO171_Pos              _UINT32_(25)                                         /* (ECIA_RESULT8) GPIO 171 Position */
#define ECIA_RESULT8_GPIO171_Msk              (_UINT32_(0x1) << ECIA_RESULT8_GPIO171_Pos)          /* (ECIA_RESULT8) GPIO 171 Mask */
#define ECIA_RESULT8_GPIO171(value)           (ECIA_RESULT8_GPIO171_Msk & (_UINT32_(value) << ECIA_RESULT8_GPIO171_Pos)) /* Assigment of value for GPIO171 in the ECIA_RESULT8 register */
#define ECIA_RESULT8_Msk                      _UINT32_(0x0368C1F9)                                 /* (ECIA_RESULT8) Register Mask  */

#define ECIA_RESULT8_GPIO_Pos                 _UINT32_(0)                                          /* (ECIA_RESULT8 Position) GPIO x7x */
#define ECIA_RESULT8_GPIO_Msk                 (_UINT32_(0x3FFF) << ECIA_RESULT8_GPIO_Pos)          /* (ECIA_RESULT8 Mask) GPIO */
#define ECIA_RESULT8_GPIO(value)              (ECIA_RESULT8_GPIO_Msk & (_UINT32_(value) << ECIA_RESULT8_GPIO_Pos)) 

/* -------- ECIA_EN_CLR8 : (ECIA Offset: 0x0C) (R/W 32) GIRQ8 ENABLE CLEAR -------- */
#define ECIA_EN_CLR8_RESETVALUE               _UINT32_(0x00)                                       /*  (ECIA_EN_CLR8) GIRQ8 ENABLE CLEAR  Reset Value */

#define ECIA_EN_CLR8_GPIO140_Pos              _UINT32_(0)                                          /* (ECIA_EN_CLR8) GPIO 140 Position */
#define ECIA_EN_CLR8_GPIO140_Msk              (_UINT32_(0x1) << ECIA_EN_CLR8_GPIO140_Pos)          /* (ECIA_EN_CLR8) GPIO 140 Mask */
#define ECIA_EN_CLR8_GPIO140(value)           (ECIA_EN_CLR8_GPIO140_Msk & (_UINT32_(value) << ECIA_EN_CLR8_GPIO140_Pos)) /* Assigment of value for GPIO140 in the ECIA_EN_CLR8 register */
#define ECIA_EN_CLR8_GPIO143_Pos              _UINT32_(3)                                          /* (ECIA_EN_CLR8) GPIO 143 Position */
#define ECIA_EN_CLR8_GPIO143_Msk              (_UINT32_(0x1) << ECIA_EN_CLR8_GPIO143_Pos)          /* (ECIA_EN_CLR8) GPIO 143 Mask */
#define ECIA_EN_CLR8_GPIO143(value)           (ECIA_EN_CLR8_GPIO143_Msk & (_UINT32_(value) << ECIA_EN_CLR8_GPIO143_Pos)) /* Assigment of value for GPIO143 in the ECIA_EN_CLR8 register */
#define ECIA_EN_CLR8_GPIO144_Pos              _UINT32_(4)                                          /* (ECIA_EN_CLR8) GPIO 144 Position */
#define ECIA_EN_CLR8_GPIO144_Msk              (_UINT32_(0x1) << ECIA_EN_CLR8_GPIO144_Pos)          /* (ECIA_EN_CLR8) GPIO 144 Mask */
#define ECIA_EN_CLR8_GPIO144(value)           (ECIA_EN_CLR8_GPIO144_Msk & (_UINT32_(value) << ECIA_EN_CLR8_GPIO144_Pos)) /* Assigment of value for GPIO144 in the ECIA_EN_CLR8 register */
#define ECIA_EN_CLR8_GPIO145_Pos              _UINT32_(5)                                          /* (ECIA_EN_CLR8) GPIO 145 Position */
#define ECIA_EN_CLR8_GPIO145_Msk              (_UINT32_(0x1) << ECIA_EN_CLR8_GPIO145_Pos)          /* (ECIA_EN_CLR8) GPIO 145 Mask */
#define ECIA_EN_CLR8_GPIO145(value)           (ECIA_EN_CLR8_GPIO145_Msk & (_UINT32_(value) << ECIA_EN_CLR8_GPIO145_Pos)) /* Assigment of value for GPIO145 in the ECIA_EN_CLR8 register */
#define ECIA_EN_CLR8_GPIO146_Pos              _UINT32_(6)                                          /* (ECIA_EN_CLR8) GPIO 146 Position */
#define ECIA_EN_CLR8_GPIO146_Msk              (_UINT32_(0x1) << ECIA_EN_CLR8_GPIO146_Pos)          /* (ECIA_EN_CLR8) GPIO 146 Mask */
#define ECIA_EN_CLR8_GPIO146(value)           (ECIA_EN_CLR8_GPIO146_Msk & (_UINT32_(value) << ECIA_EN_CLR8_GPIO146_Pos)) /* Assigment of value for GPIO146 in the ECIA_EN_CLR8 register */
#define ECIA_EN_CLR8_GPIO147_Pos              _UINT32_(7)                                          /* (ECIA_EN_CLR8) GPIO 147 Position */
#define ECIA_EN_CLR8_GPIO147_Msk              (_UINT32_(0x1) << ECIA_EN_CLR8_GPIO147_Pos)          /* (ECIA_EN_CLR8) GPIO 147 Mask */
#define ECIA_EN_CLR8_GPIO147(value)           (ECIA_EN_CLR8_GPIO147_Msk & (_UINT32_(value) << ECIA_EN_CLR8_GPIO147_Pos)) /* Assigment of value for GPIO147 in the ECIA_EN_CLR8 register */
#define ECIA_EN_CLR8_GPIO150_Pos              _UINT32_(8)                                          /* (ECIA_EN_CLR8) GPIO 150 Position */
#define ECIA_EN_CLR8_GPIO150_Msk              (_UINT32_(0x1) << ECIA_EN_CLR8_GPIO150_Pos)          /* (ECIA_EN_CLR8) GPIO 150 Mask */
#define ECIA_EN_CLR8_GPIO150(value)           (ECIA_EN_CLR8_GPIO150_Msk & (_UINT32_(value) << ECIA_EN_CLR8_GPIO150_Pos)) /* Assigment of value for GPIO150 in the ECIA_EN_CLR8 register */
#define ECIA_EN_CLR8_GPIO156_Pos              _UINT32_(14)                                         /* (ECIA_EN_CLR8) GPIO 156 Position */
#define ECIA_EN_CLR8_GPIO156_Msk              (_UINT32_(0x1) << ECIA_EN_CLR8_GPIO156_Pos)          /* (ECIA_EN_CLR8) GPIO 156 Mask */
#define ECIA_EN_CLR8_GPIO156(value)           (ECIA_EN_CLR8_GPIO156_Msk & (_UINT32_(value) << ECIA_EN_CLR8_GPIO156_Pos)) /* Assigment of value for GPIO156 in the ECIA_EN_CLR8 register */
#define ECIA_EN_CLR8_GPIO157_Pos              _UINT32_(15)                                         /* (ECIA_EN_CLR8) GPIO 157 Position */
#define ECIA_EN_CLR8_GPIO157_Msk              (_UINT32_(0x1) << ECIA_EN_CLR8_GPIO157_Pos)          /* (ECIA_EN_CLR8) GPIO 157 Mask */
#define ECIA_EN_CLR8_GPIO157(value)           (ECIA_EN_CLR8_GPIO157_Msk & (_UINT32_(value) << ECIA_EN_CLR8_GPIO157_Pos)) /* Assigment of value for GPIO157 in the ECIA_EN_CLR8 register */
#define ECIA_EN_CLR8_GPIO163_Pos              _UINT32_(19)                                         /* (ECIA_EN_CLR8) GPIO 163 Position */
#define ECIA_EN_CLR8_GPIO163_Msk              (_UINT32_(0x1) << ECIA_EN_CLR8_GPIO163_Pos)          /* (ECIA_EN_CLR8) GPIO 163 Mask */
#define ECIA_EN_CLR8_GPIO163(value)           (ECIA_EN_CLR8_GPIO163_Msk & (_UINT32_(value) << ECIA_EN_CLR8_GPIO163_Pos)) /* Assigment of value for GPIO163 in the ECIA_EN_CLR8 register */
#define ECIA_EN_CLR8_GPIO165_Pos              _UINT32_(21)                                         /* (ECIA_EN_CLR8) GPIO 165 Position */
#define ECIA_EN_CLR8_GPIO165_Msk              (_UINT32_(0x1) << ECIA_EN_CLR8_GPIO165_Pos)          /* (ECIA_EN_CLR8) GPIO 165 Mask */
#define ECIA_EN_CLR8_GPIO165(value)           (ECIA_EN_CLR8_GPIO165_Msk & (_UINT32_(value) << ECIA_EN_CLR8_GPIO165_Pos)) /* Assigment of value for GPIO165 in the ECIA_EN_CLR8 register */
#define ECIA_EN_CLR8_GPIO166_Pos              _UINT32_(22)                                         /* (ECIA_EN_CLR8) GPIO 166 Position */
#define ECIA_EN_CLR8_GPIO166_Msk              (_UINT32_(0x1) << ECIA_EN_CLR8_GPIO166_Pos)          /* (ECIA_EN_CLR8) GPIO 166 Mask */
#define ECIA_EN_CLR8_GPIO166(value)           (ECIA_EN_CLR8_GPIO166_Msk & (_UINT32_(value) << ECIA_EN_CLR8_GPIO166_Pos)) /* Assigment of value for GPIO166 in the ECIA_EN_CLR8 register */
#define ECIA_EN_CLR8_GPIO170_Pos              _UINT32_(24)                                         /* (ECIA_EN_CLR8) GPIO 170 Position */
#define ECIA_EN_CLR8_GPIO170_Msk              (_UINT32_(0x1) << ECIA_EN_CLR8_GPIO170_Pos)          /* (ECIA_EN_CLR8) GPIO 170 Mask */
#define ECIA_EN_CLR8_GPIO170(value)           (ECIA_EN_CLR8_GPIO170_Msk & (_UINT32_(value) << ECIA_EN_CLR8_GPIO170_Pos)) /* Assigment of value for GPIO170 in the ECIA_EN_CLR8 register */
#define ECIA_EN_CLR8_GPIO171_Pos              _UINT32_(25)                                         /* (ECIA_EN_CLR8) GPIO 171 Position */
#define ECIA_EN_CLR8_GPIO171_Msk              (_UINT32_(0x1) << ECIA_EN_CLR8_GPIO171_Pos)          /* (ECIA_EN_CLR8) GPIO 171 Mask */
#define ECIA_EN_CLR8_GPIO171(value)           (ECIA_EN_CLR8_GPIO171_Msk & (_UINT32_(value) << ECIA_EN_CLR8_GPIO171_Pos)) /* Assigment of value for GPIO171 in the ECIA_EN_CLR8 register */
#define ECIA_EN_CLR8_Msk                      _UINT32_(0x0368C1F9)                                 /* (ECIA_EN_CLR8) Register Mask  */

#define ECIA_EN_CLR8_GPIO_Pos                 _UINT32_(0)                                          /* (ECIA_EN_CLR8 Position) GPIO x7x */
#define ECIA_EN_CLR8_GPIO_Msk                 (_UINT32_(0x3FFF) << ECIA_EN_CLR8_GPIO_Pos)          /* (ECIA_EN_CLR8 Mask) GPIO */
#define ECIA_EN_CLR8_GPIO(value)              (ECIA_EN_CLR8_GPIO_Msk & (_UINT32_(value) << ECIA_EN_CLR8_GPIO_Pos)) 

/* -------- ECIA_SRC9 : (ECIA Offset: 0x14) (R/W 32) GIRQ9 SOURCE -------- */
#define ECIA_SRC9_RESETVALUE                  _UINT32_(0x00)                                       /*  (ECIA_SRC9) GIRQ9 SOURCE  Reset Value */

#define ECIA_SRC9_GPIO104_Pos                 _UINT32_(4)                                          /* (ECIA_SRC9) GPIO 104 Position */
#define ECIA_SRC9_GPIO104_Msk                 (_UINT32_(0x1) << ECIA_SRC9_GPIO104_Pos)             /* (ECIA_SRC9) GPIO 104 Mask */
#define ECIA_SRC9_GPIO104(value)              (ECIA_SRC9_GPIO104_Msk & (_UINT32_(value) << ECIA_SRC9_GPIO104_Pos)) /* Assigment of value for GPIO104 in the ECIA_SRC9 register */
#define ECIA_SRC9_GPIO105_Pos                 _UINT32_(5)                                          /* (ECIA_SRC9) GPIO 105 Position */
#define ECIA_SRC9_GPIO105_Msk                 (_UINT32_(0x1) << ECIA_SRC9_GPIO105_Pos)             /* (ECIA_SRC9) GPIO 105 Mask */
#define ECIA_SRC9_GPIO105(value)              (ECIA_SRC9_GPIO105_Msk & (_UINT32_(value) << ECIA_SRC9_GPIO105_Pos)) /* Assigment of value for GPIO105 in the ECIA_SRC9 register */
#define ECIA_SRC9_GPIO106_Pos                 _UINT32_(6)                                          /* (ECIA_SRC9) GPIO 106 Position */
#define ECIA_SRC9_GPIO106_Msk                 (_UINT32_(0x1) << ECIA_SRC9_GPIO106_Pos)             /* (ECIA_SRC9) GPIO 106 Mask */
#define ECIA_SRC9_GPIO106(value)              (ECIA_SRC9_GPIO106_Msk & (_UINT32_(value) << ECIA_SRC9_GPIO106_Pos)) /* Assigment of value for GPIO106 in the ECIA_SRC9 register */
#define ECIA_SRC9_GPIO107_Pos                 _UINT32_(7)                                          /* (ECIA_SRC9) GPIO 107 Position */
#define ECIA_SRC9_GPIO107_Msk                 (_UINT32_(0x1) << ECIA_SRC9_GPIO107_Pos)             /* (ECIA_SRC9) GPIO 107 Mask */
#define ECIA_SRC9_GPIO107(value)              (ECIA_SRC9_GPIO107_Msk & (_UINT32_(value) << ECIA_SRC9_GPIO107_Pos)) /* Assigment of value for GPIO107 in the ECIA_SRC9 register */
#define ECIA_SRC9_GPIO112_Pos                 _UINT32_(10)                                         /* (ECIA_SRC9) GPIO 112 Position */
#define ECIA_SRC9_GPIO112_Msk                 (_UINT32_(0x1) << ECIA_SRC9_GPIO112_Pos)             /* (ECIA_SRC9) GPIO 112 Mask */
#define ECIA_SRC9_GPIO112(value)              (ECIA_SRC9_GPIO112_Msk & (_UINT32_(value) << ECIA_SRC9_GPIO112_Pos)) /* Assigment of value for GPIO112 in the ECIA_SRC9 register */
#define ECIA_SRC9_GPIO113_Pos                 _UINT32_(11)                                         /* (ECIA_SRC9) GPIO 113 Position */
#define ECIA_SRC9_GPIO113_Msk                 (_UINT32_(0x1) << ECIA_SRC9_GPIO113_Pos)             /* (ECIA_SRC9) GPIO 113 Mask */
#define ECIA_SRC9_GPIO113(value)              (ECIA_SRC9_GPIO113_Msk & (_UINT32_(value) << ECIA_SRC9_GPIO113_Pos)) /* Assigment of value for GPIO113 in the ECIA_SRC9 register */
#define ECIA_SRC9_GPIO120_Pos                 _UINT32_(16)                                         /* (ECIA_SRC9) GPIO 120 Position */
#define ECIA_SRC9_GPIO120_Msk                 (_UINT32_(0x1) << ECIA_SRC9_GPIO120_Pos)             /* (ECIA_SRC9) GPIO 120 Mask */
#define ECIA_SRC9_GPIO120(value)              (ECIA_SRC9_GPIO120_Msk & (_UINT32_(value) << ECIA_SRC9_GPIO120_Pos)) /* Assigment of value for GPIO120 in the ECIA_SRC9 register */
#define ECIA_SRC9_GPIO121_Pos                 _UINT32_(17)                                         /* (ECIA_SRC9) GPIO 121 Position */
#define ECIA_SRC9_GPIO121_Msk                 (_UINT32_(0x1) << ECIA_SRC9_GPIO121_Pos)             /* (ECIA_SRC9) GPIO 121 Mask */
#define ECIA_SRC9_GPIO121(value)              (ECIA_SRC9_GPIO121_Msk & (_UINT32_(value) << ECIA_SRC9_GPIO121_Pos)) /* Assigment of value for GPIO121 in the ECIA_SRC9 register */
#define ECIA_SRC9_GPIO122_Pos                 _UINT32_(18)                                         /* (ECIA_SRC9) GPIO 122 Position */
#define ECIA_SRC9_GPIO122_Msk                 (_UINT32_(0x1) << ECIA_SRC9_GPIO122_Pos)             /* (ECIA_SRC9) GPIO 122 Mask */
#define ECIA_SRC9_GPIO122(value)              (ECIA_SRC9_GPIO122_Msk & (_UINT32_(value) << ECIA_SRC9_GPIO122_Pos)) /* Assigment of value for GPIO122 in the ECIA_SRC9 register */
#define ECIA_SRC9_GPIO123_Pos                 _UINT32_(19)                                         /* (ECIA_SRC9) GPIO 123 Position */
#define ECIA_SRC9_GPIO123_Msk                 (_UINT32_(0x1) << ECIA_SRC9_GPIO123_Pos)             /* (ECIA_SRC9) GPIO 123 Mask */
#define ECIA_SRC9_GPIO123(value)              (ECIA_SRC9_GPIO123_Msk & (_UINT32_(value) << ECIA_SRC9_GPIO123_Pos)) /* Assigment of value for GPIO123 in the ECIA_SRC9 register */
#define ECIA_SRC9_GPIO124_Pos                 _UINT32_(20)                                         /* (ECIA_SRC9) GPIO 124 Position */
#define ECIA_SRC9_GPIO124_Msk                 (_UINT32_(0x1) << ECIA_SRC9_GPIO124_Pos)             /* (ECIA_SRC9) GPIO 124 Mask */
#define ECIA_SRC9_GPIO124(value)              (ECIA_SRC9_GPIO124_Msk & (_UINT32_(value) << ECIA_SRC9_GPIO124_Pos)) /* Assigment of value for GPIO124 in the ECIA_SRC9 register */
#define ECIA_SRC9_GPIO125_Pos                 _UINT32_(21)                                         /* (ECIA_SRC9) GPIO 125 Position */
#define ECIA_SRC9_GPIO125_Msk                 (_UINT32_(0x1) << ECIA_SRC9_GPIO125_Pos)             /* (ECIA_SRC9) GPIO 125 Mask */
#define ECIA_SRC9_GPIO125(value)              (ECIA_SRC9_GPIO125_Msk & (_UINT32_(value) << ECIA_SRC9_GPIO125_Pos)) /* Assigment of value for GPIO125 in the ECIA_SRC9 register */
#define ECIA_SRC9_GPIO126_Pos                 _UINT32_(22)                                         /* (ECIA_SRC9) GPIO 126 Position */
#define ECIA_SRC9_GPIO126_Msk                 (_UINT32_(0x1) << ECIA_SRC9_GPIO126_Pos)             /* (ECIA_SRC9) GPIO 126 Mask */
#define ECIA_SRC9_GPIO126(value)              (ECIA_SRC9_GPIO126_Msk & (_UINT32_(value) << ECIA_SRC9_GPIO126_Pos)) /* Assigment of value for GPIO126 in the ECIA_SRC9 register */
#define ECIA_SRC9_GPIO127_Pos                 _UINT32_(23)                                         /* (ECIA_SRC9) GPIO 127 Position */
#define ECIA_SRC9_GPIO127_Msk                 (_UINT32_(0x1) << ECIA_SRC9_GPIO127_Pos)             /* (ECIA_SRC9) GPIO 127 Mask */
#define ECIA_SRC9_GPIO127(value)              (ECIA_SRC9_GPIO127_Msk & (_UINT32_(value) << ECIA_SRC9_GPIO127_Pos)) /* Assigment of value for GPIO127 in the ECIA_SRC9 register */
#define ECIA_SRC9_GPIO130_Pos                 _UINT32_(24)                                         /* (ECIA_SRC9) GPIO 130 Position */
#define ECIA_SRC9_GPIO130_Msk                 (_UINT32_(0x1) << ECIA_SRC9_GPIO130_Pos)             /* (ECIA_SRC9) GPIO 130 Mask */
#define ECIA_SRC9_GPIO130(value)              (ECIA_SRC9_GPIO130_Msk & (_UINT32_(value) << ECIA_SRC9_GPIO130_Pos)) /* Assigment of value for GPIO130 in the ECIA_SRC9 register */
#define ECIA_SRC9_GPIO131_Pos                 _UINT32_(25)                                         /* (ECIA_SRC9) GPIO 131 Position */
#define ECIA_SRC9_GPIO131_Msk                 (_UINT32_(0x1) << ECIA_SRC9_GPIO131_Pos)             /* (ECIA_SRC9) GPIO 131 Mask */
#define ECIA_SRC9_GPIO131(value)              (ECIA_SRC9_GPIO131_Msk & (_UINT32_(value) << ECIA_SRC9_GPIO131_Pos)) /* Assigment of value for GPIO131 in the ECIA_SRC9 register */
#define ECIA_SRC9_GPIO132_Pos                 _UINT32_(26)                                         /* (ECIA_SRC9) GPIO 132 Position */
#define ECIA_SRC9_GPIO132_Msk                 (_UINT32_(0x1) << ECIA_SRC9_GPIO132_Pos)             /* (ECIA_SRC9) GPIO 132 Mask */
#define ECIA_SRC9_GPIO132(value)              (ECIA_SRC9_GPIO132_Msk & (_UINT32_(value) << ECIA_SRC9_GPIO132_Pos)) /* Assigment of value for GPIO132 in the ECIA_SRC9 register */
#define ECIA_SRC9_Msk                         _UINT32_(0x07FF0CF0)                                 /* (ECIA_SRC9) Register Mask  */

#define ECIA_SRC9_GPIO_Pos                    _UINT32_(4)                                          /* (ECIA_SRC9 Position) GPIO x32 */
#define ECIA_SRC9_GPIO_Msk                    (_UINT32_(0x1FFFF) << ECIA_SRC9_GPIO_Pos)            /* (ECIA_SRC9 Mask) GPIO */
#define ECIA_SRC9_GPIO(value)                 (ECIA_SRC9_GPIO_Msk & (_UINT32_(value) << ECIA_SRC9_GPIO_Pos)) 

/* -------- ECIA_EN_SET9 : (ECIA Offset: 0x18) (R/W 32) GIRQ9 ENABLE SET -------- */
#define ECIA_EN_SET9_RESETVALUE               _UINT32_(0x00)                                       /*  (ECIA_EN_SET9) GIRQ9 ENABLE SET  Reset Value */

#define ECIA_EN_SET9_GPIO104_Pos              _UINT32_(4)                                          /* (ECIA_EN_SET9) GPIO 104 Position */
#define ECIA_EN_SET9_GPIO104_Msk              (_UINT32_(0x1) << ECIA_EN_SET9_GPIO104_Pos)          /* (ECIA_EN_SET9) GPIO 104 Mask */
#define ECIA_EN_SET9_GPIO104(value)           (ECIA_EN_SET9_GPIO104_Msk & (_UINT32_(value) << ECIA_EN_SET9_GPIO104_Pos)) /* Assigment of value for GPIO104 in the ECIA_EN_SET9 register */
#define ECIA_EN_SET9_GPIO105_Pos              _UINT32_(5)                                          /* (ECIA_EN_SET9) GPIO 105 Position */
#define ECIA_EN_SET9_GPIO105_Msk              (_UINT32_(0x1) << ECIA_EN_SET9_GPIO105_Pos)          /* (ECIA_EN_SET9) GPIO 105 Mask */
#define ECIA_EN_SET9_GPIO105(value)           (ECIA_EN_SET9_GPIO105_Msk & (_UINT32_(value) << ECIA_EN_SET9_GPIO105_Pos)) /* Assigment of value for GPIO105 in the ECIA_EN_SET9 register */
#define ECIA_EN_SET9_GPIO106_Pos              _UINT32_(6)                                          /* (ECIA_EN_SET9) GPIO 106 Position */
#define ECIA_EN_SET9_GPIO106_Msk              (_UINT32_(0x1) << ECIA_EN_SET9_GPIO106_Pos)          /* (ECIA_EN_SET9) GPIO 106 Mask */
#define ECIA_EN_SET9_GPIO106(value)           (ECIA_EN_SET9_GPIO106_Msk & (_UINT32_(value) << ECIA_EN_SET9_GPIO106_Pos)) /* Assigment of value for GPIO106 in the ECIA_EN_SET9 register */
#define ECIA_EN_SET9_GPIO107_Pos              _UINT32_(7)                                          /* (ECIA_EN_SET9) GPIO 107 Position */
#define ECIA_EN_SET9_GPIO107_Msk              (_UINT32_(0x1) << ECIA_EN_SET9_GPIO107_Pos)          /* (ECIA_EN_SET9) GPIO 107 Mask */
#define ECIA_EN_SET9_GPIO107(value)           (ECIA_EN_SET9_GPIO107_Msk & (_UINT32_(value) << ECIA_EN_SET9_GPIO107_Pos)) /* Assigment of value for GPIO107 in the ECIA_EN_SET9 register */
#define ECIA_EN_SET9_GPIO112_Pos              _UINT32_(10)                                         /* (ECIA_EN_SET9) GPIO 112 Position */
#define ECIA_EN_SET9_GPIO112_Msk              (_UINT32_(0x1) << ECIA_EN_SET9_GPIO112_Pos)          /* (ECIA_EN_SET9) GPIO 112 Mask */
#define ECIA_EN_SET9_GPIO112(value)           (ECIA_EN_SET9_GPIO112_Msk & (_UINT32_(value) << ECIA_EN_SET9_GPIO112_Pos)) /* Assigment of value for GPIO112 in the ECIA_EN_SET9 register */
#define ECIA_EN_SET9_GPIO113_Pos              _UINT32_(11)                                         /* (ECIA_EN_SET9) GPIO 113 Position */
#define ECIA_EN_SET9_GPIO113_Msk              (_UINT32_(0x1) << ECIA_EN_SET9_GPIO113_Pos)          /* (ECIA_EN_SET9) GPIO 113 Mask */
#define ECIA_EN_SET9_GPIO113(value)           (ECIA_EN_SET9_GPIO113_Msk & (_UINT32_(value) << ECIA_EN_SET9_GPIO113_Pos)) /* Assigment of value for GPIO113 in the ECIA_EN_SET9 register */
#define ECIA_EN_SET9_GPIO120_Pos              _UINT32_(16)                                         /* (ECIA_EN_SET9) GPIO 120 Position */
#define ECIA_EN_SET9_GPIO120_Msk              (_UINT32_(0x1) << ECIA_EN_SET9_GPIO120_Pos)          /* (ECIA_EN_SET9) GPIO 120 Mask */
#define ECIA_EN_SET9_GPIO120(value)           (ECIA_EN_SET9_GPIO120_Msk & (_UINT32_(value) << ECIA_EN_SET9_GPIO120_Pos)) /* Assigment of value for GPIO120 in the ECIA_EN_SET9 register */
#define ECIA_EN_SET9_GPIO121_Pos              _UINT32_(17)                                         /* (ECIA_EN_SET9) GPIO 121 Position */
#define ECIA_EN_SET9_GPIO121_Msk              (_UINT32_(0x1) << ECIA_EN_SET9_GPIO121_Pos)          /* (ECIA_EN_SET9) GPIO 121 Mask */
#define ECIA_EN_SET9_GPIO121(value)           (ECIA_EN_SET9_GPIO121_Msk & (_UINT32_(value) << ECIA_EN_SET9_GPIO121_Pos)) /* Assigment of value for GPIO121 in the ECIA_EN_SET9 register */
#define ECIA_EN_SET9_GPIO122_Pos              _UINT32_(18)                                         /* (ECIA_EN_SET9) GPIO 122 Position */
#define ECIA_EN_SET9_GPIO122_Msk              (_UINT32_(0x1) << ECIA_EN_SET9_GPIO122_Pos)          /* (ECIA_EN_SET9) GPIO 122 Mask */
#define ECIA_EN_SET9_GPIO122(value)           (ECIA_EN_SET9_GPIO122_Msk & (_UINT32_(value) << ECIA_EN_SET9_GPIO122_Pos)) /* Assigment of value for GPIO122 in the ECIA_EN_SET9 register */
#define ECIA_EN_SET9_GPIO123_Pos              _UINT32_(19)                                         /* (ECIA_EN_SET9) GPIO 123 Position */
#define ECIA_EN_SET9_GPIO123_Msk              (_UINT32_(0x1) << ECIA_EN_SET9_GPIO123_Pos)          /* (ECIA_EN_SET9) GPIO 123 Mask */
#define ECIA_EN_SET9_GPIO123(value)           (ECIA_EN_SET9_GPIO123_Msk & (_UINT32_(value) << ECIA_EN_SET9_GPIO123_Pos)) /* Assigment of value for GPIO123 in the ECIA_EN_SET9 register */
#define ECIA_EN_SET9_GPIO124_Pos              _UINT32_(20)                                         /* (ECIA_EN_SET9) GPIO 124 Position */
#define ECIA_EN_SET9_GPIO124_Msk              (_UINT32_(0x1) << ECIA_EN_SET9_GPIO124_Pos)          /* (ECIA_EN_SET9) GPIO 124 Mask */
#define ECIA_EN_SET9_GPIO124(value)           (ECIA_EN_SET9_GPIO124_Msk & (_UINT32_(value) << ECIA_EN_SET9_GPIO124_Pos)) /* Assigment of value for GPIO124 in the ECIA_EN_SET9 register */
#define ECIA_EN_SET9_GPIO125_Pos              _UINT32_(21)                                         /* (ECIA_EN_SET9) GPIO 125 Position */
#define ECIA_EN_SET9_GPIO125_Msk              (_UINT32_(0x1) << ECIA_EN_SET9_GPIO125_Pos)          /* (ECIA_EN_SET9) GPIO 125 Mask */
#define ECIA_EN_SET9_GPIO125(value)           (ECIA_EN_SET9_GPIO125_Msk & (_UINT32_(value) << ECIA_EN_SET9_GPIO125_Pos)) /* Assigment of value for GPIO125 in the ECIA_EN_SET9 register */
#define ECIA_EN_SET9_GPIO126_Pos              _UINT32_(22)                                         /* (ECIA_EN_SET9) GPIO 126 Position */
#define ECIA_EN_SET9_GPIO126_Msk              (_UINT32_(0x1) << ECIA_EN_SET9_GPIO126_Pos)          /* (ECIA_EN_SET9) GPIO 126 Mask */
#define ECIA_EN_SET9_GPIO126(value)           (ECIA_EN_SET9_GPIO126_Msk & (_UINT32_(value) << ECIA_EN_SET9_GPIO126_Pos)) /* Assigment of value for GPIO126 in the ECIA_EN_SET9 register */
#define ECIA_EN_SET9_GPIO127_Pos              _UINT32_(23)                                         /* (ECIA_EN_SET9) GPIO 127 Position */
#define ECIA_EN_SET9_GPIO127_Msk              (_UINT32_(0x1) << ECIA_EN_SET9_GPIO127_Pos)          /* (ECIA_EN_SET9) GPIO 127 Mask */
#define ECIA_EN_SET9_GPIO127(value)           (ECIA_EN_SET9_GPIO127_Msk & (_UINT32_(value) << ECIA_EN_SET9_GPIO127_Pos)) /* Assigment of value for GPIO127 in the ECIA_EN_SET9 register */
#define ECIA_EN_SET9_GPIO130_Pos              _UINT32_(24)                                         /* (ECIA_EN_SET9) GPIO 130 Position */
#define ECIA_EN_SET9_GPIO130_Msk              (_UINT32_(0x1) << ECIA_EN_SET9_GPIO130_Pos)          /* (ECIA_EN_SET9) GPIO 130 Mask */
#define ECIA_EN_SET9_GPIO130(value)           (ECIA_EN_SET9_GPIO130_Msk & (_UINT32_(value) << ECIA_EN_SET9_GPIO130_Pos)) /* Assigment of value for GPIO130 in the ECIA_EN_SET9 register */
#define ECIA_EN_SET9_GPIO131_Pos              _UINT32_(25)                                         /* (ECIA_EN_SET9) GPIO 131 Position */
#define ECIA_EN_SET9_GPIO131_Msk              (_UINT32_(0x1) << ECIA_EN_SET9_GPIO131_Pos)          /* (ECIA_EN_SET9) GPIO 131 Mask */
#define ECIA_EN_SET9_GPIO131(value)           (ECIA_EN_SET9_GPIO131_Msk & (_UINT32_(value) << ECIA_EN_SET9_GPIO131_Pos)) /* Assigment of value for GPIO131 in the ECIA_EN_SET9 register */
#define ECIA_EN_SET9_GPIO132_Pos              _UINT32_(26)                                         /* (ECIA_EN_SET9) GPIO 132 Position */
#define ECIA_EN_SET9_GPIO132_Msk              (_UINT32_(0x1) << ECIA_EN_SET9_GPIO132_Pos)          /* (ECIA_EN_SET9) GPIO 132 Mask */
#define ECIA_EN_SET9_GPIO132(value)           (ECIA_EN_SET9_GPIO132_Msk & (_UINT32_(value) << ECIA_EN_SET9_GPIO132_Pos)) /* Assigment of value for GPIO132 in the ECIA_EN_SET9 register */
#define ECIA_EN_SET9_Msk                      _UINT32_(0x07FF0CF0)                                 /* (ECIA_EN_SET9) Register Mask  */

#define ECIA_EN_SET9_GPIO_Pos                 _UINT32_(4)                                          /* (ECIA_EN_SET9 Position) GPIO x32 */
#define ECIA_EN_SET9_GPIO_Msk                 (_UINT32_(0x1FFFF) << ECIA_EN_SET9_GPIO_Pos)         /* (ECIA_EN_SET9 Mask) GPIO */
#define ECIA_EN_SET9_GPIO(value)              (ECIA_EN_SET9_GPIO_Msk & (_UINT32_(value) << ECIA_EN_SET9_GPIO_Pos)) 

/* -------- ECIA_RESULT9 : (ECIA Offset: 0x1C) ( R/ 32) GIRQ9 RESULT -------- */
#define ECIA_RESULT9_RESETVALUE               _UINT32_(0x00)                                       /*  (ECIA_RESULT9) GIRQ9 RESULT  Reset Value */

#define ECIA_RESULT9_GPIO104_Pos              _UINT32_(4)                                          /* (ECIA_RESULT9) GPIO 104 Position */
#define ECIA_RESULT9_GPIO104_Msk              (_UINT32_(0x1) << ECIA_RESULT9_GPIO104_Pos)          /* (ECIA_RESULT9) GPIO 104 Mask */
#define ECIA_RESULT9_GPIO104(value)           (ECIA_RESULT9_GPIO104_Msk & (_UINT32_(value) << ECIA_RESULT9_GPIO104_Pos)) /* Assigment of value for GPIO104 in the ECIA_RESULT9 register */
#define ECIA_RESULT9_GPIO105_Pos              _UINT32_(5)                                          /* (ECIA_RESULT9) GPIO 105 Position */
#define ECIA_RESULT9_GPIO105_Msk              (_UINT32_(0x1) << ECIA_RESULT9_GPIO105_Pos)          /* (ECIA_RESULT9) GPIO 105 Mask */
#define ECIA_RESULT9_GPIO105(value)           (ECIA_RESULT9_GPIO105_Msk & (_UINT32_(value) << ECIA_RESULT9_GPIO105_Pos)) /* Assigment of value for GPIO105 in the ECIA_RESULT9 register */
#define ECIA_RESULT9_GPIO106_Pos              _UINT32_(6)                                          /* (ECIA_RESULT9) GPIO 106 Position */
#define ECIA_RESULT9_GPIO106_Msk              (_UINT32_(0x1) << ECIA_RESULT9_GPIO106_Pos)          /* (ECIA_RESULT9) GPIO 106 Mask */
#define ECIA_RESULT9_GPIO106(value)           (ECIA_RESULT9_GPIO106_Msk & (_UINT32_(value) << ECIA_RESULT9_GPIO106_Pos)) /* Assigment of value for GPIO106 in the ECIA_RESULT9 register */
#define ECIA_RESULT9_GPIO107_Pos              _UINT32_(7)                                          /* (ECIA_RESULT9) GPIO 107 Position */
#define ECIA_RESULT9_GPIO107_Msk              (_UINT32_(0x1) << ECIA_RESULT9_GPIO107_Pos)          /* (ECIA_RESULT9) GPIO 107 Mask */
#define ECIA_RESULT9_GPIO107(value)           (ECIA_RESULT9_GPIO107_Msk & (_UINT32_(value) << ECIA_RESULT9_GPIO107_Pos)) /* Assigment of value for GPIO107 in the ECIA_RESULT9 register */
#define ECIA_RESULT9_GPIO112_Pos              _UINT32_(10)                                         /* (ECIA_RESULT9) GPIO 112 Position */
#define ECIA_RESULT9_GPIO112_Msk              (_UINT32_(0x1) << ECIA_RESULT9_GPIO112_Pos)          /* (ECIA_RESULT9) GPIO 112 Mask */
#define ECIA_RESULT9_GPIO112(value)           (ECIA_RESULT9_GPIO112_Msk & (_UINT32_(value) << ECIA_RESULT9_GPIO112_Pos)) /* Assigment of value for GPIO112 in the ECIA_RESULT9 register */
#define ECIA_RESULT9_GPIO113_Pos              _UINT32_(11)                                         /* (ECIA_RESULT9) GPIO 113 Position */
#define ECIA_RESULT9_GPIO113_Msk              (_UINT32_(0x1) << ECIA_RESULT9_GPIO113_Pos)          /* (ECIA_RESULT9) GPIO 113 Mask */
#define ECIA_RESULT9_GPIO113(value)           (ECIA_RESULT9_GPIO113_Msk & (_UINT32_(value) << ECIA_RESULT9_GPIO113_Pos)) /* Assigment of value for GPIO113 in the ECIA_RESULT9 register */
#define ECIA_RESULT9_GPIO120_Pos              _UINT32_(16)                                         /* (ECIA_RESULT9) GPIO 120 Position */
#define ECIA_RESULT9_GPIO120_Msk              (_UINT32_(0x1) << ECIA_RESULT9_GPIO120_Pos)          /* (ECIA_RESULT9) GPIO 120 Mask */
#define ECIA_RESULT9_GPIO120(value)           (ECIA_RESULT9_GPIO120_Msk & (_UINT32_(value) << ECIA_RESULT9_GPIO120_Pos)) /* Assigment of value for GPIO120 in the ECIA_RESULT9 register */
#define ECIA_RESULT9_GPIO121_Pos              _UINT32_(17)                                         /* (ECIA_RESULT9) GPIO 121 Position */
#define ECIA_RESULT9_GPIO121_Msk              (_UINT32_(0x1) << ECIA_RESULT9_GPIO121_Pos)          /* (ECIA_RESULT9) GPIO 121 Mask */
#define ECIA_RESULT9_GPIO121(value)           (ECIA_RESULT9_GPIO121_Msk & (_UINT32_(value) << ECIA_RESULT9_GPIO121_Pos)) /* Assigment of value for GPIO121 in the ECIA_RESULT9 register */
#define ECIA_RESULT9_GPIO122_Pos              _UINT32_(18)                                         /* (ECIA_RESULT9) GPIO 122 Position */
#define ECIA_RESULT9_GPIO122_Msk              (_UINT32_(0x1) << ECIA_RESULT9_GPIO122_Pos)          /* (ECIA_RESULT9) GPIO 122 Mask */
#define ECIA_RESULT9_GPIO122(value)           (ECIA_RESULT9_GPIO122_Msk & (_UINT32_(value) << ECIA_RESULT9_GPIO122_Pos)) /* Assigment of value for GPIO122 in the ECIA_RESULT9 register */
#define ECIA_RESULT9_GPIO123_Pos              _UINT32_(19)                                         /* (ECIA_RESULT9) GPIO 123 Position */
#define ECIA_RESULT9_GPIO123_Msk              (_UINT32_(0x1) << ECIA_RESULT9_GPIO123_Pos)          /* (ECIA_RESULT9) GPIO 123 Mask */
#define ECIA_RESULT9_GPIO123(value)           (ECIA_RESULT9_GPIO123_Msk & (_UINT32_(value) << ECIA_RESULT9_GPIO123_Pos)) /* Assigment of value for GPIO123 in the ECIA_RESULT9 register */
#define ECIA_RESULT9_GPIO124_Pos              _UINT32_(20)                                         /* (ECIA_RESULT9) GPIO 124 Position */
#define ECIA_RESULT9_GPIO124_Msk              (_UINT32_(0x1) << ECIA_RESULT9_GPIO124_Pos)          /* (ECIA_RESULT9) GPIO 124 Mask */
#define ECIA_RESULT9_GPIO124(value)           (ECIA_RESULT9_GPIO124_Msk & (_UINT32_(value) << ECIA_RESULT9_GPIO124_Pos)) /* Assigment of value for GPIO124 in the ECIA_RESULT9 register */
#define ECIA_RESULT9_GPIO125_Pos              _UINT32_(21)                                         /* (ECIA_RESULT9) GPIO 125 Position */
#define ECIA_RESULT9_GPIO125_Msk              (_UINT32_(0x1) << ECIA_RESULT9_GPIO125_Pos)          /* (ECIA_RESULT9) GPIO 125 Mask */
#define ECIA_RESULT9_GPIO125(value)           (ECIA_RESULT9_GPIO125_Msk & (_UINT32_(value) << ECIA_RESULT9_GPIO125_Pos)) /* Assigment of value for GPIO125 in the ECIA_RESULT9 register */
#define ECIA_RESULT9_GPIO126_Pos              _UINT32_(22)                                         /* (ECIA_RESULT9) GPIO 126 Position */
#define ECIA_RESULT9_GPIO126_Msk              (_UINT32_(0x1) << ECIA_RESULT9_GPIO126_Pos)          /* (ECIA_RESULT9) GPIO 126 Mask */
#define ECIA_RESULT9_GPIO126(value)           (ECIA_RESULT9_GPIO126_Msk & (_UINT32_(value) << ECIA_RESULT9_GPIO126_Pos)) /* Assigment of value for GPIO126 in the ECIA_RESULT9 register */
#define ECIA_RESULT9_GPIO127_Pos              _UINT32_(23)                                         /* (ECIA_RESULT9) GPIO 127 Position */
#define ECIA_RESULT9_GPIO127_Msk              (_UINT32_(0x1) << ECIA_RESULT9_GPIO127_Pos)          /* (ECIA_RESULT9) GPIO 127 Mask */
#define ECIA_RESULT9_GPIO127(value)           (ECIA_RESULT9_GPIO127_Msk & (_UINT32_(value) << ECIA_RESULT9_GPIO127_Pos)) /* Assigment of value for GPIO127 in the ECIA_RESULT9 register */
#define ECIA_RESULT9_GPIO130_Pos              _UINT32_(24)                                         /* (ECIA_RESULT9) GPIO 130 Position */
#define ECIA_RESULT9_GPIO130_Msk              (_UINT32_(0x1) << ECIA_RESULT9_GPIO130_Pos)          /* (ECIA_RESULT9) GPIO 130 Mask */
#define ECIA_RESULT9_GPIO130(value)           (ECIA_RESULT9_GPIO130_Msk & (_UINT32_(value) << ECIA_RESULT9_GPIO130_Pos)) /* Assigment of value for GPIO130 in the ECIA_RESULT9 register */
#define ECIA_RESULT9_GPIO131_Pos              _UINT32_(25)                                         /* (ECIA_RESULT9) GPIO 131 Position */
#define ECIA_RESULT9_GPIO131_Msk              (_UINT32_(0x1) << ECIA_RESULT9_GPIO131_Pos)          /* (ECIA_RESULT9) GPIO 131 Mask */
#define ECIA_RESULT9_GPIO131(value)           (ECIA_RESULT9_GPIO131_Msk & (_UINT32_(value) << ECIA_RESULT9_GPIO131_Pos)) /* Assigment of value for GPIO131 in the ECIA_RESULT9 register */
#define ECIA_RESULT9_GPIO132_Pos              _UINT32_(26)                                         /* (ECIA_RESULT9) GPIO 132 Position */
#define ECIA_RESULT9_GPIO132_Msk              (_UINT32_(0x1) << ECIA_RESULT9_GPIO132_Pos)          /* (ECIA_RESULT9) GPIO 132 Mask */
#define ECIA_RESULT9_GPIO132(value)           (ECIA_RESULT9_GPIO132_Msk & (_UINT32_(value) << ECIA_RESULT9_GPIO132_Pos)) /* Assigment of value for GPIO132 in the ECIA_RESULT9 register */
#define ECIA_RESULT9_Msk                      _UINT32_(0x07FF0CF0)                                 /* (ECIA_RESULT9) Register Mask  */

#define ECIA_RESULT9_GPIO_Pos                 _UINT32_(4)                                          /* (ECIA_RESULT9 Position) GPIO x32 */
#define ECIA_RESULT9_GPIO_Msk                 (_UINT32_(0x1FFFF) << ECIA_RESULT9_GPIO_Pos)         /* (ECIA_RESULT9 Mask) GPIO */
#define ECIA_RESULT9_GPIO(value)              (ECIA_RESULT9_GPIO_Msk & (_UINT32_(value) << ECIA_RESULT9_GPIO_Pos)) 

/* -------- ECIA_EN_CLR9 : (ECIA Offset: 0x20) (R/W 32) GIRQ9 ENABLE CLEAR -------- */
#define ECIA_EN_CLR9_RESETVALUE               _UINT32_(0x00)                                       /*  (ECIA_EN_CLR9) GIRQ9 ENABLE CLEAR  Reset Value */

#define ECIA_EN_CLR9_GPIO104_Pos              _UINT32_(4)                                          /* (ECIA_EN_CLR9) GPIO 104 Position */
#define ECIA_EN_CLR9_GPIO104_Msk              (_UINT32_(0x1) << ECIA_EN_CLR9_GPIO104_Pos)          /* (ECIA_EN_CLR9) GPIO 104 Mask */
#define ECIA_EN_CLR9_GPIO104(value)           (ECIA_EN_CLR9_GPIO104_Msk & (_UINT32_(value) << ECIA_EN_CLR9_GPIO104_Pos)) /* Assigment of value for GPIO104 in the ECIA_EN_CLR9 register */
#define ECIA_EN_CLR9_GPIO105_Pos              _UINT32_(5)                                          /* (ECIA_EN_CLR9) GPIO 105 Position */
#define ECIA_EN_CLR9_GPIO105_Msk              (_UINT32_(0x1) << ECIA_EN_CLR9_GPIO105_Pos)          /* (ECIA_EN_CLR9) GPIO 105 Mask */
#define ECIA_EN_CLR9_GPIO105(value)           (ECIA_EN_CLR9_GPIO105_Msk & (_UINT32_(value) << ECIA_EN_CLR9_GPIO105_Pos)) /* Assigment of value for GPIO105 in the ECIA_EN_CLR9 register */
#define ECIA_EN_CLR9_GPIO106_Pos              _UINT32_(6)                                          /* (ECIA_EN_CLR9) GPIO 106 Position */
#define ECIA_EN_CLR9_GPIO106_Msk              (_UINT32_(0x1) << ECIA_EN_CLR9_GPIO106_Pos)          /* (ECIA_EN_CLR9) GPIO 106 Mask */
#define ECIA_EN_CLR9_GPIO106(value)           (ECIA_EN_CLR9_GPIO106_Msk & (_UINT32_(value) << ECIA_EN_CLR9_GPIO106_Pos)) /* Assigment of value for GPIO106 in the ECIA_EN_CLR9 register */
#define ECIA_EN_CLR9_GPIO107_Pos              _UINT32_(7)                                          /* (ECIA_EN_CLR9) GPIO 107 Position */
#define ECIA_EN_CLR9_GPIO107_Msk              (_UINT32_(0x1) << ECIA_EN_CLR9_GPIO107_Pos)          /* (ECIA_EN_CLR9) GPIO 107 Mask */
#define ECIA_EN_CLR9_GPIO107(value)           (ECIA_EN_CLR9_GPIO107_Msk & (_UINT32_(value) << ECIA_EN_CLR9_GPIO107_Pos)) /* Assigment of value for GPIO107 in the ECIA_EN_CLR9 register */
#define ECIA_EN_CLR9_GPIO112_Pos              _UINT32_(10)                                         /* (ECIA_EN_CLR9) GPIO 112 Position */
#define ECIA_EN_CLR9_GPIO112_Msk              (_UINT32_(0x1) << ECIA_EN_CLR9_GPIO112_Pos)          /* (ECIA_EN_CLR9) GPIO 112 Mask */
#define ECIA_EN_CLR9_GPIO112(value)           (ECIA_EN_CLR9_GPIO112_Msk & (_UINT32_(value) << ECIA_EN_CLR9_GPIO112_Pos)) /* Assigment of value for GPIO112 in the ECIA_EN_CLR9 register */
#define ECIA_EN_CLR9_GPIO113_Pos              _UINT32_(11)                                         /* (ECIA_EN_CLR9) GPIO 113 Position */
#define ECIA_EN_CLR9_GPIO113_Msk              (_UINT32_(0x1) << ECIA_EN_CLR9_GPIO113_Pos)          /* (ECIA_EN_CLR9) GPIO 113 Mask */
#define ECIA_EN_CLR9_GPIO113(value)           (ECIA_EN_CLR9_GPIO113_Msk & (_UINT32_(value) << ECIA_EN_CLR9_GPIO113_Pos)) /* Assigment of value for GPIO113 in the ECIA_EN_CLR9 register */
#define ECIA_EN_CLR9_GPIO120_Pos              _UINT32_(16)                                         /* (ECIA_EN_CLR9) GPIO 120 Position */
#define ECIA_EN_CLR9_GPIO120_Msk              (_UINT32_(0x1) << ECIA_EN_CLR9_GPIO120_Pos)          /* (ECIA_EN_CLR9) GPIO 120 Mask */
#define ECIA_EN_CLR9_GPIO120(value)           (ECIA_EN_CLR9_GPIO120_Msk & (_UINT32_(value) << ECIA_EN_CLR9_GPIO120_Pos)) /* Assigment of value for GPIO120 in the ECIA_EN_CLR9 register */
#define ECIA_EN_CLR9_GPIO121_Pos              _UINT32_(17)                                         /* (ECIA_EN_CLR9) GPIO 121 Position */
#define ECIA_EN_CLR9_GPIO121_Msk              (_UINT32_(0x1) << ECIA_EN_CLR9_GPIO121_Pos)          /* (ECIA_EN_CLR9) GPIO 121 Mask */
#define ECIA_EN_CLR9_GPIO121(value)           (ECIA_EN_CLR9_GPIO121_Msk & (_UINT32_(value) << ECIA_EN_CLR9_GPIO121_Pos)) /* Assigment of value for GPIO121 in the ECIA_EN_CLR9 register */
#define ECIA_EN_CLR9_GPIO122_Pos              _UINT32_(18)                                         /* (ECIA_EN_CLR9) GPIO 122 Position */
#define ECIA_EN_CLR9_GPIO122_Msk              (_UINT32_(0x1) << ECIA_EN_CLR9_GPIO122_Pos)          /* (ECIA_EN_CLR9) GPIO 122 Mask */
#define ECIA_EN_CLR9_GPIO122(value)           (ECIA_EN_CLR9_GPIO122_Msk & (_UINT32_(value) << ECIA_EN_CLR9_GPIO122_Pos)) /* Assigment of value for GPIO122 in the ECIA_EN_CLR9 register */
#define ECIA_EN_CLR9_GPIO123_Pos              _UINT32_(19)                                         /* (ECIA_EN_CLR9) GPIO 123 Position */
#define ECIA_EN_CLR9_GPIO123_Msk              (_UINT32_(0x1) << ECIA_EN_CLR9_GPIO123_Pos)          /* (ECIA_EN_CLR9) GPIO 123 Mask */
#define ECIA_EN_CLR9_GPIO123(value)           (ECIA_EN_CLR9_GPIO123_Msk & (_UINT32_(value) << ECIA_EN_CLR9_GPIO123_Pos)) /* Assigment of value for GPIO123 in the ECIA_EN_CLR9 register */
#define ECIA_EN_CLR9_GPIO124_Pos              _UINT32_(20)                                         /* (ECIA_EN_CLR9) GPIO 124 Position */
#define ECIA_EN_CLR9_GPIO124_Msk              (_UINT32_(0x1) << ECIA_EN_CLR9_GPIO124_Pos)          /* (ECIA_EN_CLR9) GPIO 124 Mask */
#define ECIA_EN_CLR9_GPIO124(value)           (ECIA_EN_CLR9_GPIO124_Msk & (_UINT32_(value) << ECIA_EN_CLR9_GPIO124_Pos)) /* Assigment of value for GPIO124 in the ECIA_EN_CLR9 register */
#define ECIA_EN_CLR9_GPIO125_Pos              _UINT32_(21)                                         /* (ECIA_EN_CLR9) GPIO 125 Position */
#define ECIA_EN_CLR9_GPIO125_Msk              (_UINT32_(0x1) << ECIA_EN_CLR9_GPIO125_Pos)          /* (ECIA_EN_CLR9) GPIO 125 Mask */
#define ECIA_EN_CLR9_GPIO125(value)           (ECIA_EN_CLR9_GPIO125_Msk & (_UINT32_(value) << ECIA_EN_CLR9_GPIO125_Pos)) /* Assigment of value for GPIO125 in the ECIA_EN_CLR9 register */
#define ECIA_EN_CLR9_GPIO126_Pos              _UINT32_(22)                                         /* (ECIA_EN_CLR9) GPIO 126 Position */
#define ECIA_EN_CLR9_GPIO126_Msk              (_UINT32_(0x1) << ECIA_EN_CLR9_GPIO126_Pos)          /* (ECIA_EN_CLR9) GPIO 126 Mask */
#define ECIA_EN_CLR9_GPIO126(value)           (ECIA_EN_CLR9_GPIO126_Msk & (_UINT32_(value) << ECIA_EN_CLR9_GPIO126_Pos)) /* Assigment of value for GPIO126 in the ECIA_EN_CLR9 register */
#define ECIA_EN_CLR9_GPIO127_Pos              _UINT32_(23)                                         /* (ECIA_EN_CLR9) GPIO 127 Position */
#define ECIA_EN_CLR9_GPIO127_Msk              (_UINT32_(0x1) << ECIA_EN_CLR9_GPIO127_Pos)          /* (ECIA_EN_CLR9) GPIO 127 Mask */
#define ECIA_EN_CLR9_GPIO127(value)           (ECIA_EN_CLR9_GPIO127_Msk & (_UINT32_(value) << ECIA_EN_CLR9_GPIO127_Pos)) /* Assigment of value for GPIO127 in the ECIA_EN_CLR9 register */
#define ECIA_EN_CLR9_GPIO130_Pos              _UINT32_(24)                                         /* (ECIA_EN_CLR9) GPIO 130 Position */
#define ECIA_EN_CLR9_GPIO130_Msk              (_UINT32_(0x1) << ECIA_EN_CLR9_GPIO130_Pos)          /* (ECIA_EN_CLR9) GPIO 130 Mask */
#define ECIA_EN_CLR9_GPIO130(value)           (ECIA_EN_CLR9_GPIO130_Msk & (_UINT32_(value) << ECIA_EN_CLR9_GPIO130_Pos)) /* Assigment of value for GPIO130 in the ECIA_EN_CLR9 register */
#define ECIA_EN_CLR9_GPIO131_Pos              _UINT32_(25)                                         /* (ECIA_EN_CLR9) GPIO 131 Position */
#define ECIA_EN_CLR9_GPIO131_Msk              (_UINT32_(0x1) << ECIA_EN_CLR9_GPIO131_Pos)          /* (ECIA_EN_CLR9) GPIO 131 Mask */
#define ECIA_EN_CLR9_GPIO131(value)           (ECIA_EN_CLR9_GPIO131_Msk & (_UINT32_(value) << ECIA_EN_CLR9_GPIO131_Pos)) /* Assigment of value for GPIO131 in the ECIA_EN_CLR9 register */
#define ECIA_EN_CLR9_GPIO132_Pos              _UINT32_(26)                                         /* (ECIA_EN_CLR9) GPIO 132 Position */
#define ECIA_EN_CLR9_GPIO132_Msk              (_UINT32_(0x1) << ECIA_EN_CLR9_GPIO132_Pos)          /* (ECIA_EN_CLR9) GPIO 132 Mask */
#define ECIA_EN_CLR9_GPIO132(value)           (ECIA_EN_CLR9_GPIO132_Msk & (_UINT32_(value) << ECIA_EN_CLR9_GPIO132_Pos)) /* Assigment of value for GPIO132 in the ECIA_EN_CLR9 register */
#define ECIA_EN_CLR9_Msk                      _UINT32_(0x07FF0CF0)                                 /* (ECIA_EN_CLR9) Register Mask  */

#define ECIA_EN_CLR9_GPIO_Pos                 _UINT32_(4)                                          /* (ECIA_EN_CLR9 Position) GPIO x32 */
#define ECIA_EN_CLR9_GPIO_Msk                 (_UINT32_(0x1FFFF) << ECIA_EN_CLR9_GPIO_Pos)         /* (ECIA_EN_CLR9 Mask) GPIO */
#define ECIA_EN_CLR9_GPIO(value)              (ECIA_EN_CLR9_GPIO_Msk & (_UINT32_(value) << ECIA_EN_CLR9_GPIO_Pos)) 

/* -------- ECIA_SRC10 : (ECIA Offset: 0x28) (R/W 32) GIRQ10 SOURCE -------- */
#define ECIA_SRC10_RESETVALUE                 _UINT32_(0x00)                                       /*  (ECIA_SRC10) GIRQ10 SOURCE  Reset Value */

#define ECIA_SRC10_GPIO045_Pos                _UINT32_(5)                                          /* (ECIA_SRC10) GPIO 045 Position */
#define ECIA_SRC10_GPIO045_Msk                (_UINT32_(0x1) << ECIA_SRC10_GPIO045_Pos)            /* (ECIA_SRC10) GPIO 045 Mask */
#define ECIA_SRC10_GPIO045(value)             (ECIA_SRC10_GPIO045_Msk & (_UINT32_(value) << ECIA_SRC10_GPIO045_Pos)) /* Assigment of value for GPIO045 in the ECIA_SRC10 register */
#define ECIA_SRC10_GPIO046_Pos                _UINT32_(6)                                          /* (ECIA_SRC10) GPIO 046 Position */
#define ECIA_SRC10_GPIO046_Msk                (_UINT32_(0x1) << ECIA_SRC10_GPIO046_Pos)            /* (ECIA_SRC10) GPIO 046 Mask */
#define ECIA_SRC10_GPIO046(value)             (ECIA_SRC10_GPIO046_Msk & (_UINT32_(value) << ECIA_SRC10_GPIO046_Pos)) /* Assigment of value for GPIO046 in the ECIA_SRC10 register */
#define ECIA_SRC10_GPIO047_Pos                _UINT32_(7)                                          /* (ECIA_SRC10) GPIO 047 Position */
#define ECIA_SRC10_GPIO047_Msk                (_UINT32_(0x1) << ECIA_SRC10_GPIO047_Pos)            /* (ECIA_SRC10) GPIO 047 Mask */
#define ECIA_SRC10_GPIO047(value)             (ECIA_SRC10_GPIO047_Msk & (_UINT32_(value) << ECIA_SRC10_GPIO047_Pos)) /* Assigment of value for GPIO047 in the ECIA_SRC10 register */
#define ECIA_SRC10_GPIO050_Pos                _UINT32_(8)                                          /* (ECIA_SRC10) GPIO 050 Position */
#define ECIA_SRC10_GPIO050_Msk                (_UINT32_(0x1) << ECIA_SRC10_GPIO050_Pos)            /* (ECIA_SRC10) GPIO 050 Mask */
#define ECIA_SRC10_GPIO050(value)             (ECIA_SRC10_GPIO050_Msk & (_UINT32_(value) << ECIA_SRC10_GPIO050_Pos)) /* Assigment of value for GPIO050 in the ECIA_SRC10 register */
#define ECIA_SRC10_GPIO053_Pos                _UINT32_(11)                                         /* (ECIA_SRC10) GPIO 053 Position */
#define ECIA_SRC10_GPIO053_Msk                (_UINT32_(0x1) << ECIA_SRC10_GPIO053_Pos)            /* (ECIA_SRC10) GPIO 053 Mask */
#define ECIA_SRC10_GPIO053(value)             (ECIA_SRC10_GPIO053_Msk & (_UINT32_(value) << ECIA_SRC10_GPIO053_Pos)) /* Assigment of value for GPIO053 in the ECIA_SRC10 register */
#define ECIA_SRC10_GPIO055_Pos                _UINT32_(13)                                         /* (ECIA_SRC10) GPIO 055 Position */
#define ECIA_SRC10_GPIO055_Msk                (_UINT32_(0x1) << ECIA_SRC10_GPIO055_Pos)            /* (ECIA_SRC10) GPIO 055 Mask */
#define ECIA_SRC10_GPIO055(value)             (ECIA_SRC10_GPIO055_Msk & (_UINT32_(value) << ECIA_SRC10_GPIO055_Pos)) /* Assigment of value for GPIO055 in the ECIA_SRC10 register */
#define ECIA_SRC10_GPIO056_Pos                _UINT32_(14)                                         /* (ECIA_SRC10) GPIO 056 Position */
#define ECIA_SRC10_GPIO056_Msk                (_UINT32_(0x1) << ECIA_SRC10_GPIO056_Pos)            /* (ECIA_SRC10) GPIO 056 Mask */
#define ECIA_SRC10_GPIO056(value)             (ECIA_SRC10_GPIO056_Msk & (_UINT32_(value) << ECIA_SRC10_GPIO056_Pos)) /* Assigment of value for GPIO056 in the ECIA_SRC10 register */
#define ECIA_SRC10_GPIO057_Pos                _UINT32_(15)                                         /* (ECIA_SRC10) GPIO 057 Position */
#define ECIA_SRC10_GPIO057_Msk                (_UINT32_(0x1) << ECIA_SRC10_GPIO057_Pos)            /* (ECIA_SRC10) GPIO 057 Mask */
#define ECIA_SRC10_GPIO057(value)             (ECIA_SRC10_GPIO057_Msk & (_UINT32_(value) << ECIA_SRC10_GPIO057_Pos)) /* Assigment of value for GPIO057 in the ECIA_SRC10 register */
#define ECIA_SRC10_GPIO063_Pos                _UINT32_(19)                                         /* (ECIA_SRC10) GPIO 060 Position */
#define ECIA_SRC10_GPIO063_Msk                (_UINT32_(0x1) << ECIA_SRC10_GPIO063_Pos)            /* (ECIA_SRC10) GPIO 060 Mask */
#define ECIA_SRC10_GPIO063(value)             (ECIA_SRC10_GPIO063_Msk & (_UINT32_(value) << ECIA_SRC10_GPIO063_Pos)) /* Assigment of value for GPIO063 in the ECIA_SRC10 register */
#define ECIA_SRC10_GPIO070_Pos                _UINT32_(24)                                         /* (ECIA_SRC10) GPIO 070 Position */
#define ECIA_SRC10_GPIO070_Msk                (_UINT32_(0x1) << ECIA_SRC10_GPIO070_Pos)            /* (ECIA_SRC10) GPIO 070 Mask */
#define ECIA_SRC10_GPIO070(value)             (ECIA_SRC10_GPIO070_Msk & (_UINT32_(value) << ECIA_SRC10_GPIO070_Pos)) /* Assigment of value for GPIO070 in the ECIA_SRC10 register */
#define ECIA_SRC10_GPIO071_Pos                _UINT32_(25)                                         /* (ECIA_SRC10) GPIO 071 Position */
#define ECIA_SRC10_GPIO071_Msk                (_UINT32_(0x1) << ECIA_SRC10_GPIO071_Pos)            /* (ECIA_SRC10) GPIO 071 Mask */
#define ECIA_SRC10_GPIO071(value)             (ECIA_SRC10_GPIO071_Msk & (_UINT32_(value) << ECIA_SRC10_GPIO071_Pos)) /* Assigment of value for GPIO071 in the ECIA_SRC10 register */
#define ECIA_SRC10_Msk                        _UINT32_(0x0308E9E0)                                 /* (ECIA_SRC10) Register Mask  */

#define ECIA_SRC10_GPIO_Pos                   _UINT32_(5)                                          /* (ECIA_SRC10 Position) GPIO x7x */
#define ECIA_SRC10_GPIO_Msk                   (_UINT32_(0x7FF) << ECIA_SRC10_GPIO_Pos)             /* (ECIA_SRC10 Mask) GPIO */
#define ECIA_SRC10_GPIO(value)                (ECIA_SRC10_GPIO_Msk & (_UINT32_(value) << ECIA_SRC10_GPIO_Pos)) 

/* -------- ECIA_EN_SET10 : (ECIA Offset: 0x2C) (R/W 32) GIRQ10 ENABLE SET -------- */
#define ECIA_EN_SET10_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_SET10) GIRQ10 ENABLE SET  Reset Value */

#define ECIA_EN_SET10_GPIO045_Pos             _UINT32_(5)                                          /* (ECIA_EN_SET10) GPIO 045 Position */
#define ECIA_EN_SET10_GPIO045_Msk             (_UINT32_(0x1) << ECIA_EN_SET10_GPIO045_Pos)         /* (ECIA_EN_SET10) GPIO 045 Mask */
#define ECIA_EN_SET10_GPIO045(value)          (ECIA_EN_SET10_GPIO045_Msk & (_UINT32_(value) << ECIA_EN_SET10_GPIO045_Pos)) /* Assigment of value for GPIO045 in the ECIA_EN_SET10 register */
#define ECIA_EN_SET10_GPIO046_Pos             _UINT32_(6)                                          /* (ECIA_EN_SET10) GPIO 046 Position */
#define ECIA_EN_SET10_GPIO046_Msk             (_UINT32_(0x1) << ECIA_EN_SET10_GPIO046_Pos)         /* (ECIA_EN_SET10) GPIO 046 Mask */
#define ECIA_EN_SET10_GPIO046(value)          (ECIA_EN_SET10_GPIO046_Msk & (_UINT32_(value) << ECIA_EN_SET10_GPIO046_Pos)) /* Assigment of value for GPIO046 in the ECIA_EN_SET10 register */
#define ECIA_EN_SET10_GPIO047_Pos             _UINT32_(7)                                          /* (ECIA_EN_SET10) GPIO 047 Position */
#define ECIA_EN_SET10_GPIO047_Msk             (_UINT32_(0x1) << ECIA_EN_SET10_GPIO047_Pos)         /* (ECIA_EN_SET10) GPIO 047 Mask */
#define ECIA_EN_SET10_GPIO047(value)          (ECIA_EN_SET10_GPIO047_Msk & (_UINT32_(value) << ECIA_EN_SET10_GPIO047_Pos)) /* Assigment of value for GPIO047 in the ECIA_EN_SET10 register */
#define ECIA_EN_SET10_GPIO050_Pos             _UINT32_(8)                                          /* (ECIA_EN_SET10) GPIO 050 Position */
#define ECIA_EN_SET10_GPIO050_Msk             (_UINT32_(0x1) << ECIA_EN_SET10_GPIO050_Pos)         /* (ECIA_EN_SET10) GPIO 050 Mask */
#define ECIA_EN_SET10_GPIO050(value)          (ECIA_EN_SET10_GPIO050_Msk & (_UINT32_(value) << ECIA_EN_SET10_GPIO050_Pos)) /* Assigment of value for GPIO050 in the ECIA_EN_SET10 register */
#define ECIA_EN_SET10_GPIO053_Pos             _UINT32_(11)                                         /* (ECIA_EN_SET10) GPIO 053 Position */
#define ECIA_EN_SET10_GPIO053_Msk             (_UINT32_(0x1) << ECIA_EN_SET10_GPIO053_Pos)         /* (ECIA_EN_SET10) GPIO 053 Mask */
#define ECIA_EN_SET10_GPIO053(value)          (ECIA_EN_SET10_GPIO053_Msk & (_UINT32_(value) << ECIA_EN_SET10_GPIO053_Pos)) /* Assigment of value for GPIO053 in the ECIA_EN_SET10 register */
#define ECIA_EN_SET10_GPIO055_Pos             _UINT32_(13)                                         /* (ECIA_EN_SET10) GPIO 055 Position */
#define ECIA_EN_SET10_GPIO055_Msk             (_UINT32_(0x1) << ECIA_EN_SET10_GPIO055_Pos)         /* (ECIA_EN_SET10) GPIO 055 Mask */
#define ECIA_EN_SET10_GPIO055(value)          (ECIA_EN_SET10_GPIO055_Msk & (_UINT32_(value) << ECIA_EN_SET10_GPIO055_Pos)) /* Assigment of value for GPIO055 in the ECIA_EN_SET10 register */
#define ECIA_EN_SET10_GPIO056_Pos             _UINT32_(14)                                         /* (ECIA_EN_SET10) GPIO 056 Position */
#define ECIA_EN_SET10_GPIO056_Msk             (_UINT32_(0x1) << ECIA_EN_SET10_GPIO056_Pos)         /* (ECIA_EN_SET10) GPIO 056 Mask */
#define ECIA_EN_SET10_GPIO056(value)          (ECIA_EN_SET10_GPIO056_Msk & (_UINT32_(value) << ECIA_EN_SET10_GPIO056_Pos)) /* Assigment of value for GPIO056 in the ECIA_EN_SET10 register */
#define ECIA_EN_SET10_GPIO057_Pos             _UINT32_(15)                                         /* (ECIA_EN_SET10) GPIO 057 Position */
#define ECIA_EN_SET10_GPIO057_Msk             (_UINT32_(0x1) << ECIA_EN_SET10_GPIO057_Pos)         /* (ECIA_EN_SET10) GPIO 057 Mask */
#define ECIA_EN_SET10_GPIO057(value)          (ECIA_EN_SET10_GPIO057_Msk & (_UINT32_(value) << ECIA_EN_SET10_GPIO057_Pos)) /* Assigment of value for GPIO057 in the ECIA_EN_SET10 register */
#define ECIA_EN_SET10_GPIO063_Pos             _UINT32_(19)                                         /* (ECIA_EN_SET10) GPIO 060 Position */
#define ECIA_EN_SET10_GPIO063_Msk             (_UINT32_(0x1) << ECIA_EN_SET10_GPIO063_Pos)         /* (ECIA_EN_SET10) GPIO 060 Mask */
#define ECIA_EN_SET10_GPIO063(value)          (ECIA_EN_SET10_GPIO063_Msk & (_UINT32_(value) << ECIA_EN_SET10_GPIO063_Pos)) /* Assigment of value for GPIO063 in the ECIA_EN_SET10 register */
#define ECIA_EN_SET10_GPIO070_Pos             _UINT32_(24)                                         /* (ECIA_EN_SET10) GPIO 070 Position */
#define ECIA_EN_SET10_GPIO070_Msk             (_UINT32_(0x1) << ECIA_EN_SET10_GPIO070_Pos)         /* (ECIA_EN_SET10) GPIO 070 Mask */
#define ECIA_EN_SET10_GPIO070(value)          (ECIA_EN_SET10_GPIO070_Msk & (_UINT32_(value) << ECIA_EN_SET10_GPIO070_Pos)) /* Assigment of value for GPIO070 in the ECIA_EN_SET10 register */
#define ECIA_EN_SET10_GPIO071_Pos             _UINT32_(25)                                         /* (ECIA_EN_SET10) GPIO 071 Position */
#define ECIA_EN_SET10_GPIO071_Msk             (_UINT32_(0x1) << ECIA_EN_SET10_GPIO071_Pos)         /* (ECIA_EN_SET10) GPIO 071 Mask */
#define ECIA_EN_SET10_GPIO071(value)          (ECIA_EN_SET10_GPIO071_Msk & (_UINT32_(value) << ECIA_EN_SET10_GPIO071_Pos)) /* Assigment of value for GPIO071 in the ECIA_EN_SET10 register */
#define ECIA_EN_SET10_Msk                     _UINT32_(0x0308E9E0)                                 /* (ECIA_EN_SET10) Register Mask  */

#define ECIA_EN_SET10_GPIO_Pos                _UINT32_(5)                                          /* (ECIA_EN_SET10 Position) GPIO x7x */
#define ECIA_EN_SET10_GPIO_Msk                (_UINT32_(0x7FF) << ECIA_EN_SET10_GPIO_Pos)          /* (ECIA_EN_SET10 Mask) GPIO */
#define ECIA_EN_SET10_GPIO(value)             (ECIA_EN_SET10_GPIO_Msk & (_UINT32_(value) << ECIA_EN_SET10_GPIO_Pos)) 

/* -------- ECIA_RESULT10 : (ECIA Offset: 0x30) ( R/ 32) GIRQ10 RESULT -------- */
#define ECIA_RESULT10_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_RESULT10) GIRQ10 RESULT  Reset Value */

#define ECIA_RESULT10_GPIO045_Pos             _UINT32_(5)                                          /* (ECIA_RESULT10) GPIO 045 Position */
#define ECIA_RESULT10_GPIO045_Msk             (_UINT32_(0x1) << ECIA_RESULT10_GPIO045_Pos)         /* (ECIA_RESULT10) GPIO 045 Mask */
#define ECIA_RESULT10_GPIO045(value)          (ECIA_RESULT10_GPIO045_Msk & (_UINT32_(value) << ECIA_RESULT10_GPIO045_Pos)) /* Assigment of value for GPIO045 in the ECIA_RESULT10 register */
#define ECIA_RESULT10_GPIO046_Pos             _UINT32_(6)                                          /* (ECIA_RESULT10) GPIO 046 Position */
#define ECIA_RESULT10_GPIO046_Msk             (_UINT32_(0x1) << ECIA_RESULT10_GPIO046_Pos)         /* (ECIA_RESULT10) GPIO 046 Mask */
#define ECIA_RESULT10_GPIO046(value)          (ECIA_RESULT10_GPIO046_Msk & (_UINT32_(value) << ECIA_RESULT10_GPIO046_Pos)) /* Assigment of value for GPIO046 in the ECIA_RESULT10 register */
#define ECIA_RESULT10_GPIO047_Pos             _UINT32_(7)                                          /* (ECIA_RESULT10) GPIO 047 Position */
#define ECIA_RESULT10_GPIO047_Msk             (_UINT32_(0x1) << ECIA_RESULT10_GPIO047_Pos)         /* (ECIA_RESULT10) GPIO 047 Mask */
#define ECIA_RESULT10_GPIO047(value)          (ECIA_RESULT10_GPIO047_Msk & (_UINT32_(value) << ECIA_RESULT10_GPIO047_Pos)) /* Assigment of value for GPIO047 in the ECIA_RESULT10 register */
#define ECIA_RESULT10_GPIO050_Pos             _UINT32_(8)                                          /* (ECIA_RESULT10) GPIO 050 Position */
#define ECIA_RESULT10_GPIO050_Msk             (_UINT32_(0x1) << ECIA_RESULT10_GPIO050_Pos)         /* (ECIA_RESULT10) GPIO 050 Mask */
#define ECIA_RESULT10_GPIO050(value)          (ECIA_RESULT10_GPIO050_Msk & (_UINT32_(value) << ECIA_RESULT10_GPIO050_Pos)) /* Assigment of value for GPIO050 in the ECIA_RESULT10 register */
#define ECIA_RESULT10_GPIO053_Pos             _UINT32_(11)                                         /* (ECIA_RESULT10) GPIO 053 Position */
#define ECIA_RESULT10_GPIO053_Msk             (_UINT32_(0x1) << ECIA_RESULT10_GPIO053_Pos)         /* (ECIA_RESULT10) GPIO 053 Mask */
#define ECIA_RESULT10_GPIO053(value)          (ECIA_RESULT10_GPIO053_Msk & (_UINT32_(value) << ECIA_RESULT10_GPIO053_Pos)) /* Assigment of value for GPIO053 in the ECIA_RESULT10 register */
#define ECIA_RESULT10_GPIO055_Pos             _UINT32_(13)                                         /* (ECIA_RESULT10) GPIO 055 Position */
#define ECIA_RESULT10_GPIO055_Msk             (_UINT32_(0x1) << ECIA_RESULT10_GPIO055_Pos)         /* (ECIA_RESULT10) GPIO 055 Mask */
#define ECIA_RESULT10_GPIO055(value)          (ECIA_RESULT10_GPIO055_Msk & (_UINT32_(value) << ECIA_RESULT10_GPIO055_Pos)) /* Assigment of value for GPIO055 in the ECIA_RESULT10 register */
#define ECIA_RESULT10_GPIO056_Pos             _UINT32_(14)                                         /* (ECIA_RESULT10) GPIO 056 Position */
#define ECIA_RESULT10_GPIO056_Msk             (_UINT32_(0x1) << ECIA_RESULT10_GPIO056_Pos)         /* (ECIA_RESULT10) GPIO 056 Mask */
#define ECIA_RESULT10_GPIO056(value)          (ECIA_RESULT10_GPIO056_Msk & (_UINT32_(value) << ECIA_RESULT10_GPIO056_Pos)) /* Assigment of value for GPIO056 in the ECIA_RESULT10 register */
#define ECIA_RESULT10_GPIO057_Pos             _UINT32_(15)                                         /* (ECIA_RESULT10) GPIO 057 Position */
#define ECIA_RESULT10_GPIO057_Msk             (_UINT32_(0x1) << ECIA_RESULT10_GPIO057_Pos)         /* (ECIA_RESULT10) GPIO 057 Mask */
#define ECIA_RESULT10_GPIO057(value)          (ECIA_RESULT10_GPIO057_Msk & (_UINT32_(value) << ECIA_RESULT10_GPIO057_Pos)) /* Assigment of value for GPIO057 in the ECIA_RESULT10 register */
#define ECIA_RESULT10_GPIO063_Pos             _UINT32_(19)                                         /* (ECIA_RESULT10) GPIO 060 Position */
#define ECIA_RESULT10_GPIO063_Msk             (_UINT32_(0x1) << ECIA_RESULT10_GPIO063_Pos)         /* (ECIA_RESULT10) GPIO 060 Mask */
#define ECIA_RESULT10_GPIO063(value)          (ECIA_RESULT10_GPIO063_Msk & (_UINT32_(value) << ECIA_RESULT10_GPIO063_Pos)) /* Assigment of value for GPIO063 in the ECIA_RESULT10 register */
#define ECIA_RESULT10_GPIO070_Pos             _UINT32_(24)                                         /* (ECIA_RESULT10) GPIO 070 Position */
#define ECIA_RESULT10_GPIO070_Msk             (_UINT32_(0x1) << ECIA_RESULT10_GPIO070_Pos)         /* (ECIA_RESULT10) GPIO 070 Mask */
#define ECIA_RESULT10_GPIO070(value)          (ECIA_RESULT10_GPIO070_Msk & (_UINT32_(value) << ECIA_RESULT10_GPIO070_Pos)) /* Assigment of value for GPIO070 in the ECIA_RESULT10 register */
#define ECIA_RESULT10_GPIO071_Pos             _UINT32_(25)                                         /* (ECIA_RESULT10) GPIO 071 Position */
#define ECIA_RESULT10_GPIO071_Msk             (_UINT32_(0x1) << ECIA_RESULT10_GPIO071_Pos)         /* (ECIA_RESULT10) GPIO 071 Mask */
#define ECIA_RESULT10_GPIO071(value)          (ECIA_RESULT10_GPIO071_Msk & (_UINT32_(value) << ECIA_RESULT10_GPIO071_Pos)) /* Assigment of value for GPIO071 in the ECIA_RESULT10 register */
#define ECIA_RESULT10_Msk                     _UINT32_(0x0308E9E0)                                 /* (ECIA_RESULT10) Register Mask  */

#define ECIA_RESULT10_GPIO_Pos                _UINT32_(5)                                          /* (ECIA_RESULT10 Position) GPIO x7x */
#define ECIA_RESULT10_GPIO_Msk                (_UINT32_(0x7FF) << ECIA_RESULT10_GPIO_Pos)          /* (ECIA_RESULT10 Mask) GPIO */
#define ECIA_RESULT10_GPIO(value)             (ECIA_RESULT10_GPIO_Msk & (_UINT32_(value) << ECIA_RESULT10_GPIO_Pos)) 

/* -------- ECIA_EN_CLR10 : (ECIA Offset: 0x34) (R/W 32) GIRQ10 ENABLE CLEAR -------- */
#define ECIA_EN_CLR10_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_CLR10) GIRQ10 ENABLE CLEAR  Reset Value */

#define ECIA_EN_CLR10_GPIO045_Pos             _UINT32_(5)                                          /* (ECIA_EN_CLR10) GPIO 045 Position */
#define ECIA_EN_CLR10_GPIO045_Msk             (_UINT32_(0x1) << ECIA_EN_CLR10_GPIO045_Pos)         /* (ECIA_EN_CLR10) GPIO 045 Mask */
#define ECIA_EN_CLR10_GPIO045(value)          (ECIA_EN_CLR10_GPIO045_Msk & (_UINT32_(value) << ECIA_EN_CLR10_GPIO045_Pos)) /* Assigment of value for GPIO045 in the ECIA_EN_CLR10 register */
#define ECIA_EN_CLR10_GPIO046_Pos             _UINT32_(6)                                          /* (ECIA_EN_CLR10) GPIO 046 Position */
#define ECIA_EN_CLR10_GPIO046_Msk             (_UINT32_(0x1) << ECIA_EN_CLR10_GPIO046_Pos)         /* (ECIA_EN_CLR10) GPIO 046 Mask */
#define ECIA_EN_CLR10_GPIO046(value)          (ECIA_EN_CLR10_GPIO046_Msk & (_UINT32_(value) << ECIA_EN_CLR10_GPIO046_Pos)) /* Assigment of value for GPIO046 in the ECIA_EN_CLR10 register */
#define ECIA_EN_CLR10_GPIO047_Pos             _UINT32_(7)                                          /* (ECIA_EN_CLR10) GPIO 047 Position */
#define ECIA_EN_CLR10_GPIO047_Msk             (_UINT32_(0x1) << ECIA_EN_CLR10_GPIO047_Pos)         /* (ECIA_EN_CLR10) GPIO 047 Mask */
#define ECIA_EN_CLR10_GPIO047(value)          (ECIA_EN_CLR10_GPIO047_Msk & (_UINT32_(value) << ECIA_EN_CLR10_GPIO047_Pos)) /* Assigment of value for GPIO047 in the ECIA_EN_CLR10 register */
#define ECIA_EN_CLR10_GPIO050_Pos             _UINT32_(8)                                          /* (ECIA_EN_CLR10) GPIO 050 Position */
#define ECIA_EN_CLR10_GPIO050_Msk             (_UINT32_(0x1) << ECIA_EN_CLR10_GPIO050_Pos)         /* (ECIA_EN_CLR10) GPIO 050 Mask */
#define ECIA_EN_CLR10_GPIO050(value)          (ECIA_EN_CLR10_GPIO050_Msk & (_UINT32_(value) << ECIA_EN_CLR10_GPIO050_Pos)) /* Assigment of value for GPIO050 in the ECIA_EN_CLR10 register */
#define ECIA_EN_CLR10_GPIO053_Pos             _UINT32_(11)                                         /* (ECIA_EN_CLR10) GPIO 053 Position */
#define ECIA_EN_CLR10_GPIO053_Msk             (_UINT32_(0x1) << ECIA_EN_CLR10_GPIO053_Pos)         /* (ECIA_EN_CLR10) GPIO 053 Mask */
#define ECIA_EN_CLR10_GPIO053(value)          (ECIA_EN_CLR10_GPIO053_Msk & (_UINT32_(value) << ECIA_EN_CLR10_GPIO053_Pos)) /* Assigment of value for GPIO053 in the ECIA_EN_CLR10 register */
#define ECIA_EN_CLR10_GPIO055_Pos             _UINT32_(13)                                         /* (ECIA_EN_CLR10) GPIO 055 Position */
#define ECIA_EN_CLR10_GPIO055_Msk             (_UINT32_(0x1) << ECIA_EN_CLR10_GPIO055_Pos)         /* (ECIA_EN_CLR10) GPIO 055 Mask */
#define ECIA_EN_CLR10_GPIO055(value)          (ECIA_EN_CLR10_GPIO055_Msk & (_UINT32_(value) << ECIA_EN_CLR10_GPIO055_Pos)) /* Assigment of value for GPIO055 in the ECIA_EN_CLR10 register */
#define ECIA_EN_CLR10_GPIO056_Pos             _UINT32_(14)                                         /* (ECIA_EN_CLR10) GPIO 056 Position */
#define ECIA_EN_CLR10_GPIO056_Msk             (_UINT32_(0x1) << ECIA_EN_CLR10_GPIO056_Pos)         /* (ECIA_EN_CLR10) GPIO 056 Mask */
#define ECIA_EN_CLR10_GPIO056(value)          (ECIA_EN_CLR10_GPIO056_Msk & (_UINT32_(value) << ECIA_EN_CLR10_GPIO056_Pos)) /* Assigment of value for GPIO056 in the ECIA_EN_CLR10 register */
#define ECIA_EN_CLR10_GPIO057_Pos             _UINT32_(15)                                         /* (ECIA_EN_CLR10) GPIO 057 Position */
#define ECIA_EN_CLR10_GPIO057_Msk             (_UINT32_(0x1) << ECIA_EN_CLR10_GPIO057_Pos)         /* (ECIA_EN_CLR10) GPIO 057 Mask */
#define ECIA_EN_CLR10_GPIO057(value)          (ECIA_EN_CLR10_GPIO057_Msk & (_UINT32_(value) << ECIA_EN_CLR10_GPIO057_Pos)) /* Assigment of value for GPIO057 in the ECIA_EN_CLR10 register */
#define ECIA_EN_CLR10_GPIO063_Pos             _UINT32_(19)                                         /* (ECIA_EN_CLR10) GPIO 060 Position */
#define ECIA_EN_CLR10_GPIO063_Msk             (_UINT32_(0x1) << ECIA_EN_CLR10_GPIO063_Pos)         /* (ECIA_EN_CLR10) GPIO 060 Mask */
#define ECIA_EN_CLR10_GPIO063(value)          (ECIA_EN_CLR10_GPIO063_Msk & (_UINT32_(value) << ECIA_EN_CLR10_GPIO063_Pos)) /* Assigment of value for GPIO063 in the ECIA_EN_CLR10 register */
#define ECIA_EN_CLR10_GPIO070_Pos             _UINT32_(24)                                         /* (ECIA_EN_CLR10) GPIO 070 Position */
#define ECIA_EN_CLR10_GPIO070_Msk             (_UINT32_(0x1) << ECIA_EN_CLR10_GPIO070_Pos)         /* (ECIA_EN_CLR10) GPIO 070 Mask */
#define ECIA_EN_CLR10_GPIO070(value)          (ECIA_EN_CLR10_GPIO070_Msk & (_UINT32_(value) << ECIA_EN_CLR10_GPIO070_Pos)) /* Assigment of value for GPIO070 in the ECIA_EN_CLR10 register */
#define ECIA_EN_CLR10_GPIO071_Pos             _UINT32_(25)                                         /* (ECIA_EN_CLR10) GPIO 071 Position */
#define ECIA_EN_CLR10_GPIO071_Msk             (_UINT32_(0x1) << ECIA_EN_CLR10_GPIO071_Pos)         /* (ECIA_EN_CLR10) GPIO 071 Mask */
#define ECIA_EN_CLR10_GPIO071(value)          (ECIA_EN_CLR10_GPIO071_Msk & (_UINT32_(value) << ECIA_EN_CLR10_GPIO071_Pos)) /* Assigment of value for GPIO071 in the ECIA_EN_CLR10 register */
#define ECIA_EN_CLR10_Msk                     _UINT32_(0x0308E9E0)                                 /* (ECIA_EN_CLR10) Register Mask  */

#define ECIA_EN_CLR10_GPIO_Pos                _UINT32_(5)                                          /* (ECIA_EN_CLR10 Position) GPIO x7x */
#define ECIA_EN_CLR10_GPIO_Msk                (_UINT32_(0x7FF) << ECIA_EN_CLR10_GPIO_Pos)          /* (ECIA_EN_CLR10 Mask) GPIO */
#define ECIA_EN_CLR10_GPIO(value)             (ECIA_EN_CLR10_GPIO_Msk & (_UINT32_(value) << ECIA_EN_CLR10_GPIO_Pos)) 

/* -------- ECIA_SRC11 : (ECIA Offset: 0x3C) (R/W 32) GIRQ11 SOURCE -------- */
#define ECIA_SRC11_RESETVALUE                 _UINT32_(0x00)                                       /*  (ECIA_SRC11) GIRQ11 SOURCE  Reset Value */

#define ECIA_SRC11_GPIO000_Pos                _UINT32_(0)                                          /* (ECIA_SRC11) GPIO 000 Position */
#define ECIA_SRC11_GPIO000_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO000_Pos)            /* (ECIA_SRC11) GPIO 000 Mask */
#define ECIA_SRC11_GPIO000(value)             (ECIA_SRC11_GPIO000_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO000_Pos)) /* Assigment of value for GPIO000 in the ECIA_SRC11 register */
#define ECIA_SRC11_GPIO002_Pos                _UINT32_(2)                                          /* (ECIA_SRC11) GPIO 002 Position */
#define ECIA_SRC11_GPIO002_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO002_Pos)            /* (ECIA_SRC11) GPIO 002 Mask */
#define ECIA_SRC11_GPIO002(value)             (ECIA_SRC11_GPIO002_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO002_Pos)) /* Assigment of value for GPIO002 in the ECIA_SRC11 register */
#define ECIA_SRC11_GPIO003_Pos                _UINT32_(3)                                          /* (ECIA_SRC11) GPIO 003 Position */
#define ECIA_SRC11_GPIO003_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO003_Pos)            /* (ECIA_SRC11) GPIO 003 Mask */
#define ECIA_SRC11_GPIO003(value)             (ECIA_SRC11_GPIO003_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO003_Pos)) /* Assigment of value for GPIO003 in the ECIA_SRC11 register */
#define ECIA_SRC11_GPIO004_Pos                _UINT32_(4)                                          /* (ECIA_SRC11) GPIO 004 Position */
#define ECIA_SRC11_GPIO004_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO004_Pos)            /* (ECIA_SRC11) GPIO 004 Mask */
#define ECIA_SRC11_GPIO004(value)             (ECIA_SRC11_GPIO004_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO004_Pos)) /* Assigment of value for GPIO004 in the ECIA_SRC11 register */
#define ECIA_SRC11_GPIO012_Pos                _UINT32_(10)                                         /* (ECIA_SRC11) GPIO 012 Position */
#define ECIA_SRC11_GPIO012_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO012_Pos)            /* (ECIA_SRC11) GPIO 012 Mask */
#define ECIA_SRC11_GPIO012(value)             (ECIA_SRC11_GPIO012_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO012_Pos)) /* Assigment of value for GPIO012 in the ECIA_SRC11 register */
#define ECIA_SRC11_GPIO013_Pos                _UINT32_(11)                                         /* (ECIA_SRC11) GPIO 013 Position */
#define ECIA_SRC11_GPIO013_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO013_Pos)            /* (ECIA_SRC11) GPIO 013 Mask */
#define ECIA_SRC11_GPIO013(value)             (ECIA_SRC11_GPIO013_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO013_Pos)) /* Assigment of value for GPIO013 in the ECIA_SRC11 register */
#define ECIA_SRC11_GPIO015_Pos                _UINT32_(13)                                         /* (ECIA_SRC11) GPIO 015 Position */
#define ECIA_SRC11_GPIO015_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO015_Pos)            /* (ECIA_SRC11) GPIO 015 Mask */
#define ECIA_SRC11_GPIO015(value)             (ECIA_SRC11_GPIO015_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO015_Pos)) /* Assigment of value for GPIO015 in the ECIA_SRC11 register */
#define ECIA_SRC11_GPIO016_Pos                _UINT32_(14)                                         /* (ECIA_SRC11) GPIO 016 Position */
#define ECIA_SRC11_GPIO016_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO016_Pos)            /* (ECIA_SRC11) GPIO 016 Mask */
#define ECIA_SRC11_GPIO016(value)             (ECIA_SRC11_GPIO016_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO016_Pos)) /* Assigment of value for GPIO016 in the ECIA_SRC11 register */
#define ECIA_SRC11_GPIO020_Pos                _UINT32_(16)                                         /* (ECIA_SRC11) GPIO 020 Position */
#define ECIA_SRC11_GPIO020_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO020_Pos)            /* (ECIA_SRC11) GPIO 020 Mask */
#define ECIA_SRC11_GPIO020(value)             (ECIA_SRC11_GPIO020_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO020_Pos)) /* Assigment of value for GPIO020 in the ECIA_SRC11 register */
#define ECIA_SRC11_GPIO021_Pos                _UINT32_(17)                                         /* (ECIA_SRC11) GPIO 021 Position */
#define ECIA_SRC11_GPIO021_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO021_Pos)            /* (ECIA_SRC11) GPIO 021 Mask */
#define ECIA_SRC11_GPIO021(value)             (ECIA_SRC11_GPIO021_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO021_Pos)) /* Assigment of value for GPIO021 in the ECIA_SRC11 register */
#define ECIA_SRC11_GPIO022_Pos                _UINT32_(18)                                         /* (ECIA_SRC11) GPIO 022 Position */
#define ECIA_SRC11_GPIO022_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO022_Pos)            /* (ECIA_SRC11) GPIO 022 Mask */
#define ECIA_SRC11_GPIO022(value)             (ECIA_SRC11_GPIO022_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO022_Pos)) /* Assigment of value for GPIO022 in the ECIA_SRC11 register */
#define ECIA_SRC11_GPIO023_Pos                _UINT32_(19)                                         /* (ECIA_SRC11) GPIO 023 Position */
#define ECIA_SRC11_GPIO023_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO023_Pos)            /* (ECIA_SRC11) GPIO 023 Mask */
#define ECIA_SRC11_GPIO023(value)             (ECIA_SRC11_GPIO023_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO023_Pos)) /* Assigment of value for GPIO023 in the ECIA_SRC11 register */
#define ECIA_SRC11_GPIO024_Pos                _UINT32_(20)                                         /* (ECIA_SRC11) GPIO 024 Position */
#define ECIA_SRC11_GPIO024_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO024_Pos)            /* (ECIA_SRC11) GPIO 024 Mask */
#define ECIA_SRC11_GPIO024(value)             (ECIA_SRC11_GPIO024_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO024_Pos)) /* Assigment of value for GPIO024 in the ECIA_SRC11 register */
#define ECIA_SRC11_GPIO026_Pos                _UINT32_(22)                                         /* (ECIA_SRC11) GPIO 026 Position */
#define ECIA_SRC11_GPIO026_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO026_Pos)            /* (ECIA_SRC11) GPIO 026 Mask */
#define ECIA_SRC11_GPIO026(value)             (ECIA_SRC11_GPIO026_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO026_Pos)) /* Assigment of value for GPIO026 in the ECIA_SRC11 register */
#define ECIA_SRC11_GPIO027_Pos                _UINT32_(23)                                         /* (ECIA_SRC11) GPIO 027 Position */
#define ECIA_SRC11_GPIO027_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO027_Pos)            /* (ECIA_SRC11) GPIO 027 Mask */
#define ECIA_SRC11_GPIO027(value)             (ECIA_SRC11_GPIO027_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO027_Pos)) /* Assigment of value for GPIO027 in the ECIA_SRC11 register */
#define ECIA_SRC11_GPIO030_Pos                _UINT32_(24)                                         /* (ECIA_SRC11) GPIO 030 Position */
#define ECIA_SRC11_GPIO030_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO030_Pos)            /* (ECIA_SRC11) GPIO 030 Mask */
#define ECIA_SRC11_GPIO030(value)             (ECIA_SRC11_GPIO030_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO030_Pos)) /* Assigment of value for GPIO030 in the ECIA_SRC11 register */
#define ECIA_SRC11_GPIO031_Pos                _UINT32_(25)                                         /* (ECIA_SRC11) GPIO 031 Position */
#define ECIA_SRC11_GPIO031_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO031_Pos)            /* (ECIA_SRC11) GPIO 031 Mask */
#define ECIA_SRC11_GPIO031(value)             (ECIA_SRC11_GPIO031_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO031_Pos)) /* Assigment of value for GPIO031 in the ECIA_SRC11 register */
#define ECIA_SRC11_GPIO032_Pos                _UINT32_(26)                                         /* (ECIA_SRC11) GPIO 032 Position */
#define ECIA_SRC11_GPIO032_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO032_Pos)            /* (ECIA_SRC11) GPIO 032 Mask */
#define ECIA_SRC11_GPIO032(value)             (ECIA_SRC11_GPIO032_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO032_Pos)) /* Assigment of value for GPIO032 in the ECIA_SRC11 register */
#define ECIA_SRC11_GPIO033_Pos                _UINT32_(27)                                         /* (ECIA_SRC11) GPIO 033 Position */
#define ECIA_SRC11_GPIO033_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO033_Pos)            /* (ECIA_SRC11) GPIO 033 Mask */
#define ECIA_SRC11_GPIO033(value)             (ECIA_SRC11_GPIO033_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO033_Pos)) /* Assigment of value for GPIO033 in the ECIA_SRC11 register */
#define ECIA_SRC11_GPIO034_Pos                _UINT32_(28)                                         /* (ECIA_SRC11) GPIO 034 Position */
#define ECIA_SRC11_GPIO034_Msk                (_UINT32_(0x1) << ECIA_SRC11_GPIO034_Pos)            /* (ECIA_SRC11) GPIO 034 Mask */
#define ECIA_SRC11_GPIO034(value)             (ECIA_SRC11_GPIO034_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO034_Pos)) /* Assigment of value for GPIO034 in the ECIA_SRC11 register */
#define ECIA_SRC11_Msk                        _UINT32_(0x1FDF6C1D)                                 /* (ECIA_SRC11) Register Mask  */

#define ECIA_SRC11_GPIO_Pos                   _UINT32_(0)                                          /* (ECIA_SRC11 Position) GPIO x34 */
#define ECIA_SRC11_GPIO_Msk                   (_UINT32_(0xFFFFF) << ECIA_SRC11_GPIO_Pos)           /* (ECIA_SRC11 Mask) GPIO */
#define ECIA_SRC11_GPIO(value)                (ECIA_SRC11_GPIO_Msk & (_UINT32_(value) << ECIA_SRC11_GPIO_Pos)) 

/* -------- ECIA_EN_SET11 : (ECIA Offset: 0x40) (R/W 32) GIRQ11 ENABLE SET -------- */
#define ECIA_EN_SET11_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_SET11) GIRQ11 ENABLE SET  Reset Value */

#define ECIA_EN_SET11_GPIO000_Pos             _UINT32_(0)                                          /* (ECIA_EN_SET11) GPIO 000 Position */
#define ECIA_EN_SET11_GPIO000_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO000_Pos)         /* (ECIA_EN_SET11) GPIO 000 Mask */
#define ECIA_EN_SET11_GPIO000(value)          (ECIA_EN_SET11_GPIO000_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO000_Pos)) /* Assigment of value for GPIO000 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_GPIO002_Pos             _UINT32_(2)                                          /* (ECIA_EN_SET11) GPIO 002 Position */
#define ECIA_EN_SET11_GPIO002_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO002_Pos)         /* (ECIA_EN_SET11) GPIO 002 Mask */
#define ECIA_EN_SET11_GPIO002(value)          (ECIA_EN_SET11_GPIO002_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO002_Pos)) /* Assigment of value for GPIO002 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_GPIO003_Pos             _UINT32_(3)                                          /* (ECIA_EN_SET11) GPIO 003 Position */
#define ECIA_EN_SET11_GPIO003_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO003_Pos)         /* (ECIA_EN_SET11) GPIO 003 Mask */
#define ECIA_EN_SET11_GPIO003(value)          (ECIA_EN_SET11_GPIO003_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO003_Pos)) /* Assigment of value for GPIO003 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_GPIO004_Pos             _UINT32_(4)                                          /* (ECIA_EN_SET11) GPIO 004 Position */
#define ECIA_EN_SET11_GPIO004_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO004_Pos)         /* (ECIA_EN_SET11) GPIO 004 Mask */
#define ECIA_EN_SET11_GPIO004(value)          (ECIA_EN_SET11_GPIO004_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO004_Pos)) /* Assigment of value for GPIO004 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_GPIO012_Pos             _UINT32_(10)                                         /* (ECIA_EN_SET11) GPIO 012 Position */
#define ECIA_EN_SET11_GPIO012_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO012_Pos)         /* (ECIA_EN_SET11) GPIO 012 Mask */
#define ECIA_EN_SET11_GPIO012(value)          (ECIA_EN_SET11_GPIO012_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO012_Pos)) /* Assigment of value for GPIO012 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_GPIO013_Pos             _UINT32_(11)                                         /* (ECIA_EN_SET11) GPIO 013 Position */
#define ECIA_EN_SET11_GPIO013_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO013_Pos)         /* (ECIA_EN_SET11) GPIO 013 Mask */
#define ECIA_EN_SET11_GPIO013(value)          (ECIA_EN_SET11_GPIO013_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO013_Pos)) /* Assigment of value for GPIO013 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_GPIO015_Pos             _UINT32_(13)                                         /* (ECIA_EN_SET11) GPIO 015 Position */
#define ECIA_EN_SET11_GPIO015_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO015_Pos)         /* (ECIA_EN_SET11) GPIO 015 Mask */
#define ECIA_EN_SET11_GPIO015(value)          (ECIA_EN_SET11_GPIO015_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO015_Pos)) /* Assigment of value for GPIO015 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_GPIO016_Pos             _UINT32_(14)                                         /* (ECIA_EN_SET11) GPIO 016 Position */
#define ECIA_EN_SET11_GPIO016_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO016_Pos)         /* (ECIA_EN_SET11) GPIO 016 Mask */
#define ECIA_EN_SET11_GPIO016(value)          (ECIA_EN_SET11_GPIO016_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO016_Pos)) /* Assigment of value for GPIO016 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_GPIO020_Pos             _UINT32_(16)                                         /* (ECIA_EN_SET11) GPIO 020 Position */
#define ECIA_EN_SET11_GPIO020_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO020_Pos)         /* (ECIA_EN_SET11) GPIO 020 Mask */
#define ECIA_EN_SET11_GPIO020(value)          (ECIA_EN_SET11_GPIO020_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO020_Pos)) /* Assigment of value for GPIO020 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_GPIO021_Pos             _UINT32_(17)                                         /* (ECIA_EN_SET11) GPIO 021 Position */
#define ECIA_EN_SET11_GPIO021_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO021_Pos)         /* (ECIA_EN_SET11) GPIO 021 Mask */
#define ECIA_EN_SET11_GPIO021(value)          (ECIA_EN_SET11_GPIO021_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO021_Pos)) /* Assigment of value for GPIO021 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_GPIO022_Pos             _UINT32_(18)                                         /* (ECIA_EN_SET11) GPIO 022 Position */
#define ECIA_EN_SET11_GPIO022_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO022_Pos)         /* (ECIA_EN_SET11) GPIO 022 Mask */
#define ECIA_EN_SET11_GPIO022(value)          (ECIA_EN_SET11_GPIO022_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO022_Pos)) /* Assigment of value for GPIO022 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_GPIO023_Pos             _UINT32_(19)                                         /* (ECIA_EN_SET11) GPIO 023 Position */
#define ECIA_EN_SET11_GPIO023_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO023_Pos)         /* (ECIA_EN_SET11) GPIO 023 Mask */
#define ECIA_EN_SET11_GPIO023(value)          (ECIA_EN_SET11_GPIO023_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO023_Pos)) /* Assigment of value for GPIO023 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_GPIO024_Pos             _UINT32_(20)                                         /* (ECIA_EN_SET11) GPIO 024 Position */
#define ECIA_EN_SET11_GPIO024_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO024_Pos)         /* (ECIA_EN_SET11) GPIO 024 Mask */
#define ECIA_EN_SET11_GPIO024(value)          (ECIA_EN_SET11_GPIO024_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO024_Pos)) /* Assigment of value for GPIO024 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_GPIO026_Pos             _UINT32_(22)                                         /* (ECIA_EN_SET11) GPIO 026 Position */
#define ECIA_EN_SET11_GPIO026_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO026_Pos)         /* (ECIA_EN_SET11) GPIO 026 Mask */
#define ECIA_EN_SET11_GPIO026(value)          (ECIA_EN_SET11_GPIO026_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO026_Pos)) /* Assigment of value for GPIO026 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_GPIO027_Pos             _UINT32_(23)                                         /* (ECIA_EN_SET11) GPIO 027 Position */
#define ECIA_EN_SET11_GPIO027_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO027_Pos)         /* (ECIA_EN_SET11) GPIO 027 Mask */
#define ECIA_EN_SET11_GPIO027(value)          (ECIA_EN_SET11_GPIO027_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO027_Pos)) /* Assigment of value for GPIO027 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_GPIO030_Pos             _UINT32_(24)                                         /* (ECIA_EN_SET11) GPIO 030 Position */
#define ECIA_EN_SET11_GPIO030_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO030_Pos)         /* (ECIA_EN_SET11) GPIO 030 Mask */
#define ECIA_EN_SET11_GPIO030(value)          (ECIA_EN_SET11_GPIO030_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO030_Pos)) /* Assigment of value for GPIO030 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_GPIO031_Pos             _UINT32_(25)                                         /* (ECIA_EN_SET11) GPIO 031 Position */
#define ECIA_EN_SET11_GPIO031_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO031_Pos)         /* (ECIA_EN_SET11) GPIO 031 Mask */
#define ECIA_EN_SET11_GPIO031(value)          (ECIA_EN_SET11_GPIO031_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO031_Pos)) /* Assigment of value for GPIO031 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_GPIO032_Pos             _UINT32_(26)                                         /* (ECIA_EN_SET11) GPIO 032 Position */
#define ECIA_EN_SET11_GPIO032_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO032_Pos)         /* (ECIA_EN_SET11) GPIO 032 Mask */
#define ECIA_EN_SET11_GPIO032(value)          (ECIA_EN_SET11_GPIO032_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO032_Pos)) /* Assigment of value for GPIO032 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_GPIO033_Pos             _UINT32_(27)                                         /* (ECIA_EN_SET11) GPIO 033 Position */
#define ECIA_EN_SET11_GPIO033_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO033_Pos)         /* (ECIA_EN_SET11) GPIO 033 Mask */
#define ECIA_EN_SET11_GPIO033(value)          (ECIA_EN_SET11_GPIO033_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO033_Pos)) /* Assigment of value for GPIO033 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_GPIO034_Pos             _UINT32_(28)                                         /* (ECIA_EN_SET11) GPIO 034 Position */
#define ECIA_EN_SET11_GPIO034_Msk             (_UINT32_(0x1) << ECIA_EN_SET11_GPIO034_Pos)         /* (ECIA_EN_SET11) GPIO 034 Mask */
#define ECIA_EN_SET11_GPIO034(value)          (ECIA_EN_SET11_GPIO034_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO034_Pos)) /* Assigment of value for GPIO034 in the ECIA_EN_SET11 register */
#define ECIA_EN_SET11_Msk                     _UINT32_(0x1FDF6C1D)                                 /* (ECIA_EN_SET11) Register Mask  */

#define ECIA_EN_SET11_GPIO_Pos                _UINT32_(0)                                          /* (ECIA_EN_SET11 Position) GPIO x34 */
#define ECIA_EN_SET11_GPIO_Msk                (_UINT32_(0xFFFFF) << ECIA_EN_SET11_GPIO_Pos)        /* (ECIA_EN_SET11 Mask) GPIO */
#define ECIA_EN_SET11_GPIO(value)             (ECIA_EN_SET11_GPIO_Msk & (_UINT32_(value) << ECIA_EN_SET11_GPIO_Pos)) 

/* -------- ECIA_RESULT11 : (ECIA Offset: 0x44) ( R/ 32) GIRQ11 RESULT -------- */
#define ECIA_RESULT11_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_RESULT11) GIRQ11 RESULT  Reset Value */

#define ECIA_RESULT11_GPIO000_Pos             _UINT32_(0)                                          /* (ECIA_RESULT11) GPIO 000 Position */
#define ECIA_RESULT11_GPIO000_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO000_Pos)         /* (ECIA_RESULT11) GPIO 000 Mask */
#define ECIA_RESULT11_GPIO000(value)          (ECIA_RESULT11_GPIO000_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO000_Pos)) /* Assigment of value for GPIO000 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_GPIO002_Pos             _UINT32_(2)                                          /* (ECIA_RESULT11) GPIO 002 Position */
#define ECIA_RESULT11_GPIO002_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO002_Pos)         /* (ECIA_RESULT11) GPIO 002 Mask */
#define ECIA_RESULT11_GPIO002(value)          (ECIA_RESULT11_GPIO002_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO002_Pos)) /* Assigment of value for GPIO002 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_GPIO003_Pos             _UINT32_(3)                                          /* (ECIA_RESULT11) GPIO 003 Position */
#define ECIA_RESULT11_GPIO003_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO003_Pos)         /* (ECIA_RESULT11) GPIO 003 Mask */
#define ECIA_RESULT11_GPIO003(value)          (ECIA_RESULT11_GPIO003_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO003_Pos)) /* Assigment of value for GPIO003 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_GPIO004_Pos             _UINT32_(4)                                          /* (ECIA_RESULT11) GPIO 004 Position */
#define ECIA_RESULT11_GPIO004_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO004_Pos)         /* (ECIA_RESULT11) GPIO 004 Mask */
#define ECIA_RESULT11_GPIO004(value)          (ECIA_RESULT11_GPIO004_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO004_Pos)) /* Assigment of value for GPIO004 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_GPIO012_Pos             _UINT32_(10)                                         /* (ECIA_RESULT11) GPIO 012 Position */
#define ECIA_RESULT11_GPIO012_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO012_Pos)         /* (ECIA_RESULT11) GPIO 012 Mask */
#define ECIA_RESULT11_GPIO012(value)          (ECIA_RESULT11_GPIO012_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO012_Pos)) /* Assigment of value for GPIO012 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_GPIO013_Pos             _UINT32_(11)                                         /* (ECIA_RESULT11) GPIO 013 Position */
#define ECIA_RESULT11_GPIO013_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO013_Pos)         /* (ECIA_RESULT11) GPIO 013 Mask */
#define ECIA_RESULT11_GPIO013(value)          (ECIA_RESULT11_GPIO013_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO013_Pos)) /* Assigment of value for GPIO013 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_GPIO015_Pos             _UINT32_(13)                                         /* (ECIA_RESULT11) GPIO 015 Position */
#define ECIA_RESULT11_GPIO015_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO015_Pos)         /* (ECIA_RESULT11) GPIO 015 Mask */
#define ECIA_RESULT11_GPIO015(value)          (ECIA_RESULT11_GPIO015_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO015_Pos)) /* Assigment of value for GPIO015 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_GPIO016_Pos             _UINT32_(14)                                         /* (ECIA_RESULT11) GPIO 016 Position */
#define ECIA_RESULT11_GPIO016_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO016_Pos)         /* (ECIA_RESULT11) GPIO 016 Mask */
#define ECIA_RESULT11_GPIO016(value)          (ECIA_RESULT11_GPIO016_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO016_Pos)) /* Assigment of value for GPIO016 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_GPIO020_Pos             _UINT32_(16)                                         /* (ECIA_RESULT11) GPIO 020 Position */
#define ECIA_RESULT11_GPIO020_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO020_Pos)         /* (ECIA_RESULT11) GPIO 020 Mask */
#define ECIA_RESULT11_GPIO020(value)          (ECIA_RESULT11_GPIO020_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO020_Pos)) /* Assigment of value for GPIO020 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_GPIO021_Pos             _UINT32_(17)                                         /* (ECIA_RESULT11) GPIO 021 Position */
#define ECIA_RESULT11_GPIO021_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO021_Pos)         /* (ECIA_RESULT11) GPIO 021 Mask */
#define ECIA_RESULT11_GPIO021(value)          (ECIA_RESULT11_GPIO021_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO021_Pos)) /* Assigment of value for GPIO021 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_GPIO022_Pos             _UINT32_(18)                                         /* (ECIA_RESULT11) GPIO 022 Position */
#define ECIA_RESULT11_GPIO022_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO022_Pos)         /* (ECIA_RESULT11) GPIO 022 Mask */
#define ECIA_RESULT11_GPIO022(value)          (ECIA_RESULT11_GPIO022_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO022_Pos)) /* Assigment of value for GPIO022 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_GPIO023_Pos             _UINT32_(19)                                         /* (ECIA_RESULT11) GPIO 023 Position */
#define ECIA_RESULT11_GPIO023_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO023_Pos)         /* (ECIA_RESULT11) GPIO 023 Mask */
#define ECIA_RESULT11_GPIO023(value)          (ECIA_RESULT11_GPIO023_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO023_Pos)) /* Assigment of value for GPIO023 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_GPIO024_Pos             _UINT32_(20)                                         /* (ECIA_RESULT11) GPIO 024 Position */
#define ECIA_RESULT11_GPIO024_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO024_Pos)         /* (ECIA_RESULT11) GPIO 024 Mask */
#define ECIA_RESULT11_GPIO024(value)          (ECIA_RESULT11_GPIO024_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO024_Pos)) /* Assigment of value for GPIO024 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_GPIO026_Pos             _UINT32_(22)                                         /* (ECIA_RESULT11) GPIO 026 Position */
#define ECIA_RESULT11_GPIO026_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO026_Pos)         /* (ECIA_RESULT11) GPIO 026 Mask */
#define ECIA_RESULT11_GPIO026(value)          (ECIA_RESULT11_GPIO026_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO026_Pos)) /* Assigment of value for GPIO026 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_GPIO027_Pos             _UINT32_(23)                                         /* (ECIA_RESULT11) GPIO 027 Position */
#define ECIA_RESULT11_GPIO027_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO027_Pos)         /* (ECIA_RESULT11) GPIO 027 Mask */
#define ECIA_RESULT11_GPIO027(value)          (ECIA_RESULT11_GPIO027_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO027_Pos)) /* Assigment of value for GPIO027 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_GPIO030_Pos             _UINT32_(24)                                         /* (ECIA_RESULT11) GPIO 030 Position */
#define ECIA_RESULT11_GPIO030_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO030_Pos)         /* (ECIA_RESULT11) GPIO 030 Mask */
#define ECIA_RESULT11_GPIO030(value)          (ECIA_RESULT11_GPIO030_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO030_Pos)) /* Assigment of value for GPIO030 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_GPIO031_Pos             _UINT32_(25)                                         /* (ECIA_RESULT11) GPIO 031 Position */
#define ECIA_RESULT11_GPIO031_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO031_Pos)         /* (ECIA_RESULT11) GPIO 031 Mask */
#define ECIA_RESULT11_GPIO031(value)          (ECIA_RESULT11_GPIO031_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO031_Pos)) /* Assigment of value for GPIO031 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_GPIO032_Pos             _UINT32_(26)                                         /* (ECIA_RESULT11) GPIO 032 Position */
#define ECIA_RESULT11_GPIO032_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO032_Pos)         /* (ECIA_RESULT11) GPIO 032 Mask */
#define ECIA_RESULT11_GPIO032(value)          (ECIA_RESULT11_GPIO032_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO032_Pos)) /* Assigment of value for GPIO032 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_GPIO033_Pos             _UINT32_(27)                                         /* (ECIA_RESULT11) GPIO 033 Position */
#define ECIA_RESULT11_GPIO033_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO033_Pos)         /* (ECIA_RESULT11) GPIO 033 Mask */
#define ECIA_RESULT11_GPIO033(value)          (ECIA_RESULT11_GPIO033_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO033_Pos)) /* Assigment of value for GPIO033 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_GPIO034_Pos             _UINT32_(28)                                         /* (ECIA_RESULT11) GPIO 034 Position */
#define ECIA_RESULT11_GPIO034_Msk             (_UINT32_(0x1) << ECIA_RESULT11_GPIO034_Pos)         /* (ECIA_RESULT11) GPIO 034 Mask */
#define ECIA_RESULT11_GPIO034(value)          (ECIA_RESULT11_GPIO034_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO034_Pos)) /* Assigment of value for GPIO034 in the ECIA_RESULT11 register */
#define ECIA_RESULT11_Msk                     _UINT32_(0x1FDF6C1D)                                 /* (ECIA_RESULT11) Register Mask  */

#define ECIA_RESULT11_GPIO_Pos                _UINT32_(0)                                          /* (ECIA_RESULT11 Position) GPIO x34 */
#define ECIA_RESULT11_GPIO_Msk                (_UINT32_(0xFFFFF) << ECIA_RESULT11_GPIO_Pos)        /* (ECIA_RESULT11 Mask) GPIO */
#define ECIA_RESULT11_GPIO(value)             (ECIA_RESULT11_GPIO_Msk & (_UINT32_(value) << ECIA_RESULT11_GPIO_Pos)) 

/* -------- ECIA_EN_CLR11 : (ECIA Offset: 0x48) (R/W 32) GIRQ11 ENABLE CLEAR -------- */
#define ECIA_EN_CLR11_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_CLR11) GIRQ11 ENABLE CLEAR  Reset Value */

#define ECIA_EN_CLR11_GPIO000_Pos             _UINT32_(0)                                          /* (ECIA_EN_CLR11) GPIO 000 Position */
#define ECIA_EN_CLR11_GPIO000_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO000_Pos)         /* (ECIA_EN_CLR11) GPIO 000 Mask */
#define ECIA_EN_CLR11_GPIO000(value)          (ECIA_EN_CLR11_GPIO000_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO000_Pos)) /* Assigment of value for GPIO000 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_GPIO002_Pos             _UINT32_(2)                                          /* (ECIA_EN_CLR11) GPIO 002 Position */
#define ECIA_EN_CLR11_GPIO002_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO002_Pos)         /* (ECIA_EN_CLR11) GPIO 002 Mask */
#define ECIA_EN_CLR11_GPIO002(value)          (ECIA_EN_CLR11_GPIO002_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO002_Pos)) /* Assigment of value for GPIO002 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_GPIO003_Pos             _UINT32_(3)                                          /* (ECIA_EN_CLR11) GPIO 003 Position */
#define ECIA_EN_CLR11_GPIO003_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO003_Pos)         /* (ECIA_EN_CLR11) GPIO 003 Mask */
#define ECIA_EN_CLR11_GPIO003(value)          (ECIA_EN_CLR11_GPIO003_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO003_Pos)) /* Assigment of value for GPIO003 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_GPIO004_Pos             _UINT32_(4)                                          /* (ECIA_EN_CLR11) GPIO 004 Position */
#define ECIA_EN_CLR11_GPIO004_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO004_Pos)         /* (ECIA_EN_CLR11) GPIO 004 Mask */
#define ECIA_EN_CLR11_GPIO004(value)          (ECIA_EN_CLR11_GPIO004_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO004_Pos)) /* Assigment of value for GPIO004 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_GPIO012_Pos             _UINT32_(10)                                         /* (ECIA_EN_CLR11) GPIO 012 Position */
#define ECIA_EN_CLR11_GPIO012_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO012_Pos)         /* (ECIA_EN_CLR11) GPIO 012 Mask */
#define ECIA_EN_CLR11_GPIO012(value)          (ECIA_EN_CLR11_GPIO012_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO012_Pos)) /* Assigment of value for GPIO012 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_GPIO013_Pos             _UINT32_(11)                                         /* (ECIA_EN_CLR11) GPIO 013 Position */
#define ECIA_EN_CLR11_GPIO013_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO013_Pos)         /* (ECIA_EN_CLR11) GPIO 013 Mask */
#define ECIA_EN_CLR11_GPIO013(value)          (ECIA_EN_CLR11_GPIO013_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO013_Pos)) /* Assigment of value for GPIO013 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_GPIO015_Pos             _UINT32_(13)                                         /* (ECIA_EN_CLR11) GPIO 015 Position */
#define ECIA_EN_CLR11_GPIO015_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO015_Pos)         /* (ECIA_EN_CLR11) GPIO 015 Mask */
#define ECIA_EN_CLR11_GPIO015(value)          (ECIA_EN_CLR11_GPIO015_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO015_Pos)) /* Assigment of value for GPIO015 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_GPIO016_Pos             _UINT32_(14)                                         /* (ECIA_EN_CLR11) GPIO 016 Position */
#define ECIA_EN_CLR11_GPIO016_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO016_Pos)         /* (ECIA_EN_CLR11) GPIO 016 Mask */
#define ECIA_EN_CLR11_GPIO016(value)          (ECIA_EN_CLR11_GPIO016_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO016_Pos)) /* Assigment of value for GPIO016 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_GPIO020_Pos             _UINT32_(16)                                         /* (ECIA_EN_CLR11) GPIO 020 Position */
#define ECIA_EN_CLR11_GPIO020_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO020_Pos)         /* (ECIA_EN_CLR11) GPIO 020 Mask */
#define ECIA_EN_CLR11_GPIO020(value)          (ECIA_EN_CLR11_GPIO020_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO020_Pos)) /* Assigment of value for GPIO020 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_GPIO021_Pos             _UINT32_(17)                                         /* (ECIA_EN_CLR11) GPIO 021 Position */
#define ECIA_EN_CLR11_GPIO021_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO021_Pos)         /* (ECIA_EN_CLR11) GPIO 021 Mask */
#define ECIA_EN_CLR11_GPIO021(value)          (ECIA_EN_CLR11_GPIO021_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO021_Pos)) /* Assigment of value for GPIO021 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_GPIO022_Pos             _UINT32_(18)                                         /* (ECIA_EN_CLR11) GPIO 022 Position */
#define ECIA_EN_CLR11_GPIO022_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO022_Pos)         /* (ECIA_EN_CLR11) GPIO 022 Mask */
#define ECIA_EN_CLR11_GPIO022(value)          (ECIA_EN_CLR11_GPIO022_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO022_Pos)) /* Assigment of value for GPIO022 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_GPIO023_Pos             _UINT32_(19)                                         /* (ECIA_EN_CLR11) GPIO 023 Position */
#define ECIA_EN_CLR11_GPIO023_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO023_Pos)         /* (ECIA_EN_CLR11) GPIO 023 Mask */
#define ECIA_EN_CLR11_GPIO023(value)          (ECIA_EN_CLR11_GPIO023_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO023_Pos)) /* Assigment of value for GPIO023 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_GPIO024_Pos             _UINT32_(20)                                         /* (ECIA_EN_CLR11) GPIO 024 Position */
#define ECIA_EN_CLR11_GPIO024_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO024_Pos)         /* (ECIA_EN_CLR11) GPIO 024 Mask */
#define ECIA_EN_CLR11_GPIO024(value)          (ECIA_EN_CLR11_GPIO024_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO024_Pos)) /* Assigment of value for GPIO024 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_GPIO026_Pos             _UINT32_(22)                                         /* (ECIA_EN_CLR11) GPIO 026 Position */
#define ECIA_EN_CLR11_GPIO026_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO026_Pos)         /* (ECIA_EN_CLR11) GPIO 026 Mask */
#define ECIA_EN_CLR11_GPIO026(value)          (ECIA_EN_CLR11_GPIO026_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO026_Pos)) /* Assigment of value for GPIO026 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_GPIO027_Pos             _UINT32_(23)                                         /* (ECIA_EN_CLR11) GPIO 027 Position */
#define ECIA_EN_CLR11_GPIO027_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO027_Pos)         /* (ECIA_EN_CLR11) GPIO 027 Mask */
#define ECIA_EN_CLR11_GPIO027(value)          (ECIA_EN_CLR11_GPIO027_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO027_Pos)) /* Assigment of value for GPIO027 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_GPIO030_Pos             _UINT32_(24)                                         /* (ECIA_EN_CLR11) GPIO 030 Position */
#define ECIA_EN_CLR11_GPIO030_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO030_Pos)         /* (ECIA_EN_CLR11) GPIO 030 Mask */
#define ECIA_EN_CLR11_GPIO030(value)          (ECIA_EN_CLR11_GPIO030_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO030_Pos)) /* Assigment of value for GPIO030 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_GPIO031_Pos             _UINT32_(25)                                         /* (ECIA_EN_CLR11) GPIO 031 Position */
#define ECIA_EN_CLR11_GPIO031_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO031_Pos)         /* (ECIA_EN_CLR11) GPIO 031 Mask */
#define ECIA_EN_CLR11_GPIO031(value)          (ECIA_EN_CLR11_GPIO031_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO031_Pos)) /* Assigment of value for GPIO031 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_GPIO032_Pos             _UINT32_(26)                                         /* (ECIA_EN_CLR11) GPIO 032 Position */
#define ECIA_EN_CLR11_GPIO032_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO032_Pos)         /* (ECIA_EN_CLR11) GPIO 032 Mask */
#define ECIA_EN_CLR11_GPIO032(value)          (ECIA_EN_CLR11_GPIO032_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO032_Pos)) /* Assigment of value for GPIO032 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_GPIO033_Pos             _UINT32_(27)                                         /* (ECIA_EN_CLR11) GPIO 033 Position */
#define ECIA_EN_CLR11_GPIO033_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO033_Pos)         /* (ECIA_EN_CLR11) GPIO 033 Mask */
#define ECIA_EN_CLR11_GPIO033(value)          (ECIA_EN_CLR11_GPIO033_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO033_Pos)) /* Assigment of value for GPIO033 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_GPIO034_Pos             _UINT32_(28)                                         /* (ECIA_EN_CLR11) GPIO 034 Position */
#define ECIA_EN_CLR11_GPIO034_Msk             (_UINT32_(0x1) << ECIA_EN_CLR11_GPIO034_Pos)         /* (ECIA_EN_CLR11) GPIO 034 Mask */
#define ECIA_EN_CLR11_GPIO034(value)          (ECIA_EN_CLR11_GPIO034_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO034_Pos)) /* Assigment of value for GPIO034 in the ECIA_EN_CLR11 register */
#define ECIA_EN_CLR11_Msk                     _UINT32_(0x1FDF6C1D)                                 /* (ECIA_EN_CLR11) Register Mask  */

#define ECIA_EN_CLR11_GPIO_Pos                _UINT32_(0)                                          /* (ECIA_EN_CLR11 Position) GPIO x34 */
#define ECIA_EN_CLR11_GPIO_Msk                (_UINT32_(0xFFFFF) << ECIA_EN_CLR11_GPIO_Pos)        /* (ECIA_EN_CLR11 Mask) GPIO */
#define ECIA_EN_CLR11_GPIO(value)             (ECIA_EN_CLR11_GPIO_Msk & (_UINT32_(value) << ECIA_EN_CLR11_GPIO_Pos)) 

/* -------- ECIA_SRC12 : (ECIA Offset: 0x50) (R/W 32) GIRQ12 SOURCE -------- */
#define ECIA_SRC12_RESETVALUE                 _UINT32_(0x00)                                       /*  (ECIA_SRC12) GIRQ12 SOURCE  Reset Value */

#define ECIA_SRC12_GPIO200_Pos                _UINT32_(0)                                          /* (ECIA_SRC12) GPIO 200 Position */
#define ECIA_SRC12_GPIO200_Msk                (_UINT32_(0x1) << ECIA_SRC12_GPIO200_Pos)            /* (ECIA_SRC12) GPIO 200 Mask */
#define ECIA_SRC12_GPIO200(value)             (ECIA_SRC12_GPIO200_Msk & (_UINT32_(value) << ECIA_SRC12_GPIO200_Pos)) /* Assigment of value for GPIO200 in the ECIA_SRC12 register */
#define ECIA_SRC12_GPIO201_Pos                _UINT32_(1)                                          /* (ECIA_SRC12) GPIO 201 Position */
#define ECIA_SRC12_GPIO201_Msk                (_UINT32_(0x1) << ECIA_SRC12_GPIO201_Pos)            /* (ECIA_SRC12) GPIO 201 Mask */
#define ECIA_SRC12_GPIO201(value)             (ECIA_SRC12_GPIO201_Msk & (_UINT32_(value) << ECIA_SRC12_GPIO201_Pos)) /* Assigment of value for GPIO201 in the ECIA_SRC12 register */
#define ECIA_SRC12_GPIO202_Pos                _UINT32_(2)                                          /* (ECIA_SRC12) GPIO 202 Position */
#define ECIA_SRC12_GPIO202_Msk                (_UINT32_(0x1) << ECIA_SRC12_GPIO202_Pos)            /* (ECIA_SRC12) GPIO 202 Mask */
#define ECIA_SRC12_GPIO202(value)             (ECIA_SRC12_GPIO202_Msk & (_UINT32_(value) << ECIA_SRC12_GPIO202_Pos)) /* Assigment of value for GPIO202 in the ECIA_SRC12 register */
#define ECIA_SRC12_GPIO203_Pos                _UINT32_(3)                                          /* (ECIA_SRC12) GPIO 203 Position */
#define ECIA_SRC12_GPIO203_Msk                (_UINT32_(0x1) << ECIA_SRC12_GPIO203_Pos)            /* (ECIA_SRC12) GPIO 203 Mask */
#define ECIA_SRC12_GPIO203(value)             (ECIA_SRC12_GPIO203_Msk & (_UINT32_(value) << ECIA_SRC12_GPIO203_Pos)) /* Assigment of value for GPIO203 in the ECIA_SRC12 register */
#define ECIA_SRC12_GPIO204_Pos                _UINT32_(4)                                          /* (ECIA_SRC12) GPIO 204 Position */
#define ECIA_SRC12_GPIO204_Msk                (_UINT32_(0x1) << ECIA_SRC12_GPIO204_Pos)            /* (ECIA_SRC12) GPIO 204 Mask */
#define ECIA_SRC12_GPIO204(value)             (ECIA_SRC12_GPIO204_Msk & (_UINT32_(value) << ECIA_SRC12_GPIO204_Pos)) /* Assigment of value for GPIO204 in the ECIA_SRC12 register */
#define ECIA_SRC12_GPIO223_Pos                _UINT32_(19)                                         /* (ECIA_SRC12) GPIO 223 Position */
#define ECIA_SRC12_GPIO223_Msk                (_UINT32_(0x1) << ECIA_SRC12_GPIO223_Pos)            /* (ECIA_SRC12) GPIO 223 Mask */
#define ECIA_SRC12_GPIO223(value)             (ECIA_SRC12_GPIO223_Msk & (_UINT32_(value) << ECIA_SRC12_GPIO223_Pos)) /* Assigment of value for GPIO223 in the ECIA_SRC12 register */
#define ECIA_SRC12_GPIO224_Pos                _UINT32_(20)                                         /* (ECIA_SRC12) GPIO 224 Position */
#define ECIA_SRC12_GPIO224_Msk                (_UINT32_(0x1) << ECIA_SRC12_GPIO224_Pos)            /* (ECIA_SRC12) GPIO 224 Mask */
#define ECIA_SRC12_GPIO224(value)             (ECIA_SRC12_GPIO224_Msk & (_UINT32_(value) << ECIA_SRC12_GPIO224_Pos)) /* Assigment of value for GPIO224 in the ECIA_SRC12 register */
#define ECIA_SRC12_GPIO227_Pos                _UINT32_(23)                                         /* (ECIA_SRC12) GPIO 227 Position */
#define ECIA_SRC12_GPIO227_Msk                (_UINT32_(0x1) << ECIA_SRC12_GPIO227_Pos)            /* (ECIA_SRC12) GPIO 227 Mask */
#define ECIA_SRC12_GPIO227(value)             (ECIA_SRC12_GPIO227_Msk & (_UINT32_(value) << ECIA_SRC12_GPIO227_Pos)) /* Assigment of value for GPIO227 in the ECIA_SRC12 register */
#define ECIA_SRC12_Msk                        _UINT32_(0x0098001F)                                 /* (ECIA_SRC12) Register Mask  */

#define ECIA_SRC12_GPIO_Pos                   _UINT32_(0)                                          /* (ECIA_SRC12 Position) GPIO 227 */
#define ECIA_SRC12_GPIO_Msk                   (_UINT32_(0xFF) << ECIA_SRC12_GPIO_Pos)              /* (ECIA_SRC12 Mask) GPIO */
#define ECIA_SRC12_GPIO(value)                (ECIA_SRC12_GPIO_Msk & (_UINT32_(value) << ECIA_SRC12_GPIO_Pos)) 

/* -------- ECIA_EN_SET12 : (ECIA Offset: 0x54) (R/W 32) GIRQ12 ENABLE SET -------- */
#define ECIA_EN_SET12_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_SET12) GIRQ12 ENABLE SET  Reset Value */

#define ECIA_EN_SET12_GPIO200_Pos             _UINT32_(0)                                          /* (ECIA_EN_SET12) GPIO 200 Position */
#define ECIA_EN_SET12_GPIO200_Msk             (_UINT32_(0x1) << ECIA_EN_SET12_GPIO200_Pos)         /* (ECIA_EN_SET12) GPIO 200 Mask */
#define ECIA_EN_SET12_GPIO200(value)          (ECIA_EN_SET12_GPIO200_Msk & (_UINT32_(value) << ECIA_EN_SET12_GPIO200_Pos)) /* Assigment of value for GPIO200 in the ECIA_EN_SET12 register */
#define ECIA_EN_SET12_GPIO201_Pos             _UINT32_(1)                                          /* (ECIA_EN_SET12) GPIO 201 Position */
#define ECIA_EN_SET12_GPIO201_Msk             (_UINT32_(0x1) << ECIA_EN_SET12_GPIO201_Pos)         /* (ECIA_EN_SET12) GPIO 201 Mask */
#define ECIA_EN_SET12_GPIO201(value)          (ECIA_EN_SET12_GPIO201_Msk & (_UINT32_(value) << ECIA_EN_SET12_GPIO201_Pos)) /* Assigment of value for GPIO201 in the ECIA_EN_SET12 register */
#define ECIA_EN_SET12_GPIO202_Pos             _UINT32_(2)                                          /* (ECIA_EN_SET12) GPIO 202 Position */
#define ECIA_EN_SET12_GPIO202_Msk             (_UINT32_(0x1) << ECIA_EN_SET12_GPIO202_Pos)         /* (ECIA_EN_SET12) GPIO 202 Mask */
#define ECIA_EN_SET12_GPIO202(value)          (ECIA_EN_SET12_GPIO202_Msk & (_UINT32_(value) << ECIA_EN_SET12_GPIO202_Pos)) /* Assigment of value for GPIO202 in the ECIA_EN_SET12 register */
#define ECIA_EN_SET12_GPIO203_Pos             _UINT32_(3)                                          /* (ECIA_EN_SET12) GPIO 203 Position */
#define ECIA_EN_SET12_GPIO203_Msk             (_UINT32_(0x1) << ECIA_EN_SET12_GPIO203_Pos)         /* (ECIA_EN_SET12) GPIO 203 Mask */
#define ECIA_EN_SET12_GPIO203(value)          (ECIA_EN_SET12_GPIO203_Msk & (_UINT32_(value) << ECIA_EN_SET12_GPIO203_Pos)) /* Assigment of value for GPIO203 in the ECIA_EN_SET12 register */
#define ECIA_EN_SET12_GPIO204_Pos             _UINT32_(4)                                          /* (ECIA_EN_SET12) GPIO 204 Position */
#define ECIA_EN_SET12_GPIO204_Msk             (_UINT32_(0x1) << ECIA_EN_SET12_GPIO204_Pos)         /* (ECIA_EN_SET12) GPIO 204 Mask */
#define ECIA_EN_SET12_GPIO204(value)          (ECIA_EN_SET12_GPIO204_Msk & (_UINT32_(value) << ECIA_EN_SET12_GPIO204_Pos)) /* Assigment of value for GPIO204 in the ECIA_EN_SET12 register */
#define ECIA_EN_SET12_GPIO223_Pos             _UINT32_(19)                                         /* (ECIA_EN_SET12) GPIO 223 Position */
#define ECIA_EN_SET12_GPIO223_Msk             (_UINT32_(0x1) << ECIA_EN_SET12_GPIO223_Pos)         /* (ECIA_EN_SET12) GPIO 223 Mask */
#define ECIA_EN_SET12_GPIO223(value)          (ECIA_EN_SET12_GPIO223_Msk & (_UINT32_(value) << ECIA_EN_SET12_GPIO223_Pos)) /* Assigment of value for GPIO223 in the ECIA_EN_SET12 register */
#define ECIA_EN_SET12_GPIO224_Pos             _UINT32_(20)                                         /* (ECIA_EN_SET12) GPIO 224 Position */
#define ECIA_EN_SET12_GPIO224_Msk             (_UINT32_(0x1) << ECIA_EN_SET12_GPIO224_Pos)         /* (ECIA_EN_SET12) GPIO 224 Mask */
#define ECIA_EN_SET12_GPIO224(value)          (ECIA_EN_SET12_GPIO224_Msk & (_UINT32_(value) << ECIA_EN_SET12_GPIO224_Pos)) /* Assigment of value for GPIO224 in the ECIA_EN_SET12 register */
#define ECIA_EN_SET12_GPIO227_Pos             _UINT32_(23)                                         /* (ECIA_EN_SET12) GPIO 227 Position */
#define ECIA_EN_SET12_GPIO227_Msk             (_UINT32_(0x1) << ECIA_EN_SET12_GPIO227_Pos)         /* (ECIA_EN_SET12) GPIO 227 Mask */
#define ECIA_EN_SET12_GPIO227(value)          (ECIA_EN_SET12_GPIO227_Msk & (_UINT32_(value) << ECIA_EN_SET12_GPIO227_Pos)) /* Assigment of value for GPIO227 in the ECIA_EN_SET12 register */
#define ECIA_EN_SET12_Msk                     _UINT32_(0x0098001F)                                 /* (ECIA_EN_SET12) Register Mask  */

#define ECIA_EN_SET12_GPIO_Pos                _UINT32_(0)                                          /* (ECIA_EN_SET12 Position) GPIO 227 */
#define ECIA_EN_SET12_GPIO_Msk                (_UINT32_(0xFF) << ECIA_EN_SET12_GPIO_Pos)           /* (ECIA_EN_SET12 Mask) GPIO */
#define ECIA_EN_SET12_GPIO(value)             (ECIA_EN_SET12_GPIO_Msk & (_UINT32_(value) << ECIA_EN_SET12_GPIO_Pos)) 

/* -------- ECIA_RESULT12 : (ECIA Offset: 0x58) ( R/ 32) GIRQ12 RESULT -------- */
#define ECIA_RESULT12_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_RESULT12) GIRQ12 RESULT  Reset Value */

#define ECIA_RESULT12_GPIO200_Pos             _UINT32_(0)                                          /* (ECIA_RESULT12) GPIO 200 Position */
#define ECIA_RESULT12_GPIO200_Msk             (_UINT32_(0x1) << ECIA_RESULT12_GPIO200_Pos)         /* (ECIA_RESULT12) GPIO 200 Mask */
#define ECIA_RESULT12_GPIO200(value)          (ECIA_RESULT12_GPIO200_Msk & (_UINT32_(value) << ECIA_RESULT12_GPIO200_Pos)) /* Assigment of value for GPIO200 in the ECIA_RESULT12 register */
#define ECIA_RESULT12_GPIO201_Pos             _UINT32_(1)                                          /* (ECIA_RESULT12) GPIO 201 Position */
#define ECIA_RESULT12_GPIO201_Msk             (_UINT32_(0x1) << ECIA_RESULT12_GPIO201_Pos)         /* (ECIA_RESULT12) GPIO 201 Mask */
#define ECIA_RESULT12_GPIO201(value)          (ECIA_RESULT12_GPIO201_Msk & (_UINT32_(value) << ECIA_RESULT12_GPIO201_Pos)) /* Assigment of value for GPIO201 in the ECIA_RESULT12 register */
#define ECIA_RESULT12_GPIO202_Pos             _UINT32_(2)                                          /* (ECIA_RESULT12) GPIO 202 Position */
#define ECIA_RESULT12_GPIO202_Msk             (_UINT32_(0x1) << ECIA_RESULT12_GPIO202_Pos)         /* (ECIA_RESULT12) GPIO 202 Mask */
#define ECIA_RESULT12_GPIO202(value)          (ECIA_RESULT12_GPIO202_Msk & (_UINT32_(value) << ECIA_RESULT12_GPIO202_Pos)) /* Assigment of value for GPIO202 in the ECIA_RESULT12 register */
#define ECIA_RESULT12_GPIO203_Pos             _UINT32_(3)                                          /* (ECIA_RESULT12) GPIO 203 Position */
#define ECIA_RESULT12_GPIO203_Msk             (_UINT32_(0x1) << ECIA_RESULT12_GPIO203_Pos)         /* (ECIA_RESULT12) GPIO 203 Mask */
#define ECIA_RESULT12_GPIO203(value)          (ECIA_RESULT12_GPIO203_Msk & (_UINT32_(value) << ECIA_RESULT12_GPIO203_Pos)) /* Assigment of value for GPIO203 in the ECIA_RESULT12 register */
#define ECIA_RESULT12_GPIO204_Pos             _UINT32_(4)                                          /* (ECIA_RESULT12) GPIO 204 Position */
#define ECIA_RESULT12_GPIO204_Msk             (_UINT32_(0x1) << ECIA_RESULT12_GPIO204_Pos)         /* (ECIA_RESULT12) GPIO 204 Mask */
#define ECIA_RESULT12_GPIO204(value)          (ECIA_RESULT12_GPIO204_Msk & (_UINT32_(value) << ECIA_RESULT12_GPIO204_Pos)) /* Assigment of value for GPIO204 in the ECIA_RESULT12 register */
#define ECIA_RESULT12_GPIO223_Pos             _UINT32_(19)                                         /* (ECIA_RESULT12) GPIO 223 Position */
#define ECIA_RESULT12_GPIO223_Msk             (_UINT32_(0x1) << ECIA_RESULT12_GPIO223_Pos)         /* (ECIA_RESULT12) GPIO 223 Mask */
#define ECIA_RESULT12_GPIO223(value)          (ECIA_RESULT12_GPIO223_Msk & (_UINT32_(value) << ECIA_RESULT12_GPIO223_Pos)) /* Assigment of value for GPIO223 in the ECIA_RESULT12 register */
#define ECIA_RESULT12_GPIO224_Pos             _UINT32_(20)                                         /* (ECIA_RESULT12) GPIO 224 Position */
#define ECIA_RESULT12_GPIO224_Msk             (_UINT32_(0x1) << ECIA_RESULT12_GPIO224_Pos)         /* (ECIA_RESULT12) GPIO 224 Mask */
#define ECIA_RESULT12_GPIO224(value)          (ECIA_RESULT12_GPIO224_Msk & (_UINT32_(value) << ECIA_RESULT12_GPIO224_Pos)) /* Assigment of value for GPIO224 in the ECIA_RESULT12 register */
#define ECIA_RESULT12_GPIO227_Pos             _UINT32_(23)                                         /* (ECIA_RESULT12) GPIO 227 Position */
#define ECIA_RESULT12_GPIO227_Msk             (_UINT32_(0x1) << ECIA_RESULT12_GPIO227_Pos)         /* (ECIA_RESULT12) GPIO 227 Mask */
#define ECIA_RESULT12_GPIO227(value)          (ECIA_RESULT12_GPIO227_Msk & (_UINT32_(value) << ECIA_RESULT12_GPIO227_Pos)) /* Assigment of value for GPIO227 in the ECIA_RESULT12 register */
#define ECIA_RESULT12_Msk                     _UINT32_(0x0098001F)                                 /* (ECIA_RESULT12) Register Mask  */

#define ECIA_RESULT12_GPIO_Pos                _UINT32_(0)                                          /* (ECIA_RESULT12 Position) GPIO 227 */
#define ECIA_RESULT12_GPIO_Msk                (_UINT32_(0xFF) << ECIA_RESULT12_GPIO_Pos)           /* (ECIA_RESULT12 Mask) GPIO */
#define ECIA_RESULT12_GPIO(value)             (ECIA_RESULT12_GPIO_Msk & (_UINT32_(value) << ECIA_RESULT12_GPIO_Pos)) 

/* -------- ECIA_EN_CLR12 : (ECIA Offset: 0x5C) (R/W 32) GIRQ12 ENABLE CLEAR -------- */
#define ECIA_EN_CLR12_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_CLR12) GIRQ12 ENABLE CLEAR  Reset Value */

#define ECIA_EN_CLR12_GPIO200_Pos             _UINT32_(0)                                          /* (ECIA_EN_CLR12) GPIO 200 Position */
#define ECIA_EN_CLR12_GPIO200_Msk             (_UINT32_(0x1) << ECIA_EN_CLR12_GPIO200_Pos)         /* (ECIA_EN_CLR12) GPIO 200 Mask */
#define ECIA_EN_CLR12_GPIO200(value)          (ECIA_EN_CLR12_GPIO200_Msk & (_UINT32_(value) << ECIA_EN_CLR12_GPIO200_Pos)) /* Assigment of value for GPIO200 in the ECIA_EN_CLR12 register */
#define ECIA_EN_CLR12_GPIO201_Pos             _UINT32_(1)                                          /* (ECIA_EN_CLR12) GPIO 201 Position */
#define ECIA_EN_CLR12_GPIO201_Msk             (_UINT32_(0x1) << ECIA_EN_CLR12_GPIO201_Pos)         /* (ECIA_EN_CLR12) GPIO 201 Mask */
#define ECIA_EN_CLR12_GPIO201(value)          (ECIA_EN_CLR12_GPIO201_Msk & (_UINT32_(value) << ECIA_EN_CLR12_GPIO201_Pos)) /* Assigment of value for GPIO201 in the ECIA_EN_CLR12 register */
#define ECIA_EN_CLR12_GPIO202_Pos             _UINT32_(2)                                          /* (ECIA_EN_CLR12) GPIO 202 Position */
#define ECIA_EN_CLR12_GPIO202_Msk             (_UINT32_(0x1) << ECIA_EN_CLR12_GPIO202_Pos)         /* (ECIA_EN_CLR12) GPIO 202 Mask */
#define ECIA_EN_CLR12_GPIO202(value)          (ECIA_EN_CLR12_GPIO202_Msk & (_UINT32_(value) << ECIA_EN_CLR12_GPIO202_Pos)) /* Assigment of value for GPIO202 in the ECIA_EN_CLR12 register */
#define ECIA_EN_CLR12_GPIO203_Pos             _UINT32_(3)                                          /* (ECIA_EN_CLR12) GPIO 203 Position */
#define ECIA_EN_CLR12_GPIO203_Msk             (_UINT32_(0x1) << ECIA_EN_CLR12_GPIO203_Pos)         /* (ECIA_EN_CLR12) GPIO 203 Mask */
#define ECIA_EN_CLR12_GPIO203(value)          (ECIA_EN_CLR12_GPIO203_Msk & (_UINT32_(value) << ECIA_EN_CLR12_GPIO203_Pos)) /* Assigment of value for GPIO203 in the ECIA_EN_CLR12 register */
#define ECIA_EN_CLR12_GPIO204_Pos             _UINT32_(4)                                          /* (ECIA_EN_CLR12) GPIO 204 Position */
#define ECIA_EN_CLR12_GPIO204_Msk             (_UINT32_(0x1) << ECIA_EN_CLR12_GPIO204_Pos)         /* (ECIA_EN_CLR12) GPIO 204 Mask */
#define ECIA_EN_CLR12_GPIO204(value)          (ECIA_EN_CLR12_GPIO204_Msk & (_UINT32_(value) << ECIA_EN_CLR12_GPIO204_Pos)) /* Assigment of value for GPIO204 in the ECIA_EN_CLR12 register */
#define ECIA_EN_CLR12_GPIO223_Pos             _UINT32_(19)                                         /* (ECIA_EN_CLR12) GPIO 223 Position */
#define ECIA_EN_CLR12_GPIO223_Msk             (_UINT32_(0x1) << ECIA_EN_CLR12_GPIO223_Pos)         /* (ECIA_EN_CLR12) GPIO 223 Mask */
#define ECIA_EN_CLR12_GPIO223(value)          (ECIA_EN_CLR12_GPIO223_Msk & (_UINT32_(value) << ECIA_EN_CLR12_GPIO223_Pos)) /* Assigment of value for GPIO223 in the ECIA_EN_CLR12 register */
#define ECIA_EN_CLR12_GPIO224_Pos             _UINT32_(20)                                         /* (ECIA_EN_CLR12) GPIO 224 Position */
#define ECIA_EN_CLR12_GPIO224_Msk             (_UINT32_(0x1) << ECIA_EN_CLR12_GPIO224_Pos)         /* (ECIA_EN_CLR12) GPIO 224 Mask */
#define ECIA_EN_CLR12_GPIO224(value)          (ECIA_EN_CLR12_GPIO224_Msk & (_UINT32_(value) << ECIA_EN_CLR12_GPIO224_Pos)) /* Assigment of value for GPIO224 in the ECIA_EN_CLR12 register */
#define ECIA_EN_CLR12_GPIO227_Pos             _UINT32_(23)                                         /* (ECIA_EN_CLR12) GPIO 227 Position */
#define ECIA_EN_CLR12_GPIO227_Msk             (_UINT32_(0x1) << ECIA_EN_CLR12_GPIO227_Pos)         /* (ECIA_EN_CLR12) GPIO 227 Mask */
#define ECIA_EN_CLR12_GPIO227(value)          (ECIA_EN_CLR12_GPIO227_Msk & (_UINT32_(value) << ECIA_EN_CLR12_GPIO227_Pos)) /* Assigment of value for GPIO227 in the ECIA_EN_CLR12 register */
#define ECIA_EN_CLR12_Msk                     _UINT32_(0x0098001F)                                 /* (ECIA_EN_CLR12) Register Mask  */

#define ECIA_EN_CLR12_GPIO_Pos                _UINT32_(0)                                          /* (ECIA_EN_CLR12 Position) GPIO 227 */
#define ECIA_EN_CLR12_GPIO_Msk                (_UINT32_(0xFF) << ECIA_EN_CLR12_GPIO_Pos)           /* (ECIA_EN_CLR12 Mask) GPIO */
#define ECIA_EN_CLR12_GPIO(value)             (ECIA_EN_CLR12_GPIO_Msk & (_UINT32_(value) << ECIA_EN_CLR12_GPIO_Pos)) 

/* -------- ECIA_SRC13 : (ECIA Offset: 0x64) (R/W 32) GIRQ13 SOURCE -------- */
#define ECIA_SRC13_RESETVALUE                 _UINT32_(0x00)                                       /*  (ECIA_SRC13) GIRQ13 SOURCE  Reset Value */

#define ECIA_SRC13_I2CSMB0_Pos                _UINT32_(0)                                          /* (ECIA_SRC13) I2CSMB0 Position */
#define ECIA_SRC13_I2CSMB0_Msk                (_UINT32_(0x1) << ECIA_SRC13_I2CSMB0_Pos)            /* (ECIA_SRC13) I2CSMB0 Mask */
#define ECIA_SRC13_I2CSMB0(value)             (ECIA_SRC13_I2CSMB0_Msk & (_UINT32_(value) << ECIA_SRC13_I2CSMB0_Pos)) /* Assigment of value for I2CSMB0 in the ECIA_SRC13 register */
#define ECIA_SRC13_I2CSMB1_Pos                _UINT32_(1)                                          /* (ECIA_SRC13) I2CSMB1 Position */
#define ECIA_SRC13_I2CSMB1_Msk                (_UINT32_(0x1) << ECIA_SRC13_I2CSMB1_Pos)            /* (ECIA_SRC13) I2CSMB1 Mask */
#define ECIA_SRC13_I2CSMB1(value)             (ECIA_SRC13_I2CSMB1_Msk & (_UINT32_(value) << ECIA_SRC13_I2CSMB1_Pos)) /* Assigment of value for I2CSMB1 in the ECIA_SRC13 register */
#define ECIA_SRC13_I2CSMB2_Pos                _UINT32_(2)                                          /* (ECIA_SRC13) I2CSMB2 Position */
#define ECIA_SRC13_I2CSMB2_Msk                (_UINT32_(0x1) << ECIA_SRC13_I2CSMB2_Pos)            /* (ECIA_SRC13) I2CSMB2 Mask */
#define ECIA_SRC13_I2CSMB2(value)             (ECIA_SRC13_I2CSMB2_Msk & (_UINT32_(value) << ECIA_SRC13_I2CSMB2_Pos)) /* Assigment of value for I2CSMB2 in the ECIA_SRC13 register */
#define ECIA_SRC13_I2CSMB3_Pos                _UINT32_(3)                                          /* (ECIA_SRC13) I2CSMB3 Position */
#define ECIA_SRC13_I2CSMB3_Msk                (_UINT32_(0x1) << ECIA_SRC13_I2CSMB3_Pos)            /* (ECIA_SRC13) I2CSMB3 Mask */
#define ECIA_SRC13_I2CSMB3(value)             (ECIA_SRC13_I2CSMB3_Msk & (_UINT32_(value) << ECIA_SRC13_I2CSMB3_Pos)) /* Assigment of value for I2CSMB3 in the ECIA_SRC13 register */
#define ECIA_SRC13_I2CSMB4_Pos                _UINT32_(4)                                          /* (ECIA_SRC13) I2CSMB4 Position */
#define ECIA_SRC13_I2CSMB4_Msk                (_UINT32_(0x1) << ECIA_SRC13_I2CSMB4_Pos)            /* (ECIA_SRC13) I2CSMB4 Mask */
#define ECIA_SRC13_I2CSMB4(value)             (ECIA_SRC13_I2CSMB4_Msk & (_UINT32_(value) << ECIA_SRC13_I2CSMB4_Pos)) /* Assigment of value for I2CSMB4 in the ECIA_SRC13 register */
#define ECIA_SRC13_Msk                        _UINT32_(0x0000001F)                                 /* (ECIA_SRC13) Register Mask  */

#define ECIA_SRC13_I2CSMB_Pos                 _UINT32_(0)                                          /* (ECIA_SRC13 Position) I2CSMB4 */
#define ECIA_SRC13_I2CSMB_Msk                 (_UINT32_(0x1F) << ECIA_SRC13_I2CSMB_Pos)            /* (ECIA_SRC13 Mask) I2CSMB */
#define ECIA_SRC13_I2CSMB(value)              (ECIA_SRC13_I2CSMB_Msk & (_UINT32_(value) << ECIA_SRC13_I2CSMB_Pos)) 

/* -------- ECIA_EN_SET13 : (ECIA Offset: 0x68) (R/W 32) GIRQ13 ENABLE SET -------- */
#define ECIA_EN_SET13_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_SET13) GIRQ13 ENABLE SET  Reset Value */

#define ECIA_EN_SET13_I2CSMB0_Pos             _UINT32_(0)                                          /* (ECIA_EN_SET13) I2CSMB0 Position */
#define ECIA_EN_SET13_I2CSMB0_Msk             (_UINT32_(0x1) << ECIA_EN_SET13_I2CSMB0_Pos)         /* (ECIA_EN_SET13) I2CSMB0 Mask */
#define ECIA_EN_SET13_I2CSMB0(value)          (ECIA_EN_SET13_I2CSMB0_Msk & (_UINT32_(value) << ECIA_EN_SET13_I2CSMB0_Pos)) /* Assigment of value for I2CSMB0 in the ECIA_EN_SET13 register */
#define ECIA_EN_SET13_I2CSMB1_Pos             _UINT32_(1)                                          /* (ECIA_EN_SET13) I2CSMB1 Position */
#define ECIA_EN_SET13_I2CSMB1_Msk             (_UINT32_(0x1) << ECIA_EN_SET13_I2CSMB1_Pos)         /* (ECIA_EN_SET13) I2CSMB1 Mask */
#define ECIA_EN_SET13_I2CSMB1(value)          (ECIA_EN_SET13_I2CSMB1_Msk & (_UINT32_(value) << ECIA_EN_SET13_I2CSMB1_Pos)) /* Assigment of value for I2CSMB1 in the ECIA_EN_SET13 register */
#define ECIA_EN_SET13_I2CSMB2_Pos             _UINT32_(2)                                          /* (ECIA_EN_SET13) I2CSMB2 Position */
#define ECIA_EN_SET13_I2CSMB2_Msk             (_UINT32_(0x1) << ECIA_EN_SET13_I2CSMB2_Pos)         /* (ECIA_EN_SET13) I2CSMB2 Mask */
#define ECIA_EN_SET13_I2CSMB2(value)          (ECIA_EN_SET13_I2CSMB2_Msk & (_UINT32_(value) << ECIA_EN_SET13_I2CSMB2_Pos)) /* Assigment of value for I2CSMB2 in the ECIA_EN_SET13 register */
#define ECIA_EN_SET13_I2CSMB3_Pos             _UINT32_(3)                                          /* (ECIA_EN_SET13) I2CSMB3 Position */
#define ECIA_EN_SET13_I2CSMB3_Msk             (_UINT32_(0x1) << ECIA_EN_SET13_I2CSMB3_Pos)         /* (ECIA_EN_SET13) I2CSMB3 Mask */
#define ECIA_EN_SET13_I2CSMB3(value)          (ECIA_EN_SET13_I2CSMB3_Msk & (_UINT32_(value) << ECIA_EN_SET13_I2CSMB3_Pos)) /* Assigment of value for I2CSMB3 in the ECIA_EN_SET13 register */
#define ECIA_EN_SET13_I2CSMB4_Pos             _UINT32_(4)                                          /* (ECIA_EN_SET13) I2CSMB4 Position */
#define ECIA_EN_SET13_I2CSMB4_Msk             (_UINT32_(0x1) << ECIA_EN_SET13_I2CSMB4_Pos)         /* (ECIA_EN_SET13) I2CSMB4 Mask */
#define ECIA_EN_SET13_I2CSMB4(value)          (ECIA_EN_SET13_I2CSMB4_Msk & (_UINT32_(value) << ECIA_EN_SET13_I2CSMB4_Pos)) /* Assigment of value for I2CSMB4 in the ECIA_EN_SET13 register */
#define ECIA_EN_SET13_Msk                     _UINT32_(0x0000001F)                                 /* (ECIA_EN_SET13) Register Mask  */

#define ECIA_EN_SET13_I2CSMB_Pos              _UINT32_(0)                                          /* (ECIA_EN_SET13 Position) I2CSMB4 */
#define ECIA_EN_SET13_I2CSMB_Msk              (_UINT32_(0x1F) << ECIA_EN_SET13_I2CSMB_Pos)         /* (ECIA_EN_SET13 Mask) I2CSMB */
#define ECIA_EN_SET13_I2CSMB(value)           (ECIA_EN_SET13_I2CSMB_Msk & (_UINT32_(value) << ECIA_EN_SET13_I2CSMB_Pos)) 

/* -------- ECIA_RESULT13 : (ECIA Offset: 0x6C) ( R/ 32) GIRQ13 RESULT -------- */
#define ECIA_RESULT13_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_RESULT13) GIRQ13 RESULT  Reset Value */

#define ECIA_RESULT13_I2CSMB0_Pos             _UINT32_(0)                                          /* (ECIA_RESULT13) I2CSMB0 Position */
#define ECIA_RESULT13_I2CSMB0_Msk             (_UINT32_(0x1) << ECIA_RESULT13_I2CSMB0_Pos)         /* (ECIA_RESULT13) I2CSMB0 Mask */
#define ECIA_RESULT13_I2CSMB0(value)          (ECIA_RESULT13_I2CSMB0_Msk & (_UINT32_(value) << ECIA_RESULT13_I2CSMB0_Pos)) /* Assigment of value for I2CSMB0 in the ECIA_RESULT13 register */
#define ECIA_RESULT13_I2CSMB1_Pos             _UINT32_(1)                                          /* (ECIA_RESULT13) I2CSMB1 Position */
#define ECIA_RESULT13_I2CSMB1_Msk             (_UINT32_(0x1) << ECIA_RESULT13_I2CSMB1_Pos)         /* (ECIA_RESULT13) I2CSMB1 Mask */
#define ECIA_RESULT13_I2CSMB1(value)          (ECIA_RESULT13_I2CSMB1_Msk & (_UINT32_(value) << ECIA_RESULT13_I2CSMB1_Pos)) /* Assigment of value for I2CSMB1 in the ECIA_RESULT13 register */
#define ECIA_RESULT13_I2CSMB2_Pos             _UINT32_(2)                                          /* (ECIA_RESULT13) I2CSMB2 Position */
#define ECIA_RESULT13_I2CSMB2_Msk             (_UINT32_(0x1) << ECIA_RESULT13_I2CSMB2_Pos)         /* (ECIA_RESULT13) I2CSMB2 Mask */
#define ECIA_RESULT13_I2CSMB2(value)          (ECIA_RESULT13_I2CSMB2_Msk & (_UINT32_(value) << ECIA_RESULT13_I2CSMB2_Pos)) /* Assigment of value for I2CSMB2 in the ECIA_RESULT13 register */
#define ECIA_RESULT13_I2CSMB3_Pos             _UINT32_(3)                                          /* (ECIA_RESULT13) I2CSMB3 Position */
#define ECIA_RESULT13_I2CSMB3_Msk             (_UINT32_(0x1) << ECIA_RESULT13_I2CSMB3_Pos)         /* (ECIA_RESULT13) I2CSMB3 Mask */
#define ECIA_RESULT13_I2CSMB3(value)          (ECIA_RESULT13_I2CSMB3_Msk & (_UINT32_(value) << ECIA_RESULT13_I2CSMB3_Pos)) /* Assigment of value for I2CSMB3 in the ECIA_RESULT13 register */
#define ECIA_RESULT13_I2CSMB4_Pos             _UINT32_(4)                                          /* (ECIA_RESULT13) I2CSMB4 Position */
#define ECIA_RESULT13_I2CSMB4_Msk             (_UINT32_(0x1) << ECIA_RESULT13_I2CSMB4_Pos)         /* (ECIA_RESULT13) I2CSMB4 Mask */
#define ECIA_RESULT13_I2CSMB4(value)          (ECIA_RESULT13_I2CSMB4_Msk & (_UINT32_(value) << ECIA_RESULT13_I2CSMB4_Pos)) /* Assigment of value for I2CSMB4 in the ECIA_RESULT13 register */
#define ECIA_RESULT13_Msk                     _UINT32_(0x0000001F)                                 /* (ECIA_RESULT13) Register Mask  */

#define ECIA_RESULT13_I2CSMB_Pos              _UINT32_(0)                                          /* (ECIA_RESULT13 Position) I2CSMB4 */
#define ECIA_RESULT13_I2CSMB_Msk              (_UINT32_(0x1F) << ECIA_RESULT13_I2CSMB_Pos)         /* (ECIA_RESULT13 Mask) I2CSMB */
#define ECIA_RESULT13_I2CSMB(value)           (ECIA_RESULT13_I2CSMB_Msk & (_UINT32_(value) << ECIA_RESULT13_I2CSMB_Pos)) 

/* -------- ECIA_EN_CLR13 : (ECIA Offset: 0x70) (R/W 32) GIRQ13 ENABLE CLEAR -------- */
#define ECIA_EN_CLR13_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_CLR13) GIRQ13 ENABLE CLEAR  Reset Value */

#define ECIA_EN_CLR13_I2CSMB0_Pos             _UINT32_(0)                                          /* (ECIA_EN_CLR13) I2CSMB0 Position */
#define ECIA_EN_CLR13_I2CSMB0_Msk             (_UINT32_(0x1) << ECIA_EN_CLR13_I2CSMB0_Pos)         /* (ECIA_EN_CLR13) I2CSMB0 Mask */
#define ECIA_EN_CLR13_I2CSMB0(value)          (ECIA_EN_CLR13_I2CSMB0_Msk & (_UINT32_(value) << ECIA_EN_CLR13_I2CSMB0_Pos)) /* Assigment of value for I2CSMB0 in the ECIA_EN_CLR13 register */
#define ECIA_EN_CLR13_I2CSMB1_Pos             _UINT32_(1)                                          /* (ECIA_EN_CLR13) I2CSMB1 Position */
#define ECIA_EN_CLR13_I2CSMB1_Msk             (_UINT32_(0x1) << ECIA_EN_CLR13_I2CSMB1_Pos)         /* (ECIA_EN_CLR13) I2CSMB1 Mask */
#define ECIA_EN_CLR13_I2CSMB1(value)          (ECIA_EN_CLR13_I2CSMB1_Msk & (_UINT32_(value) << ECIA_EN_CLR13_I2CSMB1_Pos)) /* Assigment of value for I2CSMB1 in the ECIA_EN_CLR13 register */
#define ECIA_EN_CLR13_I2CSMB2_Pos             _UINT32_(2)                                          /* (ECIA_EN_CLR13) I2CSMB2 Position */
#define ECIA_EN_CLR13_I2CSMB2_Msk             (_UINT32_(0x1) << ECIA_EN_CLR13_I2CSMB2_Pos)         /* (ECIA_EN_CLR13) I2CSMB2 Mask */
#define ECIA_EN_CLR13_I2CSMB2(value)          (ECIA_EN_CLR13_I2CSMB2_Msk & (_UINT32_(value) << ECIA_EN_CLR13_I2CSMB2_Pos)) /* Assigment of value for I2CSMB2 in the ECIA_EN_CLR13 register */
#define ECIA_EN_CLR13_I2CSMB3_Pos             _UINT32_(3)                                          /* (ECIA_EN_CLR13) I2CSMB3 Position */
#define ECIA_EN_CLR13_I2CSMB3_Msk             (_UINT32_(0x1) << ECIA_EN_CLR13_I2CSMB3_Pos)         /* (ECIA_EN_CLR13) I2CSMB3 Mask */
#define ECIA_EN_CLR13_I2CSMB3(value)          (ECIA_EN_CLR13_I2CSMB3_Msk & (_UINT32_(value) << ECIA_EN_CLR13_I2CSMB3_Pos)) /* Assigment of value for I2CSMB3 in the ECIA_EN_CLR13 register */
#define ECIA_EN_CLR13_I2CSMB4_Pos             _UINT32_(4)                                          /* (ECIA_EN_CLR13) I2CSMB4 Position */
#define ECIA_EN_CLR13_I2CSMB4_Msk             (_UINT32_(0x1) << ECIA_EN_CLR13_I2CSMB4_Pos)         /* (ECIA_EN_CLR13) I2CSMB4 Mask */
#define ECIA_EN_CLR13_I2CSMB4(value)          (ECIA_EN_CLR13_I2CSMB4_Msk & (_UINT32_(value) << ECIA_EN_CLR13_I2CSMB4_Pos)) /* Assigment of value for I2CSMB4 in the ECIA_EN_CLR13 register */
#define ECIA_EN_CLR13_Msk                     _UINT32_(0x0000001F)                                 /* (ECIA_EN_CLR13) Register Mask  */

#define ECIA_EN_CLR13_I2CSMB_Pos              _UINT32_(0)                                          /* (ECIA_EN_CLR13 Position) I2CSMB4 */
#define ECIA_EN_CLR13_I2CSMB_Msk              (_UINT32_(0x1F) << ECIA_EN_CLR13_I2CSMB_Pos)         /* (ECIA_EN_CLR13 Mask) I2CSMB */
#define ECIA_EN_CLR13_I2CSMB(value)           (ECIA_EN_CLR13_I2CSMB_Msk & (_UINT32_(value) << ECIA_EN_CLR13_I2CSMB_Pos)) 

/* -------- ECIA_SRC14 : (ECIA Offset: 0x78) (R/W 32) GIRQ14 SOURCE -------- */
#define ECIA_SRC14_RESETVALUE                 _UINT32_(0x00)                                       /*  (ECIA_SRC14) GIRQ14 SOURCE  Reset Value */

#define ECIA_SRC14_DMA_CH00_Pos               _UINT32_(0)                                          /* (ECIA_SRC14) DMA CH00 Position */
#define ECIA_SRC14_DMA_CH00_Msk               (_UINT32_(0x1) << ECIA_SRC14_DMA_CH00_Pos)           /* (ECIA_SRC14) DMA CH00 Mask */
#define ECIA_SRC14_DMA_CH00(value)            (ECIA_SRC14_DMA_CH00_Msk & (_UINT32_(value) << ECIA_SRC14_DMA_CH00_Pos)) /* Assigment of value for DMA_CH00 in the ECIA_SRC14 register */
#define ECIA_SRC14_DMA_CH01_Pos               _UINT32_(1)                                          /* (ECIA_SRC14) DMA CH01 Position */
#define ECIA_SRC14_DMA_CH01_Msk               (_UINT32_(0x1) << ECIA_SRC14_DMA_CH01_Pos)           /* (ECIA_SRC14) DMA CH01 Mask */
#define ECIA_SRC14_DMA_CH01(value)            (ECIA_SRC14_DMA_CH01_Msk & (_UINT32_(value) << ECIA_SRC14_DMA_CH01_Pos)) /* Assigment of value for DMA_CH01 in the ECIA_SRC14 register */
#define ECIA_SRC14_DMA_CH02_Pos               _UINT32_(2)                                          /* (ECIA_SRC14) DMA CH02 Position */
#define ECIA_SRC14_DMA_CH02_Msk               (_UINT32_(0x1) << ECIA_SRC14_DMA_CH02_Pos)           /* (ECIA_SRC14) DMA CH02 Mask */
#define ECIA_SRC14_DMA_CH02(value)            (ECIA_SRC14_DMA_CH02_Msk & (_UINT32_(value) << ECIA_SRC14_DMA_CH02_Pos)) /* Assigment of value for DMA_CH02 in the ECIA_SRC14 register */
#define ECIA_SRC14_DMA_CH03_Pos               _UINT32_(3)                                          /* (ECIA_SRC14) DMA CH03 Position */
#define ECIA_SRC14_DMA_CH03_Msk               (_UINT32_(0x1) << ECIA_SRC14_DMA_CH03_Pos)           /* (ECIA_SRC14) DMA CH03 Mask */
#define ECIA_SRC14_DMA_CH03(value)            (ECIA_SRC14_DMA_CH03_Msk & (_UINT32_(value) << ECIA_SRC14_DMA_CH03_Pos)) /* Assigment of value for DMA_CH03 in the ECIA_SRC14 register */
#define ECIA_SRC14_DMA_CH04_Pos               _UINT32_(4)                                          /* (ECIA_SRC14) DMA CH04 Position */
#define ECIA_SRC14_DMA_CH04_Msk               (_UINT32_(0x1) << ECIA_SRC14_DMA_CH04_Pos)           /* (ECIA_SRC14) DMA CH04 Mask */
#define ECIA_SRC14_DMA_CH04(value)            (ECIA_SRC14_DMA_CH04_Msk & (_UINT32_(value) << ECIA_SRC14_DMA_CH04_Pos)) /* Assigment of value for DMA_CH04 in the ECIA_SRC14 register */
#define ECIA_SRC14_DMA_CH05_Pos               _UINT32_(5)                                          /* (ECIA_SRC14) DMA CH05 Position */
#define ECIA_SRC14_DMA_CH05_Msk               (_UINT32_(0x1) << ECIA_SRC14_DMA_CH05_Pos)           /* (ECIA_SRC14) DMA CH05 Mask */
#define ECIA_SRC14_DMA_CH05(value)            (ECIA_SRC14_DMA_CH05_Msk & (_UINT32_(value) << ECIA_SRC14_DMA_CH05_Pos)) /* Assigment of value for DMA_CH05 in the ECIA_SRC14 register */
#define ECIA_SRC14_DMA_CH06_Pos               _UINT32_(6)                                          /* (ECIA_SRC14) DMA CH06 Position */
#define ECIA_SRC14_DMA_CH06_Msk               (_UINT32_(0x1) << ECIA_SRC14_DMA_CH06_Pos)           /* (ECIA_SRC14) DMA CH06 Mask */
#define ECIA_SRC14_DMA_CH06(value)            (ECIA_SRC14_DMA_CH06_Msk & (_UINT32_(value) << ECIA_SRC14_DMA_CH06_Pos)) /* Assigment of value for DMA_CH06 in the ECIA_SRC14 register */
#define ECIA_SRC14_DMA_CH07_Pos               _UINT32_(7)                                          /* (ECIA_SRC14) DMA CH07 Position */
#define ECIA_SRC14_DMA_CH07_Msk               (_UINT32_(0x1) << ECIA_SRC14_DMA_CH07_Pos)           /* (ECIA_SRC14) DMA CH07 Mask */
#define ECIA_SRC14_DMA_CH07(value)            (ECIA_SRC14_DMA_CH07_Msk & (_UINT32_(value) << ECIA_SRC14_DMA_CH07_Pos)) /* Assigment of value for DMA_CH07 in the ECIA_SRC14 register */
#define ECIA_SRC14_DMA_CH08_Pos               _UINT32_(8)                                          /* (ECIA_SRC14) DMA CH08 Position */
#define ECIA_SRC14_DMA_CH08_Msk               (_UINT32_(0x1) << ECIA_SRC14_DMA_CH08_Pos)           /* (ECIA_SRC14) DMA CH08 Mask */
#define ECIA_SRC14_DMA_CH08(value)            (ECIA_SRC14_DMA_CH08_Msk & (_UINT32_(value) << ECIA_SRC14_DMA_CH08_Pos)) /* Assigment of value for DMA_CH08 in the ECIA_SRC14 register */
#define ECIA_SRC14_DMA_CH09_Pos               _UINT32_(9)                                          /* (ECIA_SRC14) DMA CH09 Position */
#define ECIA_SRC14_DMA_CH09_Msk               (_UINT32_(0x1) << ECIA_SRC14_DMA_CH09_Pos)           /* (ECIA_SRC14) DMA CH09 Mask */
#define ECIA_SRC14_DMA_CH09(value)            (ECIA_SRC14_DMA_CH09_Msk & (_UINT32_(value) << ECIA_SRC14_DMA_CH09_Pos)) /* Assigment of value for DMA_CH09 in the ECIA_SRC14 register */
#define ECIA_SRC14_Msk                        _UINT32_(0x000003FF)                                 /* (ECIA_SRC14) Register Mask  */

#define ECIA_SRC14_DMA_CH_Pos                 _UINT32_(0)                                          /* (ECIA_SRC14 Position) DMA CHx9 */
#define ECIA_SRC14_DMA_CH_Msk                 (_UINT32_(0x3FF) << ECIA_SRC14_DMA_CH_Pos)           /* (ECIA_SRC14 Mask) DMA_CH */
#define ECIA_SRC14_DMA_CH(value)              (ECIA_SRC14_DMA_CH_Msk & (_UINT32_(value) << ECIA_SRC14_DMA_CH_Pos)) 

/* -------- ECIA_EN_SET14 : (ECIA Offset: 0x7C) (R/W 32) GIRQ14 ENABLE SET -------- */
#define ECIA_EN_SET14_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_SET14) GIRQ14 ENABLE SET  Reset Value */

#define ECIA_EN_SET14_DMA_CH00_Pos            _UINT32_(0)                                          /* (ECIA_EN_SET14) DMA CH00 Position */
#define ECIA_EN_SET14_DMA_CH00_Msk            (_UINT32_(0x1) << ECIA_EN_SET14_DMA_CH00_Pos)        /* (ECIA_EN_SET14) DMA CH00 Mask */
#define ECIA_EN_SET14_DMA_CH00(value)         (ECIA_EN_SET14_DMA_CH00_Msk & (_UINT32_(value) << ECIA_EN_SET14_DMA_CH00_Pos)) /* Assigment of value for DMA_CH00 in the ECIA_EN_SET14 register */
#define ECIA_EN_SET14_DMA_CH01_Pos            _UINT32_(1)                                          /* (ECIA_EN_SET14) DMA CH01 Position */
#define ECIA_EN_SET14_DMA_CH01_Msk            (_UINT32_(0x1) << ECIA_EN_SET14_DMA_CH01_Pos)        /* (ECIA_EN_SET14) DMA CH01 Mask */
#define ECIA_EN_SET14_DMA_CH01(value)         (ECIA_EN_SET14_DMA_CH01_Msk & (_UINT32_(value) << ECIA_EN_SET14_DMA_CH01_Pos)) /* Assigment of value for DMA_CH01 in the ECIA_EN_SET14 register */
#define ECIA_EN_SET14_DMA_CH02_Pos            _UINT32_(2)                                          /* (ECIA_EN_SET14) DMA CH02 Position */
#define ECIA_EN_SET14_DMA_CH02_Msk            (_UINT32_(0x1) << ECIA_EN_SET14_DMA_CH02_Pos)        /* (ECIA_EN_SET14) DMA CH02 Mask */
#define ECIA_EN_SET14_DMA_CH02(value)         (ECIA_EN_SET14_DMA_CH02_Msk & (_UINT32_(value) << ECIA_EN_SET14_DMA_CH02_Pos)) /* Assigment of value for DMA_CH02 in the ECIA_EN_SET14 register */
#define ECIA_EN_SET14_DMA_CH03_Pos            _UINT32_(3)                                          /* (ECIA_EN_SET14) DMA CH03 Position */
#define ECIA_EN_SET14_DMA_CH03_Msk            (_UINT32_(0x1) << ECIA_EN_SET14_DMA_CH03_Pos)        /* (ECIA_EN_SET14) DMA CH03 Mask */
#define ECIA_EN_SET14_DMA_CH03(value)         (ECIA_EN_SET14_DMA_CH03_Msk & (_UINT32_(value) << ECIA_EN_SET14_DMA_CH03_Pos)) /* Assigment of value for DMA_CH03 in the ECIA_EN_SET14 register */
#define ECIA_EN_SET14_DMA_CH04_Pos            _UINT32_(4)                                          /* (ECIA_EN_SET14) DMA CH04 Position */
#define ECIA_EN_SET14_DMA_CH04_Msk            (_UINT32_(0x1) << ECIA_EN_SET14_DMA_CH04_Pos)        /* (ECIA_EN_SET14) DMA CH04 Mask */
#define ECIA_EN_SET14_DMA_CH04(value)         (ECIA_EN_SET14_DMA_CH04_Msk & (_UINT32_(value) << ECIA_EN_SET14_DMA_CH04_Pos)) /* Assigment of value for DMA_CH04 in the ECIA_EN_SET14 register */
#define ECIA_EN_SET14_DMA_CH05_Pos            _UINT32_(5)                                          /* (ECIA_EN_SET14) DMA CH05 Position */
#define ECIA_EN_SET14_DMA_CH05_Msk            (_UINT32_(0x1) << ECIA_EN_SET14_DMA_CH05_Pos)        /* (ECIA_EN_SET14) DMA CH05 Mask */
#define ECIA_EN_SET14_DMA_CH05(value)         (ECIA_EN_SET14_DMA_CH05_Msk & (_UINT32_(value) << ECIA_EN_SET14_DMA_CH05_Pos)) /* Assigment of value for DMA_CH05 in the ECIA_EN_SET14 register */
#define ECIA_EN_SET14_DMA_CH06_Pos            _UINT32_(6)                                          /* (ECIA_EN_SET14) DMA CH06 Position */
#define ECIA_EN_SET14_DMA_CH06_Msk            (_UINT32_(0x1) << ECIA_EN_SET14_DMA_CH06_Pos)        /* (ECIA_EN_SET14) DMA CH06 Mask */
#define ECIA_EN_SET14_DMA_CH06(value)         (ECIA_EN_SET14_DMA_CH06_Msk & (_UINT32_(value) << ECIA_EN_SET14_DMA_CH06_Pos)) /* Assigment of value for DMA_CH06 in the ECIA_EN_SET14 register */
#define ECIA_EN_SET14_DMA_CH07_Pos            _UINT32_(7)                                          /* (ECIA_EN_SET14) DMA CH07 Position */
#define ECIA_EN_SET14_DMA_CH07_Msk            (_UINT32_(0x1) << ECIA_EN_SET14_DMA_CH07_Pos)        /* (ECIA_EN_SET14) DMA CH07 Mask */
#define ECIA_EN_SET14_DMA_CH07(value)         (ECIA_EN_SET14_DMA_CH07_Msk & (_UINT32_(value) << ECIA_EN_SET14_DMA_CH07_Pos)) /* Assigment of value for DMA_CH07 in the ECIA_EN_SET14 register */
#define ECIA_EN_SET14_DMA_CH08_Pos            _UINT32_(8)                                          /* (ECIA_EN_SET14) DMA CH08 Position */
#define ECIA_EN_SET14_DMA_CH08_Msk            (_UINT32_(0x1) << ECIA_EN_SET14_DMA_CH08_Pos)        /* (ECIA_EN_SET14) DMA CH08 Mask */
#define ECIA_EN_SET14_DMA_CH08(value)         (ECIA_EN_SET14_DMA_CH08_Msk & (_UINT32_(value) << ECIA_EN_SET14_DMA_CH08_Pos)) /* Assigment of value for DMA_CH08 in the ECIA_EN_SET14 register */
#define ECIA_EN_SET14_DMA_CH09_Pos            _UINT32_(9)                                          /* (ECIA_EN_SET14) DMA CH09 Position */
#define ECIA_EN_SET14_DMA_CH09_Msk            (_UINT32_(0x1) << ECIA_EN_SET14_DMA_CH09_Pos)        /* (ECIA_EN_SET14) DMA CH09 Mask */
#define ECIA_EN_SET14_DMA_CH09(value)         (ECIA_EN_SET14_DMA_CH09_Msk & (_UINT32_(value) << ECIA_EN_SET14_DMA_CH09_Pos)) /* Assigment of value for DMA_CH09 in the ECIA_EN_SET14 register */
#define ECIA_EN_SET14_Msk                     _UINT32_(0x000003FF)                                 /* (ECIA_EN_SET14) Register Mask  */

#define ECIA_EN_SET14_DMA_CH_Pos              _UINT32_(0)                                          /* (ECIA_EN_SET14 Position) DMA CHx9 */
#define ECIA_EN_SET14_DMA_CH_Msk              (_UINT32_(0x3FF) << ECIA_EN_SET14_DMA_CH_Pos)        /* (ECIA_EN_SET14 Mask) DMA_CH */
#define ECIA_EN_SET14_DMA_CH(value)           (ECIA_EN_SET14_DMA_CH_Msk & (_UINT32_(value) << ECIA_EN_SET14_DMA_CH_Pos)) 

/* -------- ECIA_RESULT14 : (ECIA Offset: 0x80) ( R/ 32) GIRQ14 RESULT -------- */
#define ECIA_RESULT14_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_RESULT14) GIRQ14 RESULT  Reset Value */

#define ECIA_RESULT14_DMA_CH00_Pos            _UINT32_(0)                                          /* (ECIA_RESULT14) DMA CH00 Position */
#define ECIA_RESULT14_DMA_CH00_Msk            (_UINT32_(0x1) << ECIA_RESULT14_DMA_CH00_Pos)        /* (ECIA_RESULT14) DMA CH00 Mask */
#define ECIA_RESULT14_DMA_CH00(value)         (ECIA_RESULT14_DMA_CH00_Msk & (_UINT32_(value) << ECIA_RESULT14_DMA_CH00_Pos)) /* Assigment of value for DMA_CH00 in the ECIA_RESULT14 register */
#define ECIA_RESULT14_DMA_CH01_Pos            _UINT32_(1)                                          /* (ECIA_RESULT14) DMA CH01 Position */
#define ECIA_RESULT14_DMA_CH01_Msk            (_UINT32_(0x1) << ECIA_RESULT14_DMA_CH01_Pos)        /* (ECIA_RESULT14) DMA CH01 Mask */
#define ECIA_RESULT14_DMA_CH01(value)         (ECIA_RESULT14_DMA_CH01_Msk & (_UINT32_(value) << ECIA_RESULT14_DMA_CH01_Pos)) /* Assigment of value for DMA_CH01 in the ECIA_RESULT14 register */
#define ECIA_RESULT14_DMA_CH02_Pos            _UINT32_(2)                                          /* (ECIA_RESULT14) DMA CH02 Position */
#define ECIA_RESULT14_DMA_CH02_Msk            (_UINT32_(0x1) << ECIA_RESULT14_DMA_CH02_Pos)        /* (ECIA_RESULT14) DMA CH02 Mask */
#define ECIA_RESULT14_DMA_CH02(value)         (ECIA_RESULT14_DMA_CH02_Msk & (_UINT32_(value) << ECIA_RESULT14_DMA_CH02_Pos)) /* Assigment of value for DMA_CH02 in the ECIA_RESULT14 register */
#define ECIA_RESULT14_DMA_CH03_Pos            _UINT32_(3)                                          /* (ECIA_RESULT14) DMA CH03 Position */
#define ECIA_RESULT14_DMA_CH03_Msk            (_UINT32_(0x1) << ECIA_RESULT14_DMA_CH03_Pos)        /* (ECIA_RESULT14) DMA CH03 Mask */
#define ECIA_RESULT14_DMA_CH03(value)         (ECIA_RESULT14_DMA_CH03_Msk & (_UINT32_(value) << ECIA_RESULT14_DMA_CH03_Pos)) /* Assigment of value for DMA_CH03 in the ECIA_RESULT14 register */
#define ECIA_RESULT14_DMA_CH04_Pos            _UINT32_(4)                                          /* (ECIA_RESULT14) DMA CH04 Position */
#define ECIA_RESULT14_DMA_CH04_Msk            (_UINT32_(0x1) << ECIA_RESULT14_DMA_CH04_Pos)        /* (ECIA_RESULT14) DMA CH04 Mask */
#define ECIA_RESULT14_DMA_CH04(value)         (ECIA_RESULT14_DMA_CH04_Msk & (_UINT32_(value) << ECIA_RESULT14_DMA_CH04_Pos)) /* Assigment of value for DMA_CH04 in the ECIA_RESULT14 register */
#define ECIA_RESULT14_DMA_CH05_Pos            _UINT32_(5)                                          /* (ECIA_RESULT14) DMA CH05 Position */
#define ECIA_RESULT14_DMA_CH05_Msk            (_UINT32_(0x1) << ECIA_RESULT14_DMA_CH05_Pos)        /* (ECIA_RESULT14) DMA CH05 Mask */
#define ECIA_RESULT14_DMA_CH05(value)         (ECIA_RESULT14_DMA_CH05_Msk & (_UINT32_(value) << ECIA_RESULT14_DMA_CH05_Pos)) /* Assigment of value for DMA_CH05 in the ECIA_RESULT14 register */
#define ECIA_RESULT14_DMA_CH06_Pos            _UINT32_(6)                                          /* (ECIA_RESULT14) DMA CH06 Position */
#define ECIA_RESULT14_DMA_CH06_Msk            (_UINT32_(0x1) << ECIA_RESULT14_DMA_CH06_Pos)        /* (ECIA_RESULT14) DMA CH06 Mask */
#define ECIA_RESULT14_DMA_CH06(value)         (ECIA_RESULT14_DMA_CH06_Msk & (_UINT32_(value) << ECIA_RESULT14_DMA_CH06_Pos)) /* Assigment of value for DMA_CH06 in the ECIA_RESULT14 register */
#define ECIA_RESULT14_DMA_CH07_Pos            _UINT32_(7)                                          /* (ECIA_RESULT14) DMA CH07 Position */
#define ECIA_RESULT14_DMA_CH07_Msk            (_UINT32_(0x1) << ECIA_RESULT14_DMA_CH07_Pos)        /* (ECIA_RESULT14) DMA CH07 Mask */
#define ECIA_RESULT14_DMA_CH07(value)         (ECIA_RESULT14_DMA_CH07_Msk & (_UINT32_(value) << ECIA_RESULT14_DMA_CH07_Pos)) /* Assigment of value for DMA_CH07 in the ECIA_RESULT14 register */
#define ECIA_RESULT14_DMA_CH08_Pos            _UINT32_(8)                                          /* (ECIA_RESULT14) DMA CH08 Position */
#define ECIA_RESULT14_DMA_CH08_Msk            (_UINT32_(0x1) << ECIA_RESULT14_DMA_CH08_Pos)        /* (ECIA_RESULT14) DMA CH08 Mask */
#define ECIA_RESULT14_DMA_CH08(value)         (ECIA_RESULT14_DMA_CH08_Msk & (_UINT32_(value) << ECIA_RESULT14_DMA_CH08_Pos)) /* Assigment of value for DMA_CH08 in the ECIA_RESULT14 register */
#define ECIA_RESULT14_DMA_CH09_Pos            _UINT32_(9)                                          /* (ECIA_RESULT14) DMA CH09 Position */
#define ECIA_RESULT14_DMA_CH09_Msk            (_UINT32_(0x1) << ECIA_RESULT14_DMA_CH09_Pos)        /* (ECIA_RESULT14) DMA CH09 Mask */
#define ECIA_RESULT14_DMA_CH09(value)         (ECIA_RESULT14_DMA_CH09_Msk & (_UINT32_(value) << ECIA_RESULT14_DMA_CH09_Pos)) /* Assigment of value for DMA_CH09 in the ECIA_RESULT14 register */
#define ECIA_RESULT14_Msk                     _UINT32_(0x000003FF)                                 /* (ECIA_RESULT14) Register Mask  */

#define ECIA_RESULT14_DMA_CH_Pos              _UINT32_(0)                                          /* (ECIA_RESULT14 Position) DMA CHx9 */
#define ECIA_RESULT14_DMA_CH_Msk              (_UINT32_(0x3FF) << ECIA_RESULT14_DMA_CH_Pos)        /* (ECIA_RESULT14 Mask) DMA_CH */
#define ECIA_RESULT14_DMA_CH(value)           (ECIA_RESULT14_DMA_CH_Msk & (_UINT32_(value) << ECIA_RESULT14_DMA_CH_Pos)) 

/* -------- ECIA_EN_CLR14 : (ECIA Offset: 0x84) (R/W 32) GIRQ14 ENABLE CLEAR -------- */
#define ECIA_EN_CLR14_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_CLR14) GIRQ14 ENABLE CLEAR  Reset Value */

#define ECIA_EN_CLR14_DMA_CH00_Pos            _UINT32_(0)                                          /* (ECIA_EN_CLR14) DMA CH00 Position */
#define ECIA_EN_CLR14_DMA_CH00_Msk            (_UINT32_(0x1) << ECIA_EN_CLR14_DMA_CH00_Pos)        /* (ECIA_EN_CLR14) DMA CH00 Mask */
#define ECIA_EN_CLR14_DMA_CH00(value)         (ECIA_EN_CLR14_DMA_CH00_Msk & (_UINT32_(value) << ECIA_EN_CLR14_DMA_CH00_Pos)) /* Assigment of value for DMA_CH00 in the ECIA_EN_CLR14 register */
#define ECIA_EN_CLR14_DMA_CH01_Pos            _UINT32_(1)                                          /* (ECIA_EN_CLR14) DMA CH01 Position */
#define ECIA_EN_CLR14_DMA_CH01_Msk            (_UINT32_(0x1) << ECIA_EN_CLR14_DMA_CH01_Pos)        /* (ECIA_EN_CLR14) DMA CH01 Mask */
#define ECIA_EN_CLR14_DMA_CH01(value)         (ECIA_EN_CLR14_DMA_CH01_Msk & (_UINT32_(value) << ECIA_EN_CLR14_DMA_CH01_Pos)) /* Assigment of value for DMA_CH01 in the ECIA_EN_CLR14 register */
#define ECIA_EN_CLR14_DMA_CH02_Pos            _UINT32_(2)                                          /* (ECIA_EN_CLR14) DMA CH02 Position */
#define ECIA_EN_CLR14_DMA_CH02_Msk            (_UINT32_(0x1) << ECIA_EN_CLR14_DMA_CH02_Pos)        /* (ECIA_EN_CLR14) DMA CH02 Mask */
#define ECIA_EN_CLR14_DMA_CH02(value)         (ECIA_EN_CLR14_DMA_CH02_Msk & (_UINT32_(value) << ECIA_EN_CLR14_DMA_CH02_Pos)) /* Assigment of value for DMA_CH02 in the ECIA_EN_CLR14 register */
#define ECIA_EN_CLR14_DMA_CH03_Pos            _UINT32_(3)                                          /* (ECIA_EN_CLR14) DMA CH03 Position */
#define ECIA_EN_CLR14_DMA_CH03_Msk            (_UINT32_(0x1) << ECIA_EN_CLR14_DMA_CH03_Pos)        /* (ECIA_EN_CLR14) DMA CH03 Mask */
#define ECIA_EN_CLR14_DMA_CH03(value)         (ECIA_EN_CLR14_DMA_CH03_Msk & (_UINT32_(value) << ECIA_EN_CLR14_DMA_CH03_Pos)) /* Assigment of value for DMA_CH03 in the ECIA_EN_CLR14 register */
#define ECIA_EN_CLR14_DMA_CH04_Pos            _UINT32_(4)                                          /* (ECIA_EN_CLR14) DMA CH04 Position */
#define ECIA_EN_CLR14_DMA_CH04_Msk            (_UINT32_(0x1) << ECIA_EN_CLR14_DMA_CH04_Pos)        /* (ECIA_EN_CLR14) DMA CH04 Mask */
#define ECIA_EN_CLR14_DMA_CH04(value)         (ECIA_EN_CLR14_DMA_CH04_Msk & (_UINT32_(value) << ECIA_EN_CLR14_DMA_CH04_Pos)) /* Assigment of value for DMA_CH04 in the ECIA_EN_CLR14 register */
#define ECIA_EN_CLR14_DMA_CH05_Pos            _UINT32_(5)                                          /* (ECIA_EN_CLR14) DMA CH05 Position */
#define ECIA_EN_CLR14_DMA_CH05_Msk            (_UINT32_(0x1) << ECIA_EN_CLR14_DMA_CH05_Pos)        /* (ECIA_EN_CLR14) DMA CH05 Mask */
#define ECIA_EN_CLR14_DMA_CH05(value)         (ECIA_EN_CLR14_DMA_CH05_Msk & (_UINT32_(value) << ECIA_EN_CLR14_DMA_CH05_Pos)) /* Assigment of value for DMA_CH05 in the ECIA_EN_CLR14 register */
#define ECIA_EN_CLR14_DMA_CH06_Pos            _UINT32_(6)                                          /* (ECIA_EN_CLR14) DMA CH06 Position */
#define ECIA_EN_CLR14_DMA_CH06_Msk            (_UINT32_(0x1) << ECIA_EN_CLR14_DMA_CH06_Pos)        /* (ECIA_EN_CLR14) DMA CH06 Mask */
#define ECIA_EN_CLR14_DMA_CH06(value)         (ECIA_EN_CLR14_DMA_CH06_Msk & (_UINT32_(value) << ECIA_EN_CLR14_DMA_CH06_Pos)) /* Assigment of value for DMA_CH06 in the ECIA_EN_CLR14 register */
#define ECIA_EN_CLR14_DMA_CH07_Pos            _UINT32_(7)                                          /* (ECIA_EN_CLR14) DMA CH07 Position */
#define ECIA_EN_CLR14_DMA_CH07_Msk            (_UINT32_(0x1) << ECIA_EN_CLR14_DMA_CH07_Pos)        /* (ECIA_EN_CLR14) DMA CH07 Mask */
#define ECIA_EN_CLR14_DMA_CH07(value)         (ECIA_EN_CLR14_DMA_CH07_Msk & (_UINT32_(value) << ECIA_EN_CLR14_DMA_CH07_Pos)) /* Assigment of value for DMA_CH07 in the ECIA_EN_CLR14 register */
#define ECIA_EN_CLR14_DMA_CH08_Pos            _UINT32_(8)                                          /* (ECIA_EN_CLR14) DMA CH08 Position */
#define ECIA_EN_CLR14_DMA_CH08_Msk            (_UINT32_(0x1) << ECIA_EN_CLR14_DMA_CH08_Pos)        /* (ECIA_EN_CLR14) DMA CH08 Mask */
#define ECIA_EN_CLR14_DMA_CH08(value)         (ECIA_EN_CLR14_DMA_CH08_Msk & (_UINT32_(value) << ECIA_EN_CLR14_DMA_CH08_Pos)) /* Assigment of value for DMA_CH08 in the ECIA_EN_CLR14 register */
#define ECIA_EN_CLR14_DMA_CH09_Pos            _UINT32_(9)                                          /* (ECIA_EN_CLR14) DMA CH09 Position */
#define ECIA_EN_CLR14_DMA_CH09_Msk            (_UINT32_(0x1) << ECIA_EN_CLR14_DMA_CH09_Pos)        /* (ECIA_EN_CLR14) DMA CH09 Mask */
#define ECIA_EN_CLR14_DMA_CH09(value)         (ECIA_EN_CLR14_DMA_CH09_Msk & (_UINT32_(value) << ECIA_EN_CLR14_DMA_CH09_Pos)) /* Assigment of value for DMA_CH09 in the ECIA_EN_CLR14 register */
#define ECIA_EN_CLR14_Msk                     _UINT32_(0x000003FF)                                 /* (ECIA_EN_CLR14) Register Mask  */

#define ECIA_EN_CLR14_DMA_CH_Pos              _UINT32_(0)                                          /* (ECIA_EN_CLR14 Position) DMA CHx9 */
#define ECIA_EN_CLR14_DMA_CH_Msk              (_UINT32_(0x3FF) << ECIA_EN_CLR14_DMA_CH_Pos)        /* (ECIA_EN_CLR14 Mask) DMA_CH */
#define ECIA_EN_CLR14_DMA_CH(value)           (ECIA_EN_CLR14_DMA_CH_Msk & (_UINT32_(value) << ECIA_EN_CLR14_DMA_CH_Pos)) 

/* -------- ECIA_SRC15 : (ECIA Offset: 0x8C) (R/W 32) GIRQ15 SOURCE -------- */
#define ECIA_SRC15_RESETVALUE                 _UINT32_(0x00)                                       /*  (ECIA_SRC15) GIRQ15 SOURCE  Reset Value */

#define ECIA_SRC15_UART0_Pos                  _UINT32_(0)                                          /* (ECIA_SRC15) UART0 Position */
#define ECIA_SRC15_UART0_Msk                  (_UINT32_(0x1) << ECIA_SRC15_UART0_Pos)              /* (ECIA_SRC15) UART0 Mask */
#define ECIA_SRC15_UART0(value)               (ECIA_SRC15_UART0_Msk & (_UINT32_(value) << ECIA_SRC15_UART0_Pos)) /* Assigment of value for UART0 in the ECIA_SRC15 register */
#define ECIA_SRC15_Msk                        _UINT32_(0x00000001)                                 /* (ECIA_SRC15) Register Mask  */

#define ECIA_SRC15_UART_Pos                   _UINT32_(0)                                          /* (ECIA_SRC15 Position) UARTx */
#define ECIA_SRC15_UART_Msk                   (_UINT32_(0x1) << ECIA_SRC15_UART_Pos)               /* (ECIA_SRC15 Mask) UART */
#define ECIA_SRC15_UART(value)                (ECIA_SRC15_UART_Msk & (_UINT32_(value) << ECIA_SRC15_UART_Pos)) 

/* -------- ECIA_EN_SET15 : (ECIA Offset: 0x90) (R/W 32) GIRQ15 ENABLE SET -------- */
#define ECIA_EN_SET15_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_SET15) GIRQ15 ENABLE SET  Reset Value */

#define ECIA_EN_SET15_UART0_Pos               _UINT32_(0)                                          /* (ECIA_EN_SET15) UART0 Position */
#define ECIA_EN_SET15_UART0_Msk               (_UINT32_(0x1) << ECIA_EN_SET15_UART0_Pos)           /* (ECIA_EN_SET15) UART0 Mask */
#define ECIA_EN_SET15_UART0(value)            (ECIA_EN_SET15_UART0_Msk & (_UINT32_(value) << ECIA_EN_SET15_UART0_Pos)) /* Assigment of value for UART0 in the ECIA_EN_SET15 register */
#define ECIA_EN_SET15_Msk                     _UINT32_(0x00000001)                                 /* (ECIA_EN_SET15) Register Mask  */

#define ECIA_EN_SET15_UART_Pos                _UINT32_(0)                                          /* (ECIA_EN_SET15 Position) UARTx */
#define ECIA_EN_SET15_UART_Msk                (_UINT32_(0x1) << ECIA_EN_SET15_UART_Pos)            /* (ECIA_EN_SET15 Mask) UART */
#define ECIA_EN_SET15_UART(value)             (ECIA_EN_SET15_UART_Msk & (_UINT32_(value) << ECIA_EN_SET15_UART_Pos)) 

/* -------- ECIA_RESULT15 : (ECIA Offset: 0x94) ( R/ 32) GIRQ15 RESULT -------- */
#define ECIA_RESULT15_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_RESULT15) GIRQ15 RESULT  Reset Value */

#define ECIA_RESULT15_UART0_Pos               _UINT32_(0)                                          /* (ECIA_RESULT15) UART0 Position */
#define ECIA_RESULT15_UART0_Msk               (_UINT32_(0x1) << ECIA_RESULT15_UART0_Pos)           /* (ECIA_RESULT15) UART0 Mask */
#define ECIA_RESULT15_UART0(value)            (ECIA_RESULT15_UART0_Msk & (_UINT32_(value) << ECIA_RESULT15_UART0_Pos)) /* Assigment of value for UART0 in the ECIA_RESULT15 register */
#define ECIA_RESULT15_Msk                     _UINT32_(0x00000001)                                 /* (ECIA_RESULT15) Register Mask  */

#define ECIA_RESULT15_UART_Pos                _UINT32_(0)                                          /* (ECIA_RESULT15 Position) UARTx */
#define ECIA_RESULT15_UART_Msk                (_UINT32_(0x1) << ECIA_RESULT15_UART_Pos)            /* (ECIA_RESULT15 Mask) UART */
#define ECIA_RESULT15_UART(value)             (ECIA_RESULT15_UART_Msk & (_UINT32_(value) << ECIA_RESULT15_UART_Pos)) 

/* -------- ECIA_EN_CLR15 : (ECIA Offset: 0x98) (R/W 32) GIRQ15 ENABLE CLEAR -------- */
#define ECIA_EN_CLR15_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_CLR15) GIRQ15 ENABLE CLEAR  Reset Value */

#define ECIA_EN_CLR15_UART0_Pos               _UINT32_(0)                                          /* (ECIA_EN_CLR15) UART0 Position */
#define ECIA_EN_CLR15_UART0_Msk               (_UINT32_(0x1) << ECIA_EN_CLR15_UART0_Pos)           /* (ECIA_EN_CLR15) UART0 Mask */
#define ECIA_EN_CLR15_UART0(value)            (ECIA_EN_CLR15_UART0_Msk & (_UINT32_(value) << ECIA_EN_CLR15_UART0_Pos)) /* Assigment of value for UART0 in the ECIA_EN_CLR15 register */
#define ECIA_EN_CLR15_Msk                     _UINT32_(0x00000001)                                 /* (ECIA_EN_CLR15) Register Mask  */

#define ECIA_EN_CLR15_UART_Pos                _UINT32_(0)                                          /* (ECIA_EN_CLR15 Position) UARTx */
#define ECIA_EN_CLR15_UART_Msk                (_UINT32_(0x1) << ECIA_EN_CLR15_UART_Pos)            /* (ECIA_EN_CLR15 Mask) UART */
#define ECIA_EN_CLR15_UART(value)             (ECIA_EN_CLR15_UART_Msk & (_UINT32_(value) << ECIA_EN_CLR15_UART_Pos)) 

/* -------- ECIA_SRC16 : (ECIA Offset: 0xA0) (R/W 32) GIRQ16 SOURCE -------- */
#define ECIA_SRC16_RESETVALUE                 _UINT32_(0x00)                                       /*  (ECIA_SRC16) GIRQ16 SOURCE  Reset Value */

#define ECIA_SRC16_PKE_ERR_Pos                _UINT32_(0)                                          /* (ECIA_SRC16) PKE ERR Position */
#define ECIA_SRC16_PKE_ERR_Msk                (_UINT32_(0x1) << ECIA_SRC16_PKE_ERR_Pos)            /* (ECIA_SRC16) PKE ERR Mask */
#define ECIA_SRC16_PKE_ERR(value)             (ECIA_SRC16_PKE_ERR_Msk & (_UINT32_(value) << ECIA_SRC16_PKE_ERR_Pos)) /* Assigment of value for PKE_ERR in the ECIA_SRC16 register */
#define ECIA_SRC16_PKE_END_Pos                _UINT32_(1)                                          /* (ECIA_SRC16) PKE END Position */
#define ECIA_SRC16_PKE_END_Msk                (_UINT32_(0x1) << ECIA_SRC16_PKE_END_Pos)            /* (ECIA_SRC16) PKE END Mask */
#define ECIA_SRC16_PKE_END(value)             (ECIA_SRC16_PKE_END_Msk & (_UINT32_(value) << ECIA_SRC16_PKE_END_Pos)) /* Assigment of value for PKE_END in the ECIA_SRC16 register */
#define ECIA_SRC16_RNG_Pos                    _UINT32_(2)                                          /* (ECIA_SRC16) RNG Position */
#define ECIA_SRC16_RNG_Msk                    (_UINT32_(0x1) << ECIA_SRC16_RNG_Pos)                /* (ECIA_SRC16) RNG Mask */
#define ECIA_SRC16_RNG(value)                 (ECIA_SRC16_RNG_Msk & (_UINT32_(value) << ECIA_SRC16_RNG_Pos)) /* Assigment of value for RNG in the ECIA_SRC16 register */
#define ECIA_SRC16_AES_Pos                    _UINT32_(3)                                          /* (ECIA_SRC16) AES Position */
#define ECIA_SRC16_AES_Msk                    (_UINT32_(0x1) << ECIA_SRC16_AES_Pos)                /* (ECIA_SRC16) AES Mask */
#define ECIA_SRC16_AES(value)                 (ECIA_SRC16_AES_Msk & (_UINT32_(value) << ECIA_SRC16_AES_Pos)) /* Assigment of value for AES in the ECIA_SRC16 register */
#define ECIA_SRC16_HASH_Pos                   _UINT32_(4)                                          /* (ECIA_SRC16) HASH Position */
#define ECIA_SRC16_HASH_Msk                   (_UINT32_(0x1) << ECIA_SRC16_HASH_Pos)               /* (ECIA_SRC16) HASH Mask */
#define ECIA_SRC16_HASH(value)                (ECIA_SRC16_HASH_Msk & (_UINT32_(value) << ECIA_SRC16_HASH_Pos)) /* Assigment of value for HASH in the ECIA_SRC16 register */
#define ECIA_SRC16_Msk                        _UINT32_(0x0000001F)                                 /* (ECIA_SRC16) Register Mask  */


/* -------- ECIA_EN_SET16 : (ECIA Offset: 0xA4) (R/W 32) GIRQ16 ENABLE SET -------- */
#define ECIA_EN_SET16_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_SET16) GIRQ16 ENABLE SET  Reset Value */

#define ECIA_EN_SET16_PKE_ERR_Pos             _UINT32_(0)                                          /* (ECIA_EN_SET16) PKE ERR Position */
#define ECIA_EN_SET16_PKE_ERR_Msk             (_UINT32_(0x1) << ECIA_EN_SET16_PKE_ERR_Pos)         /* (ECIA_EN_SET16) PKE ERR Mask */
#define ECIA_EN_SET16_PKE_ERR(value)          (ECIA_EN_SET16_PKE_ERR_Msk & (_UINT32_(value) << ECIA_EN_SET16_PKE_ERR_Pos)) /* Assigment of value for PKE_ERR in the ECIA_EN_SET16 register */
#define ECIA_EN_SET16_PKE_END_Pos             _UINT32_(1)                                          /* (ECIA_EN_SET16) PKE END Position */
#define ECIA_EN_SET16_PKE_END_Msk             (_UINT32_(0x1) << ECIA_EN_SET16_PKE_END_Pos)         /* (ECIA_EN_SET16) PKE END Mask */
#define ECIA_EN_SET16_PKE_END(value)          (ECIA_EN_SET16_PKE_END_Msk & (_UINT32_(value) << ECIA_EN_SET16_PKE_END_Pos)) /* Assigment of value for PKE_END in the ECIA_EN_SET16 register */
#define ECIA_EN_SET16_RNG_Pos                 _UINT32_(2)                                          /* (ECIA_EN_SET16) RNG Position */
#define ECIA_EN_SET16_RNG_Msk                 (_UINT32_(0x1) << ECIA_EN_SET16_RNG_Pos)             /* (ECIA_EN_SET16) RNG Mask */
#define ECIA_EN_SET16_RNG(value)              (ECIA_EN_SET16_RNG_Msk & (_UINT32_(value) << ECIA_EN_SET16_RNG_Pos)) /* Assigment of value for RNG in the ECIA_EN_SET16 register */
#define ECIA_EN_SET16_AES_Pos                 _UINT32_(3)                                          /* (ECIA_EN_SET16) AES Position */
#define ECIA_EN_SET16_AES_Msk                 (_UINT32_(0x1) << ECIA_EN_SET16_AES_Pos)             /* (ECIA_EN_SET16) AES Mask */
#define ECIA_EN_SET16_AES(value)              (ECIA_EN_SET16_AES_Msk & (_UINT32_(value) << ECIA_EN_SET16_AES_Pos)) /* Assigment of value for AES in the ECIA_EN_SET16 register */
#define ECIA_EN_SET16_HASH_Pos                _UINT32_(4)                                          /* (ECIA_EN_SET16) HASH Position */
#define ECIA_EN_SET16_HASH_Msk                (_UINT32_(0x1) << ECIA_EN_SET16_HASH_Pos)            /* (ECIA_EN_SET16) HASH Mask */
#define ECIA_EN_SET16_HASH(value)             (ECIA_EN_SET16_HASH_Msk & (_UINT32_(value) << ECIA_EN_SET16_HASH_Pos)) /* Assigment of value for HASH in the ECIA_EN_SET16 register */
#define ECIA_EN_SET16_Msk                     _UINT32_(0x0000001F)                                 /* (ECIA_EN_SET16) Register Mask  */


/* -------- ECIA_RESULT16 : (ECIA Offset: 0xA8) ( R/ 32) GIRQ16 RESULT -------- */
#define ECIA_RESULT16_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_RESULT16) GIRQ16 RESULT  Reset Value */

#define ECIA_RESULT16_PKE_ERR_Pos             _UINT32_(0)                                          /* (ECIA_RESULT16) PKE ERR Position */
#define ECIA_RESULT16_PKE_ERR_Msk             (_UINT32_(0x1) << ECIA_RESULT16_PKE_ERR_Pos)         /* (ECIA_RESULT16) PKE ERR Mask */
#define ECIA_RESULT16_PKE_ERR(value)          (ECIA_RESULT16_PKE_ERR_Msk & (_UINT32_(value) << ECIA_RESULT16_PKE_ERR_Pos)) /* Assigment of value for PKE_ERR in the ECIA_RESULT16 register */
#define ECIA_RESULT16_PKE_END_Pos             _UINT32_(1)                                          /* (ECIA_RESULT16) PKE END Position */
#define ECIA_RESULT16_PKE_END_Msk             (_UINT32_(0x1) << ECIA_RESULT16_PKE_END_Pos)         /* (ECIA_RESULT16) PKE END Mask */
#define ECIA_RESULT16_PKE_END(value)          (ECIA_RESULT16_PKE_END_Msk & (_UINT32_(value) << ECIA_RESULT16_PKE_END_Pos)) /* Assigment of value for PKE_END in the ECIA_RESULT16 register */
#define ECIA_RESULT16_RNG_Pos                 _UINT32_(2)                                          /* (ECIA_RESULT16) RNG Position */
#define ECIA_RESULT16_RNG_Msk                 (_UINT32_(0x1) << ECIA_RESULT16_RNG_Pos)             /* (ECIA_RESULT16) RNG Mask */
#define ECIA_RESULT16_RNG(value)              (ECIA_RESULT16_RNG_Msk & (_UINT32_(value) << ECIA_RESULT16_RNG_Pos)) /* Assigment of value for RNG in the ECIA_RESULT16 register */
#define ECIA_RESULT16_AES_Pos                 _UINT32_(3)                                          /* (ECIA_RESULT16) AES Position */
#define ECIA_RESULT16_AES_Msk                 (_UINT32_(0x1) << ECIA_RESULT16_AES_Pos)             /* (ECIA_RESULT16) AES Mask */
#define ECIA_RESULT16_AES(value)              (ECIA_RESULT16_AES_Msk & (_UINT32_(value) << ECIA_RESULT16_AES_Pos)) /* Assigment of value for AES in the ECIA_RESULT16 register */
#define ECIA_RESULT16_HASH_Pos                _UINT32_(4)                                          /* (ECIA_RESULT16) HASH Position */
#define ECIA_RESULT16_HASH_Msk                (_UINT32_(0x1) << ECIA_RESULT16_HASH_Pos)            /* (ECIA_RESULT16) HASH Mask */
#define ECIA_RESULT16_HASH(value)             (ECIA_RESULT16_HASH_Msk & (_UINT32_(value) << ECIA_RESULT16_HASH_Pos)) /* Assigment of value for HASH in the ECIA_RESULT16 register */
#define ECIA_RESULT16_Msk                     _UINT32_(0x0000001F)                                 /* (ECIA_RESULT16) Register Mask  */


/* -------- ECIA_EN_CLR16 : (ECIA Offset: 0xAC) (R/W 32) GIRQ16 ENABLE CLEAR -------- */
#define ECIA_EN_CLR16_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_CLR16) GIRQ16 ENABLE CLEAR  Reset Value */

#define ECIA_EN_CLR16_PKE_ERR_Pos             _UINT32_(0)                                          /* (ECIA_EN_CLR16) PKE ERR Position */
#define ECIA_EN_CLR16_PKE_ERR_Msk             (_UINT32_(0x1) << ECIA_EN_CLR16_PKE_ERR_Pos)         /* (ECIA_EN_CLR16) PKE ERR Mask */
#define ECIA_EN_CLR16_PKE_ERR(value)          (ECIA_EN_CLR16_PKE_ERR_Msk & (_UINT32_(value) << ECIA_EN_CLR16_PKE_ERR_Pos)) /* Assigment of value for PKE_ERR in the ECIA_EN_CLR16 register */
#define ECIA_EN_CLR16_PKE_END_Pos             _UINT32_(1)                                          /* (ECIA_EN_CLR16) PKE END Position */
#define ECIA_EN_CLR16_PKE_END_Msk             (_UINT32_(0x1) << ECIA_EN_CLR16_PKE_END_Pos)         /* (ECIA_EN_CLR16) PKE END Mask */
#define ECIA_EN_CLR16_PKE_END(value)          (ECIA_EN_CLR16_PKE_END_Msk & (_UINT32_(value) << ECIA_EN_CLR16_PKE_END_Pos)) /* Assigment of value for PKE_END in the ECIA_EN_CLR16 register */
#define ECIA_EN_CLR16_RNG_Pos                 _UINT32_(2)                                          /* (ECIA_EN_CLR16) RNG Position */
#define ECIA_EN_CLR16_RNG_Msk                 (_UINT32_(0x1) << ECIA_EN_CLR16_RNG_Pos)             /* (ECIA_EN_CLR16) RNG Mask */
#define ECIA_EN_CLR16_RNG(value)              (ECIA_EN_CLR16_RNG_Msk & (_UINT32_(value) << ECIA_EN_CLR16_RNG_Pos)) /* Assigment of value for RNG in the ECIA_EN_CLR16 register */
#define ECIA_EN_CLR16_AES_Pos                 _UINT32_(3)                                          /* (ECIA_EN_CLR16) AES Position */
#define ECIA_EN_CLR16_AES_Msk                 (_UINT32_(0x1) << ECIA_EN_CLR16_AES_Pos)             /* (ECIA_EN_CLR16) AES Mask */
#define ECIA_EN_CLR16_AES(value)              (ECIA_EN_CLR16_AES_Msk & (_UINT32_(value) << ECIA_EN_CLR16_AES_Pos)) /* Assigment of value for AES in the ECIA_EN_CLR16 register */
#define ECIA_EN_CLR16_HASH_Pos                _UINT32_(4)                                          /* (ECIA_EN_CLR16) HASH Position */
#define ECIA_EN_CLR16_HASH_Msk                (_UINT32_(0x1) << ECIA_EN_CLR16_HASH_Pos)            /* (ECIA_EN_CLR16) HASH Mask */
#define ECIA_EN_CLR16_HASH(value)             (ECIA_EN_CLR16_HASH_Msk & (_UINT32_(value) << ECIA_EN_CLR16_HASH_Pos)) /* Assigment of value for HASH in the ECIA_EN_CLR16 register */
#define ECIA_EN_CLR16_Msk                     _UINT32_(0x0000001F)                                 /* (ECIA_EN_CLR16) Register Mask  */


/* -------- ECIA_SRC17 : (ECIA Offset: 0xB4) (R/W 32) GIRQ17 SOURCE -------- */
#define ECIA_SRC17_RESETVALUE                 _UINT32_(0x00)                                       /*  (ECIA_SRC17) GIRQ17 SOURCE  Reset Value */

#define ECIA_SRC17_LED0_Pos                   _UINT32_(13)                                         /* (ECIA_SRC17) Breating LED0 Position */
#define ECIA_SRC17_LED0_Msk                   (_UINT32_(0x1) << ECIA_SRC17_LED0_Pos)               /* (ECIA_SRC17) Breating LED0 Mask */
#define ECIA_SRC17_LED0(value)                (ECIA_SRC17_LED0_Msk & (_UINT32_(value) << ECIA_SRC17_LED0_Pos)) /* Assigment of value for LED0 in the ECIA_SRC17 register */
#define ECIA_SRC17_LED1_Pos                   _UINT32_(14)                                         /* (ECIA_SRC17) Breating LED1 Position */
#define ECIA_SRC17_LED1_Msk                   (_UINT32_(0x1) << ECIA_SRC17_LED1_Pos)               /* (ECIA_SRC17) Breating LED1 Mask */
#define ECIA_SRC17_LED1(value)                (ECIA_SRC17_LED1_Msk & (_UINT32_(value) << ECIA_SRC17_LED1_Pos)) /* Assigment of value for LED1 in the ECIA_SRC17 register */
#define ECIA_SRC17_Msk                        _UINT32_(0x00006000)                                 /* (ECIA_SRC17) Register Mask  */

#define ECIA_SRC17_LED_Pos                    _UINT32_(13)                                         /* (ECIA_SRC17 Position) Breating LEDx */
#define ECIA_SRC17_LED_Msk                    (_UINT32_(0x3) << ECIA_SRC17_LED_Pos)                /* (ECIA_SRC17 Mask) LED */
#define ECIA_SRC17_LED(value)                 (ECIA_SRC17_LED_Msk & (_UINT32_(value) << ECIA_SRC17_LED_Pos)) 

/* -------- ECIA_EN_SET17 : (ECIA Offset: 0xB8) (R/W 32) GIRQ17 ENABLE SET -------- */
#define ECIA_EN_SET17_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_SET17) GIRQ17 ENABLE SET  Reset Value */

#define ECIA_EN_SET17_LED0_Pos                _UINT32_(13)                                         /* (ECIA_EN_SET17) Breating LED0 Position */
#define ECIA_EN_SET17_LED0_Msk                (_UINT32_(0x1) << ECIA_EN_SET17_LED0_Pos)            /* (ECIA_EN_SET17) Breating LED0 Mask */
#define ECIA_EN_SET17_LED0(value)             (ECIA_EN_SET17_LED0_Msk & (_UINT32_(value) << ECIA_EN_SET17_LED0_Pos)) /* Assigment of value for LED0 in the ECIA_EN_SET17 register */
#define ECIA_EN_SET17_LED1_Pos                _UINT32_(14)                                         /* (ECIA_EN_SET17) Breating LED1 Position */
#define ECIA_EN_SET17_LED1_Msk                (_UINT32_(0x1) << ECIA_EN_SET17_LED1_Pos)            /* (ECIA_EN_SET17) Breating LED1 Mask */
#define ECIA_EN_SET17_LED1(value)             (ECIA_EN_SET17_LED1_Msk & (_UINT32_(value) << ECIA_EN_SET17_LED1_Pos)) /* Assigment of value for LED1 in the ECIA_EN_SET17 register */
#define ECIA_EN_SET17_Msk                     _UINT32_(0x00006000)                                 /* (ECIA_EN_SET17) Register Mask  */

#define ECIA_EN_SET17_LED_Pos                 _UINT32_(13)                                         /* (ECIA_EN_SET17 Position) Breating LEDx */
#define ECIA_EN_SET17_LED_Msk                 (_UINT32_(0x3) << ECIA_EN_SET17_LED_Pos)             /* (ECIA_EN_SET17 Mask) LED */
#define ECIA_EN_SET17_LED(value)              (ECIA_EN_SET17_LED_Msk & (_UINT32_(value) << ECIA_EN_SET17_LED_Pos)) 

/* -------- ECIA_RESULT17 : (ECIA Offset: 0xBC) ( R/ 32) GIRQ17 RESULT -------- */
#define ECIA_RESULT17_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_RESULT17) GIRQ17 RESULT  Reset Value */

#define ECIA_RESULT17_LED0_Pos                _UINT32_(13)                                         /* (ECIA_RESULT17) Breating LED0 Position */
#define ECIA_RESULT17_LED0_Msk                (_UINT32_(0x1) << ECIA_RESULT17_LED0_Pos)            /* (ECIA_RESULT17) Breating LED0 Mask */
#define ECIA_RESULT17_LED0(value)             (ECIA_RESULT17_LED0_Msk & (_UINT32_(value) << ECIA_RESULT17_LED0_Pos)) /* Assigment of value for LED0 in the ECIA_RESULT17 register */
#define ECIA_RESULT17_LED1_Pos                _UINT32_(14)                                         /* (ECIA_RESULT17) Breating LED1 Position */
#define ECIA_RESULT17_LED1_Msk                (_UINT32_(0x1) << ECIA_RESULT17_LED1_Pos)            /* (ECIA_RESULT17) Breating LED1 Mask */
#define ECIA_RESULT17_LED1(value)             (ECIA_RESULT17_LED1_Msk & (_UINT32_(value) << ECIA_RESULT17_LED1_Pos)) /* Assigment of value for LED1 in the ECIA_RESULT17 register */
#define ECIA_RESULT17_Msk                     _UINT32_(0x00006000)                                 /* (ECIA_RESULT17) Register Mask  */

#define ECIA_RESULT17_LED_Pos                 _UINT32_(13)                                         /* (ECIA_RESULT17 Position) Breating LEDx */
#define ECIA_RESULT17_LED_Msk                 (_UINT32_(0x3) << ECIA_RESULT17_LED_Pos)             /* (ECIA_RESULT17 Mask) LED */
#define ECIA_RESULT17_LED(value)              (ECIA_RESULT17_LED_Msk & (_UINT32_(value) << ECIA_RESULT17_LED_Pos)) 

/* -------- ECIA_EN_CLR17 : (ECIA Offset: 0xC0) (R/W 32) GIRQ17 ENABLE CLEAR -------- */
#define ECIA_EN_CLR17_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_CLR17) GIRQ17 ENABLE CLEAR  Reset Value */

#define ECIA_EN_CLR17_LED0_Pos                _UINT32_(13)                                         /* (ECIA_EN_CLR17) Breating LED0 Position */
#define ECIA_EN_CLR17_LED0_Msk                (_UINT32_(0x1) << ECIA_EN_CLR17_LED0_Pos)            /* (ECIA_EN_CLR17) Breating LED0 Mask */
#define ECIA_EN_CLR17_LED0(value)             (ECIA_EN_CLR17_LED0_Msk & (_UINT32_(value) << ECIA_EN_CLR17_LED0_Pos)) /* Assigment of value for LED0 in the ECIA_EN_CLR17 register */
#define ECIA_EN_CLR17_LED1_Pos                _UINT32_(14)                                         /* (ECIA_EN_CLR17) Breating LED1 Position */
#define ECIA_EN_CLR17_LED1_Msk                (_UINT32_(0x1) << ECIA_EN_CLR17_LED1_Pos)            /* (ECIA_EN_CLR17) Breating LED1 Mask */
#define ECIA_EN_CLR17_LED1(value)             (ECIA_EN_CLR17_LED1_Msk & (_UINT32_(value) << ECIA_EN_CLR17_LED1_Pos)) /* Assigment of value for LED1 in the ECIA_EN_CLR17 register */
#define ECIA_EN_CLR17_Msk                     _UINT32_(0x00006000)                                 /* (ECIA_EN_CLR17) Register Mask  */

#define ECIA_EN_CLR17_LED_Pos                 _UINT32_(13)                                         /* (ECIA_EN_CLR17 Position) Breating LEDx */
#define ECIA_EN_CLR17_LED_Msk                 (_UINT32_(0x3) << ECIA_EN_CLR17_LED_Pos)             /* (ECIA_EN_CLR17 Mask) LED */
#define ECIA_EN_CLR17_LED(value)              (ECIA_EN_CLR17_LED_Msk & (_UINT32_(value) << ECIA_EN_CLR17_LED_Pos)) 

/* -------- ECIA_SRC18 : (ECIA Offset: 0xC8) (R/W 32) GIRQ18 SOURCE -------- */
#define ECIA_SRC18_RESETVALUE                 _UINT32_(0x00)                                       /*  (ECIA_SRC18) GIRQ18 SOURCE  Reset Value */

#define ECIA_SRC18_SPT0_Pos                   _UINT32_(0)                                          /* (ECIA_SRC18) SPT0 Position */
#define ECIA_SRC18_SPT0_Msk                   (_UINT32_(0x1) << ECIA_SRC18_SPT0_Pos)               /* (ECIA_SRC18) SPT0 Mask */
#define ECIA_SRC18_SPT0(value)                (ECIA_SRC18_SPT0_Msk & (_UINT32_(value) << ECIA_SRC18_SPT0_Pos)) /* Assigment of value for SPT0 in the ECIA_SRC18 register */
#define ECIA_SRC18_QMSPI0_Pos                 _UINT32_(1)                                          /* (ECIA_SRC18) QMSPI0 Position */
#define ECIA_SRC18_QMSPI0_Msk                 (_UINT32_(0x1) << ECIA_SRC18_QMSPI0_Pos)             /* (ECIA_SRC18) QMSPI0 Mask */
#define ECIA_SRC18_QMSPI0(value)              (ECIA_SRC18_QMSPI0_Msk & (_UINT32_(value) << ECIA_SRC18_QMSPI0_Pos)) /* Assigment of value for QMSPI0 in the ECIA_SRC18 register */
#define ECIA_SRC18_QMSPI1_Pos                 _UINT32_(2)                                          /* (ECIA_SRC18) QMSPI1 Position */
#define ECIA_SRC18_QMSPI1_Msk                 (_UINT32_(0x1) << ECIA_SRC18_QMSPI1_Pos)             /* (ECIA_SRC18) QMSPI1 Mask */
#define ECIA_SRC18_QMSPI1(value)              (ECIA_SRC18_QMSPI1_Msk & (_UINT32_(value) << ECIA_SRC18_QMSPI1_Pos)) /* Assigment of value for QMSPI1 in the ECIA_SRC18 register */
#define ECIA_SRC18_SPT1_Pos                   _UINT32_(18)                                         /* (ECIA_SRC18) SPT1 Position */
#define ECIA_SRC18_SPT1_Msk                   (_UINT32_(0x1) << ECIA_SRC18_SPT1_Pos)               /* (ECIA_SRC18) SPT1 Mask */
#define ECIA_SRC18_SPT1(value)                (ECIA_SRC18_SPT1_Msk & (_UINT32_(value) << ECIA_SRC18_SPT1_Pos)) /* Assigment of value for SPT1 in the ECIA_SRC18 register */
#define ECIA_SRC18_CCT_Pos                    _UINT32_(20)                                         /* (ECIA_SRC18) CCT Position */
#define ECIA_SRC18_CCT_Msk                    (_UINT32_(0x1) << ECIA_SRC18_CCT_Pos)                /* (ECIA_SRC18) CCT Mask */
#define ECIA_SRC18_CCT(value)                 (ECIA_SRC18_CCT_Msk & (_UINT32_(value) << ECIA_SRC18_CCT_Pos)) /* Assigment of value for CCT in the ECIA_SRC18 register */
#define ECIA_SRC18_CCT_CAP0_Pos               _UINT32_(21)                                         /* (ECIA_SRC18) CCT_CAP0 Position */
#define ECIA_SRC18_CCT_CAP0_Msk               (_UINT32_(0x1) << ECIA_SRC18_CCT_CAP0_Pos)           /* (ECIA_SRC18) CCT_CAP0 Mask */
#define ECIA_SRC18_CCT_CAP0(value)            (ECIA_SRC18_CCT_CAP0_Msk & (_UINT32_(value) << ECIA_SRC18_CCT_CAP0_Pos)) /* Assigment of value for CCT_CAP0 in the ECIA_SRC18 register */
#define ECIA_SRC18_CCT_CAP1_Pos               _UINT32_(22)                                         /* (ECIA_SRC18) CCT_CAP1 Position */
#define ECIA_SRC18_CCT_CAP1_Msk               (_UINT32_(0x1) << ECIA_SRC18_CCT_CAP1_Pos)           /* (ECIA_SRC18) CCT_CAP1 Mask */
#define ECIA_SRC18_CCT_CAP1(value)            (ECIA_SRC18_CCT_CAP1_Msk & (_UINT32_(value) << ECIA_SRC18_CCT_CAP1_Pos)) /* Assigment of value for CCT_CAP1 in the ECIA_SRC18 register */
#define ECIA_SRC18_CCT_CAP2_Pos               _UINT32_(23)                                         /* (ECIA_SRC18) CCT_CAP2 Position */
#define ECIA_SRC18_CCT_CAP2_Msk               (_UINT32_(0x1) << ECIA_SRC18_CCT_CAP2_Pos)           /* (ECIA_SRC18) CCT_CAP2 Mask */
#define ECIA_SRC18_CCT_CAP2(value)            (ECIA_SRC18_CCT_CAP2_Msk & (_UINT32_(value) << ECIA_SRC18_CCT_CAP2_Pos)) /* Assigment of value for CCT_CAP2 in the ECIA_SRC18 register */
#define ECIA_SRC18_CCT_CAP3_Pos               _UINT32_(24)                                         /* (ECIA_SRC18) CCT_CAP3 Position */
#define ECIA_SRC18_CCT_CAP3_Msk               (_UINT32_(0x1) << ECIA_SRC18_CCT_CAP3_Pos)           /* (ECIA_SRC18) CCT_CAP3 Mask */
#define ECIA_SRC18_CCT_CAP3(value)            (ECIA_SRC18_CCT_CAP3_Msk & (_UINT32_(value) << ECIA_SRC18_CCT_CAP3_Pos)) /* Assigment of value for CCT_CAP3 in the ECIA_SRC18 register */
#define ECIA_SRC18_CCT_CAP4_Pos               _UINT32_(25)                                         /* (ECIA_SRC18) CCT_CAP4 Position */
#define ECIA_SRC18_CCT_CAP4_Msk               (_UINT32_(0x1) << ECIA_SRC18_CCT_CAP4_Pos)           /* (ECIA_SRC18) CCT_CAP4 Mask */
#define ECIA_SRC18_CCT_CAP4(value)            (ECIA_SRC18_CCT_CAP4_Msk & (_UINT32_(value) << ECIA_SRC18_CCT_CAP4_Pos)) /* Assigment of value for CCT_CAP4 in the ECIA_SRC18 register */
#define ECIA_SRC18_CCT_CAP5_Pos               _UINT32_(26)                                         /* (ECIA_SRC18) CCT_CAP5 Position */
#define ECIA_SRC18_CCT_CAP5_Msk               (_UINT32_(0x1) << ECIA_SRC18_CCT_CAP5_Pos)           /* (ECIA_SRC18) CCT_CAP5 Mask */
#define ECIA_SRC18_CCT_CAP5(value)            (ECIA_SRC18_CCT_CAP5_Msk & (_UINT32_(value) << ECIA_SRC18_CCT_CAP5_Pos)) /* Assigment of value for CCT_CAP5 in the ECIA_SRC18 register */
#define ECIA_SRC18_CCT_CMP0_Pos               _UINT32_(27)                                         /* (ECIA_SRC18) CCT_CMP0 Position */
#define ECIA_SRC18_CCT_CMP0_Msk               (_UINT32_(0x1) << ECIA_SRC18_CCT_CMP0_Pos)           /* (ECIA_SRC18) CCT_CMP0 Mask */
#define ECIA_SRC18_CCT_CMP0(value)            (ECIA_SRC18_CCT_CMP0_Msk & (_UINT32_(value) << ECIA_SRC18_CCT_CMP0_Pos)) /* Assigment of value for CCT_CMP0 in the ECIA_SRC18 register */
#define ECIA_SRC18_CCT_CMP1_Pos               _UINT32_(28)                                         /* (ECIA_SRC18) CCT_CMP1 Position */
#define ECIA_SRC18_CCT_CMP1_Msk               (_UINT32_(0x1) << ECIA_SRC18_CCT_CMP1_Pos)           /* (ECIA_SRC18) CCT_CMP1 Mask */
#define ECIA_SRC18_CCT_CMP1(value)            (ECIA_SRC18_CCT_CMP1_Msk & (_UINT32_(value) << ECIA_SRC18_CCT_CMP1_Pos)) /* Assigment of value for CCT_CMP1 in the ECIA_SRC18 register */
#define ECIA_SRC18_Msk                        _UINT32_(0x1FF40007)                                 /* (ECIA_SRC18) Register Mask  */

#define ECIA_SRC18_QMSPI_Pos                  _UINT32_(1)                                          /* (ECIA_SRC18 Position) QMSPIx */
#define ECIA_SRC18_QMSPI_Msk                  (_UINT32_(0x3) << ECIA_SRC18_QMSPI_Pos)              /* (ECIA_SRC18 Mask) QMSPI */
#define ECIA_SRC18_QMSPI(value)               (ECIA_SRC18_QMSPI_Msk & (_UINT32_(value) << ECIA_SRC18_QMSPI_Pos)) 
#define ECIA_SRC18_CCT_CAP_Pos                _UINT32_(21)                                         /* (ECIA_SRC18 Position) CCT_CAPx */
#define ECIA_SRC18_CCT_CAP_Msk                (_UINT32_(0x3F) << ECIA_SRC18_CCT_CAP_Pos)           /* (ECIA_SRC18 Mask) CCT_CAP */
#define ECIA_SRC18_CCT_CAP(value)             (ECIA_SRC18_CCT_CAP_Msk & (_UINT32_(value) << ECIA_SRC18_CCT_CAP_Pos)) 
#define ECIA_SRC18_CCT_CMP_Pos                _UINT32_(27)                                         /* (ECIA_SRC18 Position) CCT_CMPx */
#define ECIA_SRC18_CCT_CMP_Msk                (_UINT32_(0x3) << ECIA_SRC18_CCT_CMP_Pos)            /* (ECIA_SRC18 Mask) CCT_CMP */
#define ECIA_SRC18_CCT_CMP(value)             (ECIA_SRC18_CCT_CMP_Msk & (_UINT32_(value) << ECIA_SRC18_CCT_CMP_Pos)) 

/* -------- ECIA_EN_SET18 : (ECIA Offset: 0xCC) (R/W 32) GIRQ18 ENABLE SET -------- */
#define ECIA_EN_SET18_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_SET18) GIRQ18 ENABLE SET  Reset Value */

#define ECIA_EN_SET18_SPT0_Pos                _UINT32_(0)                                          /* (ECIA_EN_SET18) SPT0 Position */
#define ECIA_EN_SET18_SPT0_Msk                (_UINT32_(0x1) << ECIA_EN_SET18_SPT0_Pos)            /* (ECIA_EN_SET18) SPT0 Mask */
#define ECIA_EN_SET18_SPT0(value)             (ECIA_EN_SET18_SPT0_Msk & (_UINT32_(value) << ECIA_EN_SET18_SPT0_Pos)) /* Assigment of value for SPT0 in the ECIA_EN_SET18 register */
#define ECIA_EN_SET18_QMSPI0_Pos              _UINT32_(1)                                          /* (ECIA_EN_SET18) QMSPI0 Position */
#define ECIA_EN_SET18_QMSPI0_Msk              (_UINT32_(0x1) << ECIA_EN_SET18_QMSPI0_Pos)          /* (ECIA_EN_SET18) QMSPI0 Mask */
#define ECIA_EN_SET18_QMSPI0(value)           (ECIA_EN_SET18_QMSPI0_Msk & (_UINT32_(value) << ECIA_EN_SET18_QMSPI0_Pos)) /* Assigment of value for QMSPI0 in the ECIA_EN_SET18 register */
#define ECIA_EN_SET18_QMSPI1_Pos              _UINT32_(2)                                          /* (ECIA_EN_SET18) QMSPI1 Position */
#define ECIA_EN_SET18_QMSPI1_Msk              (_UINT32_(0x1) << ECIA_EN_SET18_QMSPI1_Pos)          /* (ECIA_EN_SET18) QMSPI1 Mask */
#define ECIA_EN_SET18_QMSPI1(value)           (ECIA_EN_SET18_QMSPI1_Msk & (_UINT32_(value) << ECIA_EN_SET18_QMSPI1_Pos)) /* Assigment of value for QMSPI1 in the ECIA_EN_SET18 register */
#define ECIA_EN_SET18_SPT1_Pos                _UINT32_(18)                                         /* (ECIA_EN_SET18) SPT1 Position */
#define ECIA_EN_SET18_SPT1_Msk                (_UINT32_(0x1) << ECIA_EN_SET18_SPT1_Pos)            /* (ECIA_EN_SET18) SPT1 Mask */
#define ECIA_EN_SET18_SPT1(value)             (ECIA_EN_SET18_SPT1_Msk & (_UINT32_(value) << ECIA_EN_SET18_SPT1_Pos)) /* Assigment of value for SPT1 in the ECIA_EN_SET18 register */
#define ECIA_EN_SET18_CCT_Pos                 _UINT32_(20)                                         /* (ECIA_EN_SET18) CCT Position */
#define ECIA_EN_SET18_CCT_Msk                 (_UINT32_(0x1) << ECIA_EN_SET18_CCT_Pos)             /* (ECIA_EN_SET18) CCT Mask */
#define ECIA_EN_SET18_CCT(value)              (ECIA_EN_SET18_CCT_Msk & (_UINT32_(value) << ECIA_EN_SET18_CCT_Pos)) /* Assigment of value for CCT in the ECIA_EN_SET18 register */
#define ECIA_EN_SET18_CCT_CAP0_Pos            _UINT32_(21)                                         /* (ECIA_EN_SET18) CCT_CAP0 Position */
#define ECIA_EN_SET18_CCT_CAP0_Msk            (_UINT32_(0x1) << ECIA_EN_SET18_CCT_CAP0_Pos)        /* (ECIA_EN_SET18) CCT_CAP0 Mask */
#define ECIA_EN_SET18_CCT_CAP0(value)         (ECIA_EN_SET18_CCT_CAP0_Msk & (_UINT32_(value) << ECIA_EN_SET18_CCT_CAP0_Pos)) /* Assigment of value for CCT_CAP0 in the ECIA_EN_SET18 register */
#define ECIA_EN_SET18_CCT_CAP1_Pos            _UINT32_(22)                                         /* (ECIA_EN_SET18) CCT_CAP1 Position */
#define ECIA_EN_SET18_CCT_CAP1_Msk            (_UINT32_(0x1) << ECIA_EN_SET18_CCT_CAP1_Pos)        /* (ECIA_EN_SET18) CCT_CAP1 Mask */
#define ECIA_EN_SET18_CCT_CAP1(value)         (ECIA_EN_SET18_CCT_CAP1_Msk & (_UINT32_(value) << ECIA_EN_SET18_CCT_CAP1_Pos)) /* Assigment of value for CCT_CAP1 in the ECIA_EN_SET18 register */
#define ECIA_EN_SET18_CCT_CAP2_Pos            _UINT32_(23)                                         /* (ECIA_EN_SET18) CCT_CAP2 Position */
#define ECIA_EN_SET18_CCT_CAP2_Msk            (_UINT32_(0x1) << ECIA_EN_SET18_CCT_CAP2_Pos)        /* (ECIA_EN_SET18) CCT_CAP2 Mask */
#define ECIA_EN_SET18_CCT_CAP2(value)         (ECIA_EN_SET18_CCT_CAP2_Msk & (_UINT32_(value) << ECIA_EN_SET18_CCT_CAP2_Pos)) /* Assigment of value for CCT_CAP2 in the ECIA_EN_SET18 register */
#define ECIA_EN_SET18_CCT_CAP3_Pos            _UINT32_(24)                                         /* (ECIA_EN_SET18) CCT_CAP3 Position */
#define ECIA_EN_SET18_CCT_CAP3_Msk            (_UINT32_(0x1) << ECIA_EN_SET18_CCT_CAP3_Pos)        /* (ECIA_EN_SET18) CCT_CAP3 Mask */
#define ECIA_EN_SET18_CCT_CAP3(value)         (ECIA_EN_SET18_CCT_CAP3_Msk & (_UINT32_(value) << ECIA_EN_SET18_CCT_CAP3_Pos)) /* Assigment of value for CCT_CAP3 in the ECIA_EN_SET18 register */
#define ECIA_EN_SET18_CCT_CAP4_Pos            _UINT32_(25)                                         /* (ECIA_EN_SET18) CCT_CAP4 Position */
#define ECIA_EN_SET18_CCT_CAP4_Msk            (_UINT32_(0x1) << ECIA_EN_SET18_CCT_CAP4_Pos)        /* (ECIA_EN_SET18) CCT_CAP4 Mask */
#define ECIA_EN_SET18_CCT_CAP4(value)         (ECIA_EN_SET18_CCT_CAP4_Msk & (_UINT32_(value) << ECIA_EN_SET18_CCT_CAP4_Pos)) /* Assigment of value for CCT_CAP4 in the ECIA_EN_SET18 register */
#define ECIA_EN_SET18_CCT_CAP5_Pos            _UINT32_(26)                                         /* (ECIA_EN_SET18) CCT_CAP5 Position */
#define ECIA_EN_SET18_CCT_CAP5_Msk            (_UINT32_(0x1) << ECIA_EN_SET18_CCT_CAP5_Pos)        /* (ECIA_EN_SET18) CCT_CAP5 Mask */
#define ECIA_EN_SET18_CCT_CAP5(value)         (ECIA_EN_SET18_CCT_CAP5_Msk & (_UINT32_(value) << ECIA_EN_SET18_CCT_CAP5_Pos)) /* Assigment of value for CCT_CAP5 in the ECIA_EN_SET18 register */
#define ECIA_EN_SET18_CCT_CMP0_Pos            _UINT32_(27)                                         /* (ECIA_EN_SET18) CCT_CMP0 Position */
#define ECIA_EN_SET18_CCT_CMP0_Msk            (_UINT32_(0x1) << ECIA_EN_SET18_CCT_CMP0_Pos)        /* (ECIA_EN_SET18) CCT_CMP0 Mask */
#define ECIA_EN_SET18_CCT_CMP0(value)         (ECIA_EN_SET18_CCT_CMP0_Msk & (_UINT32_(value) << ECIA_EN_SET18_CCT_CMP0_Pos)) /* Assigment of value for CCT_CMP0 in the ECIA_EN_SET18 register */
#define ECIA_EN_SET18_CCT_CMP1_Pos            _UINT32_(28)                                         /* (ECIA_EN_SET18) CCT_CMP1 Position */
#define ECIA_EN_SET18_CCT_CMP1_Msk            (_UINT32_(0x1) << ECIA_EN_SET18_CCT_CMP1_Pos)        /* (ECIA_EN_SET18) CCT_CMP1 Mask */
#define ECIA_EN_SET18_CCT_CMP1(value)         (ECIA_EN_SET18_CCT_CMP1_Msk & (_UINT32_(value) << ECIA_EN_SET18_CCT_CMP1_Pos)) /* Assigment of value for CCT_CMP1 in the ECIA_EN_SET18 register */
#define ECIA_EN_SET18_Msk                     _UINT32_(0x1FF40007)                                 /* (ECIA_EN_SET18) Register Mask  */

#define ECIA_EN_SET18_QMSPI_Pos               _UINT32_(1)                                          /* (ECIA_EN_SET18 Position) QMSPIx */
#define ECIA_EN_SET18_QMSPI_Msk               (_UINT32_(0x3) << ECIA_EN_SET18_QMSPI_Pos)           /* (ECIA_EN_SET18 Mask) QMSPI */
#define ECIA_EN_SET18_QMSPI(value)            (ECIA_EN_SET18_QMSPI_Msk & (_UINT32_(value) << ECIA_EN_SET18_QMSPI_Pos)) 
#define ECIA_EN_SET18_CCT_CAP_Pos             _UINT32_(21)                                         /* (ECIA_EN_SET18 Position) CCT_CAPx */
#define ECIA_EN_SET18_CCT_CAP_Msk             (_UINT32_(0x3F) << ECIA_EN_SET18_CCT_CAP_Pos)        /* (ECIA_EN_SET18 Mask) CCT_CAP */
#define ECIA_EN_SET18_CCT_CAP(value)          (ECIA_EN_SET18_CCT_CAP_Msk & (_UINT32_(value) << ECIA_EN_SET18_CCT_CAP_Pos)) 
#define ECIA_EN_SET18_CCT_CMP_Pos             _UINT32_(27)                                         /* (ECIA_EN_SET18 Position) CCT_CMPx */
#define ECIA_EN_SET18_CCT_CMP_Msk             (_UINT32_(0x3) << ECIA_EN_SET18_CCT_CMP_Pos)         /* (ECIA_EN_SET18 Mask) CCT_CMP */
#define ECIA_EN_SET18_CCT_CMP(value)          (ECIA_EN_SET18_CCT_CMP_Msk & (_UINT32_(value) << ECIA_EN_SET18_CCT_CMP_Pos)) 

/* -------- ECIA_RESULT18 : (ECIA Offset: 0xD0) ( R/ 32) GIRQ18 RESULT -------- */
#define ECIA_RESULT18_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_RESULT18) GIRQ18 RESULT  Reset Value */

#define ECIA_RESULT18_SPT0_Pos                _UINT32_(0)                                          /* (ECIA_RESULT18) SPT0 Position */
#define ECIA_RESULT18_SPT0_Msk                (_UINT32_(0x1) << ECIA_RESULT18_SPT0_Pos)            /* (ECIA_RESULT18) SPT0 Mask */
#define ECIA_RESULT18_SPT0(value)             (ECIA_RESULT18_SPT0_Msk & (_UINT32_(value) << ECIA_RESULT18_SPT0_Pos)) /* Assigment of value for SPT0 in the ECIA_RESULT18 register */
#define ECIA_RESULT18_QMSPI0_Pos              _UINT32_(1)                                          /* (ECIA_RESULT18) QMSPI0 Position */
#define ECIA_RESULT18_QMSPI0_Msk              (_UINT32_(0x1) << ECIA_RESULT18_QMSPI0_Pos)          /* (ECIA_RESULT18) QMSPI0 Mask */
#define ECIA_RESULT18_QMSPI0(value)           (ECIA_RESULT18_QMSPI0_Msk & (_UINT32_(value) << ECIA_RESULT18_QMSPI0_Pos)) /* Assigment of value for QMSPI0 in the ECIA_RESULT18 register */
#define ECIA_RESULT18_QMSPI1_Pos              _UINT32_(2)                                          /* (ECIA_RESULT18) QMSPI1 Position */
#define ECIA_RESULT18_QMSPI1_Msk              (_UINT32_(0x1) << ECIA_RESULT18_QMSPI1_Pos)          /* (ECIA_RESULT18) QMSPI1 Mask */
#define ECIA_RESULT18_QMSPI1(value)           (ECIA_RESULT18_QMSPI1_Msk & (_UINT32_(value) << ECIA_RESULT18_QMSPI1_Pos)) /* Assigment of value for QMSPI1 in the ECIA_RESULT18 register */
#define ECIA_RESULT18_SPT1_Pos                _UINT32_(18)                                         /* (ECIA_RESULT18) SPT1 Position */
#define ECIA_RESULT18_SPT1_Msk                (_UINT32_(0x1) << ECIA_RESULT18_SPT1_Pos)            /* (ECIA_RESULT18) SPT1 Mask */
#define ECIA_RESULT18_SPT1(value)             (ECIA_RESULT18_SPT1_Msk & (_UINT32_(value) << ECIA_RESULT18_SPT1_Pos)) /* Assigment of value for SPT1 in the ECIA_RESULT18 register */
#define ECIA_RESULT18_CCT_Pos                 _UINT32_(20)                                         /* (ECIA_RESULT18) CCT Position */
#define ECIA_RESULT18_CCT_Msk                 (_UINT32_(0x1) << ECIA_RESULT18_CCT_Pos)             /* (ECIA_RESULT18) CCT Mask */
#define ECIA_RESULT18_CCT(value)              (ECIA_RESULT18_CCT_Msk & (_UINT32_(value) << ECIA_RESULT18_CCT_Pos)) /* Assigment of value for CCT in the ECIA_RESULT18 register */
#define ECIA_RESULT18_CCT_CAP0_Pos            _UINT32_(21)                                         /* (ECIA_RESULT18) CCT_CAP0 Position */
#define ECIA_RESULT18_CCT_CAP0_Msk            (_UINT32_(0x1) << ECIA_RESULT18_CCT_CAP0_Pos)        /* (ECIA_RESULT18) CCT_CAP0 Mask */
#define ECIA_RESULT18_CCT_CAP0(value)         (ECIA_RESULT18_CCT_CAP0_Msk & (_UINT32_(value) << ECIA_RESULT18_CCT_CAP0_Pos)) /* Assigment of value for CCT_CAP0 in the ECIA_RESULT18 register */
#define ECIA_RESULT18_CCT_CAP1_Pos            _UINT32_(22)                                         /* (ECIA_RESULT18) CCT_CAP1 Position */
#define ECIA_RESULT18_CCT_CAP1_Msk            (_UINT32_(0x1) << ECIA_RESULT18_CCT_CAP1_Pos)        /* (ECIA_RESULT18) CCT_CAP1 Mask */
#define ECIA_RESULT18_CCT_CAP1(value)         (ECIA_RESULT18_CCT_CAP1_Msk & (_UINT32_(value) << ECIA_RESULT18_CCT_CAP1_Pos)) /* Assigment of value for CCT_CAP1 in the ECIA_RESULT18 register */
#define ECIA_RESULT18_CCT_CAP2_Pos            _UINT32_(23)                                         /* (ECIA_RESULT18) CCT_CAP2 Position */
#define ECIA_RESULT18_CCT_CAP2_Msk            (_UINT32_(0x1) << ECIA_RESULT18_CCT_CAP2_Pos)        /* (ECIA_RESULT18) CCT_CAP2 Mask */
#define ECIA_RESULT18_CCT_CAP2(value)         (ECIA_RESULT18_CCT_CAP2_Msk & (_UINT32_(value) << ECIA_RESULT18_CCT_CAP2_Pos)) /* Assigment of value for CCT_CAP2 in the ECIA_RESULT18 register */
#define ECIA_RESULT18_CCT_CAP3_Pos            _UINT32_(24)                                         /* (ECIA_RESULT18) CCT_CAP3 Position */
#define ECIA_RESULT18_CCT_CAP3_Msk            (_UINT32_(0x1) << ECIA_RESULT18_CCT_CAP3_Pos)        /* (ECIA_RESULT18) CCT_CAP3 Mask */
#define ECIA_RESULT18_CCT_CAP3(value)         (ECIA_RESULT18_CCT_CAP3_Msk & (_UINT32_(value) << ECIA_RESULT18_CCT_CAP3_Pos)) /* Assigment of value for CCT_CAP3 in the ECIA_RESULT18 register */
#define ECIA_RESULT18_CCT_CAP4_Pos            _UINT32_(25)                                         /* (ECIA_RESULT18) CCT_CAP4 Position */
#define ECIA_RESULT18_CCT_CAP4_Msk            (_UINT32_(0x1) << ECIA_RESULT18_CCT_CAP4_Pos)        /* (ECIA_RESULT18) CCT_CAP4 Mask */
#define ECIA_RESULT18_CCT_CAP4(value)         (ECIA_RESULT18_CCT_CAP4_Msk & (_UINT32_(value) << ECIA_RESULT18_CCT_CAP4_Pos)) /* Assigment of value for CCT_CAP4 in the ECIA_RESULT18 register */
#define ECIA_RESULT18_CCT_CAP5_Pos            _UINT32_(26)                                         /* (ECIA_RESULT18) CCT_CAP5 Position */
#define ECIA_RESULT18_CCT_CAP5_Msk            (_UINT32_(0x1) << ECIA_RESULT18_CCT_CAP5_Pos)        /* (ECIA_RESULT18) CCT_CAP5 Mask */
#define ECIA_RESULT18_CCT_CAP5(value)         (ECIA_RESULT18_CCT_CAP5_Msk & (_UINT32_(value) << ECIA_RESULT18_CCT_CAP5_Pos)) /* Assigment of value for CCT_CAP5 in the ECIA_RESULT18 register */
#define ECIA_RESULT18_CCT_CMP0_Pos            _UINT32_(27)                                         /* (ECIA_RESULT18) CCT_CMP0 Position */
#define ECIA_RESULT18_CCT_CMP0_Msk            (_UINT32_(0x1) << ECIA_RESULT18_CCT_CMP0_Pos)        /* (ECIA_RESULT18) CCT_CMP0 Mask */
#define ECIA_RESULT18_CCT_CMP0(value)         (ECIA_RESULT18_CCT_CMP0_Msk & (_UINT32_(value) << ECIA_RESULT18_CCT_CMP0_Pos)) /* Assigment of value for CCT_CMP0 in the ECIA_RESULT18 register */
#define ECIA_RESULT18_CCT_CMP1_Pos            _UINT32_(28)                                         /* (ECIA_RESULT18) CCT_CMP1 Position */
#define ECIA_RESULT18_CCT_CMP1_Msk            (_UINT32_(0x1) << ECIA_RESULT18_CCT_CMP1_Pos)        /* (ECIA_RESULT18) CCT_CMP1 Mask */
#define ECIA_RESULT18_CCT_CMP1(value)         (ECIA_RESULT18_CCT_CMP1_Msk & (_UINT32_(value) << ECIA_RESULT18_CCT_CMP1_Pos)) /* Assigment of value for CCT_CMP1 in the ECIA_RESULT18 register */
#define ECIA_RESULT18_Msk                     _UINT32_(0x1FF40007)                                 /* (ECIA_RESULT18) Register Mask  */

#define ECIA_RESULT18_QMSPI_Pos               _UINT32_(1)                                          /* (ECIA_RESULT18 Position) QMSPIx */
#define ECIA_RESULT18_QMSPI_Msk               (_UINT32_(0x3) << ECIA_RESULT18_QMSPI_Pos)           /* (ECIA_RESULT18 Mask) QMSPI */
#define ECIA_RESULT18_QMSPI(value)            (ECIA_RESULT18_QMSPI_Msk & (_UINT32_(value) << ECIA_RESULT18_QMSPI_Pos)) 
#define ECIA_RESULT18_CCT_CAP_Pos             _UINT32_(21)                                         /* (ECIA_RESULT18 Position) CCT_CAPx */
#define ECIA_RESULT18_CCT_CAP_Msk             (_UINT32_(0x3F) << ECIA_RESULT18_CCT_CAP_Pos)        /* (ECIA_RESULT18 Mask) CCT_CAP */
#define ECIA_RESULT18_CCT_CAP(value)          (ECIA_RESULT18_CCT_CAP_Msk & (_UINT32_(value) << ECIA_RESULT18_CCT_CAP_Pos)) 
#define ECIA_RESULT18_CCT_CMP_Pos             _UINT32_(27)                                         /* (ECIA_RESULT18 Position) CCT_CMPx */
#define ECIA_RESULT18_CCT_CMP_Msk             (_UINT32_(0x3) << ECIA_RESULT18_CCT_CMP_Pos)         /* (ECIA_RESULT18 Mask) CCT_CMP */
#define ECIA_RESULT18_CCT_CMP(value)          (ECIA_RESULT18_CCT_CMP_Msk & (_UINT32_(value) << ECIA_RESULT18_CCT_CMP_Pos)) 

/* -------- ECIA_EN_CLR18 : (ECIA Offset: 0xD4) (R/W 32) GIRQ18 ENABLE CLEAR -------- */
#define ECIA_EN_CLR18_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_CLR18) GIRQ18 ENABLE CLEAR  Reset Value */

#define ECIA_EN_CLR18_SPT0_Pos                _UINT32_(0)                                          /* (ECIA_EN_CLR18) SPT0 Position */
#define ECIA_EN_CLR18_SPT0_Msk                (_UINT32_(0x1) << ECIA_EN_CLR18_SPT0_Pos)            /* (ECIA_EN_CLR18) SPT0 Mask */
#define ECIA_EN_CLR18_SPT0(value)             (ECIA_EN_CLR18_SPT0_Msk & (_UINT32_(value) << ECIA_EN_CLR18_SPT0_Pos)) /* Assigment of value for SPT0 in the ECIA_EN_CLR18 register */
#define ECIA_EN_CLR18_QMSPI0_Pos              _UINT32_(1)                                          /* (ECIA_EN_CLR18) QMSPI0 Position */
#define ECIA_EN_CLR18_QMSPI0_Msk              (_UINT32_(0x1) << ECIA_EN_CLR18_QMSPI0_Pos)          /* (ECIA_EN_CLR18) QMSPI0 Mask */
#define ECIA_EN_CLR18_QMSPI0(value)           (ECIA_EN_CLR18_QMSPI0_Msk & (_UINT32_(value) << ECIA_EN_CLR18_QMSPI0_Pos)) /* Assigment of value for QMSPI0 in the ECIA_EN_CLR18 register */
#define ECIA_EN_CLR18_QMSPI1_Pos              _UINT32_(2)                                          /* (ECIA_EN_CLR18) QMSPI1 Position */
#define ECIA_EN_CLR18_QMSPI1_Msk              (_UINT32_(0x1) << ECIA_EN_CLR18_QMSPI1_Pos)          /* (ECIA_EN_CLR18) QMSPI1 Mask */
#define ECIA_EN_CLR18_QMSPI1(value)           (ECIA_EN_CLR18_QMSPI1_Msk & (_UINT32_(value) << ECIA_EN_CLR18_QMSPI1_Pos)) /* Assigment of value for QMSPI1 in the ECIA_EN_CLR18 register */
#define ECIA_EN_CLR18_SPT1_Pos                _UINT32_(18)                                         /* (ECIA_EN_CLR18) SPT1 Position */
#define ECIA_EN_CLR18_SPT1_Msk                (_UINT32_(0x1) << ECIA_EN_CLR18_SPT1_Pos)            /* (ECIA_EN_CLR18) SPT1 Mask */
#define ECIA_EN_CLR18_SPT1(value)             (ECIA_EN_CLR18_SPT1_Msk & (_UINT32_(value) << ECIA_EN_CLR18_SPT1_Pos)) /* Assigment of value for SPT1 in the ECIA_EN_CLR18 register */
#define ECIA_EN_CLR18_CCT_Pos                 _UINT32_(20)                                         /* (ECIA_EN_CLR18) CCT Position */
#define ECIA_EN_CLR18_CCT_Msk                 (_UINT32_(0x1) << ECIA_EN_CLR18_CCT_Pos)             /* (ECIA_EN_CLR18) CCT Mask */
#define ECIA_EN_CLR18_CCT(value)              (ECIA_EN_CLR18_CCT_Msk & (_UINT32_(value) << ECIA_EN_CLR18_CCT_Pos)) /* Assigment of value for CCT in the ECIA_EN_CLR18 register */
#define ECIA_EN_CLR18_CCT_CAP0_Pos            _UINT32_(21)                                         /* (ECIA_EN_CLR18) CCT_CAP0 Position */
#define ECIA_EN_CLR18_CCT_CAP0_Msk            (_UINT32_(0x1) << ECIA_EN_CLR18_CCT_CAP0_Pos)        /* (ECIA_EN_CLR18) CCT_CAP0 Mask */
#define ECIA_EN_CLR18_CCT_CAP0(value)         (ECIA_EN_CLR18_CCT_CAP0_Msk & (_UINT32_(value) << ECIA_EN_CLR18_CCT_CAP0_Pos)) /* Assigment of value for CCT_CAP0 in the ECIA_EN_CLR18 register */
#define ECIA_EN_CLR18_CCT_CAP1_Pos            _UINT32_(22)                                         /* (ECIA_EN_CLR18) CCT_CAP1 Position */
#define ECIA_EN_CLR18_CCT_CAP1_Msk            (_UINT32_(0x1) << ECIA_EN_CLR18_CCT_CAP1_Pos)        /* (ECIA_EN_CLR18) CCT_CAP1 Mask */
#define ECIA_EN_CLR18_CCT_CAP1(value)         (ECIA_EN_CLR18_CCT_CAP1_Msk & (_UINT32_(value) << ECIA_EN_CLR18_CCT_CAP1_Pos)) /* Assigment of value for CCT_CAP1 in the ECIA_EN_CLR18 register */
#define ECIA_EN_CLR18_CCT_CAP2_Pos            _UINT32_(23)                                         /* (ECIA_EN_CLR18) CCT_CAP2 Position */
#define ECIA_EN_CLR18_CCT_CAP2_Msk            (_UINT32_(0x1) << ECIA_EN_CLR18_CCT_CAP2_Pos)        /* (ECIA_EN_CLR18) CCT_CAP2 Mask */
#define ECIA_EN_CLR18_CCT_CAP2(value)         (ECIA_EN_CLR18_CCT_CAP2_Msk & (_UINT32_(value) << ECIA_EN_CLR18_CCT_CAP2_Pos)) /* Assigment of value for CCT_CAP2 in the ECIA_EN_CLR18 register */
#define ECIA_EN_CLR18_CCT_CAP3_Pos            _UINT32_(24)                                         /* (ECIA_EN_CLR18) CCT_CAP3 Position */
#define ECIA_EN_CLR18_CCT_CAP3_Msk            (_UINT32_(0x1) << ECIA_EN_CLR18_CCT_CAP3_Pos)        /* (ECIA_EN_CLR18) CCT_CAP3 Mask */
#define ECIA_EN_CLR18_CCT_CAP3(value)         (ECIA_EN_CLR18_CCT_CAP3_Msk & (_UINT32_(value) << ECIA_EN_CLR18_CCT_CAP3_Pos)) /* Assigment of value for CCT_CAP3 in the ECIA_EN_CLR18 register */
#define ECIA_EN_CLR18_CCT_CAP4_Pos            _UINT32_(25)                                         /* (ECIA_EN_CLR18) CCT_CAP4 Position */
#define ECIA_EN_CLR18_CCT_CAP4_Msk            (_UINT32_(0x1) << ECIA_EN_CLR18_CCT_CAP4_Pos)        /* (ECIA_EN_CLR18) CCT_CAP4 Mask */
#define ECIA_EN_CLR18_CCT_CAP4(value)         (ECIA_EN_CLR18_CCT_CAP4_Msk & (_UINT32_(value) << ECIA_EN_CLR18_CCT_CAP4_Pos)) /* Assigment of value for CCT_CAP4 in the ECIA_EN_CLR18 register */
#define ECIA_EN_CLR18_CCT_CAP5_Pos            _UINT32_(26)                                         /* (ECIA_EN_CLR18) CCT_CAP5 Position */
#define ECIA_EN_CLR18_CCT_CAP5_Msk            (_UINT32_(0x1) << ECIA_EN_CLR18_CCT_CAP5_Pos)        /* (ECIA_EN_CLR18) CCT_CAP5 Mask */
#define ECIA_EN_CLR18_CCT_CAP5(value)         (ECIA_EN_CLR18_CCT_CAP5_Msk & (_UINT32_(value) << ECIA_EN_CLR18_CCT_CAP5_Pos)) /* Assigment of value for CCT_CAP5 in the ECIA_EN_CLR18 register */
#define ECIA_EN_CLR18_CCT_CMP0_Pos            _UINT32_(27)                                         /* (ECIA_EN_CLR18) CCT_CMP0 Position */
#define ECIA_EN_CLR18_CCT_CMP0_Msk            (_UINT32_(0x1) << ECIA_EN_CLR18_CCT_CMP0_Pos)        /* (ECIA_EN_CLR18) CCT_CMP0 Mask */
#define ECIA_EN_CLR18_CCT_CMP0(value)         (ECIA_EN_CLR18_CCT_CMP0_Msk & (_UINT32_(value) << ECIA_EN_CLR18_CCT_CMP0_Pos)) /* Assigment of value for CCT_CMP0 in the ECIA_EN_CLR18 register */
#define ECIA_EN_CLR18_CCT_CMP1_Pos            _UINT32_(28)                                         /* (ECIA_EN_CLR18) CCT_CMP1 Position */
#define ECIA_EN_CLR18_CCT_CMP1_Msk            (_UINT32_(0x1) << ECIA_EN_CLR18_CCT_CMP1_Pos)        /* (ECIA_EN_CLR18) CCT_CMP1 Mask */
#define ECIA_EN_CLR18_CCT_CMP1(value)         (ECIA_EN_CLR18_CCT_CMP1_Msk & (_UINT32_(value) << ECIA_EN_CLR18_CCT_CMP1_Pos)) /* Assigment of value for CCT_CMP1 in the ECIA_EN_CLR18 register */
#define ECIA_EN_CLR18_Msk                     _UINT32_(0x1FF40007)                                 /* (ECIA_EN_CLR18) Register Mask  */

#define ECIA_EN_CLR18_QMSPI_Pos               _UINT32_(1)                                          /* (ECIA_EN_CLR18 Position) QMSPIx */
#define ECIA_EN_CLR18_QMSPI_Msk               (_UINT32_(0x3) << ECIA_EN_CLR18_QMSPI_Pos)           /* (ECIA_EN_CLR18 Mask) QMSPI */
#define ECIA_EN_CLR18_QMSPI(value)            (ECIA_EN_CLR18_QMSPI_Msk & (_UINT32_(value) << ECIA_EN_CLR18_QMSPI_Pos)) 
#define ECIA_EN_CLR18_CCT_CAP_Pos             _UINT32_(21)                                         /* (ECIA_EN_CLR18 Position) CCT_CAPx */
#define ECIA_EN_CLR18_CCT_CAP_Msk             (_UINT32_(0x3F) << ECIA_EN_CLR18_CCT_CAP_Pos)        /* (ECIA_EN_CLR18 Mask) CCT_CAP */
#define ECIA_EN_CLR18_CCT_CAP(value)          (ECIA_EN_CLR18_CCT_CAP_Msk & (_UINT32_(value) << ECIA_EN_CLR18_CCT_CAP_Pos)) 
#define ECIA_EN_CLR18_CCT_CMP_Pos             _UINT32_(27)                                         /* (ECIA_EN_CLR18 Position) CCT_CMPx */
#define ECIA_EN_CLR18_CCT_CMP_Msk             (_UINT32_(0x3) << ECIA_EN_CLR18_CCT_CMP_Pos)         /* (ECIA_EN_CLR18 Mask) CCT_CMP */
#define ECIA_EN_CLR18_CCT_CMP(value)          (ECIA_EN_CLR18_CCT_CMP_Msk & (_UINT32_(value) << ECIA_EN_CLR18_CCT_CMP_Pos)) 

/* -------- ECIA_SRC19 : (ECIA Offset: 0xDC) (R/W 32) GIRQ19 SOURCE -------- */
#define ECIA_SRC19_RESETVALUE                 _UINT32_(0x00)                                       /*  (ECIA_SRC19) GIRQ19 SOURCE  Reset Value */

#define ECIA_SRC19_Msk                        _UINT32_(0x00000000)                                 /* (ECIA_SRC19) Register Mask  */


/* -------- ECIA_EN_SET19 : (ECIA Offset: 0xE0) (R/W 32) GIRQ19 ENABLE SET -------- */
#define ECIA_EN_SET19_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_SET19) GIRQ19 ENABLE SET  Reset Value */

#define ECIA_EN_SET19_Msk                     _UINT32_(0x00000000)                                 /* (ECIA_EN_SET19) Register Mask  */


/* -------- ECIA_RESULT19 : (ECIA Offset: 0xE4) ( R/ 32) GIRQ19 RESULT -------- */
#define ECIA_RESULT19_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_RESULT19) GIRQ19 RESULT  Reset Value */

#define ECIA_RESULT19_Msk                     _UINT32_(0x00000000)                                 /* (ECIA_RESULT19) Register Mask  */


/* -------- ECIA_EN_CLR19 : (ECIA Offset: 0xE8) (R/W 32) GIRQ19 ENABLE CLEAR -------- */
#define ECIA_EN_CLR19_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_CLR19) GIRQ19 ENABLE CLEAR  Reset Value */

#define ECIA_EN_CLR19_Msk                     _UINT32_(0x00000000)                                 /* (ECIA_EN_CLR19) Register Mask  */


/* -------- ECIA_SRC20 : (ECIA Offset: 0xF0) (R/W 32) GIRQ20 SOURCE -------- */
#define ECIA_SRC20_RESETVALUE                 _UINT32_(0x00)                                       /*  (ECIA_SRC20) GIRQ20 SOURCE  Reset Value */

#define ECIA_SRC20_IMSPI_Pos                  _UINT32_(8)                                          /* (ECIA_SRC20) IMSPI Position */
#define ECIA_SRC20_IMSPI_Msk                  (_UINT32_(0x1) << ECIA_SRC20_IMSPI_Pos)              /* (ECIA_SRC20) IMSPI Mask */
#define ECIA_SRC20_IMSPI(value)               (ECIA_SRC20_IMSPI_Msk & (_UINT32_(value) << ECIA_SRC20_IMSPI_Pos)) /* Assigment of value for IMSPI in the ECIA_SRC20 register */
#define ECIA_SRC20_CLK_MON_Pos                _UINT32_(9)                                          /* (ECIA_SRC20) CLK_MON Position */
#define ECIA_SRC20_CLK_MON_Msk                (_UINT32_(0x1) << ECIA_SRC20_CLK_MON_Pos)            /* (ECIA_SRC20) CLK_MON Mask */
#define ECIA_SRC20_CLK_MON(value)             (ECIA_SRC20_CLK_MON_Msk & (_UINT32_(value) << ECIA_SRC20_CLK_MON_Pos)) /* Assigment of value for CLK_MON in the ECIA_SRC20 register */
#define ECIA_SRC20_VTR1_PAD_MON_Pos           _UINT32_(10)                                         /* (ECIA_SRC20) VTR1_PAD_MON Position */
#define ECIA_SRC20_VTR1_PAD_MON_Msk           (_UINT32_(0x1) << ECIA_SRC20_VTR1_PAD_MON_Pos)       /* (ECIA_SRC20) VTR1_PAD_MON Mask */
#define ECIA_SRC20_VTR1_PAD_MON(value)        (ECIA_SRC20_VTR1_PAD_MON_Msk & (_UINT32_(value) << ECIA_SRC20_VTR1_PAD_MON_Pos)) /* Assigment of value for VTR1_PAD_MON in the ECIA_SRC20 register */
#define ECIA_SRC20_VTR2_PAD_MON_Pos           _UINT32_(11)                                         /* (ECIA_SRC20) VTR2_PAD_MON Position */
#define ECIA_SRC20_VTR2_PAD_MON_Msk           (_UINT32_(0x1) << ECIA_SRC20_VTR2_PAD_MON_Pos)       /* (ECIA_SRC20) VTR2_PAD_MON Mask */
#define ECIA_SRC20_VTR2_PAD_MON(value)        (ECIA_SRC20_VTR2_PAD_MON_Msk & (_UINT32_(value) << ECIA_SRC20_VTR2_PAD_MON_Pos)) /* Assigment of value for VTR2_PAD_MON in the ECIA_SRC20 register */
#define ECIA_SRC20_Msk                        _UINT32_(0x00000F00)                                 /* (ECIA_SRC20) Register Mask  */


/* -------- ECIA_EN_SET20 : (ECIA Offset: 0xF4) (R/W 32) GIRQ20 ENABLE SET -------- */
#define ECIA_EN_SET20_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_SET20) GIRQ20 ENABLE SET  Reset Value */

#define ECIA_EN_SET20_IMSPI_Pos               _UINT32_(8)                                          /* (ECIA_EN_SET20) IMSPI Position */
#define ECIA_EN_SET20_IMSPI_Msk               (_UINT32_(0x1) << ECIA_EN_SET20_IMSPI_Pos)           /* (ECIA_EN_SET20) IMSPI Mask */
#define ECIA_EN_SET20_IMSPI(value)            (ECIA_EN_SET20_IMSPI_Msk & (_UINT32_(value) << ECIA_EN_SET20_IMSPI_Pos)) /* Assigment of value for IMSPI in the ECIA_EN_SET20 register */
#define ECIA_EN_SET20_CLK_MON_Pos             _UINT32_(9)                                          /* (ECIA_EN_SET20) CLK_MON Position */
#define ECIA_EN_SET20_CLK_MON_Msk             (_UINT32_(0x1) << ECIA_EN_SET20_CLK_MON_Pos)         /* (ECIA_EN_SET20) CLK_MON Mask */
#define ECIA_EN_SET20_CLK_MON(value)          (ECIA_EN_SET20_CLK_MON_Msk & (_UINT32_(value) << ECIA_EN_SET20_CLK_MON_Pos)) /* Assigment of value for CLK_MON in the ECIA_EN_SET20 register */
#define ECIA_EN_SET20_VTR1_PAD_MON_Pos        _UINT32_(10)                                         /* (ECIA_EN_SET20) VTR1_PAD_MON Position */
#define ECIA_EN_SET20_VTR1_PAD_MON_Msk        (_UINT32_(0x1) << ECIA_EN_SET20_VTR1_PAD_MON_Pos)    /* (ECIA_EN_SET20) VTR1_PAD_MON Mask */
#define ECIA_EN_SET20_VTR1_PAD_MON(value)     (ECIA_EN_SET20_VTR1_PAD_MON_Msk & (_UINT32_(value) << ECIA_EN_SET20_VTR1_PAD_MON_Pos)) /* Assigment of value for VTR1_PAD_MON in the ECIA_EN_SET20 register */
#define ECIA_EN_SET20_VTR2_PAD_MON_Pos        _UINT32_(11)                                         /* (ECIA_EN_SET20) VTR2_PAD_MON Position */
#define ECIA_EN_SET20_VTR2_PAD_MON_Msk        (_UINT32_(0x1) << ECIA_EN_SET20_VTR2_PAD_MON_Pos)    /* (ECIA_EN_SET20) VTR2_PAD_MON Mask */
#define ECIA_EN_SET20_VTR2_PAD_MON(value)     (ECIA_EN_SET20_VTR2_PAD_MON_Msk & (_UINT32_(value) << ECIA_EN_SET20_VTR2_PAD_MON_Pos)) /* Assigment of value for VTR2_PAD_MON in the ECIA_EN_SET20 register */
#define ECIA_EN_SET20_Msk                     _UINT32_(0x00000F00)                                 /* (ECIA_EN_SET20) Register Mask  */


/* -------- ECIA_RESULT20 : (ECIA Offset: 0xF8) ( R/ 32) GIRQ20 RESULT -------- */
#define ECIA_RESULT20_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_RESULT20) GIRQ20 RESULT  Reset Value */

#define ECIA_RESULT20_IMSPI_Pos               _UINT32_(8)                                          /* (ECIA_RESULT20) IMSPI Position */
#define ECIA_RESULT20_IMSPI_Msk               (_UINT32_(0x1) << ECIA_RESULT20_IMSPI_Pos)           /* (ECIA_RESULT20) IMSPI Mask */
#define ECIA_RESULT20_IMSPI(value)            (ECIA_RESULT20_IMSPI_Msk & (_UINT32_(value) << ECIA_RESULT20_IMSPI_Pos)) /* Assigment of value for IMSPI in the ECIA_RESULT20 register */
#define ECIA_RESULT20_CLK_MON_Pos             _UINT32_(9)                                          /* (ECIA_RESULT20) CLK_MON Position */
#define ECIA_RESULT20_CLK_MON_Msk             (_UINT32_(0x1) << ECIA_RESULT20_CLK_MON_Pos)         /* (ECIA_RESULT20) CLK_MON Mask */
#define ECIA_RESULT20_CLK_MON(value)          (ECIA_RESULT20_CLK_MON_Msk & (_UINT32_(value) << ECIA_RESULT20_CLK_MON_Pos)) /* Assigment of value for CLK_MON in the ECIA_RESULT20 register */
#define ECIA_RESULT20_VTR1_PAD_MON_Pos        _UINT32_(10)                                         /* (ECIA_RESULT20) VTR1_PAD_MON Position */
#define ECIA_RESULT20_VTR1_PAD_MON_Msk        (_UINT32_(0x1) << ECIA_RESULT20_VTR1_PAD_MON_Pos)    /* (ECIA_RESULT20) VTR1_PAD_MON Mask */
#define ECIA_RESULT20_VTR1_PAD_MON(value)     (ECIA_RESULT20_VTR1_PAD_MON_Msk & (_UINT32_(value) << ECIA_RESULT20_VTR1_PAD_MON_Pos)) /* Assigment of value for VTR1_PAD_MON in the ECIA_RESULT20 register */
#define ECIA_RESULT20_VTR2_PAD_MON_Pos        _UINT32_(11)                                         /* (ECIA_RESULT20) VTR2_PAD_MON Position */
#define ECIA_RESULT20_VTR2_PAD_MON_Msk        (_UINT32_(0x1) << ECIA_RESULT20_VTR2_PAD_MON_Pos)    /* (ECIA_RESULT20) VTR2_PAD_MON Mask */
#define ECIA_RESULT20_VTR2_PAD_MON(value)     (ECIA_RESULT20_VTR2_PAD_MON_Msk & (_UINT32_(value) << ECIA_RESULT20_VTR2_PAD_MON_Pos)) /* Assigment of value for VTR2_PAD_MON in the ECIA_RESULT20 register */
#define ECIA_RESULT20_Msk                     _UINT32_(0x00000F00)                                 /* (ECIA_RESULT20) Register Mask  */


/* -------- ECIA_EN_CLR20 : (ECIA Offset: 0xFC) (R/W 32) GIRQ20 ENABLE CLEAR -------- */
#define ECIA_EN_CLR20_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_CLR20) GIRQ20 ENABLE CLEAR  Reset Value */

#define ECIA_EN_CLR20_IMSPI_Pos               _UINT32_(8)                                          /* (ECIA_EN_CLR20) IMSPI Position */
#define ECIA_EN_CLR20_IMSPI_Msk               (_UINT32_(0x1) << ECIA_EN_CLR20_IMSPI_Pos)           /* (ECIA_EN_CLR20) IMSPI Mask */
#define ECIA_EN_CLR20_IMSPI(value)            (ECIA_EN_CLR20_IMSPI_Msk & (_UINT32_(value) << ECIA_EN_CLR20_IMSPI_Pos)) /* Assigment of value for IMSPI in the ECIA_EN_CLR20 register */
#define ECIA_EN_CLR20_CLK_MON_Pos             _UINT32_(9)                                          /* (ECIA_EN_CLR20) CLK_MON Position */
#define ECIA_EN_CLR20_CLK_MON_Msk             (_UINT32_(0x1) << ECIA_EN_CLR20_CLK_MON_Pos)         /* (ECIA_EN_CLR20) CLK_MON Mask */
#define ECIA_EN_CLR20_CLK_MON(value)          (ECIA_EN_CLR20_CLK_MON_Msk & (_UINT32_(value) << ECIA_EN_CLR20_CLK_MON_Pos)) /* Assigment of value for CLK_MON in the ECIA_EN_CLR20 register */
#define ECIA_EN_CLR20_VTR1_PAD_MON_Pos        _UINT32_(10)                                         /* (ECIA_EN_CLR20) VTR1_PAD_MON Position */
#define ECIA_EN_CLR20_VTR1_PAD_MON_Msk        (_UINT32_(0x1) << ECIA_EN_CLR20_VTR1_PAD_MON_Pos)    /* (ECIA_EN_CLR20) VTR1_PAD_MON Mask */
#define ECIA_EN_CLR20_VTR1_PAD_MON(value)     (ECIA_EN_CLR20_VTR1_PAD_MON_Msk & (_UINT32_(value) << ECIA_EN_CLR20_VTR1_PAD_MON_Pos)) /* Assigment of value for VTR1_PAD_MON in the ECIA_EN_CLR20 register */
#define ECIA_EN_CLR20_VTR2_PAD_MON_Pos        _UINT32_(11)                                         /* (ECIA_EN_CLR20) VTR2_PAD_MON Position */
#define ECIA_EN_CLR20_VTR2_PAD_MON_Msk        (_UINT32_(0x1) << ECIA_EN_CLR20_VTR2_PAD_MON_Pos)    /* (ECIA_EN_CLR20) VTR2_PAD_MON Mask */
#define ECIA_EN_CLR20_VTR2_PAD_MON(value)     (ECIA_EN_CLR20_VTR2_PAD_MON_Msk & (_UINT32_(value) << ECIA_EN_CLR20_VTR2_PAD_MON_Pos)) /* Assigment of value for VTR2_PAD_MON in the ECIA_EN_CLR20 register */
#define ECIA_EN_CLR20_Msk                     _UINT32_(0x00000F00)                                 /* (ECIA_EN_CLR20) Register Mask  */


/* -------- ECIA_SRC21 : (ECIA Offset: 0x104) (R/W 32) GIRQ21 SOURCE -------- */
#define ECIA_SRC21_RESETVALUE                 _UINT32_(0x00)                                       /*  (ECIA_SRC21) GIRQ21 SOURCE  Reset Value */

#define ECIA_SRC21_WDT_Pos                    _UINT32_(2)                                          /* (ECIA_SRC21) WDT Position */
#define ECIA_SRC21_WDT_Msk                    (_UINT32_(0x1) << ECIA_SRC21_WDT_Pos)                /* (ECIA_SRC21) WDT Mask */
#define ECIA_SRC21_WDT(value)                 (ECIA_SRC21_WDT_Msk & (_UINT32_(value) << ECIA_SRC21_WDT_Pos)) /* Assigment of value for WDT in the ECIA_SRC21 register */
#define ECIA_SRC21_EMC_Pos                    _UINT32_(24)                                         /* (ECIA_SRC21) EMC Position */
#define ECIA_SRC21_EMC_Msk                    (_UINT32_(0x1) << ECIA_SRC21_EMC_Pos)                /* (ECIA_SRC21) EMC Mask */
#define ECIA_SRC21_EMC(value)                 (ECIA_SRC21_EMC_Msk & (_UINT32_(value) << ECIA_SRC21_EMC_Pos)) /* Assigment of value for EMC in the ECIA_SRC21 register */
#define ECIA_SRC21_Msk                        _UINT32_(0x01000004)                                 /* (ECIA_SRC21) Register Mask  */


/* -------- ECIA_EN_SET21 : (ECIA Offset: 0x108) (R/W 32) GIRQ21 ENABLE SET -------- */
#define ECIA_EN_SET21_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_SET21) GIRQ21 ENABLE SET  Reset Value */

#define ECIA_EN_SET21_WDT_Pos                 _UINT32_(2)                                          /* (ECIA_EN_SET21) WDT Position */
#define ECIA_EN_SET21_WDT_Msk                 (_UINT32_(0x1) << ECIA_EN_SET21_WDT_Pos)             /* (ECIA_EN_SET21) WDT Mask */
#define ECIA_EN_SET21_WDT(value)              (ECIA_EN_SET21_WDT_Msk & (_UINT32_(value) << ECIA_EN_SET21_WDT_Pos)) /* Assigment of value for WDT in the ECIA_EN_SET21 register */
#define ECIA_EN_SET21_EMC_Pos                 _UINT32_(24)                                         /* (ECIA_EN_SET21) EMC Position */
#define ECIA_EN_SET21_EMC_Msk                 (_UINT32_(0x1) << ECIA_EN_SET21_EMC_Pos)             /* (ECIA_EN_SET21) EMC Mask */
#define ECIA_EN_SET21_EMC(value)              (ECIA_EN_SET21_EMC_Msk & (_UINT32_(value) << ECIA_EN_SET21_EMC_Pos)) /* Assigment of value for EMC in the ECIA_EN_SET21 register */
#define ECIA_EN_SET21_Msk                     _UINT32_(0x01000004)                                 /* (ECIA_EN_SET21) Register Mask  */


/* -------- ECIA_RESULT21 : (ECIA Offset: 0x10C) ( R/ 32) GIRQ21 RESULT -------- */
#define ECIA_RESULT21_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_RESULT21) GIRQ21 RESULT  Reset Value */

#define ECIA_RESULT21_WDT_Pos                 _UINT32_(2)                                          /* (ECIA_RESULT21) WDT Position */
#define ECIA_RESULT21_WDT_Msk                 (_UINT32_(0x1) << ECIA_RESULT21_WDT_Pos)             /* (ECIA_RESULT21) WDT Mask */
#define ECIA_RESULT21_WDT(value)              (ECIA_RESULT21_WDT_Msk & (_UINT32_(value) << ECIA_RESULT21_WDT_Pos)) /* Assigment of value for WDT in the ECIA_RESULT21 register */
#define ECIA_RESULT21_EMC_Pos                 _UINT32_(24)                                         /* (ECIA_RESULT21) EMC Position */
#define ECIA_RESULT21_EMC_Msk                 (_UINT32_(0x1) << ECIA_RESULT21_EMC_Pos)             /* (ECIA_RESULT21) EMC Mask */
#define ECIA_RESULT21_EMC(value)              (ECIA_RESULT21_EMC_Msk & (_UINT32_(value) << ECIA_RESULT21_EMC_Pos)) /* Assigment of value for EMC in the ECIA_RESULT21 register */
#define ECIA_RESULT21_Msk                     _UINT32_(0x01000004)                                 /* (ECIA_RESULT21) Register Mask  */


/* -------- ECIA_EN_CLR21 : (ECIA Offset: 0x110) (R/W 32) GIRQ21 ENABLE CLEAR -------- */
#define ECIA_EN_CLR21_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_CLR21) GIRQ21 ENABLE CLEAR  Reset Value */

#define ECIA_EN_CLR21_WDT_Pos                 _UINT32_(2)                                          /* (ECIA_EN_CLR21) WDT Position */
#define ECIA_EN_CLR21_WDT_Msk                 (_UINT32_(0x1) << ECIA_EN_CLR21_WDT_Pos)             /* (ECIA_EN_CLR21) WDT Mask */
#define ECIA_EN_CLR21_WDT(value)              (ECIA_EN_CLR21_WDT_Msk & (_UINT32_(value) << ECIA_EN_CLR21_WDT_Pos)) /* Assigment of value for WDT in the ECIA_EN_CLR21 register */
#define ECIA_EN_CLR21_EMC_Pos                 _UINT32_(24)                                         /* (ECIA_EN_CLR21) EMC Position */
#define ECIA_EN_CLR21_EMC_Msk                 (_UINT32_(0x1) << ECIA_EN_CLR21_EMC_Pos)             /* (ECIA_EN_CLR21) EMC Mask */
#define ECIA_EN_CLR21_EMC(value)              (ECIA_EN_CLR21_EMC_Msk & (_UINT32_(value) << ECIA_EN_CLR21_EMC_Pos)) /* Assigment of value for EMC in the ECIA_EN_CLR21 register */
#define ECIA_EN_CLR21_Msk                     _UINT32_(0x01000004)                                 /* (ECIA_EN_CLR21) Register Mask  */


/* -------- ECIA_SRC22 : (ECIA Offset: 0x118) (R/W 32) GIRQ22 SOURCE -------- */
#define ECIA_SRC22_RESETVALUE                 _UINT32_(0x00)                                       /*  (ECIA_SRC22) GIRQ22 SOURCE  Reset Value */

#define ECIA_SRC22_Msk                        _UINT32_(0x00000000)                                 /* (ECIA_SRC22) Register Mask  */


/* -------- ECIA_EN_SET22 : (ECIA Offset: 0x11C) (R/W 32) GIRQ22 ENABLE SET -------- */
#define ECIA_EN_SET22_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_SET22) GIRQ22 ENABLE SET  Reset Value */

#define ECIA_EN_SET22_Msk                     _UINT32_(0x00000000)                                 /* (ECIA_EN_SET22) Register Mask  */


/* -------- ECIA_RESULT22 : (ECIA Offset: 0x120) ( R/ 32) GIRQ22 RESULT -------- */
#define ECIA_RESULT22_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_RESULT22) GIRQ22 RESULT  Reset Value */

#define ECIA_RESULT22_Msk                     _UINT32_(0x00000000)                                 /* (ECIA_RESULT22) Register Mask  */


/* -------- ECIA_EN_CLR22 : (ECIA Offset: 0x124) (R/W 32) GIRQ22 ENABLE CLEAR -------- */
#define ECIA_EN_CLR22_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_CLR22) GIRQ22 ENABLE CLEAR  Reset Value */

#define ECIA_EN_CLR22_Msk                     _UINT32_(0x00000000)                                 /* (ECIA_EN_CLR22) Register Mask  */


/* -------- ECIA_SRC23 : (ECIA Offset: 0x12C) (R/W 32) GIRQ23 SOURCE -------- */
#define ECIA_SRC23_RESETVALUE                 _UINT32_(0x00)                                       /*  (ECIA_SRC23) GIRQ23 SOURCE  Reset Value */

#define ECIA_SRC23_TIMER32_0_Pos              _UINT32_(4)                                          /* (ECIA_SRC23) TIMER32_0 Position */
#define ECIA_SRC23_TIMER32_0_Msk              (_UINT32_(0x1) << ECIA_SRC23_TIMER32_0_Pos)          /* (ECIA_SRC23) TIMER32_0 Mask */
#define ECIA_SRC23_TIMER32_0(value)           (ECIA_SRC23_TIMER32_0_Msk & (_UINT32_(value) << ECIA_SRC23_TIMER32_0_Pos)) /* Assigment of value for TIMER32_0 in the ECIA_SRC23 register */
#define ECIA_SRC23_TIMER32_1_Pos              _UINT32_(5)                                          /* (ECIA_SRC23) TIMER32_1 Position */
#define ECIA_SRC23_TIMER32_1_Msk              (_UINT32_(0x1) << ECIA_SRC23_TIMER32_1_Pos)          /* (ECIA_SRC23) TIMER32_1 Mask */
#define ECIA_SRC23_TIMER32_1(value)           (ECIA_SRC23_TIMER32_1_Msk & (_UINT32_(value) << ECIA_SRC23_TIMER32_1_Pos)) /* Assigment of value for TIMER32_1 in the ECIA_SRC23 register */
#define ECIA_SRC23_RTMR_Pos                   _UINT32_(10)                                         /* (ECIA_SRC23) RTMR Position */
#define ECIA_SRC23_RTMR_Msk                   (_UINT32_(0x1) << ECIA_SRC23_RTMR_Pos)               /* (ECIA_SRC23) RTMR Mask */
#define ECIA_SRC23_RTMR(value)                (ECIA_SRC23_RTMR_Msk & (_UINT32_(value) << ECIA_SRC23_RTMR_Pos)) /* Assigment of value for RTMR in the ECIA_SRC23 register */
#define ECIA_SRC23_SWI0_Pos                   _UINT32_(11)                                         /* (ECIA_SRC23) SWI0 Position */
#define ECIA_SRC23_SWI0_Msk                   (_UINT32_(0x1) << ECIA_SRC23_SWI0_Pos)               /* (ECIA_SRC23) SWI0 Mask */
#define ECIA_SRC23_SWI0(value)                (ECIA_SRC23_SWI0_Msk & (_UINT32_(value) << ECIA_SRC23_SWI0_Pos)) /* Assigment of value for SWI0 in the ECIA_SRC23 register */
#define ECIA_SRC23_SWI1_Pos                   _UINT32_(12)                                         /* (ECIA_SRC23) SWI1 Position */
#define ECIA_SRC23_SWI1_Msk                   (_UINT32_(0x1) << ECIA_SRC23_SWI1_Pos)               /* (ECIA_SRC23) SWI1 Mask */
#define ECIA_SRC23_SWI1(value)                (ECIA_SRC23_SWI1_Msk & (_UINT32_(value) << ECIA_SRC23_SWI1_Pos)) /* Assigment of value for SWI1 in the ECIA_SRC23 register */
#define ECIA_SRC23_SWI2_Pos                   _UINT32_(13)                                         /* (ECIA_SRC23) SWI2 Position */
#define ECIA_SRC23_SWI2_Msk                   (_UINT32_(0x1) << ECIA_SRC23_SWI2_Pos)               /* (ECIA_SRC23) SWI2 Mask */
#define ECIA_SRC23_SWI2(value)                (ECIA_SRC23_SWI2_Msk & (_UINT32_(value) << ECIA_SRC23_SWI2_Pos)) /* Assigment of value for SWI2 in the ECIA_SRC23 register */
#define ECIA_SRC23_SWI3_Pos                   _UINT32_(14)                                         /* (ECIA_SRC23) SWI3 Position */
#define ECIA_SRC23_SWI3_Msk                   (_UINT32_(0x1) << ECIA_SRC23_SWI3_Pos)               /* (ECIA_SRC23) SWI3 Mask */
#define ECIA_SRC23_SWI3(value)                (ECIA_SRC23_SWI3_Msk & (_UINT32_(value) << ECIA_SRC23_SWI3_Pos)) /* Assigment of value for SWI3 in the ECIA_SRC23 register */
#define ECIA_SRC23_HTMR0_Pos                  _UINT32_(16)                                         /* (ECIA_SRC23) HTMR0 Position */
#define ECIA_SRC23_HTMR0_Msk                  (_UINT32_(0x1) << ECIA_SRC23_HTMR0_Pos)              /* (ECIA_SRC23) HTMR0 Mask */
#define ECIA_SRC23_HTMR0(value)               (ECIA_SRC23_HTMR0_Msk & (_UINT32_(value) << ECIA_SRC23_HTMR0_Pos)) /* Assigment of value for HTMR0 in the ECIA_SRC23 register */
#define ECIA_SRC23_HTMR1_Pos                  _UINT32_(17)                                         /* (ECIA_SRC23) HTMR1 Position */
#define ECIA_SRC23_HTMR1_Msk                  (_UINT32_(0x1) << ECIA_SRC23_HTMR1_Pos)              /* (ECIA_SRC23) HTMR1 Mask */
#define ECIA_SRC23_HTMR1(value)               (ECIA_SRC23_HTMR1_Msk & (_UINT32_(value) << ECIA_SRC23_HTMR1_Pos)) /* Assigment of value for HTMR1 in the ECIA_SRC23 register */
#define ECIA_SRC23_Msk                        _UINT32_(0x00037C30)                                 /* (ECIA_SRC23) Register Mask  */

#define ECIA_SRC23_TIMER32__Pos               _UINT32_(4)                                          /* (ECIA_SRC23 Position) TIMER32_x */
#define ECIA_SRC23_TIMER32__Msk               (_UINT32_(0x3) << ECIA_SRC23_TIMER32__Pos)           /* (ECIA_SRC23 Mask) TIMER32_ */
#define ECIA_SRC23_TIMER32_(value)            (ECIA_SRC23_TIMER32__Msk & (_UINT32_(value) << ECIA_SRC23_TIMER32__Pos)) 
#define ECIA_SRC23_SWI_Pos                    _UINT32_(11)                                         /* (ECIA_SRC23 Position) SWIx */
#define ECIA_SRC23_SWI_Msk                    (_UINT32_(0xF) << ECIA_SRC23_SWI_Pos)                /* (ECIA_SRC23 Mask) SWI */
#define ECIA_SRC23_SWI(value)                 (ECIA_SRC23_SWI_Msk & (_UINT32_(value) << ECIA_SRC23_SWI_Pos)) 
#define ECIA_SRC23_HTMR_Pos                   _UINT32_(16)                                         /* (ECIA_SRC23 Position) HTMRx */
#define ECIA_SRC23_HTMR_Msk                   (_UINT32_(0x3) << ECIA_SRC23_HTMR_Pos)               /* (ECIA_SRC23 Mask) HTMR */
#define ECIA_SRC23_HTMR(value)                (ECIA_SRC23_HTMR_Msk & (_UINT32_(value) << ECIA_SRC23_HTMR_Pos)) 

/* -------- ECIA_EN_SET23 : (ECIA Offset: 0x130) (R/W 32) GIRQ23 ENABLE SET -------- */
#define ECIA_EN_SET23_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_SET23) GIRQ23 ENABLE SET  Reset Value */

#define ECIA_EN_SET23_TIMER32_0_Pos           _UINT32_(4)                                          /* (ECIA_EN_SET23) TIMER32_0 Position */
#define ECIA_EN_SET23_TIMER32_0_Msk           (_UINT32_(0x1) << ECIA_EN_SET23_TIMER32_0_Pos)       /* (ECIA_EN_SET23) TIMER32_0 Mask */
#define ECIA_EN_SET23_TIMER32_0(value)        (ECIA_EN_SET23_TIMER32_0_Msk & (_UINT32_(value) << ECIA_EN_SET23_TIMER32_0_Pos)) /* Assigment of value for TIMER32_0 in the ECIA_EN_SET23 register */
#define ECIA_EN_SET23_TIMER32_1_Pos           _UINT32_(5)                                          /* (ECIA_EN_SET23) TIMER32_1 Position */
#define ECIA_EN_SET23_TIMER32_1_Msk           (_UINT32_(0x1) << ECIA_EN_SET23_TIMER32_1_Pos)       /* (ECIA_EN_SET23) TIMER32_1 Mask */
#define ECIA_EN_SET23_TIMER32_1(value)        (ECIA_EN_SET23_TIMER32_1_Msk & (_UINT32_(value) << ECIA_EN_SET23_TIMER32_1_Pos)) /* Assigment of value for TIMER32_1 in the ECIA_EN_SET23 register */
#define ECIA_EN_SET23_RTMR_Pos                _UINT32_(10)                                         /* (ECIA_EN_SET23) RTMR Position */
#define ECIA_EN_SET23_RTMR_Msk                (_UINT32_(0x1) << ECIA_EN_SET23_RTMR_Pos)            /* (ECIA_EN_SET23) RTMR Mask */
#define ECIA_EN_SET23_RTMR(value)             (ECIA_EN_SET23_RTMR_Msk & (_UINT32_(value) << ECIA_EN_SET23_RTMR_Pos)) /* Assigment of value for RTMR in the ECIA_EN_SET23 register */
#define ECIA_EN_SET23_SWI0_Pos                _UINT32_(11)                                         /* (ECIA_EN_SET23) SWI0 Position */
#define ECIA_EN_SET23_SWI0_Msk                (_UINT32_(0x1) << ECIA_EN_SET23_SWI0_Pos)            /* (ECIA_EN_SET23) SWI0 Mask */
#define ECIA_EN_SET23_SWI0(value)             (ECIA_EN_SET23_SWI0_Msk & (_UINT32_(value) << ECIA_EN_SET23_SWI0_Pos)) /* Assigment of value for SWI0 in the ECIA_EN_SET23 register */
#define ECIA_EN_SET23_SWI1_Pos                _UINT32_(12)                                         /* (ECIA_EN_SET23) SWI1 Position */
#define ECIA_EN_SET23_SWI1_Msk                (_UINT32_(0x1) << ECIA_EN_SET23_SWI1_Pos)            /* (ECIA_EN_SET23) SWI1 Mask */
#define ECIA_EN_SET23_SWI1(value)             (ECIA_EN_SET23_SWI1_Msk & (_UINT32_(value) << ECIA_EN_SET23_SWI1_Pos)) /* Assigment of value for SWI1 in the ECIA_EN_SET23 register */
#define ECIA_EN_SET23_SWI2_Pos                _UINT32_(13)                                         /* (ECIA_EN_SET23) SWI2 Position */
#define ECIA_EN_SET23_SWI2_Msk                (_UINT32_(0x1) << ECIA_EN_SET23_SWI2_Pos)            /* (ECIA_EN_SET23) SWI2 Mask */
#define ECIA_EN_SET23_SWI2(value)             (ECIA_EN_SET23_SWI2_Msk & (_UINT32_(value) << ECIA_EN_SET23_SWI2_Pos)) /* Assigment of value for SWI2 in the ECIA_EN_SET23 register */
#define ECIA_EN_SET23_SWI3_Pos                _UINT32_(14)                                         /* (ECIA_EN_SET23) SWI3 Position */
#define ECIA_EN_SET23_SWI3_Msk                (_UINT32_(0x1) << ECIA_EN_SET23_SWI3_Pos)            /* (ECIA_EN_SET23) SWI3 Mask */
#define ECIA_EN_SET23_SWI3(value)             (ECIA_EN_SET23_SWI3_Msk & (_UINT32_(value) << ECIA_EN_SET23_SWI3_Pos)) /* Assigment of value for SWI3 in the ECIA_EN_SET23 register */
#define ECIA_EN_SET23_HTMR0_Pos               _UINT32_(16)                                         /* (ECIA_EN_SET23) HTMR0 Position */
#define ECIA_EN_SET23_HTMR0_Msk               (_UINT32_(0x1) << ECIA_EN_SET23_HTMR0_Pos)           /* (ECIA_EN_SET23) HTMR0 Mask */
#define ECIA_EN_SET23_HTMR0(value)            (ECIA_EN_SET23_HTMR0_Msk & (_UINT32_(value) << ECIA_EN_SET23_HTMR0_Pos)) /* Assigment of value for HTMR0 in the ECIA_EN_SET23 register */
#define ECIA_EN_SET23_HTMR1_Pos               _UINT32_(17)                                         /* (ECIA_EN_SET23) HTMR1 Position */
#define ECIA_EN_SET23_HTMR1_Msk               (_UINT32_(0x1) << ECIA_EN_SET23_HTMR1_Pos)           /* (ECIA_EN_SET23) HTMR1 Mask */
#define ECIA_EN_SET23_HTMR1(value)            (ECIA_EN_SET23_HTMR1_Msk & (_UINT32_(value) << ECIA_EN_SET23_HTMR1_Pos)) /* Assigment of value for HTMR1 in the ECIA_EN_SET23 register */
#define ECIA_EN_SET23_Msk                     _UINT32_(0x00037C30)                                 /* (ECIA_EN_SET23) Register Mask  */

#define ECIA_EN_SET23_TIMER32__Pos            _UINT32_(4)                                          /* (ECIA_EN_SET23 Position) TIMER32_x */
#define ECIA_EN_SET23_TIMER32__Msk            (_UINT32_(0x3) << ECIA_EN_SET23_TIMER32__Pos)        /* (ECIA_EN_SET23 Mask) TIMER32_ */
#define ECIA_EN_SET23_TIMER32_(value)         (ECIA_EN_SET23_TIMER32__Msk & (_UINT32_(value) << ECIA_EN_SET23_TIMER32__Pos)) 
#define ECIA_EN_SET23_SWI_Pos                 _UINT32_(11)                                         /* (ECIA_EN_SET23 Position) SWIx */
#define ECIA_EN_SET23_SWI_Msk                 (_UINT32_(0xF) << ECIA_EN_SET23_SWI_Pos)             /* (ECIA_EN_SET23 Mask) SWI */
#define ECIA_EN_SET23_SWI(value)              (ECIA_EN_SET23_SWI_Msk & (_UINT32_(value) << ECIA_EN_SET23_SWI_Pos)) 
#define ECIA_EN_SET23_HTMR_Pos                _UINT32_(16)                                         /* (ECIA_EN_SET23 Position) HTMRx */
#define ECIA_EN_SET23_HTMR_Msk                (_UINT32_(0x3) << ECIA_EN_SET23_HTMR_Pos)            /* (ECIA_EN_SET23 Mask) HTMR */
#define ECIA_EN_SET23_HTMR(value)             (ECIA_EN_SET23_HTMR_Msk & (_UINT32_(value) << ECIA_EN_SET23_HTMR_Pos)) 

/* -------- ECIA_RESULT23 : (ECIA Offset: 0x134) ( R/ 32) GIRQ23 RESULT -------- */
#define ECIA_RESULT23_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_RESULT23) GIRQ23 RESULT  Reset Value */

#define ECIA_RESULT23_TIMER32_0_Pos           _UINT32_(4)                                          /* (ECIA_RESULT23) TIMER32_0 Position */
#define ECIA_RESULT23_TIMER32_0_Msk           (_UINT32_(0x1) << ECIA_RESULT23_TIMER32_0_Pos)       /* (ECIA_RESULT23) TIMER32_0 Mask */
#define ECIA_RESULT23_TIMER32_0(value)        (ECIA_RESULT23_TIMER32_0_Msk & (_UINT32_(value) << ECIA_RESULT23_TIMER32_0_Pos)) /* Assigment of value for TIMER32_0 in the ECIA_RESULT23 register */
#define ECIA_RESULT23_TIMER32_1_Pos           _UINT32_(5)                                          /* (ECIA_RESULT23) TIMER32_1 Position */
#define ECIA_RESULT23_TIMER32_1_Msk           (_UINT32_(0x1) << ECIA_RESULT23_TIMER32_1_Pos)       /* (ECIA_RESULT23) TIMER32_1 Mask */
#define ECIA_RESULT23_TIMER32_1(value)        (ECIA_RESULT23_TIMER32_1_Msk & (_UINT32_(value) << ECIA_RESULT23_TIMER32_1_Pos)) /* Assigment of value for TIMER32_1 in the ECIA_RESULT23 register */
#define ECIA_RESULT23_RTMR_Pos                _UINT32_(10)                                         /* (ECIA_RESULT23) RTMR Position */
#define ECIA_RESULT23_RTMR_Msk                (_UINT32_(0x1) << ECIA_RESULT23_RTMR_Pos)            /* (ECIA_RESULT23) RTMR Mask */
#define ECIA_RESULT23_RTMR(value)             (ECIA_RESULT23_RTMR_Msk & (_UINT32_(value) << ECIA_RESULT23_RTMR_Pos)) /* Assigment of value for RTMR in the ECIA_RESULT23 register */
#define ECIA_RESULT23_SWI0_Pos                _UINT32_(11)                                         /* (ECIA_RESULT23) SWI0 Position */
#define ECIA_RESULT23_SWI0_Msk                (_UINT32_(0x1) << ECIA_RESULT23_SWI0_Pos)            /* (ECIA_RESULT23) SWI0 Mask */
#define ECIA_RESULT23_SWI0(value)             (ECIA_RESULT23_SWI0_Msk & (_UINT32_(value) << ECIA_RESULT23_SWI0_Pos)) /* Assigment of value for SWI0 in the ECIA_RESULT23 register */
#define ECIA_RESULT23_SWI1_Pos                _UINT32_(12)                                         /* (ECIA_RESULT23) SWI1 Position */
#define ECIA_RESULT23_SWI1_Msk                (_UINT32_(0x1) << ECIA_RESULT23_SWI1_Pos)            /* (ECIA_RESULT23) SWI1 Mask */
#define ECIA_RESULT23_SWI1(value)             (ECIA_RESULT23_SWI1_Msk & (_UINT32_(value) << ECIA_RESULT23_SWI1_Pos)) /* Assigment of value for SWI1 in the ECIA_RESULT23 register */
#define ECIA_RESULT23_SWI2_Pos                _UINT32_(13)                                         /* (ECIA_RESULT23) SWI2 Position */
#define ECIA_RESULT23_SWI2_Msk                (_UINT32_(0x1) << ECIA_RESULT23_SWI2_Pos)            /* (ECIA_RESULT23) SWI2 Mask */
#define ECIA_RESULT23_SWI2(value)             (ECIA_RESULT23_SWI2_Msk & (_UINT32_(value) << ECIA_RESULT23_SWI2_Pos)) /* Assigment of value for SWI2 in the ECIA_RESULT23 register */
#define ECIA_RESULT23_SWI3_Pos                _UINT32_(14)                                         /* (ECIA_RESULT23) SWI3 Position */
#define ECIA_RESULT23_SWI3_Msk                (_UINT32_(0x1) << ECIA_RESULT23_SWI3_Pos)            /* (ECIA_RESULT23) SWI3 Mask */
#define ECIA_RESULT23_SWI3(value)             (ECIA_RESULT23_SWI3_Msk & (_UINT32_(value) << ECIA_RESULT23_SWI3_Pos)) /* Assigment of value for SWI3 in the ECIA_RESULT23 register */
#define ECIA_RESULT23_HTMR0_Pos               _UINT32_(16)                                         /* (ECIA_RESULT23) HTMR0 Position */
#define ECIA_RESULT23_HTMR0_Msk               (_UINT32_(0x1) << ECIA_RESULT23_HTMR0_Pos)           /* (ECIA_RESULT23) HTMR0 Mask */
#define ECIA_RESULT23_HTMR0(value)            (ECIA_RESULT23_HTMR0_Msk & (_UINT32_(value) << ECIA_RESULT23_HTMR0_Pos)) /* Assigment of value for HTMR0 in the ECIA_RESULT23 register */
#define ECIA_RESULT23_HTMR1_Pos               _UINT32_(17)                                         /* (ECIA_RESULT23) HTMR1 Position */
#define ECIA_RESULT23_HTMR1_Msk               (_UINT32_(0x1) << ECIA_RESULT23_HTMR1_Pos)           /* (ECIA_RESULT23) HTMR1 Mask */
#define ECIA_RESULT23_HTMR1(value)            (ECIA_RESULT23_HTMR1_Msk & (_UINT32_(value) << ECIA_RESULT23_HTMR1_Pos)) /* Assigment of value for HTMR1 in the ECIA_RESULT23 register */
#define ECIA_RESULT23_Msk                     _UINT32_(0x00037C30)                                 /* (ECIA_RESULT23) Register Mask  */

#define ECIA_RESULT23_TIMER32__Pos            _UINT32_(4)                                          /* (ECIA_RESULT23 Position) TIMER32_x */
#define ECIA_RESULT23_TIMER32__Msk            (_UINT32_(0x3) << ECIA_RESULT23_TIMER32__Pos)        /* (ECIA_RESULT23 Mask) TIMER32_ */
#define ECIA_RESULT23_TIMER32_(value)         (ECIA_RESULT23_TIMER32__Msk & (_UINT32_(value) << ECIA_RESULT23_TIMER32__Pos)) 
#define ECIA_RESULT23_SWI_Pos                 _UINT32_(11)                                         /* (ECIA_RESULT23 Position) SWIx */
#define ECIA_RESULT23_SWI_Msk                 (_UINT32_(0xF) << ECIA_RESULT23_SWI_Pos)             /* (ECIA_RESULT23 Mask) SWI */
#define ECIA_RESULT23_SWI(value)              (ECIA_RESULT23_SWI_Msk & (_UINT32_(value) << ECIA_RESULT23_SWI_Pos)) 
#define ECIA_RESULT23_HTMR_Pos                _UINT32_(16)                                         /* (ECIA_RESULT23 Position) HTMRx */
#define ECIA_RESULT23_HTMR_Msk                (_UINT32_(0x3) << ECIA_RESULT23_HTMR_Pos)            /* (ECIA_RESULT23 Mask) HTMR */
#define ECIA_RESULT23_HTMR(value)             (ECIA_RESULT23_HTMR_Msk & (_UINT32_(value) << ECIA_RESULT23_HTMR_Pos)) 

/* -------- ECIA_EN_CLR23 : (ECIA Offset: 0x138) (R/W 32) GIRQ23 ENABLE CLEAR -------- */
#define ECIA_EN_CLR23_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_CLR23) GIRQ23 ENABLE CLEAR  Reset Value */

#define ECIA_EN_CLR23_TIMER32_0_Pos           _UINT32_(4)                                          /* (ECIA_EN_CLR23) TIMER32_0 Position */
#define ECIA_EN_CLR23_TIMER32_0_Msk           (_UINT32_(0x1) << ECIA_EN_CLR23_TIMER32_0_Pos)       /* (ECIA_EN_CLR23) TIMER32_0 Mask */
#define ECIA_EN_CLR23_TIMER32_0(value)        (ECIA_EN_CLR23_TIMER32_0_Msk & (_UINT32_(value) << ECIA_EN_CLR23_TIMER32_0_Pos)) /* Assigment of value for TIMER32_0 in the ECIA_EN_CLR23 register */
#define ECIA_EN_CLR23_TIMER32_1_Pos           _UINT32_(5)                                          /* (ECIA_EN_CLR23) TIMER32_1 Position */
#define ECIA_EN_CLR23_TIMER32_1_Msk           (_UINT32_(0x1) << ECIA_EN_CLR23_TIMER32_1_Pos)       /* (ECIA_EN_CLR23) TIMER32_1 Mask */
#define ECIA_EN_CLR23_TIMER32_1(value)        (ECIA_EN_CLR23_TIMER32_1_Msk & (_UINT32_(value) << ECIA_EN_CLR23_TIMER32_1_Pos)) /* Assigment of value for TIMER32_1 in the ECIA_EN_CLR23 register */
#define ECIA_EN_CLR23_RTMR_Pos                _UINT32_(10)                                         /* (ECIA_EN_CLR23) RTMR Position */
#define ECIA_EN_CLR23_RTMR_Msk                (_UINT32_(0x1) << ECIA_EN_CLR23_RTMR_Pos)            /* (ECIA_EN_CLR23) RTMR Mask */
#define ECIA_EN_CLR23_RTMR(value)             (ECIA_EN_CLR23_RTMR_Msk & (_UINT32_(value) << ECIA_EN_CLR23_RTMR_Pos)) /* Assigment of value for RTMR in the ECIA_EN_CLR23 register */
#define ECIA_EN_CLR23_SWI0_Pos                _UINT32_(11)                                         /* (ECIA_EN_CLR23) SWI0 Position */
#define ECIA_EN_CLR23_SWI0_Msk                (_UINT32_(0x1) << ECIA_EN_CLR23_SWI0_Pos)            /* (ECIA_EN_CLR23) SWI0 Mask */
#define ECIA_EN_CLR23_SWI0(value)             (ECIA_EN_CLR23_SWI0_Msk & (_UINT32_(value) << ECIA_EN_CLR23_SWI0_Pos)) /* Assigment of value for SWI0 in the ECIA_EN_CLR23 register */
#define ECIA_EN_CLR23_SWI1_Pos                _UINT32_(12)                                         /* (ECIA_EN_CLR23) SWI1 Position */
#define ECIA_EN_CLR23_SWI1_Msk                (_UINT32_(0x1) << ECIA_EN_CLR23_SWI1_Pos)            /* (ECIA_EN_CLR23) SWI1 Mask */
#define ECIA_EN_CLR23_SWI1(value)             (ECIA_EN_CLR23_SWI1_Msk & (_UINT32_(value) << ECIA_EN_CLR23_SWI1_Pos)) /* Assigment of value for SWI1 in the ECIA_EN_CLR23 register */
#define ECIA_EN_CLR23_SWI2_Pos                _UINT32_(13)                                         /* (ECIA_EN_CLR23) SWI2 Position */
#define ECIA_EN_CLR23_SWI2_Msk                (_UINT32_(0x1) << ECIA_EN_CLR23_SWI2_Pos)            /* (ECIA_EN_CLR23) SWI2 Mask */
#define ECIA_EN_CLR23_SWI2(value)             (ECIA_EN_CLR23_SWI2_Msk & (_UINT32_(value) << ECIA_EN_CLR23_SWI2_Pos)) /* Assigment of value for SWI2 in the ECIA_EN_CLR23 register */
#define ECIA_EN_CLR23_SWI3_Pos                _UINT32_(14)                                         /* (ECIA_EN_CLR23) SWI3 Position */
#define ECIA_EN_CLR23_SWI3_Msk                (_UINT32_(0x1) << ECIA_EN_CLR23_SWI3_Pos)            /* (ECIA_EN_CLR23) SWI3 Mask */
#define ECIA_EN_CLR23_SWI3(value)             (ECIA_EN_CLR23_SWI3_Msk & (_UINT32_(value) << ECIA_EN_CLR23_SWI3_Pos)) /* Assigment of value for SWI3 in the ECIA_EN_CLR23 register */
#define ECIA_EN_CLR23_HTMR0_Pos               _UINT32_(16)                                         /* (ECIA_EN_CLR23) HTMR0 Position */
#define ECIA_EN_CLR23_HTMR0_Msk               (_UINT32_(0x1) << ECIA_EN_CLR23_HTMR0_Pos)           /* (ECIA_EN_CLR23) HTMR0 Mask */
#define ECIA_EN_CLR23_HTMR0(value)            (ECIA_EN_CLR23_HTMR0_Msk & (_UINT32_(value) << ECIA_EN_CLR23_HTMR0_Pos)) /* Assigment of value for HTMR0 in the ECIA_EN_CLR23 register */
#define ECIA_EN_CLR23_HTMR1_Pos               _UINT32_(17)                                         /* (ECIA_EN_CLR23) HTMR1 Position */
#define ECIA_EN_CLR23_HTMR1_Msk               (_UINT32_(0x1) << ECIA_EN_CLR23_HTMR1_Pos)           /* (ECIA_EN_CLR23) HTMR1 Mask */
#define ECIA_EN_CLR23_HTMR1(value)            (ECIA_EN_CLR23_HTMR1_Msk & (_UINT32_(value) << ECIA_EN_CLR23_HTMR1_Pos)) /* Assigment of value for HTMR1 in the ECIA_EN_CLR23 register */
#define ECIA_EN_CLR23_Msk                     _UINT32_(0x00037C30)                                 /* (ECIA_EN_CLR23) Register Mask  */

#define ECIA_EN_CLR23_TIMER32__Pos            _UINT32_(4)                                          /* (ECIA_EN_CLR23 Position) TIMER32_x */
#define ECIA_EN_CLR23_TIMER32__Msk            (_UINT32_(0x3) << ECIA_EN_CLR23_TIMER32__Pos)        /* (ECIA_EN_CLR23 Mask) TIMER32_ */
#define ECIA_EN_CLR23_TIMER32_(value)         (ECIA_EN_CLR23_TIMER32__Msk & (_UINT32_(value) << ECIA_EN_CLR23_TIMER32__Pos)) 
#define ECIA_EN_CLR23_SWI_Pos                 _UINT32_(11)                                         /* (ECIA_EN_CLR23 Position) SWIx */
#define ECIA_EN_CLR23_SWI_Msk                 (_UINT32_(0xF) << ECIA_EN_CLR23_SWI_Pos)             /* (ECIA_EN_CLR23 Mask) SWI */
#define ECIA_EN_CLR23_SWI(value)              (ECIA_EN_CLR23_SWI_Msk & (_UINT32_(value) << ECIA_EN_CLR23_SWI_Pos)) 
#define ECIA_EN_CLR23_HTMR_Pos                _UINT32_(16)                                         /* (ECIA_EN_CLR23 Position) HTMRx */
#define ECIA_EN_CLR23_HTMR_Msk                (_UINT32_(0x3) << ECIA_EN_CLR23_HTMR_Pos)            /* (ECIA_EN_CLR23 Mask) HTMR */
#define ECIA_EN_CLR23_HTMR(value)             (ECIA_EN_CLR23_HTMR_Msk & (_UINT32_(value) << ECIA_EN_CLR23_HTMR_Pos)) 

/* -------- ECIA_SRC24 : (ECIA Offset: 0x140) (R/W 32) GIRQ24 SOURCE -------- */
#define ECIA_SRC24_RESETVALUE                 _UINT32_(0x00)                                       /*  (ECIA_SRC24) GIRQ24 SOURCE  Reset Value */

#define ECIA_SRC24_SPIMON0_VLTN_Pos           _UINT32_(0)                                          /* (ECIA_SRC24) SPIMON0_VLTN Position */
#define ECIA_SRC24_SPIMON0_VLTN_Msk           (_UINT32_(0x1) << ECIA_SRC24_SPIMON0_VLTN_Pos)       /* (ECIA_SRC24) SPIMON0_VLTN Mask */
#define ECIA_SRC24_SPIMON0_VLTN(value)        (ECIA_SRC24_SPIMON0_VLTN_Msk & (_UINT32_(value) << ECIA_SRC24_SPIMON0_VLTN_Pos)) /* Assigment of value for SPIMON0_VLTN in the ECIA_SRC24 register */
#define ECIA_SRC24_SPIMON0_MTMON_Pos          _UINT32_(1)                                          /* (ECIA_SRC24) SPIMON0_MTMON Position */
#define ECIA_SRC24_SPIMON0_MTMON_Msk          (_UINT32_(0x1) << ECIA_SRC24_SPIMON0_MTMON_Pos)      /* (ECIA_SRC24) SPIMON0_MTMON Mask */
#define ECIA_SRC24_SPIMON0_MTMON(value)       (ECIA_SRC24_SPIMON0_MTMON_Msk & (_UINT32_(value) << ECIA_SRC24_SPIMON0_MTMON_Pos)) /* Assigment of value for SPIMON0_MTMON in the ECIA_SRC24 register */
#define ECIA_SRC24_SPIMON0_LTMON_Pos          _UINT32_(2)                                          /* (ECIA_SRC24) SPIMON0_LTMON Position */
#define ECIA_SRC24_SPIMON0_LTMON_Msk          (_UINT32_(0x1) << ECIA_SRC24_SPIMON0_LTMON_Pos)      /* (ECIA_SRC24) SPIMON0_LTMON Mask */
#define ECIA_SRC24_SPIMON0_LTMON(value)       (ECIA_SRC24_SPIMON0_LTMON_Msk & (_UINT32_(value) << ECIA_SRC24_SPIMON0_LTMON_Pos)) /* Assigment of value for SPIMON0_LTMON in the ECIA_SRC24 register */
#define ECIA_SRC24_SPIMON1_VLTN_Pos           _UINT32_(4)                                          /* (ECIA_SRC24) SPIMON1_VLTN Position */
#define ECIA_SRC24_SPIMON1_VLTN_Msk           (_UINT32_(0x1) << ECIA_SRC24_SPIMON1_VLTN_Pos)       /* (ECIA_SRC24) SPIMON1_VLTN Mask */
#define ECIA_SRC24_SPIMON1_VLTN(value)        (ECIA_SRC24_SPIMON1_VLTN_Msk & (_UINT32_(value) << ECIA_SRC24_SPIMON1_VLTN_Pos)) /* Assigment of value for SPIMON1_VLTN in the ECIA_SRC24 register */
#define ECIA_SRC24_SPIMON1_MTMON_Pos          _UINT32_(5)                                          /* (ECIA_SRC24) SPIMON1_MTMON Position */
#define ECIA_SRC24_SPIMON1_MTMON_Msk          (_UINT32_(0x1) << ECIA_SRC24_SPIMON1_MTMON_Pos)      /* (ECIA_SRC24) SPIMON1_MTMON Mask */
#define ECIA_SRC24_SPIMON1_MTMON(value)       (ECIA_SRC24_SPIMON1_MTMON_Msk & (_UINT32_(value) << ECIA_SRC24_SPIMON1_MTMON_Pos)) /* Assigment of value for SPIMON1_MTMON in the ECIA_SRC24 register */
#define ECIA_SRC24_SPIMON1_LTMON_Pos          _UINT32_(6)                                          /* (ECIA_SRC24) SPIMON1_LTMON Position */
#define ECIA_SRC24_SPIMON1_LTMON_Msk          (_UINT32_(0x1) << ECIA_SRC24_SPIMON1_LTMON_Pos)      /* (ECIA_SRC24) SPIMON1_LTMON Mask */
#define ECIA_SRC24_SPIMON1_LTMON(value)       (ECIA_SRC24_SPIMON1_LTMON_Msk & (_UINT32_(value) << ECIA_SRC24_SPIMON1_LTMON_Pos)) /* Assigment of value for SPIMON1_LTMON in the ECIA_SRC24 register */
#define ECIA_SRC24_Msk                        _UINT32_(0x00000077)                                 /* (ECIA_SRC24) Register Mask  */


/* -------- ECIA_EN_SET24 : (ECIA Offset: 0x144) (R/W 32) GIRQ24 ENABLE SET -------- */
#define ECIA_EN_SET24_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_SET24) GIRQ24 ENABLE SET  Reset Value */

#define ECIA_EN_SET24_SPIMON0_VLTN_Pos        _UINT32_(0)                                          /* (ECIA_EN_SET24) SPIMON0_VLTN Position */
#define ECIA_EN_SET24_SPIMON0_VLTN_Msk        (_UINT32_(0x1) << ECIA_EN_SET24_SPIMON0_VLTN_Pos)    /* (ECIA_EN_SET24) SPIMON0_VLTN Mask */
#define ECIA_EN_SET24_SPIMON0_VLTN(value)     (ECIA_EN_SET24_SPIMON0_VLTN_Msk & (_UINT32_(value) << ECIA_EN_SET24_SPIMON0_VLTN_Pos)) /* Assigment of value for SPIMON0_VLTN in the ECIA_EN_SET24 register */
#define ECIA_EN_SET24_SPIMON0_MTMON_Pos       _UINT32_(1)                                          /* (ECIA_EN_SET24) SPIMON0_MTMON Position */
#define ECIA_EN_SET24_SPIMON0_MTMON_Msk       (_UINT32_(0x1) << ECIA_EN_SET24_SPIMON0_MTMON_Pos)   /* (ECIA_EN_SET24) SPIMON0_MTMON Mask */
#define ECIA_EN_SET24_SPIMON0_MTMON(value)    (ECIA_EN_SET24_SPIMON0_MTMON_Msk & (_UINT32_(value) << ECIA_EN_SET24_SPIMON0_MTMON_Pos)) /* Assigment of value for SPIMON0_MTMON in the ECIA_EN_SET24 register */
#define ECIA_EN_SET24_SPIMON0_LTMON_Pos       _UINT32_(2)                                          /* (ECIA_EN_SET24) SPIMON0_LTMON Position */
#define ECIA_EN_SET24_SPIMON0_LTMON_Msk       (_UINT32_(0x1) << ECIA_EN_SET24_SPIMON0_LTMON_Pos)   /* (ECIA_EN_SET24) SPIMON0_LTMON Mask */
#define ECIA_EN_SET24_SPIMON0_LTMON(value)    (ECIA_EN_SET24_SPIMON0_LTMON_Msk & (_UINT32_(value) << ECIA_EN_SET24_SPIMON0_LTMON_Pos)) /* Assigment of value for SPIMON0_LTMON in the ECIA_EN_SET24 register */
#define ECIA_EN_SET24_SPIMON1_VLTN_Pos        _UINT32_(4)                                          /* (ECIA_EN_SET24) SPIMON1_VLTN Position */
#define ECIA_EN_SET24_SPIMON1_VLTN_Msk        (_UINT32_(0x1) << ECIA_EN_SET24_SPIMON1_VLTN_Pos)    /* (ECIA_EN_SET24) SPIMON1_VLTN Mask */
#define ECIA_EN_SET24_SPIMON1_VLTN(value)     (ECIA_EN_SET24_SPIMON1_VLTN_Msk & (_UINT32_(value) << ECIA_EN_SET24_SPIMON1_VLTN_Pos)) /* Assigment of value for SPIMON1_VLTN in the ECIA_EN_SET24 register */
#define ECIA_EN_SET24_SPIMON1_MTMON_Pos       _UINT32_(5)                                          /* (ECIA_EN_SET24) SPIMON1_MTMON Position */
#define ECIA_EN_SET24_SPIMON1_MTMON_Msk       (_UINT32_(0x1) << ECIA_EN_SET24_SPIMON1_MTMON_Pos)   /* (ECIA_EN_SET24) SPIMON1_MTMON Mask */
#define ECIA_EN_SET24_SPIMON1_MTMON(value)    (ECIA_EN_SET24_SPIMON1_MTMON_Msk & (_UINT32_(value) << ECIA_EN_SET24_SPIMON1_MTMON_Pos)) /* Assigment of value for SPIMON1_MTMON in the ECIA_EN_SET24 register */
#define ECIA_EN_SET24_SPIMON1_LTMON_Pos       _UINT32_(6)                                          /* (ECIA_EN_SET24) SPIMON1_LTMON Position */
#define ECIA_EN_SET24_SPIMON1_LTMON_Msk       (_UINT32_(0x1) << ECIA_EN_SET24_SPIMON1_LTMON_Pos)   /* (ECIA_EN_SET24) SPIMON1_LTMON Mask */
#define ECIA_EN_SET24_SPIMON1_LTMON(value)    (ECIA_EN_SET24_SPIMON1_LTMON_Msk & (_UINT32_(value) << ECIA_EN_SET24_SPIMON1_LTMON_Pos)) /* Assigment of value for SPIMON1_LTMON in the ECIA_EN_SET24 register */
#define ECIA_EN_SET24_Msk                     _UINT32_(0x00000077)                                 /* (ECIA_EN_SET24) Register Mask  */


/* -------- ECIA_RESULT24 : (ECIA Offset: 0x148) ( R/ 32) GIRQ24 RESULT -------- */
#define ECIA_RESULT24_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_RESULT24) GIRQ24 RESULT  Reset Value */

#define ECIA_RESULT24_SPIMON0_VLTN_Pos        _UINT32_(0)                                          /* (ECIA_RESULT24) SPIMON0_VLTN Position */
#define ECIA_RESULT24_SPIMON0_VLTN_Msk        (_UINT32_(0x1) << ECIA_RESULT24_SPIMON0_VLTN_Pos)    /* (ECIA_RESULT24) SPIMON0_VLTN Mask */
#define ECIA_RESULT24_SPIMON0_VLTN(value)     (ECIA_RESULT24_SPIMON0_VLTN_Msk & (_UINT32_(value) << ECIA_RESULT24_SPIMON0_VLTN_Pos)) /* Assigment of value for SPIMON0_VLTN in the ECIA_RESULT24 register */
#define ECIA_RESULT24_SPIMON0_MTMON_Pos       _UINT32_(1)                                          /* (ECIA_RESULT24) SPIMON0_MTMON Position */
#define ECIA_RESULT24_SPIMON0_MTMON_Msk       (_UINT32_(0x1) << ECIA_RESULT24_SPIMON0_MTMON_Pos)   /* (ECIA_RESULT24) SPIMON0_MTMON Mask */
#define ECIA_RESULT24_SPIMON0_MTMON(value)    (ECIA_RESULT24_SPIMON0_MTMON_Msk & (_UINT32_(value) << ECIA_RESULT24_SPIMON0_MTMON_Pos)) /* Assigment of value for SPIMON0_MTMON in the ECIA_RESULT24 register */
#define ECIA_RESULT24_SPIMON0_LTMON_Pos       _UINT32_(2)                                          /* (ECIA_RESULT24) SPIMON0_LTMON Position */
#define ECIA_RESULT24_SPIMON0_LTMON_Msk       (_UINT32_(0x1) << ECIA_RESULT24_SPIMON0_LTMON_Pos)   /* (ECIA_RESULT24) SPIMON0_LTMON Mask */
#define ECIA_RESULT24_SPIMON0_LTMON(value)    (ECIA_RESULT24_SPIMON0_LTMON_Msk & (_UINT32_(value) << ECIA_RESULT24_SPIMON0_LTMON_Pos)) /* Assigment of value for SPIMON0_LTMON in the ECIA_RESULT24 register */
#define ECIA_RESULT24_SPIMON1_VLTN_Pos        _UINT32_(4)                                          /* (ECIA_RESULT24) SPIMON1_VLTN Position */
#define ECIA_RESULT24_SPIMON1_VLTN_Msk        (_UINT32_(0x1) << ECIA_RESULT24_SPIMON1_VLTN_Pos)    /* (ECIA_RESULT24) SPIMON1_VLTN Mask */
#define ECIA_RESULT24_SPIMON1_VLTN(value)     (ECIA_RESULT24_SPIMON1_VLTN_Msk & (_UINT32_(value) << ECIA_RESULT24_SPIMON1_VLTN_Pos)) /* Assigment of value for SPIMON1_VLTN in the ECIA_RESULT24 register */
#define ECIA_RESULT24_SPIMON1_MTMON_Pos       _UINT32_(5)                                          /* (ECIA_RESULT24) SPIMON1_MTMON Position */
#define ECIA_RESULT24_SPIMON1_MTMON_Msk       (_UINT32_(0x1) << ECIA_RESULT24_SPIMON1_MTMON_Pos)   /* (ECIA_RESULT24) SPIMON1_MTMON Mask */
#define ECIA_RESULT24_SPIMON1_MTMON(value)    (ECIA_RESULT24_SPIMON1_MTMON_Msk & (_UINT32_(value) << ECIA_RESULT24_SPIMON1_MTMON_Pos)) /* Assigment of value for SPIMON1_MTMON in the ECIA_RESULT24 register */
#define ECIA_RESULT24_SPIMON1_LTMON_Pos       _UINT32_(6)                                          /* (ECIA_RESULT24) SPIMON1_LTMON Position */
#define ECIA_RESULT24_SPIMON1_LTMON_Msk       (_UINT32_(0x1) << ECIA_RESULT24_SPIMON1_LTMON_Pos)   /* (ECIA_RESULT24) SPIMON1_LTMON Mask */
#define ECIA_RESULT24_SPIMON1_LTMON(value)    (ECIA_RESULT24_SPIMON1_LTMON_Msk & (_UINT32_(value) << ECIA_RESULT24_SPIMON1_LTMON_Pos)) /* Assigment of value for SPIMON1_LTMON in the ECIA_RESULT24 register */
#define ECIA_RESULT24_Msk                     _UINT32_(0x00000077)                                 /* (ECIA_RESULT24) Register Mask  */


/* -------- ECIA_EN_CLR24 : (ECIA Offset: 0x14C) (R/W 32) GIRQ24 ENABLE CLEAR -------- */
#define ECIA_EN_CLR24_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_CLR24) GIRQ24 ENABLE CLEAR  Reset Value */

#define ECIA_EN_CLR24_SPIMON0_VLTN_Pos        _UINT32_(0)                                          /* (ECIA_EN_CLR24) SPIMON0_VLTN Position */
#define ECIA_EN_CLR24_SPIMON0_VLTN_Msk        (_UINT32_(0x1) << ECIA_EN_CLR24_SPIMON0_VLTN_Pos)    /* (ECIA_EN_CLR24) SPIMON0_VLTN Mask */
#define ECIA_EN_CLR24_SPIMON0_VLTN(value)     (ECIA_EN_CLR24_SPIMON0_VLTN_Msk & (_UINT32_(value) << ECIA_EN_CLR24_SPIMON0_VLTN_Pos)) /* Assigment of value for SPIMON0_VLTN in the ECIA_EN_CLR24 register */
#define ECIA_EN_CLR24_SPIMON0_MTMON_Pos       _UINT32_(1)                                          /* (ECIA_EN_CLR24) SPIMON0_MTMON Position */
#define ECIA_EN_CLR24_SPIMON0_MTMON_Msk       (_UINT32_(0x1) << ECIA_EN_CLR24_SPIMON0_MTMON_Pos)   /* (ECIA_EN_CLR24) SPIMON0_MTMON Mask */
#define ECIA_EN_CLR24_SPIMON0_MTMON(value)    (ECIA_EN_CLR24_SPIMON0_MTMON_Msk & (_UINT32_(value) << ECIA_EN_CLR24_SPIMON0_MTMON_Pos)) /* Assigment of value for SPIMON0_MTMON in the ECIA_EN_CLR24 register */
#define ECIA_EN_CLR24_SPIMON0_LTMON_Pos       _UINT32_(2)                                          /* (ECIA_EN_CLR24) SPIMON0_LTMON Position */
#define ECIA_EN_CLR24_SPIMON0_LTMON_Msk       (_UINT32_(0x1) << ECIA_EN_CLR24_SPIMON0_LTMON_Pos)   /* (ECIA_EN_CLR24) SPIMON0_LTMON Mask */
#define ECIA_EN_CLR24_SPIMON0_LTMON(value)    (ECIA_EN_CLR24_SPIMON0_LTMON_Msk & (_UINT32_(value) << ECIA_EN_CLR24_SPIMON0_LTMON_Pos)) /* Assigment of value for SPIMON0_LTMON in the ECIA_EN_CLR24 register */
#define ECIA_EN_CLR24_SPIMON1_VLTN_Pos        _UINT32_(4)                                          /* (ECIA_EN_CLR24) SPIMON1_VLTN Position */
#define ECIA_EN_CLR24_SPIMON1_VLTN_Msk        (_UINT32_(0x1) << ECIA_EN_CLR24_SPIMON1_VLTN_Pos)    /* (ECIA_EN_CLR24) SPIMON1_VLTN Mask */
#define ECIA_EN_CLR24_SPIMON1_VLTN(value)     (ECIA_EN_CLR24_SPIMON1_VLTN_Msk & (_UINT32_(value) << ECIA_EN_CLR24_SPIMON1_VLTN_Pos)) /* Assigment of value for SPIMON1_VLTN in the ECIA_EN_CLR24 register */
#define ECIA_EN_CLR24_SPIMON1_MTMON_Pos       _UINT32_(5)                                          /* (ECIA_EN_CLR24) SPIMON1_MTMON Position */
#define ECIA_EN_CLR24_SPIMON1_MTMON_Msk       (_UINT32_(0x1) << ECIA_EN_CLR24_SPIMON1_MTMON_Pos)   /* (ECIA_EN_CLR24) SPIMON1_MTMON Mask */
#define ECIA_EN_CLR24_SPIMON1_MTMON(value)    (ECIA_EN_CLR24_SPIMON1_MTMON_Msk & (_UINT32_(value) << ECIA_EN_CLR24_SPIMON1_MTMON_Pos)) /* Assigment of value for SPIMON1_MTMON in the ECIA_EN_CLR24 register */
#define ECIA_EN_CLR24_SPIMON1_LTMON_Pos       _UINT32_(6)                                          /* (ECIA_EN_CLR24) SPIMON1_LTMON Position */
#define ECIA_EN_CLR24_SPIMON1_LTMON_Msk       (_UINT32_(0x1) << ECIA_EN_CLR24_SPIMON1_LTMON_Pos)   /* (ECIA_EN_CLR24) SPIMON1_LTMON Mask */
#define ECIA_EN_CLR24_SPIMON1_LTMON(value)    (ECIA_EN_CLR24_SPIMON1_LTMON_Msk & (_UINT32_(value) << ECIA_EN_CLR24_SPIMON1_LTMON_Pos)) /* Assigment of value for SPIMON1_LTMON in the ECIA_EN_CLR24 register */
#define ECIA_EN_CLR24_Msk                     _UINT32_(0x00000077)                                 /* (ECIA_EN_CLR24) Register Mask  */


/* -------- ECIA_SRC25 : (ECIA Offset: 0x154) (R/W 32) GIRQ25 SOURCE -------- */
#define ECIA_SRC25_RESETVALUE                 _UINT32_(0x00)                                       /*  (ECIA_SRC25) GIRQ25 SOURCE  Reset Value */

#define ECIA_SRC25_Msk                        _UINT32_(0x00000000)                                 /* (ECIA_SRC25) Register Mask  */


/* -------- ECIA_EN_SET25 : (ECIA Offset: 0x158) (R/W 32) GIRQ25 ENABLE SET -------- */
#define ECIA_EN_SET25_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_SET25) GIRQ25 ENABLE SET  Reset Value */

#define ECIA_EN_SET25_Msk                     _UINT32_(0x00000000)                                 /* (ECIA_EN_SET25) Register Mask  */


/* -------- ECIA_RESULT25 : (ECIA Offset: 0x15C) ( R/ 32) GIRQ25 RESULT -------- */
#define ECIA_RESULT25_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_RESULT25) GIRQ25 RESULT  Reset Value */

#define ECIA_RESULT25_Msk                     _UINT32_(0x00000000)                                 /* (ECIA_RESULT25) Register Mask  */


/* -------- ECIA_EN_CLR25 : (ECIA Offset: 0x160) (R/W 32) GIRQ25 ENABLE CLEAR -------- */
#define ECIA_EN_CLR25_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_CLR25) GIRQ25 ENABLE CLEAR  Reset Value */

#define ECIA_EN_CLR25_Msk                     _UINT32_(0x00000000)                                 /* (ECIA_EN_CLR25) Register Mask  */


/* -------- ECIA_SRC26 : (ECIA Offset: 0x168) (R/W 32) GIRQ26 SOURCE -------- */
#define ECIA_SRC26_RESETVALUE                 _UINT32_(0x00)                                       /*  (ECIA_SRC26) GIRQ26 SOURCE  Reset Value */

#define ECIA_SRC26_GPIO250_Pos                _UINT32_(8)                                          /* (ECIA_SRC26) GPIO250 Position */
#define ECIA_SRC26_GPIO250_Msk                (_UINT32_(0x1) << ECIA_SRC26_GPIO250_Pos)            /* (ECIA_SRC26) GPIO250 Mask */
#define ECIA_SRC26_GPIO250(value)             (ECIA_SRC26_GPIO250_Msk & (_UINT32_(value) << ECIA_SRC26_GPIO250_Pos)) /* Assigment of value for GPIO250 in the ECIA_SRC26 register */
#define ECIA_SRC26_GPIO253_Pos                _UINT32_(11)                                         /* (ECIA_SRC26) GPIO253 Position */
#define ECIA_SRC26_GPIO253_Msk                (_UINT32_(0x1) << ECIA_SRC26_GPIO253_Pos)            /* (ECIA_SRC26) GPIO253 Mask */
#define ECIA_SRC26_GPIO253(value)             (ECIA_SRC26_GPIO253_Msk & (_UINT32_(value) << ECIA_SRC26_GPIO253_Pos)) /* Assigment of value for GPIO253 in the ECIA_SRC26 register */
#define ECIA_SRC26_Msk                        _UINT32_(0x00000900)                                 /* (ECIA_SRC26) Register Mask  */

#define ECIA_SRC26_GPIO_Pos                   _UINT32_(8)                                          /* (ECIA_SRC26 Position) GPIO253 */
#define ECIA_SRC26_GPIO_Msk                   (_UINT32_(0x3) << ECIA_SRC26_GPIO_Pos)               /* (ECIA_SRC26 Mask) GPIO */
#define ECIA_SRC26_GPIO(value)                (ECIA_SRC26_GPIO_Msk & (_UINT32_(value) << ECIA_SRC26_GPIO_Pos)) 

/* -------- ECIA_EN_SET26 : (ECIA Offset: 0x16C) (R/W 32) GIRQ26 ENABLE SET -------- */
#define ECIA_EN_SET26_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_SET26) GIRQ26 ENABLE SET  Reset Value */

#define ECIA_EN_SET26_GPIO250_Pos             _UINT32_(8)                                          /* (ECIA_EN_SET26) GPIO250 Position */
#define ECIA_EN_SET26_GPIO250_Msk             (_UINT32_(0x1) << ECIA_EN_SET26_GPIO250_Pos)         /* (ECIA_EN_SET26) GPIO250 Mask */
#define ECIA_EN_SET26_GPIO250(value)          (ECIA_EN_SET26_GPIO250_Msk & (_UINT32_(value) << ECIA_EN_SET26_GPIO250_Pos)) /* Assigment of value for GPIO250 in the ECIA_EN_SET26 register */
#define ECIA_EN_SET26_GPIO260_Pos             _UINT32_(11)                                         /* (ECIA_EN_SET26) GPIO260 Position */
#define ECIA_EN_SET26_GPIO260_Msk             (_UINT32_(0x1) << ECIA_EN_SET26_GPIO260_Pos)         /* (ECIA_EN_SET26) GPIO260 Mask */
#define ECIA_EN_SET26_GPIO260(value)          (ECIA_EN_SET26_GPIO260_Msk & (_UINT32_(value) << ECIA_EN_SET26_GPIO260_Pos)) /* Assigment of value for GPIO260 in the ECIA_EN_SET26 register */
#define ECIA_EN_SET26_Msk                     _UINT32_(0x00000900)                                 /* (ECIA_EN_SET26) Register Mask  */

#define ECIA_EN_SET26_GPIO_Pos                _UINT32_(8)                                          /* (ECIA_EN_SET26 Position) GPIO26x */
#define ECIA_EN_SET26_GPIO_Msk                (_UINT32_(0x3) << ECIA_EN_SET26_GPIO_Pos)            /* (ECIA_EN_SET26 Mask) GPIO */
#define ECIA_EN_SET26_GPIO(value)             (ECIA_EN_SET26_GPIO_Msk & (_UINT32_(value) << ECIA_EN_SET26_GPIO_Pos)) 

/* -------- ECIA_RESULT26 : (ECIA Offset: 0x170) ( R/ 32) GIRQ26 RESULT -------- */
#define ECIA_RESULT26_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_RESULT26) GIRQ26 RESULT  Reset Value */

#define ECIA_RESULT26_GPIO250_Pos             _UINT32_(8)                                          /* (ECIA_RESULT26) GPIO250 Position */
#define ECIA_RESULT26_GPIO250_Msk             (_UINT32_(0x1) << ECIA_RESULT26_GPIO250_Pos)         /* (ECIA_RESULT26) GPIO250 Mask */
#define ECIA_RESULT26_GPIO250(value)          (ECIA_RESULT26_GPIO250_Msk & (_UINT32_(value) << ECIA_RESULT26_GPIO250_Pos)) /* Assigment of value for GPIO250 in the ECIA_RESULT26 register */
#define ECIA_RESULT26_GPIO260_Pos             _UINT32_(11)                                         /* (ECIA_RESULT26) GPIO260 Position */
#define ECIA_RESULT26_GPIO260_Msk             (_UINT32_(0x1) << ECIA_RESULT26_GPIO260_Pos)         /* (ECIA_RESULT26) GPIO260 Mask */
#define ECIA_RESULT26_GPIO260(value)          (ECIA_RESULT26_GPIO260_Msk & (_UINT32_(value) << ECIA_RESULT26_GPIO260_Pos)) /* Assigment of value for GPIO260 in the ECIA_RESULT26 register */
#define ECIA_RESULT26_Msk                     _UINT32_(0x00000900)                                 /* (ECIA_RESULT26) Register Mask  */

#define ECIA_RESULT26_GPIO_Pos                _UINT32_(8)                                          /* (ECIA_RESULT26 Position) GPIO26x */
#define ECIA_RESULT26_GPIO_Msk                (_UINT32_(0x3) << ECIA_RESULT26_GPIO_Pos)            /* (ECIA_RESULT26 Mask) GPIO */
#define ECIA_RESULT26_GPIO(value)             (ECIA_RESULT26_GPIO_Msk & (_UINT32_(value) << ECIA_RESULT26_GPIO_Pos)) 

/* -------- ECIA_EN_CLR26 : (ECIA Offset: 0x174) (R/W 32) GIRQ26 ENABLE CLEAR -------- */
#define ECIA_EN_CLR26_RESETVALUE              _UINT32_(0x00)                                       /*  (ECIA_EN_CLR26) GIRQ26 ENABLE CLEAR  Reset Value */

#define ECIA_EN_CLR26_GPIO250_Pos             _UINT32_(8)                                          /* (ECIA_EN_CLR26) GPIO250 Position */
#define ECIA_EN_CLR26_GPIO250_Msk             (_UINT32_(0x1) << ECIA_EN_CLR26_GPIO250_Pos)         /* (ECIA_EN_CLR26) GPIO250 Mask */
#define ECIA_EN_CLR26_GPIO250(value)          (ECIA_EN_CLR26_GPIO250_Msk & (_UINT32_(value) << ECIA_EN_CLR26_GPIO250_Pos)) /* Assigment of value for GPIO250 in the ECIA_EN_CLR26 register */
#define ECIA_EN_CLR26_GPIO260_Pos             _UINT32_(11)                                         /* (ECIA_EN_CLR26) GPIO260 Position */
#define ECIA_EN_CLR26_GPIO260_Msk             (_UINT32_(0x1) << ECIA_EN_CLR26_GPIO260_Pos)         /* (ECIA_EN_CLR26) GPIO260 Mask */
#define ECIA_EN_CLR26_GPIO260(value)          (ECIA_EN_CLR26_GPIO260_Msk & (_UINT32_(value) << ECIA_EN_CLR26_GPIO260_Pos)) /* Assigment of value for GPIO260 in the ECIA_EN_CLR26 register */
#define ECIA_EN_CLR26_Msk                     _UINT32_(0x00000900)                                 /* (ECIA_EN_CLR26) Register Mask  */

#define ECIA_EN_CLR26_GPIO_Pos                _UINT32_(8)                                          /* (ECIA_EN_CLR26 Position) GPIO26x */
#define ECIA_EN_CLR26_GPIO_Msk                (_UINT32_(0x3) << ECIA_EN_CLR26_GPIO_Pos)            /* (ECIA_EN_CLR26 Mask) GPIO */
#define ECIA_EN_CLR26_GPIO(value)             (ECIA_EN_CLR26_GPIO_Msk & (_UINT32_(value) << ECIA_EN_CLR26_GPIO_Pos)) 

/* -------- ECIA_BLK_EN_SET : (ECIA Offset: 0x200) (R/W 32) Block Enable Set Register -------- */
#define ECIA_BLK_EN_SET_RESETVALUE            _UINT32_(0x00)                                       /*  (ECIA_BLK_EN_SET) Block Enable Set Register  Reset Value */

#define ECIA_BLK_EN_SET_VTOR_EN_SET_Pos       _UINT32_(0)                                          /* (ECIA_BLK_EN_SET) Each GIRQx bit can be individually enabled to assert an interrupt event.      Reads always return the current value of the internal GIRQX_ENABLE bit. The state of the GIRQX_ENABLE bit is determined by      the corresponding GIRQX_ENABLE_SET bit and the GIRQX_ENABLE_CLEAR bit. (0=disabled, 1=enabled) (R/WS)      1=Interrupts in the GIRQx Source Register may be enabled      0=No effect. Position */
#define ECIA_BLK_EN_SET_VTOR_EN_SET_Msk       (_UINT32_(0x7FFFFFFF) << ECIA_BLK_EN_SET_VTOR_EN_SET_Pos) /* (ECIA_BLK_EN_SET) Each GIRQx bit can be individually enabled to assert an interrupt event.      Reads always return the current value of the internal GIRQX_ENABLE bit. The state of the GIRQX_ENABLE bit is determined by      the corresponding GIRQX_ENABLE_SET bit and the GIRQX_ENABLE_CLEAR bit. (0=disabled, 1=enabled) (R/WS)      1=Interrupts in the GIRQx Source Register may be enabled      0=No effect. Mask */
#define ECIA_BLK_EN_SET_VTOR_EN_SET(value)    (ECIA_BLK_EN_SET_VTOR_EN_SET_Msk & (_UINT32_(value) << ECIA_BLK_EN_SET_VTOR_EN_SET_Pos)) /* Assigment of value for VTOR_EN_SET in the ECIA_BLK_EN_SET register */
#define ECIA_BLK_EN_SET_Msk                   _UINT32_(0x7FFFFFFF)                                 /* (ECIA_BLK_EN_SET) Register Mask  */


/* -------- ECIA_BLK_EN_CLR : (ECIA Offset: 0x204) (R/W 32) Block Enable Clear Register. -------- */
#define ECIA_BLK_EN_CLR_RESETVALUE            _UINT32_(0x00)                                       /*  (ECIA_BLK_EN_CLR) Block Enable Clear Register.  Reset Value */

#define ECIA_BLK_EN_CLR_VTOR_EN_CLR_Pos       _UINT32_(0)                                          /* (ECIA_BLK_EN_CLR) Each GIRQx bit can be individually disabled to inhibit an interrupt event.      Reads always return the current value of the internal GIRQX_ENABLE bit. The state of the GIRQX_ENABLE bit is determined by      the corresponding GIRQX_ENABLE_SET bit and the GIRQX_ENABLE_CLEAR bit. (0=disabled, 1=enabled) (R/WC)      1=All interrupts in the GIRQx Source Register are disabled      0=No effect. Position */
#define ECIA_BLK_EN_CLR_VTOR_EN_CLR_Msk       (_UINT32_(0x7FFFFFFF) << ECIA_BLK_EN_CLR_VTOR_EN_CLR_Pos) /* (ECIA_BLK_EN_CLR) Each GIRQx bit can be individually disabled to inhibit an interrupt event.      Reads always return the current value of the internal GIRQX_ENABLE bit. The state of the GIRQX_ENABLE bit is determined by      the corresponding GIRQX_ENABLE_SET bit and the GIRQX_ENABLE_CLEAR bit. (0=disabled, 1=enabled) (R/WC)      1=All interrupts in the GIRQx Source Register are disabled      0=No effect. Mask */
#define ECIA_BLK_EN_CLR_VTOR_EN_CLR(value)    (ECIA_BLK_EN_CLR_VTOR_EN_CLR_Msk & (_UINT32_(value) << ECIA_BLK_EN_CLR_VTOR_EN_CLR_Pos)) /* Assigment of value for VTOR_EN_CLR in the ECIA_BLK_EN_CLR register */
#define ECIA_BLK_EN_CLR_Msk                   _UINT32_(0x7FFFFFFF)                                 /* (ECIA_BLK_EN_CLR) Register Mask  */


/* -------- ECIA_BLK_IRQ_VTOR : (ECIA Offset: 0x208) ( R/ 32) Block IRQ Vector Register -------- */
#define ECIA_BLK_IRQ_VTOR_RESETVALUE          _UINT32_(0x00)                                       /*  (ECIA_BLK_IRQ_VTOR) Block IRQ Vector Register  Reset Value */

#define ECIA_BLK_IRQ_VTOR_VTOR_Pos            _UINT32_(0)                                          /* (ECIA_BLK_IRQ_VTOR) Each bit in this field reports the status of the group GIRQ interrupt assertion to the NVIC. If the GIRQx interrupt      is disabled as a group, by the Block Enable Clear Register, then the corresponding bit will be '0'b and no interrupt will be asserted. Position */
#define ECIA_BLK_IRQ_VTOR_VTOR_Msk            (_UINT32_(0x1FFFFFF) << ECIA_BLK_IRQ_VTOR_VTOR_Pos)  /* (ECIA_BLK_IRQ_VTOR) Each bit in this field reports the status of the group GIRQ interrupt assertion to the NVIC. If the GIRQx interrupt      is disabled as a group, by the Block Enable Clear Register, then the corresponding bit will be '0'b and no interrupt will be asserted. Mask */
#define ECIA_BLK_IRQ_VTOR_VTOR(value)         (ECIA_BLK_IRQ_VTOR_VTOR_Msk & (_UINT32_(value) << ECIA_BLK_IRQ_VTOR_VTOR_Pos)) /* Assigment of value for VTOR in the ECIA_BLK_IRQ_VTOR register */
#define ECIA_BLK_IRQ_VTOR_Msk                 _UINT32_(0x01FFFFFF)                                 /* (ECIA_BLK_IRQ_VTOR) Register Mask  */


/** \brief ECIA register offsets definitions */
#define ECIA_SRC8_REG_OFST             _UINT32_(0x00)      /* (ECIA_SRC8) GIRQ8 SOURCE Offset */
#define ECIA_EN_SET8_REG_OFST          _UINT32_(0x04)      /* (ECIA_EN_SET8) GIRQ8 ENABLE SET Offset */
#define ECIA_RESULT8_REG_OFST          _UINT32_(0x08)      /* (ECIA_RESULT8) GIRQ8 RESULT Offset */
#define ECIA_EN_CLR8_REG_OFST          _UINT32_(0x0C)      /* (ECIA_EN_CLR8) GIRQ8 ENABLE CLEAR Offset */
#define ECIA_SRC9_REG_OFST             _UINT32_(0x14)      /* (ECIA_SRC9) GIRQ9 SOURCE Offset */
#define ECIA_EN_SET9_REG_OFST          _UINT32_(0x18)      /* (ECIA_EN_SET9) GIRQ9 ENABLE SET Offset */
#define ECIA_RESULT9_REG_OFST          _UINT32_(0x1C)      /* (ECIA_RESULT9) GIRQ9 RESULT Offset */
#define ECIA_EN_CLR9_REG_OFST          _UINT32_(0x20)      /* (ECIA_EN_CLR9) GIRQ9 ENABLE CLEAR Offset */
#define ECIA_SRC10_REG_OFST            _UINT32_(0x28)      /* (ECIA_SRC10) GIRQ10 SOURCE Offset */
#define ECIA_EN_SET10_REG_OFST         _UINT32_(0x2C)      /* (ECIA_EN_SET10) GIRQ10 ENABLE SET Offset */
#define ECIA_RESULT10_REG_OFST         _UINT32_(0x30)      /* (ECIA_RESULT10) GIRQ10 RESULT Offset */
#define ECIA_EN_CLR10_REG_OFST         _UINT32_(0x34)      /* (ECIA_EN_CLR10) GIRQ10 ENABLE CLEAR Offset */
#define ECIA_SRC11_REG_OFST            _UINT32_(0x3C)      /* (ECIA_SRC11) GIRQ11 SOURCE Offset */
#define ECIA_EN_SET11_REG_OFST         _UINT32_(0x40)      /* (ECIA_EN_SET11) GIRQ11 ENABLE SET Offset */
#define ECIA_RESULT11_REG_OFST         _UINT32_(0x44)      /* (ECIA_RESULT11) GIRQ11 RESULT Offset */
#define ECIA_EN_CLR11_REG_OFST         _UINT32_(0x48)      /* (ECIA_EN_CLR11) GIRQ11 ENABLE CLEAR Offset */
#define ECIA_SRC12_REG_OFST            _UINT32_(0x50)      /* (ECIA_SRC12) GIRQ12 SOURCE Offset */
#define ECIA_EN_SET12_REG_OFST         _UINT32_(0x54)      /* (ECIA_EN_SET12) GIRQ12 ENABLE SET Offset */
#define ECIA_RESULT12_REG_OFST         _UINT32_(0x58)      /* (ECIA_RESULT12) GIRQ12 RESULT Offset */
#define ECIA_EN_CLR12_REG_OFST         _UINT32_(0x5C)      /* (ECIA_EN_CLR12) GIRQ12 ENABLE CLEAR Offset */
#define ECIA_SRC13_REG_OFST            _UINT32_(0x64)      /* (ECIA_SRC13) GIRQ13 SOURCE Offset */
#define ECIA_EN_SET13_REG_OFST         _UINT32_(0x68)      /* (ECIA_EN_SET13) GIRQ13 ENABLE SET Offset */
#define ECIA_RESULT13_REG_OFST         _UINT32_(0x6C)      /* (ECIA_RESULT13) GIRQ13 RESULT Offset */
#define ECIA_EN_CLR13_REG_OFST         _UINT32_(0x70)      /* (ECIA_EN_CLR13) GIRQ13 ENABLE CLEAR Offset */
#define ECIA_SRC14_REG_OFST            _UINT32_(0x78)      /* (ECIA_SRC14) GIRQ14 SOURCE Offset */
#define ECIA_EN_SET14_REG_OFST         _UINT32_(0x7C)      /* (ECIA_EN_SET14) GIRQ14 ENABLE SET Offset */
#define ECIA_RESULT14_REG_OFST         _UINT32_(0x80)      /* (ECIA_RESULT14) GIRQ14 RESULT Offset */
#define ECIA_EN_CLR14_REG_OFST         _UINT32_(0x84)      /* (ECIA_EN_CLR14) GIRQ14 ENABLE CLEAR Offset */
#define ECIA_SRC15_REG_OFST            _UINT32_(0x8C)      /* (ECIA_SRC15) GIRQ15 SOURCE Offset */
#define ECIA_EN_SET15_REG_OFST         _UINT32_(0x90)      /* (ECIA_EN_SET15) GIRQ15 ENABLE SET Offset */
#define ECIA_RESULT15_REG_OFST         _UINT32_(0x94)      /* (ECIA_RESULT15) GIRQ15 RESULT Offset */
#define ECIA_EN_CLR15_REG_OFST         _UINT32_(0x98)      /* (ECIA_EN_CLR15) GIRQ15 ENABLE CLEAR Offset */
#define ECIA_SRC16_REG_OFST            _UINT32_(0xA0)      /* (ECIA_SRC16) GIRQ16 SOURCE Offset */
#define ECIA_EN_SET16_REG_OFST         _UINT32_(0xA4)      /* (ECIA_EN_SET16) GIRQ16 ENABLE SET Offset */
#define ECIA_RESULT16_REG_OFST         _UINT32_(0xA8)      /* (ECIA_RESULT16) GIRQ16 RESULT Offset */
#define ECIA_EN_CLR16_REG_OFST         _UINT32_(0xAC)      /* (ECIA_EN_CLR16) GIRQ16 ENABLE CLEAR Offset */
#define ECIA_SRC17_REG_OFST            _UINT32_(0xB4)      /* (ECIA_SRC17) GIRQ17 SOURCE Offset */
#define ECIA_EN_SET17_REG_OFST         _UINT32_(0xB8)      /* (ECIA_EN_SET17) GIRQ17 ENABLE SET Offset */
#define ECIA_RESULT17_REG_OFST         _UINT32_(0xBC)      /* (ECIA_RESULT17) GIRQ17 RESULT Offset */
#define ECIA_EN_CLR17_REG_OFST         _UINT32_(0xC0)      /* (ECIA_EN_CLR17) GIRQ17 ENABLE CLEAR Offset */
#define ECIA_SRC18_REG_OFST            _UINT32_(0xC8)      /* (ECIA_SRC18) GIRQ18 SOURCE Offset */
#define ECIA_EN_SET18_REG_OFST         _UINT32_(0xCC)      /* (ECIA_EN_SET18) GIRQ18 ENABLE SET Offset */
#define ECIA_RESULT18_REG_OFST         _UINT32_(0xD0)      /* (ECIA_RESULT18) GIRQ18 RESULT Offset */
#define ECIA_EN_CLR18_REG_OFST         _UINT32_(0xD4)      /* (ECIA_EN_CLR18) GIRQ18 ENABLE CLEAR Offset */
#define ECIA_SRC19_REG_OFST            _UINT32_(0xDC)      /* (ECIA_SRC19) GIRQ19 SOURCE Offset */
#define ECIA_EN_SET19_REG_OFST         _UINT32_(0xE0)      /* (ECIA_EN_SET19) GIRQ19 ENABLE SET Offset */
#define ECIA_RESULT19_REG_OFST         _UINT32_(0xE4)      /* (ECIA_RESULT19) GIRQ19 RESULT Offset */
#define ECIA_EN_CLR19_REG_OFST         _UINT32_(0xE8)      /* (ECIA_EN_CLR19) GIRQ19 ENABLE CLEAR Offset */
#define ECIA_SRC20_REG_OFST            _UINT32_(0xF0)      /* (ECIA_SRC20) GIRQ20 SOURCE Offset */
#define ECIA_EN_SET20_REG_OFST         _UINT32_(0xF4)      /* (ECIA_EN_SET20) GIRQ20 ENABLE SET Offset */
#define ECIA_RESULT20_REG_OFST         _UINT32_(0xF8)      /* (ECIA_RESULT20) GIRQ20 RESULT Offset */
#define ECIA_EN_CLR20_REG_OFST         _UINT32_(0xFC)      /* (ECIA_EN_CLR20) GIRQ20 ENABLE CLEAR Offset */
#define ECIA_SRC21_REG_OFST            _UINT32_(0x104)     /* (ECIA_SRC21) GIRQ21 SOURCE Offset */
#define ECIA_EN_SET21_REG_OFST         _UINT32_(0x108)     /* (ECIA_EN_SET21) GIRQ21 ENABLE SET Offset */
#define ECIA_RESULT21_REG_OFST         _UINT32_(0x10C)     /* (ECIA_RESULT21) GIRQ21 RESULT Offset */
#define ECIA_EN_CLR21_REG_OFST         _UINT32_(0x110)     /* (ECIA_EN_CLR21) GIRQ21 ENABLE CLEAR Offset */
#define ECIA_SRC22_REG_OFST            _UINT32_(0x118)     /* (ECIA_SRC22) GIRQ22 SOURCE Offset */
#define ECIA_EN_SET22_REG_OFST         _UINT32_(0x11C)     /* (ECIA_EN_SET22) GIRQ22 ENABLE SET Offset */
#define ECIA_RESULT22_REG_OFST         _UINT32_(0x120)     /* (ECIA_RESULT22) GIRQ22 RESULT Offset */
#define ECIA_EN_CLR22_REG_OFST         _UINT32_(0x124)     /* (ECIA_EN_CLR22) GIRQ22 ENABLE CLEAR Offset */
#define ECIA_SRC23_REG_OFST            _UINT32_(0x12C)     /* (ECIA_SRC23) GIRQ23 SOURCE Offset */
#define ECIA_EN_SET23_REG_OFST         _UINT32_(0x130)     /* (ECIA_EN_SET23) GIRQ23 ENABLE SET Offset */
#define ECIA_RESULT23_REG_OFST         _UINT32_(0x134)     /* (ECIA_RESULT23) GIRQ23 RESULT Offset */
#define ECIA_EN_CLR23_REG_OFST         _UINT32_(0x138)     /* (ECIA_EN_CLR23) GIRQ23 ENABLE CLEAR Offset */
#define ECIA_SRC24_REG_OFST            _UINT32_(0x140)     /* (ECIA_SRC24) GIRQ24 SOURCE Offset */
#define ECIA_EN_SET24_REG_OFST         _UINT32_(0x144)     /* (ECIA_EN_SET24) GIRQ24 ENABLE SET Offset */
#define ECIA_RESULT24_REG_OFST         _UINT32_(0x148)     /* (ECIA_RESULT24) GIRQ24 RESULT Offset */
#define ECIA_EN_CLR24_REG_OFST         _UINT32_(0x14C)     /* (ECIA_EN_CLR24) GIRQ24 ENABLE CLEAR Offset */
#define ECIA_SRC25_REG_OFST            _UINT32_(0x154)     /* (ECIA_SRC25) GIRQ25 SOURCE Offset */
#define ECIA_EN_SET25_REG_OFST         _UINT32_(0x158)     /* (ECIA_EN_SET25) GIRQ25 ENABLE SET Offset */
#define ECIA_RESULT25_REG_OFST         _UINT32_(0x15C)     /* (ECIA_RESULT25) GIRQ25 RESULT Offset */
#define ECIA_EN_CLR25_REG_OFST         _UINT32_(0x160)     /* (ECIA_EN_CLR25) GIRQ25 ENABLE CLEAR Offset */
#define ECIA_SRC26_REG_OFST            _UINT32_(0x168)     /* (ECIA_SRC26) GIRQ26 SOURCE Offset */
#define ECIA_EN_SET26_REG_OFST         _UINT32_(0x16C)     /* (ECIA_EN_SET26) GIRQ26 ENABLE SET Offset */
#define ECIA_RESULT26_REG_OFST         _UINT32_(0x170)     /* (ECIA_RESULT26) GIRQ26 RESULT Offset */
#define ECIA_EN_CLR26_REG_OFST         _UINT32_(0x174)     /* (ECIA_EN_CLR26) GIRQ26 ENABLE CLEAR Offset */
#define ECIA_BLK_EN_SET_REG_OFST       _UINT32_(0x200)     /* (ECIA_BLK_EN_SET) Block Enable Set Register Offset */
#define ECIA_BLK_EN_CLR_REG_OFST       _UINT32_(0x204)     /* (ECIA_BLK_EN_CLR) Block Enable Clear Register. Offset */
#define ECIA_BLK_IRQ_VTOR_REG_OFST     _UINT32_(0x208)     /* (ECIA_BLK_IRQ_VTOR) Block IRQ Vector Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief ECIA register API structure */
typedef struct
{  /* The ECIA works in conjunction with the processor interrupt interface to handle hardware interrupts andd exceptions. */
  __IO  uint32_t                       ECIA_SRC8;          /**< Offset: 0x00 (R/W  32) GIRQ8 SOURCE */
  __IO  uint32_t                       ECIA_EN_SET8;       /**< Offset: 0x04 (R/W  32) GIRQ8 ENABLE SET */
  __I   uint32_t                       ECIA_RESULT8;       /**< Offset: 0x08 (R/   32) GIRQ8 RESULT */
  __IO  uint32_t                       ECIA_EN_CLR8;       /**< Offset: 0x0C (R/W  32) GIRQ8 ENABLE CLEAR */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       ECIA_SRC9;          /**< Offset: 0x14 (R/W  32) GIRQ9 SOURCE */
  __IO  uint32_t                       ECIA_EN_SET9;       /**< Offset: 0x18 (R/W  32) GIRQ9 ENABLE SET */
  __I   uint32_t                       ECIA_RESULT9;       /**< Offset: 0x1C (R/   32) GIRQ9 RESULT */
  __IO  uint32_t                       ECIA_EN_CLR9;       /**< Offset: 0x20 (R/W  32) GIRQ9 ENABLE CLEAR */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       ECIA_SRC10;         /**< Offset: 0x28 (R/W  32) GIRQ10 SOURCE */
  __IO  uint32_t                       ECIA_EN_SET10;      /**< Offset: 0x2C (R/W  32) GIRQ10 ENABLE SET */
  __I   uint32_t                       ECIA_RESULT10;      /**< Offset: 0x30 (R/   32) GIRQ10 RESULT */
  __IO  uint32_t                       ECIA_EN_CLR10;      /**< Offset: 0x34 (R/W  32) GIRQ10 ENABLE CLEAR */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       ECIA_SRC11;         /**< Offset: 0x3C (R/W  32) GIRQ11 SOURCE */
  __IO  uint32_t                       ECIA_EN_SET11;      /**< Offset: 0x40 (R/W  32) GIRQ11 ENABLE SET */
  __I   uint32_t                       ECIA_RESULT11;      /**< Offset: 0x44 (R/   32) GIRQ11 RESULT */
  __IO  uint32_t                       ECIA_EN_CLR11;      /**< Offset: 0x48 (R/W  32) GIRQ11 ENABLE CLEAR */
  __I   uint8_t                        Reserved4[0x04];
  __IO  uint32_t                       ECIA_SRC12;         /**< Offset: 0x50 (R/W  32) GIRQ12 SOURCE */
  __IO  uint32_t                       ECIA_EN_SET12;      /**< Offset: 0x54 (R/W  32) GIRQ12 ENABLE SET */
  __I   uint32_t                       ECIA_RESULT12;      /**< Offset: 0x58 (R/   32) GIRQ12 RESULT */
  __IO  uint32_t                       ECIA_EN_CLR12;      /**< Offset: 0x5C (R/W  32) GIRQ12 ENABLE CLEAR */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       ECIA_SRC13;         /**< Offset: 0x64 (R/W  32) GIRQ13 SOURCE */
  __IO  uint32_t                       ECIA_EN_SET13;      /**< Offset: 0x68 (R/W  32) GIRQ13 ENABLE SET */
  __I   uint32_t                       ECIA_RESULT13;      /**< Offset: 0x6C (R/   32) GIRQ13 RESULT */
  __IO  uint32_t                       ECIA_EN_CLR13;      /**< Offset: 0x70 (R/W  32) GIRQ13 ENABLE CLEAR */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint32_t                       ECIA_SRC14;         /**< Offset: 0x78 (R/W  32) GIRQ14 SOURCE */
  __IO  uint32_t                       ECIA_EN_SET14;      /**< Offset: 0x7C (R/W  32) GIRQ14 ENABLE SET */
  __I   uint32_t                       ECIA_RESULT14;      /**< Offset: 0x80 (R/   32) GIRQ14 RESULT */
  __IO  uint32_t                       ECIA_EN_CLR14;      /**< Offset: 0x84 (R/W  32) GIRQ14 ENABLE CLEAR */
  __I   uint8_t                        Reserved7[0x04];
  __IO  uint32_t                       ECIA_SRC15;         /**< Offset: 0x8C (R/W  32) GIRQ15 SOURCE */
  __IO  uint32_t                       ECIA_EN_SET15;      /**< Offset: 0x90 (R/W  32) GIRQ15 ENABLE SET */
  __I   uint32_t                       ECIA_RESULT15;      /**< Offset: 0x94 (R/   32) GIRQ15 RESULT */
  __IO  uint32_t                       ECIA_EN_CLR15;      /**< Offset: 0x98 (R/W  32) GIRQ15 ENABLE CLEAR */
  __I   uint8_t                        Reserved8[0x04];
  __IO  uint32_t                       ECIA_SRC16;         /**< Offset: 0xA0 (R/W  32) GIRQ16 SOURCE */
  __IO  uint32_t                       ECIA_EN_SET16;      /**< Offset: 0xA4 (R/W  32) GIRQ16 ENABLE SET */
  __I   uint32_t                       ECIA_RESULT16;      /**< Offset: 0xA8 (R/   32) GIRQ16 RESULT */
  __IO  uint32_t                       ECIA_EN_CLR16;      /**< Offset: 0xAC (R/W  32) GIRQ16 ENABLE CLEAR */
  __I   uint8_t                        Reserved9[0x04];
  __IO  uint32_t                       ECIA_SRC17;         /**< Offset: 0xB4 (R/W  32) GIRQ17 SOURCE */
  __IO  uint32_t                       ECIA_EN_SET17;      /**< Offset: 0xB8 (R/W  32) GIRQ17 ENABLE SET */
  __I   uint32_t                       ECIA_RESULT17;      /**< Offset: 0xBC (R/   32) GIRQ17 RESULT */
  __IO  uint32_t                       ECIA_EN_CLR17;      /**< Offset: 0xC0 (R/W  32) GIRQ17 ENABLE CLEAR */
  __I   uint8_t                        Reserved10[0x04];
  __IO  uint32_t                       ECIA_SRC18;         /**< Offset: 0xC8 (R/W  32) GIRQ18 SOURCE */
  __IO  uint32_t                       ECIA_EN_SET18;      /**< Offset: 0xCC (R/W  32) GIRQ18 ENABLE SET */
  __I   uint32_t                       ECIA_RESULT18;      /**< Offset: 0xD0 (R/   32) GIRQ18 RESULT */
  __IO  uint32_t                       ECIA_EN_CLR18;      /**< Offset: 0xD4 (R/W  32) GIRQ18 ENABLE CLEAR */
  __I   uint8_t                        Reserved11[0x04];
  __IO  uint32_t                       ECIA_SRC19;         /**< Offset: 0xDC (R/W  32) GIRQ19 SOURCE */
  __IO  uint32_t                       ECIA_EN_SET19;      /**< Offset: 0xE0 (R/W  32) GIRQ19 ENABLE SET */
  __I   uint32_t                       ECIA_RESULT19;      /**< Offset: 0xE4 (R/   32) GIRQ19 RESULT */
  __IO  uint32_t                       ECIA_EN_CLR19;      /**< Offset: 0xE8 (R/W  32) GIRQ19 ENABLE CLEAR */
  __I   uint8_t                        Reserved12[0x04];
  __IO  uint32_t                       ECIA_SRC20;         /**< Offset: 0xF0 (R/W  32) GIRQ20 SOURCE */
  __IO  uint32_t                       ECIA_EN_SET20;      /**< Offset: 0xF4 (R/W  32) GIRQ20 ENABLE SET */
  __I   uint32_t                       ECIA_RESULT20;      /**< Offset: 0xF8 (R/   32) GIRQ20 RESULT */
  __IO  uint32_t                       ECIA_EN_CLR20;      /**< Offset: 0xFC (R/W  32) GIRQ20 ENABLE CLEAR */
  __I   uint8_t                        Reserved13[0x04];
  __IO  uint32_t                       ECIA_SRC21;         /**< Offset: 0x104 (R/W  32) GIRQ21 SOURCE */
  __IO  uint32_t                       ECIA_EN_SET21;      /**< Offset: 0x108 (R/W  32) GIRQ21 ENABLE SET */
  __I   uint32_t                       ECIA_RESULT21;      /**< Offset: 0x10C (R/   32) GIRQ21 RESULT */
  __IO  uint32_t                       ECIA_EN_CLR21;      /**< Offset: 0x110 (R/W  32) GIRQ21 ENABLE CLEAR */
  __I   uint8_t                        Reserved14[0x04];
  __IO  uint32_t                       ECIA_SRC22;         /**< Offset: 0x118 (R/W  32) GIRQ22 SOURCE */
  __IO  uint32_t                       ECIA_EN_SET22;      /**< Offset: 0x11C (R/W  32) GIRQ22 ENABLE SET */
  __I   uint32_t                       ECIA_RESULT22;      /**< Offset: 0x120 (R/   32) GIRQ22 RESULT */
  __IO  uint32_t                       ECIA_EN_CLR22;      /**< Offset: 0x124 (R/W  32) GIRQ22 ENABLE CLEAR */
  __I   uint8_t                        Reserved15[0x04];
  __IO  uint32_t                       ECIA_SRC23;         /**< Offset: 0x12C (R/W  32) GIRQ23 SOURCE */
  __IO  uint32_t                       ECIA_EN_SET23;      /**< Offset: 0x130 (R/W  32) GIRQ23 ENABLE SET */
  __I   uint32_t                       ECIA_RESULT23;      /**< Offset: 0x134 (R/   32) GIRQ23 RESULT */
  __IO  uint32_t                       ECIA_EN_CLR23;      /**< Offset: 0x138 (R/W  32) GIRQ23 ENABLE CLEAR */
  __I   uint8_t                        Reserved16[0x04];
  __IO  uint32_t                       ECIA_SRC24;         /**< Offset: 0x140 (R/W  32) GIRQ24 SOURCE */
  __IO  uint32_t                       ECIA_EN_SET24;      /**< Offset: 0x144 (R/W  32) GIRQ24 ENABLE SET */
  __I   uint32_t                       ECIA_RESULT24;      /**< Offset: 0x148 (R/   32) GIRQ24 RESULT */
  __IO  uint32_t                       ECIA_EN_CLR24;      /**< Offset: 0x14C (R/W  32) GIRQ24 ENABLE CLEAR */
  __I   uint8_t                        Reserved17[0x04];
  __IO  uint32_t                       ECIA_SRC25;         /**< Offset: 0x154 (R/W  32) GIRQ25 SOURCE */
  __IO  uint32_t                       ECIA_EN_SET25;      /**< Offset: 0x158 (R/W  32) GIRQ25 ENABLE SET */
  __I   uint32_t                       ECIA_RESULT25;      /**< Offset: 0x15C (R/   32) GIRQ25 RESULT */
  __IO  uint32_t                       ECIA_EN_CLR25;      /**< Offset: 0x160 (R/W  32) GIRQ25 ENABLE CLEAR */
  __I   uint8_t                        Reserved18[0x04];
  __IO  uint32_t                       ECIA_SRC26;         /**< Offset: 0x168 (R/W  32) GIRQ26 SOURCE */
  __IO  uint32_t                       ECIA_EN_SET26;      /**< Offset: 0x16C (R/W  32) GIRQ26 ENABLE SET */
  __I   uint32_t                       ECIA_RESULT26;      /**< Offset: 0x170 (R/   32) GIRQ26 RESULT */
  __IO  uint32_t                       ECIA_EN_CLR26;      /**< Offset: 0x174 (R/W  32) GIRQ26 ENABLE CLEAR */
  __I   uint8_t                        Reserved19[0x88];
  __IO  uint32_t                       ECIA_BLK_EN_SET;    /**< Offset: 0x200 (R/W  32) Block Enable Set Register */
  __IO  uint32_t                       ECIA_BLK_EN_CLR;    /**< Offset: 0x204 (R/W  32) Block Enable Clear Register. */
  __I   uint32_t                       ECIA_BLK_IRQ_VTOR;  /**< Offset: 0x208 (R/   32) Block IRQ Vector Register */
} ecia_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_ECIA_COMPONENT_H_ */
