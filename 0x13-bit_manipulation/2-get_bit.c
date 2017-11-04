#include "holberton.h"

/**
 * get_bit - gets value at a given index
 * @n: number
 * @index: index, starting from 0 of the bit being set
 *
 * Return: value of the bit at an index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index >= (sizeof(n) * 8))
	{
		return (-1);
	}

	i = 0;
	while (i < index)
	{
		n = (n >> 1);
		i++;
	}
	return (n & 1);
}
