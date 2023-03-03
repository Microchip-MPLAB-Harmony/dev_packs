/*
 * Component description for IMSPI
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
#ifndef _CEC_IMSPI_COMPONENT_H_
#define _CEC_IMSPI_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR IMSPI                                        */
/* ************************************************************************** */

/* -------- IMSPI_MODE : (IMSPI Offset: 0x00) (R/W 32) IMSPI Mode Register -------- */
#define IMSPI_MODE_RESETVALUE                 _UINT32_(0x00)                                       /*  (IMSPI_MODE) IMSPI Mode Register  Reset Value */

#define IMSPI_MODE_ACTIVATE_Pos               _UINT32_(0)                                          /* (IMSPI_MODE) This bit enables the controller. 1=The controller is enabled; 0=The controller is disabled and placed in its lowest power state. Position */
#define IMSPI_MODE_ACTIVATE_Msk               (_UINT32_(0x1) << IMSPI_MODE_ACTIVATE_Pos)           /* (IMSPI_MODE) This bit enables the controller. 1=The controller is enabled; 0=The controller is disabled and placed in its lowest power state. Mask */
#define IMSPI_MODE_ACTIVATE(value)            (IMSPI_MODE_ACTIVATE_Msk & (_UINT32_(value) << IMSPI_MODE_ACTIVATE_Pos)) /* Assigment of value for ACTIVATE in the IMSPI_MODE register */
#define IMSPI_MODE_SOFT_RESET_Pos             _UINT32_(1)                                          /* (IMSPI_MODE) A write of '1b' to this bit resets the controller. This bit is self-clearing. Position */
#define IMSPI_MODE_SOFT_RESET_Msk             (_UINT32_(0x1) << IMSPI_MODE_SOFT_RESET_Pos)         /* (IMSPI_MODE) A write of '1b' to this bit resets the controller. This bit is self-clearing. Mask */
#define IMSPI_MODE_SOFT_RESET(value)          (IMSPI_MODE_SOFT_RESET_Msk & (_UINT32_(value) << IMSPI_MODE_SOFT_RESET_Pos)) /* Assigment of value for SOFT_RESET in the IMSPI_MODE register */
#define IMSPI_MODE_DLY2_SUSB_Pos              _UINT32_(2)                                          /* (IMSPI_MODE) This bit is routed to the DLY2_SUSB# pin function. Position */
#define IMSPI_MODE_DLY2_SUSB_Msk              (_UINT32_(0x1) << IMSPI_MODE_DLY2_SUSB_Pos)          /* (IMSPI_MODE) This bit is routed to the DLY2_SUSB# pin function. Mask */
#define IMSPI_MODE_DLY2_SUSB(value)           (IMSPI_MODE_DLY2_SUSB_Msk & (_UINT32_(value) << IMSPI_MODE_DLY2_SUSB_Pos)) /* Assigment of value for DLY2_SUSB in the IMSPI_MODE register */
#define IMSPI_MODE_CPOL_Pos                   _UINT32_(8)                                          /* (IMSPI_MODE) This bit corresponds to the Polarity control for the underlying SPI controller. It describes the default state of      the SPI Clock signal. 1=The clock starts in a high state; 0=The clock starts in a low state. Position */
#define IMSPI_MODE_CPOL_Msk                   (_UINT32_(0x1) << IMSPI_MODE_CPOL_Pos)               /* (IMSPI_MODE) This bit corresponds to the Polarity control for the underlying SPI controller. It describes the default state of      the SPI Clock signal. 1=The clock starts in a high state; 0=The clock starts in a low state. Mask */
#define IMSPI_MODE_CPOL(value)                (IMSPI_MODE_CPOL_Msk & (_UINT32_(value) << IMSPI_MODE_CPOL_Pos)) /* Assigment of value for CPOL in the IMSPI_MODE register */
#define IMSPI_MODE_CPHA_MOSI_Pos              _UINT32_(9)                                          /* (IMSPI_MODE) This field is the CPHA field of the underlying SPI controller which affects only the MOSI Data. This field changes      determines the clock edge on which data are sent, in combination with the CPOL field. 1=If CPOL=0, data sent on Rising Edge;      if CPOL=1, data sent on Falling Edge ; 0=If CPOL=0, data sent on Falling Edge; if CPOL=1, data sent on Rising Edge. Position */
#define IMSPI_MODE_CPHA_MOSI_Msk              (_UINT32_(0x1) << IMSPI_MODE_CPHA_MOSI_Pos)          /* (IMSPI_MODE) This field is the CPHA field of the underlying SPI controller which affects only the MOSI Data. This field changes      determines the clock edge on which data are sent, in combination with the CPOL field. 1=If CPOL=0, data sent on Rising Edge;      if CPOL=1, data sent on Falling Edge ; 0=If CPOL=0, data sent on Falling Edge; if CPOL=1, data sent on Rising Edge. Mask */
#define IMSPI_MODE_CPHA_MOSI(value)           (IMSPI_MODE_CPHA_MOSI_Msk & (_UINT32_(value) << IMSPI_MODE_CPHA_MOSI_Pos)) /* Assigment of value for CPHA_MOSI in the IMSPI_MODE register */
#define IMSPI_MODE_CPHA_MISO_Pos              _UINT32_(10)                                         /* (IMSPI_MODE) This field is the CPHA field of the underlying SPI controller which affects only the MISO Data. This field changes      determines the clock edge on which data are captured, in combination with the CPOL field. For standard SPI Modes, this must be      programmed with the same value as CPHA_MOSI. 1=If CPOL=0, data captured on Falling Edge; if CPOL=1, data captured on Rising Edge      0=If CPOL=0, data captured on Rising Edge; if CPOL=1, data captured on Falling Edge. Position */
#define IMSPI_MODE_CPHA_MISO_Msk              (_UINT32_(0x1) << IMSPI_MODE_CPHA_MISO_Pos)          /* (IMSPI_MODE) This field is the CPHA field of the underlying SPI controller which affects only the MISO Data. This field changes      determines the clock edge on which data are captured, in combination with the CPOL field. For standard SPI Modes, this must be      programmed with the same value as CPHA_MOSI. 1=If CPOL=0, data captured on Falling Edge; if CPOL=1, data captured on Rising Edge      0=If CPOL=0, data captured on Rising Edge; if CPOL=1, data captured on Falling Edge. Mask */
#define IMSPI_MODE_CPHA_MISO(value)           (IMSPI_MODE_CPHA_MISO_Msk & (_UINT32_(value) << IMSPI_MODE_CPHA_MISO_Pos)) /* Assigment of value for CPHA_MISO in the IMSPI_MODE register */
#define IMSPI_MODE_CLOCK_DIVIDE_Pos           _UINT32_(16)                                         /* (IMSPI_MODE) This SPI clock divide in terms of the number of system clocks. 255:1=The SPI clock period is equal to this number of      system clocks. 0=The SPI clock period is equal to 256 system clocks. Position */
#define IMSPI_MODE_CLOCK_DIVIDE_Msk           (_UINT32_(0xFF) << IMSPI_MODE_CLOCK_DIVIDE_Pos)      /* (IMSPI_MODE) This SPI clock divide in terms of the number of system clocks. 255:1=The SPI clock period is equal to this number of      system clocks. 0=The SPI clock period is equal to 256 system clocks. Mask */
#define IMSPI_MODE_CLOCK_DIVIDE(value)        (IMSPI_MODE_CLOCK_DIVIDE_Msk & (_UINT32_(value) << IMSPI_MODE_CLOCK_DIVIDE_Pos)) /* Assigment of value for CLOCK_DIVIDE in the IMSPI_MODE register */
#define IMSPI_MODE_IF_MODE_Pos                _UINT32_(24)                                         /* (IMSPI_MODE) This field sets the interface mode for the SPI controller. 3=Reserved; 2=Quad Mode; 1=Dual Mode; 0=Single Mode. Position */
#define IMSPI_MODE_IF_MODE_Msk                (_UINT32_(0x3) << IMSPI_MODE_IF_MODE_Pos)            /* (IMSPI_MODE) This field sets the interface mode for the SPI controller. 3=Reserved; 2=Quad Mode; 1=Dual Mode; 0=Single Mode. Mask */
#define IMSPI_MODE_IF_MODE(value)             (IMSPI_MODE_IF_MODE_Msk & (_UINT32_(value) << IMSPI_MODE_IF_MODE_Pos)) /* Assigment of value for IF_MODE in the IMSPI_MODE register */
#define IMSPI_MODE_Msk                        _UINT32_(0x03FF0707)                                 /* (IMSPI_MODE) Register Mask  */


