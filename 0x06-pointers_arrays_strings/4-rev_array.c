#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: Array to reverse
 * @n: Number of elements in a
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int sample[1000];
	int i;

	for (i = 0; i < n; i++)
		sample[i] = a[i];
	n--;
	i = 0;
	while (n >= 0)
	{
		a[n] = sample[i];
		n--;
		i++;
	}
}
