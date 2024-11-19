/*
 * Application.c
 */
#include "gpio.h"
#include "uart.h"
#include "dc_motor.h"
#include "util/delay.h"

int main()
{
	uint8 Control_Byte = 0;
	UART_init(9600);
	DcMotor_Init();
	GPIO_setupPinDirection(PORTA_ID,PIN0_ID,PIN_OUTPUT);
	GPIO_writePin(PORTA_ID,PIN0_ID,LOGIC_LOW);

	while(1)
	{
		Control_Byte = UART_recieveByte();

		if(Control_Byte == 'F')
		{
			DcMotor_Rotate(Motor_CW);
		}
		else if(Control_Byte == 'S')
		{
			DcMotor_Rotate(Motor_Stop);
		}

	}


}
