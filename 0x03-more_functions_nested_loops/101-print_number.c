#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: number that is printed
 */
void print_number(int n)
{
	int x = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while ((n / x) >= 10)
	{
		x *= 10;
	}
	while (x >= 10)
	{
		_putchar((n / x) + 48);
		n = n % x;
		x = x / 10;
	}
	_putchar ((n / x) + 48);
}
