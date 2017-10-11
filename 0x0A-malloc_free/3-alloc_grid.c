#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2-D array of integers
 * @width: amount of columns
 * @height: amount of rows
 *
 * Return: pointer to 2-D array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (width < 1 || height < 1)
		return (NULL);

	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			while (i > 0)
			{
				free(ptr[i]);
				i--;
			}
			free(ptr);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ptr);
}
