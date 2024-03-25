#include "main.h"

/**
 * print_binary - Prints the binary rep of a number
 * @n: Number to interprete as binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar(48);
	else
		decide(n);
}

/**
 * decide - Computes the binary rep of a number
 * @n: Number to represent
 */
void decide(unsigned long int n)
{
	if (n == 0)
		return;

	decide((n >> 1));
	if ((n & 1) == 1)
		_putchar(49);
	if ((n & 1) == 0)
		_putchar(48);
}
