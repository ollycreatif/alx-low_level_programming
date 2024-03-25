#include "main.h"

/**
 * _strlen - computes the length of a string
 * @s: Pointe to the string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int x;

	x = 0;
	while (*(s + x) != '\0')
		x++;
	return (x);
}
