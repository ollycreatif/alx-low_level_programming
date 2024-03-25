#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: String to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int x;

	x = 0;
	while (*(s + x) != 0)
		x++;

	x -= 1;
	while (x >= 0)
	{
		_putchar(*(s + x));
		x--;
	}
	_putchar('\n');
}
