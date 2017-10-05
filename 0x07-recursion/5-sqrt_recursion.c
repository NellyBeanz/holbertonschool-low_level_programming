#include "holberton.h"

int root(int n, int a);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 *
 * Return: square root of number, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	int a;
	int b;

	a = 1;
	if (n < 0)
		return (-1);
	b = root(n, a);
	return (b);
}

/**
 * root - calculates square root and compares to n
 * @n: number to find square root of
 * @a: number to square and compare to n
 *
 * Return: square root of number
 */
int root(int n, int a)
{
	if ((a * a) == n)
		return (a);
	if ((a * a) > n)
		return (-1);
	return (root(n, a + 1));
}
