#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers.
 * @min: start of int
 * @max: end of int
 * Return: array of int
 */

int *array_range(int min, int max)
{
	int *r;
	int l, s;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	r = malloc(sizeof(int) * l);

	if (!r)
		return (NULL);
	for (s = 0; s < l; s++)
		r[s] = min++;
	return (r);
}
