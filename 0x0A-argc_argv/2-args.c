#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives.
 *
 * @argc: int
 * @argv: array
 * Return: 0 alwys success
 */

int main(int argc, char *argv[])
{
	int a = 0;

	for (; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
