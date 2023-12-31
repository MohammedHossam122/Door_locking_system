/*
 * buzzer.c
 *
 *  Created on: Jul 1, 2023
 *      Author: mhoss
 */



#include "gpio.h"
#include "buzzer.h"

/***************************************************************************************************
 *                                		Definitions                                  			   *
 ***************************************************************************************************/

/*
 * Description :
 * Initialize the Buzzer port direction and pin
 */
void Buzzer_init(void)
{
	GPIO_setupPinDirection(BUZZER_PORT_ID, BUZZER_PIN_ID, PIN_OUTPUT);
}

/*
 * Description :
 * Function that switches buzzer off
 */
void buzzerOn(void)
{
	GPIO_writePin(BUZZER_PORT_ID, BUZZER_PIN_ID, LOGIC_HIGH);
}

/*
 * Description :
 * Function that switches buzzer off
 */
void buzzerOff(void)
{
	GPIO_writePin(BUZZER_PORT_ID, BUZZER_PIN_ID, LOGIC_LOW);
}
