#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: characters we are looking for
 *
 * Return: pointer to the first occurrence or NULL if no such byte
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;
	char *p;

	p = s;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (p + a);
		}
	}
	return (NULL);
}
