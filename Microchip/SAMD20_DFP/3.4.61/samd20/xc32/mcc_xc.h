/*-------------------------------------------------------------------------
 * XC processor header for PIC32C devices
 *
 * Copyright (c) 2017, Microchip Technology Inc. and its subsidiaries ("Microchip")
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
 *         with the distribution.
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
#ifndef __XC_MCC_PIC32C_H
#define __XC_MCC_PIC32C_H


#if defined(__SAMD20G17__)
#  include <samd20g17.h>
#elif defined(__SAMD20J15__)
#  include <samd20j15.h>
#elif defined(__SAMD20E14__)
#  include <samd20e14.h>
#elif defined(__SAMD20G14__)
#  include <samd20g14.h>
#elif defined(__SAMD20G18__)
#  include <samd20g18.h>
#elif defined(__SAMD20J17__)
#  include <samd20j17.h>
#elif defined(__SAMD20E17__)
#  include <samd20e17.h>
#elif defined(__SAMD20G15__)
#  include <samd20g15.h>
#elif defined(__SAMD20E15__)
#  include <samd20e15.h>
#elif defined(__SAMD20E16__)
#  include <samd20e16.h>
#elif defined(__SAMD20E18__)
#  include <samd20e18.h>
#elif defined(__SAMD20J14__)
#  include <samd20j14.h>
#elif defined(__SAMD20G18U__)
#  include <samd20g18u.h>
#elif defined(__SAMD20G16__)
#  include <samd20g16.h>
#elif defined(__SAMD20J18__)
#  include <samd20j18.h>
#elif defined(__SAMD20G17U__)
#  include <samd20g17u.h>
#elif defined(__SAMD20J16__)
#  include <samd20j16.h>
#else
  /* Try the legacy file */
  #include "../include/xc.h"
#endif


#if defined (__LANGUAGE_C__) || defined (__LANGUAGE_C_PLUS_PLUS__)

#if defined(__XC32_VERSION) && (__XC32_VERSION >= 2490)
#include <pic32c_builtins.h>
#endif

#ifndef _nop
#define _nop() __builtin_nop()
#endif /* _nop */

#ifndef Nop
/* Consider using _nop rather than Nop */
#define Nop()  _nop()
#endif /* Nop */

#endif /* defined (__LANGUAGE_C__) || defined (__LANGUAGE_C_PLUS_PLUS__) */

#endif /* __XC_MCC_PIC32C_H */
