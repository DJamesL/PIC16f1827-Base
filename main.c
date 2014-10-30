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
	//****************************************
	//disable watchdog timer here
	
	//****************************************
	initialization();
	

	//****************************************
	//enable watchdog timer here
	
	//****************************************
	while(1)
	{
		CLRWDT();
		//insert code here
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