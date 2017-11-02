#include "holberton.h"

/**
 * binary_to_uint - converts a binary num to unsigned int
 * @b: pointer
 *
 * Return: converted number or 0 if b is NULL or if there is 1+ chars
 * in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum;

	sum = 0;
	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		else if (b[i] == '1')
		{
			sum = sum << 1;
			sum = sum | 1;
		}
		else
		{
			sum = sum << 1;
		}
	}
	return (sum);
}
