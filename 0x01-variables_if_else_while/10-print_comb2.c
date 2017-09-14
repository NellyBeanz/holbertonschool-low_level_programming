#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints numbers 00-99 separated by a comma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int c;
	int k;

	for (c = '0'; c <= '9'; c++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			putchar (c);
			putchar (k);
			if (!(c == '9' && k == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
