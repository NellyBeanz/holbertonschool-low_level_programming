#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: int character
 *
 * Return: 0 if "c" is not a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
