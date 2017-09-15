#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 'a';

	while (c <= 'z')
		putchar(c++);

	c = 'A';

	while (c <= 'Z')
		putchar(c++);

	putchar ('\n');
	return (0);
}
