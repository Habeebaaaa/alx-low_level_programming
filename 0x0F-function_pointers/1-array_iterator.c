#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array.
 * @array: the int array
 * @size: the size array
 * @action: pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *d = array + size - 1;

	if (array && size && action)
		while (array <= d)
			action(*array++);
}
