#include "holberton.h"

/**
 * set_bit - sets the vlue of a bit to 1 at a given index
 * @n: number
 * @index: index, starting from 0 of the bit being set
 *
 * Return: 1 for success or -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
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
	*n |= (i << index);

	return (1);
}
