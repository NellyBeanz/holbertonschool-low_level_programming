#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: string used to search
 * @needle: string we are locating
 *
 * Return: pointer to beginning of located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	while (haystack[a] != '\0')
	{
		c = a;
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[c] != needle[b])
				break;
			c++;
		}
		if (needle[b] == '\0')
		{
			return (&haystack[a]);
		}
		a++;
	}
	return (0);
}
