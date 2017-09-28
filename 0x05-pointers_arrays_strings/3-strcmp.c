#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: difference in values
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (s1[b] != '\0' && s2[b] != '\0')
	{
		if (a == 0)
			a = s1[b] - s2[b];
		b++;
	}
	return (a);
}
