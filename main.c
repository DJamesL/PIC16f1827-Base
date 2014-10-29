//BASIC I/O Practice Using C
//Standardize 
// Base from PIC16F1827_standard_project v1.0
//


#include <pic.h>
#include "main.h"
#include "Peripheral_Initialization.h"
#include <pic16f1827.h>
#include <STDLIB.H>
//#include <16F777.h>



//__PIC16F1827__
__CONFIG(CP_OFF & CPD_OFF & WDTE_ON & BOREN_ON & FOSC_INTOSC);
__CONFIG(STVREN_OFF & WRT_OFF & BORV_25 & PLLEN_OFF & LVP_OFF);
//




void main(void)
{
	initialization();
	while(1)
	{
		CLRWDT();
		PINOUT_LED2_A0 = 0b1;//insert code here
		PINOUT_LED1_A1 = 0b0;	
		PINOUT_LED4_A6 = 0b1;
		PINOUT_LED3_A7 = 0b0;
	}
}


void interrupt isr(void)	//Interrupt handler routine
{

}

void output_a(int x)
{
	PORTA = x;
}

void output_b(int x)
{
	PORTB = x;
}