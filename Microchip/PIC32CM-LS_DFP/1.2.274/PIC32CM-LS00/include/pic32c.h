/**
 * \file
 *
 * \brief Top level header file
 *
 * Copyright (c) 2023 Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

#ifndef _PIC32C_H_
#define _PIC32C_H_

#if   defined(__PIC32CM1216LS00032__) || defined(__PIC32CM1216LS00032__)
  #include "pic32cm1216ls00032.h"
#elif defined(__PIC32CM1216LS00048__) || defined(__PIC32CM1216LS00048__)
  #include "pic32cm1216ls00048.h"
#elif defined(__PIC32CM2532LS00048__) || defined(__PIC32CM2532LS00048__)
  #include "pic32cm2532ls00048.h"
#elif defined(__PIC32CM2532LS00064__) || defined(__PIC32CM2532LS00064__)
  #include "pic32cm2532ls00064.h"
#elif defined(__PIC32CM2532LS00100__) || defined(__PIC32CM2532LS00100__)
  #include "pic32cm2532ls00100.h"
#elif defined(__PIC32CM5164LS00048__) || defined(__PIC32CM5164LS00048__)
  #include "pic32cm5164ls00048.h"
#elif defined(__PIC32CM5164LS00064__) || defined(__PIC32CM5164LS00064__)
  #include "pic32cm5164ls00064.h"
#elif defined(__PIC32CM5164LS00100__) || defined(__PIC32CM5164LS00100__)
  #include "pic32cm5164ls00100.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _PIC32C_H_ */

