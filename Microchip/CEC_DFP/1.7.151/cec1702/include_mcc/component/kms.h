/*
 * Component description for KMS
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
#ifndef _CEC1702Q_KMS_COMPONENT_H_
#define _CEC1702Q_KMS_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR KMS                                          */
/* ************************************************************************** */

/* -------- KMS_KSO_SEL : (KMS Offset: 0x04) (R/W 32) KSO Select and control -------- */
#define KMS_KSO_SEL_RESETVALUE                _UINT32_(0x00)                                       /*  (KMS_KSO_SEL) KSO Select and control  Reset Value */

#define KMS_KSO_SEL_SEL_Pos                   _UINT32_(0)                                          /* (KMS_KSO_SEL) This field selects a KSO line (00000b = KSO[0] etc.) for output according to the value off KSO_INVERT in this register. Position */
#define KMS_KSO_SEL_SEL_Msk                   (_UINT32_(0x1F) << KMS_KSO_SEL_SEL_Pos)              /* (KMS_KSO_SEL) This field selects a KSO line (00000b = KSO[0] etc.) for output according to the value off KSO_INVERT in this register. Mask */
#define KMS_KSO_SEL_SEL(value)                (KMS_KSO_SEL_SEL_Msk & (_UINT32_(value) << KMS_KSO_SEL_SEL_Pos)) /* Assigment of value for SEL in the KMS_KSO_SEL register */
#define KMS_KSO_SEL_ALL_Pos                   _UINT32_(5)                                          /* (KMS_KSO_SEL) 0=When key scan is enabled, KSO output controlled by the KSO_SELECT field.\n      1=KSO[x] driven high when selected. Position */
#define KMS_KSO_SEL_ALL_Msk                   (_UINT32_(0x1) << KMS_KSO_SEL_ALL_Pos)               /* (KMS_KSO_SEL) 0=When key scan is enabled, KSO output controlled by the KSO_SELECT field.\n      1=KSO[x] driven high when selected. Mask */
#define KMS_KSO_SEL_ALL(value)                (KMS_KSO_SEL_ALL_Msk & (_UINT32_(value) << KMS_KSO_SEL_ALL_Pos)) /* Assigment of value for ALL in the KMS_KSO_SEL register */
#define KMS_KSO_SEL_KSEN_Pos                  _UINT32_(6)                                          /* (KMS_KSO_SEL) 0= Keyboard scan enabled, 1= Keyboard scan disabled. All KSO output buffers disabled. Position */
#define KMS_KSO_SEL_KSEN_Msk                  (_UINT32_(0x1) << KMS_KSO_SEL_KSEN_Pos)              /* (KMS_KSO_SEL) 0= Keyboard scan enabled, 1= Keyboard scan disabled. All KSO output buffers disabled. Mask */
#define KMS_KSO_SEL_KSEN(value)               (KMS_KSO_SEL_KSEN_Msk & (_UINT32_(value) << KMS_KSO_SEL_KSEN_Pos)) /* Assigment of value for KSEN in the KMS_KSO_SEL register */
#define KMS_KSO_SEL_INV_Pos                   _UINT32_(7)                                          /* (KMS_KSO_SEL) 0= KSO[x] driven low when selected, 1= KSO[x] driven high when selected. Position */
#define KMS_KSO_SEL_INV_Msk                   (_UINT32_(0x1) << KMS_KSO_SEL_INV_Pos)               /* (KMS_KSO_SEL) 0= KSO[x] driven low when selected, 1= KSO[x] driven high when selected. Mask */
#define KMS_KSO_SEL_INV(value)                (KMS_KSO_SEL_INV_Msk & (_UINT32_(value) << KMS_KSO_SEL_INV_Pos)) /* Assigment of value for INV in the KMS_KSO_SEL register */
#define KMS_KSO_SEL_Msk                       _UINT32_(0x000000FF)                                 /* (KMS_KSO_SEL) Register Mask  */


/* -------- KMS_KSI : (KMS Offset: 0x08) ( R/ 32) [7:0] This field returns the current state of the KSI pins. -------- */
#define KMS_KSI_RESETVALUE                    _UINT32_(0x00)                                       /*  (KMS_KSI) [7:0] This field returns the current state of the KSI pins.  Reset Value */

#define KMS_KSI_Msk                           _UINT32_(0x00000000)                                 /* (KMS_KSI) Register Mask  */


/* -------- KMS_KSI_STS : (KMS Offset: 0x0C) (R/W 32) [7:0] Each bit in this field is set on the falling edge of the corresponding KSI input pin.\n      A KSI interrupt is generated when its corresponding status bit and interrupt enable bit are both set. KSI interrupts are logically ORed together to produce KSC_INT and KSC_INT_WAKE.\n      Writing a '1' to a bit will clear it. Writing a '0' to a bit has no effect. -------- */
#define KMS_KSI_STS_RESETVALUE                _UINT32_(0x00)                                       /*  (KMS_KSI_STS) [7:0] Each bit in this field is set on the falling edge of the corresponding KSI input pin.\n      A KSI interrupt is generated when its corresponding status bit and interrupt enable bit are both set. KSI interrupts are logically ORed together to produce KSC_INT and KSC_INT_WAKE.\n      Writing a '1' to a bit will clear it. Writing a '0' to a bit has no effect.  Reset Value */

