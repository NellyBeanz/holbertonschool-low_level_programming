#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int c = '0';
	int k = '0';

	while (c <= '9')
	{
		while (k <= '9')
		{
			putchar (c);
			putchar (k);

			if (c != '9' || k != '9')
			{
				putchar(',');
				putchar(' ');
			}
			k++;
		}
		c++;
		k = '0';

	putchar ('\n');
	return (0);
}