/* -------- IMSPI_STATUS : (IMSPI Offset: 0x04) (R/W 32) IMSPI Status Register -------- */
#define IMSPI_STATUS_RESETVALUE               _UINT32_(0x00)                                       /*  (IMSPI_STATUS) IMSPI Status Register  Reset Value */

#define IMSPI_STATUS_TIMEOUT_Pos              _UINT32_(0)                                          /* (IMSPI_STATUS) This flags when a transfer has terminated due to timeout on the response phase. 1=A transfer error occurred due to an      invalid response; 0=No error occurred. (R/WC) Position */
#define IMSPI_STATUS_TIMEOUT_Msk              (_UINT32_(0x1) << IMSPI_STATUS_TIMEOUT_Pos)          /* (IMSPI_STATUS) This flags when a transfer has terminated due to timeout on the response phase. 1=A transfer error occurred due to an      invalid response; 0=No error occurred. (R/WC) Mask */
#define IMSPI_STATUS_TIMEOUT(value)           (IMSPI_STATUS_TIMEOUT_Msk & (_UINT32_(value) << IMSPI_STATUS_TIMEOUT_Pos)) /* Assigment of value for TIMEOUT in the IMSPI_STATUS register */
#define IMSPI_STATUS_INVALID_RESPONSE_Pos     _UINT32_(1)                                          /* (IMSPI_STATUS) The IMSPI has detected an invalid response field and therefore is aborting the transfer in failure. 1=A transfer error      occurred due to an invalid response; 0=No error occurred. (R/WC) Position */
#define IMSPI_STATUS_INVALID_RESPONSE_Msk     (_UINT32_(0x1) << IMSPI_STATUS_INVALID_RESPONSE_Pos) /* (IMSPI_STATUS) The IMSPI has detected an invalid response field and therefore is aborting the transfer in failure. 1=A transfer error      occurred due to an invalid response; 0=No error occurred. (R/WC) Mask */
#define IMSPI_STATUS_INVALID_RESPONSE(value)  (IMSPI_STATUS_INVALID_RESPONSE_Msk & (_UINT32_(value) << IMSPI_STATUS_INVALID_RESPONSE_Pos)) /* Assigment of value for INVALID_RESPONSE in the IMSPI_STATUS register */
#define IMSPI_STATUS_Msk                      _UINT32_(0x00000003)                                 /* (IMSPI_STATUS) Register Mask  */


