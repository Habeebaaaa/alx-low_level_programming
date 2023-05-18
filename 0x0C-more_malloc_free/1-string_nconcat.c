#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: int
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
		unsigned int a, b, s_lenght1, s_lenght2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (s_lenght1 = 0; s1[s_lenght1] != '\0'; s_lenght1++)
		;
	for (s_lenght2 = 0; s2[s_lenght2] != '\0'; s_lenght2++)
		;
	/* memory reservation */
	string = malloc(s_lenght1 + n + 1);
	if (string == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		string[a] = s2[b];
		a++;
	}
	string[a] = '\0';
		return (string);
}
