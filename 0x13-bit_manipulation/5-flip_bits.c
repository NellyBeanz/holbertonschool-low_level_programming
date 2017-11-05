#include "holberton.h"

/**
 * flip_bits - returns the num of bits needed to flip to get from
 * one num to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned long int count;

	count = 0;
	i = n ^ m;
	while (i != 0)
	{
		if (i & 1)
		{
			count++;
		}
		i = i >> 1;
	}
	return (count);
}
