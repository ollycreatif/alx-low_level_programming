#include <stdio.h>

/**
 * main - Print single digits
 *
 * Return: Alwyas 0 (Succes)
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n < '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
