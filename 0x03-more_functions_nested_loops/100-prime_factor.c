#include <stdio.h>

/**
 * main - finds and prints largest primt factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int num = 612852475143, i = 2;

	while (i < num)
	{
		if (num % i != 0)
		{
			i++;
		}
		else if (num % i == 0)
		{
			num = num / i;
			i = 2;
		}
	}
	printf("%lu\n", num);
	return (0);
}
