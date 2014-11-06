//
//Functions
//
//
//

#include <pic16f1827.h>

void output_a(int x)
{
	PORTA = x;
}

void output_b(int x)
{
	PORTB = x;
}

