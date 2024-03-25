#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		b = 0;
		while (b < size)
		{
			a = 0;
			while (a < size)
			{
				_putchar('#');
				a++;
			}
			_putchar('\n');
			b++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
