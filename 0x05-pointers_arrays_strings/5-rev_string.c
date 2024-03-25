#include "main.h"

/**
 * rev_string - reverses a string
 * @s: String to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	char string[1000];
	int x, y;

	x = 0;
	while (*(s + x) != 0)
	{
		string[x] = *(s + x);
		x++;
	}

	y = x - 1;
	x = 0;
	while (y >= 0)
	{
		*(s + y) = string[x];
		y--;
		x++;
	}
}
