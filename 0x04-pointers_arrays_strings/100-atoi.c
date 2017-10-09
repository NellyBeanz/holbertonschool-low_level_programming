#include "holberton.h"

/**
 * _atoi - convert string to integer
 * @s: string to check
 * Return: void
 */
int _atoi(char *s)
{
	int i;
	int j;
	unsigned int num;

	i = num = 0;
	j = 1;
	while ((!(s[i] >= 48 && s[i] <= 57)) && s[i] != '\0')
	{
		if (s[i] == '-')
			j *= -1;
		i++;
	}
	if (s[i] == '\0')
		return (num);
	while ((s[i] >= 48 && s[i] <= 57) && s[i] != '\0')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	return (num * j);
}
