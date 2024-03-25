#include "main.h"

/**
 * puts2 - Prints all characters in a string except those in odd  positions
 * @str: String to print
 *
 * Return: void
 */

void puts2(char *str)
{
	int x;

	x = 0;
	while (*(str + x) != '\0')
	{
		if (x % 2 == 0)
			_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}
