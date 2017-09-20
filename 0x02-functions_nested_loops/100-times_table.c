#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: chacracter being used for times table
 */
void print_times_table(int n)
{
	int a;
	int b;
	int c;
	int d;

	if (n < 0 || n > 15)
		return;

	for (a = 0; a <= n; a++)
	{
		for (c = 0; c <= n; c++)
		{
			if (c == 0)
			{
				_putchar ('0');
			}
			else 
			{
				_putchar(' ');
				
				b = a * c;
				d = b / 100;
				if (d == 0)
					_putchar(' ');
				else
					_putchar(d + 48);
						 
				d = b / 10;
				if (d == 0)
					_putchar(' ');
				else
					_putchar((d % 10) + 48);
				_putchar((b % 10) + 48);
			}
			if (c < n)
				_putchar(',');
		}
		_putchar('\n');
	}
}	
				
