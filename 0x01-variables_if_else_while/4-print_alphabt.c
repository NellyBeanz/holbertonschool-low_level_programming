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
	{
		if (c != 'e' && c != 'q')
		putchar(c++);
		else
			c++;
	}
	putchar ('\n');
	return (0);
}
