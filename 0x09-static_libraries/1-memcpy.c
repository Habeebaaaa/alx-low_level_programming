#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 *
 * @dest: memory for store
 * @src: memory for copy
 * @n: umber of bytes
 *
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
