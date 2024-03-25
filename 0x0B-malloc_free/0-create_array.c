#include <stdlib.h>
#include "main.h"

/**
 * create_array - Function that creates an array of chars,
 * and initializes it with a specific char
 * @size: Size of the array
 * @c: Character to initialize
 *
 * Return: NULL if size = 0, pointer to the array,
 * or NULL if function fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));
	if (arr == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
