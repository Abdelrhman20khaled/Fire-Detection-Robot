/*
 * Dc Motor Source File
 */


#include "dc_motor.h"
#include "gpio.h"



void DcMotor_Init(void){

	/*
	 * setup the two pins in the motor as output pins.
	 */
	GPIO_setupPinDirection(DC_MOTOR_PORT,DC_MOTOR_PIN1,PIN_OUTPUT);
	GPIO_setupPinDirection(DC_MOTOR_PORT,DC_MOTOR_PIN2,PIN_OUTPUT);
	GPIO_setupPinDirection(PORTC_ID,PIN5_ID,PIN_OUTPUT);
	/*
	 * put the output of two pins is 0 to make a DC motor stop in the first.
	 */
	GPIO_writePin(DC_MOTOR_PORT,DC_MOTOR_PIN1,LOGIC_LOW);
	GPIO_writePin(DC_MOTOR_PORT,DC_MOTOR_PIN2,LOGIC_LOW);
	GPIO_writePin(PORTC_ID,PIN5_ID,LOGIC_HIGH);

}

/*
 * this function takes 2 argument:
 * 1- first argument is state that represent that state of the motor stop or move.
 * 2- the second argument is
 * 3- check on the state of the motor that take it in main function and due to it
 * 	  will make a motor move in specific direction
 */
void DcMotor_Rotate(DcMotor_State state){

	// check the state of the motor to make it move in specific direction.
	if(state == Motor_Stop){
		GPIO_writePin(DC_MOTOR_PORT,DC_MOTOR_PIN1,LOGIC_LOW);
		GPIO_writePin(DC_MOTOR_PORT,DC_MOTOR_PIN2,LOGIC_LOW);
	}
	else if(state == Motor_CW){
		GPIO_writePin(DC_MOTOR_PORT,DC_MOTOR_PIN1,LOGIC_LOW);
		GPIO_writePin(DC_MOTOR_PORT,DC_MOTOR_PIN2,LOGIC_HIGH);
	}
	else if(state == Motor_A_CW){
		GPIO_writePin(DC_MOTOR_PORT,DC_MOTOR_PIN1,LOGIC_HIGH);
		GPIO_writePin(DC_MOTOR_PORT,DC_MOTOR_PIN2,LOGIC_LOW);
	}

}