#define KMS_KSI_STS_Msk                       _UINT32_(0x00000000)                                 /* (KMS_KSI_STS) Register Mask  */


/* -------- KMS_KSI_IEN : (KMS Offset: 0x10) (R/W 32) [7:0] Each bit in KSI_IEN enables interrupt generation due to highto-low transition on a KSI input.\n       An interrupt is generated when the corresponding bits in KSI_STATUS and KSI_INT_EN are both set. -------- */
#define KMS_KSI_IEN_RESETVALUE                _UINT32_(0x00)                                       /*  (KMS_KSI_IEN) [7:0] Each bit in KSI_IEN enables interrupt generation due to highto-low transition on a KSI input.\n       An interrupt is generated when the corresponding bits in KSI_STATUS and KSI_INT_EN are both set.  Reset Value */

#define KMS_KSI_IEN_Msk                       _UINT32_(0x00000000)                                 /* (KMS_KSI_IEN) Register Mask  */


/* -------- KMS_EXT_CTRL : (KMS Offset: 0x14) (R/W 32) [0:0] PREDRIVE_ENABLE enables the \n       PREDRIVE mode to actively drive the KSO pins high for approximately 100ns before switching to open-drain operation.\n      0=Disable predrive on KSO pins\n      1=Enable predrive on KSO pins. -------- */
#define KMS_EXT_CTRL_RESETVALUE               _UINT32_(0x00)                                       /*  (KMS_EXT_CTRL) [0:0] PREDRIVE_ENABLE enables the \n       PREDRIVE mode to actively drive the KSO pins high for approximately 100ns before switching to open-drain operation.\n      0=Disable predrive on KSO pins\n      1=Enable predrive on KSO pins.  Reset Value */

#define KMS_EXT_CTRL_Msk                      _UINT32_(0x00000000)                                 /* (KMS_EXT_CTRL) Register Mask  */


/** \brief KMS register offsets definitions */
#define KMS_KSO_SEL_REG_OFST           _UINT32_(0x04)      /* (KMS_KSO_SEL) KSO Select and control Offset */
#define KMS_KSI_REG_OFST               _UINT32_(0x08)      /* (KMS_KSI) [7:0] This field returns the current state of the KSI pins. Offset */
#define KMS_KSI_STS_REG_OFST           _UINT32_(0x0C)      /* (KMS_KSI_STS) [7:0] Each bit in this field is set on the falling edge of the corresponding KSI input pin.\n      A KSI interrupt is generated when its corresponding status bit and interrupt enable bit are both set. KSI interrupts are logically ORed together to produce KSC_INT and KSC_INT_WAKE.\n      Writing a '1' to a bit will clear it. Writing a '0' to a bit has no effect. Offset */
#define KMS_KSI_IEN_REG_OFST           _UINT32_(0x10)      /* (KMS_KSI_IEN) [7:0] Each bit in KSI_IEN enables interrupt generation due to highto-low transition on a KSI input.\n       An interrupt is generated when the corresponding bits in KSI_STATUS and KSI_INT_EN are both set. Offset */
#define KMS_EXT_CTRL_REG_OFST          _UINT32_(0x14)      /* (KMS_EXT_CTRL) [0:0] PREDRIVE_ENABLE enables the \n       PREDRIVE mode to actively drive the KSO pins high for approximately 100ns before switching to open-drain operation.\n      0=Disable predrive on KSO pins\n      1=Enable predrive on KSO pins. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief KMS register API structure */
typedef struct
{  /* The Keyboard Scan Interface block provides a register interface to the EC\n      to directly scan an external keyboard matrix of size up to 18x8. */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       KMS_KSO_SEL;        /**< Offset: 0x04 (R/W  32) KSO Select and control */
  __I   uint32_t                       KMS_KSI;            /**< Offset: 0x08 (R/   32) [7:0] This field returns the current state of the KSI pins. */
  __IO  uint32_t                       KMS_KSI_STS;        /**< Offset: 0x0C (R/W  32) [7:0] Each bit in this field is set on the falling edge of the corresponding KSI input pin.\n      A KSI interrupt is generated when its corresponding status bit and interrupt enable bit are both set. KSI interrupts are logically ORed together to produce KSC_INT and KSC_INT_WAKE.\n      Writing a '1' to a bit will clear it. Writing a '0' to a bit has no effect. */
  __IO  uint32_t                       KMS_KSI_IEN;        /**< Offset: 0x10 (R/W  32) [7:0] Each bit in KSI_IEN enables interrupt generation due to highto-low transition on a KSI input.\n       An interrupt is generated when the corresponding bits in KSI_STATUS and KSI_INT_EN are both set. */
  __IO  uint32_t                       KMS_EXT_CTRL;       /**< Offset: 0x14 (R/W  32) [0:0] PREDRIVE_ENABLE enables the \n       PREDRIVE mode to actively drive the KSO pins high for approximately 100ns before switching to open-drain operation.\n      0=Disable predrive on KSO pins\n      1=Enable predrive on KSO pins. */
} kms_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1702Q_KMS_COMPONENT_H_ */
