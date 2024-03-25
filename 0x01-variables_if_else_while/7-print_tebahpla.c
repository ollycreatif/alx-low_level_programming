#include <stdio.h>

/**
 * main - Reverve alphabet
 *
 * Return: Alwyas 0 (Success)
 */
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
