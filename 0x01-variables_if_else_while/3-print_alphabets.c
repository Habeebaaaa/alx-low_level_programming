#include <stdio.h>

/**
*main - entry point
*
*description:print alphabet by putchar
*
*Return: 0 (seccess)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z */
	while (ch <= 'z')
{
		putchar(ch);
		ch++;
}
	/*prints A - Z */
	while (CH <= 'Z')
{
	putchar(CH);
	CH++;
}
	putchar(\n);

	return (0);
}
