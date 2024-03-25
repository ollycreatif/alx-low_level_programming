#include <stdio.h>

/**
 * main - Print alphabet except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char z = 'a';

	while (z <= 'z')
	{
		if (z != 'q' && z != 'e')
		{
			putchar(z);
		}
		z++;
	}
	putchar('\n');
	return (0);
}
