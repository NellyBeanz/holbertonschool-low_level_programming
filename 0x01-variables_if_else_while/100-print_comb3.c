#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	int ch2;

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (ch2 = '0'; ch2 <= '9'; ch2++)
		{
			if (ch < ch2)
			{
				putchar(ch);
				putchar(ch2);
				if (ch != '8' || ch2 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
