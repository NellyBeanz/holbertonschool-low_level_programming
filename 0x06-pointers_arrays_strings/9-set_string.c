#include "holberton.h"

/**
 * set_string - set value of pointer to a char
 * @s: pointer to pointer to be set
 * @to: value to change s to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
