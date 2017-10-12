#include <stdlib.h>

/**
 * _strlen - count the length of a string
 * @s: string to be measured
 *
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: characters to concatenate in s2
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, count;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n > _strlen(s2))
		n = _strlen(s2);

	count = _strlen(s1) + n;
	ptr = malloc(sizeof(*ptr) * count + 1);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	j = 0;
	while (n > 0)
	{
		ptr[i] = s2[j];
		i++;
		j++;
		n--;
	}
	ptr[i] = '\0';
	return (ptr);
}
