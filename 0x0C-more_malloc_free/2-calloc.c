#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Function that allocates memory for an array, using malloc
 * @nmemb: Number of elements in array
 * @size: bytes of each element
 *
 * Return: Pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i, arrsize;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arrsize = nmemb * size;
	arr = malloc(arrsize);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < arrsize; i++)
		arr[i] = 0;

	return (arr);
}
