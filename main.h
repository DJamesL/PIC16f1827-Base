//#include "Peripheral_Initialization.h"

void output_a(int porta);// CCS C like 
void output_b(int porta);// CCS C like 
void load_default_values(void);
//void output_c(int porta);
//void output_d(int porta); 

#define 	INIT_TMR0			0x00
#define 	INIT_PORTA 			0x02
#define 	INIT_PORTB 			0x00
#define 	TRISA_CONFIG 		0x02
#define 	TRISB_CONFIG 		0x00


//------------------------------------------------------------------------------
//PIC16F1827,, DIP version
//------------------------------------------------------------------------------

// PORTA

#define		PINOUT_unusedA0		RA0	 	//pin17, Unused, Output, N/A
#define		PINOUT_unusedA1		RA1	 	//pin18, Unused, Output, N/A 
#define		PINOUT_unusedA2		RA2	 	//pin01, Unused, Output, N/A
#define		PINOUT_unusedA3		RA3	 	//pin02, Unused, Output, N/A  
#define		PINOUT_unusedA4    	RA4	 	//pin03, Unused, Output, N/A
#define		PININ_MCLR_A5		RA5	 	//pin04, MCLR, Input, Digital
#define		PINOUT_unusedA6		RA6	 	//pin15, Unused, Output, N/A  
#define		PINOUT_unusedA7		RA7	 	//pin16, Unused, Output, N/A 

// PORTB
#define		PINOUT_unusedB0			RB0	 	//pin06, Unused, Output, N/A
#define		PINOUT_unusedB1			RB1	 	//pin07, Unused, Output, N/A
#define		PINOUT_unusedB2			RB2	 	//pin08, Unused, Output, N/A
#define		PINOUT_unusedB3			RB3	 	//pin09, Unused, Output, N/A  
#define		PINOUT_unusedB4    		RB4	 	//pin10, Unused, Output, N/A
#define		PINOUT_unusedB5			RB5	 	//pin11, Unused, Output, N/A 
#define		PINOUT_unusedB6			RB6	 	//pin12, Unused, Output, N/A  
#define		PINOUT_unusedB7			RB7	 	//pin13, Unused, Output, N/A 
