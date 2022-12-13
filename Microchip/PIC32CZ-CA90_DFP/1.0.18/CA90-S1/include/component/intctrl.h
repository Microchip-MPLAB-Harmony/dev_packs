/*
 * Component description for INTCTRL
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

/* file generated from device description version 2022-07-07T23:00:11Z */
#ifndef _PIC32CZCA90_INTCTRL_COMPONENT_H_
#define _PIC32CZCA90_INTCTRL_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR INTCTRL                                      */
/* ************************************************************************** */

/* -------- INTCTRL_STATL : (INTCTRL Offset: 0x00) ( R/ 32) Interrupt Status Register Low -------- */
#define INTCTRL_STATL_RESETVALUE              _UINT32_(0x00)                                       /*  (INTCTRL_STATL) Interrupt Status Register Low  Reset Value */

#define INTCTRL_STATL_RTC_Pos                 _UINT32_(0)                                          /* (INTCTRL_STATL) RTC Interrupt Position */
#define INTCTRL_STATL_RTC_Msk                 (_UINT32_(0x1) << INTCTRL_STATL_RTC_Pos)             /* (INTCTRL_STATL) RTC Interrupt Mask */
#define INTCTRL_STATL_RTC(value)              (INTCTRL_STATL_RTC_Msk & (_UINT32_(value) << INTCTRL_STATL_RTC_Pos)) /* Assigment of value for RTC in the INTCTRL_STATL register */
#define INTCTRL_STATL_TAMPER_Pos              _UINT32_(1)                                          /* (INTCTRL_STATL) Tamper Interrupt Position */
#define INTCTRL_STATL_TAMPER_Msk              (_UINT32_(0x1) << INTCTRL_STATL_TAMPER_Pos)          /* (INTCTRL_STATL) Tamper Interrupt Mask */
#define INTCTRL_STATL_TAMPER(value)           (INTCTRL_STATL_TAMPER_Msk & (_UINT32_(value) << INTCTRL_STATL_TAMPER_Pos)) /* Assigment of value for TAMPER in the INTCTRL_STATL register */
#define INTCTRL_STATL_EXTDMA_Pos              _UINT32_(2)                                          /* (INTCTRL_STATL) External DMA Interrupt Position */
#define INTCTRL_STATL_EXTDMA_Msk              (_UINT32_(0x1) << INTCTRL_STATL_EXTDMA_Pos)          /* (INTCTRL_STATL) External DMA Interrupt Mask */
#define INTCTRL_STATL_EXTDMA(value)           (INTCTRL_STATL_EXTDMA_Msk & (_UINT32_(value) << INTCTRL_STATL_EXTDMA_Pos)) /* Assigment of value for EXTDMA in the INTCTRL_STATL register */
#define INTCTRL_STATL_WDOG_Pos                _UINT32_(3)                                          /* (INTCTRL_STATL) Watch Dog Interrupt Position */
#define INTCTRL_STATL_WDOG_Msk                (_UINT32_(0x1) << INTCTRL_STATL_WDOG_Pos)            /* (INTCTRL_STATL) Watch Dog Interrupt Mask */
#define INTCTRL_STATL_WDOG(value)             (INTCTRL_STATL_WDOG_Msk & (_UINT32_(value) << INTCTRL_STATL_WDOG_Pos)) /* Assigment of value for WDOG in the INTCTRL_STATL register */
#define INTCTRL_STATL_TAMPER_BUSY_Pos         _UINT32_(5)                                          /* (INTCTRL_STATL) Tamper Busy Interrupt Position */
#define INTCTRL_STATL_TAMPER_BUSY_Msk         (_UINT32_(0x1) << INTCTRL_STATL_TAMPER_BUSY_Pos)     /* (INTCTRL_STATL) Tamper Busy Interrupt Mask */
#define INTCTRL_STATL_TAMPER_BUSY(value)      (INTCTRL_STATL_TAMPER_BUSY_Msk & (_UINT32_(value) << INTCTRL_STATL_TAMPER_BUSY_Pos)) /* Assigment of value for TAMPER_BUSY in the INTCTRL_STATL register */
#define INTCTRL_STATL_TIMER0_Pos              _UINT32_(6)                                          /* (INTCTRL_STATL) Timer 0 Interrupt Position */
#define INTCTRL_STATL_TIMER0_Msk              (_UINT32_(0x1) << INTCTRL_STATL_TIMER0_Pos)          /* (INTCTRL_STATL) Timer 0 Interrupt Mask */
#define INTCTRL_STATL_TIMER0(value)           (INTCTRL_STATL_TIMER0_Msk & (_UINT32_(value) << INTCTRL_STATL_TIMER0_Pos)) /* Assigment of value for TIMER0 in the INTCTRL_STATL register */
#define INTCTRL_STATL_TIMER1_Pos              _UINT32_(7)                                          /* (INTCTRL_STATL) Timer 1 interrupt Position */
#define INTCTRL_STATL_TIMER1_Msk              (_UINT32_(0x1) << INTCTRL_STATL_TIMER1_Pos)          /* (INTCTRL_STATL) Timer 1 interrupt Mask */
#define INTCTRL_STATL_TIMER1(value)           (INTCTRL_STATL_TIMER1_Msk & (_UINT32_(value) << INTCTRL_STATL_TIMER1_Pos)) /* Assigment of value for TIMER1 in the INTCTRL_STATL register */
#define INTCTRL_STATL_PWRDOWN_Pos             _UINT32_(11)                                         /* (INTCTRL_STATL) Power Down Interrupt Position */
#define INTCTRL_STATL_PWRDOWN_Msk             (_UINT32_(0x1) << INTCTRL_STATL_PWRDOWN_Pos)         /* (INTCTRL_STATL) Power Down Interrupt Mask */
#define INTCTRL_STATL_PWRDOWN(value)          (INTCTRL_STATL_PWRDOWN_Msk & (_UINT32_(value) << INTCTRL_STATL_PWRDOWN_Pos)) /* Assigment of value for PWRDOWN in the INTCTRL_STATL register */
#define INTCTRL_STATL_MB_TX_Pos               _UINT32_(14)                                         /* (INTCTRL_STATL) Mailbox TX Interrupt Position */
#define INTCTRL_STATL_MB_TX_Msk               (_UINT32_(0x1) << INTCTRL_STATL_MB_TX_Pos)           /* (INTCTRL_STATL) Mailbox TX Interrupt Mask */
#define INTCTRL_STATL_MB_TX(value)            (INTCTRL_STATL_MB_TX_Msk & (_UINT32_(value) << INTCTRL_STATL_MB_TX_Pos)) /* Assigment of value for MB_TX in the INTCTRL_STATL register */
#define INTCTRL_STATL_MB_RX_Pos               _UINT32_(15)                                         /* (INTCTRL_STATL) Mailbox RX Interrupt Position */
#define INTCTRL_STATL_MB_RX_Msk               (_UINT32_(0x1) << INTCTRL_STATL_MB_RX_Pos)           /* (INTCTRL_STATL) Mailbox RX Interrupt Mask */
#define INTCTRL_STATL_MB_RX(value)            (INTCTRL_STATL_MB_RX_Msk & (_UINT32_(value) << INTCTRL_STATL_MB_RX_Pos)) /* Assigment of value for MB_RX in the INTCTRL_STATL register */
#define INTCTRL_STATL_CRYPTO0_Pos             _UINT32_(16)                                         /* (INTCTRL_STATL) Crypto Interrupt 0 Position */
#define INTCTRL_STATL_CRYPTO0_Msk             (_UINT32_(0x1) << INTCTRL_STATL_CRYPTO0_Pos)         /* (INTCTRL_STATL) Crypto Interrupt 0 Mask */
#define INTCTRL_STATL_CRYPTO0(value)          (INTCTRL_STATL_CRYPTO0_Msk & (_UINT32_(value) << INTCTRL_STATL_CRYPTO0_Pos)) /* Assigment of value for CRYPTO0 in the INTCTRL_STATL register */
#define INTCTRL_STATL_CRYPTO1_Pos             _UINT32_(17)                                         /* (INTCTRL_STATL) Crypto Interrupt 1 Position */
#define INTCTRL_STATL_CRYPTO1_Msk             (_UINT32_(0x1) << INTCTRL_STATL_CRYPTO1_Pos)         /* (INTCTRL_STATL) Crypto Interrupt 1 Mask */
#define INTCTRL_STATL_CRYPTO1(value)          (INTCTRL_STATL_CRYPTO1_Msk & (_UINT32_(value) << INTCTRL_STATL_CRYPTO1_Pos)) /* Assigment of value for CRYPTO1 in the INTCTRL_STATL register */
#define INTCTRL_STATL_CRYPTO2_Pos             _UINT32_(18)                                         /* (INTCTRL_STATL) Crypto Interrupt 2 Position */
#define INTCTRL_STATL_CRYPTO2_Msk             (_UINT32_(0x1) << INTCTRL_STATL_CRYPTO2_Pos)         /* (INTCTRL_STATL) Crypto Interrupt 2 Mask */
#define INTCTRL_STATL_CRYPTO2(value)          (INTCTRL_STATL_CRYPTO2_Msk & (_UINT32_(value) << INTCTRL_STATL_CRYPTO2_Pos)) /* Assigment of value for CRYPTO2 in the INTCTRL_STATL register */
#define INTCTRL_STATL_CRYPTO3_Pos             _UINT32_(19)                                         /* (INTCTRL_STATL) Crypto Interrupt 3 Position */
#define INTCTRL_STATL_CRYPTO3_Msk             (_UINT32_(0x1) << INTCTRL_STATL_CRYPTO3_Pos)         /* (INTCTRL_STATL) Crypto Interrupt 3 Mask */
#define INTCTRL_STATL_CRYPTO3(value)          (INTCTRL_STATL_CRYPTO3_Msk & (_UINT32_(value) << INTCTRL_STATL_CRYPTO3_Pos)) /* Assigment of value for CRYPTO3 in the INTCTRL_STATL register */
#define INTCTRL_STATL_Msk                     _UINT32_(0x000FC8EF)                                 /* (INTCTRL_STATL) Register Mask  */

#define INTCTRL_STATL_TIMER_Pos               _UINT32_(6)                                          /* (INTCTRL_STATL Position) Timer x Interrupt */
#define INTCTRL_STATL_TIMER_Msk               (_UINT32_(0x3) << INTCTRL_STATL_TIMER_Pos)           /* (INTCTRL_STATL Mask) TIMER */
#define INTCTRL_STATL_TIMER(value)            (INTCTRL_STATL_TIMER_Msk & (_UINT32_(value) << INTCTRL_STATL_TIMER_Pos)) 
#define INTCTRL_STATL_CRYPTO_Pos              _UINT32_(16)                                         /* (INTCTRL_STATL Position) Crypto Interrupt 3 */
#define INTCTRL_STATL_CRYPTO_Msk              (_UINT32_(0xF) << INTCTRL_STATL_CRYPTO_Pos)          /* (INTCTRL_STATL Mask) CRYPTO */
#define INTCTRL_STATL_CRYPTO(value)           (INTCTRL_STATL_CRYPTO_Msk & (_UINT32_(value) << INTCTRL_STATL_CRYPTO_Pos)) 

/* -------- INTCTRL_RSRL : (INTCTRL Offset: 0x08) (R/W 32) Interrupt Raw Status Register Low -------- */
#define INTCTRL_RSRL_RESETVALUE               _UINT32_(0x00)                                       /*  (INTCTRL_RSRL) Interrupt Raw Status Register Low  Reset Value */

