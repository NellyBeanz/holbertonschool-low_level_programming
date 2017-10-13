#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int n;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	n = 0;
	while (min <=  max)
	{
		ptr[n] = min;
		n++;
		min++;
	}
	return (ptr);
}
