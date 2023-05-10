#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of
 * the two diagonals of a square matrix of integers.
 *
 * @a: array
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int i, s0 = 0, s1 = 0;

	for (i = 0; i < size; i++)
	{
		s0 += a[i];
		s1 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", s0);
	printf("%d\n", s1);
}
