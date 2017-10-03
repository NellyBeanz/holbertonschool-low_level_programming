#include "holberton.h"

/**
 * _strspn - length of a prefix substring
 * @s: string to use
 * @accept: letters in prefix
 *
 * Return: number of bytes in inital segment from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c;

	c = 0;
	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b] >= 0; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;

			}
			if (accept[b] == '\0')
			return (c);
		}
	}
	return (c);
}
