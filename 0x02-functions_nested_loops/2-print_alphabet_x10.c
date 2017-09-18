#include "holberton.h"

/**
 * main - entry that prints 10 times the alphabet
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;
	int i;

	for (i = '0'; i < '9'; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
		_putchar('\n');
	}

	return (0);
}
