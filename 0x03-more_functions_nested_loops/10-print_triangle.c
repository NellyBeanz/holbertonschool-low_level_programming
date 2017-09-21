#include "holberton.h"

/**
 * print_triangle - prints triangle
 * @n: size of tiangle
 */
void print_triangle(int n)
{
	int a, b, c, d;

	d = n - 1;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			for (a = 0; a < d; a++)
			{
				_putchar(' ');
			}
			for (b = d; b < n; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
			d--;
		}
	}
}
