#include <stdio.h>

/**
 * main - computes and prints the sum of all multiples of 3 or 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;
	int sum;

	sum = 0;
	for (a = 0; a < 1024; a++)
	{
		b = a % 3;
		c = a % 5;
			if (b == 0 || c == 0)
				sum = sum + a;
	}
	printf("%d\n", sum);
	return (0);
}
