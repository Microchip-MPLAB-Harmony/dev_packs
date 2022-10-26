/*
 * Component description for TIMER32
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
#ifndef _CEC_TIMER32_COMPONENT_H_
#define _CEC_TIMER32_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR TIMER32                                      */
/* ************************************************************************** */

/* -------- TIMER32_CNT : (TIMER32 Offset: 0x00) (R/W 32) This is the value of the Timer counter. This is updated by Hardware but may be set by Firmware. -------- */
#define TIMER32_CNT_RESETVALUE                _UINT32_(0x00)                                       /*  (TIMER32_CNT) This is the value of the Timer counter. This is updated by Hardware but may be set by Firmware.  Reset Value */

#define TIMER32_CNT_Msk                       _UINT32_(0x00000000)                                 /* (TIMER32_CNT) Register Mask  */


/* -------- TIMER32_PRLD : (TIMER32 Offset: 0x04) (R/W 32) This is the value of the Timer pre-load for the counter. This is used by H/W when the counter is to be restarted    automatically; this will become the new value of the counter upon restart. -------- */
#define TIMER32_PRLD_RESETVALUE               _UINT32_(0x00)                                       /*  (TIMER32_PRLD) This is the value of the Timer pre-load for the counter. This is used by H/W when the counter is to be restarted    automatically; this will become the new value of the counter upon restart.  Reset Value */

#define TIMER32_PRLD_Msk                      _UINT32_(0x00000000)                                 /* (TIMER32_PRLD) Register Mask  */


/* -------- TIMER32_STS : (TIMER32 Offset: 0x08) (R/W 32) This is the interrupt status that fires when the timer reaches its limit -------- */
#define TIMER32_STS_RESETVALUE                _UINT32_(0x00)                                       /*  (TIMER32_STS) This is the interrupt status that fires when the timer reaches its limit  Reset Value */

#define TIMER32_STS_EVT_INT_Pos               _UINT32_(0)                                          /* (TIMER32_STS) This is the interrupt status that fires when the timer reaches its limit. This is the interrupt status that fires when        the timer reaches its limit. This may be level or a self clearing signal cycle pulse, based on the AUTO_RESTART bit in the Timer        Control Register. If the timer is set to automatically restart, it will provide a pulse, otherwise a level is provided.(R/WC) Position */
#define TIMER32_STS_EVT_INT_Msk               (_UINT32_(0x1) << TIMER32_STS_EVT_INT_Pos)           /* (TIMER32_STS) This is the interrupt status that fires when the timer reaches its limit. This is the interrupt status that fires when        the timer reaches its limit. This may be level or a self clearing signal cycle pulse, based on the AUTO_RESTART bit in the Timer        Control Register. If the timer is set to automatically restart, it will provide a pulse, otherwise a level is provided.(R/WC) Mask */
#define TIMER32_STS_EVT_INT(value)            (TIMER32_STS_EVT_INT_Msk & (_UINT32_(value) << TIMER32_STS_EVT_INT_Pos)) /* Assigment of value for EVT_INT in the TIMER32_STS register */
#define TIMER32_STS_Msk                       _UINT32_(0x00000001)                                 /* (TIMER32_STS) Register Mask  */


/* -------- TIMER32_IEN : (TIMER32 Offset: 0x0C) (R/W 32) This is the interrupt enable for the status EVENT_INTERRUPT bit in the Timer Status Register -------- */
#define TIMER32_IEN_RESETVALUE                _UINT32_(0x00)                                       /*  (TIMER32_IEN) This is the interrupt enable for the status EVENT_INTERRUPT bit in the Timer Status Register  Reset Value */

#define TIMER32_IEN_EN_Pos                    _UINT32_(0)                                          /* (TIMER32_IEN) This is the interrupt enable for the status EVENT_INTERRUPT bit in the Timer Status Register. Position */
#define TIMER32_IEN_EN_Msk                    (_UINT32_(0x1) << TIMER32_IEN_EN_Pos)                /* (TIMER32_IEN) This is the interrupt enable for the status EVENT_INTERRUPT bit in the Timer Status Register. Mask */
#define TIMER32_IEN_EN(value)                 (TIMER32_IEN_EN_Msk & (_UINT32_(value) << TIMER32_IEN_EN_Pos)) /* Assigment of value for EN in the TIMER32_IEN register */
#define TIMER32_IEN_Msk                       _UINT32_(0x00000001)                                 /* (TIMER32_IEN) Register Mask  */


/* -------- TIMER32_CTRL : (TIMER32 Offset: 0x10) (R/W 32) Timer Control Register -------- */
#define TIMER32_CTRL_RESETVALUE               _UINT32_(0x00)                                       /*  (TIMER32_CTRL) Timer Control Register  Reset Value */