#define INTCTRL_RSRL_RTC_Pos                  _UINT32_(0)                                          /* (INTCTRL_RSRL) RTC Interrupt Position */
#define INTCTRL_RSRL_RTC_Msk                  (_UINT32_(0x1) << INTCTRL_RSRL_RTC_Pos)              /* (INTCTRL_RSRL) RTC Interrupt Mask */
#define INTCTRL_RSRL_RTC(value)               (INTCTRL_RSRL_RTC_Msk & (_UINT32_(value) << INTCTRL_RSRL_RTC_Pos)) /* Assigment of value for RTC in the INTCTRL_RSRL register */
#define INTCTRL_RSRL_TAMPER_Pos               _UINT32_(1)                                          /* (INTCTRL_RSRL) Tamper Interrupt Position */
#define INTCTRL_RSRL_TAMPER_Msk               (_UINT32_(0x1) << INTCTRL_RSRL_TAMPER_Pos)           /* (INTCTRL_RSRL) Tamper Interrupt Mask */
#define INTCTRL_RSRL_TAMPER(value)            (INTCTRL_RSRL_TAMPER_Msk & (_UINT32_(value) << INTCTRL_RSRL_TAMPER_Pos)) /* Assigment of value for TAMPER in the INTCTRL_RSRL register */
#define INTCTRL_RSRL_EXTDMA_Pos               _UINT32_(2)                                          /* (INTCTRL_RSRL) External DMA Interrupt Position */
#define INTCTRL_RSRL_EXTDMA_Msk               (_UINT32_(0x1) << INTCTRL_RSRL_EXTDMA_Pos)           /* (INTCTRL_RSRL) External DMA Interrupt Mask */
#define INTCTRL_RSRL_EXTDMA(value)            (INTCTRL_RSRL_EXTDMA_Msk & (_UINT32_(value) << INTCTRL_RSRL_EXTDMA_Pos)) /* Assigment of value for EXTDMA in the INTCTRL_RSRL register */
#define INTCTRL_RSRL_WDOG_Pos                 _UINT32_(3)                                          /* (INTCTRL_RSRL) Watch Dog Interrupt Position */
#define INTCTRL_RSRL_WDOG_Msk                 (_UINT32_(0x1) << INTCTRL_RSRL_WDOG_Pos)             /* (INTCTRL_RSRL) Watch Dog Interrupt Mask */
#define INTCTRL_RSRL_WDOG(value)              (INTCTRL_RSRL_WDOG_Msk & (_UINT32_(value) << INTCTRL_RSRL_WDOG_Pos)) /* Assigment of value for WDOG in the INTCTRL_RSRL register */
#define INTCTRL_RSRL_TAMPER_BUSY_Pos          _UINT32_(5)                                          /* (INTCTRL_RSRL) Tamper Busy Interrupt Position */
#define INTCTRL_RSRL_TAMPER_BUSY_Msk          (_UINT32_(0x1) << INTCTRL_RSRL_TAMPER_BUSY_Pos)      /* (INTCTRL_RSRL) Tamper Busy Interrupt Mask */
#define INTCTRL_RSRL_TAMPER_BUSY(value)       (INTCTRL_RSRL_TAMPER_BUSY_Msk & (_UINT32_(value) << INTCTRL_RSRL_TAMPER_BUSY_Pos)) /* Assigment of value for TAMPER_BUSY in the INTCTRL_RSRL register */
#define INTCTRL_RSRL_TIMER0_Pos               _UINT32_(6)                                          /* (INTCTRL_RSRL) Timer 0 Interrupt Position */
#define INTCTRL_RSRL_TIMER0_Msk               (_UINT32_(0x1) << INTCTRL_RSRL_TIMER0_Pos)           /* (INTCTRL_RSRL) Timer 0 Interrupt Mask */
#define INTCTRL_RSRL_TIMER0(value)            (INTCTRL_RSRL_TIMER0_Msk & (_UINT32_(value) << INTCTRL_RSRL_TIMER0_Pos)) /* Assigment of value for TIMER0 in the INTCTRL_RSRL register */
#define INTCTRL_RSRL_TIMER1_Pos               _UINT32_(7)                                          /* (INTCTRL_RSRL) Timer 1 interrupt Position */
#define INTCTRL_RSRL_TIMER1_Msk               (_UINT32_(0x1) << INTCTRL_RSRL_TIMER1_Pos)           /* (INTCTRL_RSRL) Timer 1 interrupt Mask */
#define INTCTRL_RSRL_TIMER1(value)            (INTCTRL_RSRL_TIMER1_Msk & (_UINT32_(value) << INTCTRL_RSRL_TIMER1_Pos)) /* Assigment of value for TIMER1 in the INTCTRL_RSRL register */
#define INTCTRL_RSRL_PWRDOWN_Pos              _UINT32_(11)                                         /* (INTCTRL_RSRL) Power Down Interrupt Position */
#define INTCTRL_RSRL_PWRDOWN_Msk              (_UINT32_(0x1) << INTCTRL_RSRL_PWRDOWN_Pos)          /* (INTCTRL_RSRL) Power Down Interrupt Mask */
#define INTCTRL_RSRL_PWRDOWN(value)           (INTCTRL_RSRL_PWRDOWN_Msk & (_UINT32_(value) << INTCTRL_RSRL_PWRDOWN_Pos)) /* Assigment of value for PWRDOWN in the INTCTRL_RSRL register */
#define INTCTRL_RSRL_MB_TX_Pos                _UINT32_(14)                                         /* (INTCTRL_RSRL) Mailbox TX Interrupt Position */
#define INTCTRL_RSRL_MB_TX_Msk                (_UINT32_(0x1) << INTCTRL_RSRL_MB_TX_Pos)            /* (INTCTRL_RSRL) Mailbox TX Interrupt Mask */
#define INTCTRL_RSRL_MB_TX(value)             (INTCTRL_RSRL_MB_TX_Msk & (_UINT32_(value) << INTCTRL_RSRL_MB_TX_Pos)) /* Assigment of value for MB_TX in the INTCTRL_RSRL register */
#define INTCTRL_RSRL_MB_RX_Pos                _UINT32_(15)                                         /* (INTCTRL_RSRL) Mailbox RX Interrupt Position */
#define INTCTRL_RSRL_MB_RX_Msk                (_UINT32_(0x1) << INTCTRL_RSRL_MB_RX_Pos)            /* (INTCTRL_RSRL) Mailbox RX Interrupt Mask */
#define INTCTRL_RSRL_MB_RX(value)             (INTCTRL_RSRL_MB_RX_Msk & (_UINT32_(value) << INTCTRL_RSRL_MB_RX_Pos)) /* Assigment of value for MB_RX in the INTCTRL_RSRL register */
#define INTCTRL_RSRL_CRYPTO0_Pos              _UINT32_(16)                                         /* (INTCTRL_RSRL) Crypto Interrupt 0 Position */
#define INTCTRL_RSRL_CRYPTO0_Msk              (_UINT32_(0x1) << INTCTRL_RSRL_CRYPTO0_Pos)          /* (INTCTRL_RSRL) Crypto Interrupt 0 Mask */
#define INTCTRL_RSRL_CRYPTO0(value)           (INTCTRL_RSRL_CRYPTO0_Msk & (_UINT32_(value) << INTCTRL_RSRL_CRYPTO0_Pos)) /* Assigment of value for CRYPTO0 in the INTCTRL_RSRL register */
#define INTCTRL_RSRL_CRYPTO1_Pos              _UINT32_(17)                                         /* (INTCTRL_RSRL) Crypto Interrupt 1 Position */
#define INTCTRL_RSRL_CRYPTO1_Msk              (_UINT32_(0x1) << INTCTRL_RSRL_CRYPTO1_Pos)          /* (INTCTRL_RSRL) Crypto Interrupt 1 Mask */
#define INTCTRL_RSRL_CRYPTO1(value)           (INTCTRL_RSRL_CRYPTO1_Msk & (_UINT32_(value) << INTCTRL_RSRL_CRYPTO1_Pos)) /* Assigment of value for CRYPTO1 in the INTCTRL_RSRL register */
#define INTCTRL_RSRL_CRYPTO2_Pos              _UINT32_(18)                                         /* (INTCTRL_RSRL) Crypto Interrupt 2 Position */
#define INTCTRL_RSRL_CRYPTO2_Msk              (_UINT32_(0x1) << INTCTRL_RSRL_CRYPTO2_Pos)          /* (INTCTRL_RSRL) Crypto Interrupt 2 Mask */
#define INTCTRL_RSRL_CRYPTO2(value)           (INTCTRL_RSRL_CRYPTO2_Msk & (_UINT32_(value) << INTCTRL_RSRL_CRYPTO2_Pos)) /* Assigment of value for CRYPTO2 in the INTCTRL_RSRL register */
#define INTCTRL_RSRL_CRYPTO3_Pos              _UINT32_(19)                                         /* (INTCTRL_RSRL) Crypto Interrupt 3 Position */
#define INTCTRL_RSRL_CRYPTO3_Msk              (_UINT32_(0x1) << INTCTRL_RSRL_CRYPTO3_Pos)          /* (INTCTRL_RSRL) Crypto Interrupt 3 Mask */
#define INTCTRL_RSRL_CRYPTO3(value)           (INTCTRL_RSRL_CRYPTO3_Msk & (_UINT32_(value) << INTCTRL_RSRL_CRYPTO3_Pos)) /* Assigment of value for CRYPTO3 in the INTCTRL_RSRL register */
#define INTCTRL_RSRL_Msk                      _UINT32_(0x000FC8EF)                                 /* (INTCTRL_RSRL) Register Mask  */

#define INTCTRL_RSRL_TIMER_Pos                _UINT32_(6)                                          /* (INTCTRL_RSRL Position) Timer x Interrupt */
#define INTCTRL_RSRL_TIMER_Msk                (_UINT32_(0x3) << INTCTRL_RSRL_TIMER_Pos)            /* (INTCTRL_RSRL Mask) TIMER */
#define INTCTRL_RSRL_TIMER(value)             (INTCTRL_RSRL_TIMER_Msk & (_UINT32_(value) << INTCTRL_RSRL_TIMER_Pos)) 
#define INTCTRL_RSRL_CRYPTO_Pos               _UINT32_(16)                                         /* (INTCTRL_RSRL Position) Crypto Interrupt 3 */
#define INTCTRL_RSRL_CRYPTO_Msk               (_UINT32_(0xF) << INTCTRL_RSRL_CRYPTO_Pos)           /* (INTCTRL_RSRL Mask) CRYPTO */
#define INTCTRL_RSRL_CRYPTO(value)            (INTCTRL_RSRL_CRYPTO_Msk & (_UINT32_(value) << INTCTRL_RSRL_CRYPTO_Pos)) 

/* -------- INTCTRL_ENAL : (INTCTRL Offset: 0x10) (R/W 32) Interrupt Enable Register Low -------- */
#define INTCTRL_ENAL_RESETVALUE               _UINT32_(0x00)                                       /*  (INTCTRL_ENAL) Interrupt Enable Register Low  Reset Value */

