#include "holberton.h"

/**
 * print_numbers - prints number 0 to 9  with a new line
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar(n + 48);
	_putchar('\n');
}
