#include "main.h"

/**
* print_numbers - function that prints numbers
*
*/

void print_numbers(void)
{
	int a = 0;
	for (a = 48; a <= 57; a++)
		_putchar('a');
	while (a <= 9 && a >= 0)
		_putchar('\n');
}
