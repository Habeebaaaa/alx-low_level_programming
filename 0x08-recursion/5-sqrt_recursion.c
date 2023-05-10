#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to the square
 * @v: square
 * Return: the result
 */

int square(int n, int v);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - function to find square root
 * @n: int
 * @v: square
 * Return: int
 */

int square(int n, int v)
{
	if (v * v == n)
	{
		return (v);
	}
	else if (v * v < n)
	{
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
