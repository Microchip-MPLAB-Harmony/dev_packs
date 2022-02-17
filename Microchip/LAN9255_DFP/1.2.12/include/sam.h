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

#if   defined(__LAN9255ZMX018__) || defined(__LAN9255ZMX018__)
  #include "lan9255zmx018.h"
#elif defined(__LAN9255ZMX020__) || defined(__LAN9255ZMX020__)
  #include "lan9255zmx020.h"
#elif defined(__LAN9255ZMX019__) || defined(__LAN9255ZMX019__)
  #include "lan9255zmx019.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_ */

