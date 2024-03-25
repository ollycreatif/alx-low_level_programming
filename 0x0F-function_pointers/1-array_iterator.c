#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given as a parameter
 * on each element of an array
 * @array: Pointer to the array containing elements
 * @size: Size of array
 * @action: Pointer to function with type int argument
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	if (array == NULL || action == NULL)
		return;

	for (s = 0; s < size; s++)
		action(array[s]);
}
