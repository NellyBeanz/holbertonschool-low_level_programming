#include "holberton.h"

/**
 * _islower - returns 1 if it is a lowercase letter
 *
 * @c: character used to check for lowercase
 *
 * Return: Returns 0 if it is not lowercase
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')

		return (1);

	else

		return (0);
}
