#include "main.h"

/**
 * get_bit - Computes the value of a given index
 * @n: Number whose value is to be checked
 * @index: Index at which to look for n
 * Return: Value of given index, -1 if function fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c = 0;

	if (index > (sizeof(8) * 8))
		return (-1);

	while (c < index)
	{
		n = n >> 1;
		c++;
	}
	return ((n & 1));
}
