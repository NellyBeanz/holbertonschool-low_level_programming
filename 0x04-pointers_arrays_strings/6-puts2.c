#include "holberton.h"

/**
 * puts2 - prints 1 char out of 2 of a string
 * @str: pointer to string
 */
void puts2(char *str)
{
	int a;

	a = 0;
	while (*str != '\0')
	{
		if (a % 2 == 0)
			_putchar(*str);
		str++;
		a++;
	}
	_putchar('\n');
}
