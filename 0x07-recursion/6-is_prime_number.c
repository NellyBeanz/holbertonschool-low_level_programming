#include "holberton.h"

/**
 * pr - checks if n is prime
 * @n: number checked
 * @div: divisor
 *
 * Return: 1 if prime number
 */
int pr(int n, int div)
{
	if (n == div)
		return (1);
	if (n % div == 0)
		return (0);
	return (pr(n, div + 1));
}

/**
 * is_prime_number - checks if number is prime
 * @n: number to check
 *
 * Return: 1 if it is prime
 */
int is_prime_number(int n)
{
	int div;
	int i;

	div = 2;
	if (n < 2)
		return (0);
	i = pr(n, div);
	return (i);
}
