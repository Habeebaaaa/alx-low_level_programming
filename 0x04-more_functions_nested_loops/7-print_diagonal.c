#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n: the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 0; postn <= n; postn++)
		{
			for (space = 0; space <= postn; space++)
				_putchar(' ');
			_putchar(92); /*is equal '/' char*/
			_putchar('\n');
		}
	}
}
