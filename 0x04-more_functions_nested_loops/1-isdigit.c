#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: character to be checked
 *
 * Return: 1 if a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
