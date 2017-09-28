#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer destination
 * @src: src string to dest string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
