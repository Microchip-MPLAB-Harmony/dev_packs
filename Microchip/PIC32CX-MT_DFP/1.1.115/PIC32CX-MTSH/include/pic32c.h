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

#ifndef _SAM_
#define _SAM_

#if   defined(__PIC32CX1025MTSH128__) || defined(__PIC32CX1025MTSH128__)
  #include "pic32cx1025mtsh128.h"
#elif defined(__PIC32CX1025MTSH128S1__) || defined(__PIC32CX1025MTSH128S1__)
  #include "pic32cx1025mtsh128s1.h"
#elif defined(__PIC32CX2051MTSH128__) || defined(__PIC32CX2051MTSH128__)
  #include "pic32cx2051mtsh128.h"
#elif defined(__PIC32CX2051MTSH128S1__) || defined(__PIC32CX2051MTSH128S1__)
  #include "pic32cx2051mtsh128s1.h"
#elif defined(__PIC32CX5112MTSH128__) || defined(__PIC32CX5112MTSH128__)
  #include "pic32cx5112mtsh128.h"
#elif defined(__PIC32CX5112MTSH128S1__) || defined(__PIC32CX5112MTSH128S1__)
  #include "pic32cx5112mtsh128s1.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_ */
