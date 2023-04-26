#include "main.h"

/**
 * _abs - function that compute the value of an integer
 *
 * @n: takes interger type input for function
 *
 * Return: always 0 (succcess)
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
