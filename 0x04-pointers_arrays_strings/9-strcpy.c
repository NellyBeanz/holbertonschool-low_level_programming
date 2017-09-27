#include "holberton.h"

/**
 * *_strcpy - copies string to buffer
 * @dest: pointer that is the destination
 * @src: string to copy
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	char *a;

	a = dest;
	while (*src != '\0')
	{
		*a = *src;
		a++;
		src++;
	}
	*a = '\0';
	return (dest);
}
