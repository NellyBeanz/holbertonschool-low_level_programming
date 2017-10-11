#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - return a pointer to a new string which is a duplicate of str
 * @str: string to duplicate
 *
 * Return: pointer to new string or NULL if malloc fails
 */
char *_strdup(char *str)
{
	char *copy;
	int i;
	int j;

	j = 0;
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		j++;
	copy = malloc(sizeof(char) * (j + 1));
	if (copy == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		copy[i] = str[i];
	copy[i] = '\0';
	return (copy);
}
