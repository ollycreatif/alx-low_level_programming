#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: Converted number, 0  if function fails
 */

unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int n = 0;

	if (!b)
		return (0);

	for (c = 0; b[c] != '\0'; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);

		n <<= 1;
		if (b[c] == '1')
			n += 1;
	}
	return (n);
}
