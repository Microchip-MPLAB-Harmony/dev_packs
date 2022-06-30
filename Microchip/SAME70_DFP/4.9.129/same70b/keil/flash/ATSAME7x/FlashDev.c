/* -----------------------------------------------------------------------------
 * Copyright (c) 2015 ARM Ltd.
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from
 * the use of this software. Permission is granted to anyone to use this
 * software for any purpose, including commercial applications, and to alter
 * it and redistribute it freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software in
 *    a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source distribution.
 *
 *
 * $Date:        20. January 2015
 * $Revision:    V1.00
 *
 * Project:      Flash Device Description for ATSAME7x
 * --------------------------------------------------------------------------- */

/* History:
 *  Version 1.00
 *    Initial release
 */

#include "..\FlashOS.H"         // FlashOS Structures


#ifdef FLASH_MEM

#ifdef ATSAME7x_512
struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,              // Driver Version, do not modify!
   "ATSAME7x 512kB Flash",      // Device Name
   ONCHIP,                      // Device Type
   0x00400000,                  // Device Start Address
   0x00080000,                  // Device Size in Bytes (512kB)
   512,                         // Programming Page Size
   0,                           // Reserved, must be 0
   0xFF,                        // Initial Content of Erased Memory
   100,                         // Program Page Timeout 100 mSec
   1000,                        // Erase Sector Timeout 1000 mSec

// Specify Size and Address of Sectors
   0x2000, 0x000000,            // Sector Size 8KB (64 Sectors) [we use page delete; 16pages a 512byte once]
   SECTOR_END
};
#endif

#ifdef ATSAME7x_1024
struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,              // Driver Version, do not modify!
   "ATSAME7x 1024kB Flash",     // Device Name
   ONCHIP,                      // Device Type
   0x00400000,                  // Device Start Address
   0x00100000,                  // Device Size in Bytes (1024kB)
   512,                         // Programming Page Size
   0,                           // Reserved, must be 0
   0xFF,                        // Initial Content of Erased Memory
   100,                         // Program Page Timeout 100 mSec
   1000,                        // Erase Sector Timeout 1000 mSec

// Specify Size and Address of Sectors
   0x2000, 0x000000,            // Sector Size 8KB (128 Sectors) [we use page delete; 16pages a 512byte once]
   SECTOR_END
};
#endif

#ifdef ATSAME7x_2048
struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,              // Driver Version, do not modify!
   "ATSAME7x 2048kB Flash",     // Device Name
   ONCHIP,                      // Device Type
   0x00400000,                  // Device Start Address
   0x00200000,                  // Device Size in Bytes (2048kB)
   512,                         // Programming Page Size
   0,                           // Reserved, must be 0
   0xFF,                        // Initial Content of Erased Memory
   100,                         // Program Page Timeout 100 mSec
   1000,                        // Erase Sector Timeout 1000 mSec

// Specify Size and Address of Sectors
   0x2000, 0x000000,            // Sector Size 8KB (256 Sectors) [we use page delete; 16pages a 512byte once]
   SECTOR_END
};
#endif

#endif /* FLASH_MEM */

#ifdef FLASH_GPNVM
#if defined ATSAME7x_2048
struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,              // Driver Version, do not modify!
   "ATSAME7x GPNVM bits",       // Device Name
   ONCHIP,                      // Device Type
   0x1FFFFFF0,                  // Device Start Address
   0x00000010,                  // Device Size in Bytes (16)
   16,                          // Programming Page Size
   0,                           // Reserved, must be 0
   0xFF,                        // Initial Content of Erased Memory
   100,                         // Program Page Timeout 100 mSec
   1000,                        // Erase Sector Timeout 1000 mSec

// Specify Size and Address of Sectors
   0x010, 0x000000,             // Sector Size 16B
   SECTOR_END
};
#endif
#endif /* FLASH_GPNVM */