#define INTCTRL_ENAL_RTC_Pos                  _UINT32_(0)                                          /* (INTCTRL_ENAL) RTC Interrupt Position */
#define INTCTRL_ENAL_RTC_Msk                  (_UINT32_(0x1) << INTCTRL_ENAL_RTC_Pos)              /* (INTCTRL_ENAL) RTC Interrupt Mask */
#define INTCTRL_ENAL_RTC(value)               (INTCTRL_ENAL_RTC_Msk & (_UINT32_(value) << INTCTRL_ENAL_RTC_Pos)) /* Assigment of value for RTC in the INTCTRL_ENAL register */
#define INTCTRL_ENAL_TAMPER_Pos               _UINT32_(1)                                          /* (INTCTRL_ENAL) Tamper Interrupt Position */
#define INTCTRL_ENAL_TAMPER_Msk               (_UINT32_(0x1) << INTCTRL_ENAL_TAMPER_Pos)           /* (INTCTRL_ENAL) Tamper Interrupt Mask */
#define INTCTRL_ENAL_TAMPER(value)            (INTCTRL_ENAL_TAMPER_Msk & (_UINT32_(value) << INTCTRL_ENAL_TAMPER_Pos)) /* Assigment of value for TAMPER in the INTCTRL_ENAL register */
#define INTCTRL_ENAL_EXTDMA_Pos               _UINT32_(2)                                          /* (INTCTRL_ENAL) External DMA Interrupt Position */
#define INTCTRL_ENAL_EXTDMA_Msk               (_UINT32_(0x1) << INTCTRL_ENAL_EXTDMA_Pos)           /* (INTCTRL_ENAL) External DMA Interrupt Mask */
#define INTCTRL_ENAL_EXTDMA(value)            (INTCTRL_ENAL_EXTDMA_Msk & (_UINT32_(value) << INTCTRL_ENAL_EXTDMA_Pos)) /* Assigment of value for EXTDMA in the INTCTRL_ENAL register */
#define INTCTRL_ENAL_WDOG_Pos                 _UINT32_(3)                                          /* (INTCTRL_ENAL) Watch Dog Interrupt Position */
#define INTCTRL_ENAL_WDOG_Msk                 (_UINT32_(0x1) << INTCTRL_ENAL_WDOG_Pos)             /* (INTCTRL_ENAL) Watch Dog Interrupt Mask */
#define INTCTRL_ENAL_WDOG(value)              (INTCTRL_ENAL_WDOG_Msk & (_UINT32_(value) << INTCTRL_ENAL_WDOG_Pos)) /* Assigment of value for WDOG in the INTCTRL_ENAL register */
#define INTCTRL_ENAL_TAMPER_BUSY_Pos          _UINT32_(5)                                          /* (INTCTRL_ENAL) Tamper Busy Interrupt Position */
#define INTCTRL_ENAL_TAMPER_BUSY_Msk          (_UINT32_(0x1) << INTCTRL_ENAL_TAMPER_BUSY_Pos)      /* (INTCTRL_ENAL) Tamper Busy Interrupt Mask */
#define INTCTRL_ENAL_TAMPER_BUSY(value)       (INTCTRL_ENAL_TAMPER_BUSY_Msk & (_UINT32_(value) << INTCTRL_ENAL_TAMPER_BUSY_Pos)) /* Assigment of value for TAMPER_BUSY in the INTCTRL_ENAL register */
#define INTCTRL_ENAL_TIMER0_Pos               _UINT32_(6)                                          /* (INTCTRL_ENAL) Timer 0 Interrupt Position */
#define INTCTRL_ENAL_TIMER0_Msk               (_UINT32_(0x1) << INTCTRL_ENAL_TIMER0_Pos)           /* (INTCTRL_ENAL) Timer 0 Interrupt Mask */
#define INTCTRL_ENAL_TIMER0(value)            (INTCTRL_ENAL_TIMER0_Msk & (_UINT32_(value) << INTCTRL_ENAL_TIMER0_Pos)) /* Assigment of value for TIMER0 in the INTCTRL_ENAL register */
#define INTCTRL_ENAL_TIMER1_Pos               _UINT32_(7)                                          /* (INTCTRL_ENAL) Timer 1 interrupt Position */
#define INTCTRL_ENAL_TIMER1_Msk               (_UINT32_(0x1) << INTCTRL_ENAL_TIMER1_Pos)           /* (INTCTRL_ENAL) Timer 1 interrupt Mask */
#define INTCTRL_ENAL_TIMER1(value)            (INTCTRL_ENAL_TIMER1_Msk & (_UINT32_(value) << INTCTRL_ENAL_TIMER1_Pos)) /* Assigment of value for TIMER1 in the INTCTRL_ENAL register */
#define INTCTRL_ENAL_PWRDOWN_Pos              _UINT32_(11)                                         /* (INTCTRL_ENAL) Power Down Interrupt Position */
#define INTCTRL_ENAL_PWRDOWN_Msk              (_UINT32_(0x1) << INTCTRL_ENAL_PWRDOWN_Pos)          /* (INTCTRL_ENAL) Power Down Interrupt Mask */
#define INTCTRL_ENAL_PWRDOWN(value)           (INTCTRL_ENAL_PWRDOWN_Msk & (_UINT32_(value) << INTCTRL_ENAL_PWRDOWN_Pos)) /* Assigment of value for PWRDOWN in the INTCTRL_ENAL register */
#define INTCTRL_ENAL_MB_TX_Pos                _UINT32_(14)                                         /* (INTCTRL_ENAL) Mailbox TX Interrupt Position */
#define INTCTRL_ENAL_MB_TX_Msk                (_UINT32_(0x1) << INTCTRL_ENAL_MB_TX_Pos)            /* (INTCTRL_ENAL) Mailbox TX Interrupt Mask */
#define INTCTRL_ENAL_MB_TX(value)             (INTCTRL_ENAL_MB_TX_Msk & (_UINT32_(value) << INTCTRL_ENAL_MB_TX_Pos)) /* Assigment of value for MB_TX in the INTCTRL_ENAL register */
#define INTCTRL_ENAL_MB_RX_Pos                _UINT32_(15)                                         /* (INTCTRL_ENAL) Mailbox RX Interrupt Position */
#define INTCTRL_ENAL_MB_RX_Msk                (_UINT32_(0x1) << INTCTRL_ENAL_MB_RX_Pos)            /* (INTCTRL_ENAL) Mailbox RX Interrupt Mask */
#define INTCTRL_ENAL_MB_RX(value)             (INTCTRL_ENAL_MB_RX_Msk & (_UINT32_(value) << INTCTRL_ENAL_MB_RX_Pos)) /* Assigment of value for MB_RX in the INTCTRL_ENAL register */
#define INTCTRL_ENAL_CRYPTO0_Pos              _UINT32_(16)                                         /* (INTCTRL_ENAL) Crypto Interrupt 0 Position */
#define INTCTRL_ENAL_CRYPTO0_Msk              (_UINT32_(0x1) << INTCTRL_ENAL_CRYPTO0_Pos)          /* (INTCTRL_ENAL) Crypto Interrupt 0 Mask */
#define INTCTRL_ENAL_CRYPTO0(value)           (INTCTRL_ENAL_CRYPTO0_Msk & (_UINT32_(value) << INTCTRL_ENAL_CRYPTO0_Pos)) /* Assigment of value for CRYPTO0 in the INTCTRL_ENAL register */
#define INTCTRL_ENAL_CRYPTO1_Pos              _UINT32_(17)                                         /* (INTCTRL_ENAL) Crypto Interrupt 1 Position */
#define INTCTRL_ENAL_CRYPTO1_Msk              (_UINT32_(0x1) << INTCTRL_ENAL_CRYPTO1_Pos)          /* (INTCTRL_ENAL) Crypto Interrupt 1 Mask */
#define INTCTRL_ENAL_CRYPTO1(value)           (INTCTRL_ENAL_CRYPTO1_Msk & (_UINT32_(value) << INTCTRL_ENAL_CRYPTO1_Pos)) /* Assigment of value for CRYPTO1 in the INTCTRL_ENAL register */
#define INTCTRL_ENAL_CRYPTO2_Pos              _UINT32_(18)                                         /* (INTCTRL_ENAL) Crypto Interrupt 2 Position */
#define INTCTRL_ENAL_CRYPTO2_Msk              (_UINT32_(0x1) << INTCTRL_ENAL_CRYPTO2_Pos)          /* (INTCTRL_ENAL) Crypto Interrupt 2 Mask */
#define INTCTRL_ENAL_CRYPTO2(value)           (INTCTRL_ENAL_CRYPTO2_Msk & (_UINT32_(value) << INTCTRL_ENAL_CRYPTO2_Pos)) /* Assigment of value for CRYPTO2 in the INTCTRL_ENAL register */
#define INTCTRL_ENAL_CRYPTO3_Pos              _UINT32_(19)                                         /* (INTCTRL_ENAL) Crypto Interrupt 3 Position */
#define INTCTRL_ENAL_CRYPTO3_Msk              (_UINT32_(0x1) << INTCTRL_ENAL_CRYPTO3_Pos)          /* (INTCTRL_ENAL) Crypto Interrupt 3 Mask */
#define INTCTRL_ENAL_CRYPTO3(value)           (INTCTRL_ENAL_CRYPTO3_Msk & (_UINT32_(value) << INTCTRL_ENAL_CRYPTO3_Pos)) /* Assigment of value for CRYPTO3 in the INTCTRL_ENAL register */
#define INTCTRL_ENAL_Msk                      _UINT32_(0x000FC8EF)                                 /* (INTCTRL_ENAL) Register Mask  */

#define INTCTRL_ENAL_TIMER_Pos                _UINT32_(6)                                          /* (INTCTRL_ENAL Position) Timer x Interrupt */
#define INTCTRL_ENAL_TIMER_Msk                (_UINT32_(0x3) << INTCTRL_ENAL_TIMER_Pos)            /* (INTCTRL_ENAL Mask) TIMER */
#define INTCTRL_ENAL_TIMER(value)             (INTCTRL_ENAL_TIMER_Msk & (_UINT32_(value) << INTCTRL_ENAL_TIMER_Pos)) 
#define INTCTRL_ENAL_CRYPTO_Pos               _UINT32_(16)                                         /* (INTCTRL_ENAL Position) Crypto Interrupt 3 */
#define INTCTRL_ENAL_CRYPTO_Msk               (_UINT32_(0xF) << INTCTRL_ENAL_CRYPTO_Pos)           /* (INTCTRL_ENAL Mask) CRYPTO */
#define INTCTRL_ENAL_CRYPTO(value)            (INTCTRL_ENAL_CRYPTO_Msk & (_UINT32_(value) << INTCTRL_ENAL_CRYPTO_Pos)) 

/* -------- INTCTRL_CLRL : (INTCTRL Offset: 0x18) ( /W 32) Interrupt Disable Register Low -------- */
#define INTCTRL_CLRL_RESETVALUE               _UINT32_(0x00)                                       /*  (INTCTRL_CLRL) Interrupt Disable Register Low  Reset Value */

