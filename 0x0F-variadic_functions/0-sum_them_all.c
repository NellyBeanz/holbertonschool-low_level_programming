#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that adds up all of its parameters
 * @n: number
 *
 * Return: 0 if n is equal to 0 or return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int sum;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
