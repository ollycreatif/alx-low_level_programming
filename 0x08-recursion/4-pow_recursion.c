#include "main.h"

/**
 * _pow_recursion - Computes the value a number raised to
 * the power of another
 * @x: base number
 * @y: power
 *
 * Return: base number raise to power power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
