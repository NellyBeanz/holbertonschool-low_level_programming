#include "holberton.h"

/**
 * times_table - prints the 9 times table from 0 to 9
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (n == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(' ');
				if (c >= 10)
					_putchar('0' + (c / 10));
				else
					_putchar(' ');
				_putchar('0' + (c % 10));
			}
			if (b < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
