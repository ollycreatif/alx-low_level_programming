#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 *
 * @i: the number
 *
 * Return: last digit of i
 */

int print_last_digit(int i)
{
	int l;

	l = i % 10;

	if (l > 0)
	{
		_putchar(l + 48);
		return (l);
	}
	else
	{
		_putchar(-l + 48);
		return (-l);
	}
}
