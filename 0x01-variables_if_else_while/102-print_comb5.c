#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	int ch2;

	for (ch = 0; ch <= 99; ch++)
	{
		for (ch2 = 0; ch2 <= 99; ch2++)
		{
			if (ch < ch2)
			{
				putchar(ch / 10 + 48);
				putchar(ch % 10 + 48);
				putchar(' ');
				putchar(ch2 / 10 + 48);
				putchar(ch2 % 10 + 48);
				if (ch != 98 || ch != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
