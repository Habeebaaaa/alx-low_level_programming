#include "main.h"

/**
 * int _isupper - function that checks for uppercase character
 *
 * @c: input of function
 *
 * Return: 1 if c uppercasr and 0 if not
 */

int _isupper(int c)
{
	for (c = 65; c <= 90; c++)

		if (c <= 'Z')
			return (1);
		else
			return (0);
}

