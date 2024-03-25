#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * But for multiples of three print Fizz instead
 * for the multiples of five print Buzz
 * for multiples of both three and five print FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int x = 1;

	while (x <= 100)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
		x++;
	}
	printf("\n");
	return (0);
}
