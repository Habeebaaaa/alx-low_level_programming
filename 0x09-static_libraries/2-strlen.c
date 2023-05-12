#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: string
 * Return: lenght
 */

int _strlen(char *s)
{
	int l = 0;

	for (l = 0; *s != '\0'; s++)
		++l;
	return (l);
}