/* -------- IMSPI_INT_ENABLE : (IMSPI Offset: 0x08) (R/W 32) IMSPI Interrupt Enable Register -------- */
#define IMSPI_INT_ENABLE_RESETVALUE           _UINT32_(0x00)                                       /*  (IMSPI_INT_ENABLE) IMSPI Interrupt Enable Register  Reset Value */

#define IMSPI_INT_ENABLE_TIMEOUT_LE_Pos       _UINT32_(0)                                          /* (IMSPI_INT_ENABLE) Assert an IMSPI interrupt when the TIMEOUT status is asserted. 1=Enable Interrupt; 0=Disable Interrupt Position */
#define IMSPI_INT_ENABLE_TIMEOUT_LE_Msk       (_UINT32_(0x1) << IMSPI_INT_ENABLE_TIMEOUT_LE_Pos)   /* (IMSPI_INT_ENABLE) Assert an IMSPI interrupt when the TIMEOUT status is asserted. 1=Enable Interrupt; 0=Disable Interrupt Mask */
#define IMSPI_INT_ENABLE_TIMEOUT_LE(value)    (IMSPI_INT_ENABLE_TIMEOUT_LE_Msk & (_UINT32_(value) << IMSPI_INT_ENABLE_TIMEOUT_LE_Pos)) /* Assigment of value for TIMEOUT_LE in the IMSPI_INT_ENABLE register */
#define IMSPI_INT_ENABLE_INVALID_RESPONSE_LE_Pos _UINT32_(1)                                          /* (IMSPI_INT_ENABLE) Assert an EEPROM interrupt when the INVALID_RESPONSE status is asserted. 1=Enable Interrupt; 0=Disable Interrupt Position */
#define IMSPI_INT_ENABLE_INVALID_RESPONSE_LE_Msk (_UINT32_(0x1) << IMSPI_INT_ENABLE_INVALID_RESPONSE_LE_Pos) /* (IMSPI_INT_ENABLE) Assert an EEPROM interrupt when the INVALID_RESPONSE status is asserted. 1=Enable Interrupt; 0=Disable Interrupt Mask */
#define IMSPI_INT_ENABLE_INVALID_RESPONSE_LE(value) (IMSPI_INT_ENABLE_INVALID_RESPONSE_LE_Msk & (_UINT32_(value) << IMSPI_INT_ENABLE_INVALID_RESPONSE_LE_Pos)) /* Assigment of value for INVALID_RESPONSE_LE in the IMSPI_INT_ENABLE register */
#define IMSPI_INT_ENABLE_Msk                  _UINT32_(0x00000003)                                 /* (IMSPI_INT_ENABLE) Register Mask  */


