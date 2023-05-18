#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with constant byte
 * @s: pointer
 * @b: constant
 * @n: max byte to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;
	for (l = 0; l < n; l++)
	{
		s[l] = b;
	}
	return (s);
}
/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: array
 * @size: suze of elements
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (size == 0 || nmemb == 0)
		return (NULL);
	a = malloc(size * nmemb);

	if (a == NULL)
		return (NULL);
	_memset(a, 0, size * nmemb);
	return (a);
}
