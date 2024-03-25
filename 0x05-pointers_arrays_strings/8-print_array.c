#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: Pointer to the array
 * @n: Elements of the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		printf("%d", *(a + x));
		if (x != n - 1)
			printf(", ");
		x++;
	}
	_putchar('\n');
}
