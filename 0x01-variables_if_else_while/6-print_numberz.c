#include <stdio.h>

/**
*main - entry point
*
*description: print digit numbers
*
*Return: 0 (seccess)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
{
	/* convert digit to ASCIIA CODE */
	putchar(digit + '0');
	digit++;
}
printf("\n");

return (0);
}
