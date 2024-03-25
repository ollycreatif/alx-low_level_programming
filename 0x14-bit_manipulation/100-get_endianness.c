#include "main.h"

/**
 * get_endianness - Checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n;
	int lb; /*little or big endianness*/

	n = 1;
	lb = (int)(((char *)&n)[0]);
	return (lb);
}
