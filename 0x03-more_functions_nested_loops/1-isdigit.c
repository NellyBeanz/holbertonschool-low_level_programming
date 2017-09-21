#include "holberton.h"

/**
 * _isdigit - checks for a digit, 0 through 9
 * @c: int number
 *
 * Return: 1 is c is a digit or 0 if it is not
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
