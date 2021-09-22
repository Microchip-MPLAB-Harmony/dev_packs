/*----------------------------------------------------------------------------
 * Name:    Blinky.c
 * Purpose: LED Flasher
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include "sam.h"                        /* Device header */

#define LED_NUM     1                                 /* Number of user LEDs  */

extern const uint32_t led_mask[];
       const uint32_t led_mask[] = { 1U << 7 };



extern volatile uint32_t msTicks;
       volatile uint32_t msTicks;                     /* counts 1ms timeTicks */
/*----------------------------------------------------------------------------
  SysTick_Handler
 *----------------------------------------------------------------------------*/
void SysTick_Handler(void) {
  msTicks++;                        /* increment counter necessary in Delay() */
}

/*----------------------------------------------------------------------------
  delays number of tick Systicks (happens every 1 ms)
 *----------------------------------------------------------------------------*/
void Delay (uint32_t dlyTicks);
void Delay (uint32_t dlyTicks) {
  uint32_t curTicks;

  curTicks = msTicks;
  while ((msTicks - curTicks) < dlyTicks);
}

/*----------------------------------------------------------------------------
  configure LED pin (on SAML10-XPRO PA07 is LED0)
 *----------------------------------------------------------------------------*/
void LED_Init(void);
void LED_Init(void) {

  PORT->Group[0].DIRSET.reg = led_mask[0];            /* Setup Pins  for LEDs */
}

/*----------------------------------------------------------------------------
  Switch on LEDs
 *----------------------------------------------------------------------------*/
void LED_On (uint32_t num);
void LED_On (uint32_t num) {

  if (num < LED_NUM) {
    PORT->Group[0].OUTCLR.reg = led_mask[num];
  }
}


/*----------------------------------------------------------------------------
  Switch off LEDs
 *----------------------------------------------------------------------------*/
void LED_Off (uint32_t num);
void LED_Off (uint32_t num) {

  if (num < LED_NUM) {
    PORT->Group[0].OUTSET.reg = led_mask[num];
  }
}

/*----------------------------------------------------------------------------
  MAIN function
 *----------------------------------------------------------------------------*/
int main (void) {

  LED_Init();                             

  SystemCoreClockUpdate();
  SysTick_Config(SystemCoreClock / 1000);         /* Setup SysTick for 1 msec */
  
  while(1) {
    LED_On (0);
    Delay(250);
    LED_Off(0);
    Delay(250);
  }
  
}
