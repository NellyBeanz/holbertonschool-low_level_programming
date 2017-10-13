#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of blocks in memory
 * @size: size of memory in bytes
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (n = 0; n < nmemb * size; n++)
		ptr[n] = 0;
	return (ptr);
}
