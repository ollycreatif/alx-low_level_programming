#include "main.h"
/**
 * print_alphabet_x10 - Print lowercase alphabets 10x
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
