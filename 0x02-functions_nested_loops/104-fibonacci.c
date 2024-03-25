#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	int t1 = 0, t2 = 1;
	int i, tn = t1 + t2;

	i = 0;
	while (i <= 98)
	{
		printf("%d, ", tn);
		t1 = t2;
		t2 = tn;
		tn = t1 + t2;
		i++;
	}
	printf("\n");
	return (0);
}
