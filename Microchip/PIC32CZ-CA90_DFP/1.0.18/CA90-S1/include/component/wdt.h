/*
 * Component description for WDT
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
#ifndef _PIC32CZCA90_WDT_COMPONENT_H_
#define _PIC32CZCA90_WDT_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR WDT                                          */
/* ************************************************************************** */

/* -------- WDT_WDCOUNT : (WDT Offset: 0x00) ( R/ 32) Count -------- */
#define WDT_WDCOUNT_Msk                       _UINT32_(0x00000000)                                 /* (WDT_WDCOUNT) Register Mask  */


/* -------- WDT_WDRELOAD : (WDT Offset: 0x04) (R/W 32) Reload -------- */
#define WDT_WDRELOAD_Msk                      _UINT32_(0x00000000)                                 /* (WDT_WDRELOAD) Register Mask  */


/* -------- WDT_WDKICK : (WDT Offset: 0x08) ( /W 32) Kick -------- */
#define WDT_WDKICK_Msk                        _UINT32_(0x00000000)                                 /* (WDT_WDKICK) Register Mask  */


/* -------- WDT_WDCONTROL : (WDT Offset: 0x0C) (R/W 32) Control -------- */
#define WDT_WDCONTROL_RESETVALUE              _UINT32_(0x00)                                       /*  (WDT_WDCONTROL) Control  Reset Value */

#define WDT_WDCONTROL_WDRSTEN_Pos             _UINT32_(0)                                          /* (WDT_WDCONTROL) WDRSTEN Position */
#define WDT_WDCONTROL_WDRSTEN_Msk             (_UINT32_(0x1) << WDT_WDCONTROL_WDRSTEN_Pos)         /* (WDT_WDCONTROL) WDRSTEN Mask */
#define WDT_WDCONTROL_WDRSTEN(value)          (WDT_WDCONTROL_WDRSTEN_Msk & (_UINT32_(value) << WDT_WDCONTROL_WDRSTEN_Pos)) /* Assigment of value for WDRSTEN in the WDT_WDCONTROL register */
#define WDT_WDCONTROL_Msk                     _UINT32_(0x00000001)                                 /* (WDT_WDCONTROL) Register Mask  */


/* -------- WDT_WDSTATUS : (WDT Offset: 0x10) ( R/ 32) Status -------- */
#define WDT_WDSTATUS_Msk                      _UINT32_(0x00000000)                                 /* (WDT_WDSTATUS) Register Mask  */


/* -------- WDT_WDSTOP : (WDT Offset: 0x14) ( /W 32) Stop -------- */
#define WDT_WDSTOP_Msk                        _UINT32_(0x00000000)                                 /* (WDT_WDSTOP) Register Mask  */


/** \brief WDT register offsets definitions */
#define WDT_WDCOUNT_REG_OFST           _UINT32_(0x00)      /* (WDT_WDCOUNT) Count Offset */
#define WDT_WDRELOAD_REG_OFST          _UINT32_(0x04)      /* (WDT_WDRELOAD) Reload Offset */
#define WDT_WDKICK_REG_OFST            _UINT32_(0x08)      /* (WDT_WDKICK) Kick Offset */
#define WDT_WDCONTROL_REG_OFST         _UINT32_(0x0C)      /* (WDT_WDCONTROL) Control Offset */
#define WDT_WDSTATUS_REG_OFST          _UINT32_(0x10)      /* (WDT_WDSTATUS) Status Offset */
#define WDT_WDSTOP_REG_OFST            _UINT32_(0x14)      /* (WDT_WDSTOP) Stop Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief WDT register API structure */
typedef struct
{  /* Watchdog Timer Module */
  __I   uint32_t                       WDT_WDCOUNT;        /**< Offset: 0x00 (R/   32) Count */
  __IO  uint32_t                       WDT_WDRELOAD;       /**< Offset: 0x04 (R/W  32) Reload */
  __O   uint32_t                       WDT_WDKICK;         /**< Offset: 0x08 ( /W  32) Kick */
  __IO  uint32_t                       WDT_WDCONTROL;      /**< Offset: 0x0C (R/W  32) Control */
  __I   uint32_t                       WDT_WDSTATUS;       /**< Offset: 0x10 (R/   32) Status */
  __O   uint32_t                       WDT_WDSTOP;         /**< Offset: 0x14 ( /W  32) Stop */
} wdt_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CZCA90_WDT_COMPONENT_H_ */
