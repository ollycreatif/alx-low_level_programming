#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: String in question
 *
 * Return: void
 */

void puts_half(char *str)
{
	int x, y;

	x = y = 0;
	while (*(str + x) != 0)
		x++;
	if (x % 2 == 0)
		x /= 2;
	else
	{
		y = (x - 1) / 2;
		x -= y;
	}
	while (*(str + x) != 0)
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}
