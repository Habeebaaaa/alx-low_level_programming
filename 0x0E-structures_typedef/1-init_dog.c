#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog to init
 * @name: the dog's name
 * @age: god's age
 * @owner: owner's name
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
