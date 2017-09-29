#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: input to string
 *
 * Return: string 1337
 */
char *leet(char *s)
{
	int i;
	int j;
	char letter[] = {'a', 'A', 'e', 'E', 'l', 'L', 'o', 'O', 't', 'T'};
	char num[] = {'4', '4', '3', '3', '1', '1', '0', '0', '7', '7'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (s[i] == letter[j])
				s[i] = num[j];
		}
	}
	return (s);
}
