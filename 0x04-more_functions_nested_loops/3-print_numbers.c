#include "main.h"

/**
* print_numbers - function that prints numbers
*
*/

void print_numbers(void)
{
	int a = 0;

	do {
		_putchar(a + 48);
		a++;
	} while (a <= 9 && a >= 0);
		_putchar('\n');
}
