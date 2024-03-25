#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: Number upon which the times table is based
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		i = 0;
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				multiplier(i, j);
				if (j == n)
					break;
				_putchar(',');

				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}

/**
 * multiplier - Computes the multiplication of two variables
 * and then some, as seen with the comma and spaces
 * @x: First variable
 * @y: Second variable
 */
void multiplier(int x, int y)
{
	int m = x * y;

	if (m < 10)
	{
		if (y != 0)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('0' + m);
	}
	else if (m < 100)
	{
		if (y != 0)
		{
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('0' + m / 10);
		_putchar('0' + m % 10);
	}
	else if (m < 1000)
	{
		if (y != 0)
			_putchar(' ');
		_putchar('0' + ((m / 10) / 10));
		_putchar('0' + ((m / 10) % 10));
		_putchar('0' + m % 10);
	}
}
