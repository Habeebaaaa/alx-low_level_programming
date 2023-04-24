#include <stdio.h>

/**
*main - entry point
*
*description: print alphabet in reverse
*
*Return: 0 (seccess)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
{
	putchar(ch);
	ch--;
}
putchar('\n');

return (0);
}
