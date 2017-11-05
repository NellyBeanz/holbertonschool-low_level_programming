#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: number
 * @index: index starting from 0 of the bit being set
 *
 * Return: 1 if success or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index >= (sizeof(n) * 8))
	{
		return (-1);
	}

	if (n == NULL)
	{
		return (-1);
	}

	i = 1;
	*n = (*n & (~(i << index)));

	return (1);
}
