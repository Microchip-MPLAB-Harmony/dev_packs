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
 * $Date:        20. September 2017
 * $Revision:    V1.0.0
 *
 * Project:      Flash Programming Functions for ATSAML10
 * --------------------------------------------------------------------------- */

#include <stdint.h>
#include "..\FlashOS.h"                               /* FlashOS Structures */

#define UNUSED(x) (void)(x)                           /* macro to get rid of 'unused parameter' warning */

/* System Control Interface register */
typedef struct {
  volatile uint32_t WRCTRL;                           /* offset: 0x000 (R/W 32) Write Control Register */
  /* ignore following registers */                    
} PAC_TypeDef;                                        
                                                      
                                                      
/* Flash register */                                  
typedef struct {                                      
  volatile uint16_t CTRLA;                            /* offset: 0x000 ( /W 16) Control A */
  volatile uint8_t  RESERVED1[2U];                    
  volatile uint32_t CTRLB;                            /* offset: 0x004 (R/W 32) Control B */
  volatile uint8_t  CTRLC;                            /* offset: 0x008 (R/W  8) Control C */
  volatile uint8_t  RESERVED2[1U];                    
  volatile uint8_t  EVCTRL;                           /* offset: 0x00A (R/W  8) Event Control */
  volatile uint8_t  RESERVED3[1U];                    
  volatile uint8_t  INTENCLR;                         /* offset: 0x00C (R/W  8) Interrupt Enable Clear */
  volatile uint8_t  RESERVED4[3U];                    
  volatile uint8_t  INTENSET;                         /* offset: 0x010 (R/W  8) Interrupt Enable Set */
  volatile uint8_t  RESERVED5[3U];                    
  volatile uint8_t  INTFLAG;                          /* offset: 0x014 (R/W  8) Interrupt Flag Status and Clear */
  volatile uint8_t  RESERVED6[3U];                    
  volatile uint16_t STATUS;                           /* offset: 0x018 (R/  16) Status */
  volatile uint8_t  RESERVED7[2U];                    
  volatile uint32_t ADDR;                             /* offset: 0x01C (R/W 32) Address */
  volatile uint16_t SULCK;                            /* offset: 0x020 (R/W 16) Secure Unlock Register */
  volatile uint16_t NSULCK;                           /* offset: 0x022 (R/W 16) Non-Secure Unlock Register */
  /* ignore following registers */
} NVMCTRL_TypeDef;

/* NVMCTRL Control Register A definitions */
#define NVMCTRL_CTRLA_CMDEX_KEY    (0xA5U   <<  8)    /* Command Execution Key */

/* NVMCTRL Control Register A command definitions */
#define NVMCTRL_CTRLA_CMD_ER       (0x02U   <<  0)    /* Erase Row */
#define NVMCTRL_CTRLA_CMD_WP       (0x04U   <<  0)    /* Write Page */
#define NVMCTRL_CTRLA_CMD_PBC      (0x44U   <<  0)    /* Page Buffer Clear */

/* NVMCTRL Interrupt Flag Register definitions */
#define NVMCTRL_INTFLAG_DONE       (0x01U   <<  0)    /* NVM Command Done */
#define NVMCTRL_INTFLAG_PROGE      (0x01U   <<  1)    /* Programming Error */
#define NVMCTRL_INTFLAG_LOCKE      (0x01U   <<  2)    /* Lock Error */
#define NVMCTRL_INTFLAG_KEYE       (0x01U   <<  3)    /* Key Error */
#define NVMCTRL_INTFLAG_NSCHK      (0x01U   <<  4)    /* Non-Secure Check */
#define NVMCTRL_INTFLAG_ERROR      (0x0FU   <<  1)    /* all possible errors */

/* NVMCTRL Status Register definitions */
#define NVMCTRL_STATUS_READY       (0x01U   <<  2)    /* NVM Ready */

/* NVMCTRL Secure Unlock Register definitions */
#define NVMCTRL_SULCK_SLKEY        (0xA5U   <<  8)    /* Secure Unlock Key */
#define NVMCTRL_SULCK_DS           (0x01U   <<  2)    /* DATA Secure Unlock Bit */
#define NVMCTRL_SULCK_AS           (0x01U   <<  1)    /* Application Secure Unlock Bit */
#define NVMCTRL_SULCK_BS           (0x01U   <<  0)    /* BOOT Secure Unlock Bit */

