#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * @c: character in ASCII system
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
