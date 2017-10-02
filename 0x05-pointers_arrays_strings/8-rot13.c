#include "holberton.h"

/**
 * rot13 - encodes string
 * @s: string to convert
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char en[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		while (alpha[j] != '\0')
		{
			if (s[i] == alpha[j])
			{
				s[i] = en[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
