#include <stdio.h>

/**
*main - entry point
*
*description: print single digit numbers
*
*Return: 0 (seccess)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
{
	printf("%d", digit);
	digit++;
}
printf("\n");

return (0);
}
