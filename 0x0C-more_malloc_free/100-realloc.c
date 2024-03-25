#include <stdlib.h>
#include "main.h"

/**
 * _memcpy - Copy n bytes from src to dest
 * @dest: Memory area to copy to
 * @src: Memory area to copy from
 * @n: Amount of memory to copy
 *
 * Return: Pointer to memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * _realloc - Function that reallocates a memory block
 * using malloc and free
 * @ptr: Old momery block
 * @old_size: Size of old memory block
 * @new_size: Size of new memory block
 *
 * Return: Pointer to new memory block, NULL if funtion fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int m;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);
	if (new_size < old_size)
		m = new_size;
	else
		m = old_size;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	new_ptr = _memcpy(new_ptr, ptr, m);
	free(ptr);

	return (new_ptr);
}
