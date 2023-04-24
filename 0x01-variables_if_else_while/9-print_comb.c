#include <stdio.h>

/**
*main - entry point
*
*description: print all combination of single-digit numbers
*
*Return: 0 (seccess)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
{
	putchar(digit);

	if (digit != 9)
	{
		putchar(',');
		putchar(' ');
	}
	digit++;
}
putchar('\n');

return (0);
}
