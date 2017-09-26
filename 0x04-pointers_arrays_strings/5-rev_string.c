#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: pointer to  stringg
 */
void rev_string(char *s)
{
	int i, j;
	char k;

	i = 0;
	j = 0;

	while (*s != '\0')
	{
		j++;
		s++;
	}
	if (j > 0 && *s == '\0')
	{
		s -= j;
		j--;
	}
	while (i < j)
	{
		k = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = k;
		++i;
		--j;
	}
}