#define INTCTRL_CLRL_RTC_Pos                  _UINT32_(0)                                          /* (INTCTRL_CLRL) RTC Interrupt Position */
#define INTCTRL_CLRL_RTC_Msk                  (_UINT32_(0x1) << INTCTRL_CLRL_RTC_Pos)              /* (INTCTRL_CLRL) RTC Interrupt Mask */
#define INTCTRL_CLRL_RTC(value)               (INTCTRL_CLRL_RTC_Msk & (_UINT32_(value) << INTCTRL_CLRL_RTC_Pos)) /* Assigment of value for RTC in the INTCTRL_CLRL register */
#define INTCTRL_CLRL_TAMPER_Pos               _UINT32_(1)                                          /* (INTCTRL_CLRL) Tamper Interrupt Position */
#define INTCTRL_CLRL_TAMPER_Msk               (_UINT32_(0x1) << INTCTRL_CLRL_TAMPER_Pos)           /* (INTCTRL_CLRL) Tamper Interrupt Mask */
#define INTCTRL_CLRL_TAMPER(value)            (INTCTRL_CLRL_TAMPER_Msk & (_UINT32_(value) << INTCTRL_CLRL_TAMPER_Pos)) /* Assigment of value for TAMPER in the INTCTRL_CLRL register */
#define INTCTRL_CLRL_EXTDMA_Pos               _UINT32_(2)                                          /* (INTCTRL_CLRL) External DMA Interrupt Position */
#define INTCTRL_CLRL_EXTDMA_Msk               (_UINT32_(0x1) << INTCTRL_CLRL_EXTDMA_Pos)           /* (INTCTRL_CLRL) External DMA Interrupt Mask */
#define INTCTRL_CLRL_EXTDMA(value)            (INTCTRL_CLRL_EXTDMA_Msk & (_UINT32_(value) << INTCTRL_CLRL_EXTDMA_Pos)) /* Assigment of value for EXTDMA in the INTCTRL_CLRL register */
#define INTCTRL_CLRL_WDOG_Pos                 _UINT32_(3)                                          /* (INTCTRL_CLRL) Watch Dog Interrupt Position */
#define INTCTRL_CLRL_WDOG_Msk                 (_UINT32_(0x1) << INTCTRL_CLRL_WDOG_Pos)             /* (INTCTRL_CLRL) Watch Dog Interrupt Mask */
#define INTCTRL_CLRL_WDOG(value)              (INTCTRL_CLRL_WDOG_Msk & (_UINT32_(value) << INTCTRL_CLRL_WDOG_Pos)) /* Assigment of value for WDOG in the INTCTRL_CLRL register */
#define INTCTRL_CLRL_TAMPER_BUSY_Pos          _UINT32_(5)                                          /* (INTCTRL_CLRL) Tamper Busy Interrupt Position */
#define INTCTRL_CLRL_TAMPER_BUSY_Msk          (_UINT32_(0x1) << INTCTRL_CLRL_TAMPER_BUSY_Pos)      /* (INTCTRL_CLRL) Tamper Busy Interrupt Mask */
#define INTCTRL_CLRL_TAMPER_BUSY(value)       (INTCTRL_CLRL_TAMPER_BUSY_Msk & (_UINT32_(value) << INTCTRL_CLRL_TAMPER_BUSY_Pos)) /* Assigment of value for TAMPER_BUSY in the INTCTRL_CLRL register */
#define INTCTRL_CLRL_TIMER0_Pos               _UINT32_(6)                                          /* (INTCTRL_CLRL) Timer 0 Interrupt Position */
#define INTCTRL_CLRL_TIMER0_Msk               (_UINT32_(0x1) << INTCTRL_CLRL_TIMER0_Pos)           /* (INTCTRL_CLRL) Timer 0 Interrupt Mask */
#define INTCTRL_CLRL_TIMER0(value)            (INTCTRL_CLRL_TIMER0_Msk & (_UINT32_(value) << INTCTRL_CLRL_TIMER0_Pos)) /* Assigment of value for TIMER0 in the INTCTRL_CLRL register */
#define INTCTRL_CLRL_TIMER1_Pos               _UINT32_(7)                                          /* (INTCTRL_CLRL) Timer 1 interrupt Position */
#define INTCTRL_CLRL_TIMER1_Msk               (_UINT32_(0x1) << INTCTRL_CLRL_TIMER1_Pos)           /* (INTCTRL_CLRL) Timer 1 interrupt Mask */
#define INTCTRL_CLRL_TIMER1(value)            (INTCTRL_CLRL_TIMER1_Msk & (_UINT32_(value) << INTCTRL_CLRL_TIMER1_Pos)) /* Assigment of value for TIMER1 in the INTCTRL_CLRL register */
#define INTCTRL_CLRL_PWRDOWN_Pos              _UINT32_(11)                                         /* (INTCTRL_CLRL) Power Down Interrupt Position */
#define INTCTRL_CLRL_PWRDOWN_Msk              (_UINT32_(0x1) << INTCTRL_CLRL_PWRDOWN_Pos)          /* (INTCTRL_CLRL) Power Down Interrupt Mask */
#define INTCTRL_CLRL_PWRDOWN(value)           (INTCTRL_CLRL_PWRDOWN_Msk & (_UINT32_(value) << INTCTRL_CLRL_PWRDOWN_Pos)) /* Assigment of value for PWRDOWN in the INTCTRL_CLRL register */
#define INTCTRL_CLRL_MB_TX_Pos                _UINT32_(14)                                         /* (INTCTRL_CLRL) Mailbox TX Interrupt Position */
#define INTCTRL_CLRL_MB_TX_Msk                (_UINT32_(0x1) << INTCTRL_CLRL_MB_TX_Pos)            /* (INTCTRL_CLRL) Mailbox TX Interrupt Mask */
#define INTCTRL_CLRL_MB_TX(value)             (INTCTRL_CLRL_MB_TX_Msk & (_UINT32_(value) << INTCTRL_CLRL_MB_TX_Pos)) /* Assigment of value for MB_TX in the INTCTRL_CLRL register */
#define INTCTRL_CLRL_MB_RX_Pos                _UINT32_(15)                                         /* (INTCTRL_CLRL) Mailbox RX Interrupt Position */
#define INTCTRL_CLRL_MB_RX_Msk                (_UINT32_(0x1) << INTCTRL_CLRL_MB_RX_Pos)            /* (INTCTRL_CLRL) Mailbox RX Interrupt Mask */
#define INTCTRL_CLRL_MB_RX(value)             (INTCTRL_CLRL_MB_RX_Msk & (_UINT32_(value) << INTCTRL_CLRL_MB_RX_Pos)) /* Assigment of value for MB_RX in the INTCTRL_CLRL register */
#define INTCTRL_CLRL_CRYPTO0_Pos              _UINT32_(16)                                         /* (INTCTRL_CLRL) Crypto Interrupt 0 Position */
#define INTCTRL_CLRL_CRYPTO0_Msk              (_UINT32_(0x1) << INTCTRL_CLRL_CRYPTO0_Pos)          /* (INTCTRL_CLRL) Crypto Interrupt 0 Mask */
#define INTCTRL_CLRL_CRYPTO0(value)           (INTCTRL_CLRL_CRYPTO0_Msk & (_UINT32_(value) << INTCTRL_CLRL_CRYPTO0_Pos)) /* Assigment of value for CRYPTO0 in the INTCTRL_CLRL register */
#define INTCTRL_CLRL_CRYPTO1_Pos              _UINT32_(17)                                         /* (INTCTRL_CLRL) Crypto Interrupt 1 Position */
#define INTCTRL_CLRL_CRYPTO1_Msk              (_UINT32_(0x1) << INTCTRL_CLRL_CRYPTO1_Pos)          /* (INTCTRL_CLRL) Crypto Interrupt 1 Mask */
#define INTCTRL_CLRL_CRYPTO1(value)           (INTCTRL_CLRL_CRYPTO1_Msk & (_UINT32_(value) << INTCTRL_CLRL_CRYPTO1_Pos)) /* Assigment of value for CRYPTO1 in the INTCTRL_CLRL register */
#define INTCTRL_CLRL_CRYPTO2_Pos              _UINT32_(18)                                         /* (INTCTRL_CLRL) Crypto Interrupt 2 Position */
#define INTCTRL_CLRL_CRYPTO2_Msk              (_UINT32_(0x1) << INTCTRL_CLRL_CRYPTO2_Pos)          /* (INTCTRL_CLRL) Crypto Interrupt 2 Mask */
#define INTCTRL_CLRL_CRYPTO2(value)           (INTCTRL_CLRL_CRYPTO2_Msk & (_UINT32_(value) << INTCTRL_CLRL_CRYPTO2_Pos)) /* Assigment of value for CRYPTO2 in the INTCTRL_CLRL register */
#define INTCTRL_CLRL_CRYPTO3_Pos              _UINT32_(19)                                         /* (INTCTRL_CLRL) Crypto Interrupt 3 Position */
#define INTCTRL_CLRL_CRYPTO3_Msk              (_UINT32_(0x1) << INTCTRL_CLRL_CRYPTO3_Pos)          /* (INTCTRL_CLRL) Crypto Interrupt 3 Mask */
#define INTCTRL_CLRL_CRYPTO3(value)           (INTCTRL_CLRL_CRYPTO3_Msk & (_UINT32_(value) << INTCTRL_CLRL_CRYPTO3_Pos)) /* Assigment of value for CRYPTO3 in the INTCTRL_CLRL register */
#define INTCTRL_CLRL_Msk                      _UINT32_(0x000FC8EF)                                 /* (INTCTRL_CLRL) Register Mask  */

#define INTCTRL_CLRL_TIMER_Pos                _UINT32_(6)                                          /* (INTCTRL_CLRL Position) Timer x Interrupt */
#define INTCTRL_CLRL_TIMER_Msk                (_UINT32_(0x3) << INTCTRL_CLRL_TIMER_Pos)            /* (INTCTRL_CLRL Mask) TIMER */
#define INTCTRL_CLRL_TIMER(value)             (INTCTRL_CLRL_TIMER_Msk & (_UINT32_(value) << INTCTRL_CLRL_TIMER_Pos)) 
#define INTCTRL_CLRL_CRYPTO_Pos               _UINT32_(16)                                         /* (INTCTRL_CLRL Position) Crypto Interrupt 3 */
#define INTCTRL_CLRL_CRYPTO_Msk               (_UINT32_(0xF) << INTCTRL_CLRL_CRYPTO_Pos)           /* (INTCTRL_CLRL Mask) CRYPTO */
#define INTCTRL_CLRL_CRYPTO(value)            (INTCTRL_CLRL_CRYPTO_Msk & (_UINT32_(value) << INTCTRL_CLRL_CRYPTO_Pos)) 

/* -------- INTCTRL_TSTL : (INTCTRL Offset: 0x20) (R/W 32) Interrupt Test Source Register Low -------- */
#define INTCTRL_TSTL_RESETVALUE               _UINT32_(0x00)                                       /*  (INTCTRL_TSTL) Interrupt Test Source Register Low  Reset Value */

#define INTCTRL_TSTL_RTC_Pos                  _UINT32_(0)                                          /* (INTCTRL_TSTL) RTC Interrupt Position */
#define INTCTRL_TSTL_RTC_Msk                  (_UINT32_(0x1) << INTCTRL_TSTL_RTC_Pos)              /* (INTCTRL_TSTL) RTC Interrupt Mask */
#define INTCTRL_TSTL_RTC(value)               (INTCTRL_TSTL_RTC_Msk & (_UINT32_(value) << INTCTRL_TSTL_RTC_Pos)) /* Assigment of value for RTC in the INTCTRL_TSTL register */
#define INTCTRL_TSTL_TAMPER_Pos               _UINT32_(1)                                          /* (INTCTRL_TSTL) Tamper Interrupt Position */
#define INTCTRL_TSTL_TAMPER_Msk               (_UINT32_(0x1) << INTCTRL_TSTL_TAMPER_Pos)           /* (INTCTRL_TSTL) Tamper Interrupt Mask */
#define INTCTRL_TSTL_TAMPER(value)            (INTCTRL_TSTL_TAMPER_Msk & (_UINT32_(value) << INTCTRL_TSTL_TAMPER_Pos)) /* Assigment of value for TAMPER in the INTCTRL_TSTL register */
#define INTCTRL_TSTL_EXTDMA_Pos               _UINT32_(2)                                          /* (INTCTRL_TSTL) External DMA Interrupt Position */
#define INTCTRL_TSTL_EXTDMA_Msk               (_UINT32_(0x1) << INTCTRL_TSTL_EXTDMA_Pos)           /* (INTCTRL_TSTL) External DMA Interrupt Mask */
#define INTCTRL_TSTL_EXTDMA(value)            (INTCTRL_TSTL_EXTDMA_Msk & (_UINT32_(value) << INTCTRL_TSTL_EXTDMA_Pos)) /* Assigment of value for EXTDMA in the INTCTRL_TSTL register */
#define INTCTRL_TSTL_WDOG_Pos                 _UINT32_(3)                                          /* (INTCTRL_TSTL) Watch Dog Interrupt Position */
#define INTCTRL_TSTL_WDOG_Msk                 (_UINT32_(0x1) << INTCTRL_TSTL_WDOG_Pos)             /* (INTCTRL_TSTL) Watch Dog Interrupt Mask */
#define INTCTRL_TSTL_WDOG(value)              (INTCTRL_TSTL_WDOG_Msk & (_UINT32_(value) << INTCTRL_TSTL_WDOG_Pos)) /* Assigment of value for WDOG in the INTCTRL_TSTL register */
#define INTCTRL_TSTL_TAMPER_BUSY_Pos          _UINT32_(5)                                          /* (INTCTRL_TSTL) Tamper Busy Interrupt Position */
#define INTCTRL_TSTL_TAMPER_BUSY_Msk          (_UINT32_(0x1) << INTCTRL_TSTL_TAMPER_BUSY_Pos)      /* (INTCTRL_TSTL) Tamper Busy Interrupt Mask */
#define INTCTRL_TSTL_TAMPER_BUSY(value)       (INTCTRL_TSTL_TAMPER_BUSY_Msk & (_UINT32_(value) << INTCTRL_TSTL_TAMPER_BUSY_Pos)) /* Assigment of value for TAMPER_BUSY in the INTCTRL_TSTL register */
#define INTCTRL_TSTL_TIMER0_Pos               _UINT32_(6)                                          /* (INTCTRL_TSTL) Timer 0 Interrupt Position */
#define INTCTRL_TSTL_TIMER0_Msk               (_UINT32_(0x1) << INTCTRL_TSTL_TIMER0_Pos)           /* (INTCTRL_TSTL) Timer 0 Interrupt Mask */
#define INTCTRL_TSTL_TIMER0(value)            (INTCTRL_TSTL_TIMER0_Msk & (_UINT32_(value) << INTCTRL_TSTL_TIMER0_Pos)) /* Assigment of value for TIMER0 in the INTCTRL_TSTL register */
#define INTCTRL_TSTL_TIMER1_Pos               _UINT32_(7)                                          /* (INTCTRL_TSTL) Timer 1 interrupt Position */
#define INTCTRL_TSTL_TIMER1_Msk               (_UINT32_(0x1) << INTCTRL_TSTL_TIMER1_Pos)           /* (INTCTRL_TSTL) Timer 1 interrupt Mask */
#define INTCTRL_TSTL_TIMER1(value)            (INTCTRL_TSTL_TIMER1_Msk & (_UINT32_(value) << INTCTRL_TSTL_TIMER1_Pos)) /* Assigment of value for TIMER1 in the INTCTRL_TSTL register */
#define INTCTRL_TSTL_PWRDOWN_Pos              _UINT32_(11)                                         /* (INTCTRL_TSTL) Power Down Interrupt Position */
#define INTCTRL_TSTL_PWRDOWN_Msk              (_UINT32_(0x1) << INTCTRL_TSTL_PWRDOWN_Pos)          /* (INTCTRL_TSTL) Power Down Interrupt Mask */
#define INTCTRL_TSTL_PWRDOWN(value)           (INTCTRL_TSTL_PWRDOWN_Msk & (_UINT32_(value) << INTCTRL_TSTL_PWRDOWN_Pos)) /* Assigment of value for PWRDOWN in the INTCTRL_TSTL register */
#define INTCTRL_TSTL_MB_TX_Pos                _UINT32_(14)                                         /* (INTCTRL_TSTL) Mailbox TX Interrupt Position */
#define INTCTRL_TSTL_MB_TX_Msk                (_UINT32_(0x1) << INTCTRL_TSTL_MB_TX_Pos)            /* (INTCTRL_TSTL) Mailbox TX Interrupt Mask */
#define INTCTRL_TSTL_MB_TX(value)             (INTCTRL_TSTL_MB_TX_Msk & (_UINT32_(value) << INTCTRL_TSTL_MB_TX_Pos)) /* Assigment of value for MB_TX in the INTCTRL_TSTL register */
#define INTCTRL_TSTL_MB_RX_Pos                _UINT32_(15)                                         /* (INTCTRL_TSTL) Mailbox RX Interrupt Position */
#define INTCTRL_TSTL_MB_RX_Msk                (_UINT32_(0x1) << INTCTRL_TSTL_MB_RX_Pos)            /* (INTCTRL_TSTL) Mailbox RX Interrupt Mask */
#define INTCTRL_TSTL_MB_RX(value)             (INTCTRL_TSTL_MB_RX_Msk & (_UINT32_(value) << INTCTRL_TSTL_MB_RX_Pos)) /* Assigment of value for MB_RX in the INTCTRL_TSTL register */
#define INTCTRL_TSTL_CRYPTO0_Pos              _UINT32_(16)                                         /* (INTCTRL_TSTL) Crypto Interrupt 0 Position */
#define INTCTRL_TSTL_CRYPTO0_Msk              (_UINT32_(0x1) << INTCTRL_TSTL_CRYPTO0_Pos)          /* (INTCTRL_TSTL) Crypto Interrupt 0 Mask */
#define INTCTRL_TSTL_CRYPTO0(value)           (INTCTRL_TSTL_CRYPTO0_Msk & (_UINT32_(value) << INTCTRL_TSTL_CRYPTO0_Pos)) /* Assigment of value for CRYPTO0 in the INTCTRL_TSTL register */
#define INTCTRL_TSTL_CRYPTO1_Pos              _UINT32_(17)                                         /* (INTCTRL_TSTL) Crypto Interrupt 1 Position */
#define INTCTRL_TSTL_CRYPTO1_Msk              (_UINT32_(0x1) << INTCTRL_TSTL_CRYPTO1_Pos)          /* (INTCTRL_TSTL) Crypto Interrupt 1 Mask */
#define INTCTRL_TSTL_CRYPTO1(value)           (INTCTRL_TSTL_CRYPTO1_Msk & (_UINT32_(value) << INTCTRL_TSTL_CRYPTO1_Pos)) /* Assigment of value for CRYPTO1 in the INTCTRL_TSTL register */
#define INTCTRL_TSTL_CRYPTO2_Pos              _UINT32_(18)                                         /* (INTCTRL_TSTL) Crypto Interrupt 2 Position */
#define INTCTRL_TSTL_CRYPTO2_Msk              (_UINT32_(0x1) << INTCTRL_TSTL_CRYPTO2_Pos)          /* (INTCTRL_TSTL) Crypto Interrupt 2 Mask */
#define INTCTRL_TSTL_CRYPTO2(value)           (INTCTRL_TSTL_CRYPTO2_Msk & (_UINT32_(value) << INTCTRL_TSTL_CRYPTO2_Pos)) /* Assigment of value for CRYPTO2 in the INTCTRL_TSTL register */
#define INTCTRL_TSTL_CRYPTO3_Pos              _UINT32_(19)                                         /* (INTCTRL_TSTL) Crypto Interrupt 3 Position */
#define INTCTRL_TSTL_CRYPTO3_Msk              (_UINT32_(0x1) << INTCTRL_TSTL_CRYPTO3_Pos)          /* (INTCTRL_TSTL) Crypto Interrupt 3 Mask */
#define INTCTRL_TSTL_CRYPTO3(value)           (INTCTRL_TSTL_CRYPTO3_Msk & (_UINT32_(value) << INTCTRL_TSTL_CRYPTO3_Pos)) /* Assigment of value for CRYPTO3 in the INTCTRL_TSTL register */
#define INTCTRL_TSTL_Msk                      _UINT32_(0x000FC8EF)                                 /* (INTCTRL_TSTL) Register Mask  */

