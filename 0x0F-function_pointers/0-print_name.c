#include "function_poniters.h"

/**
 * print_name - function that prints a name.
 *
 * @name: the string
 * @f: the printig function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
