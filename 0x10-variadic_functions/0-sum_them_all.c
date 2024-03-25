#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function to sum all its parameters
 * @n: number of arguments
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argmts;
	unsigned int i, sum = 0;

	va_start(argmts, n);

	i = 0;
	while (i < n)
	{
		sum += va_arg(argmts, int);
		i++;
	}

	va_end(argmts);

	return (sum);
}