#define INTCTRL_TSTL_TIMER_Pos                _UINT32_(6)                                          /* (INTCTRL_TSTL Position) Timer x Interrupt */
#define INTCTRL_TSTL_TIMER_Msk                (_UINT32_(0x3) << INTCTRL_TSTL_TIMER_Pos)            /* (INTCTRL_TSTL Mask) TIMER */
#define INTCTRL_TSTL_TIMER(value)             (INTCTRL_TSTL_TIMER_Msk & (_UINT32_(value) << INTCTRL_TSTL_TIMER_Pos)) 
#define INTCTRL_TSTL_CRYPTO_Pos               _UINT32_(16)                                         /* (INTCTRL_TSTL Position) Crypto Interrupt 3 */
#define INTCTRL_TSTL_CRYPTO_Msk               (_UINT32_(0xF) << INTCTRL_TSTL_CRYPTO_Pos)           /* (INTCTRL_TSTL Mask) CRYPTO */
#define INTCTRL_TSTL_CRYPTO(value)            (INTCTRL_TSTL_CRYPTO_Msk & (_UINT32_(value) << INTCTRL_TSTL_CRYPTO_Pos)) 

/* -------- INTCTRL_SELL : (INTCTRL Offset: 0x28) (R/W 32) Interrupt Source Selection Register Low -------- */
#define INTCTRL_SELL_RESETVALUE               _UINT32_(0x00)                                       /*  (INTCTRL_SELL) Interrupt Source Selection Register Low  Reset Value */

#define INTCTRL_SELL_RTC_Pos                  _UINT32_(0)                                          /* (INTCTRL_SELL) RTC Interrupt Position */
#define INTCTRL_SELL_RTC_Msk                  (_UINT32_(0x1) << INTCTRL_SELL_RTC_Pos)              /* (INTCTRL_SELL) RTC Interrupt Mask */
#define INTCTRL_SELL_RTC(value)               (INTCTRL_SELL_RTC_Msk & (_UINT32_(value) << INTCTRL_SELL_RTC_Pos)) /* Assigment of value for RTC in the INTCTRL_SELL register */
#define INTCTRL_SELL_TAMPER_Pos               _UINT32_(1)                                          /* (INTCTRL_SELL) Tamper Interrupt Position */
#define INTCTRL_SELL_TAMPER_Msk               (_UINT32_(0x1) << INTCTRL_SELL_TAMPER_Pos)           /* (INTCTRL_SELL) Tamper Interrupt Mask */
#define INTCTRL_SELL_TAMPER(value)            (INTCTRL_SELL_TAMPER_Msk & (_UINT32_(value) << INTCTRL_SELL_TAMPER_Pos)) /* Assigment of value for TAMPER in the INTCTRL_SELL register */
#define INTCTRL_SELL_EXTDMA_Pos               _UINT32_(2)                                          /* (INTCTRL_SELL) External DMA Interrupt Position */
#define INTCTRL_SELL_EXTDMA_Msk               (_UINT32_(0x1) << INTCTRL_SELL_EXTDMA_Pos)           /* (INTCTRL_SELL) External DMA Interrupt Mask */
#define INTCTRL_SELL_EXTDMA(value)            (INTCTRL_SELL_EXTDMA_Msk & (_UINT32_(value) << INTCTRL_SELL_EXTDMA_Pos)) /* Assigment of value for EXTDMA in the INTCTRL_SELL register */
#define INTCTRL_SELL_WDOG_Pos                 _UINT32_(3)                                          /* (INTCTRL_SELL) Watch Dog Interrupt Position */
#define INTCTRL_SELL_WDOG_Msk                 (_UINT32_(0x1) << INTCTRL_SELL_WDOG_Pos)             /* (INTCTRL_SELL) Watch Dog Interrupt Mask */
#define INTCTRL_SELL_WDOG(value)              (INTCTRL_SELL_WDOG_Msk & (_UINT32_(value) << INTCTRL_SELL_WDOG_Pos)) /* Assigment of value for WDOG in the INTCTRL_SELL register */
#define INTCTRL_SELL_TAMPER_BUSY_Pos          _UINT32_(5)                                          /* (INTCTRL_SELL) Tamper Busy Interrupt Position */
#define INTCTRL_SELL_TAMPER_BUSY_Msk          (_UINT32_(0x1) << INTCTRL_SELL_TAMPER_BUSY_Pos)      /* (INTCTRL_SELL) Tamper Busy Interrupt Mask */
#define INTCTRL_SELL_TAMPER_BUSY(value)       (INTCTRL_SELL_TAMPER_BUSY_Msk & (_UINT32_(value) << INTCTRL_SELL_TAMPER_BUSY_Pos)) /* Assigment of value for TAMPER_BUSY in the INTCTRL_SELL register */
#define INTCTRL_SELL_TIMER0_Pos               _UINT32_(6)                                          /* (INTCTRL_SELL) Timer 0 Interrupt Position */
#define INTCTRL_SELL_TIMER0_Msk               (_UINT32_(0x1) << INTCTRL_SELL_TIMER0_Pos)           /* (INTCTRL_SELL) Timer 0 Interrupt Mask */
#define INTCTRL_SELL_TIMER0(value)            (INTCTRL_SELL_TIMER0_Msk & (_UINT32_(value) << INTCTRL_SELL_TIMER0_Pos)) /* Assigment of value for TIMER0 in the INTCTRL_SELL register */
#define INTCTRL_SELL_TIMER1_Pos               _UINT32_(7)                                          /* (INTCTRL_SELL) Timer 1 interrupt Position */
#define INTCTRL_SELL_TIMER1_Msk               (_UINT32_(0x1) << INTCTRL_SELL_TIMER1_Pos)           /* (INTCTRL_SELL) Timer 1 interrupt Mask */
#define INTCTRL_SELL_TIMER1(value)            (INTCTRL_SELL_TIMER1_Msk & (_UINT32_(value) << INTCTRL_SELL_TIMER1_Pos)) /* Assigment of value for TIMER1 in the INTCTRL_SELL register */
#define INTCTRL_SELL_PWRDOWN_Pos              _UINT32_(11)                                         /* (INTCTRL_SELL) Power Down Interrupt Position */
#define INTCTRL_SELL_PWRDOWN_Msk              (_UINT32_(0x1) << INTCTRL_SELL_PWRDOWN_Pos)          /* (INTCTRL_SELL) Power Down Interrupt Mask */
#define INTCTRL_SELL_PWRDOWN(value)           (INTCTRL_SELL_PWRDOWN_Msk & (_UINT32_(value) << INTCTRL_SELL_PWRDOWN_Pos)) /* Assigment of value for PWRDOWN in the INTCTRL_SELL register */
#define INTCTRL_SELL_MB_TX_Pos                _UINT32_(14)                                         /* (INTCTRL_SELL) Mailbox TX Interrupt Position */
#define INTCTRL_SELL_MB_TX_Msk                (_UINT32_(0x1) << INTCTRL_SELL_MB_TX_Pos)            /* (INTCTRL_SELL) Mailbox TX Interrupt Mask */
#define INTCTRL_SELL_MB_TX(value)             (INTCTRL_SELL_MB_TX_Msk & (_UINT32_(value) << INTCTRL_SELL_MB_TX_Pos)) /* Assigment of value for MB_TX in the INTCTRL_SELL register */
#define INTCTRL_SELL_MB_RX_Pos                _UINT32_(15)                                         /* (INTCTRL_SELL) Mailbox RX Interrupt Position */
#define INTCTRL_SELL_MB_RX_Msk                (_UINT32_(0x1) << INTCTRL_SELL_MB_RX_Pos)            /* (INTCTRL_SELL) Mailbox RX Interrupt Mask */
#define INTCTRL_SELL_MB_RX(value)             (INTCTRL_SELL_MB_RX_Msk & (_UINT32_(value) << INTCTRL_SELL_MB_RX_Pos)) /* Assigment of value for MB_RX in the INTCTRL_SELL register */
#define INTCTRL_SELL_CRYPTO0_Pos              _UINT32_(16)                                         /* (INTCTRL_SELL) Crypto Interrupt 0 Position */
#define INTCTRL_SELL_CRYPTO0_Msk              (_UINT32_(0x1) << INTCTRL_SELL_CRYPTO0_Pos)          /* (INTCTRL_SELL) Crypto Interrupt 0 Mask */
#define INTCTRL_SELL_CRYPTO0(value)           (INTCTRL_SELL_CRYPTO0_Msk & (_UINT32_(value) << INTCTRL_SELL_CRYPTO0_Pos)) /* Assigment of value for CRYPTO0 in the INTCTRL_SELL register */
#define INTCTRL_SELL_CRYPTO1_Pos              _UINT32_(17)                                         /* (INTCTRL_SELL) Crypto Interrupt 1 Position */
#define INTCTRL_SELL_CRYPTO1_Msk              (_UINT32_(0x1) << INTCTRL_SELL_CRYPTO1_Pos)          /* (INTCTRL_SELL) Crypto Interrupt 1 Mask */
#define INTCTRL_SELL_CRYPTO1(value)           (INTCTRL_SELL_CRYPTO1_Msk & (_UINT32_(value) << INTCTRL_SELL_CRYPTO1_Pos)) /* Assigment of value for CRYPTO1 in the INTCTRL_SELL register */
#define INTCTRL_SELL_CRYPTO2_Pos              _UINT32_(18)                                         /* (INTCTRL_SELL) Crypto Interrupt 2 Position */
#define INTCTRL_SELL_CRYPTO2_Msk              (_UINT32_(0x1) << INTCTRL_SELL_CRYPTO2_Pos)          /* (INTCTRL_SELL) Crypto Interrupt 2 Mask */
#define INTCTRL_SELL_CRYPTO2(value)           (INTCTRL_SELL_CRYPTO2_Msk & (_UINT32_(value) << INTCTRL_SELL_CRYPTO2_Pos)) /* Assigment of value for CRYPTO2 in the INTCTRL_SELL register */
#define INTCTRL_SELL_CRYPTO3_Pos              _UINT32_(19)                                         /* (INTCTRL_SELL) Crypto Interrupt 3 Position */
#define INTCTRL_SELL_CRYPTO3_Msk              (_UINT32_(0x1) << INTCTRL_SELL_CRYPTO3_Pos)          /* (INTCTRL_SELL) Crypto Interrupt 3 Mask */
#define INTCTRL_SELL_CRYPTO3(value)           (INTCTRL_SELL_CRYPTO3_Msk & (_UINT32_(value) << INTCTRL_SELL_CRYPTO3_Pos)) /* Assigment of value for CRYPTO3 in the INTCTRL_SELL register */
#define INTCTRL_SELL_Msk                      _UINT32_(0x000FC8EF)                                 /* (INTCTRL_SELL) Register Mask  */

