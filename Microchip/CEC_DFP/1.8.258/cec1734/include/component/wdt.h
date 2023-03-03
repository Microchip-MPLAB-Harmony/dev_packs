/*
 * Component description for WDT
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
#ifndef _CEC_WDT_COMPONENT_H_
#define _CEC_WDT_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR WDT                                          */
/* ************************************************************************** */

/* -------- WDT_LOAD : (WDT Offset: 0x00) (R/W 16) Writing this field reloads the Watch Dog Timer counter. -------- */
#define WDT_LOAD_RESETVALUE                   _UINT16_(0xFFFF)                                     /*  (WDT_LOAD) Writing this field reloads the Watch Dog Timer counter.  Reset Value */

#define WDT_LOAD_Msk                          _UINT16_(0x0000)                                     /* (WDT_LOAD) Register Mask  */


/* -------- WDT_CTRL : (WDT Offset: 0x04) (R/W 16) WDT Control Register -------- */
#define WDT_CTRL_RESETVALUE                   _UINT16_(0x00)                                       /*  (WDT_CTRL) WDT Control Register  Reset Value */

#define WDT_CTRL_WDT_EN_Pos                   _UINT16_(0)                                          /* (WDT_CTRL) WDT Block enabled Position */
#define WDT_CTRL_WDT_EN_Msk                   (_UINT16_(0x1) << WDT_CTRL_WDT_EN_Pos)               /* (WDT_CTRL) WDT Block enabled Mask */
#define WDT_CTRL_WDT_EN(value)                (WDT_CTRL_WDT_EN_Msk & (_UINT16_(value) << WDT_CTRL_WDT_EN_Pos)) /* Assigment of value for WDT_EN in the WDT_CTRL register */
#define WDT_CTRL_WDT_STS_Pos                  _UINT16_(1)                                          /* (WDT_CTRL) WDT_STATUS is set by hardware if the last reset of the device was caused by an underflow of the WDT. This bit must      be cleared by the EC firmware writing a '1' to this bit. Writing a '0' to this bit has no effect. Position */
#define WDT_CTRL_WDT_STS_Msk                  (_UINT16_(0x1) << WDT_CTRL_WDT_STS_Pos)              /* (WDT_CTRL) WDT_STATUS is set by hardware if the last reset of the device was caused by an underflow of the WDT. This bit must      be cleared by the EC firmware writing a '1' to this bit. Writing a '0' to this bit has no effect. Mask */
#define WDT_CTRL_WDT_STS(value)               (WDT_CTRL_WDT_STS_Msk & (_UINT16_(value) << WDT_CTRL_WDT_STS_Pos)) /* Assigment of value for WDT_STS in the WDT_CTRL register */
#define WDT_CTRL_HIB_TMR0_STL_Pos             _UINT16_(2)                                          /* (WDT_CTRL) This bit enables the WDT Stall function if the Hibernation Timer 0 is active.      1=The WDT is stalled while the Hibernation Timer 0 is active      0=The WDT is not affected by Hibernation Timer 0. Position */
#define WDT_CTRL_HIB_TMR0_STL_Msk             (_UINT16_(0x1) << WDT_CTRL_HIB_TMR0_STL_Pos)         /* (WDT_CTRL) This bit enables the WDT Stall function if the Hibernation Timer 0 is active.      1=The WDT is stalled while the Hibernation Timer 0 is active      0=The WDT is not affected by Hibernation Timer 0. Mask */
#define WDT_CTRL_HIB_TMR0_STL(value)          (WDT_CTRL_HIB_TMR0_STL_Msk & (_UINT16_(value) << WDT_CTRL_HIB_TMR0_STL_Pos)) /* Assigment of value for HIB_TMR0_STL in the WDT_CTRL register */
#define WDT_CTRL_WK_TMR_STL_Pos               _UINT16_(3)                                          /* (WDT_CTRL) This bit enables the WDT Stall function if the Week Timer is active.      1=The WDT is stalled while the Week Timer is active      0=The WDT is not affected by the Week Timer. Position */
#define WDT_CTRL_WK_TMR_STL_Msk               (_UINT16_(0x1) << WDT_CTRL_WK_TMR_STL_Pos)           /* (WDT_CTRL) This bit enables the WDT Stall function if the Week Timer is active.      1=The WDT is stalled while the Week Timer is active      0=The WDT is not affected by the Week Timer. Mask */
#define WDT_CTRL_WK_TMR_STL(value)            (WDT_CTRL_WK_TMR_STL_Msk & (_UINT16_(value) << WDT_CTRL_WK_TMR_STL_Pos)) /* Assigment of value for WK_TMR_STL in the WDT_CTRL register */
#define WDT_CTRL_JTAG_STL_Pos                 _UINT16_(4)                                          /* (WDT_CTRL) This bit enables the WDT Stall function if JTAG or SWD debug functions are active      1=The WDT is stalled while either JTAG or SWD is active      0=The WDT is not affected by the JTAG debug interface. Position */
#define WDT_CTRL_JTAG_STL_Msk                 (_UINT16_(0x1) << WDT_CTRL_JTAG_STL_Pos)             /* (WDT_CTRL) This bit enables the WDT Stall function if JTAG or SWD debug functions are active      1=The WDT is stalled while either JTAG or SWD is active      0=The WDT is not affected by the JTAG debug interface. Mask */
#define WDT_CTRL_JTAG_STL(value)              (WDT_CTRL_JTAG_STL_Msk & (_UINT16_(value) << WDT_CTRL_JTAG_STL_Pos)) /* Assigment of value for JTAG_STL in the WDT_CTRL register */
#define WDT_CTRL_WDT_RST_Pos                  _UINT16_(9)                                          /* (WDT_CTRL) If the WDT_RESET bit is set and the watch dog timer expires, the Watch dog module will         generate interrupt and clear the WDT_RESET to 0b. Position */
#define WDT_CTRL_WDT_RST_Msk                  (_UINT16_(0x1) << WDT_CTRL_WDT_RST_Pos)              /* (WDT_CTRL) If the WDT_RESET bit is set and the watch dog timer expires, the Watch dog module will         generate interrupt and clear the WDT_RESET to 0b. Mask */
#define WDT_CTRL_WDT_RST(value)               (WDT_CTRL_WDT_RST_Msk & (_UINT16_(value) << WDT_CTRL_WDT_RST_Pos)) /* Assigment of value for WDT_RST in the WDT_CTRL register */
#define WDT_CTRL_Msk                          _UINT16_(0x021F)                                     /* (WDT_CTRL) Register Mask  */