/* -------- IMSPI_TIMEOUT_CONTROL : (IMSPI Offset: 0x0C) (R/W 32) IMSPI Timeout Control Register -------- */
#define IMSPI_TIMEOUT_CONTROL_RESETVALUE      _UINT32_(0x00)                                       /*  (IMSPI_TIMEOUT_CONTROL) IMSPI Timeout Control Register  Reset Value */

#define IMSPI_TIMEOUT_CONTROL_RESPONSE_TIMEOUT_Pos _UINT32_(0)                                          /* (IMSPI_TIMEOUT_CONTROL) This field is the maximum number of response cycles the IMSPI will wait until flagging a timeout. A setting of 0 will      disable the timeout feature. Position */
#define IMSPI_TIMEOUT_CONTROL_RESPONSE_TIMEOUT_Msk (_UINT32_(0x1F) << IMSPI_TIMEOUT_CONTROL_RESPONSE_TIMEOUT_Pos) /* (IMSPI_TIMEOUT_CONTROL) This field is the maximum number of response cycles the IMSPI will wait until flagging a timeout. A setting of 0 will      disable the timeout feature. Mask */
#define IMSPI_TIMEOUT_CONTROL_RESPONSE_TIMEOUT(value) (IMSPI_TIMEOUT_CONTROL_RESPONSE_TIMEOUT_Msk & (_UINT32_(value) << IMSPI_TIMEOUT_CONTROL_RESPONSE_TIMEOUT_Pos)) /* Assigment of value for RESPONSE_TIMEOUT in the IMSPI_TIMEOUT_CONTROL register */
#define IMSPI_TIMEOUT_CONTROL_Msk             _UINT32_(0x0000001F)                                 /* (IMSPI_TIMEOUT_CONTROL) Register Mask  */


/** \brief IMSPI register offsets definitions */
#define IMSPI_MODE_REG_OFST            _UINT32_(0x00)      /* (IMSPI_MODE) IMSPI Mode Register Offset */
#define IMSPI_STATUS_REG_OFST          _UINT32_(0x04)      /* (IMSPI_STATUS) IMSPI Status Register Offset */
#define IMSPI_INT_ENABLE_REG_OFST      _UINT32_(0x08)      /* (IMSPI_INT_ENABLE) IMSPI Interrupt Enable Register Offset */
#define IMSPI_TIMEOUT_CONTROL_REG_OFST _UINT32_(0x0C)      /* (IMSPI_TIMEOUT_CONTROL) IMSPI Timeout Control Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief IMSPI register API structure */
typedef struct
{  /* Internal Master SPI. */
  __IO  uint32_t                       IMSPI_MODE;         /**< Offset: 0x00 (R/W  32) IMSPI Mode Register */
  __IO  uint32_t                       IMSPI_STATUS;       /**< Offset: 0x04 (R/W  32) IMSPI Status Register */
  __IO  uint32_t                       IMSPI_INT_ENABLE;   /**< Offset: 0x08 (R/W  32) IMSPI Interrupt Enable Register */
  __IO  uint32_t                       IMSPI_TIMEOUT_CONTROL; /**< Offset: 0x0C (R/W  32) IMSPI Timeout Control Register */
} imspi_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_IMSPI_COMPONENT_H_ */