#define INTCTRL_SELL_TIMER_Pos                _UINT32_(6)                                          /* (INTCTRL_SELL Position) Timer x Interrupt */
#define INTCTRL_SELL_TIMER_Msk                (_UINT32_(0x3) << INTCTRL_SELL_TIMER_Pos)            /* (INTCTRL_SELL Mask) TIMER */
#define INTCTRL_SELL_TIMER(value)             (INTCTRL_SELL_TIMER_Msk & (_UINT32_(value) << INTCTRL_SELL_TIMER_Pos)) 
#define INTCTRL_SELL_CRYPTO_Pos               _UINT32_(16)                                         /* (INTCTRL_SELL Position) Crypto Interrupt 3 */
#define INTCTRL_SELL_CRYPTO_Msk               (_UINT32_(0xF) << INTCTRL_SELL_CRYPTO_Pos)           /* (INTCTRL_SELL Mask) CRYPTO */
#define INTCTRL_SELL_CRYPTO(value)            (INTCTRL_SELL_CRYPTO_Msk & (_UINT32_(value) << INTCTRL_SELL_CRYPTO_Pos)) 

/* -------- INTCTRL_APRL : (INTCTRL Offset: 0x30) (R/W 32) Interrupt Activation Polarity Register Low -------- */
#define INTCTRL_APRL_RESETVALUE               _UINT32_(0x00)                                       /*  (INTCTRL_APRL) Interrupt Activation Polarity Register Low  Reset Value */

#define INTCTRL_APRL_RTC_Pos                  _UINT32_(0)                                          /* (INTCTRL_APRL) RTC Interrupt Position */
#define INTCTRL_APRL_RTC_Msk                  (_UINT32_(0x1) << INTCTRL_APRL_RTC_Pos)              /* (INTCTRL_APRL) RTC Interrupt Mask */
#define INTCTRL_APRL_RTC(value)               (INTCTRL_APRL_RTC_Msk & (_UINT32_(value) << INTCTRL_APRL_RTC_Pos)) /* Assigment of value for RTC in the INTCTRL_APRL register */
#define INTCTRL_APRL_TAMPER_Pos               _UINT32_(1)                                          /* (INTCTRL_APRL) Tamper Interrupt Position */
#define INTCTRL_APRL_TAMPER_Msk               (_UINT32_(0x1) << INTCTRL_APRL_TAMPER_Pos)           /* (INTCTRL_APRL) Tamper Interrupt Mask */
#define INTCTRL_APRL_TAMPER(value)            (INTCTRL_APRL_TAMPER_Msk & (_UINT32_(value) << INTCTRL_APRL_TAMPER_Pos)) /* Assigment of value for TAMPER in the INTCTRL_APRL register */
#define INTCTRL_APRL_EXTDMA_Pos               _UINT32_(2)                                          /* (INTCTRL_APRL) External DMA Interrupt Position */
#define INTCTRL_APRL_EXTDMA_Msk               (_UINT32_(0x1) << INTCTRL_APRL_EXTDMA_Pos)           /* (INTCTRL_APRL) External DMA Interrupt Mask */
#define INTCTRL_APRL_EXTDMA(value)            (INTCTRL_APRL_EXTDMA_Msk & (_UINT32_(value) << INTCTRL_APRL_EXTDMA_Pos)) /* Assigment of value for EXTDMA in the INTCTRL_APRL register */
#define INTCTRL_APRL_WDOG_Pos                 _UINT32_(3)                                          /* (INTCTRL_APRL) Watch Dog Interrupt Position */
#define INTCTRL_APRL_WDOG_Msk                 (_UINT32_(0x1) << INTCTRL_APRL_WDOG_Pos)             /* (INTCTRL_APRL) Watch Dog Interrupt Mask */
#define INTCTRL_APRL_WDOG(value)              (INTCTRL_APRL_WDOG_Msk & (_UINT32_(value) << INTCTRL_APRL_WDOG_Pos)) /* Assigment of value for WDOG in the INTCTRL_APRL register */
#define INTCTRL_APRL_TAMPER_BUSY_Pos          _UINT32_(5)                                          /* (INTCTRL_APRL) Tamper Busy Interrupt Position */
#define INTCTRL_APRL_TAMPER_BUSY_Msk          (_UINT32_(0x1) << INTCTRL_APRL_TAMPER_BUSY_Pos)      /* (INTCTRL_APRL) Tamper Busy Interrupt Mask */
#define INTCTRL_APRL_TAMPER_BUSY(value)       (INTCTRL_APRL_TAMPER_BUSY_Msk & (_UINT32_(value) << INTCTRL_APRL_TAMPER_BUSY_Pos)) /* Assigment of value for TAMPER_BUSY in the INTCTRL_APRL register */
#define INTCTRL_APRL_TIMER0_Pos               _UINT32_(6)                                          /* (INTCTRL_APRL) Timer 0 Interrupt Position */
#define INTCTRL_APRL_TIMER0_Msk               (_UINT32_(0x1) << INTCTRL_APRL_TIMER0_Pos)           /* (INTCTRL_APRL) Timer 0 Interrupt Mask */
#define INTCTRL_APRL_TIMER0(value)            (INTCTRL_APRL_TIMER0_Msk & (_UINT32_(value) << INTCTRL_APRL_TIMER0_Pos)) /* Assigment of value for TIMER0 in the INTCTRL_APRL register */
#define INTCTRL_APRL_TIMER1_Pos               _UINT32_(7)                                          /* (INTCTRL_APRL) Timer 1 interrupt Position */
#define INTCTRL_APRL_TIMER1_Msk               (_UINT32_(0x1) << INTCTRL_APRL_TIMER1_Pos)           /* (INTCTRL_APRL) Timer 1 interrupt Mask */
#define INTCTRL_APRL_TIMER1(value)            (INTCTRL_APRL_TIMER1_Msk & (_UINT32_(value) << INTCTRL_APRL_TIMER1_Pos)) /* Assigment of value for TIMER1 in the INTCTRL_APRL register */
#define INTCTRL_APRL_PWRDOWN_Pos              _UINT32_(11)                                         /* (INTCTRL_APRL) Power Down Interrupt Position */
#define INTCTRL_APRL_PWRDOWN_Msk              (_UINT32_(0x1) << INTCTRL_APRL_PWRDOWN_Pos)          /* (INTCTRL_APRL) Power Down Interrupt Mask */
#define INTCTRL_APRL_PWRDOWN(value)           (INTCTRL_APRL_PWRDOWN_Msk & (_UINT32_(value) << INTCTRL_APRL_PWRDOWN_Pos)) /* Assigment of value for PWRDOWN in the INTCTRL_APRL register */
#define INTCTRL_APRL_MB_TX_Pos                _UINT32_(14)                                         /* (INTCTRL_APRL) Mailbox TX Interrupt Position */
#define INTCTRL_APRL_MB_TX_Msk                (_UINT32_(0x1) << INTCTRL_APRL_MB_TX_Pos)            /* (INTCTRL_APRL) Mailbox TX Interrupt Mask */
#define INTCTRL_APRL_MB_TX(value)             (INTCTRL_APRL_MB_TX_Msk & (_UINT32_(value) << INTCTRL_APRL_MB_TX_Pos)) /* Assigment of value for MB_TX in the INTCTRL_APRL register */
#define INTCTRL_APRL_MB_RX_Pos                _UINT32_(15)                                         /* (INTCTRL_APRL) Mailbox RX Interrupt Position */
#define INTCTRL_APRL_MB_RX_Msk                (_UINT32_(0x1) << INTCTRL_APRL_MB_RX_Pos)            /* (INTCTRL_APRL) Mailbox RX Interrupt Mask */
#define INTCTRL_APRL_MB_RX(value)             (INTCTRL_APRL_MB_RX_Msk & (_UINT32_(value) << INTCTRL_APRL_MB_RX_Pos)) /* Assigment of value for MB_RX in the INTCTRL_APRL register */
#define INTCTRL_APRL_CRYPTODMA_Pos            _UINT32_(16)                                         /* (INTCTRL_APRL) Crypto DMA Interrupt Position */
#define INTCTRL_APRL_CRYPTODMA_Msk            (_UINT32_(0x1) << INTCTRL_APRL_CRYPTODMA_Pos)        /* (INTCTRL_APRL) Crypto DMA Interrupt Mask */
#define INTCTRL_APRL_CRYPTODMA(value)         (INTCTRL_APRL_CRYPTODMA_Msk & (_UINT32_(value) << INTCTRL_APRL_CRYPTODMA_Pos)) /* Assigment of value for CRYPTODMA in the INTCTRL_APRL register */
#define INTCTRL_APRL_NDRNG_Pos                _UINT32_(17)                                         /* (INTCTRL_APRL) RNG Interrupt Position */
#define INTCTRL_APRL_NDRNG_Msk                (_UINT32_(0x1) << INTCTRL_APRL_NDRNG_Pos)            /* (INTCTRL_APRL) RNG Interrupt Mask */
#define INTCTRL_APRL_NDRNG(value)             (INTCTRL_APRL_NDRNG_Msk & (_UINT32_(value) << INTCTRL_APRL_NDRNG_Pos)) /* Assigment of value for NDRNG in the INTCTRL_APRL register */
#define INTCTRL_APRL_PKENGINE_Pos             _UINT32_(18)                                         /* (INTCTRL_APRL) PK Engine Interrupt Position */
#define INTCTRL_APRL_PKENGINE_Msk             (_UINT32_(0x1) << INTCTRL_APRL_PKENGINE_Pos)         /* (INTCTRL_APRL) PK Engine Interrupt Mask */
#define INTCTRL_APRL_PKENGINE(value)          (INTCTRL_APRL_PKENGINE_Msk & (_UINT32_(value) << INTCTRL_APRL_PKENGINE_Pos)) /* Assigment of value for PKENGINE in the INTCTRL_APRL register */
#define INTCTRL_APRL_Msk                      _UINT32_(0x0007C8EF)                                 /* (INTCTRL_APRL) Register Mask  */

#define INTCTRL_APRL_TIMER_Pos                _UINT32_(6)                                          /* (INTCTRL_APRL Position) Timer x Interrupt */
#define INTCTRL_APRL_TIMER_Msk                (_UINT32_(0x3) << INTCTRL_APRL_TIMER_Pos)            /* (INTCTRL_APRL Mask) TIMER */
#define INTCTRL_APRL_TIMER(value)             (INTCTRL_APRL_TIMER_Msk & (_UINT32_(value) << INTCTRL_APRL_TIMER_Pos)) 

/* -------- INTCTRL_ATRL : (INTCTRL Offset: 0x38) (R/W 32) Interrupt Activation Type Register Low -------- */
#define INTCTRL_ATRL_RESETVALUE               _UINT32_(0x00)                                       /*  (INTCTRL_ATRL) Interrupt Activation Type Register Low  Reset Value */

