#include <stdlib.h>
#include "main.h"

/**
 * array_range - Function that creates an array of integers
 * @min: mininum number in the array
 * @max: maximum number in the array
 *
 * Return: Pointer to the array, NULL if function fails
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min;
	arr = malloc((size + 1) * sizeof(int));

	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
