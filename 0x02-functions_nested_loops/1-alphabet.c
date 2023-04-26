#include"main.h"

/**
 * print_alphabet - utilizes on  putchar function to print alphabet a - y
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
