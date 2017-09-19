#include "holberton.h"

/**
 * times_table - prints the 9 times table from 0 to 9
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (j != 0)
			{
				_putchar(' ');
			}
			if (k < 10 && j == 0)
			{
				_putchar((k % 10) + 48);
			}
			else if (k < 10)
			{
				_putchar(' ');
				_putchar((k % 10) + 48);
			}
			else
			{
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
			}
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
