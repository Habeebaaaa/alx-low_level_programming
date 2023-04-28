#include "main.h"
/**
 * print_square - function that prints a square
 *
 * @size: size of square
 *
 * Return: 0 success
 */

void print_square(int size)
{
	int row, colum;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (colum = 0; colum < size; colum++)
			_putchar('#');
		_putchar('\n');
		}
	}
}
