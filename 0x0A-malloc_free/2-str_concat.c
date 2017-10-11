#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - calculate length
 * @str: string to be calculated
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int len;

	if (str == NULL)
	{
		len = 0;
		return (len);
	}
	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: String that concatenates
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i;
	int j;

	i = (_strlen(s1) + _strlen(s2) + 1);
	ptr = malloc(sizeof(char) * i);
	if (ptr == NULL)
		return (NULL);
	j = 0;
	if (s1 != NULL)
	{
		while (*s1 != '\0')
		{
			ptr[j] = *s1;
			s1++;
			j++;
		}
	}
	if (s2 != NULL)
	{
		while (*s2 != '\0')
		{
			ptr[j] = *s2;
			s2++;
			j++;
		}
	}
	ptr[j] = '\0';
	return (ptr);
}
