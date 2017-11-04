#include "holberton.h"

/**
 * print_binary - prints the binary represenatation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned int num;

	if (n > 1)
	{
		print_binary(n >> 1);
	}

	num = n & 1;
	if (num == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('1');
	}
}
