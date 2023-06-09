/*-------------------------------------------------------------------------
 * PIC32MM0064GPM028 processor header
 * Build date : Aug 27 2021
 *
 * Copyright (c) 2021, Microchip Technology Inc. and its subsidiaries ("Microchip")
 * All rights reserved.
 * 
 * This software is developed by Microchip Technology Inc. and its
 * subsidiaries ("Microchip").
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are 
 * met:
 * 
 * 1.      Redistributions of source code must retain the above copyright
 *         notice, this list of conditions and the following disclaimer.
 * 2.      Redistributions in binary form must reproduce the above 
 *         copyright notice, this list of conditions and the following 
 *         disclaimer in the documentation and/or other materials provided 
 *         with the distribution. Publication is not required when this file 
 *         is used in an embedded application.
 * 3.      Microchip's name may not be used to endorse or promote products
 *         derived from this software without specific prior written 
 *         permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR PURPOSE ARE DISCLAIMED. IN NO EVENT 
 * SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

#pragma once
#ifndef __32MM0064GPM028_H
#define __32MM0064GPM028_H

#if defined (__LANGUAGE_C__) || defined (__LANGUAGE_C_PLUS_PLUS)

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define RTCCON1 RTCCON1
extern volatile uint32_t   RTCCON1 __attribute__((section("sfrs"), address(0xBF800000)));
typedef struct {
  uint32_t :4;
  uint32_t OUTSEL:3;
  uint32_t RTCOE:1;
  uint32_t :3;
  uint32_t WRLOCK:1;
  uint32_t :3;
  uint32_t ON:1;
  uint32_t ALMRPT:8;
  uint32_t AMASK:4;
  uint32_t :2;
  uint32_t CHIME:1;
  uint32_t ALRMEN:1;
} __RTCCON1bits_t;
extern volatile __RTCCON1bits_t RTCCON1bits __asm__ ("RTCCON1") __attribute__((section("sfrs"), address(0xBF800000)));
extern volatile uint32_t        RTCCON1CLR __attribute__((section("sfrs"),address(0xBF800004)));
extern volatile uint32_t        RTCCON1SET __attribute__((section("sfrs"),address(0xBF800008)));
extern volatile uint32_t        RTCCON1INV __attribute__((section("sfrs"),address(0xBF80000C)));
#define RTCCON2 RTCCON2
extern volatile uint32_t   RTCCON2 __attribute__((section("sfrs"), address(0xBF800010)));
typedef struct {
  uint32_t CLKSEL:2;
  uint32_t :9;
  uint32_t FDIV:5;
  uint32_t DIV:16;
} __RTCCON2bits_t;
extern volatile __RTCCON2bits_t RTCCON2bits __asm__ ("RTCCON2") __attribute__((section("sfrs"), address(0xBF800010)));
extern volatile uint32_t        RTCCON2CLR __attribute__((section("sfrs"),address(0xBF800014)));
extern volatile uint32_t        RTCCON2SET __attribute__((section("sfrs"),address(0xBF800018)));
extern volatile uint32_t        RTCCON2INV __attribute__((section("sfrs"),address(0xBF80001C)));
#define RTCSTAT RTCSTAT
extern volatile uint32_t   RTCSTAT __attribute__((section("sfrs"), address(0xBF800030)));
typedef struct {
  uint32_t HALFSEC:1;
  uint32_t ALMSYNC:1;
  uint32_t SYNC:1;
  uint32_t :2;
  uint32_t ALMEVT:1;
} __RTCSTATbits_t;
extern volatile __RTCSTATbits_t RTCSTATbits __asm__ ("RTCSTAT") __attribute__((section("sfrs"), address(0xBF800030)));
extern volatile uint32_t        RTCSTATCLR __attribute__((section("sfrs"),address(0xBF800034)));
extern volatile uint32_t        RTCSTATSET __attribute__((section("sfrs"),address(0xBF800038)));
extern volatile uint32_t        RTCSTATINV __attribute__((section("sfrs"),address(0xBF80003C)));
#define RTCTIME RTCTIME
extern volatile uint32_t   RTCTIME __attribute__((section("sfrs"), address(0xBF800040)));
typedef struct {
  uint32_t :8;
  uint32_t SECONE:4;
  uint32_t SECTEN:3;
  uint32_t :1;
  uint32_t MINONE:4;
  uint32_t MINTEN:3;
  uint32_t :1;
  uint32_t HRONE:4;
  uint32_t HRTEN:3;
} __RTCTIMEbits_t;
extern volatile __RTCTIMEbits_t RTCTIMEbits __asm__ ("RTCTIME") __attribute__((section("sfrs"), address(0xBF800040)));
extern volatile uint32_t        RTCTIMECLR __attribute__((section("sfrs"),address(0xBF800044)));
extern volatile uint32_t        RTCTIMESET __attribute__((section("sfrs"),address(0xBF800048)));
extern volatile uint32_t        RTCTIMEINV __attribute__((section("sfrs"),address(0xBF80004C)));
#define RTCDATE RTCDATE
extern volatile uint32_t   RTCDATE __attribute__((section("sfrs"), address(0xBF800050)));
typedef struct {
  uint32_t WDAY:3;
  uint32_t :5;
  uint32_t DAYONE:4;
  uint32_t DAYTEN:2;
  uint32_t :2;
  uint32_t MTHONE:4;
  uint32_t MTHTEN:1;
  uint32_t :3;
  uint32_t YRONE:4;
  uint32_t YRTEN:4;
} __RTCDATEbits_t;
extern volatile __RTCDATEbits_t RTCDATEbits __asm__ ("RTCDATE") __attribute__((section("sfrs"), address(0xBF800050)));
extern volatile uint32_t        RTCDATECLR __attribute__((section("sfrs"),address(0xBF800054)));
extern volatile uint32_t        RTCDATESET __attribute__((section("sfrs"),address(0xBF800058)));
extern volatile uint32_t        RTCDATEINV __attribute__((section("sfrs"),address(0xBF80005C)));
#define ALMTIME ALMTIME
extern volatile uint32_t   ALMTIME __attribute__((section("sfrs"), address(0xBF800060)));
typedef struct {
  uint32_t :8;
  uint32_t SECONE:4;
  uint32_t SECTEN:3;
  uint32_t :1;
  uint32_t MINONE:4;
  uint32_t MINTEN:3;
  uint32_t :1;
  uint32_t HRONE:4;
  uint32_t HRTEN:3;
} __ALMTIMEbits_t;
extern volatile __ALMTIMEbits_t ALMTIMEbits __asm__ ("ALMTIME") __attribute__((section("sfrs"), address(0xBF800060)));
extern volatile uint32_t        ALMTIMECLR __attribute__((section("sfrs"),address(0xBF800064)));
extern volatile uint32_t        ALMTIMESET __attribute__((section("sfrs"),address(0xBF800068)));
extern volatile uint32_t        ALMTIMEINV __attribute__((section("sfrs"),address(0xBF80006C)));
#define ALMDATE ALMDATE
extern volatile uint32_t   ALMDATE __attribute__((section("sfrs"), address(0xBF800070)));
typedef struct {
  uint32_t WDAY:3;
  uint32_t :5;
  uint32_t DAYONE:4;
  uint32_t DAYTEN:2;
  uint32_t :2;
  uint32_t MTHONE:4;
  uint32_t MTHTEN:1;
} __ALMDATEbits_t;
extern volatile __ALMDATEbits_t ALMDATEbits __asm__ ("ALMDATE") __attribute__((section("sfrs"), address(0xBF800070)));
extern volatile uint32_t        ALMDATECLR __attribute__((section("sfrs"),address(0xBF800074)));
extern volatile uint32_t        ALMDATESET __attribute__((section("sfrs"),address(0xBF800078)));
extern volatile uint32_t        ALMDATEINV __attribute__((section("sfrs"),address(0xBF80007C)));
#define CCP1CON1 CCP1CON1
extern volatile uint32_t   CCP1CON1 __attribute__((section("sfrs"), address(0xBF800100)));
typedef struct {
  uint32_t MOD:4;
  uint32_t CCSEL:1;
  uint32_t T32:1;
  uint32_t TMRPS:2;
  uint32_t CLKSEL:3;
  uint32_t TMRSYNC:1;
  uint32_t CCPSLP:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t SYNC:5;
  uint32_t ALTSYNC:1;
  uint32_t ONESHOT:1;
  uint32_t TRIGEN:1;
  uint32_t OPS:4;
  uint32_t :2;
  uint32_t RTRGEN:1;
  uint32_t OPSSRC:1;
} __CCP1CON1bits_t;
extern volatile __CCP1CON1bits_t CCP1CON1bits __asm__ ("CCP1CON1") __attribute__((section("sfrs"), address(0xBF800100)));
extern volatile uint32_t        CCP1CON1CLR __attribute__((section("sfrs"),address(0xBF800104)));
extern volatile uint32_t        CCP1CON1SET __attribute__((section("sfrs"),address(0xBF800108)));
extern volatile uint32_t        CCP1CON1INV __attribute__((section("sfrs"),address(0xBF80010C)));
#define CCP1CON2 CCP1CON2
extern volatile uint32_t   CCP1CON2 __attribute__((section("sfrs"), address(0xBF800110)));
typedef struct {
  uint32_t ASDG:8;
  uint32_t :4;
  uint32_t SSDG:1;
  uint32_t :1;
  uint32_t ASDGM:1;
  uint32_t PWMRSEN:1;
  uint32_t ICS:3;
  uint32_t AUXOUT:2;
  uint32_t :1;
  uint32_t ICGSM:2;
  uint32_t OCAEN:1;
  uint32_t OCBEN:1;
  uint32_t OCCEN:1;
  uint32_t OCDEN:1;
  uint32_t OCEEN:1;
  uint32_t OCFEN:1;
  uint32_t :1;
  uint32_t OENSYNC:1;
} __CCP1CON2bits_t;
extern volatile __CCP1CON2bits_t CCP1CON2bits __asm__ ("CCP1CON2") __attribute__((section("sfrs"), address(0xBF800110)));
extern volatile uint32_t        CCP1CON2CLR __attribute__((section("sfrs"),address(0xBF800114)));
extern volatile uint32_t        CCP1CON2SET __attribute__((section("sfrs"),address(0xBF800118)));
extern volatile uint32_t        CCP1CON2INV __attribute__((section("sfrs"),address(0xBF80011C)));
#define CCP1CON3 CCP1CON3
extern volatile uint32_t   CCP1CON3 __attribute__((section("sfrs"), address(0xBF800120)));
typedef struct {
  uint32_t DT:6;
  uint32_t :10;
  uint32_t PSSBDF:2;
  uint32_t PSSACE:2;
  uint32_t POLBDF:1;
  uint32_t POLACE:1;
  uint32_t :2;
  uint32_t OUTM:3;
  uint32_t :1;
  uint32_t OSCNT:3;
  uint32_t OETRIG:1;
} __CCP1CON3bits_t;
extern volatile __CCP1CON3bits_t CCP1CON3bits __asm__ ("CCP1CON3") __attribute__((section("sfrs"), address(0xBF800120)));
extern volatile uint32_t        CCP1CON3CLR __attribute__((section("sfrs"),address(0xBF800124)));
extern volatile uint32_t        CCP1CON3SET __attribute__((section("sfrs"),address(0xBF800128)));
extern volatile uint32_t        CCP1CON3INV __attribute__((section("sfrs"),address(0xBF80012C)));
#define CCP1STAT CCP1STAT
extern volatile uint32_t   CCP1STAT __attribute__((section("sfrs"), address(0xBF800130)));
typedef struct {
  uint32_t ICBNE:1;
  uint32_t ICOV:1;
  uint32_t ICDIS:1;
  uint32_t SCEVT:1;
  uint32_t ASEVT:1;
  uint32_t TRCLR:1;
  uint32_t TRSET:1;
  uint32_t CCPTRIG:1;
  uint32_t :2;
  uint32_t ICGARM:1;
  uint32_t :5;
  uint32_t RAWIP:1;
  uint32_t RBWIP:1;
  uint32_t TMRLWIP:1;
  uint32_t TMRHWIP:1;
  uint32_t PRLWIP:1;
} __CCP1STATbits_t;
extern volatile __CCP1STATbits_t CCP1STATbits __asm__ ("CCP1STAT") __attribute__((section("sfrs"), address(0xBF800130)));
extern volatile uint32_t        CCP1STATCLR __attribute__((section("sfrs"),address(0xBF800134)));
extern volatile uint32_t        CCP1STATSET __attribute__((section("sfrs"),address(0xBF800138)));
extern volatile uint32_t        CCP1STATINV __attribute__((section("sfrs"),address(0xBF80013C)));
#define CCP1TMR CCP1TMR
extern volatile uint32_t   CCP1TMR __attribute__((section("sfrs"), address(0xBF800140)));
typedef union {
  struct {
    uint32_t TMRL:16;
    uint32_t TMRH:16;
  };
  struct {
    uint32_t TMR:32;
  };
} __CCP1TMRbits_t;
extern volatile __CCP1TMRbits_t CCP1TMRbits __asm__ ("CCP1TMR") __attribute__((section("sfrs"), address(0xBF800140)));
extern volatile uint32_t        CCP1TMRCLR __attribute__((section("sfrs"),address(0xBF800144)));
extern volatile uint32_t        CCP1TMRSET __attribute__((section("sfrs"),address(0xBF800148)));
extern volatile uint32_t        CCP1TMRINV __attribute__((section("sfrs"),address(0xBF80014C)));
#define CCP1PR CCP1PR
extern volatile uint32_t   CCP1PR __attribute__((section("sfrs"), address(0xBF800150)));
typedef union {
  struct {
    uint32_t PRL:16;
    uint32_t PRH:16;
  };
  struct {
    uint32_t PR:32;
  };
} __CCP1PRbits_t;
extern volatile __CCP1PRbits_t CCP1PRbits __asm__ ("CCP1PR") __attribute__((section("sfrs"), address(0xBF800150)));
extern volatile uint32_t        CCP1PRCLR __attribute__((section("sfrs"),address(0xBF800154)));
extern volatile uint32_t        CCP1PRSET __attribute__((section("sfrs"),address(0xBF800158)));
extern volatile uint32_t        CCP1PRINV __attribute__((section("sfrs"),address(0xBF80015C)));
#define CCP1RA CCP1RA
extern volatile uint32_t   CCP1RA __attribute__((section("sfrs"), address(0xBF800160)));
typedef struct {
  uint32_t CMPA:16;
} __CCP1RAbits_t;
extern volatile __CCP1RAbits_t CCP1RAbits __asm__ ("CCP1RA") __attribute__((section("sfrs"), address(0xBF800160)));
extern volatile uint32_t        CCP1RACLR __attribute__((section("sfrs"),address(0xBF800164)));
extern volatile uint32_t        CCP1RASET __attribute__((section("sfrs"),address(0xBF800168)));
extern volatile uint32_t        CCP1RAINV __attribute__((section("sfrs"),address(0xBF80016C)));
#define CCP1RB CCP1RB
extern volatile uint32_t   CCP1RB __attribute__((section("sfrs"), address(0xBF800170)));
typedef struct {
  uint32_t CMPB:16;
} __CCP1RBbits_t;
extern volatile __CCP1RBbits_t CCP1RBbits __asm__ ("CCP1RB") __attribute__((section("sfrs"), address(0xBF800170)));
extern volatile uint32_t        CCP1RBCLR __attribute__((section("sfrs"),address(0xBF800174)));
extern volatile uint32_t        CCP1RBSET __attribute__((section("sfrs"),address(0xBF800178)));
extern volatile uint32_t        CCP1RBINV __attribute__((section("sfrs"),address(0xBF80017C)));
#define CCP1BUF CCP1BUF
extern volatile uint32_t   CCP1BUF __attribute__((section("sfrs"), address(0xBF800180)));
typedef union {
  struct {
    uint32_t BUFL:16;
    uint32_t BUFH:16;
  };
  struct {
    uint32_t BUF:32;
  };
} __CCP1BUFbits_t;
extern volatile __CCP1BUFbits_t CCP1BUFbits __asm__ ("CCP1BUF") __attribute__((section("sfrs"), address(0xBF800180)));
extern volatile uint32_t        CCP1BUFCLR __attribute__((section("sfrs"),address(0xBF800184)));
extern volatile uint32_t        CCP1BUFSET __attribute__((section("sfrs"),address(0xBF800188)));
extern volatile uint32_t        CCP1BUFINV __attribute__((section("sfrs"),address(0xBF80018C)));
#define CCP2CON1 CCP2CON1
extern volatile uint32_t   CCP2CON1 __attribute__((section("sfrs"), address(0xBF800200)));
typedef struct {
  uint32_t MOD:4;
  uint32_t CCSEL:1;
  uint32_t T32:1;
  uint32_t TMRPS:2;
  uint32_t CLKSEL:3;
  uint32_t TMRSYNC:1;
  uint32_t CCPSLP:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t SYNC:5;
  uint32_t ALTSYNC:1;
  uint32_t ONESHOT:1;
  uint32_t TRIGEN:1;
  uint32_t OPS:4;
  uint32_t :2;
  uint32_t RTRGEN:1;
  uint32_t OPSSRC:1;
} __CCP2CON1bits_t;
extern volatile __CCP2CON1bits_t CCP2CON1bits __asm__ ("CCP2CON1") __attribute__((section("sfrs"), address(0xBF800200)));
extern volatile uint32_t        CCP2CON1CLR __attribute__((section("sfrs"),address(0xBF800204)));
extern volatile uint32_t        CCP2CON1SET __attribute__((section("sfrs"),address(0xBF800208)));
extern volatile uint32_t        CCP2CON1INV __attribute__((section("sfrs"),address(0xBF80020C)));
#define CCP2CON2 CCP2CON2
extern volatile uint32_t   CCP2CON2 __attribute__((section("sfrs"), address(0xBF800210)));
typedef struct {
  uint32_t ASDG:8;
  uint32_t :4;
  uint32_t SSDG:1;
  uint32_t :1;
  uint32_t ASDGM:1;
  uint32_t PWMRSEN:1;
  uint32_t ICS:3;
  uint32_t AUXOUT:2;
  uint32_t :1;
  uint32_t ICGSM:2;
  uint32_t OCAEN:1;
  uint32_t OCBEN:1;
  uint32_t OCCEN:1;
  uint32_t OCDEN:1;
  uint32_t OCEEN:1;
  uint32_t OCFEN:1;
  uint32_t :1;
  uint32_t OENSYNC:1;
} __CCP2CON2bits_t;
extern volatile __CCP2CON2bits_t CCP2CON2bits __asm__ ("CCP2CON2") __attribute__((section("sfrs"), address(0xBF800210)));
extern volatile uint32_t        CCP2CON2CLR __attribute__((section("sfrs"),address(0xBF800214)));
extern volatile uint32_t        CCP2CON2SET __attribute__((section("sfrs"),address(0xBF800218)));
extern volatile uint32_t        CCP2CON2INV __attribute__((section("sfrs"),address(0xBF80021C)));
#define CCP2CON3 CCP2CON3
extern volatile uint32_t   CCP2CON3 __attribute__((section("sfrs"), address(0xBF800220)));
typedef struct {
  uint32_t DT:6;
  uint32_t :10;
  uint32_t PSSBDF:2;
  uint32_t PSSACE:2;
  uint32_t POLBDF:1;
  uint32_t POLACE:1;
  uint32_t :2;
  uint32_t OUTM:3;
  uint32_t :1;
  uint32_t OSCNT:3;
  uint32_t OETRIG:1;
} __CCP2CON3bits_t;
extern volatile __CCP2CON3bits_t CCP2CON3bits __asm__ ("CCP2CON3") __attribute__((section("sfrs"), address(0xBF800220)));
extern volatile uint32_t        CCP2CON3CLR __attribute__((section("sfrs"),address(0xBF800224)));
extern volatile uint32_t        CCP2CON3SET __attribute__((section("sfrs"),address(0xBF800228)));
extern volatile uint32_t        CCP2CON3INV __attribute__((section("sfrs"),address(0xBF80022C)));
#define CCP2STAT CCP2STAT
extern volatile uint32_t   CCP2STAT __attribute__((section("sfrs"), address(0xBF800230)));
typedef struct {
  uint32_t ICBNE:1;
  uint32_t ICOV:1;
  uint32_t ICDIS:1;
  uint32_t SCEVT:1;
  uint32_t ASEVT:1;
  uint32_t TRCLR:1;
  uint32_t TRSET:1;
  uint32_t CCPTRIG:1;
  uint32_t :2;
  uint32_t ICGARM:1;
  uint32_t :5;
  uint32_t RAWIP:1;
  uint32_t RBWIP:1;
  uint32_t TMRLWIP:1;
  uint32_t TMRHWIP:1;
  uint32_t PRLWIP:1;
} __CCP2STATbits_t;
extern volatile __CCP2STATbits_t CCP2STATbits __asm__ ("CCP2STAT") __attribute__((section("sfrs"), address(0xBF800230)));
extern volatile uint32_t        CCP2STATCLR __attribute__((section("sfrs"),address(0xBF800234)));
extern volatile uint32_t        CCP2STATSET __attribute__((section("sfrs"),address(0xBF800238)));
extern volatile uint32_t        CCP2STATINV __attribute__((section("sfrs"),address(0xBF80023C)));
#define CCP2TMR CCP2TMR
extern volatile uint32_t   CCP2TMR __attribute__((section("sfrs"), address(0xBF800240)));
typedef union {
  struct {
    uint32_t TMRL:16;
    uint32_t TMRH:16;
  };
  struct {
    uint32_t TMR:32;
  };
} __CCP2TMRbits_t;
extern volatile __CCP2TMRbits_t CCP2TMRbits __asm__ ("CCP2TMR") __attribute__((section("sfrs"), address(0xBF800240)));
extern volatile uint32_t        CCP2TMRCLR __attribute__((section("sfrs"),address(0xBF800244)));
extern volatile uint32_t        CCP2TMRSET __attribute__((section("sfrs"),address(0xBF800248)));
extern volatile uint32_t        CCP2TMRINV __attribute__((section("sfrs"),address(0xBF80024C)));
#define CCP2PR CCP2PR
extern volatile uint32_t   CCP2PR __attribute__((section("sfrs"), address(0xBF800250)));
typedef union {
  struct {
    uint32_t PRL:16;
    uint32_t PRH:16;
  };
  struct {
    uint32_t PR:32;
  };
} __CCP2PRbits_t;
extern volatile __CCP2PRbits_t CCP2PRbits __asm__ ("CCP2PR") __attribute__((section("sfrs"), address(0xBF800250)));
extern volatile uint32_t        CCP2PRCLR __attribute__((section("sfrs"),address(0xBF800254)));
extern volatile uint32_t        CCP2PRSET __attribute__((section("sfrs"),address(0xBF800258)));
extern volatile uint32_t        CCP2PRINV __attribute__((section("sfrs"),address(0xBF80025C)));
#define CCP2RA CCP2RA
extern volatile uint32_t   CCP2RA __attribute__((section("sfrs"), address(0xBF800260)));
typedef struct {
  uint32_t CMPA:16;
} __CCP2RAbits_t;
extern volatile __CCP2RAbits_t CCP2RAbits __asm__ ("CCP2RA") __attribute__((section("sfrs"), address(0xBF800260)));
extern volatile uint32_t        CCP2RACLR __attribute__((section("sfrs"),address(0xBF800264)));
extern volatile uint32_t        CCP2RASET __attribute__((section("sfrs"),address(0xBF800268)));
extern volatile uint32_t        CCP2RAINV __attribute__((section("sfrs"),address(0xBF80026C)));
#define CCP2RB CCP2RB
extern volatile uint32_t   CCP2RB __attribute__((section("sfrs"), address(0xBF800270)));
typedef struct {
  uint32_t CMPB:16;
} __CCP2RBbits_t;
extern volatile __CCP2RBbits_t CCP2RBbits __asm__ ("CCP2RB") __attribute__((section("sfrs"), address(0xBF800270)));
extern volatile uint32_t        CCP2RBCLR __attribute__((section("sfrs"),address(0xBF800274)));
extern volatile uint32_t        CCP2RBSET __attribute__((section("sfrs"),address(0xBF800278)));
extern volatile uint32_t        CCP2RBINV __attribute__((section("sfrs"),address(0xBF80027C)));
#define CCP2BUF CCP2BUF
extern volatile uint32_t   CCP2BUF __attribute__((section("sfrs"), address(0xBF800280)));
typedef union {
  struct {
    uint32_t BUFL:16;
    uint32_t BUFH:16;
  };
  struct {
    uint32_t BUF:32;
  };
} __CCP2BUFbits_t;
extern volatile __CCP2BUFbits_t CCP2BUFbits __asm__ ("CCP2BUF") __attribute__((section("sfrs"), address(0xBF800280)));
extern volatile uint32_t        CCP2BUFCLR __attribute__((section("sfrs"),address(0xBF800284)));
extern volatile uint32_t        CCP2BUFSET __attribute__((section("sfrs"),address(0xBF800288)));
extern volatile uint32_t        CCP2BUFINV __attribute__((section("sfrs"),address(0xBF80028C)));
#define CCP3CON1 CCP3CON1
extern volatile uint32_t   CCP3CON1 __attribute__((section("sfrs"), address(0xBF800300)));
typedef struct {
  uint32_t MOD:4;
  uint32_t CCSEL:1;
  uint32_t T32:1;
  uint32_t TMRPS:2;
  uint32_t CLKSEL:3;
  uint32_t TMRSYNC:1;
  uint32_t CCPSLP:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t SYNC:5;
  uint32_t ALTSYNC:1;
  uint32_t ONESHOT:1;
  uint32_t TRIGEN:1;
  uint32_t OPS:4;
  uint32_t :2;
  uint32_t RTRGEN:1;
  uint32_t OPSSRC:1;
} __CCP3CON1bits_t;
extern volatile __CCP3CON1bits_t CCP3CON1bits __asm__ ("CCP3CON1") __attribute__((section("sfrs"), address(0xBF800300)));
extern volatile uint32_t        CCP3CON1CLR __attribute__((section("sfrs"),address(0xBF800304)));
extern volatile uint32_t        CCP3CON1SET __attribute__((section("sfrs"),address(0xBF800308)));
extern volatile uint32_t        CCP3CON1INV __attribute__((section("sfrs"),address(0xBF80030C)));
#define CCP3CON2 CCP3CON2
extern volatile uint32_t   CCP3CON2 __attribute__((section("sfrs"), address(0xBF800310)));
typedef struct {
  uint32_t ASDG:8;
  uint32_t :4;
  uint32_t SSDG:1;
  uint32_t :1;
  uint32_t ASDGM:1;
  uint32_t PWMRSEN:1;
  uint32_t ICS:3;
  uint32_t AUXOUT:2;
  uint32_t :1;
  uint32_t ICGSM:2;
  uint32_t OCAEN:1;
  uint32_t OCBEN:1;
  uint32_t OCCEN:1;
  uint32_t OCDEN:1;
  uint32_t OCEEN:1;
  uint32_t OCFEN:1;
  uint32_t :1;
  uint32_t OENSYNC:1;
} __CCP3CON2bits_t;
extern volatile __CCP3CON2bits_t CCP3CON2bits __asm__ ("CCP3CON2") __attribute__((section("sfrs"), address(0xBF800310)));
extern volatile uint32_t        CCP3CON2CLR __attribute__((section("sfrs"),address(0xBF800314)));
extern volatile uint32_t        CCP3CON2SET __attribute__((section("sfrs"),address(0xBF800318)));
extern volatile uint32_t        CCP3CON2INV __attribute__((section("sfrs"),address(0xBF80031C)));
#define CCP3CON3 CCP3CON3
extern volatile uint32_t   CCP3CON3 __attribute__((section("sfrs"), address(0xBF800320)));
typedef struct {
  uint32_t DT:6;
  uint32_t :10;
  uint32_t PSSBDF:2;
  uint32_t PSSACE:2;
  uint32_t POLBDF:1;
  uint32_t POLACE:1;
  uint32_t :2;
  uint32_t OUTM:3;
  uint32_t :1;
  uint32_t OSCNT:3;
  uint32_t OETRIG:1;
} __CCP3CON3bits_t;
extern volatile __CCP3CON3bits_t CCP3CON3bits __asm__ ("CCP3CON3") __attribute__((section("sfrs"), address(0xBF800320)));
extern volatile uint32_t        CCP3CON3CLR __attribute__((section("sfrs"),address(0xBF800324)));
extern volatile uint32_t        CCP3CON3SET __attribute__((section("sfrs"),address(0xBF800328)));
extern volatile uint32_t        CCP3CON3INV __attribute__((section("sfrs"),address(0xBF80032C)));
#define CCP3STAT CCP3STAT
extern volatile uint32_t   CCP3STAT __attribute__((section("sfrs"), address(0xBF800330)));
typedef struct {
  uint32_t ICBNE:1;
  uint32_t ICOV:1;
  uint32_t ICDIS:1;
  uint32_t SCEVT:1;
  uint32_t ASEVT:1;
  uint32_t TRCLR:1;
  uint32_t TRSET:1;
  uint32_t CCPTRIG:1;
  uint32_t :2;
  uint32_t ICGARM:1;
  uint32_t :5;
  uint32_t RAWIP:1;
  uint32_t RBWIP:1;
  uint32_t TMRLWIP:1;
  uint32_t TMRHWIP:1;
  uint32_t PRLWIP:1;
} __CCP3STATbits_t;
extern volatile __CCP3STATbits_t CCP3STATbits __asm__ ("CCP3STAT") __attribute__((section("sfrs"), address(0xBF800330)));
extern volatile uint32_t        CCP3STATCLR __attribute__((section("sfrs"),address(0xBF800334)));
extern volatile uint32_t        CCP3STATSET __attribute__((section("sfrs"),address(0xBF800338)));
extern volatile uint32_t        CCP3STATINV __attribute__((section("sfrs"),address(0xBF80033C)));
#define CCP3TMR CCP3TMR
extern volatile uint32_t   CCP3TMR __attribute__((section("sfrs"), address(0xBF800340)));
typedef union {
  struct {
    uint32_t TMRL:16;
    uint32_t TMRH:16;
  };
  struct {
    uint32_t TMR:32;
  };
} __CCP3TMRbits_t;
extern volatile __CCP3TMRbits_t CCP3TMRbits __asm__ ("CCP3TMR") __attribute__((section("sfrs"), address(0xBF800340)));
extern volatile uint32_t        CCP3TMRCLR __attribute__((section("sfrs"),address(0xBF800344)));
extern volatile uint32_t        CCP3TMRSET __attribute__((section("sfrs"),address(0xBF800348)));
extern volatile uint32_t        CCP3TMRINV __attribute__((section("sfrs"),address(0xBF80034C)));
#define CCP3PR CCP3PR
extern volatile uint32_t   CCP3PR __attribute__((section("sfrs"), address(0xBF800350)));
typedef union {
  struct {
    uint32_t PRL:16;
    uint32_t PRH:16;
  };
  struct {
    uint32_t PR:32;
  };
} __CCP3PRbits_t;
extern volatile __CCP3PRbits_t CCP3PRbits __asm__ ("CCP3PR") __attribute__((section("sfrs"), address(0xBF800350)));
extern volatile uint32_t        CCP3PRCLR __attribute__((section("sfrs"),address(0xBF800354)));
extern volatile uint32_t        CCP3PRSET __attribute__((section("sfrs"),address(0xBF800358)));
extern volatile uint32_t        CCP3PRINV __attribute__((section("sfrs"),address(0xBF80035C)));
#define CCP3RA CCP3RA
extern volatile uint32_t   CCP3RA __attribute__((section("sfrs"), address(0xBF800360)));
typedef struct {
  uint32_t CMPA:16;
} __CCP3RAbits_t;
extern volatile __CCP3RAbits_t CCP3RAbits __asm__ ("CCP3RA") __attribute__((section("sfrs"), address(0xBF800360)));
extern volatile uint32_t        CCP3RACLR __attribute__((section("sfrs"),address(0xBF800364)));
extern volatile uint32_t        CCP3RASET __attribute__((section("sfrs"),address(0xBF800368)));
extern volatile uint32_t        CCP3RAINV __attribute__((section("sfrs"),address(0xBF80036C)));
#define CCP3RB CCP3RB
extern volatile uint32_t   CCP3RB __attribute__((section("sfrs"), address(0xBF800370)));
typedef struct {
  uint32_t CMPB:16;
} __CCP3RBbits_t;
extern volatile __CCP3RBbits_t CCP3RBbits __asm__ ("CCP3RB") __attribute__((section("sfrs"), address(0xBF800370)));
extern volatile uint32_t        CCP3RBCLR __attribute__((section("sfrs"),address(0xBF800374)));
extern volatile uint32_t        CCP3RBSET __attribute__((section("sfrs"),address(0xBF800378)));
extern volatile uint32_t        CCP3RBINV __attribute__((section("sfrs"),address(0xBF80037C)));
#define CCP3BUF CCP3BUF
extern volatile uint32_t   CCP3BUF __attribute__((section("sfrs"), address(0xBF800380)));
typedef union {
  struct {
    uint32_t BUFL:16;
    uint32_t BUFH:16;
  };
  struct {
    uint32_t BUF:32;
  };
} __CCP3BUFbits_t;
extern volatile __CCP3BUFbits_t CCP3BUFbits __asm__ ("CCP3BUF") __attribute__((section("sfrs"), address(0xBF800380)));
extern volatile uint32_t        CCP3BUFCLR __attribute__((section("sfrs"),address(0xBF800384)));
extern volatile uint32_t        CCP3BUFSET __attribute__((section("sfrs"),address(0xBF800388)));
extern volatile uint32_t        CCP3BUFINV __attribute__((section("sfrs"),address(0xBF80038C)));
#define CCP4CON1 CCP4CON1
extern volatile uint32_t   CCP4CON1 __attribute__((section("sfrs"), address(0xBF800400)));
typedef struct {
  uint32_t MOD:4;
  uint32_t CCSEL:1;
  uint32_t T32:1;
  uint32_t TMRPS:2;
  uint32_t CLKSEL:3;
  uint32_t TMRSYNC:1;
  uint32_t CCPSLP:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t SYNC:5;
  uint32_t ALTSYNC:1;
  uint32_t ONESHOT:1;
  uint32_t TRIGEN:1;
  uint32_t OPS:4;
  uint32_t :2;
  uint32_t RTRGEN:1;
  uint32_t OPSSRC:1;
} __CCP4CON1bits_t;
extern volatile __CCP4CON1bits_t CCP4CON1bits __asm__ ("CCP4CON1") __attribute__((section("sfrs"), address(0xBF800400)));
extern volatile uint32_t        CCP4CON1CLR __attribute__((section("sfrs"),address(0xBF800404)));
extern volatile uint32_t        CCP4CON1SET __attribute__((section("sfrs"),address(0xBF800408)));
extern volatile uint32_t        CCP4CON1INV __attribute__((section("sfrs"),address(0xBF80040C)));
#define CCP4CON2 CCP4CON2
extern volatile uint32_t   CCP4CON2 __attribute__((section("sfrs"), address(0xBF800410)));
typedef struct {
  uint32_t ASDG:8;
  uint32_t :4;
  uint32_t SSDG:1;
  uint32_t :1;
  uint32_t ASDGM:1;
  uint32_t PWMRSEN:1;
  uint32_t ICS:3;
  uint32_t AUXOUT:2;
  uint32_t :1;
  uint32_t ICGSM:2;
  uint32_t OCAEN:1;
  uint32_t :6;
  uint32_t OENSYNC:1;
} __CCP4CON2bits_t;
extern volatile __CCP4CON2bits_t CCP4CON2bits __asm__ ("CCP4CON2") __attribute__((section("sfrs"), address(0xBF800410)));
extern volatile uint32_t        CCP4CON2CLR __attribute__((section("sfrs"),address(0xBF800414)));
extern volatile uint32_t        CCP4CON2SET __attribute__((section("sfrs"),address(0xBF800418)));
extern volatile uint32_t        CCP4CON2INV __attribute__((section("sfrs"),address(0xBF80041C)));
#define CCP4CON3 CCP4CON3
extern volatile uint32_t   CCP4CON3 __attribute__((section("sfrs"), address(0xBF800420)));
typedef struct {
  uint32_t :18;
  uint32_t PSSACE:2;
  uint32_t :1;
  uint32_t POLACE:1;
  uint32_t :6;
  uint32_t OSCNT:3;
  uint32_t OETRIG:1;
} __CCP4CON3bits_t;
extern volatile __CCP4CON3bits_t CCP4CON3bits __asm__ ("CCP4CON3") __attribute__((section("sfrs"), address(0xBF800420)));
extern volatile uint32_t        CCP4CON3CLR __attribute__((section("sfrs"),address(0xBF800424)));
extern volatile uint32_t        CCP4CON3SET __attribute__((section("sfrs"),address(0xBF800428)));
extern volatile uint32_t        CCP4CON3INV __attribute__((section("sfrs"),address(0xBF80042C)));
#define CCP4STAT CCP4STAT
extern volatile uint32_t   CCP4STAT __attribute__((section("sfrs"), address(0xBF800430)));
typedef struct {
  uint32_t ICBNE:1;
  uint32_t ICOV:1;
  uint32_t ICDIS:1;
  uint32_t SCEVT:1;
  uint32_t ASEVT:1;
  uint32_t TRCLR:1;
  uint32_t TRSET:1;
  uint32_t CCPTRIG:1;
  uint32_t :2;
  uint32_t ICGARM:1;
  uint32_t :5;
  uint32_t RAWIP:1;
  uint32_t RBWIP:1;
  uint32_t TMRLWIP:1;
  uint32_t TMRHWIP:1;
  uint32_t PRLWIP:1;
} __CCP4STATbits_t;
extern volatile __CCP4STATbits_t CCP4STATbits __asm__ ("CCP4STAT") __attribute__((section("sfrs"), address(0xBF800430)));
extern volatile uint32_t        CCP4STATCLR __attribute__((section("sfrs"),address(0xBF800434)));
extern volatile uint32_t        CCP4STATSET __attribute__((section("sfrs"),address(0xBF800438)));
extern volatile uint32_t        CCP4STATINV __attribute__((section("sfrs"),address(0xBF80043C)));
#define CCP4TMR CCP4TMR
extern volatile uint32_t   CCP4TMR __attribute__((section("sfrs"), address(0xBF800440)));
typedef union {
  struct {
    uint32_t TMRL:16;
    uint32_t TMRH:16;
  };
  struct {
    uint32_t TMR:32;
  };
} __CCP4TMRbits_t;
extern volatile __CCP4TMRbits_t CCP4TMRbits __asm__ ("CCP4TMR") __attribute__((section("sfrs"), address(0xBF800440)));
extern volatile uint32_t        CCP4TMRCLR __attribute__((section("sfrs"),address(0xBF800444)));
extern volatile uint32_t        CCP4TMRSET __attribute__((section("sfrs"),address(0xBF800448)));
extern volatile uint32_t        CCP4TMRINV __attribute__((section("sfrs"),address(0xBF80044C)));
#define CCP4PR CCP4PR
extern volatile uint32_t   CCP4PR __attribute__((section("sfrs"), address(0xBF800450)));
typedef union {
  struct {
    uint32_t PRL:16;
    uint32_t PRH:16;
  };
  struct {
    uint32_t PR:32;
  };
} __CCP4PRbits_t;
extern volatile __CCP4PRbits_t CCP4PRbits __asm__ ("CCP4PR") __attribute__((section("sfrs"), address(0xBF800450)));
extern volatile uint32_t        CCP4PRCLR __attribute__((section("sfrs"),address(0xBF800454)));
extern volatile uint32_t        CCP4PRSET __attribute__((section("sfrs"),address(0xBF800458)));
extern volatile uint32_t        CCP4PRINV __attribute__((section("sfrs"),address(0xBF80045C)));
#define CCP4RA CCP4RA
extern volatile uint32_t   CCP4RA __attribute__((section("sfrs"), address(0xBF800460)));
typedef struct {
  uint32_t CMPA:16;
} __CCP4RAbits_t;
extern volatile __CCP4RAbits_t CCP4RAbits __asm__ ("CCP4RA") __attribute__((section("sfrs"), address(0xBF800460)));
extern volatile uint32_t        CCP4RACLR __attribute__((section("sfrs"),address(0xBF800464)));
extern volatile uint32_t        CCP4RASET __attribute__((section("sfrs"),address(0xBF800468)));
extern volatile uint32_t        CCP4RAINV __attribute__((section("sfrs"),address(0xBF80046C)));
#define CCP4RB CCP4RB
extern volatile uint32_t   CCP4RB __attribute__((section("sfrs"), address(0xBF800470)));
typedef struct {
  uint32_t CMPB:16;
} __CCP4RBbits_t;
extern volatile __CCP4RBbits_t CCP4RBbits __asm__ ("CCP4RB") __attribute__((section("sfrs"), address(0xBF800470)));
extern volatile uint32_t        CCP4RBCLR __attribute__((section("sfrs"),address(0xBF800474)));
extern volatile uint32_t        CCP4RBSET __attribute__((section("sfrs"),address(0xBF800478)));
extern volatile uint32_t        CCP4RBINV __attribute__((section("sfrs"),address(0xBF80047C)));
#define CCP4BUF CCP4BUF
extern volatile uint32_t   CCP4BUF __attribute__((section("sfrs"), address(0xBF800480)));
typedef union {
  struct {
    uint32_t BUFL:16;
    uint32_t BUFH:16;
  };
  struct {
    uint32_t BUF:32;
  };
} __CCP4BUFbits_t;
extern volatile __CCP4BUFbits_t CCP4BUFbits __asm__ ("CCP4BUF") __attribute__((section("sfrs"), address(0xBF800480)));
extern volatile uint32_t        CCP4BUFCLR __attribute__((section("sfrs"),address(0xBF800484)));
extern volatile uint32_t        CCP4BUFSET __attribute__((section("sfrs"),address(0xBF800488)));
extern volatile uint32_t        CCP4BUFINV __attribute__((section("sfrs"),address(0xBF80048C)));
#define CCP5CON1 CCP5CON1
extern volatile uint32_t   CCP5CON1 __attribute__((section("sfrs"), address(0xBF800500)));
typedef struct {
  uint32_t MOD:4;
  uint32_t CCSEL:1;
  uint32_t T32:1;
  uint32_t TMRPS:2;
  uint32_t CLKSEL:3;
  uint32_t TMRSYNC:1;
  uint32_t CCPSLP:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t SYNC:5;
  uint32_t ALTSYNC:1;
  uint32_t ONESHOT:1;
  uint32_t TRIGEN:1;
  uint32_t OPS:4;
  uint32_t :2;
  uint32_t RTRGEN:1;
  uint32_t OPSSRC:1;
} __CCP5CON1bits_t;
extern volatile __CCP5CON1bits_t CCP5CON1bits __asm__ ("CCP5CON1") __attribute__((section("sfrs"), address(0xBF800500)));
extern volatile uint32_t        CCP5CON1CLR __attribute__((section("sfrs"),address(0xBF800504)));
extern volatile uint32_t        CCP5CON1SET __attribute__((section("sfrs"),address(0xBF800508)));
extern volatile uint32_t        CCP5CON1INV __attribute__((section("sfrs"),address(0xBF80050C)));
#define CCP5CON2 CCP5CON2
extern volatile uint32_t   CCP5CON2 __attribute__((section("sfrs"), address(0xBF800510)));
typedef struct {
  uint32_t ASDG:8;
  uint32_t :4;
  uint32_t SSDG:1;
  uint32_t :1;
  uint32_t ASDGM:1;
  uint32_t PWMRSEN:1;
  uint32_t ICS:3;
  uint32_t AUXOUT:2;
  uint32_t :1;
  uint32_t ICGSM:2;
  uint32_t OCAEN:1;
  uint32_t :6;
  uint32_t OENSYNC:1;
} __CCP5CON2bits_t;
extern volatile __CCP5CON2bits_t CCP5CON2bits __asm__ ("CCP5CON2") __attribute__((section("sfrs"), address(0xBF800510)));
extern volatile uint32_t        CCP5CON2CLR __attribute__((section("sfrs"),address(0xBF800514)));
extern volatile uint32_t        CCP5CON2SET __attribute__((section("sfrs"),address(0xBF800518)));
extern volatile uint32_t        CCP5CON2INV __attribute__((section("sfrs"),address(0xBF80051C)));
#define CCP5CON3 CCP5CON3
extern volatile uint32_t   CCP5CON3 __attribute__((section("sfrs"), address(0xBF800520)));
typedef struct {
  uint32_t :18;
  uint32_t PSSACE:2;
  uint32_t :1;
  uint32_t POLACE:1;
  uint32_t :6;
  uint32_t OSCNT:3;
  uint32_t OETRIG:1;
} __CCP5CON3bits_t;
extern volatile __CCP5CON3bits_t CCP5CON3bits __asm__ ("CCP5CON3") __attribute__((section("sfrs"), address(0xBF800520)));
extern volatile uint32_t        CCP5CON3CLR __attribute__((section("sfrs"),address(0xBF800524)));
extern volatile uint32_t        CCP5CON3SET __attribute__((section("sfrs"),address(0xBF800528)));
extern volatile uint32_t        CCP5CON3INV __attribute__((section("sfrs"),address(0xBF80052C)));
#define CCP5STAT CCP5STAT
extern volatile uint32_t   CCP5STAT __attribute__((section("sfrs"), address(0xBF800530)));
typedef struct {
  uint32_t ICBNE:1;
  uint32_t ICOV:1;
  uint32_t ICDIS:1;
  uint32_t SCEVT:1;
  uint32_t ASEVT:1;
  uint32_t TRCLR:1;
  uint32_t TRSET:1;
  uint32_t CCPTRIG:1;
  uint32_t :2;
  uint32_t ICGARM:1;
  uint32_t :5;
  uint32_t RAWIP:1;
  uint32_t RBWIP:1;
  uint32_t TMRLWIP:1;
  uint32_t TMRHWIP:1;
  uint32_t PRLWIP:1;
} __CCP5STATbits_t;
extern volatile __CCP5STATbits_t CCP5STATbits __asm__ ("CCP5STAT") __attribute__((section("sfrs"), address(0xBF800530)));
extern volatile uint32_t        CCP5STATCLR __attribute__((section("sfrs"),address(0xBF800534)));
extern volatile uint32_t        CCP5STATSET __attribute__((section("sfrs"),address(0xBF800538)));
extern volatile uint32_t        CCP5STATINV __attribute__((section("sfrs"),address(0xBF80053C)));
#define CCP5TMR CCP5TMR
extern volatile uint32_t   CCP5TMR __attribute__((section("sfrs"), address(0xBF800540)));
typedef union {
  struct {
    uint32_t TMRL:16;
    uint32_t TMRH:16;
  };
  struct {
    uint32_t TMR:32;
  };
} __CCP5TMRbits_t;
extern volatile __CCP5TMRbits_t CCP5TMRbits __asm__ ("CCP5TMR") __attribute__((section("sfrs"), address(0xBF800540)));
extern volatile uint32_t        CCP5TMRCLR __attribute__((section("sfrs"),address(0xBF800544)));
extern volatile uint32_t        CCP5TMRSET __attribute__((section("sfrs"),address(0xBF800548)));
extern volatile uint32_t        CCP5TMRINV __attribute__((section("sfrs"),address(0xBF80054C)));
#define CCP5PR CCP5PR
extern volatile uint32_t   CCP5PR __attribute__((section("sfrs"), address(0xBF800550)));
typedef union {
  struct {
    uint32_t PRL:16;
    uint32_t PRH:16;
  };
  struct {
    uint32_t PR:32;
  };
} __CCP5PRbits_t;
extern volatile __CCP5PRbits_t CCP5PRbits __asm__ ("CCP5PR") __attribute__((section("sfrs"), address(0xBF800550)));
extern volatile uint32_t        CCP5PRCLR __attribute__((section("sfrs"),address(0xBF800554)));
extern volatile uint32_t        CCP5PRSET __attribute__((section("sfrs"),address(0xBF800558)));
extern volatile uint32_t        CCP5PRINV __attribute__((section("sfrs"),address(0xBF80055C)));
#define CCP5RA CCP5RA
extern volatile uint32_t   CCP5RA __attribute__((section("sfrs"), address(0xBF800560)));
typedef struct {
  uint32_t CMPA:16;
} __CCP5RAbits_t;
extern volatile __CCP5RAbits_t CCP5RAbits __asm__ ("CCP5RA") __attribute__((section("sfrs"), address(0xBF800560)));
extern volatile uint32_t        CCP5RACLR __attribute__((section("sfrs"),address(0xBF800564)));
extern volatile uint32_t        CCP5RASET __attribute__((section("sfrs"),address(0xBF800568)));
extern volatile uint32_t        CCP5RAINV __attribute__((section("sfrs"),address(0xBF80056C)));
#define CCP5RB CCP5RB
extern volatile uint32_t   CCP5RB __attribute__((section("sfrs"), address(0xBF800570)));
typedef struct {
  uint32_t CMPB:16;
} __CCP5RBbits_t;
extern volatile __CCP5RBbits_t CCP5RBbits __asm__ ("CCP5RB") __attribute__((section("sfrs"), address(0xBF800570)));
extern volatile uint32_t        CCP5RBCLR __attribute__((section("sfrs"),address(0xBF800574)));
extern volatile uint32_t        CCP5RBSET __attribute__((section("sfrs"),address(0xBF800578)));
extern volatile uint32_t        CCP5RBINV __attribute__((section("sfrs"),address(0xBF80057C)));
#define CCP5BUF CCP5BUF
extern volatile uint32_t   CCP5BUF __attribute__((section("sfrs"), address(0xBF800580)));
typedef union {
  struct {
    uint32_t BUFL:16;
    uint32_t BUFH:16;
  };
  struct {
    uint32_t BUF:32;
  };
} __CCP5BUFbits_t;
extern volatile __CCP5BUFbits_t CCP5BUFbits __asm__ ("CCP5BUF") __attribute__((section("sfrs"), address(0xBF800580)));
extern volatile uint32_t        CCP5BUFCLR __attribute__((section("sfrs"),address(0xBF800584)));
extern volatile uint32_t        CCP5BUFSET __attribute__((section("sfrs"),address(0xBF800588)));
extern volatile uint32_t        CCP5BUFINV __attribute__((section("sfrs"),address(0xBF80058C)));
#define CCP6CON1 CCP6CON1
extern volatile uint32_t   CCP6CON1 __attribute__((section("sfrs"), address(0xBF800600)));
typedef struct {
  uint32_t MOD:4;
  uint32_t CCSEL:1;
  uint32_t T32:1;
  uint32_t TMRPS:2;
  uint32_t CLKSEL:3;
  uint32_t TMRSYNC:1;
  uint32_t CCPSLP:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t SYNC:5;
  uint32_t ALTSYNC:1;
  uint32_t ONESHOT:1;
  uint32_t TRIGEN:1;
  uint32_t OPS:4;
  uint32_t :2;
  uint32_t RTRGEN:1;
  uint32_t OPSSRC:1;
} __CCP6CON1bits_t;
extern volatile __CCP6CON1bits_t CCP6CON1bits __asm__ ("CCP6CON1") __attribute__((section("sfrs"), address(0xBF800600)));
extern volatile uint32_t        CCP6CON1CLR __attribute__((section("sfrs"),address(0xBF800604)));
extern volatile uint32_t        CCP6CON1SET __attribute__((section("sfrs"),address(0xBF800608)));
extern volatile uint32_t        CCP6CON1INV __attribute__((section("sfrs"),address(0xBF80060C)));
#define CCP6CON2 CCP6CON2
extern volatile uint32_t   CCP6CON2 __attribute__((section("sfrs"), address(0xBF800610)));
typedef struct {
  uint32_t ASDG:8;
  uint32_t :4;
  uint32_t SSDG:1;
  uint32_t :1;
  uint32_t ASDGM:1;
  uint32_t PWMRSEN:1;
  uint32_t ICS:3;
  uint32_t AUXOUT:2;
  uint32_t :1;
  uint32_t ICGSM:2;
  uint32_t OCAEN:1;
  uint32_t :6;
  uint32_t OENSYNC:1;
} __CCP6CON2bits_t;
extern volatile __CCP6CON2bits_t CCP6CON2bits __asm__ ("CCP6CON2") __attribute__((section("sfrs"), address(0xBF800610)));
extern volatile uint32_t        CCP6CON2CLR __attribute__((section("sfrs"),address(0xBF800614)));
extern volatile uint32_t        CCP6CON2SET __attribute__((section("sfrs"),address(0xBF800618)));
extern volatile uint32_t        CCP6CON2INV __attribute__((section("sfrs"),address(0xBF80061C)));
#define CCP6CON3 CCP6CON3
extern volatile uint32_t   CCP6CON3 __attribute__((section("sfrs"), address(0xBF800620)));
typedef struct {
  uint32_t :18;
  uint32_t PSSACE:2;
  uint32_t :1;
  uint32_t POLACE:1;
  uint32_t :6;
  uint32_t OSCNT:3;
  uint32_t OETRIG:1;
} __CCP6CON3bits_t;
extern volatile __CCP6CON3bits_t CCP6CON3bits __asm__ ("CCP6CON3") __attribute__((section("sfrs"), address(0xBF800620)));
extern volatile uint32_t        CCP6CON3CLR __attribute__((section("sfrs"),address(0xBF800624)));
extern volatile uint32_t        CCP6CON3SET __attribute__((section("sfrs"),address(0xBF800628)));
extern volatile uint32_t        CCP6CON3INV __attribute__((section("sfrs"),address(0xBF80062C)));
#define CCP6STAT CCP6STAT
extern volatile uint32_t   CCP6STAT __attribute__((section("sfrs"), address(0xBF800630)));
typedef struct {
  uint32_t ICBNE:1;
  uint32_t ICOV:1;
  uint32_t ICDIS:1;
  uint32_t SCEVT:1;
  uint32_t ASEVT:1;
  uint32_t TRCLR:1;
  uint32_t TRSET:1;
  uint32_t CCPTRIG:1;
  uint32_t :2;
  uint32_t ICGARM:1;
  uint32_t :5;
  uint32_t RAWIP:1;
  uint32_t RBWIP:1;
  uint32_t TMRLWIP:1;
  uint32_t TMRHWIP:1;
  uint32_t PRLWIP:1;
} __CCP6STATbits_t;
extern volatile __CCP6STATbits_t CCP6STATbits __asm__ ("CCP6STAT") __attribute__((section("sfrs"), address(0xBF800630)));
extern volatile uint32_t        CCP6STATCLR __attribute__((section("sfrs"),address(0xBF800634)));
extern volatile uint32_t        CCP6STATSET __attribute__((section("sfrs"),address(0xBF800638)));
extern volatile uint32_t        CCP6STATINV __attribute__((section("sfrs"),address(0xBF80063C)));
#define CCP6TMR CCP6TMR
extern volatile uint32_t   CCP6TMR __attribute__((section("sfrs"), address(0xBF800640)));
typedef union {
  struct {
    uint32_t TMRL:16;
    uint32_t TMRH:16;
  };
  struct {
    uint32_t TMR:32;
  };
} __CCP6TMRbits_t;
extern volatile __CCP6TMRbits_t CCP6TMRbits __asm__ ("CCP6TMR") __attribute__((section("sfrs"), address(0xBF800640)));
extern volatile uint32_t        CCP6TMRCLR __attribute__((section("sfrs"),address(0xBF800644)));
extern volatile uint32_t        CCP6TMRSET __attribute__((section("sfrs"),address(0xBF800648)));
extern volatile uint32_t        CCP6TMRINV __attribute__((section("sfrs"),address(0xBF80064C)));
#define CCP6PR CCP6PR
extern volatile uint32_t   CCP6PR __attribute__((section("sfrs"), address(0xBF800650)));
typedef union {
  struct {
    uint32_t PRL:16;
    uint32_t PRH:16;
  };
  struct {
    uint32_t PR:32;
  };
} __CCP6PRbits_t;
extern volatile __CCP6PRbits_t CCP6PRbits __asm__ ("CCP6PR") __attribute__((section("sfrs"), address(0xBF800650)));
extern volatile uint32_t        CCP6PRCLR __attribute__((section("sfrs"),address(0xBF800654)));
extern volatile uint32_t        CCP6PRSET __attribute__((section("sfrs"),address(0xBF800658)));
extern volatile uint32_t        CCP6PRINV __attribute__((section("sfrs"),address(0xBF80065C)));
#define CCP6RA CCP6RA
extern volatile uint32_t   CCP6RA __attribute__((section("sfrs"), address(0xBF800660)));
typedef struct {
  uint32_t CMPA:16;
} __CCP6RAbits_t;
extern volatile __CCP6RAbits_t CCP6RAbits __asm__ ("CCP6RA") __attribute__((section("sfrs"), address(0xBF800660)));
extern volatile uint32_t        CCP6RACLR __attribute__((section("sfrs"),address(0xBF800664)));
extern volatile uint32_t        CCP6RASET __attribute__((section("sfrs"),address(0xBF800668)));
extern volatile uint32_t        CCP6RAINV __attribute__((section("sfrs"),address(0xBF80066C)));
#define CCP6RB CCP6RB
extern volatile uint32_t   CCP6RB __attribute__((section("sfrs"), address(0xBF800670)));
typedef struct {
  uint32_t CMPB:16;
} __CCP6RBbits_t;
extern volatile __CCP6RBbits_t CCP6RBbits __asm__ ("CCP6RB") __attribute__((section("sfrs"), address(0xBF800670)));
extern volatile uint32_t        CCP6RBCLR __attribute__((section("sfrs"),address(0xBF800674)));
extern volatile uint32_t        CCP6RBSET __attribute__((section("sfrs"),address(0xBF800678)));
extern volatile uint32_t        CCP6RBINV __attribute__((section("sfrs"),address(0xBF80067C)));
#define CCP6BUF CCP6BUF
extern volatile uint32_t   CCP6BUF __attribute__((section("sfrs"), address(0xBF800680)));
typedef union {
  struct {
    uint32_t BUFL:16;
    uint32_t BUFH:16;
  };
  struct {
    uint32_t BUF:32;
  };
} __CCP6BUFbits_t;
extern volatile __CCP6BUFbits_t CCP6BUFbits __asm__ ("CCP6BUF") __attribute__((section("sfrs"), address(0xBF800680)));
extern volatile uint32_t        CCP6BUFCLR __attribute__((section("sfrs"),address(0xBF800684)));
extern volatile uint32_t        CCP6BUFSET __attribute__((section("sfrs"),address(0xBF800688)));
extern volatile uint32_t        CCP6BUFINV __attribute__((section("sfrs"),address(0xBF80068C)));
#define CCP7CON1 CCP7CON1
extern volatile uint32_t   CCP7CON1 __attribute__((section("sfrs"), address(0xBF800700)));
typedef struct {
  uint32_t MOD:4;
  uint32_t CCSEL:1;
  uint32_t T32:1;
  uint32_t TMRPS:2;
  uint32_t CLKSEL:3;
  uint32_t TMRSYNC:1;
  uint32_t CCPSLP:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t SYNC:5;
  uint32_t ALTSYNC:1;
  uint32_t ONESHOT:1;
  uint32_t TRIGEN:1;
  uint32_t OPS:4;
  uint32_t :2;
  uint32_t RTRGEN:1;
  uint32_t OPSSRC:1;
} __CCP7CON1bits_t;
extern volatile __CCP7CON1bits_t CCP7CON1bits __asm__ ("CCP7CON1") __attribute__((section("sfrs"), address(0xBF800700)));
extern volatile uint32_t        CCP7CON1CLR __attribute__((section("sfrs"),address(0xBF800704)));
extern volatile uint32_t        CCP7CON1SET __attribute__((section("sfrs"),address(0xBF800708)));
extern volatile uint32_t        CCP7CON1INV __attribute__((section("sfrs"),address(0xBF80070C)));
#define CCP7CON2 CCP7CON2
extern volatile uint32_t   CCP7CON2 __attribute__((section("sfrs"), address(0xBF800710)));
typedef struct {
  uint32_t ASDG:8;
  uint32_t :4;
  uint32_t SSDG:1;
  uint32_t :1;
  uint32_t ASDGM:1;
  uint32_t PWMRSEN:1;
  uint32_t ICS:3;
  uint32_t AUXOUT:2;
  uint32_t :1;
  uint32_t ICGSM:2;
  uint32_t OCAEN:1;
  uint32_t :6;
  uint32_t OENSYNC:1;
} __CCP7CON2bits_t;
extern volatile __CCP7CON2bits_t CCP7CON2bits __asm__ ("CCP7CON2") __attribute__((section("sfrs"), address(0xBF800710)));
extern volatile uint32_t        CCP7CON2CLR __attribute__((section("sfrs"),address(0xBF800714)));
extern volatile uint32_t        CCP7CON2SET __attribute__((section("sfrs"),address(0xBF800718)));
extern volatile uint32_t        CCP7CON2INV __attribute__((section("sfrs"),address(0xBF80071C)));
#define CCP7CON3 CCP7CON3
extern volatile uint32_t   CCP7CON3 __attribute__((section("sfrs"), address(0xBF800720)));
typedef struct {
  uint32_t :18;
  uint32_t PSSACE:2;
  uint32_t :1;
  uint32_t POLACE:1;
  uint32_t :6;
  uint32_t OSCNT:3;
  uint32_t OETRIG:1;
} __CCP7CON3bits_t;
extern volatile __CCP7CON3bits_t CCP7CON3bits __asm__ ("CCP7CON3") __attribute__((section("sfrs"), address(0xBF800720)));
extern volatile uint32_t        CCP7CON3CLR __attribute__((section("sfrs"),address(0xBF800724)));
extern volatile uint32_t        CCP7CON3SET __attribute__((section("sfrs"),address(0xBF800728)));
extern volatile uint32_t        CCP7CON3INV __attribute__((section("sfrs"),address(0xBF80072C)));
#define CCP7STAT CCP7STAT
extern volatile uint32_t   CCP7STAT __attribute__((section("sfrs"), address(0xBF800730)));
typedef struct {
  uint32_t ICBNE:1;
  uint32_t ICOV:1;
  uint32_t ICDIS:1;
  uint32_t SCEVT:1;
  uint32_t ASEVT:1;
  uint32_t TRCLR:1;
  uint32_t TRSET:1;
  uint32_t CCPTRIG:1;
  uint32_t :2;
  uint32_t ICGARM:1;
  uint32_t :5;
  uint32_t RAWIP:1;
  uint32_t RBWIP:1;
  uint32_t TMRLWIP:1;
  uint32_t TMRHWIP:1;
  uint32_t PRLWIP:1;
} __CCP7STATbits_t;
extern volatile __CCP7STATbits_t CCP7STATbits __asm__ ("CCP7STAT") __attribute__((section("sfrs"), address(0xBF800730)));
extern volatile uint32_t        CCP7STATCLR __attribute__((section("sfrs"),address(0xBF800734)));
extern volatile uint32_t        CCP7STATSET __attribute__((section("sfrs"),address(0xBF800738)));
extern volatile uint32_t        CCP7STATINV __attribute__((section("sfrs"),address(0xBF80073C)));
#define CCP7TMR CCP7TMR
extern volatile uint32_t   CCP7TMR __attribute__((section("sfrs"), address(0xBF800740)));
typedef union {
  struct {
    uint32_t TMRL:16;
    uint32_t TMRH:16;
  };
  struct {
    uint32_t TMR:32;
  };
} __CCP7TMRbits_t;
extern volatile __CCP7TMRbits_t CCP7TMRbits __asm__ ("CCP7TMR") __attribute__((section("sfrs"), address(0xBF800740)));
extern volatile uint32_t        CCP7TMRCLR __attribute__((section("sfrs"),address(0xBF800744)));
extern volatile uint32_t        CCP7TMRSET __attribute__((section("sfrs"),address(0xBF800748)));
extern volatile uint32_t        CCP7TMRINV __attribute__((section("sfrs"),address(0xBF80074C)));
#define CCP7PR CCP7PR
extern volatile uint32_t   CCP7PR __attribute__((section("sfrs"), address(0xBF800750)));
typedef union {
  struct {
    uint32_t PRL:16;
    uint32_t PRH:16;
  };
  struct {
    uint32_t PR:32;
  };
} __CCP7PRbits_t;
extern volatile __CCP7PRbits_t CCP7PRbits __asm__ ("CCP7PR") __attribute__((section("sfrs"), address(0xBF800750)));
extern volatile uint32_t        CCP7PRCLR __attribute__((section("sfrs"),address(0xBF800754)));
extern volatile uint32_t        CCP7PRSET __attribute__((section("sfrs"),address(0xBF800758)));
extern volatile uint32_t        CCP7PRINV __attribute__((section("sfrs"),address(0xBF80075C)));
#define CCP7RA CCP7RA
extern volatile uint32_t   CCP7RA __attribute__((section("sfrs"), address(0xBF800760)));
typedef struct {
  uint32_t CMPA:16;
} __CCP7RAbits_t;
extern volatile __CCP7RAbits_t CCP7RAbits __asm__ ("CCP7RA") __attribute__((section("sfrs"), address(0xBF800760)));
extern volatile uint32_t        CCP7RACLR __attribute__((section("sfrs"),address(0xBF800764)));
extern volatile uint32_t        CCP7RASET __attribute__((section("sfrs"),address(0xBF800768)));
extern volatile uint32_t        CCP7RAINV __attribute__((section("sfrs"),address(0xBF80076C)));
#define CCP7RB CCP7RB
extern volatile uint32_t   CCP7RB __attribute__((section("sfrs"), address(0xBF800770)));
typedef struct {
  uint32_t CMPB:16;
} __CCP7RBbits_t;
extern volatile __CCP7RBbits_t CCP7RBbits __asm__ ("CCP7RB") __attribute__((section("sfrs"), address(0xBF800770)));
extern volatile uint32_t        CCP7RBCLR __attribute__((section("sfrs"),address(0xBF800774)));
extern volatile uint32_t        CCP7RBSET __attribute__((section("sfrs"),address(0xBF800778)));
extern volatile uint32_t        CCP7RBINV __attribute__((section("sfrs"),address(0xBF80077C)));
#define CCP7BUF CCP7BUF
extern volatile uint32_t   CCP7BUF __attribute__((section("sfrs"), address(0xBF800780)));
typedef union {
  struct {
    uint32_t BUFL:16;
    uint32_t BUFH:16;
  };
  struct {
    uint32_t BUF:32;
  };
} __CCP7BUFbits_t;
extern volatile __CCP7BUFbits_t CCP7BUFbits __asm__ ("CCP7BUF") __attribute__((section("sfrs"), address(0xBF800780)));
extern volatile uint32_t        CCP7BUFCLR __attribute__((section("sfrs"),address(0xBF800784)));
extern volatile uint32_t        CCP7BUFSET __attribute__((section("sfrs"),address(0xBF800788)));
extern volatile uint32_t        CCP7BUFINV __attribute__((section("sfrs"),address(0xBF80078C)));
#define CCP8CON1 CCP8CON1
extern volatile uint32_t   CCP8CON1 __attribute__((section("sfrs"), address(0xBF800800)));
typedef struct {
  uint32_t MOD:4;
  uint32_t CCSEL:1;
  uint32_t T32:1;
  uint32_t TMRPS:2;
  uint32_t CLKSEL:3;
  uint32_t TMRSYNC:1;
  uint32_t CCPSLP:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t SYNC:5;
  uint32_t ALTSYNC:1;
  uint32_t ONESHOT:1;
  uint32_t TRIGEN:1;
  uint32_t OPS:4;
  uint32_t :2;
  uint32_t RTRGEN:1;
  uint32_t OPSSRC:1;
} __CCP8CON1bits_t;
extern volatile __CCP8CON1bits_t CCP8CON1bits __asm__ ("CCP8CON1") __attribute__((section("sfrs"), address(0xBF800800)));
extern volatile uint32_t        CCP8CON1CLR __attribute__((section("sfrs"),address(0xBF800804)));
extern volatile uint32_t        CCP8CON1SET __attribute__((section("sfrs"),address(0xBF800808)));
extern volatile uint32_t        CCP8CON1INV __attribute__((section("sfrs"),address(0xBF80080C)));
#define CCP8CON2 CCP8CON2
extern volatile uint32_t   CCP8CON2 __attribute__((section("sfrs"), address(0xBF800810)));
typedef struct {
  uint32_t ASDG:8;
  uint32_t :4;
  uint32_t SSDG:1;
  uint32_t :1;
  uint32_t ASDGM:1;
  uint32_t PWMRSEN:1;
  uint32_t ICS:3;
  uint32_t AUXOUT:2;
  uint32_t :1;
  uint32_t ICGSM:2;
  uint32_t OCAEN:1;
  uint32_t :6;
  uint32_t OENSYNC:1;
} __CCP8CON2bits_t;
extern volatile __CCP8CON2bits_t CCP8CON2bits __asm__ ("CCP8CON2") __attribute__((section("sfrs"), address(0xBF800810)));
extern volatile uint32_t        CCP8CON2CLR __attribute__((section("sfrs"),address(0xBF800814)));
extern volatile uint32_t        CCP8CON2SET __attribute__((section("sfrs"),address(0xBF800818)));
extern volatile uint32_t        CCP8CON2INV __attribute__((section("sfrs"),address(0xBF80081C)));
#define CCP8CON3 CCP8CON3
extern volatile uint32_t   CCP8CON3 __attribute__((section("sfrs"), address(0xBF800820)));
typedef struct {
  uint32_t :18;
  uint32_t PSSACE:2;
  uint32_t :1;
  uint32_t POLACE:1;
  uint32_t :6;
  uint32_t OSCNT:3;
  uint32_t OETRIG:1;
} __CCP8CON3bits_t;
extern volatile __CCP8CON3bits_t CCP8CON3bits __asm__ ("CCP8CON3") __attribute__((section("sfrs"), address(0xBF800820)));
extern volatile uint32_t        CCP8CON3CLR __attribute__((section("sfrs"),address(0xBF800824)));
extern volatile uint32_t        CCP8CON3SET __attribute__((section("sfrs"),address(0xBF800828)));
extern volatile uint32_t        CCP8CON3INV __attribute__((section("sfrs"),address(0xBF80082C)));
#define CCP8STAT CCP8STAT
extern volatile uint32_t   CCP8STAT __attribute__((section("sfrs"), address(0xBF800830)));
typedef struct {
  uint32_t ICBNE:1;
  uint32_t ICOV:1;
  uint32_t ICDIS:1;
  uint32_t SCEVT:1;
  uint32_t ASEVT:1;
  uint32_t TRCLR:1;
  uint32_t TRSET:1;
  uint32_t CCPTRIG:1;
  uint32_t :2;
  uint32_t ICGARM:1;
  uint32_t :5;
  uint32_t RAWIP:1;
  uint32_t RBWIP:1;
  uint32_t TMRLWIP:1;
  uint32_t TMRHWIP:1;
  uint32_t PRLWIP:1;
} __CCP8STATbits_t;
extern volatile __CCP8STATbits_t CCP8STATbits __asm__ ("CCP8STAT") __attribute__((section("sfrs"), address(0xBF800830)));
extern volatile uint32_t        CCP8STATCLR __attribute__((section("sfrs"),address(0xBF800834)));
extern volatile uint32_t        CCP8STATSET __attribute__((section("sfrs"),address(0xBF800838)));
extern volatile uint32_t        CCP8STATINV __attribute__((section("sfrs"),address(0xBF80083C)));
#define CCP8TMR CCP8TMR
extern volatile uint32_t   CCP8TMR __attribute__((section("sfrs"), address(0xBF800840)));
typedef union {
  struct {
    uint32_t TMRL:16;
    uint32_t TMRH:16;
  };
  struct {
    uint32_t TMR:32;
  };
} __CCP8TMRbits_t;
extern volatile __CCP8TMRbits_t CCP8TMRbits __asm__ ("CCP8TMR") __attribute__((section("sfrs"), address(0xBF800840)));
extern volatile uint32_t        CCP8TMRCLR __attribute__((section("sfrs"),address(0xBF800844)));
extern volatile uint32_t        CCP8TMRSET __attribute__((section("sfrs"),address(0xBF800848)));
extern volatile uint32_t        CCP8TMRINV __attribute__((section("sfrs"),address(0xBF80084C)));
#define CCP8PR CCP8PR
extern volatile uint32_t   CCP8PR __attribute__((section("sfrs"), address(0xBF800850)));
typedef union {
  struct {
    uint32_t PRL:16;
    uint32_t PRH:16;
  };
  struct {
    uint32_t PR:32;
  };
} __CCP8PRbits_t;
extern volatile __CCP8PRbits_t CCP8PRbits __asm__ ("CCP8PR") __attribute__((section("sfrs"), address(0xBF800850)));
extern volatile uint32_t        CCP8PRCLR __attribute__((section("sfrs"),address(0xBF800854)));
extern volatile uint32_t        CCP8PRSET __attribute__((section("sfrs"),address(0xBF800858)));
extern volatile uint32_t        CCP8PRINV __attribute__((section("sfrs"),address(0xBF80085C)));
#define CCP8RA CCP8RA
extern volatile uint32_t   CCP8RA __attribute__((section("sfrs"), address(0xBF800860)));
typedef struct {
  uint32_t CMPA:16;
} __CCP8RAbits_t;
extern volatile __CCP8RAbits_t CCP8RAbits __asm__ ("CCP8RA") __attribute__((section("sfrs"), address(0xBF800860)));
extern volatile uint32_t        CCP8RACLR __attribute__((section("sfrs"),address(0xBF800864)));
extern volatile uint32_t        CCP8RASET __attribute__((section("sfrs"),address(0xBF800868)));
extern volatile uint32_t        CCP8RAINV __attribute__((section("sfrs"),address(0xBF80086C)));
#define CCP8RB CCP8RB
extern volatile uint32_t   CCP8RB __attribute__((section("sfrs"), address(0xBF800870)));
typedef struct {
  uint32_t CMPB:16;
} __CCP8RBbits_t;
extern volatile __CCP8RBbits_t CCP8RBbits __asm__ ("CCP8RB") __attribute__((section("sfrs"), address(0xBF800870)));
extern volatile uint32_t        CCP8RBCLR __attribute__((section("sfrs"),address(0xBF800874)));
extern volatile uint32_t        CCP8RBSET __attribute__((section("sfrs"),address(0xBF800878)));
extern volatile uint32_t        CCP8RBINV __attribute__((section("sfrs"),address(0xBF80087C)));
#define CCP8BUF CCP8BUF
extern volatile uint32_t   CCP8BUF __attribute__((section("sfrs"), address(0xBF800880)));
typedef union {
  struct {
    uint32_t BUFL:16;
    uint32_t BUFH:16;
  };
  struct {
    uint32_t BUF:32;
  };
} __CCP8BUFbits_t;
extern volatile __CCP8BUFbits_t CCP8BUFbits __asm__ ("CCP8BUF") __attribute__((section("sfrs"), address(0xBF800880)));
extern volatile uint32_t        CCP8BUFCLR __attribute__((section("sfrs"),address(0xBF800884)));
extern volatile uint32_t        CCP8BUFSET __attribute__((section("sfrs"),address(0xBF800888)));
extern volatile uint32_t        CCP8BUFINV __attribute__((section("sfrs"),address(0xBF80088C)));
#define CCP9CON1 CCP9CON1
extern volatile uint32_t   CCP9CON1 __attribute__((section("sfrs"), address(0xBF800900)));
typedef struct {
  uint32_t MOD:4;
  uint32_t CCSEL:1;
  uint32_t T32:1;
  uint32_t TMRPS:2;
  uint32_t CLKSEL:3;
  uint32_t TMRSYNC:1;
  uint32_t CCPSLP:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t SYNC:5;
  uint32_t ALTSYNC:1;
  uint32_t ONESHOT:1;
  uint32_t TRIGEN:1;
  uint32_t OPS:4;
  uint32_t :2;
  uint32_t RTRGEN:1;
  uint32_t OPSSRC:1;
} __CCP9CON1bits_t;
extern volatile __CCP9CON1bits_t CCP9CON1bits __asm__ ("CCP9CON1") __attribute__((section("sfrs"), address(0xBF800900)));
extern volatile uint32_t        CCP9CON1CLR __attribute__((section("sfrs"),address(0xBF800904)));
extern volatile uint32_t        CCP9CON1SET __attribute__((section("sfrs"),address(0xBF800908)));
extern volatile uint32_t        CCP9CON1INV __attribute__((section("sfrs"),address(0xBF80090C)));
#define CCP9CON2 CCP9CON2
extern volatile uint32_t   CCP9CON2 __attribute__((section("sfrs"), address(0xBF800910)));
typedef struct {
  uint32_t ASDG:8;
  uint32_t :4;
  uint32_t SSDG:1;
  uint32_t :1;
  uint32_t ASDGM:1;
  uint32_t PWMRSEN:1;
  uint32_t ICS:3;
  uint32_t AUXOUT:2;
  uint32_t :1;
  uint32_t ICGSM:2;
  uint32_t OCAEN:1;
  uint32_t :6;
  uint32_t OENSYNC:1;
} __CCP9CON2bits_t;
extern volatile __CCP9CON2bits_t CCP9CON2bits __asm__ ("CCP9CON2") __attribute__((section("sfrs"), address(0xBF800910)));
extern volatile uint32_t        CCP9CON2CLR __attribute__((section("sfrs"),address(0xBF800914)));
extern volatile uint32_t        CCP9CON2SET __attribute__((section("sfrs"),address(0xBF800918)));
extern volatile uint32_t        CCP9CON2INV __attribute__((section("sfrs"),address(0xBF80091C)));
#define CCP9CON3 CCP9CON3
extern volatile uint32_t   CCP9CON3 __attribute__((section("sfrs"), address(0xBF800920)));
typedef struct {
  uint32_t :18;
  uint32_t PSSACE:2;
  uint32_t :1;
  uint32_t POLACE:1;
  uint32_t :6;
  uint32_t OSCNT:3;
  uint32_t OETRIG:1;
} __CCP9CON3bits_t;
extern volatile __CCP9CON3bits_t CCP9CON3bits __asm__ ("CCP9CON3") __attribute__((section("sfrs"), address(0xBF800920)));
extern volatile uint32_t        CCP9CON3CLR __attribute__((section("sfrs"),address(0xBF800924)));
extern volatile uint32_t        CCP9CON3SET __attribute__((section("sfrs"),address(0xBF800928)));
extern volatile uint32_t        CCP9CON3INV __attribute__((section("sfrs"),address(0xBF80092C)));
#define CCP9STAT CCP9STAT
extern volatile uint32_t   CCP9STAT __attribute__((section("sfrs"), address(0xBF800930)));
typedef struct {
  uint32_t ICBNE:1;
  uint32_t ICOV:1;
  uint32_t ICDIS:1;
  uint32_t SCEVT:1;
  uint32_t ASEVT:1;
  uint32_t TRCLR:1;
  uint32_t TRSET:1;
  uint32_t CCPTRIG:1;
  uint32_t :2;
  uint32_t ICGARM:1;
  uint32_t :5;
  uint32_t RAWIP:1;
  uint32_t RBWIP:1;
  uint32_t TMRLWIP:1;
  uint32_t TMRHWIP:1;
  uint32_t PRLWIP:1;
} __CCP9STATbits_t;
extern volatile __CCP9STATbits_t CCP9STATbits __asm__ ("CCP9STAT") __attribute__((section("sfrs"), address(0xBF800930)));
extern volatile uint32_t        CCP9STATCLR __attribute__((section("sfrs"),address(0xBF800934)));
extern volatile uint32_t        CCP9STATSET __attribute__((section("sfrs"),address(0xBF800938)));
extern volatile uint32_t        CCP9STATINV __attribute__((section("sfrs"),address(0xBF80093C)));
#define CCP9TMR CCP9TMR
extern volatile uint32_t   CCP9TMR __attribute__((section("sfrs"), address(0xBF800940)));
typedef union {
  struct {
    uint32_t TMRL:16;
    uint32_t TMRH:16;
  };
  struct {
    uint32_t TMR:32;
  };
} __CCP9TMRbits_t;
extern volatile __CCP9TMRbits_t CCP9TMRbits __asm__ ("CCP9TMR") __attribute__((section("sfrs"), address(0xBF800940)));
extern volatile uint32_t        CCP9TMRCLR __attribute__((section("sfrs"),address(0xBF800944)));
extern volatile uint32_t        CCP9TMRSET __attribute__((section("sfrs"),address(0xBF800948)));
extern volatile uint32_t        CCP9TMRINV __attribute__((section("sfrs"),address(0xBF80094C)));
#define CCP9PR CCP9PR
extern volatile uint32_t   CCP9PR __attribute__((section("sfrs"), address(0xBF800950)));
typedef union {
  struct {
    uint32_t PRL:16;
    uint32_t PRH:16;
  };
  struct {
    uint32_t PR:32;
  };
} __CCP9PRbits_t;
extern volatile __CCP9PRbits_t CCP9PRbits __asm__ ("CCP9PR") __attribute__((section("sfrs"), address(0xBF800950)));
extern volatile uint32_t        CCP9PRCLR __attribute__((section("sfrs"),address(0xBF800954)));
extern volatile uint32_t        CCP9PRSET __attribute__((section("sfrs"),address(0xBF800958)));
extern volatile uint32_t        CCP9PRINV __attribute__((section("sfrs"),address(0xBF80095C)));
#define CCP9RA CCP9RA
extern volatile uint32_t   CCP9RA __attribute__((section("sfrs"), address(0xBF800960)));
typedef struct {
  uint32_t CMPA:16;
} __CCP9RAbits_t;
extern volatile __CCP9RAbits_t CCP9RAbits __asm__ ("CCP9RA") __attribute__((section("sfrs"), address(0xBF800960)));
extern volatile uint32_t        CCP9RACLR __attribute__((section("sfrs"),address(0xBF800964)));
extern volatile uint32_t        CCP9RASET __attribute__((section("sfrs"),address(0xBF800968)));
extern volatile uint32_t        CCP9RAINV __attribute__((section("sfrs"),address(0xBF80096C)));
#define CCP9RB CCP9RB
extern volatile uint32_t   CCP9RB __attribute__((section("sfrs"), address(0xBF800970)));
typedef struct {
  uint32_t CMPB:16;
} __CCP9RBbits_t;
extern volatile __CCP9RBbits_t CCP9RBbits __asm__ ("CCP9RB") __attribute__((section("sfrs"), address(0xBF800970)));
extern volatile uint32_t        CCP9RBCLR __attribute__((section("sfrs"),address(0xBF800974)));
extern volatile uint32_t        CCP9RBSET __attribute__((section("sfrs"),address(0xBF800978)));
extern volatile uint32_t        CCP9RBINV __attribute__((section("sfrs"),address(0xBF80097C)));
#define CCP9BUF CCP9BUF
extern volatile uint32_t   CCP9BUF __attribute__((section("sfrs"), address(0xBF800980)));
typedef union {
  struct {
    uint32_t BUFL:16;
    uint32_t BUFH:16;
  };
  struct {
    uint32_t BUF:32;
  };
} __CCP9BUFbits_t;
extern volatile __CCP9BUFbits_t CCP9BUFbits __asm__ ("CCP9BUF") __attribute__((section("sfrs"), address(0xBF800980)));
extern volatile uint32_t        CCP9BUFCLR __attribute__((section("sfrs"),address(0xBF800984)));
extern volatile uint32_t        CCP9BUFSET __attribute__((section("sfrs"),address(0xBF800988)));
extern volatile uint32_t        CCP9BUFINV __attribute__((section("sfrs"),address(0xBF80098C)));
#define I2C1CON I2C1CON
extern volatile uint32_t   I2C1CON __attribute__((section("sfrs"), address(0xBF801500)));
typedef union {
  struct {
    uint32_t SEN:1;
    uint32_t RSEN:1;
    uint32_t PEN:1;
    uint32_t RCEN:1;
    uint32_t ACKEN:1;
    uint32_t ACKDT:1;
    uint32_t STREN:1;
    uint32_t GCEN:1;
    uint32_t SMEN:1;
    uint32_t DISSLW:1;
    uint32_t A10M:1;
    uint32_t STRICT:1;
    uint32_t SCLREL:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t :2;
    uint32_t SBCDE:1;
    uint32_t SDAHT:1;
    uint32_t BOEN:1;
    uint32_t SCIE:1;
    uint32_t PCIE:1;
  };
  struct {
    uint32_t :11;
    uint32_t IPMIEN:1;
    uint32_t :1;
    uint32_t I2CSIDL:1;
    uint32_t :1;
    uint32_t I2CEN:1;
  };
} __I2C1CONbits_t;
extern volatile __I2C1CONbits_t I2C1CONbits __asm__ ("I2C1CON") __attribute__((section("sfrs"), address(0xBF801500)));
extern volatile uint32_t        I2C1CONCLR __attribute__((section("sfrs"),address(0xBF801504)));
extern volatile uint32_t        I2C1CONSET __attribute__((section("sfrs"),address(0xBF801508)));
extern volatile uint32_t        I2C1CONINV __attribute__((section("sfrs"),address(0xBF80150C)));
#define I2C1STAT I2C1STAT
extern volatile uint32_t   I2C1STAT __attribute__((section("sfrs"), address(0xBF801510)));
typedef union {
  struct {
    uint32_t TBF:1;
    uint32_t RBF:1;
    uint32_t R_W:1;
    uint32_t S:1;
    uint32_t P:1;
    uint32_t D_A:1;
    uint32_t I2COV:1;
    uint32_t IWCOL:1;
    uint32_t ADD10:1;
    uint32_t GCSTAT:1;
    uint32_t BCL:1;
    uint32_t :2;
    uint32_t ACKTIM:1;
    uint32_t TRSTAT:1;
    uint32_t ACKSTAT:1;
  };
  struct {
    uint32_t :6;
    uint32_t I2CPOV:1;
  };
} __I2C1STATbits_t;
extern volatile __I2C1STATbits_t I2C1STATbits __asm__ ("I2C1STAT") __attribute__((section("sfrs"), address(0xBF801510)));
extern volatile uint32_t        I2C1STATCLR __attribute__((section("sfrs"),address(0xBF801514)));
extern volatile uint32_t        I2C1STATSET __attribute__((section("sfrs"),address(0xBF801518)));
extern volatile uint32_t        I2C1STATINV __attribute__((section("sfrs"),address(0xBF80151C)));
#define I2C1ADD I2C1ADD
extern volatile uint32_t   I2C1ADD __attribute__((section("sfrs"), address(0xBF801520)));
typedef struct {
  uint32_t I2CADD:10;
} __I2C1ADDbits_t;
extern volatile __I2C1ADDbits_t I2C1ADDbits __asm__ ("I2C1ADD") __attribute__((section("sfrs"), address(0xBF801520)));
extern volatile uint32_t        I2C1ADDCLR __attribute__((section("sfrs"),address(0xBF801524)));
extern volatile uint32_t        I2C1ADDSET __attribute__((section("sfrs"),address(0xBF801528)));
extern volatile uint32_t        I2C1ADDINV __attribute__((section("sfrs"),address(0xBF80152C)));
#define I2C1MSK I2C1MSK
extern volatile uint32_t   I2C1MSK __attribute__((section("sfrs"), address(0xBF801530)));
typedef union {
  struct {
    uint32_t I2CMSK:10;
  };
  struct {
    uint32_t AMSK:10;
  };
} __I2C1MSKbits_t;
extern volatile __I2C1MSKbits_t I2C1MSKbits __asm__ ("I2C1MSK") __attribute__((section("sfrs"), address(0xBF801530)));
extern volatile uint32_t        I2C1MSKCLR __attribute__((section("sfrs"),address(0xBF801534)));
extern volatile uint32_t        I2C1MSKSET __attribute__((section("sfrs"),address(0xBF801538)));
extern volatile uint32_t        I2C1MSKINV __attribute__((section("sfrs"),address(0xBF80153C)));
#define I2C1BRG I2C1BRG
extern volatile uint32_t   I2C1BRG __attribute__((section("sfrs"), address(0xBF801540)));
typedef struct {
  uint32_t I2CBRG:16;
} __I2C1BRGbits_t;
extern volatile __I2C1BRGbits_t I2C1BRGbits __asm__ ("I2C1BRG") __attribute__((section("sfrs"), address(0xBF801540)));
extern volatile uint32_t        I2C1BRGCLR __attribute__((section("sfrs"),address(0xBF801544)));
extern volatile uint32_t        I2C1BRGSET __attribute__((section("sfrs"),address(0xBF801548)));
extern volatile uint32_t        I2C1BRGINV __attribute__((section("sfrs"),address(0xBF80154C)));
#define I2C1TRN I2C1TRN
extern volatile uint32_t   I2C1TRN __attribute__((section("sfrs"), address(0xBF801550)));
typedef struct {
  uint32_t I2CTRN:8;
} __I2C1TRNbits_t;
extern volatile __I2C1TRNbits_t I2C1TRNbits __asm__ ("I2C1TRN") __attribute__((section("sfrs"), address(0xBF801550)));
extern volatile uint32_t        I2C1TRNCLR __attribute__((section("sfrs"),address(0xBF801554)));
extern volatile uint32_t        I2C1TRNSET __attribute__((section("sfrs"),address(0xBF801558)));
extern volatile uint32_t        I2C1TRNINV __attribute__((section("sfrs"),address(0xBF80155C)));
#define I2C1RCV I2C1RCV
extern volatile uint32_t   I2C1RCV __attribute__((section("sfrs"), address(0xBF801560)));
typedef struct {
  uint32_t I2CRCV:8;
} __I2C1RCVbits_t;
extern volatile __I2C1RCVbits_t I2C1RCVbits __asm__ ("I2C1RCV") __attribute__((section("sfrs"), address(0xBF801560)));
extern volatile uint32_t        I2C1RCVCLR __attribute__((section("sfrs"),address(0xBF801564)));
extern volatile uint32_t        I2C1RCVSET __attribute__((section("sfrs"),address(0xBF801568)));
extern volatile uint32_t        I2C1RCVINV __attribute__((section("sfrs"),address(0xBF80156C)));
#define I2C2CON I2C2CON
extern volatile uint32_t   I2C2CON __attribute__((section("sfrs"), address(0xBF801600)));
typedef union {
  struct {
    uint32_t SEN:1;
    uint32_t RSEN:1;
    uint32_t PEN:1;
    uint32_t RCEN:1;
    uint32_t ACKEN:1;
    uint32_t ACKDT:1;
    uint32_t STREN:1;
    uint32_t GCEN:1;
    uint32_t SMEN:1;
    uint32_t DISSLW:1;
    uint32_t A10M:1;
    uint32_t STRICT:1;
    uint32_t SCLREL:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t :2;
    uint32_t SBCDE:1;
    uint32_t SDAHT:1;
    uint32_t BOEN:1;
    uint32_t SCIE:1;
    uint32_t PCIE:1;
  };
  struct {
    uint32_t :11;
    uint32_t IPMIEN:1;
    uint32_t :1;
    uint32_t I2CSIDL:1;
    uint32_t :1;
    uint32_t I2CEN:1;
  };
} __I2C2CONbits_t;
extern volatile __I2C2CONbits_t I2C2CONbits __asm__ ("I2C2CON") __attribute__((section("sfrs"), address(0xBF801600)));
extern volatile uint32_t        I2C2CONCLR __attribute__((section("sfrs"),address(0xBF801604)));
extern volatile uint32_t        I2C2CONSET __attribute__((section("sfrs"),address(0xBF801608)));
extern volatile uint32_t        I2C2CONINV __attribute__((section("sfrs"),address(0xBF80160C)));
#define I2C2STAT I2C2STAT
extern volatile uint32_t   I2C2STAT __attribute__((section("sfrs"), address(0xBF801610)));
typedef union {
  struct {
    uint32_t TBF:1;
    uint32_t RBF:1;
    uint32_t R_W:1;
    uint32_t S:1;
    uint32_t P:1;
    uint32_t D_A:1;
    uint32_t I2COV:1;
    uint32_t IWCOL:1;
    uint32_t ADD10:1;
    uint32_t GCSTAT:1;
    uint32_t BCL:1;
    uint32_t :2;
    uint32_t ACKTIM:1;
    uint32_t TRSTAT:1;
    uint32_t ACKSTAT:1;
  };
  struct {
    uint32_t :6;
    uint32_t I2CPOV:1;
  };
} __I2C2STATbits_t;
extern volatile __I2C2STATbits_t I2C2STATbits __asm__ ("I2C2STAT") __attribute__((section("sfrs"), address(0xBF801610)));
extern volatile uint32_t        I2C2STATCLR __attribute__((section("sfrs"),address(0xBF801614)));
extern volatile uint32_t        I2C2STATSET __attribute__((section("sfrs"),address(0xBF801618)));
extern volatile uint32_t        I2C2STATINV __attribute__((section("sfrs"),address(0xBF80161C)));
#define I2C2ADD I2C2ADD
extern volatile uint32_t   I2C2ADD __attribute__((section("sfrs"), address(0xBF801620)));
typedef struct {
  uint32_t I2CADD:10;
} __I2C2ADDbits_t;
extern volatile __I2C2ADDbits_t I2C2ADDbits __asm__ ("I2C2ADD") __attribute__((section("sfrs"), address(0xBF801620)));
extern volatile uint32_t        I2C2ADDCLR __attribute__((section("sfrs"),address(0xBF801624)));
extern volatile uint32_t        I2C2ADDSET __attribute__((section("sfrs"),address(0xBF801628)));
extern volatile uint32_t        I2C2ADDINV __attribute__((section("sfrs"),address(0xBF80162C)));
#define I2C2MSK I2C2MSK
extern volatile uint32_t   I2C2MSK __attribute__((section("sfrs"), address(0xBF801630)));
typedef union {
  struct {
    uint32_t I2CMSK:10;
  };
  struct {
    uint32_t AMSK:10;
  };
} __I2C2MSKbits_t;
extern volatile __I2C2MSKbits_t I2C2MSKbits __asm__ ("I2C2MSK") __attribute__((section("sfrs"), address(0xBF801630)));
extern volatile uint32_t        I2C2MSKCLR __attribute__((section("sfrs"),address(0xBF801634)));
extern volatile uint32_t        I2C2MSKSET __attribute__((section("sfrs"),address(0xBF801638)));
extern volatile uint32_t        I2C2MSKINV __attribute__((section("sfrs"),address(0xBF80163C)));
#define I2C2BRG I2C2BRG
extern volatile uint32_t   I2C2BRG __attribute__((section("sfrs"), address(0xBF801640)));
typedef struct {
  uint32_t I2CBRG:16;
} __I2C2BRGbits_t;
extern volatile __I2C2BRGbits_t I2C2BRGbits __asm__ ("I2C2BRG") __attribute__((section("sfrs"), address(0xBF801640)));
extern volatile uint32_t        I2C2BRGCLR __attribute__((section("sfrs"),address(0xBF801644)));
extern volatile uint32_t        I2C2BRGSET __attribute__((section("sfrs"),address(0xBF801648)));
extern volatile uint32_t        I2C2BRGINV __attribute__((section("sfrs"),address(0xBF80164C)));
#define I2C2TRN I2C2TRN
extern volatile uint32_t   I2C2TRN __attribute__((section("sfrs"), address(0xBF801650)));
typedef struct {
  uint32_t I2CTRN:8;
} __I2C2TRNbits_t;
extern volatile __I2C2TRNbits_t I2C2TRNbits __asm__ ("I2C2TRN") __attribute__((section("sfrs"), address(0xBF801650)));
extern volatile uint32_t        I2C2TRNCLR __attribute__((section("sfrs"),address(0xBF801654)));
extern volatile uint32_t        I2C2TRNSET __attribute__((section("sfrs"),address(0xBF801658)));
extern volatile uint32_t        I2C2TRNINV __attribute__((section("sfrs"),address(0xBF80165C)));
#define I2C2RCV I2C2RCV
extern volatile uint32_t   I2C2RCV __attribute__((section("sfrs"), address(0xBF801660)));
typedef struct {
  uint32_t I2CRCV:8;
} __I2C2RCVbits_t;
extern volatile __I2C2RCVbits_t I2C2RCVbits __asm__ ("I2C2RCV") __attribute__((section("sfrs"), address(0xBF801660)));
extern volatile uint32_t        I2C2RCVCLR __attribute__((section("sfrs"),address(0xBF801664)));
extern volatile uint32_t        I2C2RCVSET __attribute__((section("sfrs"),address(0xBF801668)));
extern volatile uint32_t        I2C2RCVINV __attribute__((section("sfrs"),address(0xBF80166C)));
#define I2C3CON I2C3CON
extern volatile uint32_t   I2C3CON __attribute__((section("sfrs"), address(0xBF801700)));
typedef union {
  struct {
    uint32_t SEN:1;
    uint32_t RSEN:1;
    uint32_t PEN:1;
    uint32_t RCEN:1;
    uint32_t ACKEN:1;
    uint32_t ACKDT:1;
    uint32_t STREN:1;
    uint32_t GCEN:1;
    uint32_t SMEN:1;
    uint32_t DISSLW:1;
    uint32_t A10M:1;
    uint32_t STRICT:1;
    uint32_t SCLREL:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t :2;
    uint32_t SBCDE:1;
    uint32_t SDAHT:1;
    uint32_t BOEN:1;
    uint32_t SCIE:1;
    uint32_t PCIE:1;
  };
  struct {
    uint32_t :11;
    uint32_t IPMIEN:1;
    uint32_t :1;
    uint32_t I2CSIDL:1;
    uint32_t :1;
    uint32_t I2CEN:1;
  };
} __I2C3CONbits_t;
extern volatile __I2C3CONbits_t I2C3CONbits __asm__ ("I2C3CON") __attribute__((section("sfrs"), address(0xBF801700)));
extern volatile uint32_t        I2C3CONCLR __attribute__((section("sfrs"),address(0xBF801704)));
extern volatile uint32_t        I2C3CONSET __attribute__((section("sfrs"),address(0xBF801708)));
extern volatile uint32_t        I2C3CONINV __attribute__((section("sfrs"),address(0xBF80170C)));
#define I2C3STAT I2C3STAT
extern volatile uint32_t   I2C3STAT __attribute__((section("sfrs"), address(0xBF801710)));
typedef union {
  struct {
    uint32_t TBF:1;
    uint32_t RBF:1;
    uint32_t R_W:1;
    uint32_t S:1;
    uint32_t P:1;
    uint32_t D_A:1;
    uint32_t I2COV:1;
    uint32_t IWCOL:1;
    uint32_t ADD10:1;
    uint32_t GCSTAT:1;
    uint32_t BCL:1;
    uint32_t :2;
    uint32_t ACKTIM:1;
    uint32_t TRSTAT:1;
    uint32_t ACKSTAT:1;
  };
  struct {
    uint32_t :6;
    uint32_t I2CPOV:1;
  };
} __I2C3STATbits_t;
extern volatile __I2C3STATbits_t I2C3STATbits __asm__ ("I2C3STAT") __attribute__((section("sfrs"), address(0xBF801710)));
extern volatile uint32_t        I2C3STATCLR __attribute__((section("sfrs"),address(0xBF801714)));
extern volatile uint32_t        I2C3STATSET __attribute__((section("sfrs"),address(0xBF801718)));
extern volatile uint32_t        I2C3STATINV __attribute__((section("sfrs"),address(0xBF80171C)));
#define I2C3ADD I2C3ADD
extern volatile uint32_t   I2C3ADD __attribute__((section("sfrs"), address(0xBF801720)));
typedef struct {
  uint32_t I2CADD:10;
} __I2C3ADDbits_t;
extern volatile __I2C3ADDbits_t I2C3ADDbits __asm__ ("I2C3ADD") __attribute__((section("sfrs"), address(0xBF801720)));
extern volatile uint32_t        I2C3ADDCLR __attribute__((section("sfrs"),address(0xBF801724)));
extern volatile uint32_t        I2C3ADDSET __attribute__((section("sfrs"),address(0xBF801728)));
extern volatile uint32_t        I2C3ADDINV __attribute__((section("sfrs"),address(0xBF80172C)));
#define I2C3MSK I2C3MSK
extern volatile uint32_t   I2C3MSK __attribute__((section("sfrs"), address(0xBF801730)));
typedef union {
  struct {
    uint32_t I2CMSK:10;
  };
  struct {
    uint32_t AMSK:10;
  };
} __I2C3MSKbits_t;
extern volatile __I2C3MSKbits_t I2C3MSKbits __asm__ ("I2C3MSK") __attribute__((section("sfrs"), address(0xBF801730)));
extern volatile uint32_t        I2C3MSKCLR __attribute__((section("sfrs"),address(0xBF801734)));
extern volatile uint32_t        I2C3MSKSET __attribute__((section("sfrs"),address(0xBF801738)));
extern volatile uint32_t        I2C3MSKINV __attribute__((section("sfrs"),address(0xBF80173C)));
#define I2C3BRG I2C3BRG
extern volatile uint32_t   I2C3BRG __attribute__((section("sfrs"), address(0xBF801740)));
typedef struct {
  uint32_t I2CBRG:16;
} __I2C3BRGbits_t;
extern volatile __I2C3BRGbits_t I2C3BRGbits __asm__ ("I2C3BRG") __attribute__((section("sfrs"), address(0xBF801740)));
extern volatile uint32_t        I2C3BRGCLR __attribute__((section("sfrs"),address(0xBF801744)));
extern volatile uint32_t        I2C3BRGSET __attribute__((section("sfrs"),address(0xBF801748)));
extern volatile uint32_t        I2C3BRGINV __attribute__((section("sfrs"),address(0xBF80174C)));
#define I2C3TRN I2C3TRN
extern volatile uint32_t   I2C3TRN __attribute__((section("sfrs"), address(0xBF801750)));
typedef struct {
  uint32_t I2CTRN:8;
} __I2C3TRNbits_t;
extern volatile __I2C3TRNbits_t I2C3TRNbits __asm__ ("I2C3TRN") __attribute__((section("sfrs"), address(0xBF801750)));
extern volatile uint32_t        I2C3TRNCLR __attribute__((section("sfrs"),address(0xBF801754)));
extern volatile uint32_t        I2C3TRNSET __attribute__((section("sfrs"),address(0xBF801758)));
extern volatile uint32_t        I2C3TRNINV __attribute__((section("sfrs"),address(0xBF80175C)));
#define I2C3RCV I2C3RCV
extern volatile uint32_t   I2C3RCV __attribute__((section("sfrs"), address(0xBF801760)));
typedef struct {
  uint32_t I2CRCV:8;
} __I2C3RCVbits_t;
extern volatile __I2C3RCVbits_t I2C3RCVbits __asm__ ("I2C3RCV") __attribute__((section("sfrs"), address(0xBF801760)));
extern volatile uint32_t        I2C3RCVCLR __attribute__((section("sfrs"),address(0xBF801764)));
extern volatile uint32_t        I2C3RCVSET __attribute__((section("sfrs"),address(0xBF801768)));
extern volatile uint32_t        I2C3RCVINV __attribute__((section("sfrs"),address(0xBF80176C)));
#define U1MODE U1MODE
extern volatile uint32_t   U1MODE __attribute__((section("sfrs"), address(0xBF801800)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t OVFDIS:1;
    uint32_t CLKSEL:2;
    uint32_t :3;
    uint32_t ACTIVE:1;
    uint32_t SLPEN:1;
  };
  struct {
    uint32_t :16;
    uint32_t RUNOVF:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __U1MODEbits_t;
extern volatile __U1MODEbits_t U1MODEbits __asm__ ("U1MODE") __attribute__((section("sfrs"), address(0xBF801800)));
extern volatile uint32_t        U1MODECLR __attribute__((section("sfrs"),address(0xBF801804)));
extern volatile uint32_t        U1MODESET __attribute__((section("sfrs"),address(0xBF801808)));
extern volatile uint32_t        U1MODEINV __attribute__((section("sfrs"),address(0xBF80180C)));
#define U1STA U1STA
extern volatile uint32_t   U1STA __attribute__((section("sfrs"), address(0xBF801810)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t MASK:8;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __U1STAbits_t;
extern volatile __U1STAbits_t U1STAbits __asm__ ("U1STA") __attribute__((section("sfrs"), address(0xBF801810)));
extern volatile uint32_t        U1STACLR __attribute__((section("sfrs"),address(0xBF801814)));
extern volatile uint32_t        U1STASET __attribute__((section("sfrs"),address(0xBF801818)));
extern volatile uint32_t        U1STAINV __attribute__((section("sfrs"),address(0xBF80181C)));
#define U1TXREG U1TXREG
extern volatile uint32_t   U1TXREG __attribute__((section("sfrs"), address(0xBF801820)));
#define U1RXREG U1RXREG
extern volatile uint32_t   U1RXREG __attribute__((section("sfrs"), address(0xBF801830)));
#define U1BRG U1BRG
extern volatile uint32_t   U1BRG __attribute__((section("sfrs"), address(0xBF801840)));
typedef struct {
  uint32_t BRG:20;
} __U1BRGbits_t;
extern volatile __U1BRGbits_t U1BRGbits __asm__ ("U1BRG") __attribute__((section("sfrs"), address(0xBF801840)));
extern volatile uint32_t        U1BRGCLR __attribute__((section("sfrs"),address(0xBF801844)));
extern volatile uint32_t        U1BRGSET __attribute__((section("sfrs"),address(0xBF801848)));
extern volatile uint32_t        U1BRGINV __attribute__((section("sfrs"),address(0xBF80184C)));
#define U2MODE U2MODE
extern volatile uint32_t   U2MODE __attribute__((section("sfrs"), address(0xBF801900)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t OVFDIS:1;
    uint32_t CLKSEL:2;
    uint32_t :3;
    uint32_t ACTIVE:1;
    uint32_t SLPEN:1;
  };
  struct {
    uint32_t :16;
    uint32_t RUNOVF:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __U2MODEbits_t;
extern volatile __U2MODEbits_t U2MODEbits __asm__ ("U2MODE") __attribute__((section("sfrs"), address(0xBF801900)));
extern volatile uint32_t        U2MODECLR __attribute__((section("sfrs"),address(0xBF801904)));
extern volatile uint32_t        U2MODESET __attribute__((section("sfrs"),address(0xBF801908)));
extern volatile uint32_t        U2MODEINV __attribute__((section("sfrs"),address(0xBF80190C)));
#define U2STA U2STA
extern volatile uint32_t   U2STA __attribute__((section("sfrs"), address(0xBF801910)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t MASK:8;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __U2STAbits_t;
extern volatile __U2STAbits_t U2STAbits __asm__ ("U2STA") __attribute__((section("sfrs"), address(0xBF801910)));
extern volatile uint32_t        U2STACLR __attribute__((section("sfrs"),address(0xBF801914)));
extern volatile uint32_t        U2STASET __attribute__((section("sfrs"),address(0xBF801918)));
extern volatile uint32_t        U2STAINV __attribute__((section("sfrs"),address(0xBF80191C)));
#define U2TXREG U2TXREG
extern volatile uint32_t   U2TXREG __attribute__((section("sfrs"), address(0xBF801920)));
#define U2RXREG U2RXREG
extern volatile uint32_t   U2RXREG __attribute__((section("sfrs"), address(0xBF801930)));
#define U2BRG U2BRG
extern volatile uint32_t   U2BRG __attribute__((section("sfrs"), address(0xBF801940)));
typedef struct {
  uint32_t BRG:20;
} __U2BRGbits_t;
extern volatile __U2BRGbits_t U2BRGbits __asm__ ("U2BRG") __attribute__((section("sfrs"), address(0xBF801940)));
extern volatile uint32_t        U2BRGCLR __attribute__((section("sfrs"),address(0xBF801944)));
extern volatile uint32_t        U2BRGSET __attribute__((section("sfrs"),address(0xBF801948)));
extern volatile uint32_t        U2BRGINV __attribute__((section("sfrs"),address(0xBF80194C)));
#define U3MODE U3MODE
extern volatile uint32_t   U3MODE __attribute__((section("sfrs"), address(0xBF802000)));
typedef union {
  struct {
    uint32_t STSEL:1;
    uint32_t PDSEL:2;
    uint32_t BRGH:1;
    uint32_t RXINV:1;
    uint32_t ABAUD:1;
    uint32_t LPBACK:1;
    uint32_t WAKE:1;
    uint32_t UEN:2;
    uint32_t :1;
    uint32_t RTSMD:1;
    uint32_t IREN:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t OVFDIS:1;
    uint32_t CLKSEL:2;
    uint32_t :3;
    uint32_t ACTIVE:1;
    uint32_t SLPEN:1;
  };
  struct {
    uint32_t :16;
    uint32_t RUNOVF:1;
  };
  struct {
    uint32_t :1;
    uint32_t PDSEL0:1;
    uint32_t PDSEL1:1;
    uint32_t :5;
    uint32_t UEN0:1;
    uint32_t UEN1:1;
  };
  struct {
    uint32_t :13;
    uint32_t USIDL:1;
    uint32_t :1;
    uint32_t UARTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __U3MODEbits_t;
extern volatile __U3MODEbits_t U3MODEbits __asm__ ("U3MODE") __attribute__((section("sfrs"), address(0xBF802000)));
extern volatile uint32_t        U3MODECLR __attribute__((section("sfrs"),address(0xBF802004)));
extern volatile uint32_t        U3MODESET __attribute__((section("sfrs"),address(0xBF802008)));
extern volatile uint32_t        U3MODEINV __attribute__((section("sfrs"),address(0xBF80200C)));
#define U3STA U3STA
extern volatile uint32_t   U3STA __attribute__((section("sfrs"), address(0xBF802010)));
typedef union {
  struct {
    uint32_t URXDA:1;
    uint32_t OERR:1;
    uint32_t FERR:1;
    uint32_t PERR:1;
    uint32_t RIDLE:1;
    uint32_t ADDEN:1;
    uint32_t URXISEL:2;
    uint32_t TRMT:1;
    uint32_t UTXBF:1;
    uint32_t UTXEN:1;
    uint32_t UTXBRK:1;
    uint32_t URXEN:1;
    uint32_t UTXINV:1;
    uint32_t UTXISEL:2;
    uint32_t ADDR:8;
    uint32_t MASK:8;
  };
  struct {
    uint32_t :6;
    uint32_t URXISEL0:1;
    uint32_t URXISEL1:1;
    uint32_t :6;
    uint32_t UTXISEL0:1;
    uint32_t UTXISEL1:1;
  };
  struct {
    uint32_t :14;
    uint32_t UTXSEL:2;
  };
  struct {
    uint32_t w:32;
  };
} __U3STAbits_t;
extern volatile __U3STAbits_t U3STAbits __asm__ ("U3STA") __attribute__((section("sfrs"), address(0xBF802010)));
extern volatile uint32_t        U3STACLR __attribute__((section("sfrs"),address(0xBF802014)));
extern volatile uint32_t        U3STASET __attribute__((section("sfrs"),address(0xBF802018)));
extern volatile uint32_t        U3STAINV __attribute__((section("sfrs"),address(0xBF80201C)));
#define U3TXREG U3TXREG
extern volatile uint32_t   U3TXREG __attribute__((section("sfrs"), address(0xBF802020)));
#define U3RXREG U3RXREG
extern volatile uint32_t   U3RXREG __attribute__((section("sfrs"), address(0xBF802030)));
#define U3BRG U3BRG
extern volatile uint32_t   U3BRG __attribute__((section("sfrs"), address(0xBF802040)));
typedef struct {
  uint32_t BRG:20;
} __U3BRGbits_t;
extern volatile __U3BRGbits_t U3BRGbits __asm__ ("U3BRG") __attribute__((section("sfrs"), address(0xBF802040)));
extern volatile uint32_t        U3BRGCLR __attribute__((section("sfrs"),address(0xBF802044)));
extern volatile uint32_t        U3BRGSET __attribute__((section("sfrs"),address(0xBF802048)));
extern volatile uint32_t        U3BRGINV __attribute__((section("sfrs"),address(0xBF80204C)));
#define ADC1BUF0 ADC1BUF0
extern volatile uint32_t   ADC1BUF0 __attribute__((section("sfrs"), address(0xBF802100)));
extern volatile uint32_t        ADC1BUF0CLR __attribute__((section("sfrs"),address(0xBF802104)));
extern volatile uint32_t        ADC1BUF0SET __attribute__((section("sfrs"),address(0xBF802108)));
extern volatile uint32_t        ADC1BUF0INV __attribute__((section("sfrs"),address(0xBF80210C)));
#define ADC1BUF1 ADC1BUF1
extern volatile uint32_t   ADC1BUF1 __attribute__((section("sfrs"), address(0xBF802110)));
extern volatile uint32_t        ADC1BUF1CLR __attribute__((section("sfrs"),address(0xBF802114)));
extern volatile uint32_t        ADC1BUF1SET __attribute__((section("sfrs"),address(0xBF802118)));
extern volatile uint32_t        ADC1BUF1INV __attribute__((section("sfrs"),address(0xBF80211C)));
#define ADC1BUF2 ADC1BUF2
extern volatile uint32_t   ADC1BUF2 __attribute__((section("sfrs"), address(0xBF802120)));
extern volatile uint32_t        ADC1BUF2CLR __attribute__((section("sfrs"),address(0xBF802124)));
extern volatile uint32_t        ADC1BUF2SET __attribute__((section("sfrs"),address(0xBF802128)));
extern volatile uint32_t        ADC1BUF2INV __attribute__((section("sfrs"),address(0xBF80212C)));
#define ADC1BUF3 ADC1BUF3
extern volatile uint32_t   ADC1BUF3 __attribute__((section("sfrs"), address(0xBF802130)));
extern volatile uint32_t        ADC1BUF3CLR __attribute__((section("sfrs"),address(0xBF802134)));
extern volatile uint32_t        ADC1BUF3SET __attribute__((section("sfrs"),address(0xBF802138)));
extern volatile uint32_t        ADC1BUF3INV __attribute__((section("sfrs"),address(0xBF80213C)));
#define ADC1BUF4 ADC1BUF4
extern volatile uint32_t   ADC1BUF4 __attribute__((section("sfrs"), address(0xBF802140)));
extern volatile uint32_t        ADC1BUF4CLR __attribute__((section("sfrs"),address(0xBF802144)));
extern volatile uint32_t        ADC1BUF4SET __attribute__((section("sfrs"),address(0xBF802148)));
extern volatile uint32_t        ADC1BUF4INV __attribute__((section("sfrs"),address(0xBF80214C)));
#define ADC1BUF5 ADC1BUF5
extern volatile uint32_t   ADC1BUF5 __attribute__((section("sfrs"), address(0xBF802150)));
extern volatile uint32_t        ADC1BUF5CLR __attribute__((section("sfrs"),address(0xBF802154)));
extern volatile uint32_t        ADC1BUF5SET __attribute__((section("sfrs"),address(0xBF802158)));
extern volatile uint32_t        ADC1BUF5INV __attribute__((section("sfrs"),address(0xBF80215C)));
#define ADC1BUF6 ADC1BUF6
extern volatile uint32_t   ADC1BUF6 __attribute__((section("sfrs"), address(0xBF802160)));
extern volatile uint32_t        ADC1BUF6CLR __attribute__((section("sfrs"),address(0xBF802164)));
extern volatile uint32_t        ADC1BUF6SET __attribute__((section("sfrs"),address(0xBF802168)));
extern volatile uint32_t        ADC1BUF6INV __attribute__((section("sfrs"),address(0xBF80216C)));
#define ADC1BUF7 ADC1BUF7
extern volatile uint32_t   ADC1BUF7 __attribute__((section("sfrs"), address(0xBF802170)));
extern volatile uint32_t        ADC1BUF7CLR __attribute__((section("sfrs"),address(0xBF802174)));
extern volatile uint32_t        ADC1BUF7SET __attribute__((section("sfrs"),address(0xBF802178)));
extern volatile uint32_t        ADC1BUF7INV __attribute__((section("sfrs"),address(0xBF80217C)));
#define ADC1BUF8 ADC1BUF8
extern volatile uint32_t   ADC1BUF8 __attribute__((section("sfrs"), address(0xBF802180)));
extern volatile uint32_t        ADC1BUF8CLR __attribute__((section("sfrs"),address(0xBF802184)));
extern volatile uint32_t        ADC1BUF8SET __attribute__((section("sfrs"),address(0xBF802188)));
extern volatile uint32_t        ADC1BUF8INV __attribute__((section("sfrs"),address(0xBF80218C)));
#define ADC1BUF9 ADC1BUF9
extern volatile uint32_t   ADC1BUF9 __attribute__((section("sfrs"), address(0xBF802190)));
extern volatile uint32_t        ADC1BUF9CLR __attribute__((section("sfrs"),address(0xBF802194)));
extern volatile uint32_t        ADC1BUF9SET __attribute__((section("sfrs"),address(0xBF802198)));
extern volatile uint32_t        ADC1BUF9INV __attribute__((section("sfrs"),address(0xBF80219C)));
#define ADC1BUF10 ADC1BUF10
extern volatile uint32_t   ADC1BUF10 __attribute__((section("sfrs"), address(0xBF8021A0)));
extern volatile uint32_t        ADC1BUF10CLR __attribute__((section("sfrs"),address(0xBF8021A4)));
extern volatile uint32_t        ADC1BUF10SET __attribute__((section("sfrs"),address(0xBF8021A8)));
extern volatile uint32_t        ADC1BUF10INV __attribute__((section("sfrs"),address(0xBF8021AC)));
#define ADC1BUF11 ADC1BUF11
extern volatile uint32_t   ADC1BUF11 __attribute__((section("sfrs"), address(0xBF8021B0)));
extern volatile uint32_t        ADC1BUF11CLR __attribute__((section("sfrs"),address(0xBF8021B4)));
extern volatile uint32_t        ADC1BUF11SET __attribute__((section("sfrs"),address(0xBF8021B8)));
extern volatile uint32_t        ADC1BUF11INV __attribute__((section("sfrs"),address(0xBF8021BC)));
#define ADC1BUF12 ADC1BUF12
extern volatile uint32_t   ADC1BUF12 __attribute__((section("sfrs"), address(0xBF8021C0)));
extern volatile uint32_t        ADC1BUF12CLR __attribute__((section("sfrs"),address(0xBF8021C4)));
extern volatile uint32_t        ADC1BUF12SET __attribute__((section("sfrs"),address(0xBF8021C8)));
extern volatile uint32_t        ADC1BUF12INV __attribute__((section("sfrs"),address(0xBF8021CC)));
#define ADC1BUF13 ADC1BUF13
extern volatile uint32_t   ADC1BUF13 __attribute__((section("sfrs"), address(0xBF8021D0)));
extern volatile uint32_t        ADC1BUF13CLR __attribute__((section("sfrs"),address(0xBF8021D4)));
extern volatile uint32_t        ADC1BUF13SET __attribute__((section("sfrs"),address(0xBF8021D8)));
extern volatile uint32_t        ADC1BUF13INV __attribute__((section("sfrs"),address(0xBF8021DC)));
#define ADC1BUF14 ADC1BUF14
extern volatile uint32_t   ADC1BUF14 __attribute__((section("sfrs"), address(0xBF8021E0)));
extern volatile uint32_t        ADC1BUF14CLR __attribute__((section("sfrs"),address(0xBF8021E4)));
extern volatile uint32_t        ADC1BUF14SET __attribute__((section("sfrs"),address(0xBF8021E8)));
extern volatile uint32_t        ADC1BUF14INV __attribute__((section("sfrs"),address(0xBF8021EC)));
#define ADC1BUF15 ADC1BUF15
extern volatile uint32_t   ADC1BUF15 __attribute__((section("sfrs"), address(0xBF8021F0)));
extern volatile uint32_t        ADC1BUF15CLR __attribute__((section("sfrs"),address(0xBF8021F4)));
extern volatile uint32_t        ADC1BUF15SET __attribute__((section("sfrs"),address(0xBF8021F8)));
extern volatile uint32_t        ADC1BUF15INV __attribute__((section("sfrs"),address(0xBF8021FC)));
#define ADC1BUF16 ADC1BUF16
extern volatile uint32_t   ADC1BUF16 __attribute__((section("sfrs"), address(0xBF802200)));
extern volatile uint32_t        ADC1BUF16CLR __attribute__((section("sfrs"),address(0xBF802204)));
extern volatile uint32_t        ADC1BUF16SET __attribute__((section("sfrs"),address(0xBF802208)));
extern volatile uint32_t        ADC1BUF16INV __attribute__((section("sfrs"),address(0xBF80220C)));
#define ADC1BUF17 ADC1BUF17
extern volatile uint32_t   ADC1BUF17 __attribute__((section("sfrs"), address(0xBF802210)));
extern volatile uint32_t        ADC1BUF17CLR __attribute__((section("sfrs"),address(0xBF802214)));
extern volatile uint32_t        ADC1BUF17SET __attribute__((section("sfrs"),address(0xBF802218)));
extern volatile uint32_t        ADC1BUF17INV __attribute__((section("sfrs"),address(0xBF80221C)));
#define ADC1BUF18 ADC1BUF18
extern volatile uint32_t   ADC1BUF18 __attribute__((section("sfrs"), address(0xBF802220)));
extern volatile uint32_t        ADC1BUF18CLR __attribute__((section("sfrs"),address(0xBF802224)));
extern volatile uint32_t        ADC1BUF18SET __attribute__((section("sfrs"),address(0xBF802228)));
extern volatile uint32_t        ADC1BUF18INV __attribute__((section("sfrs"),address(0xBF80222C)));
#define ADC1BUF19 ADC1BUF19
extern volatile uint32_t   ADC1BUF19 __attribute__((section("sfrs"), address(0xBF802230)));
extern volatile uint32_t        ADC1BUF19CLR __attribute__((section("sfrs"),address(0xBF802234)));
extern volatile uint32_t        ADC1BUF19SET __attribute__((section("sfrs"),address(0xBF802238)));
extern volatile uint32_t        ADC1BUF19INV __attribute__((section("sfrs"),address(0xBF80223C)));
#define ADC1BUF20 ADC1BUF20
extern volatile uint32_t   ADC1BUF20 __attribute__((section("sfrs"), address(0xBF802240)));
extern volatile uint32_t        ADC1BUF20CLR __attribute__((section("sfrs"),address(0xBF802244)));
extern volatile uint32_t        ADC1BUF20SET __attribute__((section("sfrs"),address(0xBF802248)));
extern volatile uint32_t        ADC1BUF20INV __attribute__((section("sfrs"),address(0xBF80224C)));
#define ADC1BUF21 ADC1BUF21
extern volatile uint32_t   ADC1BUF21 __attribute__((section("sfrs"), address(0xBF802250)));
extern volatile uint32_t        ADC1BUF21CLR __attribute__((section("sfrs"),address(0xBF802254)));
extern volatile uint32_t        ADC1BUF21SET __attribute__((section("sfrs"),address(0xBF802258)));
extern volatile uint32_t        ADC1BUF21INV __attribute__((section("sfrs"),address(0xBF80225C)));
#define AD1CON1 AD1CON1
extern volatile uint32_t   AD1CON1 __attribute__((section("sfrs"), address(0xBF802260)));
typedef struct {
  uint32_t DONE:1;
  uint32_t SAMP:1;
  uint32_t ASAM:1;
  uint32_t MODE12:1;
  uint32_t SSRC:4;
  uint32_t FORM:3;
  uint32_t :2;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
} __AD1CON1bits_t;
extern volatile __AD1CON1bits_t AD1CON1bits __asm__ ("AD1CON1") __attribute__((section("sfrs"), address(0xBF802260)));
extern volatile uint32_t        AD1CON1CLR __attribute__((section("sfrs"),address(0xBF802264)));
extern volatile uint32_t        AD1CON1SET __attribute__((section("sfrs"),address(0xBF802268)));
extern volatile uint32_t        AD1CON1INV __attribute__((section("sfrs"),address(0xBF80226C)));
#define AD1CON2 AD1CON2
extern volatile uint32_t   AD1CON2 __attribute__((section("sfrs"), address(0xBF802270)));
typedef struct {
  uint32_t :1;
  uint32_t BUFM:1;
  uint32_t SMPI:5;
  uint32_t BUFS:1;
  uint32_t :2;
  uint32_t CSCNA:1;
  uint32_t BUFREGEN:1;
  uint32_t OFFCAL:1;
  uint32_t VCFG:3;
} __AD1CON2bits_t;
extern volatile __AD1CON2bits_t AD1CON2bits __asm__ ("AD1CON2") __attribute__((section("sfrs"), address(0xBF802270)));
extern volatile uint32_t        AD1CON2CLR __attribute__((section("sfrs"),address(0xBF802274)));
extern volatile uint32_t        AD1CON2SET __attribute__((section("sfrs"),address(0xBF802278)));
extern volatile uint32_t        AD1CON2INV __attribute__((section("sfrs"),address(0xBF80227C)));
#define AD1CON3 AD1CON3
extern volatile uint32_t   AD1CON3 __attribute__((section("sfrs"), address(0xBF802280)));
typedef struct {
  uint32_t ADCS:8;
  uint32_t SAMC:5;
  uint32_t :1;
  uint32_t EXTSAM:1;
  uint32_t ADRC:1;
} __AD1CON3bits_t;
extern volatile __AD1CON3bits_t AD1CON3bits __asm__ ("AD1CON3") __attribute__((section("sfrs"), address(0xBF802280)));
extern volatile uint32_t        AD1CON3CLR __attribute__((section("sfrs"),address(0xBF802284)));
extern volatile uint32_t        AD1CON3SET __attribute__((section("sfrs"),address(0xBF802288)));
extern volatile uint32_t        AD1CON3INV __attribute__((section("sfrs"),address(0xBF80228C)));
#define AD1CHS AD1CHS
extern volatile uint32_t   AD1CHS __attribute__((section("sfrs"), address(0xBF802290)));
typedef struct {
  uint32_t CH0SA:5;
  uint32_t CH0NA:3;
} __AD1CHSbits_t;
extern volatile __AD1CHSbits_t AD1CHSbits __asm__ ("AD1CHS") __attribute__((section("sfrs"), address(0xBF802290)));
extern volatile uint32_t        AD1CHSCLR __attribute__((section("sfrs"),address(0xBF802294)));
extern volatile uint32_t        AD1CHSSET __attribute__((section("sfrs"),address(0xBF802298)));
extern volatile uint32_t        AD1CHSINV __attribute__((section("sfrs"),address(0xBF80229C)));
#define AD1CSS AD1CSS
extern volatile uint32_t   AD1CSS __attribute__((section("sfrs"), address(0xBF8022A0)));
typedef struct {
  uint32_t CSS0:1;
  uint32_t CSS1:1;
  uint32_t CSS2:1;
  uint32_t CSS3:1;
  uint32_t CSS4:1;
  uint32_t CSS5:1;
  uint32_t CSS6:1;
  uint32_t CSS7:1;
  uint32_t CSS8:1;
  uint32_t CSS9:1;
  uint32_t CSS10:1;
  uint32_t CSS11:1;
  uint32_t CSS12:1;
  uint32_t CSS13:1;
  uint32_t CSS14:1;
  uint32_t CSS15:1;
  uint32_t CSS16:1;
  uint32_t CSS17:1;
  uint32_t CSS18:1;
  uint32_t CSS19:1;
  uint32_t CSS20:1;
  uint32_t CSS21:1;
  uint32_t CSS22:1;
  uint32_t CSS23:1;
  uint32_t CSS24:1;
  uint32_t CSS25:1;
  uint32_t CSS26:1;
  uint32_t CSS27:1;
  uint32_t CSS28:1;
  uint32_t CSS29:1;
  uint32_t CSS30:1;
  uint32_t CSS31:1;
} __AD1CSSbits_t;
extern volatile __AD1CSSbits_t AD1CSSbits __asm__ ("AD1CSS") __attribute__((section("sfrs"), address(0xBF8022A0)));
extern volatile uint32_t        AD1CSSCLR __attribute__((section("sfrs"),address(0xBF8022A4)));
extern volatile uint32_t        AD1CSSSET __attribute__((section("sfrs"),address(0xBF8022A8)));
extern volatile uint32_t        AD1CSSINV __attribute__((section("sfrs"),address(0xBF8022AC)));
#define AD1CON5 AD1CON5
extern volatile uint32_t   AD1CON5 __attribute__((section("sfrs"), address(0xBF8022C0)));
typedef struct {
  uint32_t CM:2;
  uint32_t WM:2;
  uint32_t :4;
  uint32_t ASINT:2;
  uint32_t :2;
  uint32_t BGREQ:1;
  uint32_t :1;
  uint32_t LPEN:1;
  uint32_t ASEN:1;
} __AD1CON5bits_t;
extern volatile __AD1CON5bits_t AD1CON5bits __asm__ ("AD1CON5") __attribute__((section("sfrs"), address(0xBF8022C0)));
extern volatile uint32_t        AD1CON5CLR __attribute__((section("sfrs"),address(0xBF8022C4)));
extern volatile uint32_t        AD1CON5SET __attribute__((section("sfrs"),address(0xBF8022C8)));
extern volatile uint32_t        AD1CON5INV __attribute__((section("sfrs"),address(0xBF8022CC)));
#define AD1CHIT AD1CHIT
extern volatile uint32_t   AD1CHIT __attribute__((section("sfrs"), address(0xBF8022D0)));
typedef struct {
  uint32_t CHH0:1;
  uint32_t CHH1:1;
  uint32_t CHH2:1;
  uint32_t CHH3:1;
  uint32_t CHH4:1;
  uint32_t CHH5:1;
  uint32_t CHH6:1;
  uint32_t CHH7:1;
  uint32_t CHH8:1;
  uint32_t CHH9:1;
  uint32_t CHH10:1;
  uint32_t CHH11:1;
  uint32_t CHH12:1;
  uint32_t :1;
  uint32_t CHH14:1;
  uint32_t CHH15:1;
  uint32_t CHH16:1;
  uint32_t CHH17:1;
  uint32_t CHH18:1;
  uint32_t CHH19:1;
} __AD1CHITbits_t;
extern volatile __AD1CHITbits_t AD1CHITbits __asm__ ("AD1CHIT") __attribute__((section("sfrs"), address(0xBF8022D0)));
extern volatile uint32_t        AD1CHITCLR __attribute__((section("sfrs"),address(0xBF8022D4)));
extern volatile uint32_t        AD1CHITSET __attribute__((section("sfrs"),address(0xBF8022D8)));
extern volatile uint32_t        AD1CHITINV __attribute__((section("sfrs"),address(0xBF8022DC)));
#define CMSTAT CMSTAT
extern volatile uint32_t   CMSTAT __attribute__((section("sfrs"), address(0xBF802300)));
typedef struct {
  uint32_t C1OUT:1;
  uint32_t C2OUT:1;
  uint32_t C3OUT:1;
  uint32_t :5;
  uint32_t CVREFSEL:1;
  uint32_t :4;
  uint32_t SIDL:1;
  uint32_t :2;
  uint32_t C1EVT:1;
  uint32_t C2EVT:1;
  uint32_t C3EVT:1;
} __CMSTATbits_t;
extern volatile __CMSTATbits_t CMSTATbits __asm__ ("CMSTAT") __attribute__((section("sfrs"), address(0xBF802300)));
extern volatile uint32_t        CMSTATCLR __attribute__((section("sfrs"),address(0xBF802304)));
extern volatile uint32_t        CMSTATSET __attribute__((section("sfrs"),address(0xBF802308)));
extern volatile uint32_t        CMSTATINV __attribute__((section("sfrs"),address(0xBF80230C)));
#define CM1CON CM1CON
extern volatile uint32_t   CM1CON __attribute__((section("sfrs"), address(0xBF802310)));
typedef struct {
  uint32_t CCH:2;
  uint32_t :2;
  uint32_t CREF:1;
  uint32_t :1;
  uint32_t EVPOL:2;
  uint32_t COUT:1;
  uint32_t CEVT:1;
  uint32_t :3;
  uint32_t CPOL:1;
  uint32_t COE:1;
  uint32_t ON:1;
} __CM1CONbits_t;
extern volatile __CM1CONbits_t CM1CONbits __asm__ ("CM1CON") __attribute__((section("sfrs"), address(0xBF802310)));
extern volatile uint32_t        CM1CONCLR __attribute__((section("sfrs"),address(0xBF802314)));
extern volatile uint32_t        CM1CONSET __attribute__((section("sfrs"),address(0xBF802318)));
extern volatile uint32_t        CM1CONINV __attribute__((section("sfrs"),address(0xBF80231C)));
#define CM2CON CM2CON
extern volatile uint32_t   CM2CON __attribute__((section("sfrs"), address(0xBF802330)));
typedef struct {
  uint32_t CCH:2;
  uint32_t :2;
  uint32_t CREF:1;
  uint32_t :1;
  uint32_t EVPOL:2;
  uint32_t COUT:1;
  uint32_t CEVT:1;
  uint32_t :3;
  uint32_t CPOL:1;
  uint32_t COE:1;
  uint32_t ON:1;
} __CM2CONbits_t;
extern volatile __CM2CONbits_t CM2CONbits __asm__ ("CM2CON") __attribute__((section("sfrs"), address(0xBF802330)));
extern volatile uint32_t        CM2CONCLR __attribute__((section("sfrs"),address(0xBF802334)));
extern volatile uint32_t        CM2CONSET __attribute__((section("sfrs"),address(0xBF802338)));
extern volatile uint32_t        CM2CONINV __attribute__((section("sfrs"),address(0xBF80233C)));
#define CM3CON CM3CON
extern volatile uint32_t   CM3CON __attribute__((section("sfrs"), address(0xBF802350)));
typedef struct {
  uint32_t CCH:2;
  uint32_t :2;
  uint32_t CREF:1;
  uint32_t :1;
  uint32_t EVPOL:2;
  uint32_t COUT:1;
  uint32_t CEVT:1;
  uint32_t :3;
  uint32_t CPOL:1;
  uint32_t COE:1;
  uint32_t ON:1;
} __CM3CONbits_t;
extern volatile __CM3CONbits_t CM3CONbits __asm__ ("CM3CON") __attribute__((section("sfrs"), address(0xBF802350)));
extern volatile uint32_t        CM3CONCLR __attribute__((section("sfrs"),address(0xBF802354)));
extern volatile uint32_t        CM3CONSET __attribute__((section("sfrs"),address(0xBF802358)));
extern volatile uint32_t        CM3CONINV __attribute__((section("sfrs"),address(0xBF80235C)));
#define DAC1CON DAC1CON
extern volatile uint32_t   DAC1CON __attribute__((section("sfrs"), address(0xBF802380)));
typedef struct {
  uint32_t REFSEL:2;
  uint32_t :6;
  uint32_t DACOE:1;
  uint32_t :6;
  uint32_t ON:1;
  uint32_t DACDAT:16;
} __DAC1CONbits_t;
extern volatile __DAC1CONbits_t DAC1CONbits __asm__ ("DAC1CON") __attribute__((section("sfrs"), address(0xBF802380)));
extern volatile uint32_t        DAC1CONCLR __attribute__((section("sfrs"),address(0xBF802384)));
extern volatile uint32_t        DAC1CONSET __attribute__((section("sfrs"),address(0xBF802388)));
extern volatile uint32_t        DAC1CONINV __attribute__((section("sfrs"),address(0xBF80238C)));
#define CLC1CON CLC1CON
extern volatile uint32_t   CLC1CON __attribute__((section("sfrs"), address(0xBF802480)));
typedef struct {
  uint32_t MODE:3;
  uint32_t :2;
  uint32_t LCPOL:1;
  uint32_t LCOUT:1;
  uint32_t LCOE:1;
  uint32_t :2;
  uint32_t INTN:1;
  uint32_t INTP:1;
  uint32_t :3;
  uint32_t ON:1;
  uint32_t G1POL:1;
  uint32_t G2POL:1;
  uint32_t G3POL:1;
  uint32_t G4POL:1;
} __CLC1CONbits_t;
extern volatile __CLC1CONbits_t CLC1CONbits __asm__ ("CLC1CON") __attribute__((section("sfrs"), address(0xBF802480)));
extern volatile uint32_t        CLC1CONCLR __attribute__((section("sfrs"),address(0xBF802484)));
extern volatile uint32_t        CLC1CONSET __attribute__((section("sfrs"),address(0xBF802488)));
extern volatile uint32_t        CLC1CONINV __attribute__((section("sfrs"),address(0xBF80248C)));
#define CLC1SEL CLC1SEL
extern volatile uint32_t   CLC1SEL __attribute__((section("sfrs"), address(0xBF802490)));
typedef struct {
  uint32_t DS1:3;
  uint32_t :1;
  uint32_t DS2:3;
  uint32_t :1;
  uint32_t DS3:3;
  uint32_t :1;
  uint32_t DS4:3;
} __CLC1SELbits_t;
extern volatile __CLC1SELbits_t CLC1SELbits __asm__ ("CLC1SEL") __attribute__((section("sfrs"), address(0xBF802490)));
extern volatile uint32_t        CLC1SELCLR __attribute__((section("sfrs"),address(0xBF802494)));
extern volatile uint32_t        CLC1SELSET __attribute__((section("sfrs"),address(0xBF802498)));
extern volatile uint32_t        CLC1SELINV __attribute__((section("sfrs"),address(0xBF80249C)));
#define CLC1GLS CLC1GLS
extern volatile uint32_t   CLC1GLS __attribute__((section("sfrs"), address(0xBF8024A0)));
typedef struct {
  uint32_t G1D1N:1;
  uint32_t G1D1T:1;
  uint32_t G1D2N:1;
  uint32_t G1D2T:1;
  uint32_t G1D3N:1;
  uint32_t G1D3T:1;
  uint32_t G1D4N:1;
  uint32_t G1D4T:1;
  uint32_t G2D1N:1;
  uint32_t G2D1T:1;
  uint32_t G2D2N:1;
  uint32_t G2D2T:1;
  uint32_t G2D3N:1;
  uint32_t G2D3T:1;
  uint32_t G2D4N:1;
  uint32_t G2D4T:1;
  uint32_t G3D1N:1;
  uint32_t G3D1T:1;
  uint32_t G3D2N:1;
  uint32_t G3D2T:1;
  uint32_t G3D3N:1;
  uint32_t G3D3T:1;
  uint32_t G3D4N:1;
  uint32_t G3D4T:1;
  uint32_t G4D1N:1;
  uint32_t G4D1T:1;
  uint32_t G4D2N:1;
  uint32_t G4D2T:1;
  uint32_t G4D3N:1;
  uint32_t G4D3T:1;
  uint32_t G4D4N:1;
  uint32_t G4D4T:1;
} __CLC1GLSbits_t;
extern volatile __CLC1GLSbits_t CLC1GLSbits __asm__ ("CLC1GLS") __attribute__((section("sfrs"), address(0xBF8024A0)));
extern volatile uint32_t        CLC1GLSCLR __attribute__((section("sfrs"),address(0xBF8024A4)));
extern volatile uint32_t        CLC1GLSSET __attribute__((section("sfrs"),address(0xBF8024A8)));
extern volatile uint32_t        CLC1GLSINV __attribute__((section("sfrs"),address(0xBF8024AC)));
#define CLC2CON CLC2CON
extern volatile uint32_t   CLC2CON __attribute__((section("sfrs"), address(0xBF802500)));
typedef struct {
  uint32_t MODE:3;
  uint32_t :2;
  uint32_t LCPOL:1;
  uint32_t LCOUT:1;
  uint32_t LCOE:1;
  uint32_t :2;
  uint32_t INTN:1;
  uint32_t INTP:1;
  uint32_t :3;
  uint32_t ON:1;
  uint32_t G1POL:1;
  uint32_t G2POL:1;
  uint32_t G3POL:1;
  uint32_t G4POL:1;
} __CLC2CONbits_t;
extern volatile __CLC2CONbits_t CLC2CONbits __asm__ ("CLC2CON") __attribute__((section("sfrs"), address(0xBF802500)));
extern volatile uint32_t        CLC2CONCLR __attribute__((section("sfrs"),address(0xBF802504)));
extern volatile uint32_t        CLC2CONSET __attribute__((section("sfrs"),address(0xBF802508)));
extern volatile uint32_t        CLC2CONINV __attribute__((section("sfrs"),address(0xBF80250C)));
#define CLC2SEL CLC2SEL
extern volatile uint32_t   CLC2SEL __attribute__((section("sfrs"), address(0xBF802510)));
typedef struct {
  uint32_t DS1:3;
  uint32_t :1;
  uint32_t DS2:3;
  uint32_t :1;
  uint32_t DS3:3;
  uint32_t :1;
  uint32_t DS4:3;
} __CLC2SELbits_t;
extern volatile __CLC2SELbits_t CLC2SELbits __asm__ ("CLC2SEL") __attribute__((section("sfrs"), address(0xBF802510)));
extern volatile uint32_t        CLC2SELCLR __attribute__((section("sfrs"),address(0xBF802514)));
extern volatile uint32_t        CLC2SELSET __attribute__((section("sfrs"),address(0xBF802518)));
extern volatile uint32_t        CLC2SELINV __attribute__((section("sfrs"),address(0xBF80251C)));
#define CLC2GLS CLC2GLS
extern volatile uint32_t   CLC2GLS __attribute__((section("sfrs"), address(0xBF802520)));
typedef struct {
  uint32_t G1D1N:1;
  uint32_t G1D1T:1;
  uint32_t G1D2N:1;
  uint32_t G1D2T:1;
  uint32_t G1D3N:1;
  uint32_t G1D3T:1;
  uint32_t G1D4N:1;
  uint32_t G1D4T:1;
  uint32_t G2D1N:1;
  uint32_t G2D1T:1;
  uint32_t G2D2N:1;
  uint32_t G2D2T:1;
  uint32_t G2D3N:1;
  uint32_t G2D3T:1;
  uint32_t G2D4N:1;
  uint32_t G2D4T:1;
  uint32_t G3D1N:1;
  uint32_t G3D1T:1;
  uint32_t G3D2N:1;
  uint32_t G3D2T:1;
  uint32_t G3D3N:1;
  uint32_t G3D3T:1;
  uint32_t G3D4N:1;
  uint32_t G3D4T:1;
  uint32_t G4D1N:1;
  uint32_t G4D1T:1;
  uint32_t G4D2N:1;
  uint32_t G4D2T:1;
  uint32_t G4D3N:1;
  uint32_t G4D3T:1;
  uint32_t G4D4N:1;
  uint32_t G4D4T:1;
} __CLC2GLSbits_t;
extern volatile __CLC2GLSbits_t CLC2GLSbits __asm__ ("CLC2GLS") __attribute__((section("sfrs"), address(0xBF802520)));
extern volatile uint32_t        CLC2GLSCLR __attribute__((section("sfrs"),address(0xBF802524)));
extern volatile uint32_t        CLC2GLSSET __attribute__((section("sfrs"),address(0xBF802528)));
extern volatile uint32_t        CLC2GLSINV __attribute__((section("sfrs"),address(0xBF80252C)));
#define CLC3CON CLC3CON
extern volatile uint32_t   CLC3CON __attribute__((section("sfrs"), address(0xBF802580)));
typedef struct {
  uint32_t MODE:3;
  uint32_t :2;
  uint32_t LCPOL:1;
  uint32_t LCOUT:1;
  uint32_t LCOE:1;
  uint32_t :2;
  uint32_t INTN:1;
  uint32_t INTP:1;
  uint32_t :3;
  uint32_t ON:1;
  uint32_t G1POL:1;
  uint32_t G2POL:1;
  uint32_t G3POL:1;
  uint32_t G4POL:1;
} __CLC3CONbits_t;
extern volatile __CLC3CONbits_t CLC3CONbits __asm__ ("CLC3CON") __attribute__((section("sfrs"), address(0xBF802580)));
extern volatile uint32_t        CLC3CONCLR __attribute__((section("sfrs"),address(0xBF802584)));
extern volatile uint32_t        CLC3CONSET __attribute__((section("sfrs"),address(0xBF802588)));
extern volatile uint32_t        CLC3CONINV __attribute__((section("sfrs"),address(0xBF80258C)));
#define CLC3SEL CLC3SEL
extern volatile uint32_t   CLC3SEL __attribute__((section("sfrs"), address(0xBF802590)));
typedef struct {
  uint32_t DS1:3;
  uint32_t :1;
  uint32_t DS2:3;
  uint32_t :1;
  uint32_t DS3:3;
  uint32_t :1;
  uint32_t DS4:3;
} __CLC3SELbits_t;
extern volatile __CLC3SELbits_t CLC3SELbits __asm__ ("CLC3SEL") __attribute__((section("sfrs"), address(0xBF802590)));
extern volatile uint32_t        CLC3SELCLR __attribute__((section("sfrs"),address(0xBF802594)));
extern volatile uint32_t        CLC3SELSET __attribute__((section("sfrs"),address(0xBF802598)));
extern volatile uint32_t        CLC3SELINV __attribute__((section("sfrs"),address(0xBF80259C)));
#define CLC3GLS CLC3GLS
extern volatile uint32_t   CLC3GLS __attribute__((section("sfrs"), address(0xBF8025A0)));
typedef struct {
  uint32_t G1D1N:1;
  uint32_t G1D1T:1;
  uint32_t G1D2N:1;
  uint32_t G1D2T:1;
  uint32_t G1D3N:1;
  uint32_t G1D3T:1;
  uint32_t G1D4N:1;
  uint32_t G1D4T:1;
  uint32_t G2D1N:1;
  uint32_t G2D1T:1;
  uint32_t G2D2N:1;
  uint32_t G2D2T:1;
  uint32_t G2D3N:1;
  uint32_t G2D3T:1;
  uint32_t G2D4N:1;
  uint32_t G2D4T:1;
  uint32_t G3D1N:1;
  uint32_t G3D1T:1;
  uint32_t G3D2N:1;
  uint32_t G3D2T:1;
  uint32_t G3D3N:1;
  uint32_t G3D3T:1;
  uint32_t G3D4N:1;
  uint32_t G3D4T:1;
  uint32_t G4D1N:1;
  uint32_t G4D1T:1;
  uint32_t G4D2N:1;
  uint32_t G4D2T:1;
  uint32_t G4D3N:1;
  uint32_t G4D3T:1;
  uint32_t G4D4N:1;
  uint32_t G4D4T:1;
} __CLC3GLSbits_t;
extern volatile __CLC3GLSbits_t CLC3GLSbits __asm__ ("CLC3GLS") __attribute__((section("sfrs"), address(0xBF8025A0)));
extern volatile uint32_t        CLC3GLSCLR __attribute__((section("sfrs"),address(0xBF8025A4)));
extern volatile uint32_t        CLC3GLSSET __attribute__((section("sfrs"),address(0xBF8025A8)));
extern volatile uint32_t        CLC3GLSINV __attribute__((section("sfrs"),address(0xBF8025AC)));
#define CLC4CON CLC4CON
extern volatile uint32_t   CLC4CON __attribute__((section("sfrs"), address(0xBF802600)));
typedef struct {
  uint32_t MODE:3;
  uint32_t :2;
  uint32_t LCPOL:1;
  uint32_t LCOUT:1;
  uint32_t LCOE:1;
  uint32_t :2;
  uint32_t INTN:1;
  uint32_t INTP:1;
  uint32_t :3;
  uint32_t ON:1;
  uint32_t G1POL:1;
  uint32_t G2POL:1;
  uint32_t G3POL:1;
  uint32_t G4POL:1;
} __CLC4CONbits_t;
extern volatile __CLC4CONbits_t CLC4CONbits __asm__ ("CLC4CON") __attribute__((section("sfrs"), address(0xBF802600)));
extern volatile uint32_t        CLC4CONCLR __attribute__((section("sfrs"),address(0xBF802604)));
extern volatile uint32_t        CLC4CONSET __attribute__((section("sfrs"),address(0xBF802608)));
extern volatile uint32_t        CLC4CONINV __attribute__((section("sfrs"),address(0xBF80260C)));
#define CLC4SEL CLC4SEL
extern volatile uint32_t   CLC4SEL __attribute__((section("sfrs"), address(0xBF802610)));
typedef struct {
  uint32_t DS1:3;
  uint32_t :1;
  uint32_t DS2:3;
  uint32_t :1;
  uint32_t DS3:3;
  uint32_t :1;
  uint32_t DS4:3;
} __CLC4SELbits_t;
extern volatile __CLC4SELbits_t CLC4SELbits __asm__ ("CLC4SEL") __attribute__((section("sfrs"), address(0xBF802610)));
extern volatile uint32_t        CLC4SELCLR __attribute__((section("sfrs"),address(0xBF802614)));
extern volatile uint32_t        CLC4SELSET __attribute__((section("sfrs"),address(0xBF802618)));
extern volatile uint32_t        CLC4SELINV __attribute__((section("sfrs"),address(0xBF80261C)));
#define CLC4GLS CLC4GLS
extern volatile uint32_t   CLC4GLS __attribute__((section("sfrs"), address(0xBF802620)));
typedef struct {
  uint32_t G1D1N:1;
  uint32_t G1D1T:1;
  uint32_t G1D2N:1;
  uint32_t G1D2T:1;
  uint32_t G1D3N:1;
  uint32_t G1D3T:1;
  uint32_t G1D4N:1;
  uint32_t G1D4T:1;
  uint32_t G2D1N:1;
  uint32_t G2D1T:1;
  uint32_t G2D2N:1;
  uint32_t G2D2T:1;
  uint32_t G2D3N:1;
  uint32_t G2D3T:1;
  uint32_t G2D4N:1;
  uint32_t G2D4T:1;
  uint32_t G3D1N:1;
  uint32_t G3D1T:1;
  uint32_t G3D2N:1;
  uint32_t G3D2T:1;
  uint32_t G3D3N:1;
  uint32_t G3D3T:1;
  uint32_t G3D4N:1;
  uint32_t G3D4T:1;
  uint32_t G4D1N:1;
  uint32_t G4D1T:1;
  uint32_t G4D2N:1;
  uint32_t G4D2T:1;
  uint32_t G4D3N:1;
  uint32_t G4D3T:1;
  uint32_t G4D4N:1;
  uint32_t G4D4T:1;
} __CLC4GLSbits_t;
extern volatile __CLC4GLSbits_t CLC4GLSbits __asm__ ("CLC4GLS") __attribute__((section("sfrs"), address(0xBF802620)));
extern volatile uint32_t        CLC4GLSCLR __attribute__((section("sfrs"),address(0xBF802624)));
extern volatile uint32_t        CLC4GLSSET __attribute__((section("sfrs"),address(0xBF802628)));
extern volatile uint32_t        CLC4GLSINV __attribute__((section("sfrs"),address(0xBF80262C)));
#define OSCCON OSCCON
extern volatile uint32_t   OSCCON __attribute__((section("sfrs"), address(0xBF802680)));
typedef struct {
  uint32_t OSWEN:1;
  uint32_t SOSCEN:1;
  uint32_t :1;
  uint32_t CF:1;
  uint32_t SLPEN:1;
  uint32_t :2;
  uint32_t CLKLOCK:1;
  uint32_t NOSC:3;
  uint32_t :1;
  uint32_t COSC:3;
  uint32_t :6;
  uint32_t SLP2SPD:1;
  uint32_t :1;
  uint32_t DRMEN:1;
  uint32_t FRCDIV:3;
} __OSCCONbits_t;
extern volatile __OSCCONbits_t OSCCONbits __asm__ ("OSCCON") __attribute__((section("sfrs"), address(0xBF802680)));
extern volatile uint32_t        OSCCONCLR __attribute__((section("sfrs"),address(0xBF802684)));
extern volatile uint32_t        OSCCONSET __attribute__((section("sfrs"),address(0xBF802688)));
extern volatile uint32_t        OSCCONINV __attribute__((section("sfrs"),address(0xBF80268C)));
#define SPLLCON SPLLCON
extern volatile uint32_t   SPLLCON __attribute__((section("sfrs"), address(0xBF8026A0)));
typedef struct {
  uint32_t :7;
  uint32_t PLLICLK:1;
  uint32_t :8;
  uint32_t PLLMULT:7;
  uint32_t :1;
  uint32_t PLLODIV:3;
} __SPLLCONbits_t;
extern volatile __SPLLCONbits_t SPLLCONbits __asm__ ("SPLLCON") __attribute__((section("sfrs"), address(0xBF8026A0)));
extern volatile uint32_t        SPLLCONCLR __attribute__((section("sfrs"),address(0xBF8026A4)));
extern volatile uint32_t        SPLLCONSET __attribute__((section("sfrs"),address(0xBF8026A8)));
extern volatile uint32_t        SPLLCONINV __attribute__((section("sfrs"),address(0xBF8026AC)));
#define RCON RCON
extern volatile uint32_t   RCON __attribute__((section("sfrs"), address(0xBF8026E0)));
typedef struct {
  uint32_t POR:1;
  uint32_t BOR:1;
  uint32_t IDLE:1;
  uint32_t SLEEP:1;
  uint32_t WDTO:1;
  uint32_t :1;
  uint32_t SWR:1;
  uint32_t EXTR:1;
  uint32_t :1;
  uint32_t CMR:1;
  uint32_t :16;
  uint32_t BCFGFAIL:1;
  uint32_t BCFGERR:1;
  uint32_t :2;
  uint32_t PORCORE:1;
  uint32_t PORIO:1;
} __RCONbits_t;
extern volatile __RCONbits_t RCONbits __asm__ ("RCON") __attribute__((section("sfrs"), address(0xBF8026E0)));
extern volatile uint32_t        RCONCLR __attribute__((section("sfrs"),address(0xBF8026E4)));
extern volatile uint32_t        RCONSET __attribute__((section("sfrs"),address(0xBF8026E8)));
extern volatile uint32_t        RCONINV __attribute__((section("sfrs"),address(0xBF8026EC)));
#define RSWRST RSWRST
extern volatile uint32_t   RSWRST __attribute__((section("sfrs"), address(0xBF8026F0)));
typedef struct {
  uint32_t SWRST:1;
} __RSWRSTbits_t;
extern volatile __RSWRSTbits_t RSWRSTbits __asm__ ("RSWRST") __attribute__((section("sfrs"), address(0xBF8026F0)));
extern volatile uint32_t        RSWRSTCLR __attribute__((section("sfrs"),address(0xBF8026F4)));
extern volatile uint32_t        RSWRSTSET __attribute__((section("sfrs"),address(0xBF8026F8)));
extern volatile uint32_t        RSWRSTINV __attribute__((section("sfrs"),address(0xBF8026FC)));
#define RNMICON RNMICON
extern volatile uint32_t   RNMICON __attribute__((section("sfrs"), address(0xBF802700)));
typedef union {
  struct {
    uint32_t NMICNT:16;
    uint32_t WDTS:1;
    uint32_t CF:1;
    uint32_t LVD:1;
    uint32_t GNMI:1;
    uint32_t :3;
    uint32_t SWNMI:1;
    uint32_t WDTO:1;
  };
  struct {
    uint32_t :24;
    uint32_t WDTR:1;
  };
} __RNMICONbits_t;
extern volatile __RNMICONbits_t RNMICONbits __asm__ ("RNMICON") __attribute__((section("sfrs"), address(0xBF802700)));
extern volatile uint32_t        RNMICONCLR __attribute__((section("sfrs"),address(0xBF802704)));
extern volatile uint32_t        RNMICONSET __attribute__((section("sfrs"),address(0xBF802708)));
extern volatile uint32_t        RNMICONINV __attribute__((section("sfrs"),address(0xBF80270C)));
#define PWRCON PWRCON
extern volatile uint32_t   PWRCON __attribute__((section("sfrs"), address(0xBF802710)));
typedef struct {
  uint32_t VREGS:1;
  uint32_t RETEN:1;
  uint32_t SBOREN:1;
} __PWRCONbits_t;
extern volatile __PWRCONbits_t PWRCONbits __asm__ ("PWRCON") __attribute__((section("sfrs"), address(0xBF802710)));
extern volatile uint32_t        PWRCONCLR __attribute__((section("sfrs"),address(0xBF802714)));
extern volatile uint32_t        PWRCONSET __attribute__((section("sfrs"),address(0xBF802718)));
extern volatile uint32_t        PWRCONINV __attribute__((section("sfrs"),address(0xBF80271C)));
#define REFO1CON REFO1CON
extern volatile uint32_t   REFO1CON __attribute__((section("sfrs"), address(0xBF802720)));
typedef struct {
  uint32_t ROSEL:4;
  uint32_t :4;
  uint32_t ACTIVE:1;
  uint32_t DIVSWEN:1;
  uint32_t :1;
  uint32_t RSLP:1;
  uint32_t OE:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
  uint32_t RODIV:15;
} __REFO1CONbits_t;
extern volatile __REFO1CONbits_t REFO1CONbits __asm__ ("REFO1CON") __attribute__((section("sfrs"), address(0xBF802720)));
extern volatile uint32_t        REFO1CONCLR __attribute__((section("sfrs"),address(0xBF802724)));
extern volatile uint32_t        REFO1CONSET __attribute__((section("sfrs"),address(0xBF802728)));
extern volatile uint32_t        REFO1CONINV __attribute__((section("sfrs"),address(0xBF80272C)));
#define REFO1TRIM REFO1TRIM
extern volatile uint32_t   REFO1TRIM __attribute__((section("sfrs"), address(0xBF802730)));
typedef struct {
  uint32_t :23;
  uint32_t ROTRIM:9;
} __REFO1TRIMbits_t;
extern volatile __REFO1TRIMbits_t REFO1TRIMbits __asm__ ("REFO1TRIM") __attribute__((section("sfrs"), address(0xBF802730)));
extern volatile uint32_t        REFO1TRIMCLR __attribute__((section("sfrs"),address(0xBF802734)));
extern volatile uint32_t        REFO1TRIMSET __attribute__((section("sfrs"),address(0xBF802738)));
extern volatile uint32_t        REFO1TRIMINV __attribute__((section("sfrs"),address(0xBF80273C)));
#define CLKSTAT CLKSTAT
extern volatile uint32_t   CLKSTAT __attribute__((section("sfrs"), address(0xBF802770)));
typedef union {
  struct {
    uint32_t FRCRDY:1;
    uint32_t SPDIVRDY:1;
    uint32_t POSCRDY:1;
    uint32_t :1;
    uint32_t SOSCRDY:1;
    uint32_t LPRCRDY:1;
    uint32_t :1;
    uint32_t SPLLRDY:1;
  };
  struct {
    uint32_t :1;
    uint32_t DIVSPLLRDY:1;
  };
} __CLKSTATbits_t;
extern volatile __CLKSTATbits_t CLKSTATbits __asm__ ("CLKSTAT") __attribute__((section("sfrs"), address(0xBF802770)));
extern volatile uint32_t        CLKSTATCLR __attribute__((section("sfrs"),address(0xBF802774)));
extern volatile uint32_t        CLKSTATSET __attribute__((section("sfrs"),address(0xBF802778)));
extern volatile uint32_t        CLKSTATINV __attribute__((section("sfrs"),address(0xBF80277C)));
#define OSCTUN OSCTUN
extern volatile uint32_t   OSCTUN __attribute__((section("sfrs"), address(0xBF802880)));
typedef struct {
  uint32_t TUN:6;
  uint32_t :2;
  uint32_t ORPOL:1;
  uint32_t OR:1;
  uint32_t POL:1;
  uint32_t LOCK:1;
  uint32_t SRC:1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
} __OSCTUNbits_t;
extern volatile __OSCTUNbits_t OSCTUNbits __asm__ ("OSCTUN") __attribute__((section("sfrs"), address(0xBF802880)));
extern volatile uint32_t        OSCTUNCLR __attribute__((section("sfrs"),address(0xBF802884)));
extern volatile uint32_t        OSCTUNSET __attribute__((section("sfrs"),address(0xBF802888)));
extern volatile uint32_t        OSCTUNINV __attribute__((section("sfrs"),address(0xBF80288C)));
#define ANCFG ANCFG
extern volatile uint32_t   ANCFG __attribute__((section("sfrs"), address(0xBF802910)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t BGCMP:1;
    uint32_t BGADC:1;
  };
  struct {
    uint32_t :1;
    uint32_t VBGCMP:1;
    uint32_t VBGADC:1;
  };
} __ANCFGbits_t;
extern volatile __ANCFGbits_t ANCFGbits __asm__ ("ANCFG") __attribute__((section("sfrs"), address(0xBF802910)));
extern volatile uint32_t        ANCFGCLR __attribute__((section("sfrs"),address(0xBF802914)));
extern volatile uint32_t        ANCFGSET __attribute__((section("sfrs"),address(0xBF802918)));
extern volatile uint32_t        ANCFGINV __attribute__((section("sfrs"),address(0xBF80291C)));
#define HLVDCON HLVDCON
extern volatile uint32_t   HLVDCON __attribute__((section("sfrs"), address(0xBF802920)));
typedef struct {
  uint32_t HLVDL:4;
  uint32_t :4;
  uint32_t HLEVT:1;
  uint32_t IRVST:1;
  uint32_t BGVST:1;
  uint32_t VDIR:1;
  uint32_t :1;
  uint32_t SIDL:1;
  uint32_t :1;
  uint32_t ON:1;
} __HLVDCONbits_t;
extern volatile __HLVDCONbits_t HLVDCONbits __asm__ ("HLVDCON") __attribute__((section("sfrs"), address(0xBF802920)));
extern volatile uint32_t        HLVDCONCLR __attribute__((section("sfrs"),address(0xBF802924)));
extern volatile uint32_t        HLVDCONSET __attribute__((section("sfrs"),address(0xBF802928)));
extern volatile uint32_t        HLVDCONINV __attribute__((section("sfrs"),address(0xBF80292C)));
#define NVMCON NVMCON
extern volatile uint32_t   NVMCON __attribute__((section("sfrs"), address(0xBF802930)));
typedef struct {
  uint32_t NVMOP:4;
  uint32_t :8;
  uint32_t LVDERR:1;
  uint32_t WRERR:1;
  uint32_t WREN:1;
  uint32_t WR:1;
} __NVMCONbits_t;
extern volatile __NVMCONbits_t NVMCONbits __asm__ ("NVMCON") __attribute__((section("sfrs"), address(0xBF802930)));
extern volatile uint32_t        NVMCONCLR __attribute__((section("sfrs"),address(0xBF802934)));
extern volatile uint32_t        NVMCONSET __attribute__((section("sfrs"),address(0xBF802938)));
extern volatile uint32_t        NVMCONINV __attribute__((section("sfrs"),address(0xBF80293C)));
#define NVMKEY NVMKEY
extern volatile uint32_t   NVMKEY __attribute__((section("sfrs"), address(0xBF802940)));
typedef struct {
  uint32_t NVMKEY:32;
} __NVMKEYbits_t;
extern volatile __NVMKEYbits_t NVMKEYbits __asm__ ("NVMKEY") __attribute__((section("sfrs"), address(0xBF802940)));
extern volatile uint32_t        NVMKEYCLR __attribute__((section("sfrs"),address(0xBF802944)));
extern volatile uint32_t        NVMKEYSET __attribute__((section("sfrs"),address(0xBF802948)));
extern volatile uint32_t        NVMKEYINV __attribute__((section("sfrs"),address(0xBF80294C)));
#define NVMADDR NVMADDR
extern volatile uint32_t   NVMADDR __attribute__((section("sfrs"), address(0xBF802950)));
typedef struct {
  uint32_t NVMADDR:32;
} __NVMADDRbits_t;
extern volatile __NVMADDRbits_t NVMADDRbits __asm__ ("NVMADDR") __attribute__((section("sfrs"), address(0xBF802950)));
extern volatile uint32_t        NVMADDRCLR __attribute__((section("sfrs"),address(0xBF802954)));
extern volatile uint32_t        NVMADDRSET __attribute__((section("sfrs"),address(0xBF802958)));
extern volatile uint32_t        NVMADDRINV __attribute__((section("sfrs"),address(0xBF80295C)));
#define NVMDATA0 NVMDATA0
extern volatile uint32_t   NVMDATA0 __attribute__((section("sfrs"), address(0xBF802960)));
typedef struct {
  uint32_t NVMDATA0:32;
} __NVMDATA0bits_t;
extern volatile __NVMDATA0bits_t NVMDATA0bits __asm__ ("NVMDATA0") __attribute__((section("sfrs"), address(0xBF802960)));
extern volatile uint32_t        NVMDATA0CLR __attribute__((section("sfrs"),address(0xBF802964)));
extern volatile uint32_t        NVMDATA0SET __attribute__((section("sfrs"),address(0xBF802968)));
extern volatile uint32_t        NVMDATA0INV __attribute__((section("sfrs"),address(0xBF80296C)));
#define NVMDATA1 NVMDATA1
extern volatile uint32_t   NVMDATA1 __attribute__((section("sfrs"), address(0xBF802970)));
typedef struct {
  uint32_t NVMDATA1:32;
} __NVMDATA1bits_t;
extern volatile __NVMDATA1bits_t NVMDATA1bits __asm__ ("NVMDATA1") __attribute__((section("sfrs"), address(0xBF802970)));
extern volatile uint32_t        NVMDATA1CLR __attribute__((section("sfrs"),address(0xBF802974)));
extern volatile uint32_t        NVMDATA1SET __attribute__((section("sfrs"),address(0xBF802978)));
extern volatile uint32_t        NVMDATA1INV __attribute__((section("sfrs"),address(0xBF80297C)));
#define NVMSRCADDR NVMSRCADDR
extern volatile uint32_t   NVMSRCADDR __attribute__((section("sfrs"), address(0xBF802980)));
typedef struct {
  uint32_t NVMSRCADDR:32;
} __NVMSRCADDRbits_t;
extern volatile __NVMSRCADDRbits_t NVMSRCADDRbits __asm__ ("NVMSRCADDR") __attribute__((section("sfrs"), address(0xBF802980)));
extern volatile uint32_t        NVMSRCADDRCLR __attribute__((section("sfrs"),address(0xBF802984)));
extern volatile uint32_t        NVMSRCADDRSET __attribute__((section("sfrs"),address(0xBF802988)));
extern volatile uint32_t        NVMSRCADDRINV __attribute__((section("sfrs"),address(0xBF80298C)));
#define NVMPWP NVMPWP
extern volatile uint32_t   NVMPWP __attribute__((section("sfrs"), address(0xBF802990)));
typedef struct {
  uint32_t PWP:24;
  uint32_t :7;
  uint32_t PWPULOCK:1;
} __NVMPWPbits_t;
extern volatile __NVMPWPbits_t NVMPWPbits __asm__ ("NVMPWP") __attribute__((section("sfrs"), address(0xBF802990)));
extern volatile uint32_t        NVMPWPCLR __attribute__((section("sfrs"),address(0xBF802994)));
extern volatile uint32_t        NVMPWPSET __attribute__((section("sfrs"),address(0xBF802998)));
extern volatile uint32_t        NVMPWPINV __attribute__((section("sfrs"),address(0xBF80299C)));
#define NVMBWP NVMBWP
extern volatile uint32_t   NVMBWP __attribute__((section("sfrs"), address(0xBF8029A0)));
typedef struct {
  uint32_t :8;
  uint32_t BWP0:1;
  uint32_t BWP1:1;
  uint32_t BWP2:1;
  uint32_t :4;
  uint32_t BWPULOCK:1;
} __NVMBWPbits_t;
extern volatile __NVMBWPbits_t NVMBWPbits __asm__ ("NVMBWP") __attribute__((section("sfrs"), address(0xBF8029A0)));
extern volatile uint32_t        NVMBWPCLR __attribute__((section("sfrs"),address(0xBF8029A4)));
extern volatile uint32_t        NVMBWPSET __attribute__((section("sfrs"),address(0xBF8029A8)));
extern volatile uint32_t        NVMBWPINV __attribute__((section("sfrs"),address(0xBF8029AC)));
#define RPCON RPCON
extern volatile uint32_t   RPCON __attribute__((section("sfrs"), address(0xBF802A00)));
typedef struct {
  uint32_t :11;
  uint32_t IOLOCK:1;
} __RPCONbits_t;
extern volatile __RPCONbits_t RPCONbits __asm__ ("RPCON") __attribute__((section("sfrs"), address(0xBF802A00)));
extern volatile uint32_t        RPCONCLR __attribute__((section("sfrs"),address(0xBF802A04)));
extern volatile uint32_t        RPCONSET __attribute__((section("sfrs"),address(0xBF802A08)));
extern volatile uint32_t        RPCONINV __attribute__((section("sfrs"),address(0xBF802A0C)));
#define RPINR1 RPINR1
extern volatile uint32_t   RPINR1 __attribute__((section("sfrs"), address(0xBF802A20)));
typedef struct {
  uint32_t INT4R:5;
} __RPINR1bits_t;
extern volatile __RPINR1bits_t RPINR1bits __asm__ ("RPINR1") __attribute__((section("sfrs"), address(0xBF802A20)));
extern volatile uint32_t        RPINR1CLR __attribute__((section("sfrs"),address(0xBF802A24)));
extern volatile uint32_t        RPINR1SET __attribute__((section("sfrs"),address(0xBF802A28)));
extern volatile uint32_t        RPINR1INV __attribute__((section("sfrs"),address(0xBF802A2C)));
#define RPINR2 RPINR2
extern volatile uint32_t   RPINR2 __attribute__((section("sfrs"), address(0xBF802A30)));
typedef struct {
  uint32_t :16;
  uint32_t ICM1R:5;
  uint32_t :3;
  uint32_t ICM2R:5;
} __RPINR2bits_t;
extern volatile __RPINR2bits_t RPINR2bits __asm__ ("RPINR2") __attribute__((section("sfrs"), address(0xBF802A30)));
extern volatile uint32_t        RPINR2CLR __attribute__((section("sfrs"),address(0xBF802A34)));
extern volatile uint32_t        RPINR2SET __attribute__((section("sfrs"),address(0xBF802A38)));
extern volatile uint32_t        RPINR2INV __attribute__((section("sfrs"),address(0xBF802A3C)));
#define RPINR3 RPINR3
extern volatile uint32_t   RPINR3 __attribute__((section("sfrs"), address(0xBF802A40)));
typedef struct {
  uint32_t ICM3R:5;
  uint32_t :3;
  uint32_t ICM4R:5;
} __RPINR3bits_t;
extern volatile __RPINR3bits_t RPINR3bits __asm__ ("RPINR3") __attribute__((section("sfrs"), address(0xBF802A40)));
extern volatile uint32_t        RPINR3CLR __attribute__((section("sfrs"),address(0xBF802A44)));
extern volatile uint32_t        RPINR3SET __attribute__((section("sfrs"),address(0xBF802A48)));
extern volatile uint32_t        RPINR3INV __attribute__((section("sfrs"),address(0xBF802A4C)));
#define RPINR5 RPINR5
extern volatile uint32_t   RPINR5 __attribute__((section("sfrs"), address(0xBF802A60)));
typedef struct {
  uint32_t :16;
  uint32_t OCFAR:5;
  uint32_t :3;
  uint32_t OCFBR:5;
} __RPINR5bits_t;
extern volatile __RPINR5bits_t RPINR5bits __asm__ ("RPINR5") __attribute__((section("sfrs"), address(0xBF802A60)));
extern volatile uint32_t        RPINR5CLR __attribute__((section("sfrs"),address(0xBF802A64)));
extern volatile uint32_t        RPINR5SET __attribute__((section("sfrs"),address(0xBF802A68)));
extern volatile uint32_t        RPINR5INV __attribute__((section("sfrs"),address(0xBF802A6C)));
#define RPINR6 RPINR6
extern volatile uint32_t   RPINR6 __attribute__((section("sfrs"), address(0xBF802A70)));
typedef struct {
  uint32_t TCKIAR:5;
  uint32_t :3;
  uint32_t TCKIBR:5;
} __RPINR6bits_t;
extern volatile __RPINR6bits_t RPINR6bits __asm__ ("RPINR6") __attribute__((section("sfrs"), address(0xBF802A70)));
extern volatile uint32_t        RPINR6CLR __attribute__((section("sfrs"),address(0xBF802A74)));
extern volatile uint32_t        RPINR6SET __attribute__((section("sfrs"),address(0xBF802A78)));
extern volatile uint32_t        RPINR6INV __attribute__((section("sfrs"),address(0xBF802A7C)));
#define RPINR7 RPINR7
extern volatile uint32_t   RPINR7 __attribute__((section("sfrs"), address(0xBF802A80)));
typedef struct {
  uint32_t ICM5R:5;
  uint32_t :3;
  uint32_t ICM6R:5;
  uint32_t :3;
  uint32_t ICM7R:5;
  uint32_t :3;
  uint32_t ICM8R:5;
} __RPINR7bits_t;
extern volatile __RPINR7bits_t RPINR7bits __asm__ ("RPINR7") __attribute__((section("sfrs"), address(0xBF802A80)));
extern volatile uint32_t        RPINR7CLR __attribute__((section("sfrs"),address(0xBF802A84)));
extern volatile uint32_t        RPINR7SET __attribute__((section("sfrs"),address(0xBF802A88)));
extern volatile uint32_t        RPINR7INV __attribute__((section("sfrs"),address(0xBF802A8C)));
#define RPINR8 RPINR8
extern volatile uint32_t   RPINR8 __attribute__((section("sfrs"), address(0xBF802A90)));
typedef struct {
  uint32_t ICM9R:5;
  uint32_t :19;
  uint32_t U3RXR:5;
} __RPINR8bits_t;
extern volatile __RPINR8bits_t RPINR8bits __asm__ ("RPINR8") __attribute__((section("sfrs"), address(0xBF802A90)));
extern volatile uint32_t        RPINR8CLR __attribute__((section("sfrs"),address(0xBF802A94)));
extern volatile uint32_t        RPINR8SET __attribute__((section("sfrs"),address(0xBF802A98)));
extern volatile uint32_t        RPINR8INV __attribute__((section("sfrs"),address(0xBF802A9C)));
#define RPINR9 RPINR9
extern volatile uint32_t   RPINR9 __attribute__((section("sfrs"), address(0xBF802AA0)));
typedef struct {
  uint32_t :16;
  uint32_t U2RXR:5;
  uint32_t :3;
  uint32_t U2CTSR:5;
} __RPINR9bits_t;
extern volatile __RPINR9bits_t RPINR9bits __asm__ ("RPINR9") __attribute__((section("sfrs"), address(0xBF802AA0)));
extern volatile uint32_t        RPINR9CLR __attribute__((section("sfrs"),address(0xBF802AA4)));
extern volatile uint32_t        RPINR9SET __attribute__((section("sfrs"),address(0xBF802AA8)));
extern volatile uint32_t        RPINR9INV __attribute__((section("sfrs"),address(0xBF802AAC)));
#define RPINR10 RPINR10
extern volatile uint32_t   RPINR10 __attribute__((section("sfrs"), address(0xBF802AB0)));
typedef struct {
  uint32_t :24;
  uint32_t U3CTSR:5;
} __RPINR10bits_t;
extern volatile __RPINR10bits_t RPINR10bits __asm__ ("RPINR10") __attribute__((section("sfrs"), address(0xBF802AB0)));
extern volatile uint32_t        RPINR10CLR __attribute__((section("sfrs"),address(0xBF802AB4)));
extern volatile uint32_t        RPINR10SET __attribute__((section("sfrs"),address(0xBF802AB8)));
extern volatile uint32_t        RPINR10INV __attribute__((section("sfrs"),address(0xBF802ABC)));
#define RPINR11 RPINR11
extern volatile uint32_t   RPINR11 __attribute__((section("sfrs"), address(0xBF802AC0)));
typedef struct {
  uint32_t SDI2R:5;
  uint32_t :3;
  uint32_t SCK2INR:5;
  uint32_t :3;
  uint32_t SS2INR:5;
} __RPINR11bits_t;
extern volatile __RPINR11bits_t RPINR11bits __asm__ ("RPINR11") __attribute__((section("sfrs"), address(0xBF802AC0)));
extern volatile uint32_t        RPINR11CLR __attribute__((section("sfrs"),address(0xBF802AC4)));
extern volatile uint32_t        RPINR11SET __attribute__((section("sfrs"),address(0xBF802AC8)));
extern volatile uint32_t        RPINR11INV __attribute__((section("sfrs"),address(0xBF802ACC)));
#define RPINR12 RPINR12
extern volatile uint32_t   RPINR12 __attribute__((section("sfrs"), address(0xBF802AD0)));
typedef struct {
  uint32_t :16;
  uint32_t CLCINAR:5;
  uint32_t :3;
  uint32_t CLCINBR:5;
} __RPINR12bits_t;
extern volatile __RPINR12bits_t RPINR12bits __asm__ ("RPINR12") __attribute__((section("sfrs"), address(0xBF802AD0)));
extern volatile uint32_t        RPINR12CLR __attribute__((section("sfrs"),address(0xBF802AD4)));
extern volatile uint32_t        RPINR12SET __attribute__((section("sfrs"),address(0xBF802AD8)));
extern volatile uint32_t        RPINR12INV __attribute__((section("sfrs"),address(0xBF802ADC)));
#define RPOR0 RPOR0
extern volatile uint32_t   RPOR0 __attribute__((section("sfrs"), address(0xBF802B10)));
typedef struct {
  uint32_t RP1R:5;
  uint32_t :3;
  uint32_t RP2R:5;
  uint32_t :3;
  uint32_t RP3R:5;
  uint32_t :3;
  uint32_t RP4R:5;
} __RPOR0bits_t;
extern volatile __RPOR0bits_t RPOR0bits __asm__ ("RPOR0") __attribute__((section("sfrs"), address(0xBF802B10)));
extern volatile uint32_t        RPOR0CLR __attribute__((section("sfrs"),address(0xBF802B14)));
extern volatile uint32_t        RPOR0SET __attribute__((section("sfrs"),address(0xBF802B18)));
extern volatile uint32_t        RPOR0INV __attribute__((section("sfrs"),address(0xBF802B1C)));
#define RPOR1 RPOR1
extern volatile uint32_t   RPOR1 __attribute__((section("sfrs"), address(0xBF802B20)));
typedef struct {
  uint32_t RP5R:5;
  uint32_t :3;
  uint32_t RP6R:5;
  uint32_t :3;
  uint32_t RP7R:5;
  uint32_t :3;
  uint32_t RP8R:5;
} __RPOR1bits_t;
extern volatile __RPOR1bits_t RPOR1bits __asm__ ("RPOR1") __attribute__((section("sfrs"), address(0xBF802B20)));
extern volatile uint32_t        RPOR1CLR __attribute__((section("sfrs"),address(0xBF802B24)));
extern volatile uint32_t        RPOR1SET __attribute__((section("sfrs"),address(0xBF802B28)));
extern volatile uint32_t        RPOR1INV __attribute__((section("sfrs"),address(0xBF802B2C)));
#define RPOR2 RPOR2
extern volatile uint32_t   RPOR2 __attribute__((section("sfrs"), address(0xBF802B30)));
typedef struct {
  uint32_t RP9R:5;
  uint32_t :3;
  uint32_t RP10R:5;
  uint32_t :3;
  uint32_t RP11R:5;
  uint32_t :3;
  uint32_t RP12R:5;
} __RPOR2bits_t;
extern volatile __RPOR2bits_t RPOR2bits __asm__ ("RPOR2") __attribute__((section("sfrs"), address(0xBF802B30)));
extern volatile uint32_t        RPOR2CLR __attribute__((section("sfrs"),address(0xBF802B34)));
extern volatile uint32_t        RPOR2SET __attribute__((section("sfrs"),address(0xBF802B38)));
extern volatile uint32_t        RPOR2INV __attribute__((section("sfrs"),address(0xBF802B3C)));
#define RPOR3 RPOR3
extern volatile uint32_t   RPOR3 __attribute__((section("sfrs"), address(0xBF802B40)));
typedef struct {
  uint32_t RP13R:5;
  uint32_t :3;
  uint32_t RP14R:5;
  uint32_t :3;
  uint32_t RP15R:5;
  uint32_t :3;
  uint32_t RP16R:5;
} __RPOR3bits_t;
extern volatile __RPOR3bits_t RPOR3bits __asm__ ("RPOR3") __attribute__((section("sfrs"), address(0xBF802B40)));
extern volatile uint32_t        RPOR3CLR __attribute__((section("sfrs"),address(0xBF802B44)));
extern volatile uint32_t        RPOR3SET __attribute__((section("sfrs"),address(0xBF802B48)));
extern volatile uint32_t        RPOR3INV __attribute__((section("sfrs"),address(0xBF802B4C)));
#define RPOR4 RPOR4
extern volatile uint32_t   RPOR4 __attribute__((section("sfrs"), address(0xBF802B50)));
typedef struct {
  uint32_t RP17R:5;
  uint32_t :3;
  uint32_t RP18R:5;
  uint32_t :3;
  uint32_t RP19R:5;
  uint32_t :3;
  uint32_t RP20R:5;
} __RPOR4bits_t;
extern volatile __RPOR4bits_t RPOR4bits __asm__ ("RPOR4") __attribute__((section("sfrs"), address(0xBF802B50)));
extern volatile uint32_t        RPOR4CLR __attribute__((section("sfrs"),address(0xBF802B54)));
extern volatile uint32_t        RPOR4SET __attribute__((section("sfrs"),address(0xBF802B58)));
extern volatile uint32_t        RPOR4INV __attribute__((section("sfrs"),address(0xBF802B5C)));
#define RPOR5 RPOR5
extern volatile uint32_t   RPOR5 __attribute__((section("sfrs"), address(0xBF802B60)));
typedef struct {
  uint32_t RP21R:5;
  uint32_t :3;
  uint32_t RP22R:5;
  uint32_t :3;
  uint32_t RP23R:5;
  uint32_t :3;
  uint32_t RP24R:5;
} __RPOR5bits_t;
extern volatile __RPOR5bits_t RPOR5bits __asm__ ("RPOR5") __attribute__((section("sfrs"), address(0xBF802B60)));
extern volatile uint32_t        RPOR5CLR __attribute__((section("sfrs"),address(0xBF802B64)));
extern volatile uint32_t        RPOR5SET __attribute__((section("sfrs"),address(0xBF802B68)));
extern volatile uint32_t        RPOR5INV __attribute__((section("sfrs"),address(0xBF802B6C)));
#define ANSELA ANSELA
extern volatile uint32_t   ANSELA __attribute__((section("sfrs"), address(0xBF802BB0)));
typedef struct {
  uint32_t ANSA0:1;
  uint32_t ANSA1:1;
  uint32_t ANSA2:1;
  uint32_t ANSA3:1;
} __ANSELAbits_t;
extern volatile __ANSELAbits_t ANSELAbits __asm__ ("ANSELA") __attribute__((section("sfrs"), address(0xBF802BB0)));
extern volatile uint32_t        ANSELACLR __attribute__((section("sfrs"),address(0xBF802BB4)));
extern volatile uint32_t        ANSELASET __attribute__((section("sfrs"),address(0xBF802BB8)));
extern volatile uint32_t        ANSELAINV __attribute__((section("sfrs"),address(0xBF802BBC)));
#define TRISA TRISA
extern volatile uint32_t   TRISA __attribute__((section("sfrs"), address(0xBF802BC0)));
typedef union {
  struct {
    uint32_t TRISA0:1;
    uint32_t TRISA1:1;
    uint32_t TRISA2:1;
    uint32_t TRISA3:1;
    uint32_t TRISA4:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISAbits_t;
extern volatile __TRISAbits_t TRISAbits __asm__ ("TRISA") __attribute__((section("sfrs"), address(0xBF802BC0)));
extern volatile uint32_t        TRISACLR __attribute__((section("sfrs"),address(0xBF802BC4)));
extern volatile uint32_t        TRISASET __attribute__((section("sfrs"),address(0xBF802BC8)));
extern volatile uint32_t        TRISAINV __attribute__((section("sfrs"),address(0xBF802BCC)));
#define PORTA PORTA
extern volatile uint32_t   PORTA __attribute__((section("sfrs"), address(0xBF802BD0)));
typedef union {
  struct {
    uint32_t RA0:1;
    uint32_t RA1:1;
    uint32_t RA2:1;
    uint32_t RA3:1;
    uint32_t RA4:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTAbits_t;
extern volatile __PORTAbits_t PORTAbits __asm__ ("PORTA") __attribute__((section("sfrs"), address(0xBF802BD0)));
extern volatile uint32_t        PORTACLR __attribute__((section("sfrs"),address(0xBF802BD4)));
extern volatile uint32_t        PORTASET __attribute__((section("sfrs"),address(0xBF802BD8)));
extern volatile uint32_t        PORTAINV __attribute__((section("sfrs"),address(0xBF802BDC)));
#define LATA LATA
extern volatile uint32_t   LATA __attribute__((section("sfrs"), address(0xBF802BE0)));
typedef union {
  struct {
    uint32_t LATA0:1;
    uint32_t LATA1:1;
    uint32_t LATA2:1;
    uint32_t LATA3:1;
    uint32_t LATA4:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATAbits_t;
extern volatile __LATAbits_t LATAbits __asm__ ("LATA") __attribute__((section("sfrs"), address(0xBF802BE0)));
extern volatile uint32_t        LATACLR __attribute__((section("sfrs"),address(0xBF802BE4)));
extern volatile uint32_t        LATASET __attribute__((section("sfrs"),address(0xBF802BE8)));
extern volatile uint32_t        LATAINV __attribute__((section("sfrs"),address(0xBF802BEC)));
#define ODCA ODCA
extern volatile uint32_t   ODCA __attribute__((section("sfrs"), address(0xBF802BF0)));
typedef union {
  struct {
    uint32_t ODCA0:1;
    uint32_t ODCA1:1;
    uint32_t ODCA2:1;
    uint32_t ODCA3:1;
    uint32_t ODCA4:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCAbits_t;
extern volatile __ODCAbits_t ODCAbits __asm__ ("ODCA") __attribute__((section("sfrs"), address(0xBF802BF0)));
extern volatile uint32_t        ODCACLR __attribute__((section("sfrs"),address(0xBF802BF4)));
extern volatile uint32_t        ODCASET __attribute__((section("sfrs"),address(0xBF802BF8)));
extern volatile uint32_t        ODCAINV __attribute__((section("sfrs"),address(0xBF802BFC)));
#define CNPUA CNPUA
extern volatile uint32_t   CNPUA __attribute__((section("sfrs"), address(0xBF802C00)));
typedef union {
  struct {
    uint32_t CNPUA0:1;
    uint32_t CNPUA1:1;
    uint32_t CNPUA2:1;
    uint32_t CNPUA3:1;
    uint32_t CNPUA4:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPUAbits_t;
extern volatile __CNPUAbits_t CNPUAbits __asm__ ("CNPUA") __attribute__((section("sfrs"), address(0xBF802C00)));
extern volatile uint32_t        CNPUACLR __attribute__((section("sfrs"),address(0xBF802C04)));
extern volatile uint32_t        CNPUASET __attribute__((section("sfrs"),address(0xBF802C08)));
extern volatile uint32_t        CNPUAINV __attribute__((section("sfrs"),address(0xBF802C0C)));
#define CNPDA CNPDA
extern volatile uint32_t   CNPDA __attribute__((section("sfrs"), address(0xBF802C10)));
typedef union {
  struct {
    uint32_t CNPDA0:1;
    uint32_t CNPDA1:1;
    uint32_t CNPDA2:1;
    uint32_t CNPDA3:1;
    uint32_t CNPDA4:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPDAbits_t;
extern volatile __CNPDAbits_t CNPDAbits __asm__ ("CNPDA") __attribute__((section("sfrs"), address(0xBF802C10)));
extern volatile uint32_t        CNPDACLR __attribute__((section("sfrs"),address(0xBF802C14)));
extern volatile uint32_t        CNPDASET __attribute__((section("sfrs"),address(0xBF802C18)));
extern volatile uint32_t        CNPDAINV __attribute__((section("sfrs"),address(0xBF802C1C)));
#define CNCONA CNCONA
extern volatile uint32_t   CNCONA __attribute__((section("sfrs"), address(0xBF802C20)));
typedef union {
  struct {
    uint32_t :10;
    uint32_t PORT32:1;
    uint32_t CNSTYLE:1;
    uint32_t :3;
    uint32_t ON:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNCONAbits_t;
extern volatile __CNCONAbits_t CNCONAbits __asm__ ("CNCONA") __attribute__((section("sfrs"), address(0xBF802C20)));
extern volatile uint32_t        CNCONACLR __attribute__((section("sfrs"),address(0xBF802C24)));
extern volatile uint32_t        CNCONASET __attribute__((section("sfrs"),address(0xBF802C28)));
extern volatile uint32_t        CNCONAINV __attribute__((section("sfrs"),address(0xBF802C2C)));
#define CNEN0A CNEN0A
extern volatile uint32_t   CNEN0A __attribute__((section("sfrs"), address(0xBF802C30)));
typedef union {
  struct {
    uint32_t CNIE0A0:1;
    uint32_t CNIE0A1:1;
    uint32_t CNIE0A2:1;
    uint32_t CNIE0A3:1;
    uint32_t CNIE0A4:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNEN0Abits_t;
extern volatile __CNEN0Abits_t CNEN0Abits __asm__ ("CNEN0A") __attribute__((section("sfrs"), address(0xBF802C30)));
extern volatile uint32_t        CNEN0ACLR __attribute__((section("sfrs"),address(0xBF802C34)));
extern volatile uint32_t        CNEN0ASET __attribute__((section("sfrs"),address(0xBF802C38)));
extern volatile uint32_t        CNEN0AINV __attribute__((section("sfrs"),address(0xBF802C3C)));
#define CNSTATA CNSTATA
extern volatile uint32_t   CNSTATA __attribute__((section("sfrs"), address(0xBF802C40)));
typedef union {
  struct {
    uint32_t CNSTATA0:1;
    uint32_t CNSTATA1:1;
    uint32_t CNSTATA2:1;
    uint32_t CNSTATA3:1;
    uint32_t CNSTATA4:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNSTATAbits_t;
extern volatile __CNSTATAbits_t CNSTATAbits __asm__ ("CNSTATA") __attribute__((section("sfrs"), address(0xBF802C40)));
extern volatile uint32_t        CNSTATACLR __attribute__((section("sfrs"),address(0xBF802C44)));
extern volatile uint32_t        CNSTATASET __attribute__((section("sfrs"),address(0xBF802C48)));
extern volatile uint32_t        CNSTATAINV __attribute__((section("sfrs"),address(0xBF802C4C)));
#define CNEN1A CNEN1A
extern volatile uint32_t   CNEN1A __attribute__((section("sfrs"), address(0xBF802C50)));
typedef union {
  struct {
    uint32_t CNIE1A0:1;
    uint32_t CNIE1A1:1;
    uint32_t CNIE1A2:1;
    uint32_t CNIE1A3:1;
    uint32_t CNIE1A4:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNEN1Abits_t;
extern volatile __CNEN1Abits_t CNEN1Abits __asm__ ("CNEN1A") __attribute__((section("sfrs"), address(0xBF802C50)));
extern volatile uint32_t        CNEN1ACLR __attribute__((section("sfrs"),address(0xBF802C54)));
extern volatile uint32_t        CNEN1ASET __attribute__((section("sfrs"),address(0xBF802C58)));
extern volatile uint32_t        CNEN1AINV __attribute__((section("sfrs"),address(0xBF802C5C)));
#define CNFA CNFA
extern volatile uint32_t   CNFA __attribute__((section("sfrs"), address(0xBF802C60)));
typedef union {
  struct {
    uint32_t CNFA0:1;
    uint32_t CNFA1:1;
    uint32_t CNFA2:1;
    uint32_t CNFA3:1;
    uint32_t CNFA4:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNFAbits_t;
extern volatile __CNFAbits_t CNFAbits __asm__ ("CNFA") __attribute__((section("sfrs"), address(0xBF802C60)));
extern volatile uint32_t        CNFACLR __attribute__((section("sfrs"),address(0xBF802C64)));
extern volatile uint32_t        CNFASET __attribute__((section("sfrs"),address(0xBF802C68)));
extern volatile uint32_t        CNFAINV __attribute__((section("sfrs"),address(0xBF802C6C)));
#define SR0A SR0A
extern volatile uint32_t   SR0A __attribute__((section("sfrs"), address(0xBF802C70)));
typedef struct {
  uint32_t w:32;
} __SR0Abits_t;
extern volatile __SR0Abits_t SR0Abits __asm__ ("SR0A") __attribute__((section("sfrs"), address(0xBF802C70)));
extern volatile uint32_t        SR0ACLR __attribute__((section("sfrs"),address(0xBF802C74)));
extern volatile uint32_t        SR0ASET __attribute__((section("sfrs"),address(0xBF802C78)));
extern volatile uint32_t        SR0AINV __attribute__((section("sfrs"),address(0xBF802C7C)));
#define SR1A SR1A
extern volatile uint32_t   SR1A __attribute__((section("sfrs"), address(0xBF802C80)));
typedef struct {
  uint32_t w:32;
} __SR1Abits_t;
extern volatile __SR1Abits_t SR1Abits __asm__ ("SR1A") __attribute__((section("sfrs"), address(0xBF802C80)));
extern volatile uint32_t        SR1ACLR __attribute__((section("sfrs"),address(0xBF802C84)));
extern volatile uint32_t        SR1ASET __attribute__((section("sfrs"),address(0xBF802C88)));
extern volatile uint32_t        SR1AINV __attribute__((section("sfrs"),address(0xBF802C8C)));
#define ANSELB ANSELB
extern volatile uint32_t   ANSELB __attribute__((section("sfrs"), address(0xBF802CB0)));
typedef union {
  struct {
    uint32_t ANSB0:1;
    uint32_t ANSB1:1;
    uint32_t ANSB2:1;
    uint32_t ANSB3:1;
    uint32_t ANSB4:1;
    uint32_t :8;
    uint32_t ANSB13:1;
    uint32_t ANSB14:1;
    uint32_t ANSB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __ANSELBbits_t;
extern volatile __ANSELBbits_t ANSELBbits __asm__ ("ANSELB") __attribute__((section("sfrs"), address(0xBF802CB0)));
#define B B
extern volatile uint32_t   B __attribute__((section("sfrs"), address(0xBF802CB0)));
typedef union {
  struct {
    uint32_t ANSB0:1;
    uint32_t ANSB1:1;
    uint32_t ANSB2:1;
    uint32_t ANSB3:1;
    uint32_t ANSB4:1;
    uint32_t :8;
    uint32_t ANSB13:1;
    uint32_t ANSB14:1;
    uint32_t ANSB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __Bbits_t;
extern volatile __Bbits_t Bbits __asm__ ("B") __attribute__((section("sfrs"), address(0xBF802CB0)));
extern volatile uint32_t        ANSELBCLR __attribute__((section("sfrs"),address(0xBF802CB4)));
extern volatile uint32_t        BCLR __attribute__((section("sfrs"),address(0xBF802CB4)));
extern volatile uint32_t        ANSELBSET __attribute__((section("sfrs"),address(0xBF802CB8)));
extern volatile uint32_t        BSET __attribute__((section("sfrs"),address(0xBF802CB8)));
extern volatile uint32_t        ANSELBINV __attribute__((section("sfrs"),address(0xBF802CBC)));
extern volatile uint32_t        BINV __attribute__((section("sfrs"),address(0xBF802CBC)));
#define TRISB TRISB
extern volatile uint32_t   TRISB __attribute__((section("sfrs"), address(0xBF802CC0)));
typedef union {
  struct {
    uint32_t TRISB0:1;
    uint32_t TRISB1:1;
    uint32_t TRISB2:1;
    uint32_t TRISB3:1;
    uint32_t TRISB4:1;
    uint32_t TRISB5:1;
    uint32_t TRISB6:1;
    uint32_t TRISB7:1;
    uint32_t TRISB8:1;
    uint32_t TRISB9:1;
    uint32_t TRISB10:1;
    uint32_t TRISB11:1;
    uint32_t :1;
    uint32_t TRISB13:1;
    uint32_t TRISB14:1;
    uint32_t TRISB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISBbits_t;
extern volatile __TRISBbits_t TRISBbits __asm__ ("TRISB") __attribute__((section("sfrs"), address(0xBF802CC0)));
extern volatile uint32_t        TRISBCLR __attribute__((section("sfrs"),address(0xBF802CC4)));
extern volatile uint32_t        TRISBSET __attribute__((section("sfrs"),address(0xBF802CC8)));
extern volatile uint32_t        TRISBINV __attribute__((section("sfrs"),address(0xBF802CCC)));
#define PORTB PORTB
extern volatile uint32_t   PORTB __attribute__((section("sfrs"), address(0xBF802CD0)));
typedef union {
  struct {
    uint32_t RB0:1;
    uint32_t RB1:1;
    uint32_t RB2:1;
    uint32_t RB3:1;
    uint32_t RB4:1;
    uint32_t RB5:1;
    uint32_t RB6:1;
    uint32_t RB7:1;
    uint32_t RB8:1;
    uint32_t RB9:1;
    uint32_t RB10:1;
    uint32_t RB11:1;
    uint32_t :1;
    uint32_t RB13:1;
    uint32_t RB14:1;
    uint32_t RB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTBbits_t;
extern volatile __PORTBbits_t PORTBbits __asm__ ("PORTB") __attribute__((section("sfrs"), address(0xBF802CD0)));
extern volatile uint32_t        PORTBCLR __attribute__((section("sfrs"),address(0xBF802CD4)));
extern volatile uint32_t        PORTBSET __attribute__((section("sfrs"),address(0xBF802CD8)));
extern volatile uint32_t        PORTBINV __attribute__((section("sfrs"),address(0xBF802CDC)));
#define LATB LATB
extern volatile uint32_t   LATB __attribute__((section("sfrs"), address(0xBF802CE0)));
typedef union {
  struct {
    uint32_t LATB0:1;
    uint32_t LATB1:1;
    uint32_t LATB2:1;
    uint32_t LATB3:1;
    uint32_t LATB4:1;
    uint32_t LATB5:1;
    uint32_t LATB6:1;
    uint32_t LATB7:1;
    uint32_t LATB8:1;
    uint32_t LATB9:1;
    uint32_t LATB10:1;
    uint32_t LATB11:1;
    uint32_t :1;
    uint32_t LATB13:1;
    uint32_t LATB14:1;
    uint32_t LATB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATBbits_t;
extern volatile __LATBbits_t LATBbits __asm__ ("LATB") __attribute__((section("sfrs"), address(0xBF802CE0)));
extern volatile uint32_t        LATBCLR __attribute__((section("sfrs"),address(0xBF802CE4)));
extern volatile uint32_t        LATBSET __attribute__((section("sfrs"),address(0xBF802CE8)));
extern volatile uint32_t        LATBINV __attribute__((section("sfrs"),address(0xBF802CEC)));
#define ODCB ODCB
extern volatile uint32_t   ODCB __attribute__((section("sfrs"), address(0xBF802CF0)));
typedef union {
  struct {
    uint32_t ODCB0:1;
    uint32_t ODCB1:1;
    uint32_t ODCB2:1;
    uint32_t ODCB3:1;
    uint32_t ODCB4:1;
    uint32_t ODCB5:1;
    uint32_t ODCB6:1;
    uint32_t ODCB7:1;
    uint32_t ODCB8:1;
    uint32_t ODCB9:1;
    uint32_t ODCB10:1;
    uint32_t ODCB11:1;
    uint32_t :1;
    uint32_t ODCB13:1;
    uint32_t ODCB14:1;
    uint32_t ODCB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCBbits_t;
extern volatile __ODCBbits_t ODCBbits __asm__ ("ODCB") __attribute__((section("sfrs"), address(0xBF802CF0)));
extern volatile uint32_t        ODCBCLR __attribute__((section("sfrs"),address(0xBF802CF4)));
extern volatile uint32_t        ODCBSET __attribute__((section("sfrs"),address(0xBF802CF8)));
extern volatile uint32_t        ODCBINV __attribute__((section("sfrs"),address(0xBF802CFC)));
#define CNPUB CNPUB
extern volatile uint32_t   CNPUB __attribute__((section("sfrs"), address(0xBF802D00)));
typedef union {
  struct {
    uint32_t CNPUB0:1;
    uint32_t CNPUB1:1;
    uint32_t CNPUB2:1;
    uint32_t CNPUB3:1;
    uint32_t CNPUB4:1;
    uint32_t CNPUB5:1;
    uint32_t CNPUB6:1;
    uint32_t CNPUB7:1;
    uint32_t CNPUB8:1;
    uint32_t CNPUB9:1;
    uint32_t CNPUB10:1;
    uint32_t CNPUB11:1;
    uint32_t :1;
    uint32_t CNPUB13:1;
    uint32_t CNPUB14:1;
    uint32_t CNPUB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPUBbits_t;
extern volatile __CNPUBbits_t CNPUBbits __asm__ ("CNPUB") __attribute__((section("sfrs"), address(0xBF802D00)));
extern volatile uint32_t        CNPUBCLR __attribute__((section("sfrs"),address(0xBF802D04)));
extern volatile uint32_t        CNPUBSET __attribute__((section("sfrs"),address(0xBF802D08)));
extern volatile uint32_t        CNPUBINV __attribute__((section("sfrs"),address(0xBF802D0C)));
#define CNPDB CNPDB
extern volatile uint32_t   CNPDB __attribute__((section("sfrs"), address(0xBF802D10)));
typedef union {
  struct {
    uint32_t CNPDB0:1;
    uint32_t CNPDB1:1;
    uint32_t CNPDB2:1;
    uint32_t CNPDB3:1;
    uint32_t CNPDB4:1;
    uint32_t CNPDB5:1;
    uint32_t CNPDB6:1;
    uint32_t CNPDB7:1;
    uint32_t CNPDB8:1;
    uint32_t CNPDB9:1;
    uint32_t CNPDB10:1;
    uint32_t CNPDB11:1;
    uint32_t :1;
    uint32_t CNPDB13:1;
    uint32_t CNPDB14:1;
    uint32_t CNPDB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPDBbits_t;
extern volatile __CNPDBbits_t CNPDBbits __asm__ ("CNPDB") __attribute__((section("sfrs"), address(0xBF802D10)));
extern volatile uint32_t        CNPDBCLR __attribute__((section("sfrs"),address(0xBF802D14)));
extern volatile uint32_t        CNPDBSET __attribute__((section("sfrs"),address(0xBF802D18)));
extern volatile uint32_t        CNPDBINV __attribute__((section("sfrs"),address(0xBF802D1C)));
#define CNCONB CNCONB
extern volatile uint32_t   CNCONB __attribute__((section("sfrs"), address(0xBF802D20)));
typedef union {
  struct {
    uint32_t :10;
    uint32_t PORT32:1;
    uint32_t CNSTYLE:1;
    uint32_t :3;
    uint32_t ON:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNCONBbits_t;
extern volatile __CNCONBbits_t CNCONBbits __asm__ ("CNCONB") __attribute__((section("sfrs"), address(0xBF802D20)));
extern volatile uint32_t        CNCONBCLR __attribute__((section("sfrs"),address(0xBF802D24)));
extern volatile uint32_t        CNCONBSET __attribute__((section("sfrs"),address(0xBF802D28)));
extern volatile uint32_t        CNCONBINV __attribute__((section("sfrs"),address(0xBF802D2C)));
#define CNEN0B CNEN0B
extern volatile uint32_t   CNEN0B __attribute__((section("sfrs"), address(0xBF802D30)));
typedef union {
  struct {
    uint32_t CNIE0B0:1;
    uint32_t CNIE0B1:1;
    uint32_t CNIE0B2:1;
    uint32_t CNIE0B3:1;
    uint32_t CNIE0B4:1;
    uint32_t CNIE0B5:1;
    uint32_t CNIE0B6:1;
    uint32_t CNIE0B7:1;
    uint32_t CNIE0B8:1;
    uint32_t CNIE0B9:1;
    uint32_t CNIE0B10:1;
    uint32_t CNIE0B11:1;
    uint32_t :1;
    uint32_t CNIE0B13:1;
    uint32_t CNIE0B14:1;
    uint32_t CNIE0B15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNEN0Bbits_t;
extern volatile __CNEN0Bbits_t CNEN0Bbits __asm__ ("CNEN0B") __attribute__((section("sfrs"), address(0xBF802D30)));
extern volatile uint32_t        CNEN0BCLR __attribute__((section("sfrs"),address(0xBF802D34)));
extern volatile uint32_t        CNEN0BSET __attribute__((section("sfrs"),address(0xBF802D38)));
extern volatile uint32_t        CNEN0BINV __attribute__((section("sfrs"),address(0xBF802D3C)));
#define CNSTATB CNSTATB
extern volatile uint32_t   CNSTATB __attribute__((section("sfrs"), address(0xBF802D40)));
typedef union {
  struct {
    uint32_t CNSTATB0:1;
    uint32_t CNSTATB1:1;
    uint32_t CNSTATB2:1;
    uint32_t CNSTATB3:1;
    uint32_t CNSTATB4:1;
    uint32_t CNSTATB5:1;
    uint32_t CNSTATB6:1;
    uint32_t CNSTATB7:1;
    uint32_t CNSTATB8:1;
    uint32_t CNSTATB9:1;
    uint32_t CNSTATB10:1;
    uint32_t CNSTATB11:1;
    uint32_t :1;
    uint32_t CNSTATB13:1;
    uint32_t CNSTATB14:1;
    uint32_t CNSTATB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNSTATBbits_t;
extern volatile __CNSTATBbits_t CNSTATBbits __asm__ ("CNSTATB") __attribute__((section("sfrs"), address(0xBF802D40)));
extern volatile uint32_t        CNSTATBCLR __attribute__((section("sfrs"),address(0xBF802D44)));
extern volatile uint32_t        CNSTATBSET __attribute__((section("sfrs"),address(0xBF802D48)));
extern volatile uint32_t        CNSTATBINV __attribute__((section("sfrs"),address(0xBF802D4C)));
#define CNEN1B CNEN1B
extern volatile uint32_t   CNEN1B __attribute__((section("sfrs"), address(0xBF802D50)));
typedef union {
  struct {
    uint32_t CNIE1B0:1;
    uint32_t CNIE1B1:1;
    uint32_t CNIE1B2:1;
    uint32_t CNIE1B3:1;
    uint32_t CNIE1B4:1;
    uint32_t CNIE1B5:1;
    uint32_t CNIE1B6:1;
    uint32_t CNIE1B7:1;
    uint32_t CNIE1B8:1;
    uint32_t CNIE1B9:1;
    uint32_t CNIE1B10:1;
    uint32_t CNIE1B11:1;
    uint32_t :1;
    uint32_t CNIE1B13:1;
    uint32_t CNIE1B14:1;
    uint32_t CNIE1B15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNEN1Bbits_t;
extern volatile __CNEN1Bbits_t CNEN1Bbits __asm__ ("CNEN1B") __attribute__((section("sfrs"), address(0xBF802D50)));
extern volatile uint32_t        CNEN1BCLR __attribute__((section("sfrs"),address(0xBF802D54)));
extern volatile uint32_t        CNEN1BSET __attribute__((section("sfrs"),address(0xBF802D58)));
extern volatile uint32_t        CNEN1BINV __attribute__((section("sfrs"),address(0xBF802D5C)));
#define CNFB CNFB
extern volatile uint32_t   CNFB __attribute__((section("sfrs"), address(0xBF802D60)));
typedef union {
  struct {
    uint32_t CNFB0:1;
    uint32_t CNFB1:1;
    uint32_t CNFB2:1;
    uint32_t CNFB3:1;
    uint32_t CNFB4:1;
    uint32_t CNFB5:1;
    uint32_t CNFB6:1;
    uint32_t CNFB7:1;
    uint32_t CNFB8:1;
    uint32_t CNFB9:1;
    uint32_t CNFB10:1;
    uint32_t CNFB11:1;
    uint32_t :1;
    uint32_t CNFB13:1;
    uint32_t CNFB14:1;
    uint32_t CNFB15:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNFBbits_t;
extern volatile __CNFBbits_t CNFBbits __asm__ ("CNFB") __attribute__((section("sfrs"), address(0xBF802D60)));
extern volatile uint32_t        CNFBCLR __attribute__((section("sfrs"),address(0xBF802D64)));
extern volatile uint32_t        CNFBSET __attribute__((section("sfrs"),address(0xBF802D68)));
extern volatile uint32_t        CNFBINV __attribute__((section("sfrs"),address(0xBF802D6C)));
#define SR0B SR0B
extern volatile uint32_t   SR0B __attribute__((section("sfrs"), address(0xBF802D70)));
typedef struct {
  uint32_t w:32;
} __SR0Bbits_t;
extern volatile __SR0Bbits_t SR0Bbits __asm__ ("SR0B") __attribute__((section("sfrs"), address(0xBF802D70)));
extern volatile uint32_t        SR0BCLR __attribute__((section("sfrs"),address(0xBF802D74)));
extern volatile uint32_t        SR0BSET __attribute__((section("sfrs"),address(0xBF802D78)));
extern volatile uint32_t        SR0BINV __attribute__((section("sfrs"),address(0xBF802D7C)));
#define SR1B SR1B
extern volatile uint32_t   SR1B __attribute__((section("sfrs"), address(0xBF802D80)));
typedef struct {
  uint32_t w:32;
} __SR1Bbits_t;
extern volatile __SR1Bbits_t SR1Bbits __asm__ ("SR1B") __attribute__((section("sfrs"), address(0xBF802D80)));
extern volatile uint32_t        SR1BCLR __attribute__((section("sfrs"),address(0xBF802D84)));
extern volatile uint32_t        SR1BSET __attribute__((section("sfrs"),address(0xBF802D88)));
extern volatile uint32_t        SR1BINV __attribute__((section("sfrs"),address(0xBF802D8C)));
#define ANSELC ANSELC
extern volatile uint32_t   ANSELC __attribute__((section("sfrs"), address(0xBF802DB0)));
typedef struct {
  uint32_t w:32;
} __ANSELCbits_t;
extern volatile __ANSELCbits_t ANSELCbits __asm__ ("ANSELC") __attribute__((section("sfrs"), address(0xBF802DB0)));
extern volatile uint32_t        ANSELCCLR __attribute__((section("sfrs"),address(0xBF802DB4)));
extern volatile uint32_t        ANSELCSET __attribute__((section("sfrs"),address(0xBF802DB8)));
extern volatile uint32_t        ANSELCINV __attribute__((section("sfrs"),address(0xBF802DBC)));
#define TRISC TRISC
extern volatile uint32_t   TRISC __attribute__((section("sfrs"), address(0xBF802DC0)));
typedef union {
  struct {
    uint32_t :9;
    uint32_t TRISC9:1;
  };
  struct {
    uint32_t w:32;
  };
} __TRISCbits_t;
extern volatile __TRISCbits_t TRISCbits __asm__ ("TRISC") __attribute__((section("sfrs"), address(0xBF802DC0)));
extern volatile uint32_t        TRISCCLR __attribute__((section("sfrs"),address(0xBF802DC4)));
extern volatile uint32_t        TRISCSET __attribute__((section("sfrs"),address(0xBF802DC8)));
extern volatile uint32_t        TRISCINV __attribute__((section("sfrs"),address(0xBF802DCC)));
#define PORTC PORTC
extern volatile uint32_t   PORTC __attribute__((section("sfrs"), address(0xBF802DD0)));
typedef union {
  struct {
    uint32_t :9;
    uint32_t RC9:1;
  };
  struct {
    uint32_t w:32;
  };
} __PORTCbits_t;
extern volatile __PORTCbits_t PORTCbits __asm__ ("PORTC") __attribute__((section("sfrs"), address(0xBF802DD0)));
extern volatile uint32_t        PORTCCLR __attribute__((section("sfrs"),address(0xBF802DD4)));
extern volatile uint32_t        PORTCSET __attribute__((section("sfrs"),address(0xBF802DD8)));
extern volatile uint32_t        PORTCINV __attribute__((section("sfrs"),address(0xBF802DDC)));
#define LATC LATC
extern volatile uint32_t   LATC __attribute__((section("sfrs"), address(0xBF802DE0)));
typedef union {
  struct {
    uint32_t :9;
    uint32_t LATC9:1;
  };
  struct {
    uint32_t w:32;
  };
} __LATCbits_t;
extern volatile __LATCbits_t LATCbits __asm__ ("LATC") __attribute__((section("sfrs"), address(0xBF802DE0)));
extern volatile uint32_t        LATCCLR __attribute__((section("sfrs"),address(0xBF802DE4)));
extern volatile uint32_t        LATCSET __attribute__((section("sfrs"),address(0xBF802DE8)));
extern volatile uint32_t        LATCINV __attribute__((section("sfrs"),address(0xBF802DEC)));
#define ODCC ODCC
extern volatile uint32_t   ODCC __attribute__((section("sfrs"), address(0xBF802DF0)));
typedef union {
  struct {
    uint32_t :9;
    uint32_t ODCC9:1;
  };
  struct {
    uint32_t w:32;
  };
} __ODCCbits_t;
extern volatile __ODCCbits_t ODCCbits __asm__ ("ODCC") __attribute__((section("sfrs"), address(0xBF802DF0)));
extern volatile uint32_t        ODCCCLR __attribute__((section("sfrs"),address(0xBF802DF4)));
extern volatile uint32_t        ODCCSET __attribute__((section("sfrs"),address(0xBF802DF8)));
extern volatile uint32_t        ODCCINV __attribute__((section("sfrs"),address(0xBF802DFC)));
#define CNPUC CNPUC
extern volatile uint32_t   CNPUC __attribute__((section("sfrs"), address(0xBF802E00)));
typedef union {
  struct {
    uint32_t :9;
    uint32_t CNPUC9:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPUCbits_t;
extern volatile __CNPUCbits_t CNPUCbits __asm__ ("CNPUC") __attribute__((section("sfrs"), address(0xBF802E00)));
extern volatile uint32_t        CNPUCCLR __attribute__((section("sfrs"),address(0xBF802E04)));
extern volatile uint32_t        CNPUCSET __attribute__((section("sfrs"),address(0xBF802E08)));
extern volatile uint32_t        CNPUCINV __attribute__((section("sfrs"),address(0xBF802E0C)));
#define CNPDC CNPDC
extern volatile uint32_t   CNPDC __attribute__((section("sfrs"), address(0xBF802E10)));
typedef union {
  struct {
    uint32_t :9;
    uint32_t CNPDC9:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNPDCbits_t;
extern volatile __CNPDCbits_t CNPDCbits __asm__ ("CNPDC") __attribute__((section("sfrs"), address(0xBF802E10)));
extern volatile uint32_t        CNPDCCLR __attribute__((section("sfrs"),address(0xBF802E14)));
extern volatile uint32_t        CNPDCSET __attribute__((section("sfrs"),address(0xBF802E18)));
extern volatile uint32_t        CNPDCINV __attribute__((section("sfrs"),address(0xBF802E1C)));
#define CNCONC CNCONC
extern volatile uint32_t   CNCONC __attribute__((section("sfrs"), address(0xBF802E20)));
typedef union {
  struct {
    uint32_t :10;
    uint32_t PORT32:1;
    uint32_t CNSTYLE:1;
    uint32_t :3;
    uint32_t ON:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNCONCbits_t;
extern volatile __CNCONCbits_t CNCONCbits __asm__ ("CNCONC") __attribute__((section("sfrs"), address(0xBF802E20)));
extern volatile uint32_t        CNCONCCLR __attribute__((section("sfrs"),address(0xBF802E24)));
extern volatile uint32_t        CNCONCSET __attribute__((section("sfrs"),address(0xBF802E28)));
extern volatile uint32_t        CNCONCINV __attribute__((section("sfrs"),address(0xBF802E2C)));
#define CNEN0C CNEN0C
extern volatile uint32_t   CNEN0C __attribute__((section("sfrs"), address(0xBF802E30)));
typedef union {
  struct {
    uint32_t :9;
    uint32_t CNIE0C9:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNEN0Cbits_t;
extern volatile __CNEN0Cbits_t CNEN0Cbits __asm__ ("CNEN0C") __attribute__((section("sfrs"), address(0xBF802E30)));
extern volatile uint32_t        CNEN0CCLR __attribute__((section("sfrs"),address(0xBF802E34)));
extern volatile uint32_t        CNEN0CSET __attribute__((section("sfrs"),address(0xBF802E38)));
extern volatile uint32_t        CNEN0CINV __attribute__((section("sfrs"),address(0xBF802E3C)));
#define CNSTATC CNSTATC
extern volatile uint32_t   CNSTATC __attribute__((section("sfrs"), address(0xBF802E40)));
typedef union {
  struct {
    uint32_t :9;
    uint32_t CNSTATC9:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNSTATCbits_t;
extern volatile __CNSTATCbits_t CNSTATCbits __asm__ ("CNSTATC") __attribute__((section("sfrs"), address(0xBF802E40)));
extern volatile uint32_t        CNSTATCCLR __attribute__((section("sfrs"),address(0xBF802E44)));
extern volatile uint32_t        CNSTATCSET __attribute__((section("sfrs"),address(0xBF802E48)));
extern volatile uint32_t        CNSTATCINV __attribute__((section("sfrs"),address(0xBF802E4C)));
#define CNEN1C CNEN1C
extern volatile uint32_t   CNEN1C __attribute__((section("sfrs"), address(0xBF802E50)));
typedef union {
  struct {
    uint32_t :9;
    uint32_t CNIE1C9:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNEN1Cbits_t;
extern volatile __CNEN1Cbits_t CNEN1Cbits __asm__ ("CNEN1C") __attribute__((section("sfrs"), address(0xBF802E50)));
extern volatile uint32_t        CNEN1CCLR __attribute__((section("sfrs"),address(0xBF802E54)));
extern volatile uint32_t        CNEN1CSET __attribute__((section("sfrs"),address(0xBF802E58)));
extern volatile uint32_t        CNEN1CINV __attribute__((section("sfrs"),address(0xBF802E5C)));
#define CNFC CNFC
extern volatile uint32_t   CNFC __attribute__((section("sfrs"), address(0xBF802E60)));
typedef union {
  struct {
    uint32_t :9;
    uint32_t CNFC9:1;
  };
  struct {
    uint32_t w:32;
  };
} __CNFCbits_t;
extern volatile __CNFCbits_t CNFCbits __asm__ ("CNFC") __attribute__((section("sfrs"), address(0xBF802E60)));
extern volatile uint32_t        CNFCCLR __attribute__((section("sfrs"),address(0xBF802E64)));
extern volatile uint32_t        CNFCSET __attribute__((section("sfrs"),address(0xBF802E68)));
extern volatile uint32_t        CNFCINV __attribute__((section("sfrs"),address(0xBF802E6C)));
#define SR0C SR0C
extern volatile uint32_t   SR0C __attribute__((section("sfrs"), address(0xBF802E70)));
typedef struct {
  uint32_t w:32;
} __SR0Cbits_t;
extern volatile __SR0Cbits_t SR0Cbits __asm__ ("SR0C") __attribute__((section("sfrs"), address(0xBF802E70)));
extern volatile uint32_t        SR0CCLR __attribute__((section("sfrs"),address(0xBF802E74)));
extern volatile uint32_t        SR0CSET __attribute__((section("sfrs"),address(0xBF802E78)));
extern volatile uint32_t        SR0CINV __attribute__((section("sfrs"),address(0xBF802E7C)));
#define SR1C SR1C
extern volatile uint32_t   SR1C __attribute__((section("sfrs"), address(0xBF802E80)));
typedef struct {
  uint32_t w:32;
} __SR1Cbits_t;
extern volatile __SR1Cbits_t SR1Cbits __asm__ ("SR1C") __attribute__((section("sfrs"), address(0xBF802E80)));
extern volatile uint32_t        SR1CCLR __attribute__((section("sfrs"),address(0xBF802E84)));
extern volatile uint32_t        SR1CSET __attribute__((section("sfrs"),address(0xBF802E88)));
extern volatile uint32_t        SR1CINV __attribute__((section("sfrs"),address(0xBF802E8C)));
#define PMDCON PMDCON
extern volatile uint32_t   PMDCON __attribute__((section("sfrs"), address(0xBF8035B0)));
typedef struct {
  uint32_t :11;
  uint32_t PMDLOCK:1;
} __PMDCONbits_t;
extern volatile __PMDCONbits_t PMDCONbits __asm__ ("PMDCON") __attribute__((section("sfrs"), address(0xBF8035B0)));
extern volatile uint32_t        PMDCONCLR __attribute__((section("sfrs"),address(0xBF8035B4)));
extern volatile uint32_t        PMDCONSET __attribute__((section("sfrs"),address(0xBF8035B8)));
extern volatile uint32_t        PMDCONINV __attribute__((section("sfrs"),address(0xBF8035BC)));
#define PMD1 PMD1
extern volatile uint32_t   PMD1 __attribute__((section("sfrs"), address(0xBF8035C0)));
typedef struct {
  uint32_t ADCMD:1;
  uint32_t :11;
  uint32_t VREFMD:1;
  uint32_t :7;
  uint32_t HLVDMD:1;
} __PMD1bits_t;
extern volatile __PMD1bits_t PMD1bits __asm__ ("PMD1") __attribute__((section("sfrs"), address(0xBF8035C0)));
extern volatile uint32_t        PMD1CLR __attribute__((section("sfrs"),address(0xBF8035C4)));
extern volatile uint32_t        PMD1SET __attribute__((section("sfrs"),address(0xBF8035C8)));
extern volatile uint32_t        PMD1INV __attribute__((section("sfrs"),address(0xBF8035CC)));
#define PMD2 PMD2
extern volatile uint32_t   PMD2 __attribute__((section("sfrs"), address(0xBF8035D0)));
typedef struct {
  uint32_t CMP1MD:1;
  uint32_t CMP2MD:1;
  uint32_t CMP3MD:1;
  uint32_t :21;
  uint32_t CLC1MD:1;
  uint32_t CLC2MD:1;
  uint32_t CLC3MD:1;
  uint32_t CLC4MD:1;
} __PMD2bits_t;
extern volatile __PMD2bits_t PMD2bits __asm__ ("PMD2") __attribute__((section("sfrs"), address(0xBF8035D0)));
extern volatile uint32_t        PMD2CLR __attribute__((section("sfrs"),address(0xBF8035D4)));
extern volatile uint32_t        PMD2SET __attribute__((section("sfrs"),address(0xBF8035D8)));
extern volatile uint32_t        PMD2INV __attribute__((section("sfrs"),address(0xBF8035DC)));
#define PMD3 PMD3
extern volatile uint32_t   PMD3 __attribute__((section("sfrs"), address(0xBF8035E0)));
typedef struct {
  uint32_t :8;
  uint32_t CCP1MD:1;
  uint32_t CCP2MD:1;
  uint32_t CCP3MD:1;
  uint32_t CCP4MD:1;
  uint32_t CC5MD:1;
  uint32_t CC6MD:1;
  uint32_t CC7MD:1;
  uint32_t CC8MD:1;
  uint32_t CC9MD:1;
} __PMD3bits_t;
extern volatile __PMD3bits_t PMD3bits __asm__ ("PMD3") __attribute__((section("sfrs"), address(0xBF8035E0)));
extern volatile uint32_t        PMD3CLR __attribute__((section("sfrs"),address(0xBF8035E4)));
extern volatile uint32_t        PMD3SET __attribute__((section("sfrs"),address(0xBF8035E8)));
extern volatile uint32_t        PMD3INV __attribute__((section("sfrs"),address(0xBF8035EC)));
#define PMD4 PMD4
extern volatile uint32_t   PMD4 __attribute__((section("sfrs"), address(0xBF8035F0)));
typedef struct {
  uint32_t T1MD:1;
  uint32_t T2MD:1;
  uint32_t T3MD:1;
} __PMD4bits_t;
extern volatile __PMD4bits_t PMD4bits __asm__ ("PMD4") __attribute__((section("sfrs"), address(0xBF8035F0)));
extern volatile uint32_t        PMD4CLR __attribute__((section("sfrs"),address(0xBF8035F4)));
extern volatile uint32_t        PMD4SET __attribute__((section("sfrs"),address(0xBF8035F8)));
extern volatile uint32_t        PMD4INV __attribute__((section("sfrs"),address(0xBF8035FC)));
#define PMD5 PMD5
extern volatile uint32_t   PMD5 __attribute__((section("sfrs"), address(0xBF803600)));
typedef struct {
  uint32_t U1MD:1;
  uint32_t U2MD:1;
  uint32_t U3MD:1;
  uint32_t :5;
  uint32_t SPI1MD:1;
  uint32_t SPI2MD:1;
  uint32_t SPI3MD:1;
  uint32_t :5;
  uint32_t I2C1MD:1;
  uint32_t I2C2MD:1;
  uint32_t I2C3MD:1;
  uint32_t :5;
  uint32_t USBMD:1;
} __PMD5bits_t;
extern volatile __PMD5bits_t PMD5bits __asm__ ("PMD5") __attribute__((section("sfrs"), address(0xBF803600)));
extern volatile uint32_t        PMD5CLR __attribute__((section("sfrs"),address(0xBF803604)));
extern volatile uint32_t        PMD5SET __attribute__((section("sfrs"),address(0xBF803608)));
extern volatile uint32_t        PMD5INV __attribute__((section("sfrs"),address(0xBF80360C)));
#define PMD6 PMD6
extern volatile uint32_t   PMD6 __attribute__((section("sfrs"), address(0xBF803610)));
typedef struct {
  uint32_t RTCCMD:1;
  uint32_t :7;
  uint32_t REFOMD:1;
} __PMD6bits_t;
extern volatile __PMD6bits_t PMD6bits __asm__ ("PMD6") __attribute__((section("sfrs"), address(0xBF803610)));
extern volatile uint32_t        PMD6CLR __attribute__((section("sfrs"),address(0xBF803614)));
extern volatile uint32_t        PMD6SET __attribute__((section("sfrs"),address(0xBF803618)));
extern volatile uint32_t        PMD6INV __attribute__((section("sfrs"),address(0xBF80361C)));
#define PMD7 PMD7
extern volatile uint32_t   PMD7 __attribute__((section("sfrs"), address(0xBF803620)));
typedef struct {
  uint32_t :4;
  uint32_t DMAMD:1;
} __PMD7bits_t;
extern volatile __PMD7bits_t PMD7bits __asm__ ("PMD7") __attribute__((section("sfrs"), address(0xBF803620)));
extern volatile uint32_t        PMD7CLR __attribute__((section("sfrs"),address(0xBF803624)));
extern volatile uint32_t        PMD7SET __attribute__((section("sfrs"),address(0xBF803628)));
extern volatile uint32_t        PMD7INV __attribute__((section("sfrs"),address(0xBF80362C)));
#define CFGCON CFGCON
extern volatile uint32_t   CFGCON __attribute__((section("sfrs"), address(0xBF803640)));
typedef struct {
  uint32_t TDOEN:1;
  uint32_t FAEN:1;
  uint32_t :1;
  uint32_t JTAGEN:1;
  uint32_t :4;
  uint32_t RPFA:1;
  uint32_t :7;
  uint32_t EXECADDR:8;
  uint32_t BMXARB:2;
  uint32_t :1;
  uint32_t BMXERRDIS:1;
} __CFGCONbits_t;
extern volatile __CFGCONbits_t CFGCONbits __asm__ ("CFGCON") __attribute__((section("sfrs"), address(0xBF803640)));
extern volatile uint32_t        CFGCONCLR __attribute__((section("sfrs"),address(0xBF803644)));
extern volatile uint32_t        CFGCONSET __attribute__((section("sfrs"),address(0xBF803648)));
extern volatile uint32_t        CFGCONINV __attribute__((section("sfrs"),address(0xBF80364C)));
#define DEVID DEVID
extern volatile uint32_t   DEVID __attribute__((section("sfrs"), address(0xBF803660)));
typedef struct {
  uint32_t MAINID:12;
  uint32_t PN:16;
  uint32_t VER:4;
} __DEVIDbits_t;
extern volatile __DEVIDbits_t DEVIDbits __asm__ ("DEVID") __attribute__((section("sfrs"), address(0xBF803660)));
extern volatile uint32_t        DEVIDCLR __attribute__((section("sfrs"),address(0xBF803664)));
extern volatile uint32_t        DEVIDSET __attribute__((section("sfrs"),address(0xBF803668)));
extern volatile uint32_t        DEVIDINV __attribute__((section("sfrs"),address(0xBF80366C)));
#define SYSKEY SYSKEY
extern volatile uint32_t   SYSKEY __attribute__((section("sfrs"), address(0xBF803670)));
typedef struct {
  uint32_t SYSKEY:32;
} __SYSKEYbits_t;
extern volatile __SYSKEYbits_t SYSKEYbits __asm__ ("SYSKEY") __attribute__((section("sfrs"), address(0xBF803670)));
extern volatile uint32_t        SYSKEYCLR __attribute__((section("sfrs"),address(0xBF803674)));
extern volatile uint32_t        SYSKEYSET __attribute__((section("sfrs"),address(0xBF803678)));
extern volatile uint32_t        SYSKEYINV __attribute__((section("sfrs"),address(0xBF80367C)));
#define WDTCON WDTCON
extern volatile uint32_t   WDTCON __attribute__((section("sfrs"), address(0xBF803990)));
typedef struct {
  uint32_t WDTWINEN:1;
  uint32_t SLPDIV:5;
  uint32_t CLKSEL:2;
  uint32_t RUNDIV:5;
  uint32_t :2;
  uint32_t ON:1;
  uint32_t WDTCLRKEY:16;
} __WDTCONbits_t;
extern volatile __WDTCONbits_t WDTCONbits __asm__ ("WDTCON") __attribute__((section("sfrs"), address(0xBF803990)));
extern volatile uint32_t        WDTCONCLR __attribute__((section("sfrs"),address(0xBF803994)));
extern volatile uint32_t        WDTCONSET __attribute__((section("sfrs"),address(0xBF803998)));
extern volatile uint32_t        WDTCONINV __attribute__((section("sfrs"),address(0xBF80399C)));
#define T1CON T1CON
extern volatile uint32_t   T1CON __attribute__((section("sfrs"), address(0xBF808000)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TCS:1;
    uint32_t TSYNC:1;
    uint32_t :1;
    uint32_t TCKPS:2;
    uint32_t :1;
    uint32_t TGATE:1;
    uint32_t TECS:2;
    uint32_t :1;
    uint32_t TWIP:1;
    uint32_t TWDIS:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :4;
    uint32_t TCKPS0:1;
    uint32_t TCKPS1:1;
    uint32_t :2;
    uint32_t TECS0:1;
    uint32_t TECS1:1;
  };
  struct {
    uint32_t :13;
    uint32_t TSIDL:1;
    uint32_t :1;
    uint32_t TON:1;
  };
  struct {
    uint32_t w:32;
  };
} __T1CONbits_t;
extern volatile __T1CONbits_t T1CONbits __asm__ ("T1CON") __attribute__((section("sfrs"), address(0xBF808000)));
extern volatile uint32_t        T1CONCLR __attribute__((section("sfrs"),address(0xBF808004)));
extern volatile uint32_t        T1CONSET __attribute__((section("sfrs"),address(0xBF808008)));
extern volatile uint32_t        T1CONINV __attribute__((section("sfrs"),address(0xBF80800C)));
#define TMR1 TMR1
extern volatile uint32_t   TMR1 __attribute__((section("sfrs"), address(0xBF808010)));
extern volatile uint32_t        TMR1CLR __attribute__((section("sfrs"),address(0xBF808014)));
extern volatile uint32_t        TMR1SET __attribute__((section("sfrs"),address(0xBF808018)));
extern volatile uint32_t        TMR1INV __attribute__((section("sfrs"),address(0xBF80801C)));
#define PR1 PR1
extern volatile uint32_t   PR1 __attribute__((section("sfrs"), address(0xBF808020)));
extern volatile uint32_t        PR1CLR __attribute__((section("sfrs"),address(0xBF808024)));
extern volatile uint32_t        PR1SET __attribute__((section("sfrs"),address(0xBF808028)));
extern volatile uint32_t        PR1INV __attribute__((section("sfrs"),address(0xBF80802C)));
#define T2CON T2CON
extern volatile uint32_t   T2CON __attribute__((section("sfrs"), address(0xBF808040)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TCS:1;
    uint32_t :1;
    uint32_t T32:1;
    uint32_t TCKPS:3;
    uint32_t TGATE:1;
    uint32_t :5;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :4;
    uint32_t TCKPS0:1;
    uint32_t TCKPS1:1;
    uint32_t TCKPS2:1;
  };
  struct {
    uint32_t :13;
    uint32_t TSIDL:1;
    uint32_t :1;
    uint32_t TON:1;
  };
  struct {
    uint32_t w:32;
  };
} __T2CONbits_t;
extern volatile __T2CONbits_t T2CONbits __asm__ ("T2CON") __attribute__((section("sfrs"), address(0xBF808040)));
extern volatile uint32_t        T2CONCLR __attribute__((section("sfrs"),address(0xBF808044)));
extern volatile uint32_t        T2CONSET __attribute__((section("sfrs"),address(0xBF808048)));
extern volatile uint32_t        T2CONINV __attribute__((section("sfrs"),address(0xBF80804C)));
#define TMR2 TMR2
extern volatile uint32_t   TMR2 __attribute__((section("sfrs"), address(0xBF808050)));
extern volatile uint32_t        TMR2CLR __attribute__((section("sfrs"),address(0xBF808054)));
extern volatile uint32_t        TMR2SET __attribute__((section("sfrs"),address(0xBF808058)));
extern volatile uint32_t        TMR2INV __attribute__((section("sfrs"),address(0xBF80805C)));
#define PR2 PR2
extern volatile uint32_t   PR2 __attribute__((section("sfrs"), address(0xBF808060)));
extern volatile uint32_t        PR2CLR __attribute__((section("sfrs"),address(0xBF808064)));
extern volatile uint32_t        PR2SET __attribute__((section("sfrs"),address(0xBF808068)));
extern volatile uint32_t        PR2INV __attribute__((section("sfrs"),address(0xBF80806C)));
#define T3CON T3CON
extern volatile uint32_t   T3CON __attribute__((section("sfrs"), address(0xBF808080)));
typedef union {
  struct {
    uint32_t :1;
    uint32_t TCS:1;
    uint32_t :1;
    uint32_t T32:1;
    uint32_t TCKPS:3;
    uint32_t TGATE:1;
    uint32_t :5;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
  };
  struct {
    uint32_t :4;
    uint32_t TCKPS0:1;
    uint32_t TCKPS1:1;
    uint32_t TCKPS2:1;
  };
  struct {
    uint32_t :13;
    uint32_t TSIDL:1;
    uint32_t :1;
    uint32_t TON:1;
  };
  struct {
    uint32_t w:32;
  };
} __T3CONbits_t;
extern volatile __T3CONbits_t T3CONbits __asm__ ("T3CON") __attribute__((section("sfrs"), address(0xBF808080)));
extern volatile uint32_t        T3CONCLR __attribute__((section("sfrs"),address(0xBF808084)));
extern volatile uint32_t        T3CONSET __attribute__((section("sfrs"),address(0xBF808088)));
extern volatile uint32_t        T3CONINV __attribute__((section("sfrs"),address(0xBF80808C)));
#define TMR3 TMR3
extern volatile uint32_t   TMR3 __attribute__((section("sfrs"), address(0xBF808090)));
extern volatile uint32_t        TMR3CLR __attribute__((section("sfrs"),address(0xBF808094)));
extern volatile uint32_t        TMR3SET __attribute__((section("sfrs"),address(0xBF808098)));
extern volatile uint32_t        TMR3INV __attribute__((section("sfrs"),address(0xBF80809C)));
#define PR3 PR3
extern volatile uint32_t   PR3 __attribute__((section("sfrs"), address(0xBF8080A0)));
extern volatile uint32_t        PR3CLR __attribute__((section("sfrs"),address(0xBF8080A4)));
extern volatile uint32_t        PR3SET __attribute__((section("sfrs"),address(0xBF8080A8)));
extern volatile uint32_t        PR3INV __attribute__((section("sfrs"),address(0xBF8080AC)));
#define SPI1CON SPI1CON
extern volatile uint32_t   SPI1CON __attribute__((section("sfrs"), address(0xBF808100)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t DISSDI:1;
    uint32_t MSTEN:1;
    uint32_t CKP:1;
    uint32_t SSEN:1;
    uint32_t CKE:1;
    uint32_t SMP:1;
    uint32_t MODE16:1;
    uint32_t MODE32:1;
    uint32_t DISSDO:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t ENHBUF:1;
    uint32_t SPIFE:1;
    uint32_t :5;
    uint32_t MCLKSEL:1;
    uint32_t FRMCNT:3;
    uint32_t FRMSYPW:1;
    uint32_t MSSEN:1;
    uint32_t FRMPOL:1;
    uint32_t FRMSYNC:1;
    uint32_t FRMEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI1CONbits_t;
extern volatile __SPI1CONbits_t SPI1CONbits __asm__ ("SPI1CON") __attribute__((section("sfrs"), address(0xBF808100)));
extern volatile uint32_t        SPI1CONCLR __attribute__((section("sfrs"),address(0xBF808104)));
extern volatile uint32_t        SPI1CONSET __attribute__((section("sfrs"),address(0xBF808108)));
extern volatile uint32_t        SPI1CONINV __attribute__((section("sfrs"),address(0xBF80810C)));
#define SPI1STAT SPI1STAT
extern volatile uint32_t   SPI1STAT __attribute__((section("sfrs"), address(0xBF808110)));
typedef union {
  struct {
    uint32_t SPIRBF:1;
    uint32_t SPITBF:1;
    uint32_t :1;
    uint32_t SPITBE:1;
    uint32_t :1;
    uint32_t SPIRBE:1;
    uint32_t SPIROV:1;
    uint32_t SRMT:1;
    uint32_t SPITUR:1;
    uint32_t :2;
    uint32_t SPIBUSY:1;
    uint32_t FRMERR:1;
    uint32_t :3;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI1STATbits_t;
extern volatile __SPI1STATbits_t SPI1STATbits __asm__ ("SPI1STAT") __attribute__((section("sfrs"), address(0xBF808110)));
extern volatile uint32_t        SPI1STATCLR __attribute__((section("sfrs"),address(0xBF808114)));
extern volatile uint32_t        SPI1STATSET __attribute__((section("sfrs"),address(0xBF808118)));
extern volatile uint32_t        SPI1STATINV __attribute__((section("sfrs"),address(0xBF80811C)));
#define SPI1BUF SPI1BUF
extern volatile uint32_t   SPI1BUF __attribute__((section("sfrs"), address(0xBF808120)));
#define SPI1BRG SPI1BRG
extern volatile uint32_t   SPI1BRG __attribute__((section("sfrs"), address(0xBF808130)));
extern volatile uint32_t        SPI1BRGCLR __attribute__((section("sfrs"),address(0xBF808134)));
extern volatile uint32_t        SPI1BRGSET __attribute__((section("sfrs"),address(0xBF808138)));
extern volatile uint32_t        SPI1BRGINV __attribute__((section("sfrs"),address(0xBF80813C)));
#define SPI1CON2 SPI1CON2
extern volatile uint32_t   SPI1CON2 __attribute__((section("sfrs"), address(0xBF808140)));
typedef union {
  struct {
    uint32_t AUDMOD:2;
    uint32_t :1;
    uint32_t AUDMONO:1;
    uint32_t :3;
    uint32_t AUDEN:1;
    uint32_t IGNTUR:1;
    uint32_t IGNROV:1;
    uint32_t SPITUREN:1;
    uint32_t SPIROVEN:1;
    uint32_t FRMERREN:1;
    uint32_t :2;
    uint32_t SPISGNEXT:1;
  };
  struct {
    uint32_t AUDMOD0:1;
    uint32_t AUDMOD1:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI1CON2bits_t;
extern volatile __SPI1CON2bits_t SPI1CON2bits __asm__ ("SPI1CON2") __attribute__((section("sfrs"), address(0xBF808140)));
extern volatile uint32_t        SPI1CON2CLR __attribute__((section("sfrs"),address(0xBF808144)));
extern volatile uint32_t        SPI1CON2SET __attribute__((section("sfrs"),address(0xBF808148)));
extern volatile uint32_t        SPI1CON2INV __attribute__((section("sfrs"),address(0xBF80814C)));
#define SPI2CON SPI2CON
extern volatile uint32_t   SPI2CON __attribute__((section("sfrs"), address(0xBF808200)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t DISSDI:1;
    uint32_t MSTEN:1;
    uint32_t CKP:1;
    uint32_t SSEN:1;
    uint32_t CKE:1;
    uint32_t SMP:1;
    uint32_t MODE16:1;
    uint32_t MODE32:1;
    uint32_t DISSDO:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t ENHBUF:1;
    uint32_t SPIFE:1;
    uint32_t :5;
    uint32_t MCLKSEL:1;
    uint32_t FRMCNT:3;
    uint32_t FRMSYPW:1;
    uint32_t MSSEN:1;
    uint32_t FRMPOL:1;
    uint32_t FRMSYNC:1;
    uint32_t FRMEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI2CONbits_t;
extern volatile __SPI2CONbits_t SPI2CONbits __asm__ ("SPI2CON") __attribute__((section("sfrs"), address(0xBF808200)));
extern volatile uint32_t        SPI2CONCLR __attribute__((section("sfrs"),address(0xBF808204)));
extern volatile uint32_t        SPI2CONSET __attribute__((section("sfrs"),address(0xBF808208)));
extern volatile uint32_t        SPI2CONINV __attribute__((section("sfrs"),address(0xBF80820C)));
#define SPI2STAT SPI2STAT
extern volatile uint32_t   SPI2STAT __attribute__((section("sfrs"), address(0xBF808210)));
typedef union {
  struct {
    uint32_t SPIRBF:1;
    uint32_t SPITBF:1;
    uint32_t :1;
    uint32_t SPITBE:1;
    uint32_t :1;
    uint32_t SPIRBE:1;
    uint32_t SPIROV:1;
    uint32_t SRMT:1;
    uint32_t SPITUR:1;
    uint32_t :2;
    uint32_t SPIBUSY:1;
    uint32_t FRMERR:1;
    uint32_t :3;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI2STATbits_t;
extern volatile __SPI2STATbits_t SPI2STATbits __asm__ ("SPI2STAT") __attribute__((section("sfrs"), address(0xBF808210)));
extern volatile uint32_t        SPI2STATCLR __attribute__((section("sfrs"),address(0xBF808214)));
extern volatile uint32_t        SPI2STATSET __attribute__((section("sfrs"),address(0xBF808218)));
extern volatile uint32_t        SPI2STATINV __attribute__((section("sfrs"),address(0xBF80821C)));
#define SPI2BUF SPI2BUF
extern volatile uint32_t   SPI2BUF __attribute__((section("sfrs"), address(0xBF808220)));
#define SPI2BRG SPI2BRG
extern volatile uint32_t   SPI2BRG __attribute__((section("sfrs"), address(0xBF808230)));
extern volatile uint32_t        SPI2BRGCLR __attribute__((section("sfrs"),address(0xBF808234)));
extern volatile uint32_t        SPI2BRGSET __attribute__((section("sfrs"),address(0xBF808238)));
extern volatile uint32_t        SPI2BRGINV __attribute__((section("sfrs"),address(0xBF80823C)));
#define SPI2CON2 SPI2CON2
extern volatile uint32_t   SPI2CON2 __attribute__((section("sfrs"), address(0xBF808240)));
typedef union {
  struct {
    uint32_t AUDMOD:2;
    uint32_t :1;
    uint32_t AUDMONO:1;
    uint32_t :3;
    uint32_t AUDEN:1;
    uint32_t IGNTUR:1;
    uint32_t IGNROV:1;
    uint32_t SPITUREN:1;
    uint32_t SPIROVEN:1;
    uint32_t FRMERREN:1;
    uint32_t :2;
    uint32_t SPISGNEXT:1;
  };
  struct {
    uint32_t AUDMOD0:1;
    uint32_t AUDMOD1:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI2CON2bits_t;
extern volatile __SPI2CON2bits_t SPI2CON2bits __asm__ ("SPI2CON2") __attribute__((section("sfrs"), address(0xBF808240)));
extern volatile uint32_t        SPI2CON2CLR __attribute__((section("sfrs"),address(0xBF808244)));
extern volatile uint32_t        SPI2CON2SET __attribute__((section("sfrs"),address(0xBF808248)));
extern volatile uint32_t        SPI2CON2INV __attribute__((section("sfrs"),address(0xBF80824C)));
#define SPI3CON SPI3CON
extern volatile uint32_t   SPI3CON __attribute__((section("sfrs"), address(0xBF808300)));
typedef union {
  struct {
    uint32_t SRXISEL:2;
    uint32_t STXISEL:2;
    uint32_t DISSDI:1;
    uint32_t MSTEN:1;
    uint32_t CKP:1;
    uint32_t SSEN:1;
    uint32_t CKE:1;
    uint32_t SMP:1;
    uint32_t MODE16:1;
    uint32_t MODE32:1;
    uint32_t DISSDO:1;
    uint32_t SIDL:1;
    uint32_t :1;
    uint32_t ON:1;
    uint32_t ENHBUF:1;
    uint32_t SPIFE:1;
    uint32_t :5;
    uint32_t MCLKSEL:1;
    uint32_t FRMCNT:3;
    uint32_t FRMSYPW:1;
    uint32_t MSSEN:1;
    uint32_t FRMPOL:1;
    uint32_t FRMSYNC:1;
    uint32_t FRMEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI3CONbits_t;
extern volatile __SPI3CONbits_t SPI3CONbits __asm__ ("SPI3CON") __attribute__((section("sfrs"), address(0xBF808300)));
extern volatile uint32_t        SPI3CONCLR __attribute__((section("sfrs"),address(0xBF808304)));
extern volatile uint32_t        SPI3CONSET __attribute__((section("sfrs"),address(0xBF808308)));
extern volatile uint32_t        SPI3CONINV __attribute__((section("sfrs"),address(0xBF80830C)));
#define SPI3STAT SPI3STAT
extern volatile uint32_t   SPI3STAT __attribute__((section("sfrs"), address(0xBF808310)));
typedef union {
  struct {
    uint32_t SPIRBF:1;
    uint32_t SPITBF:1;
    uint32_t :1;
    uint32_t SPITBE:1;
    uint32_t :1;
    uint32_t SPIRBE:1;
    uint32_t SPIROV:1;
    uint32_t SRMT:1;
    uint32_t SPITUR:1;
    uint32_t :2;
    uint32_t SPIBUSY:1;
    uint32_t FRMERR:1;
    uint32_t :3;
    uint32_t TXBUFELM:5;
    uint32_t :3;
    uint32_t RXBUFELM:5;
  };
  struct {
    uint32_t w:32;
  };
} __SPI3STATbits_t;
extern volatile __SPI3STATbits_t SPI3STATbits __asm__ ("SPI3STAT") __attribute__((section("sfrs"), address(0xBF808310)));
extern volatile uint32_t        SPI3STATCLR __attribute__((section("sfrs"),address(0xBF808314)));
extern volatile uint32_t        SPI3STATSET __attribute__((section("sfrs"),address(0xBF808318)));
extern volatile uint32_t        SPI3STATINV __attribute__((section("sfrs"),address(0xBF80831C)));
#define SPI3BUF SPI3BUF
extern volatile uint32_t   SPI3BUF __attribute__((section("sfrs"), address(0xBF808320)));
#define SPI3BRG SPI3BRG
extern volatile uint32_t   SPI3BRG __attribute__((section("sfrs"), address(0xBF808330)));
extern volatile uint32_t        SPI3BRGCLR __attribute__((section("sfrs"),address(0xBF808334)));
extern volatile uint32_t        SPI3BRGSET __attribute__((section("sfrs"),address(0xBF808338)));
extern volatile uint32_t        SPI3BRGINV __attribute__((section("sfrs"),address(0xBF80833C)));
#define SPI3CON2 SPI3CON2
extern volatile uint32_t   SPI3CON2 __attribute__((section("sfrs"), address(0xBF808340)));
typedef union {
  struct {
    uint32_t AUDMOD:2;
    uint32_t :1;
    uint32_t AUDMONO:1;
    uint32_t :3;
    uint32_t AUDEN:1;
    uint32_t IGNTUR:1;
    uint32_t IGNROV:1;
    uint32_t SPITUREN:1;
    uint32_t SPIROVEN:1;
    uint32_t FRMERREN:1;
    uint32_t :2;
    uint32_t SPISGNEXT:1;
  };
  struct {
    uint32_t AUDMOD0:1;
    uint32_t AUDMOD1:1;
  };
  struct {
    uint32_t w:32;
  };
} __SPI3CON2bits_t;
extern volatile __SPI3CON2bits_t SPI3CON2bits __asm__ ("SPI3CON2") __attribute__((section("sfrs"), address(0xBF808340)));
extern volatile uint32_t        SPI3CON2CLR __attribute__((section("sfrs"),address(0xBF808344)));
extern volatile uint32_t        SPI3CON2SET __attribute__((section("sfrs"),address(0xBF808348)));
extern volatile uint32_t        SPI3CON2INV __attribute__((section("sfrs"),address(0xBF80834C)));
#define U1OTGIR U1OTGIR
extern volatile uint32_t   U1OTGIR __attribute__((section("sfrs"), address(0xBF808440)));
typedef struct {
  uint32_t VBUSVDIF:1;
  uint32_t :1;
  uint32_t SESENDIF:1;
  uint32_t SESVDIF:1;
  uint32_t ACTVIF:1;
  uint32_t LSTATEIF:1;
  uint32_t T1MSECIF:1;
  uint32_t IDIF:1;
} __U1OTGIRbits_t;
extern volatile __U1OTGIRbits_t U1OTGIRbits __asm__ ("U1OTGIR") __attribute__((section("sfrs"), address(0xBF808440)));
extern volatile uint32_t        U1OTGIRCLR __attribute__((section("sfrs"),address(0xBF808444)));
#define U1OTGIE U1OTGIE
extern volatile uint32_t   U1OTGIE __attribute__((section("sfrs"), address(0xBF808450)));
typedef struct {
  uint32_t VBUSVDIE:1;
  uint32_t :1;
  uint32_t SESENDIE:1;
  uint32_t SESVDIE:1;
  uint32_t ACTVIE:1;
  uint32_t LSTATEIE:1;
  uint32_t T1MSECIE:1;
  uint32_t IDIE:1;
} __U1OTGIEbits_t;
extern volatile __U1OTGIEbits_t U1OTGIEbits __asm__ ("U1OTGIE") __attribute__((section("sfrs"), address(0xBF808450)));
extern volatile uint32_t        U1OTGIECLR __attribute__((section("sfrs"),address(0xBF808454)));
extern volatile uint32_t        U1OTGIESET __attribute__((section("sfrs"),address(0xBF808458)));
extern volatile uint32_t        U1OTGIEINV __attribute__((section("sfrs"),address(0xBF80845C)));
#define U1OTGSTAT U1OTGSTAT
extern volatile uint32_t   U1OTGSTAT __attribute__((section("sfrs"), address(0xBF808460)));
typedef struct {
  uint32_t VBUSVD:1;
  uint32_t :1;
  uint32_t SESEND:1;
  uint32_t SESVD:1;
  uint32_t :1;
  uint32_t LSTATE:1;
  uint32_t :1;
  uint32_t ID:1;
} __U1OTGSTATbits_t;
extern volatile __U1OTGSTATbits_t U1OTGSTATbits __asm__ ("U1OTGSTAT") __attribute__((section("sfrs"), address(0xBF808460)));
#define U1OTGCON U1OTGCON
extern volatile uint32_t   U1OTGCON __attribute__((section("sfrs"), address(0xBF808470)));
typedef struct {
  uint32_t VBUSDIS:1;
  uint32_t VBUSCHG:1;
  uint32_t OTGEN:1;
  uint32_t VBUSON:1;
  uint32_t DMPULDWN:1;
  uint32_t DPPULDWN:1;
  uint32_t DMPULUP:1;
  uint32_t DPPULUP:1;
} __U1OTGCONbits_t;
extern volatile __U1OTGCONbits_t U1OTGCONbits __asm__ ("U1OTGCON") __attribute__((section("sfrs"), address(0xBF808470)));
extern volatile uint32_t        U1OTGCONCLR __attribute__((section("sfrs"),address(0xBF808474)));
extern volatile uint32_t        U1OTGCONSET __attribute__((section("sfrs"),address(0xBF808478)));
extern volatile uint32_t        U1OTGCONINV __attribute__((section("sfrs"),address(0xBF80847C)));
#define U1PWRC U1PWRC
extern volatile uint32_t   U1PWRC __attribute__((section("sfrs"), address(0xBF808480)));
typedef struct {
  uint32_t USBPWR:1;
  uint32_t USUSPEND:1;
  uint32_t :1;
  uint32_t USBBUSY:1;
  uint32_t USLPGRD:1;
  uint32_t :2;
  uint32_t UACTPND:1;
} __U1PWRCbits_t;
extern volatile __U1PWRCbits_t U1PWRCbits __asm__ ("U1PWRC") __attribute__((section("sfrs"), address(0xBF808480)));
extern volatile uint32_t        U1PWRCCLR __attribute__((section("sfrs"),address(0xBF808484)));
extern volatile uint32_t        U1PWRCSET __attribute__((section("sfrs"),address(0xBF808488)));
extern volatile uint32_t        U1PWRCINV __attribute__((section("sfrs"),address(0xBF80848C)));
#define U1IR U1IR
extern volatile uint32_t   U1IR __attribute__((section("sfrs"), address(0xBF808600)));
typedef union {
  struct {
    uint32_t URSTIF_DETACHIF:1;
    uint32_t UERRIF:1;
    uint32_t SOFIF:1;
    uint32_t TRNIF:1;
    uint32_t IDLEIF:1;
    uint32_t RESUMEIF:1;
    uint32_t ATTACHIF:1;
    uint32_t STALLIF:1;
  };
  struct {
    uint32_t DETACHIF:1;
  };
  struct {
    uint32_t URSTIF:1;
  };
} __U1IRbits_t;
extern volatile __U1IRbits_t U1IRbits __asm__ ("U1IR") __attribute__((section("sfrs"), address(0xBF808600)));
extern volatile uint32_t        U1IRCLR __attribute__((section("sfrs"),address(0xBF808604)));
#define U1IE U1IE
extern volatile uint32_t   U1IE __attribute__((section("sfrs"), address(0xBF808610)));
typedef union {
  struct {
    uint32_t URSTIE_DETACHIE:1;
    uint32_t UERRIE:1;
    uint32_t SOFIE:1;
    uint32_t TRNIE:1;
    uint32_t IDLEIE:1;
    uint32_t RESUMEIE:1;
    uint32_t ATTACHIE:1;
    uint32_t STALLIE:1;
  };
  struct {
    uint32_t DETACHIE:1;
  };
  struct {
    uint32_t URSTIE:1;
  };
} __U1IEbits_t;
extern volatile __U1IEbits_t U1IEbits __asm__ ("U1IE") __attribute__((section("sfrs"), address(0xBF808610)));
extern volatile uint32_t        U1IECLR __attribute__((section("sfrs"),address(0xBF808614)));
extern volatile uint32_t        U1IESET __attribute__((section("sfrs"),address(0xBF808618)));
extern volatile uint32_t        U1IEINV __attribute__((section("sfrs"),address(0xBF80861C)));
#define U1EIR U1EIR
extern volatile uint32_t   U1EIR __attribute__((section("sfrs"), address(0xBF808620)));
typedef union {
  struct {
    uint32_t PIDEF:1;
    uint32_t CRC5EF_EOFEF:1;
    uint32_t CRC16EF:1;
    uint32_t DFN8EF:1;
    uint32_t BTOEF:1;
    uint32_t DMAEF:1;
    uint32_t BMXEF:1;
    uint32_t BTSEF:1;
  };
  struct {
    uint32_t :1;
    uint32_t CRC5EF:1;
  };
  struct {
    uint32_t :1;
    uint32_t EOFEF:1;
  };
} __U1EIRbits_t;
extern volatile __U1EIRbits_t U1EIRbits __asm__ ("U1EIR") __attribute__((section("sfrs"), address(0xBF808620)));
extern volatile uint32_t        U1EIRCLR __attribute__((section("sfrs"),address(0xBF808624)));
#define U1EIE U1EIE
extern volatile uint32_t   U1EIE __attribute__((section("sfrs"), address(0xBF808630)));
typedef union {
  struct {
    uint32_t PIDEE:1;
    uint32_t CRC5EE_EOFEE:1;
    uint32_t CRC16EE:1;
    uint32_t DFN8EE:1;
    uint32_t BTOEE:1;
    uint32_t DMAEE:1;
    uint32_t BMXEE:1;
    uint32_t BTSEE:1;
  };
  struct {
    uint32_t :1;
    uint32_t CRC5EE:1;
  };
  struct {
    uint32_t :1;
    uint32_t EOFEE:1;
  };
} __U1EIEbits_t;
extern volatile __U1EIEbits_t U1EIEbits __asm__ ("U1EIE") __attribute__((section("sfrs"), address(0xBF808630)));
extern volatile uint32_t        U1EIECLR __attribute__((section("sfrs"),address(0xBF808634)));
extern volatile uint32_t        U1EIESET __attribute__((section("sfrs"),address(0xBF808638)));
extern volatile uint32_t        U1EIEINV __attribute__((section("sfrs"),address(0xBF80863C)));
#define U1STAT U1STAT
extern volatile uint32_t   U1STAT __attribute__((section("sfrs"), address(0xBF808640)));
typedef union {
  struct {
    uint32_t :2;
    uint32_t PPBI:1;
    uint32_t DIR:1;
    uint32_t ENDPT:4;
  };
  struct {
    uint32_t :4;
    uint32_t ENDPT0:1;
    uint32_t ENDPT1:1;
    uint32_t ENDPT2:1;
    uint32_t ENDPT3:1;
  };
} __U1STATbits_t;
extern volatile __U1STATbits_t U1STATbits __asm__ ("U1STAT") __attribute__((section("sfrs"), address(0xBF808640)));
#define U1CON U1CON
extern volatile uint32_t   U1CON __attribute__((section("sfrs"), address(0xBF808650)));
typedef union {
  struct {
    uint32_t USBEN_SOFEN:1;
    uint32_t PPBRST:1;
    uint32_t RESUME:1;
    uint32_t HOSTEN:1;
    uint32_t USBRST:1;
    uint32_t PKTDIS_TOKBUSY:1;
    uint32_t SE0:1;
    uint32_t JSTATE:1;
  };
  struct {
    uint32_t USBEN:1;
  };
  struct {
    uint32_t SOFEN:1;
    uint32_t :4;
    uint32_t PKTDIS:1;
  };
  struct {
    uint32_t :5;
    uint32_t TOKBUSY:1;
  };
} __U1CONbits_t;
extern volatile __U1CONbits_t U1CONbits __asm__ ("U1CON") __attribute__((section("sfrs"), address(0xBF808650)));
extern volatile uint32_t        U1CONCLR __attribute__((section("sfrs"),address(0xBF808654)));
extern volatile uint32_t        U1CONSET __attribute__((section("sfrs"),address(0xBF808658)));
extern volatile uint32_t        U1CONINV __attribute__((section("sfrs"),address(0xBF80865C)));
#define U1ADDR U1ADDR
extern volatile uint32_t   U1ADDR __attribute__((section("sfrs"), address(0xBF808660)));
typedef union {
  struct {
    uint32_t DEVADDR:7;
    uint32_t LSPDEN:1;
  };
  struct {
    uint32_t DEVADDR0:1;
    uint32_t DEVADDR1:1;
    uint32_t DEVADDR2:1;
    uint32_t DEVADDR3:1;
    uint32_t DEVADDR4:1;
    uint32_t DEVADDR5:1;
    uint32_t DEVADDR6:1;
  };
} __U1ADDRbits_t;
extern volatile __U1ADDRbits_t U1ADDRbits __asm__ ("U1ADDR") __attribute__((section("sfrs"), address(0xBF808660)));
extern volatile uint32_t        U1ADDRCLR __attribute__((section("sfrs"),address(0xBF808664)));
extern volatile uint32_t        U1ADDRSET __attribute__((section("sfrs"),address(0xBF808668)));
extern volatile uint32_t        U1ADDRINV __attribute__((section("sfrs"),address(0xBF80866C)));
#define U1BDTP1 U1BDTP1
extern volatile uint32_t   U1BDTP1 __attribute__((section("sfrs"), address(0xBF808670)));
typedef struct {
  uint32_t :1;
  uint32_t BDTPTRL:7;
} __U1BDTP1bits_t;
extern volatile __U1BDTP1bits_t U1BDTP1bits __asm__ ("U1BDTP1") __attribute__((section("sfrs"), address(0xBF808670)));
extern volatile uint32_t        U1BDTP1CLR __attribute__((section("sfrs"),address(0xBF808674)));
extern volatile uint32_t        U1BDTP1SET __attribute__((section("sfrs"),address(0xBF808678)));
extern volatile uint32_t        U1BDTP1INV __attribute__((section("sfrs"),address(0xBF80867C)));
#define U1FRML U1FRML
extern volatile uint32_t   U1FRML __attribute__((section("sfrs"), address(0xBF808680)));
typedef union {
  struct {
    uint32_t FRML:8;
  };
  struct {
    uint32_t FRM0:1;
    uint32_t FRM1:1;
    uint32_t FRM2:1;
    uint32_t FRM3:1;
    uint32_t FRM4:1;
    uint32_t FRM5:1;
    uint32_t FRM6:1;
    uint32_t FRM7:1;
  };
} __U1FRMLbits_t;
extern volatile __U1FRMLbits_t U1FRMLbits __asm__ ("U1FRML") __attribute__((section("sfrs"), address(0xBF808680)));
#define U1FRMH U1FRMH
extern volatile uint32_t   U1FRMH __attribute__((section("sfrs"), address(0xBF808690)));
typedef union {
  struct {
    uint32_t FRMH:3;
  };
  struct {
    uint32_t FRM8:1;
    uint32_t FRM9:1;
    uint32_t FRM10:1;
  };
} __U1FRMHbits_t;
extern volatile __U1FRMHbits_t U1FRMHbits __asm__ ("U1FRMH") __attribute__((section("sfrs"), address(0xBF808690)));
#define U1TOK U1TOK
extern volatile uint32_t   U1TOK __attribute__((section("sfrs"), address(0xBF8086A0)));
typedef union {
  struct {
    uint32_t EP:4;
    uint32_t PID:4;
  };
  struct {
    uint32_t EP0:1;
  };
  struct {
    uint32_t :1;
    uint32_t EP1:1;
    uint32_t EP2:1;
    uint32_t EP3:1;
    uint32_t PID0:1;
  };
  struct {
    uint32_t :5;
    uint32_t PID1:1;
    uint32_t PID2:1;
    uint32_t PID3:1;
  };
} __U1TOKbits_t;
extern volatile __U1TOKbits_t U1TOKbits __asm__ ("U1TOK") __attribute__((section("sfrs"), address(0xBF8086A0)));
extern volatile uint32_t        U1TOKCLR __attribute__((section("sfrs"),address(0xBF8086A4)));
extern volatile uint32_t        U1TOKSET __attribute__((section("sfrs"),address(0xBF8086A8)));
extern volatile uint32_t        U1TOKINV __attribute__((section("sfrs"),address(0xBF8086AC)));
#define U1SOF U1SOF
extern volatile uint32_t   U1SOF __attribute__((section("sfrs"), address(0xBF8086B0)));
typedef struct {
  uint32_t CNT:8;
} __U1SOFbits_t;
extern volatile __U1SOFbits_t U1SOFbits __asm__ ("U1SOF") __attribute__((section("sfrs"), address(0xBF8086B0)));
extern volatile uint32_t        U1SOFCLR __attribute__((section("sfrs"),address(0xBF8086B4)));
extern volatile uint32_t        U1SOFSET __attribute__((section("sfrs"),address(0xBF8086B8)));
extern volatile uint32_t        U1SOFINV __attribute__((section("sfrs"),address(0xBF8086BC)));
#define U1BDTP2 U1BDTP2
extern volatile uint32_t   U1BDTP2 __attribute__((section("sfrs"), address(0xBF8086C0)));
typedef struct {
  uint32_t BDTPTRH:8;
} __U1BDTP2bits_t;
extern volatile __U1BDTP2bits_t U1BDTP2bits __asm__ ("U1BDTP2") __attribute__((section("sfrs"), address(0xBF8086C0)));
extern volatile uint32_t        U1BDTP2CLR __attribute__((section("sfrs"),address(0xBF8086C4)));
extern volatile uint32_t        U1BDTP2SET __attribute__((section("sfrs"),address(0xBF8086C8)));
extern volatile uint32_t        U1BDTP2INV __attribute__((section("sfrs"),address(0xBF8086CC)));
#define U1BDTP3 U1BDTP3
extern volatile uint32_t   U1BDTP3 __attribute__((section("sfrs"), address(0xBF8086D0)));
typedef struct {
  uint32_t BDTPTRU:8;
} __U1BDTP3bits_t;
extern volatile __U1BDTP3bits_t U1BDTP3bits __asm__ ("U1BDTP3") __attribute__((section("sfrs"), address(0xBF8086D0)));
extern volatile uint32_t        U1BDTP3CLR __attribute__((section("sfrs"),address(0xBF8086D4)));
extern volatile uint32_t        U1BDTP3SET __attribute__((section("sfrs"),address(0xBF8086D8)));
extern volatile uint32_t        U1BDTP3INV __attribute__((section("sfrs"),address(0xBF8086DC)));
#define U1CNFG1 U1CNFG1
extern volatile uint32_t   U1CNFG1 __attribute__((section("sfrs"), address(0xBF8086E0)));
typedef struct {
  uint32_t UASUSPND:1;
  uint32_t :2;
  uint32_t LSDEV:1;
  uint32_t USBSIDL:1;
  uint32_t :1;
  uint32_t UOEMON:1;
  uint32_t UTEYE:1;
} __U1CNFG1bits_t;
extern volatile __U1CNFG1bits_t U1CNFG1bits __asm__ ("U1CNFG1") __attribute__((section("sfrs"), address(0xBF8086E0)));
extern volatile uint32_t        U1CNFG1CLR __attribute__((section("sfrs"),address(0xBF8086E4)));
extern volatile uint32_t        U1CNFG1SET __attribute__((section("sfrs"),address(0xBF8086E8)));
extern volatile uint32_t        U1CNFG1INV __attribute__((section("sfrs"),address(0xBF8086EC)));
#define U1EP0 U1EP0
extern volatile uint32_t   U1EP0 __attribute__((section("sfrs"), address(0xBF808700)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
  uint32_t :1;
  uint32_t RETRYDIS:1;
  uint32_t LSPD:1;
} __U1EP0bits_t;
extern volatile __U1EP0bits_t U1EP0bits __asm__ ("U1EP0") __attribute__((section("sfrs"), address(0xBF808700)));
extern volatile uint32_t        U1EP0CLR __attribute__((section("sfrs"),address(0xBF808704)));
extern volatile uint32_t        U1EP0SET __attribute__((section("sfrs"),address(0xBF808708)));
extern volatile uint32_t        U1EP0INV __attribute__((section("sfrs"),address(0xBF80870C)));
#define U1EP1 U1EP1
extern volatile uint32_t   U1EP1 __attribute__((section("sfrs"), address(0xBF808710)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP1bits_t;
extern volatile __U1EP1bits_t U1EP1bits __asm__ ("U1EP1") __attribute__((section("sfrs"), address(0xBF808710)));
extern volatile uint32_t        U1EP1CLR __attribute__((section("sfrs"),address(0xBF808714)));
extern volatile uint32_t        U1EP1SET __attribute__((section("sfrs"),address(0xBF808718)));
extern volatile uint32_t        U1EP1INV __attribute__((section("sfrs"),address(0xBF80871C)));
#define U1EP2 U1EP2
extern volatile uint32_t   U1EP2 __attribute__((section("sfrs"), address(0xBF808720)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP2bits_t;
extern volatile __U1EP2bits_t U1EP2bits __asm__ ("U1EP2") __attribute__((section("sfrs"), address(0xBF808720)));
extern volatile uint32_t        U1EP2CLR __attribute__((section("sfrs"),address(0xBF808724)));
extern volatile uint32_t        U1EP2SET __attribute__((section("sfrs"),address(0xBF808728)));
extern volatile uint32_t        U1EP2INV __attribute__((section("sfrs"),address(0xBF80872C)));
#define U1EP3 U1EP3
extern volatile uint32_t   U1EP3 __attribute__((section("sfrs"), address(0xBF808730)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP3bits_t;
extern volatile __U1EP3bits_t U1EP3bits __asm__ ("U1EP3") __attribute__((section("sfrs"), address(0xBF808730)));
extern volatile uint32_t        U1EP3CLR __attribute__((section("sfrs"),address(0xBF808734)));
extern volatile uint32_t        U1EP3SET __attribute__((section("sfrs"),address(0xBF808738)));
extern volatile uint32_t        U1EP3INV __attribute__((section("sfrs"),address(0xBF80873C)));
#define U1EP4 U1EP4
extern volatile uint32_t   U1EP4 __attribute__((section("sfrs"), address(0xBF808740)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP4bits_t;
extern volatile __U1EP4bits_t U1EP4bits __asm__ ("U1EP4") __attribute__((section("sfrs"), address(0xBF808740)));
extern volatile uint32_t        U1EP4CLR __attribute__((section("sfrs"),address(0xBF808744)));
extern volatile uint32_t        U1EP4SET __attribute__((section("sfrs"),address(0xBF808748)));
extern volatile uint32_t        U1EP4INV __attribute__((section("sfrs"),address(0xBF80874C)));
#define U1EP5 U1EP5
extern volatile uint32_t   U1EP5 __attribute__((section("sfrs"), address(0xBF808750)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP5bits_t;
extern volatile __U1EP5bits_t U1EP5bits __asm__ ("U1EP5") __attribute__((section("sfrs"), address(0xBF808750)));
extern volatile uint32_t        U1EP5CLR __attribute__((section("sfrs"),address(0xBF808754)));
extern volatile uint32_t        U1EP5SET __attribute__((section("sfrs"),address(0xBF808758)));
extern volatile uint32_t        U1EP5INV __attribute__((section("sfrs"),address(0xBF80875C)));
#define U1EP6 U1EP6
extern volatile uint32_t   U1EP6 __attribute__((section("sfrs"), address(0xBF808760)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP6bits_t;
extern volatile __U1EP6bits_t U1EP6bits __asm__ ("U1EP6") __attribute__((section("sfrs"), address(0xBF808760)));
extern volatile uint32_t        U1EP6CLR __attribute__((section("sfrs"),address(0xBF808764)));
extern volatile uint32_t        U1EP6SET __attribute__((section("sfrs"),address(0xBF808768)));
extern volatile uint32_t        U1EP6INV __attribute__((section("sfrs"),address(0xBF80876C)));
#define U1EP7 U1EP7
extern volatile uint32_t   U1EP7 __attribute__((section("sfrs"), address(0xBF808770)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP7bits_t;
extern volatile __U1EP7bits_t U1EP7bits __asm__ ("U1EP7") __attribute__((section("sfrs"), address(0xBF808770)));
extern volatile uint32_t        U1EP7CLR __attribute__((section("sfrs"),address(0xBF808774)));
extern volatile uint32_t        U1EP7SET __attribute__((section("sfrs"),address(0xBF808778)));
extern volatile uint32_t        U1EP7INV __attribute__((section("sfrs"),address(0xBF80877C)));
#define U1EP8 U1EP8
extern volatile uint32_t   U1EP8 __attribute__((section("sfrs"), address(0xBF808780)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP8bits_t;
extern volatile __U1EP8bits_t U1EP8bits __asm__ ("U1EP8") __attribute__((section("sfrs"), address(0xBF808780)));
extern volatile uint32_t        U1EP8CLR __attribute__((section("sfrs"),address(0xBF808784)));
extern volatile uint32_t        U1EP8SET __attribute__((section("sfrs"),address(0xBF808788)));
extern volatile uint32_t        U1EP8INV __attribute__((section("sfrs"),address(0xBF80878C)));
#define U1EP9 U1EP9
extern volatile uint32_t   U1EP9 __attribute__((section("sfrs"), address(0xBF808790)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP9bits_t;
extern volatile __U1EP9bits_t U1EP9bits __asm__ ("U1EP9") __attribute__((section("sfrs"), address(0xBF808790)));
extern volatile uint32_t        U1EP9CLR __attribute__((section("sfrs"),address(0xBF808794)));
extern volatile uint32_t        U1EP9SET __attribute__((section("sfrs"),address(0xBF808798)));
extern volatile uint32_t        U1EP9INV __attribute__((section("sfrs"),address(0xBF80879C)));
#define U1EP10 U1EP10
extern volatile uint32_t   U1EP10 __attribute__((section("sfrs"), address(0xBF8087A0)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP10bits_t;
extern volatile __U1EP10bits_t U1EP10bits __asm__ ("U1EP10") __attribute__((section("sfrs"), address(0xBF8087A0)));
extern volatile uint32_t        U1EP10CLR __attribute__((section("sfrs"),address(0xBF8087A4)));
extern volatile uint32_t        U1EP10SET __attribute__((section("sfrs"),address(0xBF8087A8)));
extern volatile uint32_t        U1EP10INV __attribute__((section("sfrs"),address(0xBF8087AC)));
#define U1EP11 U1EP11
extern volatile uint32_t   U1EP11 __attribute__((section("sfrs"), address(0xBF8087B0)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP11bits_t;
extern volatile __U1EP11bits_t U1EP11bits __asm__ ("U1EP11") __attribute__((section("sfrs"), address(0xBF8087B0)));
extern volatile uint32_t        U1EP11CLR __attribute__((section("sfrs"),address(0xBF8087B4)));
extern volatile uint32_t        U1EP11SET __attribute__((section("sfrs"),address(0xBF8087B8)));
extern volatile uint32_t        U1EP11INV __attribute__((section("sfrs"),address(0xBF8087BC)));
#define U1EP12 U1EP12
extern volatile uint32_t   U1EP12 __attribute__((section("sfrs"), address(0xBF8087C0)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP12bits_t;
extern volatile __U1EP12bits_t U1EP12bits __asm__ ("U1EP12") __attribute__((section("sfrs"), address(0xBF8087C0)));
extern volatile uint32_t        U1EP12CLR __attribute__((section("sfrs"),address(0xBF8087C4)));
extern volatile uint32_t        U1EP12SET __attribute__((section("sfrs"),address(0xBF8087C8)));
extern volatile uint32_t        U1EP12INV __attribute__((section("sfrs"),address(0xBF8087CC)));
#define U1EP13 U1EP13
extern volatile uint32_t   U1EP13 __attribute__((section("sfrs"), address(0xBF8087D0)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP13bits_t;
extern volatile __U1EP13bits_t U1EP13bits __asm__ ("U1EP13") __attribute__((section("sfrs"), address(0xBF8087D0)));
extern volatile uint32_t        U1EP13CLR __attribute__((section("sfrs"),address(0xBF8087D4)));
extern volatile uint32_t        U1EP13SET __attribute__((section("sfrs"),address(0xBF8087D8)));
extern volatile uint32_t        U1EP13INV __attribute__((section("sfrs"),address(0xBF8087DC)));
#define U1EP14 U1EP14
extern volatile uint32_t   U1EP14 __attribute__((section("sfrs"), address(0xBF8087E0)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP14bits_t;
extern volatile __U1EP14bits_t U1EP14bits __asm__ ("U1EP14") __attribute__((section("sfrs"), address(0xBF8087E0)));
extern volatile uint32_t        U1EP14CLR __attribute__((section("sfrs"),address(0xBF8087E4)));
extern volatile uint32_t        U1EP14SET __attribute__((section("sfrs"),address(0xBF8087E8)));
extern volatile uint32_t        U1EP14INV __attribute__((section("sfrs"),address(0xBF8087EC)));
#define U1EP15 U1EP15
extern volatile uint32_t   U1EP15 __attribute__((section("sfrs"), address(0xBF8087F0)));
typedef struct {
  uint32_t EPHSHK:1;
  uint32_t EPSTALL:1;
  uint32_t EPTXEN:1;
  uint32_t EPRXEN:1;
  uint32_t EPCONDIS:1;
} __U1EP15bits_t;
extern volatile __U1EP15bits_t U1EP15bits __asm__ ("U1EP15") __attribute__((section("sfrs"), address(0xBF8087F0)));
extern volatile uint32_t        U1EP15CLR __attribute__((section("sfrs"),address(0xBF8087F4)));
extern volatile uint32_t        U1EP15SET __attribute__((section("sfrs"),address(0xBF8087F8)));
extern volatile uint32_t        U1EP15INV __attribute__((section("sfrs"),address(0xBF8087FC)));
#define DMACON DMACON
extern volatile uint32_t   DMACON __attribute__((section("sfrs"), address(0xBF808900)));
typedef union {
  struct {
    uint32_t :11;
    uint32_t DMABUSY:1;
    uint32_t SUSPEND:1;
    uint32_t :2;
    uint32_t ON:1;
  };
  struct {
    uint32_t w:32;
  };
} __DMACONbits_t;
extern volatile __DMACONbits_t DMACONbits __asm__ ("DMACON") __attribute__((section("sfrs"), address(0xBF808900)));
extern volatile uint32_t        DMACONCLR __attribute__((section("sfrs"),address(0xBF808904)));
extern volatile uint32_t        DMACONSET __attribute__((section("sfrs"),address(0xBF808908)));
extern volatile uint32_t        DMACONINV __attribute__((section("sfrs"),address(0xBF80890C)));
#define DMASTAT DMASTAT
extern volatile uint32_t   DMASTAT __attribute__((section("sfrs"), address(0xBF808910)));
typedef union {
  struct {
    uint32_t DMACH:3;
    uint32_t RDWR:1;
  };
  struct {
    uint32_t w:32;
  };
} __DMASTATbits_t;
extern volatile __DMASTATbits_t DMASTATbits __asm__ ("DMASTAT") __attribute__((section("sfrs"), address(0xBF808910)));
extern volatile uint32_t        DMASTATCLR __attribute__((section("sfrs"),address(0xBF808914)));
extern volatile uint32_t        DMASTATSET __attribute__((section("sfrs"),address(0xBF808918)));
extern volatile uint32_t        DMASTATINV __attribute__((section("sfrs"),address(0xBF80891C)));
#define DMAADDR DMAADDR
extern volatile uint32_t   DMAADDR __attribute__((section("sfrs"), address(0xBF808920)));
extern volatile uint32_t        DMAADDRCLR __attribute__((section("sfrs"),address(0xBF808924)));
extern volatile uint32_t        DMAADDRSET __attribute__((section("sfrs"),address(0xBF808928)));
extern volatile uint32_t        DMAADDRINV __attribute__((section("sfrs"),address(0xBF80892C)));
#define DCRCCON DCRCCON
extern volatile uint32_t   DCRCCON __attribute__((section("sfrs"), address(0xBF808930)));
typedef union {
  struct {
    uint32_t CRCCH:3;
    uint32_t :2;
    uint32_t CRCTYP:1;
    uint32_t CRCAPP:1;
    uint32_t CRCEN:1;
    uint32_t PLEN:5;
    uint32_t :11;
    uint32_t BITO:1;
    uint32_t :2;
    uint32_t WBO:1;
    uint32_t BYTO:2;
  };
  struct {
    uint32_t w:32;
  };
} __DCRCCONbits_t;
extern volatile __DCRCCONbits_t DCRCCONbits __asm__ ("DCRCCON") __attribute__((section("sfrs"), address(0xBF808930)));
extern volatile uint32_t        DCRCCONCLR __attribute__((section("sfrs"),address(0xBF808934)));
extern volatile uint32_t        DCRCCONSET __attribute__((section("sfrs"),address(0xBF808938)));
extern volatile uint32_t        DCRCCONINV __attribute__((section("sfrs"),address(0xBF80893C)));
#define DCRCDATA DCRCDATA
extern volatile uint32_t   DCRCDATA __attribute__((section("sfrs"), address(0xBF808940)));
extern volatile uint32_t        DCRCDATACLR __attribute__((section("sfrs"),address(0xBF808944)));
extern volatile uint32_t        DCRCDATASET __attribute__((section("sfrs"),address(0xBF808948)));
extern volatile uint32_t        DCRCDATAINV __attribute__((section("sfrs"),address(0xBF80894C)));
#define DCRCXOR DCRCXOR
extern volatile uint32_t   DCRCXOR __attribute__((section("sfrs"), address(0xBF808950)));
extern volatile uint32_t        DCRCXORCLR __attribute__((section("sfrs"),address(0xBF808954)));
extern volatile uint32_t        DCRCXORSET __attribute__((section("sfrs"),address(0xBF808958)));
extern volatile uint32_t        DCRCXORINV __attribute__((section("sfrs"),address(0xBF80895C)));
#define DCH0CON DCH0CON
extern volatile uint32_t   DCH0CON __attribute__((section("sfrs"), address(0xBF808960)));
typedef union {
  struct {
    uint32_t CHPRI:2;
    uint32_t CHEDET:1;
    uint32_t :1;
    uint32_t CHAEN:1;
    uint32_t CHCHN:1;
    uint32_t CHAED:1;
    uint32_t CHEN:1;
    uint32_t CHCHNS:1;
    uint32_t :6;
    uint32_t CHBUSY:1;
  };
  struct {
    uint32_t w:32;
  };
} __DCH0CONbits_t;
extern volatile __DCH0CONbits_t DCH0CONbits __asm__ ("DCH0CON") __attribute__((section("sfrs"), address(0xBF808960)));
extern volatile uint32_t        DCH0CONCLR __attribute__((section("sfrs"),address(0xBF808964)));
extern volatile uint32_t        DCH0CONSET __attribute__((section("sfrs"),address(0xBF808968)));
extern volatile uint32_t        DCH0CONINV __attribute__((section("sfrs"),address(0xBF80896C)));
#define DCH0ECON DCH0ECON
extern volatile uint32_t   DCH0ECON __attribute__((section("sfrs"), address(0xBF808970)));
typedef union {
  struct {
    uint32_t :3;
    uint32_t AIRQEN:1;
    uint32_t SIRQEN:1;
    uint32_t PATEN:1;
    uint32_t CABORT:1;
    uint32_t CFORCE:1;
    uint32_t CHSIRQ:8;
    uint32_t CHAIRQ:8;
  };
  struct {
    uint32_t w:32;
  };
} __DCH0ECONbits_t;
extern volatile __DCH0ECONbits_t DCH0ECONbits __asm__ ("DCH0ECON") __attribute__((section("sfrs"), address(0xBF808970)));
extern volatile uint32_t        DCH0ECONCLR __attribute__((section("sfrs"),address(0xBF808974)));
extern volatile uint32_t        DCH0ECONSET __attribute__((section("sfrs"),address(0xBF808978)));
extern volatile uint32_t        DCH0ECONINV __attribute__((section("sfrs"),address(0xBF80897C)));
#define DCH0INT DCH0INT
extern volatile uint32_t   DCH0INT __attribute__((section("sfrs"), address(0xBF808980)));
typedef union {
  struct {
    uint32_t CHERIF:1;
    uint32_t CHTAIF:1;
    uint32_t CHCCIF:1;
    uint32_t CHBCIF:1;
    uint32_t CHDHIF:1;
    uint32_t CHDDIF:1;
    uint32_t CHSHIF:1;
    uint32_t CHSDIF:1;
    uint32_t :8;
    uint32_t CHERIE:1;
    uint32_t CHTAIE:1;
    uint32_t CHCCIE:1;
    uint32_t CHBCIE:1;
    uint32_t CHDHIE:1;
    uint32_t CHDDIE:1;
    uint32_t CHSHIE:1;
    uint32_t CHSDIE:1;
  };
  struct {
    uint32_t w:32;
  };
} __DCH0INTbits_t;
extern volatile __DCH0INTbits_t DCH0INTbits __asm__ ("DCH0INT") __attribute__((section("sfrs"), address(0xBF808980)));
extern volatile uint32_t        DCH0INTCLR __attribute__((section("sfrs"),address(0xBF808984)));
extern volatile uint32_t        DCH0INTSET __attribute__((section("sfrs"),address(0xBF808988)));
extern volatile uint32_t        DCH0INTINV __attribute__((section("sfrs"),address(0xBF80898C)));
#define DCH0SSA DCH0SSA
extern volatile uint32_t   DCH0SSA __attribute__((section("sfrs"), address(0xBF808990)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH0SSAbits_t;
extern volatile __DCH0SSAbits_t DCH0SSAbits __asm__ ("DCH0SSA") __attribute__((section("sfrs"), address(0xBF808990)));
extern volatile uint32_t        DCH0SSACLR __attribute__((section("sfrs"),address(0xBF808994)));
extern volatile uint32_t        DCH0SSASET __attribute__((section("sfrs"),address(0xBF808998)));
extern volatile uint32_t        DCH0SSAINV __attribute__((section("sfrs"),address(0xBF80899C)));
#define DCH0DSA DCH0DSA
extern volatile uint32_t   DCH0DSA __attribute__((section("sfrs"), address(0xBF8089A0)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH0DSAbits_t;
extern volatile __DCH0DSAbits_t DCH0DSAbits __asm__ ("DCH0DSA") __attribute__((section("sfrs"), address(0xBF8089A0)));
extern volatile uint32_t        DCH0DSACLR __attribute__((section("sfrs"),address(0xBF8089A4)));
extern volatile uint32_t        DCH0DSASET __attribute__((section("sfrs"),address(0xBF8089A8)));
extern volatile uint32_t        DCH0DSAINV __attribute__((section("sfrs"),address(0xBF8089AC)));
#define DCH0SSIZ DCH0SSIZ
extern volatile uint32_t   DCH0SSIZ __attribute__((section("sfrs"), address(0xBF8089B0)));
extern volatile uint32_t        DCH0SSIZCLR __attribute__((section("sfrs"),address(0xBF8089B4)));
extern volatile uint32_t        DCH0SSIZSET __attribute__((section("sfrs"),address(0xBF8089B8)));
extern volatile uint32_t        DCH0SSIZINV __attribute__((section("sfrs"),address(0xBF8089BC)));
#define DCH0DSIZ DCH0DSIZ
extern volatile uint32_t   DCH0DSIZ __attribute__((section("sfrs"), address(0xBF8089C0)));
extern volatile uint32_t        DCH0DSIZCLR __attribute__((section("sfrs"),address(0xBF8089C4)));
extern volatile uint32_t        DCH0DSIZSET __attribute__((section("sfrs"),address(0xBF8089C8)));
extern volatile uint32_t        DCH0DSIZINV __attribute__((section("sfrs"),address(0xBF8089CC)));
#define DCH0SPTR DCH0SPTR
extern volatile uint32_t   DCH0SPTR __attribute__((section("sfrs"), address(0xBF8089D0)));
extern volatile uint32_t        DCH0SPTRCLR __attribute__((section("sfrs"),address(0xBF8089D4)));
extern volatile uint32_t        DCH0SPTRSET __attribute__((section("sfrs"),address(0xBF8089D8)));
extern volatile uint32_t        DCH0SPTRINV __attribute__((section("sfrs"),address(0xBF8089DC)));
#define DCH0DPTR DCH0DPTR
extern volatile uint32_t   DCH0DPTR __attribute__((section("sfrs"), address(0xBF8089E0)));
extern volatile uint32_t        DCH0DPTRCLR __attribute__((section("sfrs"),address(0xBF8089E4)));
extern volatile uint32_t        DCH0DPTRSET __attribute__((section("sfrs"),address(0xBF8089E8)));
extern volatile uint32_t        DCH0DPTRINV __attribute__((section("sfrs"),address(0xBF8089EC)));
#define DCH0CSIZ DCH0CSIZ
extern volatile uint32_t   DCH0CSIZ __attribute__((section("sfrs"), address(0xBF8089F0)));
extern volatile uint32_t        DCH0CSIZCLR __attribute__((section("sfrs"),address(0xBF8089F4)));
extern volatile uint32_t        DCH0CSIZSET __attribute__((section("sfrs"),address(0xBF8089F8)));
extern volatile uint32_t        DCH0CSIZINV __attribute__((section("sfrs"),address(0xBF8089FC)));
#define DCH0CPTR DCH0CPTR
extern volatile uint32_t   DCH0CPTR __attribute__((section("sfrs"), address(0xBF808A00)));
extern volatile uint32_t        DCH0CPTRCLR __attribute__((section("sfrs"),address(0xBF808A04)));
extern volatile uint32_t        DCH0CPTRSET __attribute__((section("sfrs"),address(0xBF808A08)));
extern volatile uint32_t        DCH0CPTRINV __attribute__((section("sfrs"),address(0xBF808A0C)));
#define DCH0DAT DCH0DAT
extern volatile uint32_t   DCH0DAT __attribute__((section("sfrs"), address(0xBF808A10)));
extern volatile uint32_t        DCH0DATCLR __attribute__((section("sfrs"),address(0xBF808A14)));
extern volatile uint32_t        DCH0DATSET __attribute__((section("sfrs"),address(0xBF808A18)));
extern volatile uint32_t        DCH0DATINV __attribute__((section("sfrs"),address(0xBF808A1C)));
#define DCH1CON DCH1CON
extern volatile uint32_t   DCH1CON __attribute__((section("sfrs"), address(0xBF808A20)));
typedef union {
  struct {
    uint32_t CHPRI:2;
    uint32_t CHEDET:1;
    uint32_t :1;
    uint32_t CHAEN:1;
    uint32_t CHCHN:1;
    uint32_t CHAED:1;
    uint32_t CHEN:1;
    uint32_t CHCHNS:1;
    uint32_t :6;
    uint32_t CHBUSY:1;
  };
  struct {
    uint32_t w:32;
  };
} __DCH1CONbits_t;
extern volatile __DCH1CONbits_t DCH1CONbits __asm__ ("DCH1CON") __attribute__((section("sfrs"), address(0xBF808A20)));
extern volatile uint32_t        DCH1CONCLR __attribute__((section("sfrs"),address(0xBF808A24)));
extern volatile uint32_t        DCH1CONSET __attribute__((section("sfrs"),address(0xBF808A28)));
extern volatile uint32_t        DCH1CONINV __attribute__((section("sfrs"),address(0xBF808A2C)));
#define DCH1ECON DCH1ECON
extern volatile uint32_t   DCH1ECON __attribute__((section("sfrs"), address(0xBF808A30)));
typedef union {
  struct {
    uint32_t :3;
    uint32_t AIRQEN:1;
    uint32_t SIRQEN:1;
    uint32_t PATEN:1;
    uint32_t CABORT:1;
    uint32_t CFORCE:1;
    uint32_t CHSIRQ:8;
    uint32_t CHAIRQ:8;
  };
  struct {
    uint32_t w:32;
  };
} __DCH1ECONbits_t;
extern volatile __DCH1ECONbits_t DCH1ECONbits __asm__ ("DCH1ECON") __attribute__((section("sfrs"), address(0xBF808A30)));
extern volatile uint32_t        DCH1ECONCLR __attribute__((section("sfrs"),address(0xBF808A34)));
extern volatile uint32_t        DCH1ECONSET __attribute__((section("sfrs"),address(0xBF808A38)));
extern volatile uint32_t        DCH1ECONINV __attribute__((section("sfrs"),address(0xBF808A3C)));
#define DCH1INT DCH1INT
extern volatile uint32_t   DCH1INT __attribute__((section("sfrs"), address(0xBF808A40)));
typedef union {
  struct {
    uint32_t CHERIF:1;
    uint32_t CHTAIF:1;
    uint32_t CHCCIF:1;
    uint32_t CHBCIF:1;
    uint32_t CHDHIF:1;
    uint32_t CHDDIF:1;
    uint32_t CHSHIF:1;
    uint32_t CHSDIF:1;
    uint32_t :8;
    uint32_t CHERIE:1;
    uint32_t CHTAIE:1;
    uint32_t CHCCIE:1;
    uint32_t CHBCIE:1;
    uint32_t CHDHIE:1;
    uint32_t CHDDIE:1;
    uint32_t CHSHIE:1;
    uint32_t CHSDIE:1;
  };
  struct {
    uint32_t w:32;
  };
} __DCH1INTbits_t;
extern volatile __DCH1INTbits_t DCH1INTbits __asm__ ("DCH1INT") __attribute__((section("sfrs"), address(0xBF808A40)));
extern volatile uint32_t        DCH1INTCLR __attribute__((section("sfrs"),address(0xBF808A44)));
extern volatile uint32_t        DCH1INTSET __attribute__((section("sfrs"),address(0xBF808A48)));
extern volatile uint32_t        DCH1INTINV __attribute__((section("sfrs"),address(0xBF808A4C)));
#define DCH1SSA DCH1SSA
extern volatile uint32_t   DCH1SSA __attribute__((section("sfrs"), address(0xBF808A50)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH1SSAbits_t;
extern volatile __DCH1SSAbits_t DCH1SSAbits __asm__ ("DCH1SSA") __attribute__((section("sfrs"), address(0xBF808A50)));
extern volatile uint32_t        DCH1SSACLR __attribute__((section("sfrs"),address(0xBF808A54)));
extern volatile uint32_t        DCH1SSASET __attribute__((section("sfrs"),address(0xBF808A58)));
extern volatile uint32_t        DCH1SSAINV __attribute__((section("sfrs"),address(0xBF808A5C)));
#define DCH1DSA DCH1DSA
extern volatile uint32_t   DCH1DSA __attribute__((section("sfrs"), address(0xBF808A60)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH1DSAbits_t;
extern volatile __DCH1DSAbits_t DCH1DSAbits __asm__ ("DCH1DSA") __attribute__((section("sfrs"), address(0xBF808A60)));
extern volatile uint32_t        DCH1DSACLR __attribute__((section("sfrs"),address(0xBF808A64)));
extern volatile uint32_t        DCH1DSASET __attribute__((section("sfrs"),address(0xBF808A68)));
extern volatile uint32_t        DCH1DSAINV __attribute__((section("sfrs"),address(0xBF808A6C)));
#define DCH1SSIZ DCH1SSIZ
extern volatile uint32_t   DCH1SSIZ __attribute__((section("sfrs"), address(0xBF808A70)));
extern volatile uint32_t        DCH1SSIZCLR __attribute__((section("sfrs"),address(0xBF808A74)));
extern volatile uint32_t        DCH1SSIZSET __attribute__((section("sfrs"),address(0xBF808A78)));
extern volatile uint32_t        DCH1SSIZINV __attribute__((section("sfrs"),address(0xBF808A7C)));
#define DCH1DSIZ DCH1DSIZ
extern volatile uint32_t   DCH1DSIZ __attribute__((section("sfrs"), address(0xBF808A80)));
extern volatile uint32_t        DCH1DSIZCLR __attribute__((section("sfrs"),address(0xBF808A84)));
extern volatile uint32_t        DCH1DSIZSET __attribute__((section("sfrs"),address(0xBF808A88)));
extern volatile uint32_t        DCH1DSIZINV __attribute__((section("sfrs"),address(0xBF808A8C)));
#define DCH1SPTR DCH1SPTR
extern volatile uint32_t   DCH1SPTR __attribute__((section("sfrs"), address(0xBF808A90)));
extern volatile uint32_t        DCH1SPTRCLR __attribute__((section("sfrs"),address(0xBF808A94)));
extern volatile uint32_t        DCH1SPTRSET __attribute__((section("sfrs"),address(0xBF808A98)));
extern volatile uint32_t        DCH1SPTRINV __attribute__((section("sfrs"),address(0xBF808A9C)));
#define DCH1DPTR DCH1DPTR
extern volatile uint32_t   DCH1DPTR __attribute__((section("sfrs"), address(0xBF808AA0)));
extern volatile uint32_t        DCH1DPTRCLR __attribute__((section("sfrs"),address(0xBF808AA4)));
extern volatile uint32_t        DCH1DPTRSET __attribute__((section("sfrs"),address(0xBF808AA8)));
extern volatile uint32_t        DCH1DPTRINV __attribute__((section("sfrs"),address(0xBF808AAC)));
#define DCH1CSIZ DCH1CSIZ
extern volatile uint32_t   DCH1CSIZ __attribute__((section("sfrs"), address(0xBF808AB0)));
extern volatile uint32_t        DCH1CSIZCLR __attribute__((section("sfrs"),address(0xBF808AB4)));
extern volatile uint32_t        DCH1CSIZSET __attribute__((section("sfrs"),address(0xBF808AB8)));
extern volatile uint32_t        DCH1CSIZINV __attribute__((section("sfrs"),address(0xBF808ABC)));
#define DCH1CPTR DCH1CPTR
extern volatile uint32_t   DCH1CPTR __attribute__((section("sfrs"), address(0xBF808AC0)));
extern volatile uint32_t        DCH1CPTRCLR __attribute__((section("sfrs"),address(0xBF808AC4)));
extern volatile uint32_t        DCH1CPTRSET __attribute__((section("sfrs"),address(0xBF808AC8)));
extern volatile uint32_t        DCH1CPTRINV __attribute__((section("sfrs"),address(0xBF808ACC)));
#define DCH1DAT DCH1DAT
extern volatile uint32_t   DCH1DAT __attribute__((section("sfrs"), address(0xBF808AD0)));
extern volatile uint32_t        DCH1DATCLR __attribute__((section("sfrs"),address(0xBF808AD4)));
extern volatile uint32_t        DCH1DATSET __attribute__((section("sfrs"),address(0xBF808AD8)));
extern volatile uint32_t        DCH1DATINV __attribute__((section("sfrs"),address(0xBF808ADC)));
#define DCH2CON DCH2CON
extern volatile uint32_t   DCH2CON __attribute__((section("sfrs"), address(0xBF808AE0)));
typedef union {
  struct {
    uint32_t CHPRI:2;
    uint32_t CHEDET:1;
    uint32_t :1;
    uint32_t CHAEN:1;
    uint32_t CHCHN:1;
    uint32_t CHAED:1;
    uint32_t CHEN:1;
    uint32_t CHCHNS:1;
    uint32_t :6;
    uint32_t CHBUSY:1;
  };
  struct {
    uint32_t w:32;
  };
} __DCH2CONbits_t;
extern volatile __DCH2CONbits_t DCH2CONbits __asm__ ("DCH2CON") __attribute__((section("sfrs"), address(0xBF808AE0)));
extern volatile uint32_t        DCH2CONCLR __attribute__((section("sfrs"),address(0xBF808AE4)));
extern volatile uint32_t        DCH2CONSET __attribute__((section("sfrs"),address(0xBF808AE8)));
extern volatile uint32_t        DCH2CONINV __attribute__((section("sfrs"),address(0xBF808AEC)));
#define DCH2ECON DCH2ECON
extern volatile uint32_t   DCH2ECON __attribute__((section("sfrs"), address(0xBF808AF0)));
typedef union {
  struct {
    uint32_t :3;
    uint32_t AIRQEN:1;
    uint32_t SIRQEN:1;
    uint32_t PATEN:1;
    uint32_t CABORT:1;
    uint32_t CFORCE:1;
    uint32_t CHSIRQ:8;
    uint32_t CHAIRQ:8;
  };
  struct {
    uint32_t w:32;
  };
} __DCH2ECONbits_t;
extern volatile __DCH2ECONbits_t DCH2ECONbits __asm__ ("DCH2ECON") __attribute__((section("sfrs"), address(0xBF808AF0)));
extern volatile uint32_t        DCH2ECONCLR __attribute__((section("sfrs"),address(0xBF808AF4)));
extern volatile uint32_t        DCH2ECONSET __attribute__((section("sfrs"),address(0xBF808AF8)));
extern volatile uint32_t        DCH2ECONINV __attribute__((section("sfrs"),address(0xBF808AFC)));
#define DCH2INT DCH2INT
extern volatile uint32_t   DCH2INT __attribute__((section("sfrs"), address(0xBF808B00)));
typedef union {
  struct {
    uint32_t CHERIF:1;
    uint32_t CHTAIF:1;
    uint32_t CHCCIF:1;
    uint32_t CHBCIF:1;
    uint32_t CHDHIF:1;
    uint32_t CHDDIF:1;
    uint32_t CHSHIF:1;
    uint32_t CHSDIF:1;
    uint32_t :8;
    uint32_t CHERIE:1;
    uint32_t CHTAIE:1;
    uint32_t CHCCIE:1;
    uint32_t CHBCIE:1;
    uint32_t CHDHIE:1;
    uint32_t CHDDIE:1;
    uint32_t CHSHIE:1;
    uint32_t CHSDIE:1;
  };
  struct {
    uint32_t w:32;
  };
} __DCH2INTbits_t;
extern volatile __DCH2INTbits_t DCH2INTbits __asm__ ("DCH2INT") __attribute__((section("sfrs"), address(0xBF808B00)));
extern volatile uint32_t        DCH2INTCLR __attribute__((section("sfrs"),address(0xBF808B04)));
extern volatile uint32_t        DCH2INTSET __attribute__((section("sfrs"),address(0xBF808B08)));
extern volatile uint32_t        DCH2INTINV __attribute__((section("sfrs"),address(0xBF808B0C)));
#define DCH2SSA DCH2SSA
extern volatile uint32_t   DCH2SSA __attribute__((section("sfrs"), address(0xBF808B10)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH2SSAbits_t;
extern volatile __DCH2SSAbits_t DCH2SSAbits __asm__ ("DCH2SSA") __attribute__((section("sfrs"), address(0xBF808B10)));
extern volatile uint32_t        DCH2SSACLR __attribute__((section("sfrs"),address(0xBF808B14)));
extern volatile uint32_t        DCH2SSASET __attribute__((section("sfrs"),address(0xBF808B18)));
extern volatile uint32_t        DCH2SSAINV __attribute__((section("sfrs"),address(0xBF808B1C)));
#define DCH2DSA DCH2DSA
extern volatile uint32_t   DCH2DSA __attribute__((section("sfrs"), address(0xBF808B20)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH2DSAbits_t;
extern volatile __DCH2DSAbits_t DCH2DSAbits __asm__ ("DCH2DSA") __attribute__((section("sfrs"), address(0xBF808B20)));
extern volatile uint32_t        DCH2DSACLR __attribute__((section("sfrs"),address(0xBF808B24)));
extern volatile uint32_t        DCH2DSASET __attribute__((section("sfrs"),address(0xBF808B28)));
extern volatile uint32_t        DCH2DSAINV __attribute__((section("sfrs"),address(0xBF808B2C)));
#define DCH2SSIZ DCH2SSIZ
extern volatile uint32_t   DCH2SSIZ __attribute__((section("sfrs"), address(0xBF808B30)));
extern volatile uint32_t        DCH2SSIZCLR __attribute__((section("sfrs"),address(0xBF808B34)));
extern volatile uint32_t        DCH2SSIZSET __attribute__((section("sfrs"),address(0xBF808B38)));
extern volatile uint32_t        DCH2SSIZINV __attribute__((section("sfrs"),address(0xBF808B3C)));
#define DCH2DSIZ DCH2DSIZ
extern volatile uint32_t   DCH2DSIZ __attribute__((section("sfrs"), address(0xBF808B40)));
extern volatile uint32_t        DCH2DSIZCLR __attribute__((section("sfrs"),address(0xBF808B44)));
extern volatile uint32_t        DCH2DSIZSET __attribute__((section("sfrs"),address(0xBF808B48)));
extern volatile uint32_t        DCH2DSIZINV __attribute__((section("sfrs"),address(0xBF808B4C)));
#define DCH2SPTR DCH2SPTR
extern volatile uint32_t   DCH2SPTR __attribute__((section("sfrs"), address(0xBF808B50)));
extern volatile uint32_t        DCH2SPTRCLR __attribute__((section("sfrs"),address(0xBF808B54)));
extern volatile uint32_t        DCH2SPTRSET __attribute__((section("sfrs"),address(0xBF808B58)));
extern volatile uint32_t        DCH2SPTRINV __attribute__((section("sfrs"),address(0xBF808B5C)));
#define DCH2DPTR DCH2DPTR
extern volatile uint32_t   DCH2DPTR __attribute__((section("sfrs"), address(0xBF808B60)));
extern volatile uint32_t        DCH2DPTRCLR __attribute__((section("sfrs"),address(0xBF808B64)));
extern volatile uint32_t        DCH2DPTRSET __attribute__((section("sfrs"),address(0xBF808B68)));
extern volatile uint32_t        DCH2DPTRINV __attribute__((section("sfrs"),address(0xBF808B6C)));
#define DCH2CSIZ DCH2CSIZ
extern volatile uint32_t   DCH2CSIZ __attribute__((section("sfrs"), address(0xBF808B70)));
extern volatile uint32_t        DCH2CSIZCLR __attribute__((section("sfrs"),address(0xBF808B74)));
extern volatile uint32_t        DCH2CSIZSET __attribute__((section("sfrs"),address(0xBF808B78)));
extern volatile uint32_t        DCH2CSIZINV __attribute__((section("sfrs"),address(0xBF808B7C)));
#define DCH2CPTR DCH2CPTR
extern volatile uint32_t   DCH2CPTR __attribute__((section("sfrs"), address(0xBF808B80)));
extern volatile uint32_t        DCH2CPTRCLR __attribute__((section("sfrs"),address(0xBF808B84)));
extern volatile uint32_t        DCH2CPTRSET __attribute__((section("sfrs"),address(0xBF808B88)));
extern volatile uint32_t        DCH2CPTRINV __attribute__((section("sfrs"),address(0xBF808B8C)));
#define DCH2DAT DCH2DAT
extern volatile uint32_t   DCH2DAT __attribute__((section("sfrs"), address(0xBF808B90)));
extern volatile uint32_t        DCH2DATCLR __attribute__((section("sfrs"),address(0xBF808B94)));
extern volatile uint32_t        DCH2DATSET __attribute__((section("sfrs"),address(0xBF808B98)));
extern volatile uint32_t        DCH2DATINV __attribute__((section("sfrs"),address(0xBF808B9C)));
#define DCH3CON DCH3CON
extern volatile uint32_t   DCH3CON __attribute__((section("sfrs"), address(0xBF808BA0)));
typedef union {
  struct {
    uint32_t CHPRI:2;
    uint32_t CHEDET:1;
    uint32_t :1;
    uint32_t CHAEN:1;
    uint32_t CHCHN:1;
    uint32_t CHAED:1;
    uint32_t CHEN:1;
    uint32_t CHCHNS:1;
    uint32_t :6;
    uint32_t CHBUSY:1;
  };
  struct {
    uint32_t w:32;
  };
} __DCH3CONbits_t;
extern volatile __DCH3CONbits_t DCH3CONbits __asm__ ("DCH3CON") __attribute__((section("sfrs"), address(0xBF808BA0)));
extern volatile uint32_t        DCH3CONCLR __attribute__((section("sfrs"),address(0xBF808BA4)));
extern volatile uint32_t        DCH3CONSET __attribute__((section("sfrs"),address(0xBF808BA8)));
extern volatile uint32_t        DCH3CONINV __attribute__((section("sfrs"),address(0xBF808BAC)));
#define DCH3ECON DCH3ECON
extern volatile uint32_t   DCH3ECON __attribute__((section("sfrs"), address(0xBF808BB0)));
typedef union {
  struct {
    uint32_t :3;
    uint32_t AIRQEN:1;
    uint32_t SIRQEN:1;
    uint32_t PATEN:1;
    uint32_t CABORT:1;
    uint32_t CFORCE:1;
    uint32_t CHSIRQ:8;
    uint32_t CHAIRQ:8;
  };
  struct {
    uint32_t w:32;
  };
} __DCH3ECONbits_t;
extern volatile __DCH3ECONbits_t DCH3ECONbits __asm__ ("DCH3ECON") __attribute__((section("sfrs"), address(0xBF808BB0)));
extern volatile uint32_t        DCH3ECONCLR __attribute__((section("sfrs"),address(0xBF808BB4)));
extern volatile uint32_t        DCH3ECONSET __attribute__((section("sfrs"),address(0xBF808BB8)));
extern volatile uint32_t        DCH3ECONINV __attribute__((section("sfrs"),address(0xBF808BBC)));
#define DCH3INT DCH3INT
extern volatile uint32_t   DCH3INT __attribute__((section("sfrs"), address(0xBF808BC0)));
typedef union {
  struct {
    uint32_t CHERIF:1;
    uint32_t CHTAIF:1;
    uint32_t CHCCIF:1;
    uint32_t CHBCIF:1;
    uint32_t CHDHIF:1;
    uint32_t CHDDIF:1;
    uint32_t CHSHIF:1;
    uint32_t CHSDIF:1;
    uint32_t :8;
    uint32_t CHERIE:1;
    uint32_t CHTAIE:1;
    uint32_t CHCCIE:1;
    uint32_t CHBCIE:1;
    uint32_t CHDHIE:1;
    uint32_t CHDDIE:1;
    uint32_t CHSHIE:1;
    uint32_t CHSDIE:1;
  };
  struct {
    uint32_t w:32;
  };
} __DCH3INTbits_t;
extern volatile __DCH3INTbits_t DCH3INTbits __asm__ ("DCH3INT") __attribute__((section("sfrs"), address(0xBF808BC0)));
extern volatile uint32_t        DCH3INTCLR __attribute__((section("sfrs"),address(0xBF808BC4)));
extern volatile uint32_t        DCH3INTSET __attribute__((section("sfrs"),address(0xBF808BC8)));
extern volatile uint32_t        DCH3INTINV __attribute__((section("sfrs"),address(0xBF808BCC)));
#define DCH3SSA DCH3SSA
extern volatile uint32_t   DCH3SSA __attribute__((section("sfrs"), address(0xBF808BD0)));
typedef struct {
  uint32_t CHSSA:32;
} __DCH3SSAbits_t;
extern volatile __DCH3SSAbits_t DCH3SSAbits __asm__ ("DCH3SSA") __attribute__((section("sfrs"), address(0xBF808BD0)));
extern volatile uint32_t        DCH3SSACLR __attribute__((section("sfrs"),address(0xBF808BD4)));
extern volatile uint32_t        DCH3SSASET __attribute__((section("sfrs"),address(0xBF808BD8)));
extern volatile uint32_t        DCH3SSAINV __attribute__((section("sfrs"),address(0xBF808BDC)));
#define DCH3DSA DCH3DSA
extern volatile uint32_t   DCH3DSA __attribute__((section("sfrs"), address(0xBF808BE0)));
typedef struct {
  uint32_t CHDSA:32;
} __DCH3DSAbits_t;
extern volatile __DCH3DSAbits_t DCH3DSAbits __asm__ ("DCH3DSA") __attribute__((section("sfrs"), address(0xBF808BE0)));
extern volatile uint32_t        DCH3DSACLR __attribute__((section("sfrs"),address(0xBF808BE4)));
extern volatile uint32_t        DCH3DSASET __attribute__((section("sfrs"),address(0xBF808BE8)));
extern volatile uint32_t        DCH3DSAINV __attribute__((section("sfrs"),address(0xBF808BEC)));
#define DCH3SSIZ DCH3SSIZ
extern volatile uint32_t   DCH3SSIZ __attribute__((section("sfrs"), address(0xBF808BF0)));
extern volatile uint32_t        DCH3SSIZCLR __attribute__((section("sfrs"),address(0xBF808BF4)));
extern volatile uint32_t        DCH3SSIZSET __attribute__((section("sfrs"),address(0xBF808BF8)));
extern volatile uint32_t        DCH3SSIZINV __attribute__((section("sfrs"),address(0xBF808BFC)));
#define DCH3DSIZ DCH3DSIZ
extern volatile uint32_t   DCH3DSIZ __attribute__((section("sfrs"), address(0xBF808C00)));
extern volatile uint32_t        DCH3DSIZCLR __attribute__((section("sfrs"),address(0xBF808C04)));
extern volatile uint32_t        DCH3DSIZSET __attribute__((section("sfrs"),address(0xBF808C08)));
extern volatile uint32_t        DCH3DSIZINV __attribute__((section("sfrs"),address(0xBF808C0C)));
#define DCH3SPTR DCH3SPTR
extern volatile uint32_t   DCH3SPTR __attribute__((section("sfrs"), address(0xBF808C10)));
extern volatile uint32_t        DCH3SPTRCLR __attribute__((section("sfrs"),address(0xBF808C14)));
extern volatile uint32_t        DCH3SPTRSET __attribute__((section("sfrs"),address(0xBF808C18)));
extern volatile uint32_t        DCH3SPTRINV __attribute__((section("sfrs"),address(0xBF808C1C)));
#define DCH3DPTR DCH3DPTR
extern volatile uint32_t   DCH3DPTR __attribute__((section("sfrs"), address(0xBF808C20)));
extern volatile uint32_t        DCH3DPTRCLR __attribute__((section("sfrs"),address(0xBF808C24)));
extern volatile uint32_t        DCH3DPTRSET __attribute__((section("sfrs"),address(0xBF808C28)));
extern volatile uint32_t        DCH3DPTRINV __attribute__((section("sfrs"),address(0xBF808C2C)));
#define DCH3CSIZ DCH3CSIZ
extern volatile uint32_t   DCH3CSIZ __attribute__((section("sfrs"), address(0xBF808C30)));
extern volatile uint32_t        DCH3CSIZCLR __attribute__((section("sfrs"),address(0xBF808C34)));
extern volatile uint32_t        DCH3CSIZSET __attribute__((section("sfrs"),address(0xBF808C38)));
extern volatile uint32_t        DCH3CSIZINV __attribute__((section("sfrs"),address(0xBF808C3C)));
#define DCH3CPTR DCH3CPTR
extern volatile uint32_t   DCH3CPTR __attribute__((section("sfrs"), address(0xBF808C40)));
extern volatile uint32_t        DCH3CPTRCLR __attribute__((section("sfrs"),address(0xBF808C44)));
extern volatile uint32_t        DCH3CPTRSET __attribute__((section("sfrs"),address(0xBF808C48)));
extern volatile uint32_t        DCH3CPTRINV __attribute__((section("sfrs"),address(0xBF808C4C)));
#define DCH3DAT DCH3DAT
extern volatile uint32_t   DCH3DAT __attribute__((section("sfrs"), address(0xBF808C50)));
extern volatile uint32_t        DCH3DATCLR __attribute__((section("sfrs"),address(0xBF808C54)));
extern volatile uint32_t        DCH3DATSET __attribute__((section("sfrs"),address(0xBF808C58)));
extern volatile uint32_t        DCH3DATINV __attribute__((section("sfrs"),address(0xBF808C5C)));
#define INTCON INTCON
extern volatile uint32_t   INTCON __attribute__((section("sfrs"), address(0xBF80F000)));
typedef struct {
  uint32_t INT0EP:1;
  uint32_t INT1EP:1;
  uint32_t INT2EP:1;
  uint32_t INT3EP:1;
  uint32_t INT4EP:1;
  uint32_t :3;
  uint32_t TPC:3;
  uint32_t :1;
  uint32_t MVEC:1;
  uint32_t :3;
  uint32_t VS:7;
} __INTCONbits_t;
extern volatile __INTCONbits_t INTCONbits __asm__ ("INTCON") __attribute__((section("sfrs"), address(0xBF80F000)));
extern volatile uint32_t        INTCONCLR __attribute__((section("sfrs"),address(0xBF80F004)));
extern volatile uint32_t        INTCONSET __attribute__((section("sfrs"),address(0xBF80F008)));
extern volatile uint32_t        INTCONINV __attribute__((section("sfrs"),address(0xBF80F00C)));
#define PRISS PRISS
extern volatile uint32_t   PRISS __attribute__((section("sfrs"), address(0xBF80F010)));
typedef struct {
  uint32_t SEVCSS:1;
  uint32_t :3;
  uint32_t PRI1SS:1;
  uint32_t :3;
  uint32_t PRI2SS:1;
  uint32_t :3;
  uint32_t PRI3SS:1;
  uint32_t :3;
  uint32_t PRI4SS:1;
  uint32_t :3;
  uint32_t PRI5SS:1;
  uint32_t :3;
  uint32_t PRI6SS:1;
  uint32_t :3;
  uint32_t PRI7SS:1;
} __PRISSbits_t;
extern volatile __PRISSbits_t PRISSbits __asm__ ("PRISS") __attribute__((section("sfrs"), address(0xBF80F010)));
extern volatile uint32_t        PRISSCLR __attribute__((section("sfrs"),address(0xBF80F014)));
extern volatile uint32_t        PRISSSET __attribute__((section("sfrs"),address(0xBF80F018)));
extern volatile uint32_t        PRISSINV __attribute__((section("sfrs"),address(0xBF80F01C)));
#define INTSTAT INTSTAT
extern volatile uint32_t   INTSTAT __attribute__((section("sfrs"), address(0xBF80F020)));
typedef struct {
  uint32_t SIRQ:8;
  uint32_t SRIPL:3;
} __INTSTATbits_t;
extern volatile __INTSTATbits_t INTSTATbits __asm__ ("INTSTAT") __attribute__((section("sfrs"), address(0xBF80F020)));
extern volatile uint32_t        INTSTATCLR __attribute__((section("sfrs"),address(0xBF80F024)));
extern volatile uint32_t        INTSTATSET __attribute__((section("sfrs"),address(0xBF80F028)));
extern volatile uint32_t        INTSTATINV __attribute__((section("sfrs"),address(0xBF80F02C)));
#define IPTMR IPTMR
extern volatile uint32_t   IPTMR __attribute__((section("sfrs"), address(0xBF80F030)));
typedef struct {
  uint32_t IPTMR:32;
} __IPTMRbits_t;
extern volatile __IPTMRbits_t IPTMRbits __asm__ ("IPTMR") __attribute__((section("sfrs"), address(0xBF80F030)));
extern volatile uint32_t        IPTMRCLR __attribute__((section("sfrs"),address(0xBF80F034)));
extern volatile uint32_t        IPTMRSET __attribute__((section("sfrs"),address(0xBF80F038)));
extern volatile uint32_t        IPTMRINV __attribute__((section("sfrs"),address(0xBF80F03C)));
#define IFS0 IFS0
extern volatile uint32_t   IFS0 __attribute__((section("sfrs"), address(0xBF80F040)));
typedef struct {
  uint32_t CTIF:1;
  uint32_t CS0IF:1;
  uint32_t CS1IF:1;
  uint32_t INT0IF:1;
  uint32_t INT1IF:1;
  uint32_t INT2IF:1;
  uint32_t INT3IF:1;
  uint32_t INT4IF:1;
  uint32_t CNAIF:1;
  uint32_t CNBIF:1;
  uint32_t CNCIF:1;
  uint32_t CNDIF:1;
  uint32_t :5;
  uint32_t T1IF:1;
  uint32_t T2IF:1;
  uint32_t T3IF:1;
  uint32_t :3;
  uint32_t CMP1IF:1;
  uint32_t CMP2IF:1;
  uint32_t CMP3IF:1;
  uint32_t :3;
  uint32_t USBIF:1;
} __IFS0bits_t;
extern volatile __IFS0bits_t IFS0bits __asm__ ("IFS0") __attribute__((section("sfrs"), address(0xBF80F040)));
extern volatile uint32_t        IFS0CLR __attribute__((section("sfrs"),address(0xBF80F044)));
extern volatile uint32_t        IFS0SET __attribute__((section("sfrs"),address(0xBF80F048)));
extern volatile uint32_t        IFS0INV __attribute__((section("sfrs"),address(0xBF80F04C)));
#define IFS1 IFS1
extern volatile uint32_t   IFS1 __attribute__((section("sfrs"), address(0xBF80F050)));
typedef struct {
  uint32_t RTCCIF:1;
  uint32_t AD1IF:1;
  uint32_t :2;
  uint32_t LVDIF:1;
  uint32_t CLC1IF:1;
  uint32_t CLC2IF:1;
  uint32_t CLC3IF:1;
  uint32_t CLC4IF:1;
  uint32_t SPI1EIF:1;
  uint32_t SPI1TXIF:1;
  uint32_t SPI1RXIF:1;
  uint32_t SPI2EIF:1;
  uint32_t SPI2TXIF:1;
  uint32_t SPI2RXIF:1;
  uint32_t SPI3EIF:1;
  uint32_t SPI3TXIF:1;
  uint32_t SPI3RXIF:1;
  uint32_t :3;
  uint32_t U1RXIF:1;
  uint32_t U1TXIF:1;
  uint32_t U1EIF:1;
  uint32_t U2RXIF:1;
  uint32_t U2TXIF:1;
  uint32_t U2EIF:1;
  uint32_t U3RXIF:1;
  uint32_t U3TXIF:1;
  uint32_t U3EIF:1;
} __IFS1bits_t;
extern volatile __IFS1bits_t IFS1bits __asm__ ("IFS1") __attribute__((section("sfrs"), address(0xBF80F050)));
extern volatile uint32_t        IFS1CLR __attribute__((section("sfrs"),address(0xBF80F054)));
extern volatile uint32_t        IFS1SET __attribute__((section("sfrs"),address(0xBF80F058)));
extern volatile uint32_t        IFS1INV __attribute__((section("sfrs"),address(0xBF80F05C)));
#define IFS2 IFS2
extern volatile uint32_t   IFS2 __attribute__((section("sfrs"), address(0xBF80F060)));
typedef struct {
  uint32_t :1;
  uint32_t I2C1SIF:1;
  uint32_t I2C1MIF:1;
  uint32_t I2C1BCIF:1;
  uint32_t I2C2SIF:1;
  uint32_t I2C2MIF:1;
  uint32_t I2C2BCIF:1;
  uint32_t I2C3SIF:1;
  uint32_t I2C3MIF:1;
  uint32_t I2C3BCIF:1;
  uint32_t CCP1IF:1;
  uint32_t CCT1IF:1;
  uint32_t CCP2IF:1;
  uint32_t CCT2IF:1;
  uint32_t CCP3IF:1;
  uint32_t CCT3IF:1;
  uint32_t CCP4IF:1;
  uint32_t CCT4IF:1;
  uint32_t CCP5IF:1;
  uint32_t CCT5IF:1;
  uint32_t CCP6IF:1;
  uint32_t CCT6IF:1;
  uint32_t CCP7IF:1;
  uint32_t CCT7IF:1;
  uint32_t CCP8IF:1;
  uint32_t CCT8IF:1;
  uint32_t CCP9IF:1;
  uint32_t CCT9IF:1;
  uint32_t FSTIF:1;
  uint32_t :1;
  uint32_t NVMIF:1;
  uint32_t CPCIF:1;
} __IFS2bits_t;
extern volatile __IFS2bits_t IFS2bits __asm__ ("IFS2") __attribute__((section("sfrs"), address(0xBF80F060)));
extern volatile uint32_t        IFS2CLR __attribute__((section("sfrs"),address(0xBF80F064)));
extern volatile uint32_t        IFS2SET __attribute__((section("sfrs"),address(0xBF80F068)));
extern volatile uint32_t        IFS2INV __attribute__((section("sfrs"),address(0xBF80F06C)));
#define IFS3 IFS3
extern volatile uint32_t   IFS3 __attribute__((section("sfrs"), address(0xBF80F070)));
typedef struct {
  uint32_t :1;
  uint32_t ECCBEIF:1;
  uint32_t DMA0IF:1;
  uint32_t DMA1IF:1;
  uint32_t DMA2IF:1;
  uint32_t DMA3IF:1;
} __IFS3bits_t;
extern volatile __IFS3bits_t IFS3bits __asm__ ("IFS3") __attribute__((section("sfrs"), address(0xBF80F070)));
extern volatile uint32_t        IFS3CLR __attribute__((section("sfrs"),address(0xBF80F074)));
extern volatile uint32_t        IFS3SET __attribute__((section("sfrs"),address(0xBF80F078)));
extern volatile uint32_t        IFS3INV __attribute__((section("sfrs"),address(0xBF80F07C)));
#define IEC0 IEC0
extern volatile uint32_t   IEC0 __attribute__((section("sfrs"), address(0xBF80F0C0)));
typedef struct {
  uint32_t CTIE:1;
  uint32_t CS0IE:1;
  uint32_t CS1IE:1;
  uint32_t INT0IE:1;
  uint32_t INT1IE:1;
  uint32_t INT2IE:1;
  uint32_t INT3IE:1;
  uint32_t INT4IE:1;
  uint32_t CNAIE:1;
  uint32_t CNBIE:1;
  uint32_t CNCIE:1;
  uint32_t CNDIE:1;
  uint32_t :5;
  uint32_t T1IE:1;
  uint32_t T2IE:1;
  uint32_t T3IE:1;
  uint32_t :3;
  uint32_t CMP1IE:1;
  uint32_t CMP2IE:1;
  uint32_t CMP3IE:1;
  uint32_t :3;
  uint32_t USBIE:1;
} __IEC0bits_t;
extern volatile __IEC0bits_t IEC0bits __asm__ ("IEC0") __attribute__((section("sfrs"), address(0xBF80F0C0)));
extern volatile uint32_t        IEC0CLR __attribute__((section("sfrs"),address(0xBF80F0C4)));
extern volatile uint32_t        IEC0SET __attribute__((section("sfrs"),address(0xBF80F0C8)));
extern volatile uint32_t        IEC0INV __attribute__((section("sfrs"),address(0xBF80F0CC)));
#define IEC1 IEC1
extern volatile uint32_t   IEC1 __attribute__((section("sfrs"), address(0xBF80F0D0)));
typedef struct {
  uint32_t RTCCIE:1;
  uint32_t AD1IE:1;
  uint32_t :2;
  uint32_t LVDIE:1;
  uint32_t CLC1IE:1;
  uint32_t CLC2IE:1;
  uint32_t CLC3IE:1;
  uint32_t CLC4IE:1;
  uint32_t SPI1EIE:1;
  uint32_t SPI1TXIE:1;
  uint32_t SPI1RXIE:1;
  uint32_t SPI2EIE:1;
  uint32_t SPI2TXIE:1;
  uint32_t SPI2RXIE:1;
  uint32_t SPI3EIE:1;
  uint32_t SPI3TXIE:1;
  uint32_t SPI3RXIE:1;
  uint32_t :3;
  uint32_t U1RXIE:1;
  uint32_t U1TXIE:1;
  uint32_t U1EIE:1;
  uint32_t U2RXIE:1;
  uint32_t U2TXIE:1;
  uint32_t U2EIE:1;
  uint32_t U3RXIE:1;
  uint32_t U3TXIE:1;
  uint32_t U3EIE:1;
} __IEC1bits_t;
extern volatile __IEC1bits_t IEC1bits __asm__ ("IEC1") __attribute__((section("sfrs"), address(0xBF80F0D0)));
extern volatile uint32_t        IEC1CLR __attribute__((section("sfrs"),address(0xBF80F0D4)));
extern volatile uint32_t        IEC1SET __attribute__((section("sfrs"),address(0xBF80F0D8)));
extern volatile uint32_t        IEC1INV __attribute__((section("sfrs"),address(0xBF80F0DC)));
#define IEC2 IEC2
extern volatile uint32_t   IEC2 __attribute__((section("sfrs"), address(0xBF80F0E0)));
typedef struct {
  uint32_t :1;
  uint32_t I2C1SIE:1;
  uint32_t I2C1MIE:1;
  uint32_t I2C1BCIE:1;
  uint32_t I2C2SIE:1;
  uint32_t I2C2MIE:1;
  uint32_t I2C2BCIE:1;
  uint32_t I2C3SIE:1;
  uint32_t I2C3MIE:1;
  uint32_t I2C3BCIE:1;
  uint32_t CCP1IE:1;
  uint32_t CCT1IE:1;
  uint32_t CCP2IE:1;
  uint32_t CCT2IE:1;
  uint32_t CCP3IE:1;
  uint32_t CCT3IE:1;
  uint32_t CCP4IE:1;
  uint32_t CCT4IE:1;
  uint32_t CCP5IE:1;
  uint32_t CCT5IE:1;
  uint32_t CCP6IE:1;
  uint32_t CCT6IE:1;
  uint32_t CCP7IE:1;
  uint32_t CCT7IE:1;
  uint32_t CCP8IE:1;
  uint32_t CCT8IE:1;
  uint32_t CCP9IE:1;
  uint32_t CCT9IE:1;
  uint32_t FSTIE:1;
  uint32_t :1;
  uint32_t NVMIE:1;
  uint32_t CPCIE:1;
} __IEC2bits_t;
extern volatile __IEC2bits_t IEC2bits __asm__ ("IEC2") __attribute__((section("sfrs"), address(0xBF80F0E0)));
extern volatile uint32_t        IEC2CLR __attribute__((section("sfrs"),address(0xBF80F0E4)));
extern volatile uint32_t        IEC2SET __attribute__((section("sfrs"),address(0xBF80F0E8)));
extern volatile uint32_t        IEC2INV __attribute__((section("sfrs"),address(0xBF80F0EC)));
#define IEC3 IEC3
extern volatile uint32_t   IEC3 __attribute__((section("sfrs"), address(0xBF80F0F0)));
typedef struct {
  uint32_t :1;
  uint32_t ECCBEIE:1;
  uint32_t DMA0IE:1;
  uint32_t DMA1IE:1;
  uint32_t DMA2IE:1;
  uint32_t DMA3IE:1;
} __IEC3bits_t;
extern volatile __IEC3bits_t IEC3bits __asm__ ("IEC3") __attribute__((section("sfrs"), address(0xBF80F0F0)));
extern volatile uint32_t        IEC3CLR __attribute__((section("sfrs"),address(0xBF80F0F4)));
extern volatile uint32_t        IEC3SET __attribute__((section("sfrs"),address(0xBF80F0F8)));
extern volatile uint32_t        IEC3INV __attribute__((section("sfrs"),address(0xBF80F0FC)));
#define IPC0 IPC0
extern volatile uint32_t   IPC0 __attribute__((section("sfrs"), address(0xBF80F140)));
typedef struct {
  uint32_t CTIS:2;
  uint32_t CTIP:3;
  uint32_t :3;
  uint32_t CS0IS:2;
  uint32_t CS0IP:3;
  uint32_t :3;
  uint32_t CS1IS:2;
  uint32_t CS1IP:3;
  uint32_t :3;
  uint32_t INT0IS:2;
  uint32_t INT0IP:3;
} __IPC0bits_t;
extern volatile __IPC0bits_t IPC0bits __asm__ ("IPC0") __attribute__((section("sfrs"), address(0xBF80F140)));
extern volatile uint32_t        IPC0CLR __attribute__((section("sfrs"),address(0xBF80F144)));
extern volatile uint32_t        IPC0SET __attribute__((section("sfrs"),address(0xBF80F148)));
extern volatile uint32_t        IPC0INV __attribute__((section("sfrs"),address(0xBF80F14C)));
#define IPC1 IPC1
extern volatile uint32_t   IPC1 __attribute__((section("sfrs"), address(0xBF80F150)));
typedef struct {
  uint32_t INT1IS:2;
  uint32_t INT1IP:3;
  uint32_t :3;
  uint32_t INT2IS:2;
  uint32_t INT2IP:3;
  uint32_t :3;
  uint32_t INT3IS:2;
  uint32_t INT3IP:3;
  uint32_t :3;
  uint32_t INT4IS:2;
  uint32_t INT4IP:3;
} __IPC1bits_t;
extern volatile __IPC1bits_t IPC1bits __asm__ ("IPC1") __attribute__((section("sfrs"), address(0xBF80F150)));
extern volatile uint32_t        IPC1CLR __attribute__((section("sfrs"),address(0xBF80F154)));
extern volatile uint32_t        IPC1SET __attribute__((section("sfrs"),address(0xBF80F158)));
extern volatile uint32_t        IPC1INV __attribute__((section("sfrs"),address(0xBF80F15C)));
#define IPC2 IPC2
extern volatile uint32_t   IPC2 __attribute__((section("sfrs"), address(0xBF80F160)));
typedef struct {
  uint32_t CNAIS:2;
  uint32_t CNAIP:3;
  uint32_t :3;
  uint32_t CNBIS:2;
  uint32_t CNBIP:3;
  uint32_t :3;
  uint32_t CNCIS:2;
  uint32_t CNCIP:3;
  uint32_t :3;
  uint32_t CNDIS:2;
  uint32_t CNDIP:3;
} __IPC2bits_t;
extern volatile __IPC2bits_t IPC2bits __asm__ ("IPC2") __attribute__((section("sfrs"), address(0xBF80F160)));
extern volatile uint32_t        IPC2CLR __attribute__((section("sfrs"),address(0xBF80F164)));
extern volatile uint32_t        IPC2SET __attribute__((section("sfrs"),address(0xBF80F168)));
extern volatile uint32_t        IPC2INV __attribute__((section("sfrs"),address(0xBF80F16C)));
#define IPC3 IPC3
extern volatile uint32_t   IPC3 __attribute__((section("sfrs"), address(0xBF80F170)));
extern volatile uint32_t        IPC3CLR __attribute__((section("sfrs"),address(0xBF80F174)));
extern volatile uint32_t        IPC3SET __attribute__((section("sfrs"),address(0xBF80F178)));
extern volatile uint32_t        IPC3INV __attribute__((section("sfrs"),address(0xBF80F17C)));
#define IPC4 IPC4
extern volatile uint32_t   IPC4 __attribute__((section("sfrs"), address(0xBF80F180)));
typedef struct {
  uint32_t :8;
  uint32_t T1IS:2;
  uint32_t T1IP:3;
  uint32_t :3;
  uint32_t T2IS:2;
  uint32_t T2IP:3;
  uint32_t :3;
  uint32_t T3IS:2;
  uint32_t T3IP:3;
} __IPC4bits_t;
extern volatile __IPC4bits_t IPC4bits __asm__ ("IPC4") __attribute__((section("sfrs"), address(0xBF80F180)));
extern volatile uint32_t        IPC4CLR __attribute__((section("sfrs"),address(0xBF80F184)));
extern volatile uint32_t        IPC4SET __attribute__((section("sfrs"),address(0xBF80F188)));
extern volatile uint32_t        IPC4INV __attribute__((section("sfrs"),address(0xBF80F18C)));
#define IPC5 IPC5
extern volatile uint32_t   IPC5 __attribute__((section("sfrs"), address(0xBF80F190)));
typedef struct {
  uint32_t :24;
  uint32_t CMP1IS:2;
  uint32_t CMP1IP:3;
} __IPC5bits_t;
extern volatile __IPC5bits_t IPC5bits __asm__ ("IPC5") __attribute__((section("sfrs"), address(0xBF80F190)));
extern volatile uint32_t        IPC5CLR __attribute__((section("sfrs"),address(0xBF80F194)));
extern volatile uint32_t        IPC5SET __attribute__((section("sfrs"),address(0xBF80F198)));
extern volatile uint32_t        IPC5INV __attribute__((section("sfrs"),address(0xBF80F19C)));
#define IPC6 IPC6
extern volatile uint32_t   IPC6 __attribute__((section("sfrs"), address(0xBF80F1A0)));
typedef struct {
  uint32_t CMP2IS:2;
  uint32_t CMP2IP:3;
  uint32_t :3;
  uint32_t CMP3IS:2;
  uint32_t CMP3IP:3;
} __IPC6bits_t;
extern volatile __IPC6bits_t IPC6bits __asm__ ("IPC6") __attribute__((section("sfrs"), address(0xBF80F1A0)));
extern volatile uint32_t        IPC6CLR __attribute__((section("sfrs"),address(0xBF80F1A4)));
extern volatile uint32_t        IPC6SET __attribute__((section("sfrs"),address(0xBF80F1A8)));
extern volatile uint32_t        IPC6INV __attribute__((section("sfrs"),address(0xBF80F1AC)));
#define IPC7 IPC7
extern volatile uint32_t   IPC7 __attribute__((section("sfrs"), address(0xBF80F1B0)));
typedef struct {
  uint32_t :8;
  uint32_t USBIS:2;
  uint32_t USBIP:3;
} __IPC7bits_t;
extern volatile __IPC7bits_t IPC7bits __asm__ ("IPC7") __attribute__((section("sfrs"), address(0xBF80F1B0)));
extern volatile uint32_t        IPC7CLR __attribute__((section("sfrs"),address(0xBF80F1B4)));
extern volatile uint32_t        IPC7SET __attribute__((section("sfrs"),address(0xBF80F1B8)));
extern volatile uint32_t        IPC7INV __attribute__((section("sfrs"),address(0xBF80F1BC)));
#define IPC8 IPC8
extern volatile uint32_t   IPC8 __attribute__((section("sfrs"), address(0xBF80F1C0)));
typedef struct {
  uint32_t RTCCIS:2;
  uint32_t RTCCIP:3;
  uint32_t :3;
  uint32_t AD1IS:2;
  uint32_t AD1IP:3;
} __IPC8bits_t;
extern volatile __IPC8bits_t IPC8bits __asm__ ("IPC8") __attribute__((section("sfrs"), address(0xBF80F1C0)));
extern volatile uint32_t        IPC8CLR __attribute__((section("sfrs"),address(0xBF80F1C4)));
extern volatile uint32_t        IPC8SET __attribute__((section("sfrs"),address(0xBF80F1C8)));
extern volatile uint32_t        IPC8INV __attribute__((section("sfrs"),address(0xBF80F1CC)));
#define IPC9 IPC9
extern volatile uint32_t   IPC9 __attribute__((section("sfrs"), address(0xBF80F1D0)));
typedef struct {
  uint32_t LVDIS:2;
  uint32_t LVDIP:3;
  uint32_t :3;
  uint32_t CLC1IS:2;
  uint32_t CLC1IP:3;
  uint32_t :3;
  uint32_t CLC2IS:2;
  uint32_t CLC2IP:3;
  uint32_t :3;
  uint32_t CLC3IS:2;
  uint32_t CLC3IP:3;
} __IPC9bits_t;
extern volatile __IPC9bits_t IPC9bits __asm__ ("IPC9") __attribute__((section("sfrs"), address(0xBF80F1D0)));
extern volatile uint32_t        IPC9CLR __attribute__((section("sfrs"),address(0xBF80F1D4)));
extern volatile uint32_t        IPC9SET __attribute__((section("sfrs"),address(0xBF80F1D8)));
extern volatile uint32_t        IPC9INV __attribute__((section("sfrs"),address(0xBF80F1DC)));
#define IPC10 IPC10
extern volatile uint32_t   IPC10 __attribute__((section("sfrs"), address(0xBF80F1E0)));
typedef struct {
  uint32_t CLC4IS:2;
  uint32_t CLC4IP:3;
  uint32_t :3;
  uint32_t SPI1EIS:2;
  uint32_t SPI1EIP:3;
  uint32_t :3;
  uint32_t SPI1TXIS:2;
  uint32_t SPI1TXIP:3;
  uint32_t :3;
  uint32_t SPI1RXIS:2;
  uint32_t SPI1RXIP:3;
} __IPC10bits_t;
extern volatile __IPC10bits_t IPC10bits __asm__ ("IPC10") __attribute__((section("sfrs"), address(0xBF80F1E0)));
extern volatile uint32_t        IPC10CLR __attribute__((section("sfrs"),address(0xBF80F1E4)));
extern volatile uint32_t        IPC10SET __attribute__((section("sfrs"),address(0xBF80F1E8)));
extern volatile uint32_t        IPC10INV __attribute__((section("sfrs"),address(0xBF80F1EC)));
#define IPC11 IPC11
extern volatile uint32_t   IPC11 __attribute__((section("sfrs"), address(0xBF80F1F0)));
typedef struct {
  uint32_t SPI2EIS:2;
  uint32_t SPI2EIP:3;
  uint32_t :3;
  uint32_t SPI2TXIS:2;
  uint32_t SPI2TXIP:3;
  uint32_t :3;
  uint32_t SPI2RXIS:2;
  uint32_t SPI2RXIP:3;
  uint32_t :3;
  uint32_t SPI3EIS:2;
  uint32_t SPI3EIP:3;
} __IPC11bits_t;
extern volatile __IPC11bits_t IPC11bits __asm__ ("IPC11") __attribute__((section("sfrs"), address(0xBF80F1F0)));
extern volatile uint32_t        IPC11CLR __attribute__((section("sfrs"),address(0xBF80F1F4)));
extern volatile uint32_t        IPC11SET __attribute__((section("sfrs"),address(0xBF80F1F8)));
extern volatile uint32_t        IPC11INV __attribute__((section("sfrs"),address(0xBF80F1FC)));
#define IPC12 IPC12
extern volatile uint32_t   IPC12 __attribute__((section("sfrs"), address(0xBF80F200)));
typedef struct {
  uint32_t SPI3TXIS:2;
  uint32_t SPI3TXIP:3;
  uint32_t :3;
  uint32_t SPI3RXIS:2;
  uint32_t SPI3RXIP:3;
} __IPC12bits_t;
extern volatile __IPC12bits_t IPC12bits __asm__ ("IPC12") __attribute__((section("sfrs"), address(0xBF80F200)));
extern volatile uint32_t        IPC12CLR __attribute__((section("sfrs"),address(0xBF80F204)));
extern volatile uint32_t        IPC12SET __attribute__((section("sfrs"),address(0xBF80F208)));
extern volatile uint32_t        IPC12INV __attribute__((section("sfrs"),address(0xBF80F20C)));
#define IPC13 IPC13
extern volatile uint32_t   IPC13 __attribute__((section("sfrs"), address(0xBF80F210)));
typedef struct {
  uint32_t :8;
  uint32_t U1RXIS:2;
  uint32_t U1RXIP:3;
  uint32_t :3;
  uint32_t U1TXIS:2;
  uint32_t U1TXIP:3;
  uint32_t :3;
  uint32_t U1EIS:2;
  uint32_t U1EIP:3;
} __IPC13bits_t;
extern volatile __IPC13bits_t IPC13bits __asm__ ("IPC13") __attribute__((section("sfrs"), address(0xBF80F210)));
extern volatile uint32_t        IPC13CLR __attribute__((section("sfrs"),address(0xBF80F214)));
extern volatile uint32_t        IPC13SET __attribute__((section("sfrs"),address(0xBF80F218)));
extern volatile uint32_t        IPC13INV __attribute__((section("sfrs"),address(0xBF80F21C)));
#define IPC14 IPC14
extern volatile uint32_t   IPC14 __attribute__((section("sfrs"), address(0xBF80F220)));
typedef struct {
  uint32_t U2RXIS:2;
  uint32_t U2RXIP:3;
  uint32_t :3;
  uint32_t U2TXIS:2;
  uint32_t U2TXIP:3;
  uint32_t :3;
  uint32_t U2EIS:2;
  uint32_t U2EIP:3;
  uint32_t :3;
  uint32_t U3RXIS:2;
  uint32_t U3RXIP:3;
} __IPC14bits_t;
extern volatile __IPC14bits_t IPC14bits __asm__ ("IPC14") __attribute__((section("sfrs"), address(0xBF80F220)));
extern volatile uint32_t        IPC14CLR __attribute__((section("sfrs"),address(0xBF80F224)));
extern volatile uint32_t        IPC14SET __attribute__((section("sfrs"),address(0xBF80F228)));
extern volatile uint32_t        IPC14INV __attribute__((section("sfrs"),address(0xBF80F22C)));
#define IPC15 IPC15
extern volatile uint32_t   IPC15 __attribute__((section("sfrs"), address(0xBF80F230)));
typedef struct {
  uint32_t U3TXIS:2;
  uint32_t U3TXIP:3;
  uint32_t :3;
  uint32_t U3EIS:2;
  uint32_t U3EIP:3;
} __IPC15bits_t;
extern volatile __IPC15bits_t IPC15bits __asm__ ("IPC15") __attribute__((section("sfrs"), address(0xBF80F230)));
extern volatile uint32_t        IPC15CLR __attribute__((section("sfrs"),address(0xBF80F234)));
extern volatile uint32_t        IPC15SET __attribute__((section("sfrs"),address(0xBF80F238)));
extern volatile uint32_t        IPC15INV __attribute__((section("sfrs"),address(0xBF80F23C)));
#define IPC16 IPC16
extern volatile uint32_t   IPC16 __attribute__((section("sfrs"), address(0xBF80F240)));
typedef struct {
  uint32_t :8;
  uint32_t I2C1SIS:2;
  uint32_t I2C1SIP:3;
  uint32_t :3;
  uint32_t I2C1MIS:2;
  uint32_t I2C1MIP:3;
  uint32_t :3;
  uint32_t I2C1BCIS:2;
  uint32_t I2C1BCIP:3;
} __IPC16bits_t;
extern volatile __IPC16bits_t IPC16bits __asm__ ("IPC16") __attribute__((section("sfrs"), address(0xBF80F240)));
extern volatile uint32_t        IPC16CLR __attribute__((section("sfrs"),address(0xBF80F244)));
extern volatile uint32_t        IPC16SET __attribute__((section("sfrs"),address(0xBF80F248)));
extern volatile uint32_t        IPC16INV __attribute__((section("sfrs"),address(0xBF80F24C)));
#define IPC17 IPC17
extern volatile uint32_t   IPC17 __attribute__((section("sfrs"), address(0xBF80F250)));
typedef struct {
  uint32_t I2C2SIS:2;
  uint32_t I2C2SIP:3;
  uint32_t :3;
  uint32_t I2C2MIS:2;
  uint32_t I2C2MIP:3;
  uint32_t :3;
  uint32_t I2C2BCIS:2;
  uint32_t I2C2BCIP:3;
  uint32_t :3;
  uint32_t I2C3SIS:2;
  uint32_t I2C3SIP:3;
} __IPC17bits_t;
extern volatile __IPC17bits_t IPC17bits __asm__ ("IPC17") __attribute__((section("sfrs"), address(0xBF80F250)));
extern volatile uint32_t        IPC17CLR __attribute__((section("sfrs"),address(0xBF80F254)));
extern volatile uint32_t        IPC17SET __attribute__((section("sfrs"),address(0xBF80F258)));
extern volatile uint32_t        IPC17INV __attribute__((section("sfrs"),address(0xBF80F25C)));
#define IPC18 IPC18
extern volatile uint32_t   IPC18 __attribute__((section("sfrs"), address(0xBF80F260)));
typedef struct {
  uint32_t I2C3MIS:2;
  uint32_t I2C3MIP:3;
  uint32_t :3;
  uint32_t I2C3BCIS:2;
  uint32_t I2C3BCIP:3;
  uint32_t :3;
  uint32_t CCP1IS:2;
  uint32_t CCP1IP:3;
  uint32_t :3;
  uint32_t CCT1IS:2;
  uint32_t CCT1IP:3;
} __IPC18bits_t;
extern volatile __IPC18bits_t IPC18bits __asm__ ("IPC18") __attribute__((section("sfrs"), address(0xBF80F260)));
extern volatile uint32_t        IPC18CLR __attribute__((section("sfrs"),address(0xBF80F264)));
extern volatile uint32_t        IPC18SET __attribute__((section("sfrs"),address(0xBF80F268)));
extern volatile uint32_t        IPC18INV __attribute__((section("sfrs"),address(0xBF80F26C)));
#define IPC19 IPC19
extern volatile uint32_t   IPC19 __attribute__((section("sfrs"), address(0xBF80F270)));
typedef struct {
  uint32_t CCP2IS:2;
  uint32_t CCP2IP:3;
  uint32_t :3;
  uint32_t CCT2IS:2;
  uint32_t CCT2IP:3;
  uint32_t :3;
  uint32_t CCP3IS:2;
  uint32_t CCP3IP:3;
  uint32_t :3;
  uint32_t CCT3IS:2;
  uint32_t CCT3IP:3;
} __IPC19bits_t;
extern volatile __IPC19bits_t IPC19bits __asm__ ("IPC19") __attribute__((section("sfrs"), address(0xBF80F270)));
extern volatile uint32_t        IPC19CLR __attribute__((section("sfrs"),address(0xBF80F274)));
extern volatile uint32_t        IPC19SET __attribute__((section("sfrs"),address(0xBF80F278)));
extern volatile uint32_t        IPC19INV __attribute__((section("sfrs"),address(0xBF80F27C)));
#define IPC20 IPC20
extern volatile uint32_t   IPC20 __attribute__((section("sfrs"), address(0xBF80F280)));
typedef struct {
  uint32_t CCP4IS:2;
  uint32_t CCP4IP:3;
  uint32_t :3;
  uint32_t CCT4IS:2;
  uint32_t CCT4IP:3;
  uint32_t :3;
  uint32_t CCP5IS:2;
  uint32_t CCP5IP:3;
  uint32_t :3;
  uint32_t CCT5IS:2;
  uint32_t CCT5IP:3;
} __IPC20bits_t;
extern volatile __IPC20bits_t IPC20bits __asm__ ("IPC20") __attribute__((section("sfrs"), address(0xBF80F280)));
extern volatile uint32_t        IPC20CLR __attribute__((section("sfrs"),address(0xBF80F284)));
extern volatile uint32_t        IPC20SET __attribute__((section("sfrs"),address(0xBF80F288)));
extern volatile uint32_t        IPC20INV __attribute__((section("sfrs"),address(0xBF80F28C)));
#define IPC21 IPC21
extern volatile uint32_t   IPC21 __attribute__((section("sfrs"), address(0xBF80F290)));
typedef struct {
  uint32_t CCP6IS:2;
  uint32_t CCP6IP:3;
  uint32_t :3;
  uint32_t CCT6IS:2;
  uint32_t CCT6IP:3;
  uint32_t :3;
  uint32_t CCP7IS:2;
  uint32_t CCP7IP:3;
  uint32_t :3;
  uint32_t CCT7IS:2;
  uint32_t CCT7IP:3;
} __IPC21bits_t;
extern volatile __IPC21bits_t IPC21bits __asm__ ("IPC21") __attribute__((section("sfrs"), address(0xBF80F290)));
extern volatile uint32_t        IPC21CLR __attribute__((section("sfrs"),address(0xBF80F294)));
extern volatile uint32_t        IPC21SET __attribute__((section("sfrs"),address(0xBF80F298)));
extern volatile uint32_t        IPC21INV __attribute__((section("sfrs"),address(0xBF80F29C)));
#define IPC22 IPC22
extern volatile uint32_t   IPC22 __attribute__((section("sfrs"), address(0xBF80F2A0)));
typedef struct {
  uint32_t CCP8IS:2;
  uint32_t CCP8IP:3;
  uint32_t :3;
  uint32_t CCT8IS:2;
  uint32_t CCT8IP:3;
  uint32_t :3;
  uint32_t CCP9IS:2;
  uint32_t CCP9IP:3;
  uint32_t :3;
  uint32_t CCT9IS:2;
  uint32_t CCT9IP:3;
} __IPC22bits_t;
extern volatile __IPC22bits_t IPC22bits __asm__ ("IPC22") __attribute__((section("sfrs"), address(0xBF80F2A0)));
extern volatile uint32_t        IPC22CLR __attribute__((section("sfrs"),address(0xBF80F2A4)));
extern volatile uint32_t        IPC22SET __attribute__((section("sfrs"),address(0xBF80F2A8)));
extern volatile uint32_t        IPC22INV __attribute__((section("sfrs"),address(0xBF80F2AC)));
#define IPC23 IPC23
extern volatile uint32_t   IPC23 __attribute__((section("sfrs"), address(0xBF80F2B0)));
typedef struct {
  uint32_t FSTIS:2;
  uint32_t FSTIP:3;
  uint32_t :11;
  uint32_t NVMIS:2;
  uint32_t NVMIP:3;
  uint32_t :3;
  uint32_t CPCIS:2;
  uint32_t CPCIP:3;
} __IPC23bits_t;
extern volatile __IPC23bits_t IPC23bits __asm__ ("IPC23") __attribute__((section("sfrs"), address(0xBF80F2B0)));
extern volatile uint32_t        IPC23CLR __attribute__((section("sfrs"),address(0xBF80F2B4)));
extern volatile uint32_t        IPC23SET __attribute__((section("sfrs"),address(0xBF80F2B8)));
extern volatile uint32_t        IPC23INV __attribute__((section("sfrs"),address(0xBF80F2BC)));
#define IPC24 IPC24
extern volatile uint32_t   IPC24 __attribute__((section("sfrs"), address(0xBF80F2C0)));
typedef struct {
  uint32_t :8;
  uint32_t ECCBEIS:2;
  uint32_t ECCBEIP:3;
  uint32_t :3;
  uint32_t DMA0IS:2;
  uint32_t DMA0IP:3;
  uint32_t :3;
  uint32_t DMA1IS:2;
  uint32_t DMA1IP:3;
} __IPC24bits_t;
extern volatile __IPC24bits_t IPC24bits __asm__ ("IPC24") __attribute__((section("sfrs"), address(0xBF80F2C0)));
extern volatile uint32_t        IPC24CLR __attribute__((section("sfrs"),address(0xBF80F2C4)));
extern volatile uint32_t        IPC24SET __attribute__((section("sfrs"),address(0xBF80F2C8)));
extern volatile uint32_t        IPC24INV __attribute__((section("sfrs"),address(0xBF80F2CC)));
#define IPC25 IPC25
extern volatile uint32_t   IPC25 __attribute__((section("sfrs"), address(0xBF80F2D0)));
typedef struct {
  uint32_t DMA2IS:2;
  uint32_t DMA2IP:3;
  uint32_t :3;
  uint32_t DMA3IS:2;
  uint32_t DMA3IP:3;
} __IPC25bits_t;
extern volatile __IPC25bits_t IPC25bits __asm__ ("IPC25") __attribute__((section("sfrs"), address(0xBF80F2D0)));
extern volatile uint32_t        IPC25CLR __attribute__((section("sfrs"),address(0xBF80F2D4)));
extern volatile uint32_t        IPC25SET __attribute__((section("sfrs"),address(0xBF80F2D8)));
extern volatile uint32_t        IPC25INV __attribute__((section("sfrs"),address(0xBF80F2DC)));
#define UDID1 UDID1
extern volatile uint32_t   UDID1 __attribute__((section("sfrs"), address(0xBFC41840)));
#define UDID2 UDID2
extern volatile uint32_t   UDID2 __attribute__((section("sfrs"), address(0xBFC41844)));
#define UDID3 UDID3
extern volatile uint32_t   UDID3 __attribute__((section("sfrs"), address(0xBFC41848)));
#define UDID4 UDID4
extern volatile uint32_t   UDID4 __attribute__((section("sfrs"), address(0xBFC4184C)));
#define UDID5 UDID5
extern volatile uint32_t   UDID5 __attribute__((section("sfrs"), address(0xBFC41850)));
#define FDEVOPT FDEVOPT
extern volatile uint32_t   FDEVOPT __attribute__((section("sfrs"), address(0xBFC017C4)));
typedef union {
  struct {
    uint32_t :3;
    uint32_t SOSCHP:1;
    uint32_t ALTI2C:1;
    uint32_t :9;
    uint32_t FUSBIDIO:1;
    uint32_t FVBUSIO:1;
    uint32_t USERID:16;
  };
  struct {
    uint32_t w:32;
  };
} __FDEVOPTbits_t;
extern volatile __FDEVOPTbits_t FDEVOPTbits __asm__ ("FDEVOPT") __attribute__((section("sfrs"), address(0xBFC017C4)));
#define FICD FICD
extern volatile uint32_t   FICD __attribute__((section("sfrs"), address(0xBFC017C8)));
typedef union {
  struct {
    uint32_t :2;
    uint32_t JTAGEN:1;
    uint32_t ICS:2;
  };
  struct {
    uint32_t w:32;
  };
} __FICDbits_t;
extern volatile __FICDbits_t FICDbits __asm__ ("FICD") __attribute__((section("sfrs"), address(0xBFC017C8)));
#define FPOR FPOR
extern volatile uint32_t   FPOR __attribute__((section("sfrs"), address(0xBFC017CC)));
typedef union {
  struct {
    uint32_t BOREN:2;
    uint32_t RETVR:1;
    uint32_t LPBOREN:1;
  };
  struct {
    uint32_t w:32;
  };
} __FPORbits_t;
extern volatile __FPORbits_t FPORbits __asm__ ("FPOR") __attribute__((section("sfrs"), address(0xBFC017CC)));
#define FWDT FWDT
extern volatile uint32_t   FWDT __attribute__((section("sfrs"), address(0xBFC017D0)));
typedef union {
  struct {
    uint32_t SWDTPS:5;
    uint32_t FWDTWINSZ:2;
    uint32_t WINDIS:1;
    uint32_t RWDTPS:5;
    uint32_t RCLKSEL:2;
    uint32_t FWDTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __FWDTbits_t;
extern volatile __FWDTbits_t FWDTbits __asm__ ("FWDT") __attribute__((section("sfrs"), address(0xBFC017D0)));
#define FOSCSEL FOSCSEL
extern volatile uint32_t   FOSCSEL __attribute__((section("sfrs"), address(0xBFC017D4)));
typedef union {
  struct {
    uint32_t FNOSC:3;
    uint32_t :1;
    uint32_t PLLSRC:1;
    uint32_t :1;
    uint32_t SOSCEN:1;
    uint32_t IESO:1;
    uint32_t POSCMOD:2;
    uint32_t OSCIOFNC:1;
    uint32_t :1;
    uint32_t SOSCSEL:1;
    uint32_t :1;
    uint32_t FCKSM:2;
  };
  struct {
    uint32_t w:32;
  };
} __FOSCSELbits_t;
extern volatile __FOSCSELbits_t FOSCSELbits __asm__ ("FOSCSEL") __attribute__((section("sfrs"), address(0xBFC017D4)));
#define FSEC FSEC
extern volatile uint32_t   FSEC __attribute__((section("sfrs"), address(0xBFC017D8)));
typedef union {
  struct {
    uint32_t :31;
    uint32_t CP:1;
  };
  struct {
    uint32_t w:32;
  };
} __FSECbits_t;
extern volatile __FSECbits_t FSECbits __asm__ ("FSEC") __attribute__((section("sfrs"), address(0xBFC017D8)));
#define AFDEVOPT AFDEVOPT
extern volatile uint32_t   AFDEVOPT __attribute__((section("sfrs"), address(0xBFC01744)));
typedef union {
  struct {
    uint32_t :3;
    uint32_t SOSCHP:1;
    uint32_t ALTI2C:1;
    uint32_t :9;
    uint32_t FUSBIDIO:1;
    uint32_t FVBUSIO:1;
    uint32_t USERID:16;
  };
  struct {
    uint32_t w:32;
  };
} __AFDEVOPTbits_t;
extern volatile __AFDEVOPTbits_t AFDEVOPTbits __asm__ ("AFDEVOPT") __attribute__((section("sfrs"), address(0xBFC01744)));
#define AFICD AFICD
extern volatile uint32_t   AFICD __attribute__((section("sfrs"), address(0xBFC01748)));
typedef union {
  struct {
    uint32_t :2;
    uint32_t JTAGEN:1;
    uint32_t ICS:2;
  };
  struct {
    uint32_t w:32;
  };
} __AFICDbits_t;
extern volatile __AFICDbits_t AFICDbits __asm__ ("AFICD") __attribute__((section("sfrs"), address(0xBFC01748)));
#define AFPOR AFPOR
extern volatile uint32_t   AFPOR __attribute__((section("sfrs"), address(0xBFC0174C)));
typedef union {
  struct {
    uint32_t BOREN:2;
    uint32_t RETVR:1;
    uint32_t LPBOREN:1;
  };
  struct {
    uint32_t w:32;
  };
} __AFPORbits_t;
extern volatile __AFPORbits_t AFPORbits __asm__ ("AFPOR") __attribute__((section("sfrs"), address(0xBFC0174C)));
#define AFWDT AFWDT
extern volatile uint32_t   AFWDT __attribute__((section("sfrs"), address(0xBFC01750)));
typedef union {
  struct {
    uint32_t SWDTPS:5;
    uint32_t FWDTWINSZ:2;
    uint32_t WINDIS:1;
    uint32_t RWDTPS:5;
    uint32_t RCLKSEL:2;
    uint32_t FWDTEN:1;
  };
  struct {
    uint32_t w:32;
  };
} __AFWDTbits_t;
extern volatile __AFWDTbits_t AFWDTbits __asm__ ("AFWDT") __attribute__((section("sfrs"), address(0xBFC01750)));
#define AFOSCSEL AFOSCSEL
extern volatile uint32_t   AFOSCSEL __attribute__((section("sfrs"), address(0xBFC01754)));
typedef union {
  struct {
    uint32_t FNOSC:3;
    uint32_t :1;
    uint32_t PLLSRC:1;
    uint32_t :1;
    uint32_t SOSCEN:1;
    uint32_t IESO:1;
    uint32_t POSCMOD:2;
    uint32_t OSCIOFNC:1;
    uint32_t :1;
    uint32_t SOSCSEL:1;
    uint32_t :1;
    uint32_t FCKSM:2;
  };
  struct {
    uint32_t w:32;
  };
} __AFOSCSELbits_t;
extern volatile __AFOSCSELbits_t AFOSCSELbits __asm__ ("AFOSCSEL") __attribute__((section("sfrs"), address(0xBFC01754)));
#define AFSEC AFSEC
extern volatile uint32_t   AFSEC __attribute__((section("sfrs"), address(0xBFC01758)));
typedef union {
  struct {
    uint32_t :31;
    uint32_t CP:1;
  };
  struct {
    uint32_t w:32;
  };
} __AFSECbits_t;
extern volatile __AFSECbits_t AFSECbits __asm__ ("AFSEC") __attribute__((section("sfrs"), address(0xBFC01758)));
#ifdef __cplusplus
}
#endif

#elif defined (__LANGUAGE_ASSEMBLY__)
  .extern RTCCON1          /* 0xBF800000 */
  .extern RTCCON1CLR       /* 0xBF800004 */
  .extern RTCCON1SET       /* 0xBF800008 */
  .extern RTCCON1INV       /* 0xBF80000C */
  .extern RTCCON2          /* 0xBF800010 */
  .extern RTCCON2CLR       /* 0xBF800014 */
  .extern RTCCON2SET       /* 0xBF800018 */
  .extern RTCCON2INV       /* 0xBF80001C */
  .extern RTCSTAT          /* 0xBF800030 */
  .extern RTCSTATCLR       /* 0xBF800034 */
  .extern RTCSTATSET       /* 0xBF800038 */
  .extern RTCSTATINV       /* 0xBF80003C */
  .extern RTCTIME          /* 0xBF800040 */
  .extern RTCTIMECLR       /* 0xBF800044 */
  .extern RTCTIMESET       /* 0xBF800048 */
  .extern RTCTIMEINV       /* 0xBF80004C */
  .extern RTCDATE          /* 0xBF800050 */
  .extern RTCDATECLR       /* 0xBF800054 */
  .extern RTCDATESET       /* 0xBF800058 */
  .extern RTCDATEINV       /* 0xBF80005C */
  .extern ALMTIME          /* 0xBF800060 */
  .extern ALMTIMECLR       /* 0xBF800064 */
  .extern ALMTIMESET       /* 0xBF800068 */
  .extern ALMTIMEINV       /* 0xBF80006C */
  .extern ALMDATE          /* 0xBF800070 */
  .extern ALMDATECLR       /* 0xBF800074 */
  .extern ALMDATESET       /* 0xBF800078 */
  .extern ALMDATEINV       /* 0xBF80007C */
  .extern CCP1CON1         /* 0xBF800100 */
  .extern CCP1CON1CLR      /* 0xBF800104 */
  .extern CCP1CON1SET      /* 0xBF800108 */
  .extern CCP1CON1INV      /* 0xBF80010C */
  .extern CCP1CON2         /* 0xBF800110 */
  .extern CCP1CON2CLR      /* 0xBF800114 */
  .extern CCP1CON2SET      /* 0xBF800118 */
  .extern CCP1CON2INV      /* 0xBF80011C */
  .extern CCP1CON3         /* 0xBF800120 */
  .extern CCP1CON3CLR      /* 0xBF800124 */
  .extern CCP1CON3SET      /* 0xBF800128 */
  .extern CCP1CON3INV      /* 0xBF80012C */
  .extern CCP1STAT         /* 0xBF800130 */
  .extern CCP1STATCLR      /* 0xBF800134 */
  .extern CCP1STATSET      /* 0xBF800138 */
  .extern CCP1STATINV      /* 0xBF80013C */
  .extern CCP1TMR          /* 0xBF800140 */
  .extern CCP1TMRCLR       /* 0xBF800144 */
  .extern CCP1TMRSET       /* 0xBF800148 */
  .extern CCP1TMRINV       /* 0xBF80014C */
  .extern CCP1PR           /* 0xBF800150 */
  .extern CCP1PRCLR        /* 0xBF800154 */
  .extern CCP1PRSET        /* 0xBF800158 */
  .extern CCP1PRINV        /* 0xBF80015C */
  .extern CCP1RA           /* 0xBF800160 */
  .extern CCP1RACLR        /* 0xBF800164 */
  .extern CCP1RASET        /* 0xBF800168 */
  .extern CCP1RAINV        /* 0xBF80016C */
  .extern CCP1RB           /* 0xBF800170 */
  .extern CCP1RBCLR        /* 0xBF800174 */
  .extern CCP1RBSET        /* 0xBF800178 */
  .extern CCP1RBINV        /* 0xBF80017C */
  .extern CCP1BUF          /* 0xBF800180 */
  .extern CCP1BUFCLR       /* 0xBF800184 */
  .extern CCP1BUFSET       /* 0xBF800188 */
  .extern CCP1BUFINV       /* 0xBF80018C */
  .extern CCP2CON1         /* 0xBF800200 */
  .extern CCP2CON1CLR      /* 0xBF800204 */
  .extern CCP2CON1SET      /* 0xBF800208 */
  .extern CCP2CON1INV      /* 0xBF80020C */
  .extern CCP2CON2         /* 0xBF800210 */
  .extern CCP2CON2CLR      /* 0xBF800214 */
  .extern CCP2CON2SET      /* 0xBF800218 */
  .extern CCP2CON2INV      /* 0xBF80021C */
  .extern CCP2CON3         /* 0xBF800220 */
  .extern CCP2CON3CLR      /* 0xBF800224 */
  .extern CCP2CON3SET      /* 0xBF800228 */
  .extern CCP2CON3INV      /* 0xBF80022C */
  .extern CCP2STAT         /* 0xBF800230 */
  .extern CCP2STATCLR      /* 0xBF800234 */
  .extern CCP2STATSET      /* 0xBF800238 */
  .extern CCP2STATINV      /* 0xBF80023C */
  .extern CCP2TMR          /* 0xBF800240 */
  .extern CCP2TMRCLR       /* 0xBF800244 */
  .extern CCP2TMRSET       /* 0xBF800248 */
  .extern CCP2TMRINV       /* 0xBF80024C */
  .extern CCP2PR           /* 0xBF800250 */
  .extern CCP2PRCLR        /* 0xBF800254 */
  .extern CCP2PRSET        /* 0xBF800258 */
  .extern CCP2PRINV        /* 0xBF80025C */
  .extern CCP2RA           /* 0xBF800260 */
  .extern CCP2RACLR        /* 0xBF800264 */
  .extern CCP2RASET        /* 0xBF800268 */
  .extern CCP2RAINV        /* 0xBF80026C */
  .extern CCP2RB           /* 0xBF800270 */
  .extern CCP2RBCLR        /* 0xBF800274 */
  .extern CCP2RBSET        /* 0xBF800278 */
  .extern CCP2RBINV        /* 0xBF80027C */
  .extern CCP2BUF          /* 0xBF800280 */
  .extern CCP2BUFCLR       /* 0xBF800284 */
  .extern CCP2BUFSET       /* 0xBF800288 */
  .extern CCP2BUFINV       /* 0xBF80028C */
  .extern CCP3CON1         /* 0xBF800300 */
  .extern CCP3CON1CLR      /* 0xBF800304 */
  .extern CCP3CON1SET      /* 0xBF800308 */
  .extern CCP3CON1INV      /* 0xBF80030C */
  .extern CCP3CON2         /* 0xBF800310 */
  .extern CCP3CON2CLR      /* 0xBF800314 */
  .extern CCP3CON2SET      /* 0xBF800318 */
  .extern CCP3CON2INV      /* 0xBF80031C */
  .extern CCP3CON3         /* 0xBF800320 */
  .extern CCP3CON3CLR      /* 0xBF800324 */
  .extern CCP3CON3SET      /* 0xBF800328 */
  .extern CCP3CON3INV      /* 0xBF80032C */
  .extern CCP3STAT         /* 0xBF800330 */
  .extern CCP3STATCLR      /* 0xBF800334 */
  .extern CCP3STATSET      /* 0xBF800338 */
  .extern CCP3STATINV      /* 0xBF80033C */
  .extern CCP3TMR          /* 0xBF800340 */
  .extern CCP3TMRCLR       /* 0xBF800344 */
  .extern CCP3TMRSET       /* 0xBF800348 */
  .extern CCP3TMRINV       /* 0xBF80034C */
  .extern CCP3PR           /* 0xBF800350 */
  .extern CCP3PRCLR        /* 0xBF800354 */
  .extern CCP3PRSET        /* 0xBF800358 */
  .extern CCP3PRINV        /* 0xBF80035C */
  .extern CCP3RA           /* 0xBF800360 */
  .extern CCP3RACLR        /* 0xBF800364 */
  .extern CCP3RASET        /* 0xBF800368 */
  .extern CCP3RAINV        /* 0xBF80036C */
  .extern CCP3RB           /* 0xBF800370 */
  .extern CCP3RBCLR        /* 0xBF800374 */
  .extern CCP3RBSET        /* 0xBF800378 */
  .extern CCP3RBINV        /* 0xBF80037C */
  .extern CCP3BUF          /* 0xBF800380 */
  .extern CCP3BUFCLR       /* 0xBF800384 */
  .extern CCP3BUFSET       /* 0xBF800388 */
  .extern CCP3BUFINV       /* 0xBF80038C */
  .extern CCP4CON1         /* 0xBF800400 */
  .extern CCP4CON1CLR      /* 0xBF800404 */
  .extern CCP4CON1SET      /* 0xBF800408 */
  .extern CCP4CON1INV      /* 0xBF80040C */
  .extern CCP4CON2         /* 0xBF800410 */
  .extern CCP4CON2CLR      /* 0xBF800414 */
  .extern CCP4CON2SET      /* 0xBF800418 */
  .extern CCP4CON2INV      /* 0xBF80041C */
  .extern CCP4CON3         /* 0xBF800420 */
  .extern CCP4CON3CLR      /* 0xBF800424 */
  .extern CCP4CON3SET      /* 0xBF800428 */
  .extern CCP4CON3INV      /* 0xBF80042C */
  .extern CCP4STAT         /* 0xBF800430 */
  .extern CCP4STATCLR      /* 0xBF800434 */
  .extern CCP4STATSET      /* 0xBF800438 */
  .extern CCP4STATINV      /* 0xBF80043C */
  .extern CCP4TMR          /* 0xBF800440 */
  .extern CCP4TMRCLR       /* 0xBF800444 */
  .extern CCP4TMRSET       /* 0xBF800448 */
  .extern CCP4TMRINV       /* 0xBF80044C */
  .extern CCP4PR           /* 0xBF800450 */
  .extern CCP4PRCLR        /* 0xBF800454 */
  .extern CCP4PRSET        /* 0xBF800458 */
  .extern CCP4PRINV        /* 0xBF80045C */
  .extern CCP4RA           /* 0xBF800460 */
  .extern CCP4RACLR        /* 0xBF800464 */
  .extern CCP4RASET        /* 0xBF800468 */
  .extern CCP4RAINV        /* 0xBF80046C */
  .extern CCP4RB           /* 0xBF800470 */
  .extern CCP4RBCLR        /* 0xBF800474 */
  .extern CCP4RBSET        /* 0xBF800478 */
  .extern CCP4RBINV        /* 0xBF80047C */
  .extern CCP4BUF          /* 0xBF800480 */
  .extern CCP4BUFCLR       /* 0xBF800484 */
  .extern CCP4BUFSET       /* 0xBF800488 */
  .extern CCP4BUFINV       /* 0xBF80048C */
  .extern CCP5CON1         /* 0xBF800500 */
  .extern CCP5CON1CLR      /* 0xBF800504 */
  .extern CCP5CON1SET      /* 0xBF800508 */
  .extern CCP5CON1INV      /* 0xBF80050C */
  .extern CCP5CON2         /* 0xBF800510 */
  .extern CCP5CON2CLR      /* 0xBF800514 */
  .extern CCP5CON2SET      /* 0xBF800518 */
  .extern CCP5CON2INV      /* 0xBF80051C */
  .extern CCP5CON3         /* 0xBF800520 */
  .extern CCP5CON3CLR      /* 0xBF800524 */
  .extern CCP5CON3SET      /* 0xBF800528 */
  .extern CCP5CON3INV      /* 0xBF80052C */
  .extern CCP5STAT         /* 0xBF800530 */
  .extern CCP5STATCLR      /* 0xBF800534 */
  .extern CCP5STATSET      /* 0xBF800538 */
  .extern CCP5STATINV      /* 0xBF80053C */
  .extern CCP5TMR          /* 0xBF800540 */
  .extern CCP5TMRCLR       /* 0xBF800544 */
  .extern CCP5TMRSET       /* 0xBF800548 */
  .extern CCP5TMRINV       /* 0xBF80054C */
  .extern CCP5PR           /* 0xBF800550 */
  .extern CCP5PRCLR        /* 0xBF800554 */
  .extern CCP5PRSET        /* 0xBF800558 */
  .extern CCP5PRINV        /* 0xBF80055C */
  .extern CCP5RA           /* 0xBF800560 */
  .extern CCP5RACLR        /* 0xBF800564 */
  .extern CCP5RASET        /* 0xBF800568 */
  .extern CCP5RAINV        /* 0xBF80056C */
  .extern CCP5RB           /* 0xBF800570 */
  .extern CCP5RBCLR        /* 0xBF800574 */
  .extern CCP5RBSET        /* 0xBF800578 */
  .extern CCP5RBINV        /* 0xBF80057C */
  .extern CCP5BUF          /* 0xBF800580 */
  .extern CCP5BUFCLR       /* 0xBF800584 */
  .extern CCP5BUFSET       /* 0xBF800588 */
  .extern CCP5BUFINV       /* 0xBF80058C */
  .extern CCP6CON1         /* 0xBF800600 */
  .extern CCP6CON1CLR      /* 0xBF800604 */
  .extern CCP6CON1SET      /* 0xBF800608 */
  .extern CCP6CON1INV      /* 0xBF80060C */
  .extern CCP6CON2         /* 0xBF800610 */
  .extern CCP6CON2CLR      /* 0xBF800614 */
  .extern CCP6CON2SET      /* 0xBF800618 */
  .extern CCP6CON2INV      /* 0xBF80061C */
  .extern CCP6CON3         /* 0xBF800620 */
  .extern CCP6CON3CLR      /* 0xBF800624 */
  .extern CCP6CON3SET      /* 0xBF800628 */
  .extern CCP6CON3INV      /* 0xBF80062C */
  .extern CCP6STAT         /* 0xBF800630 */
  .extern CCP6STATCLR      /* 0xBF800634 */
  .extern CCP6STATSET      /* 0xBF800638 */
  .extern CCP6STATINV      /* 0xBF80063C */
  .extern CCP6TMR          /* 0xBF800640 */
  .extern CCP6TMRCLR       /* 0xBF800644 */
  .extern CCP6TMRSET       /* 0xBF800648 */
  .extern CCP6TMRINV       /* 0xBF80064C */
  .extern CCP6PR           /* 0xBF800650 */
  .extern CCP6PRCLR        /* 0xBF800654 */
  .extern CCP6PRSET        /* 0xBF800658 */
  .extern CCP6PRINV        /* 0xBF80065C */
  .extern CCP6RA           /* 0xBF800660 */
  .extern CCP6RACLR        /* 0xBF800664 */
  .extern CCP6RASET        /* 0xBF800668 */
  .extern CCP6RAINV        /* 0xBF80066C */
  .extern CCP6RB           /* 0xBF800670 */
  .extern CCP6RBCLR        /* 0xBF800674 */
  .extern CCP6RBSET        /* 0xBF800678 */
  .extern CCP6RBINV        /* 0xBF80067C */
  .extern CCP6BUF          /* 0xBF800680 */
  .extern CCP6BUFCLR       /* 0xBF800684 */
  .extern CCP6BUFSET       /* 0xBF800688 */
  .extern CCP6BUFINV       /* 0xBF80068C */
  .extern CCP7CON1         /* 0xBF800700 */
  .extern CCP7CON1CLR      /* 0xBF800704 */
  .extern CCP7CON1SET      /* 0xBF800708 */
  .extern CCP7CON1INV      /* 0xBF80070C */
  .extern CCP7CON2         /* 0xBF800710 */
  .extern CCP7CON2CLR      /* 0xBF800714 */
  .extern CCP7CON2SET      /* 0xBF800718 */
  .extern CCP7CON2INV      /* 0xBF80071C */
  .extern CCP7CON3         /* 0xBF800720 */
  .extern CCP7CON3CLR      /* 0xBF800724 */
  .extern CCP7CON3SET      /* 0xBF800728 */
  .extern CCP7CON3INV      /* 0xBF80072C */
  .extern CCP7STAT         /* 0xBF800730 */
  .extern CCP7STATCLR      /* 0xBF800734 */
  .extern CCP7STATSET      /* 0xBF800738 */
  .extern CCP7STATINV      /* 0xBF80073C */
  .extern CCP7TMR          /* 0xBF800740 */
  .extern CCP7TMRCLR       /* 0xBF800744 */
  .extern CCP7TMRSET       /* 0xBF800748 */
  .extern CCP7TMRINV       /* 0xBF80074C */
  .extern CCP7PR           /* 0xBF800750 */
  .extern CCP7PRCLR        /* 0xBF800754 */
  .extern CCP7PRSET        /* 0xBF800758 */
  .extern CCP7PRINV        /* 0xBF80075C */
  .extern CCP7RA           /* 0xBF800760 */
  .extern CCP7RACLR        /* 0xBF800764 */
  .extern CCP7RASET        /* 0xBF800768 */
  .extern CCP7RAINV        /* 0xBF80076C */
  .extern CCP7RB           /* 0xBF800770 */
  .extern CCP7RBCLR        /* 0xBF800774 */
  .extern CCP7RBSET        /* 0xBF800778 */
  .extern CCP7RBINV        /* 0xBF80077C */
  .extern CCP7BUF          /* 0xBF800780 */
  .extern CCP7BUFCLR       /* 0xBF800784 */
  .extern CCP7BUFSET       /* 0xBF800788 */
  .extern CCP7BUFINV       /* 0xBF80078C */
  .extern CCP8CON1         /* 0xBF800800 */
  .extern CCP8CON1CLR      /* 0xBF800804 */
  .extern CCP8CON1SET      /* 0xBF800808 */
  .extern CCP8CON1INV      /* 0xBF80080C */
  .extern CCP8CON2         /* 0xBF800810 */
  .extern CCP8CON2CLR      /* 0xBF800814 */
  .extern CCP8CON2SET      /* 0xBF800818 */
  .extern CCP8CON2INV      /* 0xBF80081C */
  .extern CCP8CON3         /* 0xBF800820 */
  .extern CCP8CON3CLR      /* 0xBF800824 */
  .extern CCP8CON3SET      /* 0xBF800828 */
  .extern CCP8CON3INV      /* 0xBF80082C */
  .extern CCP8STAT         /* 0xBF800830 */
  .extern CCP8STATCLR      /* 0xBF800834 */
  .extern CCP8STATSET      /* 0xBF800838 */
  .extern CCP8STATINV      /* 0xBF80083C */
  .extern CCP8TMR          /* 0xBF800840 */
  .extern CCP8TMRCLR       /* 0xBF800844 */
  .extern CCP8TMRSET       /* 0xBF800848 */
  .extern CCP8TMRINV       /* 0xBF80084C */
  .extern CCP8PR           /* 0xBF800850 */
  .extern CCP8PRCLR        /* 0xBF800854 */
  .extern CCP8PRSET        /* 0xBF800858 */
  .extern CCP8PRINV        /* 0xBF80085C */
  .extern CCP8RA           /* 0xBF800860 */
  .extern CCP8RACLR        /* 0xBF800864 */
  .extern CCP8RASET        /* 0xBF800868 */
  .extern CCP8RAINV        /* 0xBF80086C */
  .extern CCP8RB           /* 0xBF800870 */
  .extern CCP8RBCLR        /* 0xBF800874 */
  .extern CCP8RBSET        /* 0xBF800878 */
  .extern CCP8RBINV        /* 0xBF80087C */
  .extern CCP8BUF          /* 0xBF800880 */
  .extern CCP8BUFCLR       /* 0xBF800884 */
  .extern CCP8BUFSET       /* 0xBF800888 */
  .extern CCP8BUFINV       /* 0xBF80088C */
  .extern CCP9CON1         /* 0xBF800900 */
  .extern CCP9CON1CLR      /* 0xBF800904 */
  .extern CCP9CON1SET      /* 0xBF800908 */
  .extern CCP9CON1INV      /* 0xBF80090C */
  .extern CCP9CON2         /* 0xBF800910 */
  .extern CCP9CON2CLR      /* 0xBF800914 */
  .extern CCP9CON2SET      /* 0xBF800918 */
  .extern CCP9CON2INV      /* 0xBF80091C */
  .extern CCP9CON3         /* 0xBF800920 */
  .extern CCP9CON3CLR      /* 0xBF800924 */
  .extern CCP9CON3SET      /* 0xBF800928 */
  .extern CCP9CON3INV      /* 0xBF80092C */
  .extern CCP9STAT         /* 0xBF800930 */
  .extern CCP9STATCLR      /* 0xBF800934 */
  .extern CCP9STATSET      /* 0xBF800938 */
  .extern CCP9STATINV      /* 0xBF80093C */
  .extern CCP9TMR          /* 0xBF800940 */
  .extern CCP9TMRCLR       /* 0xBF800944 */
  .extern CCP9TMRSET       /* 0xBF800948 */
  .extern CCP9TMRINV       /* 0xBF80094C */
  .extern CCP9PR           /* 0xBF800950 */
  .extern CCP9PRCLR        /* 0xBF800954 */
  .extern CCP9PRSET        /* 0xBF800958 */
  .extern CCP9PRINV        /* 0xBF80095C */
  .extern CCP9RA           /* 0xBF800960 */
  .extern CCP9RACLR        /* 0xBF800964 */
  .extern CCP9RASET        /* 0xBF800968 */
  .extern CCP9RAINV        /* 0xBF80096C */
  .extern CCP9RB           /* 0xBF800970 */
  .extern CCP9RBCLR        /* 0xBF800974 */
  .extern CCP9RBSET        /* 0xBF800978 */
  .extern CCP9RBINV        /* 0xBF80097C */
  .extern CCP9BUF          /* 0xBF800980 */
  .extern CCP9BUFCLR       /* 0xBF800984 */
  .extern CCP9BUFSET       /* 0xBF800988 */
  .extern CCP9BUFINV       /* 0xBF80098C */
  .extern I2C1CON          /* 0xBF801500 */
  .extern I2C1CONCLR       /* 0xBF801504 */
  .extern I2C1CONSET       /* 0xBF801508 */
  .extern I2C1CONINV       /* 0xBF80150C */
  .extern I2C1STAT         /* 0xBF801510 */
  .extern I2C1STATCLR      /* 0xBF801514 */
  .extern I2C1STATSET      /* 0xBF801518 */
  .extern I2C1STATINV      /* 0xBF80151C */
  .extern I2C1ADD          /* 0xBF801520 */
  .extern I2C1ADDCLR       /* 0xBF801524 */
  .extern I2C1ADDSET       /* 0xBF801528 */
  .extern I2C1ADDINV       /* 0xBF80152C */
  .extern I2C1MSK          /* 0xBF801530 */
  .extern I2C1MSKCLR       /* 0xBF801534 */
  .extern I2C1MSKSET       /* 0xBF801538 */
  .extern I2C1MSKINV       /* 0xBF80153C */
  .extern I2C1BRG          /* 0xBF801540 */
  .extern I2C1BRGCLR       /* 0xBF801544 */
  .extern I2C1BRGSET       /* 0xBF801548 */
  .extern I2C1BRGINV       /* 0xBF80154C */
  .extern I2C1TRN          /* 0xBF801550 */
  .extern I2C1TRNCLR       /* 0xBF801554 */
  .extern I2C1TRNSET       /* 0xBF801558 */
  .extern I2C1TRNINV       /* 0xBF80155C */
  .extern I2C1RCV          /* 0xBF801560 */
  .extern I2C1RCVCLR       /* 0xBF801564 */
  .extern I2C1RCVSET       /* 0xBF801568 */
  .extern I2C1RCVINV       /* 0xBF80156C */
  .extern I2C2CON          /* 0xBF801600 */
  .extern I2C2CONCLR       /* 0xBF801604 */
  .extern I2C2CONSET       /* 0xBF801608 */
  .extern I2C2CONINV       /* 0xBF80160C */
  .extern I2C2STAT         /* 0xBF801610 */
  .extern I2C2STATCLR      /* 0xBF801614 */
  .extern I2C2STATSET      /* 0xBF801618 */
  .extern I2C2STATINV      /* 0xBF80161C */
  .extern I2C2ADD          /* 0xBF801620 */
  .extern I2C2ADDCLR       /* 0xBF801624 */
  .extern I2C2ADDSET       /* 0xBF801628 */
  .extern I2C2ADDINV       /* 0xBF80162C */
  .extern I2C2MSK          /* 0xBF801630 */
  .extern I2C2MSKCLR       /* 0xBF801634 */
  .extern I2C2MSKSET       /* 0xBF801638 */
  .extern I2C2MSKINV       /* 0xBF80163C */
  .extern I2C2BRG          /* 0xBF801640 */
  .extern I2C2BRGCLR       /* 0xBF801644 */
  .extern I2C2BRGSET       /* 0xBF801648 */
  .extern I2C2BRGINV       /* 0xBF80164C */
  .extern I2C2TRN          /* 0xBF801650 */
  .extern I2C2TRNCLR       /* 0xBF801654 */
  .extern I2C2TRNSET       /* 0xBF801658 */
  .extern I2C2TRNINV       /* 0xBF80165C */
  .extern I2C2RCV          /* 0xBF801660 */
  .extern I2C2RCVCLR       /* 0xBF801664 */
  .extern I2C2RCVSET       /* 0xBF801668 */
  .extern I2C2RCVINV       /* 0xBF80166C */
  .extern I2C3CON          /* 0xBF801700 */
  .extern I2C3CONCLR       /* 0xBF801704 */
  .extern I2C3CONSET       /* 0xBF801708 */
  .extern I2C3CONINV       /* 0xBF80170C */
  .extern I2C3STAT         /* 0xBF801710 */
  .extern I2C3STATCLR      /* 0xBF801714 */
  .extern I2C3STATSET      /* 0xBF801718 */
  .extern I2C3STATINV      /* 0xBF80171C */
  .extern I2C3ADD          /* 0xBF801720 */
  .extern I2C3ADDCLR       /* 0xBF801724 */
  .extern I2C3ADDSET       /* 0xBF801728 */
  .extern I2C3ADDINV       /* 0xBF80172C */
  .extern I2C3MSK          /* 0xBF801730 */
  .extern I2C3MSKCLR       /* 0xBF801734 */
  .extern I2C3MSKSET       /* 0xBF801738 */
  .extern I2C3MSKINV       /* 0xBF80173C */
  .extern I2C3BRG          /* 0xBF801740 */
  .extern I2C3BRGCLR       /* 0xBF801744 */
  .extern I2C3BRGSET       /* 0xBF801748 */
  .extern I2C3BRGINV       /* 0xBF80174C */
  .extern I2C3TRN          /* 0xBF801750 */
  .extern I2C3TRNCLR       /* 0xBF801754 */
  .extern I2C3TRNSET       /* 0xBF801758 */
  .extern I2C3TRNINV       /* 0xBF80175C */
  .extern I2C3RCV          /* 0xBF801760 */
  .extern I2C3RCVCLR       /* 0xBF801764 */
  .extern I2C3RCVSET       /* 0xBF801768 */
  .extern I2C3RCVINV       /* 0xBF80176C */
  .extern U1MODE           /* 0xBF801800 */
  .extern U1MODECLR        /* 0xBF801804 */
  .extern U1MODESET        /* 0xBF801808 */
  .extern U1MODEINV        /* 0xBF80180C */
  .extern U1STA            /* 0xBF801810 */
  .extern U1STACLR         /* 0xBF801814 */
  .extern U1STASET         /* 0xBF801818 */
  .extern U1STAINV         /* 0xBF80181C */
  .extern U1TXREG          /* 0xBF801820 */
  .extern U1RXREG          /* 0xBF801830 */
  .extern U1BRG            /* 0xBF801840 */
  .extern U1BRGCLR         /* 0xBF801844 */
  .extern U1BRGSET         /* 0xBF801848 */
  .extern U1BRGINV         /* 0xBF80184C */
  .extern U2MODE           /* 0xBF801900 */
  .extern U2MODECLR        /* 0xBF801904 */
  .extern U2MODESET        /* 0xBF801908 */
  .extern U2MODEINV        /* 0xBF80190C */
  .extern U2STA            /* 0xBF801910 */
  .extern U2STACLR         /* 0xBF801914 */
  .extern U2STASET         /* 0xBF801918 */
  .extern U2STAINV         /* 0xBF80191C */
  .extern U2TXREG          /* 0xBF801920 */
  .extern U2RXREG          /* 0xBF801930 */
  .extern U2BRG            /* 0xBF801940 */
  .extern U2BRGCLR         /* 0xBF801944 */
  .extern U2BRGSET         /* 0xBF801948 */
  .extern U2BRGINV         /* 0xBF80194C */
  .extern U3MODE           /* 0xBF802000 */
  .extern U3MODECLR        /* 0xBF802004 */
  .extern U3MODESET        /* 0xBF802008 */
  .extern U3MODEINV        /* 0xBF80200C */
  .extern U3STA            /* 0xBF802010 */
  .extern U3STACLR         /* 0xBF802014 */
  .extern U3STASET         /* 0xBF802018 */
  .extern U3STAINV         /* 0xBF80201C */
  .extern U3TXREG          /* 0xBF802020 */
  .extern U3RXREG          /* 0xBF802030 */
  .extern U3BRG            /* 0xBF802040 */
  .extern U3BRGCLR         /* 0xBF802044 */
  .extern U3BRGSET         /* 0xBF802048 */
  .extern U3BRGINV         /* 0xBF80204C */
  .extern ADC1BUF0         /* 0xBF802100 */
  .extern ADC1BUF0CLR      /* 0xBF802104 */
  .extern ADC1BUF0SET      /* 0xBF802108 */
  .extern ADC1BUF0INV      /* 0xBF80210C */
  .extern ADC1BUF1         /* 0xBF802110 */
  .extern ADC1BUF1CLR      /* 0xBF802114 */
  .extern ADC1BUF1SET      /* 0xBF802118 */
  .extern ADC1BUF1INV      /* 0xBF80211C */
  .extern ADC1BUF2         /* 0xBF802120 */
  .extern ADC1BUF2CLR      /* 0xBF802124 */
  .extern ADC1BUF2SET      /* 0xBF802128 */
  .extern ADC1BUF2INV      /* 0xBF80212C */
  .extern ADC1BUF3         /* 0xBF802130 */
  .extern ADC1BUF3CLR      /* 0xBF802134 */
  .extern ADC1BUF3SET      /* 0xBF802138 */
  .extern ADC1BUF3INV      /* 0xBF80213C */
  .extern ADC1BUF4         /* 0xBF802140 */
  .extern ADC1BUF4CLR      /* 0xBF802144 */
  .extern ADC1BUF4SET      /* 0xBF802148 */
  .extern ADC1BUF4INV      /* 0xBF80214C */
  .extern ADC1BUF5         /* 0xBF802150 */
  .extern ADC1BUF5CLR      /* 0xBF802154 */
  .extern ADC1BUF5SET      /* 0xBF802158 */
  .extern ADC1BUF5INV      /* 0xBF80215C */
  .extern ADC1BUF6         /* 0xBF802160 */
  .extern ADC1BUF6CLR      /* 0xBF802164 */
  .extern ADC1BUF6SET      /* 0xBF802168 */
  .extern ADC1BUF6INV      /* 0xBF80216C */
  .extern ADC1BUF7         /* 0xBF802170 */
  .extern ADC1BUF7CLR      /* 0xBF802174 */
  .extern ADC1BUF7SET      /* 0xBF802178 */
  .extern ADC1BUF7INV      /* 0xBF80217C */
  .extern ADC1BUF8         /* 0xBF802180 */
  .extern ADC1BUF8CLR      /* 0xBF802184 */
  .extern ADC1BUF8SET      /* 0xBF802188 */
  .extern ADC1BUF8INV      /* 0xBF80218C */
  .extern ADC1BUF9         /* 0xBF802190 */
  .extern ADC1BUF9CLR      /* 0xBF802194 */
  .extern ADC1BUF9SET      /* 0xBF802198 */
  .extern ADC1BUF9INV      /* 0xBF80219C */
  .extern ADC1BUF10        /* 0xBF8021A0 */
  .extern ADC1BUF10CLR     /* 0xBF8021A4 */
  .extern ADC1BUF10SET     /* 0xBF8021A8 */
  .extern ADC1BUF10INV     /* 0xBF8021AC */
  .extern ADC1BUF11        /* 0xBF8021B0 */
  .extern ADC1BUF11CLR     /* 0xBF8021B4 */
  .extern ADC1BUF11SET     /* 0xBF8021B8 */
  .extern ADC1BUF11INV     /* 0xBF8021BC */
  .extern ADC1BUF12        /* 0xBF8021C0 */
  .extern ADC1BUF12CLR     /* 0xBF8021C4 */
  .extern ADC1BUF12SET     /* 0xBF8021C8 */
  .extern ADC1BUF12INV     /* 0xBF8021CC */
  .extern ADC1BUF13        /* 0xBF8021D0 */
  .extern ADC1BUF13CLR     /* 0xBF8021D4 */
  .extern ADC1BUF13SET     /* 0xBF8021D8 */
  .extern ADC1BUF13INV     /* 0xBF8021DC */
  .extern ADC1BUF14        /* 0xBF8021E0 */
  .extern ADC1BUF14CLR     /* 0xBF8021E4 */
  .extern ADC1BUF14SET     /* 0xBF8021E8 */
  .extern ADC1BUF14INV     /* 0xBF8021EC */
  .extern ADC1BUF15        /* 0xBF8021F0 */
  .extern ADC1BUF15CLR     /* 0xBF8021F4 */
  .extern ADC1BUF15SET     /* 0xBF8021F8 */
  .extern ADC1BUF15INV     /* 0xBF8021FC */
  .extern ADC1BUF16        /* 0xBF802200 */
  .extern ADC1BUF16CLR     /* 0xBF802204 */
  .extern ADC1BUF16SET     /* 0xBF802208 */
  .extern ADC1BUF16INV     /* 0xBF80220C */
  .extern ADC1BUF17        /* 0xBF802210 */
  .extern ADC1BUF17CLR     /* 0xBF802214 */
  .extern ADC1BUF17SET     /* 0xBF802218 */
  .extern ADC1BUF17INV     /* 0xBF80221C */
  .extern ADC1BUF18        /* 0xBF802220 */
  .extern ADC1BUF18CLR     /* 0xBF802224 */
  .extern ADC1BUF18SET     /* 0xBF802228 */
  .extern ADC1BUF18INV     /* 0xBF80222C */
  .extern ADC1BUF19        /* 0xBF802230 */
  .extern ADC1BUF19CLR     /* 0xBF802234 */
  .extern ADC1BUF19SET     /* 0xBF802238 */
  .extern ADC1BUF19INV     /* 0xBF80223C */
  .extern ADC1BUF20        /* 0xBF802240 */
  .extern ADC1BUF20CLR     /* 0xBF802244 */
  .extern ADC1BUF20SET     /* 0xBF802248 */
  .extern ADC1BUF20INV     /* 0xBF80224C */
  .extern ADC1BUF21        /* 0xBF802250 */
  .extern ADC1BUF21CLR     /* 0xBF802254 */
  .extern ADC1BUF21SET     /* 0xBF802258 */
  .extern ADC1BUF21INV     /* 0xBF80225C */
  .extern AD1CON1          /* 0xBF802260 */
  .extern AD1CON1CLR       /* 0xBF802264 */
  .extern AD1CON1SET       /* 0xBF802268 */
  .extern AD1CON1INV       /* 0xBF80226C */
  .extern AD1CON2          /* 0xBF802270 */
  .extern AD1CON2CLR       /* 0xBF802274 */
  .extern AD1CON2SET       /* 0xBF802278 */
  .extern AD1CON2INV       /* 0xBF80227C */
  .extern AD1CON3          /* 0xBF802280 */
  .extern AD1CON3CLR       /* 0xBF802284 */
  .extern AD1CON3SET       /* 0xBF802288 */
  .extern AD1CON3INV       /* 0xBF80228C */
  .extern AD1CHS           /* 0xBF802290 */
  .extern AD1CHSCLR        /* 0xBF802294 */
  .extern AD1CHSSET        /* 0xBF802298 */
  .extern AD1CHSINV        /* 0xBF80229C */
  .extern AD1CSS           /* 0xBF8022A0 */
  .extern AD1CSSCLR        /* 0xBF8022A4 */
  .extern AD1CSSSET        /* 0xBF8022A8 */
  .extern AD1CSSINV        /* 0xBF8022AC */
  .extern AD1CON5          /* 0xBF8022C0 */
  .extern AD1CON5CLR       /* 0xBF8022C4 */
  .extern AD1CON5SET       /* 0xBF8022C8 */
  .extern AD1CON5INV       /* 0xBF8022CC */
  .extern AD1CHIT          /* 0xBF8022D0 */
  .extern AD1CHITCLR       /* 0xBF8022D4 */
  .extern AD1CHITSET       /* 0xBF8022D8 */
  .extern AD1CHITINV       /* 0xBF8022DC */
  .extern CMSTAT           /* 0xBF802300 */
  .extern CMSTATCLR        /* 0xBF802304 */
  .extern CMSTATSET        /* 0xBF802308 */
  .extern CMSTATINV        /* 0xBF80230C */
  .extern CM1CON           /* 0xBF802310 */
  .extern CM1CONCLR        /* 0xBF802314 */
  .extern CM1CONSET        /* 0xBF802318 */
  .extern CM1CONINV        /* 0xBF80231C */
  .extern CM2CON           /* 0xBF802330 */
  .extern CM2CONCLR        /* 0xBF802334 */
  .extern CM2CONSET        /* 0xBF802338 */
  .extern CM2CONINV        /* 0xBF80233C */
  .extern CM3CON           /* 0xBF802350 */
  .extern CM3CONCLR        /* 0xBF802354 */
  .extern CM3CONSET        /* 0xBF802358 */
  .extern CM3CONINV        /* 0xBF80235C */
  .extern DAC1CON          /* 0xBF802380 */
  .extern DAC1CONCLR       /* 0xBF802384 */
  .extern DAC1CONSET       /* 0xBF802388 */
  .extern DAC1CONINV       /* 0xBF80238C */
  .extern CLC1CON          /* 0xBF802480 */
  .extern CLC1CONCLR       /* 0xBF802484 */
  .extern CLC1CONSET       /* 0xBF802488 */
  .extern CLC1CONINV       /* 0xBF80248C */
  .extern CLC1SEL          /* 0xBF802490 */
  .extern CLC1SELCLR       /* 0xBF802494 */
  .extern CLC1SELSET       /* 0xBF802498 */
  .extern CLC1SELINV       /* 0xBF80249C */
  .extern CLC1GLS          /* 0xBF8024A0 */
  .extern CLC1GLSCLR       /* 0xBF8024A4 */
  .extern CLC1GLSSET       /* 0xBF8024A8 */
  .extern CLC1GLSINV       /* 0xBF8024AC */
  .extern CLC2CON          /* 0xBF802500 */
  .extern CLC2CONCLR       /* 0xBF802504 */
  .extern CLC2CONSET       /* 0xBF802508 */
  .extern CLC2CONINV       /* 0xBF80250C */
  .extern CLC2SEL          /* 0xBF802510 */
  .extern CLC2SELCLR       /* 0xBF802514 */
  .extern CLC2SELSET       /* 0xBF802518 */
  .extern CLC2SELINV       /* 0xBF80251C */
  .extern CLC2GLS          /* 0xBF802520 */
  .extern CLC2GLSCLR       /* 0xBF802524 */
  .extern CLC2GLSSET       /* 0xBF802528 */
  .extern CLC2GLSINV       /* 0xBF80252C */
  .extern CLC3CON          /* 0xBF802580 */
  .extern CLC3CONCLR       /* 0xBF802584 */
  .extern CLC3CONSET       /* 0xBF802588 */
  .extern CLC3CONINV       /* 0xBF80258C */
  .extern CLC3SEL          /* 0xBF802590 */
  .extern CLC3SELCLR       /* 0xBF802594 */
  .extern CLC3SELSET       /* 0xBF802598 */
  .extern CLC3SELINV       /* 0xBF80259C */
  .extern CLC3GLS          /* 0xBF8025A0 */
  .extern CLC3GLSCLR       /* 0xBF8025A4 */
  .extern CLC3GLSSET       /* 0xBF8025A8 */
  .extern CLC3GLSINV       /* 0xBF8025AC */
  .extern CLC4CON          /* 0xBF802600 */
  .extern CLC4CONCLR       /* 0xBF802604 */
  .extern CLC4CONSET       /* 0xBF802608 */
  .extern CLC4CONINV       /* 0xBF80260C */
  .extern CLC4SEL          /* 0xBF802610 */
  .extern CLC4SELCLR       /* 0xBF802614 */
  .extern CLC4SELSET       /* 0xBF802618 */
  .extern CLC4SELINV       /* 0xBF80261C */
  .extern CLC4GLS          /* 0xBF802620 */
  .extern CLC4GLSCLR       /* 0xBF802624 */
  .extern CLC4GLSSET       /* 0xBF802628 */
  .extern CLC4GLSINV       /* 0xBF80262C */
  .extern OSCCON           /* 0xBF802680 */
  .extern OSCCONCLR        /* 0xBF802684 */
  .extern OSCCONSET        /* 0xBF802688 */
  .extern OSCCONINV        /* 0xBF80268C */
  .extern SPLLCON          /* 0xBF8026A0 */
  .extern SPLLCONCLR       /* 0xBF8026A4 */
  .extern SPLLCONSET       /* 0xBF8026A8 */
  .extern SPLLCONINV       /* 0xBF8026AC */
  .extern RCON             /* 0xBF8026E0 */
  .extern RCONCLR          /* 0xBF8026E4 */
  .extern RCONSET          /* 0xBF8026E8 */
  .extern RCONINV          /* 0xBF8026EC */
  .extern RSWRST           /* 0xBF8026F0 */
  .extern RSWRSTCLR        /* 0xBF8026F4 */
  .extern RSWRSTSET        /* 0xBF8026F8 */
  .extern RSWRSTINV        /* 0xBF8026FC */
  .extern RNMICON          /* 0xBF802700 */
  .extern RNMICONCLR       /* 0xBF802704 */
  .extern RNMICONSET       /* 0xBF802708 */
  .extern RNMICONINV       /* 0xBF80270C */
  .extern PWRCON           /* 0xBF802710 */
  .extern PWRCONCLR        /* 0xBF802714 */
  .extern PWRCONSET        /* 0xBF802718 */
  .extern PWRCONINV        /* 0xBF80271C */
  .extern REFO1CON         /* 0xBF802720 */
  .extern REFO1CONCLR      /* 0xBF802724 */
  .extern REFO1CONSET      /* 0xBF802728 */
  .extern REFO1CONINV      /* 0xBF80272C */
  .extern REFO1TRIM        /* 0xBF802730 */
  .extern REFO1TRIMCLR     /* 0xBF802734 */
  .extern REFO1TRIMSET     /* 0xBF802738 */
  .extern REFO1TRIMINV     /* 0xBF80273C */
  .extern CLKSTAT          /* 0xBF802770 */
  .extern CLKSTATCLR       /* 0xBF802774 */
  .extern CLKSTATSET       /* 0xBF802778 */
  .extern CLKSTATINV       /* 0xBF80277C */
  .extern OSCTUN           /* 0xBF802880 */
  .extern OSCTUNCLR        /* 0xBF802884 */
  .extern OSCTUNSET        /* 0xBF802888 */
  .extern OSCTUNINV        /* 0xBF80288C */
  .extern ANCFG            /* 0xBF802910 */
  .extern ANCFGCLR         /* 0xBF802914 */
  .extern ANCFGSET         /* 0xBF802918 */
  .extern ANCFGINV         /* 0xBF80291C */
  .extern HLVDCON          /* 0xBF802920 */
  .extern HLVDCONCLR       /* 0xBF802924 */
  .extern HLVDCONSET       /* 0xBF802928 */
  .extern HLVDCONINV       /* 0xBF80292C */
  .extern NVMCON           /* 0xBF802930 */
  .extern NVMCONCLR        /* 0xBF802934 */
  .extern NVMCONSET        /* 0xBF802938 */
  .extern NVMCONINV        /* 0xBF80293C */
  .extern NVMKEY           /* 0xBF802940 */
  .extern NVMKEYCLR        /* 0xBF802944 */
  .extern NVMKEYSET        /* 0xBF802948 */
  .extern NVMKEYINV        /* 0xBF80294C */
  .extern NVMADDR          /* 0xBF802950 */
  .extern NVMADDRCLR       /* 0xBF802954 */
  .extern NVMADDRSET       /* 0xBF802958 */
  .extern NVMADDRINV       /* 0xBF80295C */
  .extern NVMDATA0         /* 0xBF802960 */
  .extern NVMDATA0CLR      /* 0xBF802964 */
  .extern NVMDATA0SET      /* 0xBF802968 */
  .extern NVMDATA0INV      /* 0xBF80296C */
  .extern NVMDATA1         /* 0xBF802970 */
  .extern NVMDATA1CLR      /* 0xBF802974 */
  .extern NVMDATA1SET      /* 0xBF802978 */
  .extern NVMDATA1INV      /* 0xBF80297C */
  .extern NVMSRCADDR       /* 0xBF802980 */
  .extern NVMSRCADDRCLR    /* 0xBF802984 */
  .extern NVMSRCADDRSET    /* 0xBF802988 */
  .extern NVMSRCADDRINV    /* 0xBF80298C */
  .extern NVMPWP           /* 0xBF802990 */
  .extern NVMPWPCLR        /* 0xBF802994 */
  .extern NVMPWPSET        /* 0xBF802998 */
  .extern NVMPWPINV        /* 0xBF80299C */
  .extern NVMBWP           /* 0xBF8029A0 */
  .extern NVMBWPCLR        /* 0xBF8029A4 */
  .extern NVMBWPSET        /* 0xBF8029A8 */
  .extern NVMBWPINV        /* 0xBF8029AC */
  .extern RPCON            /* 0xBF802A00 */
  .extern RPCONCLR         /* 0xBF802A04 */
  .extern RPCONSET         /* 0xBF802A08 */
  .extern RPCONINV         /* 0xBF802A0C */
  .extern RPINR1           /* 0xBF802A20 */
  .extern RPINR1CLR        /* 0xBF802A24 */
  .extern RPINR1SET        /* 0xBF802A28 */
  .extern RPINR1INV        /* 0xBF802A2C */
  .extern RPINR2           /* 0xBF802A30 */
  .extern RPINR2CLR        /* 0xBF802A34 */
  .extern RPINR2SET        /* 0xBF802A38 */
  .extern RPINR2INV        /* 0xBF802A3C */
  .extern RPINR3           /* 0xBF802A40 */
  .extern RPINR3CLR        /* 0xBF802A44 */
  .extern RPINR3SET        /* 0xBF802A48 */
  .extern RPINR3INV        /* 0xBF802A4C */
  .extern RPINR5           /* 0xBF802A60 */
  .extern RPINR5CLR        /* 0xBF802A64 */
  .extern RPINR5SET        /* 0xBF802A68 */
  .extern RPINR5INV        /* 0xBF802A6C */
  .extern RPINR6           /* 0xBF802A70 */
  .extern RPINR6CLR        /* 0xBF802A74 */
  .extern RPINR6SET        /* 0xBF802A78 */
  .extern RPINR6INV        /* 0xBF802A7C */
  .extern RPINR7           /* 0xBF802A80 */
  .extern RPINR7CLR        /* 0xBF802A84 */
  .extern RPINR7SET        /* 0xBF802A88 */
  .extern RPINR7INV        /* 0xBF802A8C */
  .extern RPINR8           /* 0xBF802A90 */
  .extern RPINR8CLR        /* 0xBF802A94 */
  .extern RPINR8SET        /* 0xBF802A98 */
  .extern RPINR8INV        /* 0xBF802A9C */
  .extern RPINR9           /* 0xBF802AA0 */
  .extern RPINR9CLR        /* 0xBF802AA4 */
  .extern RPINR9SET        /* 0xBF802AA8 */
  .extern RPINR9INV        /* 0xBF802AAC */
  .extern RPINR10          /* 0xBF802AB0 */
  .extern RPINR10CLR       /* 0xBF802AB4 */
  .extern RPINR10SET       /* 0xBF802AB8 */
  .extern RPINR10INV       /* 0xBF802ABC */
  .extern RPINR11          /* 0xBF802AC0 */
  .extern RPINR11CLR       /* 0xBF802AC4 */
  .extern RPINR11SET       /* 0xBF802AC8 */
  .extern RPINR11INV       /* 0xBF802ACC */
  .extern RPINR12          /* 0xBF802AD0 */
  .extern RPINR12CLR       /* 0xBF802AD4 */
  .extern RPINR12SET       /* 0xBF802AD8 */
  .extern RPINR12INV       /* 0xBF802ADC */
  .extern RPOR0            /* 0xBF802B10 */
  .extern RPOR0CLR         /* 0xBF802B14 */
  .extern RPOR0SET         /* 0xBF802B18 */
  .extern RPOR0INV         /* 0xBF802B1C */
  .extern RPOR1            /* 0xBF802B20 */
  .extern RPOR1CLR         /* 0xBF802B24 */
  .extern RPOR1SET         /* 0xBF802B28 */
  .extern RPOR1INV         /* 0xBF802B2C */
  .extern RPOR2            /* 0xBF802B30 */
  .extern RPOR2CLR         /* 0xBF802B34 */
  .extern RPOR2SET         /* 0xBF802B38 */
  .extern RPOR2INV         /* 0xBF802B3C */
  .extern RPOR3            /* 0xBF802B40 */
  .extern RPOR3CLR         /* 0xBF802B44 */
  .extern RPOR3SET         /* 0xBF802B48 */
  .extern RPOR3INV         /* 0xBF802B4C */
  .extern RPOR4            /* 0xBF802B50 */
  .extern RPOR4CLR         /* 0xBF802B54 */
  .extern RPOR4SET         /* 0xBF802B58 */
  .extern RPOR4INV         /* 0xBF802B5C */
  .extern RPOR5            /* 0xBF802B60 */
  .extern RPOR5CLR         /* 0xBF802B64 */
  .extern RPOR5SET         /* 0xBF802B68 */
  .extern RPOR5INV         /* 0xBF802B6C */
  .extern ANSELA           /* 0xBF802BB0 */
  .extern ANSELACLR        /* 0xBF802BB4 */
  .extern ANSELASET        /* 0xBF802BB8 */
  .extern ANSELAINV        /* 0xBF802BBC */
  .extern TRISA            /* 0xBF802BC0 */
  .extern TRISACLR         /* 0xBF802BC4 */
  .extern TRISASET         /* 0xBF802BC8 */
  .extern TRISAINV         /* 0xBF802BCC */
  .extern PORTA            /* 0xBF802BD0 */
  .extern PORTACLR         /* 0xBF802BD4 */
  .extern PORTASET         /* 0xBF802BD8 */
  .extern PORTAINV         /* 0xBF802BDC */
  .extern LATA             /* 0xBF802BE0 */
  .extern LATACLR          /* 0xBF802BE4 */
  .extern LATASET          /* 0xBF802BE8 */
  .extern LATAINV          /* 0xBF802BEC */
  .extern ODCA             /* 0xBF802BF0 */
  .extern ODCACLR          /* 0xBF802BF4 */
  .extern ODCASET          /* 0xBF802BF8 */
  .extern ODCAINV          /* 0xBF802BFC */
  .extern CNPUA            /* 0xBF802C00 */
  .extern CNPUACLR         /* 0xBF802C04 */
  .extern CNPUASET         /* 0xBF802C08 */
  .extern CNPUAINV         /* 0xBF802C0C */
  .extern CNPDA            /* 0xBF802C10 */
  .extern CNPDACLR         /* 0xBF802C14 */
  .extern CNPDASET         /* 0xBF802C18 */
  .extern CNPDAINV         /* 0xBF802C1C */
  .extern CNCONA           /* 0xBF802C20 */
  .extern CNCONACLR        /* 0xBF802C24 */
  .extern CNCONASET        /* 0xBF802C28 */
  .extern CNCONAINV        /* 0xBF802C2C */
  .extern CNEN0A           /* 0xBF802C30 */
  .extern CNEN0ACLR        /* 0xBF802C34 */
  .extern CNEN0ASET        /* 0xBF802C38 */
  .extern CNEN0AINV        /* 0xBF802C3C */
  .extern CNSTATA          /* 0xBF802C40 */
  .extern CNSTATACLR       /* 0xBF802C44 */
  .extern CNSTATASET       /* 0xBF802C48 */
  .extern CNSTATAINV       /* 0xBF802C4C */
  .extern CNEN1A           /* 0xBF802C50 */
  .extern CNEN1ACLR        /* 0xBF802C54 */
  .extern CNEN1ASET        /* 0xBF802C58 */
  .extern CNEN1AINV        /* 0xBF802C5C */
  .extern CNFA             /* 0xBF802C60 */
  .extern CNFACLR          /* 0xBF802C64 */
  .extern CNFASET          /* 0xBF802C68 */
  .extern CNFAINV          /* 0xBF802C6C */
  .extern SR0A             /* 0xBF802C70 */
  .extern SR0ACLR          /* 0xBF802C74 */
  .extern SR0ASET          /* 0xBF802C78 */
  .extern SR0AINV          /* 0xBF802C7C */
  .extern SR1A             /* 0xBF802C80 */
  .extern SR1ACLR          /* 0xBF802C84 */
  .extern SR1ASET          /* 0xBF802C88 */
  .extern SR1AINV          /* 0xBF802C8C */
  .extern ANSELB           /* 0xBF802CB0 */
  .extern B                /* 0xBF802CB0 */
  .extern ANSELBCLR        /* 0xBF802CB4 */
  .extern BCLR             /* 0xBF802CB4 */
  .extern ANSELBSET        /* 0xBF802CB8 */
  .extern BSET             /* 0xBF802CB8 */
  .extern ANSELBINV        /* 0xBF802CBC */
  .extern BINV             /* 0xBF802CBC */
  .extern TRISB            /* 0xBF802CC0 */
  .extern TRISBCLR         /* 0xBF802CC4 */
  .extern TRISBSET         /* 0xBF802CC8 */
  .extern TRISBINV         /* 0xBF802CCC */
  .extern PORTB            /* 0xBF802CD0 */
  .extern PORTBCLR         /* 0xBF802CD4 */
  .extern PORTBSET         /* 0xBF802CD8 */
  .extern PORTBINV         /* 0xBF802CDC */
  .extern LATB             /* 0xBF802CE0 */
  .extern LATBCLR          /* 0xBF802CE4 */
  .extern LATBSET          /* 0xBF802CE8 */
  .extern LATBINV          /* 0xBF802CEC */
  .extern ODCB             /* 0xBF802CF0 */
  .extern ODCBCLR          /* 0xBF802CF4 */
  .extern ODCBSET          /* 0xBF802CF8 */
  .extern ODCBINV          /* 0xBF802CFC */
  .extern CNPUB            /* 0xBF802D00 */
  .extern CNPUBCLR         /* 0xBF802D04 */
  .extern CNPUBSET         /* 0xBF802D08 */
  .extern CNPUBINV         /* 0xBF802D0C */
  .extern CNPDB            /* 0xBF802D10 */
  .extern CNPDBCLR         /* 0xBF802D14 */
  .extern CNPDBSET         /* 0xBF802D18 */
  .extern CNPDBINV         /* 0xBF802D1C */
  .extern CNCONB           /* 0xBF802D20 */
  .extern CNCONBCLR        /* 0xBF802D24 */
  .extern CNCONBSET        /* 0xBF802D28 */
  .extern CNCONBINV        /* 0xBF802D2C */
  .extern CNEN0B           /* 0xBF802D30 */
  .extern CNEN0BCLR        /* 0xBF802D34 */
  .extern CNEN0BSET        /* 0xBF802D38 */
  .extern CNEN0BINV        /* 0xBF802D3C */
  .extern CNSTATB          /* 0xBF802D40 */
  .extern CNSTATBCLR       /* 0xBF802D44 */
  .extern CNSTATBSET       /* 0xBF802D48 */
  .extern CNSTATBINV       /* 0xBF802D4C */
  .extern CNEN1B           /* 0xBF802D50 */
  .extern CNEN1BCLR        /* 0xBF802D54 */
  .extern CNEN1BSET        /* 0xBF802D58 */
  .extern CNEN1BINV        /* 0xBF802D5C */
  .extern CNFB             /* 0xBF802D60 */
  .extern CNFBCLR          /* 0xBF802D64 */
  .extern CNFBSET          /* 0xBF802D68 */
  .extern CNFBINV          /* 0xBF802D6C */
  .extern SR0B             /* 0xBF802D70 */
  .extern SR0BCLR          /* 0xBF802D74 */
  .extern SR0BSET          /* 0xBF802D78 */
  .extern SR0BINV          /* 0xBF802D7C */
  .extern SR1B             /* 0xBF802D80 */
  .extern SR1BCLR          /* 0xBF802D84 */
  .extern SR1BSET          /* 0xBF802D88 */
  .extern SR1BINV          /* 0xBF802D8C */
  .extern ANSELC           /* 0xBF802DB0 */
  .extern ANSELCCLR        /* 0xBF802DB4 */
  .extern ANSELCSET        /* 0xBF802DB8 */
  .extern ANSELCINV        /* 0xBF802DBC */
  .extern TRISC            /* 0xBF802DC0 */
  .extern TRISCCLR         /* 0xBF802DC4 */
  .extern TRISCSET         /* 0xBF802DC8 */
  .extern TRISCINV         /* 0xBF802DCC */
  .extern PORTC            /* 0xBF802DD0 */
  .extern PORTCCLR         /* 0xBF802DD4 */
  .extern PORTCSET         /* 0xBF802DD8 */
  .extern PORTCINV         /* 0xBF802DDC */
  .extern LATC             /* 0xBF802DE0 */
  .extern LATCCLR          /* 0xBF802DE4 */
  .extern LATCSET          /* 0xBF802DE8 */
  .extern LATCINV          /* 0xBF802DEC */
  .extern ODCC             /* 0xBF802DF0 */
  .extern ODCCCLR          /* 0xBF802DF4 */
  .extern ODCCSET          /* 0xBF802DF8 */
  .extern ODCCINV          /* 0xBF802DFC */
  .extern CNPUC            /* 0xBF802E00 */
  .extern CNPUCCLR         /* 0xBF802E04 */
  .extern CNPUCSET         /* 0xBF802E08 */
  .extern CNPUCINV         /* 0xBF802E0C */
  .extern CNPDC            /* 0xBF802E10 */
  .extern CNPDCCLR         /* 0xBF802E14 */
  .extern CNPDCSET         /* 0xBF802E18 */
  .extern CNPDCINV         /* 0xBF802E1C */
  .extern CNCONC           /* 0xBF802E20 */
  .extern CNCONCCLR        /* 0xBF802E24 */
  .extern CNCONCSET        /* 0xBF802E28 */
  .extern CNCONCINV        /* 0xBF802E2C */
  .extern CNEN0C           /* 0xBF802E30 */
  .extern CNEN0CCLR        /* 0xBF802E34 */
  .extern CNEN0CSET        /* 0xBF802E38 */
  .extern CNEN0CINV        /* 0xBF802E3C */
  .extern CNSTATC          /* 0xBF802E40 */
  .extern CNSTATCCLR       /* 0xBF802E44 */
  .extern CNSTATCSET       /* 0xBF802E48 */
  .extern CNSTATCINV       /* 0xBF802E4C */
  .extern CNEN1C           /* 0xBF802E50 */
  .extern CNEN1CCLR        /* 0xBF802E54 */
  .extern CNEN1CSET        /* 0xBF802E58 */
  .extern CNEN1CINV        /* 0xBF802E5C */
  .extern CNFC             /* 0xBF802E60 */
  .extern CNFCCLR          /* 0xBF802E64 */
  .extern CNFCSET          /* 0xBF802E68 */
  .extern CNFCINV          /* 0xBF802E6C */
  .extern SR0C             /* 0xBF802E70 */
  .extern SR0CCLR          /* 0xBF802E74 */
  .extern SR0CSET          /* 0xBF802E78 */
  .extern SR0CINV          /* 0xBF802E7C */
  .extern SR1C             /* 0xBF802E80 */
  .extern SR1CCLR          /* 0xBF802E84 */
  .extern SR1CSET          /* 0xBF802E88 */
  .extern SR1CINV          /* 0xBF802E8C */
  .extern PMDCON           /* 0xBF8035B0 */
  .extern PMDCONCLR        /* 0xBF8035B4 */
  .extern PMDCONSET        /* 0xBF8035B8 */
  .extern PMDCONINV        /* 0xBF8035BC */
  .extern PMD1             /* 0xBF8035C0 */
  .extern PMD1CLR          /* 0xBF8035C4 */
  .extern PMD1SET          /* 0xBF8035C8 */
  .extern PMD1INV          /* 0xBF8035CC */
  .extern PMD2             /* 0xBF8035D0 */
  .extern PMD2CLR          /* 0xBF8035D4 */
  .extern PMD2SET          /* 0xBF8035D8 */
  .extern PMD2INV          /* 0xBF8035DC */
  .extern PMD3             /* 0xBF8035E0 */
  .extern PMD3CLR          /* 0xBF8035E4 */
  .extern PMD3SET          /* 0xBF8035E8 */
  .extern PMD3INV          /* 0xBF8035EC */
  .extern PMD4             /* 0xBF8035F0 */
  .extern PMD4CLR          /* 0xBF8035F4 */
  .extern PMD4SET          /* 0xBF8035F8 */
  .extern PMD4INV          /* 0xBF8035FC */
  .extern PMD5             /* 0xBF803600 */
  .extern PMD5CLR          /* 0xBF803604 */
  .extern PMD5SET          /* 0xBF803608 */
  .extern PMD5INV          /* 0xBF80360C */
  .extern PMD6             /* 0xBF803610 */
  .extern PMD6CLR          /* 0xBF803614 */
  .extern PMD6SET          /* 0xBF803618 */
  .extern PMD6INV          /* 0xBF80361C */
  .extern PMD7             /* 0xBF803620 */
  .extern PMD7CLR          /* 0xBF803624 */
  .extern PMD7SET          /* 0xBF803628 */
  .extern PMD7INV          /* 0xBF80362C */
  .extern CFGCON           /* 0xBF803640 */
  .extern CFGCONCLR        /* 0xBF803644 */
  .extern CFGCONSET        /* 0xBF803648 */
  .extern CFGCONINV        /* 0xBF80364C */
  .extern DEVID            /* 0xBF803660 */
  .extern DEVIDCLR         /* 0xBF803664 */
  .extern DEVIDSET         /* 0xBF803668 */
  .extern DEVIDINV         /* 0xBF80366C */
  .extern SYSKEY           /* 0xBF803670 */
  .extern SYSKEYCLR        /* 0xBF803674 */
  .extern SYSKEYSET        /* 0xBF803678 */
  .extern SYSKEYINV        /* 0xBF80367C */
  .extern WDTCON           /* 0xBF803990 */
  .extern WDTCONCLR        /* 0xBF803994 */
  .extern WDTCONSET        /* 0xBF803998 */
  .extern WDTCONINV        /* 0xBF80399C */
  .extern T1CON            /* 0xBF808000 */
  .extern T1CONCLR         /* 0xBF808004 */
  .extern T1CONSET         /* 0xBF808008 */
  .extern T1CONINV         /* 0xBF80800C */
  .extern TMR1             /* 0xBF808010 */
  .extern TMR1CLR          /* 0xBF808014 */
  .extern TMR1SET          /* 0xBF808018 */
  .extern TMR1INV          /* 0xBF80801C */
  .extern PR1              /* 0xBF808020 */
  .extern PR1CLR           /* 0xBF808024 */
  .extern PR1SET           /* 0xBF808028 */
  .extern PR1INV           /* 0xBF80802C */
  .extern T2CON            /* 0xBF808040 */
  .extern T2CONCLR         /* 0xBF808044 */
  .extern T2CONSET         /* 0xBF808048 */
  .extern T2CONINV         /* 0xBF80804C */
  .extern TMR2             /* 0xBF808050 */
  .extern TMR2CLR          /* 0xBF808054 */
  .extern TMR2SET          /* 0xBF808058 */
  .extern TMR2INV          /* 0xBF80805C */
  .extern PR2              /* 0xBF808060 */
  .extern PR2CLR           /* 0xBF808064 */
  .extern PR2SET           /* 0xBF808068 */
  .extern PR2INV           /* 0xBF80806C */
  .extern T3CON            /* 0xBF808080 */
  .extern T3CONCLR         /* 0xBF808084 */
  .extern T3CONSET         /* 0xBF808088 */
  .extern T3CONINV         /* 0xBF80808C */
  .extern TMR3             /* 0xBF808090 */
  .extern TMR3CLR          /* 0xBF808094 */
  .extern TMR3SET          /* 0xBF808098 */
  .extern TMR3INV          /* 0xBF80809C */
  .extern PR3              /* 0xBF8080A0 */
  .extern PR3CLR           /* 0xBF8080A4 */
  .extern PR3SET           /* 0xBF8080A8 */
  .extern PR3INV           /* 0xBF8080AC */
  .extern SPI1CON          /* 0xBF808100 */
  .extern SPI1CONCLR       /* 0xBF808104 */
  .extern SPI1CONSET       /* 0xBF808108 */
  .extern SPI1CONINV       /* 0xBF80810C */
  .extern SPI1STAT         /* 0xBF808110 */
  .extern SPI1STATCLR      /* 0xBF808114 */
  .extern SPI1STATSET      /* 0xBF808118 */
  .extern SPI1STATINV      /* 0xBF80811C */
  .extern SPI1BUF          /* 0xBF808120 */
  .extern SPI1BRG          /* 0xBF808130 */
  .extern SPI1BRGCLR       /* 0xBF808134 */
  .extern SPI1BRGSET       /* 0xBF808138 */
  .extern SPI1BRGINV       /* 0xBF80813C */
  .extern SPI1CON2         /* 0xBF808140 */
  .extern SPI1CON2CLR      /* 0xBF808144 */
  .extern SPI1CON2SET      /* 0xBF808148 */
  .extern SPI1CON2INV      /* 0xBF80814C */
  .extern SPI2CON          /* 0xBF808200 */
  .extern SPI2CONCLR       /* 0xBF808204 */
  .extern SPI2CONSET       /* 0xBF808208 */
  .extern SPI2CONINV       /* 0xBF80820C */
  .extern SPI2STAT         /* 0xBF808210 */
  .extern SPI2STATCLR      /* 0xBF808214 */
  .extern SPI2STATSET      /* 0xBF808218 */
  .extern SPI2STATINV      /* 0xBF80821C */
  .extern SPI2BUF          /* 0xBF808220 */
  .extern SPI2BRG          /* 0xBF808230 */
  .extern SPI2BRGCLR       /* 0xBF808234 */
  .extern SPI2BRGSET       /* 0xBF808238 */
  .extern SPI2BRGINV       /* 0xBF80823C */
  .extern SPI2CON2         /* 0xBF808240 */
  .extern SPI2CON2CLR      /* 0xBF808244 */
  .extern SPI2CON2SET      /* 0xBF808248 */
  .extern SPI2CON2INV      /* 0xBF80824C */
  .extern SPI3CON          /* 0xBF808300 */
  .extern SPI3CONCLR       /* 0xBF808304 */
  .extern SPI3CONSET       /* 0xBF808308 */
  .extern SPI3CONINV       /* 0xBF80830C */
  .extern SPI3STAT         /* 0xBF808310 */
  .extern SPI3STATCLR      /* 0xBF808314 */
  .extern SPI3STATSET      /* 0xBF808318 */
  .extern SPI3STATINV      /* 0xBF80831C */
  .extern SPI3BUF          /* 0xBF808320 */
  .extern SPI3BRG          /* 0xBF808330 */
  .extern SPI3BRGCLR       /* 0xBF808334 */
  .extern SPI3BRGSET       /* 0xBF808338 */
  .extern SPI3BRGINV       /* 0xBF80833C */
  .extern SPI3CON2         /* 0xBF808340 */
  .extern SPI3CON2CLR      /* 0xBF808344 */
  .extern SPI3CON2SET      /* 0xBF808348 */
  .extern SPI3CON2INV      /* 0xBF80834C */
  .extern U1OTGIR          /* 0xBF808440 */
  .extern U1OTGIRCLR       /* 0xBF808444 */
  .extern U1OTGIE          /* 0xBF808450 */
  .extern U1OTGIECLR       /* 0xBF808454 */
  .extern U1OTGIESET       /* 0xBF808458 */
  .extern U1OTGIEINV       /* 0xBF80845C */
  .extern U1OTGSTAT        /* 0xBF808460 */
  .extern U1OTGCON         /* 0xBF808470 */
  .extern U1OTGCONCLR      /* 0xBF808474 */
  .extern U1OTGCONSET      /* 0xBF808478 */
  .extern U1OTGCONINV      /* 0xBF80847C */
  .extern U1PWRC           /* 0xBF808480 */
  .extern U1PWRCCLR        /* 0xBF808484 */
  .extern U1PWRCSET        /* 0xBF808488 */
  .extern U1PWRCINV        /* 0xBF80848C */
  .extern U1IR             /* 0xBF808600 */
  .extern U1IRCLR          /* 0xBF808604 */
  .extern U1IE             /* 0xBF808610 */
  .extern U1IECLR          /* 0xBF808614 */
  .extern U1IESET          /* 0xBF808618 */
  .extern U1IEINV          /* 0xBF80861C */
  .extern U1EIR            /* 0xBF808620 */
  .extern U1EIRCLR         /* 0xBF808624 */
  .extern U1EIE            /* 0xBF808630 */
  .extern U1EIECLR         /* 0xBF808634 */
  .extern U1EIESET         /* 0xBF808638 */
  .extern U1EIEINV         /* 0xBF80863C */
  .extern U1STAT           /* 0xBF808640 */
  .extern U1CON            /* 0xBF808650 */
  .extern U1CONCLR         /* 0xBF808654 */
  .extern U1CONSET         /* 0xBF808658 */
  .extern U1CONINV         /* 0xBF80865C */
  .extern U1ADDR           /* 0xBF808660 */
  .extern U1ADDRCLR        /* 0xBF808664 */
  .extern U1ADDRSET        /* 0xBF808668 */
  .extern U1ADDRINV        /* 0xBF80866C */
  .extern U1BDTP1          /* 0xBF808670 */
  .extern U1BDTP1CLR       /* 0xBF808674 */
  .extern U1BDTP1SET       /* 0xBF808678 */
  .extern U1BDTP1INV       /* 0xBF80867C */
  .extern U1FRML           /* 0xBF808680 */
  .extern U1FRMH           /* 0xBF808690 */
  .extern U1TOK            /* 0xBF8086A0 */
  .extern U1TOKCLR         /* 0xBF8086A4 */
  .extern U1TOKSET         /* 0xBF8086A8 */
  .extern U1TOKINV         /* 0xBF8086AC */
  .extern U1SOF            /* 0xBF8086B0 */
  .extern U1SOFCLR         /* 0xBF8086B4 */
  .extern U1SOFSET         /* 0xBF8086B8 */
  .extern U1SOFINV         /* 0xBF8086BC */
  .extern U1BDTP2          /* 0xBF8086C0 */
  .extern U1BDTP2CLR       /* 0xBF8086C4 */
  .extern U1BDTP2SET       /* 0xBF8086C8 */
  .extern U1BDTP2INV       /* 0xBF8086CC */
  .extern U1BDTP3          /* 0xBF8086D0 */
  .extern U1BDTP3CLR       /* 0xBF8086D4 */
  .extern U1BDTP3SET       /* 0xBF8086D8 */
  .extern U1BDTP3INV       /* 0xBF8086DC */
  .extern U1CNFG1          /* 0xBF8086E0 */
  .extern U1CNFG1CLR       /* 0xBF8086E4 */
  .extern U1CNFG1SET       /* 0xBF8086E8 */
  .extern U1CNFG1INV       /* 0xBF8086EC */
  .extern U1EP0            /* 0xBF808700 */
  .extern U1EP0CLR         /* 0xBF808704 */
  .extern U1EP0SET         /* 0xBF808708 */
  .extern U1EP0INV         /* 0xBF80870C */
  .extern U1EP1            /* 0xBF808710 */
  .extern U1EP1CLR         /* 0xBF808714 */
  .extern U1EP1SET         /* 0xBF808718 */
  .extern U1EP1INV         /* 0xBF80871C */
  .extern U1EP2            /* 0xBF808720 */
  .extern U1EP2CLR         /* 0xBF808724 */
  .extern U1EP2SET         /* 0xBF808728 */
  .extern U1EP2INV         /* 0xBF80872C */
  .extern U1EP3            /* 0xBF808730 */
  .extern U1EP3CLR         /* 0xBF808734 */
  .extern U1EP3SET         /* 0xBF808738 */
  .extern U1EP3INV         /* 0xBF80873C */
  .extern U1EP4            /* 0xBF808740 */
  .extern U1EP4CLR         /* 0xBF808744 */
  .extern U1EP4SET         /* 0xBF808748 */
  .extern U1EP4INV         /* 0xBF80874C */
  .extern U1EP5            /* 0xBF808750 */
  .extern U1EP5CLR         /* 0xBF808754 */
  .extern U1EP5SET         /* 0xBF808758 */
  .extern U1EP5INV         /* 0xBF80875C */
  .extern U1EP6            /* 0xBF808760 */
  .extern U1EP6CLR         /* 0xBF808764 */
  .extern U1EP6SET         /* 0xBF808768 */
  .extern U1EP6INV         /* 0xBF80876C */
  .extern U1EP7            /* 0xBF808770 */
  .extern U1EP7CLR         /* 0xBF808774 */
  .extern U1EP7SET         /* 0xBF808778 */
  .extern U1EP7INV         /* 0xBF80877C */
  .extern U1EP8            /* 0xBF808780 */
  .extern U1EP8CLR         /* 0xBF808784 */
  .extern U1EP8SET         /* 0xBF808788 */
  .extern U1EP8INV         /* 0xBF80878C */
  .extern U1EP9            /* 0xBF808790 */
  .extern U1EP9CLR         /* 0xBF808794 */
  .extern U1EP9SET         /* 0xBF808798 */
  .extern U1EP9INV         /* 0xBF80879C */
  .extern U1EP10           /* 0xBF8087A0 */
  .extern U1EP10CLR        /* 0xBF8087A4 */
  .extern U1EP10SET        /* 0xBF8087A8 */
  .extern U1EP10INV        /* 0xBF8087AC */
  .extern U1EP11           /* 0xBF8087B0 */
  .extern U1EP11CLR        /* 0xBF8087B4 */
  .extern U1EP11SET        /* 0xBF8087B8 */
  .extern U1EP11INV        /* 0xBF8087BC */
  .extern U1EP12           /* 0xBF8087C0 */
  .extern U1EP12CLR        /* 0xBF8087C4 */
  .extern U1EP12SET        /* 0xBF8087C8 */
  .extern U1EP12INV        /* 0xBF8087CC */
  .extern U1EP13           /* 0xBF8087D0 */
  .extern U1EP13CLR        /* 0xBF8087D4 */
  .extern U1EP13SET        /* 0xBF8087D8 */
  .extern U1EP13INV        /* 0xBF8087DC */
  .extern U1EP14           /* 0xBF8087E0 */
  .extern U1EP14CLR        /* 0xBF8087E4 */
  .extern U1EP14SET        /* 0xBF8087E8 */
  .extern U1EP14INV        /* 0xBF8087EC */
  .extern U1EP15           /* 0xBF8087F0 */
  .extern U1EP15CLR        /* 0xBF8087F4 */
  .extern U1EP15SET        /* 0xBF8087F8 */
  .extern U1EP15INV        /* 0xBF8087FC */
  .extern DMACON           /* 0xBF808900 */
  .extern DMACONCLR        /* 0xBF808904 */
  .extern DMACONSET        /* 0xBF808908 */
  .extern DMACONINV        /* 0xBF80890C */
  .extern DMASTAT          /* 0xBF808910 */
  .extern DMASTATCLR       /* 0xBF808914 */
  .extern DMASTATSET       /* 0xBF808918 */
  .extern DMASTATINV       /* 0xBF80891C */
  .extern DMAADDR          /* 0xBF808920 */
  .extern DMAADDRCLR       /* 0xBF808924 */
  .extern DMAADDRSET       /* 0xBF808928 */
  .extern DMAADDRINV       /* 0xBF80892C */
  .extern DCRCCON          /* 0xBF808930 */
  .extern DCRCCONCLR       /* 0xBF808934 */
  .extern DCRCCONSET       /* 0xBF808938 */
  .extern DCRCCONINV       /* 0xBF80893C */
  .extern DCRCDATA         /* 0xBF808940 */
  .extern DCRCDATACLR      /* 0xBF808944 */
  .extern DCRCDATASET      /* 0xBF808948 */
  .extern DCRCDATAINV      /* 0xBF80894C */
  .extern DCRCXOR          /* 0xBF808950 */
  .extern DCRCXORCLR       /* 0xBF808954 */
  .extern DCRCXORSET       /* 0xBF808958 */
  .extern DCRCXORINV       /* 0xBF80895C */
  .extern DCH0CON          /* 0xBF808960 */
  .extern DCH0CONCLR       /* 0xBF808964 */
  .extern DCH0CONSET       /* 0xBF808968 */
  .extern DCH0CONINV       /* 0xBF80896C */
  .extern DCH0ECON         /* 0xBF808970 */
  .extern DCH0ECONCLR      /* 0xBF808974 */
  .extern DCH0ECONSET      /* 0xBF808978 */
  .extern DCH0ECONINV      /* 0xBF80897C */
  .extern DCH0INT          /* 0xBF808980 */
  .extern DCH0INTCLR       /* 0xBF808984 */
  .extern DCH0INTSET       /* 0xBF808988 */
  .extern DCH0INTINV       /* 0xBF80898C */
  .extern DCH0SSA          /* 0xBF808990 */
  .extern DCH0SSACLR       /* 0xBF808994 */
  .extern DCH0SSASET       /* 0xBF808998 */
  .extern DCH0SSAINV       /* 0xBF80899C */
  .extern DCH0DSA          /* 0xBF8089A0 */
  .extern DCH0DSACLR       /* 0xBF8089A4 */
  .extern DCH0DSASET       /* 0xBF8089A8 */
  .extern DCH0DSAINV       /* 0xBF8089AC */
  .extern DCH0SSIZ         /* 0xBF8089B0 */
  .extern DCH0SSIZCLR      /* 0xBF8089B4 */
  .extern DCH0SSIZSET      /* 0xBF8089B8 */
  .extern DCH0SSIZINV      /* 0xBF8089BC */
  .extern DCH0DSIZ         /* 0xBF8089C0 */
  .extern DCH0DSIZCLR      /* 0xBF8089C4 */
  .extern DCH0DSIZSET      /* 0xBF8089C8 */
  .extern DCH0DSIZINV      /* 0xBF8089CC */
  .extern DCH0SPTR         /* 0xBF8089D0 */
  .extern DCH0SPTRCLR      /* 0xBF8089D4 */
  .extern DCH0SPTRSET      /* 0xBF8089D8 */
  .extern DCH0SPTRINV      /* 0xBF8089DC */
  .extern DCH0DPTR         /* 0xBF8089E0 */
  .extern DCH0DPTRCLR      /* 0xBF8089E4 */
  .extern DCH0DPTRSET      /* 0xBF8089E8 */
  .extern DCH0DPTRINV      /* 0xBF8089EC */
  .extern DCH0CSIZ         /* 0xBF8089F0 */
  .extern DCH0CSIZCLR      /* 0xBF8089F4 */
  .extern DCH0CSIZSET      /* 0xBF8089F8 */
  .extern DCH0CSIZINV      /* 0xBF8089FC */
  .extern DCH0CPTR         /* 0xBF808A00 */
  .extern DCH0CPTRCLR      /* 0xBF808A04 */
  .extern DCH0CPTRSET      /* 0xBF808A08 */
  .extern DCH0CPTRINV      /* 0xBF808A0C */
  .extern DCH0DAT          /* 0xBF808A10 */
  .extern DCH0DATCLR       /* 0xBF808A14 */
  .extern DCH0DATSET       /* 0xBF808A18 */
  .extern DCH0DATINV       /* 0xBF808A1C */
  .extern DCH1CON          /* 0xBF808A20 */
  .extern DCH1CONCLR       /* 0xBF808A24 */
  .extern DCH1CONSET       /* 0xBF808A28 */
  .extern DCH1CONINV       /* 0xBF808A2C */
  .extern DCH1ECON         /* 0xBF808A30 */
  .extern DCH1ECONCLR      /* 0xBF808A34 */
  .extern DCH1ECONSET      /* 0xBF808A38 */
  .extern DCH1ECONINV      /* 0xBF808A3C */
  .extern DCH1INT          /* 0xBF808A40 */
  .extern DCH1INTCLR       /* 0xBF808A44 */
  .extern DCH1INTSET       /* 0xBF808A48 */
  .extern DCH1INTINV       /* 0xBF808A4C */
  .extern DCH1SSA          /* 0xBF808A50 */
  .extern DCH1SSACLR       /* 0xBF808A54 */
  .extern DCH1SSASET       /* 0xBF808A58 */
  .extern DCH1SSAINV       /* 0xBF808A5C */
  .extern DCH1DSA          /* 0xBF808A60 */
  .extern DCH1DSACLR       /* 0xBF808A64 */
  .extern DCH1DSASET       /* 0xBF808A68 */
  .extern DCH1DSAINV       /* 0xBF808A6C */
  .extern DCH1SSIZ         /* 0xBF808A70 */
  .extern DCH1SSIZCLR      /* 0xBF808A74 */
  .extern DCH1SSIZSET      /* 0xBF808A78 */
  .extern DCH1SSIZINV      /* 0xBF808A7C */
  .extern DCH1DSIZ         /* 0xBF808A80 */
  .extern DCH1DSIZCLR      /* 0xBF808A84 */
  .extern DCH1DSIZSET      /* 0xBF808A88 */
  .extern DCH1DSIZINV      /* 0xBF808A8C */
  .extern DCH1SPTR         /* 0xBF808A90 */
  .extern DCH1SPTRCLR      /* 0xBF808A94 */
  .extern DCH1SPTRSET      /* 0xBF808A98 */
  .extern DCH1SPTRINV      /* 0xBF808A9C */
  .extern DCH1DPTR         /* 0xBF808AA0 */
  .extern DCH1DPTRCLR      /* 0xBF808AA4 */
  .extern DCH1DPTRSET      /* 0xBF808AA8 */
  .extern DCH1DPTRINV      /* 0xBF808AAC */
  .extern DCH1CSIZ         /* 0xBF808AB0 */
  .extern DCH1CSIZCLR      /* 0xBF808AB4 */
  .extern DCH1CSIZSET      /* 0xBF808AB8 */
  .extern DCH1CSIZINV      /* 0xBF808ABC */
  .extern DCH1CPTR         /* 0xBF808AC0 */
  .extern DCH1CPTRCLR      /* 0xBF808AC4 */
  .extern DCH1CPTRSET      /* 0xBF808AC8 */
  .extern DCH1CPTRINV      /* 0xBF808ACC */
  .extern DCH1DAT          /* 0xBF808AD0 */
  .extern DCH1DATCLR       /* 0xBF808AD4 */
  .extern DCH1DATSET       /* 0xBF808AD8 */
  .extern DCH1DATINV       /* 0xBF808ADC */
  .extern DCH2CON          /* 0xBF808AE0 */
  .extern DCH2CONCLR       /* 0xBF808AE4 */
  .extern DCH2CONSET       /* 0xBF808AE8 */
  .extern DCH2CONINV       /* 0xBF808AEC */
  .extern DCH2ECON         /* 0xBF808AF0 */
  .extern DCH2ECONCLR      /* 0xBF808AF4 */
  .extern DCH2ECONSET      /* 0xBF808AF8 */
  .extern DCH2ECONINV      /* 0xBF808AFC */
  .extern DCH2INT          /* 0xBF808B00 */
  .extern DCH2INTCLR       /* 0xBF808B04 */
  .extern DCH2INTSET       /* 0xBF808B08 */
  .extern DCH2INTINV       /* 0xBF808B0C */
  .extern DCH2SSA          /* 0xBF808B10 */
  .extern DCH2SSACLR       /* 0xBF808B14 */
  .extern DCH2SSASET       /* 0xBF808B18 */
  .extern DCH2SSAINV       /* 0xBF808B1C */
  .extern DCH2DSA          /* 0xBF808B20 */
  .extern DCH2DSACLR       /* 0xBF808B24 */
  .extern DCH2DSASET       /* 0xBF808B28 */
  .extern DCH2DSAINV       /* 0xBF808B2C */
  .extern DCH2SSIZ         /* 0xBF808B30 */
  .extern DCH2SSIZCLR      /* 0xBF808B34 */
  .extern DCH2SSIZSET      /* 0xBF808B38 */
  .extern DCH2SSIZINV      /* 0xBF808B3C */
  .extern DCH2DSIZ         /* 0xBF808B40 */
  .extern DCH2DSIZCLR      /* 0xBF808B44 */
  .extern DCH2DSIZSET      /* 0xBF808B48 */
  .extern DCH2DSIZINV      /* 0xBF808B4C */
  .extern DCH2SPTR         /* 0xBF808B50 */
  .extern DCH2SPTRCLR      /* 0xBF808B54 */
  .extern DCH2SPTRSET      /* 0xBF808B58 */
  .extern DCH2SPTRINV      /* 0xBF808B5C */
  .extern DCH2DPTR         /* 0xBF808B60 */
  .extern DCH2DPTRCLR      /* 0xBF808B64 */
  .extern DCH2DPTRSET      /* 0xBF808B68 */
  .extern DCH2DPTRINV      /* 0xBF808B6C */
  .extern DCH2CSIZ         /* 0xBF808B70 */
  .extern DCH2CSIZCLR      /* 0xBF808B74 */
  .extern DCH2CSIZSET      /* 0xBF808B78 */
  .extern DCH2CSIZINV      /* 0xBF808B7C */
  .extern DCH2CPTR         /* 0xBF808B80 */
  .extern DCH2CPTRCLR      /* 0xBF808B84 */
  .extern DCH2CPTRSET      /* 0xBF808B88 */
  .extern DCH2CPTRINV      /* 0xBF808B8C */
  .extern DCH2DAT          /* 0xBF808B90 */
  .extern DCH2DATCLR       /* 0xBF808B94 */
  .extern DCH2DATSET       /* 0xBF808B98 */
  .extern DCH2DATINV       /* 0xBF808B9C */
  .extern DCH3CON          /* 0xBF808BA0 */
  .extern DCH3CONCLR       /* 0xBF808BA4 */
  .extern DCH3CONSET       /* 0xBF808BA8 */
  .extern DCH3CONINV       /* 0xBF808BAC */
  .extern DCH3ECON         /* 0xBF808BB0 */
  .extern DCH3ECONCLR      /* 0xBF808BB4 */
  .extern DCH3ECONSET      /* 0xBF808BB8 */
  .extern DCH3ECONINV      /* 0xBF808BBC */
  .extern DCH3INT          /* 0xBF808BC0 */
  .extern DCH3INTCLR       /* 0xBF808BC4 */
  .extern DCH3INTSET       /* 0xBF808BC8 */
  .extern DCH3INTINV       /* 0xBF808BCC */
  .extern DCH3SSA          /* 0xBF808BD0 */
  .extern DCH3SSACLR       /* 0xBF808BD4 */
  .extern DCH3SSASET       /* 0xBF808BD8 */
  .extern DCH3SSAINV       /* 0xBF808BDC */
  .extern DCH3DSA          /* 0xBF808BE0 */
  .extern DCH3DSACLR       /* 0xBF808BE4 */
  .extern DCH3DSASET       /* 0xBF808BE8 */
  .extern DCH3DSAINV       /* 0xBF808BEC */
  .extern DCH3SSIZ         /* 0xBF808BF0 */
  .extern DCH3SSIZCLR      /* 0xBF808BF4 */
  .extern DCH3SSIZSET      /* 0xBF808BF8 */
  .extern DCH3SSIZINV      /* 0xBF808BFC */
  .extern DCH3DSIZ         /* 0xBF808C00 */
  .extern DCH3DSIZCLR      /* 0xBF808C04 */
  .extern DCH3DSIZSET      /* 0xBF808C08 */
  .extern DCH3DSIZINV      /* 0xBF808C0C */
  .extern DCH3SPTR         /* 0xBF808C10 */
  .extern DCH3SPTRCLR      /* 0xBF808C14 */
  .extern DCH3SPTRSET      /* 0xBF808C18 */
  .extern DCH3SPTRINV      /* 0xBF808C1C */
  .extern DCH3DPTR         /* 0xBF808C20 */
  .extern DCH3DPTRCLR      /* 0xBF808C24 */
  .extern DCH3DPTRSET      /* 0xBF808C28 */
  .extern DCH3DPTRINV      /* 0xBF808C2C */
  .extern DCH3CSIZ         /* 0xBF808C30 */
  .extern DCH3CSIZCLR      /* 0xBF808C34 */
  .extern DCH3CSIZSET      /* 0xBF808C38 */
  .extern DCH3CSIZINV      /* 0xBF808C3C */
  .extern DCH3CPTR         /* 0xBF808C40 */
  .extern DCH3CPTRCLR      /* 0xBF808C44 */
  .extern DCH3CPTRSET      /* 0xBF808C48 */
  .extern DCH3CPTRINV      /* 0xBF808C4C */
  .extern DCH3DAT          /* 0xBF808C50 */
  .extern DCH3DATCLR       /* 0xBF808C54 */
  .extern DCH3DATSET       /* 0xBF808C58 */
  .extern DCH3DATINV       /* 0xBF808C5C */
  .extern INTCON           /* 0xBF80F000 */
  .extern INTCONCLR        /* 0xBF80F004 */
  .extern INTCONSET        /* 0xBF80F008 */
  .extern INTCONINV        /* 0xBF80F00C */
  .extern PRISS            /* 0xBF80F010 */
  .extern PRISSCLR         /* 0xBF80F014 */
  .extern PRISSSET         /* 0xBF80F018 */
  .extern PRISSINV         /* 0xBF80F01C */
  .extern INTSTAT          /* 0xBF80F020 */
  .extern INTSTATCLR       /* 0xBF80F024 */
  .extern INTSTATSET       /* 0xBF80F028 */
  .extern INTSTATINV       /* 0xBF80F02C */
  .extern IPTMR            /* 0xBF80F030 */
  .extern IPTMRCLR         /* 0xBF80F034 */
  .extern IPTMRSET         /* 0xBF80F038 */
  .extern IPTMRINV         /* 0xBF80F03C */
  .extern IFS0             /* 0xBF80F040 */
  .extern IFS0CLR          /* 0xBF80F044 */
  .extern IFS0SET          /* 0xBF80F048 */
  .extern IFS0INV          /* 0xBF80F04C */
  .extern IFS1             /* 0xBF80F050 */
  .extern IFS1CLR          /* 0xBF80F054 */
  .extern IFS1SET          /* 0xBF80F058 */
  .extern IFS1INV          /* 0xBF80F05C */
  .extern IFS2             /* 0xBF80F060 */
  .extern IFS2CLR          /* 0xBF80F064 */
  .extern IFS2SET          /* 0xBF80F068 */
  .extern IFS2INV          /* 0xBF80F06C */
  .extern IFS3             /* 0xBF80F070 */
  .extern IFS3CLR          /* 0xBF80F074 */
  .extern IFS3SET          /* 0xBF80F078 */
  .extern IFS3INV          /* 0xBF80F07C */
  .extern IEC0             /* 0xBF80F0C0 */
  .extern IEC0CLR          /* 0xBF80F0C4 */
  .extern IEC0SET          /* 0xBF80F0C8 */
  .extern IEC0INV          /* 0xBF80F0CC */
  .extern IEC1             /* 0xBF80F0D0 */
  .extern IEC1CLR          /* 0xBF80F0D4 */
  .extern IEC1SET          /* 0xBF80F0D8 */
  .extern IEC1INV          /* 0xBF80F0DC */
  .extern IEC2             /* 0xBF80F0E0 */
  .extern IEC2CLR          /* 0xBF80F0E4 */
  .extern IEC2SET          /* 0xBF80F0E8 */
  .extern IEC2INV          /* 0xBF80F0EC */
  .extern IEC3             /* 0xBF80F0F0 */
  .extern IEC3CLR          /* 0xBF80F0F4 */
  .extern IEC3SET          /* 0xBF80F0F8 */
  .extern IEC3INV          /* 0xBF80F0FC */
  .extern IPC0             /* 0xBF80F140 */
  .extern IPC0CLR          /* 0xBF80F144 */
  .extern IPC0SET          /* 0xBF80F148 */
  .extern IPC0INV          /* 0xBF80F14C */
  .extern IPC1             /* 0xBF80F150 */
  .extern IPC1CLR          /* 0xBF80F154 */
  .extern IPC1SET          /* 0xBF80F158 */
  .extern IPC1INV          /* 0xBF80F15C */
  .extern IPC2             /* 0xBF80F160 */
  .extern IPC2CLR          /* 0xBF80F164 */
  .extern IPC2SET          /* 0xBF80F168 */
  .extern IPC2INV          /* 0xBF80F16C */
  .extern IPC3             /* 0xBF80F170 */
  .extern IPC3CLR          /* 0xBF80F174 */
  .extern IPC3SET          /* 0xBF80F178 */
  .extern IPC3INV          /* 0xBF80F17C */
  .extern IPC4             /* 0xBF80F180 */
  .extern IPC4CLR          /* 0xBF80F184 */
  .extern IPC4SET          /* 0xBF80F188 */
  .extern IPC4INV          /* 0xBF80F18C */
  .extern IPC5             /* 0xBF80F190 */
  .extern IPC5CLR          /* 0xBF80F194 */
  .extern IPC5SET          /* 0xBF80F198 */
  .extern IPC5INV          /* 0xBF80F19C */
  .extern IPC6             /* 0xBF80F1A0 */
  .extern IPC6CLR          /* 0xBF80F1A4 */
  .extern IPC6SET          /* 0xBF80F1A8 */
  .extern IPC6INV          /* 0xBF80F1AC */
  .extern IPC7             /* 0xBF80F1B0 */
  .extern IPC7CLR          /* 0xBF80F1B4 */
  .extern IPC7SET          /* 0xBF80F1B8 */
  .extern IPC7INV          /* 0xBF80F1BC */
  .extern IPC8             /* 0xBF80F1C0 */
  .extern IPC8CLR          /* 0xBF80F1C4 */
  .extern IPC8SET          /* 0xBF80F1C8 */
  .extern IPC8INV          /* 0xBF80F1CC */
  .extern IPC9             /* 0xBF80F1D0 */
  .extern IPC9CLR          /* 0xBF80F1D4 */
  .extern IPC9SET          /* 0xBF80F1D8 */
  .extern IPC9INV          /* 0xBF80F1DC */
  .extern IPC10            /* 0xBF80F1E0 */
  .extern IPC10CLR         /* 0xBF80F1E4 */
  .extern IPC10SET         /* 0xBF80F1E8 */
  .extern IPC10INV         /* 0xBF80F1EC */
  .extern IPC11            /* 0xBF80F1F0 */
  .extern IPC11CLR         /* 0xBF80F1F4 */
  .extern IPC11SET         /* 0xBF80F1F8 */
  .extern IPC11INV         /* 0xBF80F1FC */
  .extern IPC12            /* 0xBF80F200 */
  .extern IPC12CLR         /* 0xBF80F204 */
  .extern IPC12SET         /* 0xBF80F208 */
  .extern IPC12INV         /* 0xBF80F20C */
  .extern IPC13            /* 0xBF80F210 */
  .extern IPC13CLR         /* 0xBF80F214 */
  .extern IPC13SET         /* 0xBF80F218 */
  .extern IPC13INV         /* 0xBF80F21C */
  .extern IPC14            /* 0xBF80F220 */
  .extern IPC14CLR         /* 0xBF80F224 */
  .extern IPC14SET         /* 0xBF80F228 */
  .extern IPC14INV         /* 0xBF80F22C */
  .extern IPC15            /* 0xBF80F230 */
  .extern IPC15CLR         /* 0xBF80F234 */
  .extern IPC15SET         /* 0xBF80F238 */
  .extern IPC15INV         /* 0xBF80F23C */
  .extern IPC16            /* 0xBF80F240 */
  .extern IPC16CLR         /* 0xBF80F244 */
  .extern IPC16SET         /* 0xBF80F248 */
  .extern IPC16INV         /* 0xBF80F24C */
  .extern IPC17            /* 0xBF80F250 */
  .extern IPC17CLR         /* 0xBF80F254 */
  .extern IPC17SET         /* 0xBF80F258 */
  .extern IPC17INV         /* 0xBF80F25C */
  .extern IPC18            /* 0xBF80F260 */
  .extern IPC18CLR         /* 0xBF80F264 */
  .extern IPC18SET         /* 0xBF80F268 */
  .extern IPC18INV         /* 0xBF80F26C */
  .extern IPC19            /* 0xBF80F270 */
  .extern IPC19CLR         /* 0xBF80F274 */
  .extern IPC19SET         /* 0xBF80F278 */
  .extern IPC19INV         /* 0xBF80F27C */
  .extern IPC20            /* 0xBF80F280 */
  .extern IPC20CLR         /* 0xBF80F284 */
  .extern IPC20SET         /* 0xBF80F288 */
  .extern IPC20INV         /* 0xBF80F28C */
  .extern IPC21            /* 0xBF80F290 */
  .extern IPC21CLR         /* 0xBF80F294 */
  .extern IPC21SET         /* 0xBF80F298 */
  .extern IPC21INV         /* 0xBF80F29C */
  .extern IPC22            /* 0xBF80F2A0 */
  .extern IPC22CLR         /* 0xBF80F2A4 */
  .extern IPC22SET         /* 0xBF80F2A8 */
  .extern IPC22INV         /* 0xBF80F2AC */
  .extern IPC23            /* 0xBF80F2B0 */
  .extern IPC23CLR         /* 0xBF80F2B4 */
  .extern IPC23SET         /* 0xBF80F2B8 */
  .extern IPC23INV         /* 0xBF80F2BC */
  .extern IPC24            /* 0xBF80F2C0 */
  .extern IPC24CLR         /* 0xBF80F2C4 */
  .extern IPC24SET         /* 0xBF80F2C8 */
  .extern IPC24INV         /* 0xBF80F2CC */
  .extern IPC25            /* 0xBF80F2D0 */
  .extern IPC25CLR         /* 0xBF80F2D4 */
  .extern IPC25SET         /* 0xBF80F2D8 */
  .extern IPC25INV         /* 0xBF80F2DC */
  .extern UDID1            /* 0xBFC41840 */
  .extern UDID2            /* 0xBFC41844 */
  .extern UDID3            /* 0xBFC41848 */
  .extern UDID4            /* 0xBFC4184C */
  .extern UDID5            /* 0xBFC41850 */
  .extern FDEVOPT          /* 0xBFC017C4 */
  .extern FICD             /* 0xBFC017C8 */
  .extern FPOR             /* 0xBFC017CC */
  .extern FWDT             /* 0xBFC017D0 */
  .extern FOSCSEL          /* 0xBFC017D4 */
  .extern FSEC             /* 0xBFC017D8 */
  .extern AFDEVOPT         /* 0xBFC01744 */
  .extern AFICD            /* 0xBFC01748 */
  .extern AFPOR            /* 0xBFC0174C */
  .extern AFWDT            /* 0xBFC01750 */
  .extern AFOSCSEL         /* 0xBFC01754 */
  .extern AFSEC            /* 0xBFC01758 */
#else
#error Unknown language!
#endif

#define _RTCCON1_OUTSEL_POSITION                 0x00000004
#define _RTCCON1_OUTSEL_MASK                     0x00000070
#define _RTCCON1_OUTSEL_LENGTH                   0x00000003

#define _RTCCON1_RTCOE_POSITION                  0x00000007
#define _RTCCON1_RTCOE_MASK                      0x00000080
#define _RTCCON1_RTCOE_LENGTH                    0x00000001

#define _RTCCON1_WRLOCK_POSITION                 0x0000000B
#define _RTCCON1_WRLOCK_MASK                     0x00000800
#define _RTCCON1_WRLOCK_LENGTH                   0x00000001

#define _RTCCON1_ON_POSITION                     0x0000000F
#define _RTCCON1_ON_MASK                         0x00008000
#define _RTCCON1_ON_LENGTH                       0x00000001

#define _RTCCON1_ALMRPT_POSITION                 0x00000010
#define _RTCCON1_ALMRPT_MASK                     0x00FF0000
#define _RTCCON1_ALMRPT_LENGTH                   0x00000008

#define _RTCCON1_AMASK_POSITION                  0x00000018
#define _RTCCON1_AMASK_MASK                      0x0F000000
#define _RTCCON1_AMASK_LENGTH                    0x00000004

#define _RTCCON1_CHIME_POSITION                  0x0000001E
#define _RTCCON1_CHIME_MASK                      0x40000000
#define _RTCCON1_CHIME_LENGTH                    0x00000001

#define _RTCCON1_ALRMEN_POSITION                 0x0000001F
#define _RTCCON1_ALRMEN_MASK                     0x80000000
#define _RTCCON1_ALRMEN_LENGTH                   0x00000001

#define _RTCCON2_CLKSEL_POSITION                 0x00000000
#define _RTCCON2_CLKSEL_MASK                     0x00000003
#define _RTCCON2_CLKSEL_LENGTH                   0x00000002

#define _RTCCON2_FDIV_POSITION                   0x0000000B
#define _RTCCON2_FDIV_MASK                       0x0000F800
#define _RTCCON2_FDIV_LENGTH                     0x00000005

#define _RTCCON2_DIV_POSITION                    0x00000010
#define _RTCCON2_DIV_MASK                        0xFFFF0000
#define _RTCCON2_DIV_LENGTH                      0x00000010

#define _RTCSTAT_HALFSEC_POSITION                0x00000000
#define _RTCSTAT_HALFSEC_MASK                    0x00000001
#define _RTCSTAT_HALFSEC_LENGTH                  0x00000001

#define _RTCSTAT_ALMSYNC_POSITION                0x00000001
#define _RTCSTAT_ALMSYNC_MASK                    0x00000002
#define _RTCSTAT_ALMSYNC_LENGTH                  0x00000001

#define _RTCSTAT_SYNC_POSITION                   0x00000002
#define _RTCSTAT_SYNC_MASK                       0x00000004
#define _RTCSTAT_SYNC_LENGTH                     0x00000001

#define _RTCSTAT_ALMEVT_POSITION                 0x00000005
#define _RTCSTAT_ALMEVT_MASK                     0x00000020
#define _RTCSTAT_ALMEVT_LENGTH                   0x00000001

#define _RTCTIME_SECONE_POSITION                 0x00000008
#define _RTCTIME_SECONE_MASK                     0x00000F00
#define _RTCTIME_SECONE_LENGTH                   0x00000004

#define _RTCTIME_SECTEN_POSITION                 0x0000000C
#define _RTCTIME_SECTEN_MASK                     0x00007000
#define _RTCTIME_SECTEN_LENGTH                   0x00000003

#define _RTCTIME_MINONE_POSITION                 0x00000010
#define _RTCTIME_MINONE_MASK                     0x000F0000
#define _RTCTIME_MINONE_LENGTH                   0x00000004

#define _RTCTIME_MINTEN_POSITION                 0x00000014
#define _RTCTIME_MINTEN_MASK                     0x00700000
#define _RTCTIME_MINTEN_LENGTH                   0x00000003

#define _RTCTIME_HRONE_POSITION                  0x00000018
#define _RTCTIME_HRONE_MASK                      0x0F000000
#define _RTCTIME_HRONE_LENGTH                    0x00000004

#define _RTCTIME_HRTEN_POSITION                  0x0000001C
#define _RTCTIME_HRTEN_MASK                      0x70000000
#define _RTCTIME_HRTEN_LENGTH                    0x00000003

#define _RTCDATE_WDAY_POSITION                   0x00000000
#define _RTCDATE_WDAY_MASK                       0x00000007
#define _RTCDATE_WDAY_LENGTH                     0x00000003

#define _RTCDATE_DAYONE_POSITION                 0x00000008
#define _RTCDATE_DAYONE_MASK                     0x00000F00
#define _RTCDATE_DAYONE_LENGTH                   0x00000004

#define _RTCDATE_DAYTEN_POSITION                 0x0000000C
#define _RTCDATE_DAYTEN_MASK                     0x00003000
#define _RTCDATE_DAYTEN_LENGTH                   0x00000002

#define _RTCDATE_MTHONE_POSITION                 0x00000010
#define _RTCDATE_MTHONE_MASK                     0x000F0000
#define _RTCDATE_MTHONE_LENGTH                   0x00000004

#define _RTCDATE_MTHTEN_POSITION                 0x00000014
#define _RTCDATE_MTHTEN_MASK                     0x00100000
#define _RTCDATE_MTHTEN_LENGTH                   0x00000001

#define _RTCDATE_YRONE_POSITION                  0x00000018
#define _RTCDATE_YRONE_MASK                      0x0F000000
#define _RTCDATE_YRONE_LENGTH                    0x00000004

#define _RTCDATE_YRTEN_POSITION                  0x0000001C
#define _RTCDATE_YRTEN_MASK                      0xF0000000
#define _RTCDATE_YRTEN_LENGTH                    0x00000004

#define _ALMTIME_SECONE_POSITION                 0x00000008
#define _ALMTIME_SECONE_MASK                     0x00000F00
#define _ALMTIME_SECONE_LENGTH                   0x00000004

#define _ALMTIME_SECTEN_POSITION                 0x0000000C
#define _ALMTIME_SECTEN_MASK                     0x00007000
#define _ALMTIME_SECTEN_LENGTH                   0x00000003

#define _ALMTIME_MINONE_POSITION                 0x00000010
#define _ALMTIME_MINONE_MASK                     0x000F0000
#define _ALMTIME_MINONE_LENGTH                   0x00000004

#define _ALMTIME_MINTEN_POSITION                 0x00000014
#define _ALMTIME_MINTEN_MASK                     0x00700000
#define _ALMTIME_MINTEN_LENGTH                   0x00000003

#define _ALMTIME_HRONE_POSITION                  0x00000018
#define _ALMTIME_HRONE_MASK                      0x0F000000
#define _ALMTIME_HRONE_LENGTH                    0x00000004

#define _ALMTIME_HRTEN_POSITION                  0x0000001C
#define _ALMTIME_HRTEN_MASK                      0x70000000
#define _ALMTIME_HRTEN_LENGTH                    0x00000003

#define _ALMDATE_WDAY_POSITION                   0x00000000
#define _ALMDATE_WDAY_MASK                       0x00000007
#define _ALMDATE_WDAY_LENGTH                     0x00000003

#define _ALMDATE_DAYONE_POSITION                 0x00000008
#define _ALMDATE_DAYONE_MASK                     0x00000F00
#define _ALMDATE_DAYONE_LENGTH                   0x00000004

#define _ALMDATE_DAYTEN_POSITION                 0x0000000C
#define _ALMDATE_DAYTEN_MASK                     0x00003000
#define _ALMDATE_DAYTEN_LENGTH                   0x00000002

#define _ALMDATE_MTHONE_POSITION                 0x00000010
#define _ALMDATE_MTHONE_MASK                     0x000F0000
#define _ALMDATE_MTHONE_LENGTH                   0x00000004

#define _ALMDATE_MTHTEN_POSITION                 0x00000014
#define _ALMDATE_MTHTEN_MASK                     0x00100000
#define _ALMDATE_MTHTEN_LENGTH                   0x00000001

#define _CCP1CON1_MOD_POSITION                   0x00000000
#define _CCP1CON1_MOD_MASK                       0x0000000F
#define _CCP1CON1_MOD_LENGTH                     0x00000004

#define _CCP1CON1_CCSEL_POSITION                 0x00000004
#define _CCP1CON1_CCSEL_MASK                     0x00000010
#define _CCP1CON1_CCSEL_LENGTH                   0x00000001

#define _CCP1CON1_T32_POSITION                   0x00000005
#define _CCP1CON1_T32_MASK                       0x00000020
#define _CCP1CON1_T32_LENGTH                     0x00000001

#define _CCP1CON1_TMRPS_POSITION                 0x00000006
#define _CCP1CON1_TMRPS_MASK                     0x000000C0
#define _CCP1CON1_TMRPS_LENGTH                   0x00000002

#define _CCP1CON1_CLKSEL_POSITION                0x00000008
#define _CCP1CON1_CLKSEL_MASK                    0x00000700
#define _CCP1CON1_CLKSEL_LENGTH                  0x00000003

#define _CCP1CON1_TMRSYNC_POSITION               0x0000000B
#define _CCP1CON1_TMRSYNC_MASK                   0x00000800
#define _CCP1CON1_TMRSYNC_LENGTH                 0x00000001

#define _CCP1CON1_CCPSLP_POSITION                0x0000000C
#define _CCP1CON1_CCPSLP_MASK                    0x00001000
#define _CCP1CON1_CCPSLP_LENGTH                  0x00000001

#define _CCP1CON1_SIDL_POSITION                  0x0000000D
#define _CCP1CON1_SIDL_MASK                      0x00002000
#define _CCP1CON1_SIDL_LENGTH                    0x00000001

#define _CCP1CON1_ON_POSITION                    0x0000000F
#define _CCP1CON1_ON_MASK                        0x00008000
#define _CCP1CON1_ON_LENGTH                      0x00000001

#define _CCP1CON1_SYNC_POSITION                  0x00000010
#define _CCP1CON1_SYNC_MASK                      0x001F0000
#define _CCP1CON1_SYNC_LENGTH                    0x00000005

#define _CCP1CON1_ALTSYNC_POSITION               0x00000015
#define _CCP1CON1_ALTSYNC_MASK                   0x00200000
#define _CCP1CON1_ALTSYNC_LENGTH                 0x00000001

#define _CCP1CON1_ONESHOT_POSITION               0x00000016
#define _CCP1CON1_ONESHOT_MASK                   0x00400000
#define _CCP1CON1_ONESHOT_LENGTH                 0x00000001

#define _CCP1CON1_TRIGEN_POSITION                0x00000017
#define _CCP1CON1_TRIGEN_MASK                    0x00800000
#define _CCP1CON1_TRIGEN_LENGTH                  0x00000001

#define _CCP1CON1_OPS_POSITION                   0x00000018
#define _CCP1CON1_OPS_MASK                       0x0F000000
#define _CCP1CON1_OPS_LENGTH                     0x00000004

#define _CCP1CON1_RTRGEN_POSITION                0x0000001E
#define _CCP1CON1_RTRGEN_MASK                    0x40000000
#define _CCP1CON1_RTRGEN_LENGTH                  0x00000001

#define _CCP1CON1_OPSSRC_POSITION                0x0000001F
#define _CCP1CON1_OPSSRC_MASK                    0x80000000
#define _CCP1CON1_OPSSRC_LENGTH                  0x00000001

#define _CCP1CON2_ASDG_POSITION                  0x00000000
#define _CCP1CON2_ASDG_MASK                      0x000000FF
#define _CCP1CON2_ASDG_LENGTH                    0x00000008

#define _CCP1CON2_SSDG_POSITION                  0x0000000C
#define _CCP1CON2_SSDG_MASK                      0x00001000
#define _CCP1CON2_SSDG_LENGTH                    0x00000001

#define _CCP1CON2_ASDGM_POSITION                 0x0000000E
#define _CCP1CON2_ASDGM_MASK                     0x00004000
#define _CCP1CON2_ASDGM_LENGTH                   0x00000001

#define _CCP1CON2_PWMRSEN_POSITION               0x0000000F
#define _CCP1CON2_PWMRSEN_MASK                   0x00008000
#define _CCP1CON2_PWMRSEN_LENGTH                 0x00000001

#define _CCP1CON2_ICS_POSITION                   0x00000010
#define _CCP1CON2_ICS_MASK                       0x00070000
#define _CCP1CON2_ICS_LENGTH                     0x00000003

#define _CCP1CON2_AUXOUT_POSITION                0x00000013
#define _CCP1CON2_AUXOUT_MASK                    0x00180000
#define _CCP1CON2_AUXOUT_LENGTH                  0x00000002

#define _CCP1CON2_ICGSM_POSITION                 0x00000016
#define _CCP1CON2_ICGSM_MASK                     0x00C00000
#define _CCP1CON2_ICGSM_LENGTH                   0x00000002

#define _CCP1CON2_OCAEN_POSITION                 0x00000018
#define _CCP1CON2_OCAEN_MASK                     0x01000000
#define _CCP1CON2_OCAEN_LENGTH                   0x00000001

#define _CCP1CON2_OCBEN_POSITION                 0x00000019
#define _CCP1CON2_OCBEN_MASK                     0x02000000
#define _CCP1CON2_OCBEN_LENGTH                   0x00000001

#define _CCP1CON2_OCCEN_POSITION                 0x0000001A
#define _CCP1CON2_OCCEN_MASK                     0x04000000
#define _CCP1CON2_OCCEN_LENGTH                   0x00000001

#define _CCP1CON2_OCDEN_POSITION                 0x0000001B
#define _CCP1CON2_OCDEN_MASK                     0x08000000
#define _CCP1CON2_OCDEN_LENGTH                   0x00000001

#define _CCP1CON2_OCEEN_POSITION                 0x0000001C
#define _CCP1CON2_OCEEN_MASK                     0x10000000
#define _CCP1CON2_OCEEN_LENGTH                   0x00000001

#define _CCP1CON2_OCFEN_POSITION                 0x0000001D
#define _CCP1CON2_OCFEN_MASK                     0x20000000
#define _CCP1CON2_OCFEN_LENGTH                   0x00000001

#define _CCP1CON2_OENSYNC_POSITION               0x0000001F
#define _CCP1CON2_OENSYNC_MASK                   0x80000000
#define _CCP1CON2_OENSYNC_LENGTH                 0x00000001

#define _CCP1CON3_DT_POSITION                    0x00000000
#define _CCP1CON3_DT_MASK                        0x0000003F
#define _CCP1CON3_DT_LENGTH                      0x00000006

#define _CCP1CON3_PSSBDF_POSITION                0x00000010
#define _CCP1CON3_PSSBDF_MASK                    0x00030000
#define _CCP1CON3_PSSBDF_LENGTH                  0x00000002

#define _CCP1CON3_PSSACE_POSITION                0x00000012
#define _CCP1CON3_PSSACE_MASK                    0x000C0000
#define _CCP1CON3_PSSACE_LENGTH                  0x00000002

#define _CCP1CON3_POLBDF_POSITION                0x00000014
#define _CCP1CON3_POLBDF_MASK                    0x00100000
#define _CCP1CON3_POLBDF_LENGTH                  0x00000001

#define _CCP1CON3_POLACE_POSITION                0x00000015
#define _CCP1CON3_POLACE_MASK                    0x00200000
#define _CCP1CON3_POLACE_LENGTH                  0x00000001

#define _CCP1CON3_OUTM_POSITION                  0x00000018
#define _CCP1CON3_OUTM_MASK                      0x07000000
#define _CCP1CON3_OUTM_LENGTH                    0x00000003

#define _CCP1CON3_OSCNT_POSITION                 0x0000001C
#define _CCP1CON3_OSCNT_MASK                     0x70000000
#define _CCP1CON3_OSCNT_LENGTH                   0x00000003

#define _CCP1CON3_OETRIG_POSITION                0x0000001F
#define _CCP1CON3_OETRIG_MASK                    0x80000000
#define _CCP1CON3_OETRIG_LENGTH                  0x00000001

#define _CCP1STAT_ICBNE_POSITION                 0x00000000
#define _CCP1STAT_ICBNE_MASK                     0x00000001
#define _CCP1STAT_ICBNE_LENGTH                   0x00000001

#define _CCP1STAT_ICOV_POSITION                  0x00000001
#define _CCP1STAT_ICOV_MASK                      0x00000002
#define _CCP1STAT_ICOV_LENGTH                    0x00000001

#define _CCP1STAT_ICDIS_POSITION                 0x00000002
#define _CCP1STAT_ICDIS_MASK                     0x00000004
#define _CCP1STAT_ICDIS_LENGTH                   0x00000001

#define _CCP1STAT_SCEVT_POSITION                 0x00000003
#define _CCP1STAT_SCEVT_MASK                     0x00000008
#define _CCP1STAT_SCEVT_LENGTH                   0x00000001

#define _CCP1STAT_ASEVT_POSITION                 0x00000004
#define _CCP1STAT_ASEVT_MASK                     0x00000010
#define _CCP1STAT_ASEVT_LENGTH                   0x00000001

#define _CCP1STAT_TRCLR_POSITION                 0x00000005
#define _CCP1STAT_TRCLR_MASK                     0x00000020
#define _CCP1STAT_TRCLR_LENGTH                   0x00000001

#define _CCP1STAT_TRSET_POSITION                 0x00000006
#define _CCP1STAT_TRSET_MASK                     0x00000040
#define _CCP1STAT_TRSET_LENGTH                   0x00000001

#define _CCP1STAT_CCPTRIG_POSITION               0x00000007
#define _CCP1STAT_CCPTRIG_MASK                   0x00000080
#define _CCP1STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP1STAT_ICGARM_POSITION                0x0000000A
#define _CCP1STAT_ICGARM_MASK                    0x00000400
#define _CCP1STAT_ICGARM_LENGTH                  0x00000001

#define _CCP1STAT_RAWIP_POSITION                 0x00000010
#define _CCP1STAT_RAWIP_MASK                     0x00010000
#define _CCP1STAT_RAWIP_LENGTH                   0x00000001

#define _CCP1STAT_RBWIP_POSITION                 0x00000011
#define _CCP1STAT_RBWIP_MASK                     0x00020000
#define _CCP1STAT_RBWIP_LENGTH                   0x00000001

#define _CCP1STAT_TMRLWIP_POSITION               0x00000012
#define _CCP1STAT_TMRLWIP_MASK                   0x00040000
#define _CCP1STAT_TMRLWIP_LENGTH                 0x00000001

#define _CCP1STAT_TMRHWIP_POSITION               0x00000013
#define _CCP1STAT_TMRHWIP_MASK                   0x00080000
#define _CCP1STAT_TMRHWIP_LENGTH                 0x00000001

#define _CCP1STAT_PRLWIP_POSITION                0x00000014
#define _CCP1STAT_PRLWIP_MASK                    0x00100000
#define _CCP1STAT_PRLWIP_LENGTH                  0x00000001

#define _CCP1TMR_TMRL_POSITION                   0x00000000
#define _CCP1TMR_TMRL_MASK                       0x0000FFFF
#define _CCP1TMR_TMRL_LENGTH                     0x00000010

#define _CCP1TMR_TMRH_POSITION                   0x00000010
#define _CCP1TMR_TMRH_MASK                       0xFFFF0000
#define _CCP1TMR_TMRH_LENGTH                     0x00000010

#define _CCP1TMR_TMR_POSITION                    0x00000000
#define _CCP1TMR_TMR_MASK                        0xFFFFFFFF
#define _CCP1TMR_TMR_LENGTH                      0x00000020

#define _CCP1PR_PRL_POSITION                     0x00000000
#define _CCP1PR_PRL_MASK                         0x0000FFFF
#define _CCP1PR_PRL_LENGTH                       0x00000010

#define _CCP1PR_PRH_POSITION                     0x00000010
#define _CCP1PR_PRH_MASK                         0xFFFF0000
#define _CCP1PR_PRH_LENGTH                       0x00000010

#define _CCP1PR_PR_POSITION                      0x00000000
#define _CCP1PR_PR_MASK                          0xFFFFFFFF
#define _CCP1PR_PR_LENGTH                        0x00000020

#define _CCP1RA_CMPA_POSITION                    0x00000000
#define _CCP1RA_CMPA_MASK                        0x0000FFFF
#define _CCP1RA_CMPA_LENGTH                      0x00000010

#define _CCP1RB_CMPB_POSITION                    0x00000000
#define _CCP1RB_CMPB_MASK                        0x0000FFFF
#define _CCP1RB_CMPB_LENGTH                      0x00000010

#define _CCP1BUF_BUFL_POSITION                   0x00000000
#define _CCP1BUF_BUFL_MASK                       0x0000FFFF
#define _CCP1BUF_BUFL_LENGTH                     0x00000010

#define _CCP1BUF_BUFH_POSITION                   0x00000010
#define _CCP1BUF_BUFH_MASK                       0xFFFF0000
#define _CCP1BUF_BUFH_LENGTH                     0x00000010

#define _CCP1BUF_BUF_POSITION                    0x00000000
#define _CCP1BUF_BUF_MASK                        0xFFFFFFFF
#define _CCP1BUF_BUF_LENGTH                      0x00000020

#define _CCP2CON1_MOD_POSITION                   0x00000000
#define _CCP2CON1_MOD_MASK                       0x0000000F
#define _CCP2CON1_MOD_LENGTH                     0x00000004

#define _CCP2CON1_CCSEL_POSITION                 0x00000004
#define _CCP2CON1_CCSEL_MASK                     0x00000010
#define _CCP2CON1_CCSEL_LENGTH                   0x00000001

#define _CCP2CON1_T32_POSITION                   0x00000005
#define _CCP2CON1_T32_MASK                       0x00000020
#define _CCP2CON1_T32_LENGTH                     0x00000001

#define _CCP2CON1_TMRPS_POSITION                 0x00000006
#define _CCP2CON1_TMRPS_MASK                     0x000000C0
#define _CCP2CON1_TMRPS_LENGTH                   0x00000002

#define _CCP2CON1_CLKSEL_POSITION                0x00000008
#define _CCP2CON1_CLKSEL_MASK                    0x00000700
#define _CCP2CON1_CLKSEL_LENGTH                  0x00000003

#define _CCP2CON1_TMRSYNC_POSITION               0x0000000B
#define _CCP2CON1_TMRSYNC_MASK                   0x00000800
#define _CCP2CON1_TMRSYNC_LENGTH                 0x00000001

#define _CCP2CON1_CCPSLP_POSITION                0x0000000C
#define _CCP2CON1_CCPSLP_MASK                    0x00001000
#define _CCP2CON1_CCPSLP_LENGTH                  0x00000001

#define _CCP2CON1_SIDL_POSITION                  0x0000000D
#define _CCP2CON1_SIDL_MASK                      0x00002000
#define _CCP2CON1_SIDL_LENGTH                    0x00000001

#define _CCP2CON1_ON_POSITION                    0x0000000F
#define _CCP2CON1_ON_MASK                        0x00008000
#define _CCP2CON1_ON_LENGTH                      0x00000001

#define _CCP2CON1_SYNC_POSITION                  0x00000010
#define _CCP2CON1_SYNC_MASK                      0x001F0000
#define _CCP2CON1_SYNC_LENGTH                    0x00000005

#define _CCP2CON1_ALTSYNC_POSITION               0x00000015
#define _CCP2CON1_ALTSYNC_MASK                   0x00200000
#define _CCP2CON1_ALTSYNC_LENGTH                 0x00000001

#define _CCP2CON1_ONESHOT_POSITION               0x00000016
#define _CCP2CON1_ONESHOT_MASK                   0x00400000
#define _CCP2CON1_ONESHOT_LENGTH                 0x00000001

#define _CCP2CON1_TRIGEN_POSITION                0x00000017
#define _CCP2CON1_TRIGEN_MASK                    0x00800000
#define _CCP2CON1_TRIGEN_LENGTH                  0x00000001

#define _CCP2CON1_OPS_POSITION                   0x00000018
#define _CCP2CON1_OPS_MASK                       0x0F000000
#define _CCP2CON1_OPS_LENGTH                     0x00000004

#define _CCP2CON1_RTRGEN_POSITION                0x0000001E
#define _CCP2CON1_RTRGEN_MASK                    0x40000000
#define _CCP2CON1_RTRGEN_LENGTH                  0x00000001

#define _CCP2CON1_OPSSRC_POSITION                0x0000001F
#define _CCP2CON1_OPSSRC_MASK                    0x80000000
#define _CCP2CON1_OPSSRC_LENGTH                  0x00000001

#define _CCP2CON2_ASDG_POSITION                  0x00000000
#define _CCP2CON2_ASDG_MASK                      0x000000FF
#define _CCP2CON2_ASDG_LENGTH                    0x00000008

#define _CCP2CON2_SSDG_POSITION                  0x0000000C
#define _CCP2CON2_SSDG_MASK                      0x00001000
#define _CCP2CON2_SSDG_LENGTH                    0x00000001

#define _CCP2CON2_ASDGM_POSITION                 0x0000000E
#define _CCP2CON2_ASDGM_MASK                     0x00004000
#define _CCP2CON2_ASDGM_LENGTH                   0x00000001

#define _CCP2CON2_PWMRSEN_POSITION               0x0000000F
#define _CCP2CON2_PWMRSEN_MASK                   0x00008000
#define _CCP2CON2_PWMRSEN_LENGTH                 0x00000001

#define _CCP2CON2_ICS_POSITION                   0x00000010
#define _CCP2CON2_ICS_MASK                       0x00070000
#define _CCP2CON2_ICS_LENGTH                     0x00000003

#define _CCP2CON2_AUXOUT_POSITION                0x00000013
#define _CCP2CON2_AUXOUT_MASK                    0x00180000
#define _CCP2CON2_AUXOUT_LENGTH                  0x00000002

#define _CCP2CON2_ICGSM_POSITION                 0x00000016
#define _CCP2CON2_ICGSM_MASK                     0x00C00000
#define _CCP2CON2_ICGSM_LENGTH                   0x00000002

#define _CCP2CON2_OCAEN_POSITION                 0x00000018
#define _CCP2CON2_OCAEN_MASK                     0x01000000
#define _CCP2CON2_OCAEN_LENGTH                   0x00000001

#define _CCP2CON2_OCBEN_POSITION                 0x00000019
#define _CCP2CON2_OCBEN_MASK                     0x02000000
#define _CCP2CON2_OCBEN_LENGTH                   0x00000001

#define _CCP2CON2_OCCEN_POSITION                 0x0000001A
#define _CCP2CON2_OCCEN_MASK                     0x04000000
#define _CCP2CON2_OCCEN_LENGTH                   0x00000001

#define _CCP2CON2_OCDEN_POSITION                 0x0000001B
#define _CCP2CON2_OCDEN_MASK                     0x08000000
#define _CCP2CON2_OCDEN_LENGTH                   0x00000001

#define _CCP2CON2_OCEEN_POSITION                 0x0000001C
#define _CCP2CON2_OCEEN_MASK                     0x10000000
#define _CCP2CON2_OCEEN_LENGTH                   0x00000001

#define _CCP2CON2_OCFEN_POSITION                 0x0000001D
#define _CCP2CON2_OCFEN_MASK                     0x20000000
#define _CCP2CON2_OCFEN_LENGTH                   0x00000001

#define _CCP2CON2_OENSYNC_POSITION               0x0000001F
#define _CCP2CON2_OENSYNC_MASK                   0x80000000
#define _CCP2CON2_OENSYNC_LENGTH                 0x00000001

#define _CCP2CON3_DT_POSITION                    0x00000000
#define _CCP2CON3_DT_MASK                        0x0000003F
#define _CCP2CON3_DT_LENGTH                      0x00000006

#define _CCP2CON3_PSSBDF_POSITION                0x00000010
#define _CCP2CON3_PSSBDF_MASK                    0x00030000
#define _CCP2CON3_PSSBDF_LENGTH                  0x00000002

#define _CCP2CON3_PSSACE_POSITION                0x00000012
#define _CCP2CON3_PSSACE_MASK                    0x000C0000
#define _CCP2CON3_PSSACE_LENGTH                  0x00000002

#define _CCP2CON3_POLBDF_POSITION                0x00000014
#define _CCP2CON3_POLBDF_MASK                    0x00100000
#define _CCP2CON3_POLBDF_LENGTH                  0x00000001

#define _CCP2CON3_POLACE_POSITION                0x00000015
#define _CCP2CON3_POLACE_MASK                    0x00200000
#define _CCP2CON3_POLACE_LENGTH                  0x00000001

#define _CCP2CON3_OUTM_POSITION                  0x00000018
#define _CCP2CON3_OUTM_MASK                      0x07000000
#define _CCP2CON3_OUTM_LENGTH                    0x00000003

#define _CCP2CON3_OSCNT_POSITION                 0x0000001C
#define _CCP2CON3_OSCNT_MASK                     0x70000000
#define _CCP2CON3_OSCNT_LENGTH                   0x00000003

#define _CCP2CON3_OETRIG_POSITION                0x0000001F
#define _CCP2CON3_OETRIG_MASK                    0x80000000
#define _CCP2CON3_OETRIG_LENGTH                  0x00000001

#define _CCP2STAT_ICBNE_POSITION                 0x00000000
#define _CCP2STAT_ICBNE_MASK                     0x00000001
#define _CCP2STAT_ICBNE_LENGTH                   0x00000001

#define _CCP2STAT_ICOV_POSITION                  0x00000001
#define _CCP2STAT_ICOV_MASK                      0x00000002
#define _CCP2STAT_ICOV_LENGTH                    0x00000001

#define _CCP2STAT_ICDIS_POSITION                 0x00000002
#define _CCP2STAT_ICDIS_MASK                     0x00000004
#define _CCP2STAT_ICDIS_LENGTH                   0x00000001

#define _CCP2STAT_SCEVT_POSITION                 0x00000003
#define _CCP2STAT_SCEVT_MASK                     0x00000008
#define _CCP2STAT_SCEVT_LENGTH                   0x00000001

#define _CCP2STAT_ASEVT_POSITION                 0x00000004
#define _CCP2STAT_ASEVT_MASK                     0x00000010
#define _CCP2STAT_ASEVT_LENGTH                   0x00000001

#define _CCP2STAT_TRCLR_POSITION                 0x00000005
#define _CCP2STAT_TRCLR_MASK                     0x00000020
#define _CCP2STAT_TRCLR_LENGTH                   0x00000001

#define _CCP2STAT_TRSET_POSITION                 0x00000006
#define _CCP2STAT_TRSET_MASK                     0x00000040
#define _CCP2STAT_TRSET_LENGTH                   0x00000001

#define _CCP2STAT_CCPTRIG_POSITION               0x00000007
#define _CCP2STAT_CCPTRIG_MASK                   0x00000080
#define _CCP2STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP2STAT_ICGARM_POSITION                0x0000000A
#define _CCP2STAT_ICGARM_MASK                    0x00000400
#define _CCP2STAT_ICGARM_LENGTH                  0x00000001

#define _CCP2STAT_RAWIP_POSITION                 0x00000010
#define _CCP2STAT_RAWIP_MASK                     0x00010000
#define _CCP2STAT_RAWIP_LENGTH                   0x00000001

#define _CCP2STAT_RBWIP_POSITION                 0x00000011
#define _CCP2STAT_RBWIP_MASK                     0x00020000
#define _CCP2STAT_RBWIP_LENGTH                   0x00000001

#define _CCP2STAT_TMRLWIP_POSITION               0x00000012
#define _CCP2STAT_TMRLWIP_MASK                   0x00040000
#define _CCP2STAT_TMRLWIP_LENGTH                 0x00000001

#define _CCP2STAT_TMRHWIP_POSITION               0x00000013
#define _CCP2STAT_TMRHWIP_MASK                   0x00080000
#define _CCP2STAT_TMRHWIP_LENGTH                 0x00000001

#define _CCP2STAT_PRLWIP_POSITION                0x00000014
#define _CCP2STAT_PRLWIP_MASK                    0x00100000
#define _CCP2STAT_PRLWIP_LENGTH                  0x00000001

#define _CCP2TMR_TMRL_POSITION                   0x00000000
#define _CCP2TMR_TMRL_MASK                       0x0000FFFF
#define _CCP2TMR_TMRL_LENGTH                     0x00000010

#define _CCP2TMR_TMRH_POSITION                   0x00000010
#define _CCP2TMR_TMRH_MASK                       0xFFFF0000
#define _CCP2TMR_TMRH_LENGTH                     0x00000010

#define _CCP2TMR_TMR_POSITION                    0x00000000
#define _CCP2TMR_TMR_MASK                        0xFFFFFFFF
#define _CCP2TMR_TMR_LENGTH                      0x00000020

#define _CCP2PR_PRL_POSITION                     0x00000000
#define _CCP2PR_PRL_MASK                         0x0000FFFF
#define _CCP2PR_PRL_LENGTH                       0x00000010

#define _CCP2PR_PRH_POSITION                     0x00000010
#define _CCP2PR_PRH_MASK                         0xFFFF0000
#define _CCP2PR_PRH_LENGTH                       0x00000010

#define _CCP2PR_PR_POSITION                      0x00000000
#define _CCP2PR_PR_MASK                          0xFFFFFFFF
#define _CCP2PR_PR_LENGTH                        0x00000020

#define _CCP2RA_CMPA_POSITION                    0x00000000
#define _CCP2RA_CMPA_MASK                        0x0000FFFF
#define _CCP2RA_CMPA_LENGTH                      0x00000010

#define _CCP2RB_CMPB_POSITION                    0x00000000
#define _CCP2RB_CMPB_MASK                        0x0000FFFF
#define _CCP2RB_CMPB_LENGTH                      0x00000010

#define _CCP2BUF_BUFL_POSITION                   0x00000000
#define _CCP2BUF_BUFL_MASK                       0x0000FFFF
#define _CCP2BUF_BUFL_LENGTH                     0x00000010

#define _CCP2BUF_BUFH_POSITION                   0x00000010
#define _CCP2BUF_BUFH_MASK                       0xFFFF0000
#define _CCP2BUF_BUFH_LENGTH                     0x00000010

#define _CCP2BUF_BUF_POSITION                    0x00000000
#define _CCP2BUF_BUF_MASK                        0xFFFFFFFF
#define _CCP2BUF_BUF_LENGTH                      0x00000020

#define _CCP3CON1_MOD_POSITION                   0x00000000
#define _CCP3CON1_MOD_MASK                       0x0000000F
#define _CCP3CON1_MOD_LENGTH                     0x00000004

#define _CCP3CON1_CCSEL_POSITION                 0x00000004
#define _CCP3CON1_CCSEL_MASK                     0x00000010
#define _CCP3CON1_CCSEL_LENGTH                   0x00000001

#define _CCP3CON1_T32_POSITION                   0x00000005
#define _CCP3CON1_T32_MASK                       0x00000020
#define _CCP3CON1_T32_LENGTH                     0x00000001

#define _CCP3CON1_TMRPS_POSITION                 0x00000006
#define _CCP3CON1_TMRPS_MASK                     0x000000C0
#define _CCP3CON1_TMRPS_LENGTH                   0x00000002

#define _CCP3CON1_CLKSEL_POSITION                0x00000008
#define _CCP3CON1_CLKSEL_MASK                    0x00000700
#define _CCP3CON1_CLKSEL_LENGTH                  0x00000003

#define _CCP3CON1_TMRSYNC_POSITION               0x0000000B
#define _CCP3CON1_TMRSYNC_MASK                   0x00000800
#define _CCP3CON1_TMRSYNC_LENGTH                 0x00000001

#define _CCP3CON1_CCPSLP_POSITION                0x0000000C
#define _CCP3CON1_CCPSLP_MASK                    0x00001000
#define _CCP3CON1_CCPSLP_LENGTH                  0x00000001

#define _CCP3CON1_SIDL_POSITION                  0x0000000D
#define _CCP3CON1_SIDL_MASK                      0x00002000
#define _CCP3CON1_SIDL_LENGTH                    0x00000001

#define _CCP3CON1_ON_POSITION                    0x0000000F
#define _CCP3CON1_ON_MASK                        0x00008000
#define _CCP3CON1_ON_LENGTH                      0x00000001

#define _CCP3CON1_SYNC_POSITION                  0x00000010
#define _CCP3CON1_SYNC_MASK                      0x001F0000
#define _CCP3CON1_SYNC_LENGTH                    0x00000005

#define _CCP3CON1_ALTSYNC_POSITION               0x00000015
#define _CCP3CON1_ALTSYNC_MASK                   0x00200000
#define _CCP3CON1_ALTSYNC_LENGTH                 0x00000001

#define _CCP3CON1_ONESHOT_POSITION               0x00000016
#define _CCP3CON1_ONESHOT_MASK                   0x00400000
#define _CCP3CON1_ONESHOT_LENGTH                 0x00000001

#define _CCP3CON1_TRIGEN_POSITION                0x00000017
#define _CCP3CON1_TRIGEN_MASK                    0x00800000
#define _CCP3CON1_TRIGEN_LENGTH                  0x00000001

#define _CCP3CON1_OPS_POSITION                   0x00000018
#define _CCP3CON1_OPS_MASK                       0x0F000000
#define _CCP3CON1_OPS_LENGTH                     0x00000004

#define _CCP3CON1_RTRGEN_POSITION                0x0000001E
#define _CCP3CON1_RTRGEN_MASK                    0x40000000
#define _CCP3CON1_RTRGEN_LENGTH                  0x00000001

#define _CCP3CON1_OPSSRC_POSITION                0x0000001F
#define _CCP3CON1_OPSSRC_MASK                    0x80000000
#define _CCP3CON1_OPSSRC_LENGTH                  0x00000001

#define _CCP3CON2_ASDG_POSITION                  0x00000000
#define _CCP3CON2_ASDG_MASK                      0x000000FF
#define _CCP3CON2_ASDG_LENGTH                    0x00000008

#define _CCP3CON2_SSDG_POSITION                  0x0000000C
#define _CCP3CON2_SSDG_MASK                      0x00001000
#define _CCP3CON2_SSDG_LENGTH                    0x00000001

#define _CCP3CON2_ASDGM_POSITION                 0x0000000E
#define _CCP3CON2_ASDGM_MASK                     0x00004000
#define _CCP3CON2_ASDGM_LENGTH                   0x00000001

#define _CCP3CON2_PWMRSEN_POSITION               0x0000000F
#define _CCP3CON2_PWMRSEN_MASK                   0x00008000
#define _CCP3CON2_PWMRSEN_LENGTH                 0x00000001

#define _CCP3CON2_ICS_POSITION                   0x00000010
#define _CCP3CON2_ICS_MASK                       0x00070000
#define _CCP3CON2_ICS_LENGTH                     0x00000003

#define _CCP3CON2_AUXOUT_POSITION                0x00000013
#define _CCP3CON2_AUXOUT_MASK                    0x00180000
#define _CCP3CON2_AUXOUT_LENGTH                  0x00000002

#define _CCP3CON2_ICGSM_POSITION                 0x00000016
#define _CCP3CON2_ICGSM_MASK                     0x00C00000
#define _CCP3CON2_ICGSM_LENGTH                   0x00000002

#define _CCP3CON2_OCAEN_POSITION                 0x00000018
#define _CCP3CON2_OCAEN_MASK                     0x01000000
#define _CCP3CON2_OCAEN_LENGTH                   0x00000001

#define _CCP3CON2_OCBEN_POSITION                 0x00000019
#define _CCP3CON2_OCBEN_MASK                     0x02000000
#define _CCP3CON2_OCBEN_LENGTH                   0x00000001

#define _CCP3CON2_OCCEN_POSITION                 0x0000001A
#define _CCP3CON2_OCCEN_MASK                     0x04000000
#define _CCP3CON2_OCCEN_LENGTH                   0x00000001

#define _CCP3CON2_OCDEN_POSITION                 0x0000001B
#define _CCP3CON2_OCDEN_MASK                     0x08000000
#define _CCP3CON2_OCDEN_LENGTH                   0x00000001

#define _CCP3CON2_OCEEN_POSITION                 0x0000001C
#define _CCP3CON2_OCEEN_MASK                     0x10000000
#define _CCP3CON2_OCEEN_LENGTH                   0x00000001

#define _CCP3CON2_OCFEN_POSITION                 0x0000001D
#define _CCP3CON2_OCFEN_MASK                     0x20000000
#define _CCP3CON2_OCFEN_LENGTH                   0x00000001

#define _CCP3CON2_OENSYNC_POSITION               0x0000001F
#define _CCP3CON2_OENSYNC_MASK                   0x80000000
#define _CCP3CON2_OENSYNC_LENGTH                 0x00000001

#define _CCP3CON3_DT_POSITION                    0x00000000
#define _CCP3CON3_DT_MASK                        0x0000003F
#define _CCP3CON3_DT_LENGTH                      0x00000006

#define _CCP3CON3_PSSBDF_POSITION                0x00000010
#define _CCP3CON3_PSSBDF_MASK                    0x00030000
#define _CCP3CON3_PSSBDF_LENGTH                  0x00000002

#define _CCP3CON3_PSSACE_POSITION                0x00000012
#define _CCP3CON3_PSSACE_MASK                    0x000C0000
#define _CCP3CON3_PSSACE_LENGTH                  0x00000002

#define _CCP3CON3_POLBDF_POSITION                0x00000014
#define _CCP3CON3_POLBDF_MASK                    0x00100000
#define _CCP3CON3_POLBDF_LENGTH                  0x00000001

#define _CCP3CON3_POLACE_POSITION                0x00000015
#define _CCP3CON3_POLACE_MASK                    0x00200000
#define _CCP3CON3_POLACE_LENGTH                  0x00000001

#define _CCP3CON3_OUTM_POSITION                  0x00000018
#define _CCP3CON3_OUTM_MASK                      0x07000000
#define _CCP3CON3_OUTM_LENGTH                    0x00000003

#define _CCP3CON3_OSCNT_POSITION                 0x0000001C
#define _CCP3CON3_OSCNT_MASK                     0x70000000
#define _CCP3CON3_OSCNT_LENGTH                   0x00000003

#define _CCP3CON3_OETRIG_POSITION                0x0000001F
#define _CCP3CON3_OETRIG_MASK                    0x80000000
#define _CCP3CON3_OETRIG_LENGTH                  0x00000001

#define _CCP3STAT_ICBNE_POSITION                 0x00000000
#define _CCP3STAT_ICBNE_MASK                     0x00000001
#define _CCP3STAT_ICBNE_LENGTH                   0x00000001

#define _CCP3STAT_ICOV_POSITION                  0x00000001
#define _CCP3STAT_ICOV_MASK                      0x00000002
#define _CCP3STAT_ICOV_LENGTH                    0x00000001

#define _CCP3STAT_ICDIS_POSITION                 0x00000002
#define _CCP3STAT_ICDIS_MASK                     0x00000004
#define _CCP3STAT_ICDIS_LENGTH                   0x00000001

#define _CCP3STAT_SCEVT_POSITION                 0x00000003
#define _CCP3STAT_SCEVT_MASK                     0x00000008
#define _CCP3STAT_SCEVT_LENGTH                   0x00000001

#define _CCP3STAT_ASEVT_POSITION                 0x00000004
#define _CCP3STAT_ASEVT_MASK                     0x00000010
#define _CCP3STAT_ASEVT_LENGTH                   0x00000001

#define _CCP3STAT_TRCLR_POSITION                 0x00000005
#define _CCP3STAT_TRCLR_MASK                     0x00000020
#define _CCP3STAT_TRCLR_LENGTH                   0x00000001

#define _CCP3STAT_TRSET_POSITION                 0x00000006
#define _CCP3STAT_TRSET_MASK                     0x00000040
#define _CCP3STAT_TRSET_LENGTH                   0x00000001

#define _CCP3STAT_CCPTRIG_POSITION               0x00000007
#define _CCP3STAT_CCPTRIG_MASK                   0x00000080
#define _CCP3STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP3STAT_ICGARM_POSITION                0x0000000A
#define _CCP3STAT_ICGARM_MASK                    0x00000400
#define _CCP3STAT_ICGARM_LENGTH                  0x00000001

#define _CCP3STAT_RAWIP_POSITION                 0x00000010
#define _CCP3STAT_RAWIP_MASK                     0x00010000
#define _CCP3STAT_RAWIP_LENGTH                   0x00000001

#define _CCP3STAT_RBWIP_POSITION                 0x00000011
#define _CCP3STAT_RBWIP_MASK                     0x00020000
#define _CCP3STAT_RBWIP_LENGTH                   0x00000001

#define _CCP3STAT_TMRLWIP_POSITION               0x00000012
#define _CCP3STAT_TMRLWIP_MASK                   0x00040000
#define _CCP3STAT_TMRLWIP_LENGTH                 0x00000001

#define _CCP3STAT_TMRHWIP_POSITION               0x00000013
#define _CCP3STAT_TMRHWIP_MASK                   0x00080000
#define _CCP3STAT_TMRHWIP_LENGTH                 0x00000001

#define _CCP3STAT_PRLWIP_POSITION                0x00000014
#define _CCP3STAT_PRLWIP_MASK                    0x00100000
#define _CCP3STAT_PRLWIP_LENGTH                  0x00000001

#define _CCP3TMR_TMRL_POSITION                   0x00000000
#define _CCP3TMR_TMRL_MASK                       0x0000FFFF
#define _CCP3TMR_TMRL_LENGTH                     0x00000010

#define _CCP3TMR_TMRH_POSITION                   0x00000010
#define _CCP3TMR_TMRH_MASK                       0xFFFF0000
#define _CCP3TMR_TMRH_LENGTH                     0x00000010

#define _CCP3TMR_TMR_POSITION                    0x00000000
#define _CCP3TMR_TMR_MASK                        0xFFFFFFFF
#define _CCP3TMR_TMR_LENGTH                      0x00000020

#define _CCP3PR_PRL_POSITION                     0x00000000
#define _CCP3PR_PRL_MASK                         0x0000FFFF
#define _CCP3PR_PRL_LENGTH                       0x00000010

#define _CCP3PR_PRH_POSITION                     0x00000010
#define _CCP3PR_PRH_MASK                         0xFFFF0000
#define _CCP3PR_PRH_LENGTH                       0x00000010

#define _CCP3PR_PR_POSITION                      0x00000000
#define _CCP3PR_PR_MASK                          0xFFFFFFFF
#define _CCP3PR_PR_LENGTH                        0x00000020

#define _CCP3RA_CMPA_POSITION                    0x00000000
#define _CCP3RA_CMPA_MASK                        0x0000FFFF
#define _CCP3RA_CMPA_LENGTH                      0x00000010

#define _CCP3RB_CMPB_POSITION                    0x00000000
#define _CCP3RB_CMPB_MASK                        0x0000FFFF
#define _CCP3RB_CMPB_LENGTH                      0x00000010

#define _CCP3BUF_BUFL_POSITION                   0x00000000
#define _CCP3BUF_BUFL_MASK                       0x0000FFFF
#define _CCP3BUF_BUFL_LENGTH                     0x00000010

#define _CCP3BUF_BUFH_POSITION                   0x00000010
#define _CCP3BUF_BUFH_MASK                       0xFFFF0000
#define _CCP3BUF_BUFH_LENGTH                     0x00000010

#define _CCP3BUF_BUF_POSITION                    0x00000000
#define _CCP3BUF_BUF_MASK                        0xFFFFFFFF
#define _CCP3BUF_BUF_LENGTH                      0x00000020

#define _CCP4CON1_MOD_POSITION                   0x00000000
#define _CCP4CON1_MOD_MASK                       0x0000000F
#define _CCP4CON1_MOD_LENGTH                     0x00000004

#define _CCP4CON1_CCSEL_POSITION                 0x00000004
#define _CCP4CON1_CCSEL_MASK                     0x00000010
#define _CCP4CON1_CCSEL_LENGTH                   0x00000001

#define _CCP4CON1_T32_POSITION                   0x00000005
#define _CCP4CON1_T32_MASK                       0x00000020
#define _CCP4CON1_T32_LENGTH                     0x00000001

#define _CCP4CON1_TMRPS_POSITION                 0x00000006
#define _CCP4CON1_TMRPS_MASK                     0x000000C0
#define _CCP4CON1_TMRPS_LENGTH                   0x00000002

#define _CCP4CON1_CLKSEL_POSITION                0x00000008
#define _CCP4CON1_CLKSEL_MASK                    0x00000700
#define _CCP4CON1_CLKSEL_LENGTH                  0x00000003

#define _CCP4CON1_TMRSYNC_POSITION               0x0000000B
#define _CCP4CON1_TMRSYNC_MASK                   0x00000800
#define _CCP4CON1_TMRSYNC_LENGTH                 0x00000001

#define _CCP4CON1_CCPSLP_POSITION                0x0000000C
#define _CCP4CON1_CCPSLP_MASK                    0x00001000
#define _CCP4CON1_CCPSLP_LENGTH                  0x00000001

#define _CCP4CON1_SIDL_POSITION                  0x0000000D
#define _CCP4CON1_SIDL_MASK                      0x00002000
#define _CCP4CON1_SIDL_LENGTH                    0x00000001

#define _CCP4CON1_ON_POSITION                    0x0000000F
#define _CCP4CON1_ON_MASK                        0x00008000
#define _CCP4CON1_ON_LENGTH                      0x00000001

#define _CCP4CON1_SYNC_POSITION                  0x00000010
#define _CCP4CON1_SYNC_MASK                      0x001F0000
#define _CCP4CON1_SYNC_LENGTH                    0x00000005

#define _CCP4CON1_ALTSYNC_POSITION               0x00000015
#define _CCP4CON1_ALTSYNC_MASK                   0x00200000
#define _CCP4CON1_ALTSYNC_LENGTH                 0x00000001

#define _CCP4CON1_ONESHOT_POSITION               0x00000016
#define _CCP4CON1_ONESHOT_MASK                   0x00400000
#define _CCP4CON1_ONESHOT_LENGTH                 0x00000001

#define _CCP4CON1_TRIGEN_POSITION                0x00000017
#define _CCP4CON1_TRIGEN_MASK                    0x00800000
#define _CCP4CON1_TRIGEN_LENGTH                  0x00000001

#define _CCP4CON1_OPS_POSITION                   0x00000018
#define _CCP4CON1_OPS_MASK                       0x0F000000
#define _CCP4CON1_OPS_LENGTH                     0x00000004

#define _CCP4CON1_RTRGEN_POSITION                0x0000001E
#define _CCP4CON1_RTRGEN_MASK                    0x40000000
#define _CCP4CON1_RTRGEN_LENGTH                  0x00000001

#define _CCP4CON1_OPSSRC_POSITION                0x0000001F
#define _CCP4CON1_OPSSRC_MASK                    0x80000000
#define _CCP4CON1_OPSSRC_LENGTH                  0x00000001

#define _CCP4CON2_ASDG_POSITION                  0x00000000
#define _CCP4CON2_ASDG_MASK                      0x000000FF
#define _CCP4CON2_ASDG_LENGTH                    0x00000008

#define _CCP4CON2_SSDG_POSITION                  0x0000000C
#define _CCP4CON2_SSDG_MASK                      0x00001000
#define _CCP4CON2_SSDG_LENGTH                    0x00000001

#define _CCP4CON2_ASDGM_POSITION                 0x0000000E
#define _CCP4CON2_ASDGM_MASK                     0x00004000
#define _CCP4CON2_ASDGM_LENGTH                   0x00000001

#define _CCP4CON2_PWMRSEN_POSITION               0x0000000F
#define _CCP4CON2_PWMRSEN_MASK                   0x00008000
#define _CCP4CON2_PWMRSEN_LENGTH                 0x00000001

#define _CCP4CON2_ICS_POSITION                   0x00000010
#define _CCP4CON2_ICS_MASK                       0x00070000
#define _CCP4CON2_ICS_LENGTH                     0x00000003

#define _CCP4CON2_AUXOUT_POSITION                0x00000013
#define _CCP4CON2_AUXOUT_MASK                    0x00180000
#define _CCP4CON2_AUXOUT_LENGTH                  0x00000002

#define _CCP4CON2_ICGSM_POSITION                 0x00000016
#define _CCP4CON2_ICGSM_MASK                     0x00C00000
#define _CCP4CON2_ICGSM_LENGTH                   0x00000002

#define _CCP4CON2_OCAEN_POSITION                 0x00000018
#define _CCP4CON2_OCAEN_MASK                     0x01000000
#define _CCP4CON2_OCAEN_LENGTH                   0x00000001

#define _CCP4CON2_OENSYNC_POSITION               0x0000001F
#define _CCP4CON2_OENSYNC_MASK                   0x80000000
#define _CCP4CON2_OENSYNC_LENGTH                 0x00000001

#define _CCP4CON3_PSSACE_POSITION                0x00000012
#define _CCP4CON3_PSSACE_MASK                    0x000C0000
#define _CCP4CON3_PSSACE_LENGTH                  0x00000002

#define _CCP4CON3_POLACE_POSITION                0x00000015
#define _CCP4CON3_POLACE_MASK                    0x00200000
#define _CCP4CON3_POLACE_LENGTH                  0x00000001

#define _CCP4CON3_OSCNT_POSITION                 0x0000001C
#define _CCP4CON3_OSCNT_MASK                     0x70000000
#define _CCP4CON3_OSCNT_LENGTH                   0x00000003

#define _CCP4CON3_OETRIG_POSITION                0x0000001F
#define _CCP4CON3_OETRIG_MASK                    0x80000000
#define _CCP4CON3_OETRIG_LENGTH                  0x00000001

#define _CCP4STAT_ICBNE_POSITION                 0x00000000
#define _CCP4STAT_ICBNE_MASK                     0x00000001
#define _CCP4STAT_ICBNE_LENGTH                   0x00000001

#define _CCP4STAT_ICOV_POSITION                  0x00000001
#define _CCP4STAT_ICOV_MASK                      0x00000002
#define _CCP4STAT_ICOV_LENGTH                    0x00000001

#define _CCP4STAT_ICDIS_POSITION                 0x00000002
#define _CCP4STAT_ICDIS_MASK                     0x00000004
#define _CCP4STAT_ICDIS_LENGTH                   0x00000001

#define _CCP4STAT_SCEVT_POSITION                 0x00000003
#define _CCP4STAT_SCEVT_MASK                     0x00000008
#define _CCP4STAT_SCEVT_LENGTH                   0x00000001

#define _CCP4STAT_ASEVT_POSITION                 0x00000004
#define _CCP4STAT_ASEVT_MASK                     0x00000010
#define _CCP4STAT_ASEVT_LENGTH                   0x00000001

#define _CCP4STAT_TRCLR_POSITION                 0x00000005
#define _CCP4STAT_TRCLR_MASK                     0x00000020
#define _CCP4STAT_TRCLR_LENGTH                   0x00000001

#define _CCP4STAT_TRSET_POSITION                 0x00000006
#define _CCP4STAT_TRSET_MASK                     0x00000040
#define _CCP4STAT_TRSET_LENGTH                   0x00000001

#define _CCP4STAT_CCPTRIG_POSITION               0x00000007
#define _CCP4STAT_CCPTRIG_MASK                   0x00000080
#define _CCP4STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP4STAT_ICGARM_POSITION                0x0000000A
#define _CCP4STAT_ICGARM_MASK                    0x00000400
#define _CCP4STAT_ICGARM_LENGTH                  0x00000001

#define _CCP4STAT_RAWIP_POSITION                 0x00000010
#define _CCP4STAT_RAWIP_MASK                     0x00010000
#define _CCP4STAT_RAWIP_LENGTH                   0x00000001

#define _CCP4STAT_RBWIP_POSITION                 0x00000011
#define _CCP4STAT_RBWIP_MASK                     0x00020000
#define _CCP4STAT_RBWIP_LENGTH                   0x00000001

#define _CCP4STAT_TMRLWIP_POSITION               0x00000012
#define _CCP4STAT_TMRLWIP_MASK                   0x00040000
#define _CCP4STAT_TMRLWIP_LENGTH                 0x00000001

#define _CCP4STAT_TMRHWIP_POSITION               0x00000013
#define _CCP4STAT_TMRHWIP_MASK                   0x00080000
#define _CCP4STAT_TMRHWIP_LENGTH                 0x00000001

#define _CCP4STAT_PRLWIP_POSITION                0x00000014
#define _CCP4STAT_PRLWIP_MASK                    0x00100000
#define _CCP4STAT_PRLWIP_LENGTH                  0x00000001

#define _CCP4TMR_TMRL_POSITION                   0x00000000
#define _CCP4TMR_TMRL_MASK                       0x0000FFFF
#define _CCP4TMR_TMRL_LENGTH                     0x00000010

#define _CCP4TMR_TMRH_POSITION                   0x00000010
#define _CCP4TMR_TMRH_MASK                       0xFFFF0000
#define _CCP4TMR_TMRH_LENGTH                     0x00000010

#define _CCP4TMR_TMR_POSITION                    0x00000000
#define _CCP4TMR_TMR_MASK                        0xFFFFFFFF
#define _CCP4TMR_TMR_LENGTH                      0x00000020

#define _CCP4PR_PRL_POSITION                     0x00000000
#define _CCP4PR_PRL_MASK                         0x0000FFFF
#define _CCP4PR_PRL_LENGTH                       0x00000010

#define _CCP4PR_PRH_POSITION                     0x00000010
#define _CCP4PR_PRH_MASK                         0xFFFF0000
#define _CCP4PR_PRH_LENGTH                       0x00000010

#define _CCP4PR_PR_POSITION                      0x00000000
#define _CCP4PR_PR_MASK                          0xFFFFFFFF
#define _CCP4PR_PR_LENGTH                        0x00000020

#define _CCP4RA_CMPA_POSITION                    0x00000000
#define _CCP4RA_CMPA_MASK                        0x0000FFFF
#define _CCP4RA_CMPA_LENGTH                      0x00000010

#define _CCP4RB_CMPB_POSITION                    0x00000000
#define _CCP4RB_CMPB_MASK                        0x0000FFFF
#define _CCP4RB_CMPB_LENGTH                      0x00000010

#define _CCP4BUF_BUFL_POSITION                   0x00000000
#define _CCP4BUF_BUFL_MASK                       0x0000FFFF
#define _CCP4BUF_BUFL_LENGTH                     0x00000010

#define _CCP4BUF_BUFH_POSITION                   0x00000010
#define _CCP4BUF_BUFH_MASK                       0xFFFF0000
#define _CCP4BUF_BUFH_LENGTH                     0x00000010

#define _CCP4BUF_BUF_POSITION                    0x00000000
#define _CCP4BUF_BUF_MASK                        0xFFFFFFFF
#define _CCP4BUF_BUF_LENGTH                      0x00000020

#define _CCP5CON1_MOD_POSITION                   0x00000000
#define _CCP5CON1_MOD_MASK                       0x0000000F
#define _CCP5CON1_MOD_LENGTH                     0x00000004

#define _CCP5CON1_CCSEL_POSITION                 0x00000004
#define _CCP5CON1_CCSEL_MASK                     0x00000010
#define _CCP5CON1_CCSEL_LENGTH                   0x00000001

#define _CCP5CON1_T32_POSITION                   0x00000005
#define _CCP5CON1_T32_MASK                       0x00000020
#define _CCP5CON1_T32_LENGTH                     0x00000001

#define _CCP5CON1_TMRPS_POSITION                 0x00000006
#define _CCP5CON1_TMRPS_MASK                     0x000000C0
#define _CCP5CON1_TMRPS_LENGTH                   0x00000002

#define _CCP5CON1_CLKSEL_POSITION                0x00000008
#define _CCP5CON1_CLKSEL_MASK                    0x00000700
#define _CCP5CON1_CLKSEL_LENGTH                  0x00000003

#define _CCP5CON1_TMRSYNC_POSITION               0x0000000B
#define _CCP5CON1_TMRSYNC_MASK                   0x00000800
#define _CCP5CON1_TMRSYNC_LENGTH                 0x00000001

#define _CCP5CON1_CCPSLP_POSITION                0x0000000C
#define _CCP5CON1_CCPSLP_MASK                    0x00001000
#define _CCP5CON1_CCPSLP_LENGTH                  0x00000001

#define _CCP5CON1_SIDL_POSITION                  0x0000000D
#define _CCP5CON1_SIDL_MASK                      0x00002000
#define _CCP5CON1_SIDL_LENGTH                    0x00000001

#define _CCP5CON1_ON_POSITION                    0x0000000F
#define _CCP5CON1_ON_MASK                        0x00008000
#define _CCP5CON1_ON_LENGTH                      0x00000001

#define _CCP5CON1_SYNC_POSITION                  0x00000010
#define _CCP5CON1_SYNC_MASK                      0x001F0000
#define _CCP5CON1_SYNC_LENGTH                    0x00000005

#define _CCP5CON1_ALTSYNC_POSITION               0x00000015
#define _CCP5CON1_ALTSYNC_MASK                   0x00200000
#define _CCP5CON1_ALTSYNC_LENGTH                 0x00000001

#define _CCP5CON1_ONESHOT_POSITION               0x00000016
#define _CCP5CON1_ONESHOT_MASK                   0x00400000
#define _CCP5CON1_ONESHOT_LENGTH                 0x00000001

#define _CCP5CON1_TRIGEN_POSITION                0x00000017
#define _CCP5CON1_TRIGEN_MASK                    0x00800000
#define _CCP5CON1_TRIGEN_LENGTH                  0x00000001

#define _CCP5CON1_OPS_POSITION                   0x00000018
#define _CCP5CON1_OPS_MASK                       0x0F000000
#define _CCP5CON1_OPS_LENGTH                     0x00000004

#define _CCP5CON1_RTRGEN_POSITION                0x0000001E
#define _CCP5CON1_RTRGEN_MASK                    0x40000000
#define _CCP5CON1_RTRGEN_LENGTH                  0x00000001

#define _CCP5CON1_OPSSRC_POSITION                0x0000001F
#define _CCP5CON1_OPSSRC_MASK                    0x80000000
#define _CCP5CON1_OPSSRC_LENGTH                  0x00000001

#define _CCP5CON2_ASDG_POSITION                  0x00000000
#define _CCP5CON2_ASDG_MASK                      0x000000FF
#define _CCP5CON2_ASDG_LENGTH                    0x00000008

#define _CCP5CON2_SSDG_POSITION                  0x0000000C
#define _CCP5CON2_SSDG_MASK                      0x00001000
#define _CCP5CON2_SSDG_LENGTH                    0x00000001

#define _CCP5CON2_ASDGM_POSITION                 0x0000000E
#define _CCP5CON2_ASDGM_MASK                     0x00004000
#define _CCP5CON2_ASDGM_LENGTH                   0x00000001

#define _CCP5CON2_PWMRSEN_POSITION               0x0000000F
#define _CCP5CON2_PWMRSEN_MASK                   0x00008000
#define _CCP5CON2_PWMRSEN_LENGTH                 0x00000001

#define _CCP5CON2_ICS_POSITION                   0x00000010
#define _CCP5CON2_ICS_MASK                       0x00070000
#define _CCP5CON2_ICS_LENGTH                     0x00000003

#define _CCP5CON2_AUXOUT_POSITION                0x00000013
#define _CCP5CON2_AUXOUT_MASK                    0x00180000
#define _CCP5CON2_AUXOUT_LENGTH                  0x00000002

#define _CCP5CON2_ICGSM_POSITION                 0x00000016
#define _CCP5CON2_ICGSM_MASK                     0x00C00000
#define _CCP5CON2_ICGSM_LENGTH                   0x00000002

#define _CCP5CON2_OCAEN_POSITION                 0x00000018
#define _CCP5CON2_OCAEN_MASK                     0x01000000
#define _CCP5CON2_OCAEN_LENGTH                   0x00000001

#define _CCP5CON2_OENSYNC_POSITION               0x0000001F
#define _CCP5CON2_OENSYNC_MASK                   0x80000000
#define _CCP5CON2_OENSYNC_LENGTH                 0x00000001

#define _CCP5CON3_PSSACE_POSITION                0x00000012
#define _CCP5CON3_PSSACE_MASK                    0x000C0000
#define _CCP5CON3_PSSACE_LENGTH                  0x00000002

#define _CCP5CON3_POLACE_POSITION                0x00000015
#define _CCP5CON3_POLACE_MASK                    0x00200000
#define _CCP5CON3_POLACE_LENGTH                  0x00000001

#define _CCP5CON3_OSCNT_POSITION                 0x0000001C
#define _CCP5CON3_OSCNT_MASK                     0x70000000
#define _CCP5CON3_OSCNT_LENGTH                   0x00000003

#define _CCP5CON3_OETRIG_POSITION                0x0000001F
#define _CCP5CON3_OETRIG_MASK                    0x80000000
#define _CCP5CON3_OETRIG_LENGTH                  0x00000001

#define _CCP5STAT_ICBNE_POSITION                 0x00000000
#define _CCP5STAT_ICBNE_MASK                     0x00000001
#define _CCP5STAT_ICBNE_LENGTH                   0x00000001

#define _CCP5STAT_ICOV_POSITION                  0x00000001
#define _CCP5STAT_ICOV_MASK                      0x00000002
#define _CCP5STAT_ICOV_LENGTH                    0x00000001

#define _CCP5STAT_ICDIS_POSITION                 0x00000002
#define _CCP5STAT_ICDIS_MASK                     0x00000004
#define _CCP5STAT_ICDIS_LENGTH                   0x00000001

#define _CCP5STAT_SCEVT_POSITION                 0x00000003
#define _CCP5STAT_SCEVT_MASK                     0x00000008
#define _CCP5STAT_SCEVT_LENGTH                   0x00000001

#define _CCP5STAT_ASEVT_POSITION                 0x00000004
#define _CCP5STAT_ASEVT_MASK                     0x00000010
#define _CCP5STAT_ASEVT_LENGTH                   0x00000001

#define _CCP5STAT_TRCLR_POSITION                 0x00000005
#define _CCP5STAT_TRCLR_MASK                     0x00000020
#define _CCP5STAT_TRCLR_LENGTH                   0x00000001

#define _CCP5STAT_TRSET_POSITION                 0x00000006
#define _CCP5STAT_TRSET_MASK                     0x00000040
#define _CCP5STAT_TRSET_LENGTH                   0x00000001

#define _CCP5STAT_CCPTRIG_POSITION               0x00000007
#define _CCP5STAT_CCPTRIG_MASK                   0x00000080
#define _CCP5STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP5STAT_ICGARM_POSITION                0x0000000A
#define _CCP5STAT_ICGARM_MASK                    0x00000400
#define _CCP5STAT_ICGARM_LENGTH                  0x00000001

#define _CCP5STAT_RAWIP_POSITION                 0x00000010
#define _CCP5STAT_RAWIP_MASK                     0x00010000
#define _CCP5STAT_RAWIP_LENGTH                   0x00000001

#define _CCP5STAT_RBWIP_POSITION                 0x00000011
#define _CCP5STAT_RBWIP_MASK                     0x00020000
#define _CCP5STAT_RBWIP_LENGTH                   0x00000001

#define _CCP5STAT_TMRLWIP_POSITION               0x00000012
#define _CCP5STAT_TMRLWIP_MASK                   0x00040000
#define _CCP5STAT_TMRLWIP_LENGTH                 0x00000001

#define _CCP5STAT_TMRHWIP_POSITION               0x00000013
#define _CCP5STAT_TMRHWIP_MASK                   0x00080000
#define _CCP5STAT_TMRHWIP_LENGTH                 0x00000001

#define _CCP5STAT_PRLWIP_POSITION                0x00000014
#define _CCP5STAT_PRLWIP_MASK                    0x00100000
#define _CCP5STAT_PRLWIP_LENGTH                  0x00000001

#define _CCP5TMR_TMRL_POSITION                   0x00000000
#define _CCP5TMR_TMRL_MASK                       0x0000FFFF
#define _CCP5TMR_TMRL_LENGTH                     0x00000010

#define _CCP5TMR_TMRH_POSITION                   0x00000010
#define _CCP5TMR_TMRH_MASK                       0xFFFF0000
#define _CCP5TMR_TMRH_LENGTH                     0x00000010

#define _CCP5TMR_TMR_POSITION                    0x00000000
#define _CCP5TMR_TMR_MASK                        0xFFFFFFFF
#define _CCP5TMR_TMR_LENGTH                      0x00000020

#define _CCP5PR_PRL_POSITION                     0x00000000
#define _CCP5PR_PRL_MASK                         0x0000FFFF
#define _CCP5PR_PRL_LENGTH                       0x00000010

#define _CCP5PR_PRH_POSITION                     0x00000010
#define _CCP5PR_PRH_MASK                         0xFFFF0000
#define _CCP5PR_PRH_LENGTH                       0x00000010

#define _CCP5PR_PR_POSITION                      0x00000000
#define _CCP5PR_PR_MASK                          0xFFFFFFFF
#define _CCP5PR_PR_LENGTH                        0x00000020

#define _CCP5RA_CMPA_POSITION                    0x00000000
#define _CCP5RA_CMPA_MASK                        0x0000FFFF
#define _CCP5RA_CMPA_LENGTH                      0x00000010

#define _CCP5RB_CMPB_POSITION                    0x00000000
#define _CCP5RB_CMPB_MASK                        0x0000FFFF
#define _CCP5RB_CMPB_LENGTH                      0x00000010

#define _CCP5BUF_BUFL_POSITION                   0x00000000
#define _CCP5BUF_BUFL_MASK                       0x0000FFFF
#define _CCP5BUF_BUFL_LENGTH                     0x00000010

#define _CCP5BUF_BUFH_POSITION                   0x00000010
#define _CCP5BUF_BUFH_MASK                       0xFFFF0000
#define _CCP5BUF_BUFH_LENGTH                     0x00000010

#define _CCP5BUF_BUF_POSITION                    0x00000000
#define _CCP5BUF_BUF_MASK                        0xFFFFFFFF
#define _CCP5BUF_BUF_LENGTH                      0x00000020

#define _CCP6CON1_MOD_POSITION                   0x00000000
#define _CCP6CON1_MOD_MASK                       0x0000000F
#define _CCP6CON1_MOD_LENGTH                     0x00000004

#define _CCP6CON1_CCSEL_POSITION                 0x00000004
#define _CCP6CON1_CCSEL_MASK                     0x00000010
#define _CCP6CON1_CCSEL_LENGTH                   0x00000001

#define _CCP6CON1_T32_POSITION                   0x00000005
#define _CCP6CON1_T32_MASK                       0x00000020
#define _CCP6CON1_T32_LENGTH                     0x00000001

#define _CCP6CON1_TMRPS_POSITION                 0x00000006
#define _CCP6CON1_TMRPS_MASK                     0x000000C0
#define _CCP6CON1_TMRPS_LENGTH                   0x00000002

#define _CCP6CON1_CLKSEL_POSITION                0x00000008
#define _CCP6CON1_CLKSEL_MASK                    0x00000700
#define _CCP6CON1_CLKSEL_LENGTH                  0x00000003

#define _CCP6CON1_TMRSYNC_POSITION               0x0000000B
#define _CCP6CON1_TMRSYNC_MASK                   0x00000800
#define _CCP6CON1_TMRSYNC_LENGTH                 0x00000001

#define _CCP6CON1_CCPSLP_POSITION                0x0000000C
#define _CCP6CON1_CCPSLP_MASK                    0x00001000
#define _CCP6CON1_CCPSLP_LENGTH                  0x00000001

#define _CCP6CON1_SIDL_POSITION                  0x0000000D
#define _CCP6CON1_SIDL_MASK                      0x00002000
#define _CCP6CON1_SIDL_LENGTH                    0x00000001

#define _CCP6CON1_ON_POSITION                    0x0000000F
#define _CCP6CON1_ON_MASK                        0x00008000
#define _CCP6CON1_ON_LENGTH                      0x00000001

#define _CCP6CON1_SYNC_POSITION                  0x00000010
#define _CCP6CON1_SYNC_MASK                      0x001F0000
#define _CCP6CON1_SYNC_LENGTH                    0x00000005

#define _CCP6CON1_ALTSYNC_POSITION               0x00000015
#define _CCP6CON1_ALTSYNC_MASK                   0x00200000
#define _CCP6CON1_ALTSYNC_LENGTH                 0x00000001

#define _CCP6CON1_ONESHOT_POSITION               0x00000016
#define _CCP6CON1_ONESHOT_MASK                   0x00400000
#define _CCP6CON1_ONESHOT_LENGTH                 0x00000001

#define _CCP6CON1_TRIGEN_POSITION                0x00000017
#define _CCP6CON1_TRIGEN_MASK                    0x00800000
#define _CCP6CON1_TRIGEN_LENGTH                  0x00000001

#define _CCP6CON1_OPS_POSITION                   0x00000018
#define _CCP6CON1_OPS_MASK                       0x0F000000
#define _CCP6CON1_OPS_LENGTH                     0x00000004

#define _CCP6CON1_RTRGEN_POSITION                0x0000001E
#define _CCP6CON1_RTRGEN_MASK                    0x40000000
#define _CCP6CON1_RTRGEN_LENGTH                  0x00000001

#define _CCP6CON1_OPSSRC_POSITION                0x0000001F
#define _CCP6CON1_OPSSRC_MASK                    0x80000000
#define _CCP6CON1_OPSSRC_LENGTH                  0x00000001

#define _CCP6CON2_ASDG_POSITION                  0x00000000
#define _CCP6CON2_ASDG_MASK                      0x000000FF
#define _CCP6CON2_ASDG_LENGTH                    0x00000008

#define _CCP6CON2_SSDG_POSITION                  0x0000000C
#define _CCP6CON2_SSDG_MASK                      0x00001000
#define _CCP6CON2_SSDG_LENGTH                    0x00000001

#define _CCP6CON2_ASDGM_POSITION                 0x0000000E
#define _CCP6CON2_ASDGM_MASK                     0x00004000
#define _CCP6CON2_ASDGM_LENGTH                   0x00000001

#define _CCP6CON2_PWMRSEN_POSITION               0x0000000F
#define _CCP6CON2_PWMRSEN_MASK                   0x00008000
#define _CCP6CON2_PWMRSEN_LENGTH                 0x00000001

#define _CCP6CON2_ICS_POSITION                   0x00000010
#define _CCP6CON2_ICS_MASK                       0x00070000
#define _CCP6CON2_ICS_LENGTH                     0x00000003

#define _CCP6CON2_AUXOUT_POSITION                0x00000013
#define _CCP6CON2_AUXOUT_MASK                    0x00180000
#define _CCP6CON2_AUXOUT_LENGTH                  0x00000002

#define _CCP6CON2_ICGSM_POSITION                 0x00000016
#define _CCP6CON2_ICGSM_MASK                     0x00C00000
#define _CCP6CON2_ICGSM_LENGTH                   0x00000002

#define _CCP6CON2_OCAEN_POSITION                 0x00000018
#define _CCP6CON2_OCAEN_MASK                     0x01000000
#define _CCP6CON2_OCAEN_LENGTH                   0x00000001

#define _CCP6CON2_OENSYNC_POSITION               0x0000001F
#define _CCP6CON2_OENSYNC_MASK                   0x80000000
#define _CCP6CON2_OENSYNC_LENGTH                 0x00000001

#define _CCP6CON3_PSSACE_POSITION                0x00000012
#define _CCP6CON3_PSSACE_MASK                    0x000C0000
#define _CCP6CON3_PSSACE_LENGTH                  0x00000002

#define _CCP6CON3_POLACE_POSITION                0x00000015
#define _CCP6CON3_POLACE_MASK                    0x00200000
#define _CCP6CON3_POLACE_LENGTH                  0x00000001

#define _CCP6CON3_OSCNT_POSITION                 0x0000001C
#define _CCP6CON3_OSCNT_MASK                     0x70000000
#define _CCP6CON3_OSCNT_LENGTH                   0x00000003

#define _CCP6CON3_OETRIG_POSITION                0x0000001F
#define _CCP6CON3_OETRIG_MASK                    0x80000000
#define _CCP6CON3_OETRIG_LENGTH                  0x00000001

#define _CCP6STAT_ICBNE_POSITION                 0x00000000
#define _CCP6STAT_ICBNE_MASK                     0x00000001
#define _CCP6STAT_ICBNE_LENGTH                   0x00000001

#define _CCP6STAT_ICOV_POSITION                  0x00000001
#define _CCP6STAT_ICOV_MASK                      0x00000002
#define _CCP6STAT_ICOV_LENGTH                    0x00000001

#define _CCP6STAT_ICDIS_POSITION                 0x00000002
#define _CCP6STAT_ICDIS_MASK                     0x00000004
#define _CCP6STAT_ICDIS_LENGTH                   0x00000001

#define _CCP6STAT_SCEVT_POSITION                 0x00000003
#define _CCP6STAT_SCEVT_MASK                     0x00000008
#define _CCP6STAT_SCEVT_LENGTH                   0x00000001

#define _CCP6STAT_ASEVT_POSITION                 0x00000004
#define _CCP6STAT_ASEVT_MASK                     0x00000010
#define _CCP6STAT_ASEVT_LENGTH                   0x00000001

#define _CCP6STAT_TRCLR_POSITION                 0x00000005
#define _CCP6STAT_TRCLR_MASK                     0x00000020
#define _CCP6STAT_TRCLR_LENGTH                   0x00000001

#define _CCP6STAT_TRSET_POSITION                 0x00000006
#define _CCP6STAT_TRSET_MASK                     0x00000040
#define _CCP6STAT_TRSET_LENGTH                   0x00000001

#define _CCP6STAT_CCPTRIG_POSITION               0x00000007
#define _CCP6STAT_CCPTRIG_MASK                   0x00000080
#define _CCP6STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP6STAT_ICGARM_POSITION                0x0000000A
#define _CCP6STAT_ICGARM_MASK                    0x00000400
#define _CCP6STAT_ICGARM_LENGTH                  0x00000001

#define _CCP6STAT_RAWIP_POSITION                 0x00000010
#define _CCP6STAT_RAWIP_MASK                     0x00010000
#define _CCP6STAT_RAWIP_LENGTH                   0x00000001

#define _CCP6STAT_RBWIP_POSITION                 0x00000011
#define _CCP6STAT_RBWIP_MASK                     0x00020000
#define _CCP6STAT_RBWIP_LENGTH                   0x00000001

#define _CCP6STAT_TMRLWIP_POSITION               0x00000012
#define _CCP6STAT_TMRLWIP_MASK                   0x00040000
#define _CCP6STAT_TMRLWIP_LENGTH                 0x00000001

#define _CCP6STAT_TMRHWIP_POSITION               0x00000013
#define _CCP6STAT_TMRHWIP_MASK                   0x00080000
#define _CCP6STAT_TMRHWIP_LENGTH                 0x00000001

#define _CCP6STAT_PRLWIP_POSITION                0x00000014
#define _CCP6STAT_PRLWIP_MASK                    0x00100000
#define _CCP6STAT_PRLWIP_LENGTH                  0x00000001

#define _CCP6TMR_TMRL_POSITION                   0x00000000
#define _CCP6TMR_TMRL_MASK                       0x0000FFFF
#define _CCP6TMR_TMRL_LENGTH                     0x00000010

#define _CCP6TMR_TMRH_POSITION                   0x00000010
#define _CCP6TMR_TMRH_MASK                       0xFFFF0000
#define _CCP6TMR_TMRH_LENGTH                     0x00000010

#define _CCP6TMR_TMR_POSITION                    0x00000000
#define _CCP6TMR_TMR_MASK                        0xFFFFFFFF
#define _CCP6TMR_TMR_LENGTH                      0x00000020

#define _CCP6PR_PRL_POSITION                     0x00000000
#define _CCP6PR_PRL_MASK                         0x0000FFFF
#define _CCP6PR_PRL_LENGTH                       0x00000010

#define _CCP6PR_PRH_POSITION                     0x00000010
#define _CCP6PR_PRH_MASK                         0xFFFF0000
#define _CCP6PR_PRH_LENGTH                       0x00000010

#define _CCP6PR_PR_POSITION                      0x00000000
#define _CCP6PR_PR_MASK                          0xFFFFFFFF
#define _CCP6PR_PR_LENGTH                        0x00000020

#define _CCP6RA_CMPA_POSITION                    0x00000000
#define _CCP6RA_CMPA_MASK                        0x0000FFFF
#define _CCP6RA_CMPA_LENGTH                      0x00000010

#define _CCP6RB_CMPB_POSITION                    0x00000000
#define _CCP6RB_CMPB_MASK                        0x0000FFFF
#define _CCP6RB_CMPB_LENGTH                      0x00000010

#define _CCP6BUF_BUFL_POSITION                   0x00000000
#define _CCP6BUF_BUFL_MASK                       0x0000FFFF
#define _CCP6BUF_BUFL_LENGTH                     0x00000010

#define _CCP6BUF_BUFH_POSITION                   0x00000010
#define _CCP6BUF_BUFH_MASK                       0xFFFF0000
#define _CCP6BUF_BUFH_LENGTH                     0x00000010

#define _CCP6BUF_BUF_POSITION                    0x00000000
#define _CCP6BUF_BUF_MASK                        0xFFFFFFFF
#define _CCP6BUF_BUF_LENGTH                      0x00000020

#define _CCP7CON1_MOD_POSITION                   0x00000000
#define _CCP7CON1_MOD_MASK                       0x0000000F
#define _CCP7CON1_MOD_LENGTH                     0x00000004

#define _CCP7CON1_CCSEL_POSITION                 0x00000004
#define _CCP7CON1_CCSEL_MASK                     0x00000010
#define _CCP7CON1_CCSEL_LENGTH                   0x00000001

#define _CCP7CON1_T32_POSITION                   0x00000005
#define _CCP7CON1_T32_MASK                       0x00000020
#define _CCP7CON1_T32_LENGTH                     0x00000001

#define _CCP7CON1_TMRPS_POSITION                 0x00000006
#define _CCP7CON1_TMRPS_MASK                     0x000000C0
#define _CCP7CON1_TMRPS_LENGTH                   0x00000002

#define _CCP7CON1_CLKSEL_POSITION                0x00000008
#define _CCP7CON1_CLKSEL_MASK                    0x00000700
#define _CCP7CON1_CLKSEL_LENGTH                  0x00000003

#define _CCP7CON1_TMRSYNC_POSITION               0x0000000B
#define _CCP7CON1_TMRSYNC_MASK                   0x00000800
#define _CCP7CON1_TMRSYNC_LENGTH                 0x00000001

#define _CCP7CON1_CCPSLP_POSITION                0x0000000C
#define _CCP7CON1_CCPSLP_MASK                    0x00001000
#define _CCP7CON1_CCPSLP_LENGTH                  0x00000001

#define _CCP7CON1_SIDL_POSITION                  0x0000000D
#define _CCP7CON1_SIDL_MASK                      0x00002000
#define _CCP7CON1_SIDL_LENGTH                    0x00000001

#define _CCP7CON1_ON_POSITION                    0x0000000F
#define _CCP7CON1_ON_MASK                        0x00008000
#define _CCP7CON1_ON_LENGTH                      0x00000001

#define _CCP7CON1_SYNC_POSITION                  0x00000010
#define _CCP7CON1_SYNC_MASK                      0x001F0000
#define _CCP7CON1_SYNC_LENGTH                    0x00000005

#define _CCP7CON1_ALTSYNC_POSITION               0x00000015
#define _CCP7CON1_ALTSYNC_MASK                   0x00200000
#define _CCP7CON1_ALTSYNC_LENGTH                 0x00000001

#define _CCP7CON1_ONESHOT_POSITION               0x00000016
#define _CCP7CON1_ONESHOT_MASK                   0x00400000
#define _CCP7CON1_ONESHOT_LENGTH                 0x00000001

#define _CCP7CON1_TRIGEN_POSITION                0x00000017
#define _CCP7CON1_TRIGEN_MASK                    0x00800000
#define _CCP7CON1_TRIGEN_LENGTH                  0x00000001

#define _CCP7CON1_OPS_POSITION                   0x00000018
#define _CCP7CON1_OPS_MASK                       0x0F000000
#define _CCP7CON1_OPS_LENGTH                     0x00000004

#define _CCP7CON1_RTRGEN_POSITION                0x0000001E
#define _CCP7CON1_RTRGEN_MASK                    0x40000000
#define _CCP7CON1_RTRGEN_LENGTH                  0x00000001

#define _CCP7CON1_OPSSRC_POSITION                0x0000001F
#define _CCP7CON1_OPSSRC_MASK                    0x80000000
#define _CCP7CON1_OPSSRC_LENGTH                  0x00000001

#define _CCP7CON2_ASDG_POSITION                  0x00000000
#define _CCP7CON2_ASDG_MASK                      0x000000FF
#define _CCP7CON2_ASDG_LENGTH                    0x00000008

#define _CCP7CON2_SSDG_POSITION                  0x0000000C
#define _CCP7CON2_SSDG_MASK                      0x00001000
#define _CCP7CON2_SSDG_LENGTH                    0x00000001

#define _CCP7CON2_ASDGM_POSITION                 0x0000000E
#define _CCP7CON2_ASDGM_MASK                     0x00004000
#define _CCP7CON2_ASDGM_LENGTH                   0x00000001

#define _CCP7CON2_PWMRSEN_POSITION               0x0000000F
#define _CCP7CON2_PWMRSEN_MASK                   0x00008000
#define _CCP7CON2_PWMRSEN_LENGTH                 0x00000001

#define _CCP7CON2_ICS_POSITION                   0x00000010
#define _CCP7CON2_ICS_MASK                       0x00070000
#define _CCP7CON2_ICS_LENGTH                     0x00000003

#define _CCP7CON2_AUXOUT_POSITION                0x00000013
#define _CCP7CON2_AUXOUT_MASK                    0x00180000
#define _CCP7CON2_AUXOUT_LENGTH                  0x00000002

#define _CCP7CON2_ICGSM_POSITION                 0x00000016
#define _CCP7CON2_ICGSM_MASK                     0x00C00000
#define _CCP7CON2_ICGSM_LENGTH                   0x00000002

#define _CCP7CON2_OCAEN_POSITION                 0x00000018
#define _CCP7CON2_OCAEN_MASK                     0x01000000
#define _CCP7CON2_OCAEN_LENGTH                   0x00000001

#define _CCP7CON2_OENSYNC_POSITION               0x0000001F
#define _CCP7CON2_OENSYNC_MASK                   0x80000000
#define _CCP7CON2_OENSYNC_LENGTH                 0x00000001

#define _CCP7CON3_PSSACE_POSITION                0x00000012
#define _CCP7CON3_PSSACE_MASK                    0x000C0000
#define _CCP7CON3_PSSACE_LENGTH                  0x00000002

#define _CCP7CON3_POLACE_POSITION                0x00000015
#define _CCP7CON3_POLACE_MASK                    0x00200000
#define _CCP7CON3_POLACE_LENGTH                  0x00000001

#define _CCP7CON3_OSCNT_POSITION                 0x0000001C
#define _CCP7CON3_OSCNT_MASK                     0x70000000
#define _CCP7CON3_OSCNT_LENGTH                   0x00000003

#define _CCP7CON3_OETRIG_POSITION                0x0000001F
#define _CCP7CON3_OETRIG_MASK                    0x80000000
#define _CCP7CON3_OETRIG_LENGTH                  0x00000001

#define _CCP7STAT_ICBNE_POSITION                 0x00000000
#define _CCP7STAT_ICBNE_MASK                     0x00000001
#define _CCP7STAT_ICBNE_LENGTH                   0x00000001

#define _CCP7STAT_ICOV_POSITION                  0x00000001
#define _CCP7STAT_ICOV_MASK                      0x00000002
#define _CCP7STAT_ICOV_LENGTH                    0x00000001

#define _CCP7STAT_ICDIS_POSITION                 0x00000002
#define _CCP7STAT_ICDIS_MASK                     0x00000004
#define _CCP7STAT_ICDIS_LENGTH                   0x00000001

#define _CCP7STAT_SCEVT_POSITION                 0x00000003
#define _CCP7STAT_SCEVT_MASK                     0x00000008
#define _CCP7STAT_SCEVT_LENGTH                   0x00000001

#define _CCP7STAT_ASEVT_POSITION                 0x00000004
#define _CCP7STAT_ASEVT_MASK                     0x00000010
#define _CCP7STAT_ASEVT_LENGTH                   0x00000001

#define _CCP7STAT_TRCLR_POSITION                 0x00000005
#define _CCP7STAT_TRCLR_MASK                     0x00000020
#define _CCP7STAT_TRCLR_LENGTH                   0x00000001

#define _CCP7STAT_TRSET_POSITION                 0x00000006
#define _CCP7STAT_TRSET_MASK                     0x00000040
#define _CCP7STAT_TRSET_LENGTH                   0x00000001

#define _CCP7STAT_CCPTRIG_POSITION               0x00000007
#define _CCP7STAT_CCPTRIG_MASK                   0x00000080
#define _CCP7STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP7STAT_ICGARM_POSITION                0x0000000A
#define _CCP7STAT_ICGARM_MASK                    0x00000400
#define _CCP7STAT_ICGARM_LENGTH                  0x00000001

#define _CCP7STAT_RAWIP_POSITION                 0x00000010
#define _CCP7STAT_RAWIP_MASK                     0x00010000
#define _CCP7STAT_RAWIP_LENGTH                   0x00000001

#define _CCP7STAT_RBWIP_POSITION                 0x00000011
#define _CCP7STAT_RBWIP_MASK                     0x00020000
#define _CCP7STAT_RBWIP_LENGTH                   0x00000001

#define _CCP7STAT_TMRLWIP_POSITION               0x00000012
#define _CCP7STAT_TMRLWIP_MASK                   0x00040000
#define _CCP7STAT_TMRLWIP_LENGTH                 0x00000001

#define _CCP7STAT_TMRHWIP_POSITION               0x00000013
#define _CCP7STAT_TMRHWIP_MASK                   0x00080000
#define _CCP7STAT_TMRHWIP_LENGTH                 0x00000001

#define _CCP7STAT_PRLWIP_POSITION                0x00000014
#define _CCP7STAT_PRLWIP_MASK                    0x00100000
#define _CCP7STAT_PRLWIP_LENGTH                  0x00000001

#define _CCP7TMR_TMRL_POSITION                   0x00000000
#define _CCP7TMR_TMRL_MASK                       0x0000FFFF
#define _CCP7TMR_TMRL_LENGTH                     0x00000010

#define _CCP7TMR_TMRH_POSITION                   0x00000010
#define _CCP7TMR_TMRH_MASK                       0xFFFF0000
#define _CCP7TMR_TMRH_LENGTH                     0x00000010

#define _CCP7TMR_TMR_POSITION                    0x00000000
#define _CCP7TMR_TMR_MASK                        0xFFFFFFFF
#define _CCP7TMR_TMR_LENGTH                      0x00000020

#define _CCP7PR_PRL_POSITION                     0x00000000
#define _CCP7PR_PRL_MASK                         0x0000FFFF
#define _CCP7PR_PRL_LENGTH                       0x00000010

#define _CCP7PR_PRH_POSITION                     0x00000010
#define _CCP7PR_PRH_MASK                         0xFFFF0000
#define _CCP7PR_PRH_LENGTH                       0x00000010

#define _CCP7PR_PR_POSITION                      0x00000000
#define _CCP7PR_PR_MASK                          0xFFFFFFFF
#define _CCP7PR_PR_LENGTH                        0x00000020

#define _CCP7RA_CMPA_POSITION                    0x00000000
#define _CCP7RA_CMPA_MASK                        0x0000FFFF
#define _CCP7RA_CMPA_LENGTH                      0x00000010

#define _CCP7RB_CMPB_POSITION                    0x00000000
#define _CCP7RB_CMPB_MASK                        0x0000FFFF
#define _CCP7RB_CMPB_LENGTH                      0x00000010

#define _CCP7BUF_BUFL_POSITION                   0x00000000
#define _CCP7BUF_BUFL_MASK                       0x0000FFFF
#define _CCP7BUF_BUFL_LENGTH                     0x00000010

#define _CCP7BUF_BUFH_POSITION                   0x00000010
#define _CCP7BUF_BUFH_MASK                       0xFFFF0000
#define _CCP7BUF_BUFH_LENGTH                     0x00000010

#define _CCP7BUF_BUF_POSITION                    0x00000000
#define _CCP7BUF_BUF_MASK                        0xFFFFFFFF
#define _CCP7BUF_BUF_LENGTH                      0x00000020

#define _CCP8CON1_MOD_POSITION                   0x00000000
#define _CCP8CON1_MOD_MASK                       0x0000000F
#define _CCP8CON1_MOD_LENGTH                     0x00000004

#define _CCP8CON1_CCSEL_POSITION                 0x00000004
#define _CCP8CON1_CCSEL_MASK                     0x00000010
#define _CCP8CON1_CCSEL_LENGTH                   0x00000001

#define _CCP8CON1_T32_POSITION                   0x00000005
#define _CCP8CON1_T32_MASK                       0x00000020
#define _CCP8CON1_T32_LENGTH                     0x00000001

#define _CCP8CON1_TMRPS_POSITION                 0x00000006
#define _CCP8CON1_TMRPS_MASK                     0x000000C0
#define _CCP8CON1_TMRPS_LENGTH                   0x00000002

#define _CCP8CON1_CLKSEL_POSITION                0x00000008
#define _CCP8CON1_CLKSEL_MASK                    0x00000700
#define _CCP8CON1_CLKSEL_LENGTH                  0x00000003

#define _CCP8CON1_TMRSYNC_POSITION               0x0000000B
#define _CCP8CON1_TMRSYNC_MASK                   0x00000800
#define _CCP8CON1_TMRSYNC_LENGTH                 0x00000001

#define _CCP8CON1_CCPSLP_POSITION                0x0000000C
#define _CCP8CON1_CCPSLP_MASK                    0x00001000
#define _CCP8CON1_CCPSLP_LENGTH                  0x00000001

#define _CCP8CON1_SIDL_POSITION                  0x0000000D
#define _CCP8CON1_SIDL_MASK                      0x00002000
#define _CCP8CON1_SIDL_LENGTH                    0x00000001

#define _CCP8CON1_ON_POSITION                    0x0000000F
#define _CCP8CON1_ON_MASK                        0x00008000
#define _CCP8CON1_ON_LENGTH                      0x00000001

#define _CCP8CON1_SYNC_POSITION                  0x00000010
#define _CCP8CON1_SYNC_MASK                      0x001F0000
#define _CCP8CON1_SYNC_LENGTH                    0x00000005

#define _CCP8CON1_ALTSYNC_POSITION               0x00000015
#define _CCP8CON1_ALTSYNC_MASK                   0x00200000
#define _CCP8CON1_ALTSYNC_LENGTH                 0x00000001

#define _CCP8CON1_ONESHOT_POSITION               0x00000016
#define _CCP8CON1_ONESHOT_MASK                   0x00400000
#define _CCP8CON1_ONESHOT_LENGTH                 0x00000001

#define _CCP8CON1_TRIGEN_POSITION                0x00000017
#define _CCP8CON1_TRIGEN_MASK                    0x00800000
#define _CCP8CON1_TRIGEN_LENGTH                  0x00000001

#define _CCP8CON1_OPS_POSITION                   0x00000018
#define _CCP8CON1_OPS_MASK                       0x0F000000
#define _CCP8CON1_OPS_LENGTH                     0x00000004

#define _CCP8CON1_RTRGEN_POSITION                0x0000001E
#define _CCP8CON1_RTRGEN_MASK                    0x40000000
#define _CCP8CON1_RTRGEN_LENGTH                  0x00000001

#define _CCP8CON1_OPSSRC_POSITION                0x0000001F
#define _CCP8CON1_OPSSRC_MASK                    0x80000000
#define _CCP8CON1_OPSSRC_LENGTH                  0x00000001

#define _CCP8CON2_ASDG_POSITION                  0x00000000
#define _CCP8CON2_ASDG_MASK                      0x000000FF
#define _CCP8CON2_ASDG_LENGTH                    0x00000008

#define _CCP8CON2_SSDG_POSITION                  0x0000000C
#define _CCP8CON2_SSDG_MASK                      0x00001000
#define _CCP8CON2_SSDG_LENGTH                    0x00000001

#define _CCP8CON2_ASDGM_POSITION                 0x0000000E
#define _CCP8CON2_ASDGM_MASK                     0x00004000
#define _CCP8CON2_ASDGM_LENGTH                   0x00000001

#define _CCP8CON2_PWMRSEN_POSITION               0x0000000F
#define _CCP8CON2_PWMRSEN_MASK                   0x00008000
#define _CCP8CON2_PWMRSEN_LENGTH                 0x00000001

#define _CCP8CON2_ICS_POSITION                   0x00000010
#define _CCP8CON2_ICS_MASK                       0x00070000
#define _CCP8CON2_ICS_LENGTH                     0x00000003

#define _CCP8CON2_AUXOUT_POSITION                0x00000013
#define _CCP8CON2_AUXOUT_MASK                    0x00180000
#define _CCP8CON2_AUXOUT_LENGTH                  0x00000002

#define _CCP8CON2_ICGSM_POSITION                 0x00000016
#define _CCP8CON2_ICGSM_MASK                     0x00C00000
#define _CCP8CON2_ICGSM_LENGTH                   0x00000002

#define _CCP8CON2_OCAEN_POSITION                 0x00000018
#define _CCP8CON2_OCAEN_MASK                     0x01000000
#define _CCP8CON2_OCAEN_LENGTH                   0x00000001

#define _CCP8CON2_OENSYNC_POSITION               0x0000001F
#define _CCP8CON2_OENSYNC_MASK                   0x80000000
#define _CCP8CON2_OENSYNC_LENGTH                 0x00000001

#define _CCP8CON3_PSSACE_POSITION                0x00000012
#define _CCP8CON3_PSSACE_MASK                    0x000C0000
#define _CCP8CON3_PSSACE_LENGTH                  0x00000002

#define _CCP8CON3_POLACE_POSITION                0x00000015
#define _CCP8CON3_POLACE_MASK                    0x00200000
#define _CCP8CON3_POLACE_LENGTH                  0x00000001

#define _CCP8CON3_OSCNT_POSITION                 0x0000001C
#define _CCP8CON3_OSCNT_MASK                     0x70000000
#define _CCP8CON3_OSCNT_LENGTH                   0x00000003

#define _CCP8CON3_OETRIG_POSITION                0x0000001F
#define _CCP8CON3_OETRIG_MASK                    0x80000000
#define _CCP8CON3_OETRIG_LENGTH                  0x00000001

#define _CCP8STAT_ICBNE_POSITION                 0x00000000
#define _CCP8STAT_ICBNE_MASK                     0x00000001
#define _CCP8STAT_ICBNE_LENGTH                   0x00000001

#define _CCP8STAT_ICOV_POSITION                  0x00000001
#define _CCP8STAT_ICOV_MASK                      0x00000002
#define _CCP8STAT_ICOV_LENGTH                    0x00000001

#define _CCP8STAT_ICDIS_POSITION                 0x00000002
#define _CCP8STAT_ICDIS_MASK                     0x00000004
#define _CCP8STAT_ICDIS_LENGTH                   0x00000001

#define _CCP8STAT_SCEVT_POSITION                 0x00000003
#define _CCP8STAT_SCEVT_MASK                     0x00000008
#define _CCP8STAT_SCEVT_LENGTH                   0x00000001

#define _CCP8STAT_ASEVT_POSITION                 0x00000004
#define _CCP8STAT_ASEVT_MASK                     0x00000010
#define _CCP8STAT_ASEVT_LENGTH                   0x00000001

#define _CCP8STAT_TRCLR_POSITION                 0x00000005
#define _CCP8STAT_TRCLR_MASK                     0x00000020
#define _CCP8STAT_TRCLR_LENGTH                   0x00000001

#define _CCP8STAT_TRSET_POSITION                 0x00000006
#define _CCP8STAT_TRSET_MASK                     0x00000040
#define _CCP8STAT_TRSET_LENGTH                   0x00000001

#define _CCP8STAT_CCPTRIG_POSITION               0x00000007
#define _CCP8STAT_CCPTRIG_MASK                   0x00000080
#define _CCP8STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP8STAT_ICGARM_POSITION                0x0000000A
#define _CCP8STAT_ICGARM_MASK                    0x00000400
#define _CCP8STAT_ICGARM_LENGTH                  0x00000001

#define _CCP8STAT_RAWIP_POSITION                 0x00000010
#define _CCP8STAT_RAWIP_MASK                     0x00010000
#define _CCP8STAT_RAWIP_LENGTH                   0x00000001

#define _CCP8STAT_RBWIP_POSITION                 0x00000011
#define _CCP8STAT_RBWIP_MASK                     0x00020000
#define _CCP8STAT_RBWIP_LENGTH                   0x00000001

#define _CCP8STAT_TMRLWIP_POSITION               0x00000012
#define _CCP8STAT_TMRLWIP_MASK                   0x00040000
#define _CCP8STAT_TMRLWIP_LENGTH                 0x00000001

#define _CCP8STAT_TMRHWIP_POSITION               0x00000013
#define _CCP8STAT_TMRHWIP_MASK                   0x00080000
#define _CCP8STAT_TMRHWIP_LENGTH                 0x00000001

#define _CCP8STAT_PRLWIP_POSITION                0x00000014
#define _CCP8STAT_PRLWIP_MASK                    0x00100000
#define _CCP8STAT_PRLWIP_LENGTH                  0x00000001

#define _CCP8TMR_TMRL_POSITION                   0x00000000
#define _CCP8TMR_TMRL_MASK                       0x0000FFFF
#define _CCP8TMR_TMRL_LENGTH                     0x00000010

#define _CCP8TMR_TMRH_POSITION                   0x00000010
#define _CCP8TMR_TMRH_MASK                       0xFFFF0000
#define _CCP8TMR_TMRH_LENGTH                     0x00000010

#define _CCP8TMR_TMR_POSITION                    0x00000000
#define _CCP8TMR_TMR_MASK                        0xFFFFFFFF
#define _CCP8TMR_TMR_LENGTH                      0x00000020

#define _CCP8PR_PRL_POSITION                     0x00000000
#define _CCP8PR_PRL_MASK                         0x0000FFFF
#define _CCP8PR_PRL_LENGTH                       0x00000010

#define _CCP8PR_PRH_POSITION                     0x00000010
#define _CCP8PR_PRH_MASK                         0xFFFF0000
#define _CCP8PR_PRH_LENGTH                       0x00000010

#define _CCP8PR_PR_POSITION                      0x00000000
#define _CCP8PR_PR_MASK                          0xFFFFFFFF
#define _CCP8PR_PR_LENGTH                        0x00000020

#define _CCP8RA_CMPA_POSITION                    0x00000000
#define _CCP8RA_CMPA_MASK                        0x0000FFFF
#define _CCP8RA_CMPA_LENGTH                      0x00000010

#define _CCP8RB_CMPB_POSITION                    0x00000000
#define _CCP8RB_CMPB_MASK                        0x0000FFFF
#define _CCP8RB_CMPB_LENGTH                      0x00000010

#define _CCP8BUF_BUFL_POSITION                   0x00000000
#define _CCP8BUF_BUFL_MASK                       0x0000FFFF
#define _CCP8BUF_BUFL_LENGTH                     0x00000010

#define _CCP8BUF_BUFH_POSITION                   0x00000010
#define _CCP8BUF_BUFH_MASK                       0xFFFF0000
#define _CCP8BUF_BUFH_LENGTH                     0x00000010

#define _CCP8BUF_BUF_POSITION                    0x00000000
#define _CCP8BUF_BUF_MASK                        0xFFFFFFFF
#define _CCP8BUF_BUF_LENGTH                      0x00000020

#define _CCP9CON1_MOD_POSITION                   0x00000000
#define _CCP9CON1_MOD_MASK                       0x0000000F
#define _CCP9CON1_MOD_LENGTH                     0x00000004

#define _CCP9CON1_CCSEL_POSITION                 0x00000004
#define _CCP9CON1_CCSEL_MASK                     0x00000010
#define _CCP9CON1_CCSEL_LENGTH                   0x00000001

#define _CCP9CON1_T32_POSITION                   0x00000005
#define _CCP9CON1_T32_MASK                       0x00000020
#define _CCP9CON1_T32_LENGTH                     0x00000001

#define _CCP9CON1_TMRPS_POSITION                 0x00000006
#define _CCP9CON1_TMRPS_MASK                     0x000000C0
#define _CCP9CON1_TMRPS_LENGTH                   0x00000002

#define _CCP9CON1_CLKSEL_POSITION                0x00000008
#define _CCP9CON1_CLKSEL_MASK                    0x00000700
#define _CCP9CON1_CLKSEL_LENGTH                  0x00000003

#define _CCP9CON1_TMRSYNC_POSITION               0x0000000B
#define _CCP9CON1_TMRSYNC_MASK                   0x00000800
#define _CCP9CON1_TMRSYNC_LENGTH                 0x00000001

#define _CCP9CON1_CCPSLP_POSITION                0x0000000C
#define _CCP9CON1_CCPSLP_MASK                    0x00001000
#define _CCP9CON1_CCPSLP_LENGTH                  0x00000001

#define _CCP9CON1_SIDL_POSITION                  0x0000000D
#define _CCP9CON1_SIDL_MASK                      0x00002000
#define _CCP9CON1_SIDL_LENGTH                    0x00000001

#define _CCP9CON1_ON_POSITION                    0x0000000F
#define _CCP9CON1_ON_MASK                        0x00008000
#define _CCP9CON1_ON_LENGTH                      0x00000001

#define _CCP9CON1_SYNC_POSITION                  0x00000010
#define _CCP9CON1_SYNC_MASK                      0x001F0000
#define _CCP9CON1_SYNC_LENGTH                    0x00000005

#define _CCP9CON1_ALTSYNC_POSITION               0x00000015
#define _CCP9CON1_ALTSYNC_MASK                   0x00200000
#define _CCP9CON1_ALTSYNC_LENGTH                 0x00000001

#define _CCP9CON1_ONESHOT_POSITION               0x00000016
#define _CCP9CON1_ONESHOT_MASK                   0x00400000
#define _CCP9CON1_ONESHOT_LENGTH                 0x00000001

#define _CCP9CON1_TRIGEN_POSITION                0x00000017
#define _CCP9CON1_TRIGEN_MASK                    0x00800000
#define _CCP9CON1_TRIGEN_LENGTH                  0x00000001

#define _CCP9CON1_OPS_POSITION                   0x00000018
#define _CCP9CON1_OPS_MASK                       0x0F000000
#define _CCP9CON1_OPS_LENGTH                     0x00000004

#define _CCP9CON1_RTRGEN_POSITION                0x0000001E
#define _CCP9CON1_RTRGEN_MASK                    0x40000000
#define _CCP9CON1_RTRGEN_LENGTH                  0x00000001

#define _CCP9CON1_OPSSRC_POSITION                0x0000001F
#define _CCP9CON1_OPSSRC_MASK                    0x80000000
#define _CCP9CON1_OPSSRC_LENGTH                  0x00000001

#define _CCP9CON2_ASDG_POSITION                  0x00000000
#define _CCP9CON2_ASDG_MASK                      0x000000FF
#define _CCP9CON2_ASDG_LENGTH                    0x00000008

#define _CCP9CON2_SSDG_POSITION                  0x0000000C
#define _CCP9CON2_SSDG_MASK                      0x00001000
#define _CCP9CON2_SSDG_LENGTH                    0x00000001

#define _CCP9CON2_ASDGM_POSITION                 0x0000000E
#define _CCP9CON2_ASDGM_MASK                     0x00004000
#define _CCP9CON2_ASDGM_LENGTH                   0x00000001

#define _CCP9CON2_PWMRSEN_POSITION               0x0000000F
#define _CCP9CON2_PWMRSEN_MASK                   0x00008000
#define _CCP9CON2_PWMRSEN_LENGTH                 0x00000001

#define _CCP9CON2_ICS_POSITION                   0x00000010
#define _CCP9CON2_ICS_MASK                       0x00070000
#define _CCP9CON2_ICS_LENGTH                     0x00000003

#define _CCP9CON2_AUXOUT_POSITION                0x00000013
#define _CCP9CON2_AUXOUT_MASK                    0x00180000
#define _CCP9CON2_AUXOUT_LENGTH                  0x00000002

#define _CCP9CON2_ICGSM_POSITION                 0x00000016
#define _CCP9CON2_ICGSM_MASK                     0x00C00000
#define _CCP9CON2_ICGSM_LENGTH                   0x00000002

#define _CCP9CON2_OCAEN_POSITION                 0x00000018
#define _CCP9CON2_OCAEN_MASK                     0x01000000
#define _CCP9CON2_OCAEN_LENGTH                   0x00000001

#define _CCP9CON2_OENSYNC_POSITION               0x0000001F
#define _CCP9CON2_OENSYNC_MASK                   0x80000000
#define _CCP9CON2_OENSYNC_LENGTH                 0x00000001

#define _CCP9CON3_PSSACE_POSITION                0x00000012
#define _CCP9CON3_PSSACE_MASK                    0x000C0000
#define _CCP9CON3_PSSACE_LENGTH                  0x00000002

#define _CCP9CON3_POLACE_POSITION                0x00000015
#define _CCP9CON3_POLACE_MASK                    0x00200000
#define _CCP9CON3_POLACE_LENGTH                  0x00000001

#define _CCP9CON3_OSCNT_POSITION                 0x0000001C
#define _CCP9CON3_OSCNT_MASK                     0x70000000
#define _CCP9CON3_OSCNT_LENGTH                   0x00000003

#define _CCP9CON3_OETRIG_POSITION                0x0000001F
#define _CCP9CON3_OETRIG_MASK                    0x80000000
#define _CCP9CON3_OETRIG_LENGTH                  0x00000001

#define _CCP9STAT_ICBNE_POSITION                 0x00000000
#define _CCP9STAT_ICBNE_MASK                     0x00000001
#define _CCP9STAT_ICBNE_LENGTH                   0x00000001

#define _CCP9STAT_ICOV_POSITION                  0x00000001
#define _CCP9STAT_ICOV_MASK                      0x00000002
#define _CCP9STAT_ICOV_LENGTH                    0x00000001

#define _CCP9STAT_ICDIS_POSITION                 0x00000002
#define _CCP9STAT_ICDIS_MASK                     0x00000004
#define _CCP9STAT_ICDIS_LENGTH                   0x00000001

#define _CCP9STAT_SCEVT_POSITION                 0x00000003
#define _CCP9STAT_SCEVT_MASK                     0x00000008
#define _CCP9STAT_SCEVT_LENGTH                   0x00000001

#define _CCP9STAT_ASEVT_POSITION                 0x00000004
#define _CCP9STAT_ASEVT_MASK                     0x00000010
#define _CCP9STAT_ASEVT_LENGTH                   0x00000001

#define _CCP9STAT_TRCLR_POSITION                 0x00000005
#define _CCP9STAT_TRCLR_MASK                     0x00000020
#define _CCP9STAT_TRCLR_LENGTH                   0x00000001

#define _CCP9STAT_TRSET_POSITION                 0x00000006
#define _CCP9STAT_TRSET_MASK                     0x00000040
#define _CCP9STAT_TRSET_LENGTH                   0x00000001

#define _CCP9STAT_CCPTRIG_POSITION               0x00000007
#define _CCP9STAT_CCPTRIG_MASK                   0x00000080
#define _CCP9STAT_CCPTRIG_LENGTH                 0x00000001

#define _CCP9STAT_ICGARM_POSITION                0x0000000A
#define _CCP9STAT_ICGARM_MASK                    0x00000400
#define _CCP9STAT_ICGARM_LENGTH                  0x00000001

#define _CCP9STAT_RAWIP_POSITION                 0x00000010
#define _CCP9STAT_RAWIP_MASK                     0x00010000
#define _CCP9STAT_RAWIP_LENGTH                   0x00000001

#define _CCP9STAT_RBWIP_POSITION                 0x00000011
#define _CCP9STAT_RBWIP_MASK                     0x00020000
#define _CCP9STAT_RBWIP_LENGTH                   0x00000001

#define _CCP9STAT_TMRLWIP_POSITION               0x00000012
#define _CCP9STAT_TMRLWIP_MASK                   0x00040000
#define _CCP9STAT_TMRLWIP_LENGTH                 0x00000001

#define _CCP9STAT_TMRHWIP_POSITION               0x00000013
#define _CCP9STAT_TMRHWIP_MASK                   0x00080000
#define _CCP9STAT_TMRHWIP_LENGTH                 0x00000001

#define _CCP9STAT_PRLWIP_POSITION                0x00000014
#define _CCP9STAT_PRLWIP_MASK                    0x00100000
#define _CCP9STAT_PRLWIP_LENGTH                  0x00000001

#define _CCP9TMR_TMRL_POSITION                   0x00000000
#define _CCP9TMR_TMRL_MASK                       0x0000FFFF
#define _CCP9TMR_TMRL_LENGTH                     0x00000010

#define _CCP9TMR_TMRH_POSITION                   0x00000010
#define _CCP9TMR_TMRH_MASK                       0xFFFF0000
#define _CCP9TMR_TMRH_LENGTH                     0x00000010

#define _CCP9TMR_TMR_POSITION                    0x00000000
#define _CCP9TMR_TMR_MASK                        0xFFFFFFFF
#define _CCP9TMR_TMR_LENGTH                      0x00000020

#define _CCP9PR_PRL_POSITION                     0x00000000
#define _CCP9PR_PRL_MASK                         0x0000FFFF
#define _CCP9PR_PRL_LENGTH                       0x00000010

#define _CCP9PR_PRH_POSITION                     0x00000010
#define _CCP9PR_PRH_MASK                         0xFFFF0000
#define _CCP9PR_PRH_LENGTH                       0x00000010

#define _CCP9PR_PR_POSITION                      0x00000000
#define _CCP9PR_PR_MASK                          0xFFFFFFFF
#define _CCP9PR_PR_LENGTH                        0x00000020

#define _CCP9RA_CMPA_POSITION                    0x00000000
#define _CCP9RA_CMPA_MASK                        0x0000FFFF
#define _CCP9RA_CMPA_LENGTH                      0x00000010

#define _CCP9RB_CMPB_POSITION                    0x00000000
#define _CCP9RB_CMPB_MASK                        0x0000FFFF
#define _CCP9RB_CMPB_LENGTH                      0x00000010

#define _CCP9BUF_BUFL_POSITION                   0x00000000
#define _CCP9BUF_BUFL_MASK                       0x0000FFFF
#define _CCP9BUF_BUFL_LENGTH                     0x00000010

#define _CCP9BUF_BUFH_POSITION                   0x00000010
#define _CCP9BUF_BUFH_MASK                       0xFFFF0000
#define _CCP9BUF_BUFH_LENGTH                     0x00000010

#define _CCP9BUF_BUF_POSITION                    0x00000000
#define _CCP9BUF_BUF_MASK                        0xFFFFFFFF
#define _CCP9BUF_BUF_LENGTH                      0x00000020

#define _I2C1CON_SEN_POSITION                    0x00000000
#define _I2C1CON_SEN_MASK                        0x00000001
#define _I2C1CON_SEN_LENGTH                      0x00000001

#define _I2C1CON_RSEN_POSITION                   0x00000001
#define _I2C1CON_RSEN_MASK                       0x00000002
#define _I2C1CON_RSEN_LENGTH                     0x00000001

#define _I2C1CON_PEN_POSITION                    0x00000002
#define _I2C1CON_PEN_MASK                        0x00000004
#define _I2C1CON_PEN_LENGTH                      0x00000001

#define _I2C1CON_RCEN_POSITION                   0x00000003
#define _I2C1CON_RCEN_MASK                       0x00000008
#define _I2C1CON_RCEN_LENGTH                     0x00000001

#define _I2C1CON_ACKEN_POSITION                  0x00000004
#define _I2C1CON_ACKEN_MASK                      0x00000010
#define _I2C1CON_ACKEN_LENGTH                    0x00000001

#define _I2C1CON_ACKDT_POSITION                  0x00000005
#define _I2C1CON_ACKDT_MASK                      0x00000020
#define _I2C1CON_ACKDT_LENGTH                    0x00000001

#define _I2C1CON_STREN_POSITION                  0x00000006
#define _I2C1CON_STREN_MASK                      0x00000040
#define _I2C1CON_STREN_LENGTH                    0x00000001

#define _I2C1CON_GCEN_POSITION                   0x00000007
#define _I2C1CON_GCEN_MASK                       0x00000080
#define _I2C1CON_GCEN_LENGTH                     0x00000001

#define _I2C1CON_SMEN_POSITION                   0x00000008
#define _I2C1CON_SMEN_MASK                       0x00000100
#define _I2C1CON_SMEN_LENGTH                     0x00000001

#define _I2C1CON_DISSLW_POSITION                 0x00000009
#define _I2C1CON_DISSLW_MASK                     0x00000200
#define _I2C1CON_DISSLW_LENGTH                   0x00000001

#define _I2C1CON_A10M_POSITION                   0x0000000A
#define _I2C1CON_A10M_MASK                       0x00000400
#define _I2C1CON_A10M_LENGTH                     0x00000001

#define _I2C1CON_STRICT_POSITION                 0x0000000B
#define _I2C1CON_STRICT_MASK                     0x00000800
#define _I2C1CON_STRICT_LENGTH                   0x00000001

#define _I2C1CON_SCLREL_POSITION                 0x0000000C
#define _I2C1CON_SCLREL_MASK                     0x00001000
#define _I2C1CON_SCLREL_LENGTH                   0x00000001

#define _I2C1CON_SIDL_POSITION                   0x0000000D
#define _I2C1CON_SIDL_MASK                       0x00002000
#define _I2C1CON_SIDL_LENGTH                     0x00000001

#define _I2C1CON_ON_POSITION                     0x0000000F
#define _I2C1CON_ON_MASK                         0x00008000
#define _I2C1CON_ON_LENGTH                       0x00000001

#define _I2C1CON_SBCDE_POSITION                  0x00000012
#define _I2C1CON_SBCDE_MASK                      0x00040000
#define _I2C1CON_SBCDE_LENGTH                    0x00000001

#define _I2C1CON_SDAHT_POSITION                  0x00000013
#define _I2C1CON_SDAHT_MASK                      0x00080000
#define _I2C1CON_SDAHT_LENGTH                    0x00000001

#define _I2C1CON_BOEN_POSITION                   0x00000014
#define _I2C1CON_BOEN_MASK                       0x00100000
#define _I2C1CON_BOEN_LENGTH                     0x00000001

#define _I2C1CON_SCIE_POSITION                   0x00000015
#define _I2C1CON_SCIE_MASK                       0x00200000
#define _I2C1CON_SCIE_LENGTH                     0x00000001

#define _I2C1CON_PCIE_POSITION                   0x00000016
#define _I2C1CON_PCIE_MASK                       0x00400000
#define _I2C1CON_PCIE_LENGTH                     0x00000001

#define _I2C1CON_IPMIEN_POSITION                 0x0000000B
#define _I2C1CON_IPMIEN_MASK                     0x00000800
#define _I2C1CON_IPMIEN_LENGTH                   0x00000001

#define _I2C1CON_I2CSIDL_POSITION                0x0000000D
#define _I2C1CON_I2CSIDL_MASK                    0x00002000
#define _I2C1CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C1CON_I2CEN_POSITION                  0x0000000F
#define _I2C1CON_I2CEN_MASK                      0x00008000
#define _I2C1CON_I2CEN_LENGTH                    0x00000001

#define _I2C1STAT_TBF_POSITION                   0x00000000
#define _I2C1STAT_TBF_MASK                       0x00000001
#define _I2C1STAT_TBF_LENGTH                     0x00000001

#define _I2C1STAT_RBF_POSITION                   0x00000001
#define _I2C1STAT_RBF_MASK                       0x00000002
#define _I2C1STAT_RBF_LENGTH                     0x00000001

#define _I2C1STAT_R_W_POSITION                   0x00000002
#define _I2C1STAT_R_W_MASK                       0x00000004
#define _I2C1STAT_R_W_LENGTH                     0x00000001

#define _I2C1STAT_S_POSITION                     0x00000003
#define _I2C1STAT_S_MASK                         0x00000008
#define _I2C1STAT_S_LENGTH                       0x00000001

#define _I2C1STAT_P_POSITION                     0x00000004
#define _I2C1STAT_P_MASK                         0x00000010
#define _I2C1STAT_P_LENGTH                       0x00000001

#define _I2C1STAT_D_A_POSITION                   0x00000005
#define _I2C1STAT_D_A_MASK                       0x00000020
#define _I2C1STAT_D_A_LENGTH                     0x00000001

#define _I2C1STAT_I2COV_POSITION                 0x00000006
#define _I2C1STAT_I2COV_MASK                     0x00000040
#define _I2C1STAT_I2COV_LENGTH                   0x00000001

#define _I2C1STAT_IWCOL_POSITION                 0x00000007
#define _I2C1STAT_IWCOL_MASK                     0x00000080
#define _I2C1STAT_IWCOL_LENGTH                   0x00000001

#define _I2C1STAT_ADD10_POSITION                 0x00000008
#define _I2C1STAT_ADD10_MASK                     0x00000100
#define _I2C1STAT_ADD10_LENGTH                   0x00000001

#define _I2C1STAT_GCSTAT_POSITION                0x00000009
#define _I2C1STAT_GCSTAT_MASK                    0x00000200
#define _I2C1STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C1STAT_BCL_POSITION                   0x0000000A
#define _I2C1STAT_BCL_MASK                       0x00000400
#define _I2C1STAT_BCL_LENGTH                     0x00000001

#define _I2C1STAT_ACKTIM_POSITION                0x0000000D
#define _I2C1STAT_ACKTIM_MASK                    0x00002000
#define _I2C1STAT_ACKTIM_LENGTH                  0x00000001

#define _I2C1STAT_TRSTAT_POSITION                0x0000000E
#define _I2C1STAT_TRSTAT_MASK                    0x00004000
#define _I2C1STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C1STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C1STAT_ACKSTAT_MASK                   0x00008000
#define _I2C1STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C1STAT_I2CPOV_POSITION                0x00000006
#define _I2C1STAT_I2CPOV_MASK                    0x00000040
#define _I2C1STAT_I2CPOV_LENGTH                  0x00000001

#define _I2C1ADD_I2CADD_POSITION                 0x00000000
#define _I2C1ADD_I2CADD_MASK                     0x000003FF
#define _I2C1ADD_I2CADD_LENGTH                   0x0000000A

#define _I2C1MSK_I2CMSK_POSITION                 0x00000000
#define _I2C1MSK_I2CMSK_MASK                     0x000003FF
#define _I2C1MSK_I2CMSK_LENGTH                   0x0000000A

#define _I2C1MSK_AMSK_POSITION                   0x00000000
#define _I2C1MSK_AMSK_MASK                       0x000003FF
#define _I2C1MSK_AMSK_LENGTH                     0x0000000A

#define _I2C1BRG_I2CBRG_POSITION                 0x00000000
#define _I2C1BRG_I2CBRG_MASK                     0x0000FFFF
#define _I2C1BRG_I2CBRG_LENGTH                   0x00000010

#define _I2C1TRN_I2CTRN_POSITION                 0x00000000
#define _I2C1TRN_I2CTRN_MASK                     0x000000FF
#define _I2C1TRN_I2CTRN_LENGTH                   0x00000008

#define _I2C1RCV_I2CRCV_POSITION                 0x00000000
#define _I2C1RCV_I2CRCV_MASK                     0x000000FF
#define _I2C1RCV_I2CRCV_LENGTH                   0x00000008

#define _I2C2CON_SEN_POSITION                    0x00000000
#define _I2C2CON_SEN_MASK                        0x00000001
#define _I2C2CON_SEN_LENGTH                      0x00000001

#define _I2C2CON_RSEN_POSITION                   0x00000001
#define _I2C2CON_RSEN_MASK                       0x00000002
#define _I2C2CON_RSEN_LENGTH                     0x00000001

#define _I2C2CON_PEN_POSITION                    0x00000002
#define _I2C2CON_PEN_MASK                        0x00000004
#define _I2C2CON_PEN_LENGTH                      0x00000001

#define _I2C2CON_RCEN_POSITION                   0x00000003
#define _I2C2CON_RCEN_MASK                       0x00000008
#define _I2C2CON_RCEN_LENGTH                     0x00000001

#define _I2C2CON_ACKEN_POSITION                  0x00000004
#define _I2C2CON_ACKEN_MASK                      0x00000010
#define _I2C2CON_ACKEN_LENGTH                    0x00000001

#define _I2C2CON_ACKDT_POSITION                  0x00000005
#define _I2C2CON_ACKDT_MASK                      0x00000020
#define _I2C2CON_ACKDT_LENGTH                    0x00000001

#define _I2C2CON_STREN_POSITION                  0x00000006
#define _I2C2CON_STREN_MASK                      0x00000040
#define _I2C2CON_STREN_LENGTH                    0x00000001

#define _I2C2CON_GCEN_POSITION                   0x00000007
#define _I2C2CON_GCEN_MASK                       0x00000080
#define _I2C2CON_GCEN_LENGTH                     0x00000001

#define _I2C2CON_SMEN_POSITION                   0x00000008
#define _I2C2CON_SMEN_MASK                       0x00000100
#define _I2C2CON_SMEN_LENGTH                     0x00000001

#define _I2C2CON_DISSLW_POSITION                 0x00000009
#define _I2C2CON_DISSLW_MASK                     0x00000200
#define _I2C2CON_DISSLW_LENGTH                   0x00000001

#define _I2C2CON_A10M_POSITION                   0x0000000A
#define _I2C2CON_A10M_MASK                       0x00000400
#define _I2C2CON_A10M_LENGTH                     0x00000001

#define _I2C2CON_STRICT_POSITION                 0x0000000B
#define _I2C2CON_STRICT_MASK                     0x00000800
#define _I2C2CON_STRICT_LENGTH                   0x00000001

#define _I2C2CON_SCLREL_POSITION                 0x0000000C
#define _I2C2CON_SCLREL_MASK                     0x00001000
#define _I2C2CON_SCLREL_LENGTH                   0x00000001

#define _I2C2CON_SIDL_POSITION                   0x0000000D
#define _I2C2CON_SIDL_MASK                       0x00002000
#define _I2C2CON_SIDL_LENGTH                     0x00000001

#define _I2C2CON_ON_POSITION                     0x0000000F
#define _I2C2CON_ON_MASK                         0x00008000
#define _I2C2CON_ON_LENGTH                       0x00000001

#define _I2C2CON_SBCDE_POSITION                  0x00000012
#define _I2C2CON_SBCDE_MASK                      0x00040000
#define _I2C2CON_SBCDE_LENGTH                    0x00000001

#define _I2C2CON_SDAHT_POSITION                  0x00000013
#define _I2C2CON_SDAHT_MASK                      0x00080000
#define _I2C2CON_SDAHT_LENGTH                    0x00000001

#define _I2C2CON_BOEN_POSITION                   0x00000014
#define _I2C2CON_BOEN_MASK                       0x00100000
#define _I2C2CON_BOEN_LENGTH                     0x00000001

#define _I2C2CON_SCIE_POSITION                   0x00000015
#define _I2C2CON_SCIE_MASK                       0x00200000
#define _I2C2CON_SCIE_LENGTH                     0x00000001

#define _I2C2CON_PCIE_POSITION                   0x00000016
#define _I2C2CON_PCIE_MASK                       0x00400000
#define _I2C2CON_PCIE_LENGTH                     0x00000001

#define _I2C2CON_IPMIEN_POSITION                 0x0000000B
#define _I2C2CON_IPMIEN_MASK                     0x00000800
#define _I2C2CON_IPMIEN_LENGTH                   0x00000001

#define _I2C2CON_I2CSIDL_POSITION                0x0000000D
#define _I2C2CON_I2CSIDL_MASK                    0x00002000
#define _I2C2CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C2CON_I2CEN_POSITION                  0x0000000F
#define _I2C2CON_I2CEN_MASK                      0x00008000
#define _I2C2CON_I2CEN_LENGTH                    0x00000001

#define _I2C2STAT_TBF_POSITION                   0x00000000
#define _I2C2STAT_TBF_MASK                       0x00000001
#define _I2C2STAT_TBF_LENGTH                     0x00000001

#define _I2C2STAT_RBF_POSITION                   0x00000001
#define _I2C2STAT_RBF_MASK                       0x00000002
#define _I2C2STAT_RBF_LENGTH                     0x00000001

#define _I2C2STAT_R_W_POSITION                   0x00000002
#define _I2C2STAT_R_W_MASK                       0x00000004
#define _I2C2STAT_R_W_LENGTH                     0x00000001

#define _I2C2STAT_S_POSITION                     0x00000003
#define _I2C2STAT_S_MASK                         0x00000008
#define _I2C2STAT_S_LENGTH                       0x00000001

#define _I2C2STAT_P_POSITION                     0x00000004
#define _I2C2STAT_P_MASK                         0x00000010
#define _I2C2STAT_P_LENGTH                       0x00000001

#define _I2C2STAT_D_A_POSITION                   0x00000005
#define _I2C2STAT_D_A_MASK                       0x00000020
#define _I2C2STAT_D_A_LENGTH                     0x00000001

#define _I2C2STAT_I2COV_POSITION                 0x00000006
#define _I2C2STAT_I2COV_MASK                     0x00000040
#define _I2C2STAT_I2COV_LENGTH                   0x00000001

#define _I2C2STAT_IWCOL_POSITION                 0x00000007
#define _I2C2STAT_IWCOL_MASK                     0x00000080
#define _I2C2STAT_IWCOL_LENGTH                   0x00000001

#define _I2C2STAT_ADD10_POSITION                 0x00000008
#define _I2C2STAT_ADD10_MASK                     0x00000100
#define _I2C2STAT_ADD10_LENGTH                   0x00000001

#define _I2C2STAT_GCSTAT_POSITION                0x00000009
#define _I2C2STAT_GCSTAT_MASK                    0x00000200
#define _I2C2STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C2STAT_BCL_POSITION                   0x0000000A
#define _I2C2STAT_BCL_MASK                       0x00000400
#define _I2C2STAT_BCL_LENGTH                     0x00000001

#define _I2C2STAT_ACKTIM_POSITION                0x0000000D
#define _I2C2STAT_ACKTIM_MASK                    0x00002000
#define _I2C2STAT_ACKTIM_LENGTH                  0x00000001

#define _I2C2STAT_TRSTAT_POSITION                0x0000000E
#define _I2C2STAT_TRSTAT_MASK                    0x00004000
#define _I2C2STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C2STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C2STAT_ACKSTAT_MASK                   0x00008000
#define _I2C2STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C2STAT_I2CPOV_POSITION                0x00000006
#define _I2C2STAT_I2CPOV_MASK                    0x00000040
#define _I2C2STAT_I2CPOV_LENGTH                  0x00000001

#define _I2C2ADD_I2CADD_POSITION                 0x00000000
#define _I2C2ADD_I2CADD_MASK                     0x000003FF
#define _I2C2ADD_I2CADD_LENGTH                   0x0000000A

#define _I2C2MSK_I2CMSK_POSITION                 0x00000000
#define _I2C2MSK_I2CMSK_MASK                     0x000003FF
#define _I2C2MSK_I2CMSK_LENGTH                   0x0000000A

#define _I2C2MSK_AMSK_POSITION                   0x00000000
#define _I2C2MSK_AMSK_MASK                       0x000003FF
#define _I2C2MSK_AMSK_LENGTH                     0x0000000A

#define _I2C2BRG_I2CBRG_POSITION                 0x00000000
#define _I2C2BRG_I2CBRG_MASK                     0x0000FFFF
#define _I2C2BRG_I2CBRG_LENGTH                   0x00000010

#define _I2C2TRN_I2CTRN_POSITION                 0x00000000
#define _I2C2TRN_I2CTRN_MASK                     0x000000FF
#define _I2C2TRN_I2CTRN_LENGTH                   0x00000008

#define _I2C2RCV_I2CRCV_POSITION                 0x00000000
#define _I2C2RCV_I2CRCV_MASK                     0x000000FF
#define _I2C2RCV_I2CRCV_LENGTH                   0x00000008

#define _I2C3CON_SEN_POSITION                    0x00000000
#define _I2C3CON_SEN_MASK                        0x00000001
#define _I2C3CON_SEN_LENGTH                      0x00000001

#define _I2C3CON_RSEN_POSITION                   0x00000001
#define _I2C3CON_RSEN_MASK                       0x00000002
#define _I2C3CON_RSEN_LENGTH                     0x00000001

#define _I2C3CON_PEN_POSITION                    0x00000002
#define _I2C3CON_PEN_MASK                        0x00000004
#define _I2C3CON_PEN_LENGTH                      0x00000001

#define _I2C3CON_RCEN_POSITION                   0x00000003
#define _I2C3CON_RCEN_MASK                       0x00000008
#define _I2C3CON_RCEN_LENGTH                     0x00000001

#define _I2C3CON_ACKEN_POSITION                  0x00000004
#define _I2C3CON_ACKEN_MASK                      0x00000010
#define _I2C3CON_ACKEN_LENGTH                    0x00000001

#define _I2C3CON_ACKDT_POSITION                  0x00000005
#define _I2C3CON_ACKDT_MASK                      0x00000020
#define _I2C3CON_ACKDT_LENGTH                    0x00000001

#define _I2C3CON_STREN_POSITION                  0x00000006
#define _I2C3CON_STREN_MASK                      0x00000040
#define _I2C3CON_STREN_LENGTH                    0x00000001

#define _I2C3CON_GCEN_POSITION                   0x00000007
#define _I2C3CON_GCEN_MASK                       0x00000080
#define _I2C3CON_GCEN_LENGTH                     0x00000001

#define _I2C3CON_SMEN_POSITION                   0x00000008
#define _I2C3CON_SMEN_MASK                       0x00000100
#define _I2C3CON_SMEN_LENGTH                     0x00000001

#define _I2C3CON_DISSLW_POSITION                 0x00000009
#define _I2C3CON_DISSLW_MASK                     0x00000200
#define _I2C3CON_DISSLW_LENGTH                   0x00000001

#define _I2C3CON_A10M_POSITION                   0x0000000A
#define _I2C3CON_A10M_MASK                       0x00000400
#define _I2C3CON_A10M_LENGTH                     0x00000001

#define _I2C3CON_STRICT_POSITION                 0x0000000B
#define _I2C3CON_STRICT_MASK                     0x00000800
#define _I2C3CON_STRICT_LENGTH                   0x00000001

#define _I2C3CON_SCLREL_POSITION                 0x0000000C
#define _I2C3CON_SCLREL_MASK                     0x00001000
#define _I2C3CON_SCLREL_LENGTH                   0x00000001

#define _I2C3CON_SIDL_POSITION                   0x0000000D
#define _I2C3CON_SIDL_MASK                       0x00002000
#define _I2C3CON_SIDL_LENGTH                     0x00000001

#define _I2C3CON_ON_POSITION                     0x0000000F
#define _I2C3CON_ON_MASK                         0x00008000
#define _I2C3CON_ON_LENGTH                       0x00000001

#define _I2C3CON_SBCDE_POSITION                  0x00000012
#define _I2C3CON_SBCDE_MASK                      0x00040000
#define _I2C3CON_SBCDE_LENGTH                    0x00000001

#define _I2C3CON_SDAHT_POSITION                  0x00000013
#define _I2C3CON_SDAHT_MASK                      0x00080000
#define _I2C3CON_SDAHT_LENGTH                    0x00000001

#define _I2C3CON_BOEN_POSITION                   0x00000014
#define _I2C3CON_BOEN_MASK                       0x00100000
#define _I2C3CON_BOEN_LENGTH                     0x00000001

#define _I2C3CON_SCIE_POSITION                   0x00000015
#define _I2C3CON_SCIE_MASK                       0x00200000
#define _I2C3CON_SCIE_LENGTH                     0x00000001

#define _I2C3CON_PCIE_POSITION                   0x00000016
#define _I2C3CON_PCIE_MASK                       0x00400000
#define _I2C3CON_PCIE_LENGTH                     0x00000001

#define _I2C3CON_IPMIEN_POSITION                 0x0000000B
#define _I2C3CON_IPMIEN_MASK                     0x00000800
#define _I2C3CON_IPMIEN_LENGTH                   0x00000001

#define _I2C3CON_I2CSIDL_POSITION                0x0000000D
#define _I2C3CON_I2CSIDL_MASK                    0x00002000
#define _I2C3CON_I2CSIDL_LENGTH                  0x00000001

#define _I2C3CON_I2CEN_POSITION                  0x0000000F
#define _I2C3CON_I2CEN_MASK                      0x00008000
#define _I2C3CON_I2CEN_LENGTH                    0x00000001

#define _I2C3STAT_TBF_POSITION                   0x00000000
#define _I2C3STAT_TBF_MASK                       0x00000001
#define _I2C3STAT_TBF_LENGTH                     0x00000001

#define _I2C3STAT_RBF_POSITION                   0x00000001
#define _I2C3STAT_RBF_MASK                       0x00000002
#define _I2C3STAT_RBF_LENGTH                     0x00000001

#define _I2C3STAT_R_W_POSITION                   0x00000002
#define _I2C3STAT_R_W_MASK                       0x00000004
#define _I2C3STAT_R_W_LENGTH                     0x00000001

#define _I2C3STAT_S_POSITION                     0x00000003
#define _I2C3STAT_S_MASK                         0x00000008
#define _I2C3STAT_S_LENGTH                       0x00000001

#define _I2C3STAT_P_POSITION                     0x00000004
#define _I2C3STAT_P_MASK                         0x00000010
#define _I2C3STAT_P_LENGTH                       0x00000001

#define _I2C3STAT_D_A_POSITION                   0x00000005
#define _I2C3STAT_D_A_MASK                       0x00000020
#define _I2C3STAT_D_A_LENGTH                     0x00000001

#define _I2C3STAT_I2COV_POSITION                 0x00000006
#define _I2C3STAT_I2COV_MASK                     0x00000040
#define _I2C3STAT_I2COV_LENGTH                   0x00000001

#define _I2C3STAT_IWCOL_POSITION                 0x00000007
#define _I2C3STAT_IWCOL_MASK                     0x00000080
#define _I2C3STAT_IWCOL_LENGTH                   0x00000001

#define _I2C3STAT_ADD10_POSITION                 0x00000008
#define _I2C3STAT_ADD10_MASK                     0x00000100
#define _I2C3STAT_ADD10_LENGTH                   0x00000001

#define _I2C3STAT_GCSTAT_POSITION                0x00000009
#define _I2C3STAT_GCSTAT_MASK                    0x00000200
#define _I2C3STAT_GCSTAT_LENGTH                  0x00000001

#define _I2C3STAT_BCL_POSITION                   0x0000000A
#define _I2C3STAT_BCL_MASK                       0x00000400
#define _I2C3STAT_BCL_LENGTH                     0x00000001

#define _I2C3STAT_ACKTIM_POSITION                0x0000000D
#define _I2C3STAT_ACKTIM_MASK                    0x00002000
#define _I2C3STAT_ACKTIM_LENGTH                  0x00000001

#define _I2C3STAT_TRSTAT_POSITION                0x0000000E
#define _I2C3STAT_TRSTAT_MASK                    0x00004000
#define _I2C3STAT_TRSTAT_LENGTH                  0x00000001

#define _I2C3STAT_ACKSTAT_POSITION               0x0000000F
#define _I2C3STAT_ACKSTAT_MASK                   0x00008000
#define _I2C3STAT_ACKSTAT_LENGTH                 0x00000001

#define _I2C3STAT_I2CPOV_POSITION                0x00000006
#define _I2C3STAT_I2CPOV_MASK                    0x00000040
#define _I2C3STAT_I2CPOV_LENGTH                  0x00000001

#define _I2C3ADD_I2CADD_POSITION                 0x00000000
#define _I2C3ADD_I2CADD_MASK                     0x000003FF
#define _I2C3ADD_I2CADD_LENGTH                   0x0000000A

#define _I2C3MSK_I2CMSK_POSITION                 0x00000000
#define _I2C3MSK_I2CMSK_MASK                     0x000003FF
#define _I2C3MSK_I2CMSK_LENGTH                   0x0000000A

#define _I2C3MSK_AMSK_POSITION                   0x00000000
#define _I2C3MSK_AMSK_MASK                       0x000003FF
#define _I2C3MSK_AMSK_LENGTH                     0x0000000A

#define _I2C3BRG_I2CBRG_POSITION                 0x00000000
#define _I2C3BRG_I2CBRG_MASK                     0x0000FFFF
#define _I2C3BRG_I2CBRG_LENGTH                   0x00000010

#define _I2C3TRN_I2CTRN_POSITION                 0x00000000
#define _I2C3TRN_I2CTRN_MASK                     0x000000FF
#define _I2C3TRN_I2CTRN_LENGTH                   0x00000008

#define _I2C3RCV_I2CRCV_POSITION                 0x00000000
#define _I2C3RCV_I2CRCV_MASK                     0x000000FF
#define _I2C3RCV_I2CRCV_LENGTH                   0x00000008

#define _U1MODE_STSEL_POSITION                   0x00000000
#define _U1MODE_STSEL_MASK                       0x00000001
#define _U1MODE_STSEL_LENGTH                     0x00000001

#define _U1MODE_PDSEL_POSITION                   0x00000001
#define _U1MODE_PDSEL_MASK                       0x00000006
#define _U1MODE_PDSEL_LENGTH                     0x00000002

#define _U1MODE_BRGH_POSITION                    0x00000003
#define _U1MODE_BRGH_MASK                        0x00000008
#define _U1MODE_BRGH_LENGTH                      0x00000001

#define _U1MODE_RXINV_POSITION                   0x00000004
#define _U1MODE_RXINV_MASK                       0x00000010
#define _U1MODE_RXINV_LENGTH                     0x00000001

#define _U1MODE_ABAUD_POSITION                   0x00000005
#define _U1MODE_ABAUD_MASK                       0x00000020
#define _U1MODE_ABAUD_LENGTH                     0x00000001

#define _U1MODE_LPBACK_POSITION                  0x00000006
#define _U1MODE_LPBACK_MASK                      0x00000040
#define _U1MODE_LPBACK_LENGTH                    0x00000001

#define _U1MODE_WAKE_POSITION                    0x00000007
#define _U1MODE_WAKE_MASK                        0x00000080
#define _U1MODE_WAKE_LENGTH                      0x00000001

#define _U1MODE_UEN_POSITION                     0x00000008
#define _U1MODE_UEN_MASK                         0x00000300
#define _U1MODE_UEN_LENGTH                       0x00000002

#define _U1MODE_RTSMD_POSITION                   0x0000000B
#define _U1MODE_RTSMD_MASK                       0x00000800
#define _U1MODE_RTSMD_LENGTH                     0x00000001

#define _U1MODE_IREN_POSITION                    0x0000000C
#define _U1MODE_IREN_MASK                        0x00001000
#define _U1MODE_IREN_LENGTH                      0x00000001

#define _U1MODE_SIDL_POSITION                    0x0000000D
#define _U1MODE_SIDL_MASK                        0x00002000
#define _U1MODE_SIDL_LENGTH                      0x00000001

#define _U1MODE_ON_POSITION                      0x0000000F
#define _U1MODE_ON_MASK                          0x00008000
#define _U1MODE_ON_LENGTH                        0x00000001

#define _U1MODE_OVFDIS_POSITION                  0x00000010
#define _U1MODE_OVFDIS_MASK                      0x00010000
#define _U1MODE_OVFDIS_LENGTH                    0x00000001

#define _U1MODE_CLKSEL_POSITION                  0x00000011
#define _U1MODE_CLKSEL_MASK                      0x00060000
#define _U1MODE_CLKSEL_LENGTH                    0x00000002

#define _U1MODE_ACTIVE_POSITION                  0x00000016
#define _U1MODE_ACTIVE_MASK                      0x00400000
#define _U1MODE_ACTIVE_LENGTH                    0x00000001

#define _U1MODE_SLPEN_POSITION                   0x00000017
#define _U1MODE_SLPEN_MASK                       0x00800000
#define _U1MODE_SLPEN_LENGTH                     0x00000001

#define _U1MODE_RUNOVF_POSITION                  0x00000010
#define _U1MODE_RUNOVF_MASK                      0x00010000
#define _U1MODE_RUNOVF_LENGTH                    0x00000001

#define _U1MODE_PDSEL0_POSITION                  0x00000001
#define _U1MODE_PDSEL0_MASK                      0x00000002
#define _U1MODE_PDSEL0_LENGTH                    0x00000001

#define _U1MODE_PDSEL1_POSITION                  0x00000002
#define _U1MODE_PDSEL1_MASK                      0x00000004
#define _U1MODE_PDSEL1_LENGTH                    0x00000001

#define _U1MODE_UEN0_POSITION                    0x00000008
#define _U1MODE_UEN0_MASK                        0x00000100
#define _U1MODE_UEN0_LENGTH                      0x00000001

#define _U1MODE_UEN1_POSITION                    0x00000009
#define _U1MODE_UEN1_MASK                        0x00000200
#define _U1MODE_UEN1_LENGTH                      0x00000001

#define _U1MODE_USIDL_POSITION                   0x0000000D
#define _U1MODE_USIDL_MASK                       0x00002000
#define _U1MODE_USIDL_LENGTH                     0x00000001

#define _U1MODE_UARTEN_POSITION                  0x0000000F
#define _U1MODE_UARTEN_MASK                      0x00008000
#define _U1MODE_UARTEN_LENGTH                    0x00000001

#define _U1MODE_w_POSITION                       0x00000000
#define _U1MODE_w_MASK                           0xFFFFFFFF
#define _U1MODE_w_LENGTH                         0x00000020

#define _U1STA_URXDA_POSITION                    0x00000000
#define _U1STA_URXDA_MASK                        0x00000001
#define _U1STA_URXDA_LENGTH                      0x00000001

#define _U1STA_OERR_POSITION                     0x00000001
#define _U1STA_OERR_MASK                         0x00000002
#define _U1STA_OERR_LENGTH                       0x00000001

#define _U1STA_FERR_POSITION                     0x00000002
#define _U1STA_FERR_MASK                         0x00000004
#define _U1STA_FERR_LENGTH                       0x00000001

#define _U1STA_PERR_POSITION                     0x00000003
#define _U1STA_PERR_MASK                         0x00000008
#define _U1STA_PERR_LENGTH                       0x00000001

#define _U1STA_RIDLE_POSITION                    0x00000004
#define _U1STA_RIDLE_MASK                        0x00000010
#define _U1STA_RIDLE_LENGTH                      0x00000001

#define _U1STA_ADDEN_POSITION                    0x00000005
#define _U1STA_ADDEN_MASK                        0x00000020
#define _U1STA_ADDEN_LENGTH                      0x00000001

#define _U1STA_URXISEL_POSITION                  0x00000006
#define _U1STA_URXISEL_MASK                      0x000000C0
#define _U1STA_URXISEL_LENGTH                    0x00000002

#define _U1STA_TRMT_POSITION                     0x00000008
#define _U1STA_TRMT_MASK                         0x00000100
#define _U1STA_TRMT_LENGTH                       0x00000001

#define _U1STA_UTXBF_POSITION                    0x00000009
#define _U1STA_UTXBF_MASK                        0x00000200
#define _U1STA_UTXBF_LENGTH                      0x00000001

#define _U1STA_UTXEN_POSITION                    0x0000000A
#define _U1STA_UTXEN_MASK                        0x00000400
#define _U1STA_UTXEN_LENGTH                      0x00000001

#define _U1STA_UTXBRK_POSITION                   0x0000000B
#define _U1STA_UTXBRK_MASK                       0x00000800
#define _U1STA_UTXBRK_LENGTH                     0x00000001

#define _U1STA_URXEN_POSITION                    0x0000000C
#define _U1STA_URXEN_MASK                        0x00001000
#define _U1STA_URXEN_LENGTH                      0x00000001

#define _U1STA_UTXINV_POSITION                   0x0000000D
#define _U1STA_UTXINV_MASK                       0x00002000
#define _U1STA_UTXINV_LENGTH                     0x00000001

#define _U1STA_UTXISEL_POSITION                  0x0000000E
#define _U1STA_UTXISEL_MASK                      0x0000C000
#define _U1STA_UTXISEL_LENGTH                    0x00000002

#define _U1STA_ADDR_POSITION                     0x00000010
#define _U1STA_ADDR_MASK                         0x00FF0000
#define _U1STA_ADDR_LENGTH                       0x00000008

#define _U1STA_MASK_POSITION                     0x00000018
#define _U1STA_MASK_MASK                         0xFF000000
#define _U1STA_MASK_LENGTH                       0x00000008

#define _U1STA_URXISEL0_POSITION                 0x00000006
#define _U1STA_URXISEL0_MASK                     0x00000040
#define _U1STA_URXISEL0_LENGTH                   0x00000001

#define _U1STA_URXISEL1_POSITION                 0x00000007
#define _U1STA_URXISEL1_MASK                     0x00000080
#define _U1STA_URXISEL1_LENGTH                   0x00000001

#define _U1STA_UTXISEL0_POSITION                 0x0000000E
#define _U1STA_UTXISEL0_MASK                     0x00004000
#define _U1STA_UTXISEL0_LENGTH                   0x00000001

#define _U1STA_UTXISEL1_POSITION                 0x0000000F
#define _U1STA_UTXISEL1_MASK                     0x00008000
#define _U1STA_UTXISEL1_LENGTH                   0x00000001

#define _U1STA_UTXSEL_POSITION                   0x0000000E
#define _U1STA_UTXSEL_MASK                       0x0000C000
#define _U1STA_UTXSEL_LENGTH                     0x00000002

#define _U1STA_w_POSITION                        0x00000000
#define _U1STA_w_MASK                            0xFFFFFFFF
#define _U1STA_w_LENGTH                          0x00000020

#define _U1BRG_BRG_POSITION                      0x00000000
#define _U1BRG_BRG_MASK                          0x000FFFFF
#define _U1BRG_BRG_LENGTH                        0x00000014

#define _U2MODE_STSEL_POSITION                   0x00000000
#define _U2MODE_STSEL_MASK                       0x00000001
#define _U2MODE_STSEL_LENGTH                     0x00000001

#define _U2MODE_PDSEL_POSITION                   0x00000001
#define _U2MODE_PDSEL_MASK                       0x00000006
#define _U2MODE_PDSEL_LENGTH                     0x00000002

#define _U2MODE_BRGH_POSITION                    0x00000003
#define _U2MODE_BRGH_MASK                        0x00000008
#define _U2MODE_BRGH_LENGTH                      0x00000001

#define _U2MODE_RXINV_POSITION                   0x00000004
#define _U2MODE_RXINV_MASK                       0x00000010
#define _U2MODE_RXINV_LENGTH                     0x00000001

#define _U2MODE_ABAUD_POSITION                   0x00000005
#define _U2MODE_ABAUD_MASK                       0x00000020
#define _U2MODE_ABAUD_LENGTH                     0x00000001

#define _U2MODE_LPBACK_POSITION                  0x00000006
#define _U2MODE_LPBACK_MASK                      0x00000040
#define _U2MODE_LPBACK_LENGTH                    0x00000001

#define _U2MODE_WAKE_POSITION                    0x00000007
#define _U2MODE_WAKE_MASK                        0x00000080
#define _U2MODE_WAKE_LENGTH                      0x00000001

#define _U2MODE_UEN_POSITION                     0x00000008
#define _U2MODE_UEN_MASK                         0x00000300
#define _U2MODE_UEN_LENGTH                       0x00000002

#define _U2MODE_RTSMD_POSITION                   0x0000000B
#define _U2MODE_RTSMD_MASK                       0x00000800
#define _U2MODE_RTSMD_LENGTH                     0x00000001

#define _U2MODE_IREN_POSITION                    0x0000000C
#define _U2MODE_IREN_MASK                        0x00001000
#define _U2MODE_IREN_LENGTH                      0x00000001

#define _U2MODE_SIDL_POSITION                    0x0000000D
#define _U2MODE_SIDL_MASK                        0x00002000
#define _U2MODE_SIDL_LENGTH                      0x00000001

#define _U2MODE_ON_POSITION                      0x0000000F
#define _U2MODE_ON_MASK                          0x00008000
#define _U2MODE_ON_LENGTH                        0x00000001

#define _U2MODE_OVFDIS_POSITION                  0x00000010
#define _U2MODE_OVFDIS_MASK                      0x00010000
#define _U2MODE_OVFDIS_LENGTH                    0x00000001

#define _U2MODE_CLKSEL_POSITION                  0x00000011
#define _U2MODE_CLKSEL_MASK                      0x00060000
#define _U2MODE_CLKSEL_LENGTH                    0x00000002

#define _U2MODE_ACTIVE_POSITION                  0x00000016
#define _U2MODE_ACTIVE_MASK                      0x00400000
#define _U2MODE_ACTIVE_LENGTH                    0x00000001

#define _U2MODE_SLPEN_POSITION                   0x00000017
#define _U2MODE_SLPEN_MASK                       0x00800000
#define _U2MODE_SLPEN_LENGTH                     0x00000001

#define _U2MODE_RUNOVF_POSITION                  0x00000010
#define _U2MODE_RUNOVF_MASK                      0x00010000
#define _U2MODE_RUNOVF_LENGTH                    0x00000001

#define _U2MODE_PDSEL0_POSITION                  0x00000001
#define _U2MODE_PDSEL0_MASK                      0x00000002
#define _U2MODE_PDSEL0_LENGTH                    0x00000001

#define _U2MODE_PDSEL1_POSITION                  0x00000002
#define _U2MODE_PDSEL1_MASK                      0x00000004
#define _U2MODE_PDSEL1_LENGTH                    0x00000001

#define _U2MODE_UEN0_POSITION                    0x00000008
#define _U2MODE_UEN0_MASK                        0x00000100
#define _U2MODE_UEN0_LENGTH                      0x00000001

#define _U2MODE_UEN1_POSITION                    0x00000009
#define _U2MODE_UEN1_MASK                        0x00000200
#define _U2MODE_UEN1_LENGTH                      0x00000001

#define _U2MODE_USIDL_POSITION                   0x0000000D
#define _U2MODE_USIDL_MASK                       0x00002000
#define _U2MODE_USIDL_LENGTH                     0x00000001

#define _U2MODE_UARTEN_POSITION                  0x0000000F
#define _U2MODE_UARTEN_MASK                      0x00008000
#define _U2MODE_UARTEN_LENGTH                    0x00000001

#define _U2MODE_w_POSITION                       0x00000000
#define _U2MODE_w_MASK                           0xFFFFFFFF
#define _U2MODE_w_LENGTH                         0x00000020

#define _U2STA_URXDA_POSITION                    0x00000000
#define _U2STA_URXDA_MASK                        0x00000001
#define _U2STA_URXDA_LENGTH                      0x00000001

#define _U2STA_OERR_POSITION                     0x00000001
#define _U2STA_OERR_MASK                         0x00000002
#define _U2STA_OERR_LENGTH                       0x00000001

#define _U2STA_FERR_POSITION                     0x00000002
#define _U2STA_FERR_MASK                         0x00000004
#define _U2STA_FERR_LENGTH                       0x00000001

#define _U2STA_PERR_POSITION                     0x00000003
#define _U2STA_PERR_MASK                         0x00000008
#define _U2STA_PERR_LENGTH                       0x00000001

#define _U2STA_RIDLE_POSITION                    0x00000004
#define _U2STA_RIDLE_MASK                        0x00000010
#define _U2STA_RIDLE_LENGTH                      0x00000001

#define _U2STA_ADDEN_POSITION                    0x00000005
#define _U2STA_ADDEN_MASK                        0x00000020
#define _U2STA_ADDEN_LENGTH                      0x00000001

#define _U2STA_URXISEL_POSITION                  0x00000006
#define _U2STA_URXISEL_MASK                      0x000000C0
#define _U2STA_URXISEL_LENGTH                    0x00000002

#define _U2STA_TRMT_POSITION                     0x00000008
#define _U2STA_TRMT_MASK                         0x00000100
#define _U2STA_TRMT_LENGTH                       0x00000001

#define _U2STA_UTXBF_POSITION                    0x00000009
#define _U2STA_UTXBF_MASK                        0x00000200
#define _U2STA_UTXBF_LENGTH                      0x00000001

#define _U2STA_UTXEN_POSITION                    0x0000000A
#define _U2STA_UTXEN_MASK                        0x00000400
#define _U2STA_UTXEN_LENGTH                      0x00000001

#define _U2STA_UTXBRK_POSITION                   0x0000000B
#define _U2STA_UTXBRK_MASK                       0x00000800
#define _U2STA_UTXBRK_LENGTH                     0x00000001

#define _U2STA_URXEN_POSITION                    0x0000000C
#define _U2STA_URXEN_MASK                        0x00001000
#define _U2STA_URXEN_LENGTH                      0x00000001

#define _U2STA_UTXINV_POSITION                   0x0000000D
#define _U2STA_UTXINV_MASK                       0x00002000
#define _U2STA_UTXINV_LENGTH                     0x00000001

#define _U2STA_UTXISEL_POSITION                  0x0000000E
#define _U2STA_UTXISEL_MASK                      0x0000C000
#define _U2STA_UTXISEL_LENGTH                    0x00000002

#define _U2STA_ADDR_POSITION                     0x00000010
#define _U2STA_ADDR_MASK                         0x00FF0000
#define _U2STA_ADDR_LENGTH                       0x00000008

#define _U2STA_MASK_POSITION                     0x00000018
#define _U2STA_MASK_MASK                         0xFF000000
#define _U2STA_MASK_LENGTH                       0x00000008

#define _U2STA_URXISEL0_POSITION                 0x00000006
#define _U2STA_URXISEL0_MASK                     0x00000040
#define _U2STA_URXISEL0_LENGTH                   0x00000001

#define _U2STA_URXISEL1_POSITION                 0x00000007
#define _U2STA_URXISEL1_MASK                     0x00000080
#define _U2STA_URXISEL1_LENGTH                   0x00000001

#define _U2STA_UTXISEL0_POSITION                 0x0000000E
#define _U2STA_UTXISEL0_MASK                     0x00004000
#define _U2STA_UTXISEL0_LENGTH                   0x00000001

#define _U2STA_UTXISEL1_POSITION                 0x0000000F
#define _U2STA_UTXISEL1_MASK                     0x00008000
#define _U2STA_UTXISEL1_LENGTH                   0x00000001

#define _U2STA_UTXSEL_POSITION                   0x0000000E
#define _U2STA_UTXSEL_MASK                       0x0000C000
#define _U2STA_UTXSEL_LENGTH                     0x00000002

#define _U2STA_w_POSITION                        0x00000000
#define _U2STA_w_MASK                            0xFFFFFFFF
#define _U2STA_w_LENGTH                          0x00000020

#define _U2BRG_BRG_POSITION                      0x00000000
#define _U2BRG_BRG_MASK                          0x000FFFFF
#define _U2BRG_BRG_LENGTH                        0x00000014

#define _U3MODE_STSEL_POSITION                   0x00000000
#define _U3MODE_STSEL_MASK                       0x00000001
#define _U3MODE_STSEL_LENGTH                     0x00000001

#define _U3MODE_PDSEL_POSITION                   0x00000001
#define _U3MODE_PDSEL_MASK                       0x00000006
#define _U3MODE_PDSEL_LENGTH                     0x00000002

#define _U3MODE_BRGH_POSITION                    0x00000003
#define _U3MODE_BRGH_MASK                        0x00000008
#define _U3MODE_BRGH_LENGTH                      0x00000001

#define _U3MODE_RXINV_POSITION                   0x00000004
#define _U3MODE_RXINV_MASK                       0x00000010
#define _U3MODE_RXINV_LENGTH                     0x00000001

#define _U3MODE_ABAUD_POSITION                   0x00000005
#define _U3MODE_ABAUD_MASK                       0x00000020
#define _U3MODE_ABAUD_LENGTH                     0x00000001

#define _U3MODE_LPBACK_POSITION                  0x00000006
#define _U3MODE_LPBACK_MASK                      0x00000040
#define _U3MODE_LPBACK_LENGTH                    0x00000001

#define _U3MODE_WAKE_POSITION                    0x00000007
#define _U3MODE_WAKE_MASK                        0x00000080
#define _U3MODE_WAKE_LENGTH                      0x00000001

#define _U3MODE_UEN_POSITION                     0x00000008
#define _U3MODE_UEN_MASK                         0x00000300
#define _U3MODE_UEN_LENGTH                       0x00000002

#define _U3MODE_RTSMD_POSITION                   0x0000000B
#define _U3MODE_RTSMD_MASK                       0x00000800
#define _U3MODE_RTSMD_LENGTH                     0x00000001

#define _U3MODE_IREN_POSITION                    0x0000000C
#define _U3MODE_IREN_MASK                        0x00001000
#define _U3MODE_IREN_LENGTH                      0x00000001

#define _U3MODE_SIDL_POSITION                    0x0000000D
#define _U3MODE_SIDL_MASK                        0x00002000
#define _U3MODE_SIDL_LENGTH                      0x00000001

#define _U3MODE_ON_POSITION                      0x0000000F
#define _U3MODE_ON_MASK                          0x00008000
#define _U3MODE_ON_LENGTH                        0x00000001

#define _U3MODE_OVFDIS_POSITION                  0x00000010
#define _U3MODE_OVFDIS_MASK                      0x00010000
#define _U3MODE_OVFDIS_LENGTH                    0x00000001

#define _U3MODE_CLKSEL_POSITION                  0x00000011
#define _U3MODE_CLKSEL_MASK                      0x00060000
#define _U3MODE_CLKSEL_LENGTH                    0x00000002

#define _U3MODE_ACTIVE_POSITION                  0x00000016
#define _U3MODE_ACTIVE_MASK                      0x00400000
#define _U3MODE_ACTIVE_LENGTH                    0x00000001

#define _U3MODE_SLPEN_POSITION                   0x00000017
#define _U3MODE_SLPEN_MASK                       0x00800000
#define _U3MODE_SLPEN_LENGTH                     0x00000001

#define _U3MODE_RUNOVF_POSITION                  0x00000010
#define _U3MODE_RUNOVF_MASK                      0x00010000
#define _U3MODE_RUNOVF_LENGTH                    0x00000001

#define _U3MODE_PDSEL0_POSITION                  0x00000001
#define _U3MODE_PDSEL0_MASK                      0x00000002
#define _U3MODE_PDSEL0_LENGTH                    0x00000001

#define _U3MODE_PDSEL1_POSITION                  0x00000002
#define _U3MODE_PDSEL1_MASK                      0x00000004
#define _U3MODE_PDSEL1_LENGTH                    0x00000001

#define _U3MODE_UEN0_POSITION                    0x00000008
#define _U3MODE_UEN0_MASK                        0x00000100
#define _U3MODE_UEN0_LENGTH                      0x00000001

#define _U3MODE_UEN1_POSITION                    0x00000009
#define _U3MODE_UEN1_MASK                        0x00000200
#define _U3MODE_UEN1_LENGTH                      0x00000001

#define _U3MODE_USIDL_POSITION                   0x0000000D
#define _U3MODE_USIDL_MASK                       0x00002000
#define _U3MODE_USIDL_LENGTH                     0x00000001

#define _U3MODE_UARTEN_POSITION                  0x0000000F
#define _U3MODE_UARTEN_MASK                      0x00008000
#define _U3MODE_UARTEN_LENGTH                    0x00000001

#define _U3MODE_w_POSITION                       0x00000000
#define _U3MODE_w_MASK                           0xFFFFFFFF
#define _U3MODE_w_LENGTH                         0x00000020

#define _U3STA_URXDA_POSITION                    0x00000000
#define _U3STA_URXDA_MASK                        0x00000001
#define _U3STA_URXDA_LENGTH                      0x00000001

#define _U3STA_OERR_POSITION                     0x00000001
#define _U3STA_OERR_MASK                         0x00000002
#define _U3STA_OERR_LENGTH                       0x00000001

#define _U3STA_FERR_POSITION                     0x00000002
#define _U3STA_FERR_MASK                         0x00000004
#define _U3STA_FERR_LENGTH                       0x00000001

#define _U3STA_PERR_POSITION                     0x00000003
#define _U3STA_PERR_MASK                         0x00000008
#define _U3STA_PERR_LENGTH                       0x00000001

#define _U3STA_RIDLE_POSITION                    0x00000004
#define _U3STA_RIDLE_MASK                        0x00000010
#define _U3STA_RIDLE_LENGTH                      0x00000001

#define _U3STA_ADDEN_POSITION                    0x00000005
#define _U3STA_ADDEN_MASK                        0x00000020
#define _U3STA_ADDEN_LENGTH                      0x00000001

#define _U3STA_URXISEL_POSITION                  0x00000006
#define _U3STA_URXISEL_MASK                      0x000000C0
#define _U3STA_URXISEL_LENGTH                    0x00000002

#define _U3STA_TRMT_POSITION                     0x00000008
#define _U3STA_TRMT_MASK                         0x00000100
#define _U3STA_TRMT_LENGTH                       0x00000001

#define _U3STA_UTXBF_POSITION                    0x00000009
#define _U3STA_UTXBF_MASK                        0x00000200
#define _U3STA_UTXBF_LENGTH                      0x00000001

#define _U3STA_UTXEN_POSITION                    0x0000000A
#define _U3STA_UTXEN_MASK                        0x00000400
#define _U3STA_UTXEN_LENGTH                      0x00000001

#define _U3STA_UTXBRK_POSITION                   0x0000000B
#define _U3STA_UTXBRK_MASK                       0x00000800
#define _U3STA_UTXBRK_LENGTH                     0x00000001

#define _U3STA_URXEN_POSITION                    0x0000000C
#define _U3STA_URXEN_MASK                        0x00001000
#define _U3STA_URXEN_LENGTH                      0x00000001

#define _U3STA_UTXINV_POSITION                   0x0000000D
#define _U3STA_UTXINV_MASK                       0x00002000
#define _U3STA_UTXINV_LENGTH                     0x00000001

#define _U3STA_UTXISEL_POSITION                  0x0000000E
#define _U3STA_UTXISEL_MASK                      0x0000C000
#define _U3STA_UTXISEL_LENGTH                    0x00000002

#define _U3STA_ADDR_POSITION                     0x00000010
#define _U3STA_ADDR_MASK                         0x00FF0000
#define _U3STA_ADDR_LENGTH                       0x00000008

#define _U3STA_MASK_POSITION                     0x00000018
#define _U3STA_MASK_MASK                         0xFF000000
#define _U3STA_MASK_LENGTH                       0x00000008

#define _U3STA_URXISEL0_POSITION                 0x00000006
#define _U3STA_URXISEL0_MASK                     0x00000040
#define _U3STA_URXISEL0_LENGTH                   0x00000001

#define _U3STA_URXISEL1_POSITION                 0x00000007
#define _U3STA_URXISEL1_MASK                     0x00000080
#define _U3STA_URXISEL1_LENGTH                   0x00000001

#define _U3STA_UTXISEL0_POSITION                 0x0000000E
#define _U3STA_UTXISEL0_MASK                     0x00004000
#define _U3STA_UTXISEL0_LENGTH                   0x00000001

#define _U3STA_UTXISEL1_POSITION                 0x0000000F
#define _U3STA_UTXISEL1_MASK                     0x00008000
#define _U3STA_UTXISEL1_LENGTH                   0x00000001

#define _U3STA_UTXSEL_POSITION                   0x0000000E
#define _U3STA_UTXSEL_MASK                       0x0000C000
#define _U3STA_UTXSEL_LENGTH                     0x00000002

#define _U3STA_w_POSITION                        0x00000000
#define _U3STA_w_MASK                            0xFFFFFFFF
#define _U3STA_w_LENGTH                          0x00000020

#define _U3BRG_BRG_POSITION                      0x00000000
#define _U3BRG_BRG_MASK                          0x000FFFFF
#define _U3BRG_BRG_LENGTH                        0x00000014

#define _AD1CON1_DONE_POSITION                   0x00000000
#define _AD1CON1_DONE_MASK                       0x00000001
#define _AD1CON1_DONE_LENGTH                     0x00000001

#define _AD1CON1_SAMP_POSITION                   0x00000001
#define _AD1CON1_SAMP_MASK                       0x00000002
#define _AD1CON1_SAMP_LENGTH                     0x00000001

#define _AD1CON1_ASAM_POSITION                   0x00000002
#define _AD1CON1_ASAM_MASK                       0x00000004
#define _AD1CON1_ASAM_LENGTH                     0x00000001

#define _AD1CON1_MODE12_POSITION                 0x00000003
#define _AD1CON1_MODE12_MASK                     0x00000008
#define _AD1CON1_MODE12_LENGTH                   0x00000001

#define _AD1CON1_SSRC_POSITION                   0x00000004
#define _AD1CON1_SSRC_MASK                       0x000000F0
#define _AD1CON1_SSRC_LENGTH                     0x00000004

#define _AD1CON1_FORM_POSITION                   0x00000008
#define _AD1CON1_FORM_MASK                       0x00000700
#define _AD1CON1_FORM_LENGTH                     0x00000003

#define _AD1CON1_SIDL_POSITION                   0x0000000D
#define _AD1CON1_SIDL_MASK                       0x00002000
#define _AD1CON1_SIDL_LENGTH                     0x00000001

#define _AD1CON1_ON_POSITION                     0x0000000F
#define _AD1CON1_ON_MASK                         0x00008000
#define _AD1CON1_ON_LENGTH                       0x00000001

#define _AD1CON2_BUFM_POSITION                   0x00000001
#define _AD1CON2_BUFM_MASK                       0x00000002
#define _AD1CON2_BUFM_LENGTH                     0x00000001

#define _AD1CON2_SMPI_POSITION                   0x00000002
#define _AD1CON2_SMPI_MASK                       0x0000007C
#define _AD1CON2_SMPI_LENGTH                     0x00000005

#define _AD1CON2_BUFS_POSITION                   0x00000007
#define _AD1CON2_BUFS_MASK                       0x00000080
#define _AD1CON2_BUFS_LENGTH                     0x00000001

#define _AD1CON2_CSCNA_POSITION                  0x0000000A
#define _AD1CON2_CSCNA_MASK                      0x00000400
#define _AD1CON2_CSCNA_LENGTH                    0x00000001

#define _AD1CON2_BUFREGEN_POSITION               0x0000000B
#define _AD1CON2_BUFREGEN_MASK                   0x00000800
#define _AD1CON2_BUFREGEN_LENGTH                 0x00000001

#define _AD1CON2_OFFCAL_POSITION                 0x0000000C
#define _AD1CON2_OFFCAL_MASK                     0x00001000
#define _AD1CON2_OFFCAL_LENGTH                   0x00000001

#define _AD1CON2_VCFG_POSITION                   0x0000000D
#define _AD1CON2_VCFG_MASK                       0x0000E000
#define _AD1CON2_VCFG_LENGTH                     0x00000003

#define _AD1CON3_ADCS_POSITION                   0x00000000
#define _AD1CON3_ADCS_MASK                       0x000000FF
#define _AD1CON3_ADCS_LENGTH                     0x00000008

#define _AD1CON3_SAMC_POSITION                   0x00000008
#define _AD1CON3_SAMC_MASK                       0x00001F00
#define _AD1CON3_SAMC_LENGTH                     0x00000005

#define _AD1CON3_EXTSAM_POSITION                 0x0000000E
#define _AD1CON3_EXTSAM_MASK                     0x00004000
#define _AD1CON3_EXTSAM_LENGTH                   0x00000001

#define _AD1CON3_ADRC_POSITION                   0x0000000F
#define _AD1CON3_ADRC_MASK                       0x00008000
#define _AD1CON3_ADRC_LENGTH                     0x00000001

#define _AD1CHS_CH0SA_POSITION                   0x00000000
#define _AD1CHS_CH0SA_MASK                       0x0000001F
#define _AD1CHS_CH0SA_LENGTH                     0x00000005

#define _AD1CHS_CH0NA_POSITION                   0x00000005
#define _AD1CHS_CH0NA_MASK                       0x000000E0
#define _AD1CHS_CH0NA_LENGTH                     0x00000003

#define _AD1CSS_CSS0_POSITION                    0x00000000
#define _AD1CSS_CSS0_MASK                        0x00000001
#define _AD1CSS_CSS0_LENGTH                      0x00000001

#define _AD1CSS_CSS1_POSITION                    0x00000001
#define _AD1CSS_CSS1_MASK                        0x00000002
#define _AD1CSS_CSS1_LENGTH                      0x00000001

#define _AD1CSS_CSS2_POSITION                    0x00000002
#define _AD1CSS_CSS2_MASK                        0x00000004
#define _AD1CSS_CSS2_LENGTH                      0x00000001

#define _AD1CSS_CSS3_POSITION                    0x00000003
#define _AD1CSS_CSS3_MASK                        0x00000008
#define _AD1CSS_CSS3_LENGTH                      0x00000001

#define _AD1CSS_CSS4_POSITION                    0x00000004
#define _AD1CSS_CSS4_MASK                        0x00000010
#define _AD1CSS_CSS4_LENGTH                      0x00000001

#define _AD1CSS_CSS5_POSITION                    0x00000005
#define _AD1CSS_CSS5_MASK                        0x00000020
#define _AD1CSS_CSS5_LENGTH                      0x00000001

#define _AD1CSS_CSS6_POSITION                    0x00000006
#define _AD1CSS_CSS6_MASK                        0x00000040
#define _AD1CSS_CSS6_LENGTH                      0x00000001

#define _AD1CSS_CSS7_POSITION                    0x00000007
#define _AD1CSS_CSS7_MASK                        0x00000080
#define _AD1CSS_CSS7_LENGTH                      0x00000001

#define _AD1CSS_CSS8_POSITION                    0x00000008
#define _AD1CSS_CSS8_MASK                        0x00000100
#define _AD1CSS_CSS8_LENGTH                      0x00000001

#define _AD1CSS_CSS9_POSITION                    0x00000009
#define _AD1CSS_CSS9_MASK                        0x00000200
#define _AD1CSS_CSS9_LENGTH                      0x00000001

#define _AD1CSS_CSS10_POSITION                   0x0000000A
#define _AD1CSS_CSS10_MASK                       0x00000400
#define _AD1CSS_CSS10_LENGTH                     0x00000001

#define _AD1CSS_CSS11_POSITION                   0x0000000B
#define _AD1CSS_CSS11_MASK                       0x00000800
#define _AD1CSS_CSS11_LENGTH                     0x00000001

#define _AD1CSS_CSS12_POSITION                   0x0000000C
#define _AD1CSS_CSS12_MASK                       0x00001000
#define _AD1CSS_CSS12_LENGTH                     0x00000001

#define _AD1CSS_CSS13_POSITION                   0x0000000D
#define _AD1CSS_CSS13_MASK                       0x00002000
#define _AD1CSS_CSS13_LENGTH                     0x00000001

#define _AD1CSS_CSS14_POSITION                   0x0000000E
#define _AD1CSS_CSS14_MASK                       0x00004000
#define _AD1CSS_CSS14_LENGTH                     0x00000001

#define _AD1CSS_CSS15_POSITION                   0x0000000F
#define _AD1CSS_CSS15_MASK                       0x00008000
#define _AD1CSS_CSS15_LENGTH                     0x00000001

#define _AD1CSS_CSS16_POSITION                   0x00000010
#define _AD1CSS_CSS16_MASK                       0x00010000
#define _AD1CSS_CSS16_LENGTH                     0x00000001

#define _AD1CSS_CSS17_POSITION                   0x00000011
#define _AD1CSS_CSS17_MASK                       0x00020000
#define _AD1CSS_CSS17_LENGTH                     0x00000001

#define _AD1CSS_CSS18_POSITION                   0x00000012
#define _AD1CSS_CSS18_MASK                       0x00040000
#define _AD1CSS_CSS18_LENGTH                     0x00000001

#define _AD1CSS_CSS19_POSITION                   0x00000013
#define _AD1CSS_CSS19_MASK                       0x00080000
#define _AD1CSS_CSS19_LENGTH                     0x00000001

#define _AD1CSS_CSS20_POSITION                   0x00000014
#define _AD1CSS_CSS20_MASK                       0x00100000
#define _AD1CSS_CSS20_LENGTH                     0x00000001

#define _AD1CSS_CSS21_POSITION                   0x00000015
#define _AD1CSS_CSS21_MASK                       0x00200000
#define _AD1CSS_CSS21_LENGTH                     0x00000001

#define _AD1CSS_CSS22_POSITION                   0x00000016
#define _AD1CSS_CSS22_MASK                       0x00400000
#define _AD1CSS_CSS22_LENGTH                     0x00000001

#define _AD1CSS_CSS23_POSITION                   0x00000017
#define _AD1CSS_CSS23_MASK                       0x00800000
#define _AD1CSS_CSS23_LENGTH                     0x00000001

#define _AD1CSS_CSS24_POSITION                   0x00000018
#define _AD1CSS_CSS24_MASK                       0x01000000
#define _AD1CSS_CSS24_LENGTH                     0x00000001

#define _AD1CSS_CSS25_POSITION                   0x00000019
#define _AD1CSS_CSS25_MASK                       0x02000000
#define _AD1CSS_CSS25_LENGTH                     0x00000001

#define _AD1CSS_CSS26_POSITION                   0x0000001A
#define _AD1CSS_CSS26_MASK                       0x04000000
#define _AD1CSS_CSS26_LENGTH                     0x00000001

#define _AD1CSS_CSS27_POSITION                   0x0000001B
#define _AD1CSS_CSS27_MASK                       0x08000000
#define _AD1CSS_CSS27_LENGTH                     0x00000001

#define _AD1CSS_CSS28_POSITION                   0x0000001C
#define _AD1CSS_CSS28_MASK                       0x10000000
#define _AD1CSS_CSS28_LENGTH                     0x00000001

#define _AD1CSS_CSS29_POSITION                   0x0000001D
#define _AD1CSS_CSS29_MASK                       0x20000000
#define _AD1CSS_CSS29_LENGTH                     0x00000001

#define _AD1CSS_CSS30_POSITION                   0x0000001E
#define _AD1CSS_CSS30_MASK                       0x40000000
#define _AD1CSS_CSS30_LENGTH                     0x00000001

#define _AD1CSS_CSS31_POSITION                   0x0000001F
#define _AD1CSS_CSS31_MASK                       0x80000000
#define _AD1CSS_CSS31_LENGTH                     0x00000001

#define _AD1CON5_CM_POSITION                     0x00000000
#define _AD1CON5_CM_MASK                         0x00000003
#define _AD1CON5_CM_LENGTH                       0x00000002

#define _AD1CON5_WM_POSITION                     0x00000002
#define _AD1CON5_WM_MASK                         0x0000000C
#define _AD1CON5_WM_LENGTH                       0x00000002

#define _AD1CON5_ASINT_POSITION                  0x00000008
#define _AD1CON5_ASINT_MASK                      0x00000300
#define _AD1CON5_ASINT_LENGTH                    0x00000002

#define _AD1CON5_BGREQ_POSITION                  0x0000000C
#define _AD1CON5_BGREQ_MASK                      0x00001000
#define _AD1CON5_BGREQ_LENGTH                    0x00000001

#define _AD1CON5_LPEN_POSITION                   0x0000000E
#define _AD1CON5_LPEN_MASK                       0x00004000
#define _AD1CON5_LPEN_LENGTH                     0x00000001

#define _AD1CON5_ASEN_POSITION                   0x0000000F
#define _AD1CON5_ASEN_MASK                       0x00008000
#define _AD1CON5_ASEN_LENGTH                     0x00000001

#define _AD1CHIT_CHH0_POSITION                   0x00000000
#define _AD1CHIT_CHH0_MASK                       0x00000001
#define _AD1CHIT_CHH0_LENGTH                     0x00000001

#define _AD1CHIT_CHH1_POSITION                   0x00000001
#define _AD1CHIT_CHH1_MASK                       0x00000002
#define _AD1CHIT_CHH1_LENGTH                     0x00000001

#define _AD1CHIT_CHH2_POSITION                   0x00000002
#define _AD1CHIT_CHH2_MASK                       0x00000004
#define _AD1CHIT_CHH2_LENGTH                     0x00000001

#define _AD1CHIT_CHH3_POSITION                   0x00000003
#define _AD1CHIT_CHH3_MASK                       0x00000008
#define _AD1CHIT_CHH3_LENGTH                     0x00000001

#define _AD1CHIT_CHH4_POSITION                   0x00000004
#define _AD1CHIT_CHH4_MASK                       0x00000010
#define _AD1CHIT_CHH4_LENGTH                     0x00000001

#define _AD1CHIT_CHH5_POSITION                   0x00000005
#define _AD1CHIT_CHH5_MASK                       0x00000020
#define _AD1CHIT_CHH5_LENGTH                     0x00000001

#define _AD1CHIT_CHH6_POSITION                   0x00000006
#define _AD1CHIT_CHH6_MASK                       0x00000040
#define _AD1CHIT_CHH6_LENGTH                     0x00000001

#define _AD1CHIT_CHH7_POSITION                   0x00000007
#define _AD1CHIT_CHH7_MASK                       0x00000080
#define _AD1CHIT_CHH7_LENGTH                     0x00000001

#define _AD1CHIT_CHH8_POSITION                   0x00000008
#define _AD1CHIT_CHH8_MASK                       0x00000100
#define _AD1CHIT_CHH8_LENGTH                     0x00000001

#define _AD1CHIT_CHH9_POSITION                   0x00000009
#define _AD1CHIT_CHH9_MASK                       0x00000200
#define _AD1CHIT_CHH9_LENGTH                     0x00000001

#define _AD1CHIT_CHH10_POSITION                  0x0000000A
#define _AD1CHIT_CHH10_MASK                      0x00000400
#define _AD1CHIT_CHH10_LENGTH                    0x00000001

#define _AD1CHIT_CHH11_POSITION                  0x0000000B
#define _AD1CHIT_CHH11_MASK                      0x00000800
#define _AD1CHIT_CHH11_LENGTH                    0x00000001

#define _AD1CHIT_CHH12_POSITION                  0x0000000C
#define _AD1CHIT_CHH12_MASK                      0x00001000
#define _AD1CHIT_CHH12_LENGTH                    0x00000001

#define _AD1CHIT_CHH14_POSITION                  0x0000000E
#define _AD1CHIT_CHH14_MASK                      0x00004000
#define _AD1CHIT_CHH14_LENGTH                    0x00000001

#define _AD1CHIT_CHH15_POSITION                  0x0000000F
#define _AD1CHIT_CHH15_MASK                      0x00008000
#define _AD1CHIT_CHH15_LENGTH                    0x00000001

#define _AD1CHIT_CHH16_POSITION                  0x00000010
#define _AD1CHIT_CHH16_MASK                      0x00010000
#define _AD1CHIT_CHH16_LENGTH                    0x00000001

#define _AD1CHIT_CHH17_POSITION                  0x00000011
#define _AD1CHIT_CHH17_MASK                      0x00020000
#define _AD1CHIT_CHH17_LENGTH                    0x00000001

#define _AD1CHIT_CHH18_POSITION                  0x00000012
#define _AD1CHIT_CHH18_MASK                      0x00040000
#define _AD1CHIT_CHH18_LENGTH                    0x00000001

#define _AD1CHIT_CHH19_POSITION                  0x00000013
#define _AD1CHIT_CHH19_MASK                      0x00080000
#define _AD1CHIT_CHH19_LENGTH                    0x00000001

#define _CMSTAT_C1OUT_POSITION                   0x00000000
#define _CMSTAT_C1OUT_MASK                       0x00000001
#define _CMSTAT_C1OUT_LENGTH                     0x00000001

#define _CMSTAT_C2OUT_POSITION                   0x00000001
#define _CMSTAT_C2OUT_MASK                       0x00000002
#define _CMSTAT_C2OUT_LENGTH                     0x00000001

#define _CMSTAT_C3OUT_POSITION                   0x00000002
#define _CMSTAT_C3OUT_MASK                       0x00000004
#define _CMSTAT_C3OUT_LENGTH                     0x00000001

#define _CMSTAT_CVREFSEL_POSITION                0x00000008
#define _CMSTAT_CVREFSEL_MASK                    0x00000100
#define _CMSTAT_CVREFSEL_LENGTH                  0x00000001

#define _CMSTAT_SIDL_POSITION                    0x0000000D
#define _CMSTAT_SIDL_MASK                        0x00002000
#define _CMSTAT_SIDL_LENGTH                      0x00000001

#define _CMSTAT_C1EVT_POSITION                   0x00000010
#define _CMSTAT_C1EVT_MASK                       0x00010000
#define _CMSTAT_C1EVT_LENGTH                     0x00000001

#define _CMSTAT_C2EVT_POSITION                   0x00000011
#define _CMSTAT_C2EVT_MASK                       0x00020000
#define _CMSTAT_C2EVT_LENGTH                     0x00000001

#define _CMSTAT_C3EVT_POSITION                   0x00000012
#define _CMSTAT_C3EVT_MASK                       0x00040000
#define _CMSTAT_C3EVT_LENGTH                     0x00000001

#define _CM1CON_CCH_POSITION                     0x00000000
#define _CM1CON_CCH_MASK                         0x00000003
#define _CM1CON_CCH_LENGTH                       0x00000002

#define _CM1CON_CREF_POSITION                    0x00000004
#define _CM1CON_CREF_MASK                        0x00000010
#define _CM1CON_CREF_LENGTH                      0x00000001

#define _CM1CON_EVPOL_POSITION                   0x00000006
#define _CM1CON_EVPOL_MASK                       0x000000C0
#define _CM1CON_EVPOL_LENGTH                     0x00000002

#define _CM1CON_COUT_POSITION                    0x00000008
#define _CM1CON_COUT_MASK                        0x00000100
#define _CM1CON_COUT_LENGTH                      0x00000001

#define _CM1CON_CEVT_POSITION                    0x00000009
#define _CM1CON_CEVT_MASK                        0x00000200
#define _CM1CON_CEVT_LENGTH                      0x00000001

#define _CM1CON_CPOL_POSITION                    0x0000000D
#define _CM1CON_CPOL_MASK                        0x00002000
#define _CM1CON_CPOL_LENGTH                      0x00000001

#define _CM1CON_COE_POSITION                     0x0000000E
#define _CM1CON_COE_MASK                         0x00004000
#define _CM1CON_COE_LENGTH                       0x00000001

#define _CM1CON_ON_POSITION                      0x0000000F
#define _CM1CON_ON_MASK                          0x00008000
#define _CM1CON_ON_LENGTH                        0x00000001

#define _CM2CON_CCH_POSITION                     0x00000000
#define _CM2CON_CCH_MASK                         0x00000003
#define _CM2CON_CCH_LENGTH                       0x00000002

#define _CM2CON_CREF_POSITION                    0x00000004
#define _CM2CON_CREF_MASK                        0x00000010
#define _CM2CON_CREF_LENGTH                      0x00000001

#define _CM2CON_EVPOL_POSITION                   0x00000006
#define _CM2CON_EVPOL_MASK                       0x000000C0
#define _CM2CON_EVPOL_LENGTH                     0x00000002

#define _CM2CON_COUT_POSITION                    0x00000008
#define _CM2CON_COUT_MASK                        0x00000100
#define _CM2CON_COUT_LENGTH                      0x00000001

#define _CM2CON_CEVT_POSITION                    0x00000009
#define _CM2CON_CEVT_MASK                        0x00000200
#define _CM2CON_CEVT_LENGTH                      0x00000001

#define _CM2CON_CPOL_POSITION                    0x0000000D
#define _CM2CON_CPOL_MASK                        0x00002000
#define _CM2CON_CPOL_LENGTH                      0x00000001

#define _CM2CON_COE_POSITION                     0x0000000E
#define _CM2CON_COE_MASK                         0x00004000
#define _CM2CON_COE_LENGTH                       0x00000001

#define _CM2CON_ON_POSITION                      0x0000000F
#define _CM2CON_ON_MASK                          0x00008000
#define _CM2CON_ON_LENGTH                        0x00000001

#define _CM3CON_CCH_POSITION                     0x00000000
#define _CM3CON_CCH_MASK                         0x00000003
#define _CM3CON_CCH_LENGTH                       0x00000002

#define _CM3CON_CREF_POSITION                    0x00000004
#define _CM3CON_CREF_MASK                        0x00000010
#define _CM3CON_CREF_LENGTH                      0x00000001

#define _CM3CON_EVPOL_POSITION                   0x00000006
#define _CM3CON_EVPOL_MASK                       0x000000C0
#define _CM3CON_EVPOL_LENGTH                     0x00000002

#define _CM3CON_COUT_POSITION                    0x00000008
#define _CM3CON_COUT_MASK                        0x00000100
#define _CM3CON_COUT_LENGTH                      0x00000001

#define _CM3CON_CEVT_POSITION                    0x00000009
#define _CM3CON_CEVT_MASK                        0x00000200
#define _CM3CON_CEVT_LENGTH                      0x00000001

#define _CM3CON_CPOL_POSITION                    0x0000000D
#define _CM3CON_CPOL_MASK                        0x00002000
#define _CM3CON_CPOL_LENGTH                      0x00000001

#define _CM3CON_COE_POSITION                     0x0000000E
#define _CM3CON_COE_MASK                         0x00004000
#define _CM3CON_COE_LENGTH                       0x00000001

#define _CM3CON_ON_POSITION                      0x0000000F
#define _CM3CON_ON_MASK                          0x00008000
#define _CM3CON_ON_LENGTH                        0x00000001

#define _DAC1CON_REFSEL_POSITION                 0x00000000
#define _DAC1CON_REFSEL_MASK                     0x00000003
#define _DAC1CON_REFSEL_LENGTH                   0x00000002

#define _DAC1CON_DACOE_POSITION                  0x00000008
#define _DAC1CON_DACOE_MASK                      0x00000100
#define _DAC1CON_DACOE_LENGTH                    0x00000001

#define _DAC1CON_ON_POSITION                     0x0000000F
#define _DAC1CON_ON_MASK                         0x00008000
#define _DAC1CON_ON_LENGTH                       0x00000001

#define _DAC1CON_DACDAT_POSITION                 0x00000010
#define _DAC1CON_DACDAT_MASK                     0xFFFF0000
#define _DAC1CON_DACDAT_LENGTH                   0x00000010

#define _CLC1CON_MODE_POSITION                   0x00000000
#define _CLC1CON_MODE_MASK                       0x00000007
#define _CLC1CON_MODE_LENGTH                     0x00000003

#define _CLC1CON_LCPOL_POSITION                  0x00000005
#define _CLC1CON_LCPOL_MASK                      0x00000020
#define _CLC1CON_LCPOL_LENGTH                    0x00000001

#define _CLC1CON_LCOUT_POSITION                  0x00000006
#define _CLC1CON_LCOUT_MASK                      0x00000040
#define _CLC1CON_LCOUT_LENGTH                    0x00000001

#define _CLC1CON_LCOE_POSITION                   0x00000007
#define _CLC1CON_LCOE_MASK                       0x00000080
#define _CLC1CON_LCOE_LENGTH                     0x00000001

#define _CLC1CON_INTN_POSITION                   0x0000000A
#define _CLC1CON_INTN_MASK                       0x00000400
#define _CLC1CON_INTN_LENGTH                     0x00000001

#define _CLC1CON_INTP_POSITION                   0x0000000B
#define _CLC1CON_INTP_MASK                       0x00000800
#define _CLC1CON_INTP_LENGTH                     0x00000001

#define _CLC1CON_ON_POSITION                     0x0000000F
#define _CLC1CON_ON_MASK                         0x00008000
#define _CLC1CON_ON_LENGTH                       0x00000001

#define _CLC1CON_G1POL_POSITION                  0x00000010
#define _CLC1CON_G1POL_MASK                      0x00010000
#define _CLC1CON_G1POL_LENGTH                    0x00000001

#define _CLC1CON_G2POL_POSITION                  0x00000011
#define _CLC1CON_G2POL_MASK                      0x00020000
#define _CLC1CON_G2POL_LENGTH                    0x00000001

#define _CLC1CON_G3POL_POSITION                  0x00000012
#define _CLC1CON_G3POL_MASK                      0x00040000
#define _CLC1CON_G3POL_LENGTH                    0x00000001

#define _CLC1CON_G4POL_POSITION                  0x00000013
#define _CLC1CON_G4POL_MASK                      0x00080000
#define _CLC1CON_G4POL_LENGTH                    0x00000001

#define _CLC1SEL_DS1_POSITION                    0x00000000
#define _CLC1SEL_DS1_MASK                        0x00000007
#define _CLC1SEL_DS1_LENGTH                      0x00000003

#define _CLC1SEL_DS2_POSITION                    0x00000004
#define _CLC1SEL_DS2_MASK                        0x00000070
#define _CLC1SEL_DS2_LENGTH                      0x00000003

#define _CLC1SEL_DS3_POSITION                    0x00000008
#define _CLC1SEL_DS3_MASK                        0x00000700
#define _CLC1SEL_DS3_LENGTH                      0x00000003

#define _CLC1SEL_DS4_POSITION                    0x0000000C
#define _CLC1SEL_DS4_MASK                        0x00007000
#define _CLC1SEL_DS4_LENGTH                      0x00000003

#define _CLC1GLS_G1D1N_POSITION                  0x00000000
#define _CLC1GLS_G1D1N_MASK                      0x00000001
#define _CLC1GLS_G1D1N_LENGTH                    0x00000001

#define _CLC1GLS_G1D1T_POSITION                  0x00000001
#define _CLC1GLS_G1D1T_MASK                      0x00000002
#define _CLC1GLS_G1D1T_LENGTH                    0x00000001

#define _CLC1GLS_G1D2N_POSITION                  0x00000002
#define _CLC1GLS_G1D2N_MASK                      0x00000004
#define _CLC1GLS_G1D2N_LENGTH                    0x00000001

#define _CLC1GLS_G1D2T_POSITION                  0x00000003
#define _CLC1GLS_G1D2T_MASK                      0x00000008
#define _CLC1GLS_G1D2T_LENGTH                    0x00000001

#define _CLC1GLS_G1D3N_POSITION                  0x00000004
#define _CLC1GLS_G1D3N_MASK                      0x00000010
#define _CLC1GLS_G1D3N_LENGTH                    0x00000001

#define _CLC1GLS_G1D3T_POSITION                  0x00000005
#define _CLC1GLS_G1D3T_MASK                      0x00000020
#define _CLC1GLS_G1D3T_LENGTH                    0x00000001

#define _CLC1GLS_G1D4N_POSITION                  0x00000006
#define _CLC1GLS_G1D4N_MASK                      0x00000040
#define _CLC1GLS_G1D4N_LENGTH                    0x00000001

#define _CLC1GLS_G1D4T_POSITION                  0x00000007
#define _CLC1GLS_G1D4T_MASK                      0x00000080
#define _CLC1GLS_G1D4T_LENGTH                    0x00000001

#define _CLC1GLS_G2D1N_POSITION                  0x00000008
#define _CLC1GLS_G2D1N_MASK                      0x00000100
#define _CLC1GLS_G2D1N_LENGTH                    0x00000001

#define _CLC1GLS_G2D1T_POSITION                  0x00000009
#define _CLC1GLS_G2D1T_MASK                      0x00000200
#define _CLC1GLS_G2D1T_LENGTH                    0x00000001

#define _CLC1GLS_G2D2N_POSITION                  0x0000000A
#define _CLC1GLS_G2D2N_MASK                      0x00000400
#define _CLC1GLS_G2D2N_LENGTH                    0x00000001

#define _CLC1GLS_G2D2T_POSITION                  0x0000000B
#define _CLC1GLS_G2D2T_MASK                      0x00000800
#define _CLC1GLS_G2D2T_LENGTH                    0x00000001

#define _CLC1GLS_G2D3N_POSITION                  0x0000000C
#define _CLC1GLS_G2D3N_MASK                      0x00001000
#define _CLC1GLS_G2D3N_LENGTH                    0x00000001

#define _CLC1GLS_G2D3T_POSITION                  0x0000000D
#define _CLC1GLS_G2D3T_MASK                      0x00002000
#define _CLC1GLS_G2D3T_LENGTH                    0x00000001

#define _CLC1GLS_G2D4N_POSITION                  0x0000000E
#define _CLC1GLS_G2D4N_MASK                      0x00004000
#define _CLC1GLS_G2D4N_LENGTH                    0x00000001

#define _CLC1GLS_G2D4T_POSITION                  0x0000000F
#define _CLC1GLS_G2D4T_MASK                      0x00008000
#define _CLC1GLS_G2D4T_LENGTH                    0x00000001

#define _CLC1GLS_G3D1N_POSITION                  0x00000010
#define _CLC1GLS_G3D1N_MASK                      0x00010000
#define _CLC1GLS_G3D1N_LENGTH                    0x00000001

#define _CLC1GLS_G3D1T_POSITION                  0x00000011
#define _CLC1GLS_G3D1T_MASK                      0x00020000
#define _CLC1GLS_G3D1T_LENGTH                    0x00000001

#define _CLC1GLS_G3D2N_POSITION                  0x00000012
#define _CLC1GLS_G3D2N_MASK                      0x00040000
#define _CLC1GLS_G3D2N_LENGTH                    0x00000001

#define _CLC1GLS_G3D2T_POSITION                  0x00000013
#define _CLC1GLS_G3D2T_MASK                      0x00080000
#define _CLC1GLS_G3D2T_LENGTH                    0x00000001

#define _CLC1GLS_G3D3N_POSITION                  0x00000014
#define _CLC1GLS_G3D3N_MASK                      0x00100000
#define _CLC1GLS_G3D3N_LENGTH                    0x00000001

#define _CLC1GLS_G3D3T_POSITION                  0x00000015
#define _CLC1GLS_G3D3T_MASK                      0x00200000
#define _CLC1GLS_G3D3T_LENGTH                    0x00000001

#define _CLC1GLS_G3D4N_POSITION                  0x00000016
#define _CLC1GLS_G3D4N_MASK                      0x00400000
#define _CLC1GLS_G3D4N_LENGTH                    0x00000001

#define _CLC1GLS_G3D4T_POSITION                  0x00000017
#define _CLC1GLS_G3D4T_MASK                      0x00800000
#define _CLC1GLS_G3D4T_LENGTH                    0x00000001

#define _CLC1GLS_G4D1N_POSITION                  0x00000018
#define _CLC1GLS_G4D1N_MASK                      0x01000000
#define _CLC1GLS_G4D1N_LENGTH                    0x00000001

#define _CLC1GLS_G4D1T_POSITION                  0x00000019
#define _CLC1GLS_G4D1T_MASK                      0x02000000
#define _CLC1GLS_G4D1T_LENGTH                    0x00000001

#define _CLC1GLS_G4D2N_POSITION                  0x0000001A
#define _CLC1GLS_G4D2N_MASK                      0x04000000
#define _CLC1GLS_G4D2N_LENGTH                    0x00000001

#define _CLC1GLS_G4D2T_POSITION                  0x0000001B
#define _CLC1GLS_G4D2T_MASK                      0x08000000
#define _CLC1GLS_G4D2T_LENGTH                    0x00000001

#define _CLC1GLS_G4D3N_POSITION                  0x0000001C
#define _CLC1GLS_G4D3N_MASK                      0x10000000
#define _CLC1GLS_G4D3N_LENGTH                    0x00000001

#define _CLC1GLS_G4D3T_POSITION                  0x0000001D
#define _CLC1GLS_G4D3T_MASK                      0x20000000
#define _CLC1GLS_G4D3T_LENGTH                    0x00000001

#define _CLC1GLS_G4D4N_POSITION                  0x0000001E
#define _CLC1GLS_G4D4N_MASK                      0x40000000
#define _CLC1GLS_G4D4N_LENGTH                    0x00000001

#define _CLC1GLS_G4D4T_POSITION                  0x0000001F
#define _CLC1GLS_G4D4T_MASK                      0x80000000
#define _CLC1GLS_G4D4T_LENGTH                    0x00000001

#define _CLC2CON_MODE_POSITION                   0x00000000
#define _CLC2CON_MODE_MASK                       0x00000007
#define _CLC2CON_MODE_LENGTH                     0x00000003

#define _CLC2CON_LCPOL_POSITION                  0x00000005
#define _CLC2CON_LCPOL_MASK                      0x00000020
#define _CLC2CON_LCPOL_LENGTH                    0x00000001

#define _CLC2CON_LCOUT_POSITION                  0x00000006
#define _CLC2CON_LCOUT_MASK                      0x00000040
#define _CLC2CON_LCOUT_LENGTH                    0x00000001

#define _CLC2CON_LCOE_POSITION                   0x00000007
#define _CLC2CON_LCOE_MASK                       0x00000080
#define _CLC2CON_LCOE_LENGTH                     0x00000001

#define _CLC2CON_INTN_POSITION                   0x0000000A
#define _CLC2CON_INTN_MASK                       0x00000400
#define _CLC2CON_INTN_LENGTH                     0x00000001

#define _CLC2CON_INTP_POSITION                   0x0000000B
#define _CLC2CON_INTP_MASK                       0x00000800
#define _CLC2CON_INTP_LENGTH                     0x00000001

#define _CLC2CON_ON_POSITION                     0x0000000F
#define _CLC2CON_ON_MASK                         0x00008000
#define _CLC2CON_ON_LENGTH                       0x00000001

#define _CLC2CON_G1POL_POSITION                  0x00000010
#define _CLC2CON_G1POL_MASK                      0x00010000
#define _CLC2CON_G1POL_LENGTH                    0x00000001

#define _CLC2CON_G2POL_POSITION                  0x00000011
#define _CLC2CON_G2POL_MASK                      0x00020000
#define _CLC2CON_G2POL_LENGTH                    0x00000001

#define _CLC2CON_G3POL_POSITION                  0x00000012
#define _CLC2CON_G3POL_MASK                      0x00040000
#define _CLC2CON_G3POL_LENGTH                    0x00000001

#define _CLC2CON_G4POL_POSITION                  0x00000013
#define _CLC2CON_G4POL_MASK                      0x00080000
#define _CLC2CON_G4POL_LENGTH                    0x00000001

#define _CLC2SEL_DS1_POSITION                    0x00000000
#define _CLC2SEL_DS1_MASK                        0x00000007
#define _CLC2SEL_DS1_LENGTH                      0x00000003

#define _CLC2SEL_DS2_POSITION                    0x00000004
#define _CLC2SEL_DS2_MASK                        0x00000070
#define _CLC2SEL_DS2_LENGTH                      0x00000003

#define _CLC2SEL_DS3_POSITION                    0x00000008
#define _CLC2SEL_DS3_MASK                        0x00000700
#define _CLC2SEL_DS3_LENGTH                      0x00000003

#define _CLC2SEL_DS4_POSITION                    0x0000000C
#define _CLC2SEL_DS4_MASK                        0x00007000
#define _CLC2SEL_DS4_LENGTH                      0x00000003

#define _CLC2GLS_G1D1N_POSITION                  0x00000000
#define _CLC2GLS_G1D1N_MASK                      0x00000001
#define _CLC2GLS_G1D1N_LENGTH                    0x00000001

#define _CLC2GLS_G1D1T_POSITION                  0x00000001
#define _CLC2GLS_G1D1T_MASK                      0x00000002
#define _CLC2GLS_G1D1T_LENGTH                    0x00000001

#define _CLC2GLS_G1D2N_POSITION                  0x00000002
#define _CLC2GLS_G1D2N_MASK                      0x00000004
#define _CLC2GLS_G1D2N_LENGTH                    0x00000001

#define _CLC2GLS_G1D2T_POSITION                  0x00000003
#define _CLC2GLS_G1D2T_MASK                      0x00000008
#define _CLC2GLS_G1D2T_LENGTH                    0x00000001

#define _CLC2GLS_G1D3N_POSITION                  0x00000004
#define _CLC2GLS_G1D3N_MASK                      0x00000010
#define _CLC2GLS_G1D3N_LENGTH                    0x00000001

#define _CLC2GLS_G1D3T_POSITION                  0x00000005
#define _CLC2GLS_G1D3T_MASK                      0x00000020
#define _CLC2GLS_G1D3T_LENGTH                    0x00000001

#define _CLC2GLS_G1D4N_POSITION                  0x00000006
#define _CLC2GLS_G1D4N_MASK                      0x00000040
#define _CLC2GLS_G1D4N_LENGTH                    0x00000001

#define _CLC2GLS_G1D4T_POSITION                  0x00000007
#define _CLC2GLS_G1D4T_MASK                      0x00000080
#define _CLC2GLS_G1D4T_LENGTH                    0x00000001

#define _CLC2GLS_G2D1N_POSITION                  0x00000008
#define _CLC2GLS_G2D1N_MASK                      0x00000100
#define _CLC2GLS_G2D1N_LENGTH                    0x00000001

#define _CLC2GLS_G2D1T_POSITION                  0x00000009
#define _CLC2GLS_G2D1T_MASK                      0x00000200
#define _CLC2GLS_G2D1T_LENGTH                    0x00000001

#define _CLC2GLS_G2D2N_POSITION                  0x0000000A
#define _CLC2GLS_G2D2N_MASK                      0x00000400
#define _CLC2GLS_G2D2N_LENGTH                    0x00000001

#define _CLC2GLS_G2D2T_POSITION                  0x0000000B
#define _CLC2GLS_G2D2T_MASK                      0x00000800
#define _CLC2GLS_G2D2T_LENGTH                    0x00000001

#define _CLC2GLS_G2D3N_POSITION                  0x0000000C
#define _CLC2GLS_G2D3N_MASK                      0x00001000
#define _CLC2GLS_G2D3N_LENGTH                    0x00000001

#define _CLC2GLS_G2D3T_POSITION                  0x0000000D
#define _CLC2GLS_G2D3T_MASK                      0x00002000
#define _CLC2GLS_G2D3T_LENGTH                    0x00000001

#define _CLC2GLS_G2D4N_POSITION                  0x0000000E
#define _CLC2GLS_G2D4N_MASK                      0x00004000
#define _CLC2GLS_G2D4N_LENGTH                    0x00000001

#define _CLC2GLS_G2D4T_POSITION                  0x0000000F
#define _CLC2GLS_G2D4T_MASK                      0x00008000
#define _CLC2GLS_G2D4T_LENGTH                    0x00000001

#define _CLC2GLS_G3D1N_POSITION                  0x00000010
#define _CLC2GLS_G3D1N_MASK                      0x00010000
#define _CLC2GLS_G3D1N_LENGTH                    0x00000001

#define _CLC2GLS_G3D1T_POSITION                  0x00000011
#define _CLC2GLS_G3D1T_MASK                      0x00020000
#define _CLC2GLS_G3D1T_LENGTH                    0x00000001

#define _CLC2GLS_G3D2N_POSITION                  0x00000012
#define _CLC2GLS_G3D2N_MASK                      0x00040000
#define _CLC2GLS_G3D2N_LENGTH                    0x00000001

#define _CLC2GLS_G3D2T_POSITION                  0x00000013
#define _CLC2GLS_G3D2T_MASK                      0x00080000
#define _CLC2GLS_G3D2T_LENGTH                    0x00000001

#define _CLC2GLS_G3D3N_POSITION                  0x00000014
#define _CLC2GLS_G3D3N_MASK                      0x00100000
#define _CLC2GLS_G3D3N_LENGTH                    0x00000001

#define _CLC2GLS_G3D3T_POSITION                  0x00000015
#define _CLC2GLS_G3D3T_MASK                      0x00200000
#define _CLC2GLS_G3D3T_LENGTH                    0x00000001

#define _CLC2GLS_G3D4N_POSITION                  0x00000016
#define _CLC2GLS_G3D4N_MASK                      0x00400000
#define _CLC2GLS_G3D4N_LENGTH                    0x00000001

#define _CLC2GLS_G3D4T_POSITION                  0x00000017
#define _CLC2GLS_G3D4T_MASK                      0x00800000
#define _CLC2GLS_G3D4T_LENGTH                    0x00000001

#define _CLC2GLS_G4D1N_POSITION                  0x00000018
#define _CLC2GLS_G4D1N_MASK                      0x01000000
#define _CLC2GLS_G4D1N_LENGTH                    0x00000001

#define _CLC2GLS_G4D1T_POSITION                  0x00000019
#define _CLC2GLS_G4D1T_MASK                      0x02000000
#define _CLC2GLS_G4D1T_LENGTH                    0x00000001

#define _CLC2GLS_G4D2N_POSITION                  0x0000001A
#define _CLC2GLS_G4D2N_MASK                      0x04000000
#define _CLC2GLS_G4D2N_LENGTH                    0x00000001

#define _CLC2GLS_G4D2T_POSITION                  0x0000001B
#define _CLC2GLS_G4D2T_MASK                      0x08000000
#define _CLC2GLS_G4D2T_LENGTH                    0x00000001

#define _CLC2GLS_G4D3N_POSITION                  0x0000001C
#define _CLC2GLS_G4D3N_MASK                      0x10000000
#define _CLC2GLS_G4D3N_LENGTH                    0x00000001

#define _CLC2GLS_G4D3T_POSITION                  0x0000001D
#define _CLC2GLS_G4D3T_MASK                      0x20000000
#define _CLC2GLS_G4D3T_LENGTH                    0x00000001

#define _CLC2GLS_G4D4N_POSITION                  0x0000001E
#define _CLC2GLS_G4D4N_MASK                      0x40000000
#define _CLC2GLS_G4D4N_LENGTH                    0x00000001

#define _CLC2GLS_G4D4T_POSITION                  0x0000001F
#define _CLC2GLS_G4D4T_MASK                      0x80000000
#define _CLC2GLS_G4D4T_LENGTH                    0x00000001

#define _CLC3CON_MODE_POSITION                   0x00000000
#define _CLC3CON_MODE_MASK                       0x00000007
#define _CLC3CON_MODE_LENGTH                     0x00000003

#define _CLC3CON_LCPOL_POSITION                  0x00000005
#define _CLC3CON_LCPOL_MASK                      0x00000020
#define _CLC3CON_LCPOL_LENGTH                    0x00000001

#define _CLC3CON_LCOUT_POSITION                  0x00000006
#define _CLC3CON_LCOUT_MASK                      0x00000040
#define _CLC3CON_LCOUT_LENGTH                    0x00000001

#define _CLC3CON_LCOE_POSITION                   0x00000007
#define _CLC3CON_LCOE_MASK                       0x00000080
#define _CLC3CON_LCOE_LENGTH                     0x00000001

#define _CLC3CON_INTN_POSITION                   0x0000000A
#define _CLC3CON_INTN_MASK                       0x00000400
#define _CLC3CON_INTN_LENGTH                     0x00000001

#define _CLC3CON_INTP_POSITION                   0x0000000B
#define _CLC3CON_INTP_MASK                       0x00000800
#define _CLC3CON_INTP_LENGTH                     0x00000001

#define _CLC3CON_ON_POSITION                     0x0000000F
#define _CLC3CON_ON_MASK                         0x00008000
#define _CLC3CON_ON_LENGTH                       0x00000001

#define _CLC3CON_G1POL_POSITION                  0x00000010
#define _CLC3CON_G1POL_MASK                      0x00010000
#define _CLC3CON_G1POL_LENGTH                    0x00000001

#define _CLC3CON_G2POL_POSITION                  0x00000011
#define _CLC3CON_G2POL_MASK                      0x00020000
#define _CLC3CON_G2POL_LENGTH                    0x00000001

#define _CLC3CON_G3POL_POSITION                  0x00000012
#define _CLC3CON_G3POL_MASK                      0x00040000
#define _CLC3CON_G3POL_LENGTH                    0x00000001

#define _CLC3CON_G4POL_POSITION                  0x00000013
#define _CLC3CON_G4POL_MASK                      0x00080000
#define _CLC3CON_G4POL_LENGTH                    0x00000001

#define _CLC3SEL_DS1_POSITION                    0x00000000
#define _CLC3SEL_DS1_MASK                        0x00000007
#define _CLC3SEL_DS1_LENGTH                      0x00000003

#define _CLC3SEL_DS2_POSITION                    0x00000004
#define _CLC3SEL_DS2_MASK                        0x00000070
#define _CLC3SEL_DS2_LENGTH                      0x00000003

#define _CLC3SEL_DS3_POSITION                    0x00000008
#define _CLC3SEL_DS3_MASK                        0x00000700
#define _CLC3SEL_DS3_LENGTH                      0x00000003

#define _CLC3SEL_DS4_POSITION                    0x0000000C
#define _CLC3SEL_DS4_MASK                        0x00007000
#define _CLC3SEL_DS4_LENGTH                      0x00000003

#define _CLC3GLS_G1D1N_POSITION                  0x00000000
#define _CLC3GLS_G1D1N_MASK                      0x00000001
#define _CLC3GLS_G1D1N_LENGTH                    0x00000001

#define _CLC3GLS_G1D1T_POSITION                  0x00000001
#define _CLC3GLS_G1D1T_MASK                      0x00000002
#define _CLC3GLS_G1D1T_LENGTH                    0x00000001

#define _CLC3GLS_G1D2N_POSITION                  0x00000002
#define _CLC3GLS_G1D2N_MASK                      0x00000004
#define _CLC3GLS_G1D2N_LENGTH                    0x00000001

#define _CLC3GLS_G1D2T_POSITION                  0x00000003
#define _CLC3GLS_G1D2T_MASK                      0x00000008
#define _CLC3GLS_G1D2T_LENGTH                    0x00000001

#define _CLC3GLS_G1D3N_POSITION                  0x00000004
#define _CLC3GLS_G1D3N_MASK                      0x00000010
#define _CLC3GLS_G1D3N_LENGTH                    0x00000001

#define _CLC3GLS_G1D3T_POSITION                  0x00000005
#define _CLC3GLS_G1D3T_MASK                      0x00000020
#define _CLC3GLS_G1D3T_LENGTH                    0x00000001

#define _CLC3GLS_G1D4N_POSITION                  0x00000006
#define _CLC3GLS_G1D4N_MASK                      0x00000040
#define _CLC3GLS_G1D4N_LENGTH                    0x00000001

#define _CLC3GLS_G1D4T_POSITION                  0x00000007
#define _CLC3GLS_G1D4T_MASK                      0x00000080
#define _CLC3GLS_G1D4T_LENGTH                    0x00000001

#define _CLC3GLS_G2D1N_POSITION                  0x00000008
#define _CLC3GLS_G2D1N_MASK                      0x00000100
#define _CLC3GLS_G2D1N_LENGTH                    0x00000001

#define _CLC3GLS_G2D1T_POSITION                  0x00000009
#define _CLC3GLS_G2D1T_MASK                      0x00000200
#define _CLC3GLS_G2D1T_LENGTH                    0x00000001

#define _CLC3GLS_G2D2N_POSITION                  0x0000000A
#define _CLC3GLS_G2D2N_MASK                      0x00000400
#define _CLC3GLS_G2D2N_LENGTH                    0x00000001

#define _CLC3GLS_G2D2T_POSITION                  0x0000000B
#define _CLC3GLS_G2D2T_MASK                      0x00000800
#define _CLC3GLS_G2D2T_LENGTH                    0x00000001

#define _CLC3GLS_G2D3N_POSITION                  0x0000000C
#define _CLC3GLS_G2D3N_MASK                      0x00001000
#define _CLC3GLS_G2D3N_LENGTH                    0x00000001

#define _CLC3GLS_G2D3T_POSITION                  0x0000000D
#define _CLC3GLS_G2D3T_MASK                      0x00002000
#define _CLC3GLS_G2D3T_LENGTH                    0x00000001

#define _CLC3GLS_G2D4N_POSITION                  0x0000000E
#define _CLC3GLS_G2D4N_MASK                      0x00004000
#define _CLC3GLS_G2D4N_LENGTH                    0x00000001

#define _CLC3GLS_G2D4T_POSITION                  0x0000000F
#define _CLC3GLS_G2D4T_MASK                      0x00008000
#define _CLC3GLS_G2D4T_LENGTH                    0x00000001

#define _CLC3GLS_G3D1N_POSITION                  0x00000010
#define _CLC3GLS_G3D1N_MASK                      0x00010000
#define _CLC3GLS_G3D1N_LENGTH                    0x00000001

#define _CLC3GLS_G3D1T_POSITION                  0x00000011
#define _CLC3GLS_G3D1T_MASK                      0x00020000
#define _CLC3GLS_G3D1T_LENGTH                    0x00000001

#define _CLC3GLS_G3D2N_POSITION                  0x00000012
#define _CLC3GLS_G3D2N_MASK                      0x00040000
#define _CLC3GLS_G3D2N_LENGTH                    0x00000001

#define _CLC3GLS_G3D2T_POSITION                  0x00000013
#define _CLC3GLS_G3D2T_MASK                      0x00080000
#define _CLC3GLS_G3D2T_LENGTH                    0x00000001

#define _CLC3GLS_G3D3N_POSITION                  0x00000014
#define _CLC3GLS_G3D3N_MASK                      0x00100000
#define _CLC3GLS_G3D3N_LENGTH                    0x00000001

#define _CLC3GLS_G3D3T_POSITION                  0x00000015
#define _CLC3GLS_G3D3T_MASK                      0x00200000
#define _CLC3GLS_G3D3T_LENGTH                    0x00000001

#define _CLC3GLS_G3D4N_POSITION                  0x00000016
#define _CLC3GLS_G3D4N_MASK                      0x00400000
#define _CLC3GLS_G3D4N_LENGTH                    0x00000001

#define _CLC3GLS_G3D4T_POSITION                  0x00000017
#define _CLC3GLS_G3D4T_MASK                      0x00800000
#define _CLC3GLS_G3D4T_LENGTH                    0x00000001

#define _CLC3GLS_G4D1N_POSITION                  0x00000018
#define _CLC3GLS_G4D1N_MASK                      0x01000000
#define _CLC3GLS_G4D1N_LENGTH                    0x00000001

#define _CLC3GLS_G4D1T_POSITION                  0x00000019
#define _CLC3GLS_G4D1T_MASK                      0x02000000
#define _CLC3GLS_G4D1T_LENGTH                    0x00000001

#define _CLC3GLS_G4D2N_POSITION                  0x0000001A
#define _CLC3GLS_G4D2N_MASK                      0x04000000
#define _CLC3GLS_G4D2N_LENGTH                    0x00000001

#define _CLC3GLS_G4D2T_POSITION                  0x0000001B
#define _CLC3GLS_G4D2T_MASK                      0x08000000
#define _CLC3GLS_G4D2T_LENGTH                    0x00000001

#define _CLC3GLS_G4D3N_POSITION                  0x0000001C
#define _CLC3GLS_G4D3N_MASK                      0x10000000
#define _CLC3GLS_G4D3N_LENGTH                    0x00000001

#define _CLC3GLS_G4D3T_POSITION                  0x0000001D
#define _CLC3GLS_G4D3T_MASK                      0x20000000
#define _CLC3GLS_G4D3T_LENGTH                    0x00000001

#define _CLC3GLS_G4D4N_POSITION                  0x0000001E
#define _CLC3GLS_G4D4N_MASK                      0x40000000
#define _CLC3GLS_G4D4N_LENGTH                    0x00000001

#define _CLC3GLS_G4D4T_POSITION                  0x0000001F
#define _CLC3GLS_G4D4T_MASK                      0x80000000
#define _CLC3GLS_G4D4T_LENGTH                    0x00000001

#define _CLC4CON_MODE_POSITION                   0x00000000
#define _CLC4CON_MODE_MASK                       0x00000007
#define _CLC4CON_MODE_LENGTH                     0x00000003

#define _CLC4CON_LCPOL_POSITION                  0x00000005
#define _CLC4CON_LCPOL_MASK                      0x00000020
#define _CLC4CON_LCPOL_LENGTH                    0x00000001

#define _CLC4CON_LCOUT_POSITION                  0x00000006
#define _CLC4CON_LCOUT_MASK                      0x00000040
#define _CLC4CON_LCOUT_LENGTH                    0x00000001

#define _CLC4CON_LCOE_POSITION                   0x00000007
#define _CLC4CON_LCOE_MASK                       0x00000080
#define _CLC4CON_LCOE_LENGTH                     0x00000001

#define _CLC4CON_INTN_POSITION                   0x0000000A
#define _CLC4CON_INTN_MASK                       0x00000400
#define _CLC4CON_INTN_LENGTH                     0x00000001

#define _CLC4CON_INTP_POSITION                   0x0000000B
#define _CLC4CON_INTP_MASK                       0x00000800
#define _CLC4CON_INTP_LENGTH                     0x00000001

#define _CLC4CON_ON_POSITION                     0x0000000F
#define _CLC4CON_ON_MASK                         0x00008000
#define _CLC4CON_ON_LENGTH                       0x00000001

#define _CLC4CON_G1POL_POSITION                  0x00000010
#define _CLC4CON_G1POL_MASK                      0x00010000
#define _CLC4CON_G1POL_LENGTH                    0x00000001

#define _CLC4CON_G2POL_POSITION                  0x00000011
#define _CLC4CON_G2POL_MASK                      0x00020000
#define _CLC4CON_G2POL_LENGTH                    0x00000001

#define _CLC4CON_G3POL_POSITION                  0x00000012
#define _CLC4CON_G3POL_MASK                      0x00040000
#define _CLC4CON_G3POL_LENGTH                    0x00000001

#define _CLC4CON_G4POL_POSITION                  0x00000013
#define _CLC4CON_G4POL_MASK                      0x00080000
#define _CLC4CON_G4POL_LENGTH                    0x00000001

#define _CLC4SEL_DS1_POSITION                    0x00000000
#define _CLC4SEL_DS1_MASK                        0x00000007
#define _CLC4SEL_DS1_LENGTH                      0x00000003

#define _CLC4SEL_DS2_POSITION                    0x00000004
#define _CLC4SEL_DS2_MASK                        0x00000070
#define _CLC4SEL_DS2_LENGTH                      0x00000003

#define _CLC4SEL_DS3_POSITION                    0x00000008
#define _CLC4SEL_DS3_MASK                        0x00000700
#define _CLC4SEL_DS3_LENGTH                      0x00000003

#define _CLC4SEL_DS4_POSITION                    0x0000000C
#define _CLC4SEL_DS4_MASK                        0x00007000
#define _CLC4SEL_DS4_LENGTH                      0x00000003

#define _CLC4GLS_G1D1N_POSITION                  0x00000000
#define _CLC4GLS_G1D1N_MASK                      0x00000001
#define _CLC4GLS_G1D1N_LENGTH                    0x00000001

#define _CLC4GLS_G1D1T_POSITION                  0x00000001
#define _CLC4GLS_G1D1T_MASK                      0x00000002
#define _CLC4GLS_G1D1T_LENGTH                    0x00000001

#define _CLC4GLS_G1D2N_POSITION                  0x00000002
#define _CLC4GLS_G1D2N_MASK                      0x00000004
#define _CLC4GLS_G1D2N_LENGTH                    0x00000001

#define _CLC4GLS_G1D2T_POSITION                  0x00000003
#define _CLC4GLS_G1D2T_MASK                      0x00000008
#define _CLC4GLS_G1D2T_LENGTH                    0x00000001

#define _CLC4GLS_G1D3N_POSITION                  0x00000004
#define _CLC4GLS_G1D3N_MASK                      0x00000010
#define _CLC4GLS_G1D3N_LENGTH                    0x00000001

#define _CLC4GLS_G1D3T_POSITION                  0x00000005
#define _CLC4GLS_G1D3T_MASK                      0x00000020
#define _CLC4GLS_G1D3T_LENGTH                    0x00000001

#define _CLC4GLS_G1D4N_POSITION                  0x00000006
#define _CLC4GLS_G1D4N_MASK                      0x00000040
#define _CLC4GLS_G1D4N_LENGTH                    0x00000001

#define _CLC4GLS_G1D4T_POSITION                  0x00000007
#define _CLC4GLS_G1D4T_MASK                      0x00000080
#define _CLC4GLS_G1D4T_LENGTH                    0x00000001

#define _CLC4GLS_G2D1N_POSITION                  0x00000008
#define _CLC4GLS_G2D1N_MASK                      0x00000100
#define _CLC4GLS_G2D1N_LENGTH                    0x00000001

#define _CLC4GLS_G2D1T_POSITION                  0x00000009
#define _CLC4GLS_G2D1T_MASK                      0x00000200
#define _CLC4GLS_G2D1T_LENGTH                    0x00000001

#define _CLC4GLS_G2D2N_POSITION                  0x0000000A
#define _CLC4GLS_G2D2N_MASK                      0x00000400
#define _CLC4GLS_G2D2N_LENGTH                    0x00000001

#define _CLC4GLS_G2D2T_POSITION                  0x0000000B
#define _CLC4GLS_G2D2T_MASK                      0x00000800
#define _CLC4GLS_G2D2T_LENGTH                    0x00000001

#define _CLC4GLS_G2D3N_POSITION                  0x0000000C
#define _CLC4GLS_G2D3N_MASK                      0x00001000
#define _CLC4GLS_G2D3N_LENGTH                    0x00000001

#define _CLC4GLS_G2D3T_POSITION                  0x0000000D
#define _CLC4GLS_G2D3T_MASK                      0x00002000
#define _CLC4GLS_G2D3T_LENGTH                    0x00000001

#define _CLC4GLS_G2D4N_POSITION                  0x0000000E
#define _CLC4GLS_G2D4N_MASK                      0x00004000
#define _CLC4GLS_G2D4N_LENGTH                    0x00000001

#define _CLC4GLS_G2D4T_POSITION                  0x0000000F
#define _CLC4GLS_G2D4T_MASK                      0x00008000
#define _CLC4GLS_G2D4T_LENGTH                    0x00000001

#define _CLC4GLS_G3D1N_POSITION                  0x00000010
#define _CLC4GLS_G3D1N_MASK                      0x00010000
#define _CLC4GLS_G3D1N_LENGTH                    0x00000001

#define _CLC4GLS_G3D1T_POSITION                  0x00000011
#define _CLC4GLS_G3D1T_MASK                      0x00020000
#define _CLC4GLS_G3D1T_LENGTH                    0x00000001

#define _CLC4GLS_G3D2N_POSITION                  0x00000012
#define _CLC4GLS_G3D2N_MASK                      0x00040000
#define _CLC4GLS_G3D2N_LENGTH                    0x00000001

#define _CLC4GLS_G3D2T_POSITION                  0x00000013
#define _CLC4GLS_G3D2T_MASK                      0x00080000
#define _CLC4GLS_G3D2T_LENGTH                    0x00000001

#define _CLC4GLS_G3D3N_POSITION                  0x00000014
#define _CLC4GLS_G3D3N_MASK                      0x00100000
#define _CLC4GLS_G3D3N_LENGTH                    0x00000001

#define _CLC4GLS_G3D3T_POSITION                  0x00000015
#define _CLC4GLS_G3D3T_MASK                      0x00200000
#define _CLC4GLS_G3D3T_LENGTH                    0x00000001

#define _CLC4GLS_G3D4N_POSITION                  0x00000016
#define _CLC4GLS_G3D4N_MASK                      0x00400000
#define _CLC4GLS_G3D4N_LENGTH                    0x00000001

#define _CLC4GLS_G3D4T_POSITION                  0x00000017
#define _CLC4GLS_G3D4T_MASK                      0x00800000
#define _CLC4GLS_G3D4T_LENGTH                    0x00000001

#define _CLC4GLS_G4D1N_POSITION                  0x00000018
#define _CLC4GLS_G4D1N_MASK                      0x01000000
#define _CLC4GLS_G4D1N_LENGTH                    0x00000001

#define _CLC4GLS_G4D1T_POSITION                  0x00000019
#define _CLC4GLS_G4D1T_MASK                      0x02000000
#define _CLC4GLS_G4D1T_LENGTH                    0x00000001

#define _CLC4GLS_G4D2N_POSITION                  0x0000001A
#define _CLC4GLS_G4D2N_MASK                      0x04000000
#define _CLC4GLS_G4D2N_LENGTH                    0x00000001

#define _CLC4GLS_G4D2T_POSITION                  0x0000001B
#define _CLC4GLS_G4D2T_MASK                      0x08000000
#define _CLC4GLS_G4D2T_LENGTH                    0x00000001

#define _CLC4GLS_G4D3N_POSITION                  0x0000001C
#define _CLC4GLS_G4D3N_MASK                      0x10000000
#define _CLC4GLS_G4D3N_LENGTH                    0x00000001

#define _CLC4GLS_G4D3T_POSITION                  0x0000001D
#define _CLC4GLS_G4D3T_MASK                      0x20000000
#define _CLC4GLS_G4D3T_LENGTH                    0x00000001

#define _CLC4GLS_G4D4N_POSITION                  0x0000001E
#define _CLC4GLS_G4D4N_MASK                      0x40000000
#define _CLC4GLS_G4D4N_LENGTH                    0x00000001

#define _CLC4GLS_G4D4T_POSITION                  0x0000001F
#define _CLC4GLS_G4D4T_MASK                      0x80000000
#define _CLC4GLS_G4D4T_LENGTH                    0x00000001

#define _OSCCON_OSWEN_POSITION                   0x00000000
#define _OSCCON_OSWEN_MASK                       0x00000001
#define _OSCCON_OSWEN_LENGTH                     0x00000001

#define _OSCCON_SOSCEN_POSITION                  0x00000001
#define _OSCCON_SOSCEN_MASK                      0x00000002
#define _OSCCON_SOSCEN_LENGTH                    0x00000001

#define _OSCCON_CF_POSITION                      0x00000003
#define _OSCCON_CF_MASK                          0x00000008
#define _OSCCON_CF_LENGTH                        0x00000001

#define _OSCCON_SLPEN_POSITION                   0x00000004
#define _OSCCON_SLPEN_MASK                       0x00000010
#define _OSCCON_SLPEN_LENGTH                     0x00000001

#define _OSCCON_CLKLOCK_POSITION                 0x00000007
#define _OSCCON_CLKLOCK_MASK                     0x00000080
#define _OSCCON_CLKLOCK_LENGTH                   0x00000001

#define _OSCCON_NOSC_POSITION                    0x00000008
#define _OSCCON_NOSC_MASK                        0x00000700
#define _OSCCON_NOSC_LENGTH                      0x00000003

#define _OSCCON_COSC_POSITION                    0x0000000C
#define _OSCCON_COSC_MASK                        0x00007000
#define _OSCCON_COSC_LENGTH                      0x00000003

#define _OSCCON_SLP2SPD_POSITION                 0x00000015
#define _OSCCON_SLP2SPD_MASK                     0x00200000
#define _OSCCON_SLP2SPD_LENGTH                   0x00000001

#define _OSCCON_DRMEN_POSITION                   0x00000017
#define _OSCCON_DRMEN_MASK                       0x00800000
#define _OSCCON_DRMEN_LENGTH                     0x00000001

#define _OSCCON_FRCDIV_POSITION                  0x00000018
#define _OSCCON_FRCDIV_MASK                      0x07000000
#define _OSCCON_FRCDIV_LENGTH                    0x00000003

#define _SPLLCON_PLLICLK_POSITION                0x00000007
#define _SPLLCON_PLLICLK_MASK                    0x00000080
#define _SPLLCON_PLLICLK_LENGTH                  0x00000001

#define _SPLLCON_PLLMULT_POSITION                0x00000010
#define _SPLLCON_PLLMULT_MASK                    0x007F0000
#define _SPLLCON_PLLMULT_LENGTH                  0x00000007

#define _SPLLCON_PLLODIV_POSITION                0x00000018
#define _SPLLCON_PLLODIV_MASK                    0x07000000
#define _SPLLCON_PLLODIV_LENGTH                  0x00000003

#define _RCON_POR_POSITION                       0x00000000
#define _RCON_POR_MASK                           0x00000001
#define _RCON_POR_LENGTH                         0x00000001

#define _RCON_BOR_POSITION                       0x00000001
#define _RCON_BOR_MASK                           0x00000002
#define _RCON_BOR_LENGTH                         0x00000001

#define _RCON_IDLE_POSITION                      0x00000002
#define _RCON_IDLE_MASK                          0x00000004
#define _RCON_IDLE_LENGTH                        0x00000001

#define _RCON_SLEEP_POSITION                     0x00000003
#define _RCON_SLEEP_MASK                         0x00000008
#define _RCON_SLEEP_LENGTH                       0x00000001

#define _RCON_WDTO_POSITION                      0x00000004
#define _RCON_WDTO_MASK                          0x00000010
#define _RCON_WDTO_LENGTH                        0x00000001

#define _RCON_SWR_POSITION                       0x00000006
#define _RCON_SWR_MASK                           0x00000040
#define _RCON_SWR_LENGTH                         0x00000001

#define _RCON_EXTR_POSITION                      0x00000007
#define _RCON_EXTR_MASK                          0x00000080
#define _RCON_EXTR_LENGTH                        0x00000001

#define _RCON_CMR_POSITION                       0x00000009
#define _RCON_CMR_MASK                           0x00000200
#define _RCON_CMR_LENGTH                         0x00000001

#define _RCON_BCFGFAIL_POSITION                  0x0000001A
#define _RCON_BCFGFAIL_MASK                      0x04000000
#define _RCON_BCFGFAIL_LENGTH                    0x00000001

#define _RCON_BCFGERR_POSITION                   0x0000001B
#define _RCON_BCFGERR_MASK                       0x08000000
#define _RCON_BCFGERR_LENGTH                     0x00000001

#define _RCON_PORCORE_POSITION                   0x0000001E
#define _RCON_PORCORE_MASK                       0x40000000
#define _RCON_PORCORE_LENGTH                     0x00000001

#define _RCON_PORIO_POSITION                     0x0000001F
#define _RCON_PORIO_MASK                         0x80000000
#define _RCON_PORIO_LENGTH                       0x00000001

#define _RSWRST_SWRST_POSITION                   0x00000000
#define _RSWRST_SWRST_MASK                       0x00000001
#define _RSWRST_SWRST_LENGTH                     0x00000001

#define _RNMICON_NMICNT_POSITION                 0x00000000
#define _RNMICON_NMICNT_MASK                     0x0000FFFF
#define _RNMICON_NMICNT_LENGTH                   0x00000010

#define _RNMICON_WDTS_POSITION                   0x00000010
#define _RNMICON_WDTS_MASK                       0x00010000
#define _RNMICON_WDTS_LENGTH                     0x00000001

#define _RNMICON_CF_POSITION                     0x00000011
#define _RNMICON_CF_MASK                         0x00020000
#define _RNMICON_CF_LENGTH                       0x00000001

#define _RNMICON_LVD_POSITION                    0x00000012
#define _RNMICON_LVD_MASK                        0x00040000
#define _RNMICON_LVD_LENGTH                      0x00000001

#define _RNMICON_GNMI_POSITION                   0x00000013
#define _RNMICON_GNMI_MASK                       0x00080000
#define _RNMICON_GNMI_LENGTH                     0x00000001

#define _RNMICON_SWNMI_POSITION                  0x00000017
#define _RNMICON_SWNMI_MASK                      0x00800000
#define _RNMICON_SWNMI_LENGTH                    0x00000001

#define _RNMICON_WDTO_POSITION                   0x00000018
#define _RNMICON_WDTO_MASK                       0x01000000
#define _RNMICON_WDTO_LENGTH                     0x00000001

#define _RNMICON_WDTR_POSITION                   0x00000018
#define _RNMICON_WDTR_MASK                       0x01000000
#define _RNMICON_WDTR_LENGTH                     0x00000001

#define _PWRCON_VREGS_POSITION                   0x00000000
#define _PWRCON_VREGS_MASK                       0x00000001
#define _PWRCON_VREGS_LENGTH                     0x00000001

#define _PWRCON_RETEN_POSITION                   0x00000001
#define _PWRCON_RETEN_MASK                       0x00000002
#define _PWRCON_RETEN_LENGTH                     0x00000001

#define _PWRCON_SBOREN_POSITION                  0x00000002
#define _PWRCON_SBOREN_MASK                      0x00000004
#define _PWRCON_SBOREN_LENGTH                    0x00000001

#define _REFO1CON_ROSEL_POSITION                 0x00000000
#define _REFO1CON_ROSEL_MASK                     0x0000000F
#define _REFO1CON_ROSEL_LENGTH                   0x00000004

#define _REFO1CON_ACTIVE_POSITION                0x00000008
#define _REFO1CON_ACTIVE_MASK                    0x00000100
#define _REFO1CON_ACTIVE_LENGTH                  0x00000001

#define _REFO1CON_DIVSWEN_POSITION               0x00000009
#define _REFO1CON_DIVSWEN_MASK                   0x00000200
#define _REFO1CON_DIVSWEN_LENGTH                 0x00000001

#define _REFO1CON_RSLP_POSITION                  0x0000000B
#define _REFO1CON_RSLP_MASK                      0x00000800
#define _REFO1CON_RSLP_LENGTH                    0x00000001

#define _REFO1CON_OE_POSITION                    0x0000000C
#define _REFO1CON_OE_MASK                        0x00001000
#define _REFO1CON_OE_LENGTH                      0x00000001

#define _REFO1CON_SIDL_POSITION                  0x0000000D
#define _REFO1CON_SIDL_MASK                      0x00002000
#define _REFO1CON_SIDL_LENGTH                    0x00000001

#define _REFO1CON_ON_POSITION                    0x0000000F
#define _REFO1CON_ON_MASK                        0x00008000
#define _REFO1CON_ON_LENGTH                      0x00000001

#define _REFO1CON_RODIV_POSITION                 0x00000010
#define _REFO1CON_RODIV_MASK                     0x7FFF0000
#define _REFO1CON_RODIV_LENGTH                   0x0000000F

#define _REFO1TRIM_ROTRIM_POSITION               0x00000017
#define _REFO1TRIM_ROTRIM_MASK                   0xFF800000
#define _REFO1TRIM_ROTRIM_LENGTH                 0x00000009

#define _CLKSTAT_FRCRDY_POSITION                 0x00000000
#define _CLKSTAT_FRCRDY_MASK                     0x00000001
#define _CLKSTAT_FRCRDY_LENGTH                   0x00000001

#define _CLKSTAT_SPDIVRDY_POSITION               0x00000001
#define _CLKSTAT_SPDIVRDY_MASK                   0x00000002
#define _CLKSTAT_SPDIVRDY_LENGTH                 0x00000001

#define _CLKSTAT_POSCRDY_POSITION                0x00000002
#define _CLKSTAT_POSCRDY_MASK                    0x00000004
#define _CLKSTAT_POSCRDY_LENGTH                  0x00000001

#define _CLKSTAT_SOSCRDY_POSITION                0x00000004
#define _CLKSTAT_SOSCRDY_MASK                    0x00000010
#define _CLKSTAT_SOSCRDY_LENGTH                  0x00000001

#define _CLKSTAT_LPRCRDY_POSITION                0x00000005
#define _CLKSTAT_LPRCRDY_MASK                    0x00000020
#define _CLKSTAT_LPRCRDY_LENGTH                  0x00000001

#define _CLKSTAT_SPLLRDY_POSITION                0x00000007
#define _CLKSTAT_SPLLRDY_MASK                    0x00000080
#define _CLKSTAT_SPLLRDY_LENGTH                  0x00000001

#define _CLKSTAT_DIVSPLLRDY_POSITION             0x00000001
#define _CLKSTAT_DIVSPLLRDY_MASK                 0x00000002
#define _CLKSTAT_DIVSPLLRDY_LENGTH               0x00000001

#define _OSCTUN_TUN_POSITION                     0x00000000
#define _OSCTUN_TUN_MASK                         0x0000003F
#define _OSCTUN_TUN_LENGTH                       0x00000006

#define _OSCTUN_ORPOL_POSITION                   0x00000008
#define _OSCTUN_ORPOL_MASK                       0x00000100
#define _OSCTUN_ORPOL_LENGTH                     0x00000001

#define _OSCTUN_OR_POSITION                      0x00000009
#define _OSCTUN_OR_MASK                          0x00000200
#define _OSCTUN_OR_LENGTH                        0x00000001

#define _OSCTUN_POL_POSITION                     0x0000000A
#define _OSCTUN_POL_MASK                         0x00000400
#define _OSCTUN_POL_LENGTH                       0x00000001

#define _OSCTUN_LOCK_POSITION                    0x0000000B
#define _OSCTUN_LOCK_MASK                        0x00000800
#define _OSCTUN_LOCK_LENGTH                      0x00000001

#define _OSCTUN_SRC_POSITION                     0x0000000C
#define _OSCTUN_SRC_MASK                         0x00001000
#define _OSCTUN_SRC_LENGTH                       0x00000001

#define _OSCTUN_SIDL_POSITION                    0x0000000D
#define _OSCTUN_SIDL_MASK                        0x00002000
#define _OSCTUN_SIDL_LENGTH                      0x00000001

#define _OSCTUN_ON_POSITION                      0x0000000F
#define _OSCTUN_ON_MASK                          0x00008000
#define _OSCTUN_ON_LENGTH                        0x00000001

#define _ANCFG_BGCMP_POSITION                    0x00000001
#define _ANCFG_BGCMP_MASK                        0x00000002
#define _ANCFG_BGCMP_LENGTH                      0x00000001

#define _ANCFG_BGADC_POSITION                    0x00000002
#define _ANCFG_BGADC_MASK                        0x00000004
#define _ANCFG_BGADC_LENGTH                      0x00000001

#define _ANCFG_VBGCMP_POSITION                   0x00000001
#define _ANCFG_VBGCMP_MASK                       0x00000002
#define _ANCFG_VBGCMP_LENGTH                     0x00000001

#define _ANCFG_VBGADC_POSITION                   0x00000002
#define _ANCFG_VBGADC_MASK                       0x00000004
#define _ANCFG_VBGADC_LENGTH                     0x00000001

#define _HLVDCON_HLVDL_POSITION                  0x00000000
#define _HLVDCON_HLVDL_MASK                      0x0000000F
#define _HLVDCON_HLVDL_LENGTH                    0x00000004

#define _HLVDCON_HLEVT_POSITION                  0x00000008
#define _HLVDCON_HLEVT_MASK                      0x00000100
#define _HLVDCON_HLEVT_LENGTH                    0x00000001

#define _HLVDCON_IRVST_POSITION                  0x00000009
#define _HLVDCON_IRVST_MASK                      0x00000200
#define _HLVDCON_IRVST_LENGTH                    0x00000001

#define _HLVDCON_BGVST_POSITION                  0x0000000A
#define _HLVDCON_BGVST_MASK                      0x00000400
#define _HLVDCON_BGVST_LENGTH                    0x00000001

#define _HLVDCON_VDIR_POSITION                   0x0000000B
#define _HLVDCON_VDIR_MASK                       0x00000800
#define _HLVDCON_VDIR_LENGTH                     0x00000001

#define _HLVDCON_SIDL_POSITION                   0x0000000D
#define _HLVDCON_SIDL_MASK                       0x00002000
#define _HLVDCON_SIDL_LENGTH                     0x00000001

#define _HLVDCON_ON_POSITION                     0x0000000F
#define _HLVDCON_ON_MASK                         0x00008000
#define _HLVDCON_ON_LENGTH                       0x00000001

#define _NVMCON_NVMOP_POSITION                   0x00000000
#define _NVMCON_NVMOP_MASK                       0x0000000F
#define _NVMCON_NVMOP_LENGTH                     0x00000004

#define _NVMCON_LVDERR_POSITION                  0x0000000C
#define _NVMCON_LVDERR_MASK                      0x00001000
#define _NVMCON_LVDERR_LENGTH                    0x00000001

#define _NVMCON_WRERR_POSITION                   0x0000000D
#define _NVMCON_WRERR_MASK                       0x00002000
#define _NVMCON_WRERR_LENGTH                     0x00000001

#define _NVMCON_WREN_POSITION                    0x0000000E
#define _NVMCON_WREN_MASK                        0x00004000
#define _NVMCON_WREN_LENGTH                      0x00000001

#define _NVMCON_WR_POSITION                      0x0000000F
#define _NVMCON_WR_MASK                          0x00008000
#define _NVMCON_WR_LENGTH                        0x00000001

#define _NVMKEY_NVMKEY_POSITION                  0x00000000
#define _NVMKEY_NVMKEY_MASK                      0xFFFFFFFF
#define _NVMKEY_NVMKEY_LENGTH                    0x00000020

#define _NVMADDR_NVMADDR_POSITION                0x00000000
#define _NVMADDR_NVMADDR_MASK                    0xFFFFFFFF
#define _NVMADDR_NVMADDR_LENGTH                  0x00000020

#define _NVMDATA0_NVMDATA0_POSITION              0x00000000
#define _NVMDATA0_NVMDATA0_MASK                  0xFFFFFFFF
#define _NVMDATA0_NVMDATA0_LENGTH                0x00000020

#define _NVMDATA1_NVMDATA1_POSITION              0x00000000
#define _NVMDATA1_NVMDATA1_MASK                  0xFFFFFFFF
#define _NVMDATA1_NVMDATA1_LENGTH                0x00000020

#define _NVMSRCADDR_NVMSRCADDR_POSITION          0x00000000
#define _NVMSRCADDR_NVMSRCADDR_MASK              0xFFFFFFFF
#define _NVMSRCADDR_NVMSRCADDR_LENGTH            0x00000020

#define _NVMPWP_PWP_POSITION                     0x00000000
#define _NVMPWP_PWP_MASK                         0x00FFFFFF
#define _NVMPWP_PWP_LENGTH                       0x00000018

#define _NVMPWP_PWPULOCK_POSITION                0x0000001F
#define _NVMPWP_PWPULOCK_MASK                    0x80000000
#define _NVMPWP_PWPULOCK_LENGTH                  0x00000001

#define _NVMBWP_BWP0_POSITION                    0x00000008
#define _NVMBWP_BWP0_MASK                        0x00000100
#define _NVMBWP_BWP0_LENGTH                      0x00000001

#define _NVMBWP_BWP1_POSITION                    0x00000009
#define _NVMBWP_BWP1_MASK                        0x00000200
#define _NVMBWP_BWP1_LENGTH                      0x00000001

#define _NVMBWP_BWP2_POSITION                    0x0000000A
#define _NVMBWP_BWP2_MASK                        0x00000400
#define _NVMBWP_BWP2_LENGTH                      0x00000001

#define _NVMBWP_BWPULOCK_POSITION                0x0000000F
#define _NVMBWP_BWPULOCK_MASK                    0x00008000
#define _NVMBWP_BWPULOCK_LENGTH                  0x00000001

#define _RPCON_IOLOCK_POSITION                   0x0000000B
#define _RPCON_IOLOCK_MASK                       0x00000800
#define _RPCON_IOLOCK_LENGTH                     0x00000001

#define _RPINR1_INT4R_POSITION                   0x00000000
#define _RPINR1_INT4R_MASK                       0x0000001F
#define _RPINR1_INT4R_LENGTH                     0x00000005

#define _RPINR2_ICM1R_POSITION                   0x00000010
#define _RPINR2_ICM1R_MASK                       0x001F0000
#define _RPINR2_ICM1R_LENGTH                     0x00000005

#define _RPINR2_ICM2R_POSITION                   0x00000018
#define _RPINR2_ICM2R_MASK                       0x1F000000
#define _RPINR2_ICM2R_LENGTH                     0x00000005

#define _RPINR3_ICM3R_POSITION                   0x00000000
#define _RPINR3_ICM3R_MASK                       0x0000001F
#define _RPINR3_ICM3R_LENGTH                     0x00000005

#define _RPINR3_ICM4R_POSITION                   0x00000008
#define _RPINR3_ICM4R_MASK                       0x00001F00
#define _RPINR3_ICM4R_LENGTH                     0x00000005

#define _RPINR5_OCFAR_POSITION                   0x00000010
#define _RPINR5_OCFAR_MASK                       0x001F0000
#define _RPINR5_OCFAR_LENGTH                     0x00000005

#define _RPINR5_OCFBR_POSITION                   0x00000018
#define _RPINR5_OCFBR_MASK                       0x1F000000
#define _RPINR5_OCFBR_LENGTH                     0x00000005

#define _RPINR6_TCKIAR_POSITION                  0x00000000
#define _RPINR6_TCKIAR_MASK                      0x0000001F
#define _RPINR6_TCKIAR_LENGTH                    0x00000005

#define _RPINR6_TCKIBR_POSITION                  0x00000008
#define _RPINR6_TCKIBR_MASK                      0x00001F00
#define _RPINR6_TCKIBR_LENGTH                    0x00000005

#define _RPINR7_ICM5R_POSITION                   0x00000000
#define _RPINR7_ICM5R_MASK                       0x0000001F
#define _RPINR7_ICM5R_LENGTH                     0x00000005

#define _RPINR7_ICM6R_POSITION                   0x00000008
#define _RPINR7_ICM6R_MASK                       0x00001F00
#define _RPINR7_ICM6R_LENGTH                     0x00000005

#define _RPINR7_ICM7R_POSITION                   0x00000010
#define _RPINR7_ICM7R_MASK                       0x001F0000
#define _RPINR7_ICM7R_LENGTH                     0x00000005

#define _RPINR7_ICM8R_POSITION                   0x00000018
#define _RPINR7_ICM8R_MASK                       0x1F000000
#define _RPINR7_ICM8R_LENGTH                     0x00000005

#define _RPINR8_ICM9R_POSITION                   0x00000000
#define _RPINR8_ICM9R_MASK                       0x0000001F
#define _RPINR8_ICM9R_LENGTH                     0x00000005

#define _RPINR8_U3RXR_POSITION                   0x00000018
#define _RPINR8_U3RXR_MASK                       0x1F000000
#define _RPINR8_U3RXR_LENGTH                     0x00000005

#define _RPINR9_U2RXR_POSITION                   0x00000010
#define _RPINR9_U2RXR_MASK                       0x001F0000
#define _RPINR9_U2RXR_LENGTH                     0x00000005

#define _RPINR9_U2CTSR_POSITION                  0x00000018
#define _RPINR9_U2CTSR_MASK                      0x1F000000
#define _RPINR9_U2CTSR_LENGTH                    0x00000005

#define _RPINR10_U3CTSR_POSITION                 0x00000018
#define _RPINR10_U3CTSR_MASK                     0x1F000000
#define _RPINR10_U3CTSR_LENGTH                   0x00000005

#define _RPINR11_SDI2R_POSITION                  0x00000000
#define _RPINR11_SDI2R_MASK                      0x0000001F
#define _RPINR11_SDI2R_LENGTH                    0x00000005

#define _RPINR11_SCK2INR_POSITION                0x00000008
#define _RPINR11_SCK2INR_MASK                    0x00001F00
#define _RPINR11_SCK2INR_LENGTH                  0x00000005

#define _RPINR11_SS2INR_POSITION                 0x00000010
#define _RPINR11_SS2INR_MASK                     0x001F0000
#define _RPINR11_SS2INR_LENGTH                   0x00000005

#define _RPINR12_CLCINAR_POSITION                0x00000010
#define _RPINR12_CLCINAR_MASK                    0x001F0000
#define _RPINR12_CLCINAR_LENGTH                  0x00000005

#define _RPINR12_CLCINBR_POSITION                0x00000018
#define _RPINR12_CLCINBR_MASK                    0x1F000000
#define _RPINR12_CLCINBR_LENGTH                  0x00000005

#define _RPOR0_RP1R_POSITION                     0x00000000
#define _RPOR0_RP1R_MASK                         0x0000001F
#define _RPOR0_RP1R_LENGTH                       0x00000005

#define _RPOR0_RP2R_POSITION                     0x00000008
#define _RPOR0_RP2R_MASK                         0x00001F00
#define _RPOR0_RP2R_LENGTH                       0x00000005

#define _RPOR0_RP3R_POSITION                     0x00000010
#define _RPOR0_RP3R_MASK                         0x001F0000
#define _RPOR0_RP3R_LENGTH                       0x00000005

#define _RPOR0_RP4R_POSITION                     0x00000018
#define _RPOR0_RP4R_MASK                         0x1F000000
#define _RPOR0_RP4R_LENGTH                       0x00000005

#define _RPOR1_RP5R_POSITION                     0x00000000
#define _RPOR1_RP5R_MASK                         0x0000001F
#define _RPOR1_RP5R_LENGTH                       0x00000005

#define _RPOR1_RP6R_POSITION                     0x00000008
#define _RPOR1_RP6R_MASK                         0x00001F00
#define _RPOR1_RP6R_LENGTH                       0x00000005

#define _RPOR1_RP7R_POSITION                     0x00000010
#define _RPOR1_RP7R_MASK                         0x001F0000
#define _RPOR1_RP7R_LENGTH                       0x00000005

#define _RPOR1_RP8R_POSITION                     0x00000018
#define _RPOR1_RP8R_MASK                         0x1F000000
#define _RPOR1_RP8R_LENGTH                       0x00000005

#define _RPOR2_RP9R_POSITION                     0x00000000
#define _RPOR2_RP9R_MASK                         0x0000001F
#define _RPOR2_RP9R_LENGTH                       0x00000005

#define _RPOR2_RP10R_POSITION                    0x00000008
#define _RPOR2_RP10R_MASK                        0x00001F00
#define _RPOR2_RP10R_LENGTH                      0x00000005

#define _RPOR2_RP11R_POSITION                    0x00000010
#define _RPOR2_RP11R_MASK                        0x001F0000
#define _RPOR2_RP11R_LENGTH                      0x00000005

#define _RPOR2_RP12R_POSITION                    0x00000018
#define _RPOR2_RP12R_MASK                        0x1F000000
#define _RPOR2_RP12R_LENGTH                      0x00000005

#define _RPOR3_RP13R_POSITION                    0x00000000
#define _RPOR3_RP13R_MASK                        0x0000001F
#define _RPOR3_RP13R_LENGTH                      0x00000005

#define _RPOR3_RP14R_POSITION                    0x00000008
#define _RPOR3_RP14R_MASK                        0x00001F00
#define _RPOR3_RP14R_LENGTH                      0x00000005

#define _RPOR3_RP15R_POSITION                    0x00000010
#define _RPOR3_RP15R_MASK                        0x001F0000
#define _RPOR3_RP15R_LENGTH                      0x00000005

#define _RPOR3_RP16R_POSITION                    0x00000018
#define _RPOR3_RP16R_MASK                        0x1F000000
#define _RPOR3_RP16R_LENGTH                      0x00000005

#define _RPOR4_RP17R_POSITION                    0x00000000
#define _RPOR4_RP17R_MASK                        0x0000001F
#define _RPOR4_RP17R_LENGTH                      0x00000005

#define _RPOR4_RP18R_POSITION                    0x00000008
#define _RPOR4_RP18R_MASK                        0x00001F00
#define _RPOR4_RP18R_LENGTH                      0x00000005

#define _RPOR4_RP19R_POSITION                    0x00000010
#define _RPOR4_RP19R_MASK                        0x001F0000
#define _RPOR4_RP19R_LENGTH                      0x00000005

#define _RPOR4_RP20R_POSITION                    0x00000018
#define _RPOR4_RP20R_MASK                        0x1F000000
#define _RPOR4_RP20R_LENGTH                      0x00000005

#define _RPOR5_RP21R_POSITION                    0x00000000
#define _RPOR5_RP21R_MASK                        0x0000001F
#define _RPOR5_RP21R_LENGTH                      0x00000005

#define _RPOR5_RP22R_POSITION                    0x00000008
#define _RPOR5_RP22R_MASK                        0x00001F00
#define _RPOR5_RP22R_LENGTH                      0x00000005

#define _RPOR5_RP23R_POSITION                    0x00000010
#define _RPOR5_RP23R_MASK                        0x001F0000
#define _RPOR5_RP23R_LENGTH                      0x00000005

#define _RPOR5_RP24R_POSITION                    0x00000018
#define _RPOR5_RP24R_MASK                        0x1F000000
#define _RPOR5_RP24R_LENGTH                      0x00000005

#define _ANSELA_ANSA0_POSITION                   0x00000000
#define _ANSELA_ANSA0_MASK                       0x00000001
#define _ANSELA_ANSA0_LENGTH                     0x00000001

#define _ANSELA_ANSA1_POSITION                   0x00000001
#define _ANSELA_ANSA1_MASK                       0x00000002
#define _ANSELA_ANSA1_LENGTH                     0x00000001

#define _ANSELA_ANSA2_POSITION                   0x00000002
#define _ANSELA_ANSA2_MASK                       0x00000004
#define _ANSELA_ANSA2_LENGTH                     0x00000001

#define _ANSELA_ANSA3_POSITION                   0x00000003
#define _ANSELA_ANSA3_MASK                       0x00000008
#define _ANSELA_ANSA3_LENGTH                     0x00000001

#define _TRISA_TRISA0_POSITION                   0x00000000
#define _TRISA_TRISA0_MASK                       0x00000001
#define _TRISA_TRISA0_LENGTH                     0x00000001

#define _TRISA_TRISA1_POSITION                   0x00000001
#define _TRISA_TRISA1_MASK                       0x00000002
#define _TRISA_TRISA1_LENGTH                     0x00000001

#define _TRISA_TRISA2_POSITION                   0x00000002
#define _TRISA_TRISA2_MASK                       0x00000004
#define _TRISA_TRISA2_LENGTH                     0x00000001

#define _TRISA_TRISA3_POSITION                   0x00000003
#define _TRISA_TRISA3_MASK                       0x00000008
#define _TRISA_TRISA3_LENGTH                     0x00000001

#define _TRISA_TRISA4_POSITION                   0x00000004
#define _TRISA_TRISA4_MASK                       0x00000010
#define _TRISA_TRISA4_LENGTH                     0x00000001

#define _TRISA_w_POSITION                        0x00000000
#define _TRISA_w_MASK                            0xFFFFFFFF
#define _TRISA_w_LENGTH                          0x00000020

#define _PORTA_RA0_POSITION                      0x00000000
#define _PORTA_RA0_MASK                          0x00000001
#define _PORTA_RA0_LENGTH                        0x00000001

#define _PORTA_RA1_POSITION                      0x00000001
#define _PORTA_RA1_MASK                          0x00000002
#define _PORTA_RA1_LENGTH                        0x00000001

#define _PORTA_RA2_POSITION                      0x00000002
#define _PORTA_RA2_MASK                          0x00000004
#define _PORTA_RA2_LENGTH                        0x00000001

#define _PORTA_RA3_POSITION                      0x00000003
#define _PORTA_RA3_MASK                          0x00000008
#define _PORTA_RA3_LENGTH                        0x00000001

#define _PORTA_RA4_POSITION                      0x00000004
#define _PORTA_RA4_MASK                          0x00000010
#define _PORTA_RA4_LENGTH                        0x00000001

#define _PORTA_w_POSITION                        0x00000000
#define _PORTA_w_MASK                            0xFFFFFFFF
#define _PORTA_w_LENGTH                          0x00000020

#define _LATA_LATA0_POSITION                     0x00000000
#define _LATA_LATA0_MASK                         0x00000001
#define _LATA_LATA0_LENGTH                       0x00000001

#define _LATA_LATA1_POSITION                     0x00000001
#define _LATA_LATA1_MASK                         0x00000002
#define _LATA_LATA1_LENGTH                       0x00000001

#define _LATA_LATA2_POSITION                     0x00000002
#define _LATA_LATA2_MASK                         0x00000004
#define _LATA_LATA2_LENGTH                       0x00000001

#define _LATA_LATA3_POSITION                     0x00000003
#define _LATA_LATA3_MASK                         0x00000008
#define _LATA_LATA3_LENGTH                       0x00000001

#define _LATA_LATA4_POSITION                     0x00000004
#define _LATA_LATA4_MASK                         0x00000010
#define _LATA_LATA4_LENGTH                       0x00000001

#define _LATA_w_POSITION                         0x00000000
#define _LATA_w_MASK                             0xFFFFFFFF
#define _LATA_w_LENGTH                           0x00000020

#define _ODCA_ODCA0_POSITION                     0x00000000
#define _ODCA_ODCA0_MASK                         0x00000001
#define _ODCA_ODCA0_LENGTH                       0x00000001

#define _ODCA_ODCA1_POSITION                     0x00000001
#define _ODCA_ODCA1_MASK                         0x00000002
#define _ODCA_ODCA1_LENGTH                       0x00000001

#define _ODCA_ODCA2_POSITION                     0x00000002
#define _ODCA_ODCA2_MASK                         0x00000004
#define _ODCA_ODCA2_LENGTH                       0x00000001

#define _ODCA_ODCA3_POSITION                     0x00000003
#define _ODCA_ODCA3_MASK                         0x00000008
#define _ODCA_ODCA3_LENGTH                       0x00000001

#define _ODCA_ODCA4_POSITION                     0x00000004
#define _ODCA_ODCA4_MASK                         0x00000010
#define _ODCA_ODCA4_LENGTH                       0x00000001

#define _ODCA_w_POSITION                         0x00000000
#define _ODCA_w_MASK                             0xFFFFFFFF
#define _ODCA_w_LENGTH                           0x00000020

#define _CNPUA_CNPUA0_POSITION                   0x00000000
#define _CNPUA_CNPUA0_MASK                       0x00000001
#define _CNPUA_CNPUA0_LENGTH                     0x00000001

#define _CNPUA_CNPUA1_POSITION                   0x00000001
#define _CNPUA_CNPUA1_MASK                       0x00000002
#define _CNPUA_CNPUA1_LENGTH                     0x00000001

#define _CNPUA_CNPUA2_POSITION                   0x00000002
#define _CNPUA_CNPUA2_MASK                       0x00000004
#define _CNPUA_CNPUA2_LENGTH                     0x00000001

#define _CNPUA_CNPUA3_POSITION                   0x00000003
#define _CNPUA_CNPUA3_MASK                       0x00000008
#define _CNPUA_CNPUA3_LENGTH                     0x00000001

#define _CNPUA_CNPUA4_POSITION                   0x00000004
#define _CNPUA_CNPUA4_MASK                       0x00000010
#define _CNPUA_CNPUA4_LENGTH                     0x00000001

#define _CNPUA_w_POSITION                        0x00000000
#define _CNPUA_w_MASK                            0xFFFFFFFF
#define _CNPUA_w_LENGTH                          0x00000020

#define _CNPDA_CNPDA0_POSITION                   0x00000000
#define _CNPDA_CNPDA0_MASK                       0x00000001
#define _CNPDA_CNPDA0_LENGTH                     0x00000001

#define _CNPDA_CNPDA1_POSITION                   0x00000001
#define _CNPDA_CNPDA1_MASK                       0x00000002
#define _CNPDA_CNPDA1_LENGTH                     0x00000001

#define _CNPDA_CNPDA2_POSITION                   0x00000002
#define _CNPDA_CNPDA2_MASK                       0x00000004
#define _CNPDA_CNPDA2_LENGTH                     0x00000001

#define _CNPDA_CNPDA3_POSITION                   0x00000003
#define _CNPDA_CNPDA3_MASK                       0x00000008
#define _CNPDA_CNPDA3_LENGTH                     0x00000001

#define _CNPDA_CNPDA4_POSITION                   0x00000004
#define _CNPDA_CNPDA4_MASK                       0x00000010
#define _CNPDA_CNPDA4_LENGTH                     0x00000001

#define _CNPDA_w_POSITION                        0x00000000
#define _CNPDA_w_MASK                            0xFFFFFFFF
#define _CNPDA_w_LENGTH                          0x00000020

#define _CNCONA_PORT32_POSITION                  0x0000000A
#define _CNCONA_PORT32_MASK                      0x00000400
#define _CNCONA_PORT32_LENGTH                    0x00000001

#define _CNCONA_CNSTYLE_POSITION                 0x0000000B
#define _CNCONA_CNSTYLE_MASK                     0x00000800
#define _CNCONA_CNSTYLE_LENGTH                   0x00000001

#define _CNCONA_ON_POSITION                      0x0000000F
#define _CNCONA_ON_MASK                          0x00008000
#define _CNCONA_ON_LENGTH                        0x00000001

#define _CNCONA_w_POSITION                       0x00000000
#define _CNCONA_w_MASK                           0xFFFFFFFF
#define _CNCONA_w_LENGTH                         0x00000020

#define _CNEN0A_CNIE0A0_POSITION                 0x00000000
#define _CNEN0A_CNIE0A0_MASK                     0x00000001
#define _CNEN0A_CNIE0A0_LENGTH                   0x00000001

#define _CNEN0A_CNIE0A1_POSITION                 0x00000001
#define _CNEN0A_CNIE0A1_MASK                     0x00000002
#define _CNEN0A_CNIE0A1_LENGTH                   0x00000001

#define _CNEN0A_CNIE0A2_POSITION                 0x00000002
#define _CNEN0A_CNIE0A2_MASK                     0x00000004
#define _CNEN0A_CNIE0A2_LENGTH                   0x00000001

#define _CNEN0A_CNIE0A3_POSITION                 0x00000003
#define _CNEN0A_CNIE0A3_MASK                     0x00000008
#define _CNEN0A_CNIE0A3_LENGTH                   0x00000001

#define _CNEN0A_CNIE0A4_POSITION                 0x00000004
#define _CNEN0A_CNIE0A4_MASK                     0x00000010
#define _CNEN0A_CNIE0A4_LENGTH                   0x00000001

#define _CNEN0A_w_POSITION                       0x00000000
#define _CNEN0A_w_MASK                           0xFFFFFFFF
#define _CNEN0A_w_LENGTH                         0x00000020

#define _CNSTATA_CNSTATA0_POSITION               0x00000000
#define _CNSTATA_CNSTATA0_MASK                   0x00000001
#define _CNSTATA_CNSTATA0_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA1_POSITION               0x00000001
#define _CNSTATA_CNSTATA1_MASK                   0x00000002
#define _CNSTATA_CNSTATA1_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA2_POSITION               0x00000002
#define _CNSTATA_CNSTATA2_MASK                   0x00000004
#define _CNSTATA_CNSTATA2_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA3_POSITION               0x00000003
#define _CNSTATA_CNSTATA3_MASK                   0x00000008
#define _CNSTATA_CNSTATA3_LENGTH                 0x00000001

#define _CNSTATA_CNSTATA4_POSITION               0x00000004
#define _CNSTATA_CNSTATA4_MASK                   0x00000010
#define _CNSTATA_CNSTATA4_LENGTH                 0x00000001

#define _CNSTATA_w_POSITION                      0x00000000
#define _CNSTATA_w_MASK                          0xFFFFFFFF
#define _CNSTATA_w_LENGTH                        0x00000020

#define _CNEN1A_CNIE1A0_POSITION                 0x00000000
#define _CNEN1A_CNIE1A0_MASK                     0x00000001
#define _CNEN1A_CNIE1A0_LENGTH                   0x00000001

#define _CNEN1A_CNIE1A1_POSITION                 0x00000001
#define _CNEN1A_CNIE1A1_MASK                     0x00000002
#define _CNEN1A_CNIE1A1_LENGTH                   0x00000001

#define _CNEN1A_CNIE1A2_POSITION                 0x00000002
#define _CNEN1A_CNIE1A2_MASK                     0x00000004
#define _CNEN1A_CNIE1A2_LENGTH                   0x00000001

#define _CNEN1A_CNIE1A3_POSITION                 0x00000003
#define _CNEN1A_CNIE1A3_MASK                     0x00000008
#define _CNEN1A_CNIE1A3_LENGTH                   0x00000001

#define _CNEN1A_CNIE1A4_POSITION                 0x00000004
#define _CNEN1A_CNIE1A4_MASK                     0x00000010
#define _CNEN1A_CNIE1A4_LENGTH                   0x00000001

#define _CNEN1A_w_POSITION                       0x00000000
#define _CNEN1A_w_MASK                           0xFFFFFFFF
#define _CNEN1A_w_LENGTH                         0x00000020

#define _CNFA_CNFA0_POSITION                     0x00000000
#define _CNFA_CNFA0_MASK                         0x00000001
#define _CNFA_CNFA0_LENGTH                       0x00000001

#define _CNFA_CNFA1_POSITION                     0x00000001
#define _CNFA_CNFA1_MASK                         0x00000002
#define _CNFA_CNFA1_LENGTH                       0x00000001

#define _CNFA_CNFA2_POSITION                     0x00000002
#define _CNFA_CNFA2_MASK                         0x00000004
#define _CNFA_CNFA2_LENGTH                       0x00000001

#define _CNFA_CNFA3_POSITION                     0x00000003
#define _CNFA_CNFA3_MASK                         0x00000008
#define _CNFA_CNFA3_LENGTH                       0x00000001

#define _CNFA_CNFA4_POSITION                     0x00000004
#define _CNFA_CNFA4_MASK                         0x00000010
#define _CNFA_CNFA4_LENGTH                       0x00000001

#define _CNFA_w_POSITION                         0x00000000
#define _CNFA_w_MASK                             0xFFFFFFFF
#define _CNFA_w_LENGTH                           0x00000020

#define _SR0A_w_POSITION                         0x00000000
#define _SR0A_w_MASK                             0xFFFFFFFF
#define _SR0A_w_LENGTH                           0x00000020

#define _SR1A_w_POSITION                         0x00000000
#define _SR1A_w_MASK                             0xFFFFFFFF
#define _SR1A_w_LENGTH                           0x00000020

#define _ANSELB_ANSB0_POSITION                   0x00000000
#define _ANSELB_ANSB0_MASK                       0x00000001
#define _ANSELB_ANSB0_LENGTH                     0x00000001

#define _ANSELB_ANSB1_POSITION                   0x00000001
#define _ANSELB_ANSB1_MASK                       0x00000002
#define _ANSELB_ANSB1_LENGTH                     0x00000001

#define _ANSELB_ANSB2_POSITION                   0x00000002
#define _ANSELB_ANSB2_MASK                       0x00000004
#define _ANSELB_ANSB2_LENGTH                     0x00000001

#define _ANSELB_ANSB3_POSITION                   0x00000003
#define _ANSELB_ANSB3_MASK                       0x00000008
#define _ANSELB_ANSB3_LENGTH                     0x00000001

#define _ANSELB_ANSB4_POSITION                   0x00000004
#define _ANSELB_ANSB4_MASK                       0x00000010
#define _ANSELB_ANSB4_LENGTH                     0x00000001

#define _ANSELB_ANSB13_POSITION                  0x0000000D
#define _ANSELB_ANSB13_MASK                      0x00002000
#define _ANSELB_ANSB13_LENGTH                    0x00000001

#define _ANSELB_ANSB14_POSITION                  0x0000000E
#define _ANSELB_ANSB14_MASK                      0x00004000
#define _ANSELB_ANSB14_LENGTH                    0x00000001

#define _ANSELB_ANSB15_POSITION                  0x0000000F
#define _ANSELB_ANSB15_MASK                      0x00008000
#define _ANSELB_ANSB15_LENGTH                    0x00000001

#define _ANSELB_w_POSITION                       0x00000000
#define _ANSELB_w_MASK                           0xFFFFFFFF
#define _ANSELB_w_LENGTH                         0x00000020

#define _B_ANSB0_POSITION                        0x00000000
#define _B_ANSB0_MASK                            0x00000001
#define _B_ANSB0_LENGTH                          0x00000001

#define _B_ANSB1_POSITION                        0x00000001
#define _B_ANSB1_MASK                            0x00000002
#define _B_ANSB1_LENGTH                          0x00000001

#define _B_ANSB2_POSITION                        0x00000002
#define _B_ANSB2_MASK                            0x00000004
#define _B_ANSB2_LENGTH                          0x00000001

#define _B_ANSB3_POSITION                        0x00000003
#define _B_ANSB3_MASK                            0x00000008
#define _B_ANSB3_LENGTH                          0x00000001

#define _B_ANSB4_POSITION                        0x00000004
#define _B_ANSB4_MASK                            0x00000010
#define _B_ANSB4_LENGTH                          0x00000001

#define _B_ANSB13_POSITION                       0x0000000D
#define _B_ANSB13_MASK                           0x00002000
#define _B_ANSB13_LENGTH                         0x00000001

#define _B_ANSB14_POSITION                       0x0000000E
#define _B_ANSB14_MASK                           0x00004000
#define _B_ANSB14_LENGTH                         0x00000001

#define _B_ANSB15_POSITION                       0x0000000F
#define _B_ANSB15_MASK                           0x00008000
#define _B_ANSB15_LENGTH                         0x00000001

#define _B_w_POSITION                            0x00000000
#define _B_w_MASK                                0xFFFFFFFF
#define _B_w_LENGTH                              0x00000020

#define _TRISB_TRISB0_POSITION                   0x00000000
#define _TRISB_TRISB0_MASK                       0x00000001
#define _TRISB_TRISB0_LENGTH                     0x00000001

#define _TRISB_TRISB1_POSITION                   0x00000001
#define _TRISB_TRISB1_MASK                       0x00000002
#define _TRISB_TRISB1_LENGTH                     0x00000001

#define _TRISB_TRISB2_POSITION                   0x00000002
#define _TRISB_TRISB2_MASK                       0x00000004
#define _TRISB_TRISB2_LENGTH                     0x00000001

#define _TRISB_TRISB3_POSITION                   0x00000003
#define _TRISB_TRISB3_MASK                       0x00000008
#define _TRISB_TRISB3_LENGTH                     0x00000001

#define _TRISB_TRISB4_POSITION                   0x00000004
#define _TRISB_TRISB4_MASK                       0x00000010
#define _TRISB_TRISB4_LENGTH                     0x00000001

#define _TRISB_TRISB5_POSITION                   0x00000005
#define _TRISB_TRISB5_MASK                       0x00000020
#define _TRISB_TRISB5_LENGTH                     0x00000001

#define _TRISB_TRISB6_POSITION                   0x00000006
#define _TRISB_TRISB6_MASK                       0x00000040
#define _TRISB_TRISB6_LENGTH                     0x00000001

#define _TRISB_TRISB7_POSITION                   0x00000007
#define _TRISB_TRISB7_MASK                       0x00000080
#define _TRISB_TRISB7_LENGTH                     0x00000001

#define _TRISB_TRISB8_POSITION                   0x00000008
#define _TRISB_TRISB8_MASK                       0x00000100
#define _TRISB_TRISB8_LENGTH                     0x00000001

#define _TRISB_TRISB9_POSITION                   0x00000009
#define _TRISB_TRISB9_MASK                       0x00000200
#define _TRISB_TRISB9_LENGTH                     0x00000001

#define _TRISB_TRISB10_POSITION                  0x0000000A
#define _TRISB_TRISB10_MASK                      0x00000400
#define _TRISB_TRISB10_LENGTH                    0x00000001

#define _TRISB_TRISB11_POSITION                  0x0000000B
#define _TRISB_TRISB11_MASK                      0x00000800
#define _TRISB_TRISB11_LENGTH                    0x00000001

#define _TRISB_TRISB13_POSITION                  0x0000000D
#define _TRISB_TRISB13_MASK                      0x00002000
#define _TRISB_TRISB13_LENGTH                    0x00000001

#define _TRISB_TRISB14_POSITION                  0x0000000E
#define _TRISB_TRISB14_MASK                      0x00004000
#define _TRISB_TRISB14_LENGTH                    0x00000001

#define _TRISB_TRISB15_POSITION                  0x0000000F
#define _TRISB_TRISB15_MASK                      0x00008000
#define _TRISB_TRISB15_LENGTH                    0x00000001

#define _TRISB_w_POSITION                        0x00000000
#define _TRISB_w_MASK                            0xFFFFFFFF
#define _TRISB_w_LENGTH                          0x00000020

#define _PORTB_RB0_POSITION                      0x00000000
#define _PORTB_RB0_MASK                          0x00000001
#define _PORTB_RB0_LENGTH                        0x00000001

#define _PORTB_RB1_POSITION                      0x00000001
#define _PORTB_RB1_MASK                          0x00000002
#define _PORTB_RB1_LENGTH                        0x00000001

#define _PORTB_RB2_POSITION                      0x00000002
#define _PORTB_RB2_MASK                          0x00000004
#define _PORTB_RB2_LENGTH                        0x00000001

#define _PORTB_RB3_POSITION                      0x00000003
#define _PORTB_RB3_MASK                          0x00000008
#define _PORTB_RB3_LENGTH                        0x00000001

#define _PORTB_RB4_POSITION                      0x00000004
#define _PORTB_RB4_MASK                          0x00000010
#define _PORTB_RB4_LENGTH                        0x00000001

#define _PORTB_RB5_POSITION                      0x00000005
#define _PORTB_RB5_MASK                          0x00000020
#define _PORTB_RB5_LENGTH                        0x00000001

#define _PORTB_RB6_POSITION                      0x00000006
#define _PORTB_RB6_MASK                          0x00000040
#define _PORTB_RB6_LENGTH                        0x00000001

#define _PORTB_RB7_POSITION                      0x00000007
#define _PORTB_RB7_MASK                          0x00000080
#define _PORTB_RB7_LENGTH                        0x00000001

#define _PORTB_RB8_POSITION                      0x00000008
#define _PORTB_RB8_MASK                          0x00000100
#define _PORTB_RB8_LENGTH                        0x00000001

#define _PORTB_RB9_POSITION                      0x00000009
#define _PORTB_RB9_MASK                          0x00000200
#define _PORTB_RB9_LENGTH                        0x00000001

#define _PORTB_RB10_POSITION                     0x0000000A
#define _PORTB_RB10_MASK                         0x00000400
#define _PORTB_RB10_LENGTH                       0x00000001

#define _PORTB_RB11_POSITION                     0x0000000B
#define _PORTB_RB11_MASK                         0x00000800
#define _PORTB_RB11_LENGTH                       0x00000001

#define _PORTB_RB13_POSITION                     0x0000000D
#define _PORTB_RB13_MASK                         0x00002000
#define _PORTB_RB13_LENGTH                       0x00000001

#define _PORTB_RB14_POSITION                     0x0000000E
#define _PORTB_RB14_MASK                         0x00004000
#define _PORTB_RB14_LENGTH                       0x00000001

#define _PORTB_RB15_POSITION                     0x0000000F
#define _PORTB_RB15_MASK                         0x00008000
#define _PORTB_RB15_LENGTH                       0x00000001

#define _PORTB_w_POSITION                        0x00000000
#define _PORTB_w_MASK                            0xFFFFFFFF
#define _PORTB_w_LENGTH                          0x00000020

#define _LATB_LATB0_POSITION                     0x00000000
#define _LATB_LATB0_MASK                         0x00000001
#define _LATB_LATB0_LENGTH                       0x00000001

#define _LATB_LATB1_POSITION                     0x00000001
#define _LATB_LATB1_MASK                         0x00000002
#define _LATB_LATB1_LENGTH                       0x00000001

#define _LATB_LATB2_POSITION                     0x00000002
#define _LATB_LATB2_MASK                         0x00000004
#define _LATB_LATB2_LENGTH                       0x00000001

#define _LATB_LATB3_POSITION                     0x00000003
#define _LATB_LATB3_MASK                         0x00000008
#define _LATB_LATB3_LENGTH                       0x00000001

#define _LATB_LATB4_POSITION                     0x00000004
#define _LATB_LATB4_MASK                         0x00000010
#define _LATB_LATB4_LENGTH                       0x00000001

#define _LATB_LATB5_POSITION                     0x00000005
#define _LATB_LATB5_MASK                         0x00000020
#define _LATB_LATB5_LENGTH                       0x00000001

#define _LATB_LATB6_POSITION                     0x00000006
#define _LATB_LATB6_MASK                         0x00000040
#define _LATB_LATB6_LENGTH                       0x00000001

#define _LATB_LATB7_POSITION                     0x00000007
#define _LATB_LATB7_MASK                         0x00000080
#define _LATB_LATB7_LENGTH                       0x00000001

#define _LATB_LATB8_POSITION                     0x00000008
#define _LATB_LATB8_MASK                         0x00000100
#define _LATB_LATB8_LENGTH                       0x00000001

#define _LATB_LATB9_POSITION                     0x00000009
#define _LATB_LATB9_MASK                         0x00000200
#define _LATB_LATB9_LENGTH                       0x00000001

#define _LATB_LATB10_POSITION                    0x0000000A
#define _LATB_LATB10_MASK                        0x00000400
#define _LATB_LATB10_LENGTH                      0x00000001

#define _LATB_LATB11_POSITION                    0x0000000B
#define _LATB_LATB11_MASK                        0x00000800
#define _LATB_LATB11_LENGTH                      0x00000001

#define _LATB_LATB13_POSITION                    0x0000000D
#define _LATB_LATB13_MASK                        0x00002000
#define _LATB_LATB13_LENGTH                      0x00000001

#define _LATB_LATB14_POSITION                    0x0000000E
#define _LATB_LATB14_MASK                        0x00004000
#define _LATB_LATB14_LENGTH                      0x00000001

#define _LATB_LATB15_POSITION                    0x0000000F
#define _LATB_LATB15_MASK                        0x00008000
#define _LATB_LATB15_LENGTH                      0x00000001

#define _LATB_w_POSITION                         0x00000000
#define _LATB_w_MASK                             0xFFFFFFFF
#define _LATB_w_LENGTH                           0x00000020

#define _ODCB_ODCB0_POSITION                     0x00000000
#define _ODCB_ODCB0_MASK                         0x00000001
#define _ODCB_ODCB0_LENGTH                       0x00000001

#define _ODCB_ODCB1_POSITION                     0x00000001
#define _ODCB_ODCB1_MASK                         0x00000002
#define _ODCB_ODCB1_LENGTH                       0x00000001

#define _ODCB_ODCB2_POSITION                     0x00000002
#define _ODCB_ODCB2_MASK                         0x00000004
#define _ODCB_ODCB2_LENGTH                       0x00000001

#define _ODCB_ODCB3_POSITION                     0x00000003
#define _ODCB_ODCB3_MASK                         0x00000008
#define _ODCB_ODCB3_LENGTH                       0x00000001

#define _ODCB_ODCB4_POSITION                     0x00000004
#define _ODCB_ODCB4_MASK                         0x00000010
#define _ODCB_ODCB4_LENGTH                       0x00000001

#define _ODCB_ODCB5_POSITION                     0x00000005
#define _ODCB_ODCB5_MASK                         0x00000020
#define _ODCB_ODCB5_LENGTH                       0x00000001

#define _ODCB_ODCB6_POSITION                     0x00000006
#define _ODCB_ODCB6_MASK                         0x00000040
#define _ODCB_ODCB6_LENGTH                       0x00000001

#define _ODCB_ODCB7_POSITION                     0x00000007
#define _ODCB_ODCB7_MASK                         0x00000080
#define _ODCB_ODCB7_LENGTH                       0x00000001

#define _ODCB_ODCB8_POSITION                     0x00000008
#define _ODCB_ODCB8_MASK                         0x00000100
#define _ODCB_ODCB8_LENGTH                       0x00000001

#define _ODCB_ODCB9_POSITION                     0x00000009
#define _ODCB_ODCB9_MASK                         0x00000200
#define _ODCB_ODCB9_LENGTH                       0x00000001

#define _ODCB_ODCB10_POSITION                    0x0000000A
#define _ODCB_ODCB10_MASK                        0x00000400
#define _ODCB_ODCB10_LENGTH                      0x00000001

#define _ODCB_ODCB11_POSITION                    0x0000000B
#define _ODCB_ODCB11_MASK                        0x00000800
#define _ODCB_ODCB11_LENGTH                      0x00000001

#define _ODCB_ODCB13_POSITION                    0x0000000D
#define _ODCB_ODCB13_MASK                        0x00002000
#define _ODCB_ODCB13_LENGTH                      0x00000001

#define _ODCB_ODCB14_POSITION                    0x0000000E
#define _ODCB_ODCB14_MASK                        0x00004000
#define _ODCB_ODCB14_LENGTH                      0x00000001

#define _ODCB_ODCB15_POSITION                    0x0000000F
#define _ODCB_ODCB15_MASK                        0x00008000
#define _ODCB_ODCB15_LENGTH                      0x00000001

#define _ODCB_w_POSITION                         0x00000000
#define _ODCB_w_MASK                             0xFFFFFFFF
#define _ODCB_w_LENGTH                           0x00000020

#define _CNPUB_CNPUB0_POSITION                   0x00000000
#define _CNPUB_CNPUB0_MASK                       0x00000001
#define _CNPUB_CNPUB0_LENGTH                     0x00000001

#define _CNPUB_CNPUB1_POSITION                   0x00000001
#define _CNPUB_CNPUB1_MASK                       0x00000002
#define _CNPUB_CNPUB1_LENGTH                     0x00000001

#define _CNPUB_CNPUB2_POSITION                   0x00000002
#define _CNPUB_CNPUB2_MASK                       0x00000004
#define _CNPUB_CNPUB2_LENGTH                     0x00000001

#define _CNPUB_CNPUB3_POSITION                   0x00000003
#define _CNPUB_CNPUB3_MASK                       0x00000008
#define _CNPUB_CNPUB3_LENGTH                     0x00000001

#define _CNPUB_CNPUB4_POSITION                   0x00000004
#define _CNPUB_CNPUB4_MASK                       0x00000010
#define _CNPUB_CNPUB4_LENGTH                     0x00000001

#define _CNPUB_CNPUB5_POSITION                   0x00000005
#define _CNPUB_CNPUB5_MASK                       0x00000020
#define _CNPUB_CNPUB5_LENGTH                     0x00000001

#define _CNPUB_CNPUB6_POSITION                   0x00000006
#define _CNPUB_CNPUB6_MASK                       0x00000040
#define _CNPUB_CNPUB6_LENGTH                     0x00000001

#define _CNPUB_CNPUB7_POSITION                   0x00000007
#define _CNPUB_CNPUB7_MASK                       0x00000080
#define _CNPUB_CNPUB7_LENGTH                     0x00000001

#define _CNPUB_CNPUB8_POSITION                   0x00000008
#define _CNPUB_CNPUB8_MASK                       0x00000100
#define _CNPUB_CNPUB8_LENGTH                     0x00000001

#define _CNPUB_CNPUB9_POSITION                   0x00000009
#define _CNPUB_CNPUB9_MASK                       0x00000200
#define _CNPUB_CNPUB9_LENGTH                     0x00000001

#define _CNPUB_CNPUB10_POSITION                  0x0000000A
#define _CNPUB_CNPUB10_MASK                      0x00000400
#define _CNPUB_CNPUB10_LENGTH                    0x00000001

#define _CNPUB_CNPUB11_POSITION                  0x0000000B
#define _CNPUB_CNPUB11_MASK                      0x00000800
#define _CNPUB_CNPUB11_LENGTH                    0x00000001

#define _CNPUB_CNPUB13_POSITION                  0x0000000D
#define _CNPUB_CNPUB13_MASK                      0x00002000
#define _CNPUB_CNPUB13_LENGTH                    0x00000001

#define _CNPUB_CNPUB14_POSITION                  0x0000000E
#define _CNPUB_CNPUB14_MASK                      0x00004000
#define _CNPUB_CNPUB14_LENGTH                    0x00000001

#define _CNPUB_CNPUB15_POSITION                  0x0000000F
#define _CNPUB_CNPUB15_MASK                      0x00008000
#define _CNPUB_CNPUB15_LENGTH                    0x00000001

#define _CNPUB_w_POSITION                        0x00000000
#define _CNPUB_w_MASK                            0xFFFFFFFF
#define _CNPUB_w_LENGTH                          0x00000020

#define _CNPDB_CNPDB0_POSITION                   0x00000000
#define _CNPDB_CNPDB0_MASK                       0x00000001
#define _CNPDB_CNPDB0_LENGTH                     0x00000001

#define _CNPDB_CNPDB1_POSITION                   0x00000001
#define _CNPDB_CNPDB1_MASK                       0x00000002
#define _CNPDB_CNPDB1_LENGTH                     0x00000001

#define _CNPDB_CNPDB2_POSITION                   0x00000002
#define _CNPDB_CNPDB2_MASK                       0x00000004
#define _CNPDB_CNPDB2_LENGTH                     0x00000001

#define _CNPDB_CNPDB3_POSITION                   0x00000003
#define _CNPDB_CNPDB3_MASK                       0x00000008
#define _CNPDB_CNPDB3_LENGTH                     0x00000001

#define _CNPDB_CNPDB4_POSITION                   0x00000004
#define _CNPDB_CNPDB4_MASK                       0x00000010
#define _CNPDB_CNPDB4_LENGTH                     0x00000001

#define _CNPDB_CNPDB5_POSITION                   0x00000005
#define _CNPDB_CNPDB5_MASK                       0x00000020
#define _CNPDB_CNPDB5_LENGTH                     0x00000001

#define _CNPDB_CNPDB6_POSITION                   0x00000006
#define _CNPDB_CNPDB6_MASK                       0x00000040
#define _CNPDB_CNPDB6_LENGTH                     0x00000001

#define _CNPDB_CNPDB7_POSITION                   0x00000007
#define _CNPDB_CNPDB7_MASK                       0x00000080
#define _CNPDB_CNPDB7_LENGTH                     0x00000001

#define _CNPDB_CNPDB8_POSITION                   0x00000008
#define _CNPDB_CNPDB8_MASK                       0x00000100
#define _CNPDB_CNPDB8_LENGTH                     0x00000001

#define _CNPDB_CNPDB9_POSITION                   0x00000009
#define _CNPDB_CNPDB9_MASK                       0x00000200
#define _CNPDB_CNPDB9_LENGTH                     0x00000001

#define _CNPDB_CNPDB10_POSITION                  0x0000000A
#define _CNPDB_CNPDB10_MASK                      0x00000400
#define _CNPDB_CNPDB10_LENGTH                    0x00000001

#define _CNPDB_CNPDB11_POSITION                  0x0000000B
#define _CNPDB_CNPDB11_MASK                      0x00000800
#define _CNPDB_CNPDB11_LENGTH                    0x00000001

#define _CNPDB_CNPDB13_POSITION                  0x0000000D
#define _CNPDB_CNPDB13_MASK                      0x00002000
#define _CNPDB_CNPDB13_LENGTH                    0x00000001

#define _CNPDB_CNPDB14_POSITION                  0x0000000E
#define _CNPDB_CNPDB14_MASK                      0x00004000
#define _CNPDB_CNPDB14_LENGTH                    0x00000001

#define _CNPDB_CNPDB15_POSITION                  0x0000000F
#define _CNPDB_CNPDB15_MASK                      0x00008000
#define _CNPDB_CNPDB15_LENGTH                    0x00000001

#define _CNPDB_w_POSITION                        0x00000000
#define _CNPDB_w_MASK                            0xFFFFFFFF
#define _CNPDB_w_LENGTH                          0x00000020

#define _CNCONB_PORT32_POSITION                  0x0000000A
#define _CNCONB_PORT32_MASK                      0x00000400
#define _CNCONB_PORT32_LENGTH                    0x00000001

#define _CNCONB_CNSTYLE_POSITION                 0x0000000B
#define _CNCONB_CNSTYLE_MASK                     0x00000800
#define _CNCONB_CNSTYLE_LENGTH                   0x00000001

#define _CNCONB_ON_POSITION                      0x0000000F
#define _CNCONB_ON_MASK                          0x00008000
#define _CNCONB_ON_LENGTH                        0x00000001

#define _CNCONB_w_POSITION                       0x00000000
#define _CNCONB_w_MASK                           0xFFFFFFFF
#define _CNCONB_w_LENGTH                         0x00000020

#define _CNEN0B_CNIE0B0_POSITION                 0x00000000
#define _CNEN0B_CNIE0B0_MASK                     0x00000001
#define _CNEN0B_CNIE0B0_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B1_POSITION                 0x00000001
#define _CNEN0B_CNIE0B1_MASK                     0x00000002
#define _CNEN0B_CNIE0B1_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B2_POSITION                 0x00000002
#define _CNEN0B_CNIE0B2_MASK                     0x00000004
#define _CNEN0B_CNIE0B2_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B3_POSITION                 0x00000003
#define _CNEN0B_CNIE0B3_MASK                     0x00000008
#define _CNEN0B_CNIE0B3_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B4_POSITION                 0x00000004
#define _CNEN0B_CNIE0B4_MASK                     0x00000010
#define _CNEN0B_CNIE0B4_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B5_POSITION                 0x00000005
#define _CNEN0B_CNIE0B5_MASK                     0x00000020
#define _CNEN0B_CNIE0B5_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B6_POSITION                 0x00000006
#define _CNEN0B_CNIE0B6_MASK                     0x00000040
#define _CNEN0B_CNIE0B6_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B7_POSITION                 0x00000007
#define _CNEN0B_CNIE0B7_MASK                     0x00000080
#define _CNEN0B_CNIE0B7_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B8_POSITION                 0x00000008
#define _CNEN0B_CNIE0B8_MASK                     0x00000100
#define _CNEN0B_CNIE0B8_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B9_POSITION                 0x00000009
#define _CNEN0B_CNIE0B9_MASK                     0x00000200
#define _CNEN0B_CNIE0B9_LENGTH                   0x00000001

#define _CNEN0B_CNIE0B10_POSITION                0x0000000A
#define _CNEN0B_CNIE0B10_MASK                    0x00000400
#define _CNEN0B_CNIE0B10_LENGTH                  0x00000001

#define _CNEN0B_CNIE0B11_POSITION                0x0000000B
#define _CNEN0B_CNIE0B11_MASK                    0x00000800
#define _CNEN0B_CNIE0B11_LENGTH                  0x00000001

#define _CNEN0B_CNIE0B13_POSITION                0x0000000D
#define _CNEN0B_CNIE0B13_MASK                    0x00002000
#define _CNEN0B_CNIE0B13_LENGTH                  0x00000001

#define _CNEN0B_CNIE0B14_POSITION                0x0000000E
#define _CNEN0B_CNIE0B14_MASK                    0x00004000
#define _CNEN0B_CNIE0B14_LENGTH                  0x00000001

#define _CNEN0B_CNIE0B15_POSITION                0x0000000F
#define _CNEN0B_CNIE0B15_MASK                    0x00008000
#define _CNEN0B_CNIE0B15_LENGTH                  0x00000001

#define _CNEN0B_w_POSITION                       0x00000000
#define _CNEN0B_w_MASK                           0xFFFFFFFF
#define _CNEN0B_w_LENGTH                         0x00000020

#define _CNSTATB_CNSTATB0_POSITION               0x00000000
#define _CNSTATB_CNSTATB0_MASK                   0x00000001
#define _CNSTATB_CNSTATB0_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB1_POSITION               0x00000001
#define _CNSTATB_CNSTATB1_MASK                   0x00000002
#define _CNSTATB_CNSTATB1_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB2_POSITION               0x00000002
#define _CNSTATB_CNSTATB2_MASK                   0x00000004
#define _CNSTATB_CNSTATB2_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB3_POSITION               0x00000003
#define _CNSTATB_CNSTATB3_MASK                   0x00000008
#define _CNSTATB_CNSTATB3_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB4_POSITION               0x00000004
#define _CNSTATB_CNSTATB4_MASK                   0x00000010
#define _CNSTATB_CNSTATB4_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB5_POSITION               0x00000005
#define _CNSTATB_CNSTATB5_MASK                   0x00000020
#define _CNSTATB_CNSTATB5_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB6_POSITION               0x00000006
#define _CNSTATB_CNSTATB6_MASK                   0x00000040
#define _CNSTATB_CNSTATB6_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB7_POSITION               0x00000007
#define _CNSTATB_CNSTATB7_MASK                   0x00000080
#define _CNSTATB_CNSTATB7_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB8_POSITION               0x00000008
#define _CNSTATB_CNSTATB8_MASK                   0x00000100
#define _CNSTATB_CNSTATB8_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB9_POSITION               0x00000009
#define _CNSTATB_CNSTATB9_MASK                   0x00000200
#define _CNSTATB_CNSTATB9_LENGTH                 0x00000001

#define _CNSTATB_CNSTATB10_POSITION              0x0000000A
#define _CNSTATB_CNSTATB10_MASK                  0x00000400
#define _CNSTATB_CNSTATB10_LENGTH                0x00000001

#define _CNSTATB_CNSTATB11_POSITION              0x0000000B
#define _CNSTATB_CNSTATB11_MASK                  0x00000800
#define _CNSTATB_CNSTATB11_LENGTH                0x00000001

#define _CNSTATB_CNSTATB13_POSITION              0x0000000D
#define _CNSTATB_CNSTATB13_MASK                  0x00002000
#define _CNSTATB_CNSTATB13_LENGTH                0x00000001

#define _CNSTATB_CNSTATB14_POSITION              0x0000000E
#define _CNSTATB_CNSTATB14_MASK                  0x00004000
#define _CNSTATB_CNSTATB14_LENGTH                0x00000001

#define _CNSTATB_CNSTATB15_POSITION              0x0000000F
#define _CNSTATB_CNSTATB15_MASK                  0x00008000
#define _CNSTATB_CNSTATB15_LENGTH                0x00000001

#define _CNSTATB_w_POSITION                      0x00000000
#define _CNSTATB_w_MASK                          0xFFFFFFFF
#define _CNSTATB_w_LENGTH                        0x00000020

#define _CNEN1B_CNIE1B0_POSITION                 0x00000000
#define _CNEN1B_CNIE1B0_MASK                     0x00000001
#define _CNEN1B_CNIE1B0_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B1_POSITION                 0x00000001
#define _CNEN1B_CNIE1B1_MASK                     0x00000002
#define _CNEN1B_CNIE1B1_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B2_POSITION                 0x00000002
#define _CNEN1B_CNIE1B2_MASK                     0x00000004
#define _CNEN1B_CNIE1B2_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B3_POSITION                 0x00000003
#define _CNEN1B_CNIE1B3_MASK                     0x00000008
#define _CNEN1B_CNIE1B3_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B4_POSITION                 0x00000004
#define _CNEN1B_CNIE1B4_MASK                     0x00000010
#define _CNEN1B_CNIE1B4_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B5_POSITION                 0x00000005
#define _CNEN1B_CNIE1B5_MASK                     0x00000020
#define _CNEN1B_CNIE1B5_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B6_POSITION                 0x00000006
#define _CNEN1B_CNIE1B6_MASK                     0x00000040
#define _CNEN1B_CNIE1B6_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B7_POSITION                 0x00000007
#define _CNEN1B_CNIE1B7_MASK                     0x00000080
#define _CNEN1B_CNIE1B7_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B8_POSITION                 0x00000008
#define _CNEN1B_CNIE1B8_MASK                     0x00000100
#define _CNEN1B_CNIE1B8_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B9_POSITION                 0x00000009
#define _CNEN1B_CNIE1B9_MASK                     0x00000200
#define _CNEN1B_CNIE1B9_LENGTH                   0x00000001

#define _CNEN1B_CNIE1B10_POSITION                0x0000000A
#define _CNEN1B_CNIE1B10_MASK                    0x00000400
#define _CNEN1B_CNIE1B10_LENGTH                  0x00000001

#define _CNEN1B_CNIE1B11_POSITION                0x0000000B
#define _CNEN1B_CNIE1B11_MASK                    0x00000800
#define _CNEN1B_CNIE1B11_LENGTH                  0x00000001

#define _CNEN1B_CNIE1B13_POSITION                0x0000000D
#define _CNEN1B_CNIE1B13_MASK                    0x00002000
#define _CNEN1B_CNIE1B13_LENGTH                  0x00000001

#define _CNEN1B_CNIE1B14_POSITION                0x0000000E
#define _CNEN1B_CNIE1B14_MASK                    0x00004000
#define _CNEN1B_CNIE1B14_LENGTH                  0x00000001

#define _CNEN1B_CNIE1B15_POSITION                0x0000000F
#define _CNEN1B_CNIE1B15_MASK                    0x00008000
#define _CNEN1B_CNIE1B15_LENGTH                  0x00000001

#define _CNEN1B_w_POSITION                       0x00000000
#define _CNEN1B_w_MASK                           0xFFFFFFFF
#define _CNEN1B_w_LENGTH                         0x00000020

#define _CNFB_CNFB0_POSITION                     0x00000000
#define _CNFB_CNFB0_MASK                         0x00000001
#define _CNFB_CNFB0_LENGTH                       0x00000001

#define _CNFB_CNFB1_POSITION                     0x00000001
#define _CNFB_CNFB1_MASK                         0x00000002
#define _CNFB_CNFB1_LENGTH                       0x00000001

#define _CNFB_CNFB2_POSITION                     0x00000002
#define _CNFB_CNFB2_MASK                         0x00000004
#define _CNFB_CNFB2_LENGTH                       0x00000001

#define _CNFB_CNFB3_POSITION                     0x00000003
#define _CNFB_CNFB3_MASK                         0x00000008
#define _CNFB_CNFB3_LENGTH                       0x00000001

#define _CNFB_CNFB4_POSITION                     0x00000004
#define _CNFB_CNFB4_MASK                         0x00000010
#define _CNFB_CNFB4_LENGTH                       0x00000001

#define _CNFB_CNFB5_POSITION                     0x00000005
#define _CNFB_CNFB5_MASK                         0x00000020
#define _CNFB_CNFB5_LENGTH                       0x00000001

#define _CNFB_CNFB6_POSITION                     0x00000006
#define _CNFB_CNFB6_MASK                         0x00000040
#define _CNFB_CNFB6_LENGTH                       0x00000001

#define _CNFB_CNFB7_POSITION                     0x00000007
#define _CNFB_CNFB7_MASK                         0x00000080
#define _CNFB_CNFB7_LENGTH                       0x00000001

#define _CNFB_CNFB8_POSITION                     0x00000008
#define _CNFB_CNFB8_MASK                         0x00000100
#define _CNFB_CNFB8_LENGTH                       0x00000001

#define _CNFB_CNFB9_POSITION                     0x00000009
#define _CNFB_CNFB9_MASK                         0x00000200
#define _CNFB_CNFB9_LENGTH                       0x00000001

#define _CNFB_CNFB10_POSITION                    0x0000000A
#define _CNFB_CNFB10_MASK                        0x00000400
#define _CNFB_CNFB10_LENGTH                      0x00000001

#define _CNFB_CNFB11_POSITION                    0x0000000B
#define _CNFB_CNFB11_MASK                        0x00000800
#define _CNFB_CNFB11_LENGTH                      0x00000001

#define _CNFB_CNFB13_POSITION                    0x0000000D
#define _CNFB_CNFB13_MASK                        0x00002000
#define _CNFB_CNFB13_LENGTH                      0x00000001

#define _CNFB_CNFB14_POSITION                    0x0000000E
#define _CNFB_CNFB14_MASK                        0x00004000
#define _CNFB_CNFB14_LENGTH                      0x00000001

#define _CNFB_CNFB15_POSITION                    0x0000000F
#define _CNFB_CNFB15_MASK                        0x00008000
#define _CNFB_CNFB15_LENGTH                      0x00000001

#define _CNFB_w_POSITION                         0x00000000
#define _CNFB_w_MASK                             0xFFFFFFFF
#define _CNFB_w_LENGTH                           0x00000020

#define _SR0B_w_POSITION                         0x00000000
#define _SR0B_w_MASK                             0xFFFFFFFF
#define _SR0B_w_LENGTH                           0x00000020

#define _SR1B_w_POSITION                         0x00000000
#define _SR1B_w_MASK                             0xFFFFFFFF
#define _SR1B_w_LENGTH                           0x00000020

#define _ANSELC_w_POSITION                       0x00000000
#define _ANSELC_w_MASK                           0xFFFFFFFF
#define _ANSELC_w_LENGTH                         0x00000020

#define _TRISC_TRISC9_POSITION                   0x00000009
#define _TRISC_TRISC9_MASK                       0x00000200
#define _TRISC_TRISC9_LENGTH                     0x00000001

#define _TRISC_w_POSITION                        0x00000000
#define _TRISC_w_MASK                            0xFFFFFFFF
#define _TRISC_w_LENGTH                          0x00000020

#define _PORTC_RC9_POSITION                      0x00000009
#define _PORTC_RC9_MASK                          0x00000200
#define _PORTC_RC9_LENGTH                        0x00000001

#define _PORTC_w_POSITION                        0x00000000
#define _PORTC_w_MASK                            0xFFFFFFFF
#define _PORTC_w_LENGTH                          0x00000020

#define _LATC_LATC9_POSITION                     0x00000009
#define _LATC_LATC9_MASK                         0x00000200
#define _LATC_LATC9_LENGTH                       0x00000001

#define _LATC_w_POSITION                         0x00000000
#define _LATC_w_MASK                             0xFFFFFFFF
#define _LATC_w_LENGTH                           0x00000020

#define _ODCC_ODCC9_POSITION                     0x00000009
#define _ODCC_ODCC9_MASK                         0x00000200
#define _ODCC_ODCC9_LENGTH                       0x00000001

#define _ODCC_w_POSITION                         0x00000000
#define _ODCC_w_MASK                             0xFFFFFFFF
#define _ODCC_w_LENGTH                           0x00000020

#define _CNPUC_CNPUC9_POSITION                   0x00000009
#define _CNPUC_CNPUC9_MASK                       0x00000200
#define _CNPUC_CNPUC9_LENGTH                     0x00000001

#define _CNPUC_w_POSITION                        0x00000000
#define _CNPUC_w_MASK                            0xFFFFFFFF
#define _CNPUC_w_LENGTH                          0x00000020

#define _CNPDC_CNPDC9_POSITION                   0x00000009
#define _CNPDC_CNPDC9_MASK                       0x00000200
#define _CNPDC_CNPDC9_LENGTH                     0x00000001

#define _CNPDC_w_POSITION                        0x00000000
#define _CNPDC_w_MASK                            0xFFFFFFFF
#define _CNPDC_w_LENGTH                          0x00000020

#define _CNCONC_PORT32_POSITION                  0x0000000A
#define _CNCONC_PORT32_MASK                      0x00000400
#define _CNCONC_PORT32_LENGTH                    0x00000001

#define _CNCONC_CNSTYLE_POSITION                 0x0000000B
#define _CNCONC_CNSTYLE_MASK                     0x00000800
#define _CNCONC_CNSTYLE_LENGTH                   0x00000001

#define _CNCONC_ON_POSITION                      0x0000000F
#define _CNCONC_ON_MASK                          0x00008000
#define _CNCONC_ON_LENGTH                        0x00000001

#define _CNCONC_w_POSITION                       0x00000000
#define _CNCONC_w_MASK                           0xFFFFFFFF
#define _CNCONC_w_LENGTH                         0x00000020

#define _CNEN0C_CNIE0C9_POSITION                 0x00000009
#define _CNEN0C_CNIE0C9_MASK                     0x00000200
#define _CNEN0C_CNIE0C9_LENGTH                   0x00000001

#define _CNEN0C_w_POSITION                       0x00000000
#define _CNEN0C_w_MASK                           0xFFFFFFFF
#define _CNEN0C_w_LENGTH                         0x00000020

#define _CNSTATC_CNSTATC9_POSITION               0x00000009
#define _CNSTATC_CNSTATC9_MASK                   0x00000200
#define _CNSTATC_CNSTATC9_LENGTH                 0x00000001

#define _CNSTATC_w_POSITION                      0x00000000
#define _CNSTATC_w_MASK                          0xFFFFFFFF
#define _CNSTATC_w_LENGTH                        0x00000020

#define _CNEN1C_CNIE1C9_POSITION                 0x00000009
#define _CNEN1C_CNIE1C9_MASK                     0x00000200
#define _CNEN1C_CNIE1C9_LENGTH                   0x00000001

#define _CNEN1C_w_POSITION                       0x00000000
#define _CNEN1C_w_MASK                           0xFFFFFFFF
#define _CNEN1C_w_LENGTH                         0x00000020

#define _CNFC_CNFC9_POSITION                     0x00000009
#define _CNFC_CNFC9_MASK                         0x00000200
#define _CNFC_CNFC9_LENGTH                       0x00000001

#define _CNFC_w_POSITION                         0x00000000
#define _CNFC_w_MASK                             0xFFFFFFFF
#define _CNFC_w_LENGTH                           0x00000020

#define _SR0C_w_POSITION                         0x00000000
#define _SR0C_w_MASK                             0xFFFFFFFF
#define _SR0C_w_LENGTH                           0x00000020

#define _SR1C_w_POSITION                         0x00000000
#define _SR1C_w_MASK                             0xFFFFFFFF
#define _SR1C_w_LENGTH                           0x00000020

#define _PMDCON_PMDLOCK_POSITION                 0x0000000B
#define _PMDCON_PMDLOCK_MASK                     0x00000800
#define _PMDCON_PMDLOCK_LENGTH                   0x00000001

#define _PMD1_ADCMD_POSITION                     0x00000000
#define _PMD1_ADCMD_MASK                         0x00000001
#define _PMD1_ADCMD_LENGTH                       0x00000001

#define _PMD1_VREFMD_POSITION                    0x0000000C
#define _PMD1_VREFMD_MASK                        0x00001000
#define _PMD1_VREFMD_LENGTH                      0x00000001

#define _PMD1_HLVDMD_POSITION                    0x00000014
#define _PMD1_HLVDMD_MASK                        0x00100000
#define _PMD1_HLVDMD_LENGTH                      0x00000001

#define _PMD2_CMP1MD_POSITION                    0x00000000
#define _PMD2_CMP1MD_MASK                        0x00000001
#define _PMD2_CMP1MD_LENGTH                      0x00000001

#define _PMD2_CMP2MD_POSITION                    0x00000001
#define _PMD2_CMP2MD_MASK                        0x00000002
#define _PMD2_CMP2MD_LENGTH                      0x00000001

#define _PMD2_CMP3MD_POSITION                    0x00000002
#define _PMD2_CMP3MD_MASK                        0x00000004
#define _PMD2_CMP3MD_LENGTH                      0x00000001

#define _PMD2_CLC1MD_POSITION                    0x00000018
#define _PMD2_CLC1MD_MASK                        0x01000000
#define _PMD2_CLC1MD_LENGTH                      0x00000001

#define _PMD2_CLC2MD_POSITION                    0x00000019
#define _PMD2_CLC2MD_MASK                        0x02000000
#define _PMD2_CLC2MD_LENGTH                      0x00000001

#define _PMD2_CLC3MD_POSITION                    0x0000001A
#define _PMD2_CLC3MD_MASK                        0x04000000
#define _PMD2_CLC3MD_LENGTH                      0x00000001

#define _PMD2_CLC4MD_POSITION                    0x0000001B
#define _PMD2_CLC4MD_MASK                        0x08000000
#define _PMD2_CLC4MD_LENGTH                      0x00000001

#define _PMD3_CCP1MD_POSITION                    0x00000008
#define _PMD3_CCP1MD_MASK                        0x00000100
#define _PMD3_CCP1MD_LENGTH                      0x00000001

#define _PMD3_CCP2MD_POSITION                    0x00000009
#define _PMD3_CCP2MD_MASK                        0x00000200
#define _PMD3_CCP2MD_LENGTH                      0x00000001

#define _PMD3_CCP3MD_POSITION                    0x0000000A
#define _PMD3_CCP3MD_MASK                        0x00000400
#define _PMD3_CCP3MD_LENGTH                      0x00000001

#define _PMD3_CCP4MD_POSITION                    0x0000000B
#define _PMD3_CCP4MD_MASK                        0x00000800
#define _PMD3_CCP4MD_LENGTH                      0x00000001

#define _PMD3_CC5MD_POSITION                     0x0000000C
#define _PMD3_CC5MD_MASK                         0x00001000
#define _PMD3_CC5MD_LENGTH                       0x00000001

#define _PMD3_CC6MD_POSITION                     0x0000000D
#define _PMD3_CC6MD_MASK                         0x00002000
#define _PMD3_CC6MD_LENGTH                       0x00000001

#define _PMD3_CC7MD_POSITION                     0x0000000E
#define _PMD3_CC7MD_MASK                         0x00004000
#define _PMD3_CC7MD_LENGTH                       0x00000001

#define _PMD3_CC8MD_POSITION                     0x0000000F
#define _PMD3_CC8MD_MASK                         0x00008000
#define _PMD3_CC8MD_LENGTH                       0x00000001

#define _PMD3_CC9MD_POSITION                     0x00000010
#define _PMD3_CC9MD_MASK                         0x00010000
#define _PMD3_CC9MD_LENGTH                       0x00000001

#define _PMD4_T1MD_POSITION                      0x00000000
#define _PMD4_T1MD_MASK                          0x00000001
#define _PMD4_T1MD_LENGTH                        0x00000001

#define _PMD4_T2MD_POSITION                      0x00000001
#define _PMD4_T2MD_MASK                          0x00000002
#define _PMD4_T2MD_LENGTH                        0x00000001

#define _PMD4_T3MD_POSITION                      0x00000002
#define _PMD4_T3MD_MASK                          0x00000004
#define _PMD4_T3MD_LENGTH                        0x00000001

#define _PMD5_U1MD_POSITION                      0x00000000
#define _PMD5_U1MD_MASK                          0x00000001
#define _PMD5_U1MD_LENGTH                        0x00000001

#define _PMD5_U2MD_POSITION                      0x00000001
#define _PMD5_U2MD_MASK                          0x00000002
#define _PMD5_U2MD_LENGTH                        0x00000001

#define _PMD5_U3MD_POSITION                      0x00000002
#define _PMD5_U3MD_MASK                          0x00000004
#define _PMD5_U3MD_LENGTH                        0x00000001

#define _PMD5_SPI1MD_POSITION                    0x00000008
#define _PMD5_SPI1MD_MASK                        0x00000100
#define _PMD5_SPI1MD_LENGTH                      0x00000001

#define _PMD5_SPI2MD_POSITION                    0x00000009
#define _PMD5_SPI2MD_MASK                        0x00000200
#define _PMD5_SPI2MD_LENGTH                      0x00000001

#define _PMD5_SPI3MD_POSITION                    0x0000000A
#define _PMD5_SPI3MD_MASK                        0x00000400
#define _PMD5_SPI3MD_LENGTH                      0x00000001

#define _PMD5_I2C1MD_POSITION                    0x00000010
#define _PMD5_I2C1MD_MASK                        0x00010000
#define _PMD5_I2C1MD_LENGTH                      0x00000001

#define _PMD5_I2C2MD_POSITION                    0x00000011
#define _PMD5_I2C2MD_MASK                        0x00020000
#define _PMD5_I2C2MD_LENGTH                      0x00000001

#define _PMD5_I2C3MD_POSITION                    0x00000012
#define _PMD5_I2C3MD_MASK                        0x00040000
#define _PMD5_I2C3MD_LENGTH                      0x00000001

#define _PMD5_USBMD_POSITION                     0x00000018
#define _PMD5_USBMD_MASK                         0x01000000
#define _PMD5_USBMD_LENGTH                       0x00000001

#define _PMD6_RTCCMD_POSITION                    0x00000000
#define _PMD6_RTCCMD_MASK                        0x00000001
#define _PMD6_RTCCMD_LENGTH                      0x00000001

#define _PMD6_REFOMD_POSITION                    0x00000008
#define _PMD6_REFOMD_MASK                        0x00000100
#define _PMD6_REFOMD_LENGTH                      0x00000001

#define _PMD7_DMAMD_POSITION                     0x00000004
#define _PMD7_DMAMD_MASK                         0x00000010
#define _PMD7_DMAMD_LENGTH                       0x00000001

#define _CFGCON_TDOEN_POSITION                   0x00000000
#define _CFGCON_TDOEN_MASK                       0x00000001
#define _CFGCON_TDOEN_LENGTH                     0x00000001

#define _CFGCON_FAEN_POSITION                    0x00000001
#define _CFGCON_FAEN_MASK                        0x00000002
#define _CFGCON_FAEN_LENGTH                      0x00000001

#define _CFGCON_JTAGEN_POSITION                  0x00000003
#define _CFGCON_JTAGEN_MASK                      0x00000008
#define _CFGCON_JTAGEN_LENGTH                    0x00000001

#define _CFGCON_RPFA_POSITION                    0x00000008
#define _CFGCON_RPFA_MASK                        0x00000100
#define _CFGCON_RPFA_LENGTH                      0x00000001

#define _CFGCON_EXECADDR_POSITION                0x00000010
#define _CFGCON_EXECADDR_MASK                    0x00FF0000
#define _CFGCON_EXECADDR_LENGTH                  0x00000008

#define _CFGCON_BMXARB_POSITION                  0x00000018
#define _CFGCON_BMXARB_MASK                      0x03000000
#define _CFGCON_BMXARB_LENGTH                    0x00000002

#define _CFGCON_BMXERRDIS_POSITION               0x0000001B
#define _CFGCON_BMXERRDIS_MASK                   0x08000000
#define _CFGCON_BMXERRDIS_LENGTH                 0x00000001

#define _DEVID_MAINID_POSITION                   0x00000000
#define _DEVID_MAINID_MASK                       0x00000FFF
#define _DEVID_MAINID_LENGTH                     0x0000000C

#define _DEVID_PN_POSITION                       0x0000000C
#define _DEVID_PN_MASK                           0x0FFFF000
#define _DEVID_PN_LENGTH                         0x00000010

#define _DEVID_VER_POSITION                      0x0000001C
#define _DEVID_VER_MASK                          0xF0000000
#define _DEVID_VER_LENGTH                        0x00000004

#define _SYSKEY_SYSKEY_POSITION                  0x00000000
#define _SYSKEY_SYSKEY_MASK                      0xFFFFFFFF
#define _SYSKEY_SYSKEY_LENGTH                    0x00000020

#define _WDTCON_WDTWINEN_POSITION                0x00000000
#define _WDTCON_WDTWINEN_MASK                    0x00000001
#define _WDTCON_WDTWINEN_LENGTH                  0x00000001

#define _WDTCON_SLPDIV_POSITION                  0x00000001
#define _WDTCON_SLPDIV_MASK                      0x0000003E
#define _WDTCON_SLPDIV_LENGTH                    0x00000005

#define _WDTCON_CLKSEL_POSITION                  0x00000006
#define _WDTCON_CLKSEL_MASK                      0x000000C0
#define _WDTCON_CLKSEL_LENGTH                    0x00000002

#define _WDTCON_RUNDIV_POSITION                  0x00000008
#define _WDTCON_RUNDIV_MASK                      0x00001F00
#define _WDTCON_RUNDIV_LENGTH                    0x00000005

#define _WDTCON_ON_POSITION                      0x0000000F
#define _WDTCON_ON_MASK                          0x00008000
#define _WDTCON_ON_LENGTH                        0x00000001

#define _WDTCON_WDTCLRKEY_POSITION               0x00000010
#define _WDTCON_WDTCLRKEY_MASK                   0xFFFF0000
#define _WDTCON_WDTCLRKEY_LENGTH                 0x00000010

#define _T1CON_TCS_POSITION                      0x00000001
#define _T1CON_TCS_MASK                          0x00000002
#define _T1CON_TCS_LENGTH                        0x00000001

#define _T1CON_TSYNC_POSITION                    0x00000002
#define _T1CON_TSYNC_MASK                        0x00000004
#define _T1CON_TSYNC_LENGTH                      0x00000001

#define _T1CON_TCKPS_POSITION                    0x00000004
#define _T1CON_TCKPS_MASK                        0x00000030
#define _T1CON_TCKPS_LENGTH                      0x00000002

#define _T1CON_TGATE_POSITION                    0x00000007
#define _T1CON_TGATE_MASK                        0x00000080
#define _T1CON_TGATE_LENGTH                      0x00000001

#define _T1CON_TECS_POSITION                     0x00000008
#define _T1CON_TECS_MASK                         0x00000300
#define _T1CON_TECS_LENGTH                       0x00000002

#define _T1CON_TWIP_POSITION                     0x0000000B
#define _T1CON_TWIP_MASK                         0x00000800
#define _T1CON_TWIP_LENGTH                       0x00000001

#define _T1CON_TWDIS_POSITION                    0x0000000C
#define _T1CON_TWDIS_MASK                        0x00001000
#define _T1CON_TWDIS_LENGTH                      0x00000001

#define _T1CON_SIDL_POSITION                     0x0000000D
#define _T1CON_SIDL_MASK                         0x00002000
#define _T1CON_SIDL_LENGTH                       0x00000001

#define _T1CON_ON_POSITION                       0x0000000F
#define _T1CON_ON_MASK                           0x00008000
#define _T1CON_ON_LENGTH                         0x00000001

#define _T1CON_TCKPS0_POSITION                   0x00000004
#define _T1CON_TCKPS0_MASK                       0x00000010
#define _T1CON_TCKPS0_LENGTH                     0x00000001

#define _T1CON_TCKPS1_POSITION                   0x00000005
#define _T1CON_TCKPS1_MASK                       0x00000020
#define _T1CON_TCKPS1_LENGTH                     0x00000001

#define _T1CON_TECS0_POSITION                    0x00000008
#define _T1CON_TECS0_MASK                        0x00000100
#define _T1CON_TECS0_LENGTH                      0x00000001

#define _T1CON_TECS1_POSITION                    0x00000009
#define _T1CON_TECS1_MASK                        0x00000200
#define _T1CON_TECS1_LENGTH                      0x00000001

#define _T1CON_TSIDL_POSITION                    0x0000000D
#define _T1CON_TSIDL_MASK                        0x00002000
#define _T1CON_TSIDL_LENGTH                      0x00000001

#define _T1CON_TON_POSITION                      0x0000000F
#define _T1CON_TON_MASK                          0x00008000
#define _T1CON_TON_LENGTH                        0x00000001

#define _T1CON_w_POSITION                        0x00000000
#define _T1CON_w_MASK                            0xFFFFFFFF
#define _T1CON_w_LENGTH                          0x00000020

#define _T2CON_TCS_POSITION                      0x00000001
#define _T2CON_TCS_MASK                          0x00000002
#define _T2CON_TCS_LENGTH                        0x00000001

#define _T2CON_T32_POSITION                      0x00000003
#define _T2CON_T32_MASK                          0x00000008
#define _T2CON_T32_LENGTH                        0x00000001

#define _T2CON_TCKPS_POSITION                    0x00000004
#define _T2CON_TCKPS_MASK                        0x00000070
#define _T2CON_TCKPS_LENGTH                      0x00000003

#define _T2CON_TGATE_POSITION                    0x00000007
#define _T2CON_TGATE_MASK                        0x00000080
#define _T2CON_TGATE_LENGTH                      0x00000001

#define _T2CON_SIDL_POSITION                     0x0000000D
#define _T2CON_SIDL_MASK                         0x00002000
#define _T2CON_SIDL_LENGTH                       0x00000001

#define _T2CON_ON_POSITION                       0x0000000F
#define _T2CON_ON_MASK                           0x00008000
#define _T2CON_ON_LENGTH                         0x00000001

#define _T2CON_TCKPS0_POSITION                   0x00000004
#define _T2CON_TCKPS0_MASK                       0x00000010
#define _T2CON_TCKPS0_LENGTH                     0x00000001

#define _T2CON_TCKPS1_POSITION                   0x00000005
#define _T2CON_TCKPS1_MASK                       0x00000020
#define _T2CON_TCKPS1_LENGTH                     0x00000001

#define _T2CON_TCKPS2_POSITION                   0x00000006
#define _T2CON_TCKPS2_MASK                       0x00000040
#define _T2CON_TCKPS2_LENGTH                     0x00000001

#define _T2CON_TSIDL_POSITION                    0x0000000D
#define _T2CON_TSIDL_MASK                        0x00002000
#define _T2CON_TSIDL_LENGTH                      0x00000001

#define _T2CON_TON_POSITION                      0x0000000F
#define _T2CON_TON_MASK                          0x00008000
#define _T2CON_TON_LENGTH                        0x00000001

#define _T2CON_w_POSITION                        0x00000000
#define _T2CON_w_MASK                            0xFFFFFFFF
#define _T2CON_w_LENGTH                          0x00000020

#define _T3CON_TCS_POSITION                      0x00000001
#define _T3CON_TCS_MASK                          0x00000002
#define _T3CON_TCS_LENGTH                        0x00000001

#define _T3CON_T32_POSITION                      0x00000003
#define _T3CON_T32_MASK                          0x00000008
#define _T3CON_T32_LENGTH                        0x00000001

#define _T3CON_TCKPS_POSITION                    0x00000004
#define _T3CON_TCKPS_MASK                        0x00000070
#define _T3CON_TCKPS_LENGTH                      0x00000003

#define _T3CON_TGATE_POSITION                    0x00000007
#define _T3CON_TGATE_MASK                        0x00000080
#define _T3CON_TGATE_LENGTH                      0x00000001

#define _T3CON_SIDL_POSITION                     0x0000000D
#define _T3CON_SIDL_MASK                         0x00002000
#define _T3CON_SIDL_LENGTH                       0x00000001

#define _T3CON_ON_POSITION                       0x0000000F
#define _T3CON_ON_MASK                           0x00008000
#define _T3CON_ON_LENGTH                         0x00000001

#define _T3CON_TCKPS0_POSITION                   0x00000004
#define _T3CON_TCKPS0_MASK                       0x00000010
#define _T3CON_TCKPS0_LENGTH                     0x00000001

#define _T3CON_TCKPS1_POSITION                   0x00000005
#define _T3CON_TCKPS1_MASK                       0x00000020
#define _T3CON_TCKPS1_LENGTH                     0x00000001

#define _T3CON_TCKPS2_POSITION                   0x00000006
#define _T3CON_TCKPS2_MASK                       0x00000040
#define _T3CON_TCKPS2_LENGTH                     0x00000001

#define _T3CON_TSIDL_POSITION                    0x0000000D
#define _T3CON_TSIDL_MASK                        0x00002000
#define _T3CON_TSIDL_LENGTH                      0x00000001

#define _T3CON_TON_POSITION                      0x0000000F
#define _T3CON_TON_MASK                          0x00008000
#define _T3CON_TON_LENGTH                        0x00000001

#define _T3CON_w_POSITION                        0x00000000
#define _T3CON_w_MASK                            0xFFFFFFFF
#define _T3CON_w_LENGTH                          0x00000020

#define _SPI1CON_SRXISEL_POSITION                0x00000000
#define _SPI1CON_SRXISEL_MASK                    0x00000003
#define _SPI1CON_SRXISEL_LENGTH                  0x00000002

#define _SPI1CON_STXISEL_POSITION                0x00000002
#define _SPI1CON_STXISEL_MASK                    0x0000000C
#define _SPI1CON_STXISEL_LENGTH                  0x00000002

#define _SPI1CON_DISSDI_POSITION                 0x00000004
#define _SPI1CON_DISSDI_MASK                     0x00000010
#define _SPI1CON_DISSDI_LENGTH                   0x00000001

#define _SPI1CON_MSTEN_POSITION                  0x00000005
#define _SPI1CON_MSTEN_MASK                      0x00000020
#define _SPI1CON_MSTEN_LENGTH                    0x00000001

#define _SPI1CON_CKP_POSITION                    0x00000006
#define _SPI1CON_CKP_MASK                        0x00000040
#define _SPI1CON_CKP_LENGTH                      0x00000001

#define _SPI1CON_SSEN_POSITION                   0x00000007
#define _SPI1CON_SSEN_MASK                       0x00000080
#define _SPI1CON_SSEN_LENGTH                     0x00000001

#define _SPI1CON_CKE_POSITION                    0x00000008
#define _SPI1CON_CKE_MASK                        0x00000100
#define _SPI1CON_CKE_LENGTH                      0x00000001

#define _SPI1CON_SMP_POSITION                    0x00000009
#define _SPI1CON_SMP_MASK                        0x00000200
#define _SPI1CON_SMP_LENGTH                      0x00000001

#define _SPI1CON_MODE16_POSITION                 0x0000000A
#define _SPI1CON_MODE16_MASK                     0x00000400
#define _SPI1CON_MODE16_LENGTH                   0x00000001

#define _SPI1CON_MODE32_POSITION                 0x0000000B
#define _SPI1CON_MODE32_MASK                     0x00000800
#define _SPI1CON_MODE32_LENGTH                   0x00000001

#define _SPI1CON_DISSDO_POSITION                 0x0000000C
#define _SPI1CON_DISSDO_MASK                     0x00001000
#define _SPI1CON_DISSDO_LENGTH                   0x00000001

#define _SPI1CON_SIDL_POSITION                   0x0000000D
#define _SPI1CON_SIDL_MASK                       0x00002000
#define _SPI1CON_SIDL_LENGTH                     0x00000001

#define _SPI1CON_ON_POSITION                     0x0000000F
#define _SPI1CON_ON_MASK                         0x00008000
#define _SPI1CON_ON_LENGTH                       0x00000001

#define _SPI1CON_ENHBUF_POSITION                 0x00000010
#define _SPI1CON_ENHBUF_MASK                     0x00010000
#define _SPI1CON_ENHBUF_LENGTH                   0x00000001

#define _SPI1CON_SPIFE_POSITION                  0x00000011
#define _SPI1CON_SPIFE_MASK                      0x00020000
#define _SPI1CON_SPIFE_LENGTH                    0x00000001

#define _SPI1CON_MCLKSEL_POSITION                0x00000017
#define _SPI1CON_MCLKSEL_MASK                    0x00800000
#define _SPI1CON_MCLKSEL_LENGTH                  0x00000001

#define _SPI1CON_FRMCNT_POSITION                 0x00000018
#define _SPI1CON_FRMCNT_MASK                     0x07000000
#define _SPI1CON_FRMCNT_LENGTH                   0x00000003

#define _SPI1CON_FRMSYPW_POSITION                0x0000001B
#define _SPI1CON_FRMSYPW_MASK                    0x08000000
#define _SPI1CON_FRMSYPW_LENGTH                  0x00000001

#define _SPI1CON_MSSEN_POSITION                  0x0000001C
#define _SPI1CON_MSSEN_MASK                      0x10000000
#define _SPI1CON_MSSEN_LENGTH                    0x00000001

#define _SPI1CON_FRMPOL_POSITION                 0x0000001D
#define _SPI1CON_FRMPOL_MASK                     0x20000000
#define _SPI1CON_FRMPOL_LENGTH                   0x00000001

#define _SPI1CON_FRMSYNC_POSITION                0x0000001E
#define _SPI1CON_FRMSYNC_MASK                    0x40000000
#define _SPI1CON_FRMSYNC_LENGTH                  0x00000001

#define _SPI1CON_FRMEN_POSITION                  0x0000001F
#define _SPI1CON_FRMEN_MASK                      0x80000000
#define _SPI1CON_FRMEN_LENGTH                    0x00000001

#define _SPI1CON_w_POSITION                      0x00000000
#define _SPI1CON_w_MASK                          0xFFFFFFFF
#define _SPI1CON_w_LENGTH                        0x00000020

#define _SPI1STAT_SPIRBF_POSITION                0x00000000
#define _SPI1STAT_SPIRBF_MASK                    0x00000001
#define _SPI1STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI1STAT_SPITBF_POSITION                0x00000001
#define _SPI1STAT_SPITBF_MASK                    0x00000002
#define _SPI1STAT_SPITBF_LENGTH                  0x00000001

#define _SPI1STAT_SPITBE_POSITION                0x00000003
#define _SPI1STAT_SPITBE_MASK                    0x00000008
#define _SPI1STAT_SPITBE_LENGTH                  0x00000001

#define _SPI1STAT_SPIRBE_POSITION                0x00000005
#define _SPI1STAT_SPIRBE_MASK                    0x00000020
#define _SPI1STAT_SPIRBE_LENGTH                  0x00000001

#define _SPI1STAT_SPIROV_POSITION                0x00000006
#define _SPI1STAT_SPIROV_MASK                    0x00000040
#define _SPI1STAT_SPIROV_LENGTH                  0x00000001

#define _SPI1STAT_SRMT_POSITION                  0x00000007
#define _SPI1STAT_SRMT_MASK                      0x00000080
#define _SPI1STAT_SRMT_LENGTH                    0x00000001

#define _SPI1STAT_SPITUR_POSITION                0x00000008
#define _SPI1STAT_SPITUR_MASK                    0x00000100
#define _SPI1STAT_SPITUR_LENGTH                  0x00000001

#define _SPI1STAT_SPIBUSY_POSITION               0x0000000B
#define _SPI1STAT_SPIBUSY_MASK                   0x00000800
#define _SPI1STAT_SPIBUSY_LENGTH                 0x00000001

#define _SPI1STAT_FRMERR_POSITION                0x0000000C
#define _SPI1STAT_FRMERR_MASK                    0x00001000
#define _SPI1STAT_FRMERR_LENGTH                  0x00000001

#define _SPI1STAT_TXBUFELM_POSITION              0x00000010
#define _SPI1STAT_TXBUFELM_MASK                  0x001F0000
#define _SPI1STAT_TXBUFELM_LENGTH                0x00000005

#define _SPI1STAT_RXBUFELM_POSITION              0x00000018
#define _SPI1STAT_RXBUFELM_MASK                  0x1F000000
#define _SPI1STAT_RXBUFELM_LENGTH                0x00000005

#define _SPI1STAT_w_POSITION                     0x00000000
#define _SPI1STAT_w_MASK                         0xFFFFFFFF
#define _SPI1STAT_w_LENGTH                       0x00000020

#define _SPI1CON2_AUDMOD_POSITION                0x00000000
#define _SPI1CON2_AUDMOD_MASK                    0x00000003
#define _SPI1CON2_AUDMOD_LENGTH                  0x00000002

#define _SPI1CON2_AUDMONO_POSITION               0x00000003
#define _SPI1CON2_AUDMONO_MASK                   0x00000008
#define _SPI1CON2_AUDMONO_LENGTH                 0x00000001

#define _SPI1CON2_AUDEN_POSITION                 0x00000007
#define _SPI1CON2_AUDEN_MASK                     0x00000080
#define _SPI1CON2_AUDEN_LENGTH                   0x00000001

#define _SPI1CON2_IGNTUR_POSITION                0x00000008
#define _SPI1CON2_IGNTUR_MASK                    0x00000100
#define _SPI1CON2_IGNTUR_LENGTH                  0x00000001

#define _SPI1CON2_IGNROV_POSITION                0x00000009
#define _SPI1CON2_IGNROV_MASK                    0x00000200
#define _SPI1CON2_IGNROV_LENGTH                  0x00000001

#define _SPI1CON2_SPITUREN_POSITION              0x0000000A
#define _SPI1CON2_SPITUREN_MASK                  0x00000400
#define _SPI1CON2_SPITUREN_LENGTH                0x00000001

#define _SPI1CON2_SPIROVEN_POSITION              0x0000000B
#define _SPI1CON2_SPIROVEN_MASK                  0x00000800
#define _SPI1CON2_SPIROVEN_LENGTH                0x00000001

#define _SPI1CON2_FRMERREN_POSITION              0x0000000C
#define _SPI1CON2_FRMERREN_MASK                  0x00001000
#define _SPI1CON2_FRMERREN_LENGTH                0x00000001

#define _SPI1CON2_SPISGNEXT_POSITION             0x0000000F
#define _SPI1CON2_SPISGNEXT_MASK                 0x00008000
#define _SPI1CON2_SPISGNEXT_LENGTH               0x00000001

#define _SPI1CON2_AUDMOD0_POSITION               0x00000000
#define _SPI1CON2_AUDMOD0_MASK                   0x00000001
#define _SPI1CON2_AUDMOD0_LENGTH                 0x00000001

#define _SPI1CON2_AUDMOD1_POSITION               0x00000001
#define _SPI1CON2_AUDMOD1_MASK                   0x00000002
#define _SPI1CON2_AUDMOD1_LENGTH                 0x00000001

#define _SPI1CON2_w_POSITION                     0x00000000
#define _SPI1CON2_w_MASK                         0xFFFFFFFF
#define _SPI1CON2_w_LENGTH                       0x00000020

#define _SPI2CON_SRXISEL_POSITION                0x00000000
#define _SPI2CON_SRXISEL_MASK                    0x00000003
#define _SPI2CON_SRXISEL_LENGTH                  0x00000002

#define _SPI2CON_STXISEL_POSITION                0x00000002
#define _SPI2CON_STXISEL_MASK                    0x0000000C
#define _SPI2CON_STXISEL_LENGTH                  0x00000002

#define _SPI2CON_DISSDI_POSITION                 0x00000004
#define _SPI2CON_DISSDI_MASK                     0x00000010
#define _SPI2CON_DISSDI_LENGTH                   0x00000001

#define _SPI2CON_MSTEN_POSITION                  0x00000005
#define _SPI2CON_MSTEN_MASK                      0x00000020
#define _SPI2CON_MSTEN_LENGTH                    0x00000001

#define _SPI2CON_CKP_POSITION                    0x00000006
#define _SPI2CON_CKP_MASK                        0x00000040
#define _SPI2CON_CKP_LENGTH                      0x00000001

#define _SPI2CON_SSEN_POSITION                   0x00000007
#define _SPI2CON_SSEN_MASK                       0x00000080
#define _SPI2CON_SSEN_LENGTH                     0x00000001

#define _SPI2CON_CKE_POSITION                    0x00000008
#define _SPI2CON_CKE_MASK                        0x00000100
#define _SPI2CON_CKE_LENGTH                      0x00000001

#define _SPI2CON_SMP_POSITION                    0x00000009
#define _SPI2CON_SMP_MASK                        0x00000200
#define _SPI2CON_SMP_LENGTH                      0x00000001

#define _SPI2CON_MODE16_POSITION                 0x0000000A
#define _SPI2CON_MODE16_MASK                     0x00000400
#define _SPI2CON_MODE16_LENGTH                   0x00000001

#define _SPI2CON_MODE32_POSITION                 0x0000000B
#define _SPI2CON_MODE32_MASK                     0x00000800
#define _SPI2CON_MODE32_LENGTH                   0x00000001

#define _SPI2CON_DISSDO_POSITION                 0x0000000C
#define _SPI2CON_DISSDO_MASK                     0x00001000
#define _SPI2CON_DISSDO_LENGTH                   0x00000001

#define _SPI2CON_SIDL_POSITION                   0x0000000D
#define _SPI2CON_SIDL_MASK                       0x00002000
#define _SPI2CON_SIDL_LENGTH                     0x00000001

#define _SPI2CON_ON_POSITION                     0x0000000F
#define _SPI2CON_ON_MASK                         0x00008000
#define _SPI2CON_ON_LENGTH                       0x00000001

#define _SPI2CON_ENHBUF_POSITION                 0x00000010
#define _SPI2CON_ENHBUF_MASK                     0x00010000
#define _SPI2CON_ENHBUF_LENGTH                   0x00000001

#define _SPI2CON_SPIFE_POSITION                  0x00000011
#define _SPI2CON_SPIFE_MASK                      0x00020000
#define _SPI2CON_SPIFE_LENGTH                    0x00000001

#define _SPI2CON_MCLKSEL_POSITION                0x00000017
#define _SPI2CON_MCLKSEL_MASK                    0x00800000
#define _SPI2CON_MCLKSEL_LENGTH                  0x00000001

#define _SPI2CON_FRMCNT_POSITION                 0x00000018
#define _SPI2CON_FRMCNT_MASK                     0x07000000
#define _SPI2CON_FRMCNT_LENGTH                   0x00000003

#define _SPI2CON_FRMSYPW_POSITION                0x0000001B
#define _SPI2CON_FRMSYPW_MASK                    0x08000000
#define _SPI2CON_FRMSYPW_LENGTH                  0x00000001

#define _SPI2CON_MSSEN_POSITION                  0x0000001C
#define _SPI2CON_MSSEN_MASK                      0x10000000
#define _SPI2CON_MSSEN_LENGTH                    0x00000001

#define _SPI2CON_FRMPOL_POSITION                 0x0000001D
#define _SPI2CON_FRMPOL_MASK                     0x20000000
#define _SPI2CON_FRMPOL_LENGTH                   0x00000001

#define _SPI2CON_FRMSYNC_POSITION                0x0000001E
#define _SPI2CON_FRMSYNC_MASK                    0x40000000
#define _SPI2CON_FRMSYNC_LENGTH                  0x00000001

#define _SPI2CON_FRMEN_POSITION                  0x0000001F
#define _SPI2CON_FRMEN_MASK                      0x80000000
#define _SPI2CON_FRMEN_LENGTH                    0x00000001

#define _SPI2CON_w_POSITION                      0x00000000
#define _SPI2CON_w_MASK                          0xFFFFFFFF
#define _SPI2CON_w_LENGTH                        0x00000020

#define _SPI2STAT_SPIRBF_POSITION                0x00000000
#define _SPI2STAT_SPIRBF_MASK                    0x00000001
#define _SPI2STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI2STAT_SPITBF_POSITION                0x00000001
#define _SPI2STAT_SPITBF_MASK                    0x00000002
#define _SPI2STAT_SPITBF_LENGTH                  0x00000001

#define _SPI2STAT_SPITBE_POSITION                0x00000003
#define _SPI2STAT_SPITBE_MASK                    0x00000008
#define _SPI2STAT_SPITBE_LENGTH                  0x00000001

#define _SPI2STAT_SPIRBE_POSITION                0x00000005
#define _SPI2STAT_SPIRBE_MASK                    0x00000020
#define _SPI2STAT_SPIRBE_LENGTH                  0x00000001

#define _SPI2STAT_SPIROV_POSITION                0x00000006
#define _SPI2STAT_SPIROV_MASK                    0x00000040
#define _SPI2STAT_SPIROV_LENGTH                  0x00000001

#define _SPI2STAT_SRMT_POSITION                  0x00000007
#define _SPI2STAT_SRMT_MASK                      0x00000080
#define _SPI2STAT_SRMT_LENGTH                    0x00000001

#define _SPI2STAT_SPITUR_POSITION                0x00000008
#define _SPI2STAT_SPITUR_MASK                    0x00000100
#define _SPI2STAT_SPITUR_LENGTH                  0x00000001

#define _SPI2STAT_SPIBUSY_POSITION               0x0000000B
#define _SPI2STAT_SPIBUSY_MASK                   0x00000800
#define _SPI2STAT_SPIBUSY_LENGTH                 0x00000001

#define _SPI2STAT_FRMERR_POSITION                0x0000000C
#define _SPI2STAT_FRMERR_MASK                    0x00001000
#define _SPI2STAT_FRMERR_LENGTH                  0x00000001

#define _SPI2STAT_TXBUFELM_POSITION              0x00000010
#define _SPI2STAT_TXBUFELM_MASK                  0x001F0000
#define _SPI2STAT_TXBUFELM_LENGTH                0x00000005

#define _SPI2STAT_RXBUFELM_POSITION              0x00000018
#define _SPI2STAT_RXBUFELM_MASK                  0x1F000000
#define _SPI2STAT_RXBUFELM_LENGTH                0x00000005

#define _SPI2STAT_w_POSITION                     0x00000000
#define _SPI2STAT_w_MASK                         0xFFFFFFFF
#define _SPI2STAT_w_LENGTH                       0x00000020

#define _SPI2CON2_AUDMOD_POSITION                0x00000000
#define _SPI2CON2_AUDMOD_MASK                    0x00000003
#define _SPI2CON2_AUDMOD_LENGTH                  0x00000002

#define _SPI2CON2_AUDMONO_POSITION               0x00000003
#define _SPI2CON2_AUDMONO_MASK                   0x00000008
#define _SPI2CON2_AUDMONO_LENGTH                 0x00000001

#define _SPI2CON2_AUDEN_POSITION                 0x00000007
#define _SPI2CON2_AUDEN_MASK                     0x00000080
#define _SPI2CON2_AUDEN_LENGTH                   0x00000001

#define _SPI2CON2_IGNTUR_POSITION                0x00000008
#define _SPI2CON2_IGNTUR_MASK                    0x00000100
#define _SPI2CON2_IGNTUR_LENGTH                  0x00000001

#define _SPI2CON2_IGNROV_POSITION                0x00000009
#define _SPI2CON2_IGNROV_MASK                    0x00000200
#define _SPI2CON2_IGNROV_LENGTH                  0x00000001

#define _SPI2CON2_SPITUREN_POSITION              0x0000000A
#define _SPI2CON2_SPITUREN_MASK                  0x00000400
#define _SPI2CON2_SPITUREN_LENGTH                0x00000001

#define _SPI2CON2_SPIROVEN_POSITION              0x0000000B
#define _SPI2CON2_SPIROVEN_MASK                  0x00000800
#define _SPI2CON2_SPIROVEN_LENGTH                0x00000001

#define _SPI2CON2_FRMERREN_POSITION              0x0000000C
#define _SPI2CON2_FRMERREN_MASK                  0x00001000
#define _SPI2CON2_FRMERREN_LENGTH                0x00000001

#define _SPI2CON2_SPISGNEXT_POSITION             0x0000000F
#define _SPI2CON2_SPISGNEXT_MASK                 0x00008000
#define _SPI2CON2_SPISGNEXT_LENGTH               0x00000001

#define _SPI2CON2_AUDMOD0_POSITION               0x00000000
#define _SPI2CON2_AUDMOD0_MASK                   0x00000001
#define _SPI2CON2_AUDMOD0_LENGTH                 0x00000001

#define _SPI2CON2_AUDMOD1_POSITION               0x00000001
#define _SPI2CON2_AUDMOD1_MASK                   0x00000002
#define _SPI2CON2_AUDMOD1_LENGTH                 0x00000001

#define _SPI2CON2_w_POSITION                     0x00000000
#define _SPI2CON2_w_MASK                         0xFFFFFFFF
#define _SPI2CON2_w_LENGTH                       0x00000020

#define _SPI3CON_SRXISEL_POSITION                0x00000000
#define _SPI3CON_SRXISEL_MASK                    0x00000003
#define _SPI3CON_SRXISEL_LENGTH                  0x00000002

#define _SPI3CON_STXISEL_POSITION                0x00000002
#define _SPI3CON_STXISEL_MASK                    0x0000000C
#define _SPI3CON_STXISEL_LENGTH                  0x00000002

#define _SPI3CON_DISSDI_POSITION                 0x00000004
#define _SPI3CON_DISSDI_MASK                     0x00000010
#define _SPI3CON_DISSDI_LENGTH                   0x00000001

#define _SPI3CON_MSTEN_POSITION                  0x00000005
#define _SPI3CON_MSTEN_MASK                      0x00000020
#define _SPI3CON_MSTEN_LENGTH                    0x00000001

#define _SPI3CON_CKP_POSITION                    0x00000006
#define _SPI3CON_CKP_MASK                        0x00000040
#define _SPI3CON_CKP_LENGTH                      0x00000001

#define _SPI3CON_SSEN_POSITION                   0x00000007
#define _SPI3CON_SSEN_MASK                       0x00000080
#define _SPI3CON_SSEN_LENGTH                     0x00000001

#define _SPI3CON_CKE_POSITION                    0x00000008
#define _SPI3CON_CKE_MASK                        0x00000100
#define _SPI3CON_CKE_LENGTH                      0x00000001

#define _SPI3CON_SMP_POSITION                    0x00000009
#define _SPI3CON_SMP_MASK                        0x00000200
#define _SPI3CON_SMP_LENGTH                      0x00000001

#define _SPI3CON_MODE16_POSITION                 0x0000000A
#define _SPI3CON_MODE16_MASK                     0x00000400
#define _SPI3CON_MODE16_LENGTH                   0x00000001

#define _SPI3CON_MODE32_POSITION                 0x0000000B
#define _SPI3CON_MODE32_MASK                     0x00000800
#define _SPI3CON_MODE32_LENGTH                   0x00000001

#define _SPI3CON_DISSDO_POSITION                 0x0000000C
#define _SPI3CON_DISSDO_MASK                     0x00001000
#define _SPI3CON_DISSDO_LENGTH                   0x00000001

#define _SPI3CON_SIDL_POSITION                   0x0000000D
#define _SPI3CON_SIDL_MASK                       0x00002000
#define _SPI3CON_SIDL_LENGTH                     0x00000001

#define _SPI3CON_ON_POSITION                     0x0000000F
#define _SPI3CON_ON_MASK                         0x00008000
#define _SPI3CON_ON_LENGTH                       0x00000001

#define _SPI3CON_ENHBUF_POSITION                 0x00000010
#define _SPI3CON_ENHBUF_MASK                     0x00010000
#define _SPI3CON_ENHBUF_LENGTH                   0x00000001

#define _SPI3CON_SPIFE_POSITION                  0x00000011
#define _SPI3CON_SPIFE_MASK                      0x00020000
#define _SPI3CON_SPIFE_LENGTH                    0x00000001

#define _SPI3CON_MCLKSEL_POSITION                0x00000017
#define _SPI3CON_MCLKSEL_MASK                    0x00800000
#define _SPI3CON_MCLKSEL_LENGTH                  0x00000001

#define _SPI3CON_FRMCNT_POSITION                 0x00000018
#define _SPI3CON_FRMCNT_MASK                     0x07000000
#define _SPI3CON_FRMCNT_LENGTH                   0x00000003

#define _SPI3CON_FRMSYPW_POSITION                0x0000001B
#define _SPI3CON_FRMSYPW_MASK                    0x08000000
#define _SPI3CON_FRMSYPW_LENGTH                  0x00000001

#define _SPI3CON_MSSEN_POSITION                  0x0000001C
#define _SPI3CON_MSSEN_MASK                      0x10000000
#define _SPI3CON_MSSEN_LENGTH                    0x00000001

#define _SPI3CON_FRMPOL_POSITION                 0x0000001D
#define _SPI3CON_FRMPOL_MASK                     0x20000000
#define _SPI3CON_FRMPOL_LENGTH                   0x00000001

#define _SPI3CON_FRMSYNC_POSITION                0x0000001E
#define _SPI3CON_FRMSYNC_MASK                    0x40000000
#define _SPI3CON_FRMSYNC_LENGTH                  0x00000001

#define _SPI3CON_FRMEN_POSITION                  0x0000001F
#define _SPI3CON_FRMEN_MASK                      0x80000000
#define _SPI3CON_FRMEN_LENGTH                    0x00000001

#define _SPI3CON_w_POSITION                      0x00000000
#define _SPI3CON_w_MASK                          0xFFFFFFFF
#define _SPI3CON_w_LENGTH                        0x00000020

#define _SPI3STAT_SPIRBF_POSITION                0x00000000
#define _SPI3STAT_SPIRBF_MASK                    0x00000001
#define _SPI3STAT_SPIRBF_LENGTH                  0x00000001

#define _SPI3STAT_SPITBF_POSITION                0x00000001
#define _SPI3STAT_SPITBF_MASK                    0x00000002
#define _SPI3STAT_SPITBF_LENGTH                  0x00000001

#define _SPI3STAT_SPITBE_POSITION                0x00000003
#define _SPI3STAT_SPITBE_MASK                    0x00000008
#define _SPI3STAT_SPITBE_LENGTH                  0x00000001

#define _SPI3STAT_SPIRBE_POSITION                0x00000005
#define _SPI3STAT_SPIRBE_MASK                    0x00000020
#define _SPI3STAT_SPIRBE_LENGTH                  0x00000001

#define _SPI3STAT_SPIROV_POSITION                0x00000006
#define _SPI3STAT_SPIROV_MASK                    0x00000040
#define _SPI3STAT_SPIROV_LENGTH                  0x00000001

#define _SPI3STAT_SRMT_POSITION                  0x00000007
#define _SPI3STAT_SRMT_MASK                      0x00000080
#define _SPI3STAT_SRMT_LENGTH                    0x00000001

#define _SPI3STAT_SPITUR_POSITION                0x00000008
#define _SPI3STAT_SPITUR_MASK                    0x00000100
#define _SPI3STAT_SPITUR_LENGTH                  0x00000001

#define _SPI3STAT_SPIBUSY_POSITION               0x0000000B
#define _SPI3STAT_SPIBUSY_MASK                   0x00000800
#define _SPI3STAT_SPIBUSY_LENGTH                 0x00000001

#define _SPI3STAT_FRMERR_POSITION                0x0000000C
#define _SPI3STAT_FRMERR_MASK                    0x00001000
#define _SPI3STAT_FRMERR_LENGTH                  0x00000001

#define _SPI3STAT_TXBUFELM_POSITION              0x00000010
#define _SPI3STAT_TXBUFELM_MASK                  0x001F0000
#define _SPI3STAT_TXBUFELM_LENGTH                0x00000005

#define _SPI3STAT_RXBUFELM_POSITION              0x00000018
#define _SPI3STAT_RXBUFELM_MASK                  0x1F000000
#define _SPI3STAT_RXBUFELM_LENGTH                0x00000005

#define _SPI3STAT_w_POSITION                     0x00000000
#define _SPI3STAT_w_MASK                         0xFFFFFFFF
#define _SPI3STAT_w_LENGTH                       0x00000020

#define _SPI3CON2_AUDMOD_POSITION                0x00000000
#define _SPI3CON2_AUDMOD_MASK                    0x00000003
#define _SPI3CON2_AUDMOD_LENGTH                  0x00000002

#define _SPI3CON2_AUDMONO_POSITION               0x00000003
#define _SPI3CON2_AUDMONO_MASK                   0x00000008
#define _SPI3CON2_AUDMONO_LENGTH                 0x00000001

#define _SPI3CON2_AUDEN_POSITION                 0x00000007
#define _SPI3CON2_AUDEN_MASK                     0x00000080
#define _SPI3CON2_AUDEN_LENGTH                   0x00000001

#define _SPI3CON2_IGNTUR_POSITION                0x00000008
#define _SPI3CON2_IGNTUR_MASK                    0x00000100
#define _SPI3CON2_IGNTUR_LENGTH                  0x00000001

#define _SPI3CON2_IGNROV_POSITION                0x00000009
#define _SPI3CON2_IGNROV_MASK                    0x00000200
#define _SPI3CON2_IGNROV_LENGTH                  0x00000001

#define _SPI3CON2_SPITUREN_POSITION              0x0000000A
#define _SPI3CON2_SPITUREN_MASK                  0x00000400
#define _SPI3CON2_SPITUREN_LENGTH                0x00000001

#define _SPI3CON2_SPIROVEN_POSITION              0x0000000B
#define _SPI3CON2_SPIROVEN_MASK                  0x00000800
#define _SPI3CON2_SPIROVEN_LENGTH                0x00000001

#define _SPI3CON2_FRMERREN_POSITION              0x0000000C
#define _SPI3CON2_FRMERREN_MASK                  0x00001000
#define _SPI3CON2_FRMERREN_LENGTH                0x00000001

#define _SPI3CON2_SPISGNEXT_POSITION             0x0000000F
#define _SPI3CON2_SPISGNEXT_MASK                 0x00008000
#define _SPI3CON2_SPISGNEXT_LENGTH               0x00000001

#define _SPI3CON2_AUDMOD0_POSITION               0x00000000
#define _SPI3CON2_AUDMOD0_MASK                   0x00000001
#define _SPI3CON2_AUDMOD0_LENGTH                 0x00000001

#define _SPI3CON2_AUDMOD1_POSITION               0x00000001
#define _SPI3CON2_AUDMOD1_MASK                   0x00000002
#define _SPI3CON2_AUDMOD1_LENGTH                 0x00000001

#define _SPI3CON2_w_POSITION                     0x00000000
#define _SPI3CON2_w_MASK                         0xFFFFFFFF
#define _SPI3CON2_w_LENGTH                       0x00000020

#define _U1OTGIR_VBUSVDIF_POSITION               0x00000000
#define _U1OTGIR_VBUSVDIF_MASK                   0x00000001
#define _U1OTGIR_VBUSVDIF_LENGTH                 0x00000001

#define _U1OTGIR_SESENDIF_POSITION               0x00000002
#define _U1OTGIR_SESENDIF_MASK                   0x00000004
#define _U1OTGIR_SESENDIF_LENGTH                 0x00000001

#define _U1OTGIR_SESVDIF_POSITION                0x00000003
#define _U1OTGIR_SESVDIF_MASK                    0x00000008
#define _U1OTGIR_SESVDIF_LENGTH                  0x00000001

#define _U1OTGIR_ACTVIF_POSITION                 0x00000004
#define _U1OTGIR_ACTVIF_MASK                     0x00000010
#define _U1OTGIR_ACTVIF_LENGTH                   0x00000001

#define _U1OTGIR_LSTATEIF_POSITION               0x00000005
#define _U1OTGIR_LSTATEIF_MASK                   0x00000020
#define _U1OTGIR_LSTATEIF_LENGTH                 0x00000001

#define _U1OTGIR_T1MSECIF_POSITION               0x00000006
#define _U1OTGIR_T1MSECIF_MASK                   0x00000040
#define _U1OTGIR_T1MSECIF_LENGTH                 0x00000001

#define _U1OTGIR_IDIF_POSITION                   0x00000007
#define _U1OTGIR_IDIF_MASK                       0x00000080
#define _U1OTGIR_IDIF_LENGTH                     0x00000001

#define _U1OTGIE_VBUSVDIE_POSITION               0x00000000
#define _U1OTGIE_VBUSVDIE_MASK                   0x00000001
#define _U1OTGIE_VBUSVDIE_LENGTH                 0x00000001

#define _U1OTGIE_SESENDIE_POSITION               0x00000002
#define _U1OTGIE_SESENDIE_MASK                   0x00000004
#define _U1OTGIE_SESENDIE_LENGTH                 0x00000001

#define _U1OTGIE_SESVDIE_POSITION                0x00000003
#define _U1OTGIE_SESVDIE_MASK                    0x00000008
#define _U1OTGIE_SESVDIE_LENGTH                  0x00000001

#define _U1OTGIE_ACTVIE_POSITION                 0x00000004
#define _U1OTGIE_ACTVIE_MASK                     0x00000010
#define _U1OTGIE_ACTVIE_LENGTH                   0x00000001

#define _U1OTGIE_LSTATEIE_POSITION               0x00000005
#define _U1OTGIE_LSTATEIE_MASK                   0x00000020
#define _U1OTGIE_LSTATEIE_LENGTH                 0x00000001

#define _U1OTGIE_T1MSECIE_POSITION               0x00000006
#define _U1OTGIE_T1MSECIE_MASK                   0x00000040
#define _U1OTGIE_T1MSECIE_LENGTH                 0x00000001

#define _U1OTGIE_IDIE_POSITION                   0x00000007
#define _U1OTGIE_IDIE_MASK                       0x00000080
#define _U1OTGIE_IDIE_LENGTH                     0x00000001

#define _U1OTGSTAT_VBUSVD_POSITION               0x00000000
#define _U1OTGSTAT_VBUSVD_MASK                   0x00000001
#define _U1OTGSTAT_VBUSVD_LENGTH                 0x00000001

#define _U1OTGSTAT_SESEND_POSITION               0x00000002
#define _U1OTGSTAT_SESEND_MASK                   0x00000004
#define _U1OTGSTAT_SESEND_LENGTH                 0x00000001

#define _U1OTGSTAT_SESVD_POSITION                0x00000003
#define _U1OTGSTAT_SESVD_MASK                    0x00000008
#define _U1OTGSTAT_SESVD_LENGTH                  0x00000001

#define _U1OTGSTAT_LSTATE_POSITION               0x00000005
#define _U1OTGSTAT_LSTATE_MASK                   0x00000020
#define _U1OTGSTAT_LSTATE_LENGTH                 0x00000001

#define _U1OTGSTAT_ID_POSITION                   0x00000007
#define _U1OTGSTAT_ID_MASK                       0x00000080
#define _U1OTGSTAT_ID_LENGTH                     0x00000001

#define _U1OTGCON_VBUSDIS_POSITION               0x00000000
#define _U1OTGCON_VBUSDIS_MASK                   0x00000001
#define _U1OTGCON_VBUSDIS_LENGTH                 0x00000001

#define _U1OTGCON_VBUSCHG_POSITION               0x00000001
#define _U1OTGCON_VBUSCHG_MASK                   0x00000002
#define _U1OTGCON_VBUSCHG_LENGTH                 0x00000001

#define _U1OTGCON_OTGEN_POSITION                 0x00000002
#define _U1OTGCON_OTGEN_MASK                     0x00000004
#define _U1OTGCON_OTGEN_LENGTH                   0x00000001

#define _U1OTGCON_VBUSON_POSITION                0x00000003
#define _U1OTGCON_VBUSON_MASK                    0x00000008
#define _U1OTGCON_VBUSON_LENGTH                  0x00000001

#define _U1OTGCON_DMPULDWN_POSITION              0x00000004
#define _U1OTGCON_DMPULDWN_MASK                  0x00000010
#define _U1OTGCON_DMPULDWN_LENGTH                0x00000001

#define _U1OTGCON_DPPULDWN_POSITION              0x00000005
#define _U1OTGCON_DPPULDWN_MASK                  0x00000020
#define _U1OTGCON_DPPULDWN_LENGTH                0x00000001

#define _U1OTGCON_DMPULUP_POSITION               0x00000006
#define _U1OTGCON_DMPULUP_MASK                   0x00000040
#define _U1OTGCON_DMPULUP_LENGTH                 0x00000001

#define _U1OTGCON_DPPULUP_POSITION               0x00000007
#define _U1OTGCON_DPPULUP_MASK                   0x00000080
#define _U1OTGCON_DPPULUP_LENGTH                 0x00000001

#define _U1PWRC_USBPWR_POSITION                  0x00000000
#define _U1PWRC_USBPWR_MASK                      0x00000001
#define _U1PWRC_USBPWR_LENGTH                    0x00000001

#define _U1PWRC_USUSPEND_POSITION                0x00000001
#define _U1PWRC_USUSPEND_MASK                    0x00000002
#define _U1PWRC_USUSPEND_LENGTH                  0x00000001

#define _U1PWRC_USBBUSY_POSITION                 0x00000003
#define _U1PWRC_USBBUSY_MASK                     0x00000008
#define _U1PWRC_USBBUSY_LENGTH                   0x00000001

#define _U1PWRC_USLPGRD_POSITION                 0x00000004
#define _U1PWRC_USLPGRD_MASK                     0x00000010
#define _U1PWRC_USLPGRD_LENGTH                   0x00000001

#define _U1PWRC_UACTPND_POSITION                 0x00000007
#define _U1PWRC_UACTPND_MASK                     0x00000080
#define _U1PWRC_UACTPND_LENGTH                   0x00000001

#define _U1IR_URSTIF_DETACHIF_POSITION           0x00000000
#define _U1IR_URSTIF_DETACHIF_MASK               0x00000001
#define _U1IR_URSTIF_DETACHIF_LENGTH             0x00000001

#define _U1IR_UERRIF_POSITION                    0x00000001
#define _U1IR_UERRIF_MASK                        0x00000002
#define _U1IR_UERRIF_LENGTH                      0x00000001

#define _U1IR_SOFIF_POSITION                     0x00000002
#define _U1IR_SOFIF_MASK                         0x00000004
#define _U1IR_SOFIF_LENGTH                       0x00000001

#define _U1IR_TRNIF_POSITION                     0x00000003
#define _U1IR_TRNIF_MASK                         0x00000008
#define _U1IR_TRNIF_LENGTH                       0x00000001

#define _U1IR_IDLEIF_POSITION                    0x00000004
#define _U1IR_IDLEIF_MASK                        0x00000010
#define _U1IR_IDLEIF_LENGTH                      0x00000001

#define _U1IR_RESUMEIF_POSITION                  0x00000005
#define _U1IR_RESUMEIF_MASK                      0x00000020
#define _U1IR_RESUMEIF_LENGTH                    0x00000001

#define _U1IR_ATTACHIF_POSITION                  0x00000006
#define _U1IR_ATTACHIF_MASK                      0x00000040
#define _U1IR_ATTACHIF_LENGTH                    0x00000001

#define _U1IR_STALLIF_POSITION                   0x00000007
#define _U1IR_STALLIF_MASK                       0x00000080
#define _U1IR_STALLIF_LENGTH                     0x00000001

#define _U1IR_DETACHIF_POSITION                  0x00000000
#define _U1IR_DETACHIF_MASK                      0x00000001
#define _U1IR_DETACHIF_LENGTH                    0x00000001

#define _U1IR_URSTIF_POSITION                    0x00000000
#define _U1IR_URSTIF_MASK                        0x00000001
#define _U1IR_URSTIF_LENGTH                      0x00000001

#define _U1IE_URSTIE_DETACHIE_POSITION           0x00000000
#define _U1IE_URSTIE_DETACHIE_MASK               0x00000001
#define _U1IE_URSTIE_DETACHIE_LENGTH             0x00000001

#define _U1IE_UERRIE_POSITION                    0x00000001
#define _U1IE_UERRIE_MASK                        0x00000002
#define _U1IE_UERRIE_LENGTH                      0x00000001

#define _U1IE_SOFIE_POSITION                     0x00000002
#define _U1IE_SOFIE_MASK                         0x00000004
#define _U1IE_SOFIE_LENGTH                       0x00000001

#define _U1IE_TRNIE_POSITION                     0x00000003
#define _U1IE_TRNIE_MASK                         0x00000008
#define _U1IE_TRNIE_LENGTH                       0x00000001

#define _U1IE_IDLEIE_POSITION                    0x00000004
#define _U1IE_IDLEIE_MASK                        0x00000010
#define _U1IE_IDLEIE_LENGTH                      0x00000001

#define _U1IE_RESUMEIE_POSITION                  0x00000005
#define _U1IE_RESUMEIE_MASK                      0x00000020
#define _U1IE_RESUMEIE_LENGTH                    0x00000001

#define _U1IE_ATTACHIE_POSITION                  0x00000006
#define _U1IE_ATTACHIE_MASK                      0x00000040
#define _U1IE_ATTACHIE_LENGTH                    0x00000001

#define _U1IE_STALLIE_POSITION                   0x00000007
#define _U1IE_STALLIE_MASK                       0x00000080
#define _U1IE_STALLIE_LENGTH                     0x00000001

#define _U1IE_DETACHIE_POSITION                  0x00000000
#define _U1IE_DETACHIE_MASK                      0x00000001
#define _U1IE_DETACHIE_LENGTH                    0x00000001

#define _U1IE_URSTIE_POSITION                    0x00000000
#define _U1IE_URSTIE_MASK                        0x00000001
#define _U1IE_URSTIE_LENGTH                      0x00000001

#define _U1EIR_PIDEF_POSITION                    0x00000000
#define _U1EIR_PIDEF_MASK                        0x00000001
#define _U1EIR_PIDEF_LENGTH                      0x00000001

#define _U1EIR_CRC5EF_EOFEF_POSITION             0x00000001
#define _U1EIR_CRC5EF_EOFEF_MASK                 0x00000002
#define _U1EIR_CRC5EF_EOFEF_LENGTH               0x00000001

#define _U1EIR_CRC16EF_POSITION                  0x00000002
#define _U1EIR_CRC16EF_MASK                      0x00000004
#define _U1EIR_CRC16EF_LENGTH                    0x00000001

#define _U1EIR_DFN8EF_POSITION                   0x00000003
#define _U1EIR_DFN8EF_MASK                       0x00000008
#define _U1EIR_DFN8EF_LENGTH                     0x00000001

#define _U1EIR_BTOEF_POSITION                    0x00000004
#define _U1EIR_BTOEF_MASK                        0x00000010
#define _U1EIR_BTOEF_LENGTH                      0x00000001

#define _U1EIR_DMAEF_POSITION                    0x00000005
#define _U1EIR_DMAEF_MASK                        0x00000020
#define _U1EIR_DMAEF_LENGTH                      0x00000001

#define _U1EIR_BMXEF_POSITION                    0x00000006
#define _U1EIR_BMXEF_MASK                        0x00000040
#define _U1EIR_BMXEF_LENGTH                      0x00000001

#define _U1EIR_BTSEF_POSITION                    0x00000007
#define _U1EIR_BTSEF_MASK                        0x00000080
#define _U1EIR_BTSEF_LENGTH                      0x00000001

#define _U1EIR_CRC5EF_POSITION                   0x00000001
#define _U1EIR_CRC5EF_MASK                       0x00000002
#define _U1EIR_CRC5EF_LENGTH                     0x00000001

#define _U1EIR_EOFEF_POSITION                    0x00000001
#define _U1EIR_EOFEF_MASK                        0x00000002
#define _U1EIR_EOFEF_LENGTH                      0x00000001

#define _U1EIE_PIDEE_POSITION                    0x00000000
#define _U1EIE_PIDEE_MASK                        0x00000001
#define _U1EIE_PIDEE_LENGTH                      0x00000001

#define _U1EIE_CRC5EE_EOFEE_POSITION             0x00000001
#define _U1EIE_CRC5EE_EOFEE_MASK                 0x00000002
#define _U1EIE_CRC5EE_EOFEE_LENGTH               0x00000001

#define _U1EIE_CRC16EE_POSITION                  0x00000002
#define _U1EIE_CRC16EE_MASK                      0x00000004
#define _U1EIE_CRC16EE_LENGTH                    0x00000001

#define _U1EIE_DFN8EE_POSITION                   0x00000003
#define _U1EIE_DFN8EE_MASK                       0x00000008
#define _U1EIE_DFN8EE_LENGTH                     0x00000001

#define _U1EIE_BTOEE_POSITION                    0x00000004
#define _U1EIE_BTOEE_MASK                        0x00000010
#define _U1EIE_BTOEE_LENGTH                      0x00000001

#define _U1EIE_DMAEE_POSITION                    0x00000005
#define _U1EIE_DMAEE_MASK                        0x00000020
#define _U1EIE_DMAEE_LENGTH                      0x00000001

#define _U1EIE_BMXEE_POSITION                    0x00000006
#define _U1EIE_BMXEE_MASK                        0x00000040
#define _U1EIE_BMXEE_LENGTH                      0x00000001

#define _U1EIE_BTSEE_POSITION                    0x00000007
#define _U1EIE_BTSEE_MASK                        0x00000080
#define _U1EIE_BTSEE_LENGTH                      0x00000001

#define _U1EIE_CRC5EE_POSITION                   0x00000001
#define _U1EIE_CRC5EE_MASK                       0x00000002
#define _U1EIE_CRC5EE_LENGTH                     0x00000001

#define _U1EIE_EOFEE_POSITION                    0x00000001
#define _U1EIE_EOFEE_MASK                        0x00000002
#define _U1EIE_EOFEE_LENGTH                      0x00000001

#define _U1STAT_PPBI_POSITION                    0x00000002
#define _U1STAT_PPBI_MASK                        0x00000004
#define _U1STAT_PPBI_LENGTH                      0x00000001

#define _U1STAT_DIR_POSITION                     0x00000003
#define _U1STAT_DIR_MASK                         0x00000008
#define _U1STAT_DIR_LENGTH                       0x00000001

#define _U1STAT_ENDPT_POSITION                   0x00000004
#define _U1STAT_ENDPT_MASK                       0x000000F0
#define _U1STAT_ENDPT_LENGTH                     0x00000004

#define _U1STAT_ENDPT0_POSITION                  0x00000004
#define _U1STAT_ENDPT0_MASK                      0x00000010
#define _U1STAT_ENDPT0_LENGTH                    0x00000001

#define _U1STAT_ENDPT1_POSITION                  0x00000005
#define _U1STAT_ENDPT1_MASK                      0x00000020
#define _U1STAT_ENDPT1_LENGTH                    0x00000001

#define _U1STAT_ENDPT2_POSITION                  0x00000006
#define _U1STAT_ENDPT2_MASK                      0x00000040
#define _U1STAT_ENDPT2_LENGTH                    0x00000001

#define _U1STAT_ENDPT3_POSITION                  0x00000007
#define _U1STAT_ENDPT3_MASK                      0x00000080
#define _U1STAT_ENDPT3_LENGTH                    0x00000001

#define _U1CON_USBEN_SOFEN_POSITION              0x00000000
#define _U1CON_USBEN_SOFEN_MASK                  0x00000001
#define _U1CON_USBEN_SOFEN_LENGTH                0x00000001

#define _U1CON_PPBRST_POSITION                   0x00000001
#define _U1CON_PPBRST_MASK                       0x00000002
#define _U1CON_PPBRST_LENGTH                     0x00000001

#define _U1CON_RESUME_POSITION                   0x00000002
#define _U1CON_RESUME_MASK                       0x00000004
#define _U1CON_RESUME_LENGTH                     0x00000001

#define _U1CON_HOSTEN_POSITION                   0x00000003
#define _U1CON_HOSTEN_MASK                       0x00000008
#define _U1CON_HOSTEN_LENGTH                     0x00000001

#define _U1CON_USBRST_POSITION                   0x00000004
#define _U1CON_USBRST_MASK                       0x00000010
#define _U1CON_USBRST_LENGTH                     0x00000001

#define _U1CON_PKTDIS_TOKBUSY_POSITION           0x00000005
#define _U1CON_PKTDIS_TOKBUSY_MASK               0x00000020
#define _U1CON_PKTDIS_TOKBUSY_LENGTH             0x00000001

#define _U1CON_SE0_POSITION                      0x00000006
#define _U1CON_SE0_MASK                          0x00000040
#define _U1CON_SE0_LENGTH                        0x00000001

#define _U1CON_JSTATE_POSITION                   0x00000007
#define _U1CON_JSTATE_MASK                       0x00000080
#define _U1CON_JSTATE_LENGTH                     0x00000001

#define _U1CON_USBEN_POSITION                    0x00000000
#define _U1CON_USBEN_MASK                        0x00000001
#define _U1CON_USBEN_LENGTH                      0x00000001

#define _U1CON_SOFEN_POSITION                    0x00000000
#define _U1CON_SOFEN_MASK                        0x00000001
#define _U1CON_SOFEN_LENGTH                      0x00000001

#define _U1CON_PKTDIS_POSITION                   0x00000005
#define _U1CON_PKTDIS_MASK                       0x00000020
#define _U1CON_PKTDIS_LENGTH                     0x00000001

#define _U1CON_TOKBUSY_POSITION                  0x00000005
#define _U1CON_TOKBUSY_MASK                      0x00000020
#define _U1CON_TOKBUSY_LENGTH                    0x00000001

#define _U1ADDR_DEVADDR_POSITION                 0x00000000
#define _U1ADDR_DEVADDR_MASK                     0x0000007F
#define _U1ADDR_DEVADDR_LENGTH                   0x00000007

#define _U1ADDR_LSPDEN_POSITION                  0x00000007
#define _U1ADDR_LSPDEN_MASK                      0x00000080
#define _U1ADDR_LSPDEN_LENGTH                    0x00000001

#define _U1ADDR_DEVADDR0_POSITION                0x00000000
#define _U1ADDR_DEVADDR0_MASK                    0x00000001
#define _U1ADDR_DEVADDR0_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR1_POSITION                0x00000001
#define _U1ADDR_DEVADDR1_MASK                    0x00000002
#define _U1ADDR_DEVADDR1_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR2_POSITION                0x00000002
#define _U1ADDR_DEVADDR2_MASK                    0x00000004
#define _U1ADDR_DEVADDR2_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR3_POSITION                0x00000003
#define _U1ADDR_DEVADDR3_MASK                    0x00000008
#define _U1ADDR_DEVADDR3_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR4_POSITION                0x00000004
#define _U1ADDR_DEVADDR4_MASK                    0x00000010
#define _U1ADDR_DEVADDR4_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR5_POSITION                0x00000005
#define _U1ADDR_DEVADDR5_MASK                    0x00000020
#define _U1ADDR_DEVADDR5_LENGTH                  0x00000001

#define _U1ADDR_DEVADDR6_POSITION                0x00000006
#define _U1ADDR_DEVADDR6_MASK                    0x00000040
#define _U1ADDR_DEVADDR6_LENGTH                  0x00000001

#define _U1BDTP1_BDTPTRL_POSITION                0x00000001
#define _U1BDTP1_BDTPTRL_MASK                    0x000000FE
#define _U1BDTP1_BDTPTRL_LENGTH                  0x00000007

#define _U1FRML_FRML_POSITION                    0x00000000
#define _U1FRML_FRML_MASK                        0x000000FF
#define _U1FRML_FRML_LENGTH                      0x00000008

#define _U1FRML_FRM0_POSITION                    0x00000000
#define _U1FRML_FRM0_MASK                        0x00000001
#define _U1FRML_FRM0_LENGTH                      0x00000001

#define _U1FRML_FRM1_POSITION                    0x00000001
#define _U1FRML_FRM1_MASK                        0x00000002
#define _U1FRML_FRM1_LENGTH                      0x00000001

#define _U1FRML_FRM2_POSITION                    0x00000002
#define _U1FRML_FRM2_MASK                        0x00000004
#define _U1FRML_FRM2_LENGTH                      0x00000001

#define _U1FRML_FRM3_POSITION                    0x00000003
#define _U1FRML_FRM3_MASK                        0x00000008
#define _U1FRML_FRM3_LENGTH                      0x00000001

#define _U1FRML_FRM4_POSITION                    0x00000004
#define _U1FRML_FRM4_MASK                        0x00000010
#define _U1FRML_FRM4_LENGTH                      0x00000001

#define _U1FRML_FRM5_POSITION                    0x00000005
#define _U1FRML_FRM5_MASK                        0x00000020
#define _U1FRML_FRM5_LENGTH                      0x00000001

#define _U1FRML_FRM6_POSITION                    0x00000006
#define _U1FRML_FRM6_MASK                        0x00000040
#define _U1FRML_FRM6_LENGTH                      0x00000001

#define _U1FRML_FRM7_POSITION                    0x00000007
#define _U1FRML_FRM7_MASK                        0x00000080
#define _U1FRML_FRM7_LENGTH                      0x00000001

#define _U1FRMH_FRMH_POSITION                    0x00000000
#define _U1FRMH_FRMH_MASK                        0x00000007
#define _U1FRMH_FRMH_LENGTH                      0x00000003

#define _U1FRMH_FRM8_POSITION                    0x00000000
#define _U1FRMH_FRM8_MASK                        0x00000001
#define _U1FRMH_FRM8_LENGTH                      0x00000001

#define _U1FRMH_FRM9_POSITION                    0x00000001
#define _U1FRMH_FRM9_MASK                        0x00000002
#define _U1FRMH_FRM9_LENGTH                      0x00000001

#define _U1FRMH_FRM10_POSITION                   0x00000002
#define _U1FRMH_FRM10_MASK                       0x00000004
#define _U1FRMH_FRM10_LENGTH                     0x00000001

#define _U1TOK_EP_POSITION                       0x00000000
#define _U1TOK_EP_MASK                           0x0000000F
#define _U1TOK_EP_LENGTH                         0x00000004

#define _U1TOK_PID_POSITION                      0x00000004
#define _U1TOK_PID_MASK                          0x000000F0
#define _U1TOK_PID_LENGTH                        0x00000004

#define _U1TOK_EP0_POSITION                      0x00000000
#define _U1TOK_EP0_MASK                          0x00000001
#define _U1TOK_EP0_LENGTH                        0x00000001

#define _U1TOK_EP1_POSITION                      0x00000001
#define _U1TOK_EP1_MASK                          0x00000002
#define _U1TOK_EP1_LENGTH                        0x00000001

#define _U1TOK_EP2_POSITION                      0x00000002
#define _U1TOK_EP2_MASK                          0x00000004
#define _U1TOK_EP2_LENGTH                        0x00000001

#define _U1TOK_EP3_POSITION                      0x00000003
#define _U1TOK_EP3_MASK                          0x00000008
#define _U1TOK_EP3_LENGTH                        0x00000001

#define _U1TOK_PID0_POSITION                     0x00000004
#define _U1TOK_PID0_MASK                         0x00000010
#define _U1TOK_PID0_LENGTH                       0x00000001

#define _U1TOK_PID1_POSITION                     0x00000005
#define _U1TOK_PID1_MASK                         0x00000020
#define _U1TOK_PID1_LENGTH                       0x00000001

#define _U1TOK_PID2_POSITION                     0x00000006
#define _U1TOK_PID2_MASK                         0x00000040
#define _U1TOK_PID2_LENGTH                       0x00000001

#define _U1TOK_PID3_POSITION                     0x00000007
#define _U1TOK_PID3_MASK                         0x00000080
#define _U1TOK_PID3_LENGTH                       0x00000001

#define _U1SOF_CNT_POSITION                      0x00000000
#define _U1SOF_CNT_MASK                          0x000000FF
#define _U1SOF_CNT_LENGTH                        0x00000008

#define _U1BDTP2_BDTPTRH_POSITION                0x00000000
#define _U1BDTP2_BDTPTRH_MASK                    0x000000FF
#define _U1BDTP2_BDTPTRH_LENGTH                  0x00000008

#define _U1BDTP3_BDTPTRU_POSITION                0x00000000
#define _U1BDTP3_BDTPTRU_MASK                    0x000000FF
#define _U1BDTP3_BDTPTRU_LENGTH                  0x00000008

#define _U1CNFG1_UASUSPND_POSITION               0x00000000
#define _U1CNFG1_UASUSPND_MASK                   0x00000001
#define _U1CNFG1_UASUSPND_LENGTH                 0x00000001

#define _U1CNFG1_LSDEV_POSITION                  0x00000003
#define _U1CNFG1_LSDEV_MASK                      0x00000008
#define _U1CNFG1_LSDEV_LENGTH                    0x00000001

#define _U1CNFG1_USBSIDL_POSITION                0x00000004
#define _U1CNFG1_USBSIDL_MASK                    0x00000010
#define _U1CNFG1_USBSIDL_LENGTH                  0x00000001

#define _U1CNFG1_UOEMON_POSITION                 0x00000006
#define _U1CNFG1_UOEMON_MASK                     0x00000040
#define _U1CNFG1_UOEMON_LENGTH                   0x00000001

#define _U1CNFG1_UTEYE_POSITION                  0x00000007
#define _U1CNFG1_UTEYE_MASK                      0x00000080
#define _U1CNFG1_UTEYE_LENGTH                    0x00000001

#define _U1EP0_EPHSHK_POSITION                   0x00000000
#define _U1EP0_EPHSHK_MASK                       0x00000001
#define _U1EP0_EPHSHK_LENGTH                     0x00000001

#define _U1EP0_EPSTALL_POSITION                  0x00000001
#define _U1EP0_EPSTALL_MASK                      0x00000002
#define _U1EP0_EPSTALL_LENGTH                    0x00000001

#define _U1EP0_EPTXEN_POSITION                   0x00000002
#define _U1EP0_EPTXEN_MASK                       0x00000004
#define _U1EP0_EPTXEN_LENGTH                     0x00000001

#define _U1EP0_EPRXEN_POSITION                   0x00000003
#define _U1EP0_EPRXEN_MASK                       0x00000008
#define _U1EP0_EPRXEN_LENGTH                     0x00000001

#define _U1EP0_EPCONDIS_POSITION                 0x00000004
#define _U1EP0_EPCONDIS_MASK                     0x00000010
#define _U1EP0_EPCONDIS_LENGTH                   0x00000001

#define _U1EP0_RETRYDIS_POSITION                 0x00000006
#define _U1EP0_RETRYDIS_MASK                     0x00000040
#define _U1EP0_RETRYDIS_LENGTH                   0x00000001

#define _U1EP0_LSPD_POSITION                     0x00000007
#define _U1EP0_LSPD_MASK                         0x00000080
#define _U1EP0_LSPD_LENGTH                       0x00000001

#define _U1EP1_EPHSHK_POSITION                   0x00000000
#define _U1EP1_EPHSHK_MASK                       0x00000001
#define _U1EP1_EPHSHK_LENGTH                     0x00000001

#define _U1EP1_EPSTALL_POSITION                  0x00000001
#define _U1EP1_EPSTALL_MASK                      0x00000002
#define _U1EP1_EPSTALL_LENGTH                    0x00000001

#define _U1EP1_EPTXEN_POSITION                   0x00000002
#define _U1EP1_EPTXEN_MASK                       0x00000004
#define _U1EP1_EPTXEN_LENGTH                     0x00000001

#define _U1EP1_EPRXEN_POSITION                   0x00000003
#define _U1EP1_EPRXEN_MASK                       0x00000008
#define _U1EP1_EPRXEN_LENGTH                     0x00000001

#define _U1EP1_EPCONDIS_POSITION                 0x00000004
#define _U1EP1_EPCONDIS_MASK                     0x00000010
#define _U1EP1_EPCONDIS_LENGTH                   0x00000001

#define _U1EP2_EPHSHK_POSITION                   0x00000000
#define _U1EP2_EPHSHK_MASK                       0x00000001
#define _U1EP2_EPHSHK_LENGTH                     0x00000001

#define _U1EP2_EPSTALL_POSITION                  0x00000001
#define _U1EP2_EPSTALL_MASK                      0x00000002
#define _U1EP2_EPSTALL_LENGTH                    0x00000001

#define _U1EP2_EPTXEN_POSITION                   0x00000002
#define _U1EP2_EPTXEN_MASK                       0x00000004
#define _U1EP2_EPTXEN_LENGTH                     0x00000001

#define _U1EP2_EPRXEN_POSITION                   0x00000003
#define _U1EP2_EPRXEN_MASK                       0x00000008
#define _U1EP2_EPRXEN_LENGTH                     0x00000001

#define _U1EP2_EPCONDIS_POSITION                 0x00000004
#define _U1EP2_EPCONDIS_MASK                     0x00000010
#define _U1EP2_EPCONDIS_LENGTH                   0x00000001

#define _U1EP3_EPHSHK_POSITION                   0x00000000
#define _U1EP3_EPHSHK_MASK                       0x00000001
#define _U1EP3_EPHSHK_LENGTH                     0x00000001

#define _U1EP3_EPSTALL_POSITION                  0x00000001
#define _U1EP3_EPSTALL_MASK                      0x00000002
#define _U1EP3_EPSTALL_LENGTH                    0x00000001

#define _U1EP3_EPTXEN_POSITION                   0x00000002
#define _U1EP3_EPTXEN_MASK                       0x00000004
#define _U1EP3_EPTXEN_LENGTH                     0x00000001

#define _U1EP3_EPRXEN_POSITION                   0x00000003
#define _U1EP3_EPRXEN_MASK                       0x00000008
#define _U1EP3_EPRXEN_LENGTH                     0x00000001

#define _U1EP3_EPCONDIS_POSITION                 0x00000004
#define _U1EP3_EPCONDIS_MASK                     0x00000010
#define _U1EP3_EPCONDIS_LENGTH                   0x00000001

#define _U1EP4_EPHSHK_POSITION                   0x00000000
#define _U1EP4_EPHSHK_MASK                       0x00000001
#define _U1EP4_EPHSHK_LENGTH                     0x00000001

#define _U1EP4_EPSTALL_POSITION                  0x00000001
#define _U1EP4_EPSTALL_MASK                      0x00000002
#define _U1EP4_EPSTALL_LENGTH                    0x00000001

#define _U1EP4_EPTXEN_POSITION                   0x00000002
#define _U1EP4_EPTXEN_MASK                       0x00000004
#define _U1EP4_EPTXEN_LENGTH                     0x00000001

#define _U1EP4_EPRXEN_POSITION                   0x00000003
#define _U1EP4_EPRXEN_MASK                       0x00000008
#define _U1EP4_EPRXEN_LENGTH                     0x00000001

#define _U1EP4_EPCONDIS_POSITION                 0x00000004
#define _U1EP4_EPCONDIS_MASK                     0x00000010
#define _U1EP4_EPCONDIS_LENGTH                   0x00000001

#define _U1EP5_EPHSHK_POSITION                   0x00000000
#define _U1EP5_EPHSHK_MASK                       0x00000001
#define _U1EP5_EPHSHK_LENGTH                     0x00000001

#define _U1EP5_EPSTALL_POSITION                  0x00000001
#define _U1EP5_EPSTALL_MASK                      0x00000002
#define _U1EP5_EPSTALL_LENGTH                    0x00000001

#define _U1EP5_EPTXEN_POSITION                   0x00000002
#define _U1EP5_EPTXEN_MASK                       0x00000004
#define _U1EP5_EPTXEN_LENGTH                     0x00000001

#define _U1EP5_EPRXEN_POSITION                   0x00000003
#define _U1EP5_EPRXEN_MASK                       0x00000008
#define _U1EP5_EPRXEN_LENGTH                     0x00000001

#define _U1EP5_EPCONDIS_POSITION                 0x00000004
#define _U1EP5_EPCONDIS_MASK                     0x00000010
#define _U1EP5_EPCONDIS_LENGTH                   0x00000001

#define _U1EP6_EPHSHK_POSITION                   0x00000000
#define _U1EP6_EPHSHK_MASK                       0x00000001
#define _U1EP6_EPHSHK_LENGTH                     0x00000001

#define _U1EP6_EPSTALL_POSITION                  0x00000001
#define _U1EP6_EPSTALL_MASK                      0x00000002
#define _U1EP6_EPSTALL_LENGTH                    0x00000001

#define _U1EP6_EPTXEN_POSITION                   0x00000002
#define _U1EP6_EPTXEN_MASK                       0x00000004
#define _U1EP6_EPTXEN_LENGTH                     0x00000001

#define _U1EP6_EPRXEN_POSITION                   0x00000003
#define _U1EP6_EPRXEN_MASK                       0x00000008
#define _U1EP6_EPRXEN_LENGTH                     0x00000001

#define _U1EP6_EPCONDIS_POSITION                 0x00000004
#define _U1EP6_EPCONDIS_MASK                     0x00000010
#define _U1EP6_EPCONDIS_LENGTH                   0x00000001

#define _U1EP7_EPHSHK_POSITION                   0x00000000
#define _U1EP7_EPHSHK_MASK                       0x00000001
#define _U1EP7_EPHSHK_LENGTH                     0x00000001

#define _U1EP7_EPSTALL_POSITION                  0x00000001
#define _U1EP7_EPSTALL_MASK                      0x00000002
#define _U1EP7_EPSTALL_LENGTH                    0x00000001

#define _U1EP7_EPTXEN_POSITION                   0x00000002
#define _U1EP7_EPTXEN_MASK                       0x00000004
#define _U1EP7_EPTXEN_LENGTH                     0x00000001

#define _U1EP7_EPRXEN_POSITION                   0x00000003
#define _U1EP7_EPRXEN_MASK                       0x00000008
#define _U1EP7_EPRXEN_LENGTH                     0x00000001

#define _U1EP7_EPCONDIS_POSITION                 0x00000004
#define _U1EP7_EPCONDIS_MASK                     0x00000010
#define _U1EP7_EPCONDIS_LENGTH                   0x00000001

#define _U1EP8_EPHSHK_POSITION                   0x00000000
#define _U1EP8_EPHSHK_MASK                       0x00000001
#define _U1EP8_EPHSHK_LENGTH                     0x00000001

#define _U1EP8_EPSTALL_POSITION                  0x00000001
#define _U1EP8_EPSTALL_MASK                      0x00000002
#define _U1EP8_EPSTALL_LENGTH                    0x00000001

#define _U1EP8_EPTXEN_POSITION                   0x00000002
#define _U1EP8_EPTXEN_MASK                       0x00000004
#define _U1EP8_EPTXEN_LENGTH                     0x00000001

#define _U1EP8_EPRXEN_POSITION                   0x00000003
#define _U1EP8_EPRXEN_MASK                       0x00000008
#define _U1EP8_EPRXEN_LENGTH                     0x00000001

#define _U1EP8_EPCONDIS_POSITION                 0x00000004
#define _U1EP8_EPCONDIS_MASK                     0x00000010
#define _U1EP8_EPCONDIS_LENGTH                   0x00000001

#define _U1EP9_EPHSHK_POSITION                   0x00000000
#define _U1EP9_EPHSHK_MASK                       0x00000001
#define _U1EP9_EPHSHK_LENGTH                     0x00000001

#define _U1EP9_EPSTALL_POSITION                  0x00000001
#define _U1EP9_EPSTALL_MASK                      0x00000002
#define _U1EP9_EPSTALL_LENGTH                    0x00000001

#define _U1EP9_EPTXEN_POSITION                   0x00000002
#define _U1EP9_EPTXEN_MASK                       0x00000004
#define _U1EP9_EPTXEN_LENGTH                     0x00000001

#define _U1EP9_EPRXEN_POSITION                   0x00000003
#define _U1EP9_EPRXEN_MASK                       0x00000008
#define _U1EP9_EPRXEN_LENGTH                     0x00000001

#define _U1EP9_EPCONDIS_POSITION                 0x00000004
#define _U1EP9_EPCONDIS_MASK                     0x00000010
#define _U1EP9_EPCONDIS_LENGTH                   0x00000001

#define _U1EP10_EPHSHK_POSITION                  0x00000000
#define _U1EP10_EPHSHK_MASK                      0x00000001
#define _U1EP10_EPHSHK_LENGTH                    0x00000001

#define _U1EP10_EPSTALL_POSITION                 0x00000001
#define _U1EP10_EPSTALL_MASK                     0x00000002
#define _U1EP10_EPSTALL_LENGTH                   0x00000001

#define _U1EP10_EPTXEN_POSITION                  0x00000002
#define _U1EP10_EPTXEN_MASK                      0x00000004
#define _U1EP10_EPTXEN_LENGTH                    0x00000001

#define _U1EP10_EPRXEN_POSITION                  0x00000003
#define _U1EP10_EPRXEN_MASK                      0x00000008
#define _U1EP10_EPRXEN_LENGTH                    0x00000001

#define _U1EP10_EPCONDIS_POSITION                0x00000004
#define _U1EP10_EPCONDIS_MASK                    0x00000010
#define _U1EP10_EPCONDIS_LENGTH                  0x00000001

#define _U1EP11_EPHSHK_POSITION                  0x00000000
#define _U1EP11_EPHSHK_MASK                      0x00000001
#define _U1EP11_EPHSHK_LENGTH                    0x00000001

#define _U1EP11_EPSTALL_POSITION                 0x00000001
#define _U1EP11_EPSTALL_MASK                     0x00000002
#define _U1EP11_EPSTALL_LENGTH                   0x00000001

#define _U1EP11_EPTXEN_POSITION                  0x00000002
#define _U1EP11_EPTXEN_MASK                      0x00000004
#define _U1EP11_EPTXEN_LENGTH                    0x00000001

#define _U1EP11_EPRXEN_POSITION                  0x00000003
#define _U1EP11_EPRXEN_MASK                      0x00000008
#define _U1EP11_EPRXEN_LENGTH                    0x00000001

#define _U1EP11_EPCONDIS_POSITION                0x00000004
#define _U1EP11_EPCONDIS_MASK                    0x00000010
#define _U1EP11_EPCONDIS_LENGTH                  0x00000001

#define _U1EP12_EPHSHK_POSITION                  0x00000000
#define _U1EP12_EPHSHK_MASK                      0x00000001
#define _U1EP12_EPHSHK_LENGTH                    0x00000001

#define _U1EP12_EPSTALL_POSITION                 0x00000001
#define _U1EP12_EPSTALL_MASK                     0x00000002
#define _U1EP12_EPSTALL_LENGTH                   0x00000001

#define _U1EP12_EPTXEN_POSITION                  0x00000002
#define _U1EP12_EPTXEN_MASK                      0x00000004
#define _U1EP12_EPTXEN_LENGTH                    0x00000001

#define _U1EP12_EPRXEN_POSITION                  0x00000003
#define _U1EP12_EPRXEN_MASK                      0x00000008
#define _U1EP12_EPRXEN_LENGTH                    0x00000001

#define _U1EP12_EPCONDIS_POSITION                0x00000004
#define _U1EP12_EPCONDIS_MASK                    0x00000010
#define _U1EP12_EPCONDIS_LENGTH                  0x00000001

#define _U1EP13_EPHSHK_POSITION                  0x00000000
#define _U1EP13_EPHSHK_MASK                      0x00000001
#define _U1EP13_EPHSHK_LENGTH                    0x00000001

#define _U1EP13_EPSTALL_POSITION                 0x00000001
#define _U1EP13_EPSTALL_MASK                     0x00000002
#define _U1EP13_EPSTALL_LENGTH                   0x00000001

#define _U1EP13_EPTXEN_POSITION                  0x00000002
#define _U1EP13_EPTXEN_MASK                      0x00000004
#define _U1EP13_EPTXEN_LENGTH                    0x00000001

#define _U1EP13_EPRXEN_POSITION                  0x00000003
#define _U1EP13_EPRXEN_MASK                      0x00000008
#define _U1EP13_EPRXEN_LENGTH                    0x00000001

#define _U1EP13_EPCONDIS_POSITION                0x00000004
#define _U1EP13_EPCONDIS_MASK                    0x00000010
#define _U1EP13_EPCONDIS_LENGTH                  0x00000001

#define _U1EP14_EPHSHK_POSITION                  0x00000000
#define _U1EP14_EPHSHK_MASK                      0x00000001
#define _U1EP14_EPHSHK_LENGTH                    0x00000001

#define _U1EP14_EPSTALL_POSITION                 0x00000001
#define _U1EP14_EPSTALL_MASK                     0x00000002
#define _U1EP14_EPSTALL_LENGTH                   0x00000001

#define _U1EP14_EPTXEN_POSITION                  0x00000002
#define _U1EP14_EPTXEN_MASK                      0x00000004
#define _U1EP14_EPTXEN_LENGTH                    0x00000001

#define _U1EP14_EPRXEN_POSITION                  0x00000003
#define _U1EP14_EPRXEN_MASK                      0x00000008
#define _U1EP14_EPRXEN_LENGTH                    0x00000001

#define _U1EP14_EPCONDIS_POSITION                0x00000004
#define _U1EP14_EPCONDIS_MASK                    0x00000010
#define _U1EP14_EPCONDIS_LENGTH                  0x00000001

#define _U1EP15_EPHSHK_POSITION                  0x00000000
#define _U1EP15_EPHSHK_MASK                      0x00000001
#define _U1EP15_EPHSHK_LENGTH                    0x00000001

#define _U1EP15_EPSTALL_POSITION                 0x00000001
#define _U1EP15_EPSTALL_MASK                     0x00000002
#define _U1EP15_EPSTALL_LENGTH                   0x00000001

#define _U1EP15_EPTXEN_POSITION                  0x00000002
#define _U1EP15_EPTXEN_MASK                      0x00000004
#define _U1EP15_EPTXEN_LENGTH                    0x00000001

#define _U1EP15_EPRXEN_POSITION                  0x00000003
#define _U1EP15_EPRXEN_MASK                      0x00000008
#define _U1EP15_EPRXEN_LENGTH                    0x00000001

#define _U1EP15_EPCONDIS_POSITION                0x00000004
#define _U1EP15_EPCONDIS_MASK                    0x00000010
#define _U1EP15_EPCONDIS_LENGTH                  0x00000001

#define _DMACON_DMABUSY_POSITION                 0x0000000B
#define _DMACON_DMABUSY_MASK                     0x00000800
#define _DMACON_DMABUSY_LENGTH                   0x00000001

#define _DMACON_SUSPEND_POSITION                 0x0000000C
#define _DMACON_SUSPEND_MASK                     0x00001000
#define _DMACON_SUSPEND_LENGTH                   0x00000001

#define _DMACON_ON_POSITION                      0x0000000F
#define _DMACON_ON_MASK                          0x00008000
#define _DMACON_ON_LENGTH                        0x00000001

#define _DMACON_w_POSITION                       0x00000000
#define _DMACON_w_MASK                           0xFFFFFFFF
#define _DMACON_w_LENGTH                         0x00000020

#define _DMASTAT_DMACH_POSITION                  0x00000000
#define _DMASTAT_DMACH_MASK                      0x00000007
#define _DMASTAT_DMACH_LENGTH                    0x00000003

#define _DMASTAT_RDWR_POSITION                   0x00000003
#define _DMASTAT_RDWR_MASK                       0x00000008
#define _DMASTAT_RDWR_LENGTH                     0x00000001

#define _DMASTAT_w_POSITION                      0x00000000
#define _DMASTAT_w_MASK                          0xFFFFFFFF
#define _DMASTAT_w_LENGTH                        0x00000020

#define _DCRCCON_CRCCH_POSITION                  0x00000000
#define _DCRCCON_CRCCH_MASK                      0x00000007
#define _DCRCCON_CRCCH_LENGTH                    0x00000003

#define _DCRCCON_CRCTYP_POSITION                 0x00000005
#define _DCRCCON_CRCTYP_MASK                     0x00000020
#define _DCRCCON_CRCTYP_LENGTH                   0x00000001

#define _DCRCCON_CRCAPP_POSITION                 0x00000006
#define _DCRCCON_CRCAPP_MASK                     0x00000040
#define _DCRCCON_CRCAPP_LENGTH                   0x00000001

#define _DCRCCON_CRCEN_POSITION                  0x00000007
#define _DCRCCON_CRCEN_MASK                      0x00000080
#define _DCRCCON_CRCEN_LENGTH                    0x00000001

#define _DCRCCON_PLEN_POSITION                   0x00000008
#define _DCRCCON_PLEN_MASK                       0x00001F00
#define _DCRCCON_PLEN_LENGTH                     0x00000005

#define _DCRCCON_BITO_POSITION                   0x00000018
#define _DCRCCON_BITO_MASK                       0x01000000
#define _DCRCCON_BITO_LENGTH                     0x00000001

#define _DCRCCON_WBO_POSITION                    0x0000001B
#define _DCRCCON_WBO_MASK                        0x08000000
#define _DCRCCON_WBO_LENGTH                      0x00000001

#define _DCRCCON_BYTO_POSITION                   0x0000001C
#define _DCRCCON_BYTO_MASK                       0x30000000
#define _DCRCCON_BYTO_LENGTH                     0x00000002

#define _DCRCCON_w_POSITION                      0x00000000
#define _DCRCCON_w_MASK                          0xFFFFFFFF
#define _DCRCCON_w_LENGTH                        0x00000020

#define _DCH0CON_CHPRI_POSITION                  0x00000000
#define _DCH0CON_CHPRI_MASK                      0x00000003
#define _DCH0CON_CHPRI_LENGTH                    0x00000002

#define _DCH0CON_CHEDET_POSITION                 0x00000002
#define _DCH0CON_CHEDET_MASK                     0x00000004
#define _DCH0CON_CHEDET_LENGTH                   0x00000001

#define _DCH0CON_CHAEN_POSITION                  0x00000004
#define _DCH0CON_CHAEN_MASK                      0x00000010
#define _DCH0CON_CHAEN_LENGTH                    0x00000001

#define _DCH0CON_CHCHN_POSITION                  0x00000005
#define _DCH0CON_CHCHN_MASK                      0x00000020
#define _DCH0CON_CHCHN_LENGTH                    0x00000001

#define _DCH0CON_CHAED_POSITION                  0x00000006
#define _DCH0CON_CHAED_MASK                      0x00000040
#define _DCH0CON_CHAED_LENGTH                    0x00000001

#define _DCH0CON_CHEN_POSITION                   0x00000007
#define _DCH0CON_CHEN_MASK                       0x00000080
#define _DCH0CON_CHEN_LENGTH                     0x00000001

#define _DCH0CON_CHCHNS_POSITION                 0x00000008
#define _DCH0CON_CHCHNS_MASK                     0x00000100
#define _DCH0CON_CHCHNS_LENGTH                   0x00000001

#define _DCH0CON_CHBUSY_POSITION                 0x0000000F
#define _DCH0CON_CHBUSY_MASK                     0x00008000
#define _DCH0CON_CHBUSY_LENGTH                   0x00000001

#define _DCH0CON_w_POSITION                      0x00000000
#define _DCH0CON_w_MASK                          0xFFFFFFFF
#define _DCH0CON_w_LENGTH                        0x00000020

#define _DCH0ECON_AIRQEN_POSITION                0x00000003
#define _DCH0ECON_AIRQEN_MASK                    0x00000008
#define _DCH0ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH0ECON_SIRQEN_POSITION                0x00000004
#define _DCH0ECON_SIRQEN_MASK                    0x00000010
#define _DCH0ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH0ECON_PATEN_POSITION                 0x00000005
#define _DCH0ECON_PATEN_MASK                     0x00000020
#define _DCH0ECON_PATEN_LENGTH                   0x00000001

#define _DCH0ECON_CABORT_POSITION                0x00000006
#define _DCH0ECON_CABORT_MASK                    0x00000040
#define _DCH0ECON_CABORT_LENGTH                  0x00000001

#define _DCH0ECON_CFORCE_POSITION                0x00000007
#define _DCH0ECON_CFORCE_MASK                    0x00000080
#define _DCH0ECON_CFORCE_LENGTH                  0x00000001

#define _DCH0ECON_CHSIRQ_POSITION                0x00000008
#define _DCH0ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH0ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH0ECON_CHAIRQ_POSITION                0x00000010
#define _DCH0ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH0ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH0ECON_w_POSITION                     0x00000000
#define _DCH0ECON_w_MASK                         0xFFFFFFFF
#define _DCH0ECON_w_LENGTH                       0x00000020

#define _DCH0INT_CHERIF_POSITION                 0x00000000
#define _DCH0INT_CHERIF_MASK                     0x00000001
#define _DCH0INT_CHERIF_LENGTH                   0x00000001

#define _DCH0INT_CHTAIF_POSITION                 0x00000001
#define _DCH0INT_CHTAIF_MASK                     0x00000002
#define _DCH0INT_CHTAIF_LENGTH                   0x00000001

#define _DCH0INT_CHCCIF_POSITION                 0x00000002
#define _DCH0INT_CHCCIF_MASK                     0x00000004
#define _DCH0INT_CHCCIF_LENGTH                   0x00000001

#define _DCH0INT_CHBCIF_POSITION                 0x00000003
#define _DCH0INT_CHBCIF_MASK                     0x00000008
#define _DCH0INT_CHBCIF_LENGTH                   0x00000001

#define _DCH0INT_CHDHIF_POSITION                 0x00000004
#define _DCH0INT_CHDHIF_MASK                     0x00000010
#define _DCH0INT_CHDHIF_LENGTH                   0x00000001

#define _DCH0INT_CHDDIF_POSITION                 0x00000005
#define _DCH0INT_CHDDIF_MASK                     0x00000020
#define _DCH0INT_CHDDIF_LENGTH                   0x00000001

#define _DCH0INT_CHSHIF_POSITION                 0x00000006
#define _DCH0INT_CHSHIF_MASK                     0x00000040
#define _DCH0INT_CHSHIF_LENGTH                   0x00000001

#define _DCH0INT_CHSDIF_POSITION                 0x00000007
#define _DCH0INT_CHSDIF_MASK                     0x00000080
#define _DCH0INT_CHSDIF_LENGTH                   0x00000001

#define _DCH0INT_CHERIE_POSITION                 0x00000010
#define _DCH0INT_CHERIE_MASK                     0x00010000
#define _DCH0INT_CHERIE_LENGTH                   0x00000001

#define _DCH0INT_CHTAIE_POSITION                 0x00000011
#define _DCH0INT_CHTAIE_MASK                     0x00020000
#define _DCH0INT_CHTAIE_LENGTH                   0x00000001

#define _DCH0INT_CHCCIE_POSITION                 0x00000012
#define _DCH0INT_CHCCIE_MASK                     0x00040000
#define _DCH0INT_CHCCIE_LENGTH                   0x00000001

#define _DCH0INT_CHBCIE_POSITION                 0x00000013
#define _DCH0INT_CHBCIE_MASK                     0x00080000
#define _DCH0INT_CHBCIE_LENGTH                   0x00000001

#define _DCH0INT_CHDHIE_POSITION                 0x00000014
#define _DCH0INT_CHDHIE_MASK                     0x00100000
#define _DCH0INT_CHDHIE_LENGTH                   0x00000001

#define _DCH0INT_CHDDIE_POSITION                 0x00000015
#define _DCH0INT_CHDDIE_MASK                     0x00200000
#define _DCH0INT_CHDDIE_LENGTH                   0x00000001

#define _DCH0INT_CHSHIE_POSITION                 0x00000016
#define _DCH0INT_CHSHIE_MASK                     0x00400000
#define _DCH0INT_CHSHIE_LENGTH                   0x00000001

#define _DCH0INT_CHSDIE_POSITION                 0x00000017
#define _DCH0INT_CHSDIE_MASK                     0x00800000
#define _DCH0INT_CHSDIE_LENGTH                   0x00000001

#define _DCH0INT_w_POSITION                      0x00000000
#define _DCH0INT_w_MASK                          0xFFFFFFFF
#define _DCH0INT_w_LENGTH                        0x00000020

#define _DCH0SSA_CHSSA_POSITION                  0x00000000
#define _DCH0SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH0SSA_CHSSA_LENGTH                    0x00000020

#define _DCH0DSA_CHDSA_POSITION                  0x00000000
#define _DCH0DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH0DSA_CHDSA_LENGTH                    0x00000020

#define _DCH1CON_CHPRI_POSITION                  0x00000000
#define _DCH1CON_CHPRI_MASK                      0x00000003
#define _DCH1CON_CHPRI_LENGTH                    0x00000002

#define _DCH1CON_CHEDET_POSITION                 0x00000002
#define _DCH1CON_CHEDET_MASK                     0x00000004
#define _DCH1CON_CHEDET_LENGTH                   0x00000001

#define _DCH1CON_CHAEN_POSITION                  0x00000004
#define _DCH1CON_CHAEN_MASK                      0x00000010
#define _DCH1CON_CHAEN_LENGTH                    0x00000001

#define _DCH1CON_CHCHN_POSITION                  0x00000005
#define _DCH1CON_CHCHN_MASK                      0x00000020
#define _DCH1CON_CHCHN_LENGTH                    0x00000001

#define _DCH1CON_CHAED_POSITION                  0x00000006
#define _DCH1CON_CHAED_MASK                      0x00000040
#define _DCH1CON_CHAED_LENGTH                    0x00000001

#define _DCH1CON_CHEN_POSITION                   0x00000007
#define _DCH1CON_CHEN_MASK                       0x00000080
#define _DCH1CON_CHEN_LENGTH                     0x00000001

#define _DCH1CON_CHCHNS_POSITION                 0x00000008
#define _DCH1CON_CHCHNS_MASK                     0x00000100
#define _DCH1CON_CHCHNS_LENGTH                   0x00000001

#define _DCH1CON_CHBUSY_POSITION                 0x0000000F
#define _DCH1CON_CHBUSY_MASK                     0x00008000
#define _DCH1CON_CHBUSY_LENGTH                   0x00000001

#define _DCH1CON_w_POSITION                      0x00000000
#define _DCH1CON_w_MASK                          0xFFFFFFFF
#define _DCH1CON_w_LENGTH                        0x00000020

#define _DCH1ECON_AIRQEN_POSITION                0x00000003
#define _DCH1ECON_AIRQEN_MASK                    0x00000008
#define _DCH1ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH1ECON_SIRQEN_POSITION                0x00000004
#define _DCH1ECON_SIRQEN_MASK                    0x00000010
#define _DCH1ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH1ECON_PATEN_POSITION                 0x00000005
#define _DCH1ECON_PATEN_MASK                     0x00000020
#define _DCH1ECON_PATEN_LENGTH                   0x00000001

#define _DCH1ECON_CABORT_POSITION                0x00000006
#define _DCH1ECON_CABORT_MASK                    0x00000040
#define _DCH1ECON_CABORT_LENGTH                  0x00000001

#define _DCH1ECON_CFORCE_POSITION                0x00000007
#define _DCH1ECON_CFORCE_MASK                    0x00000080
#define _DCH1ECON_CFORCE_LENGTH                  0x00000001

#define _DCH1ECON_CHSIRQ_POSITION                0x00000008
#define _DCH1ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH1ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH1ECON_CHAIRQ_POSITION                0x00000010
#define _DCH1ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH1ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH1ECON_w_POSITION                     0x00000000
#define _DCH1ECON_w_MASK                         0xFFFFFFFF
#define _DCH1ECON_w_LENGTH                       0x00000020

#define _DCH1INT_CHERIF_POSITION                 0x00000000
#define _DCH1INT_CHERIF_MASK                     0x00000001
#define _DCH1INT_CHERIF_LENGTH                   0x00000001

#define _DCH1INT_CHTAIF_POSITION                 0x00000001
#define _DCH1INT_CHTAIF_MASK                     0x00000002
#define _DCH1INT_CHTAIF_LENGTH                   0x00000001

#define _DCH1INT_CHCCIF_POSITION                 0x00000002
#define _DCH1INT_CHCCIF_MASK                     0x00000004
#define _DCH1INT_CHCCIF_LENGTH                   0x00000001

#define _DCH1INT_CHBCIF_POSITION                 0x00000003
#define _DCH1INT_CHBCIF_MASK                     0x00000008
#define _DCH1INT_CHBCIF_LENGTH                   0x00000001

#define _DCH1INT_CHDHIF_POSITION                 0x00000004
#define _DCH1INT_CHDHIF_MASK                     0x00000010
#define _DCH1INT_CHDHIF_LENGTH                   0x00000001

#define _DCH1INT_CHDDIF_POSITION                 0x00000005
#define _DCH1INT_CHDDIF_MASK                     0x00000020
#define _DCH1INT_CHDDIF_LENGTH                   0x00000001

#define _DCH1INT_CHSHIF_POSITION                 0x00000006
#define _DCH1INT_CHSHIF_MASK                     0x00000040
#define _DCH1INT_CHSHIF_LENGTH                   0x00000001

#define _DCH1INT_CHSDIF_POSITION                 0x00000007
#define _DCH1INT_CHSDIF_MASK                     0x00000080
#define _DCH1INT_CHSDIF_LENGTH                   0x00000001

#define _DCH1INT_CHERIE_POSITION                 0x00000010
#define _DCH1INT_CHERIE_MASK                     0x00010000
#define _DCH1INT_CHERIE_LENGTH                   0x00000001

#define _DCH1INT_CHTAIE_POSITION                 0x00000011
#define _DCH1INT_CHTAIE_MASK                     0x00020000
#define _DCH1INT_CHTAIE_LENGTH                   0x00000001

#define _DCH1INT_CHCCIE_POSITION                 0x00000012
#define _DCH1INT_CHCCIE_MASK                     0x00040000
#define _DCH1INT_CHCCIE_LENGTH                   0x00000001

#define _DCH1INT_CHBCIE_POSITION                 0x00000013
#define _DCH1INT_CHBCIE_MASK                     0x00080000
#define _DCH1INT_CHBCIE_LENGTH                   0x00000001

#define _DCH1INT_CHDHIE_POSITION                 0x00000014
#define _DCH1INT_CHDHIE_MASK                     0x00100000
#define _DCH1INT_CHDHIE_LENGTH                   0x00000001

#define _DCH1INT_CHDDIE_POSITION                 0x00000015
#define _DCH1INT_CHDDIE_MASK                     0x00200000
#define _DCH1INT_CHDDIE_LENGTH                   0x00000001

#define _DCH1INT_CHSHIE_POSITION                 0x00000016
#define _DCH1INT_CHSHIE_MASK                     0x00400000
#define _DCH1INT_CHSHIE_LENGTH                   0x00000001

#define _DCH1INT_CHSDIE_POSITION                 0x00000017
#define _DCH1INT_CHSDIE_MASK                     0x00800000
#define _DCH1INT_CHSDIE_LENGTH                   0x00000001

#define _DCH1INT_w_POSITION                      0x00000000
#define _DCH1INT_w_MASK                          0xFFFFFFFF
#define _DCH1INT_w_LENGTH                        0x00000020

#define _DCH1SSA_CHSSA_POSITION                  0x00000000
#define _DCH1SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH1SSA_CHSSA_LENGTH                    0x00000020

#define _DCH1DSA_CHDSA_POSITION                  0x00000000
#define _DCH1DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH1DSA_CHDSA_LENGTH                    0x00000020

#define _DCH2CON_CHPRI_POSITION                  0x00000000
#define _DCH2CON_CHPRI_MASK                      0x00000003
#define _DCH2CON_CHPRI_LENGTH                    0x00000002

#define _DCH2CON_CHEDET_POSITION                 0x00000002
#define _DCH2CON_CHEDET_MASK                     0x00000004
#define _DCH2CON_CHEDET_LENGTH                   0x00000001

#define _DCH2CON_CHAEN_POSITION                  0x00000004
#define _DCH2CON_CHAEN_MASK                      0x00000010
#define _DCH2CON_CHAEN_LENGTH                    0x00000001

#define _DCH2CON_CHCHN_POSITION                  0x00000005
#define _DCH2CON_CHCHN_MASK                      0x00000020
#define _DCH2CON_CHCHN_LENGTH                    0x00000001

#define _DCH2CON_CHAED_POSITION                  0x00000006
#define _DCH2CON_CHAED_MASK                      0x00000040
#define _DCH2CON_CHAED_LENGTH                    0x00000001

#define _DCH2CON_CHEN_POSITION                   0x00000007
#define _DCH2CON_CHEN_MASK                       0x00000080
#define _DCH2CON_CHEN_LENGTH                     0x00000001

#define _DCH2CON_CHCHNS_POSITION                 0x00000008
#define _DCH2CON_CHCHNS_MASK                     0x00000100
#define _DCH2CON_CHCHNS_LENGTH                   0x00000001

#define _DCH2CON_CHBUSY_POSITION                 0x0000000F
#define _DCH2CON_CHBUSY_MASK                     0x00008000
#define _DCH2CON_CHBUSY_LENGTH                   0x00000001

#define _DCH2CON_w_POSITION                      0x00000000
#define _DCH2CON_w_MASK                          0xFFFFFFFF
#define _DCH2CON_w_LENGTH                        0x00000020

#define _DCH2ECON_AIRQEN_POSITION                0x00000003
#define _DCH2ECON_AIRQEN_MASK                    0x00000008
#define _DCH2ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH2ECON_SIRQEN_POSITION                0x00000004
#define _DCH2ECON_SIRQEN_MASK                    0x00000010
#define _DCH2ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH2ECON_PATEN_POSITION                 0x00000005
#define _DCH2ECON_PATEN_MASK                     0x00000020
#define _DCH2ECON_PATEN_LENGTH                   0x00000001

#define _DCH2ECON_CABORT_POSITION                0x00000006
#define _DCH2ECON_CABORT_MASK                    0x00000040
#define _DCH2ECON_CABORT_LENGTH                  0x00000001

#define _DCH2ECON_CFORCE_POSITION                0x00000007
#define _DCH2ECON_CFORCE_MASK                    0x00000080
#define _DCH2ECON_CFORCE_LENGTH                  0x00000001

#define _DCH2ECON_CHSIRQ_POSITION                0x00000008
#define _DCH2ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH2ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH2ECON_CHAIRQ_POSITION                0x00000010
#define _DCH2ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH2ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH2ECON_w_POSITION                     0x00000000
#define _DCH2ECON_w_MASK                         0xFFFFFFFF
#define _DCH2ECON_w_LENGTH                       0x00000020

#define _DCH2INT_CHERIF_POSITION                 0x00000000
#define _DCH2INT_CHERIF_MASK                     0x00000001
#define _DCH2INT_CHERIF_LENGTH                   0x00000001

#define _DCH2INT_CHTAIF_POSITION                 0x00000001
#define _DCH2INT_CHTAIF_MASK                     0x00000002
#define _DCH2INT_CHTAIF_LENGTH                   0x00000001

#define _DCH2INT_CHCCIF_POSITION                 0x00000002
#define _DCH2INT_CHCCIF_MASK                     0x00000004
#define _DCH2INT_CHCCIF_LENGTH                   0x00000001

#define _DCH2INT_CHBCIF_POSITION                 0x00000003
#define _DCH2INT_CHBCIF_MASK                     0x00000008
#define _DCH2INT_CHBCIF_LENGTH                   0x00000001

#define _DCH2INT_CHDHIF_POSITION                 0x00000004
#define _DCH2INT_CHDHIF_MASK                     0x00000010
#define _DCH2INT_CHDHIF_LENGTH                   0x00000001

#define _DCH2INT_CHDDIF_POSITION                 0x00000005
#define _DCH2INT_CHDDIF_MASK                     0x00000020
#define _DCH2INT_CHDDIF_LENGTH                   0x00000001

#define _DCH2INT_CHSHIF_POSITION                 0x00000006
#define _DCH2INT_CHSHIF_MASK                     0x00000040
#define _DCH2INT_CHSHIF_LENGTH                   0x00000001

#define _DCH2INT_CHSDIF_POSITION                 0x00000007
#define _DCH2INT_CHSDIF_MASK                     0x00000080
#define _DCH2INT_CHSDIF_LENGTH                   0x00000001

#define _DCH2INT_CHERIE_POSITION                 0x00000010
#define _DCH2INT_CHERIE_MASK                     0x00010000
#define _DCH2INT_CHERIE_LENGTH                   0x00000001

#define _DCH2INT_CHTAIE_POSITION                 0x00000011
#define _DCH2INT_CHTAIE_MASK                     0x00020000
#define _DCH2INT_CHTAIE_LENGTH                   0x00000001

#define _DCH2INT_CHCCIE_POSITION                 0x00000012
#define _DCH2INT_CHCCIE_MASK                     0x00040000
#define _DCH2INT_CHCCIE_LENGTH                   0x00000001

#define _DCH2INT_CHBCIE_POSITION                 0x00000013
#define _DCH2INT_CHBCIE_MASK                     0x00080000
#define _DCH2INT_CHBCIE_LENGTH                   0x00000001

#define _DCH2INT_CHDHIE_POSITION                 0x00000014
#define _DCH2INT_CHDHIE_MASK                     0x00100000
#define _DCH2INT_CHDHIE_LENGTH                   0x00000001

#define _DCH2INT_CHDDIE_POSITION                 0x00000015
#define _DCH2INT_CHDDIE_MASK                     0x00200000
#define _DCH2INT_CHDDIE_LENGTH                   0x00000001

#define _DCH2INT_CHSHIE_POSITION                 0x00000016
#define _DCH2INT_CHSHIE_MASK                     0x00400000
#define _DCH2INT_CHSHIE_LENGTH                   0x00000001

#define _DCH2INT_CHSDIE_POSITION                 0x00000017
#define _DCH2INT_CHSDIE_MASK                     0x00800000
#define _DCH2INT_CHSDIE_LENGTH                   0x00000001

#define _DCH2INT_w_POSITION                      0x00000000
#define _DCH2INT_w_MASK                          0xFFFFFFFF
#define _DCH2INT_w_LENGTH                        0x00000020

#define _DCH2SSA_CHSSA_POSITION                  0x00000000
#define _DCH2SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH2SSA_CHSSA_LENGTH                    0x00000020

#define _DCH2DSA_CHDSA_POSITION                  0x00000000
#define _DCH2DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH2DSA_CHDSA_LENGTH                    0x00000020

#define _DCH3CON_CHPRI_POSITION                  0x00000000
#define _DCH3CON_CHPRI_MASK                      0x00000003
#define _DCH3CON_CHPRI_LENGTH                    0x00000002

#define _DCH3CON_CHEDET_POSITION                 0x00000002
#define _DCH3CON_CHEDET_MASK                     0x00000004
#define _DCH3CON_CHEDET_LENGTH                   0x00000001

#define _DCH3CON_CHAEN_POSITION                  0x00000004
#define _DCH3CON_CHAEN_MASK                      0x00000010
#define _DCH3CON_CHAEN_LENGTH                    0x00000001

#define _DCH3CON_CHCHN_POSITION                  0x00000005
#define _DCH3CON_CHCHN_MASK                      0x00000020
#define _DCH3CON_CHCHN_LENGTH                    0x00000001

#define _DCH3CON_CHAED_POSITION                  0x00000006
#define _DCH3CON_CHAED_MASK                      0x00000040
#define _DCH3CON_CHAED_LENGTH                    0x00000001

#define _DCH3CON_CHEN_POSITION                   0x00000007
#define _DCH3CON_CHEN_MASK                       0x00000080
#define _DCH3CON_CHEN_LENGTH                     0x00000001

#define _DCH3CON_CHCHNS_POSITION                 0x00000008
#define _DCH3CON_CHCHNS_MASK                     0x00000100
#define _DCH3CON_CHCHNS_LENGTH                   0x00000001

#define _DCH3CON_CHBUSY_POSITION                 0x0000000F
#define _DCH3CON_CHBUSY_MASK                     0x00008000
#define _DCH3CON_CHBUSY_LENGTH                   0x00000001

#define _DCH3CON_w_POSITION                      0x00000000
#define _DCH3CON_w_MASK                          0xFFFFFFFF
#define _DCH3CON_w_LENGTH                        0x00000020

#define _DCH3ECON_AIRQEN_POSITION                0x00000003
#define _DCH3ECON_AIRQEN_MASK                    0x00000008
#define _DCH3ECON_AIRQEN_LENGTH                  0x00000001

#define _DCH3ECON_SIRQEN_POSITION                0x00000004
#define _DCH3ECON_SIRQEN_MASK                    0x00000010
#define _DCH3ECON_SIRQEN_LENGTH                  0x00000001

#define _DCH3ECON_PATEN_POSITION                 0x00000005
#define _DCH3ECON_PATEN_MASK                     0x00000020
#define _DCH3ECON_PATEN_LENGTH                   0x00000001

#define _DCH3ECON_CABORT_POSITION                0x00000006
#define _DCH3ECON_CABORT_MASK                    0x00000040
#define _DCH3ECON_CABORT_LENGTH                  0x00000001

#define _DCH3ECON_CFORCE_POSITION                0x00000007
#define _DCH3ECON_CFORCE_MASK                    0x00000080
#define _DCH3ECON_CFORCE_LENGTH                  0x00000001

#define _DCH3ECON_CHSIRQ_POSITION                0x00000008
#define _DCH3ECON_CHSIRQ_MASK                    0x0000FF00
#define _DCH3ECON_CHSIRQ_LENGTH                  0x00000008

#define _DCH3ECON_CHAIRQ_POSITION                0x00000010
#define _DCH3ECON_CHAIRQ_MASK                    0x00FF0000
#define _DCH3ECON_CHAIRQ_LENGTH                  0x00000008

#define _DCH3ECON_w_POSITION                     0x00000000
#define _DCH3ECON_w_MASK                         0xFFFFFFFF
#define _DCH3ECON_w_LENGTH                       0x00000020

#define _DCH3INT_CHERIF_POSITION                 0x00000000
#define _DCH3INT_CHERIF_MASK                     0x00000001
#define _DCH3INT_CHERIF_LENGTH                   0x00000001

#define _DCH3INT_CHTAIF_POSITION                 0x00000001
#define _DCH3INT_CHTAIF_MASK                     0x00000002
#define _DCH3INT_CHTAIF_LENGTH                   0x00000001

#define _DCH3INT_CHCCIF_POSITION                 0x00000002
#define _DCH3INT_CHCCIF_MASK                     0x00000004
#define _DCH3INT_CHCCIF_LENGTH                   0x00000001

#define _DCH3INT_CHBCIF_POSITION                 0x00000003
#define _DCH3INT_CHBCIF_MASK                     0x00000008
#define _DCH3INT_CHBCIF_LENGTH                   0x00000001

#define _DCH3INT_CHDHIF_POSITION                 0x00000004
#define _DCH3INT_CHDHIF_MASK                     0x00000010
#define _DCH3INT_CHDHIF_LENGTH                   0x00000001

#define _DCH3INT_CHDDIF_POSITION                 0x00000005
#define _DCH3INT_CHDDIF_MASK                     0x00000020
#define _DCH3INT_CHDDIF_LENGTH                   0x00000001

#define _DCH3INT_CHSHIF_POSITION                 0x00000006
#define _DCH3INT_CHSHIF_MASK                     0x00000040
#define _DCH3INT_CHSHIF_LENGTH                   0x00000001

#define _DCH3INT_CHSDIF_POSITION                 0x00000007
#define _DCH3INT_CHSDIF_MASK                     0x00000080
#define _DCH3INT_CHSDIF_LENGTH                   0x00000001

#define _DCH3INT_CHERIE_POSITION                 0x00000010
#define _DCH3INT_CHERIE_MASK                     0x00010000
#define _DCH3INT_CHERIE_LENGTH                   0x00000001

#define _DCH3INT_CHTAIE_POSITION                 0x00000011
#define _DCH3INT_CHTAIE_MASK                     0x00020000
#define _DCH3INT_CHTAIE_LENGTH                   0x00000001

#define _DCH3INT_CHCCIE_POSITION                 0x00000012
#define _DCH3INT_CHCCIE_MASK                     0x00040000
#define _DCH3INT_CHCCIE_LENGTH                   0x00000001

#define _DCH3INT_CHBCIE_POSITION                 0x00000013
#define _DCH3INT_CHBCIE_MASK                     0x00080000
#define _DCH3INT_CHBCIE_LENGTH                   0x00000001

#define _DCH3INT_CHDHIE_POSITION                 0x00000014
#define _DCH3INT_CHDHIE_MASK                     0x00100000
#define _DCH3INT_CHDHIE_LENGTH                   0x00000001

#define _DCH3INT_CHDDIE_POSITION                 0x00000015
#define _DCH3INT_CHDDIE_MASK                     0x00200000
#define _DCH3INT_CHDDIE_LENGTH                   0x00000001

#define _DCH3INT_CHSHIE_POSITION                 0x00000016
#define _DCH3INT_CHSHIE_MASK                     0x00400000
#define _DCH3INT_CHSHIE_LENGTH                   0x00000001

#define _DCH3INT_CHSDIE_POSITION                 0x00000017
#define _DCH3INT_CHSDIE_MASK                     0x00800000
#define _DCH3INT_CHSDIE_LENGTH                   0x00000001

#define _DCH3INT_w_POSITION                      0x00000000
#define _DCH3INT_w_MASK                          0xFFFFFFFF
#define _DCH3INT_w_LENGTH                        0x00000020

#define _DCH3SSA_CHSSA_POSITION                  0x00000000
#define _DCH3SSA_CHSSA_MASK                      0xFFFFFFFF
#define _DCH3SSA_CHSSA_LENGTH                    0x00000020

#define _DCH3DSA_CHDSA_POSITION                  0x00000000
#define _DCH3DSA_CHDSA_MASK                      0xFFFFFFFF
#define _DCH3DSA_CHDSA_LENGTH                    0x00000020

#define _INTCON_INT0EP_POSITION                  0x00000000
#define _INTCON_INT0EP_MASK                      0x00000001
#define _INTCON_INT0EP_LENGTH                    0x00000001

#define _INTCON_INT1EP_POSITION                  0x00000001
#define _INTCON_INT1EP_MASK                      0x00000002
#define _INTCON_INT1EP_LENGTH                    0x00000001

#define _INTCON_INT2EP_POSITION                  0x00000002
#define _INTCON_INT2EP_MASK                      0x00000004
#define _INTCON_INT2EP_LENGTH                    0x00000001

#define _INTCON_INT3EP_POSITION                  0x00000003
#define _INTCON_INT3EP_MASK                      0x00000008
#define _INTCON_INT3EP_LENGTH                    0x00000001

#define _INTCON_INT4EP_POSITION                  0x00000004
#define _INTCON_INT4EP_MASK                      0x00000010
#define _INTCON_INT4EP_LENGTH                    0x00000001

#define _INTCON_TPC_POSITION                     0x00000008
#define _INTCON_TPC_MASK                         0x00000700
#define _INTCON_TPC_LENGTH                       0x00000003

#define _INTCON_MVEC_POSITION                    0x0000000C
#define _INTCON_MVEC_MASK                        0x00001000
#define _INTCON_MVEC_LENGTH                      0x00000001

#define _INTCON_VS_POSITION                      0x00000010
#define _INTCON_VS_MASK                          0x007F0000
#define _INTCON_VS_LENGTH                        0x00000007

#define _PRISS_SEVCSS_POSITION                   0x00000000
#define _PRISS_SEVCSS_MASK                       0x00000001
#define _PRISS_SEVCSS_LENGTH                     0x00000001

#define _PRISS_PRI1SS_POSITION                   0x00000004
#define _PRISS_PRI1SS_MASK                       0x00000010
#define _PRISS_PRI1SS_LENGTH                     0x00000001

#define _PRISS_PRI2SS_POSITION                   0x00000008
#define _PRISS_PRI2SS_MASK                       0x00000100
#define _PRISS_PRI2SS_LENGTH                     0x00000001

#define _PRISS_PRI3SS_POSITION                   0x0000000C
#define _PRISS_PRI3SS_MASK                       0x00001000
#define _PRISS_PRI3SS_LENGTH                     0x00000001

#define _PRISS_PRI4SS_POSITION                   0x00000010
#define _PRISS_PRI4SS_MASK                       0x00010000
#define _PRISS_PRI4SS_LENGTH                     0x00000001

#define _PRISS_PRI5SS_POSITION                   0x00000014
#define _PRISS_PRI5SS_MASK                       0x00100000
#define _PRISS_PRI5SS_LENGTH                     0x00000001

#define _PRISS_PRI6SS_POSITION                   0x00000018
#define _PRISS_PRI6SS_MASK                       0x01000000
#define _PRISS_PRI6SS_LENGTH                     0x00000001

#define _PRISS_PRI7SS_POSITION                   0x0000001C
#define _PRISS_PRI7SS_MASK                       0x10000000
#define _PRISS_PRI7SS_LENGTH                     0x00000001

#define _INTSTAT_SIRQ_POSITION                   0x00000000
#define _INTSTAT_SIRQ_MASK                       0x000000FF
#define _INTSTAT_SIRQ_LENGTH                     0x00000008

#define _INTSTAT_SRIPL_POSITION                  0x00000008
#define _INTSTAT_SRIPL_MASK                      0x00000700
#define _INTSTAT_SRIPL_LENGTH                    0x00000003

#define _IPTMR_IPTMR_POSITION                    0x00000000
#define _IPTMR_IPTMR_MASK                        0xFFFFFFFF
#define _IPTMR_IPTMR_LENGTH                      0x00000020

#define _IFS0_CTIF_POSITION                      0x00000000
#define _IFS0_CTIF_MASK                          0x00000001
#define _IFS0_CTIF_LENGTH                        0x00000001

#define _IFS0_CS0IF_POSITION                     0x00000001
#define _IFS0_CS0IF_MASK                         0x00000002
#define _IFS0_CS0IF_LENGTH                       0x00000001

#define _IFS0_CS1IF_POSITION                     0x00000002
#define _IFS0_CS1IF_MASK                         0x00000004
#define _IFS0_CS1IF_LENGTH                       0x00000001

#define _IFS0_INT0IF_POSITION                    0x00000003
#define _IFS0_INT0IF_MASK                        0x00000008
#define _IFS0_INT0IF_LENGTH                      0x00000001

#define _IFS0_INT1IF_POSITION                    0x00000004
#define _IFS0_INT1IF_MASK                        0x00000010
#define _IFS0_INT1IF_LENGTH                      0x00000001

#define _IFS0_INT2IF_POSITION                    0x00000005
#define _IFS0_INT2IF_MASK                        0x00000020
#define _IFS0_INT2IF_LENGTH                      0x00000001

#define _IFS0_INT3IF_POSITION                    0x00000006
#define _IFS0_INT3IF_MASK                        0x00000040
#define _IFS0_INT3IF_LENGTH                      0x00000001

#define _IFS0_INT4IF_POSITION                    0x00000007
#define _IFS0_INT4IF_MASK                        0x00000080
#define _IFS0_INT4IF_LENGTH                      0x00000001

#define _IFS0_CNAIF_POSITION                     0x00000008
#define _IFS0_CNAIF_MASK                         0x00000100
#define _IFS0_CNAIF_LENGTH                       0x00000001

#define _IFS0_CNBIF_POSITION                     0x00000009
#define _IFS0_CNBIF_MASK                         0x00000200
#define _IFS0_CNBIF_LENGTH                       0x00000001

#define _IFS0_CNCIF_POSITION                     0x0000000A
#define _IFS0_CNCIF_MASK                         0x00000400
#define _IFS0_CNCIF_LENGTH                       0x00000001

#define _IFS0_CNDIF_POSITION                     0x0000000B
#define _IFS0_CNDIF_MASK                         0x00000800
#define _IFS0_CNDIF_LENGTH                       0x00000001

#define _IFS0_T1IF_POSITION                      0x00000011
#define _IFS0_T1IF_MASK                          0x00020000
#define _IFS0_T1IF_LENGTH                        0x00000001

#define _IFS0_T2IF_POSITION                      0x00000012
#define _IFS0_T2IF_MASK                          0x00040000
#define _IFS0_T2IF_LENGTH                        0x00000001

#define _IFS0_T3IF_POSITION                      0x00000013
#define _IFS0_T3IF_MASK                          0x00080000
#define _IFS0_T3IF_LENGTH                        0x00000001

#define _IFS0_CMP1IF_POSITION                    0x00000017
#define _IFS0_CMP1IF_MASK                        0x00800000
#define _IFS0_CMP1IF_LENGTH                      0x00000001

#define _IFS0_CMP2IF_POSITION                    0x00000018
#define _IFS0_CMP2IF_MASK                        0x01000000
#define _IFS0_CMP2IF_LENGTH                      0x00000001

#define _IFS0_CMP3IF_POSITION                    0x00000019
#define _IFS0_CMP3IF_MASK                        0x02000000
#define _IFS0_CMP3IF_LENGTH                      0x00000001

#define _IFS0_USBIF_POSITION                     0x0000001D
#define _IFS0_USBIF_MASK                         0x20000000
#define _IFS0_USBIF_LENGTH                       0x00000001

#define _IFS1_RTCCIF_POSITION                    0x00000000
#define _IFS1_RTCCIF_MASK                        0x00000001
#define _IFS1_RTCCIF_LENGTH                      0x00000001

#define _IFS1_AD1IF_POSITION                     0x00000001
#define _IFS1_AD1IF_MASK                         0x00000002
#define _IFS1_AD1IF_LENGTH                       0x00000001

#define _IFS1_LVDIF_POSITION                     0x00000004
#define _IFS1_LVDIF_MASK                         0x00000010
#define _IFS1_LVDIF_LENGTH                       0x00000001

#define _IFS1_CLC1IF_POSITION                    0x00000005
#define _IFS1_CLC1IF_MASK                        0x00000020
#define _IFS1_CLC1IF_LENGTH                      0x00000001

#define _IFS1_CLC2IF_POSITION                    0x00000006
#define _IFS1_CLC2IF_MASK                        0x00000040
#define _IFS1_CLC2IF_LENGTH                      0x00000001

#define _IFS1_CLC3IF_POSITION                    0x00000007
#define _IFS1_CLC3IF_MASK                        0x00000080
#define _IFS1_CLC3IF_LENGTH                      0x00000001

#define _IFS1_CLC4IF_POSITION                    0x00000008
#define _IFS1_CLC4IF_MASK                        0x00000100
#define _IFS1_CLC4IF_LENGTH                      0x00000001

#define _IFS1_SPI1EIF_POSITION                   0x00000009
#define _IFS1_SPI1EIF_MASK                       0x00000200
#define _IFS1_SPI1EIF_LENGTH                     0x00000001

#define _IFS1_SPI1TXIF_POSITION                  0x0000000A
#define _IFS1_SPI1TXIF_MASK                      0x00000400
#define _IFS1_SPI1TXIF_LENGTH                    0x00000001

#define _IFS1_SPI1RXIF_POSITION                  0x0000000B
#define _IFS1_SPI1RXIF_MASK                      0x00000800
#define _IFS1_SPI1RXIF_LENGTH                    0x00000001

#define _IFS1_SPI2EIF_POSITION                   0x0000000C
#define _IFS1_SPI2EIF_MASK                       0x00001000
#define _IFS1_SPI2EIF_LENGTH                     0x00000001

#define _IFS1_SPI2TXIF_POSITION                  0x0000000D
#define _IFS1_SPI2TXIF_MASK                      0x00002000
#define _IFS1_SPI2TXIF_LENGTH                    0x00000001

#define _IFS1_SPI2RXIF_POSITION                  0x0000000E
#define _IFS1_SPI2RXIF_MASK                      0x00004000
#define _IFS1_SPI2RXIF_LENGTH                    0x00000001

#define _IFS1_SPI3EIF_POSITION                   0x0000000F
#define _IFS1_SPI3EIF_MASK                       0x00008000
#define _IFS1_SPI3EIF_LENGTH                     0x00000001

#define _IFS1_SPI3TXIF_POSITION                  0x00000010
#define _IFS1_SPI3TXIF_MASK                      0x00010000
#define _IFS1_SPI3TXIF_LENGTH                    0x00000001

#define _IFS1_SPI3RXIF_POSITION                  0x00000011
#define _IFS1_SPI3RXIF_MASK                      0x00020000
#define _IFS1_SPI3RXIF_LENGTH                    0x00000001

#define _IFS1_U1RXIF_POSITION                    0x00000015
#define _IFS1_U1RXIF_MASK                        0x00200000
#define _IFS1_U1RXIF_LENGTH                      0x00000001

#define _IFS1_U1TXIF_POSITION                    0x00000016
#define _IFS1_U1TXIF_MASK                        0x00400000
#define _IFS1_U1TXIF_LENGTH                      0x00000001

#define _IFS1_U1EIF_POSITION                     0x00000017
#define _IFS1_U1EIF_MASK                         0x00800000
#define _IFS1_U1EIF_LENGTH                       0x00000001

#define _IFS1_U2RXIF_POSITION                    0x00000018
#define _IFS1_U2RXIF_MASK                        0x01000000
#define _IFS1_U2RXIF_LENGTH                      0x00000001

#define _IFS1_U2TXIF_POSITION                    0x00000019
#define _IFS1_U2TXIF_MASK                        0x02000000
#define _IFS1_U2TXIF_LENGTH                      0x00000001

#define _IFS1_U2EIF_POSITION                     0x0000001A
#define _IFS1_U2EIF_MASK                         0x04000000
#define _IFS1_U2EIF_LENGTH                       0x00000001

#define _IFS1_U3RXIF_POSITION                    0x0000001B
#define _IFS1_U3RXIF_MASK                        0x08000000
#define _IFS1_U3RXIF_LENGTH                      0x00000001

#define _IFS1_U3TXIF_POSITION                    0x0000001C
#define _IFS1_U3TXIF_MASK                        0x10000000
#define _IFS1_U3TXIF_LENGTH                      0x00000001

#define _IFS1_U3EIF_POSITION                     0x0000001D
#define _IFS1_U3EIF_MASK                         0x20000000
#define _IFS1_U3EIF_LENGTH                       0x00000001

#define _IFS2_I2C1SIF_POSITION                   0x00000001
#define _IFS2_I2C1SIF_MASK                       0x00000002
#define _IFS2_I2C1SIF_LENGTH                     0x00000001

#define _IFS2_I2C1MIF_POSITION                   0x00000002
#define _IFS2_I2C1MIF_MASK                       0x00000004
#define _IFS2_I2C1MIF_LENGTH                     0x00000001

#define _IFS2_I2C1BCIF_POSITION                  0x00000003
#define _IFS2_I2C1BCIF_MASK                      0x00000008
#define _IFS2_I2C1BCIF_LENGTH                    0x00000001

#define _IFS2_I2C2SIF_POSITION                   0x00000004
#define _IFS2_I2C2SIF_MASK                       0x00000010
#define _IFS2_I2C2SIF_LENGTH                     0x00000001

#define _IFS2_I2C2MIF_POSITION                   0x00000005
#define _IFS2_I2C2MIF_MASK                       0x00000020
#define _IFS2_I2C2MIF_LENGTH                     0x00000001

#define _IFS2_I2C2BCIF_POSITION                  0x00000006
#define _IFS2_I2C2BCIF_MASK                      0x00000040
#define _IFS2_I2C2BCIF_LENGTH                    0x00000001

#define _IFS2_I2C3SIF_POSITION                   0x00000007
#define _IFS2_I2C3SIF_MASK                       0x00000080
#define _IFS2_I2C3SIF_LENGTH                     0x00000001

#define _IFS2_I2C3MIF_POSITION                   0x00000008
#define _IFS2_I2C3MIF_MASK                       0x00000100
#define _IFS2_I2C3MIF_LENGTH                     0x00000001

#define _IFS2_I2C3BCIF_POSITION                  0x00000009
#define _IFS2_I2C3BCIF_MASK                      0x00000200
#define _IFS2_I2C3BCIF_LENGTH                    0x00000001

#define _IFS2_CCP1IF_POSITION                    0x0000000A
#define _IFS2_CCP1IF_MASK                        0x00000400
#define _IFS2_CCP1IF_LENGTH                      0x00000001

#define _IFS2_CCT1IF_POSITION                    0x0000000B
#define _IFS2_CCT1IF_MASK                        0x00000800
#define _IFS2_CCT1IF_LENGTH                      0x00000001

#define _IFS2_CCP2IF_POSITION                    0x0000000C
#define _IFS2_CCP2IF_MASK                        0x00001000
#define _IFS2_CCP2IF_LENGTH                      0x00000001

#define _IFS2_CCT2IF_POSITION                    0x0000000D
#define _IFS2_CCT2IF_MASK                        0x00002000
#define _IFS2_CCT2IF_LENGTH                      0x00000001

#define _IFS2_CCP3IF_POSITION                    0x0000000E
#define _IFS2_CCP3IF_MASK                        0x00004000
#define _IFS2_CCP3IF_LENGTH                      0x00000001

#define _IFS2_CCT3IF_POSITION                    0x0000000F
#define _IFS2_CCT3IF_MASK                        0x00008000
#define _IFS2_CCT3IF_LENGTH                      0x00000001

#define _IFS2_CCP4IF_POSITION                    0x00000010
#define _IFS2_CCP4IF_MASK                        0x00010000
#define _IFS2_CCP4IF_LENGTH                      0x00000001

#define _IFS2_CCT4IF_POSITION                    0x00000011
#define _IFS2_CCT4IF_MASK                        0x00020000
#define _IFS2_CCT4IF_LENGTH                      0x00000001

#define _IFS2_CCP5IF_POSITION                    0x00000012
#define _IFS2_CCP5IF_MASK                        0x00040000
#define _IFS2_CCP5IF_LENGTH                      0x00000001

#define _IFS2_CCT5IF_POSITION                    0x00000013
#define _IFS2_CCT5IF_MASK                        0x00080000
#define _IFS2_CCT5IF_LENGTH                      0x00000001

#define _IFS2_CCP6IF_POSITION                    0x00000014
#define _IFS2_CCP6IF_MASK                        0x00100000
#define _IFS2_CCP6IF_LENGTH                      0x00000001

#define _IFS2_CCT6IF_POSITION                    0x00000015
#define _IFS2_CCT6IF_MASK                        0x00200000
#define _IFS2_CCT6IF_LENGTH                      0x00000001

#define _IFS2_CCP7IF_POSITION                    0x00000016
#define _IFS2_CCP7IF_MASK                        0x00400000
#define _IFS2_CCP7IF_LENGTH                      0x00000001

#define _IFS2_CCT7IF_POSITION                    0x00000017
#define _IFS2_CCT7IF_MASK                        0x00800000
#define _IFS2_CCT7IF_LENGTH                      0x00000001

#define _IFS2_CCP8IF_POSITION                    0x00000018
#define _IFS2_CCP8IF_MASK                        0x01000000
#define _IFS2_CCP8IF_LENGTH                      0x00000001

#define _IFS2_CCT8IF_POSITION                    0x00000019
#define _IFS2_CCT8IF_MASK                        0x02000000
#define _IFS2_CCT8IF_LENGTH                      0x00000001

#define _IFS2_CCP9IF_POSITION                    0x0000001A
#define _IFS2_CCP9IF_MASK                        0x04000000
#define _IFS2_CCP9IF_LENGTH                      0x00000001

#define _IFS2_CCT9IF_POSITION                    0x0000001B
#define _IFS2_CCT9IF_MASK                        0x08000000
#define _IFS2_CCT9IF_LENGTH                      0x00000001

#define _IFS2_FSTIF_POSITION                     0x0000001C
#define _IFS2_FSTIF_MASK                         0x10000000
#define _IFS2_FSTIF_LENGTH                       0x00000001

#define _IFS2_NVMIF_POSITION                     0x0000001E
#define _IFS2_NVMIF_MASK                         0x40000000
#define _IFS2_NVMIF_LENGTH                       0x00000001

#define _IFS2_CPCIF_POSITION                     0x0000001F
#define _IFS2_CPCIF_MASK                         0x80000000
#define _IFS2_CPCIF_LENGTH                       0x00000001

#define _IFS3_ECCBEIF_POSITION                   0x00000001
#define _IFS3_ECCBEIF_MASK                       0x00000002
#define _IFS3_ECCBEIF_LENGTH                     0x00000001

#define _IFS3_DMA0IF_POSITION                    0x00000002
#define _IFS3_DMA0IF_MASK                        0x00000004
#define _IFS3_DMA0IF_LENGTH                      0x00000001

#define _IFS3_DMA1IF_POSITION                    0x00000003
#define _IFS3_DMA1IF_MASK                        0x00000008
#define _IFS3_DMA1IF_LENGTH                      0x00000001

#define _IFS3_DMA2IF_POSITION                    0x00000004
#define _IFS3_DMA2IF_MASK                        0x00000010
#define _IFS3_DMA2IF_LENGTH                      0x00000001

#define _IFS3_DMA3IF_POSITION                    0x00000005
#define _IFS3_DMA3IF_MASK                        0x00000020
#define _IFS3_DMA3IF_LENGTH                      0x00000001

#define _IEC0_CTIE_POSITION                      0x00000000
#define _IEC0_CTIE_MASK                          0x00000001
#define _IEC0_CTIE_LENGTH                        0x00000001

#define _IEC0_CS0IE_POSITION                     0x00000001
#define _IEC0_CS0IE_MASK                         0x00000002
#define _IEC0_CS0IE_LENGTH                       0x00000001

#define _IEC0_CS1IE_POSITION                     0x00000002
#define _IEC0_CS1IE_MASK                         0x00000004
#define _IEC0_CS1IE_LENGTH                       0x00000001

#define _IEC0_INT0IE_POSITION                    0x00000003
#define _IEC0_INT0IE_MASK                        0x00000008
#define _IEC0_INT0IE_LENGTH                      0x00000001

#define _IEC0_INT1IE_POSITION                    0x00000004
#define _IEC0_INT1IE_MASK                        0x00000010
#define _IEC0_INT1IE_LENGTH                      0x00000001

#define _IEC0_INT2IE_POSITION                    0x00000005
#define _IEC0_INT2IE_MASK                        0x00000020
#define _IEC0_INT2IE_LENGTH                      0x00000001

#define _IEC0_INT3IE_POSITION                    0x00000006
#define _IEC0_INT3IE_MASK                        0x00000040
#define _IEC0_INT3IE_LENGTH                      0x00000001

#define _IEC0_INT4IE_POSITION                    0x00000007
#define _IEC0_INT4IE_MASK                        0x00000080
#define _IEC0_INT4IE_LENGTH                      0x00000001

#define _IEC0_CNAIE_POSITION                     0x00000008
#define _IEC0_CNAIE_MASK                         0x00000100
#define _IEC0_CNAIE_LENGTH                       0x00000001

#define _IEC0_CNBIE_POSITION                     0x00000009
#define _IEC0_CNBIE_MASK                         0x00000200
#define _IEC0_CNBIE_LENGTH                       0x00000001

#define _IEC0_CNCIE_POSITION                     0x0000000A
#define _IEC0_CNCIE_MASK                         0x00000400
#define _IEC0_CNCIE_LENGTH                       0x00000001

#define _IEC0_CNDIE_POSITION                     0x0000000B
#define _IEC0_CNDIE_MASK                         0x00000800
#define _IEC0_CNDIE_LENGTH                       0x00000001

#define _IEC0_T1IE_POSITION                      0x00000011
#define _IEC0_T1IE_MASK                          0x00020000
#define _IEC0_T1IE_LENGTH                        0x00000001

#define _IEC0_T2IE_POSITION                      0x00000012
#define _IEC0_T2IE_MASK                          0x00040000
#define _IEC0_T2IE_LENGTH                        0x00000001

#define _IEC0_T3IE_POSITION                      0x00000013
#define _IEC0_T3IE_MASK                          0x00080000
#define _IEC0_T3IE_LENGTH                        0x00000001

#define _IEC0_CMP1IE_POSITION                    0x00000017
#define _IEC0_CMP1IE_MASK                        0x00800000
#define _IEC0_CMP1IE_LENGTH                      0x00000001

#define _IEC0_CMP2IE_POSITION                    0x00000018
#define _IEC0_CMP2IE_MASK                        0x01000000
#define _IEC0_CMP2IE_LENGTH                      0x00000001

#define _IEC0_CMP3IE_POSITION                    0x00000019
#define _IEC0_CMP3IE_MASK                        0x02000000
#define _IEC0_CMP3IE_LENGTH                      0x00000001

#define _IEC0_USBIE_POSITION                     0x0000001D
#define _IEC0_USBIE_MASK                         0x20000000
#define _IEC0_USBIE_LENGTH                       0x00000001

#define _IEC1_RTCCIE_POSITION                    0x00000000
#define _IEC1_RTCCIE_MASK                        0x00000001
#define _IEC1_RTCCIE_LENGTH                      0x00000001

#define _IEC1_AD1IE_POSITION                     0x00000001
#define _IEC1_AD1IE_MASK                         0x00000002
#define _IEC1_AD1IE_LENGTH                       0x00000001

#define _IEC1_LVDIE_POSITION                     0x00000004
#define _IEC1_LVDIE_MASK                         0x00000010
#define _IEC1_LVDIE_LENGTH                       0x00000001

#define _IEC1_CLC1IE_POSITION                    0x00000005
#define _IEC1_CLC1IE_MASK                        0x00000020
#define _IEC1_CLC1IE_LENGTH                      0x00000001

#define _IEC1_CLC2IE_POSITION                    0x00000006
#define _IEC1_CLC2IE_MASK                        0x00000040
#define _IEC1_CLC2IE_LENGTH                      0x00000001

#define _IEC1_CLC3IE_POSITION                    0x00000007
#define _IEC1_CLC3IE_MASK                        0x00000080
#define _IEC1_CLC3IE_LENGTH                      0x00000001

#define _IEC1_CLC4IE_POSITION                    0x00000008
#define _IEC1_CLC4IE_MASK                        0x00000100
#define _IEC1_CLC4IE_LENGTH                      0x00000001

#define _IEC1_SPI1EIE_POSITION                   0x00000009
#define _IEC1_SPI1EIE_MASK                       0x00000200
#define _IEC1_SPI1EIE_LENGTH                     0x00000001

#define _IEC1_SPI1TXIE_POSITION                  0x0000000A
#define _IEC1_SPI1TXIE_MASK                      0x00000400
#define _IEC1_SPI1TXIE_LENGTH                    0x00000001

#define _IEC1_SPI1RXIE_POSITION                  0x0000000B
#define _IEC1_SPI1RXIE_MASK                      0x00000800
#define _IEC1_SPI1RXIE_LENGTH                    0x00000001

#define _IEC1_SPI2EIE_POSITION                   0x0000000C
#define _IEC1_SPI2EIE_MASK                       0x00001000
#define _IEC1_SPI2EIE_LENGTH                     0x00000001

#define _IEC1_SPI2TXIE_POSITION                  0x0000000D
#define _IEC1_SPI2TXIE_MASK                      0x00002000
#define _IEC1_SPI2TXIE_LENGTH                    0x00000001

#define _IEC1_SPI2RXIE_POSITION                  0x0000000E
#define _IEC1_SPI2RXIE_MASK                      0x00004000
#define _IEC1_SPI2RXIE_LENGTH                    0x00000001

#define _IEC1_SPI3EIE_POSITION                   0x0000000F
#define _IEC1_SPI3EIE_MASK                       0x00008000
#define _IEC1_SPI3EIE_LENGTH                     0x00000001

#define _IEC1_SPI3TXIE_POSITION                  0x00000010
#define _IEC1_SPI3TXIE_MASK                      0x00010000
#define _IEC1_SPI3TXIE_LENGTH                    0x00000001

#define _IEC1_SPI3RXIE_POSITION                  0x00000011
#define _IEC1_SPI3RXIE_MASK                      0x00020000
#define _IEC1_SPI3RXIE_LENGTH                    0x00000001

#define _IEC1_U1RXIE_POSITION                    0x00000015
#define _IEC1_U1RXIE_MASK                        0x00200000
#define _IEC1_U1RXIE_LENGTH                      0x00000001

#define _IEC1_U1TXIE_POSITION                    0x00000016
#define _IEC1_U1TXIE_MASK                        0x00400000
#define _IEC1_U1TXIE_LENGTH                      0x00000001

#define _IEC1_U1EIE_POSITION                     0x00000017
#define _IEC1_U1EIE_MASK                         0x00800000
#define _IEC1_U1EIE_LENGTH                       0x00000001

#define _IEC1_U2RXIE_POSITION                    0x00000018
#define _IEC1_U2RXIE_MASK                        0x01000000
#define _IEC1_U2RXIE_LENGTH                      0x00000001

#define _IEC1_U2TXIE_POSITION                    0x00000019
#define _IEC1_U2TXIE_MASK                        0x02000000
#define _IEC1_U2TXIE_LENGTH                      0x00000001

#define _IEC1_U2EIE_POSITION                     0x0000001A
#define _IEC1_U2EIE_MASK                         0x04000000
#define _IEC1_U2EIE_LENGTH                       0x00000001

#define _IEC1_U3RXIE_POSITION                    0x0000001B
#define _IEC1_U3RXIE_MASK                        0x08000000
#define _IEC1_U3RXIE_LENGTH                      0x00000001

#define _IEC1_U3TXIE_POSITION                    0x0000001C
#define _IEC1_U3TXIE_MASK                        0x10000000
#define _IEC1_U3TXIE_LENGTH                      0x00000001

#define _IEC1_U3EIE_POSITION                     0x0000001D
#define _IEC1_U3EIE_MASK                         0x20000000
#define _IEC1_U3EIE_LENGTH                       0x00000001

#define _IEC2_I2C1SIE_POSITION                   0x00000001
#define _IEC2_I2C1SIE_MASK                       0x00000002
#define _IEC2_I2C1SIE_LENGTH                     0x00000001

#define _IEC2_I2C1MIE_POSITION                   0x00000002
#define _IEC2_I2C1MIE_MASK                       0x00000004
#define _IEC2_I2C1MIE_LENGTH                     0x00000001

#define _IEC2_I2C1BCIE_POSITION                  0x00000003
#define _IEC2_I2C1BCIE_MASK                      0x00000008
#define _IEC2_I2C1BCIE_LENGTH                    0x00000001

#define _IEC2_I2C2SIE_POSITION                   0x00000004
#define _IEC2_I2C2SIE_MASK                       0x00000010
#define _IEC2_I2C2SIE_LENGTH                     0x00000001

#define _IEC2_I2C2MIE_POSITION                   0x00000005
#define _IEC2_I2C2MIE_MASK                       0x00000020
#define _IEC2_I2C2MIE_LENGTH                     0x00000001

#define _IEC2_I2C2BCIE_POSITION                  0x00000006
#define _IEC2_I2C2BCIE_MASK                      0x00000040
#define _IEC2_I2C2BCIE_LENGTH                    0x00000001

#define _IEC2_I2C3SIE_POSITION                   0x00000007
#define _IEC2_I2C3SIE_MASK                       0x00000080
#define _IEC2_I2C3SIE_LENGTH                     0x00000001

#define _IEC2_I2C3MIE_POSITION                   0x00000008
#define _IEC2_I2C3MIE_MASK                       0x00000100
#define _IEC2_I2C3MIE_LENGTH                     0x00000001

#define _IEC2_I2C3BCIE_POSITION                  0x00000009
#define _IEC2_I2C3BCIE_MASK                      0x00000200
#define _IEC2_I2C3BCIE_LENGTH                    0x00000001

#define _IEC2_CCP1IE_POSITION                    0x0000000A
#define _IEC2_CCP1IE_MASK                        0x00000400
#define _IEC2_CCP1IE_LENGTH                      0x00000001

#define _IEC2_CCT1IE_POSITION                    0x0000000B
#define _IEC2_CCT1IE_MASK                        0x00000800
#define _IEC2_CCT1IE_LENGTH                      0x00000001

#define _IEC2_CCP2IE_POSITION                    0x0000000C
#define _IEC2_CCP2IE_MASK                        0x00001000
#define _IEC2_CCP2IE_LENGTH                      0x00000001

#define _IEC2_CCT2IE_POSITION                    0x0000000D
#define _IEC2_CCT2IE_MASK                        0x00002000
#define _IEC2_CCT2IE_LENGTH                      0x00000001

#define _IEC2_CCP3IE_POSITION                    0x0000000E
#define _IEC2_CCP3IE_MASK                        0x00004000
#define _IEC2_CCP3IE_LENGTH                      0x00000001

#define _IEC2_CCT3IE_POSITION                    0x0000000F
#define _IEC2_CCT3IE_MASK                        0x00008000
#define _IEC2_CCT3IE_LENGTH                      0x00000001

#define _IEC2_CCP4IE_POSITION                    0x00000010
#define _IEC2_CCP4IE_MASK                        0x00010000
#define _IEC2_CCP4IE_LENGTH                      0x00000001

#define _IEC2_CCT4IE_POSITION                    0x00000011
#define _IEC2_CCT4IE_MASK                        0x00020000
#define _IEC2_CCT4IE_LENGTH                      0x00000001

#define _IEC2_CCP5IE_POSITION                    0x00000012
#define _IEC2_CCP5IE_MASK                        0x00040000
#define _IEC2_CCP5IE_LENGTH                      0x00000001

#define _IEC2_CCT5IE_POSITION                    0x00000013
#define _IEC2_CCT5IE_MASK                        0x00080000
#define _IEC2_CCT5IE_LENGTH                      0x00000001

#define _IEC2_CCP6IE_POSITION                    0x00000014
#define _IEC2_CCP6IE_MASK                        0x00100000
#define _IEC2_CCP6IE_LENGTH                      0x00000001

#define _IEC2_CCT6IE_POSITION                    0x00000015
#define _IEC2_CCT6IE_MASK                        0x00200000
#define _IEC2_CCT6IE_LENGTH                      0x00000001

#define _IEC2_CCP7IE_POSITION                    0x00000016
#define _IEC2_CCP7IE_MASK                        0x00400000
#define _IEC2_CCP7IE_LENGTH                      0x00000001

#define _IEC2_CCT7IE_POSITION                    0x00000017
#define _IEC2_CCT7IE_MASK                        0x00800000
#define _IEC2_CCT7IE_LENGTH                      0x00000001

#define _IEC2_CCP8IE_POSITION                    0x00000018
#define _IEC2_CCP8IE_MASK                        0x01000000
#define _IEC2_CCP8IE_LENGTH                      0x00000001

#define _IEC2_CCT8IE_POSITION                    0x00000019
#define _IEC2_CCT8IE_MASK                        0x02000000
#define _IEC2_CCT8IE_LENGTH                      0x00000001

#define _IEC2_CCP9IE_POSITION                    0x0000001A
#define _IEC2_CCP9IE_MASK                        0x04000000
#define _IEC2_CCP9IE_LENGTH                      0x00000001

#define _IEC2_CCT9IE_POSITION                    0x0000001B
#define _IEC2_CCT9IE_MASK                        0x08000000
#define _IEC2_CCT9IE_LENGTH                      0x00000001

#define _IEC2_FSTIE_POSITION                     0x0000001C
#define _IEC2_FSTIE_MASK                         0x10000000
#define _IEC2_FSTIE_LENGTH                       0x00000001

#define _IEC2_NVMIE_POSITION                     0x0000001E
#define _IEC2_NVMIE_MASK                         0x40000000
#define _IEC2_NVMIE_LENGTH                       0x00000001

#define _IEC2_CPCIE_POSITION                     0x0000001F
#define _IEC2_CPCIE_MASK                         0x80000000
#define _IEC2_CPCIE_LENGTH                       0x00000001

#define _IEC3_ECCBEIE_POSITION                   0x00000001
#define _IEC3_ECCBEIE_MASK                       0x00000002
#define _IEC3_ECCBEIE_LENGTH                     0x00000001

#define _IEC3_DMA0IE_POSITION                    0x00000002
#define _IEC3_DMA0IE_MASK                        0x00000004
#define _IEC3_DMA0IE_LENGTH                      0x00000001

#define _IEC3_DMA1IE_POSITION                    0x00000003
#define _IEC3_DMA1IE_MASK                        0x00000008
#define _IEC3_DMA1IE_LENGTH                      0x00000001

#define _IEC3_DMA2IE_POSITION                    0x00000004
#define _IEC3_DMA2IE_MASK                        0x00000010
#define _IEC3_DMA2IE_LENGTH                      0x00000001

#define _IEC3_DMA3IE_POSITION                    0x00000005
#define _IEC3_DMA3IE_MASK                        0x00000020
#define _IEC3_DMA3IE_LENGTH                      0x00000001

#define _IPC0_CTIS_POSITION                      0x00000000
#define _IPC0_CTIS_MASK                          0x00000003
#define _IPC0_CTIS_LENGTH                        0x00000002

#define _IPC0_CTIP_POSITION                      0x00000002
#define _IPC0_CTIP_MASK                          0x0000001C
#define _IPC0_CTIP_LENGTH                        0x00000003

#define _IPC0_CS0IS_POSITION                     0x00000008
#define _IPC0_CS0IS_MASK                         0x00000300
#define _IPC0_CS0IS_LENGTH                       0x00000002

#define _IPC0_CS0IP_POSITION                     0x0000000A
#define _IPC0_CS0IP_MASK                         0x00001C00
#define _IPC0_CS0IP_LENGTH                       0x00000003

#define _IPC0_CS1IS_POSITION                     0x00000010
#define _IPC0_CS1IS_MASK                         0x00030000
#define _IPC0_CS1IS_LENGTH                       0x00000002

#define _IPC0_CS1IP_POSITION                     0x00000012
#define _IPC0_CS1IP_MASK                         0x001C0000
#define _IPC0_CS1IP_LENGTH                       0x00000003

#define _IPC0_INT0IS_POSITION                    0x00000018
#define _IPC0_INT0IS_MASK                        0x03000000
#define _IPC0_INT0IS_LENGTH                      0x00000002

#define _IPC0_INT0IP_POSITION                    0x0000001A
#define _IPC0_INT0IP_MASK                        0x1C000000
#define _IPC0_INT0IP_LENGTH                      0x00000003

#define _IPC1_INT1IS_POSITION                    0x00000000
#define _IPC1_INT1IS_MASK                        0x00000003
#define _IPC1_INT1IS_LENGTH                      0x00000002

#define _IPC1_INT1IP_POSITION                    0x00000002
#define _IPC1_INT1IP_MASK                        0x0000001C
#define _IPC1_INT1IP_LENGTH                      0x00000003

#define _IPC1_INT2IS_POSITION                    0x00000008
#define _IPC1_INT2IS_MASK                        0x00000300
#define _IPC1_INT2IS_LENGTH                      0x00000002

#define _IPC1_INT2IP_POSITION                    0x0000000A
#define _IPC1_INT2IP_MASK                        0x00001C00
#define _IPC1_INT2IP_LENGTH                      0x00000003

#define _IPC1_INT3IS_POSITION                    0x00000010
#define _IPC1_INT3IS_MASK                        0x00030000
#define _IPC1_INT3IS_LENGTH                      0x00000002

#define _IPC1_INT3IP_POSITION                    0x00000012
#define _IPC1_INT3IP_MASK                        0x001C0000
#define _IPC1_INT3IP_LENGTH                      0x00000003

#define _IPC1_INT4IS_POSITION                    0x00000018
#define _IPC1_INT4IS_MASK                        0x03000000
#define _IPC1_INT4IS_LENGTH                      0x00000002

#define _IPC1_INT4IP_POSITION                    0x0000001A
#define _IPC1_INT4IP_MASK                        0x1C000000
#define _IPC1_INT4IP_LENGTH                      0x00000003

#define _IPC2_CNAIS_POSITION                     0x00000000
#define _IPC2_CNAIS_MASK                         0x00000003
#define _IPC2_CNAIS_LENGTH                       0x00000002

#define _IPC2_CNAIP_POSITION                     0x00000002
#define _IPC2_CNAIP_MASK                         0x0000001C
#define _IPC2_CNAIP_LENGTH                       0x00000003

#define _IPC2_CNBIS_POSITION                     0x00000008
#define _IPC2_CNBIS_MASK                         0x00000300
#define _IPC2_CNBIS_LENGTH                       0x00000002

#define _IPC2_CNBIP_POSITION                     0x0000000A
#define _IPC2_CNBIP_MASK                         0x00001C00
#define _IPC2_CNBIP_LENGTH                       0x00000003

#define _IPC2_CNCIS_POSITION                     0x00000010
#define _IPC2_CNCIS_MASK                         0x00030000
#define _IPC2_CNCIS_LENGTH                       0x00000002

#define _IPC2_CNCIP_POSITION                     0x00000012
#define _IPC2_CNCIP_MASK                         0x001C0000
#define _IPC2_CNCIP_LENGTH                       0x00000003

#define _IPC2_CNDIS_POSITION                     0x00000018
#define _IPC2_CNDIS_MASK                         0x03000000
#define _IPC2_CNDIS_LENGTH                       0x00000002

#define _IPC2_CNDIP_POSITION                     0x0000001A
#define _IPC2_CNDIP_MASK                         0x1C000000
#define _IPC2_CNDIP_LENGTH                       0x00000003

#define _IPC4_T1IS_POSITION                      0x00000008
#define _IPC4_T1IS_MASK                          0x00000300
#define _IPC4_T1IS_LENGTH                        0x00000002

#define _IPC4_T1IP_POSITION                      0x0000000A
#define _IPC4_T1IP_MASK                          0x00001C00
#define _IPC4_T1IP_LENGTH                        0x00000003

#define _IPC4_T2IS_POSITION                      0x00000010
#define _IPC4_T2IS_MASK                          0x00030000
#define _IPC4_T2IS_LENGTH                        0x00000002

#define _IPC4_T2IP_POSITION                      0x00000012
#define _IPC4_T2IP_MASK                          0x001C0000
#define _IPC4_T2IP_LENGTH                        0x00000003

#define _IPC4_T3IS_POSITION                      0x00000018
#define _IPC4_T3IS_MASK                          0x03000000
#define _IPC4_T3IS_LENGTH                        0x00000002

#define _IPC4_T3IP_POSITION                      0x0000001A
#define _IPC4_T3IP_MASK                          0x1C000000
#define _IPC4_T3IP_LENGTH                        0x00000003

#define _IPC5_CMP1IS_POSITION                    0x00000018
#define _IPC5_CMP1IS_MASK                        0x03000000
#define _IPC5_CMP1IS_LENGTH                      0x00000002

#define _IPC5_CMP1IP_POSITION                    0x0000001A
#define _IPC5_CMP1IP_MASK                        0x1C000000
#define _IPC5_CMP1IP_LENGTH                      0x00000003

#define _IPC6_CMP2IS_POSITION                    0x00000000
#define _IPC6_CMP2IS_MASK                        0x00000003
#define _IPC6_CMP2IS_LENGTH                      0x00000002

#define _IPC6_CMP2IP_POSITION                    0x00000002
#define _IPC6_CMP2IP_MASK                        0x0000001C
#define _IPC6_CMP2IP_LENGTH                      0x00000003

#define _IPC6_CMP3IS_POSITION                    0x00000008
#define _IPC6_CMP3IS_MASK                        0x00000300
#define _IPC6_CMP3IS_LENGTH                      0x00000002

#define _IPC6_CMP3IP_POSITION                    0x0000000A
#define _IPC6_CMP3IP_MASK                        0x00001C00
#define _IPC6_CMP3IP_LENGTH                      0x00000003

#define _IPC7_USBIS_POSITION                     0x00000008
#define _IPC7_USBIS_MASK                         0x00000300
#define _IPC7_USBIS_LENGTH                       0x00000002

#define _IPC7_USBIP_POSITION                     0x0000000A
#define _IPC7_USBIP_MASK                         0x00001C00
#define _IPC7_USBIP_LENGTH                       0x00000003

#define _IPC8_RTCCIS_POSITION                    0x00000000
#define _IPC8_RTCCIS_MASK                        0x00000003
#define _IPC8_RTCCIS_LENGTH                      0x00000002

#define _IPC8_RTCCIP_POSITION                    0x00000002
#define _IPC8_RTCCIP_MASK                        0x0000001C
#define _IPC8_RTCCIP_LENGTH                      0x00000003

#define _IPC8_AD1IS_POSITION                     0x00000008
#define _IPC8_AD1IS_MASK                         0x00000300
#define _IPC8_AD1IS_LENGTH                       0x00000002

#define _IPC8_AD1IP_POSITION                     0x0000000A
#define _IPC8_AD1IP_MASK                         0x00001C00
#define _IPC8_AD1IP_LENGTH                       0x00000003

#define _IPC9_LVDIS_POSITION                     0x00000000
#define _IPC9_LVDIS_MASK                         0x00000003
#define _IPC9_LVDIS_LENGTH                       0x00000002

#define _IPC9_LVDIP_POSITION                     0x00000002
#define _IPC9_LVDIP_MASK                         0x0000001C
#define _IPC9_LVDIP_LENGTH                       0x00000003

#define _IPC9_CLC1IS_POSITION                    0x00000008
#define _IPC9_CLC1IS_MASK                        0x00000300
#define _IPC9_CLC1IS_LENGTH                      0x00000002

#define _IPC9_CLC1IP_POSITION                    0x0000000A
#define _IPC9_CLC1IP_MASK                        0x00001C00
#define _IPC9_CLC1IP_LENGTH                      0x00000003

#define _IPC9_CLC2IS_POSITION                    0x00000010
#define _IPC9_CLC2IS_MASK                        0x00030000
#define _IPC9_CLC2IS_LENGTH                      0x00000002

#define _IPC9_CLC2IP_POSITION                    0x00000012
#define _IPC9_CLC2IP_MASK                        0x001C0000
#define _IPC9_CLC2IP_LENGTH                      0x00000003

#define _IPC9_CLC3IS_POSITION                    0x00000018
#define _IPC9_CLC3IS_MASK                        0x03000000
#define _IPC9_CLC3IS_LENGTH                      0x00000002

#define _IPC9_CLC3IP_POSITION                    0x0000001A
#define _IPC9_CLC3IP_MASK                        0x1C000000
#define _IPC9_CLC3IP_LENGTH                      0x00000003

#define _IPC10_CLC4IS_POSITION                   0x00000000
#define _IPC10_CLC4IS_MASK                       0x00000003
#define _IPC10_CLC4IS_LENGTH                     0x00000002

#define _IPC10_CLC4IP_POSITION                   0x00000002
#define _IPC10_CLC4IP_MASK                       0x0000001C
#define _IPC10_CLC4IP_LENGTH                     0x00000003

#define _IPC10_SPI1EIS_POSITION                  0x00000008
#define _IPC10_SPI1EIS_MASK                      0x00000300
#define _IPC10_SPI1EIS_LENGTH                    0x00000002

#define _IPC10_SPI1EIP_POSITION                  0x0000000A
#define _IPC10_SPI1EIP_MASK                      0x00001C00
#define _IPC10_SPI1EIP_LENGTH                    0x00000003

#define _IPC10_SPI1TXIS_POSITION                 0x00000010
#define _IPC10_SPI1TXIS_MASK                     0x00030000
#define _IPC10_SPI1TXIS_LENGTH                   0x00000002

#define _IPC10_SPI1TXIP_POSITION                 0x00000012
#define _IPC10_SPI1TXIP_MASK                     0x001C0000
#define _IPC10_SPI1TXIP_LENGTH                   0x00000003

#define _IPC10_SPI1RXIS_POSITION                 0x00000018
#define _IPC10_SPI1RXIS_MASK                     0x03000000
#define _IPC10_SPI1RXIS_LENGTH                   0x00000002

#define _IPC10_SPI1RXIP_POSITION                 0x0000001A
#define _IPC10_SPI1RXIP_MASK                     0x1C000000
#define _IPC10_SPI1RXIP_LENGTH                   0x00000003

#define _IPC11_SPI2EIS_POSITION                  0x00000000
#define _IPC11_SPI2EIS_MASK                      0x00000003
#define _IPC11_SPI2EIS_LENGTH                    0x00000002

#define _IPC11_SPI2EIP_POSITION                  0x00000002
#define _IPC11_SPI2EIP_MASK                      0x0000001C
#define _IPC11_SPI2EIP_LENGTH                    0x00000003

#define _IPC11_SPI2TXIS_POSITION                 0x00000008
#define _IPC11_SPI2TXIS_MASK                     0x00000300
#define _IPC11_SPI2TXIS_LENGTH                   0x00000002

#define _IPC11_SPI2TXIP_POSITION                 0x0000000A
#define _IPC11_SPI2TXIP_MASK                     0x00001C00
#define _IPC11_SPI2TXIP_LENGTH                   0x00000003

#define _IPC11_SPI2RXIS_POSITION                 0x00000010
#define _IPC11_SPI2RXIS_MASK                     0x00030000
#define _IPC11_SPI2RXIS_LENGTH                   0x00000002

#define _IPC11_SPI2RXIP_POSITION                 0x00000012
#define _IPC11_SPI2RXIP_MASK                     0x001C0000
#define _IPC11_SPI2RXIP_LENGTH                   0x00000003

#define _IPC11_SPI3EIS_POSITION                  0x00000018
#define _IPC11_SPI3EIS_MASK                      0x03000000
#define _IPC11_SPI3EIS_LENGTH                    0x00000002

#define _IPC11_SPI3EIP_POSITION                  0x0000001A
#define _IPC11_SPI3EIP_MASK                      0x1C000000
#define _IPC11_SPI3EIP_LENGTH                    0x00000003

#define _IPC12_SPI3TXIS_POSITION                 0x00000000
#define _IPC12_SPI3TXIS_MASK                     0x00000003
#define _IPC12_SPI3TXIS_LENGTH                   0x00000002

#define _IPC12_SPI3TXIP_POSITION                 0x00000002
#define _IPC12_SPI3TXIP_MASK                     0x0000001C
#define _IPC12_SPI3TXIP_LENGTH                   0x00000003

#define _IPC12_SPI3RXIS_POSITION                 0x00000008
#define _IPC12_SPI3RXIS_MASK                     0x00000300
#define _IPC12_SPI3RXIS_LENGTH                   0x00000002

#define _IPC12_SPI3RXIP_POSITION                 0x0000000A
#define _IPC12_SPI3RXIP_MASK                     0x00001C00
#define _IPC12_SPI3RXIP_LENGTH                   0x00000003

#define _IPC13_U1RXIS_POSITION                   0x00000008
#define _IPC13_U1RXIS_MASK                       0x00000300
#define _IPC13_U1RXIS_LENGTH                     0x00000002

#define _IPC13_U1RXIP_POSITION                   0x0000000A
#define _IPC13_U1RXIP_MASK                       0x00001C00
#define _IPC13_U1RXIP_LENGTH                     0x00000003

#define _IPC13_U1TXIS_POSITION                   0x00000010
#define _IPC13_U1TXIS_MASK                       0x00030000
#define _IPC13_U1TXIS_LENGTH                     0x00000002

#define _IPC13_U1TXIP_POSITION                   0x00000012
#define _IPC13_U1TXIP_MASK                       0x001C0000
#define _IPC13_U1TXIP_LENGTH                     0x00000003

#define _IPC13_U1EIS_POSITION                    0x00000018
#define _IPC13_U1EIS_MASK                        0x03000000
#define _IPC13_U1EIS_LENGTH                      0x00000002

#define _IPC13_U1EIP_POSITION                    0x0000001A
#define _IPC13_U1EIP_MASK                        0x1C000000
#define _IPC13_U1EIP_LENGTH                      0x00000003

#define _IPC14_U2RXIS_POSITION                   0x00000000
#define _IPC14_U2RXIS_MASK                       0x00000003
#define _IPC14_U2RXIS_LENGTH                     0x00000002

#define _IPC14_U2RXIP_POSITION                   0x00000002
#define _IPC14_U2RXIP_MASK                       0x0000001C
#define _IPC14_U2RXIP_LENGTH                     0x00000003

#define _IPC14_U2TXIS_POSITION                   0x00000008
#define _IPC14_U2TXIS_MASK                       0x00000300
#define _IPC14_U2TXIS_LENGTH                     0x00000002

#define _IPC14_U2TXIP_POSITION                   0x0000000A
#define _IPC14_U2TXIP_MASK                       0x00001C00
#define _IPC14_U2TXIP_LENGTH                     0x00000003

#define _IPC14_U2EIS_POSITION                    0x00000010
#define _IPC14_U2EIS_MASK                        0x00030000
#define _IPC14_U2EIS_LENGTH                      0x00000002

#define _IPC14_U2EIP_POSITION                    0x00000012
#define _IPC14_U2EIP_MASK                        0x001C0000
#define _IPC14_U2EIP_LENGTH                      0x00000003

#define _IPC14_U3RXIS_POSITION                   0x00000018
#define _IPC14_U3RXIS_MASK                       0x03000000
#define _IPC14_U3RXIS_LENGTH                     0x00000002

#define _IPC14_U3RXIP_POSITION                   0x0000001A
#define _IPC14_U3RXIP_MASK                       0x1C000000
#define _IPC14_U3RXIP_LENGTH                     0x00000003

#define _IPC15_U3TXIS_POSITION                   0x00000000
#define _IPC15_U3TXIS_MASK                       0x00000003
#define _IPC15_U3TXIS_LENGTH                     0x00000002

#define _IPC15_U3TXIP_POSITION                   0x00000002
#define _IPC15_U3TXIP_MASK                       0x0000001C
#define _IPC15_U3TXIP_LENGTH                     0x00000003

#define _IPC15_U3EIS_POSITION                    0x00000008
#define _IPC15_U3EIS_MASK                        0x00000300
#define _IPC15_U3EIS_LENGTH                      0x00000002

#define _IPC15_U3EIP_POSITION                    0x0000000A
#define _IPC15_U3EIP_MASK                        0x00001C00
#define _IPC15_U3EIP_LENGTH                      0x00000003

#define _IPC16_I2C1SIS_POSITION                  0x00000008
#define _IPC16_I2C1SIS_MASK                      0x00000300
#define _IPC16_I2C1SIS_LENGTH                    0x00000002

#define _IPC16_I2C1SIP_POSITION                  0x0000000A
#define _IPC16_I2C1SIP_MASK                      0x00001C00
#define _IPC16_I2C1SIP_LENGTH                    0x00000003

#define _IPC16_I2C1MIS_POSITION                  0x00000010
#define _IPC16_I2C1MIS_MASK                      0x00030000
#define _IPC16_I2C1MIS_LENGTH                    0x00000002

#define _IPC16_I2C1MIP_POSITION                  0x00000012
#define _IPC16_I2C1MIP_MASK                      0x001C0000
#define _IPC16_I2C1MIP_LENGTH                    0x00000003

#define _IPC16_I2C1BCIS_POSITION                 0x00000018
#define _IPC16_I2C1BCIS_MASK                     0x03000000
#define _IPC16_I2C1BCIS_LENGTH                   0x00000002

#define _IPC16_I2C1BCIP_POSITION                 0x0000001A
#define _IPC16_I2C1BCIP_MASK                     0x1C000000
#define _IPC16_I2C1BCIP_LENGTH                   0x00000003

#define _IPC17_I2C2SIS_POSITION                  0x00000000
#define _IPC17_I2C2SIS_MASK                      0x00000003
#define _IPC17_I2C2SIS_LENGTH                    0x00000002

#define _IPC17_I2C2SIP_POSITION                  0x00000002
#define _IPC17_I2C2SIP_MASK                      0x0000001C
#define _IPC17_I2C2SIP_LENGTH                    0x00000003

#define _IPC17_I2C2MIS_POSITION                  0x00000008
#define _IPC17_I2C2MIS_MASK                      0x00000300
#define _IPC17_I2C2MIS_LENGTH                    0x00000002

#define _IPC17_I2C2MIP_POSITION                  0x0000000A
#define _IPC17_I2C2MIP_MASK                      0x00001C00
#define _IPC17_I2C2MIP_LENGTH                    0x00000003

#define _IPC17_I2C2BCIS_POSITION                 0x00000010
#define _IPC17_I2C2BCIS_MASK                     0x00030000
#define _IPC17_I2C2BCIS_LENGTH                   0x00000002

#define _IPC17_I2C2BCIP_POSITION                 0x00000012
#define _IPC17_I2C2BCIP_MASK                     0x001C0000
#define _IPC17_I2C2BCIP_LENGTH                   0x00000003

#define _IPC17_I2C3SIS_POSITION                  0x00000018
#define _IPC17_I2C3SIS_MASK                      0x03000000
#define _IPC17_I2C3SIS_LENGTH                    0x00000002

#define _IPC17_I2C3SIP_POSITION                  0x0000001A
#define _IPC17_I2C3SIP_MASK                      0x1C000000
#define _IPC17_I2C3SIP_LENGTH                    0x00000003

#define _IPC18_I2C3MIS_POSITION                  0x00000000
#define _IPC18_I2C3MIS_MASK                      0x00000003
#define _IPC18_I2C3MIS_LENGTH                    0x00000002

#define _IPC18_I2C3MIP_POSITION                  0x00000002
#define _IPC18_I2C3MIP_MASK                      0x0000001C
#define _IPC18_I2C3MIP_LENGTH                    0x00000003

#define _IPC18_I2C3BCIS_POSITION                 0x00000008
#define _IPC18_I2C3BCIS_MASK                     0x00000300
#define _IPC18_I2C3BCIS_LENGTH                   0x00000002

#define _IPC18_I2C3BCIP_POSITION                 0x0000000A
#define _IPC18_I2C3BCIP_MASK                     0x00001C00
#define _IPC18_I2C3BCIP_LENGTH                   0x00000003

#define _IPC18_CCP1IS_POSITION                   0x00000010
#define _IPC18_CCP1IS_MASK                       0x00030000
#define _IPC18_CCP1IS_LENGTH                     0x00000002

#define _IPC18_CCP1IP_POSITION                   0x00000012
#define _IPC18_CCP1IP_MASK                       0x001C0000
#define _IPC18_CCP1IP_LENGTH                     0x00000003

#define _IPC18_CCT1IS_POSITION                   0x00000018
#define _IPC18_CCT1IS_MASK                       0x03000000
#define _IPC18_CCT1IS_LENGTH                     0x00000002

#define _IPC18_CCT1IP_POSITION                   0x0000001A
#define _IPC18_CCT1IP_MASK                       0x1C000000
#define _IPC18_CCT1IP_LENGTH                     0x00000003

#define _IPC19_CCP2IS_POSITION                   0x00000000
#define _IPC19_CCP2IS_MASK                       0x00000003
#define _IPC19_CCP2IS_LENGTH                     0x00000002

#define _IPC19_CCP2IP_POSITION                   0x00000002
#define _IPC19_CCP2IP_MASK                       0x0000001C
#define _IPC19_CCP2IP_LENGTH                     0x00000003

#define _IPC19_CCT2IS_POSITION                   0x00000008
#define _IPC19_CCT2IS_MASK                       0x00000300
#define _IPC19_CCT2IS_LENGTH                     0x00000002

#define _IPC19_CCT2IP_POSITION                   0x0000000A
#define _IPC19_CCT2IP_MASK                       0x00001C00
#define _IPC19_CCT2IP_LENGTH                     0x00000003

#define _IPC19_CCP3IS_POSITION                   0x00000010
#define _IPC19_CCP3IS_MASK                       0x00030000
#define _IPC19_CCP3IS_LENGTH                     0x00000002

#define _IPC19_CCP3IP_POSITION                   0x00000012
#define _IPC19_CCP3IP_MASK                       0x001C0000
#define _IPC19_CCP3IP_LENGTH                     0x00000003

#define _IPC19_CCT3IS_POSITION                   0x00000018
#define _IPC19_CCT3IS_MASK                       0x03000000
#define _IPC19_CCT3IS_LENGTH                     0x00000002

#define _IPC19_CCT3IP_POSITION                   0x0000001A
#define _IPC19_CCT3IP_MASK                       0x1C000000
#define _IPC19_CCT3IP_LENGTH                     0x00000003

#define _IPC20_CCP4IS_POSITION                   0x00000000
#define _IPC20_CCP4IS_MASK                       0x00000003
#define _IPC20_CCP4IS_LENGTH                     0x00000002

#define _IPC20_CCP4IP_POSITION                   0x00000002
#define _IPC20_CCP4IP_MASK                       0x0000001C
#define _IPC20_CCP4IP_LENGTH                     0x00000003

#define _IPC20_CCT4IS_POSITION                   0x00000008
#define _IPC20_CCT4IS_MASK                       0x00000300
#define _IPC20_CCT4IS_LENGTH                     0x00000002

#define _IPC20_CCT4IP_POSITION                   0x0000000A
#define _IPC20_CCT4IP_MASK                       0x00001C00
#define _IPC20_CCT4IP_LENGTH                     0x00000003

#define _IPC20_CCP5IS_POSITION                   0x00000010
#define _IPC20_CCP5IS_MASK                       0x00030000
#define _IPC20_CCP5IS_LENGTH                     0x00000002

#define _IPC20_CCP5IP_POSITION                   0x00000012
#define _IPC20_CCP5IP_MASK                       0x001C0000
#define _IPC20_CCP5IP_LENGTH                     0x00000003

#define _IPC20_CCT5IS_POSITION                   0x00000018
#define _IPC20_CCT5IS_MASK                       0x03000000
#define _IPC20_CCT5IS_LENGTH                     0x00000002

#define _IPC20_CCT5IP_POSITION                   0x0000001A
#define _IPC20_CCT5IP_MASK                       0x1C000000
#define _IPC20_CCT5IP_LENGTH                     0x00000003

#define _IPC21_CCP6IS_POSITION                   0x00000000
#define _IPC21_CCP6IS_MASK                       0x00000003
#define _IPC21_CCP6IS_LENGTH                     0x00000002

#define _IPC21_CCP6IP_POSITION                   0x00000002
#define _IPC21_CCP6IP_MASK                       0x0000001C
#define _IPC21_CCP6IP_LENGTH                     0x00000003

#define _IPC21_CCT6IS_POSITION                   0x00000008
#define _IPC21_CCT6IS_MASK                       0x00000300
#define _IPC21_CCT6IS_LENGTH                     0x00000002

#define _IPC21_CCT6IP_POSITION                   0x0000000A
#define _IPC21_CCT6IP_MASK                       0x00001C00
#define _IPC21_CCT6IP_LENGTH                     0x00000003

#define _IPC21_CCP7IS_POSITION                   0x00000010
#define _IPC21_CCP7IS_MASK                       0x00030000
#define _IPC21_CCP7IS_LENGTH                     0x00000002

#define _IPC21_CCP7IP_POSITION                   0x00000012
#define _IPC21_CCP7IP_MASK                       0x001C0000
#define _IPC21_CCP7IP_LENGTH                     0x00000003

#define _IPC21_CCT7IS_POSITION                   0x00000018
#define _IPC21_CCT7IS_MASK                       0x03000000
#define _IPC21_CCT7IS_LENGTH                     0x00000002

#define _IPC21_CCT7IP_POSITION                   0x0000001A
#define _IPC21_CCT7IP_MASK                       0x1C000000
#define _IPC21_CCT7IP_LENGTH                     0x00000003

#define _IPC22_CCP8IS_POSITION                   0x00000000
#define _IPC22_CCP8IS_MASK                       0x00000003
#define _IPC22_CCP8IS_LENGTH                     0x00000002

#define _IPC22_CCP8IP_POSITION                   0x00000002
#define _IPC22_CCP8IP_MASK                       0x0000001C
#define _IPC22_CCP8IP_LENGTH                     0x00000003

#define _IPC22_CCT8IS_POSITION                   0x00000008
#define _IPC22_CCT8IS_MASK                       0x00000300
#define _IPC22_CCT8IS_LENGTH                     0x00000002

#define _IPC22_CCT8IP_POSITION                   0x0000000A
#define _IPC22_CCT8IP_MASK                       0x00001C00
#define _IPC22_CCT8IP_LENGTH                     0x00000003

#define _IPC22_CCP9IS_POSITION                   0x00000010
#define _IPC22_CCP9IS_MASK                       0x00030000
#define _IPC22_CCP9IS_LENGTH                     0x00000002

#define _IPC22_CCP9IP_POSITION                   0x00000012
#define _IPC22_CCP9IP_MASK                       0x001C0000
#define _IPC22_CCP9IP_LENGTH                     0x00000003

#define _IPC22_CCT9IS_POSITION                   0x00000018
#define _IPC22_CCT9IS_MASK                       0x03000000
#define _IPC22_CCT9IS_LENGTH                     0x00000002

#define _IPC22_CCT9IP_POSITION                   0x0000001A
#define _IPC22_CCT9IP_MASK                       0x1C000000
#define _IPC22_CCT9IP_LENGTH                     0x00000003

#define _IPC23_FSTIS_POSITION                    0x00000000
#define _IPC23_FSTIS_MASK                        0x00000003
#define _IPC23_FSTIS_LENGTH                      0x00000002

#define _IPC23_FSTIP_POSITION                    0x00000002
#define _IPC23_FSTIP_MASK                        0x0000001C
#define _IPC23_FSTIP_LENGTH                      0x00000003

#define _IPC23_NVMIS_POSITION                    0x00000010
#define _IPC23_NVMIS_MASK                        0x00030000
#define _IPC23_NVMIS_LENGTH                      0x00000002

#define _IPC23_NVMIP_POSITION                    0x00000012
#define _IPC23_NVMIP_MASK                        0x001C0000
#define _IPC23_NVMIP_LENGTH                      0x00000003

#define _IPC23_CPCIS_POSITION                    0x00000018
#define _IPC23_CPCIS_MASK                        0x03000000
#define _IPC23_CPCIS_LENGTH                      0x00000002

#define _IPC23_CPCIP_POSITION                    0x0000001A
#define _IPC23_CPCIP_MASK                        0x1C000000
#define _IPC23_CPCIP_LENGTH                      0x00000003

#define _IPC24_ECCBEIS_POSITION                  0x00000008
#define _IPC24_ECCBEIS_MASK                      0x00000300
#define _IPC24_ECCBEIS_LENGTH                    0x00000002

#define _IPC24_ECCBEIP_POSITION                  0x0000000A
#define _IPC24_ECCBEIP_MASK                      0x00001C00
#define _IPC24_ECCBEIP_LENGTH                    0x00000003

#define _IPC24_DMA0IS_POSITION                   0x00000010
#define _IPC24_DMA0IS_MASK                       0x00030000
#define _IPC24_DMA0IS_LENGTH                     0x00000002

#define _IPC24_DMA0IP_POSITION                   0x00000012
#define _IPC24_DMA0IP_MASK                       0x001C0000
#define _IPC24_DMA0IP_LENGTH                     0x00000003

#define _IPC24_DMA1IS_POSITION                   0x00000018
#define _IPC24_DMA1IS_MASK                       0x03000000
#define _IPC24_DMA1IS_LENGTH                     0x00000002

#define _IPC24_DMA1IP_POSITION                   0x0000001A
#define _IPC24_DMA1IP_MASK                       0x1C000000
#define _IPC24_DMA1IP_LENGTH                     0x00000003

#define _IPC25_DMA2IS_POSITION                   0x00000000
#define _IPC25_DMA2IS_MASK                       0x00000003
#define _IPC25_DMA2IS_LENGTH                     0x00000002

#define _IPC25_DMA2IP_POSITION                   0x00000002
#define _IPC25_DMA2IP_MASK                       0x0000001C
#define _IPC25_DMA2IP_LENGTH                     0x00000003

#define _IPC25_DMA3IS_POSITION                   0x00000008
#define _IPC25_DMA3IS_MASK                       0x00000300
#define _IPC25_DMA3IS_LENGTH                     0x00000002

#define _IPC25_DMA3IP_POSITION                   0x0000000A
#define _IPC25_DMA3IP_MASK                       0x00001C00
#define _IPC25_DMA3IP_LENGTH                     0x00000003

#define _FDEVOPT_SOSCHP_POSITION                 0x00000003
#define _FDEVOPT_SOSCHP_MASK                     0x00000008
#define _FDEVOPT_SOSCHP_LENGTH                   0x00000001

#define _FDEVOPT_ALTI2C_POSITION                 0x00000004
#define _FDEVOPT_ALTI2C_MASK                     0x00000010
#define _FDEVOPT_ALTI2C_LENGTH                   0x00000001

#define _FDEVOPT_FUSBIDIO_POSITION               0x0000000E
#define _FDEVOPT_FUSBIDIO_MASK                   0x00004000
#define _FDEVOPT_FUSBIDIO_LENGTH                 0x00000001

#define _FDEVOPT_FVBUSIO_POSITION                0x0000000F
#define _FDEVOPT_FVBUSIO_MASK                    0x00008000
#define _FDEVOPT_FVBUSIO_LENGTH                  0x00000001

#define _FDEVOPT_USERID_POSITION                 0x00000010
#define _FDEVOPT_USERID_MASK                     0xFFFF0000
#define _FDEVOPT_USERID_LENGTH                   0x00000010

#define _FDEVOPT_w_POSITION                      0x00000000
#define _FDEVOPT_w_MASK                          0xFFFFFFFF
#define _FDEVOPT_w_LENGTH                        0x00000020

#define _FICD_JTAGEN_POSITION                    0x00000002
#define _FICD_JTAGEN_MASK                        0x00000004
#define _FICD_JTAGEN_LENGTH                      0x00000001

#define _FICD_ICS_POSITION                       0x00000003
#define _FICD_ICS_MASK                           0x00000018
#define _FICD_ICS_LENGTH                         0x00000002

#define _FICD_w_POSITION                         0x00000000
#define _FICD_w_MASK                             0xFFFFFFFF
#define _FICD_w_LENGTH                           0x00000020

#define _FPOR_BOREN_POSITION                     0x00000000
#define _FPOR_BOREN_MASK                         0x00000003
#define _FPOR_BOREN_LENGTH                       0x00000002

#define _FPOR_RETVR_POSITION                     0x00000002
#define _FPOR_RETVR_MASK                         0x00000004
#define _FPOR_RETVR_LENGTH                       0x00000001

#define _FPOR_LPBOREN_POSITION                   0x00000003
#define _FPOR_LPBOREN_MASK                       0x00000008
#define _FPOR_LPBOREN_LENGTH                     0x00000001

#define _FPOR_w_POSITION                         0x00000000
#define _FPOR_w_MASK                             0xFFFFFFFF
#define _FPOR_w_LENGTH                           0x00000020

#define _FWDT_SWDTPS_POSITION                    0x00000000
#define _FWDT_SWDTPS_MASK                        0x0000001F
#define _FWDT_SWDTPS_LENGTH                      0x00000005

#define _FWDT_FWDTWINSZ_POSITION                 0x00000005
#define _FWDT_FWDTWINSZ_MASK                     0x00000060
#define _FWDT_FWDTWINSZ_LENGTH                   0x00000002

#define _FWDT_WINDIS_POSITION                    0x00000007
#define _FWDT_WINDIS_MASK                        0x00000080
#define _FWDT_WINDIS_LENGTH                      0x00000001

#define _FWDT_RWDTPS_POSITION                    0x00000008
#define _FWDT_RWDTPS_MASK                        0x00001F00
#define _FWDT_RWDTPS_LENGTH                      0x00000005

#define _FWDT_RCLKSEL_POSITION                   0x0000000D
#define _FWDT_RCLKSEL_MASK                       0x00006000
#define _FWDT_RCLKSEL_LENGTH                     0x00000002

#define _FWDT_FWDTEN_POSITION                    0x0000000F
#define _FWDT_FWDTEN_MASK                        0x00008000
#define _FWDT_FWDTEN_LENGTH                      0x00000001

#define _FWDT_w_POSITION                         0x00000000
#define _FWDT_w_MASK                             0xFFFFFFFF
#define _FWDT_w_LENGTH                           0x00000020

#define _FOSCSEL_FNOSC_POSITION                  0x00000000
#define _FOSCSEL_FNOSC_MASK                      0x00000007
#define _FOSCSEL_FNOSC_LENGTH                    0x00000003

#define _FOSCSEL_PLLSRC_POSITION                 0x00000004
#define _FOSCSEL_PLLSRC_MASK                     0x00000010
#define _FOSCSEL_PLLSRC_LENGTH                   0x00000001

#define _FOSCSEL_SOSCEN_POSITION                 0x00000006
#define _FOSCSEL_SOSCEN_MASK                     0x00000040
#define _FOSCSEL_SOSCEN_LENGTH                   0x00000001

#define _FOSCSEL_IESO_POSITION                   0x00000007
#define _FOSCSEL_IESO_MASK                       0x00000080
#define _FOSCSEL_IESO_LENGTH                     0x00000001

#define _FOSCSEL_POSCMOD_POSITION                0x00000008
#define _FOSCSEL_POSCMOD_MASK                    0x00000300
#define _FOSCSEL_POSCMOD_LENGTH                  0x00000002

#define _FOSCSEL_OSCIOFNC_POSITION               0x0000000A
#define _FOSCSEL_OSCIOFNC_MASK                   0x00000400
#define _FOSCSEL_OSCIOFNC_LENGTH                 0x00000001

#define _FOSCSEL_SOSCSEL_POSITION                0x0000000C
#define _FOSCSEL_SOSCSEL_MASK                    0x00001000
#define _FOSCSEL_SOSCSEL_LENGTH                  0x00000001

#define _FOSCSEL_FCKSM_POSITION                  0x0000000E
#define _FOSCSEL_FCKSM_MASK                      0x0000C000
#define _FOSCSEL_FCKSM_LENGTH                    0x00000002

#define _FOSCSEL_w_POSITION                      0x00000000
#define _FOSCSEL_w_MASK                          0xFFFFFFFF
#define _FOSCSEL_w_LENGTH                        0x00000020

#define _FSEC_CP_POSITION                        0x0000001F
#define _FSEC_CP_MASK                            0x80000000
#define _FSEC_CP_LENGTH                          0x00000001

#define _FSEC_w_POSITION                         0x00000000
#define _FSEC_w_MASK                             0xFFFFFFFF
#define _FSEC_w_LENGTH                           0x00000020

#define _AFDEVOPT_SOSCHP_POSITION                0x00000003
#define _AFDEVOPT_SOSCHP_MASK                    0x00000008
#define _AFDEVOPT_SOSCHP_LENGTH                  0x00000001

#define _AFDEVOPT_ALTI2C_POSITION                0x00000004
#define _AFDEVOPT_ALTI2C_MASK                    0x00000010
#define _AFDEVOPT_ALTI2C_LENGTH                  0x00000001

#define _AFDEVOPT_FUSBIDIO_POSITION              0x0000000E
#define _AFDEVOPT_FUSBIDIO_MASK                  0x00004000
#define _AFDEVOPT_FUSBIDIO_LENGTH                0x00000001

#define _AFDEVOPT_FVBUSIO_POSITION               0x0000000F
#define _AFDEVOPT_FVBUSIO_MASK                   0x00008000
#define _AFDEVOPT_FVBUSIO_LENGTH                 0x00000001

#define _AFDEVOPT_USERID_POSITION                0x00000010
#define _AFDEVOPT_USERID_MASK                    0xFFFF0000
#define _AFDEVOPT_USERID_LENGTH                  0x00000010

#define _AFDEVOPT_w_POSITION                     0x00000000
#define _AFDEVOPT_w_MASK                         0xFFFFFFFF
#define _AFDEVOPT_w_LENGTH                       0x00000020

#define _AFICD_JTAGEN_POSITION                   0x00000002
#define _AFICD_JTAGEN_MASK                       0x00000004
#define _AFICD_JTAGEN_LENGTH                     0x00000001

#define _AFICD_ICS_POSITION                      0x00000003
#define _AFICD_ICS_MASK                          0x00000018
#define _AFICD_ICS_LENGTH                        0x00000002

#define _AFICD_w_POSITION                        0x00000000
#define _AFICD_w_MASK                            0xFFFFFFFF
#define _AFICD_w_LENGTH                          0x00000020

#define _AFPOR_BOREN_POSITION                    0x00000000
#define _AFPOR_BOREN_MASK                        0x00000003
#define _AFPOR_BOREN_LENGTH                      0x00000002

#define _AFPOR_RETVR_POSITION                    0x00000002
#define _AFPOR_RETVR_MASK                        0x00000004
#define _AFPOR_RETVR_LENGTH                      0x00000001

#define _AFPOR_LPBOREN_POSITION                  0x00000003
#define _AFPOR_LPBOREN_MASK                      0x00000008
#define _AFPOR_LPBOREN_LENGTH                    0x00000001

#define _AFPOR_w_POSITION                        0x00000000
#define _AFPOR_w_MASK                            0xFFFFFFFF
#define _AFPOR_w_LENGTH                          0x00000020

#define _AFWDT_SWDTPS_POSITION                   0x00000000
#define _AFWDT_SWDTPS_MASK                       0x0000001F
#define _AFWDT_SWDTPS_LENGTH                     0x00000005

#define _AFWDT_FWDTWINSZ_POSITION                0x00000005
#define _AFWDT_FWDTWINSZ_MASK                    0x00000060
#define _AFWDT_FWDTWINSZ_LENGTH                  0x00000002

#define _AFWDT_WINDIS_POSITION                   0x00000007
#define _AFWDT_WINDIS_MASK                       0x00000080
#define _AFWDT_WINDIS_LENGTH                     0x00000001

#define _AFWDT_RWDTPS_POSITION                   0x00000008
#define _AFWDT_RWDTPS_MASK                       0x00001F00
#define _AFWDT_RWDTPS_LENGTH                     0x00000005

#define _AFWDT_RCLKSEL_POSITION                  0x0000000D
#define _AFWDT_RCLKSEL_MASK                      0x00006000
#define _AFWDT_RCLKSEL_LENGTH                    0x00000002

#define _AFWDT_FWDTEN_POSITION                   0x0000000F
#define _AFWDT_FWDTEN_MASK                       0x00008000
#define _AFWDT_FWDTEN_LENGTH                     0x00000001

#define _AFWDT_w_POSITION                        0x00000000
#define _AFWDT_w_MASK                            0xFFFFFFFF
#define _AFWDT_w_LENGTH                          0x00000020

#define _AFOSCSEL_FNOSC_POSITION                 0x00000000
#define _AFOSCSEL_FNOSC_MASK                     0x00000007
#define _AFOSCSEL_FNOSC_LENGTH                   0x00000003

#define _AFOSCSEL_PLLSRC_POSITION                0x00000004
#define _AFOSCSEL_PLLSRC_MASK                    0x00000010
#define _AFOSCSEL_PLLSRC_LENGTH                  0x00000001

#define _AFOSCSEL_SOSCEN_POSITION                0x00000006
#define _AFOSCSEL_SOSCEN_MASK                    0x00000040
#define _AFOSCSEL_SOSCEN_LENGTH                  0x00000001

#define _AFOSCSEL_IESO_POSITION                  0x00000007
#define _AFOSCSEL_IESO_MASK                      0x00000080
#define _AFOSCSEL_IESO_LENGTH                    0x00000001

#define _AFOSCSEL_POSCMOD_POSITION               0x00000008
#define _AFOSCSEL_POSCMOD_MASK                   0x00000300
#define _AFOSCSEL_POSCMOD_LENGTH                 0x00000002

#define _AFOSCSEL_OSCIOFNC_POSITION              0x0000000A
#define _AFOSCSEL_OSCIOFNC_MASK                  0x00000400
#define _AFOSCSEL_OSCIOFNC_LENGTH                0x00000001

#define _AFOSCSEL_SOSCSEL_POSITION               0x0000000C
#define _AFOSCSEL_SOSCSEL_MASK                   0x00001000
#define _AFOSCSEL_SOSCSEL_LENGTH                 0x00000001

#define _AFOSCSEL_FCKSM_POSITION                 0x0000000E
#define _AFOSCSEL_FCKSM_MASK                     0x0000C000
#define _AFOSCSEL_FCKSM_LENGTH                   0x00000002

#define _AFOSCSEL_w_POSITION                     0x00000000
#define _AFOSCSEL_w_MASK                         0xFFFFFFFF
#define _AFOSCSEL_w_LENGTH                       0x00000020

#define _AFSEC_CP_POSITION                       0x0000001F
#define _AFSEC_CP_MASK                           0x80000000
#define _AFSEC_CP_LENGTH                         0x00000001

#define _AFSEC_w_POSITION                        0x00000000
#define _AFSEC_w_MASK                            0xFFFFFFFF
#define _AFSEC_w_LENGTH                          0x00000020

/* Vector Numbers */
#define _CORE_TIMER_VECTOR                       0
#define _CORE_SOFTWARE_0_VECTOR                  1
#define _CORE_SOFTWARE_1_VECTOR                  2
#define _EXTERNAL_0_VECTOR                       3
#define _EXTERNAL_1_VECTOR                       4
#define _EXTERNAL_2_VECTOR                       5
#define _EXTERNAL_3_VECTOR                       6
#define _EXTERNAL_4_VECTOR                       7
#define _CHANGE_NOTICE_A_VECTOR                  8
#define _CHANGE_NOTICE_B_VECTOR                  9
#define _CHANGE_NOTICE_C_VECTOR                  10
#define _CHANGE_NOTICE_D_VECTOR                  11
#define _TIMER_1_VECTOR                          17
#define _TIMER_2_VECTOR                          18
#define _TIMER_3_VECTOR                          19
#define _COMPARATOR_1_VECTOR                     23
#define _COMPARATOR_2_VECTOR                     24
#define _COMPARATOR_3_VECTOR                     25
#define _USB_VECTOR                              29
#define _RTCC_VECTOR                             32
#define _ADC_VECTOR                              33
#define _HLVD_VECTOR                             36
#define _CLC1_VECTOR                             37
#define _CLC2_VECTOR                             38
#define _CLC3_VECTOR                             39
#define _CLC4_VECTOR                             40
#define _SPI1_ERR_VECTOR                         41
#define _SPI1_TX_VECTOR                          42
#define _SPI1_RX_VECTOR                          43
#define _SPI2_ERR_VECTOR                         44
#define _SPI2_TX_VECTOR                          45
#define _SPI2_RX_VECTOR                          46
#define _SPI3_ERR_VECTOR                         47
#define _SPI3_TX_VECTOR                          48
#define _SPI3_RX_VECTOR                          49
#define _UART1_RX_VECTOR                         53
#define _UART1_TX_VECTOR                         54
#define _UART1_ERR_VECTOR                        55
#define _UART2_RX_VECTOR                         56
#define _UART2_TX_VECTOR                         57
#define _UART2_ERR_VECTOR                        58
#define _UART3_RX_VECTOR                         59
#define _UART3_TX_VECTOR                         60
#define _UART3_ERR_VECTOR                        61
#define _I2C1_SLAVE_VECTOR                       65
#define _I2C1_MASTER_VECTOR                      66
#define _I2C1_BUS_VECTOR                         67
#define _I2C2_SLAVE_VECTOR                       68
#define _I2C2_MASTER_VECTOR                      69
#define _I2C2_BUS_VECTOR                         70
#define _I2C3_SLAVE_VECTOR                       71
#define _I2C3_MASTER_VECTOR                      72
#define _I2C3_BUS_VECTOR                         73
#define _CCP1_VECTOR                             74
#define _CCT1_VECTOR                             75
#define _CCP2_VECTOR                             76
#define _CCT2_VECTOR                             77
#define _CCP3_VECTOR                             78
#define _CCT3_VECTOR                             79
#define _CCP4_VECTOR                             80
#define _CCT4_VECTOR                             81
#define _CCP5_VECTOR                             82
#define _CCT5_VECTOR                             83
#define _CCP6_VECTOR                             84
#define _CCT6_VECTOR                             85
#define _CCP7_VECTOR                             86
#define _CCT7_VECTOR                             87
#define _CCP8_VECTOR                             88
#define _CCT8_VECTOR                             89
#define _CCP9_VECTOR                             90
#define _CCT9_VECTOR                             91
#define _FRC_TUNE_VECTOR                         92
#define _NVM_VECTOR                              94
#define _PERFORMANCE_COUNTER_VECTOR              95
#define _ECCSB_ERR_VECTOR                        97
#define _DMA0_VECTOR                             98
#define _DMA1_VECTOR                             99
#define _DMA2_VECTOR                             100
#define _DMA3_VECTOR                             101

/* Device Peripherals */
#define _ADC
#define _CCP1
#define _CCP2
#define _CCP3
#define _CCP4
#define _CCP5
#define _CCP6
#define _CCP7
#define _CCP8
#define _CCP9
#define _CDAC1
#define _CLC1
#define _CLC2
#define _CLC3
#define _CLC4
#define _CMP1
#define _CMP2
#define _CMP3
#define _CRU
#define _DMAC
#define _DMAC0
#define _DMAC1
#define _DMAC2
#define _DMAC3
#define _FRC
#define _HLVD
#define _I2C1
#define _I2C2
#define _I2C3
#define _INT
#define _NVM
#define _PORTA
#define _PORTB
#define _PORTC
#define _RTCC
#define _SPI1
#define _SPI2
#define _SPI3
#define _TMR1
#define _TMR2
#define _TMR3
#define _UART1
#define _UART2
#define _UART3
#define _USB
#define _USB1
#define _WDT

/* Base Addresses for Peripherals */
#define _ADC_BASE_ADDRESS                        0xBF802100
#define _CCP1_BASE_ADDRESS                       0xBF800100
#define _CCP2_BASE_ADDRESS                       0xBF800200
#define _CCP3_BASE_ADDRESS                       0xBF800300
#define _CCP4_BASE_ADDRESS                       0xBF800400
#define _CCP5_BASE_ADDRESS                       0xBF800500
#define _CCP6_BASE_ADDRESS                       0xBF800600
#define _CCP7_BASE_ADDRESS                       0xBF800700
#define _CCP8_BASE_ADDRESS                       0xBF800800
#define _CCP9_BASE_ADDRESS                       0xBF800900
#define _CDAC1_BASE_ADDRESS                      0xBF802380
#define _CLC1_BASE_ADDRESS                       0xBF802480
#define _CLC2_BASE_ADDRESS                       0xBF802500
#define _CLC3_BASE_ADDRESS                       0xBF802580
#define _CLC4_BASE_ADDRESS                       0xBF802600
#define _CMP1_BASE_ADDRESS                       0xBF802310
#define _CMP2_BASE_ADDRESS                       0xBF802330
#define _CMP3_BASE_ADDRESS                       0xBF802350
#define _CRU_BASE_ADDRESS                        0xBF802680
#define _DMAC0_BASE_ADDRESS                      0xBF808960
#define _DMAC1_BASE_ADDRESS                      0xBF808A20
#define _DMAC2_BASE_ADDRESS                      0xBF808AE0
#define _DMAC3_BASE_ADDRESS                      0xBF808BA0
#define _DMAC_BASE_ADDRESS                       0xBF808900
#define _FRC_BASE_ADDRESS                        0xBF802880
#define _HLVD_BASE_ADDRESS                       0xBF802920
#define _I2C1_BASE_ADDRESS                       0xBF801500
#define _I2C2_BASE_ADDRESS                       0xBF801600
#define _I2C3_BASE_ADDRESS                       0xBF801700
#define _INT_BASE_ADDRESS                        0xBF80F000
#define _NVM_BASE_ADDRESS                        0xBF802930
#define _PORTA_BASE_ADDRESS                      0xBF802BB0
#define _PORTB_BASE_ADDRESS                      0xBF802CB0
#define _PORTC_BASE_ADDRESS                      0xBF802DB0
#define _RTCC_BASE_ADDRESS                       0xBF800000
#define _SPI1_BASE_ADDRESS                       0xBF808100
#define _SPI2_BASE_ADDRESS                       0xBF808200
#define _SPI3_BASE_ADDRESS                       0xBF808300
#define _TMR1_BASE_ADDRESS                       0xBF808000
#define _TMR2_BASE_ADDRESS                       0xBF808040
#define _TMR3_BASE_ADDRESS                       0xBF808080
#define _UART1_BASE_ADDRESS                      0xBF801800
#define _UART2_BASE_ADDRESS                      0xBF801900
#define _UART3_BASE_ADDRESS                      0xBF802000
#define _USB1_BASE_ADDRESS                       0xBF808440
#define _USB_BASE_ADDRESS                        0xBF808440
#define _WDT_BASE_ADDRESS                        0xBF803990

/* Default Memory-region macros */
#define __KSEG0_PROGRAM_MEM_BASE                 0x9D000000
#define __KSEG0_PROGRAM_MEM_LENGTH               0x10000
#define __DEBUG_EXEC_MEM_BASE                    0x9FC00490
#define __DEBUG_EXEC_MEM_LENGTH                  0x760
#define __KSEG1_BOOT_MEM_BASE                    0xBFC00000
#define __KSEG1_BOOT_MEM_LENGTH                  0x490
#define __KSEG0_DATA_MEM_BASE                    0x80000000
#define __KSEG0_DATA_MEM_LENGTH                  0x4000
#define __CONFIGSFRS_BFC01740_BASE               0xBFC01740
#define __CONFIGSFRS_BFC01740_LENGTH             0x1C
#define __CONFIGSFRS_BFC017C0_BASE               0xBFC017C0
#define __CONFIGSFRS_BFC017C0_LENGTH             0x1C
#define __SFRS_BASE                              0xBF800000
#define __SFRS_LENGTH                            0x100000

/*  The following device macros are predefined by the MPLAB XC32
 *  compiler when compiling with the -mprocessor=<device> option.
 *  We also define them here to help the MPLAB X editor evaluate
 *  them correctly.
 */
#ifndef __32MM0064GPM028
#  define __32MM0064GPM028 1
#endif
#ifndef __32MM0064GPM028__
#  define __32MM0064GPM028__ 1
#endif
#ifndef __XC__
#  define __XC__ 1
#endif
#ifndef __XC
#  define __XC 1
#endif
#ifndef __XC32__
#  define __XC32__ 1
#endif
#ifndef __XC32
#  define __XC32 1
#endif
#ifndef __PIC32MM
#  define __PIC32MM 1
#endif
#ifndef __PIC32MM__
#  define __PIC32MM__ 1
#endif
#ifndef __PIC32_FLASH_SIZE
#  define __PIC32_FLASH_SIZE 64
#endif
#ifndef __PIC32_FEATURE_SET
#  define __PIC32_FEATURE_SET "GP"
#endif
#ifndef __PIC32_FEATURE_SET__
#  define __PIC32_FEATURE_SET__ "GP"
#endif
#ifndef __PIC32_FEATURE_SET0
#  define __PIC32_FEATURE_SET0 'G'
#endif
#ifndef __PIC32_FEATURE_SET1
#  define __PIC32_FEATURE_SET1 'P'
#endif
#ifndef __PIC32_PRODUCT_GROUP
#  define __PIC32_PRODUCT_GROUP 'M'
#endif
#ifndef __PIC32_PIN_COUNT
#  define __PIC32_PIN_COUNT 28
#endif

/*  The following device macros indicate which core features are
 *  available on this device.
 */
#ifndef __PIC32_HAS_MICROMIPS
# define __PIC32_HAS_MICROMIPS 1
#endif
#ifndef __PIC32_HAS_MCUASE
# define __PIC32_HAS_MCUASE 1
#endif
#ifndef __PIC32_HAS_SSX
# define __PIC32_HAS_SSX 1
#endif
#ifndef __PIC32_HAS_INTCONVS
# define __PIC32_HAS_INTCONVS 1
#endif
#ifndef __PIC32_HAS_INIT_DATA
# define __PIC32_HAS_INIT_DATA 1
#endif
#ifndef __PIC32_SRS_SET_COUNT
# define __PIC32_SRS_SET_COUNT 2
#endif

#endif
