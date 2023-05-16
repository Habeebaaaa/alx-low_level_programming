#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function that returns a pointer
 * to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int size = 0, a = 0;
	char *n;

	if (str == 0)
		return (0);

	for (; str[size] != '\0'; size++)
		;
	n = malloc(size * sizeof(*str) + 1);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (; a < size; a++)
			n[a] = str[a];
	}
	return (n);
}
