#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: int
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;

	int a, b;

	if (s1 == 0)
	{
		s1 = " ";
	}
	if (s2 == 0)
	{
		s2 = " ";
	}

	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	conct = malloc(sizeof(char) * (a + b + 1));

	if (conct == 0)
		return (0);
	a = b = 0;

	while (s1[a] != '\0')
	{
		conct[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		conct[a] = s2[b];
		a++, b++;
	}
	conct[a] = '\0';

	return (conct);

}

