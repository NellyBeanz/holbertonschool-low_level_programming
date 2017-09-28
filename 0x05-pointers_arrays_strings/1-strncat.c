#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer destination
 * @src: string to append
 * @n: number of bytes
 *
 * Return: concatenated string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	char *temp;

	temp = dest;
	while (*temp != '\0')
	{
		temp++;
	}
	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		*temp = src[a];
		temp++;
	}
	*temp = '\0';
	return (dest);
}
