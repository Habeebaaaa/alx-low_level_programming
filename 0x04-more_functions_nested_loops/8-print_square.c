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

	for (row = 1; row <= size; row++)
	{
		for (colum = 1; colum <= size; colum++)
			_putchar('#');
		_putchar('\n');
	}
}
