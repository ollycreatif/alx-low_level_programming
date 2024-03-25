#include "main.h"

/**
 * factorial - Computes the factorial of a given number
 * @n: Given number
 * Return: -1 if n < 0, n, otherwise
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
