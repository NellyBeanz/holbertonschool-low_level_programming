#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory to fill
 * @b: byte used to fill
 * @n: amount of bytes to be written
 *
 * Return: pointer to memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
