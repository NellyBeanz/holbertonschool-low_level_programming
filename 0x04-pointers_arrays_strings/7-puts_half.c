#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to string
 */
void puts_half(char *str)
{
	int a;

	a = 0;
	while (*str != '\0')
	{
		a++;
		str++;
	}
	if (a > 1 && (a % 2 != 0))
	{
		str = str - ((a - 1) / 2);
	}
	else if (a > 1)
	{
		str = str - (a / 2);
	}
	else
		str = str - a;

	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}
