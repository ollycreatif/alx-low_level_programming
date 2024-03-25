#include <stdio.h>

/**
 * main - Print all combinations of 3 digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, n, p;

	m = 48;
	while (m <= 55)
	{
		n = 49;
		while (n <= 56)
		{
			p = 50;
			while (p <= 57)
			{
				if (m == n || n == p || m == p)
				{
				}
				else if (m > n || n > p || m > p)
				{
				}
				else
				{
					putchar(m);
					putchar(n);
					putchar(p);
					if (m == 55 && n == 56 && p == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				p++;
			}
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}