#define TIMER32_CTRL_EN_Pos                   _UINT32_(0)                                          /* (TIMER32_CTRL) This enables the block for operation. 1=This block will function normally;     0=This block will gate its clock and go into its lowest power state Position */
#define TIMER32_CTRL_EN_Msk                   (_UINT32_(0x1) << TIMER32_CTRL_EN_Pos)               /* (TIMER32_CTRL) This enables the block for operation. 1=This block will function normally;     0=This block will gate its clock and go into its lowest power state Mask */
#define TIMER32_CTRL_EN(value)                (TIMER32_CTRL_EN_Msk & (_UINT32_(value) << TIMER32_CTRL_EN_Pos)) /* Assigment of value for EN in the TIMER32_CTRL register */
#define TIMER32_CTRL_CNT_UP_Pos               _UINT32_(2)                                          /* (TIMER32_CTRL) This selects the counter direction. When the counter in incrementing the counter will saturate and trigger the event     when it reaches all F's. When the counter is decrementing the counter will saturate when it reaches 0h. 1=The counter will increment;     0=The counter will decrement Position */
#define TIMER32_CTRL_CNT_UP_Msk               (_UINT32_(0x1) << TIMER32_CTRL_CNT_UP_Pos)           /* (TIMER32_CTRL) This selects the counter direction. When the counter in incrementing the counter will saturate and trigger the event     when it reaches all F's. When the counter is decrementing the counter will saturate when it reaches 0h. 1=The counter will increment;     0=The counter will decrement Mask */
#define TIMER32_CTRL_CNT_UP(value)            (TIMER32_CTRL_CNT_UP_Msk & (_UINT32_(value) << TIMER32_CTRL_CNT_UP_Pos)) /* Assigment of value for CNT_UP in the TIMER32_CTRL register */
#define TIMER32_CTRL_AU_RESTRT_Pos            _UINT32_(3)                                          /* (TIMER32_CTRL) This will select the action taken upon completing a count.     1=The counter will automatically restart the count, using the contents of the Timer Preload Register to load the Timer Count Register.     The interrupt will be set in edge mode     0=The counter will simply enter a done state and wait for further control inputs. The interrupt will be set in level mode. Position */
#define TIMER32_CTRL_AU_RESTRT_Msk            (_UINT32_(0x1) << TIMER32_CTRL_AU_RESTRT_Pos)        /* (TIMER32_CTRL) This will select the action taken upon completing a count.     1=The counter will automatically restart the count, using the contents of the Timer Preload Register to load the Timer Count Register.     The interrupt will be set in edge mode     0=The counter will simply enter a done state and wait for further control inputs. The interrupt will be set in level mode. Mask */
#define TIMER32_CTRL_AU_RESTRT(value)         (TIMER32_CTRL_AU_RESTRT_Msk & (_UINT32_(value) << TIMER32_CTRL_AU_RESTRT_Pos)) /* Assigment of value for AU_RESTRT in the TIMER32_CTRL register */
#define TIMER32_CTRL_SFT_RST_Pos              _UINT32_(4)                                          /* (TIMER32_CTRL) This is a soft reset. This is self clearing 1 cycle after it is written. Firmware does not need     to wait before reconfiguring the Basic Timer following soft reset. Position */
#define TIMER32_CTRL_SFT_RST_Msk              (_UINT32_(0x1) << TIMER32_CTRL_SFT_RST_Pos)          /* (TIMER32_CTRL) This is a soft reset. This is self clearing 1 cycle after it is written. Firmware does not need     to wait before reconfiguring the Basic Timer following soft reset. Mask */
#define TIMER32_CTRL_SFT_RST(value)           (TIMER32_CTRL_SFT_RST_Msk & (_UINT32_(value) << TIMER32_CTRL_SFT_RST_Pos)) /* Assigment of value for SFT_RST in the TIMER32_CTRL register */
#define TIMER32_CTRL_STRT_Pos                 _UINT32_(5)                                          /* (TIMER32_CTRL) This bit triggers the timer counter. The counter will operate until it hits its terminating condition. This will     clear this bit. It should be noted that when operating in restart mode, there is no terminating condition for the counter, so     this bit will never clear. Clearing this bit will halt the timer counter. Position */
#define TIMER32_CTRL_STRT_Msk                 (_UINT32_(0x1) << TIMER32_CTRL_STRT_Pos)             /* (TIMER32_CTRL) This bit triggers the timer counter. The counter will operate until it hits its terminating condition. This will     clear this bit. It should be noted that when operating in restart mode, there is no terminating condition for the counter, so     this bit will never clear. Clearing this bit will halt the timer counter. Mask */
#define TIMER32_CTRL_STRT(value)              (TIMER32_CTRL_STRT_Msk & (_UINT32_(value) << TIMER32_CTRL_STRT_Pos)) /* Assigment of value for STRT in the TIMER32_CTRL register */
#define TIMER32_CTRL_RLD_Pos                  _UINT32_(6)                                          /* (TIMER32_CTRL) This bit reloads the counter without interrupting it operation. This will not function if the timer has already     completed (when the START bit in this register is '0'). This is used to periodically prevent the timer from firing when an     event occurs. Usage while the timer is off may result in erroneous behaviour. Position */
#define TIMER32_CTRL_RLD_Msk                  (_UINT32_(0x1) << TIMER32_CTRL_RLD_Pos)              /* (TIMER32_CTRL) This bit reloads the counter without interrupting it operation. This will not function if the timer has already     completed (when the START bit in this register is '0'). This is used to periodically prevent the timer from firing when an     event occurs. Usage while the timer is off may result in erroneous behaviour. Mask */
#define TIMER32_CTRL_RLD(value)               (TIMER32_CTRL_RLD_Msk & (_UINT32_(value) << TIMER32_CTRL_RLD_Pos)) /* Assigment of value for RLD in the TIMER32_CTRL register */
#define TIMER32_CTRL_HLT_Pos                  _UINT32_(7)                                          /* (TIMER32_CTRL) This is a halt bit. This will halt the timer as long as it is active. Once the halt is inactive, the timer will     start from where it left off. 1=Timer is halted. It stops counting. The clock divider will also be reset. 0=Timer runs normally. Position */
#define TIMER32_CTRL_HLT_Msk                  (_UINT32_(0x1) << TIMER32_CTRL_HLT_Pos)              /* (TIMER32_CTRL) This is a halt bit. This will halt the timer as long as it is active. Once the halt is inactive, the timer will     start from where it left off. 1=Timer is halted. It stops counting. The clock divider will also be reset. 0=Timer runs normally. Mask */
#define TIMER32_CTRL_HLT(value)               (TIMER32_CTRL_HLT_Msk & (_UINT32_(value) << TIMER32_CTRL_HLT_Pos)) /* Assigment of value for HLT in the TIMER32_CTRL register */
#define TIMER32_CTRL_PRESCALE_Pos             _UINT32_(16)                                         /* (TIMER32_CTRL) This is used to divide down the system clock through clock enables to lower the power consumption of the block and allow     slow timers. Updating this value during operation may result in erroneous clock enable pulses until the clock divider restarts.     The number of clocks per clock enable pulse is (Value + 1); a setting of 0 runs at the full clock speed, while a setting of 1     runs at half speed. Position */
#define TIMER32_CTRL_PRESCALE_Msk             (_UINT32_(0xFFFF) << TIMER32_CTRL_PRESCALE_Pos)      /* (TIMER32_CTRL) This is used to divide down the system clock through clock enables to lower the power consumption of the block and allow     slow timers. Updating this value during operation may result in erroneous clock enable pulses until the clock divider restarts.     The number of clocks per clock enable pulse is (Value + 1); a setting of 0 runs at the full clock speed, while a setting of 1     runs at half speed. Mask */
#define TIMER32_CTRL_PRESCALE(value)          (TIMER32_CTRL_PRESCALE_Msk & (_UINT32_(value) << TIMER32_CTRL_PRESCALE_Pos)) /* Assigment of value for PRESCALE in the TIMER32_CTRL register */
#define TIMER32_CTRL_Msk                      _UINT32_(0xFFFF00FD)                                 /* (TIMER32_CTRL) Register Mask  */


