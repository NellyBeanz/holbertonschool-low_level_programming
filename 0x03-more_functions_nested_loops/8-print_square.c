#include "holberton.h"

/**
 * print_square - prints a square
 * @c: size of the square
 */
void print_square(int c)
{
	int a;
	int b;

	if (c > 0)
		for (a = 0; a < c; a++)
		{
			for (b = 0; b < c; b++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