/* -------- WDT_KICK : (WDT Offset: 0x08) ( /W 8) The WDT Kick Register is a strobe. Reads of this register return 0. Writes to this register cause the WDT to reload     the WDT Load Register value and start decrementing when the WDT_ENABLE bit in the WDT Control Register is set to '1'. When the WDT_ENABLE     bit in the WDT Control Register is cleared to '0', writes to the WDT Kick Register have no effect. -------- */
#define WDT_KICK_RESETVALUE                   _UINT8_(0x00)                                        /*  (WDT_KICK) The WDT Kick Register is a strobe. Reads of this register return 0. Writes to this register cause the WDT to reload     the WDT Load Register value and start decrementing when the WDT_ENABLE bit in the WDT Control Register is set to '1'. When the WDT_ENABLE     bit in the WDT Control Register is cleared to '0', writes to the WDT Kick Register have no effect.  Reset Value */

#define WDT_KICK_Msk                          _UINT8_(0x00)                                        /* (WDT_KICK) Register Mask  */


/* -------- WDT_CNT : (WDT Offset: 0x0C) ( R/ 16) This read-only register provides the current WDT count. -------- */
#define WDT_CNT_RESETVALUE                    _UINT16_(0xFFFF)                                     /*  (WDT_CNT) This read-only register provides the current WDT count.  Reset Value */

#define WDT_CNT_Msk                           _UINT16_(0x0000)                                     /* (WDT_CNT) Register Mask  */


/* -------- WDT_STS : (WDT Offset: 0x10) (R/W 8) This register provides the current WDT count. -------- */
#define WDT_STS_RESETVALUE                    _UINT8_(0x00)                                        /*  (WDT_STS) This register provides the current WDT count.  Reset Value */

#define WDT_STS_WDT_EV_IRQ_Pos                _UINT8_(0)                                           /* (WDT_STS) WDT_EVENT_IRQ : This bit indicates the status of interrupt from Watch dog module. Position */
#define WDT_STS_WDT_EV_IRQ_Msk                (_UINT8_(0x1) << WDT_STS_WDT_EV_IRQ_Pos)             /* (WDT_STS) WDT_EVENT_IRQ : This bit indicates the status of interrupt from Watch dog module. Mask */
#define WDT_STS_WDT_EV_IRQ(value)             (WDT_STS_WDT_EV_IRQ_Msk & (_UINT8_(value) << WDT_STS_WDT_EV_IRQ_Pos)) /* Assigment of value for WDT_EV_IRQ in the WDT_STS register */
#define WDT_STS_Msk                           _UINT8_(0x01)                                        /* (WDT_STS) Register Mask  */


