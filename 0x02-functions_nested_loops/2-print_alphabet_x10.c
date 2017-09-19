#include "holberton.h"

/**
 * print_alphabet_x10 -  entry that prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int c;
	int i;

	for (i = '0'; i < '9'; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
		_putchar('\n');
	}
}
