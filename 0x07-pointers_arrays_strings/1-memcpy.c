#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: Memory location to copy to
 * @src: Memory location to copy from
 * @n: Amount to copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
