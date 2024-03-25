#include "main.h"

void print_triangle(int size)
{
	int i, j, s;

	i = 1;
	while (i <= size)
	{
		s = size;
		while (s >= i + 1)
		{
			_putchar(' ');
			--s;
		}
		j = 1;
		while (j <= i)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
