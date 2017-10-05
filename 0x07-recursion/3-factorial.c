#include "holberton.h"

/**
 * factorial - returns factorial of a given number
 * @n: number used for the factorial
 *
 * Return: value of the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