/* -------- WDT_IEN : (WDT Offset: 0x14) (R/W 8) Watch Dog Interrupt Enable Register. -------- */
#define WDT_IEN_RESETVALUE                    _UINT8_(0x00)                                        /*  (WDT_IEN) Watch Dog Interrupt Enable Register.  Reset Value */

#define WDT_IEN_WDT_INTEN_Pos                 _UINT8_(0)                                           /* (WDT_IEN) WDT_Int_Enable: This is the interrupt enables bit for WDT_INT interrupt.                   1= WDT_INT Interrupt Enable                   0= WDT_INT Interrupt Disabled Position */
#define WDT_IEN_WDT_INTEN_Msk                 (_UINT8_(0x1) << WDT_IEN_WDT_INTEN_Pos)              /* (WDT_IEN) WDT_Int_Enable: This is the interrupt enables bit for WDT_INT interrupt.                   1= WDT_INT Interrupt Enable                   0= WDT_INT Interrupt Disabled Mask */
#define WDT_IEN_WDT_INTEN(value)              (WDT_IEN_WDT_INTEN_Msk & (_UINT8_(value) << WDT_IEN_WDT_INTEN_Pos)) /* Assigment of value for WDT_INTEN in the WDT_IEN register */
#define WDT_IEN_Msk                           _UINT8_(0x01)                                        /* (WDT_IEN) Register Mask  */


/** \brief WDT register offsets definitions */
#define WDT_LOAD_REG_OFST              _UINT32_(0x00)      /* (WDT_LOAD) Writing this field reloads the Watch Dog Timer counter. Offset */
#define WDT_CTRL_REG_OFST              _UINT32_(0x04)      /* (WDT_CTRL) WDT Control Register Offset */
#define WDT_KICK_REG_OFST              _UINT32_(0x08)      /* (WDT_KICK) The WDT Kick Register is a strobe. Reads of this register return 0. Writes to this register cause the WDT to reload     the WDT Load Register value and start decrementing when the WDT_ENABLE bit in the WDT Control Register is set to '1'. When the WDT_ENABLE     bit in the WDT Control Register is cleared to '0', writes to the WDT Kick Register have no effect. Offset */
#define WDT_CNT_REG_OFST               _UINT32_(0x0C)      /* (WDT_CNT) This read-only register provides the current WDT count. Offset */
#define WDT_STS_REG_OFST               _UINT32_(0x10)      /* (WDT_STS) This register provides the current WDT count. Offset */
#define WDT_IEN_REG_OFST               _UINT32_(0x14)      /* (WDT_IEN) Watch Dog Interrupt Enable Register. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief WDT register API structure */
typedef struct
{  /* The function of the Watchdog Timer is to provide a mechanism to detect if the internal embedded controller has failed. */
  __IO  uint16_t                       WDT_LOAD;           /**< Offset: 0x00 (R/W  16) Writing this field reloads the Watch Dog Timer counter. */
  __I   uint8_t                        Reserved1[0x02];
  __IO  uint16_t                       WDT_CTRL;           /**< Offset: 0x04 (R/W  16) WDT Control Register */
  __I   uint8_t                        Reserved2[0x02];
  __O   uint8_t                        WDT_KICK;           /**< Offset: 0x08 ( /W  8) The WDT Kick Register is a strobe. Reads of this register return 0. Writes to this register cause the WDT to reload     the WDT Load Register value and start decrementing when the WDT_ENABLE bit in the WDT Control Register is set to '1'. When the WDT_ENABLE     bit in the WDT Control Register is cleared to '0', writes to the WDT Kick Register have no effect. */
  __I   uint8_t                        Reserved3[0x03];
  __I   uint16_t                       WDT_CNT;            /**< Offset: 0x0C (R/   16) This read-only register provides the current WDT count. */
  __I   uint8_t                        Reserved4[0x02];
  __IO  uint8_t                        WDT_STS;            /**< Offset: 0x10 (R/W  8) This register provides the current WDT count. */
  __I   uint8_t                        Reserved5[0x03];
  __IO  uint8_t                        WDT_IEN;            /**< Offset: 0x14 (R/W  8) Watch Dog Interrupt Enable Register. */
} wdt_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_WDT_COMPONENT_H_ */
