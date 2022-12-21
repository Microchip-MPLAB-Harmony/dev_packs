/**
 * \file
 *
 * \brief Top level header file
 *
 * Copyright (c) 2022 Microchip Technology Inc.
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

#if   defined(__PIC32CK0512SG00064__) || defined(__PIC32CK0512SG00064__)
  #include "pic32ck0512sg00064.h"
#elif defined(__PIC32CK0512SG00100__) || defined(__PIC32CK0512SG00100__)
  #include "pic32ck0512sg00100.h"
#elif defined(__PIC32CK1025SG00064__) || defined(__PIC32CK1025SG00064__)
  #include "pic32ck1025sg00064.h"
#elif defined(__PIC32CK1025SG00100__) || defined(__PIC32CK1025SG00100__)
  #include "pic32ck1025sg00100.h"
#elif defined(__PIC32CK2051SG00064__) || defined(__PIC32CK2051SG00064__)
  #include "pic32ck2051sg00064.h"
#elif defined(__PIC32CK2051SG00100__) || defined(__PIC32CK2051SG00100__)
  #include "pic32ck2051sg00100.h"
#elif defined(__PIC32CK2051SG00144__) || defined(__PIC32CK2051SG00144__)
  #include "pic32ck2051sg00144.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_ */

