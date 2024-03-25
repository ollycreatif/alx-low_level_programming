#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: Memory location pointed to
 * @b: Byte to fill memory with
 * @n: Amount to fill memory with
 *
 * Return: Pointer to memory location
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