/** \brief TIMER32 register offsets definitions */
#define TIMER32_CNT_REG_OFST           _UINT32_(0x00)      /* (TIMER32_CNT) This is the value of the Timer counter. This is updated by Hardware but may be set by Firmware. Offset */
#define TIMER32_PRLD_REG_OFST          _UINT32_(0x04)      /* (TIMER32_PRLD) This is the value of the Timer pre-load for the counter. This is used by H/W when the counter is to be restarted    automatically; this will become the new value of the counter upon restart. Offset */
#define TIMER32_STS_REG_OFST           _UINT32_(0x08)      /* (TIMER32_STS) This is the interrupt status that fires when the timer reaches its limit Offset */
#define TIMER32_IEN_REG_OFST           _UINT32_(0x0C)      /* (TIMER32_IEN) This is the interrupt enable for the status EVENT_INTERRUPT bit in the Timer Status Register Offset */
#define TIMER32_CTRL_REG_OFST          _UINT32_(0x10)      /* (TIMER32_CTRL) Timer Control Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief TIMER32 register API structure */
typedef struct
{  /* This 32-bit timer block offers a simple mechanism for firmware to maintain a time base. */
  __IO  uint32_t                       TIMER32_CNT;        /**< Offset: 0x00 (R/W  32) This is the value of the Timer counter. This is updated by Hardware but may be set by Firmware. */
  __IO  uint32_t                       TIMER32_PRLD;       /**< Offset: 0x04 (R/W  32) This is the value of the Timer pre-load for the counter. This is used by H/W when the counter is to be restarted    automatically; this will become the new value of the counter upon restart. */
  __IO  uint32_t                       TIMER32_STS;        /**< Offset: 0x08 (R/W  32) This is the interrupt status that fires when the timer reaches its limit */
  __IO  uint32_t                       TIMER32_IEN;        /**< Offset: 0x0C (R/W  32) This is the interrupt enable for the status EVENT_INTERRUPT bit in the Timer Status Register */
  __IO  uint32_t                       TIMER32_CTRL;       /**< Offset: 0x10 (R/W  32) Timer Control Register */
} timer32_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _CEC_TIMER32_COMPONENT_H_ */
