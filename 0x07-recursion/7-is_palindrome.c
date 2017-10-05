#include "holberton.h"

/**
 * mv - moves pointer to end of s
 * @e: pointer moved to end
 *
 * Return: end
 */
char *mv(char *e)
{
	if (*e != '\0')
		return (mv(++e));
	return (e);
}

/**
 * help - helps to see if string is palindrome
 * @b: pointer at beginning of s
 * @e: pointer at end of s
 *
 * Return: 1 if string is palindrome
 */
int help(char *b, char *e)
{
	if (*b != *e)
		return (0);
	if (b > e || b == e)
		return (1);
	return (help(++b, --e));
}

/**
 * is_palindrome - checks to see if string is palindrome
 * @s: string checked
 *
 * Return: 1 if string is palindrome
 */
int is_palindrome(char *s)
{
	char *e;

	e = s;
	return (help(s, (mv(e) - 1)));
}
