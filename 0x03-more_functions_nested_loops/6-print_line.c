#include "holberton.h"

/**
 * print_line - draws a straight line
 * @n: spaces drawn
 */
void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
		_putchar('_');
	_putchar('\n');
}
