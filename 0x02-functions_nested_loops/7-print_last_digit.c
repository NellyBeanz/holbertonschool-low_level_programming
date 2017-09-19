#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: last digit
 *
 * Return: value of last digit, n
 */
int print_last_digit(int n)
{
	int q = n % 10;

	if (n < 0)
		q *= -1;
	_putchar (q + '0');
	return (q);
}
