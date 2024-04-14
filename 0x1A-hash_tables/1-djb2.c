#include "hash_tables.h"

/**
 * hash_djb2 - hash function that implements the djb2 algorithm
 * @str: string to hash
 *
 * Return: calculated hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h; /*hash*/
	int c; /*counter*/

	h = 5381;
	while ((c = *str++))
		h = ((h << 5) + h) + c; /* hash * 33 + counter */

	return (h);
}
