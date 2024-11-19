/*
 * Dc Motor header File
 */


#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include "gpio.h"

/******************************************************************************
 *                                Definitions                                 *
 ******************************************************************************/

// this identifier for define the port that motor connected on it
#define DC_MOTOR_PORT         PORTC_ID

/*
 *  this identifier for define the two pins that motor need for motion and third pins
 *   Enable pin is connected to the PWM output pin.
*/
#define DC_MOTOR_PIN1         PIN3_ID
#define DC_MOTOR_PIN2         PIN4_ID
#define DC_MOTOR_EN           PIN5_ID

/******************************************************************************
 * 				  	Structure and Enumerators Declaration			          *
 * ****************************************************************************/

/*
 * this enum include the elements start from zero to 2 that represent the output on
 * 2 pins in L293D (IN1,IN2) of motor to make it start motion in specific direction.
 *
 */
typedef enum{
	Motor_Stop,Motor_A_CW,Motor_CW
}DcMotor_State;

/******************************************************************************
 * 				  			 Functions Prototypes			                  *
 * ****************************************************************************/

/*
 *this function for initialization the 2 pins of the DC motor.
 */
void DcMotor_Init(void);

/*
 * this function for make the DC motor rotate in the specific direction due to the
 * input argument state and give it a speed from PWM function.
 */
void DcMotor_Rotate(DcMotor_State state);

#endif /* DC_MOTOR_H_ */
