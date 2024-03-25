#include "main.h"

/**
 * flip_bits - Computes the number of bits needed to be flipped
 * to get from one number to another
 * @n: First number to consider
 * @m: Second number to consider
 * Return: Number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r; /*Result*/
	unsigned long int c = 0; /*Counter*/

	r = n ^ m;
	while (r > 0)
	{
		if ((r & 1) == 1)
			c++;
		r >>= 1;
	}
	return (c);
}
