#include <stdio.h>

/**
 * main - Print alphABET
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char z = 'a';
	char cz = 'A';

	while (z <= 'z')
	{
		putchar(z);
		z++;
	}
	while (cz <= 'Z')
	{
		putchar(cz);
		cz++;
	}
	putchar('\n');
	return (0);
}
