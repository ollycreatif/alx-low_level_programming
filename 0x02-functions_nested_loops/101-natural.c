#include <stdio.h>
/**
 * main - Entry point
 * Description: Computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int n;
	int sum = 0;

	n = 1;
	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum += n;
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
