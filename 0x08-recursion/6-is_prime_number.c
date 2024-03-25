#include "main.h"

/**
 * detect_prime_number - Checks if a number is prime or not
 * @n: Number to check
 * @d: Divisor
 * Return: 1 if number is prime, 0 otherwise
 */

int detect_prime_number(int n, int d)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 2);

	if (n % d == 0)
		return (0);

	if ((d * d) > n)
		return (1);

	return (detect_prime_number(n, d + 1));
}

/**
 * is_prime_number - Calls function that checks if prime or not
 * because if can only take one parameter
 * @n: Number to check
 * Return: Prime detector that takes two parameters
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (detect_prime_number(n, 2));
}
