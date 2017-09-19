#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @i: int number
 * Return: absolute value of i
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (-1 * i);
	}
}

