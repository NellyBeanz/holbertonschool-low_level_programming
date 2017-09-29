#include "holberton.h"

/**
 * cap_string - capitalized all words of a string
 * @s: string to convert
 *
 * Return: string with capitalized words
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char k[] = {32, '\n', '\t', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] -= 32;
			}
			for (j = 0; k[j]; j++)
			{
				if (k[j] == s[i - 1])
				{
					s[i] -= 32;
					break;
				}
			}
		}
	}
	return (s);
}

