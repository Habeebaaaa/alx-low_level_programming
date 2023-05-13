#include <stdio.h>
#include "main.h"

/**
 * main - prints its name, followed by a new line.
 *
 * @argc: int
 * @argv: array of string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
