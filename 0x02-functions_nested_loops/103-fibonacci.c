#include <stdio.h>
/**
 * main - Entry point
 * Description: Finds and prints the sum of the even-valued Fibonacci
 * terms below 4000000
 * Return: 0
 */
int main(void)
{
	int t1 = 0, t2 = 1;
	int tn = t1 + t2;
	int i, sum = 0;

	i = 1;
	while (i <= 50 && tn < 4000000)
	{
		if (tn % 2 == 0)
			sum += tn;
		t1 = t2;
		t2 = tn;
		tn = t1 + t2;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
