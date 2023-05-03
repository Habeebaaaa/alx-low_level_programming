#include "main.h"
/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line
 * @a: array name
 * @n: number of elements
 * Return: a and n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[1]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
