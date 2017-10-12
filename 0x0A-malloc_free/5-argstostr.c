#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int len = 0;
	int l = 0;
	int w = 0;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	for (w = 0; w < ac; w++)
	{
		for (l = 0; av[w][l] != '\0'; l++)
		{
			len++;
		}
		len++;
	}
	s = malloc(sizeof(char) * len + 1);
	len = 0;

	for (w = 0; w < ac; w++)
	{
		for (l = 0; av[w][l] != '\0'; l++)
		{
			s[len] = av[w][l];
			len++;
		}
		s[len] = '\n';
		len++;
	}
	s[len] = '\0';
	return (s);
}
