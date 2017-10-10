#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: initializing character
 *
 * Return: NULL if size is 0 or a pointer to an array if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(size * sizeof(char));
	if (arr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}
