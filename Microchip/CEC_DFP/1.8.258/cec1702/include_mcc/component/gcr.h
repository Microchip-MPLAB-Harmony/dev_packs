/*
 * Component description for GCR
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

/* file generated from device description version 2018-10-01T10:50:03Z */
#ifndef _CEC1702Q_GCR_COMPONENT_H_
#define _CEC1702Q_GCR_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR GCR                                          */
/* ************************************************************************** */

/* -------- GCR_LDN : (GCR Offset: 0x07) (R/W 8) A write to this register selects the current logical device. This allows access to the control and configuration\n         registers for each logical device. Note: The Activate command operates only on the selected logical device. -------- */
#define GCR_LDN_RESETVALUE                    _UINT8_(0x00)                                        /*  (GCR_LDN) A write to this register selects the current logical device. This allows access to the control and configuration\n         registers for each logical device. Note: The Activate command operates only on the selected logical device.  Reset Value */

#define GCR_LDN_Msk                           _UINT8_(0x00)                                        /* (GCR_LDN) Register Mask  */


/* -------- GCR_DEV_ID : (GCR Offset: 0x20) ( R/ 8) A read-only register which provides device identification. -------- */
#define GCR_DEV_ID_RESETVALUE                 _UINT8_(0x31)                                        /*  (GCR_DEV_ID) A read-only register which provides device identification.  Reset Value */

#define GCR_DEV_ID_Msk                        _UINT8_(0x00)                                        /* (GCR_DEV_ID) Register Mask  */


/* -------- GCR_DEV_REV : (GCR Offset: 0x21) ( R/ 8) A read-only register which provides device revision information. -------- */
#define GCR_DEV_REV_RESETVALUE                _UINT8_(0x00)                                        /*  (GCR_DEV_REV) A read-only register which provides device revision information.  Reset Value */

#define GCR_DEV_REV_Msk                       _UINT8_(0x00)                                        /* (GCR_DEV_REV) Register Mask  */


/** \brief GCR register offsets definitions */
#define GCR_LDN_REG_OFST               _UINT32_(0x07)      /* (GCR_LDN) A write to this register selects the current logical device. This allows access to the control and configuration\n         registers for each logical device. Note: The Activate command operates only on the selected logical device. Offset */
#define GCR_DEV_ID_REG_OFST            _UINT32_(0x20)      /* (GCR_DEV_ID) A read-only register which provides device identification. Offset */
#define GCR_DEV_REV_REG_OFST           _UINT32_(0x21)      /* (GCR_DEV_REV) A read-only register which provides device revision information. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief GCR register API structure */
typedef struct
{  /* The Logical Device Configuration registers support motherboard designs in\n          which the resources required by their components are known and assigned by the BIOS\n       at POST. */
  __I   uint8_t                        Reserved1[0x07];
  __IO  uint8_t                        GCR_LDN;            /**< Offset: 0x07 (R/W  8) A write to this register selects the current logical device. This allows access to the control and configuration\n         registers for each logical device. Note: The Activate command operates only on the selected logical device. */
  __I   uint8_t                        Reserved2[0x18];
  __I   uint8_t                        GCR_DEV_ID;         /**< Offset: 0x20 (R/   8) A read-only register which provides device identification. */
  __I   uint8_t                        GCR_DEV_REV;        /**< Offset: 0x21 (R/   8) A read-only register which provides device revision information. */
} gcr_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC1702Q_GCR_COMPONENT_H_ */
