/* -----------------------------------------------------------------------------
 * Copyright (c) 2017 ARM Ltd.
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
 * $Date:        16. January 2017
 * $Revision:    V1.0.0
 *
 * Project:      Flash Device Description for ATSAMD51
 * --------------------------------------------------------------------------- */

/* History:
 *  Version 1.0.0
 *    Initial release
 */

#include "..\FlashOS.H"         // FlashOS Structures


/* ---- SAMD21 --------------------------------------------------------*/
#ifdef FLASH_MEM

#ifdef ATSAMD51_256
struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,              // Driver Version, do not modify!
   "ATSAMD51 256kB Flash",      // Device Name
   ONCHIP,                      // Device Type
   0x00000000,                  // Device Start Address
   0x00040000,                  // Device Size in Bytes (256kB)
   512,                         // Programming Page Size (512B page size */
   0,                           // Reserved, must be 0
   0xFF,                        // Initial Content of Erased Memory
   100,                         // Program Page Timeout 100 mSec
   1000,                        // Erase Sector Timeout 1000 mSec

// Specify Size and Address of Sectors
   0x2000, 0x000000,            // Sector Size 8kB (1 block a 512 pages)
   SECTOR_END
};
#endif

#ifdef ATSAMD51_512
struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,              // Driver Version, do not modify!
   "ATSAMD51 512kB Flash",      // Device Name
   ONCHIP,                      // Device Type
   0x00000000,                  // Device Start Address
   0x00080000,                  // Device Size in Bytes (512kB)
   512,                         // Programming Page Size (512B page size */
   0,                           // Reserved, must be 0
   0xFF,                        // Initial Content of Erased Memory
   100,                         // Program Page Timeout 100 mSec
   1000,                        // Erase Sector Timeout 1000 mSec

// Specify Size and Address of Sectors
   0x2000, 0x000000,            // Sector Size 8kB (1 block a 512 pages)
   SECTOR_END
};
#endif

#ifdef ATSAMD51_1024
struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,              // Driver Version, do not modify!
   "ATSAMD51 1024kB Flash",     // Device Name
   ONCHIP,                      // Device Type
   0x00000000,                  // Device Start Address
   0x00100000,                  // Device Size in Bytes (256kB)
   512,                         // Programming Page Size (512B page size */
   0,                           // Reserved, must be 0
   0xFF,                        // Initial Content of Erased Memory
   100,                         // Program Page Timeout 100 mSec
   1000,                        // Erase Sector Timeout 1000 mSec

// Specify Size and Address of Sectors
   0x2000, 0x000000,            // Sector Size 8kB (1 block a 512 pages)
   SECTOR_END
};
#endif

#endif /* FLASH_MEM */

