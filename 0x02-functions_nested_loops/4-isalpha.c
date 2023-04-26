#include"main.h"

/**
 * _isalpha - function to check alphabetic character
 *
 * @c: checks input of function
 *
 * Return: return 1 if true and 0 (success)
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
