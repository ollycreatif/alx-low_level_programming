#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: String to be printed
 *
 * Return: void;
 */

void _puts(char *str)
{
	int x;

	x = 0;
	while (*(str + x) != '\0')
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}
