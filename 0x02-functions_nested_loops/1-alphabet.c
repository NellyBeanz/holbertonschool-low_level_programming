#include "holberton.h"

/**
 * print_alphabet - prints lowercase alphabet with a new line
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