#define INTCTRL_ATRL_RTC_Pos                  _UINT32_(0)                                          /* (INTCTRL_ATRL) RTC Interrupt Position */
#define INTCTRL_ATRL_RTC_Msk                  (_UINT32_(0x1) << INTCTRL_ATRL_RTC_Pos)              /* (INTCTRL_ATRL) RTC Interrupt Mask */
#define INTCTRL_ATRL_RTC(value)               (INTCTRL_ATRL_RTC_Msk & (_UINT32_(value) << INTCTRL_ATRL_RTC_Pos)) /* Assigment of value for RTC in the INTCTRL_ATRL register */
#define INTCTRL_ATRL_TAMPER_Pos               _UINT32_(1)                                          /* (INTCTRL_ATRL) Tamper Interrupt Position */
#define INTCTRL_ATRL_TAMPER_Msk               (_UINT32_(0x1) << INTCTRL_ATRL_TAMPER_Pos)           /* (INTCTRL_ATRL) Tamper Interrupt Mask */
#define INTCTRL_ATRL_TAMPER(value)            (INTCTRL_ATRL_TAMPER_Msk & (_UINT32_(value) << INTCTRL_ATRL_TAMPER_Pos)) /* Assigment of value for TAMPER in the INTCTRL_ATRL register */
#define INTCTRL_ATRL_EXTDMA_Pos               _UINT32_(2)                                          /* (INTCTRL_ATRL) External DMA Interrupt Position */
#define INTCTRL_ATRL_EXTDMA_Msk               (_UINT32_(0x1) << INTCTRL_ATRL_EXTDMA_Pos)           /* (INTCTRL_ATRL) External DMA Interrupt Mask */
#define INTCTRL_ATRL_EXTDMA(value)            (INTCTRL_ATRL_EXTDMA_Msk & (_UINT32_(value) << INTCTRL_ATRL_EXTDMA_Pos)) /* Assigment of value for EXTDMA in the INTCTRL_ATRL register */
#define INTCTRL_ATRL_WDOG_Pos                 _UINT32_(3)                                          /* (INTCTRL_ATRL) Watch Dog Interrupt Position */
#define INTCTRL_ATRL_WDOG_Msk                 (_UINT32_(0x1) << INTCTRL_ATRL_WDOG_Pos)             /* (INTCTRL_ATRL) Watch Dog Interrupt Mask */
#define INTCTRL_ATRL_WDOG(value)              (INTCTRL_ATRL_WDOG_Msk & (_UINT32_(value) << INTCTRL_ATRL_WDOG_Pos)) /* Assigment of value for WDOG in the INTCTRL_ATRL register */
#define INTCTRL_ATRL_TAMPER_BUSY_Pos          _UINT32_(5)                                          /* (INTCTRL_ATRL) Tamper Busy Interrupt Position */
#define INTCTRL_ATRL_TAMPER_BUSY_Msk          (_UINT32_(0x1) << INTCTRL_ATRL_TAMPER_BUSY_Pos)      /* (INTCTRL_ATRL) Tamper Busy Interrupt Mask */
#define INTCTRL_ATRL_TAMPER_BUSY(value)       (INTCTRL_ATRL_TAMPER_BUSY_Msk & (_UINT32_(value) << INTCTRL_ATRL_TAMPER_BUSY_Pos)) /* Assigment of value for TAMPER_BUSY in the INTCTRL_ATRL register */
#define INTCTRL_ATRL_TIMER0_Pos               _UINT32_(6)                                          /* (INTCTRL_ATRL) Timer 0 Interrupt Position */
#define INTCTRL_ATRL_TIMER0_Msk               (_UINT32_(0x1) << INTCTRL_ATRL_TIMER0_Pos)           /* (INTCTRL_ATRL) Timer 0 Interrupt Mask */
#define INTCTRL_ATRL_TIMER0(value)            (INTCTRL_ATRL_TIMER0_Msk & (_UINT32_(value) << INTCTRL_ATRL_TIMER0_Pos)) /* Assigment of value for TIMER0 in the INTCTRL_ATRL register */
#define INTCTRL_ATRL_TIMER1_Pos               _UINT32_(7)                                          /* (INTCTRL_ATRL) Timer 1 interrupt Position */
#define INTCTRL_ATRL_TIMER1_Msk               (_UINT32_(0x1) << INTCTRL_ATRL_TIMER1_Pos)           /* (INTCTRL_ATRL) Timer 1 interrupt Mask */
#define INTCTRL_ATRL_TIMER1(value)            (INTCTRL_ATRL_TIMER1_Msk & (_UINT32_(value) << INTCTRL_ATRL_TIMER1_Pos)) /* Assigment of value for TIMER1 in the INTCTRL_ATRL register */
#define INTCTRL_ATRL_PWRDOWN_Pos              _UINT32_(11)                                         /* (INTCTRL_ATRL) Power Down Interrupt Position */
#define INTCTRL_ATRL_PWRDOWN_Msk              (_UINT32_(0x1) << INTCTRL_ATRL_PWRDOWN_Pos)          /* (INTCTRL_ATRL) Power Down Interrupt Mask */
#define INTCTRL_ATRL_PWRDOWN(value)           (INTCTRL_ATRL_PWRDOWN_Msk & (_UINT32_(value) << INTCTRL_ATRL_PWRDOWN_Pos)) /* Assigment of value for PWRDOWN in the INTCTRL_ATRL register */
#define INTCTRL_ATRL_MB_TX_Pos                _UINT32_(14)                                         /* (INTCTRL_ATRL) Mailbox TX Interrupt Position */
#define INTCTRL_ATRL_MB_TX_Msk                (_UINT32_(0x1) << INTCTRL_ATRL_MB_TX_Pos)            /* (INTCTRL_ATRL) Mailbox TX Interrupt Mask */
#define INTCTRL_ATRL_MB_TX(value)             (INTCTRL_ATRL_MB_TX_Msk & (_UINT32_(value) << INTCTRL_ATRL_MB_TX_Pos)) /* Assigment of value for MB_TX in the INTCTRL_ATRL register */
#define INTCTRL_ATRL_MB_RX_Pos                _UINT32_(15)                                         /* (INTCTRL_ATRL) Mailbox RX Interrupt Position */
#define INTCTRL_ATRL_MB_RX_Msk                (_UINT32_(0x1) << INTCTRL_ATRL_MB_RX_Pos)            /* (INTCTRL_ATRL) Mailbox RX Interrupt Mask */
#define INTCTRL_ATRL_MB_RX(value)             (INTCTRL_ATRL_MB_RX_Msk & (_UINT32_(value) << INTCTRL_ATRL_MB_RX_Pos)) /* Assigment of value for MB_RX in the INTCTRL_ATRL register */
#define INTCTRL_ATRL_CRYPTO0_Pos              _UINT32_(16)                                         /* (INTCTRL_ATRL) Crypto Interrupt 0 Position */
#define INTCTRL_ATRL_CRYPTO0_Msk              (_UINT32_(0x1) << INTCTRL_ATRL_CRYPTO0_Pos)          /* (INTCTRL_ATRL) Crypto Interrupt 0 Mask */
#define INTCTRL_ATRL_CRYPTO0(value)           (INTCTRL_ATRL_CRYPTO0_Msk & (_UINT32_(value) << INTCTRL_ATRL_CRYPTO0_Pos)) /* Assigment of value for CRYPTO0 in the INTCTRL_ATRL register */
#define INTCTRL_ATRL_CRYPTO1_Pos              _UINT32_(17)                                         /* (INTCTRL_ATRL) Crypto Interrupt 1 Position */
#define INTCTRL_ATRL_CRYPTO1_Msk              (_UINT32_(0x1) << INTCTRL_ATRL_CRYPTO1_Pos)          /* (INTCTRL_ATRL) Crypto Interrupt 1 Mask */
#define INTCTRL_ATRL_CRYPTO1(value)           (INTCTRL_ATRL_CRYPTO1_Msk & (_UINT32_(value) << INTCTRL_ATRL_CRYPTO1_Pos)) /* Assigment of value for CRYPTO1 in the INTCTRL_ATRL register */
#define INTCTRL_ATRL_CRYPTO2_Pos              _UINT32_(18)                                         /* (INTCTRL_ATRL) Crypto Interrupt 2 Position */
#define INTCTRL_ATRL_CRYPTO2_Msk              (_UINT32_(0x1) << INTCTRL_ATRL_CRYPTO2_Pos)          /* (INTCTRL_ATRL) Crypto Interrupt 2 Mask */
#define INTCTRL_ATRL_CRYPTO2(value)           (INTCTRL_ATRL_CRYPTO2_Msk & (_UINT32_(value) << INTCTRL_ATRL_CRYPTO2_Pos)) /* Assigment of value for CRYPTO2 in the INTCTRL_ATRL register */
#define INTCTRL_ATRL_CRYPTO3_Pos              _UINT32_(19)                                         /* (INTCTRL_ATRL) Crypto Interrupt 3 Position */
#define INTCTRL_ATRL_CRYPTO3_Msk              (_UINT32_(0x1) << INTCTRL_ATRL_CRYPTO3_Pos)          /* (INTCTRL_ATRL) Crypto Interrupt 3 Mask */
#define INTCTRL_ATRL_CRYPTO3(value)           (INTCTRL_ATRL_CRYPTO3_Msk & (_UINT32_(value) << INTCTRL_ATRL_CRYPTO3_Pos)) /* Assigment of value for CRYPTO3 in the INTCTRL_ATRL register */
#define INTCTRL_ATRL_Msk                      _UINT32_(0x000FC8EF)                                 /* (INTCTRL_ATRL) Register Mask  */

#define INTCTRL_ATRL_TIMER_Pos                _UINT32_(6)                                          /* (INTCTRL_ATRL Position) Timer x Interrupt */
#define INTCTRL_ATRL_TIMER_Msk                (_UINT32_(0x3) << INTCTRL_ATRL_TIMER_Pos)            /* (INTCTRL_ATRL Mask) TIMER */
#define INTCTRL_ATRL_TIMER(value)             (INTCTRL_ATRL_TIMER_Msk & (_UINT32_(value) << INTCTRL_ATRL_TIMER_Pos)) 
#define INTCTRL_ATRL_CRYPTO_Pos               _UINT32_(16)                                         /* (INTCTRL_ATRL Position) Crypto Interrupt 3 */
#define INTCTRL_ATRL_CRYPTO_Msk               (_UINT32_(0xF) << INTCTRL_ATRL_CRYPTO_Pos)           /* (INTCTRL_ATRL Mask) CRYPTO */
#define INTCTRL_ATRL_CRYPTO(value)            (INTCTRL_ATRL_CRYPTO_Msk & (_UINT32_(value) << INTCTRL_ATRL_CRYPTO_Pos)) 

/* -------- INTCTRL_ITRL : (INTCTRL Offset: 0x40) (R/W 32) Interrupt Type register Low -------- */
#define INTCTRL_ITRL_RESETVALUE               _UINT32_(0x00)                                       /*  (INTCTRL_ITRL) Interrupt Type register Low  Reset Value */

