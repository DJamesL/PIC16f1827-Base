//BASIC I/O Practice Using C
//Standardize 
// Base from PIC16F1827_standard_project v1.0
//
// RA4 default is MCLR
//


#include <pic.h>
#include "main.h"
#include "default_values.h"
#include "Peripheral_Initialization.h"
#include <pic16f1827.h>
#include <STDLIB.H>
//#include <16F777.h>



//__PIC16F1827__
__CONFIG(CP_OFF & CPD_OFF & MCLRE_ON & WDTE_ON & BOREN_ON & FOSC_INTOSC);
__CONFIG(STVREN_OFF & WRT_OFF & BORV_25 & PLLEN_OFF & LVP_OFF);
//




void main(void)
{
	//****************************************
	//disable watchdog timer here
	WDTCONbits.SWDTEN = 0;
	//****************************************
	initialization();
	load_default_values();

	//****************************************
	//enable watchdog timer here
	WDTCONbits.SWDTEN = 1;
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
