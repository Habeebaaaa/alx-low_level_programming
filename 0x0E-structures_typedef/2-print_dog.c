#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print a dog
 * @d: dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nail)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d-.owner ? d->owner : "(nail)");
	}
