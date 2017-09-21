#include "holberton.h"

/**
 * print_diagonal - draws diagonal line
 * @n: number of times \ should be printed
 */
void print_diagonal(int n)
{
	int k;
	int m;

	if (n > 0)
		for (k = 0; k < n; k++)
		{
			for (m = 0; m < k; m++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
