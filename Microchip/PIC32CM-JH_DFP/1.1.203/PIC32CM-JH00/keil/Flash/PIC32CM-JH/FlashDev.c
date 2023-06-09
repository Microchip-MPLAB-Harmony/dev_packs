/*------------------------------------------------------------------------------
 * Copyright (c) 2022 Arm Limited (or its affiliates). All rights reserved.
 *------------------------------------------------------------------------------
 * Name:    FlashDev.c
 * Purpose: Flash Device Description for PIC32CM-JH
 * Rev.:    V1.0.0
 *----------------------------------------------------------------------------*/

#include "..\FlashOS.h"        /* FlashOS Structures */

extern struct FlashDevice const FlashDevice;

#ifdef FLASH_MEM

#ifdef PIC32CM_JH_256
  struct FlashDevice const FlashDevice  =  {
    FLASH_DRV_VERS,                /* Driver Version, do not modify! */
    "PIC32CM-JH 256kB Flash",      /* Device Name */
    ONCHIP,                        /* Device Type */
    0x00000000,                    /* Device Start Address */
    0x00040000,                    /* Device Size in Bytes (256kB) */
    1024,                          /* Programming Page Size (16 * 64, 64 is real page size) */
    0,                             /* Reserved, must be 0 */
    0xFF,                          /* Initial Content of Erased Memory */
    100,                           /* Program Page Timeout 100 mSec */
    1000,                          /* Erase Sector Timeout 1000 mSec */

    /* Specify Size and Address of Sectors */
    0x4000, 0x000000,              /* Sector Size 16kB (16 regions a 256 pages) */
    SECTOR_END
  };
#endif

#ifdef PIC32CM_JH_512
  struct FlashDevice const FlashDevice  =  {
    FLASH_DRV_VERS,                /* Driver Version, do not modify! */
    "PIC32CM-JH 512kB Flash",      /* Device Name */
    ONCHIP,                        /* Device Type */
    0x00000000,                    /* Device Start Address */
    0x00080000,                    /* Device Size in Bytes (512kB) */
    1024,                          /* Programming Page Size (16 * 64, 64 is real page size) */
    0,                             /* Reserved, must be 0 */
    0xFF,                          /* Initial Content of Erased Memory */
    100,                           /* Program Page Timeout 100 mSec */
    1000,                          /* Erase Sector Timeout 1000 mSec */

    /* Specify Size and Address of Sectors */
    0x8000, 0x000000,              /* Sector Size 32kB (16 regions a 512 pages) */
    SECTOR_END
  };
#endif

#endif /* FLASH_MEM */


#ifdef FLASH_DATA

#ifdef PIC32CM_JH_256
  struct FlashDevice const FlashDevice  =  {
    FLASH_DRV_VERS,                /* Driver Version, do not modify! */
    "PIC32CM-JH 8kB Data Flash",   /* Device Name */
    ONCHIP,                        /* Device Type */
    0x00400000,                    /* Device Start Address */
    0x00002000,                    /* Device Size in Bytes (8kB) */
    64,                            /* Programming Page Size */
    0,                             /* Reserved, must be 0 */
    0xFF,                          /* Initial Content of Erased Memory */
    100,                           /* Program Page Timeout 100 mSec */
    1000,                          /* Erase Sector Timeout 1000 mSec */

    /* Specify Size and Address of Sectors */
   0x100, 0x000000,                /* Sector Size 256B (1 ROW = 4 * page a 64 Byte) */
    SECTOR_END
  };
#endif

#ifdef PIC32CM_JH_512
  struct FlashDevice const FlashDevice  =  {
    FLASH_DRV_VERS,                /* Driver Version, do not modify! */
    "PIC32CM-JH 8kB Data Flash",   /* Device Name */
    ONCHIP,                        /* Device Type */
    0x00400000,                    /* Device Start Address */
    0x00002000,                    /* Device Size in Bytes (8kB) */
    64,                            /* Programming Page Size */
    0,                             /* Reserved, must be 0 */
    0xFF,                          /* Initial Content of Erased Memory */
    100,                           /* Program Page Timeout 100 mSec */
    1000,                          /* Erase Sector Timeout 1000 mSec */

    /* Specify Size and Address of Sectors */
   0x100, 0x000000,                /* Sector Size 256B (1 ROW = 4 * page a 64 Byte) */
    SECTOR_END
  };
#endif

#endif /* FLASH_DATA */

