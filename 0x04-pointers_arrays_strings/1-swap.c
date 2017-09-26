#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first pointer to integer
 * @b: second pointer to integer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
