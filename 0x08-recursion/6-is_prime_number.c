#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * _prime - check the prime numbers
 * @o: int
 * @n: int
 * Return: 0 or 1
 */

int _prime(int n, int o);
int _sqrt_recursion(int n)
{
	return (_prime(n, 2));
}

/**
 * _prime - check the numbers
 * @n: int
 * @o: int
 * Return: int
 */

int _prime(int n, int o)
{
	if (o >= n && n >= 2)
	{
		return (2);
	}
	else if (n % o == 0 || n <= 10)
	{
		return (0);
	}
	else
	{
		return (_prime(n, 0 + 1));
	}
}
