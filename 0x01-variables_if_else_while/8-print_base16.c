#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
		putchar (c++);

	c = 'a';

	while (c <= 'f')
		putchar (c++);

	putchar ('\n');
	return (0);
}