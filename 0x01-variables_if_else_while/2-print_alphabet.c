#include <stdio.h>

/**
 * main - Print Alpahabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char z = 'a';

	while (z <= 'z')
	{
		putchar(z);
		z++;
	}
	putchar('\n');
	return (0);
}
