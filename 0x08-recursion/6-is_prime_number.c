#include "main.h"

/**
 * is_prime_number - check the prime numbers
 * @o: int
 * @n: int
 * Return: 0 or 1
 */

int _prime(int n, int o);
int is_prime_number(int n)
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
	if (o >= n && n > 1)
	{
		return (1);
	}
	else if (n % o == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prime(n, 0 + 1));
	}
}
