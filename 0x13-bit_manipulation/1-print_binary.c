#include "holberton.h"

/**
 * print_binary - prints the binary represenatation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	else
	{
		print_binary(n >> 1);
	}

	if ((n & 1) == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('1');
	}
}
