#include "holberton.h"

/**
 * *_strncpy - copies a string
 * @dest: string to overwrite
 * @src: string used to overwrite
 * @n: number of characters to be copied
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[a] = src[a];
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