/* NVMCTRL Non-Secure Unlock Register definitions */
#define NVMCTRL_NSULCK_NSLKEY      (0xA5U   <<  8)    /* Non-Secure Unlock Key */
#define NVMCTRL_NSULCK_DNS         (0x01U   <<  2)    /* DATA Non-Secure Unlock Bit */
#define NVMCTRL_NSULCK_ANS         (0x01U   <<  1)    /* Application Non-Secure Unlock Bit */
#define NVMCTRL_NSULCK_BNS         (0x01U   <<  0)    /* BOOT Non-Secure Unlock Bit */


/* Oscillators controller register */
typedef struct {
  volatile uint8_t  EVCTRL;                           /* offset: 0x000 (R/W  8) Event Control */
  volatile uint8_t  RESERVED1[3U];                    
  volatile uint32_t INTENCLR;                         /* offset: 0x004 (R/W 32) Interrupt Enable Clear */
  volatile uint32_t INTENSET;                         /* offset: 0x008 (R/W 32) Interrupt Enable Set */
  volatile uint32_t INTFLAG;                          /* offset: 0x00C (R/W 32) Interrupt Flag Status and Clear */
  volatile uint32_t STATUS;                           /* offset: 0x010 (R/  32) Status */
  volatile uint16_t XOSCCTRL;                         /* offset: 0x014 (R/W 16) External Multipurpose Crystal Oscillator (XOSC) Control */
  volatile uint8_t  CFDPRESC;                         /* offset: 0x016 (R/W  8) Clock Failure Detector Prescaler */
  volatile uint8_t  RESERVED2[1U];                    
  volatile uint8_t  OSC16MCTRL;                       /* offset: 0x018 (R/W  8) 16MHz Internal Oscillator (OSC16M) Control */
  volatile uint8_t  RESERVED3[3U];
  /* ignore following registers */
} OSCCTRL_TypeDef;



/* Peripheral Memory Map */
/* ---- SAM L10 ------------------------------------------------------------------*/
#if defined ATSAML10_16 || defined ATSAML10_32 || defined ATSAML10_64
  #define PAC_BASE            (0x40000000)
  #define OSCCTRL_BASE        (0x40001000)
  #define NVMCTRL_BASE        (0x41004000)
#endif

#define PAC            ((      PAC_TypeDef *)   PAC_BASE)
#define NVMCTRL        ((  NVMCTRL_TypeDef *)   NVMCTRL_BASE)
#define OSCCTRL        ((  OSCCTRL_TypeDef *)   OSCCTRL_BASE)

#define FLASH_PAGE_SIZE        (64U)                  /* Page size is 64 Byte for all devices */
#define FLASH_ROW_SIZE         (FLASH_PAGE_SIZE * 4U) /* row = 4 pages */

extern uint32_t base_adr;                             /* Base Address  */
       uint32_t base_adr;

extern uint32_t  bod12_cal;
       uint32_t  bod12_cal;

int __disable_irq(void);


/*
 *  Initialize Flash Programming Functions
 *    Parameter:      adr:  Device Base Address
 *                    clk:  Clock Frequency (Hz)
 *                    fnc:  Function Code (1 - Erase, 2 - Program, 3 - Verify)
 *    Return Value:   0 - OK,  1 - Failed
 */

int Init (unsigned long adr, unsigned long clk, unsigned long fnc) {
  UNUSED(clk);
  UNUSED(fnc);

  __disable_irq();

  /* disable Watchdog */
/*
   --> add code to disable WDT
 */

  /* enable 16 MHz internal Oscillator */
  PAC->WRCTRL = (( 1U << 16) |                        /* disable OSCCTRL Write Protection */
                 ( 4U <<  0) );
  OSCCTRL->OSC16MCTRL |= (3U << 2);


  /* configure Flash access */
  PAC->WRCTRL = (( 1U << 16) |                        /* disable NVMCTRL Write Protection */
                 (34U <<  0) );
  NVMCTRL->CTRLB = (( 1U << 18) |                     /* cache disabled */
                    (15U <<  1)  );                   /* read wait states */
  NVMCTRL->CTRLC = (( 1U <<  0)  );                   /* manual write */

  /* clear all errors */
  NVMCTRL->INTFLAG = NVMCTRL_INTFLAG_ERROR;

  /* unlock all regions */
#if 0 /* currently not solved */
  NVMCTRL->SULCK  = (NVMCTRL_SULCK_SLKEY   |
                     NVMCTRL_SULCK_DS      |
                     NVMCTRL_SULCK_AS      |
                     NVMCTRL_SULCK_BS       );
#endif
  NVMCTRL->NSULCK = (NVMCTRL_NSULCK_NSLKEY |
                     NVMCTRL_NSULCK_DNS    |
                     NVMCTRL_NSULCK_ANS    |
                     NVMCTRL_NSULCK_BNS     );

  /* store Flash Start address */
  base_adr = adr;

  return (0);
}


