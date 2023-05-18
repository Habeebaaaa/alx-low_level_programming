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
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
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
	a = malloc(sizeof(int) * nmemb);

	if (a == 0)
		return (NULL);
	_memset(a, 0, sizeof(int) * nmemb);
	return (a);
}
