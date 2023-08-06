/*
 * buzzer.h
 *
 *  Created on: Jul 1, 2023
 *      Author: mhoss
 */

#ifndef BUZZER_H_
#define BUZZER_H_

/***************************************************************************************************
 *                                		Definitions                                  			   *
 ***************************************************************************************************/

#define	BUZZER_PORT_ID				PORTD_ID
#define BUZZER_PIN_ID				PIN3_ID


/***************************************************************************************************
 *                                		Functions Prototypes                                  	   *
 ***************************************************************************************************/

/*
 * Description :
 * Initialize the Buzzer port direction and pin
 */
void Buzzer_init(void);

/*
 * Description :
 * Function that switches buzzer off
 */
void buzzerOn(void);

/*
 * Description :
 * Function that switches buzzer off
 */
void buzzerOff(void);



#endif /* BUZZER_H_ */
