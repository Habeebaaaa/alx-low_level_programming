#include "main.h"
/**
 * rev_string -  function that reverses a string.
 *
 * @s: string
 */

void rev_string(char *s)
{
	int l, i;
	char m;

	for (l = 0; s[l] != '\0'; ++l)
		;
	for (i = 0; i < 1 / 2; i++)
	{
		m = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = m;
	}
}
