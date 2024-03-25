#include "main.h"

/**
 * set_bit - Sets  the value of a bit to 1 at a given index
 * @n: Pointer to number whose value is to be set
 * @index: Index of number to set
 * Return: 1 if function worked, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	x = 1;
	x <<= index; /*x = x << mask*/

	*n = ((*n) | x);
	return (1);
}