/*
 *  De-Initialize Flash Programming Functions
 *    Parameter:      fnc:  Function Code (1 - Erase, 2 - Program, 3 - Verify)
 *    Return Value:   0 - OK,  1 - Failed
 */

int UnInit (unsigned long fnc) {
  UNUSED(fnc);

  return (0);
}


/*
 *  Erase complete Flash Memory
 *    Return Value:   0 - OK,  1 - Failed
 */

#if 0
/*
   We do not use the 'Erase All' command because ....
 */
int EraseChip (void) {

  /* erase all command */
  DSU->CTRL  = DSU_CTRL_CE;
  while (!(DSU->STATUSA  & DSU_STATUSA_DONE));

  return (0);
}
#endif


/*
 *  Erase Sector in Flash Memory
 *    Parameter:      adr:  Sector Address
 *    Return Value:   0 - OK,  1 - Failed
 */

int EraseSector (unsigned long adr) {

  /* check address alignment */
  if ((adr & ~3U) != adr) {
    return (1);
  }

  /* Erase row command */
  NVMCTRL->ADDR  = adr;                               /* 0..15 offset, 22..23 array (0 = Flash, 1 = DataFlsh, 2= AuxFlash) */
  NVMCTRL->CTRLA = NVMCTRL_CTRLA_CMDEX_KEY | NVMCTRL_CTRLA_CMD_ER;
  while (!(NVMCTRL->STATUS & NVMCTRL_STATUS_READY));

  /* check for errors */
  if (NVMCTRL->INTFLAG & NVMCTRL_INTFLAG_ERROR) {
    return (1);
  }

  return (0);
}


/*
 *  Program Page in Flash Memory
 *    Parameter:      adr:  Page Start Address
 *                    sz:   Page Size
 *                    buf:  Page Data
 *    Return Value:   0 - OK,  1 - Failed
 */

int ProgramPage (unsigned long adr, unsigned long sz, unsigned char *buf) {
  uint32_t *dst_adr;
  uint32_t  dst_val;
  uint32_t  page_sz;

  /* check address alignment */
  if ((adr & ~3U) != adr) {
    return (1);
  }
  
  /* adjust size to words */
  sz = (sz + 3U) & ~3U;

  /* set write pointer to destination address */
  dst_adr = (uint32_t *)adr;

  /* Clear page buffer; it is also cleared automatically after page write */
  NVMCTRL->CTRLA = NVMCTRL_CTRLA_CMDEX_KEY | NVMCTRL_CTRLA_CMD_PBC;
  while (!(NVMCTRL->STATUS & NVMCTRL_STATUS_READY));

  /* check for errors */
  if (NVMCTRL->INTFLAG & NVMCTRL_INTFLAG_ERROR) {
    return (1);
  }

  while (sz) {
    /* set the page size we want to write */
    page_sz = (sz > FLASH_PAGE_SIZE) ? FLASH_PAGE_SIZE : sz;

    /* copy data to page buffer */
    while (page_sz) {
      dst_val = ((uint32_t)(*(buf + 3) << 24) | 
                 (uint32_t)(*(buf + 2) << 16) |
                 (uint32_t)(*(buf + 1) <<  8) |
                 (uint32_t)(*(buf + 0) <<  0)  );
      *dst_adr++ = dst_val;
      
      sz        -= 4;
      buf       += 4;
      page_sz   -= 4;
    }
    
    /* Write page command */
    NVMCTRL->CTRLA = NVMCTRL_CTRLA_CMDEX_KEY | NVMCTRL_CTRLA_CMD_WP;
    while (!(NVMCTRL->STATUS & NVMCTRL_STATUS_READY));

    /* check for errors */
    if (NVMCTRL->INTFLAG & NVMCTRL_INTFLAG_ERROR) {
      return (1);
    }
  }

  return (0);
}
