#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: Prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	int ch2;
	int ch3;

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (ch2 = '0'; ch2 <= '9'; ch2++)
		{
			for (ch3 = '0'; ch3 <= '9'; ch3++)
			{
				if (ch < ch2 && ch2 < ch3)
				{
					putchar(ch);
					putchar(ch2);
					putchar(ch3);
					if (ch != '7' || ch2 != '8' || ch3 != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
