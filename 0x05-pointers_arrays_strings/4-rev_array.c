#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i = n / 2;
	int j = n - 1;
	int k = 0;
	int l = 0;

	while (l < i)
	{
		k = a[l];
		a[l] = a[j];
		a[j] = k;
		l++;
		j--;
	}
}