#define INTCTRL_ITRL_RTC_Pos                  _UINT32_(0)                                          /* (INTCTRL_ITRL) RTC Interrupt Position */
#define INTCTRL_ITRL_RTC_Msk                  (_UINT32_(0x1) << INTCTRL_ITRL_RTC_Pos)              /* (INTCTRL_ITRL) RTC Interrupt Mask */
#define INTCTRL_ITRL_RTC(value)               (INTCTRL_ITRL_RTC_Msk & (_UINT32_(value) << INTCTRL_ITRL_RTC_Pos)) /* Assigment of value for RTC in the INTCTRL_ITRL register */
#define INTCTRL_ITRL_TAMPER_Pos               _UINT32_(1)                                          /* (INTCTRL_ITRL) Tamper Interrupt Position */
#define INTCTRL_ITRL_TAMPER_Msk               (_UINT32_(0x1) << INTCTRL_ITRL_TAMPER_Pos)           /* (INTCTRL_ITRL) Tamper Interrupt Mask */
#define INTCTRL_ITRL_TAMPER(value)            (INTCTRL_ITRL_TAMPER_Msk & (_UINT32_(value) << INTCTRL_ITRL_TAMPER_Pos)) /* Assigment of value for TAMPER in the INTCTRL_ITRL register */
#define INTCTRL_ITRL_EXTDMA_Pos               _UINT32_(2)                                          /* (INTCTRL_ITRL) External DMA Interrupt Position */
#define INTCTRL_ITRL_EXTDMA_Msk               (_UINT32_(0x1) << INTCTRL_ITRL_EXTDMA_Pos)           /* (INTCTRL_ITRL) External DMA Interrupt Mask */
#define INTCTRL_ITRL_EXTDMA(value)            (INTCTRL_ITRL_EXTDMA_Msk & (_UINT32_(value) << INTCTRL_ITRL_EXTDMA_Pos)) /* Assigment of value for EXTDMA in the INTCTRL_ITRL register */
#define INTCTRL_ITRL_WDOG_Pos                 _UINT32_(3)                                          /* (INTCTRL_ITRL) Watch Dog Interrupt Position */
#define INTCTRL_ITRL_WDOG_Msk                 (_UINT32_(0x1) << INTCTRL_ITRL_WDOG_Pos)             /* (INTCTRL_ITRL) Watch Dog Interrupt Mask */
#define INTCTRL_ITRL_WDOG(value)              (INTCTRL_ITRL_WDOG_Msk & (_UINT32_(value) << INTCTRL_ITRL_WDOG_Pos)) /* Assigment of value for WDOG in the INTCTRL_ITRL register */
#define INTCTRL_ITRL_TAMPER_BUSY_Pos          _UINT32_(5)                                          /* (INTCTRL_ITRL) Tamper Busy Interrupt Position */
#define INTCTRL_ITRL_TAMPER_BUSY_Msk          (_UINT32_(0x1) << INTCTRL_ITRL_TAMPER_BUSY_Pos)      /* (INTCTRL_ITRL) Tamper Busy Interrupt Mask */
#define INTCTRL_ITRL_TAMPER_BUSY(value)       (INTCTRL_ITRL_TAMPER_BUSY_Msk & (_UINT32_(value) << INTCTRL_ITRL_TAMPER_BUSY_Pos)) /* Assigment of value for TAMPER_BUSY in the INTCTRL_ITRL register */
#define INTCTRL_ITRL_TIMER0_Pos               _UINT32_(6)                                          /* (INTCTRL_ITRL) Timer 0 Interrupt Position */
#define INTCTRL_ITRL_TIMER0_Msk               (_UINT32_(0x1) << INTCTRL_ITRL_TIMER0_Pos)           /* (INTCTRL_ITRL) Timer 0 Interrupt Mask */
#define INTCTRL_ITRL_TIMER0(value)            (INTCTRL_ITRL_TIMER0_Msk & (_UINT32_(value) << INTCTRL_ITRL_TIMER0_Pos)) /* Assigment of value for TIMER0 in the INTCTRL_ITRL register */
#define INTCTRL_ITRL_TIMER1_Pos               _UINT32_(7)                                          /* (INTCTRL_ITRL) Timer 1 interrupt Position */
#define INTCTRL_ITRL_TIMER1_Msk               (_UINT32_(0x1) << INTCTRL_ITRL_TIMER1_Pos)           /* (INTCTRL_ITRL) Timer 1 interrupt Mask */
#define INTCTRL_ITRL_TIMER1(value)            (INTCTRL_ITRL_TIMER1_Msk & (_UINT32_(value) << INTCTRL_ITRL_TIMER1_Pos)) /* Assigment of value for TIMER1 in the INTCTRL_ITRL register */
#define INTCTRL_ITRL_PWRDOWN_Pos              _UINT32_(11)                                         /* (INTCTRL_ITRL) Power Down Interrupt Position */
#define INTCTRL_ITRL_PWRDOWN_Msk              (_UINT32_(0x1) << INTCTRL_ITRL_PWRDOWN_Pos)          /* (INTCTRL_ITRL) Power Down Interrupt Mask */
#define INTCTRL_ITRL_PWRDOWN(value)           (INTCTRL_ITRL_PWRDOWN_Msk & (_UINT32_(value) << INTCTRL_ITRL_PWRDOWN_Pos)) /* Assigment of value for PWRDOWN in the INTCTRL_ITRL register */
#define INTCTRL_ITRL_MB_TX_Pos                _UINT32_(14)                                         /* (INTCTRL_ITRL) Mailbox TX Interrupt Position */
#define INTCTRL_ITRL_MB_TX_Msk                (_UINT32_(0x1) << INTCTRL_ITRL_MB_TX_Pos)            /* (INTCTRL_ITRL) Mailbox TX Interrupt Mask */
#define INTCTRL_ITRL_MB_TX(value)             (INTCTRL_ITRL_MB_TX_Msk & (_UINT32_(value) << INTCTRL_ITRL_MB_TX_Pos)) /* Assigment of value for MB_TX in the INTCTRL_ITRL register */
#define INTCTRL_ITRL_MB_RX_Pos                _UINT32_(15)                                         /* (INTCTRL_ITRL) Mailbox RX Interrupt Position */
#define INTCTRL_ITRL_MB_RX_Msk                (_UINT32_(0x1) << INTCTRL_ITRL_MB_RX_Pos)            /* (INTCTRL_ITRL) Mailbox RX Interrupt Mask */
#define INTCTRL_ITRL_MB_RX(value)             (INTCTRL_ITRL_MB_RX_Msk & (_UINT32_(value) << INTCTRL_ITRL_MB_RX_Pos)) /* Assigment of value for MB_RX in the INTCTRL_ITRL register */
#define INTCTRL_ITRL_CRYPTO0_Pos              _UINT32_(16)                                         /* (INTCTRL_ITRL) Crypto Interrupt 0 Position */
#define INTCTRL_ITRL_CRYPTO0_Msk              (_UINT32_(0x1) << INTCTRL_ITRL_CRYPTO0_Pos)          /* (INTCTRL_ITRL) Crypto Interrupt 0 Mask */
#define INTCTRL_ITRL_CRYPTO0(value)           (INTCTRL_ITRL_CRYPTO0_Msk & (_UINT32_(value) << INTCTRL_ITRL_CRYPTO0_Pos)) /* Assigment of value for CRYPTO0 in the INTCTRL_ITRL register */
#define INTCTRL_ITRL_CRYPTO1_Pos              _UINT32_(17)                                         /* (INTCTRL_ITRL) Crypto Interrupt 1 Position */
#define INTCTRL_ITRL_CRYPTO1_Msk              (_UINT32_(0x1) << INTCTRL_ITRL_CRYPTO1_Pos)          /* (INTCTRL_ITRL) Crypto Interrupt 1 Mask */
#define INTCTRL_ITRL_CRYPTO1(value)           (INTCTRL_ITRL_CRYPTO1_Msk & (_UINT32_(value) << INTCTRL_ITRL_CRYPTO1_Pos)) /* Assigment of value for CRYPTO1 in the INTCTRL_ITRL register */
#define INTCTRL_ITRL_CRYPTO2_Pos              _UINT32_(18)                                         /* (INTCTRL_ITRL) Crypto Interrupt 2 Position */
#define INTCTRL_ITRL_CRYPTO2_Msk              (_UINT32_(0x1) << INTCTRL_ITRL_CRYPTO2_Pos)          /* (INTCTRL_ITRL) Crypto Interrupt 2 Mask */
#define INTCTRL_ITRL_CRYPTO2(value)           (INTCTRL_ITRL_CRYPTO2_Msk & (_UINT32_(value) << INTCTRL_ITRL_CRYPTO2_Pos)) /* Assigment of value for CRYPTO2 in the INTCTRL_ITRL register */
#define INTCTRL_ITRL_CRYPTO3_Pos              _UINT32_(19)                                         /* (INTCTRL_ITRL) Crypto Interrupt 3 Position */
#define INTCTRL_ITRL_CRYPTO3_Msk              (_UINT32_(0x1) << INTCTRL_ITRL_CRYPTO3_Pos)          /* (INTCTRL_ITRL) Crypto Interrupt 3 Mask */
#define INTCTRL_ITRL_CRYPTO3(value)           (INTCTRL_ITRL_CRYPTO3_Msk & (_UINT32_(value) << INTCTRL_ITRL_CRYPTO3_Pos)) /* Assigment of value for CRYPTO3 in the INTCTRL_ITRL register */
#define INTCTRL_ITRL_Msk                      _UINT32_(0x000FC8EF)                                 /* (INTCTRL_ITRL) Register Mask  */

#define INTCTRL_ITRL_TIMER_Pos                _UINT32_(6)                                          /* (INTCTRL_ITRL Position) Timer x Interrupt */
#define INTCTRL_ITRL_TIMER_Msk                (_UINT32_(0x3) << INTCTRL_ITRL_TIMER_Pos)            /* (INTCTRL_ITRL Mask) TIMER */
#define INTCTRL_ITRL_TIMER(value)             (INTCTRL_ITRL_TIMER_Msk & (_UINT32_(value) << INTCTRL_ITRL_TIMER_Pos)) 
#define INTCTRL_ITRL_CRYPTO_Pos               _UINT32_(16)                                         /* (INTCTRL_ITRL Position) Crypto Interrupt 3 */
#define INTCTRL_ITRL_CRYPTO_Msk               (_UINT32_(0xF) << INTCTRL_ITRL_CRYPTO_Pos)           /* (INTCTRL_ITRL Mask) CRYPTO */
#define INTCTRL_ITRL_CRYPTO(value)            (INTCTRL_ITRL_CRYPTO_Msk & (_UINT32_(value) << INTCTRL_ITRL_CRYPTO_Pos)) 

/* -------- INTCTRL_PIN : (INTCTRL Offset: 0x48) ( R/ 32) Interrupt Pending IRQ Num -------- */
#define INTCTRL_PIN_RESETVALUE                _UINT32_(0x00)                                       /*  (INTCTRL_PIN) Interrupt Pending IRQ Num  Reset Value */

#define INTCTRL_PIN_PIN_Pos                   _UINT32_(0)                                          /* (INTCTRL_PIN) Pending IRQ Num Position */
#define INTCTRL_PIN_PIN_Msk                   (_UINT32_(0x3F) << INTCTRL_PIN_PIN_Pos)              /* (INTCTRL_PIN) Pending IRQ Num Mask */
#define INTCTRL_PIN_PIN(value)                (INTCTRL_PIN_PIN_Msk & (_UINT32_(value) << INTCTRL_PIN_PIN_Pos)) /* Assigment of value for PIN in the INTCTRL_PIN register */
#define INTCTRL_PIN_Msk                       _UINT32_(0x0000003F)                                 /* (INTCTRL_PIN) Register Mask  */


/** \brief INTCTRL register offsets definitions */
#define INTCTRL_STATL_REG_OFST         _UINT32_(0x00)      /* (INTCTRL_STATL) Interrupt Status Register Low Offset */
#define INTCTRL_RSRL_REG_OFST          _UINT32_(0x08)      /* (INTCTRL_RSRL) Interrupt Raw Status Register Low Offset */
#define INTCTRL_ENAL_REG_OFST          _UINT32_(0x10)      /* (INTCTRL_ENAL) Interrupt Enable Register Low Offset */
#define INTCTRL_CLRL_REG_OFST          _UINT32_(0x18)      /* (INTCTRL_CLRL) Interrupt Disable Register Low Offset */
#define INTCTRL_TSTL_REG_OFST          _UINT32_(0x20)      /* (INTCTRL_TSTL) Interrupt Test Source Register Low Offset */
#define INTCTRL_SELL_REG_OFST          _UINT32_(0x28)      /* (INTCTRL_SELL) Interrupt Source Selection Register Low Offset */
#define INTCTRL_APRL_REG_OFST          _UINT32_(0x30)      /* (INTCTRL_APRL) Interrupt Activation Polarity Register Low Offset */
#define INTCTRL_ATRL_REG_OFST          _UINT32_(0x38)      /* (INTCTRL_ATRL) Interrupt Activation Type Register Low Offset */
#define INTCTRL_ITRL_REG_OFST          _UINT32_(0x40)      /* (INTCTRL_ITRL) Interrupt Type register Low Offset */
#define INTCTRL_PIN_REG_OFST           _UINT32_(0x48)      /* (INTCTRL_PIN) Interrupt Pending IRQ Num Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief INTCTRL register API structure */
typedef struct
{  /* eSecure Interrupt Controller Module */
  __I   uint32_t                       INTCTRL_STATL;      /**< Offset: 0x00 (R/   32) Interrupt Status Register Low */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       INTCTRL_RSRL;       /**< Offset: 0x08 (R/W  32) Interrupt Raw Status Register Low */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       INTCTRL_ENAL;       /**< Offset: 0x10 (R/W  32) Interrupt Enable Register Low */
  __I   uint8_t                        Reserved3[0x04];
  __O   uint32_t                       INTCTRL_CLRL;       /**< Offset: 0x18 ( /W  32) Interrupt Disable Register Low */
  __I   uint8_t                        Reserved4[0x04];
  __IO  uint32_t                       INTCTRL_TSTL;       /**< Offset: 0x20 (R/W  32) Interrupt Test Source Register Low */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       INTCTRL_SELL;       /**< Offset: 0x28 (R/W  32) Interrupt Source Selection Register Low */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint32_t                       INTCTRL_APRL;       /**< Offset: 0x30 (R/W  32) Interrupt Activation Polarity Register Low */
  __I   uint8_t                        Reserved7[0x04];
  __IO  uint32_t                       INTCTRL_ATRL;       /**< Offset: 0x38 (R/W  32) Interrupt Activation Type Register Low */
  __I   uint8_t                        Reserved8[0x04];
  __IO  uint32_t                       INTCTRL_ITRL;       /**< Offset: 0x40 (R/W  32) Interrupt Type register Low */
  __I   uint8_t                        Reserved9[0x04];
  __I   uint32_t                       INTCTRL_PIN;        /**< Offset: 0x48 (R/   32) Interrupt Pending IRQ Num */
} intctrl_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CZCA90_INTCTRL_COMPONENT_H_ */
